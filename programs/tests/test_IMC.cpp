//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: ac6fc6f4b1f5c445991672dbda04723d                            *
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
    msg.setTimeStamp(0.21228888373869936);
    msg.setSource(5136U);
    msg.setSourceEntity(221U);
    msg.setDestination(4891U);
    msg.setDestinationEntity(172U);
    msg.state = 110U;
    msg.flags = 254U;
    msg.description.assign("JFTICCIDYKNSSDEOUXMOTXZMONEODLUBWHSAUVVRZAFVXSQMXHDGTAOBXDEOHJHKSZYAVQJEZRVLMZFEOENXQYUBZKBSFWLACDRTVPFHYSVVSPKCZRJNKABJBMHXYUBKFDIJLCPTAHRGQZJYITCWKSQTFRREIUFMNTLQBCUGCMKCAGEOMGPIUVSPXLOGEZLGMDNAMDGUWTEWYNXWPTNWILWPYRHZBDWHQ");

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
    msg.setTimeStamp(0.9191924613926462);
    msg.setSource(43205U);
    msg.setSourceEntity(22U);
    msg.setDestination(36743U);
    msg.setDestinationEntity(224U);
    msg.state = 147U;
    msg.flags = 109U;
    msg.description.assign("CVRQZFAWJKBDXMBZTUWYTJVJSPOQQZYDVHDUGSBKLCUENTIYBXXVPGBLNICKPHTASLEGFJMBUEKDSZGJVGILRSRGFFLBKWGYLRJATPMSKDQCZQNUXEYOQNNBZHMKADNAIFRGZJPETHMWPUOFAHSRQSXOAUBVOWMWWOKMSFTNAGOLFDSEYRVAWAPHZCQYCPYDZ");

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
    msg.setTimeStamp(0.18818569202900726);
    msg.setSource(17319U);
    msg.setSourceEntity(254U);
    msg.setDestination(22481U);
    msg.setDestinationEntity(139U);
    msg.state = 62U;
    msg.flags = 6U;
    msg.description.assign("OPPGZKXJKCENSDLHAMEABDBPNOECSYPFEFQDMDHROSOMFKVXETPWSYTMZQQCHNWWZTWILXBUQILOXJUSLVDGI");

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
    msg.setTimeStamp(0.3778959441293228);
    msg.setSource(2399U);
    msg.setSourceEntity(195U);
    msg.setDestination(44721U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.6375654710195723);
    msg.setSource(35090U);
    msg.setSourceEntity(55U);
    msg.setDestination(18372U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.005514434016698266);
    msg.setSource(35962U);
    msg.setSourceEntity(227U);
    msg.setDestination(35317U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.5726826360938595);
    msg.setSource(41382U);
    msg.setSourceEntity(83U);
    msg.setDestination(29639U);
    msg.setDestinationEntity(232U);
    msg.id = 21U;
    msg.label.assign("FKXCTKITNSVNOZDPMDIFKDFRQFSYAEAMYUANLGUDCTLWVGEJHEEMGFOHPBHNCYCIKDRWNMHDRIBIYBLJXOSEJYXRUAKPCZHTSMYVHWSTWFMVAOZQALHNRZPZIVBEDHDFOFQANLZUTGQGOQPKBKTLOQRRBPGZAUWJCZCMIXCQOSQNXMBEMOTRJWPVUUQWZJAXGVBWXRJDDEZJBNNXGXGX");
    msg.component.assign("FRMOKFGZWHZNCCCGDYBDXNJQWOLRQTHEUMEKTUXOZVTBQHPWNKSHOBAZMBVCRMMQDVLZIEIGAXBDLPJGIJKXSJUJPHFJQIZERGACZYUTXOBOFCICUYKVCYUHMBNBPPZVGPHNAZWEAWRRQXPXKYAJYSLSQNIWBATKOTTYXSLBIQVUJWYFGWLSRJNYAEU");
    msg.act_time = 6431U;
    msg.deact_time = 57127U;

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
    msg.setTimeStamp(0.12802086579723282);
    msg.setSource(28555U);
    msg.setSourceEntity(140U);
    msg.setDestination(52557U);
    msg.setDestinationEntity(97U);
    msg.id = 25U;
    msg.label.assign("XYBEBXEPTBEHBUOGIZUGYMRSAFWCVLGENQHTMZ");
    msg.component.assign("WVLRGUGTBOSKDGTRXRWNSTOKYHYMCNIOZZBXMRYQVCJFJGAHNEOJBMOWFUIWXQOBEHDLEODQSUMUVXB");
    msg.act_time = 49787U;
    msg.deact_time = 50617U;

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
    msg.setTimeStamp(0.22478216993864986);
    msg.setSource(11308U);
    msg.setSourceEntity(59U);
    msg.setDestination(54025U);
    msg.setDestinationEntity(231U);
    msg.id = 5U;
    msg.label.assign("KUAOAVAOKKOSUKFRFDESIGNTPYQHKBIOQTZTGRJPHVFQECTZGNIPJWAPAQBFCZVYNASOOCFHESMYOJYBZQSVAZNNYRPHZPQI");
    msg.component.assign("KXAFOLEUNWNBLJMERHKIQLQWAORPBGAIYTUCBFNAYBHHTBMUIUDWDTTJWIGDYK");
    msg.act_time = 63610U;
    msg.deact_time = 8001U;

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
    msg.setTimeStamp(0.43083562516158036);
    msg.setSource(43309U);
    msg.setSourceEntity(63U);
    msg.setDestination(29715U);
    msg.setDestinationEntity(76U);
    msg.id = 103U;

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
    msg.setTimeStamp(0.4692437257336446);
    msg.setSource(37372U);
    msg.setSourceEntity(77U);
    msg.setDestination(4582U);
    msg.setDestinationEntity(187U);
    msg.id = 227U;

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
    msg.setTimeStamp(0.9995313731600455);
    msg.setSource(3388U);
    msg.setSourceEntity(89U);
    msg.setDestination(65113U);
    msg.setDestinationEntity(46U);
    msg.id = 240U;

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
    msg.setTimeStamp(0.47647355077665254);
    msg.setSource(49442U);
    msg.setSourceEntity(160U);
    msg.setDestination(44315U);
    msg.setDestinationEntity(57U);
    msg.op = 61U;
    msg.list.assign("CBVSGQIPOINKMIINZSXQAHUOHCFZWNYWCGDQFY");

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
    msg.setTimeStamp(0.6587505442786249);
    msg.setSource(50671U);
    msg.setSourceEntity(24U);
    msg.setDestination(27723U);
    msg.setDestinationEntity(226U);
    msg.op = 214U;
    msg.list.assign("KRUDEPGUZYR");

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
    msg.setTimeStamp(0.05844059941524249);
    msg.setSource(48245U);
    msg.setSourceEntity(149U);
    msg.setDestination(35253U);
    msg.setDestinationEntity(76U);
    msg.op = 30U;
    msg.list.assign("HDRLVJNVVFYCHWELNREDZZVKDEYNXENKGKENTJYHAXSCBIDPWJHPWFXFKTLCHBAUSLWZENIEOKDIYLRAMCFQPJYQIKMDJBSLYJGBCWXQXIUPOPVMPYQNSIWAPZOCVOGXKGSOTFUBTTMQBQTLTZGFZMZUMCCWAWYJSZCXPRJRCRSRSRQWIAFHXY");

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
    msg.setTimeStamp(0.46328670509913217);
    msg.setSource(53528U);
    msg.setSourceEntity(5U);
    msg.setDestination(34760U);
    msg.setDestinationEntity(99U);
    msg.value = 163U;

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
    msg.setTimeStamp(0.9247354903033111);
    msg.setSource(44035U);
    msg.setSourceEntity(180U);
    msg.setDestination(50059U);
    msg.setDestinationEntity(133U);
    msg.value = 170U;

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
    msg.setTimeStamp(0.17622149704476942);
    msg.setSource(58803U);
    msg.setSourceEntity(170U);
    msg.setDestination(20556U);
    msg.setDestinationEntity(153U);
    msg.value = 226U;

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
    msg.setTimeStamp(0.6207023369240302);
    msg.setSource(27887U);
    msg.setSourceEntity(84U);
    msg.setDestination(16452U);
    msg.setDestinationEntity(55U);
    msg.consumer.assign("HUCEILGECBHORJNSXRUURFSWCBTAIXLNQLJXWOQZLHGNXDTWIKRYYILJVHRCDJCFBTMEAMZMONUYTURUMCPJEIKVUECHOBOVLEHYKMWSDIUVVDFFAJDBEFWJSYPTGNQWMLOQCTTZKUDJRNKWNW");
    msg.message_id = 46905U;

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
    msg.setTimeStamp(0.7794810597607056);
    msg.setSource(53176U);
    msg.setSourceEntity(190U);
    msg.setDestination(28614U);
    msg.setDestinationEntity(140U);
    msg.consumer.assign("CJCAKQNWEIEOVRGHPDMHCJNGWCNGMQCDWXFWCUEIUZDGWBSSRYLYDVSYNSNOSSPZBYCJZJNTTARPGVISEJIPMDNFIKYZXWYEXVQVAMMKLPFOLABHIQYXJMURCBAQGYVDDWONRULEOTSUAQVKKMXQOFKTTBEHWLXJUVFHZFAFTDVTKGPJROZEHHUIDUOQFELYLGBXHTZZARQVBGKXHJXQLNBIDILCLPAZUGUHMCRPWMSSTBWYJKFP");
    msg.message_id = 19102U;

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
    msg.setTimeStamp(0.9556382926807137);
    msg.setSource(16292U);
    msg.setSourceEntity(127U);
    msg.setDestination(39898U);
    msg.setDestinationEntity(211U);
    msg.consumer.assign("AOTFQLIQELQNYOHDWZQHAZFVMHTFYYSWIHTXUCZEVJJINDPJUDRFSDQDNAGOXMZWTQHBPDHGJIMMVSFWVGREBPLZKSJ");
    msg.message_id = 32486U;

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
    msg.setTimeStamp(0.03400165088627927);
    msg.setSource(48306U);
    msg.setSourceEntity(207U);
    msg.setDestination(57333U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.11614260196475357);
    msg.setSource(60671U);
    msg.setSourceEntity(6U);
    msg.setDestination(31071U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.9995329382424046);
    msg.setSource(51747U);
    msg.setSourceEntity(226U);
    msg.setDestination(23269U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.31900675758668084);
    msg.setSource(2671U);
    msg.setSourceEntity(175U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(73U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.9376993898298261);
    msg.setSource(61860U);
    msg.setSourceEntity(119U);
    msg.setDestination(47939U);
    msg.setDestinationEntity(172U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.7040805268739049);
    msg.setSource(62564U);
    msg.setSourceEntity(48U);
    msg.setDestination(15520U);
    msg.setDestinationEntity(128U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.39225180026548767);
    msg.setSource(13790U);
    msg.setSourceEntity(161U);
    msg.setDestination(64274U);
    msg.setDestinationEntity(172U);
    msg.total_steps = 27U;
    msg.step_number = 168U;
    msg.step.assign("SDAOTIZQGAFURRATWLEQCYXAFWCUMHXMMNCRWVWJLBYRZRELUVBCXMJIPFQYZVVVSOKQEGDMTEWSUBSTRKVUPUMJKBAQSVBPYEPH");
    msg.flags = 171U;

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
    msg.setTimeStamp(0.7454372328078456);
    msg.setSource(4505U);
    msg.setSourceEntity(209U);
    msg.setDestination(12116U);
    msg.setDestinationEntity(39U);
    msg.total_steps = 27U;
    msg.step_number = 58U;
    msg.step.assign("FCZKKZRBCQPTTMMKLXNTVUHZGLMPANCAPKWUDGJZSZWXNLOGIOZRYOODKPTLJDQSMHWXNWRZXAOYLIDYHJYDUWYHMRUAMCGBVEJAICUFBIUXSXMQO");
    msg.flags = 5U;

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
    msg.setTimeStamp(0.2987720166707669);
    msg.setSource(41538U);
    msg.setSourceEntity(24U);
    msg.setDestination(30813U);
    msg.setDestinationEntity(145U);
    msg.total_steps = 150U;
    msg.step_number = 51U;
    msg.step.assign("TOLGYWEMVBVVU");
    msg.flags = 41U;

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
    msg.setTimeStamp(0.16693663495391886);
    msg.setSource(16035U);
    msg.setSourceEntity(92U);
    msg.setDestination(52521U);
    msg.setDestinationEntity(83U);
    msg.state = 118U;
    msg.error.assign("BIRWFPXLGALQUPQUNNIPMAIMUFSHCJYNPAEXKRXJAUMGJZNFPXCWTSOQVWCSYNVHCMOCHOCLWNHNGFBDVDKHXSAYDEBTFQDBPZEGQKSTSTQZZKUOXQBXHOGDEMSRJXKPDTNRFMBWAS");

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
    msg.setTimeStamp(0.5581006953527009);
    msg.setSource(45088U);
    msg.setSourceEntity(1U);
    msg.setDestination(36698U);
    msg.setDestinationEntity(15U);
    msg.state = 198U;
    msg.error.assign("UNEBLAUDWNFYJRGRHURPEJWKZHBCVATNKKRVCXMAMKJTNGCZTC");

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
    msg.setTimeStamp(0.3330640305907919);
    msg.setSource(28434U);
    msg.setSourceEntity(171U);
    msg.setDestination(31825U);
    msg.setDestinationEntity(78U);
    msg.state = 187U;
    msg.error.assign("CPNZLTAIMYYHUSEJJVXSKGTCLDQPEUJCKVPFW");

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
    msg.setTimeStamp(0.05076943359615904);
    msg.setSource(35294U);
    msg.setSourceEntity(62U);
    msg.setDestination(23998U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.6293971331656295);
    msg.setSource(16652U);
    msg.setSourceEntity(44U);
    msg.setDestination(17125U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.15536663408238516);
    msg.setSource(32733U);
    msg.setSourceEntity(36U);
    msg.setDestination(31632U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.7081509272440267);
    msg.setSource(43945U);
    msg.setSourceEntity(117U);
    msg.setDestination(3155U);
    msg.setDestinationEntity(109U);
    msg.op = 178U;
    msg.speed_min = 0.8677209570793828;
    msg.speed_max = 0.14872598894388334;
    msg.long_accel = 0.05457946852476436;
    msg.alt_max_msl = 0.08247303217762236;
    msg.dive_fraction_max = 0.06751278551458872;
    msg.climb_fraction_max = 0.9956898961919022;
    msg.bank_max = 0.7097308003997324;
    msg.p_max = 0.33351488764977844;
    msg.pitch_min = 0.9760297664595381;
    msg.pitch_max = 0.39558709639015355;
    msg.q_max = 0.3551011170527929;
    msg.g_min = 0.930803681724481;
    msg.g_max = 0.7266396983161643;
    msg.g_lat_max = 0.8063405106263047;
    msg.rpm_min = 0.3002953110406894;
    msg.rpm_max = 0.6865845563260626;
    msg.rpm_rate_max = 0.03421690910016084;

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
    msg.setTimeStamp(0.5088108833523931);
    msg.setSource(25056U);
    msg.setSourceEntity(192U);
    msg.setDestination(23833U);
    msg.setDestinationEntity(24U);
    msg.op = 142U;
    msg.speed_min = 0.2716206758455795;
    msg.speed_max = 0.24896956407099635;
    msg.long_accel = 0.27484125457270003;
    msg.alt_max_msl = 0.4486327306894464;
    msg.dive_fraction_max = 0.4624252420399938;
    msg.climb_fraction_max = 0.25808243329135816;
    msg.bank_max = 0.4445975321424207;
    msg.p_max = 0.01764902148317049;
    msg.pitch_min = 0.9920446934191213;
    msg.pitch_max = 0.15711441190847197;
    msg.q_max = 0.5957089408312378;
    msg.g_min = 0.7147623088155038;
    msg.g_max = 0.48399279247425775;
    msg.g_lat_max = 0.2640842953027358;
    msg.rpm_min = 0.9501459676081387;
    msg.rpm_max = 0.4865138875394718;
    msg.rpm_rate_max = 0.2724796296524167;

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
    msg.setTimeStamp(0.8621553327996933);
    msg.setSource(42896U);
    msg.setSourceEntity(103U);
    msg.setDestination(31936U);
    msg.setDestinationEntity(27U);
    msg.op = 153U;
    msg.speed_min = 0.9579470091941614;
    msg.speed_max = 0.3316534635035979;
    msg.long_accel = 0.9895638145777897;
    msg.alt_max_msl = 0.003723605408064379;
    msg.dive_fraction_max = 0.4938147974506706;
    msg.climb_fraction_max = 0.05079636514883534;
    msg.bank_max = 0.4737492529092362;
    msg.p_max = 0.0295769571404626;
    msg.pitch_min = 0.4889605204580486;
    msg.pitch_max = 0.9213389483206409;
    msg.q_max = 0.4300168240343004;
    msg.g_min = 0.4689931523477855;
    msg.g_max = 0.8764095661846316;
    msg.g_lat_max = 0.5873016410605314;
    msg.rpm_min = 0.33189703685857996;
    msg.rpm_max = 0.5404669219222727;
    msg.rpm_rate_max = 0.942825536580363;

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
    msg.setTimeStamp(0.7068936309096123);
    msg.setSource(30828U);
    msg.setSourceEntity(242U);
    msg.setDestination(5802U);
    msg.setDestinationEntity(195U);
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.04581335083381444;
    tmp_msg_0.lon = 0.6574288384581246;
    tmp_msg_0.alt = 0.4157521302059156;
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
    msg.setTimeStamp(0.9827724044893646);
    msg.setSource(30145U);
    msg.setSourceEntity(117U);
    msg.setDestination(50123U);
    msg.setDestinationEntity(178U);
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 112U;
    tmp_msg_0.x = 46660U;
    tmp_msg_0.y = 12705U;
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
    msg.setTimeStamp(0.926028032318915);
    msg.setSource(51465U);
    msg.setSourceEntity(56U);
    msg.setDestination(42002U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.8733256935552038);
    msg.setSource(20477U);
    msg.setSourceEntity(246U);
    msg.setDestination(55084U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.9000409110154958;
    msg.lon = 0.6685436507036255;
    msg.height = 0.009041172693254551;
    msg.x = 0.8831550500468766;
    msg.y = 0.006851448514465064;
    msg.z = 0.3629357297567556;
    msg.phi = 0.2743063794490942;
    msg.theta = 0.06340883462408864;
    msg.psi = 0.6744138752957006;
    msg.u = 0.17383247921752232;
    msg.v = 0.2523072383660233;
    msg.w = 0.7677508270623067;
    msg.p = 0.5686990622525068;
    msg.q = 0.2954284893757374;
    msg.r = 0.7343652598851765;
    msg.svx = 0.28024986987577016;
    msg.svy = 0.18465326168862772;
    msg.svz = 0.21038831921143708;

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
    msg.setTimeStamp(0.3062193599373819);
    msg.setSource(24868U);
    msg.setSourceEntity(186U);
    msg.setDestination(19553U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.48292460047414565;
    msg.lon = 0.42176461121293585;
    msg.height = 0.5478468326211641;
    msg.x = 0.0630780396026569;
    msg.y = 0.11391840688542632;
    msg.z = 0.024471681652095567;
    msg.phi = 0.4009004814453011;
    msg.theta = 0.41577939349782733;
    msg.psi = 0.5364793614109417;
    msg.u = 0.7048598131456231;
    msg.v = 0.8205920542386624;
    msg.w = 0.8017603029727522;
    msg.p = 0.4958576539605688;
    msg.q = 0.3912093677311109;
    msg.r = 0.05045975127101021;
    msg.svx = 0.7747527420155429;
    msg.svy = 0.32750374935013804;
    msg.svz = 0.8964648001135832;

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
    msg.setTimeStamp(0.41083684231127615);
    msg.setSource(4014U);
    msg.setSourceEntity(55U);
    msg.setDestination(57551U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.6227655235751451;
    msg.lon = 0.6767373267701235;
    msg.height = 0.6278813725724625;
    msg.x = 0.12206596047279805;
    msg.y = 0.4826647865210365;
    msg.z = 0.502697408090649;
    msg.phi = 0.8875406201187309;
    msg.theta = 0.7913281655642894;
    msg.psi = 0.31651373079207545;
    msg.u = 0.03152468935514019;
    msg.v = 0.07765567283029096;
    msg.w = 0.40113209721676;
    msg.p = 0.834678574642379;
    msg.q = 0.14298380532918675;
    msg.r = 0.3374549801282217;
    msg.svx = 0.5784498738829132;
    msg.svy = 0.30141295058371964;
    msg.svz = 0.6996690934934104;

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
    msg.setTimeStamp(0.6672215964974807);
    msg.setSource(60679U);
    msg.setSourceEntity(167U);
    msg.setDestination(57233U);
    msg.setDestinationEntity(186U);
    msg.op = 74U;
    msg.entities.assign("BRTDFSPBZADEGDUFCQRCXNVLTAQDJJJJSXPHTHAOQOEUOACEWZTNOBRBUXWHSXOCSZSWJUILHDZIBEDKOIPYTTVBRHGFWXSPXAZHIKLMRJRLNHFYGNLCPSKUQNMQCVJKGQLJMSLFUFIYM");

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
    msg.setTimeStamp(0.6168520484407305);
    msg.setSource(30479U);
    msg.setSourceEntity(113U);
    msg.setDestination(17144U);
    msg.setDestinationEntity(130U);
    msg.op = 15U;
    msg.entities.assign("CMZKFBBUVEEMRSGSNMJQKFELZ");

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
    msg.setTimeStamp(0.9230273805770647);
    msg.setSource(7278U);
    msg.setSourceEntity(222U);
    msg.setDestination(14031U);
    msg.setDestinationEntity(101U);
    msg.op = 98U;
    msg.entities.assign("ZXGSMBOGCUNXTMJUPZSXVJCGGHDSZVGTLAHWNWDVXYJAZIHDANZFAVXYEEUKFRROWKBFFQULSLSCPAAGDMDTCNEIWSLHWPFBMZVMWDUUWYTCHCNFYLRPVPBSYHJILYXRAZVFJQVLFUTPFDQDIKKLPJYLRBQJUZKHXOIYISAE");

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
    msg.setTimeStamp(0.34316201965427195);
    msg.setSource(61627U);
    msg.setSourceEntity(202U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(80U);
    msg.type = 48U;
    msg.speed = 65228U;
    const char tmp_msg_0[] = {86, -18, 118, -116, -37, -33, 50, 23, -81, -53, -39, -112, 81, 75, 126, -119, -35, -87, 99, 106, -83, -89, 23, 102, 65, -81, 65, -7, -46, -56, -112, 71, -116, 123, -32, 80, 111, -92, -45, -65, -19, -47, -103, 17, 112, 70, 80, -54, 42, -25, 9, -44, -89, -24, -49, 74, -88, -14, -17, -127, -92, 112, -110, 36, -115, 5, 96, 88, -97, 123, -112, -126, -41, -96, 57, -107, -2, -113, 110, 47, -81, -28, -80, -52, -100, 17, -39, 104, 35, -29, -40, -83, -36, -60, -75, 16, -120, -58, 35, 1, 43, -105, 76, -1};
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
    msg.setTimeStamp(0.7393671233243817);
    msg.setSource(42984U);
    msg.setSourceEntity(43U);
    msg.setDestination(1926U);
    msg.setDestinationEntity(53U);
    msg.type = 242U;
    msg.speed = 26595U;
    const char tmp_msg_0[] = {16, -66, -104, -44, 48, 45, 23, -34, 13, -88, -28, -119, -108, 110, 112, -59, 10, -81, 40, 6, 15, 30, 33, -86, 11, -92, 104, -59, 31, 93, 120, -10, 25, -52, 121, 50, -3, 106, -14, 48, 107, 93, 83, -47, -55, -85, -81, -28, 5, -77, -127, 72, -101, 49, -47, -67, 29, -10, -29, -1, 122, 103, 18, -117, 15, -81, -93, 79, -51, -41, -76, 9, 94, 34, -54, 22, -37, -118, -5, -123, 36, -37, -56, 22, 103, 26, -62, 102, -7, 120, 66, -111, -90, -71, 69, 93, -3, 112, -128, 67, -46, 73, -69, 22, 80, 84, -72, -50, 40, 14, 97, -4};
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
    msg.setTimeStamp(0.4950859449076501);
    msg.setSource(10234U);
    msg.setSourceEntity(187U);
    msg.setDestination(15U);
    msg.setDestinationEntity(130U);
    msg.type = 29U;
    msg.speed = 27674U;
    const char tmp_msg_0[] = {-15, -74, -72, 28, -110, 67, 67, -34, 40, -34, 26, 40, -85, 5, -59, 100, 56, -61, -113, 107, 63, -62, 34, -30, 119, -81, 119, -58, 68, -66};
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
    msg.setTimeStamp(0.08258057096505211);
    msg.setSource(63615U);
    msg.setSourceEntity(171U);
    msg.setDestination(40383U);
    msg.setDestinationEntity(129U);
    msg.op = 9U;
    msg.tas2acc_pgain = 0.8093636970165977;
    msg.bank2p_pgain = 0.19524754944508305;

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
    msg.setTimeStamp(0.47880362994798376);
    msg.setSource(38176U);
    msg.setSourceEntity(183U);
    msg.setDestination(32323U);
    msg.setDestinationEntity(100U);
    msg.op = 163U;
    msg.tas2acc_pgain = 0.4844688611915571;
    msg.bank2p_pgain = 0.8385346741599795;

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
    msg.setTimeStamp(0.3432478184819069);
    msg.setSource(65220U);
    msg.setSourceEntity(168U);
    msg.setDestination(53823U);
    msg.setDestinationEntity(174U);
    msg.op = 18U;
    msg.tas2acc_pgain = 0.9451170589867849;
    msg.bank2p_pgain = 0.6840978728099827;

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
    msg.setTimeStamp(0.8046719825491547);
    msg.setSource(17444U);
    msg.setSourceEntity(236U);
    msg.setDestination(34377U);
    msg.setDestinationEntity(26U);
    msg.available = 710388802U;
    msg.value = 71U;

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
    msg.setTimeStamp(0.375262814746816);
    msg.setSource(55020U);
    msg.setSourceEntity(221U);
    msg.setDestination(39223U);
    msg.setDestinationEntity(205U);
    msg.available = 2273123026U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.4595013489218276);
    msg.setSource(58254U);
    msg.setSourceEntity(8U);
    msg.setDestination(59347U);
    msg.setDestinationEntity(31U);
    msg.available = 3731716371U;
    msg.value = 21U;

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
    msg.setTimeStamp(0.349341350040294);
    msg.setSource(12252U);
    msg.setSourceEntity(90U);
    msg.setDestination(42746U);
    msg.setDestinationEntity(159U);
    msg.op = 129U;
    msg.snapshot.assign("VQJRTKKYNFOQUNBAWCLJIESRWVCYZQIYHAONXBVRIVORVNWPELFZHXGJXXDPWKZIEGV");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 157U;
    tmp_msg_0.error.assign("RUQQKVAAMAVE");
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
    msg.setTimeStamp(0.21721866779008636);
    msg.setSource(47854U);
    msg.setSourceEntity(166U);
    msg.setDestination(46856U);
    msg.setDestinationEntity(138U);
    msg.op = 110U;
    msg.snapshot.assign("XYWQSNURMZTOOGMOEAUTITHPLSJRPUGSREFJWUZSGZTBMLYASVYLZGKFHMGLI");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2091696704U;
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
    msg.setTimeStamp(0.5789300070865794);
    msg.setSource(57680U);
    msg.setSourceEntity(206U);
    msg.setDestination(42569U);
    msg.setDestinationEntity(83U);
    msg.op = 33U;
    msg.snapshot.assign("DXLQJFCVOFFOQQHIEAOSDUTAXONEPVVETSGQDUOYGVRECSCVLMQGJNKLTBNJUTBMKVVDYURDCFWQFZUPMAREPGZSTFJPLBSAIEFRJUNNPBHZGGIRWQLQGBSEOXPNKHUENPKKZOGMWZKZMZCVTMMCFRPRCWTYRXTCAHYYABRXNXWSLLJKXZOBYEQHDFMBKIDWHG");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("DDQUTLRRBNPFMUFJGUMCKEEPVSTSIDRHUFTXCXXUALNZYXPGUQODJCEHXJGXVMINDHZRVOLYIIMWBPMHCOOKNJSBRJBL");
    tmp_tmp_msg_0_0.lat = 0.05932076330583036;
    tmp_tmp_msg_0_0.lon = 0.0403146954697583;
    tmp_tmp_msg_0_0.depth = 0.8741869012670438;
    tmp_tmp_msg_0_0.query_channel = 94U;
    tmp_tmp_msg_0_0.reply_channel = 96U;
    tmp_tmp_msg_0_0.transponder_delay = 112U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.4164750786696092;
    tmp_msg_0.y = 0.3133316917702158;
    tmp_msg_0.var_x = 0.6340205157788732;
    tmp_msg_0.var_y = 0.14921461607356767;
    tmp_msg_0.distance = 0.4127170264249297;
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
    msg.setTimeStamp(0.6820836133648075);
    msg.setSource(15191U);
    msg.setSourceEntity(94U);
    msg.setDestination(2267U);
    msg.setDestinationEntity(57U);
    msg.op = 32U;
    msg.name.assign("TARKHDZRKCGWBFCNO");

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
    msg.setTimeStamp(0.11799551828834909);
    msg.setSource(63338U);
    msg.setSourceEntity(68U);
    msg.setDestination(33305U);
    msg.setDestinationEntity(183U);
    msg.op = 103U;
    msg.name.assign("NACXKQSICEOLJGSELWFKHLQBNUNXZLMPNCHVMDUUDWQXGAMPKDFPVKNMDBPKYYWBBCFGXVXMCTETKZCHJOTGRGJVKZUSJTXRNWRGHQYAJJHZFOSIGNFTXEHIDJHAJEPTGHXRZZGYQUCEJNOTCDRACLLASQLSQNIYOZ");

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
    msg.setTimeStamp(0.20860274996334083);
    msg.setSource(60460U);
    msg.setSourceEntity(67U);
    msg.setDestination(13119U);
    msg.setDestinationEntity(180U);
    msg.op = 158U;
    msg.name.assign("OUWOMKBNVRXXDGJKNSTIBWGNIAEBSXQUPNPRFHCYIZUQAITFAFVXNEDVSEMZZBLLTJLFWWMQOPCMMFVUTVYKSEJBNLOYYHWLWLHPOEXFRRDEYTPCAPCDSZPDJQKIQTRXXARRBVMSTNNCCUDSLGWFMMDKOAMWYFRQIBGSHUQVBJGZEIJNYQSDXCYTRVXHHUWALPJUAKIEAHMTFFPXAVZRCLGDHOEQUBJGGWYILUHYZ");

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
    msg.setTimeStamp(0.16234571525882424);
    msg.setSource(25731U);
    msg.setSourceEntity(150U);
    msg.setDestination(11982U);
    msg.setDestinationEntity(150U);
    msg.type = 190U;
    msg.htime = 0.2342650569631224;
    msg.context.assign("UTULSLPSGPWJKOXWTAATNXYGPHZDTYFJVYRQVGSRGPUYFXMQEYYBRLUMKLMTEACVRBZLEZQHLOQCILS");
    msg.text.assign("FTGIOFNKLUADWVNDMOOZVFJAYZFBYGROSVJORJKQOTBYEHB");

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
    msg.setTimeStamp(0.6477361893500794);
    msg.setSource(19651U);
    msg.setSourceEntity(85U);
    msg.setDestination(470U);
    msg.setDestinationEntity(175U);
    msg.type = 156U;
    msg.htime = 0.5808187600335017;
    msg.context.assign("FWZAOERZYCNSLJLEJJWIYFQMXMSKJDUFINSKGPZODEZHFATDPPKOUPKHDOYBZCYUFYSYXDCGXWQRNKITYIJRAEQMPNCENMTXBLQLOYDKIVRBZJBCMICGCOTRRVQVSRVVHSBHJXTIUSMWKHXQOFZHWWUZLFLBEWBOFQBAAWVULPRTKNXPDEVWSMETORQVUOJLGDHIJHGPPMERNKFSTIGFAZYTPZKQBNTUJWACEACGVAYNHHMQUADMLNLXSXCBI");
    msg.text.assign("AWAUELPRICUNAFEFURPZCWSRKSZVSZEGIYFBKKXNJYHNXVGZJMXDUVGYFCOXBWBMUUTPVGJDYRAEYTGLLCJIPFAOZHXQJTDXLOOTJSQLIJWLQXKFACBCHRNGCKYIEPQGWOOFRJVCMUDNUYHBKGOYQCPHEAXOYJMWDSKQNVLMIDSVANFWVOHPBB");

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
    msg.setTimeStamp(0.8920921692010004);
    msg.setSource(22378U);
    msg.setSourceEntity(57U);
    msg.setDestination(32694U);
    msg.setDestinationEntity(158U);
    msg.type = 218U;
    msg.htime = 0.8407271751747825;
    msg.context.assign("HPWHAPXXXLWHRQZSIYJBLIZTSZIUDDYNXZUFOESHEYZYNLRDQHMQAGAYUKOFBCXKJNSDOQBYNGFRDLHJKOJIJOJJLHVGXDMTCCVWTSGEAWCYUSYFAPNXRSVUWEVQIATQNZBDCOVDKPEOFNWUBFMRVWWGIEXABEESMLPLFMGGFPOKRHZQENHTFBGHMRMVBKGUCSNUZUVIYNTQQRPVGJZDQRREULMTKF");
    msg.text.assign("ODXEPWWKNHXRJYFDZFTJMCNYKNRACJVBAISWBWQWQFRYHAEVULKLATUNLEISTPOLANNIWIKOQMGVLQZOYNZDPJQLVXGCGSOFFVHTGJPTSIXEGTGWHMRQHPUMDJEKVOIRXUUGTSGCOBEZMXYZVUDLUBQAIQPDFJVAAZZYCROKMMYYBBLIRKWPTOEZSBPDXJBRHLPCYAANNENRDCFVTQFUSFWJ");

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
    msg.setTimeStamp(0.011867777316091455);
    msg.setSource(982U);
    msg.setSourceEntity(35U);
    msg.setDestination(23992U);
    msg.setDestinationEntity(233U);
    msg.command = 235U;
    msg.htime = 0.9896763400262434;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 229U;
    tmp_msg_0.htime = 0.5869953747013607;
    tmp_msg_0.context.assign("FAJGFGBNHPCMPFSFTMLUHGLNPEWHIPDIWOZVDRBATGIATNCZJIYIUVGRELDJKHCWSUVXFMTCPYIRZMOAIRFLUSVATCOXW");
    tmp_msg_0.text.assign("OVBIQVIKQDEJYJPMLNRFREXKCLATOLSFYXSHLMXIZOXIHFGNAUITSPNDGRMJJHHKXPCPGBCLOMTEHCGAXRPPTGTWSVDBGDYZRLBZOVHWFCPNOVDSGLSNQTWRGANQYHFNKKFDQKUVOBAUAWJIZRFEHFEOCSWOXTVBUMZLCTITPWYJUAWSMHPNNAETM");
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
    msg.setTimeStamp(0.199351942093433);
    msg.setSource(22609U);
    msg.setSourceEntity(149U);
    msg.setDestination(32833U);
    msg.setDestinationEntity(212U);
    msg.command = 8U;
    msg.htime = 0.5516378199840676;

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
    msg.setTimeStamp(0.36022977249272814);
    msg.setSource(19644U);
    msg.setSourceEntity(143U);
    msg.setDestination(3706U);
    msg.setDestinationEntity(100U);
    msg.command = 64U;
    msg.htime = 0.2752687641234831;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 212U;
    tmp_msg_0.htime = 0.6361402892567861;
    tmp_msg_0.context.assign("BDAALEZAFJUCATJDTEGLQNORYXMOTADIHRHIACOJCCWSMTYVVRCQKFDZBBVENHZFZLFGOJYVNUVDAMWLXWISXFQQRHNRVOUFYEYPWUVSYPZCCGMIFKKLQQRPXPRCPWYSSWHIKHXERQBLUSNFAHSHJECPOSNNCEEIVDWMMFUTGWYTIKGODQKBXILGXNKRYNEZANFMKGKZPZWGYTOBMSZLMPETUJRJXBBO");
    tmp_msg_0.text.assign("KVPOYXOPJRNAJYAFGLXZIYKDCAWXBSPUBQLJOCKWBZTZIHEVJUAAIUTJULJWVLGQFVKBKXOHSFXHGMUQETERHFKCYMGJMULLNUHRORTNVOHQPPDPGQDQLISENZWUDYLCYZTKDQSCICFBKOSVZETTERUGSDGJISONIYEQDSZCANEMXMGZIVMHRYEOYMWBZJBDMKGGNLBHJBWNP");
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
    msg.setTimeStamp(0.8629969916890692);
    msg.setSource(41395U);
    msg.setSourceEntity(30U);
    msg.setDestination(1941U);
    msg.setDestinationEntity(163U);
    msg.op = 60U;
    msg.file.assign("OMPPOKEJCZKPGXJBGAWWUUMLDGRECUIVZXHZSHPQMRKSQJWKFGTNBVIQPSYQCLDBYEFKYTQUDXUMKIRLFAUVLHIVGQIBNXDIJMHCEMZXRANFJONAZJDBHOWOTGSBROILKSHBOVTMADMTFWSYXYNJTVHIEGCRPFQAVSAGRGLNGANKBXNBEQCDOATSYPACTUWWZFJFJDLXTHVPEVCKULFUMNO");

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
    msg.setTimeStamp(0.12205876239275704);
    msg.setSource(19026U);
    msg.setSourceEntity(81U);
    msg.setDestination(32605U);
    msg.setDestinationEntity(41U);
    msg.op = 65U;
    msg.file.assign("ODQGLRCDQECHULFLVUCDEXKKIHXRLZPJHVDBXBFYENWLZECOUUCFWJZWWVGLCRZHCFNXMQNNPHUXAAJRGMGYIPRAZQAXKGYEYACZEAFEBJDQSYQKXSTVMUXQPLVTGAEYSRCTRJOMBXAYONWRJVHROWSESFTMETQSVOMMKIJKOQKTNKSGHPUHXOWSIZWVZPSYDKWBTHTFNIZLIIPICJPDBTQRPVOHWMUYBIIOATZGFGBFSLMNYMUGVF");

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
    msg.setTimeStamp(0.16952203287949552);
    msg.setSource(11677U);
    msg.setSourceEntity(148U);
    msg.setDestination(34487U);
    msg.setDestinationEntity(53U);
    msg.op = 185U;
    msg.file.assign("XFHSODCYZEIASIUAHCLZBEDGWKYJVTBRLBMMUQBMIMLLJVOEDODQITKKFXUDTGJGZZNPMPJAULXNVTHWIFJERAZBXWVGVENPULRXYHIOPUQICOASINNSBOCKYBSBJGKZDXGEZTWYQVVHRPTCVHIWRWPSMGWUPUARSPSNXFMTJJQFOATQB");

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
    msg.setTimeStamp(0.3878551322187951);
    msg.setSource(30075U);
    msg.setSourceEntity(116U);
    msg.setDestination(23842U);
    msg.setDestinationEntity(216U);
    msg.op = 146U;
    msg.clock = 0.2717667327755391;
    msg.tz = 80;

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
    msg.setTimeStamp(0.3546674169128121);
    msg.setSource(24684U);
    msg.setSourceEntity(181U);
    msg.setDestination(40616U);
    msg.setDestinationEntity(226U);
    msg.op = 239U;
    msg.clock = 0.46799146886255516;
    msg.tz = -109;

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
    msg.setTimeStamp(0.000896598621926592);
    msg.setSource(40360U);
    msg.setSourceEntity(196U);
    msg.setDestination(1496U);
    msg.setDestinationEntity(65U);
    msg.op = 191U;
    msg.clock = 0.19315019859069493;
    msg.tz = 43;

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
    msg.setTimeStamp(0.8803527858973162);
    msg.setSource(54160U);
    msg.setSourceEntity(188U);
    msg.setDestination(54447U);
    msg.setDestinationEntity(11U);
    msg.conductivity = 0.4054019371692015;
    msg.temperature = 0.21416195962358764;
    msg.depth = 0.6982278612463618;

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
    msg.setTimeStamp(0.9538912940759546);
    msg.setSource(33800U);
    msg.setSourceEntity(175U);
    msg.setDestination(47694U);
    msg.setDestinationEntity(112U);
    msg.conductivity = 0.481105788415118;
    msg.temperature = 0.924648205803073;
    msg.depth = 0.9704974341809651;

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
    msg.setTimeStamp(0.009210388030556071);
    msg.setSource(35562U);
    msg.setSourceEntity(163U);
    msg.setDestination(34507U);
    msg.setDestinationEntity(60U);
    msg.conductivity = 0.29088621346928567;
    msg.temperature = 0.37947728382017176;
    msg.depth = 0.9938210714679663;

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
    msg.setTimeStamp(0.3392937366482599);
    msg.setSource(6883U);
    msg.setSourceEntity(202U);
    msg.setDestination(28956U);
    msg.setDestinationEntity(63U);
    msg.altitude = 0.74504968989098;
    msg.roll = 29566U;
    msg.pitch = 2067U;
    msg.yaw = 63683U;
    msg.speed = -27084;

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
    msg.setTimeStamp(0.4250474284718556);
    msg.setSource(29050U);
    msg.setSourceEntity(75U);
    msg.setDestination(8332U);
    msg.setDestinationEntity(214U);
    msg.altitude = 0.8523322183351411;
    msg.roll = 27225U;
    msg.pitch = 39740U;
    msg.yaw = 56337U;
    msg.speed = 18245;

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
    msg.setTimeStamp(0.12599961858157505);
    msg.setSource(45596U);
    msg.setSourceEntity(6U);
    msg.setDestination(45565U);
    msg.setDestinationEntity(15U);
    msg.altitude = 0.9259045634634798;
    msg.roll = 2287U;
    msg.pitch = 2635U;
    msg.yaw = 37035U;
    msg.speed = -12451;

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
    msg.setTimeStamp(0.34901446359242916);
    msg.setSource(2622U);
    msg.setSourceEntity(156U);
    msg.setDestination(36066U);
    msg.setDestinationEntity(159U);
    msg.altitude = 0.8714951841458999;
    msg.width = 0.169292120354264;
    msg.length = 0.7055106322329883;
    msg.bearing = 0.9461408878718428;
    msg.pxl = -14662;
    msg.encoding = 30U;
    const char tmp_msg_0[] = {70, 65, 44, -70, -24, 50, -110, -108, 102, -105, 25, -82, 100, -29, 109, 45, 24, 40, -52, 87, -121, -37, -42, -125, 120, -105, -56, -73, -90, -106, -37, 37, 61, 44, -15, -20, 1, 23, -63, -61, 82, 94, 59, -41, -126, -98, -116, 10, -74, -102, 0, -59, 23, -21, 26, -121, 91, -30, -67, -2, -64, 91, -109, 54, -116, -31, 115, 85, 2, 112, -40, -93, 120, -101, 108, 32, 39, -86, 71, -73, -37, 91, -123, 99, 109, -109, -85, 90, 117, -57, 80, -89, -26, -70, 114, -90, 5, 77, -17, -38, -4, 111, -42, 22, 13, -84, 67, -37, 55, 89, 74, -70, -29, 53, -99, 58, -55, -21, 37, 39, -73, -29, -37, 84, 52, 33, 90, -33, 112, -57, -107, 114, 97, 28, 70, 119, 63, 55, 83, -112, 55, 63, -111, -13, -80, 121, 78, 101, -48, 20, 1, -39, -98, -118, 68, -127, 52, 108, -5, -40, -59, -29, -54, -28, -35, -54, -105, 116, 63, 86, -21, 13, 114, 66, 32, -120, -110, 58, 29, 101, -3, -58, -89, 26, -75, -92, -14, 81, 34, -9, 106, -57, 56, -66, 15, 11, 118, -106, -46, 72, -125, 0, 76, 125, -94, 34, -56, 82, -118, -67, -75, -121, 100, -9, 45, 79, -80, -127, 21, -60, -21, -104, 20, -84, -53, 39, -83, 35, -13, 71, -45, 60, 123, -25, 35, 94, -75, -73, 64, 92, 17, 102, -116, -125, -62, 3, -101, 65, 82, -34, 27, 55, -62, 106};
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
    msg.setTimeStamp(0.6205216652121147);
    msg.setSource(58741U);
    msg.setSourceEntity(179U);
    msg.setDestination(7246U);
    msg.setDestinationEntity(243U);
    msg.altitude = 0.7452644519903109;
    msg.width = 0.9292206272052709;
    msg.length = 0.7005987057977051;
    msg.bearing = 0.6865570734339674;
    msg.pxl = -27631;
    msg.encoding = 208U;
    const char tmp_msg_0[] = {-53, -114, 44, -50, -79, -60, -18, 82, -27, 107, 51, 99, -34, -101, -13, 49, -115, 116, -16, 56, 5, 112, -91, 52, -56, 8, -118, -37, 17, 38, -73, 20, -115, 120, 45, 15, -46, 112, -97, -97, 120, -80, 29, 33, 63, 14, 28, 91, 19, 77, 88, -38, -30, -29, -73, 87, -24, -30, 114, -68, -75, -55, -10, 124, -10, -67, -83, 79, 58, -54, -17, -107, 101, 26, -116, -3, 7, 90, 57, 31, -123, -60, 44, -12, -53, -6, -31, 115, -25, -64, -12, 83, -114, -9, -110, -109, -70, -33, -7, -107, 32, -105, 101, 64, 108, -101, 33, 86, 88, -121, -25, 61, -39, 33, 31, 40, 49, 99};
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
    msg.setTimeStamp(0.40090095688118554);
    msg.setSource(12215U);
    msg.setSourceEntity(0U);
    msg.setDestination(52390U);
    msg.setDestinationEntity(46U);
    msg.altitude = 0.3299288917964093;
    msg.width = 0.8052292053014838;
    msg.length = 0.4519326245869494;
    msg.bearing = 0.9090927217246388;
    msg.pxl = -17271;
    msg.encoding = 190U;
    const char tmp_msg_0[] = {126, 22, -103, 54, 109, -37, 47, -48, -109, -109, -3, -49, 71, -64, -1, 67, -62, -47, 84, -13, 123, 5, -53, 68, -121, 108, 43, -41, 74, 31, 49, 83, 87, 77, -86, -34, 96, 63, -10, 92, 108, 21, 124, -62, -94, 123, 42, -108, -100, -95, -99, 102, 44, -5, -68, -37, 88, -49, -4, 98, 58, -46, -77, 43, -21, 120, 103, -56, 114, -27, 68, -92, -13, -34, 91, -14, -109, 28, -96, -45, 114, 78, 73, -12, 21, -119, 118, -18, -115, 50, 4, 19, -94, -116, 57, -118, 65, 30, -69, -128, 71, -96, 83, 51, -54, 62, -71, 67, -46, 111, 17, -41, 2, -54, 72, 83, 41, -127, 71, -42, 46, 117, 114, 58, 84, 77, 122, -10, 18, 7, -37, -113, -94, 9, -4, -106, 83, 117, 69, 6, -43, -71, 28, 1, -84, -12, -46, 16, 72, -22, -40, 29, -103, -42, 104, -25, -107, -46, -46, 110, 91, 3, -67, -18, 25, -39, -121, -34, -79, -106, -74, -34, -33, -7, -65, 17, -77, 53, -112, 52, 96, 90, -74, 58, -28, -29, -77, 47, -16, 78, -3, 59, -34, -19, -90, -61, -86, -65, -65, -41, 114, -89, 124, 126, 78, 123, -16, 46, 53, -95, -28, -89, -127, -35, -101, 13, -49, 19, -102, -63, -69, -73, 54, -32, -74, -108, 68, 9, -51, 119, 3, 70, -83, -28, 102};
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
    msg.setTimeStamp(0.845852167301564);
    msg.setSource(20509U);
    msg.setSourceEntity(17U);
    msg.setDestination(44090U);
    msg.setDestinationEntity(249U);
    msg.text.assign("FEOONXDBGXWKTCPAJLGCZGJFMMQWXNKAGDVSSWOEOSVRVWJYVPXHSASPRDJHABAZMMCHZVHTKGGAXZOKTUNUVLELRIHILUETTUTFBKMMLHALFHTQPM");
    msg.type = 114U;

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
    msg.setTimeStamp(0.46186823944027455);
    msg.setSource(37794U);
    msg.setSourceEntity(60U);
    msg.setDestination(18791U);
    msg.setDestinationEntity(114U);
    msg.text.assign("XIIHJIQPIYOUVEBPNBMNZLKZMISNEMNRSHJGPOCATRBGUUZCIFBVYPMOWXZATABADQZQWEMWFEEKDXJDFMXDOKQLYJNZYKLKNJMEZAHKSPTFRZ");
    msg.type = 249U;

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
    msg.setTimeStamp(0.5837969649248854);
    msg.setSource(32213U);
    msg.setSourceEntity(148U);
    msg.setDestination(42643U);
    msg.setDestinationEntity(142U);
    msg.text.assign("DFUNYAFOAKTVOHNWDHVCSOEGFLBWEWZMWCIVNHZRUJLGHPLFNFDVEJHPSGQQJASNHAPOGKWCHZMTPDCXJBUYATBJBYC");
    msg.type = 209U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.6265321176185565);
    msg.setSource(27401U);
    msg.setSourceEntity(144U);
    msg.setDestination(24410U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.4235700623745786);
    msg.setSource(36983U);
    msg.setSourceEntity(166U);
    msg.setDestination(4131U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.366426839336062);
    msg.setSource(59262U);
    msg.setSourceEntity(126U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.8212950325295806);
    msg.setSource(47558U);
    msg.setSourceEntity(1U);
    msg.setDestination(4129U);
    msg.setDestinationEntity(64U);
    msg.sys_name.assign("WSYQLLIJUWWEVHWRKPRABCMHGRIGJBCOREPUMNVJMRSPTDHZJLOIVPWIKJQPJTOOMFKUZYYCTLXFLZEIGFMXYDVJTDXABVQZASFGNLGVNANFWQASJZGMONYEYEXBBBUCYRCJHBLXOCKPWTHKDQEFVNKDILGDTPKOEKROOXQJNSAFWWYFCXKSCIEDQNRDAREPTGIQLVHHVMPMXZHNEVSCHAMYZUKPIFFTZWDTTYZDUSNSOUQBA");
    msg.sys_type = 182U;
    msg.owner = 54916U;
    msg.lat = 0.08495557208570115;
    msg.lon = 0.27663776837647036;
    msg.height = 0.6375400559732143;
    msg.services.assign("XWXTNCETFLLGRERGJXEIVGHEXTMKHUEWZZBFYAJSIZDPAIMMANGBOHAPIUJQCANTOZKURJXUZVPWGRRFODYGFNYGUPIFTEUHMMWFLSSWZKCHKNNWJYHBMQSYJFBXKQVKWCLAQZBHVLSQZSAOOV");

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
    msg.setTimeStamp(0.339262338779004);
    msg.setSource(59506U);
    msg.setSourceEntity(231U);
    msg.setDestination(21115U);
    msg.setDestinationEntity(109U);
    msg.sys_name.assign("LODSZYGQWFKKQVOKBMUEMIJTYZXKBJTXUWRHNRUEGJHHDQHVUHCBAENNRTSRPYILDAKVLZXGRMQXOUNVNOVFKITFYAQCOZNPYBVWZ");
    msg.sys_type = 3U;
    msg.owner = 2617U;
    msg.lat = 0.9849370213460266;
    msg.lon = 0.4035937530223017;
    msg.height = 0.3405215774483673;
    msg.services.assign("CFUIDHNKWJKNOPPLBOPOQCCNIHNKZZTCFQZRLYVVVILJSSLGEMQFNPGYQSTRMETSQLTIAYGLXOKOEXUOVCYHOETWYJVZEJBIHSAMRZUHTIDKKSWVQJXDSCNNLRJVMFKAMEUMXMZUDWIKZGCBPDOGFKLEHAUZLLRQNVERAJBPXCZEDFRBHGBPWCXVSUFWFBYWKWCYOXHDIJRBEQWDJGPJAYZBRMPPDHYAMNVSWTTYSUAXTARGIX");

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
    msg.setTimeStamp(0.1531496921441453);
    msg.setSource(63033U);
    msg.setSourceEntity(64U);
    msg.setDestination(48222U);
    msg.setDestinationEntity(134U);
    msg.sys_name.assign("WEFHEOEDIXBNAHKFLJZYFPLNKDMAZSBTUTQVOEKMUVQNDTJHMTOZRVSUQULJYVJSPQSGCFGOCIWCKYKORGICPVLIALTLZAUDVEWZRCJZTBGLKHFSBYILZOYFEWPUXXUWQRBKMKPALNMOXXGJMBAPCSYSOWPQIYXIWPMEXRYHEAUNPDGNDXRJARTDCWMASNORGSHHTNCAC");
    msg.sys_type = 223U;
    msg.owner = 1349U;
    msg.lat = 0.023081032638676224;
    msg.lon = 0.36283417665406115;
    msg.height = 0.40599515502036954;
    msg.services.assign("EPJLZMABITXYOKLLHQVVVZMQHXEDSAZKNRSLHRZQONKDEUMGUHUCFKPPPNGQKSJXOGDHSMLMCWWQGGXVYAQNPOCELADCFRQUJBOQLSMEJHOUJFRFAWTYOSBPFVTRWZKANIEPBIWFWKONDUEJZANWIFZKLVFIXY");

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
    msg.setTimeStamp(0.40825964655693003);
    msg.setSource(25560U);
    msg.setSourceEntity(109U);
    msg.setDestination(31355U);
    msg.setDestinationEntity(89U);
    msg.service.assign("EYRUJOOPUWBYUYIXJEKZUVWGTBXLEACHIZCFEVVWZEOOOQSDDNDWYBAMVPPWNLGISKQSAIPMXXQOTLSKVWQTGGHZUJSABDBUYYBSCJKRNFIKLDTCXUEAGQVKRKHNHRDPVZJLGQMCQKFCNCYRGWJETOBNDVIFFGWMULREPHFSPZHXVQYCVIYMRDYCSLZN");
    msg.service_type = 155U;

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
    msg.setTimeStamp(0.7239318416283844);
    msg.setSource(10767U);
    msg.setSourceEntity(213U);
    msg.setDestination(7727U);
    msg.setDestinationEntity(98U);
    msg.service.assign("UASYJEVZZRNJNUTQLEVLFPKEFZCGMTGDVDHZJBRERFXYNQPRVPBUOEXNKYMGVDODQZCQTHOSBWGFJZOPTJSQLJSTDCSIPRFBCICLGGDPMCCXKXXGMWYWFZEHV");
    msg.service_type = 82U;

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
    msg.setTimeStamp(0.38800794100050706);
    msg.setSource(39425U);
    msg.setSourceEntity(24U);
    msg.setDestination(43857U);
    msg.setDestinationEntity(172U);
    msg.service.assign("DTRSMYVFQTPYSQMWWBWHGSPIDTUXZOHSIXPVFQUIOBBEZKJYOMWDDFXYCMKAVSBVVMHLFVHMLWGPQUANRMURYPHXEPLIGKUNEJPZFIOJLNZEECXBFJLIRJQBGKPCNYUALNYCQDXIMVGXSZHUHQHFUSKHOABALKDOUBVNTDACJSSQRDTKRBGVIZOLYJCJEZFXZSWQWYTCITALJEREAOKRWLBZKRFPOHGCNPTTNDZDMXNN");
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
    msg.setTimeStamp(0.6396167993056551);
    msg.setSource(53686U);
    msg.setSourceEntity(232U);
    msg.setDestination(48864U);
    msg.setDestinationEntity(143U);
    msg.value = 0.21523829406921957;

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
    msg.setTimeStamp(0.898979087455468);
    msg.setSource(21268U);
    msg.setSourceEntity(180U);
    msg.setDestination(50406U);
    msg.setDestinationEntity(126U);
    msg.value = 0.6509802024219542;

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
    msg.setTimeStamp(0.08325071556798269);
    msg.setSource(25641U);
    msg.setSourceEntity(215U);
    msg.setDestination(42318U);
    msg.setDestinationEntity(196U);
    msg.value = 0.3295967280469797;

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
    msg.setTimeStamp(0.09189424871873664);
    msg.setSource(31639U);
    msg.setSourceEntity(215U);
    msg.setDestination(36718U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0980683642174125;

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
    msg.setTimeStamp(0.7086535852026681);
    msg.setSource(24138U);
    msg.setSourceEntity(145U);
    msg.setDestination(56452U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7531766736853235;

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
    msg.setTimeStamp(0.048011612976566975);
    msg.setSource(58949U);
    msg.setSourceEntity(64U);
    msg.setDestination(30440U);
    msg.setDestinationEntity(46U);
    msg.value = 0.4569433608979885;

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
    msg.setTimeStamp(0.8771510133238732);
    msg.setSource(53306U);
    msg.setSourceEntity(25U);
    msg.setDestination(25949U);
    msg.setDestinationEntity(227U);
    msg.value = 0.37644370585639886;

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
    msg.setTimeStamp(0.9348246438453718);
    msg.setSource(51069U);
    msg.setSourceEntity(191U);
    msg.setDestination(12953U);
    msg.setDestinationEntity(57U);
    msg.value = 0.647102513094511;

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
    msg.setTimeStamp(0.9708567821818613);
    msg.setSource(2633U);
    msg.setSourceEntity(3U);
    msg.setDestination(21001U);
    msg.setDestinationEntity(186U);
    msg.value = 0.5184694565702662;

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
    msg.setTimeStamp(0.3097640625728144);
    msg.setSource(48848U);
    msg.setSourceEntity(176U);
    msg.setDestination(43703U);
    msg.setDestinationEntity(206U);
    msg.number.assign("TAZSFSOCHWKQHNILHOMEDZIJMSEKYMPLOMZZAGRJLVDVAZCPPYRJPBLXOXERDKMLRQSOXRHVMBLGQAUYFUVHCBANBSCRGCIBNETNPYNTDYKPSFEQQFWTEJCPHCLVWXSNOEFRSAEKVIEITMFTWWGPPZUMKFUROFZQYIUIKDHYHMBVWYVDNEVCRHKYPGXSFTWQXFNWZJXAOZGTNKJUBXWBUJVLNUGDKAJJXLHTGQIBDMAGCAQBSCZLOOXRQJWUI");
    msg.timeout = 63345U;
    msg.contents.assign("WWYVUZHLUZSJTOQHUULKGTFLEGKXGHTHVZMYFEPMOVJMMYVTSNOLBNCCCEPUBDUTGNLOAEINOTQDHAJQFCXFAGKDLFVEGTZ");

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
    msg.setTimeStamp(0.627389134638335);
    msg.setSource(60892U);
    msg.setSourceEntity(76U);
    msg.setDestination(1178U);
    msg.setDestinationEntity(145U);
    msg.number.assign("EJKZPEBKVBHNMEVVAELAZFYDFUIPLLQJWXDROVCMAGKUGDSDIXJOAQFMQONCABWEDWAJRYKZBJTZLRZFPNRSELXSTSZSGHZFDYPBIVNORUPCXYXHLOGSIBTWCMURWQP");
    msg.timeout = 21156U;
    msg.contents.assign("NAMFAMIWZJKKFJDQQUZHGKEXOBKUVVIMVASIDXYRMYHUYZJBZTNKREPEZUQFELCTONJKPLFVDPHNDHHMYCJFPETVABBUJZFCUHPESQDWSZIBWMOXWYLTCWCCLGITATBBIYVRRAVF");

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
    msg.setTimeStamp(0.7185324717643107);
    msg.setSource(47732U);
    msg.setSourceEntity(19U);
    msg.setDestination(36440U);
    msg.setDestinationEntity(104U);
    msg.number.assign("EGQSCXYTBVTLPBSKGKQSPNYWBLJTSZYTQTHCEQJZYSPBVZUOSKJOTURWWJSCBKMKXEPZMEZIZZBURRWFFWKEEXWDXUVJMNLPUHQTGNFIUNLQRPYTVBCFQAGLYICNEVDMAKYHWREXZMVFVVBCHAFYDHD");
    msg.timeout = 45895U;
    msg.contents.assign("XROYDUEZGRMXBAJKJIFVFYIOMMNVZFGYTLGAXVYDKBEKKLCPHGLFZVUEQLJMVQSLVRPOSPRCHWCFMXATQNLUQAOWI");

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
    msg.setTimeStamp(0.4118002519064218);
    msg.setSource(13498U);
    msg.setSourceEntity(97U);
    msg.setDestination(28976U);
    msg.setDestinationEntity(31U);
    msg.seq = 3892104925U;
    msg.destination.assign("IRRWWEPMYVPEILQHDGZQZYVUHOGEXFFSALCQNEYLQJMGBYOAJUGMHXMNXGWKTVNZRVASNYECUVVEFCJWRXBXHZKMBFLAGXYGQJAYPSQRQRUSPOIJSTUBZJITWMGUVODBHORACUFVQNKPSFDCYDCLRPZPLXKKBZNDWCEOIODAPFULISUWRZEQFM");
    msg.timeout = 47488U;
    const char tmp_msg_0[] = {-17, -127, 17, 37, 101, -103, 52, 54, -120, -93, 63, 111, 117, 92, 67, -99, 52, -58, -1, -83, -79, 112, 68, 37, 26, -43, 46, 74, 67, 38, -102, 22, -92, 99, 33, -12, -60, 93, -39, 52, -97, -45, -114, 87, -57, -34, 63, 65, -124, -36, -53, -33, -108, -114, -2, 33, -12, -67, -5, 70, -35, -37, -45, -9, -85, -123, -81, -32, -13, -103, -18, -16, -93, -83, 101, 47, -84, -57};
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
    msg.setTimeStamp(0.7513293584225551);
    msg.setSource(9840U);
    msg.setSourceEntity(97U);
    msg.setDestination(10860U);
    msg.setDestinationEntity(191U);
    msg.seq = 1509322602U;
    msg.destination.assign("KFOEDXBYUOCQKZOYPFXZRPBEC");
    msg.timeout = 14928U;
    const char tmp_msg_0[] = {-128, 29, 49, -29, 29, -19, 74, 100, 2, -43, -82, 35, -106, 11, -10, -57, -81, -108, 40, 119, 86, 125, 46, 36, -62, -96, -14, 101, -92, 27, 103, -121, 59, -68, -125, 6, 126, 121, 87, 76, 101, 69, 44, 116, 28, 63, -46, 88, -50, -114, 75, 124, -23, 7, 9, 24, 123, 102, 68, 79, -81, -53, 126, -45, -77, 123, -82, 46, 93, 74, -114, -30, -32, -63, -66, -21, -30, -95, 45, 71, -117, 7, 104, 66, 67, 70, -112, 109, -123, 4, 110, 112, 75, 101, -89, -91, -124, 84, -72, 49, -124, -18, -8, 55, -84, -51, -39, -4, 113, 23, 3, 34, -56, -105, 32, 57, -66, 90, 85, 112, -101, 14, -41, -47, 100, -13, -36, 96, -106, 110, -25, 89, -47, -16, -96, 114, 103, 72, 106, -36, 96, -40, -24, -102, 42, -125, 0, -75, 106, 91, -127, -93, -58, -79, -19, 81, 101, -58, 82, -103, -36};
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
    msg.setTimeStamp(0.9454347824366935);
    msg.setSource(42425U);
    msg.setSourceEntity(179U);
    msg.setDestination(26614U);
    msg.setDestinationEntity(28U);
    msg.seq = 2866723038U;
    msg.destination.assign("JPFKKBABXTSSXZPLXKSVUXHQTQGNHWWGGICCJZZPYDWAMCZAEKXUBNGOABUOKNRHPLMDWEGIRRGFEYQBOSBCPJRQCUWXBEBFBOFOJNTLOIIHOMUPFCLNAZEKXHZXHYENRTGEZILJXWCNDMGVCA");
    msg.timeout = 51015U;
    const char tmp_msg_0[] = {114, -50, -105, 47, -75, -127, -17, -21, -22, -75, 33, 51, 86, 77, -96, 101, -37, 11, -17, -94, 42, -35, 45, 17, -9, 17, -13, -31, -78, 36, 11, -38, -1, 95, -63, -63, 48, -32, -10, -35, -67, 80, 50, -16, 13, -101, 83, -74, 18, 62, -86, 76, -71, 91, -15, 80, -89, 73, -70, 26, 113, -14, -124, -29, 22, 77, 12, 71, 44, -91, -87, -43, -108, -99, -72, 21, -110, 51, 121, 3, 0, -53, -104, -114, -45, -28, 100, 27, -58, 81, -115, 21, 38, -89, -119, -79, 115, -4, -43, -13, -22, -104, -109, -58, 117, 26, 95, -42, -83, -118, -1, -110, 75, 118, 33, 91, -47, 91, 33, -86, -124, -107, 73, 94, 52, 57, -106, 55, -44, -42, -112, -94, 48, 105, -24, 70, -124, -105, 117, 49, -69, 87, -118, 37, 52, -75, -64, 69, 19, 88, 111, -24, -46, -96, -83, 19, -115, 37, 97, -111, -46, -14, -35, 41, -83, -97, -14, 105, -83, -112, 85, 65, -117, -65, 4, -125, -70, -80, -76, 122, 41, -6, -9, -63, 65, -100, -75, -53, -7, 81, -59, -67, -107, 70, 3, 35, -122, 52, 83, -43, 26, -32, -44, -91, 51, 44};
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
    msg.setTimeStamp(0.18938385885983178);
    msg.setSource(32952U);
    msg.setSourceEntity(211U);
    msg.setDestination(19377U);
    msg.setDestinationEntity(199U);
    msg.source.assign("TXMVBNABLALBWVUKZOGMHTOCRYVKJWDIUHGZQRRESMVHENQPGTEVWPBNBFYITYXNZKCUSTCQXRGAMCQUMAJGJWIRIMGHVUBCHJHQSXBPXECVEUGPURIGUFTBLEVCPOXEFZWJJ");
    const char tmp_msg_0[] = {-35, -69, 59, 31, 58, 56, -125, -75, -49, 59, 49, -58, 41, -33, -56, -30, 18, -30, -9, -103, -13, -45, -63, 15, 90, -97, -50, -38, 75, -49, -96, -41, 55, -4, 48, -38, -90, 121, 97, -41, -123, -124, 99, 105, -15, -13, 25, 26, 27, 121, -33, 22, 101, 114, 63, -117, 4, -38, 122, -59, -110, 119, 34, -51, 30, -50, -1, -55, -107, 125, -47, 116, 62, 26, -18, -110, 39, 124, -95, 55, 93, -49, -100, 22, -103, 13, -105, -45, -6, 44, -99, -4, 48, 41, -78, -72, -43, 126, -63, -72, 10, -102, -16, -66, 42, 61, 11, -87, 112, 32, 35, -51, -6, 125, 94, -29, 67, -30, -126, 53, 99, 98, -128, 90, -22, 115, 104, 115, -97, -77, -92, -118, -41, 26, -104, -32, 35, -7, 36, -128, -34, -88, -53, -59, -38, -127, 52, -31, 116, -108, 73, -125, -124, -92, -13, -124, -93, -106, -66, -48, -13, 31, -44, 56, 32, 31, 73, -94, 110, -108, 9, -21, 62, -6, -10};
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
    msg.setTimeStamp(0.1595717312315741);
    msg.setSource(54466U);
    msg.setSourceEntity(194U);
    msg.setDestination(1846U);
    msg.setDestinationEntity(178U);
    msg.source.assign("VKSHYOWYKNHCDLLKCGTBTRUHWHGYLIVXMWRBIYKTAMDQIFPEFFIUUPBXKEGWWBKPZSEYXIEDRTDULBMNVAZEFFDFEGZCZIJNJAQTZBUFBWERWWCQPXQJWOHXEGDTKSZYLEJKDLCWPHSASGVRNLNPBDNYCOSAOTEMCXKPANCJXLTXHSAVNMDUVAMQOAGTLJRVOKNIJROORMPSDUSVHZAVZGCYQOMXBFCJHSLHQYIFRPNXJMFMQGUGQQ");
    const char tmp_msg_0[] = {116, -46, -57, -60, -54, -17, 1, 79, -47, 53, -100, 101, -104, 66, -108, -93, -97, -24, -124, 85, -11, -120, 121, 61, -21, -12, 124, -90, -4, -69, -60, -101, 17, -52, -93, -126, -23, 65, -57, 115, 54, -87, 13, -1, -128, -45, -75, -36, -109, -63, 58, -41, -17, -13, 83, 12, 88, 30, 35, 25, 114, 1, 60, -59, -46, -70, 10, -10, 76, -78, 65, -53, 88, -96, -9, 95, 19, -9, 87, -79, -39, 71, 121, -59, -8, -117, -70, 60, 83, 51, -7, 71, -14, -128, 57, -119, 63, -40, -2, 23, 116, -28, 21, -59, -56, -64, 26, 35, 59, -60, 75, 70, -2, -1, 51};
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
    msg.setTimeStamp(0.32415917564426944);
    msg.setSource(46076U);
    msg.setSourceEntity(253U);
    msg.setDestination(19760U);
    msg.setDestinationEntity(180U);
    msg.source.assign("BPBZFSISHIRVZYYPUPKMKAVLLNAESMJOSBLVTIATWSQFSAXTIYEJFRCTXVPAXQTVOWJMBZNTEQFDUXCKUFBDHCOMCSEHLBKCDGGDZBRQLGUSTWPVEDFZZKDMDKFYQXKNRLJFMLQOACNNNGYASXZNJMIOKTMHX");
    const char tmp_msg_0[] = {-97, 124, 102, -109, 48, 111, -73, 15, -100, 126, -107, 90, 36, -88, 107, -36, 57, -124, -84, 13, -53, -105, -67, 96, -87, 86, -55, -64, -92, -68, -51, -9, 48, 92, -45, -4, 45, -6, 101, 21, -5, 80, -111, -110, -84, 71, -32, -58, -43, -105, 80, -41, 63, -128, -86, 52, 32, -25, -72, -4, -3, -23, -93, 28, 77, 104, 66, -31, 74, -69, -86, 85, 123, -33, -42, 90, -24, 88, -6, 36, -11, -75};
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
    msg.setTimeStamp(0.7225337983949763);
    msg.setSource(11319U);
    msg.setSourceEntity(163U);
    msg.setDestination(64156U);
    msg.setDestinationEntity(147U);
    msg.seq = 2202829467U;
    msg.state = 186U;
    msg.error.assign("CPUAFHWWJZWLHJPAICNDENUBJSYDBWYCPUZJONXRAPPSMZZPHLJFLEAQRMMBBHTVUDYZEZKFOSFCGZIVSQQWDYUHQDYXVNF");

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
    msg.setTimeStamp(0.24016722742963748);
    msg.setSource(45956U);
    msg.setSourceEntity(172U);
    msg.setDestination(61066U);
    msg.setDestinationEntity(214U);
    msg.seq = 1677091357U;
    msg.state = 12U;
    msg.error.assign("MSPCWPHFTAJRDNDJKXXVMFFDGCKYZQWHMNGFOBUHMXQIRYIIOHAAHUVUKJOCKMGXCTYATNABBPDSJSWSXVMRDUESADQWGIKEEJXPSFOBZQBKQLCVIPVJXWWDHAVAONGTTRUDBPCRROJLSRFLUKDQWJFKHYQLRCCEOHHBZXSNMLCYOLQPNUIJGMBWEUYJLAFKGIONVMYRGPUTBGEF");

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
    msg.setTimeStamp(0.8657761761459472);
    msg.setSource(46750U);
    msg.setSourceEntity(225U);
    msg.setDestination(51349U);
    msg.setDestinationEntity(111U);
    msg.seq = 3617356391U;
    msg.state = 136U;
    msg.error.assign("SMUUGBMOOASIHVVGCAJVPKLDTUEWQFBEKGPYPXYMVWTQPHZFQRU");

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
    msg.setTimeStamp(0.22588868082289926);
    msg.setSource(25786U);
    msg.setSourceEntity(101U);
    msg.setDestination(34887U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("OJZXFPGDJSXMUYDHEBCFIMJSCGJYRTGJEOPMUZMIKSAJOBWWAWBPBMZ");
    msg.text.assign("TIAVTBQPIHSGPHLALGSOMGBAUCOWY");

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
    msg.setTimeStamp(0.23302217620928978);
    msg.setSource(48588U);
    msg.setSourceEntity(151U);
    msg.setDestination(6181U);
    msg.setDestinationEntity(178U);
    msg.origin.assign("NNVKUTASMRJTYAENGHGVBPSWQAWODCNJFREMQTOHCSPXXADTIFDCAMXNEHWRIGPUWYFSMKWEPKKEGYIYLEVEPIRIUXCLGAYJUAMPLCMOWGXSWSEBOLLBXXLMQSVGZUVUQQOXGQZNBDFKFYRRHPJAJRYCDKOVANFLQZSSEGIQCNJCFJYZTHFONDJUXUWNURVEMMDBKOBTPLHKYGPIDZKYLBTATRKFSMQ");
    msg.text.assign("IBSZYDRMKXYFLAOBIDDKNQBXHIEZOXROVCWGONKVULSTCHPMRQKWSFHIALBRZZPCRJODXJHCTPMBZYLNDWJUQBCARAPHBDKXGAWXFTRZNWCCXANQLNZXHYCRUVLGUSKSVEHSTUJKFGSQMGOKIOYHUDJYIQUFSYQQSPJVNUXDVFWMSTPPNLGFTJWVDGMEMDEEOAJVTHZVYTJIRCFMPGUAENFMUNWEAIQBWEWLQTIMGYOZZETIHPEBBYKOGCFLLK");

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
    msg.setTimeStamp(0.45556558902652744);
    msg.setSource(10529U);
    msg.setSourceEntity(178U);
    msg.setDestination(22701U);
    msg.setDestinationEntity(115U);
    msg.origin.assign("RBFQGRZGXULXTFVJUDDDNKGNEARVZKSURDJFAFUEOJZHZDYGCVTXIWBALJPMMPZRGYYMBSURQAKFHCJOSPTQXNGWTZHFXIHAKVIFNYQOWJIFPWLVBENAFROMSSLLBYEUQWYCKPLIKXJBURTENRUEPYPALEICCCMNWTWZHOHXSEQITTUAZZVHOHKMPTARYSMGGCWNBNUQKXPIQDGVNOCSMIQLSHJMVXOBEJLYGDDTAMJVCKF");
    msg.text.assign("QCLLNIYWAGFRLOXETYKNDASYKNSBUIGEXDDXLDBOEELADANMRSQJZAWBXBCYBFUTSDLVMVXHJFGYTCMVNILAXCNKHNDWDPCMBKBAZOQZACLVJLEMRZCLFBIKTOQOM");

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
    msg.setTimeStamp(0.5676013367793504);
    msg.setSource(60516U);
    msg.setSourceEntity(62U);
    msg.setDestination(12579U);
    msg.setDestinationEntity(227U);
    msg.origin.assign("ZYALRLKXPCFJUHWPFGZVQWXOWQZZQZIOAPLNTCNLPQNACVXWAAKEKMSEVIRNJUDILOJBMIAMZCCYMNKIUVJFXDDJSWTNTRYUBXIZQHPEHBNIJMTTYVYEGXHEXRAKWPHEMUEKVKTRFFSOFXZV");
    msg.htime = 0.6917448467696998;
    msg.lat = 0.7937392136991074;
    msg.lon = 0.48370514273233145;
    const char tmp_msg_0[] = {16, 66, -128, -72, 122, -19, 104, -103, 12, -113, 18, 109, 17, -121, 51, -85, 65, 21, -28, -32, 72, -62, -116, -103, -108, -101, -44, 43, -127, -19, -82, 118, -22, 20, -119, 46, 27, 111, 24, -90, 19, -80, -7, -79, -52, 9, 59, 61, -125, -79, 95, -26, -99, 10, 27, -12, -123, 29, -45, -123, -106, -82, 94, 102, 125, -29, -82, -98, 82, -82, 13, -106, 50, 25, -32, 34, -107, 29, -43, 31, 3, -96, 76, -85, 19, -100, -9, 85, -108, -89, -109, -113, -1, 42, -128, -113, -125, 69, -28, -61, -117, -59, -53, -128, 119, 38, -15, 18, -106, 67, -27, 26, 85, 32, 91, 101, 34, 51, 124, 101, 20, -23, 75, -53, -113, -105, -113, 1, -81, 120, -119, -70, 99, -66, -119, -54, 110, 105, -93, 120, 112, -128, -117, -12, -33, 118, 58, 7, 34, -102, -9, 46, -46, 29, 58, -23, -42, 60, -3, 45, -56, 66, -1, -91, 79, -7, -96, -55, 123, -34, 70, -70, -101, -102, -124, 13, 71, 86, 71, -126, 35, -125, -95, -80, 17, -7, 0, -5, -74, -10, -99, -77, -105, 55, -85, 68, 112, -13, 52, -80, 60, 67, -112, 86, 45, 27, -124, 9, -61, 119, 14, -57, -71, -114, 90, 75, 12, 108, 79, 59, 5, 113, 72, 12, -71, -49, -105, 26, -4};
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
    msg.setTimeStamp(0.10980113006795889);
    msg.setSource(26152U);
    msg.setSourceEntity(207U);
    msg.setDestination(44189U);
    msg.setDestinationEntity(139U);
    msg.origin.assign("UQQKBPSAGTSOWJHNYTWNWQETNVAUBYLMFSKGDRJOKHVBVISVSFFCQFXHWMSXJOGYLVJGCXXINOEAPCCKPQUFRJFZHONKGNKBREIUEEZMHEBDRBPOJNOPCWIBLDTTMRZFWQLWQSTZIZRXDCHGOVLARRHPRXAUUHKCELJEF");
    msg.htime = 0.2209741571712519;
    msg.lat = 0.30431932859895305;
    msg.lon = 0.2976137566987769;
    const char tmp_msg_0[] = {75, -83, -35, 62, 30, -27, -16, 81, 32, -97, 91, 22, -18, 9, 7, -127, -119, -126, -94, -109, -57, -44, 76, 108, -64, 75, 3, 92, -20, -90, 28, -83, 32, 18, 109, -5, -84, -84, 96, -45, -113, 14, -113, 22, 21, -73, 11, 39, -69, -98, -74, 102, -109, -111, 62, 43, 66, 62, -111, -46, -34, 73, -10, 90, 57, 9, -79, 75, 51, 102, -126, -24, 94, 39, 19, 18, -65, -10, -105, 7, 12, -6, 68, -103, 32, -108, -128, 120, -25, 107, 3, 116, -14, 5, -73, -43, 100, 115, -108, -115, -101, -120, 38, -51, -31, 99, 85, 80, -118, -109, 21, 55, -11, 78, 41, -115, -92, -18, 122, 55, -31, 51, 49, -10, -81, -68, -106, 19, -73, 55, 29, -46, -91, 77, -122, 3, -1, -108, -125, -116, 30, -107, 93, 14, -115, 83, -76, -68, 29, -121, -35, 92, 78, -73, 39, 56, -37, -58, -58, 27};
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
    msg.setTimeStamp(0.6040669249184659);
    msg.setSource(1658U);
    msg.setSourceEntity(215U);
    msg.setDestination(2774U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("ZGCCACEWWXAJLWUPUFJBYRHKTPPUVELBGJZNUEDKLUUWCZDDSNWQHVHREMGEDIQSLHKXO");
    msg.htime = 0.9881653086196274;
    msg.lat = 0.7398283838976707;
    msg.lon = 0.7840148417716082;
    const char tmp_msg_0[] = {87, 125, -66, -8, 83, -96, 40, 17, 77, 57, -19, 55, 67, -73, 39, -63, 24, -86, 121, 87, -68, 48, 26, -121, 75, -109, -103, -80, 60, -102, -49, 15, -115, -103, -84, -95, -108, -75, -35, 87, 81, 123, -80, 83, -28, -93, -79, -119, -127, 94, 107, -89, -51, 50, -32, 28, -71, 65, -107, -89, 71, -83, -44, -112, -47, 81, 18, 58, -21, -43, -96, -61, -57, -79, -109, 19, -97, -7, 37, 45, 82, 16, -35, 29, -7, -28, -101, 112, -121, -115, 100, 81, -21, 27, -10, 97, 68, -8, -88, 13, 30, 116, 86, 122, 69, 115, 64, 52, -41, 68, 6, 48, -12, -30, -29, -128, -103, -11, 109, 45, -108, 67, 88, 109, 50, 47, -125, -95, -9, -112, -94, -97, 17, 9, 27, 103, 46, -67, -70, -72, 97, -39, -109, -27, 105, 120, 11, -50, -121, 19, -19, -57, -122, 24, -29, -105, 52, -49, 125, 5, 103, -92, 110, 93, -47, 14, 68, 46, 74, -71, 23, 73, 43, 50, -115, -99, -22, 53, -82, 66, -7, 118, -16, 72, 78, -85, 57, 47, -30, 121, -20, 6, 7, -107, -96, 12, -24, -3, -75, -21, -2, 56, -10, -120, -64, 89};
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
    msg.setTimeStamp(0.8522015737309344);
    msg.setSource(28235U);
    msg.setSourceEntity(186U);
    msg.setDestination(1248U);
    msg.setDestinationEntity(220U);
    msg.req_id = 807U;
    msg.ttl = 30339U;
    msg.destination.assign("RCLDGECIYIYNDAUFHRUPAQKXROCXEUNHWFZFUMZPWEUJHOWUZEQJINIPUPNQHTWSLVOHPKMZENAPJUCYWTMFDRWHMYMSPFXFTKIMBRVRBRCZRYQXKATAQLVKSVMTDLPGIRJWKGOLAHHTIVEZOBSDYBAAMGZCRGTJDEXCTW");
    const char tmp_msg_0[] = {97, -66, 58, -28, -28, 39, -11, -123, 122, -33, 35, -15, -111, -49, -99, -46, 100, -14, -18, 74, 14, 114, -97, 96, -96, 14, -36, -90, 25, -121, 37, 93, -23, -9, 3, -51, -29, -103, -110, 91, -35, 49, 8, -30, -12, 33, 21, 53, 41, -77, -20, 79, -80, -29, 1, 114, -69, -73, 76, -108, 76, -60, -111, 20, 45, 58, -61, -59, 63, -3, -20, -51, -64, 80, 88, -37, 115, 21, -110, -89, -123, -38, 4, -108, 41, -98, 92, -106, 9, 88, 48, 45, 79, -46, 14, 49, -36, -67, 92, 117, -107, 44, -88, -74, -119, -54, -63, -76, 6, 41, -39, -113, 94, -120, 14, 117, -115, 110, 59, -107, 29, 63, 106, 6, -71, -87, 39, 30, -92, -92, -56, 39, 122, 76, -21, -116, 5, -85, -79, 20, 32, 45, -7, -97, -73, 58, -18, 75, 54, 48, -20, -66, -101, -57, -122, -96, 54, 98, -76, 46, 125, -53, -66, -109, -89, 96, -64, -76, 13, -23, -105, -89, 26, -64, 32, -45};
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
    msg.setTimeStamp(0.7117077198440721);
    msg.setSource(27775U);
    msg.setSourceEntity(231U);
    msg.setDestination(61699U);
    msg.setDestinationEntity(35U);
    msg.req_id = 237U;
    msg.ttl = 51330U;
    msg.destination.assign("DHZQRVQNMNJOIBZLOPMSNQYOWMXHEGACNLGTQQNHDVYZVLIXEECMPEOZGLRVYFASKTATGBCJFRMLDKRNEOOMIJJDQEDJLAWVZATUINWQGIKDFKMUBSSDAZEVCWBORKSPCGXPXYEWAIKNFSLCCBZKILBGWJIBIWUAFOQHPNFUYPRRERKFBYYBMNJUYXUZRTTMRHVVYLDSTBWOSDXGJXOSCTAGUZYAVHZDXVPHSUHFUMPPCQXLJWKXJEHTPHTIQC");
    const char tmp_msg_0[] = {7, -95, -57, -19, 123, -51, 84, 72, -109, 60, -64, -38, 75, 22, -60, -25, 50, 11, 18, 11, -52, 25, 30, -20, -63, -97, -88, 51, 25, -100, 45, -90, -88, -63, 58, -116, 65, 8, 73, 101, 77, 77, 90, -114, -119, 56, -92, -51, -27, 97, 19, -9, -15, 110, -102, 105, -16, -119, 103, 13, -105, -100, -68, 30, -111, 7, -24, 124, -73, -56, -101, -62, 101, 101, -42, 78, -30, 58, -116, 111, -126, -38, -115, 98, -32, 113, 43, 117, -1, -38, 100, 97, -76, 14, 112, -33, -60, -13, 117, 80, -31, 19, 106, -58, -56, 62, -59, -4, 40, -49, 113, 7, 114, 38, 67, 94, 57, 86, -124, -9, 84, -104, -30, 4, -92, 77, -80, 47, -18, -2, -74, 108, -78, -46, -63, 111, 99, 34, 4, -74, 22, 33, 40, 47, -35, -20, 40, -101, 68, -113, -6, -98, -71, 6, 43, -56, -24, 47, 92, 10, 15, -76, -92, 87, 0, 2, 14, -118, -14, 80, -73, -106, -20, 101, 52, -126, -90, 122, 31, 32, 33, 62, 68, 116, 52, 34, 123, -28, 83, 29, -88, -87, 124, -47, -4, -30, 115, 84, -29, 117, 84, -1, 80, 73, 28, -46, -91, 48, -84, 68, 84, -27, 37, 48, 119, -20, -42, 120, -120, -78};
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
    msg.setTimeStamp(0.5568769007763056);
    msg.setSource(19119U);
    msg.setSourceEntity(123U);
    msg.setDestination(30245U);
    msg.setDestinationEntity(120U);
    msg.req_id = 37312U;
    msg.ttl = 24512U;
    msg.destination.assign("YRHQDKXNZIHEXXNBAJXNVCUPAGNBTLMTQIAJVXEVLKPVQXNSPGHGSWBZFTHYUUPIYTFJCEGAQPSZIXFSMKVIHJSUTCCRGYMPVRWD");
    const char tmp_msg_0[] = {110, 22, 88, 36, -94, -74, -49, 86, -65, 115, 43, 25, 54, -38, -74, 0, 105, -53, 87, -62, 123, -55, -69, 48, 22, 14, -88, 12, 126, -14, -103, 73, 7, 124, 125, -72, 59, 75, 116, 86, -89, -1, -39, -24, -94, -83, 85, 18, 68, 72, 116, 22, 19, -14, -62, -107, 55, 91, 70, 60, 82, -86, -46, -29, 106, -10, 46, 35, 113, 31, -69, 24, 52, -43, -107, -28, 42, 63, -28, -86, -87, 124, 0, -1, -58, -22, 17, 42, 104, 34, -74, 123, -26, -102, 119, 59, 41, 101, 85, 116, 21, 34, -85, -13, -14, -103, 118, -117, -128, 4, -20, 77, 34, -124, 51, -113, -104, 67, 39, 16, -94, -86, -107, -97, 59, 57, 110, -19, -22, -50, -21, 35, -92, -51, -49, -80, 105, -60, -51, -45, -49, -34};
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
    msg.setTimeStamp(0.8579058285310226);
    msg.setSource(25267U);
    msg.setSourceEntity(54U);
    msg.setDestination(13280U);
    msg.setDestinationEntity(64U);
    msg.req_id = 44852U;
    msg.status = 173U;
    msg.text.assign("FSJODUPJHPTSZTPLGTMWLONMIVVYLHMCKRJVUMECCFAWJGUDZSYNTLIYIYCEHXGJSKHPXXWUQUPKWUHBSKBIWIZJQFLLVDIMNQEQJZUQPF");

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
    msg.setTimeStamp(0.13868703208393351);
    msg.setSource(55622U);
    msg.setSourceEntity(200U);
    msg.setDestination(44888U);
    msg.setDestinationEntity(139U);
    msg.req_id = 8042U;
    msg.status = 217U;
    msg.text.assign("QTYNAXGVKIGTSDRMHFAQIMHKDRRRMBBUYERHMZSSJVQSPHQEWIJNNKHYKLYLZALTTJKTAJCXILPSOJFBUBRTOZLFZUBOYSBILMMJTMMBXQWICJQEWMUKZDXDAIBRFCJVWEHAYENQPXNUSYOFRNNWCUUVGYVLWHOSIUASGLKDGAPOROIHPKFDKGTZOXHPXEWLZQDZDPQJGCVJLEPC");

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
    msg.setTimeStamp(0.02960572564873354);
    msg.setSource(5453U);
    msg.setSourceEntity(246U);
    msg.setDestination(50280U);
    msg.setDestinationEntity(84U);
    msg.req_id = 62707U;
    msg.status = 129U;
    msg.text.assign("OKDIPQDSANCDOFOAYLOWAIYZSABUVMPVZPQLXOFQECWDLDWJWRWHXEXZPSSXZGYZATTTJWZCNK");

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
    msg.setTimeStamp(0.16887512788853487);
    msg.setSource(14639U);
    msg.setSourceEntity(16U);
    msg.setDestination(36160U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("OZZALGILTCXJHRNQUEOEFTMSLEYRZVIVCYCHUYKDJHOVXTBCLDFEUTIBIRXNWYUSUQAVWXPFWNBSQHFBMIEKNEMFRVDBDSIQKFNZTCWQLDJLJRSGJXELHGHWUXOATDNMGTY");
    msg.links = 3365341003U;

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
    msg.setTimeStamp(0.31569420900086886);
    msg.setSource(28143U);
    msg.setSourceEntity(217U);
    msg.setDestination(27981U);
    msg.setDestinationEntity(176U);
    msg.group_name.assign("UIDYPJWBSOHETMJYTKSXIZOVVAOGZOVFWBFMIQEDQRQWKCUWDFEDEHDNUNTHLNANKTFEUPGTYASWP");
    msg.links = 8601428U;

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
    msg.setTimeStamp(0.9924860996955136);
    msg.setSource(41563U);
    msg.setSourceEntity(38U);
    msg.setDestination(29655U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("WSPCEYSMSOBCFMDRUMANWEYMGSHEUIIAGIOJZVJGARHMACQVQQVAZWFTNSRGXXCSLPRNULMLYWAHOKPXBJKOGMCEYBCXZZLJUEJAEIOIARCVPJSUHHRJAFKSTQPNJOJBVWIZKXYLTQTDIHNFDRLDJPXKVUMRBNZZFQVKVZIUTPDXGQKGTYGWDPEUDTSDFKYKMSRTLAUBWGXFGVHBBZQITNDYFO");
    msg.links = 2720058801U;

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
    msg.setTimeStamp(0.2280714068311428);
    msg.setSource(28036U);
    msg.setSourceEntity(116U);
    msg.setDestination(14260U);
    msg.setDestinationEntity(34U);
    msg.groupname.assign("WHTFDQLPXQRSBRBTUMKSBEVGAKY");
    msg.action = 107U;
    msg.grouplist.assign("IFMAOENZJPOFXDXDNEDPBBCINATTKZWSEPTYQCMSUJBKNACUCYXDSLKBRDGJGAVHXYHNEVPMLCYTQGWAXGAQLTWLOQBUMCYDXRNJCAUWVXEYPZQYBSZUZTHKKQROIYZGLXPBJFGDGCOUJZKLWFHVWMVBOQUNIPSYHQWRFKAIGOLNLVSGRJEUMNFHSOAAXFEVTMBUEIEDIOCCHNTVYDMRDWPKFLVMHTIWKRRUHHFTJJJZ");

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
    msg.setTimeStamp(0.36222960576057905);
    msg.setSource(23961U);
    msg.setSourceEntity(120U);
    msg.setDestination(5574U);
    msg.setDestinationEntity(126U);
    msg.groupname.assign("YKAOQFOSGMGOOPNOPBFQBNTWOZHJUURQBWCNUNEQYRWBAAMALDRZITKQMMVWBARXZUKVGBMVYEIGUVYTBX");
    msg.action = 54U;
    msg.grouplist.assign("VPZDVHPRGADFHSROPXXVFWMBAKPWPTEIOTLGZUZWCXUPVDZOCVNDPNLUDQOLGWWKJQQCMEFLLCUHODMLTHRMGYGMFTRK");

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
    msg.setTimeStamp(0.8757344885273765);
    msg.setSource(30398U);
    msg.setSourceEntity(234U);
    msg.setDestination(61447U);
    msg.setDestinationEntity(176U);
    msg.groupname.assign("PGTIULDHPGNOSNNYMLAXRDGKZHOUDXHSMTDFLXJILWADTTGGVVWHSWHYWSEKEBQUGRCLMXINPYZJJBREMIFUYIOCBXFQYXBCQTWMPTQHCFJSBFIDHHWKPJPAPTAYFIWEAGZOJFRZURUKNUHKRSQAUCVCWVCBMBEMVVKEOYXIQZ");
    msg.action = 124U;
    msg.grouplist.assign("ERBRAVXBQDFABHIJFZXHEWWFAZDYUFWJENGKLKUZIQEBQXKJIBJDP");

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
    msg.setTimeStamp(0.8034257028944389);
    msg.setSource(3927U);
    msg.setSourceEntity(84U);
    msg.setDestination(8352U);
    msg.setDestinationEntity(234U);
    msg.value = 0.8654899576698337;
    msg.sys_src = 52227U;

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
    msg.setTimeStamp(0.38664662142074424);
    msg.setSource(64311U);
    msg.setSourceEntity(117U);
    msg.setDestination(10893U);
    msg.setDestinationEntity(99U);
    msg.value = 0.20895261581754854;
    msg.sys_src = 19865U;

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
    msg.setTimeStamp(0.667314994962332);
    msg.setSource(9789U);
    msg.setSourceEntity(139U);
    msg.setDestination(44026U);
    msg.setDestinationEntity(57U);
    msg.value = 0.6290987058957376;
    msg.sys_src = 9565U;

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
    msg.setTimeStamp(0.6636594150468069);
    msg.setSource(56159U);
    msg.setSourceEntity(117U);
    msg.setDestination(61996U);
    msg.setDestinationEntity(82U);
    msg.value = 0.6352910853265281;
    msg.units = 170U;

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
    msg.setTimeStamp(0.7812359287097534);
    msg.setSource(30963U);
    msg.setSourceEntity(196U);
    msg.setDestination(28527U);
    msg.setDestinationEntity(241U);
    msg.value = 0.15087889469197435;
    msg.units = 9U;

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
    msg.setTimeStamp(0.1497892027390204);
    msg.setSource(60309U);
    msg.setSourceEntity(175U);
    msg.setDestination(20484U);
    msg.setDestinationEntity(41U);
    msg.value = 0.11400904598226891;
    msg.units = 171U;

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
    msg.setTimeStamp(0.3652439419256285);
    msg.setSource(48784U);
    msg.setSourceEntity(125U);
    msg.setDestination(8721U);
    msg.setDestinationEntity(23U);
    msg.base_lat = 0.8731106413717794;
    msg.base_lon = 0.8566118976393665;
    msg.base_time = 0.4848189154832251;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 31270U;
    tmp_msg_0.destination = 30879U;
    tmp_msg_0.timeout = 0.7657185755303534;
    IMC::Event tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.topic.assign("YKJXVQSHTJNIPRKZRFBQUHXNREDTILPTMXCOVSVUFKSAVABTPXAYTMRGMOWZCJQTARVNVNGQEPQYXLY");
    tmp_tmp_msg_0_0.data.assign("GPSMJFYANEZOQYZGXWVVOPYTAAPTCXJNCQLWSFHIHSPEECQFIQMGDKRFQROLWLFUJMKKTETHYYSRBMPGJMRUINUEILHJCHZVHCZSMFKVVOXRRCSIBNVYBSZDB");
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
    msg.setTimeStamp(0.9550943006143667);
    msg.setSource(15201U);
    msg.setSourceEntity(79U);
    msg.setDestination(21164U);
    msg.setDestinationEntity(234U);
    msg.base_lat = 0.04793253333912739;
    msg.base_lon = 0.054072421241937785;
    msg.base_time = 0.49677318113735713;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 2722U;
    tmp_msg_0.destination = 30947U;
    tmp_msg_0.timeout = 0.6814007910604668;
    IMC::HistoricSonarData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.altitude = 0.6059549835184771;
    tmp_tmp_msg_0_0.width = 0.5952123829721064;
    tmp_tmp_msg_0_0.length = 0.2594822991850477;
    tmp_tmp_msg_0_0.bearing = 0.5889834468083562;
    tmp_tmp_msg_0_0.pxl = -524;
    tmp_tmp_msg_0_0.encoding = 28U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {99, -16, -38, 122, 71, 88, 88, -124, -61, 50, 26, 55, -33, -75, -82, 28, 118, -83, 31, -113, 3, -32, 76, 55, -32, 69, -107, 125, 11, 27, 82, 52, 30, 45, -106, -84, -71, -110, -104, 112, 70, -116, -34, -106, -63, -119, -115, 39, -10, -9, -21, 126, 119, -92, 48, 9, -126, -41, -19, 41, -33, 28, 85, -53, -10, -128, -83, -40, -54, 109, -89, 88, -21, -61, -65, 57, 21, -104, 59, 19, -111, 71, 38, 112, -120, 99, 73, -112, 16, -57, 13, 76, 64, 40, 58, -80, 39, 115, 37, 39, -54, 38, -44, -104, 68, -119, -87, 73, 114, 61, 70, 16, -91, -34, 87, 74, -111, 75, 28, 119, 88, -80, -123, -29, 96, -51, -42, 76, -11, 102, 36, 12, -116, -64, -3, -128, 93, -113, -15, -29, -28, -4, -37, -94, 32, -60, 62, 52, -63, -92, -47, 18, 9, 27, -105, 3, -105, 45, 22, -125, -6, -83, 78, -74, -70, -102, -62, 98, 78, 19, -55, 103, -55, 2, -39, -122, -98, -35, 14, 43, 119, -121, -87, 79, -68, 50, -126, -87, 64, -127, 116, -16, -32, -92, -62, 75, 112, 54, -12, -39, -1, -22, 45, 42, -126, 91, -34, -43, -14, -7, -110, 95, 106, 103, 80, 90, 29, -92, 79, -101, -107, -18};
    tmp_tmp_msg_0_0.sonar_data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7925066593249211);
    msg.setSource(45475U);
    msg.setSourceEntity(9U);
    msg.setDestination(47708U);
    msg.setDestinationEntity(42U);
    msg.base_lat = 0.09776739368557741;
    msg.base_lon = 0.46529494387611725;
    msg.base_time = 0.07429569718860451;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 64221U;
    tmp_msg_0.destination = 50043U;
    tmp_msg_0.timeout = 0.8060556127213622;
    IMC::CacheControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 134U;
    tmp_tmp_msg_0_0.snapshot.assign("WVPSKPPQFFGUDPNNCJ");
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.4304524708103097;
    tmp_tmp_tmp_msg_0_0_0.y = 0.7761416637024158;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0032682233730664256;
    tmp_tmp_msg_0_0.message.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.33567270410821537);
    msg.setSource(16902U);
    msg.setSourceEntity(172U);
    msg.setDestination(15238U);
    msg.setDestinationEntity(235U);
    msg.base_lat = 0.08361150548248752;
    msg.base_lon = 0.609211025695872;
    msg.base_time = 0.5878308265221537;
    const char tmp_msg_0[] = {31, 38, -127, 106, 100, -102, -80, 63, -71, -98, -21, -83, -9, 65, -4, -63, -84, 106, 4, -58, 74, -47, 45, 70, -48, 0, -70, -65, 114, -98, -12, 91, -111, -39, -97, 95, 26, -111, 79, 48, -26, 34, 20, 114, 6, -88, 106, 103, 68, -84, -117, 103, -37, 122, -109, 79, 38, -111, 27, 60, -89, 68, -53, 79, -4, -119, 116, -15, 8, 40, -32, 51};
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
    msg.setTimeStamp(0.4472897529204952);
    msg.setSource(30636U);
    msg.setSourceEntity(128U);
    msg.setDestination(38301U);
    msg.setDestinationEntity(98U);
    msg.base_lat = 0.15500129642516192;
    msg.base_lon = 0.15293133958082816;
    msg.base_time = 0.14402352530537543;
    const char tmp_msg_0[] = {33, 114, 37, -18, 52, 11, -15, -118, -62, -113, -20, -45, 81, 81, 75, 30, -38, 45, 107, -61, 124, 40, -98, 104, 39, 114, -39, -47, -61, -19, -1, 88, 47, -72, -91, 67, -106, -122, 99, -115, -46, -107, -65, 25, 16, -118, 44, 106, -37, 121, -6, 3, -15, -15, -108, -41, -51, -26, 59, 7, 122, -47, 93, -75, -7, -92, -1, 54, -125, 93, 19, 110, 103, 64, 11, -123, -99, 10, -51, -68, -53, -27, -108, 10, 9, 120, 17, 26, -113, -78, 26, -120, 73, -66, -94, -104, 7, 46, -32, 70, 5, 87, 61, 58, -47, -33, -43, 103, -21, -75, -61, 89, 14, 68, -104, 53, -39, 3, -57, 22, -104, 82, -73, 88, -69, 43, 111, 83, 112, 85, 126, -14, -40, -72, 27, -60, -88, -38, -55, -38, -5, -71, -23, -76, -54, -97, -116, -11, -52, 53, 30, -108, -19, 103, -122, 117, 1, 37, -92, 37, 33, 54, 106, -118, -116, 121, 97, 2, 55, 53, 7, -114, 16, -95, -20, 15, -76, -100, -105, -25, -79, -30, 32, -2, 34, 104, 92, 112, 103, 91, -95, -82, -60, 29, -28, 97, 121, -80, -50, 87, 56, -53, 38, -117, -46, 38, -30, 23, -89, 81, 64, -78, 33, -113, -115, -99, 80, -104, 66, -91, 99, 89, -53, 3, -50, -14, -86, -85, 93, 123, -65, -78, 45, 56, 94, -8, -57, 107, -6, 112};
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
    msg.setTimeStamp(0.5346392474845275);
    msg.setSource(53696U);
    msg.setSourceEntity(50U);
    msg.setDestination(156U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.5779356524879522;
    msg.base_lon = 0.5018549925890302;
    msg.base_time = 0.8703688904095153;
    const char tmp_msg_0[] = {-58, 4, 72, -89, -105, 93, -70, -78, 103, 68, -101, -42, -109, -125, 76, -109, -37, 59, 90, 68, 26, 123, 1, -13, 8, -103, 59, 71, 19, -30, -1, 83, -97, 33, 29, -96, -124, -25, 21, 109, 107, -87, 38, -26, -70, -77, -3, 65, -86, 30, 117, -127, 36, 20, 42, 111, -23, -127, 22, -126, 112, -45, 90, -116, -94, -110, 28, -114, 96, 27, -37, -3, -76, 69, -102, -7, -118, -30, 81, 8, 8, 97, -52, -87, -23, 42, 85, 126, 116, 0, -14, 82, -25, -100, -101, 102, -70, 27, 21, -38, -45, 66, -126, 94, 57, 22, -49, 14, -98, -25, 29, 36, 26, 112, 38, 37, -98, -87, -125, 8, -52, -25, -59, -92, -72, -53, -38, 121, -92, 1, 120, 55, 17, 40};
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
    msg.setTimeStamp(0.5322996393286181);
    msg.setSource(25865U);
    msg.setSourceEntity(72U);
    msg.setDestination(5115U);
    msg.setDestinationEntity(230U);
    msg.sys_id = 62437U;
    msg.priority = 14;
    msg.x = 19991;
    msg.y = 7835;
    msg.z = -31303;
    msg.t = 13815;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("BKDWFWAMMCUNTUINKJWULJSDNFYVBHZZVEERACANVCHTLBDJMQWUECTYGYSBEDFLPTILHPMUQKAMEPOYSIZYKWOGRCROEZBXSVTCFKAEIOAHFIRCVXRDNBZXYXVXKBSOFIPGJSQKLYXHUGONUUAQPBTNJNGKPJPZLOOXLJJZOWXYAYFMDVHZBPWPVJGQNQRXODERQMPQUZSDIGWCQHDGTEMHLHIDMLMCRFATAVWITBZSWLGJFTRGKU");
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
    msg.setTimeStamp(0.3708722078879708);
    msg.setSource(27780U);
    msg.setSourceEntity(193U);
    msg.setDestination(56652U);
    msg.setDestinationEntity(192U);
    msg.sys_id = 16682U;
    msg.priority = 0;
    msg.x = -18115;
    msg.y = 30912;
    msg.z = -32676;
    msg.t = 1371;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8012352414909136;
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
    msg.setTimeStamp(0.9966037161648489);
    msg.setSource(29283U);
    msg.setSourceEntity(245U);
    msg.setDestination(54667U);
    msg.setDestinationEntity(133U);
    msg.sys_id = 8349U;
    msg.priority = -42;
    msg.x = 9111;
    msg.y = 32751;
    msg.z = 14966;
    msg.t = -23607;
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.7396866381964166);
    msg.setSource(38588U);
    msg.setSourceEntity(139U);
    msg.setDestination(57810U);
    msg.setDestinationEntity(115U);
    msg.req_id = 54826U;
    msg.type = 225U;
    msg.max_size = 34173U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9117894450783142;
    tmp_msg_0.base_lon = 0.12580096341386138;
    tmp_msg_0.base_time = 0.6744015911291318;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 34214U;
    tmp_tmp_msg_0_0.priority = 71;
    tmp_tmp_msg_0_0.x = 2833;
    tmp_tmp_msg_0_0.y = -24862;
    tmp_tmp_msg_0_0.z = 22485;
    tmp_tmp_msg_0_0.t = 21573;
    IMC::Brake tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 160U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7693315849024253);
    msg.setSource(3201U);
    msg.setSourceEntity(143U);
    msg.setDestination(62880U);
    msg.setDestinationEntity(195U);
    msg.req_id = 61358U;
    msg.type = 209U;
    msg.max_size = 21326U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.1688544548833245;
    tmp_msg_0.base_lon = 0.9497173797698678;
    tmp_msg_0.base_time = 0.18803641901175638;
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
    msg.setTimeStamp(0.5235325393663843);
    msg.setSource(6134U);
    msg.setSourceEntity(56U);
    msg.setDestination(62872U);
    msg.setDestinationEntity(163U);
    msg.req_id = 23011U;
    msg.type = 134U;
    msg.max_size = 19612U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.08709059922227402;
    tmp_msg_0.base_lon = 0.5227434462868212;
    tmp_msg_0.base_time = 0.07536694259032772;
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
    msg.setTimeStamp(0.9209831171100836);
    msg.setSource(42959U);
    msg.setSourceEntity(165U);
    msg.setDestination(1326U);
    msg.setDestinationEntity(70U);
    msg.original_source = 46658U;
    msg.destination = 54406U;
    msg.timeout = 0.7645032655580126;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("VAONWWIEUHUDFACGPIHJLUBHIR");
    tmp_msg_0.message_id = 45203U;
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
    msg.setTimeStamp(0.3567875929927721);
    msg.setSource(21862U);
    msg.setSourceEntity(46U);
    msg.setDestination(34638U);
    msg.setDestinationEntity(113U);
    msg.original_source = 29277U;
    msg.destination = 63884U;
    msg.timeout = 0.3876482438714606;
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.7890099342728151);
    msg.setSource(60789U);
    msg.setSourceEntity(85U);
    msg.setDestination(5525U);
    msg.setDestinationEntity(178U);
    msg.original_source = 1786U;
    msg.destination = 5152U;
    msg.timeout = 0.2785155389824435;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 196U;
    tmp_msg_0.op = 61U;
    tmp_msg_0.plan_id.assign("FVVHBXXTMPLFXZTHSQXJQZLYWUROCACECPOSBBTENCNVPBIUIKNGFJXDEPGKOWZCYVENVZCBCHPKDNRLDFFJYINVZTWIKYXGSOEPYCXMQAMNLHHMQUQIGBMZUMJUNAUMPVLMD");
    tmp_msg_0.params.assign("QFVPVMIRTKXNKSOTTOVCOHXANGHXPLQIWDJSUGAMOZIVEPFMMVUIBNCSGJOJNLWJLRXDDOQJHKSBGVYUESYZFWQWLICETPPTZXHVYCEIRRHQGSTBLNQJEFKKCZLUBEPXFXDHOUALGKMBMDXVFZBTEQBZYMOYWJSYGHCAKNYHGHHMDZNDISGCQPAIR");
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.8099472986649076);
    msg.setSource(37265U);
    msg.setSourceEntity(244U);
    msg.setDestination(34740U);
    msg.setDestinationEntity(205U);
    msg.id = 199U;
    msg.range = 0.822277004470976;

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
    msg.setTimeStamp(0.7163223430715253);
    msg.setSource(57421U);
    msg.setSourceEntity(186U);
    msg.setDestination(63054U);
    msg.setDestinationEntity(218U);
    msg.id = 217U;
    msg.range = 0.013159746732158806;

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
    msg.setTimeStamp(0.7630747632822157);
    msg.setSource(40201U);
    msg.setSourceEntity(100U);
    msg.setDestination(53097U);
    msg.setDestinationEntity(162U);
    msg.id = 153U;
    msg.range = 0.264049088756503;

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
    msg.setTimeStamp(0.4745199869136395);
    msg.setSource(49353U);
    msg.setSourceEntity(181U);
    msg.setDestination(13051U);
    msg.setDestinationEntity(132U);
    msg.beacon.assign("LWHFBBRKIPVBMEFAKMAFPDPXPQWYSDBRCDKSZWOKMUNPMHYHIKQROZDREOEYMAAAXQSTRBAMVEGRIUPDGTZEPBNLWYBIBGAGNVXKVFYXZWRFNQLZKNLOEROQHZWIPRFWEPGSLQUYJKNACUGKFUDGJJHUNLFTLUNPUGFUNITTGZVJTYLSJXDCJSTXYKT");
    msg.lat = 0.39101384391300265;
    msg.lon = 0.6063210881747582;
    msg.depth = 0.07532332237301043;
    msg.query_channel = 80U;
    msg.reply_channel = 254U;
    msg.transponder_delay = 71U;

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
    msg.setTimeStamp(0.694852462773451);
    msg.setSource(41999U);
    msg.setSourceEntity(23U);
    msg.setDestination(46232U);
    msg.setDestinationEntity(121U);
    msg.beacon.assign("JQRMIQRARMIPSEMFCKPSXPOVIWYCJLJUQEXDREFTGSKHDWJLCAYLKKBBPOCFUTBQVNBZTAQEFFLTFKRHROSTXQVPXWIDHSIWWGNOBHMDXUHVWVCDBBLGXZXMOTNUEHORWKJTYYYZSMLQSNLYRMGZAUWNSGTGDEUZOJAZENBZTGZGRKDAO");
    msg.lat = 0.7960609423323773;
    msg.lon = 0.85382436676397;
    msg.depth = 0.38927252338345275;
    msg.query_channel = 254U;
    msg.reply_channel = 110U;
    msg.transponder_delay = 45U;

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
    msg.setTimeStamp(0.5967783748923071);
    msg.setSource(64898U);
    msg.setSourceEntity(236U);
    msg.setDestination(15963U);
    msg.setDestinationEntity(44U);
    msg.beacon.assign("GKTZGMBQFDSXYMGODFBECYVGOBDREQPXSCSPIJAZDBSFFZDWYINGLRCAFVINNTLXFCIQMPMMKPZQJFOBIMPOAPXFEHNTUZUHCYRSRVRK");
    msg.lat = 0.2609588383601227;
    msg.lon = 0.6252343181013326;
    msg.depth = 0.30253312043234626;
    msg.query_channel = 216U;
    msg.reply_channel = 65U;
    msg.transponder_delay = 50U;

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
    msg.setTimeStamp(0.6849331169587134);
    msg.setSource(57142U);
    msg.setSourceEntity(17U);
    msg.setDestination(13479U);
    msg.setDestinationEntity(33U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.5759527913971003);
    msg.setSource(14136U);
    msg.setSourceEntity(239U);
    msg.setDestination(40823U);
    msg.setDestinationEntity(223U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.1460776460264105);
    msg.setSource(19576U);
    msg.setSourceEntity(101U);
    msg.setDestination(5268U);
    msg.setDestinationEntity(212U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.06542555150594953);
    msg.setSource(8930U);
    msg.setSourceEntity(94U);
    msg.setDestination(15225U);
    msg.setDestinationEntity(240U);
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 31U;
    tmp_msg_0.entities.assign("CAJMRDBTFMQZEBSHLYXVTYAFRTGLNOCJXQHTUGKPIVCDSHVNUYQQYESDBUEFOGDHNOIBEAFUXWJOCNTOAFMRHQIOIYKZBBQGVLTEPWRJOENWVUGJQRJKGONUXHCASPLSFRYVGNLBOWWYTYVCBVJCRXOMDZDILFSKEKMUCTCTSIAXPWEWNWIZYMZ");
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
    msg.setTimeStamp(0.30188996424969217);
    msg.setSource(11332U);
    msg.setSourceEntity(227U);
    msg.setDestination(20682U);
    msg.setDestinationEntity(53U);
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 190U;
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
    msg.setTimeStamp(0.1648589956775326);
    msg.setSource(18466U);
    msg.setSourceEntity(117U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(4U);
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("UOWLZANKBUKPGHEJTYYCBIZFJJPBIUMIUURMXMAPOYKSZCRAQIYTQFNZOIXMIPQJCFFRVACYZPKREBPWQGWPCIEZORCLQYULCJWJAQJBBWRYHFMXVLNLSTREEGGBEAYAMRDLGBRGDGMDFDNHUYXLJKHBISIXMOWVTJEQWKHEAJZZSNNDZSTTPCMVHTYCTOEGVOG");
    tmp_msg_0.x = 0.717132368861132;
    tmp_msg_0.y = 0.9418552159876838;
    tmp_msg_0.z = 0.5126225715313857;
    tmp_msg_0.n = 0.2514383827941732;
    tmp_msg_0.e = 0.9584986746227483;
    tmp_msg_0.d = 0.9165636061651612;
    tmp_msg_0.phi = 0.2560882748524098;
    tmp_msg_0.theta = 0.28357032150330086;
    tmp_msg_0.psi = 0.16209138270165868;
    tmp_msg_0.accuracy = 0.029638111291380387;
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
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.6984230831553174);
    msg.setSource(38047U);
    msg.setSourceEntity(53U);
    msg.setDestination(13773U);
    msg.setDestinationEntity(114U);
    msg.op = 20U;
    msg.system.assign("QTGYVHYNFNDJZVJRWMOEAGBUIIWQUUTIEOPFFVZDROWQZXELOLCSQQVIDXBECPSXPXJQGTOMQIUMTMFCCSGWLQGDZOOTJLUYHAFHAFLBMHXDOXZRJOPYBBSAJVTFXEVBJPPZMAFMWINUMUNTDTNSRNYNVPRBKEZLDK");
    msg.range = 0.15372816753100216;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 89U;
    tmp_msg_0.op = 244U;
    tmp_msg_0.possimerr = 0.2036897718790196;
    tmp_msg_0.converg = 0.7285063121125425;
    tmp_msg_0.turbulence = 0.49810710339429487;
    tmp_msg_0.possimmon = 67U;
    tmp_msg_0.commmon = 22U;
    tmp_msg_0.convergmon = 164U;
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
    msg.setTimeStamp(0.8873866735563798);
    msg.setSource(42096U);
    msg.setSourceEntity(76U);
    msg.setDestination(43491U);
    msg.setDestinationEntity(148U);
    msg.op = 214U;
    msg.system.assign("SPMVNUUYQRFONBMAASVRZECHPSLFMLNJJHEAXISMGLPFNUUYCCTVZOWCPLKBBVLBMSZGJRBDQYPPDTWBRKFKAQIGETRANEDUYKGYTSHIKIDAHJWZNDIOTHOXCCLUYTKLZKWHWQIUWXIVRACETSXEXABJCZVOWVOXBRZPAKVQKFXQYENJWOFJJCMHBPYTQDHENQEDJFHXNMXKYIZVQIVNFWF");
    msg.range = 0.6284123202740123;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.29824007648055106;
    tmp_msg_0.roll = 59041U;
    tmp_msg_0.pitch = 37173U;
    tmp_msg_0.yaw = 11176U;
    tmp_msg_0.speed = 1606;
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
    msg.setTimeStamp(0.5063867563355391);
    msg.setSource(8381U);
    msg.setSourceEntity(234U);
    msg.setDestination(57477U);
    msg.setDestinationEntity(210U);
    msg.op = 82U;
    msg.system.assign("XNHEIYAJOLKXFCROUVLWHFDIYNUFCRRKGMVMADFBYPTWIAZQCUWCXEIKTNLQEOXCVSNTYZKWAADFHIRCSPTPFYBZFAKSHEZCNCXBOHJJYFBGBZJCYRZZEGLRWKHVSTPKQGGNBMAOQCQSUMWRRWDVGILLQDVJNYJBEXXPLTVSTUDALMPZTTRKLGQIHQZUBUQWJS");
    msg.range = 0.7202035202716036;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 244U;
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
    msg.setTimeStamp(0.6956830583191637);
    msg.setSource(14554U);
    msg.setSourceEntity(211U);
    msg.setDestination(8673U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.8701866682260945);
    msg.setSource(9732U);
    msg.setSourceEntity(243U);
    msg.setDestination(43627U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.13470822398238846);
    msg.setSource(10310U);
    msg.setSourceEntity(44U);
    msg.setDestination(30413U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.6713396199162727);
    msg.setSource(47821U);
    msg.setSourceEntity(199U);
    msg.setDestination(26234U);
    msg.setDestinationEntity(53U);
    msg.list.assign("VQRVZLTDECHAOCTQWPJIRFDHWFVVGSYBKYEGZSSVBCOUMLXJPYTNUSICKRONFIAXZPLBXZEOILPKBRFVLIZEWTGXIAKENFKTAFLWANBVERGMVFIAKSQBIWMCBDMZJMOYPUELHTGJWIHEKDPQXXXACCWDMCSJNCKVQRJODAUJTVQYPUUGDPOUZQSMNBPMSAWNZXYHRJHWRBLHKEZYACFD");

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
    msg.setTimeStamp(0.3921752381724598);
    msg.setSource(19437U);
    msg.setSourceEntity(153U);
    msg.setDestination(33715U);
    msg.setDestinationEntity(76U);
    msg.list.assign("QXYXNPHUWVYBGOAKRMJGXOLYNTSMUQSABSNCVUTHAPKCWYVIBPLUAELVXMFPQZSWLPXHNMCHRPEKGZBLVONOJJPTZTRNKGMOQJBSWZNGEXYGQZKLBEUABIVMTHQRLCCRJQGLFZXI");

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
    msg.setTimeStamp(0.27098976978484435);
    msg.setSource(59440U);
    msg.setSourceEntity(79U);
    msg.setDestination(54388U);
    msg.setDestinationEntity(126U);
    msg.list.assign("SPADSYYFRBSEDOAMHOZXHSCAMMIMGNEMRRQWRUXPRGZICD");

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
    msg.setTimeStamp(0.3669261279106725);
    msg.setSource(43753U);
    msg.setSourceEntity(170U);
    msg.setDestination(39104U);
    msg.setDestinationEntity(101U);
    msg.peer.assign("UATDWFNSUVUDFZWQMDGCEBCLDRIGSCDTSBRAJIWZGLCYJVULIRFHRGKSHZXOYZZOKTNICKASJMNJMWDQMXICUQZEETAKQWVNTELVHAKUHFL");
    msg.rssi = 0.4262893774805663;
    msg.integrity = 15937U;

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
    msg.setTimeStamp(0.5543757848713845);
    msg.setSource(25901U);
    msg.setSourceEntity(181U);
    msg.setDestination(58444U);
    msg.setDestinationEntity(236U);
    msg.peer.assign("CCDGCNOSTKSADTKGDEOOOJXXFTVWPISPFIHXBTNXHDAH");
    msg.rssi = 0.5721744077835491;
    msg.integrity = 29061U;

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
    msg.setTimeStamp(0.07141936095508772);
    msg.setSource(24276U);
    msg.setSourceEntity(154U);
    msg.setDestination(30811U);
    msg.setDestinationEntity(209U);
    msg.peer.assign("ZLMNHFPIAYDTDTVJPMEQESOXSYTXQUTUKNZDRKZPKJEXUJOAJBRUHPXZILXBINGCSWGAOLKGBBRDECGIPVMLBPYUEOQWDMLFWNGORRLVOHFJB");
    msg.rssi = 0.8376550581672855;
    msg.integrity = 25681U;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.1316085854687441);
    msg.setSource(17716U);
    msg.setSourceEntity(108U);
    msg.setDestination(54905U);
    msg.setDestinationEntity(105U);
    msg.value = 15182;

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
    msg.setTimeStamp(0.9409378958369929);
    msg.setSource(61561U);
    msg.setSourceEntity(224U);
    msg.setDestination(48225U);
    msg.setDestinationEntity(96U);
    msg.value = 4148;

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
    msg.setTimeStamp(0.8461231700402656);
    msg.setSource(62201U);
    msg.setSourceEntity(231U);
    msg.setDestination(30039U);
    msg.setDestinationEntity(206U);
    msg.value = 11933;

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
    msg.setTimeStamp(0.053287702415557026);
    msg.setSource(10459U);
    msg.setSourceEntity(43U);
    msg.setDestination(51182U);
    msg.setDestinationEntity(106U);
    msg.value = 0.8354655310306227;

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
    msg.setTimeStamp(0.9944090188913486);
    msg.setSource(25070U);
    msg.setSourceEntity(129U);
    msg.setDestination(56410U);
    msg.setDestinationEntity(186U);
    msg.value = 0.003727520231497472;

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
    msg.setTimeStamp(0.92079909629614);
    msg.setSource(12639U);
    msg.setSourceEntity(112U);
    msg.setDestination(58157U);
    msg.setDestinationEntity(231U);
    msg.value = 0.09538077850163551;

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
    msg.setTimeStamp(0.4619670180855364);
    msg.setSource(50754U);
    msg.setSourceEntity(107U);
    msg.setDestination(39772U);
    msg.setDestinationEntity(252U);
    msg.value = 0.45664132963491444;

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
    msg.setTimeStamp(0.8643074658052876);
    msg.setSource(12647U);
    msg.setSourceEntity(148U);
    msg.setDestination(22316U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9822591083087328;

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
    msg.setTimeStamp(0.32582626739212195);
    msg.setSource(9393U);
    msg.setSourceEntity(135U);
    msg.setDestination(15462U);
    msg.setDestinationEntity(97U);
    msg.value = 0.8774704345417462;

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
    msg.setTimeStamp(0.7997880003612129);
    msg.setSource(17725U);
    msg.setSourceEntity(235U);
    msg.setDestination(41971U);
    msg.setDestinationEntity(142U);
    msg.validity = 61530U;
    msg.type = 166U;
    msg.utc_year = 30770U;
    msg.utc_month = 156U;
    msg.utc_day = 52U;
    msg.utc_time = 0.6437823717400293;
    msg.lat = 0.19270676097308637;
    msg.lon = 0.34397967814520714;
    msg.height = 0.5120665487332869;
    msg.satellites = 148U;
    msg.cog = 0.8823228707976062;
    msg.sog = 0.1272771722734648;
    msg.hdop = 0.9158575640116853;
    msg.vdop = 0.17100814056925584;
    msg.hacc = 0.5744226010858532;
    msg.vacc = 0.8499884647250053;

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
    msg.setTimeStamp(0.24141839302856194);
    msg.setSource(30059U);
    msg.setSourceEntity(215U);
    msg.setDestination(22076U);
    msg.setDestinationEntity(134U);
    msg.validity = 60949U;
    msg.type = 253U;
    msg.utc_year = 17369U;
    msg.utc_month = 12U;
    msg.utc_day = 160U;
    msg.utc_time = 0.9007581280130792;
    msg.lat = 0.2671205084202397;
    msg.lon = 0.062236146127745195;
    msg.height = 0.215096189683608;
    msg.satellites = 58U;
    msg.cog = 0.9770786150450315;
    msg.sog = 0.19129568917294582;
    msg.hdop = 0.6582986908776407;
    msg.vdop = 0.8397025889114901;
    msg.hacc = 0.7413898336736143;
    msg.vacc = 0.005834806040052709;

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
    msg.setTimeStamp(0.06038014735823416);
    msg.setSource(26870U);
    msg.setSourceEntity(21U);
    msg.setDestination(59981U);
    msg.setDestinationEntity(43U);
    msg.validity = 47358U;
    msg.type = 177U;
    msg.utc_year = 64281U;
    msg.utc_month = 172U;
    msg.utc_day = 229U;
    msg.utc_time = 0.2052162125615149;
    msg.lat = 0.2674774306044906;
    msg.lon = 0.7773170501124118;
    msg.height = 0.714468712906612;
    msg.satellites = 151U;
    msg.cog = 0.9180869504868355;
    msg.sog = 0.8043286570459843;
    msg.hdop = 0.20302867101235567;
    msg.vdop = 0.24211687154837092;
    msg.hacc = 0.6250682518405141;
    msg.vacc = 0.7444560065095386;

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
    msg.setTimeStamp(0.9622024431402258);
    msg.setSource(42336U);
    msg.setSourceEntity(232U);
    msg.setDestination(32314U);
    msg.setDestinationEntity(45U);
    msg.time = 0.568985902307047;
    msg.phi = 0.16932964031126096;
    msg.theta = 0.18988663854274734;
    msg.psi = 0.15973492195912764;
    msg.psi_magnetic = 0.8689392350464031;

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
    msg.setTimeStamp(0.979996226490735);
    msg.setSource(3035U);
    msg.setSourceEntity(106U);
    msg.setDestination(22111U);
    msg.setDestinationEntity(191U);
    msg.time = 0.38389448101664503;
    msg.phi = 0.12178332344635634;
    msg.theta = 0.4428704284615099;
    msg.psi = 0.9256773113300383;
    msg.psi_magnetic = 0.6511364176377011;

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
    msg.setTimeStamp(0.5924264336949208);
    msg.setSource(14156U);
    msg.setSourceEntity(138U);
    msg.setDestination(27355U);
    msg.setDestinationEntity(253U);
    msg.time = 0.8463162677844207;
    msg.phi = 0.9921054389744779;
    msg.theta = 0.6969473218879627;
    msg.psi = 0.9507935155054932;
    msg.psi_magnetic = 0.7648179790078213;

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
    msg.setTimeStamp(0.10723886677171046);
    msg.setSource(37412U);
    msg.setSourceEntity(0U);
    msg.setDestination(19873U);
    msg.setDestinationEntity(176U);
    msg.time = 0.9995879196001348;
    msg.x = 0.876799467318413;
    msg.y = 0.10121149635678706;
    msg.z = 0.009056024673739116;
    msg.timestep = 0.25025436458201233;

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
    msg.setTimeStamp(0.45781097618292277);
    msg.setSource(10737U);
    msg.setSourceEntity(236U);
    msg.setDestination(32020U);
    msg.setDestinationEntity(107U);
    msg.time = 0.34124087668235603;
    msg.x = 0.5760964112117687;
    msg.y = 0.7660373562947279;
    msg.z = 0.9861454711182002;
    msg.timestep = 0.16811902144667756;

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
    msg.setTimeStamp(0.21717743770752096);
    msg.setSource(4075U);
    msg.setSourceEntity(73U);
    msg.setDestination(5789U);
    msg.setDestinationEntity(182U);
    msg.time = 0.722615287603168;
    msg.x = 0.15880671619680942;
    msg.y = 0.2954918221004337;
    msg.z = 0.8579871399450596;
    msg.timestep = 0.2834536534258769;

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
    msg.setTimeStamp(0.48453391230683596);
    msg.setSource(12578U);
    msg.setSourceEntity(125U);
    msg.setDestination(8500U);
    msg.setDestinationEntity(158U);
    msg.time = 0.6275115255439316;
    msg.x = 0.39722957909131784;
    msg.y = 0.9964669637940363;
    msg.z = 0.5901005125015039;

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
    msg.setTimeStamp(0.909904901854485);
    msg.setSource(28286U);
    msg.setSourceEntity(66U);
    msg.setDestination(53626U);
    msg.setDestinationEntity(13U);
    msg.time = 0.9259330631616807;
    msg.x = 0.39556160460279943;
    msg.y = 0.9327782288759036;
    msg.z = 0.14832187767691674;

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
    msg.setTimeStamp(0.11130580674968704);
    msg.setSource(53610U);
    msg.setSourceEntity(73U);
    msg.setDestination(57732U);
    msg.setDestinationEntity(82U);
    msg.time = 0.568550864763033;
    msg.x = 0.16003650826985594;
    msg.y = 0.6409369107413146;
    msg.z = 0.8807710165261492;

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
    msg.setTimeStamp(0.2764070434047048);
    msg.setSource(27699U);
    msg.setSourceEntity(129U);
    msg.setDestination(9756U);
    msg.setDestinationEntity(41U);
    msg.time = 0.5301225933930133;
    msg.x = 0.7197829297014626;
    msg.y = 0.996429258096133;
    msg.z = 0.06952612548387305;

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
    msg.setTimeStamp(0.5930627063992548);
    msg.setSource(62732U);
    msg.setSourceEntity(86U);
    msg.setDestination(38730U);
    msg.setDestinationEntity(81U);
    msg.time = 0.45766957909690675;
    msg.x = 0.2640241054704128;
    msg.y = 0.7354901583214418;
    msg.z = 0.017655477305900558;

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
    msg.setTimeStamp(0.26643061952343894);
    msg.setSource(14935U);
    msg.setSourceEntity(14U);
    msg.setDestination(31535U);
    msg.setDestinationEntity(16U);
    msg.time = 0.9911996786913734;
    msg.x = 0.09277116248616035;
    msg.y = 0.8055960564656821;
    msg.z = 0.9257150867796551;

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
    msg.setTimeStamp(0.18322705617218005);
    msg.setSource(57901U);
    msg.setSourceEntity(144U);
    msg.setDestination(9822U);
    msg.setDestinationEntity(41U);
    msg.time = 0.8396339800324657;
    msg.x = 0.7365570703163296;
    msg.y = 0.06852910947136548;
    msg.z = 0.8025353227410372;

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
    msg.setTimeStamp(0.2062345590751007);
    msg.setSource(12249U);
    msg.setSourceEntity(39U);
    msg.setDestination(7958U);
    msg.setDestinationEntity(236U);
    msg.time = 0.459065531731335;
    msg.x = 0.9072684081971103;
    msg.y = 0.05777764897792703;
    msg.z = 0.7219251760284408;

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
    msg.setTimeStamp(0.9657904565805175);
    msg.setSource(45748U);
    msg.setSourceEntity(32U);
    msg.setDestination(52950U);
    msg.setDestinationEntity(165U);
    msg.time = 0.5637922771675515;
    msg.x = 0.8438784670764602;
    msg.y = 0.5167130603540071;
    msg.z = 0.034790135029923897;

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
    msg.setTimeStamp(0.07881028046544403);
    msg.setSource(33575U);
    msg.setSourceEntity(242U);
    msg.setDestination(25121U);
    msg.setDestinationEntity(91U);
    msg.validity = 12U;
    msg.x = 0.704973488166651;
    msg.y = 0.6804487268857495;
    msg.z = 0.33403913645846517;

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
    msg.setTimeStamp(0.45947737276299183);
    msg.setSource(21101U);
    msg.setSourceEntity(153U);
    msg.setDestination(43180U);
    msg.setDestinationEntity(56U);
    msg.validity = 233U;
    msg.x = 0.7109924779880237;
    msg.y = 0.9285677319960168;
    msg.z = 0.5693649959005966;

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
    msg.setTimeStamp(0.31516913765355015);
    msg.setSource(52286U);
    msg.setSourceEntity(213U);
    msg.setDestination(21673U);
    msg.setDestinationEntity(98U);
    msg.validity = 85U;
    msg.x = 0.5815004885895505;
    msg.y = 0.8968480896089429;
    msg.z = 0.3987371160805949;

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
    msg.setTimeStamp(0.30922044744578436);
    msg.setSource(19077U);
    msg.setSourceEntity(153U);
    msg.setDestination(24338U);
    msg.setDestinationEntity(149U);
    msg.validity = 202U;
    msg.x = 0.5799202329805707;
    msg.y = 0.6423607287440615;
    msg.z = 0.004494763980315453;

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
    msg.setTimeStamp(0.06826959137320199);
    msg.setSource(47498U);
    msg.setSourceEntity(205U);
    msg.setDestination(1548U);
    msg.setDestinationEntity(193U);
    msg.validity = 66U;
    msg.x = 0.7642441703392311;
    msg.y = 0.7325738831521013;
    msg.z = 0.42713767531197333;

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
    msg.setTimeStamp(0.49318501960076966);
    msg.setSource(2346U);
    msg.setSourceEntity(159U);
    msg.setDestination(38048U);
    msg.setDestinationEntity(188U);
    msg.validity = 123U;
    msg.x = 0.4501032440984628;
    msg.y = 0.7039013098698759;
    msg.z = 0.19179396202142496;

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
    msg.setTimeStamp(0.44205797253979806);
    msg.setSource(35165U);
    msg.setSourceEntity(130U);
    msg.setDestination(61377U);
    msg.setDestinationEntity(9U);
    msg.time = 0.7910879550894951;
    msg.x = 0.12353077030891357;
    msg.y = 0.8644548148656525;
    msg.z = 0.1948199277791094;

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
    msg.setTimeStamp(0.6568951493461009);
    msg.setSource(32379U);
    msg.setSourceEntity(150U);
    msg.setDestination(22062U);
    msg.setDestinationEntity(207U);
    msg.time = 0.14606123045574715;
    msg.x = 0.5572911563059733;
    msg.y = 0.4270888463315803;
    msg.z = 0.18350756477954666;

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
    msg.setTimeStamp(0.31981960023916634);
    msg.setSource(36988U);
    msg.setSourceEntity(129U);
    msg.setDestination(31321U);
    msg.setDestinationEntity(232U);
    msg.time = 0.9899318195266007;
    msg.x = 0.20932787344730364;
    msg.y = 0.06011134894901016;
    msg.z = 0.72756733452597;

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
    msg.setTimeStamp(0.5644445087273315);
    msg.setSource(3885U);
    msg.setSourceEntity(123U);
    msg.setDestination(10974U);
    msg.setDestinationEntity(59U);
    msg.validity = 244U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.15102526339760114;
    tmp_msg_0.y = 0.5042624022232659;
    tmp_msg_0.z = 0.5537342851355286;
    tmp_msg_0.phi = 0.1625522997963581;
    tmp_msg_0.theta = 0.786742376377598;
    tmp_msg_0.psi = 0.7092670949697262;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9752812140004957;
    tmp_msg_1.beam_height = 0.8307648038231072;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.34399144166808515;

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
    msg.setTimeStamp(0.2949999888312953);
    msg.setSource(26228U);
    msg.setSourceEntity(113U);
    msg.setDestination(17548U);
    msg.setDestinationEntity(91U);
    msg.validity = 225U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9993368902588665;
    tmp_msg_0.y = 0.7186644340836591;
    tmp_msg_0.z = 0.6387605732591063;
    tmp_msg_0.phi = 0.40238471860345215;
    tmp_msg_0.theta = 0.7250573925744029;
    tmp_msg_0.psi = 0.5433251603876085;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.6970678574642646;

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
    msg.setTimeStamp(0.08834751205054225);
    msg.setSource(18982U);
    msg.setSourceEntity(44U);
    msg.setDestination(2920U);
    msg.setDestinationEntity(66U);
    msg.validity = 122U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8701254231627691;
    tmp_msg_0.y = 0.613382813353796;
    tmp_msg_0.z = 0.9783049301435974;
    tmp_msg_0.phi = 0.747355439487106;
    tmp_msg_0.theta = 0.4854838109425159;
    tmp_msg_0.psi = 0.25798014039002715;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8173858731232914;
    tmp_msg_1.beam_height = 0.868924134213455;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.2947560080727203;

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
    msg.setTimeStamp(0.29092792717851046);
    msg.setSource(25918U);
    msg.setSourceEntity(99U);
    msg.setDestination(26093U);
    msg.setDestinationEntity(24U);
    msg.value = 0.5632202877370678;

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
    msg.setTimeStamp(0.4940089993314194);
    msg.setSource(28168U);
    msg.setSourceEntity(14U);
    msg.setDestination(24655U);
    msg.setDestinationEntity(175U);
    msg.value = 0.3731636704947793;

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
    msg.setTimeStamp(0.9390285479902882);
    msg.setSource(53753U);
    msg.setSourceEntity(131U);
    msg.setDestination(55763U);
    msg.setDestinationEntity(216U);
    msg.value = 0.7509775344254276;

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
    msg.setTimeStamp(0.16497615841399782);
    msg.setSource(57819U);
    msg.setSourceEntity(159U);
    msg.setDestination(36212U);
    msg.setDestinationEntity(82U);
    msg.value = 0.2498756660423993;

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
    msg.setTimeStamp(0.8699131779123029);
    msg.setSource(63688U);
    msg.setSourceEntity(172U);
    msg.setDestination(63130U);
    msg.setDestinationEntity(80U);
    msg.value = 0.42073399753352936;

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
    msg.setTimeStamp(0.23311327521331948);
    msg.setSource(62484U);
    msg.setSourceEntity(76U);
    msg.setDestination(53680U);
    msg.setDestinationEntity(188U);
    msg.value = 0.13885011183223106;

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
    msg.setTimeStamp(0.4360297916729946);
    msg.setSource(30764U);
    msg.setSourceEntity(209U);
    msg.setDestination(54726U);
    msg.setDestinationEntity(117U);
    msg.value = 0.7443596459363873;

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
    msg.setTimeStamp(0.022833434687213328);
    msg.setSource(65040U);
    msg.setSourceEntity(27U);
    msg.setDestination(6240U);
    msg.setDestinationEntity(226U);
    msg.value = 0.8637074599997381;

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
    msg.setTimeStamp(0.5420572936373418);
    msg.setSource(8881U);
    msg.setSourceEntity(27U);
    msg.setDestination(41730U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7216853324361131;

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
    msg.setTimeStamp(0.6472833057061584);
    msg.setSource(30365U);
    msg.setSourceEntity(92U);
    msg.setDestination(10183U);
    msg.setDestinationEntity(14U);
    msg.value = 0.6704136717065408;

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
    msg.setTimeStamp(0.9841091605909404);
    msg.setSource(41459U);
    msg.setSourceEntity(150U);
    msg.setDestination(37931U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9011797281445443;

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
    msg.setTimeStamp(0.27770639211453974);
    msg.setSource(23798U);
    msg.setSourceEntity(33U);
    msg.setDestination(45968U);
    msg.setDestinationEntity(74U);
    msg.value = 0.5392687769520554;

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
    msg.setTimeStamp(0.7590850517691987);
    msg.setSource(4339U);
    msg.setSourceEntity(3U);
    msg.setDestination(22681U);
    msg.setDestinationEntity(60U);
    msg.value = 0.08596127628569916;

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
    msg.setTimeStamp(0.5478519541762193);
    msg.setSource(19872U);
    msg.setSourceEntity(227U);
    msg.setDestination(204U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6402998210043955;

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
    msg.setTimeStamp(0.17132371252996081);
    msg.setSource(59061U);
    msg.setSourceEntity(120U);
    msg.setDestination(38685U);
    msg.setDestinationEntity(33U);
    msg.value = 0.554257496718609;

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
    msg.setTimeStamp(0.6059362265318861);
    msg.setSource(8310U);
    msg.setSourceEntity(216U);
    msg.setDestination(32377U);
    msg.setDestinationEntity(18U);
    msg.value = 0.926359698162389;

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
    msg.setTimeStamp(0.41868479338860876);
    msg.setSource(65012U);
    msg.setSourceEntity(93U);
    msg.setDestination(49254U);
    msg.setDestinationEntity(136U);
    msg.value = 0.20619365729827765;

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
    msg.setTimeStamp(0.7109781385289755);
    msg.setSource(62744U);
    msg.setSourceEntity(158U);
    msg.setDestination(49370U);
    msg.setDestinationEntity(233U);
    msg.value = 0.1837294064567504;

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
    msg.setTimeStamp(0.1583666106102224);
    msg.setSource(48636U);
    msg.setSourceEntity(146U);
    msg.setDestination(45058U);
    msg.setDestinationEntity(245U);
    msg.value = 0.9278440685266987;

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
    msg.setTimeStamp(0.27263081738432826);
    msg.setSource(43703U);
    msg.setSourceEntity(127U);
    msg.setDestination(52683U);
    msg.setDestinationEntity(24U);
    msg.value = 0.39030418264193045;

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
    msg.setTimeStamp(0.5219856627467399);
    msg.setSource(30186U);
    msg.setSourceEntity(227U);
    msg.setDestination(45827U);
    msg.setDestinationEntity(120U);
    msg.value = 0.44521545066699075;

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
    msg.setTimeStamp(0.9259691511418551);
    msg.setSource(37950U);
    msg.setSourceEntity(50U);
    msg.setDestination(6610U);
    msg.setDestinationEntity(72U);
    msg.value = 0.040123924002428035;

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
    msg.setTimeStamp(0.14933936485786925);
    msg.setSource(51168U);
    msg.setSourceEntity(120U);
    msg.setDestination(48952U);
    msg.setDestinationEntity(6U);
    msg.value = 0.9299800393740024;

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
    msg.setTimeStamp(0.5339629326006624);
    msg.setSource(1813U);
    msg.setSourceEntity(173U);
    msg.setDestination(3805U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8860418176229847;

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
    msg.setTimeStamp(0.41595266466698066);
    msg.setSource(35663U);
    msg.setSourceEntity(86U);
    msg.setDestination(27128U);
    msg.setDestinationEntity(242U);
    msg.direction = 0.45780394361514476;
    msg.speed = 0.7699867148298043;
    msg.turbulence = 0.3829794440923143;

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
    msg.setTimeStamp(0.24686632873540137);
    msg.setSource(23855U);
    msg.setSourceEntity(22U);
    msg.setDestination(42999U);
    msg.setDestinationEntity(201U);
    msg.direction = 0.012636765993280341;
    msg.speed = 0.23424532164320133;
    msg.turbulence = 0.3564224293218342;

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
    msg.setTimeStamp(0.3064433011114518);
    msg.setSource(32207U);
    msg.setSourceEntity(228U);
    msg.setDestination(31316U);
    msg.setDestinationEntity(220U);
    msg.direction = 0.21666665598085677;
    msg.speed = 0.06826263687614964;
    msg.turbulence = 0.33132560223306484;

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
    msg.setTimeStamp(0.7975248218332298);
    msg.setSource(20666U);
    msg.setSourceEntity(105U);
    msg.setDestination(24909U);
    msg.setDestinationEntity(169U);
    msg.value = 0.7654108816844015;

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
    msg.setTimeStamp(0.7486128338034699);
    msg.setSource(39114U);
    msg.setSourceEntity(4U);
    msg.setDestination(4260U);
    msg.setDestinationEntity(116U);
    msg.value = 0.996962469694357;

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
    msg.setTimeStamp(0.09701815508525435);
    msg.setSource(34120U);
    msg.setSourceEntity(28U);
    msg.setDestination(50058U);
    msg.setDestinationEntity(90U);
    msg.value = 0.8411805584333577;

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
    msg.setTimeStamp(0.12947914021112672);
    msg.setSource(40185U);
    msg.setSourceEntity(130U);
    msg.setDestination(58675U);
    msg.setDestinationEntity(206U);
    msg.value.assign("FJNAYGBOBEDNZPGCQUDAINOISOLARKWVJIPUXKSUSZZEPIIPMMHCACJRIIMUXVLVLPEESIKNUAGQJFGWDROAMTYQYVEXFHXMSQJZLZHACTJPTZFMBFAHTQVSFXJHKFBTHODSJWKVBVOZTYRXJLBSCKJNHDBKWDOWUOYPKIUPCVTEGMNLBLGROLCKNHGEGMDGWAMWH");

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
    msg.setTimeStamp(0.9621953099323907);
    msg.setSource(27500U);
    msg.setSourceEntity(171U);
    msg.setDestination(18290U);
    msg.setDestinationEntity(182U);
    msg.value.assign("QIQQQVXXNHDGGZQTPAEAGWNIHPAQOJKZDYKHMEFXHWLBGGSOIFKFIUMNNDDXBENRZWPLGJHXVYCTYDEGXZRNVMZZJHBGWKOSRVYWAQJBVXBKRZCABLTMYCQYZNLSRVTLVJJITUAURXQBNNMCHDORPDWHFGSSLMOTNYJQKAUMKAXCOIVCDFWDT");

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
    msg.setTimeStamp(0.07024338743747427);
    msg.setSource(47725U);
    msg.setSourceEntity(37U);
    msg.setDestination(47775U);
    msg.setDestinationEntity(96U);
    msg.value.assign("NEXUYDARNIKMYSDINQNLNOKDZCBRBOQIVZJIOATBSLRGRMXJYGWMZZDRYTHLUVMMBFLVQPRXWPCEUQOYFFSKWRIVMSJYSUMXUAXEAHMGCVGGKLZKJFLRMVJNPXADDGHZCQGOVGQHITKNGQJQIUZEFPAMBSWLHQFIWABNYPNEADABEQXKEYUYUTSZVCVCWKPVTPCDWTBWLHFIHHOPJKCFWOZLDPDEJJIE");

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
    msg.setTimeStamp(0.690943518629597);
    msg.setSource(5064U);
    msg.setSourceEntity(73U);
    msg.setDestination(17243U);
    msg.setDestinationEntity(187U);
    const char tmp_msg_0[] = {84, 17, 100, -79, -21, -95, 51, 91, 82, 74, -118, -15, -36, 101, 7, 1, -123, -81, 59, 46, 84, 114, 77, -106, -88, -95, -63, 37, -89, -102, 73, -123, 3, 36, -29, -79, 84, -39, 78, 69, 73, -1, 55, -80, -38, -96, 100, -111, 43, 47, 75, 115, -9, 94, 79, 75, -24, -49, -100, -71, 70, -20, -89, -30, -125, 84, -95, 25, 54, -99, 111, 40, -100, 7, -73, 20, 36};
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
    msg.setTimeStamp(0.7766027564789885);
    msg.setSource(30610U);
    msg.setSourceEntity(179U);
    msg.setDestination(54422U);
    msg.setDestinationEntity(5U);
    const char tmp_msg_0[] = {93, -87, 75, 51, -89, -87, -61, 124, -95, -40, -11, 23, 126, 81, -66, 37, 102, 20, -3, -35, 76, -63, 102, -18, -82, -112, -80, -74, 31, 14, -53, 105, 123, -28, -62, -18, -92, -111, 93, 65, 45, -66, 87, -35, 123, -110, 54, 75, -128, -21, -56, -86, -38, 67, -54, 71, -43, 15, -82, 117, -78, -101, 110, 116, 61, 68, 52, -34, 68, 17, 11, 17, 57, 21, 36, -98, -30, -119, -91, -59, 60, -11, 41, -15, 56, 89, 20, 66, 101, -76, 103, -121, 100, 13, -51, -94, 55, -57, 104, -39, -98, -55, -60, 46, 38, 28, 107, 59, 104, 124, 88, 58, 40, 47, -73, 1, -58, -2, 4, 79, -32, -112, -12, -93, 126, 20, -6, -18, 103, 15, 121, 20, 121, 67, 76, 48, 28, 64, 27, -17, 99, -94, -49, -85, -101, 38, 49, -3, -78, 26, 104, -70, 20, 56, -114, -104, 29, 28, 51, -88, 102, -49, 91, -25, -112, -45, 24, 126, -10, -123, -41, -48, -111, -57, 37, 52, -50, -76, -18, 118, 24, 13, -108, 93, 57, 87, 93, -115, 68, -118, -60, 61};
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
    msg.setTimeStamp(0.5815790911374189);
    msg.setSource(61501U);
    msg.setSourceEntity(32U);
    msg.setDestination(10716U);
    msg.setDestinationEntity(88U);
    const char tmp_msg_0[] = {59, -56, 95, 42, -1, -115, 94, -22, 72, -35, -1, 12, 28, 80, 85, -122, -116, -44, -52, 6, 10, 50, 35, 14, 97, -121, 73, 58, 94, -58, 76, 27, 66, 101, -85, -19, -96, -114, 33, -122, -34, -30, -101, -36, -90, 101, -106, 4, -40, 70, -97, 24, -29, -127, 4, 62, -110, 98, -118, 79, 32, 71, 119, -36, 14, 118, -51, 126, -110, -52, -66, 58, -95, 25, -60, 75, -111, 80, -14, 103, -59, -5, 81, -11, 84, 103, 52, 57, -38, 46, -30, 43, -21, -7, 102, -37, -69, -111, -22, 115, 68, 60, 95, -36, 76, -71, 55, 39, 3, 91, 26, 8, -105, 35, 35, 67, -17, 43, 62, -39, 62, -38, -58, -48, 64, -91, -42, 126, -103, -32, 69, 119, 112, 47, -58, 22, 85, -3, 69, 23, 125, 113, 19, -18, -73, -99, -115, -74, 76, 55, -5, -66, -99, -15, 74, 70, -72, 124, -28, 83, 20, -98, -9, 126, -101, 4, -107, -48, -88, 119, 85, -31, -104, 75, 75, -47, 85, 98, -116, 50, 124, -3, -85, -116, -56, -38, 86, -87, -84, 8, -12, 95, 126, 33, 3, 85, -87, 0, 110, 91, 120, -80, -17, 2, -75, -6, -44, 94, 36, 105, -59, -66, -8, -57};
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
    IMC::SonarData msg;
    msg.setTimeStamp(0.755000944772315);
    msg.setSource(23972U);
    msg.setSourceEntity(200U);
    msg.setDestination(13158U);
    msg.setDestinationEntity(36U);
    msg.type = 45U;
    msg.frequency = 3658596639U;
    msg.min_range = 17879U;
    msg.max_range = 33280U;
    msg.bits_per_point = 96U;
    msg.scale_factor = 0.9774817009641499;
    const char tmp_msg_0[] = {104, 81, 103, 23, -95, -59, 59, -115, -112, 125, 40, -44, -117, 98, -117, -66, -34, 116, -61, -63, -13, -110, 42, 71, 93, 84, 49, 102, -53, 126, 38, 23, 47, 15, 15, -23, 55, 4, -29, 81, -117, -18, 66, -51, 77, -14, -126, -14, 82, 14, 67, 30, 101, 70, -81, -14, -87, -110, 107, 74, 6, 23, 9, -13, 8, 71, 44, 119, -114, 106, 45, 126, -20, 10, 7, 95, 73, 68, -99, 39, 30, -9, -67, -39, -84, -24, 71, 42, 95, 81, 54, 104, -7, -50, -101, -47, -92, -8, -19, -59, -50, -22, 91, 48, 24, 60, 43, -79, 34, -107, 116, 49, -82, -118, 116, -2, 108, 37, 98, -114, -7, 8, -98, 66, 97, -74, 107, -19, -39, -127, 31, 115, -60, 102, -94, -41, 67, 21, -10, -44, 20, 42, 51, 43, 82, -25, -35, 123, -127, 16, -9, -75, -125, -23, -30, 25, -25, -34, -55, -70, -38, 13, -127, -114, 99, -57, 77, 66, -115, -40, 48, 59, -117, 37, -118, -117, 36, 4, -95, 34, -95, 74, -3, -124, -3, -127, 113, -66, -11, 56, 66, -37, 39, 44, -113, -84, 68, -53, 37, -24, 40, 126, -103, -86};
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
    msg.setTimeStamp(0.7921311703780977);
    msg.setSource(3396U);
    msg.setSourceEntity(70U);
    msg.setDestination(42153U);
    msg.setDestinationEntity(198U);
    msg.type = 227U;
    msg.frequency = 1859094932U;
    msg.min_range = 10743U;
    msg.max_range = 61762U;
    msg.bits_per_point = 15U;
    msg.scale_factor = 0.8460438393099198;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.35143353029948177;
    tmp_msg_0.beam_height = 0.14241298072125796;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {37, 111, -4, -21, 94, -54, -47, -83, -30, 114, -10, 107, -93, -63, 107, 64, 94, -72, -116, -29, 25, -13, -95, 57, -101, -124, -45, -3, -12, -52, -41, -117, -7, 19, -77, 49, 59, -52, -127, -118, 73, 110, 107, 13, 94, 31, -127, -85, 72, -114, 98, 65, 120, 95, 116, 64, 46, 57, 72, 14, 25, 14, -6, 115, 23, -53, -8, 68, 97, 26, 29, 80, 122, -124, -17, -103, 126, 75, -125, 124, -114, 16, -86, 80, -71, 27, -38};
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
    msg.setTimeStamp(0.5614873598154373);
    msg.setSource(28980U);
    msg.setSourceEntity(96U);
    msg.setDestination(13221U);
    msg.setDestinationEntity(7U);
    msg.type = 68U;
    msg.frequency = 4291182629U;
    msg.min_range = 17324U;
    msg.max_range = 65247U;
    msg.bits_per_point = 67U;
    msg.scale_factor = 0.7357291071985012;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5751035006341166;
    tmp_msg_0.beam_height = 0.1625708428397219;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {98, -58, -39, 10, -29, -56, 5, 119, -36, 56, -34, 116, -114, -48, 50, 56, 108, -25, 104, 82, -107, -61, 114, -55, -13, -90, 18, 36, -90, 10, 90, -44, -44, 126, 66, 90, -57, 114, -8, 44, 17, 110, 62, -110, -69, -36, 98, 50, 87, 38, -107, 4, -45, -29, 89, -109, 4, 33, -81, -12, 53, 108, 98, 70, -75, 124, -19, 10, -23, -63, -87, -91, 95, -52, -101, -4, -26, 16, 93, -48, 111, 93, -16, -63, 51, 13, -56, 39, -117, -112, 98, -119, 8, 47, -7, 61, -52, 66, -80, 10, -37, 21, -53, -16, 53, 112, 62, 54, -23, 47, 102, 85, 124, -93, -62, 6, -108, -66, -61, 116, 75, 42, 6, 85, 68, -126, -126, 106, 62, -25, 31, 65, 110, 87, -94, 116, 36, 36, -17, -28, -120, -6, 30, 85, -89, -50, 37, 94, -22, 1, 23, -75, -41, 17, 77, -43, 71, 78, 1, -31, -27, -27, 104, -93, 54, 107, -49, -33, -106, 72, 13, 35, -54, 42, -51, 49, -128, 34, -111, -5, 85, -60, 13, 101, -29, -119, -71, -103, -108, 47, 9, -56, -70, -63, 34, 112, -96, 109, 2, -40, 70, 57, -28, 8, 65, -28, -112, 21, 59, -117, 117, -45, 0, 61, 62, 119, 119, -44, 59, 102, 11, 95, -73, -105, -43, 100, -88, -96, -63, 120, -102, -76, 122, -113, 71, 100, -118, 115, 118, 60, -60, -89, -21, -56, -109, -31, 19, -1, -84, 62, 78, 6, -72};
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
    msg.setTimeStamp(0.6024595897676484);
    msg.setSource(41997U);
    msg.setSourceEntity(72U);
    msg.setDestination(58596U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.16634077546292914);
    msg.setSource(14373U);
    msg.setSourceEntity(13U);
    msg.setDestination(36026U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.15929638386566192);
    msg.setSource(56796U);
    msg.setSourceEntity(55U);
    msg.setDestination(59600U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.4703725282740272);
    msg.setSource(25878U);
    msg.setSourceEntity(198U);
    msg.setDestination(11064U);
    msg.setDestinationEntity(184U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.7678742394963594);
    msg.setSource(49867U);
    msg.setSourceEntity(251U);
    msg.setDestination(30312U);
    msg.setDestinationEntity(94U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.9717736525365062);
    msg.setSource(51980U);
    msg.setSourceEntity(18U);
    msg.setDestination(19445U);
    msg.setDestinationEntity(107U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.6437486303584141);
    msg.setSource(12116U);
    msg.setSourceEntity(221U);
    msg.setDestination(13265U);
    msg.setDestinationEntity(116U);
    msg.value = 0.11439157476909834;
    msg.confidence = 0.4264526475173628;
    msg.opmodes.assign("TEAGDMMFSOUJOFEQLGROHVLPOLVGHZXGQCFBICWKZISPAGDANEPYLTNKFWGCEABQXUDOFFYSKCTRXORHAAMHLKTJZCPXELVGDNHLUDPHYBMNWERNSZNGUFGDRJMCQCXKEZUYSRWRSPHJQCOIFPABMOOICVHJMBJYLADWFKVUBIDNTKJBZUQBDWNIYKIUYKISTHEHCNTSTV");

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
    msg.setTimeStamp(0.3584672248612676);
    msg.setSource(55670U);
    msg.setSourceEntity(205U);
    msg.setDestination(47117U);
    msg.setDestinationEntity(180U);
    msg.value = 0.6763523344585676;
    msg.confidence = 0.7392391775771635;
    msg.opmodes.assign("SMWXRXVZLHWLCUXEVRQDHEFPOARLMWCZTKVDVUWBJKHUNEFQZHYOUJTZFM");

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
    msg.setTimeStamp(0.15067586421986012);
    msg.setSource(31991U);
    msg.setSourceEntity(197U);
    msg.setDestination(54168U);
    msg.setDestinationEntity(216U);
    msg.value = 0.4379811621655636;
    msg.confidence = 0.22189912120565003;
    msg.opmodes.assign("BBQCCXPCTXTDAZIZXMMHXTWFPDIOMEVRAYYHPOUGZFUGTMIFSULISSXIZXYPQZLAJGACIAHEQBUVYKWOSUOSDEAFUPFHAEWTOYNLQFJCGJYHNFWQNJERCZGBIMVEJQOXGVTEVRCGJKAZSFTWDVTRXLCPDHHWMMVJKFXKROZNDDKBSKMNNLMXSGBFLVJJNYCELBEPGLBWYZIOUNURYRQPJQSRUKLOIWBKCUAVQDNMVL");

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
    msg.setTimeStamp(0.5238182980522214);
    msg.setSource(42057U);
    msg.setSourceEntity(242U);
    msg.setDestination(8041U);
    msg.setDestinationEntity(33U);
    msg.itow = 2634118256U;
    msg.lat = 0.8082758140973643;
    msg.lon = 0.8636183544325848;
    msg.height_ell = 0.5938432090474771;
    msg.height_sea = 0.9572207348837004;
    msg.hacc = 0.27059266940296245;
    msg.vacc = 0.015682625709520726;
    msg.vel_n = 0.5077456412286177;
    msg.vel_e = 0.7967543852814473;
    msg.vel_d = 0.719008314187068;
    msg.speed = 0.7245445957668659;
    msg.gspeed = 0.694485256073528;
    msg.heading = 0.4704232643938777;
    msg.sacc = 0.9664452736613101;
    msg.cacc = 0.5608917908319386;

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
    msg.setTimeStamp(0.48635001613962203);
    msg.setSource(3762U);
    msg.setSourceEntity(108U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(146U);
    msg.itow = 196285836U;
    msg.lat = 0.7639627592738402;
    msg.lon = 0.2010775533689947;
    msg.height_ell = 0.24669213675728552;
    msg.height_sea = 0.6351626712996141;
    msg.hacc = 0.7105324260026297;
    msg.vacc = 0.008026383759700995;
    msg.vel_n = 0.6746526143100637;
    msg.vel_e = 0.060332784076892465;
    msg.vel_d = 0.8101757731768443;
    msg.speed = 0.9096447642154938;
    msg.gspeed = 0.45341843818256844;
    msg.heading = 0.333071580768567;
    msg.sacc = 0.7564884253817188;
    msg.cacc = 0.06802114566538453;

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
    msg.setTimeStamp(0.4002180495243097);
    msg.setSource(24795U);
    msg.setSourceEntity(193U);
    msg.setDestination(7871U);
    msg.setDestinationEntity(206U);
    msg.itow = 1059301499U;
    msg.lat = 0.6955432059270097;
    msg.lon = 0.5279284533365642;
    msg.height_ell = 0.6614351371564807;
    msg.height_sea = 0.09302448587943735;
    msg.hacc = 0.46740946883385426;
    msg.vacc = 0.2911175507826057;
    msg.vel_n = 0.13190434202181212;
    msg.vel_e = 0.37289275574476743;
    msg.vel_d = 0.6122315403187668;
    msg.speed = 0.5223872887414611;
    msg.gspeed = 0.9322294137036511;
    msg.heading = 0.31663676467235347;
    msg.sacc = 0.22983633555592686;
    msg.cacc = 0.6284286744677927;

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
    msg.setTimeStamp(0.6364882684118521);
    msg.setSource(51706U);
    msg.setSourceEntity(19U);
    msg.setDestination(5186U);
    msg.setDestinationEntity(214U);
    msg.id = 6U;
    msg.value = 0.38333902540105846;

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
    msg.setTimeStamp(0.5941079649413205);
    msg.setSource(8784U);
    msg.setSourceEntity(170U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(218U);
    msg.id = 239U;
    msg.value = 0.14078982720705646;

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
    msg.setTimeStamp(0.1607942442747915);
    msg.setSource(56476U);
    msg.setSourceEntity(71U);
    msg.setDestination(44632U);
    msg.setDestinationEntity(84U);
    msg.id = 241U;
    msg.value = 0.25568682264746123;

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
    msg.setTimeStamp(0.8665929064561301);
    msg.setSource(38927U);
    msg.setSourceEntity(40U);
    msg.setDestination(50592U);
    msg.setDestinationEntity(86U);
    msg.x = 0.6645976862679439;
    msg.y = 0.2574347161976799;
    msg.z = 0.5285807849086798;
    msg.phi = 0.24456162063113007;
    msg.theta = 0.25634575669406434;
    msg.psi = 0.973490966616824;

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
    msg.setTimeStamp(0.20182372124313752);
    msg.setSource(61941U);
    msg.setSourceEntity(123U);
    msg.setDestination(15255U);
    msg.setDestinationEntity(217U);
    msg.x = 0.31627060251348504;
    msg.y = 0.48702431004265356;
    msg.z = 0.4762981618279024;
    msg.phi = 0.39875574509195555;
    msg.theta = 0.7503771289609429;
    msg.psi = 0.5172530786362205;

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
    msg.setTimeStamp(0.5476805452029299);
    msg.setSource(24746U);
    msg.setSourceEntity(168U);
    msg.setDestination(29648U);
    msg.setDestinationEntity(228U);
    msg.x = 0.7818277153856444;
    msg.y = 0.5039601940377285;
    msg.z = 0.5580669093776506;
    msg.phi = 0.7665330362618004;
    msg.theta = 0.6286176242435304;
    msg.psi = 0.35423957641789705;

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
    msg.setTimeStamp(0.4137542779509856);
    msg.setSource(6676U);
    msg.setSourceEntity(195U);
    msg.setDestination(45904U);
    msg.setDestinationEntity(95U);
    msg.beam_width = 0.25555519145160177;
    msg.beam_height = 0.5094994200088291;

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
    msg.setTimeStamp(0.33914363197468134);
    msg.setSource(32664U);
    msg.setSourceEntity(86U);
    msg.setDestination(20132U);
    msg.setDestinationEntity(64U);
    msg.beam_width = 0.15158119529172376;
    msg.beam_height = 0.4347884603456059;

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
    msg.setTimeStamp(0.1856914225363152);
    msg.setSource(18465U);
    msg.setSourceEntity(69U);
    msg.setDestination(48809U);
    msg.setDestinationEntity(38U);
    msg.beam_width = 0.9754505433244456;
    msg.beam_height = 0.3889908596862546;

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
    msg.setTimeStamp(0.3089606987108763);
    msg.setSource(14456U);
    msg.setSourceEntity(170U);
    msg.setDestination(48691U);
    msg.setDestinationEntity(135U);
    msg.sane = 51U;

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
    msg.setTimeStamp(0.061713166640886996);
    msg.setSource(17092U);
    msg.setSourceEntity(17U);
    msg.setDestination(40229U);
    msg.setDestinationEntity(48U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.9310022910320609);
    msg.setSource(61648U);
    msg.setSourceEntity(86U);
    msg.setDestination(19233U);
    msg.setDestinationEntity(45U);
    msg.sane = 197U;

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
    msg.setTimeStamp(0.3247796169507108);
    msg.setSource(55358U);
    msg.setSourceEntity(68U);
    msg.setDestination(959U);
    msg.setDestinationEntity(122U);
    msg.value = 0.4454009560533928;

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
    msg.setTimeStamp(0.8030033097713658);
    msg.setSource(29745U);
    msg.setSourceEntity(59U);
    msg.setDestination(32057U);
    msg.setDestinationEntity(11U);
    msg.value = 0.2826425882373774;

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
    msg.setTimeStamp(0.4346736460336488);
    msg.setSource(40641U);
    msg.setSourceEntity(167U);
    msg.setDestination(48573U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6454357500180911;

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
    msg.setTimeStamp(0.0047273216282816);
    msg.setSource(64615U);
    msg.setSourceEntity(19U);
    msg.setDestination(52129U);
    msg.setDestinationEntity(109U);
    msg.value = 0.8384741865676035;

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
    msg.setTimeStamp(0.4211277105597384);
    msg.setSource(14636U);
    msg.setSourceEntity(32U);
    msg.setDestination(48405U);
    msg.setDestinationEntity(85U);
    msg.value = 0.823798875862995;

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
    msg.setTimeStamp(0.4643015039621453);
    msg.setSource(56835U);
    msg.setSourceEntity(92U);
    msg.setDestination(12644U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5532272820546078;

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
    msg.setTimeStamp(0.3200519420311545);
    msg.setSource(40218U);
    msg.setSourceEntity(35U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(151U);
    msg.value = 0.2650431558575488;

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
    msg.setTimeStamp(0.7508500328481035);
    msg.setSource(4711U);
    msg.setSourceEntity(91U);
    msg.setDestination(9222U);
    msg.setDestinationEntity(217U);
    msg.value = 0.2609433252238298;

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
    msg.setTimeStamp(0.12660779555026946);
    msg.setSource(27118U);
    msg.setSourceEntity(243U);
    msg.setDestination(17428U);
    msg.setDestinationEntity(159U);
    msg.value = 0.32657212527037693;

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
    msg.setTimeStamp(0.576933783931899);
    msg.setSource(45262U);
    msg.setSourceEntity(98U);
    msg.setDestination(9711U);
    msg.setDestinationEntity(126U);
    msg.value = 0.30701684386129;

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
    msg.setTimeStamp(0.7109760668870502);
    msg.setSource(7176U);
    msg.setSourceEntity(180U);
    msg.setDestination(16823U);
    msg.setDestinationEntity(222U);
    msg.value = 0.2275066676674582;

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
    msg.setTimeStamp(0.14407029921115933);
    msg.setSource(41162U);
    msg.setSourceEntity(146U);
    msg.setDestination(47784U);
    msg.setDestinationEntity(77U);
    msg.value = 0.6106500831643139;

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
    msg.setTimeStamp(0.18759075101225087);
    msg.setSource(58301U);
    msg.setSourceEntity(193U);
    msg.setDestination(31019U);
    msg.setDestinationEntity(247U);
    msg.value = 0.2389244365587344;

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
    msg.setTimeStamp(0.35046552728219527);
    msg.setSource(109U);
    msg.setSourceEntity(184U);
    msg.setDestination(37249U);
    msg.setDestinationEntity(217U);
    msg.value = 0.23542641441298984;

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
    msg.setTimeStamp(0.648776252422055);
    msg.setSource(26319U);
    msg.setSourceEntity(73U);
    msg.setDestination(22286U);
    msg.setDestinationEntity(106U);
    msg.value = 0.4880990777894956;

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
    msg.setTimeStamp(0.6087923733775555);
    msg.setSource(46737U);
    msg.setSourceEntity(127U);
    msg.setDestination(32527U);
    msg.setDestinationEntity(60U);
    msg.value = 0.44798052741411776;

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
    msg.setTimeStamp(0.6576540556610166);
    msg.setSource(63132U);
    msg.setSourceEntity(154U);
    msg.setDestination(48319U);
    msg.setDestinationEntity(61U);
    msg.value = 0.8863584982817501;

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
    msg.setTimeStamp(0.14492046632789568);
    msg.setSource(17783U);
    msg.setSourceEntity(160U);
    msg.setDestination(9775U);
    msg.setDestinationEntity(156U);
    msg.value = 0.7679921938673001;

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
    msg.setTimeStamp(0.7156548479545585);
    msg.setSource(16810U);
    msg.setSourceEntity(206U);
    msg.setDestination(31396U);
    msg.setDestinationEntity(227U);
    msg.value = 0.7237061593069052;

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
    msg.setTimeStamp(0.7828178297452784);
    msg.setSource(55195U);
    msg.setSourceEntity(250U);
    msg.setDestination(2934U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5890979127244045;

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
    msg.setTimeStamp(0.737868769865037);
    msg.setSource(62377U);
    msg.setSourceEntity(238U);
    msg.setDestination(36420U);
    msg.setDestinationEntity(239U);
    msg.value = 0.45752807604023094;

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
    msg.setTimeStamp(0.6927101314438522);
    msg.setSource(57346U);
    msg.setSourceEntity(112U);
    msg.setDestination(63627U);
    msg.setDestinationEntity(97U);
    msg.value = 0.25753256769590016;

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
    msg.setTimeStamp(0.9242917617923966);
    msg.setSource(1416U);
    msg.setSourceEntity(71U);
    msg.setDestination(56196U);
    msg.setDestinationEntity(217U);
    msg.value = 0.8818348519661503;

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
    msg.setTimeStamp(0.4093127502556202);
    msg.setSource(61381U);
    msg.setSourceEntity(197U);
    msg.setDestination(51469U);
    msg.setDestinationEntity(74U);
    msg.value = 0.9021455867306254;

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
    msg.setTimeStamp(0.03534712759238745);
    msg.setSource(49340U);
    msg.setSourceEntity(240U);
    msg.setDestination(26970U);
    msg.setDestinationEntity(1U);
    msg.validity = 10220U;
    msg.type = 183U;
    msg.tow = 1490986171U;
    msg.base_lat = 0.8230942166429098;
    msg.base_lon = 0.9797870118722051;
    msg.base_height = 0.41540044990255665;
    msg.n = 0.6039977547886841;
    msg.e = 0.6043541112211414;
    msg.d = 0.3171831982354393;
    msg.v_n = 0.8818641078895939;
    msg.v_e = 0.3467870219826674;
    msg.v_d = 0.1869239165612706;
    msg.satellites = 238U;
    msg.iar_hyp = 15989U;
    msg.iar_ratio = 0.6277725958908164;

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
    msg.setTimeStamp(0.49634253499200354);
    msg.setSource(42202U);
    msg.setSourceEntity(108U);
    msg.setDestination(39651U);
    msg.setDestinationEntity(203U);
    msg.validity = 40896U;
    msg.type = 208U;
    msg.tow = 1666591487U;
    msg.base_lat = 0.5778740543090958;
    msg.base_lon = 0.6659544226258931;
    msg.base_height = 0.44288962376568797;
    msg.n = 0.10657062204424272;
    msg.e = 0.792448528724571;
    msg.d = 0.5813355470920918;
    msg.v_n = 0.19811766719464452;
    msg.v_e = 0.2992533809347693;
    msg.v_d = 0.4695039217277689;
    msg.satellites = 125U;
    msg.iar_hyp = 57919U;
    msg.iar_ratio = 0.7901164612005463;

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
    msg.setTimeStamp(0.6322762360407315);
    msg.setSource(23764U);
    msg.setSourceEntity(9U);
    msg.setDestination(59832U);
    msg.setDestinationEntity(247U);
    msg.validity = 17139U;
    msg.type = 225U;
    msg.tow = 1019262782U;
    msg.base_lat = 0.04377883474869515;
    msg.base_lon = 0.014710205100018414;
    msg.base_height = 0.963235689249791;
    msg.n = 0.9165996051473989;
    msg.e = 0.6486131461710309;
    msg.d = 0.6572311016273689;
    msg.v_n = 0.3937226717901212;
    msg.v_e = 0.7380275393849657;
    msg.v_d = 0.5668629534821811;
    msg.satellites = 33U;
    msg.iar_hyp = 55512U;
    msg.iar_ratio = 0.07545630717413732;

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
    msg.setTimeStamp(0.6918531642530531);
    msg.setSource(34592U);
    msg.setSourceEntity(90U);
    msg.setDestination(23122U);
    msg.setDestinationEntity(132U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.21884560480188053;
    tmp_msg_0.lon = 0.9607886257815529;
    tmp_msg_0.height = 0.9407804243080937;
    tmp_msg_0.x = 0.44448304639402103;
    tmp_msg_0.y = 0.356495050575488;
    tmp_msg_0.z = 0.37476946067734407;
    tmp_msg_0.phi = 0.7033157534382527;
    tmp_msg_0.theta = 0.6925638511491496;
    tmp_msg_0.psi = 0.08357805261908757;
    tmp_msg_0.u = 0.4687421840151694;
    tmp_msg_0.v = 0.9033230347769654;
    tmp_msg_0.w = 0.09119868873229886;
    tmp_msg_0.vx = 0.12955753191145514;
    tmp_msg_0.vy = 0.6222406167549597;
    tmp_msg_0.vz = 0.4126319354989396;
    tmp_msg_0.p = 0.470151999379975;
    tmp_msg_0.q = 0.8342806367031347;
    tmp_msg_0.r = 0.3734635219888598;
    tmp_msg_0.depth = 0.7002123624397407;
    tmp_msg_0.alt = 0.6472426982242651;
    msg.state.set(tmp_msg_0);
    msg.type = 5U;

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
    msg.setTimeStamp(0.32468853707534717);
    msg.setSource(14928U);
    msg.setSourceEntity(226U);
    msg.setDestination(22089U);
    msg.setDestinationEntity(53U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.24211315767549302;
    tmp_msg_0.lon = 0.012640897619530578;
    tmp_msg_0.height = 0.8706076835599295;
    tmp_msg_0.x = 0.35299339240049155;
    tmp_msg_0.y = 0.4681191696763831;
    tmp_msg_0.z = 0.7352884319358661;
    tmp_msg_0.phi = 0.926676254976365;
    tmp_msg_0.theta = 0.019949238374820766;
    tmp_msg_0.psi = 0.4724802708876128;
    tmp_msg_0.u = 0.7260486788867215;
    tmp_msg_0.v = 0.033574540048603274;
    tmp_msg_0.w = 0.9083433273780075;
    tmp_msg_0.vx = 0.9181526366120557;
    tmp_msg_0.vy = 0.29152937823979175;
    tmp_msg_0.vz = 0.7938810997487461;
    tmp_msg_0.p = 0.12531833263510772;
    tmp_msg_0.q = 0.9303147485561578;
    tmp_msg_0.r = 0.2675359790132932;
    tmp_msg_0.depth = 0.3607537507283929;
    tmp_msg_0.alt = 0.41162829059332773;
    msg.state.set(tmp_msg_0);
    msg.type = 138U;

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
    msg.setTimeStamp(0.20765008897775528);
    msg.setSource(59422U);
    msg.setSourceEntity(227U);
    msg.setDestination(10953U);
    msg.setDestinationEntity(223U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4232357531069134;
    tmp_msg_0.lon = 0.4994756534633932;
    tmp_msg_0.height = 0.08322914404798398;
    tmp_msg_0.x = 0.8295419873483801;
    tmp_msg_0.y = 0.9202672298053123;
    tmp_msg_0.z = 0.08124810733256527;
    tmp_msg_0.phi = 0.8709744024707328;
    tmp_msg_0.theta = 0.4589800139707729;
    tmp_msg_0.psi = 0.5705582467646962;
    tmp_msg_0.u = 0.9812520791759219;
    tmp_msg_0.v = 0.4480838494318151;
    tmp_msg_0.w = 0.17376982619513892;
    tmp_msg_0.vx = 0.483149007602077;
    tmp_msg_0.vy = 0.07216252809782353;
    tmp_msg_0.vz = 0.19415379301558944;
    tmp_msg_0.p = 0.9213917469614539;
    tmp_msg_0.q = 0.3082286265434232;
    tmp_msg_0.r = 0.8490178418768937;
    tmp_msg_0.depth = 0.19858073972727652;
    tmp_msg_0.alt = 0.3162981204480728;
    msg.state.set(tmp_msg_0);
    msg.type = 254U;

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
    msg.setTimeStamp(0.31818888013951385);
    msg.setSource(52803U);
    msg.setSourceEntity(13U);
    msg.setDestination(2809U);
    msg.setDestinationEntity(13U);
    msg.value = 0.5989994990417788;

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
    msg.setTimeStamp(0.9541570889429272);
    msg.setSource(40841U);
    msg.setSourceEntity(119U);
    msg.setDestination(22814U);
    msg.setDestinationEntity(41U);
    msg.value = 0.07698127369298924;

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
    msg.setTimeStamp(0.9362717585520245);
    msg.setSource(48919U);
    msg.setSourceEntity(54U);
    msg.setDestination(12737U);
    msg.setDestinationEntity(84U);
    msg.value = 0.7780661801527138;

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
    msg.setTimeStamp(0.7113349031288183);
    msg.setSource(5697U);
    msg.setSourceEntity(109U);
    msg.setDestination(42723U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6983152095601124;

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
    msg.setTimeStamp(0.11624507755773827);
    msg.setSource(4671U);
    msg.setSourceEntity(134U);
    msg.setDestination(30198U);
    msg.setDestinationEntity(201U);
    msg.value = 0.807807705295786;

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
    msg.setTimeStamp(0.1267969208779708);
    msg.setSource(11741U);
    msg.setSourceEntity(76U);
    msg.setDestination(16946U);
    msg.setDestinationEntity(187U);
    msg.value = 0.24250691331803464;

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
    msg.setTimeStamp(0.5911519614308761);
    msg.setSource(58081U);
    msg.setSourceEntity(161U);
    msg.setDestination(23978U);
    msg.setDestinationEntity(249U);
    msg.value = 0.31247967090529527;

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
    msg.setTimeStamp(0.3970415787114877);
    msg.setSource(44777U);
    msg.setSourceEntity(146U);
    msg.setDestination(64341U);
    msg.setDestinationEntity(210U);
    msg.value = 0.4898706100397502;

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
    msg.setTimeStamp(0.12219881288814471);
    msg.setSource(22925U);
    msg.setSourceEntity(189U);
    msg.setDestination(6403U);
    msg.setDestinationEntity(12U);
    msg.value = 0.13400526845463656;

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
    msg.setTimeStamp(0.9877579414837214);
    msg.setSource(11608U);
    msg.setSourceEntity(5U);
    msg.setDestination(28910U);
    msg.setDestinationEntity(151U);
    msg.value = 0.9921681793398429;

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
    msg.setTimeStamp(0.03569994640151075);
    msg.setSource(20522U);
    msg.setSourceEntity(22U);
    msg.setDestination(14855U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6454205120714426;

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
    msg.setTimeStamp(0.05920504195763465);
    msg.setSource(36563U);
    msg.setSourceEntity(235U);
    msg.setDestination(37232U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6345449128320171;

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
    msg.setTimeStamp(0.6658886786104823);
    msg.setSource(54546U);
    msg.setSourceEntity(214U);
    msg.setDestination(596U);
    msg.setDestinationEntity(166U);
    msg.value = 0.8905470087290432;

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
    msg.setTimeStamp(0.28677841234308066);
    msg.setSource(17599U);
    msg.setSourceEntity(76U);
    msg.setDestination(34259U);
    msg.setDestinationEntity(0U);
    msg.value = 0.049897332264954186;

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
    msg.setTimeStamp(0.04664132633764839);
    msg.setSource(52581U);
    msg.setSourceEntity(144U);
    msg.setDestination(54779U);
    msg.setDestinationEntity(49U);
    msg.value = 0.843410261436412;

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
    msg.setTimeStamp(0.6419322989778362);
    msg.setSource(12497U);
    msg.setSourceEntity(29U);
    msg.setDestination(57304U);
    msg.setDestinationEntity(153U);
    msg.id = 187U;
    msg.zoom = 162U;
    msg.action = 197U;

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
    msg.setTimeStamp(0.4955875595525101);
    msg.setSource(5830U);
    msg.setSourceEntity(15U);
    msg.setDestination(52023U);
    msg.setDestinationEntity(83U);
    msg.id = 151U;
    msg.zoom = 243U;
    msg.action = 155U;

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
    msg.setTimeStamp(0.7774500363849347);
    msg.setSource(16609U);
    msg.setSourceEntity(75U);
    msg.setDestination(49554U);
    msg.setDestinationEntity(147U);
    msg.id = 79U;
    msg.zoom = 67U;
    msg.action = 13U;

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
    msg.setTimeStamp(0.7650926825918763);
    msg.setSource(21352U);
    msg.setSourceEntity(227U);
    msg.setDestination(46617U);
    msg.setDestinationEntity(38U);
    msg.id = 194U;
    msg.value = 0.16994741254597112;

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
    msg.setTimeStamp(0.26453343384802275);
    msg.setSource(16762U);
    msg.setSourceEntity(161U);
    msg.setDestination(40775U);
    msg.setDestinationEntity(102U);
    msg.id = 1U;
    msg.value = 0.6066263022126226;

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
    msg.setTimeStamp(0.6557633962333833);
    msg.setSource(28368U);
    msg.setSourceEntity(212U);
    msg.setDestination(59632U);
    msg.setDestinationEntity(252U);
    msg.id = 21U;
    msg.value = 0.8873351589176028;

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
    msg.setTimeStamp(0.22183564028782576);
    msg.setSource(26784U);
    msg.setSourceEntity(36U);
    msg.setDestination(25081U);
    msg.setDestinationEntity(147U);
    msg.id = 119U;
    msg.value = 0.5704217566798044;

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
    msg.setTimeStamp(0.12638198028143177);
    msg.setSource(32437U);
    msg.setSourceEntity(45U);
    msg.setDestination(59316U);
    msg.setDestinationEntity(229U);
    msg.id = 234U;
    msg.value = 0.4167574681505236;

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
    msg.setTimeStamp(0.12480131880045997);
    msg.setSource(20612U);
    msg.setSourceEntity(165U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(88U);
    msg.id = 124U;
    msg.value = 0.44198418400831574;

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
    msg.setTimeStamp(0.5699353127730341);
    msg.setSource(22684U);
    msg.setSourceEntity(63U);
    msg.setDestination(59943U);
    msg.setDestinationEntity(179U);
    msg.id = 112U;
    msg.angle = 0.7800748684633808;

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
    msg.setTimeStamp(0.0022033617835431896);
    msg.setSource(9676U);
    msg.setSourceEntity(18U);
    msg.setDestination(17867U);
    msg.setDestinationEntity(151U);
    msg.id = 134U;
    msg.angle = 0.1708895043167814;

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
    msg.setTimeStamp(0.4230009581946549);
    msg.setSource(60224U);
    msg.setSourceEntity(144U);
    msg.setDestination(39972U);
    msg.setDestinationEntity(72U);
    msg.id = 132U;
    msg.angle = 0.7883215487471315;

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
    msg.setTimeStamp(0.47860604019748587);
    msg.setSource(39970U);
    msg.setSourceEntity(120U);
    msg.setDestination(32806U);
    msg.setDestinationEntity(75U);
    msg.op = 234U;
    msg.actions.assign("EAMGGRBYFZELRHZBKJVZJBFCDHISPIOVBVQJTKNYFXCORLNOIPGZNCBXZQFJHAAVGSOXAYSGPDFVWHOSIPZIPWLYVNNRDOUYLKEUSKTUUZSSSBCCIQXYEDZADWHWQQLZHJGVHMKGZJXLTCMCUUXNFHKWUFYGQSAVPLXIJICDAMQRKONMSTUBIARNRRLLWFRNVDYDHVKJRWMTAOFQDNUEJMGOADQEKXBHPXFQKTUYBPOCI");

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
    msg.setTimeStamp(0.9361588486090275);
    msg.setSource(14475U);
    msg.setSourceEntity(164U);
    msg.setDestination(41048U);
    msg.setDestinationEntity(108U);
    msg.op = 154U;
    msg.actions.assign("GXJCDRFLCPOVVMJOEUKPTBGYTGBOFRQPNIHENXAJMTNBOYGTHOSUQKXOPJPMYTFP");

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
    msg.setTimeStamp(0.2830768746486889);
    msg.setSource(33624U);
    msg.setSourceEntity(152U);
    msg.setDestination(22027U);
    msg.setDestinationEntity(47U);
    msg.op = 77U;
    msg.actions.assign("DGVSVBGUGHVRFNIWSXJDZTEOQJKPMEWHXMCUNVQBXIISGOULPNPRPCSZKMWJDHIOMZTNQEVYGMUDNPXXPCNVK");

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
    msg.setTimeStamp(0.3383449924531091);
    msg.setSource(32520U);
    msg.setSourceEntity(34U);
    msg.setDestination(6107U);
    msg.setDestinationEntity(88U);
    msg.actions.assign("DDWUYVYRHWPMKBPPAGJCHWGADFRLACLEGHNFLBTGPULLVNAZYULSINLXZYRMXRLNKBTSBJOHNAWEMGXHYOIQOLRHQECUYECSKFPSEMOCBMWBOMWKYBIVFFNJHFUKQMKRPJZODZMVNRPFQTSGCJASZZXSKTDTHCVPSSVVQVDBIOUJIYFJQWUZGRXMBGIXRQUADIEPRGTVHIGKYCDJZEUKZSWYJXWIBOXAPMAKFDQNXVOACEJNXFLNCWETTI");

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
    msg.setTimeStamp(0.9849369590322682);
    msg.setSource(51760U);
    msg.setSourceEntity(124U);
    msg.setDestination(61983U);
    msg.setDestinationEntity(139U);
    msg.actions.assign("STBUDMHXOJSKBHISFKCZYHRLMUFIKJDCLJKOHMKYFTDFKIDGWNCGWQODBEJPXEDWHZXDQLDXSCMQTKDIZDEGRQUNQPUPUYEIVWILNGATRBNLXGJVIRYGQQNAVXZFHTUVZPULTUVVLJPABVMBCFEFJKHYTRZCINXWAIOEMCOFGAYZQYESWXHALWOITWLWSUPOBYBGOZMFTPRLUJHKXBEMS");

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
    msg.setTimeStamp(0.10906752370926986);
    msg.setSource(14634U);
    msg.setSourceEntity(21U);
    msg.setDestination(13322U);
    msg.setDestinationEntity(53U);
    msg.actions.assign("REIOXBUTHIDBLZRPQJUDEDJFLJYTBIBARKWUMRRSUUYMKQHSXQEJCQLADNAFMVDDUYFTPZWWWSNZZODGAEOTSMGBLQXIPDTPSLCREZKABZFGRIPKXKBKEXVNTRKCELADVGTECVVUWRTFVCDYJYSFYANNQSJNQXGSAHXVUJFKLVWVCARFZYLHGZZMIOEAPOZHYHGGGKHQ");

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
    msg.setTimeStamp(0.6106286590201627);
    msg.setSource(29162U);
    msg.setSourceEntity(26U);
    msg.setDestination(3678U);
    msg.setDestinationEntity(89U);
    msg.button = 21U;
    msg.value = 146U;

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
    msg.setTimeStamp(0.7879487637208704);
    msg.setSource(4098U);
    msg.setSourceEntity(224U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(139U);
    msg.button = 56U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.2055274449350093);
    msg.setSource(26100U);
    msg.setSourceEntity(148U);
    msg.setDestination(39930U);
    msg.setDestinationEntity(101U);
    msg.button = 233U;
    msg.value = 247U;

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
    msg.setTimeStamp(0.39101125367790945);
    msg.setSource(37650U);
    msg.setSourceEntity(44U);
    msg.setDestination(49767U);
    msg.setDestinationEntity(215U);
    msg.op = 140U;
    msg.text.assign("HRAAKYYHOKKPXKUZPNPUJZHTIRSWFVZIFUBGAOCQDDZQQJYKIBONLJESAGCCZCYSUMHAMRRKJEQGWWTWVXDHLJZIGMWVTVIRDYTNCIFEOHAVLHKBSVXIPQCSDWXN");

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
    msg.setTimeStamp(0.8441986661651039);
    msg.setSource(2779U);
    msg.setSourceEntity(89U);
    msg.setDestination(8292U);
    msg.setDestinationEntity(254U);
    msg.op = 44U;
    msg.text.assign("AEIWOFJWRZNPVMJVIQCOBORFELETORTADWGEDKCLWIWTVRDNVBYYKSBROIIDLULFZZCQUXZBUQESXGWDQAPVKCEOZKVVNDSGMUUWSSJATYMYGFZSQZUQTHJOLOJHIBPMMXXIXMSXRRUFLYASNRPPBANNYAFNUWMQQKJRHCKLTFPZCCTIHNHMAVOEKPDYGDSBYBMHTMBUIXGACGJFHGYLZDEOKUAVCWLQEFKYVSZBGHPRHXILXTJP");

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
    msg.setTimeStamp(0.05248715258007575);
    msg.setSource(49346U);
    msg.setSourceEntity(19U);
    msg.setDestination(52018U);
    msg.setDestinationEntity(136U);
    msg.op = 194U;
    msg.text.assign("QATODFLBSXPTQOZSPRMJIIVUJMKHLQOYUNNEQGFRAJBFAN");

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
    msg.setTimeStamp(0.2557568137515617);
    msg.setSource(17278U);
    msg.setSourceEntity(45U);
    msg.setDestination(28127U);
    msg.setDestinationEntity(91U);
    msg.op = 53U;
    msg.time_remain = 0.15105189700010624;
    msg.sched_time = 0.2116329894612844;

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
    msg.setTimeStamp(0.2709625361515323);
    msg.setSource(12720U);
    msg.setSourceEntity(200U);
    msg.setDestination(32272U);
    msg.setDestinationEntity(19U);
    msg.op = 132U;
    msg.time_remain = 0.012775265644064948;
    msg.sched_time = 0.4798081664768936;

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
    msg.setTimeStamp(0.7543237682441296);
    msg.setSource(49946U);
    msg.setSourceEntity(144U);
    msg.setDestination(34497U);
    msg.setDestinationEntity(153U);
    msg.op = 145U;
    msg.time_remain = 0.27090522331632994;
    msg.sched_time = 0.43201562335553534;

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
    msg.setTimeStamp(0.4425708246704465);
    msg.setSource(32045U);
    msg.setSourceEntity(56U);
    msg.setDestination(51111U);
    msg.setDestinationEntity(242U);
    msg.name.assign("HJQUNGLGEJTNIWQWOLRUBVCSCMKYWAFEOBZBSGSMSUSGMADVEQLVFVTETJJTXNPFDORLJCYIHHOHQEUFMVCOKULRFHJLSPBDKZTIEAON");
    msg.op = 41U;
    msg.sched_time = 0.9416795919386098;

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
    msg.setTimeStamp(0.22725860022661337);
    msg.setSource(53549U);
    msg.setSourceEntity(203U);
    msg.setDestination(1381U);
    msg.setDestinationEntity(214U);
    msg.name.assign("NRANHPLGSJQFTWPOVXNHQHRVKOBFLJEMVNWDWDUEVISWAOFWQKEBUIZSLKYQWTQIHZIMKWRGBTZRIYZEVSMVBPZWACXDUPQSQGVGADTNQXSGLYEFTNJUAKKLOWJNILOBBDDZRVNHPFKGFUTRPMPBJROGVXNOK");
    msg.op = 130U;
    msg.sched_time = 0.1654936865003337;

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
    msg.setTimeStamp(0.6060790854155464);
    msg.setSource(41115U);
    msg.setSourceEntity(80U);
    msg.setDestination(34369U);
    msg.setDestinationEntity(29U);
    msg.name.assign("QYXERGWHNBIPCLLZCGOFKAQVIMGLDNDJMGGFNHSQNUAVXAXJREGWEPZRJFJSVUOJSPFRHOROMHNRQYKSBVJUKHAYDSXGYLIIYTXAOSYWEIXKGCBXCLDOGDASIUDNIZYPKUIFXZWCCTMWTNVTTTCMLQMZZVBTHAQYX");
    msg.op = 225U;
    msg.sched_time = 0.1516613226059128;

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
    msg.setTimeStamp(0.4296039053201295);
    msg.setSource(35759U);
    msg.setSourceEntity(168U);
    msg.setDestination(8442U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.7382967121744046);
    msg.setSource(64279U);
    msg.setSourceEntity(32U);
    msg.setDestination(50585U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.07300859423141948);
    msg.setSource(6246U);
    msg.setSourceEntity(7U);
    msg.setDestination(2299U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.19797450738651123);
    msg.setSource(10188U);
    msg.setSourceEntity(21U);
    msg.setDestination(64600U);
    msg.setDestinationEntity(237U);
    msg.name.assign("KKGRBIEPJQITOINCRCXUZHCUDMOOVWXMKCOQWDIITJGIDTNIF");
    msg.state = 85U;

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
    msg.setTimeStamp(0.30211029227404773);
    msg.setSource(20595U);
    msg.setSourceEntity(214U);
    msg.setDestination(55554U);
    msg.setDestinationEntity(62U);
    msg.name.assign("WVBWVVDNRPIVKCYSJXJSWPDXRNWJNEMLGQRCPUJQKOSZXVVBFXUAZDQOXQYMJMGFBGUWEAYRBZVYUXTRMKDNPBCBCCFGQURJABDOZDELXKYSVKEEBAXGAIFJIDIMMYZLPHUESKHPSPZELPUTKTHKINOPTHLGETTICNYTKLZZFJVGDNFAUHRALLIQFARAASTWEFWBBQDMHPYOSIHGCHZGONFQTUQNGIJEOWOVRHCSWYMQXYCXRJOMS");
    msg.state = 0U;

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
    msg.setTimeStamp(0.8220899918295788);
    msg.setSource(9582U);
    msg.setSourceEntity(18U);
    msg.setDestination(2680U);
    msg.setDestinationEntity(125U);
    msg.name.assign("AHWIDNLZZMMRUBTDRGZBAZCXDFXMHVYNL");
    msg.state = 149U;

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
    msg.setTimeStamp(0.870573362391385);
    msg.setSource(27599U);
    msg.setSourceEntity(216U);
    msg.setDestination(11738U);
    msg.setDestinationEntity(57U);
    msg.name.assign("CWHICFHXTFBKTTSRZVQSGLXUIMUKDHOREIALOZUPEPWZEBMSKKZRJOPNGSITMMRCMIZREBRDVFKFWVCBIPQKANFBLKQHHMMJVRYTCEFOGCDJWXCYHMPUYTGAOOYNKAWPNLEJUSQMHVZLUHJDGYUASFCNIZAPLYFGURTJVNFDV");
    msg.value = 187U;

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
    msg.setTimeStamp(0.28172262479656507);
    msg.setSource(13454U);
    msg.setSourceEntity(216U);
    msg.setDestination(40697U);
    msg.setDestinationEntity(59U);
    msg.name.assign("KUEZDEPTNRUKLRFMKFOECZIQSMXWMPETJYRMVIUOMDEJDLHIEFSGEFGTIUSQYOVTHXZAYRFDBMYMVBDXUKTTBVNNWGXCPALNPCQFYITDQDABJGRBRPJLKRUMCIKRZWQHYPVKNOXEK");
    msg.value = 71U;

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
    msg.setTimeStamp(0.13997973837808553);
    msg.setSource(6290U);
    msg.setSourceEntity(57U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(47U);
    msg.name.assign("WWZDZFGIOTANVAKZEEZUODLYPFZNUBMDXSHVNGUHBHTOCDPZKVOQESEMDFCPJQKVBYILTVHJSGVAKYWGCIOEMMPRQBQNDQMXHXPJIAJFXXGXJSQTNEJSVLTCTYFVSFWNCLNRYRZFBBNEPUWQXWHTJEBKRDDAOD");
    msg.value = 184U;

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
    msg.setTimeStamp(0.4380298084884462);
    msg.setSource(41301U);
    msg.setSourceEntity(168U);
    msg.setDestination(2065U);
    msg.setDestinationEntity(134U);
    msg.name.assign("CUBQSYPZQWTLWXBMRURAHWVNUXNSROKGZUEBFDRA");

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
    msg.setTimeStamp(0.19969636205803865);
    msg.setSource(3667U);
    msg.setSourceEntity(61U);
    msg.setDestination(15977U);
    msg.setDestinationEntity(76U);
    msg.name.assign("VKMOFOVMJBQQIBPMQHCQFBWOAMYJRSNUXLYZKYXLXPKDGUXHDDSDYCDDIIQJRWJXW");

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
    msg.setTimeStamp(0.6879913171557203);
    msg.setSource(24872U);
    msg.setSourceEntity(132U);
    msg.setDestination(23844U);
    msg.setDestinationEntity(117U);
    msg.name.assign("ITQEZWOJEOXKDDNACORWLDAHUPDINZXQABRFLGJAHPQPWWHAWVBBYKJFRSWHFAXEOTHUZBXVMUWOEOUTCCPYLYHTOPNKMDZIXBFMGNEUDKSSKNXCMMEIDQLKVEMNVIFV");

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
    msg.setTimeStamp(0.13226687679278815);
    msg.setSource(18583U);
    msg.setSourceEntity(80U);
    msg.setDestination(17879U);
    msg.setDestinationEntity(191U);
    msg.name.assign("HKXWHTORJQBTUNPCQFCBXLFPYIHMHPYWIFGYVUDWYWULDXVUOYEQBPJQTEAOKPFJSRLJLXBUKLBNURAMOASZIEOQNKTABWZEAHEMDQDSXXIVVYZOMOQIYSLKGCXXIGBARIJVPJAHFQHRRLRCYMZDTNZZDIMMMNVWSXCXNFCDVJASWSCDGGQTROHQYMKDPPZCHSBELVRRYABCUNZPONSTTWCKWJGGPOHZVLUMIAJJIZEEVGUKFFNEKNDKUTBGF");
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
    msg.setTimeStamp(0.7678725700819119);
    msg.setSource(15952U);
    msg.setSourceEntity(88U);
    msg.setDestination(45552U);
    msg.setDestinationEntity(54U);
    msg.name.assign("XXYLHNBTAOWBTFZHCDRPPVAHIENABKHJJZRGZQFFOCACGNMMVTRBXLUMOGPMOOPUUJSRBMPFXZXDRCFKILTFIJHEOFJLHMUXFSIVEASYSNVXDHDWFGWWQXMTQLCPNYJGIPWLZSHELV");
    msg.value = 181U;

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
    msg.setTimeStamp(0.6472506680084785);
    msg.setSource(4446U);
    msg.setSourceEntity(238U);
    msg.setDestination(10437U);
    msg.setDestinationEntity(35U);
    msg.name.assign("ELHXDKXVPYKRSQGEDXHTYRNRPQUJZJQUHIJRIXTUIYXECDBNSVOXZK");
    msg.value = 179U;

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
    msg.setTimeStamp(0.447891756239181);
    msg.setSource(16099U);
    msg.setSourceEntity(204U);
    msg.setDestination(40053U);
    msg.setDestinationEntity(161U);
    msg.id = 23U;
    msg.period = 980458225U;
    msg.duty_cycle = 2586846063U;

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
    msg.setTimeStamp(0.8016421116246153);
    msg.setSource(59419U);
    msg.setSourceEntity(24U);
    msg.setDestination(34592U);
    msg.setDestinationEntity(197U);
    msg.id = 188U;
    msg.period = 3419792410U;
    msg.duty_cycle = 2910873698U;

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
    msg.setTimeStamp(0.37553710592116374);
    msg.setSource(23092U);
    msg.setSourceEntity(55U);
    msg.setDestination(9198U);
    msg.setDestinationEntity(124U);
    msg.id = 239U;
    msg.period = 1311479057U;
    msg.duty_cycle = 2234435994U;

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
    msg.setTimeStamp(0.43481150115327116);
    msg.setSource(2982U);
    msg.setSourceEntity(29U);
    msg.setDestination(53580U);
    msg.setDestinationEntity(25U);
    msg.id = 19U;
    msg.period = 3851358414U;
    msg.duty_cycle = 2446947480U;

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
    msg.setTimeStamp(0.9577640299839337);
    msg.setSource(4148U);
    msg.setSourceEntity(101U);
    msg.setDestination(17769U);
    msg.setDestinationEntity(196U);
    msg.id = 155U;
    msg.period = 1926540575U;
    msg.duty_cycle = 3222004172U;

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
    msg.setTimeStamp(0.9732968242740265);
    msg.setSource(18052U);
    msg.setSourceEntity(10U);
    msg.setDestination(5028U);
    msg.setDestinationEntity(173U);
    msg.id = 32U;
    msg.period = 3397714840U;
    msg.duty_cycle = 967085555U;

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
    msg.setTimeStamp(0.7313261704016314);
    msg.setSource(6758U);
    msg.setSourceEntity(165U);
    msg.setDestination(2004U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.04181552525340415;
    msg.lon = 0.6985866277843188;
    msg.height = 0.25580330675153184;
    msg.x = 0.09981626344616301;
    msg.y = 0.7382002492528532;
    msg.z = 0.8346882580405417;
    msg.phi = 0.15118905550855966;
    msg.theta = 0.8760279927796638;
    msg.psi = 0.08056527444179185;
    msg.u = 0.018457334683739002;
    msg.v = 0.427795430015929;
    msg.w = 0.5345750742589209;
    msg.vx = 0.8037671662104378;
    msg.vy = 0.8754460241013099;
    msg.vz = 0.12985778043932072;
    msg.p = 0.910893217779887;
    msg.q = 0.5061118462212604;
    msg.r = 0.2820139387178111;
    msg.depth = 0.5298991923329175;
    msg.alt = 0.09068117845196155;

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
    msg.setTimeStamp(0.5252021995411592);
    msg.setSource(39850U);
    msg.setSourceEntity(182U);
    msg.setDestination(34636U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.20767822705755334;
    msg.lon = 0.15918734930336098;
    msg.height = 0.6250864452729546;
    msg.x = 0.8031675253712288;
    msg.y = 0.8727108931957233;
    msg.z = 0.9798711667861867;
    msg.phi = 0.5266773178523465;
    msg.theta = 0.9330564034313797;
    msg.psi = 0.6191729219913436;
    msg.u = 0.2177170510748695;
    msg.v = 0.42338708508419665;
    msg.w = 0.9512213947028583;
    msg.vx = 0.6085833948477705;
    msg.vy = 0.4910504510092799;
    msg.vz = 0.8101559281000597;
    msg.p = 0.548326518860118;
    msg.q = 0.011196999749236158;
    msg.r = 0.7652176646849072;
    msg.depth = 0.39181481444928323;
    msg.alt = 0.977186219980041;

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
    msg.setTimeStamp(0.03615018457140717);
    msg.setSource(28552U);
    msg.setSourceEntity(252U);
    msg.setDestination(13687U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.8740704899268356;
    msg.lon = 0.947804343787096;
    msg.height = 0.6525851502729216;
    msg.x = 0.5470083126992892;
    msg.y = 0.10665482757393219;
    msg.z = 0.5569734368394835;
    msg.phi = 0.9203659872742528;
    msg.theta = 0.04650399410377093;
    msg.psi = 0.9741100660628635;
    msg.u = 0.42614036435417135;
    msg.v = 0.08459067132662923;
    msg.w = 0.08205207681266968;
    msg.vx = 0.8911195315296758;
    msg.vy = 0.8693371168474802;
    msg.vz = 0.9878412610097022;
    msg.p = 0.26495787792038206;
    msg.q = 0.009393999953041132;
    msg.r = 0.008713943964252957;
    msg.depth = 0.5397619368472376;
    msg.alt = 0.5780740921432989;

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
    msg.setTimeStamp(0.8119226768544828);
    msg.setSource(8291U);
    msg.setSourceEntity(221U);
    msg.setDestination(18675U);
    msg.setDestinationEntity(49U);
    msg.x = 0.7951125970995683;
    msg.y = 0.17815267706516147;
    msg.z = 0.7051962476591662;

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
    msg.setTimeStamp(0.4627825351176983);
    msg.setSource(59582U);
    msg.setSourceEntity(2U);
    msg.setDestination(27037U);
    msg.setDestinationEntity(25U);
    msg.x = 0.609965234294565;
    msg.y = 0.6975074601528795;
    msg.z = 0.13506662259897628;

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
    msg.setTimeStamp(0.9772139188290866);
    msg.setSource(48654U);
    msg.setSourceEntity(184U);
    msg.setDestination(47155U);
    msg.setDestinationEntity(29U);
    msg.x = 0.9790070877336579;
    msg.y = 0.8022441275549977;
    msg.z = 0.845895022673852;

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
    msg.setTimeStamp(0.0019281132756733266);
    msg.setSource(38821U);
    msg.setSourceEntity(196U);
    msg.setDestination(27428U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8539630320412798;

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
    msg.setTimeStamp(0.3079781860628804);
    msg.setSource(39421U);
    msg.setSourceEntity(39U);
    msg.setDestination(9994U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8409568424478348;

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
    msg.setTimeStamp(0.8626083322761948);
    msg.setSource(14986U);
    msg.setSourceEntity(221U);
    msg.setDestination(520U);
    msg.setDestinationEntity(186U);
    msg.value = 0.22625576524252877;

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
    msg.setTimeStamp(0.803738743559253);
    msg.setSource(48332U);
    msg.setSourceEntity(90U);
    msg.setDestination(3194U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5323532053993381;

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
    msg.setTimeStamp(0.9231491060879998);
    msg.setSource(46375U);
    msg.setSourceEntity(65U);
    msg.setDestination(45858U);
    msg.setDestinationEntity(234U);
    msg.value = 0.069752727323523;

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
    msg.setTimeStamp(0.5756894145748259);
    msg.setSource(19995U);
    msg.setSourceEntity(169U);
    msg.setDestination(58839U);
    msg.setDestinationEntity(84U);
    msg.value = 0.8558083097090057;

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
    msg.setTimeStamp(0.19099930919562624);
    msg.setSource(18998U);
    msg.setSourceEntity(193U);
    msg.setDestination(35950U);
    msg.setDestinationEntity(78U);
    msg.x = 0.8317721534939901;
    msg.y = 0.7924663178000546;
    msg.z = 0.8577555020017232;
    msg.phi = 0.8914566843919399;
    msg.theta = 0.6743757638369916;
    msg.psi = 0.06478468936335491;
    msg.p = 0.9505336892429496;
    msg.q = 0.07577229605390334;
    msg.r = 0.9889106313037834;
    msg.u = 0.3194964210361958;
    msg.v = 0.9747799239927574;
    msg.w = 0.10946267774277996;
    msg.bias_psi = 0.01423491869595106;
    msg.bias_r = 0.8377252173486315;

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
    msg.setTimeStamp(0.4196413476536772);
    msg.setSource(51398U);
    msg.setSourceEntity(48U);
    msg.setDestination(37461U);
    msg.setDestinationEntity(61U);
    msg.x = 0.687530291744515;
    msg.y = 0.2540777379267608;
    msg.z = 0.5008981992981674;
    msg.phi = 0.6109124758641499;
    msg.theta = 0.0579964193657484;
    msg.psi = 0.07404737669541184;
    msg.p = 0.10730906530870676;
    msg.q = 0.3287306301957489;
    msg.r = 0.6052951880240023;
    msg.u = 0.2989586328037779;
    msg.v = 0.2394453189504654;
    msg.w = 0.2489492449455899;
    msg.bias_psi = 0.310891679974691;
    msg.bias_r = 0.4303958023062592;

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
    msg.setTimeStamp(0.2357244092647407);
    msg.setSource(27095U);
    msg.setSourceEntity(217U);
    msg.setDestination(15895U);
    msg.setDestinationEntity(160U);
    msg.x = 0.9628599493887176;
    msg.y = 0.8263223483247669;
    msg.z = 0.8533302930673646;
    msg.phi = 0.01861164534458004;
    msg.theta = 0.9085864285212191;
    msg.psi = 0.35876964201711437;
    msg.p = 0.9316247828909139;
    msg.q = 0.9216948262696656;
    msg.r = 0.9225282040449209;
    msg.u = 0.2649883497915574;
    msg.v = 0.2987839025392719;
    msg.w = 0.9690397976261568;
    msg.bias_psi = 0.4519456476247552;
    msg.bias_r = 0.38828941009483986;

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
    msg.setTimeStamp(0.9098823407712667);
    msg.setSource(33034U);
    msg.setSourceEntity(48U);
    msg.setDestination(37039U);
    msg.setDestinationEntity(201U);
    msg.bias_psi = 0.6281061368393874;
    msg.bias_r = 0.8646150150483243;
    msg.cog = 0.4575844342067249;
    msg.cyaw = 0.7399882094313315;
    msg.lbl_rej_level = 0.4330058547926169;
    msg.gps_rej_level = 0.07167094904413462;
    msg.custom_x = 0.19864514499998176;
    msg.custom_y = 0.081482365031608;
    msg.custom_z = 0.6623908248787559;

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
    msg.setTimeStamp(0.3544495413992008);
    msg.setSource(25207U);
    msg.setSourceEntity(49U);
    msg.setDestination(20354U);
    msg.setDestinationEntity(88U);
    msg.bias_psi = 0.8638489823332688;
    msg.bias_r = 0.6992500710088358;
    msg.cog = 0.7845113406401274;
    msg.cyaw = 0.46569093832624875;
    msg.lbl_rej_level = 0.6584640581302122;
    msg.gps_rej_level = 0.7154478839782363;
    msg.custom_x = 0.43327480703938015;
    msg.custom_y = 0.6665528713742556;
    msg.custom_z = 0.28039858385148264;

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
    msg.setTimeStamp(0.655144923802947);
    msg.setSource(37641U);
    msg.setSourceEntity(45U);
    msg.setDestination(25650U);
    msg.setDestinationEntity(128U);
    msg.bias_psi = 0.8476613848327953;
    msg.bias_r = 0.13643487388407727;
    msg.cog = 0.4635981155146869;
    msg.cyaw = 0.5493858664001464;
    msg.lbl_rej_level = 0.1738607374971567;
    msg.gps_rej_level = 0.7947288574115896;
    msg.custom_x = 0.7698322254401405;
    msg.custom_y = 0.9933505842657233;
    msg.custom_z = 0.9165877720476147;

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
    msg.setTimeStamp(0.055134116311341574);
    msg.setSource(19258U);
    msg.setSourceEntity(166U);
    msg.setDestination(36077U);
    msg.setDestinationEntity(116U);
    msg.utc_time = 0.6925931720691606;
    msg.reason = 184U;

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
    msg.setTimeStamp(0.09579178792774856);
    msg.setSource(39678U);
    msg.setSourceEntity(9U);
    msg.setDestination(44433U);
    msg.setDestinationEntity(209U);
    msg.utc_time = 0.3986507447896146;
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
    msg.setTimeStamp(0.8828909363026568);
    msg.setSource(61940U);
    msg.setSourceEntity(155U);
    msg.setDestination(23706U);
    msg.setDestinationEntity(154U);
    msg.utc_time = 0.8225754949757341;
    msg.reason = 105U;

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
    msg.setTimeStamp(0.5617834142396795);
    msg.setSource(17574U);
    msg.setSourceEntity(210U);
    msg.setDestination(12068U);
    msg.setDestinationEntity(94U);
    msg.id = 135U;
    msg.range = 0.2427062047662376;
    msg.acceptance = 84U;

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
    msg.setTimeStamp(0.1589012775894305);
    msg.setSource(12413U);
    msg.setSourceEntity(196U);
    msg.setDestination(32947U);
    msg.setDestinationEntity(14U);
    msg.id = 138U;
    msg.range = 0.06915307656981662;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.6937695062949814);
    msg.setSource(3073U);
    msg.setSourceEntity(35U);
    msg.setDestination(37945U);
    msg.setDestinationEntity(17U);
    msg.id = 110U;
    msg.range = 0.6670577407636487;
    msg.acceptance = 186U;

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
    msg.setTimeStamp(0.5494559380096302);
    msg.setSource(15765U);
    msg.setSourceEntity(48U);
    msg.setDestination(51543U);
    msg.setDestinationEntity(204U);
    msg.type = 189U;
    msg.reason = 197U;
    msg.value = 0.7900867155744008;
    msg.timestep = 0.6992779841025879;

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
    msg.setTimeStamp(0.48487766206503347);
    msg.setSource(61260U);
    msg.setSourceEntity(244U);
    msg.setDestination(36166U);
    msg.setDestinationEntity(247U);
    msg.type = 171U;
    msg.reason = 237U;
    msg.value = 0.6500901861683182;
    msg.timestep = 0.9086950239422663;

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
    msg.setTimeStamp(0.3697467886105159);
    msg.setSource(1146U);
    msg.setSourceEntity(125U);
    msg.setDestination(17170U);
    msg.setDestinationEntity(208U);
    msg.type = 161U;
    msg.reason = 187U;
    msg.value = 0.25673529402344486;
    msg.timestep = 0.15197579226058422;

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
    msg.setTimeStamp(0.9199797257018072);
    msg.setSource(37430U);
    msg.setSourceEntity(37U);
    msg.setDestination(37199U);
    msg.setDestinationEntity(115U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DWPLLHNYNXXACUJOARKWRXFQRDTTJZNIYKITBHZBXGSDHTWGHWIUZEZPCOLRKXXYPRSVRBDJEBAUQDBHBTSPQPNEAFOYSCNPONWKRGURFHMAGVEJWMZSYQZVTDMAXFOPZHBCQGQVBGMEZCFTHMSRNULJKYAHLTXSJAEYGFVPLVKASYTKJEVOWYTIZYPDVNWFIGCUBFIMSGLNQWFIOJOULBWMKEUERIQUH");
    tmp_msg_0.lat = 0.05377398834334324;
    tmp_msg_0.lon = 0.7416421259464849;
    tmp_msg_0.depth = 0.6172992119403348;
    tmp_msg_0.query_channel = 138U;
    tmp_msg_0.reply_channel = 74U;
    tmp_msg_0.transponder_delay = 99U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7453436147745448;
    msg.y = 0.38135612802964847;
    msg.var_x = 0.4440333069129486;
    msg.var_y = 0.5474974716378105;
    msg.distance = 0.18546910127149607;

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
    msg.setTimeStamp(0.740679086827748);
    msg.setSource(39378U);
    msg.setSourceEntity(42U);
    msg.setDestination(26714U);
    msg.setDestinationEntity(162U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QQIRDZPDBHRSTYPGMUAJQBNOPFTLVURMYAOBLIFNEPJZFACKEZVMMHCFBSCEUEHBAQPDFXQFKRPIEVIXWITHSGKDXLYITAUZEUHJQKOOICGQJOVDYDEZOLHYEGCJPAVTTKACDWYHCGMQTLBNHMIPATRROURINKNMKQNNROXBTZGYHDWZJXFXSGKE");
    tmp_msg_0.lat = 0.20174886181275953;
    tmp_msg_0.lon = 0.05497087111087806;
    tmp_msg_0.depth = 0.7692496362010507;
    tmp_msg_0.query_channel = 111U;
    tmp_msg_0.reply_channel = 191U;
    tmp_msg_0.transponder_delay = 239U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.22974747814802965;
    msg.y = 0.543400896946414;
    msg.var_x = 0.9950341326347808;
    msg.var_y = 0.026178975897966472;
    msg.distance = 0.9365271795156526;

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
    msg.setTimeStamp(0.11018030048660321);
    msg.setSource(157U);
    msg.setSourceEntity(61U);
    msg.setDestination(51569U);
    msg.setDestinationEntity(15U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YEKJPSGWNHDSJXDBHCESDBNVIAKLNBCDIMLZNSOZTEMCKW");
    tmp_msg_0.lat = 0.8567812705597941;
    tmp_msg_0.lon = 0.6639051357067273;
    tmp_msg_0.depth = 0.3700634242514991;
    tmp_msg_0.query_channel = 152U;
    tmp_msg_0.reply_channel = 144U;
    tmp_msg_0.transponder_delay = 163U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.017107067672583298;
    msg.y = 0.6797703895534499;
    msg.var_x = 0.7496963147149387;
    msg.var_y = 0.23222321088655995;
    msg.distance = 0.7963863812847745;

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
    msg.setTimeStamp(0.7962050830829692);
    msg.setSource(1361U);
    msg.setSourceEntity(176U);
    msg.setDestination(23353U);
    msg.setDestinationEntity(145U);
    msg.state = 113U;

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
    msg.setTimeStamp(0.641335711441882);
    msg.setSource(2365U);
    msg.setSourceEntity(165U);
    msg.setDestination(3310U);
    msg.setDestinationEntity(129U);
    msg.state = 94U;

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
    msg.setTimeStamp(0.5428871285712897);
    msg.setSource(13649U);
    msg.setSourceEntity(184U);
    msg.setDestination(61070U);
    msg.setDestinationEntity(147U);
    msg.state = 153U;

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
    msg.setTimeStamp(0.1908481822778153);
    msg.setSource(7059U);
    msg.setSourceEntity(72U);
    msg.setDestination(15854U);
    msg.setDestinationEntity(175U);
    msg.x = 0.14779042011219978;
    msg.y = 0.9014122296848552;
    msg.z = 0.12480098983704857;

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
    msg.setTimeStamp(0.028847548953406688);
    msg.setSource(30015U);
    msg.setSourceEntity(49U);
    msg.setDestination(22531U);
    msg.setDestinationEntity(99U);
    msg.x = 0.09070149363457958;
    msg.y = 0.030987485202532583;
    msg.z = 0.5367266823743828;

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
    msg.setTimeStamp(0.9033984126849006);
    msg.setSource(37982U);
    msg.setSourceEntity(169U);
    msg.setDestination(4575U);
    msg.setDestinationEntity(91U);
    msg.x = 0.881109020192856;
    msg.y = 0.5661061437233328;
    msg.z = 0.29677552781714045;

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
    msg.setTimeStamp(0.692004999047727);
    msg.setSource(5321U);
    msg.setSourceEntity(63U);
    msg.setDestination(17272U);
    msg.setDestinationEntity(18U);
    msg.va = 0.5027012910178017;
    msg.aoa = 0.2678067662406127;
    msg.ssa = 0.3762517199668409;

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
    msg.setTimeStamp(0.11075819177721369);
    msg.setSource(53451U);
    msg.setSourceEntity(121U);
    msg.setDestination(23560U);
    msg.setDestinationEntity(81U);
    msg.va = 0.337576177085542;
    msg.aoa = 0.5397953959053136;
    msg.ssa = 0.5181193904156527;

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
    msg.setTimeStamp(0.702235209761728);
    msg.setSource(64586U);
    msg.setSourceEntity(166U);
    msg.setDestination(33966U);
    msg.setDestinationEntity(13U);
    msg.va = 0.8954202473754554;
    msg.aoa = 0.06727426283391513;
    msg.ssa = 0.27068232678665516;

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
    msg.setTimeStamp(0.023535869133468057);
    msg.setSource(20800U);
    msg.setSourceEntity(163U);
    msg.setDestination(48149U);
    msg.setDestinationEntity(45U);
    msg.value = 0.6448942061479425;

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
    msg.setTimeStamp(0.7461613112407409);
    msg.setSource(34342U);
    msg.setSourceEntity(32U);
    msg.setDestination(2846U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8640162062979971;

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
    msg.setTimeStamp(0.04121672004550048);
    msg.setSource(15166U);
    msg.setSourceEntity(123U);
    msg.setDestination(23929U);
    msg.setDestinationEntity(91U);
    msg.value = 0.6097634825567912;

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
    msg.setTimeStamp(0.370089704683112);
    msg.setSource(5544U);
    msg.setSourceEntity(230U);
    msg.setDestination(65166U);
    msg.setDestinationEntity(71U);
    msg.value = 0.6269238548709515;
    msg.z_units = 236U;

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
    msg.setTimeStamp(0.5300684903212536);
    msg.setSource(53903U);
    msg.setSourceEntity(191U);
    msg.setDestination(61248U);
    msg.setDestinationEntity(173U);
    msg.value = 0.2541669353255698;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.8077194572742624);
    msg.setSource(17486U);
    msg.setSourceEntity(146U);
    msg.setDestination(62943U);
    msg.setDestinationEntity(69U);
    msg.value = 0.6764405590242857;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.3943387151679353);
    msg.setSource(4534U);
    msg.setSourceEntity(166U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(232U);
    msg.value = 0.8574681207206656;
    msg.speed_units = 251U;

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
    msg.setTimeStamp(0.8318602094428161);
    msg.setSource(41225U);
    msg.setSourceEntity(8U);
    msg.setDestination(41236U);
    msg.setDestinationEntity(194U);
    msg.value = 0.3128718110858093;
    msg.speed_units = 18U;

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
    msg.setTimeStamp(0.5599661633254283);
    msg.setSource(60036U);
    msg.setSourceEntity(148U);
    msg.setDestination(7904U);
    msg.setDestinationEntity(247U);
    msg.value = 0.7543577457179441;
    msg.speed_units = 229U;

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
    msg.setTimeStamp(0.2349214650647834);
    msg.setSource(7297U);
    msg.setSourceEntity(51U);
    msg.setDestination(14552U);
    msg.setDestinationEntity(121U);
    msg.value = 0.6122751315473625;

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
    msg.setTimeStamp(0.019544153442088485);
    msg.setSource(23734U);
    msg.setSourceEntity(28U);
    msg.setDestination(29808U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7391864935555681;

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
    msg.setTimeStamp(0.7774125147330817);
    msg.setSource(26382U);
    msg.setSourceEntity(206U);
    msg.setDestination(4095U);
    msg.setDestinationEntity(212U);
    msg.value = 0.42842858139751006;

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
    msg.setTimeStamp(0.6436198057872913);
    msg.setSource(47114U);
    msg.setSourceEntity(1U);
    msg.setDestination(55795U);
    msg.setDestinationEntity(41U);
    msg.value = 0.07309011299677493;

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
    msg.setTimeStamp(0.460640734709847);
    msg.setSource(38942U);
    msg.setSourceEntity(109U);
    msg.setDestination(11082U);
    msg.setDestinationEntity(151U);
    msg.value = 0.054916295874120946;

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
    msg.setTimeStamp(0.8690022331037371);
    msg.setSource(31567U);
    msg.setSourceEntity(192U);
    msg.setDestination(59787U);
    msg.setDestinationEntity(55U);
    msg.value = 0.38276875685437173;

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
    msg.setTimeStamp(0.7936502501379507);
    msg.setSource(38400U);
    msg.setSourceEntity(248U);
    msg.setDestination(52193U);
    msg.setDestinationEntity(195U);
    msg.value = 0.476451838485873;

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
    msg.setTimeStamp(0.012145173960947275);
    msg.setSource(51695U);
    msg.setSourceEntity(58U);
    msg.setDestination(23700U);
    msg.setDestinationEntity(247U);
    msg.value = 0.04330974986295966;

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
    msg.setTimeStamp(0.5457884918963287);
    msg.setSource(43125U);
    msg.setSourceEntity(189U);
    msg.setDestination(32048U);
    msg.setDestinationEntity(78U);
    msg.value = 0.6917184299915377;

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
    msg.setTimeStamp(0.5838436466585982);
    msg.setSource(10719U);
    msg.setSourceEntity(203U);
    msg.setDestination(23494U);
    msg.setDestinationEntity(72U);
    msg.path_ref = 692192955U;
    msg.start_lat = 0.04783011939316528;
    msg.start_lon = 0.5616238016781545;
    msg.start_z = 0.05037578933694953;
    msg.start_z_units = 185U;
    msg.end_lat = 0.1578894472728435;
    msg.end_lon = 0.8061447422521978;
    msg.end_z = 0.6479611232764418;
    msg.end_z_units = 7U;
    msg.speed = 0.5604588192876179;
    msg.speed_units = 14U;
    msg.lradius = 0.17675471420993705;
    msg.flags = 107U;

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
    msg.setTimeStamp(0.04332934337801231);
    msg.setSource(39695U);
    msg.setSourceEntity(158U);
    msg.setDestination(30323U);
    msg.setDestinationEntity(2U);
    msg.path_ref = 2761488295U;
    msg.start_lat = 0.6705628786778673;
    msg.start_lon = 0.9867960404264633;
    msg.start_z = 0.7936852616073451;
    msg.start_z_units = 179U;
    msg.end_lat = 0.5334171452716144;
    msg.end_lon = 0.8539941337938619;
    msg.end_z = 0.39320062399932076;
    msg.end_z_units = 82U;
    msg.speed = 0.709687486677928;
    msg.speed_units = 63U;
    msg.lradius = 0.22138463827303412;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.4539965900302999);
    msg.setSource(58181U);
    msg.setSourceEntity(148U);
    msg.setDestination(11073U);
    msg.setDestinationEntity(32U);
    msg.path_ref = 1272410851U;
    msg.start_lat = 0.17876815090029707;
    msg.start_lon = 0.04033683018604839;
    msg.start_z = 0.3495777371680844;
    msg.start_z_units = 135U;
    msg.end_lat = 0.30211085565255225;
    msg.end_lon = 0.19588612156806573;
    msg.end_z = 0.2670548183439061;
    msg.end_z_units = 45U;
    msg.speed = 0.6900450981179281;
    msg.speed_units = 64U;
    msg.lradius = 0.7644690191983005;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.9066721554646622);
    msg.setSource(63568U);
    msg.setSourceEntity(62U);
    msg.setDestination(28463U);
    msg.setDestinationEntity(109U);
    msg.x = 0.17598310849147292;
    msg.y = 0.4122588902423109;
    msg.z = 0.4444135546789766;
    msg.k = 0.19710271174017657;
    msg.m = 0.21360595832340812;
    msg.n = 0.9121393487174745;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.2278949011145428);
    msg.setSource(49564U);
    msg.setSourceEntity(212U);
    msg.setDestination(10433U);
    msg.setDestinationEntity(105U);
    msg.x = 0.40759780581194016;
    msg.y = 0.33777285013836333;
    msg.z = 0.45119705244925024;
    msg.k = 0.21220900954376598;
    msg.m = 0.1585593700027691;
    msg.n = 0.4163865219798586;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.5417430977854455);
    msg.setSource(45060U);
    msg.setSourceEntity(73U);
    msg.setDestination(21017U);
    msg.setDestinationEntity(71U);
    msg.x = 0.10876543958069318;
    msg.y = 0.02266425084989765;
    msg.z = 0.8578418913396298;
    msg.k = 0.7447229331763955;
    msg.m = 0.7004119181243097;
    msg.n = 0.26547572724986823;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.3729552481013546);
    msg.setSource(18685U);
    msg.setSourceEntity(192U);
    msg.setDestination(19936U);
    msg.setDestinationEntity(213U);
    msg.value = 0.765521978712925;

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
    msg.setTimeStamp(0.535101288456529);
    msg.setSource(56682U);
    msg.setSourceEntity(181U);
    msg.setDestination(28785U);
    msg.setDestinationEntity(137U);
    msg.value = 0.10522246649489941;

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
    msg.setTimeStamp(0.9173907015631739);
    msg.setSource(3081U);
    msg.setSourceEntity(19U);
    msg.setDestination(21503U);
    msg.setDestinationEntity(81U);
    msg.value = 0.09809654333032036;

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
    msg.setTimeStamp(0.9388625627480566);
    msg.setSource(49857U);
    msg.setSourceEntity(206U);
    msg.setDestination(21756U);
    msg.setDestinationEntity(200U);
    msg.u = 0.2065114839669565;
    msg.v = 0.35672449922689387;
    msg.w = 0.7749998982723209;
    msg.p = 0.4938204883132713;
    msg.q = 0.1602644489700239;
    msg.r = 0.5016338437552244;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.9320972994934157);
    msg.setSource(55281U);
    msg.setSourceEntity(180U);
    msg.setDestination(31257U);
    msg.setDestinationEntity(58U);
    msg.u = 0.8086114503609951;
    msg.v = 0.26721701993383506;
    msg.w = 0.470346212904289;
    msg.p = 0.6834470367925447;
    msg.q = 0.5935753371225582;
    msg.r = 0.1920849681663288;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.551202126452051);
    msg.setSource(49736U);
    msg.setSourceEntity(53U);
    msg.setDestination(26681U);
    msg.setDestinationEntity(24U);
    msg.u = 0.15583949536511388;
    msg.v = 0.6656721406451132;
    msg.w = 0.600537925154653;
    msg.p = 0.43981798950502693;
    msg.q = 0.6076373039345964;
    msg.r = 0.9037137560575702;
    msg.flags = 28U;

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
    msg.setTimeStamp(0.2939311334736594);
    msg.setSource(25730U);
    msg.setSourceEntity(95U);
    msg.setDestination(13140U);
    msg.setDestinationEntity(235U);
    msg.path_ref = 2458100879U;
    msg.start_lat = 0.49495647951059607;
    msg.start_lon = 0.7521862798541498;
    msg.start_z = 0.08980990950324741;
    msg.start_z_units = 8U;
    msg.end_lat = 0.5925582208830389;
    msg.end_lon = 0.18355271133842332;
    msg.end_z = 0.48488355646295367;
    msg.end_z_units = 228U;
    msg.lradius = 0.3940620479558825;
    msg.flags = 204U;
    msg.x = 0.5370235616563024;
    msg.y = 0.8234954720226915;
    msg.z = 0.6303245378031922;
    msg.vx = 0.8366006140208967;
    msg.vy = 0.8136030297311626;
    msg.vz = 0.7592816840456367;
    msg.course_error = 0.8668844165055193;
    msg.eta = 384U;

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
    msg.setTimeStamp(0.14306617526755372);
    msg.setSource(20003U);
    msg.setSourceEntity(19U);
    msg.setDestination(47275U);
    msg.setDestinationEntity(34U);
    msg.path_ref = 14228995U;
    msg.start_lat = 0.7420119311462553;
    msg.start_lon = 0.08629845931693536;
    msg.start_z = 0.27086234931027275;
    msg.start_z_units = 165U;
    msg.end_lat = 0.681041294403969;
    msg.end_lon = 0.3627588826362379;
    msg.end_z = 0.3341438744042352;
    msg.end_z_units = 169U;
    msg.lradius = 0.10676022241323835;
    msg.flags = 72U;
    msg.x = 0.39139313226066685;
    msg.y = 0.12628448616141008;
    msg.z = 0.38163069639013547;
    msg.vx = 0.49627378912633946;
    msg.vy = 0.7680073075303505;
    msg.vz = 0.3446286203792511;
    msg.course_error = 0.9585778754811243;
    msg.eta = 19592U;

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
    msg.setTimeStamp(0.853248884185466);
    msg.setSource(53561U);
    msg.setSourceEntity(60U);
    msg.setDestination(62859U);
    msg.setDestinationEntity(234U);
    msg.path_ref = 944081687U;
    msg.start_lat = 0.8130288835574001;
    msg.start_lon = 0.32840806809783674;
    msg.start_z = 0.8337037444931266;
    msg.start_z_units = 17U;
    msg.end_lat = 0.032485175075093964;
    msg.end_lon = 0.7252542794659195;
    msg.end_z = 0.46855071788324243;
    msg.end_z_units = 220U;
    msg.lradius = 0.8861601937992138;
    msg.flags = 52U;
    msg.x = 0.8272952924067916;
    msg.y = 0.6107806907765548;
    msg.z = 0.9091642570980399;
    msg.vx = 0.6293311684350064;
    msg.vy = 0.5867514805624335;
    msg.vz = 0.17895740334472132;
    msg.course_error = 0.49051996537928777;
    msg.eta = 35133U;

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
    msg.setTimeStamp(0.31699484447735893);
    msg.setSource(4475U);
    msg.setSourceEntity(168U);
    msg.setDestination(18559U);
    msg.setDestinationEntity(155U);
    msg.k = 0.8187477686482229;
    msg.m = 0.08778770300868777;
    msg.n = 0.1880410049080774;

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
    msg.setTimeStamp(0.7715938601751591);
    msg.setSource(25377U);
    msg.setSourceEntity(66U);
    msg.setDestination(64297U);
    msg.setDestinationEntity(34U);
    msg.k = 0.09934843802017534;
    msg.m = 0.029432112241919106;
    msg.n = 0.9227831564269646;

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
    msg.setTimeStamp(0.16734052679384892);
    msg.setSource(46928U);
    msg.setSourceEntity(204U);
    msg.setDestination(31222U);
    msg.setDestinationEntity(192U);
    msg.k = 0.5834244882670997;
    msg.m = 0.9105643643893145;
    msg.n = 0.45066021493118025;

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
    msg.setTimeStamp(0.9244807852803949);
    msg.setSource(61555U);
    msg.setSourceEntity(112U);
    msg.setDestination(5988U);
    msg.setDestinationEntity(1U);
    msg.p = 0.3076342275249051;
    msg.i = 0.5561237397197263;
    msg.d = 0.5433937677744437;
    msg.a = 0.027071975499813217;

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
    msg.setTimeStamp(0.9082867336319599);
    msg.setSource(18529U);
    msg.setSourceEntity(196U);
    msg.setDestination(33294U);
    msg.setDestinationEntity(124U);
    msg.p = 0.04541116223670316;
    msg.i = 0.7210683327656475;
    msg.d = 0.12648316059595077;
    msg.a = 0.32418766341536154;

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
    msg.setTimeStamp(0.010590847015980454);
    msg.setSource(62442U);
    msg.setSourceEntity(140U);
    msg.setDestination(60123U);
    msg.setDestinationEntity(247U);
    msg.p = 0.09408992408378303;
    msg.i = 0.09875036984849128;
    msg.d = 0.9503506996187089;
    msg.a = 0.607489615023216;

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
    msg.setTimeStamp(0.6168735425267587);
    msg.setSource(33475U);
    msg.setSourceEntity(201U);
    msg.setDestination(27255U);
    msg.setDestinationEntity(98U);
    msg.op = 38U;

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
    msg.setTimeStamp(0.49004738175398577);
    msg.setSource(29505U);
    msg.setSourceEntity(105U);
    msg.setDestination(10294U);
    msg.setDestinationEntity(139U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.07960731803002186);
    msg.setSource(56848U);
    msg.setSourceEntity(9U);
    msg.setDestination(32246U);
    msg.setDestinationEntity(169U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.37996348137544445);
    msg.setSource(31111U);
    msg.setSourceEntity(236U);
    msg.setDestination(49265U);
    msg.setDestinationEntity(38U);
    msg.x = 0.6808846468525461;
    msg.y = 0.08912189998850806;
    msg.z = 0.49770948727565867;
    msg.vx = 0.47336945393244734;
    msg.vy = 0.6592468430664117;
    msg.vz = 0.5103887681316052;
    msg.ax = 0.6081309190973033;
    msg.ay = 0.6389834607998457;
    msg.az = 0.29460725604757176;
    msg.flags = 55429U;

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
    msg.setTimeStamp(0.2643660227931688);
    msg.setSource(53210U);
    msg.setSourceEntity(165U);
    msg.setDestination(47811U);
    msg.setDestinationEntity(119U);
    msg.x = 0.5927107705085989;
    msg.y = 0.6084908578223868;
    msg.z = 0.2873712690900615;
    msg.vx = 0.9313297841387105;
    msg.vy = 0.5320342858060693;
    msg.vz = 0.26019198113725284;
    msg.ax = 0.5294567283867105;
    msg.ay = 0.7187654512989735;
    msg.az = 0.9898857358897032;
    msg.flags = 7472U;

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
    msg.setTimeStamp(0.9846222901538455);
    msg.setSource(9738U);
    msg.setSourceEntity(151U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(157U);
    msg.x = 0.5455657469008308;
    msg.y = 0.1522125361320148;
    msg.z = 0.6866071538265712;
    msg.vx = 0.6624386660718351;
    msg.vy = 0.08140141925370337;
    msg.vz = 0.5133791293824189;
    msg.ax = 0.9748637538036488;
    msg.ay = 0.02444147392610463;
    msg.az = 0.3383481746310658;
    msg.flags = 16238U;

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
    msg.setTimeStamp(0.15681469806105885);
    msg.setSource(63070U);
    msg.setSourceEntity(1U);
    msg.setDestination(43969U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0017181319088314106;

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
    msg.setTimeStamp(0.7252473775370701);
    msg.setSource(48293U);
    msg.setSourceEntity(164U);
    msg.setDestination(49788U);
    msg.setDestinationEntity(245U);
    msg.value = 0.00945868739122635;

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
    msg.setTimeStamp(0.2510397052789549);
    msg.setSource(43395U);
    msg.setSourceEntity(66U);
    msg.setDestination(31560U);
    msg.setDestinationEntity(198U);
    msg.value = 0.40715799392825136;

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
    msg.setTimeStamp(0.696504352588342);
    msg.setSource(12453U);
    msg.setSourceEntity(221U);
    msg.setDestination(34764U);
    msg.setDestinationEntity(96U);
    msg.timeout = 10491U;
    msg.lat = 0.7580164008488558;
    msg.lon = 0.6021421694716622;
    msg.z = 0.7938927217615414;
    msg.z_units = 119U;
    msg.speed = 0.6846060103452836;
    msg.speed_units = 228U;
    msg.roll = 0.1980228589703934;
    msg.pitch = 0.6633549707932461;
    msg.yaw = 0.7802257641549456;
    msg.custom.assign("YWVDAPLZIPTUISUPCUQBCJJYLFLSRBVIKWFNDOKVGAMAOEWMHMPADLSMHRHNOXSHTDSCOAYHASJWLKCTEKQONKEIGMQBBTOVZCTPGTXDMJZBHGFGWOP");

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
    msg.setTimeStamp(0.45838367631043153);
    msg.setSource(4415U);
    msg.setSourceEntity(69U);
    msg.setDestination(27826U);
    msg.setDestinationEntity(169U);
    msg.timeout = 41168U;
    msg.lat = 0.01420617352198994;
    msg.lon = 0.11679657127355603;
    msg.z = 0.2795918146957457;
    msg.z_units = 161U;
    msg.speed = 0.6081234532586749;
    msg.speed_units = 172U;
    msg.roll = 0.9911367299538347;
    msg.pitch = 0.8731233444724;
    msg.yaw = 0.2982995051570658;
    msg.custom.assign("DOPWZGDNMPFSTCAUTYGLKCSNUZIKCFLWWUXRKEVVSJMLGTVYDXVRNVWMWLSYCKBNFYSOGKLXIHTYOLXNZOHOIPCEIRJZRFRPZJLDQFPWMTSONSEBDZETBVAYFHIRDMJMDAKUXBEWUFKZIUVOUTGBVMPXPMLQRQJJYRQQORHGNWKIVISAAFGEPCC");

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
    msg.setTimeStamp(0.9462111537902756);
    msg.setSource(41022U);
    msg.setSourceEntity(77U);
    msg.setDestination(33216U);
    msg.setDestinationEntity(188U);
    msg.timeout = 55156U;
    msg.lat = 0.8026708502235694;
    msg.lon = 0.21391173705909905;
    msg.z = 0.30987631291533857;
    msg.z_units = 105U;
    msg.speed = 0.1342771354058756;
    msg.speed_units = 35U;
    msg.roll = 0.6737376824851247;
    msg.pitch = 0.07297029248834552;
    msg.yaw = 0.8021855611401554;
    msg.custom.assign("POFXHXQRIVXCYHCGAQCMMJNBDRRLANPOOBTMWQUOEBJDTSZKNFEYLQGUPGBFCILOFIEDULTPVPPCSLWQLDSEQUUFXFSGYVSVRBIJJFNJHMBRWTHTVTUYDOEDBIAGVJFKAYSVNRZOXWGPQDMJTEGQFYZSMHKZGWETPDROQWEKKGANLPVZOZBNZRCEKBPIWKXCWZRMVHXUS");

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
    msg.setTimeStamp(0.2556597954360672);
    msg.setSource(38684U);
    msg.setSourceEntity(26U);
    msg.setDestination(41503U);
    msg.setDestinationEntity(128U);
    msg.timeout = 20361U;
    msg.lat = 0.2991899299489704;
    msg.lon = 0.7423233559778301;
    msg.z = 0.009764306398295175;
    msg.z_units = 11U;
    msg.speed = 0.43043943974528387;
    msg.speed_units = 133U;
    msg.duration = 28566U;
    msg.radius = 0.42270744849803166;
    msg.flags = 33U;
    msg.custom.assign("RFOPWDQXYVWIKMGBLJYOHSGSUBXWFXDKHNDUQTYFHMWKIBFLMVICNKKGJZNYDBNTAXTVILIDOYPTJMFEUBZDZTVABRMATPHCDHWCKUCTPEJQMVBRHLKPPIGHNAYNYWYNNCMFPOGVXFZRQU");

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
    msg.setTimeStamp(0.19070533518649924);
    msg.setSource(3390U);
    msg.setSourceEntity(34U);
    msg.setDestination(62669U);
    msg.setDestinationEntity(97U);
    msg.timeout = 8392U;
    msg.lat = 0.9263230820637086;
    msg.lon = 0.5859013574568326;
    msg.z = 0.16844728432415645;
    msg.z_units = 40U;
    msg.speed = 0.9993159979081799;
    msg.speed_units = 113U;
    msg.duration = 32959U;
    msg.radius = 0.9191510687406144;
    msg.flags = 162U;
    msg.custom.assign("KYABTVOHETJPZ");

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
    msg.setTimeStamp(0.44644918044746096);
    msg.setSource(8855U);
    msg.setSourceEntity(121U);
    msg.setDestination(37581U);
    msg.setDestinationEntity(152U);
    msg.timeout = 33053U;
    msg.lat = 0.4969857270325746;
    msg.lon = 0.39160633787494525;
    msg.z = 0.198739592950123;
    msg.z_units = 36U;
    msg.speed = 0.19309490402135265;
    msg.speed_units = 4U;
    msg.duration = 58860U;
    msg.radius = 0.6717111608350773;
    msg.flags = 102U;
    msg.custom.assign("DAXAGFOJDMZKPHSOAVRMTWLACOGIBPIXKSSFRYHSRBHSHXIBNZNHSPIDVRFZESYLYJRFTJETNCORDXD");

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
    msg.setTimeStamp(0.5063120229784035);
    msg.setSource(27469U);
    msg.setSourceEntity(206U);
    msg.setDestination(53854U);
    msg.setDestinationEntity(58U);
    msg.custom.assign("RWTDCASUXDSYWZHTUGPFAMCAEKQRYFJHBUCOZIMORUTBVQINYBTYWKJXGKJRXKPVVVMBQLPANHWMJSXBLIOIAKIIZXTGDQNEEPTFYLCBCFMCGPVRHXXIOMPQUPQ");

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
    msg.setTimeStamp(0.8957681089681981);
    msg.setSource(54005U);
    msg.setSourceEntity(113U);
    msg.setDestination(47382U);
    msg.setDestinationEntity(242U);
    msg.custom.assign("NLFGHLYLANACROHLSZBIFDRGTZLJXEEYKRXIZAJQPDWMKPXZWUWUTJEGKRIESJMDOGVEYJEIBLUQCEXDLYTDKCTPVCBIRPANWOZKICJHWJGHSBMGTGGWFCTYIVFFCJPPQEVSUYDUTXOKSBSUFHRHTBYAMVETWDMGHPMQLZMYAODZVDQJTXWKMY");

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
    msg.setTimeStamp(0.4205867310162471);
    msg.setSource(3343U);
    msg.setSourceEntity(41U);
    msg.setDestination(30836U);
    msg.setDestinationEntity(36U);
    msg.custom.assign("LLOSGJUOWCFEJINGPTASAVGBRWKEKNCZTQVITFTDKXTE");

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
    msg.setTimeStamp(0.2398502372567034);
    msg.setSource(42021U);
    msg.setSourceEntity(123U);
    msg.setDestination(41057U);
    msg.setDestinationEntity(23U);
    msg.timeout = 32394U;
    msg.lat = 0.2516692636400615;
    msg.lon = 0.9960692248382197;
    msg.z = 0.8271254987457306;
    msg.z_units = 192U;
    msg.duration = 31231U;
    msg.speed = 0.7655642532889742;
    msg.speed_units = 47U;
    msg.type = 187U;
    msg.radius = 0.16381905666771845;
    msg.length = 0.15497623412828732;
    msg.bearing = 0.48461822433988644;
    msg.direction = 154U;
    msg.custom.assign("BVSJJFMJQKDZOFTHWOAGJTXPWLMJLBIKBPNPQRNAPOIWMDZPROZSOGNAVUBXYUXHBUOBMDQHNRSKETWCPSWRAMGNKXQQLZMEFBWFRWRXGYPFBJMEUNQVYNOIDZZSVGHFCTDIDDSMTTGACTKFVZGYKYBCKLUSLCEEHUGTNPRHHKEXPTSLIUYXVAIYAJONGFM");

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
    msg.setTimeStamp(0.5823655324248791);
    msg.setSource(50116U);
    msg.setSourceEntity(227U);
    msg.setDestination(40951U);
    msg.setDestinationEntity(63U);
    msg.timeout = 45889U;
    msg.lat = 0.8194359360078959;
    msg.lon = 0.27441291227820575;
    msg.z = 0.5711907917523672;
    msg.z_units = 119U;
    msg.duration = 884U;
    msg.speed = 0.42062182754834276;
    msg.speed_units = 252U;
    msg.type = 42U;
    msg.radius = 0.9809556428143078;
    msg.length = 0.0345893439058782;
    msg.bearing = 0.865559354213244;
    msg.direction = 157U;
    msg.custom.assign("XEAFSWXIFMOAEPDLBSFKRRU");

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
    msg.setTimeStamp(0.2505313870262834);
    msg.setSource(56822U);
    msg.setSourceEntity(95U);
    msg.setDestination(18347U);
    msg.setDestinationEntity(173U);
    msg.timeout = 54425U;
    msg.lat = 0.012044878693131644;
    msg.lon = 0.7240474711570979;
    msg.z = 0.5387211986140131;
    msg.z_units = 58U;
    msg.duration = 19656U;
    msg.speed = 0.7291504027001346;
    msg.speed_units = 201U;
    msg.type = 65U;
    msg.radius = 0.278819962588571;
    msg.length = 0.6266705660107614;
    msg.bearing = 0.5513599928024149;
    msg.direction = 227U;
    msg.custom.assign("UUAVNVXOQHNLDLKOGTTQPYSGMHRXQCDLLFGFFIVGHXMBMXWWLXPUVTUR");

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
    msg.setTimeStamp(0.26426613551344247);
    msg.setSource(42665U);
    msg.setSourceEntity(247U);
    msg.setDestination(6417U);
    msg.setDestinationEntity(128U);
    msg.duration = 60290U;
    msg.custom.assign("JBQJWNEGLXWDLWNEHOXZWYMDIJLWSHAZYINDQMGUDOGFNTLCAYBANGSXVMBXGJTORHYBLXBRVBDECOTKCJMJFZTEZCDPTQTKCL");

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
    msg.setTimeStamp(0.47139981583040325);
    msg.setSource(22310U);
    msg.setSourceEntity(138U);
    msg.setDestination(19234U);
    msg.setDestinationEntity(57U);
    msg.duration = 14090U;
    msg.custom.assign("QMUYIBOHZSZZTIEWWTXCUCCNJAYSDWPQSAGLMNHQQPMPEOZSIXWZPINVKMXIUUPEGOMSBGYVBKMIGJOHDHCCPAKVOMZVOKNXBJDRSTFSSQKXKWGEOUJIUZWECCABFQEKQZX");

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
    msg.setTimeStamp(0.4629675260758266);
    msg.setSource(32702U);
    msg.setSourceEntity(32U);
    msg.setDestination(13804U);
    msg.setDestinationEntity(196U);
    msg.duration = 13079U;
    msg.custom.assign("YDQQKXUAANDAWZPTAWZMEYLWJUPKQHXKUJHCWSIRVYUOMNSSZYNGHRQWKLFKLETDOMCBGSDCOSGJDQAYSIVHYPHTPGIPRCPYBXBVIMJFNPSKTUPZMQBXOGZORTBRANDFYLGMDFNBMRXSFKOEELIBYMVIEABQIMOCWTHAWHKWSNGJCIOVLQHZWFQDCBJURLSZVOAUEJNDNLBPCTHFUWGEZVKNPXUCLUMKFZLXVTORXREXCJ");

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
    msg.setTimeStamp(0.0889062192790333);
    msg.setSource(49890U);
    msg.setSourceEntity(228U);
    msg.setDestination(34844U);
    msg.setDestinationEntity(27U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7106609904302896;
    msg.control.set(tmp_msg_0);
    msg.duration = 1949U;
    msg.custom.assign("QDSUUOOAMJBXVYQDPFNMIEAEXECYRTYLIWRISWLETLKTMWVRLMLBYJPTHFOYCNOJSVQRBOUVGXVHFZCFAXUKKEELKHXDLHFGGZMRBVXDQNKUDUGZEIAGJOFRCQCHWBVWWHQPXZIDWABTPHXZSZUHBMMFJNTERG");

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
    msg.setTimeStamp(0.8652013494639512);
    msg.setSource(58510U);
    msg.setSourceEntity(82U);
    msg.setDestination(4651U);
    msg.setDestinationEntity(233U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.18946931165214265;
    msg.control.set(tmp_msg_0);
    msg.duration = 34843U;
    msg.custom.assign("RMWSAOBPTWPADAUASTAOQDZLYVBSKCKMKPIDWLJZNUAJACGKIQTEUTZEKXKADTZZNXFXPINEUCQYSHFLOKDYARCGWXDGDUMDSWCRMJGHFBLIQOWDPMJRQIHJQIRURYRKZMUSGKMFFFWYWVSYGRNQNPHVQLGYOIUFZLLVILXCZGMEKYZHJRNANGUEUZTXXJHQEICXNVHPSCSQGWVOYOOR");

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
    msg.setTimeStamp(0.5347808525182612);
    msg.setSource(9771U);
    msg.setSourceEntity(120U);
    msg.setDestination(51102U);
    msg.setDestinationEntity(102U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.07174760773889444;
    msg.control.set(tmp_msg_0);
    msg.duration = 39762U;
    msg.custom.assign("YECKIWNYBVQOTMQWYAHMNLPGRHLOXYHVOMCXKQUWGPZIDEJNJCBWKCNRDUVGNLUTRCXEJLRFTVWUFSIVOAMDRMYXBAPHWNFAUTLMGIWRZHKKZARDDGYLXIXPEUQXCYINYJKQGLDFEIKMFPBDSKZBSBDOOWFIBPCSNYGAVSGNGTOPXOCTGSZEULASSVLRAFBUZPQOHKQEQEZCJZRAQWDOHB");

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
    msg.setTimeStamp(0.5879610000591065);
    msg.setSource(49307U);
    msg.setSourceEntity(40U);
    msg.setDestination(23705U);
    msg.setDestinationEntity(214U);
    msg.timeout = 24590U;
    msg.lat = 0.4328212152348797;
    msg.lon = 0.4762354736036345;
    msg.z = 0.25725795302129884;
    msg.z_units = 101U;
    msg.speed = 0.7767879007927195;
    msg.speed_units = 63U;
    msg.bearing = 0.3795219802515982;
    msg.cross_angle = 0.18589227033076638;
    msg.width = 0.4024532714953091;
    msg.length = 0.5173824158035619;
    msg.hstep = 0.425036581441272;
    msg.coff = 185U;
    msg.alternation = 54U;
    msg.flags = 221U;
    msg.custom.assign("NLEVCJAEDBZDQSZVYGLVYFWLLQRIEWYDFPBOUNCGBRGSDAUZWEEWIGBBWNMHTMSILJPTPSEYNTPUYPLKHOMHLKDUMVCAJTXFQSIZAFIJKAQDDKO");

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
    msg.setTimeStamp(0.7712549915861772);
    msg.setSource(17960U);
    msg.setSourceEntity(217U);
    msg.setDestination(29610U);
    msg.setDestinationEntity(187U);
    msg.timeout = 19566U;
    msg.lat = 0.5610437839707536;
    msg.lon = 0.36728408446821126;
    msg.z = 0.6473200137588223;
    msg.z_units = 28U;
    msg.speed = 0.5493750708583234;
    msg.speed_units = 166U;
    msg.bearing = 0.9500044436011597;
    msg.cross_angle = 0.2153381218062047;
    msg.width = 0.07325227520178734;
    msg.length = 0.6817157450384983;
    msg.hstep = 0.011887873872377774;
    msg.coff = 163U;
    msg.alternation = 5U;
    msg.flags = 24U;
    msg.custom.assign("ZYIMHHIKSMJYFQZJWHAATYNCWPZXEPTRLVAYALSZBNCFOHHWOVWPHTXJZIZRCRIUEEPYVTODRGLTZLSLBNKJNVZPOMKQQQRCCXBWXEDEVBQOFKKJNKUGMDUFTRRPCQMIGVVPBTUGHOCHWXTJUFETLNOILKAKESAGIMODSSXGCYSVQBJKNWSDXFGJQYXDGVEGFUVOPBDIFSEQNRAOPNDXWCAJFYPUMMZLQTMIJAHHFAIKBE");

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
    msg.setTimeStamp(0.7928778116534165);
    msg.setSource(15389U);
    msg.setSourceEntity(83U);
    msg.setDestination(16850U);
    msg.setDestinationEntity(92U);
    msg.timeout = 942U;
    msg.lat = 0.27176937638742826;
    msg.lon = 0.9235673754051323;
    msg.z = 0.9455132662967202;
    msg.z_units = 74U;
    msg.speed = 0.03125951737496191;
    msg.speed_units = 38U;
    msg.bearing = 0.7270150642907764;
    msg.cross_angle = 0.13198126562204626;
    msg.width = 0.6429030778807824;
    msg.length = 0.7959069331890757;
    msg.hstep = 0.8516892604751514;
    msg.coff = 59U;
    msg.alternation = 239U;
    msg.flags = 65U;
    msg.custom.assign("SPDXVTYQCSWHXGGNTFMLUEWGNBPZRCBBCYCGIXEMADXVOQYAFUCYGKWIVMJHBPUSTNOHMZWKPYUVSNZCADVBBRJEBLEPNMLTWHHGYUQRDQEFFHVROCRFEJUAO");

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
    msg.setTimeStamp(0.5059840837955467);
    msg.setSource(8208U);
    msg.setSourceEntity(16U);
    msg.setDestination(11282U);
    msg.setDestinationEntity(149U);
    msg.timeout = 4581U;
    msg.lat = 0.6094170946806864;
    msg.lon = 0.6618073709296844;
    msg.z = 0.48719402291844605;
    msg.z_units = 215U;
    msg.speed = 0.11897466595998751;
    msg.speed_units = 50U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.68269724008284;
    tmp_msg_0.y = 0.5894907961419011;
    tmp_msg_0.z = 0.766283506776607;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YYUYQCDZMUIUWLUGXLDKLOITDGMFKIKIOOGHIEVE");

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
    msg.setTimeStamp(0.37675092133086874);
    msg.setSource(1659U);
    msg.setSourceEntity(168U);
    msg.setDestination(40786U);
    msg.setDestinationEntity(9U);
    msg.timeout = 48357U;
    msg.lat = 0.5319641076264756;
    msg.lon = 0.3891715409815596;
    msg.z = 0.03797246734533821;
    msg.z_units = 43U;
    msg.speed = 0.12857879601250888;
    msg.speed_units = 92U;
    msg.custom.assign("VJQHGOFXEGCKQNPPLECITWFMDAOBAOYQOCTLWRCUTWCDWAKBDRWXRJPNSOEHBSDVXHSBAOMZRSSQJGPANZC");

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
    msg.setTimeStamp(0.3627706396985345);
    msg.setSource(29314U);
    msg.setSourceEntity(168U);
    msg.setDestination(32741U);
    msg.setDestinationEntity(51U);
    msg.timeout = 6933U;
    msg.lat = 0.36962249034874395;
    msg.lon = 0.6043495282141481;
    msg.z = 0.0945881570203454;
    msg.z_units = 64U;
    msg.speed = 0.4569143283845385;
    msg.speed_units = 36U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5609635499223194;
    tmp_msg_0.y = 0.022055884724642816;
    tmp_msg_0.z = 0.42853901535706007;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HBNYAEFUHSKWMXXYUIYOWGMXOHHWXXSGQSIVNTPFDQTKYLBKFSFYVXTYSYZLDUMMINZPMJSLVDZTMCPVSQTJCEONBYCZERBVQPUEIQJCIAOMMANWEGZOXRDYXVJBCLLGAUCPSDDHNRDJKKJNNLWQZTUDRBQAYFRRCJKBWMHAFKKHPFEXTZEAEJOWAUGFHQKLIBHUBTPOJFUVXIGMOVROQBUKZQELCOWATZDGCHIRIGGIPPNJCZVWSLVDTLRG");

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
    msg.setTimeStamp(0.9726457250092572);
    msg.setSource(42593U);
    msg.setSourceEntity(246U);
    msg.setDestination(10766U);
    msg.setDestinationEntity(157U);
    msg.x = 0.322547745228719;
    msg.y = 0.30317636800583536;
    msg.z = 0.2348289918031361;

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
    msg.setTimeStamp(0.6730782010401287);
    msg.setSource(22427U);
    msg.setSourceEntity(131U);
    msg.setDestination(62619U);
    msg.setDestinationEntity(137U);
    msg.x = 0.730173739053867;
    msg.y = 0.9658134779519071;
    msg.z = 0.6375936846032092;

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
    msg.setTimeStamp(0.8776232782147122);
    msg.setSource(18599U);
    msg.setSourceEntity(19U);
    msg.setDestination(23673U);
    msg.setDestinationEntity(50U);
    msg.x = 0.9009318468770594;
    msg.y = 0.7320624362927448;
    msg.z = 0.5213185055570535;

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
    msg.setTimeStamp(0.33260639480215104);
    msg.setSource(35360U);
    msg.setSourceEntity(8U);
    msg.setDestination(6461U);
    msg.setDestinationEntity(211U);
    msg.timeout = 56074U;
    msg.lat = 0.13980588704089347;
    msg.lon = 0.37253333763301777;
    msg.z = 0.895689797668654;
    msg.z_units = 226U;
    msg.amplitude = 0.6530702836584357;
    msg.pitch = 0.9467843818789241;
    msg.speed = 0.2124847761049009;
    msg.speed_units = 101U;
    msg.custom.assign("SGFTFEYVMAAYFRGNOKQAMPCGUOKSUBLIXPSUCIBXROUDEEQTAXEVJSHOQVMKVQDJEQJNCAGAFLXESWVBGZZULBGHRWRBNRFXWVNJCVSZOIHDXSHPZQYZYVALTD");

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
    msg.setTimeStamp(0.5447410788914422);
    msg.setSource(34421U);
    msg.setSourceEntity(163U);
    msg.setDestination(28241U);
    msg.setDestinationEntity(203U);
    msg.timeout = 14308U;
    msg.lat = 0.9333599947076999;
    msg.lon = 0.2533227160000301;
    msg.z = 0.33151778171512214;
    msg.z_units = 50U;
    msg.amplitude = 0.3272152949324115;
    msg.pitch = 0.2319500750155179;
    msg.speed = 0.5195970460554064;
    msg.speed_units = 121U;
    msg.custom.assign("QSFVRCFZLSHTIRPZGROZJTXQFZAKLUAQTUVVTNWNTDUYHJVWCEVHGDYNKJNKDNBFJQKGMKZGYOMSUKVAFPTQRMVDEEENUMZUICBBXONCXHCNNJREFCUBNICXZODPKLSFTOHBAESZTXXPMLGMMEKDLGUSOXWYLRRWYIBQYHERQQRWPSIURMFWJWPSOOIKFPPVJPAALADQAGBLXYJEPWMJHHJAVBGTSOCBYHCEDAWYKHLQXGTZ");

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
    msg.setTimeStamp(0.8630389345170412);
    msg.setSource(3927U);
    msg.setSourceEntity(195U);
    msg.setDestination(24271U);
    msg.setDestinationEntity(158U);
    msg.timeout = 56191U;
    msg.lat = 0.5105288558921864;
    msg.lon = 0.13957542630961317;
    msg.z = 0.453369595547922;
    msg.z_units = 128U;
    msg.amplitude = 0.21522616247617243;
    msg.pitch = 0.8021896160373042;
    msg.speed = 0.3904895430389921;
    msg.speed_units = 225U;
    msg.custom.assign("WSNOKHIRDAIDBHKMRNYTYZSOUIRHVIJASSBM");

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
    msg.setTimeStamp(0.41129970745674227);
    msg.setSource(33818U);
    msg.setSourceEntity(199U);
    msg.setDestination(46601U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.3436687060585133);
    msg.setSource(51528U);
    msg.setSourceEntity(17U);
    msg.setDestination(44806U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.13723267423967056);
    msg.setSource(422U);
    msg.setSourceEntity(199U);
    msg.setDestination(8017U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.8211358134537383);
    msg.setSource(63881U);
    msg.setSourceEntity(245U);
    msg.setDestination(20303U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.7809658132775533;
    msg.lon = 0.9726645066856089;
    msg.z = 0.6405890037267551;
    msg.z_units = 52U;
    msg.radius = 0.8140601238219427;
    msg.duration = 17333U;
    msg.speed = 0.0359049194761204;
    msg.speed_units = 206U;
    msg.custom.assign("TIJCEMUGNABYAAWTUKCTQQCRRNUYCFVPYBKEEKPSYVRKPRLPSDWRHINFJYYXOLLODQXTHSBCDDKUEWZQOKRWIDLWHWXCEUGPDWTKSHJKINVFSJTBBSPJBGDPEENAB");

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
    msg.setTimeStamp(0.189047652882679);
    msg.setSource(1072U);
    msg.setSourceEntity(47U);
    msg.setDestination(57841U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.0015976281629348499;
    msg.lon = 0.5232979004758271;
    msg.z = 0.03183960167494193;
    msg.z_units = 170U;
    msg.radius = 0.914402773547624;
    msg.duration = 49126U;
    msg.speed = 0.4063792373596865;
    msg.speed_units = 11U;
    msg.custom.assign("TWADEUITVMBTNVWPFJWCLKSEUQJHNSUZKFEAKQARIXRLISQTXZEVUUNPLNWYSBOFCHUJSWPZIXRJPBTZNXCLHDUZHAXOVPYLKJAUZBTEHLRRRVZXORBEPFKGIDGVBFOGRNOMKCXPTCHQAVTOKWLGJSZGHGKGZCRJKWJQYAIEVLLBSGENZOFMH");

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
    msg.setTimeStamp(0.19574785996853483);
    msg.setSource(31153U);
    msg.setSourceEntity(239U);
    msg.setDestination(21425U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.32448214429365085;
    msg.lon = 0.8679194868455812;
    msg.z = 0.9718058305039013;
    msg.z_units = 159U;
    msg.radius = 0.6864518035899585;
    msg.duration = 25438U;
    msg.speed = 0.1565875881624622;
    msg.speed_units = 60U;
    msg.custom.assign("ZHBTDNXCMWKUXUVABLGMYFVEKJOBUUXCEAIEGTZE");

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
    msg.setTimeStamp(0.0803349024683605);
    msg.setSource(31478U);
    msg.setSourceEntity(204U);
    msg.setDestination(36324U);
    msg.setDestinationEntity(43U);
    msg.timeout = 58805U;
    msg.flags = 59U;
    msg.lat = 0.16776112956590594;
    msg.lon = 0.8998987903620488;
    msg.start_z = 0.5001108726396034;
    msg.start_z_units = 5U;
    msg.end_z = 0.14033605402179117;
    msg.end_z_units = 164U;
    msg.radius = 0.8605649792228475;
    msg.speed = 0.40651218352009477;
    msg.speed_units = 205U;
    msg.custom.assign("RDFXKYYVCTUOJEPEYKRHINZOHQNNTFVUBFUVIQDMBNCCBHFTJXDUOWIFCMONPUQAYETLHRAJTABKZBPKKQTQDMOASGAOHVIGFLUQUPSZZYGSQWBZLGBMJGIODZPAWPRZXD");

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
    msg.setTimeStamp(0.0029567246217110377);
    msg.setSource(50871U);
    msg.setSourceEntity(220U);
    msg.setDestination(59942U);
    msg.setDestinationEntity(13U);
    msg.timeout = 45311U;
    msg.flags = 179U;
    msg.lat = 0.7167429459469089;
    msg.lon = 0.11033440930181726;
    msg.start_z = 0.3514090639802231;
    msg.start_z_units = 123U;
    msg.end_z = 0.5834169559970867;
    msg.end_z_units = 7U;
    msg.radius = 0.4794751833913635;
    msg.speed = 0.7493411197532885;
    msg.speed_units = 247U;
    msg.custom.assign("LIQTYSVLSHPQWPUYRUWNWTKZZFGLPFQIZBEFJVSXTENCCBMHGXBVSOJLYLBWADRJTKISSRGCSNKPZUKHAFQKMOPHHBEAHDUBTMNVRYESGHUVLODUSYYCREIJNGJZQHXFMXKUBLZOMZEXXHAVDJ");

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
    msg.setTimeStamp(0.7001374719357732);
    msg.setSource(2387U);
    msg.setSourceEntity(193U);
    msg.setDestination(32990U);
    msg.setDestinationEntity(94U);
    msg.timeout = 38001U;
    msg.flags = 107U;
    msg.lat = 0.9113816515340242;
    msg.lon = 0.9604939415062544;
    msg.start_z = 0.16411796375562382;
    msg.start_z_units = 94U;
    msg.end_z = 0.9505868509096669;
    msg.end_z_units = 171U;
    msg.radius = 0.9880792290998307;
    msg.speed = 0.2741639101223706;
    msg.speed_units = 154U;
    msg.custom.assign("BKEDVZFXFUWQYSFDPIIMOXYOUYIUJVWDBHMPTVVNTRJIWXXBYIXKVASBCUYEZGFGDMORHMKEFLAMEAUCMCJBSHTKOLHHGEKZTIPCMNPQYSLQMHINXPWBQSAGCWJK");

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
    msg.setTimeStamp(0.678687453816388);
    msg.setSource(59344U);
    msg.setSourceEntity(20U);
    msg.setDestination(11852U);
    msg.setDestinationEntity(134U);
    msg.timeout = 5338U;
    msg.lat = 0.8571636094364155;
    msg.lon = 0.060040391896050815;
    msg.z = 0.31305860294554844;
    msg.z_units = 111U;
    msg.speed = 0.21080196721139088;
    msg.speed_units = 112U;
    msg.custom.assign("VUZWTMVMNYOZMPRHUMJZUKSAGCGCBZKMVPRLNSZIPJNYNQWHOYSGJDLHTBQQUMKWTTVFJNSZJRPFOZPSAUBSXTQCZELYLBTGHVGOYTDXLPFVEYEMQFPOQZVPXGCYHDQOVLWKJTILNSGBCEXXIRDUXKJHIBOTRVBDRIDSCHFXVJACGK");

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
    msg.setTimeStamp(0.7111865327067561);
    msg.setSource(54976U);
    msg.setSourceEntity(136U);
    msg.setDestination(46397U);
    msg.setDestinationEntity(207U);
    msg.timeout = 51952U;
    msg.lat = 0.31495396634817996;
    msg.lon = 0.27513496553691585;
    msg.z = 0.8171608171910385;
    msg.z_units = 97U;
    msg.speed = 0.39173988138796767;
    msg.speed_units = 109U;
    msg.custom.assign("AUINKOCGOEOVSPIVHTJLQUOWFJLDHHUWNTCJJAQETSSRKTZNDFBLUBCLGKEYDCKIXTAQEANKPVPVXSYOYGWOJRCRDIITLQMZYAWRYGBOOQCULNFZKRUNUWYIMAJGGHMJMPYZPZIASDYPKD");

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
    msg.setTimeStamp(0.07133600179486654);
    msg.setSource(30910U);
    msg.setSourceEntity(34U);
    msg.setDestination(64459U);
    msg.setDestinationEntity(147U);
    msg.timeout = 56765U;
    msg.lat = 0.6829655051289225;
    msg.lon = 0.0017258379679485625;
    msg.z = 0.13050637994699865;
    msg.z_units = 131U;
    msg.speed = 0.06582009138415457;
    msg.speed_units = 37U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7562454242133352;
    tmp_msg_0.y = 0.03176401516297722;
    tmp_msg_0.z = 0.348317994804491;
    tmp_msg_0.t = 0.9160878217277706;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ESIPBNACATCFZKQQWDGBKCUUVRSLJCUJVGIEJTFPEVTHDJPRQBTXNUNMQTBWEVCHRIDFMWMIZAXMQEFGLQVNLHEZBREOXARLOZXF");

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
    msg.setTimeStamp(0.2933636787092443);
    msg.setSource(11084U);
    msg.setSourceEntity(122U);
    msg.setDestination(34479U);
    msg.setDestinationEntity(18U);
    msg.x = 0.879478773345943;
    msg.y = 0.6595320071308016;
    msg.z = 0.4820209928057755;
    msg.t = 0.30799017089526626;

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
    msg.setTimeStamp(0.6757638874940426);
    msg.setSource(21417U);
    msg.setSourceEntity(208U);
    msg.setDestination(58000U);
    msg.setDestinationEntity(240U);
    msg.x = 0.9982128251643164;
    msg.y = 0.0974991376900447;
    msg.z = 0.2629450699011545;
    msg.t = 0.7052561562041261;

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
    msg.setTimeStamp(0.011585371445673398);
    msg.setSource(20865U);
    msg.setSourceEntity(63U);
    msg.setDestination(35854U);
    msg.setDestinationEntity(153U);
    msg.x = 0.1776927847901929;
    msg.y = 0.2296216162604443;
    msg.z = 0.6999689084812457;
    msg.t = 0.5768530814640157;

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
    msg.setTimeStamp(0.518694028962474);
    msg.setSource(24135U);
    msg.setSourceEntity(109U);
    msg.setDestination(21158U);
    msg.setDestinationEntity(147U);
    msg.timeout = 1267U;
    msg.name.assign("ZBVDQTOBLWVRTJJUTEIZXLOYUTFOPEMKDKNSBXJNTSOGIFTPOEKZWCAZCTPQPIRGFDYBHWMVYMFJKGBWCECKOIXQTADRHFNHV");
    msg.custom.assign("HLVHZGHVPCMJJHIVUPYOJADZREZGFQMUPVFQFFSJCKPQLBGNEIDNSPBKBLVXEPTDMAQWRMOJQDAGVEKIWCUYTEBRTZHIYIXABLIYHGQXZFYNEBBWXYWEZWZXFGEFHOULOMQUHPTPTSVDOUAKSWXJXJDMJXRGPBBQIJYGKZXWMSEVLAANHRCONYGNFAHUVLKNZNLIDYSSSTNBRTUKCCLAUIQUSCGTCJC");

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
    msg.setTimeStamp(0.3254511665317352);
    msg.setSource(63111U);
    msg.setSourceEntity(51U);
    msg.setDestination(42398U);
    msg.setDestinationEntity(185U);
    msg.timeout = 55312U;
    msg.name.assign("PKRYIUCFGNIHTSRFCRTHSCVYUZWMGOLHECQVISYTUDLSMQTCIJZIZGKSRWBOBZZZAMFPTAVUUXWEBOJPVAWJKTAKLOHBCEJIVPJGFOCFZVJGUBMKHHAWHTXSURJTQOEQFADXCITDPDLRRNMOQKSGKYBQXBMZFGMNSQNCBTRBPXGJXNSKIEOZMRLNNVNZWEFLDNXYYDAMPQWOKFKGQPPYVLAOHIAUBLXFHLVWRNWJPMGCUDDD");
    msg.custom.assign("BHDCRQBDKPFTKWSDOQGJJMIWYIXAFQJXMFSVRYTAZAFFDJLRYRKSGRPHBVBNEPONAEETAIY");

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
    msg.setTimeStamp(0.8468499583042928);
    msg.setSource(60312U);
    msg.setSourceEntity(8U);
    msg.setDestination(15441U);
    msg.setDestinationEntity(10U);
    msg.timeout = 30249U;
    msg.name.assign("UNYSCCNTULHEDAMSWLNHPQQQPZBFPSXCNZXMXARMSPQNE");
    msg.custom.assign("BAVDVRZYBZMQBHAFNPBORDACMSIDWZKQQWTYSZKNCWKZEPXNFMNRCDWJZKONJTCNAJKJVKIEGGPEOYUFFRCIAPAVYBGVLZGWLLBFILDVLWOAZEVPDASJQHXTCSBJMHUM");

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
    msg.setTimeStamp(0.1611184168015387);
    msg.setSource(36831U);
    msg.setSourceEntity(237U);
    msg.setDestination(2957U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.8834390469531274;
    msg.lon = 0.08614478753212151;
    msg.z = 0.9602216763494357;
    msg.z_units = 127U;
    msg.speed = 0.9627328966502409;
    msg.speed_units = 199U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9097620663724636;
    tmp_msg_0.y = 0.5721965264400386;
    tmp_msg_0.z = 0.6402763075954746;
    tmp_msg_0.t = 0.6573705935381736;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7271584583702753;
    msg.custom.assign("BWWSDIIUZDKBMMRTLVOVBNQLYXVKPVEOQCOZRGGZJKHSNAFKZPXFBTNGKXGBKNAFFHOIMDPITEVYOTPJMAWYBCVASFRDJSLCTTCRERMFSTUZA");

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
    msg.setTimeStamp(0.05991138430877507);
    msg.setSource(50990U);
    msg.setSourceEntity(102U);
    msg.setDestination(24737U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.5747182182406454;
    msg.lon = 0.43743560354875743;
    msg.z = 0.18605341261110842;
    msg.z_units = 46U;
    msg.speed = 0.03455298998449141;
    msg.speed_units = 99U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.35934664996761534;
    tmp_msg_0.y = 0.8734668615304862;
    tmp_msg_0.z = 0.6696931539359392;
    tmp_msg_0.t = 0.26874585713687216;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.33029911929435496;
    msg.custom.assign("FCKJDOCODRVWZVBRJVQJGDLRCBDQAKBAQEBHPXZWXVWVNELSIYEHDFUWCLSVJOUQDBNCKSZHWOYMENAMPLMKYSIWZMZRNIKWFZLUATHZNICNFQIEWTGUIPFGGDVHXSXSHBTHQEUXIBMBRMPTTXSJHEIQIQJLCNUPTMHQJPVEGXKJZNGYRFWYMSCAVGZCLINFTLFAOOXJROYMUKYQXDCYXJYKE");

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
    msg.setTimeStamp(0.7254082074717322);
    msg.setSource(11133U);
    msg.setSourceEntity(78U);
    msg.setDestination(18434U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.0014036249087778785;
    msg.lon = 0.41889318993602254;
    msg.z = 0.28688974489480656;
    msg.z_units = 198U;
    msg.speed = 0.6431760915978287;
    msg.speed_units = 147U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7664723426389966;
    tmp_msg_0.y = 0.26813900327150353;
    tmp_msg_0.z = 0.40314122497659954;
    tmp_msg_0.t = 0.296969461915482;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 14114U;
    tmp_msg_1.off_x = 0.7654508728039536;
    tmp_msg_1.off_y = 0.38333521204678145;
    tmp_msg_1.off_z = 0.6881187094370056;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7907718802202718;
    msg.custom.assign("BDCYWWPILDNAMSIMXBDTSIFTGLSBKVEL");

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
    msg.setTimeStamp(0.5860882104903405);
    msg.setSource(36875U);
    msg.setSourceEntity(166U);
    msg.setDestination(37923U);
    msg.setDestinationEntity(233U);
    msg.vid = 15285U;
    msg.off_x = 0.5787153536432941;
    msg.off_y = 0.4515543531459457;
    msg.off_z = 0.5957642894249359;

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
    msg.setTimeStamp(0.9804647125616631);
    msg.setSource(60102U);
    msg.setSourceEntity(76U);
    msg.setDestination(61405U);
    msg.setDestinationEntity(183U);
    msg.vid = 42625U;
    msg.off_x = 0.7842755375333984;
    msg.off_y = 0.5464619544755215;
    msg.off_z = 0.723657124258119;

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
    msg.setTimeStamp(0.8977679908437448);
    msg.setSource(47118U);
    msg.setSourceEntity(170U);
    msg.setDestination(63207U);
    msg.setDestinationEntity(211U);
    msg.vid = 48260U;
    msg.off_x = 0.3439625636802901;
    msg.off_y = 0.17650603332495862;
    msg.off_z = 0.013395943721507653;

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
    msg.setTimeStamp(0.20562350719410916);
    msg.setSource(36128U);
    msg.setSourceEntity(81U);
    msg.setDestination(10283U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.8836934284644851);
    msg.setSource(61579U);
    msg.setSourceEntity(197U);
    msg.setDestination(51047U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.7334799803680382);
    msg.setSource(54109U);
    msg.setSourceEntity(4U);
    msg.setDestination(51383U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.9403379696265454);
    msg.setSource(22473U);
    msg.setSourceEntity(35U);
    msg.setDestination(52590U);
    msg.setDestinationEntity(231U);
    msg.mid = 25929U;

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
    msg.setTimeStamp(0.9482071569387184);
    msg.setSource(7735U);
    msg.setSourceEntity(74U);
    msg.setDestination(51484U);
    msg.setDestinationEntity(236U);
    msg.mid = 1770U;

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
    msg.setTimeStamp(0.7117547447265933);
    msg.setSource(29329U);
    msg.setSourceEntity(213U);
    msg.setDestination(36271U);
    msg.setDestinationEntity(48U);
    msg.mid = 11712U;

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
    msg.setTimeStamp(0.9658518954608466);
    msg.setSource(56365U);
    msg.setSourceEntity(146U);
    msg.setDestination(41872U);
    msg.setDestinationEntity(142U);
    msg.state = 55U;
    msg.eta = 609U;
    msg.info.assign("TIEZWZGPETDOWMMKZLAKTDAZQBGBUUXTOFQUQDWYR");

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
    msg.setTimeStamp(0.990577423603874);
    msg.setSource(958U);
    msg.setSourceEntity(207U);
    msg.setDestination(42805U);
    msg.setDestinationEntity(205U);
    msg.state = 218U;
    msg.eta = 17359U;
    msg.info.assign("ZKPCFUBOCOQLJBJWUQLMXINSAMBHVZVCDRIBXBSQVZUCDGCUKTLJQIRRVZOIGIYGEIWEXHNDUAEVHTAZGUFIZUQMFDEYQLLBQSIZPWPWLNQESJYKVSGCMRRYFREGANZTHBGAIRVJCOKRGFWUOWNBJYDHOEBYJTRXIDAFXVWOYHCNQMPJDJMTVGMHSHTELSAWWDCSAQNXKXANBULOPZFKFYGTPXWOFMPZ");

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
    msg.setTimeStamp(0.8151799285757088);
    msg.setSource(11198U);
    msg.setSourceEntity(207U);
    msg.setDestination(46383U);
    msg.setDestinationEntity(218U);
    msg.state = 161U;
    msg.eta = 61314U;
    msg.info.assign("MKQTPBFFCMIDNJAUHYQBUFEOOOFJXJLRGKORUFMXOUBOWWHVGWYRTFNABSICTKILBTJZXMETCSYQNGJAPUQDPMZRHKTELXIUETHRJZMOZAURUAXSVESGVELDKYHHQGNCZFYECKVGINZHJYDHLQSWFBYXACRFCDJCVPKBBXENRNLLLDENVPJWYXMZDVQJRMIRWPZSHGCBVSDIOZSUITGONAPQYSMVQIKTPGZNMWCXWVASEI");

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
    msg.setTimeStamp(0.1285418140376342);
    msg.setSource(50720U);
    msg.setSourceEntity(135U);
    msg.setDestination(38706U);
    msg.setDestinationEntity(127U);
    msg.system = 51513U;
    msg.duration = 32825U;
    msg.speed = 0.8898525494447617;
    msg.speed_units = 203U;
    msg.x = 0.7551897429458582;
    msg.y = 0.5924487179368517;
    msg.z = 0.2669159915399095;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.8023770533085418);
    msg.setSource(28798U);
    msg.setSourceEntity(4U);
    msg.setDestination(19768U);
    msg.setDestinationEntity(108U);
    msg.system = 29812U;
    msg.duration = 194U;
    msg.speed = 0.404120402847741;
    msg.speed_units = 228U;
    msg.x = 0.9885854479034526;
    msg.y = 0.0952201380917167;
    msg.z = 0.5531317186878548;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.07437607076958475);
    msg.setSource(3023U);
    msg.setSourceEntity(39U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(153U);
    msg.system = 43367U;
    msg.duration = 2872U;
    msg.speed = 0.2463167380105823;
    msg.speed_units = 162U;
    msg.x = 0.2932750646497012;
    msg.y = 0.3981595321390208;
    msg.z = 0.3926471102942978;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.8691077984301365);
    msg.setSource(36634U);
    msg.setSourceEntity(19U);
    msg.setDestination(33800U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.1220824801892001;
    msg.lon = 0.0957998433303362;
    msg.speed = 0.8817790842811458;
    msg.speed_units = 127U;
    msg.duration = 63580U;
    msg.sys_a = 19768U;
    msg.sys_b = 6752U;
    msg.move_threshold = 0.7023893076796035;

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
    msg.setTimeStamp(0.5886198035261295);
    msg.setSource(25954U);
    msg.setSourceEntity(213U);
    msg.setDestination(8763U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.3863000013777501;
    msg.lon = 0.6618262698554831;
    msg.speed = 0.9810268640218728;
    msg.speed_units = 175U;
    msg.duration = 41853U;
    msg.sys_a = 52271U;
    msg.sys_b = 17410U;
    msg.move_threshold = 0.5983060620518793;

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
    msg.setTimeStamp(0.17893692418068718);
    msg.setSource(41832U);
    msg.setSourceEntity(220U);
    msg.setDestination(34877U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.9659166238685417;
    msg.lon = 0.8062690736747035;
    msg.speed = 0.6800748919177423;
    msg.speed_units = 198U;
    msg.duration = 32914U;
    msg.sys_a = 5529U;
    msg.sys_b = 16680U;
    msg.move_threshold = 0.6096513499819628;

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
    msg.setTimeStamp(0.8865630005236321);
    msg.setSource(25296U);
    msg.setSourceEntity(227U);
    msg.setDestination(64006U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.490836846652282;
    msg.lon = 0.26636321755527503;
    msg.z = 0.630199554255974;
    msg.z_units = 97U;
    msg.speed = 0.29844270892917735;
    msg.speed_units = 94U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.11029599299692605;
    tmp_msg_0.lon = 0.3602708309012339;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AISPTAJNYHMVZKG");

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
    msg.setTimeStamp(0.3811754491874274);
    msg.setSource(54918U);
    msg.setSourceEntity(68U);
    msg.setDestination(36510U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.17613465164774844;
    msg.lon = 0.6099828085172018;
    msg.z = 0.24373265673174338;
    msg.z_units = 242U;
    msg.speed = 0.3353074446593466;
    msg.speed_units = 187U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.20991954511900213;
    tmp_msg_0.lon = 0.02123212499412419;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AOLRBKIJQMQKECBWEEIZMFBSWVBZBCDVZHVNVZSHRELZWZGUYATGHCSHKLDQNMQJCDPIGTPOPXMNWCKOJRUXYSDKFMOGNKGIAPYYKUANEYFFHDIPDAIRWDERAFQFALEUWPUSQNQZRHWCJUVTYAUTMYDYTEIRLMOHPOGINBJAXOKZTTRTUXHSYJBKPGINSSVCWLPVQVVOXNDM");

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
    msg.setTimeStamp(0.6912385439877188);
    msg.setSource(54297U);
    msg.setSourceEntity(175U);
    msg.setDestination(15900U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.9148946545832511;
    msg.lon = 0.17678986704046828;
    msg.z = 0.7476329874324041;
    msg.z_units = 129U;
    msg.speed = 0.5067611283203987;
    msg.speed_units = 141U;
    msg.custom.assign("XUNBSPYXWLOTSIAZCSZKQJISJQTEAPNWSUKBHFFC");

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
    msg.setTimeStamp(0.5622483077962414);
    msg.setSource(3834U);
    msg.setSourceEntity(249U);
    msg.setDestination(58852U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.04113812910095893;
    msg.lon = 0.6178053110396378;

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
    msg.setTimeStamp(0.5207046115022678);
    msg.setSource(22484U);
    msg.setSourceEntity(4U);
    msg.setDestination(6974U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.5010118405394431;
    msg.lon = 0.5810388375567593;

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
    msg.setTimeStamp(0.18057808422888288);
    msg.setSource(7714U);
    msg.setSourceEntity(151U);
    msg.setDestination(22036U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.28882225311253207;
    msg.lon = 0.11560886124310421;

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
    msg.setTimeStamp(0.7693715451146004);
    msg.setSource(6757U);
    msg.setSourceEntity(57U);
    msg.setDestination(61907U);
    msg.setDestinationEntity(107U);
    msg.timeout = 45299U;
    msg.lat = 0.7579339001741443;
    msg.lon = 0.35753817834262724;
    msg.z = 0.7419261407660611;
    msg.z_units = 20U;
    msg.pitch = 0.15045898320672846;
    msg.amplitude = 0.8195453340607008;
    msg.duration = 61058U;
    msg.speed = 0.31343568024058877;
    msg.speed_units = 134U;
    msg.radius = 0.3456674400739851;
    msg.direction = 149U;
    msg.custom.assign("QSMUNCYVQGHXJOYUEEVXEIIQYVVXKUIBCOQAIRLGXPZGHEDKQFVTOPIRNXHFYMUAKXWRCHZTHBHEBYNWLXMBOESMCRCADADPTPDQIRVGAGBNXPQYSRXAFOZULNJWNNCCFWBRUMNDOLKEWGWQPVULNGKRSWJIJLIPQYZCFVKCEACWDKLZJTTZLHEJLOPHFSFBARZSGZDHBMOZBSJSPIFYWOMTHSEJXGFGTPKVULYTJAIJAMUDSBT");

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
    msg.setTimeStamp(0.13102929351276127);
    msg.setSource(15565U);
    msg.setSourceEntity(24U);
    msg.setDestination(31220U);
    msg.setDestinationEntity(126U);
    msg.timeout = 39210U;
    msg.lat = 0.8283026176097757;
    msg.lon = 0.4512783675585512;
    msg.z = 0.597724949320242;
    msg.z_units = 253U;
    msg.pitch = 0.11482516966638279;
    msg.amplitude = 0.08917059220851231;
    msg.duration = 31525U;
    msg.speed = 0.7834853041957452;
    msg.speed_units = 92U;
    msg.radius = 0.3181098137885082;
    msg.direction = 118U;
    msg.custom.assign("FUCKDPYANVDKUMSGODTWWOISFVWGTHKWOZTBRSTUHHFNMGERGYFPMTBQXZRPKCNEZSLGMQJKWLMFBSOAZCOUXFZTPADRNPIRCRRODJXDADVUGTXMAMJBJZEKW");

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
    msg.setTimeStamp(0.07756189814927616);
    msg.setSource(13285U);
    msg.setSourceEntity(210U);
    msg.setDestination(35407U);
    msg.setDestinationEntity(102U);
    msg.timeout = 59901U;
    msg.lat = 0.49464915739431126;
    msg.lon = 0.8201499263977032;
    msg.z = 0.3055024047562548;
    msg.z_units = 164U;
    msg.pitch = 0.3747974234649947;
    msg.amplitude = 0.3337112599636367;
    msg.duration = 34777U;
    msg.speed = 0.4058092132743545;
    msg.speed_units = 1U;
    msg.radius = 0.6396641216772234;
    msg.direction = 119U;
    msg.custom.assign("LMYKWJCIDKEBNNXFSOJUNOUAQUCWDRKHQAQDNRRCGVXXMIJSOVHTFBXVZBIEAYOSCKLDTRGZEJTAATMIZLDGLPBXQILONSGPYDFJEYIPZVPYHZTWFUCJHAWYSWEFBLWFCVKMBV");

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
    msg.setTimeStamp(0.4361869574781795);
    msg.setSource(39433U);
    msg.setSourceEntity(243U);
    msg.setDestination(56994U);
    msg.setDestinationEntity(123U);
    msg.formation_name.assign("LFPHWTGGDZIDZLKECEOCQSYBFDTRDFYCAUMTMAEVAIIQXULNYWMYBHDPESXQFLIPKTMVYFPDRNEIPOWTBGSMVGDUNJPYRKWVHNTNPNSBMXEKRBMOCOXFOSKSAQTXWH");
    msg.reference_frame = 27U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63467U;
    tmp_msg_0.off_x = 0.6700816627345809;
    tmp_msg_0.off_y = 0.7039018513652108;
    tmp_msg_0.off_z = 0.884939253419059;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OTTMHSNMRLFOUEODPIIEHCDRVIJXGGZCROLSPUXHTVCZBLGJKNFHVYMSLJSEEJPQRHCXDEPPGNWBOBMOBHKIFVKGDXPZABJQTLDBFQCSGMWYGPMDBTANICZOORUWXNRIYJWAZZZGFMYFQYSVZUDHJTSYPYGCLTXBMKWCEWVCARVZJGAPFQLVNCDHPWLQISMFRAQAHKJDNZSRRIWXLEKEWBXEFHSIVAEXYLU");

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
    msg.setTimeStamp(0.5176225428766743);
    msg.setSource(53195U);
    msg.setSourceEntity(250U);
    msg.setDestination(23463U);
    msg.setDestinationEntity(115U);
    msg.formation_name.assign("YLYMKZUZGHEEVIP");
    msg.reference_frame = 142U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 467U;
    tmp_msg_0.off_x = 0.3153093620347459;
    tmp_msg_0.off_y = 0.5063497401312652;
    tmp_msg_0.off_z = 0.9632578902882045;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NUJCKQDTDTKVDTEC");

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
    msg.setTimeStamp(0.10797058359853207);
    msg.setSource(43933U);
    msg.setSourceEntity(153U);
    msg.setDestination(44803U);
    msg.setDestinationEntity(15U);
    msg.formation_name.assign("BETPZVFUIVDHNMWZTMPCQFRHCFGXUJZPVVRLYKTGTLLXSOITXTJHKPDMIRSUSUUQQYOCRWZGLKUTNEIFAAZGHILFVPURXFBBGXJQKKZCDYFXZCGJWJCIRWWIWOBNQZNGPEAWHGNJJDEPKBOQHDKCSVYLAIPOMBBQCATMKKWVSDRSGMAMOAYCYBFNWMOOLYOEHXUNBVLZUEQIDSMSTDAILAFRJHGLJDDOEMNUEXJYCT");
    msg.reference_frame = 21U;
    msg.custom.assign("KCSDOOULPZYYKPMOJEABGGPGMIZRKEIIBRKWRIEOGJQBWLAPMNEUMTSCTREOQQWIJWWVLUIXCNAKBZZGOGWTGHHSCFNJPHDPFVPXMLTNJRRXXMVJTCRNUWNYHRDGXDUYSUVLQEXQVFSYQTMYLDTTXDKBEANTDSXYEOHNKPGIZEDWKOHLGCBPNXLFFAULAD");

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
    msg.setTimeStamp(0.30656227432915495);
    msg.setSource(52706U);
    msg.setSourceEntity(26U);
    msg.setDestination(55668U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("AKPQCFDJJTCGESCZBFQFUBEAXQOVMDITNXWGZEBNYLWHPOFTDFVRKJYMRUJIQHDCJKUSGGJEZBEWCMPYICRMWTVBDEXRTUOSEYKZMKRESXRWCFQZCHQGPCMVIRKANSWAGLJFQRLYHBDNZYITJWYLUZXUPAOHBRXVPVZUOITVKGNMQGXUNVOPFLOXOIHPLGVZTZOFTAWNBGWAQDYLYFSIJENS");
    msg.formation_name.assign("NMKMRBLYLMOBPFOAVQRUEEBVTGFKHQWZAJQQLEZXTITATKBNPIZBHXTWUQGWYGVJPXEWWBIFCCFBRJIIUURVPRGWNRZEFNOSGDHCDWXHYLKZVKXKYJJHYORLZORIZEOMBEPDJ");
    msg.plan_id.assign("FQLSKKBEWVSSJEWVPNRHUQOQXATKGZXQOALPEPHWTSFYRDCBFLPDXOUVXMGYMPAMZNJCDTGMQSNISRNRUINKCKZ");
    msg.description.assign("RMEJFQXZGPNSIVWOJDOJFDYHYACIFBQQLVQWAWTYUHGAFWIUPBPJZHDKKHFSGODRDABWJMLMCAFZTEKUCHUNTBYQLNYBEYFEFZIGTNNDFNCSTIXGWABPCRJSDJLVCZSRDERGQYHCXUPYRLQXFMNSEKWLZHWKVCYPVLUSGGJPWWBGTUTMUVQAIOOMUTMIEOORDMEOKOTKXCDCHBSQXQTXIHIYUPEVSLXZNRJMSAN");
    msg.leader_speed = 0.6199968824382747;
    msg.leader_bank_lim = 0.6481809075720278;
    msg.pos_sim_err_lim = 0.7357953354141633;
    msg.pos_sim_err_wrn = 0.6632297839182459;
    msg.pos_sim_err_timeout = 56603U;
    msg.converg_max = 0.6118993799423507;
    msg.converg_timeout = 18092U;
    msg.comms_timeout = 20310U;
    msg.turb_lim = 0.096518016259027;
    msg.custom.assign("FQUSMEEYOMGJZZJGULAMGWAJDHDXOAPCHTPGJUZYEJFMQERILLEBTCEPUSXBJRKAMFDAXFAREWIHHQYKJYVHGTWRQRVTWUAGKVDPPSFLFGUPXZUVIAAZPJISWSWBMLLUHMSWTNBIKMVHWBNZVBLGYYBSXQDGCONPKQVYVNFJPROTCDONXNIZZZAFGCVLKKOHEVQFOODHYKTSRNMTBJPCHNCDNZDMBFLEXKBORUQRICDXIILTT");

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
    msg.setTimeStamp(0.9639141186685033);
    msg.setSource(7831U);
    msg.setSourceEntity(43U);
    msg.setDestination(38802U);
    msg.setDestinationEntity(99U);
    msg.group_name.assign("NGPXFZUVBMLSAEURGZPUJENGBZATRTDWWOOKOKZJYFEQWGJPODRAQDSXJXKURWXXNYGUMACDLBYNXIETHMUDTGDQTCVKKZPXEVLLKTYHCRQMRQKWWFLAMIVHSPFSFHNNSOLQENCQGZACJVLECBJQTOMHTFEPXHJPKUVDKIWTXMBIUOAYBVWCZWLUNBSNZO");
    msg.formation_name.assign("BKAHWPLMBEIHUCHZGWSXUCDWCQTMLXNHROEYFKIKFRRFJLRJVDQGYR");
    msg.plan_id.assign("UDESGFOBFWBIATYCIRLJNXVEMGPAMGXGWEFCOERYZCYVNYPTREASODYSUZMZHCZTNZLEWUAYTIMSBLKEPVKUKPXSBDMOCRLBKBKWHYBRQFMSFGJJNLPBMWYDAQZDCVZHKVUNFMJUJTDCEMNHDGXOJXVDOARLJSGLSJUIKWFKLQOPMYOIQGYQQVCVIRJEHNUPUTITAZQKAN");
    msg.description.assign("TPMIEUWEXH");
    msg.leader_speed = 0.3309265831374031;
    msg.leader_bank_lim = 0.42607781617016105;
    msg.pos_sim_err_lim = 0.03335983964916445;
    msg.pos_sim_err_wrn = 0.07455608859456042;
    msg.pos_sim_err_timeout = 4032U;
    msg.converg_max = 0.8276858202992257;
    msg.converg_timeout = 58442U;
    msg.comms_timeout = 52577U;
    msg.turb_lim = 0.3669263124680706;
    msg.custom.assign("BVESTGADAOMWIJXMIKYMRCZTEFBJTKVCZZCBDQKHHLHSMGFJXPOYVTYJSANKPCSEVNUBOLJ");

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
    msg.setTimeStamp(0.7782284179351556);
    msg.setSource(65137U);
    msg.setSourceEntity(39U);
    msg.setDestination(53502U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("AZOUTQULXMVFYOYSHTDSWTNBJAXASUOVNZGRVWNGHFEDDUZARESYMNRUDJPHQKGQBUHAPHGGDLTRVVMSJKDJCPKMGSRADZZNWBIQOJDBHPPMKLZIKFFKBEYJWWVWLKLICILOIIZOYACMETOAIBJXQEVCJESNKXSPTRIFRZCBGSN");
    msg.formation_name.assign("ZNIBHPJQQQGMJSYHGHJKUZSZIBLGNNHIMXUQGUYITRIDKCWKPFFKGTYYAFWUIJOWWRPWGPCLDLQMVNORFETQCVLIPDSOTMWYQKUCWOQOHUAQQRGSOAATPSK");
    msg.plan_id.assign("AZDTMVPWJLCVFHYQRVJEPXCUPQFYAFZKDDOTHXGNG");
    msg.description.assign("QUBCQXUFZEHNUPFSSGOSKMZCMBPNVOFAMUCBNOJXVCQREYOLTGZBVEQTTGRISFQEAVYWPJSWBAHWVDXNWKGYROXITURKFIMKTCPNJMZWWATSCQIMMQXLRSXPGHRDCZDVPBIOHPBVBHPYDSIXWRZFUBAKLIUFXAVWHTLAEZSTDLTGFKHDFOYLPZPUDRXJKNJYDMNJUYXGEHAWWELDMSOMQJGITYZDHCLELNGQOAVHJIZECYUGBJORKKIVNQK");
    msg.leader_speed = 0.9732228077345132;
    msg.leader_bank_lim = 0.2684490519107755;
    msg.pos_sim_err_lim = 0.2979544758008694;
    msg.pos_sim_err_wrn = 0.5679182530494384;
    msg.pos_sim_err_timeout = 39405U;
    msg.converg_max = 0.4937810133545699;
    msg.converg_timeout = 61090U;
    msg.comms_timeout = 13980U;
    msg.turb_lim = 0.8401232987537447;
    msg.custom.assign("SWXVQRCJWIHEKNMBKVOQPXJJHUVNKFZDUMGBXAIYLCFGVCXHOCBWQKFJRLCGBPUNBVFQIASDOJROOFTNXAZFCKZTRYFDTRDSYJVRUYIPQM");

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
    msg.setTimeStamp(0.21959630354247783);
    msg.setSource(47453U);
    msg.setSourceEntity(216U);
    msg.setDestination(31315U);
    msg.setDestinationEntity(72U);
    msg.control_src = 457U;
    msg.control_ent = 126U;
    msg.timeout = 0.6393228059562532;
    msg.loiter_radius = 0.4299204106023944;
    msg.altitude_interval = 0.291660695425603;

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
    msg.setTimeStamp(0.7778729854998335);
    msg.setSource(46432U);
    msg.setSourceEntity(166U);
    msg.setDestination(63682U);
    msg.setDestinationEntity(238U);
    msg.control_src = 57686U;
    msg.control_ent = 216U;
    msg.timeout = 0.6822512878676195;
    msg.loiter_radius = 0.2975567398928235;
    msg.altitude_interval = 0.1717742975727642;

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
    msg.setTimeStamp(0.09340146695519147);
    msg.setSource(4694U);
    msg.setSourceEntity(9U);
    msg.setDestination(20034U);
    msg.setDestinationEntity(56U);
    msg.control_src = 58845U;
    msg.control_ent = 104U;
    msg.timeout = 0.5210848469246441;
    msg.loiter_radius = 0.01863830718150894;
    msg.altitude_interval = 0.5765589152128339;

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
    msg.setTimeStamp(0.14029550500403765);
    msg.setSource(36518U);
    msg.setSourceEntity(100U);
    msg.setDestination(39364U);
    msg.setDestinationEntity(154U);
    msg.flags = 200U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.21570519324447956;
    tmp_msg_0.speed_units = 157U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5280725702627109;
    tmp_msg_1.z_units = 222U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5138263070494601;
    msg.lon = 0.3552393144086504;
    msg.radius = 0.4175771687016606;

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
    msg.setTimeStamp(0.19143703422907088);
    msg.setSource(48578U);
    msg.setSourceEntity(198U);
    msg.setDestination(25909U);
    msg.setDestinationEntity(104U);
    msg.flags = 168U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.07269546244749991;
    tmp_msg_0.speed_units = 115U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.11608711957486628;
    tmp_msg_1.z_units = 64U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5356556932985523;
    msg.lon = 0.8565750076126963;
    msg.radius = 0.2761837472099533;

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
    msg.setTimeStamp(0.3984385517946273);
    msg.setSource(22962U);
    msg.setSourceEntity(235U);
    msg.setDestination(24808U);
    msg.setDestinationEntity(20U);
    msg.flags = 254U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7287214382272437;
    tmp_msg_0.speed_units = 17U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3752931703856873;
    tmp_msg_1.z_units = 29U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.873840599117171;
    msg.lon = 0.6373829881150596;
    msg.radius = 0.30406777101425486;

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
    msg.setTimeStamp(0.18734050788124101);
    msg.setSource(13050U);
    msg.setSourceEntity(32U);
    msg.setDestination(17077U);
    msg.setDestinationEntity(156U);
    msg.control_src = 31286U;
    msg.control_ent = 246U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 117U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.43991207656926223;
    tmp_tmp_msg_0_0.speed_units = 138U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9728242837484662;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5269300876051669;
    tmp_msg_0.lon = 0.660727603071616;
    tmp_msg_0.radius = 0.7578153753427446;
    msg.reference.set(tmp_msg_0);
    msg.state = 230U;
    msg.proximity = 125U;

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
    msg.setTimeStamp(0.7742759484137748);
    msg.setSource(10927U);
    msg.setSourceEntity(86U);
    msg.setDestination(1637U);
    msg.setDestinationEntity(111U);
    msg.control_src = 63968U;
    msg.control_ent = 38U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 102U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3855144251785062;
    tmp_tmp_msg_0_0.speed_units = 44U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.14513499519392403;
    tmp_tmp_msg_0_1.z_units = 2U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8026535209342831;
    tmp_msg_0.lon = 0.3008446402785562;
    tmp_msg_0.radius = 0.2557545501249521;
    msg.reference.set(tmp_msg_0);
    msg.state = 203U;
    msg.proximity = 76U;

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
    msg.setTimeStamp(0.33862244729199775);
    msg.setSource(25251U);
    msg.setSourceEntity(250U);
    msg.setDestination(23053U);
    msg.setDestinationEntity(73U);
    msg.control_src = 24867U;
    msg.control_ent = 52U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 130U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7200561744362123;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8035758190518422;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.70805608209039;
    tmp_msg_0.lon = 0.1846782114041703;
    tmp_msg_0.radius = 0.18591237008406591;
    msg.reference.set(tmp_msg_0);
    msg.state = 199U;
    msg.proximity = 57U;

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
    msg.setTimeStamp(0.8323933186062088);
    msg.setSource(30293U);
    msg.setSourceEntity(5U);
    msg.setDestination(53791U);
    msg.setDestinationEntity(137U);
    msg.ax_cmd = 0.8221652733400202;
    msg.ay_cmd = 0.3736569901540724;
    msg.az_cmd = 0.904552206228812;
    msg.ax_des = 0.7225785604357562;
    msg.ay_des = 0.5601748621363064;
    msg.az_des = 0.8679236421273886;
    msg.virt_err_x = 0.7283604012256045;
    msg.virt_err_y = 0.532869961255515;
    msg.virt_err_z = 0.6230428092711916;
    msg.surf_fdbk_x = 0.933538741266147;
    msg.surf_fdbk_y = 0.7115841217707342;
    msg.surf_fdbk_z = 0.7468764385591792;
    msg.surf_unkn_x = 0.7543332079854936;
    msg.surf_unkn_y = 0.25601784945361983;
    msg.surf_unkn_z = 0.25089245702142104;
    msg.ss_x = 0.9561214352619426;
    msg.ss_y = 0.13339242508207416;
    msg.ss_z = 0.9543682232810022;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WIBQQFCZCCSSKHRBRGURFKBCWJLXAJUYRZYXZWQNAFXSANUKMQRHOYLDBULDXPOYOMMVUGLKFTFNASZJEEWYZJRSFSEBXTPCUPJTMBXHVVAWEICXOTTLCIPZDJBIVIKOHTNQUIXJZNCPFGUKJTHKCNWOFTWOQQAOKHRVLXDYDRKOQYIIEGMMNZEZYFAUDGNULGPDYCDHSANEZXSLJEDVPKWVPHVORQIMQBRMLFNGSVHBVTPPB");
    tmp_msg_0.dist = 0.009022245250458916;
    tmp_msg_0.err = 0.6457044106631407;
    tmp_msg_0.ctrl_imp = 0.22619810115081818;
    tmp_msg_0.rel_dir_x = 0.3450290265209509;
    tmp_msg_0.rel_dir_y = 0.920994230553305;
    tmp_msg_0.rel_dir_z = 0.29984884809706513;
    tmp_msg_0.err_x = 0.7192935473501696;
    tmp_msg_0.err_y = 0.8075275513963514;
    tmp_msg_0.err_z = 0.3427895063876254;
    tmp_msg_0.rf_err_x = 0.2848124283935711;
    tmp_msg_0.rf_err_y = 0.19498224531124975;
    tmp_msg_0.rf_err_z = 0.9060400373054687;
    tmp_msg_0.rf_err_vx = 0.5648621434287254;
    tmp_msg_0.rf_err_vy = 0.23307736810755275;
    tmp_msg_0.rf_err_vz = 0.4656020986895788;
    tmp_msg_0.ss_x = 0.8304724414886947;
    tmp_msg_0.ss_y = 0.5807512407314697;
    tmp_msg_0.ss_z = 0.09293023765746711;
    tmp_msg_0.virt_err_x = 0.22707998014347663;
    tmp_msg_0.virt_err_y = 0.06876238349001718;
    tmp_msg_0.virt_err_z = 0.6753777816781923;
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
    msg.setTimeStamp(0.8940263047373028);
    msg.setSource(11207U);
    msg.setSourceEntity(64U);
    msg.setDestination(50281U);
    msg.setDestinationEntity(4U);
    msg.ax_cmd = 0.05297623775327831;
    msg.ay_cmd = 0.6650458127762863;
    msg.az_cmd = 0.8338151945683471;
    msg.ax_des = 0.25183853125390165;
    msg.ay_des = 0.19747949159829825;
    msg.az_des = 0.9139449944460034;
    msg.virt_err_x = 0.24004933002035433;
    msg.virt_err_y = 0.7785066874951277;
    msg.virt_err_z = 0.7246918353536845;
    msg.surf_fdbk_x = 0.6758431847398436;
    msg.surf_fdbk_y = 0.2626660488584823;
    msg.surf_fdbk_z = 0.254234753847438;
    msg.surf_unkn_x = 0.5648110238758708;
    msg.surf_unkn_y = 0.6180025792868615;
    msg.surf_unkn_z = 0.09664576420831517;
    msg.ss_x = 0.0417471652914021;
    msg.ss_y = 0.8018304970927396;
    msg.ss_z = 0.46892319164324614;

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
    msg.setTimeStamp(0.07019827999888306);
    msg.setSource(12877U);
    msg.setSourceEntity(231U);
    msg.setDestination(10901U);
    msg.setDestinationEntity(168U);
    msg.ax_cmd = 0.8986494536104809;
    msg.ay_cmd = 0.3646489408093826;
    msg.az_cmd = 0.6292962093382588;
    msg.ax_des = 0.4504913758514748;
    msg.ay_des = 0.8163357535790434;
    msg.az_des = 0.32150351447532133;
    msg.virt_err_x = 0.44894810267124596;
    msg.virt_err_y = 0.4611878097271207;
    msg.virt_err_z = 0.9957733996732795;
    msg.surf_fdbk_x = 0.22036524581617356;
    msg.surf_fdbk_y = 0.46076970084932667;
    msg.surf_fdbk_z = 0.6072731527578833;
    msg.surf_unkn_x = 0.4838950720340851;
    msg.surf_unkn_y = 0.09797891709039286;
    msg.surf_unkn_z = 0.12183031214771445;
    msg.ss_x = 0.17771772903876215;
    msg.ss_y = 0.06137035443921135;
    msg.ss_z = 0.7227149192540671;

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
    msg.setTimeStamp(0.2667683819591249);
    msg.setSource(60779U);
    msg.setSourceEntity(250U);
    msg.setDestination(16624U);
    msg.setDestinationEntity(219U);
    msg.s_id.assign("LKKWLYTJAUMADEFOTYEIODWHWXKEAXBAFWLDXTISHSWFMKZSQYXQIMBFPQLXPLZZLUVMFHFZJWCRFXDLXZJIRJFYVCQMDVZYPOOQHYPRICAZURYNSHGVGCGKZDC");
    msg.dist = 0.09102528451300462;
    msg.err = 0.4640613118842284;
    msg.ctrl_imp = 0.8276903765281899;
    msg.rel_dir_x = 0.03151964068426649;
    msg.rel_dir_y = 0.5758810128998415;
    msg.rel_dir_z = 0.6548977972182913;
    msg.err_x = 0.634522272203403;
    msg.err_y = 0.10886970859000744;
    msg.err_z = 0.5006665707165922;
    msg.rf_err_x = 0.9802045652597334;
    msg.rf_err_y = 0.7260875231688475;
    msg.rf_err_z = 0.18166810679814138;
    msg.rf_err_vx = 0.4563694742430128;
    msg.rf_err_vy = 0.9206020151489182;
    msg.rf_err_vz = 0.22022005285036117;
    msg.ss_x = 0.834617129631045;
    msg.ss_y = 0.14140762285532626;
    msg.ss_z = 0.5379894442132291;
    msg.virt_err_x = 0.316638209947515;
    msg.virt_err_y = 0.04201193479220111;
    msg.virt_err_z = 0.3937470257816629;

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
    msg.setTimeStamp(0.9260680597558976);
    msg.setSource(28283U);
    msg.setSourceEntity(65U);
    msg.setDestination(58337U);
    msg.setDestinationEntity(43U);
    msg.s_id.assign("QSPVIVLEVEDDOGRBXEKTBZNZRZYRRCIRCNOEIXSDBFZSZWWFCTIWAHUYTDIGRGSBDMPYFVSVOGKODLRJUVBOWDFDNIAARLEBAQCJK");
    msg.dist = 0.4628344728046273;
    msg.err = 0.06025895205286469;
    msg.ctrl_imp = 0.03208497244650044;
    msg.rel_dir_x = 0.6098934756601936;
    msg.rel_dir_y = 0.25597984190286716;
    msg.rel_dir_z = 0.7209237867423034;
    msg.err_x = 0.7834066019158935;
    msg.err_y = 0.4015306955651945;
    msg.err_z = 0.6871485334112781;
    msg.rf_err_x = 0.20548631564789988;
    msg.rf_err_y = 0.02497426010038295;
    msg.rf_err_z = 0.5251182067750609;
    msg.rf_err_vx = 0.4987073194198498;
    msg.rf_err_vy = 0.9850084828198673;
    msg.rf_err_vz = 0.20097911818546665;
    msg.ss_x = 0.2711943503411691;
    msg.ss_y = 0.6506445286558435;
    msg.ss_z = 0.9148990269000941;
    msg.virt_err_x = 0.778381060603367;
    msg.virt_err_y = 0.23144920876593766;
    msg.virt_err_z = 0.7337828731827151;

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
    msg.setTimeStamp(0.6941304082679487);
    msg.setSource(31993U);
    msg.setSourceEntity(239U);
    msg.setDestination(25854U);
    msg.setDestinationEntity(201U);
    msg.s_id.assign("EDHUONNSGIGKPKVHMHNPDZTKGRTKOJARGZUWLVUERNUVDYVDGHIAXMAMSQZEKYWTJVVLFUTAJSBSGYFLNASIOSPIRXOSPHLDXSQZKNNBKPYWXJPXKTOWOJCFEBD");
    msg.dist = 0.5485117107594515;
    msg.err = 0.7588053293405085;
    msg.ctrl_imp = 0.6719154284228402;
    msg.rel_dir_x = 0.36935956463965824;
    msg.rel_dir_y = 0.3117274862453713;
    msg.rel_dir_z = 0.2911530612196923;
    msg.err_x = 0.8041737793433058;
    msg.err_y = 0.080635101903197;
    msg.err_z = 0.12047158355157317;
    msg.rf_err_x = 0.32003741886336057;
    msg.rf_err_y = 0.644552770394419;
    msg.rf_err_z = 0.0034656337957925665;
    msg.rf_err_vx = 0.3623361461472342;
    msg.rf_err_vy = 0.4157718424588569;
    msg.rf_err_vz = 0.9698691091342746;
    msg.ss_x = 0.0780870175831555;
    msg.ss_y = 0.7062856708756035;
    msg.ss_z = 0.967141767825657;
    msg.virt_err_x = 0.7974997121632249;
    msg.virt_err_y = 0.6589466614067959;
    msg.virt_err_z = 0.5911422899846783;

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
    msg.setTimeStamp(0.702843444667885);
    msg.setSource(28727U);
    msg.setSourceEntity(47U);
    msg.setDestination(38876U);
    msg.setDestinationEntity(3U);
    msg.timeout = 63826U;
    msg.rpm = 0.7735903993310692;
    msg.direction = 19U;
    msg.custom.assign("ILVWSTTUQLUODUJCFUTIHZLONCYRMWSOAFPUJRUUIIMJOQXMEBXIYREBTGKWNYFPHBLBTPCBCAYCJFNDSIYKVWWKDSKZKFKHRBQPSNHKXRXAMCSRGMXZQHYHDPLOVNQVLSUUQOADJJBPNENATRTERZZTGDQWBIAWVYVMGPASNELRQAIAYBZOCGPYNCXJLSDEPGKJCVOMBFH");

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
    msg.setTimeStamp(0.8252264895081219);
    msg.setSource(61326U);
    msg.setSourceEntity(126U);
    msg.setDestination(28866U);
    msg.setDestinationEntity(229U);
    msg.timeout = 18639U;
    msg.rpm = 0.4388446606458155;
    msg.direction = 28U;
    msg.custom.assign("YNMXKIHGZLOESQWHOBFJ");

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
    msg.setTimeStamp(0.595586170231374);
    msg.setSource(20169U);
    msg.setSourceEntity(104U);
    msg.setDestination(42572U);
    msg.setDestinationEntity(240U);
    msg.timeout = 63326U;
    msg.rpm = 0.6160141256827715;
    msg.direction = 5U;
    msg.custom.assign("ULTWAWUTKUCNTEXHEIJWPQDSTLKIVMMBFODTYGUVTDOEGYWEPUPYNMJUYYVPSOMTORNBPYJTUXQVBRFVTVYFMUILDGSXHRCNEWLVROLJWIWGFFKMAYHRQSRRCQMJOAPV");

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
    msg.setTimeStamp(0.6520972871153774);
    msg.setSource(60320U);
    msg.setSourceEntity(249U);
    msg.setDestination(5718U);
    msg.setDestinationEntity(154U);
    msg.formation_name.assign("ZTLTZDZHIJIOXONGPWPUNPUIAWGHGXELHELCAVIZQENJXBJMOWKFIWKWEWWQQXDGPDMNZUMGYVVGKZAVVSKHNFIBEBESLWKOHQUYBYSRFEYXJAMOGRCBSQECTLFUKAZCWJZVKLURWARCQPDGYTIMSJBVIKJMFRLZAZFRSHMCDSXXHDCMNQFIPOKPTCJUJDOOYVVMANQY");
    msg.type = 74U;
    msg.op = 36U;
    msg.group_name.assign("DATBDCSPGIXIZYAYNIGZVIWDVOOKQKXXDLHDRVMLFQSZSGDESJZWMMMEOSEBUNUYXJNINCSMRAZALFAHNEERICJLWGTBUHAJCXCHEFYKNGPXRIYJVTSXUMRXEUAOLKRBZVZOGUNFYNWCQKCUZPWFNLHHESPTVDHBPEQYQYJTLYWUVOEMOPTLQZZRUMMAIAYDDJ");
    msg.plan_id.assign("LCGXOWHLNMQZQFJHJBJGWWXQIKMZQRVDPLROJOWGZAADZHHELFVPVIMYTBMMBJPGSRWHZPMOKNICKVRWJQYCANALHWDBQOFNGZYUSUTRKGDPUUXQKDODUPTHFGAKEVOEEXSS");
    msg.description.assign("ZNWNWINMFHDTH");
    msg.reference_frame = 36U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16382U;
    tmp_msg_0.off_x = 0.8017122386060624;
    tmp_msg_0.off_y = 0.014547661319643024;
    tmp_msg_0.off_z = 0.8244358787627969;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.38416195480371784;
    msg.leader_speed_min = 0.46848948457455375;
    msg.leader_speed_max = 0.30355091673065804;
    msg.leader_alt_min = 0.13839947310029244;
    msg.leader_alt_max = 0.20107695650288004;
    msg.pos_sim_err_lim = 0.7943060890590309;
    msg.pos_sim_err_wrn = 0.0902175401137657;
    msg.pos_sim_err_timeout = 59220U;
    msg.converg_max = 0.5102704072446701;
    msg.converg_timeout = 18993U;
    msg.comms_timeout = 14677U;
    msg.turb_lim = 0.3592798783742738;
    msg.custom.assign("OUSSOHKZQJOJCHWLWTOYASFVRTALPSYBDGEGWBQBKJKHXVSRZYDMDAHPRSAULZKCOVCXBBSYXDFIGVYREJVWDKKFCRJEDHYQGPIMDRKVIZHKFWQGZLQQLIIYGWNJLNZMCHTJYJNNECVXWRHIPBEBUWUUWAOFTFICDTCPMUCETUVQIVXBSZMXUJD");

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
    msg.setTimeStamp(0.8051013441182251);
    msg.setSource(61914U);
    msg.setSourceEntity(37U);
    msg.setDestination(19827U);
    msg.setDestinationEntity(186U);
    msg.formation_name.assign("GOTNLLHQPBQVKIEVUQNUPWYEMEXVYTSVYUAHUKPIR");
    msg.type = 175U;
    msg.op = 109U;
    msg.group_name.assign("EUBZXOVUTUAOCNSXQFDIJ");
    msg.plan_id.assign("DYZEVVRTUSBWZGHXHQHWHNCFQBZFEOEEUQMYKTCOCRVXRJWXLTOQYTLSCGNYKGGNGICKBBKWMBNLMQOGN");
    msg.description.assign("IHAMRIKKEFIWQFMZOJSTNOIHJHFGZHPRJTBLLBFVGZSZCFJWPZDCIGQKLUGAKDOBWWPBCYLJKNPTZXHBZBLDVOWNODWUDQSVUSYWETCUPVERUAIXRHUQYKDDLMYQMJAHWPTCQEVLQMSWGBTYUPTMGCQGMILJSFRAUKHEEXCJTXOVGQLKVFSHNGDYAZFONCODEYZSTXXNUXPKGWMR");
    msg.reference_frame = 110U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25871U;
    tmp_msg_0.off_x = 0.7392315324834569;
    tmp_msg_0.off_y = 0.14200304944491748;
    tmp_msg_0.off_z = 0.9363965417275666;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6239248076765942;
    msg.leader_speed_min = 0.6490241343859584;
    msg.leader_speed_max = 0.8852586749754164;
    msg.leader_alt_min = 0.6518805368549916;
    msg.leader_alt_max = 0.7427346574375063;
    msg.pos_sim_err_lim = 0.4501831704393954;
    msg.pos_sim_err_wrn = 0.005287461616289124;
    msg.pos_sim_err_timeout = 54083U;
    msg.converg_max = 0.8829609183758504;
    msg.converg_timeout = 7655U;
    msg.comms_timeout = 38787U;
    msg.turb_lim = 0.5421598872221483;
    msg.custom.assign("ZLTEOFNJWIQCTDNSPLUGTQRQIXLHEJBZHXJH");

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
    msg.setTimeStamp(0.1898695151199119);
    msg.setSource(40122U);
    msg.setSourceEntity(197U);
    msg.setDestination(48303U);
    msg.setDestinationEntity(170U);
    msg.formation_name.assign("GXHQQCWMDAXPZQAIDIXCPQDPYUHYVCGFSSHPQERUSZFGZZKAHMYJLAUQIDBRWCHPBJMLDFZJHFMVGQYNIPVXDHGEPRJYEMVMRROTAABJEECSNUXMITILCPLKFWVLEHJTWEEMWLWGSRHKHUCXKCOGOANIKBNZFBUOKWTFLUIOTMRZQLSMJXYFKQYOJOBNTWODDXZIVVXVYSBCFAGRESZCINWKZSKRJEBQOONVVNYLXTAWU");
    msg.type = 151U;
    msg.op = 154U;
    msg.group_name.assign("NKXKAIOWXHUBHZSZCQOYVFIJNHYFTDGYOJAHLVQFSJETLDJZMHFMNLPKCWUTKZNJOOZNRVDWIVMLMEHNHYLTGAYCIZVWPLIQFQWPDPEQRFXXXYRNCUUVEBURTZQQIDEJUZXSUJVUBAIXOANEU");
    msg.plan_id.assign("EULJASAAWVBIYZKFAICERXKMWVCGQIYUJOKOXNADIGMRBQRRTQKUQEENHTOHVCQGHAEMVMQLWSDLYDCUJKYYNEIZQJSUDFKPERZGJVNVLEWXMWGPXSNCFWSIDOYHRGFNXYNWLHPBCZBRDYJWN");
    msg.description.assign("TIJZKPSWSBIWCJJMEIPSATFUGDFDMVKDNEUQNTLU");
    msg.reference_frame = 142U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63649U;
    tmp_msg_0.off_x = 0.43569462731732445;
    tmp_msg_0.off_y = 0.07564172411564263;
    tmp_msg_0.off_z = 0.07848869906793332;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6947168499328027;
    msg.leader_speed_min = 0.6981817736531124;
    msg.leader_speed_max = 0.3346964746411355;
    msg.leader_alt_min = 0.11595923928304319;
    msg.leader_alt_max = 0.6411657242178086;
    msg.pos_sim_err_lim = 0.7027716142605469;
    msg.pos_sim_err_wrn = 0.17516802333815618;
    msg.pos_sim_err_timeout = 12655U;
    msg.converg_max = 0.3014998403296967;
    msg.converg_timeout = 32397U;
    msg.comms_timeout = 33924U;
    msg.turb_lim = 0.6312992644423313;
    msg.custom.assign("WLRPIRLOIDILJKXBYXGEHOSXQDXKYCRSSSQZJIZKUPGWUFLGEMZGYOMJVUNTEVCMQTVHUPXXYYEQJAUIRTBGDCRFYZMFRAWGOOIUTBZNBKKPQUCFFSZFDXYSNNLDFTDRAUQGPHGJEEIYSKMQVPZAQVGJRVANPIDEASBOBDAUPOPTWKHAMLTKRWTAMHACVSWNEWMWYZBDIOHLWURXICNCXXHSBFJELKP");

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
    msg.setTimeStamp(0.7755992383236584);
    msg.setSource(11554U);
    msg.setSourceEntity(214U);
    msg.setDestination(3466U);
    msg.setDestinationEntity(167U);
    msg.timeout = 10240U;
    msg.lat = 0.49701308738805705;
    msg.lon = 0.10479819177705618;
    msg.z = 0.5718567973756724;
    msg.z_units = 209U;
    msg.speed = 0.9534095789125818;
    msg.speed_units = 144U;
    msg.custom.assign("KIITFSKXMDCGRASUMYJVWZLITMZXZPJGDBZGNFSAMZQUJSLMFIRFQJQMQDQNATYXOTVWQHDVCOECDFFHUOWBYJGHAFAUXNMIHTLCIYDBPGWVZABJLBETSMELEBNSPLOPYRZRKXUVXLGHFTEFTQHOZHYKNLCJTYHBPOWUXVGVJVIIOIYRNOQSPHNXOCCMCUYTRSUQKDDVQNXDKPLWYNWBWRAJPPZGMBGXCAEEEBZUCWGWS");

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
    msg.setTimeStamp(0.17824070090945143);
    msg.setSource(57988U);
    msg.setSourceEntity(77U);
    msg.setDestination(9500U);
    msg.setDestinationEntity(51U);
    msg.timeout = 5791U;
    msg.lat = 0.8998355758041843;
    msg.lon = 0.5209646008062911;
    msg.z = 0.9870213642506254;
    msg.z_units = 230U;
    msg.speed = 0.07942576487613173;
    msg.speed_units = 244U;
    msg.custom.assign("HUEMORHHRMXKTKASSTUJWQWPQZDZRGUAXWPMOQXCCWGNYKAQFPRPBNQMJDGGBVSTODYTAH");

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
    msg.setTimeStamp(0.9013320613770454);
    msg.setSource(46411U);
    msg.setSourceEntity(13U);
    msg.setDestination(62099U);
    msg.setDestinationEntity(251U);
    msg.timeout = 15814U;
    msg.lat = 0.028070076606162786;
    msg.lon = 0.9316005688729414;
    msg.z = 0.19314809436404168;
    msg.z_units = 132U;
    msg.speed = 0.24113010969512394;
    msg.speed_units = 17U;
    msg.custom.assign("ZAQDALROPLRCQANBLGCGCOHHIUDXKSZBFEBKBPVAIFATGIOGYRXVPQCNYLYVWMJVYHZUTMMDXSZPMEVJRSFNDFKROTMNYSNNMWXGLAMBIYDXQLWIVHGBDHCTKFGSMFUFTRWYAJQRXNDUQOCDNRDCGNTLJSZWJWKLQEJWPQVCXFPPO");

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
    msg.setTimeStamp(0.9978185198507423);
    msg.setSource(48435U);
    msg.setSourceEntity(68U);
    msg.setDestination(20875U);
    msg.setDestinationEntity(105U);
    msg.timeout = 30069U;
    msg.lat = 0.6593454486726795;
    msg.lon = 0.03509268207634064;
    msg.z = 0.6513497764538907;
    msg.z_units = 142U;
    msg.speed = 0.5413252141594407;
    msg.speed_units = 79U;
    msg.custom.assign("WCXRBIMSTJOIKBGPIIKRGRBUTTOZFDTJAXNHAXLIJKLMNKHTPRFTABFIGZUSXQDDUKURYGDXWXLVAVRFJSONWPSVJMYDGGQRDJKUMOZKRHMGXFQPFBCEDQHKNAWVIOVVBCAYXZQJPMKEPYBYTMAIOFCEYSNVNCLGEZXSZMYHZFSUVCNSPWE");

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
    msg.setTimeStamp(0.6195543015955434);
    msg.setSource(33247U);
    msg.setSourceEntity(91U);
    msg.setDestination(4729U);
    msg.setDestinationEntity(143U);
    msg.timeout = 2661U;
    msg.lat = 0.25945821595490914;
    msg.lon = 0.1844721805548032;
    msg.z = 0.48202040171522165;
    msg.z_units = 211U;
    msg.speed = 0.7828014489347265;
    msg.speed_units = 92U;
    msg.custom.assign("ZLHNVPMXGYPLGIST");

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
    msg.setTimeStamp(0.25723773393425087);
    msg.setSource(31462U);
    msg.setSourceEntity(113U);
    msg.setDestination(39291U);
    msg.setDestinationEntity(169U);
    msg.timeout = 35311U;
    msg.lat = 0.45055609057116164;
    msg.lon = 0.47731006072346693;
    msg.z = 0.9629407956277932;
    msg.z_units = 119U;
    msg.speed = 0.395699750989985;
    msg.speed_units = 9U;
    msg.custom.assign("WWCMNMOUQYEYOFVSCIFNPHGIYBJUXT");

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
    msg.setTimeStamp(0.7686392401511284);
    msg.setSource(11052U);
    msg.setSourceEntity(81U);
    msg.setDestination(58952U);
    msg.setDestinationEntity(126U);
    msg.arrival_time = 0.9477116108069937;
    msg.lat = 0.98908174123307;
    msg.lon = 0.6144548201299845;
    msg.z = 0.7907868229145875;
    msg.z_units = 104U;
    msg.travel_z = 0.32556583270426975;
    msg.travel_z_units = 2U;
    msg.delayed = 19U;

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
    msg.setTimeStamp(0.06073094095114062);
    msg.setSource(38504U);
    msg.setSourceEntity(111U);
    msg.setDestination(57287U);
    msg.setDestinationEntity(239U);
    msg.arrival_time = 0.3671507159336417;
    msg.lat = 0.9204687523113125;
    msg.lon = 0.6427771103549497;
    msg.z = 0.3445230901739368;
    msg.z_units = 16U;
    msg.travel_z = 0.9555024619540943;
    msg.travel_z_units = 61U;
    msg.delayed = 116U;

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
    msg.setTimeStamp(0.8296940148052079);
    msg.setSource(37990U);
    msg.setSourceEntity(234U);
    msg.setDestination(20346U);
    msg.setDestinationEntity(154U);
    msg.arrival_time = 0.47918608307027755;
    msg.lat = 0.2840092224729459;
    msg.lon = 0.3499245374998675;
    msg.z = 0.2681190787507325;
    msg.z_units = 83U;
    msg.travel_z = 0.7443016184488043;
    msg.travel_z_units = 190U;
    msg.delayed = 117U;

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
    msg.setTimeStamp(0.1746595034480789);
    msg.setSource(5316U);
    msg.setSourceEntity(34U);
    msg.setDestination(29317U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.7580537467373717;
    msg.lon = 0.9972652152326387;
    msg.z = 0.13063429686186334;
    msg.z_units = 246U;
    msg.speed = 0.8286247742526809;
    msg.speed_units = 250U;
    msg.bearing = 0.24633614196599796;
    msg.cross_angle = 0.47992481462997527;
    msg.width = 0.24776989417971562;
    msg.length = 0.8971932194913012;
    msg.coff = 102U;
    msg.angaperture = 0.004576128046866468;
    msg.range = 55270U;
    msg.overlap = 34U;
    msg.flags = 125U;
    msg.custom.assign("NVWCNNYEJXYYSRAUUKKCDIGQAWZKRPZZTONLTFJPOMCQCXACRRPKUTOBSFPHE");

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
    msg.setTimeStamp(0.8070291802900038);
    msg.setSource(42366U);
    msg.setSourceEntity(154U);
    msg.setDestination(42822U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.046313466277594695;
    msg.lon = 0.9195430918878925;
    msg.z = 0.16618452240548276;
    msg.z_units = 206U;
    msg.speed = 0.03442236852776348;
    msg.speed_units = 129U;
    msg.bearing = 0.9104553988768368;
    msg.cross_angle = 0.8030049804648809;
    msg.width = 0.055190508146720774;
    msg.length = 0.21147808634841014;
    msg.coff = 235U;
    msg.angaperture = 0.24407715380980055;
    msg.range = 61505U;
    msg.overlap = 231U;
    msg.flags = 45U;
    msg.custom.assign("SFCPGNDQFGIWJWJCRQUUARGNKPHJUPTDJSMKWVYGCZICMRSWNZDKQZOLZSXPCNJUQHZXUKWTTKOGMGQFWUQHBSCBELATWIILJHHHZKFDABDLETOKTSORIXQHHYMIYBMRPVZVYOYLWVRMZPUPDWBLYRQLEJAALKMNVXSAFMCDYCFISKOQITEANZEBARYLHBPXGUMIGNVUUBIOCRETNXYNMPDVBTGTHKXQFLSDZAJDAFFPEOBEEYGXVXSJCOE");

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
    msg.setTimeStamp(0.11129334866628238);
    msg.setSource(6012U);
    msg.setSourceEntity(210U);
    msg.setDestination(33783U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.2757288856344513;
    msg.lon = 0.9323677975936971;
    msg.z = 0.5425269224442352;
    msg.z_units = 114U;
    msg.speed = 0.023476927276413817;
    msg.speed_units = 160U;
    msg.bearing = 0.9277871281153709;
    msg.cross_angle = 0.8445405662901637;
    msg.width = 0.21489252929799663;
    msg.length = 0.02256367175058016;
    msg.coff = 167U;
    msg.angaperture = 0.4143197095824327;
    msg.range = 25468U;
    msg.overlap = 47U;
    msg.flags = 63U;
    msg.custom.assign("XOOLWOAOZTMTHJYGDXMEZQMVWJUJLAFJVVHDUZOGVRELZVCYSIIYIBUMGERXKMPDMQXDUPHQMTTKALPBBFBMVQDWWNQEFGLVDKNVJEJCJITAWKQSAJV");

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
    msg.setTimeStamp(0.16729646985746394);
    msg.setSource(19703U);
    msg.setSourceEntity(133U);
    msg.setDestination(22562U);
    msg.setDestinationEntity(207U);
    msg.timeout = 16172U;
    msg.lat = 0.6843470836232307;
    msg.lon = 0.07455302972482858;
    msg.z = 0.5643299741872846;
    msg.z_units = 229U;
    msg.speed = 0.46478735469395915;
    msg.speed_units = 69U;
    msg.syringe0 = 132U;
    msg.syringe1 = 72U;
    msg.syringe2 = 20U;
    msg.custom.assign("RFRYAAANGZOWSFWVNQGFIZMMTHGDSMQPSANQZBWIFSAEDKRKBUCJXKXGVZKCYTNBPWOPFGZTLBDJMCDLTMFSSVUDQXOCJRNYRTKEBGAYMIMZRKJCRIBOZWRJTUAUUDPQXOSAQDOXVEVUEOLILQMXHSHKPFRHYELJQIYHLREYMMHGPWNWIQLJNPOSGIYBDVTICGHUCQNDPFNTEOJAYPALKKCUKYHWXWJGUEEZXHXBOFBWZIECULFTCJVDX");

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
    msg.setTimeStamp(0.6134107443139803);
    msg.setSource(33740U);
    msg.setSourceEntity(8U);
    msg.setDestination(10486U);
    msg.setDestinationEntity(174U);
    msg.timeout = 58U;
    msg.lat = 0.25941863867388426;
    msg.lon = 0.7940100779682158;
    msg.z = 0.6915030521577615;
    msg.z_units = 67U;
    msg.speed = 0.9200056556532212;
    msg.speed_units = 219U;
    msg.syringe0 = 54U;
    msg.syringe1 = 105U;
    msg.syringe2 = 202U;
    msg.custom.assign("DPXRGAEHZFWELCEUVAPFHNSUJTDFWBFSJTALDWHKARAFQOOSUYLEBYKQKVQHGURXXDAYSSZGZMUHVWNWWODYJIFGCHCBCFPXVAGMLKXDYLHKNSTUOAGXHDPZCFJGHOWZZXJYVJQXPLOMEIBMTIERIWPMTZYCEYNPJIBVRTIVUAPEHFLMOTIFIQENLBKTCMDVVQCRCDB");

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
    msg.setTimeStamp(0.39739692567315466);
    msg.setSource(27735U);
    msg.setSourceEntity(113U);
    msg.setDestination(5593U);
    msg.setDestinationEntity(162U);
    msg.timeout = 23629U;
    msg.lat = 0.0525143188336501;
    msg.lon = 0.9624527600272484;
    msg.z = 0.3640551392200324;
    msg.z_units = 83U;
    msg.speed = 0.794984060422189;
    msg.speed_units = 128U;
    msg.syringe0 = 67U;
    msg.syringe1 = 137U;
    msg.syringe2 = 244U;
    msg.custom.assign("FNWHRXHHPERIDTNGMSPWBZXOGDDFRKRTALIQPTBHSZGNFUNJWBMJHKXXRNSMBNYCJGURAVJKXVAOGZVVWGEIICPXECISQWJLVDIYZRCDQWLUOJJFBIGOEEYDYHBTDQYRDPWMVNAOILYSBACFMKXPMTYLJKZJHZUBUAHFISMEVEYGUKEFYZQCPMTFXPHUPFSOWTQM");

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
    msg.setTimeStamp(0.2984028739497383);
    msg.setSource(26377U);
    msg.setSourceEntity(76U);
    msg.setDestination(53907U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.7419996298163657);
    msg.setSource(38652U);
    msg.setSourceEntity(135U);
    msg.setDestination(37453U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.0021257586818829166);
    msg.setSource(14495U);
    msg.setSourceEntity(87U);
    msg.setDestination(60155U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.951368149411226);
    msg.setSource(16227U);
    msg.setSourceEntity(178U);
    msg.setDestination(55473U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.9283833633797884;
    msg.lon = 0.28979055284877187;
    msg.z = 0.35400467392537804;
    msg.z_units = 242U;
    msg.speed = 0.7394487387909465;
    msg.speed_units = 134U;
    msg.takeoff_pitch = 0.7012782491076311;
    msg.custom.assign("RUZGNANQNIUTGQY");

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
    msg.setTimeStamp(0.4598944741626232);
    msg.setSource(25209U);
    msg.setSourceEntity(219U);
    msg.setDestination(40974U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.6380263955019314;
    msg.lon = 0.39589871797756104;
    msg.z = 0.43452802638213117;
    msg.z_units = 203U;
    msg.speed = 0.6853229231897631;
    msg.speed_units = 242U;
    msg.takeoff_pitch = 0.9660330716938572;
    msg.custom.assign("BVDWABICIKRDKFEWDCUUIEUIBTWSJYLHMCMKOOKDPRVLVVUXGJCLTFXMXQZMZUEWXIYV");

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
    msg.setTimeStamp(0.3267706211926006);
    msg.setSource(52948U);
    msg.setSourceEntity(194U);
    msg.setDestination(43666U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.7582310173415558;
    msg.lon = 0.23165374936092598;
    msg.z = 0.2571046701722929;
    msg.z_units = 32U;
    msg.speed = 0.46851945787212257;
    msg.speed_units = 26U;
    msg.takeoff_pitch = 0.5023717068692816;
    msg.custom.assign("YRMQNRKVYSVOMIHFGUCLIQHMM");

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
    msg.setTimeStamp(0.573442193047895);
    msg.setSource(24866U);
    msg.setSourceEntity(85U);
    msg.setDestination(11750U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.19503564406158447;
    msg.lon = 0.6686572087479224;
    msg.z = 0.4412831266627212;
    msg.z_units = 156U;
    msg.speed = 0.9906629356889493;
    msg.speed_units = 228U;
    msg.abort_z = 0.7205134907015506;
    msg.bearing = 0.1398087265971123;
    msg.glide_slope = 146U;
    msg.glide_slope_alt = 0.7237519146176128;
    msg.custom.assign("ZBVZJJOCMSAIGOEIGAMMSZYCVHPLHSNGMCDRWSUTBXNNIEKKEVGXXFREWNIETCSIUJAYDLUDBILHOAPTAVNBCERCYXKCWBWOCYWAXYMLNYYPAVTKXQVOYDWBKMHUYWQUSGLMZPQOORBTBZMVFQFINDJVPJGMRHGXPPHZUNRSLRWQZHAKCJHFITPFXEQSGPQUIEWZOLVTOTZNXRSL");

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
    msg.setTimeStamp(0.19105949201646089);
    msg.setSource(1207U);
    msg.setSourceEntity(212U);
    msg.setDestination(59624U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.9540799580014188;
    msg.lon = 0.3300533662963012;
    msg.z = 0.862187912825412;
    msg.z_units = 116U;
    msg.speed = 0.912482052975389;
    msg.speed_units = 53U;
    msg.abort_z = 0.5327563042222196;
    msg.bearing = 0.8173042461663885;
    msg.glide_slope = 168U;
    msg.glide_slope_alt = 0.3126767788120609;
    msg.custom.assign("EONVVMIUDEXQUGOLNFHTJNANEMJKVSWXBCYXYLDUKJJYXFCLLLRBBTJGHJTDNPGQCFUMICMHCNSZUCAZFYGMYKSCVBSMAYXOLKBZWKBMJJMENKBEAUWHPKZALTOQBEMGZXQGVGJOUWSDTUIOCIWSYWIMYIOZRNTDHAWSPYCARVFPPZVHWHFRJVATEQZPTRPNSAFRPEDSRRKOIPXDQLVUW");

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
    msg.setTimeStamp(0.8576898770852581);
    msg.setSource(61713U);
    msg.setSourceEntity(101U);
    msg.setDestination(43488U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.9003222185633166;
    msg.lon = 0.1898041604685171;
    msg.z = 0.5294035580070957;
    msg.z_units = 18U;
    msg.speed = 0.71848160950912;
    msg.speed_units = 98U;
    msg.abort_z = 0.774051064028471;
    msg.bearing = 0.24205620154810625;
    msg.glide_slope = 175U;
    msg.glide_slope_alt = 0.9755921314312926;
    msg.custom.assign("AMUAVEKLRGNQZEUQQWBCJVTMWUTIMBSGLJBBOYCDZGVJECSIZVCGTPJZXLHNRNVYQKWKNLGMHVBPNGHFEAQXSUNUHFASKUIXOVTCCNXKPTZORPPXGWROCQHFXOEUNOAFREVITIROEA");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.18472402308434477);
    msg.setSource(42752U);
    msg.setSourceEntity(110U);
    msg.setDestination(827U);
    msg.setDestinationEntity(238U);
    msg.op_mode = 209U;
    msg.error_count = 122U;
    msg.error_ents.assign("KFRDULLXXRLODIRUZETSRMXFKVZQNLTTYVTMPJPGQVYMYCDPEIDDZMRLJOHTQDNZMJJNPKKFREVIXJOEYELCTCSYMCWJJBGOIINUDAJTHYKZMAHODWQGXWSXKRFDEVGSMPXPSZZFBRPBRHWKBAAOBKNOBUMVLCBVONBGKUTHFQUYEEVNZUUGTIZECQHZFWGAIINWQHCXFOUXSMIYFBASQXKNGAVY");
    msg.maneuver_type = 37135U;
    msg.maneuver_stime = 0.24731481174899206;
    msg.maneuver_eta = 45049U;
    msg.control_loops = 2365836448U;
    msg.flags = 127U;
    msg.last_error.assign("BSWMLGJSRQVLAWRUTOBHNXLFTNSATQZEMXPMMJSOPYPZDVONNPBSBFVERCEDAWCTHXPBAFVFLOVNHVRGQKFBJGOZRCNBMCUMXYNXVWJHSQML");
    msg.last_error_time = 0.6563573045687372;

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
    msg.setTimeStamp(0.11396963421931594);
    msg.setSource(24516U);
    msg.setSourceEntity(19U);
    msg.setDestination(5584U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 109U;
    msg.error_count = 179U;
    msg.error_ents.assign("XTIPGGZYRLBAOTDSLKAYK");
    msg.maneuver_type = 58767U;
    msg.maneuver_stime = 0.09824286416541628;
    msg.maneuver_eta = 44737U;
    msg.control_loops = 3388835445U;
    msg.flags = 206U;
    msg.last_error.assign("SKFWKXBWNBOMHYDOPIUPWTQRHFZDRHBKXWIMATAHYDLUYCXIIQXSYTTYZGUOUNELEUISNZXKJVSCKXCGANDJFZOZOYOVDIOD");
    msg.last_error_time = 0.8726913734211993;

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
    msg.setTimeStamp(0.967740488843595);
    msg.setSource(54806U);
    msg.setSourceEntity(187U);
    msg.setDestination(57163U);
    msg.setDestinationEntity(72U);
    msg.op_mode = 109U;
    msg.error_count = 31U;
    msg.error_ents.assign("BPFTSGXVRHZUXDKOIJJGGMESYC");
    msg.maneuver_type = 4511U;
    msg.maneuver_stime = 0.5886543308895019;
    msg.maneuver_eta = 38072U;
    msg.control_loops = 3186890981U;
    msg.flags = 81U;
    msg.last_error.assign("NYIDMZRXRWUYWACDEXWJJIANLXIELZIABDDPCCERKTTSCFODUHYFQQUOMSWDQBMGILYOOUXISZXUVAYPJCJNZVX");
    msg.last_error_time = 0.9623080140633163;

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
    msg.setTimeStamp(0.4374342214719442);
    msg.setSource(41823U);
    msg.setSourceEntity(81U);
    msg.setDestination(43959U);
    msg.setDestinationEntity(125U);
    msg.type = 130U;
    msg.request_id = 29867U;
    msg.command = 78U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("RKFXYISTHIDGIWAXBE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43545U;
    msg.info.assign("OOPVHUOFKFHYTYQAGJKLHIYBFAKPUCCRVUFZSHMMHSYZMUCVEVXSBNJKZIIQFEZLWVYWIWUAPIXZBOKRCEPTEUPDJXGJGZMQLPEJAVEIHJBGGNFTMMRGJXESZHADLWSANMRWAEYORKDKNBVVNDBTEVGXJYIHBCTLZVNKYOFBIMYQTCFRFULMWASGDWKSDUKSSTFWNRINLQROTQWOCACNIYRDQRDQQJXUPXQDXCLUJSDWOHXXNHZPBBZCLMPOT");

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
    msg.setTimeStamp(0.43739039020661763);
    msg.setSource(51267U);
    msg.setSourceEntity(33U);
    msg.setDestination(49887U);
    msg.setDestinationEntity(213U);
    msg.type = 253U;
    msg.request_id = 61051U;
    msg.command = 143U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.9021038974023544;
    tmp_msg_0.lon = 0.1672033962996059;
    tmp_msg_0.z = 0.2762746973475514;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.16194543472953826;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.abort_z = 0.9672751206685364;
    tmp_msg_0.bearing = 0.9035497301344592;
    tmp_msg_0.glide_slope = 183U;
    tmp_msg_0.glide_slope_alt = 0.3115834279638191;
    tmp_msg_0.custom.assign("CQUKXTLKCEUTBNBVPYPAWBOAJYHQEJZKZIHUCRKOMIRIIDCZVBLGZVFWJPLNKRBMKJJSGCKVG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26503U;
    msg.info.assign("OHSBYPKJETSLAHYPDHNADKWNKGLEVQMZMIJVHEFVBOOOTCLQNBSOZLJZDVMUKTGRCYPCJQWFMZCRYBPVZWOCBDM");

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
    msg.setTimeStamp(0.36185194651869024);
    msg.setSource(47528U);
    msg.setSourceEntity(107U);
    msg.setDestination(63293U);
    msg.setDestinationEntity(116U);
    msg.type = 142U;
    msg.request_id = 30394U;
    msg.command = 129U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 36912U;
    tmp_msg_0.lat = 0.33139116562890003;
    tmp_msg_0.lon = 0.9666533862800981;
    tmp_msg_0.z = 0.39572455201907775;
    tmp_msg_0.z_units = 155U;
    tmp_msg_0.speed = 0.5436931985534196;
    tmp_msg_0.speed_units = 29U;
    tmp_msg_0.custom.assign("OIRISMSBDLOFPUHJAUOSMKLFCSEHZGIVXLJCERHRNJUGMYEXYX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12002U;
    msg.info.assign("NIBKMKNHXYULNQIJATNWQCOIDTEILLXHRYCEBJBMCYTYRXUMCZJSUTBWHPSQYPUNNVXDDYVPBEBAQPFROFWRKCICODUMPJSWEJJAAXQPQNHFBLDEVOLATAIENRVFGXZFLFRHGSRVZUOMF");

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
    msg.setTimeStamp(0.9442556517398749);
    msg.setSource(23976U);
    msg.setSourceEntity(177U);
    msg.setDestination(64159U);
    msg.setDestinationEntity(80U);
    msg.command = 73U;
    msg.entities.assign("IKDDOWMHJMRDZTRVIUBWKGLMSHRQPILMEIXVYPCTOYRTJGFTWLSOIJMCNKVQFYSAVBVQARLEJWLOOBUVXETQOLTFQEJMVROZYZERXUMOKKEDYQIFQIGBLNZPZAGUIBFPNKZHTNXWAFAAUBQEUUHBPCZGJRMHDNYHRGVCFTIYJHXXEFZCCOMSGNBUSDWWYWJZAHSCKCLYXYSIPBBWDTSNZHVPASMWJKEADLRKXQFPCGTELDFNPPVKONUSXGXUD");

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
    msg.setTimeStamp(0.24043786412268464);
    msg.setSource(65002U);
    msg.setSourceEntity(139U);
    msg.setDestination(45929U);
    msg.setDestinationEntity(3U);
    msg.command = 44U;
    msg.entities.assign("WMNKDZPMXEVVZZUXQAVLBQUDCXJFGHBAQGHZGIYYILLCLHVFJNCOKWNSYLIFEDNRFWGHUCEPEBCTZEQTTDEURWFIZRQWNTOBLBGCAHKHB");

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
    msg.setTimeStamp(0.06612201264530682);
    msg.setSource(54779U);
    msg.setSourceEntity(195U);
    msg.setDestination(45473U);
    msg.setDestinationEntity(122U);
    msg.command = 2U;
    msg.entities.assign("IXGBSLXVXELGCCCIKKLXNFRETDSMXFWXZWZLAHQNZBSFFLESQYEQGWWYZURSNENQKLPMSKPIPYNIASOBSUNOPQHABHAIJSUWZTSMVVHVTDOEPNYUEPZJAEKMAZKMMYZVXCRUUTUPVOWZRGFAYGJTDNEHWGGRMDBJRVCUFHVJQVJIJFJ");

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
    msg.setTimeStamp(0.28004928218140746);
    msg.setSource(5025U);
    msg.setSourceEntity(223U);
    msg.setDestination(6568U);
    msg.setDestinationEntity(4U);
    msg.mcount = 121U;
    msg.mnames.assign("WBPEOWUXOAFAYJRACMJBCQESFRSBOXIVOTRXZACKXXVDXRGFSYGKDIEJWFWEHY");
    msg.ecount = 125U;
    msg.enames.assign("WRMHDDUGTXQOCZUQRCQAVPIEKAXGYXZBGSSTTDZRTCCFHRLFYFFGDSGIWDXNYQGEBKCWHBQVUGFKHIWPJDOTABPAAXOJCAYLSGEYLHJIKOMSQQTPNFDWDRDNJHNKLNEZUWCVPLZAOUIAFZQICVVEHKIYMZUTRSKOJLOLEYFVTTCJLOYPKBAEXNRXBRNPBWMRSEVIJKBCTSUSLQJPODAOZVMENY");
    msg.ccount = 184U;
    msg.cnames.assign("UHBRXDUSAINPRJDUTRNBUDBBAXEMKKWZLJCFCLELXPJVJMPXWDNKQUJEJZIFGSDFMGWJACYFNABVZMGCZUOIOCQOMWPTIKM");
    msg.last_error.assign("AXZKUIYZBJIPHFNT");
    msg.last_error_time = 0.22755988093485235;

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
    msg.setTimeStamp(0.279177393560074);
    msg.setSource(17256U);
    msg.setSourceEntity(41U);
    msg.setDestination(43570U);
    msg.setDestinationEntity(80U);
    msg.mcount = 87U;
    msg.mnames.assign("VLBMLJOMPOZAKUVJKRHMZYLHYNQUPGPINHFVXRXGNQZOQBCZIQIVQHPSSBXNXFAWEHKVNMYFJGDGFDBTCLHYQFZCIYZUVQAIEBNRYKX");
    msg.ecount = 115U;
    msg.enames.assign("ZNNKOVCSWMQTVSDJALMQPTTBHPIVPZUUNPTCWFAJNXORWVOSAEKIGZJIMGAHDZTGJQXTTHICDLRRPVFFCKBRMSQLNJ");
    msg.ccount = 63U;
    msg.cnames.assign("SDIVZEWZWYCHVMYLMCKTS");
    msg.last_error.assign("KBXDWRHEOGTEYDGGHMVVXCVQOFUUFJHRLGCGJPNCODTFJCIOAWNDHBKAXZNJPQKBBBEUGAGUERYBXHLLCNUMVKYLPVRITBSKFVTXUDAYQZQOJTKTLYWSLVZWNBIMUXYAPZHTPYJSWAQVMZKLNNWPJRCZCLXALDIMVRRQWCXVKDEYENYHZFXLEHKSDSIMAFZQSIGTBEOSYAHFKPAQOHJDMTGUCMIOOWNIWCTGJREQXPNMESRROZI");
    msg.last_error_time = 0.6422077749418692;

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
    msg.setTimeStamp(0.4576088568685702);
    msg.setSource(55058U);
    msg.setSourceEntity(181U);
    msg.setDestination(42568U);
    msg.setDestinationEntity(218U);
    msg.mcount = 94U;
    msg.mnames.assign("ICMGXOJFJHDFAKWCIQVUH");
    msg.ecount = 129U;
    msg.enames.assign("CACHDBSQJRAOLMHLZGEVDNEKZKTSDNQIIDJQVPWHYZCWVYIIXFKUHXLXVQBMYSCURZXKYHUHXBDOYLPTSAODIRJVSPWGYNPYWKQRAZGFJOGSURXLPJGQYONNTTMDWPTISLERHFFUIRNIYIQPLKAHWIGZDABOKGAFMEVHWQFQUPAMCENNHLGQTCPEETBEVKMAUZCSTJUKCBJVLFFFEVOMVF");
    msg.ccount = 137U;
    msg.cnames.assign("ETHEFMWIETCJBJFHMKMNGPHNNSWUSSSUGPCFXDZCGJZYAWUWDSZJ");
    msg.last_error.assign("PBZQHFDZYXKQWRJTMAASSLWNXSUHYDEQRWMKOAKEXZPILPFHJCCCFUOBIVQEJZBDAMEOHMMIFEITYOWLJDCWONBNBRXEUMQHPINRVBAYBDTVAZEIUVTCQHCKQLIEOPGROINCVWMVLGSJSFVVMFHQGCBFRGXAHJZRGLZTTPTDOGJJGTUXUAIVGSWFDYOMLKKQBXXFPDULLKUQPRYYASGEYSNLZNXBNTHRUZOCW");
    msg.last_error_time = 0.9721869917544761;

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
    msg.setTimeStamp(0.2752705655510812);
    msg.setSource(22040U);
    msg.setSourceEntity(90U);
    msg.setDestination(53604U);
    msg.setDestinationEntity(211U);
    msg.mask = 105U;
    msg.max_depth = 0.12790490555357792;
    msg.min_altitude = 0.15307262762327334;
    msg.max_altitude = 0.7467375036976112;
    msg.min_speed = 0.014588125242313343;
    msg.max_speed = 0.15639907235210493;
    msg.max_vrate = 0.025112021897437997;
    msg.lat = 0.9983817262677352;
    msg.lon = 0.8471015029334461;
    msg.orientation = 0.9086896337295013;
    msg.width = 0.25592565838432635;
    msg.length = 0.7224874292782708;

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
    msg.setTimeStamp(0.06729556242376322);
    msg.setSource(40233U);
    msg.setSourceEntity(118U);
    msg.setDestination(25088U);
    msg.setDestinationEntity(205U);
    msg.mask = 144U;
    msg.max_depth = 0.35286608480107073;
    msg.min_altitude = 0.0036575767556574768;
    msg.max_altitude = 0.8594150409477849;
    msg.min_speed = 0.09209739447463627;
    msg.max_speed = 0.8030318512711722;
    msg.max_vrate = 0.3733495135349252;
    msg.lat = 0.9072821525731006;
    msg.lon = 0.2976178730532846;
    msg.orientation = 0.47563715989779;
    msg.width = 0.5812584596097994;
    msg.length = 0.6433172050100006;

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
    msg.setTimeStamp(0.16537258012906786);
    msg.setSource(25210U);
    msg.setSourceEntity(227U);
    msg.setDestination(47379U);
    msg.setDestinationEntity(168U);
    msg.mask = 140U;
    msg.max_depth = 0.7765987692583902;
    msg.min_altitude = 0.3825042305878329;
    msg.max_altitude = 0.7768063100324003;
    msg.min_speed = 0.8096426108748102;
    msg.max_speed = 0.2382457780740428;
    msg.max_vrate = 0.7754719452777524;
    msg.lat = 0.28162203439636624;
    msg.lon = 0.37977083049048177;
    msg.orientation = 0.7280246755500691;
    msg.width = 0.035247552496235235;
    msg.length = 0.38063209022824884;

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
    msg.setTimeStamp(0.8395120629868333);
    msg.setSource(57763U);
    msg.setSourceEntity(129U);
    msg.setDestination(27001U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.2524530382953679);
    msg.setSource(55559U);
    msg.setSourceEntity(32U);
    msg.setDestination(40301U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.15735149403224835);
    msg.setSource(13373U);
    msg.setSourceEntity(154U);
    msg.setDestination(55787U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.8433039523046973);
    msg.setSource(14304U);
    msg.setSourceEntity(171U);
    msg.setDestination(32758U);
    msg.setDestinationEntity(75U);
    msg.duration = 38856U;

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
    msg.setTimeStamp(0.026999170080477586);
    msg.setSource(41540U);
    msg.setSourceEntity(10U);
    msg.setDestination(22838U);
    msg.setDestinationEntity(152U);
    msg.duration = 15151U;

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
    msg.setTimeStamp(0.22473951312872342);
    msg.setSource(56486U);
    msg.setSourceEntity(181U);
    msg.setDestination(11163U);
    msg.setDestinationEntity(102U);
    msg.duration = 21523U;

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
    msg.setTimeStamp(0.3696906965654798);
    msg.setSource(51572U);
    msg.setSourceEntity(173U);
    msg.setDestination(2627U);
    msg.setDestinationEntity(190U);
    msg.enable = 247U;
    msg.mask = 1653875697U;
    msg.scope_ref = 1043893987U;

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
    msg.setTimeStamp(0.24764980928868996);
    msg.setSource(28914U);
    msg.setSourceEntity(179U);
    msg.setDestination(64715U);
    msg.setDestinationEntity(132U);
    msg.enable = 203U;
    msg.mask = 3281889888U;
    msg.scope_ref = 260047981U;

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
    msg.setTimeStamp(0.5748157489158582);
    msg.setSource(19550U);
    msg.setSourceEntity(210U);
    msg.setDestination(43519U);
    msg.setDestinationEntity(52U);
    msg.enable = 226U;
    msg.mask = 3840348044U;
    msg.scope_ref = 2624188241U;

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
    msg.setTimeStamp(0.872999229090727);
    msg.setSource(2354U);
    msg.setSourceEntity(170U);
    msg.setDestination(5247U);
    msg.setDestinationEntity(15U);
    msg.medium = 141U;

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
    msg.setTimeStamp(0.6108107251679137);
    msg.setSource(40637U);
    msg.setSourceEntity(61U);
    msg.setDestination(25755U);
    msg.setDestinationEntity(34U);
    msg.medium = 167U;

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
    msg.setTimeStamp(0.47572354205618506);
    msg.setSource(37650U);
    msg.setSourceEntity(122U);
    msg.setDestination(33417U);
    msg.setDestinationEntity(17U);
    msg.medium = 31U;

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
    msg.setTimeStamp(0.4878069534156967);
    msg.setSource(60823U);
    msg.setSourceEntity(67U);
    msg.setDestination(60891U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6364086337909515;
    msg.type = 95U;

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
    msg.setTimeStamp(0.9205290099608415);
    msg.setSource(56698U);
    msg.setSourceEntity(245U);
    msg.setDestination(54876U);
    msg.setDestinationEntity(209U);
    msg.value = 0.04874291773933537;
    msg.type = 198U;

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
    msg.setTimeStamp(0.929678912876833);
    msg.setSource(31102U);
    msg.setSourceEntity(59U);
    msg.setDestination(14349U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8637409579737317;
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
    IMC::FormState msg;
    msg.setTimeStamp(0.33991060849405386);
    msg.setSource(16374U);
    msg.setSourceEntity(112U);
    msg.setDestination(19342U);
    msg.setDestinationEntity(208U);
    msg.possimerr = 0.8953639456812864;
    msg.converg = 0.4457253880616747;
    msg.turbulence = 0.36264830110753776;
    msg.possimmon = 128U;
    msg.commmon = 35U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.2591560208451774);
    msg.setSource(46731U);
    msg.setSourceEntity(3U);
    msg.setDestination(54048U);
    msg.setDestinationEntity(136U);
    msg.possimerr = 0.8468376702889542;
    msg.converg = 0.09531904153816584;
    msg.turbulence = 0.09962666455272728;
    msg.possimmon = 2U;
    msg.commmon = 234U;
    msg.convergmon = 108U;

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
    msg.setTimeStamp(0.8464550542207853);
    msg.setSource(30871U);
    msg.setSourceEntity(43U);
    msg.setDestination(24295U);
    msg.setDestinationEntity(179U);
    msg.possimerr = 0.7643891908581801;
    msg.converg = 0.31155379162495467;
    msg.turbulence = 0.573355330260854;
    msg.possimmon = 216U;
    msg.commmon = 238U;
    msg.convergmon = 165U;

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
    msg.setTimeStamp(0.7312816640448248);
    msg.setSource(58031U);
    msg.setSourceEntity(218U);
    msg.setDestination(45733U);
    msg.setDestinationEntity(213U);
    msg.autonomy = 165U;
    msg.mode.assign("XRNISODGQMDGYTDYOGAXCIYKRFBUZSNOANTJGMCSQIQECBXPQYBPSLKXVCFURGLNOLMYMWBLZNMFQMIDYGJOKJAWIGITFPRHIOOFDFHWKLQWUCCBITONWCUXKEUTVHBQAWMNUVLWVTXXGAUEHZ");

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
    msg.setTimeStamp(0.1915670733913989);
    msg.setSource(5832U);
    msg.setSourceEntity(185U);
    msg.setDestination(46680U);
    msg.setDestinationEntity(185U);
    msg.autonomy = 209U;
    msg.mode.assign("LOFGQFELYFKPDBJZXIZUNTJGQTENDHMAJHONHVQTLBLMSUEQORZSTACTCRWAFIGICDYADDKXBLEJVHEXLTJVXYNXBVWSJQCSKMKAUZXVWQROYFIPNEOLIUYCTDWUYPQIKDLFTZMAXDUPS");

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
    msg.setTimeStamp(0.662874930963335);
    msg.setSource(7280U);
    msg.setSourceEntity(26U);
    msg.setDestination(36034U);
    msg.setDestinationEntity(215U);
    msg.autonomy = 47U;
    msg.mode.assign("ZIQQCYBYNUROLTFMMHFWIUHRDWJQPLQRSQDISSBEEERVAFQNSATEZUMTTHKBDOIBGLHHJMCOHXQWTAUZVLDRWGKNBHMERFZVCKJNYBTZALJWJDCPPKAQUZFFXMKUAWLHMEKZFXCLZTIBPPBKJYDEOYWVAESGVGOTJJVIITAXSNSGXPYEAPMFDXOPTOVID");

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
    msg.setTimeStamp(0.2734051279793468);
    msg.setSource(43715U);
    msg.setSourceEntity(172U);
    msg.setDestination(37001U);
    msg.setDestinationEntity(181U);
    msg.type = 235U;
    msg.op = 197U;
    msg.possimerr = 0.43730371193131234;
    msg.converg = 0.31979431030400407;
    msg.turbulence = 0.21289972434273052;
    msg.possimmon = 54U;
    msg.commmon = 54U;
    msg.convergmon = 225U;

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
    msg.setTimeStamp(0.23679664219549568);
    msg.setSource(38885U);
    msg.setSourceEntity(118U);
    msg.setDestination(43690U);
    msg.setDestinationEntity(48U);
    msg.type = 4U;
    msg.op = 24U;
    msg.possimerr = 0.5541729932464037;
    msg.converg = 0.27717591084403925;
    msg.turbulence = 0.48935332595922154;
    msg.possimmon = 241U;
    msg.commmon = 76U;
    msg.convergmon = 18U;

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
    msg.setTimeStamp(0.6833389969651288);
    msg.setSource(47492U);
    msg.setSourceEntity(25U);
    msg.setDestination(62850U);
    msg.setDestinationEntity(161U);
    msg.type = 3U;
    msg.op = 119U;
    msg.possimerr = 0.888555987234962;
    msg.converg = 0.6884338505422157;
    msg.turbulence = 0.8329128632966406;
    msg.possimmon = 69U;
    msg.commmon = 52U;
    msg.convergmon = 160U;

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
    msg.setTimeStamp(0.3356539590522637);
    msg.setSource(26698U);
    msg.setSourceEntity(71U);
    msg.setDestination(39420U);
    msg.setDestinationEntity(245U);
    msg.op = 19U;
    msg.comm_interface = 221U;
    msg.period = 62877U;
    msg.sys_dst.assign("ATKQBUKEOYPYL");

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
    msg.setTimeStamp(0.2400781098364675);
    msg.setSource(17921U);
    msg.setSourceEntity(37U);
    msg.setDestination(32636U);
    msg.setDestinationEntity(237U);
    msg.op = 145U;
    msg.comm_interface = 161U;
    msg.period = 18419U;
    msg.sys_dst.assign("NXWFDLEBPWORBRUTOTDZYXKWLJLYANHHPVPGLNPF");

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
    msg.setTimeStamp(0.5471360504267073);
    msg.setSource(27887U);
    msg.setSourceEntity(219U);
    msg.setDestination(11988U);
    msg.setDestinationEntity(226U);
    msg.op = 206U;
    msg.comm_interface = 238U;
    msg.period = 49978U;
    msg.sys_dst.assign("BJDEAHNMHUZDFACEEBGARQKVKTIFXLPEBVNPUOLOXOYPJMPSJEIDFXLEHTQKJTZFJRTQIFUWNXVPSQFJTKLZPIBDMHVVSYSAUQBRUNCROFGQXWDLZURZKTFCAQKKNLAWLSFBBQVGVGDNCJTSVOSUFELIYAMCCYBXWEXWUXHHJYZROMZYAWCHAWIKCTSJMGZOPKTVHIVYZOMQPIUDRXSGRMMKGZXTGLHQCPLDAHBORSWDNB");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.8287979293777294);
    msg.setSource(54675U);
    msg.setSourceEntity(57U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.15465074336122142);
    msg.setSource(50900U);
    msg.setSourceEntity(247U);
    msg.setDestination(62198U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.9154774030261569);
    msg.setSource(48275U);
    msg.setSourceEntity(69U);
    msg.setDestination(55428U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.49008367758434723);
    msg.setSource(17706U);
    msg.setSourceEntity(138U);
    msg.setDestination(47169U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("JOLGCSHOFXKJKGRUZLTQEECXKCWXAPHLHRHWYVTLGMQQHBTOCXMZAXESYGQDBWAJPEQMWLUIGDCHSZTGNBLDESPVTMUFUINZFEEUOWNDQDAYFYBRDKBMFH");
    msg.description.assign("OQGMRSPZRDMOBHSSDPSIAXNVCPOQUEJLCUVCZVGG");
    msg.vnamespace.assign("GRMBMHPLYCNUJWAYIHGJVBZWTJJSNPBOOKUDFMURROFYCGJWDXQJRLCYZNLZELTQVLFSWTIDAROWJWTYUYVFVVHUZQSZXVAETKCXKIGHAHGTPGRENNONSAQQXWNRQYVXVSDERUZWIDFEMKSKPJCOADNOPRSFQOFIUHHZCLDMOPVH");
    msg.start_man_id.assign("AXWGQWXKYXQOIDSIVNFATVGEXXSMBQVGBUKPHYFJGIIIBFSWTHRRCRWAFWJQWCIMGNOMSHBIULZNTZGJALRUETJNGLDPDRFLOODQCNDJQMGLBAJJQRHUASUQXAWYEHNPOUTCITPKNUYLCBBJDDYFYP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MUIDXCEJHUOQSXPTUHWQEUJZLFXBDSDJCWHADQSVAKZQTPIZHYHNSCXPWRUJYKTYJUUGUXCWISNLNQOGOINMKJRNJVCACYBCXESZDAPRMOZTLVKLGOBZVCTZPDGDMEMYXLDJRNHGBPGIBVMKTORFLZIECHDHAMCKRVFLPZVWDWAOPFFTFTWLSEYKMYFPRVXN");
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 18974U;
    tmp_tmp_msg_0_0.lat = 0.9679132997534148;
    tmp_tmp_msg_0_0.lon = 0.8659996448348813;
    tmp_tmp_msg_0_0.z = 0.5621331400184763;
    tmp_tmp_msg_0_0.z_units = 83U;
    tmp_tmp_msg_0_0.speed = 0.266040912554108;
    tmp_tmp_msg_0_0.speed_units = 161U;
    tmp_tmp_msg_0_0.syringe0 = 208U;
    tmp_tmp_msg_0_0.syringe1 = 233U;
    tmp_tmp_msg_0_0.syringe2 = 84U;
    tmp_tmp_msg_0_0.custom.assign("PZHVGZJVWYTJUOXZFBDPMCTDDRNNFNGWUYKHXTEYZFFLBBNBOGPSURKTIJQPCRAXHIUWAQJLMBXCWHDEVDWNQBZCXQERXGEAKDSESRJWVEBNPKGHIMVSRBJFUMRGAKECNOFMFTVZTJOLQFSUUSQYAGHVYXORWFMJKDBGXIOCVTGSYXHKVBTOCNXTOAHYLFCTUSEQINZEZKLKJMIGCPIAOYCAYKSRMPAHIPZLLSUMLJQHD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Rows tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 22091U;
    tmp_tmp_msg_0_1.lat = 0.34888101093279267;
    tmp_tmp_msg_0_1.lon = 0.512087886270723;
    tmp_tmp_msg_0_1.z = 0.28646722181886786;
    tmp_tmp_msg_0_1.z_units = 47U;
    tmp_tmp_msg_0_1.speed = 0.46802884174431014;
    tmp_tmp_msg_0_1.speed_units = 113U;
    tmp_tmp_msg_0_1.bearing = 0.005286873891717558;
    tmp_tmp_msg_0_1.cross_angle = 0.7432239372414129;
    tmp_tmp_msg_0_1.width = 0.14040408673243054;
    tmp_tmp_msg_0_1.length = 0.9901059610628212;
    tmp_tmp_msg_0_1.hstep = 0.12631721187372147;
    tmp_tmp_msg_0_1.coff = 157U;
    tmp_tmp_msg_0_1.alternation = 33U;
    tmp_tmp_msg_0_1.flags = 94U;
    tmp_tmp_msg_0_1.custom.assign("NPSNBVIULUQGNVURECZZGHPPTUIRLHCDEYHZIDNJKOTXIZFVUYYLADCUZTQFRKPBOJTSGOVYGHUGLCRICMCKQZGTARVCEVADXJMVZXNBCFXZJKQLMKNHYGIHWOHXIKVSY");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::VSWR tmp_msg_1;
    tmp_msg_1.value = 0.6318500589086441;
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
    msg.setTimeStamp(0.8124231213472239);
    msg.setSource(36120U);
    msg.setSourceEntity(70U);
    msg.setDestination(22452U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("VMAVGPEHWWTZXGJBQZCMTSVWRLPJFIHLRUOSKFTGLRVXBTHWOHWFOFKPHXIIQRAQCFDAHBXNBKLJSTGMYBWPGCZFJMIVXTXIEFALL");
    msg.description.assign("TPBOHSGRWQXLEOGGYVOZTIQQOISUVRINFEMJGUVPMYFSFCLLHXHPVWLWFQNWSEZUHAXKSTBDQLUPKDWYEAJQMHGWBOSRXRHOQKHXKVBIIMKZKVLUZUNUCSMRSPKESEFNBRKQGNYUFCIKTLHDXICIHDDAMDFTTMZFTOCJDWLVYZENRRBXJJ");
    msg.vnamespace.assign("CAHDMUVDDIYVECHLCPRFVIWAREQOBJHLRVMZZILFFZSAWCNQFYLEBKTFUFGUTPZSDJMIBWKQZWPYLPKVZPZUUOZNTNRDMCOJGXUBRHPAVJDAEWTDCDYGXPHAWLVWVEQKENYKSNCTCBYRABSDXIEOSSSPQTMMKNFQQTWMUWKLXTLIQPIPROFOJREJGSXGBUKONVBUTRUGATJOBQHZYOBWLENFHQHG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CQRVPGATRIPNQSMPMILVMNIDLYSACQSMOUCMKFFCSFJVAUBRHYQOZTZZWLVZMGNWJBTABQMRGIEEGUVXFEHUNTSYJCJHEQHIRBWVVWOMKKUDOINNTBOHKELHSPHNIIKLEXSLUCFQSGDZCQFCTAFMXJDYYNKXYNPRZCGHBJPRKGMYLKBZSRGLOJBXPWOPYRDYCIQZAHBPTVWBDETUWRWEEAKFOQYVDUUNZFDODFTDWUAJGWXXXJPTIEXZKLAS");
    tmp_msg_0.value.assign("HAPMVUHSNIXBUFPVFMWCRJDHHLLAXCURKPSDYHMDRPOGSAZOENQAVEILDZDQSZLBBQDIKGQRHNHBEGULUYZMOJVOYSVCRRHKJMJDXNNABPEDASKXELMOUISMQZTGEJZTBQWGLORCNUFFFNPXK");
    tmp_msg_0.type = 139U;
    tmp_msg_0.access = 249U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZGKLTRYHQMAFHRNVLWMWBGBETHYUIRSEQTYOLKLKDN");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BPYSUAKATOMNHFBMVIVDAXUPVGSXFELXUZIZHQWOMMYPWHINWCFLTPYLTLYECOKRUBUIUDGAF");
    tmp_msg_1.dest_man.assign("ORFNBNFCRAKQMMQKEFFRXRKNZSCEVWQEHVWTIYYFUQLZLWDZXDGVIAGA");
    tmp_msg_1.conditions.assign("CFBMKJSKNCMEGSDFJCYQNKHMDAOZGQZUSVZWLGIWQXGUXWJCZKOLLJJQEPRNCUYJDCBBVLUQLHBQTAZLVLZWBGFCDPZSVJJMXIHSXQZTGQY");
    msg.transitions.push_back(tmp_msg_1);
    IMC::EntityList tmp_msg_2;
    tmp_msg_2.op = 124U;
    tmp_msg_2.list.assign("NVUDGJPVQBPKVNBSHYPOWZJXGQSEMD");
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
    msg.setTimeStamp(0.0779265139490356);
    msg.setSource(42370U);
    msg.setSourceEntity(234U);
    msg.setDestination(57846U);
    msg.setDestinationEntity(127U);
    msg.plan_id.assign("CJYZHJJGCWVIEAGHHQXPRYRKCYCJKYOATOEEFCEVOQDFGGOSRSZKMFBNNGPVDMDJKAMSWFLNQBVFHSTXJANIXBVBQODQNCEILXHWUKJGLDZFKCAPAKYXGUMZBRRTDWZRZXKTSLHTOYUUMQUPWVWPLQIHIRZZCCMIEABASTHJPNYFEWBDYUHLMZNSZFDVEXXCIASNOXUDLPBITLTEPFNORPVEHSXYUWKRIIMOLOUKMNGTVQWUGJFQALWQBDMPYV");
    msg.description.assign("GKGPTMAVKEIUSOYJDXASPLBHVFJMFTAKHUOARDPFKT");
    msg.vnamespace.assign("NRRPBYCKVDCSPCQAFMUXGRMHMEYEWTGIXFBNSWYPHVGXMXNTZFJIBEVZIZJMZADQEVQWACTMNLNWDJMOHUAGDRFAZQULVXOGSETVSCTZYHUUFMXBNOIMQBLPEOUADNKSGWIFMJGGYVBCKYJPPVPCHKBZJRQELYUSYKCPLTYWQCDEJYXLSPLIPOFKBQHXIWTEKNLFUHAZWD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HKQVVRAQRYSLXJZ");
    tmp_msg_0.value.assign("MLGEZFGQFYRSOMFJLVZ");
    tmp_msg_0.type = 217U;
    tmp_msg_0.access = 239U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GBZSERNSRTHHBMPKEQMEXIAQJHVKAAJQJPFYCUFEZFPZWKHWQAGBIPLEBTUSQDWJVWGCMYGHMVILGKYDTTOKOGYXYMXOENY");
    IMC::SaveEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("CAICYRELJZGMVPKCIEAXRUMYRBGVSYEMSAMYVEDSCMIDPTIXGZLUTOXIBHSUICHHVRYEZWLSHUTYNVAEWNRJAELQRZBUVOHAQJJXBIAGBJEHFKNSIVOGOYNMYWXRLGT");
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
    msg.setTimeStamp(0.8836829118428384);
    msg.setSource(49933U);
    msg.setSourceEntity(13U);
    msg.setDestination(39131U);
    msg.setDestinationEntity(200U);
    msg.maneuver_id.assign("RAPHWUBUCWONKBCGCAOHFJAJYKFQWDJSVOLBNHMAMUBEECEQKAKOTFGVRGIZGMWGKZCQEGPXFWYTVXZJZSWDMANFKQSSVHYHBLLPCRLQOWJOWDQSAGAZYIOTXDTSSJDUJPLSHVDJNQODIMGYKOWFJXVLFUTECPPBIPXEFHLRXZCPATYNNMNBDUSKRPDRKTXUINCWIYVMLHMPFVEQVVUIQKLZXQFDZYNIIXUCRRZXSEMTGEZB");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.7213824845357144;
    tmp_msg_0.lon = 0.4701270719525241;
    tmp_msg_0.z = 0.7427410080154896;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.radius = 0.7652494500519537;
    tmp_msg_0.duration = 43824U;
    tmp_msg_0.speed = 0.8288918059784719;
    tmp_msg_0.speed_units = 227U;
    tmp_msg_0.custom.assign("DFKLDIOGIIBYLHIUDLXLQNATVIUTQKXTZPVOUTVUNXGSRFPCOBVDNVRZLPYRBLGLXTNHOQSOFKIMJMBYJZWRFBPQKBIGEYTEPZZVNNSSJMBWWHSGSAKOTDKGVUJDUZIGLSCYMYWSWAJEFCNMEXCTQKNFGHVNGPCGEQM");
    msg.data.set(tmp_msg_0);
    IMC::DevDataBinary tmp_msg_1;
    const char tmp_tmp_msg_1_0[] = {-32, -5, 103, 122, -28, -42, 98, -26, 47, -8, 45, 75, -20, -22, 91, 67, -71, 28, 45, 2, 52, -25, 54, 83, 35, 58, 88, 26, 58, 64, 15, -102, 36, 102, -22, -40, 111, -3, -74, 76, 90, 34, 119, -14, -90, 122, 64, -22, 87, -33, 39, 20, 98, -97, -65, -52, 25, 57, -97, 30, 73, -96, 88, 59, 41, 111, -10, 84, -41, -6, -71, 126, 6, 102, -127, -70, -74, 4, 112, -37, 2, 61, 11, 17, -95, 94, 32, -4, -35, 121, 93, -43, -97, -78, -113, -46, -72, 0, -123, -20, 33, -45, 88, -52, 10, 32};
    tmp_msg_1.value.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.09341797117513206);
    msg.setSource(17859U);
    msg.setSourceEntity(65U);
    msg.setDestination(35662U);
    msg.setDestinationEntity(47U);
    msg.maneuver_id.assign("BVRHCSOMKYZLTRRFAIXOQFRUYVBSYXGLMZQOPKQSJQUBXWWZMBRPWNGCCDEVZOCXOOZQWHHNPEWRVHAMGUKUNYZVLYJERHCRVLYVEFHLMNLHSWGAKQZDBNOIUDEFBPFZINAXTDKBHSRJUDSTVJQDGLEXNAJIJ");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.13101542970832136;
    tmp_msg_0.lat = 0.2588606766195952;
    tmp_msg_0.lon = 0.5856927740988395;
    tmp_msg_0.z = 0.5568413222965737;
    tmp_msg_0.z_units = 182U;
    tmp_msg_0.travel_z = 0.6437007858165587;
    tmp_msg_0.travel_z_units = 232U;
    tmp_msg_0.delayed = 90U;
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.30945518880306);
    msg.setSource(33309U);
    msg.setSourceEntity(195U);
    msg.setDestination(56733U);
    msg.setDestinationEntity(144U);
    msg.maneuver_id.assign("BKYEDTTUHLAQTYZJZGIQVPFOPRNMSPZ");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 39216U;
    tmp_msg_0.lat = 0.09716685895664301;
    tmp_msg_0.lon = 0.6409340321786996;
    tmp_msg_0.z = 0.07378281463481495;
    tmp_msg_0.z_units = 100U;
    tmp_msg_0.speed = 0.39787115207708224;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.duration = 50505U;
    tmp_msg_0.radius = 0.08242007695361775;
    tmp_msg_0.flags = 26U;
    tmp_msg_0.custom.assign("MBRJCRPNAIUGLNVQMUSWYYEYCNRIINPVOVFMTRZFWXKUWXCSTWHKLDVUCESMGPFREVUAOTANEBKCLPSEKXOCMSMHDTPBYZSYATAQMCCBE");
    msg.data.set(tmp_msg_0);
    IMC::EmergencyControl tmp_msg_1;
    tmp_msg_1.command = 28U;
    IMC::PlanSpecification tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_id.assign("WSUATAYUGRACWRFXPMGHSIGEYZYEXFWERRUZYTDVDSXQZGEGYXJDWHCOSIDLPEQSKWOIQRZUDCREBEOYPZLQLMBUTSNMWNRFGETNBMFZCJJLXLFCXYPRATKKCAJNLLAWPOUGVPHGKILEKBNZUXWDCVZWHPMXYWPRUUAXTVMJOBQSFQDSVIJTMOPGTAZKPFFVDQ");
    tmp_tmp_msg_1_0.description.assign("KXTYDLULGXNYTPERQJPPFMUKRFMHSXPZJMCOAQIKWGXZHHMVIUQNGNUL");
    tmp_tmp_msg_1_0.vnamespace.assign("VIUALVROESDEAFDTRRGRDSJPMDVKZUYMYZPIRSGTHRZCQAOXIIHHTEBJCNQMSREWPKMNDPFBJLOCGGUSJNWMYLGQOVYUMACCNVJECKWWHWZJGXPFZAXQKFESYWOGKADIQSELLLOCZTBUPSFETIRRAGPJYOQTVCCZKYBTWLLXZWXGBAEFOQQXRDHBKZHTNHMVXMUUTDU");
    IMC::PlanVariable tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.name.assign("BVDDBQAQZPKYUPOZXPRPXLGAETSNYTQFNYHPTWJVJSEORRMULUFCKIWHGLWIJBHVVIIQCGVQSMPGMBCRMZCHUZBYSXAIGKUHNDMNXWJFW");
    tmp_tmp_tmp_msg_1_0_0.value.assign("QBBAIJLDHJOCOGJAMLUDBHOHXYSPLOWPKTISCMLKENJMGTKEQGHVNOMQAJSBPRWCZUKAVDKUHVOADLGEUZDWCXDZGJZHVSXLBRXLV");
    tmp_tmp_tmp_msg_1_0_0.type = 26U;
    tmp_tmp_tmp_msg_1_0_0.access = 76U;
    tmp_tmp_msg_1_0.variables.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_man_id.assign("VZPFQTPAVGWSIJLFLMWEHDYMHQAZTVPNQHQFPTRFXTKRJYOZUSDXFNPJRHNVDKBSOZCGWYAIJBUZTYXQVMHBPHWUBPLVWZYAWXDRSSLXNDYBJGTWJBMLXPSCKGBWNELAJEVOMITAUDWCNFUNLOQIXZMRFESJUDYEPKAJSOEJYTICRGICSHMGXEDCFVCROLUNRAGGDTINHMN");
    IMC::LedBrightness tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.name.assign("SUHKPNCXHWWPPMSINDKMLHZPMWGYINAVSOWCVBTXLABARUYKGXTWZXLYUIJEYUVUOYDBFLHOABAJUSODUMCKQQIIPJZRLTRSPVDVDQXJEZLNSTYDOUJFWUGOQFEOQXMEKVMFGZMXBYARTZQBJSCOJZIWPBHRWGNDTWRJNRELNHYPEJBQDVRFCFQZLEKGHHKPHV");
    tmp_tmp_tmp_msg_1_0_1.value = 54U;
    tmp_tmp_msg_1_0.start_actions.push_back(tmp_tmp_tmp_msg_1_0_1);
    tmp_msg_1.plan.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PowerChannelControl tmp_msg_2;
    tmp_msg_2.name.assign("RYCNHIYIUMJXGQMQJXAGKSNSVUDJCBNVHUKQFYGSGCPJROEESLGSJLUDJYYTUSEJZAWTAIAGSCMBOZVXPEUTLWAAMWRGDVHJPPKONBIKOKRXENSQVNYROHLFRJKEBNWHFCZESBUTTYCQKBLDCNYL");
    tmp_msg_2.op = 73U;
    tmp_msg_2.sched_time = 0.7633673773431824;
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
    msg.setTimeStamp(0.16959685501638855);
    msg.setSource(9694U);
    msg.setSourceEntity(135U);
    msg.setDestination(43138U);
    msg.setDestinationEntity(202U);
    msg.source_man.assign("PBMMIQCVWYCPHXDARXENFXGZCPYYNLLUEGKXGAZSPCLWF");
    msg.dest_man.assign("HCKLXKUWMPFGTUSWIHEAFMRGBJNBBRTMCJNDFZKJGLFDVMZOKHVZUFNQWWJEPMNDNCGRPXFAWLCELZENOOTIUYGPSVURSDCUBSEVQKNSYPAMQXIIUTYAKM");
    msg.conditions.assign("XVZMJDUQJNLACPGHVOFNBSYLDFWCVZJPTLTBYBJSNXVBUXWJWMHXGKPUEDMDHHGBQLMSUXLFIKRXCASIECYEPUOPUWGOQNAUSXTAEJACIYRNFNDZGVPDUKMTOFYKSKQTYGEKFKEOXOHRMIHBAURFNWIWBPMIVBVGACZLQRRCGLDWRIVKDGRUHJCQRNSEQWZKFZZXISTVIEOOBLSTMKQHWPGECXYYHFLNVJEYDJZZ");
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.14739613556133302);
    msg.setSource(50953U);
    msg.setSourceEntity(211U);
    msg.setDestination(58360U);
    msg.setDestinationEntity(12U);
    msg.source_man.assign("IRBWNGALQFFXEWQDLOQCFYCSPWMBRBOGNWVQUYTZELTWHQIB");
    msg.dest_man.assign("NCKKAWMKRHLOFGNVFXSJWETXIXSBBLMNIJACKDAUDGANZAUGNJUQVOIFJKCHDQEUXIURMODYTYRZMOBLIEBJZAPHDNQOZYWVMREKUNFTRSRRCEOXMHZSWNDTPBLEVGOEHVYAPTSZMPWZGQTLQUXSEEQLGEPQPHCHTBJULRPJXDOIKIQJYFLYFGWVABRKPULXUMMYVSMBZQVZHBTQSFWNCBTSSLJIPFXNVWKYOAGVJAFTW");
    msg.conditions.assign("ABFCEKEHBGZRNPBPHNUXBBEOKLJSOZHMCJIIURMAKOMLGQLVCEMMYTOIGIFSYXRTXDVIGCOGVTCECYUBDKVHGMDWSXJFTMAFXJMIVFPNHUESWWSFZVNATRAGQTZJFXLFIUTUOKRBZZAQXPIQTNUPXKBRYNXJKRYQDYVTIYGJGPOTAYUQKLDWDASHHWWDJAOSNRNUNDJPQYHCCHWZEQESCMPWPWDRKBWQMCFAQDOPXKLEVHYZJV");
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.01364643271994681;
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
    msg.setTimeStamp(0.02036815743554521);
    msg.setSource(41654U);
    msg.setSourceEntity(23U);
    msg.setDestination(56961U);
    msg.setDestinationEntity(20U);
    msg.source_man.assign("IHQOPXRUDPJGTNZUADMWZGGMJZCIURNZMYJFDSWNSIOEOIGUVEMNVLHQDNCFJOHLTROKTUXEFFLIGCCXQPQIZOYKYBCVXGTHSWZLHARUVGLQHFZLJLYZFKPRBHWAJOEEEKDEWYTBFPHWRRIRKVDEWIOLGXY");
    msg.dest_man.assign("QURATTVJECIOBERYWFVKINLOCJLMAREQYOZYLADTQFDYQASD");
    msg.conditions.assign("QOBKNEBUGIEMHQJFPJTEHYTWXUAYSYSCUAAVYQVHVIRQLQSDLGFAKAAVMEFPRGCNZEXIZCDVSRMITPN");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 247U;
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
    msg.setTimeStamp(0.7402647679621142);
    msg.setSource(2553U);
    msg.setSourceEntity(29U);
    msg.setDestination(24810U);
    msg.setDestinationEntity(39U);
    msg.command = 54U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AUHMEMCACSTMVVRDOPNDPAGQKUDEWOUWAFDCDEIZNXKGSQDWZQJLREKTDPHEABREABYIZTESJXIHPYBJNCCHVDNGPCTTFRWFPNJIVXJQXNEHMYSOVIKPGTRSIRLUQJLHMRKDWJKHPAF");
    tmp_msg_0.description.assign("AFCQRBUZTCAWUIMWSPIXQJZMMTBEBZEUVOJZZBESRBKGCAAWWTGNEDLHSBXJARCCVLDKNRWLHVPIMITSNYNIHKTDHCJFKSZGVSXBPFYRQKANGXO");
    tmp_msg_0.vnamespace.assign("KSEEAEQSMHNHHGAGIPJJZJFTWKACWDJRXTAIUCVPUPLTSTCIFMOZLOLKLXRG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CRDFBLOOIPNWIJXYUTWSVRNCPVXRXUBVCLKIHCUMSMXSERZNRZDQJCZBODULEQOGSWXQEJLZBMLOKFDTSKAPIUMQBAEWZCOSVJXTAZHHPLBHTYJWVNVLHRGXGDKYWJDNGQYWGPFDWIVZNVPSRLMQHJGKAAJZHCHZGFHFIPK");
    tmp_tmp_msg_0_0.value.assign("AYREQCSBYJXUCMPSBQTYNAODTAMCBFORJPIUGLKFNOEQGWDIUDBUITSXIFMLVSVGUOSMFRKQKGTEDVZAIYEMHGPBRCDEBRJQEIJKXFZELDWAVQHOWHPSJKLFLKCNLVASRJHY");
    tmp_tmp_msg_0_0.type = 85U;
    tmp_tmp_msg_0_0.access = 79U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FBXLZSYEFWDLGRKARSXAJCZBGMWPBRFEYNUUMIUMQOKLEHQMPORGITGMEIVQTGVGIKKOVJPNKOPXUVDHOJVIMOYCKLUDDWMPHCXWILOTZAPDEJNBQNFHSMBAQQCRWZRXCDYUPRAZSFDFLUXGQEKYFRCFWQHATAPZJITLVNLDJRCGJBYAKZAVJNTJGJWSZNXWEBLEQYYWPSOCKOITMSA");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FGZNFCMHRFDGZHIXSWVDHDVARTYJNLBVZBUBIJEJCQVHULFQGNKPGTWPEDLAXDIOKNJQFCRVDQKMSTPWPIVQWWWZKVINJXMAEGDEHPVYMIFTOTROKTTYDRIQYCIMKRLOJBSYNHJXZUEUAGHZBNNVPRWNZMRYXCSTWAEHXARQMJEEL");
    tmp_tmp_msg_0_1.dest_man.assign("EMWXKFIQQGZMYFFOKLTPHPDESBRKZSQDACONYACYMPVVBNKDMLFROSDQDHGBHVXWQBGUCXRPMIQNVPXSGVEKYZJUDIRHTHYTSLYGUCZEWMZNRFITFSWAYLVPYHRCJNITZUUBYJOEEFBMLOHWAJLTWLCXGJBTRGEABVADHJIWVAQDDNAOWECTXKGOCRPVEZNMBSZJIJWWYIXSJXUIXUFLRCEKQJNRKAQFLFBX");
    tmp_tmp_msg_0_1.conditions.assign("JXUYPNIORZMGOXPZGQCFOXKLIQUJFZHWDZAKBXRUCLQVOXWRGFACSRLHQOEBUBSDSMMELVENWJSWGJQIPOEBATWSDUTYSKN");
    IMC::Phycocyanin tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.7764760425910614;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Conductivity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.8287163385267359;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::TextMessage tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.origin.assign("ZAMOMEFXGDGUTVRQRZIWPNUYHYGAUWTNMLFBILILGSYYUUTWGHBJOWVEXMJHCFJGPAJUPQNPAOAMPWZDQBVZ");
    tmp_tmp_msg_0_3.text.assign("KJTWHGKMDGVXPVMRMRFKTBOIUCADOYSMSWHMFXRHYYAVEGNEUIOPUHTKFROJQLHCQZSRGZKSXNSINNPOBADAJNSHGDTLHEWNIYMPBHQXLGTLBVLADJTIXXXIFQOBQIAALMWKZPQZLWLYSELMCTCTXUBEJSJSFAXLMUAKJFNPDHCCDBOVPSZ");
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
    msg.setTimeStamp(0.3120565028531025);
    msg.setSource(10339U);
    msg.setSourceEntity(147U);
    msg.setDestination(43724U);
    msg.setDestinationEntity(35U);
    msg.command = 216U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XYNXDUYANRQTHUQSWIFTHZSBGDV");
    tmp_msg_0.description.assign("JTZNFKNIUGFLARXCPTEDJECHK");
    tmp_msg_0.vnamespace.assign("IQOEHBIUICBAPENZIQTYRHZQWZDOOBFHFZBMFYZWYIYQGANCNQMWIDZOONXREWDGAKLABKKQXDSURNNGYUTHRSJLNWMVFDLGNMQJTEBYLBVTEWZVPUDGSUJICHACVDOXMLSPBMO");
    tmp_msg_0.start_man_id.assign("ZSZIYNAEBGNCKWDEORKBUNHIEGTJRZIFDQVCRDMDBQVEQAPJGSTFVLZGDNLIJOVGKAQZBPVODTPJHBRITOSJMOFDJCIIPUXZKYNTXFELBNQSYZYOYKMVXHL");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GXPUQJASAHXQBXJBHVOSQWEIORZJMAIAEAOCTFRBKJZUGHGSDYRCNQJWLDAMVUMOGHYDRSSHVLWLRUQMXVDZBXFNEYTDBQDYOSOYXTHRGEZZGWRDGPLVIBFRAPUNCTKNEIMXVFCLZYWHPKVGYTEZOBXKPVNOFAFEWBEJTAZRMOWMRQTZICNPSUMFUPKKNXUKJI");
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 12740U;
    tmp_tmp_tmp_msg_0_0_0.rpm = 0.5666735171186963;
    tmp_tmp_tmp_msg_0_0_0.direction = 232U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VCNOGZKTKVOCKPPRIZEZFNYUIRPNMJGNLPLRISHLGKKGBDBUJFUPWXIHXXUOMLBVDTXKBXTWVBPCWQHQGPHFJVDVTHOEW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SetImageCoords tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.camid = 175U;
    tmp_tmp_tmp_msg_0_0_1.x = 39524U;
    tmp_tmp_tmp_msg_0_0_1.y = 50696U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("XIWXMFVXGGRHDZGFFESALMMIMSVWJSQCPFLUIYGUAQRZGBCURNLVTTPXFIHOSUCQKWWHLVOXTSLINTLFRLOJCXNJFPZEHYLJDDOBWBAZXPKKTNLJE");
    tmp_tmp_msg_0_1.dest_man.assign("FOBSHUKEPJESRCFKOOYRHICXDAYRUXUYVXANLVRWBLIQEZKIABEWZVGZWRHPPZUABSEUTCZUKAELDEADVPNITWPJELRZGBISCOYLLPVNMRNMGCUTAJJGYGGMKXYWWCKDPIOWWTIXUQXDBLOYFCJSHYPBOAIHNNTCSODSJ");
    tmp_tmp_msg_0_1.conditions.assign("RWQCDCBNTOYPMWAKEGUSPFCGCGKDERXTUMKAUJSLSDYORFGLAMKOVHMPGFEXCSKLCFYZJQHXUOMETXLVAZEQTQXZDWLINPJGVHOJIPWPLVFFXFOAADIPTQUXMVYVICQMRKQRZOLANGCBDZNZKBWYJDRNZHYRJFWUYFBOIHPRJS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.4940841365073527);
    msg.setSource(46905U);
    msg.setSourceEntity(99U);
    msg.setDestination(436U);
    msg.setDestinationEntity(132U);
    msg.command = 180U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FLRWKCTYGOAOXSNLCSSRIMNAOFBVEEAHREPFKOHWVEAESPZNEMIGWOTQIUKQQAKOVGVWGRBXOJPXWTTTYUBAIRJCHPUKPHJ");
    tmp_msg_0.description.assign("EYOXJOIRJCRGNQCJMGRFULKUHRNYTAFHSWJVNYFYGAHITXBAOCPLEPCQZUOMEMYDEMUGDSVQMFRNOBXKYINGFFQCJUTADYSYRDMVYRRZVBJZEKBROHMANHVXZLKFHIAQGVEZPWNKZBCDEQPTHSIJODPBIWFKHJNIGZCQVBSMQKWPFGLBDCVBPMAVDZPSUFUWQLIGEXKXKTMTJSWGX");
    tmp_msg_0.vnamespace.assign("AYPDGXBMYWFOAFPBREKELBQNSUPMIRJPDTSDFMJBCQKQGXSGSJVZYKUAMKSCOPRNHAZEFOQODVJKGLOHLINFPRKOSANDKUUARYIOTXHM");
    tmp_msg_0.start_man_id.assign("ZTCRIUCLKVYWKUNKDQSXZEOPHAKCLOLNREXTBRPHBOSTUQBOGWMGGDWHFBLEIQSMGFGZDKEEFANESJMYAQIOYXFCNVNXAZOPOMGIEOBBBYNARXJHCYMILZDNNURXXUZSTVYUAHJEJBZGWJOQWDVNQMZIPKKKLVLXBWKEJFFRMQFKMZTPEWMHWJFGVRQHSDSUHTJRTFXTIQLZLDUHPIMUCYAWTXVA");
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
    msg.setTimeStamp(0.0077494843835888005);
    msg.setSource(642U);
    msg.setSourceEntity(227U);
    msg.setDestination(33872U);
    msg.setDestinationEntity(186U);
    msg.state = 65U;
    msg.plan_id.assign("WASMRXGOIPGNRZLXJCJLFZXFZPYEDZHOFSMNBNLGUWOUIEQZKHIQECDJOSCIEMDVPHTCMVSMBEVBZTRXJJJIDHCQAWTKRB");
    msg.comm_level = 242U;

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
    msg.setTimeStamp(0.9197121236821415);
    msg.setSource(61292U);
    msg.setSourceEntity(239U);
    msg.setDestination(43542U);
    msg.setDestinationEntity(49U);
    msg.state = 155U;
    msg.plan_id.assign("RBKGFUYTTTNRQYODEJQNIUKOAQTGCPEZFBWRAZZWBWZOVXWVUFSBDGVKTXYZRMMUOJSFCEXMRYQODSXYDDNCHIFMRCYHYHXOLITBLYMSCIDACLJHJPGLKTMCNABURZKJDGVDACXSPNLYOENESSWWIKZBLGCVAP");
    msg.comm_level = 154U;

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
    msg.setTimeStamp(0.9684077703896492);
    msg.setSource(45672U);
    msg.setSourceEntity(207U);
    msg.setDestination(60473U);
    msg.setDestinationEntity(227U);
    msg.state = 163U;
    msg.plan_id.assign("ELEZYUJTLRWNXKWXFWUKXZUQJYJECPVMNTIEJOBDNYGEZTYQFWHNCWMSILPKOLGDYIIHACNQXQSQDBWQAZJPBIYQGDGEQAOFXGXYVBCMVQIAFMPTLRCUSGQADSDKFFMEEDHJHDZRAGIYXOFPSKIRSKXHVFIGCVOWCUKHGUNBPZXMYWTOROHBRNRHUMJVFOWPTARSJCXSSCNOCBMJZGUF");
    msg.comm_level = 135U;

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
    msg.setTimeStamp(0.22232554663940485);
    msg.setSource(6369U);
    msg.setSourceEntity(220U);
    msg.setDestination(49193U);
    msg.setDestinationEntity(164U);
    msg.type = 180U;
    msg.op = 130U;
    msg.request_id = 5125U;
    msg.plan_id.assign("EFMCWESBUKYDVDOCOFELUDHHXLITHONSOYXNUEOSDTYDTCNOWVTKLONFXHRDRFIBKKZVLRYUKCUWXVWJTMZAJDSCQFVTGBBTIRHSIRZBLPHABLXFRPKVAZDMWUATVMLJKHHQKETMCOFAJXYYENVZRGSPQPQPIJQOCJSQZPSAFMRGNQZXMXPIMOFDHWXUJGEYLSRWJGNWYVBHKPUFTMCYIIPWDBCURJYECNGGAMABWLGUQLBPINKVASIAJQN");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("DZKNMBNZXYDJAGBQBCRFEVVVFGZVGOKIBVTALBHXFYDVAKODIMWSMOLREJBRNZFDVZMCUITREWPBXWBCGOSNPCUPTTOQ");
    tmp_msg_0.action = 109U;
    tmp_msg_0.grouplist.assign("YGCOPJDPHBTOUWHXWDTCSDXICGGTQJZKXHGTZSNXQZWTYKADSILHM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ELOESADQBCCSLAFVWSNGJQGWJXYRURMKDSIMSJLKTGQCEJOWIRMGJNAFALPPESUSA");

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
    msg.setTimeStamp(0.4479042892658114);
    msg.setSource(54068U);
    msg.setSourceEntity(15U);
    msg.setDestination(65021U);
    msg.setDestinationEntity(128U);
    msg.type = 243U;
    msg.op = 173U;
    msg.request_id = 5237U;
    msg.plan_id.assign("CHDRFWZCOHCCTJAMOFQLGZFZEJWJGEMPNNMWDRIRZMWYSXCQBUNHSIVXJXQAXFQDNKAEMOZPIBBLPXIKKBTWLVAZEKZCPQUYHTNPXQUDGINOAVTDVPXEBUWJHFLHPITEBEUBXXSWJKRKWDKUP");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 111U;
    const char tmp_tmp_msg_0_0[] = {-104, -7, -93, -1, -123, -122, 19, 66, 45, -5, 20, 95, -114, -120, -93, -4, 13, -118, 74, -118, 122, 111, 0, -128, 0, 51, -50, 111, 83, 1, 101, -105, 25, 43, 30, 66, -112, -64, 120, -3, -120, 46, 46, 109, -24, -7, -58, -60, -110, -51, 76, 19, 51, 81, -23, 10, 125, 10, -100, 111, -53, 66, 99, 96, -112, -75, 22, -32, -80, 111, -5, -94, -55, 10, -85, -50, -17, -64, 99, -86, -27, -30, -17, -20, -115, 121, 55, 10, -90, -126, -35, -27, -36, -30, 51, -70, 64, 119, 124, 13, 56, -14, -119, -58, -114, 42, 12, 21, 118, -122, 118, 112, 57, -56, 31, 4, -111, -89, -31, -108, 44, 20, -109, 42, 60, -64, -94, -38, -32, 115, -51, -58, 68, -46, -54, 112, 60, 69, 81, 102, -84, 20, 86, -58, 4, 109, -8};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OHLYHOQLMVBHUZCTFNCZRESGAXYOZILEZJGXFKJHNGVTCHSXNGCFQTXDRQQUUBDZKICIUXFCOFCKDALGWDTMYMJKAWYKNWXDVEBYWKSDDTUD");

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
    msg.setTimeStamp(0.9867794208466873);
    msg.setSource(16129U);
    msg.setSourceEntity(97U);
    msg.setDestination(35898U);
    msg.setDestinationEntity(58U);
    msg.type = 224U;
    msg.op = 205U;
    msg.request_id = 38540U;
    msg.plan_id.assign("VLLEYQIERUZFYETIXTGXJLKNZIFZMUBCSNPSCKNLTMUKJAGIHCMWOYSXYYHCCBLUGGHPVVMYIVDWTTQVAWHDUKVYQYABIGCLBIOSQOXDWDHJBGHBASZAGJYFXZQOUERQMHWKVJLRRKJ");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.6688724484073376;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NXDRDYHQZWSEWCAZQDLJDAYIXJTGJRYGBKVMUHUSEOZZUPYEDBILAYRFKJHLPBTFDADNKZYRNDWPALMWZGFJMRFJTTUXSMKBIRPWCFVOOATWSFMCKXXNIMRNVITWDVP");

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
    msg.setTimeStamp(0.7077949354394845);
    msg.setSource(57070U);
    msg.setSourceEntity(177U);
    msg.setDestination(61424U);
    msg.setDestinationEntity(215U);
    msg.plan_count = 54947U;
    msg.plan_size = 3628912396U;
    msg.change_time = 0.23846864543904278;
    msg.change_sid = 9177U;
    msg.change_sname.assign("LKVHBFFCWDWLGAGUXOFISGFTJJVBMRQYJ");
    const char tmp_msg_0[] = {-75, -79, 37, 98, -80, -48, -106, 79, 75, 79, -125, 125, 100, 26, 96, -16, 28, 17, -29, 51, -90, 74, -39, 38, -127, -53, 13, -28, -96, -91, -106, 107, -7, -11, -27, -56, 34, -78, -94, -61, 18, -7, -33, 90, 63, 105, -83, 121, -128, 34, -100};
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
    msg.setTimeStamp(0.8740381184966712);
    msg.setSource(37435U);
    msg.setSourceEntity(233U);
    msg.setDestination(24867U);
    msg.setDestinationEntity(9U);
    msg.plan_count = 52341U;
    msg.plan_size = 1729926189U;
    msg.change_time = 0.18135358590820627;
    msg.change_sid = 64834U;
    msg.change_sname.assign("SUWXCPDZUIDPUBZQIUSBAQCQBJWOGYGYOQDZUJVXEVSFLYAGNEYJREUXXOKZDPWYCSATLLOOKRPHYSPCPKSSBPMEJMKNGUKAULUYWRFTWQZQWMCBVZDZBVFYSKANQPIDETKFMLHWHJLJKRABJGRGQCLOATRIRCRRXVGIJMDNTVFDTMTFOCXQGYMQEWYAKBTIKWNRTHVJVMXPMMNBOZFNFLXAHIN");
    const char tmp_msg_0[] = {110, 47, -49, -101, 97, 27, 34, 79, -127, 90, -28, 21, -21, -56, -32, -7, 24, -38, -95, 71, -77, 38, 103, 16, -60, 27, -111, -25, 106, 27, 19, -5, 121, 80, 115, -106, -117, 0, 117, 2, -114, 24, -59, -4, 36, 110, -38, 54, -78, -103, 92, -103, -77, 20, 66, 2, -15, -121, -21, -75, 52, 41, 50, 74, -63, 53, -3, 34, -5, 44, 33, -8, -100, 28, 11, -48, -34, -8, 19, -72, -99, -66, -31, -70, -92, -101, -51, 101, 56, 112, -43, 35, 122, 36, -46, 33, 57, 20, 1, -126, 125, -40, 19, 83, 20, 38, 15, -114, 74, -116, -12, -120, -68, -46, -9, 53, 109, -56, -29, -91};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IVCNLZDKKBZNVEFMJXAOSHBWMPGTNGWGCOJEJDVLEVMHQQASHBXTXSDUOBDNUKDGMTQBFCCWZKJAOTIPYNEHUKBBKVPEQUYGPELTPLJMDNRITQLKOSKTKAAQRZWRYURPGNHCSWAPIJAVSDHFUSQAMCFYCVQFXFIXGSICDZRYNHJQAWWZXXOPAUEFYIVQHOYBXGWJRFE");
    tmp_msg_1.plan_size = 47057U;
    tmp_msg_1.change_time = 0.8862409577432673;
    tmp_msg_1.change_sid = 49836U;
    tmp_msg_1.change_sname.assign("NBKKAZSYKATCMKEICAMXPOPTCWYXAMKLZYXVD");
    const char tmp_tmp_msg_1_0[] = {-1, 126, 112, -116, 43, -83, 30, -84, 7, -21, 46, -109, -10, 121, -9, -84, -37, 57, 24, 125, 23, 111, 60, 55, 99, -82, 116, -56, 57, -113, -39, 56, -54, -12, 51, 110, -98, 18, 48, 116, -7, -116, 89, 125, -65, -67, -14, 46, 38, -125, -124, 2, -67, -116, -58, -4, 121, -45, -118, 64, 99, -1, 100, 17, 2, -87, -87, -68, -82, 44, 3, -103, 17, 40, 14, 37, -52, 108, 98, 44, 16, 85, -28, 90, -127, -30, -25, 83, 20, -22, -21, -87, 80, 73, 57, 52, 18, -6, -44, 60, -50, -13, -98, 94, -84, -48, -28, 105, -80, -1, -64, -3, 42, 55, 92, 89, 30, -92, -4, 89, -23, 86, -32, -63, 123, 26, 112, 40, -49, -106};
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
    msg.setTimeStamp(0.1286517585208088);
    msg.setSource(12814U);
    msg.setSourceEntity(73U);
    msg.setDestination(1609U);
    msg.setDestinationEntity(145U);
    msg.plan_count = 47188U;
    msg.plan_size = 928284276U;
    msg.change_time = 0.7840948414227124;
    msg.change_sid = 45131U;
    msg.change_sname.assign("BTLANZGRUMPXMIBLIXDQEFJFNGXUUVGEESQHDBUWCKZGNFDENHIUQJMAABWGXJWMJSPUURRPTICOVYKCVHFZXEKQIVOOHZVEIDCBYCIVODCEVLLXMWUVZNLUOSBOTSVSJMGDJIAFNZFFVRDFZFW");
    const char tmp_msg_0[] = {126, 48, 24, 3, 124, -82, -110, 75, -2, -124, -19, -109, 126, -79, 111, -89, 96, -67, 68, 0, -121, 53, -8, -128, -6, -44, -64, 59, 47, 88, 57, 43, 15, -82, -98, 7, 123, -70, 68, 117, -33, -46, -2, 56, 16, 10, -78, 57, -96, -66, -7, -89, 1, 111, 5, -41, -109, 36, -13, 12, -70, -95, 16, -5, 37, -126, 55, -85, 63, -107, -54, 40, 116, -84, -19, 104, -111, 76, 22, 55, -5, 34, -119, -56, 121, -63, 51, 80, 126, -72, 79, 73, -99, 77, -74, -45};
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
    msg.setTimeStamp(0.6141249466441198);
    msg.setSource(58557U);
    msg.setSourceEntity(111U);
    msg.setDestination(56471U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("GKXMWOOTPSUVOOCHAFJZFVYPPDXLHRMCLACOEMHKVUITIUUSVJPGYLMOIJGSQIBSFRYGJVBTD");
    msg.plan_size = 56859U;
    msg.change_time = 0.5951033704709675;
    msg.change_sid = 1980U;
    msg.change_sname.assign("SPQQLPNZASCEBIBCOVIGLVZRFMTWEVTKRQJFDPQDSPOQLYELEQTRTNUCDFNRUFSTCAWGNSQONIRBSKOGZSHVYDMEZRUTBLWDCXIHL");
    const char tmp_msg_0[] = {-118, 33, -47, -62, 48, 100, -50, -62, -24, -121, 3, -45, 126, 47, -13, -73, -76, 18, 7, 21, 81, -10, 120, -85, 10, 43, -86, 98, -59, -61, 113, 79, -37, 15, -25, -124, -41, 12, -119, 69, -90, -95, 24, 50, 28, -33, -97, 21, 65, 92, -108, -29, -33, 101, 41, 26, 12, -100, -15, -105, 87, -98, -45, -127, -17, 125, 91, 30, 117, -114, -123, -125, -65, 16, 117, 82, 115, -78, -126, 81, 2};
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
    msg.setTimeStamp(0.8723636528749393);
    msg.setSource(62028U);
    msg.setSourceEntity(19U);
    msg.setDestination(33878U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("LCLXFVKGJZGWGHUBIGVLBEZBDAUXSEHJRNODTLNKJPLQVDM");
    msg.plan_size = 25609U;
    msg.change_time = 0.02250418775158991;
    msg.change_sid = 44517U;
    msg.change_sname.assign("KSOMDZYCUNRKTTXYULMLBVJSSTBSHLWHTWPPWUMZUELJOLICBWKRXVGZYZCTGUUAPXMVTJDQMWAEQBJNGKQFQOANNQLMAPIYDWPFASEMXEYDUVYIOGLNGHFBRRJJCWISVRBCGHXUKKIIDSFDOZJLXZBIEMAKPINFHYMFBPCCHOTLBKKAUZRDRHZJEAOX");
    const char tmp_msg_0[] = {-71, 73, -31, -68, 85, 97, 0, -89, -86, -92, 40, -13, 29, 91, 37, -67, 69, 100, 95, 84, -77, -92, -18, -102, 116, -102, 122, -49, -25, -127, -12, 81, -69, 38, -120, 87, -49, 120, 113, 57, -102, -51, -24, 18, -28, -114, 33, 11, -18, -2, 27, -74, 126, -6, -52, -78, -126, 89, -49, 115, -114, 83, -24, 58, 15, -35, -79, 87, 113, 57, -73, -118, -39, -25, -24, 78, -74, -8, 6, 59, -51, -58, -25, -108, 60, -39, 36, -61, 2, -90, -32, 80, -98, -8, 48, 41, 59, 107, -70, 58, -37, -25, -117, -126, 68, 13, 31, -75, -76, -79, -28, -126, 55, 44, 52, 42, 44, -97, 41, 106, 18, -72, 55, -25, -24, -44, -15, 11, -74};
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
    msg.setTimeStamp(0.6346321885707904);
    msg.setSource(26332U);
    msg.setSourceEntity(188U);
    msg.setDestination(15402U);
    msg.setDestinationEntity(14U);
    msg.plan_id.assign("ZWTKIBQGUODDVBOEXMKYAGCUPKUYJVFVJRLZICWNIAMULOSTYAT");
    msg.plan_size = 16967U;
    msg.change_time = 0.28621109647616005;
    msg.change_sid = 34700U;
    msg.change_sname.assign("CLVJAFTSLNSYDPLDHIYNGPXHZXJLKYRLFAVVCXPRND");
    const char tmp_msg_0[] = {70, -56, -111, 6, 80, -98, -34, -32, -43, 36, -11, 53, -62, -32, 59, -124, -2, -35, 79, -94, -10, -58, 81, -82, -123, -76, -71, 84, -63, 42, -114, -102, -118, -113, -53, 67, -24, -105, 56, 65, -34, 40, -31, -98, -20, 70, -100, -8, 21, 42, 10, -43, -123, -40, -76, 36, -29, 56, 74, -60, 90, 35, 48, 9, 87, 49, 80, -12, -74, -52, 57, 7, -114, -81, -4, 104, -125, -103, -21, 122, -36, 92, -37, -110, 104, -86, 101, -128, -22, -24, 23, -126, 79, 6, 23, 62, 40, -123, -2, 56, 57, 75, -99, -21, -20, 86, 106, 56, -80, 121, 83, -83, 13, 45, -44, -10, 14, -10, 56, 23, -87, 14, 123, 46, 122, -68, 5, 86, -75, 65, -91, -51, 63, -76, 77, -36, 121, 35, -22, -123, -114, -88, 94, -58, -123, -67, -103, 17, 110, -114, -37, 94, 76, 25, 17, -89, 109, -89, 46, 116, -78, -38, 125, -12};
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
    msg.setTimeStamp(0.6799595592567282);
    msg.setSource(54754U);
    msg.setSourceEntity(46U);
    msg.setDestination(47254U);
    msg.setDestinationEntity(124U);
    msg.type = 167U;
    msg.op = 235U;
    msg.request_id = 33883U;
    msg.plan_id.assign("WTMZEIEXNBRUZMIQMPOKKQPDSCFXYNPBTUULGPICNGXFZPLKUJXCVEFJLDVW");
    msg.flags = 56912U;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.46546915398534583;
    tmp_msg_0.v = 0.7779913471707545;
    tmp_msg_0.w = 0.1673956286783761;
    tmp_msg_0.p = 0.6223114756537534;
    tmp_msg_0.q = 0.05007686707055303;
    tmp_msg_0.r = 0.8536701770283373;
    tmp_msg_0.flags = 110U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LJNEADEWEHFEGMPEULJQLPOTJUPCZMIDJXUWAZRATDVCQCXHMTXWGVVZCLPQNIBJNFQVBUXMTUQQNMFKMBFIPEKCYRCNGWYQYWXJQGPRHUMRUCYDTJVOXJALPHWRLOZTQXXKXIJILDFIVCHAWGENYACTSABBKLIHYDEWICKZDPVDVRSBOZJPYOEUWHFVPTXRANQBGKMSFHUSDNUZGMFZBIFYGAEV");

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
    msg.setTimeStamp(0.3800065130694338);
    msg.setSource(37719U);
    msg.setSourceEntity(167U);
    msg.setDestination(55464U);
    msg.setDestinationEntity(197U);
    msg.type = 62U;
    msg.op = 168U;
    msg.request_id = 10210U;
    msg.plan_id.assign("DBPOMRWIPPSLMLFSZEQEPYTLEMRXYMDALZEARTZGABSXYUVWVDKZWHCDXFGIITANJOGBNXMPBPYSCVXRDCFJWOSQXIVRFKROFMFUTJXDWGYVVOKWILAOBFHEMTTCFLLGPZPMUJYKHZJKUFAUJCIECLXCJPBGKQUHCOJAQH");
    msg.flags = 26012U;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("MGSWUQPRFORWLKBNBTZKKDWGTPPASJESCQDSQDWQVHJYNLGUPYEACVJKTZLKRNPVYYRDTYRLVRKIMLRAKDMQCSEQVJXYCGANSZIEGDDWJLTIEFATYUXQJISOBHUAZDCGOBAQBIXYKXVHXNECEONPISTCIAZEMNCHXKLAPWTFSCXZHLXBUXLIWGFLEYZPOUUW");
    tmp_msg_0.lat = 0.5570305944582468;
    tmp_msg_0.lon = 0.7060394044771597;
    tmp_msg_0.z = 0.7015734958125479;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.cog = 0.34387514804148533;
    tmp_msg_0.sog = 0.1641758149375655;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RKWPITSFYGSLJSKIMWXMKOBBYMYBIBWFJQHNMAACNCNBWYEDYDBLJGLEXVPVGRZIIDGEFOHECQIOKVCTZOADRVCAPYHOBOMOJRKLMUSWUDKUNIHTEVMT");

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
    msg.setTimeStamp(0.042315612411512715);
    msg.setSource(50459U);
    msg.setSourceEntity(111U);
    msg.setDestination(11555U);
    msg.setDestinationEntity(24U);
    msg.type = 16U;
    msg.op = 160U;
    msg.request_id = 21708U;
    msg.plan_id.assign("VFRZVAQLDPTTGXGHVJGCDNRFWFDKADXRXMWMWLUG");
    msg.flags = 50776U;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 164U;
    tmp_msg_0.entities.assign("UZZBLZSAUTJSIIPWSFIKQKGA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EIPYLRWYWSAXGTWFVELKXUADVKYDOE");

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
    msg.setTimeStamp(0.4322881060933952);
    msg.setSource(47440U);
    msg.setSourceEntity(150U);
    msg.setDestination(13223U);
    msg.setDestinationEntity(214U);
    msg.state = 245U;
    msg.plan_id.assign("YVLVTEABODFIIJWBRFKADZJOWYLWNTEOTCXKSRWULKZLHWDVAXZHEUPHZCKTQGLIMEHRCGRWUWELJHFGNTETNBLGXBJIMUUPORAIBYCRURNOPQDMDMJIVRGCMWYZNJSFX");
    msg.plan_eta = -1626218183;
    msg.plan_progress = 0.5070789258673568;
    msg.man_id.assign("ZLRYOXIPYJJMKCYMOOCHOQRSFSLQGABNKOWEDIJELYKEBKBEJECUGRJVLEJFHQUDXVKWVFWPMANXEWVVHMVIRAP");
    msg.man_type = 62336U;
    msg.man_eta = -906890928;
    msg.last_outcome = 34U;

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
    msg.setTimeStamp(0.9376862041623532);
    msg.setSource(25306U);
    msg.setSourceEntity(252U);
    msg.setDestination(47085U);
    msg.setDestinationEntity(141U);
    msg.state = 104U;
    msg.plan_id.assign("GBSWKHTMOGIIQMFFZYEQBQSGFXHVEDDWXVZJTNZYRSXVLCOGWKZYINAQVJAPTBQMXUVEKETCWTRRLBJUDBJVGYIYOZPBRSNDNXHLLIHXRRIONRECUPMRAMDVDGTALFOWKKODAPRUXJTOFMIKKTACPAJHJBFGSYFHCZWGFHZESQMMXAMLNQALHVIUDICNZHMJBDIPGTCECAQWLLOWHSUYYYELUZVRCEXPKK");
    msg.plan_eta = -1484692182;
    msg.plan_progress = 0.026037976117077144;
    msg.man_id.assign("WNQKSCBAPEISGSEERUMCYGLPKFAOLZWJMCNEPRRWCIYOLQEJFITQPYJVFRMCNLHWHHKVUQBKUWDNLLXEOYQQGDPVFYBXDPHHCCSNZIVSETURBWVOOXXGMNSFJGIARUSUFJOLVKOTTJKTQTAYIZXJFEGDAOFXSWICNUFTMGDJDBJVEQZBYDARACWMMMZBKZOPPPHGN");
    msg.man_type = 8562U;
    msg.man_eta = -141946731;
    msg.last_outcome = 199U;

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
    msg.setTimeStamp(0.05316667949768106);
    msg.setSource(19767U);
    msg.setSourceEntity(63U);
    msg.setDestination(6610U);
    msg.setDestinationEntity(192U);
    msg.state = 243U;
    msg.plan_id.assign("AFZSSTAILNHXXPJJMBAIDHNXGWKTWGYBLNVOXGZJYMILTTMGPDXTKEYEG");
    msg.plan_eta = 1071475882;
    msg.plan_progress = 0.04994749283341793;
    msg.man_id.assign("OQIPQNPQVDPXITTVKRYFKXDSDVRILA");
    msg.man_type = 58789U;
    msg.man_eta = 107585075;
    msg.last_outcome = 253U;

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
    msg.setTimeStamp(0.16020299477039646);
    msg.setSource(829U);
    msg.setSourceEntity(32U);
    msg.setDestination(7984U);
    msg.setDestinationEntity(71U);
    msg.name.assign("ETJNEMPMLUYNPBDVILVDXKRGYHKUQJWFAIXSAXOICBXPUXBTMRFAHOQNNVKPTNKRJSBMWEUVKMQACQPSIPNOTAYHHLTSBWSOUEJGDTRTPFGOCGSMWWTIZCNVRQDJYWGFBFOZLUCIVQHMBZDOZXAASAYYLWMPNYSUXZNJHRERTEGACIDDBSDBCKCKVIZXYGWLQ");
    msg.value.assign("CCISDSPWWMOVXUBUQHEDYJYQQNBALINEGLYEMAIAKOUNOHJRDXMOYXUPUWQYZPZWTNHKMKLVORESFFKTHEGTVMVQRTWIIKHJIDSJONNIVZNBELXZCTCZQJSBKXHTCGZJGGNMUXIDXLEHVPDFDXBKFTUKMSLHFPXNHEYPCLSUJRYJAROKAAWDGOYSKBEBITLNWZJROCMPALTRGGHZSPVPFUFJADDARMIUXV");
    msg.type = 105U;
    msg.access = 41U;

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
    msg.setTimeStamp(0.5148435220813864);
    msg.setSource(54510U);
    msg.setSourceEntity(160U);
    msg.setDestination(39923U);
    msg.setDestinationEntity(142U);
    msg.name.assign("XLCUEMGIGNJXZANJDVXHXNZECEOLTUUCGVAHDFSABNIIALWONWYQPMTXRMKRSEHAIVSGHNJDECYJEQKEMCGMQQRPZUVFWAMCPVAQFDYOBKBSSVIRWTLOJMERTNCITRTTKHJDKLFXUOBVDTFXKHLXOGAWSFOLGJSCPQPQZGZWHMPWOHPGPULFBCCBSISKUIEYZFVUNVA");
    msg.value.assign("OUDUWNHPUMHFHEFXCFIVYRCAXWWCKYKGCQABLIKOPTGDXUSNLEGAFGQGWSDVFZDUGQNPLHVBTJSXIJOLEKJFEWXJYRRVXPZKVLBSQYHWFIDYBWCWCSMXVFTRZKNRQTAZAIKPDTJIRUDYMNSFEPSLMXRPZRRQNWBOEPBQBJISUCTMLMAUJOCJKIHPBYBDYYTTGGKNCAOUO");
    msg.type = 133U;
    msg.access = 74U;

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
    msg.setTimeStamp(0.11215893341992178);
    msg.setSource(53648U);
    msg.setSourceEntity(163U);
    msg.setDestination(34618U);
    msg.setDestinationEntity(108U);
    msg.name.assign("FCDVZVAXGSKSWCXJOYJFUZOZNJHPQORZWNFLOTMJFZLKPGHZWTTMBKQMRLJIPWYVNDQSNIWDWRNASIKYEWZNBUCMPNBYESDAMHHLEREIUQOXGZOMEBLDHKJFOWOCDKXMDGTSULWNMELUAJAUHIGQKVRMAXPLCUHPVKCPCXBXNTSBTHYCVDFABKULXGREVGSFOJGFCFQFTRUXE");
    msg.value.assign("EIPFPWRDOBNDAPCTBZHMNIEGYWKFXWPUYVJYLLLWSZYSCVTQVKBATPJORKQDVJFZHEBGA");
    msg.type = 10U;
    msg.access = 163U;

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
    msg.setTimeStamp(0.2232239286696217);
    msg.setSource(19836U);
    msg.setSourceEntity(59U);
    msg.setDestination(63428U);
    msg.setDestinationEntity(87U);
    msg.cmd = 183U;
    msg.op = 45U;
    msg.plan_id.assign("FGLNCXOVCVKXSKBXIIRURFMSFMQLYVKCMWKZMFMQCUZSKUEDHLVVCZOAJTKAETTTGHYZWJMQQCSZGMZHAVCABFYDUTFOZIVDOCRKGNVMLJPDRHPESYHJRHBPTDLYBFNBTNUWXAPEIPCKTJLYZPNQXYTJKITBVLOQWIWQHMDXNPDBXJQWPRAUDNSOGADGPAIWBSOHGOHFJINWEPEEGOVXH");
    msg.params.assign("OKSOQEYWTUPCLAMDQFFCXYSRYSEMXMGLFIILBHGIEFTDINPTBAQRWCDIFQKBYRERZKUSYATFHIMZZDWCTLHE");

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
    msg.setTimeStamp(0.5702741536943539);
    msg.setSource(64841U);
    msg.setSourceEntity(232U);
    msg.setDestination(53501U);
    msg.setDestinationEntity(162U);
    msg.cmd = 82U;
    msg.op = 183U;
    msg.plan_id.assign("EHVYWLXIUYAHKAFUEEPTGWHKAJQGGUGNKRRFUPHMZIIANKOVICXCQQKDGYQTHXSCXJVFOMJJTOKZDOEWSZIRAFITQBKVSEDZNMMSVWSRWMYSARJXCPJYEXCGONZVAFDBNPTWWIWLTDYVYQHDEBBKSFHBLFOJPGFGWJPBMTAUEQSMVLRRZNTBNNJIULWQBQSIZLZMLXCLPZXCLTOB");
    msg.params.assign("KHSYRZMPPDAMAIRXLGHCNMVZQSVDWGNAOJQVCZIWNYFXLXTWEATYCDXUWWQZIEEEYIKCYTXMAUDYKYJHQODUBQCOFKBTESAF");

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
    msg.setTimeStamp(0.23731384336132166);
    msg.setSource(28469U);
    msg.setSourceEntity(38U);
    msg.setDestination(40606U);
    msg.setDestinationEntity(234U);
    msg.cmd = 55U;
    msg.op = 127U;
    msg.plan_id.assign("XQALWNXFHEKBFTMLHGHCMZFLXXJNJUUWNCTDYYDVPPIRQBHAOSMDYLVBWOTKNGGQHPZGVNNVGQKEQKTOWWTRNQTULAIECUK");
    msg.params.assign("ULIZDVHFMWFGOGFSQHPUUDJVGXFOZENXEZHTKFUVMJBNCSYBFLFEGGRRCWPWBUGRTREPCIQAPKVRZNDVHRSCWDWJGXKIZNNOGKXIYYFAKDUTJQSHOCQTWONCQCAHVDPPLOXAYDCSKVVAIEZUZBJS");

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
    msg.setTimeStamp(0.38618745858874115);
    msg.setSource(59000U);
    msg.setSourceEntity(107U);
    msg.setDestination(46731U);
    msg.setDestinationEntity(47U);
    msg.group_name.assign("FPQUSVBZHCYWDUIQGZYQWBFEKJKVZTSCCQUDGEFOQGOKDBQDHFPORKPSNSVQBYCTEZTATXXLVRMZDZDHJMMZEMNRJFYDOVJMON");
    msg.op = 168U;
    msg.lat = 0.01948051169420173;
    msg.lon = 0.5632655527574018;
    msg.height = 0.22454722814620476;
    msg.x = 0.42120887253222816;
    msg.y = 0.7748101572771272;
    msg.z = 0.3735350189470181;
    msg.phi = 0.910763143979632;
    msg.theta = 0.22023816555985598;
    msg.psi = 0.9772926482116925;
    msg.vx = 0.01118316320428947;
    msg.vy = 0.9149632034598594;
    msg.vz = 0.5608593003320721;
    msg.p = 0.3124751153934352;
    msg.q = 0.306630045549794;
    msg.r = 0.4443768789090089;
    msg.svx = 0.8704102495599171;
    msg.svy = 0.1845061228301883;
    msg.svz = 0.11895360530272481;

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
    msg.setTimeStamp(0.8001483668339343);
    msg.setSource(18095U);
    msg.setSourceEntity(164U);
    msg.setDestination(16931U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("IVBOCZHRLKIWFUJBRTPRQKXFRKNSJZATODNLJRFUBONVPXYXVZCCDBFJEGBFROSEJSYRIQPCLEWLABDVSOJYMWTKEQBVHCLXINQPHTHGAUALKWFYFTXBDWDTUFYHIHMXTSRZWEMKZWZKVGAYSMATRJDEYRLPISWICKNVPGXLTM");
    msg.op = 109U;
    msg.lat = 0.7884528294404899;
    msg.lon = 0.6094319384340481;
    msg.height = 0.5396365029277198;
    msg.x = 0.6483710254480441;
    msg.y = 0.6557446852701145;
    msg.z = 0.527381390256798;
    msg.phi = 0.5418699852442492;
    msg.theta = 0.9773131273555715;
    msg.psi = 0.007680780698015255;
    msg.vx = 0.06972641819256342;
    msg.vy = 0.9363628777748846;
    msg.vz = 0.3249039639480399;
    msg.p = 0.27774283229417895;
    msg.q = 0.6083266999533161;
    msg.r = 0.6089739142836909;
    msg.svx = 0.6110358124230159;
    msg.svy = 0.6058907526826048;
    msg.svz = 0.8861138259636843;

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
    msg.setTimeStamp(0.03287913460059999);
    msg.setSource(44319U);
    msg.setSourceEntity(152U);
    msg.setDestination(17736U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("GAQXUMLOPRQLRSLIDPZRBDBKEMHNCPKDHYGWBEVRUXURPCTMHMKGPFZWFIRQZTYXKTMFQFNKVDVTZCOOIMAJWCSQUWLKTEHAXQNXZZCVSSWIZDCPFOIOYRIWGQGSBJAKPAMYHETBBDGEFRYAZCMHUGYZYBNXKCHVJ");
    msg.op = 216U;
    msg.lat = 0.3544653965885336;
    msg.lon = 0.5491561828953768;
    msg.height = 0.536296882929458;
    msg.x = 0.0237056655315091;
    msg.y = 0.8869683765439754;
    msg.z = 0.392812207440674;
    msg.phi = 0.8970228165625977;
    msg.theta = 0.46687023424895924;
    msg.psi = 0.5818236499278832;
    msg.vx = 0.30357701605744114;
    msg.vy = 0.5792964163074232;
    msg.vz = 0.39752416076193153;
    msg.p = 0.22217120342858232;
    msg.q = 0.3676367023041771;
    msg.r = 0.48560463653910213;
    msg.svx = 0.5739937095351028;
    msg.svy = 0.8485762975406422;
    msg.svz = 0.6301919906400586;

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
    msg.setTimeStamp(0.12458331868769046);
    msg.setSource(52216U);
    msg.setSourceEntity(151U);
    msg.setDestination(64458U);
    msg.setDestinationEntity(191U);
    msg.plan_id.assign("YDUKTUSZJJMQDGRLTDXUQXLGHFGJAUVOKWVYLOHXQHFWHAEAN");
    msg.type = 111U;
    msg.properties = 190U;
    msg.durations.assign("MQRRHROXLYRZOKMZSKIDSQVOCLJZRAFMXYNSHSSILVTXKOMTYDZTVMIOZVGRLMKZUXWPCHKYKKIJGALXFEJCWRESQVPDVNSCWAEUXBQQFTFUYOUIWFIPTAHQVGBFDHLAJBHGBAFVTIEBRUKHWNEMKJUXXLEJVTYRJZUSQAXJJROUQJNIDPWAUPZSC");
    msg.distances.assign("ATVCLQENZJPXUVQHGPEVTNVNAYFFVBOQESZDJZABIUYKUMQTSYLLDNMNDYXWJLRTJLOJGQFICRPDXDBONMMLPCHIEFJXSZOYXLPAIZDKKOJKHN");
    msg.actions.assign("EACTKBGHALTFNZPXIGPYOSHDQABGWTV");
    msg.fuel.assign("CGAVKYJXYABSBDNDVWCDGGUUFIOXKHXSCRPBQWGDANKSREVHTXNMHIIYZZOIPFCLKWLDTZWJLVOOOEUMUFKQOKFTJGBASYFGSMRSQKE");

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
    msg.setTimeStamp(0.10615754091177909);
    msg.setSource(26665U);
    msg.setSourceEntity(27U);
    msg.setDestination(32717U);
    msg.setDestinationEntity(151U);
    msg.plan_id.assign("EUCICZTOZDEPYXEXNYMHSVQKCHMKYZDOMXRSJPBWOUAGNQCGCWUUCBLKHZGERYHXLEYQLROPILSXVDHYUSJGFBNMXOTSRXMMNRTJLYTKDVIPRJLGKNTIWKVJOHAJZFKIECLQLAGQRASNENBOBTVWJEZHXOWYXGWWUGMPAQUOWQFSF");
    msg.type = 55U;
    msg.properties = 200U;
    msg.durations.assign("SNVSFKPFTHSIBPXKYZCOTSNWBUKOOOUZKLDYAIXORWSIDCIHDAAOCNZNPGQUQITZKKXUPFFVURXEXFEXGHAZJAEGBDVYFNEQHUNRXYGRSMHNJJJRRBOLWAUKLMXEWZGVBTLPPXSYJDHMSOEIHJHLKXNEMAYKDDFRRMFVNPEVHBWFQJZQNPGYWJCJABCREQTWYTPDFTGWOJDAILUIGBYLLMVIVKBHTIRCMLBCZTQCMCDQMVCSQMUZVLOTEWYW");
    msg.distances.assign("KXKNKFCXEXYNNUDXPBIAWUDHJFYZKCRSDMGRGT");
    msg.actions.assign("NWFURWMRDHMDMSYRVSBYAWTKRCFEPDVHQGGLQABAZKGHDMKKNAVGWJYMQFCXNZXQGCDEPKPJOLYHYKTTWAOAUNWCWFSKCOIOBIQYFTFLHOXVMDTXMQARLFIVJFDEVTOZEHUXZXKZISXPBXCKSPUTPPSTZECMBEUUNJDRJRCDHGSBJEGOWAGMBZC");
    msg.fuel.assign("SRWCGGRRVINDAFEXGPLDNSZXOTXPBZFFCBYSVCUQYUQLOTFMDPFEWLXRFEQSYNDZEQASQJFCXZOWZSKPEBJBJLDHPZVVXTWBRWHMUIQMHVKIZIKHAMNKXVJCRLZTDNCQIOOUNICYNNRPONRWJWHJTYRYGAFKLJKMPYZXIOVJMUHLRFYBIIOUHLTCKQLUDQAUNAEDSE");

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
    msg.setTimeStamp(0.8592155240259022);
    msg.setSource(59011U);
    msg.setSourceEntity(167U);
    msg.setDestination(33539U);
    msg.setDestinationEntity(224U);
    msg.plan_id.assign("BJZORALVXRNXADDARRBQCQAZAPTYNUEEOKJPHLINFBZDWEJTVWMZKJNEUKWVGQECDTXYKYJLTBLODANHVHPNAOQCBRZGMJQSU");
    msg.type = 66U;
    msg.properties = 129U;
    msg.durations.assign("IZBCGQDDUVTMEFKSUCXEOFLVMFGRTFPZCAUNHCOVNHVBMXEYLGWNNQWLYYRUSNYHNCIGXUENKXSXOUIZQHUKVLPCQFAAGGAMNDORGJRZZIVMQUAQDEY");
    msg.distances.assign("QBKYSUNNBWHIAVYIQDRZRBRUQSRHDWMYYZSMBHYOPHEVDELOWOWENTIXRSONZDFMGAJZLIZNPITXMTLYKZUWIDWDJCBPRQNVBPSWIZUCSNNJKUSLOKJGULURYDHSRAUWYTTUKALVCCDWJBHGKDLTFZCFFGVBPFPOATZZHCVAXTAAEVIJKQVFXPMVPYSQXLNMORLOYHLREVFECNMJEEKXBCAGJGCQGWXJGFQOQPTFIXITQUOPAXKJGH");
    msg.actions.assign("EESYGCDEWQICYEDJSIAXLXJZVYDFTVOMMVQPZUCMHKUANJMEKFWFPNODRXAVTCEOPFHLWDTEDOYUVYRJCMAAJGWBBJCAFEZMPVHMUKSPQGBPRYJJYZGTHUHBWXBIJIPSGTAIQYNFIKKIJWZGPFQWNDUTGXVRKGLTNBKNORPEWGQNETRHVLWBAHIUORQLSIGSZOBFSCRXQLDDOLQDMSKZKXQLWBXFCBUKHNIHMMRHZLZU");
    msg.fuel.assign("KGNHPKWFLYRWBUIUHDCTF");

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
    msg.setTimeStamp(0.2507900728758793);
    msg.setSource(3976U);
    msg.setSourceEntity(28U);
    msg.setDestination(2477U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.8383866357632568;
    msg.lon = 0.4923558314941061;
    msg.depth = 0.45855622379357786;
    msg.roll = 0.11758119220479568;
    msg.pitch = 0.6364946957553496;
    msg.yaw = 0.3830205206440672;
    msg.rcp_time = 0.5539768677077872;
    msg.sid.assign("IRFCNJGJSNEHSOIWBYIAFDMTCYQSAYCAWUGLJSDXAFQPLBFOCUDD");
    msg.s_type = 180U;

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
    msg.setTimeStamp(0.16246985698041838);
    msg.setSource(38921U);
    msg.setSourceEntity(207U);
    msg.setDestination(54542U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.9675500898649885;
    msg.lon = 0.0961593168245074;
    msg.depth = 0.47443269007019073;
    msg.roll = 0.5770502801177961;
    msg.pitch = 0.24431778063912746;
    msg.yaw = 0.37098648259370526;
    msg.rcp_time = 0.1497371895724411;
    msg.sid.assign("JUAATEHWRHJYTQZHLTWZZSZGLMUSVFWHGCDYPQEBTFOS");
    msg.s_type = 113U;

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
    msg.setTimeStamp(0.6290103551307354);
    msg.setSource(59893U);
    msg.setSourceEntity(63U);
    msg.setDestination(23971U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.38926074443403824;
    msg.lon = 0.9197864591149235;
    msg.depth = 0.1414471872986881;
    msg.roll = 0.9402372886891124;
    msg.pitch = 0.30892600099815215;
    msg.yaw = 0.26704893494124304;
    msg.rcp_time = 0.6578828222204367;
    msg.sid.assign("KQPKCWBDGTBZTESTYCIBSMQGYWQVZZKAVRAZTMUOVVDQELOWYLZHMMXPP");
    msg.s_type = 177U;

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
    msg.setTimeStamp(0.27930838855097984);
    msg.setSource(53410U);
    msg.setSourceEntity(223U);
    msg.setDestination(36555U);
    msg.setDestinationEntity(99U);
    msg.id.assign("QUEBHHCLGQCIODVGAUYBQLVPFLWODRHGEKPHIZOEBBOGWDQLDKPFDBBZXCHKPKJVIFURYQQRSDXZRQHUGPQYDISCPJSLCTGPTLOMNWZMS");
    msg.sensor_class.assign("YYLLMQYMKENVRXTURMUBFBZQRSKPHPADOQJTJDVMK");
    msg.lat = 0.3589393809864466;
    msg.lon = 0.4562059431311646;
    msg.alt = 0.14114749614501243;
    msg.heading = 0.24671657087199828;
    msg.data.assign("UMWHSDSPSDSYLLFETBTROCYMYPPVZHJQKFRURZXKWFOEQQSPWPZFVEYUBQLANCZWBGNVNBYKCGKSLKEOVRDIHZEAKSJSKUGSGWQVCKMHVLGCVQNDPPMBMHPQEXPLMHEFRHCWCVJBROBVNRATLOAIOGFIILGWTZUWGY");

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
    msg.setTimeStamp(0.6641765594523316);
    msg.setSource(51064U);
    msg.setSourceEntity(209U);
    msg.setDestination(57945U);
    msg.setDestinationEntity(226U);
    msg.id.assign("SNNHKPEEXOXMGZPTGUEVYWQVJMUQGRPMLTQMJYUYDTUAXKHHRQHOSONGXOWLYIDJZKFMGXXDLJBCRISWOFQJJKAEOB");
    msg.sensor_class.assign("PTMSYSTMPEVRLCHEWSYSCLBGFJFEGLPXGNIVWZDDODDAHRKICVZOOBQX");
    msg.lat = 0.506024819704201;
    msg.lon = 0.37936925997681714;
    msg.alt = 0.21890279971619064;
    msg.heading = 0.1987277107616755;
    msg.data.assign("KMKCRWHUTNBDNVYEKQOXVWEBSIKRFUEZUPAAPYKXHALZFMZELCLDAQJYBJCVORIQYZFHVDFWGOXWRASLJNJICKOSAPEQSWLEQ");

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
    msg.setTimeStamp(0.8707953761615407);
    msg.setSource(64209U);
    msg.setSourceEntity(152U);
    msg.setDestination(19123U);
    msg.setDestinationEntity(73U);
    msg.id.assign("SLQBDAPWWKJNYOXIKRDRBNNAIWOJZPMACCOWZGVRNSZIADUYMZTLRMAEEBYP");
    msg.sensor_class.assign("WKUCRRGZIMMXYPYONEUNMKVPKKUWFRQOVCOZURWLLHZTEDFFHDPXMQBCXMEHDUUCVKYSIPWXEHQFTIEGJGIUHACPFDZEKJMIGOISOZTUQVZDYSLDUJIABHXVDYSRATAWBJLQFYVOFPMFNMLVFBAHRCNZHNJBZXALX");
    msg.lat = 0.36809293906912055;
    msg.lon = 0.935950359189568;
    msg.alt = 0.9798752343839275;
    msg.heading = 0.5521514263337803;
    msg.data.assign("XOVIAQEMYWMQAJBZKWTLBDDTYKTUQLAXSKIOWQAJBFZWYSNEVHFRISZBXFEPOVMHVREYJDLJMECZGOXYCPGJIFVHETNSDPTPWSPWVHAARRMVAPRGSU");

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
    msg.setTimeStamp(0.42833130366590266);
    msg.setSource(4116U);
    msg.setSourceEntity(110U);
    msg.setDestination(57342U);
    msg.setDestinationEntity(199U);
    msg.id.assign("LYWYWAJSTRMSJAJLSZEWRWQXZBXFDZGQHICPHYCGUVISCOBDZLGUOYOTFQDLMWJFJIVNNKJHCNFIIWVPHNSPYWVADDRHRKBMZLYOKTCKRKRHPXFFTQEDVGQJHXHOGUSDKATEMNYSMCOLLPVFBEIPHFVHMWKQJIFZTTBXXQGQSQAIUPJCALMOPNGXXYEKCINEUAKVCBFQUXYPGMTELUVOMLCXGZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XEOIPGIYJYTOIKHUHEDEOGVYQBSVBYBXXUXBKIDDUZLTOCWIYALQNTWTZMERMKFKAHQHWOHCJAVBVAOLRZVVFFCJWWNNWUDDAMSWJPSAEPCTQIMNMSYCMNRQFGULBGFLIJUFZJHXZQTQPQAFHSCJHXMRDZURGWXLVYSOUZABXTGEVPXRZPLMDGCSTZYVPLAMRFUOPESNAHCRROKMWIIPKJQNNOLNSDTWQEHCGELDXVJRUKIY");
    tmp_msg_0.feature_type = 83U;
    tmp_msg_0.rgb_red = 168U;
    tmp_msg_0.rgb_green = 233U;
    tmp_msg_0.rgb_blue = 245U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6173986826774958;
    tmp_tmp_msg_0_0.lon = 0.6680605515925808;
    tmp_tmp_msg_0_0.alt = 0.0959530974220314;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4781283818912352);
    msg.setSource(21979U);
    msg.setSourceEntity(103U);
    msg.setDestination(60236U);
    msg.setDestinationEntity(236U);
    msg.id.assign("THRIKZUSSCNOGAWVETVCQJFGHVDMDPUAIXPWZPJXLUCLUIJAJDKNTRDMJPNMLXBTZAIVDSJGEUZHZQEHDPJBBNLOELIFFEGFZBCXKESFUAQYGODQVCJEZKRHYURTLFXETZBGBARIRWQVXWWNDKKYVNARMPSSWUKHWTLUCDNOMVKGIBHXPSFICOYVSOTYQHNQLNSMGZAQZLGFMPFEMYOECAIUBLQXOGWYCOYAKB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XODBKPGXWBSLUPDZOGOSKQDNZJFYBWVAZEVQEZLWHMXMYPJIJALWQFOWPITFPTQPPTWHBEECNTSBDJZYTRCAPCQHZAYORSRYLEWVHUBCVXJEVHKNXSOGDGUIUKMFMFTSXBLTZCDXLIV");
    tmp_msg_0.feature_type = 54U;
    tmp_msg_0.rgb_red = 168U;
    tmp_msg_0.rgb_green = 67U;
    tmp_msg_0.rgb_blue = 53U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8308941571036712;
    tmp_tmp_msg_0_0.lon = 0.9905779750777981;
    tmp_tmp_msg_0_0.alt = 0.45166883820010695;
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
    msg.setTimeStamp(0.19346421962199611);
    msg.setSource(29593U);
    msg.setSourceEntity(148U);
    msg.setDestination(5630U);
    msg.setDestinationEntity(110U);
    msg.id.assign("UUZOYDPZXLVEEINFKNELOTZGCAXBGRLSFIQYKZASBPCWGXHPPEQAHDRFTRZAQVBZICWRAIZPXYSJAOKVCDOFXYHVQSSOUSTFEONJPUTFPBBMRGSDOLTGRIIWYIMUWBRGSZHCUKLLMUKMDQJRPGVWHFTTAYDBDRQSJNONJJCDIRSZNQTMMLQOYCWEATMHUFGGNMKCVJPWKNXWYLHJAHJYQOKHHW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("INDQBWKCXGVWCZJGGFYGCMCYZOGXQDNJERKGVBXOXRKLTGWUQJDTAVRFDGBUIDOZZZLSJMJNLPUYNRPLYWNSFHNWREXILBYHZWSQBMORFCRHXCMFHM");
    tmp_msg_0.feature_type = 179U;
    tmp_msg_0.rgb_red = 204U;
    tmp_msg_0.rgb_green = 209U;
    tmp_msg_0.rgb_blue = 106U;
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
    msg.setTimeStamp(0.3387566932052889);
    msg.setSource(4835U);
    msg.setSourceEntity(201U);
    msg.setDestination(15703U);
    msg.setDestinationEntity(54U);
    msg.id.assign("HPZSGMXEQHRYRRYVOBMJKARQVVNUDQWTUGKLIMILEWJJCOFZSEOQGWHRVATANUDYNUPSPJYCDPUSTNDOFCPOQLJHUSLXZMAGITZVGXKAGHLRSYLSDCMFYEXDFBHWXWCKJDDUALYYCHCJTMUNYQHPKXJFBTBFDPVTOBYEKZSAVOWIUSZUKTNENFVFFJQSKRFAXMIECKZRQLIOMOBPGIAENZWDMJKLLWGMWBBAIHXBCNVQXPP");
    msg.feature_type = 142U;
    msg.rgb_red = 217U;
    msg.rgb_green = 34U;
    msg.rgb_blue = 251U;

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
    msg.setTimeStamp(0.26391822110755747);
    msg.setSource(19295U);
    msg.setSourceEntity(127U);
    msg.setDestination(62768U);
    msg.setDestinationEntity(216U);
    msg.id.assign("MNMPHBCJUELITAOYGOHRNQSCYWDQTMHQMTGRHCXAEPBAZHEINUWLJXSZJERSYJYBFLIRSXZXFAKDJWAQKYCWWXG");
    msg.feature_type = 239U;
    msg.rgb_red = 61U;
    msg.rgb_green = 96U;
    msg.rgb_blue = 22U;

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
    msg.setTimeStamp(0.5195472709566598);
    msg.setSource(9761U);
    msg.setSourceEntity(198U);
    msg.setDestination(49368U);
    msg.setDestinationEntity(209U);
    msg.id.assign("FCGNENBRIPQSGFBNAHUNMLRTJHWLMAXKZUVVLSJRTIGPWESZUXAODEAMGKKWHPSPDRQJTQOYICUXJNLFRDWPULWAHICXMJZIVCCODCRAXJEMBJDVSPIHYKBACKTLVTYWUEYLSYHLJYFOAWRXZERTYZBQLDSNFOUGIBGSVQVXFZPBMORPEXHCRDYXZMWCMBQYNCIUDXYJZPFKKZAGLDIKMSTEQNQFWQZ");
    msg.feature_type = 246U;
    msg.rgb_red = 218U;
    msg.rgb_green = 208U;
    msg.rgb_blue = 246U;

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
    msg.setTimeStamp(0.8067824407586746);
    msg.setSource(11522U);
    msg.setSourceEntity(121U);
    msg.setDestination(23887U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.0454640018734912;
    msg.lon = 0.8414818509565934;
    msg.alt = 0.2320581896678836;

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
    msg.setTimeStamp(0.7508545240472976);
    msg.setSource(40231U);
    msg.setSourceEntity(209U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.8044782288549095;
    msg.lon = 0.144836179658555;
    msg.alt = 0.12599583623306865;

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
    msg.setTimeStamp(0.5702395922429888);
    msg.setSource(51046U);
    msg.setSourceEntity(33U);
    msg.setDestination(34290U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.7540128533112354;
    msg.lon = 0.6992112344282464;
    msg.alt = 0.7780838785109765;

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
    msg.setTimeStamp(0.7179730594735416);
    msg.setSource(64751U);
    msg.setSourceEntity(196U);
    msg.setDestination(62141U);
    msg.setDestinationEntity(6U);
    msg.type = 139U;
    msg.id.assign("MFPQAAZUZGDGESOTZIZTCPPEQKIPYDNCGLXVQODJYRXMROILFMDUNSTUPLCCRLGZISUBUAKSBIA");
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 66U;
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
    msg.setTimeStamp(0.6066071243421257);
    msg.setSource(37277U);
    msg.setSourceEntity(92U);
    msg.setDestination(8143U);
    msg.setDestinationEntity(17U);
    msg.type = 3U;
    msg.id.assign("OUIUILWEZRXCPIDU");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BCUTSYYPKWLZPBZTGHHAGIHEZHQGYFVZJKOROJVAJCDRQLRBCQDVSFYEVISKECLNNSZKOCQHINKWIJFHRNGYXVFQLOEALOPFBWKJDBBWGVNJTOAASMXPVPDWBMBATWGDULSGRTKJUI");
    tmp_msg_0.value = 207U;
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
    msg.setTimeStamp(0.39575476662910614);
    msg.setSource(37810U);
    msg.setSourceEntity(93U);
    msg.setDestination(21514U);
    msg.setDestinationEntity(4U);
    msg.type = 22U;
    msg.id.assign("NBTVIGBVABHRDLJGKSNYWXDFGSWPOZMXQGNYAXXPXAQZOCLZZKGYZDRVPHBKWHSDMDTVDAUITFBVCTSOOYRQHTMPBYSERCFJEMLFXFVIYJSGWONQEQIOOJPPGCBNWNNANLBCYHEZOUNAVAPCIMUUCSKDCHEEUSJUIUBVAFTQWKIMUPGNPDVZEJLISZKGWWYRRLOFTPVHMZLZGUKMRJBYFTQQEIEMAAFUJLXWTL");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 14412U;
    tmp_msg_0.lat = 0.6961322233938338;
    tmp_msg_0.lon = 0.1779288110261017;
    tmp_msg_0.z = 0.5474192268758822;
    tmp_msg_0.z_units = 225U;
    tmp_msg_0.speed = 0.17504482948388655;
    tmp_msg_0.speed_units = 114U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.5620911029393636;
    tmp_tmp_msg_0_0.y = 0.8893637347207263;
    tmp_tmp_msg_0_0.z = 0.4606788245027601;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("AYWCRXVGYHBKIRVDCGCYBVAMSTSJOJUIPDZXNKUEHPXKCIUFFRMKGBVAQCVZMFXXJPUFSERBMURFJHSYHEDNJLGQLMIZMLKZGQAJJLLOQMWZNNCQWJMAHPDKZHEHTRZVUASRTKEFTPCOTRWRYDOTXNSKSFDEY");
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
    msg.setTimeStamp(0.44345346816206976);
    msg.setSource(62389U);
    msg.setSourceEntity(7U);
    msg.setDestination(62649U);
    msg.setDestinationEntity(79U);
    msg.localname.assign("SITTCRDJCFWJEAWKWFRMAYBLVHVMKNDUQTGNJIQSQNZFOQCLGOMWLVHPINRNFKBSAMBVHCH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BPAPZCAZCSXXEXEBFOBAVZHALUKTGRSILCRPEDKCSPGXPUMUPLDODDRMXDYFUWUAVJKGRMQDHGEFRXFYEIILKNHQHQMBPGJINADC");
    tmp_msg_0.sys_type = 156U;
    tmp_msg_0.owner = 46981U;
    tmp_msg_0.lat = 0.9717839166534511;
    tmp_msg_0.lon = 0.7613288687196919;
    tmp_msg_0.height = 0.2301046897919189;
    tmp_msg_0.services.assign("BTJCWKIPYHVXQKARCIUDTGPZJJAKZYOLCVFDGSVVPXRXQUOSGLPODHWWGZCORSDCUXXPTKPMYGCTXBGFICEEOANUBHPKXCLNERIJTNDAUMLRSKGFFRSY");
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
    msg.setTimeStamp(0.4787785139238939);
    msg.setSource(44449U);
    msg.setSourceEntity(229U);
    msg.setDestination(58263U);
    msg.setDestinationEntity(178U);
    msg.localname.assign("MPEHDFPBUBFVKYIJDEFFPVSKPOPMZZOWLCMLDKIQQOZCHESGMOSAKGUAXYQPUFNQAOSNRGXUTCCTVFXWPYERVXKBBRHFYLNYZKEAECDXUQJDBYDRKBVXNGWAUJEJYUH");

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
    msg.setTimeStamp(0.07205072939929125);
    msg.setSource(10391U);
    msg.setSourceEntity(16U);
    msg.setDestination(33197U);
    msg.setDestinationEntity(138U);
    msg.localname.assign("XQFXEKLGHRYDDHUNAUURVVWSYGAEEJK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WKREIBUSIFCTBPJBTFBCAKCSWQQIQAQAMPUHFOMWRHPREMSJXMQOVOMGOQFOMOFCZLMRNRXTAHGNHVAVAVQDAZCZKZBCJVWBQNPKHDYKBFNJOISXCUIPLGFBIYMIULJADETYSJRPNOTVXJYVHWCTDWUFSGTIUJWLDQDJUTOLTGEFVJNKXKGSMNXSEXLUKDZRCZATHKEESPXHDYOURPWYIPZZXDGKHANYPUGHLSWQBVLDXMEGREZWCZIBRL");
    tmp_msg_0.sys_type = 84U;
    tmp_msg_0.owner = 42144U;
    tmp_msg_0.lat = 0.7528982440896932;
    tmp_msg_0.lon = 0.1569632989195514;
    tmp_msg_0.height = 0.5108370786910752;
    tmp_msg_0.services.assign("QDZHYGWKMNLUCWGBKAXRSJYADSXVCOLELIVRRFPSQCSCKWXYFEOACFZKJGZHDMHRQUZHQNPNQAWIOSTVCEVRERPMSSVKWXOZTOUIJZMYYBLESIDEGMHDTPTTIFRDBEJYPLEZMYAUVBFOLYSDNBGVRXCHDDGNKEOUOGYBWBNVQGJOCVKBGCEXZMWYHITJJANJUFITGKTJFA");
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
    msg.setTimeStamp(0.7991971404398847);
    msg.setSource(28042U);
    msg.setSourceEntity(139U);
    msg.setDestination(8183U);
    msg.setDestinationEntity(157U);
    msg.timeline.assign("FKGNDMNICRVFQKOQUNGUQBWLEJNSCYSEBLGFSUEHMHMIPKQHCUXQSERVGLGMRWJITPJMDAYJUOWGBPLXBPQSGOKXIZJTTFQHSFCDBZCSDHPGICVLWTMOVBHNPCZZMZYJZWHVRIVTXRYHXOLDNNEICAYOEEXQNTKWIPHPYOACEAAVVJZNKOYDSAGLYBZUKUDJPSKLWLTDS");
    msg.predicate.assign("SUMBJBMGDOWIVLBLQJJUPHZYGQPJSECPRTYYIBT");
    msg.attributes.assign("OVWWRMBLMUFWXJNGFOSEYLWCDVXXKGGVWPXDXTRZVIGFTORIODPOABYFHSSNDBTJUVLKOALSBQEYWQTIYKHDZBFGPTFSEJGOCRBURQWQDUNIVDAXVMDAGFKIMUKHZTQVPGWCYKIBOYTALHPWVDUESCBZIZAQNUFSERUTJMSKBLZEAZLWJSCTYLIJJOMQENMJCALIFENENXPHNNCKYCRHNYYGMHPXVZA");

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
    msg.setTimeStamp(0.4450196950920794);
    msg.setSource(53082U);
    msg.setSourceEntity(129U);
    msg.setDestination(24714U);
    msg.setDestinationEntity(137U);
    msg.timeline.assign("LKYKXTUAFBQKJNQOTTVEQGGCXUMEHAMACDULTVSVKSNVZIPJXUJMDUVFXADMYUFREEHUFNTAJORDWZODHCEZBBHUGICIHSFFSIAJGXPMTSGLPWYXBIWWHZRDNWQZYWPADKLWTZLBFAJLEDMHDGSLMLWRCTVMPKNWZYVYUSPGVNXNJXPHLQBECFRKCQIQRLTSPOZKT");
    msg.predicate.assign("EWCCXXJMEUJBWNSOKEEXCUFNSSVFRVLYPWGMLAJDIOGKYVUDLTVIBUFLVJOVZPLHYQQXOIJTUBZLOGCYVYFAYHRKOOUXMZNBPHDIXCWXNRJQEJEHMZIRWRMPRSTIPKHYOUDDWDFSQHINGPZCJEUGZHCAKN");
    msg.attributes.assign("DBWBMQTYKFVAREQQJDEROWFIVLIGUMIBPTSVXTCIYDNLVMWFYZTZGFSZKYUIOJXTPUEZCJFPXYFBAHFDPEYQKBPNKIQRGHLOMXNURAWDUSGVOBRIMGUSAWHNMXZOLNERGNXJBWWDQLAFKQAXZVGTJFZKEOJYWZQLAOIKCDZLPSDXSAJPJLNPIGLMUUSIDHTTY");

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
    msg.setTimeStamp(0.7299801695429284);
    msg.setSource(29768U);
    msg.setSourceEntity(221U);
    msg.setDestination(50254U);
    msg.setDestinationEntity(47U);
    msg.timeline.assign("STRKPXGSUDZGJTFKMGTRJXOUWBHXVDCNQEFSIBRETXBHCNNYMVBHZCMQEBZIEADZXMZBGOIQRYHGQLFKRYTDAUPKMLUVCGHQMNZRBKRQUOSYLSEITFWPZOWYVIZZMPHILISBFKCXVWOMWYJCYNRDDDHWCRUEBVSCHPFNIUGJPSQ");
    msg.predicate.assign("OEDHWFTBUTZRXRPTLHBVZPXLENHZQJAAVBAEDFDXQCMDVYGXNWQSEZLUIBISJOGIAKCPJGHWYTPKFDYDKNZNLFXSRPESEGWLQHVVSHSARUIAIXRNVHODVUUNUU");
    msg.attributes.assign("HYHVJYIYFPMXDXAMHBIRTPCQRAVC");

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
    msg.setTimeStamp(0.5889648682145802);
    msg.setSource(13557U);
    msg.setSourceEntity(41U);
    msg.setDestination(6973U);
    msg.setDestinationEntity(5U);
    msg.command = 234U;
    msg.goal_id.assign("RRKGSTAXZRBCJBWCTPGACURWAXHJZSZDIJZIMIYYAHB");
    msg.goal_xml.assign("OGGDBZZDOZGCURGJFSCPA");

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
    msg.setTimeStamp(0.1802331312454638);
    msg.setSource(46168U);
    msg.setSourceEntity(123U);
    msg.setDestination(1949U);
    msg.setDestinationEntity(51U);
    msg.command = 176U;
    msg.goal_id.assign("EYIXIFRSTVUSSZGHYQCRIMFYHXEDOWJPZNEMWJHKNZJRYFJLQBECMVCRJZOZIKBOUAXUTQWMPBVVGMIIEVCLADXOHWZCDHTTXXNURUNSPAMKFTGLPEKLCAOGFXIQSHLLVWVYCLMQMGDTLQUMADFVMJGZPPLKXFPOUNU");
    msg.goal_xml.assign("LRDNLGBCUPMADNFBHVZUTJULXUQPAINLNZNBRUCKOMPWGSBUBXESKHEQVBADXATRSMYQKESZTNUX");

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
    msg.setTimeStamp(0.6464957443849725);
    msg.setSource(40377U);
    msg.setSourceEntity(128U);
    msg.setDestination(35214U);
    msg.setDestinationEntity(7U);
    msg.command = 59U;
    msg.goal_id.assign("WAFDDLVGSFMGBGISPOBASTDADRUMKSSLFNOWCBZMQIRSKZWSCVHCWUAYKYJLXFODIHINAWQVDLBNMCJPEWMCPOYTNOAFLUZOTJMPYZOBFKKADGJPNHYGVBKHXEPNJXXUTIEOAINZBKCEUCRUDQWKQNPXWWEYTXGPVPNRGVFYQZHTZJIHMSTOJFIEALFRQMSYVJSXWAB");
    msg.goal_xml.assign("YIUPHIDERPYXACTEKOWRULCNDJVRBWNBJHFRWTMFFQXJRFSORDJSAKWVLXKZBYFTXDETOVJBKCHMALX");

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
    msg.setTimeStamp(0.2766928131831209);
    msg.setSource(32518U);
    msg.setSourceEntity(70U);
    msg.setDestination(30808U);
    msg.setDestinationEntity(91U);
    msg.op = 100U;
    msg.goal_id.assign("NELRVCZNTKADCTTSFVTBXDYEUUWSLIBJFPOQRWHHNGXDGQPUBQHAXIVJLOBRWXBARCCOAGHIGCSGH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EXXOIICQNEQYWRLQWAHVPLM");
    tmp_msg_0.predicate.assign("CRQRPGXYZMFLHHSHLPMGNXUUBFYE");
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
    msg.setTimeStamp(0.40308803978915986);
    msg.setSource(43215U);
    msg.setSourceEntity(45U);
    msg.setDestination(41318U);
    msg.setDestinationEntity(132U);
    msg.op = 34U;
    msg.goal_id.assign("PVFLWOARFHOCCELQPMKZWCFRRYBFKEEBIXKJLPVBHOCLQUTNOQNTVDFITXUQJJGAGRENKVNAZDHDCDIISWJMRFXPKOVESSPNXKRHMTDZPKRTOTZUCYASGIGLIBBWTXTBVYNHYDLOMZVRFWNIFMBAXUWRHQGQUTFDUEXWJJPUSYTQSNQSLZYAGBSBCVICSDOWHVQYARMJEDVEGYMUGNIXPAUYKPHFODEZOIZQMABMPWUJXHKACZZLLGJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DKFHHBHBSXWGZCTIQHGJWRVWYEULKLPJMNVZDKSIHJTEVBMHGCWEJZXFPNXFACQ");
    tmp_msg_0.predicate.assign("EIGADUTNGLNCSJQAOKIBLVIDDIZMXNQNBQCVCLAIWRDJXYBMRVWDKUCOAYYPCCNPZFMDYWGEBZRZTEEASGGKNJHYCENKVZOBYPMJINXMWPIO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FBOGRAISJYQWXMDNSNWUMHVRFJTUUOCIZTMDAIVCPYOKMHSSROMKCFFRBEEONESBWWBXUQTRSYIVONUASHWZWFPKPRAKPAEIZASDCHVGKZLXOSTQXAQZVIGPUGXWQVOQCCNXVNSGCTWTRIFGKKLYYTILXLUFZJNDEHXJHBXJZYYULKNRBEGOFRVOGBCJALPGFMHIKDZCIERKEEVPWLCYH");
    tmp_tmp_msg_0_0.attr_type = 160U;
    tmp_tmp_msg_0_0.min.assign("NADWDTIGYWXOSZAETMSHHRJAYLAXBXSUBXVGUCPRTHWPEQLFNMOGZIKRKCMGYFVPINYBUXBKEOAJXYOCIZEIAPXPJVUISHRCRKMWFLHRUQDSUDQJZTWUIGLZLFKTRONVOEFLHELFJUCKZVJTMZGBGXDPPAYLNBTJRHFVLECOJNKHNOEASMWYCXLCZHKUDUQSM");
    tmp_tmp_msg_0_0.max.assign("OZOMBUWGOXTPJRSYNSLPZMPWRQAAGBDKOPKDVJRYQSSAKEDHWZDKEPIFEVZYZTPFUINZFMYUQFAMQAXNRLLFTEAVCVJJUKOUGWQXFXWKRKGPLCTIAVVRDVLJCQGCULBGBHWTEUUZOCDCATCSQYTBCERHMQCVHXXRFTQNBIOUFYIIKXHDMBMRJTISDHNSMGPELNISAYL");
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
    msg.setTimeStamp(0.9378244233162825);
    msg.setSource(12760U);
    msg.setSourceEntity(91U);
    msg.setDestination(60959U);
    msg.setDestinationEntity(133U);
    msg.op = 246U;
    msg.goal_id.assign("RPNEDFYETOJRNPGCVIJYQJQKTLXUXCLMUHJIFMZEGBEPV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AVENXICETICDWOIZAIMKUMBFCBOEKJSOSKDJNUPEQVRTTQYLANYAKHTLJSDUELGAHEGNZMXNWFWAXFVVRHTKPGHUGPWQJFXBZNYMOEXXCBCISMRDPLLVYMFDVJPQBCZRCDHUEQBQDWSSNLYRLUQWISVDTGSTWFMAOEXFSFF");
    tmp_msg_0.predicate.assign("DSHMTAYERKNWVITBOPMVLGXQZXLPJZYMJYAQVOMKRIUHTHCHUFAQDXZUZMMPFHPUTCQXXDSDHDPIZNFGXTVYIATFNZREBHWKBELFPKSTNLFORV");
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
    msg.setTimeStamp(0.5796183880151488);
    msg.setSource(13950U);
    msg.setSourceEntity(65U);
    msg.setDestination(24173U);
    msg.setDestinationEntity(220U);
    msg.name.assign("NUHTAJVOTJSJXFLOYVQHLDDGGIJQANPSEHRZUMCEMRYSPGLBPEYFWMDVEQXWYEJALXYFVCHLXMTTZWVBSDSXUCVYLEBHOTNRWYIOTNBKKKSGHEELNAIEZPFKWFJVPGBLGPTQRLIZKEMHSKKQUCWBTUCFGYXGLZDDOKBGACRBSQGOPJNMNBARFMIDICMJWOFRIQNUF");
    msg.attr_type = 170U;
    msg.min.assign("JWMDPNTBGULHAEOHNXZWDGABNZOQVMENZWKURYAVG");
    msg.max.assign("LDXEJSMQJQIRHECQOKTLVWEEINBBNBXPXOKOQQAFXGMACMATJTILFSKEUXULFIDOJYOIYRBSWWZNNXBUFMKWDNFMIETYHCSVZDMCLWFOQKKYQTHWDFJOYIYXFHAMHHZGDTZGZTZVRYPOPSA");

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
    msg.setTimeStamp(0.49124240516729434);
    msg.setSource(37773U);
    msg.setSourceEntity(216U);
    msg.setDestination(18856U);
    msg.setDestinationEntity(242U);
    msg.name.assign("FJBZACWGVIIPMAOUGPBEIXSZFPWEAOYSHFTIHUFZKTOAXCCAPWZXSJLQZQJBPEVHYWSSQNDLRCLDXYGNZVDTGQTEVLTRVBRING");
    msg.attr_type = 195U;
    msg.min.assign("ABFHEOBHXEVZKPJKOODUIHYFOPGUZMGCOBGDPUWVOQV");
    msg.max.assign("YKMUDMAQBZJAORZKJFEKNPVBBZZPPSXWHKIGXDZTRXCPVCAVUCIHSAFAZHQGWAEBPNNTUEHCZDWOMKXJNIDZMTNLDTZSPLLPQGWVYMFLDUZHLVYKRYEOROMNSJXNPIRMHDRSJLVWTFCIWGEGTULWPCJFXHATGQWLVMGEYIJEQKFXBYXKQSVXYBIHHPDDDWW");

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
    msg.setTimeStamp(0.973936883309367);
    msg.setSource(44798U);
    msg.setSourceEntity(217U);
    msg.setDestination(17710U);
    msg.setDestinationEntity(162U);
    msg.name.assign("CYYLKKZFQUQGUIEMLMGHNNJFOJVAAFSPTJSWRSJEPBWUVZBBVKCSSNOJPAHMGRMZOKBWDHORZQFXPNLLDIJPUDBAQIYTTAJILKYUCNRBRYLSQRLDNOICGCVYZBICKVOMDIIRAULDQCHMBDAGNQPQDEHXVWXXWZHWETGHVZOMHZXWUFETFTOPODYRRAXEPEKXIPGLUWUSJXEZGKATIGECMPWSSUJ");
    msg.attr_type = 5U;
    msg.min.assign("PZMZMYNCAVMTSMXDHUPMWKFLTUCQFBAWDAHCQDYBEJRTIOXSCRKDLVBENFZIHOHGPOKJFUFPEDBWYONRJICPNCVEJQFUGLJVYAGXUGAEFBSUZWPXEHZMGQTNYTNUIECQQKRWMFXZIHUYWSRGSEIRLKZROPVRLBB");
    msg.max.assign("EZYTKCVIMVRLUAXPIRAKVDIKGMEMHNVDUBIBSUHMTIWPEUUHCTCVYJASKOXMPQKWVXEYJCFJNKNJDVLCNJOXEEAHIEKINPRCRHQZFYJNGVCTTXOJXHNJLIYNFWVAEFCMLPSSQGSHDWQFBCHFDHBIWKQDLZWEZWRAARLBTEPGUVQRUGFNOZGZXLQQIWCSGUMPAATSYQGOMXKFDMWYLPXPGDDB");

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
    msg.setTimeStamp(0.7792774276364463);
    msg.setSource(36387U);
    msg.setSourceEntity(83U);
    msg.setDestination(62414U);
    msg.setDestinationEntity(218U);
    msg.timeline.assign("ITGRHZSAZOGYDMQTKDCPVHRCAMYYORCQGSUDOMXE");
    msg.predicate.assign("AUOXOQHTXEWDEZBPLYMDJEQXJVBJIZISLMHXVYQHUFMYFCCEPWNEIJYWSOFOCCNAIBEPSJZGKGHKVWMDVYXFRFIJRGVLUYRPNCKMGQOGUHPNQBATLVWSETABBCKRCTJRDQTMHNZUWWLILCBZGYUMRVGAPURNXBTPLCDZAAKFTEHDQSSWISFBMVXDZXJNQADMLWRJYOLNMTASUGKXTHK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JXEVXJVRBKFDDRASTPUUHGOCQPOSECPJMCEUHIFVMDMEBFWIUQBNRTAPKWMXYNRONKFYZGDZSGJLBHMWBLPHZSYFLXETAGWTYSTXOHIRCWOSSJZEUFFMAIDQEWKBBQETYMOQYYCVOCLZTKZJUNSHGBJKIPAUGDHZ");
    tmp_msg_0.attr_type = 42U;
    tmp_msg_0.min.assign("AKWDEYRRMRPTVVDNGAQQEGCHXTZEOUDHOVLZGBABYNJRFOAIIKVRNLKBUCWIOQFHYWTHLTKDUPYAJSHCLEASXNLZXWUVBGLQBAIDMSOZZKNJWSGXHJMYHWVIXVREBQGWGJDYMPYDDSCTIICUPJQFPGJHQBXBUFQOZTFRCNCZYCLTMUFNVXMEFLCVHEJIXIEJDZMMNSPZBKWSPPNLSOQTRTKLRKBMJAAOTXEOSVPNAUPUG");
    tmp_msg_0.max.assign("BZBMIIJEDIUEN");
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
    msg.setTimeStamp(0.48490775888657334);
    msg.setSource(48073U);
    msg.setSourceEntity(232U);
    msg.setDestination(44404U);
    msg.setDestinationEntity(81U);
    msg.timeline.assign("WYRJGXZKPSBRFZDTIDWJURUULKGPZTHIOCYQKJKNZXLMKQHCFYPIENUYFTVAQSNYKXGSALXBTGETEKPZSYDMQNAIQWAIDFLQUFGOJNHVPNZGBUGJVQILFSFJUVPTCBLIWEECBJADPBEOHWSGQOCDFRPXMOUMOEBZQTWJWRMVLLRIBHVGRACHKNYFVZBSVIWCDMDHEJOV");
    msg.predicate.assign("GJPOIJOFCJIQVJDDRYGCAKEXILTRSOQCNUGEVMAHHBBZBJJSFOIWUFBULXEADYQOQWZWMBYLSMIMZANUHHMQRFDOKPFQQSBUQUNPHEGLVZETBRXPDGJMPPPYCGVTRQUWJADNEJDTMYGLNRFIRTEMCBFAKMXYIRTWPKUQXNJVCNDHWKVCYILOKFDULBHEKXWFYOIXGOTMXLSFGXBPVRSXZGWSCENHHKWLVPLAOZWYTZHKAIAUNSZZSSKANTZTYC");

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
    msg.setTimeStamp(0.7750872108533367);
    msg.setSource(9631U);
    msg.setSourceEntity(161U);
    msg.setDestination(58558U);
    msg.setDestinationEntity(148U);
    msg.timeline.assign("YYVCOGJYGHHCMDOWPTTWLSLGERIUQEYHWMVUQGFOFNSZTJOVAFIDCZDKPLXACDBSATFBLAFIBVFQARXOVUESEWDWUNCXHBKZFDLNQMKZRJMJLNWAFMJWQBQIVOMVAKMURPTMLNMOYRJOBJZPXZTIYE");
    msg.predicate.assign("VOMSEDQOQLJYMIPNCFYEAUSVORKNPQWHRPLZLVMHKOZAVCEJBCUGPIZATJVGBTAYPACLORACBKANTYNYCBHPXRXWIBITTSEAOUHDAQMSZONDOFRCEIITTYEMJKBKENVQKIVYWKF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NWGFNNWRQQGAIDHQXZSKEINNZTGDLCIIZJTJUAEVAOMJDQQVGRFXDODHGKFELOBJTTBAXEIRVHOYRWYRMCSSPVYXPBNFROJIZZUBGOBQCEAYHYJSGIYUSXVMOM");
    tmp_msg_0.attr_type = 37U;
    tmp_msg_0.min.assign("FNHMQHYBBJSNNJZSQHKLCWKQXUZWHTVPUAEFKCWTHAXICDZYOAFFIZBVJSVFIBQCKJNWIKVCQEINIZBQQLSIGLJZUUUYUGOXYAVSRTARFIEATDVHLMMUCTWPHGOEMDPGHYNONKCYERKRPSATDNMQOXEWMJONWXSWWVAPADVOEAWUPFHSHJRT");
    tmp_msg_0.max.assign("YYYRETBBQJAOUNCPWTCJLIPVBLRCDSBKYSAXVKWKZEVDHTFSEMEHNUUHQZKETYLBUOYBXJDPCHXOHWISOQWSGHEJNOGMNLINENARMMOXASGVDQZKDPJBOQDNKVZPCVYODNVEGTSFFBIHWFAPXGZRIFJIPPFTVUMFSCMGFAMQLXWWGCJUHOVCBIIRET");
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
    msg.setTimeStamp(0.158590698503573);
    msg.setSource(3039U);
    msg.setSourceEntity(36U);
    msg.setDestination(18687U);
    msg.setDestinationEntity(250U);
    msg.reactor.assign("KBTRBUAJXOECWKAIPNDEGYQAHGQLAXVESLSZUCPMRLCWORMWBLIFBTTKJJQVMDQSBPRGPUXZNCGMUDINMOSFIEZ");

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
    msg.setTimeStamp(0.26655278382718284);
    msg.setSource(19909U);
    msg.setSourceEntity(61U);
    msg.setDestination(36363U);
    msg.setDestinationEntity(216U);
    msg.reactor.assign("CQSUEOJAEXUMMWAQDRDPCVMZOWVZKEUTOGRIXMGVUXJOIUCPMRKOKJVDKVSMWZHBZNYQRIQSILVBJRRILLYTSGNGCVMQUDTTFJTMSAFKQHHRHVEYTTWFRZTXCLUGKHRATUQMYLEUDYBWYZOOOPHBGHIZFEANIBCMQYDPNPOWKENXJYSSUKVK");

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
    msg.setTimeStamp(0.890476586129231);
    msg.setSource(33437U);
    msg.setSourceEntity(184U);
    msg.setDestination(18988U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("RGJSIWHTDYRAJVYDGNASBQDBKOPEDQZFVOSNVQTLFIAICKMRBWFAMPKAJPJQCZBGQZRBDDXLXULHIOHJHTPXJPLOFWOCNHAFGQETSMKRVHLFVUSXGWJKXRJOTVSULV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HGUFOSUQZKXDRUGDMWBOLGNCUFIXQYQURVXUDHFMIEIFANJLTVDLNDFQQDQPEPMWLNCXWJJVZXXEFOYYHOPYEPTAYJCCBLYZKWAGWJESMJRPMOEKR");
    tmp_msg_0.predicate.assign("CEDIYFFKQMGQFNEKJPUTAKRVCZLEOMBSKIIIQVNWFJHVXSNXSGTMJRDTSBVHOUMZHDUXYKHKRLQPOLDBLXDFOYSVEUFYJIWSETVXUQDSNJIVBMLBSNWRCZWANPQBXAQNCFHIGTOFACCWAUCGXCBXTYJWKIPYZJLLHUDGEXEORWIBETPNXBANLVDOAZQHZCTZWRTGCQPE");
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
    msg.setTimeStamp(0.5246629390090096);
    msg.setSource(44647U);
    msg.setSourceEntity(249U);
    msg.setDestination(43756U);
    msg.setDestinationEntity(46U);
    msg.topic.assign("DCJFEOIVGEMZOFWWBAQITAPHJNKCQUOFGMQHUTNYPYKDTVLICMXSFAGQGXDPZFUQIZBOZCREATHGJAWQRFHLPRTPM");
    msg.data.assign("PKKPLOHUOGLAPQYHUSJMXRWNQFMAGFODNLBFRGUYNATXAZXICGTDBTCXJPQGTBKFVWWJYERYQRLODXUTDQFNHGSMBQBSILXWRKJAPMDCJUGJYZFOQEHCMVASZLQMKZZNGGWEWSKRIKRDCEFXONAGYEOLXOWRPRBES");

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
    msg.setTimeStamp(0.7909426221230479);
    msg.setSource(56579U);
    msg.setSourceEntity(222U);
    msg.setDestination(59569U);
    msg.setDestinationEntity(54U);
    msg.topic.assign("JLSBRTEFMGGKLFXHSNOQOZDUHWPOCFYVNPUBCAXRXJYKXAOJAZORHFTIWLQVRUHPQYCWXEQNMQONUDNKTAEHPBFGOBUIMEPHVQUQMSKASXEAMVOWRTBQYTVFHRRMCNJIEFPGKGGZISQVWYMCXWZMIDBADTUBZLVQDTLZNPZIBGGRUDLELCEXCGNYWOKVWLBTNYYPDXJZZYSWST");
    msg.data.assign("BGHGEXCQICVVKUQYLVLLIWSSMMFGJPBLRZWCNLJXWFFVYUSXGZWXEOINAERITEGLEKUQTCXFBJQYJZIOXJIVEUCXJORFBPGWIQKUDABZTQDQNOWRJFDACTDWKHIPOPMSKJABVA");

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
    msg.setTimeStamp(0.890611920489024);
    msg.setSource(36635U);
    msg.setSourceEntity(6U);
    msg.setDestination(21150U);
    msg.setDestinationEntity(211U);
    msg.topic.assign("GZBXVHRLIBOPOTDECEJUSLNECKTQHHRFWXZPJGEFLGWQYTIZYTSOPXDWJAXAKSPVLCKFDNKOUZBGDUQQFFXAOTGIKISZAVXS");
    msg.data.assign("VBAVDJGTWZUIXHGIXMQHLOPADTRCAJG");

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
    msg.setTimeStamp(0.7418922922641213);
    msg.setSource(9556U);
    msg.setSourceEntity(60U);
    msg.setDestination(9264U);
    msg.setDestinationEntity(254U);
    msg.frameid = 230U;
    const char tmp_msg_0[] = {-107, 64, 79, 87, 73, 43, 20, 3, -85, -90, -65, -41, 48, -61, 123, -105, -43, 113, 53, 73, -56, 40, -31, -10, 79, -119, -15, -98, 62, -70, 39, -46, -94, -1, -102, -4, -97, -38, 93, 81, -110, 42, -89, 67, -28, -49, 77, -32, 53, -93, -86, -125, 63, -9, -85, -13, 22, 62, -59, -25, 19, 65, 63, 97, -71, 93, 65, 72, -66, -69, -115, 102, -3, -13, -50, -121, 42, 61, -110, 19, -44, -114, 104, -16, 47, -2, 37, -8, -70, 118, 56, -125, 82, 114, 74, 31, 36, -17, 118, -16, 57, -61, 52};
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
    msg.setTimeStamp(0.5801714308701923);
    msg.setSource(64137U);
    msg.setSourceEntity(96U);
    msg.setDestination(64125U);
    msg.setDestinationEntity(20U);
    msg.frameid = 218U;
    const char tmp_msg_0[] = {123, 32, 107, 34, -43, 59, -76, 88, 76, -73, 85, -98, -126, 46, 43, 118, 61, 90, 79, 20, -100, 48, -90, 3, 57, -73, -81, -96, 65, -65, 108, 68, 81, 82, -12, 15, 60, -35, -64, -92, 64, 92, -11, 103, 72, 60, -87, -118, -50, 92, -49, -9, -61, -50, -19, 13, -84, -71, -111, 54, 120, 32, -3, 59, -31, 121, -109, 123, -48, 51, -89, -80, 48, 89, -103, 126, 76, 46, 23, -115, -62, 74, -66, -40, -65, -76, -99, -22, -102, -81, 39, 66, -96, -49, 110, 0, -32, 123, -112, -42, 10, 50, 121, -92, 9, 6, 61, -95, -106, -41, 12, -36, 94, 112, 108, 62, 93, 42, 106, 124, 61, 11, 122, 101, 43, -36, -90, 82, 26, -69, 79, 37, 50, -44, 82, -126, -63, 52, 27, 117, 37, 59, 20, 34, 53, 54, 0, 67, -111, 40, 46, 125, 3, 32, -6, 34, -88, -56, 76, -112, -33, -43, -70, 42, -35, 122, 53, -49, -28, -58, -123, 75, 87, 8, -81};
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
    msg.setTimeStamp(0.3778232076631224);
    msg.setSource(58954U);
    msg.setSourceEntity(29U);
    msg.setDestination(52857U);
    msg.setDestinationEntity(63U);
    msg.frameid = 2U;
    const char tmp_msg_0[] = {85, -51, -118, 86, 80, 106, -10, -24, -86, 12, 125, -31, -26, 55, 89, -37, -126, 42, -76, 0, -112, -4, -65, 42, 26, -54, -95, 30, -6, -13, -79, 74, 108, 120, 97, -117, 78, 65, -114, -5, 83, -118, 91, 78, 85, -11, -2, -79, 73, -111, 103, -63, -116, -6, 76, 86, 37, -20, -24, -16, 109, 25, 28, 10, -39, -5, -59, 73, -4, 45, -31, 34, -90, -127, 63, -105, -47, 111, 52, 118, 71, 101, -108, 58, -75, 101, 16, -14, 42, -61, -49, 56, -117, -126, 9, -31, 91, 2, -15, -19, -119, -123, -31, 61, -65, -89, 0, -1, 98, -70, 68, 7, -118, 123, -33, 102, 11, -57, 53, 105, 43, -80, 22, -115, -68, -41, -118, 78, -115, -85, -28, -108, 113, 21, 81, -65, 58, 28, 12, -26, -35, 111, -45, 94, -45, -90, 37, 82, 118, 61, -118, -98, -49, -82, -4, -61, -86, -128, 20, 18, -89, 48, -68, 57, -110, 59, -83, 49, -15, -122, -110, 125, -51, 29, 122, 14, 75, -115, -100, -80, -29, -112, -47, 72, 119, 111, 68, -1, -65, 25, -38, -83, 97, -28, -93, -4, 5, -68, -19, 67, -81, 76, 72, 74, -22, 108, -59, 7};
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
    msg.setTimeStamp(0.5140586640483579);
    msg.setSource(61012U);
    msg.setSourceEntity(21U);
    msg.setDestination(27447U);
    msg.setDestinationEntity(33U);
    msg.fps = 246U;
    msg.quality = 89U;
    msg.reps = 105U;
    msg.tsize = 222U;

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
    msg.setTimeStamp(0.9578693772477819);
    msg.setSource(43086U);
    msg.setSourceEntity(10U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(154U);
    msg.fps = 31U;
    msg.quality = 223U;
    msg.reps = 118U;
    msg.tsize = 88U;

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
    msg.setTimeStamp(0.8799501452101719);
    msg.setSource(53003U);
    msg.setSourceEntity(250U);
    msg.setDestination(19019U);
    msg.setDestinationEntity(24U);
    msg.fps = 98U;
    msg.quality = 51U;
    msg.reps = 111U;
    msg.tsize = 147U;

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
    msg.setTimeStamp(0.09736945838823408);
    msg.setSource(26313U);
    msg.setSourceEntity(15U);
    msg.setDestination(39743U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.09744519912653815;
    msg.lon = 0.04359542885917711;
    msg.depth = 100U;
    msg.speed = 0.5584477563799127;
    msg.psi = 0.26134414136909423;

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
    msg.setTimeStamp(0.2947019065297589);
    msg.setSource(18944U);
    msg.setSourceEntity(169U);
    msg.setDestination(61784U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.9388386098797501;
    msg.lon = 0.11793724520720184;
    msg.depth = 175U;
    msg.speed = 0.8781474036300044;
    msg.psi = 0.42998816115555605;

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
    msg.setTimeStamp(0.05719868514702553);
    msg.setSource(50372U);
    msg.setSourceEntity(16U);
    msg.setDestination(64155U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.48145874153843216;
    msg.lon = 0.22244599282569788;
    msg.depth = 245U;
    msg.speed = 0.6970867038259468;
    msg.psi = 0.12081621297250422;

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
    msg.setTimeStamp(0.05966516505898922);
    msg.setSource(48991U);
    msg.setSourceEntity(234U);
    msg.setDestination(30001U);
    msg.setDestinationEntity(73U);
    msg.label.assign("XIGFPISETQMEAEUXEYVEZUKVNYOVJLPHRWJPENIODHIRUSHSOPJQERANROYLBPWDGDGXZUKPBODVUWIGRZQOVMGYXTQYMMWJDITXPFKLTTODGGVTNZCRRRPTKIDGHTQYAPOBYXMGBVYLCMIFZCJWCDRQMFWLVYIUXAEZRSTLU");
    msg.lat = 0.7241901088187945;
    msg.lon = 0.21350306559411958;
    msg.z = 0.29341597902815364;
    msg.z_units = 58U;
    msg.cog = 0.20963831455299153;
    msg.sog = 0.9129421440235259;

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
    msg.setTimeStamp(0.7613218248395667);
    msg.setSource(59073U);
    msg.setSourceEntity(210U);
    msg.setDestination(10501U);
    msg.setDestinationEntity(85U);
    msg.label.assign("UHYXREXXDTTDLMWEQRQCENOTIDYIHJBAUDGZZTMPMSLFHRFKKUCLBOGWHWJLLCVHPHYWRXPAKXLGUESUBNZYKFKCSSNYAKSIMDMCNCDOOVLKAZBDAYFRABQHW");
    msg.lat = 0.4286588340174735;
    msg.lon = 0.7576758793567845;
    msg.z = 0.8073744120457031;
    msg.z_units = 227U;
    msg.cog = 0.18173496170098025;
    msg.sog = 0.16101847888024723;

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
    msg.setTimeStamp(0.25890927244135253);
    msg.setSource(17300U);
    msg.setSourceEntity(29U);
    msg.setDestination(30505U);
    msg.setDestinationEntity(83U);
    msg.label.assign("JOYYDVZQJCLZRXCWLPLZV");
    msg.lat = 0.24804210317028952;
    msg.lon = 0.6955660179130521;
    msg.z = 0.21201660422854007;
    msg.z_units = 9U;
    msg.cog = 0.9182426008507405;
    msg.sog = 0.633837762042194;

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
    msg.setTimeStamp(0.8680915762273387);
    msg.setSource(43815U);
    msg.setSourceEntity(157U);
    msg.setDestination(60357U);
    msg.setDestinationEntity(116U);
    msg.name.assign("FUDDCWKGRVICOMHZKXQFCONJPDQOYMOFZVTLZLMMFAASFYTS");
    msg.value.assign("NJVNGDRRXTVNULOADZVBWPORJSJTPTCBHJUMWPWNCCUKCTCVEMMXQFBLIUQGTNGBSPSMHBLPRTHVPFUVORQAYYQMKYVRPIELLYOKXEYNSWRHUDSIQIWGAONGFSLHZEJQXXSVSAWUEKYPIEWXOZNAMZMJKZQFSIFGUFFKXALLCRKHEJUXYPHEITSGBWTZHAMZVFNGQQHRJYTYAHAKPBKJLGFTDDXWFMCBWIVI");

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
    msg.setTimeStamp(0.47241139817861866);
    msg.setSource(19565U);
    msg.setSourceEntity(224U);
    msg.setDestination(15417U);
    msg.setDestinationEntity(47U);
    msg.name.assign("CMLEPBYZIGCRGURY");
    msg.value.assign("SYAFHNXOCLUQWURFCZXBVOWIMZWNEOQVQOJJYRGNBUKWNMFMZYIOEQSVVXGEAEHKYMWLESWIMPUAPBKRZJDDRRADCJYBNFHZOCTBCIIPPFZZJYSSILQBVFKLEAHRPDHLBXMASNSPSQNVKRWIUGNOLEMMAFLTEAZASTJXIPECVUJPKGKUCWVZRQMZYQKHDDLIRGNFGTLTBQUHABXDLQTFXJXKTDOWUCUOOYGGFTYJBGP");

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
    msg.setTimeStamp(0.7908274089025434);
    msg.setSource(51U);
    msg.setSourceEntity(250U);
    msg.setDestination(15885U);
    msg.setDestinationEntity(184U);
    msg.name.assign("MUHBLKUQUCXBWBNLWSDAPKXISZMSEMGZMDOZEILANKY");
    msg.value.assign("GFUWFLQFKFQWRQOARYRADKUPUQXUIHLSLJCCGZZMFGNSRZRIIYOTFZNEPGYKWDRISPTSDNEAFOKWALVDDKXACTJMPBXYOEGKTJBMJXNKYVGQBIZWTAPGPWCXMCNNLXHVPEVXOZPKSCOTDHJSBVXOQZDKNDDSEBEPEZFLHAWSXJBRHJMLIMQCBQMOIVVCE");

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
    msg.setTimeStamp(0.752092447653205);
    msg.setSource(20841U);
    msg.setSourceEntity(93U);
    msg.setDestination(35439U);
    msg.setDestinationEntity(232U);
    msg.name.assign("XCQZXJUERPQSSUMINUXCODMPSZTAJUZMIQAR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KRQHXXGBSKOIOJTKREDFWBJMWRQURNKQKBDQTRQBRGULUCJPHOTNTIHOFEQYLLWOVWBBUJUHWPXIZDWIVIALUNA");
    tmp_msg_0.value.assign("GWIYCLUSYKL");
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
    msg.setTimeStamp(0.7745446235519303);
    msg.setSource(10361U);
    msg.setSourceEntity(148U);
    msg.setDestination(8551U);
    msg.setDestinationEntity(58U);
    msg.name.assign("ZYRFHQWIWDDAZMPMPTKWZMSQOYSPFGODXSJLLJDRJWQPXYQFBKCHCXDXAYPSIYADPJAHZAEUBEUKPQZBTABTOITQHAQZMKBGRNVTQUFGGAM");

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
    msg.setTimeStamp(0.5263001134369709);
    msg.setSource(55746U);
    msg.setSourceEntity(34U);
    msg.setDestination(56916U);
    msg.setDestinationEntity(138U);
    msg.name.assign("DHKXJNGQGCPDRZBRKXNSOHJMUHPVDDVHIURCAFBQRZVMPFYACCFLUTIEYCOEVYRXQDWJYSJIBQDZEBZCNPQVAFWRRFPBLPLGKSJXCFOVIOJISVITUDKFZEMDBSBDOERLWLTTKCYOKUTHNLLNSWWEXWLGAJTVRZ");

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
    msg.setTimeStamp(0.9268086782399081);
    msg.setSource(3126U);
    msg.setSourceEntity(181U);
    msg.setDestination(57867U);
    msg.setDestinationEntity(214U);
    msg.name.assign("BVXWYSRAHRJQLUOIXLCDTHJNANGIPINPVEEQUFBKQNXTYAKJPEUMJZC");
    msg.visibility.assign("HPBSTGFPKBWZAEPLXVGNAVAYXTZFGUINJZMOOIVXJAPCICMLJTQTJVSUXVYSGWRBFEGJOWDROCFXQCLYIHOHNFMBJUXGZARQIYRCMBLCCLUKLGBOMKYBKKGDPEIFUHUSTAAQRPNLVEDWUYEKBPQYQXSGDXRKHDWHVMPEQJ");
    msg.scope.assign("KZMLNSEKVJCDQIPVORAYUYIWFJXUXOQVZKSNTULAVYCHLCWMOQHAEAMXSMPWBOYKPKFNJUWWHWYXDSGEXTCGLBRJVJDIHQSQPZNTNCSSBYMAEFJEKTURLALMMLUEZDZJDQQFHPBSXHEIFWTKRTZVNGHSZZKDLICYPCDBTQVJBFXMITBDRQLVIJEGMIBLUFPDOXRGXKUHQYVCZGCIANCUFMREOORAWTFYWVBPOHNSTRG");

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
    msg.setTimeStamp(0.8533433320338228);
    msg.setSource(41193U);
    msg.setSourceEntity(197U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(160U);
    msg.name.assign("KFTYSXPJFOWVRTWVVMBSUYORVLNEPQTNMJIGHMPONUGKDBRXVCBBGMZILQRTKSDCNNJOIQGZOHTBDUUV");
    msg.visibility.assign("WYBIOLJMDJWPCVTQPARTNAPMLYCFGQQOQBWBSNOLPXDEOHNREFNXZZGXILKTNHJILTRCFRGTXGGWGXEDJWTSUGMKZIFLEHHVPEKXMSRLYASFQAVKMUZKMXNCPHEVLZUADAIJASDYXCQVLXKWYOQISSYUKBZRUIIJUQPMAYYQBPZUUDIUZCWVBVFKXIHAZDBSDYDGFBYOHAKWKJTDCTWNLPBRFSGRJNBUFGPWHOZHMVFESMROJEMV");
    msg.scope.assign("BFEDXEFSWPL");

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
    msg.setTimeStamp(0.2295733841100599);
    msg.setSource(45900U);
    msg.setSourceEntity(64U);
    msg.setDestination(46052U);
    msg.setDestinationEntity(109U);
    msg.name.assign("FNBIGOHSPJJQIOMMCGVUVRPKRYFHMVQVECDIAVURBEZHDEUZTSQPSOFJLQIONSHBCMKNAYEBHCOXKSEKJBIB");
    msg.visibility.assign("XUWRZISHIHOGUVDZLNKJFTPHZGBHUZECDKQEQBSXXXLZNFMOACUNBRJPLMHFJVFKNYCMTSCUXIPYIFXBBRGTDTLEOFXLETOVRUGNOAPHTQIRDWDPYJZAWJTYARBLKHOEKJMFKQDOPFTPIWUJYVMQNEJQWWJBQQTTSCODVV");
    msg.scope.assign("AIFYGXZTWECMGAMGVRGCNPUURLXBKPLUXMFQVQYSHYXLHGV");

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
    msg.setTimeStamp(0.4094553969828002);
    msg.setSource(50800U);
    msg.setSourceEntity(236U);
    msg.setDestination(3322U);
    msg.setDestinationEntity(165U);
    msg.name.assign("BAMUYFRLRUNQMYLITKZXMSPPEZDLGLNVVYIQRDVEBXKKAOSNEGASJHXAIJCZXAVPTCLMNCTOENRSJIWTYOXFZNYGHNCTHXPMDZDFYDEQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LANOFTXBIANFMYCLPWFZEWGYRXIQJMNPRQWKFNHAPTBVWCGVOADMOJFGZIZBCXVSTBOJVABFAHKSGZJKYLSRUICVKCIHNUMPRWJNUIPIQPALUGGVTMEOKCJBEBVTKKWZCRXLNUDSTFEYUYRDXWDLMGMRJRLNQJQVAHQLRRWQHFQSYPPEGEIAYIEODBLWVCGVBFGZIZB");
    tmp_msg_0.value.assign("THOAJGMPGLINJAQSJUQJDIUKHDWGOVWEWRQKZAJYQXZSDISYRVNEQL");
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
    msg.setTimeStamp(0.3385198276062319);
    msg.setSource(38593U);
    msg.setSourceEntity(87U);
    msg.setDestination(29700U);
    msg.setDestinationEntity(48U);
    msg.name.assign("BJAMRZQKALVGQSPUSTLBECJJJVYRXLLWVPIUPCKNJKNTWQTEFFUPVNIHUQAIUIRWWHSKLFTGLMR");

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
    msg.setTimeStamp(0.5034783389679173);
    msg.setSource(4609U);
    msg.setSourceEntity(3U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(119U);
    msg.name.assign("QAXRQNKYFOSYBQRAGDVDQIUVPWFUQVJJGNWCMTNCHADCUINCLDISNDGHOXWZZGEXYDKHYPDNURKQBQKVRIBBJWFJOOEIGDFEWEBYEGJTPAXHZKPFXIVQUSORAORQCBMGVWLLEOTMQMLWUAIKEXSLNFKJLDUFUNCZMIHYZSWFFWAKRRTPSZELEBSB");

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
    msg.setTimeStamp(0.9968191084559043);
    msg.setSource(21185U);
    msg.setSourceEntity(20U);
    msg.setDestination(52710U);
    msg.setDestinationEntity(115U);
    msg.name.assign("IDXLULYRUCBFKSJSASBNDHSGMUBKZBLUKXVFQNPKXAHHMROTXVJWTLAHOGID");

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
    msg.setTimeStamp(0.8975658588617249);
    msg.setSource(42389U);
    msg.setSourceEntity(38U);
    msg.setDestination(41781U);
    msg.setDestinationEntity(155U);
    msg.name.assign("WRVMUABEXATJFTDUAMGHVEKLEGJCXEVBEJMAHQOTHDQTGNCTUTIZNIQPJFWAMMAMRDBGBFNOBPRKXONDVVBENYJLGDHSFZXNVJADNWSLIGDYHKMLCWSPSRWQZZUUFEPNDPWXTMSJQVPKRFLPFZQQLUYXNLLEMYCBPXHCI");

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
    msg.setTimeStamp(0.2643062160088234);
    msg.setSource(15307U);
    msg.setSourceEntity(1U);
    msg.setDestination(60936U);
    msg.setDestinationEntity(248U);
    msg.name.assign("QZDOMLLEPIOOZVMHVAQDNERJKIROLNJCKQPEPPWYZISZSTSAUNUGGRJEFDNCYTFQYJWKBGUGBA");

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
    msg.setTimeStamp(0.9315965441496898);
    msg.setSource(14205U);
    msg.setSourceEntity(141U);
    msg.setDestination(64460U);
    msg.setDestinationEntity(12U);
    msg.timeout = 3526809337U;

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
    msg.setTimeStamp(0.4729361829326266);
    msg.setSource(46838U);
    msg.setSourceEntity(148U);
    msg.setDestination(30925U);
    msg.setDestinationEntity(63U);
    msg.timeout = 2160360341U;

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
    msg.setTimeStamp(0.30273265737561916);
    msg.setSource(46283U);
    msg.setSourceEntity(221U);
    msg.setDestination(46735U);
    msg.setDestinationEntity(15U);
    msg.timeout = 2150006459U;

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
    msg.setTimeStamp(0.8935948871972748);
    msg.setSource(46438U);
    msg.setSourceEntity(68U);
    msg.setDestination(16667U);
    msg.setDestinationEntity(99U);
    msg.sessid = 2511331076U;

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
    msg.setTimeStamp(0.05145623032377544);
    msg.setSource(28086U);
    msg.setSourceEntity(185U);
    msg.setDestination(5109U);
    msg.setDestinationEntity(184U);
    msg.sessid = 661242565U;

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
    msg.setTimeStamp(0.15858384444678442);
    msg.setSource(54257U);
    msg.setSourceEntity(177U);
    msg.setDestination(14623U);
    msg.setDestinationEntity(225U);
    msg.sessid = 1513674808U;

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
    msg.setTimeStamp(0.28115675835895837);
    msg.setSource(55333U);
    msg.setSourceEntity(108U);
    msg.setDestination(4919U);
    msg.setDestinationEntity(218U);
    msg.sessid = 2677834019U;
    msg.messages.assign("XPUXGCSMVITEDNCOQFZDGXMWSTAXOSZCRVWLRXZHDSYNJBKBUBNOAMJULEXWMLYNNYCXYCZPASFAUPJHJHUPFJYZSHKAWAVIFPDMWHMJCUHBTRUEJZKKDMCROQSOBQLYTWGAIICQKAZDMSDKZQWPSZBJBVVWCTEWLOHFAFLFG");

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
    msg.setTimeStamp(0.38272300578594554);
    msg.setSource(16033U);
    msg.setSourceEntity(8U);
    msg.setDestination(23233U);
    msg.setDestinationEntity(123U);
    msg.sessid = 2874456778U;
    msg.messages.assign("ZEYNYQVNORCNOKDNSZIWWVJDUBGLQGLCCMKTTFUFDIUIFCDZPRFCHHGNPSOMBSUGAJZTZHRBQSPIXXKDSVILPXWYFWDIRZCQSQXHOJOAEEVUGTKNIWMXFDNGJYGRXBBMKNWBMYDLBYJEWOMFOVHPUIMHOBQ");

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
    msg.setTimeStamp(0.21665686233983095);
    msg.setSource(18953U);
    msg.setSourceEntity(195U);
    msg.setDestination(810U);
    msg.setDestinationEntity(95U);
    msg.sessid = 949632690U;
    msg.messages.assign("RJCKOQJYQLFGMTBNDPWYHPTQTLDIOOPRAKDXAWLEMWWCNHEXNZUBINKBOEPSUFSNIUMROVDZVPHUTNKLTVHZTGGLHTBOLWZGTSEXCHFTCRMUJDYCAAFKGYCRBFAAQPZDQQGENVXNDISKXFJMWEWREGCLNSMHIT");

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
    msg.setTimeStamp(0.7726126469948488);
    msg.setSource(24029U);
    msg.setSourceEntity(213U);
    msg.setDestination(12468U);
    msg.setDestinationEntity(184U);
    msg.sessid = 4222420688U;

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
    msg.setTimeStamp(0.6171372773937823);
    msg.setSource(55769U);
    msg.setSourceEntity(99U);
    msg.setDestination(5621U);
    msg.setDestinationEntity(88U);
    msg.sessid = 3747503376U;

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
    msg.setTimeStamp(0.577001882892241);
    msg.setSource(38108U);
    msg.setSourceEntity(166U);
    msg.setDestination(30682U);
    msg.setDestinationEntity(100U);
    msg.sessid = 3318193311U;

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
    msg.setTimeStamp(0.5273263619968013);
    msg.setSource(58576U);
    msg.setSourceEntity(154U);
    msg.setDestination(36858U);
    msg.setDestinationEntity(145U);
    msg.sessid = 4020452524U;
    msg.status = 81U;

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
    msg.setTimeStamp(0.6191053154541472);
    msg.setSource(2950U);
    msg.setSourceEntity(198U);
    msg.setDestination(58238U);
    msg.setDestinationEntity(83U);
    msg.sessid = 2092588810U;
    msg.status = 105U;

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
    msg.setTimeStamp(0.943879448647658);
    msg.setSource(29253U);
    msg.setSourceEntity(29U);
    msg.setDestination(52063U);
    msg.setDestinationEntity(114U);
    msg.sessid = 1129806541U;
    msg.status = 23U;

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
    msg.setTimeStamp(0.7629599866925051);
    msg.setSource(46255U);
    msg.setSourceEntity(149U);
    msg.setDestination(6040U);
    msg.setDestinationEntity(181U);
    msg.name.assign("EBXZDSAFYPHFWEOZSEL");

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
    msg.setTimeStamp(0.5899682862086636);
    msg.setSource(28075U);
    msg.setSourceEntity(109U);
    msg.setDestination(52423U);
    msg.setDestinationEntity(136U);
    msg.name.assign("FUENTRNYSRIHGKCCAGTGMCTNZVAKOXUVMREZCWNPKTFDHPFAANWMPZWFJSMDLPLLBCWYKCRZUMTFPJXIBOHDEKLSJWOCNHJGLSOSMJOOHFXGBDUTYDIEPUAKYPCBVAMLKRMRVBZSPTDFYADPOHIICJXTTFN");

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
    msg.setTimeStamp(0.75834764243259);
    msg.setSource(12090U);
    msg.setSourceEntity(76U);
    msg.setDestination(35210U);
    msg.setDestinationEntity(93U);
    msg.name.assign("VOLDPLMLLKPJUGRYWTEMBVBIRYDEZCJXRPGKNBCNBFZFEDBTPWEZOYRBNHLQDYUYXJMEPKUHRZCOKMACKUENQZUFFXIICLXERSWRKVGFWHZFSOWOBSDADWYYWICXDOSEBLQVRVGTGUTIGMMCPLMXSADJTNZVAVVRPHUKSMTELSHQIOUGIVHJPXXIJHHLBNHHTFNQOZNQAEOTAJAY");

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
    msg.setTimeStamp(0.3854640678753545);
    msg.setSource(38712U);
    msg.setSourceEntity(218U);
    msg.setDestination(59800U);
    msg.setDestinationEntity(215U);
    msg.name.assign("VWVVODPODTKZWQBSMKBNIDLOGXJCKYDC");

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
    msg.setTimeStamp(0.5124905733391344);
    msg.setSource(16110U);
    msg.setSourceEntity(191U);
    msg.setDestination(1791U);
    msg.setDestinationEntity(69U);
    msg.name.assign("NJUAHKYYRCIVLTBWKMCSTPGDP");

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
    msg.setTimeStamp(0.21195009408797838);
    msg.setSource(3528U);
    msg.setSourceEntity(113U);
    msg.setDestination(15700U);
    msg.setDestinationEntity(105U);
    msg.name.assign("NDXBXOUTCFFQEOFAZVASHZPAUHDSJWMGRIEGTRPKJCAEQPXGBOTBKZVAPPWQBWZRATAZYXVVWUMWFSQLUXDDYSDZFUUIYYEMGSCNZYPJGYNNZEOYPLNNHMOXIUUKRSDWXTVNMMQOWJFWYPHVXFKOFTBSMCOVRKPVTLYKSRCEPQJRJBRCGLJCEJEJMAYBVVMXLCIDHGMCTELXKIDACKBGHIGKIUNIRNIAKSLQWHNL");

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
    msg.setTimeStamp(0.6666338600489241);
    msg.setSource(39470U);
    msg.setSourceEntity(162U);
    msg.setDestination(53658U);
    msg.setDestinationEntity(181U);
    msg.type = 190U;
    msg.error.assign("SHCYDCJXNLMZKBTIOYIKXFAOTTAQRPWGIEIAXOV");

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
    msg.setTimeStamp(0.6609871648037426);
    msg.setSource(32503U);
    msg.setSourceEntity(216U);
    msg.setDestination(42085U);
    msg.setDestinationEntity(132U);
    msg.type = 203U;
    msg.error.assign("OSLIERYLSQTBXPUBJHDZZIUIOCOMRCAFJYKGADEUCRCHKKLJUHPQQKMPLHNLHXLAJVSWARMBFZANODRLFVVMUXZPIIFXTQRWLTNFSHWLAFBJZGGYMPEHUQIFIFDZTNXQOZYSJBWTDVPLUXTNWFAJEOYKNSBJPNMAPSEGZCDCYYCMVIYPTRAVCNHMOSDFIUCHKBENZITQGJGOQGEXEUTVRVSWDCKHDBKVGYMUVABQKRP");

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
    msg.setTimeStamp(0.6827771774532341);
    msg.setSource(40540U);
    msg.setSourceEntity(147U);
    msg.setDestination(48281U);
    msg.setDestinationEntity(42U);
    msg.type = 142U;
    msg.error.assign("FQOOJBTPGOKPMREGVSTMPSJRJPPGYSOQAFDRNTLOBNCDECKLHYRXFUUIAAKIDMFGEEVDXOVJKWSRAAOFMCOGUWZZBHBDQXHYR");

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
    msg.setTimeStamp(0.2862834282395045);
    msg.setSource(43270U);
    msg.setSourceEntity(8U);
    msg.setDestination(19152U);
    msg.setDestinationEntity(14U);
    msg.seq = 40093U;
    msg.sys_dst.assign("LZWTYBTKJEQXLQBUMKPNAFPOFUCBDMSXMJSBBRYCGEO");
    msg.flags = 195U;
    const char tmp_msg_0[] = {-111, 113, -27, -118, 89, 118, -93, -105, -89, 104, -99, -68, 53, -114, 71, 6, 107, 119, 23, 79, -58, 16, 1, 28, 42, 54, -34, -29, 32, 56, 5, -85, -106, -55, -63, 64, 16, -119, -59, 25, 86, -30, 35, -56, 24, -97, 50, -18, 36, -61, -84, 110, -30, 24, -1, 85, 80, -56, -101, -77, -68, -64, -27, -121, 39, 95, 77, -47, -106, 82, -125, -72, 63, 100, -36, 64, 43, 75, -111, 34, -37, 115, 117, 89, -54, 60, -97, 63, 103, 30, -4, -111, 79, -12, 0, -43, 13, -110, -63, -74, -5, -62, 31, 110, -73, -49, 72, 96, -45, -117, -63, -6, -72, -44, 103, 113, -60, -12, 69, -57, -13, 20, 19, 82, 0, -25, -49, 59, 35, 70, 11, -115, 70, -53, -58, -60, 85, 29, -5, -112, -68, -28, -102, -84, 108, 0, -86, 87, -43, -66, 89, -86, -123, 93, 121, -86, -128, 122, -60, 89, -41, -47, -128, 8, -42, 27, -17, -83, 92, -67, -13, -17, -119, -88, -100, -17, -99};
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
    msg.setTimeStamp(0.9226288376107207);
    msg.setSource(19654U);
    msg.setSourceEntity(240U);
    msg.setDestination(27338U);
    msg.setDestinationEntity(150U);
    msg.seq = 57554U;
    msg.sys_dst.assign("ZRYRLIAXULLKRMHFQYWJEJTQHTWKWFXDSAUPXWQTOAYBVPDLUUJSHXYHDTSYLGWBPXDQMZU");
    msg.flags = 219U;
    const char tmp_msg_0[] = {-44, -116, 97, -76, -90, -46, 113, 10, 91, -89, -123, -128, 16, 94, 55, -70, -49, -112, -44, 14, 25, -68, -78, -54, -72, 64, -112, -85, 84, -104, 67, -71, -81, -22, -36, 80, 100, 37, -36, 90, -74, -22, 95, -73, -98, 3, 81, 110, 0, 101, 113, -128, 122, -69, -59, -24, -51, -78, 47, 37, -107, -121, -128, -29, 105, 83, 83, 29, -99, 108, -34, -20, -4, -127, 97, 23, 115, 50, -102, -26, 108, 89, -104, -5, 100, -80, 1, -1, -104, 20, -9, 44, -96, 117, 0, -8, -117, 126, 6, -49, 111, 76, -16, -113, 27, -37, 32, -123, 55, 120, 51, -58, -85, 8, 17, 22, 7, 34, 13, -99, 80, 113, 13, -36, -23, 63, -15, 9, -61, 58, 110, -109, 20, 49, 71, 96, 13, 14, -48, 5, -100, 11, -15, 33, -128, 93, -31, 32, -77, -72, -127, -76, 34, 5, -71, 125, -8, 109, -5, -106};
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
    msg.setTimeStamp(0.8780906960284821);
    msg.setSource(38496U);
    msg.setSourceEntity(139U);
    msg.setDestination(34435U);
    msg.setDestinationEntity(50U);
    msg.seq = 63028U;
    msg.sys_dst.assign("JQZXCAPTSMDCMZRHZPDJRVBBKGRKINSEYPYHQWVQGGODLENRKSLOHZQKHVGMPRKCGEFKZTHQMKYDMIFERUVFUVYXPRTEZDGDILYOIOYJBCUPWZUWBAXTMSWCFSGGARJEZSCRKNVYBJKIINLTKJTWUBNZNEPILVPTFOJNNHDUTFDUMSFXILVEIOWADQOTPNJXSAXHBPWWMXJBYYWAAHEVBUXCZYMULMXHGTARNQFLQ");
    msg.flags = 126U;
    const char tmp_msg_0[] = {123, -34, -12, 55, -100, -79, 104, 1, 94, -66, 123, 9, -117, 57, 20, -56, -125, 47, -27, 60, -116, -109, -11, -14, -8, 94, -57, -79, -48, 77, 113, 64, -65, -6, 27, -64, 7, 19, 118, 34, -61, -47, 19, 16, -125, -74, -9, -52, 12, 56, -73, -127, -27, 9, -39, -31, 50, 77, 116, 111, 90, -99, 90, -91, 46, -14, -76, 80, -87, 52, -111, 10, 47, -83, -9, 33, 103, -94, -13, -78, 120, 5, -85, 21, -119};
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
    msg.setTimeStamp(0.6163437089702657);
    msg.setSource(14540U);
    msg.setSourceEntity(152U);
    msg.setDestination(8371U);
    msg.setDestinationEntity(157U);
    msg.sys_src.assign("XODWELIXSRKTMGOPEQZQBFXJRTOVHAUJLQFVJNGOINYHTDSFWZLDUNOLBCONGIDKDUNQQPHVKAGEWPJGPKMAGFRXNJZSMMZCYARUYELMZTRYKZYVDKNPAUCLTAVIDLQBZKPDYONCVIPEZBVHSWPYJJAEJTACCZLRIPKMMZLUUTHBIIIDWTCFOJVKSNFEWXMSCKBEQ");
    msg.sys_dst.assign("BZWNXDKAUBOYUUIUGELTHNUCKLV");
    msg.flags = 185U;
    const char tmp_msg_0[] = {104, -19, 106, -12, -51, 126, -2, -98, 40, 100, 82, -103, -110};
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
    msg.setTimeStamp(0.9156172274832911);
    msg.setSource(27536U);
    msg.setSourceEntity(239U);
    msg.setDestination(29818U);
    msg.setDestinationEntity(239U);
    msg.sys_src.assign("CIZPRXWOVAWYLCXZYISSNBRJQPOEIAAKYBFNACEXVJZPKOTIPNWRSXUXXLMKJCFLDXGYUOHAMIPHHAMICTNTUWYWSCTTEGHVRPAKFBQVPYNOBRRYOAZDBEROFUFBD");
    msg.sys_dst.assign("AESYKLNMKUNPZBLC");
    msg.flags = 6U;
    const char tmp_msg_0[] = {-127, 60, 52, 9, 75, -35, -84, -91, -2, 108, 92, 53, -40, 51, -19, 58, 102, 113, -122, 55, 98, -32, -26, -127, -56, 79, -128, -18, 46, -76, -84, 90, 90, 18, 52, 58, 66, -19, -41, 114, 97, 122, -74, 31, 6, -83, -125, 116, 78, -40, -28, -119, 6, 58, -126, -68, -49, 23, -110, 3, 20, -94, -61, 20, 10, 102, -17, 120, -117, -32, 124, 125, 88, -17, -2, -5, -127, 96, 74, 29, -31, 66, -46, 72, 58, -12};
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
    msg.setTimeStamp(0.38712354652376);
    msg.setSource(15063U);
    msg.setSourceEntity(115U);
    msg.setDestination(58713U);
    msg.setDestinationEntity(226U);
    msg.sys_src.assign("ITQCZIRDNMTAKOHFRAXSVISXVNLSUALLESWXHUGFEXKISRNOSZWPJAWZPHBWQHFMONQJKRKPEEFJYTPTPUKGVSDVDHEENMLQMFTGWGOOJEYYZBBGBPIEPUXZNRZGJABQPCFPMRZLHABUDSTZACAMFLZJYZBUIXNTYWLVMNPLDCOBLASTHBBCR");
    msg.sys_dst.assign("UOYTEWTKVBUSAMLCKUVDAKGJVTODPBIKJMQYNZ");
    msg.flags = 148U;
    const char tmp_msg_0[] = {54, 17, 32, -88, -87, -67, 44, -29, -70, 20, 47, -22, 81, -40, -105, -88, -106, -13, -42, -75, 2, 13, -123, 50, 115, 35, 124, 45, -6, -19, -62, 85, 64, 95, 22, -45, 17, -107, 108, -38, 5, 29, -23, -52, -88, 38, -111, -103, 106, -83, -61, 53, 91, -122, 49, -77, 64, -89, -107, 75, -9, -2, -88, -36, 49, -47, -4, -25, 44, -30, 47, 101, -110, 126, 25, -109, -19, 1, -12, -13, 9, -24, 7, 69, 44, 45, -8, 101, -57, 110, 87, -15, 50, -25, -116, -62, -71, 9, -116, -73, 89, 80, 58, 49, -2, -44, -86, 21, -75, -38, -51, -103, 0, 16, 37, -96, 26, -30, 18, -52, -70, 45, -56, -107, -35, -113, 93, 31, 111, -90, -114, 69, -36, -112, -110, 5, 88, -66, -28, -10, -7, 16, 32, -52, -92, -126, -64, 65, 44, -104, -120, -5, -44, -79, 88, 121, -35, -108, 81, 23, -37, 93, 33, -71, -33, 88, 56, -28, 48, 0, 16, 106, -57, 105, 98, 18, 9, 42, 36, 75, -117, 7, -66, 85, 84, 9, 14, -33, -110, 29, -92, 86, -97, -57, -126, 8, 5, -109, -1, -115, -44, 19};
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
    msg.setTimeStamp(0.9466734486701784);
    msg.setSource(28021U);
    msg.setSourceEntity(95U);
    msg.setDestination(59881U);
    msg.setDestinationEntity(109U);
    msg.seq = 26188U;
    msg.value = 244U;
    msg.error.assign("TOHQNLSTJEZMHGBMJODTTSPZOTNVCNNYRJXSUAMCPRSXRT");

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
    msg.setTimeStamp(0.032783427442397484);
    msg.setSource(22482U);
    msg.setSourceEntity(0U);
    msg.setDestination(21110U);
    msg.setDestinationEntity(109U);
    msg.seq = 39427U;
    msg.value = 164U;
    msg.error.assign("EVYULVLYPBZQZSWBAACWDTJODJBCGXKCRWYGWBINHHPXVTBFNQPGKRFCQVSFGCIGLAKTPDDFCSIIDZIQTLBQJACIBDYUSUOADAFVDAOVRRRZOQMERXJ");

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
    msg.setTimeStamp(0.8454816891223021);
    msg.setSource(11350U);
    msg.setSourceEntity(127U);
    msg.setDestination(47528U);
    msg.setDestinationEntity(233U);
    msg.seq = 64127U;
    msg.value = 29U;
    msg.error.assign("UAMFIAZWQLOWSZKRBYABDDBRQSYDTNWTPLUPXFR");

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
    msg.setTimeStamp(0.13006849772440832);
    msg.setSource(57706U);
    msg.setSourceEntity(80U);
    msg.setDestination(15580U);
    msg.setDestinationEntity(225U);
    msg.seq = 38043U;
    msg.sys.assign("VMEVHFVPTRYNUGRJKPTEHCHIDUBOWMECMTJXMIVECDBLZYOFDUPGEINAYVDYNZNRZAQVFPDXILLKPSXJFQLYMZOUGYOXVJRIPITBRDAQULE");
    msg.value = 0.56971301600606;

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
    msg.setTimeStamp(0.9037770640582748);
    msg.setSource(47546U);
    msg.setSourceEntity(10U);
    msg.setDestination(38901U);
    msg.setDestinationEntity(239U);
    msg.seq = 32015U;
    msg.sys.assign("JESUIEYYROTECLKBXSVGCOYRSZZDDCIQRNAASHNDXLTMKVWGMMWKEUJPQGZKTBFNBQFQXHXNKXLQLTBZOZIVSDZPCX");
    msg.value = 0.46229355785436654;

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
    msg.setTimeStamp(0.6755023508143315);
    msg.setSource(14597U);
    msg.setSourceEntity(14U);
    msg.setDestination(45255U);
    msg.setDestinationEntity(99U);
    msg.seq = 23533U;
    msg.sys.assign("NLWJVWDXRFZEPQZLBNXXAYHBAWJGIQXJHQXGGRQAIPXTWMCUTOLADVUUKURHNZBDMFYYMPOCIXUEFKQRMCXIHJZZAGCUSSLPSPSMLHNUZLREVOFIHHFBTLJZELVNYNCULGRXYCYBXURVVPOFNIOUTBZFKMKWWRVSJOVKWKHTSMDVAGEDSOHZQBYSIYTJYTEDLHNWCKQAGABQZPKSVNOGBJWTFAGEFMC");
    msg.value = 0.8854743502348971;

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
    msg.setTimeStamp(0.6326753325335304);
    msg.setSource(26208U);
    msg.setSourceEntity(249U);
    msg.setDestination(16119U);
    msg.setDestinationEntity(251U);
    msg.action = 34U;
    msg.longain = 0.808061216728134;
    msg.latgain = 0.949804609763247;
    msg.bondthick = 2459957146U;
    msg.leadgain = 0.5505611235668648;
    msg.deconflgain = 0.6525745230575033;

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
    msg.setTimeStamp(0.9497328729382822);
    msg.setSource(5011U);
    msg.setSourceEntity(197U);
    msg.setDestination(20767U);
    msg.setDestinationEntity(120U);
    msg.action = 121U;
    msg.longain = 0.4115212556769964;
    msg.latgain = 0.8654086173271437;
    msg.bondthick = 716481575U;
    msg.leadgain = 0.8889149242769275;
    msg.deconflgain = 0.9222228042659248;

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
    msg.setTimeStamp(0.8929878492149542);
    msg.setSource(4409U);
    msg.setSourceEntity(6U);
    msg.setDestination(45956U);
    msg.setDestinationEntity(82U);
    msg.action = 39U;
    msg.longain = 0.21086360660278392;
    msg.latgain = 0.2859209093612233;
    msg.bondthick = 1496495913U;
    msg.leadgain = 0.06513046401624101;
    msg.deconflgain = 0.6556117689184756;

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
    msg.setTimeStamp(0.1728560083002879);
    msg.setSource(44197U);
    msg.setSourceEntity(48U);
    msg.setDestination(51919U);
    msg.setDestinationEntity(215U);
    msg.err_mean = 0.8453790941809196;
    msg.dist_min_abs = 0.7879614005362978;
    msg.dist_min_mean = 0.9608842969227511;

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
    msg.setTimeStamp(0.13871943056157965);
    msg.setSource(57640U);
    msg.setSourceEntity(121U);
    msg.setDestination(56749U);
    msg.setDestinationEntity(156U);
    msg.err_mean = 0.6571457871609013;
    msg.dist_min_abs = 0.1806291656120521;
    msg.dist_min_mean = 0.01101281459421044;

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
    msg.setTimeStamp(0.5095498886464214);
    msg.setSource(7255U);
    msg.setSourceEntity(197U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(123U);
    msg.err_mean = 0.08606855220732135;
    msg.dist_min_abs = 0.8162910063087927;
    msg.dist_min_mean = 0.9592486696044559;

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
    msg.setTimeStamp(0.2988989037338352);
    msg.setSource(41548U);
    msg.setSourceEntity(211U);
    msg.setDestination(64500U);
    msg.setDestinationEntity(128U);
    msg.action = 173U;
    msg.lon_gain = 0.5436639144245454;
    msg.lat_gain = 0.8828230125397435;
    msg.bond_thick = 0.34442769408875273;
    msg.lead_gain = 0.3368888996073788;
    msg.deconfl_gain = 0.7057654679491991;
    msg.accel_switch_gain = 0.23875396061087628;
    msg.safe_dist = 0.7197552056600737;
    msg.deconflict_offset = 0.2895124457341335;
    msg.accel_safe_margin = 0.8062055491811035;
    msg.accel_lim_x = 0.8905033972329975;

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
    msg.setTimeStamp(0.7826419951305715);
    msg.setSource(63412U);
    msg.setSourceEntity(124U);
    msg.setDestination(59299U);
    msg.setDestinationEntity(96U);
    msg.action = 141U;
    msg.lon_gain = 0.18617414533868637;
    msg.lat_gain = 0.006941895647375351;
    msg.bond_thick = 0.3911597009651073;
    msg.lead_gain = 0.7480072539811154;
    msg.deconfl_gain = 0.6306937653677327;
    msg.accel_switch_gain = 0.8456767576158954;
    msg.safe_dist = 0.43891411316942974;
    msg.deconflict_offset = 0.845994103489822;
    msg.accel_safe_margin = 0.6202342109084072;
    msg.accel_lim_x = 0.7040656726026496;

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
    msg.setTimeStamp(0.42760527248043734);
    msg.setSource(18622U);
    msg.setSourceEntity(47U);
    msg.setDestination(26837U);
    msg.setDestinationEntity(110U);
    msg.action = 58U;
    msg.lon_gain = 0.08535082219412649;
    msg.lat_gain = 0.9616880110292444;
    msg.bond_thick = 0.18718000615526076;
    msg.lead_gain = 0.567563646004705;
    msg.deconfl_gain = 0.4018985439514615;
    msg.accel_switch_gain = 0.4473667770559637;
    msg.safe_dist = 0.714016450212152;
    msg.deconflict_offset = 0.9629142134002888;
    msg.accel_safe_margin = 0.9016978551626349;
    msg.accel_lim_x = 0.6272407575559676;

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
    msg.setTimeStamp(0.1718256227100612);
    msg.setSource(23697U);
    msg.setSourceEntity(35U);
    msg.setDestination(9626U);
    msg.setDestinationEntity(187U);
    msg.type = 141U;
    msg.op = 65U;
    msg.err_mean = 0.7472077120146774;
    msg.dist_min_abs = 0.4133344285118009;
    msg.dist_min_mean = 0.7237689724823427;
    msg.roll_rate_mean = 0.8422779071124663;
    msg.time = 0.9373552187121266;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 200U;
    tmp_msg_0.lon_gain = 0.7958947537278092;
    tmp_msg_0.lat_gain = 0.9344343323181673;
    tmp_msg_0.bond_thick = 0.40832191700775344;
    tmp_msg_0.lead_gain = 0.7843360789414239;
    tmp_msg_0.deconfl_gain = 0.06506544275506032;
    tmp_msg_0.accel_switch_gain = 0.2623673459726409;
    tmp_msg_0.safe_dist = 0.8333820445149633;
    tmp_msg_0.deconflict_offset = 0.3271813453389383;
    tmp_msg_0.accel_safe_margin = 0.6198713265980255;
    tmp_msg_0.accel_lim_x = 0.506058659968248;
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
    msg.setTimeStamp(0.1564750427946523);
    msg.setSource(50845U);
    msg.setSourceEntity(167U);
    msg.setDestination(41259U);
    msg.setDestinationEntity(188U);
    msg.type = 127U;
    msg.op = 238U;
    msg.err_mean = 0.6191208650970073;
    msg.dist_min_abs = 0.4908140165123749;
    msg.dist_min_mean = 0.4096115359154149;
    msg.roll_rate_mean = 0.5025883272312709;
    msg.time = 0.1980696772166517;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 164U;
    tmp_msg_0.lon_gain = 0.7489404144662056;
    tmp_msg_0.lat_gain = 0.5537625761218252;
    tmp_msg_0.bond_thick = 0.0422279904816506;
    tmp_msg_0.lead_gain = 0.5820003169981609;
    tmp_msg_0.deconfl_gain = 0.165931507878181;
    tmp_msg_0.accel_switch_gain = 0.48568207309431355;
    tmp_msg_0.safe_dist = 0.9765897091171072;
    tmp_msg_0.deconflict_offset = 0.8360017042597107;
    tmp_msg_0.accel_safe_margin = 0.7237577190830208;
    tmp_msg_0.accel_lim_x = 0.10990436756722921;
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
    msg.setTimeStamp(0.9083729503010298);
    msg.setSource(33935U);
    msg.setSourceEntity(27U);
    msg.setDestination(5232U);
    msg.setDestinationEntity(230U);
    msg.type = 28U;
    msg.op = 56U;
    msg.err_mean = 0.33784582310898703;
    msg.dist_min_abs = 0.09424729437371371;
    msg.dist_min_mean = 0.8801119859314019;
    msg.roll_rate_mean = 0.3337357420508207;
    msg.time = 0.6624548317374814;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 96U;
    tmp_msg_0.lon_gain = 0.2890692752339712;
    tmp_msg_0.lat_gain = 0.4644724375322389;
    tmp_msg_0.bond_thick = 0.9347192551196534;
    tmp_msg_0.lead_gain = 0.5398684195407905;
    tmp_msg_0.deconfl_gain = 0.987497238598394;
    tmp_msg_0.accel_switch_gain = 0.2336460919870963;
    tmp_msg_0.safe_dist = 0.2736837158510914;
    tmp_msg_0.deconflict_offset = 0.5528091680458247;
    tmp_msg_0.accel_safe_margin = 0.9980521657312533;
    tmp_msg_0.accel_lim_x = 0.36842692027234714;
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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.21276514783701228);
    msg.setSource(65115U);
    msg.setSourceEntity(101U);
    msg.setDestination(21768U);
    msg.setDestinationEntity(127U);
    msg.uid = 210U;
    msg.frag_number = 75U;
    msg.num_frags = 55U;
    const char tmp_msg_0[] = {-75, -13, 108, -17, 108, 70, 107, 107, -40, -78, 40, 112, 33, -56, -124, 36};
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
    msg.setTimeStamp(0.8491927547878318);
    msg.setSource(16011U);
    msg.setSourceEntity(185U);
    msg.setDestination(57694U);
    msg.setDestinationEntity(244U);
    msg.uid = 18U;
    msg.frag_number = 236U;
    msg.num_frags = 212U;
    const char tmp_msg_0[] = {117, -115, 10, -60, -98, -16, -119, -117, 69, 41, 74, 76, 32, -66, -101, 51, -17, -52, -55, -46, -30, 97, 79, 68, 47, 65, 21, -42, -40, 95, 31, -24, -37, -52, 108, -112, -112, 91, -66, 11, 47, 58, -11, -84, -57, -21, 109, 116, 38, -8, 66, -116, -63, 62, 122, -7, 32, -11, -28, 44, -111, 82, -68, 22, -122, 116, -37, -45, 90, -4, 110, 20, -73, 69, -33, 15, -74, -27, 55, -22, 98, -81, 19, 54, 7, -103, -83, 47, -7, 71, -104, 11, 23, -68, -106, 46, 20, 96, -40, -118, 42, 32, 119, 121, -110, 23, 109, 59, 114, 124, -90, 99, -96, -44, -60, -82, -1, 73, 123, 37, -40, -72, 4, -126, 56, -20, -91, 67, -82, -2, 40, -123, -124, -107, 97, -66, -36, 42, 100, -63, -53, 3, -25, 95, 29, -73, -53, 39, -114, -99, 74, 3, -29, 121, -66, -78, 42, -60, 41, 123, 110, -30, 55, 34, 89, 24, -108, 49, 37, 99, 93, 79, -31, -80, -85, 47, -61, 120, -100, -13, 59, 30, 56, -50, -120, 112, 26, -56, 41, -112, -86, -110, -64, -101, -29, 4, 118, -83, 15, -69, 4, -73, 6, 17, -78, -96, -74, 7, 102, -118, 51, 49, -56, 23, 112, -123, 46, -28, -13, 50, 19, -125, 22, -12, 110, 63, 64, -60, -103, -112, -66, -118, -99, -93, 52, 77, 31, 95, -117, -12, -70, -81, -71, 105, -65, -29, 93, -64, -36};
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
    msg.setTimeStamp(0.8625028982860795);
    msg.setSource(36837U);
    msg.setSourceEntity(175U);
    msg.setDestination(18584U);
    msg.setDestinationEntity(232U);
    msg.uid = 213U;
    msg.frag_number = 78U;
    msg.num_frags = 29U;
    const char tmp_msg_0[] = {-123, 76, 108, 111, 37, 39, -41, 59, -15, -88, 28, -43, -124, 61, 59, 70, -36, -115, -64, -64, 36, 100, -52, -63, 77, -15, -74, -101, 102, 18, 29, -87, 24, 67, 54, -84, -74, 82, -38, -117, -16, -42, -113, -71, -105, -15, 125, 43, 98, -44, 4, -101, -69, -98, 112, 37, -111, 57, -118, -128, 126, -108, 24, -46, 59, -10, 101, 50, 100, 108, -127, 50, -5, 68, 26, 73, -124, -9, 102, -30, 71, -50, -47, 39, -55, -3, -108, 61, 86, 54, 91, -109, -96, 68, 105, 74, 57, 73, 74, 98, -36, -4, 111, -53, 36, -117, -60, 35, 121, -116, -28, -8, 36, 79, -7, -27, -101, 6, -5, 118, -117, 1, 0, -102, 123, 75, -32, 84, 47, 81};
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
    msg.setTimeStamp(0.9599464934454631);
    msg.setSource(5970U);
    msg.setSourceEntity(87U);
    msg.setDestination(42880U);
    msg.setDestinationEntity(73U);
    msg.content_type.assign("QIUDBXCFPEGFIBZSUXSOOARXEIAZJESNKXZEYBKCINVEJZLDMPQTPAJDYKFQTZVGCTHWHDACASOLBGGPGVOMWSNUMBDCTIMVQOHLJHUBICMMQQLXVVRYREEYNUSSWFTRRIHMRSKMGJLOJXMRHAFVPPBNNQVLUJLOXPAGWAZDWNOBWHSYRYU");
    const char tmp_msg_0[] = {-26, 13, -12, -117, -90, -114, -69, -101, -81, 97, -94, -36, 3, -68, 82, 60, -13, -64, 65, 2, -16, -99, 71, -127, 8, -120, -43, 33, 61, -81, 27, 31, 27, -27, -122, -95, -105, -127, -15, 97, 3, -92, 41, 59, 126, -86, 70, 15, 90, -98, 60, -128, -25, 110, 34, 48, -99, 55, 100, 64, -96, -50, -111, 14, 107, -98, 117, 73, -101, 113, 54, 66, -57, -109, -108, 120, -96, -39, -125, -46, 67, -67, 61, -44, -16, -68, 5, 0, -76, 107, 98, -121, -113, -75, 52, 89};
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
    msg.setTimeStamp(0.26195380934162416);
    msg.setSource(15827U);
    msg.setSourceEntity(80U);
    msg.setDestination(61582U);
    msg.setDestinationEntity(238U);
    msg.content_type.assign("VVSIDDGXQNBBPNJBTDTXUORYQIAMJLEFGKZUSXCREPFXAGUYAKLEPZFPMQISXCOFGYAUKF");
    const char tmp_msg_0[] = {58, -73, -115, -125, 85, 102, 115, -71, 64, 5, 83, -30, 71, -43, -56, 50, -67, 4, -6, -78, 34, 27, 5, -107, 52, -7, -113, 39, 77, -47, -3, 17, -85, 5, 43, 96, 63, -116, 1, -67, 62, -92, 102, 90, 17, -107, -100, -74, -10, 66, -35, -33, 6, 68, -8, -56, 103, 103, -19, 121, -50, -119, -77, 29, -68, 103, 103, 90, 18, -118, -94, 118, 96, 91, -57, -23, 11, -82, -38, 4, 45, -21, 58, 10, -64, 75, 51, -102, 90, 4, 121, 41, -46, 57, 21, 61, -17, 31, -32, -40, 84, -60, -9, 78, 118, -4, -3, 36, 21, 82, -21, -14, -46, -61, -73, 96, -57, -32, 35, 86, -91};
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
    msg.setTimeStamp(0.19986202757163507);
    msg.setSource(28135U);
    msg.setSourceEntity(249U);
    msg.setDestination(37509U);
    msg.setDestinationEntity(1U);
    msg.content_type.assign("HAMEOKMYVTYFJJKRNXURXSYGLEPSJBCHPRIBYTRRNQFCWAHPVYWBNKOPWMMIMDVFLZCVQGOISHVPKGTSLUMKFYMLDRDOXGGIHJSQWGEUIVKJHDYFZJVCBLPQNEPZBOTTLOYIVPSXUEUTFDUNDIJM");
    const char tmp_msg_0[] = {-1, 125, -105, 85, 108, 2, -28, 111, 8, -37, 57, 81, 28, 82, 76, 3, 110, 31, -36, -25, -53, 103, -78, -36, -24, 112, -63, 16, 27, 3, -30, -84, -73, -104, 68, -1, -15, 15, -109, -13, 124, -110, 68, 67, 80, 46, 78, 60, 33, 30, 96, -24, -102, -117, 84, -57, -127, 116, 101, -11, -65, -79, 28, -82, 43, -51, -45, 81, -58, -57, -116, 113, -85, 91, -115, -26, 70, -114, -102, -84, 89, -65, 27, 87, -116, -35, -89, 99, -121, 116, -58, -25, -53, -48, 19, -71, 122, 17, -52, 39, -12, -23, -98, -34, 69, -42, -4, -32, -24, -92, -50, 0, 11, 96, -83, -51, 78, -103, 60, -48, 105, -38, -10, 44, -10, -65, -118, 111, 63, -110, 76, -8, 72, -54, 28, -109, 72, -108, 17, -83, -124, 58, -8, 68, 107, 71, -103, -41, 46, 110, 34, 69, -94, 79, -119, -105, 62, -97, 87, -60, 85, -35, 44, -27, 26, 12, -61, -14, -100, 123, 115, -108, 45, 102, -25, -29, -101, 35, -29, 104, 64, 81, 121, 1, 26, -70, 0, 123};
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
    msg.setTimeStamp(0.7926645610157436);
    msg.setSource(51811U);
    msg.setSourceEntity(43U);
    msg.setDestination(62169U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.04669667942817357);
    msg.setSource(33590U);
    msg.setSourceEntity(205U);
    msg.setDestination(25729U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.43406248386614843);
    msg.setSource(7695U);
    msg.setSourceEntity(193U);
    msg.setDestination(60196U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.41226245537690176);
    msg.setSource(62746U);
    msg.setSourceEntity(16U);
    msg.setDestination(13934U);
    msg.setDestinationEntity(240U);
    msg.target = 30183U;
    msg.bearing = 0.37277114114210463;
    msg.elevation = 0.22872881348525287;

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
    msg.setTimeStamp(0.4775290408918291);
    msg.setSource(64663U);
    msg.setSourceEntity(150U);
    msg.setDestination(51045U);
    msg.setDestinationEntity(131U);
    msg.target = 26841U;
    msg.bearing = 0.6134415577498011;
    msg.elevation = 0.13864754232173016;

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
    msg.setTimeStamp(0.8926307568794166);
    msg.setSource(18820U);
    msg.setSourceEntity(254U);
    msg.setDestination(39074U);
    msg.setDestinationEntity(169U);
    msg.target = 9353U;
    msg.bearing = 0.1277686937313719;
    msg.elevation = 0.9839771192738485;

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
    msg.setTimeStamp(0.12495968648675382);
    msg.setSource(48267U);
    msg.setSourceEntity(194U);
    msg.setDestination(49850U);
    msg.setDestinationEntity(120U);
    msg.target = 14486U;
    msg.x = 0.6137436186423821;
    msg.y = 0.9426032633838773;
    msg.z = 0.2940047793131937;

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
    msg.setTimeStamp(0.5711966291704863);
    msg.setSource(18101U);
    msg.setSourceEntity(235U);
    msg.setDestination(50987U);
    msg.setDestinationEntity(209U);
    msg.target = 65462U;
    msg.x = 0.7261865212828571;
    msg.y = 0.7113620884306104;
    msg.z = 0.7673883288173953;

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
    msg.setTimeStamp(0.5287352882466397);
    msg.setSource(13511U);
    msg.setSourceEntity(124U);
    msg.setDestination(55918U);
    msg.setDestinationEntity(218U);
    msg.target = 35171U;
    msg.x = 0.38096096254333955;
    msg.y = 0.5675357226954858;
    msg.z = 0.1711544518857211;

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
    msg.setTimeStamp(0.2208609696770789);
    msg.setSource(6515U);
    msg.setSourceEntity(123U);
    msg.setDestination(63885U);
    msg.setDestinationEntity(181U);
    msg.target = 52005U;
    msg.lat = 0.13349955083546372;
    msg.lon = 0.3259550667660519;
    msg.z_units = 14U;
    msg.z = 0.37344872056137923;

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
    msg.setTimeStamp(0.8186912963431773);
    msg.setSource(52835U);
    msg.setSourceEntity(84U);
    msg.setDestination(49073U);
    msg.setDestinationEntity(64U);
    msg.target = 10570U;
    msg.lat = 0.41671255722348854;
    msg.lon = 0.8421009062690362;
    msg.z_units = 236U;
    msg.z = 0.2780562372381784;

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
    msg.setTimeStamp(0.44295876255153344);
    msg.setSource(30426U);
    msg.setSourceEntity(171U);
    msg.setDestination(43225U);
    msg.setDestinationEntity(212U);
    msg.target = 64614U;
    msg.lat = 0.5526687128721982;
    msg.lon = 0.30979444837161174;
    msg.z_units = 193U;
    msg.z = 0.2580774062117709;

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
    msg.setTimeStamp(0.3961169226494369);
    msg.setSource(47814U);
    msg.setSourceEntity(172U);
    msg.setDestination(1431U);
    msg.setDestinationEntity(31U);
    msg.locale.assign("GGVKWFTLQFVNFKFTDXNUKPZURYTLYGYYINOTLBVOOJVSQRSUGGXBYLHJZKUWSQHEASMJBQPGMLCZJUADCSULVMAOWATGFEJRVLHEMBHHTFASFRPWASIVXDFQWTWNPEVNK");
    const char tmp_msg_0[] = {-117, 12, 74, -85, -88, 66, 93, 37, -45, 2, -102, 11, -2, 25, -81, 99, -24, -115, -28};
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
    msg.setTimeStamp(0.5195110655656495);
    msg.setSource(56515U);
    msg.setSourceEntity(174U);
    msg.setDestination(56131U);
    msg.setDestinationEntity(96U);
    msg.locale.assign("PTKXPMHDBLNIJJGRUKQAFUECKIMIYHLVCYETVHMZIBPLXZSIWQOAERANGMSMDJUNXBVTTTSTMBWNXHVHKLQHEOUDUUOWIUXACNAWGFYKPRSFRCNRJIEWGQKGTBYOZOBTMFYIODRZPWZSVYYPFAYLR");
    const char tmp_msg_0[] = {-57, 68, -54, -108, -45, 57, -21, -27, -35, -92, 26, 33};
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
    msg.setTimeStamp(0.8516467440484108);
    msg.setSource(65046U);
    msg.setSourceEntity(196U);
    msg.setDestination(30218U);
    msg.setDestinationEntity(76U);
    msg.locale.assign("HZIKOHBJYJPGQURRYYRDMIUGOSTBWEXPCOJCVAYMGBMAF");
    const char tmp_msg_0[] = {81, -59, 119, 117, 28, 124, -20, -40, 34, -27, 43, -75, -3, 76, 58, 76, -101, 68, -86};
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
    msg.setTimeStamp(0.43737489895442405);
    msg.setSource(48828U);
    msg.setSourceEntity(247U);
    msg.setDestination(2170U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.0731164133026807);
    msg.setSource(24937U);
    msg.setSourceEntity(146U);
    msg.setDestination(54386U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.8261131812669928);
    msg.setSource(6375U);
    msg.setSourceEntity(250U);
    msg.setDestination(31841U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.49016788363722374);
    msg.setSource(53709U);
    msg.setSourceEntity(252U);
    msg.setDestination(62482U);
    msg.setDestinationEntity(93U);
    msg.camid = 6U;
    msg.x = 14074U;
    msg.y = 19086U;

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
    msg.setTimeStamp(0.6688427655842721);
    msg.setSource(62681U);
    msg.setSourceEntity(74U);
    msg.setDestination(48344U);
    msg.setDestinationEntity(31U);
    msg.camid = 42U;
    msg.x = 13237U;
    msg.y = 29371U;

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
    msg.setTimeStamp(0.30079427009914217);
    msg.setSource(1361U);
    msg.setSourceEntity(183U);
    msg.setDestination(9444U);
    msg.setDestinationEntity(9U);
    msg.camid = 85U;
    msg.x = 32656U;
    msg.y = 26158U;

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
    msg.setTimeStamp(0.5443623578881305);
    msg.setSource(19490U);
    msg.setSourceEntity(154U);
    msg.setDestination(5859U);
    msg.setDestinationEntity(123U);
    msg.camid = 90U;
    msg.x = 39517U;
    msg.y = 5048U;

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
    msg.setTimeStamp(0.2610195525401384);
    msg.setSource(8690U);
    msg.setSourceEntity(187U);
    msg.setDestination(30766U);
    msg.setDestinationEntity(88U);
    msg.camid = 249U;
    msg.x = 43640U;
    msg.y = 41870U;

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
    msg.setTimeStamp(0.19942508700970885);
    msg.setSource(23007U);
    msg.setSourceEntity(183U);
    msg.setDestination(53508U);
    msg.setDestinationEntity(31U);
    msg.camid = 250U;
    msg.x = 45013U;
    msg.y = 56611U;

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
    msg.setTimeStamp(0.744489294055456);
    msg.setSource(20961U);
    msg.setSourceEntity(244U);
    msg.setDestination(15416U);
    msg.setDestinationEntity(65U);
    msg.tracking = 124U;
    msg.lat = 0.889486232926829;
    msg.lon = 0.21947109211356208;
    msg.x = 0.6517608368272472;
    msg.y = 0.6107137869748059;
    msg.z = 0.021820232047977117;

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
    msg.setTimeStamp(0.7269450005466902);
    msg.setSource(44622U);
    msg.setSourceEntity(109U);
    msg.setDestination(21833U);
    msg.setDestinationEntity(61U);
    msg.tracking = 200U;
    msg.lat = 0.11104939879546394;
    msg.lon = 0.2174284472922745;
    msg.x = 0.1842417045731911;
    msg.y = 0.03761426756259312;
    msg.z = 0.6732726567477709;

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
    msg.setTimeStamp(0.19353039186154886);
    msg.setSource(36818U);
    msg.setSourceEntity(37U);
    msg.setDestination(37237U);
    msg.setDestinationEntity(207U);
    msg.tracking = 87U;
    msg.lat = 0.976009224679365;
    msg.lon = 0.433998560281734;
    msg.x = 0.2266623673541529;
    msg.y = 0.4042743835089786;
    msg.z = 0.530501510891489;

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
    msg.setTimeStamp(0.9750983744400848);
    msg.setSource(40941U);
    msg.setSourceEntity(103U);
    msg.setDestination(868U);
    msg.setDestinationEntity(159U);
    msg.target.assign("NJSAYMBRSZQHIEKJMFATGMOGTLSVXDLKOOXKWYSYNUPLRXRDVUBGVYWDXLHXBLUPGVJQZNPGKNSDZKVYJCEQOOYPKTWFGJCSKGHMMZNIHTHUCNUBRYJFBIDEQYZKOIRZWXWWLTCPJESCDCPAMFTPBXZGT");
    msg.lbearing = 0.43309314987517133;
    msg.lelevation = 0.21826641094667187;
    msg.bearing = 0.960865577047971;
    msg.elevation = 0.5177770418472614;
    msg.phi = 0.9419338056527508;
    msg.theta = 0.14948362643550095;
    msg.psi = 0.7334974682496296;
    msg.accuracy = 0.15137342240725005;

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
    msg.setTimeStamp(0.48967985625561694);
    msg.setSource(10682U);
    msg.setSourceEntity(16U);
    msg.setDestination(61737U);
    msg.setDestinationEntity(78U);
    msg.target.assign("OMTDMGVUGGEAYKHWJORBHYNFPPLSTJTRHCSAPKXLIYFLKLAIBLCSDCXJCQRQSNSKDBMMGFEIEHTVNTUTZGCQHDGBCCDYMZFVOXWFZTWKZIUBBJVPVRBXYUSKNDUSCAAWPNSQCEKTUNHFGZDZPWAGEXNLOPSOXFRVUYEJMYLEYKLELS");
    msg.lbearing = 0.528817464786964;
    msg.lelevation = 0.30123534478420533;
    msg.bearing = 0.4359125974216377;
    msg.elevation = 0.1789538355683119;
    msg.phi = 0.44260455432264734;
    msg.theta = 0.5674737316807891;
    msg.psi = 0.9881348166355177;
    msg.accuracy = 0.8308555970776579;

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
    msg.setTimeStamp(0.5551882407664138);
    msg.setSource(12169U);
    msg.setSourceEntity(229U);
    msg.setDestination(26446U);
    msg.setDestinationEntity(233U);
    msg.target.assign("BORYDHIXFCBUHLOSPFBBNCAPICWMXUSEZVNERQENWAYOIFZYHVLCURGZYXRHQJQEIWEWAEQPXSHTCRHOFUHGMWVSBSFVPGGSKPINKJKYIXQYKMGNBOLVFNIMMUOJSNTOTZXFSYEVQTLUAARTDUVCXGPEKGIHTKPSVDIPLYRNKAHAJMKAFZJCLMGOMQVDPDWCDMRZKDJGFPRWQZKZWNEXYBAZETZQWNY");
    msg.lbearing = 0.6600416868367015;
    msg.lelevation = 0.38836367216814416;
    msg.bearing = 0.16941484941802587;
    msg.elevation = 0.5663305811660275;
    msg.phi = 0.10384877685995375;
    msg.theta = 0.2004550368561835;
    msg.psi = 0.8842930552373486;
    msg.accuracy = 0.23326807406130956;

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
    msg.setTimeStamp(0.18615700316426964);
    msg.setSource(46313U);
    msg.setSourceEntity(36U);
    msg.setDestination(28974U);
    msg.setDestinationEntity(246U);
    msg.target.assign("WLASJMXXUUTKTEZGIPODPEVWJPFJYLFHGUZUVWWTXHS");
    msg.x = 0.3668705288086056;
    msg.y = 0.028737070626883465;
    msg.z = 0.4183936450075322;
    msg.n = 0.4852826525856715;
    msg.e = 0.15975950676490858;
    msg.d = 0.7564198626246084;
    msg.phi = 0.9754039146860958;
    msg.theta = 0.3245697544400561;
    msg.psi = 0.22140355347456442;
    msg.accuracy = 0.07941024130017571;

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
    msg.setTimeStamp(0.7375372324672679);
    msg.setSource(48299U);
    msg.setSourceEntity(238U);
    msg.setDestination(41503U);
    msg.setDestinationEntity(147U);
    msg.target.assign("DAJHYAFNSEGXZQ");
    msg.x = 0.9403354487926712;
    msg.y = 0.3672773716374569;
    msg.z = 0.6593481864377144;
    msg.n = 0.6455765516545159;
    msg.e = 0.7172605974663865;
    msg.d = 0.04939056010677956;
    msg.phi = 0.8087836977392823;
    msg.theta = 0.5783770065160019;
    msg.psi = 0.3372036716727891;
    msg.accuracy = 0.6858136876107856;

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
    msg.setTimeStamp(0.8891560197306271);
    msg.setSource(9564U);
    msg.setSourceEntity(223U);
    msg.setDestination(28739U);
    msg.setDestinationEntity(46U);
    msg.target.assign("TSNWGPWKOXTEZVGKPTZRGHABMRPUYNUOQSJFAQXXSAZLHN");
    msg.x = 0.9396039433755046;
    msg.y = 0.9770523294660167;
    msg.z = 0.37748864404357274;
    msg.n = 0.769613573977358;
    msg.e = 0.8450226290312238;
    msg.d = 0.5192272028339505;
    msg.phi = 0.602612563863301;
    msg.theta = 0.5297133695109428;
    msg.psi = 0.7428783381156641;
    msg.accuracy = 0.24146800724205542;

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
    msg.setTimeStamp(0.0951706061130857);
    msg.setSource(44718U);
    msg.setSourceEntity(27U);
    msg.setDestination(51141U);
    msg.setDestinationEntity(82U);
    msg.target.assign("CIEXCERQKKAXKVHUSZXSFCTUUOYZMGKVFCOPFDZEUPSNXVGHQVCMNJJHDNGVFOLTCYKZPVTJLMSOFDODBSQAHMUDDXBENBMUUNPRPDBRNGGLZYQFPAOBQSWCTHTYIRVLCMYLKJGCLULJSEIJDEVXTEIWYXWNYICKGLNIWWFPGAAZDMBWRTHJEXUHBYUIWNOSORHMTIXZRGKIEITAEQOABFVRTQJWQHWOZJKMYRQPLZBXGSHZDLFWKVMPP");
    msg.lat = 0.7523981371755091;
    msg.lon = 0.33784959678561477;
    msg.z_units = 137U;
    msg.z = 0.5934631242428456;
    msg.accuracy = 0.6907352466226954;

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
    msg.setTimeStamp(0.5788131726449413);
    msg.setSource(51968U);
    msg.setSourceEntity(76U);
    msg.setDestination(26273U);
    msg.setDestinationEntity(11U);
    msg.target.assign("JESXXEGFOKPGCMQLCFVSPFDROIU");
    msg.lat = 0.4232287996023155;
    msg.lon = 0.5470038784371279;
    msg.z_units = 221U;
    msg.z = 0.6722694791519379;
    msg.accuracy = 0.9741239886027285;

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
    msg.setTimeStamp(0.5834972120754712);
    msg.setSource(5785U);
    msg.setSourceEntity(195U);
    msg.setDestination(12085U);
    msg.setDestinationEntity(88U);
    msg.target.assign("IZVUKFICOQJTZOHDVGCLEPQSRDFCDRRAQFWBATNMBNMHLKLKSIPDJXLLWGSAVOYNGHFKEYFMGYXUXTEWKZFAEWOSBONALGTGSDECZZKUZLXFCZDQMCKGWRIICMUNBJTXZVZONTGUVEXJXVQVQMUHPFYC");
    msg.lat = 0.2333908833920354;
    msg.lon = 0.7203162139454964;
    msg.z_units = 114U;
    msg.z = 0.4006867314606505;
    msg.accuracy = 0.5835990939927544;

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
    msg.setTimeStamp(0.20041720304219046);
    msg.setSource(32036U);
    msg.setSourceEntity(72U);
    msg.setDestination(64918U);
    msg.setDestinationEntity(53U);
    msg.name.assign("CRENHALTBDDKNUSYYNOYZXNCAQAFELDJXCPHQSOMSDIOENSOIHMTIGBTXVJGTKPIILARFECHCIUWAECCURQVJJKLMWGJPIFFYOKVQEGURIWAOBVZCUPPMIXAXWRMHPUHHTXJKLECVXZNVDLTNWXERSQVBJWTKKFDSRYZKKBBSPYZSXNIBQGXSMPQMWMQJGUPFHYOEZWDZYUUTWDSOJFGTVDVOYCFLBPGZEBFQJNLB");
    msg.lat = 0.23946996757508798;
    msg.lon = 0.31195078576465707;
    msg.z = 0.23008658075932586;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.9594625924135033);
    msg.setSource(6367U);
    msg.setSourceEntity(167U);
    msg.setDestination(42039U);
    msg.setDestinationEntity(223U);
    msg.name.assign("CYDSVPEFKASKKSQLURKBTENTOZKSMAMKFPSJXIUMYKFOJFWCHAZYCNQPWASDRYKVPIHNTCCRNNGZXOUZGFYTF");
    msg.lat = 0.7491831705724311;
    msg.lon = 0.8804584129267866;
    msg.z = 0.274714903140751;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.541722603288523);
    msg.setSource(26599U);
    msg.setSourceEntity(240U);
    msg.setDestination(33425U);
    msg.setDestinationEntity(145U);
    msg.name.assign("ZJKOKXNHRXPWKYDTKLNHRQODLDUKEDUVONNQJEYWKPMMEPGVVAKDVZVRIBUFOUTIVENSXZFTQAPFXBSWNWAKWZDKPYCFUKPQLJISCMUIMBMEEGGQYEAOTFVGSBOZCYJSBRIFHYXZGCRPSAQBCAJZCCGDUIYCQBHDPGMTRRUORUSZZEMVPAJHRTBIVAPDJCFHOHHRMZFWMMLVJSGXQQGEWINUCTOT");
    msg.lat = 0.6486686886270656;
    msg.lon = 0.9093349669584437;
    msg.z = 0.2648144418525967;
    msg.z_units = 75U;

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
    msg.setTimeStamp(0.7795320031605142);
    msg.setSource(59741U);
    msg.setSourceEntity(196U);
    msg.setDestination(19785U);
    msg.setDestinationEntity(12U);
    msg.op = 183U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("PUHKHZSKFUUKRSZCMWCDKMKOAKNEUEYFROULEADEOTHPSVXPPINWZSCFHHDYYGTDHPZBQ");
    tmp_msg_0.lat = 0.10214141538226673;
    tmp_msg_0.lon = 0.8836589591804365;
    tmp_msg_0.z = 0.15266212211574925;
    tmp_msg_0.z_units = 8U;
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
    msg.setTimeStamp(0.1472926220814853);
    msg.setSource(51767U);
    msg.setSourceEntity(108U);
    msg.setDestination(21351U);
    msg.setDestinationEntity(84U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.3411921697674427);
    msg.setSource(21213U);
    msg.setSourceEntity(9U);
    msg.setDestination(44971U);
    msg.setDestinationEntity(209U);
    msg.op = 154U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZLQZSXTHCZIEBDKRVUNNNUQYFDCLQLYWMNMVWRGUKXARYEDCIOCFTAWNHETSWUIUSVF");
    tmp_msg_0.lat = 0.5380588743908082;
    tmp_msg_0.lon = 0.6852407108149554;
    tmp_msg_0.z = 0.23422862311305837;
    tmp_msg_0.z_units = 106U;
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
    msg.setTimeStamp(0.00843851334068324);
    msg.setSource(41798U);
    msg.setSourceEntity(177U);
    msg.setDestination(40553U);
    msg.setDestinationEntity(106U);
    msg.value = 0.23876441955769312;
    msg.type = 234U;

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
    msg.setTimeStamp(0.418734868272825);
    msg.setSource(28148U);
    msg.setSourceEntity(196U);
    msg.setDestination(8425U);
    msg.setDestinationEntity(189U);
    msg.value = 0.09271091832034783;
    msg.type = 173U;

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
    msg.setTimeStamp(0.6339078627912081);
    msg.setSource(20757U);
    msg.setSourceEntity(77U);
    msg.setDestination(18017U);
    msg.setDestinationEntity(78U);
    msg.value = 0.2814624216826237;
    msg.type = 148U;

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
    msg.setTimeStamp(0.030376108910485144);
    msg.setSource(2809U);
    msg.setSourceEntity(200U);
    msg.setDestination(50215U);
    msg.setDestinationEntity(125U);
    msg.value = 0.9824806739768417;

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
    msg.setTimeStamp(0.810479039976416);
    msg.setSource(45327U);
    msg.setSourceEntity(92U);
    msg.setDestination(14368U);
    msg.setDestinationEntity(40U);
    msg.value = 0.28402416508355155;

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
    msg.setTimeStamp(0.5282309891904705);
    msg.setSource(29324U);
    msg.setSourceEntity(139U);
    msg.setDestination(11580U);
    msg.setDestinationEntity(96U);
    msg.value = 0.7183043178234224;

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
    msg.setTimeStamp(0.253284003503521);
    msg.setSource(18649U);
    msg.setSourceEntity(49U);
    msg.setDestination(54959U);
    msg.setDestinationEntity(73U);
    msg.timestamp_last_service = 0.6179457299145997;
    msg.time_next_service = 0.41642449551390914;
    msg.time_motor_next_service = 0.18235030074033343;
    msg.time_idle_ground = 0.42804588082644546;
    msg.time_idle_air = 0.16427496735124214;
    msg.time_idle_water = 0.16269218649804018;
    msg.time_idle_underwater = 0.6738261017489044;
    msg.time_idle_unknown = 0.6944835054590679;
    msg.time_motor_ground = 0.14493412971650865;
    msg.time_motor_air = 0.7858803949094909;
    msg.time_motor_water = 0.2535553516718556;
    msg.time_motor_underwater = 0.3424945810680391;
    msg.time_motor_unknown = 0.06797668205641194;
    msg.rpm_min = 291;
    msg.rpm_max = -12416;
    msg.depth_max = 0.9310460925080367;

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
    msg.setTimeStamp(0.18402046788187132);
    msg.setSource(53728U);
    msg.setSourceEntity(119U);
    msg.setDestination(31463U);
    msg.setDestinationEntity(244U);
    msg.timestamp_last_service = 0.9912935997958443;
    msg.time_next_service = 0.6297947316639781;
    msg.time_motor_next_service = 0.7837571731795799;
    msg.time_idle_ground = 0.9481989298191434;
    msg.time_idle_air = 0.1975011489774824;
    msg.time_idle_water = 0.5485015960002158;
    msg.time_idle_underwater = 0.2428190619612447;
    msg.time_idle_unknown = 0.09320511503333773;
    msg.time_motor_ground = 0.6266469834764903;
    msg.time_motor_air = 0.9237190201757254;
    msg.time_motor_water = 0.052716348016542125;
    msg.time_motor_underwater = 0.5906417100801787;
    msg.time_motor_unknown = 0.012565505351921136;
    msg.rpm_min = -1100;
    msg.rpm_max = 15141;
    msg.depth_max = 0.7569150083077261;

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
    msg.setTimeStamp(0.6897015324742046);
    msg.setSource(21326U);
    msg.setSourceEntity(64U);
    msg.setDestination(30236U);
    msg.setDestinationEntity(154U);
    msg.timestamp_last_service = 0.28103880387877533;
    msg.time_next_service = 0.15517198389011633;
    msg.time_motor_next_service = 0.7605629738704086;
    msg.time_idle_ground = 0.6080987045355407;
    msg.time_idle_air = 0.5039608203743445;
    msg.time_idle_water = 0.6307803489811855;
    msg.time_idle_underwater = 0.8416059192297086;
    msg.time_idle_unknown = 0.03654682673218412;
    msg.time_motor_ground = 0.40832726303544453;
    msg.time_motor_air = 0.1775958518818873;
    msg.time_motor_water = 0.19272059262786034;
    msg.time_motor_underwater = 0.5843445874906283;
    msg.time_motor_unknown = 0.7798823910466612;
    msg.rpm_min = 5670;
    msg.rpm_max = 22580;
    msg.depth_max = 0.652874202370135;

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

  return test.getReturnValue();
}
