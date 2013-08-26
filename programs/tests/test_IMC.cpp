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
    msg.setTimeStamp(0.742822794233);
    msg.setSource(23087U);
    msg.setSourceEntity(16U);
    msg.setDestination(58882U);
    msg.setDestinationEntity(68U);
    msg.state = 211U;
    msg.flags = 107U;
    msg.description.assign("YXXFCHZBAAX");

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
    msg.setTimeStamp(0.503583988111);
    msg.setSource(38798U);
    msg.setSourceEntity(30U);
    msg.setDestination(61961U);
    msg.setDestinationEntity(188U);
    msg.state = 6U;
    msg.flags = 15U;
    msg.description.assign("VYZMEKNJDFZVEEEHQHVVXMTBRATJJBGSMEGKRNIQYHUYXPDZSYPBRJJIWBAFFVSKMPOFZSYRZLMXIJDKUCKROPYYXMGEAUALSCBBKQTFCDZJXWXBUYCOWZPMPBZQONWUCWIG");

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
    msg.setTimeStamp(0.192020263156);
    msg.setSource(48859U);
    msg.setSourceEntity(147U);
    msg.setDestination(39879U);
    msg.setDestinationEntity(58U);
    msg.state = 148U;
    msg.flags = 24U;
    msg.description.assign("UORBTBUMGRKFHTPMXBSQFFXKKLWSMCZDTEVHUNUPRVIYHXQUEDWAINQHKDGMHJWZKGJCA");

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
    msg.setTimeStamp(0.579076136551);
    msg.setSource(3462U);
    msg.setSourceEntity(163U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.982625155246);
    msg.setSource(5903U);
    msg.setSourceEntity(41U);
    msg.setDestination(61325U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.548161127915);
    msg.setSource(58206U);
    msg.setSourceEntity(211U);
    msg.setDestination(44314U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.147248650242);
    msg.setSource(23743U);
    msg.setSourceEntity(153U);
    msg.setDestination(35043U);
    msg.setDestinationEntity(73U);
    msg.id = 177U;
    msg.label.assign("BSMGLHAIESYNQGODOJBHPUQRDWYPCDFKEIFHTOAVLKMHFKPHGGZJZUPNLZUUPZZOWCMXFHHIPTQWNIJOCCYJOQESPGERHNRNBOOJWVVYAEDEBMSXTRCVUXWKDUPMJQQITLXXIKWXUEADDLSWFKVRKSNXPQWCBIFOXTDBEADPTAQFURRYYBXHBRBLSUMZZVGINXFJGGMZFQCACVNKTT");
    msg.component.assign("QNJSFEOQAZQYHZPJTWBZDNQMTEYBLQVAFTITOIKLRLJQOHCYAEMV");
    msg.act_time = 61394U;
    msg.deact_time = 42864U;

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
    msg.setTimeStamp(0.278232595117);
    msg.setSource(24610U);
    msg.setSourceEntity(120U);
    msg.setDestination(38257U);
    msg.setDestinationEntity(179U);
    msg.id = 29U;
    msg.label.assign("RUPTEMQFTLQDJWBZJAAKOHUJVAIZBZFHNNRZIQYTUIQDQEOIEJKLZQGUDSSFYXNFRKCQCHMPNJHNTFRLRYRKZSTVGLGFBNMWYHUXUKZWIRNKYOBOLJDAPMELLLOTPCXTJIKVCXXSLSTWKHSYWCYERXMSDJFUU");
    msg.component.assign("WLNVXRYYPJEAUSMHIQRCSVFIPLMLAONJMTZZGDHGYWZFJKGHIUQKLEMSJSDIPGZUXEHLWFSBDMMNQEYDOILVMLXAGGBPLLVUPVVRCNVOVFGNWFBGINTGQOSEOUO");
    msg.act_time = 57841U;
    msg.deact_time = 8750U;

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
    msg.setTimeStamp(0.223646568201);
    msg.setSource(44751U);
    msg.setSourceEntity(5U);
    msg.setDestination(24584U);
    msg.setDestinationEntity(190U);
    msg.id = 155U;
    msg.label.assign("HBIEYTHONQWJRUYLGHQEWWTEFJKBONHFATPOBKLTJDUZMMXXUSAKSCTIHVARUHMVHAZICTVVPAXGZXWVAERQOIWFOXRHQCDUMDDKEBRXONEZIYDRDEFBPAWMWNICYFMU");
    msg.component.assign("NSLPCFBTIIGXQEIYZDPGTFZBYLPMFKVLFHOIKFBICOVWNSFYRFMWOGNVRPVXQLJEIVWLLVSJOJRZEUXGFARCCBVDFDZCULAJKSCSIBKDBOZLMMKWTNQYXUZAQWCUGUUZQKQITY");
    msg.act_time = 35354U;
    msg.deact_time = 60757U;

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
    msg.setTimeStamp(0.65853839817);
    msg.setSource(27447U);
    msg.setSourceEntity(57U);
    msg.setDestination(30754U);
    msg.setDestinationEntity(82U);
    msg.id = 91U;

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
    msg.setTimeStamp(0.160628761319);
    msg.setSource(31547U);
    msg.setSourceEntity(210U);
    msg.setDestination(28449U);
    msg.setDestinationEntity(5U);
    msg.id = 195U;

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
    msg.setTimeStamp(0.660510417817);
    msg.setSource(51969U);
    msg.setSourceEntity(93U);
    msg.setDestination(50818U);
    msg.setDestinationEntity(205U);
    msg.id = 182U;

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
    msg.setTimeStamp(0.331253743068);
    msg.setSource(7138U);
    msg.setSourceEntity(178U);
    msg.setDestination(9700U);
    msg.setDestinationEntity(169U);
    msg.op = 106U;
    msg.list.assign("DALDMJWSUSPKGRRCBXZXNMFPCGDEILIHHW");

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
    msg.setTimeStamp(0.919134626639);
    msg.setSource(18585U);
    msg.setSourceEntity(174U);
    msg.setDestination(2689U);
    msg.setDestinationEntity(127U);
    msg.op = 81U;
    msg.list.assign("HQKIYUHOMXAKMVZILEUIRSCPVFDUCMDBYXTWWDYVYJAOQJDYHGJQYGLTVFSPDLUPZVAONHTTGLIXQRSFBYICKJBCZVQCBCESZGXUBEPINCP");

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
    msg.setTimeStamp(0.83191980135);
    msg.setSource(49388U);
    msg.setSourceEntity(174U);
    msg.setDestination(42113U);
    msg.setDestinationEntity(168U);
    msg.op = 42U;
    msg.list.assign("XGMDKBETNJIKRAQBOEIXFCCSHEQNPADBZIQJTRZTQOLYVFKDMWSEIJAWECMHBJFILADHDYOAOHYNJGKROOSCYNXJYVSQCSYVIOMVZFWVHLGAFNXDHVRBTQUMHUZUHYOPWQWMMUPXPUGSNQATVSDXCGDTVIREBRXKCWXCDKZTFATHUFDZBLGLKBSFBAZGMW");

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
    msg.setTimeStamp(0.919537375547);
    msg.setSource(2435U);
    msg.setSourceEntity(211U);
    msg.setDestination(16926U);
    msg.setDestinationEntity(92U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.855126971316);
    msg.setSource(61038U);
    msg.setSourceEntity(130U);
    msg.setDestination(4856U);
    msg.setDestinationEntity(182U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.707719084544);
    msg.setSource(51295U);
    msg.setSourceEntity(132U);
    msg.setDestination(50464U);
    msg.setDestinationEntity(89U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.65100419013);
    msg.setSource(24489U);
    msg.setSourceEntity(90U);
    msg.setDestination(39163U);
    msg.setDestinationEntity(164U);
    msg.value = 34U;

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
    msg.setTimeStamp(0.81488233198);
    msg.setSource(62987U);
    msg.setSourceEntity(176U);
    msg.setDestination(14811U);
    msg.setDestinationEntity(238U);
    msg.value = 132U;

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
    msg.setTimeStamp(0.587200233103);
    msg.setSource(8U);
    msg.setSourceEntity(97U);
    msg.setDestination(13588U);
    msg.setDestinationEntity(25U);
    msg.value = 103U;

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
    msg.setTimeStamp(0.0979720118992);
    msg.setSource(2128U);
    msg.setSourceEntity(33U);
    msg.setDestination(19232U);
    msg.setDestinationEntity(124U);
    msg.consumer.assign("HNWVCGSQIHXDBAXBVKBJPNMYYZCGFQGSCHOMIYDZNTLNTNNUGTJBBVRMUZCRTGTIFOXVABDFIPQGWWRHZXMYOEQCFLOKDDSMKLUCFKYHINWRQOGOXWJUVAUWEZPFZKOIVQMGQHPUKZKRPWBAQJXDTUBUVJBOHLXCPUERSNEHFLXMFOEZPJCXEQHSBTMWTJIDKNLOLRWTAJIJLXZRCYEYDGVLPHEGAUYIVENSFIRSVMZAFD");
    msg.message_id = 63834U;

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
    msg.setTimeStamp(0.741204419147);
    msg.setSource(46236U);
    msg.setSourceEntity(183U);
    msg.setDestination(17294U);
    msg.setDestinationEntity(63U);
    msg.consumer.assign("BMBBDNXDVCCCWGDMBWDPCYTDZHCEQTIXRENRYOSMZSZWXJOLKFWVQXRZSEVHQLYJBRALFYIKSBOUOVLPFGFVEUTVVISMPYXZGBLQMUSXGPSUJINZZFCCEVNPOQAJAFTNTKHHEKZLBXODUSIRQNHYJEGQPGFHEVAHHUSWAWNOJTRLINAXKGAOTWDUUKPAMKIRFQCWDTSYJJ");
    msg.message_id = 8037U;

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
    msg.setTimeStamp(0.197207564062);
    msg.setSource(28373U);
    msg.setSourceEntity(237U);
    msg.setDestination(16824U);
    msg.setDestinationEntity(228U);
    msg.consumer.assign("IQGSUQMZLYEVPZFDKQUEXBOPKPDAJBWWOOXSYZLYPMMJVTWYCFDADJTHWFQKRIIBHAFDYHDJQSYDEZGCNGEEDDJ");
    msg.message_id = 46442U;

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
    msg.setTimeStamp(0.688403219127);
    msg.setSource(45868U);
    msg.setSourceEntity(156U);
    msg.setDestination(48310U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.566470676509);
    msg.setSource(16903U);
    msg.setSourceEntity(233U);
    msg.setDestination(440U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.887294233229);
    msg.setSource(9842U);
    msg.setSourceEntity(146U);
    msg.setDestination(11022U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.350833906726);
    msg.setSource(24767U);
    msg.setSourceEntity(73U);
    msg.setDestination(16809U);
    msg.setDestinationEntity(48U);
    msg.section.assign("XROPFLMDOHAAHFYMFIHAFJAEXKWHJRRWOQCWJUENGKYMRNDEMNFSOTYIKHRYCMGUJUEAWIWJSKMUBGLSGRJFIOGDVWBMWVRNCGAKUMBYMNLCXDZCZJVTEOLWAIJZKEXPXTBRTUHQQFBXNDISCYZWULBCESBFDEQP");
    msg.param.assign("ODHGAJESTMIDAQGLGHWSKLCSCSRHNJXSNKOBTANWCVGZQULQHTHVHMXEJRTPOPYRZLCFIPJMDQYTOBXPYDEVCUBJKZZSGFBWIJMXOAEOFLZMVXNAUDOGEIVYPIGOQSMWCUFGHKATWCNCEFETPRFTBQRNUIXBRRUWZSVFTZNMP");
    msg.value.assign("WZZSEHNZUDDOBGXVCDPMJWILPTCRFGNAIHLTSZRSLMPZXAJEPUQGFIGYAYUUYLKGQFOGHLDMKRHBDNJPWOVDPJCYRTWBAMRTBOFUODERGEBVEJQDSFXNXALZKTZPYFYTJAFMQOIVQFXNHLKKQZCXJVWZCKHPBBVYIANYWKSEZWOGXMPBCUHKAFEFUBKSONOSWNECMMQOUDIJLCK");

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
    msg.setTimeStamp(0.190543892386);
    msg.setSource(21561U);
    msg.setSourceEntity(247U);
    msg.setDestination(7965U);
    msg.setDestinationEntity(62U);
    msg.section.assign("OFJSQORUEPFWTYSCTYQFRADAOZJBHMHTOXDPQDZINOBYXDMCYWNSIFKCXZYVEYSCFKBRDGQSJJDJSPZEXLG");
    msg.param.assign("DYYXEQYPLBUJMREUDYBTTSEAANIDGYGTGMIOCJSUXBRKXZFBWOOXPRWYPGZNVONPIMREJUIKTCQZVITFCWTXJOXQZKHRCUYLUELJXRNBKLYVLBQNVYDAVKJ");
    msg.value.assign("PEWFZXXLFXQUYZDXMZKKQQSNAUEDGCLJNISJGEGZNTPLHQGAHNRHLTMDICNCLJUQNONHMATQACTWKOKJBMFLTIAXMTVLLUBCMDSDGZIQPVPPVSSRGRVKFWFKYYPMBKVFIDRHSKVORBVCYBRCDAYNKJXUXOTSRBJSDTGOMBDXEWWRSQVGOKLYZCICJWUWAAH");

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
    msg.setTimeStamp(0.120886997829);
    msg.setSource(41738U);
    msg.setSourceEntity(42U);
    msg.setDestination(20010U);
    msg.setDestinationEntity(116U);
    msg.section.assign("WIJWRPJOCBUBIFKXZYGOVWMFUXNFPYAAKAGEQRSDSZQTPCWEDNRNYSOUNTTUFZYWNADSFHDBGBZTNRCCILPCAUCJEGNBRIKHAHHDKXJWCFRYJBOIIOTWBMSVBCFMHGGVYXHZOOTHEEYLDOCMQUJZKPQSREPPSODJOZXDFQMFPMKQRTLZVYL");
    msg.param.assign("TKGRTMZHRNOQSRMUDLUBLZITKPYAZVJGENOLAMUWFOYNIKVZIPJIMTDTTGUFGHGPZGARGJQVOYBROBLREIHBCXNCNNSTJWKCASVVCKIQCWNOLSYIEEJAPAULNQSFQYGEPYUAKRBFJAZSWSVHYWFCQXSQUBDDXXPSZVIUGDJBXDCELWMO");
    msg.value.assign("JKBTSHJEFBYPYVIHSNIQXWIXUCXEMEQPMARFIDQCYJJCDNLAPZRUSAFZBSVLWCRWUXTWVNPDFSIBEELRZOGOLIHGYZDZYGMNNVYOSWMJCPUHGQJLJMHIVYMQABFKHPQZFEOWOGIXBRRHUTAPBXAACRTOLCDTFSIJQBDBLUERUWDSFRXNWKMSCVKZUW");

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
    msg.setTimeStamp(0.334542493432);
    msg.setSource(25541U);
    msg.setSourceEntity(109U);
    msg.setDestination(58663U);
    msg.setDestinationEntity(210U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.417526134855);
    msg.setSource(30025U);
    msg.setSourceEntity(250U);
    msg.setDestination(39611U);
    msg.setDestinationEntity(27U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.0210894022702);
    msg.setSource(33825U);
    msg.setSourceEntity(115U);
    msg.setDestination(33944U);
    msg.setDestinationEntity(187U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.339019845217);
    msg.setSource(20560U);
    msg.setSourceEntity(158U);
    msg.setDestination(45023U);
    msg.setDestinationEntity(88U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.607852628133);
    msg.setSource(29558U);
    msg.setSourceEntity(4U);
    msg.setDestination(57572U);
    msg.setDestinationEntity(243U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.0489743931439);
    msg.setSource(51455U);
    msg.setSourceEntity(50U);
    msg.setDestination(39455U);
    msg.setDestinationEntity(142U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.991461452581);
    msg.setSource(37426U);
    msg.setSourceEntity(138U);
    msg.setDestination(22338U);
    msg.setDestinationEntity(188U);
    msg.total_steps = 81U;
    msg.step_number = 48U;
    msg.step.assign("YMYWKCXCEBQBGQEUATFXQEIUCEZDQCYWANONFMTBVEXUQKDRAIVHIMNIQBRXINPSFSZTOATFUOYVDAFDRXIHNEDGHWTSRHGPXKOROLXWCVUPROULGTIFCJBJOLUMGVYMQ");
    msg.flags = 204U;

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
    msg.setTimeStamp(0.963476956368);
    msg.setSource(57495U);
    msg.setSourceEntity(220U);
    msg.setDestination(25740U);
    msg.setDestinationEntity(4U);
    msg.total_steps = 7U;
    msg.step_number = 48U;
    msg.step.assign("BBCRZHUTPXXODTAHPWZQLYNMBEXQFJQSQDEHFILHTZNVBBPLALINYWGGECWMWQAWMFXJHPEYIOTACEOLYRIZNBIPDXAYUJYHTLGSZZRYBKFFQUWDJSHTRKGIAOMHGWGMEHKVZOJQIMYKRTAQUVFMNAKSMLVSNTCIEWURRUWAODXEZFGVJMLZOFUNJMRSPRLECDVJXGDUDTNKBSWXKBUQDXVPZVKNOU");
    msg.flags = 20U;

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
    msg.setTimeStamp(0.25282969891);
    msg.setSource(25168U);
    msg.setSourceEntity(21U);
    msg.setDestination(5178U);
    msg.setDestinationEntity(114U);
    msg.total_steps = 3U;
    msg.step_number = 143U;
    msg.step.assign("NVSGMUAXBMMKRQTGPKUXZLVAWCAHPRKHDBLALSTEUVVESTEWXCJJWYBOEJAQZHHIMXLFJVDESKKIKWGNZGKXRNHHXNNECOSZABKWQKXTTYVDENEFDUJIDIZDNRUPOUIUNVLCFUXASPQEHOQOSCDRRMHKACMFYATPLTWPYREGCBOFUWIXVIBZRAYYDGPGQOWJCVZJTMMJNYLZYUDBSQZWCGVIBGWH");
    msg.flags = 205U;

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
    msg.setTimeStamp(0.601458566689);
    msg.setSource(40716U);
    msg.setSourceEntity(13U);
    msg.setDestination(5032U);
    msg.setDestinationEntity(205U);
    msg.state = 182U;
    msg.error.assign("ORGQTTXUVRGHCIPQDHIWRXOBIDQJDOXZMLSCOSVLKJYVUUYDBOHZIYGADVFIITKNYKXSKSLUCTVMWPXZZWHTLBERAPLZMOBSGLEVPSJQBEBQGFFRWLARFBKKAVPXEIMSUSRWPOYKMCQTHIZFANJPGCDOYHURMGDZVBXHNWTZCJQWUSDKLUKMQEDEOUQJVJITYGRIPEWEYEBPMMJXPZNALOABJNJAKNS");

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
    msg.setTimeStamp(0.261107654144);
    msg.setSource(38022U);
    msg.setSourceEntity(77U);
    msg.setDestination(45704U);
    msg.setDestinationEntity(240U);
    msg.state = 31U;
    msg.error.assign("AGDAJMGECQGZZPSUWEUOYTEJIVNFRPQVKTWJIYXZINQPTTOEENSARTNONMGPOIRQCRSPJILXHHBFJHGKNZKBAWSWRDQEAKVAXLCLYYHSXMOTVVUCULLQXMWKLTBWCEQZHDYQKAJNMKVURHHKMGSXNBGOHFVLPJMKUXWZT");

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
    msg.setTimeStamp(0.416210890767);
    msg.setSource(28673U);
    msg.setSourceEntity(246U);
    msg.setDestination(57695U);
    msg.setDestinationEntity(219U);
    msg.state = 113U;
    msg.error.assign("PJIFAUEXBTCPMPXCSOIBNNYUZXQKGVQLVZXQBKUCLJHASMSMPWFFNEHFAYIJNBQTJKFORBWRAPRJMJIHVZDHQEYQWGUACHKOHVVSHCOIENEFWFGVERXMXYWKRKRHUUMBJACLQLTOWXBRGLGMNIILANKZATSNYKYRSDXNJTAOVZDLEIVWQCTQTFCOWEYCWYODTFRCZKKLMSY");

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
    msg.setTimeStamp(0.754795572762);
    msg.setSource(65280U);
    msg.setSourceEntity(240U);
    msg.setDestination(62406U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.1170509147);
    msg.setSource(6160U);
    msg.setSourceEntity(137U);
    msg.setDestination(36953U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.241032937612);
    msg.setSource(49668U);
    msg.setSourceEntity(152U);
    msg.setDestination(25622U);
    msg.setDestinationEntity(49U);

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.45862999592);
    msg.setSource(34583U);
    msg.setSourceEntity(243U);
    msg.setDestination(53220U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.42380835493;
    msg.lon = 0.863615307311;
    msg.height = 0.865810163884;
    msg.x = 0.00599773531231;
    msg.y = 0.699658563979;
    msg.z = 0.181390837622;
    msg.phi = 0.224194962592;
    msg.theta = 0.988046658436;
    msg.psi = 0.833454609311;
    msg.u = 0.500850583629;
    msg.v = 0.729272955988;
    msg.w = 0.956749352915;
    msg.p = 0.914555795504;
    msg.q = 0.0207148669075;
    msg.r = 0.73246522921;
    msg.svx = 0.703900510957;
    msg.svy = 0.710120311385;
    msg.svz = 0.274368007416;

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
    msg.setTimeStamp(0.0135219514292);
    msg.setSource(16348U);
    msg.setSourceEntity(125U);
    msg.setDestination(11753U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.569825103378;
    msg.lon = 0.222751380902;
    msg.height = 0.376347400888;
    msg.x = 0.317539094895;
    msg.y = 0.737814924615;
    msg.z = 0.121662016192;
    msg.phi = 0.23425391111;
    msg.theta = 0.893360252655;
    msg.psi = 0.450453117712;
    msg.u = 0.473774758826;
    msg.v = 0.156167844287;
    msg.w = 0.45099915476;
    msg.p = 0.724342987409;
    msg.q = 0.359901890693;
    msg.r = 0.218903695818;
    msg.svx = 0.81898592686;
    msg.svy = 0.782372410321;
    msg.svz = 0.165990154473;

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
    msg.setTimeStamp(0.6198713058);
    msg.setSource(3985U);
    msg.setSourceEntity(202U);
    msg.setDestination(51660U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.790650211867;
    msg.lon = 0.114333922403;
    msg.height = 0.931382914439;
    msg.x = 0.943779905511;
    msg.y = 0.0771415012208;
    msg.z = 0.42837935789;
    msg.phi = 0.0753089352095;
    msg.theta = 0.471015801541;
    msg.psi = 0.842005206863;
    msg.u = 0.431107043476;
    msg.v = 0.540982209184;
    msg.w = 0.669967985805;
    msg.p = 0.403138181337;
    msg.q = 0.809740564172;
    msg.r = 0.246356558363;
    msg.svx = 0.392417271101;
    msg.svy = 0.981671600371;
    msg.svz = 0.435499770817;

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
    msg.setTimeStamp(0.496945195784);
    msg.setSource(46432U);
    msg.setSourceEntity(60U);
    msg.setDestination(470U);
    msg.setDestinationEntity(205U);
    msg.op = 21U;
    msg.entities.assign("CIKRLDZEDRLGZDCIOVKQROHJQFNTJWVHOODRWMPUVOTCJTXZGQGIOSJPAXIUWMMWLTNIDXYCGQFKBXAXCKZVEWSAKVUYTQDBAFLPFABUJCSNIGBGSEMEYNOXHVQPVTAVINAFYKULWTRRTXSKULKVZPTUHOGONHQFKISMEBWSFSZLEIAXHLCELMNLACEYUCEUKMSBBWXZPWMTRZUJYJVGQSNOZRHPBRHWRDPDHBB");

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
    msg.setTimeStamp(0.607906328934);
    msg.setSource(51814U);
    msg.setSourceEntity(113U);
    msg.setDestination(57289U);
    msg.setDestinationEntity(175U);
    msg.op = 160U;
    msg.entities.assign("ZQGPHZDFEMZBGYTUCSTCGHVQFLXVDSXIHPESMAJVTTWWNBPUZLQV");

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
    msg.setTimeStamp(0.73565570444);
    msg.setSource(40312U);
    msg.setSourceEntity(208U);
    msg.setDestination(64046U);
    msg.setDestinationEntity(19U);
    msg.op = 229U;
    msg.entities.assign("ZOAUYPHCSARWNTEKGYIPNFYKVGTSVUMPUQGWOEBBSJLJTSJWDNVXPQAAPTMDXYMQXSGLQPVSJJGORKKNEHKFDNXKAKOTBUOLMSWVLLCLMKBXVFGABIAUSRYAXTDKUEUEWVGJIBVFRIMGHWORNZFAYK");

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
    msg.setTimeStamp(0.424503499276);
    msg.setSource(19784U);
    msg.setSourceEntity(211U);
    msg.setDestination(32990U);
    msg.setDestinationEntity(240U);
    msg.type = 13U;
    msg.speed = 22428U;
    const char tmp_msg_0[] = {-45, 22, 106, 17, -48, -99, 20, -106, 8, 31, 34, -37, -40, -56, -112};
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
    msg.setTimeStamp(0.117583187765);
    msg.setSource(673U);
    msg.setSourceEntity(247U);
    msg.setDestination(60279U);
    msg.setDestinationEntity(191U);
    msg.type = 152U;
    msg.speed = 17481U;
    const char tmp_msg_0[] = {-70, 124, -10, 80, -39, -19, -32, -51, 53, 51, 35, -31, 26, 60, 112, -59, -51, 9, 77, 112, 44, -123, -106, 13, -33, -91, -71, 24, -39, 104, 17, 47, 101, 69, 108, 35, 56, -8, -63, 92, -13, -38, -83, -57, 114, -2, 123, 37, -94, 32, -63, 121, -15, -39, -66, -85, -93, -25, 62, -59, 85, -113, 17, -63, 15, -94, -45, 56, -94, 72, -127, 61, -92, 90, -88, 109, -105, 13, -14, -56, -18, -50, -127, 77, -127, -52, 24, 85, -123, 82, -9, -65, 62, -110, -52, -5, -39, -11, -8, -46, 125, 5, -14, 33, -84, -59, 28, 86, -30, 1, -5, -29, 83, 103, -41, -2, -112, -3, 29, -103, -72, 94, -49, -115, 45, 31, -127, -124, -59, -73, 92, -36, 82, -66, 42, 102, -125, 27, 119, 22, -101, -44, 84, -19, 31, -103, 4, 73, 96, 19, -23, 93, -93, -29, -11, 32, 113, 18, 40, -23, 82, 101, 44, -77, -120, -76, -97, -128, 70, -1, -50, -105, 119, 76, -128, 33, 45, -90, -33, -23, 60, -43, -73, -33, -106, 99, -60, 5, -73, -15, 28, -104, 87, 15, -38, 113, 69, -96, -98, -107, -80, 48, 42, -42, -89, -67, 103, 111, -77, 109, -1, 12, 96, -93, 23, 121, -44, 44, 100, -47, -70, -2, -122, 80, -60, 52, 68, -92, -8, 5, 12, 86, 14, 116, -76, 72, 80, 42, 97, -4};
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
    msg.setTimeStamp(0.718159826768);
    msg.setSource(46333U);
    msg.setSourceEntity(178U);
    msg.setDestination(25942U);
    msg.setDestinationEntity(219U);
    msg.type = 3U;
    msg.speed = 20581U;
    const char tmp_msg_0[] = {71, 72, -121, 7, 69, -23, -58, -111, -38, 29, -120, -96, 40, 3, -49, 66, 96, 98, 13, 4, -116, -38, -42, 47, 53, -17, 19, 88, -44, 60, -57, 25, 121, 84, 44, -32, 34, -65, 11, -127, -122, 61, -51, 49, 7, 102, 10, -81, -81, 88, -58, 67, -117, -121, -124, -127, 35, -96, -75, -56, 30, 114, -126, 112, 76, -119, 53, 15, 38, -47, -27, 78, 111, -22, -113, -64, 111, -104, 77, 23, -57, -5};
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
    msg.setTimeStamp(0.901083137907);
    msg.setSource(7464U);
    msg.setSourceEntity(47U);
    msg.setDestination(30224U);
    msg.setDestinationEntity(112U);
    msg.available = 1319012140U;
    msg.value = 223U;

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
    msg.setTimeStamp(0.0576890370713);
    msg.setSource(23665U);
    msg.setSourceEntity(160U);
    msg.setDestination(36079U);
    msg.setDestinationEntity(50U);
    msg.available = 1540836664U;
    msg.value = 66U;

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
    msg.setTimeStamp(0.799011275834);
    msg.setSource(22416U);
    msg.setSourceEntity(96U);
    msg.setDestination(43108U);
    msg.setDestinationEntity(181U);
    msg.available = 3846005377U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.987269998949);
    msg.setSource(27011U);
    msg.setSourceEntity(231U);
    msg.setDestination(24947U);
    msg.setDestinationEntity(82U);
    msg.op = 244U;
    msg.snapshot.assign("CSHOTZYBFDQZFIHFBMGEILAZVEFJRBULJONONHQNSUTPJXWMZDETJLWTZYGOYBHGDAKCADUKAZCWNQUCIWWKIBZHGRXPAYVCKGXENHQHMTPIFL");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 26U;
    tmp_msg_0.htime = 0.815113198148;
    tmp_msg_0.context.assign("FVKFSHTKRMPKUOCDTGAYLVBXNLMMUMEIZJHFMIUOTKGNULIEMGALUVEMYDLUEAZYAFUGKBLZNNOROCQEJPISRHJVXYJSYYLJCPYNEDLJSVPJXQHKKSBQNBUIGRXAQFALTMTSUATCIJCSTQFHYHVERODZVTDWHCODWJXIXNLEGNONGABWCPBSAXZD");
    tmp_msg_0.text.assign("MXWHTTKEKCCQOUCKFIOMGIUZCFBREAHXCNNJPULGOIEJDFPBMSRKGXDPTYAXRXMGLVRRNRSOGVOCNIZYXBHMFEGAHLYQHFOWZGMUVISAHEIYWRMOSPEUVYQZBNYZKFHQHDXJCWXPYSXQJLBZGLJBDTVYDHWKKXWSFNDBJEJGAFNFSRAPV");
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
    msg.setTimeStamp(0.071065959373);
    msg.setSource(20118U);
    msg.setSourceEntity(15U);
    msg.setDestination(39501U);
    msg.setDestinationEntity(163U);
    msg.op = 172U;
    msg.snapshot.assign("IMCKQWAHZQSVQOODCEVGWPAEPZSTVLRSXRYUYYGSWFLFKIBZHCNZKHBGTXPCUZRAAXLNFJFUNSOTWWVFYMMMIODOJJFEIUHNOKMYADGXSXQHCEPXXLWIQFXHWDVSFKULYRQCNAYUKCBLFMYUZMWGXTKLDJTTCRJATAQUEWBWPHPAJZODOLLBVBEXGNVZPIAPDTRKGHPDSRGSY");
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.319644822559);
    msg.setSource(40489U);
    msg.setSourceEntity(223U);
    msg.setDestination(40123U);
    msg.setDestinationEntity(40U);
    msg.op = 44U;
    msg.snapshot.assign("GDDUXIBHWAAJIIQSJCABXFSAKHHRCPDCAWOKCMZOHVHEMXVAOVKTXCTMZZLFUUNWUXBGTAUZRQDINYKJIRLGWCYCXUTVSVEQIZTWGUBTSROOSMKNDNFWFMOELYTHJHDZDUVYZLZQKNEHVXKZUJNFIAXEVNGOCQIYWPRERLPUBAMYDLFTPQLQFNO");
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.97383850776);
    msg.setSource(39927U);
    msg.setSourceEntity(240U);
    msg.setDestination(42299U);
    msg.setDestinationEntity(73U);
    msg.op = 173U;
    msg.name.assign("OHSERQGTQXFDBXNPGBUUGLVTXWVTJBRCLBWGSYMSVILGKNXATFZEMWTSUDEUVEWDIWMRCJCQDODWLMTHGHDAAOOWUJPTYRIVJNPLZPGBHKRRKYULZSMQSFNLPEKVHUBXLIYQIAOIVAMVPVBVSFYXRONIXZKOMHOIHQRMGHARCXSIDYQWPZFUKCBAXNOEKKLDNCQREMTFZCNCNGKCDDKIZFYTJEPCPYHAUBXHZUNAMFAFQZJQEWJGYSEFOYJP");

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
    msg.setTimeStamp(0.300053613906);
    msg.setSource(701U);
    msg.setSourceEntity(23U);
    msg.setDestination(51381U);
    msg.setDestinationEntity(234U);
    msg.op = 122U;
    msg.name.assign("ZWSDKPJRGMROGGFPTMLEDURFUUWRFVGZJUXELXYQYKEDZIWITKOXWBWXDNYNHHCMWJWBAEQBIQHIMOSDXIQOXRBHAOECINAAXUCTJOTHOMQVWYOJCYFVBVRFUFQIZAVBRJCTFFUSEFLSTLUQZPPAAKRPODTMCNBMNHTXIVPNLSGNTKGKAI");

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
    msg.setTimeStamp(0.844073598022);
    msg.setSource(41248U);
    msg.setSourceEntity(142U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(31U);
    msg.op = 52U;
    msg.name.assign("FAOPXATQPFIRBXLEYQCGHOEEHCSIXUMXGKEDQVZ");

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
    msg.setTimeStamp(0.949257292366);
    msg.setSource(1566U);
    msg.setSourceEntity(86U);
    msg.setDestination(24280U);
    msg.setDestinationEntity(189U);
    msg.type = 75U;
    msg.htime = 0.708082998877;
    msg.context.assign("NSJEEJXBLLTAGCRNXJCOTDCOSWTBSBSDSCSYFXYWHRYMFKFJVQQQIGEBUSWWOZNHMPDVQJIAZNYBMNJMQDWNKMQXLZPEQTYEAVQGRQFKXTAWCPAHSUHDITILOFTBMUZGTUVZHITACMKESCDOUYNBBYYKMNRVLJFXMBGPWVGAHHZLROPUFSHHIEVKKKWWUOOCEWRLDXDURE");
    msg.text.assign("ADJKTFRMHUIFQPENDKSLNEKWCTHOGVMZCCWTFHCRVXOXKGQBXIJXVYSFZHLAGQJI");

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
    msg.setTimeStamp(0.417539229689);
    msg.setSource(16883U);
    msg.setSourceEntity(229U);
    msg.setDestination(28308U);
    msg.setDestinationEntity(207U);
    msg.type = 171U;
    msg.htime = 0.407813992576;
    msg.context.assign("FGWYNIMPGOJVAKLEPSPJYGIZOPLBUOOVDQFQVQQAZCWNZ");
    msg.text.assign("SXHNZTTSFAEFZBFSUELJGBROWULCVFCJXGDSQERWYFDMDPDIMJPDITRVXWORYLHTHYENYSGNAOZIXBRIJBZIXVLGZJTBMAHYBDECKWRF");

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
    msg.setTimeStamp(0.495682446117);
    msg.setSource(48323U);
    msg.setSourceEntity(138U);
    msg.setDestination(54277U);
    msg.setDestinationEntity(193U);
    msg.type = 29U;
    msg.htime = 0.813678249076;
    msg.context.assign("HICBZLUKVYTKNPNVVTCSCLUEFOWALWJCLEOM");
    msg.text.assign("HGQOTPMHJETOPXWXPKZSOCBQZZTDNVYELYYZQWBTLNQMRWIUAQSLFGYROCCNFA");

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
    msg.setTimeStamp(0.84415431731);
    msg.setSource(2928U);
    msg.setSourceEntity(36U);
    msg.setDestination(57041U);
    msg.setDestinationEntity(225U);
    msg.command = 12U;
    msg.htime = 0.675096275219;

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
    msg.setTimeStamp(0.530729858364);
    msg.setSource(41129U);
    msg.setSourceEntity(189U);
    msg.setDestination(39876U);
    msg.setDestinationEntity(227U);
    msg.command = 70U;
    msg.htime = 0.709729699455;

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
    msg.setTimeStamp(0.21377599235);
    msg.setSource(48676U);
    msg.setSourceEntity(115U);
    msg.setDestination(13968U);
    msg.setDestinationEntity(198U);
    msg.command = 228U;
    msg.htime = 0.506821726529;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 173U;
    tmp_msg_0.htime = 0.193700580792;
    tmp_msg_0.context.assign("HCYHGOMXLPEXQCUHWOWVBBKAOTFDNGQLYTAEEXBPNXVJRMXDSGGPBTYHKYUQEVJKJARZZGKTCUDNMMSFEOTETHSNFOMCVBKIZBECULRZEWDSUIOSLDVLPPAFJYRDULVQPJZXUAAXTQAQKRS");
    tmp_msg_0.text.assign("YWUWISIAGYEGCXUBKHMTDOQHVAEVERZIQYDPMNLDCDXBWIGHLLWSBPL");
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
    msg.setTimeStamp(0.00544816690268);
    msg.setSource(15200U);
    msg.setSourceEntity(115U);
    msg.setDestination(28793U);
    msg.setDestinationEntity(210U);
    msg.op = 196U;
    msg.file.assign("FQUQYDQTXDBMJFTMZNWBRQMDMECLCICFBTXQOTZRZSLKGCSNLIJEIEGYNXKNXXQCBWGDXROZNNKEIORVBFXPETSCAXBPK");

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
    msg.setTimeStamp(0.423819581419);
    msg.setSource(24838U);
    msg.setSourceEntity(32U);
    msg.setDestination(34618U);
    msg.setDestinationEntity(11U);
    msg.op = 98U;
    msg.file.assign("LPSVRZBZYLXVILZOLFNJTDASIJHJEOGZYDNSEUXPXXBFDUPSEYWKCVKNXILFIWWFLFDZMZFVLLMNBSYVQJBBVHEJGUPRHOBRUYJTMAQQNPTRYTQDRNTCFYHNGVQJEYNQTFPDMMUWUSIHXQAMOIFKCVOPUMRCSTXWKRQCZIDEPHAQDGTIAWSXNCAPSGAIQVBPXGWEOHOZNBTGBEKLOMXKRMKHHEACKSADDLVZOCWRYTUMUOWJGAGGF");

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
    msg.setTimeStamp(0.712312468215);
    msg.setSource(38927U);
    msg.setSourceEntity(143U);
    msg.setDestination(17582U);
    msg.setDestinationEntity(224U);
    msg.op = 67U;
    msg.file.assign("ICFBSCLUMDUVNGSKBYCRPZGQFOIZJDUABVWTTKTUNWJEQNXDBX");

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
    msg.setTimeStamp(0.921602666926);
    msg.setSource(5098U);
    msg.setSourceEntity(76U);
    msg.setDestination(44697U);
    msg.setDestinationEntity(99U);
    msg.op = 218U;
    msg.clock = 0.258310016937;
    msg.tz = -50;

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
    msg.setTimeStamp(0.3850181496);
    msg.setSource(62786U);
    msg.setSourceEntity(66U);
    msg.setDestination(62391U);
    msg.setDestinationEntity(69U);
    msg.op = 72U;
    msg.clock = 0.362147198638;
    msg.tz = 121;

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
    msg.setTimeStamp(0.812015340798);
    msg.setSource(17128U);
    msg.setSourceEntity(21U);
    msg.setDestination(54495U);
    msg.setDestinationEntity(76U);
    msg.op = 98U;
    msg.clock = 0.870496115048;
    msg.tz = 69;

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
    msg.setTimeStamp(0.893791893293);
    msg.setSource(22407U);
    msg.setSourceEntity(208U);
    msg.setDestination(20038U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.276557389443);
    msg.setSource(46049U);
    msg.setSourceEntity(249U);
    msg.setDestination(3162U);
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
    msg.setTimeStamp(0.922337338173);
    msg.setSource(62507U);
    msg.setSourceEntity(206U);
    msg.setDestination(7154U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.355662306346);
    msg.setSource(35430U);
    msg.setSourceEntity(210U);
    msg.setDestination(29779U);
    msg.setDestinationEntity(51U);
    msg.sys_name.assign("JEZECLFXHJTVFTEKHPKKYUVWQEPSUASQTWZRUEWAVBXSYKCDCTUHBQLCBQFNXRTAVMGTGQPJH");
    msg.sys_type = 177U;
    msg.owner = 5704U;
    msg.lat = 0.145639129681;
    msg.lon = 0.142497451395;
    msg.height = 0.820721985171;
    msg.services.assign("RKDGRRBNMXVVDEAWWOPZELENESWHAYQMXRQLOLBTWWCUKXZBPPLLKCRXOGZZIFPZJYNELGYRFNIQCUSLPAJHPBDXFHYLXIIPMKYEFMRYFOOMSNSAWGUSJRMVTJVISNERLBSUHBZKUDNGJVXWCQICYVXDJAKNQNBVTFHOIEARHJFOTQTUICDABEW");

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
    msg.setTimeStamp(0.0583804090969);
    msg.setSource(6163U);
    msg.setSourceEntity(145U);
    msg.setDestination(8357U);
    msg.setDestinationEntity(179U);
    msg.sys_name.assign("RLTUTXAYYFCDXRNWWYMVQYAKQKATIUCBWVCOTJQKZPNWPSPIMARHDLZXXSBDXATGKHYBZAAQNOBPFLPKJUNBVOBUQLVALUZEYJSSEQVTFWFZHIDROJUFWYMRJKVFWHNESBJOVXPPLZTSQXCENIBGILKDRPHIUMJHUUHDYDER");
    msg.sys_type = 27U;
    msg.owner = 20590U;
    msg.lat = 0.638557849766;
    msg.lon = 0.21463661512;
    msg.height = 0.119905592702;
    msg.services.assign("JIKCYSXQBFTXNHRANEKTWCGBCJOHLTTMSVPWFADNDLR");

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
    msg.setTimeStamp(0.243690203238);
    msg.setSource(13992U);
    msg.setSourceEntity(103U);
    msg.setDestination(43004U);
    msg.setDestinationEntity(188U);
    msg.sys_name.assign("SKNEIDWJVCPUGVOOOPWLXLZREPOXOJYOGHHMZWGUBDWPAJVIBIHEHNCEBHENSYVQPFUYTJCQYMDKRGCXFWKAACXBOMSKQJBRFFUZLKIDTVTJOHSQPJGFEGJXGUJVUZTYKQXNAKNIDDRJXVFNEZHKAELSWQGQASPSLRLDTOLIXVWNTZSAWNGFIFLYTNZAMVMPGCBZMUBFBDTIYHXQYBZWOEACMUZALILVQ");
    msg.sys_type = 133U;
    msg.owner = 19814U;
    msg.lat = 0.953273349565;
    msg.lon = 0.384853516563;
    msg.height = 0.611001021615;
    msg.services.assign("OVBWMUJKPJKLSWYDNOQLBIFHOIDLXRJCMUDUTBWZJBUIPSOACSBMMHNIRRFZOZKSGRVXJOWGUHWLEIIGFKYKPGBANTALSPLMAXURZGGHYYQORJAXQUFWDHXNLOPSTYDMZFPTCKEVEAZHHCQLNADRGNKUBSPPKTYFIJRXGTTUAAEMHHVKAEDEXVTMJCTGBWWXYDCZYSCIVBQ");

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
    msg.setTimeStamp(0.54700378431);
    msg.setSource(36726U);
    msg.setSourceEntity(161U);
    msg.setDestination(49672U);
    msg.setDestinationEntity(224U);
    msg.service.assign("ZITFTYTAONBJJEUAGRDYVMNCKRSYRVASUDXLJFDOEOJQLCOUTW");
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
    msg.setTimeStamp(0.887561020277);
    msg.setSource(32234U);
    msg.setSourceEntity(106U);
    msg.setDestination(39090U);
    msg.setDestinationEntity(112U);
    msg.service.assign("XKFQWZKBKBSMFNHCPZANHHQCTNPZEUMCAWIRQAUBMEWFJXZYMODCVCWTLJMIAHLNPJQIOXUQVELMARHIXCPMXVRLRNAMX");
    msg.service_type = 196U;

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
    msg.setTimeStamp(0.863117336607);
    msg.setSource(59404U);
    msg.setSourceEntity(109U);
    msg.setDestination(65471U);
    msg.setDestinationEntity(208U);
    msg.service.assign("ORQPBOYEOEPNWPVJUBXWMBJZJRHZOTNTYAFMQMGNPYLHXNLMQPDSXZCJZDZPNYLLXSSZDCSDJKUJWQHTNKGAKBPNKVGAZXJIOYFWYBMUVLYBJ");
    msg.service_type = 88U;

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
    msg.setTimeStamp(0.874727833583);
    msg.setSource(62863U);
    msg.setSourceEntity(230U);
    msg.setDestination(62563U);
    msg.setDestinationEntity(218U);
    msg.value = 0.244638073003;

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
    msg.setTimeStamp(0.593373860132);
    msg.setSource(17468U);
    msg.setSourceEntity(112U);
    msg.setDestination(29897U);
    msg.setDestinationEntity(234U);
    msg.value = 0.105783248;

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
    msg.setTimeStamp(0.623476722216);
    msg.setSource(63687U);
    msg.setSourceEntity(98U);
    msg.setDestination(48815U);
    msg.setDestinationEntity(137U);
    msg.value = 0.306168594002;

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
    msg.setTimeStamp(0.755346157293);
    msg.setSource(36521U);
    msg.setSourceEntity(188U);
    msg.setDestination(60978U);
    msg.setDestinationEntity(224U);
    msg.value = 0.915548259321;

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
    msg.setTimeStamp(0.827621880288);
    msg.setSource(26262U);
    msg.setSourceEntity(0U);
    msg.setDestination(41593U);
    msg.setDestinationEntity(179U);
    msg.value = 0.658486805554;

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
    msg.setTimeStamp(0.409665554481);
    msg.setSource(48793U);
    msg.setSourceEntity(217U);
    msg.setDestination(31672U);
    msg.setDestinationEntity(133U);
    msg.value = 0.402351338824;

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
    msg.setTimeStamp(0.0695365671608);
    msg.setSource(19100U);
    msg.setSourceEntity(191U);
    msg.setDestination(26850U);
    msg.setDestinationEntity(204U);
    msg.value = 0.440887673747;

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
    msg.setTimeStamp(0.607683520755);
    msg.setSource(11865U);
    msg.setSourceEntity(180U);
    msg.setDestination(4934U);
    msg.setDestinationEntity(140U);
    msg.value = 0.545492554881;

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
    msg.setTimeStamp(0.637812965042);
    msg.setSource(28U);
    msg.setSourceEntity(123U);
    msg.setDestination(48870U);
    msg.setDestinationEntity(211U);
    msg.value = 0.329872764911;

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
    msg.setTimeStamp(0.577197704176);
    msg.setSource(14283U);
    msg.setSourceEntity(165U);
    msg.setDestination(45849U);
    msg.setDestinationEntity(198U);
    msg.number.assign("RGOWLVWXWZJ");
    msg.timeout = 12214U;
    msg.contents.assign("NDBYEMLDYHXUIWMYAJMCMLLICNFAUFHFKFGWVCMVFHEBUPOGPJYXRQOBSGDINKEKQTVNSZWVCISXNDCBLPZVHPKZAOFKQTXESEUREONRQKRUMFTNDZTISWZTGBANMQTFDWKUCIUYOPSVAIJVWWCYLHYDVSQFVRNCAKPGJXISPGRMRHLCIOKUBPZWGQZSLWXEJOALEJHDDNPSVTLJJZAOBRQBOAHYBIYGP");

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
    msg.setTimeStamp(0.698386918259);
    msg.setSource(41648U);
    msg.setSourceEntity(1U);
    msg.setDestination(7524U);
    msg.setDestinationEntity(181U);
    msg.number.assign("GSWDMBMFFHWXALAJTQVCSOAKGJOQZYXSOTNPCNQJALHPEKCCPFFMJBXVIQYOUTFFGZVPWHZCKFEQEZDSBJEMHDZDLFHUOWBCWRIEOCNGJRUYDRBELIHYJVW");
    msg.timeout = 20324U;
    msg.contents.assign("HJSDYDPLXUOMUZVQEHBOWAJZSCGOAFITWGYXZVDPDLOTH");

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
    msg.setTimeStamp(0.253402862974);
    msg.setSource(1216U);
    msg.setSourceEntity(3U);
    msg.setDestination(29396U);
    msg.setDestinationEntity(78U);
    msg.number.assign("FAINYBMFUVHDGSEDTBQZDHJQJEUIKSJJOGLDXHOPNBASPJIBWERRRYGHRCDIUUXURCVYAWNOVKCDHWNMMCSTHYFKJKKNNPWSXUQIXVZXSZZPGGLLYBBKTZNQEPIGYQMNGRDLRH");
    msg.timeout = 23480U;
    msg.contents.assign("CHHUKWEEZPEXGFMALPVNDVPIYJJDGZDEZUFYXBRVIPADHUKWMGSIACLSIOUCKVKBBXUZPTNCHUHMPXEWEYNLGSZXQZJENOALTOT");

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
    msg.setTimeStamp(0.365819228057);
    msg.setSource(12171U);
    msg.setSourceEntity(214U);
    msg.setDestination(40026U);
    msg.setDestinationEntity(27U);
    msg.seq = 1026806490U;
    msg.destination.assign("VADAVOHUTXSNHWNIDRZQDNVWLCKMWXXRUKIKPKESLTZQUFGAOEAALONBWCVFRJHOHONTVNSQMDBPVZXGEKKTUTAYULSQRICMGGEUNMCIWFVPPGIXZMTEFJBAQBIUGGIIJYHQJMRLKGSOXOGVJLEBNSAWWPABYPMSMJDWSBWFJTMYHUPILYAYVXKXXHHJOCYCCRDZZSXZHLCSPQTPVFLOFWFNKQRNYJBUKZBFTTEGMER");
    msg.timeout = 55640U;
    const char tmp_msg_0[] = {-63, -5, -6, 38, 46, 118, -83, -73, 36, 100, -27, -95, -52, 24, 109, 82, -6, 95, 65, -34, 19, -39, -29, 35, -120, 32, -17, -77, 109, 119, -128, 27, 35, 107, -108, -115, 53, -72};
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
    msg.setTimeStamp(0.719603995883);
    msg.setSource(57922U);
    msg.setSourceEntity(194U);
    msg.setDestination(43898U);
    msg.setDestinationEntity(86U);
    msg.seq = 3872714843U;
    msg.destination.assign("GEULGTIQHTWTBZJUPRHKNPMRMGQVMLXSMPIHAAGSZMTZYFWJOAWRXOIVGEBCOHUNCPMRUAIWNBYDZPOACNQSODSYNSKIHFYDTUDOFWECCN");
    msg.timeout = 55148U;
    const char tmp_msg_0[] = {44, 91, -104, -12, 69, 17, -41, -88, 85, -119, -12, 114, 61, -20, 53, -46, 88};
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
    msg.setTimeStamp(0.445101328797);
    msg.setSource(53491U);
    msg.setSourceEntity(103U);
    msg.setDestination(51571U);
    msg.setDestinationEntity(228U);
    msg.seq = 3152541529U;
    msg.destination.assign("NZXQAONHGHVHFUJYEDWQNGRSPXDQHFXIOWCOLGCY");
    msg.timeout = 18845U;
    const char tmp_msg_0[] = {53, -66, 22, -120, 93, -65, -116, -43, -77, 27, 16, -27, -112, 109, -23, -5, -21, -47, 110, 13, 7, -21, 80, 108, -39, -120, 2, 42, 98, 9, -21, 7, 29, -76, 123, -113, 117, -53, 48, -124, -88, 110, 34, 59, -125, -39, -55, 86, -89, -101, 58, 112, 57, -120, 117, 76, -27, -23, -84, -15, -14, -94, -81, 53, 113, 6, 67, -26, -19, -74, 110};
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
    msg.setTimeStamp(0.187661348413);
    msg.setSource(18893U);
    msg.setSourceEntity(184U);
    msg.setDestination(23687U);
    msg.setDestinationEntity(93U);
    msg.source.assign("OPEYUWIEGSBPRWMHBHJCGKAU");
    const char tmp_msg_0[] = {24, -113, -125, 47, 34, 44, 101, -23, 57, 33, -46, 2, 102, -28, 110, 112, 65, 61, 31, 14, 5, -120, -98, -8, 98, -59, -7, 56, -128, 77, -40, -88, 59, -92, -5, 34, 124, -33, 126, 7, -25, 4, 32, -38, -117, -61, -19, -38, -77, -20, -17, -108, 40, 112, 90, -52, 43, 91, 52, -117, 51, -74, 120, 29, -126, -19, 84, 54, -75, 42, -13, -13, 46, 59, -18, -79};
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
    msg.setTimeStamp(0.206390849887);
    msg.setSource(64476U);
    msg.setSourceEntity(238U);
    msg.setDestination(65452U);
    msg.setDestinationEntity(54U);
    msg.source.assign("PTGWHIVKLOZVYXEIFCEAXZQLRCICGAWSWZAFCLDAIUBTUMTRCESQHXWCAATORMKIJYWHXRBHGVLHSJWDFDPRVWBJDETNRGFYUQUQVSEQOONGZXSJGTMXNSZZPOCRUKMFYSRTHONYIKMPBUONFZBYJLOHYJXQNBXQLYZUNKCALQSETBPAVGFGMWLQSVIJDRJKKUAEISIBBZMTXGEXUNLM");
    const char tmp_msg_0[] = {-100, 25, 7, -66, -123, -84, 6, -34, -106, -13, -58, -62, 34, -78, 80, -99, -128, -55, -81, 47, 85, -66, -32, -124, -54, 102, -89, -72, 51, -42, -42, -26, -18, 84, -62, 10, -117, 75, 117, 50, 45, -59, -118, -41, 85, 19, -89, 61, 124, -77, 118, -38, -66, -45, 67, 94, 18, 12, -32, 117, 104, 10, -12, -74, -37, 119, -108, 72, -121, 83, -80, 39, -60, 4, -6, -41, -24, -91, -81, -65, 73, 55, 70, -5, 1, -78, -118, 86, 22, -13, 19, 49, 31, -120, 53, 111, 1, 97, -29, 73, -110, -55, -33, -107, -64, -75, 11, 61, -73, -101, 84, 98, -56, 123, -83, -35, -44, -25, -63, -20, 53, -51, -103, 51, -50, -124, 49, 4, 111, 86, -128, -27, -20, -76, 44, -64, -30, -121, -44, 113, 77, 124, -75, -120, -38, 93, -63, 47, 123, 115, 107, 21, -50, -127, 85, -26, 103, -61, -90, 82, 118, -87, 24, -116, -102, 40, -126, 113, -47, 109, -23, 10, 55, -78, 4, -77, 119, 80, -21, 70, -114, 110, -52, 72, -74, 45, -63, 115, 25, -93, 88, 38, 14, 85, -26, -47, -80, -29, 55, -77, -80, 107, -40, 45, -125, 113, 39, 59, 19, 45, -55, -9, -104, -42, -104};
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
    msg.setTimeStamp(0.169504053811);
    msg.setSource(53475U);
    msg.setSourceEntity(70U);
    msg.setDestination(25495U);
    msg.setDestinationEntity(220U);
    msg.source.assign("KVPAVKAPLSWJJNFTCKUDZNZSBHZOFGBJCBVMJHYOINH");
    const char tmp_msg_0[] = {-27, 35, -108, -61, 48, -95, -18, -32, 108, 45, -14, -34, -113, 60, -79, 66, -66, -8, -85, 25, -84, 89, 113, 87, 122, 64, -73, 70, -61, 49, 1, 118, -96, 121, 42, 99, 91, 90, -24, 55, 59, 22, 18, 43, -20, 96, 49, 98, 71, -81, 44, 99, 113, 97, -33, 47, 123, -128, -76, 112, 52, 48, 7, 49, 73, 13, 70, 47, -83, -100, 16, -102, -99, 64, 75, 54, 71, -89, 68, 94, 91, -100, 100, -116, -22, -83, -15, 93, -68, 97, 59, 55, -93, 118, 91, 44, 79, -21, 62, 118, 17, -126, 45, 18, 117, -93, -107, 24, -1, 110, 119, -17, 95, -109, 71, -3, -75, -95, -28, 61, 36, 52, -5, 98, -52, -44};
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
    msg.setTimeStamp(0.341134403472);
    msg.setSource(1566U);
    msg.setSourceEntity(32U);
    msg.setDestination(40587U);
    msg.setDestinationEntity(19U);
    msg.seq = 50091732U;
    msg.state = 111U;
    msg.error.assign("WZXIKCCTQVVXIXDQBUPOQIOFZPYTYCOYCGZSHEQXHSBTTPUYNRXHDUIRNDVJERGIWOWVLAAUYAAYGSLHBBFUGFEGMPIIYLWIORFPKOWMMQJKNOWSTMKLLSWRQREVIMSWSVADJZUXCQDGDZFJUMCQWEGOHKQDKUJBPMZMLASZOJAJNJXRXJTCGU");

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
    msg.setTimeStamp(0.941152750506);
    msg.setSource(53585U);
    msg.setSourceEntity(0U);
    msg.setDestination(34242U);
    msg.setDestinationEntity(90U);
    msg.seq = 3188636029U;
    msg.state = 214U;
    msg.error.assign("AXMURVJZOAZEODEQKSMCQDOHYMDYCKTIINBKVOVRNEPLZGURBW");

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
    msg.setTimeStamp(0.313204741018);
    msg.setSource(14605U);
    msg.setSourceEntity(66U);
    msg.setDestination(9958U);
    msg.setDestinationEntity(152U);
    msg.seq = 3276997087U;
    msg.state = 175U;
    msg.error.assign("RCXXQNDYXRDHIMKUHLQVZSNLSCDBTQNJYOSONNPYWNTYRJMJEGLFPVYCXGWVZWZGRKPNADQOPASGCVPFGNRHOESVHMKAUWKHOTU");

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
    msg.setTimeStamp(0.554036159598);
    msg.setSource(9359U);
    msg.setSourceEntity(72U);
    msg.setDestination(32118U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("KZGBCNINJQKWNLAIQYSBCKDWUDQCKUNVWNOUVRZLXHIREGUZHNXOSPAPGZEKPBNGQCOLDGODEUFVUWTROYLBOEXABIGYVH");
    msg.text.assign("TCMWRIGIZQCARWIWXDSNMQQRSUQYFBAGXSGBJPAFBPUXKFTRHVBXROYBSDUNACZETMLDGZMYJJI");

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
    msg.setTimeStamp(0.524481036769);
    msg.setSource(30614U);
    msg.setSourceEntity(124U);
    msg.setDestination(56122U);
    msg.setDestinationEntity(139U);
    msg.origin.assign("WZKLCWWVZOWLNTBGCWKSOTJITXFDLMRDAP");
    msg.text.assign("KEAIHOEXZNKBBETGMMNLVDEJZJSZCEIXZSYWUFWVQODDYKHKWKXMUDDMIGLLBRUXBRAZHIQCDAJAFTMOFFZBTLYUKEWJISIWHPXXONKMNAGYPETRMRBZNFVJTVPZYGTPSOQIOHHVCIGDLBKUQYJRHWRSYCFVVXCALQCPJYBKPVWQEKLSRNXHVORPAYSNSDUIFUBZ");

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
    msg.setTimeStamp(0.578724469422);
    msg.setSource(1293U);
    msg.setSourceEntity(248U);
    msg.setDestination(17861U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("HGARCPMCDFJWKLQBXSOJ");
    msg.text.assign("HBYSZGRJRQWKSDVTECARMFSYGGWPFAQDLHVINSXJFNTRSLBIMPLZORUEWIILMCZQTH");

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
    msg.setTimeStamp(0.922963823215);
    msg.setSource(5835U);
    msg.setSourceEntity(241U);
    msg.setDestination(35239U);
    msg.setDestinationEntity(12U);
    msg.origin.assign("SCILHHLCQEBGXSPAHAKVRBHFVGPGOUYIOJATAOLCWFKQXWYAGRTABTUDMZMRFETSZYCRJFNNZUVMNVBWQJRMBKEVHJKRSHDOJAUJKFLPKXTUPEEMVFWPSYTAAQCEOJPXSMHTABQCONWIMPSDJJRZNBEQQHQ");
    msg.htime = 0.955023331146;
    msg.lat = 0.205353981069;
    msg.lon = 0.358749100788;
    const char tmp_msg_0[] = {-76, -4, 89, 17, -44, 11, -14, 40, 71, -111, 10, -93, 112, 110, -111, 73, 52, 72, -13, -55, -36, 104, 104, 9, 10, 9, 19, -14, -37, 114, 105, -11, -16, -19, 108, -127, 21, 119, 6, -83, 0, -111, -94, 30, -105, -89, -126, 47, -66, 120};
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
    msg.setTimeStamp(0.636186603398);
    msg.setSource(13866U);
    msg.setSourceEntity(227U);
    msg.setDestination(53287U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("GWKEHREYKLDSEXGDPFKYZRKNEJOEFBEVWBDDSJHEYLWOGYQJGXVUKAFFVSDAPLIVNITTUGPMOHWRXKMYNGAAONZJLGTQLJACQHDBICGJMHWTZSSWBVTDNGITQ");
    msg.htime = 0.252109690384;
    msg.lat = 0.913638887696;
    msg.lon = 0.32283696243;
    const char tmp_msg_0[] = {17, -114, 110, -45, 26, 83, -63, -53, -90, 27, 13, -120, 5, 115, 94, 12, 33, 20, -97, -121, -61, 30, -49, -24, 57, 88, 74, -37, 31, 124, -31, -111, -13, 32, -5, 90, -21, -30, 17, -74, 117, 67, 101, 74, 103, 101, 57, -7, 65, -78, 38, -119, 6, -109, 25, 112, -109, -9, -14, 113, 67, 20, 55, -56, -2, 72, 73, 56, 102, 108, -21, -122, -35, 12, 74, -79, 36, 116, 19, -8, 113, 61, 101, -61, -106, -50, -9, -103, -39, 21, 108, 109, 31, 114, -51, 4, 28, 64, -22, 39, -11, -96, 85, -58, -110, 48, 85, -14, -5, -1, -42, -47, -27, -30, -70, 13, 77, 95, 59, -97, 22, -21, 66, -78, -79, 111, -23, -71, -23, 17, -64, 72, 34, 35, -27, 68, -83, -58, 90, 78, 116, 21, 75, 88, 54, -88, 126, -42, -92, -103, 24, 89, -94, -24, 39, -34, -76, 59, -22, 32, -31, -59, 62, 109, -43, 7, -25, 36, -89, -39, 83, 4, 72, -39, 113, -111, 110, 58, -60};
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
    msg.setTimeStamp(0.621444940374);
    msg.setSource(48050U);
    msg.setSourceEntity(163U);
    msg.setDestination(2492U);
    msg.setDestinationEntity(1U);
    msg.origin.assign("VSDMPFJSPNJCWEWEQOTMUHIBDNJQAFDYAXAUFHQZTOSZTBKGJYSUMJVHDQUMAEXAGIULKUNKGGNLPZMKHFKLLFPYYFGYFQMPTPDMHFDWXSCIODFHKLLINPCYBQLWHRUREJIOBGYZWEWKYRJVPXRKTVIMBXOLXCFLCSZBNSOYBAURKXJQCCCHVZREZQ");
    msg.htime = 0.159694641552;
    msg.lat = 0.797357771798;
    msg.lon = 0.364589745361;
    const char tmp_msg_0[] = {32, -42, -26, -2, 1, -78, -87, -24, -116, 121, -94, -7, -33, 13, 31, -14, -14, -70, 90, -76, 45, -1, -114, -92, 18, -6, 51, 3, -71, 71, 13, -53, -116, 84, -48, -66, -28, -109, -59, -101, 102, -8, -54, -110, 39, 101, -39, 62, -63, -61, -5, -84, 85, -114, 6, 84, 92, 99, 51, -63, 11, 58, 98, -20, -71, 86, 121, 8, 67, -61, -123, 120, 91, 78, 29, 76, 3, -20, 3, -84, -48, 99, 34, 119, -76, -112, -56, -109, 49, -44, 107, -82, -127, 71, 93, 68, 81, -123, 125, 38, -24, 34, -70, -24, 12, -27, -55, -54, 103, -103, 78, -24, 78, 78, 82, 85, -55, -42, -77, -66, -112, -62, 107, -25, -51, -99, -39, 87, 2, 12, 15, 23, -78, -5, -38, 116, 73, 121, -17, 104, -17, -13, -11, 101, 3, -41, 71, 117, 77, 87, -27, 78, 64, -30, -21, 119, 88, -101, 112, 67, 81, -102, -54, -74, -68, -83, 45, -37};
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
    msg.setTimeStamp(0.92289530045);
    msg.setSource(21596U);
    msg.setSourceEntity(11U);
    msg.setDestination(15682U);
    msg.setDestinationEntity(91U);
    msg.req_id = 33916U;
    msg.ttl = 6221U;
    msg.destination.assign("IEYXMAQTGCMCYEFQVBSOKMVJRJJGXTLWXVLJENHXKWZKROUFYPCGBITCOSXAHIGDPCMHPFQJUVTBGRRZCUNKWUFKWUCMHRJRGNLVEHDSDOZRGEZTFNJBHWEULZQVVDOYNNMSKSNTLMVDP");
    const char tmp_msg_0[] = {121, 7, 109, 104, -71, -37, -27, -95, 17, -84, -54, -20, 97, -44, -44, 35, 106, 62, 106, -61, -46, 113, 18, -60, 42, 30, -61, -114, 105, -70, -123, 93, 31, -118, 38, -91, -66, -92, -101, 69, 110, -112, -118, 7, 24, -58, -37, 11, 57, 80, 102, -30, 37, -44, -112, 34, 44, -63, -94, -84, 10, 94, -22, 94, -21, -108, -2, -51, 14, -80, -98, -53, 125, -104, -95, -80, 109, 108, 23, 99, -33, 62, 88, 89, 59, 17, -31, -12, 22, 58, 106, 108, -2, 115, 37, 28, 22, -33, 83, -54, 104, 62, -67, -7, -124, -38, 38, 81, 59, 106, 1, 42, 102, 30, 12, 93, -127, 87, 99, -80, -77, 95, -111, 47, 92, -109, 47, -97, 12, -50, 106, 33, -23, 108, 113, 104, -85, 35, -19, -6, -31, 7, 16, 107};
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
    msg.setTimeStamp(0.29034186154);
    msg.setSource(3404U);
    msg.setSourceEntity(37U);
    msg.setDestination(40629U);
    msg.setDestinationEntity(228U);
    msg.req_id = 40152U;
    msg.ttl = 34899U;
    msg.destination.assign("QKOEDZWPIADUUPVGYOQUCZJHNRPFHOXBOHANTSXPALGHVZYWRAJAHWCMJRRHSQFLIYSTTEKWKZXLPYHEEFKTLADXEQQODTLRTBGMUNCTIJYBCCZWQVVYZSODRPPNALAUCDMBWJUU");
    const char tmp_msg_0[] = {-109, -6, 58, -104, 36, 95, -49, -50, -93, 94, 40, 36, 53, 3, -27, 3, -2, 109, -64, 0, 77, 52, -30, -14, 40, 82, 13, -87, -26, 92, 96, 73, -104, 66, -45, 29, -23, -18, 2, -73, 60, 101, -82, 99, 54, 106, 33, 112, -111, -115, 9, 3, -40, 121, 45, -53, -15, 67, 105, -77, -105, 67, -46, -66, -118, 15, -119, -56, 35, -17, 105, -19, 55, 11, -118, -55, 12, -27, -89, 52, -84};
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
    msg.setTimeStamp(0.233197254133);
    msg.setSource(30990U);
    msg.setSourceEntity(36U);
    msg.setDestination(8370U);
    msg.setDestinationEntity(254U);
    msg.req_id = 58379U;
    msg.ttl = 63820U;
    msg.destination.assign("SKZHNYHFABEHNRPBIIWMJEURVCHYROOW");
    const char tmp_msg_0[] = {-32, -54, -86, 126, -84, 74, -109, 38, -91, -110, -89, -46, 96, 88, -40, 105, -29, -50, -127, 124, -104, 79, -105, -77, -71, 47, -123, 91, 40, -93, 4, -27, 45, 76, -61, -105, 90, -114, 1, 96, -114, 85, -101, 99, -107, 76, -24, 50, 97, -71, -103, -104, -113, 73, -52, -125, -30, -98, -15, -105, -47, -77, -10, 25, 37, -40, 3, -40, 65, -110, -38, 60, 109, 94, -93, 48, -45, -94, -11, 2, -122, 88, -36, 73, -75, 126, -98, -41, 65, -73, 44, -52, -97, 125, -128, -123, -52, -75, -44, 93, -124, 20, -8, 41, 71, 39, 97, 66, 40, 84, -33, 102, -77, -77, -60, -124, 8, 126, -5, 50, 39, 94, -50, 4, -103, 27, -24, 64, -81, -34, 18, -57};
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
    msg.setTimeStamp(0.964175899349);
    msg.setSource(43104U);
    msg.setSourceEntity(41U);
    msg.setDestination(2759U);
    msg.setDestinationEntity(58U);
    msg.req_id = 14249U;
    msg.status = 43U;
    msg.text.assign("XZYSCDTJMWWYMVMSDFQSOPKSZRPCFNIYSXXXNYPGDDJCIHHLOAMAABYIVTFGTLBVRWPUDRTMMRIAAABKRUOWQZZHLWAKGUMFEDRLKW");

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
    msg.setTimeStamp(0.712830881527);
    msg.setSource(27066U);
    msg.setSourceEntity(36U);
    msg.setDestination(8636U);
    msg.setDestinationEntity(32U);
    msg.req_id = 45973U;
    msg.status = 125U;
    msg.text.assign("HJJWXWKOOMHRGDECGCOHUNXMSOHUCPDVFGMIQLZEOLVASMNAGXXDULEBLHJORAPTJKZNYYBAZXTBQXMZDDSFYMIUPWFKEVILAIBQGVBTPJGFRTHRPDERJLPJGOMAEMOIXSKRFIXLKSRGUQCBQITHUPZYSNJZYVOURSNLDFYEGKQNEGCAJSWABKANLBTNCMQXWUFNEOBIDQKHSLZCWNYDHQRFHUPVITCTPV");

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
    msg.setTimeStamp(0.653467716525);
    msg.setSource(50293U);
    msg.setSourceEntity(171U);
    msg.setDestination(34972U);
    msg.setDestinationEntity(115U);
    msg.req_id = 42061U;
    msg.status = 147U;
    msg.text.assign("LRHUEJAEULZSFRDPMVAQTLKUGEVGYPPUASAQRNCXSVHOQJQZJPPFRPPRDHHWZRMIWQVNLSYVAKHIXUIBSC");

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
    msg.setTimeStamp(0.744169898672);
    msg.setSource(22331U);
    msg.setSourceEntity(224U);
    msg.setDestination(4702U);
    msg.setDestinationEntity(210U);
    msg.id = 233U;
    msg.range = 0.832280006356;

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
    msg.setTimeStamp(0.309773378219);
    msg.setSource(9754U);
    msg.setSourceEntity(192U);
    msg.setDestination(24184U);
    msg.setDestinationEntity(73U);
    msg.id = 105U;
    msg.range = 0.121154164974;

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
    msg.setTimeStamp(0.674567717734);
    msg.setSource(59178U);
    msg.setSourceEntity(62U);
    msg.setDestination(35401U);
    msg.setDestinationEntity(136U);
    msg.id = 62U;
    msg.range = 0.523136961757;

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
    msg.setTimeStamp(0.116716073097);
    msg.setSource(21079U);
    msg.setSourceEntity(112U);
    msg.setDestination(3082U);
    msg.setDestinationEntity(224U);
    msg.tx = 155U;
    msg.channel = 119U;
    msg.timer = 49711U;

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
    msg.setTimeStamp(0.991743753868);
    msg.setSource(22191U);
    msg.setSourceEntity(21U);
    msg.setDestination(42811U);
    msg.setDestinationEntity(235U);
    msg.tx = 105U;
    msg.channel = 220U;
    msg.timer = 31649U;

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
    msg.setTimeStamp(0.0983373029656);
    msg.setSource(1534U);
    msg.setSourceEntity(20U);
    msg.setDestination(23889U);
    msg.setDestinationEntity(127U);
    msg.tx = 123U;
    msg.channel = 58U;
    msg.timer = 56039U;

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
    msg.setTimeStamp(0.0209272555052);
    msg.setSource(53113U);
    msg.setSourceEntity(91U);
    msg.setDestination(63808U);
    msg.setDestinationEntity(18U);
    msg.beacon.assign("EZWFRVMOMNIATAAGLBKTDWJTCHQJXONKMASCR");
    msg.lat = 0.818848985742;
    msg.lon = 0.369023265575;
    msg.depth = 0.928428392754;
    msg.query_channel = 30U;
    msg.reply_channel = 232U;
    msg.transponder_delay = 62U;

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
    msg.setTimeStamp(0.898448345604);
    msg.setSource(22114U);
    msg.setSourceEntity(146U);
    msg.setDestination(3566U);
    msg.setDestinationEntity(56U);
    msg.beacon.assign("JBCKXGGYWUTDSBVKVZGGGVVJMKBMDOYLAQCQAZMLWLTMUSAXTNQERH");
    msg.lat = 0.698827799386;
    msg.lon = 0.0811077553242;
    msg.depth = 0.193873761782;
    msg.query_channel = 158U;
    msg.reply_channel = 142U;
    msg.transponder_delay = 15U;

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
    msg.setTimeStamp(0.756979611422);
    msg.setSource(6190U);
    msg.setSourceEntity(230U);
    msg.setDestination(40488U);
    msg.setDestinationEntity(55U);
    msg.beacon.assign("ZHGNLFUQYKUBDWHOWKLYKXAWSZJWXVCXDNBSYLQTDEJVLVLXBBELCRDMHVUDFSAWKAHUIMCNIPPMDMRBQWASCJFYIAGUKMXXSCGM");
    msg.lat = 0.836746938033;
    msg.lon = 0.978193730065;
    msg.depth = 0.802703112984;
    msg.query_channel = 136U;
    msg.reply_channel = 193U;
    msg.transponder_delay = 163U;

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
    msg.setTimeStamp(0.545391878228);
    msg.setSource(31507U);
    msg.setSourceEntity(140U);
    msg.setDestination(57428U);
    msg.setDestinationEntity(100U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.250494779292);
    msg.setSource(63815U);
    msg.setSourceEntity(243U);
    msg.setDestination(62904U);
    msg.setDestinationEntity(23U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.148864946219);
    msg.setSource(6969U);
    msg.setSourceEntity(74U);
    msg.setDestination(39149U);
    msg.setDestinationEntity(245U);
    msg.op = 108U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EOGLATXFYKUMTRXQTWPPBVFACIAQDOZNILMUZWQWLHNAPXOAGXMKHHHIRKDSYNFBWZVLCYWWDDTKJDNMOQMDESZWFLNEYBRLNYXYOCGIJUCVVPNFRQBGXKSZEOUOJSLVXJTCYEBKUZODXDBFLRNACKYZVZZIIZWMKVGSJKAUVJHMADIPMBUCUHARUPHOCHJQFCEQLTIXSIJPWWVTGSPGUDRQSEHVHBJMQXRMRQTTIETCRE");
    tmp_msg_0.lat = 0.62788587905;
    tmp_msg_0.lon = 0.269996707065;
    tmp_msg_0.depth = 0.29875544145;
    tmp_msg_0.query_channel = 88U;
    tmp_msg_0.reply_channel = 109U;
    tmp_msg_0.transponder_delay = 73U;
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
    msg.setTimeStamp(0.74223785978);
    msg.setSource(59962U);
    msg.setSourceEntity(58U);
    msg.setDestination(3042U);
    msg.setDestinationEntity(240U);
    msg.address = 118U;

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
    msg.setTimeStamp(0.674839359431);
    msg.setSource(19846U);
    msg.setSourceEntity(229U);
    msg.setDestination(28707U);
    msg.setDestinationEntity(223U);
    msg.address = 56U;

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
    msg.setTimeStamp(0.155305518761);
    msg.setSource(30383U);
    msg.setSourceEntity(247U);
    msg.setDestination(53314U);
    msg.setDestinationEntity(140U);
    msg.address = 223U;

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
    msg.setTimeStamp(0.162862817802);
    msg.setSource(34474U);
    msg.setSourceEntity(237U);
    msg.setDestination(64190U);
    msg.setDestinationEntity(33U);
    msg.address = 16U;
    msg.status = 165U;
    msg.range = 0.327774006934;

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
    msg.setTimeStamp(0.0648582149407);
    msg.setSource(40495U);
    msg.setSourceEntity(59U);
    msg.setDestination(63288U);
    msg.setDestinationEntity(220U);
    msg.address = 66U;
    msg.status = 64U;
    msg.range = 0.248391383942;

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
    msg.setTimeStamp(0.69508460461);
    msg.setSource(213U);
    msg.setSourceEntity(36U);
    msg.setDestination(9061U);
    msg.setDestinationEntity(36U);
    msg.address = 89U;
    msg.status = 222U;
    msg.range = 0.733881215849;

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
    msg.setTimeStamp(0.111834468568);
    msg.setSource(14710U);
    msg.setSourceEntity(34U);
    msg.setDestination(64117U);
    msg.setDestinationEntity(221U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TSVBBIGCEMTKMBKRNCWLKFTZGEGRPMSOUAHXQAGAGHYRMLQAIQWJWEUMYXRWYSWJVZRPIPPZPTTJKDLRJQUNVFZYQOKHOAQCUMBGDSQWVHHFCODFBYHXOPVBZVYMIAOFHEJWYXFQTDDJ");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 57261U;
    tmp_tmp_msg_0_0.lat = 0.755241927845;
    tmp_tmp_msg_0_0.lon = 0.286556252286;
    tmp_tmp_msg_0_0.z = 0.715455271363;
    tmp_tmp_msg_0_0.z_units = 165U;
    tmp_tmp_msg_0_0.pitch = 0.582903792604;
    tmp_tmp_msg_0_0.amplitude = 0.166433209806;
    tmp_tmp_msg_0_0.duration = 52204U;
    tmp_tmp_msg_0_0.speed = 0.078222592506;
    tmp_tmp_msg_0_0.speed_units = 112U;
    tmp_tmp_msg_0_0.radius = 0.843057564193;
    tmp_tmp_msg_0_0.direction = 123U;
    tmp_tmp_msg_0_0.custom.assign("FEEESQPKVRAVMLKAGHFCVSHEFJPAPIGQUCMVTGBUWZHLIDBVHJHMEXBKUWJXKMWGRYQOHLOYXFWXRQXMCCNWQXSMFLYBQIWLITPGBILZFZDXBVBARMSQUU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TransportBindings tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.consumer.assign("GEIOKVMMRCBOVNJGCOP");
    tmp_tmp_msg_0_1.message_id = 46669U;
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
    msg.setTimeStamp(0.263133639283);
    msg.setSource(45905U);
    msg.setSourceEntity(231U);
    msg.setDestination(12140U);
    msg.setDestinationEntity(179U);
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("TJGFJFGRAGZAQKBENQPEHDDKTMYNVGVNPRSIRKKERJKQZORLXJPIGCLEEZNGSXPLRYDUJHPVYARVRTJSMBMUHITILEMEVSIBDZZZKOCQCSNXTAVOXMFMUWOOLUQVDHFIGHIBPCYVXNXJUVBSWICTYFWLARQSUWJHPYDVFQFCQNQBUKOJMYWXDCOCFTYMKZXAWEUOWDQXIHXKPGCRBFHBSM");
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
    msg.setTimeStamp(0.171277065767);
    msg.setSource(56840U);
    msg.setSourceEntity(114U);
    msg.setDestination(5925U);
    msg.setDestinationEntity(144U);
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("SWCWRBPREZKYKLFMAYJCAQTOUMDLZGMXPWUDPPPTBHMVICRLUNGFVWKEAYCRYP");
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
    msg.setTimeStamp(0.270334508912);
    msg.setSource(26433U);
    msg.setSourceEntity(74U);
    msg.setDestination(63896U);
    msg.setDestinationEntity(104U);
    msg.enable = 129U;

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
    msg.setTimeStamp(0.666213963696);
    msg.setSource(47452U);
    msg.setSourceEntity(227U);
    msg.setDestination(64210U);
    msg.setDestinationEntity(156U);
    msg.enable = 205U;

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
    msg.setTimeStamp(0.857825841805);
    msg.setSource(48315U);
    msg.setSourceEntity(79U);
    msg.setDestination(55184U);
    msg.setDestinationEntity(134U);
    msg.enable = 145U;

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
    msg.setTimeStamp(0.711684055388);
    msg.setSource(55129U);
    msg.setSourceEntity(222U);
    msg.setDestination(48905U);
    msg.setDestinationEntity(129U);
    msg.summary = 144U;
    msg.level = 218U;

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
    msg.setTimeStamp(0.264208327801);
    msg.setSource(33209U);
    msg.setSourceEntity(249U);
    msg.setDestination(20656U);
    msg.setDestinationEntity(14U);
    msg.summary = 74U;
    msg.level = 22U;

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
    msg.setTimeStamp(0.366438014689);
    msg.setSource(20242U);
    msg.setSourceEntity(229U);
    msg.setDestination(52590U);
    msg.setDestinationEntity(151U);
    msg.summary = 67U;
    msg.level = 114U;

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
    msg.setTimeStamp(0.211340730781);
    msg.setSource(4821U);
    msg.setSourceEntity(87U);
    msg.setDestination(7749U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.93476648491);
    msg.setSource(38546U);
    msg.setSourceEntity(10U);
    msg.setDestination(10911U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.455224832635);
    msg.setSource(63607U);
    msg.setSourceEntity(86U);
    msg.setDestination(3379U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.106578574984);
    msg.setSource(12003U);
    msg.setSourceEntity(179U);
    msg.setDestination(13681U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.185981335988);
    msg.setSource(14310U);
    msg.setSourceEntity(114U);
    msg.setDestination(29536U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.893215737033);
    msg.setSource(45628U);
    msg.setSourceEntity(157U);
    msg.setDestination(65326U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.595809572199);
    msg.setSource(61112U);
    msg.setSourceEntity(88U);
    msg.setDestination(58143U);
    msg.setDestinationEntity(239U);
    msg.op = 31U;
    msg.system.assign("SKNRJUZBXYMHIHIU");
    msg.range = 0.679332084218;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 248U;
    tmp_msg_0.mnames.assign("YDFHXUAGTWJKRGMLCVQRKJDTTTDRVVFLVKRFJWRPPXWQDIVJQCEUYZJPFTAYQPUFJACMSDKKJBMQUGC");
    tmp_msg_0.ecount = 3U;
    tmp_msg_0.enames.assign("SSLXQHNPZTXGLRKMDSBQWBKLGXKYVTPYXXMOJZRIJCWVTPNARJZUCQVPHFLMJZLIUKSOBRHYQJEDYJWVEWICEPEAYNIUSFRKGYQCLCJADUICPVCATEJDTPQBIMIDITRVDEDBXAOMODBAKPDXTHINPOWQZWYROKYEOQNXBFTUBEVLMMCYUFNLMXGNWHGLIVFWKUHTWFGYSFGLHXBUKQFAHBKGOWMSSSHNUNZVSDCEZRARAJHPFQRVTMOEGOZFZ");
    tmp_msg_0.ccount = 95U;
    tmp_msg_0.cnames.assign("JSAVVPBHHIVOIOLWGCDEXFPLZCRESITKPCXNMJHFSULPTICUGIMCQ");
    tmp_msg_0.last_error.assign("RNXMVOEORVQNBSGIYLHDQEWCQJBVESYZKFSGKHBUAIWICOJODUPQXRLSNFLVKUVLTHJBUZQDRFOM");
    tmp_msg_0.last_error_time = 0.790851558292;
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
    msg.setTimeStamp(0.831407695985);
    msg.setSource(64281U);
    msg.setSourceEntity(54U);
    msg.setDestination(2720U);
    msg.setDestinationEntity(73U);
    msg.op = 230U;
    msg.system.assign("YHSJWHRNZCOHUJSLQZNGLEQZXAEKMZUUAITKNIFKDVPVBRCADKCEASXEDTDXONIORAHMMBTMNIIHBCLHTMHYWHVIGOGENEPNXROTRJKJQACRYSDXGVXXSPUFCQDBHUFGLPOMDOYPDYJSCMJBGORSJZKXGCBRFPNLVBUITCXJDJYVQTYDWAWUNZLGYSLFIEWQTYTW");
    msg.range = 0.302056884807;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 21058U;
    tmp_msg_0.flags = 157U;
    tmp_msg_0.lat = 0.82484605026;
    tmp_msg_0.lon = 0.917465214785;
    tmp_msg_0.start_z = 0.557969162891;
    tmp_msg_0.start_z_units = 7U;
    tmp_msg_0.end_z = 0.206065223334;
    tmp_msg_0.end_z_units = 120U;
    tmp_msg_0.radius = 0.4967619912;
    tmp_msg_0.speed = 0.554534018061;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.custom.assign("KPSAJDURTSHJWGKMLRTRZXBSHEGJAHZZHMCYNEZYIYEEGRRFPZPKONXHHVDKFXZQQNGXYIOMCATOCURONZMPVGCCIKDBLTOFZBQLEPUYAIGULLRXUWHPVJGPNWTWVMMTDSTLYDFLLIWFEMEGVBYBEFAICWTXJSNAHUWNLYUBDOVSJPRFSSSNYMASPBOQVLFQJYIIKQWFIVKKDJJDICXXFCWCXUMOQN");
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
    msg.setTimeStamp(0.399718970046);
    msg.setSource(41880U);
    msg.setSourceEntity(228U);
    msg.setDestination(61597U);
    msg.setDestinationEntity(86U);
    msg.op = 240U;
    msg.system.assign("OBDVMMGRHHALPSVXELU");
    msg.range = 0.992218384223;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.375690378763;
    tmp_msg_0.x = 0.917247118082;
    tmp_msg_0.y = 0.923577804735;
    tmp_msg_0.z = 0.70043164251;
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
    msg.setTimeStamp(0.823737756259);
    msg.setSource(13348U);
    msg.setSourceEntity(142U);
    msg.setDestination(7162U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.851919059034);
    msg.setSource(27256U);
    msg.setSourceEntity(140U);
    msg.setDestination(29810U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.595732665704);
    msg.setSource(11600U);
    msg.setSourceEntity(28U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.757626316447);
    msg.setSource(56556U);
    msg.setSourceEntity(109U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(96U);
    msg.list.assign("ADYFLLRFDBGRLUYLVFXJJGFOUQRJYWETQJSFYKPBJENOANEEPEBBSKDJHCAYUUCYNKAXAGHQMVUKGVLYSSZVCIBOPNZDMMEGVPMVZEOJKHPUAHCGIKOKDOHSPVXFVEMZJFMRLGBYFTNFQALDSVIWTRUMXZLTWGPCQHCPBUZNHGIACOVPPXXNBJSY");

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
    msg.setTimeStamp(0.221391308331);
    msg.setSource(8581U);
    msg.setSourceEntity(8U);
    msg.setDestination(1430U);
    msg.setDestinationEntity(217U);
    msg.list.assign("FCCWDYMSPZHHNOIYBZGTWSHAKEGTYRXJPUKRSSAAKDFBRVQDXPMDRXJUXEQUOPUBZZDKLEMNTOHNVFICAFYBXRCIGVUJSMCMJIRFGUZWVJHLOHJXBUBBNAZ");

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
    msg.setTimeStamp(0.521615249213);
    msg.setSource(9332U);
    msg.setSourceEntity(242U);
    msg.setDestination(55284U);
    msg.setDestinationEntity(98U);
    msg.list.assign("ANOWIJVGZPNQVMMBHTLYAQGFGEPTXUBLFBPYRIUZH");

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
    msg.setTimeStamp(0.757338824765);
    msg.setSource(46635U);
    msg.setSourceEntity(122U);
    msg.setDestination(32189U);
    msg.setDestinationEntity(235U);
    msg.value = -4012;

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
    msg.setTimeStamp(0.152373097513);
    msg.setSource(35268U);
    msg.setSourceEntity(8U);
    msg.setDestination(61629U);
    msg.setDestinationEntity(69U);
    msg.value = -24234;

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
    msg.setTimeStamp(0.922560871767);
    msg.setSource(265U);
    msg.setSourceEntity(174U);
    msg.setDestination(42538U);
    msg.setDestinationEntity(106U);
    msg.value = -11908;

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
    msg.setTimeStamp(0.767944598078);
    msg.setSource(50448U);
    msg.setSourceEntity(139U);
    msg.setDestination(41651U);
    msg.setDestinationEntity(57U);
    msg.value = 0.058356434269;

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
    msg.setTimeStamp(0.0286416738944);
    msg.setSource(15142U);
    msg.setSourceEntity(36U);
    msg.setDestination(39572U);
    msg.setDestinationEntity(203U);
    msg.value = 0.889260741373;

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
    msg.setTimeStamp(0.212818467406);
    msg.setSource(30381U);
    msg.setSourceEntity(7U);
    msg.setDestination(48372U);
    msg.setDestinationEntity(130U);
    msg.value = 0.235392546743;

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
    msg.setTimeStamp(0.182493692046);
    msg.setSource(5341U);
    msg.setSourceEntity(22U);
    msg.setDestination(20066U);
    msg.setDestinationEntity(84U);
    msg.value = 0.598155490454;

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
    msg.setTimeStamp(0.927037527052);
    msg.setSource(58969U);
    msg.setSourceEntity(164U);
    msg.setDestination(36960U);
    msg.setDestinationEntity(131U);
    msg.value = 0.477881386283;

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
    msg.setTimeStamp(0.966443170893);
    msg.setSource(4035U);
    msg.setSourceEntity(55U);
    msg.setDestination(53578U);
    msg.setDestinationEntity(158U);
    msg.value = 0.819917069129;

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
    msg.setTimeStamp(0.993603449912);
    msg.setSource(8575U);
    msg.setSourceEntity(140U);
    msg.setDestination(62663U);
    msg.setDestinationEntity(148U);
    msg.validity = 38925U;
    msg.type = 35U;
    msg.utc_year = 56805U;
    msg.utc_month = 140U;
    msg.utc_day = 207U;
    msg.utc_time = 0.79389105386;
    msg.lat = 0.392583095709;
    msg.lon = 0.260563897044;
    msg.height = 0.774106642899;
    msg.satellites = 87U;
    msg.cog = 0.580713149038;
    msg.sog = 0.28407445698;
    msg.hdop = 0.898176975891;
    msg.vdop = 0.882304519555;
    msg.hacc = 0.213839907124;
    msg.vacc = 0.3586534265;

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
    msg.setTimeStamp(0.488777983738);
    msg.setSource(43691U);
    msg.setSourceEntity(211U);
    msg.setDestination(26767U);
    msg.setDestinationEntity(166U);
    msg.validity = 570U;
    msg.type = 177U;
    msg.utc_year = 5762U;
    msg.utc_month = 12U;
    msg.utc_day = 23U;
    msg.utc_time = 0.287354641772;
    msg.lat = 0.694153094506;
    msg.lon = 0.452650998131;
    msg.height = 0.565518514147;
    msg.satellites = 137U;
    msg.cog = 0.295445945674;
    msg.sog = 0.0285520775533;
    msg.hdop = 0.148947931821;
    msg.vdop = 0.162082744474;
    msg.hacc = 0.28843878574;
    msg.vacc = 0.443598933197;

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
    msg.setTimeStamp(0.0678846067279);
    msg.setSource(22962U);
    msg.setSourceEntity(143U);
    msg.setDestination(2291U);
    msg.setDestinationEntity(248U);
    msg.validity = 61928U;
    msg.type = 91U;
    msg.utc_year = 39857U;
    msg.utc_month = 55U;
    msg.utc_day = 5U;
    msg.utc_time = 0.883876579473;
    msg.lat = 0.67583687661;
    msg.lon = 0.409240245598;
    msg.height = 0.562316984627;
    msg.satellites = 85U;
    msg.cog = 0.726504568733;
    msg.sog = 0.148206655335;
    msg.hdop = 0.785273355469;
    msg.vdop = 0.674241704887;
    msg.hacc = 0.544706521689;
    msg.vacc = 0.743359056512;

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
    msg.setTimeStamp(0.673096437005);
    msg.setSource(26696U);
    msg.setSourceEntity(208U);
    msg.setDestination(3616U);
    msg.setDestinationEntity(208U);
    msg.time = 0.139329107487;
    msg.phi = 0.808510864682;
    msg.theta = 0.572842601325;
    msg.psi = 0.185950611088;
    msg.psi_magnetic = 0.396251128827;

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
    msg.setTimeStamp(0.941764025941);
    msg.setSource(6029U);
    msg.setSourceEntity(127U);
    msg.setDestination(62113U);
    msg.setDestinationEntity(72U);
    msg.time = 0.0239061362095;
    msg.phi = 0.639505470083;
    msg.theta = 0.782054164713;
    msg.psi = 0.72625597273;
    msg.psi_magnetic = 0.934551836649;

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
    msg.setTimeStamp(0.219564395464);
    msg.setSource(4455U);
    msg.setSourceEntity(134U);
    msg.setDestination(24607U);
    msg.setDestinationEntity(7U);
    msg.time = 0.752078976471;
    msg.phi = 0.588293023721;
    msg.theta = 0.0178379706372;
    msg.psi = 0.809126904011;
    msg.psi_magnetic = 0.010374172574;

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
    msg.setTimeStamp(0.588630479634);
    msg.setSource(60647U);
    msg.setSourceEntity(28U);
    msg.setDestination(65104U);
    msg.setDestinationEntity(143U);
    msg.time = 0.132348116587;
    msg.x = 0.49392830371;
    msg.y = 0.0939710613371;
    msg.z = 0.176677056981;
    msg.timestep = 0.851214512521;

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
    msg.setTimeStamp(0.363252925928);
    msg.setSource(12263U);
    msg.setSourceEntity(18U);
    msg.setDestination(18050U);
    msg.setDestinationEntity(195U);
    msg.time = 0.251655057269;
    msg.x = 0.376300028022;
    msg.y = 0.797535738301;
    msg.z = 0.998362278097;
    msg.timestep = 0.487864946244;

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
    msg.setTimeStamp(0.307382368009);
    msg.setSource(12167U);
    msg.setSourceEntity(211U);
    msg.setDestination(34572U);
    msg.setDestinationEntity(213U);
    msg.time = 0.455756719334;
    msg.x = 0.327740787964;
    msg.y = 0.725648466439;
    msg.z = 0.740949038604;
    msg.timestep = 0.696314989536;

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
    msg.setTimeStamp(0.0684762086706);
    msg.setSource(22714U);
    msg.setSourceEntity(47U);
    msg.setDestination(50711U);
    msg.setDestinationEntity(5U);
    msg.time = 0.38057785665;
    msg.x = 0.189121172429;
    msg.y = 0.270897967493;
    msg.z = 0.0564019112047;

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
    msg.setTimeStamp(0.475780358377);
    msg.setSource(809U);
    msg.setSourceEntity(17U);
    msg.setDestination(42843U);
    msg.setDestinationEntity(11U);
    msg.time = 0.148909059716;
    msg.x = 0.79256724033;
    msg.y = 0.466568005465;
    msg.z = 0.0838248331682;

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
    msg.setTimeStamp(0.620926678012);
    msg.setSource(2508U);
    msg.setSourceEntity(60U);
    msg.setDestination(44897U);
    msg.setDestinationEntity(209U);
    msg.time = 0.461514889428;
    msg.x = 0.573463511481;
    msg.y = 0.94348635569;
    msg.z = 0.335373285221;

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
    msg.setTimeStamp(0.200101723967);
    msg.setSource(18594U);
    msg.setSourceEntity(115U);
    msg.setDestination(26847U);
    msg.setDestinationEntity(73U);
    msg.time = 0.924159433492;
    msg.x = 0.0208558467352;
    msg.y = 0.426752519371;
    msg.z = 0.661353539899;

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
    msg.setTimeStamp(0.498568979558);
    msg.setSource(33704U);
    msg.setSourceEntity(39U);
    msg.setDestination(63299U);
    msg.setDestinationEntity(74U);
    msg.time = 0.719291082501;
    msg.x = 0.206227830924;
    msg.y = 0.27857935287;
    msg.z = 0.388576291297;

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
    msg.setTimeStamp(0.765678249253);
    msg.setSource(64821U);
    msg.setSourceEntity(69U);
    msg.setDestination(11879U);
    msg.setDestinationEntity(92U);
    msg.time = 0.340289367472;
    msg.x = 0.377911801665;
    msg.y = 0.671654796404;
    msg.z = 0.904293361863;

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
    msg.setTimeStamp(0.418485027319);
    msg.setSource(36279U);
    msg.setSourceEntity(208U);
    msg.setDestination(45623U);
    msg.setDestinationEntity(233U);
    msg.time = 0.368746447692;
    msg.x = 0.412693770897;
    msg.y = 0.0816067283829;
    msg.z = 0.320738047963;

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
    msg.setTimeStamp(0.514069893956);
    msg.setSource(55606U);
    msg.setSourceEntity(22U);
    msg.setDestination(8790U);
    msg.setDestinationEntity(219U);
    msg.time = 0.751148740895;
    msg.x = 0.233950827383;
    msg.y = 0.537182517469;
    msg.z = 0.620758179759;

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
    msg.setTimeStamp(0.230615317134);
    msg.setSource(45522U);
    msg.setSourceEntity(219U);
    msg.setDestination(45045U);
    msg.setDestinationEntity(235U);
    msg.time = 0.581326839981;
    msg.x = 0.953506616605;
    msg.y = 0.611120275322;
    msg.z = 0.940153231491;

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
    msg.setTimeStamp(0.348940645221);
    msg.setSource(56493U);
    msg.setSourceEntity(107U);
    msg.setDestination(47107U);
    msg.setDestinationEntity(116U);
    msg.validity = 26U;
    msg.x = 0.141195308641;
    msg.y = 0.941898481613;
    msg.z = 0.32150504133;

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
    msg.setTimeStamp(0.0303890959846);
    msg.setSource(57211U);
    msg.setSourceEntity(81U);
    msg.setDestination(3643U);
    msg.setDestinationEntity(107U);
    msg.validity = 168U;
    msg.x = 0.603593572264;
    msg.y = 0.355880868841;
    msg.z = 0.0491230805375;

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
    msg.setTimeStamp(0.226586214092);
    msg.setSource(11176U);
    msg.setSourceEntity(98U);
    msg.setDestination(16672U);
    msg.setDestinationEntity(124U);
    msg.validity = 100U;
    msg.x = 0.216410874271;
    msg.y = 0.165903574248;
    msg.z = 0.481678996255;

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
    msg.setTimeStamp(0.45511720612);
    msg.setSource(40136U);
    msg.setSourceEntity(8U);
    msg.setDestination(9042U);
    msg.setDestinationEntity(224U);
    msg.validity = 187U;
    msg.x = 0.924003420015;
    msg.y = 0.169288474793;
    msg.z = 0.0682254864777;

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
    msg.setTimeStamp(0.648488788226);
    msg.setSource(26553U);
    msg.setSourceEntity(21U);
    msg.setDestination(48286U);
    msg.setDestinationEntity(96U);
    msg.validity = 112U;
    msg.x = 0.557486396036;
    msg.y = 0.489840718197;
    msg.z = 0.783260025608;

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
    msg.setTimeStamp(0.784314734583);
    msg.setSource(42578U);
    msg.setSourceEntity(229U);
    msg.setDestination(62309U);
    msg.setDestinationEntity(58U);
    msg.validity = 103U;
    msg.x = 0.130549947589;
    msg.y = 0.153417207664;
    msg.z = 0.0863294089779;

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
    msg.setTimeStamp(0.256524957742);
    msg.setSource(44790U);
    msg.setSourceEntity(38U);
    msg.setDestination(56133U);
    msg.setDestinationEntity(150U);
    msg.time = 0.701020775826;
    msg.x = 0.108268909124;
    msg.y = 0.204826551424;
    msg.z = 0.476092319495;

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
    msg.setTimeStamp(0.679197469085);
    msg.setSource(47500U);
    msg.setSourceEntity(180U);
    msg.setDestination(21413U);
    msg.setDestinationEntity(203U);
    msg.time = 0.576613423482;
    msg.x = 0.576609929549;
    msg.y = 0.260463896291;
    msg.z = 0.974713432102;

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
    msg.setTimeStamp(0.358388160359);
    msg.setSource(42648U);
    msg.setSourceEntity(38U);
    msg.setDestination(39833U);
    msg.setDestinationEntity(84U);
    msg.time = 0.0937565520326;
    msg.x = 0.776641136734;
    msg.y = 0.840924028484;
    msg.z = 0.971770559297;

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
    msg.setTimeStamp(0.0942933610649);
    msg.setSource(49149U);
    msg.setSourceEntity(177U);
    msg.setDestination(1670U);
    msg.setDestinationEntity(156U);
    msg.validity = 114U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.214009560279;
    tmp_msg_0.y = 0.72101970451;
    tmp_msg_0.z = 0.619871624747;
    tmp_msg_0.phi = 0.00738588003328;
    tmp_msg_0.theta = 0.413334971967;
    tmp_msg_0.psi = 0.630318413112;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.421572284974;
    tmp_msg_1.beam_height = 0.584979893163;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0815803578877;

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
    msg.setTimeStamp(0.659941717757);
    msg.setSource(17450U);
    msg.setSourceEntity(13U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(20U);
    msg.validity = 65U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.978421624813;
    tmp_msg_0.y = 0.2916098593;
    tmp_msg_0.z = 0.789704952291;
    tmp_msg_0.phi = 0.452211266122;
    tmp_msg_0.theta = 0.591447587187;
    tmp_msg_0.psi = 0.32326482521;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0636452306038;

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
    msg.setTimeStamp(0.341778343572);
    msg.setSource(14104U);
    msg.setSourceEntity(79U);
    msg.setDestination(22089U);
    msg.setDestinationEntity(179U);
    msg.validity = 254U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.313633036336;
    tmp_msg_0.beam_height = 0.777953285612;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.708153639003;

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
    msg.setTimeStamp(0.766984893464);
    msg.setSource(14366U);
    msg.setSourceEntity(70U);
    msg.setDestination(11643U);
    msg.setDestinationEntity(114U);
    msg.value = 0.301304409734;

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
    msg.setTimeStamp(0.43939125804);
    msg.setSource(20832U);
    msg.setSourceEntity(84U);
    msg.setDestination(55489U);
    msg.setDestinationEntity(89U);
    msg.value = 0.615985144601;

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
    msg.setTimeStamp(0.197280117067);
    msg.setSource(42734U);
    msg.setSourceEntity(144U);
    msg.setDestination(16152U);
    msg.setDestinationEntity(88U);
    msg.value = 0.872108081661;

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
    msg.setTimeStamp(0.0710186311242);
    msg.setSource(19097U);
    msg.setSourceEntity(48U);
    msg.setDestination(35868U);
    msg.setDestinationEntity(132U);
    msg.value = 0.646062479312;

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
    msg.setTimeStamp(0.931930500927);
    msg.setSource(25139U);
    msg.setSourceEntity(66U);
    msg.setDestination(8457U);
    msg.setDestinationEntity(51U);
    msg.value = 0.790933792224;

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
    msg.setTimeStamp(0.0230116538882);
    msg.setSource(28622U);
    msg.setSourceEntity(63U);
    msg.setDestination(19901U);
    msg.setDestinationEntity(103U);
    msg.value = 0.304223724134;

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
    msg.setTimeStamp(0.803656411279);
    msg.setSource(46460U);
    msg.setSourceEntity(71U);
    msg.setDestination(30053U);
    msg.setDestinationEntity(135U);
    msg.value = 0.119633550448;

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
    msg.setTimeStamp(0.29818517158);
    msg.setSource(8346U);
    msg.setSourceEntity(77U);
    msg.setDestination(10858U);
    msg.setDestinationEntity(43U);
    msg.value = 0.777435461908;

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
    msg.setTimeStamp(0.600902433019);
    msg.setSource(36319U);
    msg.setSourceEntity(24U);
    msg.setDestination(51354U);
    msg.setDestinationEntity(34U);
    msg.value = 0.853858171787;

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
    msg.setTimeStamp(0.989677379075);
    msg.setSource(5695U);
    msg.setSourceEntity(210U);
    msg.setDestination(5904U);
    msg.setDestinationEntity(189U);
    msg.value = 0.17273905272;

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
    msg.setTimeStamp(0.363839770589);
    msg.setSource(34757U);
    msg.setSourceEntity(216U);
    msg.setDestination(47392U);
    msg.setDestinationEntity(166U);
    msg.value = 0.612873703692;

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
    msg.setTimeStamp(0.634837339648);
    msg.setSource(22665U);
    msg.setSourceEntity(9U);
    msg.setDestination(24491U);
    msg.setDestinationEntity(106U);
    msg.value = 0.521291967107;

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
    msg.setTimeStamp(0.251031993782);
    msg.setSource(29673U);
    msg.setSourceEntity(94U);
    msg.setDestination(59576U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0939796926791;

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
    msg.setTimeStamp(0.489178270433);
    msg.setSource(48661U);
    msg.setSourceEntity(238U);
    msg.setDestination(64379U);
    msg.setDestinationEntity(44U);
    msg.value = 0.351657953919;

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
    msg.setTimeStamp(0.74414361484);
    msg.setSource(43816U);
    msg.setSourceEntity(178U);
    msg.setDestination(33475U);
    msg.setDestinationEntity(25U);
    msg.value = 0.447949609889;

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
    msg.setTimeStamp(0.737230738895);
    msg.setSource(44154U);
    msg.setSourceEntity(75U);
    msg.setDestination(37629U);
    msg.setDestinationEntity(172U);
    msg.value = 0.560629076706;

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
    msg.setTimeStamp(0.505151627379);
    msg.setSource(28999U);
    msg.setSourceEntity(150U);
    msg.setDestination(47848U);
    msg.setDestinationEntity(50U);
    msg.value = 0.941657292234;

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
    msg.setTimeStamp(0.210279520766);
    msg.setSource(7018U);
    msg.setSourceEntity(94U);
    msg.setDestination(38449U);
    msg.setDestinationEntity(139U);
    msg.value = 0.766710763123;

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
    msg.setTimeStamp(0.231821255196);
    msg.setSource(14362U);
    msg.setSourceEntity(150U);
    msg.setDestination(17449U);
    msg.setDestinationEntity(193U);
    msg.value = 0.583527344876;

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
    msg.setTimeStamp(0.545484192238);
    msg.setSource(50811U);
    msg.setSourceEntity(178U);
    msg.setDestination(39080U);
    msg.setDestinationEntity(137U);
    msg.value = 0.0996364900539;

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
    msg.setTimeStamp(0.146547284577);
    msg.setSource(20101U);
    msg.setSourceEntity(57U);
    msg.setDestination(55225U);
    msg.setDestinationEntity(164U);
    msg.value = 0.519053268734;

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
    msg.setTimeStamp(0.364471823132);
    msg.setSource(20235U);
    msg.setSourceEntity(133U);
    msg.setDestination(28023U);
    msg.setDestinationEntity(227U);
    msg.value = 0.391906702249;

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
    msg.setTimeStamp(0.12494118426);
    msg.setSource(27461U);
    msg.setSourceEntity(207U);
    msg.setDestination(1153U);
    msg.setDestinationEntity(116U);
    msg.value = 0.394406753923;

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
    msg.setTimeStamp(0.047414008706);
    msg.setSource(36804U);
    msg.setSourceEntity(223U);
    msg.setDestination(30957U);
    msg.setDestinationEntity(26U);
    msg.value = 0.7706101049;

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
    msg.setTimeStamp(0.407516728665);
    msg.setSource(12833U);
    msg.setSourceEntity(13U);
    msg.setDestination(24420U);
    msg.setDestinationEntity(131U);
    msg.direction = 0.825548609815;
    msg.speed = 0.888114595013;

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
    msg.setTimeStamp(0.483585742218);
    msg.setSource(63026U);
    msg.setSourceEntity(26U);
    msg.setDestination(40619U);
    msg.setDestinationEntity(76U);
    msg.direction = 0.676999545981;
    msg.speed = 0.842878563884;

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
    msg.setTimeStamp(0.205025917777);
    msg.setSource(58709U);
    msg.setSourceEntity(175U);
    msg.setDestination(53129U);
    msg.setDestinationEntity(61U);
    msg.direction = 0.513503492935;
    msg.speed = 0.0530583550397;

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
    msg.setTimeStamp(0.250304922388);
    msg.setSource(549U);
    msg.setSourceEntity(151U);
    msg.setDestination(12948U);
    msg.setDestinationEntity(191U);
    msg.value = 0.588649445578;

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
    msg.setTimeStamp(0.887797246236);
    msg.setSource(2003U);
    msg.setSourceEntity(182U);
    msg.setDestination(11142U);
    msg.setDestinationEntity(181U);
    msg.value = 0.0331580524295;

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
    msg.setTimeStamp(0.998434713206);
    msg.setSource(23696U);
    msg.setSourceEntity(130U);
    msg.setDestination(18173U);
    msg.setDestinationEntity(174U);
    msg.value = 0.12793003163;

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
    msg.setTimeStamp(0.375139072549);
    msg.setSource(35169U);
    msg.setSourceEntity(75U);
    msg.setDestination(36092U);
    msg.setDestinationEntity(241U);
    msg.value.assign("GZEIGWVZTHDTWPIFZTLVQKOBJPTFEYUOZBNEXMHOIIAMZYLYTKCWQWYIJGNLNBAEUSRHWHXRGNGEAESMZMGQSWAXURGTJNTLKODVLVYNQXJUMMACNORPBYXKCWGWFSXLWPFDGFPYZHMRBDCSXDTMDQEIYHVZOHSHAJDVDPQTSYKSPIKVZETVNKIXJPOHRULALSXJCFZDSWIEJUBMYARUFJAIKCH");

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
    msg.setTimeStamp(0.735824701417);
    msg.setSource(54480U);
    msg.setSourceEntity(232U);
    msg.setDestination(28220U);
    msg.setDestinationEntity(203U);
    msg.value.assign("DPWJPHRZUCCPAJLYGAJQJTQFPMXLJHVRPOENGDBQUUQSQALZLKBYQLVMDFKWERKBWXTQMEDHLMNRYGRNEWJSVIKXDMRZWXSUAEFNZBGNCSMYQVIAWQHJCOXFVGOCZSRWCEZDTYDSUOBTECKIXDIYLGAHBKAKCGIAWYRYHZFOSHZGGZHXCUSYNRNXDTMPWJBZVIPEFYTBMPTMTWVMDQISXOLIKNURHVNULFOESOTIEUNATKPCJIHPVFLBBXUF");

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
    msg.setTimeStamp(0.820401159897);
    msg.setSource(32390U);
    msg.setSourceEntity(176U);
    msg.setDestination(55416U);
    msg.setDestinationEntity(100U);
    msg.value.assign("WXHJBEHBSWMRIZQLHUDICUFGVAZLJNLTXECUNKIFMSBYIJVYGNDYKUJGZPSSYKQWERHHNYXCYAQPNSDVOULFXDZSKWTNDRWARHNEMMWKISEKNVPJBCAW");

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
    msg.setTimeStamp(0.793360012788);
    msg.setSource(5128U);
    msg.setSourceEntity(176U);
    msg.setDestination(43329U);
    msg.setDestinationEntity(35U);
    const char tmp_msg_0[] = {-79, 72, -9, -2, -12, 104, -70, -10, 78, 2, -45, 98, 29, 111, 98, -85, -125, -128, 4, -49, -6, -121, 107, 8, -90, 75, 94, -68, -16, 108, -48, -8, 117, 78, 96, 92, 7, -26, 48, -21, -58, 3, 33, -22, -67, 89, -93, -66, -64, 81, -17, 120, 63, -51, 32, 21, 96, -28, -78, -120, 14, 92, 6, -31, 79, -36, -113, -67, -52, -86, -48, 62, 14, -95, 51, -54, -11, 66, 13, -33, -43, 98, -124, -12, 101, 68, 73, -29, -96, 110, 25, -14, -44, -15, -69, -94, -48, -13, -55, -108, 110, 7, 69, -3, 14, -30, -119, -110, -30, -31, 117, 95, -51, 56, 68, -9, 17, 76, -8, -96, 44, 26, -128, 7, -58, 51, 5, -102, 92, -31, -47, 110, -116, -107, -9, 126, -64, -125, 25, 117, -24, 83, 3, 62, -108, -83, -120, 117, -115, -42, -51, 126, 1, -90, 27, -88, -62, -107, 87, -12, 0, -35, 20, 53, 12, 1, 112, -90, 84, 24, -60, -47, -64, 94, 55, -22, -33, -107, -23, 9, 8, -61, -128, 86, -56, 24, -45, 94, -89, 77, -30, -67, 21, 52, -7, -70, 0, -26, -29, -121, -43, 45, -53, -10, 38, -118, -5, 52, -34, -1, 21, -18, 53, 63, -42, 46, -62, 10, 77, -103, -2, 20, 37, 123, 91, -25, -109, 20, -113, 98, -106, -64, 44, 126, -26, -120, 19, 63, 64, -101, 79, 91};
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
    msg.setTimeStamp(0.21671971519);
    msg.setSource(63905U);
    msg.setSourceEntity(68U);
    msg.setDestination(30155U);
    msg.setDestinationEntity(28U);
    const char tmp_msg_0[] = {50, -122, -45, -115, -69, -40, -69, -102, 47, 35, 54, 17, -97, 117, 96, -117, 28, -111, 78, -72, -70, 101, 116, 42, -17, 82, -49, -32, -3, -112, 109, 22, 23, -100, 78, 6, 75, -102, 96, -62, -44, -110, 67, -111, 27, 113, -112, 100, -30, -11, -66, 122, -35, 120, -28, 85, 85, -69, -103, 36, -17, -33, 74, 80, -80, 91, -11, 115, -34, 6, 122, 49, 113, -108, 8, 31, 53, 42, 100, 10, 8, 83, 113, 90, 74, -9, -95, -6, 56, -85, -47, 29, 96, -55, 15, -47, -23, 73, -102, -50, -124, -84, -74, -66, 3, -111, -111, 61, -66, -95, 104, -47, -26, 80, -113, 113, -103, -7, 20, 70, -72, 38, -44, -60, 87, -23, 115, 73, -54, 102, -28, 38, 109, -25, 10, -82, -89, 29, -67, 78, 19, -22, -122, 94, -24, -122, 90, 34, -15, 67, 86, 79, 37, -91, 32, 114, -22, -97, 51, -78, 12, 116, 63, 7, 43, 77, 17, -106, -110, 59, -13, 22, -15, -13, 105, -60, -55, -27, -21, -23, 117, -46, 45, 58, -120, 51, 67, 95, -113, 22, 121, -85, 118, 121, 8, -116, 123, 119, -111, -24, 13, 32, -66, 8, -106, -88, 100, 118};
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
    msg.setTimeStamp(0.225929615814);
    msg.setSource(1037U);
    msg.setSourceEntity(211U);
    msg.setDestination(15662U);
    msg.setDestinationEntity(31U);
    const char tmp_msg_0[] = {-86, 38, 47, 105, 115, 95, -68, -19, -95, 38, -87, 55, -114, -33, -27, 81, -91, -8, 76, 23, 45, -84, 77, 44, -128, 63, 100, -33, -102, -85, -96, -98, 52, -125, 25, 50, 26, -64, 64, -37, -2, -29, 85, 44, 64, -17, 61, -58, -79, -122, 45, -66, 52, -85, 38, -86, 86, 68, 52, -70, 94, -14, -15, -124, 66, 69, 89, 56, -72, 20, 83, 33, 77, 3, -76, -2, 122, 112, -3, 124, -22, -53, -26, 83, 116, -55, 96, 117, 93, 122, 119, -97, -43, 76, -72, 122, 29, 84, 113, 31, 108, 79, 85, 77, 124, 121, 68, -59, 80, -123, -68, -4, -65, -36, -82, 90, -1, 3, 104, -116, -46, -75, 91, -76, 12, -2, -126, -94, -66, -31, -93, 97, 73, 33, 125, 52, -90, -34, -54, 68, -38, -34, -75, 108, -63, 104, 26, -41, 65, -17, 97, 39, 106, -104, -37, 49, 30, 81, 83, -77, -23, -7, -59, 61, 33, -27, -106, 70, 16, 45, -63, -21, -33, -48, -71, 4, -2, 101, 11, 23, -60, -82, -90, 31, 67, -109, 41, -105};
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
    msg.setTimeStamp(0.797966339842);
    msg.setSource(53756U);
    msg.setSourceEntity(129U);
    msg.setDestination(36305U);
    msg.setDestinationEntity(111U);
    msg.frequency = 455567814U;
    msg.min_range = 23936U;
    msg.max_range = 51260U;

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
    msg.setTimeStamp(0.410609047842);
    msg.setSource(24857U);
    msg.setSourceEntity(156U);
    msg.setDestination(12009U);
    msg.setDestinationEntity(55U);
    msg.frequency = 2858462891U;
    msg.min_range = 11421U;
    msg.max_range = 38800U;

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
    msg.setTimeStamp(0.13933064371);
    msg.setSource(11174U);
    msg.setSourceEntity(7U);
    msg.setDestination(223U);
    msg.setDestinationEntity(135U);
    msg.frequency = 4035691726U;
    msg.min_range = 20655U;
    msg.max_range = 25556U;

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
    msg.setTimeStamp(0.623646401129);
    msg.setSource(45698U);
    msg.setSourceEntity(165U);
    msg.setDestination(24522U);
    msg.setDestinationEntity(68U);
    msg.type = 12U;
    msg.frequency = 579912381U;
    msg.min_range = 12978U;
    msg.max_range = 16314U;
    msg.bits_per_point = 54U;
    msg.scale_factor = 0.158936303484;
    const char tmp_msg_0[] = {109, 122, 38, 90, -104, 41, -38, -8, -97, 104, -110, 66, -55, 23, -107, -31, -64, -57, -29, -28, -10, 87, -9, 7, -27, -91, 110, -49, -110, -97, -9, -47, -19, -16, 31, -12, -101, 94, -54, 40, -18, 20, -28, -82, 105, 102, -119, -46, -18, -88, -101, 117, -37, -96, 90, 108, -118, 64, 42, 54, -110, -41, 49, -128, 65, 43, -24, -36, 45, -37, -47, -89, 76, 41, -59, -62, -104, 8, -77, -110, 100, -54, 37, 23, 40, -119, 47, -126, -33, -51, 59, 16, 27, 35, -105, 57, -30, -104, -28, -124, 3, 25, 69, 122, -12, -99, -88, -38, -112, -24, -28, -105, 96, 43, 67, -12, 18, -112, -99, -57, -12, 54, -66, 39, 91, -70, 34, 69, 71, -41, -119, -119, -66, 23, 122, 38, 100, -63, 42, 112, 119, 76, -22, 126, -113, 113, -30, -91, -32, -90, 122, 8, 27, -126, -89, -50, 85, 119, -19, 102, 76, -10, -35, 62, 19, -17, -108, 12, -55, -30, 60, 96, 93, -94, -98, 47, -45, 99, -1, -54, -18, -127, -107, 10, -55, 27, 35, -37, 105, -100, 126, -98, -48, 85, -28, 69, 60, 75, -20, -103, -36, -105, -87, 20, 54, 62, -80, 95, -24, 16, -128, 25, -80, 45, 35, -9, -99, -55, -124, -1, 107, -6, -115};
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
    msg.setTimeStamp(0.158455715388);
    msg.setSource(48796U);
    msg.setSourceEntity(188U);
    msg.setDestination(54336U);
    msg.setDestinationEntity(78U);
    msg.type = 67U;
    msg.frequency = 374827361U;
    msg.min_range = 26342U;
    msg.max_range = 15424U;
    msg.bits_per_point = 158U;
    msg.scale_factor = 0.415714338558;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.845652938393;
    tmp_msg_0.beam_height = 0.289125927115;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {100, -111, -122, 77, 45, 83, 26, -85, -122, -110, 89, -42, -34, 19, -110, -26, 120, -76, -23, -1, -117, -58, -34, 113, -15, -67, 50, 12, 94, -8, -120, -56, 72, 15, 106, 27, 94, 24, -30, -126, 57, 45, -59, 22, -4, 104, -60, 92, 97, -112, 70, 16, 29, -111, -13, -56, 32, 126, 63, 21, 76, -67, -80, -26, -103, 75, -88, -122, -97, 20, -63, -13, 81, -13, -49, 26, -114, -106, 84, -30, -108, 60, 80, -76, 45, -15, 100, -128, -17, -69, -10, -38, 104, -109, 59, -30, 50, -107, -29, 117, 40, 94, -55, 117, 70, -3, 37, -74, 1, -94, 117, -106, 4, 117, -31, 103, 113, -104, -45, -93, 32, -97, 62, 77, 33, -35, 119, 89, -12, 81, -1, -45, -118, 51, -125, -46, -102, -30, -14, 27, 28, -108, 52, 113, -52, -32, -118, -27, 54, -100, -2, -60, -45, 53, -105, 51, -89, -43, 1, 29, 11, -114, -102, -38, -16, -10, -35, -95, -98, -61, -95, 73, -112, -42, 99, 61, -23, -28};
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
    msg.setTimeStamp(0.320870241185);
    msg.setSource(47550U);
    msg.setSourceEntity(25U);
    msg.setDestination(60748U);
    msg.setDestinationEntity(180U);
    msg.type = 5U;
    msg.frequency = 2446703394U;
    msg.min_range = 58114U;
    msg.max_range = 23885U;
    msg.bits_per_point = 98U;
    msg.scale_factor = 0.466651878806;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.515051673928;
    tmp_msg_0.beam_height = 0.892869523529;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-6, -7, 64, 51, 47, 45, 111, 121, 57, 110, 24, 18, -29, -49, 34, -40, 39, 71, -98, -10, 98, -44, -100, 15, 3, -65, -54, 73, 106, -4, 10, -89, -64, -100, 34, -30, -123, 15, 45, 34, 3, -114, -128, 28, -95, -57, 73, -33, 120, -41, -28, -67, 29, -48, -110, -67, 5, -91, 124, -2, 62, 83, -2, 108, -104, -32, 73, 125, -123, -50, -38, 65, 68, 55, -111, -118, -10, -24, -40, 58, -28, -2, 57, 32, -18, -54, -113, -12, -22, -85, 59, -90, -17, 81, 26, 35, 79, 44, 56, 104, 120, 41, -7, -107, -17, 70, -42, -56, 3, 22, -91, 55, -109, 111, -49, -16, -77, 18, 88, 111, -3, 42, 78, 125, -30, 113, -76, 98, -28, -56, -100, 69, -67, -26, 5, -109, 14, -37, -14, 65, -21, -85, -28, -67, -18, -78, 87, -77, -105, -119, -99, 58, -7, 24, -41, 42};
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
    msg.setTimeStamp(0.774076149889);
    msg.setSource(24701U);
    msg.setSourceEntity(42U);
    msg.setDestination(41647U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.58488612563);
    msg.setSource(61726U);
    msg.setSourceEntity(39U);
    msg.setDestination(14068U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.385600208638);
    msg.setSource(49517U);
    msg.setSourceEntity(164U);
    msg.setDestination(29992U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.585123552879);
    msg.setSource(1223U);
    msg.setSourceEntity(168U);
    msg.setDestination(48989U);
    msg.setDestinationEntity(128U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.46890545915);
    msg.setSource(30672U);
    msg.setSourceEntity(52U);
    msg.setDestination(18807U);
    msg.setDestinationEntity(59U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.543310799158);
    msg.setSource(28189U);
    msg.setSourceEntity(167U);
    msg.setDestination(55477U);
    msg.setDestinationEntity(156U);
    msg.op = 38U;

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
    msg.setTimeStamp(0.540418977884);
    msg.setSource(51154U);
    msg.setSourceEntity(252U);
    msg.setDestination(38357U);
    msg.setDestinationEntity(72U);
    msg.value = 0.820958460206;
    msg.confidence = 0.833392157431;
    msg.opmodes.assign("DPDCPNVBJAVNDYGEYPGXQQHFRYUWSMSGCBNLJEJRMVBOHRQKJRBWZGPIZWTIGJUPMYTLQZGTDHZUXKKCOSIDVKFBSRWKUZHMIAXOIMMUWWAPCBZVKWEQQUOQRODJZRBKUXHGHLELQHX");

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
    msg.setTimeStamp(0.656619099046);
    msg.setSource(57148U);
    msg.setSourceEntity(146U);
    msg.setDestination(20867U);
    msg.setDestinationEntity(97U);
    msg.value = 0.253168092375;
    msg.confidence = 0.492242889165;
    msg.opmodes.assign("RKXDJZSGUDZTWEXVSRFVDNQZWEIIRBNTFWPXLDTGELCSXOTBMDAAMRUPAKMIUYKYGTYHDHKJOCLMZIENZAVLPSWGJLFXBTOSRCGXPFIMYDJKUWBKPHJNAXHXZVPOORAMCNPRHAJIBGTOAFKIZHQWHGZHQVIPAFLEBSPYYOHNKQKCXJYUFKDRIITMSGSLESJ");

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
    msg.setTimeStamp(0.724749565708);
    msg.setSource(25293U);
    msg.setSourceEntity(241U);
    msg.setDestination(48889U);
    msg.setDestinationEntity(144U);
    msg.value = 0.779339452013;
    msg.confidence = 0.733137870313;
    msg.opmodes.assign("PKTHLVKWUQZNODTHRGTVAYEFWCWMMCLLAROHQIIZECQNAKGERUCBYRFOUGOYLQZVKUQBODDLXXMSGDTJONJTLRTUYKEYAWGBATIBQIMJGETCZLGLASPMPDBXKSTVBMYNHFHXNKXYOWQFZVPVRLGRVIXCKSHFAUPEZZTUEQEDYKCAVFUMXSFNEQJPCUSW");

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
    msg.setTimeStamp(0.586850485965);
    msg.setSource(62864U);
    msg.setSourceEntity(200U);
    msg.setDestination(27264U);
    msg.setDestinationEntity(67U);
    msg.itow = 1892314534U;
    msg.lat = 0.768382446481;
    msg.lon = 0.958743810113;
    msg.height_ell = 0.639682317322;
    msg.height_sea = 0.194010503268;
    msg.hacc = 0.685638088868;
    msg.vacc = 0.908938641574;
    msg.vel_n = 0.161447949464;
    msg.vel_e = 0.784074946659;
    msg.vel_d = 0.177519952047;
    msg.speed = 0.107832499306;
    msg.gspeed = 0.779661003975;
    msg.heading = 0.187195101963;
    msg.sacc = 0.18559908401;
    msg.cacc = 0.625329929641;

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
    msg.setTimeStamp(0.579425289019);
    msg.setSource(9438U);
    msg.setSourceEntity(55U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(4U);
    msg.itow = 926228092U;
    msg.lat = 0.953450322239;
    msg.lon = 0.554139490649;
    msg.height_ell = 0.999667336299;
    msg.height_sea = 0.698883969285;
    msg.hacc = 0.969962022193;
    msg.vacc = 0.559322559117;
    msg.vel_n = 0.462884746914;
    msg.vel_e = 0.832857804488;
    msg.vel_d = 0.972395607269;
    msg.speed = 0.261992279036;
    msg.gspeed = 0.337696352733;
    msg.heading = 0.911545489725;
    msg.sacc = 0.271376800083;
    msg.cacc = 0.224406094984;

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
    msg.setTimeStamp(0.237873072544);
    msg.setSource(14247U);
    msg.setSourceEntity(119U);
    msg.setDestination(16754U);
    msg.setDestinationEntity(34U);
    msg.itow = 638366559U;
    msg.lat = 0.063324466219;
    msg.lon = 0.0220783443114;
    msg.height_ell = 0.532550423793;
    msg.height_sea = 0.315286042093;
    msg.hacc = 0.0397898473139;
    msg.vacc = 0.59293910945;
    msg.vel_n = 0.612646403092;
    msg.vel_e = 0.920489088613;
    msg.vel_d = 0.357596560223;
    msg.speed = 0.0510304822981;
    msg.gspeed = 0.351346097012;
    msg.heading = 0.0823052148763;
    msg.sacc = 0.375284868226;
    msg.cacc = 0.0634978271921;

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
    msg.setTimeStamp(0.472665516676);
    msg.setSource(4368U);
    msg.setSourceEntity(67U);
    msg.setDestination(20862U);
    msg.setDestinationEntity(60U);
    msg.id = 139U;
    msg.value = 0.265899665123;

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
    msg.setTimeStamp(0.38325924308);
    msg.setSource(37087U);
    msg.setSourceEntity(230U);
    msg.setDestination(43929U);
    msg.setDestinationEntity(68U);
    msg.id = 88U;
    msg.value = 0.53116576739;

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
    msg.setTimeStamp(0.241240886822);
    msg.setSource(36401U);
    msg.setSourceEntity(234U);
    msg.setDestination(6154U);
    msg.setDestinationEntity(67U);
    msg.id = 19U;
    msg.value = 0.72417208174;

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
    msg.setTimeStamp(0.000196219627461);
    msg.setSource(30136U);
    msg.setSourceEntity(31U);
    msg.setDestination(63131U);
    msg.setDestinationEntity(61U);
    msg.x = 0.71596257231;
    msg.y = 0.219480908402;
    msg.z = 0.0702226492194;
    msg.phi = 0.908663983292;
    msg.theta = 0.910376989869;
    msg.psi = 0.12825507862;

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
    msg.setTimeStamp(0.236038304743);
    msg.setSource(54326U);
    msg.setSourceEntity(4U);
    msg.setDestination(61046U);
    msg.setDestinationEntity(126U);
    msg.x = 0.462453542563;
    msg.y = 0.245853849278;
    msg.z = 0.265976940882;
    msg.phi = 0.665079198212;
    msg.theta = 0.323082327718;
    msg.psi = 0.628212774888;

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
    msg.setTimeStamp(0.787146666534);
    msg.setSource(53002U);
    msg.setSourceEntity(173U);
    msg.setDestination(32349U);
    msg.setDestinationEntity(69U);
    msg.x = 0.431706605144;
    msg.y = 0.411278720968;
    msg.z = 0.770670713003;
    msg.phi = 0.961293205667;
    msg.theta = 0.815633634465;
    msg.psi = 0.402350710299;

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
    msg.setTimeStamp(0.606198246945);
    msg.setSource(56547U);
    msg.setSourceEntity(58U);
    msg.setDestination(12809U);
    msg.setDestinationEntity(95U);
    msg.beam_width = 0.959738549701;
    msg.beam_height = 0.206054970454;

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
    msg.setTimeStamp(0.145303733765);
    msg.setSource(60754U);
    msg.setSourceEntity(243U);
    msg.setDestination(55552U);
    msg.setDestinationEntity(144U);
    msg.beam_width = 0.936721401519;
    msg.beam_height = 0.0642984548963;

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
    msg.setTimeStamp(0.282670293439);
    msg.setSource(18146U);
    msg.setSourceEntity(14U);
    msg.setDestination(8044U);
    msg.setDestinationEntity(216U);
    msg.beam_width = 0.446375870358;
    msg.beam_height = 0.188883518548;

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
    msg.setTimeStamp(0.433401662891);
    msg.setSource(23210U);
    msg.setSourceEntity(106U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(243U);
    msg.sane = 193U;

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
    msg.setTimeStamp(0.406610602137);
    msg.setSource(14571U);
    msg.setSourceEntity(75U);
    msg.setDestination(29426U);
    msg.setDestinationEntity(193U);
    msg.sane = 89U;

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
    msg.setTimeStamp(0.318799268624);
    msg.setSource(52274U);
    msg.setSourceEntity(110U);
    msg.setDestination(41467U);
    msg.setDestinationEntity(107U);
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
    msg.setTimeStamp(0.418108169377);
    msg.setSource(60355U);
    msg.setSourceEntity(45U);
    msg.setDestination(61708U);
    msg.setDestinationEntity(81U);
    msg.id = 201U;
    msg.zoom = 16U;
    msg.action = 245U;

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
    msg.setTimeStamp(0.595228367138);
    msg.setSource(17446U);
    msg.setSourceEntity(70U);
    msg.setDestination(60396U);
    msg.setDestinationEntity(240U);
    msg.id = 23U;
    msg.zoom = 78U;
    msg.action = 195U;

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
    msg.setTimeStamp(0.678764912306);
    msg.setSource(28837U);
    msg.setSourceEntity(90U);
    msg.setDestination(7878U);
    msg.setDestinationEntity(179U);
    msg.id = 175U;
    msg.zoom = 134U;
    msg.action = 130U;

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
    msg.setTimeStamp(0.927507749528);
    msg.setSource(4171U);
    msg.setSourceEntity(243U);
    msg.setDestination(10824U);
    msg.setDestinationEntity(23U);
    msg.id = 146U;
    msg.value = 0.13652927182;

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
    msg.setTimeStamp(0.208878752729);
    msg.setSource(60506U);
    msg.setSourceEntity(163U);
    msg.setDestination(1959U);
    msg.setDestinationEntity(75U);
    msg.id = 242U;
    msg.value = 0.798392577602;

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
    msg.setTimeStamp(0.889783613922);
    msg.setSource(18768U);
    msg.setSourceEntity(52U);
    msg.setDestination(55818U);
    msg.setDestinationEntity(19U);
    msg.id = 150U;
    msg.value = 0.657645651401;

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
    msg.setTimeStamp(0.0916706169798);
    msg.setSource(51377U);
    msg.setSourceEntity(119U);
    msg.setDestination(10462U);
    msg.setDestinationEntity(143U);
    msg.id = 68U;
    msg.value = 0.762372948589;

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
    msg.setTimeStamp(0.534549696778);
    msg.setSource(8716U);
    msg.setSourceEntity(33U);
    msg.setDestination(32225U);
    msg.setDestinationEntity(165U);
    msg.id = 164U;
    msg.value = 0.261960440797;

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
    msg.setTimeStamp(0.052314046165);
    msg.setSource(5560U);
    msg.setSourceEntity(16U);
    msg.setDestination(56580U);
    msg.setDestinationEntity(95U);
    msg.id = 100U;
    msg.value = 0.897579951423;

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
    msg.setTimeStamp(0.369783341639);
    msg.setSource(25549U);
    msg.setSourceEntity(150U);
    msg.setDestination(39883U);
    msg.setDestinationEntity(123U);
    msg.id = 37U;
    msg.angle = 0.601746728637;

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
    msg.setTimeStamp(0.254067703158);
    msg.setSource(8650U);
    msg.setSourceEntity(219U);
    msg.setDestination(43232U);
    msg.setDestinationEntity(165U);
    msg.id = 50U;
    msg.angle = 0.0494400178823;

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
    msg.setTimeStamp(0.228549855198);
    msg.setSource(46722U);
    msg.setSourceEntity(146U);
    msg.setDestination(60318U);
    msg.setDestinationEntity(160U);
    msg.id = 107U;
    msg.angle = 0.88143406041;

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
    msg.setTimeStamp(0.928086116145);
    msg.setSource(2808U);
    msg.setSourceEntity(243U);
    msg.setDestination(47121U);
    msg.setDestinationEntity(71U);
    msg.op = 66U;
    msg.actions.assign("YXVQKNTHWZXOTUWKBVAURBTEZVPSGWEHMFJMCSTGZQYZCBLVERPTNQFPGJMHWVTZHJJEBWHEXGPKPLCAPBTSMFWDAHOQCOHIJXDJLGDNVYXSCOPXRIZBZYIOTOBFRODIIKMCMFXZHSUPNINAPXKOGKKDOAELKVNUZFWVXFLYDIAHLSBLOUFEHNCWQXLQMUDNYQDTZS");

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
    msg.setTimeStamp(0.585329547728);
    msg.setSource(23938U);
    msg.setSourceEntity(21U);
    msg.setDestination(1560U);
    msg.setDestinationEntity(213U);
    msg.op = 186U;
    msg.actions.assign("BFNSHAQCQWWFDFDYCJFXLHYWIPLIPHYBXWVEHYSKBJLUXRRDHXCIOUVJIGKCXAJPQOKZOHRWCVZIDMUAMFYKPPILUSWTAKZBRJXTTTGPDUNFXNKTJYGYCQRXCKBQZSOLVIXPTMZOJWJNVVOAMEQBLOFMPOECSHIFBMGTSRAPXOEDMKNORPTNBWEWGMVBLURLUCQJDASGY");

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
    msg.setTimeStamp(0.291290297811);
    msg.setSource(21484U);
    msg.setSourceEntity(81U);
    msg.setDestination(47336U);
    msg.setDestinationEntity(66U);
    msg.op = 241U;
    msg.actions.assign("NRFFCHHLXHLJGKREPKMJXNQSBCLVWTSFPHGQDBQXGDLBMBODZTUYMJVQ");

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
    msg.setTimeStamp(0.149409491524);
    msg.setSource(59751U);
    msg.setSourceEntity(182U);
    msg.setDestination(63874U);
    msg.setDestinationEntity(61U);
    msg.actions.assign("NOOBRZVVBPPIRTXKQBFUYMCWPTNLDKLGLEWRZFAJKVGYNSFXPOTIGXNBSDHHJRQNWWJSIRBACRJYKYZCDALISQEDKLQHSSDMEZFN");

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
    msg.setTimeStamp(0.174935112276);
    msg.setSource(32252U);
    msg.setSourceEntity(217U);
    msg.setDestination(17287U);
    msg.setDestinationEntity(246U);
    msg.actions.assign("AYJVKNISXYNCAGERDYOSABWSBJDBOZUAOCLUFPGQZSQBKXEQHCSVUITEFLMJFWPHEPAISRKNTKLUBZWNVRLXOFZQXFMHJEOYFQDNQBURWOSCYEBTTHYHXUMERYZULQVGGLWMTPDYMKZSWPOSINKGJCEXXEGDWMAVHIFVKICDWAMDLNPPIPHKNZQZQUKALLNUVBDVFOIPIJRBGSGMTRGWCDPDTGZRLATHFYJXROJENTHIC");

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
    msg.setTimeStamp(0.695408349004);
    msg.setSource(52245U);
    msg.setSourceEntity(134U);
    msg.setDestination(61060U);
    msg.setDestinationEntity(41U);
    msg.actions.assign("VCMKPASKLLJTDMJCBFOVOCHXUJZAEOLDRTLUYJVPWAOXVWTWYKBYQEDJHNPOJARLVZYXFUVPAYZCRISHUTSHNIBPXATAUAMCJVGSSGXFZFUXFDSZRLNOSLXQIRNIHMQBQPWGPDQKVKUPNJCDUINTWOKRYQQOWZTKCUMGXEECKFQBNPZAEEPDLOGGWNDZFTS");

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
    msg.setTimeStamp(0.264699536174);
    msg.setSource(17214U);
    msg.setSourceEntity(150U);
    msg.setDestination(8329U);
    msg.setDestinationEntity(183U);
    msg.button = 40U;
    msg.value = 207U;

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
    msg.setTimeStamp(0.183649253562);
    msg.setSource(37769U);
    msg.setSourceEntity(136U);
    msg.setDestination(3506U);
    msg.setDestinationEntity(119U);
    msg.button = 0U;
    msg.value = 133U;

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
    msg.setTimeStamp(0.569683429575);
    msg.setSource(16749U);
    msg.setSourceEntity(38U);
    msg.setDestination(13290U);
    msg.setDestinationEntity(60U);
    msg.button = 70U;
    msg.value = 244U;

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
    msg.setTimeStamp(0.501291152672);
    msg.setSource(61567U);
    msg.setSourceEntity(93U);
    msg.setDestination(43379U);
    msg.setDestinationEntity(38U);
    msg.op = 126U;
    msg.text.assign("MLHDRFDVWUKOP");

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
    msg.setTimeStamp(0.532310715601);
    msg.setSource(46290U);
    msg.setSourceEntity(71U);
    msg.setDestination(38631U);
    msg.setDestinationEntity(24U);
    msg.op = 158U;
    msg.text.assign("FKXQOAQGWLBXKYUEZKSNTXZJFSLI");

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
    msg.setTimeStamp(0.336825172305);
    msg.setSource(2203U);
    msg.setSourceEntity(236U);
    msg.setDestination(14237U);
    msg.setDestinationEntity(172U);
    msg.op = 83U;
    msg.text.assign("TIBODQUJGDZGOOIZODGVDLBBGRPEHKYSYFSCCHQWBWRZNAVUJXTLTURJYKMUMNZBXUYHMMIWJORAFJJRNKKQTPMGZCBEQVIHZXCBWMVNIRHNYCZYZ");

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
    msg.setTimeStamp(0.693816727581);
    msg.setSource(10404U);
    msg.setSourceEntity(145U);
    msg.setDestination(15766U);
    msg.setDestinationEntity(110U);
    msg.op = 2U;
    msg.time_remain = 0.0208477590435;
    msg.sched_time = 0.12299821775;

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
    msg.setTimeStamp(0.554084019178);
    msg.setSource(22178U);
    msg.setSourceEntity(97U);
    msg.setDestination(29864U);
    msg.setDestinationEntity(192U);
    msg.op = 249U;
    msg.time_remain = 0.158002643302;
    msg.sched_time = 0.133907944923;

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
    msg.setTimeStamp(0.870439363944);
    msg.setSource(5149U);
    msg.setSourceEntity(78U);
    msg.setDestination(56708U);
    msg.setDestinationEntity(160U);
    msg.op = 148U;
    msg.time_remain = 0.0381799070398;
    msg.sched_time = 0.784671138134;

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
    msg.setTimeStamp(0.88519358417);
    msg.setSource(31925U);
    msg.setSourceEntity(49U);
    msg.setDestination(44923U);
    msg.setDestinationEntity(232U);
    msg.name.assign("ZNKAQAIONKYJTRRWJRTWHSMJUNTYHPHZELGSHNFVMAHSGYQFQGUIJACDDUECFVPLBCPTI");
    msg.op = 49U;
    msg.sched_time = 0.486639426886;

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
    msg.setTimeStamp(0.651942324206);
    msg.setSource(46269U);
    msg.setSourceEntity(172U);
    msg.setDestination(32711U);
    msg.setDestinationEntity(37U);
    msg.name.assign("UKHKSVFLUDPIAIVBUUUPQOGDMO");
    msg.op = 62U;
    msg.sched_time = 0.667456383009;

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
    msg.setTimeStamp(0.640185639928);
    msg.setSource(13252U);
    msg.setSourceEntity(190U);
    msg.setDestination(31378U);
    msg.setDestinationEntity(17U);
    msg.name.assign("BBGNSZIAQPHIDMVLZDXMJ");
    msg.op = 104U;
    msg.sched_time = 0.0184693262951;

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
    msg.setTimeStamp(0.377922685049);
    msg.setSource(22756U);
    msg.setSourceEntity(22U);
    msg.setDestination(28008U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.918250614477);
    msg.setSource(55683U);
    msg.setSourceEntity(140U);
    msg.setDestination(12887U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.721024807555);
    msg.setSource(48004U);
    msg.setSourceEntity(38U);
    msg.setDestination(61871U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.393196683488);
    msg.setSource(10303U);
    msg.setSourceEntity(13U);
    msg.setDestination(17536U);
    msg.setDestinationEntity(34U);
    msg.name.assign("GXBXCNTAVIECMWRWDJXIXSCWWTHTGUSCIKHHPWRGLVFHBALXOHOARKBMJSLJJZEBRVMEDQGQUKHTNAVBGIPSMWZEKSXTOCABDUFNQCCVYHXJSAPKOYNRDGZTPLPRXUSRJNYQRZNRUBQCLDQKEOHNDNOQEVGT");
    msg.state = 139U;

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
    msg.setTimeStamp(0.939268746632);
    msg.setSource(55793U);
    msg.setSourceEntity(244U);
    msg.setDestination(11964U);
    msg.setDestinationEntity(88U);
    msg.name.assign("ENEWIFAILJIHGRYIJCTHZKBCFPLYAHMPPSYMKKUEYTXUGBQPRWRAJAPPHQCHACXFTHTCGCUPVSDQJKHDNRNJJLUZVNCSTDZHKZLYWZGWGBPQAIBBSINKQNFAEPGFOSMFRSMEUOFASOTZGIMUMLWEBFXCZVBQJOQOYGMFUVLMOOEDVGIXXNWOJZRETUDJZDWWWYHDJXVMWLIMEVUCVZIRD");
    msg.state = 92U;

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
    msg.setTimeStamp(0.921821718372);
    msg.setSource(53940U);
    msg.setSourceEntity(133U);
    msg.setDestination(35292U);
    msg.setDestinationEntity(105U);
    msg.name.assign("FBGKWYSPAIIYZAJKJBJPAKEHMCLUMO");
    msg.state = 196U;

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
    msg.setTimeStamp(0.847704023387);
    msg.setSource(20678U);
    msg.setSourceEntity(51U);
    msg.setDestination(9465U);
    msg.setDestinationEntity(181U);
    msg.name.assign("NEXLUHSECRUDLFKJTWJTAYHNHSXKLWGYRFKMOSZUDBYJWZEGVYMQKNBBTXAPLKVCXF");
    msg.value = 195U;

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
    msg.setTimeStamp(0.902210373476);
    msg.setSource(16771U);
    msg.setSourceEntity(149U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(231U);
    msg.name.assign("MXEFWNYKATQPRMVNXGPIILOYXJVCNYMKDQPHRJIBUZGRFKVSILZKHMDZROUEJACKJDGCWILXHFJMSOFPREYQUJYPNPYZSRIIAWFNNSLPTEMTTPOJEFHGKXEBUMWSUVGCXHOSBBQRAXJKHUDIRAAGDOYZMNLUTLYKKJUEVDQVHXWUESOXGTCKANDYTWVSQDMIMHTCOFZVFQCWABUQQBSGOVZATGBLBLBFWCIELXSFQTOHEPDRZPZCJNHAB");
    msg.value = 100U;

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
    msg.setTimeStamp(0.0315158670029);
    msg.setSource(56511U);
    msg.setSourceEntity(25U);
    msg.setDestination(17662U);
    msg.setDestinationEntity(106U);
    msg.name.assign("SGEMANTHGVKVMCLBOWZZCWJFHTGRKRIIBJSZBDMYXKLQPJNTBECOGRGYTSRJMPFJMNOZJWAVZOLDNLEWOWSRYIBIKILIHPPRHMXCFNSUGPZLILUVZICEQGEBMXEVHCYODDJDUADHFHUKUPDBKAQELO");
    msg.value = 47U;

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
    msg.setTimeStamp(0.440100234392);
    msg.setSource(44655U);
    msg.setSourceEntity(21U);
    msg.setDestination(19879U);
    msg.setDestinationEntity(12U);
    msg.name.assign("QRFJEJETXIWQVWEJCJCTTGGBHGPVMJJQK");

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
    msg.setTimeStamp(0.27589643839);
    msg.setSource(59653U);
    msg.setSourceEntity(82U);
    msg.setDestination(53111U);
    msg.setDestinationEntity(245U);
    msg.name.assign("NKHJKUQXYRSDRLHHBVDNPYXZEEUCVSWIZACMKERFJOFWGNKVCHHMBEYRPZJMRIIBPWFWLITAFLGNABQFACFLOLERTTRTFRBNICUCEGUOWLXZAVJJTFDAXCBVQAEZEUTHVQSKGGDTSJMSYKAPOYXLPQPMLZHOOHPKRBYXLAPYQIIHYSFJ");

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
    msg.setTimeStamp(0.0267641305647);
    msg.setSource(4140U);
    msg.setSourceEntity(222U);
    msg.setDestination(56748U);
    msg.setDestinationEntity(12U);
    msg.name.assign("HTMIEAVAWEHFMHIWPCRTBXJCUELEBNIKTOESDJGCMQYHPYK");

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
    msg.setTimeStamp(0.330488524001);
    msg.setSource(363U);
    msg.setSourceEntity(54U);
    msg.setDestination(25909U);
    msg.setDestinationEntity(174U);
    msg.name.assign("VFWAPMYQZJUZHXAELRPNHH");
    msg.value = 51U;

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
    msg.setTimeStamp(0.631623640312);
    msg.setSource(26607U);
    msg.setSourceEntity(188U);
    msg.setDestination(20514U);
    msg.setDestinationEntity(187U);
    msg.name.assign("WSWDMNTJBQZYQJTTCACBWLVJSTWYXPPERGPDSURKJRSFHVXKGRIYEOTUAIXKDQROOYVHZWEAOLEGDIDJYPTMXYBCQSSXUVPWPACFPPMNANVPAXOUOSQBIIAGKJZBZZMZFGQYNMXXHBDLBKAWGEHHCYDUXQINRFFHKLWVCQRDMJIZSVMDMLFRVZORJRYXOETKHMHOTPY");
    msg.value = 67U;

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
    msg.setTimeStamp(0.525686277184);
    msg.setSource(48388U);
    msg.setSourceEntity(138U);
    msg.setDestination(49645U);
    msg.setDestinationEntity(121U);
    msg.name.assign("JEGJYKGUMATANXUBWKGKVMRDPWVGCJZGNWTDXCHCQLKOZTYYDQXTBLC");
    msg.value = 104U;

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
    msg.setTimeStamp(0.817226781203);
    msg.setSource(36478U);
    msg.setSourceEntity(207U);
    msg.setDestination(40551U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.475909439024;
    msg.lon = 0.478756822174;
    msg.height = 0.190944019216;
    msg.x = 0.836110031716;
    msg.y = 0.134556781664;
    msg.z = 0.0234588161772;
    msg.phi = 0.864023966442;
    msg.theta = 0.266901870959;
    msg.psi = 0.808897415534;
    msg.u = 0.625816915858;
    msg.v = 0.963785446437;
    msg.w = 0.238677989231;
    msg.vx = 0.272676137533;
    msg.vy = 0.420793084701;
    msg.vz = 0.721905600322;
    msg.p = 0.222268506204;
    msg.q = 0.866552981824;
    msg.r = 0.822938569622;
    msg.depth = 0.629166971424;
    msg.alt = 0.413722588769;

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
    msg.setTimeStamp(0.177797868773);
    msg.setSource(26199U);
    msg.setSourceEntity(199U);
    msg.setDestination(38556U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.196813603449;
    msg.lon = 0.437187510545;
    msg.height = 0.297514777536;
    msg.x = 0.857911154665;
    msg.y = 0.163643802512;
    msg.z = 0.326917810095;
    msg.phi = 0.710267844167;
    msg.theta = 0.745897132787;
    msg.psi = 0.547943596494;
    msg.u = 0.34915015037;
    msg.v = 0.788184039173;
    msg.w = 0.472001774608;
    msg.vx = 0.840251700573;
    msg.vy = 0.243283875805;
    msg.vz = 0.95950643936;
    msg.p = 0.13905192116;
    msg.q = 0.539531490934;
    msg.r = 0.143831763915;
    msg.depth = 0.65035323551;
    msg.alt = 0.126717820091;

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
    msg.setTimeStamp(0.821801778841);
    msg.setSource(53012U);
    msg.setSourceEntity(142U);
    msg.setDestination(20863U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.184761412825;
    msg.lon = 0.286087226506;
    msg.height = 0.187226692933;
    msg.x = 0.816895349765;
    msg.y = 0.984910962356;
    msg.z = 0.539756369551;
    msg.phi = 0.281274721172;
    msg.theta = 0.148055748215;
    msg.psi = 0.698752027822;
    msg.u = 0.745727512978;
    msg.v = 0.337872755233;
    msg.w = 0.875143056911;
    msg.vx = 0.572991906008;
    msg.vy = 0.315155490777;
    msg.vz = 0.722881522621;
    msg.p = 0.055288105586;
    msg.q = 0.820638708444;
    msg.r = 0.244993596431;
    msg.depth = 0.908794022755;
    msg.alt = 0.873817293979;

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
    msg.setTimeStamp(0.385357426339);
    msg.setSource(62798U);
    msg.setSourceEntity(166U);
    msg.setDestination(2679U);
    msg.setDestinationEntity(161U);
    msg.x = 0.0849042257753;
    msg.y = 0.798024955137;
    msg.z = 0.0288275667146;

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
    msg.setTimeStamp(0.1674377378);
    msg.setSource(41528U);
    msg.setSourceEntity(72U);
    msg.setDestination(20685U);
    msg.setDestinationEntity(214U);
    msg.x = 0.158519024878;
    msg.y = 0.0739652388755;
    msg.z = 0.608510676626;

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
    msg.setTimeStamp(0.578084999878);
    msg.setSource(20600U);
    msg.setSourceEntity(115U);
    msg.setDestination(4628U);
    msg.setDestinationEntity(188U);
    msg.x = 0.993969114165;
    msg.y = 0.974202928899;
    msg.z = 0.418945912872;

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
    msg.setTimeStamp(0.862694956337);
    msg.setSource(4489U);
    msg.setSourceEntity(107U);
    msg.setDestination(49824U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0926336833138;

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
    msg.setTimeStamp(0.151553177699);
    msg.setSource(31132U);
    msg.setSourceEntity(151U);
    msg.setDestination(18467U);
    msg.setDestinationEntity(157U);
    msg.value = 0.253309305462;

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
    msg.setTimeStamp(0.651725495656);
    msg.setSource(53044U);
    msg.setSourceEntity(32U);
    msg.setDestination(29327U);
    msg.setDestinationEntity(172U);
    msg.value = 0.941722149211;

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
    msg.setTimeStamp(0.98388901056);
    msg.setSource(37456U);
    msg.setSourceEntity(103U);
    msg.setDestination(3086U);
    msg.setDestinationEntity(62U);
    msg.value = 0.321526920003;

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
    msg.setTimeStamp(0.755388439999);
    msg.setSource(57091U);
    msg.setSourceEntity(7U);
    msg.setDestination(58461U);
    msg.setDestinationEntity(144U);
    msg.value = 0.879081866021;

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
    msg.setTimeStamp(0.974361363779);
    msg.setSource(51250U);
    msg.setSourceEntity(160U);
    msg.setDestination(30515U);
    msg.setDestinationEntity(230U);
    msg.value = 0.141488367255;

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
    msg.setTimeStamp(0.9531242562);
    msg.setSource(54489U);
    msg.setSourceEntity(245U);
    msg.setDestination(42845U);
    msg.setDestinationEntity(48U);
    msg.x = 0.838053214231;
    msg.y = 0.862270244198;
    msg.z = 0.31445644842;
    msg.phi = 0.163700665359;
    msg.theta = 0.273994238922;
    msg.psi = 0.477327603594;
    msg.p = 0.238256013963;
    msg.q = 0.346806129298;
    msg.r = 0.907968573741;
    msg.u = 0.479045663204;
    msg.v = 0.451833922286;
    msg.w = 0.288932741963;
    msg.bias_psi = 0.831217553143;
    msg.bias_r = 0.522870515085;

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
    msg.setTimeStamp(0.911230718111);
    msg.setSource(41599U);
    msg.setSourceEntity(252U);
    msg.setDestination(2356U);
    msg.setDestinationEntity(20U);
    msg.x = 0.222718227193;
    msg.y = 0.133038369277;
    msg.z = 0.0451625850161;
    msg.phi = 0.952662565634;
    msg.theta = 0.415663871556;
    msg.psi = 0.720870707793;
    msg.p = 0.266034294235;
    msg.q = 0.113607560514;
    msg.r = 0.129161157541;
    msg.u = 0.970205565808;
    msg.v = 0.518433802155;
    msg.w = 0.920006360907;
    msg.bias_psi = 0.0282109544137;
    msg.bias_r = 0.862254096558;

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
    msg.setTimeStamp(0.836961462632);
    msg.setSource(59757U);
    msg.setSourceEntity(74U);
    msg.setDestination(60314U);
    msg.setDestinationEntity(214U);
    msg.x = 0.449937651834;
    msg.y = 0.576100225178;
    msg.z = 0.318488068989;
    msg.phi = 0.826566124851;
    msg.theta = 0.261947403331;
    msg.psi = 0.383910166748;
    msg.p = 0.122344207726;
    msg.q = 0.540733061428;
    msg.r = 0.578709626378;
    msg.u = 0.62491807329;
    msg.v = 0.714545358949;
    msg.w = 0.456863559382;
    msg.bias_psi = 0.0500773232871;
    msg.bias_r = 0.929482501022;

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
    msg.setTimeStamp(0.189670968407);
    msg.setSource(9861U);
    msg.setSourceEntity(110U);
    msg.setDestination(21405U);
    msg.setDestinationEntity(81U);
    msg.bias_psi = 0.494045665839;
    msg.bias_r = 0.0659466503718;
    msg.cog = 0.111060205472;
    msg.cyaw = 0.204198743791;
    msg.lbl_rej_level = 0.620810957733;
    msg.gps_rej_level = 0.317033955078;
    msg.custom_x = 0.885630609611;
    msg.custom_y = 0.243130287028;
    msg.custom_z = 0.366494220576;

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
    msg.setTimeStamp(0.646916994294);
    msg.setSource(41437U);
    msg.setSourceEntity(15U);
    msg.setDestination(7556U);
    msg.setDestinationEntity(162U);
    msg.bias_psi = 0.559696661902;
    msg.bias_r = 0.964760061231;
    msg.cog = 0.574757060754;
    msg.cyaw = 0.415571102122;
    msg.lbl_rej_level = 0.994513820684;
    msg.gps_rej_level = 0.682811109625;
    msg.custom_x = 0.907121868755;
    msg.custom_y = 0.121653029025;
    msg.custom_z = 0.657176150298;

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
    msg.setTimeStamp(0.434587736019);
    msg.setSource(49034U);
    msg.setSourceEntity(48U);
    msg.setDestination(40998U);
    msg.setDestinationEntity(135U);
    msg.bias_psi = 0.233740184377;
    msg.bias_r = 0.172747564863;
    msg.cog = 0.812649768797;
    msg.cyaw = 0.779873257146;
    msg.lbl_rej_level = 0.262906364646;
    msg.gps_rej_level = 0.347227050942;
    msg.custom_x = 0.162920251003;
    msg.custom_y = 0.38713594193;
    msg.custom_z = 0.32691265338;

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
    msg.setTimeStamp(0.396911259302);
    msg.setSource(55562U);
    msg.setSourceEntity(131U);
    msg.setDestination(42583U);
    msg.setDestinationEntity(188U);
    msg.utc_time = 0.501627200368;
    msg.reason = 30U;

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
    msg.setTimeStamp(0.3049171389);
    msg.setSource(8029U);
    msg.setSourceEntity(84U);
    msg.setDestination(38855U);
    msg.setDestinationEntity(111U);
    msg.utc_time = 0.510116918889;
    msg.reason = 82U;

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
    msg.setTimeStamp(0.0447624590404);
    msg.setSource(20339U);
    msg.setSourceEntity(66U);
    msg.setDestination(55264U);
    msg.setDestinationEntity(137U);
    msg.utc_time = 0.288107018737;
    msg.reason = 136U;

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
    msg.setTimeStamp(0.906492702334);
    msg.setSource(43650U);
    msg.setSourceEntity(8U);
    msg.setDestination(42602U);
    msg.setDestinationEntity(213U);
    msg.id = 113U;
    msg.range = 0.140124728883;
    msg.acceptance = 133U;

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
    msg.setTimeStamp(0.346560460864);
    msg.setSource(20526U);
    msg.setSourceEntity(41U);
    msg.setDestination(19785U);
    msg.setDestinationEntity(91U);
    msg.id = 17U;
    msg.range = 0.388059150453;
    msg.acceptance = 18U;

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
    msg.setTimeStamp(0.142911175481);
    msg.setSource(59713U);
    msg.setSourceEntity(138U);
    msg.setDestination(37941U);
    msg.setDestinationEntity(104U);
    msg.id = 108U;
    msg.range = 0.0559452414929;
    msg.acceptance = 204U;

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
    msg.setTimeStamp(0.486589486499);
    msg.setSource(46311U);
    msg.setSourceEntity(163U);
    msg.setDestination(32175U);
    msg.setDestinationEntity(170U);
    msg.type = 153U;
    msg.reason = 57U;
    msg.value = 0.349343924179;
    msg.timestep = 0.489402510195;

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
    msg.setTimeStamp(0.984255877803);
    msg.setSource(16713U);
    msg.setSourceEntity(253U);
    msg.setDestination(32397U);
    msg.setDestinationEntity(254U);
    msg.type = 238U;
    msg.reason = 68U;
    msg.value = 0.210461859067;
    msg.timestep = 0.191010963997;

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
    msg.setTimeStamp(0.131942881625);
    msg.setSource(13404U);
    msg.setSourceEntity(242U);
    msg.setDestination(17236U);
    msg.setDestinationEntity(187U);
    msg.type = 65U;
    msg.reason = 127U;
    msg.value = 0.480310415052;
    msg.timestep = 0.839657787298;

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
    msg.setTimeStamp(0.274706981235);
    msg.setSource(58405U);
    msg.setSourceEntity(25U);
    msg.setDestination(39956U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.363594503405);
    msg.setSource(13796U);
    msg.setSourceEntity(131U);
    msg.setDestination(34091U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.382730449617);
    msg.setSource(37029U);
    msg.setSourceEntity(122U);
    msg.setDestination(60403U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.96071705468);
    msg.setSource(9415U);
    msg.setSourceEntity(184U);
    msg.setDestination(56132U);
    msg.setDestinationEntity(197U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BHKNXBDSZL");
    tmp_msg_0.lat = 0.127550170153;
    tmp_msg_0.lon = 0.132632090546;
    tmp_msg_0.depth = 0.158054829512;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 40U;
    tmp_msg_0.transponder_delay = 113U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.914730438611;
    msg.y = 0.394977124301;
    msg.var_x = 0.68840447374;
    msg.var_y = 0.65446714057;
    msg.distance = 0.568950552465;

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
    msg.setTimeStamp(0.0691428797575);
    msg.setSource(17834U);
    msg.setSourceEntity(4U);
    msg.setDestination(40244U);
    msg.setDestinationEntity(78U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BWDPOLPWANSFTZNYHMRCTQYLRETDQZJHZZNVIOCMGWSWMLKDMBGFQDSKEGOGPQXMNFGYBSIRLGAXAIUJEDPELMSUFFJAGRTATXOXYIGJHIUKQFJVUYBPXWVNUKCCCZOHXQGHAPBRNCTABESEVDLYHECTKYVKRKUMSI");
    tmp_msg_0.lat = 0.061746911501;
    tmp_msg_0.lon = 0.102493293091;
    tmp_msg_0.depth = 0.785700498678;
    tmp_msg_0.query_channel = 114U;
    tmp_msg_0.reply_channel = 71U;
    tmp_msg_0.transponder_delay = 86U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.696566180832;
    msg.y = 0.387504545721;
    msg.var_x = 0.84765254458;
    msg.var_y = 0.654583236512;
    msg.distance = 0.705061003625;

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
    msg.setTimeStamp(0.104977485645);
    msg.setSource(6580U);
    msg.setSourceEntity(97U);
    msg.setDestination(43585U);
    msg.setDestinationEntity(156U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HLFXEWQRHXHXZTRULGKGLUTIUWQGGTNDBHYQMZJOPEKFWWLAAFIYZYZXLKJSQUJLJMCCMIJMIKAQDKSPPMQOBFHYDYVAUINMAWLFFJIUHXSDCXWGKEIZBSTHZSGPQUZR");
    tmp_msg_0.lat = 0.336079742455;
    tmp_msg_0.lon = 0.57749626623;
    tmp_msg_0.depth = 0.88840492583;
    tmp_msg_0.query_channel = 97U;
    tmp_msg_0.reply_channel = 29U;
    tmp_msg_0.transponder_delay = 186U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.357261993532;
    msg.y = 0.935648810376;
    msg.var_x = 0.186408254931;
    msg.var_y = 0.457986227082;
    msg.distance = 0.420890374253;

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
    msg.setTimeStamp(0.440139082165);
    msg.setSource(46396U);
    msg.setSourceEntity(52U);
    msg.setDestination(35906U);
    msg.setDestinationEntity(226U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.132135988438);
    msg.setSource(19623U);
    msg.setSourceEntity(132U);
    msg.setDestination(34227U);
    msg.setDestinationEntity(190U);
    msg.state = 62U;

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
    msg.setTimeStamp(0.782070431018);
    msg.setSource(46311U);
    msg.setSourceEntity(84U);
    msg.setDestination(9938U);
    msg.setDestinationEntity(204U);
    msg.state = 215U;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.581405945634);
    msg.setSource(59532U);
    msg.setSourceEntity(138U);
    msg.setDestination(19426U);
    msg.setDestinationEntity(134U);
    msg.value = 0.402529166257;

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
    msg.setTimeStamp(0.793266829791);
    msg.setSource(64635U);
    msg.setSourceEntity(36U);
    msg.setDestination(60453U);
    msg.setDestinationEntity(143U);
    msg.value = 0.980795946657;

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
    msg.setTimeStamp(0.726116021754);
    msg.setSource(10989U);
    msg.setSourceEntity(179U);
    msg.setDestination(2537U);
    msg.setDestinationEntity(144U);
    msg.value = 0.661430735318;

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
    msg.setTimeStamp(0.103042183963);
    msg.setSource(28464U);
    msg.setSourceEntity(244U);
    msg.setDestination(13415U);
    msg.setDestinationEntity(38U);
    msg.value = 0.718949451086;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.167768109233);
    msg.setSource(27660U);
    msg.setSourceEntity(166U);
    msg.setDestination(53850U);
    msg.setDestinationEntity(195U);
    msg.value = 0.603346693277;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.014183025007);
    msg.setSource(4205U);
    msg.setSourceEntity(107U);
    msg.setDestination(25024U);
    msg.setDestinationEntity(68U);
    msg.value = 0.90143117932;
    msg.z_units = 77U;

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
    msg.setTimeStamp(0.560581409381);
    msg.setSource(65233U);
    msg.setSourceEntity(76U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(242U);
    msg.value = 0.239781516541;
    msg.speed_units = 76U;

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
    msg.setTimeStamp(0.946345835917);
    msg.setSource(10397U);
    msg.setSourceEntity(133U);
    msg.setDestination(3625U);
    msg.setDestinationEntity(66U);
    msg.value = 0.626348905075;
    msg.speed_units = 101U;

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
    msg.setTimeStamp(0.532679434446);
    msg.setSource(10435U);
    msg.setSourceEntity(30U);
    msg.setDestination(16801U);
    msg.setDestinationEntity(124U);
    msg.value = 0.868526768186;
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
    msg.setTimeStamp(0.478472188939);
    msg.setSource(39607U);
    msg.setSourceEntity(170U);
    msg.setDestination(24796U);
    msg.setDestinationEntity(65U);
    msg.value = 0.236736009666;

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
    msg.setTimeStamp(0.00478220522949);
    msg.setSource(5091U);
    msg.setSourceEntity(90U);
    msg.setDestination(37731U);
    msg.setDestinationEntity(26U);
    msg.value = 0.403970242182;

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
    msg.setTimeStamp(0.399922719879);
    msg.setSource(61688U);
    msg.setSourceEntity(243U);
    msg.setDestination(43220U);
    msg.setDestinationEntity(17U);
    msg.value = 0.669938957549;

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
    msg.setTimeStamp(0.24205598624);
    msg.setSource(29622U);
    msg.setSourceEntity(136U);
    msg.setDestination(62246U);
    msg.setDestinationEntity(88U);
    msg.value = 0.843709702533;

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
    msg.setTimeStamp(0.582779541788);
    msg.setSource(28757U);
    msg.setSourceEntity(1U);
    msg.setDestination(32796U);
    msg.setDestinationEntity(131U);
    msg.value = 0.444787133604;

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
    msg.setTimeStamp(0.906996529605);
    msg.setSource(53815U);
    msg.setSourceEntity(111U);
    msg.setDestination(35510U);
    msg.setDestinationEntity(79U);
    msg.value = 0.858528440817;

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
    msg.setTimeStamp(0.478272677268);
    msg.setSource(9482U);
    msg.setSourceEntity(201U);
    msg.setDestination(49092U);
    msg.setDestinationEntity(55U);
    msg.value = 0.479549278084;

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
    msg.setTimeStamp(0.32223958049);
    msg.setSource(20792U);
    msg.setSourceEntity(240U);
    msg.setDestination(45294U);
    msg.setDestinationEntity(81U);
    msg.value = 0.671463275208;

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
    msg.setTimeStamp(0.754203856074);
    msg.setSource(21735U);
    msg.setSourceEntity(232U);
    msg.setDestination(42729U);
    msg.setDestinationEntity(190U);
    msg.value = 0.691689641832;

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
    msg.setTimeStamp(0.715695639591);
    msg.setSource(55330U);
    msg.setSourceEntity(194U);
    msg.setDestination(39543U);
    msg.setDestinationEntity(39U);
    msg.start_lat = 0.86812975968;
    msg.start_lon = 0.209706158645;
    msg.start_z = 0.563049198937;
    msg.start_z_units = 78U;
    msg.end_lat = 0.124850023718;
    msg.end_lon = 0.525843666681;
    msg.end_z = 0.406420537805;
    msg.end_z_units = 9U;
    msg.speed = 0.905421886614;
    msg.speed_units = 238U;
    msg.lradius = 0.826523356636;
    msg.flags = 237U;

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
    msg.setTimeStamp(0.230678403072);
    msg.setSource(30788U);
    msg.setSourceEntity(2U);
    msg.setDestination(8145U);
    msg.setDestinationEntity(66U);
    msg.start_lat = 0.141669383621;
    msg.start_lon = 0.44864732831;
    msg.start_z = 0.194853759551;
    msg.start_z_units = 48U;
    msg.end_lat = 0.0163652473099;
    msg.end_lon = 0.935828739422;
    msg.end_z = 0.872037485696;
    msg.end_z_units = 48U;
    msg.speed = 0.594502838477;
    msg.speed_units = 162U;
    msg.lradius = 0.180318955027;
    msg.flags = 116U;

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
    msg.setTimeStamp(0.296136174107);
    msg.setSource(2043U);
    msg.setSourceEntity(30U);
    msg.setDestination(20696U);
    msg.setDestinationEntity(126U);
    msg.start_lat = 0.0239086767702;
    msg.start_lon = 0.726468893968;
    msg.start_z = 0.934498385882;
    msg.start_z_units = 93U;
    msg.end_lat = 0.31953848855;
    msg.end_lon = 0.0437944153616;
    msg.end_z = 0.396326297373;
    msg.end_z_units = 42U;
    msg.speed = 0.201895262453;
    msg.speed_units = 68U;
    msg.lradius = 0.0870886421013;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.305779557838);
    msg.setSource(56897U);
    msg.setSourceEntity(21U);
    msg.setDestination(53964U);
    msg.setDestinationEntity(193U);
    msg.x = 0.806062562845;
    msg.y = 0.343002811843;
    msg.z = 0.48190761699;
    msg.k = 0.331488529534;
    msg.m = 0.372410210636;
    msg.n = 0.181708072008;
    msg.flags = 33U;

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
    msg.setTimeStamp(0.366390534875);
    msg.setSource(27601U);
    msg.setSourceEntity(58U);
    msg.setDestination(21198U);
    msg.setDestinationEntity(24U);
    msg.x = 0.76557616513;
    msg.y = 0.1124131793;
    msg.z = 0.557671053326;
    msg.k = 0.213260600313;
    msg.m = 0.290802502767;
    msg.n = 0.371098049216;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.694098739815);
    msg.setSource(15217U);
    msg.setSourceEntity(211U);
    msg.setDestination(5300U);
    msg.setDestinationEntity(34U);
    msg.x = 0.983694106678;
    msg.y = 0.581610817733;
    msg.z = 0.962669901727;
    msg.k = 0.205713287424;
    msg.m = 0.993566438348;
    msg.n = 0.151867012268;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.131477860716);
    msg.setSource(47340U);
    msg.setSourceEntity(150U);
    msg.setDestination(42571U);
    msg.setDestinationEntity(107U);
    msg.value = 0.69810980169;

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
    msg.setTimeStamp(0.703443930844);
    msg.setSource(32809U);
    msg.setSourceEntity(100U);
    msg.setDestination(42849U);
    msg.setDestinationEntity(52U);
    msg.value = 0.352840320365;

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
    msg.setTimeStamp(0.628991786384);
    msg.setSource(1215U);
    msg.setSourceEntity(21U);
    msg.setDestination(14372U);
    msg.setDestinationEntity(195U);
    msg.value = 0.764279258037;

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
    msg.setTimeStamp(0.621392945678);
    msg.setSource(16978U);
    msg.setSourceEntity(229U);
    msg.setDestination(42747U);
    msg.setDestinationEntity(174U);
    msg.u = 0.0174159429276;
    msg.v = 0.98567497603;
    msg.w = 0.425874281292;
    msg.p = 0.374502371537;
    msg.q = 0.480853055455;
    msg.r = 0.593254503344;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.35061172659);
    msg.setSource(17550U);
    msg.setSourceEntity(123U);
    msg.setDestination(9022U);
    msg.setDestinationEntity(216U);
    msg.u = 0.311744125779;
    msg.v = 0.548270641617;
    msg.w = 0.972962755433;
    msg.p = 0.823569912435;
    msg.q = 0.149870007815;
    msg.r = 0.258658893692;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.267225335348);
    msg.setSource(13711U);
    msg.setSourceEntity(29U);
    msg.setDestination(19914U);
    msg.setDestinationEntity(104U);
    msg.u = 0.976220345693;
    msg.v = 0.644742650674;
    msg.w = 0.45824005789;
    msg.p = 0.544957869501;
    msg.q = 0.279232194818;
    msg.r = 0.777027319052;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.854548524978);
    msg.setSource(18501U);
    msg.setSourceEntity(114U);
    msg.setDestination(37376U);
    msg.setDestinationEntity(192U);
    msg.start_lat = 0.831434128448;
    msg.start_lon = 0.533617554529;
    msg.start_z = 0.619871222636;
    msg.start_z_units = 2U;
    msg.end_lat = 0.919707982012;
    msg.end_lon = 0.369167107915;
    msg.end_z = 0.197148530748;
    msg.end_z_units = 57U;
    msg.lradius = 0.527845146111;
    msg.flags = 34U;
    msg.x = 0.0881447155364;
    msg.y = 0.98944416621;
    msg.z = 0.0371415929642;
    msg.vx = 0.950570609057;
    msg.vy = 0.4437197972;
    msg.vz = 0.2463211798;
    msg.course_error = 0.837534086944;
    msg.eta = 28508U;

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
    msg.setTimeStamp(0.372256290389);
    msg.setSource(57322U);
    msg.setSourceEntity(98U);
    msg.setDestination(15264U);
    msg.setDestinationEntity(91U);
    msg.start_lat = 0.326222057361;
    msg.start_lon = 0.0723496065388;
    msg.start_z = 0.890176142753;
    msg.start_z_units = 190U;
    msg.end_lat = 0.436263018671;
    msg.end_lon = 0.24037685222;
    msg.end_z = 0.951328758787;
    msg.end_z_units = 150U;
    msg.lradius = 0.294268322973;
    msg.flags = 192U;
    msg.x = 0.240319728785;
    msg.y = 0.250111348561;
    msg.z = 0.479134545327;
    msg.vx = 0.709382341325;
    msg.vy = 0.084185592696;
    msg.vz = 0.660684693108;
    msg.course_error = 0.581387716888;
    msg.eta = 21576U;

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
    msg.setTimeStamp(0.486570848326);
    msg.setSource(4067U);
    msg.setSourceEntity(184U);
    msg.setDestination(15992U);
    msg.setDestinationEntity(231U);
    msg.start_lat = 0.0573382647792;
    msg.start_lon = 0.376688778881;
    msg.start_z = 0.530589582709;
    msg.start_z_units = 233U;
    msg.end_lat = 0.555504632589;
    msg.end_lon = 0.585281806566;
    msg.end_z = 0.429146091365;
    msg.end_z_units = 232U;
    msg.lradius = 0.903552576794;
    msg.flags = 179U;
    msg.x = 0.564398688767;
    msg.y = 0.379890186363;
    msg.z = 0.219341022999;
    msg.vx = 0.273616140148;
    msg.vy = 0.147557409309;
    msg.vz = 0.124839838457;
    msg.course_error = 0.309060292205;
    msg.eta = 51573U;

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
    msg.setTimeStamp(0.575641856002);
    msg.setSource(23987U);
    msg.setSourceEntity(190U);
    msg.setDestination(34310U);
    msg.setDestinationEntity(246U);
    msg.k = 0.97800487693;
    msg.m = 0.299455190199;
    msg.n = 0.640419103416;

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
    msg.setTimeStamp(0.136833665746);
    msg.setSource(35310U);
    msg.setSourceEntity(90U);
    msg.setDestination(54078U);
    msg.setDestinationEntity(104U);
    msg.k = 0.73295118284;
    msg.m = 0.127722778283;
    msg.n = 0.212275368562;

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
    msg.setTimeStamp(0.223638789998);
    msg.setSource(22908U);
    msg.setSourceEntity(188U);
    msg.setDestination(29388U);
    msg.setDestinationEntity(132U);
    msg.k = 0.845305225502;
    msg.m = 0.544118361967;
    msg.n = 0.596335948621;

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
    msg.setTimeStamp(0.496284175793);
    msg.setSource(32710U);
    msg.setSourceEntity(75U);
    msg.setDestination(3069U);
    msg.setDestinationEntity(65U);
    msg.p = 0.481359288692;
    msg.i = 0.818868713104;
    msg.d = 0.528460160461;
    msg.a = 0.286236375926;

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
    msg.setTimeStamp(0.648448319959);
    msg.setSource(60475U);
    msg.setSourceEntity(94U);
    msg.setDestination(8903U);
    msg.setDestinationEntity(224U);
    msg.p = 0.451373216365;
    msg.i = 0.239995115776;
    msg.d = 0.0237812500677;
    msg.a = 0.339350040744;

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
    msg.setTimeStamp(0.987138536423);
    msg.setSource(23704U);
    msg.setSourceEntity(108U);
    msg.setDestination(41282U);
    msg.setDestinationEntity(29U);
    msg.p = 0.0569933016848;
    msg.i = 0.434964230161;
    msg.d = 0.554687449698;
    msg.a = 0.822876832322;

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
    msg.setTimeStamp(0.970741420675);
    msg.setSource(14746U);
    msg.setSourceEntity(12U);
    msg.setDestination(14009U);
    msg.setDestinationEntity(135U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.375906177395);
    msg.setSource(63726U);
    msg.setSourceEntity(79U);
    msg.setDestination(33124U);
    msg.setDestinationEntity(3U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.987230945313);
    msg.setSource(3827U);
    msg.setSourceEntity(72U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(67U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.511890784624);
    msg.setSource(10488U);
    msg.setSourceEntity(149U);
    msg.setDestination(61593U);
    msg.setDestinationEntity(58U);
    msg.timeout = 48070U;
    msg.lat = 0.629435383719;
    msg.lon = 0.280415778609;
    msg.z = 0.769157568357;
    msg.z_units = 88U;
    msg.speed = 0.281234115897;
    msg.speed_units = 101U;
    msg.roll = 0.502993313321;
    msg.pitch = 0.291190016562;
    msg.yaw = 0.141905393432;
    msg.custom.assign("QZEFSWPGRMSXXKMNAXPNNDWDFHHJKY");

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
    msg.setTimeStamp(0.728988079781);
    msg.setSource(15224U);
    msg.setSourceEntity(58U);
    msg.setDestination(64453U);
    msg.setDestinationEntity(127U);
    msg.timeout = 54467U;
    msg.lat = 0.790607369501;
    msg.lon = 0.961633106811;
    msg.z = 0.5307332233;
    msg.z_units = 122U;
    msg.speed = 0.312208875913;
    msg.speed_units = 128U;
    msg.roll = 0.209518563644;
    msg.pitch = 0.926645040085;
    msg.yaw = 0.8422838477;
    msg.custom.assign("IZOKUTAWFVKEGAPJUYHCAPOUIOXBVIMZAGVGBZPNUUFUEHSQFQODNBJMLTEFKDCZFMOIRQJIMBUOYWNLXMQDCTRTDAHIRCPENAGV");

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
    msg.setTimeStamp(0.160543627396);
    msg.setSource(13347U);
    msg.setSourceEntity(204U);
    msg.setDestination(41187U);
    msg.setDestinationEntity(136U);
    msg.timeout = 13744U;
    msg.lat = 0.118646882608;
    msg.lon = 0.476417066141;
    msg.z = 0.596805436381;
    msg.z_units = 153U;
    msg.speed = 0.0743493037483;
    msg.speed_units = 11U;
    msg.roll = 0.254347149774;
    msg.pitch = 0.831671476557;
    msg.yaw = 0.730182666228;
    msg.custom.assign("EBVYREAPEIKTCICIWYRYGHNNGKHWEGXODKRWMMDGZMFIXVCBUNLQJQPVQSXPTFWEJPTGTZMXLPJQWURRLUVIACCZSYUEDWZSOXAPMKTFZVIHORVGTRNDWEDZRWNPSOJXSIHEQAJBAGVGIQHBXEWHBJIKUPMGYLSABASBMMRKYTHOUFDLDNQKAJKQTSVSUJFPZAOMFLNTNCNAWNZSVFJFXD");

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
    msg.setTimeStamp(0.890199921253);
    msg.setSource(12722U);
    msg.setSourceEntity(71U);
    msg.setDestination(3701U);
    msg.setDestinationEntity(252U);
    msg.timeout = 64004U;
    msg.lat = 0.889301362732;
    msg.lon = 0.124762724667;
    msg.z = 0.212989963118;
    msg.z_units = 202U;
    msg.speed = 0.159889619498;
    msg.speed_units = 44U;
    msg.duration = 47559U;
    msg.radius = 0.982366403797;
    msg.flags = 159U;
    msg.custom.assign("QZXRHYAKBSYEGRXSJDLTLKCHYZEOZUHBFQIWLIOAGPYRHMFRTNVNQCTBMKHOUXJQLNPMTVZXZ");

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
    msg.setTimeStamp(0.730375165385);
    msg.setSource(14928U);
    msg.setSourceEntity(21U);
    msg.setDestination(58811U);
    msg.setDestinationEntity(82U);
    msg.timeout = 11880U;
    msg.lat = 0.00769951843796;
    msg.lon = 0.279634928749;
    msg.z = 0.125958184921;
    msg.z_units = 145U;
    msg.speed = 0.105241198056;
    msg.speed_units = 28U;
    msg.duration = 53317U;
    msg.radius = 0.933395112167;
    msg.flags = 234U;
    msg.custom.assign("JXEEYHXDLAHFRMWGIFAEGKOPRFVGJMSCSGGBUZNQQKNRMRTDMDZOHYQRKMUHQOLVCAOPVXSIATIQDHEXNPT");

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
    msg.setTimeStamp(0.204930149235);
    msg.setSource(33285U);
    msg.setSourceEntity(213U);
    msg.setDestination(39768U);
    msg.setDestinationEntity(54U);
    msg.timeout = 2260U;
    msg.lat = 0.65542950882;
    msg.lon = 0.466959773314;
    msg.z = 0.662223265819;
    msg.z_units = 190U;
    msg.speed = 0.23850430582;
    msg.speed_units = 12U;
    msg.duration = 4214U;
    msg.radius = 0.33441284408;
    msg.flags = 197U;
    msg.custom.assign("QMNPDGVPOZTVBHZXNGIPVHUXFQGRYKBTAJFDXETRWFIZMYWHJHZLJQQSQJGYAICCSRKOTUDODBYDOYRDTLKLCYOYRZBXMKINORTMNJORXEQWBHSLIZLSSJVKPVJFPXBEANCINKUIMPPQFZSEJKFFICYCCS");

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
    msg.setTimeStamp(0.355341857043);
    msg.setSource(9060U);
    msg.setSourceEntity(122U);
    msg.setDestination(46810U);
    msg.setDestinationEntity(44U);
    msg.custom.assign("XSFDPNYCAZUTEOVSPEWDLNQCLOHBTEFCHLRDBWSPMGABMKJSAACNTFTYMLWYYWVIBDQGLPTUPDGJBVDDEKZWCJRUQVKZMXZXULFVMWZAROIIFBTYHHPTAGKQWJRWCIMXNNMKDPSNOJRZQZSRNKQCJTIUGHFUHGWAXCARSGSAQBUKQTWLUPKYMRPJEFZCMYSXHZGGKHKVSVJBLNIOQVFBTHRX");

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
    msg.setTimeStamp(0.165180255342);
    msg.setSource(47792U);
    msg.setSourceEntity(231U);
    msg.setDestination(17131U);
    msg.setDestinationEntity(118U);
    msg.custom.assign("DOWCFGAQGIBSYMHZSOTCQTQVTEUUNREQEZCPDPPVJYS");

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
    msg.setTimeStamp(0.731666200468);
    msg.setSource(23504U);
    msg.setSourceEntity(230U);
    msg.setDestination(11181U);
    msg.setDestinationEntity(82U);
    msg.custom.assign("YRFHOCQHVXPBVDDYVJAS");

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
    msg.setTimeStamp(0.778596281678);
    msg.setSource(28379U);
    msg.setSourceEntity(110U);
    msg.setDestination(33236U);
    msg.setDestinationEntity(3U);
    msg.timeout = 22453U;
    msg.lat = 0.865389518681;
    msg.lon = 0.725883594816;
    msg.z = 0.597468788972;
    msg.z_units = 239U;
    msg.duration = 56384U;
    msg.speed = 0.285558274948;
    msg.speed_units = 215U;
    msg.type = 32U;
    msg.radius = 0.357059393055;
    msg.length = 0.898110757819;
    msg.bearing = 0.0662085919599;
    msg.direction = 50U;
    msg.custom.assign("GBNFCTKLISZXCMUAGABCTWNRCOGDAOCAQRSUMFNELFAGSGRXLYHHZUXQYBYA");

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
    msg.setTimeStamp(0.409584947693);
    msg.setSource(25896U);
    msg.setSourceEntity(251U);
    msg.setDestination(55098U);
    msg.setDestinationEntity(94U);
    msg.timeout = 19995U;
    msg.lat = 0.607166729193;
    msg.lon = 0.604810297818;
    msg.z = 0.669372144207;
    msg.z_units = 239U;
    msg.duration = 59414U;
    msg.speed = 0.208118114476;
    msg.speed_units = 195U;
    msg.type = 75U;
    msg.radius = 0.603028465377;
    msg.length = 0.483597636242;
    msg.bearing = 0.153042534156;
    msg.direction = 212U;
    msg.custom.assign("NTJORRAHKSCINTSPWGEZYZPNCOAPGJQZGAWMQFGUUPEJXMVHUCESEPDWZGDNRDFYBWNTFVZURVDLLBBDIXFAGPFFWOHJHUUOTQRY");

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
    msg.setTimeStamp(0.903825216605);
    msg.setSource(49131U);
    msg.setSourceEntity(234U);
    msg.setDestination(45533U);
    msg.setDestinationEntity(158U);
    msg.timeout = 49299U;
    msg.lat = 0.89486817431;
    msg.lon = 0.351661041827;
    msg.z = 0.934226505537;
    msg.z_units = 60U;
    msg.duration = 47715U;
    msg.speed = 0.624363094201;
    msg.speed_units = 121U;
    msg.type = 50U;
    msg.radius = 0.921107780816;
    msg.length = 0.476873170137;
    msg.bearing = 0.200954919485;
    msg.direction = 162U;
    msg.custom.assign("MSEAQYOKVUELMQNVUMEXOTYAKHNRUXZVKPVQHKLIURBGNJX");

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
    msg.setTimeStamp(0.252991994992);
    msg.setSource(61217U);
    msg.setSourceEntity(177U);
    msg.setDestination(23935U);
    msg.setDestinationEntity(7U);
    msg.duration = 43161U;
    msg.custom.assign("PQHSSCJYVSEIHMEYEIFRNKUILTAIPBNUGPQSSGTLOMWRZMHZAUWKOXORFHZRHXABXMBAOVRPLSMEAQAZDDPSGXNYZDGEJFXRAEUVSADHTQDAWYJVKVCHCWJBTYKGGOKERGE");

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
    msg.setTimeStamp(0.686048361151);
    msg.setSource(19113U);
    msg.setSourceEntity(13U);
    msg.setDestination(30005U);
    msg.setDestinationEntity(119U);
    msg.duration = 26409U;
    msg.custom.assign("PUBOLZXAJXUNWQPMPZODISRSTNHYUEFSTIZKBWOZPUPVMBMUBTFSQQBIZHDZEBHKFYRRYWLSMAJOLREAEMERVLYHVNNEPGYVBAIVPJVOKMQTDANYLTSHIYQULYPQFLRHMHQGYGKFHKWCMWCZWXAMXCGRLWJNDECJBZGKGSEWDFOCOGXCCHEHEPCTNVU");

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
    msg.setTimeStamp(0.199757851803);
    msg.setSource(58809U);
    msg.setSourceEntity(155U);
    msg.setDestination(3549U);
    msg.setDestinationEntity(199U);
    msg.duration = 4068U;
    msg.custom.assign("RBCZUWGZDBVAEYTZRLYKJBMOULXYLZNTEVGVGGPLPTWEKFQPXQMSEFYSPBLOWMLFCWNAEGKNANCCJAKPPVRSMJFHUSYVLDSQMPXPOXMMJAGGDVAKIORAHIROHXXNKXRTEFNJDSJSZHWCOWFZEVQHQOYTDIBCZTUGIDZADNUZQHIERLYFDSQYVUCFZJKHBBWPAH");

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
    msg.setTimeStamp(0.594811916183);
    msg.setSource(48181U);
    msg.setSourceEntity(191U);
    msg.setDestination(6867U);
    msg.setDestinationEntity(182U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.413566931429;
    tmp_msg_0.z_units = 88U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10469U;
    msg.custom.assign("JSHCMDMLGXSPUQNKSSOMJFECZDKHQKLMQYMHWPGFBPXJLQRTEYYXNWXIQLLNVXIPVKJTYSRAWEAN");

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
    msg.setTimeStamp(0.663255207573);
    msg.setSource(9984U);
    msg.setSourceEntity(129U);
    msg.setDestination(63227U);
    msg.setDestinationEntity(38U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.779342351675;
    msg.control.set(tmp_msg_0);
    msg.duration = 46842U;
    msg.custom.assign("FKGSGEVFSCNFZMRIVMGIXVBIMZAMDBTTCPEDHXAVRBCRGEIGCTLRJWJSYIBDVATCJGYBSDRWHNPZYRUOLIZDJLKYFAUDSYBCYCTVFCQFVZTKMLKXGZQUOMXRQOYHKREJNBXJUESXPMGOEKZXAFQNMYNIEQYKPUABSOIJWWLWAHEUKJDTYVAFHWTRBWIXOVMPPLFHDQTPLQDGWTAPLHQRUKLNUNLJXSWJKSZIHDWQONHP");

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
    msg.setTimeStamp(0.589210058646);
    msg.setSource(6236U);
    msg.setSourceEntity(43U);
    msg.setDestination(6179U);
    msg.setDestinationEntity(204U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.710414134406;
    msg.control.set(tmp_msg_0);
    msg.duration = 50860U;
    msg.custom.assign("NSGTSSUJMHGWXCPLNRDVXAFWFXDDFBECVFRZQKNUZNNAHIJRPWKCBWPQSNHHRIGRFXXSIJTRZUPYMZQACMGOVCREQSGYFTEGLCZMGLLULRHTPAOBCKPVOLJBRXOKTTBZWNEABYZKQDHDSLNVOBJUMVUWQZEGYHGAOHCG");

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
    msg.setTimeStamp(0.514200754079);
    msg.setSource(41173U);
    msg.setSourceEntity(185U);
    msg.setDestination(64700U);
    msg.setDestinationEntity(164U);
    msg.timeout = 38241U;
    msg.lat = 0.368296555072;
    msg.lon = 0.74082561498;
    msg.z = 0.98874662926;
    msg.z_units = 160U;
    msg.speed = 0.81219583498;
    msg.speed_units = 184U;
    msg.bearing = 0.726402323466;
    msg.cross_angle = 0.545430293844;
    msg.width = 0.765227154667;
    msg.length = 0.0975023762516;
    msg.hstep = 0.406777553864;
    msg.coff = 51U;
    msg.alternation = 152U;
    msg.flags = 205U;
    msg.custom.assign("VBLSWXDWEAKDFMENXUNTRGQNKYQSKRFWROZBPOMEFUCWETOFHOSJRPRTZQVCQMROHJNHWJXWGUBKBCJATZFWIUDSAXPPHZHDINJZBPERVFWUBJDTCCJRYYGHPYVADKSPBLBHQWHEZFNMKQNYYASYKGYYIVVUGKOOUUZQXKXYLBDMELTTPOP");

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
    msg.setTimeStamp(0.140188957428);
    msg.setSource(2058U);
    msg.setSourceEntity(159U);
    msg.setDestination(5715U);
    msg.setDestinationEntity(73U);
    msg.timeout = 58201U;
    msg.lat = 0.413110907985;
    msg.lon = 0.491987662133;
    msg.z = 0.852643270655;
    msg.z_units = 74U;
    msg.speed = 0.734208817623;
    msg.speed_units = 190U;
    msg.bearing = 0.550379828882;
    msg.cross_angle = 0.873538915371;
    msg.width = 0.737180675283;
    msg.length = 0.2691500869;
    msg.hstep = 0.856669634053;
    msg.coff = 200U;
    msg.alternation = 165U;
    msg.flags = 209U;
    msg.custom.assign("LNFTXOLPQOYRZBYGTBAWHUBUQWVHEFSDAMETUQOSSBATLWLXFNWGJIDTRHWUUJHCNFKLNZL");

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
    msg.setTimeStamp(0.511209954729);
    msg.setSource(33909U);
    msg.setSourceEntity(188U);
    msg.setDestination(9769U);
    msg.setDestinationEntity(56U);
    msg.timeout = 7184U;
    msg.lat = 0.490333573035;
    msg.lon = 0.746771631391;
    msg.z = 0.542531320725;
    msg.z_units = 105U;
    msg.speed = 0.998902849755;
    msg.speed_units = 151U;
    msg.bearing = 0.739080968466;
    msg.cross_angle = 0.999487857416;
    msg.width = 0.834921812783;
    msg.length = 0.257399117859;
    msg.hstep = 0.421061439127;
    msg.coff = 200U;
    msg.alternation = 29U;
    msg.flags = 242U;
    msg.custom.assign("TBNMTRRAOKPDYSEXIUFETYHVOHOJDSLXGQTRQUCQGZYVTNPIAPTUQX");

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
    msg.setTimeStamp(0.300535208905);
    msg.setSource(18938U);
    msg.setSourceEntity(111U);
    msg.setDestination(44222U);
    msg.setDestinationEntity(183U);
    msg.timeout = 17858U;
    msg.lat = 0.485913818516;
    msg.lon = 0.126162146638;
    msg.z = 0.201568156903;
    msg.z_units = 218U;
    msg.speed = 0.44361480638;
    msg.speed_units = 234U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0483222141935;
    tmp_msg_0.y = 0.405006743457;
    tmp_msg_0.z = 0.127208572527;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TPIVOZREBAVKDBMNADWJVPDHPKNKQCCXJFKXEZOBBWUKZJLBBADRLOISWVFTGQ");

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
    msg.setTimeStamp(0.186376507284);
    msg.setSource(1699U);
    msg.setSourceEntity(98U);
    msg.setDestination(42468U);
    msg.setDestinationEntity(129U);
    msg.timeout = 49977U;
    msg.lat = 0.741878551357;
    msg.lon = 0.2304542969;
    msg.z = 0.29867948126;
    msg.z_units = 198U;
    msg.speed = 0.698199733586;
    msg.speed_units = 44U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.768973749455;
    tmp_msg_0.y = 0.349571715601;
    tmp_msg_0.z = 0.102992574607;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QBCSGOBUCVSVOPETLNJGLSHVSWQMQWVEHWBYWYFHLXWPUPOPJOIZZCGYBJXTXNFMBVM");

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
    msg.setTimeStamp(0.261949371426);
    msg.setSource(11295U);
    msg.setSourceEntity(82U);
    msg.setDestination(7866U);
    msg.setDestinationEntity(187U);
    msg.timeout = 26837U;
    msg.lat = 0.140093398311;
    msg.lon = 0.834641490926;
    msg.z = 0.0624174851847;
    msg.z_units = 41U;
    msg.speed = 0.0311098490172;
    msg.speed_units = 229U;
    msg.custom.assign("HQGNCXKDLYXOOHPPRUPONGWRJRFIGLQXGTKNEDKZMCGEWBPSSCZIBKWJCHDIMKMIIALJOVJLPKQOEBQJQZWFAQWRIUWWDLBNYJDELXBUGGHKQTHAQBSMOAFWAYIUYPYVXUZUCZNFXPY");

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
    msg.setTimeStamp(0.383604364643);
    msg.setSource(22108U);
    msg.setSourceEntity(179U);
    msg.setDestination(1009U);
    msg.setDestinationEntity(51U);
    msg.x = 0.981088773136;
    msg.y = 0.00480724114073;
    msg.z = 0.635184788704;

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
    msg.setTimeStamp(0.222362986824);
    msg.setSource(47511U);
    msg.setSourceEntity(134U);
    msg.setDestination(9242U);
    msg.setDestinationEntity(137U);
    msg.x = 0.0992017541543;
    msg.y = 0.143592424624;
    msg.z = 0.599324957464;

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
    msg.setTimeStamp(0.456059994343);
    msg.setSource(31217U);
    msg.setSourceEntity(190U);
    msg.setDestination(55200U);
    msg.setDestinationEntity(239U);
    msg.x = 0.744298785164;
    msg.y = 0.244259106796;
    msg.z = 0.807911192913;

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
    msg.setTimeStamp(0.99011737082);
    msg.setSource(1379U);
    msg.setSourceEntity(142U);
    msg.setDestination(21619U);
    msg.setDestinationEntity(148U);
    msg.timeout = 55371U;
    msg.lat = 0.190062840158;
    msg.lon = 0.458600179234;
    msg.z = 0.351175068808;
    msg.z_units = 92U;
    msg.amplitude = 0.241132858417;
    msg.pitch = 0.092652381575;
    msg.speed = 0.77233023516;
    msg.speed_units = 18U;
    msg.custom.assign("UILFVNQSJMMZKLIGWJWSOAQTBPKPHIRUQDBBZOTGYQCDVJKHKLUSCAUWNDFDYCKQSMRVAQXRTWNXMHJJPPMMURMPBWEGEFNOTDLJGXYEWLJLCCXWRZKEVUIXEAT");

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
    msg.setTimeStamp(0.321847923728);
    msg.setSource(21923U);
    msg.setSourceEntity(238U);
    msg.setDestination(59463U);
    msg.setDestinationEntity(224U);
    msg.timeout = 30697U;
    msg.lat = 0.0936797585341;
    msg.lon = 0.601475268342;
    msg.z = 0.896713391034;
    msg.z_units = 140U;
    msg.amplitude = 0.745745817014;
    msg.pitch = 0.696455903697;
    msg.speed = 0.115291384208;
    msg.speed_units = 245U;
    msg.custom.assign("SZHLMWYRTJQQMMNBTGBDAMBIUGHGBZVMIEINJMOPHBIDLWTTJBGLZGIUVBVGQREWFHCREJXDSCYJKJQLGCPFTCNTNZLMFNXIAWEDQKAAWVIEZXWRVNYBAPXFHEOEERZOTCCOXSGJOSDTLFPOWUYKYKLLCXYDQAMXJVRXKIPSRSHOCFHBZZTUFUVIFMARARASOPZYPNUOFTPVLPHWWLDKHMHWBEDSEKQNCCGXKKD");

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
    msg.setTimeStamp(0.502881573959);
    msg.setSource(25898U);
    msg.setSourceEntity(164U);
    msg.setDestination(39917U);
    msg.setDestinationEntity(87U);
    msg.timeout = 11875U;
    msg.lat = 0.612949976878;
    msg.lon = 0.0275314632871;
    msg.z = 0.703742996441;
    msg.z_units = 199U;
    msg.amplitude = 0.0416397376299;
    msg.pitch = 0.529154829519;
    msg.speed = 0.994105525433;
    msg.speed_units = 249U;
    msg.custom.assign("LZNRRSDQXSKCHGJKXNLHENWDRHFFNJZOEUWMUDWMHAEXHIZAGSLEUTFDWLLWQLOSAJNVIPKYHCGGYYCPTKRZMFXKYHRBONISXVJQJLBXYQIHAAWUZCQLDCELJEPAFIBKANVGJJTZPBSIHNAPGUVVSPQGMMFTFUDCBBYOIBKJFDXTSGAEYWIGYVNMQZTUBKIUGCYOYLECHKE");

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
    msg.setTimeStamp(0.317241084146);
    msg.setSource(48576U);
    msg.setSourceEntity(29U);
    msg.setDestination(61953U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.28804879298);
    msg.setSource(6988U);
    msg.setSourceEntity(6U);
    msg.setDestination(39822U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.271512881158);
    msg.setSource(2871U);
    msg.setSourceEntity(14U);
    msg.setDestination(34712U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.511359119087);
    msg.setSource(63231U);
    msg.setSourceEntity(7U);
    msg.setDestination(57366U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.505788931886;
    msg.lon = 0.714651172134;
    msg.z = 0.0810327385154;
    msg.z_units = 245U;
    msg.radius = 0.104345175481;
    msg.duration = 27527U;
    msg.speed = 0.0589142979795;
    msg.speed_units = 135U;
    msg.custom.assign("OPBNHSWBTMESHJWKFEVEDNPNVRQCLXYEQASEADGZEVBGHQIJYLKSSSZGKVRIGVYMLXZBCTEIHOLRNXQJFWXQLDUNETKZVADTYNGTUKFIKKLNBBWAWJSUMQASLHUQOICRAYFPYOPS");

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
    msg.setTimeStamp(0.252040334245);
    msg.setSource(48092U);
    msg.setSourceEntity(165U);
    msg.setDestination(46965U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.0746717399701;
    msg.lon = 0.99649946935;
    msg.z = 0.150301954427;
    msg.z_units = 153U;
    msg.radius = 0.783062202453;
    msg.duration = 3924U;
    msg.speed = 0.405188513626;
    msg.speed_units = 68U;
    msg.custom.assign("BTJDTBIWZNJGHLGYSIXFKENROFLRFVEYPYLGDDHLBYXO");

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
    msg.setTimeStamp(0.264661519154);
    msg.setSource(55585U);
    msg.setSourceEntity(61U);
    msg.setDestination(4853U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.496184784463;
    msg.lon = 0.65729156043;
    msg.z = 0.826863825205;
    msg.z_units = 95U;
    msg.radius = 0.491774707343;
    msg.duration = 38403U;
    msg.speed = 0.00925976878417;
    msg.speed_units = 172U;
    msg.custom.assign("BEYZKLVCMDFNJJTOXMIKHJQGUKSGZXJBGNVLCHQPACABIMRYEVJQHBRFAMCIDWAXNPSJXXAPDPSOUOKWGXWCZTWVCKEMROFUSORYQOOIRQWBUEKNLIXVDKZXSLQTUIKYRVIHNAWZBHT");

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
    msg.setTimeStamp(0.150593612911);
    msg.setSource(27526U);
    msg.setSourceEntity(151U);
    msg.setDestination(41405U);
    msg.setDestinationEntity(234U);
    msg.timeout = 52192U;
    msg.flags = 149U;
    msg.lat = 0.501813512885;
    msg.lon = 0.584462233601;
    msg.start_z = 0.106183931615;
    msg.start_z_units = 150U;
    msg.end_z = 0.446575261332;
    msg.end_z_units = 87U;
    msg.radius = 0.945487562626;
    msg.speed = 0.861975197745;
    msg.speed_units = 48U;
    msg.custom.assign("JYTCNAOQMGZFXIELSTIRDPOQWIHGWRSXWNNZTSVSCXCNWTXFXYMBCGLSY");

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
    msg.setTimeStamp(0.523290555511);
    msg.setSource(51179U);
    msg.setSourceEntity(82U);
    msg.setDestination(47441U);
    msg.setDestinationEntity(38U);
    msg.timeout = 14067U;
    msg.flags = 154U;
    msg.lat = 0.487390134225;
    msg.lon = 0.898357481722;
    msg.start_z = 0.0337490504355;
    msg.start_z_units = 104U;
    msg.end_z = 0.49391851607;
    msg.end_z_units = 28U;
    msg.radius = 0.791842474223;
    msg.speed = 0.883283560932;
    msg.speed_units = 9U;
    msg.custom.assign("YXDGSILXMGPPUFGYNGRHIMUPOMFRVE");

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
    msg.setTimeStamp(0.99410565206);
    msg.setSource(9070U);
    msg.setSourceEntity(106U);
    msg.setDestination(56402U);
    msg.setDestinationEntity(159U);
    msg.timeout = 4805U;
    msg.flags = 29U;
    msg.lat = 0.487514045741;
    msg.lon = 0.914122037207;
    msg.start_z = 0.62283219162;
    msg.start_z_units = 218U;
    msg.end_z = 0.339255490716;
    msg.end_z_units = 186U;
    msg.radius = 0.415698709971;
    msg.speed = 0.163072918255;
    msg.speed_units = 164U;
    msg.custom.assign("HONIKZTGKNPGDQRGDYNSDZMSRUDWQXCMIVBHXSVMFJMZYSZAPYNHRGBEOMNMAJPPPWKXRJBFQOIWUKJVWFCRMOWOUYHFIZUYNSYLRKGPGBUSXTDKTVLTCJJSFGZRDYHFAIFVGTIOCLIEENAYJMSIIWPRAUXBGVJHSHCMMETKFOXHVQWWCVFXUCAAFTOQERZBDXQNADJQCHLEUVUXEYLBEKGYPBWWXPHEBJZLSQTOALCCQ");

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
    msg.setTimeStamp(0.018577628665);
    msg.setSource(781U);
    msg.setSourceEntity(37U);
    msg.setDestination(49539U);
    msg.setDestinationEntity(88U);
    msg.timeout = 12332U;
    msg.lat = 0.547453258244;
    msg.lon = 0.743573011081;
    msg.z = 0.564311029527;
    msg.z_units = 2U;
    msg.speed = 0.0374964410486;
    msg.speed_units = 14U;
    msg.custom.assign("HHQTEYPYVSAWDBPVJECMQWMEZASXHRVYPJRBTSMIXKCYJXEURSBIVKGRCFFTBWTNLPWIGJOPLHJBFOGFGQPZLJOPGQEBIBGOOEBVQFULHAUMKLGZYSKDESKKJIPMVULCJLAFEHFZICNFYYXVKUXRCQMIITNUAEQRDLRUOMDZDDGMFHCMZNWDSBAQAIWKNVNOAOPDNROQKUHWZFXDHXB");

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
    msg.setTimeStamp(0.717631969295);
    msg.setSource(8182U);
    msg.setSourceEntity(135U);
    msg.setDestination(12326U);
    msg.setDestinationEntity(188U);
    msg.timeout = 55663U;
    msg.lat = 0.329464400893;
    msg.lon = 0.439791575722;
    msg.z = 0.934394280244;
    msg.z_units = 92U;
    msg.speed = 0.482898903217;
    msg.speed_units = 33U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.646557027174;
    tmp_msg_0.y = 0.42885160643;
    tmp_msg_0.z = 0.536599391709;
    tmp_msg_0.t = 0.900595964346;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VXOKFRTXLNWXQROLLMUIMCJEDXUWBATEMRPSQHUUOGZGLLEPLSFSUMEFWOPQSPYBANCHPYTHJQGGBJDUBOCRLKADHRVZIMNXPEIYZBFZCICJXJMSNDIVAASMCHZUNWEICOZKCHQTIWKFYSAWOGHPJYTSQAQQREEXVKYNXJGKAZUTRTNGVKZSVZRVETGIPYUZTHBDLDPJYAKYVXBKBHLCVIO");

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
    msg.setTimeStamp(0.181612306028);
    msg.setSource(17502U);
    msg.setSourceEntity(18U);
    msg.setDestination(59953U);
    msg.setDestinationEntity(124U);
    msg.timeout = 43867U;
    msg.lat = 0.519449616252;
    msg.lon = 0.415496731202;
    msg.z = 0.190783510569;
    msg.z_units = 187U;
    msg.speed = 0.407891867676;
    msg.speed_units = 6U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.438799444877;
    tmp_msg_0.y = 0.809158166783;
    tmp_msg_0.z = 0.863269394688;
    tmp_msg_0.t = 0.982283232767;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XUYEFVACGFKFGTLYWPOOWDJEGEZWPRPVVQIYKOSXAPNTWZHMQMHUUZIJSBMQNDAOOYEKTMLPOCBVENGYKIXXDPHMQTETHDCNEXWUTBLCIRHEFTAUUFRLSMDDNKFNSTVAIXSLZFMBGXL");

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
    msg.setTimeStamp(0.87015172145);
    msg.setSource(26790U);
    msg.setSourceEntity(130U);
    msg.setDestination(63400U);
    msg.setDestinationEntity(161U);
    msg.x = 0.203671817704;
    msg.y = 0.960256667901;
    msg.z = 0.912562869413;
    msg.t = 0.045680548553;

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
    msg.setTimeStamp(0.889897537345);
    msg.setSource(10135U);
    msg.setSourceEntity(250U);
    msg.setDestination(56873U);
    msg.setDestinationEntity(93U);
    msg.x = 0.976856704732;
    msg.y = 0.0215470566864;
    msg.z = 0.843704177649;
    msg.t = 0.556999696948;

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
    msg.setTimeStamp(0.886790283959);
    msg.setSource(39216U);
    msg.setSourceEntity(39U);
    msg.setDestination(33870U);
    msg.setDestinationEntity(160U);
    msg.x = 0.691494255698;
    msg.y = 0.724436413315;
    msg.z = 0.930704833302;
    msg.t = 0.302051689942;

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
    msg.setTimeStamp(0.288266990728);
    msg.setSource(26076U);
    msg.setSourceEntity(218U);
    msg.setDestination(33584U);
    msg.setDestinationEntity(180U);
    msg.timeout = 22122U;
    msg.name.assign("DTQCAAYSQCHDL");
    msg.custom.assign("LBLDZQVZPIGFZWJOLVCTOXNCBIFQMDJXCRFIEJUDQXXGLFMWYYSKTPFERQKBEGNRHNSQPULUJJITWBUBKHYCXDSLGDWYVNSPJKHCJXIFMVEGCWUGAEZCNCUAFMPLRIEPTXQOMOLPYUBGYHEBBAPBONXUDCSWEPJGNVZODYOYZVTAMZMKVMOSFOQLAKSJYTDVAHRZWRSYWASXNHLBRFDVNKNGZIJWSRQUERHUKIMHGT");

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
    msg.setTimeStamp(0.785339059614);
    msg.setSource(18366U);
    msg.setSourceEntity(109U);
    msg.setDestination(9847U);
    msg.setDestinationEntity(125U);
    msg.timeout = 45668U;
    msg.name.assign("FWXCDIQPLVFOIJWOJSJTQWRMQHUORAIBNWYDBQSJLUPRUNBEEUBTUMNGZLYBNZTGHBCATYS");
    msg.custom.assign("UJFOALRSXCAYJBMDUPYCLQTGZKHKIWYWRNMLBFNVHYOSQFZLT");

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
    msg.setTimeStamp(0.965716006884);
    msg.setSource(11234U);
    msg.setSourceEntity(208U);
    msg.setDestination(55760U);
    msg.setDestinationEntity(59U);
    msg.timeout = 29093U;
    msg.name.assign("WMGHTDFUACNLEEMHZDOJVQTRXLMXTBRDHLVFNMKRSKYKTQMNXJYBGDTW");
    msg.custom.assign("FNYMWZYZUNHMYSLYLJDGGLDOUHHZJZFWBUIAVJKXDNXLQIVPKFASTHUWMUOUCYVM");

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
    msg.setTimeStamp(0.438132689216);
    msg.setSource(23781U);
    msg.setSourceEntity(45U);
    msg.setDestination(9655U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.573602840811;
    msg.lon = 0.635770009375;
    msg.z = 0.403999125709;
    msg.z_units = 220U;
    msg.speed = 0.379962980675;
    msg.speed_units = 117U;
    msg.start_time = 0.3771201883;
    msg.custom.assign("ISALTNOXWNBJLHUQLOLZWSRYQOIFMZMQGKCHBJJYBRDIAJSEONXY");

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
    msg.setTimeStamp(0.00938677462611);
    msg.setSource(23402U);
    msg.setSourceEntity(182U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.497963053913;
    msg.lon = 0.0386152024332;
    msg.z = 0.884690670319;
    msg.z_units = 120U;
    msg.speed = 0.590638545949;
    msg.speed_units = 148U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.692111542714;
    tmp_msg_0.y = 0.980176025135;
    tmp_msg_0.z = 0.914996293312;
    tmp_msg_0.t = 0.661329856526;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.626812460947;
    msg.custom.assign("RBISWMGEMYJRTQHXCGNOVWPNZAYAOPJTWNLESKJVZEWBBOQHFRBLUVEVZVVBIVFZCKLXYAVYLUKBNXKHDCADZGYPWSUDEHYIUMNIMOLWTNNHPUBJFAEDUKIEUKRLPAFWDSXTOZZBFSEYJPSGDTJ");

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
    msg.setTimeStamp(0.955414300885);
    msg.setSource(50167U);
    msg.setSourceEntity(55U);
    msg.setDestination(49254U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.421155201179;
    msg.lon = 0.461760817048;
    msg.z = 0.266874193543;
    msg.z_units = 54U;
    msg.speed = 0.234292971114;
    msg.speed_units = 51U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.634842251321;
    tmp_msg_0.y = 0.99862669166;
    tmp_msg_0.z = 0.0142615067653;
    tmp_msg_0.t = 0.28136724374;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 45091U;
    tmp_msg_1.off_x = 0.697137269938;
    tmp_msg_1.off_y = 0.310811527255;
    tmp_msg_1.off_z = 0.74885266241;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.237994795541;
    msg.custom.assign("DMTMMKLVURGTAIXJDVZIEUMFHWLLCTKXBNSVOGBYNVMEYABPPNQMJTKJGSZUCDCZDEBLHNGHOPRGGOQEYSXOBYPJKAHCYPCRBYQTXKQS");

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
    msg.setTimeStamp(0.894190065472);
    msg.setSource(1406U);
    msg.setSourceEntity(116U);
    msg.setDestination(56248U);
    msg.setDestinationEntity(135U);
    msg.vid = 56549U;
    msg.off_x = 0.201152288781;
    msg.off_y = 0.733241515546;
    msg.off_z = 0.843997903331;

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
    msg.setTimeStamp(0.01205185516);
    msg.setSource(27594U);
    msg.setSourceEntity(225U);
    msg.setDestination(13705U);
    msg.setDestinationEntity(21U);
    msg.vid = 46231U;
    msg.off_x = 0.197782830663;
    msg.off_y = 0.834640621347;
    msg.off_z = 0.992593254082;

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
    msg.setTimeStamp(0.221354511615);
    msg.setSource(19593U);
    msg.setSourceEntity(223U);
    msg.setDestination(65440U);
    msg.setDestinationEntity(1U);
    msg.vid = 12251U;
    msg.off_x = 0.869220930614;
    msg.off_y = 0.993212620252;
    msg.off_z = 0.732154046711;

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
    msg.setTimeStamp(0.392805802255);
    msg.setSource(6794U);
    msg.setSourceEntity(34U);
    msg.setDestination(26081U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.196339466859);
    msg.setSource(13902U);
    msg.setSourceEntity(158U);
    msg.setDestination(10589U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.331920160312);
    msg.setSource(31695U);
    msg.setSourceEntity(13U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.354519742336);
    msg.setSource(24069U);
    msg.setSourceEntity(78U);
    msg.setDestination(62190U);
    msg.setDestinationEntity(173U);
    msg.mid = 35848U;

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
    msg.setTimeStamp(0.441071130921);
    msg.setSource(36211U);
    msg.setSourceEntity(45U);
    msg.setDestination(63995U);
    msg.setDestinationEntity(76U);
    msg.mid = 25352U;

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
    msg.setTimeStamp(0.922623620373);
    msg.setSource(15155U);
    msg.setSourceEntity(70U);
    msg.setDestination(49259U);
    msg.setDestinationEntity(237U);
    msg.mid = 3275U;

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
    msg.setTimeStamp(0.166660147654);
    msg.setSource(38511U);
    msg.setSourceEntity(180U);
    msg.setDestination(33255U);
    msg.setDestinationEntity(42U);
    msg.state = 200U;
    msg.eta = 21617U;
    msg.info.assign("GCXRSELPINNQIPNDMUJLFZUBAVJZUBKFDEDYDWFCCBSPJDTBRBZXWCGKVBLCOQZAAEZMXHLRRHJSLPXZYCKTMBUYEPTGGAHGBBVWNSJHLIHTETCQQXGJXHWGJUMJCPGZOHHUWFQSKMRLRNFOAQBIJPYUKNQVSWIMOVDLTLCYQVOQMTLVEEFJQAODVOMYYDF");

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
    msg.setTimeStamp(0.558685837876);
    msg.setSource(50013U);
    msg.setSourceEntity(13U);
    msg.setDestination(47622U);
    msg.setDestinationEntity(171U);
    msg.state = 231U;
    msg.eta = 12619U;
    msg.info.assign("CXGMMRIRGVESNGMLLOZIMEZBWCUXPKZXOXQQNVXODWVZFFRNCVDPJUDGYPLTWKTTQACEJLJPUACYPYUGBDLMGYYUXCHWFWEJLKKEQYHIUTSPRYBNFSQDPNITSGWMLEPHIDAMZXZOFMSV");

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
    msg.setTimeStamp(0.184532148874);
    msg.setSource(16864U);
    msg.setSourceEntity(218U);
    msg.setDestination(40300U);
    msg.setDestinationEntity(53U);
    msg.state = 68U;
    msg.eta = 40834U;
    msg.info.assign("WSODGYWXLDYOTNOZDIURXZBDKGABCHENAMKAMXKAEXUCZFMMUVMOWJXKHYXUJLPSNAQUGFKPDHQVQHXTHC");

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
    msg.setTimeStamp(0.857670682506);
    msg.setSource(14302U);
    msg.setSourceEntity(226U);
    msg.setDestination(40924U);
    msg.setDestinationEntity(44U);
    msg.system = 63869U;
    msg.duration = 55859U;
    msg.speed = 0.0627626537353;
    msg.speed_units = 20U;
    msg.x = 0.517098035603;
    msg.y = 0.060140715279;
    msg.z = 0.418657479964;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.420440952829);
    msg.setSource(39906U);
    msg.setSourceEntity(5U);
    msg.setDestination(43516U);
    msg.setDestinationEntity(32U);
    msg.system = 6584U;
    msg.duration = 51371U;
    msg.speed = 0.730601587459;
    msg.speed_units = 18U;
    msg.x = 0.946682057963;
    msg.y = 0.239300933368;
    msg.z = 0.923678622125;
    msg.z_units = 28U;

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
    msg.setTimeStamp(0.89862585659);
    msg.setSource(15912U);
    msg.setSourceEntity(41U);
    msg.setDestination(26147U);
    msg.setDestinationEntity(228U);
    msg.system = 46798U;
    msg.duration = 63615U;
    msg.speed = 0.768201411826;
    msg.speed_units = 146U;
    msg.x = 0.87930149054;
    msg.y = 0.621074241901;
    msg.z = 0.005403723379;
    msg.z_units = 49U;

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
    msg.setTimeStamp(0.632442586361);
    msg.setSource(14192U);
    msg.setSourceEntity(38U);
    msg.setDestination(64497U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.286830455556;
    msg.lon = 0.409180532969;
    msg.speed = 0.690553821518;
    msg.speed_units = 146U;
    msg.duration = 32168U;
    msg.sys_a = 55125U;
    msg.sys_b = 47577U;
    msg.move_threshold = 0.20821987373;

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
    msg.setTimeStamp(0.0307053847159);
    msg.setSource(44297U);
    msg.setSourceEntity(225U);
    msg.setDestination(43399U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.00804501335442;
    msg.lon = 0.551517234803;
    msg.speed = 0.426173867857;
    msg.speed_units = 183U;
    msg.duration = 4495U;
    msg.sys_a = 62640U;
    msg.sys_b = 20242U;
    msg.move_threshold = 0.0315883336713;

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
    msg.setTimeStamp(0.710819517085);
    msg.setSource(60078U);
    msg.setSourceEntity(154U);
    msg.setDestination(14410U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.889012209988;
    msg.lon = 0.0461352220512;
    msg.speed = 0.389522368128;
    msg.speed_units = 177U;
    msg.duration = 41132U;
    msg.sys_a = 4563U;
    msg.sys_b = 41713U;
    msg.move_threshold = 0.546948148257;

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
    msg.setTimeStamp(0.762775387526);
    msg.setSource(38006U);
    msg.setSourceEntity(237U);
    msg.setDestination(4094U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.3837850631;
    msg.lon = 0.436182854728;
    msg.z = 0.97520114709;
    msg.z_units = 49U;
    msg.speed = 0.889927413413;
    msg.speed_units = 202U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.327642087668;
    tmp_msg_0.lon = 0.48191237622;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BOIBHKRLZWUTCERGTXSWXHGFRTHYSSJOVZINZLPJLILKHRPWMAXEANCUHENOVVSMPAFJFWKYGOPAQWLGUPYCSMDXAVXVXVBTUQKFGOOFMMANQGZJDRRHSTUKBGIWYMNIRUSAPSBBNCJZZFTWHBEBXMNMCUCFOISGUZQAIYZCXOHCOQKKOJIYFDEGDALQJWQR");

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
    msg.setTimeStamp(0.249530474047);
    msg.setSource(59234U);
    msg.setSourceEntity(150U);
    msg.setDestination(42584U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.820330754844;
    msg.lon = 0.849731181329;
    msg.z = 0.436215730804;
    msg.z_units = 7U;
    msg.speed = 0.145361849079;
    msg.speed_units = 205U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.691218875641;
    tmp_msg_0.lon = 0.496391620301;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DAGBXMYIHNCCVQFWBXEICNECDTQEAOZQVDWLRGGFBBRPSPHZFFPUXZROVZIEWKLOLHMU");

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
    msg.setTimeStamp(0.135517598258);
    msg.setSource(16347U);
    msg.setSourceEntity(81U);
    msg.setDestination(20371U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.996135009471;
    msg.lon = 0.531051857922;
    msg.z = 0.455206532778;
    msg.z_units = 92U;
    msg.speed = 0.377073551298;
    msg.speed_units = 117U;
    msg.custom.assign("GQMGRTJBKHFSSZYIVSJPENGPXSJPDOCDBTMOWQYRWXKEZENELBFKGUREOKZVEXWTAVDSQBLEBRMWCRJJQXSMVYFAZPTAHGXMMRJSTY");

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
    msg.setTimeStamp(0.34264925915);
    msg.setSource(53298U);
    msg.setSourceEntity(122U);
    msg.setDestination(42885U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.00896702114213;
    msg.lon = 0.128571643161;

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
    msg.setTimeStamp(0.15435491969);
    msg.setSource(37365U);
    msg.setSourceEntity(106U);
    msg.setDestination(41028U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.500889176358;
    msg.lon = 0.626419344411;

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
    msg.setTimeStamp(0.00672112594795);
    msg.setSource(46697U);
    msg.setSourceEntity(104U);
    msg.setDestination(28692U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.44618587615;
    msg.lon = 0.474568018448;

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
    msg.setTimeStamp(0.496107888434);
    msg.setSource(57179U);
    msg.setSourceEntity(45U);
    msg.setDestination(45357U);
    msg.setDestinationEntity(185U);
    msg.timeout = 37928U;
    msg.lat = 0.887270706799;
    msg.lon = 0.128043542134;
    msg.z = 0.505378562346;
    msg.z_units = 9U;
    msg.pitch = 0.407507306872;
    msg.amplitude = 0.838549604498;
    msg.duration = 28004U;
    msg.speed = 0.530318021963;
    msg.speed_units = 222U;
    msg.radius = 0.100198085443;
    msg.direction = 201U;
    msg.custom.assign("NBPPTYUSUNAOZCMEKVXLRZUVNPHCRZPZWOKHPVMBLWGADFUIJJUYXLXPXYZEWQCDQDTMFXITISKHNORVLEEYBQUFEJ");

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
    msg.setTimeStamp(0.824962758979);
    msg.setSource(38854U);
    msg.setSourceEntity(7U);
    msg.setDestination(23674U);
    msg.setDestinationEntity(225U);
    msg.timeout = 5130U;
    msg.lat = 0.831707007143;
    msg.lon = 0.528885837561;
    msg.z = 0.264790368271;
    msg.z_units = 60U;
    msg.pitch = 0.617873587182;
    msg.amplitude = 0.0939273093883;
    msg.duration = 25781U;
    msg.speed = 0.151682947939;
    msg.speed_units = 28U;
    msg.radius = 0.341891431714;
    msg.direction = 236U;
    msg.custom.assign("SJDQINVQZTHUIEFF");

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
    msg.setTimeStamp(0.653099630326);
    msg.setSource(39036U);
    msg.setSourceEntity(159U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(162U);
    msg.timeout = 44179U;
    msg.lat = 0.8013634539;
    msg.lon = 0.123830640891;
    msg.z = 0.864272285681;
    msg.z_units = 202U;
    msg.pitch = 0.238394499735;
    msg.amplitude = 0.100046194099;
    msg.duration = 14768U;
    msg.speed = 0.808119544348;
    msg.speed_units = 57U;
    msg.radius = 0.410460932596;
    msg.direction = 111U;
    msg.custom.assign("UZLVRBNATJOQTGWWESORFBRPEBGBKKXBCRHOGSUNOYYBIZVAJBZPEIWTNOGVXIXWOYQKWVRSDVMEUPHGKTNYHMEGNUHCPHKWQORNTNODRFMDFRVRDKTCHX");

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
    msg.setTimeStamp(0.765525199294);
    msg.setSource(22370U);
    msg.setSourceEntity(174U);
    msg.setDestination(24438U);
    msg.setDestinationEntity(146U);
    msg.control_src = 24761U;
    msg.control_ent = 53U;
    msg.timeout = 0.542487223906;
    msg.loiter_radius = 0.132742575854;
    msg.altitude_interval = 0.555247300991;

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
    msg.setTimeStamp(0.658737953682);
    msg.setSource(9272U);
    msg.setSourceEntity(191U);
    msg.setDestination(62743U);
    msg.setDestinationEntity(158U);
    msg.control_src = 44902U;
    msg.control_ent = 90U;
    msg.timeout = 0.161229334838;
    msg.loiter_radius = 0.0968568151789;
    msg.altitude_interval = 0.409564224096;

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
    msg.setTimeStamp(0.229036483282);
    msg.setSource(38981U);
    msg.setSourceEntity(233U);
    msg.setDestination(33931U);
    msg.setDestinationEntity(221U);
    msg.control_src = 27749U;
    msg.control_ent = 163U;
    msg.timeout = 0.749104156991;
    msg.loiter_radius = 0.902091110529;
    msg.altitude_interval = 0.808078531477;

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
    msg.setTimeStamp(0.201135588182);
    msg.setSource(35043U);
    msg.setSourceEntity(117U);
    msg.setDestination(50233U);
    msg.setDestinationEntity(26U);
    msg.flags = 18U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.787599115409;
    tmp_msg_0.speed_units = 23U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.766950848554;
    tmp_msg_1.z_units = 107U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.054129240871;
    msg.lon = 0.862169757756;
    msg.radius = 0.0967510891998;

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
    msg.setTimeStamp(0.295682603526);
    msg.setSource(57565U);
    msg.setSourceEntity(126U);
    msg.setDestination(59453U);
    msg.setDestinationEntity(184U);
    msg.flags = 151U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46537717651;
    tmp_msg_0.speed_units = 9U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.189267382546;
    tmp_msg_1.z_units = 229U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.580896111446;
    msg.lon = 0.936471505209;
    msg.radius = 0.145244235238;

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
    msg.setTimeStamp(0.614284064344);
    msg.setSource(21130U);
    msg.setSourceEntity(121U);
    msg.setDestination(29655U);
    msg.setDestinationEntity(124U);
    msg.flags = 151U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.580298364692;
    tmp_msg_0.speed_units = 98U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.559109453639;
    tmp_msg_1.z_units = 57U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.403554531262;
    msg.lon = 0.855527404255;
    msg.radius = 0.74348675762;

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
    msg.setTimeStamp(0.237000161179);
    msg.setSource(4990U);
    msg.setSourceEntity(101U);
    msg.setDestination(30274U);
    msg.setDestinationEntity(109U);
    msg.control_src = 28310U;
    msg.control_ent = 20U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 195U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.679147731577;
    tmp_tmp_msg_0_0.speed_units = 111U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.315247131195;
    tmp_tmp_msg_0_1.z_units = 64U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.253287718811;
    tmp_msg_0.lon = 0.633474361984;
    tmp_msg_0.radius = 0.0888067451644;
    msg.reference.set(tmp_msg_0);
    msg.state = 235U;
    msg.proximity = 43U;

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
    msg.setTimeStamp(0.13035174418);
    msg.setSource(55679U);
    msg.setSourceEntity(235U);
    msg.setDestination(25640U);
    msg.setDestinationEntity(127U);
    msg.control_src = 32130U;
    msg.control_ent = 61U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 244U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0777825098047;
    tmp_tmp_msg_0_0.speed_units = 104U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.498690536298;
    tmp_tmp_msg_0_1.z_units = 215U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0862830228896;
    tmp_msg_0.lon = 0.272763737812;
    tmp_msg_0.radius = 0.021895217589;
    msg.reference.set(tmp_msg_0);
    msg.state = 29U;
    msg.proximity = 94U;

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
    msg.setTimeStamp(0.767425053389);
    msg.setSource(24469U);
    msg.setSourceEntity(241U);
    msg.setDestination(4280U);
    msg.setDestinationEntity(247U);
    msg.control_src = 48792U;
    msg.control_ent = 124U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 116U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.807584709739;
    tmp_tmp_msg_0_0.speed_units = 248U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.705606486354;
    tmp_tmp_msg_0_1.z_units = 7U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.814584517364;
    tmp_msg_0.lon = 0.0115789845587;
    tmp_msg_0.radius = 0.65668503312;
    msg.reference.set(tmp_msg_0);
    msg.state = 53U;
    msg.proximity = 195U;

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
    msg.setTimeStamp(0.885427657139);
    msg.setSource(49U);
    msg.setSourceEntity(134U);
    msg.setDestination(15126U);
    msg.setDestinationEntity(22U);
    msg.op_mode = 227U;
    msg.error_count = 34U;
    msg.error_ents.assign("BFMLVLMAQDISGJOEEKEAWPRQTDFGZYAYBJQRLCWWGTBLNGTRCBYCFZRKUTBUPJDGEQXJWVXZENUIAHIRDLPKODQPZXPAGLAYMLKWQJNHQPDUFDMFGDJJAQNXOVSDKZRCOMFJTHYVMSUHHJ");
    msg.maneuver_type = 25336U;
    msg.maneuver_stime = 0.142763695085;
    msg.maneuver_eta = 16668U;
    msg.control_loops = 2524045396U;
    msg.flags = 167U;
    msg.last_error.assign("WJJJCKSLNEGXRQCINVBTRPSJMIMGRGONWEGIJWFDRYHOHNZZENTZIWHLZCOQFNZSYFHRWBEFYUPKTOMOXGHGPYABFPXIGPYKSFRTIDMTAQCTPNLBKZUHVJEFUDHDXDYJWXULOXVLLITBTCIPCBMAOVOYZBQDJVMBHDNKCJWTALWHRFGXURKEVTZSQEQQBXWSAVUAAIAPGCFVMBJEAQRQYLMLDMI");
    msg.last_error_time = 0.238895395288;

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
    msg.setTimeStamp(0.61926740974);
    msg.setSource(59041U);
    msg.setSourceEntity(5U);
    msg.setDestination(36965U);
    msg.setDestinationEntity(160U);
    msg.op_mode = 54U;
    msg.error_count = 218U;
    msg.error_ents.assign("KQDHYPENXCOJZFIXZGFADVEPTWUGFCONOYGZFNWJJTMAOMNNDDUYTQRZJZCHVMTNPIKQAQLBHCBDGZSLTQLQMXIHVISZSKBNHQOKCZVSJFEYSMBMRXROUJAAHBMRHVVXYVTUUSGOPIGAWXTKGYYEJFLSLXDMANXZSLLGKXUQEEEWTFBEKWVRAUHJWCRPJBRBP");
    msg.maneuver_type = 55975U;
    msg.maneuver_stime = 0.678790844449;
    msg.maneuver_eta = 47291U;
    msg.control_loops = 2169484709U;
    msg.flags = 209U;
    msg.last_error.assign("RTABVCAPELBOVZZGAIVEJAWSSLDFYKXJWYFKRQKQMEOYXFJBBJVVOVKWOKGFCUZZXBDIYASODZCFCBTJUCYTGOELYOHRHSXTFJQALVQWTEKYEEGNAPMYNRLDUZSPDPTMBIWDNDGVCRLQMHSNSIJIUPBZPPTXNCILHUCQDOKXSIADAQKFTHPRQJVCUSGWWUCVLGYNUHNQWJZEL");
    msg.last_error_time = 0.700340748302;

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
    msg.setTimeStamp(0.58255528289);
    msg.setSource(54103U);
    msg.setSourceEntity(187U);
    msg.setDestination(56297U);
    msg.setDestinationEntity(215U);
    msg.op_mode = 65U;
    msg.error_count = 116U;
    msg.error_ents.assign("RVFYMTNASSVRXHPKOUBMGVCXQWCTBZJYJBPMNDBPMPOZLLQHLCCEJXOXBGNACIKQVYEESFHNDFKVDTDJNACDWTRWPSLLUIHGAVZHQXEQZDIPBUQZYBMPVCOYQBXIPFVLFORUKEOZUUTIXAGCRTJDDSIZKKMZIAAQVXRJFUBDMTGOKVLLYYKNPEKJHFEUFHWYTFNZHYAOCGDRTJRXIGQNMWWYOMJUERFWXSLWITLANSZGIGHGECSBKMNWQ");
    msg.maneuver_type = 34521U;
    msg.maneuver_stime = 0.986604181269;
    msg.maneuver_eta = 43921U;
    msg.control_loops = 2670921910U;
    msg.flags = 56U;
    msg.last_error.assign("QVZGWTGZQHEOKGIUTXOVMNUBRSVCBDAMFCXQJPNGYNWPPNZFJEJPYOIYIWKRHQODVCLRTKTLFMCFPYTKHJVIJLHNWUKVXUWBARHDMUPLVXZNXJJSQOFGPVRBOLRGOSRKTRXUCFEJWPSTTVMQQXTJRYBEXSZOLOJXAFKWCKRUHFNDYYLSBEVEOLPDYI");
    msg.last_error_time = 0.564004488788;

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
    msg.setTimeStamp(0.859255484369);
    msg.setSource(47225U);
    msg.setSourceEntity(117U);
    msg.setDestination(21485U);
    msg.setDestinationEntity(38U);
    msg.type = 184U;
    msg.request_id = 27934U;
    msg.command = 242U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("FGWNQAUYHFVVRUOUYWGSXKMKJHETZWDCIKRESOPNURMLCYCFIGSUBBCEESNZBKFXPYBXSMJETGCNNWREJUISMCHCTPBCOXUNFCDSLIWTOPLFRLYGIMPLNOMWFEZBQAXHONYVYFBLOYZPFGGGPJDMIQBZIGZXKQJRAZAOJXRVD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3431U;
    msg.info.assign("LVJQFSIEOLRHSCQYULFHTLGWHGYLXMLRFNBHOIZFVHTEAXGBGPSKFSKRFNDMXGDYGCAKBNJDOPMNUZSRRACCCZCHXUUW");

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
    msg.setTimeStamp(0.594738619692);
    msg.setSource(51496U);
    msg.setSourceEntity(65U);
    msg.setDestination(43273U);
    msg.setDestinationEntity(92U);
    msg.type = 242U;
    msg.request_id = 5006U;
    msg.command = 136U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.334763270065;
    tmp_msg_0.lon = 0.638518733404;
    tmp_msg_0.z = 0.806184341765;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.radius = 0.378884166309;
    tmp_msg_0.duration = 1807U;
    tmp_msg_0.speed = 0.899648148281;
    tmp_msg_0.speed_units = 122U;
    tmp_msg_0.custom.assign("NZEWKFROKNRCMZJEOUFZIEEPLAEZXYVLFNTGVCGNOUBSDSYHFRAXBUJHUBQRJMQKDXASVMTVLGCHIESSSVDBMFWPMLAQANNUNCXEDWYNWHZKICTTEBIVCMPYXPAYBYDHFQOTDZAPXYALJAPIWKFFQBJOI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 824U;
    msg.info.assign("IPWHVGLMDEZATFBRBUEKGNKVFYCWIYMHDAKFZPP");

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
    msg.setTimeStamp(0.416744217964);
    msg.setSource(25461U);
    msg.setSourceEntity(51U);
    msg.setDestination(40578U);
    msg.setDestinationEntity(41U);
    msg.type = 90U;
    msg.request_id = 42535U;
    msg.command = 234U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 33537U;
    tmp_msg_0.lat = 0.939435183252;
    tmp_msg_0.lon = 0.560402572006;
    tmp_msg_0.z = 0.217026744102;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.amplitude = 0.816549780308;
    tmp_msg_0.pitch = 0.898728989507;
    tmp_msg_0.speed = 0.676198622247;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.custom.assign("CDHWZEHJXHQZXIGBQQNGPRATOBOHMZAKYYAFERMFWBJAGKNMPWOFDTKFUSSEASXJGQVCHJXXKWJKRMHDCROHLVGRDBNIIWJOSOSLYAAJMWNUDDLZRWQUFUVCQVHBPVWRUGMUPSHPUZTTDNMOTXBZSNPENPYLPIMTO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20652U;
    msg.info.assign("CZNEACATCGVSVVZJYMJBJCQYSSLKQKVWLKQWEIZQZJEFCKDIWMZLGUBXWEPCBBUBBFEPTOXRHOUIVXOAOEPXXRIBVACNZYEZNQPYPKVOTMJLGWQJCKFHAIJUIGAXJFRUIHLAVKJURCQXTMIDLMYFYRYKOPWNG");

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
    msg.setTimeStamp(0.762487861438);
    msg.setSource(2130U);
    msg.setSourceEntity(42U);
    msg.setDestination(19166U);
    msg.setDestinationEntity(197U);
    msg.command = 154U;
    msg.entities.assign("WDNXMQDNPURPDAQACBSXXZGFKBBZNLHVYLCZZGOALRQCKHLTEVKBMQHFECIPSKCYHPRUMUJBMRCKDONXDJKKGHYZOIPCALVMLIKSGVJXFSWRJIQISAYBDLWVFMGWEVHAZXZHMBRTGTJHVIUKSRJOMFOCPPALMTFQKXXZOGDXFBWWDDYWNXTSNZLYZEJOHVGLQBTPAVEOENQYWMAUYCUFYIAQTPFEINEJOUSUUGOTEDBIQSSVNWTJNFJERPH");

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
    msg.setTimeStamp(0.482085317934);
    msg.setSource(15800U);
    msg.setSourceEntity(209U);
    msg.setDestination(45568U);
    msg.setDestinationEntity(223U);
    msg.command = 177U;
    msg.entities.assign("IBZCYVTRWBJCTHDLANWLKENZKOUXNBMASGDIAPDCOGGIWFTFLJKHDGQIXGFYTNAMVTRFJQDLBTRVOBDOUYEXNSABROLOXTASGBULIVQYZAZVXGUKKYDLERMFHDMCSKMCVTIKUJJAVZESDUVHXMZFPWXZGXJPHHQULSPJQFJWWQGUWLFQOPRPJFIOAHVBJZDQPIONERHKCTXQKUCYPWNEYNR");

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
    msg.setTimeStamp(0.159901180397);
    msg.setSource(41574U);
    msg.setSourceEntity(254U);
    msg.setDestination(9255U);
    msg.setDestinationEntity(60U);
    msg.command = 250U;
    msg.entities.assign("JIFBKDBRVGBPASSNQISXPUZJKRIMCQOUGZZMUVCFEDZHQEYMRKZEOFLJCXNHLJSSNHRTKDWYOMRZSDEBOMVWPGGEKOZXPPEYXUYZBUWRVVHESAKVSWYSXWOHBZLTXUPFLWZIMGYILONPDUDEIFNDHINLJQNQVRAJLHAVPGJAMIAPMHBCJRXJUHCOQCEWGTHGWKC");

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
    msg.setTimeStamp(0.677666140319);
    msg.setSource(57542U);
    msg.setSourceEntity(178U);
    msg.setDestination(51003U);
    msg.setDestinationEntity(59U);
    msg.mcount = 132U;
    msg.mnames.assign("JHDRQINWVHPFQBEZAMKUHJWYOMYWDNNEUXFASAIXNWXBLBXTRMEVYCQGMOPCUOIFFPDCSUSXBYUCJFKDVSGWHRHKVOIRCMCZXGQFQXKQZRTVKRNYOVPBNHESETXYVVJKTQRUPXLLGMIWDOORNCLNEQGCMSFRZJDNPAAEGLATSOXZPBSPTKDTCDKBOBGEYSQYGDZIJJHJLEWYPIITC");
    msg.ecount = 147U;
    msg.enames.assign("ZFGDVLAFKRJOAJZBEZLGBKOUEODEGHWDWSHGUT");
    msg.ccount = 23U;
    msg.cnames.assign("RZXQCIDTLRWSTCEMZOJTGCHEWXFTMRKKYUZZVLFERCUNBGIXVFIPMQDHOLRTVBHJITTZWDSUNAVIDFXBSJRGHMROXBGQQGJYUQYOBKRRNOYYVSGPMWVPQCJZAGEVALNJMZKOHXFHQHPEJEDXNWYBLWSPNRZKBWAK");
    msg.last_error.assign("XDXHJSLQTYTGOQGAOHKMDDEGBIDJAJVXHEFEDHPVDOYXAZMBNEMILSLGLAJACWZYFTCIOWXLRJVHCOFBSBKYWXQTNRDVAQPRHEOA");
    msg.last_error_time = 0.015046928777;

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
    msg.setTimeStamp(0.980417995038);
    msg.setSource(27004U);
    msg.setSourceEntity(2U);
    msg.setDestination(63480U);
    msg.setDestinationEntity(11U);
    msg.mcount = 156U;
    msg.mnames.assign("BKERZFOTZBSTDACXQDNIFWQIKSHIYMHUDBXEKUEUBRGDPVHIOQZXCJQLSDYFCFOQQNRFLXIIGNSYOTTVMEHZRXHZVWJLBUJHCPZKECPLRKUODTGMNPVYVMQNAZWUYDSWEOBJFKJXCFYPQEDKXLHYRZWRIXPXTENULALTSPGYPCKGSBGVATFCUAGAVNNDKZQHHZISAQAUCMWJOIEKNRSLFVVMUOGOHWY");
    msg.ecount = 6U;
    msg.enames.assign("AFRNDZYZIBSKQTXPOMBRASTNZLROKAACCLIYYPKUECFFVBMGCKFWGJWLRZIQYHGOTVZPJPVVNLAJUJMLOXZDORRHQCTAARSWPSQJFJVKMKYDMPDFHMGRTVAGBSRWVHTLBMVHXXTUINHGNHMLCFNQANQUCUUNZDUIJKKPMXWTIEUZBPEDFELOIHZLTEQECEZNYICOAHBBWYJWYMVLRSJDKUXYQOWXUQEPSEWPDGGFIJYH");
    msg.ccount = 183U;
    msg.cnames.assign("TJMDEEXUUQDHRXMIMQPUQNKXEPCCAZFMMAPQFJYRRLNBTGKOTSFXOKAVYBOIX");
    msg.last_error.assign("CZGVLWWFASOSJBO");
    msg.last_error_time = 0.781117186873;

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
    msg.setTimeStamp(0.464126559741);
    msg.setSource(57252U);
    msg.setSourceEntity(173U);
    msg.setDestination(59428U);
    msg.setDestinationEntity(141U);
    msg.mcount = 121U;
    msg.mnames.assign("KPRGMUMQAUBLYXHQWKBFPJQDSXCCHUALHNWFJSSIINFKRAZPLGIKKZRWCOQURHFJUVDBXSGEIMJVAOJHHMCQGFNNSWWVBEMOHTSLDCBRPXDJTMTVXQCXAEBVYCZWEYHXPMMEJKDREYNQFOUOOGESTDHSDMZGXKTSQTZWSNAXOJ");
    msg.ecount = 241U;
    msg.enames.assign("ADXRNIVMXUPVEBHBGJMIYPJAUCPFHYDQICOROKFGWBFRINAWRLFDNWLGOOVQEDXLSTAEVNXATKLZXUSZBCQTVDHJSCPYCAYNCLTJVIPCRHMYGRWNUMDGPZXOCWGXRFBMHNIFGVZIUTERLMDMWXBXSDDGZPSZQHQTKHAOJYTKUECKEOYSWJNUQTLZWYECEOHNBJRIQAKVHMIHEK");
    msg.ccount = 12U;
    msg.cnames.assign("ANBLYLILYZOILHBHQGEYOGQENJHFPSLPKTMFXAUFWCEXPOTCIYKVINRBFHMUDEQVQZIJEUKAYHSRMFJIBCLGORGKQQRJVWGOBDOSVXUZBZDYATAP");
    msg.last_error.assign("JFRHCXMPIVPKZFFYMCSGUGRKZSNVCJKXLYOPZFHZLXULONTFJXDEFVKTCWZEADMNMATIRKBSHWVGRHABO");
    msg.last_error_time = 0.802813482735;

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
    msg.setTimeStamp(0.618471848474);
    msg.setSource(34445U);
    msg.setSourceEntity(25U);
    msg.setDestination(15406U);
    msg.setDestinationEntity(162U);
    msg.mask = 198U;
    msg.max_depth = 0.181499199616;
    msg.min_altitude = 0.266600841289;
    msg.max_altitude = 0.418846819865;
    msg.min_speed = 0.79306856765;
    msg.max_speed = 0.649339437332;
    msg.max_vrate = 0.697786055176;
    msg.lat = 0.401448520607;
    msg.lon = 0.436250669698;
    msg.orientation = 0.0447820315511;
    msg.width = 0.870616751367;
    msg.length = 0.7760404668;

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
    msg.setTimeStamp(0.644135526561);
    msg.setSource(13726U);
    msg.setSourceEntity(121U);
    msg.setDestination(56928U);
    msg.setDestinationEntity(178U);
    msg.mask = 70U;
    msg.max_depth = 0.114906380285;
    msg.min_altitude = 0.942356270384;
    msg.max_altitude = 0.1713709934;
    msg.min_speed = 0.97503378612;
    msg.max_speed = 0.58951458415;
    msg.max_vrate = 0.7210832753;
    msg.lat = 0.63804170637;
    msg.lon = 0.317579782587;
    msg.orientation = 0.868804395076;
    msg.width = 0.138275727899;
    msg.length = 0.683469537314;

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
    msg.setTimeStamp(0.842876693393);
    msg.setSource(13672U);
    msg.setSourceEntity(18U);
    msg.setDestination(37719U);
    msg.setDestinationEntity(58U);
    msg.mask = 253U;
    msg.max_depth = 0.640522982479;
    msg.min_altitude = 0.505448349574;
    msg.max_altitude = 0.0497371353841;
    msg.min_speed = 0.215941331799;
    msg.max_speed = 0.77534012883;
    msg.max_vrate = 0.909244588081;
    msg.lat = 0.0677284781679;
    msg.lon = 0.708616605604;
    msg.orientation = 0.601038189894;
    msg.width = 0.696753687608;
    msg.length = 0.527760108893;

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
    msg.setTimeStamp(0.325748715299);
    msg.setSource(26766U);
    msg.setSourceEntity(41U);
    msg.setDestination(11202U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.0162278979832);
    msg.setSource(43831U);
    msg.setSourceEntity(72U);
    msg.setDestination(41304U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.498067868451);
    msg.setSource(50101U);
    msg.setSourceEntity(19U);
    msg.setDestination(1304U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.362584802744);
    msg.setSource(17508U);
    msg.setSourceEntity(84U);
    msg.setDestination(26125U);
    msg.setDestinationEntity(91U);
    msg.duration = 43333U;

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
    msg.setTimeStamp(0.187625175873);
    msg.setSource(28924U);
    msg.setSourceEntity(91U);
    msg.setDestination(60830U);
    msg.setDestinationEntity(203U);
    msg.duration = 44542U;

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
    msg.setTimeStamp(0.0587807576429);
    msg.setSource(35189U);
    msg.setSourceEntity(121U);
    msg.setDestination(39212U);
    msg.setDestinationEntity(0U);
    msg.duration = 39298U;

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
    msg.setTimeStamp(0.268047453538);
    msg.setSource(41605U);
    msg.setSourceEntity(7U);
    msg.setDestination(25756U);
    msg.setDestinationEntity(153U);
    msg.enable = 72U;
    msg.mask = 2615304732U;
    msg.scope_ref = 0.419898606685;

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
    msg.setTimeStamp(0.8855012869);
    msg.setSource(59570U);
    msg.setSourceEntity(202U);
    msg.setDestination(15557U);
    msg.setDestinationEntity(69U);
    msg.enable = 17U;
    msg.mask = 984415605U;
    msg.scope_ref = 0.347775908031;

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
    msg.setTimeStamp(0.21020696892);
    msg.setSource(30970U);
    msg.setSourceEntity(64U);
    msg.setDestination(43912U);
    msg.setDestinationEntity(26U);
    msg.enable = 30U;
    msg.mask = 1819662755U;
    msg.scope_ref = 0.0128554784316;

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
    msg.setTimeStamp(0.0359924391965);
    msg.setSource(39695U);
    msg.setSourceEntity(178U);
    msg.setDestination(44454U);
    msg.setDestinationEntity(193U);
    msg.medium = 250U;

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
    msg.setTimeStamp(0.378023735468);
    msg.setSource(18717U);
    msg.setSourceEntity(135U);
    msg.setDestination(11498U);
    msg.setDestinationEntity(186U);
    msg.medium = 74U;

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
    msg.setTimeStamp(0.435527606258);
    msg.setSource(9115U);
    msg.setSourceEntity(239U);
    msg.setDestination(44358U);
    msg.setDestinationEntity(91U);
    msg.medium = 77U;

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
    msg.setTimeStamp(0.501196589316);
    msg.setSource(9797U);
    msg.setSourceEntity(128U);
    msg.setDestination(37959U);
    msg.setDestinationEntity(230U);
    msg.value = 0.849337408349;
    msg.type = 244U;

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
    msg.setTimeStamp(0.697518442544);
    msg.setSource(4533U);
    msg.setSourceEntity(113U);
    msg.setDestination(60290U);
    msg.setDestinationEntity(235U);
    msg.value = 0.730916759371;
    msg.type = 13U;

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
    msg.setTimeStamp(0.762910577462);
    msg.setSource(12404U);
    msg.setSourceEntity(161U);
    msg.setDestination(35260U);
    msg.setDestinationEntity(95U);
    msg.value = 0.580356826008;
    msg.type = 42U;

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
    msg.setTimeStamp(0.510816951573);
    msg.setSource(37808U);
    msg.setSourceEntity(94U);
    msg.setDestination(52966U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.6198730364);
    msg.setSource(5761U);
    msg.setSourceEntity(106U);
    msg.setDestination(9438U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.621906498364);
    msg.setSource(18685U);
    msg.setSourceEntity(89U);
    msg.setDestination(46035U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.467731503998);
    msg.setSource(39064U);
    msg.setSourceEntity(26U);
    msg.setDestination(64647U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("GCNVWOOYGIQPJGUKTIVDFDFQJCCJALSXFSBAMMQCJCXQBOQKXLOIRQPOEEPGEMBVYGWRNCNFAJSEINLUMLYBXWIZHKHPTSZBGTXVNMGIMZSFYZABOQAHLBSZTZSWSIBXANDDZFTXYJHRQHXFNRVPBUFPKHAEBCGSCRULKLNDHGUUPOXVQKJEOZDEAUNGKVISKCYWRTEMWYDZRAVFRFOUHTMJJVDIVCKOEWYAYHUT");
    msg.description.assign("FTNGOLOGSJMLKPOBYMERTBNINTGVHUWCRCARBWYLDYUSJONVZNIORMAGHBHVWWJXFFKBMKPZXDIFOXQIGAEUSOROQM");
    msg.vnamespace.assign("ENTZZPUWKDNGGQIBZDSGTJNMHBDCAXJYWFXFMLBTZTNPVIAWZRIZAVWXTBTGRKHNDLCNHEVIWYRTOAHPPCSLQEEHARLGOBFWJBPUFGSYCUXPSMZEBKKAINUFLJQEF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NFAHCRYQZUKRRKKFMTZLUYFMVJTEFLAYTDCXDGYNCHVQLRBQSRCQRXPIGCTINYGVQUHBNGJRBMWLIZAAEFEEQLEMGTKJLNMJABCIIUJQJXBWNYBKAQWPNBGOCGCXAOHOHZXDBWQVBXHFHZXSFVFVWEPPOHVAFVFMTKZKOUEWHMVJUXZEDOYUJPSASGZTSPSHGPPWDYDQIYK");
    tmp_msg_0.value.assign("YWRDHQTFPRUKFWHMLMJDGRSKNLSPH");
    tmp_msg_0.type = 28U;
    tmp_msg_0.access = 60U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SRPIEBDQTOFLSHVDXGAYUFZHPRTGBWUKQCILOZTBAVJTHGEEACZCVWELXMEWJKWXKXILUDYMHGRDDNGZJNCVLPNJANOOVBJIZKWCCLVWMKPZFZAJDXUEMSDLPETMNEACUVAYFMRXHNIUUUQKPLNRTYYVEWNPGXUFJCOJXSBYXGKHNTPNIUJGTSXIKOFDBPYZAMAQHRFTHOSQKOAICPHFEBQWJFBBLGIZRSFODRZQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("IFRBLGWSQBBKOQMYUNXASHLMKESERCDKIHWEKCKLDZNEBIPJUWAHAPFUURVZSPYHTMWMBBWQZDTTFRECZJOSFIXBNOBTJSMLSTARKCRVHHMDCQLLYGJFQOWLLBIFCJONZPNTFAEMNFCAYNHZUEOTWIQHNRZVDJEAXPHFKAZHYKPPYBZQNETGSVAYSPVXCGXWXTGRMXVJUDPWFZGOK");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.26211548976;
    tmp_tmp_msg_1_0.lon = 0.26532451336;
    tmp_tmp_msg_1_0.speed = 0.828487022579;
    tmp_tmp_msg_1_0.speed_units = 98U;
    tmp_tmp_msg_1_0.duration = 43361U;
    tmp_tmp_msg_1_0.sys_a = 53131U;
    tmp_tmp_msg_1_0.sys_b = 34677U;
    tmp_tmp_msg_1_0.move_threshold = 0.685364022499;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Calibration tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.duration = 6237U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::DesiredHeadingRate tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.0145603860575;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::SetThrusterActuation tmp_msg_2;
    tmp_msg_2.id = 116U;
    tmp_msg_2.value = 0.542920220637;
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
    msg.setTimeStamp(0.0259330815358);
    msg.setSource(14994U);
    msg.setSourceEntity(0U);
    msg.setDestination(25986U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("YPHEAYPHBNEUYJSVEOYZWZWFBIEAFPUCOPQKWRNDFIPRKDMQGMMMEFGINRXCUDBSRSOAVCXTDXTNCVSHNPOIJDBXAJXFPVLYUHHGORXKSWCTBRRPJZBJOKWLHXQULHMZQDUMCFXJTYSDXENKTFZYZIRZEGGACONQSIZOBVBGVUUQPGMAZWUIQEOANIPLTUYRMDMDNDTLGXBAJTQFIA");
    msg.description.assign("UIAJIPQUJJGRKCTCDJNVESMWJTSFHQYBOKBLEMOPOPLMQQKUUFUQEMYXCROBFUOMUNAGKHGPSVKPUMQFYTXZVOAEKCYKPIHRZPXGIXFIHVSNDRENZGAXTERZEV");
    msg.vnamespace.assign("DORYZYZSBZOQJMBHVYAUTGPKMCJONJUKLKLDVGEWESLTTUDPNOHBUYREDWKSSHYAJNQMTFQCF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KBULTVOXJNJRKIOOXBTDMXYEFSCPIUQNNSXJWDQJTBQFKHUFRCBVZXYSEGDHTRHASMJLZVPHKVNDCYCANDNTQHWHFKMUAYIOKC");
    tmp_msg_0.value.assign("NLVFHVYGZTMHYQMQAISORWSEXPBBHNGKIEBZYUWYTVETZFBKZQYTUAZOHBMXDKQVSPYCHHUYEMOPKACFWFEZWLJWLAOOOFXNSWSNRFPNOLXNCVUGFHGSDYTBXLPILZOIMGCWRDISXNHCVJJQPKZDUGJQXSJULNEPSFHLZHULABYETEBMJIAXEXJIPVXRCBAWZUETPSRGKJDRMDKUMFTVGCGROAQKTUNAKWQIYQRDCTCRINVF");
    tmp_msg_0.type = 40U;
    tmp_msg_0.access = 149U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IZNZXGLGUIKRXUXPPGWWMORQYMJOGEEQTZBPVNUZTKXWKDOBAGFJGCLSHLTVTREFSMMIKHSKHOKWVKBYPJYRFCOATYIHNRZPFHDIQJFGISSPJNGVAFSUYCIQHRYRLJSCRRODDLGHLBZTIAZBIXSUUALECQRPADNXDUVQYFPXQFMNNVEALFWDBAVAMKBCUPOSGBKTCYPHYIMSJMQFVNJBBMWZENJWZXVKXLTOEEWXM");
    IMC::SimulatedState tmp_msg_1;
    tmp_msg_1.lat = 0.148333736192;
    tmp_msg_1.lon = 0.213946392962;
    tmp_msg_1.height = 0.700565168315;
    tmp_msg_1.x = 0.323120395156;
    tmp_msg_1.y = 0.427353193606;
    tmp_msg_1.z = 0.0170483520016;
    tmp_msg_1.phi = 0.555887885107;
    tmp_msg_1.theta = 0.979052367105;
    tmp_msg_1.psi = 0.826056158227;
    tmp_msg_1.u = 0.96346736566;
    tmp_msg_1.v = 0.321526153999;
    tmp_msg_1.w = 0.893773733862;
    tmp_msg_1.p = 0.82967923287;
    tmp_msg_1.q = 0.127479562095;
    tmp_msg_1.r = 0.54052929728;
    tmp_msg_1.svx = 0.397215679106;
    tmp_msg_1.svy = 0.203184165259;
    tmp_msg_1.svz = 0.963604400282;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SonarData tmp_msg_2;
    tmp_msg_2.type = 33U;
    tmp_msg_2.frequency = 249133715U;
    tmp_msg_2.min_range = 27666U;
    tmp_msg_2.max_range = 15966U;
    tmp_msg_2.bits_per_point = 88U;
    tmp_msg_2.scale_factor = 0.815908868795;
    const char tmp_tmp_msg_2_0[] = {-113, 48, -97, -114, -15, 31, -82, -13, 2, 33, -64, 83, 126, -64, 3, 73, 46, -13, -61, 111, 109, 77, -97, 27, 118, -122, 98, 118, 22, -96, -104, 62, 97, -43, -75, -27, -23, 53, -66, 28, -7, -43, -81, -71, 48, 116, -73, -48, -13, 18, -46, 35, -21, 119, -124, 67, -8, 104, -103, -12, -63, -88, -2, -101, -43, -101, -102, -55, 81, 93, -23, -1, -29, 72, 84, -120, -28, -78, -95, 74, 30, 42, 48, 96, 96, -112, 20, -44, -43, 40, 9, -3, -109, 6, 38, 100, 97, -37, -71, 42, -17, 121, -7, 98, 107, -113, -56, -11, -80, -36, 22};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.222690357008);
    msg.setSource(31787U);
    msg.setSourceEntity(253U);
    msg.setDestination(38977U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("KHILLHOLCQHENYCAINXZNJVDBDLXMDWDPRXVAZTOKJKUEWWYZHNHIAGWRVVBYOFTWFEHQFUICOGPFSILUWQMDQHBGEXH");
    msg.description.assign("UDKYEICUWAPPSLLDOXHMCYONZNIJSBAQYCZREWNCZGENSOIJWTZKQYYIGWPUXVFLWWRUNDPGQBCNXMDQNDHQBWASHRBQWVZATCBRTZZIOOGXXVQSFREVZKDUDPFEXCIBOOKLFNQF");
    msg.vnamespace.assign("OLURRFOSAICNEBVYYQMTOULVHGNPIDXBNMEYNUJXWYEEAEHZXKSWAUVUZPZSQTSJVIIQQBPMGRNKELETZVNVHGORNOSFCAOURXMTOXOXWAZYUQCAJTAFXJBENHWZSPUYLBPHYZBQFSBWTPLPXDRKBFNTDWIYVMXSBKJJPYDGDIHPDGKKLFCGQAJFMDRCGKGGKVXTCMTHYDCQHHTPRJQAENARVFIMMICUKFLSERQO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MSFYERDAJLKWIUIXFZGRPQBYDVURYAXPKGTAMNNJGVUZBDRKBPJROMJJZYVEIWQPOWSHJFNGCSFYBTWEDXWDXFIDQUTUSKZYSFLCUFLKHCYKYNHWQTDEXJNMIUVGJZQT");
    tmp_msg_0.value.assign("XLCGQQJYREZLLBZDCCXCVRPVFTGXYIMPWZTBDEMCFDWELPRBBGRGWWAQQYISFNLZBKRVVEQCLTHNXVBCOVIMDPIWOHSZSQJLZUNZAEQZMJFOYJOUNNKUEUSWHWHJTBKZSETDYLAABKBOFZJSMDA");
    tmp_msg_0.type = 172U;
    tmp_msg_0.access = 182U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TGOBPCDWALZCZYZBTRXFQUWEUAZDAUSJELFVGAGXPASUCETCXJQQJIYIZERSKCTRAKQUSIIMRNBXJRHQDXMXOEHFWDUFMWJSUJTZAHLVNUOGLLPOVJBPGYVNBYQLHFWM");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("FDNUVXZYNJLRPWKJOSSQLYTBGDOOTIAXMNBFIHHRHPLNRIELEZFAOHRS");
    tmp_msg_1.dest_man.assign("AYGZRLUYCPFIDLEQZPCQEIKDLWXFJUZBKIGRPUCRAARNABUXVAJWMLYKSSSEVHOVGLIUZPWBTBWGZHQKKYUVMODMTTWNJYRFSVFMETXPVFNUHGLCZOGAYJOXRWFN");
    tmp_msg_1.conditions.assign("YZLLTBYVSUXQTNKPWITIEYGUASXLPZNHHDCVYFDKDIK");
    msg.transitions.push_back(tmp_msg_1);
    IMC::PlanDBInformation tmp_msg_2;
    tmp_msg_2.plan_id.assign("YUACOAORVYHZGFZWYIOHFLVICNWEXAQXNVOLLQYAKUAJCQMXMSSHASZCNKFKCOXAIEVPOTBPKSHSZHXZJAHWAPUWVMSZNHORKCFNMMCIERXJOVFWLNTFYPPNBXBUTHEMGFEZDLRDUTLWBRWUGDCTWPEJXYWGZHLIKAIEPNQRUMRBKGFXU");
    tmp_msg_2.plan_size = 57056U;
    tmp_msg_2.change_time = 0.209908861218;
    tmp_msg_2.change_sid = 45446U;
    tmp_msg_2.change_sname.assign("FUIBXXIWDOABKOLSBGZUCTWPXBJKSEJVINKCVTRRVDGIAZXGKORNKLGOVCVVTBMDNCQLCZYCDMQIAMTLTGPETBGFHVHNXMXK");
    const char tmp_tmp_msg_2_0[] = {-92, -70, -52, 47, -68, 123, 41, -84, -109, 36, -47, 41, 39, -2, -78, -62, 89, 85, -63, 42, 34, 78, 95, -99, -24, 54, 16, 112, -10, -68, -62, -65, -111, 50, 79, 43, 116, -108, 23, 75, -109, -95, 23, -27, 35, 14, 57, -59, 2, 40, 112, 74, -6, -72, 99, -119, -4, -38, 60, 26, -117, 84, -99, -95, 16, 51, 65, 47, 2, -47, 44, -50, 25, -95, 121, 67, -96, 97, 27, 5, -110, 64, -41, 28, -30, -8, 18, 36, -81, 26, 14, -51, -96, 88, 44, -106, 81, 76, -104, -42, 111, -18, 22, -80, -82, -24, -20, 5, -102, -59, 39, -110, -21, -125, 61, -32, -77, 123, -31, -38, 58, 33, 20, 106, 94, -99, -117, -62, 124, 58, 70, 111, -24, -81, 33, -31, 11, -71, -26, -118, -14, -53, -37, -38, -56, 72, 51, -69, 27, -12, -23, -22, -10, 122, 36, 28, 54, -76, 15, -9, 55, 28, 16, -92, 70, 75, 27, 79, 75, 86, 96, 44, 80, 38, 65, -32, -58, -44, -36, -98, 13, -88, 58, -93, 107, -2, -4, 92, -57, 20, -61, -12, 46, 85, 49, -40, 86, -97};
    tmp_msg_2.md5.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);
    IMC::QueryEntityState tmp_msg_3;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.433657761699);
    msg.setSource(12118U);
    msg.setSourceEntity(68U);
    msg.setDestination(51211U);
    msg.setDestinationEntity(115U);
    msg.maneuver_id.assign("YZEBNNAFTKLKLHKSPKYCOWGNWETOBQHVMBXBANPLUYLLMKDJXXDGGOBRTYSSWXHHUDWNA");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.879607930051;
    tmp_msg_0.lon = 0.662704269332;
    tmp_msg_0.speed = 0.318276462538;
    tmp_msg_0.speed_units = 45U;
    tmp_msg_0.duration = 18231U;
    tmp_msg_0.sys_a = 17373U;
    tmp_msg_0.sys_b = 65358U;
    tmp_msg_0.move_threshold = 0.196577935719;
    msg.data.set(tmp_msg_0);
    IMC::Teleoperation tmp_msg_1;
    tmp_msg_1.custom.assign("CWZVGQVDEAQJRCWPXKTMJEYWFDZSPTQULXVE");
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
    msg.setTimeStamp(0.0632869936285);
    msg.setSource(33963U);
    msg.setSourceEntity(17U);
    msg.setDestination(21404U);
    msg.setDestinationEntity(46U);
    msg.maneuver_id.assign("RQCPHRAAOLYIQURSTMOZWVHLYUULGPOKWKVPTMEWIQJUNZJPFXMMFDGSFXEKBEFKCERJDUNHHNJXUTTVVXXC");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.651029392743;
    tmp_msg_0.lon = 0.493728112689;
    tmp_msg_0.speed = 0.221481153479;
    tmp_msg_0.speed_units = 120U;
    tmp_msg_0.duration = 64061U;
    tmp_msg_0.sys_a = 38703U;
    tmp_msg_0.sys_b = 64479U;
    tmp_msg_0.move_threshold = 0.307054084028;
    msg.data.set(tmp_msg_0);
    IMC::UASimulation tmp_msg_1;
    tmp_msg_1.type = 120U;
    tmp_msg_1.speed = 6882U;
    const char tmp_tmp_msg_1_0[] = {106, -50, 83, 40, 120, 108, -24, 43, 7, -16, -73, -48, -3, 18, -14, -100, -82, 33, 50, 105, 98, 105, 106, -9, 20, 42, 50, 30, 78, 32, -43, -100, -97, 109, -54, 77, -63, -24, 27, -114, 78, -13, -121, -89, -96, 80, 32, 57, 14, 22, 13, 30, -81, -35, 15, -49, -107, -39, -71, 44, 100, 126, -115, -10, 82, -2, -76, 7, -24, -18, -85, 122, 77, 31, -99, -50, 13, -46, -113, 21, 30, 67, 14, 58, 124, 126, -71, -98, 85, 31, 72, -20, 22, 79, 37, 80, -120, 60, 46, -1, -33, 31, -24, 72, -105, -51, -76, 2, 116, -31, 13, 62, 96, -63};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SetEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("VYBZHXXSRLEPLBANCGJLKDOZPMJMJQIAGYNMHMWKUJVUTXTDOCGUEINVKKUYNU");
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
    msg.setTimeStamp(0.735520351022);
    msg.setSource(20359U);
    msg.setSourceEntity(239U);
    msg.setDestination(63037U);
    msg.setDestinationEntity(129U);
    msg.maneuver_id.assign("GAZVSAYCMMBSMNQGOPPJEJPNLJKFEIDCDIMCKQZQODKXJNLDAZMSXIVDFJRUGREHQCTRLFFBTWTLMBHVMCEPHWFRDUAYEXOFOTCNJKPZSHOJKICZWALSETKUGLOOQGGXWXDDHDQCVVJHNRPREXKWSYZVAPYMRVHMWGRHEPZIUYDLB");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 54208U;
    tmp_msg_0.flags = 208U;
    tmp_msg_0.lat = 0.729177541621;
    tmp_msg_0.lon = 0.701532702674;
    tmp_msg_0.start_z = 0.895441990371;
    tmp_msg_0.start_z_units = 66U;
    tmp_msg_0.end_z = 0.650258740722;
    tmp_msg_0.end_z_units = 142U;
    tmp_msg_0.radius = 0.931558245673;
    tmp_msg_0.speed = 0.447751289394;
    tmp_msg_0.speed_units = 192U;
    tmp_msg_0.custom.assign("AKPDXSHUPJGPYNPSKYGROQNCWQXFTYDAHKKC");
    msg.data.set(tmp_msg_0);
    IMC::Reference tmp_msg_1;
    tmp_msg_1.flags = 148U;
    IMC::DesiredSpeed tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.524946322756;
    tmp_tmp_msg_1_0.speed_units = 165U;
    tmp_msg_1.speed.set(tmp_tmp_msg_1_0);
    IMC::DesiredZ tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.0747042612644;
    tmp_tmp_msg_1_1.z_units = 128U;
    tmp_msg_1.z.set(tmp_tmp_msg_1_1);
    tmp_msg_1.lat = 0.297632701084;
    tmp_msg_1.lon = 0.778865325204;
    tmp_msg_1.radius = 0.706195179257;
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
    msg.setTimeStamp(0.886858641804);
    msg.setSource(7366U);
    msg.setSourceEntity(149U);
    msg.setDestination(25254U);
    msg.setDestinationEntity(129U);
    msg.source_man.assign("BMEGOROQTCZRWIUCOPVGRMCUCBXFANFBYPGZRTJEEVLQKPSZNNXJVVRIEXHKQEVPZXLKOUDJSRITKGPFDATVLHDSWISEIHYTWSXDGCYFLYBXFAYDHNLKRYAPJZQIHUDGIUEBRDOAYXOUBFMKWOQGXJXMWJTAFCUKOJQJCWKNMKQJESSVNERUGLUDBLSYPBLXANJHZZNNPNHMTSMTUMIHLIWGMCDIPZELCFODT");
    msg.dest_man.assign("HAHUTDJMBFNJBECNZGXGNBYIQFJLXDHXNMRAEAV");
    msg.conditions.assign("YKQGGGFAHZYOMGUP");

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
    msg.setTimeStamp(0.180654415039);
    msg.setSource(50262U);
    msg.setSourceEntity(28U);
    msg.setDestination(6823U);
    msg.setDestinationEntity(205U);
    msg.source_man.assign("SUNVJZZWOXBOSWLWNAJHJZIRIMDQWDTVODNWBIYTEAHQPLFOENVAHQXKUDFXYTWSEWPCMJIYUZIOKSMHHTSCCGESJCJPEOKYRQHUXQGIDKXJUBAGPIJIITEFFDSMREBMMWZRPKVEDLZBPLVYKNLSAPAFKHPTFBKDPNEMQXSDCJGGWRGOXMKRVBCJLXYFGVXBCYRIUCQFXUZNTLWAGNUCLUZMEHQYBGKBOOQPYHRGRFTZ");
    msg.dest_man.assign("CTGWIKOVUXUTMVECAGRJIAOWHNXAKBXCSHMRQLKFLGZWIOJWJHNALIFYYDIXRUFOZEWNJSVEQQRIVHGEPZHSF");
    msg.conditions.assign("GTWDAPJJYLASVXDBMDPFKJNFDNZOZDNRGOEQQSXOBVBEEDCNXTDNGACLMJVXWRYRITKYEAEAIJSPHZWDWNQSVNYPGSBYLKTMOUXXMWCCOCYVFFRFBFMFMCLUFZUFEXREVIUZMHCBAIVRSGQUQWBMLJKKESQHTABQLHUTFYODDJSXWLOPKPAQTTCGINXKCWWZGKRBHMZTZLPNJHLUGGJVKHHBP");

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
    msg.setTimeStamp(0.981394940282);
    msg.setSource(61020U);
    msg.setSourceEntity(127U);
    msg.setDestination(55034U);
    msg.setDestinationEntity(117U);
    msg.source_man.assign("JAJNITFRSLGDRTVJWDHIYOBHTPSUNITMVFFMOGOQAONZKPPEGPITFQYPWKGSRZYYZEVHRRDUEQELUHKFJERGVOXXUPAUJRRHCIWFBAUHHLDUVOWQISGKZNOEWJZRWIASFYDZKPWFXNMKSBYXHCCULWIQUUBDDVXVCLDTGFOCGVZCCXEK");
    msg.dest_man.assign("RIVLAWWAFRZIDTKGMLORHGSDLYIRGDJXIHOXRJOMYGQDTQKCSAOAUUVSREASTCBYPOJUESCLAQBTQGCMRVRJCNQZVDTACBEFEBKKUFESZNRNWNKHCVKAVSBQFUDTAHPPTLQHMTNVJTRYWCAZXFWPLDUKXXZOFYDLUVWMZUEGPJPPZFX");
    msg.conditions.assign("DFQZAGSLNPIJZTKLABQLPI");

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
    msg.setTimeStamp(0.259847922294);
    msg.setSource(18623U);
    msg.setSourceEntity(39U);
    msg.setDestination(39504U);
    msg.setDestinationEntity(155U);
    msg.command = 202U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JLTAUOUUXVNLMHNKZGFIZEFPLRDJQAOCNFMCHYFLYCKSDYTDBSVWCX");
    tmp_msg_0.description.assign("WXLOETRLSXYKGPMHEGWVCPASFLVGQBENFZPNBYJZEWCBQUDMUKBMWOVXVBOQCNHYED");
    tmp_msg_0.vnamespace.assign("ZHTMWPKUYXIMYGTSIVPXFHZULFEQGVMTQBGUEOQHMSKRDOCDKVPLNJWIBXDJNCHXNEQEGMHPMPSJEPBPBRALTIQRVENNEXNLHWYWKLNGDXOSCSLUQOZIYAORBRNCOFJIRBTDVGOFYNSZTQVALJYCOYIBWPHYAZJIAFGVFZSQCKWKAZJSCVSXDAJMTJZKOVAWPTUGNMHDKHUCFWLRUEDXDAQEQVUBDFBWURTTGYRUIHZFXBWR");
    tmp_msg_0.start_man_id.assign("WSLQMRASOPGPBXGLLLCZESSNAYGKOCZDVFPVIAATNYAAZSYUJTWMRGPNJCYRIIVEXOVDAEOFLUCFMYLXCTZSWAMINUVZTBUHNDGNEKFYEJ");
    IMC::IoEvent tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 180U;
    tmp_tmp_msg_0_0.error.assign("XRZJZNUATFGMPJYDPKIGACSDBBXXIMWHIOPTTMHQTJMNWBJEPSMGXLYOLIAAYRYPINNAZILLWKRTLPBCDJVJSHGLNHIFTVDAVCCQZJECNOFPZFQTWOMVGXXYTVOZFWBFBHZDEVNVKSTEAIRRUSHDKDOTUDSYKXURZLGEDDUUCRZQCSEYBEUXBVKMZOFEFQQGLHWJRG");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::GetOperationalLimits tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.563821713041);
    msg.setSource(57569U);
    msg.setSourceEntity(162U);
    msg.setDestination(22839U);
    msg.setDestinationEntity(189U);
    msg.command = 114U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JTJTWJZVJMFABUZTHXZOXBSZBTOYASWYVKVKTPMBUFSPHTNCQHFFUGQWXQSGHRFLKNDPAIAWWWEDKUQOGDRJDTHNNOIZNKDEVTJIXYCGXLOLTIEBHNOMIEKGPALPLONWJGQMIJMLKPESZFMEXDCLQWGRFBCVNEPZDGYYDCVJDDYGLORNCYAVFYEHPOQTMGUSUCRBBXXHVMISLHECAKZQZZSRQWRLIBVAUIPYAHESXURKYOCMMIUB");
    tmp_msg_0.description.assign("MHWGWSRCJWGTHGYZVOURKUQHULNUKIYQWSQUMDIWEFORKZTEXUWCZAGNAUJSGLLIJSSWKPNGNOBEDAZCXLTYIVBUMBCZNLBLSFOEOQVKYDMBKJJDAXAPVANPWIAFQBHBPFETXEXNRFDKTMPOVQTDMPLRHCVFMCLAAZKHCUOFGZVLHRHIPDDGXMJYXPIEKNVCYTMZXEQRMSTVJREQARJNCXTQPYGZQTKXWLOSYVHFFICUJHESGYZYDD");
    tmp_msg_0.vnamespace.assign("ZJZJXGRYUTBBVFZXZUKDDSIJUXOOIKVRMBHNACRYBCGBPLYDMHXMDQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VCBVCNXIMJANLHLUOOONABTWTLDQYMOHVJGMHBAVNRRZWMWZNQEGGUWXTFJRYDXQOTKMQLZRUYKDOTSIIVYTZGCACIJHHOQGQEACSVYLBDRGJSHAPPENLRMNUSDSSFXNBBIDEEJHCHCQQUCOWWMMRBAXZFONXJZWXNKYBPJGLBXKFFSVDWLUMRTVJPFKSYGUUK");
    tmp_tmp_msg_0_0.value.assign("EVBTSSSHVNWZIQPMEIKXUQVVVTECGFHTTLTNEWRORFSLBRDCBKBKPORQFUWJGZLNZGEKLCEAYAALICULMGFTGKUQFGDXMSAXGIPVMUYJXEQWRNFWSZBOZLDNJDOYPIOYATMPFDKNXQVMJZYRMKJCOBNFOEIZGILOADCIXHCSAKAXRHUUPTVPCWS");
    tmp_tmp_msg_0_0.type = 26U;
    tmp_tmp_msg_0_0.access = 163U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VJIKQONSGYJLOOKJYHBFPAFRDXBVSZIDKVXUJCVKGGTBNRQWUDMSDKWUPHIXEJDNCYRPRCWZLFZLUSCJTCEEINFHHZRYNGQERAYBQRWLYXWFYMTPLIDTNBGTJKBAHAIOGPDVLGSWXDLRYECEZNIGOCRABYEYSQNAIQKJLIRQM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YOGXBBCWJPCYVIWTUFIXXZLNKOWVFXZEUUQCODSBRYTTECRKVGTLNMQZLDLGFQEGIWASGIVEXKPWVASNGMSKAXYYBRSMJQBEFTYXACJHOVZLHHVHFROAISWWMYPDILNUDTYJPEFWEXKGKIPZQYWSEPUXYZOZPIDCAUMDBUOZUBNAHUQHVPMKTADCRKGHPMOHJQTHOCNFJNDISETDKGKAMJLNVCQAXBOZZJFJWNHCDLRQPMRQGBSRFE");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 23588U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("ZQABTACYKSHGCFCKTVJLMORSFNDIACTYEHDGAXENMJAIPJJTWKOHKLVJDZKGNZIZQPQIAVOUQPBFFVNBGLMAZJOYYRAUUSGGPEKFIXJYLWMXEVCUKDPCSUAHCFDVBCDTSLMNUVUJEM");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("TWAXYCEZAPZXFWCQCCHJWDPESPTZCTJCDBEABFBZGMBBJTHYZWNCLYOHJEEUDNN");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TrexOperation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 34U;
    tmp_tmp_tmp_msg_0_1_1.goal_id.assign("KRNQBKSRKLSEHOQVGKXJVAKGIMFTQEVTTZZZXZAFDQBOHGKBWRNCBZABWPNFNVOXQFYAXHXDRDZLGIHYGBDZQCSQOYRSCMUOTNGKMNHAQAMWSSRSQQPHOTECMMIDECJSDFDXTFTXYVUIEZKNSWBXLZRNRFJLWOCJDIUBWMMUYGVUHAKVPOTLTERCGWAA");
    IMC::TrexToken tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.timeline.assign("XDBQSGCJOILQKFHIKBDYLQQTGROXTPFXHWYSTIAPFVINNWVGPGLOAUEZMVPHNQCUAWBRTQNDMTWMWCXFWDOJGJHDVSIYDNHKYUMVYVLEUKCRRPMLSTZZAUGWNWKSRQOANWVBXADAUJCITEKLMELIRUOCYSIFKXESGJRHEFXOVQELQGCBULZGPIEXPOODDGVLZCJFJEKRTKMAYZBAMVFICXXJYUW");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.predicate.assign("HALMDVBVKIMSZQRKQXJIATTMAOCBAZHNDUWDJWCNBLGVTEWJXXUWWSKOIPVYHZCZNATICGYWGDEONOVEJISKMYOXSFPOFQPNFXCXPQTGDCLHORBHEMWQGIEUZYUSIYPNQDRSLJLWLNRLSQDGBLKPQFAJXNNCHFFYATGTIRMRCUMHZSKVACWJOEXKJZLZOJDRYGEVXRFRSRUPLHZKGYIPOFYTVNUIKHSFD");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.name.assign("AIMEUHUJPNAXGCBOAZDSIGQETZLQWVVEHIANRPTWYSREHNNMCVCSIKZQRXYMWJGBHMUJKFZDLHSUWVGOAHIBBFFXBYADIETDBKLMKJKZIFWCZQDUYQXPBBHOFNFXEIPHRRWXOLVYPTUYCIWGEZRWQFJCKLZSQWKTTHTEPVPTMAFXBODECFNUPAUYGDENTQVUMKOVMVQTYLJORKSL");
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.attr_type = 213U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.min.assign("CEARLTSUSFBVJBFYESXLROULCKBQAURMBOJDXDUYHPUXSREGNWJWKQHDBRTKTKMPPXHSZMIMWQHYUOZQVQKPHWYLZBRFJZNADITLYLVZPZUPXBIHKGDYJNCDQCGCGVGUMTRNCFIEKFAWJEFWDIAFGOSB");
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.max.assign("TLGECWSXTRPYAKMKWYUVJUGFZPAEOYKTPDIUHGNSLNPPHRTPFZEMVRVUHKTHOQFPZERSVGEYFJZLNFUSYCQZSQYDBWSYJXXMQUOAIYBBKZCAEGAILUJJSTRJLWQICHOFYKLRWBZOFFCMWHJJHVAGBRJQTVAEQYCBILJDCSZ");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.attributes.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0);
    tmp_tmp_tmp_msg_0_1_1.token.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 49U;
    tmp_tmp_msg_0_2.plan_id.assign("BIZFZRZPINGEXTKWNMLPFQEFPDKALUVXNITDL");
    tmp_tmp_msg_0_2.plan_eta = 1315988009;
    tmp_tmp_msg_0_2.plan_progress = 0.68735838759;
    tmp_tmp_msg_0_2.man_id.assign("YHGZOANNJKWWGIIDUSEFELFJWDANFZYPPZKWELEJIMAMSNTQQHYSFDRWUCXZXIHXYLDNBOCUPWVEOVJXNTMXVVVSAXSLKYQSXXWZHDHAZOXQBAHHKBPLWRCVGCFRETMVCORTPCCPDQSGGIYIDGZQJRGHQYRTAMGUTMJTLASHCOVAGZCFMEIVFL");
    tmp_tmp_msg_0_2.man_type = 25281U;
    tmp_tmp_msg_0_2.man_eta = -1339815545;
    tmp_tmp_msg_0_2.last_outcome = 8U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Acceleration tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.time = 0.0719658863405;
    tmp_tmp_msg_0_3.x = 0.311467237627;
    tmp_tmp_msg_0_3.y = 0.435952535038;
    tmp_tmp_msg_0_3.z = 0.416483397619;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.506587273293);
    msg.setSource(13981U);
    msg.setSourceEntity(168U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(63U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ALVIHHYLYKGWEMIXNKYAEYMKJQWTVJCZFPWPWKHISCKOXSHKFJVCELVCOOUBAATSASEPHOGQDXJDXFEKMBRDDOZBZIVOYCPSBFEUYENJQRNIIXYRYSKWQPLONANUPRVGUVQBEDFQZZTIWOIEVGMDKGGYJIQQFTWBSLASXTZUACCHLUYCRHXMLHRZZURBJNGNIFPBMMUDTTULQATDWNULBXXRZMFNH");
    tmp_msg_0.description.assign("ITDTJMPMFQFASAYRCPKKDLOJRXARHXDDRBVYUYQIYCFLGP");
    tmp_msg_0.vnamespace.assign("LPLWVGVMILXGSBKRF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("POOKVSMMKKYDUGMVDKGIUWVLXUOAXNLIYHIXJJDYFFSJOFFVIKRUZCHJUBUQGSXBEKPCLQQMJIZFCTFPHELBDAYWVDDJPAHKWPNTTGENTQNNJDHZZOVSRFRXASVZQKQVHKBZFBREXRHGPNOEAWDTXDGLCCXSJSUYMYRCHGUGJYLIWEIBNOBAZIFW");
    tmp_tmp_msg_0_0.value.assign("GQYSGPSYUNBZFMAMEXFFJKTSXJVLKZNXLAAAHOWQCSGGNFDQHWIBSRIZLJGKDICOJRRPGCRMVWNHDQTZWXKTWKSENUQCEHPDIITPOZOZABWALPMHQBVVUAXKBGBLBOHHXTUZPXZGFYHTLGXFWDCLYPDMNUCIKLMYEMIIRREYOXIDFPERSLOPYESENWAICNOZDQJQJETVKSYK");
    tmp_tmp_msg_0_0.type = 35U;
    tmp_tmp_msg_0_0.access = 226U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XJWNUVDPEURTGIMJQVYJDNLSMGDJQPYFIPWOMSGQJNCFLHWIKQHBAXFJPCAHDLNNUTPYRDEQDEVRTQTMBSJZAEOAYXRWOUEBCXOZJZRVTPLKTBBEQMCUCGKHTDIVHIOIUWEQFNZFPKMALXOHCTYPZCLEHTGCBOLWXZJRIAEJNPMUGWDOLHKBZYNKNIAKCAFSZFNSSHVDZYURDF");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DYINJXIGDPFKRPBCOVVGARXZLZEENYRUSVRJYPHWABBHVMHGWTMXNJRTQXDHABYBIPMDUSDYLVGBJVVAIXDLAPPKLOOGWHQOIDADNKUOLELGGCNKWXICUP");
    tmp_tmp_msg_0_1.dest_man.assign("HGXMICUDTXAEAQHMTOAFXRVDSPEDERNPNGNWTNVWCZOZUCDGVLEOKIGUHBQOSOLEJWJBRWMLLVHYOYIUDVFJQOWYXLQNKDLXIVCOBCJRYSFNQLJKMIZFSBCFQHBPBOYRYNAMUFTIJGSQUXSMXLCWFZDQFGWKDHPUTKSHJIVQBZUOTMXEWHSIKHXZGGLHUANYZVUIAXTPKZYEJZECJCBPWSTRTFF");
    tmp_tmp_msg_0_1.conditions.assign("HVZVDQHIUETYWGZOYOEJXFHWDXEDESLOIOGGSFRZLMJNMXYERHNODWJMIKTAZKEALWTAPQFDVWCMPNWAPKCOYRRVIFTDPGCHYTSJBQAUICRXFBAGQGNZLJDBIULEIRQMPDEBQPK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::IoEvent tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 231U;
    tmp_tmp_msg_0_2.error.assign("NPTLDOUQWMAKKVEWMUDEFJHAXMOWUPJJTLCFJTWCCIJBEMPZHSKJRVVAVXACXIDANNYTSLQBYAZMKMGIUJRHNWABNYIWKRRVWGKIJCHGOAGFEFMPSELPQXFZKHIBRFSSHQTBLOU");
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
    msg.setTimeStamp(0.917038501378);
    msg.setSource(63457U);
    msg.setSourceEntity(229U);
    msg.setDestination(56792U);
    msg.setDestinationEntity(184U);
    msg.state = 161U;
    msg.plan_id.assign("BHATDZQBUFNDGROQVPVKPYASSNWVXLWFJZBARPAFKV");
    msg.comm_level = 199U;

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
    msg.setTimeStamp(0.432305661136);
    msg.setSource(13821U);
    msg.setSourceEntity(209U);
    msg.setDestination(4545U);
    msg.setDestinationEntity(9U);
    msg.state = 226U;
    msg.plan_id.assign("NNDCVTIODXJMLYKREHRFFC");
    msg.comm_level = 48U;

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
    msg.setTimeStamp(0.285562184203);
    msg.setSource(52157U);
    msg.setSourceEntity(2U);
    msg.setDestination(45087U);
    msg.setDestinationEntity(124U);
    msg.state = 30U;
    msg.plan_id.assign("IVEQYHDWEUTBSXKLFOHIYMNJLYYSSZPUHGRMSPDELLNV");
    msg.comm_level = 82U;

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
    msg.setTimeStamp(0.211427213143);
    msg.setSource(34979U);
    msg.setSourceEntity(53U);
    msg.setDestination(60306U);
    msg.setDestinationEntity(140U);
    msg.type = 78U;
    msg.op = 213U;
    msg.request_id = 19156U;
    msg.plan_id.assign("ZBPIQQBWPFKIXPUMDEOKZTVWQB");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.242539860738;
    tmp_msg_0.start_lon = 0.566933218596;
    tmp_msg_0.start_z = 0.0505863535504;
    tmp_msg_0.start_z_units = 67U;
    tmp_msg_0.end_lat = 0.587774306292;
    tmp_msg_0.end_lon = 0.43520445881;
    tmp_msg_0.end_z = 0.671028768926;
    tmp_msg_0.end_z_units = 134U;
    tmp_msg_0.speed = 0.205615262433;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.lradius = 0.231349794515;
    tmp_msg_0.flags = 35U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QRTOUBVMWCLBFKTXSSJNPDUVZUQJNJVNBUMVOOIGFIJBYLRPIVHJDGRMTTVHLQCMBWSFVWZIOTGKPJZNHFWXLPXHKCAQRGEMDYSQUMHWQXRWFACEDNQDSXSADJESARAGYZTLJPLYWKEOGP");

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
    msg.setTimeStamp(0.89480206327);
    msg.setSource(55376U);
    msg.setSourceEntity(202U);
    msg.setDestination(29319U);
    msg.setDestinationEntity(184U);
    msg.type = 169U;
    msg.op = 165U;
    msg.request_id = 1122U;
    msg.plan_id.assign("JCOUNDTBXPHFLYLRUZTHWOVZIALILRHEMDBXAPMPPFDQJIJWJXXJUAWSTVAIIYFPECXQTMPISKXDMOMGWIVVORINCWAUJNCZEYXHFHTKBDUCGKMVMGWSINKHECESQWZLYQVZUJDLANDCSIYO");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 57U;
    tmp_msg_0.entities.assign("LLIQJZRJUHYMORZJXTCXXRKYHQSGKBKLTBGQHJGELYSBVLFNHFBZTNIZNNUEUECPCWRSYKOKVRBTPXRTOBZMUOPKECDJAZSFXJEHQINGOLCGDDGKHXHQQZJYMLWDMXDXHCQYVOFDGKPCTLBEAMUQUMCTAXU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IDWGBHIIQHCNZJXBGGZZHZVAJDRTMHEMLQHUKBGFPOREOWTXCMDCMQICARAKHELLXKJBPMZKSPDQVONIFNFFTQUDEPHOXOJQXUMBAAEWQRHRI");

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
    msg.setTimeStamp(0.460205122139);
    msg.setSource(41703U);
    msg.setSourceEntity(101U);
    msg.setDestination(4904U);
    msg.setDestinationEntity(162U);
    msg.type = 70U;
    msg.op = 20U;
    msg.request_id = 6445U;
    msg.plan_id.assign("KEKSIGRKMYYVNUJZIWGXNUYNVQDMBQCRSKWROZMHQEAUWAXXQLOGHROHFCJSMMPEGGFRJLTTANBTXIWCPNEFDZYYAIWORUXONKKMP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TTZTLDJMTKEIHIXQJPKJAOTZBAGGFPQFNJENCDWRSXKZAWVNMCUMXCJAUBFOCUMQMWTGYASIVFXBSRBYUYKRDTEZPQIWLAKCUZSKRPDACGOZOEXHLXLENCRMGGCHXBOEIAMUSMMZJZDGYGD");
    tmp_msg_0.value.assign("LPVNXJSWXIGDCKITPYRKFLCPEIGZDMATCDNZCYRLWGWHGXFKKRXOWUTKNHUAMBCRLMLJHRKWXVUQHEVNYZSPHPFXFUYAEUNOZAEIGROZMXASNBLQKVOKJVMPAYOIQKQWRJQMCCFWMIMHBGDUZSSHZCPVONBBDNBIDWJJFJBFCYMHYDYXLBEWVITEXERNDITFOUOHJFHRB");
    tmp_msg_0.type = 165U;
    tmp_msg_0.access = 181U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UPQQDYFINTOILVDGESACEDAGXRNFMLUTSWIJNELYNQJSRSRJZPSQADZTWBQGLQVTKMNSPYOBMFSFMULKWCZHUYUODAOZWRJBKFZOVUAEGWHNDTZZJWCCUWWCBCQFTOKFYZCGLIGCAPMORDJDHEBGOFJKVIEYXLSPFPM");

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
    msg.setTimeStamp(0.85946936716);
    msg.setSource(41192U);
    msg.setSourceEntity(114U);
    msg.setDestination(4751U);
    msg.setDestinationEntity(18U);
    msg.plan_count = 50889U;
    msg.plan_size = 2462511700U;
    msg.change_time = 0.484211393666;
    msg.change_sid = 15083U;
    msg.change_sname.assign("LXPOBUDCIKMDTIINUZWQAVPDHJWMQBFNGQIMETXCNWEZQNHANQCKREULMOXDSCPAHJTTXRKIFWZXJDBVAFDRQPOULFKGVAEKEMYGJETRKYSGWPGZDNRUPSYSLVITGYQVDCBYVHYLGXHFJMSGZTBHBBOWSXYIVIZNMMSLWFMBPDRJACNJUHTECIYJJ");
    const char tmp_msg_0[] = {-128, 32, 40, -107, -30, 19, -81, -91, 62, 11, -52, -61, -73, 41, 59, 16, -48, -105, -54, -62, -29, -1, 10, 8, -89, -66, 66, 50, -113, -25, -21, 116, 78, -13, 91, -92, -6, 21, -5, -96, 36, 81, -26, 82, -61, 40, -43, -34, -104, 80, -88, -117, 16, -118, 58, 31, 28, 81, -8, 48, -69, 120, 20, 97, -93, 64, 59, -116, 99, -67, -46, -21, -128, -114, -53, -2, 13, 24, -34, 111, -39, 64, 15, 5, 46, -49, 47, 37, 80, 86, -104, -55, -26, -71, -81, 4, 47, 55, 43, -90, -49, -100, 106, -54, 61, -116, -99, 64, -128, 122, 75, 106, 106, 74, -126, 100, -1, -119, 121, 84, -18, -82, -49, -76, 125, -33, 47, -39, 31, -54, 47, 91, 117, 23, 72, 50, -88, -79, -62, -89, -83, 69, -116, -24, 87, 116, 68, 82, 46, -54, 92, 52, 1, 24, -101, -6, -32, -6, -35, 75, -100, -17, -79, -69, 84, 71, -123, -76, -82, 112, 117, -87, -95, -53, 119, -70, 104, 64, -58, 38};
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
    msg.setTimeStamp(0.179685002402);
    msg.setSource(60783U);
    msg.setSourceEntity(27U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(32U);
    msg.plan_count = 45665U;
    msg.plan_size = 4162271718U;
    msg.change_time = 0.358464371596;
    msg.change_sid = 8496U;
    msg.change_sname.assign("DEOKEMIMCCQPLAVUFTQSXSHLMVBXTXOXHYNOHXUDWRBVJD");
    const char tmp_msg_0[] = {96, -42, 96, 41, -75, -35, 41, -102, 122, -63, -106, 84, -25, -90, -20, 79, -53, 91, 114, 10, 114, 11, 98, 111, -4, -70, 64, 30, 3, -43, 22, -112, 113, -33, 113, -9, -29, 35, -5, -69, 47, -90, 9, -66, -114, 104, -126, 51, 7, -127, -49, 78, -96, -42, -46, 95, 37, -37, 115, -63, -38, -90, -52, -7, 18, 20, 120, -126, -99, -90, -3, 65, 17, -107, -3, -1, -73, 6, -58, 9, 115, 66, -83, 37, 7, -74, -118, 105, 49};
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
    msg.setTimeStamp(0.962826644671);
    msg.setSource(62916U);
    msg.setSourceEntity(217U);
    msg.setDestination(52145U);
    msg.setDestinationEntity(235U);
    msg.plan_count = 27179U;
    msg.plan_size = 712797838U;
    msg.change_time = 0.769783644406;
    msg.change_sid = 60013U;
    msg.change_sname.assign("JCPRBIVFNGCYEHFONBYOXTDKWBITDLYEXEEMJFBSSGZORSRWWHIZQPAONJPTQJLKSEFRQJVDHBOBPMOMXLNSZTNVNCKZLKVMIWFCEILPHBLQKXFJUMASYZDHQGLCDLPKUZOLXKDTCDRJTIVCZISQBHEHAWVRMMFRKATDRJZG");
    const char tmp_msg_0[] = {17, 25, 36, 29, 102, 17, 98, 0, -58, -100, -20, -74, 107, 90, 84, 14, -87, 125, -56, 76, -56, -49, -103, -61, -16, -29, -25, -54, -46, 100, -90, 7, 117, -89, 102, -126, -128, 103, 30, -118, 9, 43, 56, 106, 75, 113, -54, -112, 119, 82, -56};
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
    msg.setTimeStamp(0.634538342819);
    msg.setSource(61513U);
    msg.setSourceEntity(227U);
    msg.setDestination(61775U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("WHCZXGJIVVUVYIGSFQLTAEPGNWSHYBKBIRFBEJMDGTQHPUYCAVVCHSPLECPAUAVXMOSNFNMOZXOBIFHDNPYKROLDNEUBLUXCGYAENHBIRTEKMPAYVNFEBXWTCDZUVODSTDQYJMJB");
    msg.plan_size = 13493U;
    msg.change_time = 0.168033042866;
    msg.change_sid = 63209U;
    msg.change_sname.assign("MFNLJURMAKRDUEECVKVVEVSLDIQPFMDHYZNCSXFANXHVBTIOWJPHZNKFDFACEKL");
    const char tmp_msg_0[] = {5, -50, 100, -16, -17, 44, 100, 8, 57, -19, 26, 8, -70, 120, 36, -18, -88, 104, 48, -123, 125, -75, 20, 105, -80, 99, -31, 41, -36, 44, -1, -90, -19, 11, -118, 97, -41, 96, -109, 36, -94, 78, 17, 105, -98, -42, 108, 67, -72, -45, 118, -21, -44, -121, 81, 26, 94, 17, -94, -24, 49, 94, 85, -46, 43, -40, -29, -57, 77, -122, -116, -24, -111, 103, 97, 46, 71, 115, 11, -69, -93, -62, 47, 38, 76, -124, 33, 95, -87};
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
    msg.setTimeStamp(0.81513393607);
    msg.setSource(51022U);
    msg.setSourceEntity(190U);
    msg.setDestination(14463U);
    msg.setDestinationEntity(10U);
    msg.plan_id.assign("QPSFEXMFJCHKCFPCPPTHELTTFXUFWGVNOGCBRRSBRJTUAIFQYPOLYQWWZVEYVGIWMOVWCBXNDFNVUEVCUSQZTCYEBJXOTOZMGEGDLDEAWPXBEAIYNOKFKBOKHGRSNRAKWJVBIUWGEBOLRASKSITMHQDAGMADNEKSRDGJSRLHYUKBPCANSCMRQZXQMMAXIJYYLTCK");
    msg.plan_size = 42328U;
    msg.change_time = 0.145237531305;
    msg.change_sid = 16743U;
    msg.change_sname.assign("LTHIAYDRUNEBXZLIKXIEMPMPCONPTMNCZMVCYUSMGYTJKKUWOJOFJRMYNGAOGRZIUYJOMCUPYRSAIDUTNLZWXHRWKSJGGWPRBJCQDIUQGTSBMVXVMBNZKYEZTQPOBTSTAEACXAIHLDXNWDCEGXWKWLPAYVLLRRARSFFZWXUHKVHGUMRHHJQPNLQLIFDKBD");
    const char tmp_msg_0[] = {-102, -23, 40, 30, -6, -47, 58, 121, 61, 71, -40, -66, -55, -45, 125, 38, -79, 74, 44, -86, 9, -67, -55, -103, 19, -7, -80, -64, 95, 112, -70, -49, 39, -118, 51, -42, 19, 50, 76, 15, -121, -41, -58, -82, 13, -83, 110, 110, 26, 61, -121, 95, 27, -124, -15, 105, -80, 65, -50, -77, 126, 5, 3, -44, 92, 49, -104, 1, -50, 115, -71, 120, -67, 19, -37, -41, -2, 32, -34, 85, -19, -86, 41, 48, 105, 75, 66, -9, -110, 15, -95, -63, 93, -86, 66, 75, -81, 3, 14, -28, 107, -83, -80, -128, -121, 115, -56, -86, 48, -7, -48, 15, 102, -76, -11, 58, -63, -31, -65, 62, 99, 13, 14, 96, -111, -72, -56, -42, 75, -68, 111, 15, -122, -126, 7, -114, -55, -17, -41, 83, 98, 25, 27, 110, -60, 82};
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
    msg.setTimeStamp(0.415265767169);
    msg.setSource(27295U);
    msg.setSourceEntity(33U);
    msg.setDestination(6781U);
    msg.setDestinationEntity(136U);
    msg.plan_id.assign("DMYIQNPBHQPRRLWOINGGVBGSFBWGKWYQVIHLVXJLKGJVOWEZRVCLGZJZAPXGJWOYUYOLSBTTCRUAXRXPHPZNHKIKITUPNHISCABAMPVYFMUIXDNLMTEGDCEQ");
    msg.plan_size = 9512U;
    msg.change_time = 0.491138091242;
    msg.change_sid = 17790U;
    msg.change_sname.assign("TCCQMNCMBZPGEXEDPASWKRROWRRGNUJRSMMRZHZIZEOHCLRDEPMHEDDVMXVKPTZLUGNFTHXTMSZQYBOSQGGNIPTWTKOPYEAHFEWQUHYTUCPIAOWVTNJWFLFHIJCVFGLQVNGZLILIGAKZAXTALQDKDZFJXXBXJPSHRQVBYOUWIYTIFSCFCBIYXYBNUEOMXOPVUKNBQNBJVYBJYFKKDMQRVGUKWDAPD");
    const char tmp_msg_0[] = {100, -118, 93, -84, -107, -57, 22, -74, 3, -68, 93, 23, 63, 55, 35, -12, 83, 61, 12, -89, -99, -18, -85, -84, 100, -13, -101, 84, 107, -114, -111, -63, -108, -73, 3, 122, 54, -76, -98, -63, -89, -12, 83, 98, -118, -83, 113, -10, 69, 48, 94, 1, -37, -14, -76, -68, 50, 12, 121, 1, 56, -112, 83, 103, 108, 121, -104, -106, 81, 120, -17, 70, -12, -56, -60, 76, 71, -35, 61, -7, -7, 44, 11, 6, 35, 95, 4, 39, -18, 35, -47, -119, -41, 27, 49, -87, 25, 55, -36, 86, -3, -64, 106, 12, 44, -44, -36, -82, -9, -87, -25, 43, 55, 105, -43, -61, -30, 86, -22, -39, 88, -58, 104, -44, -118, -84, -22, 62, 83, -95, -117, -17, 115, 101, 58, 112, 79, -92, -60, -73, 95, 39, -84, -25, 86, -18, -13, -112, 92, 109, 124, 84, 22, 91, -99, -54, 109, 57, -103, 44, -91, 77, 112, -47, 86, -61, -75, 77};
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
    msg.setTimeStamp(0.211840979495);
    msg.setSource(8281U);
    msg.setSourceEntity(38U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(53U);
    msg.type = 224U;
    msg.op = 45U;
    msg.request_id = 55805U;
    msg.plan_id.assign("WBWJUAPCFNHFXRNVYWGZEIGQOBSFXKJOQIKWQQVSFIYDMURWLMSLNECYKJNXTIDAYCAWUJRRPRPGMLYCPZHLALRCWDEXS");
    msg.flags = 42543U;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("IHPZGAEWRXBWEFABTVWQHWGHBZUTEYJYOZXKICILCSJANHZOFZTOSBOQRJNPJGBYYHIURLWSHFEICLNLPKRISVCXYWMJBCTUOCFOBMXAQKBEPSDPROSPFGTPKKPMITVQNFQVXEQMAOVPAKHJEVLJDKLKHDZLTMDANANLDFQSZVYEUXCITMEDGODCGQUBJFLDSWUYKIFMSTJUMHVPNWBZILRRUZ");
    tmp_msg_0.htime = 0.77060576772;
    tmp_msg_0.lat = 0.138334578403;
    tmp_msg_0.lon = 0.394863201049;
    const char tmp_tmp_msg_0_0[] = {-98, -44, -3, 49, 80, 26, -39, -109, -5, 18, -87, -12, -10, -121, 24, 117, 103, 40, -29, 69, -30, -24, 106, -126, 85, 8, -109, -66, 2, -86, 62, -54, -40, 88, -75, -100, 2, -21, 60, 15, -72, 84, 31, 77, 24, 13, 21, 88, 19, -101, -79, -72, -86, 103, -40, 22, 0, 42, 70, -114, -46, 126, -75, 64, -74, 51, 81, -99, -36, -106, -42, 52, -70, -103, -51, -110, -2, 19, 36, -25, 37, 29, -38, 10, -65, 84, 97, -94, 111, -128, 46, -67, -41, -53, -115, 29, -29, -88, -55, 54, 117, 22, -109, -29, 53, 116, 13, 29, 122, -5, -33, 29, -35, -28, 72, -49, -16, 117, 40, 4, -13, 55, -99, -89, -40, -117, -1, 76, 68, -45, 32, 9, -123, -2, 57, -89, 62, -71, 24, 3, 89, 118, -6, 93, 44};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FSVGDNLOEDOVYMOJUTKHAIWHHSMYKGKYQYPAYIOSJBCNUTVNJNDZALFIEAIFTQVARASDZBGYFVDWBNMTCWZTECHPAGEMUGBVXJXHWOLOIARIHPJMZ");

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
    msg.setTimeStamp(0.295999784313);
    msg.setSource(64368U);
    msg.setSourceEntity(207U);
    msg.setDestination(61931U);
    msg.setDestinationEntity(9U);
    msg.type = 171U;
    msg.op = 122U;
    msg.request_id = 25368U;
    msg.plan_id.assign("SITHPSWCLGAWDSRJVOSWBIHHAXKXNINEDGNFUELYNMFOHFMDWLARJNQLPNLABTAKPEZIICMQYDOICXSQNTWSVFUEUAZFXBHKOBLTYYCZWMJPKUJVUAZPEFQTNVPXUYXYMHQOJQOKCDIDHVDPUKBOMIOS");
    msg.flags = 41457U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("TWQGTYRGGHNZJCIMMUKSWHUADPJOWMHCDQDDLOUBZTIIUVXSWZVYGHLKSTQSAFATYVYXQOEJIYNLWWXSMFIBEKWLCZFOFIUWPOLPYRSBRGMUCLTMMNPDOEHZMJKEPQMSRVNPEDXFOUFADSREQJXZPADNFKIVWUQKVEABBHVJVEUBRGARBZF");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("OLIOTPVVYDTPAEFPAKAMSVIUREXYGOWCTY");
    tmp_tmp_msg_0_0.predicate.assign("CWMAZAGNGPMSEXLIMMYORAKWWUICBHTFEQBFJXWQRHXEVZDZNFGAADVTYCNTHFLGNHEHQUJZADWBEWIHRFWPVBGVCZUMTVOUBIJXPMDSKFAYMOYQKRPCDLEXOTLOUGKYDFYXJGUGOBABJTJLUVQITPGCMOSIUZPYHLEIAUIPXLKLJHSMQVJJZKRPQDACNKTYVJFQRKSRETDOCHNRBPVWSWDBCNYSFRDKNXISNLNZSOGVPICQ");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("FWHKHHVGDYCHIFGSNTPMKHXXGCGEXBFVIVJUUKEHLCVEFYZDQRKGLJEVLWLHPTBJSOOVGLMNIRPUXSWAQXSYWBPTJZRPFZDYZBLNCORMXSVNEEAWDYUMZHHURYASQIAUMXQWPTQVWOJKAYBPVBMFDOXJBEECFUUTINEAADTOI");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 76U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("FPYEVDZXOOLLXWZTTWSVFIIFWLODVSNLZZQADXIVTVYZNPOWWGOTBZXZQGDMRNLRTBOJMXKQQSNRWPRRVWVYHYTCDFMH");
    tmp_tmp_tmp_msg_0_0_0.max.assign("VZPURFSXBYETOODVNMIAQTVQWWVTJRGGKYUTTJHXGKFKQUKQXVKSBEMFUJEHOILXXYVFDBCRIOGZJUMJRNDKNLEDFFKSBIUZRYAODDLAZNQBFZYXYXVCECQZOLHDAQGIDOWWCYZBHWCNVCRWNJMCBWARHPHIBRJPMPM");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EXFBFIASPIXPDGVNDJRVZHYTRWLXSLNLXMCVGAMMFOTKXZWOMVQELNDZBWTQKUADBBAQQZYHFDWUJRVMQRSCKWMWHVJEX");

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
    msg.setTimeStamp(0.571408777408);
    msg.setSource(13905U);
    msg.setSourceEntity(163U);
    msg.setDestination(25728U);
    msg.setDestinationEntity(99U);
    msg.type = 130U;
    msg.op = 170U;
    msg.request_id = 49635U;
    msg.plan_id.assign("CFXZTWBIGJPLGBDRPJJYQIDCCCIUIORRFDEAQOGVZUOTKQANPLGBAKLHQVJWROSXFAAJYZWTOLWTHPPMPMRAEGMNIGECTQKALOHAFYJWBXIPNJTPFOJCKISDKVHMSRCSBHYDXS");
    msg.flags = 27590U;
    IMC::Heartbeat tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MVGAQCBJRWYCPGNYGLYZGUNGBIJC");

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
    msg.setTimeStamp(0.376743461735);
    msg.setSource(34384U);
    msg.setSourceEntity(29U);
    msg.setDestination(57564U);
    msg.setDestinationEntity(177U);
    msg.state = 4U;
    msg.plan_id.assign("FJSLHDRVRDUTBRYEQWWAPTYFBZRNJYOZJACRKMWUZLETYRHIC");
    msg.plan_eta = -1180431750;
    msg.plan_progress = 0.417280612057;
    msg.man_id.assign("BIVGQMHARAPCAFKQNQTNTETHGJVYWHGIUALOKTNSMUYKREHMAKIFY");
    msg.man_type = 35823U;
    msg.man_eta = -835319281;
    msg.last_outcome = 25U;

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
    msg.setTimeStamp(0.417806165496);
    msg.setSource(38314U);
    msg.setSourceEntity(238U);
    msg.setDestination(65057U);
    msg.setDestinationEntity(175U);
    msg.state = 222U;
    msg.plan_id.assign("HSAROQURDKGODMRALKXPDQEBIDEIFYSWVVPMOUCZOGEZPAHAJTUTFIMLXTHJBGIMHLEPGNUZJNQSHWFXZAKYZYYTWJBKFTMVOFGDDZJUWRUVUXSOVEHGKIPXCGIHC");
    msg.plan_eta = -633977158;
    msg.plan_progress = 0.687961654484;
    msg.man_id.assign("ITBBEVZNYHREBSWIYPFAHWHTIONSCRLBVOSPUDMTCCQXCIGXQJBHEUQIMAOJDLRZIRUVQOOZHSMZC");
    msg.man_type = 50253U;
    msg.man_eta = 1970494807;
    msg.last_outcome = 43U;

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
    msg.setTimeStamp(0.32385883357);
    msg.setSource(46341U);
    msg.setSourceEntity(34U);
    msg.setDestination(33244U);
    msg.setDestinationEntity(39U);
    msg.state = 92U;
    msg.plan_id.assign("RUELLMXIWNZSYJRSCORRCWGGQDCGMJEFQFEADTDKSDCATRLBJACHTOAZYGMPBQHGT");
    msg.plan_eta = -397613195;
    msg.plan_progress = 0.666575844982;
    msg.man_id.assign("KOFBLWQBHGYCLIFPRWEQMNBFAWCJLUJTAJXYMUHAVNHEVDKUJMUQNZIQOZBOAJFFXHRWGPIGGAQAVMLDVLNHADOERSEIMEXFKRLXDKIGBHIODNMJEIXRZRMAQDQGFCQ");
    msg.man_type = 9683U;
    msg.man_eta = -1281530676;
    msg.last_outcome = 125U;

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
    msg.setTimeStamp(0.133006186142);
    msg.setSource(51467U);
    msg.setSourceEntity(221U);
    msg.setDestination(38558U);
    msg.setDestinationEntity(67U);
    msg.name.assign("ZJEUPYOSXTGTKNIKUHBPWCXDXYMXZNCWQZFGQPDXVTHEBSOFJGWZEWUOFHYWTHABZJMYGTSHAU");
    msg.value.assign("MOIIMYWHOAERPJCVVTTBLUZOAXGKVSBQLIMUJ");
    msg.type = 162U;
    msg.access = 89U;

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
    msg.setTimeStamp(0.948571211572);
    msg.setSource(54716U);
    msg.setSourceEntity(94U);
    msg.setDestination(52370U);
    msg.setDestinationEntity(30U);
    msg.name.assign("QCLBQYOPVVKZKAOEZXLXZHYNAJMSRFDUSXIKUOLJCKJEKQULTGCGZCADXDNNPNBFEXDPYQFWUMSYOLTNGXEBKHZZKMIWEHVQULPYIR");
    msg.value.assign("GJNAVZLXHFVGWFOTAFIXMHRJUYKXMBBDFCIYXGRUTGQEILWHSVQKZFSJDSSVLJEPEMCFOQEYWKVJQERLTFN");
    msg.type = 21U;
    msg.access = 223U;

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
    msg.setTimeStamp(0.146224001095);
    msg.setSource(29169U);
    msg.setSourceEntity(230U);
    msg.setDestination(42042U);
    msg.setDestinationEntity(170U);
    msg.name.assign("VJEAZSKBJKFYUTDENZMITAKRZYFWNUIKOLIXUKFYKCLGLBQEDZWGCFTWFETRNYVUZTCNOSVBAGGTYXDQHLZSCLOTPNFPWBWIEPHLCBUUQKZMSLHELPHLGCJGQPENRTOVORWDINYZVHUAVJGKBCQAMPWSSRFADOUYUKHNHIODYXBMOXF");
    msg.value.assign("TPLRHSWUHOMLWUWVFCPCXROUMHRDBUJJGGPVOEOLXUSAFYVKVAJRQKRMFCMZNVMCICCPIHZYPZZGCHLBKADPOXGBTYUNFZHQCSFXSZFQKZAEPLVNEJEASFHKIYRXSNLATDMGWZCIZRICJGJDJGWAEBFODYEWYSAMNTVRTDKEYTTFRMENQPGBIUDBDODHSJKYBJWWXGTKTMQXT");
    msg.type = 190U;
    msg.access = 178U;

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
    msg.setTimeStamp(0.909719849509);
    msg.setSource(20771U);
    msg.setSourceEntity(40U);
    msg.setDestination(24728U);
    msg.setDestinationEntity(61U);
    msg.cmd = 109U;
    msg.op = 81U;
    msg.plan_id.assign("SFPDYZOHJKIEHWSPIAZRSFXBWMGAEWFJAQPUNJTOOYIZLRQFBTVJAJXTGGEFYUYNPZLEVFFQTEXROQZHAKOKGDCBGNOZPLMXVULICNWVAUNRIKXLGQHSANMLBEWEVJEBLDPOPSHYNUWICYNYKBCQXTKHRARDPCGWOVYJHTCOFMYPBSCZCJVRIIUNSMLQUMLNMQFDSXKMKGXS");
    msg.params.assign("CSXWLYCSTCBGCENXTI");

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
    msg.setTimeStamp(0.0951926899565);
    msg.setSource(55293U);
    msg.setSourceEntity(211U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(196U);
    msg.cmd = 216U;
    msg.op = 238U;
    msg.plan_id.assign("IELYNJQIENORLNCEJMDGXAFYKRRVQBHRDNTTQPHKLVTVVCJZEGMWRXSXBJKMWGUEMPZBUQBPSEELNGGZBKFJMTXDQXYGAIUKLNNOXTDBDZCUVYSDUMHNYQMIHFSWVTTNYOBZDPKPUMHQUIVCGLHQAOIVGZPHELAVOGDFUJXYIMFFXYNPBBZFCHKJQATAJREFWRPVMODPLUUHJRKQPOATKGBALWFEZSAHRROLWAXOOIZSCITCXZ");
    msg.params.assign("ZLIVVKFBXYVJSUKGTPSEFQVMMTVAOIRYFTTRACERQPAGXBUSFCQALOSUCAPNXRPRSMUIQCHXFDLDVDIEKGBIMQGCGNJHEKFQRBSHYCLJBTYLWLXOVYOMOFCWMVMNZYTYIBWWOHKGOGCEFVNRNEDKZGZA");

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
    msg.setTimeStamp(0.124930633268);
    msg.setSource(53997U);
    msg.setSourceEntity(202U);
    msg.setDestination(21633U);
    msg.setDestinationEntity(120U);
    msg.cmd = 194U;
    msg.op = 213U;
    msg.plan_id.assign("FWMKKMAGLHJNPMDXGRMKUDXDNVKWJSPAFTDEYOWPPNRDGTDBIGRYOMJAAXBQXNRRISCSAQ");
    msg.params.assign("WQXJZPBTROYNXRSIDLRKEQEPXUUJQBFBDALYZSFQAMGEHBZIOTKHONWPZMYGMDVDOTHQUCLHBTHTHEOHJTVDBPABKEILUMYNFGJIFWPDSICXINSPHMDRBRXRAUSLJOERVLRSYTCMKQJZZWIOAGXAPLJJZQZIWIUENFZQVJJAXKGYCHKBGFNKDCYGFXPAELHWGVSOYTCMKWRCDZVOWFINUCNPOFCDQNNURMYLMBWPEYWMVKSQKVA");

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
    msg.setTimeStamp(0.184921584503);
    msg.setSource(46327U);
    msg.setSourceEntity(104U);
    msg.setDestination(14412U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.839771573586;
    msg.lon = 0.490409588467;
    msg.depth = 0.560321292351;
    msg.roll = 0.246203268004;
    msg.pitch = 0.697846282791;
    msg.yaw = 0.336678571726;
    msg.rcp_time = 0.730515778421;
    msg.sid.assign("NHFWLSZNPMIZPWVDACHATXLSJILHGTMNGBVMUFCHTDBLOJQFESIJKMCUOFKJMKDWWECIQDAUECPSCZOBXYKQFXQICGUSILFUUFGNMTR");
    msg.s_type = 17U;

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
    msg.setTimeStamp(0.895533667585);
    msg.setSource(9430U);
    msg.setSourceEntity(251U);
    msg.setDestination(44864U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.898642175429;
    msg.lon = 0.656611922572;
    msg.depth = 0.767090350238;
    msg.roll = 0.263907157513;
    msg.pitch = 0.717777441376;
    msg.yaw = 0.806460619011;
    msg.rcp_time = 0.037239647722;
    msg.sid.assign("HRIWJVSBMQHVKUZFUBWLZJAAEQFCVRMIFAGKKZRFKDDYDSNREUSHLBRKJWEGTDTYTSZ");
    msg.s_type = 219U;

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
    msg.setTimeStamp(0.443600310026);
    msg.setSource(29859U);
    msg.setSourceEntity(242U);
    msg.setDestination(61470U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.891082498516;
    msg.lon = 0.0714962729859;
    msg.depth = 0.472455639126;
    msg.roll = 0.220093765959;
    msg.pitch = 0.428064982632;
    msg.yaw = 0.428776036716;
    msg.rcp_time = 0.60373493188;
    msg.sid.assign("RESFETJXPCQKGVWUVGVIIDOWMLKAVNRBCVPZLIYATJGSQGUKACSYRKBDCONUSXTONDGWJMVFURMRWDOKABVFMMPIDZIKHXBSBWLJCXQHDZXBQQQWAIOHMPHXVORWPANXLAYCBD");
    msg.s_type = 128U;

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
    msg.setTimeStamp(0.516730616578);
    msg.setSource(12054U);
    msg.setSourceEntity(137U);
    msg.setDestination(13111U);
    msg.setDestinationEntity(214U);
    msg.id.assign("VEUTCBYIQEROCSXSGFBXJVSGJRVAKGZIHDQMFZNMGSBUQHFDHBHUCICCFOZOFXYQOFIOKU");
    msg.sensor_class.assign("PJTVELMVSIURRWMCPPBHXKSZCXUNYARBYQIAAIOGQYTZCUZIXHMPZJVTBXEUWDOTKCAUWFJMINWRPQPFDKWEV");
    msg.lat = 0.35298949782;
    msg.lon = 0.0685778940374;
    msg.alt = 0.461494060574;
    msg.heading = 0.27044384345;
    msg.data.assign("HKBNTPWYRGOWMHKBQTVIFHOWFPCUJBKAVNGHJVXSANCUJJXUPJYZTLSBSYFGGYSIOWSCACGGMFTDRIOARWYEZHUVVHUIDZMGYESEPDHIMHFMWQLTZTLVYHAI");

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
    msg.setTimeStamp(0.818542249747);
    msg.setSource(25053U);
    msg.setSourceEntity(161U);
    msg.setDestination(2275U);
    msg.setDestinationEntity(13U);
    msg.id.assign("QHLCHNFRTINQOBANYSKDDYPJYEU");
    msg.sensor_class.assign("KJBEGSDWLSZHVPPZPMVPHOFZSFTCQIHXWCNXEOUYYRBDFZKXTGEZFGISKXTGGVQSCDWUZAEUTOIAGJBCMUDFRROEQYOEVISR");
    msg.lat = 0.501491644895;
    msg.lon = 0.981600645509;
    msg.alt = 0.777861253388;
    msg.heading = 0.0485725719699;
    msg.data.assign("HITNXSCTUSQFNFZOCNKLAAQAFFQTVACDMYZQDKJCBZIWMTKXFINJVFDPBCNXRRWLNTUSIHDVPTKFDIGCLIXAJKJYGSCUFHRKTOTLYZLCORSJUAJOHYDIRECBRZUPZWIPDXWWVSWVNEEGELHWLBOZBVYVESQIRMGBPOSKKMMQPHBXAROAXUJBOWQLJDPLHMEUPPB");

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
    msg.setTimeStamp(0.0185660680064);
    msg.setSource(56392U);
    msg.setSourceEntity(227U);
    msg.setDestination(24409U);
    msg.setDestinationEntity(23U);
    msg.id.assign("IVDGGJMXNKFDNOWBTJGDEWNSYNLDVBLMIXRXSOOWUHIGCZSODSCTZSVRXRKRYZQUPAVFPSPRWPYNVEEZQUVHTACOMMOHXQJW");
    msg.sensor_class.assign("LAJWWZAWSMBPDOZVFHVMLZHQSFWGZOCPYVJCJMXBIYOTGRGFTFIPCCIESJWMUBUQMKOTOFRCAZNQODTVINWEKVNJAKNGEXTDTSESWRIKBXWXJDMNKOLFHWEDQKGGDSTRVZUWQJGLACSIQXBGNORCDXZJPECPSKDYVDCLBGULABUMQMPYRIRULBXANAEAXRNCXTZTSIIPJPPEYMHQYUUFMFNVZRNXSAPHIGEQVKQTFYH");
    msg.lat = 0.930807524241;
    msg.lon = 0.273830166393;
    msg.alt = 0.91659091449;
    msg.heading = 0.552710580399;
    msg.data.assign("KVEVTIVSORFTDKDLJSKHQYPTRSJOOWHDWJE");

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
    msg.setTimeStamp(0.24433224219);
    msg.setSource(35725U);
    msg.setSourceEntity(174U);
    msg.setDestination(10254U);
    msg.setDestinationEntity(30U);
    msg.id.assign("RDLMWXGOOVWQDEMTTFPIIYKXQTIVYYLKEROSCWBIJQHRWTZLQLJMNBBLZCYBQPAAAXLHWNJGGHAKSHVDUN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OKWHJZJMZZFGLVJIJETYEVUCSOUFSSGYIELPXXLRISPAFTRZBUOVPOAMWMUTXHUBPQGAIP");
    tmp_msg_0.feature_type = 55U;
    tmp_msg_0.rgb_red = 151U;
    tmp_msg_0.rgb_green = 239U;
    tmp_msg_0.rgb_blue = 223U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.223857573488;
    tmp_tmp_msg_0_0.lon = 0.476818221865;
    tmp_tmp_msg_0_0.alt = 0.567284896545;
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
    msg.setTimeStamp(0.969690618301);
    msg.setSource(791U);
    msg.setSourceEntity(246U);
    msg.setDestination(31655U);
    msg.setDestinationEntity(54U);
    msg.id.assign("FNCCIYPORFBVGTLWOOMKROKWPXDZLJUYEBTVNZFJGNGBKSPFHPPOHDRNIUMWALJMWTGNHLZRZFSJTDCPHYKIWYUYXHTEAGSALWCUZPRRXTMWLFXAYMQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LKNEWUFWZJVVJVWHXKRNQORQYGQCQGFSOOTOREQQIRBECMWPBBSTCULBWJZWSIWJTLGXXXIIMGETMHRIQZOLEHKHUIIHVALNKZFJMCRHSSCAXMTGSCQZHDGYDZDFJYBDNMMZAFLUUFPNDDNDATFCWMOXBR");
    tmp_msg_0.feature_type = 171U;
    tmp_msg_0.rgb_red = 133U;
    tmp_msg_0.rgb_green = 140U;
    tmp_msg_0.rgb_blue = 210U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.270548849165;
    tmp_tmp_msg_0_0.lon = 0.22941646261;
    tmp_tmp_msg_0_0.alt = 0.17213208786;
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
    msg.setTimeStamp(0.621008508152);
    msg.setSource(41023U);
    msg.setSourceEntity(109U);
    msg.setDestination(39840U);
    msg.setDestinationEntity(87U);
    msg.id.assign("KZKFUTIHSVLPQGZAXPHYFYBGKRQYRUHEWDUFFDQHAXAVNSUIWUMZERPWGIYOBCWMVPHXIEIKXGCVSAYBVPNLLJXCJLBZCOSMYHQEDMHMNTVPMNCFFQTLIZGSTKCRAPENYULDLDRUA");

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
    msg.setTimeStamp(0.0949274429144);
    msg.setSource(36156U);
    msg.setSourceEntity(233U);
    msg.setDestination(47986U);
    msg.setDestinationEntity(57U);
    msg.id.assign("KDXSNPCUCHKLKOXIHUVMYFCKZYLSTXNGSIWQJSMWKTWOQKFVRO");
    msg.feature_type = 110U;
    msg.rgb_red = 147U;
    msg.rgb_green = 34U;
    msg.rgb_blue = 82U;

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
    msg.setTimeStamp(0.482910103572);
    msg.setSource(38906U);
    msg.setSourceEntity(180U);
    msg.setDestination(28114U);
    msg.setDestinationEntity(2U);
    msg.id.assign("CIOTHXUBKNXZLAMLOWGENISAYZXQTEHBJNJOBRABHQWVZUWROHBFUTCXCTZZFVUT");
    msg.feature_type = 79U;
    msg.rgb_red = 252U;
    msg.rgb_green = 79U;
    msg.rgb_blue = 182U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.138216646515;
    tmp_msg_0.lon = 0.280970695287;
    tmp_msg_0.alt = 0.792059810356;
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
    msg.setTimeStamp(0.149639729113);
    msg.setSource(10917U);
    msg.setSourceEntity(182U);
    msg.setDestination(2066U);
    msg.setDestinationEntity(206U);
    msg.id.assign("FIQZXHTXHRNUJDOCNPBQBHNYYMVQQAHXAIMBNEKAQZSSUPLBZXUCWBOAVDBZFTTRYENYGKOWJPJRDIXJLIMDVMFHUDIORSALGKQKMWEVKPPDTSOUPLAOWOHYGFRZLCTWJUCDVCSNBEQVKGEUMXIEUEHILAPBWYBNYVGYFRUQLWCTZLSSRJCPJCZUQISOAVTEBMJRIEFGEGVDFISKWAAWGOVPYKDZMTNJ");
    msg.feature_type = 70U;
    msg.rgb_red = 212U;
    msg.rgb_green = 240U;
    msg.rgb_blue = 125U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.559377832362;
    tmp_msg_0.lon = 0.167850947354;
    tmp_msg_0.alt = 0.244361603674;
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
    msg.setTimeStamp(0.489724153907);
    msg.setSource(14736U);
    msg.setSourceEntity(188U);
    msg.setDestination(3153U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.306014887236;
    msg.lon = 0.888286069562;
    msg.alt = 0.855485553777;

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
    msg.setTimeStamp(0.00592562810007);
    msg.setSource(45158U);
    msg.setSourceEntity(149U);
    msg.setDestination(4370U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.197938555121;
    msg.lon = 0.472054455037;
    msg.alt = 0.261448912415;

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
    msg.setTimeStamp(0.384153654312);
    msg.setSource(40383U);
    msg.setSourceEntity(146U);
    msg.setDestination(4060U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.260399069356;
    msg.lon = 0.967283228511;
    msg.alt = 0.144469954807;

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
    msg.setTimeStamp(0.0667663487386);
    msg.setSource(45448U);
    msg.setSourceEntity(240U);
    msg.setDestination(57586U);
    msg.setDestinationEntity(208U);
    msg.type = 147U;
    msg.id.assign("MUMBRAPQIIMXZLMOYXVFZYKQRCWMKWVAPOEQEHEPKDWVRTOBFUFYHWYWIXGAWPSXND");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 131U;
    tmp_msg_0.entities.assign("SSAQADBPAXIJPMLEAVCCRHFLUOLGRJTNVOIQVDXETIBRCJUYWXJOIKIDYDWOZQEUKVTXEGKDUBYZNOLMMCLUEOPJALWZZMVKHNNKOCXMSRTJMDVMCCYXUQTWFSKCHTWMZYQWHDPTUGJRIVXVASNFYXCMCIQAWUTIQURRPFBBWXGZVHTFKQPZNWEAKLVIPZENHZFFLSHWJAGH");
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
    msg.setTimeStamp(0.994913229942);
    msg.setSource(32890U);
    msg.setSourceEntity(50U);
    msg.setDestination(36897U);
    msg.setDestinationEntity(179U);
    msg.type = 121U;
    msg.id.assign("EERCRPCNMNWHSIIGYRAOJBJPADNGSRKQWVAOPXSHKHYZTJXDNIDHMNNPMGBPAFQIHKUYENFCURGWGSREBMCTQWIOUXATGLXFGPJDGREQQXWUDAXKXUOUWZEGSTQHTZZZKFMJZYBVJCJMELOIWILCDYMNLSPJELUGYDPOVSIEZTVLVUBYDTCHRKWUDFZBOPFOAYHFSNTLQOHVKLBCAFAVSVM");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 143U;
    tmp_msg_0.plan_id.assign("LCKXPYUOKIQQHMTMEMODUJBBHDKWWJUUQWEQVFOWLQJZIDISTVQVBOLPRANRLJDEMEIBHEITPYYTWLGGONFPVYWEDKFNFRPVHUKGCPLJZGMCEULLSGCAYYXYOTPXBFKQRHBSEZPXVFIFOCBTADHARLBNRYMCKORQUGUZZQKASJFSGKNNTXCGIBAANGRYAXZDIWRMNOZSFWJDHDAWSUJRVKQPCWVITZUMIMJDSZZNCABM");
    tmp_msg_0.plan_eta = -929711730;
    tmp_msg_0.plan_progress = 0.457941026339;
    tmp_msg_0.man_id.assign("RJXHGPAQMYARVXJLHCKMZAHHVZBQPSRXTQBVFKSEFZTJUCIBPWLEQTCJLJEYKDPQZPOMRFKRIUEVLTOMGYMNGWOKXVVCDXBEJQKWKCYVLRHUMQGUHNYEALAEUGJGPCXQWUIWSWNTHQMZFSXNYSXNNDRAUBWLIALJSIEBWZFZM");
    tmp_msg_0.man_type = 21974U;
    tmp_msg_0.man_eta = -827712017;
    tmp_msg_0.last_outcome = 232U;
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
    msg.setTimeStamp(0.734528363912);
    msg.setSource(47847U);
    msg.setSourceEntity(95U);
    msg.setDestination(43213U);
    msg.setDestinationEntity(48U);
    msg.type = 26U;
    msg.id.assign("XMECQPNJAWFUNSDPRIXVNUCCARLCIIFVOUQHETEWGSFGZJLSLPREMVEDYQGOWGM");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 14U;
    tmp_msg_0.speed = 58753U;
    const char tmp_tmp_msg_0_0[] = {-24, -73, -63, -47, 71, -56, 121, -48, -98, 124, -2, 73, 18, -48, -87, -57, 29, 48, -104, -19, -117, 29, 96, 75, -25, -93, -23, 18, -93, 71, 99, 23, -110, -100, -71, 21, -89, -110, 25, -117, -85, 17, 18, 64, -48, 70, 84, -115, 37, 56, -112, 10, 87, 17, 27, 21, -31, -90, 125, -4, -58, 12, -54, 96, -78, 107, 96, 24, 32, 93, 72, -126, -95, 88, -75, 125, -101, -81, 92, 28, -84, 40, -123, 10, 2, -36, 27, -36, 122, -28, -55, 119, -68, 97, 65, -12, -55, -28, -46, -66, -87, 22, 114, 86, -44, -93, -28, -106, 77, -75, -77, -92, 55, -91, 66, -120, 44, 119, 54, -49, -60, -51, -19, -43, -114, 14, -93, 72, 3, 107, 38, 74, 10, -104, 69, -4, 56, -3, 65, -85, -57, -102, 8, -114, 117, 13, 100, 18, 111, -32, 71, -97, 89, 96, 92, -17, 112, 117, -65, -5, -38, -55, 86, -109, 39, 26, -99, -99, -32, -110, -91, 10, -50, 106, -94, -69, -64, -67, -46, -18, 50, -30, -51, -97, 90, 42, -102, -38, 84, -55, 33, -99, -85, -59, -34, -104, 68, 97, 43, 15, 119, -121, 76, -5, -1, 99, -47, -22, -60, 38, 70, -7, 106, 118};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.234015013798);
    msg.setSource(16397U);
    msg.setSourceEntity(36U);
    msg.setDestination(39142U);
    msg.setDestinationEntity(70U);
    msg.localname.assign("NOSPIEIGHGABMPSOTNKMJISZBECVRWBQFYTGNFTYJVYQOXMOXMOEWEXDCRKWTVFZLRPHPZELLFKZXYXUJZBLDHNVDRQXCNCZEWAMPASCHYJXELQSKDGMBPJBTPHFUBTEDOFROCKXLUQXPKAACMZJDDIQRSBHVNWUHSGY");

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
    msg.setTimeStamp(0.76141095876);
    msg.setSource(22001U);
    msg.setSourceEntity(224U);
    msg.setDestination(17681U);
    msg.setDestinationEntity(1U);
    msg.localname.assign("WJWVPMIQUYVPYVJUIMLAYMCPRKXGLNZIWGUYVCLAUCJGMAKLQEIZFGEFEBWKNTNOONRCIDASOMEPCZZHNUJMJKQZXEJPKQOTWXGZYFTBLYUICATOHSUCIIQHVRKDXUGYHFSXZAXKFSAORZFECIGWBBGHNHIYHJHXLSWDQEGLBL");

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
    msg.setTimeStamp(0.629662904305);
    msg.setSource(42444U);
    msg.setSourceEntity(96U);
    msg.setDestination(50973U);
    msg.setDestinationEntity(128U);
    msg.localname.assign("AMDCABXCSGYHLTZLAYTRWYZHVSRRSPJMXQNIZBFQXGOOWUPQMQKADKDLUMBZFNUEOEICYAMIIJNXOSJXGIJUCEFBWIMNPRSZGB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZREATFTMMLNECKQLYLNTDEQXVPNQPCIYGNWVTPJMQSHBPYVSIACMTOGTDBUFYPBVNKAQWKZMKDWXJMRLFNEQFPU");
    tmp_msg_0.sys_type = 206U;
    tmp_msg_0.owner = 37600U;
    tmp_msg_0.lat = 0.129806839448;
    tmp_msg_0.lon = 0.138601859371;
    tmp_msg_0.height = 0.376545614416;
    tmp_msg_0.services.assign("KHEBFEUSWIMKPYMFCIVMJTGZAZEDXGSPBDIWTSKUBCGMSPTETERTWFGRUCQCFXJJCUBFAGLWLTNHLJQPLVJGIIOOOFGXZW");
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
    msg.setTimeStamp(0.000306412266046);
    msg.setSource(41975U);
    msg.setSourceEntity(130U);
    msg.setDestination(35935U);
    msg.setDestinationEntity(170U);
    msg.timeline.assign("HUGLRQOTAVNJMBYNWGZQEDYQQELNEXXRKJPMBBOQLCDGRNHHSAPVYDBUOHDSIFEWAGDODTSMZVEQTSFWSTUCDIWWPRFRKKC");
    msg.predicate.assign("QVPIQKQUZRSD");
    msg.attributes.assign("CSFHBRHEJZDTHS");

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
    msg.setTimeStamp(0.764772515285);
    msg.setSource(3815U);
    msg.setSourceEntity(231U);
    msg.setDestination(3277U);
    msg.setDestinationEntity(126U);
    msg.timeline.assign("CKBQPJEYMUZAUTTXVHSSNFCZZIVIZMCFHITBJJJLAGKUPQGMBJXLKYMSUPYSAYPFGILWFLRPWRGXRMDSJIBSSXSNYCPOGTVPZONGZZETVWYNVHGHBRAATRNYSVHOBVXBTHECOFNPHNLKDKSQCDIYKAITZMMFXBRLMDA");
    msg.predicate.assign("AXDYBWCOJRLSIMOYPMIPOVGBEZZLRPYADSZXJHRKKGKEFGXBAPXTKXPDVZNQDQRXTCHHFTDYOLLULJLINTQFSBQENWEFPCQIRFTTWAPGNDEWYDUHZPYNKONDHEIRHFQLVBUOBNPBAYOISMLZVGASWGVXNATCMXWKGTFAUFHJIJLTUCUPSSJQIKMIMVVWLZEUFJVRBOGZEUQWBYYRHDIXWYMENSCZHMOAKKDJMOHZMWGJC");
    msg.attributes.assign("FDHWIRGDDUAKVKMWCDYCPWCVVNOHLSWQFFOKOONBEGPBIASIUSFDJVXXJURMAZTHVNNIUAHLJDYTH");

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
    msg.setTimeStamp(0.757994262093);
    msg.setSource(31895U);
    msg.setSourceEntity(228U);
    msg.setDestination(583U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("WSEVENIJNMDIFTYWBBJNCNGCOK");
    msg.predicate.assign("IRHKPITYVUWXMCTKUDJWOHQNTNBKEFYCFVTOXSEMPXBABRYKLVGEILTTUZPCCWHNZQBKJEUFVVPXZWOZKOQWP");
    msg.attributes.assign("CPZWQJTVSNLUPUFHQNLUNWAAWAMSIXQYDKITORQJQGBLWHNEMSJEKMRPOVOTVBUEHQVISNXLBHBWWKYFRQSJAUTNLZITUUAMDTMNAVZCTWLJNBCIWSLPHQOMWMAGFMFC");

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
    msg.setTimeStamp(0.0799925310391);
    msg.setSource(47092U);
    msg.setSourceEntity(109U);
    msg.setDestination(53555U);
    msg.setDestinationEntity(204U);
    msg.command = 205U;
    msg.goal_id.assign("KEFYCTMCWKDRPVNO");
    msg.goal_xml.assign("IVUHRSRAFJCIOARKFWKBTBCJYCNOIZRVYENTNSSNWSVKVTVJUEMZAKXCPWCJLXFMZXLKGAWOOUAFYQXGAEYYQDWJBOTYHJEDUMPLCVFTUPMHEQFSPIHZUQZJZDLTLGRODAKYZNXKHQXNPKZHREALPUTGSMWJJPNGQDILYNGCGFZIYCCDWNOEHAXEBCDOLKAMOVYDGSLUJGBIMKRLUQMEQI");

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
    msg.setTimeStamp(0.117367923359);
    msg.setSource(61482U);
    msg.setSourceEntity(131U);
    msg.setDestination(17895U);
    msg.setDestinationEntity(162U);
    msg.command = 31U;
    msg.goal_id.assign("KDXJQNTTCKETTUDPFWQUACUDBLIZPDZMSCDEWZTSSRAZXQGOBOQFFWESUVWSNRWFGZICMCAXHEUKTRYPGJHBQVJOILGZBWRYKUPDKIZQKPIEQXYIZWSITBLAHAXNOMEYNPHWEOCLJHKDVUYFXOFYAOLENZLVTBXSFBSLCGQJWFMXDOBRJGMEYANPRMARDVOLTJBSVMYYOKJGAGH");
    msg.goal_xml.assign("TTEUUUBFZJVKAIYXFXJRBQUAGGDOALMFAPVDEOWWTGHRSLVLNDEQPRZJCKXAIPSHHIZIQTUDRLYUQOAGZCBTTCOMFXWXGRMNKSDAOSHIYGH");

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
    msg.setTimeStamp(0.123382463317);
    msg.setSource(53378U);
    msg.setSourceEntity(128U);
    msg.setDestination(49079U);
    msg.setDestinationEntity(114U);
    msg.command = 10U;
    msg.goal_id.assign("JQBQBQMMCGOUMFCBBROPBBNQADFDGNXPHIXUPNEPSTBKAIRXMENXCCOWOMGVYPTSRRNLJVGUDFKBYGQMOUIRRTHPZEOBZKFVZSHFWWLQUFDHNDLISADYKXSZJJUELSQIWYAXTPJPEEJXCL");
    msg.goal_xml.assign("VCTIDGSXMDJJHHHEZTREAZMSJYKLUSXLGKWWQJPGHNUTZAOOFQDTWVXWVZCWNVFGOVZUREQCPALSBBLHNFTURQPKOQBKPFXJGYSPAOVYEYHJMMIZFUXIKPLIGLHKYQXPHPTNGGIXEEJDKATFWOERPTOMNRDAZXCJOYXBIYWRWLEYMTGLKNKSLUDSAMZQIFJOFK");

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
    msg.setTimeStamp(0.969919477036);
    msg.setSource(3735U);
    msg.setSourceEntity(35U);
    msg.setDestination(58599U);
    msg.setDestinationEntity(93U);
    msg.op = 195U;
    msg.goal_id.assign("DGBMQULHQJIHFFFLFHNYUBLNWIIXQLBARUHXEUOAWTAROKZDOTTFVGGESZRLVEMCJZRFXDZACVZGZYONVTJSRGVQSRIJWMZXKDJHWCJHLZBUASGFIXKKVXSDWFPQCFEEWMCYHSZDNICYDGSPWKQTNHNVNVCGPUYQYGPULNQBKLFMMSAOIUAHAAEBYPXLOOBZKXPRWTXJOKTQTVEMMBJIDNIUWBRWPNXRTCDIYCLKHEPJQUPSYSCKVO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BFELLPWWEHITHINXYYXQURGGBTHXIQWGTZVSHKWRCBDKDSFVAAWLCBPTABCTVZKNXEYOBFXGMNCPOCFIKZEVGA");
    tmp_msg_0.predicate.assign("LZEQYEVNPNEYSZVPCDRLAUH");
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
    msg.setTimeStamp(0.650753524924);
    msg.setSource(19502U);
    msg.setSourceEntity(26U);
    msg.setDestination(32076U);
    msg.setDestinationEntity(79U);
    msg.op = 153U;
    msg.goal_id.assign("VBAKBNXECIYWKDMJPXLCKPLBUNAXOEKJPSYZGOXBMYBQBARXRJICWUMOISZHZDTNGQDDDHMXRIQVIZLKFLDOFXJJGXSCFBRACQPNMGSYTEEWYLIPVDVA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MYIBOPBITLJQKOANMIUDXVZRNHVKPUEYPREEVOCLUMCYFGADPJPOBZ");
    tmp_msg_0.predicate.assign("FBPAKIREXSHUYTTIAXTOCLPREMRBGODXFGPYMGWHZZOCZIZVLQWWDTKPJVAGQLVTDGRHNXBMRHMDVKNPPMZZOSGPDJEMTTRVEMBTSQFKFDWIAALILADVUWHSYOJCTEPDPTUFSIBQDBBYBRSUFKVCXGJFALUOXNJRCIYXUIKJWQXMNIZZBHZQODJFXMCGKSNHKWECCZUWEEYHAYLMEBNOSWLJAFNQOPHEUCYFRXJKQNQYNOJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HSZHEJQHYSXHHUWOAKDVKDMAZHFRKVBJFCGWTDQFWKUNQLQCKYRYWUCHLDEBTMJXNUHXPJMGHVQIFSNZUSOEPSEXALPFNULOGPVDDLTDCVOLZESPGZCAKWTIQRSJMWNZYPEEBZBTTNVFGIVYJIRKGXBFAAQPGZYOCEPTDMBPDBBDRTXCNSXAIIUGJXWLVQLXCUVP");
    tmp_tmp_msg_0_0.attr_type = 65U;
    tmp_tmp_msg_0_0.min.assign("GXJSKHHHSZVMRJTEWRDWMSLCFOUEDPRUFBJIZUJKQXLICIGLEBFGAGOBQMDLNVTUECLQQAJWCTYFFBTINHPMYOUKKEXVHHAIMJUISTZAVBLLDUCJSFODZMABQRARGRDSPUEVUZOPRSEYGYZKOXZNTXNCVPYHIQNVGMWQFDDGCWYQEXROFTNLHBRFGTKPMJBWXPIWECACWKSXFYD");
    tmp_tmp_msg_0_0.max.assign("QWFAFIYVTFHXSOLFAAOPKRHBFUZUGDHUGWYKQNTDLDUCECIWPUVGIKKNMYLDJIGNGVDRIRLAUSEZHWPNFIZQQHHYRCNOLWKBXQMBJWTSEJGPEXBCBZYYKMPHLTDXTYMYPRYWSOMUCKEQEGJZBEQILBIMWDLFZYLPXSPJCKXWJFTJMAROJDMFUVWSSNZJKRCBNZ");
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
    msg.setTimeStamp(0.0917119685698);
    msg.setSource(29292U);
    msg.setSourceEntity(140U);
    msg.setDestination(55404U);
    msg.setDestinationEntity(199U);
    msg.op = 222U;
    msg.goal_id.assign("NIQKOLKIRLBMGDCYDVAMLOJESQYHZQVPLTWQRFTRLUCCIMMDUHLAGERQSUDGMCBMHLSHUVTBAWJWNBVTPVCOJIZPSEDGRDRTIHVFUFOXAKFNTXYZKZPBRMNCWIWCEKXJO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IAQMKPDVNOMTVTMGBLYARJTHQPHYTLMVSPLVJVDHEFJIEDANQZEIUUNZHVNFZGFBBTYWHQSXWCSZIUKLROMDCKUNUCZRPAOMHUKIJBQUCZRQXTBHGEFRBHVEKJWBWIQCATRBILJZGYNFYCQVOYASSMXWKNEGXXKYRGLDYOXXTIWIHUKFMXNOUZFVFHALCOGSGRPPLOXSPJOZRMBJEPNWPDGUF");
    tmp_msg_0.predicate.assign("LBNCXQLTPZOEYZZBIOVQHXMTPEAFD");
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
    msg.setTimeStamp(0.505276635368);
    msg.setSource(34544U);
    msg.setSourceEntity(200U);
    msg.setDestination(29329U);
    msg.setDestinationEntity(159U);
    msg.name.assign("OITNMVEAPF");
    msg.attr_type = 181U;
    msg.min.assign("ERGEXNGZXXMBYMIJTHOVFPVJBDUCTVMAKETQZSFAXEWIYCUKDQFPSFBTVDLJDLPGOAVTGHRHHNGJMJAGSURSQROAZBEZCIGBXTKTXUYEMVBNCRHZEVMDQPPDWZGAPCPBIRNYYXKFUXAPKTZLFYBEWRWFVKJAYYHCSBTLFQLSINNJCHUYK");
    msg.max.assign("CXEHPKGKCWVIHYNRIVCQEKEHUBKHUEGOBJJEOZDONQJHUNJTNZMMVXFQUWYLGMDWKCZHRAFOPDLFIEBWWUAEUJVRZQENRLLDVJNRNJYQSTDIRRRBKTIZQTJUNQBCACVUGCGANRYVREYGDDMOMBBQOKSTBLZAHMFJAFQLWKMAAGTQHTCPSXFXZJCXPSSLNVH");

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
    msg.setTimeStamp(0.490877076433);
    msg.setSource(50425U);
    msg.setSourceEntity(160U);
    msg.setDestination(64797U);
    msg.setDestinationEntity(225U);
    msg.name.assign("NFRBMSYMDCYDYOWAUNCUMMRZPFWNXHBUQGQUFITXJQFUMCLQVAYODNHSOEQJXAFLQYMCOHQALKHCRRBPUUWICWSIBKBKXKMNEEPBOGCWIHDAJQZXCROELPVVZWJTFGGXTXIKFENQWRF");
    msg.attr_type = 135U;
    msg.min.assign("WDCDSFNJPFDWRQIEQOWXSQVREMWQOJIBDTHRROQVKYKDCJCIVOXGLUUXIXNQIJEJOHNVHKAPGTDUIIWNRESYHXZFXLHPGGVPPMPQUTCWBSZGLJPAHFCOTWUYNJAHCKGYVVAEUYEZZMMZLTAUQEABRDZTPAMFVFOSFGTSXUKRMN");
    msg.max.assign("BEMEGAIAFAIVVQLLRAYUUEJZLDIN");

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
    msg.setTimeStamp(0.738870098055);
    msg.setSource(50465U);
    msg.setSourceEntity(254U);
    msg.setDestination(19420U);
    msg.setDestinationEntity(243U);
    msg.name.assign("NZAQADWYRUBMEIMIJLSRFKGFQQBVPQRJCMZXIGJLDYSRECVYOAAQWEHCDPCCUNBKOYDBJFZGUQNGRCLSEEAUGEFFSAXKTGKJCQAHMGJJYZWBWDZLVYKWEPTTZEHPWXQDDCNAFHILPPDHATQJYZCSLUGNOOSUWUTXNJY");
    msg.attr_type = 76U;
    msg.min.assign("ULIREJPWWSRGUFAFJQTCZMZRHRPDEFRZNTFBTMUPLXZKGCLVDSLMDEYOUFGSXYFCNTTTMBORNSNPELBRKMXCSQMNJPCAWHK");
    msg.max.assign("TNEVQPBCPCSIHSEKATPAJTUZUEYSQAUTOJLZKGXEGWYSBXJVOSZXLYQFEIIZLYNPGGMLRUDHFTGLCLJOCMIUAYKGOENVWZULLKRSBHCMTOXDBBDGUVAPEOKQFJSZVYFWTRJIPRHYWJQRMSAOXTQDFASKQKTDNGDXZPG");

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
    msg.setTimeStamp(0.826053730721);
    msg.setSource(23544U);
    msg.setSourceEntity(237U);
    msg.setDestination(44281U);
    msg.setDestinationEntity(30U);
    msg.timeline.assign("ACVOOZDMJFFYSNXJXMZLWARGBECSAPNEVCTOXRXOIOAQAEGGUIHHMVJPQMEOZQKGKNEDBUSBTZTLNOWLDRXRQIQBLNWPPIXCRVKFRJALOKSICZPURFPSUEUMLQYGFKEMWKYFDHJEWFSOOXIWDXIGFVVBNXYGINUYDYMKHSZJTHBHFAHMMWJYRUHMUKUIEVITCNQNBJRXZPQJPPWEKY");
    msg.predicate.assign("XASWNCTFQRDRLRLWMVTHFHAFCLXROOWPMFHZSECIWGVSEQUJTUZGSAFSVQGQJEARCGUYRGLWPMBNIEOHAPTCYVPFBOKDDJTBBNNIFMDTECIXDW");

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
    msg.setTimeStamp(0.839657714127);
    msg.setSource(18782U);
    msg.setSourceEntity(98U);
    msg.setDestination(40220U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("GQJUFJGBWPHGELYQJGYVAKLEXKKP");
    msg.predicate.assign("ZXQXXEBQFGVLUHOMTRHCCNIDNKSLTGDXJICDQAWQVDEJVKLEUXULXAWQZYRBODCS");

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
    msg.setTimeStamp(0.798090754584);
    msg.setSource(43275U);
    msg.setSourceEntity(179U);
    msg.setDestination(6429U);
    msg.setDestinationEntity(18U);
    msg.timeline.assign("WMPYVSXXWXFISGBSYGJAGHCIOEDVAXVMIDKPHTLHWICEEHOUZVSWFADNTPNRXLPAHIJXBGDJLSJZOJKRJIEOCHGZUSYVBQCFJSOADYVMULUIENTSSNGLMMYLAGDVZDBRCOQJTRMGBFKIXEURBVRWWKUTFFXQROBWIKWHIQDUPDKYCFOKTMETNWYNYMBZCQQKCTBGFXNCUB");
    msg.predicate.assign("JOWHVKSWAICVWBWQHNRTYQDUPVKDHCDNXHAXZBPASZCYZNSJETNMMPKKGZALTLZFLNYIVLMVPFRANCFGMHPRBWMGHQETWRXO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YGSXWBYFPLHCFTL");
    tmp_msg_0.attr_type = 234U;
    tmp_msg_0.min.assign("NHOZPOXERNPTMEZUWUGWADCCAQWXVVVRKMFMNEKJSDGBZTWOFCDRRPITLDKZIHCBIREFEBPJBNLYYOYGQTAKHKFASIKWBAZOPMNHWTOSNXXLLAHBXIYVEJBIGGNEPQUDCFGTQEYSUULXRVATJZIYJUOXRESVJPSVZMOKZPDGXLMGMSHCXWLGKBGUZIQ");
    tmp_msg_0.max.assign("EZHSOXWBZJJDPDFEIKGZQRPBMSFJVQLDPRWAVMZYOFEMWTVTGQCCQMXEIYAFGRKWGPBKHGIGEZLJEGNOHDLTIXACXRAYKPKTFUYIABGMYNTIBMYANUXULDCBKUNFWOZTXCCESODDVXIRBSHKIZW");
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
    msg.setTimeStamp(0.762225291714);
    msg.setSource(18107U);
    msg.setSourceEntity(102U);
    msg.setDestination(918U);
    msg.setDestinationEntity(189U);
    msg.reactor.assign("BOECKIWEVIPGVTGSRRJKCZTBBGYSEEQHGOKKIMWLOHHKKGXVJCLHMMZAEHNJHCTUPPJGAVPARBTFPHRLSNZIDFQUDELDCYMJZDBWFRLSDHVRQNXRYXPEXUSXNYTDACTYFUYGMJWKLQSUIJIYQMBDZFAMSWGXIUIKBIVWZAXFTLKMYTVFFWGROTCALCDPJQPWQAESFMHVMAQDNBOETJNSNBUZAVOYORNSHLNBVJX");

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
    msg.setTimeStamp(0.948208964338);
    msg.setSource(30883U);
    msg.setSourceEntity(143U);
    msg.setDestination(33135U);
    msg.setDestinationEntity(88U);
    msg.reactor.assign("TRAHPDVFMRUZGTRTWSOYSGZLBJZZMQOYRWQIHMWO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JCNFHLAQJTIITUFAOCOXGACUDCZJGULKMFXNVQSXOYTABWWGWSBRDCRSUKIXFMWSULFBHJCKMEVHZQVPUPKGLBONFGZVNQAKHMVZZMACXHFJLNRQXLAPGBPRFYESTRDKEVPDNJNESBPNHBZKKDLYCDXCVXIZMMZQHMSSIZIJQGPDQSTWMOLITPHRDKWRQAFSJV");
    tmp_msg_0.predicate.assign("XZIULRWGWDNNZLFLIMJCDWCWNEKXFCWMQBPDGMHNQVTBJQGHVJXFXYJCHALZUDJPIIJOFBAZWPMFGHKZURZAOSFBESYNYXORBLDEOSQUZXTHDESTXVPWKQNHBWGDZFVRWEPKSXYLLABEZQHRRBTGLYUGLVYCUXFFEALTNGTURCPMSYDVICKYVTKKAOPIR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NMJGUWUJRFTOHTWCRAENLNMZHLFGIJOQDOQLCUKDLVVKVEHPXMSFDVLUXECVAAGSKSBZJZMUYZFQWYVZRAHNNQJVRAKTIPICVIRKMYYHEOBFJPDKSUGBWSYFLPAOKIQXAMLXMPPXCOFENTLOAHXAIODHYGCDIDSPVNLZKAFWWZGMQJBCFFXEZLQRBBUDDYRHEUQCRYEEOGGTUNGGYJDEZHJQXVSKNCT");
    tmp_tmp_msg_0_0.attr_type = 122U;
    tmp_tmp_msg_0_0.min.assign("KCNIGTHMQNDAEJCUOTMUYJ");
    tmp_tmp_msg_0_0.max.assign("KRLMBVGNBHFDPCXSHJJTZAANNMQCSLPRCGBOXVUWZZJSEEPQYEYRMKETLIAETBXFDKXYSXUYEIZLGATNFSEQHRSVGTHIPVQZZOBWWSBFNXCADDLOMZNCVZIKJDYKQYWVJTRJLSGEIKOMZOPTXIGFXOCQCIXQUABMWFQWGJLHUCPNAUNSWUHYFMVVVDHHRUVJRQTIHIFPUMPEYYPNDDGUAOKKO");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.228233048809);
    msg.setSource(49306U);
    msg.setSourceEntity(112U);
    msg.setDestination(16593U);
    msg.setDestinationEntity(78U);
    msg.reactor.assign("LMUMGHFDOMOKXOQRPHGYXKSSUGLFNGTVQMGDHPBEAZUQELOVWRUJTVXSQENTZAHPIKCXWJNHGTWAIZSRYJYWUDTNAIFFTWRZZJCYSUQRJSVABFPYXLMZDDCHJLOVLLIHFFYBMVYWUIMUMAWNKCZOSGP");

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
    msg.setTimeStamp(0.614392041872);
    msg.setSource(5834U);
    msg.setSourceEntity(124U);
    msg.setDestination(43738U);
    msg.setDestinationEntity(74U);
    msg.id = 215U;
    msg.width = 47076U;
    msg.height = 2603U;
    msg.widthstep = 2877U;
    msg.channels = 139U;
    msg.depth = 132U;
    msg.finaldata = 69U;
    const char tmp_msg_0[] = {-87, -126, -43, -40, 120, 43, -89, 83, -125, -108, 45, 52, -109, -3, 70, -45, 118, -16, 15, -8, 30, -113, 9, 105, 34, 61, -11, 80, 13, -41, 100, -1, -32, -118, -128, 24, 9, 68, 28, -1, 76, 0, 42, 117, 115, -5, 95, 52, 34, 16, 14, 5, 120, -114, -106, -93, -64, 17, 92, 117, 62, -119, -89, 123, 72, -45, 98, 58, -7, -74, -125, -77, -126, -21, -16, -2, 111, 9, -13, 95, -112, 5, 44, 8, -10, -75, -61, -38, 92, 126, -126, 55, -33, 109, -38, 102, -23, -63, 99, 36, -30, -14, -24, -92, -46, -60, -3, 28, -91, -101, -107, -122, 16, 16, 33, -21, -56, -29, 121, -115, 8, 54, 3, 94, -61, -111, -85, 53, 37, -86, 62, 68, 40, 66, 100, 112, -32, 100, 86, -119, -44, -71, -55, 56};
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
    msg.setTimeStamp(0.503072600753);
    msg.setSource(44995U);
    msg.setSourceEntity(174U);
    msg.setDestination(5446U);
    msg.setDestinationEntity(112U);
    msg.id = 59U;
    msg.width = 13249U;
    msg.height = 871U;
    msg.widthstep = 12919U;
    msg.channels = 144U;
    msg.depth = 184U;
    msg.finaldata = 213U;
    const char tmp_msg_0[] = {-6, 75, 30, -98, 24, 29, 16, 103, -3, 123, -27, 77, -19, 18, -108, -1, -108, 58, -49, 26, 121, 122, -97, -56, -79, 84, 107, 75, 6, -65, -16, -105, -19, 46, 99, -124, 45, 73, 11, 32, -13, -67, -43, 84, 40, 123, -56, 48, 71, 84, 17, -83, 55, 70, 103, -128, 67, 74, 68, -81, 92, -54, 100, 21, 120, 89, 87, -84, 14, 60, 32, 87, -67, 88, 48, 31, 12, -5, -19, -123, 13, 81, -91, -85, -84, 0, 9, -106, -99};
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
    msg.setTimeStamp(0.544193944414);
    msg.setSource(11439U);
    msg.setSourceEntity(172U);
    msg.setDestination(36594U);
    msg.setDestinationEntity(102U);
    msg.id = 120U;
    msg.width = 25654U;
    msg.height = 17616U;
    msg.widthstep = 47625U;
    msg.channels = 239U;
    msg.depth = 54U;
    msg.finaldata = 1U;
    const char tmp_msg_0[] = {-42, -73, 45, 120, -21, 7, -65, -104, -67, -12, -81, 106, 19, -125, 26, 9, -101, 66, 88, -26, -123, -3, -25, 40, -10, -43, -107, -73, -69, 66, 115, 54, 93, -17, -113, -47, 7, -11, 71, 85, -17, 42, -38, -1, 16, 107, 84, 28, 67, 93, 75, -98, 31, -94, -100, 11, -47, 7, -59, 121, -91, 22, -124, -43, -34, -54, 66, -80, 6, -99, -101, 25, -106, -103, -30, -14, 92, 76, 28, -76, 123, -49, -128, 103, -111};
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
    msg.setTimeStamp(0.166248930753);
    msg.setSource(23760U);
    msg.setSourceEntity(231U);
    msg.setDestination(5252U);
    msg.setDestinationEntity(38U);
    msg.width = 49685U;
    msg.height = 10773U;
    msg.channels = 147U;
    msg.depth = 89U;
    const char tmp_msg_0[] = {45, -43, 51, 124, -58, 55, -38, 0, -35, 64, 105, 30, -41, -1, 50, -55, 122, 29, -6, -57, 73, -42, -61, 60, 36, 85, 80, 32, 125, -110, -78, 82, 35, -114};
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
    msg.setTimeStamp(0.827537614681);
    msg.setSource(51435U);
    msg.setSourceEntity(253U);
    msg.setDestination(41838U);
    msg.setDestinationEntity(113U);
    msg.width = 31614U;
    msg.height = 38318U;
    msg.channels = 160U;
    msg.depth = 141U;
    const char tmp_msg_0[] = {66, 61, -95, -57, 112, 98, -57, 84, 122, 53, -70, -39, 40, -95, -112, 75, -38, -23, 9, -126, -42, 45, 111, 42, -6, 13, 46, 112, -79, -28, 58, 59, -13, 96, -88, 42, -98, 70, -71, 42, -119, -58, 61, 83, 13, 36, 44, -26, -96, -115, 30, 49, -14, 40, 9, -29, -37, -103, -57, -60, -57, -110, -119, 86, -72, 46, 48, -69};
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
    msg.setTimeStamp(0.844865925989);
    msg.setSource(26156U);
    msg.setSourceEntity(53U);
    msg.setDestination(49813U);
    msg.setDestinationEntity(225U);
    msg.width = 28494U;
    msg.height = 13220U;
    msg.channels = 41U;
    msg.depth = 138U;
    const char tmp_msg_0[] = {121, -100, 52, -2, 15, 53, -103, -126, -114, 54, -85, -13, -56, 82, -57, -101, 102, 49, 56, 112, -100, -40, 32, 113, 118, 109, 6, 17, -32, -124, -103, -2, -12, -42, -11, -14, 60, -122, 60, 30, 16, 74, -114, 109, 11, -110, -84, -78, 67, 53, 105, -34, -87, 38, -102, -89, 65, 109, -105, -119, -16, -20, -66, 95, -91, -80, -23, -124, -93, 29, -95, -101, 125, -66, 30, -77, -116, 126, -40, 109, 5, 47};
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
    msg.setTimeStamp(0.672782549027);
    msg.setSource(42475U);
    msg.setSourceEntity(228U);
    msg.setDestination(5935U);
    msg.setDestinationEntity(140U);
    msg.frameid = 67U;
    const char tmp_msg_0[] = {-99, -40, 70, 4, 115, 31, -54, -123, -13, -126, 48, 104, -28, -32, 28, -59, 67, 1, 113, -110, 81, 55, 69, -59, 114, 73, 125, -103, 95, -80, 81, -30, 23, 66, -124, 106, -18, -22, 82, -35, -107, 73, -105, 72, 35, 35, -118, -48, 46, -58, -61, -85, 40, -112, 106, -24, -81, -24, -42, -94, 43, -36, 29, -83, -117, 39, -55, -81, 10, -31, -120, -125, 93, 19, 7, -11, -101, 77, 54, 83, 59, 13, 71, 79, -93, -108, 79, 119, -4, -93, 110, 66, -90, 122, -120, -119, 51, -116, -125, 120, 2, 36, -33, 29, 93, 60, 114, -5, 21, -125, -36, 58, 2, -43, -42, -58, 27, -21, -18, -73, -64, 121, 5, 47, -51};
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
    msg.setTimeStamp(0.17613961718);
    msg.setSource(61479U);
    msg.setSourceEntity(182U);
    msg.setDestination(57842U);
    msg.setDestinationEntity(169U);
    msg.frameid = 220U;
    const char tmp_msg_0[] = {27, -62, -106, -16, -67, 94, 104, -4, 108, -30, 85, 64, -71, 76, -111, -45, -29, 18, 85, -18, 53, -86, 99, -19, -95, 13, -109, 34, 64, -120, 42, -15, -80, -95, 113, -70, 65, -55, 51, -101, 44, -17, 13, 3, 34, -21, 3, -38, -16, -52, -29, -117, 124, -14, -7, -41, 15, -26, 95, 69, 62, 104, -12, -38, 84, -33, 59, 91, 71, 41, -128, -32, -2, -44, 57, 87, -94, -34, -2, 39, 114, 84, -58, -10, 111, 48, 89, -128, 38, -88, 70, 17, 69, 47, 112, -90, 123, 62, -11, 58, 29, 91, -31, -21, -125, -125, 93, -76, 65, 103, 101, -42, 104, 102, 33, -59, 65, -96, 114, 105, -9, 9, 107, 44, 24, -28, 66, -118, 105, 12, -19, -81, 119, 101, 23, -124, -126, 42, 58, -33, -30, 96, -58, 38, 113, -35, -61, 11, -4, 36, -14, -52, 35, -65, 55, -22, -83, -19, 67, 89, 12, -40, 52, 14, -56, 33, -59, 31, -94, 19, 72, 83, -6, 68, -83, 11, -30, 32, -55, 39, 42, 94, 97, -22, -50, -128, -71, -37, -7, 53, -18, -120, 25, 37, -102, -112, 14, 59};
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
    msg.setTimeStamp(0.952999468107);
    msg.setSource(9051U);
    msg.setSourceEntity(165U);
    msg.setDestination(47369U);
    msg.setDestinationEntity(96U);
    msg.frameid = 244U;
    const char tmp_msg_0[] = {34, 65, 66, 37, -70, -110, -92, -18, 9, 30, -36, -92, 116, 11, -69, -6, -69, 5, 50, -15, -84, 81, 120, -12, -7, -8, -32, -92, -69, -72, 67, -73, -26, -85, 70, 15, -93, -44, 90, 92, -116, 52, -8, 59, 64, 122, 120, -95, -71, -100, 85, -125, -94, -30, 41, 100, 74, 115, 92, -85, -112, 123, -77, -93, 16, 41, -96, -4, 106, 86, 64, -81, 9, 65, 31, 35, -48, 26, -87, 90, 125, -107, 0, 62, -110, 14, -91, -54, -66, 98, -105, 70, 39, -109, -40, 71, 37, 66, 112, 32, -82, 9, 21, 116, -119, 23, -109, -101, 1, -68, -25, -89, 40, 2, -69, 81, 74, 108, -34, 5, 16, -127, -80, -115, 102, -116, 103, -118, 109, 60, 6, 61, -89, 89, 98, -125, -34, 104, 126, -39, -86, 82, 122, 72, -41, 11, -6, -77, 77, -127, 86, 27, 4, -3, -12, 61, -113, 63, -1, -89, 80, 59, 19, -114, -64, 83, -32, 111, -50, 93, 14, 100, -39, 124, -62, -99, -34, 73, -56, 41, 87, 32, -16, -83, 110, -106, 105, -70, 112, 48, 39, -73, 93, 21, -27, 27, -67, -11, -18, -33, -8, 100, 1, -127, -92, 106, -18, -17, 18, 76, -33, 105, -8, -110, -21, 20, 97, -29, 78, -36, 3, -97, 25, 84, 58, 74, -88, -11, -99, -110, 61, 114, 102, -127, -97, 8, -38, -32, -39, -73, -64, 48, 77, -95};
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
    msg.setTimeStamp(0.422777527104);
    msg.setSource(14819U);
    msg.setSourceEntity(68U);
    msg.setDestination(10088U);
    msg.setDestinationEntity(157U);
    msg.fps = 166U;
    msg.quality = 4U;
    msg.reps = 180U;
    msg.tsize = 129U;

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
    msg.setTimeStamp(0.305827033945);
    msg.setSource(38220U);
    msg.setSourceEntity(74U);
    msg.setDestination(52663U);
    msg.setDestinationEntity(178U);
    msg.fps = 53U;
    msg.quality = 67U;
    msg.reps = 122U;
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
    msg.setTimeStamp(0.087203102582);
    msg.setSource(2236U);
    msg.setSourceEntity(179U);
    msg.setDestination(9276U);
    msg.setDestinationEntity(51U);
    msg.fps = 40U;
    msg.quality = 217U;
    msg.reps = 103U;
    msg.tsize = 251U;

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
    msg.setTimeStamp(0.76573338204);
    msg.setSource(3812U);
    msg.setSourceEntity(146U);
    msg.setDestination(5209U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.74087136876;
    msg.lon = 0.325096667875;
    msg.depth = 178U;
    msg.speed = 0.520495162234;
    msg.psi = 0.430598907001;

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
    msg.setTimeStamp(0.410772493);
    msg.setSource(16368U);
    msg.setSourceEntity(120U);
    msg.setDestination(65071U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.122728070618;
    msg.lon = 0.607560347939;
    msg.depth = 66U;
    msg.speed = 0.655799425694;
    msg.psi = 0.673866719731;

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
    msg.setTimeStamp(0.40380186188);
    msg.setSource(15830U);
    msg.setSourceEntity(110U);
    msg.setDestination(36650U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.00164554341402;
    msg.lon = 0.410259391224;
    msg.depth = 14U;
    msg.speed = 0.0701234670063;
    msg.psi = 0.325222422302;

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
    msg.setTimeStamp(0.0973138096531);
    msg.setSource(53851U);
    msg.setSourceEntity(69U);
    msg.setDestination(45235U);
    msg.setDestinationEntity(50U);
    msg.label.assign("EYQLPKMMIUPYNBOKZKWLZKPCRAFSTWILTMMVHGGZJDXSA");
    msg.lat = 0.215764744868;
    msg.lon = 0.382810367858;
    msg.z = 0.0118784716031;
    msg.z_units = 46U;
    msg.cog = 0.352428572285;
    msg.sog = 0.66386070681;

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
    msg.setTimeStamp(0.424174251642);
    msg.setSource(56369U);
    msg.setSourceEntity(18U);
    msg.setDestination(7353U);
    msg.setDestinationEntity(223U);
    msg.label.assign("ZSGSGEBVSLCLWLYEKMMZUQDQOLPIMYVWXBQUJGRYBFGJWUPPAIGQFCFLJOUBBYKWNXUQKOADCECFWTBIUPMSVTLDZMNODLDYENLPFFRCONHXEIUAFMNHXRCXKHEXCSEKIWGTMNSNJSRHFEDDRITPZKQTNHHYZRADTQALEHXYFYPJZAQCJAM");
    msg.lat = 0.959336824441;
    msg.lon = 0.701697694247;
    msg.z = 0.754518984791;
    msg.z_units = 26U;
    msg.cog = 0.827563552182;
    msg.sog = 0.668762729936;

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
    msg.setTimeStamp(0.612015976445);
    msg.setSource(46364U);
    msg.setSourceEntity(165U);
    msg.setDestination(55683U);
    msg.setDestinationEntity(92U);
    msg.label.assign("HSVKTFZMGWPFYEFTGAOUXYAEAUGLOYXQJTVHEBQXTLYOGJGDOWAGFEVKCZJLAZNZHFWPAGCINNRKCWMKQTCJOQGLFXUHVCFUDEMXDJJWWKNJPAABHS");
    msg.lat = 0.929892765185;
    msg.lon = 0.185311346995;
    msg.z = 0.140216699533;
    msg.z_units = 130U;
    msg.cog = 0.267405158301;
    msg.sog = 0.334612749281;

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
    msg.setTimeStamp(0.258825814901);
    msg.setSource(16017U);
    msg.setSourceEntity(39U);
    msg.setDestination(35359U);
    msg.setDestinationEntity(137U);
    msg.name.assign("JYAKVEORUOQPTDCMVPZG");
    msg.value.assign("CESHUOZQUNTMQQXTJCABWZORSOYKHGNZEEKGAJITHPKDVUPZXAXIVPMPCSIMJRNSWLZYNVWAAEFPGVDJDPGELFLPUHCERLWJUOERXQEMXGMAYUFISBRPCAYGXFTKUSKOYKRNCJJCWSMQZCPXKNQMRVLBGZQBNLUEDJWBIVYDVFNAXFFQUAFIWOKHXRYHYVMTCJQRBBVYOLDXSHDNSEDIBPAMDHWNCKOORZWGHSHDOTGTFZTQWYJBTUIZBL");

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
    msg.setTimeStamp(0.839672977847);
    msg.setSource(53102U);
    msg.setSourceEntity(61U);
    msg.setDestination(4528U);
    msg.setDestinationEntity(26U);
    msg.name.assign("ORDCPPRUUXHCKEKVCXOTMAPWCNBHOZ");
    msg.value.assign("TAJQYGGYIVSPMXXECJZALIEJFNHZEGQOKQSKPLUETLMRYLJQWORDOBGZHCMJRQSEKOENWEOUKWLXOTNTUTVSPFWDEAUBIMWNNBCXFSKUCSHLYPLHRKJIVRQNDUBDVVT");

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
    msg.setTimeStamp(0.622266993736);
    msg.setSource(10273U);
    msg.setSourceEntity(15U);
    msg.setDestination(1141U);
    msg.setDestinationEntity(120U);
    msg.name.assign("PSGRGCOLFTTUDEZXIOYWHASDMFARPJFKMRMQYXVSRYKHETAFBKPKRIWGODZRIHTDRAZNHMQCMOJRNJAVFLYPTKQDIPVOVJHCDZGUYXNOXXEGHYGBVDUXCBUECLJBBIZGCZWXSPZEHFOMUJLFAPRKSULUCMXIGQSNVNITEIBVLVNULISNECEFKWQQETCNLXWRJJQMASGPHLD");
    msg.value.assign("GOPJYFRPDBEYXBWWJAETEKXUUKEHUZMZJDNJYCIZMIRPZVASQMSBCTTCCFLXGTJNSNDKAXTFOAMRJYBRDHLUAEQBWOTCYUDGWQOBDEYLWZUJEZGPVARETKSDKHCFPIUNOZRPIVJXPBLFYH");

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
    msg.setTimeStamp(0.0823727645008);
    msg.setSource(53363U);
    msg.setSourceEntity(202U);
    msg.setDestination(43036U);
    msg.setDestinationEntity(195U);
    msg.name.assign("DIKZYYNBDTGZTHPKNQGYIIVRWKVVYVTLSHWMFIFOMHHZDBSQQFMOIXHUAPMXBPSCBRKJSADLRACHVLXPEAYBEAUPWLPEBBADKOYOZOXTUGQITFYMHFNCXBEYMOOGNQXZVFUFIECOJVSZWDSKYZKLGNRJUBCIGWFGLGKUIVMQUWNQNEQRHTTSCDMMSKZWUKLOTRRUPCLXXCMUPAHELJVX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KECRDYWUNVKRCUHCAUEFVIABPFTFWTSJ");
    tmp_msg_0.value.assign("RMLWWUWKBKBTXNDIGNWBMSSPYPSXGKQDZSQODXHZQASZEHCRSGTUHUUTMWIRXXLLPUFKOAOXQIDLFGOJXNAPYFRXYPCHRLZNJDVADALSIBSGTPMDFCJNMHNF");
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
    msg.setTimeStamp(0.568684754943);
    msg.setSource(57909U);
    msg.setSourceEntity(91U);
    msg.setDestination(55653U);
    msg.setDestinationEntity(87U);
    msg.name.assign("TSPDCRYBUWSMOXGAJJMSAGCYKDKNVLPNONXUGPUEAFREUIXFLNTOMRPEGGYBGNEZSRUGXNYFCHJMWFHFLFVOYYIKXYCHFVHOIQJRAGEQVEJLFPICHPBDBTWLDITADBPIVHJVCZJSFVBAXRDTEUQGNRMDQZYOMXPWZMUKQRRMPUCVHJBXTYXXVNOWQWKLLKPTUJQDQLFHNETIWWTESODWDSCHOCWLICZBKTKVYASBAKZMEQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VDYQSTAHKDZNYFLLEAGGBROCMNCZCDNJDHGOMFNEQFKQZRMWTWMXNAJLRHLFYHTRXCDGEKPJLUJEBTKUUMFZJKXPD");
    tmp_msg_0.value.assign("MMUKYCKQXSIAOLZMVXFRUTHVXNHDFBSGYWCZWREURRKBIPTHNTJDJARARBLQRZCYLYXYZGDKUZFTNEVCLWMGVIIRSYMMKWVSEKIUTJNPWLEXTFCOBUCBWPLBPJDZJXCBPAVXZQDGBXGHVNMEHWNNGOQBXUOIQEJGQ");
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
    msg.setTimeStamp(0.370154799107);
    msg.setSource(25531U);
    msg.setSourceEntity(121U);
    msg.setDestination(3261U);
    msg.setDestinationEntity(110U);
    msg.name.assign("VALFQWSBKZAWILOBTPNDOFLNHRZMPVDUJAUPNHWJXROSDHNRGXCRQRYOYTAVFELPEPSVBYICHHDMLIXGZJWKYEGQBGVINUPKDQZ");

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
    msg.setTimeStamp(0.469455877658);
    msg.setSource(33520U);
    msg.setSourceEntity(108U);
    msg.setDestination(64150U);
    msg.setDestinationEntity(28U);
    msg.name.assign("SJUCPGTWKLYTJJFQRELJKXCBYUBLFINFOXGBDRTJHLHPATGHIBSJZGVHMUDYNLSUHDVFRINQQTRGZNLCDRZEEMIEVBMZWCIDKQSVCAOMNGXQFFYPPJCRXASPPXVQMAIJNWYRIDBXKEPSASSTUKZWMAYADYBUKFQYJWFOCCOFRRWNEGOMSUETWPVDGPVBUIXNYVTEV");
    msg.visibility.assign("BSVEQHSQDDBWKBFFKRMGHLARYNOAIDOTQAVPDJPEXGKUSRRTZDVEZNKOWLWPFIUCKIMBYMOEVHZCTYWFCMUCAQHMXSVDTJZFWOYXNZQFZVLCLOJJZWCPOUBDDRH");
    msg.scope.assign("PLOGVHGRFAKRGQODZNZYFHSZEHUKSRQKEEAIHAKBXPLIFTCTBXPTZVAIAGRXXYKVTJYBPUOMJDGNBOEZSGQCKPSBXHRQISMFILOAOBMEPLVUNEALFYVYWYQAZXWUMWGPRCZSBWCSHLGGMTBOWRJIUCHOISDFVVJFYHCVJVXQNHXYQERLMKUNUKNJTSWRWDAKTJMBEMDCTL");

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
    msg.setTimeStamp(0.439989946802);
    msg.setSource(14823U);
    msg.setSourceEntity(192U);
    msg.setDestination(28090U);
    msg.setDestinationEntity(9U);
    msg.name.assign("USOKZMSNMTBIFUGAVCBNHNTLXCBYIAEGOKVPTACQKTDTYKJIUKDSPBEAQIYXFVJFVPAWUGOHGAGXYGDZSJQRXSJHCGGRTIPUPPWW");
    msg.visibility.assign("THYIUMOSJSBKUVRNYSKZJIODLBQRMTEVAGHCJVRFQOZAHBSZRVFBCMRQLIZBJQDLGIMNTLUPRXQXIQGKSSPEOCBOAFCILFVGRFWCLFDHY");
    msg.scope.assign("OIIYAVRIKTGPVANAFGJNCWLWXEQRPED");

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
    msg.setTimeStamp(0.196873428767);
    msg.setSource(18850U);
    msg.setSourceEntity(236U);
    msg.setDestination(24396U);
    msg.setDestinationEntity(204U);
    msg.name.assign("PBDUIGXAWODFMSMMJKDCRROLZQXRAAHGFLSRONYBDHJBQQBDOEONXLJWVFSUUIBWZLJYKINTFCXNKNYYCDTSMLFBMPWUYVGNSVHMQEAOIQJTTJSIESCAEOKGGETEZMRURUYIAPZNVYWYDQHUPQTGKAUUJPPZAREYWRVHZQAHFZXXTLKNSHHAKIBEGDLWLPHVRCBQMCEZGHCKIZEJFFCJJIDXSNVSMTCT");
    msg.visibility.assign("ODDJGFMCSVQNZPXWEMUUXWPSQHPOSIAQPQOTFJDEUKXKZLGRHJDZAAMUENIATHB");
    msg.scope.assign("KUGOGXBBPTARWWRLQWTQGZDSLPIKRDJVONVMSEZVGYDMMDBGOXLPMDAVWKEC");

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
    msg.setTimeStamp(0.240725596);
    msg.setSource(40368U);
    msg.setSourceEntity(164U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(115U);
    msg.name.assign("NIYYQOCHEXKPZTYFIGFLWRRPEHSQOZVAMEGRTOKSIZUXHXLWKZNOCUINUBIACOLLGLCRJCWPKVSXBMDMHYDMKSAERYBRWXJVPUUDFGSKOQRPBRDPUNPXBCEXLHDQGYZULAEJDVTTEDWW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZYUVQKNEHKBJFOLPOICGWZOKAKROMJTYJITSJTYBEWBVUPLSNCQBUEPRGKUKRISYWUALVMOQFPDTFQCSAXCLSBLHWMQMNLTTSQMLJEVBIMWXQZENVUAXIJZFRBUJHGCWXRTWXMOCSXFFQANBAHKDWWYUAVVKMMPTPGQEXHRIFVCDJFDNIJYHLDGARPSHGUYKYMDZOHOZ");
    tmp_msg_0.value.assign("ABRWQODTEOZURZKFXMUQYHLLSJRVULAACMIDYPVEAJGUIWOJQNESDDNCXRTQKWBNZHXPIAYLLBEXPXGKHERTOFPEATVRZDIBHFWNWZLGZSYNYGWUUPPDEUKBJLYGVUHSLXMMSCDAVOSPLZDFPLJCMFGIIOJOHXKKMKTTGSRZWEFTPRFTNXVCZBCKM");
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
    msg.setTimeStamp(0.781678221334);
    msg.setSource(24575U);
    msg.setSourceEntity(60U);
    msg.setDestination(56105U);
    msg.setDestinationEntity(160U);
    msg.name.assign("HDJKTKPYNVZQFTMZNPFSWANPIFJLTURYRUVREENASQWBPLYMTFIIGHLVXYCMHNCSJHXIQQTXOB");

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
    msg.setTimeStamp(0.757837509209);
    msg.setSource(39068U);
    msg.setSourceEntity(194U);
    msg.setDestination(51532U);
    msg.setDestinationEntity(153U);
    msg.name.assign("POQVYYMRXKJLDWGAGSIQOPGGGGATCXSQNAVXPLJSKDMYNEHPAOECIVVJDYTFJPLUBSIHYNKONYFKFNNFMPFGQXPXJPGTISQJJKARBRZKWBHUXDFUSFIHTSHEWOMZCTIOEBPUCAMDOYAKTBNDUDYTVLBUFCRULQZMKFVHJWSRXTTJZYHARKWHIXICRZFIECWZSVQUHCEOQMAQMEZJMWSVGPTLGIBMNEZQU");

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
    msg.setTimeStamp(0.997012993499);
    msg.setSource(60516U);
    msg.setSourceEntity(162U);
    msg.setDestination(14295U);
    msg.setDestinationEntity(242U);
    msg.name.assign("IKXHEKUHTWBCOYCAUDGUQVRRFWDOYTNGUSUYLHWWDYDTGFFBEOCLMAFLVJNPZQNNJWVAEQJNVMHQMITDYBHAZJACQZWXXKRYKITULPVUUXYLYWQBECZSFJJTKK");

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
    msg.setTimeStamp(0.221013048665);
    msg.setSource(8398U);
    msg.setSourceEntity(200U);
    msg.setDestination(33387U);
    msg.setDestinationEntity(70U);
    msg.name.assign("QWNWPODQZOKHLIVSUWZAFMNWHUQICDKWOERNYBHXPUDLIVHFSOYIPGBFDBTZZDRXFQPCQJXOTYEAHBDVOFNPDIAXTGXBRJLBIDXJRJSCVAEAILUTHGVDASZRIROFOPGKKEYALMSHCYYGWJPVRWLYFQULAGSZTJCJAMQKDMMBBKR");

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
    msg.setTimeStamp(0.878238109099);
    msg.setSource(63662U);
    msg.setSourceEntity(199U);
    msg.setDestination(4082U);
    msg.setDestinationEntity(197U);
    msg.name.assign("BRNGUKTRRSWPXCEACBCMIZYXWPJNWTLKTLLWQQGBIQMIYOXCAFIAUVAONZFAEUSLMUESPKMDTDDHBVWJOOKJNZVBFRRBDJBAENZVZRAQ");

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
    msg.setTimeStamp(0.300828929357);
    msg.setSource(9515U);
    msg.setSourceEntity(145U);
    msg.setDestination(56296U);
    msg.setDestinationEntity(221U);
    msg.timeout = 3648276317U;

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
    msg.setTimeStamp(0.444873938431);
    msg.setSource(51116U);
    msg.setSourceEntity(148U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(93U);
    msg.timeout = 1915249053U;

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
    msg.setTimeStamp(0.292291646024);
    msg.setSource(26580U);
    msg.setSourceEntity(184U);
    msg.setDestination(31169U);
    msg.setDestinationEntity(202U);
    msg.timeout = 3073316126U;

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
    msg.setTimeStamp(0.626390900859);
    msg.setSource(58403U);
    msg.setSourceEntity(22U);
    msg.setDestination(2075U);
    msg.setDestinationEntity(220U);
    msg.sessid = 991559309U;

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
    msg.setTimeStamp(0.653964480979);
    msg.setSource(28506U);
    msg.setSourceEntity(253U);
    msg.setDestination(55645U);
    msg.setDestinationEntity(55U);
    msg.sessid = 2958978501U;

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
    msg.setTimeStamp(0.0586073850085);
    msg.setSource(58231U);
    msg.setSourceEntity(236U);
    msg.setDestination(55791U);
    msg.setDestinationEntity(211U);
    msg.sessid = 1227828577U;

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
    msg.setTimeStamp(0.358103352573);
    msg.setSource(53649U);
    msg.setSourceEntity(65U);
    msg.setDestination(61419U);
    msg.setDestinationEntity(56U);
    msg.sessid = 1770601505U;
    msg.messages.assign("CLADXPLAXWTJVZOFBLBFOYWOJWAGKNODKYZLVABQVVNHOFUNWDCTQMEUVJOUHCWUDPQMIFSMWYAHKXBKNEDIGYCKCQESMLWLJLSJUUESSVAFMCVMRRDNHGNHSDAZF");

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
    msg.setTimeStamp(0.139789292791);
    msg.setSource(57867U);
    msg.setSourceEntity(127U);
    msg.setDestination(57856U);
    msg.setDestinationEntity(197U);
    msg.sessid = 4016218635U;
    msg.messages.assign("NKKMGTOIHXHNGBBASGQEYJQZWQFQGPOOFOYUIKRRHLXRTXGVSNEONUWWMBRAIDPJXHOONBSVEAHWKYZKUZZTFESCWUEWIMLNRMRESYCMITMGMHXXVHALLZKRIJKZCVYBNVBVNSFDZLLWJMBRMDCAQIYUPOJEPARPZWCLLPIUKIJSGQQ");

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
    msg.setTimeStamp(0.808214954877);
    msg.setSource(27687U);
    msg.setSourceEntity(119U);
    msg.setDestination(2711U);
    msg.setDestinationEntity(65U);
    msg.sessid = 4112516523U;
    msg.messages.assign("IPUAWIRQVXIUCBZFHBKNWNNTSWXKFATPOECYRMKQOBLZVJNTHIHHYCMSYGUGNQNALBZAIGVDBSJWYXMWQIJFPKIGKZXLEPQMCNETWYRBEXSRZJGVJVRLYFDTHFQDDXVLBYSDMHQHXRYPRASORQNKWICWCSLCOXRMEPAUVLKKTCIQGJQWNNBPVEHCUOOOULJMXOURUVFTSSFKACJSZZBJGADPIY");

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
    msg.setTimeStamp(0.79110188395);
    msg.setSource(9584U);
    msg.setSourceEntity(212U);
    msg.setDestination(12874U);
    msg.setDestinationEntity(27U);
    msg.sessid = 3102395633U;

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
    msg.setTimeStamp(0.539652008702);
    msg.setSource(33488U);
    msg.setSourceEntity(30U);
    msg.setDestination(3790U);
    msg.setDestinationEntity(117U);
    msg.sessid = 1706359176U;

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
    msg.setTimeStamp(0.617921806707);
    msg.setSource(37043U);
    msg.setSourceEntity(45U);
    msg.setDestination(12098U);
    msg.setDestinationEntity(196U);
    msg.sessid = 103407538U;

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
    msg.setTimeStamp(0.441978814421);
    msg.setSource(14627U);
    msg.setSourceEntity(44U);
    msg.setDestination(44486U);
    msg.setDestinationEntity(207U);
    msg.sessid = 1963825189U;
    msg.status = 223U;

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
    msg.setTimeStamp(0.812081712311);
    msg.setSource(48178U);
    msg.setSourceEntity(17U);
    msg.setDestination(27417U);
    msg.setDestinationEntity(252U);
    msg.sessid = 763579893U;
    msg.status = 103U;

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
    msg.setTimeStamp(0.9932222689);
    msg.setSource(46878U);
    msg.setSourceEntity(153U);
    msg.setDestination(40069U);
    msg.setDestinationEntity(18U);
    msg.sessid = 373999983U;
    msg.status = 62U;

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
    msg.setTimeStamp(0.165187055744);
    msg.setSource(45370U);
    msg.setSourceEntity(251U);
    msg.setDestination(29875U);
    msg.setDestinationEntity(70U);
    msg.name.assign("QWQCQSDFPKUELHBLTHDJGXWNEYKDPTAMTERAZLHUHJARFCYSVNOBIACUVFOKFCSIZPZLWWPAOYZHLYBYPSREYWLGMDRIVILQMNJVJYVIFSBWFTQCOTOUAVSPTAUXMRHUQJNDXVILSRCNOLPSDBHQMEXOYKHWCHBCMEXGZIXGJRMBURTPSENKBUOIFXYKQJWNZCGXTDFYGRZVAOBPJZNADRKAHEGMC");

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
    msg.setTimeStamp(0.133443738554);
    msg.setSource(12937U);
    msg.setSourceEntity(176U);
    msg.setDestination(31014U);
    msg.setDestinationEntity(120U);
    msg.name.assign("SIJKNSKFBYUDZDTJUHQRBKDMENLGXGHUTJIOCNDUKNZRHFARVBWLCWRGYOJPABVZBSOUFKLAGGCUWKEWESOTLJCWQMPIOWQBJOATFRCEHSBYEIZNFKEGPVBUXBPWLMNTYNQUQXJEXTVTLMQGTIAKVDWLJXPXDCGZAYECNMRRRMHMAQPAHXTBVZIGDXOZCVSYUQSHHJCRAZFHG");

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
    msg.setTimeStamp(0.330894196083);
    msg.setSource(45841U);
    msg.setSourceEntity(169U);
    msg.setDestination(36016U);
    msg.setDestinationEntity(115U);
    msg.name.assign("ENVCMQYFIYXDGJUTFOQKBDLOYPLZSGMXDIOVHHYCMUWUYZWREUZPKKOTMVZHCSWPFFLHQLVCJOABZ");

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
    msg.setTimeStamp(0.143923557566);
    msg.setSource(63721U);
    msg.setSourceEntity(27U);
    msg.setDestination(52036U);
    msg.setDestinationEntity(35U);
    msg.name.assign("SXELEQLDMADPVFYPMUVKFKCRZAKIIURACLHFBKYBSCETNZMTETUBSDJOGHCOAAAGVRWHDGXQOFEIQTSFILNSUGZIBWBQRFEJRUJNVPXOLNTDTTAHZNMHYYWXBWDHQIXJKNRSNOMPBWCDBUICCGYGXJKZJOQYIIVCEHTNWVPQHRWPDQQKZJYJXBLZORCSGVPXYKSUMW");

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
    msg.setTimeStamp(0.278473372381);
    msg.setSource(58631U);
    msg.setSourceEntity(127U);
    msg.setDestination(48694U);
    msg.setDestinationEntity(172U);
    msg.name.assign("WQAZWQNGMZPQQXMPCDKLHUQMHWVGISKAYEIOLQFKUBZRVTOLVGALXZFGWSUYXJNXFTOZMCCRAPFDBRICYYKSDWDYLTBPRJFZFBYGROTICPITKMVFQVGMXEUPOTLRNBNDUSYCJDAYWPSZLKJRXHIKALAKAENRBLLOCDRTBJNEWJNHHBVNEUEKJFEXKWDHPIDFVXERBNSZOIVHGGWEGZ");

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
    msg.setTimeStamp(0.304385328409);
    msg.setSource(40023U);
    msg.setSourceEntity(108U);
    msg.setDestination(29480U);
    msg.setDestinationEntity(156U);
    msg.name.assign("GSYMTMNACQLUBBBSOMTXIOIAYVSPXCTZLGBPAWIFCTLHEEMABJEHH");

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
    msg.setTimeStamp(0.0256163037378);
    msg.setSource(30070U);
    msg.setSourceEntity(25U);
    msg.setDestination(43329U);
    msg.setDestinationEntity(52U);
    msg.type = 128U;
    msg.error.assign("MCWKUDHSLEURBUGETKOGCCNQEOVGKPALXSCFUXWFDYELXPLGLMRUEUNOAAEUDIFTQQHYVTRMGFRQYMZZRTPNXVIXRCTQIKNJJQQMWGGLSOBZOBRPIGDBYMACDYVBBVAMCPOJSYQZEPLVVHWJLCNFKHZTTYWJDOPIH");

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
    msg.setTimeStamp(0.760598937254);
    msg.setSource(14543U);
    msg.setSourceEntity(133U);
    msg.setDestination(41603U);
    msg.setDestinationEntity(110U);
    msg.type = 221U;
    msg.error.assign("BFJGNOWVHLFTFCSNTCJDCTXBQHMJIGLVQDGPZCGBQASPXSRVTWITNDBLXYXGLZZQRSMHJWFEHEWQMHHWQBLIPQEIVUEICHVCKPMRJDSOFWFLALCELYHVGUKKGURCZTNBFSFEUZTUPJHKXUOPLPBXRTYAXVONYIRAA");

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
    msg.setTimeStamp(0.909315805237);
    msg.setSource(42578U);
    msg.setSourceEntity(66U);
    msg.setDestination(33487U);
    msg.setDestinationEntity(38U);
    msg.type = 139U;
    msg.error.assign("IGSGLDPMFWDRYKBZHCFDXKUPYPVFDVHMFXUUPQGXOS");

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

  return test.getReturnValue();
}
