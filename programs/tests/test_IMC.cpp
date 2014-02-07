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
    msg.setTimeStamp(0.21632959928459916);
    msg.setSource(46767U);
    msg.setSourceEntity(220U);
    msg.setDestination(33454U);
    msg.setDestinationEntity(132U);
    msg.state = 19U;
    msg.flags = 6U;
    msg.description.assign("EPFLIDBIYZLWSDMHYVITZRDHPXOAWF");

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
    msg.setTimeStamp(0.5275643199856216);
    msg.setSource(33907U);
    msg.setSourceEntity(228U);
    msg.setDestination(41991U);
    msg.setDestinationEntity(174U);
    msg.state = 207U;
    msg.flags = 196U;
    msg.description.assign("JVNLJAEGFDKOEOSXVUPABKJCLWMCQYFGMHZSUMYPFAFHNUMHVBTZXUUYPKLVIJXQRDGVYIGLCBFJHWZOQACRDTSFJQOXMBKIWEQCKTISVPEHCAQNARBZDAWLGQR");

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
    msg.setTimeStamp(0.1967946926622609);
    msg.setSource(6374U);
    msg.setSourceEntity(65U);
    msg.setDestination(24099U);
    msg.setDestinationEntity(47U);
    msg.state = 178U;
    msg.flags = 174U;
    msg.description.assign("YCSSSIHTQBPGQAZKXWNHEUONCGIFFHGFCEJWDZIDOZROWFIV");

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
    msg.setTimeStamp(0.6906224655395147);
    msg.setSource(57745U);
    msg.setSourceEntity(232U);
    msg.setDestination(47073U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.7022725867186347);
    msg.setSource(60253U);
    msg.setSourceEntity(33U);
    msg.setDestination(58289U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.5395477800229772);
    msg.setSource(932U);
    msg.setSourceEntity(208U);
    msg.setDestination(25531U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.33984646584483824);
    msg.setSource(31247U);
    msg.setSourceEntity(174U);
    msg.setDestination(38743U);
    msg.setDestinationEntity(86U);
    msg.id = 66U;
    msg.label.assign("FOWNYWYVYZRGCKECJQTMARZUCVPKFQDHHSIRPFYELTABLOVEJTBIMCKSUTGVFWVMMUDXSUVOQABQDCUVGKDTUXEWJDIHJYVYBDEBQQGOOWXOTHRRQKBPENZLRSJBXRJNWSGGRPCCHTKAKFIBIYBLQAAVZNPFTN");
    msg.component.assign("TPJIRJJKAXMZCLYOZPCSANHLFZLJAHDGKOXUIANORIWJUOEESUTZQOLEPNURLQGNPWSNNFBSXCWWC");
    msg.act_time = 49064U;
    msg.deact_time = 11798U;

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
    msg.setTimeStamp(0.4279590137421031);
    msg.setSource(45321U);
    msg.setSourceEntity(123U);
    msg.setDestination(11499U);
    msg.setDestinationEntity(229U);
    msg.id = 167U;
    msg.label.assign("JCIIPSWLNALYMBFFZLCJDOSFIDDNDZEBVPIAMXVYCUARQVXRQBNXANTLARTAGJSZDFMZPVJZWRXNOWYZSXLI");
    msg.component.assign("YTDTPXYXRFOZUQNMYSIOTVJFZGAILNHPLPLVQJUBZUADUYSRVAZJBAMMMIETINJAYYWPNHWHAMQ");
    msg.act_time = 42943U;
    msg.deact_time = 40491U;

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
    msg.setTimeStamp(0.23848641008596272);
    msg.setSource(5645U);
    msg.setSourceEntity(2U);
    msg.setDestination(53292U);
    msg.setDestinationEntity(192U);
    msg.id = 235U;
    msg.label.assign("LMEQONPNPLDCAOKZXCODNXOTMGSQCGGLPXNNASMEOCNMJHQBEVCUGVZHSEFWYIZRXPTTUMUFSUGMZKVCYIWEDVIDUUMKNDVSWQWTOIWCRVAFZKJPPFAGUSISRVQTDREKOPIKWIGQRILYFRXGTBKGLODNYPSBQHJDLDDXZQLMBWSFUBHXCHEEHZKEHWFEAMQXAWYAAOBRJXFRKPOFJYGCLTKFJNQYBHXVHBRYVHJRSJYWJMZJITYU");
    msg.component.assign("YJBRDGURFPSULEMWPQHKSGOGXPAOSHLCKLNHOUQFYWXGSJACSKZDLWOHMXUEDCGDMKUHHKS");
    msg.act_time = 53476U;
    msg.deact_time = 50748U;

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
    msg.setTimeStamp(0.6549771241599457);
    msg.setSource(14582U);
    msg.setSourceEntity(201U);
    msg.setDestination(55058U);
    msg.setDestinationEntity(132U);
    msg.id = 62U;

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
    msg.setTimeStamp(0.24802015015730317);
    msg.setSource(16630U);
    msg.setSourceEntity(132U);
    msg.setDestination(10240U);
    msg.setDestinationEntity(59U);
    msg.id = 59U;

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
    msg.setTimeStamp(0.7756513092093676);
    msg.setSource(48258U);
    msg.setSourceEntity(146U);
    msg.setDestination(27482U);
    msg.setDestinationEntity(82U);
    msg.id = 233U;

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
    msg.setTimeStamp(0.5906504807951657);
    msg.setSource(16603U);
    msg.setSourceEntity(56U);
    msg.setDestination(28403U);
    msg.setDestinationEntity(106U);
    msg.op = 58U;
    msg.list.assign("JYCVUKKMDKANYGGMPEHETUHDFIJZZPXEFCPLQLEASUYBMXOFNBKQXMXFYOSHTDPRWDHIPLSBMGIPENATCLJNXYVQJWSOJZQXVQRWMCBWROTOCYUUNFTSMTRWGUESCZRXXPIUJFMTWDGNLIHWVRPSPBAYTKOFDOWENRJVOWFBLGWALGCTCBVGNUOESRHSIZTDXIIVOZV");

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
    msg.setTimeStamp(0.9378832236963863);
    msg.setSource(18049U);
    msg.setSourceEntity(234U);
    msg.setDestination(3828U);
    msg.setDestinationEntity(35U);
    msg.op = 63U;
    msg.list.assign("IBZVUZPLSQDGTJJADCXXWXJVZVDNUOFFRNQZGCIJWUNGZRQGBMKKJLFNDEWLGPMRGYEUPRZZORERCBHRSTIPEOWKVIAAHHHKUIXKNVTKAECRRPMAYQXF");

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
    msg.setTimeStamp(0.268757351442655);
    msg.setSource(34648U);
    msg.setSourceEntity(35U);
    msg.setDestination(37270U);
    msg.setDestinationEntity(191U);
    msg.op = 52U;
    msg.list.assign("NLIHALJNWGERGLINJOASFELZLKPZQPZTAKACRXMWA");

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
    msg.setTimeStamp(0.0672757081437253);
    msg.setSource(63549U);
    msg.setSourceEntity(30U);
    msg.setDestination(40402U);
    msg.setDestinationEntity(86U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.9234319366514183);
    msg.setSource(39462U);
    msg.setSourceEntity(243U);
    msg.setDestination(49188U);
    msg.setDestinationEntity(216U);
    msg.op = 237U;

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
    msg.setTimeStamp(0.49071751763301186);
    msg.setSource(2136U);
    msg.setSourceEntity(248U);
    msg.setDestination(38359U);
    msg.setDestinationEntity(66U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.6120950617592936);
    msg.setSource(63959U);
    msg.setSourceEntity(154U);
    msg.setDestination(26105U);
    msg.setDestinationEntity(136U);
    msg.value = 172U;

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
    msg.setTimeStamp(0.8073447452836672);
    msg.setSource(6144U);
    msg.setSourceEntity(97U);
    msg.setDestination(43839U);
    msg.setDestinationEntity(25U);
    msg.value = 254U;

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
    msg.setTimeStamp(0.4630351110959471);
    msg.setSource(35971U);
    msg.setSourceEntity(172U);
    msg.setDestination(55668U);
    msg.setDestinationEntity(54U);
    msg.value = 141U;

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
    msg.setTimeStamp(0.11982907657980024);
    msg.setSource(9772U);
    msg.setSourceEntity(158U);
    msg.setDestination(44308U);
    msg.setDestinationEntity(183U);
    msg.consumer.assign("ZAXZJUDGJNRHFVURDYHWMDJTJAVIEKJYTBIKPDLEDKVGSSQQHMZKHRRJZIDFSJQLAYSMLGAZKNLAWKTRLJMMPXCRFNHTFHNJSHERBDIFUTFAXCYGELPBUECAST");
    msg.message_id = 29809U;

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
    msg.setTimeStamp(0.9794547509308338);
    msg.setSource(16575U);
    msg.setSourceEntity(15U);
    msg.setDestination(56477U);
    msg.setDestinationEntity(229U);
    msg.consumer.assign("GTNKJVRBZNTOZOKDBCWSSNXJBPKPTPGBQZIKSNWSLPXGFOOOWSNDNBEUVKVORIAJHISDFEYZUQGKJEUYPEFLBPARMQSLWEHUWDHUXCEUGUERVAHYTMCYFYRGMQKMTHUFRJWIYIPMGMYPNCQCIOTKXRSJACQDLJXMNFSATZMBVBVVIHLXELNSNXLICXPTIUYIADRCHDTZHJ");
    msg.message_id = 51742U;

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
    msg.setTimeStamp(0.027025324630012282);
    msg.setSource(6196U);
    msg.setSourceEntity(68U);
    msg.setDestination(15731U);
    msg.setDestinationEntity(218U);
    msg.consumer.assign("LFGCUYPVGXCHFOMVSRXECJTXGLBJPXRFAWGPHTBUZFD");
    msg.message_id = 17897U;

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
    msg.setTimeStamp(0.4884569320282881);
    msg.setSource(54430U);
    msg.setSourceEntity(210U);
    msg.setDestination(48682U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.20457660785747078);
    msg.setSource(33366U);
    msg.setSourceEntity(176U);
    msg.setDestination(47500U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.8222485787594114);
    msg.setSource(19501U);
    msg.setSourceEntity(194U);
    msg.setDestination(45123U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.05337561939914204);
    msg.setSource(20631U);
    msg.setSourceEntity(237U);
    msg.setDestination(39591U);
    msg.setDestinationEntity(97U);
    msg.section.assign("GEJBUJIQOSGNTKUKIYRWIXQDHERUQYGLTOUYYXWTHWOFLZFQAKNATWLKVCIKTZJRDBVDHBIHMWGPSUVIGWUGFPJPTBJPNMVWQXANWFYRYDCNVITLKCRQOOGGFSDDFTZFOMLKATUCNICTCZCFGZLHMEVYNPEXQWXJLPSRQYEAPUZXSXEEPBMHYNLRVADWKMDZHBBIOHKBOOSAPS");
    msg.param.assign("SMCFOJGJTRVGLVNAQDOMXTGEELSXXJXDHAIDKQUQMAJRHDQIPAYTQMCOBHJMWHDOTJXWVOYZGTBZBTQSXTWFHYICKNVEAURFWBVZEACNKLFYGMKLYXVAKNCVLDSSIJZIPWBXZCJWHOCJZRNEIEBXMIWPEPMYCLWNEVWGNMQSFOQJBNPFYAHUFSLBHGRYPKAGPSUTHYUOPRCDRUKIW");
    msg.value.assign("NAOISBTDOJEGSMIXJBWNDEMVGXNQIQSEXUCFZCUWXOUXQNYFVEOSCIGRBMIKHPCLPTFWWVCDJYPANAYEZXQYQGJRVLGAILTCKDNZIQKZRAPAVJHYJWATIYSLRSWOVVRPYCLPFFMKUBNFRUTYZJFHEEUDWMW");

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
    msg.setTimeStamp(0.11610873216613915);
    msg.setSource(61285U);
    msg.setSourceEntity(78U);
    msg.setDestination(53440U);
    msg.setDestinationEntity(77U);
    msg.section.assign("QHZEZVLLFKJCHKYDSAQMVAPRKMGOLCYNAQQDKUOBMJCQOJYHPRMAOJMNEKUGAUMMZROWIPNPHDVISFPAJJ");
    msg.param.assign("NTEYQCWJARMQPPKTWHGHDLQYHEPGTKBUZEMBFXJWEDJFTGCACWDCB");
    msg.value.assign("DWEWHWCIIIJSGKLRWOTAORBEN");

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
    msg.setTimeStamp(0.35850268185605394);
    msg.setSource(55485U);
    msg.setSourceEntity(176U);
    msg.setDestination(6374U);
    msg.setDestinationEntity(86U);
    msg.section.assign("CFJXRJNJFVBRDUTDWGDDHEKXHAVGCCMEMWNPXQCYZUBYLTWVWXGVLDJOOLBFQVZAENWCXOGPBWYPMMFOBPXGIUAUGI");
    msg.param.assign("RPVJDHPMNYWAZZMFTSCCUCFXYULVXSRYIHNNJFQUUSPGIVXBPQOQVMKFZTEQDKAABJFYGBGSGEBTKJWHRV");
    msg.value.assign("FTYNMSZGYPURUIDDRFFLKVZVQUQUNQPKMCWAIBHHVLNALTZRMKCAPQJAVFAVHPEFEUWKMXPABYDXXQOLCXUTHYWHIXCBJBRHNKSLQGKCKXJUIEWCRAAQGJORMHSJTDDJJGLGBEGSSGVEAWMXVZONXOFG");

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
    msg.setTimeStamp(0.0789622863444045);
    msg.setSource(15275U);
    msg.setSourceEntity(155U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(180U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.8807405262519826);
    msg.setSource(54167U);
    msg.setSourceEntity(127U);
    msg.setDestination(55881U);
    msg.setDestinationEntity(186U);
    msg.op = 7U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("FDXQAGTKKLSZFJUXCNGJHTVCSYEMIRWFRDIDTBXLDVEHMXGZRSBWLMVKGPFPUZYBCWIIFQRIHCOMGDHZRCVCOSTGSNUQLKMHMRDVKLKIOONHLVZOCDUPXAPLJNTSKZYNOTFXJYEVYBIXPWLIQUBMAFKYMXPYWTWJHEOFOGEYZSBTQEACFBEWVDUSGPHLBUQNVE");
    tmp_msg_0.param.assign("KIWVAYKPLNSGBQKPHJPXHLUMGCYECOJLUTTUGCNUAWFDYKFEXFCQKVORYJAUHSDHQZEZLWDFYHBQZKEVNGTGTSBWFIMZPUWAELDVNCBKMRBNYKTNSOZHBNBAZGULAWRZEQYOLKTDQXEWWFUNHPAHDFLHFXE");
    tmp_msg_0.value.assign("UCDNXBZTUQOFZRSXBG");
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
    msg.setTimeStamp(0.18329494445886751);
    msg.setSource(8208U);
    msg.setSourceEntity(115U);
    msg.setDestination(82U);
    msg.setDestinationEntity(141U);
    msg.op = 33U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IPMMKJQTLCBZIBXNRQVIEXKZEUMBEHQSHSBNEDEPBDYGUWGHYRAILZZUOWJPKCRVLWNFHEMNWNHJRGHRSDXARSCZEPCUVLKYTOPWGERSAXTDYIUIPBJVCKJTFKPVMYWBFSMQNSUYBBMFJLFPCSZCOCWKYPFGAVGOEXQXTXQHRAFGQXVNOFGDSOKJHIRTPTSDLYWXZCDWMJ");
    tmp_msg_0.param.assign("NRNZOIYTMKBPXTCZFMDUXWTJWUDCWYJKBAGRMRUAGELDLUHCYJKOJBAXSCGHYDWPGSZITKYIIYVMLRIFVTAKDO");
    tmp_msg_0.value.assign("QQSRLJJVTDQGOLADUQFHMZOYCTIGXJQVHACHAIGZPSWBOWPSRYBLINMRCBYMRTBNGTIMCVFYIXWHRDUTNAIKXROGCNXYGCBTZJPHNFIMKFBVLYIBJZSTXOEJNJPTPHSLSZFANNPKKZTWGH");
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
    msg.setTimeStamp(0.09371444367293169);
    msg.setSource(47530U);
    msg.setSourceEntity(237U);
    msg.setDestination(39615U);
    msg.setDestinationEntity(180U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.2190978457474012);
    msg.setSource(3103U);
    msg.setSourceEntity(67U);
    msg.setDestination(47141U);
    msg.setDestinationEntity(38U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.29762341875480236);
    msg.setSource(63554U);
    msg.setSourceEntity(58U);
    msg.setDestination(24369U);
    msg.setDestinationEntity(104U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.35737895489872606);
    msg.setSource(39636U);
    msg.setSourceEntity(115U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(75U);
    msg.total_steps = 183U;
    msg.step_number = 91U;
    msg.step.assign("HSVDDPVTHRHDCJCCFTQJJQHSFQXDCBSKEFBCARZUKURMNDTGKUZGDLWFEVBGJUMUCILAVRDIJSMQVKQXFYOQTMTJXYSWONIXYBFNSCPAAJGBP");
    msg.flags = 74U;

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
    msg.setTimeStamp(0.22389095638738132);
    msg.setSource(3380U);
    msg.setSourceEntity(58U);
    msg.setDestination(30801U);
    msg.setDestinationEntity(28U);
    msg.total_steps = 107U;
    msg.step_number = 167U;
    msg.step.assign("HZLXIAUVLUHISOKETFFPZFIEWQXPSSYPOWOQGEARMJBAAFWGKYXWZVQGYRNDEXGLTXBHCAVHZRBSUWFCIHXSCBJNYUGXWKQAN");
    msg.flags = 86U;

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
    msg.setTimeStamp(0.5495583284823662);
    msg.setSource(43188U);
    msg.setSourceEntity(40U);
    msg.setDestination(60183U);
    msg.setDestinationEntity(50U);
    msg.total_steps = 192U;
    msg.step_number = 35U;
    msg.step.assign("DJTHYUDGLMULZHUBKTSQYDXAXUXNGVRRHRHOILIYZCCXNPAKGFBFDTEFYAEISWJXXBQADZLZVOVPCP");
    msg.flags = 224U;

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
    msg.setTimeStamp(0.471221811583866);
    msg.setSource(52132U);
    msg.setSourceEntity(151U);
    msg.setDestination(44791U);
    msg.setDestinationEntity(153U);
    msg.state = 205U;
    msg.error.assign("PHQIRZGYKPPTBDEHDEHNTLADKAWYQEZUZQIDPRQFYGASY");

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
    msg.setTimeStamp(0.15226756140145903);
    msg.setSource(45803U);
    msg.setSourceEntity(7U);
    msg.setDestination(62267U);
    msg.setDestinationEntity(116U);
    msg.state = 54U;
    msg.error.assign("UJKSHHZVIEYVRLGUXEALRCDXEWMLDDFEQRKKRBMLOCENPBL");

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
    msg.setTimeStamp(0.4976442920523242);
    msg.setSource(15930U);
    msg.setSourceEntity(97U);
    msg.setDestination(59736U);
    msg.setDestinationEntity(174U);
    msg.state = 46U;
    msg.error.assign("OGUGICCZPTBYWVKNMBOWZERJWIOPSLRGFFMEZKTCSMVCDMOUJSKUVLHGISOTKWIJTQANBELJQSGIDJNKRJLOEOQVHMIXENUFSXLECIJFRHDOWDYYMOQFKLWJAYUDQOSKVRZPZYPNPGTDNALCCXMBXRUHSFHHRVAQPBQSFYEBYZPTUEFWIRUDUWDHHXFVAQCFBLSU");

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
    msg.setTimeStamp(0.15270642967809722);
    msg.setSource(6530U);
    msg.setSourceEntity(191U);
    msg.setDestination(60183U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.5255981927990865);
    msg.setSource(52453U);
    msg.setSourceEntity(51U);
    msg.setDestination(40027U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.6495811605440126);
    msg.setSource(10781U);
    msg.setSourceEntity(23U);
    msg.setDestination(26187U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.41503847475607125);
    msg.setSource(20387U);
    msg.setSourceEntity(2U);
    msg.setDestination(25275U);
    msg.setDestinationEntity(87U);
    msg.op = 253U;
    msg.speed_min = 0.057571618847221395;
    msg.speed_max = 0.7913199601834694;
    msg.long_accel = 0.660126237789574;
    msg.alt_max_msl = 0.7994120405836043;
    msg.dive_fraction_max = 0.9901558243581;
    msg.climb_fraction_max = 0.6509955554032006;
    msg.bank_max = 0.4651221644884552;
    msg.p_max = 0.028782749291797027;
    msg.pitch_min = 0.09915972924693073;
    msg.pitch_max = 0.7563737072331829;
    msg.q_max = 0.6836890907720898;
    msg.g_min = 0.13190200577088218;
    msg.g_max = 0.9279551110995966;
    msg.g_lat_max = 0.9321515183100187;
    msg.rpm_min = 0.3491744139522197;
    msg.rpm_max = 0.14276328400991056;
    msg.rpm_rate_max = 0.7880352963426185;

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
    msg.setTimeStamp(0.6574693028964944);
    msg.setSource(50356U);
    msg.setSourceEntity(243U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(154U);
    msg.op = 251U;
    msg.speed_min = 0.00535375812051897;
    msg.speed_max = 0.2515693941559627;
    msg.long_accel = 0.29192306644942057;
    msg.alt_max_msl = 0.3891139828010133;
    msg.dive_fraction_max = 0.7184308951075057;
    msg.climb_fraction_max = 0.8837125633977476;
    msg.bank_max = 0.502037018908112;
    msg.p_max = 0.8658466873285474;
    msg.pitch_min = 0.2441291953255753;
    msg.pitch_max = 0.7142732316420592;
    msg.q_max = 0.9593090879800027;
    msg.g_min = 0.6008286623851075;
    msg.g_max = 0.41830177528839196;
    msg.g_lat_max = 0.7559784796258165;
    msg.rpm_min = 0.7067438185863746;
    msg.rpm_max = 0.2923259827842185;
    msg.rpm_rate_max = 0.4361087576524052;

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
    msg.setTimeStamp(0.8368111348112878);
    msg.setSource(41874U);
    msg.setSourceEntity(60U);
    msg.setDestination(5515U);
    msg.setDestinationEntity(6U);
    msg.op = 161U;
    msg.speed_min = 0.18040292813608005;
    msg.speed_max = 0.2909456557273692;
    msg.long_accel = 0.9184174171403054;
    msg.alt_max_msl = 0.7142823978722189;
    msg.dive_fraction_max = 0.0900293087097307;
    msg.climb_fraction_max = 0.4804544058595933;
    msg.bank_max = 0.10628124986855858;
    msg.p_max = 0.22447519666378568;
    msg.pitch_min = 0.6498709735007223;
    msg.pitch_max = 0.3662047460645378;
    msg.q_max = 0.9686985669275691;
    msg.g_min = 0.5486809365682663;
    msg.g_max = 0.35389811246885117;
    msg.g_lat_max = 0.9560514623058937;
    msg.rpm_min = 0.10067786242204346;
    msg.rpm_max = 0.7410130899005843;
    msg.rpm_rate_max = 0.03322182594778689;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.2842132985953757);
    msg.setSource(19544U);
    msg.setSourceEntity(90U);
    msg.setDestination(8510U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.9056926160227335;
    msg.lon = 0.23352351111579694;
    msg.height = 0.38611494899685617;
    msg.x = 0.5212334678861675;
    msg.y = 0.6993324762919066;
    msg.z = 0.11603327463353019;
    msg.phi = 0.165918169817044;
    msg.theta = 0.0794174456740887;
    msg.psi = 0.2907130015849525;
    msg.u = 0.9725486808347128;
    msg.v = 0.07315350648233265;
    msg.w = 0.9770845222962591;
    msg.p = 0.832238190507748;
    msg.q = 0.18237615693027798;
    msg.r = 0.8739545804056378;
    msg.svx = 0.7438548555186467;
    msg.svy = 0.005423798468295327;
    msg.svz = 0.9213262648682001;

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
    msg.setTimeStamp(0.3717153333150306);
    msg.setSource(55560U);
    msg.setSourceEntity(198U);
    msg.setDestination(5669U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.9979661718324704;
    msg.lon = 0.6643537616643609;
    msg.height = 0.5735843980955307;
    msg.x = 0.4827053485706083;
    msg.y = 0.02579570568762457;
    msg.z = 0.39242593503529133;
    msg.phi = 0.4940480589153421;
    msg.theta = 0.6942840697890926;
    msg.psi = 0.9650233027352455;
    msg.u = 0.500884329320661;
    msg.v = 0.7117024798344652;
    msg.w = 0.44189613663304683;
    msg.p = 0.20288676959550633;
    msg.q = 0.36422085989718433;
    msg.r = 0.8422796271351158;
    msg.svx = 0.09276817995199971;
    msg.svy = 0.020633000674980084;
    msg.svz = 0.12807609412096232;

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
    msg.setTimeStamp(0.6331222106850332);
    msg.setSource(58149U);
    msg.setSourceEntity(233U);
    msg.setDestination(10960U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.748184665755174;
    msg.lon = 0.824491701582584;
    msg.height = 0.7863314405917683;
    msg.x = 0.6232635906335358;
    msg.y = 0.26750718396184625;
    msg.z = 0.9403755081652067;
    msg.phi = 0.23584700230360467;
    msg.theta = 0.15672023919855493;
    msg.psi = 0.43066973605363923;
    msg.u = 0.19348358507146723;
    msg.v = 0.8666729275385845;
    msg.w = 0.3827305732129834;
    msg.p = 0.2295504082759925;
    msg.q = 0.16749034955883768;
    msg.r = 0.7989700451977853;
    msg.svx = 0.6702447574571997;
    msg.svy = 0.11095948154101332;
    msg.svz = 0.6383156546472185;

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
    msg.setTimeStamp(0.6901708875792811);
    msg.setSource(63152U);
    msg.setSourceEntity(195U);
    msg.setDestination(17873U);
    msg.setDestinationEntity(219U);
    msg.op = 144U;
    msg.entities.assign("HZCNKGFGXZDJK");

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
    msg.setTimeStamp(0.5786360179590478);
    msg.setSource(52859U);
    msg.setSourceEntity(137U);
    msg.setDestination(25220U);
    msg.setDestinationEntity(163U);
    msg.op = 176U;
    msg.entities.assign("EPDDNVVAGVCZRCTPBHWQARBQKSBRNOLLJMDDWOMKSEUYYQIXAVXWSVSDDQGLFISWUONOSYMUGEUUFDNLNBDLKMKIICNHZBWFENGCZ");

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
    msg.setTimeStamp(0.8793984352250325);
    msg.setSource(51357U);
    msg.setSourceEntity(154U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(150U);
    msg.op = 27U;
    msg.entities.assign("UVMWTJARBNCBPJWYSANPNMPJSBHYEZWHRKLNVDFKWISUTDZCEBRWQDDHNLZMETYKIXYJCQFUHXJLPOWJGRJCHKZICNOPGEQCLMOJKJKTAZDKGQYRYOUQAHFFKGCSSMLUAZ");

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
    msg.setTimeStamp(0.32373535583104074);
    msg.setSource(13509U);
    msg.setSourceEntity(114U);
    msg.setDestination(45379U);
    msg.setDestinationEntity(7U);
    msg.type = 37U;
    msg.speed = 36196U;
    const char tmp_msg_0[] = {-111, -17, 32, -116, -61, 77, -40, 75, -11, -76, -66, 118, 11, -116, -84, 76, 36, -59, -7, 70, -49, -10, -4, -109, -64, 123, -82, 33, 99, -11, 15, 72, -109, 65, 29, -92, -79, 75, 54, -22, 75, 101, -93, 118, -35, 64, -5, -68, -51, 69, 29, -114, -28, -58, 89, 123, -77, 27, -67, -55, 78, -66, -112, -1, 38, -123, 47, 90, -63, 56, -81, 35, -58, 55, -102, -22, -10, -125, 105, 48, -5, 55, 106, -120, 11, 121, 41, 110, 48, 84, -118, 121, -111, -38, 58, -22, -78, 115, -57, -25, -82, -120, -17, 107, 85, -7, -91, 39, 41, -123, -24, 43, -119, -98, 107, 26, -36, 83, 32, 1, 36, -69, -53, 69, -58, 125, 63, -12, -81, -118, -71, 84, -64, -125, -15, -120, 68, 12, -22, 33, 63, -113, -109, 40, 77, 109, -66, -75, -32, 41, -33, 15, 62};
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
    msg.setTimeStamp(0.8964240576816891);
    msg.setSource(49726U);
    msg.setSourceEntity(175U);
    msg.setDestination(45395U);
    msg.setDestinationEntity(219U);
    msg.type = 203U;
    msg.speed = 48267U;
    const char tmp_msg_0[] = {-120, 4, 41, -85, 115, 5, -110, 1, -110, -5, 6, -15, 41, 101, -98, 121, 24, -100, 29, 118, 71, -21, 64, -51, -31, 82, 8, 76, -55, 53, -54, 9, -59, -40, -98, 56, -35, -92, 82, -95, -128, 33, -69, -5, 91, 92, 68, 107, -54, -45, 59, -22, 33, -80, 4, 18, -94, -7, -115, 78, -79, 88, -125, -103, -62, 112, 61, -50, 98, 126, 14, 17, 7, 36, -88, 14, 104, -97, -42, -32, -15, 71, 116, 21, -31, -84, -108, 73, 15, 68, 118, 116, -95, 67, 107, -124, -99, 14, 111, 29, -78, 102, -15, -111, -51, 66, 90, -109, 113, -117, -85, 28, -78, 32, -63, -19, 27, 39, 30, -52, 63, 118, 93, 126, 36, 121, 114, -5, -67, 87, -92, -88, -91, -11, -85, -115, 45, -19, 71, 125, -10, 52, 104, 12, 45, 7, 25, 107, -13, -34, 94, 40, 63, 109, -117, -107, -97, 104, 123, 70, -62, -100, -103, 28, -83, -116, -86, 29, 123, -15, 9, 125, 89, -47, -50, 48, -99, -17, 103, -114, 47, -101, 92, -12, 9, 74, -100, 70, 106, -56, 44, -32, -12, -29, -4, 105, 5, 79, 114, -44, 74, -69, -56, -75};
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
    msg.setTimeStamp(0.3738925542055902);
    msg.setSource(49918U);
    msg.setSourceEntity(182U);
    msg.setDestination(30904U);
    msg.setDestinationEntity(116U);
    msg.type = 85U;
    msg.speed = 18295U;
    const char tmp_msg_0[] = {-49, -33, 22, 62, 75, 3, 57, -94, -42, 117, 86, 95, 5, -35, 14, -6, 89, 72, -16, 6, 11, -48, -6, 103, 69, -24, 112, 100, 38, -29, 82, -106, -13, -63, 112, -86, -35, 115, -27, 8, -68, 110, 105, 25, -30, -56, -114, 46, -90, -128, -42, -123, -19, 47, 117, 23, -122, -44, 110, 106, -2, -4, -93, 115, 31, -121, -8, -93, 85, -125, -95, -48, -109, 59, 49, -82, 77, 87, 113, 100, 78, -35, 46, -73, -117, -64, -36, 47, -8, -43, -65, 25, 123, 60, 18, -87, -46, 60, -11, 115, 32, 12, -58, -59, -106, -90, -65, -76, -98, 35, -48, 76, 66, 18, 25, 29, -73, 3, -52, -32, -35, 4, 43, -87, -108, -48, -25, 120, 79, -19, 96, 124, -105, -125, -55, 48, -58, -1, -65, 95, 11, 94};
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
    msg.setTimeStamp(0.5373289064800117);
    msg.setSource(50295U);
    msg.setSourceEntity(105U);
    msg.setDestination(31476U);
    msg.setDestinationEntity(145U);
    msg.op = 209U;
    msg.tas2acc_pgain = 0.1845739905401802;
    msg.bank2p_pgain = 0.7082378536154526;

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
    msg.setTimeStamp(0.4054624123124453);
    msg.setSource(43155U);
    msg.setSourceEntity(186U);
    msg.setDestination(37717U);
    msg.setDestinationEntity(43U);
    msg.op = 0U;
    msg.tas2acc_pgain = 0.8914755518031928;
    msg.bank2p_pgain = 0.04841409184634993;

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
    msg.setTimeStamp(0.263863531850842);
    msg.setSource(60162U);
    msg.setSourceEntity(144U);
    msg.setDestination(20422U);
    msg.setDestinationEntity(72U);
    msg.op = 64U;
    msg.tas2acc_pgain = 0.13802240684034517;
    msg.bank2p_pgain = 0.1971534878590141;

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
    msg.setTimeStamp(0.18295922584177504);
    msg.setSource(56184U);
    msg.setSourceEntity(90U);
    msg.setDestination(4142U);
    msg.setDestinationEntity(79U);
    msg.available = 4143948418U;
    msg.value = 126U;

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
    msg.setTimeStamp(0.6324096866561748);
    msg.setSource(64235U);
    msg.setSourceEntity(77U);
    msg.setDestination(23237U);
    msg.setDestinationEntity(30U);
    msg.available = 850649541U;
    msg.value = 34U;

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
    msg.setTimeStamp(0.5969786861062759);
    msg.setSource(42952U);
    msg.setSourceEntity(97U);
    msg.setDestination(34311U);
    msg.setDestinationEntity(153U);
    msg.available = 2720052749U;
    msg.value = 208U;

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
    msg.setTimeStamp(0.22668766387121408);
    msg.setSource(16906U);
    msg.setSourceEntity(1U);
    msg.setDestination(12836U);
    msg.setDestinationEntity(47U);
    msg.op = 116U;
    msg.snapshot.assign("QQBJHBYCTWPSZSLKHULEUTWRYBKNQUGXUJYTLXPXEATAIGAMKVWYJCFLGPNQGCPMZXCUOAVBWJRKNQIJETZI");
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {-65, -61, -83, 26, 24, -9, -81, -53, -86, 69, 76, -18, -63, 8, -79, 77, 112, -8, -18, -38, 100, -3, -58, -95, 105, 114, 99, -98, -96, -94, -21, 37, -121, 84, 107, 55, 90, 108, -10};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.20983745384035724);
    msg.setSource(54230U);
    msg.setSourceEntity(245U);
    msg.setDestination(59351U);
    msg.setDestinationEntity(191U);
    msg.op = 73U;
    msg.snapshot.assign("GCXPDRKLVITWMVITOXJQLXFXIBUZCQTEZSLIHSDXZNTGPYFVLJHUFYZGYJCHKWGAHWRQIUSUJSHCPMXXDMLIYUNWUNBGZTSRBXEWZWTQWBRYGEQAQVOJKNFRLHTKTUPEELJJDBIBMDAUSMMFSQVAMKKLVBBHDZSOAMNFERARGK");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 103U;
    tmp_msg_0.list.assign("TOJBCXWISYQSVAWUKTFMPPUTKLAFLLYZL");
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
    msg.setTimeStamp(0.3545456627762523);
    msg.setSource(13414U);
    msg.setSourceEntity(247U);
    msg.setDestination(12032U);
    msg.setDestinationEntity(165U);
    msg.op = 128U;
    msg.snapshot.assign("OHXCIYWMCFEJZQUMDUKZXRVEBUFVEYHNOHJGIDWNGLBOIGQ");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 13368568U;
    tmp_msg_0.messages.assign("KXJCBQKPQANRRDY");
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
    msg.setTimeStamp(0.2712512463846799);
    msg.setSource(42659U);
    msg.setSourceEntity(115U);
    msg.setDestination(44887U);
    msg.setDestinationEntity(250U);
    msg.op = 29U;
    msg.name.assign("EHNMOQATYXRLLAYQKFLYGEXIKJJZRMTLFLJMHBRNBGLKXVLGYEPNDV");

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
    msg.setTimeStamp(0.23682476285469356);
    msg.setSource(36476U);
    msg.setSourceEntity(122U);
    msg.setDestination(14355U);
    msg.setDestinationEntity(180U);
    msg.op = 5U;
    msg.name.assign("ULKAWHQBMWWAJXIFXSIEZXKYRQDFLGTKHWOKOBSLFTMROCNDGGYWGSENVCPDCIGLMBJKGQBQOIRNBHKXQEVUDNQUMZTLHJWPKZXBZQUVQDILEIOHOTLSASPFPVAARUAYUMSYLEACGAYXTSAFYWHINXJOLWYYQOCZCZMARPURNHVDNLTYEEVMCJXKFODBMRPXHDWGGEIPJZZUNRJKVBVQJHWPOYMENVMZTZIDBHF");

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
    msg.setTimeStamp(0.825153006301743);
    msg.setSource(27732U);
    msg.setSourceEntity(88U);
    msg.setDestination(20299U);
    msg.setDestinationEntity(46U);
    msg.op = 14U;
    msg.name.assign("GOWHFSCZECLDWQU");

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
    msg.setTimeStamp(0.8940219281738101);
    msg.setSource(33428U);
    msg.setSourceEntity(207U);
    msg.setDestination(40979U);
    msg.setDestinationEntity(101U);
    msg.type = 132U;
    msg.htime = 0.5061096387128833;
    msg.context.assign("JWQPTXQLUIHMJEBOCSOGYRHZNVMZZIPRNOJIFDGQ");
    msg.text.assign("DPSQWLTAQSSWGIVMZFYYOOILNKHHZNCNUXXGZOHZXAJCYJUJFKLGZXQLEMGDUVCPVLEVGIRWHKBRDWXYPDGANLEOJNOPTVZBJRQFAMJTUTYBYDCEQFVUYUVUUKQCOVKGCIRGFEVFEPPQOO");

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
    msg.setTimeStamp(0.8190135521193244);
    msg.setSource(54897U);
    msg.setSourceEntity(187U);
    msg.setDestination(1477U);
    msg.setDestinationEntity(240U);
    msg.type = 88U;
    msg.htime = 0.43337170671693404;
    msg.context.assign("TQBFDGCCGPFICHJPXLSSRVZPCVRIXGQHYHWZEYPDGTMENCKYERDNSWTBCUMZFGADHEHRAIJOTQPPGNKIKZFVBDKAMMTADDRXCZXGJLWCXREJI");
    msg.text.assign("FZFPODGWZZZBDRGUPTXEFUYCTCQKJXRFUHWOBHHNZEPDOITQDHDWFXARZGWVSNTGEKLTENLBLSXQVKASNUWRVLXJGKGMQNDOVNSOFEWSFKMBRCCIDMHTUKPZPYIDPYOIPRKPHXLXWMCSGYOBYJFQRJZQTBGJXPVHEIYQIKJFJVIRIEOVCATNAVAWTWDCUVASFOITUNWVABNUMJCHMMGEBJNRABYBKAS");

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
    msg.setTimeStamp(0.0739848081902359);
    msg.setSource(22804U);
    msg.setSourceEntity(167U);
    msg.setDestination(55799U);
    msg.setDestinationEntity(242U);
    msg.type = 51U;
    msg.htime = 0.16557122172014027;
    msg.context.assign("GQVMIDMEAWKJZUXDZMECZDYGOHRHWXCPKXJHLLARITWDGCLPFBRWSXSSUVZKBLSMJLGXZAZBVXVINFKIDUUBBFKBOSPTRESOJKEZZNBORJJJPMHKUMIFPBATQBXNDVWGMNTELPHOLHHNOQAJPOKMNXIANYSCIKPYSECAWURCFRVTRXLVWZEGKQUIGRWFLCG");
    msg.text.assign("XIUSAHHVDTXKWSPQTJVWCHDQIIHBSZWZEMKBKCJMYXRKZSOLKXAGEPLDIVGBHLTMEQQRFPJJMNYUVGTGSZQZO");

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
    msg.setTimeStamp(0.6047521607551175);
    msg.setSource(21535U);
    msg.setSourceEntity(105U);
    msg.setDestination(9955U);
    msg.setDestinationEntity(140U);
    msg.command = 229U;
    msg.htime = 0.15725943856439673;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 106U;
    tmp_msg_0.htime = 0.3408917623149006;
    tmp_msg_0.context.assign("IJKYMFDDPPDQQCOUZDDFPMXZBVGMGGYMGOKXWCKVBY");
    tmp_msg_0.text.assign("RNCBDRAZYJHLWWKKWIWMFSTPIZZFJRPPSRMNDDGWIZIPVGOGXCEGNGFLTYBCLYVHSINRMXQOILOHVVMEOSZEJTJGLJHJAAPTMUSCAGCSTNQJLMYWJNRXCVZBXNSOEKBLSMEKBDWGBODLEOWPUUOXPFBREBFOZUXMVKUHWQOQ");
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
    msg.setTimeStamp(0.5041598843205802);
    msg.setSource(64831U);
    msg.setSourceEntity(0U);
    msg.setDestination(61804U);
    msg.setDestinationEntity(227U);
    msg.command = 123U;
    msg.htime = 0.06455262329552025;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 5U;
    tmp_msg_0.htime = 0.7036445643751602;
    tmp_msg_0.context.assign("RRGCNEOCGFJJIVTXTDIRPHUZQZFGNGRVCVFPQXBNZBHMWDXKAMDEHQACG");
    tmp_msg_0.text.assign("GLSDKKFSPNHFYXGADOQMNZACXNCEFFPZRDVYTRWZQOTLUJFYQUNRICANMTHQUAEXVJWWHTVVGNKXOXWFOPVDHGOFWHFIRTZIMKPUAMKIEETZPMGEJUVEZLYBNGJKNOLQSIPRPCVXCFZIZLNXPALXSDFNDEQHHBVCXKOWDEBASCCJKQBIHBJPDSRMQGUJRMOPYBYCY");
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
    msg.setTimeStamp(0.7962982824262013);
    msg.setSource(14231U);
    msg.setSourceEntity(189U);
    msg.setDestination(44984U);
    msg.setDestinationEntity(214U);
    msg.command = 175U;
    msg.htime = 0.7654702337625345;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 206U;
    tmp_msg_0.htime = 0.6924344284000207;
    tmp_msg_0.context.assign("QVJVFLCQFRVJXGVEJNECIJUKYAVGHPJZUOUBVBXMDDROSROWBTZNKFWJOWAVRWQPTNDSZGPGSKXEWGGBQDKBXHCISKRQNKVAFYYDOIGSWYLRYAMRMAZNNAWQJXHUMZHRPLZWARXTEDHKHHBLTJPBSTLXIMEXLMHLIPAIQBJZOUPXEIWYESYJUCTFFXDPIKUBCHZQELYCNEMLTUQMKKMNFU");
    tmp_msg_0.text.assign("HHHWDGFNJQAVXEYSKGQPNEHVEQLQVAPNAZNETFAIPDXJGHLKASRWKSMTGRZIOYJQEJNQBSRFFMASAYFCKQDSUKCMBHQMYZTRTCMCAOYLBOPRTDLBDVJVZQJO");
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
    msg.setTimeStamp(0.3110662902243959);
    msg.setSource(64366U);
    msg.setSourceEntity(75U);
    msg.setDestination(5167U);
    msg.setDestinationEntity(74U);
    msg.op = 99U;
    msg.file.assign("LQHAZRTYQHRDBMVYFZUSDUESOJCHMRNCOVRHTQTIUJVJNSXG");

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
    msg.setTimeStamp(0.524779951675402);
    msg.setSource(464U);
    msg.setSourceEntity(143U);
    msg.setDestination(24789U);
    msg.setDestinationEntity(188U);
    msg.op = 164U;
    msg.file.assign("MBZJMUXXETPRIPNBSTJLETFWOFMZCZUKYLMXKKVGIDSIVPOYOLCYVVHGJPRJMGASIKOKPEAXNNKDLICNLRRZZTKNYJTGECVSSRLDJGHTUPFSNWDAJXSLMZYAHHEWDCUBKDAO");

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
    msg.setTimeStamp(0.5526390423265771);
    msg.setSource(23310U);
    msg.setSourceEntity(80U);
    msg.setDestination(16339U);
    msg.setDestinationEntity(143U);
    msg.op = 90U;
    msg.file.assign("FYUEKSCOITRAPRDCFNICVNWUYLRFLPXFIBNKQANCUCSIVGYNPNGKXUAHIFRJYZXNVQJHUAOMYJCXMZTUALSSIERSUVYDSHDAHZUVWSOPJYHEFSTNQWKRWRBXFMQPVLLOTMLOQQTMJFFORPNZHESAUPKBGZICGYDCPXXSBBWJQ");

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
    msg.setTimeStamp(0.17576058273392015);
    msg.setSource(57083U);
    msg.setSourceEntity(167U);
    msg.setDestination(53375U);
    msg.setDestinationEntity(121U);
    msg.op = 171U;
    msg.clock = 0.25837783038852435;
    msg.tz = -8;

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
    msg.setTimeStamp(0.06350043263405036);
    msg.setSource(49769U);
    msg.setSourceEntity(12U);
    msg.setDestination(9218U);
    msg.setDestinationEntity(156U);
    msg.op = 94U;
    msg.clock = 0.5396133427476301;
    msg.tz = -14;

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
    msg.setTimeStamp(0.8117711115623191);
    msg.setSource(44593U);
    msg.setSourceEntity(146U);
    msg.setDestination(30212U);
    msg.setDestinationEntity(28U);
    msg.op = 208U;
    msg.clock = 0.36015286930514423;
    msg.tz = 120;

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
    msg.setTimeStamp(0.9484736930629832);
    msg.setSource(146U);
    msg.setSourceEntity(127U);
    msg.setDestination(38347U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.45898972404932126);
    msg.setSource(65001U);
    msg.setSourceEntity(182U);
    msg.setDestination(38148U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.6338935203269662);
    msg.setSource(14864U);
    msg.setSourceEntity(128U);
    msg.setDestination(2070U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.6161414168129774);
    msg.setSource(11558U);
    msg.setSourceEntity(50U);
    msg.setDestination(39660U);
    msg.setDestinationEntity(89U);
    msg.sys_name.assign("FETWZRBHZHBVBJRPMQPCMDIOJGMSDUESSAQOSRGDYVYGLQTKNOOXSYYRTXMNTZKWTPZWUCKAQLECYKOBEDTOQNIANDNKLPUPIWIIAHGSXOMJFPBFHMYGNKNVDAPTTVIHMKBLWFGUVADYNNCLEJAW");
    msg.sys_type = 129U;
    msg.owner = 58034U;
    msg.lat = 0.9745613330267578;
    msg.lon = 0.15150486334083713;
    msg.height = 0.09524041833324326;
    msg.services.assign("LOKCCJLTVUNLSMGWXPOXJZHVKYQHCRAVHFECKSIDBEDDDNNJUROUPOAICZTPIWZHYAXEAEQGMRWQUXRKKTLXWSXJCOFEVRPTFUDORQSZJGDSIGUYQFZNHWNWRPIWBENHKTJWGNOECLGPPQGUCMKEFSCBXDZLHHPKBFZVGGZMFXVYABLNQYUTPCRITDIDJLHOZTSFASMKMBMUYSW");

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
    msg.setTimeStamp(0.0020775753904069827);
    msg.setSource(57676U);
    msg.setSourceEntity(127U);
    msg.setDestination(50337U);
    msg.setDestinationEntity(220U);
    msg.sys_name.assign("CMSSIBEWCVBRGLXEHPACFPNGRNGUDEUOAMEIYCDVZMESZFYRGZVQZNTLYYXPQHCGDJPJAVADJIBGKXWBJOANFFCSFLONOLYHANRLZTIL");
    msg.sys_type = 29U;
    msg.owner = 31265U;
    msg.lat = 0.30700333463439433;
    msg.lon = 0.576149260607837;
    msg.height = 0.521073041779621;
    msg.services.assign("RUBCQJHUMTNNTSGCEAFFDPNUIGLJBOHJLBIUIFWOWEKLEQTAFMUAAYIYMMPJMVLKVQIYFLVWKYNREEGSDGALHRNIVLQOPHJWGZWPJZZYWRICGRCKZRRRTXWTHAQESKXWOZBKVFOISQUWTPECDHTJID");

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
    msg.setTimeStamp(0.08074449539744355);
    msg.setSource(43649U);
    msg.setSourceEntity(198U);
    msg.setDestination(37402U);
    msg.setDestinationEntity(173U);
    msg.sys_name.assign("VXOIIZYRWBGQYNBRTOJTVMNSDAUCWRHJFEHCXUWMTIUFHW");
    msg.sys_type = 168U;
    msg.owner = 48140U;
    msg.lat = 0.3065914142064835;
    msg.lon = 0.23949140806975577;
    msg.height = 0.9715952697374072;
    msg.services.assign("WBHLHGDIHSUPWMYXLWQONMIYTENIDNTHATRLYSWLZESTUXLRKUVU");

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
    msg.setTimeStamp(0.7678581106956397);
    msg.setSource(18258U);
    msg.setSourceEntity(226U);
    msg.setDestination(40767U);
    msg.setDestinationEntity(21U);
    msg.service.assign("XWXQWFCUFDUNHBPBMJORHJWRAKXUVPFCSSTFCDDQLNTMTHXPEKTZXQTNGEGLQJOWHDIQVLFGLKZIOHFLYDJDKBEYQIUEBSEQBRWAZIYKGFYIRUE");
    msg.service_type = 150U;

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
    msg.setTimeStamp(0.07267305796308876);
    msg.setSource(29121U);
    msg.setSourceEntity(150U);
    msg.setDestination(267U);
    msg.setDestinationEntity(3U);
    msg.service.assign("VDNJAEPVRWUEJAOZFGBXIRASMCHQGGYIOMJJXKTCGB");
    msg.service_type = 217U;

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
    msg.setTimeStamp(0.3394636969252508);
    msg.setSource(28403U);
    msg.setSourceEntity(98U);
    msg.setDestination(62871U);
    msg.setDestinationEntity(207U);
    msg.service.assign("DTVHYUXNAXHIJBUARLRWPVRO");
    msg.service_type = 139U;

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
    msg.setTimeStamp(0.22969731958723638);
    msg.setSource(11592U);
    msg.setSourceEntity(234U);
    msg.setDestination(50131U);
    msg.setDestinationEntity(129U);
    msg.value = 0.7936828512477422;

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
    msg.setTimeStamp(0.09350532141325141);
    msg.setSource(16543U);
    msg.setSourceEntity(12U);
    msg.setDestination(20570U);
    msg.setDestinationEntity(2U);
    msg.value = 0.9755115333743252;

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
    msg.setTimeStamp(0.4055882955585697);
    msg.setSource(24820U);
    msg.setSourceEntity(49U);
    msg.setDestination(25079U);
    msg.setDestinationEntity(88U);
    msg.value = 0.3537083757369114;

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
    msg.setTimeStamp(0.1481014383207011);
    msg.setSource(24046U);
    msg.setSourceEntity(218U);
    msg.setDestination(51588U);
    msg.setDestinationEntity(168U);
    msg.value = 0.25462044383913496;

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
    msg.setTimeStamp(0.5101185198813805);
    msg.setSource(9804U);
    msg.setSourceEntity(17U);
    msg.setDestination(55019U);
    msg.setDestinationEntity(21U);
    msg.value = 0.020072854444678878;

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
    msg.setTimeStamp(0.8204891040838072);
    msg.setSource(14000U);
    msg.setSourceEntity(229U);
    msg.setDestination(34723U);
    msg.setDestinationEntity(138U);
    msg.value = 0.3541020793772902;

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
    msg.setTimeStamp(0.4157893740650421);
    msg.setSource(14446U);
    msg.setSourceEntity(124U);
    msg.setDestination(19396U);
    msg.setDestinationEntity(210U);
    msg.value = 0.500438052406877;

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
    msg.setTimeStamp(0.40381930817432965);
    msg.setSource(13926U);
    msg.setSourceEntity(225U);
    msg.setDestination(26368U);
    msg.setDestinationEntity(203U);
    msg.value = 0.30443739701378014;

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
    msg.setTimeStamp(0.10757099978717133);
    msg.setSource(48792U);
    msg.setSourceEntity(185U);
    msg.setDestination(22990U);
    msg.setDestinationEntity(187U);
    msg.value = 0.10181279896221163;

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
    msg.setTimeStamp(0.8078242633180878);
    msg.setSource(58127U);
    msg.setSourceEntity(64U);
    msg.setDestination(35062U);
    msg.setDestinationEntity(99U);
    msg.number.assign("JWJDFTPOAHKYWRSPMWMSDVCIZXACOCBCWREXPPBSSGDTHEFAFGPGODWUJYUIRHODGQJXANUNKZVLIGQBNAFZPYJRYIWNEQOGXONZJYBYKJVUSTLNAKHHNGLUKIDKHXAYTIKSZCXL");
    msg.timeout = 24045U;
    msg.contents.assign("OEUIOAZGOPKKQDHRJVTKSCNSBFBZVDGWMMTXUDRPFNPHFYXKGUNJMGVGIFAYJDQLQESWYABMNWPZNXYQIBIFLLCIJWAWEVLHESOPCXNZRDVKJJWXPMDVBDPRETYHCAKPHFLDGTVQDMIUTTCVUQDYLQASVOKHCXJXCQOZNRJQERRZKEGLUWFRUMHXJGLTZSRMCMTASYIKUCCEFXOTEWBFBALQWIAHUBUYEHOOHZSSNFT");

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
    msg.setTimeStamp(0.3169897574203073);
    msg.setSource(35157U);
    msg.setSourceEntity(205U);
    msg.setDestination(25174U);
    msg.setDestinationEntity(236U);
    msg.number.assign("RKIVUWUSDTCQGFZHSMUFBWMEODLQRQAPXLALCZXHUJTYRWMQIOBENKSVJZPHVVFKHMDCJXGAZCMJPQFQFTHJVPBFDNVTUYTLYQXEANSLNOVNJQTJUGYZAEMBLFYHGLLLB");
    msg.timeout = 48127U;
    msg.contents.assign("FJXWBYRDVBMIULHDOGWUJORWOSXSFZEEUMUVGBKTHHPKYHWTTILMOBBQEDSXRUSICNOKVAVMBXQJCZEUCSILETXTIJPFHWYKBVZFHDJTPZLKLCDAERRVYNIPKIKAXOSIIGLGGUSEYXJ");

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
    msg.setTimeStamp(0.33480310573114935);
    msg.setSource(51151U);
    msg.setSourceEntity(254U);
    msg.setDestination(20257U);
    msg.setDestinationEntity(8U);
    msg.number.assign("UMOWVTKWRMDCDQLBLITXZHAINQIRMNZZXFEUBZDORWVINGDIBJZQFVGCOFXBFKNDTDMAKUOSRFWJQOLGGSYSVWWZYSJTZPAAIHDRMEHIVEPYYCPOKGELXPYQJQJOPXVKCSBZMGULNAEYECJCIJPDWHJYIANUWSBHCUNMIQWYBNMHMXULBJKXGAZFAREPTRZVTYUCJRSFEBTG");
    msg.timeout = 56324U;
    msg.contents.assign("TNJEKRRQNHEIIGNYMRMYNJODSAFDPWUZHORQUH");

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
    msg.setTimeStamp(0.918217459380199);
    msg.setSource(1306U);
    msg.setSourceEntity(243U);
    msg.setDestination(19891U);
    msg.setDestinationEntity(250U);
    msg.seq = 4203218563U;
    msg.destination.assign("DKJHZBMJYMVPAEONPLWYCVVZYLDAXWKTBYUVXPAGASURFWZTTWYEQAVUQTZXCBSWWHINMUUPEMREQXESZFFSBTDOJMMILHLGGFJGDAVIXLQYLDWTYYADBHXPWIMRZBRDCJYWKNOVRSOGVHGZULXUINZNEGGCEZXJKXWCJQNCIKRFSIAFPRLUPFCTLERJJHHGJSUINQSKPSTGROHFFDQDQQKNQACOIOOSVMYAUBKPCKNDBMH");
    msg.timeout = 30668U;
    const char tmp_msg_0[] = {25, -90, -102, -85, 45, 55, -37, 121, -96, -127, -45, -20, 86, 55, 41, 55, -114, -10, 11, -111, 2, 97, -124, -124, -102, 77, -79, -67, 117, 16, -100, -61, 79, -7, 100, 108, -62, -34, 57, -40, -20, 26, 96, -29, -123, 120, -9, 35, 112, -89, 80, 68, 61, 98, 44, -3, -104, 19, 123, -103, -45, 80, -59, -71, -30, 96, 37, -70, 100, 4, 19, 62, -26, 12, 59, -30, -21, 62, -5, 87, 56, 28, 64, -29, -23, -71, -43, 29, -97, 47, -48, 1, -88, 98, 125, -118, 87, -32, 42, -88, 20, -10, -50, 31, 6, -39, 38, -44, -3, -30, 3, 38, -110, -49, -71, -109, 124, -28, 68, -13, 65, 109, -19, -79, 105, 9, 68, 78, 48, -82, 83, -66, 62, 125, 38, -77, -107, 42, 75, -92, 79, 20, 100, -115, 26, -98, -78, 92, 115, 126, 38, 22, 8, 6, 46, 104, -57, -16, 100, -79, -117, -8, -48, -77, -116, 73, -74, 122, 70, -8, 48, 26, 39, -70, -39, 91, 95, 38, -34, -72, 12, -6, -119, 106, -30, 47, -37, -54, 10, -76, -6, -93, -46, -101, 75, 59, 3, -44, 67, -29, 73, -97, 80, 3, -21, -42, -118, -7, -71, 31, 119, -77, -27, 8, 55, -50, 44, 91, 0, -74, -58, 95, -66, 2, -19, 30, 40, 55, 57, 24, 125, 58, 51, 57, 32, -23, 64, 80, 95, 84, -52};
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
    msg.setTimeStamp(0.06548731622379367);
    msg.setSource(37119U);
    msg.setSourceEntity(17U);
    msg.setDestination(20903U);
    msg.setDestinationEntity(167U);
    msg.seq = 1637975388U;
    msg.destination.assign("FUPZVZHNMFVDHXQTCGDKBJNYWLSYCSCLTPBHIXOBTGOMEGOFJQYLDFUAWWPQUOLWHMRSZRSKZBUFTGLJUYBEYMHYIEOICYJKHVTENFACKLAPABECFDPAHJGHWTWOGGXRLUVIKNHYADKW");
    msg.timeout = 11717U;
    const char tmp_msg_0[] = {100, 6, -36, 101, -5, 41, -100, -29, 99, -118, 62, -65, -49, 105, -66, -18, 98, 13, -80, -122, 110, 14, -77, -40, -76, 24, -68, -26, 98, 62, 82, 18, 38, 124, -103, -89, 97, 6, 1, 80, 88, 111, 67, -68, 47, -1, -24, 3, -9, -20, -126, 100, -108, -1, -98, 69, -51, 19, -59, 41, 37, 25, 123, -48, 0, 12, -111, 46, 61, -121, -3, 10, 76, -106, -45, 92, -43, 117, -68, -24, 70, -40, -87, 72, 110, 44, 99, 76, 64, -109, 70, -14, -114, 0, -22, -52, 36, -106, -76, 11, 126, -56, -39, -61, -86, 91, -2, 43, -111, -37, 125, 59, -46, 95, 5, -81, 67, -73, -125, 80, 28, 116, -32, -72, 110, 63, 116, -57, -3, -67, 96, -31, -82, 65, 120, 92, -119, 23, -95, 55, 97, 91, -124, 5, 47, 76, -37, 29, -81, -27, -4, -21, -82, 42, -107, 23, 57, 24, 126, 51, -66, 26, 50, -30, -87, 126, 94, 13, -97, -76, -32, 102, 64, -41, -58, -89, -68, -23, -94, 54, 36, -12, 110, -46, 104, 33, 60, -80, -101, -50, -84, 39, 26, 16, 86, -118, 39, 63, -25, 81, -33, -54, 110, -84, -43, 111, -77, 77, 93, -58, 55, -99, 102, 13, 8, 104, -95, 19, -127, -97, 57, 6};
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
    msg.setTimeStamp(0.31374269617109873);
    msg.setSource(15141U);
    msg.setSourceEntity(232U);
    msg.setDestination(3275U);
    msg.setDestinationEntity(103U);
    msg.seq = 3136294034U;
    msg.destination.assign("SNFGRIDLPLSTMOIBQITMNQMWNGEXHULGBUHFRZIJVQFEZXDPKPMLRNAMJDMFUVJMZTHZQPIOCCWGHAQVIBNFIYFZFJRVOUEUFXCRCMNXTYYCLSPWLBKGEOUPKHYGKJVCQIGRYQ");
    msg.timeout = 39397U;
    const char tmp_msg_0[] = {-88, -21, 46, 83, -82, 118, -25, -110, -126, 65, 121, 116, -3, 76, 103, -91, 93, 97, -64, 34, -58, 126, -120, 16, 54, 73, 65, 114, 3, -50, -20, -103, -36, 76, -17, 70, 111, -46};
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
    msg.setTimeStamp(0.8835682194849851);
    msg.setSource(47807U);
    msg.setSourceEntity(224U);
    msg.setDestination(65244U);
    msg.setDestinationEntity(33U);
    msg.source.assign("PSCYXFCDENTWVNDEDGBIFVZFAIEJHQXZACLKMLVDEJDPOJRLDYCQZHMHLAGJQWMUCKYNUBQYZASQSVOPMKRTLNTYNWHVHSESRUWERSCDWPYUPHXFXNOLOHRGPJOIJFUNUZUNCBLKKMQPWGUVXPNIYPWILRSUFQIDQKUTFCWWGRKBXSXJHMCDAXZBVHGWKEJOMTBSZOKTXERBMVSJ");
    const char tmp_msg_0[] = {-90, 28, 108, 77, -32, 83, -15, -64, 81, 107, 19, -127, -3, -112, -12, 10, 111, -67, 8, -5};
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
    msg.setTimeStamp(0.7360557465136096);
    msg.setSource(52339U);
    msg.setSourceEntity(206U);
    msg.setDestination(31320U);
    msg.setDestinationEntity(21U);
    msg.source.assign("JFQRORTONPBCSNBOFHVEWZKWVDACXIUWOUSRUXYPADKSQZOGJPKOGJFRDUPHBLNGTRZXVNVRXPXTYBWQIEQEIOANHCZQ");
    const char tmp_msg_0[] = {2, -38, -24, 84, 63, 12, -75, -51, -75, 59, -56, -85, 74, -16, -63, -101, -15, -25, 41, -112, -88, 38, -36, 86, 2, -15, 13, -54, 27, -16, -7, -70, 117, -119, -82, -58, -20, 114, -93, 61, 99, 0, -69, -123, 76, 22, 87, -84, 17, 59, -8, -72, -88, 120, 30, 57, -53, -106, 125, 103, -39, 2, 1, -121, -61, -128, 109, -33, 42, -82, -30, -33, -90, 37, 89, 16, -123, -111, -112, 32, -17, 99, -37, -28, 121, -32, -8, -128, -59, 25, 53, 46, 111, 10, 26, -61, 15, -98, 108, -30, -116, -19, 90, 41, -102, -106, 94, -9, 102, -2, 119, 23, 31, -47, 72, -115, 81, -102, -7, -33, -118, -2, 59, -81, -100, 20, 109, 84, -111, -70, -40, -87, -17, 44, -109, 71, 60, 120, -35, 38, 119, 19, 116, -69, -51, -123, -79, 54, 48, 32, 55, -117, 38, -93, -4, 52, -66, -27, -128, -7, -7, -92, 50, 87, -62, -24, -6, -51, -104, -62, -11, 38, -5, 35, 5, -93, -5, -31, 103, 85, -88, 2, 50, -89, 105, 44, 60, 75, 0, 57, -4, -93, -1, 36, -43, 120, 83, 21, -95, 88, 77, 86, 62, -4, 87, 122, -83, -64, -100, 78, -116, 126, -48, 39, -63, -121, 20, 42, 80, -15, -23, -38, -60, -116, 10, 119, 101, 78, -102, -48, -10, 21, 116, -74, -48, -111, -66, -32, 18, -93, -66, -99, 62, -99, 96, -45, -1, -117};
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
    msg.setTimeStamp(0.5217501261134654);
    msg.setSource(26167U);
    msg.setSourceEntity(42U);
    msg.setDestination(35904U);
    msg.setDestinationEntity(209U);
    msg.source.assign("IJVPIWVLPQFSNWWMOWBYVXPZFZFEILEVORNGFRJQYAVEDXYMZRSVPLHFDHCRLIQGMUCXDSKWAITCUBWNPUUTZVPPWQANRNXFXBAASRVLTBKSBCHIHUDATQVJDMVXZXUUYKSOSHIEGJEEOKJUJHHTFCZMPNKAQJCJBCBBMLEORNCKMNYCTXGPZLYQTGZQSHBIAFTYFDUKXXAERTYLAORFKYLSLDKQBDJCPEEONGOGYMGDOIHGMQUW");
    const char tmp_msg_0[] = {-10, -23, -43, 12, 75, -102, 76, -124, 114, -8, 108, 36, 51, -63, 43, -21, 118, 75, -57, -7, 113, -33, -71, 46, 102, 5, 33, 19, 1, -124, 85, -10, 61, -29, -19, 125, -96, -78, -11, 67, 72, 103, -8, -57, -6, -5, 116, 84, 84, 0, 30, 39, 30, 25, -18, 51, -80, -116, -110, 8, 105, -103, 74, -118, -108, -27, -9, 68, 44, 10, 16, -22, -76, 13, -126, -63, -93, -26, -90, 97, 31, 46, 124, -26, 67, -46, -66, -123, 94, -64, 51, 13, -93, -24, -122, 25, -5, 3, 86, -119, 106, 21, 89, -1, 100, -119, 107, -55, -56, 44, -52, -38, -118, 22, 84, -53, -17, -68, -71, -63, -3, 83, 55, -26, -77, 59, -50, 8, -60, -44, 98, 20, -1, 70, 122, 78, 111, 122, -12, 65, 63, 48, -101, 8, 105, -36, 49, -52, 49, 41, -1, -124, -72};
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
    msg.setTimeStamp(0.14233278269149507);
    msg.setSource(47117U);
    msg.setSourceEntity(3U);
    msg.setDestination(16173U);
    msg.setDestinationEntity(168U);
    msg.seq = 2832325031U;
    msg.state = 204U;
    msg.error.assign("FSITNCBSPILWVELHDPXIYDZADYBDMGFANMVMXXYJAQPRUTLUHFKZJBXSNVLCQPIZYNTVREPWPMHZADIVCZSIU");

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
    msg.setTimeStamp(0.8007078562164205);
    msg.setSource(32506U);
    msg.setSourceEntity(1U);
    msg.setDestination(25191U);
    msg.setDestinationEntity(211U);
    msg.seq = 1597821900U;
    msg.state = 131U;
    msg.error.assign("HSBSCSDBDQCOLDUKGLPJNZQZOOXPSEKHFPFTVZSEMOGKNLYFXCXTNJHREMRAYVDZEQWFDHFOJXEWIONKRZRMXUTVAWMXRIUCLMYUGCSLAIBHIYCXNNINEFDGTWLYQKVVIOALJZBIQWVOMACFRGDHKGJMLAPUPETULRYATZ");

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
    msg.setTimeStamp(0.8421153298455483);
    msg.setSource(11049U);
    msg.setSourceEntity(36U);
    msg.setDestination(24850U);
    msg.setDestinationEntity(251U);
    msg.seq = 3307093033U;
    msg.state = 132U;
    msg.error.assign("BCFXAHAHFIXNLTGBUMANBUDPFYDWAPWVXIXNOSLNMFDHDAJQYODJMOESCZEMICVZKRNPHSIBBUTSQZVREGVGFVMJDUUXRSOJOPNYPXMWEERHOHOWBJPNTRVINISHZDBZKVDEKWQBMKTBWHIGPTEYBEUALTHQUWFKWXK");

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
    msg.setTimeStamp(0.5030212721698574);
    msg.setSource(8071U);
    msg.setSourceEntity(251U);
    msg.setDestination(39308U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("UYAZSCOLSOXEXMNALXTWJPXACGNLJOQAHSEIGBPDCHZFHTWKNSALDFDQBWSKBGZWRDTHALITIRHUWVCVEZXEURGLKHPLSBBBTAHVZULPTCJYJMDGFRSDYMFJJMWEQTGJRSHQXFPTUUQAFLENKNUYZIOIWAZNNYVGCKBTXEHGBVIKBMHQGMFPDKIYCNBUJXKI");
    msg.text.assign("ZLSINOFEUJZLOMPKXPFKHJXVRJWHNTPUHCBCAOBNPAAGKNSEHHBCLVWDLGJWRYSBLGYMWCISHRGEVDCMSLEUKOEBMEXNDIAWVG");

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
    msg.setTimeStamp(0.5594715101316498);
    msg.setSource(52824U);
    msg.setSourceEntity(43U);
    msg.setDestination(50863U);
    msg.setDestinationEntity(170U);
    msg.origin.assign("BDSSZIUAKRFZELYGICYOPNLCMYBWZBHQYFRMDOKEWHMOURPQQKJVFTINMBVQCBOVPZXPUFUKOWPUYCKLYAJBVNXCZWAHKQZTFPSPTUUQTJAWKSYUXNZUENRJQJTAEXAGFVLHMDGJBIIWHCETERIHGJFRLDSNUNMWRVGMZGPKLGFHTADLPBMXVIWSIKHJDOBVSANYWTLNQN");
    msg.text.assign("BQJQBOMXNZRPOTDERMUBVHFOFWCYBOAUIZPEFLGVFVQVROGAKZJZUWKNSYPCCLKDAAQLTEIFXYCFOBSPXNVSPBEMUSIJQKMCQGGBWEUKLPHATKJPBHRVPXUCTJGFEAQSAYGHIHHBDDQZJYXTRTMMDKHKDYLWNVTOK");

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
    msg.setTimeStamp(0.5689752266351669);
    msg.setSource(64015U);
    msg.setSourceEntity(240U);
    msg.setDestination(55429U);
    msg.setDestinationEntity(215U);
    msg.origin.assign("MAVNUBYDOCHWORJZTNGFHDEAEWLCRIEKKVLFVUKSSUYLBZIEPTOCBXOSUIMXUQGWXKFMIFICESZUTIKENGTVAVHDRYMXLZPBYQADETGJMWVOSBSXURCFKITRTXAPETXBJVXHJILFQPOKGLNDKUPQPQDXZMAQLGEQCBKROYBWBNHLSEOFRPGZDMCHONNWZNWCAHACJNDGHLSIGQULPW");
    msg.text.assign("UAGEACYTYPQOEQENOWPIVVDBFJKMVMICTGCIOFSFFRKWGDXLNYHALKDHAOVXKFMDWLSOHDYUJXUPWZQXBCAJSMVNFATDXWHLLKIVNTJQAMEQNQRMZZBKQPFMUBKAXVOFLBGIPWRNJQZYMWIACHEHCEZXBTEDWUHFP");

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
    msg.setTimeStamp(0.6707388392535034);
    msg.setSource(50316U);
    msg.setSourceEntity(101U);
    msg.setDestination(50708U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("FCQXDLFJNBYSWBMKCJDYWIFVDXURSNVUSMYHVNRTFYCUQWR");
    msg.htime = 0.3129343564133412;
    msg.lat = 0.39746834661095853;
    msg.lon = 0.6218163295635448;
    const char tmp_msg_0[] = {-97, 97, -125, 39, -93, 63, -13, 25, -46, -63, 74, 96, 118, 104, -114, 82, 32, -18, 93, -85, 61, -91, 76, -115, 108, -84, -107, -103, 92, 49, -84, -7, -55, 41, 87, 99, -78, -127, 54, -20, -85, -104, 68, -4, 82, -97, 111, 48, -75, 105, -59, -16, -90, -87, -40, 24, -50, 44, 94, -23, 95, -20, 86, 63, -82, 52, -14, -35, -74, -97, -35, -26, 122, 66, 103, -55, 66, 94, -91, 67, 121, 38, -71, 49, -71, 100, 108, 9, 97, 101, 63, -83, -2, -115, -107, 72, -107, 117, -84, -48, -55, 5, -93, -60, -8, 54, 106, -113, 116, -83, 51, -28, -42, 21, 95, 21, 32, -47, -64, -107, -21, 19, -92, -89, -8, 89, 99, 78, -68, -63, -23, 84, 125, -14, -123, 12, 81, 68, -26, 114, 46, 126, 25, -109, -22, 33, 125, -86, 26, -28, -36, -115, 28, 9, 65, -85, 53, -53, -92, -65, 40, -109, 106, -6, 62, 1, 33, 50, 40, -104, -105, 57, 58, -56, 109, 66, 92, -67, 64, -128, -23, 43, -43, 39, -43, -45, -50, -124, 115, -21, -90, 6, 108, -81, -9, 88, 84, -97, 117, -59, -79, 125, 35, -69, 93, 76, -14, -26, 118, 126, -66, 126, 42, 114, 51, -6, -49, 40, 63, -12, -87, 51, -38, 101, 86, -116, -104, 102, 66, -64, -67, -43, -36, -64, -96, -95, 123, -118, -15, 54, 0, 65, -26, 119, -120, -82};
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
    msg.setTimeStamp(0.7014388668024737);
    msg.setSource(60241U);
    msg.setSourceEntity(214U);
    msg.setDestination(30077U);
    msg.setDestinationEntity(190U);
    msg.origin.assign("CXNUIYZLRQEGIPWIPTGLGGMMTDZWOSXSQHVVDHKRPM");
    msg.htime = 0.9058359380678453;
    msg.lat = 0.2694321330536029;
    msg.lon = 0.9168433000268867;
    const char tmp_msg_0[] = {-54, -27, -91, -81, -72, 50, 107, 30, 45, 15, -16};
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
    msg.setTimeStamp(0.6872640019751892);
    msg.setSource(2705U);
    msg.setSourceEntity(146U);
    msg.setDestination(194U);
    msg.setDestinationEntity(249U);
    msg.origin.assign("HLOIJJDWEZJOYGUHMYQBQDZTNAOVVFQDEHWRKABIDFCZSRDXVLYBMLSIOJNVZAKDNNNDHVMZUOISKTMWGOHFLXRAAAILCYKIEMQEQRMGPZGXFIPJKGQFEMGGQFYVYNNCLTFBXNUYRHXTSMLRNGALUSZXJUXWCPFEDFJJOZKTHGSTPPBUCGBWUSFCTUXOXQVVEASBYIUWSNPRIBWJKYSRYW");
    msg.htime = 0.6755553338165516;
    msg.lat = 0.6823026369325409;
    msg.lon = 0.26673203754140973;
    const char tmp_msg_0[] = {70, 108, 87, 57, -91, -67, 59, 97, -48, -90, 124, 90, -114, 16, -62, 71, -42, 61, 34, 93, 85, 117, -2, -26, 30, 38, -73, 20, -72, -97, -118, 61, 93, 15, -96, 18, -47, -68, 1, -112, -15, 20, -32, 100, -97, 54, 109, 73, -23, -11, 33, 32, -80, -92, -109, 109, 88, 105, -36, -116, 79, 117, -32, -108, -67, 56, 27, 84, -99, 45, 68, -25, -40, -3, -44, 60, 72, 85, 92, -22, -90, 74, -53, -60, 51, -2, -58, -100, 74, -27, 102, -82, 49, -45, -16, 97, -57, -62, -53, 0, 20, 78, -27, -112, -13, 88, 62, 104, -38, -59, 38, 26, 113, -41, -28, 99, 119, 88, 43, -39, -102, 11, -128, 126, -124, -59, 90, 52, 55, -127, -5, -24, 8, 33, 7, -36, 22, 55, -67, -93, 75, -118, 63, -69, -124, -35, -72, -47, 31, -87, -48, 119, 82, 79, 29, -44, 95, 52, 72, 125, 121, 107, 122, -72, 119, 53, -29, -108, 112, -126, -67, 4, -56, 72, -50, 22, -6, -37, 80, -18, 83, 86, 57, -87, 95, 64, 97, -9, -122, 53, 126, 26, -55, -59, 25, 16, -75, -22, 26, 7, -104, -52, -1, 84, -65, 96, 109, 43, 117, 11, -24, -36, -21, -94, 24, -29, -48, -15, 61, 71, 54, -71, 7, 41, -128, -119, 34, 100, -6, -120, 71, 36, -102, -74, -85, 100, 39, -110, -55, 106, -86, 101, 2, -109, 10, -87, 26, 126, 114, 81, -9, -35};
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
    msg.setTimeStamp(0.026870131559071142);
    msg.setSource(16920U);
    msg.setSourceEntity(198U);
    msg.setDestination(44611U);
    msg.setDestinationEntity(95U);
    msg.req_id = 40165U;
    msg.ttl = 49945U;
    msg.destination.assign("PILGTUDDNVJOVTCHRXDCCWSMROTYIIMWHQCMLVWHVJGXOOIPCJWDPUWQUTYXGYDFQAZUAGNZSQYGPUDWBNKQHKUKZESCAXISYVHRPBBAWRSFEAMPLMKKWYGHUJZBIKLUYHODGMLZTZFTCNNESZTUXIBPUQRPLXFDLTVVBFPZYVTWOSRHESZJ");
    const char tmp_msg_0[] = {-10, -102, 40, -45, 50, -3, -113, 32, 84, -82, 76, 48, 124, -30, -114, 125};
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
    msg.setTimeStamp(0.5113240354386949);
    msg.setSource(31243U);
    msg.setSourceEntity(217U);
    msg.setDestination(39299U);
    msg.setDestinationEntity(179U);
    msg.req_id = 62487U;
    msg.ttl = 23464U;
    msg.destination.assign("BPUWXEUNODTMAWRVNJDFPLGNHXZJXYKOFGWSXDHTCQHWVWQOCSETGMJVIPAIYNBRTQMHSZLHLSCMOCQUYUKBKFOYABZVZXAHIVTGOECPCPUYMFPLKNGWSBVCIFNNXJSJRBZDRKDXPETAMQKLLCUGZAMC");
    const char tmp_msg_0[] = {-37, -16, -102, -112, 53, -128, -32, -111, -78, 44, -75, -15, 34, -1, -53, -92, 41, 92, 61, -67, 42, -85, -121, 47, 107, -20, 0, -50, 54, -100, 27, 67, -33, 104, 80, -93, -118, 13, 73, -88, -34, 67, -34, -40, 42, -43, -109, -57, -28, -56, 77, 75, -124, 107, 78, -23, -63, -8, -116, 93, -46, -42, -69, -94, 6, 33, 56, -99, 16, 88, -85, -10, -73, -49, -15, 17, -22, 81, 66, -123, 23, 116, 32, 12, -68, 38, -75, 74, 14};
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
    msg.setTimeStamp(0.15785362872889686);
    msg.setSource(2817U);
    msg.setSourceEntity(228U);
    msg.setDestination(47935U);
    msg.setDestinationEntity(71U);
    msg.req_id = 9609U;
    msg.ttl = 33010U;
    msg.destination.assign("WZSDWHYODVXGASCTHJRRMNVDOTITZELXJKAMPGQJTJETIKHVIBZAMOAIWDSGPRVNKPZSFALLNPFZMIURKLLUJSEBEYEAPWCFVVHIXYRBSPHFXZXXVQBBMFMQNWNIZICKYDSHGNPQGFLMOJNMOOATXXQWK");
    const char tmp_msg_0[] = {-118, 19, -124, -103, -90, 88, -83, 123, -37, -104, 89, -76, -70, 124, 33, -11, 98, -9, 46, 55, -49, 47, 113, 63, 88, -96, -120, 73, -107, -78, -97, -80, 35, -24, 55, -42, 44, 95, 26, -13, -34, 108, 119, -58};
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
    msg.setTimeStamp(0.9240187773486161);
    msg.setSource(12935U);
    msg.setSourceEntity(57U);
    msg.setDestination(2976U);
    msg.setDestinationEntity(220U);
    msg.req_id = 4352U;
    msg.status = 56U;
    msg.text.assign("WWDKQULGJCPQYKOFUIAQMLHGZEZAZYLZOJQIPCE");

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
    msg.setTimeStamp(0.1905800208846754);
    msg.setSource(51451U);
    msg.setSourceEntity(182U);
    msg.setDestination(37728U);
    msg.setDestinationEntity(155U);
    msg.req_id = 2856U;
    msg.status = 158U;
    msg.text.assign("OAPTXIIFWONJKPXDKFTEWGBOZISKGEQUUUANVBAFHBKVQPRKABICXWDMOEMAHLGHRQDDEQDRESCEWJPBSMPRXNGFMMTCALJBYEZJBYYCFRRSHXCYWYNUNHVWKXWFKZSZQUOPHGICJTTFDROIDMTZRQ");

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
    msg.setTimeStamp(0.6959073598646712);
    msg.setSource(10342U);
    msg.setSourceEntity(148U);
    msg.setDestination(11986U);
    msg.setDestinationEntity(233U);
    msg.req_id = 4597U;
    msg.status = 224U;
    msg.text.assign("GNEXAZRWWKVTLTZRNFFWUQUJLKFVQSAXDVTNXDHNHLREOMFTEJZMRLWDDHAYABFKDRYEIVUUYDEQZSTXTCKXBQNIBRPCLPVIMWFBGMCTHEPOOGUPCFIJSIYVBWCOZPRCPMLRPVMAAKUIZHSLZWQAGHJBOGJIZZEDSZXLXCXDLQOPMIMKSHYWIOFKBNEACRHGJNAWYQYUKVTHNOGMYFQMKPLYVTJICSJABGBRGSQPHKENVXUEQNJCDTSXSU");

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
    msg.setTimeStamp(0.20932594745420086);
    msg.setSource(10333U);
    msg.setSourceEntity(78U);
    msg.setDestination(10426U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("MIDJHNNNJCLDIKVFTEHHMCPQBQCZLCYSFZRMEPMQBMGJXLVHIIRGJBYKSRXQOWDUGADBBCVFZAAQDPGHQTAJPTHHNFIBOKYSDOIEOAEOFMVVTZSAUBPBYNLSEAQHGUEXSEWYPUKWVVPDLKOZSOULRSECJALCUPOJCQQLWEZSUKYMNRXZEMBUQKXHWITVTYWDNHGWNMTPIVGKXGFILXZCZTWGRDWSODTFIOWKJMFY");
    msg.links = 4151226060U;

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
    msg.setTimeStamp(0.2686656097483815);
    msg.setSource(11370U);
    msg.setSourceEntity(147U);
    msg.setDestination(4211U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("NXFDYNSVTYLRRVIYHCBNHMGDDWRCSPFSLHJRUBIRTLZRAAIYGBXEVZZRFGVAKMHZLTOEWTBDCHAVIVYFRVXBKWIRUAVJMPTMNQIGPWVPFYEOUFWTEUMU");
    msg.links = 247485504U;

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
    msg.setTimeStamp(0.025079495785935824);
    msg.setSource(37561U);
    msg.setSourceEntity(171U);
    msg.setDestination(45797U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("UJTQLRVTMQEAZSWTWVBCIUBJWDZAHSORXSJIMMUYEVDNMUKAJTBOBQRNJPFUXXURJAQCSEFEJQHZHCINRZGPWZVSCOJBYPOBFNNYKWNESFEGHQWEUFWBJSPXGMPQXZCS");
    msg.links = 1619277117U;

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
    msg.setTimeStamp(0.18300304797656985);
    msg.setSource(16754U);
    msg.setSourceEntity(223U);
    msg.setDestination(46827U);
    msg.setDestinationEntity(168U);
    msg.groupname.assign("BCHWPPDYQJNXVFILOYSKBXBKJJOCVZJQIZIGCLVTUSOMKZXDLRNUNXLJSHIVIRDIPCMEFHCUHLSLMSZMSPTNSYLVGEVDBXMAZYUZRQBWWTKGYGWTURCPKWZQNAIRDPPXASOGAXOGYIXPVWHELEFKTEAQJJMTHTEAJZHRFVKYMPFM");
    msg.action = 124U;
    msg.grouplist.assign("VQCSMBDOFROTNMGCYWHYLUTZOXYEHCVTXKDLFCHZJUYPSJUDNKEVIGGCFKGQEHRNNJKHBBTEYVTPWUNSIWMZLFMK");

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
    msg.setTimeStamp(0.6064094211158032);
    msg.setSource(58843U);
    msg.setSourceEntity(81U);
    msg.setDestination(19535U);
    msg.setDestinationEntity(215U);
    msg.groupname.assign("OYSCXYLRAPNGFKDQRGAQIPWVYVIQNPBWQANMUIJVDPEFAZXZIQGDQCTYHAMOESVVCZLKIMAELRWNTPMYTHIBEYZNGSOXZOLKZYJFVKEIGKDNBGJRFUTBHCFSYHLFDQTSOPKPVTIAUCADESRHKXXHFUUUEDMDZBPQYFOWLANSNGSUJFMEWRJNTPTHJHUCOBGGPN");
    msg.action = 79U;
    msg.grouplist.assign("NHLIIPKGITOHVYERKDYGYUMHNJBPCSYULEBDDOIBHMMHDZRTPMWKFAUKGZJTCBXQKNMBRNNGHWQRVXRSTMPSBMAWLTFUTACTIZLLODRWXZZGJERGWQMYYXXOYOASZPDCSXFQCSFAL");

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
    msg.setTimeStamp(0.7344311851884088);
    msg.setSource(24070U);
    msg.setSourceEntity(150U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(5U);
    msg.groupname.assign("OIOQZHELIISCBJOVJPYRXJUMXYVKUKKUFKSPJEJOJCVLSSVATDAWWGJKQOHZGFUERIKPRUPIUONZWNWDHLBCETGDLGYVXTMYHBSXOOLGFUYSYAXICEECCQFYMAFVLURPHLQXYFNAGDTZNMCQIFMRTSWSHAXMYAZPAEVDWJIEQTYLMFGRRHUNLAK");
    msg.action = 228U;
    msg.grouplist.assign("WQEBBDPCEFZCURIVAHHGMZTAMIPOTOSJFTYFNRYIYAFXAWOUBJLQRKKUKXFTDATROOHCPVKYGDJANTXHDLCAHNWLGE");

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
    msg.setTimeStamp(0.7065551378685209);
    msg.setSource(5722U);
    msg.setSourceEntity(113U);
    msg.setDestination(57851U);
    msg.setDestinationEntity(186U);
    msg.id = 116U;
    msg.range = 0.8754743221705724;

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
    msg.setTimeStamp(0.5299909290343496);
    msg.setSource(527U);
    msg.setSourceEntity(99U);
    msg.setDestination(15191U);
    msg.setDestinationEntity(128U);
    msg.id = 203U;
    msg.range = 0.37910046419894483;

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
    msg.setTimeStamp(0.28673114339600114);
    msg.setSource(6359U);
    msg.setSourceEntity(171U);
    msg.setDestination(29990U);
    msg.setDestinationEntity(55U);
    msg.id = 220U;
    msg.range = 0.5425810469019863;

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
    msg.setTimeStamp(0.9410253036599241);
    msg.setSource(31757U);
    msg.setSourceEntity(5U);
    msg.setDestination(22984U);
    msg.setDestinationEntity(95U);
    msg.tx = 210U;
    msg.channel = 249U;
    msg.timer = 49966U;

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
    msg.setTimeStamp(0.2870361768570209);
    msg.setSource(53220U);
    msg.setSourceEntity(200U);
    msg.setDestination(46682U);
    msg.setDestinationEntity(119U);
    msg.tx = 87U;
    msg.channel = 245U;
    msg.timer = 65502U;

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
    msg.setTimeStamp(0.7914928500432671);
    msg.setSource(44901U);
    msg.setSourceEntity(223U);
    msg.setDestination(25719U);
    msg.setDestinationEntity(226U);
    msg.tx = 121U;
    msg.channel = 151U;
    msg.timer = 54361U;

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
    msg.setTimeStamp(0.31145850007955045);
    msg.setSource(9604U);
    msg.setSourceEntity(219U);
    msg.setDestination(8529U);
    msg.setDestinationEntity(86U);
    msg.beacon.assign("GSKXWQNNYHJURUYVPTVXEQHZTVLMRPECRWSBZRB");
    msg.lat = 0.23096194657676272;
    msg.lon = 0.12239827723032792;
    msg.depth = 0.340847848404371;
    msg.query_channel = 245U;
    msg.reply_channel = 138U;
    msg.transponder_delay = 86U;

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
    msg.setTimeStamp(0.021698237479520488);
    msg.setSource(25690U);
    msg.setSourceEntity(144U);
    msg.setDestination(60602U);
    msg.setDestinationEntity(170U);
    msg.beacon.assign("CQHXKEKHZAZKUGSBQVQBRXFTLTRZAEPDXKLABZMXDWQPCAAMEYWWOAYPNZIONRDQUIMWOLOKCZWVXNVMKEFBRPBCQPJI");
    msg.lat = 0.7114136921965434;
    msg.lon = 0.29186192148025725;
    msg.depth = 0.2185325529404747;
    msg.query_channel = 215U;
    msg.reply_channel = 15U;
    msg.transponder_delay = 25U;

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
    msg.setTimeStamp(0.5130897048070413);
    msg.setSource(64083U);
    msg.setSourceEntity(137U);
    msg.setDestination(64863U);
    msg.setDestinationEntity(165U);
    msg.beacon.assign("JHVQQHWWJEZTFNYVXCMVWGOPCWHVEVQQBSCFDTSHNMTOYEUCZHTEZDRLIUIFPCPUSQPPYDFFKUWZWQZOVGJGFRGRKGSTIUMERVCNOEBJMEKRASTNLSIAOIUSJFOQBOYRCAIZJIPAUXTPYKFKWVLEXYAQKOQXJROIXXLWSUNORBGTAHRALIBDZMGLHLNMHFGBBKXYMGAXDYSJQUTWYNDJDNBPHPSRDYNNBKKBKDIMMZMLVAEWEVZFACTCGLCXPJ");
    msg.lat = 0.8819737455716412;
    msg.lon = 0.5462032266354099;
    msg.depth = 0.5440098822838307;
    msg.query_channel = 72U;
    msg.reply_channel = 143U;
    msg.transponder_delay = 156U;

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
    msg.setTimeStamp(0.8695148705353363);
    msg.setSource(1171U);
    msg.setSourceEntity(122U);
    msg.setDestination(46110U);
    msg.setDestinationEntity(202U);
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
    msg.setTimeStamp(0.6470294788104956);
    msg.setSource(51869U);
    msg.setSourceEntity(130U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(207U);
    msg.op = 69U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ERIHYQMUMSDUMTNLAPINBYZEUYJDIFEBXIAHBIGXPDVZSKMAFJTOWJPCWGYJHTHVZNGADQRPRLKCOWGKAZWVBQOZZXBKUFEELXLLLNNFAZNJXBUEVWLYQRX");
    tmp_msg_0.lat = 0.8959218676648267;
    tmp_msg_0.lon = 0.729352938576469;
    tmp_msg_0.depth = 0.8504573602567883;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 123U;
    tmp_msg_0.transponder_delay = 33U;
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
    msg.setTimeStamp(0.5254006214715367);
    msg.setSource(40885U);
    msg.setSourceEntity(245U);
    msg.setDestination(22936U);
    msg.setDestinationEntity(167U);
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
    msg.setTimeStamp(0.41245369849277025);
    msg.setSource(36189U);
    msg.setSourceEntity(123U);
    msg.setDestination(50202U);
    msg.setDestinationEntity(33U);
    msg.address = 14U;

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
    msg.setTimeStamp(0.7538115648337422);
    msg.setSource(60783U);
    msg.setSourceEntity(199U);
    msg.setDestination(38111U);
    msg.setDestinationEntity(74U);
    msg.address = 129U;

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
    msg.setTimeStamp(0.7184307114344625);
    msg.setSource(47759U);
    msg.setSourceEntity(155U);
    msg.setDestination(13025U);
    msg.setDestinationEntity(193U);
    msg.address = 187U;

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
    msg.setTimeStamp(0.5882732274754788);
    msg.setSource(38566U);
    msg.setSourceEntity(223U);
    msg.setDestination(63282U);
    msg.setDestinationEntity(102U);
    msg.address = 176U;
    msg.status = 154U;
    msg.range = 0.4200364119762251;

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
    msg.setTimeStamp(0.39011707415557983);
    msg.setSource(52810U);
    msg.setSourceEntity(154U);
    msg.setDestination(43342U);
    msg.setDestinationEntity(227U);
    msg.address = 229U;
    msg.status = 166U;
    msg.range = 0.688385348150963;

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
    msg.setTimeStamp(0.08183280643240232);
    msg.setSource(32778U);
    msg.setSourceEntity(174U);
    msg.setDestination(6288U);
    msg.setDestinationEntity(235U);
    msg.address = 48U;
    msg.status = 124U;
    msg.range = 0.8139111447331581;

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
    msg.setTimeStamp(0.31192074608335296);
    msg.setSource(43926U);
    msg.setSourceEntity(48U);
    msg.setDestination(43198U);
    msg.setDestinationEntity(59U);
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("RLHZZNAAAQHFIHKTSSCLMJATMGZBRGHVUIDLDUDEJVFCIGUQMCNOKEPREEYAKIYIJFSZQTBPMMZUYTBAQOQOLDEFLLOVS");
    tmp_msg_0.plan_size = 18921U;
    tmp_msg_0.change_time = 0.8579127721660822;
    tmp_msg_0.change_sid = 26999U;
    tmp_msg_0.change_sname.assign("SDRCLSMSNBZHXJRGHBTTTHWUOIRQWHYYKSYOANISRFJLIKAUKTOISWAKBQGXIQOLVZTDGTRAUBLJHCCXJUUTFIULDSLPHAOYULCKLVSUEWNXZWGFLDDIOEHLUWPIIWXYMUPOAFGMNEEZZXJIQTOMKBPPGRZENGBPVDMCKRYMCFKVPVFKXQNOQCWDQXRHBJSKJZDARYXVNNBJAEGXTFGAVVJRSFMEDYBCCVODFWYZFVQB");
    const char tmp_tmp_msg_0_0[] = {-36, 86, -54, -6, -79, -4, 63, -99, 103, 122, -19, -9, 91, -112, 39, 37, -73, -79, 30, 1, -70, -77, 52};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9162071717968067);
    msg.setSource(7012U);
    msg.setSourceEntity(123U);
    msg.setDestination(25595U);
    msg.setDestinationEntity(197U);
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.4508234786824068;
    tmp_msg_0.x = 0.7337157540093278;
    tmp_msg_0.y = 0.7340536233902799;
    tmp_msg_0.z = 0.3432346960643968;
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
    msg.setTimeStamp(0.7995072264133068);
    msg.setSource(57179U);
    msg.setSourceEntity(154U);
    msg.setDestination(23840U);
    msg.setDestinationEntity(74U);
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 95U;
    tmp_msg_0.text.assign("ZTUCWCXJHVFYOUKAJMRIURJCBBRIRPVGSKAMMYAXHBFLIWDKFMVOBYRRCHQZCPFKTBGOXOHUNKWTZSTQLLGOEJRAKXOSKDUVDHBSITEQEAFQLJPRKMSABXMWWPENUSFCAADGXQYIIWGGIILXWNDYQJSGSZVDEADPNNIEMJNDTH");
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
    msg.setTimeStamp(0.092383220898559);
    msg.setSource(50571U);
    msg.setSourceEntity(115U);
    msg.setDestination(37429U);
    msg.setDestinationEntity(54U);
    msg.enable = 193U;

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
    msg.setTimeStamp(0.5510959524379309);
    msg.setSource(59007U);
    msg.setSourceEntity(246U);
    msg.setDestination(46331U);
    msg.setDestinationEntity(201U);
    msg.enable = 67U;

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
    msg.setTimeStamp(0.7206611023689303);
    msg.setSource(25975U);
    msg.setSourceEntity(130U);
    msg.setDestination(22477U);
    msg.setDestinationEntity(1U);
    msg.enable = 93U;

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
    msg.setTimeStamp(0.4750065197493767);
    msg.setSource(232U);
    msg.setSourceEntity(157U);
    msg.setDestination(1091U);
    msg.setDestinationEntity(66U);
    msg.summary = 136U;
    msg.level = 145U;

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
    msg.setTimeStamp(0.37498193757166354);
    msg.setSource(45032U);
    msg.setSourceEntity(25U);
    msg.setDestination(36809U);
    msg.setDestinationEntity(162U);
    msg.summary = 51U;
    msg.level = 145U;

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
    msg.setTimeStamp(0.7142248628194764);
    msg.setSource(35796U);
    msg.setSourceEntity(21U);
    msg.setDestination(7386U);
    msg.setDestinationEntity(196U);
    msg.summary = 2U;
    msg.level = 111U;

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
    msg.setTimeStamp(0.16618350888467848);
    msg.setSource(10123U);
    msg.setSourceEntity(244U);
    msg.setDestination(37739U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.1101238282596726);
    msg.setSource(57249U);
    msg.setSourceEntity(215U);
    msg.setDestination(46330U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.2774490414328096);
    msg.setSource(39455U);
    msg.setSourceEntity(25U);
    msg.setDestination(53652U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.04815014030451292);
    msg.setSource(21339U);
    msg.setSourceEntity(2U);
    msg.setDestination(24687U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.7452990587301156);
    msg.setSource(3920U);
    msg.setSourceEntity(122U);
    msg.setDestination(24559U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.8227755676800824);
    msg.setSource(26926U);
    msg.setSourceEntity(107U);
    msg.setDestination(16553U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.38121280973719196);
    msg.setSource(40849U);
    msg.setSourceEntity(51U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(35U);
    msg.op = 91U;
    msg.system.assign("OZOHSAGQGKBBMWIKORXYGXEPJSYCZUJLXUNXLLYNUCQCPQQCSJVARKOEPBJOQFKNGECHUBZUWDCXMEJDEUPKZWVJLPWZASZMGDDIGIAIUTRPJXRRAONWFCNHKSIFCHGOYOSTUMOVREHMMXOTLVFUAXEHTZCHKQDADEAWWYTTZTXFNFYB");
    msg.range = 0.026758925966666403;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("WFYYNKXYGVYWBRSDCRACJRSWLESVXKHSXLOMHCULRTBRLWLGOAVHHZZMZBIOPQLKKBTRYQZHKESXSDEUETBOZXXNJYCSFDFUIJZWHBAUUJTXWNYYFQGMPECQLFRVZFGQHJUGTNQARVNGUSWPKDEDCPPIEBPOKDYJANHEIBMPKQMMLLNPQWOGTBZKTHCPWCRWNJJIGTVUAOKCVQMODOFUJSIIICSDR");
    tmp_msg_0.param.assign("HACXQVBJWBRDGPISZCODEXFJGSOPVEKEBBLPTJTRIZYJFGUDNXLU");
    tmp_msg_0.value.assign("RHWIVPEMIEAGYOMIXJQTHYBRGVCLLWDOQUQPNAEUKYDTTJBCZBFZAGYEVXOIMEXEGQNPHPTXRUAILSTZDVBJLLZLFGRHKLRKWAZCKCKJBMXCOIGGXOOTUBOXSDERBVJTTSOWFJDJZMDETXAPVDPHMMACTSUUHLNUKFEYXNYWIFGUFKAGSIFKDLHNBVKAWJQBQQVZVMJNINWNDFJUEQQZSRUSNHMBFQWSPFOWWNMRPP");
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
    msg.setTimeStamp(0.4602494889706923);
    msg.setSource(18462U);
    msg.setSourceEntity(93U);
    msg.setDestination(62193U);
    msg.setDestinationEntity(98U);
    msg.op = 137U;
    msg.system.assign("PCVFKCEEMGGAOIMTZPRVRMZALSFJOJUYPQIJHQDGKVFOUNLSCUDYLMUMIOGGUHWTEFZCPNZTDWOQJVBWRYQEOWKNJUKWXXKMBHKZPDAGPTJXTCUYDMWHHGXQAOONYKBRUFELDDZWPIOIJTSSHAJZRHCSQFMLNORYSBVVLVBECHCKPNLBBQKLRUXZVXAYPIWHSNLBNRYIIMQTLETNNVZDEXAAZFUGIXKCYRF");
    msg.range = 0.6816843756133201;
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.6211899300029392);
    msg.setSource(32648U);
    msg.setSourceEntity(78U);
    msg.setDestination(28779U);
    msg.setDestinationEntity(189U);
    msg.op = 17U;
    msg.system.assign("YYXQFIJCKUSHZZPFDWTUYZYCXQATBIDEEPKNROGLSKSFFEBYEGMHTAQOJYBIRAZVQHMLVOVLIFAWXIXTYWRMAOJKEAVSSTROWTXWSKDBUKMPEMZLDCDOFRMVGKMNIAPJYTCSDIUEUCGTIPGJQGUACBCUEBAGTH");
    msg.range = 0.0328808853247311;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("PIISBTNLZLGJWDNMAPTYWXUWHVDPSIXVMHCCJROHNMCDZVBQOEVYJJWRMDDAKCFGFFGVJODDFGBAPZBXCDHZTTNOZNKRQFILSOLEINEXMWLLTIATYUVEHCBAUZPEVNFUYLRXPQAWZNJJHTRGPQYWAQRSRHUVSGMPJOKZZDCEBSIPUQAWIEMUGQASNPIYLTXCLCXBA");
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
    msg.setTimeStamp(0.157593709375774);
    msg.setSource(47653U);
    msg.setSourceEntity(22U);
    msg.setDestination(3836U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.4275850189081051);
    msg.setSource(38150U);
    msg.setSourceEntity(239U);
    msg.setDestination(62717U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.5562813662190338);
    msg.setSource(52083U);
    msg.setSourceEntity(203U);
    msg.setDestination(34803U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.14382107924800813);
    msg.setSource(57843U);
    msg.setSourceEntity(173U);
    msg.setDestination(36744U);
    msg.setDestinationEntity(248U);
    msg.list.assign("GRFSHSTJWZSAFORBAYFGHQKTCGLMQCGPGPOMZUXZCINYHTKJXEBJVTUQJJJPRNUDJIXCNYTMMEKFCQYLHWUVURNUGVO");

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
    msg.setTimeStamp(0.5792111654175778);
    msg.setSource(58784U);
    msg.setSourceEntity(71U);
    msg.setDestination(8674U);
    msg.setDestinationEntity(227U);
    msg.list.assign("AMPWZOEVMMODPAHXKLBDQFXIJDZYZWQTUWCSTWUDPQXSMPGKHKWCUGRWYUJRFTPDERTCVDBELACQIXYTHOVDLBQIIYMZZDHILCGSRTFVNJXRGSINRUOSCEAOCBZJ");

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
    msg.setTimeStamp(0.6753908815375261);
    msg.setSource(1346U);
    msg.setSourceEntity(159U);
    msg.setDestination(55402U);
    msg.setDestinationEntity(55U);
    msg.list.assign("SSLZLFVDDWDSZZYKQPDKYKCPDAHGVZLWFDYUQMOAFYZWXREBKNNFRVZBQMCHWNCURPMXTICBEAZIBPDHHWUSIQIJXEVHGTOTMNJITOKTLQHRDHNJPTXTFZEWHMGCOYSYAPXWQXJHUYOGBCFP");

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
    msg.setTimeStamp(0.9294918993993019);
    msg.setSource(21227U);
    msg.setSourceEntity(126U);
    msg.setDestination(54042U);
    msg.setDestinationEntity(26U);
    msg.value = -15391;

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
    msg.setTimeStamp(0.017951199188426026);
    msg.setSource(20622U);
    msg.setSourceEntity(112U);
    msg.setDestination(48119U);
    msg.setDestinationEntity(38U);
    msg.value = -2702;

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
    msg.setTimeStamp(0.8925129809311996);
    msg.setSource(39937U);
    msg.setSourceEntity(2U);
    msg.setDestination(2253U);
    msg.setDestinationEntity(112U);
    msg.value = 9514;

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
    msg.setTimeStamp(0.1660860163226412);
    msg.setSource(9098U);
    msg.setSourceEntity(160U);
    msg.setDestination(56502U);
    msg.setDestinationEntity(174U);
    msg.value = 0.2147079151883412;

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
    msg.setTimeStamp(0.3454249665667084);
    msg.setSource(32173U);
    msg.setSourceEntity(57U);
    msg.setDestination(7698U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7302193846177939;

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
    msg.setTimeStamp(0.1871622077698859);
    msg.setSource(550U);
    msg.setSourceEntity(16U);
    msg.setDestination(10042U);
    msg.setDestinationEntity(71U);
    msg.value = 0.6976960962790703;

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
    msg.setTimeStamp(0.5130018074356177);
    msg.setSource(38757U);
    msg.setSourceEntity(115U);
    msg.setDestination(31837U);
    msg.setDestinationEntity(10U);
    msg.value = 0.43333580587283627;

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
    msg.setTimeStamp(0.17494438283425573);
    msg.setSource(52614U);
    msg.setSourceEntity(147U);
    msg.setDestination(45928U);
    msg.setDestinationEntity(208U);
    msg.value = 0.8709171752105973;

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
    msg.setTimeStamp(0.014546903453165894);
    msg.setSource(64569U);
    msg.setSourceEntity(50U);
    msg.setDestination(24845U);
    msg.setDestinationEntity(67U);
    msg.value = 0.1910412727621733;

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
    msg.setTimeStamp(0.6072978446494164);
    msg.setSource(31813U);
    msg.setSourceEntity(147U);
    msg.setDestination(54313U);
    msg.setDestinationEntity(186U);
    msg.validity = 13662U;
    msg.type = 94U;
    msg.utc_year = 21919U;
    msg.utc_month = 44U;
    msg.utc_day = 122U;
    msg.utc_time = 0.20473868672645001;
    msg.lat = 0.9470200320172558;
    msg.lon = 0.0538324825204598;
    msg.height = 0.5945091152455808;
    msg.satellites = 184U;
    msg.cog = 0.402078794460184;
    msg.sog = 0.8451766556931116;
    msg.hdop = 0.5983962439664223;
    msg.vdop = 0.9498080445377488;
    msg.hacc = 0.20736445619933086;
    msg.vacc = 0.5568969623206431;

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
    msg.setTimeStamp(0.4184141424852942);
    msg.setSource(25338U);
    msg.setSourceEntity(68U);
    msg.setDestination(8975U);
    msg.setDestinationEntity(87U);
    msg.validity = 23600U;
    msg.type = 46U;
    msg.utc_year = 12859U;
    msg.utc_month = 51U;
    msg.utc_day = 232U;
    msg.utc_time = 0.4023481677347235;
    msg.lat = 0.8329737109193327;
    msg.lon = 0.17372050214220358;
    msg.height = 0.3511703240682186;
    msg.satellites = 66U;
    msg.cog = 0.2706090147589286;
    msg.sog = 0.3492953040775122;
    msg.hdop = 0.30166516672360044;
    msg.vdop = 0.983017185615504;
    msg.hacc = 0.9954602372927669;
    msg.vacc = 0.18002884419161014;

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
    msg.setTimeStamp(0.5397457686364685);
    msg.setSource(38011U);
    msg.setSourceEntity(174U);
    msg.setDestination(16957U);
    msg.setDestinationEntity(13U);
    msg.validity = 55253U;
    msg.type = 222U;
    msg.utc_year = 62773U;
    msg.utc_month = 16U;
    msg.utc_day = 222U;
    msg.utc_time = 0.7879355488860565;
    msg.lat = 0.04473988270121043;
    msg.lon = 0.3275381295272556;
    msg.height = 0.11680767960651672;
    msg.satellites = 21U;
    msg.cog = 0.5480044152219568;
    msg.sog = 0.8205334370416172;
    msg.hdop = 0.6027465436512721;
    msg.vdop = 0.13739244661876693;
    msg.hacc = 0.28194456757404773;
    msg.vacc = 0.5052655961158642;

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
    msg.setTimeStamp(0.5447760865582564);
    msg.setSource(26037U);
    msg.setSourceEntity(248U);
    msg.setDestination(63733U);
    msg.setDestinationEntity(115U);
    msg.time = 0.9412498590487732;
    msg.phi = 0.39275573035312217;
    msg.theta = 0.6306419435011293;
    msg.psi = 0.7078696393837449;
    msg.psi_magnetic = 0.639668152872915;

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
    msg.setTimeStamp(0.9019892819846114);
    msg.setSource(28565U);
    msg.setSourceEntity(199U);
    msg.setDestination(28441U);
    msg.setDestinationEntity(46U);
    msg.time = 0.726330540938049;
    msg.phi = 0.3694268692127609;
    msg.theta = 0.3202669489143064;
    msg.psi = 0.7762874339305144;
    msg.psi_magnetic = 0.880723428934115;

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
    msg.setTimeStamp(0.5989824397724551);
    msg.setSource(18165U);
    msg.setSourceEntity(243U);
    msg.setDestination(18724U);
    msg.setDestinationEntity(37U);
    msg.time = 0.1358199145502743;
    msg.phi = 0.3750418774418225;
    msg.theta = 0.8728009552216288;
    msg.psi = 0.33796501793608413;
    msg.psi_magnetic = 0.7235929201462028;

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
    msg.setTimeStamp(0.15954690854979314);
    msg.setSource(64456U);
    msg.setSourceEntity(157U);
    msg.setDestination(60214U);
    msg.setDestinationEntity(99U);
    msg.time = 0.4564489244358547;
    msg.x = 0.934797372777123;
    msg.y = 0.7802438084659558;
    msg.z = 0.5832337720124251;
    msg.timestep = 0.2433756219273766;

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
    msg.setTimeStamp(0.16695611675787758);
    msg.setSource(17061U);
    msg.setSourceEntity(7U);
    msg.setDestination(62743U);
    msg.setDestinationEntity(226U);
    msg.time = 0.9778607733282602;
    msg.x = 0.6255860182454398;
    msg.y = 0.6524034484636416;
    msg.z = 0.34551594961588106;
    msg.timestep = 0.10200439114381699;

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
    msg.setTimeStamp(0.8248572202797945);
    msg.setSource(6370U);
    msg.setSourceEntity(115U);
    msg.setDestination(16950U);
    msg.setDestinationEntity(197U);
    msg.time = 0.02272661925122843;
    msg.x = 0.5924020322925769;
    msg.y = 0.9696832496494618;
    msg.z = 0.25018134534809133;
    msg.timestep = 0.31361454792244103;

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
    msg.setTimeStamp(0.5498828198569174);
    msg.setSource(31064U);
    msg.setSourceEntity(114U);
    msg.setDestination(25745U);
    msg.setDestinationEntity(205U);
    msg.time = 0.5785688034516814;
    msg.x = 0.04476727243146872;
    msg.y = 0.540837150444766;
    msg.z = 0.3134704184518081;

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
    msg.setTimeStamp(0.3475223142209287);
    msg.setSource(5192U);
    msg.setSourceEntity(248U);
    msg.setDestination(48829U);
    msg.setDestinationEntity(160U);
    msg.time = 0.2195799034566046;
    msg.x = 0.9614287456853605;
    msg.y = 0.16728901057991652;
    msg.z = 0.912303496770436;

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
    msg.setTimeStamp(0.8304000246760268);
    msg.setSource(26712U);
    msg.setSourceEntity(76U);
    msg.setDestination(1562U);
    msg.setDestinationEntity(207U);
    msg.time = 0.7659714148592937;
    msg.x = 0.22515020887088943;
    msg.y = 0.3040442642086697;
    msg.z = 0.362738638363588;

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
    msg.setTimeStamp(0.009132535494916105);
    msg.setSource(22095U);
    msg.setSourceEntity(239U);
    msg.setDestination(8715U);
    msg.setDestinationEntity(77U);
    msg.time = 0.7414111065053073;
    msg.x = 0.06505217103548899;
    msg.y = 0.21526201731713668;
    msg.z = 0.013510161142030186;

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
    msg.setTimeStamp(0.3806792901074222);
    msg.setSource(4013U);
    msg.setSourceEntity(170U);
    msg.setDestination(47171U);
    msg.setDestinationEntity(117U);
    msg.time = 0.9108019875206798;
    msg.x = 0.8345286025917751;
    msg.y = 0.38567045767744523;
    msg.z = 0.8454356176303538;

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
    msg.setTimeStamp(0.9512060792150577);
    msg.setSource(65033U);
    msg.setSourceEntity(153U);
    msg.setDestination(40437U);
    msg.setDestinationEntity(107U);
    msg.time = 0.2859206694359673;
    msg.x = 0.8272850784175257;
    msg.y = 0.8815804598557482;
    msg.z = 0.2649766466777276;

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
    msg.setTimeStamp(0.2822692738872268);
    msg.setSource(3390U);
    msg.setSourceEntity(130U);
    msg.setDestination(16978U);
    msg.setDestinationEntity(78U);
    msg.time = 0.5133600215425892;
    msg.x = 0.801024728755884;
    msg.y = 0.05997873871930415;
    msg.z = 0.6207105133894627;

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
    msg.setTimeStamp(0.4667028564102398);
    msg.setSource(11928U);
    msg.setSourceEntity(117U);
    msg.setDestination(18058U);
    msg.setDestinationEntity(45U);
    msg.time = 0.04386771559845615;
    msg.x = 0.7954882867040385;
    msg.y = 0.2417040729583264;
    msg.z = 0.6240556701286886;

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
    msg.setTimeStamp(0.9201137202350607);
    msg.setSource(12110U);
    msg.setSourceEntity(247U);
    msg.setDestination(33229U);
    msg.setDestinationEntity(20U);
    msg.time = 0.6332145777425577;
    msg.x = 0.6440342203214721;
    msg.y = 0.02383783109145443;
    msg.z = 0.8856333740589551;

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
    msg.setTimeStamp(0.047275423230294544);
    msg.setSource(41933U);
    msg.setSourceEntity(101U);
    msg.setDestination(24123U);
    msg.setDestinationEntity(35U);
    msg.validity = 135U;
    msg.x = 0.8440229777263357;
    msg.y = 0.22125095770953773;
    msg.z = 0.5022106599921964;

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
    msg.setTimeStamp(0.4022121899120348);
    msg.setSource(38598U);
    msg.setSourceEntity(40U);
    msg.setDestination(54602U);
    msg.setDestinationEntity(146U);
    msg.validity = 73U;
    msg.x = 0.11041488583007542;
    msg.y = 0.2335086951268568;
    msg.z = 0.824647471831565;

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
    msg.setTimeStamp(0.0023755620751774176);
    msg.setSource(13844U);
    msg.setSourceEntity(100U);
    msg.setDestination(18524U);
    msg.setDestinationEntity(179U);
    msg.validity = 236U;
    msg.x = 0.5144325878088684;
    msg.y = 0.19740998534088383;
    msg.z = 0.6712590214094271;

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
    msg.setTimeStamp(0.6417227934559383);
    msg.setSource(27864U);
    msg.setSourceEntity(170U);
    msg.setDestination(10534U);
    msg.setDestinationEntity(210U);
    msg.validity = 2U;
    msg.x = 0.9896136879552965;
    msg.y = 0.12015123111680448;
    msg.z = 0.9531378052930525;

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
    msg.setTimeStamp(0.15437256340368166);
    msg.setSource(29482U);
    msg.setSourceEntity(97U);
    msg.setDestination(55125U);
    msg.setDestinationEntity(76U);
    msg.validity = 160U;
    msg.x = 0.737615429171305;
    msg.y = 0.7567274985274399;
    msg.z = 0.013408304234393098;

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
    msg.setTimeStamp(0.7049165641055094);
    msg.setSource(46926U);
    msg.setSourceEntity(118U);
    msg.setDestination(8094U);
    msg.setDestinationEntity(117U);
    msg.validity = 90U;
    msg.x = 0.149292951526106;
    msg.y = 0.8702297283857956;
    msg.z = 0.9750836335952376;

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
    msg.setTimeStamp(0.8484997705818926);
    msg.setSource(28145U);
    msg.setSourceEntity(8U);
    msg.setDestination(45327U);
    msg.setDestinationEntity(225U);
    msg.time = 0.39935460121527744;
    msg.x = 0.166125111296055;
    msg.y = 0.2379311834893686;
    msg.z = 0.6591227452896886;

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
    msg.setTimeStamp(0.2429248833180353);
    msg.setSource(56372U);
    msg.setSourceEntity(118U);
    msg.setDestination(11107U);
    msg.setDestinationEntity(165U);
    msg.time = 0.5602984723702372;
    msg.x = 0.40296974006162356;
    msg.y = 0.6648843148294561;
    msg.z = 0.32524590835760014;

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
    msg.setTimeStamp(0.9973707269138482);
    msg.setSource(61220U);
    msg.setSourceEntity(121U);
    msg.setDestination(42144U);
    msg.setDestinationEntity(60U);
    msg.time = 0.8617375083743338;
    msg.x = 0.29791708915993775;
    msg.y = 0.5315721792713082;
    msg.z = 0.11078032654631786;

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
    msg.setTimeStamp(0.9398974881803763);
    msg.setSource(9980U);
    msg.setSourceEntity(25U);
    msg.setDestination(59902U);
    msg.setDestinationEntity(244U);
    msg.validity = 159U;
    msg.value = 0.044642973039084155;

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
    msg.setTimeStamp(0.49768747907052246);
    msg.setSource(55736U);
    msg.setSourceEntity(88U);
    msg.setDestination(18012U);
    msg.setDestinationEntity(49U);
    msg.validity = 174U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3716427684284265;
    tmp_msg_0.y = 0.5184235539893159;
    tmp_msg_0.z = 0.09044545645703717;
    tmp_msg_0.phi = 0.49781435318629774;
    tmp_msg_0.theta = 0.8799561859026602;
    tmp_msg_0.psi = 0.26043231389485033;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7139153766588965;

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
    msg.setTimeStamp(0.7474061983258493);
    msg.setSource(31362U);
    msg.setSourceEntity(196U);
    msg.setDestination(33574U);
    msg.setDestinationEntity(249U);
    msg.validity = 175U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.09948692152854355;
    tmp_msg_0.y = 0.42688941668092817;
    tmp_msg_0.z = 0.4818257928930002;
    tmp_msg_0.phi = 0.24975034135202545;
    tmp_msg_0.theta = 0.25583969237098203;
    tmp_msg_0.psi = 0.8748417479148297;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.1731340591916919;

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
    msg.setTimeStamp(0.9577585510072739);
    msg.setSource(7652U);
    msg.setSourceEntity(111U);
    msg.setDestination(38592U);
    msg.setDestinationEntity(190U);
    msg.value = 0.10528436520848428;

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
    msg.setTimeStamp(0.4075248208194622);
    msg.setSource(29787U);
    msg.setSourceEntity(140U);
    msg.setDestination(41304U);
    msg.setDestinationEntity(189U);
    msg.value = 0.3851699523511616;

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
    msg.setTimeStamp(0.5807237102297073);
    msg.setSource(33490U);
    msg.setSourceEntity(43U);
    msg.setDestination(12013U);
    msg.setDestinationEntity(195U);
    msg.value = 0.17904107488107268;

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
    msg.setTimeStamp(0.7034202552801253);
    msg.setSource(42709U);
    msg.setSourceEntity(0U);
    msg.setDestination(51435U);
    msg.setDestinationEntity(26U);
    msg.value = 0.1529486522229102;

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
    msg.setTimeStamp(0.9201621068474127);
    msg.setSource(10679U);
    msg.setSourceEntity(122U);
    msg.setDestination(52263U);
    msg.setDestinationEntity(197U);
    msg.value = 0.09370373285435385;

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
    msg.setTimeStamp(0.3058799975836046);
    msg.setSource(11498U);
    msg.setSourceEntity(164U);
    msg.setDestination(61690U);
    msg.setDestinationEntity(39U);
    msg.value = 0.17056359544073696;

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
    msg.setTimeStamp(0.2580416446809197);
    msg.setSource(64177U);
    msg.setSourceEntity(214U);
    msg.setDestination(33636U);
    msg.setDestinationEntity(181U);
    msg.value = 0.3268979725547251;

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
    msg.setTimeStamp(0.04107940988584613);
    msg.setSource(13647U);
    msg.setSourceEntity(204U);
    msg.setDestination(46211U);
    msg.setDestinationEntity(24U);
    msg.value = 0.6308097291906543;

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
    msg.setTimeStamp(0.07735150868411711);
    msg.setSource(12491U);
    msg.setSourceEntity(166U);
    msg.setDestination(58782U);
    msg.setDestinationEntity(199U);
    msg.value = 0.6824564031309628;

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
    msg.setTimeStamp(0.4884434159317419);
    msg.setSource(12855U);
    msg.setSourceEntity(217U);
    msg.setDestination(11788U);
    msg.setDestinationEntity(244U);
    msg.value = 0.7318393524536946;

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
    msg.setTimeStamp(0.2183011613219431);
    msg.setSource(63173U);
    msg.setSourceEntity(192U);
    msg.setDestination(32460U);
    msg.setDestinationEntity(106U);
    msg.value = 0.05022666580992874;

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
    msg.setTimeStamp(0.9468866982887983);
    msg.setSource(23819U);
    msg.setSourceEntity(227U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(75U);
    msg.value = 0.7526808752323468;

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
    msg.setTimeStamp(0.9212819492258292);
    msg.setSource(60843U);
    msg.setSourceEntity(104U);
    msg.setDestination(6616U);
    msg.setDestinationEntity(189U);
    msg.value = 0.8476480242657813;

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
    msg.setTimeStamp(0.14330014295386295);
    msg.setSource(38641U);
    msg.setSourceEntity(50U);
    msg.setDestination(25836U);
    msg.setDestinationEntity(162U);
    msg.value = 0.5285038148069913;

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
    msg.setTimeStamp(0.06575537364529094);
    msg.setSource(17002U);
    msg.setSourceEntity(208U);
    msg.setDestination(8819U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6675266331335824;

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
    msg.setTimeStamp(0.7870025661697362);
    msg.setSource(28256U);
    msg.setSourceEntity(138U);
    msg.setDestination(44369U);
    msg.setDestinationEntity(119U);
    msg.value = 0.7686128409121051;

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
    msg.setTimeStamp(0.6250893892988375);
    msg.setSource(2123U);
    msg.setSourceEntity(247U);
    msg.setDestination(45678U);
    msg.setDestinationEntity(5U);
    msg.value = 0.7607168467348538;

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
    msg.setTimeStamp(0.3083104406798638);
    msg.setSource(41388U);
    msg.setSourceEntity(145U);
    msg.setDestination(13716U);
    msg.setDestinationEntity(59U);
    msg.value = 0.9908091280517587;

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
    msg.setTimeStamp(0.11424761538271444);
    msg.setSource(13700U);
    msg.setSourceEntity(181U);
    msg.setDestination(13128U);
    msg.setDestinationEntity(36U);
    msg.value = 0.9325098082048375;

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
    msg.setTimeStamp(0.5322011062147637);
    msg.setSource(58775U);
    msg.setSourceEntity(36U);
    msg.setDestination(35193U);
    msg.setDestinationEntity(80U);
    msg.value = 0.7844355315950514;

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
    msg.setTimeStamp(0.3756119633889906);
    msg.setSource(36656U);
    msg.setSourceEntity(64U);
    msg.setDestination(36828U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2772030008072822;

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
    msg.setTimeStamp(0.49149619109363774);
    msg.setSource(44951U);
    msg.setSourceEntity(103U);
    msg.setDestination(30766U);
    msg.setDestinationEntity(109U);
    msg.value = 0.354366175536852;

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
    msg.setTimeStamp(0.7430790575763473);
    msg.setSource(25758U);
    msg.setSourceEntity(61U);
    msg.setDestination(48752U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9759211871339109;

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
    msg.setTimeStamp(0.8785586216192781);
    msg.setSource(26108U);
    msg.setSourceEntity(140U);
    msg.setDestination(13646U);
    msg.setDestinationEntity(58U);
    msg.value = 0.4268027572629236;

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
    msg.setTimeStamp(0.11574118746877327);
    msg.setSource(51300U);
    msg.setSourceEntity(108U);
    msg.setDestination(55714U);
    msg.setDestinationEntity(104U);
    msg.direction = 0.9871519451408334;
    msg.speed = 0.8185400964546343;

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
    msg.setTimeStamp(0.1992041981691296);
    msg.setSource(1208U);
    msg.setSourceEntity(203U);
    msg.setDestination(13386U);
    msg.setDestinationEntity(206U);
    msg.direction = 0.8843471553728933;
    msg.speed = 0.12403615746658725;

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
    msg.setTimeStamp(0.5538859233967613);
    msg.setSource(3221U);
    msg.setSourceEntity(117U);
    msg.setDestination(36540U);
    msg.setDestinationEntity(31U);
    msg.direction = 0.2304414029081161;
    msg.speed = 0.04183436475167579;

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
    msg.setTimeStamp(0.1880248963977209);
    msg.setSource(33295U);
    msg.setSourceEntity(219U);
    msg.setDestination(52798U);
    msg.setDestinationEntity(204U);
    msg.value = 0.42577423432420825;

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
    msg.setTimeStamp(0.9851648389886397);
    msg.setSource(13704U);
    msg.setSourceEntity(30U);
    msg.setDestination(31256U);
    msg.setDestinationEntity(111U);
    msg.value = 0.6514892656607855;

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
    msg.setTimeStamp(0.28488771702987536);
    msg.setSource(34920U);
    msg.setSourceEntity(126U);
    msg.setDestination(43302U);
    msg.setDestinationEntity(231U);
    msg.value = 0.24467080942411013;

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
    msg.setTimeStamp(0.5722191247382218);
    msg.setSource(25776U);
    msg.setSourceEntity(127U);
    msg.setDestination(45357U);
    msg.setDestinationEntity(25U);
    msg.value.assign("HQYZYRZIRYLCAWYZLAFVFTUIFDXIQWUEXRGBUEWIDMLGKMBDDURPA");

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
    msg.setTimeStamp(0.4009771718521974);
    msg.setSource(46238U);
    msg.setSourceEntity(156U);
    msg.setDestination(60783U);
    msg.setDestinationEntity(245U);
    msg.value.assign("WOQBPXJJMOYOUEZTNNRDELIBVVOVQAYHHCKMIVXIVNAQTQKKYSNFEYLBBSSINRKSUMMCNWYXBFLHZKSRNTVCEXDFYQFTVEQS");

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
    msg.setTimeStamp(0.7143753621677865);
    msg.setSource(15547U);
    msg.setSourceEntity(14U);
    msg.setDestination(42429U);
    msg.setDestinationEntity(94U);
    msg.value.assign("SGIHRDRSRENAXWXSZWGJRELJOVBBMJJGOFCOULJOSNOGZZZHKNEYKSBNLMDATMBUEMWYIKDYQKCBIC");

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
    msg.setTimeStamp(0.7945778022090426);
    msg.setSource(54612U);
    msg.setSourceEntity(238U);
    msg.setDestination(25822U);
    msg.setDestinationEntity(54U);
    const char tmp_msg_0[] = {42, -8, -14, 66, 33, -69, -43, -34, -22, 72, 2, -31, 63, -100, 95, 27, -37, 19, -86, -72, -100, 46, -37, 92, -44, -53, -54, 44, 83, -24, 59, 37, 54, 54, -16, 100, 34, -97, 17, 67, 82, -36, 23, 75, -128, 4, -29, 58, -20, -31, 12, -78, -114, 10, -3, 6, -31, 92, -95, 10, 117, -22, 64, -16, 74, -107, 47, -85, 59, -8, -16, -91, -116, 72, -54, -64, 52, 121, 86, 17};
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
    msg.setTimeStamp(0.7175426811705075);
    msg.setSource(49395U);
    msg.setSourceEntity(191U);
    msg.setDestination(5389U);
    msg.setDestinationEntity(134U);
    const char tmp_msg_0[] = {53, -41, -68, 96, 19, -24, -36, -125, -23, -64, -72, -102, -78, -51, -108, -64, 69, -91, -126, 97, 53, 66, 85, 3, -67, 77, 0, 70, 93, -15, -53, -71, -29, -31, -120, -110, 97, -48, -107, 64, 67, 84, -116, 10, 112, -24, -2, 43, -15, -119, -5, 11, -83, -84, -95, 60, 71, -14, 29, -96, -95, 58, 55};
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
    msg.setTimeStamp(0.5777744878352186);
    msg.setSource(4226U);
    msg.setSourceEntity(37U);
    msg.setDestination(63528U);
    msg.setDestinationEntity(226U);
    const char tmp_msg_0[] = {46, 77, 125, -23, 53, 4, -60, -23, -18, 69, 94, 15, 125, 58, 14, 86, -21, -26, -111, 46, 48, -2, 111, -31, 32, 21, -64, -86, -106, 77, 11, -30, 61, 45, 106, 115, 85, 7, 30, 122, 22, -86, -6, -70, -88, -76, 32, -47, 1, -9, -96, -72, -100, 116, -91, -74, 66, -87, 106, 1, 48, 52, -7, -62, -41, 83, 26, -103, 118, -47, -5, -113, -9, -89, 70, -33, -20, -57, -121, -114, 6, 79, -40, 105, -11, -19, -6, -44, -21, -60, 19, -125, 112, -47, -45, -110, 100, 103, 76, -79, -13, 4, -18, -61, 59, -105, 87, -30, 35, -28, -72, -106, 110, 3, 62, -6, 71, 112, 73, 20, -94, -36, 0, -112, -9, 92, 34, -86, -74, 19, -57, 54, 60, 104, -111, 52, -4, -51, 66, -102, 5, -109, 57, -25, 66, 72, -100, -27, 83, 90, -71, -96, -112, -110, 65, -88, 9, 105, -109, -36, 65, 21, 68, -91, -119, -64, -50, -95, -11, -85, -119, 64, 36, -124, 22, -36, -16, 22, 116};
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
    msg.setTimeStamp(0.896826741460428);
    msg.setSource(42426U);
    msg.setSourceEntity(185U);
    msg.setDestination(27298U);
    msg.setDestinationEntity(137U);
    msg.frequency = 1095687923U;
    msg.min_range = 41298U;
    msg.max_range = 23816U;

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
    msg.setTimeStamp(0.15292057415312776);
    msg.setSource(20208U);
    msg.setSourceEntity(207U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(227U);
    msg.frequency = 4273846840U;
    msg.min_range = 31442U;
    msg.max_range = 64985U;

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
    msg.setTimeStamp(0.4427319957836776);
    msg.setSource(54987U);
    msg.setSourceEntity(203U);
    msg.setDestination(14228U);
    msg.setDestinationEntity(200U);
    msg.frequency = 1383594331U;
    msg.min_range = 50130U;
    msg.max_range = 30149U;

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
    msg.setTimeStamp(0.005142542184661925);
    msg.setSource(15548U);
    msg.setSourceEntity(194U);
    msg.setDestination(3017U);
    msg.setDestinationEntity(5U);
    msg.type = 9U;
    msg.frequency = 200980808U;
    msg.min_range = 45332U;
    msg.max_range = 10297U;
    msg.bits_per_point = 54U;
    msg.scale_factor = 0.16527509303599586;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6238446181292071;
    tmp_msg_0.beam_height = 0.0075864432451988595;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {103, 33, 13, 118, 32, -5, 31, 101, -4, -76, 103, -73, 126, 77, 118, -105, -96, 17, 39, -115, 20, 101, -76, -77, -15, 99, 20, -62, 112, 64, -128, 100, -34, -113, 64, -38, 25, 116, -122, 43, -1, 73, 104, -16, -58, 36, -84, 20, 58, -98, -62, 107, 47, 28, 100, -29, -53, -100, 22, 71, -10, -38, 90, -32, -74, 0, -26, 99, -15, -33, 121, -9, 83, 101, 120, -14, 90, 96, 54, 50, 0, 107, -114, -46, 80, -13, 72, -34, -114, -60, -29, -2, 110, 16, 93, -76, -59, -115, 1, 102, 38, 59, 78, 122, -127, -53, -10, 51, -106, -128, -92, 15, -52, 49, -84, 117, -76, -15, 34, -63, -74, -126, -98, -2, 55, -70, -73, -42, 76, -70, -122, -116, -91, 52, 56, -82, 70, -117, 0, -35, 50, 119, -15, -100, 36, 46, 118, 57, 40, 56, -37, -34, -79, 48, 84, -27, 109, 116, 44, -101, 99, -52, -82, 44, -4, -94, -55, -105, -113, -84, 113, -110, 115, -65, 95, 58, 99, -43, -80, 109, -5, -105, -110, -110, 109, 7, -83, -13, 50, 77, 35, 113, 0, -18, -16, -79, 111, 101, 13, 88, -16};
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
    msg.setTimeStamp(0.3086469114329147);
    msg.setSource(12222U);
    msg.setSourceEntity(11U);
    msg.setDestination(9913U);
    msg.setDestinationEntity(241U);
    msg.type = 94U;
    msg.frequency = 2897151194U;
    msg.min_range = 22429U;
    msg.max_range = 49975U;
    msg.bits_per_point = 197U;
    msg.scale_factor = 0.6649627479638626;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6562630952812328;
    tmp_msg_0.beam_height = 0.23723658746938658;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {31, -23, -43, 71, -31, 72, 65, 99, -42, 18, -100, -91, -114, -29, 35, -115, -52, 29, -40, -111, -81, 59, 23, -70, 14, 96, -78, 0, 69, -98, 5, 33, 18, 67, 76, -62, -118, 46, -95, 58, -52, -17, 32, -126, 11, 39, 13, -21, 9, -44, 35, 116, -38, -126, 53, -15, -42, 31, -44, -128, -39, -100, -10, -68, -28, 126, 124, -28, 5, 25, -116, 107, 77, 77};
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
    msg.setTimeStamp(0.3104497924484917);
    msg.setSource(42110U);
    msg.setSourceEntity(63U);
    msg.setDestination(24661U);
    msg.setDestinationEntity(192U);
    msg.type = 174U;
    msg.frequency = 1138274111U;
    msg.min_range = 837U;
    msg.max_range = 12848U;
    msg.bits_per_point = 135U;
    msg.scale_factor = 0.7368504243060994;
    const char tmp_msg_0[] = {7, 71, 108, 2, -95, -18, -51, -107, 14, 21, -37, 40, 103, -24, -28, -28, -93, -118, 29, -54, 117, -26, -27, 117, 55, 121, -25, -111, 44, 104, 107, 102, -91, -121, 59, -2, -63, 34, 24, 31, 56, 74, 17, -86, 35, 85, 97, -103, 70, -93, -101, 70, 20, -34, -96, -5, -52, 29, 75, 104, -107, -18, 105, -77, -58, -68, -78, -3, -22, -89, 12, -34, 45, -72, -59, -52, 117, -89, -125, 113, -24, 11, 123, 112, 71, -37, -55, -6, 19, -113, 27, 75, -34, -107, -118, 71, 65, -80, -15, -40, 41};
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
    msg.setTimeStamp(0.6411535655610949);
    msg.setSource(40941U);
    msg.setSourceEntity(202U);
    msg.setDestination(8828U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.7483845557387823);
    msg.setSource(21527U);
    msg.setSourceEntity(162U);
    msg.setDestination(35196U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.4879589153662004);
    msg.setSource(18729U);
    msg.setSourceEntity(215U);
    msg.setDestination(38988U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.701678646222345);
    msg.setSource(32309U);
    msg.setSourceEntity(79U);
    msg.setDestination(63087U);
    msg.setDestinationEntity(31U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.31672630671223434);
    msg.setSource(60288U);
    msg.setSourceEntity(21U);
    msg.setDestination(31646U);
    msg.setDestinationEntity(251U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.040832948864069296);
    msg.setSource(18023U);
    msg.setSourceEntity(158U);
    msg.setDestination(49588U);
    msg.setDestinationEntity(115U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.4163688403706317);
    msg.setSource(64673U);
    msg.setSourceEntity(195U);
    msg.setDestination(48238U);
    msg.setDestinationEntity(187U);
    msg.value = 0.30067187643493565;
    msg.confidence = 0.35348825716992827;
    msg.opmodes.assign("VDYZKAJRFUYPXZOKNRZISGYFFIIODOEAIMBSIDMTANIQKSWXNGWHHVXEPQGLQNBEMLJHGCKMOJOHURPTRHVACBQKYSBEHTNIONVRTXHLIIFXMYLLFAETNGSUARUPQUHLYMNUCZUBVGDTASSZDTVCJFCPJMMLCLBSWUBFCCXOJGAKQJ");

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
    msg.setTimeStamp(0.09112667368958849);
    msg.setSource(16931U);
    msg.setSourceEntity(18U);
    msg.setDestination(16475U);
    msg.setDestinationEntity(31U);
    msg.value = 0.22247537857600652;
    msg.confidence = 0.35765189060614433;
    msg.opmodes.assign("KZBTEWEFXPPAHDGGUNABHZRORXJWHFOAYEEBJJJCOQBIQCGJSIGUQEOSRLRXCLCSPITYLTSULXPYBWAUXIGWWDUXEBDNDCNHKMJISEVMIBLMWCINKTXUJCCIVVKKHMYOHZMONZIESCJNSKKUTVRQOWFRJ");

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
    msg.setTimeStamp(0.4490115290713992);
    msg.setSource(62480U);
    msg.setSourceEntity(194U);
    msg.setDestination(14435U);
    msg.setDestinationEntity(212U);
    msg.value = 0.02194098753984819;
    msg.confidence = 0.5546009197229171;
    msg.opmodes.assign("TRFAWEWHECKHBNUBRBCMLGOEJBRUVRBFFDPFZSJZELWORIVGXQZYRYUGVCRWPNIQERWNCOBVGKEFAHYSAXALKFYOSIROALHQFJDHFJBKMOUEIFZAULZMPHLTSQCYHSKWGAQNZWSPKOVVTUODGJNXXXUSYJQTMKWHBTYSBDOVGCVGRCSXMNHIDETZMINPTPLXMYWAFAETVTODLTYZXDJAJMJEMGQUSYKWNIDUNZVGUIPPLCLDBKNQCMJ");

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
    msg.setTimeStamp(0.06587009856031967);
    msg.setSource(26303U);
    msg.setSourceEntity(111U);
    msg.setDestination(18031U);
    msg.setDestinationEntity(234U);
    msg.itow = 1392951179U;
    msg.lat = 0.14480712710787236;
    msg.lon = 0.2485626708334977;
    msg.height_ell = 0.3340155564963969;
    msg.height_sea = 0.2800181324303216;
    msg.hacc = 0.6066811712833868;
    msg.vacc = 0.5451701690754748;
    msg.vel_n = 0.35491667582745123;
    msg.vel_e = 0.4846515325577565;
    msg.vel_d = 0.6964479792850924;
    msg.speed = 0.6390411175704188;
    msg.gspeed = 0.8987413499207099;
    msg.heading = 0.9048240854602936;
    msg.sacc = 0.6336372168644047;
    msg.cacc = 0.27717775568199177;

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
    msg.setTimeStamp(0.4136731220007227);
    msg.setSource(21147U);
    msg.setSourceEntity(20U);
    msg.setDestination(49834U);
    msg.setDestinationEntity(220U);
    msg.itow = 372720029U;
    msg.lat = 0.09856262274257821;
    msg.lon = 0.04127790317507696;
    msg.height_ell = 0.727675899140649;
    msg.height_sea = 0.8480276793566499;
    msg.hacc = 0.018671770990372316;
    msg.vacc = 0.3804133152306669;
    msg.vel_n = 0.9463938920843036;
    msg.vel_e = 0.44165174592307477;
    msg.vel_d = 0.4284594375728572;
    msg.speed = 0.9742143521745014;
    msg.gspeed = 0.9940457572043624;
    msg.heading = 0.011222793424214506;
    msg.sacc = 0.4619709448391093;
    msg.cacc = 0.749809750168761;

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
    msg.setTimeStamp(0.38684829623554806);
    msg.setSource(43349U);
    msg.setSourceEntity(196U);
    msg.setDestination(25029U);
    msg.setDestinationEntity(93U);
    msg.itow = 3663864342U;
    msg.lat = 0.7405892885298591;
    msg.lon = 0.10700401776751;
    msg.height_ell = 0.6665271312678663;
    msg.height_sea = 0.9375818585966628;
    msg.hacc = 0.6521377006786127;
    msg.vacc = 0.7943273150009638;
    msg.vel_n = 0.8479138778959876;
    msg.vel_e = 0.328186244428495;
    msg.vel_d = 0.9361838678670343;
    msg.speed = 0.6326578684064705;
    msg.gspeed = 0.3401479715921205;
    msg.heading = 0.37948321853003375;
    msg.sacc = 0.2841887487036635;
    msg.cacc = 0.40057700313534683;

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
    msg.setTimeStamp(0.360900564762069);
    msg.setSource(49927U);
    msg.setSourceEntity(79U);
    msg.setDestination(4685U);
    msg.setDestinationEntity(45U);
    msg.id = 47U;
    msg.value = 0.4420227265339265;

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
    msg.setTimeStamp(0.2406816375582832);
    msg.setSource(28637U);
    msg.setSourceEntity(17U);
    msg.setDestination(25034U);
    msg.setDestinationEntity(173U);
    msg.id = 242U;
    msg.value = 0.9356674363275208;

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
    msg.setTimeStamp(0.5382581413303936);
    msg.setSource(47132U);
    msg.setSourceEntity(146U);
    msg.setDestination(49845U);
    msg.setDestinationEntity(238U);
    msg.id = 114U;
    msg.value = 0.29838031169962176;

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
    msg.setTimeStamp(0.7948961988222605);
    msg.setSource(36736U);
    msg.setSourceEntity(211U);
    msg.setDestination(3072U);
    msg.setDestinationEntity(200U);
    msg.x = 0.1270139762581619;
    msg.y = 0.09412258761358738;
    msg.z = 0.1996284506639454;
    msg.phi = 0.24154530153025133;
    msg.theta = 0.6987283040959975;
    msg.psi = 0.9816657367059299;

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
    msg.setTimeStamp(0.6106424526561157);
    msg.setSource(22388U);
    msg.setSourceEntity(70U);
    msg.setDestination(37516U);
    msg.setDestinationEntity(94U);
    msg.x = 0.27660832923492573;
    msg.y = 0.2672470861934839;
    msg.z = 0.06828807700467099;
    msg.phi = 0.6074449583186885;
    msg.theta = 0.5528966905119169;
    msg.psi = 0.9655159122366745;

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
    msg.setTimeStamp(0.7831574550026054);
    msg.setSource(17281U);
    msg.setSourceEntity(223U);
    msg.setDestination(27122U);
    msg.setDestinationEntity(126U);
    msg.x = 0.7409961931229356;
    msg.y = 0.16467746318297316;
    msg.z = 0.27253183569699246;
    msg.phi = 0.6260185323379316;
    msg.theta = 0.7934776913141072;
    msg.psi = 0.7368751451197503;

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
    msg.setTimeStamp(0.1631955041693871);
    msg.setSource(34069U);
    msg.setSourceEntity(0U);
    msg.setDestination(51205U);
    msg.setDestinationEntity(30U);
    msg.beam_width = 0.8295083164057149;
    msg.beam_height = 0.2234851904413292;

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
    msg.setTimeStamp(0.6974404969971264);
    msg.setSource(18182U);
    msg.setSourceEntity(113U);
    msg.setDestination(44602U);
    msg.setDestinationEntity(5U);
    msg.beam_width = 0.1550091808815467;
    msg.beam_height = 0.8383863409508451;

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
    msg.setTimeStamp(0.18882294204003136);
    msg.setSource(44731U);
    msg.setSourceEntity(225U);
    msg.setDestination(64161U);
    msg.setDestinationEntity(208U);
    msg.beam_width = 0.26516065262087696;
    msg.beam_height = 0.6467293479520881;

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
    msg.setTimeStamp(0.03883253391950725);
    msg.setSource(59122U);
    msg.setSourceEntity(37U);
    msg.setDestination(25120U);
    msg.setDestinationEntity(169U);
    msg.sane = 168U;

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
    msg.setTimeStamp(0.48743958034592094);
    msg.setSource(7422U);
    msg.setSourceEntity(170U);
    msg.setDestination(3169U);
    msg.setDestinationEntity(23U);
    msg.sane = 176U;

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
    msg.setTimeStamp(0.31476427126501083);
    msg.setSource(27861U);
    msg.setSourceEntity(242U);
    msg.setDestination(61005U);
    msg.setDestinationEntity(31U);
    msg.sane = 7U;

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
    msg.setTimeStamp(0.23610809293097623);
    msg.setSource(17566U);
    msg.setSourceEntity(217U);
    msg.setDestination(60127U);
    msg.setDestinationEntity(19U);
    msg.id = 13U;
    msg.zoom = 47U;
    msg.action = 73U;

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
    msg.setTimeStamp(0.7925496283605992);
    msg.setSource(9501U);
    msg.setSourceEntity(82U);
    msg.setDestination(1713U);
    msg.setDestinationEntity(111U);
    msg.id = 242U;
    msg.zoom = 175U;
    msg.action = 95U;

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
    msg.setTimeStamp(0.1071338440008186);
    msg.setSource(12781U);
    msg.setSourceEntity(155U);
    msg.setDestination(42131U);
    msg.setDestinationEntity(133U);
    msg.id = 111U;
    msg.zoom = 102U;
    msg.action = 22U;

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
    msg.setTimeStamp(0.8248378822786855);
    msg.setSource(63128U);
    msg.setSourceEntity(14U);
    msg.setDestination(55878U);
    msg.setDestinationEntity(3U);
    msg.id = 129U;
    msg.value = 0.14038119844297858;

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
    msg.setTimeStamp(0.48575115826945126);
    msg.setSource(53299U);
    msg.setSourceEntity(3U);
    msg.setDestination(28649U);
    msg.setDestinationEntity(59U);
    msg.id = 75U;
    msg.value = 0.8966080835382101;

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
    msg.setTimeStamp(0.6166736606803255);
    msg.setSource(53005U);
    msg.setSourceEntity(38U);
    msg.setDestination(29029U);
    msg.setDestinationEntity(18U);
    msg.id = 96U;
    msg.value = 0.5748852231749073;

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
    msg.setTimeStamp(0.8542980954302488);
    msg.setSource(20894U);
    msg.setSourceEntity(44U);
    msg.setDestination(54656U);
    msg.setDestinationEntity(27U);
    msg.id = 87U;
    msg.value = 0.20074784150988634;

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
    msg.setTimeStamp(0.9768901007765644);
    msg.setSource(20633U);
    msg.setSourceEntity(194U);
    msg.setDestination(56197U);
    msg.setDestinationEntity(236U);
    msg.id = 160U;
    msg.value = 0.062451877579902115;

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
    msg.setTimeStamp(0.7622092596751568);
    msg.setSource(46418U);
    msg.setSourceEntity(42U);
    msg.setDestination(13377U);
    msg.setDestinationEntity(156U);
    msg.id = 172U;
    msg.value = 0.23428921815721238;

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
    msg.setTimeStamp(0.8373136957294937);
    msg.setSource(26527U);
    msg.setSourceEntity(229U);
    msg.setDestination(57920U);
    msg.setDestinationEntity(32U);
    msg.id = 1U;
    msg.angle = 0.9796528849372269;

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
    msg.setTimeStamp(0.8344839080231086);
    msg.setSource(59874U);
    msg.setSourceEntity(165U);
    msg.setDestination(60252U);
    msg.setDestinationEntity(6U);
    msg.id = 32U;
    msg.angle = 0.8088591650875988;

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
    msg.setTimeStamp(0.08605709200878131);
    msg.setSource(9429U);
    msg.setSourceEntity(251U);
    msg.setDestination(50232U);
    msg.setDestinationEntity(224U);
    msg.id = 98U;
    msg.angle = 0.5955323139264638;

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
    msg.setTimeStamp(0.5609381660223088);
    msg.setSource(25034U);
    msg.setSourceEntity(7U);
    msg.setDestination(46486U);
    msg.setDestinationEntity(247U);
    msg.op = 41U;
    msg.actions.assign("EQRFXRSKFWBDYBHAKHUAEAHZSNXFCWCSUPEMWUTDHXUMKBAPPKDZATNMPLCBLNLRRCZUCISJVNKRLQOUOFQUGVEJQWPYQOYXXZVVIFHWCMKTNREJLCLKWTICRIHGHJUOTUALSYULZARFJBMFQPCDOPGLJOMOSEYSLIBHGMPDNNMDZTTTPESTM");

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
    msg.setTimeStamp(0.9952412607954974);
    msg.setSource(1583U);
    msg.setSourceEntity(225U);
    msg.setDestination(28809U);
    msg.setDestinationEntity(87U);
    msg.op = 32U;
    msg.actions.assign("ZAPOOFLREUBBYXNPWDBPPQUGYONJGOORMUDBTWFNV");

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
    msg.setTimeStamp(0.6712554755950952);
    msg.setSource(15998U);
    msg.setSourceEntity(176U);
    msg.setDestination(23524U);
    msg.setDestinationEntity(41U);
    msg.op = 247U;
    msg.actions.assign("EJQIMKCNXAZUXERQUQKASMWJHTFVVFOHSCTPODRVPJKYTXDAORGDVBPNJYYYPBWOSSROGHCLNFVQTLYPKRMBLXCDSDJFCIUPPLUILA");

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
    msg.setTimeStamp(0.8700973667976526);
    msg.setSource(3514U);
    msg.setSourceEntity(52U);
    msg.setDestination(18211U);
    msg.setDestinationEntity(178U);
    msg.actions.assign("NDZEGBBSJGLRPLGBMAXWTNBZ");

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
    msg.setTimeStamp(0.9666601008576086);
    msg.setSource(17692U);
    msg.setSourceEntity(166U);
    msg.setDestination(23853U);
    msg.setDestinationEntity(102U);
    msg.actions.assign("UXDZVCNZBUEGSHGHVCMVTMRKXWWPHJCEUYFBGOAFTPZAREUPYMEKOQVFXQOMIINQWYNTBMMNCMWTVOZLDHLAIFDJJJOTYDQOCYVSQLFSCGLJNUCAIIXOZSAENDLNKKEIQJFUWGAMEEAUENMHXVJVGWXQRDKLJFTYBBWUTILPXDPKSNUESHPTWXPKDK");

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
    msg.setTimeStamp(0.2628980925753135);
    msg.setSource(30417U);
    msg.setSourceEntity(231U);
    msg.setDestination(45667U);
    msg.setDestinationEntity(147U);
    msg.actions.assign("UNVNZHBSFDCTKKNTVHMAAZLJATEAPICOTPSXIKQIBMDUYJYFPCSUDHRNQEGEYELPNHOKMILVZQSCZEVKXWZHEVBAJFMRWJYNZQRAUYOGRIULSLDFJIFGITGKBKTYOHMVTQBWXUXWBPCLUDRGOPXYJVDYZBPCWOLYWDWHRUFNAMPURIHRBZAQWXTDOPZVBLQCKRMGXSMHDQXNXFJEYSDLMT");

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
    msg.setTimeStamp(0.4775181871849913);
    msg.setSource(40432U);
    msg.setSourceEntity(226U);
    msg.setDestination(64793U);
    msg.setDestinationEntity(81U);
    msg.button = 203U;
    msg.value = 215U;

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
    msg.setTimeStamp(0.7829761124118184);
    msg.setSource(12311U);
    msg.setSourceEntity(67U);
    msg.setDestination(26509U);
    msg.setDestinationEntity(178U);
    msg.button = 17U;
    msg.value = 26U;

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
    msg.setTimeStamp(0.4347233857081886);
    msg.setSource(45947U);
    msg.setSourceEntity(125U);
    msg.setDestination(23426U);
    msg.setDestinationEntity(141U);
    msg.button = 197U;
    msg.value = 223U;

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
    msg.setTimeStamp(0.766116409238672);
    msg.setSource(51526U);
    msg.setSourceEntity(92U);
    msg.setDestination(31039U);
    msg.setDestinationEntity(30U);
    msg.op = 39U;
    msg.text.assign("GVUSPVMTQVBUAPSARQTIYDLGDQITXSFFIRYVCPZHIAFMRUYHXODEMEJCLSWJTXLLAKLOASAWGMQTYFWOAQJBSNQEZRJBWIGPVNRZQHPJIXPFJTGVNWUIZRCMBERRDYFTUD");

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
    msg.setTimeStamp(0.947828434836381);
    msg.setSource(4206U);
    msg.setSourceEntity(228U);
    msg.setDestination(11930U);
    msg.setDestinationEntity(138U);
    msg.op = 253U;
    msg.text.assign("YYYIUZMOISOOMCDWBCPQKTFHEMIEWLZERKAHQARQ");

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
    msg.setTimeStamp(0.46968579580580594);
    msg.setSource(34521U);
    msg.setSourceEntity(104U);
    msg.setDestination(22141U);
    msg.setDestinationEntity(106U);
    msg.op = 181U;
    msg.text.assign("PLJCQHIEKTKAKMIZADSOBMNUOBQBRTVSVDGJTBFWRWYNRBLNFICIJLKU");

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
    msg.setTimeStamp(0.9336338570951632);
    msg.setSource(48906U);
    msg.setSourceEntity(140U);
    msg.setDestination(9025U);
    msg.setDestinationEntity(55U);
    msg.op = 219U;
    msg.time_remain = 0.10604636208420726;
    msg.sched_time = 0.16013650065161766;

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
    msg.setTimeStamp(0.8212365252163089);
    msg.setSource(49505U);
    msg.setSourceEntity(245U);
    msg.setDestination(12730U);
    msg.setDestinationEntity(230U);
    msg.op = 53U;
    msg.time_remain = 0.9456298234004991;
    msg.sched_time = 0.23429868190131498;

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
    msg.setTimeStamp(0.5881619677426166);
    msg.setSource(25236U);
    msg.setSourceEntity(110U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(24U);
    msg.op = 33U;
    msg.time_remain = 0.9933985915820555;
    msg.sched_time = 0.25015803267834213;

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
    msg.setTimeStamp(0.5647116001655195);
    msg.setSource(61296U);
    msg.setSourceEntity(145U);
    msg.setDestination(31300U);
    msg.setDestinationEntity(78U);
    msg.name.assign("NVWFSQTFWTPNEDAEWCGSBSWUJWXAROEHPCZLBIM");
    msg.op = 136U;
    msg.sched_time = 0.6066251316492202;

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
    msg.setTimeStamp(0.02417874515622076);
    msg.setSource(9494U);
    msg.setSourceEntity(19U);
    msg.setDestination(31101U);
    msg.setDestinationEntity(16U);
    msg.name.assign("KSTNDCHREINMQHLPJZYUWBNCUUMVGPGXODBGKWDXEBMWXRIGPHWESQFXRDJNVBJALHZBRQSDHKCLLAHCXOUGIMYQLUQIPVISBVBLGFKLAEEPPNYDWVNWSIHJPKXSLPDSFVYZRFZNVAOOUSORZOTTGYTCORGNMYQKTMNJTDRRZOWCXSHKVFIMDFQXGZPAZYCFYJOPNDHMEMWFCMEAJ");
    msg.op = 94U;
    msg.sched_time = 0.141499369969611;

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
    msg.setTimeStamp(0.5947783914332442);
    msg.setSource(58956U);
    msg.setSourceEntity(186U);
    msg.setDestination(61771U);
    msg.setDestinationEntity(126U);
    msg.name.assign("CYXPLQWAONFWDKIKUCFGURLJLXHMQPRGZVELPUMDOHISETRGJOYMKFEIRSUORYJJVEQNZAPYXZBOYGDCAOJAMJLK");
    msg.op = 187U;
    msg.sched_time = 0.33018493520001;

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
    msg.setTimeStamp(0.8803698591230803);
    msg.setSource(3488U);
    msg.setSourceEntity(99U);
    msg.setDestination(30833U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.8333368252745939);
    msg.setSource(54310U);
    msg.setSourceEntity(109U);
    msg.setDestination(39619U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.9251223361767296);
    msg.setSource(40621U);
    msg.setSourceEntity(211U);
    msg.setDestination(3870U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.07769659084057856);
    msg.setSource(14725U);
    msg.setSourceEntity(98U);
    msg.setDestination(11062U);
    msg.setDestinationEntity(101U);
    msg.name.assign("QSNUYQHDUQCGVPDRLLLOOHIFZXTYZJSZFPDSMJYKOJGMMANKJBJGAVUYAYQFD");
    msg.state = 76U;

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
    msg.setTimeStamp(0.4988105676632191);
    msg.setSource(40791U);
    msg.setSourceEntity(194U);
    msg.setDestination(28524U);
    msg.setDestinationEntity(7U);
    msg.name.assign("FKKYJIMNUYFRSVBPQHEFWRC");
    msg.state = 236U;

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
    msg.setTimeStamp(0.11476368206903098);
    msg.setSource(25037U);
    msg.setSourceEntity(112U);
    msg.setDestination(38302U);
    msg.setDestinationEntity(42U);
    msg.name.assign("LPFVERAAZOBSGWONEDQYQJNWZSLYAGDJUIMSKIWDJDFXPWTBJOTFDCBDPNUJZKYKSOLPRJZMHIJDRFRKCONXXMXXRTYMNQTOCHUYNAAWKJHBMILHGLGMUVYQBEMNBENRQDWPGQTZEPGCOANQXUACIJTCVZWFXDEMYRPEUDXSHFTWVHFAKLSGCHTONMJQOIVBLHURBVRXSYKUIHLZVKO");
    msg.state = 126U;

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
    msg.setTimeStamp(0.8689898009166428);
    msg.setSource(12015U);
    msg.setSourceEntity(53U);
    msg.setDestination(37277U);
    msg.setDestinationEntity(72U);
    msg.name.assign("AUHJOHZTNNCLUITTPOQLPEXNTFAAEGDCVYRIRSPBDWANSPRUBYHFZZRKSWUMMMLGWBOIOZHHQRIRSKOQIYCWRZGRDWDFDJQSLPVAFGLCGTWHFFZDYKYDVVHPETTIFJZQJHMVLCXRYEXAAJJREXPAOYLMLNVTECWKWMBXBSUJNBUKFCMEQYVBVYXOTJVUIWQKJIDBXBGFPYUNXBZLEIEPKSMPGVCQGSXAHGKKOWNNSDULZNCFGE");
    msg.value = 233U;

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
    msg.setTimeStamp(0.052516203259796446);
    msg.setSource(36518U);
    msg.setSourceEntity(150U);
    msg.setDestination(20832U);
    msg.setDestinationEntity(132U);
    msg.name.assign("LBMRLWHXIGVDQWSYBWVROGBASXYVASZUJVIFOKSHRUOHOQ");
    msg.value = 26U;

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
    msg.setTimeStamp(0.8349449242568354);
    msg.setSource(22385U);
    msg.setSourceEntity(46U);
    msg.setDestination(11225U);
    msg.setDestinationEntity(103U);
    msg.name.assign("SNVHDCVNTNRSMYVKQYGQIWUGGFPXBXJTAQDOMMVLPSXLELQKNQABKTBSXDNXIJKLVATTINVLJGSHXBLMSOUJUMPAHZLOJWOHFJRTCKWVRQUIZGDGJSUAAQWPDKIFPDIOZGTWFDLFCZHRTATMAFXQHQZPURPEYENYEZEVEZIMYYIYBQMRNBCJPOBREJVBKKOSZCFWITSPZBXGWUPSRGKZECYCAMDLYFFJWHMKBLWOFEERC");
    msg.value = 222U;

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
    msg.setTimeStamp(0.9257634939336481);
    msg.setSource(16612U);
    msg.setSourceEntity(94U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(38U);
    msg.name.assign("FKHGEPSVBNUXEMAKWFAKKDOTMGNXKZICIXMGEVQLSCTXZPAYCKESBPOHUTXRJTWQWDWQFVUALMYDCJUYDDGVGIHDSDQOCFJNTXAYJLTGLAXVNKEUFODHCBBVKPZOWYAQCBJWTGRWOIUJGTTDYMVSSJR");

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
    msg.setTimeStamp(0.6690746123292168);
    msg.setSource(4766U);
    msg.setSourceEntity(75U);
    msg.setDestination(16913U);
    msg.setDestinationEntity(227U);
    msg.name.assign("DBZFSMJMQABQOIZAXNPNLTNCPRXSZTAFCXFDWRKEXMMEWDPRYWKOVOELUEFKAEJEEIZJKVZYSDUTAMRYBJWUTQVWRQLZTWP");

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
    msg.setTimeStamp(0.16091754918391565);
    msg.setSource(50711U);
    msg.setSourceEntity(33U);
    msg.setDestination(22249U);
    msg.setDestinationEntity(252U);
    msg.name.assign("SBJJTUBNIVGRPKZIMXNFUAUXTHMVDIPOCI");

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
    msg.setTimeStamp(0.5159221326380433);
    msg.setSource(58333U);
    msg.setSourceEntity(159U);
    msg.setDestination(37692U);
    msg.setDestinationEntity(193U);
    msg.name.assign("SBRCJHBFXHMWVFCKCILWOQAYAAVRFGDLPAHGKSQYAZ");
    msg.value = 130U;

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
    msg.setTimeStamp(0.414981824316757);
    msg.setSource(53129U);
    msg.setSourceEntity(9U);
    msg.setDestination(46930U);
    msg.setDestinationEntity(207U);
    msg.name.assign("ZWLVUQFKINCCKJSJMWEJDQYLRURRKGCUKFHKVVFHVIUZLLGSXTVNNYAORUQTADXDWCSCZIZKOZLKSQBVXBNYXZUGDFYNWGVQEPOQGGLRJABSTYMHPSTNXTBXAOJHDLTSLMKIUTLPCROYNIHMEIWXEUAIVFQEEQOMQHPIGYCNWSFLIZFBEPOEHBYDDAHNXRHCNPZ");
    msg.value = 62U;

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
    msg.setTimeStamp(0.4278096189820134);
    msg.setSource(18476U);
    msg.setSourceEntity(51U);
    msg.setDestination(9380U);
    msg.setDestinationEntity(75U);
    msg.name.assign("AWSBTBTFHLGSL");
    msg.value = 127U;

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
    msg.setTimeStamp(0.7880970775849535);
    msg.setSource(14518U);
    msg.setSourceEntity(17U);
    msg.setDestination(37889U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.3607706208858664;
    msg.lon = 0.9368185107696242;
    msg.height = 0.7570355969737345;
    msg.x = 0.9645403428508116;
    msg.y = 0.44935378898000344;
    msg.z = 0.6211599296848759;
    msg.phi = 0.9499781032402287;
    msg.theta = 0.7306084482138064;
    msg.psi = 0.13128209639738797;
    msg.u = 0.6176148086369372;
    msg.v = 0.29793156779556595;
    msg.w = 0.8206175762659644;
    msg.vx = 0.6632339831967936;
    msg.vy = 0.43510120451100487;
    msg.vz = 0.6326322745325275;
    msg.p = 0.8271542471886102;
    msg.q = 0.27421944249067265;
    msg.r = 0.7614852023316353;
    msg.depth = 0.06373684745884933;
    msg.alt = 0.8335330241674654;

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
    msg.setTimeStamp(0.32647595082182557);
    msg.setSource(33702U);
    msg.setSourceEntity(243U);
    msg.setDestination(44428U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.027149732984773522;
    msg.lon = 0.9995504749962125;
    msg.height = 0.557726534301646;
    msg.x = 0.5825521760098524;
    msg.y = 0.011703998938320304;
    msg.z = 0.37186486855067236;
    msg.phi = 0.43972194151054345;
    msg.theta = 0.7133013752743649;
    msg.psi = 0.7192354374332292;
    msg.u = 0.23740720205810706;
    msg.v = 0.7546189152044787;
    msg.w = 0.8249370503156676;
    msg.vx = 0.42109362135280426;
    msg.vy = 0.7823238741926415;
    msg.vz = 0.4536771836148322;
    msg.p = 0.4704749883307723;
    msg.q = 0.5857660849537472;
    msg.r = 0.816854445434912;
    msg.depth = 0.5854505801541636;
    msg.alt = 0.32578851385127516;

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
    msg.setTimeStamp(0.0159366432960123);
    msg.setSource(62361U);
    msg.setSourceEntity(116U);
    msg.setDestination(33819U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.7964741998252095;
    msg.lon = 0.7953305366873046;
    msg.height = 0.4162698207590887;
    msg.x = 0.6958074124925606;
    msg.y = 0.8822554604636533;
    msg.z = 0.7089907171337676;
    msg.phi = 0.7278561791855265;
    msg.theta = 0.3662044904701224;
    msg.psi = 0.05670740493466342;
    msg.u = 0.7632371110068077;
    msg.v = 0.53446463747947;
    msg.w = 0.48503937488639604;
    msg.vx = 0.3942174912431329;
    msg.vy = 0.07890365417770961;
    msg.vz = 0.38285183381041;
    msg.p = 0.16346447593407099;
    msg.q = 0.5163687869868976;
    msg.r = 0.07482403448085595;
    msg.depth = 0.9460819120046092;
    msg.alt = 0.8703648207260466;

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
    msg.setTimeStamp(0.660178024674004);
    msg.setSource(23749U);
    msg.setSourceEntity(2U);
    msg.setDestination(63608U);
    msg.setDestinationEntity(29U);
    msg.x = 0.22219862108148092;
    msg.y = 0.04075153240233442;
    msg.z = 0.5738409200372314;

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
    msg.setTimeStamp(0.873539427588642);
    msg.setSource(16806U);
    msg.setSourceEntity(51U);
    msg.setDestination(28137U);
    msg.setDestinationEntity(41U);
    msg.x = 0.9550746637270432;
    msg.y = 0.9064875459602315;
    msg.z = 0.8005587082791581;

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
    msg.setTimeStamp(0.7701345299503222);
    msg.setSource(36734U);
    msg.setSourceEntity(150U);
    msg.setDestination(57423U);
    msg.setDestinationEntity(157U);
    msg.x = 0.578547733127292;
    msg.y = 0.17550146224677188;
    msg.z = 0.6291866962500959;

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
    msg.setTimeStamp(0.20822255690391156);
    msg.setSource(42357U);
    msg.setSourceEntity(44U);
    msg.setDestination(6687U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6180825134584067;

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
    msg.setTimeStamp(0.7699946001059642);
    msg.setSource(45497U);
    msg.setSourceEntity(208U);
    msg.setDestination(25116U);
    msg.setDestinationEntity(221U);
    msg.value = 0.2474591971135972;

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
    msg.setTimeStamp(0.2046587383801992);
    msg.setSource(27444U);
    msg.setSourceEntity(197U);
    msg.setDestination(22532U);
    msg.setDestinationEntity(27U);
    msg.value = 0.0664708453129712;

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
    msg.setTimeStamp(0.24242527005236292);
    msg.setSource(65116U);
    msg.setSourceEntity(216U);
    msg.setDestination(60972U);
    msg.setDestinationEntity(99U);
    msg.value = 0.23595705285007096;

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
    msg.setTimeStamp(0.3021918679164044);
    msg.setSource(1794U);
    msg.setSourceEntity(46U);
    msg.setDestination(45623U);
    msg.setDestinationEntity(48U);
    msg.value = 0.19245418807967962;

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
    msg.setTimeStamp(0.9089046662872292);
    msg.setSource(15597U);
    msg.setSourceEntity(86U);
    msg.setDestination(57944U);
    msg.setDestinationEntity(88U);
    msg.value = 0.08716151467410627;

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
    msg.setTimeStamp(0.8834789977985453);
    msg.setSource(58913U);
    msg.setSourceEntity(58U);
    msg.setDestination(6199U);
    msg.setDestinationEntity(156U);
    msg.x = 0.5310911821000164;
    msg.y = 0.9614845413655808;
    msg.z = 0.263268598028054;
    msg.phi = 0.49032387050086457;
    msg.theta = 0.7167545812644981;
    msg.psi = 0.0005164492366839246;
    msg.p = 0.5044960365477651;
    msg.q = 0.18238834818851646;
    msg.r = 0.5965547160446512;
    msg.u = 0.6364925105102025;
    msg.v = 0.11963908411125168;
    msg.w = 0.5674825259397775;
    msg.bias_psi = 0.40724129981494517;
    msg.bias_r = 0.2533833746627039;

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
    msg.setTimeStamp(0.3767721593201513);
    msg.setSource(38989U);
    msg.setSourceEntity(26U);
    msg.setDestination(35899U);
    msg.setDestinationEntity(86U);
    msg.x = 0.37077050388839705;
    msg.y = 0.14993790658682893;
    msg.z = 0.6855941826524715;
    msg.phi = 0.13366243620076168;
    msg.theta = 0.7926961366303714;
    msg.psi = 0.09698305595316814;
    msg.p = 0.4831426157627049;
    msg.q = 0.9217463890569185;
    msg.r = 0.15552595767409017;
    msg.u = 0.8231049287036131;
    msg.v = 0.7179036304839251;
    msg.w = 0.7524837762791815;
    msg.bias_psi = 0.08806734668586513;
    msg.bias_r = 0.5870603270567035;

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
    msg.setTimeStamp(0.3303541807390459);
    msg.setSource(1764U);
    msg.setSourceEntity(154U);
    msg.setDestination(31994U);
    msg.setDestinationEntity(132U);
    msg.x = 0.37308638072565803;
    msg.y = 0.3469617955624076;
    msg.z = 0.8381143114715303;
    msg.phi = 0.3757064541765832;
    msg.theta = 0.7267374995397352;
    msg.psi = 0.44721323877290775;
    msg.p = 0.7894572493648506;
    msg.q = 0.9449419101394136;
    msg.r = 0.21820379300765058;
    msg.u = 0.580200433974037;
    msg.v = 0.95086892748958;
    msg.w = 0.6213104814585733;
    msg.bias_psi = 0.6150339631721551;
    msg.bias_r = 0.12109839850158877;

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
    msg.setTimeStamp(0.5174481374636342);
    msg.setSource(30843U);
    msg.setSourceEntity(192U);
    msg.setDestination(65108U);
    msg.setDestinationEntity(40U);
    msg.bias_psi = 0.2090263192435613;
    msg.bias_r = 0.04657091525521073;
    msg.cog = 0.5772712622053863;
    msg.cyaw = 0.8318143171189051;
    msg.lbl_rej_level = 0.9140231747615762;
    msg.gps_rej_level = 0.5820680191038746;
    msg.custom_x = 0.7707331155336392;
    msg.custom_y = 0.575797077505136;
    msg.custom_z = 0.6135377934153738;

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
    msg.setTimeStamp(0.28510301225787915);
    msg.setSource(22373U);
    msg.setSourceEntity(226U);
    msg.setDestination(27630U);
    msg.setDestinationEntity(34U);
    msg.bias_psi = 0.26017757715217416;
    msg.bias_r = 0.25716896415873136;
    msg.cog = 0.9517002273526096;
    msg.cyaw = 0.889507278458296;
    msg.lbl_rej_level = 0.22035108694529948;
    msg.gps_rej_level = 0.8694838450994449;
    msg.custom_x = 0.7835382014832634;
    msg.custom_y = 0.5624215331046927;
    msg.custom_z = 0.8330603610976678;

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
    msg.setTimeStamp(0.024496905265795732);
    msg.setSource(22888U);
    msg.setSourceEntity(214U);
    msg.setDestination(16012U);
    msg.setDestinationEntity(151U);
    msg.bias_psi = 0.20660103627596427;
    msg.bias_r = 0.04734690870593361;
    msg.cog = 0.4205038023763129;
    msg.cyaw = 0.9713767852720361;
    msg.lbl_rej_level = 0.9056915165941327;
    msg.gps_rej_level = 0.641944203411627;
    msg.custom_x = 0.2757422167547451;
    msg.custom_y = 0.06320216957277558;
    msg.custom_z = 0.604175414794649;

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
    msg.setTimeStamp(0.45376794255520514);
    msg.setSource(42009U);
    msg.setSourceEntity(8U);
    msg.setDestination(24812U);
    msg.setDestinationEntity(140U);
    msg.utc_time = 0.40904714126394004;
    msg.reason = 197U;

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
    msg.setTimeStamp(0.5053859649370311);
    msg.setSource(20190U);
    msg.setSourceEntity(224U);
    msg.setDestination(5731U);
    msg.setDestinationEntity(105U);
    msg.utc_time = 0.12698572840165223;
    msg.reason = 77U;

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
    msg.setTimeStamp(0.8644810472959354);
    msg.setSource(5886U);
    msg.setSourceEntity(16U);
    msg.setDestination(11459U);
    msg.setDestinationEntity(187U);
    msg.utc_time = 0.6583164066258913;
    msg.reason = 75U;

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
    msg.setTimeStamp(0.7456979353233643);
    msg.setSource(42251U);
    msg.setSourceEntity(242U);
    msg.setDestination(312U);
    msg.setDestinationEntity(190U);
    msg.id = 234U;
    msg.range = 0.10101614535200187;
    msg.acceptance = 140U;

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
    msg.setTimeStamp(0.7568419173627086);
    msg.setSource(21762U);
    msg.setSourceEntity(30U);
    msg.setDestination(41636U);
    msg.setDestinationEntity(176U);
    msg.id = 18U;
    msg.range = 0.7405950496886962;
    msg.acceptance = 84U;

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
    msg.setTimeStamp(0.8632867412403554);
    msg.setSource(43203U);
    msg.setSourceEntity(53U);
    msg.setDestination(46715U);
    msg.setDestinationEntity(95U);
    msg.id = 198U;
    msg.range = 0.2925017560789762;
    msg.acceptance = 137U;

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
    msg.setTimeStamp(0.5291947321678709);
    msg.setSource(13254U);
    msg.setSourceEntity(199U);
    msg.setDestination(8146U);
    msg.setDestinationEntity(219U);
    msg.type = 203U;
    msg.reason = 233U;
    msg.value = 0.734360529481213;
    msg.timestep = 0.12111000621918333;

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
    msg.setTimeStamp(0.8339569544828076);
    msg.setSource(60604U);
    msg.setSourceEntity(226U);
    msg.setDestination(55534U);
    msg.setDestinationEntity(194U);
    msg.type = 81U;
    msg.reason = 39U;
    msg.value = 0.6717921850771715;
    msg.timestep = 0.9288365034858487;

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
    msg.setTimeStamp(0.10173130567026634);
    msg.setSource(12312U);
    msg.setSourceEntity(254U);
    msg.setDestination(24132U);
    msg.setDestinationEntity(99U);
    msg.type = 54U;
    msg.reason = 248U;
    msg.value = 0.1038087111341588;
    msg.timestep = 0.41751296289897133;

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
    msg.setTimeStamp(0.29711270926943856);
    msg.setSource(40594U);
    msg.setSourceEntity(88U);
    msg.setDestination(60139U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.6652050271474916);
    msg.setSource(56166U);
    msg.setSourceEntity(172U);
    msg.setDestination(40963U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.9593624074897518);
    msg.setSource(57991U);
    msg.setSourceEntity(190U);
    msg.setDestination(63965U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.5952569121511447);
    msg.setSource(55796U);
    msg.setSourceEntity(56U);
    msg.setDestination(43464U);
    msg.setDestinationEntity(26U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("USQQEQMKVDBJODSQOAWPKICHZNRLOPXAAVWGUVDZYYYTZAZHKGZGQCKNNKYTMSYTFWXXVCIHDCTLZTZNICUIXBFOGZCQXBPSJUALIPEAHWCHUKFJJHDISJYXGLJANLYCDINFSFHPVPZZULDUW");
    tmp_msg_0.lat = 0.9268319539171436;
    tmp_msg_0.lon = 0.25935733085564694;
    tmp_msg_0.depth = 0.40853502315266754;
    tmp_msg_0.query_channel = 97U;
    tmp_msg_0.reply_channel = 172U;
    tmp_msg_0.transponder_delay = 196U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.35489847674060726;
    msg.y = 0.9872819246226172;
    msg.var_x = 0.16122088510620158;
    msg.var_y = 0.2601354054618321;
    msg.distance = 0.2307750456837715;

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
    msg.setTimeStamp(0.5686573084341467);
    msg.setSource(17944U);
    msg.setSourceEntity(235U);
    msg.setDestination(8659U);
    msg.setDestinationEntity(6U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MMJVGIILMAKDPH");
    tmp_msg_0.lat = 0.9629825689891044;
    tmp_msg_0.lon = 0.6968170491770945;
    tmp_msg_0.depth = 0.3946794636266625;
    tmp_msg_0.query_channel = 17U;
    tmp_msg_0.reply_channel = 39U;
    tmp_msg_0.transponder_delay = 54U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.720529994084559;
    msg.y = 0.007426011957914036;
    msg.var_x = 0.2552139079066378;
    msg.var_y = 0.38818090896765567;
    msg.distance = 0.3413666986888969;

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
    msg.setTimeStamp(0.4462672636094692);
    msg.setSource(45793U);
    msg.setSourceEntity(161U);
    msg.setDestination(31086U);
    msg.setDestinationEntity(204U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TJHCNEFKXLPRYOSIBOPZIMULVDDAPCOPPRESEGKMEXQLCSVCJGDNMCLMLQCXWEYQWJMSSQTQARIAWQRTBVYBJCWOWNFCXIMZRHZHDUPDUIWDZVKBXXVVMERNAPANDITRYSOPKYJNFBMGJEVPXHSOFHNEKDSJFAYAOGEGRJQNWMWZAIJLBLBRIBMTHGICNYBSHWLTLSTKUXQXREYWAUOJFGFTKG");
    tmp_msg_0.lat = 0.7899399332161817;
    tmp_msg_0.lon = 0.3546667253191039;
    tmp_msg_0.depth = 0.9293952012474085;
    tmp_msg_0.query_channel = 62U;
    tmp_msg_0.reply_channel = 94U;
    tmp_msg_0.transponder_delay = 173U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.12937024679272013;
    msg.y = 0.021723795471576768;
    msg.var_x = 0.018013199313793526;
    msg.var_y = 0.002658607931928625;
    msg.distance = 0.1814871751255892;

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
    msg.setTimeStamp(0.18847282446841318);
    msg.setSource(32145U);
    msg.setSourceEntity(77U);
    msg.setDestination(42466U);
    msg.setDestinationEntity(26U);
    msg.state = 59U;

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
    msg.setTimeStamp(0.8605906594134451);
    msg.setSource(56161U);
    msg.setSourceEntity(227U);
    msg.setDestination(6357U);
    msg.setDestinationEntity(38U);
    msg.state = 186U;

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
    msg.setTimeStamp(0.24431419699895285);
    msg.setSource(56888U);
    msg.setSourceEntity(176U);
    msg.setDestination(21024U);
    msg.setDestinationEntity(80U);
    msg.state = 116U;

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
    msg.setTimeStamp(0.3201265177430922);
    msg.setSource(64890U);
    msg.setSourceEntity(23U);
    msg.setDestination(6903U);
    msg.setDestinationEntity(19U);
    msg.x = 0.906468504278458;
    msg.y = 0.8185252381397862;
    msg.z = 0.27160223139512985;

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
    msg.setTimeStamp(0.7522791238947293);
    msg.setSource(15910U);
    msg.setSourceEntity(23U);
    msg.setDestination(60433U);
    msg.setDestinationEntity(192U);
    msg.x = 0.5143258589859873;
    msg.y = 0.6055954938770945;
    msg.z = 0.7306924526653265;

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
    msg.setTimeStamp(0.6608706278035856);
    msg.setSource(10565U);
    msg.setSourceEntity(237U);
    msg.setDestination(29193U);
    msg.setDestinationEntity(37U);
    msg.x = 0.023651537488772134;
    msg.y = 0.46595535385861675;
    msg.z = 0.7831765327556299;

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
    msg.setTimeStamp(0.35798847284558655);
    msg.setSource(1649U);
    msg.setSourceEntity(219U);
    msg.setDestination(24874U);
    msg.setDestinationEntity(50U);
    msg.value = 0.8873879562031239;

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
    msg.setTimeStamp(0.8475261681885502);
    msg.setSource(7900U);
    msg.setSourceEntity(94U);
    msg.setDestination(42535U);
    msg.setDestinationEntity(28U);
    msg.value = 0.9396787297100415;

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
    msg.setTimeStamp(0.5898938728537331);
    msg.setSource(1770U);
    msg.setSourceEntity(172U);
    msg.setDestination(57788U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9035240153934246;

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
    msg.setTimeStamp(0.5235769177856546);
    msg.setSource(19172U);
    msg.setSourceEntity(146U);
    msg.setDestination(24354U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8081644062790313;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.9419386077080677);
    msg.setSource(3610U);
    msg.setSourceEntity(135U);
    msg.setDestination(18031U);
    msg.setDestinationEntity(122U);
    msg.value = 0.38292774169992416;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.23944025244608746);
    msg.setSource(33235U);
    msg.setSourceEntity(228U);
    msg.setDestination(9003U);
    msg.setDestinationEntity(133U);
    msg.value = 0.6642273023599552;
    msg.z_units = 244U;

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
    msg.setTimeStamp(0.7413018131578102);
    msg.setSource(15631U);
    msg.setSourceEntity(249U);
    msg.setDestination(63533U);
    msg.setDestinationEntity(80U);
    msg.value = 0.15353584624065786;
    msg.speed_units = 184U;

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
    msg.setTimeStamp(0.47926962728775924);
    msg.setSource(40389U);
    msg.setSourceEntity(175U);
    msg.setDestination(54554U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8135551668376688;
    msg.speed_units = 248U;

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
    msg.setTimeStamp(0.2120064616895041);
    msg.setSource(39680U);
    msg.setSourceEntity(28U);
    msg.setDestination(10135U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7157387051374376;
    msg.speed_units = 192U;

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
    msg.setTimeStamp(0.24835150014198693);
    msg.setSource(55387U);
    msg.setSourceEntity(127U);
    msg.setDestination(59082U);
    msg.setDestinationEntity(2U);
    msg.value = 0.27877704358740296;

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
    msg.setTimeStamp(0.01771504090020537);
    msg.setSource(28263U);
    msg.setSourceEntity(75U);
    msg.setDestination(32761U);
    msg.setDestinationEntity(89U);
    msg.value = 0.7445922339497574;

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
    msg.setTimeStamp(0.05979103064851243);
    msg.setSource(18359U);
    msg.setSourceEntity(138U);
    msg.setDestination(22405U);
    msg.setDestinationEntity(233U);
    msg.value = 0.29729956863171225;

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
    msg.setTimeStamp(0.8174529030840957);
    msg.setSource(53979U);
    msg.setSourceEntity(233U);
    msg.setDestination(23051U);
    msg.setDestinationEntity(176U);
    msg.value = 0.48058595535736726;

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
    msg.setTimeStamp(0.11255788892423702);
    msg.setSource(23293U);
    msg.setSourceEntity(43U);
    msg.setDestination(59442U);
    msg.setDestinationEntity(73U);
    msg.value = 0.801815601500452;

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
    msg.setTimeStamp(0.883383066045018);
    msg.setSource(4234U);
    msg.setSourceEntity(179U);
    msg.setDestination(1832U);
    msg.setDestinationEntity(34U);
    msg.value = 0.2107344539303394;

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
    msg.setTimeStamp(0.4915255628750279);
    msg.setSource(48568U);
    msg.setSourceEntity(96U);
    msg.setDestination(5283U);
    msg.setDestinationEntity(126U);
    msg.value = 0.14536543714756744;

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
    msg.setTimeStamp(0.11316944013231134);
    msg.setSource(17443U);
    msg.setSourceEntity(190U);
    msg.setDestination(3077U);
    msg.setDestinationEntity(98U);
    msg.value = 0.2156403314221791;

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
    msg.setTimeStamp(0.8668873891231484);
    msg.setSource(28351U);
    msg.setSourceEntity(84U);
    msg.setDestination(36199U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5585077246782355;

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
    msg.setTimeStamp(0.21745492586757442);
    msg.setSource(50408U);
    msg.setSourceEntity(75U);
    msg.setDestination(12031U);
    msg.setDestinationEntity(61U);
    msg.start_lat = 0.15969939498617025;
    msg.start_lon = 0.2922158433795149;
    msg.start_z = 0.08896863004397848;
    msg.start_z_units = 117U;
    msg.end_lat = 0.09248204106751068;
    msg.end_lon = 0.4415840866092038;
    msg.end_z = 0.24732330662328317;
    msg.end_z_units = 103U;
    msg.speed = 0.16996003044536623;
    msg.speed_units = 105U;
    msg.lradius = 0.8357229048400171;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.922398379667487);
    msg.setSource(58433U);
    msg.setSourceEntity(53U);
    msg.setDestination(45309U);
    msg.setDestinationEntity(128U);
    msg.start_lat = 0.15570043862142002;
    msg.start_lon = 0.8959117630774638;
    msg.start_z = 0.635174047249799;
    msg.start_z_units = 183U;
    msg.end_lat = 0.7430434797038034;
    msg.end_lon = 0.8253561223629815;
    msg.end_z = 0.5867239066988779;
    msg.end_z_units = 160U;
    msg.speed = 0.254165245313148;
    msg.speed_units = 186U;
    msg.lradius = 0.7705287968341828;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.5672703887916967);
    msg.setSource(49208U);
    msg.setSourceEntity(189U);
    msg.setDestination(20100U);
    msg.setDestinationEntity(19U);
    msg.start_lat = 0.7387933576533673;
    msg.start_lon = 0.6893126788153351;
    msg.start_z = 0.7058034085811913;
    msg.start_z_units = 83U;
    msg.end_lat = 0.7424465277816508;
    msg.end_lon = 0.9303307794090048;
    msg.end_z = 0.3146131447477669;
    msg.end_z_units = 172U;
    msg.speed = 0.8901215595294997;
    msg.speed_units = 55U;
    msg.lradius = 0.2876095046525653;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.11072372972265732);
    msg.setSource(16564U);
    msg.setSourceEntity(25U);
    msg.setDestination(26517U);
    msg.setDestinationEntity(17U);
    msg.x = 0.23326669151977963;
    msg.y = 0.720442248547009;
    msg.z = 0.9196205633443885;
    msg.k = 0.025245370906841424;
    msg.m = 0.11703494477770848;
    msg.n = 0.7734247839670574;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.8763617357466298);
    msg.setSource(52126U);
    msg.setSourceEntity(205U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(30U);
    msg.x = 0.4045910834559586;
    msg.y = 0.5902109096812759;
    msg.z = 0.9224230585990887;
    msg.k = 0.7279682275332302;
    msg.m = 0.5148252300679922;
    msg.n = 0.456548585714991;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.6009997642982787);
    msg.setSource(64285U);
    msg.setSourceEntity(80U);
    msg.setDestination(27885U);
    msg.setDestinationEntity(131U);
    msg.x = 0.32829461407993166;
    msg.y = 0.8505879577175295;
    msg.z = 0.20076914121553147;
    msg.k = 0.07915083915222265;
    msg.m = 0.7240145760545559;
    msg.n = 0.2609362852891538;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.028414667299862528);
    msg.setSource(60932U);
    msg.setSourceEntity(52U);
    msg.setDestination(58229U);
    msg.setDestinationEntity(55U);
    msg.value = 0.7248364118678009;

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
    msg.setTimeStamp(0.43026833815044874);
    msg.setSource(24747U);
    msg.setSourceEntity(37U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(184U);
    msg.value = 0.5437005233001995;

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
    msg.setTimeStamp(0.2508598643584785);
    msg.setSource(57389U);
    msg.setSourceEntity(53U);
    msg.setDestination(50555U);
    msg.setDestinationEntity(126U);
    msg.value = 0.8330352335391866;

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
    msg.setTimeStamp(0.3826480760247837);
    msg.setSource(7653U);
    msg.setSourceEntity(212U);
    msg.setDestination(42254U);
    msg.setDestinationEntity(196U);
    msg.u = 0.0381701403035033;
    msg.v = 0.7484093667398083;
    msg.w = 0.4601295386685529;
    msg.p = 0.6483200687841916;
    msg.q = 0.9455820931445702;
    msg.r = 0.7401389851136272;
    msg.flags = 35U;

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
    msg.setTimeStamp(0.9541014825968799);
    msg.setSource(6807U);
    msg.setSourceEntity(34U);
    msg.setDestination(58033U);
    msg.setDestinationEntity(46U);
    msg.u = 0.6482366592470596;
    msg.v = 0.1435124521357043;
    msg.w = 0.731899324362662;
    msg.p = 0.12363321301016372;
    msg.q = 0.9500641695010468;
    msg.r = 0.1461974879552702;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.03334437564271908);
    msg.setSource(16256U);
    msg.setSourceEntity(166U);
    msg.setDestination(55607U);
    msg.setDestinationEntity(169U);
    msg.u = 0.4311744007360857;
    msg.v = 0.35444040239279284;
    msg.w = 0.9363437606700005;
    msg.p = 0.13793535526727374;
    msg.q = 0.19955342860478786;
    msg.r = 0.40925618261228014;
    msg.flags = 139U;

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
    msg.setTimeStamp(0.15929841156207836);
    msg.setSource(35245U);
    msg.setSourceEntity(128U);
    msg.setDestination(48641U);
    msg.setDestinationEntity(128U);
    msg.start_lat = 0.3913888191072664;
    msg.start_lon = 0.8056646432230036;
    msg.start_z = 0.46590804384604345;
    msg.start_z_units = 104U;
    msg.end_lat = 0.5736900215086971;
    msg.end_lon = 0.15391324484596358;
    msg.end_z = 0.24211789662794325;
    msg.end_z_units = 59U;
    msg.lradius = 0.789130390656128;
    msg.flags = 187U;
    msg.x = 0.055477140400877145;
    msg.y = 0.7887679680106686;
    msg.z = 0.6436188534938647;
    msg.vx = 0.6476175384665734;
    msg.vy = 0.09773194291885978;
    msg.vz = 0.4910432025950029;
    msg.course_error = 0.8366153863904181;
    msg.eta = 28388U;

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
    msg.setTimeStamp(0.5932246641665343);
    msg.setSource(64678U);
    msg.setSourceEntity(86U);
    msg.setDestination(51220U);
    msg.setDestinationEntity(222U);
    msg.start_lat = 0.4811234297877336;
    msg.start_lon = 0.4616530438661012;
    msg.start_z = 0.8312395510289913;
    msg.start_z_units = 2U;
    msg.end_lat = 0.1938003024995123;
    msg.end_lon = 0.5928205041162733;
    msg.end_z = 0.8202648460920914;
    msg.end_z_units = 64U;
    msg.lradius = 0.8333942928254279;
    msg.flags = 49U;
    msg.x = 0.6334496114513986;
    msg.y = 0.7533814180774259;
    msg.z = 0.6445388976817176;
    msg.vx = 0.9258298076154325;
    msg.vy = 0.6098035234845367;
    msg.vz = 0.6683345366015043;
    msg.course_error = 0.7265903449884852;
    msg.eta = 61028U;

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
    msg.setTimeStamp(0.27747492397416906);
    msg.setSource(50850U);
    msg.setSourceEntity(61U);
    msg.setDestination(55585U);
    msg.setDestinationEntity(47U);
    msg.start_lat = 0.7722002234823495;
    msg.start_lon = 0.8955574852583076;
    msg.start_z = 0.8587522191232475;
    msg.start_z_units = 174U;
    msg.end_lat = 0.4570144811222332;
    msg.end_lon = 0.8862524877411279;
    msg.end_z = 0.010825304058929341;
    msg.end_z_units = 53U;
    msg.lradius = 0.32317187957186244;
    msg.flags = 78U;
    msg.x = 0.9932562024162512;
    msg.y = 0.5500111793814559;
    msg.z = 0.8920437317419575;
    msg.vx = 0.15732251935508912;
    msg.vy = 0.7246963030193867;
    msg.vz = 0.8150956064688019;
    msg.course_error = 0.11947311238836222;
    msg.eta = 58747U;

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
    msg.setTimeStamp(0.20472271744179837);
    msg.setSource(29056U);
    msg.setSourceEntity(227U);
    msg.setDestination(5060U);
    msg.setDestinationEntity(175U);
    msg.k = 0.8124478632306751;
    msg.m = 0.8589633182290763;
    msg.n = 0.9127465464233553;

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
    msg.setTimeStamp(0.27382040740255886);
    msg.setSource(15578U);
    msg.setSourceEntity(87U);
    msg.setDestination(21891U);
    msg.setDestinationEntity(179U);
    msg.k = 0.9569100435720884;
    msg.m = 0.1673273846756097;
    msg.n = 0.9237552370660016;

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
    msg.setTimeStamp(0.8870015891491579);
    msg.setSource(55508U);
    msg.setSourceEntity(153U);
    msg.setDestination(54247U);
    msg.setDestinationEntity(244U);
    msg.k = 0.09062582666842933;
    msg.m = 0.8800284917911716;
    msg.n = 0.01665811932513306;

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
    msg.setTimeStamp(0.9685600894330458);
    msg.setSource(61744U);
    msg.setSourceEntity(75U);
    msg.setDestination(33774U);
    msg.setDestinationEntity(58U);
    msg.p = 0.2437797837086274;
    msg.i = 0.6617616929197064;
    msg.d = 0.3462948640564876;
    msg.a = 0.942904176856565;

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
    msg.setTimeStamp(0.952056002159755);
    msg.setSource(30304U);
    msg.setSourceEntity(42U);
    msg.setDestination(37188U);
    msg.setDestinationEntity(67U);
    msg.p = 0.19439974567103258;
    msg.i = 0.8201653745881696;
    msg.d = 0.5161854147676144;
    msg.a = 0.3895090827601756;

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
    msg.setTimeStamp(0.9138178866803408);
    msg.setSource(10450U);
    msg.setSourceEntity(95U);
    msg.setDestination(28300U);
    msg.setDestinationEntity(164U);
    msg.p = 0.9690286870012281;
    msg.i = 0.24633113618442992;
    msg.d = 0.5317203450126187;
    msg.a = 0.5691478838469524;

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
    msg.setTimeStamp(0.1517978158695642);
    msg.setSource(58790U);
    msg.setSourceEntity(128U);
    msg.setDestination(22466U);
    msg.setDestinationEntity(84U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.3466319604756728);
    msg.setSource(42126U);
    msg.setSourceEntity(171U);
    msg.setDestination(32960U);
    msg.setDestinationEntity(200U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.31652091356387246);
    msg.setSource(29709U);
    msg.setSourceEntity(64U);
    msg.setDestination(58895U);
    msg.setDestinationEntity(106U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.6323322978427821);
    msg.setSource(38596U);
    msg.setSourceEntity(217U);
    msg.setDestination(50812U);
    msg.setDestinationEntity(188U);
    msg.timeout = 62473U;
    msg.lat = 0.8776299910034182;
    msg.lon = 0.6735812134827259;
    msg.z = 0.3441155132794206;
    msg.z_units = 206U;
    msg.speed = 0.232170806224952;
    msg.speed_units = 225U;
    msg.roll = 0.6110104112806639;
    msg.pitch = 0.5030823829938246;
    msg.yaw = 0.24281320735530632;
    msg.custom.assign("SPJNDULXRMCDDXQHGTZREZUKYCQSXWNKSOPOAEMUKWORQKBUBFZXIVAGHBWGQCHYDKECYEZZJQLAHDOYWQVWEEBUBNFLEEFVALZIXHKMYWXKVYTJACCJMDPPJSLJVKDVSHNGEZFGVVUPWMETLUIPMXFRAORFRGQKHTTSCMUHBYFTQG");

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
    msg.setTimeStamp(0.09685389539362654);
    msg.setSource(38422U);
    msg.setSourceEntity(34U);
    msg.setDestination(40117U);
    msg.setDestinationEntity(156U);
    msg.timeout = 47868U;
    msg.lat = 0.965324297010986;
    msg.lon = 0.06555320736022874;
    msg.z = 0.6756909957527163;
    msg.z_units = 242U;
    msg.speed = 0.641424470253576;
    msg.speed_units = 140U;
    msg.roll = 0.7277209610790307;
    msg.pitch = 0.12216799367185593;
    msg.yaw = 0.8699476562101119;
    msg.custom.assign("DHRLVXAIBQUCVVMGPKMAXOGYSHFIEUSZOPUHESTVZBRR");

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
    msg.setTimeStamp(0.6051460469324443);
    msg.setSource(53195U);
    msg.setSourceEntity(123U);
    msg.setDestination(26302U);
    msg.setDestinationEntity(204U);
    msg.timeout = 59726U;
    msg.lat = 0.5362885034138749;
    msg.lon = 0.2541763496525047;
    msg.z = 0.24540184303779444;
    msg.z_units = 64U;
    msg.speed = 0.09939341771646548;
    msg.speed_units = 120U;
    msg.roll = 0.2949209820230685;
    msg.pitch = 0.7918019318317285;
    msg.yaw = 0.7039846659216333;
    msg.custom.assign("SWGWEYZUSNRGVZHISRQLJAHLKQKHNBNQKYLAVTOYTIKBGUYEDKIKX");

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
    msg.setTimeStamp(0.5698387099546627);
    msg.setSource(29596U);
    msg.setSourceEntity(92U);
    msg.setDestination(53779U);
    msg.setDestinationEntity(176U);
    msg.timeout = 23120U;
    msg.lat = 0.9422455875725091;
    msg.lon = 0.9568835627727813;
    msg.z = 0.9565021533466408;
    msg.z_units = 55U;
    msg.speed = 0.6565433545765718;
    msg.speed_units = 79U;
    msg.duration = 62531U;
    msg.radius = 0.10668935093224385;
    msg.flags = 219U;
    msg.custom.assign("QAIACRAVNSXSLIFCSZQOPEJTVXOYWQLKUKAPRCEQTPWJFGRVPJYMKOWDQPMBKIMMFYYHUBBQSYQQQRGWATTSTNKUUVYHLZJGBCOZLAVOCBGDXKMWPZREUSLENRHEMETIWNCXVYOXOBUFAUWVUJCNDSXDRVNAGFIMGTGGTXBGUMGLPCRZENFYYBSOTDKHEWEHYVAZJNFLJWTOHDCDOLPJLNXXLZZAHHPMHDBFIIDZQNKKWXZUSFPFC");

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
    msg.setTimeStamp(0.36756714595899154);
    msg.setSource(50917U);
    msg.setSourceEntity(177U);
    msg.setDestination(2714U);
    msg.setDestinationEntity(12U);
    msg.timeout = 12681U;
    msg.lat = 0.6703511304617437;
    msg.lon = 0.6336787354923408;
    msg.z = 0.5435184436826096;
    msg.z_units = 199U;
    msg.speed = 0.5399499695660793;
    msg.speed_units = 173U;
    msg.duration = 41831U;
    msg.radius = 0.2345697865639469;
    msg.flags = 49U;
    msg.custom.assign("KEMYQXBZNWCPDTPMPQYP");

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
    msg.setTimeStamp(0.02800715041977364);
    msg.setSource(46831U);
    msg.setSourceEntity(159U);
    msg.setDestination(18977U);
    msg.setDestinationEntity(95U);
    msg.timeout = 4564U;
    msg.lat = 0.5248522078428821;
    msg.lon = 0.7216320970897994;
    msg.z = 0.399962640934316;
    msg.z_units = 6U;
    msg.speed = 0.8334222627131064;
    msg.speed_units = 32U;
    msg.duration = 54768U;
    msg.radius = 0.3578449720214074;
    msg.flags = 227U;
    msg.custom.assign("HYEZOSMLACBUVYZNQRCZAWXAZVTDCGWUEUTNUTODKKFVJDBVBKMKVCXMSHSTRCFIMKISYLWINNXUBOCLGARROGJMHDBHNTIAPLJYKINZHXRTGRZIHVCTPZOPJQHEDWYWYTKKNGOPIBDDGSHAAGXTOURJTLULVQASVMJOZFBWVEMPEDWDWLRFJARSSZQPBJOSXMHFXUHPGKQNNYRSFFYMBBFMQFJQOQKECIXGUZX");

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
    msg.setTimeStamp(0.10292646194096777);
    msg.setSource(65035U);
    msg.setSourceEntity(216U);
    msg.setDestination(56579U);
    msg.setDestinationEntity(210U);
    msg.custom.assign("KRUYCTUOWABI");

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
    msg.setTimeStamp(0.3730939951149135);
    msg.setSource(52317U);
    msg.setSourceEntity(244U);
    msg.setDestination(53826U);
    msg.setDestinationEntity(85U);
    msg.custom.assign("VAMMSGDFIASPCTJIJIVUVFOWZLXOPHMAAODOSAIBEYMMDZNUAGARTLXAQTRLYXWBSJIQIKZVNYHIGDCLKQQQWRCHOFYZBYCAYSLERUNYBXRKHZCADRNPKLXLFMFBJNVZDCSNCCGBEUELQDMKEGCTGHUEODPSUUODKXNHKPFHCRLEGPXEJKSYSBOBXIKT");

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
    msg.setTimeStamp(0.15013083254662218);
    msg.setSource(17199U);
    msg.setSourceEntity(234U);
    msg.setDestination(26017U);
    msg.setDestinationEntity(189U);
    msg.custom.assign("RZIDXQKOJWUTIYWWFJAJBFADMPKLOIEQEEGGTCVKDKVHFOUHGTPXANEOFHMWVXHCLJEKOCHVRDASSXVVFTXPQFPMZBQNIWWYSPHVYTBZODCLTSYDCZMWOFBOMHBSURREQFCMTZSKNOJZURYECMXNZEKNTVZRDJYNANBGBUGLFQVTOHDQIUBMKRWCZILTRBSJAWLHWZYGVQCMJQKLIAIEYMGPJSNDGXPXBH");

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
    msg.setTimeStamp(0.755549651724745);
    msg.setSource(45077U);
    msg.setSourceEntity(234U);
    msg.setDestination(49472U);
    msg.setDestinationEntity(155U);
    msg.timeout = 2615U;
    msg.lat = 0.10692840499151235;
    msg.lon = 0.5974944235904927;
    msg.z = 0.25349255651159874;
    msg.z_units = 160U;
    msg.duration = 4149U;
    msg.speed = 0.9623989975423459;
    msg.speed_units = 105U;
    msg.type = 57U;
    msg.radius = 0.8447945793302375;
    msg.length = 0.7550728031977161;
    msg.bearing = 0.39518443684455684;
    msg.direction = 66U;
    msg.custom.assign("RDZDRKWZRSUJLFFJHFEISRQNTJPMGWDIEYUCSECVXBBUWPVHYTZEVIJEXOAQVPBHLSVTEKOCOVLUPYATZIVNRLDRKJTJYLROUBCYSAYXWIRRJTBSMMCGFWUGQUJLWHKQKNGBCRXFHXBUQZMEITGHSSPIZZNNHJOXOPDMKDXVIFKFMQWYFHNDBMHZGO");

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
    msg.setTimeStamp(0.4504473755687285);
    msg.setSource(15754U);
    msg.setSourceEntity(78U);
    msg.setDestination(43122U);
    msg.setDestinationEntity(27U);
    msg.timeout = 52103U;
    msg.lat = 0.2040799685196134;
    msg.lon = 0.03160739166949866;
    msg.z = 0.03104979716341949;
    msg.z_units = 194U;
    msg.duration = 43687U;
    msg.speed = 0.016706046714278666;
    msg.speed_units = 60U;
    msg.type = 252U;
    msg.radius = 0.5329126118635563;
    msg.length = 0.35279543130493074;
    msg.bearing = 0.43598403655898765;
    msg.direction = 81U;
    msg.custom.assign("KPSYHBMQMLAWXWELNIMDFSRRIZOALGPYKFXOLBVHWUIRHBGMJDNYBYFIKMUMLAVANZHNGTUXQIEEYMSMVKNEC");

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
    msg.setTimeStamp(0.8518565059005204);
    msg.setSource(7565U);
    msg.setSourceEntity(246U);
    msg.setDestination(2486U);
    msg.setDestinationEntity(40U);
    msg.timeout = 20940U;
    msg.lat = 0.40759340955481504;
    msg.lon = 0.7109881922811091;
    msg.z = 0.6016765818511919;
    msg.z_units = 200U;
    msg.duration = 37845U;
    msg.speed = 0.17355730972761574;
    msg.speed_units = 120U;
    msg.type = 164U;
    msg.radius = 0.17040087477653454;
    msg.length = 0.4709421995020845;
    msg.bearing = 0.9028627877662053;
    msg.direction = 206U;
    msg.custom.assign("SDIPBTFIPHVFWHRGAWEGNQAUXWASUETIAHHJKEAXEFDBDOBORSFZCVIRXXPBXQBXLLNNNLPGTCEDOVMUTYZQRMQPKTNJAYSZPZVHCVSDGOQKKRRBBHBWZVWMDEYJZGLWQLXDYRZGZN");

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
    msg.setTimeStamp(0.7836183182275709);
    msg.setSource(7758U);
    msg.setSourceEntity(209U);
    msg.setDestination(19028U);
    msg.setDestinationEntity(97U);
    msg.duration = 27915U;
    msg.custom.assign("NCYRLJUPOJEVJLQYOWCFZGTSCMGFDFGBRZGGZFTUCBMKSKSNRJJVKPLZACDWVCLEXQXEIYSIMA");

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
    msg.setTimeStamp(0.6803739010045128);
    msg.setSource(59015U);
    msg.setSourceEntity(165U);
    msg.setDestination(18109U);
    msg.setDestinationEntity(217U);
    msg.duration = 17459U;
    msg.custom.assign("MGZMMEFLQKCSLAJPKQGQPMAIOXKHTYARPHSWGIDNZ");

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
    msg.setTimeStamp(0.7157913188996275);
    msg.setSource(16195U);
    msg.setSourceEntity(215U);
    msg.setDestination(22165U);
    msg.setDestinationEntity(113U);
    msg.duration = 49632U;
    msg.custom.assign("OBRYDEPDDKPGXWKEFGDUXRSNEICYPJZSIMGEQHJPTRHHWUEFQEKKQRJYHCHNAJVISBTFNZKCJBLOXSHWMWXFPEZFFMMXOGBULNCZRZXDOAWPDWHVYPQAQTWYVRBAQKOZCVRHRGFKTNUSXDJLAIELYBHFXMWTTDQVVGFNWDCBPKMKUBLGZLVZIHIIVZPQACUOZINLL");

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
    msg.setTimeStamp(0.41234101948633317);
    msg.setSource(47009U);
    msg.setSourceEntity(57U);
    msg.setDestination(53541U);
    msg.setDestinationEntity(226U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6375643683565628;
    msg.control.set(tmp_msg_0);
    msg.duration = 15003U;
    msg.custom.assign("CEJIVWBJWAIEBKNESUULDLUUIJGGMAFMFONMAPJEQLASNLDHEWDVKCZIZHKQCTDIZRXWJVMVTDUGXFDZXORZYIJUFPCCSTLZTDUIHSYLRAHROYZNWBJAKZLGXNINURKLVXFFLPSTABGWOMCXDYRGUYVPKQBUWDNBMEQXFKIAYRRBVVMLBOSHTTECCHNSGJBYWWCFBQSTYGHJEYXHGXHAQENYGPQTKPMOICROOVAKSMOFPNSRTDZJFQKXPWPV");

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
    msg.setTimeStamp(0.26743408540539426);
    msg.setSource(16779U);
    msg.setSourceEntity(59U);
    msg.setDestination(15136U);
    msg.setDestinationEntity(172U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.8227988887067638;
    tmp_msg_0.start_lon = 0.3602539811643416;
    tmp_msg_0.start_z = 0.9045217669954889;
    tmp_msg_0.start_z_units = 191U;
    tmp_msg_0.end_lat = 0.2169563143270844;
    tmp_msg_0.end_lon = 0.3784912748232431;
    tmp_msg_0.end_z = 0.17915295087721306;
    tmp_msg_0.end_z_units = 183U;
    tmp_msg_0.speed = 0.7780862824039617;
    tmp_msg_0.speed_units = 34U;
    tmp_msg_0.lradius = 0.17742494301295486;
    tmp_msg_0.flags = 52U;
    msg.control.set(tmp_msg_0);
    msg.duration = 47611U;
    msg.custom.assign("CRIIEPKSEZHYDKHPRRANGITGCIFTMSRLLCIIAZWVOKGLQXMWECCVHM");

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
    msg.setTimeStamp(0.5939942047295687);
    msg.setSource(62U);
    msg.setSourceEntity(105U);
    msg.setDestination(51609U);
    msg.setDestinationEntity(8U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.33394062208788233;
    tmp_msg_0.speed_units = 175U;
    msg.control.set(tmp_msg_0);
    msg.duration = 31071U;
    msg.custom.assign("FHVBPCIMVXWBZOAKLWHSEMZJJKWGPPH");

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
    msg.setTimeStamp(0.08659879167074536);
    msg.setSource(63339U);
    msg.setSourceEntity(12U);
    msg.setDestination(54469U);
    msg.setDestinationEntity(201U);
    msg.timeout = 59863U;
    msg.lat = 0.5830392028544624;
    msg.lon = 0.07333329258077281;
    msg.z = 0.254050155101443;
    msg.z_units = 228U;
    msg.speed = 0.5159813921207606;
    msg.speed_units = 253U;
    msg.bearing = 0.2841740307729599;
    msg.cross_angle = 0.8721204560774166;
    msg.width = 0.5664123491408696;
    msg.length = 0.5728021301901831;
    msg.hstep = 0.5824361083958121;
    msg.coff = 42U;
    msg.alternation = 176U;
    msg.flags = 41U;
    msg.custom.assign("ETCZPVIMMWCZBFUXBVGGRILQWZKPJKFKLSTPYVOJIFDVFCHDCDEEUZGGWOBCZMEVPGDTOORIKXNFQRNVZQDLCRRSPDZRSBEGUSUMXWEYCABNHRPSAMIPYXMMAKIQOLYLMWTXCHZONU");

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
    msg.setTimeStamp(0.40579467152365556);
    msg.setSource(43447U);
    msg.setSourceEntity(200U);
    msg.setDestination(3289U);
    msg.setDestinationEntity(62U);
    msg.timeout = 44173U;
    msg.lat = 0.13470388542359357;
    msg.lon = 0.1845527645313425;
    msg.z = 0.48248154499019635;
    msg.z_units = 200U;
    msg.speed = 0.031005464462810495;
    msg.speed_units = 90U;
    msg.bearing = 0.15130184971904825;
    msg.cross_angle = 0.48499065082683757;
    msg.width = 0.9730338435787186;
    msg.length = 0.011408708251615551;
    msg.hstep = 0.5490784242275473;
    msg.coff = 65U;
    msg.alternation = 46U;
    msg.flags = 156U;
    msg.custom.assign("XCNWEVDUWMBICBFWYNWMPBJGHMEWOJYMGXCQVWCXFKJPTELVTDOLCQWMPIDEOBUDEZNUAGRXYBRVNQTJSLZOALYTWYKDGPLVKAOHXTPLGPIUPYFXYFQSKELPRDASFJFVHJKSJENECRUZISTDZTZFDRAWHFAQIXNGAVJZFE");

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
    msg.setTimeStamp(0.5735153825399533);
    msg.setSource(54122U);
    msg.setSourceEntity(170U);
    msg.setDestination(20809U);
    msg.setDestinationEntity(242U);
    msg.timeout = 59976U;
    msg.lat = 0.15048143823363902;
    msg.lon = 0.24373531843890017;
    msg.z = 0.059863591652367876;
    msg.z_units = 135U;
    msg.speed = 0.7708541202075231;
    msg.speed_units = 138U;
    msg.bearing = 0.5160229570800847;
    msg.cross_angle = 0.48901998380596545;
    msg.width = 0.268446205535242;
    msg.length = 0.7669565168645227;
    msg.hstep = 0.599640179769622;
    msg.coff = 223U;
    msg.alternation = 197U;
    msg.flags = 209U;
    msg.custom.assign("QQFWKBFPDTXIRFLOREDXKFDHKSSSZSGEEOZDRIWH");

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
    msg.setTimeStamp(0.5512459985474267);
    msg.setSource(40270U);
    msg.setSourceEntity(116U);
    msg.setDestination(54692U);
    msg.setDestinationEntity(208U);
    msg.timeout = 18U;
    msg.lat = 0.25503862975914127;
    msg.lon = 0.6588766436294713;
    msg.z = 0.8418733467527981;
    msg.z_units = 29U;
    msg.speed = 0.6641450114678821;
    msg.speed_units = 254U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.30571104442457264;
    tmp_msg_0.y = 0.02758776341289082;
    tmp_msg_0.z = 0.4631559531796593;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PWFKMNNHXRQSDZKXJUPCXIWQXEZRVAORUHVNPEBSSHKKSLAAKASAYGYHVYSDP");

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
    msg.setTimeStamp(0.9939637266374909);
    msg.setSource(5172U);
    msg.setSourceEntity(226U);
    msg.setDestination(42163U);
    msg.setDestinationEntity(68U);
    msg.timeout = 4098U;
    msg.lat = 0.9392101133085092;
    msg.lon = 0.7222350483395003;
    msg.z = 0.364410685992834;
    msg.z_units = 29U;
    msg.speed = 0.8737003738164676;
    msg.speed_units = 131U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.012685019968653677;
    tmp_msg_0.y = 0.3241056676674754;
    tmp_msg_0.z = 0.9405265293701046;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AANDMYZVKHW");

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
    msg.setTimeStamp(0.3499093330326464);
    msg.setSource(9519U);
    msg.setSourceEntity(93U);
    msg.setDestination(62241U);
    msg.setDestinationEntity(139U);
    msg.timeout = 58657U;
    msg.lat = 0.639527662704817;
    msg.lon = 0.7026726419063496;
    msg.z = 0.8077538187972134;
    msg.z_units = 35U;
    msg.speed = 0.5636588901783582;
    msg.speed_units = 18U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9738991465764752;
    tmp_msg_0.y = 0.14431074564278223;
    tmp_msg_0.z = 0.5083330215432708;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FWSECTIVRMQULMHDMTCGKPEAEFSAPTBBXSIZHNJQZXFOYREKBHVZSVMYUQZXTHUVCHFZEFDIADAKBQDRFKZMPLVNWSOYBBRSODEJSXYGIAOWBWUTMRPJTRCQCAOXXAJ");

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
    msg.setTimeStamp(0.14438575685152522);
    msg.setSource(17897U);
    msg.setSourceEntity(168U);
    msg.setDestination(41667U);
    msg.setDestinationEntity(250U);
    msg.x = 0.5049441765090144;
    msg.y = 0.12301758241257055;
    msg.z = 0.45517937979992307;

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
    msg.setTimeStamp(0.803229255214266);
    msg.setSource(14889U);
    msg.setSourceEntity(161U);
    msg.setDestination(13264U);
    msg.setDestinationEntity(23U);
    msg.x = 0.24699899636745526;
    msg.y = 0.14304610165383813;
    msg.z = 0.918615894195868;

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
    msg.setTimeStamp(0.8245142734775172);
    msg.setSource(25328U);
    msg.setSourceEntity(94U);
    msg.setDestination(16709U);
    msg.setDestinationEntity(166U);
    msg.x = 0.701625347172904;
    msg.y = 0.07214177058156612;
    msg.z = 0.2692537051750521;

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
    msg.setTimeStamp(0.6578449351139245);
    msg.setSource(41552U);
    msg.setSourceEntity(169U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(83U);
    msg.timeout = 15295U;
    msg.lat = 0.05378018885010993;
    msg.lon = 0.006636764616351876;
    msg.z = 0.3766636261562174;
    msg.z_units = 155U;
    msg.amplitude = 0.18488415724069907;
    msg.pitch = 0.6439776959953323;
    msg.speed = 0.0274920382312257;
    msg.speed_units = 6U;
    msg.custom.assign("PZEZVPAIQHNXRDUZLTADDRTDBGXWFKZVCFRQEJMQZUANNVBWIWYAWZTKKPLPKATBFWOCBMCMULFWROWXMMMGDOQXKOLJHXBJTDQXCNKNSMSSX");

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
    msg.setTimeStamp(0.6864874888093346);
    msg.setSource(9184U);
    msg.setSourceEntity(140U);
    msg.setDestination(63036U);
    msg.setDestinationEntity(66U);
    msg.timeout = 30546U;
    msg.lat = 0.49782988245695325;
    msg.lon = 0.872984288889363;
    msg.z = 0.8097096028988531;
    msg.z_units = 12U;
    msg.amplitude = 0.8251963434791859;
    msg.pitch = 0.3729508931621045;
    msg.speed = 0.9172879645384774;
    msg.speed_units = 175U;
    msg.custom.assign("YCZENROXUSXFJPGXXJKWPMCUCHMOLJRYDHEN");

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
    msg.setTimeStamp(0.3786517357686171);
    msg.setSource(23087U);
    msg.setSourceEntity(142U);
    msg.setDestination(25974U);
    msg.setDestinationEntity(159U);
    msg.timeout = 51275U;
    msg.lat = 0.4238492829183922;
    msg.lon = 0.2690298251711033;
    msg.z = 0.7147313527761614;
    msg.z_units = 214U;
    msg.amplitude = 0.4728203096436717;
    msg.pitch = 0.5528030070533623;
    msg.speed = 0.2709535680813714;
    msg.speed_units = 226U;
    msg.custom.assign("MAWJBWLMWUAMMMHCINSKULDOIBNYILCQFINEJRNBXYRQTXVIEDGHHXKHZEXQRUDUJUNIUWTCYOCQHUBKZHGEMLBYANF");

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
    msg.setTimeStamp(0.8853911496664133);
    msg.setSource(13474U);
    msg.setSourceEntity(198U);
    msg.setDestination(65100U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.32137951566255096);
    msg.setSource(45819U);
    msg.setSourceEntity(232U);
    msg.setDestination(14681U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.33630286931536046);
    msg.setSource(57570U);
    msg.setSourceEntity(153U);
    msg.setDestination(55178U);
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
    msg.setTimeStamp(0.9794922958427872);
    msg.setSource(36289U);
    msg.setSourceEntity(87U);
    msg.setDestination(4950U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.5782738602585796;
    msg.lon = 0.41742405083720924;
    msg.z = 0.8621493149411695;
    msg.z_units = 93U;
    msg.radius = 0.8630927557100383;
    msg.duration = 16720U;
    msg.speed = 0.06680934135163219;
    msg.speed_units = 63U;
    msg.custom.assign("XZTFQJVXAZVGNLHFSDEDASBVMVDWGZCQGLIJJPQYTQASGRJOHKJJYZMZ");

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
    msg.setTimeStamp(0.836990497498101);
    msg.setSource(61984U);
    msg.setSourceEntity(15U);
    msg.setDestination(32452U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.5180026707836108;
    msg.lon = 0.5423075428449653;
    msg.z = 0.8905084273336709;
    msg.z_units = 20U;
    msg.radius = 0.5760059129003442;
    msg.duration = 18745U;
    msg.speed = 0.0014344971269633078;
    msg.speed_units = 206U;
    msg.custom.assign("ANNSWZWMPRRIZQGURDSSEOFLYAQVLUPMNAYJKKFGRBIZOCVURANBZCBJTAMMSUVGDGDNMGSACRQYIEMUDKUNHYVQXPBSXTFGIOVORWBARTEXCXSIU");

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
    msg.setTimeStamp(0.5294844318291547);
    msg.setSource(46320U);
    msg.setSourceEntity(6U);
    msg.setDestination(64071U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.27844521037631187;
    msg.lon = 0.8614857918308471;
    msg.z = 0.6283156948742854;
    msg.z_units = 152U;
    msg.radius = 0.6297285297211512;
    msg.duration = 55019U;
    msg.speed = 0.0853525219428578;
    msg.speed_units = 176U;
    msg.custom.assign("BLDMUCWEFTZUWZBFZHZSOZUJXSCAOOUCBTWEBVZLPLMDQLDGXYTZOXDVJISIIIVRGUYWNPGUBTGVITVKXTGVSSKUFCDWBKNNHMSXEMVVHIRKOQEFFQPJJFMOPEXCIJZQOYHSRXHIQLAF");

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
    msg.setTimeStamp(0.6151349435833031);
    msg.setSource(16288U);
    msg.setSourceEntity(176U);
    msg.setDestination(13046U);
    msg.setDestinationEntity(232U);
    msg.timeout = 17133U;
    msg.flags = 104U;
    msg.lat = 0.04271754013230311;
    msg.lon = 0.18340657857754616;
    msg.start_z = 0.7778185187100158;
    msg.start_z_units = 89U;
    msg.end_z = 0.44917532236089586;
    msg.end_z_units = 198U;
    msg.radius = 0.8799161813352236;
    msg.speed = 0.16779126227349073;
    msg.speed_units = 29U;
    msg.custom.assign("FKNYMJQOEWUEISJNGVASAOAZFASCRSBDJQGAYTCNKOQ");

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
    msg.setTimeStamp(0.4646454840149826);
    msg.setSource(12780U);
    msg.setSourceEntity(33U);
    msg.setDestination(44702U);
    msg.setDestinationEntity(191U);
    msg.timeout = 65033U;
    msg.flags = 245U;
    msg.lat = 0.5303772777725041;
    msg.lon = 0.1510441757927925;
    msg.start_z = 0.889399044755932;
    msg.start_z_units = 113U;
    msg.end_z = 0.6447382486459725;
    msg.end_z_units = 62U;
    msg.radius = 0.7780541296602275;
    msg.speed = 0.031663882748803274;
    msg.speed_units = 171U;
    msg.custom.assign("YSNVDPAWNEQJVPASNDURYKBRSTBETYVKXVZXDCDYAZFLZZWUYXMJMLSTJHGZXA");

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
    msg.setTimeStamp(0.7618492630790406);
    msg.setSource(23380U);
    msg.setSourceEntity(32U);
    msg.setDestination(19285U);
    msg.setDestinationEntity(206U);
    msg.timeout = 56780U;
    msg.flags = 136U;
    msg.lat = 0.39533547387992385;
    msg.lon = 0.8112820531155701;
    msg.start_z = 0.9351081913314211;
    msg.start_z_units = 215U;
    msg.end_z = 0.19419996204817136;
    msg.end_z_units = 114U;
    msg.radius = 0.35629998482617065;
    msg.speed = 0.26420671198717716;
    msg.speed_units = 113U;
    msg.custom.assign("NEYDAZILAISPNKKKHBJCAVPEFBT");

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
    msg.setTimeStamp(0.31385584294036506);
    msg.setSource(43048U);
    msg.setSourceEntity(201U);
    msg.setDestination(26196U);
    msg.setDestinationEntity(100U);
    msg.timeout = 42638U;
    msg.lat = 0.6205136697117687;
    msg.lon = 0.22471970645613992;
    msg.z = 0.3111493927350727;
    msg.z_units = 89U;
    msg.speed = 0.8593042888267813;
    msg.speed_units = 8U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5098558429639043;
    tmp_msg_0.y = 0.6413145135569867;
    tmp_msg_0.z = 0.04154063296775423;
    tmp_msg_0.t = 0.14995931497184545;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TRROALXGHYSATRXPYFTXDXLNKRHOHYBZDUMTVABCIJBEWZWPJUCSIREZIGTXJZOVIEBHEQEILFKIJWQPFUGOCCRFFJ");

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
    msg.setTimeStamp(0.22292183895578432);
    msg.setSource(62794U);
    msg.setSourceEntity(223U);
    msg.setDestination(31283U);
    msg.setDestinationEntity(181U);
    msg.timeout = 6271U;
    msg.lat = 0.014915002988795667;
    msg.lon = 0.1710502672385884;
    msg.z = 0.4045860055282292;
    msg.z_units = 107U;
    msg.speed = 0.6696976089204656;
    msg.speed_units = 68U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6652697749677237;
    tmp_msg_0.y = 0.8637611989148825;
    tmp_msg_0.z = 0.9204276258446146;
    tmp_msg_0.t = 0.28719183158352646;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ETRMGYQUZFLUDWYGDDZIAOXTBSPCSEQRXSFTPQYVJUJZEGXANYFINAZJJFUUQVJWVEMCXLIIIWMMFHFRDSYVPUSDLLLESDOMAWGBFGTBNAHDGJPJLYCIWTXKVTAKNMILRVMDMSKPCXETHOYZHBGCROMPNCQBGCZOWUEWTNKWXHFPNSZIVUHFPOOHBYIJMXWXCVRAHBZKBVJNUKRPFDKYLOQWZZRCTIGDLEXUNBOVTYQSSALRKQ");

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
    msg.setTimeStamp(0.6186905398124901);
    msg.setSource(55748U);
    msg.setSourceEntity(145U);
    msg.setDestination(19839U);
    msg.setDestinationEntity(215U);
    msg.timeout = 56097U;
    msg.lat = 0.7057561585337649;
    msg.lon = 0.43235808648999385;
    msg.z = 0.7884829530723231;
    msg.z_units = 177U;
    msg.speed = 0.7450136320431743;
    msg.speed_units = 149U;
    msg.custom.assign("ZVUBLXIYPTEZJVSJGZYZARSKRHWYBJNZAXKSEXSNFUEAVEDBDCYWQLONTSIWQRXXZCJSVOVRMHALSNWFHFIBGZCEIRQFGAODIBBBVMEDOPILBSSGKOLMNHJHLQDAAOHWRKL");

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
    msg.setTimeStamp(0.6373597629835133);
    msg.setSource(8285U);
    msg.setSourceEntity(55U);
    msg.setDestination(54850U);
    msg.setDestinationEntity(59U);
    msg.x = 0.32355086916589226;
    msg.y = 0.3629195517595949;
    msg.z = 0.7116630349666464;
    msg.t = 0.02459175373591871;

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
    msg.setTimeStamp(0.16912154668001267);
    msg.setSource(19775U);
    msg.setSourceEntity(139U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(10U);
    msg.x = 0.1989061766694007;
    msg.y = 0.08133123167940914;
    msg.z = 0.48076311306117225;
    msg.t = 0.2402107952491901;

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
    msg.setTimeStamp(0.40438247051875287);
    msg.setSource(31300U);
    msg.setSourceEntity(131U);
    msg.setDestination(14148U);
    msg.setDestinationEntity(244U);
    msg.x = 0.027043215223091943;
    msg.y = 0.330747042836239;
    msg.z = 0.7170288618917309;
    msg.t = 0.5690625810005578;

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
    msg.setTimeStamp(0.2443558779675712);
    msg.setSource(13653U);
    msg.setSourceEntity(45U);
    msg.setDestination(6506U);
    msg.setDestinationEntity(210U);
    msg.timeout = 61761U;
    msg.name.assign("ANSODKNZETP");
    msg.custom.assign("IGQMOCCWWDOVYZEVMUPJWYXJMIFHONXTFOMKXG");

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
    msg.setTimeStamp(0.5186556558849753);
    msg.setSource(65380U);
    msg.setSourceEntity(210U);
    msg.setDestination(56209U);
    msg.setDestinationEntity(235U);
    msg.timeout = 50038U;
    msg.name.assign("MNNSDHFLPERKYFMYLQOUSUFXKQFIKQQRJXCGWVWAUULDNXKVMQAHPGZCOHEDHHNEVWAZXBCEAOKKERYJSJMWQOIGLCDJZDOQYXQNCWZJRNLABIRIKQSPNRLKZSMJZUHEOBVFDYHHTDBTBYTEILHPUWUEJZZOSCFKJJEFTQWPFAWVIIYPKVLGIGYXFVPACRMMPBRGCDVBNHPLNOGXASNUBAFMTPOCT");
    msg.custom.assign("LHPWBRQJNTAVMEPAPPMQYFYSB");

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
    msg.setTimeStamp(0.7946541386851346);
    msg.setSource(51532U);
    msg.setSourceEntity(138U);
    msg.setDestination(50811U);
    msg.setDestinationEntity(118U);
    msg.timeout = 37991U;
    msg.name.assign("OFAALMTKZBKGLUMHPBRJJXGFNEUMEWIVUAQFJGEOWMDZTSQVGKUTSFAPIAXLVJLYRUIYXDHIXTCTHNMRLYJIOQBIEXRPSLAAFRVNCNHZ");
    msg.custom.assign("AUJXUVJIANIZERSALLOHQKIRSGPKMGYZZGFONXSUWHJPDYIIACLIHBVYKWFBHZAUMSWYHUXRMDFDUNWRSTYVCMBTEFUPJBMLROGDZAFXWNWQWVCDLSDWCQAZCJKMEYGBAPOVMZNNDQQBKLJVOEDCNVZE");

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
    msg.setTimeStamp(0.9925931732702822);
    msg.setSource(58669U);
    msg.setSourceEntity(174U);
    msg.setDestination(134U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.5854526812414199;
    msg.lon = 0.10139310395894685;
    msg.z = 0.5989501330259852;
    msg.z_units = 93U;
    msg.speed = 0.6695583614101523;
    msg.speed_units = 78U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17421U;
    tmp_msg_0.off_x = 0.9993982891269214;
    tmp_msg_0.off_y = 0.4764052379613135;
    tmp_msg_0.off_z = 0.7754413661335731;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7808246641696602;
    msg.custom.assign("OOAHBEGUVWTUNOACLUWAZQQSHMTJMIPSBVKFD");

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
    msg.setTimeStamp(0.12482476646140139);
    msg.setSource(50735U);
    msg.setSourceEntity(212U);
    msg.setDestination(13324U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.6217026106333986;
    msg.lon = 0.6667755260737053;
    msg.z = 0.4561761879648796;
    msg.z_units = 209U;
    msg.speed = 0.18883589604437556;
    msg.speed_units = 158U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9028846239713639;
    tmp_msg_0.y = 0.7780906564495434;
    tmp_msg_0.z = 0.8986133854918059;
    tmp_msg_0.t = 0.34073282217077405;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 59259U;
    tmp_msg_1.off_x = 0.7613981782789988;
    tmp_msg_1.off_y = 0.6353520663518079;
    tmp_msg_1.off_z = 0.5513936723623806;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5368612402419456;
    msg.custom.assign("KPCHDTINUMUYSCDHDOQMCPSGWMVGQVTCMUIJQZDBQXNAOCPHRFTXSRRERLLGVKFZELFITEAAWIKTHMBBXOZXZDWOVEKBOISPONDFFAGQTNVZDBZKVRUUELSULNJUAYHSJIOSSPIYYZBCZRARWENBWGNYMZXXFYUAGUGYQXNLBJHJMFTOHPDEHTPPXCJBQIXLQPSHF");

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
    msg.setTimeStamp(0.9408220685559681);
    msg.setSource(51544U);
    msg.setSourceEntity(176U);
    msg.setDestination(64558U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.7053627950306214;
    msg.lon = 0.08883705079809956;
    msg.z = 0.8850287828650553;
    msg.z_units = 216U;
    msg.speed = 0.6604722593160766;
    msg.speed_units = 113U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0062205979009890555;
    tmp_msg_0.y = 0.8371369809124566;
    tmp_msg_0.z = 0.665163931757739;
    tmp_msg_0.t = 0.7320612070662835;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 38581U;
    tmp_msg_1.off_x = 0.44295288296070234;
    tmp_msg_1.off_y = 0.231380724008314;
    tmp_msg_1.off_z = 0.7918258013401107;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.1041636855706739;
    msg.custom.assign("VSCKOHZZEZBVNOXOODOEYGASKFBYBLWJVBQQFTUNRGRHKLVOMBRKIHGGDTMVQPMG");

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
    msg.setTimeStamp(0.037736255681150244);
    msg.setSource(51437U);
    msg.setSourceEntity(206U);
    msg.setDestination(38121U);
    msg.setDestinationEntity(235U);
    msg.vid = 21061U;
    msg.off_x = 0.2274618229029679;
    msg.off_y = 0.15797344758942833;
    msg.off_z = 0.016081107932242822;

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
    msg.setTimeStamp(0.6544297633731858);
    msg.setSource(11970U);
    msg.setSourceEntity(188U);
    msg.setDestination(14414U);
    msg.setDestinationEntity(160U);
    msg.vid = 43199U;
    msg.off_x = 0.12184730026104451;
    msg.off_y = 0.14975158796498922;
    msg.off_z = 0.842811583391016;

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
    msg.setTimeStamp(0.749142161151494);
    msg.setSource(15776U);
    msg.setSourceEntity(20U);
    msg.setDestination(37048U);
    msg.setDestinationEntity(178U);
    msg.vid = 36407U;
    msg.off_x = 0.9385117920098583;
    msg.off_y = 0.059619955506264755;
    msg.off_z = 0.6445350758852534;

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
    msg.setTimeStamp(0.2635188057957294);
    msg.setSource(16229U);
    msg.setSourceEntity(250U);
    msg.setDestination(35962U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.9777285995431481);
    msg.setSource(12838U);
    msg.setSourceEntity(90U);
    msg.setDestination(39778U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.08940504750417833);
    msg.setSource(53988U);
    msg.setSourceEntity(225U);
    msg.setDestination(24027U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.9670175215523173);
    msg.setSource(28618U);
    msg.setSourceEntity(179U);
    msg.setDestination(24200U);
    msg.setDestinationEntity(168U);
    msg.mid = 16389U;

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
    msg.setTimeStamp(0.28421681864295834);
    msg.setSource(62536U);
    msg.setSourceEntity(71U);
    msg.setDestination(45316U);
    msg.setDestinationEntity(133U);
    msg.mid = 4697U;

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
    msg.setTimeStamp(0.9749757660184539);
    msg.setSource(37310U);
    msg.setSourceEntity(253U);
    msg.setDestination(51144U);
    msg.setDestinationEntity(54U);
    msg.mid = 11406U;

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
    msg.setTimeStamp(0.4757506210885676);
    msg.setSource(39939U);
    msg.setSourceEntity(248U);
    msg.setDestination(35247U);
    msg.setDestinationEntity(80U);
    msg.state = 29U;
    msg.eta = 19147U;
    msg.info.assign("TPXHPAPVJUHMUGKWMUCYLNOFZFANJG");

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
    msg.setTimeStamp(0.8422931401768528);
    msg.setSource(24860U);
    msg.setSourceEntity(209U);
    msg.setDestination(49183U);
    msg.setDestinationEntity(115U);
    msg.state = 225U;
    msg.eta = 34695U;
    msg.info.assign("LHYJZHKNLKHOZVWZBIQETRSYSXLDRUAGJWTPIJGQZMZBEZEAGFUYPDYEYSVCVSLCIRTGTKXUGYXYQWOHIJHKSWDSPSOUKC");

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
    msg.setTimeStamp(0.2242188401072287);
    msg.setSource(41750U);
    msg.setSourceEntity(87U);
    msg.setDestination(32723U);
    msg.setDestinationEntity(119U);
    msg.state = 219U;
    msg.eta = 31188U;
    msg.info.assign("PTGSZNWRQRVREAJMJTBOYVTCXGJYCZUEYPJAKVJWNOUXQNOZSFGLCVKIJOIDNOQNRHGQDCNLPEXNUTSDMPUEKHUXEAHRSMSYRUIXFBKVDKJRQDUIVPPC");

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
    msg.setTimeStamp(0.8160084412322136);
    msg.setSource(41914U);
    msg.setSourceEntity(190U);
    msg.setDestination(47498U);
    msg.setDestinationEntity(232U);
    msg.system = 14792U;
    msg.duration = 51093U;
    msg.speed = 0.5372178535559328;
    msg.speed_units = 190U;
    msg.x = 0.5838538885396335;
    msg.y = 0.025003485306093087;
    msg.z = 0.32862070619813366;
    msg.z_units = 180U;

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
    msg.setTimeStamp(0.7717927584837684);
    msg.setSource(39743U);
    msg.setSourceEntity(145U);
    msg.setDestination(65076U);
    msg.setDestinationEntity(1U);
    msg.system = 23799U;
    msg.duration = 50166U;
    msg.speed = 0.1828164097121192;
    msg.speed_units = 249U;
    msg.x = 0.8357205414775382;
    msg.y = 0.6888304109784783;
    msg.z = 0.5319771859284008;
    msg.z_units = 125U;

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
    msg.setTimeStamp(0.5221115572225615);
    msg.setSource(9402U);
    msg.setSourceEntity(46U);
    msg.setDestination(26067U);
    msg.setDestinationEntity(76U);
    msg.system = 17617U;
    msg.duration = 56077U;
    msg.speed = 0.8031406486066109;
    msg.speed_units = 71U;
    msg.x = 0.039274437334389845;
    msg.y = 0.016272728201803144;
    msg.z = 0.024703994712197863;
    msg.z_units = 223U;

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
    msg.setTimeStamp(0.15777343685162115);
    msg.setSource(53230U);
    msg.setSourceEntity(165U);
    msg.setDestination(2462U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.8543190540697734;
    msg.lon = 0.49612004340061633;
    msg.speed = 0.35458702612355575;
    msg.speed_units = 123U;
    msg.duration = 23779U;
    msg.sys_a = 47549U;
    msg.sys_b = 33020U;
    msg.move_threshold = 0.30877975348592246;

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
    msg.setTimeStamp(0.6066803739543623);
    msg.setSource(18974U);
    msg.setSourceEntity(82U);
    msg.setDestination(7776U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.40686033782852316;
    msg.lon = 0.7092759126437509;
    msg.speed = 0.04552564381320989;
    msg.speed_units = 113U;
    msg.duration = 63039U;
    msg.sys_a = 62857U;
    msg.sys_b = 30415U;
    msg.move_threshold = 0.0005093337308528234;

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
    msg.setTimeStamp(0.8411629780464416);
    msg.setSource(34364U);
    msg.setSourceEntity(69U);
    msg.setDestination(62911U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.6024569763835336;
    msg.lon = 0.46844382323751954;
    msg.speed = 0.5635670741882602;
    msg.speed_units = 99U;
    msg.duration = 55641U;
    msg.sys_a = 44022U;
    msg.sys_b = 10889U;
    msg.move_threshold = 0.9164580831943815;

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
    msg.setTimeStamp(0.8994463681811108);
    msg.setSource(7792U);
    msg.setSourceEntity(5U);
    msg.setDestination(34663U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.9170525185722085;
    msg.lon = 0.4646704318913508;
    msg.z = 0.4384472714388058;
    msg.z_units = 82U;
    msg.speed = 0.10004597114681968;
    msg.speed_units = 156U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5120260615390884;
    tmp_msg_0.lon = 0.5500576342636867;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TFWBQPICLANCPLNPDPYSVOKVNPYKMVYPZSVCUAFBFVJHEFQKNDJVLGJXSTTZZEABIWYRZXKXQSTIOKGJDBMZWNMJLHHBAEJYPKUFXAGRMYWGUEWFWOMHEWSCDPJOLCMNMUOYETVQMGKTHHFGGSJCCWEQDHXCEHQKYQUQMBLTZ");

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
    msg.setTimeStamp(0.20306973598484857);
    msg.setSource(46605U);
    msg.setSourceEntity(53U);
    msg.setDestination(58653U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.7440640570048668;
    msg.lon = 0.542663047728941;
    msg.z = 0.0818479679406432;
    msg.z_units = 207U;
    msg.speed = 0.1057696375106375;
    msg.speed_units = 24U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.712574253269801;
    tmp_msg_0.lon = 0.9242885329904093;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TTJRZNZWYECYHYTMVPPLAVBYFHBUSZOSFBUHZHZNZGADSXHJPDJXOCRHNTOGIYUVEXORQVLKCMLIKIGWZDRQPTUMLRBZLEVFGSMKIBFKMDJUDMACCTPOQMARYREERUWOAKKQQAWCSWIFIGFMIXYVNYUQHT");

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
    msg.setTimeStamp(0.3334889720763887);
    msg.setSource(56488U);
    msg.setSourceEntity(9U);
    msg.setDestination(42449U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.4989047277716172;
    msg.lon = 0.5051167160075527;
    msg.z = 0.7301678967850241;
    msg.z_units = 195U;
    msg.speed = 0.6724809178077844;
    msg.speed_units = 137U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9893833045198206;
    tmp_msg_0.lon = 0.9309314321227614;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LUSQRWWQLZQGPGLVBKCFUXVOLBCNJCLAKMUPBDRBSSNCGMZTCFZYUNPQAGALLAHUORFDCDIGAZAMVSSOHDONREKUJZKXBOJYIGUAZBEXUMHXNEKYQQMIADWCGVJVWREIWRZNIYGAIDKVXCQMTE");

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
    msg.setTimeStamp(0.5071884889622396);
    msg.setSource(31212U);
    msg.setSourceEntity(29U);
    msg.setDestination(19066U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.2775705824504944;
    msg.lon = 0.8538497371106495;

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
    msg.setTimeStamp(0.018919180382737433);
    msg.setSource(16243U);
    msg.setSourceEntity(225U);
    msg.setDestination(13877U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.38593482122917777;
    msg.lon = 0.6549627298306085;

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
    msg.setTimeStamp(0.874360613373624);
    msg.setSource(38701U);
    msg.setSourceEntity(192U);
    msg.setDestination(63461U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.6005429145457785;
    msg.lon = 0.1725557620163891;

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
    msg.setTimeStamp(0.23687195638348324);
    msg.setSource(40767U);
    msg.setSourceEntity(164U);
    msg.setDestination(2442U);
    msg.setDestinationEntity(149U);
    msg.timeout = 44904U;
    msg.lat = 0.7280349386554674;
    msg.lon = 0.2825366345461443;
    msg.z = 0.8349290724742217;
    msg.z_units = 195U;
    msg.pitch = 0.5762284353208266;
    msg.amplitude = 0.3447825372710317;
    msg.duration = 38338U;
    msg.speed = 0.08257064793221558;
    msg.speed_units = 101U;
    msg.radius = 0.15231471619970882;
    msg.direction = 85U;
    msg.custom.assign("MHIMWAXZGTMHMLLMJJKS");

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
    msg.setTimeStamp(0.36196466514783254);
    msg.setSource(65330U);
    msg.setSourceEntity(203U);
    msg.setDestination(46926U);
    msg.setDestinationEntity(30U);
    msg.timeout = 54238U;
    msg.lat = 0.4847099605272922;
    msg.lon = 0.9497067435750218;
    msg.z = 0.5267331825550671;
    msg.z_units = 83U;
    msg.pitch = 0.8402244003946988;
    msg.amplitude = 0.044927861479150066;
    msg.duration = 24436U;
    msg.speed = 0.6869847443566932;
    msg.speed_units = 111U;
    msg.radius = 0.020380911560719528;
    msg.direction = 75U;
    msg.custom.assign("SGIGGUCXSHYKYJDTNSMLSFGDUFGFLPKHFNZAQXKDKZNYCLEPGMAOXMAHJUTXMFQOKJVXXCUEQWPMWQIYCCTMWNRZLGJSQJKLNWMFJURWGBOIEYYELWPNXBBEIJMIPUDHADVBODZOFQPIOXAJDTEWCMAFHVSVHRHOLRLIYQKVBSYVCAGEMXPQVYUTRUV");

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
    msg.setTimeStamp(0.5844466445847858);
    msg.setSource(411U);
    msg.setSourceEntity(155U);
    msg.setDestination(26205U);
    msg.setDestinationEntity(33U);
    msg.timeout = 46659U;
    msg.lat = 0.32518295469160785;
    msg.lon = 0.3349031388089905;
    msg.z = 0.11264163625784496;
    msg.z_units = 98U;
    msg.pitch = 0.7835612171487993;
    msg.amplitude = 0.22636378673878155;
    msg.duration = 65160U;
    msg.speed = 0.7565157081571047;
    msg.speed_units = 163U;
    msg.radius = 0.8346358947646073;
    msg.direction = 15U;
    msg.custom.assign("HNQAAWYOINSDPWCKCGPSYKXQOYLGOUQOQTEMRAVMZJROFZAXHCUULJILKMBWJZLSZWBMKPKCXGHIBHUPTWIKDMYNQPDDMFYOWZROBFXCUGFZHHAGSBKDDVSGPFHZVEKSLQVHTAXJGJMXZJEKFEALXRQESSBZJIRANZGTUQPBQIXDEYRVYOEFYQRSRCDLVWNXMCIVPBCUCNXRGEVKLAJDDUTN");

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
    msg.setTimeStamp(0.3973618508540824);
    msg.setSource(6543U);
    msg.setSourceEntity(202U);
    msg.setDestination(20960U);
    msg.setDestinationEntity(58U);
    msg.formation_name.assign("HBUFJGYNIPURPMKDNSHTZWWBV");
    msg.reference_frame = 234U;
    msg.custom.assign("SOPCFUXCCVNMZGBUXUZCKNNGHL");

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
    msg.setTimeStamp(0.6795475288305673);
    msg.setSource(20279U);
    msg.setSourceEntity(193U);
    msg.setDestination(33592U);
    msg.setDestinationEntity(135U);
    msg.formation_name.assign("BZLTZYVAZRPQFTVALBHUHTRMITUNYXTBKLCPFZGXXCMDJYGAYFQJBDWEYNUEOIOAXTDJMJIPKYHNBFPLBSVPACMMIFBKYMUXOQTLTKNSAXPEOVTABOR");
    msg.reference_frame = 247U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55049U;
    tmp_msg_0.off_x = 0.788211518809239;
    tmp_msg_0.off_y = 0.46465127774881265;
    tmp_msg_0.off_z = 0.4084829038790947;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PXIXUHVISQETMJEDMWYLCZGZHRSQOPCHVOOLRKVHPQMEWBPYUGCMBISHIEYDRFJLRLNXDZGTVMEYGNFTAEZLUXZMHSSASXZAFMUYJZOHRLATGQMWZALUACAPBXVGTOWOIBQQQZBBFTIYBSWRRNFWAVUYNKNBPESKCUFCTFEQCOYHQWCHVLATJFEFJNHXGIRKBBPQUP");

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
    msg.setTimeStamp(0.0828452663049919);
    msg.setSource(18882U);
    msg.setSourceEntity(165U);
    msg.setDestination(54380U);
    msg.setDestinationEntity(74U);
    msg.formation_name.assign("DGHROBMIPAPXJREOMHFKTOIDRPVBHLHKSGLNRATVMHBZYVRCMYWRPLBXIUATTIQWFMXIHIBYZSGKMCBABAZBRXFFAEQUHFFSXVUQNOJJUTNBCXNSAEMEQXVZZIKCFDRHCKVEBUOJLPVFDYXHOYTLJNJWDAREOPIDFGTACQQWYJYEOUFZWPLNGXMJUUWKVDODKLCLPMQWDZZYETSECGG");
    msg.reference_frame = 8U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28868U;
    tmp_msg_0.off_x = 0.4815846178477331;
    tmp_msg_0.off_y = 0.20450895997456242;
    tmp_msg_0.off_z = 0.6413457186670107;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YEBJWRRSQBRX");

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
    msg.setTimeStamp(0.1968040987206744);
    msg.setSource(65466U);
    msg.setSourceEntity(213U);
    msg.setDestination(14799U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("JBOYVCZVDSKMBBDZVNBCNOWEBVDYVVOKYZUDZVMVFGUAKUJMGXGHONTFAWQEKEJACUSCQHEPPEZPOERUTLBMWCFXSFRMCHTSHIIGBBLHZAZTLWYWICDAFRGXNAKJQLULHSRSBTTYQPIJNQUDGRGVDCIMXKSEWFNEQDTNLDCXXLVGJUJRFDUJZWSOPYOPFNOUNPRWZHFBCXQQMMGNEAXIYTYJJYQKSILWHEXMI");
    msg.formation_name.assign("DJZLQGGENGZAEVFKKYMRELODFLMCQMQBKJMCIPJQNZFLAZCFAHNGHNDVTDYTMJYFSIXRPWSGZOHKRFJSDWOOEQJOEYGXTHAIAUKJOXVDORDZTYJYDRPBMLNYTVTETPCXSPAWZWKLSKCUEIUQWYOTRCBPMWHXUNLBBGJOZGQVIT");
    msg.plan_id.assign("VXJHJJDBZLEIUQXUWPAVSKPRTVGECLFLTLHNAIPCBMZMRQXCIVFTFMMDOQKMLMLAIKUDAOMXGYSCWFJMRWHPKPOVADIPGOZNVXWNSYMFHCKVSYRYJDNNYEDHINXUDA");
    msg.description.assign("HEMHXZAXQNSLWLUPISSVRPKVFZBJCRDCZLOYDMMFRKLMKABGEOGHBGMQESVNYEQMPIVXKWEFZJUXGTBYQGVWHTUAJGHSKLNOUQUEDRBGIFQCCBJIFAFDDJNYZBXCLKRGCXJDTOISEWQCWLODCQHEBAPVFJNXIPNOUMCXWODGUTJUKXCOYZ");
    msg.leader_speed = 0.46313274771957813;
    msg.leader_bank_lim = 0.42771795440480487;
    msg.pos_sim_err_lim = 0.7053088204667667;
    msg.pos_sim_err_wrn = 0.5103066834446734;
    msg.pos_sim_err_timeout = 37262U;
    msg.converg_max = 0.8225518862015275;
    msg.converg_timeout = 55694U;
    msg.comms_timeout = 36634U;
    msg.turb_lim = 0.6055076026357921;
    msg.custom.assign("FRYERPJRBZFRIXITGDQZGDTQFKCSCSELECSSKXFXWDQXKCJTZXDGKYRBSFNITUOAHYULFLBSJHBBKTPZIKICROMPEIPOUMNGTJNSEQGYDHFPEMWVXTCLEORCNCTOIIDV");

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
    msg.setTimeStamp(0.5894685846024382);
    msg.setSource(59899U);
    msg.setSourceEntity(159U);
    msg.setDestination(7071U);
    msg.setDestinationEntity(124U);
    msg.group_name.assign("BSNDXEAPLPAJOQWCXUHTNCJOYXDBFZOTRHNKSWKFTXPONMQGGMTGUZXTWFLBXNKCPBKKHUDIOLKQYRDIVOIEAVIOGYCZCUURDXTHEHXSJEJDDBIJEURVCSWR");
    msg.formation_name.assign("BDBCZOEINCDWFDPEKZOCFZIAJQUADRPTICLMRRBBXUGN");
    msg.plan_id.assign("DTVINKVJFILPUZGPRZTPFBMMBNMGOVZCSWJLQLGYB");
    msg.description.assign("BMMKGNCRXBSYIWWVTAFHZRODDXZNTYBOPVEFZLKFCLGMFPHDNIPOUOKFTCEMCQJISZOEZEXLIXNVDSHUGXNAJAERQFMDMTUQVIWFNUARKBSVSWPQHEJCGJYLEUVCAUSMFZQGNKYHTKQJNGQHJQAYGAZCDWWVUAYGIO");
    msg.leader_speed = 0.6518944406762989;
    msg.leader_bank_lim = 0.5130150607821686;
    msg.pos_sim_err_lim = 0.12411930338369515;
    msg.pos_sim_err_wrn = 0.23710072681986438;
    msg.pos_sim_err_timeout = 15042U;
    msg.converg_max = 0.09205996504836356;
    msg.converg_timeout = 13969U;
    msg.comms_timeout = 56926U;
    msg.turb_lim = 0.9385918868458875;
    msg.custom.assign("KJDTETUSXOPYEMVPADIZXHBSDRYZNJZUYCLMUZSWUVRHCPMNLDVEZPHNLSHAJOAQTVSPKDJPHINQPTUIWYGPWLYLXYGOAMFKZEBSDGLMRFVDITBOOJJLKNDYNCOFGBWWRQTFCGEBGRKIKULCFVAZJDZHMGQHMGXZSMPDCYCWCWCFOQKMIHZRVTAXJXRSAUNGIBEEEKRA");

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
    msg.setTimeStamp(0.7167669607476076);
    msg.setSource(11646U);
    msg.setSourceEntity(105U);
    msg.setDestination(42862U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("LRZPBDMZUSZEZKRJOENJXLTDPAHIHXXESMVTTYAYVSYFANBKQMBAGJPFAMZEZSFEDFXPRCMUIRUKKGWBLDMISIGHNCGVVUCTFZVKUMYQCYLWLAEOYOQIOMWJVOWVRZVUDGGIEBHMLNIILKIFSQIYHAYNPV");
    msg.formation_name.assign("PKABAYHMXRORJGMOBJZIUSWVKKBFWALOYROXF");
    msg.plan_id.assign("RKGVFQJIBEISNOWWUPTRKIPIJZQTCQHVWQARVLSBJIRQVRMACRUPPEPVVSPZNGPWNORLODKIWYMZBKULUHVCGOZESDYFGGLIXLNEJHUJHEVVNLBFFYCXYCLDYDKRZNAMUUWEQISQATNADQMXKFOLOCCXXTXNJFHKDYBVFPDMSLJUBYTHYLBO");
    msg.description.assign("WFEBDWEJCUNQKKUFORORWUPXBNBYEHPQRJFYAJNFGGSTFALADWNIZMMZPNLYZCWXEWQEBCRZDMJCOGQUDSPACNIVT");
    msg.leader_speed = 0.5752956242294974;
    msg.leader_bank_lim = 0.27629503944685807;
    msg.pos_sim_err_lim = 0.5573047919222323;
    msg.pos_sim_err_wrn = 0.3875232422120981;
    msg.pos_sim_err_timeout = 22513U;
    msg.converg_max = 0.6999517725010705;
    msg.converg_timeout = 63971U;
    msg.comms_timeout = 16478U;
    msg.turb_lim = 0.29230934501698624;
    msg.custom.assign("CUXEOMFHVSVJIKKPSSANANACIUIDASRXZRWAHDQMCQUQJIPBTFWGZBBHGEZUDNEOQLMOFAUMUQSBQPNBWOFBTCMEFYPGEXIJPKRUHLLALUKVHFWBVGANQITSRYJVKPEOYVPJFNBKTXDNCZDDNTAWBYCPQICEGULFHAZYQXVNJLFNDOMXCVJXYRRGDPXOYHFKMHOOMZKLQTWHGSCXUWZKZRMLIVMKYGLWOBEGJTHLZGDZSYXWSRTTVYREJJSE");

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
    msg.setTimeStamp(0.5663066961051378);
    msg.setSource(20523U);
    msg.setSourceEntity(215U);
    msg.setDestination(8070U);
    msg.setDestinationEntity(49U);
    msg.control_src = 22550U;
    msg.control_ent = 180U;
    msg.timeout = 0.8749636421148287;
    msg.loiter_radius = 0.8574917424796664;
    msg.altitude_interval = 0.17704369328824776;

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
    msg.setTimeStamp(0.9489595636344653);
    msg.setSource(42848U);
    msg.setSourceEntity(89U);
    msg.setDestination(34502U);
    msg.setDestinationEntity(215U);
    msg.control_src = 54796U;
    msg.control_ent = 194U;
    msg.timeout = 0.7955001590010944;
    msg.loiter_radius = 0.15037186674691339;
    msg.altitude_interval = 0.9798165162210137;

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
    msg.setTimeStamp(0.7306297357323033);
    msg.setSource(24942U);
    msg.setSourceEntity(168U);
    msg.setDestination(43026U);
    msg.setDestinationEntity(12U);
    msg.control_src = 28339U;
    msg.control_ent = 219U;
    msg.timeout = 0.07135149590395795;
    msg.loiter_radius = 0.10982477801716517;
    msg.altitude_interval = 0.13966770098679981;

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
    msg.setTimeStamp(0.36322631491312096);
    msg.setSource(1140U);
    msg.setSourceEntity(88U);
    msg.setDestination(12078U);
    msg.setDestinationEntity(241U);
    msg.flags = 110U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2299058579421861;
    tmp_msg_0.speed_units = 250U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.029348658324777843;
    tmp_msg_1.z_units = 101U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6362006273052783;
    msg.lon = 0.03340679941671387;
    msg.radius = 0.32360692888250786;

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
    msg.setTimeStamp(0.6160096193255046);
    msg.setSource(33157U);
    msg.setSourceEntity(39U);
    msg.setDestination(19013U);
    msg.setDestinationEntity(137U);
    msg.flags = 244U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.31870641802894695;
    tmp_msg_0.speed_units = 54U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5926723352734814;
    tmp_msg_1.z_units = 173U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.44352183398732936;
    msg.lon = 0.4183452564843122;
    msg.radius = 0.8915301502863342;

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
    msg.setTimeStamp(0.5907415544627145);
    msg.setSource(35344U);
    msg.setSourceEntity(39U);
    msg.setDestination(38349U);
    msg.setDestinationEntity(233U);
    msg.flags = 38U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0878012022564656;
    tmp_msg_0.speed_units = 8U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.18231088683142893;
    tmp_msg_1.z_units = 225U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.20532870066843345;
    msg.lon = 0.6541113990060033;
    msg.radius = 0.7693954775561053;

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
    msg.setTimeStamp(0.2234852712537343);
    msg.setSource(23359U);
    msg.setSourceEntity(235U);
    msg.setDestination(63888U);
    msg.setDestinationEntity(116U);
    msg.control_src = 61250U;
    msg.control_ent = 106U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 253U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8912593320552316;
    tmp_tmp_msg_0_0.speed_units = 69U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5566257800846715;
    tmp_tmp_msg_0_1.z_units = 213U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.08272101420357458;
    tmp_msg_0.lon = 0.575929233526037;
    tmp_msg_0.radius = 0.5317152226291233;
    msg.reference.set(tmp_msg_0);
    msg.state = 108U;
    msg.proximity = 98U;

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
    msg.setTimeStamp(0.3555597374606424);
    msg.setSource(63407U);
    msg.setSourceEntity(113U);
    msg.setDestination(64905U);
    msg.setDestinationEntity(5U);
    msg.control_src = 17254U;
    msg.control_ent = 174U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 152U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5114531475733037;
    tmp_tmp_msg_0_0.speed_units = 136U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5915414002598743;
    tmp_tmp_msg_0_1.z_units = 22U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4108590486607684;
    tmp_msg_0.lon = 0.3438175193162327;
    tmp_msg_0.radius = 0.37990215402700445;
    msg.reference.set(tmp_msg_0);
    msg.state = 221U;
    msg.proximity = 80U;

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
    msg.setTimeStamp(0.8647172794839332);
    msg.setSource(33619U);
    msg.setSourceEntity(187U);
    msg.setDestination(23723U);
    msg.setDestinationEntity(239U);
    msg.control_src = 34388U;
    msg.control_ent = 176U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 160U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.40638589395921354;
    tmp_tmp_msg_0_0.speed_units = 171U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6861401951705081;
    tmp_tmp_msg_0_1.z_units = 235U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8215936794701226;
    tmp_msg_0.lon = 0.13902980386369168;
    tmp_msg_0.radius = 0.1341949655392528;
    msg.reference.set(tmp_msg_0);
    msg.state = 119U;
    msg.proximity = 80U;

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
    msg.setTimeStamp(0.8663102072796594);
    msg.setSource(35837U);
    msg.setSourceEntity(250U);
    msg.setDestination(40293U);
    msg.setDestinationEntity(14U);
    msg.op_mode = 78U;
    msg.error_count = 92U;
    msg.error_ents.assign("OLTOUFIJIUMMSRKDZCOTXQUEJDPCSEHPJYGQHYRTVWKCPDRGXVUUZKQHQGLYBAABSJCLARFQMJEGZDSBYGLJTFGJPWRHFEABRDBDLOTPZZISOOMXIYZRXBQSVGWHCNOPOHZFSPEYUKVCKKBGZIJADVBTZWPEXYKNLXNOMGDXCAFIPNAWKCGWMXJMNTFIU");
    msg.maneuver_type = 34356U;
    msg.maneuver_stime = 0.5258797344592111;
    msg.maneuver_eta = 54425U;
    msg.control_loops = 2089389876U;
    msg.flags = 72U;
    msg.last_error.assign("YFXSNDWNLMLYPXOTZVWMACAHFRKYWBCYWGDEJUXDQXOIGOOPHGEISEQSCTOHEORNWZIUTIQWGOAJHISBKMZDSIDANQKTKNLDMIKSEZIPCROXEFWLWLDLGIPDEBMNKMBRVZJSCQAZRURPVBNFYRTMMGZ");
    msg.last_error_time = 0.1388322701770297;

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
    msg.setTimeStamp(0.8560416032357223);
    msg.setSource(48427U);
    msg.setSourceEntity(242U);
    msg.setDestination(59325U);
    msg.setDestinationEntity(90U);
    msg.op_mode = 205U;
    msg.error_count = 225U;
    msg.error_ents.assign("CWQBAQQLFPUASMXVHCOMZTJLQSOHKGJILYAPLWZMHRJZQVYGFPBQHOBTYXDRSCYBVBZNNKOQYGRAKULRSIULGWUVQTZSJWADEYWQFHLOTMKKKDDECWBELHOHRGKANNXBITOTYBBSFGFLJMOKDGEFNWIHXGREMINAVCZMKSCVSVEOEHWDTUXMDOYIZAJFYFRDKUFNTAUV");
    msg.maneuver_type = 43776U;
    msg.maneuver_stime = 0.46129014914214783;
    msg.maneuver_eta = 59453U;
    msg.control_loops = 591507313U;
    msg.flags = 167U;
    msg.last_error.assign("ZNQBYPPVTRYHMSXHOJAVMKYKXWMCVSWTQJWLLTIZLNPTXMLOAPBZLJVYXPYBPTFW");
    msg.last_error_time = 0.0377267106409539;

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
    msg.setTimeStamp(0.046133670126206394);
    msg.setSource(17514U);
    msg.setSourceEntity(192U);
    msg.setDestination(34580U);
    msg.setDestinationEntity(8U);
    msg.op_mode = 19U;
    msg.error_count = 251U;
    msg.error_ents.assign("CQPAHXXNVAMVRNPLQZKLTNUOBBEDFTEEGFYQAMVWGSDPGQI");
    msg.maneuver_type = 43384U;
    msg.maneuver_stime = 0.5285062833982612;
    msg.maneuver_eta = 21257U;
    msg.control_loops = 2284040899U;
    msg.flags = 92U;
    msg.last_error.assign("PRSHZIFJGUIJWPCZHCTQFNITESOXFZTEAYTQLVODRORRFYAKOWCAD");
    msg.last_error_time = 0.3815257719557631;

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
    msg.setTimeStamp(0.07060046956250166);
    msg.setSource(23238U);
    msg.setSourceEntity(133U);
    msg.setDestination(14098U);
    msg.setDestinationEntity(215U);
    msg.type = 151U;
    msg.request_id = 28396U;
    msg.command = 131U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("PVWAZDZJQFYNTFJMXXAMQJSIIDBBXHSJUUGZQVDFJECZVGCUGSVXBZVTLVAZCKWRNPPEQNQOKAZCIRBIXDEXPYEZRLFULNJHINOOWGUUXYNDEHUHBGHEBLLWXMHRSKOSQFFTMLTWAMDWRQHKDGOYGCLWRMVDOA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63522U;
    msg.info.assign("TCFKEUEHYXCHGGCRCZJYSFFTDTKHJCRNBTIXVEFXVNOHQIKGZRPOWWLXAKTBVVEFMAVPEJIIPIYUSONOGPBDLJAHHWAVVBWWMSVWHNZZBBIOATKEMIAEFPRGYGYKTYOLDZSCRFDOUSNXOORZNMNIRZMNPDJS");

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
    msg.setTimeStamp(0.045945299811219864);
    msg.setSource(7728U);
    msg.setSourceEntity(101U);
    msg.setDestination(47179U);
    msg.setDestinationEntity(80U);
    msg.type = 104U;
    msg.request_id = 6295U;
    msg.command = 212U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 55901U;
    tmp_msg_0.lat = 0.06899474751027235;
    tmp_msg_0.lon = 0.5232417012140183;
    tmp_msg_0.z = 0.6937431922755259;
    tmp_msg_0.z_units = 170U;
    tmp_msg_0.speed = 0.4089212356040467;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.roll = 0.5912580452988988;
    tmp_msg_0.pitch = 0.4096911163451593;
    tmp_msg_0.yaw = 0.45874607243857524;
    tmp_msg_0.custom.assign("MFFASVQIYMGKWWOPBDFEQVOZKSNBGGGMRLQXEJWHJMUHKYGUJGQLUXYLMIXTLTAYXYOLCJKCHWQDRTKHLQXYECPZUDJNFEWBYMBRJENBUIJLAAOTQBTPOHCUJW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10911U;
    msg.info.assign("NUCXHCDMBMDJBDLCSUKTURIBTHGNOCOWQHTRNTCEUKQHMBYZNFAUFOYTKOAZMYNPXAYSZVDTIYGQEMYASBDRXWJPVNKGSPHJPAEFHXMXIUKLKFEGVPZPDZFSRIYMOHAWTLEXCFVNHZIOQ");

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
    msg.setTimeStamp(0.34221398723025787);
    msg.setSource(49894U);
    msg.setSourceEntity(156U);
    msg.setDestination(1493U);
    msg.setDestinationEntity(132U);
    msg.type = 134U;
    msg.request_id = 65383U;
    msg.command = 10U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.8258513854047446;
    tmp_msg_0.lon = 0.5287872043862543;
    tmp_msg_0.z = 0.3290071378939978;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.speed = 0.7206290078446572;
    tmp_msg_0.speed_units = 170U;
    tmp_msg_0.custom.assign("DXMXQHJSQETFGAKHOLJKSAXJWXXDYYFATOPNLFZWJTAQDRYCXFWHVGYXSPYDQVMPUPDGIRNDGUAYXJRBSTYIBQNDQQWKLLKBFHSHUWNPGSYHIFLBICGEPVGAVMXIGNRILWTVUFOGVCELEOTSBEQWBZARONRWIAODMCIMZDNHIMBDUJBXQHMPZUMPCEJKRWCKTZUKUJZKYMUVYQZZHZNCVSPLTATFKERSVFVOUCCLARCZGBJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47688U;
    msg.info.assign("KQEVBJGAQGXWXLDAERWRVWVXNT");

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
    msg.setTimeStamp(0.6058725368530844);
    msg.setSource(35877U);
    msg.setSourceEntity(3U);
    msg.setDestination(31499U);
    msg.setDestinationEntity(236U);
    msg.command = 15U;
    msg.entities.assign("PWRDCSVHTLIGBCDTGGPXBSTEUZKLQEGSIJHYWJKEXANZFOVSCRNHDQDWBODJQPXBZLBYQCTWLJOGQIOZRUVGUJZAWTEDIQKOWPQNTPRUYFFV");

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
    msg.setTimeStamp(0.07152194463927031);
    msg.setSource(48601U);
    msg.setSourceEntity(22U);
    msg.setDestination(38691U);
    msg.setDestinationEntity(121U);
    msg.command = 57U;
    msg.entities.assign("XIIFHHZAGMGYGVTRHVIAPMAORDQOFOUORTIFOCZLTQJSBJNDXJBNGHYPXERGEELRMOQCJQYTCHJYUUCWZLJIVLGZXQPWEQKERLUJASSKMIVBWBAYHCVNNPSMBHDBXRFFWFXBKPJXVNYETTYSEECLNDWRNDLJUOOPKACHSIIONRSTWGZKVMFUMWJX");

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
    msg.setTimeStamp(0.6628155303668671);
    msg.setSource(52019U);
    msg.setSourceEntity(140U);
    msg.setDestination(22773U);
    msg.setDestinationEntity(71U);
    msg.command = 183U;
    msg.entities.assign("EFSAQFJGLJQMQDBRIVKVBDLYDTMBSNAHUGRMOWVYXSYHDZVAXJYIHPOOXWUXQGJPTACEEUOXIBWPOIYDD");

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
    msg.setTimeStamp(0.5260213986513933);
    msg.setSource(6136U);
    msg.setSourceEntity(42U);
    msg.setDestination(57141U);
    msg.setDestinationEntity(162U);
    msg.mcount = 11U;
    msg.mnames.assign("MOFBENAOZIDRYMYFUMSVEPBNYJFYPBAARBFBWRCFGWCUTCJZYGDTCEHNARUEVXAZHPIPNTRKDBHGEGQTNZXAHKLWCDTBUFYMONPOTEOLMZWMFXSJQAEVURBVPRSHKKAQPICKTXSTOXDZVNNLWIWWGJPVDGZGIIHLKSJFXVJQGLAIDWUJIEMNRTH");
    msg.ecount = 236U;
    msg.enames.assign("LNTVHORSHI");
    msg.ccount = 79U;
    msg.cnames.assign("IRCHHTSTIFZRQOTBANVWWBD");
    msg.last_error.assign("ZJSVVZTHUIJIVLNOYRFKEMOHFETQNFVUCNWTTRYDXXRVMKCENPHPAJXHAWSIYNWOGCEYKQZUDBHFGRTFMLYBATMWOBUEQZGGCUAPFLXID");
    msg.last_error_time = 0.5849503892479971;

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
    msg.setTimeStamp(0.8157371113474073);
    msg.setSource(47632U);
    msg.setSourceEntity(95U);
    msg.setDestination(45685U);
    msg.setDestinationEntity(91U);
    msg.mcount = 54U;
    msg.mnames.assign("ULDLNXLHPWODNCYKILMAUBLZKZEXLRWQQHQOAQUWRSXZAJKTRFJUJDQRPYROMSUBTNEOEYBGXVGSEPPVTMCEPSE");
    msg.ecount = 84U;
    msg.enames.assign("OABVAQRRRWHFGZELZUHGANIIJFTVELOEIQRQPHYMZQNVRKMWFJUKOWPZDIONMKGGICSVYCXYMZSRHCQDNASDYSQXCKWNTAIITHVBFXAUMZPXQBCQJGJQCVELBHPWW");
    msg.ccount = 65U;
    msg.cnames.assign("VVAZKNKNTBRREMGMXBYFBXISPIQACADWDHRQPOLJFQYVMBNEDPPMUIALPOUJPAOXLBTXTIIZFUYXVLHDTTASIZTLORTNSZJODEDKINPYYKKUHWURVMHBOQSJAMDODBUVWRSRQGXGFIHMPPBCAFGRYYLKSTZTWHEBCH");
    msg.last_error.assign("DWKLBZJRORUZVPAFDOFMSDNGURXMNGHUVQKLZDKGZOVZLCETXPYFHKYYXVTCKBKGIOTQBSUEHNJDYDCHJHIEYSCYIQXMGLFRCYDSSHPAORTOIVOQAMWCQQJPPGMJYJEKKJBHLESHHITFTFXBQYZBAANOGAKSWIWGN");
    msg.last_error_time = 0.21385304228145174;

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
    msg.setTimeStamp(0.09286062382886084);
    msg.setSource(54489U);
    msg.setSourceEntity(201U);
    msg.setDestination(64815U);
    msg.setDestinationEntity(19U);
    msg.mcount = 171U;
    msg.mnames.assign("PKZPEOELLHXQTLYQUNJOVCUUEBGHKBWSOPITVNSPIOSZNMGOJUYZFQSXIUGIYBPMFICKOBGPGAWQWADMMRNDWHMIDNYKQMOFVYBOIJNRQJZYDSRAITATEXGCSAAXDFYIUNWITSWQAZKPZCLEBSRGEJSXMFHXTVHQBBEGJXRRDHKKVWMGWVDJWNMMFEKDRHLAVRSVLLPFUCKJBCPFAVQZCJNTL");
    msg.ecount = 237U;
    msg.enames.assign("CRHDOHUHTOLZBPSYVENXOWMVNIAJFCEUKDQGRKZNCMCZOEAEFAXYVGIUOVGTELXNPVJPQID");
    msg.ccount = 21U;
    msg.cnames.assign("VAZBSYAUWIUBMTBCJNPIDNMJQKOYLTTRBKMMIOJUADEYAXHLFAGXBZWKJHYFFGZXJ");
    msg.last_error.assign("SRULZICZDXTMFACHKQXPYFRDBGBIMGVGSJRWOFODGKXRZJNCBIRBNDHINHCSTSQBVUUUOAYEMWUIKAHHFSJAQTCJVEJTVSMAGPN");
    msg.last_error_time = 0.2623880574272184;

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
    msg.setTimeStamp(0.37962870850495223);
    msg.setSource(34793U);
    msg.setSourceEntity(114U);
    msg.setDestination(26197U);
    msg.setDestinationEntity(140U);
    msg.mask = 173U;
    msg.max_depth = 0.8691712236686335;
    msg.min_altitude = 0.5240370440060219;
    msg.max_altitude = 0.28537335858559043;
    msg.min_speed = 0.3036978197774619;
    msg.max_speed = 0.4770404596444684;
    msg.max_vrate = 0.8655172963824801;
    msg.lat = 0.9103437033178315;
    msg.lon = 0.1756977734251648;
    msg.orientation = 0.3105630318402768;
    msg.width = 0.49028942329026903;
    msg.length = 0.22801125766528918;

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
    msg.setTimeStamp(0.08427566055561109);
    msg.setSource(56223U);
    msg.setSourceEntity(19U);
    msg.setDestination(48809U);
    msg.setDestinationEntity(149U);
    msg.mask = 162U;
    msg.max_depth = 0.5096659131488481;
    msg.min_altitude = 0.5029511955961715;
    msg.max_altitude = 0.33798271779267575;
    msg.min_speed = 0.920568072627365;
    msg.max_speed = 0.3561878667970283;
    msg.max_vrate = 0.4561356930622451;
    msg.lat = 0.04748562622647434;
    msg.lon = 0.08168470015537943;
    msg.orientation = 0.4298699013714927;
    msg.width = 0.48817517186429227;
    msg.length = 0.38939338931828427;

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
    msg.setTimeStamp(0.7409237476352407);
    msg.setSource(19746U);
    msg.setSourceEntity(183U);
    msg.setDestination(57939U);
    msg.setDestinationEntity(152U);
    msg.mask = 151U;
    msg.max_depth = 0.8697186987531311;
    msg.min_altitude = 0.8069400297604395;
    msg.max_altitude = 0.5624269749799744;
    msg.min_speed = 0.9814636586355373;
    msg.max_speed = 0.41034433235764;
    msg.max_vrate = 0.7150537283936802;
    msg.lat = 0.2400335021719564;
    msg.lon = 0.5106166711438136;
    msg.orientation = 0.7765724967960572;
    msg.width = 0.8324888530143413;
    msg.length = 0.45556379650892975;

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
    msg.setTimeStamp(0.7823234622406965);
    msg.setSource(39019U);
    msg.setSourceEntity(173U);
    msg.setDestination(36654U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.36182675738557024);
    msg.setSource(13907U);
    msg.setSourceEntity(36U);
    msg.setDestination(43625U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.1872050982057354);
    msg.setSource(39324U);
    msg.setSourceEntity(173U);
    msg.setDestination(34277U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.9186242941581697);
    msg.setSource(34844U);
    msg.setSourceEntity(246U);
    msg.setDestination(20130U);
    msg.setDestinationEntity(55U);
    msg.duration = 9736U;

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
    msg.setTimeStamp(0.8407053431819705);
    msg.setSource(21989U);
    msg.setSourceEntity(138U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(180U);
    msg.duration = 34087U;

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
    msg.setTimeStamp(0.5863805933115782);
    msg.setSource(36906U);
    msg.setSourceEntity(96U);
    msg.setDestination(31132U);
    msg.setDestinationEntity(92U);
    msg.duration = 2943U;

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
    msg.setTimeStamp(0.5578784862403093);
    msg.setSource(44230U);
    msg.setSourceEntity(222U);
    msg.setDestination(14205U);
    msg.setDestinationEntity(213U);
    msg.enable = 78U;
    msg.mask = 1024011252U;
    msg.scope_ref = 3975511355U;

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
    msg.setTimeStamp(0.20528383915305348);
    msg.setSource(3553U);
    msg.setSourceEntity(112U);
    msg.setDestination(11155U);
    msg.setDestinationEntity(76U);
    msg.enable = 66U;
    msg.mask = 4082807249U;
    msg.scope_ref = 1705398572U;

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
    msg.setTimeStamp(0.005656321596189784);
    msg.setSource(13132U);
    msg.setSourceEntity(144U);
    msg.setDestination(30617U);
    msg.setDestinationEntity(113U);
    msg.enable = 98U;
    msg.mask = 86207608U;
    msg.scope_ref = 3838095312U;

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
    msg.setTimeStamp(0.3037754530002851);
    msg.setSource(38989U);
    msg.setSourceEntity(123U);
    msg.setDestination(16398U);
    msg.setDestinationEntity(199U);
    msg.medium = 60U;

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
    msg.setTimeStamp(0.9767202815616672);
    msg.setSource(57613U);
    msg.setSourceEntity(170U);
    msg.setDestination(54189U);
    msg.setDestinationEntity(51U);
    msg.medium = 222U;

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
    msg.setTimeStamp(0.3447850043972214);
    msg.setSource(16781U);
    msg.setSourceEntity(30U);
    msg.setDestination(15239U);
    msg.setDestinationEntity(170U);
    msg.medium = 211U;

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
    msg.setTimeStamp(0.5555447717373033);
    msg.setSource(2715U);
    msg.setSourceEntity(13U);
    msg.setDestination(10952U);
    msg.setDestinationEntity(101U);
    msg.value = 0.41676333046090563;
    msg.type = 38U;

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
    msg.setTimeStamp(0.07352429670823024);
    msg.setSource(42050U);
    msg.setSourceEntity(104U);
    msg.setDestination(15806U);
    msg.setDestinationEntity(56U);
    msg.value = 0.22657897115534664;
    msg.type = 109U;

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
    msg.setTimeStamp(0.6561806067370622);
    msg.setSource(56293U);
    msg.setSourceEntity(18U);
    msg.setDestination(23583U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9070998513330045;
    msg.type = 34U;

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
    msg.setTimeStamp(0.27842005272572845);
    msg.setSource(20373U);
    msg.setSourceEntity(182U);
    msg.setDestination(15964U);
    msg.setDestinationEntity(161U);
    msg.possimerr = 0.6875685253447033;
    msg.converg = 0.9686786880465326;
    msg.turbulence = 0.8887190035559547;
    msg.possimmon = 206U;
    msg.commmon = 128U;
    msg.convergmon = 231U;

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
    msg.setTimeStamp(0.9648164118832157);
    msg.setSource(3189U);
    msg.setSourceEntity(27U);
    msg.setDestination(14793U);
    msg.setDestinationEntity(25U);
    msg.possimerr = 0.4759176486198414;
    msg.converg = 0.25092775664760647;
    msg.turbulence = 0.8240019369284889;
    msg.possimmon = 39U;
    msg.commmon = 57U;
    msg.convergmon = 21U;

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
    msg.setTimeStamp(0.08975444033142177);
    msg.setSource(55096U);
    msg.setSourceEntity(66U);
    msg.setDestination(47291U);
    msg.setDestinationEntity(172U);
    msg.possimerr = 0.5314589076159572;
    msg.converg = 0.979170362895872;
    msg.turbulence = 0.49714323341485467;
    msg.possimmon = 248U;
    msg.commmon = 159U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.15770170756505608);
    msg.setSource(4068U);
    msg.setSourceEntity(174U);
    msg.setDestination(53020U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.6694374687974218);
    msg.setSource(47293U);
    msg.setSourceEntity(181U);
    msg.setDestination(28618U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.1305514696457124);
    msg.setSource(63250U);
    msg.setSourceEntity(103U);
    msg.setDestination(46145U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.4465958613899278);
    msg.setSource(46186U);
    msg.setSourceEntity(185U);
    msg.setDestination(39308U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("MTAQLGIYAMVHZEZYVGUPVZHWWIXKLLRTRLZRKRMOCBYJJZHNTKYRBGSXPIQMEHTGPMPODUVNDGXBLYBWATD");
    msg.description.assign("NUEYBRVVYGHXJDQZHTMGOSLBJPVDWRGYCAALNNCGIXPSWQRUXLXFGKSNTJQZBVDJEEZRCCNSPBXOAOCVTJHHFOVUSFQHHACEGIONLMQBNKDKRWLKUTYPAVJIRWAMRLULCDET");
    msg.vnamespace.assign("NGNZSYLGOGKMPYJRZWEHFFOKUAPXBHFBSOVJKZMFKINAPMIXXEJMUQBBXLRCFFHLHQSOCXICODJDVAHAARCHQKVMHUZWDJBDEYVJXLAVRPGVYEQAIISGWDNJXOOAJREKIFGMEQSNWVHBDLKYGRQINCLCKYWRMTPYBPNHVUQDQEPTZBNCTFRTEYIVSJQZPTEIUBYSNMZXDHBKJXDULZZKTYSTFTQWUMOPLSTMGWNWRARWUILVC");
    msg.start_man_id.assign("TWURNCJTCZXBAVZMWKYAVVXVHOZUTEZXTJOJHYJXDRZESUYAGKGPQNNQSIYHYWWGLSBIHYEJJNDKPOHUHBLHDFQPKTOOILIYMORIEUGSTXOFUTQYRQVPFAPDGEWMCAOPQJQMCDVPZMLDZMCHICNKMGNLIQLPOTGKFQRKFLT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DXJCKGKSRUAEOUIYCHDWXOVHIGUILBLSLWIBVBLQTDZRHEQKUAVJMKLUYDCCQTUCWBFLSYIRTQEHFORMXVUZKFDJZDSKGSXGQLBMMEVOLZRENAFAXOEXNHPFFWGHCKLTZUPOHBMIYXGQWO");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("EBFXFGOEXKKQETFVLEKPILFMMWXUUNRZCIZSMTBMISXEEHHBBETPZIJWYOYHSRGQOANNYUKJYWSZGSOKNQOZHVQVUALZHNANEQCHWZKDPQBLVPVFKSOHRJHXZPZGTUYHRTNWJIALXBMQGODJTYSJVAPQCDEAWFERWCXCFMGRULFBSRYKWYNCXLPMDVIQPIKCPUSVXXJUJTDNOVCGFTUKJVDWCLBTMO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("LJJCHUUJXIIRMXVRLYEHGWNHVWLLTFTGBURQHWOMRYLGPWPFPSVSQQPQOFHGMDDSBWBMECUUSMZTQVPOCBQLAESDSQYRADRJKZMKEALSRCCHNUGWRMFCIXPEZTTAUZZBHMWBYTBOIFATMKQBGAFNNJXPISOKVIULXDEXDNCKKHAYPXJCVAZEYWTDPENLOIKSVDOEBVKHAKUHZJOFYNCIRWTCUAQPEXDOSYVKQZJFBFWIJMVNZLFGRD");
    tmp_msg_1.dest_man.assign("LBHYIBZKLTUSVPNEVTYXUFCARLBEJGIBXVDNUHDTQEBCADEAUUNNMTDENGBTXJJNLWAEKSHFSSMDULUWKZAXHGHNMYPZWVCFRIPMKYSIOQBRVKWJZXQJHCYPPFCJPILFVXDHFECBMILGSLIWQDNGYJUGTCRSITYAXNEZZRUVZLMEOWQKGMOMQAQHOGZSRDTEHVJPDZXTQKUAOXWNRTWYQKAMDWMYRSCZIOWFOOFPPRGVBVJQGAHR");
    tmp_msg_1.conditions.assign("SIARJSFACIIDLDTTXTZECPOKSKQHFBLUDRGWSOQBAEYQVXGHBXIEHSECVCLWMUSHMZXUVUEPPEWZVLOSPXRRQTKXZFUOICVFIDUJUFJBQYRCGTANGKEYCSBLEQGUQGWYVRFMDAVIHPTYDHRPIQKHZPKZJWFSBGLATJYXOJENFXNFMREDDJ");
    IMC::GroundVelocity tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.validity = 197U;
    tmp_tmp_msg_1_0.x = 0.4269888243419001;
    tmp_tmp_msg_1_0.y = 0.5081019761555091;
    tmp_tmp_msg_1_0.z = 0.21035318093922095;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::FormCtrlParam tmp_msg_2;
    tmp_msg_2.action = 118U;
    tmp_msg_2.longain = 3970539538U;
    tmp_msg_2.latgain = 2339538845U;
    tmp_msg_2.bondthick = 1552605643U;
    tmp_msg_2.leadgain = 3168091637U;
    tmp_msg_2.deconflgain = 2340259614U;
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
    msg.setTimeStamp(0.8850560077717834);
    msg.setSource(46566U);
    msg.setSourceEntity(130U);
    msg.setDestination(52585U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("QUBEDQAIWLYBRSRHTGULTFLSWDYXUORGLQINKVXRBCEDZNVCPLXFJFQPINFRYSVTOITIPDZHRMRYYUGXOAHSED");
    msg.description.assign("ALLOUKHPIPOVGBJBLZEPAKOTSXDXUIAKWGXZEQJLSYLGQBPAINNRPKIFMPHYUJEOQLSXVTENTFRCOVSGJEMKHCKRYAHPZQLMVZUBGRFXDUWEUHRONHXRLFUYCGHXRBSEVWDMWYQGTTCZJBYQWMFGFHJXHOULUCFTOUROBDVRSEFFMKPQDJTSADMMYVDNJCSNTKZQJWOYSVKLNPPBXDCGFBZZIA");
    msg.vnamespace.assign("GABSJJMNJPHRXWAUDOXKLPNKSWFYLEZTARWWBCEFSGNWDNCREIJHEROZVBPCADBUIIXDRXDTXNNRUYDQJSYRTZLVZXFZMEHBGYOYQIASANFBRQU");
    msg.start_man_id.assign("ZPPWHVYIRAVMTEFBNJSKONK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HSRFADLMVQNXMKHKLUGLPWEOHGFZXVYVNKUTRZUNLXTVUDGPWUCJDUKBKSBFFATGCUNSDMNVILPBHZNOROWAMHIHQLGCEYNRGIZNJKJCWDQSODFOMETNIQJMJFOTHWTXEFRCYWRZAYRYBERKSXYLACPKD");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 19394U;
    tmp_tmp_msg_0_0.lat = 0.7288519764974466;
    tmp_tmp_msg_0_0.lon = 0.17391537648083022;
    tmp_tmp_msg_0_0.z = 0.356889089995312;
    tmp_tmp_msg_0_0.z_units = 84U;
    tmp_tmp_msg_0_0.speed = 0.49916359893910045;
    tmp_tmp_msg_0_0.speed_units = 194U;
    tmp_tmp_msg_0_0.custom.assign("ZFGKDULILKZMCCCUVITPAKRSMOAXDCDFRNRBSJFZADZLDEFAAIVOTXGKWYWJDWZWWOZBLAUYXSSZVMVFUTWTKRYPHQGVEOUZHCRFIGMLTQNHSPQOKYBPPJLOOWUNVFQYUINOEBKDJHFFGTXXWJCVDMGEJNGYQSKLPYIPWEKIMSFRHIJXYLJLYMANIGMDBIURCZONXCRNHTRYJAHBTWKEQAEEQHVUAPVPMGJLBXTCSURXNBH");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Goto tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 59964U;
    tmp_tmp_msg_0_1.lat = 0.09595408648907455;
    tmp_tmp_msg_0_1.lon = 0.40505459281916956;
    tmp_tmp_msg_0_1.z = 0.13787238691396464;
    tmp_tmp_msg_0_1.z_units = 89U;
    tmp_tmp_msg_0_1.speed = 0.9203080089565637;
    tmp_tmp_msg_0_1.speed_units = 146U;
    tmp_tmp_msg_0_1.roll = 0.5190041837414208;
    tmp_tmp_msg_0_1.pitch = 0.25387103013177104;
    tmp_tmp_msg_0_1.yaw = 0.48179352261386066;
    tmp_tmp_msg_0_1.custom.assign("KDMSPCOTGEDDEFDCSZZBITHMXGFTJ");
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
    msg.setTimeStamp(0.5992350849528261);
    msg.setSource(55175U);
    msg.setSourceEntity(194U);
    msg.setDestination(15322U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("QSVIWAPUQTMWZPINVKTEORFWHNAGRPHLSRTYRIDIFDKYFWMGWLUERPNVIKXJXXVTEVYEGANRWFLZUBSDMTMJCYVGNAPKOBAUECDMOUPPOWRPZJUDUNWJCFRCOSPCHVHBOQMXNZOBMQVTNQYIOSZLHXVI");
    msg.description.assign("LFTQABKRSOTZMPGCYFDNHSIYDWSEZHEMONXITKLVDNCTKYADOXQQGNYRDWSFCPLBFULHWKFUIYWLCMRFJZCOJAWIUWWJBPPLVCGRUFQBWLXGZFVVNSDHQRBPCKJFQZHPRDKXGRTTIBCESDGMJXBNOYKNBCXQEXKZRAGIVYTTANHVZIOYTRHISFMEKDGANOONSMUYWUMXUAQVXPEMGKEVPMTESDWAZHLZABJQUOVGVAIRPPJJIJCQULM");
    msg.vnamespace.assign("SVQWVKMMHDVPEKBOXLIFRHEDCWELSAYRJZRPLVCJHMVFISRWBEYQJJTIFVRWWZYJHJUGYZNIWRCOMNDDYUQZPFLPMNZWKJOZKLBSVNKQUSOBAUOUCXDBGKNXTMWBATPHDTNSXVMIPQF");
    msg.start_man_id.assign("DPEBAHCCUMKKXSWVYPBCHVQJAXZUWZQEKUBFDYDYMDYSSPNIYLUXTBLDDJPOKSEVNMFPVVXGBWHVCPULQOHXXIQVFHKZFWMCGIMWD");
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 114U;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.07966868995358856);
    msg.setSource(37491U);
    msg.setSourceEntity(6U);
    msg.setDestination(31353U);
    msg.setDestinationEntity(253U);
    msg.maneuver_id.assign("OTSYWMGFGXWSQXDUVNQUSFTJLUQKHGTNRPVRMLXELJE");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("UBYTDIKULHCJINSPYCGKUKMTBTSKGVMNFVOQAQGGWJEZVSWMESZBAJPSCYZJWGXLARUELZTCPFDOVLPRXRSVKYCCIJUFOJNEMROQRGXVTPYW");
    tmp_msg_0.reference_frame = 115U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 37738U;
    tmp_tmp_msg_0_0.off_x = 0.4160220279824184;
    tmp_tmp_msg_0_0.off_y = 0.49591927252053547;
    tmp_tmp_msg_0_0.off_z = 0.062469299768861286;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("EANHBWCVIFSKDGXQFJHTSNMTBSXWQKFJKEQMFXDRLKKCZUTVMYQTCLHWLNMOZOORKBWLTZHWCJ");
    msg.data.set(tmp_msg_0);
    IMC::AcousticNoise tmp_msg_1;
    tmp_msg_1.summary = 230U;
    tmp_msg_1.level = 16U;
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
    msg.setTimeStamp(0.6695491780981239);
    msg.setSource(21423U);
    msg.setSourceEntity(96U);
    msg.setDestination(60167U);
    msg.setDestinationEntity(15U);
    msg.maneuver_id.assign("DMMHGSACHKVALGYAWEUGZHHTMMUHXBPMEPYUUKCIEPIHHNUFXDLVSNJQTLLIQG");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 23505U;
    tmp_msg_0.name.assign("JKDZDIZWEMNEMJHVGGJGUACSTNXOK");
    tmp_msg_0.custom.assign("TUUKAIIEYIADBBDAONUESCRVRLAKXDQMWRPPPOUFXLTDOKOCFVZBYEOJSMFODOQEBNVPZSKCKEGGSXNPNEZTLWSWZWTUKFAQXVBHDPJVCM");
    msg.data.set(tmp_msg_0);
    IMC::EstimatedState tmp_msg_1;
    tmp_msg_1.lat = 0.7255628781717562;
    tmp_msg_1.lon = 0.14616587822029603;
    tmp_msg_1.height = 0.8765876370506115;
    tmp_msg_1.x = 0.7625316516235077;
    tmp_msg_1.y = 0.32348129060874764;
    tmp_msg_1.z = 0.555920816582171;
    tmp_msg_1.phi = 0.909338210049294;
    tmp_msg_1.theta = 0.9027474213734555;
    tmp_msg_1.psi = 0.8005064211365399;
    tmp_msg_1.u = 0.5229868317377402;
    tmp_msg_1.v = 0.9182283669989015;
    tmp_msg_1.w = 0.7635777327366265;
    tmp_msg_1.vx = 0.8298938108197815;
    tmp_msg_1.vy = 0.25809736385668336;
    tmp_msg_1.vz = 0.08536555925756661;
    tmp_msg_1.p = 0.46031321594713215;
    tmp_msg_1.q = 0.26048450248794375;
    tmp_msg_1.r = 0.49373204807167537;
    tmp_msg_1.depth = 0.16226939267621643;
    tmp_msg_1.alt = 0.5008579194135746;
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
    msg.setTimeStamp(0.16476910946385948);
    msg.setSource(54613U);
    msg.setSourceEntity(164U);
    msg.setDestination(49562U);
    msg.setDestinationEntity(185U);
    msg.maneuver_id.assign("NRJHTROMBVQBQMORBPNSEBCPAGAOENGNECGZCASSRLYEOUKXZTGACSXJOXZBZTRKBFMUNPJHZUQWAUFVFMITNEATCEZGKXWMTITDJ");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("QVAUCAIMXZDHBXLTQOCOCCXGBUJOULFZOLZPAWFQZYVQKSRGJNYXTAYKTUZWVEUVWPWAXNMLVMCNQRPPRCKMOMIRADGVBDBDMHHECAEOQSCHYEFZVAKRJCXEEMUHTPHYGHRYGOFBFQTEVDXWLDLAININXSPBRDXFLLBMYJZKNFSSFKQZWAJOHOWZOIPPWGURIJVLTSKHGYFEKYMGNRWPJKGTUBDBPJSNIJUKYRJICUDQ");
    tmp_msg_0.reference_frame = 164U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 855U;
    tmp_tmp_msg_0_0.off_x = 0.15195068239783593;
    tmp_tmp_msg_0_0.off_y = 0.22539942796501966;
    tmp_tmp_msg_0_0.off_z = 0.9162989926749597;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("APYGRXWCTQHQYY");
    msg.data.set(tmp_msg_0);
    IMC::CpuUsage tmp_msg_1;
    tmp_msg_1.value = 152U;
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
    msg.setTimeStamp(0.15837493778492606);
    msg.setSource(61453U);
    msg.setSourceEntity(225U);
    msg.setDestination(13609U);
    msg.setDestinationEntity(141U);
    msg.source_man.assign("MLSWRKBLGODITGJVZXIJZIYTLPTNLZMIWUXRNHEONGSZCKWXQGSEENPQMBYWOIGFAWGWYKMVVQGZIVKRXQYDROWHFUMSTVNONBRVQFUKFNTYAEVXLDOJHCOLTPQDSHALURBCB");
    msg.dest_man.assign("TSSIQZKIIYRABRGEAOVCXFOMFL");
    msg.conditions.assign("IMKSETOUOFCCLIYKWQAUPPUZDFCZPCFVYIJUMRSNWJMHVLPCNREYXXATJWUCTEKTMFNRIOAODOEYYWO");

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
    msg.setTimeStamp(0.7052348480729486);
    msg.setSource(23634U);
    msg.setSourceEntity(55U);
    msg.setDestination(47572U);
    msg.setDestinationEntity(195U);
    msg.source_man.assign("IGRMMWKLRMOJHSAKLJIXKGCVCNSXPFNZLUJEICAHJADPTYYMBWPWWFZNEMRQURIAVSCCPQKOZBVTVQRKTFBRXMGHVAGIOIAWCUIBNYNZH");
    msg.dest_man.assign("QTHFFERIJNUFGJBHACSUMFEKDOLNYRWQUQVKUCLNLUDSAWPLDHSBUHROIKGYEAMIRSSDQSCFZGXZIJKCXVEYSYUDSEQTAXXCNOXSDXKIOIGZDFKDHBJHBMOXLUZJWFTRVYFQOOLTYNBEWCJVCWTOEMAWKWAG");
    msg.conditions.assign("TBEJBPREXVNOJXGWXWCEAKGGZSLSBDRCAKMAROZDQMMAPQHJKZGVFRTYSIUVSDIMHEWFPNGPEIWCLPJLJPZZWYFWUINBLSOBTHQHIAOLVFKVUXXTTRCQAFIHIFGTTANESYWFJUFJGQVMPSGNLODBDGYUPDYAURVV");

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
    msg.setTimeStamp(0.16924062330269296);
    msg.setSource(51379U);
    msg.setSourceEntity(109U);
    msg.setDestination(1324U);
    msg.setDestinationEntity(233U);
    msg.source_man.assign("VBVHJCOWUADVUOBERJUGPOKSUTXFNYVG");
    msg.dest_man.assign("KSBQJWFHWVVDBEALLESAYHFFDSWCSXXFYIQP");
    msg.conditions.assign("WKKSHMNXKOAUCCQZKRMLHBAUZWGDYJAZSRNTIEQJGALAGPAGIEWTREPFMQNSFZUBFZUJTTOOFNJAALMPEMQBKHXMYRXQXYKIVGTYCDRSNZRIYSBELSPFDXXCHGWRUNGWJKLPWHHYKSVYZQMASWBGOHXFYCOUEDPJPZTVROULNDIRORZOIKJLYDEMSVWJBNVFDJDEIVOPPCVUFA");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 195U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.43258044867568146;
    tmp_tmp_msg_0_0.speed_units = 51U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4517991909655734;
    tmp_tmp_msg_0_1.z_units = 91U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.35613599896561776;
    tmp_msg_0.lon = 0.4820761168609289;
    tmp_msg_0.radius = 0.7960521891947981;
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
    msg.setTimeStamp(0.5286106530402191);
    msg.setSource(24905U);
    msg.setSourceEntity(242U);
    msg.setDestination(3013U);
    msg.setDestinationEntity(154U);
    msg.command = 208U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HLZCBCSXOPGTJVODRTIKUTNEVBEPJJUFAASLPNLWSOOSDXUAXCWFWIUYSZAYHERLCFIKKATRMIBBIKUJYAQHRFJKORMNQXQLEUTWVPQJKZXRBUWBEHSVSVADGFUJOTVPIDANZITYDGBHQBTHJGYMNMEPWP");
    tmp_msg_0.description.assign("FNAUMFAMQMLQAEOSKSXIIDUDZRQYDSUINVVIPUOIAYFVQPUDQPDUUJWTUUFVHWQANOCZTPIMEYIZCKVTGKLOKBZEIWHJPXNSJFGKKTERHSNWGEFJWERMZACNTLBSRXRCILHBQTFMDHTXKHGLRGEEC");
    tmp_msg_0.vnamespace.assign("JFIIGPVRAFKLXXMAUKUIWGNKAYMHTTZICSVNTMAGRCDYCVPHBPWUDBBFQHWPSOMZVUBPGCGBAYYLVBRXCDUTERTHZHOQHBMRKQYOHLJAKZBZTZCMUHKNXLPXNVQCLMDEQFAFIVJPCUFEJFWMMGPSMWRVDXWYBOSSZQGGK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PBLFMSXPNHBBCYHHGQUYNNXJZOSXQFJRIWSLXIZYPUEWHHJDXOPXECFOSAAZQWRKYBQVFYQCHBRKASTVHWLZKQFLIBNXUDEGZPYTVHFVGOGLVXJVAODGEJZBBAUKAKTBJNNBQNZIYRMDTRIHZYUIT");
    tmp_tmp_msg_0_0.value.assign("INPONSKCBUUSIHRLPLPMQRPRANEXTZZXOTQRFWKXLBBMHFDGXNSIMRHMSXAVH");
    tmp_tmp_msg_0_0.type = 99U;
    tmp_tmp_msg_0_0.access = 193U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HKZNSBGJAXVCECWJYGIEYCPLVEZQOFZWNLDOTPLAYJNHXLPYUCZJIOVFWQRHNDBFKEDRVCYPOIWXCBOLJYDRLFSYWRXVMMHUFGIFPGQKWZFNALFAQTEISVUDMRQTIUWBDKVKZWQEROSDEMZJKTSTQPPLIJPSFGSHUAKBMPSUAAXUHICOUEKBNRHTMWKYNGZXGVORSUINAFLMCPMWTXZQJOVXGDRNJKBDABNZE");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DQHPDPQYZAKMTYPLGPVSYJRLEIATINJOSSUHWIHZOEXRGMBJIPJJTCBTNMWOJRWVMGWKRYHTFOAGXHFDBADQCFPVBXAZIEXUZBS");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.6402693829526174;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z_units = 148U;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 55996U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("FGZWQEPNCZKXNLIXFJOHEWJJGZSXYLNRXVFUCHKOSWVBIAKAPDKBRHIXGHTHUQHOFGXMLWRCTSGIKLDMQXPBSPBYUGWLHUWDISES");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SetServoPosition tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id = 65U;
    tmp_tmp_tmp_msg_0_1_1.value = 0.3254550734794699;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::ReplayControl tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.op = 250U;
    tmp_tmp_tmp_msg_0_1_2.file.assign("PDGTSHBRBTBZLUCTQPAGSIUHMDSPOQEKRRMFZHQWW");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleFormation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.21944928001615382;
    tmp_tmp_msg_0_2.lon = 0.7608758627473132;
    tmp_tmp_msg_0_2.z = 0.0686757180269475;
    tmp_tmp_msg_0_2.z_units = 120U;
    tmp_tmp_msg_0_2.speed = 0.48185199122479627;
    tmp_tmp_msg_0_2.speed_units = 8U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.vid = 22165U;
    tmp_tmp_tmp_msg_0_2_0.off_x = 0.10356780430398727;
    tmp_tmp_tmp_msg_0_2_0.off_y = 0.09454771613645352;
    tmp_tmp_tmp_msg_0_2_0.off_z = 0.6558684262381942;
    tmp_tmp_msg_0_2.participants.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.start_time = 0.01399273442942528;
    tmp_tmp_msg_0_2.custom.assign("WSARXMAWZZDWPVTEJTCYBOCGZFETWSMOYUVBSNWGIXXGFIBXBVXGIBHOT");
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
    msg.setTimeStamp(0.29891401788029004);
    msg.setSource(6249U);
    msg.setSourceEntity(122U);
    msg.setDestination(19942U);
    msg.setDestinationEntity(70U);
    msg.command = 104U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DIMZFFLXMLYKXFBQJUPSLBPATWYLPZAGCLZAWCZOGTLFVNQXVBSPGOEHVBQZASICRJMCKJUTWQML");
    tmp_msg_0.description.assign("XMQWPXAXAARRYCCVQIWLETZQCTXJQNKIFRVNXSKLFLLHKEOXPHOZVUHUUQHDIVPFZEGMRBUIBJCPGPMFKRCCGYBEXXAWTQPLNZECPKHYNTWIFEVYQVGETJBGVMUKBKBSDNWQDZTIMAPKCYHTOJIOJCVSADEVUWWLFKTHYMICFMPNQSSOODGTNYIFRHRJYZKOBIHDSRTBDSGFABGEJMVUWDWXNOSAYMNRG");
    tmp_msg_0.vnamespace.assign("YORAVQSCEVLHWRWKPTKHPQLYAHIQEBPZZXFHJXLBPKCWUGHBXQCLLKHBPDNLAGDEQEWAOJMPIJZISYFNTZDRNHXUOKYTNFZBLTYHSWPBLAZOSDGZVUFEKBBHTDNJEOXMMYEMAYMRKDJU");
    tmp_msg_0.start_man_id.assign("IGXHKSPEZECZOWIVBQWXUCAGBZGKDVDCFOIQRHIUEDCNOFJSJLYNJN");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("DQYUFENAZCTLAUXYVEWXBXRWCWZPJVOWJFYSKRIDRABGQLYWTDUBIESWHZQGCARZMLCNYBMTFKOSSYUIVOSQITRGJPKABIVMZGNPASTTYADQJEKBSXIPQQCFVWLNHUCZMHUHTLEZGUMXCNSVICMJGDZKFDVTICXGSXADFWXNYEJMVIORRGZBULGHKMYFNKBPWRAUSVJNLEXKVOHKLICG");
    tmp_tmp_msg_0_0.dest_man.assign("ITHMJNXGZLSZMARSXGUMTJN");
    tmp_tmp_msg_0_0.conditions.assign("EFEWQDNFHVXZFSIFNEIAQXSPCDCQDVYPJBBWURYZPUNIORFEERGGGSWWKWZWNBTMRJFZMUVNRUPTTXOGBIFJRIPXTVHALPLCYUBGHKYGEVUMQYAKZIBLRDAMNXKLOTFGGADPTFISMJDIYWVACHLNXPHTXSQSMZPPKJFDXQOMHCXQYVOEMWQSTLGSKRXWKNUQRYAKUBLIUBHBDMHAECSLAJZGOJTCOMZUKHQVJENKBEDCLYRCOYZTOLSADHZNV");
    IMC::AcousticSystemsQuery tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::StorageUsage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.available = 2554383508U;
    tmp_tmp_msg_0_1.value = 79U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::IndicatedSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.6622279473622699;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.37103851687562095);
    msg.setSource(539U);
    msg.setSourceEntity(213U);
    msg.setDestination(45294U);
    msg.setDestinationEntity(32U);
    msg.command = 60U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YWWCYBBCEFFDWDMOKTOIVWABKROVPEWQYDTSLVWPTGVTMACGAUIKXIZQGVMMTHVFXYIWZNJCRYUVGLFFIGXBRDKODHCJOAPNDBHQJENIUFTPKEDOFMXICNZFAAJCNANKUBIEHFHNYEQGMSJYXTETWKXWXUZZIQDJSKLZWIQPCJYRBHGXDQCNDSYGLOUHJMLPZZQERO");
    tmp_msg_0.description.assign("FIXGVRRQKLZPPSWUQLNCTLVEHHAYYWAKZEJJYQIIWQVBHPNFZWTXARZSWFEOOADYFDJEKJXNSLMGRNMGVROJJUTKSREZXKMGVYNBLFZEUKBSZSWCOHGDBZFUBICOMBGNVJIAKCALPFMFFBRUKUOCDHCXULINVLSMOTVZ");
    tmp_msg_0.vnamespace.assign("FDCZAQKWKULIYUNJQIIFUACSZZRKXPGVTVV");
    tmp_msg_0.start_man_id.assign("YHLOLVUHHAJFVBULJOIDBDUHUUEJFMWQTUQROJZFELICHDCMGPQMBFYHAQKXCTGEQTWZRZPJDRQG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FRIBEWHWXXDTEVHQFJNVKTYISEZRVBCKHNAPPTAOGDQNABXUXLBRPGPFWFAIXAXDAGJHRFOBENGKIPUUKBHJDTYPFDESJPOMNSUDSONOMIJQDNRFIGCUXZVRIJTXJLHSRDCYDJSBMNLGGZQYXQMJLCUOTAPNALYYGWMULBEHYVYZVMQQBZZSOLBUELMPSWDVCQEHIGREKJEOSCHUWZPNTORTOZLKRKIICFWQAKGYLFKTSZFWMZK");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4070388311777584;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5351804931378928;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7604805778379176;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 102U;
    tmp_tmp_tmp_msg_0_0_0.duration = 59213U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 54511U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 18340U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.6144787126387649;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityActivationState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 206U;
    tmp_tmp_tmp_msg_0_0_1.error.assign("TPXWSEYVPCUHQQRESUPWIJMAFPYQFOWHCYMAKAXKSOMXENGUGPBGDUQKWHSOC");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
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
    msg.setTimeStamp(0.8017765482512705);
    msg.setSource(16220U);
    msg.setSourceEntity(29U);
    msg.setDestination(15988U);
    msg.setDestinationEntity(243U);
    msg.state = 178U;
    msg.plan_id.assign("CUMVCHJWZDLSQAUTLZOFJ");
    msg.comm_level = 118U;

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
    msg.setTimeStamp(0.6164210891055593);
    msg.setSource(13401U);
    msg.setSourceEntity(58U);
    msg.setDestination(56285U);
    msg.setDestinationEntity(58U);
    msg.state = 121U;
    msg.plan_id.assign("BHACSRLJTIUHTVQASOYQMBKYZRETNYQMXYITJUXQQFTSZGKJPIELXODOCUWAPENMHCJLSKVABLAPCKNCNXJIFQZHYDMKZBLREPUIHWGCYGAEMEKRWFMAZSDZGTNUNVSFRXLIQOVERMZMWDNGUJIZVRWDDPZHVGMOTNIJPARGUSNDVLOPAVTHVHEEQFWUFYWXWFLKPFBDTUDLLFRSXRFSPMYJNWWOVQCKSBCGEYOKBAG");
    msg.comm_level = 84U;

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
    msg.setTimeStamp(0.7142061986033346);
    msg.setSource(59011U);
    msg.setSourceEntity(41U);
    msg.setDestination(27453U);
    msg.setDestinationEntity(90U);
    msg.state = 211U;
    msg.plan_id.assign("VOKKVAJRPBLJZGCHOBCIOYSIJYFBEBMLWEHRCSYKQQGLBUQPKWTZINPGWDOUSQWZNIOLDEGVTDOAFDEHFXJHXPVMYKIHZIEUCFHJNZREBFY");
    msg.comm_level = 220U;

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
    msg.setTimeStamp(0.18139735417818137);
    msg.setSource(3776U);
    msg.setSourceEntity(31U);
    msg.setDestination(20888U);
    msg.setDestinationEntity(195U);
    msg.type = 35U;
    msg.op = 102U;
    msg.request_id = 56434U;
    msg.plan_id.assign("FRAKYYIEGDDTBKVLSPHNHMCYYWQENKJMMSAQHIPOCINCJJJLBBSQDZBVLYLMAAQTSUOWYLSRISTSUTOUBKXRULFIFGXHULVLOOVYTEAYIKASBWJXFOIZBVAGTDFBMGEVWMEY");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.205844051580495;
    tmp_msg_0.converg = 0.5828933461375961;
    tmp_msg_0.turbulence = 0.22196102417277364;
    tmp_msg_0.possimmon = 220U;
    tmp_msg_0.commmon = 10U;
    tmp_msg_0.convergmon = 108U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FCSNZGTYZFWEEWOOSVANCFGQNYQUGHMCBWSR");

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
    msg.setTimeStamp(0.4311193818562159);
    msg.setSource(17600U);
    msg.setSourceEntity(62U);
    msg.setDestination(23999U);
    msg.setDestinationEntity(240U);
    msg.type = 200U;
    msg.op = 8U;
    msg.request_id = 17638U;
    msg.plan_id.assign("QJGQHMHTACIIODTKKPXGDHVUOAFHBJKIUAMX");
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RMTHGXKJEFQJCBLTBNLBISDPDMEBGFDSVMQZLPZYICKZYXMQACKRCSRDUHTBQVYVDLGUCDP");

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
    msg.setTimeStamp(0.8587319142988677);
    msg.setSource(5973U);
    msg.setSourceEntity(46U);
    msg.setDestination(30152U);
    msg.setDestinationEntity(221U);
    msg.type = 119U;
    msg.op = 58U;
    msg.request_id = 32887U;
    msg.plan_id.assign("IYRXTEWXOJURCXYQBLKBPSOGJILUOEKSWLQKNIVIURSZGGZDRHQOIMPNJBSTMWDPQGRMFLQXCNVIFETODAXTFYTXVSMVAZUPUQBGFEBQAHETLYVZDADGYUYNSZIXVQFDEUHMOASMFDYBOLTWPPEPFPFTBSP");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.start_lat = 0.6802171838121435;
    tmp_msg_0.start_lon = 0.357228753915085;
    tmp_msg_0.start_z = 0.008127783377140041;
    tmp_msg_0.start_z_units = 97U;
    tmp_msg_0.end_lat = 0.7812608702308922;
    tmp_msg_0.end_lon = 0.3153701248798627;
    tmp_msg_0.end_z = 0.318926212537599;
    tmp_msg_0.end_z_units = 250U;
    tmp_msg_0.lradius = 0.932129708989231;
    tmp_msg_0.flags = 45U;
    tmp_msg_0.x = 0.9543550595522742;
    tmp_msg_0.y = 0.9397058136210397;
    tmp_msg_0.z = 0.08261431556333287;
    tmp_msg_0.vx = 0.09740477926621605;
    tmp_msg_0.vy = 0.9419014650783788;
    tmp_msg_0.vz = 0.030107922033589474;
    tmp_msg_0.course_error = 0.6524552151849696;
    tmp_msg_0.eta = 45790U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SQFBUGRIDFKJTVANLMBNKSSJEESOOCHQESENTAANTZFOHVNABAQGVDQPXEUKYNFKLJRQMWBMJGRPLKBUJJSQZYHMUXKLMYLYYTYWPABNYVHKHXRRSOMTSQCIOACITBBJXFULIDZOAGRRKHZFZHVIXHTVLWMGWISCDUFVCXZGZOXWDQMFWORQNDPVFICGJZUDUIDJAXECHATEZWYOPSTWJKYHP");

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
    msg.setTimeStamp(0.26821044625472723);
    msg.setSource(47305U);
    msg.setSourceEntity(147U);
    msg.setDestination(20864U);
    msg.setDestinationEntity(162U);
    msg.plan_count = 16952U;
    msg.plan_size = 1543270983U;
    msg.change_time = 0.6134640688163548;
    msg.change_sid = 40661U;
    msg.change_sname.assign("LLHYKZIQJJBFVWFDTLDCFRWOXUIOYLEZESIONOZFSLFVPKAOPSNPSASDZIQELKCOMUYQMNPSDSSDIBEPWSFAJRHIYHKAHEXYHKTZCQTQHJZVORQNWUIUAOCXGLQDPGHSTMGPBXGEYMPBAKUBBQHCPAEBGILKVXDMDRGTVRQCKQLTNYXVNLIEFUTZOXJJAWYJCKMXEDWNXKMOYGIAUZZBEARM");
    const char tmp_msg_0[] = {-127, -3, -65, -7, 85, 104, -73, 70, -107, 74, -55, -91, -25, -128, -120, -23, -72, 90, 20, -118, 100, -93, 17, -69, 121, 123, 112, 52, 24, -9, 37, 32, 2, -96, 21, 80, 117, 61, -128, -126, -72, -102, -61, -7, 30, 85, 61, 49, 44, 100, -6, -88, -44, -24, 115, 0, -123, -53, 64, -121, 86, -9, -1, -39, 72, -115, -75, 31, 55, 109, 63};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XVHSCTZBJBMJUWGYPFMDFYZKYUQWMWONRGAGWZJKSMEXKONUJOQEOCQZCKKNGXGJOEPWUFSHSGDFDWIHTCEIUWYSHNTMDDXARBQASNPATZMLQTPKLYNAQFSPCBKJVEHBEP");
    tmp_msg_1.plan_size = 64773U;
    tmp_msg_1.change_time = 0.2800860679155781;
    tmp_msg_1.change_sid = 6585U;
    tmp_msg_1.change_sname.assign("URIOJVWKZTNNBDRMZLSVBLGESLCUFRKXRTAIRTQIYGFIMMNJOPKLDFJOBRXTARTLJGTCQCRSZOVNETQ");
    const char tmp_tmp_msg_1_0[] = {-95, -106, -36, 35, -38, 58, -26, -21, -69, 18, -29, 6, -114, -95, 19, -102, 20, 34};
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
    msg.setTimeStamp(0.4093150528586972);
    msg.setSource(9228U);
    msg.setSourceEntity(224U);
    msg.setDestination(41692U);
    msg.setDestinationEntity(254U);
    msg.plan_count = 211U;
    msg.plan_size = 3765392466U;
    msg.change_time = 0.8049408196379411;
    msg.change_sid = 9460U;
    msg.change_sname.assign("FIDNBEHGDSSVRNGWTLWYMGDNEZGCXKODSTJVNTFQQRGNVAQBPLYJVABYBKXWPIXTGPWVPISNZDIJXCTUVRJFOUSZWHNOLRUERDHLPQBUADKQLEDXRYZBDUZSASFGIJLWJOOJUBHCTXOKOSNZFYRZGOSCEVCFTHXAHEWBLCKRAFMJRQARESCKKMQVCPYINJYUWXUWIFIBHUPVLKTQWVMMHKZUAZPGQATME");
    const char tmp_msg_0[] = {-70, 36, 11, 118, 121, -27, 5, -27, 51, 5, 57, -126, -48, -58, -56, -84, -21, 117, 124, -84, -97, -99, -93, -26, 40, -68, 54, 48, 115, 36, 52, -52, -113, 71, 94, -70, 34, 18, 4, 101, -82, 81, 87, 54, -121, 24, -52, -45, -126, -37, -25, 113, -34, 103, 65, 68, 37, -102, -109, -12, -112, -78, 47, -52, -58, -55, -2, 71, -102, -51, 92, -9, -34, 27, -64, -68, 54, -9, -33, -67, -32, 85, -14, 70, 35, -70, 77, 96, -100, 24, 50, -43, -107, 32, -73, 24, -79, -12, -29, -79, -60, 31, -24, -38, -60, -30, -8, -71, 55, -83, 56, -119, -15, -35, 65, 105, 5, -43, -124, 8, 110, -34, -111, 99};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EKHJNHIBOMVZADQHNRLSMDEGBWTXLOSGDRSYSZCTWEVWQVOJKGKWXKOUHHFHZKSDHOJYJCRCNXBGPRWICWPYPDLCMKSIAPFBFYNDQJPORBLIJCFTQUXAKQHLNNQUPCMZWCAIGFPEIFEIMZTYSRJFOCGXMRVEGVXEAEUBVSABOLOTKRXYBBXVVAAMBYNFLITOQTZLNSAEXUMJQFGJNHEUVKJZISANPMXUGGPWWLUTQUKYUDCZIPDZRRQWLDTFD");
    tmp_msg_1.plan_size = 20060U;
    tmp_msg_1.change_time = 0.7139689771713575;
    tmp_msg_1.change_sid = 23983U;
    tmp_msg_1.change_sname.assign("DFRXZDHGJSGSFISGZBWXPXYMZUZXXDGQIGJAYRPPCTVCMRNLREJPQLFOIWVRAJYUMHQLQDMIQOVDDETUATKCJEJXGZTVHATHLXLROOOUPYYXTJETFEWKZROPELBMBKGUFSQHIJAWCMSKIIDDGENIDEUCFAELXMSTYOKCZUFWHUSVSCZVJNNETZAFPWNTBKWMQCHNHKZSQB");
    const char tmp_tmp_msg_1_0[] = {-4, 50, -52, 95, -76, 28, 118, -25, -49, 83, 26, -18, -75, 90, -3, -70, -56, -6, -79, -53, -127, -67, 16, 3, -98, -27, 86, 61, 86, -44, 63, 83, -91, 1, -107, 2, 59, -48, -95, 37, 36, 114, 81, -31, -79, -104, 77, -111, -17, -71, 12, 31, 11, 42, -15, 20, -70, -3, 108};
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
    msg.setTimeStamp(0.4820401772066448);
    msg.setSource(26605U);
    msg.setSourceEntity(252U);
    msg.setDestination(27733U);
    msg.setDestinationEntity(92U);
    msg.plan_count = 58375U;
    msg.plan_size = 3576381193U;
    msg.change_time = 0.4665531956955219;
    msg.change_sid = 25412U;
    msg.change_sname.assign("LMYCLUTRXUMYTXILYXQHPJBTBYEZQMBAOSJQPFJSBQHUHZXSNATEDEKPZUJBIZWKCJMPDUKVQS");
    const char tmp_msg_0[] = {35, 124, -111, 54, 61, 74, 60, 9, 25, -46, -100, -14, -25, -50, -98, -109, 18, -13, 116, 63, 123, -40, -70, 106, -19, -2, -93, -22, 56, 116, -71, -40, 26, -120, 73, 90, 78, -17, -63, 99, -124, 103, 94, 24, 123, 99, -106, 2, 83, 74, -72, 104, 30, -37, 34, 47, 90, 123, -60, 90, 115, 4, -42, 113, 106, -87, -100, -39, 62, 17, -68, -60, 31, 95, 43, 12, -86, -78, 99, 105, -4, -49, 108, 111, -52, 64, 117, -94, -63, -124, 41, 63, -30, -15, -108, 125, -31, -70, -110, -115, -128, -3, -61, 88, 125, 58, 12, -122, 101, 36, 113, -42, -22, -78, 122, 16, 65, 15, 53, -90, 46, -119, -81, 119, 22, 34, 23, 38, 79, 86, -115, 37, -9, -10, 75, -26, 118, 63, 31, -124, -112, -99, -76, 101, -5};
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
    msg.setTimeStamp(0.7016784993826283);
    msg.setSource(38514U);
    msg.setSourceEntity(18U);
    msg.setDestination(837U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("ZXKLFZPXMBRCSJFAXYAPTUPLASVXNJBMEDALWTTLUFODLHPIEON");
    msg.plan_size = 5689U;
    msg.change_time = 0.10756811219944373;
    msg.change_sid = 13214U;
    msg.change_sname.assign("OFVLCKQSEJREISXROCGJNRLZAEVXKXPHOWTAZHWBZTXLECYUVFGTUMWAIZNJQQPFSHDMGBJR");
    const char tmp_msg_0[] = {40, 100, 34, -112, 33, 54, 33, 83, 58, -39, 61, -75, -67, -92, 126, 106, -106, -44, 75, 53, -45, 73, 33, -63, -25, -46, 50, -32, -18, 115, 121, 101, 19, 108, -87, 19, -19, 125, -37, 69, 78, 58, -1, 32, 43, -42, -35, -82, -109, 1, -60, 68, -114, -107, 121, 77, 23, -112, -27, 120, -105, 52, 1, -70, -68, -14, 33, -8, -71, 5, -110, 6, -14, 71, -80, 96, -2, -98, -118, 118, 39, 53, -61, 80, -120};
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
    msg.setTimeStamp(0.24097548999710905);
    msg.setSource(23507U);
    msg.setSourceEntity(182U);
    msg.setDestination(18496U);
    msg.setDestinationEntity(57U);
    msg.plan_id.assign("YXFVVNKHKJIMAFAZTXCIWMAEKPLUPPHTXRYVNFOVFHOLMAKMPKHOSDRBEJPWIJUNVFRTDBAMWDGCYUJPCFYMJDSSXVRGEHTPYDEWCCJDPOJEGCKQLFCIBIMJOHCXUZRELGIBDBEWOBLWZVUMCGVYSDWYXOQTZNOSKSQOZXGXEBGZYJPKIBSXNJYRQWDSVZXKQRUFRBZHFZRQNVOYNQQANTUTCUITUNLFZTBGMAPHSSHLLQIK");
    msg.plan_size = 7184U;
    msg.change_time = 0.5364357557656351;
    msg.change_sid = 16481U;
    msg.change_sname.assign("VGATKUTXKNPUYKUWIJXQKOWBDXGFHOOZQHPKBGKEQZZSCZNJBLNZJCJPVLPSRMHUYLXYOEIUJWMEISXXYYEPYCMRHXSQWSOZGWFNDADFDRTAEFWHVFWBI");
    const char tmp_msg_0[] = {-47, -27, 8, 107, 87, -27, -51, 93, 51, 2, 109, 109, -19, -44, -41, -48, 73, -1, 64, -118, -28, -115, 64, 18, 90, 103, -116, 122, 111, 19, -2, -54, -117, -111, 49, 96, 16, -12, -90};
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
    msg.setTimeStamp(0.23714403193843903);
    msg.setSource(42498U);
    msg.setSourceEntity(152U);
    msg.setDestination(33700U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("MJHXYZNGDAHMLGQVJWRYFOFFZVJLDNJHNSJJQIGFKMKZPEXGGBBUYIPUFSKGCKLZSRLLDRQSAFYNUWVOQUBTWTPIVHNOXMEKRZOVZQCXVQCNRPHGQXAASILUPZYZDUXFEDHKQHKBNOIXAASOMHIVTDIKCXTEYPGLZCIROVWBSGWDMZUUELPCXBSKRYCJBTUBQGAC");
    msg.plan_size = 16788U;
    msg.change_time = 0.5606971035571795;
    msg.change_sid = 25869U;
    msg.change_sname.assign("SVMSHUUDIDGPLVAPHBDGKYXQNLQFZRGKQIKXWSSUJHTBRYTCRMXUXFGLWJLKCHNQPQJACLAFGYFGNRKKBYTKPLEBSLMMTVWFTPLWGNPOOKMTQJUNMCREDVDCXEBIKZIZTFVOFCYEBPZGUJVWHCOUUQGRDNSMDCXFYMQW");
    const char tmp_msg_0[] = {-49, -24, 117, 0, -69, 54, -63, -53, 34, -54, -50, 46, -72, -40, -118, 109, -103, 94, 80, -119, -22, -91, 50, 51, 68, 106, 111, -75, -46, -67, 5, -23, -57, 65, 89, -19, -127, -69, -52, 5, 31, -59, 32, 30, -124, -105, 62, -113, 89, 4, -94, -56, -126, 3, 99, -30, -83, -43, -17, -48, -84, 45, -32, 118, -73};
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
    msg.setTimeStamp(0.8773419692506096);
    msg.setSource(11309U);
    msg.setSourceEntity(168U);
    msg.setDestination(18726U);
    msg.setDestinationEntity(151U);
    msg.type = 115U;
    msg.op = 157U;
    msg.request_id = 63587U;
    msg.plan_id.assign("XQAJNTIENOONCVKZVWFUAJLQVQMPDFEGKURTPYMXNSOZIGYOTTBGFBVGLARXQNFEIXWHEE");
    msg.flags = 32626U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("PIGESAZGNLGBXXDFMDZBYKNJDHBKJVGXRHCLMCYWVWVUIDZTQYRNESEMRPLYVUTDQOTRJJPAKSGLAYFMQKZFYIIMPLQPMSIDZXWCPBWKUUJVJASZIQBSXNHCXSYGSOEOFKFAHXCJPHHTTUTZEHAUMUOLFEEGBBYWLMZQRVBRSMUFRXSGKCAHNDGOYZMUJVQCRUQDNKRPYXWKNBAVTIIBWIOAVEHO");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("BRUXBFRVWUOCXNVHUKSRCYBMWGFRAWNHXYUSRCUEVNBORIQZMQXTTJEYXTBAAKDCELJCZUGMWFRBOEHODJAQCPCUABSGEHTNKHTSOHWYCHXDNISNKGXHKTMNLWCGUWUJZEKQDAPEDZZJMRPMYPKQPSWNLADUFPFVZYNMJNLLIVKQYZGIYJLBSWSWOEAOTJIPOFXGJIHTTQILCGMXDLFYBPSKGTQQZEVPFAOZDMPBYVEGLDSVHFXRVQVDAMKZI");
    tmp_tmp_msg_0_0.predicate.assign("WMEVGCFKGFEQPXZNFRQASAVBBXEPFXPCCJBTATLKSONRGVGFIBEGCPDEYDVNDNZIEYHWALICSJBWGXYHAESUZKQCQAXVRULHUXXTRPWCKNDYNCSZRDBTHWQUAHIMBTBUILDOMEDOTLOFDOMNIDARKGZVLNLUPYNVTWGCWQYHSNFYBHXIUCMKFJPTRSJTOOSHHUVWAHORMREJGILYJUQSVSKIZQJPQZXMWJGP");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("AGFQYWQQSSYITZKREJPAOKJPZUVHHFMMSLLOURCCXSIIQRRLGWRRXAQECKJBHIESFPGEVXPHXJPWPWUDSECVVCRELGYDNGPKCFYZLMCDMKEFJDNBNPFXBYYMGMOYBLMCKDKOGXPWNYBZOVGMUDFVSZPIIQUJKBGCBRBLHTADHIHEOTQXTULSWJMJLX");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 13U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("OHUAUUXNKAQXJTNEWYZPMTKKFPVSJEQJYLOBIRFNYHNLLBOQWVHSOUDASFNWIXIPWGZRLYSF");
    tmp_tmp_tmp_msg_0_0_0.max.assign("LOZDWTQBWRRPWKAHIWOWEWIDCDPXJXACFMJTKRDAVWQZFIBPAHPVCQRHBMAEMVTLXH");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QSRAVCJEGXWRTQPIMPMUODLJSQPMSUCSTVDMFEHULTASFGQTVYSKCTBHWNXEWHYRGHXPBTFRKBKFMMYFIWAMO");

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
    msg.setTimeStamp(0.32299394835956363);
    msg.setSource(63589U);
    msg.setSourceEntity(157U);
    msg.setDestination(40784U);
    msg.setDestinationEntity(168U);
    msg.type = 22U;
    msg.op = 77U;
    msg.request_id = 23172U;
    msg.plan_id.assign("JSDQRMGPZXVMBMTRBLJWHWNSARUCWFQLOSVAVZRYYDPJVKGZIINQOOUELJXISUGKFTNTDFROWRBAOPSQYHBR");
    msg.flags = 61840U;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 41U;
    tmp_msg_0.error_count = 97U;
    tmp_msg_0.error_ents.assign("OZPBTPFNFGUMCRYTXNAYHRLICXQIFFEUXFGUQQQASCWVDVBPGCNMSAPBZITWICRTLMBJWEGHOBHZAVIRLHCKAWTEJDNQNKKPUDVEFHVONWELIJTHZTABRZXQWKYGGBROMBSQKVPLLDPHZGEABTSMILZZJQGODUYUUCJYRMVKHXTCEYUOIOZLJUGQNRJAFDGIFDXFXSYQVDJKHMDKCNEZJYWTWYLMWRKFXAKXBWHAY");
    tmp_msg_0.maneuver_type = 48769U;
    tmp_msg_0.maneuver_stime = 0.7883058546027676;
    tmp_msg_0.maneuver_eta = 33403U;
    tmp_msg_0.control_loops = 868930780U;
    tmp_msg_0.flags = 86U;
    tmp_msg_0.last_error.assign("JRHTGIXYZLPXACMRBPFTGRDNXQUSBKPPYJVTVXJFSMBMKZNOKLGXVYCKRVYKECBEYTREVRWVOJDIBULSFUIBNTOKWNGEUHAZNEGFLEZEOLFSDTCCIDWMNMYVDHIKXGTIAPZOSFQUDZOEJNPHZCHNBCQRJAOQSLYWAJELYKFWH");
    tmp_msg_0.last_error_time = 0.598731109424296;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SYIGBDKHFBKQLCKVLQONWGLTDKFIHBOLYQVODXLLWPILNDUWFULECZISJUSQFXJURPEOOEMRWPWFCMKURWJBCHYAYQSHAOPXQSYXTAQEAOERDYBJRVCZJYCIGVNUQFRHIHVARIZPNSCOLYAJKDFGRVCMT");

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
    msg.setTimeStamp(0.3565018970144873);
    msg.setSource(21396U);
    msg.setSourceEntity(126U);
    msg.setDestination(56429U);
    msg.setDestinationEntity(17U);
    msg.type = 82U;
    msg.op = 12U;
    msg.request_id = 8355U;
    msg.plan_id.assign("BZZNCOMIKKHOWTZLSYBKTBFLNGCDQVUMHJFUJYUPIREZARYWMDXJCWJUYDQNJEUBSOAAGZIZJWVKCFNRVLUBVNARNDQYMDKOERXHSWMSVMLYRGAOIZHDRZCVNHCBBLFTFUAPRLOSHHEXUBBTAAFIXCXRGMYKTLOIYQYWJPVQPSHGIXSMSKPTHOVPSUDTDWXLGEECKLQYKBEZRFTFHCKJQPGIQGDVFNPWOQEDNWPMVSMWPIGZGOTFXXTCALN");
    msg.flags = 41801U;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.009875384646202079;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DSWSBGDYRQAAVRVGLUMCDMTCWEXZEWEHLBLCSANXHMZIIGTUHAFKKTHIWSOWFWFTAAVIHGOBOEUNDZHYZAPVGKWEROUHRVRSNREKCPJFYMNJTJKYAJLIBNCUZTPRSMOVTGKZDCXDQFEDMHGBLLWYEMTNXDYYJJXUXQDRKCQKEEGLBLFPJYJVPLBVSQPQHWY");

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
    msg.setTimeStamp(0.36548069613784284);
    msg.setSource(438U);
    msg.setSourceEntity(71U);
    msg.setDestination(43588U);
    msg.setDestinationEntity(245U);
    msg.state = 54U;
    msg.plan_id.assign("UDASNBJARHEOCQKBEKLRMABFLJRVYIMUHCTCBMOPGXPTKLDHAWTHKZQUGQTHCOZOFWO");
    msg.plan_eta = 833188091;
    msg.plan_progress = 0.8681597180821771;
    msg.man_id.assign("HCHQUEDCVLUERJJEIZINMBVGVZTIRUXPNKLXFCPJRSBNVJLGHOMFJSOAJFCHYGLBBYAKIBADYXZBOMPLSSGQNAWPTDXJQHGCRPCEUH");
    msg.man_type = 35509U;
    msg.man_eta = 855854020;
    msg.last_outcome = 109U;

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
    msg.setTimeStamp(0.4288327507704297);
    msg.setSource(62291U);
    msg.setSourceEntity(50U);
    msg.setDestination(54106U);
    msg.setDestinationEntity(40U);
    msg.state = 163U;
    msg.plan_id.assign("YNGOFBDZAOEZDPLIBFGZMPWEXND");
    msg.plan_eta = -997201477;
    msg.plan_progress = 0.34931249984952173;
    msg.man_id.assign("GFWCWRVFJTBRHKIEINZSTAATNNFEJXKFQSONOLPQRHMZCLJCSNSVUBYBJADYTHDPJEYLHERQBGEVPOHAXXTVYTBUBCTSUGMXAVVBWOADZZPPNWFKRMFGPHUDICTZIWFMURRJXWIPFGDECXUJZTSAWPGYQLXIPQYICNW");
    msg.man_type = 32079U;
    msg.man_eta = 1292946014;
    msg.last_outcome = 150U;

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
    msg.setTimeStamp(0.5020427814874852);
    msg.setSource(59707U);
    msg.setSourceEntity(7U);
    msg.setDestination(13428U);
    msg.setDestinationEntity(243U);
    msg.state = 74U;
    msg.plan_id.assign("DZHVVWBXHBARCJZREGMWUHPMTEJYJVYEAYTNLRDKCRQPNOIENJUYQTRUTODUXMVGKQOAUDSKTZPAPWYTVNLZDAFLHRSPBCKMSUEOKAMHNXLKZRDDXIZOZILPKMDRNCHSUUCBBIQYLJGLHGBFABCIPOEVVCXQTBBXMYZFIJSASYSOJCPEAWTGMPFGBJQIXFISHQUHJMFWOXVJOGIQ");
    msg.plan_eta = 2110228266;
    msg.plan_progress = 0.6318655527583177;
    msg.man_id.assign("FFRWOZKFOGIPPTWVEPBZOUPMNZOEBTKEQBFFGWHSMBTCSXGQZOUXGHRQYYRNRTCIYPFDZEVZVQZDMJARWXAQASDLIMJOTTEQRAJUGIHIYSLSSMXYHVLVYJY");
    msg.man_type = 49748U;
    msg.man_eta = 634010096;
    msg.last_outcome = 78U;

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
    msg.setTimeStamp(0.22692625949868717);
    msg.setSource(18842U);
    msg.setSourceEntity(226U);
    msg.setDestination(26757U);
    msg.setDestinationEntity(246U);
    msg.name.assign("EJFXBBHXTSUZUWCBZRHCIAHBGFGIJFGLNHACNZKEYSDURKYDLQUMPFMUKUFGWXGMWSOEUPPXRMGEAHIZNECYRAVQDOPFYEMGRGTXALVWPCWVYBHJIJOQLCXDMEVKCEPBQJPTDFJXGWVIVLFDOTQWZYSDQUJKZLVMGLUTUHOWKBDNRZKBZVLKVSTAPHIDNXSSKWSNIXQJMOCQOIRVCIAQMNZMHAAWAEYFXTBLLQNTDRTYOJCKFRPSROSPI");
    msg.value.assign("XKDVYQFPLNBTWXPBWJHFAJOCKUKJSDJWWQEYEIQJLTKQITVPGVFPRBJFZXRHUOCVICQSGYONBKMUMCZAZZEMQEESDEAWLRORQVSRAKGXKBBRFNOGIMZIYEIHAPUFDKEDUPVXXQ");
    msg.type = 87U;
    msg.access = 219U;

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
    msg.setTimeStamp(0.7672505882425201);
    msg.setSource(27721U);
    msg.setSourceEntity(71U);
    msg.setDestination(34506U);
    msg.setDestinationEntity(177U);
    msg.name.assign("GKWQLMXSUEKGNSLIFYCXPPPTVN");
    msg.value.assign("HLCNZSJFEGHDPLWFRCOAYACYPAOJMCEXINGDNFPPSKFNMWABVZQAJIDIKZCKKCIDXEPDUQXHKDHAVRMVVQSRYRKZLUQTNRTMDQWLSPZLIEUKNLHCZVZGTWRBXYNUOODIONPBEZOTJHGZXLBUBPJTJXQGVMNYBEGABHUTHSCYFGAUUDAUHBMPFREBOVETTVPFMWWRYSWJYGQTIQERQXRGWOMFXSFSNSBCYYCIZIVEXHGI");
    msg.type = 161U;
    msg.access = 108U;

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
    msg.setTimeStamp(0.05596756615420073);
    msg.setSource(58078U);
    msg.setSourceEntity(135U);
    msg.setDestination(43472U);
    msg.setDestinationEntity(121U);
    msg.name.assign("FZGKJORNHRGFYHXSYDTUDWOLJMCHDYRVYEJHPFVBDIVSDBCLGTIMOTXTZFFJBCUTRMKQQKOPNEYKDILXFVMHAIIMZBXYCEFSRAUORPRZKMVVTEJD");
    msg.value.assign("MZYAIVDJFBJHBXJYQLPEADPUPWATDHSKFAAFUHVCTEVNZWNTFWNPQBFKOEDNQOVRBOWKJXMRQFUEWKNLPMTBGMVSGUNJLGIYGWYLYIJZUNWROJVPSFXUZBQMDXREYOAPTHKBOYRZOHTYZCIHSROCAZXECRFFGAVJIDXSSKILZJIEPNIVQDSEQHDGELZANRMYQMOBHUSYLXTEXJHBGVPWGQDLNZPWHCLIBSIDLMCXSTKWCOMCVURQX");
    msg.type = 192U;
    msg.access = 36U;

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
    msg.setTimeStamp(0.18001275074615453);
    msg.setSource(50672U);
    msg.setSourceEntity(42U);
    msg.setDestination(62955U);
    msg.setDestinationEntity(80U);
    msg.cmd = 85U;
    msg.op = 24U;
    msg.plan_id.assign("ZBHGMZOPOAGH");
    msg.params.assign("SLJRMTDNQCLAZTYROAQWEXXWINPJKPHQKCQOBBRZQGEHXJIGACTYCKSHYVMGAMGFSZVOQZUDWWEBELUJVTURGHKRANFRKUULIFMKLQYYTZCLMMZIEBKHAVQNYPKSOFBSADYBPAYFOTRUNPFUIFAAHULKJJOOSWV");

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
    msg.setTimeStamp(0.6227763347332483);
    msg.setSource(32869U);
    msg.setSourceEntity(201U);
    msg.setDestination(4159U);
    msg.setDestinationEntity(62U);
    msg.cmd = 37U;
    msg.op = 67U;
    msg.plan_id.assign("IEFNTJRNBWQWFWOJJCIPPMHOVZNXLUF");
    msg.params.assign("DBGGBDGTVFWWVWOGEAOQIQHFRYVOSJAQAIZ");

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
    msg.setTimeStamp(0.6459192775880801);
    msg.setSource(37862U);
    msg.setSourceEntity(20U);
    msg.setDestination(13832U);
    msg.setDestinationEntity(89U);
    msg.cmd = 123U;
    msg.op = 167U;
    msg.plan_id.assign("EGTUJWBTQQTRFFFTMPHRLPDCKBIBOULIEHEBLSSUIDYUZHUKZMYWKPGGGQAHUOZSDHMGS");
    msg.params.assign("FRDZRXBAZWPQIXPOXRQHQQNHZGEDRHUBDUOLKQYTEBEFECTXVWMYAPAKGIOLXCTWTEPVPFNZIRTDMMLKBSQYSVLYZKBZCAVXKMXCOZOMKANTOSMIJWSAUXNSRGSYSLLWNPQKFTOCMAFXWDMPCVYWVTNJNDUEDDZGILRYS");

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
    msg.setTimeStamp(0.7178642286888495);
    msg.setSource(10024U);
    msg.setSourceEntity(248U);
    msg.setDestination(39540U);
    msg.setDestinationEntity(29U);
    msg.group_name.assign("MLTWSOMFCYFEZLDQQOIIHSYWKOHQLNMDRBZCDGNNMTJOIVIMWHLSRCBNPULPSDQPAUXUTKZFAGFYPJRUGEYVJHPCDTZRGDDQATGMWGGHRNZVIMSQRHKKVFIGOBBUFDHIQMYCWOPDQJJKJXZXHNNUTLPPZEEJTRXVOUOIIYWXVTEMAXCRSIBNCFLPMACEXB");
    msg.op = 108U;
    msg.lat = 0.20688155682748322;
    msg.lon = 0.4845630989864059;
    msg.height = 0.07011354489342336;
    msg.x = 0.8580211463327595;
    msg.y = 0.09845131140743835;
    msg.z = 0.9791556939995287;
    msg.phi = 0.8339150482278671;
    msg.theta = 0.24389867876910265;
    msg.psi = 0.08980240241428239;
    msg.vx = 0.03352934453214795;
    msg.vy = 0.20375048468055268;
    msg.vz = 0.7176988085768038;
    msg.p = 0.11838771715092966;
    msg.q = 0.9291588273606071;
    msg.r = 0.8713471758683622;
    msg.svx = 0.5255183926139343;
    msg.svy = 0.382692941542621;
    msg.svz = 0.5882797328680782;

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
    msg.setTimeStamp(0.440742988627284);
    msg.setSource(34671U);
    msg.setSourceEntity(100U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(201U);
    msg.group_name.assign("ZKPYTXCIOJHFMKMFBWNETMBDOVSDXVRHQGKGUEAKSAVMKHXXGCVTOWFJZBBDOFRCHUTFCIZBRPNSYVWNSEIJGPMLWMZOULGABYNFJBQEONJTZQRZXTXQYATZESVPWKFGXNOQXDWPIALEAIMMSVYRFPROSPCLRUJARCBCQVXNLPGSJYQPRVMTUYWCDXKEYHIGLIMKIHCYEDFKIDVUWLLHZZLQZKGLDNWUDJOQSPBUNJUTGHAN");
    msg.op = 64U;
    msg.lat = 0.792602307660084;
    msg.lon = 0.41869407066069764;
    msg.height = 0.562075092395751;
    msg.x = 0.6012881530344283;
    msg.y = 0.8930116825306273;
    msg.z = 0.07533923034608014;
    msg.phi = 0.988917081156957;
    msg.theta = 0.5231674024966176;
    msg.psi = 0.656197313929364;
    msg.vx = 0.07940941545551272;
    msg.vy = 0.8354242785375131;
    msg.vz = 0.6270144927742912;
    msg.p = 0.5580632195786748;
    msg.q = 0.4560826708639648;
    msg.r = 0.8310721991956825;
    msg.svx = 0.8390750319090042;
    msg.svy = 0.3898930308861456;
    msg.svz = 0.4432907291337038;

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
    msg.setTimeStamp(0.3100444507128406);
    msg.setSource(45391U);
    msg.setSourceEntity(114U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("KUPSXMEHSXPMJIRCZUMNSHZPPZOVCBLDBAJROGQGXMCNCRKQFLILLMYEVDHWENFUOANZADCVEKRWAWFKAYLQEIJNGITMCOPHWWELDQFZVGNZTMAQNABKSFTNUORSEOPKNWSHVGTLXKIHHYOVSFQUBHTUPTBIBQBSCTTJUEJHDVWMLCFRYXIVCTYJVTZUYZWSSXDXXGJJYGZFAAKPZUPKRAXHUDWGLJ");
    msg.op = 102U;
    msg.lat = 0.1574615714390445;
    msg.lon = 0.6197017925486974;
    msg.height = 0.9937784473227457;
    msg.x = 0.27118970152554656;
    msg.y = 0.06779100853039544;
    msg.z = 0.9291213917944051;
    msg.phi = 0.8396392027819713;
    msg.theta = 0.5512253285695591;
    msg.psi = 0.7056235851984751;
    msg.vx = 0.40613930461630265;
    msg.vy = 0.7772171951375624;
    msg.vz = 0.16625184745059873;
    msg.p = 0.427775284094282;
    msg.q = 0.04240244683483574;
    msg.r = 0.9770104866504128;
    msg.svx = 0.5622241026790512;
    msg.svy = 0.6904670082730472;
    msg.svz = 0.5168460308508089;

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
    msg.setTimeStamp(0.6702996247324687);
    msg.setSource(16011U);
    msg.setSourceEntity(39U);
    msg.setDestination(53018U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.28032419216807436;
    msg.lon = 0.9171667791807329;
    msg.depth = 0.691118224821961;
    msg.roll = 0.08093562837906798;
    msg.pitch = 0.7818099982852852;
    msg.yaw = 0.46975055121732145;
    msg.rcp_time = 0.2614581794978048;
    msg.sid.assign("ODZTWPKBXGUSNMDQOVRASQQZHHUXVOUKEKJVZVDPUUJQQHBLQWPKJYDKKWFLCAXBHNANEWRRHHYLABCOIRDRNEMAFAFSRTO");
    msg.s_type = 232U;

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
    msg.setTimeStamp(0.7360290646291443);
    msg.setSource(27270U);
    msg.setSourceEntity(64U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.5643346097707722;
    msg.lon = 0.1248896957908201;
    msg.depth = 0.372791572078063;
    msg.roll = 0.4716069667953383;
    msg.pitch = 0.4745792570048527;
    msg.yaw = 0.7099277859883034;
    msg.rcp_time = 0.16950225384122275;
    msg.sid.assign("OSMPFXIVUMMSNANQPNFVGLQEJCLDCBMHKDRTKQFELAMYAVOHWYJEDVBFMUYVKSJTIGJFPYISPHTEDIRYFANSEKQTROKDEXURYEBUXVBMXDHYBNHIAIUVQPUGIHJLHIOHXNOJQWSGZJXZEMIOFIXDA");
    msg.s_type = 188U;

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
    msg.setTimeStamp(0.19316685454379356);
    msg.setSource(25381U);
    msg.setSourceEntity(50U);
    msg.setDestination(12962U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.8313600207690247;
    msg.lon = 0.8362594714171425;
    msg.depth = 0.043329419957204185;
    msg.roll = 0.23579004012819516;
    msg.pitch = 0.05759032618991222;
    msg.yaw = 0.7784909731679683;
    msg.rcp_time = 0.8952483523550406;
    msg.sid.assign("SWKIWLKSURGMHURWSBGVDWVRLIXDOVTBNKSJMOISOHUUXMIAYARKAVNIZDCWDTFUZPXUURTHEYLOYTZDMKNEQXJIYHTVGQNTXDWHLJYRHGQCCNPYSRXKUDVRBGXCJQCTAJLJZPCXMCPJMRCVLPJHVIQADHUZHALFGZWAQBWYQFUGAPNSESTEYOJZEZNEKETEKKFFMGKVQVBOBNFZLCBJFADBMMPWXXOFILBP");
    msg.s_type = 94U;

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
    msg.setTimeStamp(0.08637272443795796);
    msg.setSource(17242U);
    msg.setSourceEntity(1U);
    msg.setDestination(10858U);
    msg.setDestinationEntity(188U);
    msg.id.assign("ITKFVABVVHVJBZQKELLUMQJVWSTJGGPJZFCPJLLGYWARSQXZZYSFSXGWBYYUJEQNUDIWTBTIJVPHARDSCBDHURJWYDMSJWLCALXGT");
    msg.sensor_class.assign("GLPEQLCUAQQXLLJOWHGYCYZDVSOPVAWXCSQWQDRBHYBYITJPIPINXGKKLZLDPMLNDCLJAFINXWVWHONAMZUVTTUFUZNPRXQDRHMKCRNNEKXWWTYAAKOSIEJMZERSHZTQDSAMGIGSOJGBZFRAHFQTXXUVHAKREGBOLEORUFUCIZPSVXMIJDMRT");
    msg.lat = 0.9412356360499253;
    msg.lon = 0.32330579080387456;
    msg.alt = 0.5876342152501955;
    msg.heading = 0.08940660824625446;
    msg.data.assign("IBZNIPXBJRUCMSENPJFAOFDPSFPQSIBFBNLYPRUQWWZPMWKVJJGAVYVHKAUEUVAEAXRUOQAMHPTABOWILGFSIKXJKDOUZLLSDEZSGTRJTXEYDNGBJKLSHMGTJQULWNXXTKUPKZDRVEIQHFLEQICCTKXOZUNGFYZOBAUYQZDMTYYEMFEPDXNQCSISXROOHDSBTWATWBCVLCTHWVDNVGDROVHWCJMJIMMYRY");

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
    msg.setTimeStamp(0.8528982440404017);
    msg.setSource(35055U);
    msg.setSourceEntity(251U);
    msg.setDestination(49711U);
    msg.setDestinationEntity(78U);
    msg.id.assign("JWQCBKUNNLZHDIZHXXFMIENXMOJQDEUQGGJMPESPZZ");
    msg.sensor_class.assign("SPRCQGSAAIFIGTSCZCXFBMYOTLVWVMBGGHKDKYETINSQZIURQKLDXRHZPXCAVECXTVXAWFNTUTPEMPRSKVJYNVMZHKLBUEHNIZGWLLQNNJTOZFIWAILBJYRMYLDDETJZNPRQQVBOSFJMZIBKBQWLUYXHWGUEERXHFATNORWKONRWOCSVYSHAXYQDRFLUHTAPYXVOPJOPJMVDHGZWDOKJBEUZQGCSFDXLQMDC");
    msg.lat = 0.25674945169902463;
    msg.lon = 0.7102419218737096;
    msg.alt = 0.23932970803463183;
    msg.heading = 0.4813063390456125;
    msg.data.assign("NOFKFARQWEYTMPQYCMCAKLZJTUBCCULHLSTDSLUXVOAQFRSSZBXETUROMOIKEXPSXUBWXTVWEPXJPIMPFDMQDPJZOHGWHRYIAIWARVNYZLUKHXPENSOSEGNVCBJCUXJOBQBNEWCRVDDGAGCLKJKHBYGIQVDTWKOKYHIFGEIKOBNNZFUSFFAJRTCZYSAVWFGAGEEYQP");

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
    msg.setTimeStamp(0.22722941940497554);
    msg.setSource(36610U);
    msg.setSourceEntity(225U);
    msg.setDestination(21877U);
    msg.setDestinationEntity(48U);
    msg.id.assign("QHABVVMNIOOXJNCSDOEFRT");
    msg.sensor_class.assign("BKEQHYMEKZQCUYPWJTZNTYAJKPCYTMMABQVOTJGDAAUEDTZDEFZANRNYJMPRUQUXUPTQVBMLVWYXDJMSFPEDGAPIGYOJYCCRDUZCFPIQSYSLJUVEVQKRIKDITHAXGXVMGXFHHWOFTLLRUXVXNEZMBYBFFBROGLONVXSUMKKLFRWEEDOWDNAXJQASSAHHGPBWKWBWOCISSERNBHUGIVZSQSTKDCWGLFPZMCVFOZNHLIHOQ");
    msg.lat = 0.02320567690073727;
    msg.lon = 0.22675379307428345;
    msg.alt = 0.8258527209722785;
    msg.heading = 0.18014279197289684;
    msg.data.assign("YLWTDUWPMQCQZXFQALGXMXFPBXDGYIDVLJACGEHNQSBZKMNOEHETVNVOYDDNIFKKKEBHDVLSSTYUENWUGXXLKNAMZBUNQLVTAEGUMCRJSJHFEXIWSNPHHCHUKYUJHIHVGCJYIKGOH");

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
    msg.setTimeStamp(0.8638127349113999);
    msg.setSource(4430U);
    msg.setSourceEntity(223U);
    msg.setDestination(5026U);
    msg.setDestinationEntity(197U);
    msg.id.assign("FNXNDBTIVEGAALQHPXMKGWMUPITZIMTNSFYVSTAJWKPYQJWGEKOIFXONQUZBFYNAQVLYRWUEFPWQECHBFRYFTZLNCQITZFRWIMSGZLOYDWKBHLVMOQJDVYUDGPMJUIVWCIXZCILJEDOXHXRDDSHSYSENKHKDUZYUAZXOCBEVBNZOEOHRLXMRNASOZBQL");

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
    msg.setTimeStamp(0.6855830355898191);
    msg.setSource(35293U);
    msg.setSourceEntity(108U);
    msg.setDestination(6091U);
    msg.setDestinationEntity(251U);
    msg.id.assign("QZAARIUGOEJIXXDQJRDDJGSTOMBCCEOGLEFQPHZTKHONFVWWYFNGWMHAFJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("COSSMJSFGCFOYPCDUZRZDSTNBRADTDMJBIMZHEMPPKGWCGRTDNMKMYSJIALXHWYWNIFVHOUWSGNLKZGUWHIOENBAYAEIQKVFWVOMYFFVNJTNRUBUNOYWCCVBTFAXDYXQBXRQOYKX");
    tmp_msg_0.feature_type = 173U;
    tmp_msg_0.rgb_red = 235U;
    tmp_msg_0.rgb_green = 157U;
    tmp_msg_0.rgb_blue = 168U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5163625021133195;
    tmp_tmp_msg_0_0.lon = 0.6847382318602794;
    tmp_tmp_msg_0_0.alt = 0.8841671275740104;
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
    msg.setTimeStamp(0.8764862201961419);
    msg.setSource(60206U);
    msg.setSourceEntity(128U);
    msg.setDestination(38969U);
    msg.setDestinationEntity(132U);
    msg.id.assign("MLKHKPYONQFDRWCVLZJTGCYCIOHEIIWNKDVNAFXAFBBSXPRZFYMUICUUMWYVGNBSWBIWFJQPHFXUVKDNJYHBAVLFSMMXWCSDPDPETJXLVKAKLFMPXAHTPQZLIRAUBVDEUGNIOTVWQSGBLHQZERTBOZICKRYRUBSJECMQCELWJAKDWZOGTPXGPTKXSSYLYIVZMRGQGMKQXDCUAOJREZQYHEZBHATNUNQGIVYCTRTMJEJOFAO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MWKESCKWONKGAHKNVULZHQLVPHDKSEXWTEINYTBSFRCBMBETEMIJJVKPWTKZLDUQDXDUVILNDXCNRLQDGLQHUNYRSFUMESMFXS");
    tmp_msg_0.feature_type = 148U;
    tmp_msg_0.rgb_red = 162U;
    tmp_msg_0.rgb_green = 109U;
    tmp_msg_0.rgb_blue = 46U;
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
    msg.setTimeStamp(0.918559866327371);
    msg.setSource(7659U);
    msg.setSourceEntity(245U);
    msg.setDestination(61686U);
    msg.setDestinationEntity(208U);
    msg.id.assign("ZAQIRHMQHQQORLTWLZOQVYIAJWFUNDERKZHJNGINBBKBCAUDVZXLFGCPBQGDMCPKRPAUYLYQGRGGXWZWOJGJURFODNQZFPNXKUXASAJEPTJZVCVLHNFKEOZKUICAXADBBIWTYMMYDFIWTBBIZKGTEUKPMOYSJZSMSMHMESSONRMCYFXTVEKFFSXXHHDWQTLNPLNDDFYCISOVBLCWGTGWHE");
    msg.feature_type = 78U;
    msg.rgb_red = 72U;
    msg.rgb_green = 91U;
    msg.rgb_blue = 183U;

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
    msg.setTimeStamp(0.8819163758850357);
    msg.setSource(6927U);
    msg.setSourceEntity(24U);
    msg.setDestination(15368U);
    msg.setDestinationEntity(172U);
    msg.id.assign("AYRLERBJTSXSHPJUAWOBYQYCHSZPAVWLTOUKQPDDJCOIQFJDNJYLZSNFMZPLPIAYTYMCGGNEFUWNROPHOPJRVMWMVTLFXAZZIHMQQKRTOVQWJBPVFGNEVRRSPEJECKZMKGGITKXRGKCXWANVQVBTTYBWULZXFVBAOWWFGZCKRCGCHYNFHWIVTDKLSPIAUHNZGUESYESIQHNFXOXULUSXMIDXIBDNMEQOOLLJKCDMDFIBCAEJYRAQUTHBZKBDM");
    msg.feature_type = 109U;
    msg.rgb_red = 177U;
    msg.rgb_green = 60U;
    msg.rgb_blue = 177U;

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
    msg.setTimeStamp(0.4294333584276575);
    msg.setSource(55483U);
    msg.setSourceEntity(91U);
    msg.setDestination(21618U);
    msg.setDestinationEntity(140U);
    msg.id.assign("GFZHCVGXCIFTUEYYDVGZLOXDKQFVRVRDTIOOBIDFAMTVNPOCBYRXKHGHCPGNQYPRHEJKYKXSZFWGPVDSIEIWEOEWDAYZHLRTCIWATUHONZJYMNFLXPSSQJNIUCLTQXQVBYBVXGFAGFLKENSRQDUZJPAAEUI");
    msg.feature_type = 95U;
    msg.rgb_red = 115U;
    msg.rgb_green = 15U;
    msg.rgb_blue = 217U;

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
    msg.setTimeStamp(0.026449514457854484);
    msg.setSource(3853U);
    msg.setSourceEntity(175U);
    msg.setDestination(18773U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.9531825087324302;
    msg.lon = 0.806469480260104;
    msg.alt = 0.5402922040987329;

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
    msg.setTimeStamp(0.204571176592655);
    msg.setSource(59849U);
    msg.setSourceEntity(167U);
    msg.setDestination(45290U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.004856863330520267;
    msg.lon = 0.47098595192761017;
    msg.alt = 0.9734146736148956;

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
    msg.setTimeStamp(0.35787399352979765);
    msg.setSource(61822U);
    msg.setSourceEntity(30U);
    msg.setDestination(46737U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.9293231257123626;
    msg.lon = 0.7102763582935497;
    msg.alt = 0.20525756133128892;

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
    msg.setTimeStamp(0.36394612512909497);
    msg.setSource(9896U);
    msg.setSourceEntity(74U);
    msg.setDestination(9699U);
    msg.setDestinationEntity(26U);
    msg.type = 202U;
    msg.id.assign("BTPCRVXSYULAOTILGTCPGOXNAMFDGTCEMWAIPQSWVQQFVWKDGXZIBIVVWRJPMRTXBPMYXHXFUFMAKBCWNJVMQFVTEGWADNFMQOLRRCPLLUGDHIHUG");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 50178U;
    tmp_msg_0.lat = 0.9535851091838695;
    tmp_msg_0.lon = 0.47064302640637945;
    tmp_msg_0.z = 0.8765386473844601;
    tmp_msg_0.z_units = 152U;
    tmp_msg_0.speed = 0.3962742319909016;
    tmp_msg_0.speed_units = 173U;
    tmp_msg_0.custom.assign("CGXINYXPCZXDNVFGMSFBSNLRKJWTIMTJQNEVHLQZGYDEAJQCAJRUEEFNUHCATREINZELNFLPOBWWOKMYLRKXGUDKJXMPIRPYLVGLQPOYRHNDCRICBMQHCTSJHFQWZTOHJSXIVDBTGSZOMERQVAGRBIMZUYQTOXSGSARFFQLBIWLSJNAYHCUIDPNXWZUOKQSTDVKKFBVZPEKEFLJDGUHAEGHMTIZOWADOAYZBYWXWVUK");
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
    msg.setTimeStamp(0.6352615235749609);
    msg.setSource(31235U);
    msg.setSourceEntity(39U);
    msg.setDestination(58440U);
    msg.setDestinationEntity(145U);
    msg.type = 57U;
    msg.id.assign("FHDSGZGUGZYDWDHXDYOGAKVJKEBJWCWNYLHIKOSWVWNZOXNIHFHGTFPBXUJJNPFTIDPRKTDTLQXLWXMCYMLDAFJQUIMSCYUFRJSQERBCJBPDDVKXSPQMWVEEFYTVPZTKVVALBSOQRRORLCZEKNRONLVXARHJLNVZCHMKUXNGQMLVZFQWOEKGOTYQCKSSSBSMAZFIJCEME");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 62872U;
    tmp_msg_0.lat = 0.2932086307778342;
    tmp_msg_0.lon = 0.17948002102218208;
    tmp_msg_0.z = 0.9041218169525197;
    tmp_msg_0.z_units = 66U;
    tmp_msg_0.speed = 0.838695386271825;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.duration = 14649U;
    tmp_msg_0.radius = 0.7402963499764922;
    tmp_msg_0.flags = 8U;
    tmp_msg_0.custom.assign("ZNGFTEZIZPROJOQURQYYWRCNSUHVFSWZALGSSJKDUVAUGHIYMXDJFMBLQKPVLMBBURYXKORPMTVSGYKDOTPINSCJOEVHPNASDHCQAXKXPCSUDQQJLKBHWPFHARMQHBW");
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
    msg.setTimeStamp(0.6510758378670405);
    msg.setSource(15222U);
    msg.setSourceEntity(196U);
    msg.setDestination(27301U);
    msg.setDestinationEntity(126U);
    msg.type = 206U;
    msg.id.assign("PKDETNSBXCSRQDWFWKVLGYMFHEULOUEYSWTENOBAWRWNQBIFUNFDBUGDTNHLXC");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 45002U;
    tmp_msg_0.duration = 5848U;
    tmp_msg_0.speed = 0.5436145071699233;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.x = 0.9247925452645244;
    tmp_msg_0.y = 0.8063906312466566;
    tmp_msg_0.z = 0.6430299167371172;
    tmp_msg_0.z_units = 14U;
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
    msg.setTimeStamp(0.7591005691538297);
    msg.setSource(64569U);
    msg.setSourceEntity(102U);
    msg.setDestination(3871U);
    msg.setDestinationEntity(22U);
    msg.localname.assign("MJNVXQFTQGTOBYMXOFMBZZGLSLLSZDEBAPYDUFFQJJCXHJSNAPMSYYEFXPXIYUGKSDBLGEWMTXXDRVFNUJMONOULKUHABQ");

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
    msg.setTimeStamp(0.8464993638654212);
    msg.setSource(38024U);
    msg.setSourceEntity(207U);
    msg.setDestination(3585U);
    msg.setDestinationEntity(47U);
    msg.localname.assign("DOHOSZAIRLTGRSBDBDIFZFZIXMAXFFTIQEGFPVRJJJTKKLCWFGTLPUNSUXRLEUQAQBZOZWSUXKYQDHAPZEJLOVKCWACZGTVCOGELMXEMMMNGJTINKLHQXEYDSCGHYIODMCZQPYAVBQCNYSVNQYYHAFZFQAGIVXEJIWDDWVLKWUHBPHUS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AMMFHMBNRAJLQTVXQOPNJFUZOOIWGBMIOYZGVSVUEDDBYBXDXVEPJOADXPQTQCLYFKSJVPYXUGELYVBJEYFRMLEYGDCFCRNHFCTVSGZOKATHBKUEQDPYERSMVLMSACWWFSIDGAQHRKKTRLDHYXSWGZZUWSORJCGHZSZZALRHOXUIMOQBFFXLUJTPMIL");
    tmp_msg_0.sys_type = 101U;
    tmp_msg_0.owner = 59279U;
    tmp_msg_0.lat = 0.31899636707513124;
    tmp_msg_0.lon = 0.2810425125500611;
    tmp_msg_0.height = 0.2685004653113867;
    tmp_msg_0.services.assign("GQMFJMALQIRBVWBSYCUXMNCYECDWAMRIRQWWQZOPMUGKLHLTVVCMNXJCJJYFYKTIBXXMASNAKBYGGRAGOPFBITXLQFAETLHNHWSITOXWUFYGESHEHKRKKXJBNWTH");
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
    msg.setTimeStamp(0.4930702686702093);
    msg.setSource(45079U);
    msg.setSourceEntity(119U);
    msg.setDestination(31234U);
    msg.setDestinationEntity(98U);
    msg.localname.assign("GIWMXTBSSLCHHMKKJLFWRTWXVUDPTRTULOTIHBYGVAFRKECQEMKXDOXSFESQGQFZDYXKCZHMQHJHRPKGATVBSNDYIQBAIPBJGJJVRIOINZICCEYOOZBAWIIXSXGGUORPTCKBCAYIGZBWVWKEFANXLVQQZVPOJFMAUNHDBMHTFPRFWLDNYOZADSUAUPQKDYYLMLNQUUJEOEYUZEGJMUEK");

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
    msg.setTimeStamp(0.35599856096538807);
    msg.setSource(63593U);
    msg.setSourceEntity(116U);
    msg.setDestination(44224U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("BSJWUDHRWVPXHWTDLSCHLSMKVBTPLILDEXAEUTFEJFKP");
    msg.predicate.assign("ESGZSKQJIHCRZJYMRWOLKRNVTVTWRNXXULFYEBQJKZQAHMBVBWNPCQUWDIZKAXTZMBNWPFQUCPEI");
    msg.attributes.assign("VWROTCYBOORWJZDNSKTPBHAJGMKGDCEOQBEENXTOSPNVQHEJPNTHBAVPSNYJNEYRBYQKEKHEHCWAJXONYTIEICUKLTFXBLPVZZLSGJTCZFVGRUPGFMMXAGKDGHTSDMOMYRLGJWIZMUOXKZZISJFDDIRWMXWUSYEQXFI");

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
    msg.setTimeStamp(0.08188547517004008);
    msg.setSource(55337U);
    msg.setSourceEntity(224U);
    msg.setDestination(4530U);
    msg.setDestinationEntity(183U);
    msg.timeline.assign("QNDGUXQIQEPDRYWHHPGVFECJXLJYAEIZPMOPSFBDRSPNYVAGIFKMOBGTIYCEUPZMFBMZSCWZAYUAHLXXEWMBUKBJZMQYOKFHRCWZFXVVYFNHJQBXPUOTKLYWJAKJTXSIBCTKOWGIHCDOIOI");
    msg.predicate.assign("GZSIJVZHROFCXOLHXJEWGJTNEKIGPJYYZPUDNSFFUADBXJMDEJHRQKTKFLUMYLRBPWMVOBAAZAMDMAXTCTIEGXKCISJXQIIKTRUCSDFQLNOBPDMKWBICVSCEEWLFVRAHEL");
    msg.attributes.assign("CXWRRSXOULJDPJH");

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
    msg.setTimeStamp(0.540348233251923);
    msg.setSource(11555U);
    msg.setSourceEntity(23U);
    msg.setDestination(12933U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("DQBITXCHLGLCXVOEOGFGWKDHTRUEUKGBOYZFTSHYNVMQELWCVKIQLEJVBRFPSCHALVDREYPRHWKAPHEBFIEWGYSBHUXZUAECMJMKUZGOUPUZISOSCCDXIYFQPFMDANYVLFFYVASVTZOPNSTTTBZSHJAPWRINQKDLWQVGBKNDZMMDQYEFJIBAJEPDNMNPUROBKIGQQ");
    msg.predicate.assign("VASAFDOWRNFVFRYGYZMJYHSAXWPUPCPHGEPDGXFRREDTUCYCYLOAZACEDFBTNKYZAUMTQOEQFWPDCBSYUGXBCLFKNXHUVJNXGZTSKAVKUBIIZSSUNLMILLMYLLQWASIOZJFWSZIKECFWRQTHRKMGKDEJIQCTEJHRKRJVIMYPOPBIENNQGAVBVTCUVTMOHWXVEVRBPHBOQFLJPMJLQDSOHKDURN");
    msg.attributes.assign("OXWEMICZWJEQNRMETCGXTVDEFOQUQUHYRZUMTKPJCNBFLPDRBPSTRTFHGLRGANWVSKYIYXUPPMXSALVNDKIPQRJOPTFIIXWAOFHWDCYMVRNZUELDHVPBZLZCSABFNYEQBCXIMDXWEHIAZDJSGBMLVGIFWQHJFTKTLHUWZFJLEDACFKOWSGQDUXHBCMMYNPHZEPA");

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
    msg.setTimeStamp(0.19710832676691392);
    msg.setSource(38107U);
    msg.setSourceEntity(153U);
    msg.setDestination(40373U);
    msg.setDestinationEntity(72U);
    msg.command = 74U;
    msg.goal_id.assign("TWKYKGHSGNDOIFJJRRZDVPKKBYWSDPVGUSYNWLSRUMTGNQNDMDQXPVDFBLCOPBPPTJPEIQYBUMONJEMKXAICSMWJUUQFNVXJRJZKXMDAZNSEFCZUCVLALBIYTWKFHSCKMWAAJZKFMEXAHXGUHAURCXJEBUTSIRAPTNYHDVBRTOLPUTLDZXBFMGHZIIQRKQXV");
    msg.goal_xml.assign("CAEXHXRPUHHFUGWJQJNRVFIMZWNWHBZAPECSLGTFZNMJKRDMBJSQWLLSKJTZCTZTALXTLMNBEVIUXJPUGCQFNILMZSBPYKPWEVXTJOEEOWNJKBKZSENIHNGQJSSHNVYRQFGCHXDVDQYAOAVDRFFEUVSOAPXQZGEUKYOWFCLLYMVCAQTYXWORMYMZCPUGNUIUJQD");

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
    msg.setTimeStamp(0.2791879913934737);
    msg.setSource(24892U);
    msg.setSourceEntity(187U);
    msg.setDestination(32237U);
    msg.setDestinationEntity(51U);
    msg.command = 133U;
    msg.goal_id.assign("VIKUDLMQZBHKZMGCIDSEYGXEHACSDOXCMOPCIRYKUYRRNNZWCOTWVBUJFHQDRWZYLOVR");
    msg.goal_xml.assign("SYGERLSXJPLZKWBTQMCZOTAIHEXGYLWFIKYMRTOGTNJYWWOAPXTPEMGRCBCFHQRPBZEFMPPOUGCANIJABQNAXXXJAJIMKFUUSVKHCINRRZCHFJZRXNQUVRDQOLKZPRUIDUGFIWIYBXYLBVOUJVOKGDDHEVAOSDYTJPNBHVHBBCHYMNKTPVUSBUHWTPXSNMDLEYQVZQMJLEFDAFZV");

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
    msg.setTimeStamp(0.06957789273311454);
    msg.setSource(29013U);
    msg.setSourceEntity(149U);
    msg.setDestination(31U);
    msg.setDestinationEntity(69U);
    msg.command = 63U;
    msg.goal_id.assign("YQSCVETGNWKNAJELSOQBLPVUZFFIUCQFCCKFLVYALSWXXHHLNZENJVSADTZELKYAMDKOIRJDHRXVATMNAKYWNIYPHZDGXLXIIOWHQPUCKRCQPBFRCTFMCLJVPXLVHF");
    msg.goal_xml.assign("UWAZJQFCELYSLVZUXKLGRCPSHYWV");

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
    msg.setTimeStamp(0.5431886646228861);
    msg.setSource(19100U);
    msg.setSourceEntity(167U);
    msg.setDestination(16130U);
    msg.setDestinationEntity(48U);
    msg.op = 4U;
    msg.goal_id.assign("MZUCSNYOMETJMIYSNTNKCNLHDYWNLDTVFUFVSJLIPZZGIJURJKFXPQWRBUYJHAEVNCQWRQAM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TEZLDAONPAEGEKVFOJVGVIHGDLZHZDOQWBPOACJUGGUGQISSRSLCNCHVMVTINPUNWATTYMPSFBZLUEPBXUNEIZUVMCAXDFRHNLCXSGXEQRKPRHLEDREFVHVJWSTVWVMAKLHONYZYJLBOMZZWMDRNPDWBIUEFCMWSSLKCQOAMRFQFPNSDBBKCGPAQIYUQQJCEJOTXBYXWKNUQJYXMARKBBWCRHDZJYIQDFSPIHJZLAWTGYIYTXXOTHFU");
    tmp_msg_0.predicate.assign("NFYANSRFICNZGPTNTTITBZKQQYOPHJK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EUSGLVIVMMELWTPTEAVLNHOCFGINQCXXBHBXBZSTKNYMWKFDRHCOAJONBABJKGYXYMRVFJXQCEHKSIPOANFXGPHHBPOPYZASENKYODRALRJ");
    tmp_tmp_msg_0_0.attr_type = 230U;
    tmp_tmp_msg_0_0.min.assign("LDPNXQYRHQCSFBLFPMEFNUEMFVAVLJAKGJTKJGISSTCKFUGQBEOORQKMTVEWIRUMXANNHVRZZSSYAYEKXAELYXSFZDYAOWAOTOMMDDBLPQHSVTBXDOAWBQMLUDVZCFCJZRUXPVQCGXCUDEVTQWVLGSRHGMINIPUPQEINBYLJLYPXGVWDNDIJNGA");
    tmp_tmp_msg_0_0.max.assign("NQRFAWTPJZOCJEIVTDFKRRKMHIATAHBYIPQESBQRLOKLQAHEQGLZNGJOJRWOAZPQTABRUJYRKGHOEYNCWJPZSNWJWNSKVSVCCUOIJMLSZCKGERBPLUDPZATNX");
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
    msg.setTimeStamp(0.20236773291725796);
    msg.setSource(7822U);
    msg.setSourceEntity(201U);
    msg.setDestination(61793U);
    msg.setDestinationEntity(220U);
    msg.op = 56U;
    msg.goal_id.assign("AGRRCAEHBMGVOPUSWQHKSNEQSETYCKJFWAPNIZKTGVFZBOGPRTZSDQLSUJCTOWXGVVUPYHRMYN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PFXMYVONKUXLEWYIMPNEXAKAHUMIWFRQOCDELOIUBLMMRGLFGZNXTHNJLSVIZGPOEZHJRWSFCHTZYFDHNSGVTPCARDJHTVZCYOLGPWVKUPABVSLDHPWDWYSRTVGOEAOXZEIOKPRVUHCZQTMSFVCBIABTCQTDKFMNFIDRGISKDYUFRQGBPIJXEMHWJADWDOBYTJFBINNBOGUQGCQECEJJLNVWZXXZSNQALKMKPEJYBXRKZQSU");
    tmp_msg_0.predicate.assign("ZFDGXKTDIUVOIHJILRGBTPEPQCBSTVDYMSEMHJGXTRLQEPFVTZQWDASMCNSQCRLMHFECQKURUWOKXNZHYTFUJKKHXPOSVXJOGXETKXTYJMDODAKBRSEFJTVPHVGRHGXYVKDLSQIOMU");
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
    msg.setTimeStamp(0.7760655285469978);
    msg.setSource(48302U);
    msg.setSourceEntity(60U);
    msg.setDestination(25574U);
    msg.setDestinationEntity(79U);
    msg.op = 65U;
    msg.goal_id.assign("NEGYQITMZRSPDZNXQRTHLWXIIKCXCUFYGHJDWNFBKTDMY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VVADMZTZTLXXGHRZODALIYXMAQOXGDELWNDAPTZQGCXFQKVWDLHTFZPJHWRQMSCFNYKHUEXSVCJOOOMSPMWCASHTISROQRPUPOMLFIDKSGAKMRNROBKVQHCUENTGYDBEXBEWZFGYLXFBNYDFAVCVUITTMBFLJPEUBHQQBOINXJYHCZUKA");
    tmp_msg_0.predicate.assign("NUNBGUKQJAFNNDM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AMODGLKCEYVQVTGDAZVDYUCZZCUTSBEXOWXXBVMQVDELQCABSDMSVWMDZNMFTQRIUSCLPWKLFUBHACERJUBXOPLXCWUAPKBDELLESYVKNAPJRIKSVANMQNGQHVJHNPFOIHDTSJHIFGECGMJROYXJUWQDUYAXXYRCGFHLYEEGROYBBSVOONGWZTLETFZTKNQWFZRXRSIHIHTPIQAIANGBKJWORFXKPUHYWJJZWO");
    tmp_tmp_msg_0_0.attr_type = 128U;
    tmp_tmp_msg_0_0.min.assign("KPOPCLSMGRCUGOFFDA");
    tmp_tmp_msg_0_0.max.assign("EDFBPHPNQUEZHYGFYSFAOIKKVVDMKQLIXFPMXVUDUWYUPIUZUNSBJZVZHTVMQJBPETWFTTJBBWRGHUMVVWRXQXJPPVXBFNSYNIJCOGOILRCFBMCUTIAADBKXNQPORIVCWWHSHXNJWXSLCPCQFMHGHSLHYOLPCMFCGERSKLHMDLQOXGQZRRZYIGAUNTKREEWKUWZEGYFJDIDRRQTBDBIZAQAOCOZETMSLXNJTJNNSKZKEAEVOACOSJ");
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
    msg.setTimeStamp(0.5779719393502155);
    msg.setSource(57174U);
    msg.setSourceEntity(110U);
    msg.setDestination(65297U);
    msg.setDestinationEntity(32U);
    msg.name.assign("AWNQLZAQNZJNQESUBTJDRPICXITFYVOCBFSBSGKAMXZYWMZNRGEGYLDDOXGUTIUUSCGNWUNUJFRHWMMBHSKSSFURWHXCYKJPUKQWCIPCMENSFOMALOJFNEVTLNIRTEIXYLGKO");
    msg.attr_type = 220U;
    msg.min.assign("JDQNBHKMYXOEQIIUTGFOIRXFRXBPRBKNCTPPDHDJEHGKVEFXUVFVSEELTHROVESQSVFZXUZCCYRNRHYIZELBRLWG");
    msg.max.assign("VHSYOUMPBUXKLCYTZEVXCEHPGQCAFTURLRCUWUZIVMAKFHFGBTWRRYFEUPODGJORZKFLJBUYRPSHGBNDHRDTLDSFBJIZLCQDUFPCQBIYXPHKZQLEHJRJHBBIEEJAVAAWHUMOVYZDYQWCIKXZUOJNWGDLTAXQEODJBKQMXKWQWSPNF");

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
    msg.setTimeStamp(0.05161842047435394);
    msg.setSource(61985U);
    msg.setSourceEntity(149U);
    msg.setDestination(57801U);
    msg.setDestinationEntity(158U);
    msg.name.assign("UONVOJVSWQIZRJYCYDZDEATJCXTOVXUDEVFLEKFNYUEZTGYRZSPVUSZCUJEWCHJNFDKXJQFQLNMMRDNKY");
    msg.attr_type = 115U;
    msg.min.assign("NSQWLLGUMJXMZQYMLAZTORXEWVHOSVLEEVFDIOGMEXYWETJIOSQJYHKPGNZMNPVPLLMAYJYPRWKEWRTIKHDIWZARGBRTWYQPBIHRCEXRTZTCYUTMAIATCXDADJRUWJXZBCLFQZPDESTGIQRUTSZFSXBNYLRMSHSVQZDJGLSNSBBUBUHKDFKVEAJVHDKXHUFO");
    msg.max.assign("IJFRECOZSXTYDMOHPEVIMVKORUCRKAIBPCDZEAHBFYGYRATGWZOWCEXJNUOUMVNRGTUWDRQVJNHKMELULRQTQGAKWYMQTZMAJXSENHEIVJFFYJSQPMPEOYROCISFFQWXMTSTILXTKLFJSHGCHWVDZFDIVZPXQWLMDJDVUVBAGLNRLAOBWUWETKUJIRKATBASYUCGHNPBDKPHZICEDNQNQYLVPP");

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
    msg.setTimeStamp(0.7999081446539957);
    msg.setSource(28780U);
    msg.setSourceEntity(253U);
    msg.setDestination(41905U);
    msg.setDestinationEntity(169U);
    msg.name.assign("EOZXTPIVHMPQQHVTPWDYCXSSAAAIBSVEZOJFNHAHILOFJKMDWQUKZWTQGDTUFJEPOCQGXDRONHIYPUOFLCRFRPVDCRQNWZRKVAUESBRMNINYETKKMJYWIJTCVDJIAZCWOHWPMZENGSGGSSSVHLWMYKUYBQXYXKFNLEVTTGRVFZXFJHMMVAPWJIPCABNLGYADRIFNHXGHILBQZWQOMQCCMXOUEKTGLDJURBAFKKZBSLBNPRUEBXCD");
    msg.attr_type = 92U;
    msg.min.assign("QIYRTPLDZNCGEZWYWRERVUF");
    msg.max.assign("ZCNOHVGGVBDFZUFPDMZLYUQE");

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
    msg.setTimeStamp(0.5866195158302483);
    msg.setSource(64225U);
    msg.setSourceEntity(72U);
    msg.setDestination(6956U);
    msg.setDestinationEntity(230U);
    msg.timeline.assign("VDJLEUNUSUAZOVWKXPXBVUIJENMBKZZKKYEAQNYBYRIDLTERSYTLJOMBLZNCAKXHFEGCSLAWRXARSUGZFVFAYVISJMRCJAJCOMRBOUUPATIKOBCVDCYZUTLBDUHMZDSUWKBWVWVQFWKSPHMVHFXNLKNITQSSEQCWFTJDGTWYZCHNRHZVQXFGDFHZLLXJJAOIPHNRGPQITIKOQILDMERGXBAQFCTJWBNPRWOPHXPPDQEGQXHYDOTPG");
    msg.predicate.assign("VPFRTRKCZHGCLFTRJWDLITYKVZGFJQQGPANSKIYUOOXZQGRRNNDEDLURKSRELXYSP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TBEXDKVDPUJBIRXFZICITPKCQINWCAOTXCWRPLQAFEPFDYVWPUXUJKRUZWJTDKYMIJSEQMSZOEFRPGNZMVWQTQFTJDANQFDUKIXJVDOVOAJGHYUDCEAKFLLOTIUOINHAYNKPSKGFPPOXSJCIBGREMLVLUHGXRSNHNAMMYLQEBGZ");
    tmp_msg_0.attr_type = 239U;
    tmp_msg_0.min.assign("YANBSSFMSIRDCTDJDHPUHDNLMXAYCCLFETHCMAWFXAYTSVCOWWIWHCNAICPINGFOAMJOFKAOOLFKBBQIFFZTGZTATJHQCPUSZLXGGUTWQSBWOLIJEMNQVYRIXPDDITLD");
    tmp_msg_0.max.assign("XJSSIRXZZIWDAERJLXTUQTDIZPZVNHWJUYTUTFRBAWAKRRMVJNQUMISSYICJCTHRNPADVBXMEUMZPWLKNFEQKGHKULOQFOEJCIHVOLHDWCWZZEBMPXOAGBGCCBTAPBPYVSONJZHYOLCEGSTGQGFEMYDFILBXJYJLPDDAKPDNIFOBFNXGRVZUKEPWRSYLTFXOFMMVRQCOEASTUA");
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
    msg.setTimeStamp(0.9815274856977529);
    msg.setSource(13154U);
    msg.setSourceEntity(128U);
    msg.setDestination(51465U);
    msg.setDestinationEntity(57U);
    msg.timeline.assign("OIFLNLBPJLHRWZPUKEXBZLWGKSEJTADHHVTZPLVZHTCWXNTWCNQHPVMTKCABDAXOOIOIZSLCPKSODKDWPYQDFKYKNBGXFRAOWPOX");
    msg.predicate.assign("SQAXTTFQPQEDEBXQFUQJAQYAWVBMAOCVBMNPOYIIWZNZFOTXYRLQTHRDTSIWVNJVCQDC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MZUCIDAZIAMNFWIJJCCVHVZWDYLANWVTUDJOLRSBDQQFFJOMVBKIDEOLMPKUUTYKNQBYAYDXZNRNIQGTHGTMKABPKQLXKYNPCWUSRFXUAMYAAEUWUXEENWRSPCPLHKVLQBURFFGTENYPIPYILBSGXIXDWWNH");
    tmp_msg_0.attr_type = 84U;
    tmp_msg_0.min.assign("YCDJNVGFMLBJXANDUSZQYSVEWGFHSZXMUFOQAUJLSRBNPHVAVTMZFNKAWSVOESOROXNYPKWOWNRBPWAHFRQZZDRDBJPDQENPEIDJKCSTZQCJWAWTYMVLCKCIZX");
    tmp_msg_0.max.assign("BWNOQYFCVJZXLKGPPYURCDDEXSKTGYSOBLIICJGEWWYPCFADYTLMGHFBCGTENALAFUJPNREUQIJLVXVTHAWDRIAUJZZWXZENXSYWNVLQVF");
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
    msg.setTimeStamp(0.8975264147307417);
    msg.setSource(28420U);
    msg.setSourceEntity(105U);
    msg.setDestination(42005U);
    msg.setDestinationEntity(57U);
    msg.timeline.assign("XLYYEXYIFLBQZQJVWHZHLVFPGTTRINRBLGSFQUZCRTTYAZJQVSQSOPNRGHHMDOTXGCZOHIQSNWQTPSDJOPXOPXKBAACKISUFSBWYSZCCWHIEFURZXIAQHVCUYPAYJFIUXGYJDKMWNDCRWVRRXZDLQJWSKJWPFGYOMLRKLQNWKHMTARMNUKALMPTGSYOMFEPDBEBNOAHMTEWEVVJEIALFDCCANVKDUXTIVLKXMUDBGUGKBBDEUZGEIZHO");
    msg.predicate.assign("QZYKMPLLLYBTPFYEDZHSPKZFQOQMDXSOCUGGWZKLTSXVRCOMACCDPUIZIWQPTXRJJL");

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
    msg.setTimeStamp(0.5369703882247179);
    msg.setSource(10138U);
    msg.setSourceEntity(201U);
    msg.setDestination(33078U);
    msg.setDestinationEntity(166U);
    msg.reactor.assign("LDFZXCEREASBBDPSOMABFHHLUJKKTLYUOYDJMZBMIOVUCLJZRVEGZACVSKFSDBFXGXZEXDPQYWBPWGKABPSIEKOUJH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QZVPGOBOIRNKBAZUIRNUBFTNHFCOAFGFSHDLQVTTCGVBJFXEMWLWHPAUDNKLQSUAIJUKQUYTJDWUQUHGXASACMPMHJSPFBQEHRBERVLIYAMEHMTSRMYPOVWYZLDLCMPMXXPSCCNVKYZDCUUZYJKWBILZXHEQBHIYYFSRRIDIWXASAKXKJIPYGDEMOWOOLOQIGNJXWTNTFZJRZJFRVETKDVCLBNVTSNEGYMCCEXVDNFAPT");
    tmp_msg_0.predicate.assign("DJLECIYAZRNAPLRJGLNGFPLNIZBOVQXTLOOHIGQFJDUSKJHPFNVUQUGOBTNFRYILFHNHQBMRKGHAURGVSQSCKEUEZMGUOGPXDNZARDWWFZEFXPGYYQKVTPECBYMUZWYXLOAJINPXHDHVTSEAMTNIVSHVMAEDEFISDSMHBOOCSKZJMLEKLGDUKUTERCIAYRPSHXVBZVUYCXBSJ");
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
    msg.setTimeStamp(0.5319775915275788);
    msg.setSource(27719U);
    msg.setSourceEntity(49U);
    msg.setDestination(11113U);
    msg.setDestinationEntity(77U);
    msg.reactor.assign("NMTNBPLFGRJRGDIWVVWLGBQAYTKNUOEEXPISCBRKHXPEJVWMXVYKGQOHKODNKVDJBKYQENXXWLKFPAOTSSIJXUJHESBDASLNWKCVOBZILQUTUEYFGQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VDYZKDXUZMUCWIMCTJFZSJPGZPMIXKQHJNVXIKQMWPRMCOHLSTASMTKUBANRYYTFLKWDWLPHADYQYHYWEANGDYDOTCRVCESCPQZXEVABBKKUEEAYSYKHRIQPLFJCPFWBXNVLLPSOXGZMEOGGBEGQLOECQJOFIWLSUNTVAKRXRWNZBHMZEHBZRLOOXUFWTIBCGJAFOGVJJPVIBMURNVUIIBHQDNJHAGDDFTRA");
    tmp_msg_0.predicate.assign("QWJRQCPFZENKWHXRMVJYTQMYDOPSILHTOCZCCWHJEWVIUZANIRRPOUMDINWVUMXORAVSNLPLWXSPSQXYDXFCBBYDJOTCUREEZMQLMBJCRHMFOGEFBEBRVEZIUTCRPYDKDYXWUAAJILPGKAPWXKXSAHPZDMGYHAUOGKXUTCJGEZTSFDKGVNGVLFZHVOSVKLYDN");
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
    msg.setTimeStamp(0.8515659539713905);
    msg.setSource(26155U);
    msg.setSourceEntity(243U);
    msg.setDestination(53590U);
    msg.setDestinationEntity(112U);
    msg.reactor.assign("PALGWLAWSEJHTBFMBGCCAQFFUIZYPFGKXAMZNZFVPNSHVXEPLMDALEYPGSZJBBPIGZNZLCOQKWUSNXVGMBJXXGKKZJHOIVOBZCXJKEEKOFTMDDGWENZQQDSTQWZVRYETKPRPCQQFYGSRICJUSOLOBODTFTNNKOWRDAUVPHCMYUNIMHHLCFNXYYTSFMYHQQRTRIXERUBDATPSRCVJVVWAEHHEWWJDMUAUKDL");

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
    msg.setTimeStamp(0.3364581371446179);
    msg.setSource(5419U);
    msg.setSourceEntity(9U);
    msg.setDestination(63735U);
    msg.setDestinationEntity(32U);
    msg.id = 34U;
    msg.width = 11252U;
    msg.height = 14549U;
    msg.widthstep = 47203U;
    msg.channels = 107U;
    msg.depth = 209U;
    msg.finaldata = 27U;
    const char tmp_msg_0[] = {51, -54, -99, 16, 58, 97, -32, 126, 55, 72, 34, -45, 10, -92, 89, 33, -35, -107, 67, -98, -21, 82};
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
    msg.setTimeStamp(0.12425208082394479);
    msg.setSource(58221U);
    msg.setSourceEntity(185U);
    msg.setDestination(11236U);
    msg.setDestinationEntity(151U);
    msg.id = 38U;
    msg.width = 44033U;
    msg.height = 42647U;
    msg.widthstep = 51864U;
    msg.channels = 220U;
    msg.depth = 228U;
    msg.finaldata = 24U;
    const char tmp_msg_0[] = {109, 22, -29, 72, 123, 69, -3, -111, -110, -100, -15, -7, 66, -10, 80, -75, 96, 119, 50, -96, 90, -120, -80, 113, -63, 90, -26, -7, -5, -20, -123, 29, -38, 6, 37, 42, 59, 23, -114, 99, 60, 96, -56, -122, -15, 76, 47, 85, 103, -39, -19, -89, 41, 84, -18, -23, -62, 23, 0, 63, 99, 22, 27, 84, 53, 24, -64, 115, 124, -120, -16, 74, -102, 69, -48, 87, -53, 16, 48, 96, 43, 29, 13, -90, -1};
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
    msg.setTimeStamp(0.8336616238014748);
    msg.setSource(18298U);
    msg.setSourceEntity(129U);
    msg.setDestination(46133U);
    msg.setDestinationEntity(18U);
    msg.id = 197U;
    msg.width = 45946U;
    msg.height = 58317U;
    msg.widthstep = 45647U;
    msg.channels = 127U;
    msg.depth = 208U;
    msg.finaldata = 194U;
    const char tmp_msg_0[] = {-58, -34, 43, -113, -8, 68, -102, -121, 10, -103, -79, 90, -25, 22, -7, -6, 93, -58, -23, 28, 16, -25, 51, -81, -59, 16, 95, -122, -59, 125, 64, 17, -20, 77, -41, -70, -24, 54, -86, 81, 82, -22, -34, -88, 63, 8, 43, -44, 85, 105, -90, -45, -55, -108, 38, 85, -92, 24, -79, 92, -114, -27, 13, -23, 70, -101, -7, 35, -123, -103, 39, -66, 4, -11, 104, -89, -15, 8, -118, -29, -96, 75, -27, -31, -72, -51, -82, 114, 97, -105, 125, -32, 118, -69, -120, 62, -64, 43, -87, -122, -62, 96, 65, -93, 20, 15, -124, -35, 62, -12, -128, 20, 51, -69, -25, -115, 42, 87, -15, -6, 44, 105, 106, 92, -126, -101, 34, 36, 49, -115, -13, 47, -59, 28, -69, 65, -47, -69, 81, 101, 118, 17, -112, 112, 9, -63, 93, -24, -55, 53, -68, 67, 91, -45, -85, -90, -121, -29, 28, -81, 61, -78, -13, 57, 39, -81, -14, -106, -10, 115};
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
    msg.setTimeStamp(0.9500923588472308);
    msg.setSource(43674U);
    msg.setSourceEntity(225U);
    msg.setDestination(45753U);
    msg.setDestinationEntity(145U);
    msg.width = 43636U;
    msg.height = 19483U;
    msg.channels = 82U;
    msg.depth = 131U;
    const char tmp_msg_0[] = {-72, 61, -50, -50, -74, -22, 110, -49, 98, -59, 108, 98, -110, 3};
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
    msg.setTimeStamp(0.8415981249861398);
    msg.setSource(23828U);
    msg.setSourceEntity(135U);
    msg.setDestination(49054U);
    msg.setDestinationEntity(76U);
    msg.width = 27812U;
    msg.height = 59153U;
    msg.channels = 152U;
    msg.depth = 107U;
    const char tmp_msg_0[] = {-86, 48, 49, 50, -26, -113, 4, -110, 21, 105, -46, -77, -93, -16, 23, 5, -51, 96, 111, 46, -81, 20, -126, 56, 45, 1, -93, 36, -103, 85, -40, 118, -126, -94, 72, -87, 124, 120, -108, -34, 42, -22};
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
    msg.setTimeStamp(0.5301525159525908);
    msg.setSource(8429U);
    msg.setSourceEntity(152U);
    msg.setDestination(55152U);
    msg.setDestinationEntity(45U);
    msg.width = 4774U;
    msg.height = 16748U;
    msg.channels = 35U;
    msg.depth = 227U;
    const char tmp_msg_0[] = {53, 102, -110, 35, -109, 16, -119, 82, 69, 110, -95, 95, 21, 23, 108, 98, -46, 37, -22, 99, -93, -89, 25, -40, 89, -47, 119, -32, 11, 33, 103, 96, -93, -55, -4, -116, 124, 27, 44, -26, 114, -88, -80, 12, -58, 63, 23, 96, -57, 85, -40, 100, -24, -100, 94, 119, -63, -20, -123, 63, -35, 94, 75, 34, -89, 74, -115, 21, -95, -52, 89, -57, -42, 115, 115, 98, -49, -9, 104, 31, -79, 48, 57, -53, 95, -48, -52, 78, 91, -89, -64, -15, 85, 94, 30, 105, 88, -26, -47, -2, 25, -39, 22, -21, 119, 5, 7, -16, -66, 88, 27, 94, -34, 97, -119, 14, -52, -37, 96, 20, -119, -36, 20, 35, 92, 110, -117, 104, 117, -69, 11, -1, -41, 23, 10, 10, -94, -75, -98, -59, -46, 23, 47, 14, -99, 16, -52, 66, -50, -119, -75, -74, -59, -44, -33, 115, 115, -60, 102, -80, -53, 44, -36, 66, -89, 49, 60, 80, 43, -60, -37, 51, -37, -20, -90, -18, -105, 58, 42, -85, -48, 93, -63, 53, -17, 89, -102, -117, -55, -13, 78, -98, 32, 28, -114, 64, -85, -100, 18, 24, -119, 23, -4, -82, 79, 63, -29, 12, -82, -17, 43, -44, -23, -120, -94, 45, -8, -98, 121, -26, 13, 5, -43, 19, 106, -70, 35, 74};
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
    msg.setTimeStamp(0.13413052309884188);
    msg.setSource(10869U);
    msg.setSourceEntity(252U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(52U);
    msg.frameid = 57U;
    const char tmp_msg_0[] = {-29, 30, -107, 117, -109, 23, -124, 86, -83, -43, -109, 110, -26, -31, 26, 75, -118, 70, -125, 48, 25, -78, -12, 67, 29, -43, -1, -126, 105, -74, -6, 109, 98, -41, -21, -59, 49, -37, 65, 84, 80, 83, 2, 81, -111, -79, -33, 117, -31, 79, 109, -65, 39, 13, -126, 104, -54, 88};
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
    msg.setTimeStamp(0.8803411933750641);
    msg.setSource(59890U);
    msg.setSourceEntity(127U);
    msg.setDestination(51369U);
    msg.setDestinationEntity(193U);
    msg.frameid = 214U;
    const char tmp_msg_0[] = {-103, 54, 95, 7, -56, -47, 57, 91, 124, 6, -108, -106, -105, -92, -107, 105, -21, 50, 78, -58, -107, -77, 103, -72, -14, -75, 123, -48, 76, -107, 118, -14, -1, -25, 76, -117, -26, -9, 122, 126, 16, 85, 41, -42, 41, 69, -54, 45, 119, 63, -108, 17, -110, -1, 85, -5, -24, -29, -47, -61, 17, -42, 70, 21, 101, 47, 78, -47, -34, 11, -12, -93, 90, 68, -34, -42, 102, -10, 89, 13, 90, -18, -126, -43, 101, -18, 103, -35, 125, 40, 21, 31, -20, -67, 106, -118, 14, -22, 13, -112, 44, 25, -76, 47, 51, -32, 28, -104, 15, 87, 75, 78, -36, -73, 118};
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
    msg.setTimeStamp(0.9291705755528366);
    msg.setSource(40874U);
    msg.setSourceEntity(31U);
    msg.setDestination(1414U);
    msg.setDestinationEntity(60U);
    msg.frameid = 240U;
    const char tmp_msg_0[] = {-45, -2, 11, 62, -21, -95, -103, -28, 56, 40, -13, 51, 104, -95, -5, -99, 77, -67, -12, 46, 59, -62, 93, 55, -59, 26, -83, -80, 83, -43, 108, 105, 105, -42, 103, -93, -106, -30, -65, -94, -10, -68, 119, 91, -70, -2, -44, -23, -58, -123, -90, 21, -43, -37, 115, 62, 30, -66};
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
    msg.setTimeStamp(0.9358744653055745);
    msg.setSource(41523U);
    msg.setSourceEntity(244U);
    msg.setDestination(42009U);
    msg.setDestinationEntity(50U);
    msg.fps = 191U;
    msg.quality = 56U;
    msg.reps = 227U;
    msg.tsize = 52U;

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
    msg.setTimeStamp(0.7466921884942145);
    msg.setSource(57992U);
    msg.setSourceEntity(9U);
    msg.setDestination(21205U);
    msg.setDestinationEntity(186U);
    msg.fps = 143U;
    msg.quality = 63U;
    msg.reps = 243U;
    msg.tsize = 28U;

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
    msg.setTimeStamp(0.2937848055128284);
    msg.setSource(32233U);
    msg.setSourceEntity(133U);
    msg.setDestination(12589U);
    msg.setDestinationEntity(70U);
    msg.fps = 126U;
    msg.quality = 70U;
    msg.reps = 177U;
    msg.tsize = 59U;

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
    msg.setTimeStamp(0.8700253151971941);
    msg.setSource(62667U);
    msg.setSourceEntity(64U);
    msg.setDestination(59038U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.4675183035052337;
    msg.lon = 0.17045055644444085;
    msg.depth = 145U;
    msg.speed = 0.09302845354184541;
    msg.psi = 0.7761272116492048;

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
    msg.setTimeStamp(0.9884771110203167);
    msg.setSource(14276U);
    msg.setSourceEntity(227U);
    msg.setDestination(43615U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.42042398644242507;
    msg.lon = 0.4586963333989351;
    msg.depth = 167U;
    msg.speed = 0.9218370596008296;
    msg.psi = 0.20272476575891418;

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
    msg.setTimeStamp(0.5462008673382699);
    msg.setSource(45328U);
    msg.setSourceEntity(5U);
    msg.setDestination(42255U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.10828481899758291;
    msg.lon = 0.8393477083105447;
    msg.depth = 160U;
    msg.speed = 0.8353680947217997;
    msg.psi = 0.8083005951359064;

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
    msg.setTimeStamp(0.8700758004323674);
    msg.setSource(13880U);
    msg.setSourceEntity(42U);
    msg.setDestination(46556U);
    msg.setDestinationEntity(13U);
    msg.label.assign("IQLTSQRTGJLWXEZCNDHJLZRYHMLCYGFZZQZGZCOXBRUYBPZNDGLWPTWCPPMLYEMEIHWICIFBDOPCTQJFUKSANNRVXLOFXHHOOOEZMEWFAENYSJFQTVRPIWEUILAYOKQUQBWUJVKDWRIVBLGXMDCDOTDGGKZUZDDLMPHMWJQARUVPVBXSAIRHNVNTBRITHOUVGKEUQCMARSXXHFAMSVKBXTPNSYIJCDHSTKAFYOWEYMFJSKNGXJ");
    msg.lat = 0.3036893846795744;
    msg.lon = 0.5666763073099708;
    msg.z = 0.18102291346995836;
    msg.z_units = 151U;
    msg.cog = 0.6961639260829935;
    msg.sog = 0.16832295181392098;

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
    msg.setTimeStamp(0.6024554946403247);
    msg.setSource(55543U);
    msg.setSourceEntity(237U);
    msg.setDestination(3515U);
    msg.setDestinationEntity(226U);
    msg.label.assign("XUHCPWWHRQLCKAWSNMJMBYSRYBLRDWAYTXZTXZZHTPILUZESQZXDEKAYFPKPLTGEHQVQLQDIVRSJHAPFBKIPDVBXRFKTHFNQXSYGWHXBLFO");
    msg.lat = 0.06398762075509434;
    msg.lon = 0.916434022797725;
    msg.z = 0.0919067697537147;
    msg.z_units = 136U;
    msg.cog = 0.7431918982179083;
    msg.sog = 0.15856583125383494;

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
    msg.setTimeStamp(0.9000286071092046);
    msg.setSource(28767U);
    msg.setSourceEntity(136U);
    msg.setDestination(14582U);
    msg.setDestinationEntity(48U);
    msg.label.assign("IBCOGVOIUUOOSDENYILJGJTVEEYGWMFKQUNQGEFMZPITJLVZPRDMMYBQHRAQEDRNHMOCXXOXDWSBVWIARZIMFGJUTDRFLYPTCOSTNVJNKD");
    msg.lat = 0.9598280988299183;
    msg.lon = 0.26342118536029946;
    msg.z = 0.17427228680479168;
    msg.z_units = 34U;
    msg.cog = 0.08344967938181413;
    msg.sog = 0.7525761924988486;

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
    msg.setTimeStamp(0.22462979170705843);
    msg.setSource(55629U);
    msg.setSourceEntity(213U);
    msg.setDestination(41371U);
    msg.setDestinationEntity(221U);
    msg.name.assign("ACEDFRIIBJQJSWYOFHGFWXCFBEGNCCCBKXJYDXGOLKOEANVFLLHRVWACQHIEIMSEMCSRGXKOHVZLFTMPXEOHQFDKIPNZSPZGKTIUPQAHBDEZLYAVCJNZROUTXWZPGVUBSWUCXIUJDRDJVFFZUFZOOMBLQHHKRMAKNBNTGRXXDQAYMEJQMYVPSLPNKTKBAHUPLYCHY");
    msg.value.assign("ITLQSTTKIAZOHGTCBSNIEGJWYFRPXSANPJMFNROCXPLALWSYDSKVDJMDEOEYYZGGSSQVOVFHIQRANSIYEKQJHGYUANMQBGZXPFQNTABXJJVTNUHRLPUTMRAFMKDLXMGEKHBBA");

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
    msg.setTimeStamp(0.6516181058828311);
    msg.setSource(48816U);
    msg.setSourceEntity(24U);
    msg.setDestination(16536U);
    msg.setDestinationEntity(106U);
    msg.name.assign("BYBHMDQGHAJODUBSXZXXXFSQDVJQUSNPVLFPW");
    msg.value.assign("RPRHBDGXBXSTHFLHPTWSEYBEOWCVXDSSAOHGWEBVMSIADAQMXIZUQDLKZHZNYJTXXQZRHEJZSWRCFLWYWLFDMWPFDQUQMCLRIYFTTNANRPCAKGXUGWMJRGDFIYITJMIUNNHJIFJLYZGZAOZUOKBEZVYHNSKOOTNFUSILEVLMMCQP");

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
    msg.setTimeStamp(0.8753826016165993);
    msg.setSource(1755U);
    msg.setSourceEntity(14U);
    msg.setDestination(63586U);
    msg.setDestinationEntity(235U);
    msg.name.assign("RIUVXFLWZHYHNSPHS");
    msg.value.assign("TISOMSNXEYBSIJZPZLCEBVLGXDRECGRYKAPAVVUUQOSNTYDZPUQEOSAKWNIUZMKIJCAGZJTDTZALPGRLMXBUXBUPRMHIYQYHOHQQCJZCDNKQQHPIPGOFFYKUSYTXMTMLLJDMUXCGRAGVXEWVVWLQRSXETGTEKFHFDWERFOKCQLMDQJVUNKIBFUIBXZPYDEKOHLTGIJASMRZNPFWYMDVWHSBFJZABKCJBROCCLFSVBNXWIJAYH");

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
    msg.setTimeStamp(0.2670105826261264);
    msg.setSource(5708U);
    msg.setSourceEntity(159U);
    msg.setDestination(30086U);
    msg.setDestinationEntity(14U);
    msg.name.assign("SYWIESMLJNDTBDJORAOGKIWXJZASITNPZBEKKORUXQYGQXMSFDKJCKOIBVVXSCANAHJISYCUH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IMUBHXXMUMVTJJDPEDOGUJFCMBWCRNIDWZADKGOCJNHXYZLTVFQCTCNMGQJQXLOVECUZXRQAJWBYMYUBDPWOZLBYVNRANBNWLDAYVEEVKKFESSURCWMQOCVOTXZZFRRNQMCIKHOLETKRYZAPFHFADIIFNGDPHSWNRHPMSEBLGRGZKWQVJGIKTPHABGPSMNVCD");
    tmp_msg_0.value.assign("JKZRXGTLSJVHUEDLTQESYTFGAIONWXEOGEKTYAGVAFKWTXVVOCLXUIXPETAWWRNFKOXZ");
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
    msg.setTimeStamp(0.3435015337894377);
    msg.setSource(52414U);
    msg.setSourceEntity(239U);
    msg.setDestination(7609U);
    msg.setDestinationEntity(171U);
    msg.name.assign("PXKVOOJWHXGIVBKLYYLLFEGHARSWUCVMWFIKRWUUXFKGZOACRDSWMFRRUNQEYVUAGFYJHOKJBDNKIQRAEEHZKLQDFOPMQQQPLXZIFICJOTHTGEQBDBTQPHFESSFZLNCVMJYBHZCCGDISZPUKMYYZWTPG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KRAXVAPWBERVGJGJLXDVVKZUIYBNXYFFRUSPEUZGQTWMEEXAJGTUHCIKUZEZVBFKHODN");
    tmp_msg_0.value.assign("MXSRKWHUNACNRXWQZLCTVOQRVZCMRQIRUDGWPAGEQDAKYWMWFVPPEORRBMKEOHYOXGHVVDUVJZXCCFMNDYMYJEKVLUZKLTIVNPTQKQZZKUNXDBLRGONCCHUXHIHABCORIOPWQGKDDESPBJXHBYGZTMMMAFDLKAO");
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
    msg.setTimeStamp(0.6926051857154204);
    msg.setSource(47478U);
    msg.setSourceEntity(113U);
    msg.setDestination(51665U);
    msg.setDestinationEntity(36U);
    msg.name.assign("ZUCMOCJLMAAKQNWNXOFXNSFAPMKRFPCASGTJKVQKVLIYLUPPVWHOFHPMETDVLNXCGCQHOVLIEWEORTUSZER");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TKGSIUMLUJVCWTLYBZAQMNKMRFVKRDXJEJUUFTIQZFWTKVFUASMWHHZYCMVYSGUOEQDCWXPEBFTCQNEPKWNHCSORKXGETUIPVPUONJHLQZQGQDIGBCLWPYVXVFTXJIZISHAXBNFLKGMPWOOCHGJRSDMEWYIZSVHUAMMNRZODPFSUYLQEZKARHKRIGBHMDRTDPENPBNBKLBYNEIC");
    tmp_msg_0.value.assign("EEHMXDRNSTALTINMOBNJUPEPAIYRLYBELFXLTWYJNQFUKDIBVCTFZWOIIQPSIEUOHZRHDCPEUKKMZEZSKJOAABQGDTBDANAMVVOXKGLCGBFGWJBMUTPSZXUFAQTSNKPQVSJYCLEXHXHYHKBINZOGAMCXEQFMVYFVRGNGOVFLRCDVCDUILVPMZDQRPRRZKSXEKRHJWJRFAOKTDOWXMYBNPGJIICQGHBNFTYYJHDSU");
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
    msg.setTimeStamp(0.33416174515786357);
    msg.setSource(54851U);
    msg.setSourceEntity(212U);
    msg.setDestination(44398U);
    msg.setDestinationEntity(38U);
    msg.name.assign("BOEZFUEKORLBKCTRHCQBSQMXAQDJUJQSDOTGPQJMTUYGCPHWXSWYYOPPMKVCMREQNYJJK");
    msg.visibility.assign("EVIEFWPUSTJMMEWCIOGYKVXTNQJGAYLKFSZNMSYPFDFAZXRJAGUZERPMIIPHOUSGTEESGEZWWBTPRBTMSOTLFBYNIJCKPHWFFQRCIKJWREAVZIJDOQRXWNLJIXUMUUXXRNCWGLXHXJNZZZOCBLUWYGPIGSCWOETBAQSQTUSGCDYRJCMZVLBPVQQE");
    msg.scope.assign("UZKRLWLSGUVXCQHWXALDVYZXOPQPMWSDNRGRKETZJWUVFXQWXMPZOKXCDFCDNGYUXPUJGMRBKSNLKZRCIE");

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
    msg.setTimeStamp(0.218658668654528);
    msg.setSource(25357U);
    msg.setSourceEntity(95U);
    msg.setDestination(61807U);
    msg.setDestinationEntity(141U);
    msg.name.assign("QZWJLUFFMDWJVOKRMIAPCUBFBLYXYDVOMEXKYNEOPJAEEDHNNRNZNSRZKLMKRVRHDJASBYEPB");
    msg.visibility.assign("ZCREHQRBPIYNIKZVCUWXDOSUUEFLUHZOARFDBUMFBVQYOBGVXZIKIWSIFJQNGWPVJEJJAPMEJRPOPDRDLDFSAAUBZRIGXLJFBGPJVNGQDWLYSBUWNHLTQRDNUVULRKHYWAVFHONMOXSPYMCOCSMDKCMYLTVCPZKMJSOGW");
    msg.scope.assign("RDYXPBLRTSUVX");

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
    msg.setTimeStamp(0.5031424335582211);
    msg.setSource(23675U);
    msg.setSourceEntity(16U);
    msg.setDestination(62374U);
    msg.setDestinationEntity(181U);
    msg.name.assign("RHLURLBEBIEOTIOBDQGIDVXUSXBUSUVRWVHTNRCCTPKOLJNKCPIHMWXZPFRHWUOZYPXTDCPYUQDMLQDAESMMHGSVHRRMROLKZBEXDYKAQUBLLXEJSWZTNEYSNACKFJSAJJMCOBFKZTBPTEWQHRPWW");
    msg.visibility.assign("GNUCPAXVKJYXGITVITNXBISTGHOCNU");
    msg.scope.assign("AISADQWNTGKTAWLEVDJGJBLUGSSGMQGGSHYOIZVARNUEIYCZNXUWJGHRQNTKPOLMBXUMSEKADIMEEZTADYPEHFMFJQJYDFFXBHWCIYSHLAKOMFKJNELHBSDXVHZZLWGBPSXHQBTGOKLURZRUEZZKYTRQXIWICETCJFCVQMLPUGFOVYNFQWDWPNTTHYAVTKA");

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
    msg.setTimeStamp(0.13535737024230354);
    msg.setSource(48515U);
    msg.setSourceEntity(105U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(56U);
    msg.name.assign("IJKODZBQSIPERFGBQYGUOUCNFESAVIURXXAAJOBRTQFIGJQEDPHGLQUBDRSXYVONMVYSHWGWGPWMJNXEKLRXJNGKNHEJVQMPJCNBRMTWYSZTUWUIKRZXHPVSZMZPACWJTCOLLKDTDZBRDEOLCQUELUASJEWHUYCNDHTKARSKNZMPKMOCIAIGGBCTXFVQYQYMXOYRNHSWXMPVPWAYV");

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
    msg.setTimeStamp(0.6786081672349763);
    msg.setSource(8156U);
    msg.setSourceEntity(160U);
    msg.setDestination(14845U);
    msg.setDestinationEntity(6U);
    msg.name.assign("EOKBEWOUPVXWEHMUBTNXZVTRBLSJISRFBDFGPMGALZRZMECLLWQHKYBMALXHUIPDINACGDJTEERFCFBOTUDSABKWJWAGMBHIVECMFSJXNUYHUCGHOJWZZXJRPTTUXCPSCZIAKKKKYKJBPMYQSQWSNQPMYNXEJVVCLQPLVKPVHTHIDROQFBCDNMYGFXKZWVIVZWGDAXJIOZUONAANLRXAYEUNYDPQQGLNOGUYFYOSRIZWTQRRHVFOMECG");

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
    msg.setTimeStamp(0.09628296879365184);
    msg.setSource(60452U);
    msg.setSourceEntity(215U);
    msg.setDestination(1295U);
    msg.setDestinationEntity(99U);
    msg.name.assign("RHVTIOSICPBHMFNIMUKGCBBZJAPYTOOJXJIOFEFUKNARUQHVMMKEMILLAFF");

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
    msg.setTimeStamp(0.795263876677683);
    msg.setSource(46448U);
    msg.setSourceEntity(5U);
    msg.setDestination(63385U);
    msg.setDestinationEntity(205U);
    msg.name.assign("KPJMCBZZNQQSIXCUGJLADEWYHYCSWRHUPZJNBHVYFOKGEODSTYESCLFLVOFHWVOOGWANKUAGYVFNIAQYVRWIRNDTDMNRRZRTNUPKWZVMHXJWSVGGKMICAQEAAKEHHDMAELCSBG");

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
    msg.setTimeStamp(0.03748163675484206);
    msg.setSource(51541U);
    msg.setSourceEntity(198U);
    msg.setDestination(14527U);
    msg.setDestinationEntity(94U);
    msg.name.assign("QLHNFAFYUQZXCOAFIKQKUGEWRHHNFGSJJEBXJJIGAEDUDPESMPDHRGGIKZXZTEVYPSCDEUFDEQMOULLSVGZGXBWTMGOYOXZZXSNRQAVABBPWDLJFMYSVUNOQITEANPWWIDKSFC");

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
    msg.setTimeStamp(0.007936653440560715);
    msg.setSource(20532U);
    msg.setSourceEntity(168U);
    msg.setDestination(48666U);
    msg.setDestinationEntity(163U);
    msg.name.assign("TIZHYVPRETSCYBLGWZAGVQONFKNKNPKBZNDXYRJFTHROZTVNZYAQQDAUWXKUDVIAWNZRDBZFMAUJMUTMXNDWSDSIUOYCXEZGLNVXXKQEGJWMQRNCIWLCFEJRZGQMHAKDIMRVFJPEIWPLBKVUASWLYOJGHXECBFUPKEMSMRSHHCCZHETGOSUTLHBPPUOPYLEUSTMIHMLJVXVLIBQRCNRAQOPYSCBYO");

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
    msg.setTimeStamp(0.9007015054338153);
    msg.setSource(49281U);
    msg.setSourceEntity(173U);
    msg.setDestination(17817U);
    msg.setDestinationEntity(230U);
    msg.timeout = 1402447633U;

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
    msg.setTimeStamp(0.6235130244532165);
    msg.setSource(522U);
    msg.setSourceEntity(116U);
    msg.setDestination(59881U);
    msg.setDestinationEntity(202U);
    msg.timeout = 828859173U;

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
    msg.setTimeStamp(0.5142138421669796);
    msg.setSource(35384U);
    msg.setSourceEntity(127U);
    msg.setDestination(4770U);
    msg.setDestinationEntity(235U);
    msg.timeout = 3592087217U;

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
    msg.setTimeStamp(0.6024425213603948);
    msg.setSource(56636U);
    msg.setSourceEntity(74U);
    msg.setDestination(13177U);
    msg.setDestinationEntity(104U);
    msg.sessid = 1276084092U;

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
    msg.setTimeStamp(0.07136849301721049);
    msg.setSource(6508U);
    msg.setSourceEntity(201U);
    msg.setDestination(31191U);
    msg.setDestinationEntity(26U);
    msg.sessid = 3872698773U;

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
    msg.setTimeStamp(0.34746130886571536);
    msg.setSource(41354U);
    msg.setSourceEntity(153U);
    msg.setDestination(22410U);
    msg.setDestinationEntity(56U);
    msg.sessid = 1692721066U;

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
    msg.setTimeStamp(0.7329363482703005);
    msg.setSource(41557U);
    msg.setSourceEntity(45U);
    msg.setDestination(54419U);
    msg.setDestinationEntity(27U);
    msg.sessid = 4132750897U;
    msg.messages.assign("GDNVJUNXYBJHGOBIUUUNJTMHPMFELBFTTUOIGVMLAEUWTCYCQXINV");

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
    msg.setTimeStamp(0.6722518820157024);
    msg.setSource(30038U);
    msg.setSourceEntity(33U);
    msg.setDestination(29379U);
    msg.setDestinationEntity(251U);
    msg.sessid = 2338418661U;
    msg.messages.assign("VDHBBANYKUELYMWQGKRFVCHZOHJPTLSSPBYYIPALNQGVKPHXRGKMDICYCAQBMLWZGKVERBEUIUAJTJNLCEADJFSYSCHCPHLZNLCSJMVAAROGWFZXUMUKJVMZQWSVGBEDIXWDUZSXFXOTQFKDJOIQCWHUTFAOXHTJNYXNBDBSOUSXE");

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
    msg.setTimeStamp(0.32919421693895057);
    msg.setSource(25696U);
    msg.setSourceEntity(73U);
    msg.setDestination(31952U);
    msg.setDestinationEntity(238U);
    msg.sessid = 2747675703U;
    msg.messages.assign("QMCSGDEITBIUHDWASFXQYBQZKNUYJEFVNCLGLPEHBCWXJFJJZPYIKFJNJOKOKEF");

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
    msg.setTimeStamp(0.36035610107311855);
    msg.setSource(8619U);
    msg.setSourceEntity(118U);
    msg.setDestination(17495U);
    msg.setDestinationEntity(124U);
    msg.sessid = 4045216122U;

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
    msg.setTimeStamp(0.8699913592268713);
    msg.setSource(13495U);
    msg.setSourceEntity(62U);
    msg.setDestination(31769U);
    msg.setDestinationEntity(186U);
    msg.sessid = 2910550109U;

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
    msg.setTimeStamp(0.8863771665215);
    msg.setSource(17768U);
    msg.setSourceEntity(251U);
    msg.setDestination(47295U);
    msg.setDestinationEntity(154U);
    msg.sessid = 3128782078U;

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
    msg.setTimeStamp(0.5678981578926792);
    msg.setSource(38786U);
    msg.setSourceEntity(215U);
    msg.setDestination(4415U);
    msg.setDestinationEntity(175U);
    msg.sessid = 320985565U;
    msg.status = 37U;

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
    msg.setTimeStamp(0.7597905303387597);
    msg.setSource(39990U);
    msg.setSourceEntity(72U);
    msg.setDestination(46076U);
    msg.setDestinationEntity(240U);
    msg.sessid = 627556105U;
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
    msg.setTimeStamp(0.11411917401514893);
    msg.setSource(30223U);
    msg.setSourceEntity(41U);
    msg.setDestination(19130U);
    msg.setDestinationEntity(32U);
    msg.sessid = 936511065U;
    msg.status = 105U;

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
    msg.setTimeStamp(0.42132083015915645);
    msg.setSource(3892U);
    msg.setSourceEntity(166U);
    msg.setDestination(11456U);
    msg.setDestinationEntity(161U);
    msg.name.assign("MRAYILTGJAHVCBJMTIZHZDQEREUQUHGBBNNLCXROKMMLKNJHFZWILEIPDHOZFHNSTSDYZIXOYQISTXHJHSHTSERVPGFALCXRKGTPBAOAUYV");

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
    msg.setTimeStamp(0.33426489576059404);
    msg.setSource(23995U);
    msg.setSourceEntity(123U);
    msg.setDestination(58589U);
    msg.setDestinationEntity(146U);
    msg.name.assign("TWPBWDWPIIYQJFQPYUUHFYDUZARYFGHESJCVIHVWCZHLXYJXLEBEPFGORSFOJBJILBJXBCANELOMYNGGJGPVCBNRAORNOTGDRZVPBBHQYFIARKJXHJYHSWHLMWLEJIVZYQGBCVMEELTQKWNPGQHMOPSFTKTXGMVDCTR");

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
    msg.setTimeStamp(0.05765677492410515);
    msg.setSource(53709U);
    msg.setSourceEntity(241U);
    msg.setDestination(5843U);
    msg.setDestinationEntity(137U);
    msg.name.assign("JNOZAQYMBZFNMTVVVTOECQMFLYXOPSJXELACKHINXOHSCPRSGABJDKKJWEZVPHAASPNBQWWURQNMZHWXFYNLLDFLAWSYGHOIXMQVJIUQASOFDWCRXWPVGZOBWDZBBEKXPGVFECSURRQPBMUVGAIJBLUBMFSHIIMQINXDVICYIREYDYUEXTLD");

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
    msg.setTimeStamp(0.9843773749865693);
    msg.setSource(14524U);
    msg.setSourceEntity(164U);
    msg.setDestination(43288U);
    msg.setDestinationEntity(162U);
    msg.name.assign("PKSSJDGIATWSVZEQCHDJEWIZUYGDPOIHBWNT");

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
    msg.setTimeStamp(0.22051722994743117);
    msg.setSource(32777U);
    msg.setSourceEntity(155U);
    msg.setDestination(4050U);
    msg.setDestinationEntity(127U);
    msg.name.assign("EGJDZOZPBXYXCUVBGYFRTPIFGRQUQSBRILTMJHSWTPLXWOUHPAZDAYALXBEOAWSGRIHHGACGRSNKKVWMRTTOTUGKNAZWOBQLDPHUWLZKYISQDIRPZNLECKEKNXMVDNJY");

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
    msg.setTimeStamp(0.48081300162853013);
    msg.setSource(774U);
    msg.setSourceEntity(4U);
    msg.setDestination(15356U);
    msg.setDestinationEntity(254U);
    msg.name.assign("BLHVMTLZEORFYWWELKQZIMCYQQRFTJUZPUYDSTVRPULPKTIJOYCVXTJFVKNGFXUZVAFIISVZUMOQGSDBSKEIUAYEQWAFEQGPZPSLLWGGNBFNUWEGT");

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
    msg.setTimeStamp(0.8286351989567093);
    msg.setSource(5977U);
    msg.setSourceEntity(125U);
    msg.setDestination(24583U);
    msg.setDestinationEntity(215U);
    msg.type = 71U;
    msg.error.assign("XJIYAOJPCNWIQLXMUDBQIWKFXHBJJMLTTBWKOGDFYFMNBYSWIYEMOXWAALEFDRLKORDDUGWLUGANNZCIAGUXVYBKGEMRTMZFPADCIKXG");

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
    msg.setTimeStamp(0.4778551783311744);
    msg.setSource(41911U);
    msg.setSourceEntity(22U);
    msg.setDestination(6415U);
    msg.setDestinationEntity(26U);
    msg.type = 41U;
    msg.error.assign("ZQLTSQBXGMLNHSUGIAXDTTBQCTOCXRDKCYPWPFZZHPRLMQQMXNCGMUTFERHELPFGYOARRKGKZSJULFBQCVDYDSIVFCMMDTEWHXGFBHKWMNSHAFBPJAZDVVZHNUNXOOXXDWHICLOQMRKGGUJTXVIEVJSPNBBZPEZRVAIPWWJZLYQDUOUBG");

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
    msg.setTimeStamp(0.9341440633186461);
    msg.setSource(26595U);
    msg.setSourceEntity(3U);
    msg.setDestination(33900U);
    msg.setDestinationEntity(116U);
    msg.type = 244U;
    msg.error.assign("YLWPTZUONTMSRBZQZHQDDOYNCAXAUEKVLKLCNRUSIXEXWUVCYHEJHTLAIWUGALNGSHQMKJRCPIJNWPFZSPFYZNIEAOSTQCORXTBOUNOFGRNIOKZMSGDWKMWDZVXNHER");

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
    msg.setTimeStamp(0.09328332975273823);
    msg.setSource(10906U);
    msg.setSourceEntity(172U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(62U);
    msg.seq = 46604U;
    msg.sys_dst.assign("FMOPBQXYKPDRRRYZBXPWWXMUVDGRKURQUKPNANKRNHLVZUXKBIEHHWMMIBSCRZFNVNAYKCKMAOUSGSTMIKJHCGLASOBZUJ");
    msg.flags = 160U;
    const char tmp_msg_0[] = {120, -20, 69, 69, 33, -57, -38, 14, 59, 6, -85, -110, 8, -46, -110, -102, 5, -85, 52, 5, -6, 41, 106, -104, 51, 50, 102, -85, -115, -31, 90, -120, -55, 120, -2, -24, 36, -83, 124, 90, 107, 24, -119, 109, 77, 99, 87, -106, 69, -127, -122, 87, 91, 126, -45, 22, -75, -50, 121, 40, 110, 3, -73, 62, 107, 11, -80, -18, 121, 104, -67, -54, -4, 126, 38, -94};
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
    msg.setTimeStamp(0.6873351243888501);
    msg.setSource(625U);
    msg.setSourceEntity(140U);
    msg.setDestination(37257U);
    msg.setDestinationEntity(111U);
    msg.seq = 37395U;
    msg.sys_dst.assign("WUENJJPBJJHWSBXDSSZBIJLXPLDZDUKJXBHZXBOJTZQRXTYXZPVJIMWFLYEBGYUXKUOEOOSGISTOFMDYAYFYRHRKIZNVVUNZDNNACVGRMDGAKGAIKRBQOULWHXIYAVXAWQCGXYRHPHFGKBDIMDQEPIBQOBLVJPHCMAPUZZFULWESFESACVKNLECCTHMLMAKGPSHRRUWLMFMTEWYDYQIQDT");
    msg.flags = 169U;
    const char tmp_msg_0[] = {44, -9, 5, 125, -9, 55, -31, 81, 29, -22, 113, -90, 77, 32, -83, 1, 36, -28, 88, 88, -118, -67, -113, 59, 110, -119, -82, -89, 116, -100, -30, 4, -125, 112, 27, 80, 47, -57, -56, 97, -108, 24, 94, 19, -6, 29, -83, 31, 8, 77, -65, -66, 118, -63, 13, -65, -72, 119, 81, -5, 120, 89, 120, -89, 20, 57, -47, -94, -30, -80, -114, -127, 45, -96, -112, 116, -27, 7, -92, 17, 71, 82, 111, -36, 18, 23, 52, 88, 47, 117, 40, -23, -110, 47, -38, 115, 100, 41, -4, 46, 33, 13, 16, 63, -117, 16, 72, 56, -47, -5, -120, 19, 25, -79, -110, 5, -66, -14, 22, -20, 102, -72, 2, 103, 86, 91, -35, -23, 121, 24, -60, 113, 24, 64, -1, -118, -107, -93, 112, -111, -9, 48, 42, -60, 38, -36, 61, 18, 78, 79, -106, -62, -90, 97, -89, 28, 112, 18, 21, 28, -8, -58, 17, -24, -22, -34, 62, -109, -69, -13, -81, -104, -105, 70, 34, -40, 106, -71, 56, -8, 18, 21, 93, 90, -91, -48, 15};
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
    msg.setTimeStamp(0.5518136226498839);
    msg.setSource(50063U);
    msg.setSourceEntity(57U);
    msg.setDestination(37542U);
    msg.setDestinationEntity(8U);
    msg.seq = 25047U;
    msg.sys_dst.assign("NDUMIRNKJLYNDAHPTDJLVWKKRSNOPZVZZPHKHWAJGOAEXDJZTCKXVDFHMSEIWAGMDGTVQFWOUFCJQCJXZKRGDEBWWXBPHHOZIMJLROPYVEJLJAFTPVKMDLUXYEFNSENYQMCGXNCBALQSIPVPLHIIBCMIWVEPRSFXBMOOYRSMYYRUQGHRGGFGRZQIXQYFEBSQNTCNYALBUHSLBKTETWOFMOVCSAAZTGUFLXDZVTUUUIABONQXCD");
    msg.flags = 149U;
    const char tmp_msg_0[] = {93, -86, 56, 28, -107, -88, 13, -60, 4, 49, 10, 12, -6, -74, 24, -96, -2, -66, -111, -25, -62, 34, -73, -125, -33, -84, -73, -116, 114, 54, -12, 66, -40, 104, 71, 12, -107, -22, -92, -117, -58, 83, 79, -3, -121, -110, -35, 85, 109, -124, 32, -103, -35, -118, 35, -18, -71, 65, -48, -98, 120, 9, -73, 103, -15, 117, 72, 4, -25, 34, -109, 99, -54, 107, 4, 89, -67, 51, -59, 30, 17, 118, -6, 88, 112, 72, -118, -26, 79, 39, -73, 121, -99, 115, -28, -49, -122, 121, -51, -38, -116, -67, -102, -101, -71, 110, 67, 45, 45, 50, 81, 2, 79, -26, -69, -109, -116, -59, 29, -48, -32, 91, -73, -30, 57, -95, 104, 9, 37, 95, 106, -117, -69, 112, 1, -104, -126, -126, -89, -55, 113, 58, 112, 109, 48, -104, -100, -55, -23, -126, -115, -69, 125, 43, -17, 10, -9, -110, 46, 27};
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
    msg.setTimeStamp(0.133743894800757);
    msg.setSource(42101U);
    msg.setSourceEntity(30U);
    msg.setDestination(37712U);
    msg.setDestinationEntity(70U);
    msg.sys_src.assign("IQTWKEDZYKZLECKPDIZP");
    msg.sys_dst.assign("NJMAMJGVYHCSJVAPKNICULYDLLBOGENIQMYXSGGZYCJLEPHGMNYGFADSWHKTUVMMPVOBEUDMXUQRMCAPGWCESDOFISIXFUZAKHJPTNQQBEASZVZDATVZFXLAROXQREBIQZKWZHTKOOD");
    msg.flags = 128U;
    const char tmp_msg_0[] = {104, -43, 98, -76, 56, 25, -30, -88, -36, -120, 123, -64, -83, 34, 85, 63, 74, 112, -8, 107, 70, -59, 112, 103, 29, 21, 56, -66, -76, 39, 101, -33, 38, -69, -15, -8, -105, 125, -23, 116, -13, 5, -78, -57, -72, -18, -98, -58, -38, 63, -113, -99, -69, 58, 43, -76, -76, -22, 88, 55, 109, 26, -121, 32, 125, 48, -77, -107, -2, 61, 118, 65, -93, -116, -41, 59, -40, 13, -53, 95, -64, -93, 114, 109, -92, -55, 2, -122, -21, -5, 21, 110, -77, -32, -52, 106, 31, 4, -96, -85, 55, -34, 117, 94, 51, 41, 76, 68, -5, -114, 53, 40, -40, -25, 83, 84, 9, 44, -61, 43, 77, 10, 76, -106, -94, 45, -44, -120, 8, 115, 77, -87, 94, 124, 72, -23, -61, -66, 31, -24, -44, -108, 107, -9, -73, -78, 52, 61, -90, -72, -92, 50, -74, -62, -71, -9, -95, 96, 121, 32, -88, -82, -28, -95, 45, 27, -13, -63, -99, -125, 2, -124, 98, -90, 33, -127, 83, 103, -121, 67, 13, 29, 95, 19, 108, 39, -106, 22, 47, 104, 96, 46, -12, -50, 38, -124, -42, 106, 113, 66, -42, 88, -39, 117, 123, -126, 63};
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
    msg.setTimeStamp(0.004820375395480081);
    msg.setSource(6180U);
    msg.setSourceEntity(157U);
    msg.setDestination(57288U);
    msg.setDestinationEntity(175U);
    msg.sys_src.assign("PIZRFHLJJXERNWNSACE");
    msg.sys_dst.assign("ULQABKEPAZIYITMFXUYTWQLYXIRATCGCKMFYWTXTCMWJXRZDTCDUUCKXGJLQXOIZVSWRTSSZHVETWRWQFCLQFGAZJFZWBKCTNFEODURMLHQNWKOKLHOLMGSIACHHQERKTUWO");
    msg.flags = 140U;
    const char tmp_msg_0[] = {-117, -124, 7, 51, 14, 94, -127, -117, 110, -83, -26, -9, -23, -103, -76, 121, 97, 89, 64, -49, 27, 8, -78, 61, -14, -104, 87, -120, 34, -91, 111, 90, 86, 21, -29, -19, -106, 6, -75, 12, 24, 48, -108, -98, -72, 106, -123, 14, -88, 62, -41, -36, 1, 50, -51, -35, 120, -76, -45, -56, 115, -54, -30, 65, 50, 77, -80, -42, -54, 4, -75, 65, 29, -15, 124, -14, -16, 93, 25, -27, 106, -70, 45, 30, -38, -52, -59, 11, -105, 109, 50, 18, 80, -45, -8, -124, 25, 60, -118, -112, -33, 109, 110, -63, -58, -119, -75, 67, -120, -47, -37, 7, -34, 49, -27, -50, -121, -116, -7, -33, -13, 43, -16, 15, -21, 45, -44, 69, -91, -120, -30, 126, 117, -15, 82, 53, 122, -6, -80, -33, -97, 19, 110, 64, 50, 59, -72, 123, 94, 117, -1, 83, -8, -64, 32, -49, -52, 51, -3};
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
    msg.setTimeStamp(0.39926897955035745);
    msg.setSource(318U);
    msg.setSourceEntity(88U);
    msg.setDestination(7304U);
    msg.setDestinationEntity(177U);
    msg.sys_src.assign("KWMEIGBIVVEEAIBVMCYUYXNHAAGGQFUSDGFDYLDLBQKBAULNTINRQQZYGRBJCZMBOSWTHUWWFLVDPPSATFIEWJTFNCNXCPPEHPRYSJNLKSJCRKXHETGRSOPHCINKRDSWNAHQQKPXNSTBXDVMTOJKJQIXQPWZPORDGRQCEXAGEJBGZZPOMIKQCXLHYLZLITJDNYMFFRSDXKSWYAVMFVGRCLYOTEFOJUBMHUBZVWOXCHLIWZMADVYMKOF");
    msg.sys_dst.assign("DGAXNZSLPEPJUZCRGLJIJYOWFGDKOQGOJTYYWGVNBPMLQYLZNDQZYPOFYT");
    msg.flags = 160U;
    const char tmp_msg_0[] = {15, 82, -31, -54, 3, -97, 3, 110, -65, -32, 115, 71, -4, 114, 48, -2, 110, -19, -2, -87, 102, 105, -37, 108, 103, 16, 56, -74, -38, -126, 41, 96, 83, 90, 26, -1, -48, -39, -28, 56, 114, 1, 72, -35, -28, -9, 28, 83, 97, 34, 5, 98, -109, 8, 77, 93, -95, 38, -22, -119, 71, 112, 81, -107, -82, -44, 52, 53, -57, 2, -33, 78, -26, -21, -66, 71, -102, -32, 8, 15, -99, -50, 30, -29, -97, 44, -122, 115, 69, 76, -125, -22, 77, 43, -42, -101, -34, -17, 19, 78, -92, -60, 0, -128, 49, -75, 39, 90, 20, 53, 47, 15, -12, -7, -70, -81, -21, 59, 58, 75, 102, -104, -110, -45, 29, 126, -12, -110, -116, 5, 119, -78, 49, -123, 76};
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
    msg.setTimeStamp(0.925788537953877);
    msg.setSource(49450U);
    msg.setSourceEntity(116U);
    msg.setDestination(28368U);
    msg.setDestinationEntity(235U);
    msg.seq = 43317U;
    msg.value = 164U;
    msg.error.assign("RLZXFRNJJICTDUKTWHMMNXOAIOLGYYRN");

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
    msg.setTimeStamp(0.43417925887425035);
    msg.setSource(20675U);
    msg.setSourceEntity(103U);
    msg.setDestination(54912U);
    msg.setDestinationEntity(51U);
    msg.seq = 49307U;
    msg.value = 77U;
    msg.error.assign("PDKQLYJJYHFQPVCEIJZLPOCAOSTMOQEQYNRLIWUVNRNSUGTJNRAKCFSPIQEHYCFVEFDKGRGUPZOVTGDWAYTEMGKIMQNUBFDDZBUVTHBOJFDBADCMLGHIDEWWUSCYBUTCVRUVTCLVWIPQBPKPGYHSIKZQJWDXFRMJJXYPBAVEEBGXZWKXIKXMLYONWSEJLANSPYXZVQNXLFWIIHLZDFRMOTCAXJEGTAXHCSUHMRQZSFKRL");

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
    msg.setTimeStamp(0.47116130201676754);
    msg.setSource(56540U);
    msg.setSourceEntity(243U);
    msg.setDestination(54770U);
    msg.setDestinationEntity(67U);
    msg.seq = 62777U;
    msg.value = 194U;
    msg.error.assign("UZWLVNCMYZQFXDAJRDZRXXZCOYCUHIRTIELMGQUZLJHZVATUSNEEFNJNAFMSPSCKQXWTGJLDQSGAUBNOQMWPCDYLQDKZWREEJDC");

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
    msg.setTimeStamp(0.6162504117381463);
    msg.setSource(1662U);
    msg.setSourceEntity(81U);
    msg.setDestination(2026U);
    msg.setDestinationEntity(175U);
    msg.seq = 6596U;
    msg.sys.assign("KUZTHABEMZRBASGIKPVTVTQZDCAGOFREWZOEUWTVJCWRMOKBRYMKVDCIHLJFAXKUNZYILMCLRPDDBFFYLAWOHPARBLJWVVYGTGICJRHZELBVQYSZNFLPXLAOCNSSIUXUJPJEXGQSTGDPNYVVUTSQWD");
    msg.value = 0.6895061998972275;

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
    msg.setTimeStamp(0.2232700503898083);
    msg.setSource(39549U);
    msg.setSourceEntity(4U);
    msg.setDestination(34546U);
    msg.setDestinationEntity(170U);
    msg.seq = 64665U;
    msg.sys.assign("EMPXOCODORKPWIJQSZTDMAXAUTCHJEPGLQYEAEKYQYLTOAHCDQKFFFQPNSCBVLNSWULFRANZDVUVINRJFRRLFIGJKWYWPANQVMFMYHFXLRBUDD");
    msg.value = 0.24172937589402765;

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
    msg.setTimeStamp(0.20469002755593957);
    msg.setSource(28624U);
    msg.setSourceEntity(91U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(175U);
    msg.seq = 19515U;
    msg.sys.assign("DOJPCBYOJYYPNPSIIFOWKXITEWWVQSBIEFLHITAQELJKRWSHPDVT");
    msg.value = 0.4199809588910255;

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
    msg.setTimeStamp(0.843338443849076);
    msg.setSource(17428U);
    msg.setSourceEntity(85U);
    msg.setDestination(55803U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.9452528919850297);
    msg.setSource(26959U);
    msg.setSourceEntity(55U);
    msg.setDestination(9864U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.7567992092502088);
    msg.setSource(53470U);
    msg.setSourceEntity(113U);
    msg.setDestination(41886U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.46629802964025435);
    msg.setSource(40602U);
    msg.setSourceEntity(80U);
    msg.setDestination(41007U);
    msg.setDestinationEntity(133U);
    msg.action = 9U;
    msg.longain = 3805058378U;
    msg.latgain = 4170049003U;
    msg.bondthick = 2600588298U;
    msg.leadgain = 2171807820U;
    msg.deconflgain = 3208176073U;

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
    msg.setTimeStamp(0.7269910499720619);
    msg.setSource(24885U);
    msg.setSourceEntity(128U);
    msg.setDestination(11771U);
    msg.setDestinationEntity(163U);
    msg.action = 22U;
    msg.longain = 2771590916U;
    msg.latgain = 250463356U;
    msg.bondthick = 2702776772U;
    msg.leadgain = 2005820604U;
    msg.deconflgain = 2327466889U;

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
    msg.setTimeStamp(0.37475692037006636);
    msg.setSource(17617U);
    msg.setSourceEntity(23U);
    msg.setDestination(30827U);
    msg.setDestinationEntity(51U);
    msg.action = 20U;
    msg.longain = 4003840522U;
    msg.latgain = 3790488473U;
    msg.bondthick = 107750028U;
    msg.leadgain = 4095297104U;
    msg.deconflgain = 1692509779U;

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

  return test.getReturnValue();
}
