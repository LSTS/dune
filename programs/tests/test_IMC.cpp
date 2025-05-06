//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 6bee838bc8d005037b4a2fadc1660b58                            *
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
    msg.setTimeStamp(0.9277420545692678);
    msg.setSource(46223U);
    msg.setSourceEntity(133U);
    msg.setDestination(52333U);
    msg.setDestinationEntity(153U);
    msg.state = 54U;
    msg.flags = 37U;
    msg.description.assign("MXWNDRRHWFJOJAXPRYKWFLVKZZLHGEJJTCTFLHJMENLEIRHFNYPBBGEEXSGMXQFMCPHGQLGJOIZEIZNUQTSAANVHTJXUPKSP");

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
    msg.setTimeStamp(0.5375436958977913);
    msg.setSource(4160U);
    msg.setSourceEntity(29U);
    msg.setDestination(55407U);
    msg.setDestinationEntity(51U);
    msg.state = 111U;
    msg.flags = 102U;
    msg.description.assign("BJBGFGSAOOFTSZYLLEPFSWXPYGNBVASCEAALNNBGTYUPMUFGTMURGWKDKJUZLEERTHGHZHPDUVTYETFHHRGDKOQUSZV");

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
    msg.setTimeStamp(0.9930152709501071);
    msg.setSource(47803U);
    msg.setSourceEntity(123U);
    msg.setDestination(49171U);
    msg.setDestinationEntity(118U);
    msg.state = 242U;
    msg.flags = 250U;
    msg.description.assign("FEXEJPTTREHLVFJV");

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
    msg.setTimeStamp(0.1463365717341909);
    msg.setSource(6201U);
    msg.setSourceEntity(11U);
    msg.setDestination(56472U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.06171763056840496);
    msg.setSource(35759U);
    msg.setSourceEntity(37U);
    msg.setDestination(46719U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.10541426335938398);
    msg.setSource(5951U);
    msg.setSourceEntity(174U);
    msg.setDestination(13042U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.8106019025418749);
    msg.setSource(17480U);
    msg.setSourceEntity(140U);
    msg.setDestination(26269U);
    msg.setDestinationEntity(212U);
    msg.id = 233U;
    msg.label.assign("ETSPLCMZLKANIXUGXACPVRXBYSQVBUVJEPZENZWBWXUNFNDMYIETSDCCGDZHQMYWAVRRFOLUTKETFJBZTGHPKNNLBEDKTWCFEFLJNWLGQWAZVODPLESZAJUAQLXRPOIMHHOSSTFRTXOHQEBRYQVLKUVKFWIYSOMIHOITCJQJWPCCRXKGASAQXUIOUGKJVIZWZHYDOKMPNRFPCYDDFMQACFBH");
    msg.component.assign("VQZPDWRAKDTVDKANKTCIRUCTRRSMXBZNXLCOJLDSYGVVNLFAUEVVCIHQUMQYHKZZOYDBGVJPNIJGZIADGAFPNRDCPUEFXWRHJHLOWOFMLDCLVMBFUIOTZBMVBOKSUFXTHIJFPFYEHOJBBWUJNDKGIEGZQWERBHRTJLWCFXNBKOBMYZQOLPPHIWXUANJMKYDGCSNOHEYEICFQPJUZGUACRXIPEETQMYSSK");
    msg.act_time = 30548U;
    msg.deact_time = 49357U;

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
    msg.setTimeStamp(0.4600431529515424);
    msg.setSource(1139U);
    msg.setSourceEntity(43U);
    msg.setDestination(26803U);
    msg.setDestinationEntity(226U);
    msg.id = 228U;
    msg.label.assign("DCAGKXQMSHKQHKESLSPXOXIOBVBSLJDFHTTKBNOVMSFSYACJVLRDRIUMZYXPRUOGITPQFXISUMRJZRVCUECKNWONMQUXQIEGBTTAYUDNZBHJOZIYTGJKWLAEUPLAGYXKHXKTUACIWJNWDDHPYQEPODWKCGMXWPRMQFOBEDNTHKECZWTJRWFLFNATFFIZUZRCMDRJOAPBSMVLNJBNYEGHRBGAZV");
    msg.component.assign("WHBFPWVUANWDRYEYIEAFBDIUOHTLYUWQGJJHSCSAOFZKTWNZKYCYNPVDUQBVENISOQIXLZXRFDNXOXAKFSGZVHELTECWZVMRMFMPGBTNEUKOTTWVRGBPHEOATP");
    msg.act_time = 41901U;
    msg.deact_time = 53483U;

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
    msg.setTimeStamp(0.4667756509478441);
    msg.setSource(34759U);
    msg.setSourceEntity(83U);
    msg.setDestination(24130U);
    msg.setDestinationEntity(117U);
    msg.id = 219U;
    msg.label.assign("OYTXQETNHZLRLGUHABASPUVDJQMVRUSXKVGBXZPEIXDMNHVIWRHWUOYLPIPCJGYBDANSQPJMEIRGVWEYFMUGYFYJBAOLDAKJQBHTFTKKCGCPQZVDIWTMRIFUCJRAEZJ");
    msg.component.assign("ALKMCMJFTWVZGGIGUZHRFODAZIWGDEDXVMDRFKEVXLZAUPOJBORKWRLACKGFCCNOSXVZGDXJCYGPAFJXAFYRZSSEUQTTYIIWRHBSVBMSOCYEQJDYOCPMKBXPYBRNQWBTDNCTMWNTUTSHOHSLFGLOENXEHGKTZJQPHPVDQSWLXWNIFRVEVYIHQJWBSYZKNEWDPXITVHMHZQUEILNQUSMPYBFUNUZDKLJIJTPKFUA");
    msg.act_time = 59037U;
    msg.deact_time = 54U;

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
    msg.setTimeStamp(0.05774387010585125);
    msg.setSource(37732U);
    msg.setSourceEntity(158U);
    msg.setDestination(47579U);
    msg.setDestinationEntity(233U);
    msg.id = 170U;

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
    msg.setTimeStamp(0.6984595874073987);
    msg.setSource(10355U);
    msg.setSourceEntity(103U);
    msg.setDestination(43648U);
    msg.setDestinationEntity(245U);
    msg.id = 192U;

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
    msg.setTimeStamp(0.33954746453175966);
    msg.setSource(25195U);
    msg.setSourceEntity(205U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(21U);
    msg.id = 170U;

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
    msg.setTimeStamp(0.5541849591348352);
    msg.setSource(57845U);
    msg.setSourceEntity(233U);
    msg.setDestination(56386U);
    msg.setDestinationEntity(244U);
    msg.op = 111U;
    msg.list.assign("HPROQBWWSOTBRDKXVDNGSEKJXPCXCCNKBSEWQZEJHNWLIUMIHUDEOZXLHFQJQDJYLLKAUTXJWNAPEJWEEAVVPMDIZBTBAAGIHTGQNVNCMDOCB");

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
    msg.setTimeStamp(0.035291640495131116);
    msg.setSource(46281U);
    msg.setSourceEntity(102U);
    msg.setDestination(14850U);
    msg.setDestinationEntity(137U);
    msg.op = 137U;
    msg.list.assign("DDTLUGOPWQZFHXCUYCZHXZXJXQFVRVTDSKGHBSKBAMKXIBUWONAYFWJLTINVZWQZORRCSIOFFONLTJCUYWFZRTMVDJLBCAPCBBVCIMELSLAQXGRYTWMQJXSQJNUGSDEXTHNRQIQXLJJDESKKOLZCUEPCEYHNBHDNVMALWKKZOMYAMAGVRIYA");

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
    msg.setTimeStamp(0.8808575639225468);
    msg.setSource(55412U);
    msg.setSourceEntity(55U);
    msg.setDestination(8316U);
    msg.setDestinationEntity(147U);
    msg.op = 68U;
    msg.list.assign("QLOURANLCRSUVFIIREMLDMTEAWBHSKNODDIWOBZMANRCZRRFENCCMQJJVQLBRKPIWGWYNEFAPMLJSFBCNWSOWVJHVKYGBVKZVDPAXABMTHRIGHPKQDTXBKYUGAIPGPTMUGZSQEPEOPTLNYHHJJKFQZDXLGUSCHNDJSRXTXCBJYSZCQXTRKTZOEMEYIVWXNOGIXFGVLSBIDBCZWMWNUMFVKOOAXFPJYYVYLKAITLHSZCQP");

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
    msg.setTimeStamp(0.974878002081706);
    msg.setSource(52294U);
    msg.setSourceEntity(21U);
    msg.setDestination(39866U);
    msg.setDestinationEntity(115U);
    msg.value = 86U;

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
    msg.setTimeStamp(0.16100082299796337);
    msg.setSource(62209U);
    msg.setSourceEntity(47U);
    msg.setDestination(45134U);
    msg.setDestinationEntity(88U);
    msg.value = 57U;

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
    msg.setTimeStamp(0.11531450830510659);
    msg.setSource(57282U);
    msg.setSourceEntity(156U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(120U);
    msg.value = 232U;

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
    msg.setTimeStamp(0.37989487267005007);
    msg.setSource(53373U);
    msg.setSourceEntity(47U);
    msg.setDestination(22422U);
    msg.setDestinationEntity(23U);
    msg.consumer.assign("APHHSRSSGCXPIQHDKJKYCVKAKBUEODFHHYRIIQTZDAEYGQINKDWPCOPTPBSSNKSKBBMGRFXUBXJZRZSBSCOZTCBMGPSOEGXBSCJRTILVWXQMWVMUAWYLQZZDKUQBZCCUOROWAYLLLTBXJPYVFJATLFZXZDHPETMIJJUTNWDFOJALFREWAUPILTMQJNEERDH");
    msg.message_id = 642U;

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
    msg.setTimeStamp(0.27204533015271404);
    msg.setSource(21684U);
    msg.setSourceEntity(151U);
    msg.setDestination(63553U);
    msg.setDestinationEntity(178U);
    msg.consumer.assign("HLVYLLZPNZNIXEBXDEWTLFUXNQACBZNEUHZVRUQMKMKSDHACJSZLMCMHOSUENCKFPGJRWGJHUHGDOHBTBVKTIYOEDGSJCARMRUGOOBZJSSQCTXILDPPLLYWBIZJTNZKSRVAYY");
    msg.message_id = 43143U;

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
    msg.setTimeStamp(0.1027638495700488);
    msg.setSource(42253U);
    msg.setSourceEntity(99U);
    msg.setDestination(57691U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("EXOBLXVFSPHGTVDDJQMUJMSXMISJLARUYGTIEEGVWXAZSUFACKFLDNOPZHKKPQRDDDBWYOVHMGLJCMZAOLHIMAZMQWOIOOUKBSTIRFMKCYPSPHRVBFXBQXEJJKYTNGAHUBPXIEFKEBUNMHGDQSUEKGWOERGOBHRTCRWVNNGLECLQTUMZYVZRCAPJLBYCUQLGFAZSWNRYNQTJVXFWVHSKQYPXO");
    msg.message_id = 2304U;

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
    IMC::Restart msg;
    msg.setTimeStamp(0.4390724545428799);
    msg.setSource(17881U);
    msg.setSourceEntity(127U);
    msg.setDestination(41615U);
    msg.setDestinationEntity(19U);
    msg.type = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Restart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Restart msg;
    msg.setTimeStamp(0.5571226104665808);
    msg.setSource(38674U);
    msg.setSourceEntity(13U);
    msg.setDestination(6655U);
    msg.setDestinationEntity(74U);
    msg.type = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Restart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Restart msg;
    msg.setTimeStamp(0.39727833966745707);
    msg.setSource(4176U);
    msg.setSourceEntity(249U);
    msg.setDestination(33747U);
    msg.setDestinationEntity(94U);
    msg.type = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Restart #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6355640382840987);
    msg.setSource(9682U);
    msg.setSourceEntity(43U);
    msg.setDestination(20193U);
    msg.setDestinationEntity(104U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.8077332344101077);
    msg.setSource(65098U);
    msg.setSourceEntity(163U);
    msg.setDestination(31955U);
    msg.setDestinationEntity(2U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.676750954323813);
    msg.setSource(64812U);
    msg.setSourceEntity(47U);
    msg.setDestination(7374U);
    msg.setDestinationEntity(59U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.32261151981069625);
    msg.setSource(42164U);
    msg.setSourceEntity(134U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(89U);
    msg.total_steps = 180U;
    msg.step_number = 150U;
    msg.step.assign("VHHWVVWMLQYEJWECLVIYFFQHPATUIUOTEWANAYPIISZKLDAGJBMPCQYKAKVTTPNMWQDVBEAIYYNBWUESLKQXPFSULJGHUHBPSAKPUEOLGWZTNTYXZZWJFUHRFHMINNCRXEXGKVBFRPHFRXOZFXESRYIJSGJJNGBSVTXALOVPGIOBXUCUCDGLQQEJYDCMCRMAHWFZOQJMJBIHPCMQDFTOLZGKXOKSNRLZVOZDWDDKMSERXRCDMBOU");
    msg.flags = 179U;

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
    msg.setTimeStamp(0.9292555673207702);
    msg.setSource(45675U);
    msg.setSourceEntity(245U);
    msg.setDestination(27272U);
    msg.setDestinationEntity(202U);
    msg.total_steps = 91U;
    msg.step_number = 200U;
    msg.step.assign("HNLLXDFJJWOWMKGXAHLBVUNKQLRZSEIIDRJCTHEVJYVWMTTWPKKWZBBACRUZBBNZCIIDLGDTISOFAFEOPRYHRMBDNXEEKUTDPGGDJMSUOLPVTZAJXWHVDTFFEOCQNAYRBFDYEVSOLZYIQZUQMBWNSYNCXXSHYAMNJQBZJRCXYNMEKOWJULUPSNHPMFBDPKHMFKATUPZXGCGSHYEESFLYRVWFGQQGQOKVUMIPLRHWTOQOAGCQCZUXIGKVJAXSC");
    msg.flags = 70U;

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
    msg.setTimeStamp(0.178156619983469);
    msg.setSource(59919U);
    msg.setSourceEntity(197U);
    msg.setDestination(55281U);
    msg.setDestinationEntity(27U);
    msg.total_steps = 198U;
    msg.step_number = 34U;
    msg.step.assign("URFWGONGKOIQVNEMDPQXHQVCMFCQOSJZFGLLDODWSAFIOXNGMPLZBXVXCPWNAMLUZWSGYDEWGFUDKIQJOTCPTRFAEWMTOUTJILKNACSLTQZMQIMQPKPQEIHJKUGZVCUJOYDBDKWRDQFUAVIVR");
    msg.flags = 83U;

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
    msg.setTimeStamp(0.11766293933114536);
    msg.setSource(28323U);
    msg.setSourceEntity(225U);
    msg.setDestination(16817U);
    msg.setDestinationEntity(8U);
    msg.state = 134U;
    msg.error.assign("KJCDUFYTQYMKINPRNKVNHOILXZPHUVHNDQCBDBGRFEBOWEZVBQMFRWBB");

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
    msg.setTimeStamp(0.13538790267937684);
    msg.setSource(38961U);
    msg.setSourceEntity(116U);
    msg.setDestination(12961U);
    msg.setDestinationEntity(114U);
    msg.state = 64U;
    msg.error.assign("BADBUMTPARDSNLFXBASHSXUJHLTRW");

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
    msg.setTimeStamp(0.8078088114480664);
    msg.setSource(1451U);
    msg.setSourceEntity(222U);
    msg.setDestination(28966U);
    msg.setDestinationEntity(17U);
    msg.state = 129U;
    msg.error.assign("ITWDURARWZRLQKUDFPVROOFFXGUVJQZTYMLFGITZMLFCNFZNWKXIJXZGMSMQKUQPOXEHXFNGHKIPWVOYIOWKCDMDBZQYUHEBISJIDVNEJPMNPWFNREHKEYISLUCYAHRXQWAH");

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
    msg.setTimeStamp(0.13711199803782304);
    msg.setSource(48211U);
    msg.setSourceEntity(171U);
    msg.setDestination(61385U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.611789215736017);
    msg.setSource(48918U);
    msg.setSourceEntity(171U);
    msg.setDestination(20406U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.13665349591737908);
    msg.setSource(23906U);
    msg.setSourceEntity(67U);
    msg.setDestination(55557U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.2761587646995133);
    msg.setSource(73U);
    msg.setSourceEntity(247U);
    msg.setDestination(59056U);
    msg.setDestinationEntity(59U);
    msg.op = 80U;
    msg.speed_min = 0.8123374816600557;
    msg.speed_max = 0.036354419073877375;
    msg.long_accel = 0.2193415004863023;
    msg.alt_max_msl = 0.28203245473844185;
    msg.dive_fraction_max = 0.6305891287768378;
    msg.climb_fraction_max = 0.8112602191493341;
    msg.bank_max = 0.0529504214174884;
    msg.p_max = 0.3913680347726519;
    msg.pitch_min = 0.36216334051797405;
    msg.pitch_max = 0.33375132310823197;
    msg.q_max = 0.909341801338891;
    msg.g_min = 0.37081325998948733;
    msg.g_max = 0.39546913018420093;
    msg.g_lat_max = 0.6650067129321395;
    msg.rpm_min = 0.05415969386529984;
    msg.rpm_max = 0.2026813094979013;
    msg.rpm_rate_max = 0.1279938908365188;

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
    msg.setTimeStamp(0.00027671960512365423);
    msg.setSource(38999U);
    msg.setSourceEntity(237U);
    msg.setDestination(29777U);
    msg.setDestinationEntity(205U);
    msg.op = 219U;
    msg.speed_min = 0.2883218989395102;
    msg.speed_max = 0.48063705282961633;
    msg.long_accel = 0.6147759224098325;
    msg.alt_max_msl = 0.5356552444858352;
    msg.dive_fraction_max = 0.368769911664543;
    msg.climb_fraction_max = 0.0008966535764109995;
    msg.bank_max = 0.32530276413605697;
    msg.p_max = 0.5306503458775106;
    msg.pitch_min = 0.7835037105858014;
    msg.pitch_max = 0.7715539389349272;
    msg.q_max = 0.38493720007882615;
    msg.g_min = 0.05653297698089854;
    msg.g_max = 0.1924528544266768;
    msg.g_lat_max = 0.8889771756488544;
    msg.rpm_min = 0.4429706607377186;
    msg.rpm_max = 0.20164891669477825;
    msg.rpm_rate_max = 0.6184961522955262;

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
    msg.setTimeStamp(0.16302508660092174);
    msg.setSource(13597U);
    msg.setSourceEntity(57U);
    msg.setDestination(9434U);
    msg.setDestinationEntity(137U);
    msg.op = 116U;
    msg.speed_min = 0.4290117337108049;
    msg.speed_max = 0.4499279567576744;
    msg.long_accel = 0.8359703750308819;
    msg.alt_max_msl = 0.029715518945615083;
    msg.dive_fraction_max = 0.5600026370367209;
    msg.climb_fraction_max = 0.10310037196888555;
    msg.bank_max = 0.26637319875517684;
    msg.p_max = 0.2776580328802385;
    msg.pitch_min = 0.20262292946468208;
    msg.pitch_max = 0.710668330370343;
    msg.q_max = 0.23676643988831947;
    msg.g_min = 0.2553601553120717;
    msg.g_max = 0.012671084721327053;
    msg.g_lat_max = 0.9599406308369421;
    msg.rpm_min = 0.7522304781477892;
    msg.rpm_max = 0.7493526844788135;
    msg.rpm_rate_max = 0.934394515437475;

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
    msg.setTimeStamp(0.18383516031638036);
    msg.setSource(64653U);
    msg.setSourceEntity(84U);
    msg.setDestination(36552U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.8156262634536879);
    msg.setSource(44319U);
    msg.setSourceEntity(189U);
    msg.setDestination(4617U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.4285269599170065);
    msg.setSource(10176U);
    msg.setSourceEntity(222U);
    msg.setDestination(35967U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.10747767971432132);
    msg.setSource(61024U);
    msg.setSourceEntity(61U);
    msg.setDestination(44360U);
    msg.setDestinationEntity(84U);
    msg.value = 0.12373888064215888;

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
    msg.setTimeStamp(0.5903821513550401);
    msg.setSource(2339U);
    msg.setSourceEntity(103U);
    msg.setDestination(40304U);
    msg.setDestinationEntity(70U);
    msg.value = 0.5157946636125642;

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
    msg.setTimeStamp(0.2738769100610532);
    msg.setSource(28358U);
    msg.setSourceEntity(195U);
    msg.setDestination(9315U);
    msg.setDestinationEntity(62U);
    msg.value = 0.07308550816639636;

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
    msg.setTimeStamp(0.606205545072324);
    msg.setSource(56027U);
    msg.setSourceEntity(25U);
    msg.setDestination(372U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.8985497249195605;
    msg.lon = 0.05218427511907908;
    msg.height = 0.3976622466559335;
    msg.x = 0.5529235877349159;
    msg.y = 0.2411447189324648;
    msg.z = 0.7529847123754191;
    msg.phi = 0.9336909974288348;
    msg.theta = 0.01250229944442749;
    msg.psi = 0.7423680539404558;
    msg.u = 0.9551755660613234;
    msg.v = 0.8939429884894996;
    msg.w = 0.6917234480311059;
    msg.p = 0.33862474352213867;
    msg.q = 0.8711466880954055;
    msg.r = 0.5873730315805917;
    msg.svx = 0.11041918472051893;
    msg.svy = 0.39332249259950713;
    msg.svz = 0.2458541324813508;

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
    msg.setTimeStamp(0.6741700084488188);
    msg.setSource(13297U);
    msg.setSourceEntity(230U);
    msg.setDestination(29626U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.9953961966968601;
    msg.lon = 0.5218577891479975;
    msg.height = 0.6941266038643661;
    msg.x = 0.8201088985379085;
    msg.y = 0.3911484603774057;
    msg.z = 0.4504188064081307;
    msg.phi = 0.5644011471121457;
    msg.theta = 0.22820238820160477;
    msg.psi = 0.6017479468757706;
    msg.u = 0.494433671037964;
    msg.v = 0.26711380908370563;
    msg.w = 0.44206171130978633;
    msg.p = 0.8575961043157629;
    msg.q = 0.8443986499364461;
    msg.r = 0.463351564471729;
    msg.svx = 0.09025902453595924;
    msg.svy = 0.027950171410731306;
    msg.svz = 0.05798856694628729;

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
    msg.setTimeStamp(0.07445335425494681);
    msg.setSource(56625U);
    msg.setSourceEntity(126U);
    msg.setDestination(20021U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.46104349719786875;
    msg.lon = 0.7103335256646046;
    msg.height = 0.3468256162187424;
    msg.x = 0.7652046123951505;
    msg.y = 0.9926892112045616;
    msg.z = 0.3475448149942314;
    msg.phi = 0.5202414707828011;
    msg.theta = 0.26148696205129174;
    msg.psi = 0.6782953228109816;
    msg.u = 0.03725239303317118;
    msg.v = 0.5241871849383026;
    msg.w = 0.025368059972609935;
    msg.p = 0.886229255753693;
    msg.q = 0.7645281363006634;
    msg.r = 0.9091705221131194;
    msg.svx = 0.7010586617732574;
    msg.svy = 0.4100508766355254;
    msg.svz = 0.4591460487627692;

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
    msg.setTimeStamp(0.40440002137327336);
    msg.setSource(53603U);
    msg.setSourceEntity(102U);
    msg.setDestination(8387U);
    msg.setDestinationEntity(250U);
    msg.op = 211U;
    msg.entities.assign("LFKJCXJVWVLSKXZLWOLTZCJEEHIXQYRMLVGKPBJTDYAITUXUYBMBUQRSXEPKZEXZPEZQOFYOFGFMNVGJBROGBGKCBVUFUCKNFRXQQPZUMALTSMEUHDMSENORPUGKAASAPSFIPQWQNVVIWDQYRMMGWIBTMGAKWFLRABHXDTFHOSBMWWOIHEDAJZIEDOCCENARVYRJYKPBHLOTYYVDJTTLWAQDODWYHUHUHKILCPRTNSPSSD");

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
    msg.setTimeStamp(0.25201280434506335);
    msg.setSource(22802U);
    msg.setSourceEntity(156U);
    msg.setDestination(23743U);
    msg.setDestinationEntity(237U);
    msg.op = 199U;
    msg.entities.assign("ELTAPNDXSUVQYK");

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
    msg.setTimeStamp(0.8902483776116035);
    msg.setSource(64540U);
    msg.setSourceEntity(6U);
    msg.setDestination(22306U);
    msg.setDestinationEntity(173U);
    msg.op = 0U;
    msg.entities.assign("KSGJIAZYLINJHKLELYDFHWEVTEOYCELXDSTXZLVRMETSVHXABNCPJNOMPWLPXLNFBWLUJYCBNFVYPIVKRJJPEKQGMSOZIDERWRMDDUBQDYXAAFENBDHKBKGQUWTOPVEHGYQZCPJOAKSZCSOTXHOOWJFINLKWGKB");

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
    msg.setTimeStamp(0.5286054235986621);
    msg.setSource(17567U);
    msg.setSourceEntity(199U);
    msg.setDestination(7473U);
    msg.setDestinationEntity(230U);
    msg.type = 204U;
    msg.speed = 16775U;
    const signed char tmp_msg_0[] = {-113, 92, 106, -77, -51, -85, 8, 41, -118, 5, -35, 34, 83, 42, -37, -86, 36, -110, 57, 12, 126, -73, -6, 26, 34, -74, 117, -18, 71, 17, 117, 41, -12, 125, -1, -93, 11, -39, -121, 60, 15, 38, 12, -25, 65, 107, -54, 9, -16, -43, 79, -128, 102, 65, 40, 111, 120, -31};
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
    msg.setTimeStamp(0.9365081811087965);
    msg.setSource(53550U);
    msg.setSourceEntity(167U);
    msg.setDestination(42276U);
    msg.setDestinationEntity(190U);
    msg.type = 169U;
    msg.speed = 10364U;
    const signed char tmp_msg_0[] = {-106, 119, 91, -59, -1, -99, -5, -10, -101, -8, 109, -13, -97, 39, 61, -56, 93, 119, -126, 38, 82, -33, 109, 66, -113, 29, 120, 68, -55, 41, -43, -81, -43, 99, -26, -97, -23, 96, 90, 116, -32, 67, 112, -102, 79, -82, 35, 53, -10, -80, 113, -101, -114, -106, -31, -76, -37, 108, -9, 53, -92, -30, -113, 1, 14, 53, 64, -127, -77, -98, -22, 44, -102, -117, 117, 101, 82, -7, 119, 85, 67, -51, -86, -69, -53, 57, -116, -89, -122, 120, -82, -20, -56, 4, -21, -56, 63, -93, 68, 9, 115, -45, -1, 101, -28, -106, -29, -126, 104, 121, 25, 81, 48, -125, 1, -54, -101, 42, -106, 100, 36, -105, 55, 78, -69, -54, 97, 72, 46, -35, -67, 7, -125, -125, 13, 1, -23, 125, -64, 50, 84, 57, 24, -21, -31};
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
    msg.setTimeStamp(0.8836943385309339);
    msg.setSource(26380U);
    msg.setSourceEntity(213U);
    msg.setDestination(49454U);
    msg.setDestinationEntity(246U);
    msg.type = 83U;
    msg.speed = 43863U;
    const signed char tmp_msg_0[] = {-86, 104, 110, -69, 84, 57, -124, 33, -14, 23, -107, -15, -62, -18, 3, -27, -52, -34, -64, -65, 44, 86, 71, 97, -61, -51, -25, -87, 70, -115, -118, -15, -30, -50, 122, 45, -17, 62, 17, -45, -75, 121, -80, -31, -70, -70, -120, -100, 5, -128, 37, -41, -48, 50, -52, 71, 73, 22, -49, 14, -10, -60, -85, 54, 46, -40, -106, 109, -29, -23, -54, -100, -120, -7, 100, 78, -81, 61, 124, -7, -46, 24, 93, -93, -57, 94, 111, 29, -49, 40, -55, -72, -75, 71, -22, -54, -26, -36, 41, 64, 11, 87, 52, 121, -80, -55, 42, 34, -3, 33, 1, 3, 79, 43, -16, -103, 76, -17, -8, -122, 49, 39, -31, -103, -115, -5, -60, 114, -108, -10, -91, -72, -26, 15, -67, 41, -42, 120, -34, 43, -117, 12, 65, -89, 104, 36, 28, -1, 83, 40, 64, 85, -120, -74};
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
    msg.setTimeStamp(0.7719260274071664);
    msg.setSource(25862U);
    msg.setSourceEntity(72U);
    msg.setDestination(5927U);
    msg.setDestinationEntity(131U);
    msg.op = 62U;
    msg.tas2acc_pgain = 0.4187319410599418;
    msg.bank2p_pgain = 0.7773316397133823;

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
    msg.setTimeStamp(0.7384399780148186);
    msg.setSource(58484U);
    msg.setSourceEntity(19U);
    msg.setDestination(59833U);
    msg.setDestinationEntity(179U);
    msg.op = 48U;
    msg.tas2acc_pgain = 0.6818680227373781;
    msg.bank2p_pgain = 0.576829712364652;

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
    msg.setTimeStamp(0.20573585576124476);
    msg.setSource(18217U);
    msg.setSourceEntity(28U);
    msg.setDestination(44073U);
    msg.setDestinationEntity(70U);
    msg.op = 3U;
    msg.tas2acc_pgain = 0.4310318495786355;
    msg.bank2p_pgain = 0.5509590473284989;

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
    msg.setTimeStamp(0.6368756213974889);
    msg.setSource(6711U);
    msg.setSourceEntity(144U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(37U);
    msg.available = 1821443910U;
    msg.value = 217U;

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
    msg.setTimeStamp(0.6089066971980872);
    msg.setSource(47062U);
    msg.setSourceEntity(0U);
    msg.setDestination(24387U);
    msg.setDestinationEntity(215U);
    msg.available = 633854232U;
    msg.value = 178U;

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
    msg.setTimeStamp(0.7818223395438536);
    msg.setSource(52667U);
    msg.setSourceEntity(194U);
    msg.setDestination(43190U);
    msg.setDestinationEntity(194U);
    msg.available = 1702272965U;
    msg.value = 90U;

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
    msg.setTimeStamp(0.6328248707351938);
    msg.setSource(30355U);
    msg.setSourceEntity(96U);
    msg.setDestination(60672U);
    msg.setDestinationEntity(202U);
    msg.op = 51U;
    msg.snapshot.assign("SQDGDFUUCFOGGOHBREHAIZEOSSCJFXSLUQEMXLWBJKMVSZXWPWNRRYXBJOSJVLIKYFYWFKZHBDEILTWAFCBDVUMZTJUUBGJOHIPGPXXYDKBYUFHFOAQVESJALCVO");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 98U;
    tmp_msg_0.period = 2271422488U;
    tmp_msg_0.duty_cycle = 1226647541U;
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
    msg.setTimeStamp(0.39814097637123436);
    msg.setSource(9739U);
    msg.setSourceEntity(158U);
    msg.setDestination(51620U);
    msg.setDestinationEntity(162U);
    msg.op = 235U;
    msg.snapshot.assign("CDGAAODKWHJZVPZHZHJQHESVETASHNNFUTTSBBOCAZGIYRCAMNDKBFPNZETVQQUNUXXFOTERAWPDYIWFXWOREYLIHHLVXKYPFUWZGJLHIBQYGQAJKPAKKCYMVYJLNCZHTOKHMEPRVMIGXBRGSPVBUWJRNQQRTKUYSXWTJSZEEDDJILDGDMTGQTLOJNKPPFVGENIFALWLYCFJOMXOIMSKZUFOSMICBCLRNUV");
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.8528015513613849;
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
    msg.setTimeStamp(0.9197887725614707);
    msg.setSource(46883U);
    msg.setSourceEntity(106U);
    msg.setDestination(8859U);
    msg.setDestinationEntity(148U);
    msg.op = 226U;
    msg.snapshot.assign("TULVXERPPFBXTWZCGOQBSYNVKPRQKHQGILUUCPZBUWSRMHXBLJPXKLBZBDYEFEGWLVATMQUQSPOCPONAHDKZMSLEJBSWGFEORTKYUNRRUGZLTIFHMSVUEMHNDM");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.5628454649995025;
    tmp_msg_0.x = 0.3855586003791657;
    tmp_msg_0.y = 0.16253051097972848;
    tmp_msg_0.z = 0.783292986122781;
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
    msg.setTimeStamp(0.5125387653070298);
    msg.setSource(22035U);
    msg.setSourceEntity(231U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(97U);
    msg.op = 74U;
    msg.name.assign("QWILBEZVIBVPQLNMUKDKXMLPKZHRLBWSXYYPAYDBSDQVANZPOTSENOVGJSOHRXJXAQXOITWKGOKCVQARYVTIIQYCLCQSDJKUKRHXNELOQBCYTHAEYTRUOFUGLWJMPCHZAMFRDBGPCGDVVAIJFGNXVMJJZBMNAEUOCCEQL");

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
    msg.setTimeStamp(0.038355485284414015);
    msg.setSource(20035U);
    msg.setSourceEntity(250U);
    msg.setDestination(943U);
    msg.setDestinationEntity(203U);
    msg.op = 87U;
    msg.name.assign("LPXBRQNJFQRAE");

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
    msg.setTimeStamp(0.6951981016382298);
    msg.setSource(27731U);
    msg.setSourceEntity(254U);
    msg.setDestination(33810U);
    msg.setDestinationEntity(18U);
    msg.op = 146U;
    msg.name.assign("GJMOZXGDQRUMBIODGLTZVPXSDVYYZVBWNJVLECYDUBSAXALZSIKAQDSVOPMEOMJAUYZRRQONZYGHSPAOVRMNKWANPNINWKPJZCHRTKWGIFOTCLIT");

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
    msg.setTimeStamp(0.41107766399378265);
    msg.setSource(61462U);
    msg.setSourceEntity(130U);
    msg.setDestination(41024U);
    msg.setDestinationEntity(160U);
    msg.type = 26U;
    msg.htime = 0.34884732315810074;
    msg.context.assign("DUCGYKQGRHVAQNZCDSMQYMBLPNQASFBCXFFDIHSRMGEYCFVYRXFETNBKGAPYANMOVBTLIWEFGLNDDHMEIVQXLSXYWMLTVSAJJVAQRXQKLJUHGCRIYSAOZSBIDKUUZBZYANKNODSOPUVBUEOTFNGBAMIFGZOESXCMIRPEHVXVXKWLHEECWWNPJIRJZQAJUJHJUCYLGFDTMKIBZFMLOSPLOPTRJTWZTDDGTZRNZQTXUWPIVKWHWXYJURPHQHPKOC");
    msg.text.assign("VVOFPXTBCCEKOEIVNYVGWLSZTYTFJNVXFUKUPXXEEFUESZYFFEYECKHHTHFCGFN");

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
    msg.setTimeStamp(0.9962355637345804);
    msg.setSource(22174U);
    msg.setSourceEntity(173U);
    msg.setDestination(36718U);
    msg.setDestinationEntity(139U);
    msg.type = 24U;
    msg.htime = 0.980664647495683;
    msg.context.assign("SILTCAJMXZKIGMRUHWCTJIBMHEKCZBAVJGCPDPIYJSRFTZHNKNHTANVBBQCIDHBQBFUMLFUABDYBRLFLROGUNHBYUOQNLEXKFOOGNSIDXTPQZMMEJQZSDSPTRZMSVSKXDXOJTYQCONOYAQLAXZHDXCUYWCAIFMUKDXHGOV");
    msg.text.assign("NROCEZXQIPADIWGXDIOHQAQWFIABCMMVDARSGNBUKHZBINPFODJNXUVTKVJRLHLSOVPPJBBPWXXBYFWCYRUARAQHJANDZQPDVTPOHRUDJIQLJHYCVQYGWHPOJBQEKM");

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
    msg.setTimeStamp(0.2720431854789034);
    msg.setSource(38792U);
    msg.setSourceEntity(206U);
    msg.setDestination(35127U);
    msg.setDestinationEntity(247U);
    msg.type = 201U;
    msg.htime = 0.5030727074330684;
    msg.context.assign("AZXETGIYNKGJWTBYBDPTVCBOVAYIPEDUODDZWMJOGICHVIXICMRSSTSEJQXQPEMILYKONNTNSWBWROLZLFPWWNFHKLZQYHDUQEDMRZMJVCHLGIJRQUXEITPWDAWKKCPHYDGEZUQLCAU");
    msg.text.assign("WIDZVRQXPGAPAGWBLXKQGHMMJOXZJDSLQUPHTKTJNTZFCWPAOTNCKXDHLJGAUIKTONUDVIBQZRARGPIMRRVBYDZQLAAWCBPAWMMJYVVERUHEQCNLGZVSGWBWVKFXJQITYQFABXCVEFIEDENOSLTMJHQ");

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
    msg.setTimeStamp(0.01718187357146239);
    msg.setSource(41755U);
    msg.setSourceEntity(87U);
    msg.setDestination(22158U);
    msg.setDestinationEntity(55U);
    msg.command = 214U;
    msg.htime = 0.6263458987908245;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 3U;
    tmp_msg_0.htime = 0.9027811372275293;
    tmp_msg_0.context.assign("YRCSEBVLIRKQULDSAMHDBBFTKYQIFAYATUAUOMJWRNUPTGXWFJXEMWIEXYINDLMCUEQYRMLPEEGLJETGFVIOAIHHRVLZVCUAZXXCAOUMCIBVXGRXCITOVNKZZDJ");
    tmp_msg_0.text.assign("WVZKGUZBLIZNSTAXXURGGDJMAJKOFJCFLRLCXEFAABZMIHHCKKRMSTZASUVDHXSKGTQPCECUHBPWQUGXSFIBJWXBVFFGFMNZBJAYNSETWCHGMKOYUREMQEOMNLHXXNOJVIUTUPLTWLVOPOWROMTUYDVXRD");
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
    msg.setTimeStamp(0.5464992028249982);
    msg.setSource(28091U);
    msg.setSourceEntity(48U);
    msg.setDestination(55129U);
    msg.setDestinationEntity(37U);
    msg.command = 118U;
    msg.htime = 0.41039380395915104;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 155U;
    tmp_msg_0.htime = 0.8207467732996798;
    tmp_msg_0.context.assign("HKPBCSDZITJYQRYYKQWMVVLUBVFUZZRFAEPN");
    tmp_msg_0.text.assign("DHNABDYXHUHNBXEKQSXHLJM");
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
    msg.setTimeStamp(0.21123522339557443);
    msg.setSource(2615U);
    msg.setSourceEntity(51U);
    msg.setDestination(15927U);
    msg.setDestinationEntity(206U);
    msg.command = 235U;
    msg.htime = 0.44480946542460054;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 5U;
    tmp_msg_0.htime = 0.03481761184055898;
    tmp_msg_0.context.assign("GYVUZBLQWLXABPRCKJANJZNCGJKSQUMLOZGYXFWMDAPEOOABAHVBUDHFYKFTWEPKTBIDKXIMTKEPMYUDJMMLTOJABOEQYVTWHXICWTQCNERZVSWLVFMSFNAXKBZNIWLDHCSQDEWKEMVHUEVLXORUDHJYZIKXGXFHRXQNEQJIHTABPCCT");
    tmp_msg_0.text.assign("JCUFCJMTWJMCIPHNGGLFTJFOLZOIMXVKIGDNSPPLCAGSCNYKTASEBKRHHDIGZZPKOQUICWRMYEAZOPHZWNXMPKRXITUGUYTZNIVHSFARVTPOUZETYYTOJVK");
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
    msg.setTimeStamp(0.8134544544715803);
    msg.setSource(28349U);
    msg.setSourceEntity(187U);
    msg.setDestination(30663U);
    msg.setDestinationEntity(137U);
    msg.op = 229U;
    msg.file.assign("SGBDRMSVHAQFIZFJTWSOPTRZLCYYOZVYAHXJHZWYQAYBJKWPBEWEPGNHUCMFTOHRGIYHKEPNTXBQIFDRDUVWTFRSCWNKVILBUL");

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
    msg.setTimeStamp(0.4617287262365104);
    msg.setSource(43466U);
    msg.setSourceEntity(91U);
    msg.setDestination(62380U);
    msg.setDestinationEntity(128U);
    msg.op = 20U;
    msg.file.assign("LEXIMWRXYOEIGUBISGEOLQKVAQGMOZHASEFCZTDRWJXWNSPNRBMNUYQNNCNTQGSJCPQEVKFYZQWJUFRUTKSVIPRODANAMKPEFTXJBJYIZPLABVVSDGCWQSUNMGKROGFHPTDOUZIUWXKHTCOKHVWEBMKJBWPISRYAMHIHZJDRBZBKGYFXLLB");

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
    msg.setTimeStamp(0.007364844711597152);
    msg.setSource(23348U);
    msg.setSourceEntity(131U);
    msg.setDestination(1413U);
    msg.setDestinationEntity(250U);
    msg.op = 218U;
    msg.file.assign("NLTOQZIGTJWYKRPTDWWVPMGSAWWCXHWCEQLLOHVNHDVZSXZGEKJDCXACUEFBUFZZDPMSJH");

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
    msg.setTimeStamp(0.7866689710430184);
    msg.setSource(8259U);
    msg.setSourceEntity(129U);
    msg.setDestination(15723U);
    msg.setDestinationEntity(224U);
    msg.op = 234U;
    msg.clock = 0.5972137085714166;
    msg.tz = -62;

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
    msg.setTimeStamp(0.321217751934765);
    msg.setSource(8009U);
    msg.setSourceEntity(84U);
    msg.setDestination(14348U);
    msg.setDestinationEntity(187U);
    msg.op = 146U;
    msg.clock = 0.2609486395237369;
    msg.tz = -50;

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
    msg.setTimeStamp(0.6579577149132119);
    msg.setSource(34704U);
    msg.setSourceEntity(96U);
    msg.setDestination(35764U);
    msg.setDestinationEntity(253U);
    msg.op = 197U;
    msg.clock = 0.25182752131535824;
    msg.tz = 31;

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
    msg.setTimeStamp(0.3409387943271318);
    msg.setSource(5501U);
    msg.setSourceEntity(223U);
    msg.setDestination(37460U);
    msg.setDestinationEntity(2U);
    msg.conductivity = 0.4732636792292253;
    msg.temperature = 0.6313263542845637;
    msg.depth = 0.39961219418400795;

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
    msg.setTimeStamp(0.39088324494057114);
    msg.setSource(45651U);
    msg.setSourceEntity(191U);
    msg.setDestination(151U);
    msg.setDestinationEntity(130U);
    msg.conductivity = 0.49238017713873294;
    msg.temperature = 0.2626113623860924;
    msg.depth = 0.42602213823627955;

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
    msg.setTimeStamp(0.01516278594982512);
    msg.setSource(22653U);
    msg.setSourceEntity(88U);
    msg.setDestination(36958U);
    msg.setDestinationEntity(2U);
    msg.conductivity = 0.5473513552684409;
    msg.temperature = 0.1602282465389091;
    msg.depth = 0.7078244308339638;

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
    msg.setTimeStamp(0.37895200195657996);
    msg.setSource(52538U);
    msg.setSourceEntity(242U);
    msg.setDestination(64629U);
    msg.setDestinationEntity(46U);
    msg.altitude = 0.08393943915141233;
    msg.roll = 36054U;
    msg.pitch = 50660U;
    msg.yaw = 26599U;
    msg.speed = -26245;

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
    msg.setTimeStamp(0.7641161392918601);
    msg.setSource(35770U);
    msg.setSourceEntity(209U);
    msg.setDestination(49125U);
    msg.setDestinationEntity(90U);
    msg.altitude = 0.1757665662279424;
    msg.roll = 81U;
    msg.pitch = 41128U;
    msg.yaw = 38683U;
    msg.speed = 3251;

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
    msg.setTimeStamp(0.09419974308610402);
    msg.setSource(13395U);
    msg.setSourceEntity(225U);
    msg.setDestination(14614U);
    msg.setDestinationEntity(97U);
    msg.altitude = 0.9882777497331963;
    msg.roll = 13095U;
    msg.pitch = 43039U;
    msg.yaw = 51224U;
    msg.speed = 833;

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
    msg.setTimeStamp(0.07170341264789859);
    msg.setSource(7036U);
    msg.setSourceEntity(183U);
    msg.setDestination(18685U);
    msg.setDestinationEntity(49U);
    msg.altitude = 0.6293388699533089;
    msg.width = 0.5348055592505936;
    msg.length = 0.07368303060569226;
    msg.bearing = 0.532145778199095;
    msg.pxl = -25928;
    msg.encoding = 101U;
    const signed char tmp_msg_0[] = {-20, 64, 1, 5, 54, -84, 36, 42, -46, 51, -85, 112, -33, -69, -119, 96, -71, -90, 72, -117, 34, -26, 53, 9, -107, -114, 66, -112, 17, -91, -59, 33, -65, -6, 97, 83, 108, 42, 27, 4, 73, 7, 60, 82, 88, -66, 8, 45, 91, -17, 18, -6, 108, 64, 105, 6, -27, 16, -4, -30, -82, 105, 85, 73, 100, 80, -25, -104, 18, 87, 84, 63, -96, 42, -54, -22, 86, -57, -60, -6, -42, 49, -14, -23, -33, 33, 42, -102, -76, -38, 73, 82, 110, 92, 70, -64, -99, -10, 62, 48, 94, 39, 100, -8, -78, -78, -111, -110, 38, 51, 23, -118, -63, 49, 76, 97, -57, 83, 42, 85, 29, -97, -96, 90, -72, 84, 67, 65, -59, 124, -86, 74, -5, 8, -97, -97, 8, -26, -81, -115, -32, -21, -46, -11, 66, -34, -24, -53, 82, -49, 100, -79, 43, -19, 60, -61, 42, 38, 80, 104, -103, 25, -49, 36, -1, -32, -44, -74, -92, 41, 114, 71, 117, -41, -93, 33, -45, 22, 41, 50, 26, 63, -24, -98, -48, 22, 29, 118, -108, 28, -54, 33, 125, -94, -3, -34, -114, 66, -58, 42, 55};
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
    msg.setTimeStamp(0.2960879421285232);
    msg.setSource(44495U);
    msg.setSourceEntity(81U);
    msg.setDestination(62375U);
    msg.setDestinationEntity(159U);
    msg.altitude = 0.614128332532725;
    msg.width = 0.4769483704051789;
    msg.length = 0.6962557476809028;
    msg.bearing = 0.5638443189360569;
    msg.pxl = 3107;
    msg.encoding = 238U;
    const signed char tmp_msg_0[] = {-126, -30, 48, 110, -78, -78, 88, -63, -3, 74, 41, -119, 24, 82, -122, -126, -44, 103, 100, 80, 72, 12, -27, 1, -17, -78, 66, -123, 119, 18, 23, 64, -118, -70, 117, 12, 123, -4, -24, -128, 14, 93, 69, 82, 62, 52, -17, -88, -3, 12, -95, 72, 4, -63, -82, 116, 15, 118, 61, 83, -110, 107, 75, -57, -52, 24, 53, -24, 50, -77, -118, -90, 56, 74, 18, -53, -8, -16, -117, 74, 12, -70, -122, 21, 74, 31, -6, -43, -67, 113, -6, -111, -21, 21, 116, 85, -41, -52, 0, 117, -12, -89, 123, 69, -84, -5, 55, -50, -27, 78, -17, -127, 62, -34, 97, -111, 74, -42, 111, -91, 115, 126, -27, 104, -73, 15, -64, 31, -81, 44, -90, 101, -113, -56, -47, -85, -2, -111, 87, -95, 49, 102, 30, -28, 104, 93, -5, -107, -3, -121, -125, -121, 103, 53, 64, -12, -40, 64, -124, -84, 40, 73, -82, -75, -127, 125, 0, 27, -10, 35, -27, 7, -91, -6, 33, -110, 91, -87, 7, -126, 89, 34, 67, 43, -10, 115, -69, -102, 26, 100, 77, 122, 78, 42, -45, 102, 8, -17, -128, -124, 99, 71, 96, 126, -116, -76, -54, 26, -36, -49, 110, 111, -21, 29, 54, -11, -88, 79, -42, -3, 20, 96, -19, 102, -4, 119, 120, -96, -5, 43, -82, -2, -41, 33, 15, 23, -74, 85, -120, -117, 58, 115, 51};
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
    msg.setTimeStamp(0.46256350427613757);
    msg.setSource(17307U);
    msg.setSourceEntity(214U);
    msg.setDestination(15717U);
    msg.setDestinationEntity(161U);
    msg.altitude = 0.6379855214318665;
    msg.width = 0.44359575938728224;
    msg.length = 0.2193342602312447;
    msg.bearing = 0.062268245613910866;
    msg.pxl = -23480;
    msg.encoding = 13U;
    const signed char tmp_msg_0[] = {-78, -27, -49, 98, -31, 112, -84, 44, -86, -83, 90, 59, 34, 98, 95, -2, -64, -82, -98, 68, -34, 24, -55, 97, -7, 10, -82, 117, 4, 21, 125, 110, 71, -105, -7, -47, -66, 117, 32, 98, -89, 1, -111, 53, 102, 53, -26, -7, -29, -43, -17, -1, 7, 106, 76, -69, -43, -34, -49, 12, -33, 41, -47, -77, -15, -45, 121, -28, 90, -55, -103, 92, 109, -12, -20, -15, -19, -44, 24, 104, -76, 55, -38, 14, 74, -103, -30, 16, -35, 95, 81, -88, -40, -19, -59, 107, 96, -39, -58, -57, 92, -67};
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
    msg.setTimeStamp(0.967981499422623);
    msg.setSource(24034U);
    msg.setSourceEntity(51U);
    msg.setDestination(22531U);
    msg.setDestinationEntity(178U);
    msg.text.assign("DJNQMGGTNRTJYAGHFARXUGIVACSJUSDBWSSCPRFJHRNLWHVHAPTRHOLELMLDPHYYQODSZFVJPIKWVBLEKYRBQEMQYUWZIIVSHPZZ");
    msg.type = 227U;

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
    msg.setTimeStamp(0.01900510205771888);
    msg.setSource(27878U);
    msg.setSourceEntity(192U);
    msg.setDestination(55984U);
    msg.setDestinationEntity(144U);
    msg.text.assign("CNYBUHRFWZDUODJMFZESZOBUPCPGEPIMZRLKNROXUUKEXQMIVOHTKDWDLJVMAXKJHGEOGPXBLTUFABBVRGWHHZVTIMSTXAY");
    msg.type = 145U;

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
    msg.setTimeStamp(0.879740395949787);
    msg.setSource(11172U);
    msg.setSourceEntity(100U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(183U);
    msg.text.assign("VIVPQKADEOQRBMXRASTOMVYCAUDMTLYTFZTIGQNWZALNLIPWJCUHQXNXTXZIRFDQALBPLGCQZKNDVCLHGHYVKTFOXYDKZBMJSSPANJMSPYWQOEVLPWJUOQIEYVIRYEZSQNHDNGIPHCUFF");
    msg.type = 82U;

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
    msg.setTimeStamp(0.2769075005899374);
    msg.setSource(11812U);
    msg.setSourceEntity(189U);
    msg.setDestination(2262U);
    msg.setDestinationEntity(113U);
    msg.parameter = 224U;
    msg.numsamples = 221U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 24353U;
    tmp_msg_0.avg = 0.3931246691579994;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7856507920238411;
    msg.lon = 0.5564851603605394;

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
    msg.setTimeStamp(0.7485207989744382);
    msg.setSource(44091U);
    msg.setSourceEntity(216U);
    msg.setDestination(37718U);
    msg.setDestinationEntity(232U);
    msg.parameter = 65U;
    msg.numsamples = 100U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 12598U;
    tmp_msg_0.avg = 0.3846106862545722;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.25499829144822406;
    msg.lon = 0.6968906660455081;

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
    msg.setTimeStamp(0.45637534715589056);
    msg.setSource(9217U);
    msg.setSourceEntity(63U);
    msg.setDestination(58021U);
    msg.setDestinationEntity(178U);
    msg.parameter = 197U;
    msg.numsamples = 174U;
    msg.lat = 0.42659335774376406;
    msg.lon = 0.2410527632882602;

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
    msg.setTimeStamp(0.9885023133682532);
    msg.setSource(59964U);
    msg.setSourceEntity(79U);
    msg.setDestination(27076U);
    msg.setDestinationEntity(221U);
    msg.depth = 7641U;
    msg.avg = 0.021916497232628895;

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
    msg.setTimeStamp(0.8575710689869598);
    msg.setSource(52656U);
    msg.setSourceEntity(201U);
    msg.setDestination(14239U);
    msg.setDestinationEntity(12U);
    msg.depth = 46450U;
    msg.avg = 0.4764449360069899;

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
    msg.setTimeStamp(0.5465879743672457);
    msg.setSource(8316U);
    msg.setSourceEntity(128U);
    msg.setDestination(46351U);
    msg.setDestinationEntity(71U);
    msg.depth = 1189U;
    msg.avg = 0.5854196757506076;

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
    msg.setTimeStamp(0.3084229764271865);
    msg.setSource(41871U);
    msg.setSourceEntity(233U);
    msg.setDestination(23972U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.4776916949911917);
    msg.setSource(53497U);
    msg.setSourceEntity(126U);
    msg.setDestination(6126U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.23792104291699112);
    msg.setSource(53554U);
    msg.setSourceEntity(104U);
    msg.setDestination(7619U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.1483891392154043);
    msg.setSource(11638U);
    msg.setSourceEntity(12U);
    msg.setDestination(21921U);
    msg.setDestinationEntity(27U);
    msg.sys_name.assign("OERABRDYGUGEBTZVJZTGSHEDRWGFELTHJXSQSICSCZFWFJRRHAUSZVFKLBLLWTEBRTOOAOPAJMULPIDYCIWYLAAEHJZLVQTTHGUYNKQCCXULQDBSTVRMXC");
    msg.sys_type = 241U;
    msg.owner = 33711U;
    msg.lat = 0.6556399523624885;
    msg.lon = 0.937515306410211;
    msg.height = 0.9740383638775651;
    msg.services.assign("YRJDVSCLLMJPMWIONGCQDOSUVMDMAUAXJNLMGKGTCLRMBDBHTLFYXZFHIXWUWIVWLXTVUUQBGBIIAYSDDDSRWZJXBJNPETEYFCPILOJZCFPUXTWCDBOYHIBXOGFTQFYDJKVEQYRDWSAITLAGFRFEHZBGKACMXJSLHQETOSCHENCUUPIKMVVVJXZZHQVARKPOZYNWNFKE");

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
    msg.setTimeStamp(0.19572407567915562);
    msg.setSource(31754U);
    msg.setSourceEntity(20U);
    msg.setDestination(61303U);
    msg.setDestinationEntity(157U);
    msg.sys_name.assign("PDFJARJHTXSRMBKXOGBGFYPKBIULWWFMWTURCOGOMKWSAWPTLZXVJKIIHVNXLXVNAGIVDRWINIJCHGZQYZLDFZAPJHFLEXPXOCQOYLNRAEEZUNPPVJWEMQQQUXSAYINTDADCGIFHDYMUGHOEQMRYDLARTUJBTMKYNMZPAFEOFEL");
    msg.sys_type = 197U;
    msg.owner = 16833U;
    msg.lat = 0.17122374523354145;
    msg.lon = 0.30999000538920773;
    msg.height = 0.8729850029483732;
    msg.services.assign("JOLDXWJNHWKSEQDXVPTZZQSWYYWLGYKVRISRGFVPFELTEPCYOYMPTSURCEOZZQLZOZJGJNYMVCMJZIQNUAFJZTJMUXHFXCDDESVGQVBSGICAUFKQFDVHYGZNHLAKFTUECRIHLJCLFIVFWHBXDQUTBUZKXDAJAAHTOURRTGDQYLCPJFGBNWTOEXBRWM");

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
    msg.setTimeStamp(0.36325079870171206);
    msg.setSource(55301U);
    msg.setSourceEntity(144U);
    msg.setDestination(22817U);
    msg.setDestinationEntity(11U);
    msg.sys_name.assign("YDPXVVQUDGHMBGVUFOHEYRASKWXFJANLOBTLCZAHEUSLNYGSEWOZYAJCFVUXNWFEJIHQSXFDKMDTARNNIIHESCFYTGBLJQSGNKTRGCQRAMVLOATMBEXNRDZIUWTSKOUVRSRSBIJBKQMLLJCMK");
    msg.sys_type = 136U;
    msg.owner = 24317U;
    msg.lat = 0.014851403277771569;
    msg.lon = 0.07385894880720034;
    msg.height = 0.578183750029767;
    msg.services.assign("PPIOVBETZHQCTMAIFXIKPGTORCJTLZMEHFPJUUMAXALIWXCYGEFQFXPWSTXKFWOGDRZQZMZZVWBPHXBSJPSBQXAWJKBNKECYUMSKNMTJHJZLYJWCADKILSEIWWOUOYUBLDXAONBDHVGRNETVAPXFMGL");

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
    msg.setTimeStamp(0.6883364511690915);
    msg.setSource(14020U);
    msg.setSourceEntity(205U);
    msg.setDestination(37863U);
    msg.setDestinationEntity(93U);
    msg.service.assign("AYXHYOXARJZRKMFCDTNIFUIVFJDDOXIFQEWBRVKWTQQFHCAKALNSCWTCNEKEYBFFGLLGNXUUMZLVVPCRJVNRQDVOSYFGCMOPRWXVIESQFVGRWUKCLPHVJTHPHVAELASKPZNNDTHRCMYKMDULYIBPYXPNYJGNYBGX");
    msg.service_type = 107U;

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
    msg.setTimeStamp(0.8137431645875934);
    msg.setSource(46752U);
    msg.setSourceEntity(180U);
    msg.setDestination(40020U);
    msg.setDestinationEntity(222U);
    msg.service.assign("CLMRURSLVOYUGVGBKTXFCDIRQTDWLEPMGUYIEDONHGJRATTQXNLMUKXVYYEYWHQHVABLOTQWJXGOBFNQTHGVJSZUUIADPFANME");
    msg.service_type = 92U;

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
    msg.setTimeStamp(0.5808861669886272);
    msg.setSource(7001U);
    msg.setSourceEntity(243U);
    msg.setDestination(6U);
    msg.setDestinationEntity(128U);
    msg.service.assign("TMZTTLWLXNRANVSCJGZMBDHGGLVXGEHCRIIFKGQUGWILMFNSOZFSCTHUTOGJDQXWYAOJMLBFZTGMWRTNNWIONOEBTJJWDSDIZUEBJMGOKOCWXYZHQDBJYFAPAXKEKZQCROEHPLFARBVYHBCPUVYUYUEJOHHDHZWOKYFAMPCWSTPAKQDRXNRCUDPCRDGMNYBREHQDVEYFNXSKEPZIJVUAYVXQNPVAJUKMFIEIILLXFLSMCTXQLU");
    msg.service_type = 87U;

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
    msg.setTimeStamp(0.09609366205122216);
    msg.setSource(46613U);
    msg.setSourceEntity(165U);
    msg.setDestination(34771U);
    msg.setDestinationEntity(250U);
    msg.value = 0.5893443187177573;

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
    msg.setTimeStamp(0.15046026524448475);
    msg.setSource(28485U);
    msg.setSourceEntity(29U);
    msg.setDestination(53657U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6253527652188665;

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
    msg.setTimeStamp(0.992261049330716);
    msg.setSource(23141U);
    msg.setSourceEntity(169U);
    msg.setDestination(37699U);
    msg.setDestinationEntity(27U);
    msg.value = 0.278994407801993;

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
    msg.setTimeStamp(0.6270444738486516);
    msg.setSource(14161U);
    msg.setSourceEntity(17U);
    msg.setDestination(51568U);
    msg.setDestinationEntity(148U);
    msg.value = 0.6895777204723677;

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
    msg.setTimeStamp(0.5812615282022044);
    msg.setSource(59178U);
    msg.setSourceEntity(32U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(109U);
    msg.value = 0.32804038750638165;

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
    msg.setTimeStamp(0.4446545373036863);
    msg.setSource(16723U);
    msg.setSourceEntity(205U);
    msg.setDestination(50711U);
    msg.setDestinationEntity(158U);
    msg.value = 0.5839976075484246;

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
    msg.setTimeStamp(0.11212315387950744);
    msg.setSource(61682U);
    msg.setSourceEntity(217U);
    msg.setDestination(48898U);
    msg.setDestinationEntity(188U);
    msg.value = 0.3284774203729559;

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
    msg.setTimeStamp(0.5134008740268319);
    msg.setSource(21476U);
    msg.setSourceEntity(76U);
    msg.setDestination(23080U);
    msg.setDestinationEntity(71U);
    msg.value = 0.9932224182777041;

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
    msg.setTimeStamp(0.5836746907829531);
    msg.setSource(65504U);
    msg.setSourceEntity(224U);
    msg.setDestination(58882U);
    msg.setDestinationEntity(133U);
    msg.value = 0.5963070341572227;

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
    msg.setTimeStamp(0.44441683618212);
    msg.setSource(38462U);
    msg.setSourceEntity(81U);
    msg.setDestination(49525U);
    msg.setDestinationEntity(189U);
    msg.number.assign("YILAFKCZQFROSGPLFOQFEDSCFXYHJRXXVSRJFDVCTWQDJRORMSVIQTOVEOKOXEYE");
    msg.timeout = 4374U;
    msg.contents.assign("JAXVMJYIPHWJRHRUYPOREITSUAVAVGUPLDUHWPKQZLAFGJWJBFVFCEZXQDKGHYXGDLJIPXOTEFXDRLHWGQYOCQIMSRXKBRZPJNENFVNNBTHDFOTNQSZDNZMEQCYGSNKLUOXKWYB");

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
    msg.setTimeStamp(0.5596358537460151);
    msg.setSource(54860U);
    msg.setSourceEntity(4U);
    msg.setDestination(41933U);
    msg.setDestinationEntity(88U);
    msg.number.assign("PEFWDIELAYZMDOGKPJXULMPBNBQQMKACKBBUZTEEXRFQAKQFKXUNLVRSJTSUDJCPXYQTOTRRXVECAMRZKWDFFVACJOPTAVIXNUCBEWCJIAISMNISYBSIUTTOKNEYCGSZFNIHW");
    msg.timeout = 12613U;
    msg.contents.assign("ZEGXZNTYAUZKHXWRLORIQXLMKBHFGDTLJYCGVPUZURHPSDSBYNFXPMOJIXLWFOIENNCAMRSGEQKVQUQDCYAATKJORKGXZJVCAFZFKMLHQYMHQSAUPPGYJZYUTJQCWMOGWCBLGAECFPWJTCBYMWREWOPUDBDSTTIDPBVLSJTIKHFYHHIDRXSLKAUVXHYHVEXPXKUZNERNOMDFIANQFBNNQGZTWSOZROWKCEVIVWMEBIMTASPFSDJ");

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
    msg.setTimeStamp(0.32574327267323233);
    msg.setSource(63122U);
    msg.setSourceEntity(51U);
    msg.setDestination(33588U);
    msg.setDestinationEntity(243U);
    msg.number.assign("BLLYYCMZRJALPJYVEUXPRQGOAMFMXGBAXVMEARTCVYHFRGENICAFFUXKVQNGGCHTWUW");
    msg.timeout = 42602U;
    msg.contents.assign("APXYDAZBSEBQLVIXYOGTTLLCWCGRBNZTYUMUZGOPNOTWJQRAPKIWDMAYLHMJNHWIXSTGHWSFEWVOJVFJSY");

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
    msg.setTimeStamp(0.8535854576314753);
    msg.setSource(63965U);
    msg.setSourceEntity(72U);
    msg.setDestination(62372U);
    msg.setDestinationEntity(44U);
    msg.seq = 3794630057U;
    msg.destination.assign("YPMJCUTIGNIGSRHKSCDMJQSAPEVTNDBHIRNGYLRQQFFFWMZNLNVMVTCOJGNGXCIMEDWJBZCOWLZVSMPANHFAWMHGEJERRYXHQWCPJLAMXMSYCUYUBYUNKFFJPJIQLQRYQNYPBETFKKZTVLHLSVOBBTDVZZOECRUXIKMUPWFVACVQRGYSKNPEUXAGAIUZDJXHHCRZRWKDDTIBBPDEAADWGBSLOXXHQXFOLOOBXSUHTKWDWT");
    msg.timeout = 52876U;
    const signed char tmp_msg_0[] = {16, 28, 114, -128, -95, -23, 12, 23, -41, 29, 35, 11, 22, -33, 109, 78, -31, -83, -116, -8, 61, 56, -96, -2, 99, 109, -86, 93, -38, -107, 51, -19, 88, -122, -18, 84, -69, 117, -105, -21, -123, -118, -80, 110, 124, -65, -100, 43, -124, 95, -19, 125, 73, -11, -15, -107, -75, -57, -43, 8, -95, -53, 120, -36, 91, 20, -28, 120, 66, 25, 90, 61, -13, 50, 110, -80, 90, 57, 57, 48, 117, -61, 1, 69, 103, 22, -36, 74, 75, 42, 33, -90, -25, -57, -81, 116, 35, 42, 110, 5};
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
    msg.setTimeStamp(0.8801406533208577);
    msg.setSource(56549U);
    msg.setSourceEntity(41U);
    msg.setDestination(39649U);
    msg.setDestinationEntity(65U);
    msg.seq = 2083957743U;
    msg.destination.assign("LNTCHBYBPUJMEODHQRSBPSHRRVSRTSKVLTOBUVFUOTALWIBSWEAJ");
    msg.timeout = 26568U;
    const signed char tmp_msg_0[] = {10, -119, -22, 40, -114, -30, -16, 108, 43, 17, -9, 16, -18, -103, 79, -24, 74, -98, 17, 122, 13, -81, -70, -60, -126, 4, -127, -90, 0, -122, 91, 68, -49, 23, -89, 81, -92, 57, -8, -81, -32, 97, 75, -24, -13, -108, 123, 92, 63, 76, -86, 68, -9, 118, -105, 84, -32, -101, 24, -60, 99, -24, 69, 71, 102, -119, 68, -118};
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
    msg.setTimeStamp(0.6536887913916698);
    msg.setSource(16065U);
    msg.setSourceEntity(156U);
    msg.setDestination(53181U);
    msg.setDestinationEntity(182U);
    msg.seq = 4050677821U;
    msg.destination.assign("ZQJDIQKAFNBXYPHBCT");
    msg.timeout = 54794U;
    const signed char tmp_msg_0[] = {35, 120, -45, -122, -120, 107, 112, 26, 103, 72, 3, -32, 40, -43, -6, 12, -74, 109, 8, -63, -55, -38, 0, 97, -128, -15, -71, -28, 104, -5, 85, 10, 36, -101, 76, 84, 10, -23, -90, 30, -80, 55, -1, -36, 7, 93, 86, 32, -75, -125, 98, 37, -97, -103, -49, 85, -37, 62, -63, -51, 122, -38, 36, -70, 81, -34, -95, 52, -107, -72, 44, 85, 21, 62, 69, 42, -74, -3, -56, -103, 77, -88, -100, 109, -19, -117, 15, -71, 122, 86, 120, 7, 116, -14, 70, -35, -6, 27, -85, 89, 17, 22, -74, 118, -75, 81, -108, -6, -70, -51, -100, -56, -3, -101, 24, -22, 49, 38, 56, -59, -122, -6, -102, -11};
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
    msg.setTimeStamp(0.12157423460396966);
    msg.setSource(3317U);
    msg.setSourceEntity(90U);
    msg.setDestination(47647U);
    msg.setDestinationEntity(16U);
    msg.source.assign("SKTGLPCEOURWFQSEKXBHCOHKUSJOZNJDSLOMOLYQCDRFATXAIUWEPLXOAURLCJEXIDONAYMRYRBXTVPQDQUBYHWLAMXRTAFZNHDMGCZAZQNNHPIXMAUJPHTYVINWGKIRAYWOULGGVHWUUNIFKYSEKXVBMQZXHQYLVGEWYIGKMCVNZGOCCEPFKINHFVFDFBZQQTCKSSXUDWDEAJTVWOSITWTMFJRVBPTNGLIKDSMPQJMZR");
    const signed char tmp_msg_0[] = {8, 42, 60, 38, -60, 56, -81, -89, 92, -35, 79, 67, -45, -83, 17, -62, 59, -108, 29, 44, 56, 117, -73, -14, 57, 68, -101, -111, 57, 101, -40};
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
    msg.setTimeStamp(0.45698550110779945);
    msg.setSource(3291U);
    msg.setSourceEntity(20U);
    msg.setDestination(38771U);
    msg.setDestinationEntity(141U);
    msg.source.assign("TZPSRUJMFCQADISIFKDMRENJEPMDSVYEKMAIGXTGBOISQWORI");
    const signed char tmp_msg_0[] = {102, -77, -116, 117, -35, 46, 105, -116, 107, 3, -7, 126, 119, 68, -122, 11, 91, 71, 93, -57, 83, -125, 32, 31, 36, -25, 52, 14, -120, -53, 79, -4, -34, -96, -24, 66, -52, -82, -6, 51, 109, -120, 72, 73, 111, -59, -19, -101, 13, -19, 109, 126, 57, -81, 67, 109, -32, 44, 82, 13, -43, 126, -96, 45, 112, 122, 55, -37, -44, -122, 96, -88, -1, -37, -7, -43, 89, 27, -7, 87, -87, 112, -108, 72, 104, -30, -59, 119, 33, -10, 10, 46, 99, 65, 98, -56, -88, -103, -116, -42, -17, -47, -79, -124, -54, -63, -105, 109, -21, -105, -101, -79, 16, -71, 63, -59, -105, -58, -28, -112, 101, 68, -68, -79, -44, 36, 19, 79, -26, 41, -120, 117, 125, 75, -77, 54, -17, 46, -5, -39, -31, -104, 108, 8, -114, 92, 80, 2, 28, 125, -74, 24, 42, 13, -64, -114, -89, -127, 101, 45};
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
    msg.setTimeStamp(0.29089886465297266);
    msg.setSource(53109U);
    msg.setSourceEntity(230U);
    msg.setDestination(2622U);
    msg.setDestinationEntity(145U);
    msg.source.assign("CJHQSDSVNWIUXUKLWVYWMXBUVMXEPQEJUEHFWBDFLTGWFSKGYNSYUYBWGJGKQEWMXBDAUUOAUZBZFIHBNCBTPQQOPLGIAHRHDNRREZRRXVGDYAWMZDCKRKJCHDRHIAWVBKZEWMNTAPMUMAJKOTDALKOMPCNGNFVXBVQOROKFLJTSACZZECAIHPNOVJQJLCLPCYDELQDXLTPGXCZIXIFOTOKYVJMZSUFPRQJTGFVSSYQGL");
    const signed char tmp_msg_0[] = {41, -111, 8, -87, -14, 124, -48, -75, -53, 65, 19, -15, -114, 17, 40, -120, -39, -121, -75, 9, 99, -11, -20, -9, -87, -72, -33, 2, -8, -33, 20, -68, -46, 21, 82, 56, 45, -77, 105, -66, 86, 14, 87, 118, 30, 15, -19, 16, 122, -110, 1, 95, -14, 55, -43, 34, 12, 70, -69, 79, 67, -41, 115, -55, -124, 63, 75, -4, 39, -116, 114, -57, -90, 15, -101, 19, -6, -74, 86, -59, -73, 77, 78, -89, -9, -30, 8, -18, 48, -22, -85, 99, -117, -60, -19, -15, 88, 83, -77, -107, -105, 16, -54, -98, 120, -6, -31, -4, -41, -14, -9, -84, -61, 19, 52, -67, 56, 34, -89, -102, -11, 83, 64, 1, 80, 58, 48, -124, 105, 47, -69, -85, -55, -78, 37, 63, -72, 84, -102, 121, 112, 91, 82, -88, -65, -116, -74, -29, 19, -70, -26, 76, -64, 70, 45, -68, 17, 79, 90, 87, 81, -70, -115, -120, -77, -16, 58, 60, 108, -48, -80, -5, 82, -80, 54, 122, 100, -10, -81, 109, 47, 13, 17, -125, 102, -64, 111, -123, 33, 38, -23, 99, -88, -22, 8, -100, -51, 72, 100, -2, 14, -122, -23, 14, 116, 18, 37, -34, 74, 89, -32, 5, 10, 67, 48, 48, 79, 90, 52, 101, 47, -55, -12, -55, 22, -23, -87, 3, 24, 91, 78, 18, -128, -3, 22, 22};
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
    msg.setTimeStamp(0.24044935983000026);
    msg.setSource(50891U);
    msg.setSourceEntity(254U);
    msg.setDestination(25367U);
    msg.setDestinationEntity(27U);
    msg.seq = 4249847748U;
    msg.state = 209U;
    msg.error.assign("PZEEPMEXVLWBWVSCDIFCQLDBMAYYKXRAIAJPHBI");

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
    msg.setTimeStamp(0.21079794636740246);
    msg.setSource(62494U);
    msg.setSourceEntity(100U);
    msg.setDestination(26535U);
    msg.setDestinationEntity(203U);
    msg.seq = 1549501323U;
    msg.state = 230U;
    msg.error.assign("XQKRVVXRNXSNXGMJYLKFDETPNNMTOCLBPAYBMVQCEFMGOBKASHBCAZF");

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
    msg.setTimeStamp(0.22845663531033922);
    msg.setSource(59501U);
    msg.setSourceEntity(173U);
    msg.setDestination(53697U);
    msg.setDestinationEntity(205U);
    msg.seq = 4037284259U;
    msg.state = 208U;
    msg.error.assign("WFJZCRMPFQYHTJNKDHRRMCUMPWOWUPQTARLSOEOWYZGIHQWJAJIPSDWGLTOGEHEIAZBHYLCOFBLUUVBTSZNKITNCVBITRWWJKMSNDKRFXNILTNORPMSMIPCJYMXGELDHOLLZBAYFLYAJXGAMYNVTCZVICIQLRBXUFAXTJKJMPNSOCDHEFVGZVDCBHVQIWAHQXBDDVXJQVYFKUEDGEOWNZZEXGKBQZSROXAACKPNSTKUQSSFYP");

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
    msg.setTimeStamp(0.8715785672433046);
    msg.setSource(18241U);
    msg.setSourceEntity(129U);
    msg.setDestination(34730U);
    msg.setDestinationEntity(110U);
    msg.origin.assign("CWEDGWFMMLPNSFLXCOURPMRGKJJQTYDFJCJQDLYQGVHCINBHAEUDOZYXZCBOTAADTINIUBOCAUGQMEBYQKJDHBZEKZXNAKRFVQYLVHBBWVANSEYAESCRGTQJJSHWZHFZETDNIPFW");
    msg.text.assign("ODJOBILDLVMQXFVQAVHWWWZLEUYFTCASXHGUNAVZFSCCUWVDBZFHYXNPHRQMEUJFPAKDTXYRRKOSYMGOLQGKBXMCWXPXUGREGLQGZIAKBRLIIYQNYZQ");

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
    msg.setTimeStamp(0.3392963334224809);
    msg.setSource(45585U);
    msg.setSourceEntity(90U);
    msg.setDestination(65424U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("RAOHIHFFXPLLPAJLQZVTRNMXOAKALMIJIHKBMQKHQUKTDTZDQPUVHTDVFZTMNRXCVBIJRWPXBGCNULUXXMF");
    msg.text.assign("BKIJBDZYYAVSYJALDAPGQZNIDNOSUGKHWTFUSPVZHUQBGVQLBMRAXLMNAKMVMTYVJFOE");

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
    msg.setTimeStamp(0.8744837768250583);
    msg.setSource(16357U);
    msg.setSourceEntity(67U);
    msg.setDestination(48578U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("KKAVZHKMCQEJLKBSANNVBOCJTBPSOTAWXKDYOBKYREXIDSJUSJQHQCWYOINLMGBGJYEKDVSYCIUXFMFYPVYFPFGQEOKIWAAOWXGIPPTUDXUKREBPZHNUGLSNPTBWHWFHITTXMBZHNQGJQFWHAQPMSEE");
    msg.text.assign("CZVZWLSVUKXYXIMOWJAHVVSVZWBGJGQPDAHVGIXJHJTEYGKIOPEKZHKCOJAWGCEEBDHYIRLCTGDXIAXLLYXZKASTIUFIRTEFDDTSCATWZKNVUDOHKLRHGHKAXBQ");

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
    msg.setTimeStamp(0.4352161477514689);
    msg.setSource(54229U);
    msg.setSourceEntity(100U);
    msg.setDestination(52338U);
    msg.setDestinationEntity(219U);
    msg.origin.assign("QECDUZBNZAOGQOKYJILNJVUEHSOGAJWEGSAUCDOSNWGZFOLIIJMHPYMXMDVHTSFYDFZUCWZJMFINLTTVLMUAONIXHGGHWTKBYROAHEZX");
    msg.htime = 0.07003981670902826;
    msg.lat = 0.6778368223221142;
    msg.lon = 0.7754356930789396;
    const signed char tmp_msg_0[] = {-46, -78, 117, 2, -35, -96, -33, 125, -85, -23, 91, -122, 11, -82, 49, -57, 121, -25, -123, 55, -88, 63, -39, -36, -105, -83, 21, -113, -115, -93, -58, -32, -63, -41, -119, 37, -36, 34, 37, 78, -14, -115};
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
    msg.setTimeStamp(0.6998629994375983);
    msg.setSource(14072U);
    msg.setSourceEntity(216U);
    msg.setDestination(28278U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("FQGWHBAOVPRRACDIFVBY");
    msg.htime = 0.9149846508232135;
    msg.lat = 0.11204236522803068;
    msg.lon = 0.27863843677551925;
    const signed char tmp_msg_0[] = {-119, -127, 126, 51, 57, 21, 29, 65, -108, 102, -117, -76, -110, 3, 93, -83, -122, -75, -6, 106, -81, 48, -33, -94, 42, -49, -24, 109, 70, 104, -58, 49, -32, -115, 83, 20, -39, 9, 107, -74, -51, 99, 4, 20, 27, 30, 31, -79, 32, 74, -20, -109, -69, -10, -121, -64, 21, -121, 124, 75, -12, -14, -71, 14, 108, -12, 90, 89, -114, 114, 52, 115, 69, 11, 53, 8, -28, 47, 90, 4, 11, -60, -82, 106, 60, -74, 94, -114, -105, 86, -75, 115, 65, 92, 97, -14};
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
    msg.setTimeStamp(0.521262319721579);
    msg.setSource(31042U);
    msg.setSourceEntity(143U);
    msg.setDestination(24465U);
    msg.setDestinationEntity(104U);
    msg.origin.assign("TRXEHAHWYCGYKEFGQDHWPYISYUJZPFWJUNZOINZOJOFTDPXPEFTXGNVQYBLEXBGRPCJLKSZFFTEB");
    msg.htime = 0.6063000207273832;
    msg.lat = 0.969279801874071;
    msg.lon = 0.1452548362950169;
    const signed char tmp_msg_0[] = {-57, 29, -123, 42, 40, 73, 29, -12, -13, 61, 2, 70, -3, -12, 59, -62, 69, -81, -79, 89, -70, -7, 17, -41, -61, -67, 38, 18, -84, 94, -9, 94, -48, -89, 83, -94, 39, -13, 63, 38, -26, 1, 87, 34, -111, 101, 11, 1, -57, -21, 97, -40, 88, 9, -34, 103, 115, 114, -17, 123, 38, -52, -84, 23, -108, 50, 6, 32, 58, -79, -106, -63, -95, -128, 106, -15, 93, -49, -94, 45, -71, 8, -34, 115, -48, 25, -57, 45, -118, 23, -43, 17, -116, -93, -20, 119, 78, 28, -37, 110, 126, -59, 87, -16, -30, -80, -27, 39, -62, -25, 49, 19, 43, 82, 5, -10, -81, -32, 46, -97, 53, 77, -10, -123, -58, 48, 29, 4, -95, 55, 77, 13, -12, 19};
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
    msg.setTimeStamp(0.4671210095704811);
    msg.setSource(6636U);
    msg.setSourceEntity(74U);
    msg.setDestination(36719U);
    msg.setDestinationEntity(5U);
    msg.req_id = 38081U;
    msg.ttl = 4691U;
    msg.destination.assign("FCAHKBJKGLXFCKQEEEYZBPCBVBAB");
    const signed char tmp_msg_0[] = {34, -6, -80, -70, -90, 9, 36, 85, 112, -48, -76, -47, -47, -64, -110, 63, 21, 90, -11, -19, -126, 39, -16, -72, 11, 103, 14, 96, -33, 53, 63, 4, 14, 125, 17, 78, 96, -122, 21, -61, -106, -40, 111, 74, 68, -13, 113, 79, -107, -126, -23, -41, 116, 80, 12, -121, -31, -19, -3, -74, -37, -37, 110, -88, -112, 119, 57, 45, -100, -109, -91, 119, -45, 95, -96, -89, 68, -15, -50, -40, -47, -84, -125, -24, -9, -18, 25, 108, -63, 122, -82, 97, -101, -61, 14, 6, -99, 99, 92, 73, 43, -20, -97, 67, 49, 44, 89, -58, -37, -122, -86, 90, -17, -85, 118, -51, -123, 27, 26, 5, 73, 111, -35, 117, 66, 21, -11, 47, 75, 71, -2, 50, 116, -69, -128};
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
    msg.setTimeStamp(0.6071164347150529);
    msg.setSource(15078U);
    msg.setSourceEntity(236U);
    msg.setDestination(24594U);
    msg.setDestinationEntity(172U);
    msg.req_id = 59328U;
    msg.ttl = 36912U;
    msg.destination.assign("QPGFNIUKOKAVTJPFQZVAXZBTYTCPEFPESWQPRJKZBSFFYASLGMRNEPDHVIPRVLDIRLSESJGJIJDCZLNXQPTHSKBDEZWHOUFODNXOLLHYQMACNEVZCRDJUMKWNRUOYWHNBBWNKBNZETEXRXWXSRJQPHUTVMFAYDOKNDMYQFXPOJWTKLW");
    const signed char tmp_msg_0[] = {-77, 112, -94, 107, -53, -60, -46, 120, -82, 125, 97, 107, -120, 73, 39, 26, -73, -115, -95, -66, 65, -106, -68, -67, 37, -72, -42, 45, 1, -56, 109, 26, 67, -18, -118, -65, -124, -105, 53, 73, -39, 16, -66, 83, -102, -42, -121, 32, 114, -87, 17, -61, 10, -78, 86, -124, 28, -37, 26, -28, 100, 106, -122, 114, -107, 90, -74, 38, -86, -6, 52, -27, -117, 119, -127, 14, 119, -25, -49, 20, -17, 105, -121, 119, 16, -11, 85, -54, -117, -17, -12, -19, 29, -22, -119, 73, 106, -32, 119, -102, -97, -67, 14, 72, 115, -119, -56, 121, -76, 125, 82, 39, -82, -105, -35, -53, 89, -92, -97, 11, 9, 112, 5, 7, 64, 71, -46, -62, -104, 90, 21, -80, 92, -72, 90, -43, 9, -46, 109, 39, -67, -45, -43, 76, -37, 36, 51, 124, -13, 26, 104, -52, -125, -98, -104, -44, -102, 16, -37, 96, 20, -52, -82, 106, 34, -31, -72};
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
    msg.setTimeStamp(0.06327954670800195);
    msg.setSource(40504U);
    msg.setSourceEntity(80U);
    msg.setDestination(25880U);
    msg.setDestinationEntity(77U);
    msg.req_id = 20390U;
    msg.ttl = 64750U;
    msg.destination.assign("CBBWEKPUIPQCIBMFCBZCQROCJAXJIKELDLXVGSNGPFWGFLVXMIQSTIZAFFFXXZSTCCWLXZGOESEDYIOPTKGKSZVHRUPUHXGABGYDQMFHODOWUMZRYYMVYXLKAENMEKODWMDRAEXNWOUBQJVLVGZPURAUDHN");
    const signed char tmp_msg_0[] = {58, -45, -11, 1, -59, -64, 113, -35, 19, -111, -125, -17, 107, 44, -103, 65, 101, -102, 82, 64, -19, 99, -117, 48, -11, -29, 48, 15, -28, -7, 88, 110, 117, -73, -82, 29, 36, 113, 4, -94, 38, 126, -58, 41, -9, 27, -57, 117, -58, -98, 123, 29, -106, 48, -107, 98, 35, -97, 89, -81, -79, 39, 50, -76, 33, 43, 95, 120, -63, -84, -37, -21, 54, -94, -30, 113, -79, 96, -57, -101, -66, 92, -45, -56};
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
    msg.setTimeStamp(0.3414778883001002);
    msg.setSource(31738U);
    msg.setSourceEntity(36U);
    msg.setDestination(6897U);
    msg.setDestinationEntity(98U);
    msg.req_id = 30860U;
    msg.status = 93U;
    msg.text.assign("XNYDUJHMJSKQAVYBJRAGSRSIZUQFRBUSSRFFOFBNXGQZQLQOAFVNYCEDQNBSBOASVQDMZHRYBCEMBWFGPNQESWJOEHZTKOHMHFMKSNBRECPVWXDKTWUIIOHDBUTWATPBATECACJIRLFGOKLULWYDQHTHGTUJXOXZVMEWDIOPUCLLVX");

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
    msg.setTimeStamp(0.9169857607935273);
    msg.setSource(21793U);
    msg.setSourceEntity(136U);
    msg.setDestination(2031U);
    msg.setDestinationEntity(108U);
    msg.req_id = 2953U;
    msg.status = 3U;
    msg.text.assign("UGTOIBULGAVFNQHEHNRXZEXENBZJIYWTKOPQYTIIJKHRSHWNSGWFZGDFKAKJWBRBOCEUITADTQJGFPSTSUCBVTKNOWMCMHLDZPJBTYCDPGFWYVKPDELAHMNRQXFKBQZJPMBBIQOLSCKPLMSUPDWGXVCUEWZEVOFARTGJUZGIJRULCWVXXUORRMFALLA");

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
    msg.setTimeStamp(0.7887322126090167);
    msg.setSource(42773U);
    msg.setSourceEntity(180U);
    msg.setDestination(47575U);
    msg.setDestinationEntity(100U);
    msg.req_id = 39702U;
    msg.status = 139U;
    msg.text.assign("HFQJFDHRSDIUUSKENXZAVBXFTGHOSDTSXVERREKNMJZUJCPFGCNTCMVOJOYTRAUFPLLPYOKEZJRXWPCPJMOJAPGVGWMLFBKSGCWDXTKZVTYYAVIZ");

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
    msg.setTimeStamp(0.14930020377485353);
    msg.setSource(43961U);
    msg.setSourceEntity(188U);
    msg.setDestination(47652U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("NUUGLIIKCOGYJZNQXQUMKMQYLNSVFTAKWGSWZVXQTBJKWYFCSNEFHAUZLNZHUDYABBYEZRXNXCACKDHITPOVWQOPQXBIJSHETZNKRXFBSJROTZJLVISGRIDAGSAYMWZMYUXMBHTP");
    msg.links = 3504916700U;

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
    msg.setTimeStamp(0.49621137416482486);
    msg.setSource(58304U);
    msg.setSourceEntity(37U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(226U);
    msg.group_name.assign("PSJLBCNIVJTRVFGLAHEIDFVCIUJSNBOQHZQYAWSGIUSYCTXTNPAAXYAKHITLYXHMOZQEWOKFLKJOMIXCWS");
    msg.links = 3491818222U;

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
    msg.setTimeStamp(0.754454020124893);
    msg.setSource(61682U);
    msg.setSourceEntity(140U);
    msg.setDestination(45678U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("QYVOVGGNDHTXNOBFVOHTQQMIKSODNJZYAZKDTYHCZFOPMHQFRYRXRKITBXTDUPPAQIYSKVQOVRGXJJLDQCUHF");
    msg.links = 4040953976U;

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
    msg.setTimeStamp(0.5744008906953406);
    msg.setSource(55150U);
    msg.setSourceEntity(136U);
    msg.setDestination(51733U);
    msg.setDestinationEntity(194U);
    msg.groupname.assign("ZQJRBWQSUJBNKGCCPBOYWACOKPCKBODNTESWQGSFTTMEGWDBBPOBAHWVHKKBLYOMSBGY");
    msg.action = 244U;
    msg.grouplist.assign("NCRNOWINLJPZVCVYUDOUUJZQWWROMFDDUBLHTBKZICFEKEDJPAVQZWHRMXUSJFSDHTASMGYBSAHVCDNXAQHCHKUZTPMXPWFVSRYAWOECIDLLAEXIRETDHZCQVXOUINLUMYCEGNQVQTSIYUZPEJNUWHNPHLLRWZKNBQKFAICKJXYDIEGLGMKYAOGTKMSXBKWCJGWXQGFTJRQYERNAOBPYYRTBOFGDMOTOPZGAPLRSJXHSBLMTBK");

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
    msg.setTimeStamp(0.27392334686917097);
    msg.setSource(28156U);
    msg.setSourceEntity(116U);
    msg.setDestination(42308U);
    msg.setDestinationEntity(241U);
    msg.groupname.assign("NBVNOQDZQCUMWTRQAMCFZPODOILRXMUVYEBHMDPJLOJKGTHLMBDXDEQKSXYPWKZOYYGEVBTWEDMEKFWSYYZHASVSFLMQKQCPVGCTOZNNTABVHSSFTXUKWOGNHQJPSJFCYSYPRRVXCGXDHMGOETIRB");
    msg.action = 27U;
    msg.grouplist.assign("WGBMWRCHAALFHOIFZKBJRXRDLEKAOXRAFQTSWPLNUXPTOJIVSPDWYYVQIILPJQRTOKOEERDYYONNPLLTUVTMOVQJIPBNJNAIYPVSHPPGECDXDEZQKYLZDUDEGQYAEJHQVJTUGBTXHFMIMMNWSWXMUKBSFXREGEBCMGHVUHZCXWIGJSCJNSZCDZCSQCBFBWURSKTZPXXBFKTTYAAGIMMDKWQRKADVLOLFOAJFVGHOV");

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
    msg.setTimeStamp(0.13153503867930139);
    msg.setSource(21450U);
    msg.setSourceEntity(127U);
    msg.setDestination(30595U);
    msg.setDestinationEntity(237U);
    msg.groupname.assign("IPEHEGDNZGJUKZAIBMWWQQGDWUJOSZDJPESETXXYSXOAPCZMRLMBKTPWAYLGNUTKCXTJMZHNBJFTEXCXDLDSUIGEYXIWVHTLOOFRBNNYDHMBZFLONTZISIIRGNQBKYYBKICQKIFOJVHGPUWTMBVADHY");
    msg.action = 216U;
    msg.grouplist.assign("HKOYJSKVGXQITBJDCNCVIUFEUMFVLNDDXUMJLWIZYONGVDCXTTJAYBOCXNFYGBFOTMSRJZGZEAJPREFTAPUKTOSURNTKHHIGTHKHRLRG");

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
    msg.setTimeStamp(0.009338531508630843);
    msg.setSource(12925U);
    msg.setSourceEntity(249U);
    msg.setDestination(34012U);
    msg.setDestinationEntity(176U);
    msg.value = 0.8783649635250662;
    msg.sys_src = 6571U;

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
    msg.setTimeStamp(0.9648706150817173);
    msg.setSource(37129U);
    msg.setSourceEntity(31U);
    msg.setDestination(7873U);
    msg.setDestinationEntity(10U);
    msg.value = 0.4613214573755646;
    msg.sys_src = 44650U;

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
    msg.setTimeStamp(0.0981554653117801);
    msg.setSource(10474U);
    msg.setSourceEntity(188U);
    msg.setDestination(64059U);
    msg.setDestinationEntity(134U);
    msg.value = 0.8760393752038775;
    msg.sys_src = 12973U;

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
    msg.setTimeStamp(0.9765125985880276);
    msg.setSource(58756U);
    msg.setSourceEntity(195U);
    msg.setDestination(29548U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7693655435202174;
    msg.units = 17U;

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
    msg.setTimeStamp(0.38807141950019275);
    msg.setSource(11324U);
    msg.setSourceEntity(15U);
    msg.setDestination(55310U);
    msg.setDestinationEntity(131U);
    msg.value = 0.17794457601187352;
    msg.units = 168U;

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
    msg.setTimeStamp(0.0412550311934462);
    msg.setSource(38398U);
    msg.setSourceEntity(171U);
    msg.setDestination(3708U);
    msg.setDestinationEntity(109U);
    msg.value = 0.5320834086932137;
    msg.units = 181U;

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
    msg.setTimeStamp(0.7467657154407507);
    msg.setSource(39483U);
    msg.setSourceEntity(202U);
    msg.setDestination(19213U);
    msg.setDestinationEntity(182U);
    msg.base_lat = 0.3762041415900209;
    msg.base_lon = 0.4957479886017391;
    msg.base_time = 0.5420168392678154;

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
    msg.setTimeStamp(0.5189756004250518);
    msg.setSource(52759U);
    msg.setSourceEntity(10U);
    msg.setDestination(14597U);
    msg.setDestinationEntity(107U);
    msg.base_lat = 0.28413914703649845;
    msg.base_lon = 0.38366289277532584;
    msg.base_time = 0.1719515290510809;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 52587U;
    tmp_msg_0.priority = 53;
    tmp_msg_0.x = 18266;
    tmp_msg_0.y = -12380;
    tmp_msg_0.z = 2176;
    tmp_msg_0.t = -19610;
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 8749U;
    tmp_tmp_msg_0_0.lat = 0.33010997740778913;
    tmp_tmp_msg_0_0.lon = 0.22298359721530858;
    tmp_tmp_msg_0_0.z = 0.3169179331959655;
    tmp_tmp_msg_0_0.z_units = 145U;
    tmp_tmp_msg_0_0.duration = 23340U;
    tmp_tmp_msg_0_0.speed = 0.00756606351014899;
    tmp_tmp_msg_0_0.speed_units = 250U;
    tmp_tmp_msg_0_0.type = 253U;
    tmp_tmp_msg_0_0.radius = 0.08139367868709058;
    tmp_tmp_msg_0_0.length = 0.8720270394654733;
    tmp_tmp_msg_0_0.bearing = 0.4560777641984193;
    tmp_tmp_msg_0_0.direction = 105U;
    tmp_tmp_msg_0_0.custom.assign("QYDFSBZEXDUTGDSKNPSDOOQBADICOYXWMPNXBSWYGQREJUJQTFRUMCRPQFQKTPQLDTCEPKZWSOLNWXYVSRQOGIPJSJMKDHYKFYUKBFTD");
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
    msg.setTimeStamp(0.4186075537620655);
    msg.setSource(31600U);
    msg.setSourceEntity(16U);
    msg.setDestination(49821U);
    msg.setDestinationEntity(226U);
    msg.base_lat = 0.8801520779842066;
    msg.base_lon = 0.7817808436420919;
    msg.base_time = 0.08412633273781689;

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
    msg.setTimeStamp(0.303044225569416);
    msg.setSource(200U);
    msg.setSourceEntity(161U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(177U);
    msg.base_lat = 0.5456094131466018;
    msg.base_lon = 0.4809777256921457;
    msg.base_time = 0.7557188374878302;
    const signed char tmp_msg_0[] = {30, 108, 1, -69, -8, 101, -36, -41, -42, 55, -128, -109, 60, -87, 6, 61, 0, -61, 3, -39, 95, 78, 69, -28, 33, -50, 40, -103, -36, 122, -17, -84, 64, -35, -97, 58, 35, 91, -126, -38, 107, -90, -27, 64, 108, -14, 68, 60, 49, 120, 111, 20, 67, 103, 70, 83, -33, 117, 105, -57, 112, -112, -42, 110, -9, -67, -48, -118, 126, -115, 91, -112, -26, -11, 28, 4, 75, -122, 14, 29, 49, 75, -9, -69, -1, -48, 58};
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
    msg.setTimeStamp(0.5231437552692121);
    msg.setSource(5219U);
    msg.setSourceEntity(207U);
    msg.setDestination(3244U);
    msg.setDestinationEntity(170U);
    msg.base_lat = 0.5208742375768516;
    msg.base_lon = 0.3177073716044656;
    msg.base_time = 0.3112922304383219;
    const signed char tmp_msg_0[] = {70, 59, 60, 50, 47, -8, -20, 52, 90, -69, -11, 108, 109, 28, -96, 47, -96, -54, -83, 110, -121, -12, 102, 87, 12, -12, -94, 112, -101, -73, -58, -83, 41, 73, 61, -114, 3, 8, 96, 112, 100, 60, -71, 104, 83, -13, -115, -37, -78, 51, -73, -52};
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
    msg.setTimeStamp(0.612285550633647);
    msg.setSource(6285U);
    msg.setSourceEntity(86U);
    msg.setDestination(5237U);
    msg.setDestinationEntity(1U);
    msg.base_lat = 0.18207543617160005;
    msg.base_lon = 0.8160079232898915;
    msg.base_time = 0.15831514567323368;
    const signed char tmp_msg_0[] = {-77, 53, 6, -100, -50, 27, -69, 17, -113, 16};
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
    msg.setTimeStamp(0.22974775637329425);
    msg.setSource(30551U);
    msg.setSourceEntity(108U);
    msg.setDestination(27886U);
    msg.setDestinationEntity(38U);
    msg.sys_id = 9735U;
    msg.priority = 82;
    msg.x = -11269;
    msg.y = 6061;
    msg.z = 10873;
    msg.t = 27214;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 107U;
    tmp_msg_0.list.assign("MDYUVUEAIXPPBWZOSJRXWINZJOKDDZWSCLLXVMOJKITRZYDWIZCCFRGTLFXQCYBGIEYVHJBPYMJPOAHUEXSOZVBULXNSDZSMGUCRVKVBHDBMRNQUYCKJATDTCDCVXLAEMMNTEXKQFCJGXETRGVLEOWAFKJHHRNGOXIPSAZNWTLUJGUAOMRQLNSPKAQGEU");
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
    msg.setTimeStamp(0.6312117554204238);
    msg.setSource(35806U);
    msg.setSourceEntity(81U);
    msg.setDestination(16735U);
    msg.setDestinationEntity(209U);
    msg.sys_id = 52014U;
    msg.priority = 111;
    msg.x = 12186;
    msg.y = 10318;
    msg.z = 17674;
    msg.t = -30175;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("LCPPYGSVZAXVFCLJOXUETCLXOEYANPCBZWNVNFJWGZJHDEUPMWFFPBQLRGXSMEKKOMHQBBUMHNNSRRAMOZOFBBGLYWDMVZIQNKKKVXEISGVHMPKZWFOSKREJITQAFVXGZSGBTQZWXJTYXBNXPMYASWHROLEJAAJHLURUCISRIUEITIQRYSXPQPBFUDACOHRVNEJHKDWNWQGKUSFYLDJITH");
    tmp_msg_0.op = 99U;
    tmp_msg_0.sched_time = 0.7956419947686375;
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
    msg.setTimeStamp(0.9174591033520587);
    msg.setSource(59251U);
    msg.setSourceEntity(193U);
    msg.setDestination(40892U);
    msg.setDestinationEntity(198U);
    msg.sys_id = 27490U;
    msg.priority = -26;
    msg.x = 5300;
    msg.y = -22828;
    msg.z = 31764;
    msg.t = 449;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 52;
    tmp_msg_0.value = -700394034;
    tmp_msg_0.gain = 209U;
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
    msg.setTimeStamp(0.6071972831508863);
    msg.setSource(1275U);
    msg.setSourceEntity(55U);
    msg.setDestination(39121U);
    msg.setDestinationEntity(102U);
    msg.req_id = 14963U;
    msg.type = 250U;
    msg.max_size = 24022U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7390993632874234;
    tmp_msg_0.base_lon = 0.15434086245069745;
    tmp_msg_0.base_time = 0.32015491583317257;
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
    msg.setTimeStamp(0.8206808714538925);
    msg.setSource(575U);
    msg.setSourceEntity(65U);
    msg.setDestination(13725U);
    msg.setDestinationEntity(122U);
    msg.req_id = 28102U;
    msg.type = 62U;
    msg.max_size = 20726U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.23376375586523768;
    tmp_msg_0.base_lon = 0.834542555327474;
    tmp_msg_0.base_time = 0.4128958866234208;
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
    msg.setTimeStamp(0.7001104049516097);
    msg.setSource(32913U);
    msg.setSourceEntity(133U);
    msg.setDestination(45907U);
    msg.setDestinationEntity(165U);
    msg.req_id = 43129U;
    msg.type = 4U;
    msg.max_size = 31245U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3011748353906738;
    tmp_msg_0.base_lon = 0.331667796072449;
    tmp_msg_0.base_time = 0.1553504158021416;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 25460U;
    tmp_tmp_msg_0_0.priority = -127;
    tmp_tmp_msg_0_0.x = -27311;
    tmp_tmp_msg_0_0.y = 14519;
    tmp_tmp_msg_0_0.z = -17095;
    tmp_tmp_msg_0_0.t = -27435;
    IMC::ManeuverControlState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.state = 149U;
    tmp_tmp_tmp_msg_0_0_0.eta = 41806U;
    tmp_tmp_tmp_msg_0_0_0.info.assign("WPRSORNEEKGKSEDTHKQBFKWRQHFCHSAYFYQJYCFWTNDYUVPWSMBYSTXRHEEJPFDRGPTVAINMVVQWLTUUAHVNOSTNULALOGKXBERZWZXMUZLXGHCDBGEVYBJWIEOWLQAJFRRWPJWDDJPBCIAUJCPRBMUTVZZMKSOMSZLTODXABLTQEYIOGSBAMHVKVISQCZCLJGXXPOMOKJNBFANITNIGZJXLQ");
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
    msg.setTimeStamp(0.19397506861001235);
    msg.setSource(52447U);
    msg.setSourceEntity(6U);
    msg.setDestination(19659U);
    msg.setDestinationEntity(193U);
    msg.original_source = 17399U;
    msg.destination = 30395U;
    msg.timeout = 0.02364952107330698;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 192U;
    tmp_msg_0.goal_id.assign("YUTPLXRZDLIYQTGNYXBAMSQRONQWOFVDGUYMEPPMCJARNUQJHMPSECHYBFMGXOWSELEJHRIQKMKPRGKIFMRNMKFONASCZBAXKTSPQILRDWOGBJGIUYAJJNUWVTUANUHAZRTFVBVXDETTGZUFLTCYQSMHVKWGYIKJXWCVOEDOZYZ");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("QJGCTFCVSKUDEQUYGXCEWWLDCEFTFDQZKZDIVGJQRYCIPAVCFUAKMINDPXJRAPKBKDHJUXSRGPPNBLIJBBOTNHWOXUSDQZEOMNJYHYORTNRBLVBYFWOPL");
    tmp_tmp_msg_0_0.predicate.assign("RSLHCEWKFJXZFYGLAAWLFVDOZ");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("TVIEZYWGMDMQCQH");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 206U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("FUNMYEOGNHSYENACZVXYGTSRPLXSLBHAQ");
    tmp_tmp_tmp_msg_0_0_0.max.assign("ZNXTCLFPUMIHUQTCUOXAFGTLQPNGZELYHMBQHGJXYMKCWKDQTDCRHNZGMIOBVICBBWYUOSAXVMLGS");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.10934451122816446);
    msg.setSource(51084U);
    msg.setSourceEntity(229U);
    msg.setDestination(27223U);
    msg.setDestinationEntity(161U);
    msg.original_source = 15979U;
    msg.destination = 46958U;
    msg.timeout = 0.23001107281257271;
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.direction = 0.7435966557380539;
    tmp_msg_0.speed = 0.8398430910479503;
    tmp_msg_0.turbulence = 0.899665655656638;
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
    msg.setTimeStamp(0.11878568776778364);
    msg.setSource(32763U);
    msg.setSourceEntity(86U);
    msg.setDestination(16199U);
    msg.setDestinationEntity(152U);
    msg.original_source = 51208U;
    msg.destination = 63313U;
    msg.timeout = 0.10366916209424248;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 21585U;
    tmp_msg_0.lat = 0.8009596536979926;
    tmp_msg_0.lon = 0.29734481922749467;
    tmp_msg_0.z = 0.9965860504584313;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.amplitude = 0.2225035038970269;
    tmp_msg_0.pitch = 0.24072557885634582;
    tmp_msg_0.speed = 0.7334668404264025;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.custom.assign("ZWWTYZCBDMHIXGBUZHNWMFQUAEHIXBAXPMSWKTQBQRTLIQKHBCELQIBJZEGKLFVEONABYCCARCEVAXWVOUZJVSJXBHDKYHVBEITSZGPRSHJMDCPVZFGDEYTAVLENBPXROEQAKCTFARROQCQQYOOGMNUYWXKWRIOPMFJLUWSZWAJPJVINGSDGOJISLNUYLAJYYHNDRMCMFNLCHSKTOFXN");
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
    msg.setTimeStamp(0.08921132406856602);
    msg.setSource(56910U);
    msg.setSourceEntity(161U);
    msg.setDestination(53070U);
    msg.setDestinationEntity(170U);
    msg.type = 137U;
    msg.comm_interface = 42366U;
    msg.model = 7238U;
    msg.list.assign("KSUJIXXPFARMPAAIYIYJOOFKFMTKDJYBOIONUPSLDGPLRHUJXKMLDNADBHHMMYOWQJDEWTSBZL");

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
    msg.setTimeStamp(0.38998658636213357);
    msg.setSource(865U);
    msg.setSourceEntity(161U);
    msg.setDestination(51909U);
    msg.setDestinationEntity(180U);
    msg.type = 5U;
    msg.comm_interface = 383U;
    msg.model = 37595U;
    msg.list.assign("BNGKEYWSDSQQDIUBZDRSFWWHAZNOJWHUXMQHOEBVTLSPBVODJWJGLOPROXOKUANLMILKQQYUMHRWAELMAPWZI");

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
    msg.setTimeStamp(0.5195555935272419);
    msg.setSource(11989U);
    msg.setSourceEntity(68U);
    msg.setDestination(52790U);
    msg.setDestinationEntity(161U);
    msg.type = 117U;
    msg.comm_interface = 61850U;
    msg.model = 24914U;
    msg.list.assign("XHFJGQFOBYCIPEXRXRDFNKHTWPARKCNTIPVYJLTDOAMYZXJZIKZVSY");

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
    msg.setTimeStamp(0.8438184158491915);
    msg.setSource(60627U);
    msg.setSourceEntity(17U);
    msg.setDestination(1507U);
    msg.setDestinationEntity(92U);
    msg.type = 160U;
    msg.req_id = 3459375298U;
    msg.ttl = 28867U;
    msg.code = 71U;
    msg.destination.assign("NGRYQNWWYFSNJLHEBIWZAFDLPGOUCYOMZLTABQUAPXHUQOKGJPOKF");
    msg.source.assign("SQNGKGLBQJAZMFUTIXKBQVQILVUGNHUMWBMJRZNPURNLRNBRAIUFOCJLCWUUIDMTEUJMVAIWLFRZAH");
    msg.acknowledge = 11U;
    msg.status = 110U;
    const signed char tmp_msg_0[] = {126, 53, 39, 105, -48, 63, 44, 82, -47, -37, 5, 116, -113, -36, 92, 37, -103, -19, -31, 9, 124, -53, 121, 5, -23, -102, 31, -22, 123, -40, -95, 32, -121, 102, 68, -120, -19, -11, 124, 102, 122, -99, 15, -6, -43, 60, -120, 20};
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
    msg.setTimeStamp(0.03882031019027776);
    msg.setSource(13610U);
    msg.setSourceEntity(78U);
    msg.setDestination(7010U);
    msg.setDestinationEntity(111U);
    msg.type = 163U;
    msg.req_id = 2428456884U;
    msg.ttl = 46931U;
    msg.code = 248U;
    msg.destination.assign("VEIRJBAJTYEJLMUTMAQMUNBRBLXIZHSWHBWQYECTCZQDCQLGKTYLHCHAKDIOVHJTYVFUSWRPUYWJKCJFNYHDVOMKVNEM");
    msg.source.assign("SIBOQMNYDTNIMHVYQAESWCDZOOGJJGMCUWNESVDNYDYXBQLUNHHWTTSWPYRCWCIHGILYEKLVOSLAONRMJCZONTQFFJCKXVZUEZPFKZFORJHUKKIFUMALAFHTWGBUQBEABRRMJSQJGN");
    msg.acknowledge = 64U;
    msg.status = 24U;
    const signed char tmp_msg_0[] = {-48, -93, -87, 116, -39, -41, 77, -96, 97, -79, -72, -125, 125, -43, -91, 37, -100, -97, -25, 74, 44, 49, 103, 126, 68, -18, 80, -33, 72, 65, 105, 54, -90, 88, 67, -118, -125, 48, -62, -4, 81, -15, -35, -87, -6, 37, 19, 74, -71, -48, -70, 41, 65, 82, -92, -128, 29, -25, 20, -52, 122, 27, -77, 79, -81};
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
    msg.setTimeStamp(0.14469284751630884);
    msg.setSource(29046U);
    msg.setSourceEntity(86U);
    msg.setDestination(41517U);
    msg.setDestinationEntity(5U);
    msg.type = 112U;
    msg.req_id = 326884296U;
    msg.ttl = 6671U;
    msg.code = 45U;
    msg.destination.assign("XXLEUBLCIQIDNMHBNJXFOQSSJOYYOPEFZRCCAWJWOHCMZPICUVGQINWLCFVJSMPZRAQFUNMTPIKVRJUARPUQEMGGCITBHDVBAASGXTVHTFBHUZDYVOBIFGQKDNVJCEKFZXSQLTYYDKQEJNDEASRFTNRVEDQJVOZACXMOAGSBUWPHVIYANRXWZKYETJKLGKUSOLYMHWERMSDLTBWAXGHBYEPZZUHT");
    msg.source.assign("EKUOVRTWFCEJQXQYAWFFILVFGVMCRBAJRAPHKUDQPRNQJMWNOGOXGOSUZMGJBTSMNCNILCZAOIDXEKFCFZTHTOKRCQUIBXCAGVNNEERXNSHVYJSDZSPSYYAGUMDDPIBFEPOKSHQGZTCPWIVBDOWPFZKZTAZHGSYBQTCI");
    msg.acknowledge = 153U;
    msg.status = 129U;
    const signed char tmp_msg_0[] = {-80, 104, -95, 89, -36, -62, -71, -26, 56, -53, -77, 89, -42, 57, -6, 48, 35, -103, 7, 89, -9, 30, -102, -54, -107, -73, 79, 51, -82, -128, -27, 81, -93, -69, -37, 100, 126, 106, -81, 58, -71, -127, 37, -87, 69, 44, 22, -40};
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
    msg.setTimeStamp(0.40944625113184585);
    msg.setSource(29085U);
    msg.setSourceEntity(241U);
    msg.setDestination(41781U);
    msg.setDestinationEntity(114U);
    msg.id = 160U;
    msg.range = 0.36119577895478594;

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
    msg.setTimeStamp(0.2822193887093418);
    msg.setSource(1547U);
    msg.setSourceEntity(195U);
    msg.setDestination(60053U);
    msg.setDestinationEntity(66U);
    msg.id = 130U;
    msg.range = 0.005285613069843986;

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
    msg.setTimeStamp(0.3384094104505475);
    msg.setSource(48445U);
    msg.setSourceEntity(69U);
    msg.setDestination(35685U);
    msg.setDestinationEntity(124U);
    msg.id = 27U;
    msg.range = 0.1413929338604326;

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
    msg.setTimeStamp(0.35172465183808055);
    msg.setSource(31536U);
    msg.setSourceEntity(246U);
    msg.setDestination(21195U);
    msg.setDestinationEntity(252U);
    msg.beacon.assign("TWBWWBVQHLHYKPNFXFVTKKTYWYTQLIVGZZWXSWADAJOVCXJVAJXYLHNSPMYHEOZF");
    msg.lat = 0.3946721084705659;
    msg.lon = 0.16629172491530853;
    msg.depth = 0.16257151050269802;
    msg.query_channel = 152U;
    msg.reply_channel = 57U;
    msg.transponder_delay = 83U;

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
    msg.setTimeStamp(0.2580710979372862);
    msg.setSource(7107U);
    msg.setSourceEntity(52U);
    msg.setDestination(50266U);
    msg.setDestinationEntity(158U);
    msg.beacon.assign("YGSUVZLXAIBMARGZMVAPXFQYQEUWUNYFSOWZCUVOKNIPJDCMAIOSFJKCLNWFYCGPLBMQBNDJISCTHOHKAIAHCRWMHOYLETWQTDKFPHZNTMGVMLRJGEHUXLTXLQHNCMBGXDCABEGZUVVNIXZBTRVDYVDDOIXQZRJGICIDOAOTBKGEFIMNPWAAFRSCLZBJMONSYHXXJNLKJSUGQKEFSBKPUYHRZ");
    msg.lat = 0.048670848445041215;
    msg.lon = 0.9015465287674966;
    msg.depth = 0.7000075777047701;
    msg.query_channel = 203U;
    msg.reply_channel = 240U;
    msg.transponder_delay = 64U;

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
    msg.setTimeStamp(0.6854257625307584);
    msg.setSource(56620U);
    msg.setSourceEntity(183U);
    msg.setDestination(25136U);
    msg.setDestinationEntity(176U);
    msg.beacon.assign("QAAUBONNGRZXQAYGYRKENULZDMHYPICFJTYPPOVHKGQNTUPLVJIBHJFSSWBDTIPCPDMCJV");
    msg.lat = 0.9867333460619432;
    msg.lon = 0.16508130005761357;
    msg.depth = 0.936300389406833;
    msg.query_channel = 143U;
    msg.reply_channel = 95U;
    msg.transponder_delay = 116U;

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
    msg.setTimeStamp(0.4889854365299281);
    msg.setSource(4268U);
    msg.setSourceEntity(53U);
    msg.setDestination(14931U);
    msg.setDestinationEntity(128U);
    msg.op = 68U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FVANJGSVFCEAQWDJCTFZWTLIDPTNDOUVMGQQNBPZYWFMVOWWFIGJIVQYYLKKHWZAUGBFSMRUCEXMLPPPFACORETICNOGMYEBXFEYJT");
    tmp_msg_0.lat = 0.5136755204241631;
    tmp_msg_0.lon = 0.6236938636245698;
    tmp_msg_0.depth = 0.10698227794967108;
    tmp_msg_0.query_channel = 37U;
    tmp_msg_0.reply_channel = 138U;
    tmp_msg_0.transponder_delay = 18U;
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
    msg.setTimeStamp(0.8888514627764674);
    msg.setSource(61638U);
    msg.setSourceEntity(252U);
    msg.setDestination(2065U);
    msg.setDestinationEntity(151U);
    msg.op = 145U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TVPHRKUKIQSDDSNGMCNGOAGQVJQRYPAIAHT");
    tmp_msg_0.lat = 0.17734063023490387;
    tmp_msg_0.lon = 0.30418722548202226;
    tmp_msg_0.depth = 0.9232598261505909;
    tmp_msg_0.query_channel = 46U;
    tmp_msg_0.reply_channel = 223U;
    tmp_msg_0.transponder_delay = 4U;
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
    msg.setTimeStamp(0.9134458993142546);
    msg.setSource(41588U);
    msg.setSourceEntity(14U);
    msg.setDestination(26712U);
    msg.setDestinationEntity(75U);
    msg.op = 163U;

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
    msg.setTimeStamp(0.030257008990711154);
    msg.setSource(58735U);
    msg.setSourceEntity(122U);
    msg.setDestination(48568U);
    msg.setDestinationEntity(52U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GCRJLVTZUTKCROLYPELDCYWFUPHFB");
    tmp_msg_0.lat = 0.8070378933074817;
    tmp_msg_0.lon = 0.5440615312602203;
    tmp_msg_0.depth = 0.6245987968232538;
    tmp_msg_0.query_channel = 222U;
    tmp_msg_0.reply_channel = 19U;
    tmp_msg_0.transponder_delay = 146U;
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
    msg.setTimeStamp(0.3077833863455852);
    msg.setSource(55248U);
    msg.setSourceEntity(211U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(93U);
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 81U;
    tmp_msg_0.numsamples = 116U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 30546U;
    tmp_tmp_msg_0_0.avg = 0.02079024925748907;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.39484826290699826;
    tmp_msg_0.lon = 0.4573297123784962;
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
    msg.setTimeStamp(0.7701630907568994);
    msg.setSource(44682U);
    msg.setSourceEntity(109U);
    msg.setDestination(52054U);
    msg.setDestinationEntity(119U);
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 143U;
    tmp_msg_0.speed = 55498U;
    const signed char tmp_tmp_msg_0_0[] = {31, 5, -68, 29, -79, -52, -19, -118, -60, 112, 38, 28, -33};
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.9554719980379922);
    msg.setSource(34344U);
    msg.setSourceEntity(72U);
    msg.setDestination(18730U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.8079542157696499;
    msg.lon = 0.3019948145782926;
    msg.depth = 0.13406691691571282;
    msg.sentence.assign("WNUAKVEGMMBDXKUXAOPGLOJDHQQWWPDUEAPDJHRSUROUUQHVRUAYIWZZZBVPOQGLGCNOKXWZNLFLCFOMSQPMXYGEZBIJTZBSZSOSQNJIKNBVRCHFEWMPFEBRITTYNLVZZOXJIETWESSAQHFIDNNEKLLCDXHUCFQITFMBSRAWTJDIAOQADXPRKO");
    msg.txtime = 0.04732483095915441;
    msg.modem_type.assign("FWPHDMWVKUNBAXSWOESCYACWNPVNZAEFIURNPJORPXHVCMTSULTDPILUMSMJPORFKIXKHDFZQDJSWTZEIKPX");
    msg.sys_src.assign("OXOTLKNPRHZWIYPMEAVVNQZWXRJSYPIUAWBTNNOEGQHPWLCUPKLCEEQQLVOIBLTZNRQ");
    msg.seq = 4928U;
    msg.sys_dst.assign("GRBOTRSWRXFUVTXEJWNITMWDKLOXCMBSXPSTPJENTHEQCHYZVFFMDDAVNGOUJSKSAGYMFIJEZNBBBYDIRAJNNNIOZTGBHSHXOJQLZF");
    msg.flags = 128U;
    const signed char tmp_msg_0[] = {100, -46, -3, 0, 39, -80, -34, -89, 42, -45, -21, -70, -104, 77, 15, 68, -72, 68, 32, -39, 27, 55, -31, 11, 110, 100, -61, -32, -98, 68, 76, -98, 111, 119, 121, 49, -112, -53, 44, 25, -34, -56, -57, 17, -43, 106, -93, 77, -87, 22, 76, 84, 120, 64, -29, 60, -54, 99, -87, 46, 78, 78, 5, -30, 55, 113, -33, 119, -49, 17, 50, -119, -47, -30, -42, 107, -111, 117, 16, 39, 97, 87, 39, 60, -90, -123, -104, -90, 35, 119, -30, 13, 63, 68, 115, 116, -113, 122, -35, -88, -120, 32, -85, 44, 64, 9, 68, -39, 65, -49, -127, -128, -44, 22, 37, -17, -126, -117, 18, -73, 114, -76, 79, -23, -17, -58, -100, -14, -9, 63, 62, 73, 28, -29, 75, -13, -110, -83, -113, 97, 81, 57, 9, 124, -73, -113, -24, 91, 15, -61, -41, 64, 10, -67, -21, -2, -117, 0, -25, -5, 72, 85, -30, 95, -85, 12, -21, -26, 59, -24, 81, -33, 95, -117, -14, 28, 51, -70, -38, 51, -127, -44, -64, 25, 117, -41, -8, -18, 119, -43, 43, 69, -125, 23, 113, 88, 118, 5, -69, -78, 69, 66, 69, -61, -75, 106, -14, -91, 108, -79, -97, -88};
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
    msg.setTimeStamp(0.13651110877780248);
    msg.setSource(43167U);
    msg.setSourceEntity(151U);
    msg.setDestination(14192U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.4080304071756571;
    msg.lon = 0.1684466380664309;
    msg.depth = 0.16351247806495262;
    msg.sentence.assign("RWVZJEGESSEQOHEYRARDCIOYCNYIEXQPKNPKFEMISTIEJRLNJPDOQLYXVGSRHPHQYOXAZGVCJQNHEVUFRBIXGMDPAWFPMVVBKCTIRSTTXWBXKOKBLODBJJZZDSFGOLMWLSFDPAUALCKPHEHUTJQCKVWTAHXHDGQUCMNBFUNCGADUGTZRQFEGLWNZZZRSBIJFOMOCIYWVKLBPKIMKZSDVJYCHQTWIMTWLXUNYUH");
    msg.txtime = 0.30026141334424383;
    msg.modem_type.assign("KJWNPPMSHURIEJRGZYQQHWSYCJEWWTQUSZHMNPJGZJPDZKELUZYV");
    msg.sys_src.assign("GRWSAUHASGQSTUFNWHFEWRCXSYTZMHITFVFGKZRLIFMDOAUEJHLALNFWKRSWYOSZX");
    msg.seq = 32468U;
    msg.sys_dst.assign("MSMZNEBWPLLYHJDPMHIUNSRTXJJXAAHQWJVPXFMYYUZIVHLTVWFDBTXWQTQFMPEDKUUCKROHNUY");
    msg.flags = 45U;
    const signed char tmp_msg_0[] = {41, -70, 9, -56, -91, -91, -52, -10, -56, -125, -34, -105, 6, 6, -99, -79, 79, -56, -96, 72, -80, -92, -98, 26, 50, -75, -41, -121, 88, 111, -104, -55, 91, -6, 117, 24, 126, 62, 86, -69, -76, -69, 74, -10, -80, -53, -21, 51, 59, 65, 74, 106, 55, -84, -44, 124, 33, -41, 52, 77, 111, -44, -51, -12, -94, -93, 48, 77, 71, -103, 77, 22, 39, -54, -20, -30, -35, 39, -52, 106, -101, -50, -81, -68, 120, 39, 69, 44, -114, -48, -80, -30, 12, -127, -67, -56, 82, -95, 108, -14, -117, 96, 102, 64, 9, 32, -72, -85, 25, 56, 62, 121, -112, 15, -59, -18, -57, -58, -51, 36, 104, -123, 122, -126, -5, -41, 28, -70, -79, -105, -92, 72, -45, -117, -56, 65, 91, -76, 23, 3, -34, 64, 19, 58, -37, -108, -42, 53, 107, -1, -108, -113, -4, -22, 99, -105, 82, -104, -4, -20, -83, -49, 9, -75, 46, -94, -101, 46, 74, 90, -114, -121, -100, 1, 29, -31, -118, -18, 31, 104, 80, -75, 33, 18, 102, -96, 123, 45, -78, -70, -65, 117, 50, -67, -76, 1, 105, 111, 10, 125, -109, 74, -87, -76, 13};
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
    msg.setTimeStamp(0.39515708772663494);
    msg.setSource(3901U);
    msg.setSourceEntity(31U);
    msg.setDestination(33324U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.6555284048328862;
    msg.lon = 0.6630337173154103;
    msg.depth = 0.8322498058030334;
    msg.sentence.assign("RFTHBAMXZVVEAYSGBUY");
    msg.txtime = 0.5628563525292256;
    msg.modem_type.assign("KWMJDLOHPOFLWPRHATJPHRXVFBTKFXRNPKVXTTCYJUHQAYDGJFSKEDYXUTXKIGXEWNOQEBRBJGQWFCHIWYZLUGNMMBSNJAZEDPENTBSASZTGAUDHZBHIBLRCUNQYHSWXRFAUWZLVPNLIDLPINKSCEORIQGAZIPMSGZTBAFNMDXMQJCHXCCMZWESZDBSCRVEWIUQCYBLUPVTOMOYQWMCOIOLKVGXFUOVDHVVQKLGVNRO");
    msg.sys_src.assign("SBHKYPYITBWUONCHWCKEAFGATMTRKCGAWBAELDEQRBMGFNCAJLJKTLXRDOXKEIWPUYQNHWLVHBGJYSLGDRJGFXDYCJICEOQZXSAHVRLMQTUVNMAPPOSZPXTNYROKXQDLLDQVIVCZOVWAFSMWKDBMNMIFNJNZRFRHHJFPCSBTXWQISHAROSUTGECZGLNEWPERTUVBS");
    msg.seq = 19586U;
    msg.sys_dst.assign("VZBKYPYXWROOPBKHFWLJGCTNOBSNBDAKQRQRTOVMFPWZDZATEDYCSRTCHTXJWGXGAZFAPPNQQMSRJXRTKILTDNJEIJOULLLQQEAEWUKYGGFIFPNSKJWXMVZSZHXIWDOBFAXPSSGALLGDCKMPXBBNDKHMQHSHCSHVDJURAIEOGFNUOUDBVTHICURUFUJCWZEKGHRYLJQEHTVVIMDNULYEOZWYGQWEMLCPREM");
    msg.flags = 153U;
    const signed char tmp_msg_0[] = {-117, -1, 13, 36, -125, -26, 87, -119, -11, -39, 43, -34, 117, 63, 26, 95, -3, -44, 116, -94, -105, 121, 93, 98, -111, 5, 111, -44, 49, 9, 33, 15, -89, -32, 65, 109, -10, 71, 101, -124, 72, -47, -39, 19, 59, 117, -126, -99, 119, 126, -19, 78, 100, 83, 95, 48, -28, -80, -69, -34, -83, -20, 73, 58, -87, 121, 44, 73, 29, 111, -84, 52, -36, -28, 121, 3, -77, -28, 104, -37, 26, -70, -71, 76, -17, -44, -53, 100, 76, -119, -24, -59, -62, -89, 25, -36, 3, 68, -93, 41, 18, 80, -81, -23, -8, -78, 82, 98, -79, -93, -79, 50, 112, -52, 17, -128, -72, -94, 2, -40, 106, -53, -21, 15, -64, 7, 46, 94, 47, -50, 1, 49, 85, 53, 14, -123, 29, 11, -114, 37, 41, -41, -128, -29, 59, -76, 42, 88, 97, -53, -117, -97, -63, 8, 65, 103, 34, 110, 53, 67, -74, 90, -41, -86, -95, -23, -28, -49, 16, -13, -113, 54, 6, -15, 40, -85, -68, -83, 44, 83, -29, -113, 98, -91, 99, 3, -85, 80, -79, -47, -100, -120, -13, -89, -98, -11, -86, -84, 78, 68, -10, -22, 49, -106, 97, 4, 25, -73, 67, 72, -38};
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
    msg.setTimeStamp(0.7115909916390666);
    msg.setSource(45323U);
    msg.setSourceEntity(204U);
    msg.setDestination(18482U);
    msg.setDestinationEntity(83U);
    msg.op = 24U;
    msg.system.assign("JAWZGSPIMFNHNFTTSAZ");
    msg.range = 0.7225547384729297;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.7474493587006877;
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
    msg.setTimeStamp(0.5557441581294216);
    msg.setSource(24645U);
    msg.setSourceEntity(244U);
    msg.setDestination(60217U);
    msg.setDestinationEntity(116U);
    msg.op = 142U;
    msg.system.assign("CGMPEYMXTBPIDIMECTUCCXMPDLAXAAHFPKAOOBUTZJHSQEAUQBUUZDAEZMYVSQJWWPIYNOLACJNOHIPUVRLWXLPIFBJGTFRSKCDYNJHDBZQDBUHRRHMIRBMVJCTUKLJOVLGKRAFWOZVYXLCQMUFVKGNCIDMYDZXKZFWTQOSSOWVEQHESGQVRXSXTINGIUEELBYZXBGPPATONNPSVDNEMKGRLKRX");
    msg.range = 0.40153255451357417;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 194U;
    tmp_msg_0.eta = 10236U;
    tmp_msg_0.info.assign("EJJNKDXGSYDZKMWAGUAQRARSLITCLPORLJFBCAWYVJLFZNITTZVNTTZXCPSHGUPUUNZMEOKEDSJS");
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
    msg.setTimeStamp(0.7009284471512014);
    msg.setSource(43171U);
    msg.setSourceEntity(95U);
    msg.setDestination(55376U);
    msg.setDestinationEntity(41U);
    msg.op = 169U;
    msg.system.assign("AHCXLBFPTAMCVEWLHJTXDFFSHIETEWHYISIPOXDIMQBJTUWRRBWMYNVQOTORSUYGPOFMJVLKZUCTGUTUKPMJRRKMNTIFXXQYGJLSWGQDWEAUDHJRUHQSNBZGFQUANCDEDQUYJBAYZCVBVBZRQNHJVKFSVCAHKDAXI");
    msg.range = 0.9268653251669255;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5073877960297681;
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
    msg.setTimeStamp(0.8113014600650897);
    msg.setSource(709U);
    msg.setSourceEntity(253U);
    msg.setDestination(45735U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.9392023816830207);
    msg.setSource(46561U);
    msg.setSourceEntity(175U);
    msg.setDestination(2515U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.1845011504358145);
    msg.setSource(21068U);
    msg.setSourceEntity(2U);
    msg.setDestination(11005U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.05069585061314208);
    msg.setSource(64521U);
    msg.setSourceEntity(245U);
    msg.setDestination(64108U);
    msg.setDestinationEntity(237U);
    msg.list.assign("SNLVNLQWOJERGDNTAAQBCTLYLXMSCICTKBRKECNJUFWGUCDETNDIMXUQIUOBOMGWZHOXJWHTQHDNWIQWLUSJEVFPYCTVIQAAPPQZGKBOKJHFAJOYHRBHTAFBGUIPGYIOXXEFZQVXNFYRFLXAPKSCRZGOZUDSYRTDQKWRMACCCHJTZMMIZSDPIYRYPVXVDLJEBSDUSJLPZEVKVAZAWPXBRKDTNXFBEGMOLPNSHOYMFHIKEQJRWKFEHMGBU");

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
    msg.setTimeStamp(0.16590586669287477);
    msg.setSource(50243U);
    msg.setSourceEntity(106U);
    msg.setDestination(24768U);
    msg.setDestinationEntity(144U);
    msg.list.assign("USWUFIFLHIRLMYISAUMWWOWSKIZTQXJJQOEXGSRJFBSBERNK");

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
    msg.setTimeStamp(0.3599053456592026);
    msg.setSource(23255U);
    msg.setSourceEntity(1U);
    msg.setDestination(46465U);
    msg.setDestinationEntity(58U);
    msg.list.assign("HEPZQTWPMKMBZRTOIWBEUCMVESZLEYAPKYKROGWUINSPETWZLCYNXHLHFJARVXECNTKJVFVIFRAOCMEABXRBJZSJUBQSFOYSEZXDYIDRQUWCLDGSKWTFLEIZYDROIYNUKNMZTQQBQOVKFAPVUDCCMPASIBVNMOICUMQXWOPHJSVUJGHAWLPIXJNZZHFTQKDKQGIMERGFBHLYTYMJUSSXKAQHGOPWPCGXVDTFTFGHLDJ");

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
    msg.setTimeStamp(0.254660316596264);
    msg.setSource(64410U);
    msg.setSourceEntity(246U);
    msg.setDestination(40485U);
    msg.setDestinationEntity(0U);
    msg.peer.assign("KQRLFSKVHZYUDHHNWKWRHOVLANCENUPTEQZGDUNDJRJXMICCXPHGFWHZXEYPOOBFBLQAWWITMAXTJFQQVLRFPAJIQVMRVBDAKRIUNGANXZSQCMUFAMLHJJGPZJ");
    msg.rssi = 0.6189889226503626;
    msg.integrity = 40483U;

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
    msg.setTimeStamp(0.6548155831443672);
    msg.setSource(25124U);
    msg.setSourceEntity(227U);
    msg.setDestination(47126U);
    msg.setDestinationEntity(23U);
    msg.peer.assign("YGNCEDTNKFWUTUOJDHEKDDROSGAVYCIMOSJWKBKTMJKVQAWBHGIBHAPEMTKLYDKXLGJEQJRJMOBVEROUISRFUJFVZCOAPZBGLSAQFROUQRQDXDSFEUFPYDQSMFHZLMDBGNIYPHHYXBLTBNUEPZBIYZUVJTQZQFXIRQGQBRCCXYGPKLTVZHDNYCSIKVUILXTXWFPJHXHPMCLSWAC");
    msg.rssi = 0.9608790831466594;
    msg.integrity = 38076U;

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
    msg.setTimeStamp(0.38040326019412163);
    msg.setSource(19173U);
    msg.setSourceEntity(243U);
    msg.setDestination(53502U);
    msg.setDestinationEntity(88U);
    msg.peer.assign("MZTQVIEHAPK");
    msg.rssi = 0.31016438901209453;
    msg.integrity = 3012U;

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
    msg.setTimeStamp(0.43791490736409744);
    msg.setSource(55313U);
    msg.setSourceEntity(106U);
    msg.setDestination(25537U);
    msg.setDestinationEntity(55U);
    msg.req_id = 4542U;
    msg.destination.assign("OOJRHICCNPHQTVVYXRWALEECZZGJPUYTINEDHJDLKHIMJBSZEOYPVJTRQYHOESYCUCKNYBENWSGWNEOXRCWFPPHLULGJZPMAOMBGFWFVFGTAHGSVXDMZSAMNLKQWDHQUP");
    msg.timeout = 0.5374099345321663;
    msg.range = 0.9861068022650396;
    msg.type = 25U;
    IMC::GpioState tmp_msg_0;
    tmp_msg_0.name.assign("AAQNDQZIXIMRTZOSBLWUXTRAADKENYCGIHGLVXWJAKHJWUPOBCVESFLXPRPCYRRLZFBLQAYDOLBQURDVBTFYSUDICKTQVXIZLTJRZLSHMWNGBMSZTMSPYVQEIVYEVJBHAPTCFDNPPFKANZABMBDHCWVLIMQNKOHGFWYGOEMGNMSWODFKEBMNXXECTFOUXPNKPNIFJCYHJCIUUGUQRMUJPCGQUWXEKQISXKOERJHZOTOJAFWZLEGGKYVHVDRD");
    tmp_msg_0.value = 198U;
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
    msg.setTimeStamp(0.005646944342028504);
    msg.setSource(19099U);
    msg.setSourceEntity(38U);
    msg.setDestination(820U);
    msg.setDestinationEntity(41U);
    msg.req_id = 59087U;
    msg.destination.assign("QITKYMXUDLNFSGJCPXOJWARYRBUXPMHBPLIEKQHPQXCJOR");
    msg.timeout = 0.5146150317063857;
    msg.range = 0.2923648273519699;
    msg.type = 124U;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("FNPBUNUHFWSBWCONKWNTRVJXZUCTCGAKGDQCARXFXPDEPYAXDGDNDJFDZQMIYHNEFVFVIYHOWLVNTFEHNBEWGIVLWMUUPCPTPXZGOOVLVRGOHMUMPBKOXLQAMSBRJACBPTPGYVYSULSTNIJHYVKYEELJMXABWWSXUCAOSBTMGOHZCI");
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
    msg.setTimeStamp(0.847109283337696);
    msg.setSource(36956U);
    msg.setSourceEntity(23U);
    msg.setDestination(8964U);
    msg.setDestinationEntity(80U);
    msg.req_id = 423U;
    msg.destination.assign("GQAXYCECTDTLVAMOELVPNUZOPBUNEUCBRMTWXPJKLHRKUBTCEAAFSRLCOQOKTISKPSLYMVSUOJPDLZNGREYTWIENKXIZYLFDHMKDSCCRZNXGVOJNGMMCZHVOBECRWBYIULDBWWZZEBXJQNXVDYITDXIRWQSHXSNIISAQPHOFCKUHUDHHINTQOJDPGKQFYHYJRGJGRM");
    msg.timeout = 0.910906451023069;
    msg.range = 0.11661752818901816;
    msg.type = 232U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 63631U;
    tmp_msg_0.lat = 0.870996663043919;
    tmp_msg_0.lon = 0.9240329197647763;
    tmp_msg_0.z = 0.47469397135006064;
    tmp_msg_0.z_units = 147U;
    tmp_msg_0.speed = 0.05093425034882493;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.duration = 12112U;
    tmp_msg_0.radius = 0.773833853734259;
    tmp_msg_0.flags = 33U;
    tmp_msg_0.custom.assign("WKOMXDJQKDYUPXEZPEHWTBAMCQTTXVQUSEXVKCRTIAVVBFIGRCMQDUBBIJROHIBDJEGBQGJTHOGHYAOMGLLCDDFZMQWHPNOKBHSLIEOBVDTNAZCSHSUNMCNUXAICMGSYWXMJNGCHJZYHFGFDCIYQERZIAQYJXJZRPFERFHOLZUCLNDIMAWSPRFUKB");
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
    msg.setTimeStamp(0.5600237557880807);
    msg.setSource(51348U);
    msg.setSourceEntity(16U);
    msg.setDestination(49258U);
    msg.setDestinationEntity(77U);
    msg.req_id = 54565U;
    msg.type = 127U;
    msg.status = 182U;
    msg.info.assign("VUVZULTCGRRPGERMMJTLDQTXWWGOJCKFFVDAUYPMHUXDYKOUQTAWBWOOAGXGNLYGCLNFXKAAAEQCLJYDXMMLXF");
    msg.range = 0.3581403659195107;

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
    msg.setTimeStamp(0.38249022607272154);
    msg.setSource(30724U);
    msg.setSourceEntity(181U);
    msg.setDestination(22915U);
    msg.setDestinationEntity(85U);
    msg.req_id = 22158U;
    msg.type = 136U;
    msg.status = 1U;
    msg.info.assign("OEXQKMIGDEXSLSBOZICSSPWQIMPGPTYFFCQGGATVUYFYTBEVHKMKZKHFPOOAIQJVPLPFCJBIKQMPUZWCWZDXEJJFAONUSOXJWDLBXDKYXEHJMDBDHRYNRLG");
    msg.range = 0.26733553875702243;

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
    msg.setTimeStamp(0.17876756392955273);
    msg.setSource(45753U);
    msg.setSourceEntity(117U);
    msg.setDestination(60324U);
    msg.setDestinationEntity(137U);
    msg.req_id = 23292U;
    msg.type = 214U;
    msg.status = 239U;
    msg.info.assign("IGHXBDXBCOVUCQPEL");
    msg.range = 0.5706089804788812;

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
    msg.setTimeStamp(0.413194768053171);
    msg.setSource(58397U);
    msg.setSourceEntity(134U);
    msg.setDestination(40262U);
    msg.setDestinationEntity(188U);
    msg.system.assign("PPLJWRMKLRJJWNIJFZVVKYPMFXXEDJIOHYBOBQOZWQSHFLICBDEPIKFOXHOYYTDYPFCLURQZQIHMHRTLZYAOUSXZGKMQSXUJECJBFDUSEASAMMWWFZBOLAETSSMHCRUKCTYEVIGKTWCXRQJHBZZVGPCFWTPGOSIEPPCPVWNYHGOQAQDH");
    msg.op = 226U;

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
    msg.setTimeStamp(0.895204872383847);
    msg.setSource(34740U);
    msg.setSourceEntity(137U);
    msg.setDestination(56762U);
    msg.setDestinationEntity(59U);
    msg.system.assign("ARSIPIAKDISAJYURQDJBZXRKWINFWIFRUFQDJSEHKTFRTPBXZOVEFBQZJXVBTJNTHVMLYZKRRXGOVTUVDAXEOOCQUJLYZICWNEOLYHBHBXXDEZTPGHFGXKYYLCPNNABGHCDWMVZWDSPIUKVAWEUEVPZNXWCQIALFZUEKPGGJLBMOHRAPCAOUQCJXFSEUILNTK");
    msg.op = 22U;

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
    msg.setTimeStamp(0.09275026994876745);
    msg.setSource(19927U);
    msg.setSourceEntity(117U);
    msg.setDestination(61399U);
    msg.setDestinationEntity(239U);
    msg.system.assign("GLHWGIUBNQYZRVTPVLWWUDMSNIDMGPCTUQPTLBQVSNAYNZKBPMBPYBOSFIEYFCBBKZDLFARCBEZIKQKCCPJEYJVUCDOPJOEQADFGKLHGFJSVKXIOGYDXKXNMGATAMLDGIHOHGNIELGWRSYRJQXACEHVHDWVNFCPJVCDMHYOHMQQTZKJLJHRYLXWCZFZEBORSJFTUSMAUOSWS");
    msg.op = 171U;

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
    msg.setTimeStamp(0.1131133037367521);
    msg.setSource(54615U);
    msg.setSourceEntity(123U);
    msg.setDestination(61651U);
    msg.setDestinationEntity(145U);
    msg.value = 30985;

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
    msg.setTimeStamp(0.7161197988207482);
    msg.setSource(38527U);
    msg.setSourceEntity(180U);
    msg.setDestination(54983U);
    msg.setDestinationEntity(211U);
    msg.value = -15078;

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
    msg.setTimeStamp(0.0851439954227079);
    msg.setSource(26182U);
    msg.setSourceEntity(248U);
    msg.setDestination(5877U);
    msg.setDestinationEntity(137U);
    msg.value = -13389;

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
    msg.setTimeStamp(0.8263883433230658);
    msg.setSource(43672U);
    msg.setSourceEntity(100U);
    msg.setDestination(10274U);
    msg.setDestinationEntity(42U);
    msg.value = 0.17452092427680466;

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
    msg.setTimeStamp(0.526403725522249);
    msg.setSource(44684U);
    msg.setSourceEntity(121U);
    msg.setDestination(47932U);
    msg.setDestinationEntity(165U);
    msg.value = 0.3825042455470695;

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
    msg.setTimeStamp(0.5743904586389422);
    msg.setSource(24594U);
    msg.setSourceEntity(209U);
    msg.setDestination(42093U);
    msg.setDestinationEntity(231U);
    msg.value = 0.11001439609919828;

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
    msg.setTimeStamp(0.4854491911899238);
    msg.setSource(43941U);
    msg.setSourceEntity(194U);
    msg.setDestination(55768U);
    msg.setDestinationEntity(173U);
    msg.value = 0.18911867103354763;

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
    msg.setTimeStamp(0.5402822593987324);
    msg.setSource(40642U);
    msg.setSourceEntity(119U);
    msg.setDestination(53817U);
    msg.setDestinationEntity(111U);
    msg.value = 0.6975763429727907;

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
    msg.setTimeStamp(0.8579179155644352);
    msg.setSource(6671U);
    msg.setSourceEntity(12U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(114U);
    msg.value = 0.8424327901747614;

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
    msg.setTimeStamp(0.056127946308853094);
    msg.setSource(33163U);
    msg.setSourceEntity(144U);
    msg.setDestination(26523U);
    msg.setDestinationEntity(105U);
    msg.validity = 31420U;
    msg.type = 82U;
    msg.utc_year = 17670U;
    msg.utc_month = 135U;
    msg.utc_day = 217U;
    msg.utc_time = 0.20103608115942895;
    msg.lat = 0.7383991808453996;
    msg.lon = 0.6626457354201475;
    msg.height = 0.48509542056473776;
    msg.satellites = 201U;
    msg.cog = 0.5270544358721766;
    msg.sog = 0.12126507309983114;
    msg.hdop = 0.06952624019898002;
    msg.vdop = 0.01730735792700422;
    msg.hacc = 0.9736025016221554;
    msg.vacc = 0.0144498525990856;

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
    msg.setTimeStamp(0.7051294359454776);
    msg.setSource(16390U);
    msg.setSourceEntity(156U);
    msg.setDestination(35121U);
    msg.setDestinationEntity(115U);
    msg.validity = 24938U;
    msg.type = 85U;
    msg.utc_year = 10667U;
    msg.utc_month = 197U;
    msg.utc_day = 44U;
    msg.utc_time = 0.47000766912688063;
    msg.lat = 0.6137218077720711;
    msg.lon = 0.3807481475474973;
    msg.height = 0.5795469844530159;
    msg.satellites = 5U;
    msg.cog = 0.6286714804371675;
    msg.sog = 0.15889974696200337;
    msg.hdop = 0.5860916832505183;
    msg.vdop = 0.20777319449758624;
    msg.hacc = 0.868261919255522;
    msg.vacc = 0.8797078150037858;

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
    msg.setTimeStamp(0.7984719733352301);
    msg.setSource(5350U);
    msg.setSourceEntity(193U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(135U);
    msg.validity = 875U;
    msg.type = 47U;
    msg.utc_year = 16725U;
    msg.utc_month = 170U;
    msg.utc_day = 97U;
    msg.utc_time = 0.576572610392391;
    msg.lat = 0.012090390224784642;
    msg.lon = 0.2456550102599928;
    msg.height = 0.20599221918455846;
    msg.satellites = 98U;
    msg.cog = 0.6756893883358809;
    msg.sog = 0.5166351993340018;
    msg.hdop = 0.8208907792993598;
    msg.vdop = 0.39506591121670287;
    msg.hacc = 0.30473354569810174;
    msg.vacc = 0.0470516127137538;

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
    msg.setTimeStamp(0.5760609774202874);
    msg.setSource(55835U);
    msg.setSourceEntity(63U);
    msg.setDestination(8071U);
    msg.setDestinationEntity(211U);
    msg.time = 0.9802575453898338;
    msg.phi = 0.3740617353311;
    msg.theta = 0.9766734515069425;
    msg.psi = 0.8408709541373836;
    msg.psi_magnetic = 0.9142552504198889;

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
    msg.setTimeStamp(0.8108221858440154);
    msg.setSource(48658U);
    msg.setSourceEntity(243U);
    msg.setDestination(33536U);
    msg.setDestinationEntity(189U);
    msg.time = 0.7293632986150903;
    msg.phi = 0.8084213088200535;
    msg.theta = 0.19049263260396554;
    msg.psi = 0.24118796350861815;
    msg.psi_magnetic = 0.17810751512067957;

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
    msg.setTimeStamp(0.9484233065689821);
    msg.setSource(47099U);
    msg.setSourceEntity(200U);
    msg.setDestination(62727U);
    msg.setDestinationEntity(87U);
    msg.time = 0.1016439483058379;
    msg.phi = 0.95458102781193;
    msg.theta = 0.8751822076546069;
    msg.psi = 0.29658801972480964;
    msg.psi_magnetic = 0.7878451719862265;

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
    msg.setTimeStamp(0.8718071012371723);
    msg.setSource(37911U);
    msg.setSourceEntity(65U);
    msg.setDestination(51647U);
    msg.setDestinationEntity(146U);
    msg.time = 0.900235560144472;
    msg.x = 0.40525198939810214;
    msg.y = 0.7640402918139111;
    msg.z = 0.18224974629193247;
    msg.timestep = 0.24656901540066334;

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
    msg.setTimeStamp(0.27149414190354804);
    msg.setSource(34267U);
    msg.setSourceEntity(162U);
    msg.setDestination(57627U);
    msg.setDestinationEntity(136U);
    msg.time = 0.3062586343253303;
    msg.x = 0.5103815429621661;
    msg.y = 0.9220277361441104;
    msg.z = 0.758799615006391;
    msg.timestep = 0.495405061107722;

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
    msg.setTimeStamp(0.7826401474936717);
    msg.setSource(3557U);
    msg.setSourceEntity(212U);
    msg.setDestination(52890U);
    msg.setDestinationEntity(78U);
    msg.time = 0.7920412474329155;
    msg.x = 0.2846388866367827;
    msg.y = 0.2561941176296937;
    msg.z = 0.6737594501303587;
    msg.timestep = 0.5231315666242348;

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
    msg.setTimeStamp(0.3476907621255936);
    msg.setSource(18017U);
    msg.setSourceEntity(91U);
    msg.setDestination(1981U);
    msg.setDestinationEntity(149U);
    msg.time = 0.6239787053429608;
    msg.x = 0.20419792017621374;
    msg.y = 0.7001083932177108;
    msg.z = 0.7957883848357885;

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
    msg.setTimeStamp(0.7908635670202748);
    msg.setSource(24066U);
    msg.setSourceEntity(86U);
    msg.setDestination(30669U);
    msg.setDestinationEntity(84U);
    msg.time = 0.7283439083715455;
    msg.x = 0.5346819142711127;
    msg.y = 0.21382426415305777;
    msg.z = 0.32433286213728485;

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
    msg.setTimeStamp(0.7502981794638544);
    msg.setSource(25897U);
    msg.setSourceEntity(101U);
    msg.setDestination(2360U);
    msg.setDestinationEntity(140U);
    msg.time = 0.02081947051108546;
    msg.x = 0.006731735463015753;
    msg.y = 0.5570135182990713;
    msg.z = 0.8111427397897203;

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
    msg.setTimeStamp(0.6910998655864684);
    msg.setSource(7851U);
    msg.setSourceEntity(7U);
    msg.setDestination(873U);
    msg.setDestinationEntity(237U);
    msg.time = 0.9001256316034988;
    msg.x = 0.753323419694584;
    msg.y = 0.04954387551593897;
    msg.z = 0.11537417519813209;

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
    msg.setTimeStamp(0.39335822396665965);
    msg.setSource(61021U);
    msg.setSourceEntity(78U);
    msg.setDestination(36522U);
    msg.setDestinationEntity(111U);
    msg.time = 0.24730120388181398;
    msg.x = 0.42001865912837943;
    msg.y = 0.6754725804368332;
    msg.z = 0.3197387108380949;

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
    msg.setTimeStamp(0.8351337832498166);
    msg.setSource(61223U);
    msg.setSourceEntity(195U);
    msg.setDestination(21771U);
    msg.setDestinationEntity(1U);
    msg.time = 0.8153265295124951;
    msg.x = 0.22289910959172377;
    msg.y = 0.3768403965270365;
    msg.z = 0.2870237725784599;

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
    msg.setTimeStamp(0.5396483842912511);
    msg.setSource(3523U);
    msg.setSourceEntity(194U);
    msg.setDestination(13460U);
    msg.setDestinationEntity(172U);
    msg.time = 0.5993245343938148;
    msg.x = 0.30867024296952095;
    msg.y = 0.5575419592956089;
    msg.z = 0.5575404288880851;

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
    msg.setTimeStamp(0.9226189969500674);
    msg.setSource(39611U);
    msg.setSourceEntity(101U);
    msg.setDestination(35159U);
    msg.setDestinationEntity(208U);
    msg.time = 0.07514474266995452;
    msg.x = 0.8978495913064264;
    msg.y = 0.324366922877381;
    msg.z = 0.47195486960504773;

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
    msg.setTimeStamp(0.4961372399717905);
    msg.setSource(64378U);
    msg.setSourceEntity(101U);
    msg.setDestination(64678U);
    msg.setDestinationEntity(172U);
    msg.time = 0.8961821455392235;
    msg.x = 0.580787940439342;
    msg.y = 0.4841557424003622;
    msg.z = 0.31858845801235036;

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
    msg.setTimeStamp(0.0966588065108771);
    msg.setSource(35083U);
    msg.setSourceEntity(163U);
    msg.setDestination(38919U);
    msg.setDestinationEntity(104U);
    msg.validity = 18U;
    msg.x = 0.4324233749927576;
    msg.y = 0.887506868243263;
    msg.z = 0.3747523243717117;

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
    msg.setTimeStamp(0.797113826130046);
    msg.setSource(55862U);
    msg.setSourceEntity(80U);
    msg.setDestination(22631U);
    msg.setDestinationEntity(201U);
    msg.validity = 183U;
    msg.x = 0.8024815930585266;
    msg.y = 0.48867660063762564;
    msg.z = 0.21394260987192149;

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
    msg.setTimeStamp(0.0984011938383973);
    msg.setSource(59363U);
    msg.setSourceEntity(238U);
    msg.setDestination(33023U);
    msg.setDestinationEntity(35U);
    msg.validity = 55U;
    msg.x = 0.3690389908953631;
    msg.y = 0.8640543180015069;
    msg.z = 0.46749745994764547;

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
    msg.setTimeStamp(0.5916110914207167);
    msg.setSource(55865U);
    msg.setSourceEntity(153U);
    msg.setDestination(56583U);
    msg.setDestinationEntity(148U);
    msg.validity = 243U;
    msg.x = 0.5628828310192012;
    msg.y = 0.10987581894189513;
    msg.z = 0.8248904319549282;

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
    msg.setTimeStamp(0.3728601608099361);
    msg.setSource(22485U);
    msg.setSourceEntity(135U);
    msg.setDestination(38119U);
    msg.setDestinationEntity(253U);
    msg.validity = 111U;
    msg.x = 0.8087873536959131;
    msg.y = 0.6511045243558894;
    msg.z = 0.5212027514943549;

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
    msg.setTimeStamp(0.8882742098730503);
    msg.setSource(55953U);
    msg.setSourceEntity(19U);
    msg.setDestination(3288U);
    msg.setDestinationEntity(23U);
    msg.validity = 117U;
    msg.x = 0.6193861127014747;
    msg.y = 0.6733765974550142;
    msg.z = 0.22791670043634382;

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
    msg.setTimeStamp(0.8396204100701128);
    msg.setSource(5165U);
    msg.setSourceEntity(76U);
    msg.setDestination(10303U);
    msg.setDestinationEntity(223U);
    msg.time = 0.4230000821211909;
    msg.x = 0.7244542144927894;
    msg.y = 0.020942578134536816;
    msg.z = 0.9239719926521471;

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
    msg.setTimeStamp(0.8941544716735862);
    msg.setSource(40241U);
    msg.setSourceEntity(246U);
    msg.setDestination(59936U);
    msg.setDestinationEntity(39U);
    msg.time = 0.9637318849053985;
    msg.x = 0.2543763975767759;
    msg.y = 0.0874954135021373;
    msg.z = 0.444008187523511;

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
    msg.setTimeStamp(0.9221887630930378);
    msg.setSource(7133U);
    msg.setSourceEntity(156U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(139U);
    msg.time = 0.9746505445338149;
    msg.x = 0.3937972374793661;
    msg.y = 0.9740504386190248;
    msg.z = 0.8957147850967476;

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
    msg.setTimeStamp(0.7064831103264355);
    msg.setSource(24945U);
    msg.setSourceEntity(82U);
    msg.setDestination(45056U);
    msg.setDestinationEntity(40U);
    msg.validity = 59U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.495952542034502;
    tmp_msg_0.beam_height = 0.12190386089913419;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.2950656905334841;

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
    msg.setTimeStamp(0.9715751328561968);
    msg.setSource(8903U);
    msg.setSourceEntity(108U);
    msg.setDestination(44925U);
    msg.setDestinationEntity(201U);
    msg.validity = 69U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8602739557774574;
    tmp_msg_0.y = 0.904359733367707;
    tmp_msg_0.z = 0.24872674713407017;
    tmp_msg_0.phi = 0.08582435661087306;
    tmp_msg_0.theta = 0.14885828657559796;
    tmp_msg_0.psi = 0.9328842827318933;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.4091150315271146;

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
    msg.setTimeStamp(0.8467863513178737);
    msg.setSource(56930U);
    msg.setSourceEntity(163U);
    msg.setDestination(59756U);
    msg.setDestinationEntity(162U);
    msg.validity = 201U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2696532045769564;
    tmp_msg_0.y = 0.15522753854547078;
    tmp_msg_0.z = 0.5665293591080024;
    tmp_msg_0.phi = 0.6802602793010759;
    tmp_msg_0.theta = 0.5721799662380785;
    tmp_msg_0.psi = 0.4693381533594624;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.6443527426798542;

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
    msg.setTimeStamp(0.8742585150115988);
    msg.setSource(12196U);
    msg.setSourceEntity(140U);
    msg.setDestination(30815U);
    msg.setDestinationEntity(252U);
    msg.value = 0.7421506051722192;

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
    msg.setTimeStamp(0.9773745385384028);
    msg.setSource(819U);
    msg.setSourceEntity(165U);
    msg.setDestination(49596U);
    msg.setDestinationEntity(4U);
    msg.value = 0.43152482081516275;

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
    msg.setTimeStamp(0.391258895556546);
    msg.setSource(54881U);
    msg.setSourceEntity(127U);
    msg.setDestination(24733U);
    msg.setDestinationEntity(168U);
    msg.value = 0.46719956989968714;

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
    msg.setTimeStamp(0.08823030515845054);
    msg.setSource(41997U);
    msg.setSourceEntity(58U);
    msg.setDestination(54675U);
    msg.setDestinationEntity(172U);
    msg.value = 0.29395637315993395;

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
    msg.setTimeStamp(0.46685761356891164);
    msg.setSource(14966U);
    msg.setSourceEntity(27U);
    msg.setDestination(1305U);
    msg.setDestinationEntity(168U);
    msg.value = 0.2856323391593547;

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
    msg.setTimeStamp(0.2982188407831069);
    msg.setSource(3507U);
    msg.setSourceEntity(69U);
    msg.setDestination(8020U);
    msg.setDestinationEntity(106U);
    msg.value = 0.35790932940723563;

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
    msg.setTimeStamp(0.29598959984363615);
    msg.setSource(52040U);
    msg.setSourceEntity(56U);
    msg.setDestination(5469U);
    msg.setDestinationEntity(82U);
    msg.value = 0.7088991671110357;

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
    msg.setTimeStamp(0.5583791707660282);
    msg.setSource(8110U);
    msg.setSourceEntity(186U);
    msg.setDestination(43802U);
    msg.setDestinationEntity(235U);
    msg.value = 0.6132599851822279;

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
    msg.setTimeStamp(0.25578778450570727);
    msg.setSource(51804U);
    msg.setSourceEntity(167U);
    msg.setDestination(9860U);
    msg.setDestinationEntity(41U);
    msg.value = 0.754642524752193;

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
    msg.setTimeStamp(0.7011376383406527);
    msg.setSource(865U);
    msg.setSourceEntity(79U);
    msg.setDestination(18887U);
    msg.setDestinationEntity(251U);
    msg.value = 0.5684957201985291;

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
    msg.setTimeStamp(0.18995336723908607);
    msg.setSource(9745U);
    msg.setSourceEntity(26U);
    msg.setDestination(37800U);
    msg.setDestinationEntity(91U);
    msg.value = 0.25616352846690105;

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
    msg.setTimeStamp(0.4265942042234453);
    msg.setSource(64295U);
    msg.setSourceEntity(220U);
    msg.setDestination(55793U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9651442091564773;

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
    msg.setTimeStamp(0.3986117546971012);
    msg.setSource(51200U);
    msg.setSourceEntity(205U);
    msg.setDestination(61663U);
    msg.setDestinationEntity(72U);
    msg.value = 0.026304083798514233;

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
    msg.setTimeStamp(0.34340965030935533);
    msg.setSource(46345U);
    msg.setSourceEntity(148U);
    msg.setDestination(48712U);
    msg.setDestinationEntity(79U);
    msg.value = 0.14112547327777625;

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
    msg.setTimeStamp(0.9230158391911709);
    msg.setSource(10554U);
    msg.setSourceEntity(241U);
    msg.setDestination(61440U);
    msg.setDestinationEntity(10U);
    msg.value = 0.18276690091904446;

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
    msg.setTimeStamp(0.37347754515235476);
    msg.setSource(56921U);
    msg.setSourceEntity(117U);
    msg.setDestination(43679U);
    msg.setDestinationEntity(72U);
    msg.value = 0.20182455308933822;

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
    msg.setTimeStamp(0.5986588274651803);
    msg.setSource(65531U);
    msg.setSourceEntity(50U);
    msg.setDestination(18500U);
    msg.setDestinationEntity(35U);
    msg.value = 0.9498259305342724;

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
    msg.setTimeStamp(0.48267727804681027);
    msg.setSource(18490U);
    msg.setSourceEntity(63U);
    msg.setDestination(57230U);
    msg.setDestinationEntity(35U);
    msg.value = 0.280257803827219;

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
    msg.setTimeStamp(0.29915459637001907);
    msg.setSource(50492U);
    msg.setSourceEntity(184U);
    msg.setDestination(61656U);
    msg.setDestinationEntity(41U);
    msg.value = 0.6824254932813035;

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
    msg.setTimeStamp(0.34826591227690773);
    msg.setSource(55829U);
    msg.setSourceEntity(140U);
    msg.setDestination(17073U);
    msg.setDestinationEntity(133U);
    msg.value = 0.41427198222997585;

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
    msg.setTimeStamp(0.7278235877850767);
    msg.setSource(59085U);
    msg.setSourceEntity(219U);
    msg.setDestination(51202U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6757321609675335;

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
    msg.setTimeStamp(0.6578520018223647);
    msg.setSource(35524U);
    msg.setSourceEntity(65U);
    msg.setDestination(2303U);
    msg.setDestinationEntity(208U);
    msg.value = 0.0434354944498605;

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
    msg.setTimeStamp(0.32486138564165123);
    msg.setSource(23457U);
    msg.setSourceEntity(107U);
    msg.setDestination(42938U);
    msg.setDestinationEntity(133U);
    msg.value = 0.11370758103884526;

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
    msg.setTimeStamp(0.25664339919699497);
    msg.setSource(33377U);
    msg.setSourceEntity(176U);
    msg.setDestination(25131U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9970970284390851;

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
    msg.setTimeStamp(0.3242157293285608);
    msg.setSource(40408U);
    msg.setSourceEntity(57U);
    msg.setDestination(33206U);
    msg.setDestinationEntity(212U);
    msg.direction = 0.8110073268220032;
    msg.speed = 0.7836863247050078;
    msg.turbulence = 0.5092615084099041;

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
    msg.setTimeStamp(0.8609903872451284);
    msg.setSource(34676U);
    msg.setSourceEntity(130U);
    msg.setDestination(25042U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.936339687152051;
    msg.speed = 0.4925788954054653;
    msg.turbulence = 0.04387728611606767;

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
    msg.setTimeStamp(0.5543801897335175);
    msg.setSource(36508U);
    msg.setSourceEntity(204U);
    msg.setDestination(52442U);
    msg.setDestinationEntity(224U);
    msg.direction = 0.14428365400999743;
    msg.speed = 0.7369061718227911;
    msg.turbulence = 0.2730723664621909;

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
    msg.setTimeStamp(0.12758152746918994);
    msg.setSource(35375U);
    msg.setSourceEntity(9U);
    msg.setDestination(46770U);
    msg.setDestinationEntity(109U);
    msg.value = 0.49477553157023324;

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
    msg.setTimeStamp(0.05161264175714542);
    msg.setSource(31635U);
    msg.setSourceEntity(29U);
    msg.setDestination(33583U);
    msg.setDestinationEntity(19U);
    msg.value = 0.9842737526675688;

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
    msg.setTimeStamp(0.5093517055951456);
    msg.setSource(27284U);
    msg.setSourceEntity(107U);
    msg.setDestination(61385U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8359001200726041;

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
    msg.setTimeStamp(0.7295378101024292);
    msg.setSource(40217U);
    msg.setSourceEntity(28U);
    msg.setDestination(12991U);
    msg.setDestinationEntity(104U);
    msg.value.assign("DDYFVVICBNMMSNMZNKLRMSVCESHXQORBCIAAKBHILTUEJQAXYYPGZBQSGMACVFOZKWDSUBTGBHFDBIPAFRZJHXFBXFDIVULWARELHPKRQEUHCKLTISTDYR");

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
    msg.setTimeStamp(0.5620475319616898);
    msg.setSource(43154U);
    msg.setSourceEntity(40U);
    msg.setDestination(57586U);
    msg.setDestinationEntity(224U);
    msg.value.assign("UQZMFWJAERUDDNHJCUZONLTSHPAIEAUVLCJSDSBBYDVYGQWNHQZNNERGDLRMGTOYORYSEWBOQXLPIXFHRXNLHXXTZKVKBOLTCUJONPDUKNWDTAVXVFFSWJCSRYYTBXMEIBTCAXBGZBFAIAJKIDMCAQSHBIDSHQJPNRPFZZQUEEUKAGQCOQGCMPWGITKLSJFFVHRLGNOOUDWLMVQEWMVTMIJGRZYHEKYBHMWIPKTXVYSOPRLWVKE");

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
    msg.setTimeStamp(0.07984307197941676);
    msg.setSource(35714U);
    msg.setSourceEntity(147U);
    msg.setDestination(14074U);
    msg.setDestinationEntity(107U);
    msg.value.assign("TESDPGXWTZMOQCOJBYRHQZCSLOJJYXWVLUXINSZWYNXTTSZGBLZKKSMWSKFIHYLYUVYGCLBKJQEOETANETTHWLBHPPSOAJKEEFFX");

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
    msg.setTimeStamp(0.6640159856552961);
    msg.setSource(64946U);
    msg.setSourceEntity(205U);
    msg.setDestination(19849U);
    msg.setDestinationEntity(200U);
    const signed char tmp_msg_0[] = {12, -37, -122, -56, -63, 9, -72, 4, 125, 76, -10, 121, 50, 99, 51, 104, -54, 83, 83, 111, -72, 90, 29, 33, 58, 22, -108, 84, -117, -96, -24, 79, 111, 118, -31, -49, 71, 75, 58, 79, -45, -122, 112, 26, -28, 19, -32, -124, -58, -100, 69, 120, -44, 9, 106, -7, -41, 4, 59, 99, -11, -35, 49, 10, -41, 117, 39, -59, 0, -85, 99, 73, -20, -30, -94, -30, 64, 19, -28, -122, -88, 59, 31, 15, -112, -39, -18, -13, -97, -114, -74, 44, -27, 36, -59, 66, -8, 47, 34, -83, 26, 68, 110, 20, -27, 89, 98, -10, 110, 117, -71, -70, -11, -109, -26, -33, -69, -77, 51, 122, 92, 20, 109, 104, 66, 72, -37, 75, -38, 13, 60, -43, 71, 17, 49, -1, -60, -113, -36, 90, 10, 54, -23, 70, -124, 53, -128, -36, -24, -53, 49, -128, -78, 117, -20, -79, -4, -95, 2, -117, -71, -82, 2, -18, -123, 81, -126, 126, 45, -67, 21, 48, -126, 8, 99, 14, 63, 1, 12, -6, -99, 85, -53, -17, -2, 36, 10, -65, -64, -104, -89, 87, -108, 61, -48, 31, 63, -7, 80, -64, 76, 114, 19, -23, -22, -35, -11};
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
    msg.setTimeStamp(0.5627725545448119);
    msg.setSource(21678U);
    msg.setSourceEntity(252U);
    msg.setDestination(49578U);
    msg.setDestinationEntity(128U);
    const signed char tmp_msg_0[] = {-126, 21, 75, -88, 21, 55, 65, 105, 83, -65, 76, 27, 60, 124, -67, 20, -57, 32, -27, 46, 88, 71, 94, 12, 51, -8, -120, 23, -41, 16, 95, -14, -112, 18, -83, 26, 24, -122, -16, 61, -49, 46, 92, 65, -18, 42, -17, -78, -86, -71, -69, 73, 79, -49, -69, -12, -2, 55, -49, -20, -122, -114, 29, 23, -85, -31, -49, 103, 58, -59, 64, 61, 62, -76, -116, -86, 7, -120, 25, 81, -126, -70, -115, -98, 64, -70, 105, 107, 3, 45, 79, -20, -19, 117, 39, 89, -78, -14, -125, -2, 8, -60, -116, 115, 42, -110, -80, -78, 49, -79, -110, -6, 108, -30, 106, 119, -123, -41};
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
    msg.setTimeStamp(0.30977293820312535);
    msg.setSource(26395U);
    msg.setSourceEntity(24U);
    msg.setDestination(43122U);
    msg.setDestinationEntity(165U);
    const signed char tmp_msg_0[] = {33, -48, -88, 48, -40, 33, 90, -28, -17, 65, 29, 91, -57, -16, 108, -104, -62, -31, -67, -84, -99, -53, -95, -76, -110, 4, -78, -10, 65, -100, 90, -75, -89, -122, -71, -56, 51, 8, 8, -55, -59, 80, 7, -81, 111, 86, -13, 28, 78, 90, 11, -89, -121, 75, 92, 22, 122, 109, 125, -102, -13, -124, 83, -51, 41, -3, 40, 121, -6, -124, 30, 86, 103, -47, 112, -3, -128, 25, -22, -40, -40, -52, 67, 45, 11, 58, -40, -74, 110, 101, -118, -76, -115, -37, 67, 9, -45, -114, 21, 97, 34, 88, -123, -85, -20, 64, -21};
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
    msg.setTimeStamp(0.10869016942376131);
    msg.setSource(24049U);
    msg.setSourceEntity(177U);
    msg.setDestination(37594U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7812848925454245;

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
    msg.setTimeStamp(0.04666546193029897);
    msg.setSource(2992U);
    msg.setSourceEntity(118U);
    msg.setDestination(14258U);
    msg.setDestinationEntity(218U);
    msg.value = 0.28960702199498867;

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
    msg.setTimeStamp(0.44548709847603307);
    msg.setSource(44678U);
    msg.setSourceEntity(100U);
    msg.setDestination(32828U);
    msg.setDestinationEntity(11U);
    msg.value = 0.662817116887245;

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
    msg.setTimeStamp(0.7302923355300667);
    msg.setSource(56750U);
    msg.setSourceEntity(61U);
    msg.setDestination(315U);
    msg.setDestinationEntity(186U);
    msg.type = 103U;
    msg.frequency = 3088519768U;
    msg.min_range = 51721U;
    msg.max_range = 32203U;
    msg.bits_per_point = 127U;
    msg.scale_factor = 0.6775550374432003;
    const signed char tmp_msg_0[] = {79, -10, 9, -40, -30, -32, 9, -83, -4, 31, 23, -91, -67};
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
    msg.setTimeStamp(0.12787820734179933);
    msg.setSource(54299U);
    msg.setSourceEntity(166U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(84U);
    msg.type = 141U;
    msg.frequency = 3927094947U;
    msg.min_range = 18716U;
    msg.max_range = 61587U;
    msg.bits_per_point = 151U;
    msg.scale_factor = 0.1824737853055448;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.25987895027713515;
    tmp_msg_0.beam_height = 0.2915106518183751;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {119, -91, -102, -59, 53, 79, -33, 52, 107, -96, -66, 16, -1, 36, 20, 105, -91, 79, -115, -59, 38, -8, 4, 24, -69, -104, -121, 47, -106, -8, -101, -66, 86, -120, 64, -65, 4, -16, 57, -27, 54, 104, 47, -89, -32, 83, -40, -65, -23, -66, 114, -18, -86, -116, -61, 35, 112, -28, -87, -63, -57, -86, 94, -58, 125, -33, 125, -105, 81, -9, -31, 55, 0, 47, 1, -76, -61, -33, 77, -71, -98, -70, -52, 76, 61, -122, -110, 90, -49, 10, 112, 33, 56, -24, 90, -115, -16, -45, 25, 27, -125, 110, 52, 84, 41, 120, 24, 37, -26, 4};
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
    msg.setTimeStamp(0.8422748220851358);
    msg.setSource(18809U);
    msg.setSourceEntity(23U);
    msg.setDestination(29337U);
    msg.setDestinationEntity(44U);
    msg.type = 62U;
    msg.frequency = 2210750171U;
    msg.min_range = 49579U;
    msg.max_range = 35889U;
    msg.bits_per_point = 110U;
    msg.scale_factor = 0.3004060339002248;
    const signed char tmp_msg_0[] = {54, -48, -90, 18, 95, 19, -4, 69, -55, -43, 7, 105, -60, 38, -64, 107, 120, -57, 113, 56, -103, -83, -71, 80, -110, -53, -109, -127, -13, -24, 52, 8, -2, 126, -103, 21, -72, -24, -1, -126, 3, 78, 110, -95, -121, 101, 14, 116, -95, 29, 85, -67, 49, -50, 23, 75, -5, -106, -121, 86, 66, 51, -99, 75, -50, -94, -24, -123};
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
    msg.setTimeStamp(0.7340291106979336);
    msg.setSource(1614U);
    msg.setSourceEntity(208U);
    msg.setDestination(22711U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.9095474901940356);
    msg.setSource(65137U);
    msg.setSourceEntity(152U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.26266333822319954);
    msg.setSource(3369U);
    msg.setSourceEntity(223U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.8749205972409314);
    msg.setSource(47522U);
    msg.setSourceEntity(237U);
    msg.setDestination(33749U);
    msg.setDestinationEntity(169U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.05826139219445137);
    msg.setSource(29082U);
    msg.setSourceEntity(103U);
    msg.setDestination(35637U);
    msg.setDestinationEntity(150U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.13258587623964446);
    msg.setSource(30629U);
    msg.setSourceEntity(147U);
    msg.setDestination(30581U);
    msg.setDestinationEntity(145U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.7844709108678213);
    msg.setSource(41471U);
    msg.setSourceEntity(189U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(113U);
    msg.value = 0.6275269356269048;
    msg.confidence = 0.922760367984948;
    msg.opmodes.assign("JDVNTEYENTOGKRWRUTSQGAIUTCASHSVOVYDOPZIAOYJJXXPHHVYWXCDABPCNQCVLBOGYCDOLBXYONWDZTPBSTKJVVJEWDMNQURMAEWGQFQKABVHJUSVNIOMRGKREUIHUKOLSJEWVKNZYZTFSUDCKZNULHBIGZTXIYZLRDGIGXMYEAXWFP");

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
    msg.setTimeStamp(0.5114775071685138);
    msg.setSource(48199U);
    msg.setSourceEntity(30U);
    msg.setDestination(64502U);
    msg.setDestinationEntity(234U);
    msg.value = 0.4221146647397067;
    msg.confidence = 0.6855649053317052;
    msg.opmodes.assign("OSYKAFZALQWHJXOFNYNSLJMOHLQXRIFGDHJJLTZNREKKKRFHWAGKPQRNQMCAJYNMQDOAMTCZBOYFSPBZFZDBNMLIVSPZPXYXFPTMLRUVSCUJLCGIVHVMWPDGBQWYAWJXXQGUYEUOIDNCTKSDVQTFSTUHGEIYUWXIRUQEGTOAXOOLZDCIIBVEWAUTTUDHGCJVGZKNECSRBW");

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
    msg.setTimeStamp(0.3885965029418743);
    msg.setSource(13099U);
    msg.setSourceEntity(121U);
    msg.setDestination(2998U);
    msg.setDestinationEntity(196U);
    msg.value = 0.791179453125215;
    msg.confidence = 0.507731262829912;
    msg.opmodes.assign("ETCVJSDHSESBCJIKXDNKTFMMZLVUBCWQXPVAWHOKOIVWDFEDWIORWONYYUYO");

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
    msg.setTimeStamp(0.7003872940203557);
    msg.setSource(56593U);
    msg.setSourceEntity(198U);
    msg.setDestination(1538U);
    msg.setDestinationEntity(71U);
    msg.itow = 3827202219U;
    msg.lat = 0.7230724905026712;
    msg.lon = 0.7038660768408148;
    msg.height_ell = 0.4487481781716395;
    msg.height_sea = 0.04917007655854089;
    msg.hacc = 0.45362502854512643;
    msg.vacc = 0.09143186312775164;
    msg.vel_n = 0.28914661920878626;
    msg.vel_e = 0.642395568716971;
    msg.vel_d = 0.6047410976431673;
    msg.speed = 0.28509362357661117;
    msg.gspeed = 0.7936239966662281;
    msg.heading = 0.9867498290949032;
    msg.sacc = 0.11369766205882126;
    msg.cacc = 0.5492696776578081;

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
    msg.setTimeStamp(0.2053758392813274);
    msg.setSource(48483U);
    msg.setSourceEntity(81U);
    msg.setDestination(44491U);
    msg.setDestinationEntity(243U);
    msg.itow = 1363416820U;
    msg.lat = 0.027438475660418793;
    msg.lon = 0.7482765736104019;
    msg.height_ell = 0.5639101460405325;
    msg.height_sea = 0.9217824332791763;
    msg.hacc = 0.18465624130773317;
    msg.vacc = 0.04126813713739319;
    msg.vel_n = 0.755058078057526;
    msg.vel_e = 0.2817606553073877;
    msg.vel_d = 0.2240879590788154;
    msg.speed = 0.45880106182531144;
    msg.gspeed = 0.5536397716301948;
    msg.heading = 0.11869477608276391;
    msg.sacc = 0.33429078028832127;
    msg.cacc = 0.11718706147946545;

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
    msg.setTimeStamp(0.20471989575013838);
    msg.setSource(30460U);
    msg.setSourceEntity(145U);
    msg.setDestination(50500U);
    msg.setDestinationEntity(49U);
    msg.itow = 3955997880U;
    msg.lat = 0.5286739352050714;
    msg.lon = 0.9414852098370894;
    msg.height_ell = 0.8759023700257692;
    msg.height_sea = 0.06484129403346905;
    msg.hacc = 0.9562302972008545;
    msg.vacc = 0.2961544720384762;
    msg.vel_n = 0.9354929307193444;
    msg.vel_e = 0.9499766133704042;
    msg.vel_d = 0.7110966222818417;
    msg.speed = 0.8325233748748403;
    msg.gspeed = 0.9978632921231531;
    msg.heading = 0.08204910361753903;
    msg.sacc = 0.8011299153537751;
    msg.cacc = 0.8209681199710148;

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
    msg.setTimeStamp(0.6921390928208907);
    msg.setSource(51027U);
    msg.setSourceEntity(213U);
    msg.setDestination(54779U);
    msg.setDestinationEntity(219U);
    msg.id = 39U;
    msg.value = 0.652175620262472;

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
    msg.setTimeStamp(0.23241658708879576);
    msg.setSource(62925U);
    msg.setSourceEntity(106U);
    msg.setDestination(14848U);
    msg.setDestinationEntity(110U);
    msg.id = 230U;
    msg.value = 0.11080964664294835;

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
    msg.setTimeStamp(0.6036790480301821);
    msg.setSource(33164U);
    msg.setSourceEntity(227U);
    msg.setDestination(1869U);
    msg.setDestinationEntity(19U);
    msg.id = 65U;
    msg.value = 0.144749517335231;

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
    msg.setTimeStamp(0.6349740674789452);
    msg.setSource(8376U);
    msg.setSourceEntity(45U);
    msg.setDestination(55164U);
    msg.setDestinationEntity(95U);
    msg.x = 0.8416569824564832;
    msg.y = 0.7420824562496215;
    msg.z = 0.607485239257184;
    msg.phi = 0.9629717734553622;
    msg.theta = 0.31900216714592966;
    msg.psi = 0.8937356912452644;

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
    msg.setTimeStamp(0.22056045592441842);
    msg.setSource(26264U);
    msg.setSourceEntity(121U);
    msg.setDestination(23157U);
    msg.setDestinationEntity(227U);
    msg.x = 0.24610515468384309;
    msg.y = 0.9175230757945034;
    msg.z = 0.6637491956960838;
    msg.phi = 0.25316079263585767;
    msg.theta = 0.2808069757045437;
    msg.psi = 0.7752790964350336;

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
    msg.setTimeStamp(0.6788734482765193);
    msg.setSource(57082U);
    msg.setSourceEntity(165U);
    msg.setDestination(2129U);
    msg.setDestinationEntity(15U);
    msg.x = 0.9667037311500686;
    msg.y = 0.059920855333101875;
    msg.z = 0.8278414293925134;
    msg.phi = 0.4145015114035867;
    msg.theta = 0.3120692882767947;
    msg.psi = 0.5758868412109662;

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
    msg.setTimeStamp(0.811229974054424);
    msg.setSource(45536U);
    msg.setSourceEntity(39U);
    msg.setDestination(24591U);
    msg.setDestinationEntity(96U);
    msg.beam_width = 0.30415044551380477;
    msg.beam_height = 0.3990500379423333;

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
    msg.setTimeStamp(0.0011247743888624928);
    msg.setSource(61712U);
    msg.setSourceEntity(67U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(102U);
    msg.beam_width = 0.04317096155111677;
    msg.beam_height = 0.8796791736652257;

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
    msg.setTimeStamp(0.020271550962974727);
    msg.setSource(20903U);
    msg.setSourceEntity(186U);
    msg.setDestination(4665U);
    msg.setDestinationEntity(22U);
    msg.beam_width = 0.9749321819465405;
    msg.beam_height = 0.5909095538156272;

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
    msg.setTimeStamp(0.15823844511901441);
    msg.setSource(53242U);
    msg.setSourceEntity(206U);
    msg.setDestination(43517U);
    msg.setDestinationEntity(130U);
    msg.sane = 55U;

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
    msg.setTimeStamp(0.015293670189106212);
    msg.setSource(13899U);
    msg.setSourceEntity(15U);
    msg.setDestination(50484U);
    msg.setDestinationEntity(3U);
    msg.sane = 14U;

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
    msg.setTimeStamp(0.6660564240234143);
    msg.setSource(14838U);
    msg.setSourceEntity(86U);
    msg.setDestination(5561U);
    msg.setDestinationEntity(11U);
    msg.sane = 251U;

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
    msg.setTimeStamp(0.9052074032187601);
    msg.setSource(31462U);
    msg.setSourceEntity(15U);
    msg.setDestination(7925U);
    msg.setDestinationEntity(215U);
    msg.value = 0.8099424285139744;

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
    msg.setTimeStamp(0.684082261200861);
    msg.setSource(1364U);
    msg.setSourceEntity(209U);
    msg.setDestination(46296U);
    msg.setDestinationEntity(0U);
    msg.value = 0.7584423474142792;

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
    msg.setTimeStamp(0.9026294250606486);
    msg.setSource(28836U);
    msg.setSourceEntity(180U);
    msg.setDestination(37124U);
    msg.setDestinationEntity(35U);
    msg.value = 0.8544731255191239;

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
    msg.setTimeStamp(0.9932948910259973);
    msg.setSource(51217U);
    msg.setSourceEntity(21U);
    msg.setDestination(23271U);
    msg.setDestinationEntity(176U);
    msg.value = 0.5674274021452006;

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
    msg.setTimeStamp(0.3392400528193459);
    msg.setSource(40249U);
    msg.setSourceEntity(237U);
    msg.setDestination(45523U);
    msg.setDestinationEntity(95U);
    msg.value = 0.35625524699668953;

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
    msg.setTimeStamp(0.11804995494947967);
    msg.setSource(46156U);
    msg.setSourceEntity(214U);
    msg.setDestination(10181U);
    msg.setDestinationEntity(52U);
    msg.value = 0.11348773744327778;

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
    msg.setTimeStamp(0.6493888243505248);
    msg.setSource(63296U);
    msg.setSourceEntity(128U);
    msg.setDestination(52142U);
    msg.setDestinationEntity(206U);
    msg.value = 0.38867740988099986;

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
    msg.setTimeStamp(0.7726057811495691);
    msg.setSource(306U);
    msg.setSourceEntity(199U);
    msg.setDestination(52158U);
    msg.setDestinationEntity(150U);
    msg.value = 0.5617943718706768;

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
    msg.setTimeStamp(0.08870631375323867);
    msg.setSource(42619U);
    msg.setSourceEntity(73U);
    msg.setDestination(59980U);
    msg.setDestinationEntity(31U);
    msg.value = 0.4590421403603504;

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
    msg.setTimeStamp(0.5661896516208901);
    msg.setSource(26694U);
    msg.setSourceEntity(20U);
    msg.setDestination(8092U);
    msg.setDestinationEntity(187U);
    msg.value = 0.5746404171864438;

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
    msg.setTimeStamp(0.10490158313221354);
    msg.setSource(15372U);
    msg.setSourceEntity(75U);
    msg.setDestination(56758U);
    msg.setDestinationEntity(125U);
    msg.value = 0.3039424336011657;

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
    msg.setTimeStamp(0.9593247796125854);
    msg.setSource(2528U);
    msg.setSourceEntity(108U);
    msg.setDestination(34815U);
    msg.setDestinationEntity(16U);
    msg.value = 0.7673962347980031;

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
    msg.setTimeStamp(0.18518330749186662);
    msg.setSource(3951U);
    msg.setSourceEntity(213U);
    msg.setDestination(25132U);
    msg.setDestinationEntity(21U);
    msg.value = 0.010652370488137608;

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
    msg.setTimeStamp(0.8162932588965235);
    msg.setSource(8884U);
    msg.setSourceEntity(137U);
    msg.setDestination(3215U);
    msg.setDestinationEntity(155U);
    msg.value = 0.8674271003676359;

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
    msg.setTimeStamp(0.8986951474815391);
    msg.setSource(15317U);
    msg.setSourceEntity(243U);
    msg.setDestination(51244U);
    msg.setDestinationEntity(137U);
    msg.value = 0.6633609561627901;

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
    msg.setTimeStamp(0.9866280275859934);
    msg.setSource(12967U);
    msg.setSourceEntity(89U);
    msg.setDestination(55336U);
    msg.setDestinationEntity(100U);
    msg.value = 0.903312627763385;

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
    msg.setTimeStamp(0.9175507952846917);
    msg.setSource(6044U);
    msg.setSourceEntity(214U);
    msg.setDestination(47460U);
    msg.setDestinationEntity(90U);
    msg.value = 0.2840143148315808;

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
    msg.setTimeStamp(0.5494555211727841);
    msg.setSource(56295U);
    msg.setSourceEntity(145U);
    msg.setDestination(17905U);
    msg.setDestinationEntity(49U);
    msg.value = 0.24148162434170273;

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
    msg.setTimeStamp(0.09053957365663767);
    msg.setSource(55916U);
    msg.setSourceEntity(9U);
    msg.setDestination(39770U);
    msg.setDestinationEntity(121U);
    msg.value = 0.45206570365050236;

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
    msg.setTimeStamp(0.1762632637911914);
    msg.setSource(34103U);
    msg.setSourceEntity(15U);
    msg.setDestination(8829U);
    msg.setDestinationEntity(18U);
    msg.value = 0.060485326634748926;

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
    msg.setTimeStamp(0.14523550080790748);
    msg.setSource(64570U);
    msg.setSourceEntity(235U);
    msg.setDestination(63148U);
    msg.setDestinationEntity(244U);
    msg.value = 0.1200703861125898;

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
    msg.setTimeStamp(0.897861357281569);
    msg.setSource(59686U);
    msg.setSourceEntity(226U);
    msg.setDestination(59418U);
    msg.setDestinationEntity(31U);
    msg.value = 0.361230635475832;

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
    msg.setTimeStamp(0.7228297006302503);
    msg.setSource(44544U);
    msg.setSourceEntity(205U);
    msg.setDestination(24941U);
    msg.setDestinationEntity(97U);
    msg.value = 0.8326608435537816;

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
    msg.setTimeStamp(0.2601326825002023);
    msg.setSource(28955U);
    msg.setSourceEntity(247U);
    msg.setDestination(39004U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5284656334554828;

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
    msg.setTimeStamp(0.8298090814114161);
    msg.setSource(22646U);
    msg.setSourceEntity(161U);
    msg.setDestination(12932U);
    msg.setDestinationEntity(131U);
    msg.validity = 37300U;
    msg.type = 215U;
    msg.tow = 2826205037U;
    msg.base_lat = 0.25568298176123705;
    msg.base_lon = 0.9420951398626934;
    msg.base_height = 0.8022373448350042;
    msg.n = 0.7509610003380206;
    msg.e = 0.75953000345697;
    msg.d = 0.7399862628335876;
    msg.v_n = 0.11362313504835397;
    msg.v_e = 0.05281435244472976;
    msg.v_d = 0.5161137639993988;
    msg.satellites = 0U;
    msg.iar_hyp = 27454U;
    msg.iar_ratio = 0.013962101662546744;

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
    msg.setTimeStamp(0.30031529518742517);
    msg.setSource(53723U);
    msg.setSourceEntity(4U);
    msg.setDestination(35822U);
    msg.setDestinationEntity(147U);
    msg.validity = 5778U;
    msg.type = 27U;
    msg.tow = 1556504567U;
    msg.base_lat = 0.42404053377023887;
    msg.base_lon = 0.24151020900173492;
    msg.base_height = 0.9035611231049389;
    msg.n = 0.2984640859860169;
    msg.e = 0.27052928928289055;
    msg.d = 0.020368089351770702;
    msg.v_n = 0.3160116562014198;
    msg.v_e = 0.08203598642711885;
    msg.v_d = 0.9559171373960978;
    msg.satellites = 230U;
    msg.iar_hyp = 11844U;
    msg.iar_ratio = 0.27210504742986896;

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
    msg.setTimeStamp(0.9182320996487766);
    msg.setSource(57336U);
    msg.setSourceEntity(106U);
    msg.setDestination(36148U);
    msg.setDestinationEntity(36U);
    msg.validity = 37764U;
    msg.type = 203U;
    msg.tow = 528114813U;
    msg.base_lat = 0.789750835988194;
    msg.base_lon = 0.6371331808510882;
    msg.base_height = 0.3375841703474809;
    msg.n = 0.4922993282743432;
    msg.e = 0.6174934257200699;
    msg.d = 0.7363008858030001;
    msg.v_n = 0.45832874347605124;
    msg.v_e = 0.17992037974727715;
    msg.v_d = 0.8926325589347398;
    msg.satellites = 144U;
    msg.iar_hyp = 62268U;
    msg.iar_ratio = 0.7385524049363131;

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
    msg.setTimeStamp(0.7292546461119721);
    msg.setSource(64322U);
    msg.setSourceEntity(42U);
    msg.setDestination(2501U);
    msg.setDestinationEntity(248U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2223533946735896;
    tmp_msg_0.lon = 0.5469614903025962;
    tmp_msg_0.height = 0.707953880010382;
    tmp_msg_0.x = 0.14588914744241177;
    tmp_msg_0.y = 0.17194784269640606;
    tmp_msg_0.z = 0.83169952365049;
    tmp_msg_0.phi = 0.5479772301208877;
    tmp_msg_0.theta = 0.24855285683156925;
    tmp_msg_0.psi = 0.3614580126892486;
    tmp_msg_0.u = 0.2100576638802819;
    tmp_msg_0.v = 0.8859245835770039;
    tmp_msg_0.w = 0.13793639242485434;
    tmp_msg_0.vx = 0.641206635095182;
    tmp_msg_0.vy = 0.5803413573606016;
    tmp_msg_0.vz = 0.7220089705615608;
    tmp_msg_0.p = 0.6497935984031668;
    tmp_msg_0.q = 0.14973257979569388;
    tmp_msg_0.r = 0.9545913153867908;
    tmp_msg_0.depth = 0.7804739664895575;
    tmp_msg_0.alt = 0.5789022656643359;
    msg.state.set(tmp_msg_0);
    msg.type = 124U;

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
    msg.setTimeStamp(0.8603306480968081);
    msg.setSource(46193U);
    msg.setSourceEntity(231U);
    msg.setDestination(48091U);
    msg.setDestinationEntity(130U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.10588966285781132;
    tmp_msg_0.lon = 0.9298086447164317;
    tmp_msg_0.height = 0.49702580584177003;
    tmp_msg_0.x = 0.7243323243065174;
    tmp_msg_0.y = 0.17788955592708655;
    tmp_msg_0.z = 0.1132171300037349;
    tmp_msg_0.phi = 0.618209072829811;
    tmp_msg_0.theta = 0.9425109769484357;
    tmp_msg_0.psi = 0.641503935059246;
    tmp_msg_0.u = 0.889268862345398;
    tmp_msg_0.v = 0.39792721077097504;
    tmp_msg_0.w = 0.4185389767741299;
    tmp_msg_0.vx = 0.4845734969839267;
    tmp_msg_0.vy = 0.4182176464598243;
    tmp_msg_0.vz = 0.5224164333635815;
    tmp_msg_0.p = 0.30610432988240943;
    tmp_msg_0.q = 0.5020320446195535;
    tmp_msg_0.r = 0.3225734035866209;
    tmp_msg_0.depth = 0.7652383174888502;
    tmp_msg_0.alt = 0.7179840145819566;
    msg.state.set(tmp_msg_0);
    msg.type = 67U;

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
    msg.setTimeStamp(0.7600877872465331);
    msg.setSource(56965U);
    msg.setSourceEntity(52U);
    msg.setDestination(22671U);
    msg.setDestinationEntity(124U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.09529211198900889;
    tmp_msg_0.lon = 0.40463288468031566;
    tmp_msg_0.height = 0.6274522693103426;
    tmp_msg_0.x = 0.4484423992235196;
    tmp_msg_0.y = 0.6413464783986224;
    tmp_msg_0.z = 0.4587297058024856;
    tmp_msg_0.phi = 0.28302721721465496;
    tmp_msg_0.theta = 0.31409925469116995;
    tmp_msg_0.psi = 0.7888479511279608;
    tmp_msg_0.u = 0.6570886878544868;
    tmp_msg_0.v = 0.21992941956890244;
    tmp_msg_0.w = 0.13252996023744812;
    tmp_msg_0.vx = 0.37015292581080683;
    tmp_msg_0.vy = 0.6250765015091172;
    tmp_msg_0.vz = 0.15873792593337555;
    tmp_msg_0.p = 0.5791170284238022;
    tmp_msg_0.q = 0.8532381143947008;
    tmp_msg_0.r = 0.8026270994851848;
    tmp_msg_0.depth = 0.07950418967021244;
    tmp_msg_0.alt = 0.3307111558760195;
    msg.state.set(tmp_msg_0);
    msg.type = 247U;

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
    msg.setTimeStamp(0.4281384828767745);
    msg.setSource(26051U);
    msg.setSourceEntity(67U);
    msg.setDestination(29334U);
    msg.setDestinationEntity(28U);
    msg.value = 0.3391563112352406;

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
    msg.setTimeStamp(0.015464057397708064);
    msg.setSource(43614U);
    msg.setSourceEntity(82U);
    msg.setDestination(58881U);
    msg.setDestinationEntity(204U);
    msg.value = 0.7821378144966498;

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
    msg.setTimeStamp(0.16860146862611913);
    msg.setSource(20431U);
    msg.setSourceEntity(5U);
    msg.setDestination(22332U);
    msg.setDestinationEntity(177U);
    msg.value = 0.6365407035518997;

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
    msg.setTimeStamp(0.030951878560310675);
    msg.setSource(50487U);
    msg.setSourceEntity(21U);
    msg.setDestination(27202U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6755054770992537;

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
    msg.setTimeStamp(0.4162403035178497);
    msg.setSource(59136U);
    msg.setSourceEntity(218U);
    msg.setDestination(41120U);
    msg.setDestinationEntity(206U);
    msg.value = 0.9371701501146746;

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
    msg.setTimeStamp(0.38694313637994904);
    msg.setSource(10011U);
    msg.setSourceEntity(33U);
    msg.setDestination(24183U);
    msg.setDestinationEntity(203U);
    msg.value = 0.7976170945664444;

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
    msg.setTimeStamp(0.9709504336313445);
    msg.setSource(23152U);
    msg.setSourceEntity(178U);
    msg.setDestination(44353U);
    msg.setDestinationEntity(29U);
    msg.value = 0.20222798888407012;

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
    msg.setTimeStamp(0.12966387247914357);
    msg.setSource(24695U);
    msg.setSourceEntity(91U);
    msg.setDestination(57788U);
    msg.setDestinationEntity(228U);
    msg.value = 0.5775937025230976;

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
    msg.setTimeStamp(0.6511704162748301);
    msg.setSource(9554U);
    msg.setSourceEntity(138U);
    msg.setDestination(54223U);
    msg.setDestinationEntity(77U);
    msg.value = 0.4012698874027033;

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
    msg.setTimeStamp(0.19191788267766907);
    msg.setSource(60211U);
    msg.setSourceEntity(160U);
    msg.setDestination(37081U);
    msg.setDestinationEntity(219U);
    msg.value = 0.44387247698935584;

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
    msg.setTimeStamp(0.10872696404666593);
    msg.setSource(7349U);
    msg.setSourceEntity(33U);
    msg.setDestination(60485U);
    msg.setDestinationEntity(187U);
    msg.value = 0.1291653628527707;

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
    msg.setTimeStamp(0.7686852391194952);
    msg.setSource(45036U);
    msg.setSourceEntity(75U);
    msg.setDestination(46474U);
    msg.setDestinationEntity(44U);
    msg.value = 0.6673281350941199;

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
    msg.setTimeStamp(0.0765484831231591);
    msg.setSource(18968U);
    msg.setSourceEntity(84U);
    msg.setDestination(15166U);
    msg.setDestinationEntity(218U);
    msg.value = 0.6975050943512531;

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
    msg.setTimeStamp(0.6153270878921745);
    msg.setSource(31075U);
    msg.setSourceEntity(2U);
    msg.setDestination(21142U);
    msg.setDestinationEntity(205U);
    msg.value = 0.057020286017572364;

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
    msg.setTimeStamp(0.2603617657586277);
    msg.setSource(48543U);
    msg.setSourceEntity(160U);
    msg.setDestination(44335U);
    msg.setDestinationEntity(24U);
    msg.value = 0.28004854115233546;

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
    msg.setTimeStamp(0.6058813710024188);
    msg.setSource(34412U);
    msg.setSourceEntity(168U);
    msg.setDestination(64647U);
    msg.setDestinationEntity(53U);
    msg.id = 216U;
    msg.zoom = 248U;
    msg.action = 103U;

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
    msg.setTimeStamp(0.20605537583840705);
    msg.setSource(52977U);
    msg.setSourceEntity(189U);
    msg.setDestination(26266U);
    msg.setDestinationEntity(97U);
    msg.id = 108U;
    msg.zoom = 17U;
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
    msg.setTimeStamp(0.25988090970145705);
    msg.setSource(30859U);
    msg.setSourceEntity(111U);
    msg.setDestination(19251U);
    msg.setDestinationEntity(204U);
    msg.id = 63U;
    msg.zoom = 82U;
    msg.action = 151U;

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
    msg.setTimeStamp(0.7206784967636466);
    msg.setSource(61109U);
    msg.setSourceEntity(141U);
    msg.setDestination(32511U);
    msg.setDestinationEntity(179U);
    msg.id = 133U;
    msg.value = 0.6295915709994928;

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
    msg.setTimeStamp(0.904281288977853);
    msg.setSource(20485U);
    msg.setSourceEntity(2U);
    msg.setDestination(10395U);
    msg.setDestinationEntity(195U);
    msg.id = 184U;
    msg.value = 0.7618395143430677;

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
    msg.setTimeStamp(0.035351944760440124);
    msg.setSource(37349U);
    msg.setSourceEntity(234U);
    msg.setDestination(61345U);
    msg.setDestinationEntity(68U);
    msg.id = 163U;
    msg.value = 0.11055823034895196;

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
    msg.setTimeStamp(0.6477404562893442);
    msg.setSource(5426U);
    msg.setSourceEntity(104U);
    msg.setDestination(60992U);
    msg.setDestinationEntity(204U);
    msg.id = 151U;
    msg.value = 0.47096416708600863;

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
    msg.setTimeStamp(0.44197306726247154);
    msg.setSource(49523U);
    msg.setSourceEntity(63U);
    msg.setDestination(64183U);
    msg.setDestinationEntity(111U);
    msg.id = 171U;
    msg.value = 0.81718093723665;

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
    msg.setTimeStamp(0.9662499827030625);
    msg.setSource(4545U);
    msg.setSourceEntity(65U);
    msg.setDestination(20138U);
    msg.setDestinationEntity(136U);
    msg.id = 80U;
    msg.value = 0.5481579627145268;

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
    msg.setTimeStamp(0.15569059984021638);
    msg.setSource(3713U);
    msg.setSourceEntity(38U);
    msg.setDestination(60876U);
    msg.setDestinationEntity(237U);
    msg.id = 235U;
    msg.angle = 0.774564096705132;

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
    msg.setTimeStamp(0.020845426523162347);
    msg.setSource(34503U);
    msg.setSourceEntity(251U);
    msg.setDestination(9697U);
    msg.setDestinationEntity(46U);
    msg.id = 71U;
    msg.angle = 0.8341991363039027;

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
    msg.setTimeStamp(0.8652802373515666);
    msg.setSource(45949U);
    msg.setSourceEntity(176U);
    msg.setDestination(46887U);
    msg.setDestinationEntity(174U);
    msg.id = 244U;
    msg.angle = 0.39372812576677274;

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
    msg.setTimeStamp(0.6520478125572108);
    msg.setSource(13579U);
    msg.setSourceEntity(54U);
    msg.setDestination(10743U);
    msg.setDestinationEntity(28U);
    msg.op = 242U;
    msg.actions.assign("ZUWEXQGBBSOZEFOWVKQFFYALSGALWDMRGMQJVKCMUJ");

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
    msg.setTimeStamp(0.3534448599156542);
    msg.setSource(63208U);
    msg.setSourceEntity(118U);
    msg.setDestination(24550U);
    msg.setDestinationEntity(90U);
    msg.op = 194U;
    msg.actions.assign("IKNAFWOSRTYWYTXHHUFWMJVMOITDMGJFVJBNOADCHNPEGSCJKIWBVEVDGVZQBQIYLQXOEEVDHJPBMAJTQSLIRTFEKYLJCULXMUUUJRJAIHLPZNQGIQZCBRWGFDCPDSRKDNPYAGBARLHKOSSPEWBUYCUGFEQONMTGXNSRPTQHZTYYODMFIRJCIZF");

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
    msg.setTimeStamp(0.5566594757440397);
    msg.setSource(39808U);
    msg.setSourceEntity(225U);
    msg.setDestination(35511U);
    msg.setDestinationEntity(149U);
    msg.op = 15U;
    msg.actions.assign("UPFVQYRWTKVXPKAERMQOCDMOTRIUGTUAAANOWOULXNSBBULAVNMNZWZQGTEKELTULMOYXEXFYHQNBIFMVGULATVGZEAJXQWXKWFSRNUCIPDJSHJMBRGWXBXPQBYJDTYCAVIZKFYDBPMRNESCBKSHPEOLHTTMPQJXJJPMSVLQYDO");

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
    msg.setTimeStamp(0.11760270431408182);
    msg.setSource(28179U);
    msg.setSourceEntity(161U);
    msg.setDestination(48937U);
    msg.setDestinationEntity(50U);
    msg.actions.assign("DMGQNGIXOLQDMIHGNPBHSIUJTPZVFIAJYSCCVZBMIUGFXCSYTLEARCVXAROSTDLYQUHJABDPFRZDFUDHOFKNJPWNRVKZXUKQLCEQWNJRLUMYNXEKTVPTSYZPUHXCPWUOBOXJCBGSVIGEK");

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
    msg.setTimeStamp(0.7470922435693623);
    msg.setSource(4251U);
    msg.setSourceEntity(100U);
    msg.setDestination(15244U);
    msg.setDestinationEntity(55U);
    msg.actions.assign("MNOSKNUFBZLNXUBK");

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
    msg.setTimeStamp(0.8826115855416835);
    msg.setSource(23973U);
    msg.setSourceEntity(246U);
    msg.setDestination(32459U);
    msg.setDestinationEntity(137U);
    msg.actions.assign("JEZLAKKNYDUFJMTOHAFNFIVWSBYODMOHGNFERTWYDRN");

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
    msg.setTimeStamp(0.17799902954743896);
    msg.setSource(56857U);
    msg.setSourceEntity(16U);
    msg.setDestination(6757U);
    msg.setDestinationEntity(63U);
    msg.button = 143U;
    msg.value = 194U;

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
    msg.setTimeStamp(0.17883869476142733);
    msg.setSource(52313U);
    msg.setSourceEntity(53U);
    msg.setDestination(55704U);
    msg.setDestinationEntity(164U);
    msg.button = 152U;
    msg.value = 112U;

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
    msg.setTimeStamp(0.11631399346448346);
    msg.setSource(1911U);
    msg.setSourceEntity(161U);
    msg.setDestination(24693U);
    msg.setDestinationEntity(151U);
    msg.button = 125U;
    msg.value = 155U;

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
    msg.setTimeStamp(0.8657712315873706);
    msg.setSource(23975U);
    msg.setSourceEntity(225U);
    msg.setDestination(16406U);
    msg.setDestinationEntity(128U);
    msg.op = 113U;
    msg.text.assign("UAMBRCKVQECIWUCJPHFSWWTAFZDNYZGIKOISRNUWXEFEXRYXHEVQKQPFDKVUKGJNISXPCKARVBBQMNHJ");

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
    msg.setTimeStamp(0.3482793178287025);
    msg.setSource(29629U);
    msg.setSourceEntity(98U);
    msg.setDestination(51955U);
    msg.setDestinationEntity(31U);
    msg.op = 73U;
    msg.text.assign("PLOZCOJSGOWVONTIMDYZUFBHDRBOJDJMBESLAGOUHPTXTJKZFF");

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
    msg.setTimeStamp(0.942134546643349);
    msg.setSource(9452U);
    msg.setSourceEntity(9U);
    msg.setDestination(51111U);
    msg.setDestinationEntity(85U);
    msg.op = 101U;
    msg.text.assign("XKVPDTZKRHUAVTIXDKEYPERPWLNHXQPIBABYYWJUJPWGFENNTDOIKCMFGYPJMNHNEEVCBXOZQVCPUQWFHOSDSAZMXXGBYOWMAWHYZYZACKQANESFQBJZW");

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
    msg.setTimeStamp(0.3993039923836198);
    msg.setSource(25865U);
    msg.setSourceEntity(232U);
    msg.setDestination(60262U);
    msg.setDestinationEntity(111U);
    msg.op = 68U;
    msg.time_remain = 0.9681879407548094;
    msg.sched_time = 0.7457221932321684;

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
    msg.setTimeStamp(0.9299720059057444);
    msg.setSource(54434U);
    msg.setSourceEntity(151U);
    msg.setDestination(28138U);
    msg.setDestinationEntity(251U);
    msg.op = 5U;
    msg.time_remain = 0.20613933666560502;
    msg.sched_time = 0.7946576330121949;

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
    msg.setTimeStamp(0.5638712581763933);
    msg.setSource(28574U);
    msg.setSourceEntity(16U);
    msg.setDestination(12467U);
    msg.setDestinationEntity(29U);
    msg.op = 78U;
    msg.time_remain = 0.3638117776423714;
    msg.sched_time = 0.09322905646377977;

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
    msg.setTimeStamp(0.2575250765021915);
    msg.setSource(64722U);
    msg.setSourceEntity(107U);
    msg.setDestination(59273U);
    msg.setDestinationEntity(26U);
    msg.name.assign("PKBBBVMDJNUKJUEFVTASOQWZZKNYZSHAYBDNOWGQEFQLEXLETCAKWNRKASYOBRCKSYYOHYHRGVDOIKPCFCDREEMBKTNYPCDVRWQ");
    msg.op = 223U;
    msg.sched_time = 0.9817769670725437;

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
    msg.setTimeStamp(0.10196094615537665);
    msg.setSource(49674U);
    msg.setSourceEntity(224U);
    msg.setDestination(19652U);
    msg.setDestinationEntity(188U);
    msg.name.assign("QFPQNECOANXBSPYYCMMMAAGFBFDJILXZNQOVUKYXSQOFLYSHCIJPJEQTUICKAOQTMLJFGCBWVBZHNRUOXDKVRICFTXNBZKBASFHGBMSGTYTAYKLLMUEDUPSGHDCITXFOOWTAOAHPYWWAVUMNHJXENKVYQHHZISJTRHNPVTRWBAOYDUVEWSDKGEIZPWPRDOKTQRKJNVSLVYEDGCZCVMQW");
    msg.op = 186U;
    msg.sched_time = 0.39530187213442514;

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
    msg.setTimeStamp(0.2025036496756486);
    msg.setSource(48346U);
    msg.setSourceEntity(239U);
    msg.setDestination(39936U);
    msg.setDestinationEntity(178U);
    msg.name.assign("GXQIUKAUWH");
    msg.op = 62U;
    msg.sched_time = 0.17181972829309433;

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
    msg.setTimeStamp(0.1210475713967114);
    msg.setSource(34898U);
    msg.setSourceEntity(136U);
    msg.setDestination(11414U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.6461322611876753);
    msg.setSource(58638U);
    msg.setSourceEntity(41U);
    msg.setDestination(15256U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.8434673348096661);
    msg.setSource(23198U);
    msg.setSourceEntity(235U);
    msg.setDestination(5110U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.37478862241972855);
    msg.setSource(58494U);
    msg.setSourceEntity(205U);
    msg.setDestination(38445U);
    msg.setDestinationEntity(151U);
    msg.name.assign("RPNLWFVSYLGMAURNAFDONNBVZFTVGUJOIZSDWGKBOFBRVAQITMCHPKJMZUCEJGHUQDDNJQVLBISYLAXQHQXCNABBNZCOZSRFHAJJXKMKMYCDOHIZZMOKTPCDLIUJSXUDRMARETGYAGEYHBVJVTALHLK");
    msg.state = 90U;

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
    msg.setTimeStamp(0.4381543070349786);
    msg.setSource(41216U);
    msg.setSourceEntity(180U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(168U);
    msg.name.assign("RKAPBUWVNSCTCEHYDASBHAKTWZSTOUUUGPELMGZXPIIZXEZNSXOTODOQYRDBGDLACIZJHEDWEUQCEDGWKMRYLTJNFKIJRCVUUORHLMMJVZVVFCBNCLSVGUPQRAPEJDILNSYHKBAZACFXEVCMNFMFGZKYXBDGLPBQRBYHUMBDAYWRENDGJYQTOFRMJYGVIXLKPHIOSUXQJWAHV");
    msg.state = 159U;

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
    msg.setTimeStamp(0.4576131384203266);
    msg.setSource(34659U);
    msg.setSourceEntity(138U);
    msg.setDestination(11395U);
    msg.setDestinationEntity(159U);
    msg.name.assign("AWPIZOFMPVUAQDXDFMQGVNESGHJLOMUVHXDDPYCGEJ");
    msg.state = 232U;

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
    msg.setTimeStamp(0.37712014243083825);
    msg.setSource(54474U);
    msg.setSourceEntity(177U);
    msg.setDestination(49141U);
    msg.setDestinationEntity(100U);
    msg.name.assign("SMXTJUXRKCYZMSELQTICIFBWANREBEZIYWGRVBZQPVSGFAOSYKTHJGFGTYDMKMFKJQJDKJLQXTZUEXF");
    msg.value = 109U;

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
    msg.setTimeStamp(0.9752127990119297);
    msg.setSource(31294U);
    msg.setSourceEntity(50U);
    msg.setDestination(35166U);
    msg.setDestinationEntity(50U);
    msg.name.assign("CPORMLDOBCECGCRVZQFKALBBYVJJOORIXYVVCZMOTLLKABKXRGGHIEIJWTQVPDQOBWGJBSZWTQMTHFTZPAYRY");
    msg.value = 63U;

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
    msg.setTimeStamp(0.26035825267476354);
    msg.setSource(53814U);
    msg.setSourceEntity(169U);
    msg.setDestination(55210U);
    msg.setDestinationEntity(106U);
    msg.name.assign("VERXYIHRMFIUYXXECPTJGSAYWGPUCHHDLSDZOCSISMOOAEGMWUVZQJVTVXHNJHRWXIQNKFWBKFNSCUYXWCHBFMWZWNCEIEUMHGPNTQTYEK");
    msg.value = 233U;

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
    msg.setTimeStamp(0.3066649157763106);
    msg.setSource(19321U);
    msg.setSourceEntity(20U);
    msg.setDestination(33397U);
    msg.setDestinationEntity(172U);
    msg.name.assign("QUHRLDQVJWOXJDVMWERLNRAPYIOAKVGPEZYKXWTXHWDLOUVFLQPSKCVSKRZQHZWGLRCBIDBSNUZANPKHQGZTKEYRBFZRWFKYPEWQKLFFZJCKHYTMEGSGZVNCBBJXWJIQJCNAYUCYGAUREBCAXPOGIOMJDPITOHFNYXEGEBXSOUXADMTZXBNDIIFMZRIFSVSAEDFHNJPFOOJMLMRT");

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
    msg.setTimeStamp(0.48412875735931904);
    msg.setSource(30376U);
    msg.setSourceEntity(67U);
    msg.setDestination(14857U);
    msg.setDestinationEntity(51U);
    msg.name.assign("GRCOOLJTPCNVO");

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
    msg.setTimeStamp(0.839765630828675);
    msg.setSource(6337U);
    msg.setSourceEntity(105U);
    msg.setDestination(33981U);
    msg.setDestinationEntity(240U);
    msg.name.assign("HHKFJWANPSRFTSIDBPYEYSMQNSQAIKUZEAQHMBJHPZDRAUOOYEJNCJBLEKCROMKOZQEMSFEUWIMWKZOTWJGBTVYJXTVNPTFBWWOLIXHUDACSZNTUOLIEBLMYGKQPFAWEZCQDFKTBNMGXKUYVSMZZELOMUNXG");

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
    msg.setTimeStamp(0.089276543504062);
    msg.setSource(17131U);
    msg.setSourceEntity(166U);
    msg.setDestination(37116U);
    msg.setDestinationEntity(235U);
    msg.name.assign("VPJBVJHAMSOFCCKBSBHWDWFPCWBVWMZYVKFJAQSPONALYZRBUDEBWFYRRBFA");
    msg.value = 127U;

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
    msg.setTimeStamp(0.006676822116076009);
    msg.setSource(44958U);
    msg.setSourceEntity(216U);
    msg.setDestination(25679U);
    msg.setDestinationEntity(4U);
    msg.name.assign("CXHOKUYIHUPPFXZHSNNGRNMJGITNHYAJGLXPWTHLJHIBBPRCGWOWVXBZCLGMRJWESKRDUTGOEDZZLFSKNOYLRAEBOCNQZSOMXVWCEIGPFRERBUTICJBDIMQTLEAUSGKJQVYUWEVQD");
    msg.value = 245U;

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
    msg.setTimeStamp(0.4295078374966662);
    msg.setSource(15848U);
    msg.setSourceEntity(54U);
    msg.setDestination(26375U);
    msg.setDestinationEntity(202U);
    msg.name.assign("WXTGUYNBWJCMDWNNSTHSYRPIRQSJUHDIMQHKPZWPRQRWZSHXWYMNCIFEIRTOVXJDHFFNRVTCFVEAZRLKJODIFGOMRFQULYJZPYBBLHGSAOALXSPCCKVWPNDFQQXIYLESUGZIKZLBMMCOUELKFCGVYINXTOYZMGSZXPAKQGIBNDWXZOEMQENTPDRBLVTEAHIBOAWAKKVBSNCFGTAUXJSZMAYUCKA");
    msg.value = 169U;

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
    msg.setTimeStamp(0.17041740821112317);
    msg.setSource(18282U);
    msg.setSourceEntity(84U);
    msg.setDestination(47400U);
    msg.setDestinationEntity(152U);
    msg.id = 160U;
    msg.period = 924555591U;
    msg.duty_cycle = 4277526622U;

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
    msg.setTimeStamp(0.5692687333328252);
    msg.setSource(54942U);
    msg.setSourceEntity(121U);
    msg.setDestination(2691U);
    msg.setDestinationEntity(187U);
    msg.id = 184U;
    msg.period = 2149452565U;
    msg.duty_cycle = 1477571605U;

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
    msg.setTimeStamp(0.9331129313782789);
    msg.setSource(31113U);
    msg.setSourceEntity(49U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(41U);
    msg.id = 120U;
    msg.period = 2893751277U;
    msg.duty_cycle = 368037331U;

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
    msg.setTimeStamp(0.5411364170191058);
    msg.setSource(61009U);
    msg.setSourceEntity(60U);
    msg.setDestination(10866U);
    msg.setDestinationEntity(68U);
    msg.id = 174U;
    msg.period = 2045301631U;
    msg.duty_cycle = 1021744364U;

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
    msg.setTimeStamp(0.6007832199404982);
    msg.setSource(31686U);
    msg.setSourceEntity(43U);
    msg.setDestination(2166U);
    msg.setDestinationEntity(48U);
    msg.id = 19U;
    msg.period = 1391105192U;
    msg.duty_cycle = 3584609310U;

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
    msg.setTimeStamp(0.22904687244072375);
    msg.setSource(19645U);
    msg.setSourceEntity(139U);
    msg.setDestination(41723U);
    msg.setDestinationEntity(174U);
    msg.id = 68U;
    msg.period = 3544031759U;
    msg.duty_cycle = 3517693328U;

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
    msg.setTimeStamp(0.5141391699989224);
    msg.setSource(7828U);
    msg.setSourceEntity(197U);
    msg.setDestination(47935U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.5892164928063323;
    msg.lon = 0.9575609902463146;
    msg.height = 0.2422986560308964;
    msg.x = 0.1346102608767934;
    msg.y = 0.7943551635690572;
    msg.z = 0.4247092031916091;
    msg.phi = 0.20938921478872785;
    msg.theta = 0.1522590883198236;
    msg.psi = 0.08736337652680626;
    msg.u = 0.2643342027158361;
    msg.v = 0.8875012964517555;
    msg.w = 0.1914484102495544;
    msg.vx = 0.4584536535846384;
    msg.vy = 0.6447614353732404;
    msg.vz = 0.9292635344400754;
    msg.p = 0.4611699213240228;
    msg.q = 0.4172604558023728;
    msg.r = 0.6684700512123278;
    msg.depth = 0.45102471770545827;
    msg.alt = 0.015272466372597271;

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
    msg.setTimeStamp(0.8988376487278323);
    msg.setSource(10188U);
    msg.setSourceEntity(77U);
    msg.setDestination(44478U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.3481905921260344;
    msg.lon = 0.25453772410588427;
    msg.height = 0.36195359483141976;
    msg.x = 0.46525462188220357;
    msg.y = 0.15947846025448342;
    msg.z = 0.7169018441979257;
    msg.phi = 0.04664598247336016;
    msg.theta = 0.08458888825620114;
    msg.psi = 0.7699150196534436;
    msg.u = 0.5995994658477481;
    msg.v = 0.9500420300719099;
    msg.w = 0.7766401810040839;
    msg.vx = 0.7180546041122216;
    msg.vy = 0.9270867304604062;
    msg.vz = 0.9484087306015538;
    msg.p = 0.2808543583428138;
    msg.q = 0.7497775897411181;
    msg.r = 0.05512709864232457;
    msg.depth = 0.2990734510691163;
    msg.alt = 0.4465149051561693;

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
    msg.setTimeStamp(0.026497065030578804);
    msg.setSource(25468U);
    msg.setSourceEntity(100U);
    msg.setDestination(8773U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.04884823101788238;
    msg.lon = 0.5803900507590722;
    msg.height = 0.6814028149396518;
    msg.x = 0.4138648407125577;
    msg.y = 0.11215314498364737;
    msg.z = 0.12263645346007213;
    msg.phi = 0.7807326246094544;
    msg.theta = 0.6893055880613441;
    msg.psi = 0.6817939932176162;
    msg.u = 0.02986165298159993;
    msg.v = 0.005496713745431703;
    msg.w = 0.8731533873379906;
    msg.vx = 0.21784113266516358;
    msg.vy = 0.8253376557055053;
    msg.vz = 0.8324429036159497;
    msg.p = 0.39641698966184613;
    msg.q = 0.38622900680118477;
    msg.r = 0.11288965221379688;
    msg.depth = 0.336852773053656;
    msg.alt = 0.5732016394178652;

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
    msg.setTimeStamp(0.22374063696136692);
    msg.setSource(17132U);
    msg.setSourceEntity(107U);
    msg.setDestination(36468U);
    msg.setDestinationEntity(237U);
    msg.x = 0.37470031438608387;
    msg.y = 0.11035709058253229;
    msg.z = 0.306957306767739;

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
    msg.setTimeStamp(0.554257977049005);
    msg.setSource(29668U);
    msg.setSourceEntity(72U);
    msg.setDestination(43331U);
    msg.setDestinationEntity(164U);
    msg.x = 0.663529160231793;
    msg.y = 0.8043950931747434;
    msg.z = 0.3130883548033446;

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
    msg.setTimeStamp(0.4335600801030808);
    msg.setSource(47909U);
    msg.setSourceEntity(231U);
    msg.setDestination(26798U);
    msg.setDestinationEntity(124U);
    msg.x = 0.3769018552435339;
    msg.y = 0.03901500969867788;
    msg.z = 0.3747098118709913;

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
    msg.setTimeStamp(0.6568916572420401);
    msg.setSource(45548U);
    msg.setSourceEntity(218U);
    msg.setDestination(40778U);
    msg.setDestinationEntity(169U);
    msg.value = 0.3584663015545628;

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
    msg.setTimeStamp(0.2167973949020614);
    msg.setSource(11516U);
    msg.setSourceEntity(42U);
    msg.setDestination(28632U);
    msg.setDestinationEntity(2U);
    msg.value = 0.5068906491004225;

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
    msg.setTimeStamp(0.9249385281250901);
    msg.setSource(55676U);
    msg.setSourceEntity(79U);
    msg.setDestination(12090U);
    msg.setDestinationEntity(21U);
    msg.value = 0.814324364818057;

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
    msg.setTimeStamp(0.12166001209602084);
    msg.setSource(18006U);
    msg.setSourceEntity(174U);
    msg.setDestination(28399U);
    msg.setDestinationEntity(14U);
    msg.value = 0.6882755651970371;

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
    msg.setTimeStamp(0.9166161067218196);
    msg.setSource(41113U);
    msg.setSourceEntity(224U);
    msg.setDestination(23539U);
    msg.setDestinationEntity(146U);
    msg.value = 0.25295874494723347;

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
    msg.setTimeStamp(0.3857976499348843);
    msg.setSource(36435U);
    msg.setSourceEntity(35U);
    msg.setDestination(896U);
    msg.setDestinationEntity(193U);
    msg.value = 0.811853445988619;

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
    msg.setTimeStamp(0.4177415913063377);
    msg.setSource(10201U);
    msg.setSourceEntity(113U);
    msg.setDestination(10709U);
    msg.setDestinationEntity(222U);
    msg.x = 0.1365295257389032;
    msg.y = 0.0166326584250005;
    msg.z = 0.9950866084909947;
    msg.phi = 0.0035080843433761277;
    msg.theta = 0.8408426952458069;
    msg.psi = 0.8009819939190567;
    msg.p = 0.14315371618489303;
    msg.q = 0.3173951869782876;
    msg.r = 0.30570018638210295;
    msg.u = 0.2988987219524687;
    msg.v = 0.002306377770258883;
    msg.w = 0.7017340752475059;
    msg.bias_psi = 0.9823917891089355;
    msg.bias_r = 0.4274844534928658;

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
    msg.setTimeStamp(0.0738973167241469);
    msg.setSource(52940U);
    msg.setSourceEntity(98U);
    msg.setDestination(15992U);
    msg.setDestinationEntity(208U);
    msg.x = 0.710200483631511;
    msg.y = 0.4558049888990484;
    msg.z = 0.7229144733547834;
    msg.phi = 0.2436412227400524;
    msg.theta = 0.9092614215559917;
    msg.psi = 0.7820409339820884;
    msg.p = 0.1872440377053708;
    msg.q = 0.7184780801742613;
    msg.r = 0.3812684131033207;
    msg.u = 0.8718178320690257;
    msg.v = 0.7942830114598105;
    msg.w = 0.4932637928034601;
    msg.bias_psi = 0.3543152943905533;
    msg.bias_r = 0.8324963191393938;

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
    msg.setTimeStamp(0.2029237920819924);
    msg.setSource(9426U);
    msg.setSourceEntity(23U);
    msg.setDestination(23842U);
    msg.setDestinationEntity(168U);
    msg.x = 0.49660280594645156;
    msg.y = 0.7037274731842869;
    msg.z = 0.45905303114011;
    msg.phi = 0.13084437727433407;
    msg.theta = 0.6691538340789639;
    msg.psi = 0.8751499018135213;
    msg.p = 0.3582823627343221;
    msg.q = 0.5895302987201967;
    msg.r = 0.5570232320885865;
    msg.u = 0.17150386740950363;
    msg.v = 0.8624773341526311;
    msg.w = 0.24871835858928082;
    msg.bias_psi = 0.4764175203484644;
    msg.bias_r = 0.4588023508807706;

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
    msg.setTimeStamp(0.29458862840907973);
    msg.setSource(18597U);
    msg.setSourceEntity(111U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(67U);
    msg.bias_psi = 0.42961980312353765;
    msg.bias_r = 0.549762322490157;
    msg.cog = 0.7425640367352396;
    msg.cyaw = 0.49589764578504236;
    msg.lbl_rej_level = 0.22179467684447218;
    msg.gps_rej_level = 0.7902662079331989;
    msg.custom_x = 0.36347939626240433;
    msg.custom_y = 0.37275252995299035;
    msg.custom_z = 0.07445351972299863;

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
    msg.setTimeStamp(0.7536900475885251);
    msg.setSource(2126U);
    msg.setSourceEntity(205U);
    msg.setDestination(29846U);
    msg.setDestinationEntity(88U);
    msg.bias_psi = 0.02302303375276704;
    msg.bias_r = 0.8187399458628535;
    msg.cog = 0.8021178494822597;
    msg.cyaw = 0.6671509935724567;
    msg.lbl_rej_level = 0.3390129042317028;
    msg.gps_rej_level = 0.22336614957804746;
    msg.custom_x = 0.7903601120822966;
    msg.custom_y = 0.8400223168979903;
    msg.custom_z = 0.8764336834121661;

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
    msg.setTimeStamp(0.11284050052512418);
    msg.setSource(8224U);
    msg.setSourceEntity(66U);
    msg.setDestination(30985U);
    msg.setDestinationEntity(231U);
    msg.bias_psi = 0.2586099669972446;
    msg.bias_r = 0.43947106463996044;
    msg.cog = 0.9376217559094235;
    msg.cyaw = 0.24871676698428158;
    msg.lbl_rej_level = 0.43418693318595303;
    msg.gps_rej_level = 0.8008429993680497;
    msg.custom_x = 0.19395797152961414;
    msg.custom_y = 0.2014990025649459;
    msg.custom_z = 0.43270858425319025;

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
    msg.setTimeStamp(0.3392625689293405);
    msg.setSource(57069U);
    msg.setSourceEntity(52U);
    msg.setDestination(43332U);
    msg.setDestinationEntity(195U);
    msg.utc_time = 0.7580325102475834;
    msg.reason = 132U;

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
    msg.setTimeStamp(0.8525042927123876);
    msg.setSource(7542U);
    msg.setSourceEntity(223U);
    msg.setDestination(23242U);
    msg.setDestinationEntity(39U);
    msg.utc_time = 0.394920945995908;
    msg.reason = 196U;

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
    msg.setTimeStamp(0.9144749018970671);
    msg.setSource(49047U);
    msg.setSourceEntity(252U);
    msg.setDestination(1317U);
    msg.setDestinationEntity(164U);
    msg.utc_time = 0.1735811099323441;
    msg.reason = 165U;

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
    msg.setTimeStamp(0.5854163042837295);
    msg.setSource(26258U);
    msg.setSourceEntity(105U);
    msg.setDestination(40765U);
    msg.setDestinationEntity(216U);
    msg.id = 73U;
    msg.range = 0.9501802880849834;
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
    msg.setTimeStamp(0.0007355336562990811);
    msg.setSource(23501U);
    msg.setSourceEntity(44U);
    msg.setDestination(65465U);
    msg.setDestinationEntity(238U);
    msg.id = 63U;
    msg.range = 0.36157391955035534;
    msg.acceptance = 10U;

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
    msg.setTimeStamp(0.6553666715725427);
    msg.setSource(31413U);
    msg.setSourceEntity(229U);
    msg.setDestination(45569U);
    msg.setDestinationEntity(67U);
    msg.id = 96U;
    msg.range = 0.13841377075288397;
    msg.acceptance = 58U;

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
    msg.setTimeStamp(0.9782466324855104);
    msg.setSource(40618U);
    msg.setSourceEntity(245U);
    msg.setDestination(38987U);
    msg.setDestinationEntity(175U);
    msg.type = 88U;
    msg.reason = 217U;
    msg.value = 0.1528681278004188;
    msg.timestep = 0.666739233236684;

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
    msg.setTimeStamp(0.45196676079463227);
    msg.setSource(1824U);
    msg.setSourceEntity(73U);
    msg.setDestination(7291U);
    msg.setDestinationEntity(96U);
    msg.type = 81U;
    msg.reason = 207U;
    msg.value = 0.9971774982384647;
    msg.timestep = 0.06952546208261112;

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
    msg.setTimeStamp(0.6573458031062286);
    msg.setSource(29702U);
    msg.setSourceEntity(4U);
    msg.setDestination(21140U);
    msg.setDestinationEntity(239U);
    msg.type = 243U;
    msg.reason = 174U;
    msg.value = 0.502531793388963;
    msg.timestep = 0.8879392821643934;

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
    msg.setTimeStamp(0.02473785518213989);
    msg.setSource(48400U);
    msg.setSourceEntity(194U);
    msg.setDestination(53550U);
    msg.setDestinationEntity(12U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EEZFJZZPISWECWIYFVUNA");
    tmp_msg_0.lat = 0.6416368678278116;
    tmp_msg_0.lon = 0.5415640708917366;
    tmp_msg_0.depth = 0.10368481136285479;
    tmp_msg_0.query_channel = 95U;
    tmp_msg_0.reply_channel = 99U;
    tmp_msg_0.transponder_delay = 183U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.15360067878252226;
    msg.y = 0.1167351084801792;
    msg.var_x = 0.10365448942946309;
    msg.var_y = 0.579750604261905;
    msg.distance = 0.21434476466718377;

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
    msg.setTimeStamp(0.34360858093983104);
    msg.setSource(25125U);
    msg.setSourceEntity(15U);
    msg.setDestination(52893U);
    msg.setDestinationEntity(19U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SDQTTEFUXAGPCORHBXXASNPNHUZGAJVLPCRPIQFWVWBOKVKLZMMTJBENTOJOKGJSFJHMFJRZBPYUYQWGSXZYWYYDFFDNJGTRUBNIMLUYVLHAEHBTZRJEPIEKPYSDLTMJSVVLBRIBQCK");
    tmp_msg_0.lat = 0.447688941184757;
    tmp_msg_0.lon = 0.7116018110632658;
    tmp_msg_0.depth = 0.28886219486874454;
    tmp_msg_0.query_channel = 60U;
    tmp_msg_0.reply_channel = 53U;
    tmp_msg_0.transponder_delay = 201U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.10738190163848615;
    msg.y = 0.00046120924429282617;
    msg.var_x = 0.4145503658229639;
    msg.var_y = 0.4569769585659643;
    msg.distance = 0.09464754292836386;

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
    msg.setTimeStamp(0.35215334076969806);
    msg.setSource(12484U);
    msg.setSourceEntity(5U);
    msg.setDestination(53697U);
    msg.setDestinationEntity(180U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IDRNHPWJUEGZLYZWYQAMBWNMCQNQZTRYYZIYTYYPIHOUWUEEDZGTHKWURFWLAMLLNCIOTLBUGFPOUFXCTAGRHWNEISUNJNBCVKBJZPCLHICKLCDQOHBKFXUSPKTBQVFVGXAEBSQGFVAATRIIUFFCESVRTLOZRKSHLXKMOSZPQFTRNJORMWVMBFBKVYUICJPPNHBJS");
    tmp_msg_0.lat = 0.4641115176167181;
    tmp_msg_0.lon = 0.5114301621627294;
    tmp_msg_0.depth = 0.02364985656212082;
    tmp_msg_0.query_channel = 230U;
    tmp_msg_0.reply_channel = 251U;
    tmp_msg_0.transponder_delay = 191U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6338271336292616;
    msg.y = 0.9799899626863937;
    msg.var_x = 0.25109926288776574;
    msg.var_y = 0.9757708453119084;
    msg.distance = 0.3329196518119589;

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
    msg.setTimeStamp(0.1265120828620584);
    msg.setSource(13181U);
    msg.setSourceEntity(150U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(44U);
    msg.state = 201U;

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
    msg.setTimeStamp(0.8394040079086165);
    msg.setSource(1818U);
    msg.setSourceEntity(94U);
    msg.setDestination(64341U);
    msg.setDestinationEntity(128U);
    msg.state = 70U;

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
    msg.setTimeStamp(0.09459175937185482);
    msg.setSource(46871U);
    msg.setSourceEntity(223U);
    msg.setDestination(38324U);
    msg.setDestinationEntity(70U);
    msg.state = 10U;

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
    msg.setTimeStamp(0.2445176428700513);
    msg.setSource(64233U);
    msg.setSourceEntity(107U);
    msg.setDestination(56137U);
    msg.setDestinationEntity(168U);
    msg.x = 0.8206156820503634;
    msg.y = 0.5738950082429086;
    msg.z = 0.35914643950528236;

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
    msg.setTimeStamp(0.24315837606437274);
    msg.setSource(13966U);
    msg.setSourceEntity(7U);
    msg.setDestination(39073U);
    msg.setDestinationEntity(87U);
    msg.x = 0.8022862127960662;
    msg.y = 0.5491660148218555;
    msg.z = 0.1888041628945505;

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
    msg.setTimeStamp(0.668878086475792);
    msg.setSource(22995U);
    msg.setSourceEntity(113U);
    msg.setDestination(64039U);
    msg.setDestinationEntity(55U);
    msg.x = 0.4016237912082605;
    msg.y = 0.6324228115839844;
    msg.z = 0.04861783875750503;

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
    msg.setTimeStamp(0.4378489698599871);
    msg.setSource(40189U);
    msg.setSourceEntity(247U);
    msg.setDestination(26175U);
    msg.setDestinationEntity(127U);
    msg.va = 0.1555175834359287;
    msg.aoa = 0.03592619026576893;
    msg.ssa = 0.9088478220688373;

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
    msg.setTimeStamp(0.6881221572904643);
    msg.setSource(38561U);
    msg.setSourceEntity(22U);
    msg.setDestination(32267U);
    msg.setDestinationEntity(131U);
    msg.va = 0.5272248717861395;
    msg.aoa = 0.3285220333321799;
    msg.ssa = 0.8196770239955459;

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
    msg.setTimeStamp(0.04384077704404843);
    msg.setSource(5939U);
    msg.setSourceEntity(241U);
    msg.setDestination(18034U);
    msg.setDestinationEntity(193U);
    msg.va = 0.05983524064388612;
    msg.aoa = 0.513080817029902;
    msg.ssa = 0.7659844432453566;

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
    msg.setTimeStamp(0.21863647357600424);
    msg.setSource(1271U);
    msg.setSourceEntity(177U);
    msg.setDestination(47600U);
    msg.setDestinationEntity(73U);
    msg.value = 0.41014920913858965;

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
    msg.setTimeStamp(0.4208367955724521);
    msg.setSource(31523U);
    msg.setSourceEntity(149U);
    msg.setDestination(24565U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7236681983549682;

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
    msg.setTimeStamp(0.3813731726476698);
    msg.setSource(20051U);
    msg.setSourceEntity(75U);
    msg.setDestination(23299U);
    msg.setDestinationEntity(26U);
    msg.value = 0.4002218069226686;

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
    msg.setTimeStamp(0.087311641473383);
    msg.setSource(51545U);
    msg.setSourceEntity(99U);
    msg.setDestination(17414U);
    msg.setDestinationEntity(133U);
    msg.value = 0.34333122215022416;
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
    msg.setTimeStamp(0.3543309732721863);
    msg.setSource(53170U);
    msg.setSourceEntity(121U);
    msg.setDestination(65083U);
    msg.setDestinationEntity(8U);
    msg.value = 0.5943140535611993;
    msg.z_units = 110U;

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
    msg.setTimeStamp(0.35909963256887856);
    msg.setSource(5780U);
    msg.setSourceEntity(116U);
    msg.setDestination(59505U);
    msg.setDestinationEntity(142U);
    msg.value = 0.676553734186388;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.6857212109613767);
    msg.setSource(27837U);
    msg.setSourceEntity(188U);
    msg.setDestination(46888U);
    msg.setDestinationEntity(20U);
    msg.value = 0.5516654823080807;
    msg.speed_units = 66U;

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
    msg.setTimeStamp(0.6442146991748234);
    msg.setSource(14198U);
    msg.setSourceEntity(154U);
    msg.setDestination(6757U);
    msg.setDestinationEntity(192U);
    msg.value = 0.10790504079460894;
    msg.speed_units = 194U;

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
    msg.setTimeStamp(0.8279325499653336);
    msg.setSource(5730U);
    msg.setSourceEntity(222U);
    msg.setDestination(6935U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8541023520863421;
    msg.speed_units = 100U;

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
    msg.setTimeStamp(0.05031673806631809);
    msg.setSource(37360U);
    msg.setSourceEntity(62U);
    msg.setDestination(58837U);
    msg.setDestinationEntity(129U);
    msg.value = 0.13183006770529493;

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
    msg.setTimeStamp(0.36089116455219883);
    msg.setSource(52967U);
    msg.setSourceEntity(91U);
    msg.setDestination(63583U);
    msg.setDestinationEntity(94U);
    msg.value = 0.87107663263048;

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
    msg.setTimeStamp(0.138673673773131);
    msg.setSource(43449U);
    msg.setSourceEntity(202U);
    msg.setDestination(2996U);
    msg.setDestinationEntity(17U);
    msg.value = 0.44631239853664306;

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
    msg.setTimeStamp(0.4001020255218737);
    msg.setSource(27814U);
    msg.setSourceEntity(10U);
    msg.setDestination(29572U);
    msg.setDestinationEntity(187U);
    msg.value = 0.577172753648155;

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
    msg.setTimeStamp(0.21742528157823615);
    msg.setSource(12507U);
    msg.setSourceEntity(253U);
    msg.setDestination(3302U);
    msg.setDestinationEntity(253U);
    msg.value = 0.04473619010979435;

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
    msg.setTimeStamp(0.493864708274801);
    msg.setSource(13943U);
    msg.setSourceEntity(84U);
    msg.setDestination(2359U);
    msg.setDestinationEntity(42U);
    msg.value = 0.7700807524254041;

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
    msg.setTimeStamp(0.8424180884494568);
    msg.setSource(15944U);
    msg.setSourceEntity(112U);
    msg.setDestination(53717U);
    msg.setDestinationEntity(188U);
    msg.value = 0.1199763624078124;

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
    msg.setTimeStamp(0.24665791698943318);
    msg.setSource(34799U);
    msg.setSourceEntity(141U);
    msg.setDestination(43475U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8501753345996594;

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
    msg.setTimeStamp(0.0928406912217753);
    msg.setSource(61138U);
    msg.setSourceEntity(185U);
    msg.setDestination(52082U);
    msg.setDestinationEntity(62U);
    msg.value = 0.1883157797193057;

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
    msg.setTimeStamp(0.23311748113074005);
    msg.setSource(5553U);
    msg.setSourceEntity(117U);
    msg.setDestination(45950U);
    msg.setDestinationEntity(113U);
    msg.path_ref = 4002886990U;
    msg.start_lat = 0.0727477299231516;
    msg.start_lon = 0.9442564375466669;
    msg.start_z = 0.24264668230651865;
    msg.start_z_units = 62U;
    msg.end_lat = 0.7852469081885658;
    msg.end_lon = 0.6574551396307946;
    msg.end_z = 0.7849578925786144;
    msg.end_z_units = 135U;
    msg.speed = 0.36059431024199484;
    msg.speed_units = 193U;
    msg.lradius = 0.8077840119328831;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.5272458725041649);
    msg.setSource(45178U);
    msg.setSourceEntity(206U);
    msg.setDestination(62526U);
    msg.setDestinationEntity(233U);
    msg.path_ref = 684479074U;
    msg.start_lat = 0.12385953718712805;
    msg.start_lon = 0.08083978686930016;
    msg.start_z = 0.4999226377041768;
    msg.start_z_units = 81U;
    msg.end_lat = 0.36012544953552816;
    msg.end_lon = 0.29968357711904114;
    msg.end_z = 0.5580848314663639;
    msg.end_z_units = 253U;
    msg.speed = 0.8197731191701544;
    msg.speed_units = 64U;
    msg.lradius = 0.631201897569265;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.5503353972077591);
    msg.setSource(2581U);
    msg.setSourceEntity(70U);
    msg.setDestination(33207U);
    msg.setDestinationEntity(241U);
    msg.path_ref = 475002187U;
    msg.start_lat = 0.3612605087694378;
    msg.start_lon = 0.06998255122897534;
    msg.start_z = 0.5493166741873179;
    msg.start_z_units = 46U;
    msg.end_lat = 0.9205049150339092;
    msg.end_lon = 0.7324648656668471;
    msg.end_z = 0.18070531212069452;
    msg.end_z_units = 62U;
    msg.speed = 0.8666229927270105;
    msg.speed_units = 74U;
    msg.lradius = 0.18318659517239644;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.26644483500450267);
    msg.setSource(11437U);
    msg.setSourceEntity(177U);
    msg.setDestination(11713U);
    msg.setDestinationEntity(104U);
    msg.x = 0.8678300048383293;
    msg.y = 0.3168135334477403;
    msg.z = 0.5990267160936465;
    msg.k = 0.10947527591507189;
    msg.m = 0.656683374757673;
    msg.n = 0.1543231894371645;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.9020532031601778);
    msg.setSource(40116U);
    msg.setSourceEntity(168U);
    msg.setDestination(12165U);
    msg.setDestinationEntity(101U);
    msg.x = 0.45766992304987464;
    msg.y = 0.9425994052146675;
    msg.z = 0.5340862389769642;
    msg.k = 0.3613612697884615;
    msg.m = 0.4963036827121038;
    msg.n = 0.3964590823379057;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.3868659856092551);
    msg.setSource(34435U);
    msg.setSourceEntity(33U);
    msg.setDestination(60389U);
    msg.setDestinationEntity(173U);
    msg.x = 0.9399193863737156;
    msg.y = 0.8216180696062885;
    msg.z = 0.05490589718715655;
    msg.k = 0.9527138190522956;
    msg.m = 0.7021205994308432;
    msg.n = 0.7752608178223257;
    msg.flags = 45U;

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
    msg.setTimeStamp(0.9415805933931346);
    msg.setSource(7946U);
    msg.setSourceEntity(11U);
    msg.setDestination(25502U);
    msg.setDestinationEntity(88U);
    msg.value = 0.40351422028927864;

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
    msg.setTimeStamp(0.41523259009965907);
    msg.setSource(21945U);
    msg.setSourceEntity(94U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(183U);
    msg.value = 0.5014296152170651;

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
    msg.setTimeStamp(0.3591203426102114);
    msg.setSource(6196U);
    msg.setSourceEntity(247U);
    msg.setDestination(53247U);
    msg.setDestinationEntity(90U);
    msg.value = 0.1069849429763795;

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
    msg.setTimeStamp(0.2611816236778668);
    msg.setSource(8276U);
    msg.setSourceEntity(188U);
    msg.setDestination(33422U);
    msg.setDestinationEntity(74U);
    msg.u = 0.12670798786108584;
    msg.v = 0.6133561542863903;
    msg.w = 0.2728080786631255;
    msg.p = 0.5886803582672302;
    msg.q = 0.3477354208242487;
    msg.r = 0.36750807650896233;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.9685086404221619);
    msg.setSource(14138U);
    msg.setSourceEntity(142U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(113U);
    msg.u = 0.6182938098886946;
    msg.v = 0.279464261484886;
    msg.w = 0.5292438960341541;
    msg.p = 0.2394392534181018;
    msg.q = 0.607225183069611;
    msg.r = 0.09453467726816422;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.5661872270377768);
    msg.setSource(20809U);
    msg.setSourceEntity(37U);
    msg.setDestination(55120U);
    msg.setDestinationEntity(246U);
    msg.u = 0.34065619243066314;
    msg.v = 0.7364771657803829;
    msg.w = 0.5432061674516453;
    msg.p = 0.01787631493014863;
    msg.q = 0.28817872732799665;
    msg.r = 0.24110947308030917;
    msg.flags = 77U;

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
    msg.setTimeStamp(0.015942864989517358);
    msg.setSource(18366U);
    msg.setSourceEntity(116U);
    msg.setDestination(37782U);
    msg.setDestinationEntity(153U);
    msg.path_ref = 2413548940U;
    msg.start_lat = 0.5507734780625593;
    msg.start_lon = 0.46692565912213446;
    msg.start_z = 0.8357454979593123;
    msg.start_z_units = 161U;
    msg.end_lat = 0.754005491130426;
    msg.end_lon = 0.555146529516219;
    msg.end_z = 0.1748547312090808;
    msg.end_z_units = 149U;
    msg.lradius = 0.5284574619928961;
    msg.flags = 19U;
    msg.x = 0.4345788863675528;
    msg.y = 0.3220082530195201;
    msg.z = 0.48283321999536744;
    msg.vx = 0.44305345294070964;
    msg.vy = 0.14575951505162055;
    msg.vz = 0.6122499462211414;
    msg.course_error = 0.23969178331319618;
    msg.eta = 38356U;

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
    msg.setTimeStamp(0.2427880329670703);
    msg.setSource(55581U);
    msg.setSourceEntity(15U);
    msg.setDestination(115U);
    msg.setDestinationEntity(33U);
    msg.path_ref = 1417708489U;
    msg.start_lat = 0.6949040939495915;
    msg.start_lon = 0.7343189038729003;
    msg.start_z = 0.5095714294178798;
    msg.start_z_units = 99U;
    msg.end_lat = 0.9996703647084413;
    msg.end_lon = 0.37012695843343757;
    msg.end_z = 0.2528696775081418;
    msg.end_z_units = 34U;
    msg.lradius = 0.6349981702045557;
    msg.flags = 116U;
    msg.x = 0.9282135380965949;
    msg.y = 0.35795521832773314;
    msg.z = 0.5817740784281378;
    msg.vx = 0.7714377684524636;
    msg.vy = 0.23400860275372526;
    msg.vz = 0.923721178716195;
    msg.course_error = 0.3345791848318097;
    msg.eta = 13239U;

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
    msg.setTimeStamp(0.9677712056996243);
    msg.setSource(23368U);
    msg.setSourceEntity(19U);
    msg.setDestination(25876U);
    msg.setDestinationEntity(2U);
    msg.path_ref = 188704002U;
    msg.start_lat = 0.29889155067835504;
    msg.start_lon = 0.4162016044137933;
    msg.start_z = 0.5354022876661209;
    msg.start_z_units = 248U;
    msg.end_lat = 0.9967293284268602;
    msg.end_lon = 0.335937665278881;
    msg.end_z = 0.5186214743017478;
    msg.end_z_units = 59U;
    msg.lradius = 0.9281470056978356;
    msg.flags = 165U;
    msg.x = 0.4220895425177683;
    msg.y = 0.0942651655077108;
    msg.z = 0.7023106481518538;
    msg.vx = 0.5004797961639867;
    msg.vy = 0.15901362408840192;
    msg.vz = 0.9251629551925394;
    msg.course_error = 0.7918745986851609;
    msg.eta = 21891U;

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
    msg.setTimeStamp(0.8547041468568881);
    msg.setSource(36019U);
    msg.setSourceEntity(161U);
    msg.setDestination(479U);
    msg.setDestinationEntity(132U);
    msg.k = 0.258806827596645;
    msg.m = 0.09559356684545584;
    msg.n = 0.9708605085721201;

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
    msg.setTimeStamp(0.802239965680674);
    msg.setSource(58531U);
    msg.setSourceEntity(247U);
    msg.setDestination(27673U);
    msg.setDestinationEntity(70U);
    msg.k = 0.7777114327347073;
    msg.m = 0.3556786763321398;
    msg.n = 0.29286506253187106;

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
    msg.setTimeStamp(0.9314374458769915);
    msg.setSource(48032U);
    msg.setSourceEntity(152U);
    msg.setDestination(32942U);
    msg.setDestinationEntity(62U);
    msg.k = 0.5466290285980133;
    msg.m = 0.9500672980383653;
    msg.n = 0.5074208317860125;

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
    msg.setTimeStamp(0.21399336819129855);
    msg.setSource(30979U);
    msg.setSourceEntity(239U);
    msg.setDestination(43827U);
    msg.setDestinationEntity(240U);
    msg.p = 0.6801740333222326;
    msg.i = 0.5243795642306496;
    msg.d = 0.9840047806236009;
    msg.a = 0.6985011369631392;

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
    msg.setTimeStamp(0.822586091222151);
    msg.setSource(59243U);
    msg.setSourceEntity(147U);
    msg.setDestination(62358U);
    msg.setDestinationEntity(4U);
    msg.p = 0.6895377935410587;
    msg.i = 0.7377250644684147;
    msg.d = 0.931387068536298;
    msg.a = 0.1537794262355624;

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
    msg.setTimeStamp(0.5791865637280759);
    msg.setSource(38164U);
    msg.setSourceEntity(250U);
    msg.setDestination(35362U);
    msg.setDestinationEntity(57U);
    msg.p = 0.9646664079546929;
    msg.i = 0.3909453639777086;
    msg.d = 0.10230151234970297;
    msg.a = 0.8053570123913434;

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
    msg.setTimeStamp(0.5010609387637397);
    msg.setSource(65242U);
    msg.setSourceEntity(6U);
    msg.setDestination(54610U);
    msg.setDestinationEntity(133U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.9475463419880314);
    msg.setSource(9376U);
    msg.setSourceEntity(98U);
    msg.setDestination(22509U);
    msg.setDestinationEntity(150U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.19023724626726746);
    msg.setSource(47881U);
    msg.setSourceEntity(110U);
    msg.setDestination(23889U);
    msg.setDestinationEntity(20U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.06608670422113994);
    msg.setSource(5911U);
    msg.setSourceEntity(46U);
    msg.setDestination(37359U);
    msg.setDestinationEntity(104U);
    msg.x = 0.03703664172363419;
    msg.y = 0.1634421095852302;
    msg.z = 0.4248477582696999;
    msg.vx = 0.9845461002793703;
    msg.vy = 0.28616446343895796;
    msg.vz = 0.7392640340287627;
    msg.ax = 0.7057115975882273;
    msg.ay = 0.4433290274928652;
    msg.az = 0.7985319668711149;
    msg.flags = 60028U;

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
    msg.setTimeStamp(0.05636398495276529);
    msg.setSource(45895U);
    msg.setSourceEntity(238U);
    msg.setDestination(50811U);
    msg.setDestinationEntity(114U);
    msg.x = 0.6095072457858767;
    msg.y = 0.33413302029509473;
    msg.z = 0.5397970492644494;
    msg.vx = 0.21649170359652625;
    msg.vy = 0.8430763898798806;
    msg.vz = 0.7336315084312602;
    msg.ax = 0.7567338298412949;
    msg.ay = 0.22285537480966577;
    msg.az = 0.6903838848458039;
    msg.flags = 4760U;

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
    msg.setTimeStamp(0.4705318816510222);
    msg.setSource(63726U);
    msg.setSourceEntity(22U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(97U);
    msg.x = 0.10047010351504182;
    msg.y = 0.5718550727080542;
    msg.z = 0.19241097641812288;
    msg.vx = 0.7433322957813387;
    msg.vy = 0.816798026138277;
    msg.vz = 0.5873146430905154;
    msg.ax = 0.04749309372299182;
    msg.ay = 0.16302298009516036;
    msg.az = 0.32692898863305364;
    msg.flags = 11035U;

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
    msg.setTimeStamp(0.35270623599563466);
    msg.setSource(23679U);
    msg.setSourceEntity(114U);
    msg.setDestination(14794U);
    msg.setDestinationEntity(249U);
    msg.value = 0.10901843361482089;

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
    msg.setTimeStamp(0.5931510923227145);
    msg.setSource(43205U);
    msg.setSourceEntity(249U);
    msg.setDestination(61183U);
    msg.setDestinationEntity(86U);
    msg.value = 0.669541868584928;

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
    msg.setTimeStamp(0.16709919918379046);
    msg.setSource(48538U);
    msg.setSourceEntity(146U);
    msg.setDestination(26168U);
    msg.setDestinationEntity(251U);
    msg.value = 0.4615861494014071;

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
    msg.setTimeStamp(0.5250757929457238);
    msg.setSource(34489U);
    msg.setSourceEntity(134U);
    msg.setDestination(64621U);
    msg.setDestinationEntity(209U);
    msg.timeout = 39996U;
    msg.lat = 0.8353373016629215;
    msg.lon = 0.4099058493989981;
    msg.z = 0.9534626029446803;
    msg.z_units = 5U;
    msg.speed = 0.7356599509159892;
    msg.speed_units = 77U;
    msg.roll = 0.5290188313394147;
    msg.pitch = 0.22916599772174284;
    msg.yaw = 0.09170240333793156;
    msg.custom.assign("JRZFGXJWYBGCNJPSGWZX");

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
    msg.setTimeStamp(0.5312065759800509);
    msg.setSource(6281U);
    msg.setSourceEntity(229U);
    msg.setDestination(48838U);
    msg.setDestinationEntity(214U);
    msg.timeout = 35550U;
    msg.lat = 0.10591717444565452;
    msg.lon = 0.8107628431145723;
    msg.z = 0.8503760866326726;
    msg.z_units = 87U;
    msg.speed = 0.1742064123224013;
    msg.speed_units = 240U;
    msg.roll = 0.197084799878685;
    msg.pitch = 0.4109729774332538;
    msg.yaw = 0.48539531095850585;
    msg.custom.assign("CASCFWQKNPLRVKTVPWMGJXVQTSDPVNKQYAGQUVDYNATSESHVWDQJVVLBWHEDRHYHPRFNANORKPADYIIOMLLEOIUIJSRGIFXCPTBHNBMBXFEBKXIMJTPDNVMBFHAMORDESXMNUBNPOJZMQXUWUMTJUTKGXF");

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
    msg.setTimeStamp(0.3662892421804743);
    msg.setSource(64175U);
    msg.setSourceEntity(248U);
    msg.setDestination(59784U);
    msg.setDestinationEntity(251U);
    msg.timeout = 44304U;
    msg.lat = 0.4787487271806682;
    msg.lon = 0.680403219061622;
    msg.z = 0.30974312604028265;
    msg.z_units = 8U;
    msg.speed = 0.7354091588182106;
    msg.speed_units = 239U;
    msg.roll = 0.32634558499995003;
    msg.pitch = 0.49137210108074203;
    msg.yaw = 0.6237722527979711;
    msg.custom.assign("CRYUBSYLDZZKXLMOVLMMGPKIDVZQQZFFHMWSOAOYLWRTWCGNKBVQ");

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
    msg.setTimeStamp(0.3299489164929522);
    msg.setSource(49089U);
    msg.setSourceEntity(171U);
    msg.setDestination(55438U);
    msg.setDestinationEntity(203U);
    msg.timeout = 57891U;
    msg.lat = 0.47419369681989787;
    msg.lon = 0.5073759291748665;
    msg.z = 0.461525080708003;
    msg.z_units = 187U;
    msg.speed = 0.6598698329291273;
    msg.speed_units = 123U;
    msg.duration = 62471U;
    msg.radius = 0.26540531991208294;
    msg.flags = 90U;
    msg.custom.assign("KPXZTTXIQDSCSIPXZPWUELLHSVBMTUXTCBZTYYMDALFTCISDOKRAEQSNCNKJWLKJYBANWAQMVAUQFHRRAYSQWMVSRKOCJCXAOUFFPVLLMJFVGXMRBNVYSWHQI");

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
    msg.setTimeStamp(0.40231563773902046);
    msg.setSource(38377U);
    msg.setSourceEntity(157U);
    msg.setDestination(53305U);
    msg.setDestinationEntity(107U);
    msg.timeout = 6777U;
    msg.lat = 0.01852082326618576;
    msg.lon = 0.26163010123983443;
    msg.z = 0.8395031800930983;
    msg.z_units = 111U;
    msg.speed = 0.5103191027872365;
    msg.speed_units = 77U;
    msg.duration = 49073U;
    msg.radius = 0.4035031800005918;
    msg.flags = 130U;
    msg.custom.assign("NSSOHXMTEVQFRLADMGBTHRNACSQKBCRYWUWIWPNOJEVGJBLNXCLXPAFXDOIIOHKKALGDUUKYBRLGRUEVOTVLPPRWJJEKIUHFVTBYXHZRJAYYMQBPMFDMOEIZJEQYNIQRBPFNTFAZLGZMOSOCZTSTQFCCKONGQUV");

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
    msg.setTimeStamp(0.4531127959341614);
    msg.setSource(27940U);
    msg.setSourceEntity(20U);
    msg.setDestination(35594U);
    msg.setDestinationEntity(54U);
    msg.timeout = 32129U;
    msg.lat = 0.8587030749261665;
    msg.lon = 0.9368826618928793;
    msg.z = 0.3695893824971406;
    msg.z_units = 169U;
    msg.speed = 0.14842218098777682;
    msg.speed_units = 81U;
    msg.duration = 9798U;
    msg.radius = 0.5844930929497433;
    msg.flags = 73U;
    msg.custom.assign("WZXONKKSSRQUJGUMIFQUMPSYXTYVWZEOQZTVTPGFTFSEJKDSSDHEBR");

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
    msg.setTimeStamp(0.021748393789162046);
    msg.setSource(61565U);
    msg.setSourceEntity(102U);
    msg.setDestination(54626U);
    msg.setDestinationEntity(123U);
    msg.custom.assign("FKDQIUGBZQWCIOJRDHDWVZTAYYTBFQTRMPKMJDYXNJCZTFYLOHQLSEYODLRQVEUPPMHCYMCPHOLWMYKMBZSCRANNDUCXXLIIQTHOWBSUFJXHMKYNERAJZLGGNTPDASQMUWHWQSYATKKJQNVPHDBKPBAPWXTXVIRIGOUALJVWORGAKOENVDICLVMELFZHXZESSFCZUSRPIFGVVDLPUERTGQSZFNYTXZK");

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
    msg.setTimeStamp(0.2877109522773512);
    msg.setSource(47823U);
    msg.setSourceEntity(209U);
    msg.setDestination(31799U);
    msg.setDestinationEntity(19U);
    msg.custom.assign("JAQNSOSKUGVRLCKMRJAPJXMTSEEVOTIQXFHUQAXZPNBPHFPUOXCGNINELMFCOYJQESMKYAQYBJVWEVINUUKHSEPRWHJSXMTFKGRCUYDWWQSNLCUZDWOOGNCBPDXGGAU");

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
    msg.setTimeStamp(0.5691155357090464);
    msg.setSource(9784U);
    msg.setSourceEntity(126U);
    msg.setDestination(54210U);
    msg.setDestinationEntity(23U);
    msg.custom.assign("IMWJLIWVHPXFSNWXVTFCQQLERGPRDZRZVWRGBNBYAMYXTSAIXWZADJUQOEQYRVNRCJJF");

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
    msg.setTimeStamp(0.6397279010348862);
    msg.setSource(35709U);
    msg.setSourceEntity(86U);
    msg.setDestination(41456U);
    msg.setDestinationEntity(247U);
    msg.timeout = 40343U;
    msg.lat = 0.6719296740684905;
    msg.lon = 0.1317326244576864;
    msg.z = 0.803283295317815;
    msg.z_units = 6U;
    msg.duration = 15858U;
    msg.speed = 0.09478259818243207;
    msg.speed_units = 47U;
    msg.type = 67U;
    msg.radius = 0.14894502620965422;
    msg.length = 0.9735920144413109;
    msg.bearing = 0.803584245661117;
    msg.direction = 122U;
    msg.custom.assign("YVZFRLPJFEF");

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
    msg.setTimeStamp(0.8808094419119251);
    msg.setSource(27194U);
    msg.setSourceEntity(53U);
    msg.setDestination(64742U);
    msg.setDestinationEntity(220U);
    msg.timeout = 53003U;
    msg.lat = 0.2088125654211933;
    msg.lon = 0.8792013746536779;
    msg.z = 0.5415505905253306;
    msg.z_units = 250U;
    msg.duration = 11718U;
    msg.speed = 0.9876951221861867;
    msg.speed_units = 13U;
    msg.type = 122U;
    msg.radius = 0.040484317796662284;
    msg.length = 0.3207310634741267;
    msg.bearing = 0.9380500337833827;
    msg.direction = 22U;
    msg.custom.assign("RFLGUNXVBSAPFPSDLXYCUEWGPVPHLZNOPPW");

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
    msg.setTimeStamp(0.7075389095617325);
    msg.setSource(11619U);
    msg.setSourceEntity(93U);
    msg.setDestination(26003U);
    msg.setDestinationEntity(169U);
    msg.timeout = 15915U;
    msg.lat = 0.8393119548793264;
    msg.lon = 0.8652997968224342;
    msg.z = 0.32515727206324085;
    msg.z_units = 233U;
    msg.duration = 35015U;
    msg.speed = 0.6439017193067236;
    msg.speed_units = 63U;
    msg.type = 163U;
    msg.radius = 0.24613486055318545;
    msg.length = 0.7677965726083882;
    msg.bearing = 0.7571940714811991;
    msg.direction = 177U;
    msg.custom.assign("ICAJDXMCZOZGCLSAQWTADICYRUMLTILNUMTWSEEWRZKXNUTMDQYIUVHLZFXSCGOXZVKHRJGQENYUTKOBYXVTOVPMPTYULNIEWV");

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
    msg.setTimeStamp(0.7293862051204234);
    msg.setSource(30638U);
    msg.setSourceEntity(153U);
    msg.setDestination(20798U);
    msg.setDestinationEntity(238U);
    msg.duration = 52808U;
    msg.custom.assign("UMTXJEXNGFSHHABVXMZZJNGCZLPNUISZQYGOXMEOUKZKIPZXLQIGKZLGSSTYWOBRBPZETHPOYUWLVRDXYNINNIYAXKRRSCVMKIJKAJGONHUACAVAMEBQUHHNVDJPFFWDTLRFREFMPBLLVIOONRWWHRDHFNDQTKTMSDCUCZUVAMPBLBEECIECAXFAHKYLAWJBGSEQVYTHSWSFCM");

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
    msg.setTimeStamp(0.503529256847331);
    msg.setSource(10846U);
    msg.setSourceEntity(194U);
    msg.setDestination(31554U);
    msg.setDestinationEntity(46U);
    msg.duration = 16359U;
    msg.custom.assign("VZKJZGLKOSVBLAKJXHNOQMQWRLDTCEXXFJPLZUIFEKZYEWIAKSVHKBYXNZNRHIYYWGGJXGPDAUIPYGGPDQCTMICOHTASOVSIMTAWJUGZRSMFNRFGZCVRRCHCXJJULOPDAFXLHBFWMANUQBQTINBVHILNYMSWVHESETZPWWLABONGKSVRKPTPFLBQLOVRQOQGKDSNUZURPTHJXWQFFUMIZBTCPCFCVTCDMAEHEYDDWXRNX");

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
    msg.setTimeStamp(0.33105672585258705);
    msg.setSource(44879U);
    msg.setSourceEntity(80U);
    msg.setDestination(16270U);
    msg.setDestinationEntity(130U);
    msg.duration = 48195U;
    msg.custom.assign("SACQJEPZLZJTTWWRNYBPWFKLNJVELCACMKIOOEIEQORDVAYMTXWVZDECIAYYZSTRBCONXMZFIPXKADNIIXVXRTLQMWXRRBNFXCNJPZJHQGDFVXBVQYEEUSSUOGAKVTULZHDJUPJTYETKGGHWSBJPBDFRCYHVGILWJKFZUVAQIHOBBSVYLMWTOPNKDPOXCDTGUGNBMCSSWERFLMDHRPCMLUFQSNHGMKWEQLSYQHAHPZUNF");

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
    msg.setTimeStamp(0.9372669526942027);
    msg.setSource(55319U);
    msg.setSourceEntity(192U);
    msg.setDestination(50203U);
    msg.setDestinationEntity(65U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.044429224292849456;
    msg.control.set(tmp_msg_0);
    msg.duration = 14863U;
    msg.custom.assign("LGOUEFTXOOCISRYRNYSPKBYXJVTZPYNZPQWQFLYJIBUAMTGAZTXFDKFOQMHKUGAMVWDJYZFAXAKJDEDUOGGAQFKETFXUWWXGEKMNIKQDUPAILPREMPMFHHBEMVBTLWOJQRTSSCSHOOEWDHMLDTCBCNHLXSL");

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
    msg.setTimeStamp(0.7466007981099452);
    msg.setSource(23719U);
    msg.setSourceEntity(210U);
    msg.setDestination(64745U);
    msg.setDestinationEntity(137U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.40590996379367794;
    tmp_msg_0.z_units = 116U;
    msg.control.set(tmp_msg_0);
    msg.duration = 30815U;
    msg.custom.assign("ICNHZUAGFXZWSREYKVVSPIPJLODJOOGTKRJXRIWKSASHJGUXEYAILRGPDCIREZDCDWDLFRVONMUBSCNXDTTMMMMWCFYUPYFGVTQHHQAUMJTLKINNWVZBVUTKLSFMQI");

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
    msg.setTimeStamp(0.3760985414592224);
    msg.setSource(8115U);
    msg.setSourceEntity(107U);
    msg.setDestination(11745U);
    msg.setDestinationEntity(249U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3525564538U;
    tmp_msg_0.start_lat = 0.12225340648488281;
    tmp_msg_0.start_lon = 0.35043040471867426;
    tmp_msg_0.start_z = 0.16114612202570033;
    tmp_msg_0.start_z_units = 233U;
    tmp_msg_0.end_lat = 0.37868198967987987;
    tmp_msg_0.end_lon = 0.7723958027387942;
    tmp_msg_0.end_z = 0.021306430152386757;
    tmp_msg_0.end_z_units = 113U;
    tmp_msg_0.speed = 0.8765580980929654;
    tmp_msg_0.speed_units = 161U;
    tmp_msg_0.lradius = 0.743229670544108;
    tmp_msg_0.flags = 247U;
    msg.control.set(tmp_msg_0);
    msg.duration = 64155U;
    msg.custom.assign("ZGAWAYNYHOYEJEFEGYCLJPTUHGYRLOAJPDQWKOZLGTMSNZSTFQHQWIUZYVVEWANSPAKPYQVWZUTHSRMOBGNIIK");

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
    msg.setTimeStamp(0.8306912213395543);
    msg.setSource(33747U);
    msg.setSourceEntity(151U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(132U);
    msg.timeout = 41328U;
    msg.lat = 0.9475988561644464;
    msg.lon = 0.15311651298538165;
    msg.z = 0.8712936581545608;
    msg.z_units = 166U;
    msg.speed = 0.0686302579699517;
    msg.speed_units = 169U;
    msg.bearing = 0.3956782491817993;
    msg.cross_angle = 0.5380015015840313;
    msg.width = 0.726871462756599;
    msg.length = 0.16654402282103553;
    msg.hstep = 0.6024154876889201;
    msg.coff = 170U;
    msg.alternation = 248U;
    msg.flags = 68U;
    msg.custom.assign("TQJOIGLFJKIGXTTAPRQGGSCOBCENNTCYXMFCK");

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
    msg.setTimeStamp(0.5644852855792024);
    msg.setSource(24914U);
    msg.setSourceEntity(253U);
    msg.setDestination(20139U);
    msg.setDestinationEntity(187U);
    msg.timeout = 4852U;
    msg.lat = 0.4078405576020053;
    msg.lon = 0.0649747794458424;
    msg.z = 0.36834840685759573;
    msg.z_units = 55U;
    msg.speed = 0.7628287270263399;
    msg.speed_units = 119U;
    msg.bearing = 0.1878408552481432;
    msg.cross_angle = 0.3256916646895245;
    msg.width = 0.18268459047608798;
    msg.length = 0.14003112397043926;
    msg.hstep = 0.9398176513064251;
    msg.coff = 154U;
    msg.alternation = 208U;
    msg.flags = 172U;
    msg.custom.assign("UUCPHGDPDIBNVEKGTBCEJFKJZRPRLAXHUPMWNSBBMVFOFSXOSCOFTKHINLQHZPWEIAWLTLJSCBXUALPYHNHWRNEIBMVUTUIYYFXZAQYQGLZ");

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
    msg.setTimeStamp(0.9997570292154936);
    msg.setSource(46364U);
    msg.setSourceEntity(9U);
    msg.setDestination(42839U);
    msg.setDestinationEntity(140U);
    msg.timeout = 39388U;
    msg.lat = 0.3722298382429028;
    msg.lon = 0.4303770688058042;
    msg.z = 0.5190057196738185;
    msg.z_units = 36U;
    msg.speed = 0.7879105016001363;
    msg.speed_units = 254U;
    msg.bearing = 0.653308479502605;
    msg.cross_angle = 0.9083349412677079;
    msg.width = 0.7900455794414455;
    msg.length = 0.9141002813551864;
    msg.hstep = 0.6357048655249316;
    msg.coff = 204U;
    msg.alternation = 246U;
    msg.flags = 226U;
    msg.custom.assign("WOZOAHSMTSPLEYAMYYEEPGDQVZWSTLEVQOLMGDBVDHTRFJMIGCFHXQHEPMBISBRFNBODQSJOEUNZATKUFVMZEMLHPKATCJHIPZWQZHHXGMFMRGBLYDBXOUSIKUQRRKNFCFUGCVSEQQJBTCVPKPUOCXDNPNRKDOJKIUIWUSUPL");

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
    msg.setTimeStamp(0.8639010327819201);
    msg.setSource(59851U);
    msg.setSourceEntity(7U);
    msg.setDestination(59633U);
    msg.setDestinationEntity(36U);
    msg.timeout = 52537U;
    msg.lat = 0.6686676250086909;
    msg.lon = 0.10963562699832496;
    msg.z = 0.29234701636709604;
    msg.z_units = 69U;
    msg.speed = 0.5589724512252543;
    msg.speed_units = 229U;
    msg.custom.assign("IJLBHDQSKMGMYJDCZGQMODSYXSGASIZPZXSOCVKHOURTIVTVONMGSECDPMPRBXWKCCPYISIWJLRYHFWALQXUQABCSKLUXJKEBTZHYVNJRFNQNRVUPKBTCHUJECWVZKAAFIHAYJENITGOSNOYVADGLPMJWHQOZDEOAWWGXXKDFVQWQNCUFQH");

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
    msg.setTimeStamp(0.5123490144577266);
    msg.setSource(36943U);
    msg.setSourceEntity(193U);
    msg.setDestination(36205U);
    msg.setDestinationEntity(66U);
    msg.timeout = 25706U;
    msg.lat = 0.4072687354363951;
    msg.lon = 0.34578824256261287;
    msg.z = 0.5575135075427826;
    msg.z_units = 200U;
    msg.speed = 0.4669078762786705;
    msg.speed_units = 36U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.965327741437231;
    tmp_msg_0.y = 0.8490778314591149;
    tmp_msg_0.z = 0.04563869368749718;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MXPNCHFDBAWAQLEPJCRNLRCAZMZZQQWCQSXUBIEUEYPFLOIWEJJFILKAFMPDAASUOHPVZEYGUJKNKGGRRGTARITDKNQJXFZEUBUAHBVBNWSSGPCREPUNTNSMDVMYNDOYVDBVDWIETTXLTRDZQFIHYGRHCOJELGFFSXMBHYQTCIWCWVSXYOTJIPZAB");

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
    msg.setTimeStamp(0.2195360466659032);
    msg.setSource(64496U);
    msg.setSourceEntity(146U);
    msg.setDestination(60032U);
    msg.setDestinationEntity(213U);
    msg.timeout = 45235U;
    msg.lat = 0.6536502439237777;
    msg.lon = 0.4004966684888551;
    msg.z = 0.3469561098877513;
    msg.z_units = 105U;
    msg.speed = 0.6347952529880535;
    msg.speed_units = 197U;
    msg.custom.assign("DZCEMCYSQCWNRNTMADTXKHEMIAWMZFLYBSLHSZBSEUOVDBTTPTNUFKOTJPYNXJMUJUIXWCLQXXGWKLUVFVDJGUJCGBYIQZWDPXG");

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
    msg.setTimeStamp(0.5750909460427578);
    msg.setSource(56159U);
    msg.setSourceEntity(62U);
    msg.setDestination(31234U);
    msg.setDestinationEntity(55U);
    msg.x = 0.03353057799011283;
    msg.y = 0.7401562998608452;
    msg.z = 0.3241377943357051;

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
    msg.setTimeStamp(0.4384364526531793);
    msg.setSource(56769U);
    msg.setSourceEntity(234U);
    msg.setDestination(25294U);
    msg.setDestinationEntity(178U);
    msg.x = 0.17951717055645344;
    msg.y = 0.21106509685461516;
    msg.z = 0.14104288961501;

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
    msg.setTimeStamp(0.29873196930422485);
    msg.setSource(9669U);
    msg.setSourceEntity(198U);
    msg.setDestination(2328U);
    msg.setDestinationEntity(117U);
    msg.x = 0.9372599454576351;
    msg.y = 0.9847895351161509;
    msg.z = 0.9303284571502202;

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
    msg.setTimeStamp(0.947655278490525);
    msg.setSource(11363U);
    msg.setSourceEntity(252U);
    msg.setDestination(33783U);
    msg.setDestinationEntity(136U);
    msg.timeout = 57214U;
    msg.lat = 0.6790488271674353;
    msg.lon = 0.9984751184462469;
    msg.z = 0.5980806116754047;
    msg.z_units = 222U;
    msg.amplitude = 0.0802048634232917;
    msg.pitch = 0.426768487508134;
    msg.speed = 0.6250208617579036;
    msg.speed_units = 126U;
    msg.custom.assign("KXLZGSYTCRSDIAQDXPAEQHTHYEYQGBMNAZBJCOGFNOPUJTTJBVDFWXWUBPFJJTURFIJVBCFDHHPFRSNDTDKAMZXLZZMEPYQZYFZWDLLLHBBVIWKCKDHJMCAHEIQIVYGRNOQBXGYXVRUVEWCEXWKUHXCOOGUCWNGETMISSZHSIIKKDMUJPNRNQLRWOFMKRQPDEILNGCBULVUMJRPKQFFOQZUOGAXNZIOXAETRMCNVVMHVJESAYYB");

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
    msg.setTimeStamp(0.2856873795881252);
    msg.setSource(14886U);
    msg.setSourceEntity(19U);
    msg.setDestination(3495U);
    msg.setDestinationEntity(183U);
    msg.timeout = 7064U;
    msg.lat = 0.41316481972449814;
    msg.lon = 0.4963518606233629;
    msg.z = 0.927616069409317;
    msg.z_units = 128U;
    msg.amplitude = 0.8251526695061012;
    msg.pitch = 0.04935664987818089;
    msg.speed = 0.7024004400205992;
    msg.speed_units = 148U;
    msg.custom.assign("QAOUDWXPQVNWZLHTMHSXNZFLSNGBGLNPOROGJDAXSAQTMEBCORAFQAFOQYLMPUCZZAJXHCPGUWQSWXRFUBNNUQTYUUXBLHHMTZENRMVDYUIVKYJEIFSAJVLGMTJCCIVTKOACPCJBGAVEFBIRNXZZLSWDJHVOUIFKWNYESYRIZPYTLRBEJEOBMZG");

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
    msg.setTimeStamp(0.3167763208901351);
    msg.setSource(7878U);
    msg.setSourceEntity(121U);
    msg.setDestination(54120U);
    msg.setDestinationEntity(238U);
    msg.timeout = 23694U;
    msg.lat = 0.34190925983836107;
    msg.lon = 0.5940624808739563;
    msg.z = 0.9861607090427091;
    msg.z_units = 12U;
    msg.amplitude = 0.014272544461409353;
    msg.pitch = 0.08793768749603503;
    msg.speed = 0.16356179431648254;
    msg.speed_units = 188U;
    msg.custom.assign("NQOVSAHUSEXCXYTCRGIKWCAAQEZFXMWTOZYGVBAFCGTBHSLZHKZIMFDRWAHAJZDUPRRKETGEPFKXBHLNHICLORPSCYGMANQVOB");

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
    msg.setTimeStamp(0.6908911805123076);
    msg.setSource(15610U);
    msg.setSourceEntity(83U);
    msg.setDestination(26982U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.7731708876011942);
    msg.setSource(32512U);
    msg.setSourceEntity(148U);
    msg.setDestination(978U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.09412111411299029);
    msg.setSource(22697U);
    msg.setSourceEntity(28U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.5477795709329009);
    msg.setSource(39700U);
    msg.setSourceEntity(33U);
    msg.setDestination(55671U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.4947774372506616;
    msg.lon = 0.7934701068697176;
    msg.z = 0.7705348444134946;
    msg.z_units = 123U;
    msg.radius = 0.17749727267836035;
    msg.duration = 26986U;
    msg.speed = 0.8606021604389132;
    msg.speed_units = 138U;
    msg.custom.assign("RQTHWRGSNDRZNYSPZMGWLJZIPYDDMVIXXYELSOXPPSLCFDYBDHUQOWETBQBRJFSHOCVCZQVVZXNGJYNXVRKBXBHYITKVFJNUHMCVUEKHMEHFPRUXGKOSQKMLIYBFULAEPTXNBZCYS");

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
    msg.setTimeStamp(0.03240474605363619);
    msg.setSource(65042U);
    msg.setSourceEntity(81U);
    msg.setDestination(58278U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.49149446844146305;
    msg.lon = 0.9900364389619932;
    msg.z = 0.5514047969385227;
    msg.z_units = 127U;
    msg.radius = 0.4049750489582856;
    msg.duration = 23666U;
    msg.speed = 0.2899250336238852;
    msg.speed_units = 23U;
    msg.custom.assign("BSDQDINABMDAFQIJOQTUFUJRKXKODZDJASLMKYAYMSLCITISNFAYMLMXWGSGVTAYQWHJPFETRBJTPBY");

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
    msg.setTimeStamp(0.563372991627807);
    msg.setSource(29115U);
    msg.setSourceEntity(75U);
    msg.setDestination(54268U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.04442756955720384;
    msg.lon = 0.916119633917972;
    msg.z = 0.6586050881257244;
    msg.z_units = 208U;
    msg.radius = 0.7273536537387624;
    msg.duration = 41160U;
    msg.speed = 0.7675500748452202;
    msg.speed_units = 205U;
    msg.custom.assign("ROPAFAXRFKVZPBXVFYSECCQKLHSANMMGSSJSBDPBPXXVBKNCADFGIYSRJZQMZGRZJMRTWTSVTZHYGPYHMFKNJQZTBCIRIGOMXPOBOATEGVTEBAIQCJNMOLZASNUOXRBDLYEMGIUUBKAJTEWWELFWLPUGYYGQDIMXIRHDDWRKMTQEKVPXCQVUVNVHONFZUEPHYEWEQA");

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
    msg.setTimeStamp(0.6852076521892286);
    msg.setSource(54860U);
    msg.setSourceEntity(59U);
    msg.setDestination(4194U);
    msg.setDestinationEntity(199U);
    msg.timeout = 63299U;
    msg.flags = 222U;
    msg.lat = 0.23417000889264183;
    msg.lon = 0.31792035227361093;
    msg.start_z = 0.3858230925059073;
    msg.start_z_units = 81U;
    msg.end_z = 0.5412584832174568;
    msg.end_z_units = 104U;
    msg.radius = 0.7804686559839685;
    msg.speed = 0.13265641917988646;
    msg.speed_units = 254U;
    msg.custom.assign("CRFBVGNLCLUBYXCDOQOJMUNPFQOVGMHETYWFXODHRUXBUGZFRNEXHGRKZUAIDJMHKZWHOVOEVDQICTZOSDMUBBHKQUICKLEGGNQIPLYDM");

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
    msg.setTimeStamp(0.872273498524647);
    msg.setSource(14226U);
    msg.setSourceEntity(80U);
    msg.setDestination(19256U);
    msg.setDestinationEntity(172U);
    msg.timeout = 11526U;
    msg.flags = 7U;
    msg.lat = 0.37489719285958323;
    msg.lon = 0.035256487341509546;
    msg.start_z = 0.1371536851463584;
    msg.start_z_units = 211U;
    msg.end_z = 0.2981390959357876;
    msg.end_z_units = 222U;
    msg.radius = 0.8560814598220502;
    msg.speed = 0.34542445809660094;
    msg.speed_units = 128U;
    msg.custom.assign("OQBVDWRPNLLORRIEAKOUCAXEVXJLWPIAPABDTSCZJTLFJTCCQENTKCXQJCRJHXSVKLGJWUTBXGCAMJYUFUELIBNISMKHYFBZBLYMBNUWPGLWFYFOZMHCGVTGQMOZUPIJGYDHWHSILDZFUIAXZMGBJVAFEBKPSOEHHAXRWXIMOMNZSERQORWEGEOKAHUDNHZWPYQYSPSXIAQWNKNTOSKVRDTTDVLEGHCPZXFVVITSYFQDBDYKNPKMFD");

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
    msg.setTimeStamp(0.7888474558027271);
    msg.setSource(31750U);
    msg.setSourceEntity(27U);
    msg.setDestination(46647U);
    msg.setDestinationEntity(139U);
    msg.timeout = 22388U;
    msg.flags = 199U;
    msg.lat = 0.8810332548574706;
    msg.lon = 0.8018045349718442;
    msg.start_z = 0.9446654457454986;
    msg.start_z_units = 42U;
    msg.end_z = 0.7877847992779005;
    msg.end_z_units = 158U;
    msg.radius = 0.9057539165293703;
    msg.speed = 0.9815052380514679;
    msg.speed_units = 172U;
    msg.custom.assign("LKVVGEMNTCIZJJDKFSXPQRSKWOXLGJMLBHLFXDHDIVAZQWFIMDTXRTINWALDAYGUEZOFJVX");

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
    msg.setTimeStamp(0.6957167515388941);
    msg.setSource(26324U);
    msg.setSourceEntity(85U);
    msg.setDestination(45186U);
    msg.setDestinationEntity(45U);
    msg.timeout = 56737U;
    msg.lat = 0.417214508801393;
    msg.lon = 0.09006629135888489;
    msg.z = 0.81462197309865;
    msg.z_units = 161U;
    msg.speed = 0.7138616412156322;
    msg.speed_units = 59U;
    msg.custom.assign("SBUAHWOAWDLGQHBJPNSSZVKOIGSVZLZBPKVSMZUEPEHTDALEAUYCFCJUTBTLQQQVRLOMOGWMBRXRIXJOOCYCFACSUSNAOFZIUIPBZHMXANODIKFKEPXDZJPKTMPWRKVXTYQZQUYVCMFAXBXLJAPNDLELKZXCGKNUMJIHFEECRRDJGTYYNWIVFRDHANBYVGUWTHYRDOHEETEWQBNKJRGWRSNZXW");

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
    msg.setTimeStamp(0.9570561732918582);
    msg.setSource(12962U);
    msg.setSourceEntity(126U);
    msg.setDestination(11275U);
    msg.setDestinationEntity(177U);
    msg.timeout = 63299U;
    msg.lat = 0.5470967356445744;
    msg.lon = 0.276232955145739;
    msg.z = 0.3417276196443487;
    msg.z_units = 127U;
    msg.speed = 0.2728080230719464;
    msg.speed_units = 167U;
    msg.custom.assign("LRQYOCRMFVKCKVUJXQNPMLLDJHPGEBNPKRUUKZRMMTCBSSIKQBVQHLTIWYHHDMGGGVHQLJJHHFXDOSGPDYKCJZAKFLISJSYSLQXPDDIGWRFBGOEEVCBGNGDNXEDMEZMAOFTTTEGVAHAIEWMQWZFQUOSDNPTCZEOOUFRBOFCYWDAYZPNKSAMEIXVCJNWIXQLYFTBHTQAPIRJASOFULEJRXXNCBUUAZSKOZNZTWYPPYVWKCUMNUAXIZ");

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
    msg.setTimeStamp(0.672432040748672);
    msg.setSource(36924U);
    msg.setSourceEntity(145U);
    msg.setDestination(30724U);
    msg.setDestinationEntity(117U);
    msg.timeout = 59241U;
    msg.lat = 0.5378804253233787;
    msg.lon = 0.3211958042912385;
    msg.z = 0.27368158175814883;
    msg.z_units = 218U;
    msg.speed = 0.08022100337254678;
    msg.speed_units = 7U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.22579236697367921;
    tmp_msg_0.y = 0.5560078639557733;
    tmp_msg_0.z = 0.8603602929451223;
    tmp_msg_0.t = 0.6185429020052867;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LJTPMATWUBPSPOEDLYORGBOATCNWYRGGSNDPILABXCPSHXKEZWDQJOLHWFZYBZGYOAKFMKRMQERGJBKZJTARDUEYTIDQQDWCZGNLUAQNEUTQITCOUEOZIQRNKLJFOXCAIIVPQZIHFVDPSMZVMXXSWBPKKNXSVYEJOS");

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
    msg.setTimeStamp(0.5984447723224192);
    msg.setSource(3612U);
    msg.setSourceEntity(124U);
    msg.setDestination(39506U);
    msg.setDestinationEntity(233U);
    msg.x = 0.5278542095094376;
    msg.y = 0.5208359876583659;
    msg.z = 0.39287569022017355;
    msg.t = 0.1485325920635009;

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
    msg.setTimeStamp(0.6550951213833296);
    msg.setSource(25674U);
    msg.setSourceEntity(36U);
    msg.setDestination(9833U);
    msg.setDestinationEntity(46U);
    msg.x = 0.6697714327092802;
    msg.y = 0.8537426431370463;
    msg.z = 0.5307718993653736;
    msg.t = 0.795545714052929;

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
    msg.setTimeStamp(0.32027101947152314);
    msg.setSource(34088U);
    msg.setSourceEntity(227U);
    msg.setDestination(30405U);
    msg.setDestinationEntity(85U);
    msg.x = 0.7799866388660989;
    msg.y = 0.12503503467316301;
    msg.z = 0.026837692415647263;
    msg.t = 0.06050349106993236;

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
    msg.setTimeStamp(0.22476261289283073);
    msg.setSource(49998U);
    msg.setSourceEntity(203U);
    msg.setDestination(47631U);
    msg.setDestinationEntity(216U);
    msg.timeout = 18121U;
    msg.name.assign("KAQIGVPPTVITDIFOHNMMGASIMCVYGFACSTXSJNSEPYYXGRMPWDVEWSWQVEMKWQDEVFNFVNZMBBDJQMKGNUXOERUODUOS");
    msg.custom.assign("RVHVAKURLBSPCBEHMEJMASEOJQTQHZBRKWRGJTLHFVAVNYTHSNLPJNMVHVKICXDCYHWCWOYXVLZCXXGBOBWKINMURFQSYAFDBHNSFUOGIAGTWMQQOORYEZNJEZODALWUQKZIUEBPXCAFSKOYBLFQCR");

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
    msg.setTimeStamp(0.5481994646977454);
    msg.setSource(5257U);
    msg.setSourceEntity(116U);
    msg.setDestination(65485U);
    msg.setDestinationEntity(240U);
    msg.timeout = 20724U;
    msg.name.assign("NGAAUZUZYVTPXRAMBSKHLDXOFCEGFHEVNCSTWEMNFLFOACQQDIDYXGYDHFIFGRWR");
    msg.custom.assign("EQMBYEBGICEWXMIIUEZHPJASBHUWWHMMWALDOYDCGURLJDPVRPMTEIEMQKESYNJDJAVNHHFEYKFOYISQUHFVKTFVFYXPJJKZLXVFWDLCCXNLSUCIJKOZFHFWKBBDSTCATNTRVXMD");

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
    msg.setTimeStamp(0.11927792342286503);
    msg.setSource(33858U);
    msg.setSourceEntity(181U);
    msg.setDestination(59852U);
    msg.setDestinationEntity(138U);
    msg.timeout = 33572U;
    msg.name.assign("XNYBROTUZIKIOPIWXKLYDUINYKWWOACFCTYFAJMGHJUSZQSHTYZGFFWLEDUEOQMLHVODGRQSCESIUJDQNMSXZJPDGHUEMNWLTNCKLXCEWGVFCYLVEYPESVDNHHVPDBFLFWMSGHAWKUTYULHVZPYAJBKDBCKPVRJXXMIOJJRIYFHBWCKZXTJIGALOLAFZPBNRQEROZQQ");
    msg.custom.assign("VCSKKEURTZSXEAAWMLBDUACDOLFOECPKHOSKIOCZBESJFLRMUNDHLYFDOKJZHGKQLPQZIB");

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
    msg.setTimeStamp(0.19664737886610772);
    msg.setSource(24243U);
    msg.setSourceEntity(64U);
    msg.setDestination(28134U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.9155482705195519;
    msg.lon = 0.47071006202700516;
    msg.z = 0.41320299331230237;
    msg.z_units = 62U;
    msg.speed = 0.5230138265389489;
    msg.speed_units = 191U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31374U;
    tmp_msg_0.off_x = 0.9870123997179824;
    tmp_msg_0.off_y = 0.840029524663228;
    tmp_msg_0.off_z = 0.5093240562391057;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.024203535094695527;
    msg.custom.assign("HYBWIGWCHOIKRRZBOEJBVUFTPNZIHFOFYNDRDXTCZVTKPWSHJSMZQOAFTOIZDUTLYYRBKEGHUQLYWVSXQMKNGDHVTAIAHKWSBCNAIETDGYRVCCMYTXONULTVXEBGERQWYSSQASIRAWILAWFZMZLBNVCLJBQKUMQLXIDKPYHCUECVSJPGSFJPXONMXRNMDRMFAHLJVUTQH");

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
    msg.setTimeStamp(0.20004630681393187);
    msg.setSource(56755U);
    msg.setSourceEntity(109U);
    msg.setDestination(39451U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.40437253012315066;
    msg.lon = 0.0850823089237216;
    msg.z = 0.29534441133622125;
    msg.z_units = 137U;
    msg.speed = 0.495194583798904;
    msg.speed_units = 88U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9792340287812867;
    tmp_msg_0.y = 0.8468930561733622;
    tmp_msg_0.z = 0.5192025069425973;
    tmp_msg_0.t = 0.6813652266494981;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 55157U;
    tmp_msg_1.off_x = 0.3228605192853371;
    tmp_msg_1.off_y = 0.46264043530165;
    tmp_msg_1.off_z = 0.7259129553529187;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.06437198392202259;
    msg.custom.assign("XBDSLNUBPUPKLXIIGMHHCDRLAFAXBWHGETDTFRDBCQKWERRKSBJDUTFSHWJWGVEUANSMUVOWDGIZOUTQVNJQLGKVGFRSPNBCCEFTZPLBCQHASFZGSPQVAFEDXDPQAYPBZYUISFDZIIKUKVROW");

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
    msg.setTimeStamp(0.13714736715866127);
    msg.setSource(9308U);
    msg.setSourceEntity(203U);
    msg.setDestination(35414U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.39284992739624314;
    msg.lon = 0.6081976091412772;
    msg.z = 0.06313538532558682;
    msg.z_units = 153U;
    msg.speed = 0.38731997423137643;
    msg.speed_units = 154U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5703912717772289;
    tmp_msg_0.y = 0.5432267884881021;
    tmp_msg_0.z = 0.582587767580209;
    tmp_msg_0.t = 0.21762731414323977;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.476017768385971;
    msg.custom.assign("KSHEWMTQHOGVHGSCBNQNVBUOLJEWYZPYDFQZIIURFDXWWMOVGSRJIYGXCKYOMUZ");

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
    msg.setTimeStamp(0.08876834655238885);
    msg.setSource(54591U);
    msg.setSourceEntity(118U);
    msg.setDestination(10806U);
    msg.setDestinationEntity(164U);
    msg.vid = 2287U;
    msg.off_x = 0.9626611215617079;
    msg.off_y = 0.6747358633612951;
    msg.off_z = 0.37526897990715324;

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
    msg.setTimeStamp(0.5077723242931015);
    msg.setSource(21185U);
    msg.setSourceEntity(77U);
    msg.setDestination(22570U);
    msg.setDestinationEntity(70U);
    msg.vid = 45674U;
    msg.off_x = 0.11056940898716505;
    msg.off_y = 0.5582408654203714;
    msg.off_z = 0.7893113184379217;

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
    msg.setTimeStamp(0.8587454162301886);
    msg.setSource(24460U);
    msg.setSourceEntity(253U);
    msg.setDestination(17988U);
    msg.setDestinationEntity(1U);
    msg.vid = 9780U;
    msg.off_x = 0.26521863894150266;
    msg.off_y = 0.3677820095242693;
    msg.off_z = 0.9341888380354997;

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
    msg.setTimeStamp(0.12805204358908162);
    msg.setSource(18815U);
    msg.setSourceEntity(191U);
    msg.setDestination(63033U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.47872585716741367);
    msg.setSource(49397U);
    msg.setSourceEntity(191U);
    msg.setDestination(52733U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.16562987686506436);
    msg.setSource(58021U);
    msg.setSourceEntity(126U);
    msg.setDestination(16920U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.9764939919384442);
    msg.setSource(26742U);
    msg.setSourceEntity(243U);
    msg.setDestination(4801U);
    msg.setDestinationEntity(217U);
    msg.mid = 58664U;

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
    msg.setTimeStamp(0.7126060019514754);
    msg.setSource(42277U);
    msg.setSourceEntity(69U);
    msg.setDestination(543U);
    msg.setDestinationEntity(9U);
    msg.mid = 27553U;

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
    msg.setTimeStamp(0.5187809144327885);
    msg.setSource(25144U);
    msg.setSourceEntity(227U);
    msg.setDestination(8332U);
    msg.setDestinationEntity(108U);
    msg.mid = 38406U;

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
    msg.setTimeStamp(0.22080389318891414);
    msg.setSource(41690U);
    msg.setSourceEntity(80U);
    msg.setDestination(56217U);
    msg.setDestinationEntity(186U);
    msg.state = 37U;
    msg.eta = 26913U;
    msg.info.assign("TIFJYXWMNFZUVGVFVGTIUOPVECRIHOQDWBYELNTQVJZGRYPZQFUPHRDDGNBMVKVPKABADPQSVZQGDRVKWTUHAPMNPUHQGNIYEWKCXAUXLLCFZSSOHLGCRWIKCJOMXGMNUAF");

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
    msg.setTimeStamp(0.439280300274435);
    msg.setSource(52542U);
    msg.setSourceEntity(188U);
    msg.setDestination(54893U);
    msg.setDestinationEntity(19U);
    msg.state = 167U;
    msg.eta = 25934U;
    msg.info.assign("DVUJYMIZKECXOIPYGLFPYWFNSIUOMUDZPAKGEOMDUQSWMPWNRAXHYWQZJGGCB");

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
    msg.setTimeStamp(0.33009158453769016);
    msg.setSource(63717U);
    msg.setSourceEntity(93U);
    msg.setDestination(40253U);
    msg.setDestinationEntity(18U);
    msg.state = 224U;
    msg.eta = 58404U;
    msg.info.assign("IVRLITVHIUFGQDNORYOPMOJULRYGB");

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
    msg.setTimeStamp(0.8605593040508898);
    msg.setSource(45582U);
    msg.setSourceEntity(53U);
    msg.setDestination(52927U);
    msg.setDestinationEntity(147U);
    msg.system = 7168U;
    msg.duration = 6660U;
    msg.speed = 0.9846745502808699;
    msg.speed_units = 11U;
    msg.x = 0.9390881259327116;
    msg.y = 0.5972618989396098;
    msg.z = 0.9339555291198782;
    msg.z_units = 105U;

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
    msg.setTimeStamp(0.15776233854523725);
    msg.setSource(34727U);
    msg.setSourceEntity(226U);
    msg.setDestination(9492U);
    msg.setDestinationEntity(138U);
    msg.system = 39913U;
    msg.duration = 47683U;
    msg.speed = 0.5182158069439596;
    msg.speed_units = 7U;
    msg.x = 0.6566134264229494;
    msg.y = 0.3829721421250799;
    msg.z = 0.05226844304102929;
    msg.z_units = 230U;

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
    msg.setTimeStamp(0.1450169102557588);
    msg.setSource(20916U);
    msg.setSourceEntity(165U);
    msg.setDestination(34575U);
    msg.setDestinationEntity(217U);
    msg.system = 48103U;
    msg.duration = 588U;
    msg.speed = 0.20833525216998972;
    msg.speed_units = 205U;
    msg.x = 0.622147839525308;
    msg.y = 0.2917292666204483;
    msg.z = 0.41520884069434894;
    msg.z_units = 80U;

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
    msg.setTimeStamp(0.4619435693476175);
    msg.setSource(23518U);
    msg.setSourceEntity(177U);
    msg.setDestination(38623U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.4399766869458255;
    msg.lon = 0.3422462960205652;
    msg.speed = 0.5858981292848245;
    msg.speed_units = 225U;
    msg.duration = 63612U;
    msg.sys_a = 27250U;
    msg.sys_b = 34809U;
    msg.move_threshold = 0.7685128756293184;

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
    msg.setTimeStamp(0.4085745791948815);
    msg.setSource(8578U);
    msg.setSourceEntity(204U);
    msg.setDestination(22698U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.8290329856448545;
    msg.lon = 0.8893848860459312;
    msg.speed = 0.035938200664998976;
    msg.speed_units = 219U;
    msg.duration = 23808U;
    msg.sys_a = 47999U;
    msg.sys_b = 3617U;
    msg.move_threshold = 0.5754681164706998;

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
    msg.setTimeStamp(0.024883840985485906);
    msg.setSource(4742U);
    msg.setSourceEntity(11U);
    msg.setDestination(32981U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.7139854240278558;
    msg.lon = 0.4177941988833729;
    msg.speed = 0.8626171212995377;
    msg.speed_units = 131U;
    msg.duration = 8248U;
    msg.sys_a = 14833U;
    msg.sys_b = 57598U;
    msg.move_threshold = 0.1708915616732044;

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
    msg.setTimeStamp(0.41588100233303427);
    msg.setSource(21413U);
    msg.setSourceEntity(45U);
    msg.setDestination(4666U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.7511863649216054;
    msg.lon = 0.29244112017449986;
    msg.z = 0.5015374663436558;
    msg.z_units = 116U;
    msg.speed = 0.9966358279869738;
    msg.speed_units = 39U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7080100104509023;
    tmp_msg_0.lon = 0.9821696077400862;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YOCHHOGNPWLADHPISASPLGJQNZKJRTTERTDKLPVRHJNZLTBNOVKHDYNERLOPOIEGSJQECLGDYURLMMOQWDYZWUZOASXFIFQJCYAZMWUOGAXDUEJPALIKGUDHSIFRFGWLVQSBCDDMQAVDKONYVMTPPTXZUOXKWJNBJRXWMXCSFPVGWWZBTJLUTVHBAYHSFURBZKFYVWJINGMBFCCFBIQ");

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
    msg.setTimeStamp(0.984459492243084);
    msg.setSource(46449U);
    msg.setSourceEntity(12U);
    msg.setDestination(43707U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.6613786445728075;
    msg.lon = 0.1587845695558504;
    msg.z = 0.7995118990128117;
    msg.z_units = 14U;
    msg.speed = 0.649757504594386;
    msg.speed_units = 106U;
    msg.custom.assign("ZGKJOPUQQWLEWKSGXVAYZLEVSPCSGXQHNMMSICWMTIVPZENPDWABQKSIFDKBLWECJRDDFTXMBRHCCZNZYINISGKWXWTVYPQQMSVEWHFEUOOROHRXXBJPCLELOCCDUZJXKQJXIKOERIFSOGYMPDCNUFEBGUVDYMYTUMTJQBGPDYBAIBPQ");

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
    msg.setTimeStamp(0.05163748100227028);
    msg.setSource(10035U);
    msg.setSourceEntity(200U);
    msg.setDestination(35778U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.9381872736158798;
    msg.lon = 0.863155362468694;
    msg.z = 0.8957077932060904;
    msg.z_units = 207U;
    msg.speed = 0.22212865943899296;
    msg.speed_units = 81U;
    msg.custom.assign("RJHYRBBNGSEIKZXQCNDIJRLPWSYUISTIRMTNOQBEHQBVGZCKJVAHRZLDZXPAIOMJZLXYSKSTWMFUAIWLNYWGVCVXOUSERIXTFHACW");

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
    msg.setTimeStamp(0.044775608140530054);
    msg.setSource(50012U);
    msg.setSourceEntity(130U);
    msg.setDestination(24026U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.3990267940491672;
    msg.lon = 0.25148903227256447;

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
    msg.setTimeStamp(0.3751419700358797);
    msg.setSource(1593U);
    msg.setSourceEntity(32U);
    msg.setDestination(49922U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.592274982133567;
    msg.lon = 0.24111763342356107;

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
    msg.setTimeStamp(0.36996333928431424);
    msg.setSource(6548U);
    msg.setSourceEntity(47U);
    msg.setDestination(39869U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.6610110849765318;
    msg.lon = 0.6356744801339079;

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
    msg.setTimeStamp(0.9743165694363736);
    msg.setSource(46907U);
    msg.setSourceEntity(55U);
    msg.setDestination(1189U);
    msg.setDestinationEntity(79U);
    msg.timeout = 42849U;
    msg.lat = 0.44811476101960024;
    msg.lon = 0.8664513222381643;
    msg.z = 0.2554413503378469;
    msg.z_units = 188U;
    msg.pitch = 0.7484634091231372;
    msg.amplitude = 0.16518564513931455;
    msg.duration = 38374U;
    msg.speed = 0.4095259715830126;
    msg.speed_units = 128U;
    msg.radius = 0.5174932489906535;
    msg.direction = 144U;
    msg.custom.assign("BSSYBKNXWRWQTCTRCFLKCJSOPWYHOKOMTTBKCAVNZIEWZDPJVCNPWB");

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
    msg.setTimeStamp(0.41132982326841117);
    msg.setSource(33505U);
    msg.setSourceEntity(109U);
    msg.setDestination(60176U);
    msg.setDestinationEntity(96U);
    msg.timeout = 64534U;
    msg.lat = 0.73619219262172;
    msg.lon = 0.764201136305971;
    msg.z = 0.25794257467958415;
    msg.z_units = 111U;
    msg.pitch = 0.6971446001750382;
    msg.amplitude = 0.10840037483894271;
    msg.duration = 4359U;
    msg.speed = 0.5970625855870154;
    msg.speed_units = 237U;
    msg.radius = 0.3599269254893164;
    msg.direction = 237U;
    msg.custom.assign("PYSFEAPOGEHBQXPDLXIGPJCNBRWGFVPNWMCHZZUXNNQCNAWTNAZEOIJJAVWZSDFFSWLKQMQRUHDWWLUDMODHJIGCCKUCUKGPGVYCXPFIHNZJJRHKVRXIYD");

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
    msg.setTimeStamp(0.8482799104103407);
    msg.setSource(10521U);
    msg.setSourceEntity(124U);
    msg.setDestination(363U);
    msg.setDestinationEntity(54U);
    msg.timeout = 64782U;
    msg.lat = 0.6106713322500217;
    msg.lon = 0.8583062717889496;
    msg.z = 0.7717805073242527;
    msg.z_units = 41U;
    msg.pitch = 0.18396635692007024;
    msg.amplitude = 0.2723362452986329;
    msg.duration = 48813U;
    msg.speed = 0.7742484277782389;
    msg.speed_units = 78U;
    msg.radius = 0.42355927899244716;
    msg.direction = 170U;
    msg.custom.assign("TYHNXUFZSYASEQVOJJXSZBNEDQBKJISNPMEOUTTTFPZBLYFTDMVYCMDUCAQGQGYLYCTIWXX");

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
    msg.setTimeStamp(0.593969516520117);
    msg.setSource(9919U);
    msg.setSourceEntity(57U);
    msg.setDestination(31353U);
    msg.setDestinationEntity(62U);
    msg.formation_name.assign("QYTDZXKHORJSCXEUHLSPBLZGDOMCGELZURIVBIWGCKXBNDMXQYNDZQATSWSLVRECIAYOCFSJHIMXVEFRUAUWLWWYVJRAEBWUGNSRJXAMNVHRZFFLZTJWKMDBNQPSKQVQMAVOTMCDNMULPWGUKZFKASDE");
    msg.reference_frame = 181U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52234U;
    tmp_msg_0.off_x = 0.5401990990470176;
    tmp_msg_0.off_y = 0.36781279907461795;
    tmp_msg_0.off_z = 0.935073680501997;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MHEXKUWTEDZWXHRQKEIVFZDYHIQMXLTDCPFUL");

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
    msg.setTimeStamp(0.6517216127091712);
    msg.setSource(25482U);
    msg.setSourceEntity(241U);
    msg.setDestination(59710U);
    msg.setDestinationEntity(111U);
    msg.formation_name.assign("UGUYQRVSCTKUIUNVZHMMQOLPPJKPOSIOKPPSGCEZRTLLVBYXVN");
    msg.reference_frame = 43U;
    msg.custom.assign("TAGYYSIQGRHGLETZWVRZFILOSCHXDZKPNUXLCOTHCVRCFIMRHSJHETPOQCIDPLGSBPQLLVETAGJQNGOPNKEDPJUVZRMBHWLKORTYRIKATIGNUISWSJPNW");

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
    msg.setTimeStamp(0.154802735848398);
    msg.setSource(48038U);
    msg.setSourceEntity(13U);
    msg.setDestination(54392U);
    msg.setDestinationEntity(17U);
    msg.formation_name.assign("IXNCWVXGWZMQHVUDRNXBTCFYNNAOEUBYLJRIUMOVIWGNXOEARKVOWFDWJBXUTTWCTARZXAPKBVGCZSMGGFSOZWTYSAPFLCBOPSJJMRUDIENDVFPOLMPRBSMPDEKLFHQHNKHGQSHLACHPIOTWBCHSUSCZMBMWXYZMPJIGFIDOKUYGJAGZTSBQLLVFZSQTLFEYJTPPKBYKZ");
    msg.reference_frame = 233U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27373U;
    tmp_msg_0.off_x = 0.9161564550569521;
    tmp_msg_0.off_y = 0.048726697320092494;
    tmp_msg_0.off_z = 0.08948865439444165;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WIQKQCNTZQRHVBSRBLOEKUHFINGSCXNSCRFRVJXGTPYABIOVXOFHQATKUCODJWVMICTLOEIQXHUYTEMEBBUPVGSKUFCFFZXJLLHCJNWSBGFIGOQNRHOQTFYDSSMRQMTMUAIMYOJEAVPUGNXMJWAYLVAZKADPZPPC");

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
    msg.setTimeStamp(0.8378158388847062);
    msg.setSource(34604U);
    msg.setSourceEntity(47U);
    msg.setDestination(6007U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("CRHTKARCANMJWNOEEFQVBCKHDLBBTBSZQZFURBPOWSKWWOBQZSAVIYXSVSUUAYKPWGRAFPQGDQCMGZKFXLADUDLANUFWHPTXYIBQTTHILRQEGIMYR");
    msg.formation_name.assign("HXCKIDKROIPMENTFVRPVJNQDJOMTUTRRVUPBBEKAQINSTFCOXETZUKSSDAWEMYJTMOGKLGQSKUZAYXBWPKIGXLQUCSRHVLZOHRQIZYFW");
    msg.plan_id.assign("NWYFDRBBZLBJGBNCKZEMGRWIHCALHLWXWNLDJKSGSYBALMQKUUNBGYNXAXVQWWYCUEFUNGYBAZZEOYXQBYJGWARUPAPQVOKFHERKZQUOHPFJUTJQPJTELVRZGDXOVTOFOZATEMZYPIXICVNNQFFMIPPAHVLREDOYBKDGMDTBHXNMRTTKAJXDSLUEOPSIAWJISOECSQDMJWNFMZLRIVCDTKSKJQSTWCUTHXVKLHFODIYEMH");
    msg.description.assign("YPSEJYBHBGWRJQPOZMRIDXRNBDIRNWBHVHPYJLEVXTACMZODFYYORXRGELEQUHKLRIIZWHUDCRUKBRJSXMTIWXOBTUSXUEZSYUPUOEWATKFLOKUEAATVFZWWPYFSOZLCNSJCWVIMSTYLNAOEINBQBZHDLNIGCMJDZYUKPAQLKENOVVGXHNVVGJAGMFQRZWUQFSJFVYKHFBLJXNQZTTKQCSXPGMJHAVMODFISTGQTCHPAEIFLKCWDXMA");
    msg.leader_speed = 0.46599439520072405;
    msg.leader_bank_lim = 0.47568203725519886;
    msg.pos_sim_err_lim = 0.6605271968095939;
    msg.pos_sim_err_wrn = 0.030176771804888758;
    msg.pos_sim_err_timeout = 6639U;
    msg.converg_max = 0.5645393978776789;
    msg.converg_timeout = 25342U;
    msg.comms_timeout = 55046U;
    msg.turb_lim = 0.0825053901727184;
    msg.custom.assign("NZSFFLAFRJUEXPFVPVRWNLFWINXTTWQKCPJANZUURHNWHKBIMEYQQAXOHHRBZGTXQGYUGVUDRLGNVUQSOJUODORZXVELSSPTNLEMJACJCGLNQDRHWMGIKQDMWGZMPJFCLDSICVETDZSLBQHKETIAFSWAOTKDPBYCXYNYOCMXYCPZMAJUMDPZXWYXKHJVSKRTJIDWGEZECBPHQGVUECBSQKYTRVBMIFFU");

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
    msg.setTimeStamp(0.8221297318474086);
    msg.setSource(65252U);
    msg.setSourceEntity(195U);
    msg.setDestination(29064U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("BFIIPRKIYUBASSCDDPTNZYBCOUGZCNYDAIBMUDCQTAGBJOGEBDFENOHRJEHZJWZNSOWMSISNZCGDXSAOGGIRIHUYANLRWXQVPQKTWLGXSJVWTBVZZFYHXHEMMVOPOLSGPXATMPLHURRPBYKMLIHHUOYEATVFFEJVUFQAYLTKTPCHL");
    msg.formation_name.assign("KZSWLIUYJWYDRGUKFLRQFVOKYBQ");
    msg.plan_id.assign("AHHVJHWEVAPMEVGST");
    msg.description.assign("WGNJXUENAFIJHMMIEFSBHHIXKVCRBWJZRNNRYSBSTADOLUXUGWZNWDZFXAGSWQPIQTTTLIDMUWQOCPJYBLNHTROWBXDXRJYAASLVLDRSYZECNOS");
    msg.leader_speed = 0.2836717843157779;
    msg.leader_bank_lim = 0.9052790431576256;
    msg.pos_sim_err_lim = 0.2111078158678965;
    msg.pos_sim_err_wrn = 0.8225777135165404;
    msg.pos_sim_err_timeout = 65233U;
    msg.converg_max = 0.9031960448194846;
    msg.converg_timeout = 50954U;
    msg.comms_timeout = 35368U;
    msg.turb_lim = 0.7054315456558721;
    msg.custom.assign("DHFRYIMPKQMNLJJDXKDIFUGPPRAHUSIMTJTYMSEZZNUWICWKCLDOZBAXTYMGRGVUBWLFHRMQSDMEJKAJUSFWORWTQLCQAFXZEXATGQOOFLDBVOFMQMNLIQNSTKRSGPZHKSVCVIRAKYEDLNXGBQOZIVJKCFWRBCLVZXANPUYHGYJPTXPFSLSPRYNPUCNCWEIVVLKXPOGVAHKJJBQO");

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
    msg.setTimeStamp(0.3053828515997712);
    msg.setSource(14703U);
    msg.setSourceEntity(177U);
    msg.setDestination(54188U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("OVJXMHIHWBONJLNSKTZLVLFXLKQHDUKZDCVDPESUVVERACRRKIZPKTTUKNRRUCRYEXZCFOEXQIDFCBMWSIMQLDMOOIASWIPBEGFFFGJETZGQYOVSZLDYTUSVUHPRDHWYHCXLWLNZCRBXJPXAIAMFYKPXQNJ");
    msg.formation_name.assign("KSIGHNKXDRSIWSOEKQMTGOXMPYEHBMZEMTASAWFOSLJPLJMYFIEYCPRCSBDLDOETUHKQJEMPNIHHNODGIONKSLZUYJHRCBWPTWFTZZHQIRQWFFQRXDZAMAXDZLQPVRMBAOVYVQPTUCK");
    msg.plan_id.assign("MZVSGBNYEUPOSHQAIJUUYMDICJMODVRAUWBHEPZLRBFEWCWSXJNRPFUCXRATVQZKWKIAZFLZXNADSYOKDTGIHZHPTRVHLRJKSBSFGDAHQIJUUIGTELTGXLHZIPUSINWPFYMLXNSVBLDIKAPFVBFBCEEKQVMVSJRFJCFIGFOKJBOKNOQLJNDQLWRNVDGRUNJXYUGXLCHZDXQEMGNKOCZQMTTXOQDVT");
    msg.description.assign("UXHSCIVBMXOLCKBETTAFUXFPYTSTGKRVBDIQMHNGGAXXVACAHVMDJHFWJWQCZTABKCNMTSUTHVZIYBLWKFKJOPRKIRMEUZBMRKUWYDDBNUYSQQYRTJGSXLYLSJQOXMPWXJVGRIQG");
    msg.leader_speed = 0.4749602175259321;
    msg.leader_bank_lim = 0.30474965697356904;
    msg.pos_sim_err_lim = 0.7312557073993463;
    msg.pos_sim_err_wrn = 0.8989747047417586;
    msg.pos_sim_err_timeout = 7270U;
    msg.converg_max = 0.3881520365472978;
    msg.converg_timeout = 5827U;
    msg.comms_timeout = 4558U;
    msg.turb_lim = 0.7473074690502371;
    msg.custom.assign("HSNNFJIZXEUMDIXEVWWXXLDAYQYIAYBEWZDDAKMCBYXUPKUTWQRUSOPFRZHRVMOQYPVWCIFPHUSOCOJSDBZCVSJDDQMETKHEYMLDVQHVVMOEAIUBFSWTEJWHWESIVCPILFAETMANRCKLBFMZPTHLKXHKGWQAPNRGZHXLAPKZDOG");

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
    msg.setTimeStamp(0.9888576546228859);
    msg.setSource(18380U);
    msg.setSourceEntity(64U);
    msg.setDestination(36303U);
    msg.setDestinationEntity(202U);
    msg.control_src = 16292U;
    msg.control_ent = 131U;
    msg.timeout = 0.09780142602111164;
    msg.loiter_radius = 0.21542517676437467;
    msg.altitude_interval = 0.9428318642161367;

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
    msg.setTimeStamp(0.2398280093158759);
    msg.setSource(38708U);
    msg.setSourceEntity(37U);
    msg.setDestination(45300U);
    msg.setDestinationEntity(125U);
    msg.control_src = 21865U;
    msg.control_ent = 253U;
    msg.timeout = 0.898784265294951;
    msg.loiter_radius = 0.8910737340518706;
    msg.altitude_interval = 0.5225445722829256;

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
    msg.setTimeStamp(0.10823864269101724);
    msg.setSource(13804U);
    msg.setSourceEntity(147U);
    msg.setDestination(43803U);
    msg.setDestinationEntity(57U);
    msg.control_src = 55810U;
    msg.control_ent = 118U;
    msg.timeout = 0.7478438998110379;
    msg.loiter_radius = 0.18628175380955514;
    msg.altitude_interval = 0.23473056861090535;

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
    msg.setTimeStamp(0.4538528448283088);
    msg.setSource(65489U);
    msg.setSourceEntity(207U);
    msg.setDestination(36039U);
    msg.setDestinationEntity(170U);
    msg.flags = 159U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.15198106180642323;
    tmp_msg_0.speed_units = 199U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5577450240483288;
    tmp_msg_1.z_units = 10U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.25353547370614615;
    msg.lon = 0.5232832690010037;
    msg.radius = 0.1899663122325731;

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
    msg.setTimeStamp(0.8339643510070479);
    msg.setSource(10709U);
    msg.setSourceEntity(66U);
    msg.setDestination(48347U);
    msg.setDestinationEntity(43U);
    msg.flags = 102U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20344070921507396;
    tmp_msg_0.speed_units = 92U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6928534302495925;
    tmp_msg_1.z_units = 151U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.53242745631007;
    msg.lon = 0.07872765735390996;
    msg.radius = 0.5440091009743833;

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
    msg.setTimeStamp(0.09307144785934796);
    msg.setSource(38986U);
    msg.setSourceEntity(31U);
    msg.setDestination(2877U);
    msg.setDestinationEntity(236U);
    msg.flags = 231U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.45040737511947027;
    tmp_msg_0.speed_units = 237U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.09814073679053448;
    tmp_msg_1.z_units = 95U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.045066829492811156;
    msg.lon = 0.9645714131317232;
    msg.radius = 0.11122695085902012;

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
    msg.setTimeStamp(0.9960778179889289);
    msg.setSource(3839U);
    msg.setSourceEntity(209U);
    msg.setDestination(47177U);
    msg.setDestinationEntity(15U);
    msg.control_src = 63378U;
    msg.control_ent = 183U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 103U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.008947653641328324;
    tmp_tmp_msg_0_0.speed_units = 152U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12790076271630824;
    tmp_tmp_msg_0_1.z_units = 58U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.16184149016929117;
    tmp_msg_0.lon = 0.6784573110714479;
    tmp_msg_0.radius = 0.02590423412211884;
    msg.reference.set(tmp_msg_0);
    msg.state = 179U;
    msg.proximity = 81U;

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
    msg.setTimeStamp(0.10986301308078461);
    msg.setSource(40353U);
    msg.setSourceEntity(194U);
    msg.setDestination(49600U);
    msg.setDestinationEntity(66U);
    msg.control_src = 5691U;
    msg.control_ent = 207U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9969248529367252;
    tmp_tmp_msg_0_0.speed_units = 122U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.39877937246793993;
    tmp_tmp_msg_0_1.z_units = 41U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9705727950451217;
    tmp_msg_0.lon = 0.13183246754162037;
    tmp_msg_0.radius = 0.6830947059354435;
    msg.reference.set(tmp_msg_0);
    msg.state = 30U;
    msg.proximity = 245U;

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
    msg.setTimeStamp(0.4884608236132624);
    msg.setSource(43705U);
    msg.setSourceEntity(119U);
    msg.setDestination(33918U);
    msg.setDestinationEntity(175U);
    msg.control_src = 10513U;
    msg.control_ent = 173U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 43U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5661316735699805;
    tmp_tmp_msg_0_0.speed_units = 206U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5264221587074281;
    tmp_tmp_msg_0_1.z_units = 245U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8719893996119733;
    tmp_msg_0.lon = 0.6494843638787923;
    tmp_msg_0.radius = 0.96582668189828;
    msg.reference.set(tmp_msg_0);
    msg.state = 226U;
    msg.proximity = 9U;

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
    msg.setTimeStamp(0.6659997665403096);
    msg.setSource(13625U);
    msg.setSourceEntity(113U);
    msg.setDestination(19703U);
    msg.setDestinationEntity(136U);
    msg.ax_cmd = 0.23020074715209138;
    msg.ay_cmd = 0.01815343526060864;
    msg.az_cmd = 0.7405190351174102;
    msg.ax_des = 0.8118218064289854;
    msg.ay_des = 0.17324103015702874;
    msg.az_des = 0.18397958136695103;
    msg.virt_err_x = 0.18776035813118142;
    msg.virt_err_y = 0.17475560750805108;
    msg.virt_err_z = 0.6843362080222596;
    msg.surf_fdbk_x = 0.772404082948135;
    msg.surf_fdbk_y = 0.3193645669905839;
    msg.surf_fdbk_z = 0.4315826443901907;
    msg.surf_unkn_x = 0.36424063515650273;
    msg.surf_unkn_y = 0.020040396555657924;
    msg.surf_unkn_z = 0.3092961998958036;
    msg.ss_x = 0.07946214901292159;
    msg.ss_y = 0.19184039228206662;
    msg.ss_z = 0.3873333684610094;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SUZHVRXUPILFXGTDGQZKEWIPIXUXEOHYTNORXGFESYJONFJYWALCBUTGMLJDVZSQTFNTIJAZNZEJXDYSFMLOFHTXVSGJWLGWKAFZPKZKGPIVKCEJUILJNDTBLDNQSVQABYNBLWWVIEQRCLOQNMGIKDSTBOXBOPUQSKZVTYAMUBBEGRHDEQYKQCADHHXOU");
    tmp_msg_0.dist = 0.9086428106704283;
    tmp_msg_0.err = 0.32306778279411996;
    tmp_msg_0.ctrl_imp = 0.9233349971928398;
    tmp_msg_0.rel_dir_x = 0.4254779920649254;
    tmp_msg_0.rel_dir_y = 0.5219878381228995;
    tmp_msg_0.rel_dir_z = 0.3208678039116154;
    tmp_msg_0.err_x = 0.12683318947249378;
    tmp_msg_0.err_y = 0.20706419108943075;
    tmp_msg_0.err_z = 0.4357254090456255;
    tmp_msg_0.rf_err_x = 0.8315573334408501;
    tmp_msg_0.rf_err_y = 0.08921037190601944;
    tmp_msg_0.rf_err_z = 0.19919994686261222;
    tmp_msg_0.rf_err_vx = 0.7944397061989092;
    tmp_msg_0.rf_err_vy = 0.6632553440861526;
    tmp_msg_0.rf_err_vz = 0.5810766101776639;
    tmp_msg_0.ss_x = 0.3455911959559358;
    tmp_msg_0.ss_y = 0.5619734663842476;
    tmp_msg_0.ss_z = 0.33100648610237016;
    tmp_msg_0.virt_err_x = 0.8518847773733397;
    tmp_msg_0.virt_err_y = 0.8100215061180941;
    tmp_msg_0.virt_err_z = 0.6883612437780372;
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
    msg.setTimeStamp(0.42624312111321205);
    msg.setSource(36634U);
    msg.setSourceEntity(216U);
    msg.setDestination(44797U);
    msg.setDestinationEntity(122U);
    msg.ax_cmd = 0.23654000509456918;
    msg.ay_cmd = 0.13274266933330048;
    msg.az_cmd = 0.13652917126838826;
    msg.ax_des = 0.18355041702505792;
    msg.ay_des = 0.9049303932662262;
    msg.az_des = 0.011033711399117907;
    msg.virt_err_x = 0.21430664317859438;
    msg.virt_err_y = 0.3991547835761893;
    msg.virt_err_z = 0.037390433076637364;
    msg.surf_fdbk_x = 0.9285427138590168;
    msg.surf_fdbk_y = 0.20261242719223005;
    msg.surf_fdbk_z = 0.6347424174179992;
    msg.surf_unkn_x = 0.9963466818827326;
    msg.surf_unkn_y = 0.021499066749705698;
    msg.surf_unkn_z = 0.5167535447192405;
    msg.ss_x = 0.2535228360202548;
    msg.ss_y = 0.7180044501417561;
    msg.ss_z = 0.26720110138510567;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OYFJTUGKLBQLRQPUTJOCSVZETVIZOXGWMCHNLAAAKYTPUUPPVZDRIKZLTIWNZWCYLIOSPMMATDEXBYKXVGKQJXGSWNPBVXUEIPFHVVSRRDRMFCJLAEGMFOVOIIBQOHLGYERSJEDABYKARTWZFFIJNQHAMHFMWSSINHSKHPOCWGDU");
    tmp_msg_0.dist = 0.3039337652136719;
    tmp_msg_0.err = 0.35954425992723493;
    tmp_msg_0.ctrl_imp = 0.8141711545971394;
    tmp_msg_0.rel_dir_x = 0.2733271433120399;
    tmp_msg_0.rel_dir_y = 0.4399885816756216;
    tmp_msg_0.rel_dir_z = 0.6690042828695482;
    tmp_msg_0.err_x = 0.34149917235700367;
    tmp_msg_0.err_y = 0.008742962625550521;
    tmp_msg_0.err_z = 0.1875567473478852;
    tmp_msg_0.rf_err_x = 0.756426597121029;
    tmp_msg_0.rf_err_y = 0.5026307321757641;
    tmp_msg_0.rf_err_z = 0.8234429660044194;
    tmp_msg_0.rf_err_vx = 0.7235089418242052;
    tmp_msg_0.rf_err_vy = 0.5496524189057752;
    tmp_msg_0.rf_err_vz = 0.9132669212486794;
    tmp_msg_0.ss_x = 0.8056781288026811;
    tmp_msg_0.ss_y = 0.8379547967101446;
    tmp_msg_0.ss_z = 0.9786493277462551;
    tmp_msg_0.virt_err_x = 0.4572165327060046;
    tmp_msg_0.virt_err_y = 0.1111173802862897;
    tmp_msg_0.virt_err_z = 0.22668614582233837;
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
    msg.setTimeStamp(0.5014776803872745);
    msg.setSource(38509U);
    msg.setSourceEntity(212U);
    msg.setDestination(58397U);
    msg.setDestinationEntity(105U);
    msg.ax_cmd = 0.003978890621396003;
    msg.ay_cmd = 0.761784885151439;
    msg.az_cmd = 0.5454937338365946;
    msg.ax_des = 0.1748939862466804;
    msg.ay_des = 0.9483199960572993;
    msg.az_des = 0.03252612292368162;
    msg.virt_err_x = 0.29714493636231953;
    msg.virt_err_y = 0.3963412440316205;
    msg.virt_err_z = 0.6372334403454796;
    msg.surf_fdbk_x = 0.33279858820915487;
    msg.surf_fdbk_y = 0.06910103504650422;
    msg.surf_fdbk_z = 0.8266776257618913;
    msg.surf_unkn_x = 0.4890768186602378;
    msg.surf_unkn_y = 0.8135487648817632;
    msg.surf_unkn_z = 0.5561114212200624;
    msg.ss_x = 0.025068320596857485;
    msg.ss_y = 0.09828936320410075;
    msg.ss_z = 0.37762150169155895;

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
    msg.setTimeStamp(0.893141818848256);
    msg.setSource(21742U);
    msg.setSourceEntity(106U);
    msg.setDestination(47915U);
    msg.setDestinationEntity(175U);
    msg.s_id.assign("SDCSDKGOTQXIGHDJKVFZSMUCLXBCCNWHQPUYMMPOIWWFDOVLZXYZTAOYNWHBRHAFRCFNSYPMEHUYBJDYICAKPVUUTAPQWSUPKMRPMVQGDGFXWDJVVYLYZEASMHZKQWJZBJCXEQIAYRGEHBIFXZGKWJTAMGPSOHRPXDTVJCTFNLRHBKRRTQJZJ");
    msg.dist = 0.400835746920415;
    msg.err = 0.37914397261851396;
    msg.ctrl_imp = 0.3277061778972292;
    msg.rel_dir_x = 0.4909886842824419;
    msg.rel_dir_y = 0.8112410801809925;
    msg.rel_dir_z = 0.8530393607265436;
    msg.err_x = 0.16779500050051566;
    msg.err_y = 0.11553561510011279;
    msg.err_z = 0.5181321546477501;
    msg.rf_err_x = 0.4799361854164417;
    msg.rf_err_y = 0.9230644358377424;
    msg.rf_err_z = 0.5509089114657285;
    msg.rf_err_vx = 0.8156940874208416;
    msg.rf_err_vy = 0.6242369293625455;
    msg.rf_err_vz = 0.05286308866675071;
    msg.ss_x = 0.5763739658923969;
    msg.ss_y = 0.8079157673889341;
    msg.ss_z = 0.7369792947412924;
    msg.virt_err_x = 0.3451159509343342;
    msg.virt_err_y = 0.7469778871480305;
    msg.virt_err_z = 0.1683556679285353;

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
    msg.setTimeStamp(0.7362375216578098);
    msg.setSource(11140U);
    msg.setSourceEntity(127U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(171U);
    msg.s_id.assign("CKVULDAQVJTGCCLRBWWNBFDWCSKKQECECWAYYJHDFTMLUAREVVBXRUYDUXQTDNDRHMXCSWOGHSOYQPLURSOZMLLDIZUAOJAKROIBEVEXTZVFCSXFIETJXCDULZQKS");
    msg.dist = 0.4700093864168847;
    msg.err = 0.3023598742577681;
    msg.ctrl_imp = 0.5386695251696351;
    msg.rel_dir_x = 0.23865907172435452;
    msg.rel_dir_y = 0.44291606010503626;
    msg.rel_dir_z = 0.4244200927477877;
    msg.err_x = 0.6831032582265244;
    msg.err_y = 0.3189754686349019;
    msg.err_z = 0.679167463345494;
    msg.rf_err_x = 0.4082652962083344;
    msg.rf_err_y = 0.7830442918332678;
    msg.rf_err_z = 0.6591761971066217;
    msg.rf_err_vx = 0.2598817774313913;
    msg.rf_err_vy = 0.8612183400787332;
    msg.rf_err_vz = 0.7672708108842955;
    msg.ss_x = 0.5951645001378308;
    msg.ss_y = 0.2852679377252616;
    msg.ss_z = 0.20344287637587677;
    msg.virt_err_x = 0.8903952313270529;
    msg.virt_err_y = 0.9124940990441562;
    msg.virt_err_z = 0.6400148284595841;

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
    msg.setTimeStamp(0.43941355342186905);
    msg.setSource(58589U);
    msg.setSourceEntity(154U);
    msg.setDestination(27587U);
    msg.setDestinationEntity(161U);
    msg.s_id.assign("MRBEPURPAHBSXTKS");
    msg.dist = 0.728993318653354;
    msg.err = 0.46441693674927387;
    msg.ctrl_imp = 0.8446768176387358;
    msg.rel_dir_x = 0.4989848454312914;
    msg.rel_dir_y = 0.8570203143175829;
    msg.rel_dir_z = 0.8137892098465107;
    msg.err_x = 0.9604765757159152;
    msg.err_y = 0.4631875753257777;
    msg.err_z = 0.5154476217942892;
    msg.rf_err_x = 0.3883064682422245;
    msg.rf_err_y = 0.5649783437346548;
    msg.rf_err_z = 0.5206890558528328;
    msg.rf_err_vx = 0.5197091698720072;
    msg.rf_err_vy = 0.8587949796468517;
    msg.rf_err_vz = 0.8942339949832674;
    msg.ss_x = 0.38591584084784214;
    msg.ss_y = 0.47298028128345915;
    msg.ss_z = 0.6530399805509831;
    msg.virt_err_x = 0.2305354713030472;
    msg.virt_err_y = 0.6890908634821821;
    msg.virt_err_z = 0.7713772976118414;

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
    msg.setTimeStamp(0.4409575513213251);
    msg.setSource(61905U);
    msg.setSourceEntity(215U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(121U);
    msg.timeout = 1663U;
    msg.rpm = 0.4930096983239026;
    msg.direction = 254U;
    msg.custom.assign("UCDOJTZPDUSYRYSUKTPRMAOSPMDQVTVKBITVVERVBHDRKKCEEPZRSIOWBJGIDRXFUDACFOFHONNZGLHOUNXWZPMGFPEHFBINWXWQMOJTWSTMPTKLHAFERMSREGWQYMYLNXIAJIYNEAGJDNXJQLFYZIGJQGKGAFUEPQLLCLEUY");

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
    msg.setTimeStamp(0.547292299313929);
    msg.setSource(24164U);
    msg.setSourceEntity(169U);
    msg.setDestination(30188U);
    msg.setDestinationEntity(168U);
    msg.timeout = 11996U;
    msg.rpm = 0.7776256078534358;
    msg.direction = 89U;
    msg.custom.assign("DOCELMBWVGSYPHWLRIXOCZAWBEPZJHTXRBCRHDZEJWBNSGRSQEUGZYLEGVGANQTDWNOZTHHUIUTWPARDVNLBHPBTMUCINLTIMFGONVHOFRDPKCAYKKRVHTERHSWZFNSNTEFLUJJXWQTGMKAFVQXSUCGUJULZBEJGQFYCJQJDXILCHCFOPBSUFFQNXAPVSVUKQKPVRKVYGEJIEMDZXOAFYQASXZLRT");

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
    msg.setTimeStamp(0.3206612729529572);
    msg.setSource(23216U);
    msg.setSourceEntity(182U);
    msg.setDestination(58929U);
    msg.setDestinationEntity(97U);
    msg.timeout = 385U;
    msg.rpm = 0.31112871466241143;
    msg.direction = 198U;
    msg.custom.assign("DVJRAVSIKIGPMQQNGLBTZPOLRGHEEQNDEWXJHHVACXSWFLHKNDRVGNXZJHFNRYEDOFVIEZIHTOPAEKSIOBTCTHIGMJSRXOZELAAWBKWCOCMDCRSUYGMPRZJDWXHVLYNSZ");

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
    msg.setTimeStamp(0.1562538095135353);
    msg.setSource(26196U);
    msg.setSourceEntity(223U);
    msg.setDestination(16276U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("GUKCJTIQJHRUTEQVIASQUHETWMGLKNYMUIFRGDIHREVWYLDVHARYDHWGDPXXCVWNYLTTFZWQERNOQHNOYPNZFBDBSYSXLKHRAZOKNGLQAZOKTXBPQLCZDPFBCVBCJEHXIASZABGSZWFXDOINPKOVGQPPKCRTZBMMSIYEIAMMWLCPMYYNLRBGOEJJKFWAJTDEIUHUXJWTNOKJNXFDPVVRQOVA");
    msg.type = 47U;
    msg.op = 211U;
    msg.group_name.assign("LVWUMPZGOSAEDKSLATYTECORHKJTXDCBBOJCXIOLTTSAHALDRMIDHCQUXSJIGRNXKZGUWJIQPGIMWANNNFSHVDHDRUMCMOWYGZC");
    msg.plan_id.assign("YBPMZNVDGDAUKLCFBSCYAYIVZRTWWOXKQPSDBNRYSHJECYSNSFMLIMTHUSWJIZZNXYIJOYRXIBIYWEQGEXHCFWDZFBXUVAPMREEHAAXQQEMXVRXVJCKTXCOFSPGCFAGZLLMDTKRDWWZQUXRZGIDSHNDOOAWOSHOKFDKCPFTGRITAFTMCPLOTBCSLUHPVIJKUJJQHTOGWUBNPNERLATYGMFUVEPRGJLHW");
    msg.description.assign("BVLRZFLFEYZEKNXPUREMBPYGCIATFAWZTYCYOKDBPGHBJTPMCWEHRXWYMQTOBMGGIWZNVTCSJEIHTQJGLTLWLLBOIACZRKGXARJDUCUKSWYPSSVIFP");
    msg.reference_frame = 121U;
    msg.leader_bank_lim = 0.9098493714289888;
    msg.leader_speed_min = 0.8130538061762881;
    msg.leader_speed_max = 0.288218898761209;
    msg.leader_alt_min = 0.7956985070268557;
    msg.leader_alt_max = 0.9978104827868766;
    msg.pos_sim_err_lim = 0.24308354850357716;
    msg.pos_sim_err_wrn = 0.08702586872835538;
    msg.pos_sim_err_timeout = 14204U;
    msg.converg_max = 0.9518100831647761;
    msg.converg_timeout = 28403U;
    msg.comms_timeout = 32908U;
    msg.turb_lim = 0.20239651586869234;
    msg.custom.assign("QFMPXWHQSJMYYCPNJMAWTGQNIMFEDBXNVRYGALLRTZZRUNDNEXBPDACSDSTRYHDHOYCQCULCQIFIQEPDFKWKVIQGFIOHKQMGZQPFZSECKMREINUHOYADXSVFOPUZTACMSEGVOVREWFRHVLOAWFVHCO");

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
    msg.setTimeStamp(0.7235215416590766);
    msg.setSource(64674U);
    msg.setSourceEntity(174U);
    msg.setDestination(62651U);
    msg.setDestinationEntity(53U);
    msg.formation_name.assign("ETLTTGPFIZZEYMOEZIJPMQSJDKDTGQULJMZDMXPPKZCEXHZBYNWOOWRCJQCORATYECXFSVKIZHMFIYBVQNVHBRNCUAMKISQFHKXDWIXRLIUVVOZJZRLGATVN");
    msg.type = 144U;
    msg.op = 107U;
    msg.group_name.assign("WVOKKPYFACRICLBSFCVVIUQWQPYGHFYJBXDKPXLZPRSHAZVWEZVEJNYGAGJFLQVEYMTNNSZFDFGZAHBKLZEBTVXSLDIHKZTJWMIQJWOUNZIISCJCTAAFXEKIZUKRNBOEKQQUHRLWSDHOTUQGXMLUMPRAJDAOQSCOMJTDIPDKSRLOSAFPNHBVTHOFZDFCLJOTBTQULNNR");
    msg.plan_id.assign("KAAWUZDLLNKIULLYJAODBEHVXCEWJBJIGKQUBVRMSZCYNJYAFSNEHFIBHLNJFHTIYBZXLDDSPKXCBGXSZSJTUQPFGMKKCXINWPVDVATOOYAEXUGRJHKDHWFKIDELIBKMGPVVZWOWXCBCUYRSFMSCIAQSIROGDEGQZSPKJZTVZXHMELBRFZNRGLZMRTQRYOVMGUUMTAQLR");
    msg.description.assign("SHDPXJZTWKKMZXKUNRHNXSYRPQCUNBCRFZ");
    msg.reference_frame = 248U;
    msg.leader_bank_lim = 0.680167648575966;
    msg.leader_speed_min = 0.633773162656219;
    msg.leader_speed_max = 0.11876630583344039;
    msg.leader_alt_min = 0.9729473357514622;
    msg.leader_alt_max = 0.04220102546571669;
    msg.pos_sim_err_lim = 0.8807568639629216;
    msg.pos_sim_err_wrn = 0.7294209545395066;
    msg.pos_sim_err_timeout = 54441U;
    msg.converg_max = 0.6405753762743945;
    msg.converg_timeout = 24080U;
    msg.comms_timeout = 11668U;
    msg.turb_lim = 0.5138660792878217;
    msg.custom.assign("FNNRSTLYISMZKWXCOKCLLPAYUXMPHRHOIPBEIUGTCBCUWVU");

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
    msg.setTimeStamp(0.3192624398271664);
    msg.setSource(51426U);
    msg.setSourceEntity(216U);
    msg.setDestination(62397U);
    msg.setDestinationEntity(70U);
    msg.formation_name.assign("GVUTKHESLZFHHGNCVJIFWCRPYOZUDAJMKOUDONNWBYSPPJUGQIJIUFBWLNOZAPCPPLIASQMSMGRYQTJHUPEFAENHDWBYAXEHXTXTYUUBNYMQDSKFYGURVSBQAYTDGJRIPTJRVBCYGPOHVRWGKTWYLJDRWZRMVKVNMCLBXDQAWFIBLQHQCNLGGOHK");
    msg.type = 7U;
    msg.op = 222U;
    msg.group_name.assign("JUKWOYVRICTKGOJNGLJPXQIEVYFOMPZEZXOMPBVDOAQEUNRQCATNHTKBCAIXTYGUYDCASYBEUGFTFXQQRZJZWLPVKWBACKHANIYWSHJYODFJQAEZMFBXHTCIDZPMGVVQUABFWIDHVWSPINYXLAWLDSUHKHZFPVHXBWUEDTLKZHCLCIDECSKFPKZYURXQORCOGO");
    msg.plan_id.assign("QITJUOEUXFUKSLJKIZBWKTPZD");
    msg.description.assign("FJEGRLVPHLSD");
    msg.reference_frame = 63U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22240U;
    tmp_msg_0.off_x = 0.45679952855713857;
    tmp_msg_0.off_y = 0.6297519451035122;
    tmp_msg_0.off_z = 0.9099746803564683;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8937279160240744;
    msg.leader_speed_min = 0.8101655114930658;
    msg.leader_speed_max = 0.4784336769865779;
    msg.leader_alt_min = 0.3910093745588712;
    msg.leader_alt_max = 0.476773967194277;
    msg.pos_sim_err_lim = 0.21585622376058688;
    msg.pos_sim_err_wrn = 0.1011372039224393;
    msg.pos_sim_err_timeout = 13646U;
    msg.converg_max = 0.2778501846307042;
    msg.converg_timeout = 1744U;
    msg.comms_timeout = 60287U;
    msg.turb_lim = 0.41099512525872883;
    msg.custom.assign("LGTTTMKPUOCIHDSCXMYPCRKOFDPJZJSCXQIBATVCQOZZSCIUTUPXPFVBASARXIYGNGEAJTZKDFVQBZOWJWVMLFBSOVENFARRGBAG");

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
    msg.setTimeStamp(0.9878065040766317);
    msg.setSource(15499U);
    msg.setSourceEntity(94U);
    msg.setDestination(48638U);
    msg.setDestinationEntity(5U);
    msg.timeout = 27860U;
    msg.lat = 0.3068772541420699;
    msg.lon = 0.5038018538249569;
    msg.z = 0.9956620193777266;
    msg.z_units = 215U;
    msg.speed = 0.7493460715012212;
    msg.speed_units = 4U;
    msg.custom.assign("MZARSGHDHYGERTBEOXKYKSOWOFIBQWTNHECOATHMFULJVXHUAOUYKGVKPLZHGUUMGXDDJQRQNTGHEJIDBSTQEQICPISDGMKCFTZSIWYGRXEWPHMAQAELFSIBFRKZZRPQVNBUZCFCTZMYXLDZCBWOIDWLZWKXLVSONEPVYCMLMKONKRGIOXTEDRVPQJQDNVMJJIWBWFAZLADCIPCPJFVJVYSNYXMUGYTOHRYEFKVLPXHJUSLBNU");

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
    msg.setTimeStamp(0.8607349703470387);
    msg.setSource(31070U);
    msg.setSourceEntity(122U);
    msg.setDestination(21716U);
    msg.setDestinationEntity(156U);
    msg.timeout = 46209U;
    msg.lat = 0.06602367529403863;
    msg.lon = 0.16922200175779112;
    msg.z = 0.6468439532606115;
    msg.z_units = 81U;
    msg.speed = 0.05733012504964741;
    msg.speed_units = 247U;
    msg.custom.assign("TZLGWTCIJXECDKWMOPBDPEPPIGFZNPYXPQQFNYEWDWZGIMFOWMCXXTGDVHBJLHVOMHZQWFZGVMKRPHAJSRHFRUNBYCDQVDDKSUJSKICAAHCNYHOFGLUEIBTAUVRBGPUEXMGYONMTUJKYZOOEZNUSEIWULZNPXFURQLAVLJVRYKEYNOQZCNWAWIRJDLLBBYFQQIRRJCHAQKBOFMXYCLOKHTEJGZRWUTIXLSDJAMAQVTCSSIKGBBN");

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
    msg.setTimeStamp(0.5720910234794817);
    msg.setSource(16526U);
    msg.setSourceEntity(98U);
    msg.setDestination(22318U);
    msg.setDestinationEntity(250U);
    msg.timeout = 14447U;
    msg.lat = 0.8105191422089492;
    msg.lon = 0.5138007538135082;
    msg.z = 0.1294161069499361;
    msg.z_units = 188U;
    msg.speed = 0.6691600489541158;
    msg.speed_units = 167U;
    msg.custom.assign("BVGDFSCIUTMNIYPJOXRSARPNBDGYOLCLXLADUDZHEEAXIHHKJCYVMRSCUPXHJKWNEZWGRETXXTDIXMOMMSCGIWJPLYWDFKUJEQKZSHBCNUGVHHHOFDNZFVBJTAAXJFRBZQZZQSBYGVOZJDPAHCXTWMRAIJZUYSILBLCDNYYNNIDEUFHKVVEIOWATTPYJWWVKZUXPCCPUWQP");

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
    msg.setTimeStamp(0.9223270910989751);
    msg.setSource(28837U);
    msg.setSourceEntity(186U);
    msg.setDestination(44430U);
    msg.setDestinationEntity(180U);
    msg.timeout = 56186U;
    msg.lat = 0.006827351866760645;
    msg.lon = 0.861317578943845;
    msg.z = 0.08661781523876855;
    msg.z_units = 114U;
    msg.speed = 0.32421570410049083;
    msg.speed_units = 234U;
    msg.custom.assign("ZHGLWNNKIPIFEOHZXDSGOUSHKLTVYKTCBQTVCKTMDYGUUVVSBRFINWOOAYKRGIJCDQRHVULMEMJBXSERBIIEEMVAFAYBKLXQMAOCNHZMZUZQKBWWPVVTTDAQGTFSWDVNKXIFKKQOSGNEUCPSTLZWDUWFCJPGABPLQLIFHVUDQMNXJZQWYULZORZJZMOUSFIDARJCMHWHPEXACDRAPLJXRNNEXSNYEJRROYXTAYJ");

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
    msg.setTimeStamp(0.9986634116663571);
    msg.setSource(18473U);
    msg.setSourceEntity(32U);
    msg.setDestination(30035U);
    msg.setDestinationEntity(68U);
    msg.timeout = 46240U;
    msg.lat = 0.5757123472002151;
    msg.lon = 0.7484903551511363;
    msg.z = 0.05252414046689802;
    msg.z_units = 157U;
    msg.speed = 0.17385226652418828;
    msg.speed_units = 179U;
    msg.custom.assign("CGOZJFNYTOAIZBJIEZEHDSYZPTMEUTNBNRQBHVXQTZMSBBQNDUXIMKQWOJLVXJLBIYTMOTCAJDHFIPRWVONLMPKBPUQHWXUEMVASPFIOKZCQPEDWDLQKWHDBHZBRTOSAGEACPCMFXNWEDYQNLVEFOAIYRVNDAJRXAJUNCZHUGGMGTCPXQECHLSVWVLIWXUSEAQXFYAJKLPRPN");

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
    msg.setTimeStamp(0.3928268200260009);
    msg.setSource(50237U);
    msg.setSourceEntity(44U);
    msg.setDestination(45087U);
    msg.setDestinationEntity(13U);
    msg.timeout = 51899U;
    msg.lat = 0.8181888618008132;
    msg.lon = 0.5689925356160347;
    msg.z = 0.9726201272968604;
    msg.z_units = 223U;
    msg.speed = 0.028277704384547353;
    msg.speed_units = 217U;
    msg.custom.assign("HVSOGOBTEOQGOZYRSOXXFJKWTHHXXKICJGAEDLFQIZDKEWNLNHUJKNYLXQBPUWMFDDVATXHKZETRAACLZWYVWUYEVTFZOOUXRVMMKVSHSBPIRIMTWHPNMEBSKCAECOEPTTCRJPQDBFVBRCLFF");

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
    msg.setTimeStamp(0.6736826796411318);
    msg.setSource(39793U);
    msg.setSourceEntity(84U);
    msg.setDestination(16281U);
    msg.setDestinationEntity(12U);
    msg.arrival_time = 0.3714830550350302;
    msg.lat = 0.9931213063634979;
    msg.lon = 0.4965697294605037;
    msg.z = 0.45743744366415395;
    msg.z_units = 235U;
    msg.travel_z = 0.05209814726379247;
    msg.travel_z_units = 224U;
    msg.delayed = 97U;

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
    msg.setTimeStamp(0.6621188114618793);
    msg.setSource(15509U);
    msg.setSourceEntity(226U);
    msg.setDestination(48228U);
    msg.setDestinationEntity(116U);
    msg.arrival_time = 0.14270216103357414;
    msg.lat = 0.12767481945675585;
    msg.lon = 0.10278904065241856;
    msg.z = 0.6672443585858095;
    msg.z_units = 36U;
    msg.travel_z = 0.4707473143705757;
    msg.travel_z_units = 72U;
    msg.delayed = 20U;

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
    msg.setTimeStamp(0.930527762677556);
    msg.setSource(51221U);
    msg.setSourceEntity(41U);
    msg.setDestination(10008U);
    msg.setDestinationEntity(61U);
    msg.arrival_time = 0.5425785535403633;
    msg.lat = 0.8631274366414095;
    msg.lon = 0.3835145036640195;
    msg.z = 0.049689708543280364;
    msg.z_units = 109U;
    msg.travel_z = 0.25535143564657103;
    msg.travel_z_units = 61U;
    msg.delayed = 128U;

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
    msg.setTimeStamp(0.25690684098357675);
    msg.setSource(55217U);
    msg.setSourceEntity(103U);
    msg.setDestination(29611U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.3589045349121478;
    msg.lon = 0.47641925089386794;
    msg.z = 0.8969750123399253;
    msg.z_units = 150U;
    msg.speed = 0.7642193828850938;
    msg.speed_units = 67U;
    msg.bearing = 0.17155315452379738;
    msg.cross_angle = 0.1301020204235005;
    msg.width = 0.6746629321582321;
    msg.length = 0.20706566630640388;
    msg.coff = 24U;
    msg.angaperture = 0.034733166384986025;
    msg.range = 9128U;
    msg.overlap = 73U;
    msg.flags = 99U;
    msg.custom.assign("WAOFAVJJKGFOEGYYPZQGPCGJVJL");

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
    msg.setTimeStamp(0.2897096542925631);
    msg.setSource(56827U);
    msg.setSourceEntity(65U);
    msg.setDestination(30166U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.13380066786348044;
    msg.lon = 0.360348426407748;
    msg.z = 0.767545671200915;
    msg.z_units = 12U;
    msg.speed = 0.06944580187980509;
    msg.speed_units = 227U;
    msg.bearing = 0.4535679284325118;
    msg.cross_angle = 0.4996649817835259;
    msg.width = 0.0819485098499585;
    msg.length = 0.45396031330564;
    msg.coff = 21U;
    msg.angaperture = 0.7660587115942499;
    msg.range = 11008U;
    msg.overlap = 191U;
    msg.flags = 65U;
    msg.custom.assign("VSYDUNUSFYYFCAJSGWQAXMTYLRVLIBSRHAPPHVGB");

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
    msg.setTimeStamp(0.3532629653828844);
    msg.setSource(3375U);
    msg.setSourceEntity(181U);
    msg.setDestination(7853U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.6466779432670379;
    msg.lon = 0.13421413670397864;
    msg.z = 0.05954289702106197;
    msg.z_units = 8U;
    msg.speed = 0.6534159916541823;
    msg.speed_units = 228U;
    msg.bearing = 0.6887122494746593;
    msg.cross_angle = 0.538286678240808;
    msg.width = 0.25407511021668727;
    msg.length = 0.7810952844032332;
    msg.coff = 160U;
    msg.angaperture = 0.8196447205223995;
    msg.range = 30007U;
    msg.overlap = 32U;
    msg.flags = 168U;
    msg.custom.assign("NTQXZJZBIKJGIHEESXSKYOTPPIFWCHXLHIUDGDSBLZPUSBTUGQJJKIDNTHGVXGBWWAEBPNOQYCCWPDZGFDKSECQOMTIYFRFEPLXWEHLEWYVUGSPPXNLYACBESRLLVARM");

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
    msg.setTimeStamp(0.5110793473435509);
    msg.setSource(57812U);
    msg.setSourceEntity(46U);
    msg.setDestination(63202U);
    msg.setDestinationEntity(163U);
    msg.timeout = 28673U;
    msg.lat = 0.11077896482513716;
    msg.lon = 0.01060726740753326;
    msg.z = 0.5828922904404413;
    msg.z_units = 130U;
    msg.speed = 0.3968268639564556;
    msg.speed_units = 10U;
    msg.syringe0 = 111U;
    msg.syringe1 = 129U;
    msg.syringe2 = 149U;
    msg.custom.assign("UFMFFGGFHTEBHAFNXECASQCCOEGBBNARRIJGUZYMXMDQJURIBVLRUYODWIMNAZVIEPIBSXWHTETPEJSKJQTGOTVMIOTBMTP");

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
    msg.setTimeStamp(0.563301160317165);
    msg.setSource(44347U);
    msg.setSourceEntity(24U);
    msg.setDestination(39794U);
    msg.setDestinationEntity(63U);
    msg.timeout = 17194U;
    msg.lat = 0.8812175518722625;
    msg.lon = 0.6641944749084007;
    msg.z = 0.32930273476455674;
    msg.z_units = 191U;
    msg.speed = 0.2670130551662776;
    msg.speed_units = 166U;
    msg.syringe0 = 245U;
    msg.syringe1 = 228U;
    msg.syringe2 = 58U;
    msg.custom.assign("PJHKRGQUOWYGXFYRUZTZDLEKDSGVPNMWCDXLZXAOHEFNAZTRGJZXVEZILJPS");

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
    msg.setTimeStamp(0.7444051212048336);
    msg.setSource(25232U);
    msg.setSourceEntity(35U);
    msg.setDestination(13418U);
    msg.setDestinationEntity(54U);
    msg.timeout = 46090U;
    msg.lat = 0.5675085800588232;
    msg.lon = 0.48324034740951904;
    msg.z = 0.09118956841626358;
    msg.z_units = 87U;
    msg.speed = 0.794250451334757;
    msg.speed_units = 92U;
    msg.syringe0 = 165U;
    msg.syringe1 = 243U;
    msg.syringe2 = 62U;
    msg.custom.assign("CYNGQMHKLVUYNIHOZDFEFBBILFGPQNVZHQNOIVXFGJICMFPZHTSDEGJESTCQWJBSJMKRPKOWANIKQCCXUTFXJOZSLLISNAYQQHIERHDFPLGKCDRKCYTXPZAVJTXKCHSYUOASJYMGOTMSRBEBNQMDWIFFJNUFWILVAAOAPVJUYOHNAWR");

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
    msg.setTimeStamp(0.8905128361629475);
    msg.setSource(51052U);
    msg.setSourceEntity(58U);
    msg.setDestination(27250U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.680023089826956);
    msg.setSource(45275U);
    msg.setSourceEntity(214U);
    msg.setDestination(29569U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.043171519125892566);
    msg.setSource(50451U);
    msg.setSourceEntity(224U);
    msg.setDestination(10839U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.04936258750310363);
    msg.setSource(5398U);
    msg.setSourceEntity(251U);
    msg.setDestination(42201U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.21792564129477598;
    msg.lon = 0.8192587470441007;
    msg.z = 0.7154042374455809;
    msg.z_units = 198U;
    msg.speed = 0.12317328755062762;
    msg.speed_units = 235U;
    msg.takeoff_pitch = 0.6956661702862066;
    msg.custom.assign("FEJWQMRASNMZYSCSPYLPBVRUOIJBJZRZTOVCTKOCMLZHHDUFMDXVIFBVUCEEOYGACDJVBGFELQUJHCPDTZAYHBWKMWWZYTFOZGGADHGLSMQAZBJKVEYPTICLGLWKLTAXSRRBDJR");

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
    msg.setTimeStamp(0.5076186757125163);
    msg.setSource(54861U);
    msg.setSourceEntity(185U);
    msg.setDestination(37163U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.5405583030790805;
    msg.lon = 0.1946696862182179;
    msg.z = 0.8530244016001663;
    msg.z_units = 80U;
    msg.speed = 0.7412114474621277;
    msg.speed_units = 213U;
    msg.takeoff_pitch = 0.7760668041301383;
    msg.custom.assign("ICKWTVYHPMHKDRKNMKZOQZHSYMSEFCNFDAPDSGTGRPPQMOEZBIURKGXIQYWXEPCMVRLLFEAUCFLFMCGSVPQWUNBPNKIHTLAEBTSRLHSHUOGZNDANJWASBXZOGEDF");

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
    msg.setTimeStamp(0.04357603395532961);
    msg.setSource(25479U);
    msg.setSourceEntity(78U);
    msg.setDestination(7644U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.3926661575873177;
    msg.lon = 0.6515161893350778;
    msg.z = 0.5249219881389507;
    msg.z_units = 199U;
    msg.speed = 0.39628025275790235;
    msg.speed_units = 226U;
    msg.takeoff_pitch = 0.697664210930296;
    msg.custom.assign("EEFGPBRDOYVHLWMCVFPXMWCFCEIGRGVRXTHQPAKHBSCDNRAJOOWSYIRPJXDTBAVUKPXCNKHXGIJKYILZJHZ");

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
    msg.setTimeStamp(0.5366949350854349);
    msg.setSource(32634U);
    msg.setSourceEntity(149U);
    msg.setDestination(37472U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.24360570782911106;
    msg.lon = 0.11857087799549337;
    msg.z = 0.9364021352615621;
    msg.z_units = 11U;
    msg.speed = 0.7664303219056465;
    msg.speed_units = 97U;
    msg.abort_z = 0.24021524742212375;
    msg.bearing = 0.15620198703376809;
    msg.glide_slope = 62U;
    msg.glide_slope_alt = 0.19084474375718397;
    msg.custom.assign("GOCNTQZSALTAMDBGBTETDUEFMXZSRTGHPFFVRKIGQXRHPAVGNAKWEALNGCCSOFTUYJCJZJSHCMXRGUWWTCMQCKEXPZVNPNQEEYZRQBOGOZJZFMXXWJLCRAREPLARDYKXVKHPTJWJUBJYLDLZMOKGMFDYKGKIPQNPBUFOMWDIXQRPKDHYVMPFUICLEKBBUIVTWUVTLSHVDZNVZQHINHUFEQODLXVOYWNWCARAOEBIBJJSYAMSYHBS");

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
    msg.setTimeStamp(0.2426580923926155);
    msg.setSource(4438U);
    msg.setSourceEntity(39U);
    msg.setDestination(28177U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.7329979525054268;
    msg.lon = 0.1504962639509012;
    msg.z = 0.14897639057848278;
    msg.z_units = 113U;
    msg.speed = 0.6584349614221738;
    msg.speed_units = 174U;
    msg.abort_z = 0.3137328199479825;
    msg.bearing = 0.7935556340826982;
    msg.glide_slope = 217U;
    msg.glide_slope_alt = 0.23885591421007957;
    msg.custom.assign("EICDFNIAHYFECCVYBRWXZRVWJJDHOSUEZQNUVXVZITSDURYPKFBDCBKEXDSHQQRJTQUMYRTMCNILSLTEFHDZEBZKXIWCKKGAEMZSGTNXBFWLFWRMLUGGZAFONMPLFKVPNNVUQYMWSHLEODJTQHJMQVKDRKEGOVPIOAPGGJNOMYCIAVWBHQISGBTIUCKTDJLAMLOTLCOBFSXRUWLBEJFAUKHNGJWOTYZXAMPRNAWYOHBZYPRS");

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
    msg.setTimeStamp(0.8860828851049253);
    msg.setSource(48991U);
    msg.setSourceEntity(80U);
    msg.setDestination(55381U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.6370050824749597;
    msg.lon = 0.6435336626542197;
    msg.z = 0.41338248326536686;
    msg.z_units = 167U;
    msg.speed = 0.1790188273803217;
    msg.speed_units = 2U;
    msg.abort_z = 0.97144952486362;
    msg.bearing = 0.959713085137372;
    msg.glide_slope = 74U;
    msg.glide_slope_alt = 0.8122857499622103;
    msg.custom.assign("CSNMMTLSDCFIPPIKNJGTFCYUVCIEZJSWCSNEITOKMBSQYTZUWRNCHQYYFKTHVRAOIQNDZFYKAEEBZXRPZEQRGJBKERBCBWIKVMSDOPWGPZUEMUKAJLACMIQHQXUQRUPPVXLRZXOXOGNALAHYGHITEZMQTVLJJRNZBRLDOLBCULAXFWBTFOTWYGRDFJDILHUXPUMCWYGVJSSDWMKGWYWIOFAUKYFNZXAK");

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
    msg.setTimeStamp(0.02276647073568161);
    msg.setSource(1659U);
    msg.setSourceEntity(191U);
    msg.setDestination(13617U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.42291425416937467;
    msg.lon = 0.7958769224254617;
    msg.speed = 0.09736658906440898;
    msg.speed_units = 190U;
    msg.limits = 245U;
    msg.max_depth = 0.1650204385440074;
    msg.min_alt = 0.7272969352646911;
    msg.time_limit = 0.2245877443154486;
    msg.controller.assign("EGBMQYYPREFLKXYWTCFWQBVENCBPCMWRYKOPMSIDJGVRLHZOUTJDIIVWDHPGSQVNLOAMFZZQYDHUJFWRBNRRARZZGZYUFWHNRISOADHTSFMOEELANDLXDTAHTXFWUSLICVKFXSZBVLWUZXCSNTAXJJZYSYGSJXJIVPBRTUNYPUHPBQGBIIKMKMVCLAHOXKGTXMVEMNWASQGOLCXKHOQJZCBDWQEHPGIDYKOACGFNOCNUTEEEIVTRPFPQ");
    msg.custom.assign("BVUCJRSRFCEGTTKUBGEUAQIIFPDWASQPAWXGOFPGXKBXLUNLNRBDCMTVAUDJTBYSZJOKCINHYEKUEREPZYRDRQLRSRLONKGXFLN");

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
    msg.setTimeStamp(0.8156737667517193);
    msg.setSource(49626U);
    msg.setSourceEntity(165U);
    msg.setDestination(45405U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.15058596353349618;
    msg.lon = 0.8955157465392467;
    msg.speed = 0.360325557095605;
    msg.speed_units = 93U;
    msg.limits = 75U;
    msg.max_depth = 0.6620898081941488;
    msg.min_alt = 0.5242314636034497;
    msg.time_limit = 0.7168256585910898;
    msg.controller.assign("UCUPMPHHHGTNLQNMOLLCWBDXDSMFDTAYSDQTHZIYYZPBUAYKMHANUHSVQTFOUV");
    msg.custom.assign("VWIRUMLENQXSINSIAUDYAZFTDXWPWCONFRFYCPZENJINJVONAPPOCOIQMUOXTQKCPLMDGSADEIEUKSCQGJTUHLNLGXXSHDO");

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
    msg.setTimeStamp(0.5357963761697081);
    msg.setSource(18689U);
    msg.setSourceEntity(45U);
    msg.setDestination(52944U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.6623581854354592;
    msg.lon = 0.13350503783271517;
    msg.speed = 0.6384029387277037;
    msg.speed_units = 193U;
    msg.limits = 252U;
    msg.max_depth = 0.061747281066483195;
    msg.min_alt = 0.3525260628511999;
    msg.time_limit = 0.1316567898115557;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.49499545756243657;
    tmp_msg_0.lon = 0.6294138590984717;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("VUKFSAAERLVLHEYDOSPIUGBXRYBEGHNOSTWTK");
    msg.custom.assign("SXCFDWHASQVHRBPYTGXPRCFQMYMRJKRTYPIHCQFGVAZBWIJDWFOOCNPLQTXIVSLJLQJDUOWHAJCXZHBYXLQVMNITCVTFUYMAHEOOPSJLVFMCHZEBCJUQNEKFBWSINFDIAMZKUAUBGTYIFJBYENSKFKEEJXLDQAVEPGEYMNPRJEWIKPNZWVTR");

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
    msg.setTimeStamp(0.26555370250485877);
    msg.setSource(23314U);
    msg.setSourceEntity(146U);
    msg.setDestination(52186U);
    msg.setDestinationEntity(224U);
    msg.target.assign("ZCLCDUMTPOVLDAHBXNFHWHFBMUFMQDVASZQMXPKQBHXDNURZCMEHEJOYQWOYEUTTRBAIKFRWEGMILXNIKAHNSVGYGTTDHGQMASULRTEAGOKONLILZGJKZVEGCZWQCUXMCVUZFAVSBMUILEDVJKYYYIRYXPSWRYHUBWSJIHJWBSKOGOT");
    msg.max_speed = 0.4979271959165694;
    msg.speed_units = 30U;
    msg.lat = 0.7806880989448535;
    msg.lon = 0.930255092003302;
    msg.z = 0.022476075779330085;
    msg.z_units = 117U;
    msg.custom.assign("BWLADQLGXRGJTKRQVMZFATKPCBDPCJZSVXXTBPOPOMDPDZHLLRCYGJCVJSUKTEIIFCNMLSNCEK");

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
    msg.setTimeStamp(0.9854757243357272);
    msg.setSource(11104U);
    msg.setSourceEntity(76U);
    msg.setDestination(50367U);
    msg.setDestinationEntity(76U);
    msg.target.assign("POQSQRLQSFBFPHZNLERCOTVEZTIJCGNMOWXSSXEEFAKCKVOFAXPRHWXLVTQKMHEGWZIDRJZQTISMHUAAHFONSQYRILZSMLDECMOUYVUKPTZJGAURBGYIBMPSFCRJVJEGDMBIYHHLXCDYOVBUAPOAUZCPNLAKCTWLNEJENMXWRBIPLVFDQYFYCNSWXLGUNQWHKPGQYDJOUPIDKWNTSHTWJ");
    msg.max_speed = 0.9102718829764697;
    msg.speed_units = 46U;
    msg.lat = 0.28714673900219156;
    msg.lon = 0.3375255019553869;
    msg.z = 0.4765813182304174;
    msg.z_units = 224U;
    msg.custom.assign("UMCYFQPNUAKGIUYBMUJYZJANJTTWYFUEHADVKCAEKIIWIWJNUIFZLEGAEAEPLXPHVLHBMXXWMPXTIOFXQXWPBMZSRFULTQRRYPXIEQQSCSZKWPGHWGNFHPZVEWJSOMCZXWDWKAMBRDRRNEOFGUABVDMKCRCASZBVSNYZPJECOLZDCQSLODQITJHYNKATLFVBZFXKGTYQBUHOJLTNGBT");

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
    msg.setTimeStamp(0.07435019334441939);
    msg.setSource(27610U);
    msg.setSourceEntity(141U);
    msg.setDestination(15356U);
    msg.setDestinationEntity(230U);
    msg.target.assign("KGQRIUEPKTLEIBOSMEBQDTRSLCMGMFDDWWJXAGWMVTJGKKBHEOAZPIFIGOJLVNVEPMAYNZKBDFUKXYKURYSWPDCNSFUBRBASYAJWJQHGSXYHJLNCKLCOLTJRLQAJPOGVIAZYBYQRCZJLQFSXFIZSXVDDGUVQPEIMXKYNJTGF");
    msg.max_speed = 0.3879793616214888;
    msg.speed_units = 59U;
    msg.lat = 0.23025038091943473;
    msg.lon = 0.673647878068336;
    msg.z = 0.4199495313819457;
    msg.z_units = 232U;
    msg.custom.assign("DPOJJDAZJYQHCYBBVVMVGKJEVMSBWGLBRGZDASVLUHNYAZZJFIRZQNHKFYHNKBXNQCZBNYOUMBTGPVLFIXTYVHDHMLYUTOELPXOMYUIIMZISQCAAIGFQSLPNECMGXOXLPRPEFXOCVSWKRSHJWAPMWSCIQAFRWUHUNRKWEXJKSIKABTLACPDDKCUDRTEWDYZJXQTHTREKVUBNGFMELOCWFVYTIOUPDKTCFXLEZNJRUQEHOTDIORM");

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
    msg.setTimeStamp(0.040138454370259646);
    msg.setSource(43990U);
    msg.setSourceEntity(144U);
    msg.setDestination(54792U);
    msg.setDestinationEntity(192U);
    msg.timeout = 21503U;
    msg.lat = 0.5497465452191814;
    msg.lon = 0.1362095193567412;
    msg.speed = 0.1527419202560676;
    msg.speed_units = 214U;
    msg.custom.assign("THLCERQIEGWAHBPGH");

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
    msg.setTimeStamp(0.362130175427802);
    msg.setSource(21451U);
    msg.setSourceEntity(193U);
    msg.setDestination(12520U);
    msg.setDestinationEntity(240U);
    msg.timeout = 41911U;
    msg.lat = 0.40062475287302646;
    msg.lon = 0.22529378330586403;
    msg.speed = 0.9321860557180064;
    msg.speed_units = 171U;
    msg.custom.assign("CDCVLDXVDISBTWQFFHPMZBLDEXPHAWYXKDERQRIJJOISSHRNCCFGNAPTFENAYHFYMIHBLYMVZWZWJZAJWLOTULXEUEUUDHI");

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
    msg.setTimeStamp(0.13222896098962555);
    msg.setSource(14051U);
    msg.setSourceEntity(188U);
    msg.setDestination(11404U);
    msg.setDestinationEntity(246U);
    msg.timeout = 30722U;
    msg.lat = 0.9835177845792817;
    msg.lon = 0.808630543558947;
    msg.speed = 0.5799886836840341;
    msg.speed_units = 248U;
    msg.custom.assign("XMOEWMCSCZMFDADWPJVQYXQWCVBDHZGMYTNPSOTZSJMBKBRJDXJTXIFIRNCNZOGCMSDWYULNGQVRLLAWWQIYBFSGHAKFVOIPJOKKCLCPSJSVHZWRQIVHUDRANPOYKXUHBXRXLKEPDUHZVQIFNDHJXLWQ");

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
    msg.setTimeStamp(0.832125332538903);
    msg.setSource(35416U);
    msg.setSourceEntity(72U);
    msg.setDestination(317U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.9554625780737207;
    msg.lon = 0.7115835168446609;
    msg.z = 0.8574330240460255;
    msg.z_units = 175U;
    msg.radius = 0.6819874601362627;
    msg.duration = 53952U;
    msg.speed = 0.8960181142085457;
    msg.speed_units = 20U;
    msg.popup_period = 5489U;
    msg.popup_duration = 59360U;
    msg.flags = 38U;
    msg.custom.assign("DTLOHDERUYEJODYNNGROSNSVYJSKUWWHKAAIBJQNTPQZVWMFCLXLJMVJMDEJQXDLGLWRMUUVMXEKNIYWUGZQTXDUCTUOAWLRACGXQHMCSEIZPPNGNHVPFSKLHTEZJUFWZGCEYHLGKVSRRXTBYTFFZSIGMRTFNQDMIFBQIAISPOCOWT");

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
    msg.setTimeStamp(0.9632216966306153);
    msg.setSource(47370U);
    msg.setSourceEntity(21U);
    msg.setDestination(40597U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.5645682913574743;
    msg.lon = 0.45556076929544664;
    msg.z = 0.32205377206676467;
    msg.z_units = 97U;
    msg.radius = 0.015201585838116483;
    msg.duration = 57819U;
    msg.speed = 0.8465445922589439;
    msg.speed_units = 144U;
    msg.popup_period = 18303U;
    msg.popup_duration = 65493U;
    msg.flags = 114U;
    msg.custom.assign("BJKMSHDZDVVNCMBLRSSLIXRTZFAKEMYLPYJZJJVQQKFLBYOIASWKWEJJWZRGFQVXOFGXBUGFEEQMOIKOGYQMJXXIOUTZRXCLDCHUQJCRTVZHQNORBNDHCVLKQBNSITVCSVRZWHBPTRAAFPIMSPWEJRUMDSODXAUKSUNYDGYMYXTIHQZWPFAVHKWLELKAAFPLEWTNTNLYZDNIGFUOWCBCROCXGMYPDJIQUCDVEPETBPFENA");

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
    msg.setTimeStamp(0.8126422861420248);
    msg.setSource(3575U);
    msg.setSourceEntity(176U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.19103440818931483;
    msg.lon = 0.14217937015692994;
    msg.z = 0.9092907906740222;
    msg.z_units = 42U;
    msg.radius = 0.4450919272368057;
    msg.duration = 19935U;
    msg.speed = 0.17256620845710924;
    msg.speed_units = 12U;
    msg.popup_period = 59369U;
    msg.popup_duration = 20378U;
    msg.flags = 72U;
    msg.custom.assign("IZFSPCVKAYNADHGJJMOYKZCXQSSRGREMJPJCYBHAUCWOLRSZTVIQPRAZKSKYQPIPPFOBJQWOTJFEXXPUCTHUWNHRSQDTWETVJVIXUUBTVNWQGZXCYXSQXMNILLGYFLDLIGRDLBIIFVMDMAYDLOJJ");

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
    msg.setTimeStamp(0.612839499375078);
    msg.setSource(37604U);
    msg.setSourceEntity(218U);
    msg.setDestination(40819U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.1499222766501136);
    msg.setSource(55202U);
    msg.setSourceEntity(2U);
    msg.setDestination(53234U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.320138363000788);
    msg.setSource(43347U);
    msg.setSourceEntity(189U);
    msg.setDestination(57258U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.24263383001158145);
    msg.setSource(3756U);
    msg.setSourceEntity(207U);
    msg.setDestination(14713U);
    msg.setDestinationEntity(186U);
    msg.timeout = 59158U;
    msg.lat = 0.3793986264145237;
    msg.lon = 0.1546593218251855;
    msg.z = 0.3339142172878039;
    msg.z_units = 11U;
    msg.speed = 0.5994947721181612;
    msg.speed_units = 138U;
    msg.bearing = 0.0772452071910118;
    msg.width = 0.2750839588617855;
    msg.direction = 58U;
    msg.custom.assign("HSYDIXUMHGAXQKBODEVTVRKLNGLJEJWAOVRXMZJDXXMCYFMNBZUUSENOSPYCCVSUKOSXXEGUUZDFBAMHHVVJAZUQODNMKTRBRIHATWUOGCZNPASAWBITRTPVOPQZQEGWHFUPSGPISLAOVBIDJMPIEBQFTNLCDNEYOKTKIJGWNEZKRNVCRSMBJNJULZZCCPYVFLGMYWYRKFHEYQZKTCPFQORFAYG");

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
    msg.setTimeStamp(0.8835132036752241);
    msg.setSource(41365U);
    msg.setSourceEntity(207U);
    msg.setDestination(35732U);
    msg.setDestinationEntity(56U);
    msg.timeout = 42964U;
    msg.lat = 0.007564991122432918;
    msg.lon = 0.050945975944229005;
    msg.z = 0.09697296578606784;
    msg.z_units = 64U;
    msg.speed = 0.5580470630829769;
    msg.speed_units = 15U;
    msg.bearing = 0.8846187179519845;
    msg.width = 0.8238425370969938;
    msg.direction = 174U;
    msg.custom.assign("JPSFAMCPPAPLDWIZJNCMOCXQLCDKWRUDGRJPVNXOZQ");

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
    msg.setTimeStamp(0.2169506909900859);
    msg.setSource(37903U);
    msg.setSourceEntity(15U);
    msg.setDestination(2156U);
    msg.setDestinationEntity(83U);
    msg.timeout = 51039U;
    msg.lat = 0.48282516197821224;
    msg.lon = 0.1849467398021628;
    msg.z = 0.022447879682496952;
    msg.z_units = 204U;
    msg.speed = 0.2835312528949476;
    msg.speed_units = 31U;
    msg.bearing = 0.32290607964364904;
    msg.width = 0.11128346757115504;
    msg.direction = 220U;
    msg.custom.assign("UYJDLKHTBKAHXGKBBKMAQNESQMYSHMGGWXVYFXIHWKYCVEEVKUZMPXGNCJE");

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
    msg.setTimeStamp(0.979134226311191);
    msg.setSource(8541U);
    msg.setSourceEntity(36U);
    msg.setDestination(43161U);
    msg.setDestinationEntity(156U);
    msg.op_mode = 194U;
    msg.error_count = 173U;
    msg.error_ents.assign("ABBHAXTZYTYHQOJPXAPUQYCSNEDUXHVILMYTGYXPQUHUCQWRRR");
    msg.maneuver_type = 53038U;
    msg.maneuver_stime = 0.27722833032376504;
    msg.maneuver_eta = 63034U;
    msg.control_loops = 3462096963U;
    msg.flags = 135U;
    msg.last_error.assign("QIUBRSXCGVWOCCRYEFPOZBMDFFJGUBGIFQZJFYLZJCBTSYHSUQDNTIZEVPHUPERAIHWBPKTYZNNCCUKLWJEARFTZDVXIZXOUUMXNQIMKMKHLLJMRMEIORYDBRFAOFNPHUGJEITUEXJTKLPIOACOHIYPXBWGKVKVGUYWOLLQXBKWJWTYTQTQJAXSWSGVVDARGNZDMXESOTNNHANQYKKARSHVEVPPFMG");
    msg.last_error_time = 0.9350555497147296;

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
    msg.setTimeStamp(0.011916647645949463);
    msg.setSource(50390U);
    msg.setSourceEntity(136U);
    msg.setDestination(7875U);
    msg.setDestinationEntity(110U);
    msg.op_mode = 197U;
    msg.error_count = 221U;
    msg.error_ents.assign("RVBPKWCGFSG");
    msg.maneuver_type = 62340U;
    msg.maneuver_stime = 0.4821264612446714;
    msg.maneuver_eta = 35193U;
    msg.control_loops = 2750841789U;
    msg.flags = 129U;
    msg.last_error.assign("PSJFRDDKEFZAKYCPOGXCVVHKDRYBJHLOBKFTVBPNYVCBJTNPJONYZOZJIIUVACMVMXQSEEYHSSQAGVHUTAVWIQDRAKEZOWXMEBDRNLGADBNZWGAXPYSCTNUSFLFFTNHX");
    msg.last_error_time = 0.8063103899067995;

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
    msg.setTimeStamp(0.4987065944976121);
    msg.setSource(19104U);
    msg.setSourceEntity(104U);
    msg.setDestination(38177U);
    msg.setDestinationEntity(107U);
    msg.op_mode = 166U;
    msg.error_count = 249U;
    msg.error_ents.assign("JCJEFSWOUMFRUNBFRGLCWERTJXDHYEOUQTOHHSNDHLNXIALSGFABIEQMJATIFPEZWORNG");
    msg.maneuver_type = 5981U;
    msg.maneuver_stime = 0.9620400796427769;
    msg.maneuver_eta = 24275U;
    msg.control_loops = 3188844014U;
    msg.flags = 131U;
    msg.last_error.assign("MUEDBVNFWXSCMDEUVICZRXDCZHYXRTQKFKSWHCLGNTOCQRBJGQMUMUISAUMXQMKOGKZJXVAMZYOXPAESDRPJNPTWUNZUWBYFIFHTISTCDMKAIVJJZMQOAESAHGEKYVTQZXGIAFGJX");
    msg.last_error_time = 0.15357482009968926;

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
    msg.setTimeStamp(0.5570914032901162);
    msg.setSource(57866U);
    msg.setSourceEntity(46U);
    msg.setDestination(20842U);
    msg.setDestinationEntity(183U);
    msg.type = 125U;
    msg.request_id = 57965U;
    msg.command = 228U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.7402929391592623;
    tmp_msg_0.lon = 0.620467661894751;
    tmp_msg_0.z = 0.4758830935566518;
    tmp_msg_0.z_units = 88U;
    tmp_msg_0.speed = 0.9662109974136638;
    tmp_msg_0.speed_units = 241U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7624154303611249;
    tmp_tmp_msg_0_0.y = 0.9135565302391555;
    tmp_tmp_msg_0_0.z = 0.5619466486163852;
    tmp_tmp_msg_0_0.t = 0.11685421648296002;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 26159U;
    tmp_tmp_msg_0_1.off_x = 0.5100012656277544;
    tmp_tmp_msg_0_1.off_y = 0.17282948580818736;
    tmp_tmp_msg_0_1.off_z = 0.21349445842834025;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.6354947061347184;
    tmp_msg_0.custom.assign("MRXTPSVUJGINIWJHXMAAMNCFSEWBVHCZYNTGRFQNZVWHDKSVBHXIHHCTSZXCGQNJNTSDUYGGKKPBHTOREQLJPVDABFAIVWGJDRYYJOOEDDKJLQZIBYCFVUDLJPNHGFNWGLLKCDEMTOW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61220U;
    msg.info.assign("KGDMVXIZWIUDUCYOVOUADGZOBSFRTOZKMVJEEBQDFRHHGQACWOCNCFVQVRBSDZJQIYYMICHGEBNVVJNGWMQWKRPXWRTEZG");

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
    msg.setTimeStamp(0.1355999930608508);
    msg.setSource(34003U);
    msg.setSourceEntity(221U);
    msg.setDestination(34005U);
    msg.setDestinationEntity(33U);
    msg.type = 34U;
    msg.request_id = 40699U;
    msg.command = 145U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("BULGMBNATUBRBSWSUZXRBPRELQR");
    tmp_msg_0.max_speed = 0.7159681845110127;
    tmp_msg_0.speed_units = 75U;
    tmp_msg_0.lat = 0.0352402713935398;
    tmp_msg_0.lon = 0.6379563377901737;
    tmp_msg_0.z = 0.0464607238641056;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.custom.assign("ISXUWYEXNQKRGVYGWFOIFMGLESHMKDOYCYVDZCZQZXXFJNV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7311U;
    msg.info.assign("TDXNFPNLMV");

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
    msg.setTimeStamp(0.9564751511303661);
    msg.setSource(6211U);
    msg.setSourceEntity(139U);
    msg.setDestination(32739U);
    msg.setDestinationEntity(240U);
    msg.type = 132U;
    msg.request_id = 1821U;
    msg.command = 32U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 52649U;
    tmp_msg_0.name.assign("UCTEHKLFZCRWXZBQTUZHYKBFHTPLNAWETVRDLOZNIWYAIRYCSIJLDOIEXYPMWJUXKFBGTWUVSPANOMGUOWJAJJLMNAGXIQDPVZBR");
    tmp_msg_0.custom.assign("GUOVDPXPYUXIRTRRWUXWUSUUECCMPKIQENYTPARNN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41029U;
    msg.info.assign("VWOCWULTUUOEQXQQLSTJNYP");

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
    msg.setTimeStamp(0.8563755410807521);
    msg.setSource(25267U);
    msg.setSourceEntity(44U);
    msg.setDestination(62779U);
    msg.setDestinationEntity(77U);
    msg.command = 100U;
    msg.entities.assign("PTAACFIVUHRELUORBGIDTMISPSQTGIEERVIYEUDDCDKOCCPNWTZNZFWHKBCSRLAYFAVQVSNIVWOXDZNXKNJKBXUMXZGVN");

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
    msg.setTimeStamp(0.9233283387756757);
    msg.setSource(2852U);
    msg.setSourceEntity(220U);
    msg.setDestination(31340U);
    msg.setDestinationEntity(55U);
    msg.command = 62U;
    msg.entities.assign("EYBLKFDPDOJSOPAGMCHTQFXLSSMMHCOFAXTUXILICRRNQAHCDBEBPDYJUYIELFMMGBZGHFMTQSUQCOONNJJZUNZIVYVSKRLDQQLNZZGGMTAABEVDCPGULOSIDVPTWGRVEERVPGXNCORSOXTFYVYIKVUKKXPPLCZKKPQGXHDZSNZJDEIBEWBMVFUEKHWIJAYTCHBNOWVYYANWFUEXRQZ");

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
    msg.setTimeStamp(0.2863409512627041);
    msg.setSource(9278U);
    msg.setSourceEntity(135U);
    msg.setDestination(37670U);
    msg.setDestinationEntity(98U);
    msg.command = 103U;
    msg.entities.assign("BGQJJDTRGFLUQQSUCASWEMNWBQIJJAXELXTPIEOAYHWPOOXYHQPUPTTLXDEMDHFHFCOOZMSBMGNISWAONFEXPGIPPXDRRUNXMFMIEDQIURXTRECQUBRBLZWFVRTKQXFDKZKRVOZLBUYZZUYUMKCAGNHJVWVQRAGZIAFDL");

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
    msg.setTimeStamp(0.4582183153807041);
    msg.setSource(46343U);
    msg.setSourceEntity(194U);
    msg.setDestination(30381U);
    msg.setDestinationEntity(78U);
    msg.mcount = 205U;
    msg.mnames.assign("XDTRFHPUGKWYUHZHXMLOIDHSKAFGUUENGUSJVNVCLQZJVECBOAWFNCIQKFIGNYSRHWTYZEBVIBVXZVGCJTRFZLIQGKNGAQHEHEIZLNJSAPNZUMWTLFYIBYDRXCZXF");
    msg.ecount = 175U;
    msg.enames.assign("LAYAFQBXWPNPDGENOTAAPQDQRQYLFLVVNJIXGROHUJOYCMJNWKWMZRHXUDKYBQEJKAVXKNJIVOFFCOUTOCZXGFBPSULLAUTUTMKRFXRNXFRHFMUGBCJTCVFXPYOQZHBGPEGYEYRALZOCGLIEVUDJIVXPLMQTINOMWBTCSSKJHWCJEDWNKBFVUSRDYHHKTQRWZBSTIVCLPEDIESSWNAQMMVP");
    msg.ccount = 147U;
    msg.cnames.assign("GJTXCNHDQCQYVLKNKCYTEGIQYCCXTUJVQAVLFBVJMYWEAPPNCRNZPFVHLAWXODPVSBLZYSPGUSZUUKABGVAJASIQKZFKUJDMQVWZFBFIUYGXUGLMNYLFARPLBITURIIEZGM");
    msg.last_error.assign("DJHXBLXJSUDBJLRNYYSGGZDHFWVWVBPEMWBZRJDTMCTZTEKVMRUSOGETJWDJBLIPYFHOIEROQXOSHMFCJLS");
    msg.last_error_time = 0.19872561652893272;

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
    msg.setTimeStamp(0.019745436798337623);
    msg.setSource(49579U);
    msg.setSourceEntity(10U);
    msg.setDestination(34264U);
    msg.setDestinationEntity(162U);
    msg.mcount = 67U;
    msg.mnames.assign("QVEIBBSZHAMZZGJHYFLNMCOQANVIEPUGHUKRQFSLWRTCZXMRWOZKKBNUHPBHAXDHPOJZMRKSMDNXOEARRPBCKQUXPFHWVHZOYNDSYLTKNERLVZJIJBSQYIGXIAXVGTPETFWTBLVEGOEIODLJGQKUPVCKRLDSCCMUGFYKNQ");
    msg.ecount = 6U;
    msg.enames.assign("RUZYPERIRYTQMDETSRBEAFDPPSNIFQLEUBXLKXNJOBIAQCZTHYAHVNXBOULUTWXIZSPJCMHNRJDSMYJNMSNSHPRKXSXDWTYOJKPDDTBGQVZZNXDWQWLUFTEBERCMKCZMYQFQH");
    msg.ccount = 11U;
    msg.cnames.assign("DXEUMLUETNUGHRPRJYPYTBXIPPKCLYLHFWQBLXMMIVMADJUKLZKQCVJUWDNUKVETCADFIMQAEKJFFEXZXVETOFJFQKLTEWICAZRZOQFWGVFWEFQJMOZYAGFDSEALDYWBPBHVCPYJWNSBIIZCCGASHHBNRNZOZMUMTCOSLVQGJSCIWYVJRRQXYOGDKRPTHDWDHBPGZ");
    msg.last_error.assign("RDDLBHJZNTQUZBTXMGFHWPYTVRLTVTUNBXILTOKJPGDMGEWJYEEKRBMZQBWFGAKMJUKHQZIHPGUZQCGRFAYMRIQKON");
    msg.last_error_time = 0.8937067159436813;

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
    msg.setTimeStamp(0.29199676580416967);
    msg.setSource(54451U);
    msg.setSourceEntity(172U);
    msg.setDestination(64447U);
    msg.setDestinationEntity(83U);
    msg.mcount = 144U;
    msg.mnames.assign("PBZACVDCOHNOQWIJUTYYPAFKUETYZQKUREQMKBUYYPSTVLWAGKZEDBTKVFWPDANGJTZBWJSBSIBEFCWRJMSCRDOWEROWQLRYXFHXAMZHESPIUNPICBUOPIBQQDAPGNNHHVSREMUTMXXBQYVHRVOPINLDGJKNUGNJFFIECXJMHUZYXCOTGDWEHXMVLKSGLFFJRTZLDAYTLZKNAJOUTQRMGVXKEACDDGHWJRA");
    msg.ecount = 14U;
    msg.enames.assign("OBXDUVNWPIWVVCZCJRQLVLNEZMIDVMGXBX");
    msg.ccount = 108U;
    msg.cnames.assign("PUGGRLTDEGYGYQQMRQZJOPBKTPGLEHHHDOWXBEKMMYTWIXPTFXOWHNVTDCNYQUBWDJMQIIWDVTOANFMDJBNCUAZUISCPCZKNFWHGDCSMFZCRHIQINARMVNEGUAVJXHSLUVYAIQZTPJUOYHJPGDLOJBLXSFSYBSEKL");
    msg.last_error.assign("JLYZJFDMRDJTDZSYUAGDIUBAAOHECPKKVBDHOMURKHFHXXVFGRRLUIIILCTRFCPBAUSVPWMHUSRFVJVYFIQPEYHNHGMEBQWIWXQPQLFWIESJMFZTZXBDSACNJKONLJMXTXWCMIIYGLGEEB");
    msg.last_error_time = 0.3187415254466597;

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
    msg.setTimeStamp(0.9785707186617952);
    msg.setSource(57726U);
    msg.setSourceEntity(126U);
    msg.setDestination(3324U);
    msg.setDestinationEntity(163U);
    msg.mask = 175U;
    msg.max_depth = 0.1087545226846437;
    msg.min_altitude = 0.25091120849785753;
    msg.max_altitude = 0.3132002752149081;
    msg.min_speed = 0.501492618908592;
    msg.max_speed = 0.889148213222558;
    msg.max_vrate = 0.9073586460304435;
    msg.lat = 0.5125526734345482;
    msg.lon = 0.7297010505242054;
    msg.orientation = 0.9805155883002699;
    msg.width = 0.13548867314522006;
    msg.length = 0.5686127365380489;

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
    msg.setTimeStamp(0.17584669849902668);
    msg.setSource(45616U);
    msg.setSourceEntity(224U);
    msg.setDestination(40569U);
    msg.setDestinationEntity(153U);
    msg.mask = 1U;
    msg.max_depth = 0.7832711180568502;
    msg.min_altitude = 0.8202223645934718;
    msg.max_altitude = 0.07756118296878056;
    msg.min_speed = 0.2696195796579486;
    msg.max_speed = 0.6579789212355831;
    msg.max_vrate = 0.770779987670977;
    msg.lat = 0.889913487115199;
    msg.lon = 0.4050554551776512;
    msg.orientation = 0.32515348268966326;
    msg.width = 0.8515214528378807;
    msg.length = 0.6004225758262332;

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
    msg.setTimeStamp(0.7151647566717091);
    msg.setSource(45328U);
    msg.setSourceEntity(182U);
    msg.setDestination(12921U);
    msg.setDestinationEntity(152U);
    msg.mask = 106U;
    msg.max_depth = 0.8265356115666637;
    msg.min_altitude = 0.79184514623449;
    msg.max_altitude = 0.1422126045964347;
    msg.min_speed = 0.8711421051153319;
    msg.max_speed = 0.16976636080521224;
    msg.max_vrate = 0.5339087828323155;
    msg.lat = 0.7949003521102465;
    msg.lon = 0.6944246860475587;
    msg.orientation = 0.7940313463696576;
    msg.width = 0.9340934012719343;
    msg.length = 0.5032649723983701;

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
    msg.setTimeStamp(0.9479222408670974);
    msg.setSource(48632U);
    msg.setSourceEntity(166U);
    msg.setDestination(8057U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.9700676864272821);
    msg.setSource(50384U);
    msg.setSourceEntity(122U);
    msg.setDestination(59204U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.41762260887135483);
    msg.setSource(64384U);
    msg.setSourceEntity(188U);
    msg.setDestination(1650U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.7379969276602134);
    msg.setSource(46736U);
    msg.setSourceEntity(22U);
    msg.setDestination(59011U);
    msg.setDestinationEntity(200U);
    msg.duration = 29316U;

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
    msg.setTimeStamp(0.25741124492347844);
    msg.setSource(56326U);
    msg.setSourceEntity(161U);
    msg.setDestination(11134U);
    msg.setDestinationEntity(39U);
    msg.duration = 11289U;

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
    msg.setTimeStamp(0.022175540337915245);
    msg.setSource(65084U);
    msg.setSourceEntity(174U);
    msg.setDestination(53095U);
    msg.setDestinationEntity(198U);
    msg.duration = 2827U;

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
    msg.setTimeStamp(0.7882346300062514);
    msg.setSource(40U);
    msg.setSourceEntity(170U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(61U);
    msg.enable = 29U;
    msg.mask = 2987939729U;
    msg.scope_ref = 4233120881U;

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
    msg.setTimeStamp(0.9702034298803947);
    msg.setSource(47116U);
    msg.setSourceEntity(236U);
    msg.setDestination(18068U);
    msg.setDestinationEntity(250U);
    msg.enable = 60U;
    msg.mask = 906270696U;
    msg.scope_ref = 3267634748U;

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
    msg.setTimeStamp(0.4993360860447198);
    msg.setSource(55225U);
    msg.setSourceEntity(41U);
    msg.setDestination(11672U);
    msg.setDestinationEntity(113U);
    msg.enable = 237U;
    msg.mask = 3789193053U;
    msg.scope_ref = 1198055025U;

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
    msg.setTimeStamp(0.29635981103835596);
    msg.setSource(30035U);
    msg.setSourceEntity(54U);
    msg.setDestination(59866U);
    msg.setDestinationEntity(59U);
    msg.medium = 200U;

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
    msg.setTimeStamp(0.10708637978383484);
    msg.setSource(42159U);
    msg.setSourceEntity(242U);
    msg.setDestination(14572U);
    msg.setDestinationEntity(46U);
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
    msg.setTimeStamp(0.31486912580057536);
    msg.setSource(10177U);
    msg.setSourceEntity(114U);
    msg.setDestination(5095U);
    msg.setDestinationEntity(54U);
    msg.medium = 151U;

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
    msg.setTimeStamp(0.8011388893477177);
    msg.setSource(27278U);
    msg.setSourceEntity(96U);
    msg.setDestination(38101U);
    msg.setDestinationEntity(66U);
    msg.value = 0.5838341279898214;
    msg.type = 221U;

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
    msg.setTimeStamp(0.5203021713412129);
    msg.setSource(42388U);
    msg.setSourceEntity(131U);
    msg.setDestination(45051U);
    msg.setDestinationEntity(167U);
    msg.value = 0.8740928103366491;
    msg.type = 159U;

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
    msg.setTimeStamp(0.3184971637929962);
    msg.setSource(21420U);
    msg.setSourceEntity(210U);
    msg.setDestination(36249U);
    msg.setDestinationEntity(206U);
    msg.value = 0.5568443271067763;
    msg.type = 56U;

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
    msg.setTimeStamp(0.7094317467036391);
    msg.setSource(20249U);
    msg.setSourceEntity(187U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(194U);
    msg.possimerr = 0.9421421417340492;
    msg.converg = 0.043195343665240804;
    msg.turbulence = 0.8816833445178573;
    msg.possimmon = 125U;
    msg.commmon = 240U;
    msg.convergmon = 137U;

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
    msg.setTimeStamp(0.1669717586597944);
    msg.setSource(10451U);
    msg.setSourceEntity(50U);
    msg.setDestination(27313U);
    msg.setDestinationEntity(204U);
    msg.possimerr = 0.8649810286565611;
    msg.converg = 0.050122424728084924;
    msg.turbulence = 0.5161401940720539;
    msg.possimmon = 143U;
    msg.commmon = 190U;
    msg.convergmon = 53U;

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
    msg.setTimeStamp(0.0682068651819906);
    msg.setSource(50571U);
    msg.setSourceEntity(187U);
    msg.setDestination(63824U);
    msg.setDestinationEntity(93U);
    msg.possimerr = 0.11380769576039795;
    msg.converg = 0.9229615719634484;
    msg.turbulence = 0.7063856395576383;
    msg.possimmon = 16U;
    msg.commmon = 181U;
    msg.convergmon = 105U;

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
    msg.setTimeStamp(0.3394377345964804);
    msg.setSource(39170U);
    msg.setSourceEntity(95U);
    msg.setDestination(1596U);
    msg.setDestinationEntity(62U);
    msg.autonomy = 62U;
    msg.mode.assign("VREGQHINGHFYSIAPBPFECIQFRTXUHXJQZYANYCNGXOLLNXXSTDXRYJKQSBZWAGVSMBWQOC");

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
    msg.setTimeStamp(0.7006135985732338);
    msg.setSource(49818U);
    msg.setSourceEntity(168U);
    msg.setDestination(16468U);
    msg.setDestinationEntity(235U);
    msg.autonomy = 177U;
    msg.mode.assign("MBWZPIDFYKLXNGVMOAKRQVPFUZGSHTFUUZCRCNETDLIBEOMAKMILXFGDDPXGABLQZHJTXVMGWTKXGKXLNTOSWVJPSSCLTYRWGLUCUJCMEI");

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
    msg.setTimeStamp(0.08465543922902019);
    msg.setSource(7608U);
    msg.setSourceEntity(213U);
    msg.setDestination(7690U);
    msg.setDestinationEntity(228U);
    msg.autonomy = 217U;
    msg.mode.assign("JEZDPVDRQUDSQQFPRYVKAGIZATBMAFHOVXNUFNRRRCILJBKITLVHDAYELESWYGLRZQHKGIAWYGVOFSPVSVNHXJZWFBHCHLMIHWQMQKUERYPFDITPJYDTWWOJBKWUSXMTPHSJBEITVXPBOKCDBWOZTTRNCELACLIFLQNHZQUTDUXUJLJQICEMCHKWJXAZXXUGBSAWUOMPVFOCYACNGJBYXDNANLEONKTBSGKVRUKGZEGZ");

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
    msg.setTimeStamp(0.23719542833702723);
    msg.setSource(24674U);
    msg.setSourceEntity(131U);
    msg.setDestination(47264U);
    msg.setDestinationEntity(63U);
    msg.type = 184U;
    msg.op = 78U;
    msg.possimerr = 0.5837542990033562;
    msg.converg = 0.2989254935023461;
    msg.turbulence = 0.673678272730135;
    msg.possimmon = 148U;
    msg.commmon = 243U;
    msg.convergmon = 41U;

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
    msg.setTimeStamp(0.5582173292648445);
    msg.setSource(41800U);
    msg.setSourceEntity(112U);
    msg.setDestination(9297U);
    msg.setDestinationEntity(50U);
    msg.type = 247U;
    msg.op = 239U;
    msg.possimerr = 0.18079391667158418;
    msg.converg = 0.7820594056577493;
    msg.turbulence = 0.42948152038737464;
    msg.possimmon = 97U;
    msg.commmon = 223U;
    msg.convergmon = 131U;

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
    msg.setTimeStamp(0.5584397336110951);
    msg.setSource(9137U);
    msg.setSourceEntity(83U);
    msg.setDestination(50588U);
    msg.setDestinationEntity(46U);
    msg.type = 121U;
    msg.op = 60U;
    msg.possimerr = 0.47973086200527104;
    msg.converg = 0.9449739242415117;
    msg.turbulence = 0.993974799381058;
    msg.possimmon = 227U;
    msg.commmon = 171U;
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
    msg.setTimeStamp(0.3111676388595239);
    msg.setSource(3416U);
    msg.setSourceEntity(111U);
    msg.setDestination(22863U);
    msg.setDestinationEntity(246U);
    msg.op = 83U;
    msg.comm_interface = 71U;
    msg.period = 19219U;
    msg.sys_dst.assign("QDCHCDPPJZDMLTYXXKRRDBEADNWUEJVRKYFEZUIGZZLZEEYLVMOGYHYNMRFXCPJNQKISUHDPMMVUOXSONOIUKBPPUGWHYUVCSXVGQKISTWQWPADASYECKJKZUMRMQETIYNUIUSKRAVFARGJCORZOLIRSFXWHWATTCJTHHPVAGNFQNWHBNQWFLMFNXLAKGDFLOSJEBZVIBVGRXL");

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
    msg.setTimeStamp(0.4768266229843534);
    msg.setSource(55366U);
    msg.setSourceEntity(73U);
    msg.setDestination(11856U);
    msg.setDestinationEntity(56U);
    msg.op = 168U;
    msg.comm_interface = 207U;
    msg.period = 12300U;
    msg.sys_dst.assign("KRJJGDZHSRDJFUGKMNWEKXVYCFNCDQYQICWPOQAYLREETVQBTTJWMIZFHFNWMUDMXLZUZABNFHSUWZPDGDRVPUIOJLQAPIHKELYPEUUHNAUVDLAWWZXKTQBDQ");

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
    msg.setTimeStamp(0.625103011793941);
    msg.setSource(48167U);
    msg.setSourceEntity(1U);
    msg.setDestination(6865U);
    msg.setDestinationEntity(193U);
    msg.op = 95U;
    msg.comm_interface = 250U;
    msg.period = 22330U;
    msg.sys_dst.assign("SUVEQLQNYBUEUMPDZBSNPOCRLLOIKICSASEAMNHHVUAQLJJJCPKOYREYHVPMKXTOZIRTQGVANCEBWODHYATXZNDWVORTFTTJMJZXDKSLUDNXEMPVFHQZHGWGNLFRXGNKOVAYWVZZYVSPDIJPDYGIDKCPRNDGPTMWPUMRBUVYQYRUONQJFBCJXILXMHQLEJRBFG");

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
    msg.setTimeStamp(0.1611360394333483);
    msg.setSource(36276U);
    msg.setSourceEntity(240U);
    msg.setDestination(22120U);
    msg.setDestinationEntity(101U);
    msg.stime = 3000636912U;
    msg.latitude = 0.13571787173496774;
    msg.longitude = 0.15553361864678883;
    msg.altitude = 33714U;
    msg.depth = 17082U;
    msg.heading = 49991U;
    msg.speed = 13563;
    msg.fuel = 30;
    msg.exec_state = 20;
    msg.plan_checksum = 44781U;

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
    msg.setTimeStamp(0.09142902226002192);
    msg.setSource(3039U);
    msg.setSourceEntity(167U);
    msg.setDestination(292U);
    msg.setDestinationEntity(157U);
    msg.stime = 3596264560U;
    msg.latitude = 0.016219559639902847;
    msg.longitude = 0.6879127942881491;
    msg.altitude = 57474U;
    msg.depth = 27071U;
    msg.heading = 15011U;
    msg.speed = -18034;
    msg.fuel = -27;
    msg.exec_state = -2;
    msg.plan_checksum = 48000U;

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
    msg.setTimeStamp(0.4944120043388921);
    msg.setSource(12860U);
    msg.setSourceEntity(102U);
    msg.setDestination(29139U);
    msg.setDestinationEntity(38U);
    msg.stime = 1867350605U;
    msg.latitude = 0.5329037904503013;
    msg.longitude = 0.41199939863626567;
    msg.altitude = 32968U;
    msg.depth = 6342U;
    msg.heading = 11556U;
    msg.speed = 15494;
    msg.fuel = -1;
    msg.exec_state = -17;
    msg.plan_checksum = 59668U;

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
    msg.setTimeStamp(0.48579107477131067);
    msg.setSource(266U);
    msg.setSourceEntity(151U);
    msg.setDestination(10891U);
    msg.setDestinationEntity(138U);
    msg.req_id = 58997U;
    msg.comm_mean = 166U;
    msg.destination.assign("RCUAKKWXGM");
    msg.deadline = 0.97959900483484;
    msg.range = 0.8342460186210285;
    msg.data_mode = 70U;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 36017U;
    tmp_msg_0.lat = 0.1988997531583131;
    tmp_msg_0.lon = 0.21938423874630297;
    tmp_msg_0.z_units = 82U;
    tmp_msg_0.z = 0.29010216590760207;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HDVVTHOLGODFFCLMUQCVWOKJWDEFBFSCPKMGSXNUHTWWGILR");
    const signed char tmp_msg_1[] = {-68, 104, 106, 16, -102, -105, 37, -92, -55, -67, 31, 97, 13, 94, -124, -67, -16, 69, -49, -103, 94, 50, 20, 28, -27, -55, 16, -25, -54, -52, 87, -69, 54, -62, -1, 53, 57, -66, -21, -5, -55, -47, -55, -27, 100, 97, 85, -47, -114, 120, -43, -31, -18, -35, 102, 66, -125, 64, 90, 118, -20, 113, -124, -100, 89, 90, -84, -11, 16, 15, 112, 15, 60, -100, 125, -37, 14, 53, 73, 75, 52, -85, -9, -111, 102, -83, -24, -92, -42, 102, -107, 2, -22, -85, 35, 6, -80, 40, 42, 40, 51, -107, 98, -31, -11, -44, -18, 116, -80, -45, 21, 49, 6, -14, -44, -54, 36, -123, -109, 104, 56, 64, 12, 36, 4, 35, -89, -11, 7, 64, 55, -5, 122, -35, -88, 42, -59, -88, 110, -45, 93, -13, 7, 42, 0, -117, 98, 15, 113, 116, -52, -113, -80, 88};
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
    msg.setTimeStamp(0.9268778325011469);
    msg.setSource(17822U);
    msg.setSourceEntity(161U);
    msg.setDestination(13673U);
    msg.setDestinationEntity(211U);
    msg.req_id = 12982U;
    msg.comm_mean = 196U;
    msg.destination.assign("CSLNZVBNIYNNKLIMWUCROVDCDTUXEBDIJVUDBCQZFBNRRKTXWYHHYAWFSHTWASRYXPWOEQZIQPPXDNVXRLSPHSDGWTGQCFKCRFNORTIUMELMAKUZTHORZCUXQZQMLEIRAMQSJDBPOHGRFMFGHEBKYHLHYVYCXJGACVVGEDTPKEOGMUUOJSLJSGQFUAMTSITBXWEPMKVKXZQXJJZ");
    msg.deadline = 0.09945365272877926;
    msg.range = 0.10305065907431799;
    msg.data_mode = 174U;
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.direction = 0.26271773355467676;
    tmp_msg_0.speed = 0.5307636027739936;
    tmp_msg_0.turbulence = 0.07525427225009784;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XZMUKLKOZJAVIBHHHFMACHAGETSWDEMNVGSICNWBNLFKPRNPOSGETDEVNPSLTGEHGKCJFIINHYXOACYRRVZUJTVAPLKYVSDJRXIHLAKCOBTHFZOVWVNLUCOEEJGSWEDWMQDGRUTBLBNAYXODSZKXMZJTMUYCPVXBWM");
    const signed char tmp_msg_1[] = {15, -115, 28, 21, -60, 23, -56, -76, 28, -105, 69, -68, 122, 115, -117, -68, 87, 77, 1, 20, 55, 124};
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
    msg.setTimeStamp(0.6457389701309103);
    msg.setSource(60568U);
    msg.setSourceEntity(230U);
    msg.setDestination(23707U);
    msg.setDestinationEntity(211U);
    msg.req_id = 20510U;
    msg.comm_mean = 200U;
    msg.destination.assign("QALXTXCTNZUFYRGXKZAUYNONDFCOOPHMYNVICILROAPEDKWWTGAPSRBGHIIFKQDVGWQVIOTSNXBUHEFBBQIZKODCPBZSSBZUETJVAXHFZNIZENDTSQEMERHTYBLHRLDMYDSRCKLFMZVUHVKBJWAAFVA");
    msg.deadline = 0.5974582481114695;
    msg.range = 0.15698921993079717;
    msg.data_mode = 136U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1267551931U;
    tmp_msg_0.start_lat = 0.7585872853854988;
    tmp_msg_0.start_lon = 0.8085087785014344;
    tmp_msg_0.start_z = 0.08663315412846562;
    tmp_msg_0.start_z_units = 161U;
    tmp_msg_0.end_lat = 0.7517879703738766;
    tmp_msg_0.end_lon = 0.15469652263962974;
    tmp_msg_0.end_z = 0.5251545612044775;
    tmp_msg_0.end_z_units = 234U;
    tmp_msg_0.speed = 0.3943882148270923;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.lradius = 0.5408681988889765;
    tmp_msg_0.flags = 190U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZLJOQHQBUIPKEJKSHYQDAUACCAXRICKGITBYBBZJFIOHPDDMVR");
    const signed char tmp_msg_1[] = {-48, 70, 112, 113, 71, -62, -91, -82, 10, -32, 108, 114, 65, 17, 12, 45, 16, 93, -16, 100, -107, -25, -45, -1, -4, 111, 50, 49, 94, 80, 10, 81, 42, -101, -61, 21, -57, 9, -78, -12, -98, 58, 42, -31, 64, 107, -39, -20, -33, 9, -116, 31, -102, 10, 113, -12, 31, -44, -55, 41, 102, 36, 88, 71, -50, -24, 96, 31, -41, 79, -50, -113, 85, 80, -21, -95};
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
    msg.setTimeStamp(0.3877040952108969);
    msg.setSource(17290U);
    msg.setSourceEntity(198U);
    msg.setDestination(50409U);
    msg.setDestinationEntity(1U);
    msg.req_id = 65084U;
    msg.status = 95U;
    msg.range = 0.03762652563270141;
    msg.info.assign("GQOPUSNZWWUDVNFXQPDLOYHANHQJIJXCXSALSOXSAYZIXSBNFBHRPMGEAEDOYOJHFZUEXZLZCYZXNPSPRNXUVLRMKYAFMDMPKQTRWDBTMNJSNPFWCFYLDOTOOBDKTYSZMGWUVUMKCGUHXLOWJTBAEFQJBMGQRJKVDLVFRIQHKWBYKECWVGZARBTYEIDCMIGUWREHJEQUOZXCNSWCIVHLUCIIL");

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
    msg.setTimeStamp(0.6297545972838885);
    msg.setSource(30382U);
    msg.setSourceEntity(253U);
    msg.setDestination(45119U);
    msg.setDestinationEntity(226U);
    msg.req_id = 52303U;
    msg.status = 191U;
    msg.range = 0.6344429168724298;
    msg.info.assign("KMVEIDHBNYVASXIGFYKJYPFMOORHQFQDJQIGJGORIAAUJSKWGYIVBEMGQ");

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
    msg.setTimeStamp(0.053466725064148735);
    msg.setSource(4851U);
    msg.setSourceEntity(24U);
    msg.setDestination(28832U);
    msg.setDestinationEntity(173U);
    msg.req_id = 23215U;
    msg.status = 22U;
    msg.range = 0.38655526327848744;
    msg.info.assign("WMZOJWCDWWEQJVCGBRCNYMM");

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
    msg.setTimeStamp(0.25518310036877745);
    msg.setSource(6577U);
    msg.setSourceEntity(233U);
    msg.setDestination(57467U);
    msg.setDestinationEntity(105U);
    msg.req_id = 51871U;
    msg.destination.assign("CMIYYQMIZSTRTOAKFLJQEGVISNGENFSBXYHRSGHYOXFNBFXROMZEQMUDKSQXVWDBFBCZYPVXMHJHKA");
    msg.timeout = 0.8741028181825504;
    msg.sms_text.assign("WARNHCYXRZXDJUICKIDEIUQQHYBJOZVVRNXAEAYWYDHYYYERLJJUNUBNAINTDLGEKHELTBQQQISNLIDOBFEPCTOIRUJMXAUKJSVSQDGDKCVKKOCZXNPEVUTMSIMRXAZZJFWPZFVPSTUHLKWGBRSBGCGKZWBKOMRMPMWGFFFTKNGZZWYHYIQGXCDARVYWMSRSXFMFXGWTUBCJOLNHDBOMITFTJAJWCL");

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
    msg.setTimeStamp(0.2798568101645855);
    msg.setSource(26143U);
    msg.setSourceEntity(247U);
    msg.setDestination(13635U);
    msg.setDestinationEntity(22U);
    msg.req_id = 13119U;
    msg.destination.assign("IUNFOZFCFIQCRXPRTSZMVWHJHQVJQTNCWNYHMBYOMNUYZONYHSUDUDFLYKBZAAI");
    msg.timeout = 0.5488194478106434;
    msg.sms_text.assign("SMWBPLRQIKXQKXXHOHVWUMVUGPVCDVADIZNRNLKKTRNCOWTZF");

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
    msg.setTimeStamp(0.622580414321388);
    msg.setSource(62430U);
    msg.setSourceEntity(154U);
    msg.setDestination(5226U);
    msg.setDestinationEntity(99U);
    msg.req_id = 26012U;
    msg.destination.assign("BBKKDIFOUMHPDGZTULMGRMJDQNZBOXKGEKEAFZWHIODTEUFOAPNHGASXBRUEOFNIDEQZSRHZXAPTTNVXUZCXIEHVZEHMOOWQSXLQJWCV");
    msg.timeout = 0.2418603515752018;
    msg.sms_text.assign("BSSRMIQWYNEDDWUZSATYEKDBZROMKLKECMOBUTKXNYZQIOWR");

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
    msg.setTimeStamp(0.034077407372179125);
    msg.setSource(19382U);
    msg.setSourceEntity(116U);
    msg.setDestination(16977U);
    msg.setDestinationEntity(155U);
    msg.req_id = 52629U;
    msg.status = 247U;
    msg.info.assign("HEGVVLYNDRGTLINJSZWCLPQTGRAXUTHDTNCKHBQWSCWQRWWOODKBKXEKLHMLETBNYTEUXFSNOPBNRYSGIIEDXFQXJTQAMATB");

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
    msg.setTimeStamp(0.6622773429383598);
    msg.setSource(45310U);
    msg.setSourceEntity(177U);
    msg.setDestination(53914U);
    msg.setDestinationEntity(13U);
    msg.req_id = 10519U;
    msg.status = 169U;
    msg.info.assign("ONRXQCQBSCAHGFDGSKZJGFCMPSANTZRPIOAAEGHDBAWKTOUILTVTPGEIGIYSBBMVRVFANHICJQJVRCCVHBQSYEELBJKMEPFWTMXSBEZMGDYJBPQOQOYYLCVRXTIWUROKNCAKZUEMUDMQHAXMRXZAWJNXSEZCLFIYUIOAKFKIYXVUFQWPPTLDLSWZVMHRWFWPEVIGSNLDDGYKHUSNHETUWLDRZGFUHDBYTZJTOQKNUXBLOJVXWFKNZMJ");

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
    msg.setTimeStamp(0.20503596833040783);
    msg.setSource(26235U);
    msg.setSourceEntity(52U);
    msg.setDestination(1214U);
    msg.setDestinationEntity(232U);
    msg.req_id = 20677U;
    msg.status = 184U;
    msg.info.assign("NLZZZSEICYRMBCBRUWIAWYSRTKRMNATLSEVULWOFDKSTUBFFJDCPDGIJFYSLKKCWDUEASQRNAXFNKWPBJMFTOMYIDQHTJANRYOFOJVNUXAYCQNCPQM");

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
    msg.setTimeStamp(0.3318585859803225);
    msg.setSource(53851U);
    msg.setSourceEntity(45U);
    msg.setDestination(3061U);
    msg.setDestinationEntity(14U);
    msg.state = 195U;

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
    msg.setTimeStamp(0.768070969002645);
    msg.setSource(2997U);
    msg.setSourceEntity(112U);
    msg.setDestination(37568U);
    msg.setDestinationEntity(198U);
    msg.state = 91U;

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
    msg.setTimeStamp(0.7454683015769177);
    msg.setSource(30793U);
    msg.setSourceEntity(14U);
    msg.setDestination(20725U);
    msg.setDestinationEntity(178U);
    msg.state = 245U;

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
    msg.setTimeStamp(0.15320264076203172);
    msg.setSource(32707U);
    msg.setSourceEntity(120U);
    msg.setDestination(1485U);
    msg.setDestinationEntity(2U);
    msg.state = 37U;

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
    msg.setTimeStamp(0.14485399562119927);
    msg.setSource(19000U);
    msg.setSourceEntity(146U);
    msg.setDestination(56712U);
    msg.setDestinationEntity(188U);
    msg.state = 213U;

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
    msg.setTimeStamp(0.03023645989835333);
    msg.setSource(16122U);
    msg.setSourceEntity(197U);
    msg.setDestination(6604U);
    msg.setDestinationEntity(227U);
    msg.state = 91U;

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
    msg.setTimeStamp(0.5573312537353511);
    msg.setSource(42473U);
    msg.setSourceEntity(183U);
    msg.setDestination(33740U);
    msg.setDestinationEntity(51U);
    msg.req_id = 7459U;
    msg.destination.assign("FSKRVJUIVMTYCUNRTLHBWCXRWPGBZOGZDLJLIYIADALSIOMJJMELQQBRX");
    msg.timeout = 0.1984654297966426;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VXMYYPJNANBAWAESSFHVSQERTATLDLVZMYUKQLOSODRFWVMEXKXHQSKPZABTGOIDEECNKCPBBWJIZPMMBFGANKXLYFUDPDGJGUHXJDECQCINRCWETIHDDWKYLWPRATIFLMJLYTZYEPZAVMDRQRBUQCOPZDKCBMQRXYBOCTFVSGVJNGIUNNOGCEHWMWTLSK");
    tmp_msg_0.value.assign("FDBFFRNVEZPAISBMXVCCDIAYMOEOBCSLGPTAVRGPHKTLECSGDDDHW");
    tmp_msg_0.type = 29U;
    tmp_msg_0.access = 97U;
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
    msg.setTimeStamp(0.7362541395266271);
    msg.setSource(57731U);
    msg.setSourceEntity(82U);
    msg.setDestination(53540U);
    msg.setDestinationEntity(122U);
    msg.req_id = 12726U;
    msg.destination.assign("LEKTCYBXKMQYVTOFWDCVWIQJ");
    msg.timeout = 0.07241621186763336;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.08067914062681036;
    tmp_msg_0.aoa = 0.8133789225906022;
    tmp_msg_0.ssa = 0.6538514999341695;
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
    msg.setTimeStamp(0.10014929064781397);
    msg.setSource(29592U);
    msg.setSourceEntity(173U);
    msg.setDestination(2536U);
    msg.setDestinationEntity(139U);
    msg.req_id = 43566U;
    msg.destination.assign("YHCECWJBCYMISNVTRUPDCWTWNAZLJSCEBDKZABFADPPKPAMMNVZVXNQCFO");
    msg.timeout = 0.3115255700821803;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 48637U;
    tmp_msg_0.bearing = 0.5732740275574096;
    tmp_msg_0.elevation = 0.4208907356190926;
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
    msg.setTimeStamp(0.8223769567415341);
    msg.setSource(18190U);
    msg.setSourceEntity(64U);
    msg.setDestination(4635U);
    msg.setDestinationEntity(168U);
    msg.req_id = 14888U;
    msg.status = 202U;
    msg.info.assign("YSAGYZKXKILLCGPEFJNOAQUYGCBGDQBWAEJGKLHTTZOEEMDKOVHVDNPDSYTZNWMVWNVMNHXRPSGIEAEHCROPGWPIMSJUJZPXXOLRYBXOQQAVLBSVVTYDOFMPQAGAHZQKNDSRXCTMZYCYWGFVLCXJOQGCHHKJ");

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
    msg.setTimeStamp(0.5512166259054554);
    msg.setSource(1466U);
    msg.setSourceEntity(181U);
    msg.setDestination(24575U);
    msg.setDestinationEntity(70U);
    msg.req_id = 50722U;
    msg.status = 104U;
    msg.info.assign("YDVTUIUFQLTMKUQCNHSSFDVPQFJBSOSTZGDAMAIBIJZESYGMAYMVFJFADRXCYXZJYRUTFLPAMQKREOEBEFIWSWPWRBPKDNZLHYRKHRCOVYVNITLQKCQDVPZGCAZKOWQDZPPTHGUWVBZCLNCGXJLIEYWIUBUGEJLPWBP");

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
    msg.setTimeStamp(0.49315043159415073);
    msg.setSource(60574U);
    msg.setSourceEntity(47U);
    msg.setDestination(1549U);
    msg.setDestinationEntity(42U);
    msg.req_id = 43399U;
    msg.status = 22U;
    msg.info.assign("AKILSWRMRTOCMFSESYFZMHJVMZMDDAXHNZRTCRILOAYUCUPPXJBGCEGLNDRHOJQOJWPGPKSHNPDREFXSAOZEQHYXIFFSLLQOXOUIVZJKHZSUWHP");

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
    msg.setTimeStamp(0.6294249408877073);
    msg.setSource(49237U);
    msg.setSourceEntity(46U);
    msg.setDestination(36867U);
    msg.setDestinationEntity(64U);
    msg.name.assign("CWKJECDSNYJEWWOECDAGGJIPZSANYGZERSBMRVKLTJWUINNDBFFSXZLRHIPQJXVXQEIYDYSZSYBRVMVAAVKLETPIYLEZLHUEEIZTCACCACLOMTTWHQOMFLYGEZNOTTHMXDDPBLKKLJVUPXNMBPJRGZXYROPPDNM");
    msg.report_time = 0.36893675372846746;
    msg.medium = 40U;
    msg.lat = 0.3656862585996288;
    msg.lon = 0.4506415182679129;
    msg.depth = 0.9304852556048441;
    msg.alt = 0.02521688333484562;
    msg.sog = 0.008338234610984707;
    msg.cog = 0.470056436728178;

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
    msg.setTimeStamp(0.347557772542619);
    msg.setSource(24559U);
    msg.setSourceEntity(198U);
    msg.setDestination(13037U);
    msg.setDestinationEntity(167U);
    msg.name.assign("XEWTEXMNWVTXAIEQUKBRRYKLGYHAIXPFREJUJFZGSQDKCHTPEGANTCWQOYRMVSSQWBCVEONKBIXDHBIOMDSSEHWYKUUZNLTORZVQKOGZMXNMRKNKICAVPG");
    msg.report_time = 0.33551482001435995;
    msg.medium = 188U;
    msg.lat = 0.6169372211503225;
    msg.lon = 0.532307103079103;
    msg.depth = 0.31509902230540054;
    msg.alt = 0.3121322832545017;
    msg.sog = 0.6447928915671657;
    msg.cog = 0.9908776840484057;

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
    msg.setTimeStamp(0.9403293071826846);
    msg.setSource(18283U);
    msg.setSourceEntity(231U);
    msg.setDestination(11288U);
    msg.setDestinationEntity(75U);
    msg.name.assign("NPVZAFAYLSXLCRASJTDZKVCZZBWOLDOTLRKMFGXXXCOWCTSKZQBCUTZKWPFZXAPBXULUIJHDIVPOYGPVOWNIOMRMIHYEDNBOEUFZDYGBMRUQGKQFHENZRJMABOUAUQFXPEZNYJDMMBBJHCHSFQOLNJVPLVAXKGYGWCEYJEFIDCKIPPRNQENFY");
    msg.report_time = 0.19362697451085076;
    msg.medium = 2U;
    msg.lat = 0.9757574415474881;
    msg.lon = 0.30793570845856644;
    msg.depth = 0.5868583830633923;
    msg.alt = 0.7580994510716919;
    msg.sog = 0.5750532065523355;
    msg.cog = 0.903930322585406;
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("FKCIVBAMNOBBIYPAMYEPLFVHYQZOCJLRJZGWGLRMMIIKDO");
    tmp_msg_0.value = 203U;
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
    msg.setTimeStamp(0.19451940419741565);
    msg.setSource(59209U);
    msg.setSourceEntity(167U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.5888910984808963);
    msg.setSource(16056U);
    msg.setSourceEntity(147U);
    msg.setDestination(53327U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.8011972807433545);
    msg.setSource(25931U);
    msg.setSourceEntity(92U);
    msg.setDestination(8569U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.9409162346929599);
    msg.setSource(22555U);
    msg.setSourceEntity(200U);
    msg.setDestination(56753U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("IGOKDNJIBTSWLKPAQMRMRXKTXFHYZPNATBLOEVKTWSEYUEYHPAKCFOHNHAZPNUVBKMTGJVUXSLYITCBLBHAIPOXGIMNRIPZCEBGGTTNFIQULEJYSRWZSXFSECOFQCEZLPRVRBVMAOJIOBJOWPQDZQFLRHBWCMGRGEGDKVXZHEZNNMULZTQBXYYWPMAIV");
    msg.description.assign("YDFQXKYEGWRFLPUXRNACFAQYUPFPPNUCKBOUMZNJWNQNDYLMXWNHGTAYPNVTFIELRSWYQQEZSXUHKLRUWBOVBIQSDCKKIXTMEVPEASZHAXFTVYXZMGOCFIWZHKOUBBPICCJOVJZVDHJWAJFBDSGLCOTEHIHUZFTAQAPIMNABOGLXSEHSOPYRJKXIKRSBVRTMVCTSXQWYGJIZUMRQQTKYOEMHRCCJLLPFWGABLMN");
    msg.vnamespace.assign("CJCYLRKREJAUDJSFAKRFKGNCUHBOYIVUOEHEPUYSOTNLNLVNJLPMCIEDHMFZAZGBDFGJZBRWXTSMQWEYZZYPKOWTHETLQCADKATVZMZIPEMWPADLVOHCUXEEFMQSWCOOMCYPIXHVGHVPAVKOBLPNNKQ");
    msg.start_man_id.assign("DMSSQIFEDZIFFTKYPXYMVVNBIJUVXGZRRCTCSYMQHQGWGIAWDLQWZAOGBJLHCCFGWRPJ");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.5755100456133175;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.844905534958005);
    msg.setSource(21835U);
    msg.setSourceEntity(163U);
    msg.setDestination(63820U);
    msg.setDestinationEntity(170U);
    msg.plan_id.assign("DYVSUROYBSIEXGMZQGVTDPAQXHJJOUGIBJBREFMBMQUKXIXANY");
    msg.description.assign("GYJKQGAUFWVMSSTCSRWOYCHJQRBEQJRVDTMMGUXZPVOJTDCOQUPAMTFADQOIMOYNYBGOPCULTXYKCBBGQWKCNZXLVYVUMVAVCUWKNIKWXIPVFEYIAMISKPLWDSNIXSBEZDFLIUGLWRHIHSBNPUHYLROZR");
    msg.vnamespace.assign("NJMZUOBKJFBIPV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IUDEOJKJCBEGBBZRNZRKOXHCYPTRSBUUEQAGNFKFYUNAEUDUBCYIIXKBPRBPKPOGCWSDQSXQVWQHHLOQNRMVGDOZMXWJCL");
    tmp_msg_0.value.assign("IHRMCARYQDSNSCGFNKBVBGERXIZJWPXTDPGMCFENHGFAHCKZCKGZTRVQLWICXOCPUVXDDYKUXTETXUDYJSAFMWBPTPVOZHUNULSQMZMIBRWIXONEKJEBAJEIQBHKJMLSVLAHMQNUMRDQOJFUKYOQNZTKWGWLOLIZMFJQUAYEWGELHFSDTJZQVHOYZMESNDXRBNNFACSVYPVLIDJPXLAZIUBTQJHSGOLVPKYSWXGWFPRDFTYW");
    tmp_msg_0.type = 163U;
    tmp_msg_0.access = 156U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EVOKHPUDEPAANSVUMMEXCFJOIJYPITRAZJVGCYQDKJKSEOGTXIRMJCNCCWWTUJAMZLWFKBSBQAEQLRVUKTQPKBXRNUWEOUALYGGDLPBKAGSRXHOPRFTLTMRQTRHGPOISQWBVHIRVDLIIAJSHUGWYMINF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BWQFCTDHZLCUCGLRVCPVXACMSGFYDMERMOTWMQZLAYSJKWQPZKLYVXWFHNWXFOOPDOLGQYUJZEYNNLLFSMCGXQXNYDFQJHRXLHJHMIHANTBBWZFEAXOTELCKVKSJHDRQFBOKONVKMEDPNCPQHOUUAKUMKDQJJSYNQVPJIGBBGREPPTGDWXZHXIBCIZE");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("PAHMPILXFHMYPNELCAJSFGMFRYKXCOQSARUXEUYIOMCREPMKPUVDWNKEZGUQHICMQDUZOHXITFJCYQYBJBPADTNLTLHMKADVJLNVXRZDBTWCCWKUTQOJYGRTVATASKDOCUZGMSKKGWVJBGQGWGDWFXUNMESSLLZEONPDQAEHOFZVIOWKHZFDXYZFQBSCGBIVQRVWWXRAPBP");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6199797799520214);
    msg.setSource(38990U);
    msg.setSourceEntity(42U);
    msg.setDestination(62942U);
    msg.setDestinationEntity(30U);
    msg.plan_id.assign("NYWPKLCSFIEBXDFTCUCNMVAFNJFOGVLSAPMTENVYWK");
    msg.description.assign("UXLJHHGICZCSFTMJKPRLTHAFKBNGZCH");
    msg.vnamespace.assign("FIOKXFWPVSAGRGBWMQMKGFQTEBQKGBDDAWWWFFZKWVERTJTAAJVYULPOSHQUPMAWYZCCEWDYOESFHHCHIZYJXUICUPSYUJREUEBBPSDAIZMBIRLNIGOXMXMDEINRTJQZSLBLANNL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ODLZAVWPWRBXVPKCDYJYISZTESVXHZOMNOZXPUPNQGULHZQIWNQLKNDAIBQGNPZXCOMWUFFCJBRSHJFHUYBYMNYZJPAOJULJSWJQDJTQDNOTGOKHKBSEUYIAKYRHSMBFERWLDBAGVZLFCKWAIWNITFPTOGJAEFOBXQIMGTJAELDBGCYOSFYRVEBREVDDERQMWQVKHDCKFKQ");
    tmp_msg_0.value.assign("TESDIVORYQIPHKDEGSBZKKQAHOHQTASIDTGQTJESFGGQRDPFQDDYYIZOIMDOXPHBMSVZCVQQRRDLSUILNVZNAYVVTCZNBXFYUWDYBNVTCRCLCIWHRYPZCIEIOLJBWUQNESTUEKPXBZMAQCZJNOHAEXFW");
    tmp_msg_0.type = 53U;
    tmp_msg_0.access = 109U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VPMUWZHUNVFUSQQXWQZCZBNSIKMLUENGFEHLNUHHNLKNUWKNJBIBDRQRPPJGDBVLTDSFCXYDTSPWGECZMQRPRVPZRYIXJXWTHPMJRBCTIJWCDTXODKDBNIPAMHXHDAFSEOPWKEBGBAQLUWNEGMOEXOKAJAYJZLMERMYTIHRBGPBVVGJKUKTFSFQCLLXDXLYXINSQYMQSYYVIATFZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AMSDRATKOQJYGHAQVTZYSSDPBMNVCUXLTZCQIDQAGGRBOWDOYNAFYWYKOQLIQJWRHPMBUKZUOIDSZXARCBEPULXSXLYGTVZBMQUPBTXBZEKUVTTEEEQXPFUKXYWSBPMENNTTJKJMJVWKISEANPGOFJUIMNOMOLIOQFRVSSELCR");
    IMC::FormationPlanExecution tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.group_name.assign("IOFFUHILQBGHHKGRSBHDBMDWTJPZTOFJUKJUYIZXZXLQZLOXZAICVGEOCFTDGFRBKRPSCPDXWQAINIRMLJBSQWPJEUIKIFKQDCTVYOOVLPNNVHUGKRVYDEYNWTXVMNOYPVXMOLXKNQUCHDBOTZBWBZRYURVTFFNWVPAJJASKNHZA");
    tmp_tmp_msg_1_0.formation_name.assign("SZYBTGZTPSXTHYEYGMXEHMRRCKWFLCYGKUBJDOIVBJYFVRJVFXULORJSTIWBAWCQNKBKSJNKLFSRRLAGQIQNMFZZJWMVEVNMANWECQOFSUCFIWZUCX");
    tmp_tmp_msg_1_0.plan_id.assign("KYVAQLGMJKDCAWPRIACLRYCDYOEFBGLTTDHNSRYQDKFVBJHBIZKZIOXEASKCQCPXAJHZPTUYONAWUWIXMPMFGXEMWUHPAQSZYLTSHUJDRHMMNQRGINZRDFCISNACPKJWGLOETNSSDUBOPHVPUJFXXQRBYSYLDUTHZOKFBMJFOETGXEUXBWZVKYWTLVPSEIGBKIGJAVGMKMO");
    tmp_tmp_msg_1_0.description.assign("QXKKXFNDPLYJBJYYCFWJEGCTSKDPEQRXZLTWDZUPSVQWABAVJLHJKITBNVCLAYXBHGWENWASRZMRZWSYQAGUPALMBZRMULSZSMOPIXUIXMBVEIFKWNCFXNMCRHDJQWSORNORFTECBQSUKVGRPO");
    tmp_tmp_msg_1_0.leader_speed = 0.7279039588204234;
    tmp_tmp_msg_1_0.leader_bank_lim = 0.9887847005312278;
    tmp_tmp_msg_1_0.pos_sim_err_lim = 0.10934822026915247;
    tmp_tmp_msg_1_0.pos_sim_err_wrn = 0.34593558589976015;
    tmp_tmp_msg_1_0.pos_sim_err_timeout = 11904U;
    tmp_tmp_msg_1_0.converg_max = 0.7768514148013715;
    tmp_tmp_msg_1_0.converg_timeout = 23603U;
    tmp_tmp_msg_1_0.comms_timeout = 15207U;
    tmp_tmp_msg_1_0.turb_lim = 0.5681940316480693;
    tmp_tmp_msg_1_0.custom.assign("JREAQVPXXKEHEEDPVIBGSXIIXSLIBQVSYYOGFLHLQTCWHFTJQMKMVUEAPUYLBYSDPMMCMZQDLVDPLHHHZVXDSGHEAQBUUIPBETYFXKMCJNVPVRTBLZKBJCNORZFYTFOZN");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::GpioStateSet tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("OSBBYROBEHIWGRCDWHGHUXGRKFPOENOJFUEATDMHRIUZEXKGVYZRTMVTNBULWBCYUSNXLFFLGKWZMVTYQGPIJVVKEICFGXXBSPCTB");
    tmp_tmp_msg_1_1.value = 115U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::EstimatedStreamVelocity tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.x = 0.2532358136589117;
    tmp_tmp_msg_1_2.y = 0.3604862995972763;
    tmp_tmp_msg_1_2.z = 0.7724602434132221;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("HUZAFOPNCXTJIDQBRNGLTSZRAWEFDLORWRSHTYWLGJSMAGLNQINEYAHXVEWOEFWUWJRBPDXQZPRSDQAMBLIUXBKVQWVRWRUMATFNGOKXQVIAYVZUFGQDNKJMNJIHGJB");
    tmp_msg_2.dest_man.assign("YHZMBNFBFFMNPLKDZUSGGGTR");
    tmp_msg_2.conditions.assign("VTXXDKMPUWZKXVADATMJHEALOYBQUUFOBJVIGFGSLMVAABXONLXMVOGIDTADKFHUHNTPFXCO");
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.4236988573584597);
    msg.setSource(62615U);
    msg.setSourceEntity(96U);
    msg.setDestination(44814U);
    msg.setDestinationEntity(133U);
    msg.maneuver_id.assign("VORQQMRSSWAJOCHUOOGYHBZWZKPDVAZWKXCMWYFWZPMUGFUFQILLQEBEJPJOEKYRVWZRJVESNICYCOKHTFNNZXIFKKHCCWYNUJMLWLTBBZROD");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 31448U;
    tmp_msg_0.lat = 0.14013405903153198;
    tmp_msg_0.lon = 0.13551281976311635;
    tmp_msg_0.z = 0.7118746755164524;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.speed = 0.6019804128640208;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.custom.assign("GERNEMTJOIBSKOPAALJIZRFMJJMHYDAXURQPPWRODBMQUZCBTOEETPEOTYXHJMPCAYUZFDEGKHWVHWDPGLVVGXCQEKGCCXQBSYDXHCBCYLXNDRTVTZJOOUUIURSOQUWPMNYMZCUUNSADHHPCVIDIXPNNH");
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
    msg.setTimeStamp(0.7059420896001593);
    msg.setSource(31331U);
    msg.setSourceEntity(253U);
    msg.setDestination(11957U);
    msg.setDestinationEntity(240U);
    msg.maneuver_id.assign("KDULMHWFJRYWNQCGEJLVLLKWBQCIWXFAIVZDSPKCPDOVIIMXTGVWZNHTRJQFNBRJMLSXH");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 22184U;
    tmp_msg_0.lat = 0.6648477889190698;
    tmp_msg_0.lon = 0.47135301003933383;
    tmp_msg_0.z = 0.6621971941590714;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.speed = 0.5234171197527759;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.duration = 39053U;
    tmp_msg_0.radius = 0.19745110719349535;
    tmp_msg_0.flags = 32U;
    tmp_msg_0.custom.assign("JEFBKSUIMCQRSQZDTHAHIEJXLZKEPSJJPZBITGNFQEWNUWHBCDQSMYBWOPKCKZSVWIOCGYCHCHMEAUWTDIZIGXGJTIYMYLADLNJRKFONPPVZBHENYMOZCBUHOXPKCLKGRAWPTPBQVXAIOHVRWAXLFJWSATMROMAFARAFORMXUYGTJSTDLSJYMUXEDELLZCDBNPGMTRRIKJQRDDZVGVUSIGKHNGWKLHVFXQYXTEFBXQOLNNVUWUBECUVDYYQ");
    msg.data.set(tmp_msg_0);
    IMC::PlanDB tmp_msg_1;
    tmp_msg_1.type = 204U;
    tmp_msg_1.op = 107U;
    tmp_msg_1.request_id = 12002U;
    tmp_msg_1.plan_id.assign("IKZHDLVCEGQHHQGKDJDPNQULLBUDHDPLVPUCZJEMSOKNHIVYMCFEOXWWG");
    IMC::PushEntityParameters tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("SFYKBTFKPMWHZGCCAJCJOXRLZEAFYKZQZQWCNNVPXWRPOGKARWMIHXUCROXLSNYNJOGTSUKJIBINSYQYSICASGQ");
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("ZERDSDAPCUGZPCUJQJISRSTSZKJSYMTNGXYGXEIVZQRRXQDHCPVYFBIZVXWOMWVBZGWQSAJZIUXDGYYMNWUPFNCAFFMHSHDHXLNNQZBTMCWLYMAGLKPTUWCHHETQHTVOKTHJVEFEBGXXMDIUONPQJILBOAETIHZGQLWLKKPEXVSCOBPJKQORYJRRELJDOXCH");
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
    msg.setTimeStamp(0.32003884534540283);
    msg.setSource(29529U);
    msg.setSourceEntity(62U);
    msg.setDestination(50817U);
    msg.setDestinationEntity(217U);
    msg.maneuver_id.assign("HTIRQYJRHODEWNPAGBRPAXZF");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 59934U;
    tmp_msg_0.lat = 0.4749887220822834;
    tmp_msg_0.lon = 0.7348047450660655;
    tmp_msg_0.z = 0.3040472531162164;
    tmp_msg_0.z_units = 216U;
    tmp_msg_0.duration = 23408U;
    tmp_msg_0.speed = 0.0030482896230623613;
    tmp_msg_0.speed_units = 49U;
    tmp_msg_0.type = 225U;
    tmp_msg_0.radius = 0.9419210591014098;
    tmp_msg_0.length = 0.9005206790110853;
    tmp_msg_0.bearing = 0.4276719665808627;
    tmp_msg_0.direction = 7U;
    tmp_msg_0.custom.assign("BDALHDZVGUSOPEKQDZBUVHRNAVFIURWBEYYJNQDAVJXUMVFMBFPZLZSBAUWPPKHSECEEYDFXCGUHVEILHZZTSKGZKGUIXJCYQOPJIXNHJWVLTGBHAOGTWRTOWMAYRKOJSGARBMJPCXNZFKNCNRQWJNVUCQSETTPWBDTMOKWPYTLIYDPBGRYHFRPGVFMYSDKXHSTLAODRYIQHXZWFNIIXIEIUMCEGQQ");
    msg.data.set(tmp_msg_0);
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 169U;
    tmp_msg_1.snapshot.assign("TGKUUQXYLRNOMZPEXCYCGLPZPINEZYGJNLUJPTCGQAEOITBWIMFUERSHOAF");
    IMC::WaterVelocity tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.validity = 130U;
    tmp_tmp_msg_1_0.x = 0.4416245406196706;
    tmp_tmp_msg_1_0.y = 0.040446307993473374;
    tmp_tmp_msg_1_0.z = 0.3134846174789745;
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.9399231375635022);
    msg.setSource(60205U);
    msg.setSourceEntity(109U);
    msg.setDestination(25137U);
    msg.setDestinationEntity(212U);
    msg.source_man.assign("RWXZLLPQVAZYJINQMSLTFOEFYBUPQAGEUTKWYQZMVKQHMMUERSTCYCHNBDLVSVGFEMJJPCSLFZAPZFONFSTPBKHXBJKNXVDNJETFLRORYDTF");
    msg.dest_man.assign("ZKOJBGASTGXWLUXWSHXBNXPONFXSCTHRXFAHMFJSASZSJWMXISCIRRHRRLEIYKYVHFONUFCXZDLAVGUQOMZCPBCUDTYCFMPZTLEUZNXQJZLVTITNPMRMSENLEYOALEWLQTCPYVEKDIQJUGVQEZAGQWAXBJBYQSARKBPMVBIGLZJTRKWOJMIVZDKNRFKHSHMQOHIEQPFIKYLUCKFYYVJPTGQOBE");
    msg.conditions.assign("PRHGJPYKPH");

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
    msg.setTimeStamp(0.03454128040591686);
    msg.setSource(24639U);
    msg.setSourceEntity(165U);
    msg.setDestination(4425U);
    msg.setDestinationEntity(209U);
    msg.source_man.assign("FMWJLZXNJJRDNTPDTBQIQCFMDGRSAPDOARSOTXELGCCGWHBJHEMFKUTHMJWVXVYRZRBVNOHOQFXLFZIHKEGBNLNESCWBOBOLWIYZNNRDWHCDHXKESKEHMFRMCYVQFERUBJKPSDSXUYEFAXGEYULOUNXAPJTSVKVOUFSQPWAHQVTCNDITCFWGBZAKKGLRTOZRIISY");
    msg.dest_man.assign("HVDCMGAMABYKQSRWZWFVRONDPTLLTNPSYUVKEPFXGBYFQGWJXGUGSVJDCMUYZIKOXUZJVWXDASPHPWOOSKZRQOSIQXMAYRLLRQJMTBPKBREFHDFZBNZRBMIEDHRKTQUUBGKJVYV");
    msg.conditions.assign("RDWBNNECNMFOALKBYBCVHAPNAFHSNFODKFOAPKFKZSPDGZRDXULIWUTKUGOGZQVVWQMKYJZDWXCHSRIPXBYOVXRULRGNZURMALXILFHEJSZIEMANNIGTPZHLJTBIHISBBXIXKITYPQJKQDTBJFTUVTWNBERGZTYZOFBGMMJVOCSRYAKFSXAERPGQYHQVRVWMQH");

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
    msg.setTimeStamp(0.7059111966285673);
    msg.setSource(12568U);
    msg.setSourceEntity(154U);
    msg.setDestination(55315U);
    msg.setDestinationEntity(32U);
    msg.source_man.assign("DIXHYFCOHDYIWNXYWJTKOSIIAXWOCDBPPMAEGIPFRRVRBEXNNVPITILUUQAFVCHYVWDNIRDTBDOQQTZKSCLWUGMGNRBZWUWJEJMNSZULKAXQLDROM");
    msg.dest_man.assign("CCBRKYRLEFZQNGXYQAXEVJGJUMANFRLJLRLCTXXVIYLHUKBLWWSFUSHPKGHTHRHZKJWJKNQKYBQWEPVNBIBAQMPKOSSBYNHQZGBUOZYFOPNYVQNJOFRHPTDEMQIKPDAECTUXDRVEFBOUGZWWCDOSEMJFHPJRJSEITKIBNMPUWMZXDUNLTWCOSXQAGYZACCMDOEEDBDIXRSTCVZLIWXKLVODJVGFIPNAFYSUAVTHFMOCZGPWTLSAUQHMAGIM");
    msg.conditions.assign("LPQMODPLGZAKWWIRFCKWBRMJRVJOFWKTVIZVRHCXBLRMFPJBSHWNLBQGJGINXPCZZZURYBQCITAOXHXHUCULLGOTVETJFMDJOMVYEVQEUSLVHQODVYQMMRXRESYWCHMBDLJOLPXCJQYVFYTZLZIPGGSNQSIBNCINNKEOSSDJMTHBHWGXHGXUDXPTDASKANZPZUEFIFBKIWRESRUWFISNBAKGKUADAK");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.359555986385389;
    tmp_msg_0.lon = 0.15081202523850834;
    tmp_msg_0.z = 0.5009805852641322;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.radius = 0.1308014361860682;
    tmp_msg_0.duration = 5602U;
    tmp_msg_0.speed = 0.6831637805965702;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.popup_period = 32422U;
    tmp_msg_0.popup_duration = 33563U;
    tmp_msg_0.flags = 245U;
    tmp_msg_0.custom.assign("YSAQXOGPKDKHTGHMVLMCMQRCVMBEKUZQGNGHMKCKKIVOMNJZEIWOVGTGFJLBHSYXHDQOFCQTNIFDIEBYZ");
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
    msg.setTimeStamp(0.5980395815619405);
    msg.setSource(24813U);
    msg.setSourceEntity(75U);
    msg.setDestination(10487U);
    msg.setDestinationEntity(254U);
    msg.command = 48U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TQQSFLFLDVXRHCBFGIQMNPONYBTKKLGMRKDCHENIBHXIKLWJQDRBOIWTMULVUBAZKDZEYESNICKNATEPXGFVNYUVSEHROGTWZIJYRUTJWTKSMQOFRADRWQZHXANUMERHMTAMUZCWCESPQJFUYQNEUCSASZLFIOLDNVPLCXGGZXZFIODPHUMTY");
    tmp_msg_0.description.assign("ERPSEWUTXJVAYCIGEGYWFPIREOIAYVMTROGVHTJHPCNEUCLXFCWDENSMYIHWQRMPDASULHJJOXXLBDSHDODLNLLSO");
    tmp_msg_0.vnamespace.assign("HMCNHDSMGKWBUUMQIOAGOFSLFYZXNQWPNGZKDKIBGKMABGSUNORFJAHRRTGZFZRR");
    tmp_msg_0.start_man_id.assign("WHZARTNADJVGXAFLNKICYJESXAYZZTWFINQEUSVNCCCKGRNUTQQMZEAQLPYFBMFJOGOKRSBDDLOTOISL");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BXRYIWPTDTIXNVDXUJULFTYKBAYKAEHDKNNWMLHFOIGPOWSWUMCPZRMNVGB");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 58235U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YVHJKVDLRNNXOVKXGQWCYIQHZHSFFAOAYIEGDEYWCKCLUFHRONKUNTUBOIJVQGDMJHHDTXQTFZAETJYRAIMQRWCVRTGDDCMJGKQFKBBPUZSKWRMVPJBBMVMBHTZLPBWAQGRPPIKYLWECSLYVJLSONPPEXFFEZRZLIXTKMXEQEUSLFBVMTNYCAPHMADGYUERDXXJGCNAJOLKVMQTGPSHNWIZWGUDWUSXUZOCWZSNFISHTOXAZO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PathControlState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.path_ref = 3959987560U;
    tmp_tmp_tmp_msg_0_0_1.start_lat = 0.9794673229475145;
    tmp_tmp_tmp_msg_0_0_1.start_lon = 0.4169445832673392;
    tmp_tmp_tmp_msg_0_0_1.start_z = 0.9445547786127101;
    tmp_tmp_tmp_msg_0_0_1.start_z_units = 202U;
    tmp_tmp_tmp_msg_0_0_1.end_lat = 0.5812601473123654;
    tmp_tmp_tmp_msg_0_0_1.end_lon = 0.9397195694214519;
    tmp_tmp_tmp_msg_0_0_1.end_z = 0.8944135102430859;
    tmp_tmp_tmp_msg_0_0_1.end_z_units = 160U;
    tmp_tmp_tmp_msg_0_0_1.lradius = 0.7679807813124697;
    tmp_tmp_tmp_msg_0_0_1.flags = 99U;
    tmp_tmp_tmp_msg_0_0_1.x = 0.3669661315309577;
    tmp_tmp_tmp_msg_0_0_1.y = 0.3037285236103523;
    tmp_tmp_tmp_msg_0_0_1.z = 0.8609440823827634;
    tmp_tmp_tmp_msg_0_0_1.vx = 0.8100719595366108;
    tmp_tmp_tmp_msg_0_0_1.vy = 0.2001773940284648;
    tmp_tmp_tmp_msg_0_0_1.vz = 0.04232959640686851;
    tmp_tmp_tmp_msg_0_0_1.course_error = 0.1520798265031964;
    tmp_tmp_tmp_msg_0_0_1.eta = 17713U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ILXWAQDFCTYJUFUURORSRONCPJDPUFOACXNWUMKEMFKIWIDGQLQVTZZCBTVGOSMYGVEYBMTQQQSRXCYAEDCSQJTKIBMNOKEAKPRZZSYECRYJHOJLBIJXXXLZILYWOTKNSMAQANKYRWVYCAHEWBOZSDMIMRPDUYCGNZIKHJFEDULALITS");
    tmp_tmp_msg_0_1.dest_man.assign("OXZKKIAKTDGIKCLGHKJQRRGHANBHBDHCIVEQXVBUEJCFIMVEFULIDKWNEZWONFYXWXSDFULGJTMRAIPRGEWOSAFNLSXQUWBNYPJANLVXPHSUZRDMKGOIDYNEVKZVXJQBMVJXLEOLKFYAYCPOHGCAAFIMOTPOSLUHTQUSP");
    tmp_tmp_msg_0_1.conditions.assign("QDQXPCJMRAZYGEHTKAYOWEVVNRLXMLKTZNLGJBHEASCUPUJNTIXUVQZNOZKAPTCXUVKBDABFBXKIYEQTRGOOWTZXIOBIBDIMZEAUFGLENMTDXRHDONPSWSEQNAVHZTGQHCUNOPYYDRPOFJJFCNRRCMUJXDVZCRKVSSXUEKQLGIFCY");
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
    msg.setTimeStamp(0.5707443954437599);
    msg.setSource(39922U);
    msg.setSourceEntity(39U);
    msg.setDestination(17321U);
    msg.setDestinationEntity(138U);
    msg.command = 104U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IHDTRKINCCKWGYYYUGOYFHQZFRFPATPRJSKPXLPXSRBUOWWPBARHJODLHJVBQPUFAHROFWGBRNILENABDYQFJHELPDWBQDDKWMKBHWSXWNAGKPTY");
    tmp_msg_0.description.assign("FSNLTFCQUYNVVXMHQZHSBPEZEDGMYFPRDZMTIOEIQPVHPLNJKLAVNBRVIYGDDCQFHMZDJLAVKGTALAHOERITPWUWBVZCZIKXTJIZBMMRRCMNEYQPSSOTKRXXDJYUZQCBWRTEDCGAXZCYRIDFFLGWUUWJHCUHIOZUYNHMFLKJCHKBASESFOFHPRKXTICLTYNLNLMXBXKOGPSKWABGTAXOESVWANQQOIQJBUJGMWGY");
    tmp_msg_0.vnamespace.assign("YELJFIDAYNCJLIUKGAHNYLUKVVI");
    tmp_msg_0.start_man_id.assign("NQXOJNELXWPTYPSYPGUEKIWCASXSFUSRGFUFJFMNZHTYFKVTJRIKWUNRUOTBLZLTVANTJJNRDXHUSHZJSMYOWKOQHUDGAWHMDNHLDWWTHYSFCAGFAYLJYJGCJHHOJQVADQAFEKEBXXMMXGAQGDFBIYOL");
    IMC::CompressedImage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.frameid = 202U;
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {118, 86, 70, 121, -8, 79, 6, 17, 74, 25, 86, 45, 53, 41, -115, 71, 109, 69, 65, 111, 37, -67, -11, 6, -9, -16, -92, 12, 36, -47, 84, -21, 31, -51, 47, 75, 60, -19, 55, 20, -28, -51, -27, 94, -102, -53, 27, -27, 15, 61, -60, -123, -122, 116, 83, 113, 112, -97, 69, -110, -93, -74, 27, 99, -104, -96, -96, 93, -61, -46, 27, -19, 86, -52, -118, 47, 45, 47, 23, 57, -109, 72, 38, -26, 0, -43, 0, -33, 85, 3, -76, 79, 89, -35, -71, -62, -114, -103, 12, 69, 101, 120, -96, -83, -122, -102, 16};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.7952020942388359);
    msg.setSource(64812U);
    msg.setSourceEntity(163U);
    msg.setDestination(16178U);
    msg.setDestinationEntity(224U);
    msg.command = 154U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OTCVDRLGLNOIKVJIIDMASSMWFCXWCFMOCMWPSGNBAIDOAZANITNRYBQIARNHVNPJZZLTFWMDRNHUWPRRUARAAWDUJGSRZULPXSPFNFJEISZWBXQCPHGFUEKPTJEJSFYHDCEBXJQOKAVOYVLLKUUNYVMJFHLGKAGUEYGXXYKZOYMMXGBLOWNYXEZTMLKYPESIKI");
    tmp_msg_0.description.assign("EGZMFKLVRNKNPZDKKDDQWHJCKLRTQYPPAAEIJTIOTPCIMHCECIWEYRFGKBHICZZJUHUVZSQXZDTPAESWUBWRJZRAJQBVARXYWQBJCPGICXEGGXWNIMKTXNANMFSVETWUOPKTNRMXGOLPCHDHBBFTUKSAXQILOYLASOXQOJJDLSEFMIANFHWCUFZYHDUDYRFSGBNODVMQPOVWYVKLSMVXWA");
    tmp_msg_0.vnamespace.assign("AEGFWIPVOHKFEJWOTZMSEIZFAUIZKJXIGADIDLKOXKRROBYCOORMNJQWT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OLSIHHFCNSG");
    tmp_tmp_msg_0_0.value.assign("XDCUOJWZCMMXULYGKUBEHAOYYMBLZRAOEILAIHJUMNHQFVGWQDPGNRQFTLQIFETXSROWKVWDABCPTXEJTLXSMVHCWMIFUCSKTMWGZIWTMFQZZEPOUYIIVBQNAVGQREFNVZLDMDKCAZNPTKTOMRGYUDVFSHYPGEBFGTQCAFVKSFJQOQVUNNSHHDXSXZRJNDXBIJYPSJWOAWCKYBJDRHRCGASYPLPVIKXOY");
    tmp_tmp_msg_0_0.type = 28U;
    tmp_tmp_msg_0_0.access = 95U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IUPITFXMAKGACMHLJIRUNXFMPOXRDNZHH");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("IOOYFXGITMLAXDOUXMAXPBTVOCPHRZMCRPJFIRPHVTXSEQFIECLLNBKKQPRRZBVZIFVKUXNQHDOAHEHSGRUZWCQMYDUHYUCALXVLCHYPUBJF");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.26718218172895647;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.3431301712317042;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7274862203714315;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 68U;
    tmp_tmp_tmp_msg_0_1_0.limits = 142U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.23310647498900394;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.8565472061324695;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.6705755345586369;
    tmp_tmp_tmp_msg_0_1_0.controller.assign("PTKSSWQCZUIUBKVAJAARIYUBAFUOUJJMUJIPQNZEFSRKYGTBNJMVCHJNJTHGFIGMLGCXOHBBKDFCNPPFDCTWGYPXPESNWYWNLVQHFETYSGHDAZJRFQWSOUOOFOMLYVKEMPGELRTTKYBWINXZMLXOLDXAZONWWPZFQKVUVHNREXCRZPBVDRBMTMGCBGEJPVINEXSSILHEGWRVUQYAAQDVJLIWXEKQBYOHQZMSDXDMRXL");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("IKMAHGOICVWSYDCNSVTZPGLOMBOARSEEVURNCDHPNBSQZYKGOIMHAIQANFTBZVMZGLEXJBWREDWLVFDUSMOHRFMUIFVWCPSEDWCBTWYPOFTACYNMZ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PowerChannelControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("XLBTRRITIMDYCBJUBXXMEXKSAJHMWDOUINUMZOIBACUOCKRLGVTJQUZHWVGZASIVHQELSRJVJGFIYFIQWYPNGOADQARKKAOJKYFWBZQTAOIGQPXBUCXTZZGUXRDQKLCHDEEFDJNNBLAGVLEVRKDPUEHOBVSCCWBSXWQIQLSBCRXRIGDSOUNTHMLKEGZNPZXYALVMZNZCNQEYCEKRSTTOFHMKDFNSEMPHHFYY");
    tmp_tmp_tmp_msg_0_1_1.op = 20U;
    tmp_tmp_tmp_msg_0_1_1.sched_time = 0.18814799869372245;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Elevator tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.timeout = 54472U;
    tmp_tmp_tmp_msg_0_1_2.flags = 54U;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.29423553340676;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.636052681611131;
    tmp_tmp_tmp_msg_0_1_2.start_z = 0.0030438252811704203;
    tmp_tmp_tmp_msg_0_1_2.start_z_units = 60U;
    tmp_tmp_tmp_msg_0_1_2.end_z = 0.6467875800843617;
    tmp_tmp_tmp_msg_0_1_2.end_z_units = 211U;
    tmp_tmp_tmp_msg_0_1_2.radius = 0.054163354586169055;
    tmp_tmp_tmp_msg_0_1_2.speed = 0.6724639596742987;
    tmp_tmp_tmp_msg_0_1_2.speed_units = 108U;
    tmp_tmp_tmp_msg_0_1_2.custom.assign("WTJHEUYCEFLGMUCAEXXUGTVTKPITKYHERVZXMJAQRPUUTNQJJRBLJRUEFESZDQKDVHRAKZZWNGNCSDOJJEPPPAYSCKCAASIVWWFGGDJNLPFEXIFDQYUKYDQSTKVIQRCOOAFXFIVLMGYWAUNWRJYSPKXZHELAYVNSPIZVENXHQOBBVBZHNWB");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("VIZHKTTAEYGVUIH");
    tmp_tmp_msg_0_2.dest_man.assign("CRDMBHBOUPZBATWPXQXDVOBJAQOXPBPFIEHWJVMBAEPHVXNFRLGDMCWUNRMRUOKNUYOPIAOGUYLXTGYSTCPUQQJIGBYVNNIAZGKTHTZGPDLZEEGFOYCFROTPJNWFEMGWWJAPTHKEIXMMCTZLKYJMRMOULJKXLCIRONUEHUEZSURQIWVHTDDZLLSXNVQFYCWYADYICMAASJZBIKCHZVKRHSJWXFFSJQZ");
    tmp_tmp_msg_0_2.conditions.assign("RGVBNVDZIWVOPAYCVDBIDHDQHBVEZWBWFTACXIGWMVCDBFNOYCDOHASYQXTMMERGRXQGQFEKLQAWPPQJTTGOAZGKUFJNLNIBESOLSMPKYJEQVAHKCXNRKJTEYMTGHXMGCOJYENKRKPCWASLPUEUPIRHJCTVAPZFIMYRDOAWHUBYSIUDALOWSOZ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.009662928112854297);
    msg.setSource(20430U);
    msg.setSourceEntity(165U);
    msg.setDestination(18777U);
    msg.setDestinationEntity(134U);
    msg.state = 85U;
    msg.plan_id.assign("DAETBKERAEIBKQVZVISQMTNBPFQUYIQKPZGRXYNHXCJCYLPPYECNWSNZO");
    msg.comm_level = 44U;

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
    msg.setTimeStamp(0.9873588795322263);
    msg.setSource(20377U);
    msg.setSourceEntity(222U);
    msg.setDestination(37336U);
    msg.setDestinationEntity(163U);
    msg.state = 182U;
    msg.plan_id.assign("YSICOTVOHZWXDIEUZOFMBJWXGGIRAXSEMXHSFCISBQBBIJZGPDOXMVNUARQPCHULHMSFOTUFLZPVYQWHNKUQWFCAOJNDAGWBCLPUKPVDNYPLMFDBDSDKPMHSTCVILKTRCXJDRNYKNXIBUEHKUFWVYFYPBSIJNJEBGODCJWXRZUILICCZMQGRKTLFZQJNGYEVWEEEQHFKTYNTLOJVWZTGWXTLMOG");
    msg.comm_level = 230U;

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
    msg.setTimeStamp(0.5037840005189723);
    msg.setSource(8597U);
    msg.setSourceEntity(188U);
    msg.setDestination(39835U);
    msg.setDestinationEntity(40U);
    msg.state = 71U;
    msg.plan_id.assign("VEOQTZWWBIKYFBIFEMSNJYTKSOOENVBUVGSKLGWBGFPAMXHKRVRZSKZBAUICFPHLCTQNPJNGJOPUEBHUNXDQFJQMWWLLXKHNAHBIQTJHPDFHETUAYCLMMQPDACIPOMFKRVGPFYIPHXHVSWDTZOMGOXNNVHRAEGICAKTONJKEMSAJRQWCDDDXCYRURSRBYCKFSEIBIGUUVCSJEMYRJYZZDBVPWXGOZUTZNALXLTGTADRL");
    msg.comm_level = 66U;

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
    msg.setTimeStamp(0.8896982932565236);
    msg.setSource(54503U);
    msg.setSourceEntity(116U);
    msg.setDestination(18857U);
    msg.setDestinationEntity(184U);
    msg.type = 220U;
    msg.op = 140U;
    msg.request_id = 43896U;
    msg.plan_id.assign("HAKMKXOLWVRBGZEZPQVHKVKKJLMCLLPDPSSCSJQLSHENPAYHDDFIYYAMTBSEKSAFLPIBVECIHBXGOPSGWAUPXXYNOTMGHTDIDZUZNWHDTEMVYCFCFHDSPRUYEVRZRCXZWHIEOJFZ");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.5557469297553561;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YETXATMQAFIPEEHLLAKDFUCBFKFXOLULWNRUSRVGQSRCBGSDWMCWSTPLYRCCKXWNZNVILGPTKVREAFZMBPHDGJTMBLUPOWKZKMPRCDIWIHXJUXFDOTNYWIGPIQHZENTHGZRKSEEXEWSSQ");

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
    msg.setTimeStamp(0.5749200930532987);
    msg.setSource(62073U);
    msg.setSourceEntity(88U);
    msg.setDestination(10796U);
    msg.setDestinationEntity(35U);
    msg.type = 198U;
    msg.op = 0U;
    msg.request_id = 13050U;
    msg.plan_id.assign("VBHXWCOFKIQBQHELJYOUDVCTFYPPKQFYWTQDXTYMAFJWIDR");
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 53018U;
    tmp_msg_0.destination.assign("AMBWLDNWUAJKDMTQWQLVAYTRZXQOQFHCSUSKMUODMGVFHIYTVBHTCTFHMSSLHXLKBOVXPZIDHWXGVBZEXBQGNSRRKAVPCRQQOWEZCBHXXNCDNI");
    tmp_msg_0.timeout = 0.5238468193058364;
    tmp_msg_0.range = 0.47429900351747023;
    tmp_msg_0.type = 225U;
    IMC::LoggingControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 158U;
    tmp_tmp_msg_0_0.name.assign("DVCNBHEQBHSVJRFMKOMXWKFATYCROQLSOABGYUZRVJUDXIXPQYPLYMLNLIQTNSISVDYCNDLKOGBMJWUAXFFZFDNUNJZGKDAPEIFJZVCIWSBFOWNJHCIMLJASVQNMT");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VXZOESBIHXEQWDWQKT");

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
    msg.setTimeStamp(0.9975122565990481);
    msg.setSource(20031U);
    msg.setSourceEntity(190U);
    msg.setDestination(48383U);
    msg.setDestinationEntity(56U);
    msg.type = 70U;
    msg.op = 51U;
    msg.request_id = 50213U;
    msg.plan_id.assign("JENJTILLMQKFSTHZOUYLNSVUMCLUAHTYJGVOQKGGRMXLZPYGECNLWISCDJIYPCVDUAUIQEDKXQWCDWDPUBLSJAHZTTOOTEAZFIJGVBHARIRFSQVQBRXYSHFISCUANBBOHDURJDNVNECSEYQTBXKAIARLDOOZGENCLBBJMXWUPYGKFPWCRAARYZMIZHMVUTSFXFKEXXRPZFGNNQBQHGKPWSHWJRVYZPEOFPGVODVFTMMPOTIJLMWQKBZWMXWX");
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 26396U;
    tmp_msg_0.status = 25U;
    tmp_msg_0.info.assign("YBIJPDFJCLTDIXBVNBZNZNJHVIHDFOZWLKYZOFBEXZDXMUSCNJTFTIBXMYPVRRWISZJOUXIBQBHIMPYYRUXMAMULOSMQCKROSSHVZYTKGJAPRODLKTBSGAKPLVKSDRUSNAQGCCFCQTFMWRIPWVNWUVUJJZGQGWHQPOTBQWCAQNEKYFJKPALXDEWLXCASHGOJESPHXRHWHYEMVOQAFYRVVWLUZEGTDZNP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OLNFMTEHDGVNGQFGFDBCMMHCVHNMCYZCXUMLKDKVIBBIOULHTENCPKUKASOIZHGVNCVEIOCADVZLNDCAKXKWOIYDRRERLJPSVOBHYKIAUQQZQURUTWYFOKSSJHYBOZXGSSGDFZQTKHJXIPFJDYFSOVTJPWYUJMGEPBTJWLCGXAAMQEZMLTUEJQMBLWEPWPHPWYRYVUWJXRXCZGRNFJILNPATTKEYZBFHSFPXNLR");

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
    msg.setTimeStamp(0.10703495113842942);
    msg.setSource(8305U);
    msg.setSourceEntity(141U);
    msg.setDestination(36425U);
    msg.setDestinationEntity(84U);
    msg.plan_count = 36087U;
    msg.plan_size = 3107060767U;
    msg.change_time = 0.6408348673882812;
    msg.change_sid = 28762U;
    msg.change_sname.assign("XFSFUYPVWEIKOKHWXXOMFBIFRPMTVSRZUJDZCPHW");
    const signed char tmp_msg_0[] = {63, -3, -7, 36, -39, -81, 15, 125, -35, 3, -85, -108, 97, 14, -35, -84, -83, 49, -60, 29, -3, 32, 122, 48, 114, 98, -66, -44, -113, 101, -36, 13, 43, -13, 12, 109, 68, 57, 36, 83, 32, -60, -88, -53, -19, -30, -41, 64, -113, 108, -30, -114, -10, 16, 79, 123, 58, -39, 103, -88, 43, 111, 42, 19, -2, 70, -60, -32, 43, -48, 70, -112, 124, 86, 72, -10, 78, -3, -34, 54, 56, 40, -59, -106, -36, -113, 20, -70, -22, -79, -96, -34, 65, 64, -58, 60, 20, 57, -73, -113, -73, -70, 18, 58, 89, 15, -3, -104, -45, 60, 58, 18, -57, 116, -43, -91, -80, -26, 124, -88, -115, -73, -83, 33, 91, 93, -31, -9, -66, 33, 18, 35, 69, -32, -64, -88, 9, 57, -40, -109, 41, 53, -102, -38, -25, 121, 83, 43, -103, 89, 109, 84, -102, 23, -46, 5, -16, 19, -126, 55, 80, 123, -123, -52, -127, -6, 2, 58, -124, -58, 34, 85, -67, 55, -10, 9, 63, -114, 4, 64, -46, 82, 78, -67, -6, 69, -120, -26, -23, -120, 82, -22, 78, 41, 52, 42, -72, 87, 64, -16, -46, 94, 18, -39, -9, -118, -29, 30, -85, 102, -32, -80, 108, -16, -55, -3, 114, 2, -72, -128, 39, -70, 36, 113, 63, -23, -44, 53, -12, 55, 125, -106, -44, -113, -103, -49, 87, -12};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DXNVFMSFNISPBTHWGMYVSAZHFPIKAL");
    tmp_msg_1.plan_size = 58164U;
    tmp_msg_1.change_time = 0.1512986352812541;
    tmp_msg_1.change_sid = 16855U;
    tmp_msg_1.change_sname.assign("CKVSUQJLXPGFGKCYTSBVFAXXNCJOWWHGJMEHGYZRKMTVAPRDXWGMUIWVMIHCDWETEKWJXPZUKJZHISLNBIDFCYINLIIPCOTGHBJFYKWDNPVMVNCBULZBOSUGARXJLVVMGLTRETKEHRQUUBJPBHIQOCZENNZCTAZDB");
    const signed char tmp_tmp_msg_1_0[] = {89, 24, -22, -94, 113, -123, -31, 90, -48, 67, 81, 35, 33, -6, -68, 58, 23, -124, -26, 35, -117, 43, 33, 123, -84, -3, -4, -60, -43, 106, -92, -64, -126, -27, -68, -77, 31, -112, 6, -32, 57, -127, -1, 44, -81, -76, -18, 16, 31, -54, -55, 12, 62, 46, -43, -20, -21, -20, 15, -72, -114, 104, 67, -98, -21, 49, -25, -26, -65, -121, 29, -78, -28, 25, -114, 126, 26, -73, -41, 14, 58, 112, 72, -13, 1, -31, -29, 19, -54, 34, -128, -46, -21, -39, -16, 94, 1, -19, 56, 18, 34, 99, -114, 43, 69, 20, 60, -71, 27, -9, 65, 38, -100, 92, 126, -75, -18, 11, -59, -114, -88, 65, -62, 0, 0, -119, -61, 31, -128, -73, -43, -23, 125, -103, -108, -23, -53, 14, -79, -36, -14, 120, -34, -113, 26, 96, 97, 105, 110};
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
    msg.setTimeStamp(0.07499648886802335);
    msg.setSource(8574U);
    msg.setSourceEntity(77U);
    msg.setDestination(21578U);
    msg.setDestinationEntity(102U);
    msg.plan_count = 54850U;
    msg.plan_size = 231336338U;
    msg.change_time = 0.4829147558931588;
    msg.change_sid = 24212U;
    msg.change_sname.assign("RKKYFMXKERGHJAREIARGRYVWAJIWXDEXOSAYUHQFTZMNJTOQMFCLIGDHUINEQLKVJTWHMZXEABBZQFFLSGODIKTJUYISSRLPKAMWUP");
    const signed char tmp_msg_0[] = {28, -118, 12, -23, 1, -31, -44, -85, 37, 30, -121, -78, 28, -33, 100, 76, -59, 7, -118, 51, 27, 110, 117, 11, 65, 33, -56, 18, 12, -45, 50, 114, -39, 62, -9, 88, -63, -8, 126, -11, 68, -52, 60, -95, 91, -49, 45, -54, -9, 0, -81, 49, 101, -105, 107, 115, 95, 0, 30, -2, 63, -124, 26, 93, -55, -13, -89, -96, -117, 90, 115, -34, -96, -72, -67, 71, -126, -124, 121, 66, 44, 89, 28, -77, -25, 5, -16, -8, -117, -54, 52, 22, -47, 104, 113, 11, -12, -29, -123, -122, 98, -24, 5, -23, 61, 90, 75, -115, 107, -71, -86, -94, 17, 120, 85, 105, 13, -8, -44, -61, -41, -90, -7, 121, -97, 12, 58, 23, -63, 26, -16, -38, -53, 40, -51, 122, 10, 84, -4, -37, 95, -49, -128, -86, -125, -80, -26, 58, -80, 102, 16, 71, -117, -118, 64, 79, -52, -47, 115, -70, 57, 0, -106, 104, -31, 28, -69, 74, 78, 21, 111, -88, 35, -84, 25, 97, -125, 19, -28, 42, 31, 104, -128, 56, 82, 83, 115, 74, 93, 118, -19, -35, 77, -15, 59, 43, -105, 27, 1, -80, -96, -105, 29, -72, -6, 14, -127, 116, 3, -36, -128, -8, -88, 17, 47, 31, -105, -117, 126, 73, -64, -3, -33, -98, 36, -127, -50, 42, -56, -85, 87, 44, -2, -1, -123, 126};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BRTDJGNCNPJTETPQNTUQOWEGOLLCBJRGYFJDYBHKKLLTLMUZQSDLXTIYMHZQWKRIZFVPJYSAMGZGCIVPPHXAXJVJYORFPDMWNAZLCZWCXXWNXYBCEIKVRUAFCPSK");
    tmp_msg_1.plan_size = 26299U;
    tmp_msg_1.change_time = 0.8191333013207149;
    tmp_msg_1.change_sid = 41497U;
    tmp_msg_1.change_sname.assign("FTLWSEIRGLZLUCQHXJUWHTYNWJEXJOZBCHIRHXWXSZKIBIAUVGKRYVFQRZSYHQGDPGPWWPPMIGRCFAYJ");
    const signed char tmp_tmp_msg_1_0[] = {80, 16, 32, 16, 40, -76, 65, 3, 124, 1, -64, -49, -71, -40, -20, -49, 77, 9, 121, -107, 25, 12, 91, -84, 103, 31, -51, -1, -80, -19, 126, 86, -52, 36, -115, 42, -34, 28, 97, -77, 67, 99, -115, 16, 25, -41, -75};
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
    msg.setTimeStamp(0.1724490380698096);
    msg.setSource(21674U);
    msg.setSourceEntity(193U);
    msg.setDestination(52941U);
    msg.setDestinationEntity(125U);
    msg.plan_count = 25004U;
    msg.plan_size = 1390802748U;
    msg.change_time = 0.5421284105467943;
    msg.change_sid = 2170U;
    msg.change_sname.assign("GLZKQUCLUXQ");
    const signed char tmp_msg_0[] = {58, 43, 100, -3, -93, -3, 50, 63, -42, 69, 42, -28, -3, -103, -11, 30, 35, 38, -5, 0, 28, 11, -5, 81, 4, -114, -76, -22, -33, -121, -76, 35, -27, 39, 35, -124, 2, -4, 73, -118, -46, -48, 25, 118, -122, -102, 117, -111, 62, 103, 81, -77, -98, 14, 107, -75, 36, -41, 26, -62, 100, -106, -58, -114, 108, -43, -38, 25, -79, -20, 42, 67, -84, 86, 88, -96, -63, 55, -60};
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
    msg.setTimeStamp(0.6795397263025434);
    msg.setSource(11969U);
    msg.setSourceEntity(7U);
    msg.setDestination(47795U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("KQUAQZVDDMCXJAHUHGAHGMCHPCKYNFEZTCDEBFSRIJIPSKLIFFQBPOQQASTZGMSQVMVJUUBVANADXZFOSVWGCWORRYHDHPINJYABRDTCWYPXIDFURPEYJJFWBCUKNWAYWHVZLXNOLUBEXTVTIMIXRBKJIOTTGJXEDNPGUEHBTCXESMWSZPYZMRCLL");
    msg.plan_size = 32527U;
    msg.change_time = 0.9444618955568082;
    msg.change_sid = 65482U;
    msg.change_sname.assign("QHMAWVWJPNHCEVZDJOVPSMKGZTSNYUMQUGWOZYBABQTCANLQURRIUTFVOZBFPAEPIHMVMLBPXJBFTRGGCUROETLAWACEMTNUHPOSFEQKELYRFACHQKSLYXHGHGDIOTWNLYXCDWKJIDKZJYBRDZWARFBMLOXSOXGMSLVNPXQGZQAIINIUJYSBZJCENEVXZXBXRWXSFGLYDQJDHPYOJAMISCTKRKVEDPPOZ");
    const signed char tmp_msg_0[] = {-51, -43, -113, -23, -124, -3, -6, 103, 123, -119, 124, -124, 122, 38, 104, 65, -51, -86, 64, 79, 98, 94, 100, -66, 111, 62, -73, 11};
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
    msg.setTimeStamp(0.6784297742816382);
    msg.setSource(40740U);
    msg.setSourceEntity(51U);
    msg.setDestination(63744U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("AZOGRLRQSJGUPEQCYLUZBSPFEYSXEJZSFFBAVZVXYSBJJUOUIHKFPVJJNWXBEGVSXYYIOFHTZJYLSGYCNRHXCGYWEEWAVKCAUGMTFRWQIDVIKQAUMCUTCMGCOQAAWTURQBVTRMXTNNKHWNTDPPLNCDKCGHBDQVBSRZRLDYHOFFELAZPKXILDGMOHDQHQTOSUFLIZXNKVKMPZWB");
    msg.plan_size = 25985U;
    msg.change_time = 0.38905062985482;
    msg.change_sid = 3755U;
    msg.change_sname.assign("AFSMSOUWIUFCHFCLWDODRJOQYQUUKRMPMJPINZZJKCCLGBBTFQWSPCAZKXPKHARSVXNVFNTWTUIQOXUVXSBFTTAQVWDABEYQKERKGXNQDSYLMVMVQCDD");
    const signed char tmp_msg_0[] = {76, -125, -43, 82, -36, -73, 116, 10, 79, 101, -122, 92, -88, -41, -21, -15, -98, -28, 13, -117, -12, -126, -34, 33, 96, 123, -56, -42, -3, -107, 46, 8, -94, 21, 34, -118, -53, 2, 70, -121, 3, 25, -87, 82, -49, -77, 34, 60, -87, -107, 0, 108, -114, -75, 110, -15, -97, 47, 54, 65, 22, 89, 44, -5, -111, -108, -20, -109, 11, -10, -125, -119, 72, 50, -18, -27, -30, -103, 33, -55, -75, -105, -104, -112, 3, -97, 109, 67, -13, -59, 121, -8, -89, -22, -125, -85, -59, 12, -38, -50, -111, -26, -111, 86, -44, 123, -85, -14, -90, -75, -58, -1, -125, 54, 38, -61, -22, 79, 32, -94, -104, -108, -24, -17, 71, 86, -6, 107, 25, -58, -13, 54, -71, -34, 90, -70, -47, 31, 20, -87, -45, 17, 104, -85, -91, -40, 95, -110, -48, -96, -125, 40, 120, -57, 112, 15, -20, -76, -37, 123, 92, 99, 21, -103, 36, -86, -96, -45, -42, 61, -71, 11, -44, 13};
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
    msg.setTimeStamp(0.8986197400390029);
    msg.setSource(1630U);
    msg.setSourceEntity(2U);
    msg.setDestination(5368U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("SSYTBUTVOYMRXAJNDBUCECTJZGDESYICTBPTGRJPJYJQWRZXD");
    msg.plan_size = 1935U;
    msg.change_time = 0.32300125632255483;
    msg.change_sid = 38464U;
    msg.change_sname.assign("BNQYHNIQYLUJJSQLMATINDTNAPEYVQSXIPBFQCHACOFVQNLACPLGNYDRXAUMJJPNGJBWKTZBLAVUSRMTSYHWJDPWZCRLGFUNWROOIWMLQTXUIKKOQZBCXXWGNNTW");
    const signed char tmp_msg_0[] = {-104, 103, 7, -79, 60, 41, 18, 85, 113, -57, -80, 81, -81, 39, 33, 20, -108, -28, 111, 37, 5, 101, 92, -112, 106, 121, -56, 33, 67, -12, -37, -14, -4, 113, -43, -47, 80, -92, 25, 48, 33, 80, 24, -8, -93, -11, 20, 70, -29, 120, 126, -20, -27, -80, 2, 19, 121, 114, 22, 21, -80, -25, -111, -104, 61, 122, 105, 75, 117, 98, -56, -33, -12, 45, -122, 44, -39, 60, 5, -112, -51, 60, -88, 42, 18, -17, 78, 70, -9, -16, 43, -18, 59, -53, -12, 34, 125, 83, -12, 106, 98, -113, 120, 94, -72, -111, 112, 39, 13, 107, -20, 68, 107, -4, 35, 45, -63, -88, -19, 21, -60, -36, 92, -79, 109, 23, -70, -20, -87, 44, 41, -79, 36, -109, 26, -81, -59, -34, 54, -59, 112, -43, -67, -64, 18, 94, 81, 66, 23, 45, -114, 115, -35, 71, -73, -125, 90, 86, 88, -104, -75, -85, -116};
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
    msg.setTimeStamp(0.003956418238884374);
    msg.setSource(42307U);
    msg.setSourceEntity(19U);
    msg.setDestination(16114U);
    msg.setDestinationEntity(174U);
    msg.type = 57U;
    msg.op = 100U;
    msg.request_id = 38588U;
    msg.plan_id.assign("NDPQBWPPYIFWLFDMFQIZWKQCUTQAFZTJPMBKVSJOTVCDJWBZFHVOUHBLIDHAQLXERYUGLNMSZCHZNVWFXGWICCGKCLOCLRLUTKIEWMXNJYODYATQHZUBQIWBQSJVARSVPHXFSMZXJODGCDGRCAFOEDOHGXYQPUKTFSDFAESLEVVWKXUJTMUAZZUYRNTXUHTSRCYVHELJKOVKNB");
    msg.flags = 44517U;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("YULHUETRWLPKKBSZHNZPWREVLEPBZFATITQQBNXHOIGXYCQNRGXVCXVKZGPFKBJLUOTTMDVUFCUHEEWCSJOISQLLJDLYPQNTGNBECRMJL");
    tmp_msg_0.x = 0.7592310398334059;
    tmp_msg_0.y = 0.6563462228750735;
    tmp_msg_0.z = 0.7542798562640424;
    tmp_msg_0.n = 0.7512845519966973;
    tmp_msg_0.e = 0.18646994380897386;
    tmp_msg_0.d = 0.8107337673659701;
    tmp_msg_0.phi = 0.6980029672791881;
    tmp_msg_0.theta = 0.5334410470081862;
    tmp_msg_0.psi = 0.26156065252751715;
    tmp_msg_0.accuracy = 0.446149217148465;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SAVHNEXAKBFPMGMTQURFGJVRNWYLONNHOGKEWUVSKZHMCMIAUDNGABXGPTSJJCXCXDWTZZSLWPSYSMOIOUHBKJIXLQROZQUCCRQBNIBUFDYQZYONQSAYHQUUTJMRVPUDNKDCBWEKPOCEGOMRBIEIAZWLTFWAYNDNPSQVWDECZTWPDHSELVT");

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
    msg.setTimeStamp(0.5918031437705686);
    msg.setSource(22142U);
    msg.setSourceEntity(125U);
    msg.setDestination(6290U);
    msg.setDestinationEntity(59U);
    msg.type = 82U;
    msg.op = 97U;
    msg.request_id = 51960U;
    msg.plan_id.assign("SQBROZDBVNAJXOLNGRAHUTSKLNIKDZEKFZQCHWUUQWWLVHPYWKWPKPLPLBIVKOTDEMAJUYXOETFLCARLTKAVELOUIIVJUAXRHUNYWEGPFGWCAXNJBDMHENBUHPYHIEVVVQEXCZDPHABQORBAFJZFJCMQBDRMBJDSGYXPNIOMQLOKVMSRTIYYZYNHZIDYCFJTEYROCIJGR");
    msg.flags = 35994U;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1869518279U;
    tmp_msg_0.value = 253U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IHIRRLEWMQYHXFIZPSQWRDWPTAONAZPKLRNWCMSXGATRVNSJKJTCBNHDJZVOWHEBNPLQCTLJKNISDXJKJGYCXIQFHOVQRJFZMPPJFNPGGBWBJXEIVDTEZKMSVFTW");

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
    msg.setTimeStamp(0.8868598242140343);
    msg.setSource(65136U);
    msg.setSourceEntity(91U);
    msg.setDestination(19177U);
    msg.setDestinationEntity(98U);
    msg.type = 44U;
    msg.op = 164U;
    msg.request_id = 62533U;
    msg.plan_id.assign("TADDAZEGXZCGSAUWZQ");
    msg.flags = 54527U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("RLCRCPCOLNVKKGYRINIHIKWTNBIQVABWOJFDMWKZPRAROMFXBSTEPYTUGEUCSOKSDLZYTCYPGSYELQXNSLNAPPZNHMGOHMJMJXMNEGINJSJFTUEQQZSILXDDEKRKAUFKUZSWZBAV");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("RGUSZDPALHVWHVSTYMWYRIETDUBQQLLAATSEUYOTJ");
    tmp_tmp_msg_0_0.predicate.assign("NLMTPTIAQQGVZMCOWLIRFYKRSHTKNSVFYDSARJHUXLIDYECZDFPEZYAITQPQOAHZXCHVZQEVMELVWWSE");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ERLOPLTFYSGBGVGOBXNQCKFAOCKDIINZLKFCWFP");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 203U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("LLUPVELRMSDRVLHPUNZGLIBESWXRIQFOWWHNRFLTTPYYJTWKVBDGZIKAOIFKOLAFHEQYWACDXKCUFSDNXYGIRNRIJJFEPAAMSJCTOPMONVCQVDDJPYVMUJTMUPBSLSBBNGZCZPMIJQSEJDCNFKHXCQEBRSIEWQGXPOTVHXXFZYQHIWGZEOYPJNZBTBAYAZVCOWHDONSKDVRXRGQUUTTHVKWGXUOMJSMWFLNYALQUXAZ");
    tmp_tmp_tmp_msg_0_0_0.max.assign("DWIKTVMLBPBJQJCPNQFLWGPCOLVYHEJSCFYNUJWTBGSEFFYTWADWFXEPSOGHGQYLWZIXHBMNRVIKPJOLRDEYXUZRRHLGBQYDOKPDZVHDPNFEXVMOXOKISXAYAMUMOCNKGEUHUFDBSIFPVRMLCQKTUCLXSZNZJTIRSOAMIDZKBWDQRV");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XORGIWLTBUJBDKNZQQJQTSWUXDQPGIAYOUCZJVJRFBQYVLURWFFTMXKSMLXRWAEITUISHDQDFYERPGMAGLDSMEBRZQFFVOHHORZFWBHGEQECLNVTLIZMCHLKESOOPXHNPITSUUNUHUTAXPKJGWCYOXNPR");

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
    msg.setTimeStamp(0.06247357630561656);
    msg.setSource(6311U);
    msg.setSourceEntity(80U);
    msg.setDestination(36065U);
    msg.setDestinationEntity(36U);
    msg.state = 37U;
    msg.plan_id.assign("UJFMUDYQXOGZLWHPBGRNSLROMYURWQIHDXZOIJCVAOUJOMHATIERRSCEJXTPLXLPWQJAKDAIQKZECKSIWRAKHFBAYTAWFZYIJBHGMUZWXETJLZFPDVLBQQPYQPJNFCCSGXEEDNSLQDFABETVSKWOBOMTFNKLUMHVCI");
    msg.plan_eta = 2115744820;
    msg.plan_progress = 0.29213455533391686;
    msg.man_id.assign("CUKIGVWNOMFHGJBHKSTSMTGNDXSQUTLQMWIAVETUOIYAXZHCQDYZNPOB");
    msg.man_type = 46330U;
    msg.man_eta = 662879793;
    msg.last_outcome = 113U;

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
    msg.setTimeStamp(0.4580325723183093);
    msg.setSource(7992U);
    msg.setSourceEntity(200U);
    msg.setDestination(21019U);
    msg.setDestinationEntity(29U);
    msg.state = 100U;
    msg.plan_id.assign("HZSPULLJHGINHINQGCXAJYKACELFMNBCCWDQUHZSVWABDQDBORZTWWVTVGLEEVTUQPXRBPTHWKGVKOKRLPSSYEROAUSRULFNQUPLZQPAIORPJTLQAUCJJFNVRTPOLDFCQTDUXOYFZXMMCXIXAF");
    msg.plan_eta = -958304272;
    msg.plan_progress = 0.6878187824510591;
    msg.man_id.assign("BBMPTKUEKPZMWOYXAXIIJOPUHRWUOKICHZKKDTVQNTQRXZLVFIYRSOBYNNGJPCMTDETMWCVNMWYUSQZRIDJHSWOQOMQCYGYNLQFAAQADBIRPJAIXRDNPSTLGFDAMUFBEWFILLWJANZPGHWCHSHSZEBEIGNVGYRWNJSZTEZAPRUVSUJYLHYRFDVHETMVBXJXVRKFCBFAKTMXOOFXKUKQLBPLSPF");
    msg.man_type = 47912U;
    msg.man_eta = -1243569771;
    msg.last_outcome = 104U;

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
    msg.setTimeStamp(0.2978504750267458);
    msg.setSource(22043U);
    msg.setSourceEntity(145U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(61U);
    msg.state = 218U;
    msg.plan_id.assign("OXCPVQDSSRWE");
    msg.plan_eta = 407804116;
    msg.plan_progress = 0.945880851711707;
    msg.man_id.assign("QVMYWTIDXGEHUYHDZUBFMHGWYDPTLQBAROJZPGIVNUEEAXQQVJVGDTSOCSOQFUZULACBSXIFFHGXLOABVBOPWHPSMCAYCWUPZSFQDNTKRMMKHXPNIJEHPNLMCBWONOKGKQZZYASIMWFGUVRILTPOVGLORBZCJWTAJHTEJWDK");
    msg.man_type = 24087U;
    msg.man_eta = 1193202747;
    msg.last_outcome = 51U;

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
    msg.setTimeStamp(0.9596952978275632);
    msg.setSource(61476U);
    msg.setSourceEntity(11U);
    msg.setDestination(2224U);
    msg.setDestinationEntity(42U);
    msg.name.assign("CWAQSHBVQOFTRCMAZYKMYBWNGIJRNSYRVSEDMFHOZCKMFZLMYQDIQARSWDDNWUTPNVPLBILASOMJIIJTJWBFUVTZXPXHJTUGKOCOUHMQACEDYVWZA");
    msg.value.assign("OEJDAPELNAJBAGLIGGVEWGGVVICQBBMWXQLOFJKNZBUTQWKEVNHZSXRZMIXPSNNAKNDSTRCVXWNFFZNMIPIKPHJHUIBPQUCXDALIEJ");
    msg.type = 164U;
    msg.access = 132U;

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
    msg.setTimeStamp(0.5373044719394037);
    msg.setSource(11156U);
    msg.setSourceEntity(171U);
    msg.setDestination(59135U);
    msg.setDestinationEntity(172U);
    msg.name.assign("SXFOHJYCHUZRAGQCVLXGXIDIFFIXUXCZZBHKMEZWDRTIYPNLPEEFXBKXE");
    msg.value.assign("NHMIVIBVDIYEBLVAAIWBKHNSVQKGZNDBSUDDKKXBQGRGEVZXZYHHAWJTSJWWQBFATTBUIERMHHSOPNCOAYVXLTONGLERDPMCGFUFCQIWUTWYRARNOJFMJDU");
    msg.type = 87U;
    msg.access = 250U;

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
    msg.setTimeStamp(0.5823627552292812);
    msg.setSource(27739U);
    msg.setSourceEntity(233U);
    msg.setDestination(27402U);
    msg.setDestinationEntity(44U);
    msg.name.assign("LESWFDWNHZCPRJFQKMROBSYEYQOMOIZOJETBPFTPLZHYVHCEPIVTXANIGJMOCNYURUWWKUWJYDUCXSDYQBWNLHMTWOYVSBFKIHXQMRCUGDTKFBRBTGLSANLRMKZJFJLDWNNLPZIEFRVQTLDQVACDLDGJBOH");
    msg.value.assign("ZDSWKXWLJWVRBQHGILPZFGUVLAQECPBHUQJIAQGKZVEDEVWVCBXDNABFYTBYPYVZHHIZLLTPXWLKCTXNSABJFVTSWEYXFMRDRTFPHWPSKLKWORHSJSKSUWJQUAWMTBHEZGOGVJQERBCNDKMRSYXOQNOIQNIFX");
    msg.type = 75U;
    msg.access = 118U;

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
    msg.setTimeStamp(0.3472980111328666);
    msg.setSource(544U);
    msg.setSourceEntity(215U);
    msg.setDestination(9388U);
    msg.setDestinationEntity(210U);
    msg.cmd = 164U;
    msg.op = 46U;
    msg.plan_id.assign("ANMLEREXGBVQIZXMKNBJEZKSZHKLZHQIQWPHFIYLUJWICIIDXXONNDRQTCWOWNPJK");
    msg.params.assign("FNOFXZXEEXVBNAHLOYMXGEGHKPTFNHVCUMRDKYICWHRGZUHMZYBNPBARWFYX");

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
    msg.setTimeStamp(0.3771335979245506);
    msg.setSource(24190U);
    msg.setSourceEntity(66U);
    msg.setDestination(19293U);
    msg.setDestinationEntity(233U);
    msg.cmd = 129U;
    msg.op = 106U;
    msg.plan_id.assign("RLHQPZZEBCDMKYNQMJZZJYBXTORCLMDCKMLQPPCFGFKZOGXYPREBXEMLEUAOGZCONJXGQ");
    msg.params.assign("LSPCKVIJQLGLYRPINZUVJZUSWOPTJYOWCQYJVSXXKYQDDRMDTEWFIIBZLSLFDYIREGPHWOVCTZXDOBPXWNLBUPMCHJUGIEXNTBNQUHYBEEOKMKPDQ");

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
    msg.setTimeStamp(0.675186729979412);
    msg.setSource(33209U);
    msg.setSourceEntity(112U);
    msg.setDestination(31171U);
    msg.setDestinationEntity(139U);
    msg.cmd = 52U;
    msg.op = 109U;
    msg.plan_id.assign("QRVBYAEIPWRFTGXX");
    msg.params.assign("QYIVURSBIGLQNKLOOZJTZMETXZQBSPDRUTWFEHPJHMVMYEOFFZNVABJXENBKVISJHCIPEKTXLASRXTGOFPZCGWLEHXVFUAKKVAOIYYABQRWNZAHXKNBAFUUGCJBYDYGVPXGMGFXETPUZTCBVQMSKGLLAICQOLCVWDVDETSDDKTZIWPQYANTFSHCCHQUYMOHFJKMJZHRDUPQHAWUWWFGIRBUMOERNRYYCEJLGJDKSZPSXW");

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
    msg.setTimeStamp(0.5108258474365193);
    msg.setSource(19688U);
    msg.setSourceEntity(23U);
    msg.setDestination(8633U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("USVTZPKESKDOJSWDKCYGYWDRJVYAERPSGCXYN");
    msg.op = 40U;
    msg.lat = 0.29089957514298315;
    msg.lon = 0.28951202504052265;
    msg.height = 0.996057282676862;
    msg.x = 0.1081985334381812;
    msg.y = 0.5016069612561569;
    msg.z = 0.3094223898255367;
    msg.phi = 0.21939637615858;
    msg.theta = 0.41660205548209217;
    msg.psi = 0.1593749522048612;
    msg.vx = 0.35163412522023385;
    msg.vy = 0.06934001089472797;
    msg.vz = 0.6315060599355695;
    msg.p = 0.4725117557563021;
    msg.q = 0.8222945300309481;
    msg.r = 0.21740567324423477;
    msg.svx = 0.1967107920097203;
    msg.svy = 0.2354210539206828;
    msg.svz = 0.8812539822645433;

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
    msg.setTimeStamp(0.43576933740057266);
    msg.setSource(30761U);
    msg.setSourceEntity(40U);
    msg.setDestination(12836U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("XHXUMOXYHOZFICGWULVZMUJJRLDFBFHZAUGPRTSMDCVSPBSUYYTIQWSAXZDLBGGKZWRQQDFYZEXZKSQYPCNUIAFPSXHYAAITCTNMCLRUTKKCDIOINJDPP");
    msg.op = 170U;
    msg.lat = 0.20286194790468481;
    msg.lon = 0.7460170858357212;
    msg.height = 0.2649989843415619;
    msg.x = 0.5828005202604769;
    msg.y = 0.7153877043107353;
    msg.z = 0.6636585310627607;
    msg.phi = 0.2553288535244843;
    msg.theta = 0.6841094058203823;
    msg.psi = 0.15586787203567687;
    msg.vx = 0.5666536265816281;
    msg.vy = 0.6317831871387181;
    msg.vz = 0.7762964325342282;
    msg.p = 0.046947064533637284;
    msg.q = 0.09821145205110093;
    msg.r = 0.8362117346888688;
    msg.svx = 0.22234090357535807;
    msg.svy = 0.2663227177661036;
    msg.svz = 0.6038720276608821;

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
    msg.setTimeStamp(0.18316550415749988);
    msg.setSource(58857U);
    msg.setSourceEntity(172U);
    msg.setDestination(63798U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("JTADSHQAIDKZDPHAX");
    msg.op = 179U;
    msg.lat = 0.6359739191961336;
    msg.lon = 0.08138467839683083;
    msg.height = 0.6738207267662563;
    msg.x = 0.6122151054011652;
    msg.y = 0.16100613397543917;
    msg.z = 0.42710215449033795;
    msg.phi = 0.4209607456624891;
    msg.theta = 0.14646376594922872;
    msg.psi = 0.6993935508722914;
    msg.vx = 0.4773095984538407;
    msg.vy = 0.16990002139949123;
    msg.vz = 0.8455957166503906;
    msg.p = 0.6620423370474691;
    msg.q = 0.7642169126660405;
    msg.r = 0.49237206892278595;
    msg.svx = 0.32540913016240847;
    msg.svy = 0.1671728329204396;
    msg.svz = 0.08355822404926905;

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
    msg.setTimeStamp(0.7674526052168119);
    msg.setSource(51735U);
    msg.setSourceEntity(148U);
    msg.setDestination(23684U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("QYZNVHJEWZSPASMHBYSJIZOLWAYVNEMKEXVKDARBUJUZEWYBYJMFALBOJURVFRQOINKGHTUAJCYEPRQOCWEFYTKTTYUDTNALKMGMYZNQKNCKZOJBFPVSVSJ");
    msg.type = 63U;
    msg.properties = 53U;
    msg.durations.assign("VBYPKORBKJZSFDAZXWMNQUHAIGFWRCXQENDIDLLDIZHKVRAMLQEBIPOXRUTKROJQBVVLIOKVCUYYVWOYPHRRKSEHAALAQYXUJWKDMZLQQWJCCDHSXYNLSJMDESMCMZHKVZLUCOFGSWEFWSFQVOBTNPEBRKIWATZTUCNFPXRHXJFRABHPYBZDXTKITEATSBUTPGXGAPNPZNOHOBUDNUGEDFINCGQSSXCYGNMJGIMMVLHWFEJPYJVGZLO");
    msg.distances.assign("COEBNPHCJMIENPBHDWKIKUOMMXHYBDPFGBUQCDFGRQTLOCHZLRGTWPZGMUOXSRJSMGIKAKHMNUAQBRQKKGKESVUIAJUECINJARTSCNZAJHPNGPUGRHZAWLEFWILOZAJEGZOBXVEBTBSMQZRYYMADCGWHFYEYFRYJUDQPNZXYRQOTVQUPVXLSVSPIISFLZKYLXRLJEFVBKTDVCXPZWLFNWIOWTDCXDOTHTQ");
    msg.actions.assign("IHNPEBRZGXNYJMORVIMFZDKPPTUJDNNXNEYOGAPMOGZIGAKTVNROZQRQGRMXMQMEUY");
    msg.fuel.assign("QTHAKYCTGHVPGZDGRAVYHVHCVPFFIBUFEBFVQJIUJLOKLZFTKEZFUEVFFSURPNWLQVXQSQOMYKDSHDMHNTRAWJZPAIPXNSTYYQUIBHHODDIJIQXKRVXAMQJEUSCOWJARMPSB");

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
    msg.setTimeStamp(0.7932404114519296);
    msg.setSource(31243U);
    msg.setSourceEntity(200U);
    msg.setDestination(12888U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("QBLJGJSXYVTSAJQXGOSJKOVGVCKOLYGRXCLVHFBMYNMYSFSINUZWJLNTPDIZFHWWVMWCKIVKARHROEMHCTXNFBMZRQSUPHBDVDMYCJBCDURFZUQOZIANIGEDZSMYAW");
    msg.type = 184U;
    msg.properties = 180U;
    msg.durations.assign("XGVTDTOWXKRFGLCJOBDSXSHZAHRAUSNQRHGVYKUIHUAPNZMZYIMOMXAVFNDZWNWFGWMZMXTGWQIEOPABOOOBLHLPCSLZUJMRQGVULITCUQNJFCBAFMTIPYUAWOXEDMJWFVCUUZSBDJYFLJPSRDPQEKD");
    msg.distances.assign("JUANKKRQCNOOOJVBDTQLRJTXVODJEQOLREYUMVUJABLECYPVNIWZWZSZSJIYIDMMIFMZAQJMYGCGWAOWFIZSWZHRCCXABKKYIGQTQKDWDFEPGRJGFZJGNVPRBLHTNCKIPCBFFPVHDNBQPFADBGXDJIDLMEAFAKQMGZBHTTLRPEBSNEAUUQYUWSUMHVQKZHCFVUUGSLSPSOLXFWRHEXYHXSRTLWKCONPBPMGYTOYKXMXDVZUIRNOXNLHHVYESW");
    msg.actions.assign("JQVJIYPXSVBJXF");
    msg.fuel.assign("SDHKOFNEHDGATUBXTHYWUUOMTASWPZPDEWSFCACGKPNHLKIUBHOXWQYTPIHLOMBNHPVAODACQDJIXMANKBTVARIOJAPLNXFZOMMQYVEZLKPBTGRVBTYUNDSZWGWILHZYZDQISRXQCZNUJCVHDFFLJREKWIGFLEYRC");

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
    msg.setTimeStamp(0.6870485430547957);
    msg.setSource(1570U);
    msg.setSourceEntity(28U);
    msg.setDestination(10698U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("OPKPBXBIUORLIWOVRSMYFVYELPLGWVDCDGDNLOIULJJQQDRJUELAQOYJULYEYRKIWJTRQ");
    msg.type = 1U;
    msg.properties = 211U;
    msg.durations.assign("GRSSQJMCZR");
    msg.distances.assign("TQZHYFYOKJIIZ");
    msg.actions.assign("HGIYLTOYEPWINGDDXUXITNQFSAVTVDFGZCFNADQNFJBRXPBLWLWCCFWQYSYRJSCEOLYNOGGGUISVFMRHOMJXEMZIUSAJAJMFFNE");
    msg.fuel.assign("BTAFZAFSUCQJIZQQSQAJTDBNEXXLTKRDEVTHXOACEGKJGICXQDUWZUWSPWWVRCZMIUTKVHZHWLIDJFTVLCJKUXEPBFHRTZYSAUDBKWMORRZGKBYIYMLJXPJOBLANFEMQMOBXCLRKHUJLGDAGOYQEIDVPSPOTFMI");

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
    msg.setTimeStamp(0.7019582605095832);
    msg.setSource(31225U);
    msg.setSourceEntity(121U);
    msg.setDestination(32875U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.7139839632292699;
    msg.lon = 0.9674271721187429;
    msg.depth = 0.6477273758628568;
    msg.roll = 0.11583524875287532;
    msg.pitch = 0.08414139589741576;
    msg.yaw = 0.21312885926407232;
    msg.rcp_time = 0.378921219140561;
    msg.sid.assign("PNKJFJQRPFZSSIBVAGZWGDIXGYECMVYURTSOXCYAINYCACRWQHSVEFPFJYJSDMNEUBKVFBJNJBVLUQHLLXHGPZLHIXDECSVPIYAEQTJIRFWMVFUTHGXZRSQDOBELFBLRSAUICTENONTMAKUKMUNHZQOGORVPRKZEIPMLIOQFHAHQDXPKMWUYBODKPRJHWUXKOUAFSGTBLISWGT");
    msg.s_type = 216U;

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
    msg.setTimeStamp(0.13577456684205513);
    msg.setSource(22284U);
    msg.setSourceEntity(25U);
    msg.setDestination(7530U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.3032750017227067;
    msg.lon = 0.09736101572111977;
    msg.depth = 0.9644985336101733;
    msg.roll = 0.9697447709207724;
    msg.pitch = 0.022052056953646426;
    msg.yaw = 0.7335165633380947;
    msg.rcp_time = 0.5655235479370041;
    msg.sid.assign("TYBUWRGEJMFSAFODQJZAGNUTGXXVCASPXMWYSLDGCIQYBQEVT");
    msg.s_type = 24U;

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
    msg.setTimeStamp(0.4181583656302892);
    msg.setSource(29118U);
    msg.setSourceEntity(63U);
    msg.setDestination(47016U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.3253025398433411;
    msg.lon = 0.06113892614084249;
    msg.depth = 0.8338727597069708;
    msg.roll = 0.3162147645650657;
    msg.pitch = 0.9235600054136586;
    msg.yaw = 0.2624108536887918;
    msg.rcp_time = 0.8871077367337491;
    msg.sid.assign("NKLIOISSDTYXDMCBAVPLHHGUFWXVYHGJYBDTHLOOFRBHUO");
    msg.s_type = 238U;

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
    msg.setTimeStamp(0.44262164552450556);
    msg.setSource(12962U);
    msg.setSourceEntity(110U);
    msg.setDestination(63284U);
    msg.setDestinationEntity(84U);
    msg.id.assign("SEAXOICAXXFDDCVKPJMGYUJANZGNCGWIVUWDOCLLXNVKLWPFBXHYIVENTBUXPEAEXUQHBTMWRBHMZMUJNIRYLOTPYVFKKUKGEJDPDBRPOTWFAIIWZTQFBLQFIOIZPOQTNKYDZNWEGCUDORHLDSQ");
    msg.sensor_class.assign("XHMRHPZCJFYRJFYQAYVJZWTYERIOYONMUVSNLQQJQED");
    msg.lat = 0.7574212182442485;
    msg.lon = 0.3344485213533507;
    msg.alt = 0.45502401660775293;
    msg.heading = 0.4260850907001834;
    msg.data.assign("WSPLXIABUWXMZYRSEUQIMPMCZIQCHWZNUQDWTSFERHECFPUXCRLAWHSTBVKBRCBGTNADQBXDZXMSPNJYMZLPOGGAZJOINIKVTODYFFFDAYAMYQVEVQHFKB");

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
    msg.setTimeStamp(0.9484518227316735);
    msg.setSource(46537U);
    msg.setSourceEntity(181U);
    msg.setDestination(42253U);
    msg.setDestinationEntity(80U);
    msg.id.assign("LOUYKDHNFAUTAROUNUZGQYATUSPYAPGSBGPDRIZJXNYTMNQSFVJFAEOROFGPN");
    msg.sensor_class.assign("XHQMSWLUQCEODHUIWJPAHDCJQZVPAESWLCIS");
    msg.lat = 0.16411551256092494;
    msg.lon = 0.09211099262215983;
    msg.alt = 0.2007917144683382;
    msg.heading = 0.2495062077028105;
    msg.data.assign("CCWTIDYMVFMRSTXNFLESPFQMKKRSXCZHHIIEUDZWBSOUYAYPCSPWJCSFGTJLAGCBZXHJKLQCTZSDUPPLSLFOAOJOEEYCCIXUXJHXOILZRIDTBKGMMHXVWOFUBNRHLIDNQQRLUPHOQRBQZAMFCMIGRYHORIDZTFKAGBNKPRJUWETJBTGXOMQNZVNDJQDFIJYDSSQNGZGGEBGZPOVPUVNTVAWXKXEMWWYKEPNWENJQYUAKVAYVD");

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
    msg.setTimeStamp(0.2816467891681885);
    msg.setSource(63032U);
    msg.setSourceEntity(183U);
    msg.setDestination(52040U);
    msg.setDestinationEntity(129U);
    msg.id.assign("DCRDLPVKRJAYBLAJQMRSZCVNIAOOT");
    msg.sensor_class.assign("WPSUOVQSYAOKGDSVZVIBRSJIMCGVVZYRRLXCVGLLJXISKTNMFOBFROIEODMKGBKVHHNGGQXDEIVJJKWEYHWLTZZPQQYTUZHAXPXJHSFRCOKTFMITTRZXWVFEHDEUICTDNQQJWMQAOEHAIKOGPCFUVQEHCFICWYEUTXGHZOUPGEOIBNDTNBLRXSDQWWYYLXBUK");
    msg.lat = 0.20567109660813354;
    msg.lon = 0.47616568165724116;
    msg.alt = 0.014528518226002873;
    msg.heading = 0.184760471634844;
    msg.data.assign("YCXJBFBUEROVRVNDWIDBLTJYDLULCITJVHEFPVOFNAHJIWCGXATDZCJQBREEWRQBQSOPFQEULXIPHW");

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
    msg.setTimeStamp(0.7154174173120278);
    msg.setSource(30897U);
    msg.setSourceEntity(175U);
    msg.setDestination(50301U);
    msg.setDestinationEntity(66U);
    msg.id.assign("TWCYCQJOMFFZRHBMREWCISLYNSAGKXXPOXMTGHATFGFEHXVDFPGCBOYAJNXNWJATZXIKBZMIDOUQPWGUMVLRKPBDJUAKSGHAJVDDUHHDPDHZCOQZSYNLXEXXIPBDPBBEUFAMJYIKVSTMBIXANJPTRQKWOZLSURFHZVUGGTHLTCEYQSCUJKGQVIKJGMCRYENQSTDKVHPVENLWVVDWQNEBCLSLYEJLCWOQUOLSOUQRAYBO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MXQEWXEOHJKTWPQUCTGPUJZHQBCUQPEZMULRDSKFQZICLVHFSBPXLERMCJBOYCEDGEWKVN");
    tmp_msg_0.feature_type = 111U;
    tmp_msg_0.rgb_red = 210U;
    tmp_msg_0.rgb_green = 92U;
    tmp_msg_0.rgb_blue = 237U;
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
    msg.setTimeStamp(0.2209315905538325);
    msg.setSource(24139U);
    msg.setSourceEntity(210U);
    msg.setDestination(12615U);
    msg.setDestinationEntity(63U);
    msg.id.assign("EADSJPPQUVJQAPTIRUHKZJQLUBMLJJZEWTTCRRBMWEDODBYCXZUNHPHDUNWNKCMDOQJGOIGXLWZYBKQKHNIPPVBTCGRMLXISRJYCGOTNMMMUXGC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AZDOMWSUIWXKU");
    tmp_msg_0.feature_type = 241U;
    tmp_msg_0.rgb_red = 190U;
    tmp_msg_0.rgb_green = 239U;
    tmp_msg_0.rgb_blue = 120U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.04866049039258791;
    tmp_tmp_msg_0_0.lon = 0.5948279698575036;
    tmp_tmp_msg_0_0.alt = 0.11466038033190085;
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
    msg.setTimeStamp(0.9826147597154221);
    msg.setSource(23650U);
    msg.setSourceEntity(235U);
    msg.setDestination(34512U);
    msg.setDestinationEntity(213U);
    msg.id.assign("SCMQIBGSIRYSTPDTYZUDQAMKQBDJTOXTKVMZGZWVIQFBVAYZJEHHPJJLNLFSHFMPCWTBPCGNQYSUSYVFMXPVZUYWBBSSKMRGULUSEWWHJNOIXMRKKFMQZQIFCEKTFJHRDIAEGNLOXXDATTQPWJKEGIOCKLZCORFARDHWTXLWZFBIWGVNEOHBBCMAVLUSXYP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KOVHRFRGHBSFYNWEEECNFWOFXUPTVDIHWTXXUQEPMKWODAJGVFLJFWYZZFHANUJLDLVXFAMCEGOSNYXRRHEBSGUIWYXYIVTZNSJNLGSWGIIKQZCYWJVQE");
    tmp_msg_0.feature_type = 135U;
    tmp_msg_0.rgb_red = 200U;
    tmp_msg_0.rgb_green = 172U;
    tmp_msg_0.rgb_blue = 112U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8052723865202279;
    tmp_tmp_msg_0_0.lon = 0.8521322388188177;
    tmp_tmp_msg_0_0.alt = 0.5112931602626419;
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
    msg.setTimeStamp(0.8479414474416164);
    msg.setSource(42638U);
    msg.setSourceEntity(14U);
    msg.setDestination(29618U);
    msg.setDestinationEntity(70U);
    msg.id.assign("GAREOTLJHUSKUSYFBUMKCKNYZQVJATJIYAZXKRKWHGDDFMKPMWMVCTFQANIMPXYETAZBPWGEDGWLSLNSJWKCJVQBLYJIZFRYTCULLGRPNHIHRVEIEFFIBEAEBWWUPONASOGZXPNQVQPDXSHHBMWBRDAXFVGRYRWDVFOQIMYBJDSLXJOTOVPTADQXHMDXYLZGPFLFQOSKHLSXUCHHOBCINCISKKZUOEVE");
    msg.feature_type = 100U;
    msg.rgb_red = 251U;
    msg.rgb_green = 252U;
    msg.rgb_blue = 123U;

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
    msg.setTimeStamp(0.3872413849960812);
    msg.setSource(27486U);
    msg.setSourceEntity(46U);
    msg.setDestination(57921U);
    msg.setDestinationEntity(238U);
    msg.id.assign("RGDAFSHRMKXLIJSSEYCXSSZBGOAQVHSCKDRJNIHCFEQNGVECKZIAKARVDQYDEQTXLMWTYUQFPMZTMILWRRGHMLBYZOIIWOHODWUGYJKQTDKGDECVATKJLMCQNNPYTXHBAARLFRRUIILENWSY");
    msg.feature_type = 17U;
    msg.rgb_red = 253U;
    msg.rgb_green = 24U;
    msg.rgb_blue = 46U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.49762396423574073;
    tmp_msg_0.lon = 0.5283034277267984;
    tmp_msg_0.alt = 0.2316687911960017;
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
    msg.setTimeStamp(0.18359826276966917);
    msg.setSource(16106U);
    msg.setSourceEntity(28U);
    msg.setDestination(27592U);
    msg.setDestinationEntity(196U);
    msg.id.assign("WOUJDSBXDGQWYVZGMEEDSRLKSUQMLNJFKAYAAERFBSWZNAHHTTCOAWHVUXNZXNHVNAISSKBPX");
    msg.feature_type = 81U;
    msg.rgb_red = 225U;
    msg.rgb_green = 145U;
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
    msg.setTimeStamp(0.6701851005390932);
    msg.setSource(35719U);
    msg.setSourceEntity(149U);
    msg.setDestination(56805U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.49953633571788403;
    msg.lon = 0.6759159926721767;
    msg.alt = 0.08822316965540211;

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
    msg.setTimeStamp(0.5715862731563744);
    msg.setSource(12457U);
    msg.setSourceEntity(116U);
    msg.setDestination(33160U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.6117798964988137;
    msg.lon = 0.20951045358655673;
    msg.alt = 0.6147872783915014;

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
    msg.setTimeStamp(0.41157899895915906);
    msg.setSource(4648U);
    msg.setSourceEntity(232U);
    msg.setDestination(29878U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.6045950716652986;
    msg.lon = 0.3351713905636423;
    msg.alt = 0.2487717142977175;

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
    msg.setTimeStamp(0.7072047325872448);
    msg.setSource(37987U);
    msg.setSourceEntity(245U);
    msg.setDestination(21090U);
    msg.setDestinationEntity(153U);
    msg.type = 199U;
    msg.id.assign("MFZMSQZFAHMORPOYSFZERDUYPGHNCVWFYTEUWMXLKSLDZVOSDCBMOWIIZTGFALKPTONYCBKV");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 1502834118U;
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
    msg.setTimeStamp(0.5370677591752023);
    msg.setSource(39070U);
    msg.setSourceEntity(210U);
    msg.setDestination(1920U);
    msg.setDestinationEntity(171U);
    msg.type = 172U;
    msg.id.assign("GSILOLWZFLJLGBSIUKOMATBBRDKWHTUGEVMVJGOZCSKNDYWSNQNACMIXKFARVJLZEWTIYGPFEXZCEYXXVBRIPONQQAQMHGLNZUVOCVPUTANJMWNKEFKEKMNUBWSIOAPCURFHDGDZYFKEANHPGDILLWSQTOUHBOUVQPJXFXDLPXPMPQRDHHXLGECPDEBFGJWCRRCQOVTNMMKUIRYCQEVRHBYYHWSFYTIXWZTTDHSFSJ");
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.21653221873562611;
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
    msg.setTimeStamp(0.30683890608914477);
    msg.setSource(27315U);
    msg.setSourceEntity(211U);
    msg.setDestination(57937U);
    msg.setDestinationEntity(127U);
    msg.type = 3U;
    msg.id.assign("YNEMEROGZLIJDHDXWNYNIMYZSFVDPSQPTQWDJWAGUIELUVDKVGVHADZIKUBXLBPGVXPSLBPAFPNWBUMHWEFKYGDJZSQKAOUHVLVAUNERXFRBQSGKOOEJIRBECHCZQEECFWFKCUSQNRFHRGQCSCSTRPXIJWIKMOGWAKZLYDQTRTBOFIHKUHJJOAXSNZTLBYDOECYRCYVGPGNBMKWYXLNAXYMULVTSOMRCIIQZXPHTWUPAXCFQMTHMOBNMAZZJL");
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.7353170144620681);
    msg.setSource(34250U);
    msg.setSourceEntity(151U);
    msg.setDestination(2228U);
    msg.setDestinationEntity(81U);
    msg.localname.assign("EJJUHNTTGQOYCVMFBRYVFFBBVIVYXGWWSCZTSPGBYQKDERMKFXTHGAHDDCKESNHGSJUPMUOVCKCOFDZNDICIENUDUTOV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MIMUWTFXLIKXVQCGIFZXCUJYZRJVIECNYPSUDSQDEFHBETLP");
    tmp_msg_0.sys_type = 252U;
    tmp_msg_0.owner = 63240U;
    tmp_msg_0.lat = 0.48210504552020095;
    tmp_msg_0.lon = 0.2887639939496289;
    tmp_msg_0.height = 0.5868087451595132;
    tmp_msg_0.services.assign("GWKDVWDZZNMLMQYAMKUMORCBTXXGJOBQPCFNNUEYGLKQXUHRXUNSLT");
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
    msg.setTimeStamp(0.2761856246050184);
    msg.setSource(56553U);
    msg.setSourceEntity(0U);
    msg.setDestination(59270U);
    msg.setDestinationEntity(38U);
    msg.localname.assign("JXYGXNPCAAUMASOMGVEQZJTTTAZXYCPIRYEEPLXCBANQZVSKPINQIMXNBVZKIMCAKOMIHRKUUYQASHHHOEBHVHHMWUFVVWBVLABTLSQELPWOZBXEYTUDYLDJULOWPENTFRRWZLCBPSFRREPAWCNNIGYIZVQDTGFHFXCETSWOHCKUJSMXVRBGFLJGGSGMD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AAJLIRHOZYLQEEZDQOMYCTVVQLHSQQACYFKGCFWSLSSIDCUCSBNYWJATMKPWRTKLWEAXCNXRPWVTHLPJYZSWOPUDNTAFBBRKKRFDMDFPWXRQIKDHQNOYBZJGJXPOVDOGMHSXZTJRYADRLIHIGOVBVBMFGMZAJSJTIMPWBNVYEMZNCGT");
    tmp_msg_0.sys_type = 222U;
    tmp_msg_0.owner = 62240U;
    tmp_msg_0.lat = 0.33244558571748606;
    tmp_msg_0.lon = 0.4749202676619999;
    tmp_msg_0.height = 0.08121005338140108;
    tmp_msg_0.services.assign("JTVFNRFNXJKNQCIKORLIFRMGPCFNXLBVTJWEHSDBHCUMPKOOKMIEZOEYGQLRCHWDSMUKENWZYFTLFEZNTYHG");
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
    msg.setTimeStamp(0.5650635176110228);
    msg.setSource(8533U);
    msg.setSourceEntity(199U);
    msg.setDestination(13261U);
    msg.setDestinationEntity(151U);
    msg.localname.assign("OHSLJNLFZJEYPAZLEPBVIRUABGHPUXQLXSEIMDTWZWAEFYYKGKXSGRNDBEHVYZBBNWEFQBFKWVDNCNYZXCZOLNAOIHYPTMCBDFXORCJIUOYUMEGDCSLOYOFVPHGQQLVEFAPGDYSULXKOJVNMWGCCRBQFGDRRQTTQXAMBHVUXSMRPJJ");

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
    msg.setTimeStamp(0.8141987048381863);
    msg.setSource(56430U);
    msg.setSourceEntity(33U);
    msg.setDestination(34186U);
    msg.setDestinationEntity(17U);
    msg.timeline.assign("YBGTKANJUBRRWEICOJPAYRICCHCKOMQAIDMLBBJAWRKPEPOUZIRXFPYAGCRXZAJSFSDSGYKQFFNMHVQSPQGTVKTEMCWBLYSMATDUHBBWKEUDAWEHSPTYVCMBPWJWMXTNVFVHZTYXXDZUQSNCJYGYIDVXLENHNJPCAWLDSFHRQRJVUOGMMANILNVXZZVMUEOXWOKKZLQ");
    msg.predicate.assign("ACOHIMAQBWIBAMMCPHBKFGTONJJUXAGHGISKCDKKSYGYZYVBSZOJGHLKYLYNASH");
    msg.attributes.assign("YAQTBVQFYETFJQEODSIFJLKYGKPHPWPXBNNDRMRFONWENLRDKSGONVUGAGWHIWOWMQNCOSZFBXBSZQTCGFIQBTSQLAGCUCJWXSYPOPIDZUIZRLRQOUKUIVXIXPNNAHICDRRLDGETMLZMMXFESBDOLCKJXZZUUZFJESSBLHKVLTFJHUMUJYDHVSVXWAQCGRTHQFCAEMXECBRAKYPZJWAYTDJICHVBVYYMBAK");

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
    msg.setTimeStamp(0.8333770561993353);
    msg.setSource(7481U);
    msg.setSourceEntity(227U);
    msg.setDestination(49496U);
    msg.setDestinationEntity(116U);
    msg.timeline.assign("DIUKKBHEAYMPHYGMONZNSUESYCAVLXLPGZURNYRCBDFBPWJOSXGEBWQBETTIXZDSCMRBZHVMGVALTZFYRTVDKUEGGWDWXGVHPBAYVCROEHOCLEJILCMTKVGUGJIFSPPLHTHWTASIJDLDZZPXBUOUNKLMMQEQESQROFCWJVDOFKQKRCXGNALUJKNQZWRXQNMYRHIP");
    msg.predicate.assign("ACFOFFSHSXPEWOMXEUPOIVPGZYPOMZXXPMVRRGZSAFHJBOQQDQDNALMXDJFTGXQHXYNCJERAVZBVMLYGZKRKGMIXLHOPLPFDJRYNDHTHSIHA");
    msg.attributes.assign("HYVJRSGOJRUIYUGXULEVXACJSOFXMXHLEBUQVDCOEINJDIIPJBBTFDRWRGUZWAXOMFPWXWGVPLDSFMIJDBOEFE");

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
    msg.setTimeStamp(0.9633491018943693);
    msg.setSource(21864U);
    msg.setSourceEntity(3U);
    msg.setDestination(59513U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("OBTZKBAEGEUUYQBKLNWRNIKQSPDVMJTAOMKCVFQXDREMEEF");
    msg.predicate.assign("ZIPABTECPBWNBPLUVFHSDOYOTTOQVDVYCZUGVLHLQBIOTMCJVOXBXDMEJRJISALKMBOHDWNDJEN");
    msg.attributes.assign("CXPHQGBZVIWIKUMIQTQHAOMXZQDNJWNLIUDHVFEPIOVHABOVXTBYYUWUMFAJXFDFWXOECIMAUNXZIGMLQWRBNVGRUOUJJWEQQJOTDKKKQZTFTMJRNYYFZKJVAATOMKFKRZLVBCLGLTPMYCDZEHGARSGIH");

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
    msg.setTimeStamp(0.7974534516802938);
    msg.setSource(18659U);
    msg.setSourceEntity(101U);
    msg.setDestination(5850U);
    msg.setDestinationEntity(178U);
    msg.command = 188U;
    msg.goal_id.assign("BKFQDODPKZEIBSGTRGZWLTYPZYFGJMJRYNVGLXHWUDLPEJISSQWXYHYSSUDQMLPLTWFMDIGAWRVBZHCOMMFJVVSUCCLOBELHKSAWRAQTWIWBXFWDKCYEUIEAGCFDOZYAGPXNBNVJLNZOQCNXZEA");
    msg.goal_xml.assign("ZSFDJKCPVADORBGFYITBWPIZUAZCWEVNMKCOYMKEJUMZPVFNNCXOUQFSLPJRRWPJDXSVKWGDKFZIULIWDLATTCYCBKKGZMVMQWXHBAQAVSSSUVBFMZOEGWNLGEBZNXNHXUWHAET");

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
    msg.setTimeStamp(0.19987275331267074);
    msg.setSource(55850U);
    msg.setSourceEntity(45U);
    msg.setDestination(1218U);
    msg.setDestinationEntity(39U);
    msg.command = 114U;
    msg.goal_id.assign("DUBLCEPZIKOWBHSAJMUUTJLDUCGCQRGEFUNURWFZDGGZZMACSIMJRTKIVOPKYXIGTMVRJWHAHEDYTHRKINJOQZBQDWKH");
    msg.goal_xml.assign("RSLWSFOICQRUTYFXREKTCBBATYQJCIPZPPHWJVBJUAHBOWFEUFQZAVRBNQTLEIJUXIGILETRSOHPQQPDNUNDCKENBFSYMESWPSDZUKIDLLDYMBGXCMVDCVKHHCBXTOGXJJOTBVYMPYMGLWWHCDFNERGTSAITDVMJYNFLSJNYNUAFZDSXEAGVOOUAXKNMHGHXOGWFVCIRKZEQKSBARZJMRLWMGKXPZUPKPNJZRZHQZYUVFQ");

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
    msg.setTimeStamp(0.8787326009339251);
    msg.setSource(21783U);
    msg.setSourceEntity(128U);
    msg.setDestination(28107U);
    msg.setDestinationEntity(18U);
    msg.command = 119U;
    msg.goal_id.assign("OGTFAKRDTMKOXVJJXQZZNCMOQESBHNXSZSINCSRBKJHDERNPELTGXCJKZVZPICIUTGNPGMEUUPLAZQXZ");
    msg.goal_xml.assign("OYEHVRBPGKKC");

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
    msg.setTimeStamp(0.9124027773666392);
    msg.setSource(44209U);
    msg.setSourceEntity(78U);
    msg.setDestination(14891U);
    msg.setDestinationEntity(142U);
    msg.op = 12U;
    msg.goal_id.assign("IRIZHWMMYEBGPWDASMPOGUJTFDKNXOOXPJKYBSJHVKMIPVJOKYXQBUQABHBLERINHNEUCTDUGRUYZCDHZHTGIOTAADFHSDKMTABOEASNNJYUNNQRBQLIAJZAMZPPUBAQWLKEORLOYGGQWTCRHGCKBPNVWFOTCTDYW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TXEPZYSMBWDGOWFTSLDXALPNKYMRQUFJOHUBMHXABOYAISWKSLNUBEUMZPAGHBVBCOUOSDGFRBGOJGADYIWRWSRESKJGQTFZRWUIZNLEGRVFLLXNZXEQJIPCAHG");
    tmp_msg_0.predicate.assign("NQZGDTNDPHPLQFEHTLAWUXIZPEJYTWEJGUFZEZNCNDIRBVWXYW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BUKKDITFUVCFCMWOOTMEMJDHNXNEWKAYMUKHRWOHXVNPZRRFAABBPGSHSLTFKYRPYNOPNBAOQBFEPHIFZYMKGQYUDFQJRQVSJQPSXJJLHOAOFHPYNSZQLOQODJPCTRXLGVBIZMOXIWTVFLQPYMVXLVEDZSLSIEAEDUAUXNZRCZTHITIENTJCEKXNAUAIWFCGGKUPVCRLQLYXULBWWWIVGBRYKJJZWGGSEGZUMDKEIXMD");
    tmp_tmp_msg_0_0.attr_type = 51U;
    tmp_tmp_msg_0_0.min.assign("KNJUWIMFFCXNVGDXORFFSLSXLCDEVUXXRLGWLKHRPHERRUPMTGQTLBZALKHMSYCQZCGSTOYGXJKOPVHQBWWVUOAFZJGQXBNZWTKEMVUMHVEWODQKIAVTJKQIB");
    tmp_tmp_msg_0_0.max.assign("RVYYRCPZGSRDUSSZDBGAHMYMBHRODQODYBWFEIVZNEYGHUBGGCIRZNPJSVJKHFVULNXRKMGFRSMTWTOFXHDYBPHXJMWOCONKOYOWDGZQNUXQPIFAPMLEIRNLFBYKIJSVJRKSGMKHZCJMIEDEYAVAIBKSOAC");
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
    msg.setTimeStamp(0.9486133641385873);
    msg.setSource(52203U);
    msg.setSourceEntity(72U);
    msg.setDestination(8250U);
    msg.setDestinationEntity(95U);
    msg.op = 155U;
    msg.goal_id.assign("BJOHQVMFDHLPAGXYOWNNKZVAVRIQMUZSZZJTSLJHBUTJQXXLGOYSBEFSABPQQSCQJMCLWLNPYMKVSNNKGKZYXWRFWXVUDGNGAAGECJMHCNXUIJEZXEBRABLRGKDLOKDMXTECEKKWXSWOI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BAKHZFHCWSSNYKLQAIYMBGAKNENUOCGRJMDERHKTTCWSVHPIJIRHWAPZLYSXPEQARLMOCBKOARSKOMUFIKWTJIEHJHGMDDMBIXQMYUFNRVPJULEWDGLYQXGKLDQXLEUOSZGCBEUIBAVVVFHOXSOYXPTQVONYZAGBMTHTESCINZYABRGHDFCZFJYNQKZDGTFGFNJMCJTTCFVINQXXJSLQPJLDPWVBZUUQOZSXUOPFDZRWVWRB");
    tmp_msg_0.predicate.assign("YQWGEXMSAGDLZXRTYZLCYHIOIZUWFT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CNADAUIKXCBIJMPZIKMLRCGFYGERHY");
    tmp_tmp_msg_0_0.attr_type = 178U;
    tmp_tmp_msg_0_0.min.assign("PVLKAZKMGKGRJJFIVXURFXAHEQYMOQOZITGLXXWSBFLAFPWFNZZDDCWVPYTBPTTOIXFFCWQNHDMSQRIEBMLSAHSOKWPXZOARVPLVQEQHDDECDIUMZTSQFBAKJOQOYWZUCCCCRSDJMYVTFNJKMPUWNHRJPGMSCLNCGXALUZNUEMWKHAONBETUHAVUWWDJGECZGUXREOYPYIESGVHDGITQTBTS");
    tmp_tmp_msg_0_0.max.assign("SDPARWVLJPVUYNSZBNWUFEXQPOLFMHMEJDXOKMECBGAICDOQDIGSUOCQQXHEWHTVMMORLHDSNTATRSRFWPQVJJZFCNIYZSAEUDWBXZYVELOBTWRBIJGIPXYTFLGWJZMWYDTLEXZEDYTUXNQAZHVVLKDTZJSYKAONNFWBQAQFXKOFGOMCWUZGHRSEIYNIQUROVASBRTNXCPBXHBAMRJNRJEY");
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
    msg.setTimeStamp(0.30664409030607975);
    msg.setSource(26227U);
    msg.setSourceEntity(58U);
    msg.setDestination(16031U);
    msg.setDestinationEntity(94U);
    msg.op = 253U;
    msg.goal_id.assign("RZNPYBGLHRNTIITFFXGOB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SIYHLOJXHBZJBDIQNVIIZDYUTJMRFMFJIGYIJWNUZQTSVXESPQRHECPEKVFGZTAVMBAYYKFDUEBMWNXXDAHXPKLPBGHAYEWXRWKIFOWUFEQVLZPXNJOYUPOKNKCTACNUZIAHSLTVKAFBCVXQSPSQLYPHVGRBQUWDLUFVTWMWOQCRGLRJSOJCTOQNFDNZIKAKJEGQLDHAHXMHCGYVSMWPCTAGUXGRNUKDRLEFBBPSLZBSJYRDZDNOMEWICCREO");
    tmp_msg_0.predicate.assign("MXIDLPAXFJCRQREQRGBIPXKYBXPFMBZDHCFYPODYZGDOZJEVENGYUEWIWYIJQOTFTTQZLXHNHJLENGLZROYJHOIJTEJNECSFMS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WCZLBMVKIGIHBIBDECDQDKODQGTIDOCFLETJYPHMTEBXDXSHPNFOFRIQDPMHDVZGVXWHGALLAICJJYTQRLMZBXEYFWVIGPYCKREUZZFFUCJSWJNKGBFQSZUUMBRTSYACPARIMQW");
    tmp_tmp_msg_0_0.attr_type = 167U;
    tmp_tmp_msg_0_0.min.assign("JZPUJKDEXUYIYIDFQHPJFDHDZLCALLTHQSMEQXTJEIKUEETLRTEWMGVDEWKLXHRD");
    tmp_tmp_msg_0_0.max.assign("ZYUKPUKRNBLPOEXOWZQTBVNCEDUVXEWHOHPQAIGTXYFEDKLCORFYWRGUQYGENBNFHSYTMWINCLQFUEXJWJMAFJVAUOZFXWUCBZPDDZBNYSRAAAQIPGLSYTEPNRKZCYTJCUJXISZQHKSJRJGRLIJLJOILMC");
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
    msg.setTimeStamp(0.2684889743631492);
    msg.setSource(24240U);
    msg.setSourceEntity(110U);
    msg.setDestination(59682U);
    msg.setDestinationEntity(37U);
    msg.name.assign("KOEOZZAFPPICRRICQPMHLTVQPBDNAEUSNRGFZZHWVVYGLCSRJVCYLRCUWGKMGESTNYKXNRHZDCZFUTQQYHNLTXJVVPZDUFCIPBETSVJZUBJMPEIFTICLJBYHLQQQMFAJWAPUYJMEOATPUOXNTESWEZUKWOWKIDWMRLEBIWYIFKQVHGO");
    msg.attr_type = 75U;
    msg.min.assign("HYKPAZXXLDPCTNBXBMWDCPMQIYSKTMASSWZELLEWWXNLNGCTTNYVSVAKMOLEHAHXHFSZRYMKMAHBHZRQIJVLENBIJSDHSJFFTIKLZFRZCRCJPDGUQWFOVMJXFMYPCVKPGHWAEQGDQFSXDOUXNUTOJDULYGXQUBERUGNFAUUPVRLPKEYBYEQIPNJVBDCRFGUDWIBVRQSDOGNEBOOUKNJACZKCVTJSOITEBFIZHPTAATWYOLCYVIWZRMQQRMHIJ");
    msg.max.assign("HNVOUQBZGPDQZTPXCHBCHHGSGTUKEOGQISOQLEEYBNLL");

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
    msg.setTimeStamp(0.07256696625272807);
    msg.setSource(9082U);
    msg.setSourceEntity(139U);
    msg.setDestination(53652U);
    msg.setDestinationEntity(83U);
    msg.name.assign("QHCDGLCUGQXIQBJIRTJAPBSKKPZANJAGWATZPOKXLXNCBHODULNJVSLUSXGKFOJHSKMGUWECOGZFISVRFQRAOKWJM");
    msg.attr_type = 100U;
    msg.min.assign("ZESWSIWVEOWTUPZIWFQ");
    msg.max.assign("CMKWUIDNTRXORNYAFUIHTBRQXWPEKVVNNALXZIARYGXYYKSNPALTAPXCZIMYFSCYUUJLDKGJSWVDBJLECSKHPBCIXMNVZYMEEEBMVOZXFQATXQ");

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
    msg.setTimeStamp(0.8188296619039552);
    msg.setSource(16354U);
    msg.setSourceEntity(67U);
    msg.setDestination(54879U);
    msg.setDestinationEntity(117U);
    msg.name.assign("QNCAEDGLDRJBBZLHFTETZOTLCRPGMLPLHUDYIUG");
    msg.attr_type = 0U;
    msg.min.assign("WQLLSGXKVOOJVCTIPUSXXOLYBXQAQODJPUBMEDBFLOYSBEAAKNSVZFESMWKDNCHLXEZYCCEANRWDBNPNTIBIZYPPHPVSINQKYXLWVMNYXGMOOMGNHMZOSIGBUFFZWGGWFKGUWUGKIDQJJIHJSLJAHHFDFWYCRLCPMIVMYAOHQKGHTTQRTPAHOBNDRVQJUTTAUZMYYRXLEVVTLXWCEJBKCAWQZKRVBKHINET");
    msg.max.assign("LGMOWBNUKCDRMRHKFBIYZU");

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
    msg.setTimeStamp(0.6028985206699892);
    msg.setSource(4805U);
    msg.setSourceEntity(216U);
    msg.setDestination(25633U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("BYUSBWVQIJYUTOVPNQFFGNIWTVORPTBJKGPDSHNNCTMNRBOASDZXLWLJQXZRPJLJTXIYXLQPXFQEIGCHRSRHMBDBSAGUSKK");
    msg.predicate.assign("XCPOXKEIVFGYXDYUPHPWPIAGZLJQKWHMBBJCJRSTYSOZEMUUWMLTMHTHOXZYGZPETHSARQULBGPIGHXCZCOYRKQRIMELSBRBAZVYSTVYFSQOFXESRVKLFILTQUDVDXYFKRAKFQSDAVJNEWKMNKZXEDQUUFGADFINFWNDJIGSWBBPIPGCMO");

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
    msg.setTimeStamp(0.7319945828018445);
    msg.setSource(42163U);
    msg.setSourceEntity(168U);
    msg.setDestination(31504U);
    msg.setDestinationEntity(252U);
    msg.timeline.assign("DRPUTGONOQVDHFZLNEJAIHKIEPHCIKSYOYWFZAMAJJWTFGUHAKNTWJNNHZGDSUJRDDAOTQCMMQZIAVQXBUXFKCVH");
    msg.predicate.assign("XKZJUYFMCLITEPBWPQIYQMYXZULRNSVXIOOLPHNMEUBTQYSBJRVGLKMADJRTOFCVWFXBYDBDCQCCPEZWHANRRKEVENCHKCONCDITIHODUTWJSBBWYGGEQZUWOJMGOYUSAKIOPVOQCMZVLTNHWPSXSEIDPQFVTQZLHDKYJHWFNUBSUPKAQRAHLPUZGXUS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WXTNGVZVTLVTNBRHBWCYPIKJDECVICDEKZZBNABTORUMYHQWKI");
    tmp_msg_0.attr_type = 72U;
    tmp_msg_0.min.assign("OHDVODIPIUTWGZBXDBKYRMAPCSEOZLGEYQBOLVWRFSDAFWVMRDYOPCVFWFGDCBKZYXVGPZTQPKXCJKQNSTVNKURJEQ");
    tmp_msg_0.max.assign("EPGRETSPJKDEMFCMTELFSPMUOSCZQCABFMRJGUKVDAVYHZXYFGMIMKOOKXVKIZUPKSTEZTVAQEUBNJAHBWHTZQQZCXLEMVXHVWNQBGODPEYNTWPW");
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
    msg.setTimeStamp(0.11518895166040466);
    msg.setSource(149U);
    msg.setSourceEntity(34U);
    msg.setDestination(63706U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("XVDVSOIUBFYOCZJYCNFJTVYFPAMLGQTTECQHCAHVKOTDHPWBQUVPJNBWERQGFPACUDVOWJRHRIRFONWSWSWIMKNSOBWIH");
    msg.predicate.assign("OFIPRJCFLXTXQHKXABTXPYFMZLKMZLBHLGTIECADQMGIUFYRDJSUNDSYZVWYFLNERWXMWQSUXZWQEPGZKGJJZIDMAPJLENZHPMBCOETCOYWNBWVOHTYHYGCTKOMVINCFXVFOHQIYDCKEQNZDGZJZXDRAHQPH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MRKAGDSOPFHBYJIFVIGGCBPRECJXLDQVYAGTPGRMEIJVITYVBCYYZIGDFPEYAVFOROXCYEKUMLRENTXQHQJPAZLVNMMQSNILKECETWKJZBKGVWDQKZTXLXYWHAGHMRMQMUBWBLAOHOCEPCUNHIBUNGXFKSQWLJESZCKFZGRFPJLYTZTSRZUORCHUFFUWOHUBXYBLHDDKPOSDNNQWVADPVQQWNBSDOSUWJHLIRAJIKZUEWASTT");
    tmp_msg_0.attr_type = 208U;
    tmp_msg_0.min.assign("GFAYRPHFNZIJGNWZZFPOJMPRYCRMBJUVVTVNHZXBTGILMZPSRWDEYSXTQTNSGXCWKFXHBLWWBUXGWCVIABB");
    tmp_msg_0.max.assign("OBITXQPSAMASYCVJRASVVPJUHQNIITLGWPRQWQEPTFBBDJXVXQOOGLRDZXIKSZUKUHOYSBQCVMNYVIGAXFOPHTABEHEHWIEHVJDAERRDFCZVPUBLBNATDRXVZEWF");
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
    msg.setTimeStamp(0.6833139410575397);
    msg.setSource(15515U);
    msg.setSourceEntity(77U);
    msg.setDestination(29548U);
    msg.setDestinationEntity(155U);
    msg.reactor.assign("NRZNBALGHSEUPPBZXZTTYRITTAZCFURYMBGGJTBIKPDCYRSF");

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
    msg.setTimeStamp(0.8863114916774592);
    msg.setSource(18394U);
    msg.setSourceEntity(118U);
    msg.setDestination(53209U);
    msg.setDestinationEntity(30U);
    msg.reactor.assign("KISARFQUCODIBVHFXUSJGXDBCYLAZKTZVUTTAGKCIMAMKZXMCRXDMCINM");

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
    msg.setTimeStamp(0.0977621901142306);
    msg.setSource(41462U);
    msg.setSourceEntity(165U);
    msg.setDestination(38868U);
    msg.setDestinationEntity(120U);
    msg.reactor.assign("HDIPBSPRKXOSLTDZFEVHZIKXYGGKWUDLEJKLCASJTWILULTZKFOLKQBSPHAYUJOAFLNUWGPGPDEABZRTYCCWZKTEWUMTNYNCLHVQOMWMRIRJWIUZLZDMGVXZUPVUXDBWEOFIGIYBXACGDHFCQKMZZRFODYNSVDRCMYTAWONEUYQSXIQYNNTRSXVXSNOPEFVIISONJEMFVQFCPJPAOHTRMBQNJEUVAQGPGXBCGEJQFALJC");

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
    msg.setTimeStamp(0.18470316105934792);
    msg.setSource(1984U);
    msg.setSourceEntity(165U);
    msg.setDestination(19483U);
    msg.setDestinationEntity(101U);
    msg.topic.assign("SCRFCKFWTJAIYUVAQRDJOZHLZPUKYWFUHFNGQNZBZQTPKTYFZWOMBADAFJZHPSXMHMNLNWHEGWXDKNPMVSZDLKKMRVNIACQIDOJPCMGBNDRLLLWZXEBMGGXUYSRJWJHCATIIGDOGVOOLJWRLPUFHFXECEXPY");
    msg.data.assign("AMCMWYQEZGATYCYZTHZWEVMLIHEVOTQELWBUJFZQIYRVEKNSONGAJQOCUDVXAILOXFSHGSZTDSBBZHFGHKXJLXHGMXOLCVAPRNTBYNRQTEMDPJSOYFMMUIEPB");

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
    msg.setTimeStamp(0.5923038645753678);
    msg.setSource(28502U);
    msg.setSourceEntity(3U);
    msg.setDestination(34474U);
    msg.setDestinationEntity(193U);
    msg.topic.assign("PUGMHMJJTAYEBEPTRHVIMZXWTECINGJOGVZMWIPWJAEKVEPSFTMGTTEZYPFGOPNEXNIDJBZWUNC");
    msg.data.assign("KTVOKHPMHTIVZQEZURDCHYTDPCERLMHEPRWOZOAFOQZBZAJYKXMVSZWAYXBIGAMJRDLUYIAPFZKJRXTHESLNSVBWQSCBCGTHFIYLCTYDWNVURFDGXTPMGIXRGBQIELTEBJQJGZWVJZSJQLWBJXNHFFPRU");

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
    msg.setTimeStamp(0.6204130893526664);
    msg.setSource(36390U);
    msg.setSourceEntity(154U);
    msg.setDestination(51994U);
    msg.setDestinationEntity(8U);
    msg.topic.assign("TKGEYNQYXSKTSWEGDSYKOIPNXDWPRVEJGYVFQKMOEKTSOAZDFCRZWVHAQUPTPEBAZZCCNCJNEISVWGTMHDROPTTRDUKUFWGGHQOVRXOFMKJNJAWHLHZNJJYQJQMDL");
    msg.data.assign("EPQQVUPEZMDQUAIHAR");

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
    msg.setTimeStamp(0.8259910985893372);
    msg.setSource(48001U);
    msg.setSourceEntity(249U);
    msg.setDestination(50802U);
    msg.setDestinationEntity(15U);
    msg.frameid = 211U;
    const signed char tmp_msg_0[] = {-96, -29, -7, 30, -56, 40, 33, -15, 54, 33, -11, -5, -93, 82, 101, 77, -119, -121, 17, -52, -13, 24, 14, 109, 6, -112, 60, 43, -102, 14, 25, 78, 94, -116, 108, 95, -8, -123, 73, -75, -45, -41, -55, 63, -113, 68, -53, 24, 22, 96, 38, 92, 92, -58, 88, 10, -77, 85, -105, 116, 119, 10, 108, 62, 17, 7, -103, 101, -34, -12, -102, 24, 55, -60, -96, -125, -54, 82, 118, -47, -88, -49, 121, 55, -59, 14, 82, -81, -106, 55, -64, 72, -18, 75, -44, -29, 66, 122, 5, 5, -27, -38, -123, -76, -110, 36, -28, -46, 28, 84, 41, 103, 74, -104, -114, 86, 116, 31, 66, 3, 39, 26, 25, -4, 19, -123, -15, 118, -19, -125, -40, -92, -122, 121, -65, 101, 116, 122, 98, 71, 88, 4, -54, -82, -98, 18, 77, -80, -21, 64, 27, 74, 74, -6, 51, -68, 63, -2, -24, -60, -78, -107, 4, 41, -33, -61, -4, 23, -60, -43, -31, -91, -99, -92, -95, -32};
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
    msg.setTimeStamp(0.10609813914540056);
    msg.setSource(62421U);
    msg.setSourceEntity(93U);
    msg.setDestination(65339U);
    msg.setDestinationEntity(173U);
    msg.frameid = 110U;
    const signed char tmp_msg_0[] = {-98, 64, 30, -79, -17, 82, 75, 36, 47, -39, -57, 78, -71, 116, -22, -34, -118, 29, 100, -36, -16, 116, -3, -34, -125, -5, 112, -89, 72, 85, -21, -92, 50, 51, 115, 50, 11, 49, 119, -45, -20, -90, -60, 85, -93, 79, -37, 57, -9, -74, -61, 105, 31, -84, -14, 7, 65, -63, 125, 78, 30, -19, 9, 97, -28, -65, 111, -103, 0, 15, 30, -7, 69, -29, -81, 126, -60, -36, 90, -40, -33, 83, 47, -28, 19, -74, 112, -105, -51, -50, 12, 111, 70, -55, 38, 59, -116, -59, 79, -48, -73, -3, -3, 22, 25, -12, -33, -104, 98, 89, 2, 66, -108, -34, 45, -2, 73, -21, -69, 62, -41, 51, -103, 116, -75, 104, -98, -71, -82, -4, -61, 48, -12, 70, 102, -118, 63, 51, 95, -5, 39, 1, 58, 19};
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
    msg.setTimeStamp(0.8712404438666188);
    msg.setSource(26225U);
    msg.setSourceEntity(134U);
    msg.setDestination(52446U);
    msg.setDestinationEntity(153U);
    msg.frameid = 250U;
    const signed char tmp_msg_0[] = {-93, -62, -122, 76, 23, -18, -3, -125, 31, -116, 53, 40, -117, 3, -12, -96, -91, -5, -47, 30, -1, -32, 93, -40, -31, -109, -29, -62, -108, 69, 105, -80, -20, 107, -74, 67, -19, -68, 5, 74, 110, 88, -58, -34, 31, -31, 25, -68, -64, -80, 8, -81, -19, 47, 33, -87, -80, 33, -70, -77, 93, -22, 19, -127, -45, -55, 71, 108, -108, -96, -125, 71, -19, -15, -9, -18, 71, -95, -92, -100, 46, -43, 27, -114, 120, -79, -59, 8, -65, -49, -18, -123, 38, -31, 71, -41, -3, -30, 49, -52, -98, 28, -41, -120, 34, 6, 116, -103, -28, 114, -58, -77, -10, -13, -74, -92, -96, 104, -2, -118, 71, -25, -80, 3, -115, -70, -3, 11, 118, -107, -115, 0, 87, 107, -81, -59, 116, 42, -20, 15, -103, 86, 79, 8, -63, -47, 70, -98, -71, -104, 80, 38, 94, 49};
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
    msg.setTimeStamp(0.5505935726512091);
    msg.setSource(5886U);
    msg.setSourceEntity(245U);
    msg.setDestination(10580U);
    msg.setDestinationEntity(10U);
    msg.fps = 190U;
    msg.quality = 19U;
    msg.reps = 170U;
    msg.tsize = 144U;

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
    msg.setTimeStamp(0.8294432997657384);
    msg.setSource(61569U);
    msg.setSourceEntity(164U);
    msg.setDestination(40326U);
    msg.setDestinationEntity(183U);
    msg.fps = 80U;
    msg.quality = 227U;
    msg.reps = 134U;
    msg.tsize = 240U;

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
    msg.setTimeStamp(0.3944680342031093);
    msg.setSource(41295U);
    msg.setSourceEntity(229U);
    msg.setDestination(10000U);
    msg.setDestinationEntity(185U);
    msg.fps = 192U;
    msg.quality = 185U;
    msg.reps = 253U;
    msg.tsize = 249U;

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
    msg.setTimeStamp(0.725153646462786);
    msg.setSource(24445U);
    msg.setSourceEntity(218U);
    msg.setDestination(48744U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.10581239133337139;
    msg.lon = 0.7824624848330085;
    msg.depth = 210U;
    msg.speed = 0.4517511839286207;
    msg.psi = 0.5011954020017181;

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
    msg.setTimeStamp(0.012729420223794308);
    msg.setSource(493U);
    msg.setSourceEntity(91U);
    msg.setDestination(27521U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.6569686797576175;
    msg.lon = 0.4612122816170737;
    msg.depth = 197U;
    msg.speed = 0.8609324430469888;
    msg.psi = 0.11411233462374337;

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
    msg.setTimeStamp(0.017919443604060614);
    msg.setSource(35151U);
    msg.setSourceEntity(142U);
    msg.setDestination(23851U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.35715055426663533;
    msg.lon = 0.32212439985994834;
    msg.depth = 251U;
    msg.speed = 0.03290907716742608;
    msg.psi = 0.6143387711004089;

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
    msg.setTimeStamp(0.4428583164855536);
    msg.setSource(22909U);
    msg.setSourceEntity(68U);
    msg.setDestination(5575U);
    msg.setDestinationEntity(232U);
    msg.label.assign("RMBPUKZBUXWJROINQHXCVAUTAATZPDDNFSKVWEQETHTDISPNMLWCXVWDLMNLDGSULKBNDVPRZEMYBMVLFPUTFCKIXIJHGOAPQAHWITDVZFBKVTJPQLRBAZQSXHTXXHPRDRFRSYJTLUXKGJQIEEOCFAOWNMJDGBVYMSOENAYRKUQRQITEPCSENOQVYEUAOZJBKVFHNWGSJEHMCLHZGIOWWJMFKCYGFGHSQYJLADOG");
    msg.lat = 0.8078678214426908;
    msg.lon = 0.8338209263750086;
    msg.z = 0.7782793747917547;
    msg.z_units = 245U;
    msg.cog = 0.800990697395395;
    msg.sog = 0.2627749155996274;

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
    msg.setTimeStamp(0.6205015405577321);
    msg.setSource(11654U);
    msg.setSourceEntity(78U);
    msg.setDestination(836U);
    msg.setDestinationEntity(151U);
    msg.label.assign("SHEUYNMJKCBDPZUDWDOLAIYQEROFXCGTRIGVGVQWHNIJJERWPSKUPOVAXWBGRQHWWDVTPUIBSTXCEYZCSDEWFSTKAOESQFQZLKXVFRQSCGFNQGAMFEOQTKAQALJNIYIYXUUSWNTSJJHROVCFLEIKMMMVOPMAHBCXBRIZHYLBHKDLETHHBOPSNOAUBVC");
    msg.lat = 0.8983745212878106;
    msg.lon = 0.44152394044604903;
    msg.z = 0.6266439538131107;
    msg.z_units = 30U;
    msg.cog = 0.05096112095636829;
    msg.sog = 0.6526222631007141;

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
    msg.setTimeStamp(0.575349416234672);
    msg.setSource(51670U);
    msg.setSourceEntity(121U);
    msg.setDestination(9620U);
    msg.setDestinationEntity(146U);
    msg.label.assign("DVLJTCDAEQHGDJGDTUCZHWENQGFBHUCIYQPCVVUJTIAYXNBZEBRTANZXNXFQYZKPXJSFJXBRDTTYXWRWCBLGNAUWHUMMUSMBHSQPLQZMBOKYPNNFFOJOKZSSNOKAUVCUKMMLLKLIQXEDL");
    msg.lat = 0.21121297001866335;
    msg.lon = 0.7604272453249417;
    msg.z = 0.9203594568591857;
    msg.z_units = 44U;
    msg.cog = 0.5047294309346584;
    msg.sog = 0.2829686646836034;

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
    msg.setTimeStamp(0.8721990721226891);
    msg.setSource(48930U);
    msg.setSourceEntity(247U);
    msg.setDestination(56794U);
    msg.setDestinationEntity(11U);
    msg.name.assign("BOIRZRRFTGXNYUGLHCABLMTQSDHPLYJZEJXUVEVOYBATSCKTPSRZSGIVUURYUWJFYXMGTSMQTJJOEWADDIPVTWDNWBZZHEXWKMKLCDOWDFANXLEKXMCYZCSNMULVVEYGZYSKBIWGBXHRAVTLCPFSPUDBFZXISROTCKTUMNDBLEWXGFH");
    msg.value.assign("BYQTOYVPJRAMCNZQZKKKGLVEPVYEOXIOJFNUATPUBVEAGPDSRDTWFLREAGFQGCDUSEWVWYIPGZUPBTMFBUSDNJNQFJSQVOOEIGDWVFPMLBJQWMZHAZKQKSJCPNVDXBDUZCRQWBSHVOIGFRSBIKGSHXWIL");

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
    msg.setTimeStamp(0.09699263699021432);
    msg.setSource(26689U);
    msg.setSourceEntity(210U);
    msg.setDestination(23407U);
    msg.setDestinationEntity(247U);
    msg.name.assign("GOJTIOYVIJBSLBSKARSJGXACLNASVDDXPSIZZOSEMXMVWFJMQHPQNMEKYYBLUNCPKRZBXKTQPJWOIBNOZPKZAFYFGVXDLKUNHRHRZQSOWRYUZUFQEHQSQGTDHTMJXCTWYCZBXJFFYUMTHPOEUUILLEWNYITHSUWGAKYAJATYOCNRLTIXAPGGCKSNVQJMDMPBMECAPVWUVVXBFWD");
    msg.value.assign("XPMZRTRSSEWFPJYLZUXOBTFQBYMJRJSVCASUFCCQBCVDMRUKUHKIPWNLFUWFXMSTHUBDMAEHEGGEETQPODIGDIYALRVHLMNEKDJASJDVTKALNJRBNDAIKZJNWAHHPGXJYZRHXLYZDLHOWTFWLMXGNROUVWLTILBXTDHZYSEPGWCXYNVPKQRMFANQGKQQVZVIMXCIFDZIITPWEZBRQUUBMNIOQXYJQSOGPSJBAAOVYHPNOZFWKCOVOBFEUCG");

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
    msg.setTimeStamp(0.4762417037304705);
    msg.setSource(19609U);
    msg.setSourceEntity(125U);
    msg.setDestination(21958U);
    msg.setDestinationEntity(212U);
    msg.name.assign("PGSFEOCFUICCZDFUHMRJSOUKJBALXFWVGHAKJSEASQLJTKDLBKMRGVKWXMCDPP");
    msg.value.assign("KWIPXDZNBHGXGTVQHDBZHXKFPZXUAEZNXQBRUBGDJTWLNACZALASBCSYLKBKKXFTELELWYHEXWUCQPYNYEOLSDAPNVYWEVEGPVSTYWHIRVTUQRNRFNIOXALDJRBQUXCVSMOGWJFROYHDGDYKCLOPTVOSOJHIFGCTRFTQUPEMZHOVEIIPFRUKKTVAMXVGGYUINWKSDHCZZEWGILQBNIOMLMACJQMMMASJSJSQR");

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
    msg.setTimeStamp(0.7899314291518678);
    msg.setSource(33053U);
    msg.setSourceEntity(191U);
    msg.setDestination(17698U);
    msg.setDestinationEntity(21U);
    msg.name.assign("JCAFFAEHRJEVMUVZVQPDRWBLBMUKIZGXMVJOAPOLGPTPWSBGYVCFJMIRZPOVLWMEUNPJUFPWFKYWYGDIALMADHVEUWPFUMXKPRKQXOCTLTEEJXWDQSHDHIFAYEWEDRSDMXDVRAHJQJKQZZCUNLWSTZIQEQTMBFYBGCTRXBSDKXYCNGMLTUPLENIOHRRCGVLN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HZZCVNVNJKQMMELGBTCNMLNJFCDTDHDIFXYJVKBNAVBYXWEOCUYAXQBGHQDQOUUZWIHVUBGLSKYFUBMOILIFCRANHPOAWFXTKDLLVLWSRGBNJAGPZXUMKYYRJDXYPHBHITMOGKZDZISAJGOXLQQVPHFEDGQUZWVATPXIEPPGASJVRJESTVAFDSIJEUFW");
    tmp_msg_0.value.assign("BQAOMAQOWUEOZDJESWHFKIRITCERJQRSJJINZNTXJGVXWHQTLEXWFBKAMEGZLJLICWXINKFCHMZBDRYRQMCAPYYNHFDLAXYOVGYCYWQBZXYTD");
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
    msg.setTimeStamp(0.3688486058502207);
    msg.setSource(32579U);
    msg.setSourceEntity(225U);
    msg.setDestination(6605U);
    msg.setDestinationEntity(251U);
    msg.name.assign("BLZSXAQIUKLMJKGCHBKHEGYWANNHTRNGCMPXPNLPWZTAJSVYOENSFLJATCDJOIUZGFLIHSKPDPQZUIKRXFDJBRRXIODBWWZBQDSEUJUDSWGZEXEEUCBPCRXOQVQOXAWMMKTVGHISFMYZOFQLNVCDTRVSLNOYYINETZTJDRYVOAJXVQBESRGQVLPCTKTUYHUUEWGUF");

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
    msg.setTimeStamp(0.09212547114309655);
    msg.setSource(60620U);
    msg.setSourceEntity(190U);
    msg.setDestination(7355U);
    msg.setDestinationEntity(19U);
    msg.name.assign("AKJMQOXCDCGSOAQGJWBPGKEILSAIIPNDDVEUMTWWSKUURJKHEOTMZCXHAMCULVAMJJCJBZKHYLFOHKBXQVFOYZVCYLEPVEGIYWNHOJIFTZUDAIRBNWEBIPVSQVRYCHDSTWDETFKRBUPNQZGMADGOHUMSZWFLHPJQYJKSZKWCFXFNYPDUTVXAGRQLRBQYFCXBAIF");

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
    msg.setTimeStamp(0.13213349452483814);
    msg.setSource(10645U);
    msg.setSourceEntity(192U);
    msg.setDestination(40126U);
    msg.setDestinationEntity(75U);
    msg.name.assign("FIYCWVYGFTUWGYWEVPSKKGPFMCHEDXWLLQDWZZYTEROZKQTPLELFCZJOMXU");
    msg.visibility.assign("UJGJDSOWOIKUYBLFMGYLMDKVBXZFGNGLIFRRDYDUSJEDRDBAYWDZEMZBYMWCXRNHBKTFKXLWWQOOYEUTAMRQCOGJSNVOBYSPBENXLHSUJIMVEMFCSKGTLQMDVIAHTEWJPHIYQSPETAROMHIRWHDNWBZGANJNLIUPQAQPXFBPZKODHYWKKZKUVSLAEOQVVTOYETHSRPAGZHLRQXXK");
    msg.scope.assign("DZXUWJQERZGYWRCKLAPTIEDWTBBXMCUUZOQPHHFWDRNSJITCSPNUJEHNCYGKBDQNNIHISUTWKQPTRXZVKVYIHYLZ");

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
    msg.setTimeStamp(0.6373371954871466);
    msg.setSource(42628U);
    msg.setSourceEntity(234U);
    msg.setDestination(21525U);
    msg.setDestinationEntity(161U);
    msg.name.assign("GWMIAAEEIYZXVKRCOSNSVANFZELTXJZ");
    msg.visibility.assign("IMTFIPIKDWEJUYAVKXRSJFQNGVEAXUXPBHWHJXWQYATJCYOVPHZSEUCKOEBK");
    msg.scope.assign("XKLRBPXDMKSLOHNFRWPNFREJUDOEACIVXMMSMCUJKTLHPTHFCJNZIPWUYBAZJEFGKHPXPSRLKCBQBEXTDZGAIDYPZWZMGBHYNIMFOFKUHQVCNQGV");

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
    msg.setTimeStamp(0.9119040354398077);
    msg.setSource(15718U);
    msg.setSourceEntity(2U);
    msg.setDestination(10410U);
    msg.setDestinationEntity(113U);
    msg.name.assign("BYQROPOPJUKPBJN");
    msg.visibility.assign("YKTHZUAJIRZTBVIOFMDEFZZPXVFRYLKCQVVNALQPKMYHEQWJKULSBEXYZWIPUSVNUTNCCEBACWYBVCHTWOKDXFRYLUCPIQBWLMZSHMELSKHFWVRFFJUUDJQERXGAPDWOOIHZIAHBXRPIRNSJKJCPYESSDHXNGYGADJCMZANPRCAASNWSJCKXJFRWFEMOPZOYIJXNUBQIDLDBZNQEKKHLVOLTVAUQINFXW");
    msg.scope.assign("WXMXLMNYXCNGXMLGNWQDHIRVDXKTRJVNXL");

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
    msg.setTimeStamp(0.4354869367457903);
    msg.setSource(45750U);
    msg.setSourceEntity(168U);
    msg.setDestination(9897U);
    msg.setDestinationEntity(186U);
    msg.name.assign("ADPDXXZEGRXWWHWGDVEZARRTGZCFZTOJIQEDOUTPGTHPCLPGTYLJYWXSCSKFCBUUIDAYTHMSAJOQQVQXFZTLHCIQNGYYWKAULUFNVWXBWAJINGLQNEBHYAENCDXYSBSJJKPLLPAORSBPRNBMTLOFIESPWRKVDNUMKMYFOKJHIMOVHIQMNRJKEAHCUUMZBTHIVLYHNCQEDPUSFKBOZPVARMMCOXBKFYZRNFMSXZUWVVGIKQXZVIWEQFEJRGBODD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OPCGMIGSWDOKUGNYEDRLXXPJBLRHJDTUFPZVIUSIZSLQUSBACGBMKYDSECOSUOGFJJBPXGIMHBZOLFJBABAIMXFAPEDKRSUPOIARXQKFGRGLWNWHHEODAETLVYQKCZROJEPZQJEDVQIUEAKINFBREMOOPWNCUKZTWYZWI");
    tmp_msg_0.value.assign("AECYOQTEHCQYVUADPNLOXVTGFCQ");
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
    msg.setTimeStamp(0.36234259897542864);
    msg.setSource(3292U);
    msg.setSourceEntity(244U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(107U);
    msg.name.assign("KKVHMELMKYOHGTMVMOXZLFBWHDENDXUPIGKIDSKNNWAQCHBGICJERXRXXDZROSZLCYMZAMHLWZFUNBZCVBBCPTYIFZPJOISPSHPAVNYTTYRBYBCLSFBNLMWE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MUVIOTFNPOVGHZTAZOQOPASBEYTAEPJHRGNQKLJDVWSBQFUAVGCUYWUPHSNCKETJDNZUQNAGXUEYMSKYYIDDOZPLDIIWCWABJKGYDXPZLEQMMPAKHNDBPDLUFRWVHMCOMJZTUYGLCHVEQNFFRQOGIQAZRIDBPFWCJUTCVGIRTYWQXFKXSMSBLKXMQ");
    tmp_msg_0.value.assign("UDRPQVNCRTXZREWKMKRRGMENVAOSEYEHXOIHLNTUFWPRFXBPYIWGCPMJUHTPJNINXVEKYBFOAZADTLHDKOOBQCLUTFVYTQKKEBQMNINYBLOJZWOIGVJWTJAQOWSOHLYGJXAUGCZLZJVPISQUMQXWQIVJFDKYWPJAADQZHBZZLDSIRLNMXXIGCCGYYWOSLEEVXDSCDETADGCMSCFMZKPBWBLVITTFHFGUKZAUGSCNMPUQRRNJYUPVRHSKHHA");
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
    msg.setTimeStamp(0.6732692090392792);
    msg.setSource(43684U);
    msg.setSourceEntity(102U);
    msg.setDestination(10509U);
    msg.setDestinationEntity(106U);
    msg.name.assign("ZLWHZELTVGWMLJZJGCNBUJQOQDNKOYIFJVHHKQEQVSHYFVPOLWPUDFKEWIEZPRHLXGYOIMTKCRCUYOYBJOUMHXFJEACACINAFGYDMJYCVRAUEWZXSGBPNEWZSOTVGWHAAMVHTICNJQTZTHMFMIAGKGNBRSRMPDUQNRVMHADDLQKEPXBOYBENFXPSFUZXUTWFKILZOISGZLKBENLXBPUMRUTQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CZYADAGRPUBDCEJNUUQYSKESLAHOGLIGJEWUENHPWHJTLUZFWMSPJFPDNXYOO");
    tmp_msg_0.value.assign("CQNIOYQGLFPZEMKIUMYXVTAXABPZRAUECRJUSAPLHBXEGLOJIWPVTZILMKWGVAVQNRDZNZZIFAPUDCMDPSYCRMCIWKHDXTVWPJLXKAUFMQNFZAQRSDIMLRNFNDQKALFHVXEGOHYFWWWFXTBUFSNYVDVYOWHHEPCHXQOYOONRYKBIXDUNYEGTBBXNDDZKVBGZSPGMLSZPGCAQCSUIQLTWTRGHJCEMTIBESHTOJSTWYQ");
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
    msg.setTimeStamp(0.9708023476034403);
    msg.setSource(62892U);
    msg.setSourceEntity(183U);
    msg.setDestination(54093U);
    msg.setDestinationEntity(49U);
    msg.name.assign("TUWKJVAFRMHSTLPCDINHLPWEJJXFWQVRBJNZCUGKKWFBOIFYSWOHBZYRPMDPLVECMTVJESMJZZFKCXZMXAXXNZYGUOZXHGAADQANLOKNDBPOXBPCYQMIYLTOTYWQTALOAAPUVIRPTJRGAKYCBNLBE");

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
    msg.setTimeStamp(0.6165461170623104);
    msg.setSource(25091U);
    msg.setSourceEntity(27U);
    msg.setDestination(41345U);
    msg.setDestinationEntity(0U);
    msg.name.assign("VCARESBQGGGJGQYZPWBTZZFHIWZBOWHYNQTOVURAWEEDHXZXWXFXRNMHSEHDSPINSCWAJDBSMPZMBMWVWPVFKEVDLGMLYZUUBFDJSQKXQSUCUQUOCXYQNPPNMYOAZXKSRQYTHKLGJYFNJIFYIAWLCNBNZPBKMOTOJRTHTHCIOELXVLMMCTCUJAPOTKQRZFXVVMEOIJG");

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
    msg.setTimeStamp(0.7983617736493984);
    msg.setSource(20665U);
    msg.setSourceEntity(103U);
    msg.setDestination(3605U);
    msg.setDestinationEntity(150U);
    msg.name.assign("IZSMZPNFHZOMYRQBTZYFJYMUFLOQTLKANRFPKYHMNJWL");

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
    msg.setTimeStamp(0.4353608000502954);
    msg.setSource(59285U);
    msg.setSourceEntity(182U);
    msg.setDestination(2766U);
    msg.setDestinationEntity(105U);
    msg.timeout = 1254693505U;

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
    msg.setTimeStamp(0.5510505487245916);
    msg.setSource(29606U);
    msg.setSourceEntity(211U);
    msg.setDestination(58038U);
    msg.setDestinationEntity(176U);
    msg.timeout = 986953651U;

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
    msg.setTimeStamp(0.3909699381485544);
    msg.setSource(29623U);
    msg.setSourceEntity(17U);
    msg.setDestination(3973U);
    msg.setDestinationEntity(184U);
    msg.timeout = 191531315U;

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
    msg.setTimeStamp(0.6285722998981177);
    msg.setSource(35275U);
    msg.setSourceEntity(29U);
    msg.setDestination(57075U);
    msg.setDestinationEntity(240U);
    msg.sessid = 108595398U;

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
    msg.setTimeStamp(0.44063346578061);
    msg.setSource(42850U);
    msg.setSourceEntity(159U);
    msg.setDestination(13746U);
    msg.setDestinationEntity(62U);
    msg.sessid = 2044070783U;

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
    msg.setTimeStamp(0.16325201889895014);
    msg.setSource(49550U);
    msg.setSourceEntity(112U);
    msg.setDestination(37601U);
    msg.setDestinationEntity(48U);
    msg.sessid = 2056768405U;

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
    msg.setTimeStamp(0.5135398720601041);
    msg.setSource(39715U);
    msg.setSourceEntity(238U);
    msg.setDestination(18314U);
    msg.setDestinationEntity(103U);
    msg.sessid = 1371879784U;
    msg.messages.assign("LHUTIFZPZLXDXDCTMTBECISSBZYKNQFOZJRCFTJZREOWCSEFDKQONYQKEBKPVVHRF");

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
    msg.setTimeStamp(0.12586557991588598);
    msg.setSource(60272U);
    msg.setSourceEntity(22U);
    msg.setDestination(44424U);
    msg.setDestinationEntity(98U);
    msg.sessid = 25410660U;
    msg.messages.assign("ERJLYBLMSOGQMANKTXXFQSRZSCWLFWGOPHIMRUDKATWFTCTYEPCDGOPSRZCXXBRDEGJGTFVZCMZVUXXJZOHJIGHSBUAVNLILHKTXEYUAIPRJBUCMWSZQMFAZOIWGKJBVEWYGKCJQEWRQBFKNBEBOYCHSVHTAJESUHHPKDVNAVYOBALJC");

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
    msg.setTimeStamp(0.4328438793458257);
    msg.setSource(6619U);
    msg.setSourceEntity(159U);
    msg.setDestination(27895U);
    msg.setDestinationEntity(210U);
    msg.sessid = 253211903U;
    msg.messages.assign("WRGOHUHNAWBZEDJHOPRRTBFXDD");

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
    msg.setTimeStamp(0.20704524975704808);
    msg.setSource(60707U);
    msg.setSourceEntity(98U);
    msg.setDestination(54377U);
    msg.setDestinationEntity(118U);
    msg.sessid = 2965612996U;

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
    msg.setTimeStamp(0.12943367322706067);
    msg.setSource(46423U);
    msg.setSourceEntity(13U);
    msg.setDestination(62478U);
    msg.setDestinationEntity(211U);
    msg.sessid = 2608103955U;

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
    msg.setTimeStamp(0.08206505147972254);
    msg.setSource(64283U);
    msg.setSourceEntity(246U);
    msg.setDestination(60130U);
    msg.setDestinationEntity(79U);
    msg.sessid = 289520846U;

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
    msg.setTimeStamp(0.21342403814342426);
    msg.setSource(61681U);
    msg.setSourceEntity(212U);
    msg.setDestination(23372U);
    msg.setDestinationEntity(75U);
    msg.sessid = 3837899881U;
    msg.status = 212U;

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
    msg.setTimeStamp(0.08206396827323237);
    msg.setSource(51919U);
    msg.setSourceEntity(172U);
    msg.setDestination(3012U);
    msg.setDestinationEntity(20U);
    msg.sessid = 3021242980U;
    msg.status = 246U;

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
    msg.setTimeStamp(0.23622887826558625);
    msg.setSource(13829U);
    msg.setSourceEntity(131U);
    msg.setDestination(15443U);
    msg.setDestinationEntity(12U);
    msg.sessid = 3785191547U;
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
    msg.setTimeStamp(0.36412985672611764);
    msg.setSource(44662U);
    msg.setSourceEntity(35U);
    msg.setDestination(41831U);
    msg.setDestinationEntity(29U);
    msg.name.assign("HYZYLQZNRJGFMVTXLNXIMLNWIAHRIQAWPY");

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
    msg.setTimeStamp(0.015707882162049103);
    msg.setSource(728U);
    msg.setSourceEntity(224U);
    msg.setDestination(65375U);
    msg.setDestinationEntity(188U);
    msg.name.assign("TFQOAPWJINRQXDDXTXNOZEXVYNVMAIIDNMEBSFGJLECWLFVPFUMRLPRHVSLTZXWHPAJLSCEHRVWEJEVSMFJPOLBDXWGYNBRMQCBKSZABQSTFGDYKATZLKKAKWXGNJKIECWUOUWJYIIOLNKUZGOUHGYMQIFPEVDCODHNGKDUPCVSQGODNRMTCVP");

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
    msg.setTimeStamp(0.05730146219816645);
    msg.setSource(19264U);
    msg.setSourceEntity(162U);
    msg.setDestination(6976U);
    msg.setDestinationEntity(21U);
    msg.name.assign("FSDBUECKHPWEPODVYCWAAGDMNLBPKXMKNKGYTHQETZOOOCKXDYMVOTMCNGXZLTLDLARHFYJRLPKQFJXTFEXPYHFHNKVMZJZSQJWQPGFTRIVXEVBBJRJMWVNWITAPGZRMKG");

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
    msg.setTimeStamp(0.7833741520223041);
    msg.setSource(24863U);
    msg.setSourceEntity(232U);
    msg.setDestination(56869U);
    msg.setDestinationEntity(193U);
    msg.name.assign("WDJEXNGZJPUVPZCPPWAWITGKGNDEILQXSLNMFLRFVAMDBUTXXNXBMFZQRVYMKXFAPDHKYYVKTACOFRGTCABJLDYBCQMBANUIKAPYUYSCSLOHGAOAPMJNQHLQSVJIUEMVQUZHHITGFITIEDBWHNZZ");

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
    msg.setTimeStamp(0.6700688846514646);
    msg.setSource(9026U);
    msg.setSourceEntity(20U);
    msg.setDestination(61571U);
    msg.setDestinationEntity(31U);
    msg.name.assign("XUDFEOKTXZJJLLBVPMLZZDKYHCJVYDREECQAXQAGIRPCFZNOGNHVXJAMUGGRWWHHHNSHUDBCKJEUIMTBHFRWNETTEMZSYNRTOBRUHIQIBXZBUJBEHKGTHAYICTVACEDSPQLCFLWWLPVJUNVTNLGEALFWKZB");

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
    msg.setTimeStamp(0.2582687935900354);
    msg.setSource(57737U);
    msg.setSourceEntity(38U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(125U);
    msg.name.assign("YOABVHHMOCEHFQDGSDTQGAWSLFTFCDWZODXHCUZBGHMSGCTWANZFRXJFEKNKMQNFPJNZBYIPEXANUKFOEMRECRMZDMEERIIQWNOFJQQXSUGKJYOMTNFXNTTDGJQEKSNYVSTLRXRYKEHKGZMGYROZWVXXPAHCCXLUKYNUXMLGBIBPLJIVDOBDPLKSS");

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
    msg.setTimeStamp(0.05196394400552573);
    msg.setSource(30495U);
    msg.setSourceEntity(217U);
    msg.setDestination(40556U);
    msg.setDestinationEntity(1U);
    msg.type = 99U;
    msg.error.assign("EMNWNPLWOHVUXZXBUOFQWCYFWKFVDFURBEQIODLTQJPYTFDDECMGGQIECYGLJOMSNWMEXJLTDGJZ");

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
    msg.setTimeStamp(0.22095627739050294);
    msg.setSource(65448U);
    msg.setSourceEntity(235U);
    msg.setDestination(57655U);
    msg.setDestinationEntity(86U);
    msg.type = 158U;
    msg.error.assign("ZEZBYSLBFTRCRKKXZBSENWMWOWGYGDYGWPGPAOHEXSXJUBVIPCDHXYTKQKLZDOIUYUKDDCPNBTZHZODACKJRUPJIBFXXIFIAEPPTESQUQLJHMPVRNUICSTGDKFODQJRMOAGQEANZCCAVNMKPVAGHTJYVQVFWOMFSMVYHANDLZETHSIMJTIJOGFFHNUGXQIWIBQLSQSCHQFVZEWPLYOWMLCWBHXLCLYWVUUKGTKONJXLFRRJUBRTX");

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
    msg.setTimeStamp(0.5208734228495683);
    msg.setSource(3895U);
    msg.setSourceEntity(90U);
    msg.setDestination(449U);
    msg.setDestinationEntity(214U);
    msg.type = 42U;
    msg.error.assign("GHVMSIRFVUYBWIXNNFYUBTBPJRBGXVHYZCQXZYQFRMODMNSKIPPEIIXQQVKHJDHZJKDXEWZANZUBMOHPMYNBPJLYWUGUDOOWICOAEUMXSGARLNQSVJFHLGICGSQGTCAFWHONDWSIIXECKTOJVDWLLBQXOSUEAWRRSPLGWOBFDAVKDCDYRGLRPY");

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
    msg.setTimeStamp(0.6751901622353436);
    msg.setSource(63375U);
    msg.setSourceEntity(248U);
    msg.setDestination(47315U);
    msg.setDestinationEntity(194U);
    msg.seq = 2952U;
    msg.sys_dst.assign("PIYMWAAIVVLMDDYSELDIGWSNEFHXFKDPXOSWUAEOJWQBIXRJHVOEYHLDNRGVUQBBLFOXWGYNLYFMWCEXTUNCJJWZFMRDAZNSFDPJLKDZJQQXNTJICRDLLSUOBDNHZRWOBAT");
    msg.flags = 136U;
    const signed char tmp_msg_0[] = {24, 117, -103, 105, 83, -39, 114, -110, -3, -120, -103, -18, 110, -69, -98, 11, -21, 102, 101, -21, 70, -20, -56, 106, 14, 66, -49, -47, 101, 91, -70, -18, -92, 97, -33, 78, -8, 40, -92, -17, 28, -63, 4, -116, 87, -124, 79, -75, 69, 45, 64, 48, -41, 42, 23, 58, -45, 70, 62, -102, -48, 116, -113, -15, 123, -62};
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
    msg.setTimeStamp(0.3507156731953548);
    msg.setSource(62501U);
    msg.setSourceEntity(254U);
    msg.setDestination(29399U);
    msg.setDestinationEntity(105U);
    msg.seq = 13443U;
    msg.sys_dst.assign("DWVWGSWFOPBDALVTGYBIIDUECVKNHUYJRFUEFHCLTLAXAEBNXQWGJDFDJAZPLNYVTTIZJOOSXLMFINKPANCDTBHPSNPHGENSUFJSLNCQIQKFGTWRGRRWXASQLYOROKRCMWWCHPOHJJYUELDVFQMBLGITSACXHRVLGNRKDMQB");
    msg.flags = 239U;
    const signed char tmp_msg_0[] = {-31, -43, -103, -100, -3, -60, -81, 20, -65, 93, 114, 106, 17, 48, 104, -19, 34, 39, 102, 29, -21, 24, -20, 90, 73, -46, -25, 36, -99, 15, -27, -76, 113, 110, -44, -4, 0, 66, -71, 14, -97, 117, -81, 38, -121, -106, 8, -58, 27, -58, 92, 3, -51, 72, 4, 121, 108, -59, -102, -13, 86, -12, -33, 43, 45, 116, -126, 75, 105, 83, -55, -104, -44, -62, -32, 126, -123, -27, -119, 101, 63, 82, 116, 89, -80, 67, -99, 25, -72, 84, -11, -19, 98, -75, 71, 109, 115, -101, -95, 115, -52, -39, -5, -15, 62, -23, 88, 42, 46, -13, 84, -99, 10, 0, 70, 41, 123, 111, 101, 38, 23, 102, 62, 48, -6, 69, 5, -11, -119, -100, -82, -17, -89, 65, 84, -11, -22, 2, 82, -84, 20, -92, -52, 105, -115, -104, 26, -95, -67, -5, 79, -115, -87, 58, -76, -72, -101, -31, -127, 85, 19, -84, 101, 11, -56, 59, 69, 38, -78, -42, -51, -128, 21, 14, -62, 124, -112, 0, -110, 125, -27, 97, 2, -122, 108, 35, -90, -118, 12, -20, 10, 98, -2, -18, 46, -26, -30, -61, 113, 70, 120, -109, 40, -7, -22, -12, -27, -102, 45, 45, 115, 4, 93, -100, -33, -9, -65, 95, -29, 72, -91, -22, -121, -90, 19, -53, 13, 9, -79, 72, 90, 30};
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
    msg.setTimeStamp(0.24349402885475502);
    msg.setSource(9246U);
    msg.setSourceEntity(84U);
    msg.setDestination(28239U);
    msg.setDestinationEntity(203U);
    msg.seq = 11104U;
    msg.sys_dst.assign("VAGPFVKJKCXVEDSRXVHZZSUUSPRFMXAICUAMNXYHNMUYPTJCTQKZPEODWQJMGWSEAOTOXWYSLJWNIFOSUWXRZKSGHMBOOLAVQLIRYDNRHTIKWHNEANZUSMATWFLIYBZCHIPKNXYIBDMRMOLXWQVCVQFHJDGRRPBLCDWEFRQFZMSFGGQHRVQOAJQO");
    msg.flags = 218U;
    const signed char tmp_msg_0[] = {97, 112, -128, -13, -58, -15, -92, 9, -105, 87, 25, -125, 85, 25, 104, -21, 126, 62, -87, -59, 94, 125, -21, 13, -124, 15, 23, -40, 5, -50, 95, -105, 103, 84, 1, 47, 38, -7, -44, 43, -55, -113, 125, 58, 105, -68, 61, -8, 2, -103, -92, 71, 25, 125, -23, -76, -119, -114, -97, -108, 66, -69, 62, -111, 60, -104, -111, 88, -88, 13, 55, -65, 120, -112, -71, -62, 119, -51, -23, 81, 45, -6, 75, 108, -120, -90, -24, -33, -84, 69, 25};
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
    msg.setTimeStamp(0.07901057835025738);
    msg.setSource(36363U);
    msg.setSourceEntity(18U);
    msg.setDestination(57971U);
    msg.setDestinationEntity(90U);
    msg.sys_src.assign("YQDCANBMJDLSZEAJPZTIHJVLAAHCVQHLMTVBYPGXCPRQRXUJEESQSGTWUSHURLFWMQPPIONIVVWKWVXTCRLAORJUUJZCFJAOJFHAMXGEQBBZTTSRZYRIXXIZDMBLQPWZPESSXBKKONNIFSZNNFTOMWCHOXQHMKNYAEDTDXQAUESEHKEZHYDRPBBFCKGUDMKBYTVLIOOHUYZFRQRDVDGWFGIUOL");
    msg.sys_dst.assign("JXDWQYIMPSPFOUABHCUHGWQMCAKWTRXLGNUGZFWWLQSOSISAORMEKSZVTJOARCNHPNHGAXXUDZIICIVIXH");
    msg.flags = 156U;
    const signed char tmp_msg_0[] = {49, 27, 54, 47, 50, 17, 16, -77, -32, -27, -100, 118, -24, -42, 122, 95, -112, -72, 70, 7, 110, 100, 95, -10, 59, 66, 61, -90, -91, -95, -23, 45, 55, -71, 10, -127, -38, -89, 109, -90, 18, 90, 1, -50, 104, 24, 121, 98, -45, -62, 102, -101, -48, 26, 38, -43, -92, 102, -114, 34, 85, -15, 113, -117, -27, -105, -48, -58, -89, 25, 10, 17, 11, -108, -27, -125, -14, -18, -49, 79, 53, -90, -55, 89, -12, 80, 34, -88, -60, 10, 7, -54, -14, -83, 32, -50, -102, -8, -69, 65, 0, 123, -70, 31, -4, 20, -38, 83, 74, -101, 74, 48, 111, 38, -28, 50, -115, 19, -27, -108, -13};
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
    msg.setTimeStamp(0.8912307443145806);
    msg.setSource(11836U);
    msg.setSourceEntity(155U);
    msg.setDestination(37630U);
    msg.setDestinationEntity(87U);
    msg.sys_src.assign("GUFLNZBIIBUDZWDPOXQWNYXERQYVOQOVABSHLMRYBZNBWWTPLOMINLTDSXCXCUUDPIVIGFRVQYYYUNMHXKTJGAEGVE");
    msg.sys_dst.assign("QNAQHNIBRRFUNMXVXWTOTHAFKVCRX");
    msg.flags = 247U;
    const signed char tmp_msg_0[] = {56, 49, -90, 60, 77, -35, 65, -13, -117, 11, 49, -6, 22, 56, -16, -38, 24, 119, 5, -44, -51, 112, -93, 24, -110, -105, 16, 97, 56, 39, 42, -112, -116, 99, 64, -70, -50, -60, 66, 83, -77, 125, 70, 83, -88, -6, 33, 81, -62, 88, 38, 57, 99};
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
    msg.setTimeStamp(0.6506898360019051);
    msg.setSource(7438U);
    msg.setSourceEntity(235U);
    msg.setDestination(8546U);
    msg.setDestinationEntity(231U);
    msg.sys_src.assign("YRJVMDXGWUCRPBDRJMLBXFFFOEHYPBCPLLUMTDJPNWGDNBYISQJEIUEDZNJZXPMVBLIFHIMUEZKBIOLZQYZKKNYKYXYQOGVNAWIQUDQYIGXVRCORHAAOOVFZVMZAVWLWWLPGWTQFABMEJAWSEHNUKXGKCHVSJTZKDMBKJGRHSIZVHTPWRJXVRTYTDOKFDTECHOFAOZFGCPMXMISKRLPDNQFGHT");
    msg.sys_dst.assign("QFJNEVSMEPXURAMWHWRSTDKARAIDPXDOACWKJUBIPXZVGLCBNSHCFOJAJYHBUKJNGRRXVBLFWXFLYQOKZ");
    msg.flags = 94U;
    const signed char tmp_msg_0[] = {-128, 89, -124, -4, 92, -91, -106, 32, -83, 24, -89, 92, -121, 4, -55, 56, 32, -14, 66, -4, 124, -60, -43, 44, -19, -47, 13, 120, 64, -6, 92, -22, 38, 28, -108, 17, -104, -81, 91, 96, -68, -85, -115, -71, 100, -1, 85, -55, 28, 53, -113, -36, -63, -107, 87, 88, -66, -2, -74, 68, 58, -73, -63, -101, -73, 84, 86, -5, -75, -8, 107, -85, -12, -12, -20, -124, -103, -31, 16, 20, -123, 70, -71, -44, -91, -80, 122, 56, -67, 103, 34, 49, 105, 121, -124, 77, -122, -75, 69, -7, -63, 103, 91, 27, 23, -57, -68, -12, 94, -16, -24, -21, 102, 105, -15, -71, -97, 88, -10, 118, -72, -50, -25, -105, -23, 55, 44, 14, -85, -77, 99, 61, 51, 98, -57, 34, -59, -5, 60, -70, -110, 17, -119, 97, 56, -57, -88, -29, -32, -78, -108, -98, 97, -49, -108, 0, 50, -61, 81, -49, 125, 84, -26, -13, 1, -122, -86, 12, 93, 42, -40, 100, -18, -55, -66, 65, -23, -93, 37, 99, -23, -87, -115, 76, 9, 21, 119, 51, 72, -86, 58, -89, -33, 42, -79, -70, -7, 30, 102, -114, 97, -19, -104, 46, -2, -117, 117, -99, -12, 92, 50, -119, 98, 15, -86, 22, 54, -32, -12, 121, -101, -13, -31, 33, 99, 97, -95, -16, 35, -44};
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
    msg.setTimeStamp(0.3806200325920214);
    msg.setSource(1344U);
    msg.setSourceEntity(83U);
    msg.setDestination(47884U);
    msg.setDestinationEntity(124U);
    msg.seq = 29134U;
    msg.value = 246U;
    msg.error.assign("BCXXZSZNYNNKXXPPJMPZR");

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
    msg.setTimeStamp(0.9308568468715811);
    msg.setSource(48419U);
    msg.setSourceEntity(88U);
    msg.setDestination(25927U);
    msg.setDestinationEntity(86U);
    msg.seq = 58010U;
    msg.value = 6U;
    msg.error.assign("XTRFKBIFYIQOFULGTSBXJDMTCPVFAAZUNRWVXJSPSMNUHQCKHRCXAFQSIKYGCJPEWNQLEZWNDRYEKAVIOKTANELKCTZLBAUPFXYEBYYWHITBDWYLJWSSGPDKACOQJNQUSUORVMDZJCAIARFZYHMHNWOZTXDPLXCCMWDQPYDVBUOVQRGRGEOXEPEMJDSILZLUUHZVTZUKEIPJMEBWBVGQZPTFBOGSYJ");

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
    msg.setTimeStamp(0.5798715486932078);
    msg.setSource(60949U);
    msg.setSourceEntity(65U);
    msg.setDestination(3479U);
    msg.setDestinationEntity(124U);
    msg.seq = 30110U;
    msg.value = 10U;
    msg.error.assign("REIVYYTHHNWXTIKQWTRCVQOPANDPVEUIMEGYBHFJAIWALOTXTRFTFGJYTGW");

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
    msg.setTimeStamp(0.12566570307035718);
    msg.setSource(12363U);
    msg.setSourceEntity(186U);
    msg.setDestination(10224U);
    msg.setDestinationEntity(186U);
    msg.seq = 19663U;
    msg.sys.assign("XNDONWQEQLLIGREEVTQTZZPUGLXPYQUTADEOWMEKRCLYPLGPKBRXBYZNCKGJBKJNDEWKI");
    msg.value = 0.9791807923679978;

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
    msg.setTimeStamp(0.4562053028426055);
    msg.setSource(23095U);
    msg.setSourceEntity(16U);
    msg.setDestination(52735U);
    msg.setDestinationEntity(245U);
    msg.seq = 4239U;
    msg.sys.assign("NXCSRGPASZVRISHSMQZDEBSYYRGNKVYCAJNQEKFJPRGBQTTGGJCQSKUKUUTZLUGTBLDJYDHJFJLMCUVPOLEVCQCNIKWABSUZBD");
    msg.value = 0.0735537175000659;

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
    msg.setTimeStamp(0.7450352361592165);
    msg.setSource(11555U);
    msg.setSourceEntity(149U);
    msg.setDestination(38184U);
    msg.setDestinationEntity(207U);
    msg.seq = 41019U;
    msg.sys.assign("TLNJVRGEOZKDBMEWYJIWDQUCMRNMSEQYXLRVMGSWFMJXMXUQMIYZDGJHEJWOTVLICBAPGAVOSCKKUZZOTIYWAIALQKBVTPFICVUYKUHNNCGHPBVUAQAASZARYWPDEJBRLNCNXGAYDVHHEZCXOYYBSFRDZAP");
    msg.value = 0.28560470303266294;

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
    msg.setTimeStamp(0.9173077119606395);
    msg.setSource(32868U);
    msg.setSourceEntity(163U);
    msg.setDestination(61634U);
    msg.setDestinationEntity(206U);
    msg.seq = 1871U;
    msg.sys_dst.assign("VNUVQPCZLSPARFJANHFBPOECOJROQYAYPVXIIQKHZNJXTDPXOBCHUSRNTNALGEJYDFQKFVZKMTQJSYTJGVOPXBHFEUBJXPCABCIKKLCOPYIMRDWOMSRHLZMHTBKXHZLHGRSRXWDBTUDOCUVLLRDZUG");
    msg.timeout = 0.3273446725609003;

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
    msg.setTimeStamp(0.3936648678510757);
    msg.setSource(51219U);
    msg.setSourceEntity(24U);
    msg.setDestination(25801U);
    msg.setDestinationEntity(138U);
    msg.seq = 44473U;
    msg.sys_dst.assign("LWXFMKUPJXSFYZIRFISBCOHBVDCTAPQEHZRTKUQOSLIZWQLOEWAGOAGIJFQXGJRFADSEIFRCROWPOSMFLTMAYLPBPYNJCNUEUDVUHAYDZRFHGWXWLNVJTSHBSRQGJGZQVJFAIVDSPQCWVEMZXNIBYMSBHGZLCX");
    msg.timeout = 0.8202883182993097;

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
    msg.setTimeStamp(0.15640154847411614);
    msg.setSource(22477U);
    msg.setSourceEntity(246U);
    msg.setDestination(4233U);
    msg.setDestinationEntity(54U);
    msg.seq = 1146U;
    msg.sys_dst.assign("LRIVSHFCWKTMYCLRRBVZSYOCIWYPEQHDUQTPMDQROL");
    msg.timeout = 0.6379698675637208;

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
    msg.setTimeStamp(0.11433373869729135);
    msg.setSource(64137U);
    msg.setSourceEntity(53U);
    msg.setDestination(56955U);
    msg.setDestinationEntity(62U);
    msg.action = 188U;
    msg.longain = 0.8282438357193356;
    msg.latgain = 0.05335826973827984;
    msg.bondthick = 1858790993U;
    msg.leadgain = 0.8628860499180733;
    msg.deconflgain = 0.22898747419569976;

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
    msg.setTimeStamp(0.2603741472917114);
    msg.setSource(4762U);
    msg.setSourceEntity(190U);
    msg.setDestination(38523U);
    msg.setDestinationEntity(131U);
    msg.action = 224U;
    msg.longain = 0.3127023956968342;
    msg.latgain = 0.3840529805924433;
    msg.bondthick = 1487359774U;
    msg.leadgain = 0.34538974457226546;
    msg.deconflgain = 0.32818826944643154;

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
    msg.setTimeStamp(0.23544916091694945);
    msg.setSource(26756U);
    msg.setSourceEntity(203U);
    msg.setDestination(43539U);
    msg.setDestinationEntity(58U);
    msg.action = 164U;
    msg.longain = 0.9886736980955496;
    msg.latgain = 0.2103026020282951;
    msg.bondthick = 3937767527U;
    msg.leadgain = 0.6522820366160836;
    msg.deconflgain = 0.8632464181579407;

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
    msg.setTimeStamp(0.6568287839048943);
    msg.setSource(39230U);
    msg.setSourceEntity(135U);
    msg.setDestination(32928U);
    msg.setDestinationEntity(215U);
    msg.err_mean = 0.4939352003373866;
    msg.dist_min_abs = 0.3017544556337357;
    msg.dist_min_mean = 0.08907344178090848;

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
    msg.setTimeStamp(0.3585073830675525);
    msg.setSource(24881U);
    msg.setSourceEntity(111U);
    msg.setDestination(44964U);
    msg.setDestinationEntity(96U);
    msg.err_mean = 0.15475874252963528;
    msg.dist_min_abs = 0.2350061196061809;
    msg.dist_min_mean = 0.4708570261468833;

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
    msg.setTimeStamp(0.36805128071960524);
    msg.setSource(57157U);
    msg.setSourceEntity(188U);
    msg.setDestination(44183U);
    msg.setDestinationEntity(43U);
    msg.err_mean = 0.9597924147254502;
    msg.dist_min_abs = 0.720902400036801;
    msg.dist_min_mean = 0.1423599573667529;

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
    msg.setTimeStamp(0.23890355840130761);
    msg.setSource(9952U);
    msg.setSourceEntity(101U);
    msg.setDestination(43986U);
    msg.setDestinationEntity(188U);
    msg.action = 54U;
    msg.lon_gain = 0.9503096448950618;
    msg.lat_gain = 0.28375650428545074;
    msg.bond_thick = 0.6769203090768562;
    msg.lead_gain = 0.40567511139428325;
    msg.deconfl_gain = 0.256514106685107;
    msg.accel_switch_gain = 0.7838423172088759;
    msg.safe_dist = 0.023459681515352382;
    msg.deconflict_offset = 0.16908290436765083;
    msg.accel_safe_margin = 0.06841283350750726;
    msg.accel_lim_x = 0.3715317017620483;

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
    msg.setTimeStamp(0.8385308993845045);
    msg.setSource(60959U);
    msg.setSourceEntity(184U);
    msg.setDestination(42812U);
    msg.setDestinationEntity(64U);
    msg.action = 142U;
    msg.lon_gain = 0.956880657352442;
    msg.lat_gain = 0.22792347983907257;
    msg.bond_thick = 0.03706767099260555;
    msg.lead_gain = 0.8783647378040721;
    msg.deconfl_gain = 0.45961209415484283;
    msg.accel_switch_gain = 0.048805737953297235;
    msg.safe_dist = 0.9547326863466136;
    msg.deconflict_offset = 0.92273607740236;
    msg.accel_safe_margin = 0.37713828188188925;
    msg.accel_lim_x = 0.4129450884910745;

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
    msg.setTimeStamp(0.9716571992656183);
    msg.setSource(63765U);
    msg.setSourceEntity(16U);
    msg.setDestination(61319U);
    msg.setDestinationEntity(191U);
    msg.action = 43U;
    msg.lon_gain = 0.41987584829100866;
    msg.lat_gain = 0.062263809221928756;
    msg.bond_thick = 0.9282332676293807;
    msg.lead_gain = 0.3648700323322265;
    msg.deconfl_gain = 0.952698819727976;
    msg.accel_switch_gain = 0.8654559108004674;
    msg.safe_dist = 0.28938123565680607;
    msg.deconflict_offset = 0.40695970209462695;
    msg.accel_safe_margin = 0.7247620395339878;
    msg.accel_lim_x = 0.3039253338123864;

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
    msg.setTimeStamp(0.47299027220898404);
    msg.setSource(55562U);
    msg.setSourceEntity(86U);
    msg.setDestination(40143U);
    msg.setDestinationEntity(17U);
    msg.type = 139U;
    msg.op = 83U;
    msg.err_mean = 0.15027388631386918;
    msg.dist_min_abs = 0.5015108856654187;
    msg.dist_min_mean = 0.23257464187813004;
    msg.roll_rate_mean = 0.39943589528133305;
    msg.time = 0.6328145669391056;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 126U;
    tmp_msg_0.lon_gain = 0.2280547139984489;
    tmp_msg_0.lat_gain = 0.34223707548914994;
    tmp_msg_0.bond_thick = 0.7157541859418936;
    tmp_msg_0.lead_gain = 0.8824083093861282;
    tmp_msg_0.deconfl_gain = 0.6597302800580371;
    tmp_msg_0.accel_switch_gain = 0.7382507738040716;
    tmp_msg_0.safe_dist = 0.1356968185896369;
    tmp_msg_0.deconflict_offset = 0.4250975626535829;
    tmp_msg_0.accel_safe_margin = 0.5292593646422945;
    tmp_msg_0.accel_lim_x = 0.14347130393622498;
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
    msg.setTimeStamp(0.884308338453187);
    msg.setSource(18357U);
    msg.setSourceEntity(188U);
    msg.setDestination(8924U);
    msg.setDestinationEntity(70U);
    msg.type = 20U;
    msg.op = 92U;
    msg.err_mean = 0.6961326237308589;
    msg.dist_min_abs = 0.5718663943620678;
    msg.dist_min_mean = 0.07251067398553124;
    msg.roll_rate_mean = 0.7321421976192328;
    msg.time = 0.7656125847860331;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 7U;
    tmp_msg_0.lon_gain = 0.39871244722378885;
    tmp_msg_0.lat_gain = 0.8341701285202168;
    tmp_msg_0.bond_thick = 0.3398908987107091;
    tmp_msg_0.lead_gain = 0.3152993606454012;
    tmp_msg_0.deconfl_gain = 0.42896418911872336;
    tmp_msg_0.accel_switch_gain = 0.8931207422212594;
    tmp_msg_0.safe_dist = 0.752113748756036;
    tmp_msg_0.deconflict_offset = 0.2453086918339511;
    tmp_msg_0.accel_safe_margin = 0.06690362546966022;
    tmp_msg_0.accel_lim_x = 0.3781172341320854;
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
    msg.setTimeStamp(0.31777255574652674);
    msg.setSource(40452U);
    msg.setSourceEntity(185U);
    msg.setDestination(15409U);
    msg.setDestinationEntity(142U);
    msg.type = 152U;
    msg.op = 89U;
    msg.err_mean = 0.864465859842199;
    msg.dist_min_abs = 0.6947334567178544;
    msg.dist_min_mean = 0.5023449143004286;
    msg.roll_rate_mean = 0.7615908525517298;
    msg.time = 0.5808831883842054;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 168U;
    tmp_msg_0.lon_gain = 0.7092783435160092;
    tmp_msg_0.lat_gain = 0.3349685138526993;
    tmp_msg_0.bond_thick = 0.8492090767366104;
    tmp_msg_0.lead_gain = 0.5897943542683433;
    tmp_msg_0.deconfl_gain = 0.29300660134124334;
    tmp_msg_0.accel_switch_gain = 0.9858219072851995;
    tmp_msg_0.safe_dist = 0.13936814124731745;
    tmp_msg_0.deconflict_offset = 0.4681999313726364;
    tmp_msg_0.accel_safe_margin = 0.6961486131492242;
    tmp_msg_0.accel_lim_x = 0.4871404205607003;
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
    msg.setTimeStamp(0.5258831791772068);
    msg.setSource(46784U);
    msg.setSourceEntity(50U);
    msg.setDestination(34563U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.676234134456759;
    msg.lon = 0.34840969733467964;
    msg.eta = 766753157U;
    msg.duration = 15193U;

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
    msg.setTimeStamp(0.38791166694780843);
    msg.setSource(20533U);
    msg.setSourceEntity(62U);
    msg.setDestination(26974U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.8185183887216387;
    msg.lon = 0.6328372489464261;
    msg.eta = 2544047966U;
    msg.duration = 27378U;

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
    msg.setTimeStamp(0.23072993353296423);
    msg.setSource(3625U);
    msg.setSourceEntity(204U);
    msg.setDestination(36617U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.8080523275972666;
    msg.lon = 0.5283865918117159;
    msg.eta = 3691343241U;
    msg.duration = 23611U;

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
    msg.setTimeStamp(0.819399276769196);
    msg.setSource(3958U);
    msg.setSourceEntity(242U);
    msg.setDestination(64132U);
    msg.setDestinationEntity(20U);
    msg.plan_id = 4467U;

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
    msg.setTimeStamp(0.6998904821979984);
    msg.setSource(42241U);
    msg.setSourceEntity(150U);
    msg.setDestination(12387U);
    msg.setDestinationEntity(156U);
    msg.plan_id = 24216U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9406918511756004;
    tmp_msg_0.lon = 0.04417541576698658;
    tmp_msg_0.eta = 2530816908U;
    tmp_msg_0.duration = 64763U;
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
    msg.setTimeStamp(0.44797551805879277);
    msg.setSource(35178U);
    msg.setSourceEntity(217U);
    msg.setDestination(21137U);
    msg.setDestinationEntity(240U);
    msg.plan_id = 27540U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.3806406107175576;
    tmp_msg_0.lon = 0.6318475765850202;
    tmp_msg_0.eta = 3948186680U;
    tmp_msg_0.duration = 9623U;
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
    msg.setTimeStamp(0.3403275852048918);
    msg.setSource(22457U);
    msg.setSourceEntity(53U);
    msg.setDestination(46051U);
    msg.setDestinationEntity(137U);
    msg.type = 34U;
    msg.command = 43U;
    msg.settings.assign("EFZTADPJQENZCUMLLVUOJDFWHEHFRVHTCEDWFTQYPWRCMYNDSFWLQJDAYHNKCCGUJUXCRTVDINXGWPRZDCJAWFEJJASQGLDFIVSRHWPQKIKHAUUOOLZVZGSTXDINFKVBGXGBPFSBJXVEIPIBXEHSPUBESLRMMOQHBENMTTYGZXOTKYBYQUQHGRITPUKPVWAMBMMDXWHARZELAMNZLSRKNCBMXOXOSZLBGOOYGTAKUPINJNLIYYYKV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 16892U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UJSNDOJHQESICIWGISXNPHSNCHTCIFWZOHZWGCBEQICXEDSPELVXXRFKYMCDSKPDFYZZOLHXXGPOFDJHOBIZNYRQWPZNTHWAGRQLAJYDQNBMTWJAPOPGHMLYUWFHNUAZGUJUBEHUVDTRIGVKBRBPJFOZKBLMJXAYUKVFMACIKWEQLJGTMAAITURTCMPNKOMVYXWUDFRCFTJKVXQVTBXKEQESDLP");

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
    msg.setTimeStamp(0.020392759125922533);
    msg.setSource(10538U);
    msg.setSourceEntity(70U);
    msg.setDestination(52460U);
    msg.setDestinationEntity(179U);
    msg.type = 213U;
    msg.command = 70U;
    msg.settings.assign("XYOCSMYRPVFMOSWPCIQROQUFUMKTBNQPESGVRMYRHBNENTEGSTLNKRXSWTVETPUAXEBVYDALLHIZYISCMWSQRFACWHHABAROMFNLLJQPLZIGGWMVEFEVKYPEDGPUPWMOG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5412U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AAHKYHCWBKKCGCIDKYFCHDITIDNWIHVJFXDSENUESQT");

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
    msg.setTimeStamp(0.3612613157067933);
    msg.setSource(30434U);
    msg.setSourceEntity(184U);
    msg.setDestination(8694U);
    msg.setDestinationEntity(168U);
    msg.type = 187U;
    msg.command = 168U;
    msg.settings.assign("LYWMNOTQPSUJBVNITMXRMEYQYHMDHIITLKQXSYPDWUSXWJQREPAJRKCPGTJCFFKDKWOUIDSJMRBRNXUXRVAZRAWKJVMHTPQLI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 34706U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.42398760048250006;
    tmp_tmp_msg_0_0.lon = 0.6538739606896685;
    tmp_tmp_msg_0_0.eta = 2573907107U;
    tmp_tmp_msg_0_0.duration = 64158U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FYZMBGNKVAZQPAZEOYRBAIVOHPORNZGOVKUCGNIUDPUBTIAJBSCCVUJFYJZVRSBSTJFKJMHQWSAOHAEYUQIBZTWNQYJEKWZDTWHVPGLUGITPDGFEKIVMJYBXYPFPYVHLXBZTMRDFWEQXGLFGXGKLHLIC");

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
    msg.setTimeStamp(0.06646726083625987);
    msg.setSource(30581U);
    msg.setSourceEntity(42U);
    msg.setDestination(40537U);
    msg.setDestinationEntity(3U);
    msg.state = 130U;
    msg.plan_id = 13513U;
    msg.wpt_id = 74U;
    msg.settings_chk = 5268U;

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
    msg.setTimeStamp(0.49460605094046195);
    msg.setSource(5417U);
    msg.setSourceEntity(59U);
    msg.setDestination(32800U);
    msg.setDestinationEntity(154U);
    msg.state = 45U;
    msg.plan_id = 26159U;
    msg.wpt_id = 166U;
    msg.settings_chk = 52683U;

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
    msg.setTimeStamp(0.9392801329169498);
    msg.setSource(18425U);
    msg.setSourceEntity(116U);
    msg.setDestination(9045U);
    msg.setDestinationEntity(129U);
    msg.state = 213U;
    msg.plan_id = 4734U;
    msg.wpt_id = 212U;
    msg.settings_chk = 47593U;

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
    msg.setTimeStamp(0.70762331716223);
    msg.setSource(57241U);
    msg.setSourceEntity(84U);
    msg.setDestination(16378U);
    msg.setDestinationEntity(89U);
    msg.uid = 57U;
    msg.frag_number = 251U;
    msg.num_frags = 14U;
    const signed char tmp_msg_0[] = {70, 116, -20, -121, 34, 70, -5, 3, 25, 122, -80, 25, -54, -104, 1, 48, -88, 119, 55, -11, -87, -28, 63, 61, -20, 41, -72, -19, -5, 26, -69, 62, -128, -49, -98, -35, 14, 108, 26, 55, 124, 58, 63, -107, 48, -46, -48, -105, -39, -81, 118, 112, 124, 89, 2, -112, 49, -55, -88, -95, -25, -70, 104, -66, -48, 70, -74, -80, 110, 69, 68, -123, 90, 115, 109, 4, -119, 97, 109, 29, -14, -5, -38, 52, -113, -94, 35, 49, -5, -17, -110, 83, -96, 120, 70, -83, -1, 23, 31, 124};
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
    msg.setTimeStamp(0.6943446789857307);
    msg.setSource(42071U);
    msg.setSourceEntity(161U);
    msg.setDestination(60048U);
    msg.setDestinationEntity(33U);
    msg.uid = 0U;
    msg.frag_number = 65U;
    msg.num_frags = 240U;
    const signed char tmp_msg_0[] = {92, -85, 14, 86, -26, -53, 119, -94, 50, -16, 41, -89, -111, 124, -24, -117, 60, 33, -33, -50, 3, 97, 75, 24, 125, 1, 25, 38, 6, -76, 18, -111, -8, -40, 21, 63, 58, 55, -86, -75, -90, 96, -60, 78, 31, 41, 28, 74, 87, 32, 26, -78, 1, -67, -36, -88, -124, -103, 35, 27, 59, -116, 114, -102, -55, -89, -76, -91, -46, -17, -97, 31, 1, -112, -5, -85, 31, 1, -74, -64, -118, 91, -20, 122, -80, -49, 122, 118, 100, 50, 59, 38, -20, -62, 76, -5, 62, 93, 116, 24, -69, 125, -107, 31, -56, 87, 122, -7, -49, -123, 32, 120, -8, 31, 1};
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
    msg.setTimeStamp(0.4739406452055779);
    msg.setSource(49801U);
    msg.setSourceEntity(82U);
    msg.setDestination(46340U);
    msg.setDestinationEntity(158U);
    msg.uid = 27U;
    msg.frag_number = 201U;
    msg.num_frags = 215U;
    const signed char tmp_msg_0[] = {-78, 122, -124, -123, 15, -86, -111, -61, -112, 31, -113, -117, 42, 36, -13, 116, -45, 14, 104, -16, -111, 33, 115, 76, -54, 56, 54, -119, 115, -41, -30, 16, -79, -62, -31, -90, 37, 5, -84, -8, 103, -17, -25, -99, 52, 124, -77, -95, -24, 121, -80, 4, 111, -76, 105, 50, -79, 13, 118, 15, 65, 119, 29, -32, 52, -71, 114, -76, -95, 117, -92, 120, 79, -19, 40, 91, -126, 75, -112, 119, -104, 66, -101, 45, 123, -120, -63, 37, -83, -107, -96, -97, -12, 18, 76, -72, 33, -23, 47, -31, 84, 2, 36, -25, 22, 94, 125, 86, -29, 43, -60, -10, -65, -105, -1, 71, -89, -74, 22, 81, 62, 34, 85, 115, 35, 66, -82, 29, 24, -74, 120, 58, 109, 48, 59, 75, 23, 26, 37, 91, -11, 59, 42, -83, -88, 44, 32, 17, -100, -84, 71, 12, 65, -52, -123, 74, 112, -22, 58, 66, -69, -123, -111, 120, 23, 90, -66, 47, 50, 51, -87, -69, -62, -102, 43, -12, 89, 67, 81, -103, 103, 53, 29, -109, 88, 50, 78, -72, 15, -98, -73, -47, -20, -35, 20, 91, 118, 85, -59, -111, 80, 41, 77, -6, 118, 96, -16, 95, 100, 76, 16, -96, 48, -30, 105, 25, -21, 8, -88, -93, -44};
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
    msg.setTimeStamp(0.8368260778924975);
    msg.setSource(56548U);
    msg.setSourceEntity(147U);
    msg.setDestination(35383U);
    msg.setDestinationEntity(145U);
    msg.content_type.assign("UEZXYOETQRYBLNQUENOWWWIXRFD");
    const signed char tmp_msg_0[] = {-63, -66, 18, -71, -103, 60, -19, 93, 42, 59, -65, -107, 52, 55, -47, 11, 24, -91, -82, 35, -112, 65, 29, -103, 80, -77, -6, 107, 3, -63, 0, -34, -124, 123, -59, -4, 125, -51, -10, -22, 42, -87, -33, -21, -120, -53, 115, 73, -36, -118, 3, 125, -114, -52, -8, -75, 116, 46, 81, 122, -15, -97, 69, 38, 99, 49, -75, -1, -5, -94, 43, -23, -128, -1, 33, -63, 85, -105, -110, 56, -83, -25, -100, 18, 42, 71, 69, 115, -24, 88, 105, -19, -73, 117, -119, 44, -5, -77, -48, 53, -45, 78, -30, 74, 103, -61, -120, -24, -3, 72, -98, -78, -25, 103, 11, 39, -35, 124, -68, 0, -13, -107, 103, -124, 111, -96, 77, -47, -24, -77, 123, 31, -102, -17, -13, -43, -48, 57, -47, 51, -104, 57, -83, 91, 24, -78, 88, -87, -58, -48, -66, 79, -25, 41, 46, -46, 106, 123, -87, -6, 73, -7, -47, 110, -59, -100, 112, 95, -37, 43, -45, -2, -90, 95, 41, 3, -114, -53, 27, 31, -39, -30, 46, -32, -92, -73, 113, -52, 29};
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
    msg.setTimeStamp(0.29365483222695765);
    msg.setSource(59846U);
    msg.setSourceEntity(85U);
    msg.setDestination(40999U);
    msg.setDestinationEntity(248U);
    msg.content_type.assign("EPLNNQQLFHRQ");
    const signed char tmp_msg_0[] = {-69, 62, 12, -106, 15, 36, -109, -13, 50, 37, -46, 96, -80, 83, 110, -101, -12, -41, -98, 50, 115, -7, 83, -45, -122, 81, 12, 34, -83, -36, -99, 63, -23, 124, 36, 97, 99, -58, 123, -2, -66, -69, 92, 26, -86, -106, 22, -28, 2, -12, -97, -3, 76, 41, 63, 57, -26, 3, 59, -128, 29, -27, 84, 43, 22, 109, -23, -88, -90, -25, 32, -66, 111, 94, 94, -22, -107, -73, 12, -50, 31, 58, -91, 67, 27, -11, 12, -101, 68, 70, 104, 68, -79, 27, -117, 106, 64, 24, 118, -83, -68, -89, 12, 7, -123, 20, -127, -31, -107, 98, 102, 11, 118, -63, 4, 92, -46, -65, 12, -47, 73, -118, 92, -68, 112, -104, -6, 14, 68, -46, -104, -33, -37, 121, 64, 46, -110, -67, -75, 38, -30, -74, -22, 112, -58, 27, -52, 97, 39, 35, -90, -11, -85, -20, -70, 51, -88, -15, 66, -3, 104, -90, -115, -60, -112, 81, 86, -117, 74, -76, 30, 51, -107, 40, 62, -14, -47, -34, -40, -90, -58, -59, 68, 41, 25, 15, 50, -38, 113, -121, -103, 71, 23, -94, -106, 114, -73, -119, 1, -126, -42, 32, 49, 90, -128, 63, 89, -95, -66, 8, 31, -41, 43, 31, -67, -87, 29, 17, -16, 110, -31, 96, -21, 28, 123, -81, 70, 10, -15, -108, -127, 93, -5, -100, 48, 7, -92, 38, -91, -60, 121, -79, -35, 28, -106};
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
    msg.setTimeStamp(0.7046022713317183);
    msg.setSource(27858U);
    msg.setSourceEntity(192U);
    msg.setDestination(57677U);
    msg.setDestinationEntity(252U);
    msg.content_type.assign("JDTXCSQUSMBNJZAKFXCSWPYLAMDOPVKTAJTGMAVRPATXDGBEKMRVXOQZTCIFRDGOXCHAPTSFHOQJUGKNAZXJNXPRYUQLQHUSTQFVFIIBBBWOQYNATBIFCMKCSEIGOUMKZG");
    const signed char tmp_msg_0[] = {49, 108, -29, -33, -17, 60, 79, -59, -18, -51, 34, -127, -122, -102, -26, -85, -9, 112, 40, -101, 18, 10, 46, 125, 98, -11, 67, 81, 69, -118, 40, 46, 121, -33, 18, 65, -112, 82, 92, 43, -122, -36, -102, -64, -33, -69, 62, 56, 10, -122, -2, -85, 113, -81, -60, 35, -93, -101, -76, -68, 58, 1, 111, 11, 124, -96, 7, 116, -62, -57, 61, -118, 96, -63, -113, 88, -114, 109, -9, 28, -78, 63, -38, -33, -42, 59, -79, 22, 126, -60, -94, 83, -68, 103, 55, -86, -123, -26, -8, -6, 40, -99, -118, -121, 110, -59, 11, 125, -99, 113, -37, 77, 68, 102, 9, 32, -16, -74, 60, 30, -106, -119, 33, 39, 101, 10, -101, -31, -80, -60, -10, -113, -40, 19, 80, 18, -23, 6, -33, 65, -67, 40, -68, -72, -93, 119, 108, 17, -117, 21, -64, -102, -118, -39, 87, -35, -110, -58, -78, 100, -90, 65, 102, 56, 110, 62, 35, -67, 99, -114, -108, -25, 125, -110, 102, -99, -127, 68, -31, 62, -80, -101, -114, -98, 11, -118, 20, -25, 121, -75, -119, -36, 16, 67, 55, 88, -1, 112, -87, -92, 122, 72, -85, 48, -84, -86, 121, -22, 105, -88, -95, -15, 75, -37, -32, -6};
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
    msg.setTimeStamp(0.8291315408471708);
    msg.setSource(12977U);
    msg.setSourceEntity(229U);
    msg.setDestination(47261U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.5176501927574952);
    msg.setSource(35864U);
    msg.setSourceEntity(209U);
    msg.setDestination(46018U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.7832720842561752);
    msg.setSource(35731U);
    msg.setSourceEntity(77U);
    msg.setDestination(59220U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.9246622500058225);
    msg.setSource(22812U);
    msg.setSourceEntity(43U);
    msg.setDestination(33005U);
    msg.setDestinationEntity(39U);
    msg.target = 64788U;
    msg.bearing = 0.6107956493761776;
    msg.elevation = 0.30606013426241585;

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
    msg.setTimeStamp(0.08439105541347303);
    msg.setSource(63750U);
    msg.setSourceEntity(168U);
    msg.setDestination(23239U);
    msg.setDestinationEntity(1U);
    msg.target = 33080U;
    msg.bearing = 0.32964145319909877;
    msg.elevation = 0.7037079739259103;

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
    msg.setTimeStamp(0.8678509254479568);
    msg.setSource(47925U);
    msg.setSourceEntity(83U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(162U);
    msg.target = 64792U;
    msg.bearing = 0.29941752991730974;
    msg.elevation = 0.7173917178762339;

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
    msg.setTimeStamp(0.4105286476675375);
    msg.setSource(1902U);
    msg.setSourceEntity(225U);
    msg.setDestination(59122U);
    msg.setDestinationEntity(42U);
    msg.target = 50931U;
    msg.x = 0.22803898692997926;
    msg.y = 0.24342071280647326;
    msg.z = 0.6414439393092608;

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
    msg.setTimeStamp(0.2656390856647286);
    msg.setSource(2520U);
    msg.setSourceEntity(59U);
    msg.setDestination(57054U);
    msg.setDestinationEntity(100U);
    msg.target = 1792U;
    msg.x = 0.23547717614761143;
    msg.y = 0.2990056382817281;
    msg.z = 0.35559245457473354;

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
    msg.setTimeStamp(0.5887934518499309);
    msg.setSource(13574U);
    msg.setSourceEntity(124U);
    msg.setDestination(57675U);
    msg.setDestinationEntity(210U);
    msg.target = 8325U;
    msg.x = 0.701217994405208;
    msg.y = 0.25323926823408016;
    msg.z = 0.05982246924587109;

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
    msg.setTimeStamp(0.9517607707181722);
    msg.setSource(53323U);
    msg.setSourceEntity(219U);
    msg.setDestination(26597U);
    msg.setDestinationEntity(148U);
    msg.target = 1205U;
    msg.lat = 0.37669075181711453;
    msg.lon = 0.4615297914008887;
    msg.z_units = 101U;
    msg.z = 0.7497400238921587;

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
    msg.setTimeStamp(0.8690815228724872);
    msg.setSource(47190U);
    msg.setSourceEntity(178U);
    msg.setDestination(5346U);
    msg.setDestinationEntity(235U);
    msg.target = 29427U;
    msg.lat = 0.983993320743034;
    msg.lon = 0.3638694988815252;
    msg.z_units = 17U;
    msg.z = 0.4083568068731579;

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
    msg.setTimeStamp(0.09171203079784673);
    msg.setSource(41107U);
    msg.setSourceEntity(245U);
    msg.setDestination(50850U);
    msg.setDestinationEntity(122U);
    msg.target = 43249U;
    msg.lat = 0.5766645591095916;
    msg.lon = 0.3779175030002021;
    msg.z_units = 4U;
    msg.z = 0.07237377693624147;

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
    msg.setTimeStamp(0.19311895107092958);
    msg.setSource(20795U);
    msg.setSourceEntity(106U);
    msg.setDestination(8162U);
    msg.setDestinationEntity(208U);
    msg.locale.assign("KVZOPWEHPVUDMPNYCNZ");
    const signed char tmp_msg_0[] = {-14, -33, 89, -64, 66, -101, 13, -73, 124, 5, -93, 46, -109, 95, -29, 51, -6, 56, 8, 121, 37, 34, 125, -64, 23, -37, -91, -47, -51, -21, -19, -66, 81, 96, -83, 36, 101, -108, 18, 94, -112, -87, 54, -111, -3, -100, -83, -56, 105, -33, -128, 76, 107, 4, 71, -73, 112, -84, -43, 61, -45, 20, -92, -96, -81, -104, 15, 0, 6, -65, -88, -11, -2, 114, -51, 31, 120, 60, 88, -81, -100, -118, -64, -51, -71, 67, 118, 74, -89, 9, -14, 110, 35, 26, -88, 49, -56, 66, 64, 121, -128, -69, 17, 109, 48, -33, 37, -50, -67, 84, 36, 84, 4, 0, -29, 21, -84, -124, 5, -55, 88, 77, 115, 3, 56, -111, -128, -10, -53, -57, 76, -49, -112, -35, -95, 59, 102, -68, 93, -20, -45, -60, 10, 52, 77};
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
    msg.setTimeStamp(0.6575782188648938);
    msg.setSource(29263U);
    msg.setSourceEntity(44U);
    msg.setDestination(62329U);
    msg.setDestinationEntity(2U);
    msg.locale.assign("HKVSDELTIHWISVWWTQHKJAKXAUFUJBDOOYDNHROBUJFCKWROOAOHSESJNIUQAQPEVMUYLDKWZTYGXGCJEMMRQTQAFSHODMPSZUUZOIMOZKVWBNXDGIFANJVQPYPRTBXZXZVBCZQKITRMMWWLCWLWCUKEGYRIDGHNBUYTFBXPKYHFRAADMLDXHRJJFNYPSEARPNKATMEOYPBFEZECVLCNLEIGBHYGVVSGTZBGLLXCNSVDGNJQTCMJFQ");
    const signed char tmp_msg_0[] = {26, -78, 115, 107, -43, 38, -7, -36, 11, 85, -29, -72, 81, -119, -88, 57, -34, 113, -48, 44, 9, -30, -29, 39, -76, -20, 51, 53, 56, 24, -24, 92, 6, -49, -96, 99, -104, -17, -34, -128, 39, 101, -79, 60, 38, 35, 114, 115, 97, -94, -58, -59, -7, 44, -46, -18, 33, -61, -118, 99, -52, 86, -120, -10, 52, -5, -73, -103, -21, 60, 69, -116, 90, 6, -69, -50, -16, -113, -42, -73, 63, 80, 12, -92, -64, -37, -89, -16, -90, 61, -40, 74, 104, 93, 53, -38, -21, 15, 34, -34, -107, -3, -90, -112, 46, -110, 16, -91, 118, 60, 42, -15, -66, -86, -102, 113, -89, 110, -108, 32, -94, 88, -51, -34, 4, 94, -12, 86, 25, 18, 17, -19, 11, 17, 77, -95, -68, -4, 100, 13, 36, -11, 71, -26, -6, -50, -76, 30, 105, 100};
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
    msg.setTimeStamp(0.045403744804516255);
    msg.setSource(347U);
    msg.setSourceEntity(71U);
    msg.setDestination(26213U);
    msg.setDestinationEntity(117U);
    msg.locale.assign("HPHDVASXXP");
    const signed char tmp_msg_0[] = {-66, 101, -103, -109, -14, -82, -46, -74, 24, 95, -36, 67, -30, -91, -40, -97, -5, 77, -87, -59, -45, -44, -125, -68};
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
    msg.setTimeStamp(0.10022905089325118);
    msg.setSource(23405U);
    msg.setSourceEntity(24U);
    msg.setDestination(39662U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.11737961668297092);
    msg.setSource(61381U);
    msg.setSourceEntity(89U);
    msg.setDestination(8433U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.7372514183785859);
    msg.setSource(35834U);
    msg.setSourceEntity(132U);
    msg.setDestination(2375U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.43118722664178033);
    msg.setSource(40799U);
    msg.setSourceEntity(21U);
    msg.setDestination(10277U);
    msg.setDestinationEntity(229U);
    msg.camid = 137U;
    msg.x = 20160U;
    msg.y = 47744U;

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
    msg.setTimeStamp(0.3936920381203687);
    msg.setSource(21766U);
    msg.setSourceEntity(119U);
    msg.setDestination(53078U);
    msg.setDestinationEntity(133U);
    msg.camid = 138U;
    msg.x = 44945U;
    msg.y = 63959U;

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
    msg.setTimeStamp(0.9831291619760492);
    msg.setSource(113U);
    msg.setSourceEntity(42U);
    msg.setDestination(23694U);
    msg.setDestinationEntity(108U);
    msg.camid = 203U;
    msg.x = 59312U;
    msg.y = 13365U;

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
    msg.setTimeStamp(0.6930303799132557);
    msg.setSource(57602U);
    msg.setSourceEntity(85U);
    msg.setDestination(16306U);
    msg.setDestinationEntity(174U);
    msg.camid = 163U;
    msg.x = 47320U;
    msg.y = 40213U;

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
    msg.setTimeStamp(0.9478835125489055);
    msg.setSource(50013U);
    msg.setSourceEntity(35U);
    msg.setDestination(52060U);
    msg.setDestinationEntity(92U);
    msg.camid = 70U;
    msg.x = 28621U;
    msg.y = 62002U;

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
    msg.setTimeStamp(0.4350916550839359);
    msg.setSource(563U);
    msg.setSourceEntity(147U);
    msg.setDestination(10351U);
    msg.setDestinationEntity(54U);
    msg.camid = 92U;
    msg.x = 61288U;
    msg.y = 49967U;

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
    msg.setTimeStamp(0.7730056939925176);
    msg.setSource(65492U);
    msg.setSourceEntity(175U);
    msg.setDestination(9931U);
    msg.setDestinationEntity(51U);
    msg.tracking = 55U;
    msg.lat = 0.5046873318286121;
    msg.lon = 0.06603812148214128;
    msg.x = 0.9885778498074845;
    msg.y = 0.8578755260740804;
    msg.z = 0.9310468181630127;

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
    msg.setTimeStamp(0.07784766984263525);
    msg.setSource(29736U);
    msg.setSourceEntity(16U);
    msg.setDestination(28180U);
    msg.setDestinationEntity(3U);
    msg.tracking = 212U;
    msg.lat = 0.24460346957808332;
    msg.lon = 0.6449097807071948;
    msg.x = 0.16047142084981858;
    msg.y = 0.09534316341501858;
    msg.z = 0.2672953339953361;

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
    msg.setTimeStamp(0.4683950777285846);
    msg.setSource(8094U);
    msg.setSourceEntity(201U);
    msg.setDestination(7701U);
    msg.setDestinationEntity(207U);
    msg.tracking = 70U;
    msg.lat = 0.48521101319047666;
    msg.lon = 0.14712384709794346;
    msg.x = 0.6071136022042987;
    msg.y = 0.5670143430860622;
    msg.z = 0.6230205328167524;

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
    msg.setTimeStamp(0.2755792165403721);
    msg.setSource(64777U);
    msg.setSourceEntity(171U);
    msg.setDestination(34698U);
    msg.setDestinationEntity(63U);
    msg.target.assign("SOHOSIVINRHQFMZHXKZGBIWAWWEUJXLTSNHBYUEQNNCXMWRNGAFRSAIAMBRUHLEHAMXBLHYYNFKKEMIOFPMCJNTJKEPUYGKVXFSTCNXJAHDGJOODPMWFRTSCZYTZCQXKNTPLKOYQGFSHCFDZBBXNYWMUATDPOQVFPTJJEZOMJCWMQPRDLVCZCKGSBDZIYQIYLUFOBRQAUKPDXEVSGLDVVEPJW");
    msg.lbearing = 0.9589441732881282;
    msg.lelevation = 0.48102390721158206;
    msg.bearing = 0.32745706947978215;
    msg.elevation = 0.06814073099423712;
    msg.phi = 0.15900647422372938;
    msg.theta = 0.7234126599736785;
    msg.psi = 0.9857147609939068;
    msg.accuracy = 0.6943521946581592;

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
    msg.setTimeStamp(0.1536484893303326);
    msg.setSource(6308U);
    msg.setSourceEntity(10U);
    msg.setDestination(44793U);
    msg.setDestinationEntity(182U);
    msg.target.assign("YYKTDXVHMYENWWVPVUKISDBPDLPATFGEJCHKCCWEQICWMFHCESZZXHCNUTTUVJQWJLGXNZMIDMKFPDWRIODRQOLNMFNKDVBZCEHLIADNGUWGNGASAHOZXGFXKQOBXDIBUQOBULIBEOJBJKCJZSFJSG");
    msg.lbearing = 0.8709132418453669;
    msg.lelevation = 0.9973171871455715;
    msg.bearing = 0.043130907466124024;
    msg.elevation = 0.03235513362165465;
    msg.phi = 0.5620201607455655;
    msg.theta = 0.16118420028035707;
    msg.psi = 0.059768370707790064;
    msg.accuracy = 0.2032046398327234;

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
    msg.setTimeStamp(0.8589930854196511);
    msg.setSource(53419U);
    msg.setSourceEntity(81U);
    msg.setDestination(56726U);
    msg.setDestinationEntity(107U);
    msg.target.assign("TGAUVNPYYYOAATVEWJOHKVKKLERSZIVWUDPYXCLHBGDTPHKYKDQOEDOEDBNMELSRIRFZAINDNCIGWBMIVRVZBGNMHXUTJCLHEZWZOQXUUQFWXTU");
    msg.lbearing = 0.48750784248266543;
    msg.lelevation = 0.2449698113086598;
    msg.bearing = 0.33283048248792024;
    msg.elevation = 0.5265525686163411;
    msg.phi = 0.033424523242313375;
    msg.theta = 0.14971234711357284;
    msg.psi = 0.49769173058264915;
    msg.accuracy = 0.06174393232008624;

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
    msg.setTimeStamp(0.9492357114246035);
    msg.setSource(5027U);
    msg.setSourceEntity(230U);
    msg.setDestination(17481U);
    msg.setDestinationEntity(102U);
    msg.target.assign("AEHLLHNYNTNCTEINSUFPSEKLUPMOXZWNDSYTYILVLXRKIKGRORZPUMZBHLVCEARUGMZPEHTBDECZGVHKFWPRWQVQCCWCVWYXJQOZXFUQBVPVHOJYPBSWPGQBUTKSLWHJMIJKAJADNSARKMSXZBLWOGIAGFYPVMSIBNNDYLADOMZDURFUJBJUCOOYT");
    msg.x = 0.15891708648623648;
    msg.y = 0.20408868943965874;
    msg.z = 0.4027171595225937;
    msg.n = 0.5519099439060023;
    msg.e = 0.8103622798887694;
    msg.d = 0.486014168320828;
    msg.phi = 0.5004916870468583;
    msg.theta = 0.637447816784382;
    msg.psi = 0.05345090859654367;
    msg.accuracy = 0.26462501950957884;

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
    msg.setTimeStamp(0.7408548454895776);
    msg.setSource(28466U);
    msg.setSourceEntity(97U);
    msg.setDestination(9584U);
    msg.setDestinationEntity(20U);
    msg.target.assign("UELXDNEXJKQTVRXPFRSWFUDTVSVPBEHRHTMCAKCIXBVDCXPRSXRHLAFSLNVOSBGTOHWOSUFIFBYKPPCQVUONYBWCUZHDJDWYZUBKLLTGDNNCPQKHKQHOOLAQBNSQYHFTSOZEAZGJKEFNZQMAWVFPIMAMCIWDYVUOOTMOJHNGMLSJBPIBNZJSJTMQRWZTGYEKGXVCVYN");
    msg.x = 0.4939193482265092;
    msg.y = 0.021245947273457855;
    msg.z = 0.45046409890425043;
    msg.n = 0.632841690278728;
    msg.e = 0.7048717783227891;
    msg.d = 0.25293687223471895;
    msg.phi = 0.7742258877047986;
    msg.theta = 0.7970105772988744;
    msg.psi = 0.7884919096293653;
    msg.accuracy = 0.04221709514547545;

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
    msg.setTimeStamp(0.8729830238102229);
    msg.setSource(60446U);
    msg.setSourceEntity(222U);
    msg.setDestination(41954U);
    msg.setDestinationEntity(245U);
    msg.target.assign("AGYLSRPKGQCDECFQEHESWMGGXRLAKZVYWMHHUVHGKBJJCWYPRXYOQMJAFOCRZBDUOPUSXFVLSXKMUAQBCWLNPVDCJWYSYANXLQNUHOIQAJVIWPIIMSYNCQDGFGFTSTTCZOFFEVGNOYHVIELTEBKCBHTIBIQTT");
    msg.x = 0.4770199851020829;
    msg.y = 0.13267039702383943;
    msg.z = 0.011979834299977732;
    msg.n = 0.5585799173804035;
    msg.e = 0.4790559351578082;
    msg.d = 0.10188193353979902;
    msg.phi = 0.25212412202554946;
    msg.theta = 0.7617093085823903;
    msg.psi = 0.7673094890976054;
    msg.accuracy = 0.7863682612811335;

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
    msg.setTimeStamp(0.7527234860281233);
    msg.setSource(14303U);
    msg.setSourceEntity(55U);
    msg.setDestination(38013U);
    msg.setDestinationEntity(104U);
    msg.target.assign("PGZDMASQCWTVKVNCEIRBKZMLINBGGDHGPFDTBCTNZLFOOAGXTOIWWZFXSBWZQTVAJJYJCFELYJYCLOUWCFBZVKTLXYHKQCHNKAKQETJSCZGLLUSLYPUXQFDIMIHXNJYSYUWPH");
    msg.lat = 0.9367414710199605;
    msg.lon = 0.11264005652155695;
    msg.z_units = 182U;
    msg.z = 0.8874765901893904;
    msg.accuracy = 0.5725414714559433;

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
    msg.setTimeStamp(0.8241057796933059);
    msg.setSource(11015U);
    msg.setSourceEntity(107U);
    msg.setDestination(23470U);
    msg.setDestinationEntity(23U);
    msg.target.assign("DTUFENXTTWNFSVCQMEBMBOXFYUIHTEAYDESTRMLKKKXCGRIUIVZOWRPIGLLBWPUWFQPVJIXZBQYHHNWNZCLQXPRAUMVACEHDNKAMQYAAXTJZWHAPHUPCZUGUYQRM");
    msg.lat = 0.7698227669927079;
    msg.lon = 0.4691410301750304;
    msg.z_units = 39U;
    msg.z = 0.36974274022904297;
    msg.accuracy = 0.39432555723342855;

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
    msg.setTimeStamp(0.28319352800385134);
    msg.setSource(22660U);
    msg.setSourceEntity(38U);
    msg.setDestination(12939U);
    msg.setDestinationEntity(175U);
    msg.target.assign("RICHDPUTQIISZJTKSMUMJLBSPTZFSRHFCXKLPDRDGPEAOBPTXOCQCYFJTWIQJAPJIOAWHXZQNEFYZUDHRAPDQBMGJHOEJXGQQWYVZOGVBEEWGSUHOAWLVOLYKMAJECVFMIZCLNDIBQOFHXR");
    msg.lat = 0.754560783692956;
    msg.lon = 0.013184790678712255;
    msg.z_units = 63U;
    msg.z = 0.9175549854296516;
    msg.accuracy = 0.7825674628266831;

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
    msg.setTimeStamp(0.48961718692661216);
    msg.setSource(30668U);
    msg.setSourceEntity(223U);
    msg.setDestination(34933U);
    msg.setDestinationEntity(50U);
    msg.name.assign("KLDIGCDESDGMYLVIWKAEPZODTBYVKTXMIRXCTXXSROCVDAJXYYIMHZHJIBRLNCZLENIFYIVZDSRUBKMLOF");
    msg.lat = 0.27701816028545667;
    msg.lon = 0.5297491735854998;
    msg.z = 0.2578117988121048;
    msg.z_units = 65U;

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
    msg.setTimeStamp(0.7418005422739419);
    msg.setSource(54337U);
    msg.setSourceEntity(150U);
    msg.setDestination(24083U);
    msg.setDestinationEntity(125U);
    msg.name.assign("ZSHFMXHUBVNZWYKMTYFRBNCNHRNUGBDXTRXELSFOYJAQIGIQGXYXLEEJRWBCRWLGELGJDWTVVZATETSICMHEJVULMIYAKQSRORWNUUMEZWAOGPVUYQGVAYYLVKSHDXDSXFGVUPIAQDYCJIPBZKDSRGIUPIOFAFBZFIWLNFOQJONBSRNPNPZPXZZKHKQQOJCDPCTRMAKDDUIWFQXHLYWOJOCKTDVHBJEHT");
    msg.lat = 0.6202486939013183;
    msg.lon = 0.7022265005516494;
    msg.z = 0.3990786479086782;
    msg.z_units = 196U;

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
    msg.setTimeStamp(0.7785680539702987);
    msg.setSource(20799U);
    msg.setSourceEntity(54U);
    msg.setDestination(10006U);
    msg.setDestinationEntity(149U);
    msg.name.assign("XQEJPPPWUUSDIPGHOHRAVERQEMCLWIOMDMFMMGLQVBGDXLTRHVTZWBPTXJHSVNUYSLNDAPF");
    msg.lat = 0.04614068680869088;
    msg.lon = 0.11643162357308057;
    msg.z = 0.22095614176369616;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.4091439397420351);
    msg.setSource(20837U);
    msg.setSourceEntity(134U);
    msg.setDestination(35474U);
    msg.setDestinationEntity(26U);
    msg.op = 113U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("NVJTDPQEZHSDAAIZIREQEJTMFVTNVOLCXDDRWGUUWAUXBCYUCRBEPJRCBZMOJZXRPHZXUHQLAXLXHDEENGCKNHEWUSGSIOXPQQBHLKRLYFNRRRTNROZJJKIPUAFAPVOKBLEGUQTBVJDLYMDFWFTXGKHSPFIDMYTASKHSFPSKCKMXVHMKWTUWFVGAGWIMBDSCQHIJEYWQBAVOV");
    tmp_msg_0.lat = 0.9368758140075054;
    tmp_msg_0.lon = 0.8304445557650759;
    tmp_msg_0.z = 0.9039650869035271;
    tmp_msg_0.z_units = 50U;
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
    msg.setTimeStamp(0.5859705495385155);
    msg.setSource(24720U);
    msg.setSourceEntity(151U);
    msg.setDestination(39547U);
    msg.setDestinationEntity(147U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.10025671672534764);
    msg.setSource(4524U);
    msg.setSourceEntity(151U);
    msg.setDestination(25350U);
    msg.setDestinationEntity(246U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.35354534459810427);
    msg.setSource(36516U);
    msg.setSourceEntity(143U);
    msg.setDestination(18244U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9307790085631702;
    msg.type = 121U;

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
    msg.setTimeStamp(0.604779520562507);
    msg.setSource(60077U);
    msg.setSourceEntity(204U);
    msg.setDestination(29122U);
    msg.setDestinationEntity(176U);
    msg.value = 0.46012523225486235;
    msg.type = 194U;

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
    msg.setTimeStamp(0.067927490117341);
    msg.setSource(63577U);
    msg.setSourceEntity(95U);
    msg.setDestination(45243U);
    msg.setDestinationEntity(71U);
    msg.value = 0.76256271465166;
    msg.type = 68U;

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
    msg.setTimeStamp(0.6605297152026223);
    msg.setSource(25046U);
    msg.setSourceEntity(181U);
    msg.setDestination(187U);
    msg.setDestinationEntity(210U);
    msg.value = 0.600520175954943;

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
    msg.setTimeStamp(0.8367796386861079);
    msg.setSource(25937U);
    msg.setSourceEntity(167U);
    msg.setDestination(809U);
    msg.setDestinationEntity(65U);
    msg.value = 0.3432171549528169;

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
    msg.setTimeStamp(0.25600719171080233);
    msg.setSource(41890U);
    msg.setSourceEntity(156U);
    msg.setDestination(26789U);
    msg.setDestinationEntity(54U);
    msg.value = 0.3956022107847412;

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
    msg.setTimeStamp(0.530401757837758);
    msg.setSource(39139U);
    msg.setSourceEntity(98U);
    msg.setDestination(23072U);
    msg.setDestinationEntity(98U);
    msg.timestamp_last_service = 0.3601734686463953;
    msg.time_next_service = 0.4720664252637672;
    msg.time_motor_next_service = 0.713188310160544;
    msg.time_idle_ground = 0.8675961063787156;
    msg.time_idle_air = 0.4271183457785289;
    msg.time_idle_water = 0.8057186594533332;
    msg.time_idle_underwater = 0.41318934351257175;
    msg.time_idle_unknown = 0.8648964527802286;
    msg.time_motor_ground = 0.8279027664402584;
    msg.time_motor_air = 0.20173484531786234;
    msg.time_motor_water = 0.6672673705261984;
    msg.time_motor_underwater = 0.7903484413547521;
    msg.time_motor_unknown = 0.2542400037696344;
    msg.rpm_min = -9836;
    msg.rpm_max = -21387;
    msg.depth_max = 0.5243861032548426;

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
    msg.setTimeStamp(0.281551033747631);
    msg.setSource(28763U);
    msg.setSourceEntity(93U);
    msg.setDestination(1148U);
    msg.setDestinationEntity(120U);
    msg.timestamp_last_service = 0.4707298891218302;
    msg.time_next_service = 0.878256945371786;
    msg.time_motor_next_service = 0.3731375660980317;
    msg.time_idle_ground = 0.30118878225393153;
    msg.time_idle_air = 0.15000329061060635;
    msg.time_idle_water = 0.7002256759672131;
    msg.time_idle_underwater = 0.8400103961517519;
    msg.time_idle_unknown = 0.828673999064029;
    msg.time_motor_ground = 0.07500580764901621;
    msg.time_motor_air = 0.3224612637956741;
    msg.time_motor_water = 0.7611233658204444;
    msg.time_motor_underwater = 0.5363476950723622;
    msg.time_motor_unknown = 0.5320144804497404;
    msg.rpm_min = -14820;
    msg.rpm_max = 10117;
    msg.depth_max = 0.027393596238802775;

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
    msg.setTimeStamp(0.4479091248228284);
    msg.setSource(44033U);
    msg.setSourceEntity(32U);
    msg.setDestination(9452U);
    msg.setDestinationEntity(139U);
    msg.timestamp_last_service = 0.5504052461349073;
    msg.time_next_service = 0.21483248071016725;
    msg.time_motor_next_service = 0.9472795382677904;
    msg.time_idle_ground = 0.33523086296521487;
    msg.time_idle_air = 0.6229665284455009;
    msg.time_idle_water = 0.7731347384761746;
    msg.time_idle_underwater = 0.12236403707942678;
    msg.time_idle_unknown = 0.9424447724380148;
    msg.time_motor_ground = 0.6445104091224931;
    msg.time_motor_air = 0.2692344305315836;
    msg.time_motor_water = 0.7359205321174673;
    msg.time_motor_underwater = 0.24520250931485366;
    msg.time_motor_unknown = 0.8706025979371714;
    msg.rpm_min = 25522;
    msg.rpm_max = 270;
    msg.depth_max = 0.5848129001280988;

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
    msg.setTimeStamp(0.3752434828317196);
    msg.setSource(27550U);
    msg.setSourceEntity(250U);
    msg.setDestination(22173U);
    msg.setDestinationEntity(53U);
    msg.severity = 168U;
    msg.text.assign("AHDJQITBMFQVABSLFJYAKLBOIPLCNJRELZPXVHFPJRVHGWMRNSXCGWRCVHCRIWDFTZYHNNEVNAA");

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
    msg.setTimeStamp(0.01239690626781409);
    msg.setSource(12557U);
    msg.setSourceEntity(146U);
    msg.setDestination(7558U);
    msg.setDestinationEntity(216U);
    msg.severity = 227U;
    msg.text.assign("AOAHKUNVAYQCFZLOGEBBPRDBMAUCROEQTESJDUKMDHPTFUKXPQBGLJMQOGTSAKBZLDHIEBRHHYNWSULAZIFRJNRVMSNJOTRGMMOVNZIJLGUTWYJTQDKWVKWEVIKSCWMONWABDYEXCHXZU");

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
    msg.setTimeStamp(0.6365215283393024);
    msg.setSource(23238U);
    msg.setSourceEntity(34U);
    msg.setDestination(62140U);
    msg.setDestinationEntity(27U);
    msg.severity = 152U;
    msg.text.assign("MCFRBDJESXOHVCNAAQHQRZHXFZFIEBOBZAPDFLUSVQMLIKGIUMZPVENYJDFVUPLGLMVTTJTMFPIMS");

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
    msg.setTimeStamp(0.7553866266060872);
    msg.setSource(64169U);
    msg.setSourceEntity(139U);
    msg.setDestination(19575U);
    msg.setDestinationEntity(162U);
    msg.channel = -96;
    msg.value = 337839799;
    msg.gain = 106U;

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
    msg.setTimeStamp(0.37005995338888664);
    msg.setSource(65179U);
    msg.setSourceEntity(9U);
    msg.setDestination(48613U);
    msg.setDestinationEntity(233U);
    msg.channel = -127;
    msg.value = -818948684;
    msg.gain = 172U;

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
    msg.setTimeStamp(0.5816769197001229);
    msg.setSource(15367U);
    msg.setSourceEntity(206U);
    msg.setDestination(12488U);
    msg.setDestinationEntity(189U);
    msg.channel = -47;
    msg.value = -1805744320;
    msg.gain = 136U;

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
    msg.setTimeStamp(0.7365975120833983);
    msg.setSource(44297U);
    msg.setSourceEntity(206U);
    msg.setDestination(24406U);
    msg.setDestinationEntity(22U);
    msg.ch01 = 0.9049439976387678;
    msg.ch02 = 0.7547192165075101;
    msg.ch03 = 0.8285975645958489;
    msg.ch04 = 0.09995395307549837;
    msg.ch05 = 0.9155371578861734;
    msg.ch06 = 0.7502474598734228;
    msg.ch07 = 0.12280970202413555;
    msg.ch08 = 0.8520471937274119;
    msg.ch09 = 0.004249123748870431;
    msg.ch10 = 0.49751455455322;
    msg.ch11 = 0.14454524088910692;
    msg.ch12 = 0.44702042384486873;
    msg.ch13 = 0.24561741401837123;
    msg.ch14 = 0.7353675061685712;
    msg.ch15 = 0.03934658348333386;
    msg.ch16 = 0.4303950061192652;

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
    msg.setTimeStamp(0.8954633822049383);
    msg.setSource(34864U);
    msg.setSourceEntity(104U);
    msg.setDestination(42250U);
    msg.setDestinationEntity(11U);
    msg.ch01 = 0.6534254987524999;
    msg.ch02 = 0.22054768279439052;
    msg.ch03 = 0.8029685615532904;
    msg.ch04 = 0.6509727333090795;
    msg.ch05 = 0.3491560713358278;
    msg.ch06 = 0.7831112473128516;
    msg.ch07 = 0.881172963558243;
    msg.ch08 = 0.28174865654900916;
    msg.ch09 = 0.33590481184920906;
    msg.ch10 = 0.17282554315150989;
    msg.ch11 = 0.6474348916482394;
    msg.ch12 = 0.007587099626455651;
    msg.ch13 = 0.49045454923851783;
    msg.ch14 = 0.22799509617049363;
    msg.ch15 = 0.6535748230780527;
    msg.ch16 = 0.24406922310848045;

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
    msg.setTimeStamp(0.7123654534436537);
    msg.setSource(43458U);
    msg.setSourceEntity(32U);
    msg.setDestination(62185U);
    msg.setDestinationEntity(32U);
    msg.ch01 = 0.7655591351256663;
    msg.ch02 = 0.15288806284845946;
    msg.ch03 = 0.5970782847738053;
    msg.ch04 = 0.07641314734659044;
    msg.ch05 = 0.4326519497529977;
    msg.ch06 = 0.826138162387796;
    msg.ch07 = 0.3306288417417945;
    msg.ch08 = 0.3020268606711758;
    msg.ch09 = 0.6972323903509566;
    msg.ch10 = 0.023767611716874804;
    msg.ch11 = 0.0044366658873816744;
    msg.ch12 = 0.7780358597416296;
    msg.ch13 = 0.7254969909901445;
    msg.ch14 = 0.4735057867472253;
    msg.ch15 = 0.8605763141753304;
    msg.ch16 = 0.8466713459797929;

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
    msg.setTimeStamp(0.6402661751912628);
    msg.setSource(40331U);
    msg.setSourceEntity(208U);
    msg.setDestination(12117U);
    msg.setDestinationEntity(59U);
    msg.op = 81U;
    msg.lat = 0.25701516598146346;
    msg.lon = 0.25194989035368187;
    msg.height = 0.7260487734494804;
    msg.depth = 0.22059029859208956;
    msg.alt = 0.17361843841077162;

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
    msg.setTimeStamp(0.3604095830020948);
    msg.setSource(27455U);
    msg.setSourceEntity(149U);
    msg.setDestination(5546U);
    msg.setDestinationEntity(194U);
    msg.op = 114U;
    msg.lat = 0.585568662447893;
    msg.lon = 0.8789905212137814;
    msg.height = 0.014759531872392317;
    msg.depth = 0.04395000115168979;
    msg.alt = 0.9155575609670166;

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
    msg.setTimeStamp(0.3699073992759411);
    msg.setSource(33850U);
    msg.setSourceEntity(3U);
    msg.setDestination(42551U);
    msg.setDestinationEntity(111U);
    msg.op = 145U;
    msg.lat = 0.2703653081267058;
    msg.lon = 0.9445681148424734;
    msg.height = 0.5613917935055909;
    msg.depth = 0.9828208580333928;
    msg.alt = 0.17499133072927742;

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
    msg.setTimeStamp(0.17945716604449957);
    msg.setSource(13299U);
    msg.setSourceEntity(160U);
    msg.setDestination(18180U);
    msg.setDestinationEntity(139U);
    msg.direction = 0.7530431375686608;
    msg.speed = 0.20912873979358648;
    msg.turbulence = 0.10085324830717368;

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
    msg.setTimeStamp(0.7950010842383162);
    msg.setSource(29212U);
    msg.setSourceEntity(176U);
    msg.setDestination(26208U);
    msg.setDestinationEntity(71U);
    msg.direction = 0.9483873823041162;
    msg.speed = 0.5687930433077363;
    msg.turbulence = 0.37109435438250793;

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
    msg.setTimeStamp(0.7321365819958874);
    msg.setSource(58839U);
    msg.setSourceEntity(81U);
    msg.setDestination(30498U);
    msg.setDestinationEntity(125U);
    msg.direction = 0.8370699682158916;
    msg.speed = 0.944865604233994;
    msg.turbulence = 0.7758323234363071;

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
    msg.setTimeStamp(0.5917193784131566);
    msg.setSource(37249U);
    msg.setSourceEntity(182U);
    msg.setDestination(18510U);
    msg.setDestinationEntity(170U);
    msg.msg_type.assign("SEARUAVCWXHVDKOJAMNKUPHZWHPRRHHBVHZNYQKBOCINROGEUALNAIMMQTQKELSPKVKUMRVJQBDSIWSTYYPACXNMKYZALFVXGLGZOXNLUCIGLELXJBNWEQSCYEPRKQYDEAWBTYBTLSXAOSQQXOGGFOXRIICSLVMPJYWZWIGUGJURHBRXVFICJBCTHIFZFEWZJEDZJTKSQICWGBWDMGHMFDS");
    msg.sensor_class.assign("ONHGDVYYVDYOJYKHBXJGIVCSPQSQLETNRAUHIXUTLDJZLHUYVLECUMFLPUBWOJBYPOZKVZTBTIMITZBWEVKBUZRJPCFEOPXZAEUZJSLQVGRHHQPLNCSUPIVW");
    msg.mmsi.assign("DHWUBFMRXGQDOLIIXHOZHTMWYKAQPECMTTGJPLYLOVIOOYAAVCSQZUJHKUKRMNRPEXBWEREHJWSZVOYPCMLHWTPKDVZHLMALRYPQZSRIXIWMUJDTNDYDCPPYIYBJYIKEFSAWAIFUSBHSERCEVVVMNJAEWZOIJBTEUGCSSFGNBOTSLRGHQTOBM");
    msg.callsign.assign("BHUZSZOJXURRVTOAULVGPXMTNFIMBAALOHDNYTCUWAECOGVDCLRWLSKAQBFYTWFFFOAQPKNQPPQKSTKYRQINBXHXDUMEKHINSKKRCUQKJQNZWTSPLILXBZBZHQQOZDZDMPOGMYPHKYLBSXUQEXIYYNDSJNEYOZUWMMJAUXGECHMVJGGOJRVCEFWCEMDWTWWTGLEPRJLK");
    msg.name.assign("RWRGCCCPVFNVCGPFKLCGMTHOZOOOHFEKAXQSXKWBKZMBROSYAMFHXCWNHLKZDEQCMBNEDXBOVWZIIRZWTGYCRDFSOVGBPIJTRQAHTVHMUSNSBEUPWNYXMANVCPUSDCIIREZESUAIFXZAXMTKIUOLHOWGEFMAZDLGJQJBJOWMHKYTZRNGLDDKQTTJYUGPLVQWLJATNBL");
    msg.nav_status = 11U;
    msg.type_and_cargo = 156U;
    msg.lat = 0.676328999554334;
    msg.lon = 0.8627169088504234;
    msg.course = 0.5466751475600903;
    msg.speed = 0.8145854140957244;
    msg.dist = 0.03452807035407213;
    msg.a = 0.4086871246325121;
    msg.b = 0.871149080696937;
    msg.c = 0.7790503099102809;
    msg.d = 0.6963517775458622;
    msg.draught = 0.317708194587631;

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
    msg.setTimeStamp(0.8696948521131871);
    msg.setSource(28775U);
    msg.setSourceEntity(153U);
    msg.setDestination(46643U);
    msg.setDestinationEntity(135U);
    msg.msg_type.assign("BBKGZIQQBMLRURMEWXDXUXWSWHAEOKGXDMCOUWTGVUAFMIVNPJDDJXEKOVIINPIMZVNNYCQYPFYCCGKTYBCTCKDSNBYHWQTBWOSIUFOKJJETYOZIIZUBVLJGDGCPLKOQQAPHYVSLVAYPSDJRMKCYNTFMFDARGRHAURGE");
    msg.sensor_class.assign("BMWABJZNUYGGTMVIXZUDMDWHUJEONGSNMGGXSARKHZKLBADCLSYVKPFFMKWNNDCKRWAKYCSLGUYNVDYIAEZBGWFTTLFBSYVXTAPBEZFHMSRREAPBXTJOMZPIXWVQVDCQCTUIWZLRCVOYWVAOGWPKHHORXZHTKKNFAZEQOUQPAJQRMEJEITFN");
    msg.mmsi.assign("UIYEKRSUFADAUXAGQLXJKDWSZOILWHOCXRSXUYIBCNYZRMQTCYMLTWJZQHVYDJPBMPSVASGLQTSGRLQFLFEZDJODVAEPBNEJVOTFUWWJRGLCAFUYPXHRGIKBGPISXKTWAFQAMWMTGZXHKFTWCMUELIRVZRCBBHPOGVZYHOEEHIFPQKHYTDVLMVPQOBHDYLKG");
    msg.callsign.assign("KCKZRXRGVBSFWETXEFBUCXHRSWDONDQHIJUELGFBABGTNQJKSHMYPOSETRNNBTVCYUAYZMZONWUPZPVYDARKRBQXMJHPTYFLIIEDNAGOSZSREVQNSXBIMDIBZWYRQJDTMGCPKQIAVVXADOVFGCPJXMYZOYOHKHTVKDUNLIPNCEUAMNLFDBXJEKGVSGPWLHUG");
    msg.name.assign("SGVEUCEGLKHVTBILWKYGNJPJWUETNXKYGUJHIVSUGXHYJUMBTGKTBJXFQEVIUQBQXYMPISIJNLEWCFZZYLNMDNXKOONHPUXZAZ");
    msg.nav_status = 49U;
    msg.type_and_cargo = 209U;
    msg.lat = 0.7344184296479522;
    msg.lon = 0.4061352401118954;
    msg.course = 0.03197867172405733;
    msg.speed = 0.020657617242328175;
    msg.dist = 0.40789362754888203;
    msg.a = 0.8472332395978519;
    msg.b = 0.18038738003574484;
    msg.c = 0.6342520607914348;
    msg.d = 0.3838517146145467;
    msg.draught = 0.6938679501295184;

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
    msg.setTimeStamp(0.9607314392740893);
    msg.setSource(31098U);
    msg.setSourceEntity(191U);
    msg.setDestination(62342U);
    msg.setDestinationEntity(210U);
    msg.msg_type.assign("XACOKTGLXCWBWDBXCRUSZPHMUYGJJQVMSNWKDIQGDMOCRBTIKJDXECPTTBIVJZAKWELUNYIBPOXNBMZBUETOBYVFCRKAEKZVHHEZNOARVGATDQGTJZKZRAMWHMQEWEMCDNSHUNCZORNSPNAUWCLWTVFILDSUXHLQSQIJEELIJMXAJHUPDKYAEJPNWXFGSRFUARDXOFZWLSUTQIBFYGFROJLQVIOPOGQYLSYSMFYKHCIP");
    msg.sensor_class.assign("SULXIKYANEYSQRWZSQQHIOAHNGJTGUKVSLGTSQAKYTNMTRZPXQDVEUTCZGEWNJGNEBBRRBDUFBOMXOJBIORWYHVMRWBMAEPWZMGFEQCKMMOZGZLJTCCCUPOPCUHSFGCKBWYHPKCSIAL");
    msg.mmsi.assign("IMWXHDRCZKMQYPWJCIOGIWFQJQDCRDIPFBJSJKTYEVQOXHFEXFFIHSVFHXPGRYLZISZEKDSZNRTZEDKGKKNHOUDGRNDYSGWUBBVBNWWTPERAWNONCQBRXNWXTWOUKESYKMAECZPFIXBPFVLYAJNNUBKMJURFMNVAVMAMTTQJQYSODOZHFLOVELGBZYMRHZTSCACWUULSGMHBLRTMSXGLDCXZAPP");
    msg.callsign.assign("ADGFZFCTBRYLVHRBGDECUZHZYBFOUDAWXOAUXQGGQNXJKQLWCOKWKCNNTACXOMDJPNQEYLBHGXOPAVJMRHFFEPBIIGQRCUONOZZNGLHCBTTLSECV");
    msg.name.assign("NMDOOCRIGFTZKXLKTXWIPRGIMHPISRDAONICLYDJQSMBDHEZCFWYNOCMCHMFPRHPAWABKZFZZGVOKVJUYRTITQAWVBGQPHMOBPTVWJFEUMVXFRBAAENPGHKVLVOHXSUGKWDQKZXZBBRSUQLLEGRQP");
    msg.nav_status = 78U;
    msg.type_and_cargo = 184U;
    msg.lat = 0.3255869761016127;
    msg.lon = 0.6132958127431674;
    msg.course = 0.298511940750831;
    msg.speed = 0.24661874156389774;
    msg.dist = 0.5671769363548824;
    msg.a = 0.24745546077040026;
    msg.b = 0.9231438112609286;
    msg.c = 0.2045416850269548;
    msg.d = 0.5876479300526399;
    msg.draught = 0.7872025500373598;

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
    msg.setTimeStamp(0.9583064502161898);
    msg.setSource(56202U);
    msg.setSourceEntity(6U);
    msg.setDestination(47748U);
    msg.setDestinationEntity(231U);
    msg.depth_at_loc.assign("IYSERVUNPWEHVZINFTPETDLAYEMYJQVGDJLDBWFTIDKVRFTAKROQUXKKCQHVOFMNWHYYNDHBIIAXBVAJZNVKMRPCXXDRDNTIUQSQSREFZCATCRQMHYJMARKQKBIJBDWESJEIMJFLNNGPZZOXYBLLGXLKLHRBPALCUOJESZEGMEPXMUPOTFTNFSQCBZTGYXCWWBMGHVCOGWKJZGQWXOLDDNXAWGPIAWUTCFUH");
    msg.danger.assign("MQBMZONLEICLPDSUAMOPJCPETPOTKCTRFLUHXYAWQJVDAFKZWJXNUSIACHKUDAKFJSPYDGIGEFLEBADQAQHVBIUYNBQNBHIPZIETQMZTZE");

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
    msg.setTimeStamp(0.5354850171916538);
    msg.setSource(40630U);
    msg.setSourceEntity(43U);
    msg.setDestination(37120U);
    msg.setDestinationEntity(55U);
    msg.depth_at_loc.assign("WXRVVVEGRRBHMYPCADJKUHQASHUGQLKTIASRMPKMRPZHWSVYLBREPYYWJZMXBALDGBXDIYJTNKSIOUZXXPOMCXHQDSFKMFKUYZDOJFTYKBNCBWNDTCFVUGLKXDGTDXCOUICOBOAFCLAYGFRTVEUTF");
    msg.danger.assign("WKPNEEKWATTIHFLEEATHYIBXGRWQZZTMUPKHVXLRMKFPYHQVUXLAFRVCORHIUVILCVSRJVWGLRZBZCUHGTSGDHQQOJENUSBNRJGWKWVSTLIMBNZHYODMFCYNUONAXDXPPSLWSABDDCVLXCYABXPXACICSMYMQOUTKBCNZQJQJ");

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
    msg.setTimeStamp(0.02092492487427189);
    msg.setSource(52328U);
    msg.setSourceEntity(92U);
    msg.setDestination(15154U);
    msg.setDestinationEntity(224U);
    msg.depth_at_loc.assign("ZEKJOCVBFHERFXFGGLRIDUXKVHTYJQKQUURUMGWZZEDCMLVFOGYAJZRZUTKASHBJOKMIQCMPOINDIQRYJWVAIGWPZPCHKVYQSDRWQLLHLEQMJDNYKSMVENMFCHBPS");
    msg.danger.assign("QOCLAYITTBPNEPWNRMIBLVZQDUAFXGVLJIQKSWYNZAZQOLRUHDGWFUXNSTUGNHISFGCBYKZMTUCFBEOIKQIZIYWSMDRDDGULVEV");

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
    msg.setTimeStamp(0.852644044525053);
    msg.setSource(50603U);
    msg.setSourceEntity(173U);
    msg.setDestination(24726U);
    msg.setDestinationEntity(69U);
    msg.time = 0.3483707197302932;
    msg.x = 0.30814464081284476;
    msg.y = 0.057741692295876446;
    msg.z = 0.2747006760957863;

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
    msg.setTimeStamp(0.7450409852845131);
    msg.setSource(60821U);
    msg.setSourceEntity(201U);
    msg.setDestination(25381U);
    msg.setDestinationEntity(55U);
    msg.time = 0.21444932496425773;
    msg.x = 0.41253984691519585;
    msg.y = 0.29212352735347424;
    msg.z = 0.47351741727228036;

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
    msg.setTimeStamp(0.9792943009719021);
    msg.setSource(56284U);
    msg.setSourceEntity(164U);
    msg.setDestination(58666U);
    msg.setDestinationEntity(157U);
    msg.time = 0.3208360803503446;
    msg.x = 0.6619973165654491;
    msg.y = 0.6163724186876289;
    msg.z = 0.24292770125899088;

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
    msg.setTimeStamp(0.03463963603291509);
    msg.setSource(3401U);
    msg.setSourceEntity(161U);
    msg.setDestination(47298U);
    msg.setDestinationEntity(187U);
    msg.nbeams = 215U;
    msg.ncells = 146U;
    msg.coord_sys = 122U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.39346734486403945;
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
    msg.setTimeStamp(0.4830305568016705);
    msg.setSource(16759U);
    msg.setSourceEntity(238U);
    msg.setDestination(14269U);
    msg.setDestinationEntity(9U);
    msg.nbeams = 154U;
    msg.ncells = 82U;
    msg.coord_sys = 61U;

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
    msg.setTimeStamp(0.22078951115366174);
    msg.setSource(9633U);
    msg.setSourceEntity(85U);
    msg.setDestination(14367U);
    msg.setDestinationEntity(191U);
    msg.nbeams = 149U;
    msg.ncells = 190U;
    msg.coord_sys = 23U;

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
    msg.setTimeStamp(0.4257391065417049);
    msg.setSource(52346U);
    msg.setSourceEntity(116U);
    msg.setDestination(17630U);
    msg.setDestinationEntity(49U);
    msg.cell_position = 0.27385486455903474;

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
    msg.setTimeStamp(0.921459134563979);
    msg.setSource(27928U);
    msg.setSourceEntity(76U);
    msg.setDestination(48697U);
    msg.setDestinationEntity(152U);
    msg.cell_position = 0.015455627188314502;

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
    msg.setTimeStamp(0.9293178829990687);
    msg.setSource(49250U);
    msg.setSourceEntity(154U);
    msg.setDestination(53387U);
    msg.setDestinationEntity(204U);
    msg.cell_position = 0.25717547711484834;

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
    msg.setTimeStamp(0.253042543624717);
    msg.setSource(11276U);
    msg.setSourceEntity(186U);
    msg.setDestination(25738U);
    msg.setDestinationEntity(54U);
    msg.vel = 0.1986972912003685;
    msg.amp = 0.8615497737584932;
    msg.cor = 84U;

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
    msg.setTimeStamp(0.09956102125341537);
    msg.setSource(53324U);
    msg.setSourceEntity(219U);
    msg.setDestination(33937U);
    msg.setDestinationEntity(92U);
    msg.vel = 0.9848311589017925;
    msg.amp = 0.7422076796320536;
    msg.cor = 44U;

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
    msg.setTimeStamp(0.506702395034964);
    msg.setSource(5072U);
    msg.setSourceEntity(61U);
    msg.setDestination(39790U);
    msg.setDestinationEntity(157U);
    msg.vel = 0.8895934112899484;
    msg.amp = 0.8828832680954551;
    msg.cor = 93U;

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
    msg.setTimeStamp(0.3246536376789767);
    msg.setSource(22512U);
    msg.setSourceEntity(116U);
    msg.setDestination(10922U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5877241078452863;

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
    msg.setTimeStamp(0.4583968253387092);
    msg.setSource(27240U);
    msg.setSourceEntity(109U);
    msg.setDestination(51689U);
    msg.setDestinationEntity(30U);
    msg.value = 0.6381859213025791;

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
    msg.setTimeStamp(0.5327561668615717);
    msg.setSource(34077U);
    msg.setSourceEntity(239U);
    msg.setDestination(26140U);
    msg.setDestinationEntity(169U);
    msg.value = 0.8973150684831688;

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
    msg.setTimeStamp(0.6147496858407939);
    msg.setSource(3069U);
    msg.setSourceEntity(56U);
    msg.setDestination(14895U);
    msg.setDestinationEntity(118U);
    msg.sig_wave_height_hm0 = 0.9941830095004287;
    msg.wave_peak_direction = 0.6083577130137432;
    msg.wave_peak_period = 0.44120231688061073;
    msg.wave_height_wind_hm0 = 0.1682711130144784;
    msg.wave_height_swell_hm0 = 0.45783421780920286;
    msg.wave_peak_period_wind = 0.4127425148520071;
    msg.wave_peak_period_swell = 0.9038298257905621;
    msg.wave_peak_direction_wind = 0.26551631470293124;
    msg.wave_peak_direction_swell = 0.9152495951530365;
    msg.wave_mean_direction = 0.7583538445382761;
    msg.wave_mean_period_tm02 = 0.44525181520673074;
    msg.wave_height_hmax = 0.08847057623864174;
    msg.wave_height_crest = 0.3730713870167687;
    msg.wave_height_trough = 0.3574280904504431;
    msg.wave_period_tmax = 0.9849999143979152;
    msg.wave_period_tz = 0.05874789209513753;
    msg.significant_wave_height_h1_3 = 0.4949138541277446;
    msg.mean_spreading_angle = 0.3533437574758377;
    msg.first_order_spread = 0.3000184897237109;
    msg.long_crestedness_parameters = 0.15420357614279567;
    msg.heading = 0.11312118189625031;
    msg.pitch = 0.8632651630463222;
    msg.roll = 0.08640295739388826;
    msg.external_heading = 0.07389381167542797;
    msg.stdev_heading = 0.7543365955821303;
    msg.stdev_pitch = 0.28769822704440073;
    msg.stdev_roll = 0.049391263401810215;

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
    msg.setTimeStamp(0.46580659367674704);
    msg.setSource(45307U);
    msg.setSourceEntity(136U);
    msg.setDestination(1149U);
    msg.setDestinationEntity(121U);
    msg.sig_wave_height_hm0 = 0.5587186393412165;
    msg.wave_peak_direction = 0.7114837409226427;
    msg.wave_peak_period = 0.4688745454321297;
    msg.wave_height_wind_hm0 = 0.699347249748276;
    msg.wave_height_swell_hm0 = 0.5790178722334536;
    msg.wave_peak_period_wind = 0.7856953925976207;
    msg.wave_peak_period_swell = 0.6636388818362636;
    msg.wave_peak_direction_wind = 0.9185626602020839;
    msg.wave_peak_direction_swell = 0.07024205374259884;
    msg.wave_mean_direction = 0.4560240104015887;
    msg.wave_mean_period_tm02 = 0.8545742724829569;
    msg.wave_height_hmax = 0.7189286956645466;
    msg.wave_height_crest = 0.656718229657374;
    msg.wave_height_trough = 0.793800439161215;
    msg.wave_period_tmax = 0.8786981069451671;
    msg.wave_period_tz = 0.021585559486193673;
    msg.significant_wave_height_h1_3 = 0.6049924041263178;
    msg.mean_spreading_angle = 0.14707802265574477;
    msg.first_order_spread = 0.22642269736177423;
    msg.long_crestedness_parameters = 0.39845557881892657;
    msg.heading = 0.32952609685248857;
    msg.pitch = 0.8984053777586163;
    msg.roll = 0.5591912443150806;
    msg.external_heading = 0.8513783445220404;
    msg.stdev_heading = 0.5125387085666936;
    msg.stdev_pitch = 0.18949776617183867;
    msg.stdev_roll = 0.9700248507234862;

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
    msg.setTimeStamp(0.657569061531752);
    msg.setSource(25553U);
    msg.setSourceEntity(231U);
    msg.setDestination(59019U);
    msg.setDestinationEntity(81U);
    msg.sig_wave_height_hm0 = 0.3848112555695783;
    msg.wave_peak_direction = 0.42770192052664835;
    msg.wave_peak_period = 0.000755623799107874;
    msg.wave_height_wind_hm0 = 0.9123434879986425;
    msg.wave_height_swell_hm0 = 0.45075019953317896;
    msg.wave_peak_period_wind = 0.31809981290858114;
    msg.wave_peak_period_swell = 0.21058901802327668;
    msg.wave_peak_direction_wind = 0.5436499631306849;
    msg.wave_peak_direction_swell = 0.6724804788266228;
    msg.wave_mean_direction = 0.4803833233013852;
    msg.wave_mean_period_tm02 = 0.15889289119213124;
    msg.wave_height_hmax = 0.6741577706864172;
    msg.wave_height_crest = 0.8341384000667666;
    msg.wave_height_trough = 0.19907493549608724;
    msg.wave_period_tmax = 0.43878256160249385;
    msg.wave_period_tz = 0.10113275225114249;
    msg.significant_wave_height_h1_3 = 0.46964895685259567;
    msg.mean_spreading_angle = 0.05343376866330374;
    msg.first_order_spread = 0.8968655484557484;
    msg.long_crestedness_parameters = 0.449873758373307;
    msg.heading = 0.0283640178767417;
    msg.pitch = 0.3833574424076658;
    msg.roll = 0.6306650020319918;
    msg.external_heading = 0.8067485652367847;
    msg.stdev_heading = 0.9230633087466332;
    msg.stdev_pitch = 0.016211202052961782;
    msg.stdev_roll = 0.16571929294498333;

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
    msg.setTimeStamp(0.5204637906637746);
    msg.setSource(23713U);
    msg.setSourceEntity(148U);
    msg.setDestination(42528U);
    msg.setDestinationEntity(246U);
    msg.name.assign("SRQNIZQCBGYKRTOFUDEYTRQFRUOCEJZPRGNBSVBWJUYLLESTBBKNPDZYHLXIAWOHKRCBDRAKFICJGKWNFNTPHSUZEUABMEVUEHSIJDPCKTGQXQLYYNLXGVOAFHO");
    msg.value = 72U;

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
    msg.setTimeStamp(0.28418045280584014);
    msg.setSource(1779U);
    msg.setSourceEntity(38U);
    msg.setDestination(9908U);
    msg.setDestinationEntity(104U);
    msg.name.assign("PJOPSBCCIKQXNCIHEZWDFVPYWIIWSMAYEAWPQJFLRSTZVULXGYODTCKWFKHCANTVNRA");
    msg.value = 31U;

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
    msg.setTimeStamp(0.39297431595992227);
    msg.setSource(8210U);
    msg.setSourceEntity(192U);
    msg.setDestination(38160U);
    msg.setDestinationEntity(95U);
    msg.name.assign("QROTMYJBRX");
    msg.value = 116U;

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
    msg.setTimeStamp(0.6942671240001399);
    msg.setSource(55607U);
    msg.setSourceEntity(60U);
    msg.setDestination(50372U);
    msg.setDestinationEntity(100U);
    msg.name.assign("OJMMCGWSXKPNQUMWHXZBBIUXKOFAFPZMYYAIZOECPSSOBAUXENUFJWKFWDTTMWCKNXGGBFAHKDPERIBOWONDTTBRSGVMVKZQ");

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
    msg.setTimeStamp(0.3105225061973622);
    msg.setSource(23885U);
    msg.setSourceEntity(192U);
    msg.setDestination(12229U);
    msg.setDestinationEntity(58U);
    msg.name.assign("ZHMDPOOBLUIGOIYPHUXQZEVAACYNLWWZ");

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
    msg.setTimeStamp(0.8166019384963874);
    msg.setSource(43848U);
    msg.setSourceEntity(165U);
    msg.setDestination(4900U);
    msg.setDestinationEntity(183U);
    msg.name.assign("WQXFXLIDTMXMZDLKKZCKHSLHYFNOCKJRKQRTHYWPBORBBVGQGSDCDKOUQWBINYLCKZMEQGMVTGBIAYIUUWRQMGICSACAKJJRSSZPGPLFXX");

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
    msg.setTimeStamp(0.3563774607932616);
    msg.setSource(45638U);
    msg.setSourceEntity(172U);
    msg.setDestination(45948U);
    msg.setDestinationEntity(19U);
    msg.name.assign("MKJTZHDCOBSDXKHLETHN");
    msg.value = 109U;

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
    msg.setTimeStamp(0.11501400219942004);
    msg.setSource(59052U);
    msg.setSourceEntity(69U);
    msg.setDestination(38441U);
    msg.setDestinationEntity(59U);
    msg.name.assign("DVVEERESEBJRGMCUOGORPZQPZPRNTLAANQOLXXOSXRATXCPMLYWKZOCJTMSVROFSHHWVSEBTSENVHAMHCQBUZPOHANDACWTWUYAPMDHWURNJQKKRFKIZZFBTFYCBLCUUQPMKJYANAQCNYJZILU");
    msg.value = 63U;

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
    msg.setTimeStamp(0.20013469694215136);
    msg.setSource(29171U);
    msg.setSourceEntity(40U);
    msg.setDestination(62265U);
    msg.setDestinationEntity(247U);
    msg.name.assign("WZVKHCEIWIIWKJNUCEFMDPMYMZZVNTCHBASOJDIQRTJTVGXDEJYBWTDXGTMSWNSPRDPCUYNJCFAZRZGLNHJLFVOI");
    msg.value = 239U;

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
    msg.setTimeStamp(0.6340294590292971);
    msg.setSource(26095U);
    msg.setSourceEntity(248U);
    msg.setDestination(14371U);
    msg.setDestinationEntity(57U);
    msg.value = 0.2399975802602835;

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
    msg.setTimeStamp(0.4777325730894726);
    msg.setSource(37861U);
    msg.setSourceEntity(147U);
    msg.setDestination(5207U);
    msg.setDestinationEntity(185U);
    msg.value = 0.21748285158670755;

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
    msg.setTimeStamp(0.7117166638844873);
    msg.setSource(15883U);
    msg.setSourceEntity(164U);
    msg.setDestination(56374U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6060331668060293;

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
    msg.setTimeStamp(0.3273238498499279);
    msg.setSource(6129U);
    msg.setSourceEntity(42U);
    msg.setDestination(43430U);
    msg.setDestinationEntity(253U);
    msg.value = 0.868165530292944;

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
    msg.setTimeStamp(0.24461281733322582);
    msg.setSource(33377U);
    msg.setSourceEntity(106U);
    msg.setDestination(56333U);
    msg.setDestinationEntity(181U);
    msg.value = 0.2960976897547295;

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
    msg.setTimeStamp(0.5288463549575549);
    msg.setSource(40110U);
    msg.setSourceEntity(241U);
    msg.setDestination(16915U);
    msg.setDestinationEntity(70U);
    msg.value = 0.35097329749959627;

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
    msg.setTimeStamp(0.2467075692745273);
    msg.setSource(63020U);
    msg.setSourceEntity(131U);
    msg.setDestination(20749U);
    msg.setDestinationEntity(138U);
    msg.value = 0.23455280927307298;

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
    msg.setTimeStamp(0.7114509006897307);
    msg.setSource(62235U);
    msg.setSourceEntity(59U);
    msg.setDestination(57506U);
    msg.setDestinationEntity(135U);
    msg.value = 0.04137192117219768;

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
    msg.setTimeStamp(0.6503679395396217);
    msg.setSource(16405U);
    msg.setSourceEntity(92U);
    msg.setDestination(16723U);
    msg.setDestinationEntity(72U);
    msg.value = 0.06894730977150054;

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
    msg.setTimeStamp(0.7430000015773507);
    msg.setSource(15324U);
    msg.setSourceEntity(131U);
    msg.setDestination(36204U);
    msg.setDestinationEntity(147U);
    msg.restriction = 10U;
    msg.reason.assign("LGWKPFCBOUZJTEHCUAQEULWDBGSCAAIXJRWOFGPPVDQOZFXRMMXENGJAZHWMKQVHINXCDDFNQBTKMOTYDMHIREZLHSJNKKYSNGBJPAKYIPEMGUTZOWFSZLRKYUBOOOCEZVOTDVLTPOWSDLIRJEFAHURNPRDTQDKFYLIGILENAVZSWVMVMVMXEFXGGSLUCKQNHTMECBAJRXPDAIUVYTUHBPSWBYLYIJCJBPSQZXCJRGXQRWVHQFWQTUS");

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
    msg.setTimeStamp(0.7536317233962033);
    msg.setSource(31879U);
    msg.setSourceEntity(111U);
    msg.setDestination(25808U);
    msg.setDestinationEntity(210U);
    msg.restriction = 206U;
    msg.reason.assign("TUZSLLZBNHBCDGSZFTJCIKVCUOMHPAEPKMYGTNJ");

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
    msg.setTimeStamp(0.505952139718519);
    msg.setSource(58190U);
    msg.setSourceEntity(109U);
    msg.setDestination(27854U);
    msg.setDestinationEntity(56U);
    msg.restriction = 42U;
    msg.reason.assign("NZUSJLJTKTLKVEBRXREXB");

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
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.3422981237020608);
    msg.setSource(62866U);
    msg.setSourceEntity(130U);
    msg.setDestination(745U);
    msg.setDestinationEntity(88U);
    msg.op = 52U;
    msg.version.assign("TLBFORNMXSAZDMMCEQUXGMBCIRPVBDVHQNEHGJVFLTYOCOHYBYHAVIFVFEBBEQVKLEKNWRKXBRNZPDSAIDZEUSUUYGPTLWNGCAILWOFKTPIPMCHZUKEZJKXZLADZPCLKAUHTGQZXKSHDBVESXXRMJLODYCJVOSFQINUYTJFYWQYTWRCLWPEIFFFXDGJTTKWRRMUIIGABYHOVCMN");
    msg.description.assign("XEOKZTHQRDMUBILATCNGXDJLALOQSXPULSOFJQRQAGCJPCNQNEUFZOFKAOAEBJHFNYVWSBTYBJZZMYYKBPHEBOINJMWCROKVUETCIGUWAWCJBUQZKISIINWAKTXTCRQIJSDLHFKNLMW");

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
    msg.setTimeStamp(0.5866222926951763);
    msg.setSource(10536U);
    msg.setSourceEntity(108U);
    msg.setDestination(15161U);
    msg.setDestinationEntity(169U);
    msg.op = 114U;
    msg.version.assign("ZZILBJWQPRQHERQWYPIVHITFYMRSTWJUDJFTJSCWCAEVGDZMWYGNOXJFIIWNUDOYDEVARNPGTJLTHCBCOCXPNUSDVZSQMKNBYLNPXQBHZNFBAOHNVWTDUWZDOMQEMLIBVOAHGXSLCDQACSUKLKJQVOYERAEZEKRLJOTFMTGEUKHUQPAEJYPKGXFHWMGGOJWBEXARCKZIMNXSHMHXVGSLLRSYPDXFUZFFLCTARAZQNIDIRUXU");
    msg.description.assign("JZZVJKOEGCTGFSFGAKTWSGTKNKHPJOCXUAEDKXXFNICNHPYCOLPWBIHJMXRGBUNAJOBHRYQPJOHOMFECRVGWDBWTFHPQOMSIZWSYEZOMVXCODEPWUNLGILYDMDUYPICPDNXSLUNQL");

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
    msg.setTimeStamp(0.19286312174343723);
    msg.setSource(16063U);
    msg.setSourceEntity(4U);
    msg.setDestination(22145U);
    msg.setDestinationEntity(149U);
    msg.op = 8U;
    msg.version.assign("HKCZGHTIQZSGNUSRYYJUCTZDEFGAEZOUTYPRCRIILSCVCAIAZJIFBHHLXJTNXSUOREOPBWOHWDCAMDPFRGJBGHTDQMARQNMXHSF");
    msg.description.assign("SCWZIYUEASTLHKKGQWVICXVZR");

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
    msg.setTimeStamp(0.1502148903062802);
    msg.setSource(57429U);
    msg.setSourceEntity(148U);
    msg.setDestination(2133U);
    msg.setDestinationEntity(51U);
    msg.value = 0.5771126822031336;

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
    msg.setTimeStamp(0.683159514452799);
    msg.setSource(4684U);
    msg.setSourceEntity(135U);
    msg.setDestination(10922U);
    msg.setDestinationEntity(37U);
    msg.value = 0.4985310868457673;

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
    msg.setTimeStamp(0.3876001904354004);
    msg.setSource(13120U);
    msg.setSourceEntity(28U);
    msg.setDestination(14084U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7832002180487198;

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

  return test.getReturnValue();
}
