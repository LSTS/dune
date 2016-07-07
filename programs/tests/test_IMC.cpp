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
// IMC XML MD5: 82d995ea19249b2dcead077e3d43741a                            *
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
    msg.setTimeStamp(0.0608389518676);
    msg.setSource(29385U);
    msg.setSourceEntity(249U);
    msg.setDestination(63706U);
    msg.setDestinationEntity(149U);
    msg.state = 135U;
    msg.flags = 108U;
    msg.description.assign("OIEIQXFVAYQNJFMUJBWOPPXRDLQGVMSKWMZSNATOILDEVBODSHUHWKKSHSIGRZQCNMCZFTVTABZCSSBGYFHUZSBFMUZPKGSPYDPYLVWRLKOVEUHYOGYNMTCFWGAYMINYWEZQTJFRXQLQTOBIDNVTUXNDRDTCGFGLHLRPKZWOXKICRCEEVDWAQTDZZKPWWFVIJRJICXOBATADXHJBQKONEM");

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
    msg.setTimeStamp(0.936254291527);
    msg.setSource(36421U);
    msg.setSourceEntity(144U);
    msg.setDestination(18932U);
    msg.setDestinationEntity(186U);
    msg.state = 74U;
    msg.flags = 41U;
    msg.description.assign("WFQGTAVZYCUJBVR");

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
    msg.setTimeStamp(0.467885274563);
    msg.setSource(7102U);
    msg.setSourceEntity(0U);
    msg.setDestination(59570U);
    msg.setDestinationEntity(166U);
    msg.state = 16U;
    msg.flags = 6U;
    msg.description.assign("ZZBROOLHJJHRFQWGHXWNMSRAIEYMWIQKNANWUCYYPIMAKXRFCBZTXWIE");

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
    msg.setTimeStamp(0.337348795159);
    msg.setSource(59359U);
    msg.setSourceEntity(224U);
    msg.setDestination(16559U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.105759425203);
    msg.setSource(4764U);
    msg.setSourceEntity(33U);
    msg.setDestination(52067U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.231177084771);
    msg.setSource(8171U);
    msg.setSourceEntity(163U);
    msg.setDestination(9815U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.757521852879);
    msg.setSource(9781U);
    msg.setSourceEntity(90U);
    msg.setDestination(18609U);
    msg.setDestinationEntity(104U);
    msg.id = 231U;
    msg.label.assign("KCNODERGYGTXOGERDFCYITMXWQLZVRKVCWAKT");
    msg.component.assign("QSYPNYJCVHTWEMCKVWWCXAVEBZSIAIRTJGGHXFCIPWFVZQTMWSQPTZUNHTXKBWIDAXWFCLYGJAKQZJPNZHHQBSVUKOFLOPIBCPVTMEMVSXELHJANBRLAVRERGYPRUHZMNEASTMCYNSZDSNFDIAQ");
    msg.act_time = 27220U;
    msg.deact_time = 21610U;

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
    msg.setTimeStamp(0.597459999798);
    msg.setSource(49553U);
    msg.setSourceEntity(66U);
    msg.setDestination(47527U);
    msg.setDestinationEntity(215U);
    msg.id = 139U;
    msg.label.assign("HMPNWYZHEVTZZIDJTFOADJBEPFZBARQZVDAUOXGHIKCBQUOECJRLODMUGYVKONJQKXBBTHXBRYWLLIXRPUXPKBZKMPCAQGRSNCMKDAEPRCLCMIESDGMNURMEEVSSIKNYJVSETRSOOYXNNTKCAZYVJGHFNFUAETFXSVFWKQJTLFMWJLXHPQVPWDWUGIUCYYFAZLKSWVWYXALDSBCCWLQRHUJOPOTQQHGDRDZTSHNBBIFTF");
    msg.component.assign("QKRIQSOUODEMSDTGTEODQWZHOBXHG");
    msg.act_time = 23013U;
    msg.deact_time = 63417U;

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
    msg.setTimeStamp(0.879443150516);
    msg.setSource(50037U);
    msg.setSourceEntity(166U);
    msg.setDestination(59288U);
    msg.setDestinationEntity(4U);
    msg.id = 35U;
    msg.label.assign("VKCCAPGHNYSCUOZXWXUHFPFTAHHPXNICCAUXTPQSQRNMLLBRJEQKJILYMAYOFRQOLXMFFEZWA");
    msg.component.assign("IRWUAYMQNQUYPMCTPFHVOGFCZRDIPZZHWGNJQNDDJVXHLLJZAMDRSYBKHSWDCGQMOLGYSTFXOOLISUMCAIVXHMGDRSZTEJNBJVITEHRIBOGGXYYZTSTFWYLLJFVAWXAXKEZCPFMKHVFKNKXUELJMCXVULEPTQVKNDERPHWJPQBUEWNGHSNOZDKLIRXAKSCGDJTHBCBUNFTVELYSPXJBBIZIQUEBFQAOWGOYWUVPUIMCAEKQOBNRCATDWRZ");
    msg.act_time = 27392U;
    msg.deact_time = 19918U;

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
    msg.setTimeStamp(0.741518723828);
    msg.setSource(2944U);
    msg.setSourceEntity(115U);
    msg.setDestination(36689U);
    msg.setDestinationEntity(106U);
    msg.id = 128U;

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
    msg.setTimeStamp(0.512124687034);
    msg.setSource(33308U);
    msg.setSourceEntity(115U);
    msg.setDestination(12685U);
    msg.setDestinationEntity(77U);
    msg.id = 74U;

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
    msg.setTimeStamp(0.134938019766);
    msg.setSource(55524U);
    msg.setSourceEntity(141U);
    msg.setDestination(43536U);
    msg.setDestinationEntity(119U);
    msg.id = 49U;

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
    msg.setTimeStamp(0.175333615245);
    msg.setSource(62451U);
    msg.setSourceEntity(52U);
    msg.setDestination(65204U);
    msg.setDestinationEntity(198U);
    msg.op = 118U;
    msg.list.assign("DQLCLEFSEOOYQZAGIGNZHIYKYZVHATIKEBRTHNAQCFSXKYTWRLVBAZTORBUJZEHXORW");

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
    msg.setTimeStamp(0.61743680909);
    msg.setSource(18328U);
    msg.setSourceEntity(141U);
    msg.setDestination(30932U);
    msg.setDestinationEntity(31U);
    msg.op = 219U;
    msg.list.assign("JPWNUCQZLMFACJLIKLJVIHTEFNZWTQASVTNXKQRFUGWXMGRVVQOEAYONSXYCBFMYEPWRSTAYDMUTZCHEWMAQJORKTFH");

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
    msg.setTimeStamp(0.19633150805);
    msg.setSource(34027U);
    msg.setSourceEntity(109U);
    msg.setDestination(39847U);
    msg.setDestinationEntity(214U);
    msg.op = 236U;
    msg.list.assign("GEUJPEARMVXFRKFKUW");

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
    msg.setTimeStamp(0.551292410627);
    msg.setSource(56080U);
    msg.setSourceEntity(83U);
    msg.setDestination(62750U);
    msg.setDestinationEntity(172U);
    msg.value = 25U;

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
    msg.setTimeStamp(0.997533893427);
    msg.setSource(49387U);
    msg.setSourceEntity(96U);
    msg.setDestination(26700U);
    msg.setDestinationEntity(116U);
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
    msg.setTimeStamp(0.259675008182);
    msg.setSource(21084U);
    msg.setSourceEntity(107U);
    msg.setDestination(45256U);
    msg.setDestinationEntity(152U);
    msg.value = 225U;

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
    msg.setTimeStamp(0.746380205191);
    msg.setSource(24682U);
    msg.setSourceEntity(238U);
    msg.setDestination(2602U);
    msg.setDestinationEntity(142U);
    msg.consumer.assign("TGOIEHETURVEVFELBXFXAYNCKRAKZDVNAYFQWIFETFNKHMMOUZYUQILWDJZSRINRSPPEBNBWPKHRGPALBJYJWHWMASUAYUPODDOOCSHBKJWXCXRBXPFLTYUGMXCZMVKIQKOTGXLOHYFZQJESJNBIVN");
    msg.message_id = 1320U;

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
    msg.setTimeStamp(0.8192022421);
    msg.setSource(50351U);
    msg.setSourceEntity(28U);
    msg.setDestination(55782U);
    msg.setDestinationEntity(125U);
    msg.consumer.assign("NHHVMCUTWFCCHULXPUGMVYOXOPYWETSKJWEQXYCBMUDWXMXBSILZKJCDDVOJAIGWTSRRQFQPNOSTUSHGQEFNRAXRDKASIKYFBKAWAZVGJAKKZKRAEZYCDFIDKTVQRQRSYPHQUARVPPVOCOLNZOFUYS");
    msg.message_id = 13554U;

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
    msg.setTimeStamp(0.75268786063);
    msg.setSource(21870U);
    msg.setSourceEntity(247U);
    msg.setDestination(38960U);
    msg.setDestinationEntity(12U);
    msg.consumer.assign("ZBZVBYHXGOKNBSYRCODZMSPKMTISVCDFYDQVEJLSSCJVIFPNCAUCEODEUZJXMTNGKOBZWCIJXHIKJUUEUCTYRIDVLLCQMXWASGFLNFWFQSNYJHXBREGADGPQABAWLXOMJHKLVTYVJGJHEAZZODOXCRKFQHHAOVVATCNIKZPKBQIMFBGZFEPQULRUWGEPAMRZLYYDMIRQPGGSNEBMTRSWWWHUPLNXYEHPQMHKORTUOIFLPTYVUWNTKIWFQX");
    msg.message_id = 16734U;

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
    msg.setTimeStamp(0.5307585965);
    msg.setSource(16209U);
    msg.setSourceEntity(34U);
    msg.setDestination(57047U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.10963061237);
    msg.setSource(42553U);
    msg.setSourceEntity(142U);
    msg.setDestination(4959U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.712116258847);
    msg.setSource(46417U);
    msg.setSourceEntity(129U);
    msg.setDestination(40419U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.77290128028);
    msg.setSource(8084U);
    msg.setSourceEntity(130U);
    msg.setDestination(53097U);
    msg.setDestinationEntity(211U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.595242773539);
    msg.setSource(29192U);
    msg.setSourceEntity(17U);
    msg.setDestination(45417U);
    msg.setDestinationEntity(253U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.578843326027);
    msg.setSource(63591U);
    msg.setSourceEntity(236U);
    msg.setDestination(10153U);
    msg.setDestinationEntity(15U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.962698681866);
    msg.setSource(58652U);
    msg.setSourceEntity(194U);
    msg.setDestination(24402U);
    msg.setDestinationEntity(16U);
    msg.total_steps = 41U;
    msg.step_number = 128U;
    msg.step.assign("EIPWJEOHYTVMKYMWXOJFBYSINAFQHKOFQBEYGZMUUSTGXXPKOCYFFMZKGZDVPQMASATUKWBTIICIBFLACLHNFPDRYNJEPZPCFUXQDHKHGQRLSGYVZAWHSATMKDJGSH");
    msg.flags = 181U;

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
    msg.setTimeStamp(0.147115378384);
    msg.setSource(5852U);
    msg.setSourceEntity(238U);
    msg.setDestination(49808U);
    msg.setDestinationEntity(104U);
    msg.total_steps = 156U;
    msg.step_number = 99U;
    msg.step.assign("JFZRTLOCHMYFTBXADMEVSMGHQEFDBDCXGCFVIMKAPNZAUHYZYZKVXGZOPXCTWMJXKLYIDEQCKEYNQFNEORCYELJOSFKLTBIIDYGNBRPIKRYGFJURHEEWILDBPFATUPQCFNKPRLMQIZTVTSRWEHDKNOAZJGDHABWWIUARUESUVSHCQDXSZHVJOVXUWVQJZDKQGOABWCBQSHOTPYJRNSJXMIMHWGYBSMSONPOBUWGWZLGNR");
    msg.flags = 16U;

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
    msg.setTimeStamp(0.659867485482);
    msg.setSource(51402U);
    msg.setSourceEntity(187U);
    msg.setDestination(25055U);
    msg.setDestinationEntity(193U);
    msg.total_steps = 30U;
    msg.step_number = 57U;
    msg.step.assign("BFCBDOWRZLRPUHXTLCUOSLAOIEOYIPSQKHVVKVLTTWRAKBVKUVLEARDUMSEDTPMIQWFAOKFZCYCKOFHSEOXTXPNOXSCDWSWAWTBLPYLCGZIYAIOJIXMQLXGHPAZSBGQFELRNGVAFXZJPUXT");
    msg.flags = 200U;

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
    msg.setTimeStamp(0.910153899535);
    msg.setSource(2621U);
    msg.setSourceEntity(220U);
    msg.setDestination(13432U);
    msg.setDestinationEntity(165U);
    msg.state = 103U;
    msg.error.assign("QIECVJYVEFRFUSXIQPGICKRYWSDUAISCOXUNPSJHWVGHWJJLTSYQUUMTOYFPFSOPTALNFMLXGRPDNLNBBB");

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
    msg.setTimeStamp(0.0628597799625);
    msg.setSource(7627U);
    msg.setSourceEntity(41U);
    msg.setDestination(43187U);
    msg.setDestinationEntity(152U);
    msg.state = 75U;
    msg.error.assign("ETEJUBMZSLGNUMJESRGWUYZOIMUZOOVTZAFSANCLFXLBLBFHBDNVKEGQPPYJJRLPOFCXGMHZNEXHWRULOCABQWCAHAKIZFBGRHUGOVSBUJEKZXMRTQTFFAXKPSPEIHDPYKQNVZTCJSFBXVWJGIRTCXEIPQDOFMDYIILVACGKSDHZKIWDYNDLMKNQMVMWWAWRJOYKPQENUQRLMTPUQK");

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
    msg.setTimeStamp(0.815277183808);
    msg.setSource(29133U);
    msg.setSourceEntity(115U);
    msg.setDestination(45246U);
    msg.setDestinationEntity(55U);
    msg.state = 234U;
    msg.error.assign("UZWQWRDAMMBSRZNQUIJGVUYPMYBITWJVHWAJXFNAMARABIIWXNTUBXDBWTFDXETUVSXHTSELJYCNCJFEYJKJMGHRMKEOEZEBGQRQITIHLAGFUIOLZFO");

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
    msg.setTimeStamp(0.946661770272);
    msg.setSource(46417U);
    msg.setSourceEntity(127U);
    msg.setDestination(17467U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.425248546163);
    msg.setSource(5053U);
    msg.setSourceEntity(35U);
    msg.setDestination(56834U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.669204770838);
    msg.setSource(44239U);
    msg.setSourceEntity(147U);
    msg.setDestination(12818U);
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
    msg.setTimeStamp(0.466511432266);
    msg.setSource(14647U);
    msg.setSourceEntity(231U);
    msg.setDestination(14269U);
    msg.setDestinationEntity(52U);
    msg.op = 24U;
    msg.speed_min = 0.247976693129;
    msg.speed_max = 0.181727164019;
    msg.long_accel = 0.298364603579;
    msg.alt_max_msl = 0.560145243717;
    msg.dive_fraction_max = 0.991546370448;
    msg.climb_fraction_max = 0.152353086429;
    msg.bank_max = 0.958459318488;
    msg.p_max = 0.526920809579;
    msg.pitch_min = 0.737848131837;
    msg.pitch_max = 0.742898154586;
    msg.q_max = 0.0602383459008;
    msg.g_min = 0.810874995574;
    msg.g_max = 0.674840682807;
    msg.g_lat_max = 0.169316047464;
    msg.rpm_min = 0.0914279368156;
    msg.rpm_max = 0.637637477415;
    msg.rpm_rate_max = 0.825967220748;

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
    msg.setTimeStamp(0.918979450827);
    msg.setSource(55802U);
    msg.setSourceEntity(221U);
    msg.setDestination(38740U);
    msg.setDestinationEntity(102U);
    msg.op = 32U;
    msg.speed_min = 0.600734261446;
    msg.speed_max = 0.40638641979;
    msg.long_accel = 0.341882328187;
    msg.alt_max_msl = 0.52148602677;
    msg.dive_fraction_max = 0.360166369764;
    msg.climb_fraction_max = 0.340623683366;
    msg.bank_max = 0.106768001757;
    msg.p_max = 0.197585422666;
    msg.pitch_min = 0.0964003543591;
    msg.pitch_max = 0.846773747536;
    msg.q_max = 0.510741836325;
    msg.g_min = 0.395485008635;
    msg.g_max = 0.468037105126;
    msg.g_lat_max = 0.626704121029;
    msg.rpm_min = 0.179652370886;
    msg.rpm_max = 0.155458571722;
    msg.rpm_rate_max = 0.610561506238;

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
    msg.setTimeStamp(0.0938511857264);
    msg.setSource(30178U);
    msg.setSourceEntity(116U);
    msg.setDestination(25387U);
    msg.setDestinationEntity(164U);
    msg.op = 227U;
    msg.speed_min = 0.0730716809738;
    msg.speed_max = 0.0816367099969;
    msg.long_accel = 0.969691765295;
    msg.alt_max_msl = 0.0681181710211;
    msg.dive_fraction_max = 0.579044268199;
    msg.climb_fraction_max = 0.225367184674;
    msg.bank_max = 0.514512381108;
    msg.p_max = 0.0392619092924;
    msg.pitch_min = 0.232055888266;
    msg.pitch_max = 0.464484954448;
    msg.q_max = 0.00607368771874;
    msg.g_min = 0.937598012987;
    msg.g_max = 0.85956309009;
    msg.g_lat_max = 0.59885794875;
    msg.rpm_min = 0.017438765644;
    msg.rpm_max = 0.0864750055246;
    msg.rpm_rate_max = 0.635822666391;

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
    msg.setTimeStamp(0.710892002816);
    msg.setSource(25059U);
    msg.setSourceEntity(243U);
    msg.setDestination(2363U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.945685132918);
    msg.setSource(15453U);
    msg.setSourceEntity(180U);
    msg.setDestination(8851U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.755023207121);
    msg.setSource(17730U);
    msg.setSourceEntity(198U);
    msg.setDestination(44334U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.192065176921);
    msg.setSource(9743U);
    msg.setSourceEntity(234U);
    msg.setDestination(47217U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.570626040169;
    msg.lon = 0.129238364846;
    msg.height = 0.56643802912;
    msg.x = 0.0167988072393;
    msg.y = 0.198879372328;
    msg.z = 0.963208065963;
    msg.phi = 0.48284552372;
    msg.theta = 0.563556296181;
    msg.psi = 0.626504503165;
    msg.u = 0.74863037183;
    msg.v = 0.63952239978;
    msg.w = 0.883318353715;
    msg.p = 0.488174670139;
    msg.q = 0.544070426848;
    msg.r = 0.481106251173;
    msg.svx = 0.295996000025;
    msg.svy = 0.0786523955791;
    msg.svz = 0.694547848564;

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
    msg.setTimeStamp(0.122722867665);
    msg.setSource(59305U);
    msg.setSourceEntity(95U);
    msg.setDestination(21056U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.608932727914;
    msg.lon = 0.807047635105;
    msg.height = 0.640661476316;
    msg.x = 0.732642384906;
    msg.y = 0.259985927421;
    msg.z = 0.668304171895;
    msg.phi = 0.287767556249;
    msg.theta = 0.292254612582;
    msg.psi = 0.128174282897;
    msg.u = 0.645969139539;
    msg.v = 0.79261366334;
    msg.w = 0.261379648967;
    msg.p = 0.238887624327;
    msg.q = 0.689854052224;
    msg.r = 0.617359251353;
    msg.svx = 0.386305024072;
    msg.svy = 0.0324899224531;
    msg.svz = 0.220706847488;

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
    msg.setTimeStamp(0.00221602768295);
    msg.setSource(24017U);
    msg.setSourceEntity(39U);
    msg.setDestination(34852U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.749126975655;
    msg.lon = 0.643548116401;
    msg.height = 0.247230929987;
    msg.x = 0.320972714968;
    msg.y = 0.568423753939;
    msg.z = 0.695254085937;
    msg.phi = 0.0268179422436;
    msg.theta = 0.93441033942;
    msg.psi = 0.856248954732;
    msg.u = 0.0470425676308;
    msg.v = 0.672609802043;
    msg.w = 0.168669393274;
    msg.p = 0.780910250708;
    msg.q = 0.717853691976;
    msg.r = 0.518077761925;
    msg.svx = 0.539360211384;
    msg.svy = 0.375195223167;
    msg.svz = 0.388685406319;

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
    msg.setTimeStamp(0.934599835821);
    msg.setSource(59252U);
    msg.setSourceEntity(194U);
    msg.setDestination(40740U);
    msg.setDestinationEntity(52U);
    msg.op = 143U;
    msg.entities.assign("ZDGCKKWTQOGZFEVIHZVFBLNOYSGWBLNLCHWCJATG");

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
    msg.setTimeStamp(0.0469615109997);
    msg.setSource(53903U);
    msg.setSourceEntity(157U);
    msg.setDestination(4973U);
    msg.setDestinationEntity(109U);
    msg.op = 119U;
    msg.entities.assign("JBDORGCMALCATXQPUGQFG");

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
    msg.setTimeStamp(0.54023880731);
    msg.setSource(44201U);
    msg.setSourceEntity(186U);
    msg.setDestination(23710U);
    msg.setDestinationEntity(186U);
    msg.op = 183U;
    msg.entities.assign("UUASEKPONEYEZLFONILAQJNDNWKIZBYOHZJGYQVKFCFRXGOGHAPNODFVADDCJYBNGHUDJTGOYNVSDWFXWLZLHFGTAQWFMKIVXJCVZRPXAXHWIMBGISCKJMKIPNLOFRYMAAVQCUKQDHEZLXCJRYYLDPIHSSZHPUJMVZTMBMHWRFRSC");

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
    msg.setTimeStamp(0.633379936478);
    msg.setSource(51552U);
    msg.setSourceEntity(227U);
    msg.setDestination(40187U);
    msg.setDestinationEntity(29U);
    msg.type = 155U;
    msg.speed = 1073U;
    const char tmp_msg_0[] = {52, 116, 116, 106, -10, 94, -1, 54, -66, -115, -83, 102, -92, 37, -91, -58, 22, -117, 115, -75, -128, 81, -91, 15, -82, 3, 121, -31, -44, -101, -73, 27, -64, -108, -65, 65, 18, -45, 87, -82, -46, -76, 15, 24, -48, -89, 30, 19, 65, -96, -9, -1, -79, -68, -64, -20, -41, 37, -36, -79, 43, 84, -11, 31, -2, -101, -124, -76, -107, -35, -57, -110, -4, 51, 45, 95, 13, -117, 105, 113, -84, 29, -102, 12, -24, -42, -75, 67, -65, 77, -53, -61, -119, 36, -56, -80, -72, 32, -51, -107, -6, 90, 12, -13, 101, -72, -57, -29, 8, 33, -80, 29, 63, -113, 99, -77, -61, -116, 56, 120, -85, -89, 51, 107, -125, 37, 92, 38, 29, -93, -48, -80, 111, 25, 110, -77, -29, -126, -89, 44, -36, 21, 37, -62, -21, 46, -20, 57, -108, -26, -42, 74, -74, -27, -100, 33, -69, -21, 97, -26, 95, 108, 23, -69, -98, 20, 45, 77, -53, -112, -109, -115, 29, 46, 87, -63, 97, 29, 102, 51, -10, 126, -81, -94, 22, 102, -96, -40, 101, -114, -120, 6, 53, -60, -113, 92, -103, 47, -32, -18, -123, -11, 65, 31, -5};
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
    msg.setTimeStamp(0.882892083335);
    msg.setSource(59993U);
    msg.setSourceEntity(66U);
    msg.setDestination(62761U);
    msg.setDestinationEntity(126U);
    msg.type = 156U;
    msg.speed = 39670U;
    const char tmp_msg_0[] = {67, 76, 91, 6, -1, 114, -88, -77, -31, -57, -78, -101, -65, 105, -90, -117, 119, 112};
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
    msg.setTimeStamp(0.736299120371);
    msg.setSource(30218U);
    msg.setSourceEntity(14U);
    msg.setDestination(5363U);
    msg.setDestinationEntity(84U);
    msg.type = 48U;
    msg.speed = 29173U;
    const char tmp_msg_0[] = {-27, -12, -8, -120, 97, -66, -74, 34, -72, 58, -110, -70, 12, 38, -35, 14, 28, 59, 43, 16, 100, -118, 48, 51, -91, -97, -29, 24, 73, 110, -33, 47, 46, 94, 115, 6, -67, -96, -112, 100, 125, 56};
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
    msg.setTimeStamp(0.293159790165);
    msg.setSource(55559U);
    msg.setSourceEntity(64U);
    msg.setDestination(44671U);
    msg.setDestinationEntity(173U);
    msg.op = 155U;
    msg.tas2acc_pgain = 0.967087321098;
    msg.bank2p_pgain = 0.657450431747;

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
    msg.setTimeStamp(0.228626205601);
    msg.setSource(29176U);
    msg.setSourceEntity(224U);
    msg.setDestination(36435U);
    msg.setDestinationEntity(163U);
    msg.op = 209U;
    msg.tas2acc_pgain = 0.863525860663;
    msg.bank2p_pgain = 0.366767807568;

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
    msg.setTimeStamp(0.499048668226);
    msg.setSource(23582U);
    msg.setSourceEntity(218U);
    msg.setDestination(7640U);
    msg.setDestinationEntity(83U);
    msg.op = 86U;
    msg.tas2acc_pgain = 0.492102543255;
    msg.bank2p_pgain = 0.33281434197;

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
    msg.setTimeStamp(0.113512700722);
    msg.setSource(16892U);
    msg.setSourceEntity(205U);
    msg.setDestination(10261U);
    msg.setDestinationEntity(50U);
    msg.available = 999136776U;
    msg.value = 89U;

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
    msg.setTimeStamp(0.0774712693128);
    msg.setSource(47695U);
    msg.setSourceEntity(6U);
    msg.setDestination(23040U);
    msg.setDestinationEntity(123U);
    msg.available = 1298925569U;
    msg.value = 186U;

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
    msg.setTimeStamp(0.617807538593);
    msg.setSource(3216U);
    msg.setSourceEntity(108U);
    msg.setDestination(7833U);
    msg.setDestinationEntity(169U);
    msg.available = 2166113300U;
    msg.value = 179U;

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
    msg.setTimeStamp(0.113930664359);
    msg.setSource(12171U);
    msg.setSourceEntity(43U);
    msg.setDestination(38484U);
    msg.setDestinationEntity(233U);
    msg.op = 91U;
    msg.snapshot.assign("BMMCAVZATNLENPXQIJHLZWPNNGITGVEYEPZLSBQIXPOMBEFEXJSRAZHOFPYOWVMBAXQCKWQEBDDRYPRSIYXDYYFWZNWVBJZUIFAUNEQDTHUOITNJHEDHOTYVZWSVAUXPIADGBXOUCKKKODFWOTXIPCKSSCHJHUVQLKFSRYRLR");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 2847492057U;
    tmp_msg_0.value = 105U;
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
    msg.setTimeStamp(0.131448464436);
    msg.setSource(45215U);
    msg.setSourceEntity(163U);
    msg.setDestination(59617U);
    msg.setDestinationEntity(117U);
    msg.op = 233U;
    msg.snapshot.assign("NESAVAPKPNZXEMFIQUDBLMEAUCNITYCPAPYIPNPBSEVJGGPFXOQWYFVWCJSLHENAXXALYWJZYQQGMUITVBKDYDQZNKOJJLJGAHSMZRQIMUVIPFEYUGXTCTBVDSEOHWPHWARHDWRFRAGZISTSXURRCXNMKTFHCILEHZEWORJHKGYICETPLGOOUOGQVMNQBCFTBOLCQZJBW");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 25571U;
    tmp_msg_0.rpm = 0.016134205717;
    tmp_msg_0.direction = 40U;
    tmp_msg_0.custom.assign("YOPIEUDAUXVWGYPUXYKHGT");
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
    msg.setTimeStamp(0.133323954239);
    msg.setSource(46024U);
    msg.setSourceEntity(76U);
    msg.setDestination(32757U);
    msg.setDestinationEntity(74U);
    msg.op = 69U;
    msg.snapshot.assign("UZNZXNFABOCZHBVXSEVHTWBFENKLMUPWZUINBSCSMKTHERPVDOKNTIQGFIHKOHOWGWXAJAWFZUMSUTZLAMDUCNTDMFETLKJOIECJYOWOYBHUOYHHCSIAGGSOSCVHRRSBKYXXRTUYXGPAJBNDFLJXWVNKTFJNZMEZRZQJEQWVEAVFAPLTVXDFCRDIQGUPQSLDWBTZFJAMLSDIKCRMOVKMGARGXV");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 252U;
    tmp_msg_0.zoom = 225U;
    tmp_msg_0.action = 138U;
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
    msg.setTimeStamp(0.666656908815);
    msg.setSource(314U);
    msg.setSourceEntity(219U);
    msg.setDestination(14199U);
    msg.setDestinationEntity(100U);
    msg.op = 180U;
    msg.name.assign("SLPDHWJYLQQPSYIWPVMXAAKVCEYAVGNNQFOMOPDXDXLEXNMESCGWKDOIEWSYBTNZPXJGZERDGBJWUNDMMJKNADHBNWUZIQBRHMKJ");

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
    msg.setTimeStamp(0.319020005056);
    msg.setSource(61663U);
    msg.setSourceEntity(205U);
    msg.setDestination(5010U);
    msg.setDestinationEntity(233U);
    msg.op = 153U;
    msg.name.assign("JXNYBJYBAEZSGXWFGRVDOEMMIHVLAUKG");

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
    msg.setTimeStamp(0.781759043726);
    msg.setSource(60898U);
    msg.setSourceEntity(3U);
    msg.setDestination(23693U);
    msg.setDestinationEntity(77U);
    msg.op = 161U;
    msg.name.assign("JDYIVBVGGUCZYUDAYCVTRSOKSRUFMNYPRTQSRACENXPJEZTIILZXQWOGAEFJNUQWSAMLFRMXOWMFCKJGPMSBUZOTFYGWTNYHQGJJEYDVDXU");

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
    msg.setTimeStamp(0.765539673049);
    msg.setSource(5411U);
    msg.setSourceEntity(186U);
    msg.setDestination(12859U);
    msg.setDestinationEntity(172U);
    msg.type = 59U;
    msg.htime = 0.399408346317;
    msg.context.assign("ATNYWBOFMZSBQGXFCIGZPVNIWJVEHTUTKYLRTOXFDICLRITZNTBULJLXEHGKLFJSDKUOQONMIYSPBEGOMRZRQUCKPQAJGBLDGTPXCIHEAVUIPZVWANAHYWXTIISVNSXYHSHQDLSPTUDGASBOMWLYQDPXFZ");
    msg.text.assign("LWQKOTWEMPSJZNJQHXLGMBQLGYNAQHAXZKBOAQYKFWAMYTVDLOCP");

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
    msg.setTimeStamp(0.553574487608);
    msg.setSource(4345U);
    msg.setSourceEntity(236U);
    msg.setDestination(30802U);
    msg.setDestinationEntity(208U);
    msg.type = 58U;
    msg.htime = 0.961181774726;
    msg.context.assign("KSMWJLICWQCNDMSBXNAGZJQFCFKJVUXSTZICZFTOBECDNGBXOOYLHADPWNLOYYDOSVZKENCKWQBEYGXQHBUJJXVWMXQAEXSHKSUDBMQLBTYIIRQZZUHRDTGXRBORP");
    msg.text.assign("HPIUOYLUSCBPKVLLLOYGWCXIAZDWJZRSYEJATSTYGCEVMZBKRVXGVZIPNDZXMOLZIOFVWX");

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
    msg.setTimeStamp(0.226739179439);
    msg.setSource(48304U);
    msg.setSourceEntity(212U);
    msg.setDestination(3116U);
    msg.setDestinationEntity(0U);
    msg.type = 5U;
    msg.htime = 0.231559084025;
    msg.context.assign("WBESQMFOXEWNYGKSXLJHKKAELRPADVQPMZUDIQPLIRFAWDIZERSFBIZQELOOGWGRDVSWROLSUOYAZSQLTFEUNNFGGUNYLHZUQUSFBJGKJVAXOHEIBXDVSCHZSNBEHXCPHGYECGOTNWJHXYTZPIQAZMOXPWNVIGEZFMQDUTBCTUAMJWJVKYKWDOCUAQXTRDTLCUJYSVRFMWBPRJLYCK");
    msg.text.assign("TOVAQHUXYLIQRJMDGPZVJHFOMRPQHKKYGIKNHCDHRORQZJMNB");

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
    msg.setTimeStamp(0.162736291614);
    msg.setSource(18158U);
    msg.setSourceEntity(67U);
    msg.setDestination(60527U);
    msg.setDestinationEntity(62U);
    msg.command = 222U;
    msg.htime = 0.614318226198;

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
    msg.setTimeStamp(0.620359238959);
    msg.setSource(9988U);
    msg.setSourceEntity(0U);
    msg.setDestination(15550U);
    msg.setDestinationEntity(13U);
    msg.command = 42U;
    msg.htime = 0.673193931045;

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
    msg.setTimeStamp(0.611673127312);
    msg.setSource(3028U);
    msg.setSourceEntity(168U);
    msg.setDestination(22614U);
    msg.setDestinationEntity(56U);
    msg.command = 152U;
    msg.htime = 0.576737540424;

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
    msg.setTimeStamp(0.373351729306);
    msg.setSource(63503U);
    msg.setSourceEntity(113U);
    msg.setDestination(8818U);
    msg.setDestinationEntity(247U);
    msg.op = 247U;
    msg.file.assign("FLPNZEBAFVHDHUHNZUKOKTKZNWULGZV");

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
    msg.setTimeStamp(0.297370754915);
    msg.setSource(56500U);
    msg.setSourceEntity(233U);
    msg.setDestination(50878U);
    msg.setDestinationEntity(115U);
    msg.op = 25U;
    msg.file.assign("GGZCPVJOBBKTPCJHIGBQVNJCEKCECOSBZLYZWBMZDLXMCNOMHUXPAUZVWKZPKUBHWOETSGJMIDPWQYEWVOYKQISTACHXGFODVLEINNCWHSKRRTQPDNMEHZDRZZEEUANXWNYLJACYOYKAILTAK");

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
    msg.setTimeStamp(0.450058396507);
    msg.setSource(22213U);
    msg.setSourceEntity(247U);
    msg.setDestination(26587U);
    msg.setDestinationEntity(43U);
    msg.op = 165U;
    msg.file.assign("PDYFRGCCPJAQYXHNGXPHUPRKFPAOJNFPTSCFCPEDEXGXBCIGHTJOLQZWVLXYLEFLWYJXGMWO");

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
    msg.setTimeStamp(0.898040593934);
    msg.setSource(59609U);
    msg.setSourceEntity(10U);
    msg.setDestination(50591U);
    msg.setDestinationEntity(137U);
    msg.op = 187U;
    msg.clock = 0.220068829221;
    msg.tz = -80;

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
    msg.setTimeStamp(0.604642093044);
    msg.setSource(60835U);
    msg.setSourceEntity(203U);
    msg.setDestination(7341U);
    msg.setDestinationEntity(118U);
    msg.op = 135U;
    msg.clock = 0.819464611504;
    msg.tz = 101;

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
    msg.setTimeStamp(0.294106675884);
    msg.setSource(24226U);
    msg.setSourceEntity(243U);
    msg.setDestination(38445U);
    msg.setDestinationEntity(143U);
    msg.op = 53U;
    msg.clock = 0.438811517132;
    msg.tz = -66;

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
    msg.setTimeStamp(0.241920014107);
    msg.setSource(22684U);
    msg.setSourceEntity(103U);
    msg.setDestination(7725U);
    msg.setDestinationEntity(31U);
    msg.conductivity = 0.639325680102;
    msg.temperature = 0.27656614813;
    msg.depth = 0.41038628583;

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
    msg.setTimeStamp(0.199222734764);
    msg.setSource(11284U);
    msg.setSourceEntity(235U);
    msg.setDestination(60652U);
    msg.setDestinationEntity(70U);
    msg.conductivity = 0.476332757804;
    msg.temperature = 0.937355564036;
    msg.depth = 0.347761609936;

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
    msg.setTimeStamp(0.942916839077);
    msg.setSource(13134U);
    msg.setSourceEntity(92U);
    msg.setDestination(11321U);
    msg.setDestinationEntity(68U);
    msg.conductivity = 0.87106510812;
    msg.temperature = 0.0107551666666;
    msg.depth = 0.470084515759;

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
    msg.setTimeStamp(0.611680840493);
    msg.setSource(49595U);
    msg.setSourceEntity(104U);
    msg.setDestination(32128U);
    msg.setDestinationEntity(226U);
    msg.altitude = 0.624334974652;
    msg.roll = 20708U;
    msg.pitch = 55688U;
    msg.yaw = 27094U;
    msg.speed = 20308;

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
    msg.setTimeStamp(0.0585877463007);
    msg.setSource(52741U);
    msg.setSourceEntity(43U);
    msg.setDestination(24246U);
    msg.setDestinationEntity(110U);
    msg.altitude = 0.0687051785172;
    msg.roll = 61828U;
    msg.pitch = 31373U;
    msg.yaw = 55337U;
    msg.speed = 24929;

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
    msg.setTimeStamp(0.119034608713);
    msg.setSource(55699U);
    msg.setSourceEntity(212U);
    msg.setDestination(8501U);
    msg.setDestinationEntity(92U);
    msg.altitude = 0.0271362902131;
    msg.roll = 55067U;
    msg.pitch = 24299U;
    msg.yaw = 59826U;
    msg.speed = -28320;

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
    msg.setTimeStamp(0.845567428509);
    msg.setSource(15754U);
    msg.setSourceEntity(73U);
    msg.setDestination(3934U);
    msg.setDestinationEntity(183U);
    msg.altitude = 0.766593861572;
    msg.width = 0.239115606737;
    msg.length = 0.786831372375;
    msg.bearing = 0.82792693301;
    msg.pxl = 4504;
    msg.encoding = 12U;
    const char tmp_msg_0[] = {-24, 91, -72, 83, 125, -5, -3, 102, 10, 13, 119, 87, -119, -117, -9, -111, 115, 115, -3, -58, -91, 16, 59, -48, 28, -116, -29, -50, -111, 124, 46, -111, -1, 114, -18, 70, 29, -127, -118, 36, -61, -100, 9, -70, 55, 57, -6, 105, -29, -81, -58, -114, -34, -20, -18, -47, 112, 28, -32, 12, 117, 27, -44, 73, -96, -24, 79, 14, 55, 90, -78, 47, -57, -31, 52, -103, -48, -120, -100, -117, -127, 78, -71, -95, 105, 27, 121, 6, 6, -69, -16, -56, -78, -123, 49, 110, -34, -87, 9, 6, -18, 5, -109, 17, -104, 94, 64, -31, -84, -89, 105, -11, -97, 25, -55, 90, -74, 70, -28, 39, -12, -92, -22, -7, -41, 52, 10, -32, -73, -27, 25, -9, 16, 78, 42, 109, 3, -120, -16, 114, 97, 4, 100, -75, 113, 58, -27, -74, -73, 85, -46, -36, 85, -86, 55, 9, 73, 27};
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
    msg.setTimeStamp(0.453533420438);
    msg.setSource(28852U);
    msg.setSourceEntity(169U);
    msg.setDestination(36854U);
    msg.setDestinationEntity(57U);
    msg.altitude = 0.66866121424;
    msg.width = 0.709411884126;
    msg.length = 0.178140864179;
    msg.bearing = 0.624815554923;
    msg.pxl = 11939;
    msg.encoding = 39U;
    const char tmp_msg_0[] = {54, 72, 2, 71, -24, -82, 13, 119, 47, -87, -53, -101, -80, -107, 19, 64, -95, 85, 74, 30, 105, -56, -26, 85, -119, -36, 85, 62, 44, 36, -55, -118, -117, -88, 122, -71, -110, 33, 92, -8, 53, -68, -43, 76, 52, -68, -108, 123, -94, -20, 32, 37, 93, -107, -77, 74, -3, -61, -101, 14, -14, -69, -21, 4, 6, 87, -121, -85, 125, -123, 71, -107, -42, -111, 109, -113, 11, 88, 83, -122, 2, -12, -57, 112, 65, 41, 113, -13, 11, 12, 13, 46, 36, -60, -2, 117, -52, 32, 40, -9, 78, 22, -34, -29, -77, -47, -5, -112, -51, -122, -7, -47, -102, -17, -21, 96, 73, -43, 27, 33, -19, -27, -91, -20, -51, 3, 56, -71, -6, -7, 26, 28, -118, -26, -52, 16, -44, -83, 108, 14, -65, 120, 76, 4, -74, -38, 30, -33, 112, -11, 7, -60, -43, -79, -75, 45, -33, 40, -110, -50, -70, 120, 67, 110, -23, 122, 95, 76, -106, -60, -41, 99, -30, -96, -6, -120, 63, 42, -120, 8, 38, -41, -69, 76, 125, 43, 70, -114, 81, 54, -75, 40, -111, 17, 12, 89, -117, -48, -126, -38, -105, 26, 82, 116, 73, -53, 106, 42, -74, 33, 30, 96, -59, 29, -49, -65, -9, 12, -121, 48, 23, 2, 110, -81, -101, -21, -34, 122, 39, 14, 63, -20, -68, 86, -37, 77, 85, 50, -32, -103};
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
    msg.setTimeStamp(0.166624448556);
    msg.setSource(23119U);
    msg.setSourceEntity(69U);
    msg.setDestination(46828U);
    msg.setDestinationEntity(135U);
    msg.altitude = 0.198434225373;
    msg.width = 0.631758391461;
    msg.length = 0.0939918975333;
    msg.bearing = 0.628274570827;
    msg.pxl = 25842;
    msg.encoding = 69U;
    const char tmp_msg_0[] = {30, -109, 59, 59, -57, -66, -77, 66, -64, 52, 2, -96, 14, -56, -10, 107, 89, -117, 82, -88, 68, 113, 22, -45, -61, 32, 85, 113, 122, -11, 76, -92, 34, 1, 52, 90, -49, -108, 24, 60, 94, 115, 15, 54, -7, 26, -71, 54, 6, 113, -41, -38, -118, 91, -55, -76, 33, -15, -27, 49, -109, -80, -80, 79, -125, -8, -66, 84, 23, 96, 74, 87, 45, -2, -23, -77, 100, -54, -71, -26, -76, -42, 8, -91, -110, -38, 70, 80, 124, 37, 23, -28, 6, 103, -4, 48, -54, -119, 59, 45, -114, 20, -111, 57, -68, -68, -24, -22, -78, 68, 98, 27, -68, -47, 99, 24, 39, 117, 118, -7, 112, -96, 79, -97, 56, -89, 115, 56, -35, -74, -125, -71, -107, -42, 55, -93, 34, 9, 44, 54, 10, 15, 70, 35, 33, 54, -59, 45, -19, 99, -106, 52, 56, 100, 15, 48, 108, 24, 104, -26, -23, -97, -8, 115, -1, -52, -46, 126, -49, 17, 2, -15, -36, -3, -28, -26, -44, 111, -24, -54, 22, -46, 13, 99, 20, -43, -47, 84, 83, -36, 91, 27, -8, -53, 126, 15, -82};
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
    msg.setTimeStamp(0.882224708852);
    msg.setSource(53877U);
    msg.setSourceEntity(64U);
    msg.setDestination(63241U);
    msg.setDestinationEntity(226U);
    msg.text.assign("CYRVYTDUGAZWRAUENBWTPHKNNCVOPLNKJRTNCUISJBMM");
    msg.type = 242U;

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
    msg.setTimeStamp(0.500095802099);
    msg.setSource(60144U);
    msg.setSourceEntity(230U);
    msg.setDestination(50476U);
    msg.setDestinationEntity(173U);
    msg.text.assign("YAAQZIKYJPASUALCKPPTCEJDWBKJRFQPJHUVSEUCLKHWXVWVOJUFXHORRWSCFIXZQNFYTVHUYXYZTKEGOACWLTXOLDVRGECNSBTZCQMDTJBOMFBITGJBAERHGYBVAWFONMRBTGHZKKDQGUHSMPGP");
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
    msg.setTimeStamp(0.0904863030761);
    msg.setSource(8294U);
    msg.setSourceEntity(49U);
    msg.setDestination(25505U);
    msg.setDestinationEntity(108U);
    msg.text.assign("TBQNNLKPSDOGHIULDVWQILANHBSENDTAATTTKTGNGOQZYPDNDVJVZWYLCHIYUDMZCNIPSUFERJWCZOQPRYMKBYJSRAJBSKKJSXXCPUPXWZBIXBRWKQXEMUHEEJBGYCKQJHFGQSZLHOXIVFWNZKGSMVVHWKHOGUAMUPGLSIAFIBCUPFPETRRVHFOGXZDTVOMRLEBEXYYFFTRWOZQUNLLKMFCASQOFWYMWAANCDJYXVEE");
    msg.type = 242U;

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
    msg.setTimeStamp(0.168911079837);
    msg.setSource(36205U);
    msg.setSourceEntity(90U);
    msg.setDestination(16772U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.8799815266);
    msg.setSource(56849U);
    msg.setSourceEntity(167U);
    msg.setDestination(21333U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.750740489079);
    msg.setSource(50780U);
    msg.setSourceEntity(18U);
    msg.setDestination(19893U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.492337179122);
    msg.setSource(10787U);
    msg.setSourceEntity(44U);
    msg.setDestination(19962U);
    msg.setDestinationEntity(230U);
    msg.sys_name.assign("IQSUDITZULKMYNHRLKWOKESF");
    msg.sys_type = 98U;
    msg.owner = 42182U;
    msg.lat = 0.997137648357;
    msg.lon = 0.926584471341;
    msg.height = 0.736485741049;
    msg.services.assign("FTVOJDJRYMXBWDFLDVIBMJEGMITEYQTBKJQWKHNORNOBOZHIARZRGXOKPPMKVAJSIVQUYTSSMRPYGXORMPYPCLCZPCDXOLHRSNLPYKUGVBBSQOFVNBCPDQDTEAZEGLJFZJKEQJHIIWIVXALSDCGAKCPXUFHWABUXDNGYQNCHGEOWUECCWLNNLUTDUZEAAETYWAHWBFEKVSWMQNUFIYZXVMHLKMTZYJHQUIXM");

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
    msg.setTimeStamp(0.131125548401);
    msg.setSource(59559U);
    msg.setSourceEntity(130U);
    msg.setDestination(52086U);
    msg.setDestinationEntity(9U);
    msg.sys_name.assign("CADDTEQGNOVISTTYVYUKEXRECHMQBMHKTWPSAQWOOJYOQZWBOMMIHSGRDZPSRJRWLRCGMIXGKNRAZCZFJKGRKIFSQZECUKLPN");
    msg.sys_type = 252U;
    msg.owner = 19037U;
    msg.lat = 0.0132691353895;
    msg.lon = 0.806065485346;
    msg.height = 0.167102109845;
    msg.services.assign("XKROMLABTFCYCLVMLRRTUYPEMKHLAMOQJJAKJNGIQZYLZCOVYWKRADSHCGSFARJVCPTXQODFSEPYBKVIATSGE");

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
    msg.setTimeStamp(0.718360723536);
    msg.setSource(47833U);
    msg.setSourceEntity(32U);
    msg.setDestination(55843U);
    msg.setDestinationEntity(250U);
    msg.sys_name.assign("QSFWGQMMQZDNLWYKLSRMLQXYKTZHONWQSCXZROOOGVPPNYVUEBDEHYTJXIBBYAMZIPTMJYTKUNDZBONRAFZJFOIGBWBJHTJLILEXGTYBNTOYXYDYDVJKXLVJBGLAQCTJWVEHPCAJMUEFWQDVKSRNCDFFSVNRZCUWBMXUXFTRCDIPNWMQERA");
    msg.sys_type = 34U;
    msg.owner = 45858U;
    msg.lat = 0.459520657095;
    msg.lon = 0.796717076504;
    msg.height = 0.772513629499;
    msg.services.assign("SFHXIYFYCXZWWCEDQMUJQHWUUGGQPLHETAZHBLMQAPMHAGXWEBYQWJBJVTNZNGNQKOMGZIUFZAJUOCROGSPDXJSVEIHNMNEKFXKZCTPMTCLKBLRRWSOBRBMDILYIATSWEIRVDCUFYVSTAMNHBJRIVDKOEAPCFTKUPXRAYCHGLACZFKLDWPNKUPHLTPKOOZWGRTYRQDUCJDSFHSN");

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
    msg.setTimeStamp(0.665263950945);
    msg.setSource(49429U);
    msg.setSourceEntity(249U);
    msg.setDestination(32337U);
    msg.setDestinationEntity(199U);
    msg.service.assign("DGXXOMXJECKJWDHZNSRTIBAFBNRDHZLIFSFPYQBFVRBYGZYKUFVUGNLCIMDPOLSEOSTAZAVJWFWZWTPIVQMEBLVTAJOAGDDUEFCAHKOLFEIQKQLJEKSVMPXTCUTZIVXMAEQZRUZNRCWTHCOWZLQOCKDETLOHHKYMVRUCHXIXJJITRVUBR");
    msg.service_type = 236U;

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
    msg.setTimeStamp(0.619231613631);
    msg.setSource(8272U);
    msg.setSourceEntity(216U);
    msg.setDestination(51336U);
    msg.setDestinationEntity(83U);
    msg.service.assign("GXIBVJRWAQQRRLJLDSZMBFEVYTRYTXJLTMRIHKXDLBBOBBGUHOTLIQYUXWFKNSEDJPHCSQIXOSRHEJEAQOWCPJMVUMAJHGGYCFTTUVWXPNYDXATCAKVWNFURNWEAXBAVZOIKGSBKV");
    msg.service_type = 62U;

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
    msg.setTimeStamp(0.652130339435);
    msg.setSource(64521U);
    msg.setSourceEntity(72U);
    msg.setDestination(10472U);
    msg.setDestinationEntity(234U);
    msg.service.assign("ZDFELLBSHWENQWORYNGWZWZJWVZSALOTRJQNROSUDGBTPDCJITZTXMZMVXRPQJVSVWLLQOLCIHSRCMMMXBKRUODICEYCPYQ");
    msg.service_type = 95U;

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
    msg.setTimeStamp(0.849514992352);
    msg.setSource(60558U);
    msg.setSourceEntity(21U);
    msg.setDestination(42772U);
    msg.setDestinationEntity(237U);
    msg.value = 0.650119205807;

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
    msg.setTimeStamp(0.880528116135);
    msg.setSource(12043U);
    msg.setSourceEntity(204U);
    msg.setDestination(31293U);
    msg.setDestinationEntity(25U);
    msg.value = 0.655355367652;

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
    msg.setTimeStamp(0.815341747743);
    msg.setSource(3523U);
    msg.setSourceEntity(40U);
    msg.setDestination(53231U);
    msg.setDestinationEntity(81U);
    msg.value = 0.694590864569;

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
    msg.setTimeStamp(0.987177636362);
    msg.setSource(36686U);
    msg.setSourceEntity(253U);
    msg.setDestination(43054U);
    msg.setDestinationEntity(185U);
    msg.value = 0.712911541811;

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
    msg.setTimeStamp(0.18873146459);
    msg.setSource(30152U);
    msg.setSourceEntity(220U);
    msg.setDestination(44470U);
    msg.setDestinationEntity(57U);
    msg.value = 0.724862139914;

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
    msg.setTimeStamp(0.718408645293);
    msg.setSource(64209U);
    msg.setSourceEntity(45U);
    msg.setDestination(16913U);
    msg.setDestinationEntity(234U);
    msg.value = 0.273709655412;

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
    msg.setTimeStamp(0.214252951561);
    msg.setSource(23384U);
    msg.setSourceEntity(43U);
    msg.setDestination(60176U);
    msg.setDestinationEntity(191U);
    msg.value = 0.1579727092;

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
    msg.setTimeStamp(0.298819579276);
    msg.setSource(51230U);
    msg.setSourceEntity(145U);
    msg.setDestination(2231U);
    msg.setDestinationEntity(147U);
    msg.value = 0.941481587291;

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
    msg.setTimeStamp(0.901706313415);
    msg.setSource(16782U);
    msg.setSourceEntity(136U);
    msg.setDestination(36518U);
    msg.setDestinationEntity(29U);
    msg.value = 0.202009487632;

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
    msg.setTimeStamp(0.0955082523832);
    msg.setSource(31302U);
    msg.setSourceEntity(126U);
    msg.setDestination(17710U);
    msg.setDestinationEntity(108U);
    msg.number.assign("LQUEUZDLZQHAZHQTHCJBAPKWCLIMVEUGAFAQKHZBMDMMXPSLLNTBPWXOYJTRPFSKPVUCNSCVUZZFYBFLQOWLMZEVGPHROSXVMLNGKJHAWOJIZWRKDXCSUNHWXCRFZKJWCOADFMYGUJSRWWBOMPSPODNDQSTRLHGRJEGWVCRXPSQHGUVXIAHVQCNIFPAJGMNJYBREYJKFIIERITTOLICFATIDNAQZXIXVKNBEVETSOBUKGXYTYDBEKYDOUYGEYF");
    msg.timeout = 55308U;
    msg.contents.assign("CTDABUZLHZTCNXUMOOIHXTKZCGPTDPBSNGLRHAOKFWPRVFBXZHJNBILIOEPYFVKBYIWDSPTRGUOFVDVAUHNONQDKWGWFQLFHXHSQCOLFLSTSUMZXTXZRFSJDLJRVBNQPAKSMXNUIDL");

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
    msg.setTimeStamp(0.924788317669);
    msg.setSource(1660U);
    msg.setSourceEntity(234U);
    msg.setDestination(47468U);
    msg.setDestinationEntity(29U);
    msg.number.assign("JNDGEKWYVVZZNAIBIPMFZLPMNOLGXIRTNIJYSVLXVKFEXKPFJEZFSCXKCCCBBOIRPMFJYIJUCUEATIVKHMHLDSJRSNQYZOHOVWTQQTKIGXUCJWHVZGEOAODQNWWPWXMSHQGHLQYYLXYUGRDJULLOCKUMERRPWOGCBDCMPXUBOAEY");
    msg.timeout = 48222U;
    msg.contents.assign("XWAJLLFNGVMMGVJQNSYEBYYPMPDVIVEKZDNQVBGSFMCPUKFOFAFAEYZWWFQEBXESOMRYUPOFTLBKGATDXOKTSRCJQRBLKIHHDKJNVJLTTXNUUXWIEIRMJMSEIVOMEHSUTNWMAFHSTLWOXCNRYUUYXCQZDZNDDVJPQOKICIZAZIRQEHVFGAGWTJTBHDXFSCPS");

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
    msg.setTimeStamp(0.467927647201);
    msg.setSource(59368U);
    msg.setSourceEntity(65U);
    msg.setDestination(36526U);
    msg.setDestinationEntity(245U);
    msg.number.assign("CQGCABOHJERKPVMCYJGALATWLAQWQHXAEQJDFBZVIFRBNNPNHKZJRRGSJMMLKFLHOSWCBVTWHUZBNDSOPLSUJPPLDSRDGIMHOWNKWSCGMICEV");
    msg.timeout = 28532U;
    msg.contents.assign("GFGCNAIGQLYVPXSNEPROCITWUZAKGYZSNUVYVDIPBOTELNFKGITQXLWIQRRYQCTEUFXURRHKBQCXMMCAJTSCJDPSGLIMHK");

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
    msg.setTimeStamp(0.286298436938);
    msg.setSource(23230U);
    msg.setSourceEntity(103U);
    msg.setDestination(50666U);
    msg.setDestinationEntity(189U);
    msg.seq = 1313241319U;
    msg.destination.assign("QHMOCWOFIQUKMRGTVGSQWARAEDPJURLFQEYRTRUPDMDTJPYYDKRKZBNILFQWOOOFWLYSTACFNCIZIMGJDWNATJBXMHXGHUHYWCGBUVRZVQNBAYMJBXDNYJHJHEONPWJTJBLKDEEWAVBKHCXAUYKEGUGRCIXLCSOKTMSMANQLSUYELDBTRVAECFXIVHXZNUICZEULOJQDCZOZSXYIHPNWRZSHVVLFGMKPVFG");
    msg.timeout = 8029U;
    const char tmp_msg_0[] = {-31, 9, -74, 1, -73, -104, 9, -89, -95, -90, 76, 49, 74, 64, -63, -15, -113, -44, 125, -19, -48, -59, 15, 16, -93, -75, -90, -59, 106, -90, -58, 0, -78, 112, 126, -126, -106, -115, -41, -48, 125, -48, -53, 106, 70, 16, -44, 0, -60, -66, 63, 42, 99, 37, -20, 63, 26, -24, -36, -9, -11, 5, -109, 88, -30, -39, 56, 46, -106, 11, 40, -112, 31, 12, -78, -55, -16, -11, -99, 116, 6, -88, -3, 88, 34, -51, 112, 80, -76, 52, -26, -32, 116, 77, -81, -29, -13, 15, 82, 48, -79, -111, 90, -106, -62, -91, 56, -110, 76, -17, 6, 34, 37, -63, 83, -76, 88, 100, 121, -7, 22, 31, 48, -29, 123, 15, 68, 106, -76, -24, -68, 70, 7, 61, 65, -87, -75, 82};
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
    msg.setTimeStamp(0.936502988235);
    msg.setSource(3585U);
    msg.setSourceEntity(172U);
    msg.setDestination(26579U);
    msg.setDestinationEntity(137U);
    msg.seq = 2216719375U;
    msg.destination.assign("GOOOUEWJUEUISJHXJUPNVGKQTLTNSTCIZDHEJSZNJCJSXEKYIVHQHVJZPYRBAFQEAZYMLPGCMNWAMPOIBCRDIVWRIULDLMMTJDEYMOFNSVUGHXRAB");
    msg.timeout = 21666U;
    const char tmp_msg_0[] = {-17, -30, 65, 6, -96, -80, 90, -8, 124, 93, -51, -29, 19, 1, 40, -90, -19, 105, 74, -112, -84, 37, 17, -45, 80, 1, 23, 23, -11, 113, 61, -77, -106, -49, -85, 59, -103, 88, -39, -28, 28, 62, -93, -10, -93, -66, -35, -19, 59, -57, 53, -18, -13, 22, -87, 111, -85, 8, 73, -83, 91, 2, -53, -114, 63, -16, -98, -82, -113, -23, 52, 72, 20, -16, -2, 20, -76, 36, -103, -97, -86, 27, 13, -80, 8, 71, -17, -105, 84, -94, -123, 111, -37, 12, 68, 73, 90, -87, -24, -33, 112, -4, 65, 75, -57, 14, 86, 81, -2, 41, 6, 89, 67, 90, 30, 13, 4, 56, 105, -32, -9, 37, -39, 53, 39, -67, 61, 33, 62, -60, 107, -125, -103, -13, 101, -46, -93, -29, -56, 18, 65, -55, -19, -111, 46, 34, 36, 9, 65, -114, -27, 108, 49, 48, 21, 39, 4, 62, -10, 78, -31, -40, 13, -36, -10, -29, 14, -26, -104, 26, -100, -93, -80, -105, 56, -111, 101, 107, 65, -13, -54, -75, -54, -101, -31, 43, -59, -56, 34};
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
    msg.setTimeStamp(0.236834709753);
    msg.setSource(19189U);
    msg.setSourceEntity(224U);
    msg.setDestination(51448U);
    msg.setDestinationEntity(74U);
    msg.seq = 2688440940U;
    msg.destination.assign("YOQZXWHFGLVSKBGGDEWVITPRVGHMIVCGZMNDQWCZQJIZBAJUNAWYMYKIHOWRAUCWQBKRSHYFTHEMKUILBUSFCOPUQTKIETWRVJJDFKJCWSZLBXSVHBOGCNDXPLAAOEX");
    msg.timeout = 42740U;
    const char tmp_msg_0[] = {-1, -127, -48, -62, -87, -122, -34, -114, -11, 62, -2, -67, -69, 100, 108, -65, 19, 35, 4, -101, -62, -87, 114, -59, -33, 6, 57, 88, 63, -33, 90, 48, -127, -122, 35, 56, -82, 109, -87, -34, -75, -70, -20, 22, -61, 125, -94, -41, 84, 104, -36, -72, 36, -4, 120, -75, -3, 99, 1, 46, -60, -59, -45, 105, -1, 9, 62, -127, -124, 89, 118, -110, -1, 32, -84, 45, 75, 106, -30, 13, -115, 108, -71, -37, -76, 88, -106, 28, -71, -117, -99, -1, 16, -31, 67, 26, 100, -47, -68, -8, 92, 116, 66, -88, -7, -98, -52, -25, -49, 110, -93, 46, 113, -63, -20, -119, -105, -16, -84, 35, -77, -97, 106, -42, 21, -100, -120, 39, -11, -5, 90, 31, -39, -121, -59, -37, -82, 47, 9, -24, 24};
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
    msg.setTimeStamp(0.535200278404);
    msg.setSource(36170U);
    msg.setSourceEntity(237U);
    msg.setDestination(38337U);
    msg.setDestinationEntity(40U);
    msg.source.assign("TUBNAOXMENGQMDE");
    const char tmp_msg_0[] = {27, 21, -49, -57, -118, 43, 109, -61, 109, 86, -101, -104, -50, -58, 84, 47, 73, -60, -61, 12, 9, 14, -44, 122, -97, -52, -7, 76, 44, 23, 118, -64, -12, 1, -12, 52, 13, -124, 22, 101, 46, -112, 88, 93, -112, 107, -119, 121, -125, 118, 104, -18, -112, 64, 10, -22, -1, 22, -25, -104, -93, -105, 35, 124, 74, 56, 114, -22, -78, -32, 100, 109, 68, -100, -116, 32, 83, 63, 41, 29, 40, 16, 45, -51, -20, 55, 37, 43, -118, -85, -60, -62, -6, 62, 110, -5, -71, 19, 121, -20, -1, -54, -35, 108, -8, -124, 53, 119, 100, -72, 113, 59, -29, -84, -89, 31, 89, 10, 85, 11, 68, -54, 108, -49, -8, -54, 122, 93, 1, -73, 55, -126};
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
    msg.setTimeStamp(0.540544632238);
    msg.setSource(31920U);
    msg.setSourceEntity(239U);
    msg.setDestination(57066U);
    msg.setDestinationEntity(38U);
    msg.source.assign("TULQXKGJPMRBQKPWNOBZWQENZMFPTPTGLSPREGUSWNKSJDEFYXTXHFMURYPAHJNSSRHOMOPFNDGFFAQDNVIFSYUCLURYTNZYPLAXWODXAZAVKEMJSIKLEJVDHZAZWBB");
    const char tmp_msg_0[] = {-42, -20, 81, -77, -73, 33, 62, 125, -76, 48, 25, 46, 58, 97, 24, -57, 51, -38, -112, 96, 123, 47, 8, -98, -63, 9, -70, 47, -17, -95, 41, -50, -125, -38, -61, -116, 13, -10, 89, 126, -50, 115, -53, 43, -34, -27, -74, 38, 115, -128, 45, 37, -7, 67, -49, -41, 50, 33, 78, 47, 64, 32, -88, -52, 75, -8, -121, -99, 23, 29, 67, 42, -42, -96, -89, -105, -123, -86, -60, 12, 80, 34, -51, 31, 23, -36, -43, -27, -57, 76, 76, 48, -64, -1, -99, 27, 46, 122, -72, 85, -105, -3, -16, -56, 27, 111, 97, 77, -68, 20, 81, -59, -35, 33, -43, 78, 84, 72, 112, 69, 48, 66, 89, 44, 105, 45, -87, -23, 116, 57, -109, 104, 126, 88, -43, 54, -22, -110, 99, 72, 105, -34, -58, 13, -40, 123, 53, 91, -43, -75, -22, -40, -25, 32, -13, 1, -17, -107, -112, -87, -59, 53, -44, -87, 12, 9, 41, 22, 87, 35, 51, 38, -76, -79};
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
    msg.setTimeStamp(0.226704491566);
    msg.setSource(35047U);
    msg.setSourceEntity(20U);
    msg.setDestination(11691U);
    msg.setDestinationEntity(171U);
    msg.source.assign("LWPJTGAWZKQYRZVDBZAYVWGTYHPQXQRNVMEPRMSGBKXHNIVCGTJSSNSXKAKDBQVUMYNBGMDKPYPFQQTUQOBHWZVMWFEYOHMOLUXTECLYNCTBAFNWCGZPFUOZJIEEKRFXLRCURIMZTRIMLOLXFGYOXVHJECLLKIXSCUPLWBAHTCUSPIRDOZD");
    const char tmp_msg_0[] = {29, -38, 44, 11, -24, 111, -95, -111, 113, 43, -14, 45, 78, -65, -5, 43, 91, -37, 78, -30, 14, 49, 9, -101, -121, -5, 0, 61, -99, -27, 44, 114, -18, -29, -73, -68, 126, -77, -68, 121, 125, 107, 86, -117, 40, -96, -20, 29, -122, -67, 34, -30, -94, -52, -128, 57, -68, -7, 33, 81, 106, 30, 58, -110, -51, 67, 66, -31, 96, 40, 114, 111, 61, 65, 73, 58, 126, 94, -93, 94, 5, 43, -115, -74, 6, 17, -51, 11, 126, 114, -95, 107, -32, -23, -72, 68, -105, -78, -95, 7, 37, -115, 49, 74, -2, 122, -90, -122, -75, -10, -40, 24, 37, -61, -25, -62, 7, -34, -26, -11, 43, 94, -44, -7, 28, 76, 38, -101, 82, -28, 67, -41, -128, -38, -124, 122, -40, 0, -124, -75, -103, -59, -115, 114, -121, 94, 70, 14, 98, 36, -13, 46, -60, -72, 53, -106, -3, -65, -43, -78, -19, 97, 55, -50, -117, 90, -87, -23, -66, -30, -4, -109, 121, 49, 100, 31, -81, 68};
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
    msg.setTimeStamp(0.542286072204);
    msg.setSource(3004U);
    msg.setSourceEntity(74U);
    msg.setDestination(23110U);
    msg.setDestinationEntity(186U);
    msg.seq = 3341445252U;
    msg.state = 13U;
    msg.error.assign("IIBKACZRQIFFOPGNUNHHIEZJMAJNMKIBVZYSBECKWQDJTACGWUVUFGICJZXXKFZXMWOJYVYRAERJSECCQTGQTLXVVEFUGODAPTLLFQZALSOMAJHKBBOWEUVNGHPNQXKYCSMRYVMELWB");

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
    msg.setTimeStamp(0.908396828918);
    msg.setSource(12112U);
    msg.setSourceEntity(16U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(78U);
    msg.seq = 1600050880U;
    msg.state = 134U;
    msg.error.assign("PVNLKEGNMFAYUETQNOIOOHOVJYRIRIFTJCEOJSJPOIAAGTZQVBBDIAZJMRSXRLEQWKHEXEHLGZYRHQFIZTZDEYGDFNZXPPOLTBVNMBETVNMNCZLWXKDCPWUWXIHQRKFIWCETVTGQXHGJUIBW");

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
    msg.setTimeStamp(0.168607638561);
    msg.setSource(12579U);
    msg.setSourceEntity(163U);
    msg.setDestination(9178U);
    msg.setDestinationEntity(125U);
    msg.seq = 3425355292U;
    msg.state = 176U;
    msg.error.assign("RODUNMKFYFBGZDXWTITPJLQKNELNXCRLHUUHVSVIEUHOCEIGVMTZNAVUPEVQGUKOAQQZLIFZEPECUWIWWGEXCMADVPSBAURXLFDHFDSJGLKWWCNMFRAEYSQKCMUHHYDMPBTONSQZXYHCWGNPCWJOQVRVJZKJMIDSEYZBMRIXQJVRPNBHFTYSITBGGOFAKJIRSYPJFGJLRQUOPLDZT");

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
    msg.setTimeStamp(0.788558787185);
    msg.setSource(46563U);
    msg.setSourceEntity(202U);
    msg.setDestination(25897U);
    msg.setDestinationEntity(66U);
    msg.origin.assign("LUECMXOADUKRDBEIJRFKHVLZGNASMXKPGSMCGSWSADUOVDVHOQAJDYCMJEJRZTTWXQRSQGVTPCXBUGJRUYIXFTTMOIFTSWKOAXRNQ");
    msg.text.assign("IMGLVMXKEZRLNZRYMOWJQROBAPTHCOFSNRXPLFBGDRBEODSHZFSMXPKEQXOKAYWGNZGJCYCLTUUWTZYIKPINXPWKBNQMCPHBKFPVVEYTQHNFMTWFAJTOVUITYIEPAXVVGDIENOZNJFDHJWJARESSHRBTFJHHCAXCDD");

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
    msg.setTimeStamp(0.475962646473);
    msg.setSource(31275U);
    msg.setSourceEntity(156U);
    msg.setDestination(44771U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("VDAPXEOUWHJKJJIRFABDDPIUJSDBOGURUBBRBOQNWXLLPHSDZSORTOXIEWATNPMIVARCEIHIQBSCWQKRFCUMKDALQPSJZBZAPEYGHHVOXMSKJKXAXLMCZRGMCLNHCNIWJAPUTWTGVXGEIZYNMLFVXSGSETMQPSCGDQEPZUDNZLCQWVDCJFVFEYLTOYBZVFLWAUAFLOEWVTNZUIOYYXYTTKMQHDXGKYIGBNGNQRFFBM");
    msg.text.assign("IEUGONFCCEMMVPAUIFOKR");

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
    msg.setTimeStamp(0.0172598221062);
    msg.setSource(40675U);
    msg.setSourceEntity(239U);
    msg.setDestination(51820U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("HUCKELLRKTYQEQCAGHXYAIIDHWAAOPBOLTVTAVIPOYMWPMMHKGSNWUNNPDBAAKEQMZZREEICXKVUSSGMCBTOHWHULJXYFODDFECZBENSYSXWLQJNZQOZLLKJDBSRGUXJWGUIQFPSLPSPOTLIFVMCSTBEXRYGIMVIPJJKCDQMGCJLRNFRRYXEHRVXAYTDODUUVYVFZXCUFRAGFGKQZRDPWSFAWH");
    msg.text.assign("VMPXGUFRXWBWQKNMCKKGMFKCEGAOBHQNBEGHCZVLUTDUIULZWVAZPPWPMMGCHITYIHWXNAKSVCVXLOKSWZLACODBJSSRXZPJRLSZZPJTNYGICYATNDRJDPVBWDMSDJENKTWLFLMIA");

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
    msg.setTimeStamp(0.446578261398);
    msg.setSource(13875U);
    msg.setSourceEntity(161U);
    msg.setDestination(4290U);
    msg.setDestinationEntity(51U);
    msg.origin.assign("VHJBPMIEPQFQHAIXFLIABEDYVIXWDIGMQPWFPLEWWQOXCDXOPRSMHTQCRZBDJFUVSNNGKFSZJRWTNVKDSOAZVKSOCGLRPMCIMUHXMEFQEDRAGFBGXCACZJEUUCYJKYAKLOPPDEDYEWXOFNLGZFTZUQAZVYTREHGIJATHLWNUSZEKCSBNNKXATORTXHYVSCKMZJTZTBKIGRUVUYNPWLFJSHGBWQRML");
    msg.htime = 0.21863519699;
    msg.lat = 0.658610750693;
    msg.lon = 0.585390906848;
    const char tmp_msg_0[] = {15, 82, 80, -49, -114, 50, -82, 4, -115, 95, 28, -72, -53, 126, 47, -9, -34, -66, -97, -8, -20, -124, 66, 90, -81, 22, 124, -39, -88, 78, 38, 8, 49, -40, 12, -113, 122, -53, 104, 94, -45, 11, -44, -34, -101, 121, 109, 97, -123, 82, -48, 45, 120, -106, -10, 8, 88};
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
    msg.setTimeStamp(0.402211511365);
    msg.setSource(1310U);
    msg.setSourceEntity(17U);
    msg.setDestination(30034U);
    msg.setDestinationEntity(103U);
    msg.origin.assign("JEYBDOAGRHGFCLTSKGEGDIDHBHSBIINZIAJNNOTWXROSYNXQZWXALSUIMOSSLGAVEPPRKXWDFIZIAPVWIRPGEURQDJBMTVIUOMFNUKVAHQAOKQGNTERLJCMYJMOKZYJEVOUSDVWTYBZBCNKLKMSCNXQFPBUSFCFAVUXKRBTGTFJWYURLXPAPZVNHPDGJTACIKDVNCBOOMDWVUYEQHRTGLF");
    msg.htime = 0.755402520531;
    msg.lat = 0.9550849136;
    msg.lon = 0.953845828956;
    const char tmp_msg_0[] = {21, -116, -53, -97, 115, -39, -96, -102, -87, 117, 73, 41, -107, -84, 35, 35, 84, 69, -8, -87, -45, -15, -40, -48, 98, 36, -32, -39, -46, 42, -102, -24, 60, -33, 3, -17, -54, 18, -86, 31, -99, -60, -3, 67, -92, -22, 79, -2, 104, 72, -11, -67, 8, -85, -96, -90, 87, 90, -54, -82, -30, -36, 15, 64, 112, 10, -73, 35, -37, 12, -24, -81, 2, 87, 76, 36, -101, 12, 48, -17, 111, 48, 53, 112, 31, -83, 45, -57, -91, 6, -39, -68, -99, 5, -101, -43, 25, 17, 3, -108, -86, -70, 63, 70, 5, 26, -107, 30, -108, -104, 5, 94, -6, 18, -30, 74, 86, 109, -91, -105, 122, -81, -21, -70, 34, -110, 15, -21, -81, -82, 0, -12, 18, -92, -23, -14, 103, 23, -18, 47, 7, -57, -57, -121, -29, 119, 122, -67, -20, 31, -21, 66, -39, 89, 13, 92, -104, 38, 118, -102, 101, 60, -114, -8, 7, -112, -76, 123, 63, 121, 77, -121, -115, -66, -16, 27, 24, 96, -62, -110, 34, -1, 53, -83, 101, 87, -85, -9, -36, -127, 50, -111, -52, 92, -6, -100};
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
    msg.setTimeStamp(0.531431836205);
    msg.setSource(62854U);
    msg.setSourceEntity(99U);
    msg.setDestination(13848U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("DIFPXEYTSYGKBJPVKQZNRGYOGLPHPWEYRPVMMBZCTDUZMRGCLLSAJHMXGSJXABCUJGBPOYXURCOXNDQDRFQNJTMIUQAEYADWNJBHLTIORUVSEDNVRIPVSYMPSZXXVKXWKHQEUGFVTAFPPIMQLVXZJBAMNA");
    msg.htime = 0.402983324201;
    msg.lat = 0.327480922496;
    msg.lon = 0.965691937507;
    const char tmp_msg_0[] = {-101, -56, 9, -40, 23, -98, -127, 37, -97, -52, -23, 123, -48, -101, -127, -78, -72, 91, 115, 19, -25, -50, 113, 113, 84, 113, -25, 39, -10, -27, 95, -32, 124, -106, -4, 30, 99, -43, -40, 24, 16, 67, 90, 35, 68, 103, 103, 114, 99, 94, -127, 107, 22, -17, 46, -89, -27, 107, -50, 36, 76, 1, -43, 53, 40, 66, -66, -80, 58, -17, 114, -76, 11, 97, -112, -123, -48, -105, 41, 98, -12, -32, -19, 72, -22, 118, 1, 118, 42, -94, 76, 72, 43, -20, 14, 59, 95, 76, 32, -54, 36, -78, -54, 100, -11, -113, -83, -89, -125, 122, -65, -32, 59, -23, 122, -67, -110, 41, -58, 36, 72, 10, -95, 94, 81, -5, 2, 73, 85, -79, 107, 82, 38, -89, -97, -38, -17, -12, 53, 86, 97, 60, 126, -47, 35, 72, -31, 51, -55, -50, -28, 50, 78, 28, 45, -72, 83, 25, 22, 29, -98, 56, -63, 121, 9, 118, -115, -42, 20, 83, -92, -76, -90, 117, 56, 23, 83, -40, -82, -28, -85, 53, 58, 52, -27, 63, -116, -126, -61, 59, -56, -66, -40, 105, 104, 109, -34, 17, -43, 7, -94, -49, -3, -92, -54, -79, 82, -93, 82, -30, -90};
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
    msg.setTimeStamp(0.235472001962);
    msg.setSource(16160U);
    msg.setSourceEntity(9U);
    msg.setDestination(21044U);
    msg.setDestinationEntity(201U);
    msg.req_id = 179U;
    msg.ttl = 1060U;
    msg.destination.assign("BXUKVIHGGEPPZNXWQLDASXPRKUHNLRQFAAEZAFAMBWYGT");
    const char tmp_msg_0[] = {-49, -30, -88, -110, -40, -36, 81, -108, -117, 45, 109, -101, 78, 22, 118, -113, -81, -8, 48, -50, -12, -16, -107, -40, 108, 83, -123, 28, -89, -11, -45, -33, -102, -55, -27, -63, 125, 69, -59, -5, 17, -34, -111, -66, -124, -35, -90, 113, -91, -15, -8};
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
    msg.setTimeStamp(0.00806991275535);
    msg.setSource(34891U);
    msg.setSourceEntity(87U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(209U);
    msg.req_id = 63644U;
    msg.ttl = 11980U;
    msg.destination.assign("PUPJHCRZYHGAZSCDVVULTBISMTQLCKVBWIKXIBCFSOCNXVRXETIANIMWVNFBMDEIBLEPSYNOWTKQWFQAHRZSOUYNGYLXMNBJGQKJXAOPYZXJDV");
    const char tmp_msg_0[] = {85, 3, 75, 10, 31, -66, -18, 118, -128, 73, 101, -10, 108, 61, 73, -29, 84, 65, 30, 46, -104, 101, -79, -117, -15, -80, -78, -107, -2, -17, 17, -77, 112, -37, -42, -64, -73, 125, -110, 62, -11, 109, 106, 107, -128, -90, 121, -58, 116, 45, -6, -105, 113, 121, 5, 24, 16, -115, 81, 20, 22, -70, -17, 100, -40, -97, -97, 25, -52, 39, -57, -36, 49, 33, 60, -84, 11, -74, -128, 18, -97, -13, 86, -100, 120, 119, -110, 118, 36, -14, -115, 3, 115, -10, 39, 27, 70, 91, 21, -14, -94, 53, 105, -22, 58, 42, 122, 125, -90, -24, -59, -111, -5, -1, -47, 15, -43, 100, 79, -128, -63, -27, 122, 8, -77, 38, 65, 45, 75, -31, 117, -70, 112, -113, 69, 35, 98, -128, -10, 114, 103, 76, -93, 78, 53, 52, -43, -88, 74, -75, 93, -108, -81, 34, -128, -77, -122, -48, 93, -93, 32, -54, 21, -27, -27, -53, -3, 108, -18, 1, 38, -2, 9, -92, 26, 0, -108, 78, -119, -104, 86, 63, -20, -111, -15, 96, 75, 39, -122, -106, 9, -112, 121, 107, -23, -7, -79, -66, -90, 31, 32, -9, 17, -108, -54, 84, -46, -19, 107, 26, -13, -48, 99, -127, 30, 2, 108, 69, 55, 24, 57, 72, -88, -109, 40, 122, -111, -59, -57, 23};
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
    msg.setTimeStamp(0.343627958643);
    msg.setSource(10323U);
    msg.setSourceEntity(194U);
    msg.setDestination(63571U);
    msg.setDestinationEntity(94U);
    msg.req_id = 46416U;
    msg.ttl = 32487U;
    msg.destination.assign("ULCZQHLROH");
    const char tmp_msg_0[] = {-11, -104, -97, 35, 3, -23, -52, 47, 65, 73, -33, -22, -119, -91, 73, 93, -51, 21, 37, 121, 78, 111, -29, -22, 0, -30, -125, -30, 1, 23, -19, -1, 85, 50, 78, -82, -112, 56, -73, -7, -72, -90, 75, 103, -31, 114, 113, -75, -33, -54, 78, -38, -101, 77, -58, -42, -50, 109, 73, -18, 20, -94, 58, -20, -74, 30, -52, 84, -45, 20, 23, 117, 33, 9, 10, 111, 26, -123, -117, 81, 118, 40, -42, 32, -9, 105, 46, -38, 124, -50, 98, -92, -97, -107, -38, 0, -37, -63, 46, 25, -5, -19, -106, -68, -12, 112, 47, -62, -91, 71, 25, 57, 101, 95, 105, 124, -108, 57, 94, 12, -51, 89, -122, -31, -65, -124, 111, 26, -116, 104, -56, 115, 51, 105, -118, -14, -91, -97, -79, 57, -128, 85, -114, -15, 122, 43, 50, -5, 12, -57, -121, 76, 81, 55, -38, -17, 91, 26, 120, -84, -108, -12, 100, -66, 70, 17, -35, 118, 109, 93, 44, 117, 8, 25, -11, -2, -52, -103, 113, 16, 50, 64, 94, -62};
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
    msg.setTimeStamp(0.304660057693);
    msg.setSource(53606U);
    msg.setSourceEntity(3U);
    msg.setDestination(32464U);
    msg.setDestinationEntity(2U);
    msg.req_id = 14866U;
    msg.status = 141U;
    msg.text.assign("KZDTMDLEJSPUWAJLVVKMNGKIGGACBRZXUJQBBOGUDJXWRXVOPGXOCUBCAQPQBKIFXIUNAMCPFXIWCOAKETRROKZJPPECWJKSIQ");

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
    msg.setTimeStamp(0.249126448485);
    msg.setSource(42755U);
    msg.setSourceEntity(152U);
    msg.setDestination(21289U);
    msg.setDestinationEntity(168U);
    msg.req_id = 29638U;
    msg.status = 59U;
    msg.text.assign("XWAYPEYEYHZIYVPOCTOPMVFEEMARQQBTEGSRKLSECVL");

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
    msg.setTimeStamp(0.825237448151);
    msg.setSource(60684U);
    msg.setSourceEntity(199U);
    msg.setDestination(62705U);
    msg.setDestinationEntity(200U);
    msg.req_id = 59863U;
    msg.status = 107U;
    msg.text.assign("VDCSASHNAJGNOBHLWOKFOD");

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
    msg.setTimeStamp(0.389183743008);
    msg.setSource(34725U);
    msg.setSourceEntity(227U);
    msg.setDestination(37359U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("NWAGJRNPTXICGWYPTGCTMQKWMQZYCALGNSGRM");
    msg.links = 2923467832U;

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
    msg.setTimeStamp(0.012168807094);
    msg.setSource(28888U);
    msg.setSourceEntity(59U);
    msg.setDestination(5009U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("IEJOSFCZNCMRZVILKJPFKXKSPLBOPSUCEIXDMLCCGQKVJBWAEYCYDUPOLVVEUIEDRQQFDSVEZZFOBYTYLHMMKLOSIGAIDHOVFDNPQQXUCIWDMWJSBJVHDSSHOBJNWRXRZBMADFKKCHLIUTQKWLBCLCPFETXNBNQTYNRFOWRYTBRJAGYAAPQHHWQZVNARMDBRGFYZXUGPOWHJUMZMMXKZUJTLIPE");
    msg.links = 2446772518U;

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
    msg.setTimeStamp(0.986131267426);
    msg.setSource(39226U);
    msg.setSourceEntity(165U);
    msg.setDestination(3442U);
    msg.setDestinationEntity(62U);
    msg.group_name.assign("YCKRLUVFVCILEJLXTNUNYUTPJFUQOMPJZOFYSUBXHITDSVMZKOORPQRFUXWJDSABEUKWIHPVFDLKPGJPSVZECMUSXNFOAYFBLDPGJGIPYPSWEELOZLEXJSYJWAXKBMZATPECXWHCTNNVFMSMTRNYKZDRGEVDMTEMQBLFEIBUAYAQRBBQTOIIANAXKYHOSMFYNCWGWWQZKIGARVGZHGNRUZGO");
    msg.links = 130073203U;

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
    msg.setTimeStamp(0.761112850837);
    msg.setSource(41997U);
    msg.setSourceEntity(99U);
    msg.setDestination(4860U);
    msg.setDestinationEntity(215U);
    msg.groupname.assign("YORLXXGHBHXLVTTSVDPSITCYEJPUPRVMKEMQKLFELKAHGJHHVITJWFRKFGNNLLGJCLQOYTUXTDZWWMSTAEGAIQRBXPSDQKHVHPKWZTFKXUMFBLKCUVNXMQJFRWVORAXCZFQWSEUBDIBKOOYEWOIGEZTANSVSGVYLUOBDQRBHIIZNYPANQEBPPWBHDRAUKYZMTXMRJUGIAASUIOFBQD");
    msg.action = 74U;
    msg.grouplist.assign("KWPDPUEFJFUYEAZYUTGSVXRSRBQHRKUNVGWGFSUALWJSQKLCTTAXBWFLIYDKZJJTEEFEKDUYFSECNHHMOIRMIRMZYLEVUNCPKDMMXVODYRAQOFIWOCMPZXPQGSCJOKODPMLFPBCNJUHTSLSNIWSYBAZGBWIIGQXRVXPALKWOSGWCUDBHRXTVNNWEBILYPOVVDABZTYMJOTLIVJNJXFLUIQHKCABZTVRZFZMTEYDCCODQMAHQHE");

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
    msg.setTimeStamp(0.772594930999);
    msg.setSource(41468U);
    msg.setSourceEntity(70U);
    msg.setDestination(31707U);
    msg.setDestinationEntity(53U);
    msg.groupname.assign("SNZTLFENCMMPUYTGSSMJUQYUIBEFOVHFQPPJAMFHASWKMGQPHLIOOYENUUYJIXNILPIRMNZWBASZTVQDRASVXFSCQNAXGRQTYSMAUHCGEUXZAQPROIKCGLLDHNDMWUIWDBGHTGXOIFOPBVBTKLCJVDBJPFHGVQWAKDCOXKLZCBBJWROUPHKJVFLTTXRWRKYOYDWOCHDEVJWKVZZ");
    msg.action = 37U;
    msg.grouplist.assign("CCQNQLDVHYXXGIWRLWVZGQVAOHZIEEVYKWYNVXRVQMYNBHEPAJEAGLCSIKJYDMDFLAXWKDLPPIDQCWJZFHLASWOOMUQMIPRJTWAJEGRELBGBOZCPDEOSCNSYMCLKGNAARZTIXEFFMUIQZMPWIBTTUHWSDKPUXUDPRUNVXBAHSKOTZUIMRQFBHZFUHH");

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
    msg.setTimeStamp(0.821469445628);
    msg.setSource(35973U);
    msg.setSourceEntity(141U);
    msg.setDestination(38469U);
    msg.setDestinationEntity(41U);
    msg.groupname.assign("LDHXSQKPLWQFZDLDVVEJXLCFDSPKMQRHKLVKXHRFYUZSCEFAGTAIXYPVMYIYMQQCQOPMJWDZREWAITCUBITWWHAWUANVTJCTDWGMNOFLJLXSHTPVMMSGAYPNYAXKIBTNIWEMJBWOYZKOLGUBZKJBFJGSFOURRTDRQHYJA");
    msg.action = 233U;
    msg.grouplist.assign("KSYQZRVKFSTACNXOHRHMECEQUEDAEMRZVHEUBPIWKOXDCGDUISEREOFVQLJPFTMSZAQLNHXDCGHLNOTNTKDWIAJOVGKBAMGTSXWKWBJTGFPVVHTJXZYZFIKLZLAHYBCZUCAYXGRKPRYNUCAXIRTBIOUYQPQFBDQTZJQFENPWGIMWXMYXNW");

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
    msg.setTimeStamp(0.501215278945);
    msg.setSource(52679U);
    msg.setSourceEntity(218U);
    msg.setDestination(42661U);
    msg.setDestinationEntity(108U);
    msg.value = 0.359002244326;
    msg.sys_src = 20469U;

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
    msg.setTimeStamp(0.0167908006261);
    msg.setSource(58918U);
    msg.setSourceEntity(181U);
    msg.setDestination(38460U);
    msg.setDestinationEntity(91U);
    msg.value = 0.394882408415;
    msg.sys_src = 44178U;

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
    msg.setTimeStamp(0.757133116414);
    msg.setSource(29849U);
    msg.setSourceEntity(5U);
    msg.setDestination(34595U);
    msg.setDestinationEntity(135U);
    msg.value = 0.639703587194;
    msg.sys_src = 65354U;

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
    msg.setTimeStamp(0.00417275029293);
    msg.setSource(23248U);
    msg.setSourceEntity(13U);
    msg.setDestination(17620U);
    msg.setDestinationEntity(68U);
    msg.value = 0.290716351223;
    msg.units = 104U;

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
    msg.setTimeStamp(0.953463995116);
    msg.setSource(39400U);
    msg.setSourceEntity(120U);
    msg.setDestination(9501U);
    msg.setDestinationEntity(23U);
    msg.value = 0.507787654619;
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
    msg.setTimeStamp(0.966612961301);
    msg.setSource(51731U);
    msg.setSourceEntity(229U);
    msg.setDestination(32152U);
    msg.setDestinationEntity(62U);
    msg.value = 0.569126117295;
    msg.units = 247U;

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
    msg.setTimeStamp(0.0596049172602);
    msg.setSource(29561U);
    msg.setSourceEntity(118U);
    msg.setDestination(15261U);
    msg.setDestinationEntity(109U);
    msg.base_lat = 0.710741603757;
    msg.base_lon = 0.630268873047;
    msg.base_time = 0.941927975363;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 24241U;
    tmp_msg_0.priority = -91;
    tmp_msg_0.x = -18645;
    tmp_msg_0.y = 20374;
    tmp_msg_0.z = -20946;
    tmp_msg_0.t = -4657;
    IMC::Land tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.171605593151;
    tmp_tmp_msg_0_0.lon = 0.150043682947;
    tmp_tmp_msg_0_0.z = 0.746188151291;
    tmp_tmp_msg_0_0.z_units = 109U;
    tmp_tmp_msg_0_0.speed = 0.592040168338;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_tmp_msg_0_0.abort_z = 0.572679825983;
    tmp_tmp_msg_0_0.bearing = 0.777539254244;
    tmp_tmp_msg_0_0.glide_slope = 60U;
    tmp_tmp_msg_0_0.glide_slope_alt = 0.789749743982;
    tmp_tmp_msg_0_0.custom.assign("XNKZIZZPGA");
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
    msg.setTimeStamp(0.500838926608);
    msg.setSource(25100U);
    msg.setSourceEntity(84U);
    msg.setDestination(46866U);
    msg.setDestinationEntity(4U);
    msg.base_lat = 0.897942927051;
    msg.base_lon = 0.855509292388;
    msg.base_time = 0.556467957929;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 45457U;
    tmp_msg_0.destination = 48229U;
    tmp_msg_0.timeout = 0.106364596427;
    IMC::ServoPosition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 96U;
    tmp_tmp_msg_0_0.value = 0.273753018412;
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
    msg.setTimeStamp(0.269708379676);
    msg.setSource(3682U);
    msg.setSourceEntity(127U);
    msg.setDestination(35462U);
    msg.setDestinationEntity(229U);
    msg.base_lat = 0.126239724046;
    msg.base_lon = 0.903929470485;
    msg.base_time = 0.682727973123;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 31293U;
    tmp_msg_0.destination = 15671U;
    tmp_msg_0.timeout = 0.216367173619;
    IMC::CloseSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 3992091489U;
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
    msg.setTimeStamp(0.327931376375);
    msg.setSource(50813U);
    msg.setSourceEntity(101U);
    msg.setDestination(24209U);
    msg.setDestinationEntity(13U);
    msg.base_lat = 0.828699408614;
    msg.base_lon = 0.433162325;
    msg.base_time = 0.975810640595;
    const char tmp_msg_0[] = {63, 69, 36, -47, -57, -1, -1, -68, 52, 119, -117, -125, 62, 78, 43, 75, -107, -6, -32, 52, -114, 49, 96, 12, 82, -6, -121, 52, -97, -104, -32, -80, 53, 21, 14, -27, 37, -128, -77, -114, 90, -77, -23, 24, 101, 0, -14, 48, -31, 104, 57, -99, 72, 10, -19, -47, -65, 70, 69, 13, -13, -19, -6, 55, 72, -32, 57, 6, -29, 34, 20, 117, -63, 43, -105, -95, -7, 84, 68, -114, 81, 86, 41, -23, 49, -23, -78, -128, -92, -108, -63, 77, 11, 68, -94, -47, -16, -6, -23, -10, -60, -68, 16, 1, -96, 122, -12, -97, 119, -37, -32, -17, 60, 64, -60, -5, 31, 97, -122, 106, -27, -72, -105, -113, -56, -111, -83, -49, -9, -50, -23, -1, 97, 72, -103, -12, 12, -62, -88, -98, 8, 62, 13, -74, -79, -26, 36, -111, -99, 116, 51, -47, -33, -79, 72, -35, 106, -89, -128, -47, -7, 30, -64, 24, -81, 119, -13, 2, 70, -14, 14, 39, -111, 117, -72, -30, 39, -127, 86, -85, 107, 26, -56, 21, -118, -1, -41, 21, 48, 25, -46, 118, 75, -36, -39, 17, 13, 35, -62, -55, 15, 21, 22, -2, -39, -64, 110, 61, 121, -73, -85, 112, -66, -62, 8, -90, 31, 2, 86, 64, -88, -112, -51, -25, 106, -17, -96, -97, 55, 11, -99, -117, 81, -60, 14};
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
    msg.setTimeStamp(0.279910295956);
    msg.setSource(52759U);
    msg.setSourceEntity(24U);
    msg.setDestination(26971U);
    msg.setDestinationEntity(53U);
    msg.base_lat = 0.512672678564;
    msg.base_lon = 0.150785383085;
    msg.base_time = 0.164781918019;
    const char tmp_msg_0[] = {16, 114, -68, 0, -71, -53, -9, -55, 24, -55, 126, 120, -122, 12, -21, -81, -8, 94, -40, 126, 47, -76, 110, -105, -73, -93, -53, -98, -47, -66, 124, 56, 90, 120, -86, 18, -124, -22, -57, 37, 81, 22, -7, -36, -48, -89};
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
    msg.setTimeStamp(0.458766907385);
    msg.setSource(63397U);
    msg.setSourceEntity(188U);
    msg.setDestination(19906U);
    msg.setDestinationEntity(181U);
    msg.base_lat = 0.89781362223;
    msg.base_lon = 0.710985378467;
    msg.base_time = 0.660360821133;
    const char tmp_msg_0[] = {-80, 112, -9, 114, 24, 32, 27, -108, -4, -120, -99, 101, 67, -70, -20, -125, -98, -56, -7, 47, 124, 56, 53, -56, -63, 57, -65, -110, -96, -29, -103, -67, 123, -43, 2, 119, -78, -1, 23, -105, 62, 103, 86, -32, 34, 94, 122, -38, 114, -65, -105};
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
    msg.setTimeStamp(0.705757078731);
    msg.setSource(53503U);
    msg.setSourceEntity(146U);
    msg.setDestination(1457U);
    msg.setDestinationEntity(78U);
    msg.sys_id = 53597U;
    msg.priority = 74;
    msg.x = -6123;
    msg.y = -24519;
    msg.z = -2263;
    msg.t = -8680;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.617560266378;
    tmp_msg_0.base_lon = 0.691248916818;
    tmp_msg_0.base_time = 0.594257729349;
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
    msg.setTimeStamp(0.735999412475);
    msg.setSource(55434U);
    msg.setSourceEntity(191U);
    msg.setDestination(10494U);
    msg.setDestinationEntity(236U);
    msg.sys_id = 7951U;
    msg.priority = 95;
    msg.x = 24460;
    msg.y = 25633;
    msg.z = 25783;
    msg.t = 19894;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 143U;
    tmp_msg_0.error_count = 186U;
    tmp_msg_0.error_ents.assign("LDHXLDANTZXIKZEUGOTTVFEBBGRJKQNSWEAJPIMJQIHCRAZUOKAWHEWMQIOFJHPFKLYBLGXFFMOCSXMWNQANDCQKMLFAOPTJBIHBCYUWRLCRYUXUYGQCRFBUPEYRRXBWYDMEZNLPXSOVTIMVCFGVPWEHUDGTQMCKZFSEHNTWFIHUKDHLMBPZYTGSGAWYTIRAOCKASEVLW");
    tmp_msg_0.maneuver_type = 41279U;
    tmp_msg_0.maneuver_stime = 0.311374910364;
    tmp_msg_0.maneuver_eta = 14072U;
    tmp_msg_0.control_loops = 4209064928U;
    tmp_msg_0.flags = 116U;
    tmp_msg_0.last_error.assign("FQHIRSOBVUCCOMEUGUYHUXSHYKNUIEKPOTDDJARADXTHWEUXSINKUWHWLDGCDRYPOUBZGTCHMAFDPPYSOPWTZMXWFMVEBNRRLYXLPOQQODVVREVMKREFLUNIANIGFFBTEFLNHAVFHYQJZBOGMOUYJYXGKZCTSCSGCZPZZWBWPYNIDTISFDQXINBMWJIVEJ");
    tmp_msg_0.last_error_time = 0.691809496784;
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
    msg.setTimeStamp(0.96604545719);
    msg.setSource(47444U);
    msg.setSourceEntity(233U);
    msg.setDestination(44562U);
    msg.setDestinationEntity(148U);
    msg.sys_id = 31036U;
    msg.priority = -10;
    msg.x = 4592;
    msg.y = 27867;
    msg.z = 10687;
    msg.t = -210;
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.937490174673;
    tmp_msg_0.m = 0.159976163892;
    tmp_msg_0.n = 0.990018585605;
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
    msg.setTimeStamp(0.208311029595);
    msg.setSource(27334U);
    msg.setSourceEntity(68U);
    msg.setDestination(49413U);
    msg.setDestinationEntity(226U);
    msg.req_id = 5777U;
    msg.type = 80U;
    msg.max_size = 2247U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.327268516462;
    tmp_msg_0.base_lon = 0.0195076564673;
    tmp_msg_0.base_time = 0.18042066229;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 5717U;
    tmp_tmp_msg_0_0.priority = 118;
    tmp_tmp_msg_0_0.x = -27156;
    tmp_tmp_msg_0_0.y = -745;
    tmp_tmp_msg_0_0.z = 19043;
    tmp_tmp_msg_0_0.t = -563;
    IMC::DissolvedOxygen tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.86692428226;
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
    msg.setTimeStamp(0.00745424878511);
    msg.setSource(21981U);
    msg.setSourceEntity(62U);
    msg.setDestination(2711U);
    msg.setDestinationEntity(247U);
    msg.req_id = 16590U;
    msg.type = 237U;
    msg.max_size = 39195U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.630368084625;
    tmp_msg_0.base_lon = 0.506175448398;
    tmp_msg_0.base_time = 0.894037425405;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 36089U;
    tmp_tmp_msg_0_0.priority = -56;
    tmp_tmp_msg_0_0.x = -18733;
    tmp_tmp_msg_0_0.y = 16839;
    tmp_tmp_msg_0_0.z = -23479;
    tmp_tmp_msg_0_0.t = -23083;
    IMC::QueryEntityState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.236384090433);
    msg.setSource(17159U);
    msg.setSourceEntity(66U);
    msg.setDestination(23717U);
    msg.setDestinationEntity(216U);
    msg.req_id = 40898U;
    msg.type = 133U;
    msg.max_size = 37934U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.801664283329;
    tmp_msg_0.base_lon = 0.5187960019;
    tmp_msg_0.base_time = 0.215494959906;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 57751U;
    tmp_tmp_msg_0_0.destination = 32751U;
    tmp_tmp_msg_0_0.timeout = 0.849714784568;
    IMC::Calibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 55393U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.204225235464);
    msg.setSource(51844U);
    msg.setSourceEntity(232U);
    msg.setDestination(9747U);
    msg.setDestinationEntity(179U);
    msg.original_source = 39138U;
    msg.destination = 16861U;
    msg.timeout = 0.216284803569;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.936767017783;
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
    msg.setTimeStamp(0.11153499191);
    msg.setSource(45166U);
    msg.setSourceEntity(37U);
    msg.setDestination(48067U);
    msg.setDestinationEntity(245U);
    msg.original_source = 9604U;
    msg.destination = 25087U;
    msg.timeout = 0.532308951448;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("WZJWBOBDENFSMCUVVKHSNBNMIRQQRXIKYCVJWAEPCWHXTLKEZZUIXPMENTRBZJEXOMNYHTGZTVTLXQMUSTOAUQYJYDILVALPWCFMXFOGIVRKOGYLILPUPOXZBIJJCFXKBAVECJGUPHZQLPKGSIVHFMKWOSZARQJBQRJCTGIOJHPACMEYEFPCYGWKRQNHURFQVZOBVADWWDFMXKSLYCN");
    tmp_msg_0.type = 210U;
    tmp_msg_0.op = 13U;
    tmp_msg_0.group_name.assign("YHPDNWBQNNEIPVXRSKERNCL");
    tmp_msg_0.plan_id.assign("DQAEIYIBXEUGGLWBEPAPXCTILSVUSWGHUCZPNBDLHMXY");
    tmp_msg_0.description.assign("ONIXHFFXQLWMCBMPXPIPTSKYGOFDAJUQWPJDNRWKCZZFOPADSFWICYYFAPTKGKKCLJAMNVHRWUAALDNRSTFEEPYCETKBQGVGWVBAHLBPKVMZECMSTDVXECVMLYADPOBMJYPSXBHQXCIYZCZXLLDYGRJLGCHBFVGIIUSLUIOQOGTNUBWJTFRTXJVMVELKRRSNNUKQOIJTZNSXUZMNQEAABSIYHHZGEWRT");
    tmp_msg_0.reference_frame = 82U;
    tmp_msg_0.leader_bank_lim = 0.771530582749;
    tmp_msg_0.leader_speed_min = 0.868601473873;
    tmp_msg_0.leader_speed_max = 0.538097524913;
    tmp_msg_0.leader_alt_min = 0.303651041429;
    tmp_msg_0.leader_alt_max = 0.36958198682;
    tmp_msg_0.pos_sim_err_lim = 0.614412112271;
    tmp_msg_0.pos_sim_err_wrn = 0.108931740297;
    tmp_msg_0.pos_sim_err_timeout = 23684U;
    tmp_msg_0.converg_max = 0.290355863676;
    tmp_msg_0.converg_timeout = 27815U;
    tmp_msg_0.comms_timeout = 46305U;
    tmp_msg_0.turb_lim = 0.118865392794;
    tmp_msg_0.custom.assign("AOEQNDQICHHPVEKXJJPDKMBWSJSNARFYUGOHWOSUJOOBGULSEFXMFZPIMZGUFNRQTENGRKPLXTFLTDSWXXGUCUUTVLLKZVZBEQKYJSUTQRBZGTCINKNPETJILUACGQOPCLRWIRNLTYABJXYWHFHKFSKHHGRDAVSWBLQVIQMYQZVXCWFYMXAOKCXYRATIITOMWNRHAEVDZWPDQALJJYBNRF");
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
    msg.setTimeStamp(0.130645677189);
    msg.setSource(20071U);
    msg.setSourceEntity(19U);
    msg.setDestination(64954U);
    msg.setDestinationEntity(242U);
    msg.original_source = 37646U;
    msg.destination = 16307U;
    msg.timeout = 0.987295887689;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.732641021801;
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
    msg.setTimeStamp(0.193146565092);
    msg.setSource(8575U);
    msg.setSourceEntity(135U);
    msg.setDestination(54371U);
    msg.setDestinationEntity(78U);
    msg.id = 83U;
    msg.range = 0.789813437837;

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
    msg.setTimeStamp(0.425377475858);
    msg.setSource(52222U);
    msg.setSourceEntity(221U);
    msg.setDestination(49508U);
    msg.setDestinationEntity(248U);
    msg.id = 51U;
    msg.range = 0.949965215078;

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
    msg.setTimeStamp(0.277463277204);
    msg.setSource(36474U);
    msg.setSourceEntity(200U);
    msg.setDestination(52547U);
    msg.setDestinationEntity(247U);
    msg.id = 19U;
    msg.range = 0.185637927369;

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
    msg.setTimeStamp(0.237778392031);
    msg.setSource(15396U);
    msg.setSourceEntity(69U);
    msg.setDestination(14201U);
    msg.setDestinationEntity(104U);
    msg.beacon.assign("QKJSUPOFEXGPNGLENAEYACLOEHABTVLGYUMHAYHCMXNJLOLFRIPYUZXKIFJDHFIXTTZGZRWUGWURNXVEJXYRVAICSPQMVJMGPVHATKZFRHBSYHFUFWQFEGKCBCHNDWKXPGWBCLISNJPOTMKDNJQGBSWDMJMTNDJEZFZQSOYAKVBPOJIMKDABVNWCQCTOESZQNATCKXYRWTALVLRLBDOSXWKFQUHEVPHBDSGDZEYMR");
    msg.lat = 0.0349012340367;
    msg.lon = 0.23246116255;
    msg.depth = 0.0194076853249;
    msg.query_channel = 165U;
    msg.reply_channel = 107U;
    msg.transponder_delay = 202U;

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
    msg.setTimeStamp(0.0637506561509);
    msg.setSource(20831U);
    msg.setSourceEntity(213U);
    msg.setDestination(52545U);
    msg.setDestinationEntity(24U);
    msg.beacon.assign("RPKYQNUAXNXHYOXDBYZEQKJLVHHKERJTRASARNLMIEGBSULGFSOIMXSPPLDOMKBHDDEFLPPLVDWSEFLNGPHISPKUPYYRETVSWLQFDJBAKWAFVQFSJHBOJUCEKOHAJIFIJOUUXQPGVVLQGZYBJMAQRARGNZXTTOXCYVMZJCCNFDIKQMSFID");
    msg.lat = 0.78037011673;
    msg.lon = 0.499856659584;
    msg.depth = 0.334756810221;
    msg.query_channel = 132U;
    msg.reply_channel = 29U;
    msg.transponder_delay = 243U;

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
    msg.setTimeStamp(0.535969031473);
    msg.setSource(21240U);
    msg.setSourceEntity(189U);
    msg.setDestination(44054U);
    msg.setDestinationEntity(74U);
    msg.beacon.assign("CSJKIUEAXOEXCQBUGLRBLEFMDVVTGWQLKDSUUAVFMMJDK");
    msg.lat = 0.926502395514;
    msg.lon = 0.598000873776;
    msg.depth = 0.440555532348;
    msg.query_channel = 66U;
    msg.reply_channel = 249U;
    msg.transponder_delay = 28U;

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
    msg.setTimeStamp(0.965648507618);
    msg.setSource(62763U);
    msg.setSourceEntity(185U);
    msg.setDestination(52957U);
    msg.setDestinationEntity(236U);
    msg.op = 45U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YJKHFTMWGDAMRBPPJTKTRFGLROPWOGWDPLXGAMUSHVEOGFNIYXKJGHXJIBXWLDQNWNLCVAUMKIKOSQWTVNAFX");
    tmp_msg_0.lat = 0.320159131282;
    tmp_msg_0.lon = 0.02548404027;
    tmp_msg_0.depth = 0.936044772538;
    tmp_msg_0.query_channel = 188U;
    tmp_msg_0.reply_channel = 217U;
    tmp_msg_0.transponder_delay = 225U;
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
    msg.setTimeStamp(0.97017800842);
    msg.setSource(6074U);
    msg.setSourceEntity(51U);
    msg.setDestination(49905U);
    msg.setDestinationEntity(186U);
    msg.op = 70U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XVDFPBNVFFIYIEXDNLGOVQNGXLLSEJGASJOKRKSRUALYVTIMZBBCQFMNPZDNMDIZYPMBIOUYMETDZLKCERWDZSCRJHGTWUPUANAHEXFHEHWGYTQIRJQFKTHDGHTZVISETWXMCFMAXOAPTZZCPEGEGAWPCRFCKQYCQOSCUKRJOXXYWINMJKWJPHSYGYURMDUSARKJVOISBWEVPNB");
    tmp_msg_0.lat = 0.29372418021;
    tmp_msg_0.lon = 0.0603881299848;
    tmp_msg_0.depth = 0.836152507382;
    tmp_msg_0.query_channel = 40U;
    tmp_msg_0.reply_channel = 104U;
    tmp_msg_0.transponder_delay = 61U;
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
    msg.setTimeStamp(0.949768436732);
    msg.setSource(24873U);
    msg.setSourceEntity(48U);
    msg.setDestination(18388U);
    msg.setDestinationEntity(91U);
    msg.op = 251U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SPEECVKLTKJQXBBVGXPIRQOYEPSCVKRLSNDBDHIIQTEOYBMTRJDTOXMIKSYZZTDFDWWANCGCSCIYMGQYJIHRJPOPXYUUALYJFLHKXFGISVNNRHSABNGSVIPXCDANZONEFFALMGTFYMAMYDWZCMAQUHMENCPHCRSTUNAEREGOWMAFZQDKZUMZERLWVQBRFU");
    tmp_msg_0.lat = 0.703817470517;
    tmp_msg_0.lon = 0.208786732827;
    tmp_msg_0.depth = 0.719328887188;
    tmp_msg_0.query_channel = 247U;
    tmp_msg_0.reply_channel = 122U;
    tmp_msg_0.transponder_delay = 40U;
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
    msg.setTimeStamp(0.693700611595);
    msg.setSource(4630U);
    msg.setSourceEntity(112U);
    msg.setDestination(32288U);
    msg.setDestinationEntity(94U);
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 3060U;
    tmp_msg_0.lat = 0.780814799276;
    tmp_msg_0.lon = 0.15576380675;
    tmp_msg_0.z = 0.522495348893;
    tmp_msg_0.z_units = 189U;
    tmp_msg_0.amplitude = 0.560751905225;
    tmp_msg_0.pitch = 0.269194521406;
    tmp_msg_0.speed = 0.3812290348;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.custom.assign("GNABLWKJDOJQIWNWOYCATIV");
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
    msg.setTimeStamp(0.638809421347);
    msg.setSource(6907U);
    msg.setSourceEntity(234U);
    msg.setDestination(21724U);
    msg.setDestinationEntity(40U);
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("IWVOPHMGIOLVNAIPJAMIFFKXFDBWXSNYGIXYRKTUUUQELVHPQCZGMTZDNZJWEDLIVFBOLOGSOUGZCCCUSKTIQXKUNCTQDOWHNXLWLIMBXGVHVYNCKTPJHJFZIYBVDMPYOFAIKMWFLPZJJFBCKDQLWRWOCSGHANMKNVQZNQUSWMTSAEZEUUAP");
    tmp_msg_0.reference_frame = 197U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 47456U;
    tmp_tmp_msg_0_0.off_x = 0.325911852093;
    tmp_tmp_msg_0_0.off_y = 0.18199490809;
    tmp_tmp_msg_0_0.off_z = 0.0590497662625;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ZOVSZSIOICXXKVWDJKCGTOTBVJKYSPJQWKGWFITWEVJFFQMMAYYFHMLLRCMNEGOWKSHXPUBBDGORALNYFXVBWUTARJBOEUVTSVXVPJQGKFIWENABRKEGTDPSKURLJRYHJYUPOCOGTXMLZFNDHXFZHADEDZBUIACDQRSZSGQZHUZ");
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
    msg.setTimeStamp(0.150729641481);
    msg.setSource(10025U);
    msg.setSourceEntity(163U);
    msg.setDestination(26558U);
    msg.setDestinationEntity(178U);
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 175U;
    tmp_msg_0.clock = 0.153894365109;
    tmp_msg_0.tz = 8;
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
    msg.setTimeStamp(0.593595636922);
    msg.setSource(32018U);
    msg.setSourceEntity(138U);
    msg.setDestination(10540U);
    msg.setDestinationEntity(214U);
    msg.op = 111U;
    msg.system.assign("WYPNAIQWGTDAUUKNSZIVOCALZCROKRDQHKUYFNOJ");
    msg.range = 0.191382285927;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 3486437124U;
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
    msg.setTimeStamp(0.0469893561092);
    msg.setSource(7144U);
    msg.setSourceEntity(114U);
    msg.setDestination(35613U);
    msg.setDestinationEntity(64U);
    msg.op = 152U;
    msg.system.assign("EMDBCFSSCRHXXHLGHVMDUOOWANGRRKJOD");
    msg.range = 0.301225273005;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BOJLPSRJOVLCBKOLYHEFATQGDXDAXUAVOMSFICLDRHJAGAELTZRCVRDHBDEIKWVMGEFQXMFVMZSCICMSGPHYHONYEZTFAVRPKYQZJIEBMUPGGSHSWUNXLUUWYLZNWWBWSSYLKIYKQXEUNGCWBATZNXBULMNMOSUWQAFQRVZZHCTBZIXUGEVURHDCHDTJKJSNWKVFDKRCXYCO");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 39171U;
    tmp_tmp_msg_0_0.control_ent = 7U;
    tmp_tmp_msg_0_0.timeout = 0.970391862628;
    tmp_tmp_msg_0_0.loiter_radius = 0.590220646952;
    tmp_tmp_msg_0_0.altitude_interval = 0.41273868563;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanGeneration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.cmd = 212U;
    tmp_tmp_msg_0_1.op = 11U;
    tmp_tmp_msg_0_1.plan_id.assign("TMNLCAHJJNKHHLUHIRLFLFKSSKZYIJRORYWBYQNMWHCVCKCFBNFEPURSPBVZJKNURXJWKGXZDFCXQTSOBUPTSAQRAXLJGXQPFYAMEGAOTBTGDMSMWKJ");
    tmp_tmp_msg_0_1.params.assign("BNJOAPSBQITERFTTSEWXYZWXQUQELIGKEHRFYNLXPUJMJIDWBSKINZDXQVDOIIOENMRMNSUSUIHBAMQCJGDI");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.992849423412);
    msg.setSource(44319U);
    msg.setSourceEntity(38U);
    msg.setDestination(836U);
    msg.setDestinationEntity(138U);
    msg.op = 161U;
    msg.system.assign("AFRGXGYJSYWHTYSCUEIXKHESVGPQFJWADWZCMSMLBJZVLSDLUHYBKZQFVYOXVYMNMINOOXRTUNMCAMLQMKFMRORNQHTHJTFOZJKPZPXICSHIERGJQTLBQEUPFBTDSVGTUOPKWCGBCJNFWRXVCHEAKLPQGDZRUDFDKXNHVUTOTNGHYUAZAWVIQOBNAIRLXCJILBWNCPEUSSPBYBKQCVKEAPMIZGZ");
    msg.range = 0.247799100424;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 22U;
    tmp_msg_0.mnames.assign("LOYQZWVZJXGMIUBTETPPWCBJBN");
    tmp_msg_0.ecount = 123U;
    tmp_msg_0.enames.assign("KTWDCEGGGNBETHHACXKFX");
    tmp_msg_0.ccount = 41U;
    tmp_msg_0.cnames.assign("NDVDEPMKXYOVCVOGBYTVBFORZUKLGVHKFMEIBWSIPFYVZJYWFETYFKVDQUMWLPSYADZRBJEHCPTWYDIHUSIOGOIJYOKTILFOPNMFCYZJPBVCINNHQRUMHKMISNUBSDVAQNSBRAHQXTQWCKEKGUUXGPAWLLDZHLNKTWXNDADQCTWUCDE");
    tmp_msg_0.last_error.assign("CNPXZRMCKZUWFWSNTXFQXXLJKHJCWQHBPEEMLWSFJNGUSRTOKKBYHYAISVYCPWKYTMHAKXINSMQPUGRRNXFQ");
    tmp_msg_0.last_error_time = 0.922821269658;
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
    msg.setTimeStamp(0.33682332169);
    msg.setSource(11806U);
    msg.setSourceEntity(44U);
    msg.setDestination(55337U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.374452874491);
    msg.setSource(9076U);
    msg.setSourceEntity(143U);
    msg.setDestination(38050U);
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
    msg.setTimeStamp(0.455000771298);
    msg.setSource(16638U);
    msg.setSourceEntity(45U);
    msg.setDestination(18982U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.268469479211);
    msg.setSource(60615U);
    msg.setSourceEntity(176U);
    msg.setDestination(15975U);
    msg.setDestinationEntity(26U);
    msg.list.assign("PDWEPQCMXTFOFUKCIANJPDQTPCYYYJHVZJOLDBJSLETXFJUVLDUIXGCHKSKLUPNPWSZCVBSNQNACJAIJPFZAVQHTXBMRBHZLNVQRQGRJSSLSZCKGAUBOOVHXJSYPQBKPIRVAMPCHKQBUFRZXVNOFEBZOMCVUQB");

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
    msg.setTimeStamp(0.302789021681);
    msg.setSource(12583U);
    msg.setSourceEntity(5U);
    msg.setDestination(24059U);
    msg.setDestinationEntity(93U);
    msg.list.assign("RUYBJSGTQIJMODPYWCHQOILVHOWKNCPLXNKKEFEYGJCHGRAAXZDBQFSLSFIZLNOJZBIFHUXVMJODLNEBXPPDDRDYYHWSTIXJXPUFIQYUTEUKCHVWPJUVWFRSGLDEZNBITEMUCPBXTQFACGTKMOYSWKEQVJDR");

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
    msg.setTimeStamp(0.902439036594);
    msg.setSource(61775U);
    msg.setSourceEntity(145U);
    msg.setDestination(32019U);
    msg.setDestinationEntity(188U);
    msg.list.assign("XBDTFXQBVPWEMNTPNZZXHSPLIGUSNATTDXOAOKBJUVYIWQQDYEDFYMDKCPGJPBIRSWLGQC");

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
    msg.setTimeStamp(0.681532386471);
    msg.setSource(3657U);
    msg.setSourceEntity(119U);
    msg.setDestination(38203U);
    msg.setDestinationEntity(226U);
    msg.peer.assign("PDOKVMCBXLKZUKEIUZOIOTBHEOLQGHOUFRVQBVCPDMMFJCCYYWPARGSPFSWCZGLUTWFBMQQJKODWSMUMVPUTNJMWPKUTFAVARQIADCUHHEEURVTKJMDNEKJGMYFIFI");
    msg.rssi = 0.430404590776;
    msg.integrity = 61537U;

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
    msg.setTimeStamp(0.428427249704);
    msg.setSource(43740U);
    msg.setSourceEntity(115U);
    msg.setDestination(56257U);
    msg.setDestinationEntity(133U);
    msg.peer.assign("WFBJWAHJTFHZDZHVHTERDNEGKOMFGJSWCTPFYRKHGNDUIGYNXGUDCEJVNNVWZKPDQAAUJGTSKYCZLLCHUWPJOBJRRTOAIWYHWEMPRQAIXXJBPM");
    msg.rssi = 0.0362842630492;
    msg.integrity = 20063U;

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
    msg.setTimeStamp(0.965414159264);
    msg.setSource(33275U);
    msg.setSourceEntity(106U);
    msg.setDestination(47094U);
    msg.setDestinationEntity(167U);
    msg.peer.assign("XZHCXVXLXWJEQFCGVCTGZUUVNSZSVQTYSHDOFEAJLEFHDQMABFJG");
    msg.rssi = 0.450087478852;
    msg.integrity = 55470U;

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
    msg.setTimeStamp(0.477172896894);
    msg.setSource(34377U);
    msg.setSourceEntity(1U);
    msg.setDestination(46898U);
    msg.setDestinationEntity(193U);
    msg.value = -13442;

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
    msg.setTimeStamp(0.873393486161);
    msg.setSource(675U);
    msg.setSourceEntity(218U);
    msg.setDestination(49810U);
    msg.setDestinationEntity(52U);
    msg.value = -14613;

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
    msg.setTimeStamp(0.920486191818);
    msg.setSource(57961U);
    msg.setSourceEntity(31U);
    msg.setDestination(26187U);
    msg.setDestinationEntity(158U);
    msg.value = 16243;

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
    msg.setTimeStamp(0.72817901134);
    msg.setSource(32651U);
    msg.setSourceEntity(130U);
    msg.setDestination(57429U);
    msg.setDestinationEntity(20U);
    msg.value = 0.511647331311;

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
    msg.setTimeStamp(0.336528339017);
    msg.setSource(37454U);
    msg.setSourceEntity(43U);
    msg.setDestination(58148U);
    msg.setDestinationEntity(128U);
    msg.value = 0.276061139889;

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
    msg.setTimeStamp(0.0750055178125);
    msg.setSource(8351U);
    msg.setSourceEntity(254U);
    msg.setDestination(35937U);
    msg.setDestinationEntity(177U);
    msg.value = 0.914104006298;

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
    msg.setTimeStamp(0.456505345373);
    msg.setSource(53098U);
    msg.setSourceEntity(100U);
    msg.setDestination(31982U);
    msg.setDestinationEntity(87U);
    msg.value = 0.541339746039;

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
    msg.setTimeStamp(0.245388486649);
    msg.setSource(50664U);
    msg.setSourceEntity(103U);
    msg.setDestination(55673U);
    msg.setDestinationEntity(13U);
    msg.value = 0.345430359053;

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
    msg.setTimeStamp(0.355138731358);
    msg.setSource(62363U);
    msg.setSourceEntity(103U);
    msg.setDestination(23253U);
    msg.setDestinationEntity(147U);
    msg.value = 0.516930422356;

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
    msg.setTimeStamp(0.709609335852);
    msg.setSource(32045U);
    msg.setSourceEntity(151U);
    msg.setDestination(18148U);
    msg.setDestinationEntity(251U);
    msg.validity = 40021U;
    msg.type = 96U;
    msg.utc_year = 8899U;
    msg.utc_month = 123U;
    msg.utc_day = 157U;
    msg.utc_time = 0.07240679837;
    msg.lat = 0.0282075435068;
    msg.lon = 0.725594026695;
    msg.height = 0.627171812509;
    msg.satellites = 232U;
    msg.cog = 0.9883372436;
    msg.sog = 0.219705640147;
    msg.hdop = 0.00514314456812;
    msg.vdop = 0.520032325725;
    msg.hacc = 0.435233097267;
    msg.vacc = 0.84342075721;

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
    msg.setTimeStamp(0.892831553779);
    msg.setSource(4718U);
    msg.setSourceEntity(54U);
    msg.setDestination(59109U);
    msg.setDestinationEntity(244U);
    msg.validity = 56183U;
    msg.type = 221U;
    msg.utc_year = 27914U;
    msg.utc_month = 4U;
    msg.utc_day = 250U;
    msg.utc_time = 0.636710297419;
    msg.lat = 0.593199702212;
    msg.lon = 0.811637739509;
    msg.height = 0.109730173548;
    msg.satellites = 206U;
    msg.cog = 0.324243072858;
    msg.sog = 0.31273690447;
    msg.hdop = 0.612617775894;
    msg.vdop = 0.265322781675;
    msg.hacc = 0.716667936184;
    msg.vacc = 0.542262386463;

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
    msg.setTimeStamp(0.421313036314);
    msg.setSource(7818U);
    msg.setSourceEntity(185U);
    msg.setDestination(23019U);
    msg.setDestinationEntity(190U);
    msg.validity = 59467U;
    msg.type = 71U;
    msg.utc_year = 46607U;
    msg.utc_month = 3U;
    msg.utc_day = 202U;
    msg.utc_time = 0.89703257033;
    msg.lat = 0.947563273639;
    msg.lon = 0.520427974539;
    msg.height = 0.704170841699;
    msg.satellites = 95U;
    msg.cog = 0.886158886759;
    msg.sog = 0.979711902056;
    msg.hdop = 0.924283283682;
    msg.vdop = 0.293629419701;
    msg.hacc = 0.181107127082;
    msg.vacc = 0.509176710961;

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
    msg.setTimeStamp(0.654337601278);
    msg.setSource(2046U);
    msg.setSourceEntity(132U);
    msg.setDestination(33662U);
    msg.setDestinationEntity(27U);
    msg.time = 0.0555441105357;
    msg.phi = 0.0571961972705;
    msg.theta = 0.0864013004098;
    msg.psi = 0.0549700921258;
    msg.psi_magnetic = 0.619616417433;

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
    msg.setTimeStamp(0.171465681982);
    msg.setSource(16411U);
    msg.setSourceEntity(134U);
    msg.setDestination(49511U);
    msg.setDestinationEntity(210U);
    msg.time = 0.860708223677;
    msg.phi = 0.291133682654;
    msg.theta = 0.431263241377;
    msg.psi = 0.121406431543;
    msg.psi_magnetic = 0.308563777365;

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
    msg.setTimeStamp(0.406966616416);
    msg.setSource(54424U);
    msg.setSourceEntity(246U);
    msg.setDestination(34732U);
    msg.setDestinationEntity(156U);
    msg.time = 0.748645106915;
    msg.phi = 0.832176547764;
    msg.theta = 0.676876782851;
    msg.psi = 0.763807136631;
    msg.psi_magnetic = 0.758708648061;

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
    msg.setTimeStamp(0.085099427073);
    msg.setSource(13380U);
    msg.setSourceEntity(200U);
    msg.setDestination(3419U);
    msg.setDestinationEntity(210U);
    msg.time = 0.517501347406;
    msg.x = 0.42726811807;
    msg.y = 0.24802738747;
    msg.z = 0.423325850259;
    msg.timestep = 0.655173649996;

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
    msg.setTimeStamp(0.833482894969);
    msg.setSource(13632U);
    msg.setSourceEntity(158U);
    msg.setDestination(58781U);
    msg.setDestinationEntity(188U);
    msg.time = 0.332999848503;
    msg.x = 0.587292590052;
    msg.y = 0.853245704748;
    msg.z = 0.109187357486;
    msg.timestep = 0.719345472352;

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
    msg.setTimeStamp(0.871165129026);
    msg.setSource(49740U);
    msg.setSourceEntity(141U);
    msg.setDestination(51875U);
    msg.setDestinationEntity(40U);
    msg.time = 0.267543532274;
    msg.x = 0.336748249963;
    msg.y = 0.906165853947;
    msg.z = 0.704215308946;
    msg.timestep = 0.938341802272;

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
    msg.setTimeStamp(0.310034917557);
    msg.setSource(46765U);
    msg.setSourceEntity(162U);
    msg.setDestination(17877U);
    msg.setDestinationEntity(112U);
    msg.time = 0.903585357361;
    msg.x = 0.785357052048;
    msg.y = 0.472520223489;
    msg.z = 0.336055752298;

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
    msg.setTimeStamp(0.938874242698);
    msg.setSource(32887U);
    msg.setSourceEntity(242U);
    msg.setDestination(19385U);
    msg.setDestinationEntity(118U);
    msg.time = 0.724190072364;
    msg.x = 0.238737751203;
    msg.y = 0.821283976964;
    msg.z = 0.946754801754;

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
    msg.setTimeStamp(0.828809217416);
    msg.setSource(9823U);
    msg.setSourceEntity(5U);
    msg.setDestination(17229U);
    msg.setDestinationEntity(245U);
    msg.time = 0.620264936389;
    msg.x = 0.196893979113;
    msg.y = 0.647968811648;
    msg.z = 0.404154766729;

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
    msg.setTimeStamp(0.0111873675736);
    msg.setSource(29169U);
    msg.setSourceEntity(227U);
    msg.setDestination(5658U);
    msg.setDestinationEntity(227U);
    msg.time = 0.401714861091;
    msg.x = 0.845321064643;
    msg.y = 0.671894242305;
    msg.z = 0.62030443627;

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
    msg.setTimeStamp(0.537917097925);
    msg.setSource(57585U);
    msg.setSourceEntity(121U);
    msg.setDestination(38678U);
    msg.setDestinationEntity(120U);
    msg.time = 0.982900212132;
    msg.x = 0.0573185382211;
    msg.y = 0.390206292597;
    msg.z = 0.800979450321;

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
    msg.setTimeStamp(0.885212510479);
    msg.setSource(20693U);
    msg.setSourceEntity(12U);
    msg.setDestination(50970U);
    msg.setDestinationEntity(61U);
    msg.time = 0.402629816467;
    msg.x = 0.504520318694;
    msg.y = 0.19476524614;
    msg.z = 0.417878052883;

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
    msg.setTimeStamp(0.09028028287);
    msg.setSource(37963U);
    msg.setSourceEntity(120U);
    msg.setDestination(54321U);
    msg.setDestinationEntity(146U);
    msg.time = 0.128006521332;
    msg.x = 0.983317593752;
    msg.y = 0.975779633406;
    msg.z = 0.603960201623;

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
    msg.setTimeStamp(0.562892295752);
    msg.setSource(43945U);
    msg.setSourceEntity(252U);
    msg.setDestination(21242U);
    msg.setDestinationEntity(179U);
    msg.time = 0.408838534174;
    msg.x = 0.741139153033;
    msg.y = 0.875471262169;
    msg.z = 0.995782501425;

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
    msg.setTimeStamp(0.589929954426);
    msg.setSource(4997U);
    msg.setSourceEntity(234U);
    msg.setDestination(5461U);
    msg.setDestinationEntity(247U);
    msg.time = 0.0431485297266;
    msg.x = 0.661458008379;
    msg.y = 0.727893841344;
    msg.z = 0.0949115211706;

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
    msg.setTimeStamp(0.470143752575);
    msg.setSource(24694U);
    msg.setSourceEntity(80U);
    msg.setDestination(54030U);
    msg.setDestinationEntity(224U);
    msg.validity = 21U;
    msg.x = 0.623218451122;
    msg.y = 0.350585156017;
    msg.z = 0.0211878175938;

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
    msg.setTimeStamp(0.192997881048);
    msg.setSource(10924U);
    msg.setSourceEntity(12U);
    msg.setDestination(25877U);
    msg.setDestinationEntity(5U);
    msg.validity = 69U;
    msg.x = 0.705626006697;
    msg.y = 0.609085462911;
    msg.z = 0.975932166687;

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
    msg.setTimeStamp(0.809667274604);
    msg.setSource(31657U);
    msg.setSourceEntity(62U);
    msg.setDestination(48533U);
    msg.setDestinationEntity(142U);
    msg.validity = 158U;
    msg.x = 0.219686328294;
    msg.y = 0.945943361804;
    msg.z = 0.831030932245;

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
    msg.setTimeStamp(0.255467041753);
    msg.setSource(11509U);
    msg.setSourceEntity(208U);
    msg.setDestination(91U);
    msg.setDestinationEntity(102U);
    msg.validity = 145U;
    msg.x = 0.369992188565;
    msg.y = 0.294156213962;
    msg.z = 0.961223532173;

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
    msg.setTimeStamp(0.654675276282);
    msg.setSource(21184U);
    msg.setSourceEntity(129U);
    msg.setDestination(34858U);
    msg.setDestinationEntity(116U);
    msg.validity = 23U;
    msg.x = 0.643363111098;
    msg.y = 0.0170414463415;
    msg.z = 0.101372610323;

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
    msg.setTimeStamp(0.999021781267);
    msg.setSource(25456U);
    msg.setSourceEntity(214U);
    msg.setDestination(13392U);
    msg.setDestinationEntity(110U);
    msg.validity = 142U;
    msg.x = 0.537377655483;
    msg.y = 0.834438872444;
    msg.z = 0.038331327495;

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
    msg.setTimeStamp(0.831301782686);
    msg.setSource(61273U);
    msg.setSourceEntity(69U);
    msg.setDestination(38045U);
    msg.setDestinationEntity(176U);
    msg.time = 0.450655242868;
    msg.x = 0.562443091671;
    msg.y = 0.917398400674;
    msg.z = 0.727466274528;

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
    msg.setTimeStamp(0.619195112351);
    msg.setSource(33926U);
    msg.setSourceEntity(179U);
    msg.setDestination(11569U);
    msg.setDestinationEntity(34U);
    msg.time = 0.139960849677;
    msg.x = 0.469453519134;
    msg.y = 0.211510652411;
    msg.z = 0.80369804273;

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
    msg.setTimeStamp(0.115185379979);
    msg.setSource(43050U);
    msg.setSourceEntity(228U);
    msg.setDestination(14280U);
    msg.setDestinationEntity(232U);
    msg.time = 0.397627553785;
    msg.x = 0.147367102113;
    msg.y = 0.293100234965;
    msg.z = 0.832926441974;

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
    msg.setTimeStamp(0.59971710503);
    msg.setSource(25460U);
    msg.setSourceEntity(234U);
    msg.setDestination(46179U);
    msg.setDestinationEntity(59U);
    msg.validity = 31U;
    msg.value = 0.984673917497;

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
    msg.setTimeStamp(0.319114625451);
    msg.setSource(25946U);
    msg.setSourceEntity(251U);
    msg.setDestination(20597U);
    msg.setDestinationEntity(149U);
    msg.validity = 50U;
    msg.value = 0.469141118864;

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
    msg.setTimeStamp(0.786856246947);
    msg.setSource(61427U);
    msg.setSourceEntity(152U);
    msg.setDestination(27479U);
    msg.setDestinationEntity(231U);
    msg.validity = 223U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.881463109076;
    tmp_msg_0.y = 0.883387048592;
    tmp_msg_0.z = 0.896581420277;
    tmp_msg_0.phi = 0.816359136685;
    tmp_msg_0.theta = 0.494796761744;
    tmp_msg_0.psi = 0.0849365426064;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.398176178144;

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
    msg.setTimeStamp(0.331305537469);
    msg.setSource(12232U);
    msg.setSourceEntity(32U);
    msg.setDestination(32678U);
    msg.setDestinationEntity(238U);
    msg.value = 0.807468904622;

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
    msg.setTimeStamp(0.41699919786);
    msg.setSource(39469U);
    msg.setSourceEntity(192U);
    msg.setDestination(8570U);
    msg.setDestinationEntity(237U);
    msg.value = 0.468601160201;

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
    msg.setTimeStamp(0.934617473425);
    msg.setSource(47830U);
    msg.setSourceEntity(20U);
    msg.setDestination(22612U);
    msg.setDestinationEntity(171U);
    msg.value = 0.878917466827;

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
    msg.setTimeStamp(0.131635046006);
    msg.setSource(54051U);
    msg.setSourceEntity(80U);
    msg.setDestination(32311U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0705876427873;

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
    msg.setTimeStamp(0.808321988724);
    msg.setSource(25621U);
    msg.setSourceEntity(86U);
    msg.setDestination(7315U);
    msg.setDestinationEntity(253U);
    msg.value = 0.55731837935;

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
    msg.setTimeStamp(0.235988825458);
    msg.setSource(37068U);
    msg.setSourceEntity(37U);
    msg.setDestination(10032U);
    msg.setDestinationEntity(181U);
    msg.value = 0.223927366286;

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
    msg.setTimeStamp(0.179668594721);
    msg.setSource(56463U);
    msg.setSourceEntity(77U);
    msg.setDestination(40297U);
    msg.setDestinationEntity(242U);
    msg.value = 0.624388324042;

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
    msg.setTimeStamp(0.693991250237);
    msg.setSource(61936U);
    msg.setSourceEntity(61U);
    msg.setDestination(65243U);
    msg.setDestinationEntity(3U);
    msg.value = 0.605542833091;

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
    msg.setTimeStamp(0.782587814417);
    msg.setSource(58652U);
    msg.setSourceEntity(245U);
    msg.setDestination(16981U);
    msg.setDestinationEntity(119U);
    msg.value = 0.542839872179;

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
    msg.setTimeStamp(0.037524909496);
    msg.setSource(40292U);
    msg.setSourceEntity(181U);
    msg.setDestination(35374U);
    msg.setDestinationEntity(245U);
    msg.value = 0.318038433979;

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
    msg.setTimeStamp(0.797904650117);
    msg.setSource(20664U);
    msg.setSourceEntity(229U);
    msg.setDestination(33698U);
    msg.setDestinationEntity(154U);
    msg.value = 0.555656817309;

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
    msg.setTimeStamp(0.679145031613);
    msg.setSource(4619U);
    msg.setSourceEntity(121U);
    msg.setDestination(43068U);
    msg.setDestinationEntity(246U);
    msg.value = 0.862330908061;

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
    msg.setTimeStamp(0.781460873527);
    msg.setSource(1860U);
    msg.setSourceEntity(108U);
    msg.setDestination(52448U);
    msg.setDestinationEntity(79U);
    msg.value = 0.658025384251;

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
    msg.setTimeStamp(0.992165243498);
    msg.setSource(21750U);
    msg.setSourceEntity(219U);
    msg.setDestination(52612U);
    msg.setDestinationEntity(33U);
    msg.value = 0.327912364549;

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
    msg.setTimeStamp(0.0557693798491);
    msg.setSource(28206U);
    msg.setSourceEntity(252U);
    msg.setDestination(63176U);
    msg.setDestinationEntity(122U);
    msg.value = 0.944168005127;

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
    msg.setTimeStamp(0.893351585806);
    msg.setSource(30427U);
    msg.setSourceEntity(70U);
    msg.setDestination(51219U);
    msg.setDestinationEntity(9U);
    msg.value = 0.204668186111;

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
    msg.setTimeStamp(0.437333010532);
    msg.setSource(55764U);
    msg.setSourceEntity(200U);
    msg.setDestination(37440U);
    msg.setDestinationEntity(74U);
    msg.value = 0.866666279406;

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
    msg.setTimeStamp(0.234693160507);
    msg.setSource(29036U);
    msg.setSourceEntity(172U);
    msg.setDestination(48591U);
    msg.setDestinationEntity(38U);
    msg.value = 0.732231851712;

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
    msg.setTimeStamp(0.464577899777);
    msg.setSource(19723U);
    msg.setSourceEntity(39U);
    msg.setDestination(49020U);
    msg.setDestinationEntity(253U);
    msg.value = 0.777666769111;

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
    msg.setTimeStamp(0.640239933814);
    msg.setSource(11287U);
    msg.setSourceEntity(125U);
    msg.setDestination(40815U);
    msg.setDestinationEntity(52U);
    msg.value = 0.178524585055;

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
    msg.setTimeStamp(0.491150359027);
    msg.setSource(4707U);
    msg.setSourceEntity(208U);
    msg.setDestination(11043U);
    msg.setDestinationEntity(97U);
    msg.value = 0.42248341015;

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
    msg.setTimeStamp(0.430927157286);
    msg.setSource(62735U);
    msg.setSourceEntity(58U);
    msg.setDestination(7548U);
    msg.setDestinationEntity(179U);
    msg.value = 0.213773235267;

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
    msg.setTimeStamp(0.697841246683);
    msg.setSource(16493U);
    msg.setSourceEntity(234U);
    msg.setDestination(2874U);
    msg.setDestinationEntity(3U);
    msg.value = 0.75362292886;

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
    msg.setTimeStamp(0.817986975739);
    msg.setSource(12578U);
    msg.setSourceEntity(76U);
    msg.setDestination(10259U);
    msg.setDestinationEntity(57U);
    msg.value = 0.868663087408;

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
    msg.setTimeStamp(0.665487467951);
    msg.setSource(42318U);
    msg.setSourceEntity(102U);
    msg.setDestination(58113U);
    msg.setDestinationEntity(239U);
    msg.direction = 0.0521534392569;
    msg.speed = 0.867518550599;
    msg.turbulence = 0.524540661002;

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
    msg.setTimeStamp(0.65076549762);
    msg.setSource(1121U);
    msg.setSourceEntity(168U);
    msg.setDestination(19280U);
    msg.setDestinationEntity(126U);
    msg.direction = 0.978074841266;
    msg.speed = 0.251385591269;
    msg.turbulence = 0.0192642806377;

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
    msg.setTimeStamp(0.388703254654);
    msg.setSource(54839U);
    msg.setSourceEntity(66U);
    msg.setDestination(50455U);
    msg.setDestinationEntity(63U);
    msg.direction = 0.933066331741;
    msg.speed = 0.170824347478;
    msg.turbulence = 0.551744464198;

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
    msg.setTimeStamp(0.767936621659);
    msg.setSource(41488U);
    msg.setSourceEntity(234U);
    msg.setDestination(4467U);
    msg.setDestinationEntity(246U);
    msg.value = 0.96596008154;

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
    msg.setTimeStamp(0.671970481287);
    msg.setSource(52393U);
    msg.setSourceEntity(70U);
    msg.setDestination(57612U);
    msg.setDestinationEntity(14U);
    msg.value = 0.751179882517;

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
    msg.setTimeStamp(0.526797131075);
    msg.setSource(24726U);
    msg.setSourceEntity(76U);
    msg.setDestination(922U);
    msg.setDestinationEntity(107U);
    msg.value = 0.418738248872;

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
    msg.setTimeStamp(0.589354510148);
    msg.setSource(313U);
    msg.setSourceEntity(223U);
    msg.setDestination(49413U);
    msg.setDestinationEntity(216U);
    msg.value.assign("GCOMJOKLVLDDTLYZOALMCVRLPXIHSHSWPSEXUJPVRMOQBWNUNWVXXULQIVDRJQLZIVPEJTZNFXEDZEBQHBMDIEQHTGKXZBISUUPKAMBTSTLGAIFEPQSKNFTVMUJWMJREVFRSKWAHCAQGTAYFZFBYJKDOFILJZNBICPUBAFXPWBXGNGYNWZBXGNQVVWZSNDRHUPAHEDYUZLAJTEEOHMTWCCYKRWDHCFOTSMQQMRIF");

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
    msg.setTimeStamp(0.210257295991);
    msg.setSource(45892U);
    msg.setSourceEntity(71U);
    msg.setDestination(14263U);
    msg.setDestinationEntity(238U);
    msg.value.assign("XVMCAHLCDXDECWYOCHLRGJLGVTVFWDYISSLLMYIOUOVEYFNMWQCUVHGWMDOZQETNLKBQVKWKUPIUZZKDAJCYCFRZDBRAAWPKAUJBOXZBRPNSQAOFIMQGSSXRIKWQBEDURIHAXTNBQUVNFINHIZXZWAHTJSNJSTFLONLJTOQSIYTHYRYKJL");

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
    msg.setTimeStamp(0.127547672437);
    msg.setSource(11165U);
    msg.setSourceEntity(59U);
    msg.setDestination(11909U);
    msg.setDestinationEntity(125U);
    msg.value.assign("KXISAXGGYZWUDJJ");

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
    msg.setTimeStamp(0.0620221241951);
    msg.setSource(15080U);
    msg.setSourceEntity(218U);
    msg.setDestination(53538U);
    msg.setDestinationEntity(150U);
    const char tmp_msg_0[] = {90, 45, -22, 76, -118, -81, -98, 54, -33, 41, -7, 18, -64, -80, -53, 90, -55, -1, 68, 29, 116, -121, 26, -37, 77, 108, -87, -28, -55, -43, -23, 20, 92, 93, -112, 73, 76, -18, -15, -12, -62, 78, -99, 30, -45, -70, 103, -17, -7, 89, 72, 34, -11, 95, 70, -52, -109, -30, -123, 39, 84, -112, 24, -123, -124, 99, 112, -62, 48, 41, 87, 73, -25, 69, -15, 67, 50, -41, -50, 47, -2, 122, 39, 25, 113, 18, -101, 2, 20, -96, -4, 79, -103, 26, -37, -19, 29, 50, 109, -123, 33, -33, -58, -42, -47, -55, -46, -97, -101, -117, -16, -33, 27, -61, -8, -61, 101, 82, 64, -91, 76, -70, -84, 42, -40, 38, -35, 28, 78, -31, 27, -36, -48, 78, 126, -17, 40, 58, -40, -98, -122, -5, -47, -65, -120, -51, 61, 113, -79, -22, 9, -70, -38, -56, -88, -69, -75, -112, 85, -110, 53, -11, -7, 16, -109, 100, 51, -80, -43, 14, 14, 75, -10, -118, -49, -126, 13, -91, 15, 31, 6, 45, -93, 52, 0, -101, -25, 80, -38, -9, -13, 75, -35, 76, 3, -127, 102, 114, -13, -26, -102, 79, 112, -102, -69, 90, -116, -74, 37, 5, -64, 44, 19, -114, 32, -64, -28, 81, -27, -64, -31, 41, 68, 110};
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
    msg.setTimeStamp(0.99101310666);
    msg.setSource(45436U);
    msg.setSourceEntity(212U);
    msg.setDestination(48064U);
    msg.setDestinationEntity(168U);
    const char tmp_msg_0[] = {-107, 12, -98, 77, -21, 5, -76, 73, 92, -48, -30, 64, -68, 28, 96, 47, -4, -54, -50, 104, 41, 80, -118, -23, -6, -9, 63, 61, 30, -58, 95, -126, -12, -58, 70, -31, 79, -116, -29, -13, 43, -66, 109, -32, 14, -74, -101, -32, -74, 60, -59, -18, 69, 33, 90, -90, 28, -111, 65, -56, 96, 17, -21, 103, -75, -83, -7, 88, -68, 18, -44, 83, -57, -60, -46, 10, 37, -70, 7, -3, 61, -77, -121, 40, 68, -120, 17, 113, 115, 89, 43, -93, 80, -65, -127, -59, -68, 35, 76, 48, -63, -104, 12, -60, 45, -67, -64, 94, 123, 43, -72, -89, -25, 40, -80, 61, -123, 104, -106, 106, -31, -27, -117, 30, 81, -80, 6, 113, 61, -4, -110, 41, 58, 3, -29, 76, -126, -1, -89, 63, -74, -20, -56, 93, -8, 76, 47, 53, 59, 24, 120, 35, -28, -118, 79, 94, -88, -4, -32, 35, 35, 95, 19, -39, 4, 52, -1, 60, 76, 116, 33, 92, 47, 116, 64, -105, 86, 95, -123, -47, -106, -39, -39, 60, -46, 3, 28, 37, 114, 97, -26, -18, -41, -100, 125, -101, -98};
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
    msg.setTimeStamp(0.697305784165);
    msg.setSource(16874U);
    msg.setSourceEntity(78U);
    msg.setDestination(51505U);
    msg.setDestinationEntity(139U);
    const char tmp_msg_0[] = {-54, -66, -80, -45, 93, -114, 98, -93, 111, -69, -104, 99, 107, -55, -6, 116, -97, -101, -88, 0, 76, -74, 83, 76, -35, 118, 82, 73, -48, 76, -24, -33, 24, 44, 110, -1, -66, 67, 65, 70, -10, -105, -10, 1, -4, 110, 24, -104, 103, -26, -64, -112, -124, -35, -23, -85, -104, 47, 92, 88, -1, 74, 102, 26, 24, -11, -62, -114, -12, -98, -74, 41, 11, 112, -25, 28, 62, -24, -55, -77, -44, -95, 13, 115, -52, 47, 7, -110, -55, -84};
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
    msg.setTimeStamp(0.782341832008);
    msg.setSource(29678U);
    msg.setSourceEntity(104U);
    msg.setDestination(24530U);
    msg.setDestinationEntity(214U);
    msg.type = 132U;
    msg.frequency = 663101619U;
    msg.min_range = 42794U;
    msg.max_range = 48673U;
    msg.bits_per_point = 211U;
    msg.scale_factor = 0.769753694703;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.381525402336;
    tmp_msg_0.beam_height = 0.430081378668;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-66, -6, 34, 17, 37, -64, -89, 79, -82, 88, -26, 12, -7, -67, -105, 71, 85, 30, 72, 8, 63, 15, 96, -114, 122, 38, -11, -126, 21, 5, -125, -122, -89, 27, 48, 90, -124, 74, 10, -93, 48, -108, -38, 41, -37, -78, 124, -119, -78, -64, 23, 99, -112, 44, 83, 37, 6, -33, -63, 21, 82, -119, -19, 87, 17, 28, 117, -80, -63, -111, 15, 74, -48, 107, 10, 28, -19, -126, 63, -99, 100, -82, 73, 61, -66, 108, -50, 18, -122, -122, -40, -38, -6, 4, 23, 115, 52, -86, -122, 80, -104, 16, 117, 126, 99, -75, 118, 77, -110, 104, 34, -15, 41, 95, -59, 82, 30, -21, 18, -86, -85, 103, 49, -65, 117, -40, 97, 33, 27, -34, -96, -37, -36, -79, 51, -109, -44, -83, -7, 49, 57, 39, 109, 6, -65, -110, -56, -46, -125, -40, 64, -7, 27, -62, -10, 115, -21, 30, -34, -108, -25, 8, 106, -114, -126, -19, -40, 4};
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
    msg.setTimeStamp(0.782745178283);
    msg.setSource(63436U);
    msg.setSourceEntity(251U);
    msg.setDestination(58814U);
    msg.setDestinationEntity(130U);
    msg.type = 74U;
    msg.frequency = 44863810U;
    msg.min_range = 32618U;
    msg.max_range = 53668U;
    msg.bits_per_point = 36U;
    msg.scale_factor = 0.984098415366;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.598176702181;
    tmp_msg_0.beam_height = 0.295309616835;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-11, -88, 40, -125, 66, -120, -19, 105, 67, -81, -127, 34, -62, -92, -91, -7, -16, 37, -3, 71, -117, -41, -70, 53, 29, -36, 68, 23, 21, -19, 81, -121, -52, 58, 13, 66, 126, -17, -51, -101, 58, 68, 52, 119, 58, -44, 121, -89, -48, 19, 17, 45, -121, -62, 32, 70, 44, 91, 111, 0, -92, 96};
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
    msg.setTimeStamp(0.0788499718095);
    msg.setSource(22939U);
    msg.setSourceEntity(98U);
    msg.setDestination(32200U);
    msg.setDestinationEntity(34U);
    msg.type = 231U;
    msg.frequency = 2032936640U;
    msg.min_range = 5813U;
    msg.max_range = 18237U;
    msg.bits_per_point = 237U;
    msg.scale_factor = 0.816794522247;
    const char tmp_msg_0[] = {126, -75, 125, -39, -79, 88, 38, 103, 8, -25, 40, -53, -75, -49, 50, -107, 122, 100, -45, -52, 62, 17, 28, 124, -45, 0, -37, 86, 63, 88, -20, 57, -85, 116, -64, 10, 26, -28, -115, -10, -89, 76, 61, -37, -15, -11, -18, 108, 96, -92, 111, 80, 121, -31, 101, 56, 1, 112, 15, -114, 66, 117, 118, -67, -50, -106, -11, 22, 46, 46, -124, 67, 2, 67, 125, -90, 106, -65, -64, -91, 59, 68, 99, 124, -27, 40, 25, -103, 41, 69, 53, -60, -89, 19, -21, -111, -105, 93, 100, -91, -30, -30, 4, 63, 15, 100, 8, 22, 13, -81, 100, -36, -7, 2, 124, -103, -39, -21, 76, -8, -38, 10, -56, -68, 45, -60, 108, -36, -78, -35, 95, 5, -59, 19, 56, -20, -72, 93, -84, -31, -115, -93, 12, -75, -30, -39, -96, -51, 105, -82, 59, -107, 26, -47, -86, 96, 89, -46, -45, -2, 10, 7, -18, 30, -97, 93, -43, 59, -97, 100, -58, -94, 92, -106, -48, -64, 126, -71, -1, 106, -47, 18, 125, 73, -4, 116, -117, 123, -94, 106, 51, 103, -92, 81, 6, 81, -8, 62, -38, 60, -67, -64, -123, 81, 117, 107, -79, 66};
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
    msg.setTimeStamp(0.804361570626);
    msg.setSource(27927U);
    msg.setSourceEntity(215U);
    msg.setDestination(59635U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.86398250018);
    msg.setSource(26102U);
    msg.setSourceEntity(138U);
    msg.setDestination(4055U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.401643757073);
    msg.setSource(3911U);
    msg.setSourceEntity(222U);
    msg.setDestination(47495U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.226931474195);
    msg.setSource(2394U);
    msg.setSourceEntity(19U);
    msg.setDestination(36009U);
    msg.setDestinationEntity(122U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.989891352842);
    msg.setSource(5975U);
    msg.setSourceEntity(220U);
    msg.setDestination(58148U);
    msg.setDestinationEntity(41U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.563578502154);
    msg.setSource(14762U);
    msg.setSourceEntity(68U);
    msg.setDestination(35613U);
    msg.setDestinationEntity(94U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.493015403568);
    msg.setSource(62284U);
    msg.setSourceEntity(194U);
    msg.setDestination(57009U);
    msg.setDestinationEntity(225U);
    msg.value = 0.18466046558;
    msg.confidence = 0.455054804664;
    msg.opmodes.assign("WGOWSATLLHXJMEFMLJYPIRVOMLEXFNDQFKZDUIIZAJQLIMBG");

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
    msg.setTimeStamp(0.492412431165);
    msg.setSource(10859U);
    msg.setSourceEntity(148U);
    msg.setDestination(56271U);
    msg.setDestinationEntity(97U);
    msg.value = 0.900384517106;
    msg.confidence = 0.740466945691;
    msg.opmodes.assign("HREMVUDILIERFSXKUREPAFXKYFWDEODHAMOSYWYDAAHBMCTYCOXDOMSOBIFBKGGSNKSAIAMXFIMNQXC");

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
    msg.setTimeStamp(0.129965411931);
    msg.setSource(29865U);
    msg.setSourceEntity(192U);
    msg.setDestination(4793U);
    msg.setDestinationEntity(102U);
    msg.value = 0.849452099567;
    msg.confidence = 0.0902112393175;
    msg.opmodes.assign("WPGFSKRFSFIOGOYWSTUYAQAVDZQNFQWHEOBQYRVCKCIRROIPMZCBXLVLOXANHFOZAZEYCTJNMUYNURTBVJXDXSFCGZWFOSVAXKTPBJUXDRLLACZHUNNYTLIMDMXI");

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
    msg.setTimeStamp(0.467036652046);
    msg.setSource(41484U);
    msg.setSourceEntity(128U);
    msg.setDestination(7244U);
    msg.setDestinationEntity(104U);
    msg.itow = 4049941712U;
    msg.lat = 0.184318040004;
    msg.lon = 0.977169467771;
    msg.height_ell = 0.430501932098;
    msg.height_sea = 0.0653417845797;
    msg.hacc = 0.802789819226;
    msg.vacc = 0.362234830999;
    msg.vel_n = 0.26809998189;
    msg.vel_e = 0.329115059094;
    msg.vel_d = 0.572113502535;
    msg.speed = 0.366330718149;
    msg.gspeed = 0.526352269641;
    msg.heading = 0.255691697981;
    msg.sacc = 0.504734103196;
    msg.cacc = 0.771545079822;

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
    msg.setTimeStamp(0.616309334565);
    msg.setSource(33930U);
    msg.setSourceEntity(179U);
    msg.setDestination(60515U);
    msg.setDestinationEntity(32U);
    msg.itow = 1787906442U;
    msg.lat = 0.750633914749;
    msg.lon = 0.933502948008;
    msg.height_ell = 0.932564523517;
    msg.height_sea = 0.0981410125052;
    msg.hacc = 0.679172805155;
    msg.vacc = 0.979836871933;
    msg.vel_n = 0.549071816637;
    msg.vel_e = 0.785181443358;
    msg.vel_d = 0.177928653745;
    msg.speed = 0.674975068357;
    msg.gspeed = 0.522110992706;
    msg.heading = 0.508589522358;
    msg.sacc = 0.379443063249;
    msg.cacc = 0.919710668174;

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
    msg.setTimeStamp(0.864695901302);
    msg.setSource(17513U);
    msg.setSourceEntity(248U);
    msg.setDestination(38337U);
    msg.setDestinationEntity(28U);
    msg.itow = 2476527625U;
    msg.lat = 0.357310705673;
    msg.lon = 0.170166137554;
    msg.height_ell = 0.749691958659;
    msg.height_sea = 0.379114392978;
    msg.hacc = 0.593793619895;
    msg.vacc = 0.35119551105;
    msg.vel_n = 0.481758000344;
    msg.vel_e = 0.281980833056;
    msg.vel_d = 0.72518075626;
    msg.speed = 0.126312851021;
    msg.gspeed = 0.710795778439;
    msg.heading = 0.190121297751;
    msg.sacc = 0.290467433823;
    msg.cacc = 0.0967667061529;

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
    msg.setTimeStamp(0.611907191379);
    msg.setSource(15348U);
    msg.setSourceEntity(10U);
    msg.setDestination(1000U);
    msg.setDestinationEntity(38U);
    msg.id = 202U;
    msg.value = 0.385586131962;

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
    msg.setTimeStamp(0.656139048367);
    msg.setSource(65399U);
    msg.setSourceEntity(232U);
    msg.setDestination(61617U);
    msg.setDestinationEntity(124U);
    msg.id = 137U;
    msg.value = 0.693336349881;

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
    msg.setTimeStamp(0.490678667362);
    msg.setSource(46666U);
    msg.setSourceEntity(83U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(216U);
    msg.id = 209U;
    msg.value = 0.69574848041;

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
    msg.setTimeStamp(0.357650743749);
    msg.setSource(13603U);
    msg.setSourceEntity(217U);
    msg.setDestination(17102U);
    msg.setDestinationEntity(116U);
    msg.x = 0.904169786801;
    msg.y = 0.529872624125;
    msg.z = 0.834108186368;
    msg.phi = 0.566071669308;
    msg.theta = 0.686926089229;
    msg.psi = 0.828952259222;

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
    msg.setTimeStamp(0.853121801573);
    msg.setSource(47099U);
    msg.setSourceEntity(24U);
    msg.setDestination(34181U);
    msg.setDestinationEntity(254U);
    msg.x = 0.127127878329;
    msg.y = 0.604768055952;
    msg.z = 0.186840592571;
    msg.phi = 0.0591666094654;
    msg.theta = 0.620669226315;
    msg.psi = 0.925307531477;

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
    msg.setTimeStamp(0.1134874291);
    msg.setSource(8220U);
    msg.setSourceEntity(176U);
    msg.setDestination(28797U);
    msg.setDestinationEntity(254U);
    msg.x = 0.886311684771;
    msg.y = 0.726402232029;
    msg.z = 0.594772583111;
    msg.phi = 0.0450051831336;
    msg.theta = 0.598044158915;
    msg.psi = 0.0946480814656;

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
    msg.setTimeStamp(0.259395040448);
    msg.setSource(22129U);
    msg.setSourceEntity(200U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(41U);
    msg.beam_width = 0.150668968387;
    msg.beam_height = 0.150976768617;

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
    msg.setTimeStamp(0.843453575252);
    msg.setSource(19956U);
    msg.setSourceEntity(143U);
    msg.setDestination(23398U);
    msg.setDestinationEntity(203U);
    msg.beam_width = 0.163869665387;
    msg.beam_height = 0.364491887428;

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
    msg.setTimeStamp(0.573719561012);
    msg.setSource(36631U);
    msg.setSourceEntity(43U);
    msg.setDestination(24280U);
    msg.setDestinationEntity(233U);
    msg.beam_width = 0.111013688629;
    msg.beam_height = 0.467281546583;

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
    msg.setTimeStamp(0.694948652875);
    msg.setSource(23218U);
    msg.setSourceEntity(27U);
    msg.setDestination(11557U);
    msg.setDestinationEntity(16U);
    msg.sane = 252U;

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
    msg.setTimeStamp(0.134060481772);
    msg.setSource(15854U);
    msg.setSourceEntity(127U);
    msg.setDestination(19591U);
    msg.setDestinationEntity(89U);
    msg.sane = 177U;

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
    msg.setTimeStamp(0.215606497892);
    msg.setSource(3730U);
    msg.setSourceEntity(215U);
    msg.setDestination(48103U);
    msg.setDestinationEntity(246U);
    msg.sane = 192U;

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
    msg.setTimeStamp(0.803195561357);
    msg.setSource(2785U);
    msg.setSourceEntity(183U);
    msg.setDestination(1306U);
    msg.setDestinationEntity(144U);
    msg.value = 0.277248539694;

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
    msg.setTimeStamp(0.0983391599784);
    msg.setSource(53168U);
    msg.setSourceEntity(165U);
    msg.setDestination(51088U);
    msg.setDestinationEntity(156U);
    msg.value = 0.0079680744976;

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
    msg.setTimeStamp(0.642770466405);
    msg.setSource(27184U);
    msg.setSourceEntity(103U);
    msg.setDestination(40217U);
    msg.setDestinationEntity(0U);
    msg.value = 0.165410884565;

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
    msg.setTimeStamp(0.807806904022);
    msg.setSource(37478U);
    msg.setSourceEntity(27U);
    msg.setDestination(60545U);
    msg.setDestinationEntity(5U);
    msg.value = 0.515885998833;

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
    msg.setTimeStamp(0.198612129579);
    msg.setSource(48600U);
    msg.setSourceEntity(5U);
    msg.setDestination(30104U);
    msg.setDestinationEntity(238U);
    msg.value = 0.37533262646;

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
    msg.setTimeStamp(0.54872617079);
    msg.setSource(55875U);
    msg.setSourceEntity(204U);
    msg.setDestination(17251U);
    msg.setDestinationEntity(92U);
    msg.value = 0.478669719909;

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
    msg.setTimeStamp(0.373296297996);
    msg.setSource(49100U);
    msg.setSourceEntity(20U);
    msg.setDestination(35377U);
    msg.setDestinationEntity(27U);
    msg.value = 0.643088358444;

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
    msg.setTimeStamp(0.984934714472);
    msg.setSource(25709U);
    msg.setSourceEntity(242U);
    msg.setDestination(57053U);
    msg.setDestinationEntity(70U);
    msg.value = 0.276424312092;

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
    msg.setTimeStamp(0.640840270514);
    msg.setSource(58653U);
    msg.setSourceEntity(97U);
    msg.setDestination(51857U);
    msg.setDestinationEntity(245U);
    msg.value = 0.1408641075;

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
    msg.setTimeStamp(0.933614225319);
    msg.setSource(5100U);
    msg.setSourceEntity(16U);
    msg.setDestination(60248U);
    msg.setDestinationEntity(84U);
    msg.value = 0.359245454159;

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
    msg.setTimeStamp(0.922577108376);
    msg.setSource(4063U);
    msg.setSourceEntity(71U);
    msg.setDestination(25096U);
    msg.setDestinationEntity(253U);
    msg.value = 0.270092016353;

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
    msg.setTimeStamp(0.300825104026);
    msg.setSource(22831U);
    msg.setSourceEntity(213U);
    msg.setDestination(56269U);
    msg.setDestinationEntity(117U);
    msg.value = 0.622970266595;

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
    msg.setTimeStamp(0.756461478045);
    msg.setSource(33177U);
    msg.setSourceEntity(153U);
    msg.setDestination(56441U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0664948043063;

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
    msg.setTimeStamp(0.683881965474);
    msg.setSource(51151U);
    msg.setSourceEntity(11U);
    msg.setDestination(23462U);
    msg.setDestinationEntity(162U);
    msg.value = 0.472185930447;

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
    msg.setTimeStamp(0.929456789274);
    msg.setSource(38113U);
    msg.setSourceEntity(178U);
    msg.setDestination(41641U);
    msg.setDestinationEntity(115U);
    msg.value = 0.59095265451;

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
    msg.setTimeStamp(0.651066550555);
    msg.setSource(21841U);
    msg.setSourceEntity(239U);
    msg.setDestination(8319U);
    msg.setDestinationEntity(159U);
    msg.value = 0.334837529584;

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
    msg.setTimeStamp(0.031527325531);
    msg.setSource(26770U);
    msg.setSourceEntity(48U);
    msg.setDestination(54376U);
    msg.setDestinationEntity(98U);
    msg.value = 0.927121682991;

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
    msg.setTimeStamp(0.468115513594);
    msg.setSource(26789U);
    msg.setSourceEntity(21U);
    msg.setDestination(7351U);
    msg.setDestinationEntity(84U);
    msg.value = 0.101766457448;

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
    msg.setTimeStamp(0.816492086058);
    msg.setSource(37164U);
    msg.setSourceEntity(102U);
    msg.setDestination(6002U);
    msg.setDestinationEntity(130U);
    msg.value = 0.411655344857;

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
    msg.setTimeStamp(0.474965203259);
    msg.setSource(48219U);
    msg.setSourceEntity(209U);
    msg.setDestination(25389U);
    msg.setDestinationEntity(109U);
    msg.value = 0.292009646005;

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
    msg.setTimeStamp(0.47790476497);
    msg.setSource(38423U);
    msg.setSourceEntity(203U);
    msg.setDestination(1244U);
    msg.setDestinationEntity(242U);
    msg.value = 0.497515634244;

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
    msg.setTimeStamp(0.426164581642);
    msg.setSource(29019U);
    msg.setSourceEntity(29U);
    msg.setDestination(59687U);
    msg.setDestinationEntity(239U);
    msg.value = 0.159865258028;

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
    msg.setTimeStamp(0.0307401268064);
    msg.setSource(42050U);
    msg.setSourceEntity(91U);
    msg.setDestination(4525U);
    msg.setDestinationEntity(168U);
    msg.value = 0.641277395162;

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
    msg.setTimeStamp(0.903573121942);
    msg.setSource(35915U);
    msg.setSourceEntity(130U);
    msg.setDestination(24407U);
    msg.setDestinationEntity(31U);
    msg.value = 0.0655337832276;

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
    msg.setTimeStamp(0.635963481207);
    msg.setSource(29573U);
    msg.setSourceEntity(240U);
    msg.setDestination(47209U);
    msg.setDestinationEntity(45U);
    msg.validity = 25951U;
    msg.type = 187U;
    msg.tow = 2938211913U;
    msg.base_lat = 0.674284502391;
    msg.base_lon = 0.222471949711;
    msg.base_height = 0.839046832347;
    msg.n = 0.213182094947;
    msg.e = 0.23957712631;
    msg.d = 0.945507763116;
    msg.v_n = 0.963292833108;
    msg.v_e = 0.574625693252;
    msg.v_d = 0.361278773817;
    msg.satellites = 201U;
    msg.iar_hyp = 9735U;
    msg.iar_ratio = 0.635558142392;

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
    msg.setTimeStamp(0.630904217754);
    msg.setSource(65502U);
    msg.setSourceEntity(193U);
    msg.setDestination(60962U);
    msg.setDestinationEntity(13U);
    msg.validity = 34216U;
    msg.type = 78U;
    msg.tow = 2184631683U;
    msg.base_lat = 0.145865793161;
    msg.base_lon = 0.213579057573;
    msg.base_height = 0.00573838495692;
    msg.n = 0.553579897559;
    msg.e = 0.989755093433;
    msg.d = 0.403327987815;
    msg.v_n = 0.513058699781;
    msg.v_e = 0.94140023654;
    msg.v_d = 0.307300045786;
    msg.satellites = 169U;
    msg.iar_hyp = 18088U;
    msg.iar_ratio = 0.382086868997;

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
    msg.setTimeStamp(0.495661272466);
    msg.setSource(64479U);
    msg.setSourceEntity(110U);
    msg.setDestination(53302U);
    msg.setDestinationEntity(250U);
    msg.validity = 29878U;
    msg.type = 6U;
    msg.tow = 1285052882U;
    msg.base_lat = 0.671795294596;
    msg.base_lon = 0.383203709673;
    msg.base_height = 0.403814227162;
    msg.n = 0.939427901533;
    msg.e = 0.00485801914927;
    msg.d = 0.696843676156;
    msg.v_n = 0.477151695437;
    msg.v_e = 0.530900313035;
    msg.v_d = 0.203505445422;
    msg.satellites = 40U;
    msg.iar_hyp = 41951U;
    msg.iar_ratio = 0.667285681352;

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
    msg.setTimeStamp(0.380388245812);
    msg.setSource(1784U);
    msg.setSourceEntity(132U);
    msg.setDestination(37331U);
    msg.setDestinationEntity(87U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.403042936882;
    tmp_msg_0.lon = 0.204714554268;
    tmp_msg_0.height = 0.902678584141;
    tmp_msg_0.x = 0.638288634733;
    tmp_msg_0.y = 0.281946236364;
    tmp_msg_0.z = 0.857705559355;
    tmp_msg_0.phi = 0.98374020558;
    tmp_msg_0.theta = 0.649271003888;
    tmp_msg_0.psi = 0.448234643702;
    tmp_msg_0.u = 0.00556800892553;
    tmp_msg_0.v = 0.188845603533;
    tmp_msg_0.w = 0.61005188298;
    tmp_msg_0.vx = 0.774640847164;
    tmp_msg_0.vy = 0.605772196216;
    tmp_msg_0.vz = 0.895110673069;
    tmp_msg_0.p = 0.894268904374;
    tmp_msg_0.q = 0.293952782349;
    tmp_msg_0.r = 0.241316986766;
    tmp_msg_0.depth = 0.41310264087;
    tmp_msg_0.alt = 0.594228743938;
    msg.state.set(tmp_msg_0);
    msg.type = 33U;

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
    msg.setTimeStamp(0.22470989225);
    msg.setSource(51561U);
    msg.setSourceEntity(6U);
    msg.setDestination(58747U);
    msg.setDestinationEntity(207U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.987903794603;
    tmp_msg_0.lon = 0.564945797855;
    tmp_msg_0.height = 0.853015389401;
    tmp_msg_0.x = 0.366069707789;
    tmp_msg_0.y = 0.567081856976;
    tmp_msg_0.z = 0.10769062684;
    tmp_msg_0.phi = 0.167516904891;
    tmp_msg_0.theta = 0.0985800844324;
    tmp_msg_0.psi = 0.993978745016;
    tmp_msg_0.u = 0.823555963488;
    tmp_msg_0.v = 0.307460398585;
    tmp_msg_0.w = 0.515062866135;
    tmp_msg_0.vx = 0.556461295075;
    tmp_msg_0.vy = 0.892768430423;
    tmp_msg_0.vz = 0.597570795842;
    tmp_msg_0.p = 0.163750254994;
    tmp_msg_0.q = 0.146435713173;
    tmp_msg_0.r = 0.449088500505;
    tmp_msg_0.depth = 0.651816374245;
    tmp_msg_0.alt = 0.638771868285;
    msg.state.set(tmp_msg_0);
    msg.type = 65U;

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
    msg.setTimeStamp(0.140530731999);
    msg.setSource(49180U);
    msg.setSourceEntity(178U);
    msg.setDestination(28206U);
    msg.setDestinationEntity(213U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.302047124414;
    tmp_msg_0.lon = 0.660671289787;
    tmp_msg_0.height = 0.594386748856;
    tmp_msg_0.x = 0.141829212355;
    tmp_msg_0.y = 0.886952069738;
    tmp_msg_0.z = 0.722895969128;
    tmp_msg_0.phi = 0.246694586161;
    tmp_msg_0.theta = 0.321834482039;
    tmp_msg_0.psi = 0.967057765711;
    tmp_msg_0.u = 0.959733654668;
    tmp_msg_0.v = 0.669797535394;
    tmp_msg_0.w = 0.353957675357;
    tmp_msg_0.vx = 0.703730313766;
    tmp_msg_0.vy = 0.128804508277;
    tmp_msg_0.vz = 0.263937415537;
    tmp_msg_0.p = 0.365702763671;
    tmp_msg_0.q = 0.0880111747079;
    tmp_msg_0.r = 0.704970195967;
    tmp_msg_0.depth = 0.883929616073;
    tmp_msg_0.alt = 0.171217302939;
    msg.state.set(tmp_msg_0);
    msg.type = 48U;

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
    msg.setTimeStamp(0.183413075406);
    msg.setSource(50991U);
    msg.setSourceEntity(104U);
    msg.setDestination(38851U);
    msg.setDestinationEntity(92U);
    msg.value = 0.331968855342;

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
    msg.setTimeStamp(0.881538475224);
    msg.setSource(13020U);
    msg.setSourceEntity(80U);
    msg.setDestination(57900U);
    msg.setDestinationEntity(247U);
    msg.value = 0.52818259474;

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
    msg.setTimeStamp(0.260909668916);
    msg.setSource(24952U);
    msg.setSourceEntity(205U);
    msg.setDestination(61716U);
    msg.setDestinationEntity(60U);
    msg.value = 0.928468309107;

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
    msg.setTimeStamp(0.111979333409);
    msg.setSource(2561U);
    msg.setSourceEntity(56U);
    msg.setDestination(7754U);
    msg.setDestinationEntity(102U);
    msg.value = 0.813918782873;

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
    msg.setTimeStamp(0.936618006284);
    msg.setSource(33430U);
    msg.setSourceEntity(144U);
    msg.setDestination(23337U);
    msg.setDestinationEntity(134U);
    msg.value = 0.364919325358;

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
    msg.setTimeStamp(0.243272870878);
    msg.setSource(39051U);
    msg.setSourceEntity(19U);
    msg.setDestination(22667U);
    msg.setDestinationEntity(130U);
    msg.value = 0.515993563085;

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
    msg.setTimeStamp(0.936007967586);
    msg.setSource(52512U);
    msg.setSourceEntity(15U);
    msg.setDestination(3705U);
    msg.setDestinationEntity(228U);
    msg.value = 0.623484990166;

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
    msg.setTimeStamp(0.952382563077);
    msg.setSource(824U);
    msg.setSourceEntity(165U);
    msg.setDestination(27338U);
    msg.setDestinationEntity(137U);
    msg.value = 0.252060658564;

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
    msg.setTimeStamp(0.170040572205);
    msg.setSource(8632U);
    msg.setSourceEntity(186U);
    msg.setDestination(10521U);
    msg.setDestinationEntity(252U);
    msg.value = 0.296676039562;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.16378423172);
    msg.setSource(28486U);
    msg.setSourceEntity(206U);
    msg.setDestination(6824U);
    msg.setDestinationEntity(212U);
    msg.id = 203U;
    msg.zoom = 207U;
    msg.action = 100U;

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
    msg.setTimeStamp(0.521442429852);
    msg.setSource(4097U);
    msg.setSourceEntity(86U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(66U);
    msg.id = 205U;
    msg.zoom = 128U;
    msg.action = 122U;

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
    msg.setTimeStamp(0.53267984074);
    msg.setSource(51988U);
    msg.setSourceEntity(203U);
    msg.setDestination(48855U);
    msg.setDestinationEntity(181U);
    msg.id = 207U;
    msg.zoom = 179U;
    msg.action = 34U;

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
    msg.setTimeStamp(0.98857923091);
    msg.setSource(59737U);
    msg.setSourceEntity(244U);
    msg.setDestination(34163U);
    msg.setDestinationEntity(166U);
    msg.id = 29U;
    msg.value = 0.610993170223;

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
    msg.setTimeStamp(0.498232964752);
    msg.setSource(37597U);
    msg.setSourceEntity(15U);
    msg.setDestination(29723U);
    msg.setDestinationEntity(46U);
    msg.id = 134U;
    msg.value = 0.338652023132;

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
    msg.setTimeStamp(0.386606371929);
    msg.setSource(34975U);
    msg.setSourceEntity(181U);
    msg.setDestination(4600U);
    msg.setDestinationEntity(188U);
    msg.id = 207U;
    msg.value = 0.0282396602504;

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
    msg.setTimeStamp(0.200313592985);
    msg.setSource(55838U);
    msg.setSourceEntity(81U);
    msg.setDestination(52144U);
    msg.setDestinationEntity(118U);
    msg.id = 27U;
    msg.value = 0.936605145234;

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
    msg.setTimeStamp(0.802149008163);
    msg.setSource(6530U);
    msg.setSourceEntity(14U);
    msg.setDestination(61663U);
    msg.setDestinationEntity(101U);
    msg.id = 63U;
    msg.value = 0.707735207808;

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
    msg.setTimeStamp(0.921586391577);
    msg.setSource(61560U);
    msg.setSourceEntity(77U);
    msg.setDestination(1150U);
    msg.setDestinationEntity(250U);
    msg.id = 165U;
    msg.value = 0.00335851495381;

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
    msg.setTimeStamp(0.8579343729);
    msg.setSource(24363U);
    msg.setSourceEntity(171U);
    msg.setDestination(57363U);
    msg.setDestinationEntity(92U);
    msg.id = 203U;
    msg.angle = 0.388806327165;

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
    msg.setTimeStamp(0.281956316639);
    msg.setSource(58405U);
    msg.setSourceEntity(92U);
    msg.setDestination(62108U);
    msg.setDestinationEntity(139U);
    msg.id = 242U;
    msg.angle = 0.110191440645;

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
    msg.setTimeStamp(0.990817101465);
    msg.setSource(17406U);
    msg.setSourceEntity(195U);
    msg.setDestination(7967U);
    msg.setDestinationEntity(162U);
    msg.id = 231U;
    msg.angle = 0.0735574420907;

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
    msg.setTimeStamp(0.117089391358);
    msg.setSource(547U);
    msg.setSourceEntity(33U);
    msg.setDestination(49223U);
    msg.setDestinationEntity(122U);
    msg.op = 180U;
    msg.actions.assign("OHUMBXOBQHWNIGXQDEGUARHKIZLMPQVNZIPYJVYKCHQDCAUYGZAZJGCCIWEHLXBLEFYQQHWTHDXYAFEBAKYAUPDIRVFDZUSAUSNOMKFWXRQSJQMSBKSSDKEWWBFVYOYIMWXSANXILYDJFCTXRJHGWSUTFTMVJLTFRZABOGJLVCPTAYJCDHPNWQERVNBTERGMEPSIPKROJDLZPUKQTCNUMKVFFNEGLOVEZINCCXMPZGVOXBRBSGWNTHUZOTJPO");

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
    msg.setTimeStamp(0.987128075268);
    msg.setSource(62587U);
    msg.setSourceEntity(95U);
    msg.setDestination(65347U);
    msg.setDestinationEntity(163U);
    msg.op = 145U;
    msg.actions.assign("CATWHZZKQCYIJZTSFCWOKBRDTAYQOGBXTGEKNSDHYBGPIPXXUMHGDBLSSOQOIAEOGF");

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
    msg.setTimeStamp(0.353236121865);
    msg.setSource(60252U);
    msg.setSourceEntity(24U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(77U);
    msg.op = 222U;
    msg.actions.assign("YKQUBYSNLWRMYQSXAGORLWXRJEMNKBEKYVHPTRIUTBDGWJPTCCS");

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
    msg.setTimeStamp(0.625035998369);
    msg.setSource(42169U);
    msg.setSourceEntity(236U);
    msg.setDestination(28846U);
    msg.setDestinationEntity(50U);
    msg.actions.assign("NLRPMLVHPZASUQHEQOUVIRUQBEYFWTBBYYKSVSEYWOCEXOSFATJTVIFEITMLXVKFLDAMUNYDHFKJGJKEINRHVRGWGPLXNRNWZKDOCGZDSLOYZQIZPRR");

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
    msg.setTimeStamp(0.2218239191);
    msg.setSource(48139U);
    msg.setSourceEntity(118U);
    msg.setDestination(21869U);
    msg.setDestinationEntity(165U);
    msg.actions.assign("SHZKDPVMPMZDROZHOFRZMMPVHFAGGKLUKDPHHZNCQNXYRTZWTCDDBIIPXABLJSITBHQGOSYQGTAIHWWTENEYSKPZXUIMUIVWJAAGFLEMOYVXLMMDGLRQJISJWEYNVQTSKUKFPISWERPJOVHLSRZBBPUMHNDXCJLHEUTPAFXSVCFEGAXAGEYZWKGNTLXICDOQRNMBAOLBYVKRT");

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
    msg.setTimeStamp(0.31387207366);
    msg.setSource(37620U);
    msg.setSourceEntity(36U);
    msg.setDestination(62326U);
    msg.setDestinationEntity(144U);
    msg.actions.assign("MRQBIWYKLKWCRNAJZCRJSTZANMBDCNWVNBJKXNICCQFPVTPMLAUJPHBXIUZSBPUXTGXREVFUYHLYARJTVNXEJUYHKIMWQOPRSEOFZWGAAFLAJSWQGSLEGKFMTREFKMYOKDIZRTLXIVXOFLQMUQIGZBKBIYFGLUPVJOVXSOYODEAYEBTNDLDYQVDZCUYKGSDO");

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
    msg.setTimeStamp(0.598661492785);
    msg.setSource(1256U);
    msg.setSourceEntity(76U);
    msg.setDestination(55904U);
    msg.setDestinationEntity(226U);
    msg.button = 186U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.423076293647);
    msg.setSource(44529U);
    msg.setSourceEntity(244U);
    msg.setDestination(14608U);
    msg.setDestinationEntity(100U);
    msg.button = 55U;
    msg.value = 237U;

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
    msg.setTimeStamp(0.761477043802);
    msg.setSource(42958U);
    msg.setSourceEntity(131U);
    msg.setDestination(32558U);
    msg.setDestinationEntity(47U);
    msg.button = 28U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.544939563592);
    msg.setSource(1723U);
    msg.setSourceEntity(5U);
    msg.setDestination(10553U);
    msg.setDestinationEntity(31U);
    msg.op = 54U;
    msg.text.assign("VFJNWWBZJWJDLEVSATDBKISYACFGBQAEWLTBNXFUWGJRHMESQYXDZZDOEKCXTLYLONBGSBIFOEDLWZRPMUTRPDNAPMVYSPPCJHULDQGCQBZZIURBUVNPQOFZRAYSRVHFAODEXIGOKEXWAXMNXJSUREHHJIECBIGGIQAMYIEBMLZGXKQSYIWVFVHNLMHCIXQKFQTULHPCTJTKJHORKNKSZYAPTLRUGPKOMCNUA");

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
    msg.setTimeStamp(0.792630557619);
    msg.setSource(50540U);
    msg.setSourceEntity(4U);
    msg.setDestination(38257U);
    msg.setDestinationEntity(169U);
    msg.op = 40U;
    msg.text.assign("MFRDQRVTISJNSBNYEZMUQWPLSFQPNJAJFPCONACUKVWEBLT");

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
    msg.setTimeStamp(0.200190312025);
    msg.setSource(10360U);
    msg.setSourceEntity(200U);
    msg.setDestination(42089U);
    msg.setDestinationEntity(158U);
    msg.op = 87U;
    msg.text.assign("WVOGVUEEJCXXQBXVAPXZBKHZTCNJXWORSDWJETLVFFSMBVXWYTAVJRUPSABTILHEOPV");

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
    msg.setTimeStamp(0.0403420407225);
    msg.setSource(55632U);
    msg.setSourceEntity(83U);
    msg.setDestination(3792U);
    msg.setDestinationEntity(244U);
    msg.op = 26U;
    msg.time_remain = 0.770239083309;
    msg.sched_time = 0.0274651422986;

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
    msg.setTimeStamp(0.0544124472164);
    msg.setSource(50295U);
    msg.setSourceEntity(187U);
    msg.setDestination(19423U);
    msg.setDestinationEntity(155U);
    msg.op = 164U;
    msg.time_remain = 0.0841616353709;
    msg.sched_time = 0.42728290307;

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
    msg.setTimeStamp(0.818886774085);
    msg.setSource(64332U);
    msg.setSourceEntity(141U);
    msg.setDestination(36130U);
    msg.setDestinationEntity(170U);
    msg.op = 218U;
    msg.time_remain = 0.181560447826;
    msg.sched_time = 0.548791186467;

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
    msg.setTimeStamp(0.644960022393);
    msg.setSource(59098U);
    msg.setSourceEntity(217U);
    msg.setDestination(24403U);
    msg.setDestinationEntity(124U);
    msg.name.assign("BMZYAJFHNSBPIRTDZHKZWXPDFSGBWCZDXOMFJQVUFIDLUVSJTKQUWABQLCPDFG");
    msg.op = 227U;
    msg.sched_time = 0.143859345242;

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
    msg.setTimeStamp(0.568763298486);
    msg.setSource(63671U);
    msg.setSourceEntity(119U);
    msg.setDestination(42798U);
    msg.setDestinationEntity(112U);
    msg.name.assign("ZVYCILEZWUBFCOWKMLGSAOPKSYALSKEUUPVJHHDSOVITJTHJUYBBDTVVGGMWEGZDTRUKWHVERLHMNPFABIWNWFNQJJHD");
    msg.op = 203U;
    msg.sched_time = 0.401930427356;

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
    msg.setTimeStamp(0.702756565597);
    msg.setSource(30046U);
    msg.setSourceEntity(34U);
    msg.setDestination(11417U);
    msg.setDestinationEntity(192U);
    msg.name.assign("NYMEVFIJENRXXPNIEAD");
    msg.op = 166U;
    msg.sched_time = 0.526416630457;

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
    msg.setTimeStamp(0.872590969012);
    msg.setSource(45440U);
    msg.setSourceEntity(241U);
    msg.setDestination(26783U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.271202543285);
    msg.setSource(16176U);
    msg.setSourceEntity(201U);
    msg.setDestination(4499U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.252667738095);
    msg.setSource(62483U);
    msg.setSourceEntity(58U);
    msg.setDestination(51060U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.349352483666);
    msg.setSource(34004U);
    msg.setSourceEntity(188U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(168U);
    msg.name.assign("XMURRLSQWTBEKTJXYOCUZNWOYETLTYUHPCOBELSZWJXASDHQYCRHIATDCIXRVEO");
    msg.state = 167U;

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
    msg.setTimeStamp(0.0462156364415);
    msg.setSource(46083U);
    msg.setSourceEntity(247U);
    msg.setDestination(8742U);
    msg.setDestinationEntity(103U);
    msg.name.assign("WVYKAJPDVJXVNRPNMBPDMGQIOTYWHRIMQUTONLIYGYTAYOMNWWLJYUOHIGUUBFIVSZIDUTLKGQGJMWNGDLNJTXPBVLOARVGABMPMHFOBHFSSQA");
    msg.state = 53U;

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
    msg.setTimeStamp(0.356916328645);
    msg.setSource(52672U);
    msg.setSourceEntity(234U);
    msg.setDestination(5265U);
    msg.setDestinationEntity(230U);
    msg.name.assign("HYGZALKMJLHPIIGDRT");
    msg.state = 17U;

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
    msg.setTimeStamp(0.464147490567);
    msg.setSource(63U);
    msg.setSourceEntity(32U);
    msg.setDestination(19844U);
    msg.setDestinationEntity(103U);
    msg.name.assign("IGFWMOYLLFGEOSAOUELQSAKMRQZQQQSDMETFPTXXHJKOIKZCWTHICAR");
    msg.value = 98U;

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
    msg.setTimeStamp(0.0739508794701);
    msg.setSource(18869U);
    msg.setSourceEntity(81U);
    msg.setDestination(21827U);
    msg.setDestinationEntity(225U);
    msg.name.assign("GKFDLDCMNVGXAGTMDIHETTOWXLZSOBBWWJFHMZUPQJZXSVRAJVUCDJMTZLNNXYAOPFWVBYPWARBTAKDOGALRPXGLXCBLPSEHJFGIIVMMKRNOO");
    msg.value = 169U;

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
    msg.setTimeStamp(0.175745942369);
    msg.setSource(36739U);
    msg.setSourceEntity(98U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(106U);
    msg.name.assign("GZLKCCZBQFVPNGMRSGPKCQHUXBUOKZRKAPHKANYELEPCPROBBIMMJNKTNVSYTQAEVAYASVMKROZS");
    msg.value = 156U;

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
    msg.setTimeStamp(0.44326321272);
    msg.setSource(55141U);
    msg.setSourceEntity(241U);
    msg.setDestination(25982U);
    msg.setDestinationEntity(3U);
    msg.name.assign("ORNDYEAGSLFUVCNDLQVYEDHLMTGUKFQUKCZVWBWYJQBPRUW");

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
    msg.setTimeStamp(0.97039606717);
    msg.setSource(1204U);
    msg.setSourceEntity(168U);
    msg.setDestination(54454U);
    msg.setDestinationEntity(122U);
    msg.name.assign("POQQNECLTKOSVBVROSFIAXSNAIPUPYMLRNDYJUZIWFHPCQECGWCSFYKZPXOWVBYAHCORXTNYKWHIWESBUCLHDIBTYGBM");

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
    msg.setTimeStamp(0.685291535386);
    msg.setSource(19918U);
    msg.setSourceEntity(113U);
    msg.setDestination(34117U);
    msg.setDestinationEntity(156U);
    msg.name.assign("VNZKISEOJKUMVFAEHENIBWUFWZDYHRXYOEGXMQYEVXHDNOLBRLAGUMPHZAMRASUJMTWTQNRPZMLMHNFE");

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
    msg.setTimeStamp(0.395973453572);
    msg.setSource(51442U);
    msg.setSourceEntity(68U);
    msg.setDestination(11488U);
    msg.setDestinationEntity(161U);
    msg.name.assign("JJVNNARKAWWCGPALWUWKJGUFVFUPDTPYPKZOCBZDCORRIUVAIYFKYEXIGHGJNYHYQSEQTBRIFDEXJKWXKNEOILJCMZQENHNRLATRXDLAHFARTXQWJBNBIBDMEPZMMOSSAPDOYSIHYQAWUNTFKLIVDZHBZOMFLPVSX");
    msg.value = 138U;

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
    msg.setTimeStamp(0.490981906659);
    msg.setSource(38181U);
    msg.setSourceEntity(169U);
    msg.setDestination(47038U);
    msg.setDestinationEntity(63U);
    msg.name.assign("HCDDRZRMSEWWLSMKWHPJIBMRNKCWKCXILDZWJADYBBULNMQSAHOBDYFPPDBIEAHVEGFGGGAIUKOMEFDAWORDGEQQUVZRHTXCRIVXKVKFIQLOJHAZSCLFBZTTPUS");
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
    msg.setTimeStamp(0.612973476297);
    msg.setSource(14491U);
    msg.setSourceEntity(195U);
    msg.setDestination(40012U);
    msg.setDestinationEntity(252U);
    msg.name.assign("QYAEGEOZOYLGOWLGDAIQJEJEAQYRRFGNWQFFLAFUZVMRWCTPRHTLUVKLTJGZWVUEHDBFFYQCJXBOJNNVPRJSDXMMRMPHMAMBBNVLMBXRJSTRST");
    msg.value = 177U;

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
    msg.setTimeStamp(0.688796274743);
    msg.setSource(30663U);
    msg.setSourceEntity(127U);
    msg.setDestination(19460U);
    msg.setDestinationEntity(149U);
    msg.id = 196U;
    msg.period = 255689876U;
    msg.duty_cycle = 3958486936U;

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
    msg.setTimeStamp(0.00309493749117);
    msg.setSource(10854U);
    msg.setSourceEntity(121U);
    msg.setDestination(55832U);
    msg.setDestinationEntity(231U);
    msg.id = 168U;
    msg.period = 749800687U;
    msg.duty_cycle = 2473271538U;

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
    msg.setTimeStamp(0.329959116846);
    msg.setSource(18641U);
    msg.setSourceEntity(19U);
    msg.setDestination(46306U);
    msg.setDestinationEntity(209U);
    msg.id = 211U;
    msg.period = 55662942U;
    msg.duty_cycle = 3777467455U;

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
    msg.setTimeStamp(0.848020763042);
    msg.setSource(7191U);
    msg.setSourceEntity(154U);
    msg.setDestination(42812U);
    msg.setDestinationEntity(136U);
    msg.id = 23U;
    msg.period = 2512322922U;
    msg.duty_cycle = 328317117U;

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
    msg.setTimeStamp(0.936414375584);
    msg.setSource(10590U);
    msg.setSourceEntity(96U);
    msg.setDestination(15915U);
    msg.setDestinationEntity(167U);
    msg.id = 120U;
    msg.period = 2819938878U;
    msg.duty_cycle = 2899401230U;

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
    msg.setTimeStamp(0.608696348946);
    msg.setSource(16610U);
    msg.setSourceEntity(202U);
    msg.setDestination(48063U);
    msg.setDestinationEntity(205U);
    msg.id = 92U;
    msg.period = 2661174436U;
    msg.duty_cycle = 3848047752U;

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
    msg.setTimeStamp(0.970707445193);
    msg.setSource(2048U);
    msg.setSourceEntity(81U);
    msg.setDestination(47918U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.0605309761202;
    msg.lon = 0.457727618606;
    msg.height = 0.0835903956726;
    msg.x = 0.118417603686;
    msg.y = 0.530566174625;
    msg.z = 0.149668801923;
    msg.phi = 0.919730404111;
    msg.theta = 0.561867464314;
    msg.psi = 0.9445202149;
    msg.u = 0.0932657673266;
    msg.v = 0.925363617993;
    msg.w = 0.318882558393;
    msg.vx = 0.782184561167;
    msg.vy = 0.367446941487;
    msg.vz = 0.629981561679;
    msg.p = 0.680384953718;
    msg.q = 0.983663745706;
    msg.r = 0.630066147523;
    msg.depth = 0.735854151898;
    msg.alt = 0.338086542611;

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
    msg.setTimeStamp(0.982506111552);
    msg.setSource(5671U);
    msg.setSourceEntity(165U);
    msg.setDestination(62397U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.632216716631;
    msg.lon = 0.780302752129;
    msg.height = 0.887255137104;
    msg.x = 0.305770973194;
    msg.y = 0.460963222327;
    msg.z = 0.89645034618;
    msg.phi = 0.793843949357;
    msg.theta = 0.51554308826;
    msg.psi = 0.101219037696;
    msg.u = 0.907526681049;
    msg.v = 0.197958781606;
    msg.w = 0.918342370727;
    msg.vx = 0.427898247969;
    msg.vy = 0.80415076667;
    msg.vz = 0.91150066595;
    msg.p = 0.739904555485;
    msg.q = 0.879347606434;
    msg.r = 0.101192125013;
    msg.depth = 0.0400650254949;
    msg.alt = 0.0993164003231;

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
    msg.setTimeStamp(0.382571423149);
    msg.setSource(20489U);
    msg.setSourceEntity(250U);
    msg.setDestination(50919U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.380929354081;
    msg.lon = 0.739921101124;
    msg.height = 0.636262272629;
    msg.x = 0.245757703696;
    msg.y = 0.356027741383;
    msg.z = 0.726132971559;
    msg.phi = 0.192175686707;
    msg.theta = 0.33254007493;
    msg.psi = 0.913538775577;
    msg.u = 0.546638996182;
    msg.v = 0.575177271516;
    msg.w = 0.85055015498;
    msg.vx = 0.491848928512;
    msg.vy = 0.0749582111481;
    msg.vz = 0.567381562977;
    msg.p = 0.60571181587;
    msg.q = 0.0600147051506;
    msg.r = 0.75529416308;
    msg.depth = 0.038023503102;
    msg.alt = 0.250983331697;

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
    msg.setTimeStamp(0.904967892018);
    msg.setSource(48281U);
    msg.setSourceEntity(10U);
    msg.setDestination(20118U);
    msg.setDestinationEntity(218U);
    msg.x = 0.809439429943;
    msg.y = 0.535073309579;
    msg.z = 0.468438961466;

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
    msg.setTimeStamp(0.687602100374);
    msg.setSource(35464U);
    msg.setSourceEntity(133U);
    msg.setDestination(24354U);
    msg.setDestinationEntity(182U);
    msg.x = 0.792786628073;
    msg.y = 0.506445100748;
    msg.z = 0.731999109167;

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
    msg.setTimeStamp(0.654327974395);
    msg.setSource(49763U);
    msg.setSourceEntity(97U);
    msg.setDestination(20932U);
    msg.setDestinationEntity(121U);
    msg.x = 0.212061571368;
    msg.y = 0.378524387736;
    msg.z = 0.283378588893;

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
    msg.setTimeStamp(0.364830471197);
    msg.setSource(15076U);
    msg.setSourceEntity(51U);
    msg.setDestination(2938U);
    msg.setDestinationEntity(182U);
    msg.value = 0.606608333702;

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
    msg.setTimeStamp(0.133946935171);
    msg.setSource(9335U);
    msg.setSourceEntity(29U);
    msg.setDestination(3205U);
    msg.setDestinationEntity(211U);
    msg.value = 0.945981899528;

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
    msg.setTimeStamp(0.608253154194);
    msg.setSource(15934U);
    msg.setSourceEntity(90U);
    msg.setDestination(42302U);
    msg.setDestinationEntity(130U);
    msg.value = 0.236473939737;

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
    msg.setTimeStamp(0.337790386668);
    msg.setSource(22522U);
    msg.setSourceEntity(85U);
    msg.setDestination(17940U);
    msg.setDestinationEntity(254U);
    msg.value = 0.228835165171;

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
    msg.setTimeStamp(0.910911477683);
    msg.setSource(990U);
    msg.setSourceEntity(57U);
    msg.setDestination(21358U);
    msg.setDestinationEntity(8U);
    msg.value = 0.887903098137;

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
    msg.setTimeStamp(0.695833895264);
    msg.setSource(45453U);
    msg.setSourceEntity(140U);
    msg.setDestination(7626U);
    msg.setDestinationEntity(26U);
    msg.value = 0.308050308675;

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
    msg.setTimeStamp(0.0617531651995);
    msg.setSource(53013U);
    msg.setSourceEntity(205U);
    msg.setDestination(61504U);
    msg.setDestinationEntity(88U);
    msg.x = 0.18447708205;
    msg.y = 0.147196370359;
    msg.z = 0.679787055494;
    msg.phi = 0.00175049998489;
    msg.theta = 0.290231867808;
    msg.psi = 0.283493269573;
    msg.p = 0.802311197653;
    msg.q = 0.876404346083;
    msg.r = 0.82012589886;
    msg.u = 0.988555868295;
    msg.v = 0.639777246493;
    msg.w = 0.773800595952;
    msg.bias_psi = 0.806031855712;
    msg.bias_r = 0.948884632445;

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
    msg.setTimeStamp(0.711178237387);
    msg.setSource(18163U);
    msg.setSourceEntity(63U);
    msg.setDestination(8074U);
    msg.setDestinationEntity(247U);
    msg.x = 0.226765055253;
    msg.y = 0.752226293555;
    msg.z = 0.298567669339;
    msg.phi = 0.460657749448;
    msg.theta = 0.939174781532;
    msg.psi = 0.538170640179;
    msg.p = 0.848096549687;
    msg.q = 0.338041984762;
    msg.r = 0.411332611883;
    msg.u = 0.633280721016;
    msg.v = 0.967100041575;
    msg.w = 0.0952416954814;
    msg.bias_psi = 0.627748859205;
    msg.bias_r = 0.0476290864762;

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
    msg.setTimeStamp(0.777139648688);
    msg.setSource(40756U);
    msg.setSourceEntity(104U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(212U);
    msg.x = 0.685642915941;
    msg.y = 0.598614918716;
    msg.z = 0.750493058802;
    msg.phi = 0.885982821906;
    msg.theta = 0.815286683352;
    msg.psi = 0.770312450934;
    msg.p = 0.121477004161;
    msg.q = 0.372461111642;
    msg.r = 0.178117891702;
    msg.u = 0.719478039809;
    msg.v = 0.528115465236;
    msg.w = 0.205230169626;
    msg.bias_psi = 0.105423171274;
    msg.bias_r = 0.834885420004;

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
    msg.setTimeStamp(0.953146734031);
    msg.setSource(14576U);
    msg.setSourceEntity(254U);
    msg.setDestination(2712U);
    msg.setDestinationEntity(159U);
    msg.bias_psi = 0.508234631523;
    msg.bias_r = 0.209297775936;
    msg.cog = 0.949362664478;
    msg.cyaw = 0.187458930576;
    msg.lbl_rej_level = 0.553005772786;
    msg.gps_rej_level = 0.131334558752;
    msg.custom_x = 0.0166584424263;
    msg.custom_y = 0.0317168746601;
    msg.custom_z = 0.132090574107;

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
    msg.setTimeStamp(0.1861716456);
    msg.setSource(43358U);
    msg.setSourceEntity(9U);
    msg.setDestination(45208U);
    msg.setDestinationEntity(225U);
    msg.bias_psi = 0.631099874046;
    msg.bias_r = 0.573970716748;
    msg.cog = 0.751369312141;
    msg.cyaw = 0.265216093704;
    msg.lbl_rej_level = 0.68954600731;
    msg.gps_rej_level = 0.168407128851;
    msg.custom_x = 0.340151545521;
    msg.custom_y = 0.520740494557;
    msg.custom_z = 0.939921165752;

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
    msg.setTimeStamp(0.359326808559);
    msg.setSource(41499U);
    msg.setSourceEntity(150U);
    msg.setDestination(31621U);
    msg.setDestinationEntity(135U);
    msg.bias_psi = 0.78007780467;
    msg.bias_r = 0.799975792116;
    msg.cog = 0.628391066223;
    msg.cyaw = 0.00924388682174;
    msg.lbl_rej_level = 0.844819317219;
    msg.gps_rej_level = 0.733112179863;
    msg.custom_x = 0.955250145824;
    msg.custom_y = 0.77505936631;
    msg.custom_z = 0.36944163264;

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
    msg.setTimeStamp(0.376757279925);
    msg.setSource(7270U);
    msg.setSourceEntity(171U);
    msg.setDestination(20402U);
    msg.setDestinationEntity(177U);
    msg.utc_time = 0.799948229416;
    msg.reason = 20U;

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
    msg.setTimeStamp(0.925398673255);
    msg.setSource(24158U);
    msg.setSourceEntity(74U);
    msg.setDestination(19642U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.453063368581;
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
    msg.setTimeStamp(0.991440621618);
    msg.setSource(47877U);
    msg.setSourceEntity(136U);
    msg.setDestination(54852U);
    msg.setDestinationEntity(46U);
    msg.utc_time = 0.0627324722208;
    msg.reason = 72U;

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
    msg.setTimeStamp(0.27302371812);
    msg.setSource(55545U);
    msg.setSourceEntity(140U);
    msg.setDestination(43408U);
    msg.setDestinationEntity(13U);
    msg.id = 72U;
    msg.range = 0.48191654054;
    msg.acceptance = 170U;

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
    msg.setTimeStamp(0.78209138297);
    msg.setSource(42534U);
    msg.setSourceEntity(138U);
    msg.setDestination(13712U);
    msg.setDestinationEntity(21U);
    msg.id = 1U;
    msg.range = 0.699942858332;
    msg.acceptance = 138U;

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
    msg.setTimeStamp(0.0706866137529);
    msg.setSource(16550U);
    msg.setSourceEntity(133U);
    msg.setDestination(386U);
    msg.setDestinationEntity(40U);
    msg.id = 86U;
    msg.range = 0.559253323088;
    msg.acceptance = 194U;

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
    msg.setTimeStamp(0.296003530331);
    msg.setSource(11616U);
    msg.setSourceEntity(38U);
    msg.setDestination(13182U);
    msg.setDestinationEntity(178U);
    msg.type = 120U;
    msg.reason = 158U;
    msg.value = 0.699651006547;
    msg.timestep = 0.18500773682;

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
    msg.setTimeStamp(0.826748489326);
    msg.setSource(41935U);
    msg.setSourceEntity(41U);
    msg.setDestination(16947U);
    msg.setDestinationEntity(145U);
    msg.type = 10U;
    msg.reason = 35U;
    msg.value = 0.366931123732;
    msg.timestep = 0.841875167673;

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
    msg.setTimeStamp(0.875009093346);
    msg.setSource(12192U);
    msg.setSourceEntity(62U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(157U);
    msg.type = 47U;
    msg.reason = 239U;
    msg.value = 0.0282302131764;
    msg.timestep = 0.339977246779;

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
    msg.setTimeStamp(0.0502050938458);
    msg.setSource(38164U);
    msg.setSourceEntity(69U);
    msg.setDestination(14649U);
    msg.setDestinationEntity(180U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VBXJBKLOYGNDJXELUGLRLOGUCQAEBKWCFRUAFZMVXXTZDOTXYYMZJGPDTIHHJRKGSUXSQLFCVEBAVLHKWCHAPOPAABQZIRRKWIYILCCSFBWUH");
    tmp_msg_0.lat = 0.0294574522896;
    tmp_msg_0.lon = 0.360856790833;
    tmp_msg_0.depth = 0.404615586067;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 218U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.455958981941;
    msg.y = 0.534476396473;
    msg.var_x = 0.885062840035;
    msg.var_y = 0.12642773835;
    msg.distance = 0.246160327953;

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
    msg.setTimeStamp(0.756143703114);
    msg.setSource(48429U);
    msg.setSourceEntity(44U);
    msg.setDestination(30829U);
    msg.setDestinationEntity(144U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TNFVKKDQDMISAZPZVRKZAOGHXGFJUNOYRLPWQSILHFEWUOREWITCMTIOOJQZEOGUPHDKENBDVASWLPKLJXBSLPUKOBSWVZ");
    tmp_msg_0.lat = 0.964582738503;
    tmp_msg_0.lon = 0.837636426057;
    tmp_msg_0.depth = 0.131926502841;
    tmp_msg_0.query_channel = 153U;
    tmp_msg_0.reply_channel = 5U;
    tmp_msg_0.transponder_delay = 41U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.855645779039;
    msg.y = 0.387143670633;
    msg.var_x = 0.26656112973;
    msg.var_y = 0.255956628886;
    msg.distance = 0.735358743384;

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
    msg.setTimeStamp(0.352063617827);
    msg.setSource(42458U);
    msg.setSourceEntity(72U);
    msg.setDestination(22919U);
    msg.setDestinationEntity(188U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EWNJVPYJMPQSZNBAXDZCYANVJYXBWZYORFQNTWYMLESLHGGTLAKNLHYSHRDDTSFXNZOWEXFKUWRBKQFLMWVMIOVFGRQIULVPJGBXKHRAHUPVOPPCGOCFRDLKYCHNVVNPVDYHFILQWXSCAIEIQEJRPTUTTHOGCMITBJUOGSEHYJJONWCRUQGKJICEHZKSMIRJBRDBPXACAEQQEBZUSUDQBOZKDXFGZ");
    tmp_msg_0.lat = 0.423319614327;
    tmp_msg_0.lon = 0.564485569083;
    tmp_msg_0.depth = 0.710317517334;
    tmp_msg_0.query_channel = 74U;
    tmp_msg_0.reply_channel = 223U;
    tmp_msg_0.transponder_delay = 48U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.482552963317;
    msg.y = 0.798219144545;
    msg.var_x = 0.442145493656;
    msg.var_y = 0.264254548851;
    msg.distance = 0.453292015865;

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
    msg.setTimeStamp(0.144918865353);
    msg.setSource(35093U);
    msg.setSourceEntity(3U);
    msg.setDestination(12277U);
    msg.setDestinationEntity(38U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.819834199213);
    msg.setSource(53360U);
    msg.setSourceEntity(146U);
    msg.setDestination(13086U);
    msg.setDestinationEntity(18U);
    msg.state = 35U;

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
    msg.setTimeStamp(0.00998792251014);
    msg.setSource(25466U);
    msg.setSourceEntity(97U);
    msg.setDestination(40801U);
    msg.setDestinationEntity(147U);
    msg.state = 195U;

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
    msg.setTimeStamp(0.707128532914);
    msg.setSource(31882U);
    msg.setSourceEntity(205U);
    msg.setDestination(10614U);
    msg.setDestinationEntity(132U);
    msg.x = 0.227024124596;
    msg.y = 0.549469579483;
    msg.z = 0.355053085767;

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
    msg.setTimeStamp(0.441494885876);
    msg.setSource(46213U);
    msg.setSourceEntity(177U);
    msg.setDestination(38263U);
    msg.setDestinationEntity(215U);
    msg.x = 0.188683944256;
    msg.y = 0.70721770781;
    msg.z = 0.108350032021;

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
    msg.setTimeStamp(0.612296019257);
    msg.setSource(10833U);
    msg.setSourceEntity(157U);
    msg.setDestination(29860U);
    msg.setDestinationEntity(223U);
    msg.x = 0.750314962931;
    msg.y = 0.365317909142;
    msg.z = 0.636392331293;

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
    msg.setTimeStamp(0.990064059917);
    msg.setSource(60386U);
    msg.setSourceEntity(192U);
    msg.setDestination(51754U);
    msg.setDestinationEntity(23U);
    msg.va = 0.295731680692;
    msg.aoa = 0.451214978054;
    msg.ssa = 0.880490725334;

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
    msg.setTimeStamp(0.640570548925);
    msg.setSource(24823U);
    msg.setSourceEntity(251U);
    msg.setDestination(14612U);
    msg.setDestinationEntity(124U);
    msg.va = 0.277665292732;
    msg.aoa = 0.0345859535083;
    msg.ssa = 0.938300750288;

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
    msg.setTimeStamp(0.655850785761);
    msg.setSource(29610U);
    msg.setSourceEntity(120U);
    msg.setDestination(65119U);
    msg.setDestinationEntity(74U);
    msg.va = 0.814079575823;
    msg.aoa = 0.607700121344;
    msg.ssa = 0.930072130505;

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
    msg.setTimeStamp(0.355367405488);
    msg.setSource(6083U);
    msg.setSourceEntity(200U);
    msg.setDestination(48596U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0585925679855;

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
    msg.setTimeStamp(0.97910892211);
    msg.setSource(2271U);
    msg.setSourceEntity(110U);
    msg.setDestination(13368U);
    msg.setDestinationEntity(45U);
    msg.value = 0.376268808416;

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
    msg.setTimeStamp(0.928011040292);
    msg.setSource(26870U);
    msg.setSourceEntity(1U);
    msg.setDestination(41073U);
    msg.setDestinationEntity(58U);
    msg.value = 0.0563120667542;

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
    msg.setTimeStamp(0.393356124726);
    msg.setSource(12887U);
    msg.setSourceEntity(189U);
    msg.setDestination(5065U);
    msg.setDestinationEntity(203U);
    msg.value = 0.877689267334;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.437751053689);
    msg.setSource(60726U);
    msg.setSourceEntity(155U);
    msg.setDestination(1324U);
    msg.setDestinationEntity(149U);
    msg.value = 0.612440445934;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.631491684921);
    msg.setSource(43410U);
    msg.setSourceEntity(129U);
    msg.setDestination(47101U);
    msg.setDestinationEntity(151U);
    msg.value = 0.900610783433;
    msg.z_units = 72U;

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
    msg.setTimeStamp(0.664711888731);
    msg.setSource(21122U);
    msg.setSourceEntity(84U);
    msg.setDestination(21183U);
    msg.setDestinationEntity(222U);
    msg.value = 0.662130350798;
    msg.speed_units = 235U;

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
    msg.setTimeStamp(0.370401409036);
    msg.setSource(30310U);
    msg.setSourceEntity(222U);
    msg.setDestination(3261U);
    msg.setDestinationEntity(135U);
    msg.value = 0.686500157611;
    msg.speed_units = 41U;

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
    msg.setTimeStamp(0.82918526639);
    msg.setSource(51276U);
    msg.setSourceEntity(86U);
    msg.setDestination(48515U);
    msg.setDestinationEntity(236U);
    msg.value = 0.85992493775;
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
    msg.setTimeStamp(0.0705876718405);
    msg.setSource(60574U);
    msg.setSourceEntity(65U);
    msg.setDestination(29455U);
    msg.setDestinationEntity(57U);
    msg.value = 0.323499948011;

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
    msg.setTimeStamp(0.872415491793);
    msg.setSource(50298U);
    msg.setSourceEntity(55U);
    msg.setDestination(32473U);
    msg.setDestinationEntity(213U);
    msg.value = 0.627050876032;

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
    msg.setTimeStamp(0.197948163754);
    msg.setSource(30444U);
    msg.setSourceEntity(131U);
    msg.setDestination(49241U);
    msg.setDestinationEntity(114U);
    msg.value = 0.139544428276;

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
    msg.setTimeStamp(0.261045922102);
    msg.setSource(28881U);
    msg.setSourceEntity(152U);
    msg.setDestination(50032U);
    msg.setDestinationEntity(240U);
    msg.value = 0.332313180747;

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
    msg.setTimeStamp(0.170197688866);
    msg.setSource(45632U);
    msg.setSourceEntity(176U);
    msg.setDestination(7438U);
    msg.setDestinationEntity(61U);
    msg.value = 0.496877971521;

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
    msg.setTimeStamp(0.0242183670514);
    msg.setSource(61165U);
    msg.setSourceEntity(143U);
    msg.setDestination(46420U);
    msg.setDestinationEntity(11U);
    msg.value = 0.864370457549;

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
    msg.setTimeStamp(0.77405956724);
    msg.setSource(29439U);
    msg.setSourceEntity(179U);
    msg.setDestination(1826U);
    msg.setDestinationEntity(201U);
    msg.value = 0.127009859298;

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
    msg.setTimeStamp(0.483800054385);
    msg.setSource(29983U);
    msg.setSourceEntity(34U);
    msg.setDestination(43993U);
    msg.setDestinationEntity(230U);
    msg.value = 0.325350395016;

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
    msg.setTimeStamp(0.531029325885);
    msg.setSource(21741U);
    msg.setSourceEntity(136U);
    msg.setDestination(21425U);
    msg.setDestinationEntity(148U);
    msg.value = 0.476429104131;

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
    msg.setTimeStamp(0.17563062024);
    msg.setSource(1630U);
    msg.setSourceEntity(108U);
    msg.setDestination(29090U);
    msg.setDestinationEntity(22U);
    msg.path_ref = 3378904257U;
    msg.start_lat = 0.215483774177;
    msg.start_lon = 0.073669208922;
    msg.start_z = 0.298328725751;
    msg.start_z_units = 45U;
    msg.end_lat = 0.843598578718;
    msg.end_lon = 0.464510752829;
    msg.end_z = 0.168603402812;
    msg.end_z_units = 253U;
    msg.speed = 0.155514120809;
    msg.speed_units = 225U;
    msg.lradius = 0.687661561137;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.212663876491);
    msg.setSource(54058U);
    msg.setSourceEntity(211U);
    msg.setDestination(48629U);
    msg.setDestinationEntity(92U);
    msg.path_ref = 4933555U;
    msg.start_lat = 0.923511510743;
    msg.start_lon = 0.383897876422;
    msg.start_z = 0.407685126196;
    msg.start_z_units = 253U;
    msg.end_lat = 0.964736555253;
    msg.end_lon = 0.620497048454;
    msg.end_z = 0.115590712148;
    msg.end_z_units = 232U;
    msg.speed = 0.550994416446;
    msg.speed_units = 182U;
    msg.lradius = 0.816355576201;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.523856088479);
    msg.setSource(53546U);
    msg.setSourceEntity(226U);
    msg.setDestination(16310U);
    msg.setDestinationEntity(86U);
    msg.path_ref = 129065522U;
    msg.start_lat = 0.81498707203;
    msg.start_lon = 0.313761245305;
    msg.start_z = 0.878373649874;
    msg.start_z_units = 118U;
    msg.end_lat = 0.514391889385;
    msg.end_lon = 0.27292445137;
    msg.end_z = 0.550880588718;
    msg.end_z_units = 196U;
    msg.speed = 0.604256102791;
    msg.speed_units = 151U;
    msg.lradius = 0.824621241038;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.475289449816);
    msg.setSource(54746U);
    msg.setSourceEntity(154U);
    msg.setDestination(50506U);
    msg.setDestinationEntity(134U);
    msg.x = 0.0615961290029;
    msg.y = 0.50097467596;
    msg.z = 0.388768158708;
    msg.k = 0.89187147843;
    msg.m = 0.385044960507;
    msg.n = 0.969260822861;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.354442497227);
    msg.setSource(46663U);
    msg.setSourceEntity(222U);
    msg.setDestination(30917U);
    msg.setDestinationEntity(34U);
    msg.x = 0.627024852016;
    msg.y = 0.625405679068;
    msg.z = 0.494207306701;
    msg.k = 0.675220293167;
    msg.m = 0.0795909920633;
    msg.n = 0.403556946413;
    msg.flags = 70U;

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
    msg.setTimeStamp(0.1645668769);
    msg.setSource(7841U);
    msg.setSourceEntity(44U);
    msg.setDestination(25903U);
    msg.setDestinationEntity(26U);
    msg.x = 0.455833754468;
    msg.y = 0.209763916522;
    msg.z = 0.260000516602;
    msg.k = 0.390907446956;
    msg.m = 0.199311367567;
    msg.n = 0.264319240012;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.286930542719);
    msg.setSource(58716U);
    msg.setSourceEntity(60U);
    msg.setDestination(11128U);
    msg.setDestinationEntity(223U);
    msg.value = 0.236855068805;

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
    msg.setTimeStamp(0.541350739795);
    msg.setSource(51704U);
    msg.setSourceEntity(7U);
    msg.setDestination(11786U);
    msg.setDestinationEntity(42U);
    msg.value = 0.932248106153;

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
    msg.setTimeStamp(0.296629500984);
    msg.setSource(53280U);
    msg.setSourceEntity(116U);
    msg.setDestination(25738U);
    msg.setDestinationEntity(210U);
    msg.value = 0.651941706385;

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
    msg.setTimeStamp(0.735436168779);
    msg.setSource(26656U);
    msg.setSourceEntity(57U);
    msg.setDestination(57459U);
    msg.setDestinationEntity(228U);
    msg.u = 0.136142076755;
    msg.v = 0.606534619879;
    msg.w = 0.317485943684;
    msg.p = 0.749401762228;
    msg.q = 0.406549364674;
    msg.r = 0.0272895654113;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.0815828223541);
    msg.setSource(47525U);
    msg.setSourceEntity(16U);
    msg.setDestination(18755U);
    msg.setDestinationEntity(161U);
    msg.u = 0.57040462204;
    msg.v = 0.911747865088;
    msg.w = 0.169595637489;
    msg.p = 0.0362321958553;
    msg.q = 0.790511073996;
    msg.r = 0.0466849787839;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.78324629804);
    msg.setSource(48077U);
    msg.setSourceEntity(114U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(57U);
    msg.u = 0.135302821412;
    msg.v = 0.32648596424;
    msg.w = 0.475731758737;
    msg.p = 0.560571573381;
    msg.q = 0.2046717947;
    msg.r = 0.561219682695;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.460477898261);
    msg.setSource(25471U);
    msg.setSourceEntity(133U);
    msg.setDestination(9843U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 95311291U;
    msg.start_lat = 0.603209249848;
    msg.start_lon = 0.384182009227;
    msg.start_z = 0.777378717326;
    msg.start_z_units = 185U;
    msg.end_lat = 0.195599544706;
    msg.end_lon = 0.195306451986;
    msg.end_z = 0.92607005761;
    msg.end_z_units = 135U;
    msg.lradius = 0.712151975722;
    msg.flags = 183U;
    msg.x = 0.645955250387;
    msg.y = 0.97724296955;
    msg.z = 0.323625602788;
    msg.vx = 0.897548961693;
    msg.vy = 0.889751971843;
    msg.vz = 0.449207482711;
    msg.course_error = 0.783304018454;
    msg.eta = 18275U;

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
    msg.setTimeStamp(0.592821305516);
    msg.setSource(42697U);
    msg.setSourceEntity(142U);
    msg.setDestination(2167U);
    msg.setDestinationEntity(69U);
    msg.path_ref = 227462041U;
    msg.start_lat = 0.00998953077955;
    msg.start_lon = 0.816934296653;
    msg.start_z = 0.897942110291;
    msg.start_z_units = 216U;
    msg.end_lat = 0.661300131687;
    msg.end_lon = 0.217560106465;
    msg.end_z = 0.49790853746;
    msg.end_z_units = 191U;
    msg.lradius = 0.253323448231;
    msg.flags = 166U;
    msg.x = 0.124076393224;
    msg.y = 0.86431192434;
    msg.z = 0.681687338526;
    msg.vx = 0.749599486875;
    msg.vy = 0.808798225142;
    msg.vz = 0.437728156893;
    msg.course_error = 0.611629281183;
    msg.eta = 20155U;

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
    msg.setTimeStamp(0.568746572525);
    msg.setSource(50838U);
    msg.setSourceEntity(39U);
    msg.setDestination(39918U);
    msg.setDestinationEntity(191U);
    msg.path_ref = 142103456U;
    msg.start_lat = 0.0517993873168;
    msg.start_lon = 0.60603332798;
    msg.start_z = 0.797721320533;
    msg.start_z_units = 195U;
    msg.end_lat = 0.778427193891;
    msg.end_lon = 0.444437373685;
    msg.end_z = 0.539727375001;
    msg.end_z_units = 122U;
    msg.lradius = 0.993199554654;
    msg.flags = 227U;
    msg.x = 0.296235222822;
    msg.y = 0.18958116783;
    msg.z = 0.285634722268;
    msg.vx = 0.774136285294;
    msg.vy = 0.476403745354;
    msg.vz = 0.914580821196;
    msg.course_error = 0.271252036869;
    msg.eta = 58980U;

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
    msg.setTimeStamp(0.876465098357);
    msg.setSource(3540U);
    msg.setSourceEntity(28U);
    msg.setDestination(30484U);
    msg.setDestinationEntity(60U);
    msg.k = 0.961682624129;
    msg.m = 0.559692109346;
    msg.n = 0.642600253336;

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
    msg.setTimeStamp(0.561043044146);
    msg.setSource(767U);
    msg.setSourceEntity(36U);
    msg.setDestination(16041U);
    msg.setDestinationEntity(65U);
    msg.k = 0.420253317914;
    msg.m = 0.885610728832;
    msg.n = 0.710326456794;

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
    msg.setTimeStamp(0.627054791232);
    msg.setSource(28752U);
    msg.setSourceEntity(217U);
    msg.setDestination(24869U);
    msg.setDestinationEntity(216U);
    msg.k = 0.283048231481;
    msg.m = 0.295007254401;
    msg.n = 0.392271640766;

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
    msg.setTimeStamp(0.779678681697);
    msg.setSource(3204U);
    msg.setSourceEntity(142U);
    msg.setDestination(31903U);
    msg.setDestinationEntity(195U);
    msg.p = 0.609201430556;
    msg.i = 0.392149763295;
    msg.d = 0.131557792856;
    msg.a = 0.444929930838;

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
    msg.setTimeStamp(0.748751609757);
    msg.setSource(46708U);
    msg.setSourceEntity(197U);
    msg.setDestination(3270U);
    msg.setDestinationEntity(254U);
    msg.p = 0.462603252234;
    msg.i = 0.920761275844;
    msg.d = 0.200100996163;
    msg.a = 0.258813584252;

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
    msg.setTimeStamp(0.108815114728);
    msg.setSource(32093U);
    msg.setSourceEntity(18U);
    msg.setDestination(17699U);
    msg.setDestinationEntity(1U);
    msg.p = 0.925746157301;
    msg.i = 0.801425070304;
    msg.d = 0.204264108227;
    msg.a = 0.791573688817;

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
    msg.setTimeStamp(0.940140977868);
    msg.setSource(9862U);
    msg.setSourceEntity(31U);
    msg.setDestination(31646U);
    msg.setDestinationEntity(122U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.0181935506227);
    msg.setSource(26526U);
    msg.setSourceEntity(226U);
    msg.setDestination(9562U);
    msg.setDestinationEntity(160U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.727282086943);
    msg.setSource(31089U);
    msg.setSourceEntity(2U);
    msg.setDestination(9361U);
    msg.setDestinationEntity(76U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.642217496152);
    msg.setSource(48515U);
    msg.setSourceEntity(251U);
    msg.setDestination(51622U);
    msg.setDestinationEntity(18U);
    msg.x = 0.31120551846;
    msg.y = 0.541554652646;
    msg.z = 0.0941411911541;
    msg.vx = 0.850234123888;
    msg.vy = 0.370246409575;
    msg.vz = 0.623539717594;
    msg.ax = 0.45820332078;
    msg.ay = 0.746586128144;
    msg.az = 0.48470603659;
    msg.flags = 34565U;

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
    msg.setTimeStamp(0.963738504435);
    msg.setSource(56110U);
    msg.setSourceEntity(224U);
    msg.setDestination(40480U);
    msg.setDestinationEntity(145U);
    msg.x = 0.259258985586;
    msg.y = 0.935524882978;
    msg.z = 0.57399118193;
    msg.vx = 0.329710100505;
    msg.vy = 0.503957781636;
    msg.vz = 0.35846680049;
    msg.ax = 0.974737402054;
    msg.ay = 0.748674997076;
    msg.az = 0.0352900561914;
    msg.flags = 31684U;

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
    msg.setTimeStamp(0.197117996674);
    msg.setSource(14909U);
    msg.setSourceEntity(111U);
    msg.setDestination(31941U);
    msg.setDestinationEntity(127U);
    msg.x = 0.986724265206;
    msg.y = 0.141860361698;
    msg.z = 0.54696958884;
    msg.vx = 0.878671095189;
    msg.vy = 0.20470501166;
    msg.vz = 0.822847976099;
    msg.ax = 0.213348850729;
    msg.ay = 0.743169762089;
    msg.az = 0.777065292304;
    msg.flags = 10533U;

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
    msg.setTimeStamp(0.471453648549);
    msg.setSource(19862U);
    msg.setSourceEntity(6U);
    msg.setDestination(734U);
    msg.setDestinationEntity(229U);
    msg.value = 0.601782451767;

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
    msg.setTimeStamp(0.43546477657);
    msg.setSource(24745U);
    msg.setSourceEntity(153U);
    msg.setDestination(21672U);
    msg.setDestinationEntity(206U);
    msg.value = 0.0811642056641;

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
    msg.setTimeStamp(0.158393629449);
    msg.setSource(47026U);
    msg.setSourceEntity(82U);
    msg.setDestination(19975U);
    msg.setDestinationEntity(57U);
    msg.value = 0.37171775157;

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
    msg.setTimeStamp(0.473632873242);
    msg.setSource(10712U);
    msg.setSourceEntity(157U);
    msg.setDestination(37143U);
    msg.setDestinationEntity(36U);
    msg.timeout = 52282U;
    msg.lat = 0.925646865713;
    msg.lon = 0.370657405369;
    msg.z = 0.085982357903;
    msg.z_units = 162U;
    msg.speed = 0.859101373014;
    msg.speed_units = 21U;
    msg.roll = 0.461186045754;
    msg.pitch = 0.595052381837;
    msg.yaw = 0.137313605259;
    msg.custom.assign("WGINBHJNFHYRLXHWZGVEKCATLPXPLMIAMOSDYNRDEVCDQJMCHSTUEXZVVZYBCKWUTTUQFEEUIZVYAFGMPUWAZOQOMTQZVVMWPCKBIZILXEECZBGORITFPGYDFRXJQOOQGOSSBGCXRTXNSHRPWBEXDCRLLZWKNMAFEYAJPHFJYCAOBVGMPHTDBWDTDKXSNANPUWYSJUCBKUAZBINRHFLQYIHDUMNIOKPQJOSLQADSGLFYSNMVKUJRJQHJGWXVFK");

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
    msg.setTimeStamp(0.616249898426);
    msg.setSource(34475U);
    msg.setSourceEntity(72U);
    msg.setDestination(7579U);
    msg.setDestinationEntity(28U);
    msg.timeout = 52265U;
    msg.lat = 0.350057382686;
    msg.lon = 0.19171831288;
    msg.z = 0.682182369339;
    msg.z_units = 226U;
    msg.speed = 0.226799502374;
    msg.speed_units = 195U;
    msg.roll = 0.889712422535;
    msg.pitch = 0.268577493685;
    msg.yaw = 0.135892613779;
    msg.custom.assign("MKDHLZQOJPXCLSEFHSZPMIXGQBOUAOZDJRHTTVVQZACXOTUAFZQQIMRDPEYTQTIXECRKGKEFSYLLDIGSKHVFRKUKLUPLSANAPDFWEEJYNWXJTQDOLBAA");

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
    msg.setTimeStamp(0.341664001642);
    msg.setSource(37164U);
    msg.setSourceEntity(186U);
    msg.setDestination(35677U);
    msg.setDestinationEntity(43U);
    msg.timeout = 32248U;
    msg.lat = 0.426077127512;
    msg.lon = 0.961669436631;
    msg.z = 0.675146649686;
    msg.z_units = 63U;
    msg.speed = 0.148887906199;
    msg.speed_units = 21U;
    msg.roll = 0.799724558594;
    msg.pitch = 0.434006904093;
    msg.yaw = 0.60638623137;
    msg.custom.assign("ZZKMGRLEHWEKUSHIOFGJVAKNYMJQTVPTSODELXYEANJGDIFSUBNQESQTWFGXRNXPGRUYTQVZQWEUISYWPFCTVITLMWZOUI");

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
    msg.setTimeStamp(0.214703951169);
    msg.setSource(29589U);
    msg.setSourceEntity(147U);
    msg.setDestination(46684U);
    msg.setDestinationEntity(174U);
    msg.timeout = 17751U;
    msg.lat = 0.689722497099;
    msg.lon = 0.28870026617;
    msg.z = 0.236613116906;
    msg.z_units = 194U;
    msg.speed = 0.754054092978;
    msg.speed_units = 59U;
    msg.duration = 17758U;
    msg.radius = 0.800748811036;
    msg.flags = 232U;
    msg.custom.assign("FAUUCRPGDHGEQPAOHSEARGHWUQVRVSTNERMLDJNQEMGPMBKCYCXXZZIYDUVBUYOYDHZNLJVXPKPZBPZNFWMZIEDTCANASQWSVSOTHPXZIWJXTBVROACBQSHEOKFNEGCCSPBYWSULANTQFOKRDHUVRTROFDLULZFLXKYNTIMDWNXJILMXKFEFMIDNJDXQRCEGQSYYWGLLHYJGJZ");

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
    msg.setTimeStamp(0.862133265826);
    msg.setSource(4032U);
    msg.setSourceEntity(22U);
    msg.setDestination(24041U);
    msg.setDestinationEntity(147U);
    msg.timeout = 49528U;
    msg.lat = 0.362269292466;
    msg.lon = 0.813553528216;
    msg.z = 0.978824738858;
    msg.z_units = 171U;
    msg.speed = 0.568032310047;
    msg.speed_units = 152U;
    msg.duration = 58741U;
    msg.radius = 0.877786787159;
    msg.flags = 109U;
    msg.custom.assign("GBWVYFOITTXLCQXEOLSPUHKRTHZRLWWKQHYDUTBMNVDFDTHDOCRAEJXCCOBXYOX");

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
    msg.setTimeStamp(0.872931096576);
    msg.setSource(8655U);
    msg.setSourceEntity(20U);
    msg.setDestination(33889U);
    msg.setDestinationEntity(153U);
    msg.timeout = 31851U;
    msg.lat = 0.20160723475;
    msg.lon = 0.0939833786248;
    msg.z = 0.183179090546;
    msg.z_units = 106U;
    msg.speed = 0.667190882057;
    msg.speed_units = 108U;
    msg.duration = 14738U;
    msg.radius = 0.179071308054;
    msg.flags = 26U;
    msg.custom.assign("NXFBHNUDNKVYDELIKLMPNADEJIBAJEMCCSHTSNCLGFUSGWCWHQNOHPWELMZIH");

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
    msg.setTimeStamp(0.535512192858);
    msg.setSource(28444U);
    msg.setSourceEntity(199U);
    msg.setDestination(16167U);
    msg.setDestinationEntity(118U);
    msg.custom.assign("FBPCWUQYMJSDBMOKSZSHKIMPJD");

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
    msg.setTimeStamp(0.867563585879);
    msg.setSource(38641U);
    msg.setSourceEntity(49U);
    msg.setDestination(51534U);
    msg.setDestinationEntity(52U);
    msg.custom.assign("BTLBUIBYFFORXSELROHKTXKESKAEDQAENMQAHTWCSWNOBTYJVJKYRUHFVAVCWUEACSZDSWMCDHJMPPYKOMXLKLWZTOLT");

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
    msg.setTimeStamp(0.316218578262);
    msg.setSource(41244U);
    msg.setSourceEntity(240U);
    msg.setDestination(938U);
    msg.setDestinationEntity(182U);
    msg.custom.assign("SHBMLMUXBTDGDTXWFPBVXSLPSNLHBALSEVDGIKYPLUYBJZKMCACGROPJWDOZWKIEPMYHLUROEOAQKCQVBXJURAKDFEAVDBJPFWCEYEIAJQIZSRBXMQRUAEQXYMXPKQPSHEYUWSVVULMHWONJRGIYZOBEYCNXSWZVOZYTTFGNQFMMQNWNAJFFHJIQDIWTHSCPRTVOHCRQGCVYHZOXFTZWCKXEGUZCTDS");

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
    msg.setTimeStamp(0.0593164067986);
    msg.setSource(48928U);
    msg.setSourceEntity(97U);
    msg.setDestination(31025U);
    msg.setDestinationEntity(8U);
    msg.timeout = 58463U;
    msg.lat = 0.544233751596;
    msg.lon = 0.324794999805;
    msg.z = 0.623624124716;
    msg.z_units = 109U;
    msg.duration = 21504U;
    msg.speed = 0.153558320786;
    msg.speed_units = 120U;
    msg.type = 191U;
    msg.radius = 0.245714728014;
    msg.length = 0.826887313786;
    msg.bearing = 0.750959030419;
    msg.direction = 69U;
    msg.custom.assign("LQQOCZBIUKHKESPPDPXYKGIMKVOXSERPOCUXCSNLNJXHKURUTFBCARHMGFEXZFVQVKIYUDHFCEAMOFDLUOPGEMJRGQMBTDVQJJCFYSAHPVNWQEMSSVRKFAWPNGILZLEXMTSOTPTSGPDIDBBCCGXROLOEVOZCHFRREFPYEZBTAQKGJNUYQAZHLMAZJNYAHXWWXDZRVNBWJDGUQNYDYBDJJSWLOINMRULAIXWHTGBNVFBSVTW");

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
    msg.setTimeStamp(0.351153945889);
    msg.setSource(27507U);
    msg.setSourceEntity(186U);
    msg.setDestination(54808U);
    msg.setDestinationEntity(215U);
    msg.timeout = 55681U;
    msg.lat = 0.195736579243;
    msg.lon = 0.28146003484;
    msg.z = 0.67372901907;
    msg.z_units = 131U;
    msg.duration = 12942U;
    msg.speed = 0.285594085092;
    msg.speed_units = 169U;
    msg.type = 130U;
    msg.radius = 0.0377326601152;
    msg.length = 0.625204005746;
    msg.bearing = 0.986563900663;
    msg.direction = 102U;
    msg.custom.assign("OYUUWHXLMTPAMQMXZCHDNLUESHQEIGOEPWACRDLVLIEYJKYTMVPAKFEKMVMRLQWVDYFFZMIFQIXVCZQAUMZBCWRWRSNOJXPFNHNIEKJGACEJHVUAONHWDWSRIZQLWFZSRAVGIHBKHKYAYBUPNNJDDJJROYSOYSPUPKOIPTBFCZMZZXXGSJUKDDSSBBXNGXULDZYAVRITTCANYRCPBXQGOGFKSFWKXTNOIQJQDHLBPEMOECUVQWRL");

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
    msg.setTimeStamp(0.239888369068);
    msg.setSource(6115U);
    msg.setSourceEntity(193U);
    msg.setDestination(24827U);
    msg.setDestinationEntity(134U);
    msg.timeout = 45660U;
    msg.lat = 0.198132352594;
    msg.lon = 0.848845478475;
    msg.z = 0.660297098955;
    msg.z_units = 65U;
    msg.duration = 14144U;
    msg.speed = 0.0918027758427;
    msg.speed_units = 241U;
    msg.type = 112U;
    msg.radius = 0.346729242034;
    msg.length = 0.486787630764;
    msg.bearing = 0.189644145925;
    msg.direction = 186U;
    msg.custom.assign("YBCJFTNFAOOLHHFBUSQEFLYLQMAS");

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
    msg.setTimeStamp(0.449580686892);
    msg.setSource(4757U);
    msg.setSourceEntity(119U);
    msg.setDestination(5918U);
    msg.setDestinationEntity(190U);
    msg.duration = 61600U;
    msg.custom.assign("BVJKQBUFFNZRFAYPZIWVJPMADIVGGXKVHHEPDDVOHCVMYXWDDJKQLFCJUYOLOCLWLKZUOSQDMDTDGROPYCKJOXYCXLHVGVDNFAIBMRWIRSAYHAXNSPWZPBHBGBZMLSNCZHFEVLIQEWSEASOUHNWWTTYCITLUUTTXUUOESYFCQABFKAFWLLNBOQXBMCAFEQRGMCIARRUGNETUKMYT");

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
    msg.setTimeStamp(0.835208118403);
    msg.setSource(38108U);
    msg.setSourceEntity(140U);
    msg.setDestination(2250U);
    msg.setDestinationEntity(90U);
    msg.duration = 3106U;
    msg.custom.assign("COWZTDBSYYDWJULJTFNMDZOZGJFSQTSZPFLFLWATMVXKJXVFKKKFNPPGUDMNMQRURAGDXWDFSUEGNEQPKODMKLXLKQVHONDNOEXTUPWWYLHNQBPECCEQFJFXWISVCUXEMPIIPAHAEQKRYZUTRWJDIBUKOYQGCDHUVTIEZBRFPSBVTWHGAO");

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
    msg.setTimeStamp(0.47542688831);
    msg.setSource(54914U);
    msg.setSourceEntity(74U);
    msg.setDestination(55207U);
    msg.setDestinationEntity(51U);
    msg.duration = 16822U;
    msg.custom.assign("CKUZDRRJQXNRZTLHMYNDEJGAGKXBWBREMMYCTRGTMQNTGGRBIVYKLLQCDDYOKW");

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
    msg.setTimeStamp(0.744017447389);
    msg.setSource(42067U);
    msg.setSourceEntity(131U);
    msg.setDestination(47231U);
    msg.setDestinationEntity(39U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.681641565033;
    msg.control.set(tmp_msg_0);
    msg.duration = 57404U;
    msg.custom.assign("EZAFEFAQSZUOBPSAMCFPNVZVTLCWJFODENGERLVNGXMXC");

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
    msg.setTimeStamp(0.89212288494);
    msg.setSource(62464U);
    msg.setSourceEntity(100U);
    msg.setDestination(42285U);
    msg.setDestinationEntity(119U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.208332481805;
    msg.control.set(tmp_msg_0);
    msg.duration = 45467U;
    msg.custom.assign("DJZHASINTQMXUHANEXRMFRPIUBOTUWQROWNDHZRXQQVZKFVYXBIKKSBWQRHOQHBGSTLOEGGCKPKEBWPWVMCTVJQZHKADSCETEFSLLQMKGDNBSZHKLCHZYWFGLVFVDDITKTSXCGILXXYMUTEEEBRCPUUZCYIQWJWSOWRJVZFXNRYPYJNOOMNIJBGIRPJLNVAGTMIJLPGKLDNLJUTUEPEMHVXAYSYAFM");

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
    msg.setTimeStamp(0.179410806393);
    msg.setSource(57795U);
    msg.setSourceEntity(163U);
    msg.setDestination(44298U);
    msg.setDestinationEntity(140U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.729958068879;
    msg.control.set(tmp_msg_0);
    msg.duration = 22769U;
    msg.custom.assign("FFONYUAHIQJEKQLSTKVBGKZJNGOXUBGUAQINZXWSLSCSGLJXPRTDVWEQMJMYBFKQRKFBESPAHJYBPVROTGSSHAGPYOQRAILVDCAOHZUOJ");

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
    msg.setTimeStamp(0.842447655584);
    msg.setSource(14727U);
    msg.setSourceEntity(110U);
    msg.setDestination(35564U);
    msg.setDestinationEntity(145U);
    msg.timeout = 59837U;
    msg.lat = 0.90080918891;
    msg.lon = 0.0148416595373;
    msg.z = 0.220761263915;
    msg.z_units = 61U;
    msg.speed = 0.00707960956209;
    msg.speed_units = 44U;
    msg.bearing = 0.288879236326;
    msg.cross_angle = 0.553824113348;
    msg.width = 0.388512761782;
    msg.length = 0.240030637764;
    msg.hstep = 0.780027482878;
    msg.coff = 15U;
    msg.alternation = 216U;
    msg.flags = 154U;
    msg.custom.assign("WPHIXWPAIVN");

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
    msg.setTimeStamp(0.562610127074);
    msg.setSource(46738U);
    msg.setSourceEntity(223U);
    msg.setDestination(39364U);
    msg.setDestinationEntity(80U);
    msg.timeout = 31925U;
    msg.lat = 0.489690793131;
    msg.lon = 0.992214280787;
    msg.z = 0.15466468405;
    msg.z_units = 53U;
    msg.speed = 0.928855082135;
    msg.speed_units = 204U;
    msg.bearing = 0.118287242956;
    msg.cross_angle = 0.82671208815;
    msg.width = 0.374669152932;
    msg.length = 0.00498529273228;
    msg.hstep = 0.624124032186;
    msg.coff = 6U;
    msg.alternation = 54U;
    msg.flags = 98U;
    msg.custom.assign("WXTCVKIGRIYRTZGPXGVBOQTOYZIVAUHRHCTQHDEVPLVAWSSJUHNYXLBAGWIDZSTKQIYUPMFUMDUGCWOEJHOFWZSESBBPFETDHZLKAPGMFXGZHYVEEDVKOLTYFNUAKSDAEDEZQWWXNIPJZQOGBSXEWDVIRPJNPIHLTBUTBOCCFJRUCFIDLULQYJLAXYMZOQJSWMFJHVCCKQKNMNOABRBGX");

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
    msg.setTimeStamp(0.117057453235);
    msg.setSource(39533U);
    msg.setSourceEntity(246U);
    msg.setDestination(59554U);
    msg.setDestinationEntity(106U);
    msg.timeout = 30234U;
    msg.lat = 0.799156235384;
    msg.lon = 0.389565107913;
    msg.z = 0.130805549629;
    msg.z_units = 220U;
    msg.speed = 0.59195358195;
    msg.speed_units = 110U;
    msg.bearing = 0.474019828114;
    msg.cross_angle = 0.913115417071;
    msg.width = 0.999741509169;
    msg.length = 0.714675574582;
    msg.hstep = 0.262587831487;
    msg.coff = 60U;
    msg.alternation = 70U;
    msg.flags = 202U;
    msg.custom.assign("PEWCIKONVBEXIWIVZFQXSVDUUXHNVJDPWLTAFENRTKTHYFWLAJDFUOGLOOMRMLTMMJAUBRXTEOJUCZOJPFMKKJKSQBSQGQYTPXHDVHAAYROTYPJNIAYHFZWIBCDWKLLGAVERFAGJOBOCSBVHDGLPXSCAWZXJGDNCCPLWFRARBUENZUSBUYYQVIKQCGZZGLULETYQDMZFQSEKEMMGBQSSVHUGFHBNCRPIHIIPIHTJPW");

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
    msg.setTimeStamp(0.694315862711);
    msg.setSource(16505U);
    msg.setSourceEntity(52U);
    msg.setDestination(63736U);
    msg.setDestinationEntity(180U);
    msg.timeout = 39864U;
    msg.lat = 0.950595541498;
    msg.lon = 0.15193057821;
    msg.z = 0.866276094745;
    msg.z_units = 21U;
    msg.speed = 0.560857702271;
    msg.speed_units = 107U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.533010436993;
    tmp_msg_0.y = 0.667701726238;
    tmp_msg_0.z = 0.885253524038;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KDDECBRXVVVILTNUFMMQYZZXJODNDQLFCGSRPLUDBBGVTZWSIDOOKTEYLYZPZXBUEZOBHKJIJSWSYOIJCDHFJYULKBVYBGKNUGNLWEQAXFTNSXNXJUMVMQMSPYRCRGMPRWGFOXS");

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
    msg.setTimeStamp(0.172076845312);
    msg.setSource(48492U);
    msg.setSourceEntity(164U);
    msg.setDestination(50307U);
    msg.setDestinationEntity(39U);
    msg.timeout = 26409U;
    msg.lat = 0.495792909067;
    msg.lon = 0.715867194882;
    msg.z = 0.909890649852;
    msg.z_units = 211U;
    msg.speed = 0.678885732685;
    msg.speed_units = 18U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7155551879;
    tmp_msg_0.y = 0.1602985126;
    tmp_msg_0.z = 0.572147372636;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PGYEJQKIMLMHJKTYFYULGNUKVRMUNSMEAQSYOMPCRMUFFRPAOXNQGUQFPDEJCONWFCOTEZHFSRXVHKBZELDOBPZDPNEWXQCDWHUAPJTXWZXKAVSSDKHGIVAZOVZRIPTXQBGIVYMITRAUJLUMOYEOJJXXBCHISAJNFLRGYFSWEPWBNCAQORWDQOUMBIYSWATAHLLTFRLNKJTCG");

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
    msg.setTimeStamp(0.894376308291);
    msg.setSource(33693U);
    msg.setSourceEntity(8U);
    msg.setDestination(15082U);
    msg.setDestinationEntity(209U);
    msg.timeout = 47450U;
    msg.lat = 0.940911253399;
    msg.lon = 0.11775480963;
    msg.z = 0.358214649507;
    msg.z_units = 99U;
    msg.speed = 0.90023190086;
    msg.speed_units = 137U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.932681923343;
    tmp_msg_0.y = 0.833576970625;
    tmp_msg_0.z = 0.15633952406;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KRLKGWHVMJJWJUIOEQ");

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
    msg.setTimeStamp(0.587455684225);
    msg.setSource(28859U);
    msg.setSourceEntity(76U);
    msg.setDestination(31213U);
    msg.setDestinationEntity(235U);
    msg.x = 0.724139669153;
    msg.y = 0.169504132118;
    msg.z = 0.30860058204;

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
    msg.setTimeStamp(0.677430864336);
    msg.setSource(62102U);
    msg.setSourceEntity(13U);
    msg.setDestination(6266U);
    msg.setDestinationEntity(110U);
    msg.x = 0.484445674794;
    msg.y = 0.634971059696;
    msg.z = 0.630494586597;

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
    msg.setTimeStamp(0.167793658762);
    msg.setSource(13032U);
    msg.setSourceEntity(245U);
    msg.setDestination(26672U);
    msg.setDestinationEntity(193U);
    msg.x = 0.988556230753;
    msg.y = 0.865478593152;
    msg.z = 0.416069189077;

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
    msg.setTimeStamp(0.84196581216);
    msg.setSource(32863U);
    msg.setSourceEntity(45U);
    msg.setDestination(62987U);
    msg.setDestinationEntity(219U);
    msg.timeout = 7725U;
    msg.lat = 0.886069057286;
    msg.lon = 0.579091163518;
    msg.z = 0.242223315211;
    msg.z_units = 82U;
    msg.amplitude = 0.823801750057;
    msg.pitch = 0.905131453941;
    msg.speed = 0.848221635285;
    msg.speed_units = 23U;
    msg.custom.assign("TOXSZILFDTKLAL");

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
    msg.setTimeStamp(0.554791164522);
    msg.setSource(1057U);
    msg.setSourceEntity(45U);
    msg.setDestination(61252U);
    msg.setDestinationEntity(21U);
    msg.timeout = 6067U;
    msg.lat = 0.536236930591;
    msg.lon = 0.27086154458;
    msg.z = 0.165769852794;
    msg.z_units = 10U;
    msg.amplitude = 0.280275851354;
    msg.pitch = 0.700551532488;
    msg.speed = 0.589437749164;
    msg.speed_units = 127U;
    msg.custom.assign("ZYRPQASSYFTPEAAXAHYDDQHOJURVUKTCKLMFLQEEPPEWQHMOUDOTQFRCZXAJGFHGIPSGNJRWYBWQHFOYPFLYLGZIMUKDNQRTDUTJSCKYJ");

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
    msg.setTimeStamp(0.681855081396);
    msg.setSource(8601U);
    msg.setSourceEntity(53U);
    msg.setDestination(61951U);
    msg.setDestinationEntity(29U);
    msg.timeout = 5982U;
    msg.lat = 0.334712389326;
    msg.lon = 0.518667327901;
    msg.z = 0.59156471501;
    msg.z_units = 141U;
    msg.amplitude = 0.762736106079;
    msg.pitch = 0.689098136247;
    msg.speed = 0.117513516473;
    msg.speed_units = 54U;
    msg.custom.assign("NDZKGEZOUTXJGMHVXASHGYDFDELBSQUOHJRRNWEKCSPVKFZLMXARDOXWHMMGHENYZXCTILWPBYYVTRLSYWXTTIDUVFV");

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
    msg.setTimeStamp(0.469494549797);
    msg.setSource(42283U);
    msg.setSourceEntity(168U);
    msg.setDestination(8645U);
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
    msg.setTimeStamp(0.75534792067);
    msg.setSource(40708U);
    msg.setSourceEntity(124U);
    msg.setDestination(2171U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.247494383929);
    msg.setSource(24402U);
    msg.setSourceEntity(2U);
    msg.setDestination(14243U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.321100124288);
    msg.setSource(12035U);
    msg.setSourceEntity(196U);
    msg.setDestination(39408U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.982717851732;
    msg.lon = 0.584209709798;
    msg.z = 0.702169665752;
    msg.z_units = 41U;
    msg.radius = 0.28830990354;
    msg.duration = 22751U;
    msg.speed = 0.772086830404;
    msg.speed_units = 184U;
    msg.custom.assign("CLETJDGSQMTQPIVTWBSYHKIMDTZVAJKUGLGJAXIBYLVDQWUWOCZOMHVBWAYREYGPWNYMSWFOMVSAIPJSCRFQPPDA");

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
    msg.setTimeStamp(0.838286691678);
    msg.setSource(12359U);
    msg.setSourceEntity(204U);
    msg.setDestination(21173U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.772320973274;
    msg.lon = 0.18565123792;
    msg.z = 0.968542793119;
    msg.z_units = 45U;
    msg.radius = 0.484109316313;
    msg.duration = 33938U;
    msg.speed = 0.6510474442;
    msg.speed_units = 167U;
    msg.custom.assign("NLLTDOCTRVUFVYNDFFEWOEHAHYJPNDARMDZPAVFSUYQSACOJUNPRKQGXBQPKEOPCFSMBYEPBMZTCICHMXFFNWTLBNUIHHYVMZODPWRXXOEGDSEXSBTCJHIFPAJDBG");

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
    msg.setTimeStamp(0.83656674383);
    msg.setSource(63953U);
    msg.setSourceEntity(161U);
    msg.setDestination(23796U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.711278241768;
    msg.lon = 0.562649938405;
    msg.z = 0.117571741347;
    msg.z_units = 105U;
    msg.radius = 0.308356084938;
    msg.duration = 2169U;
    msg.speed = 0.652231602581;
    msg.speed_units = 151U;
    msg.custom.assign("BUNMHTIAAOFUWHRJPPLRUGTETPMJTIGWOXLAYGGJCWJEZYCPEVLSGVLCDZOPRYRZBXKHYSIBFUVYZVXMTGSFRZFVLYTVWQHNUKNXWHNBQBPDJBHSYQEKCEAZNPBVNGADUIKSJYLNOVAFFJWLVJMSNQCDCJEUISTAHMQEBHUHRIGGZKQSOWGONKSAXDFDKYLLDMMXMBQOQAHTKLYKPUMDZQWJAXCFFEIEOWPSRION");

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
    msg.setTimeStamp(0.120938004339);
    msg.setSource(39115U);
    msg.setSourceEntity(1U);
    msg.setDestination(36273U);
    msg.setDestinationEntity(65U);
    msg.timeout = 41535U;
    msg.flags = 100U;
    msg.lat = 0.755343970676;
    msg.lon = 0.961525877099;
    msg.start_z = 0.30339312345;
    msg.start_z_units = 8U;
    msg.end_z = 0.701732682981;
    msg.end_z_units = 171U;
    msg.radius = 0.878731440296;
    msg.speed = 0.672574639923;
    msg.speed_units = 147U;
    msg.custom.assign("PBDNKISFYMZSHAAOZNFSCBYKOVYPVCWDSMWUDOMVVRCGWBIGQENNUSATAQSPRNTISGHKVTSLRWDPYBZXNCQAFRBCAPJQLIBBBYJKJRFHCUHTFJOOMAXMMLZVDLETWPEGRLORKNODJFHXOEHUZHCUVPZQZTGWIRWAXYYNMHOFQLXSGXUI");

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
    msg.setTimeStamp(0.571870311945);
    msg.setSource(2960U);
    msg.setSourceEntity(239U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(140U);
    msg.timeout = 21821U;
    msg.flags = 153U;
    msg.lat = 0.497848190234;
    msg.lon = 0.390920431194;
    msg.start_z = 0.615466610898;
    msg.start_z_units = 70U;
    msg.end_z = 0.730215496729;
    msg.end_z_units = 201U;
    msg.radius = 0.913665184019;
    msg.speed = 0.893631679742;
    msg.speed_units = 180U;
    msg.custom.assign("ZVDFPCTWHHINCWUQRKPMCJZJTUOSHHCYHFYZZELZAFIXGNXGQSKBEZBZSKLTAVXWPAOUVKFDACNSOYTIKBQVQOAJADQNCFMYMWQFHLITGEGPPEFSZCVUCAKBEPYJNLOSJXCRPMNXYYJGLZJZQUOXFBIRTFKDAMLIDOPBWTMNUVEOQRBHUBSXSRLSOOLMGKVXPCBWUNYRQRTJGDXMUWEERGDWHA");

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
    msg.setTimeStamp(0.336296333197);
    msg.setSource(64569U);
    msg.setSourceEntity(124U);
    msg.setDestination(64092U);
    msg.setDestinationEntity(201U);
    msg.timeout = 32366U;
    msg.flags = 87U;
    msg.lat = 0.0614884653514;
    msg.lon = 0.345290997544;
    msg.start_z = 0.181211581764;
    msg.start_z_units = 190U;
    msg.end_z = 0.0459261351536;
    msg.end_z_units = 67U;
    msg.radius = 0.675240594354;
    msg.speed = 0.108147060284;
    msg.speed_units = 119U;
    msg.custom.assign("VRPAXXKFEHIGLQNXKJGUFHCRIIAPOHPMSNXNZAOOARSFEFKBUJJMLPGVSEDABEUSVTHMRJVILZDNXGTQOYZQAIJHUWQCSLKEYKQR");

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
    msg.setTimeStamp(0.0773261538378);
    msg.setSource(49450U);
    msg.setSourceEntity(207U);
    msg.setDestination(52678U);
    msg.setDestinationEntity(191U);
    msg.timeout = 48052U;
    msg.lat = 0.950986493044;
    msg.lon = 0.703378428045;
    msg.z = 0.323876527702;
    msg.z_units = 124U;
    msg.speed = 0.712180957073;
    msg.speed_units = 196U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0943372368827;
    tmp_msg_0.y = 0.541467594794;
    tmp_msg_0.z = 0.598718463528;
    tmp_msg_0.t = 0.347971937667;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OMHOAWTVKYYYDMZECQLGPGVAMOYCQBJHRLHJMHVUKDHUYFTBITPFNVYSXFTSYDWVAAFQWBYGBWERUQKPEWRQQFNJPUCWGZFEWVXFOJKJRGRNIQTPURNMZVMSMESENIPIBRHJLDGWKGBBJZVCOHVZCZSPKDXECDRKSOAYXLZOBUPNARGOUIHLWEZHJDKFTEFQTOIBZSIJL");

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
    msg.setTimeStamp(0.0155172512798);
    msg.setSource(4088U);
    msg.setSourceEntity(87U);
    msg.setDestination(48205U);
    msg.setDestinationEntity(171U);
    msg.timeout = 16809U;
    msg.lat = 0.372806922743;
    msg.lon = 0.234326922012;
    msg.z = 0.123280701884;
    msg.z_units = 69U;
    msg.speed = 0.285266166088;
    msg.speed_units = 48U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.251915309421;
    tmp_msg_0.y = 0.927715108262;
    tmp_msg_0.z = 0.440546158734;
    tmp_msg_0.t = 0.438389244147;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UCLVGBMJORPHLYBSYZYIXMNKWVNUOIEZLPGRLRVQQETMGXNXZKQCVMRUKXRIZEAWVYUZTYNHAQRDSEZKSEBJTGTZWXATXZCHQYQLGZSPRMPIAFGXCRFLUTDIHWRCQVUFGMOXVVPUNMEUJMIDBFLKLHOSBEYDTDMDPLVFJAUCZDQBLIKTNJNAOSRWEKNHMAHDTANK");

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
    msg.setTimeStamp(0.408038471923);
    msg.setSource(16758U);
    msg.setSourceEntity(159U);
    msg.setDestination(24531U);
    msg.setDestinationEntity(119U);
    msg.timeout = 34639U;
    msg.lat = 0.44025568388;
    msg.lon = 0.935989282961;
    msg.z = 0.480298426859;
    msg.z_units = 80U;
    msg.speed = 0.574539483294;
    msg.speed_units = 243U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.961207562894;
    tmp_msg_0.y = 0.330502686789;
    tmp_msg_0.z = 0.029412428968;
    tmp_msg_0.t = 0.581123002576;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OYUKGGZRQPKKBRNZVFEPDXQJUVFYLXPCMJWQSTWWWQESPOOEHUDMHIBUNLTOASAPKYNDBJEIGQDLRZZHLDSFVEWBKSVRAVPSGYJBRYSNPTTNVMSCPWYLCDOOIUFYFJGEXHITFJOHDUHZAZFSMIDMGTLFJAWNTWIXUARURVWIDRKTHSYXZMZBWXBM");

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
    msg.setTimeStamp(0.773102825481);
    msg.setSource(61051U);
    msg.setSourceEntity(205U);
    msg.setDestination(32791U);
    msg.setDestinationEntity(197U);
    msg.x = 0.4747745849;
    msg.y = 0.251204291368;
    msg.z = 0.390492573757;
    msg.t = 0.674393618968;

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
    msg.setTimeStamp(0.682904441729);
    msg.setSource(28480U);
    msg.setSourceEntity(30U);
    msg.setDestination(18774U);
    msg.setDestinationEntity(60U);
    msg.x = 0.481183899332;
    msg.y = 0.0827279087515;
    msg.z = 0.0132660394034;
    msg.t = 0.336818840514;

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
    msg.setTimeStamp(0.286436886125);
    msg.setSource(80U);
    msg.setSourceEntity(203U);
    msg.setDestination(56238U);
    msg.setDestinationEntity(101U);
    msg.x = 0.84762075351;
    msg.y = 0.845561060647;
    msg.z = 0.381533816667;
    msg.t = 0.1358536465;

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
    msg.setTimeStamp(0.189799363987);
    msg.setSource(53386U);
    msg.setSourceEntity(134U);
    msg.setDestination(7885U);
    msg.setDestinationEntity(222U);
    msg.timeout = 57292U;
    msg.name.assign("KWBGDPVLMRMFWQMLROXGEOBKZFTSHDTNCQXOIZLIPAKRDBXVRXUUAAYYHQJWAZUTQFDEDKYUTKPJORMRBXJTNDFOCUNJEMWDAJYJSFVFPUENGFBRCBIGETGNOPVGXOPINEUQYQSGASMTPWTVLHIFXZDMN");
    msg.custom.assign("PVTKLBRTCEPJXXFUBVCMJIKSQNCKKYJJWKKSVDWFACOYDARICQZFTNCRBHJRKPLPF");

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
    msg.setTimeStamp(0.506101330068);
    msg.setSource(62227U);
    msg.setSourceEntity(179U);
    msg.setDestination(42834U);
    msg.setDestinationEntity(83U);
    msg.timeout = 52138U;
    msg.name.assign("OBTSBRYYOROFVCYZAMVELQPGJIOZFCDUMQOVGNBNOCAFHJOSQQWGKVKUMHBJCZVLSFMUREZTRSNFHYMDKPFLFLXQQAAVHTBXCAUSHIASBVAWDLBMPGUXYNDPZYOKLCLKNGWQAGKJOUTZLVUOPKWARGFEKZNBUWMGYJIMJTRRISEIBZNVDHHSEWBQCPWGXQZJWSJICVHIJACXYNIHUEWGCTDTXXIPNRNPYUXLQDTFDXKM");
    msg.custom.assign("QGOAZNVMVRYGUXAEXKCOQOVEPTJCOJALDLLRPDATJWHGGWQRXXSBIKCHBTMJFETADNKIQEPVQEPCELUYULSHTHQIEGALKZXKPWGEQFOWFGAACBILDXCIJJQBUDSPPTDJPUFHILNMHVDGUSOOHNDWZKNKHUYTRCWCAUFKNGJONZSYHFAFWSLZCTZPBYQMJVRFIMEBSWPVUNRZZKWMWBSVFICYXZHZVOE");

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
    msg.setTimeStamp(0.379918916099);
    msg.setSource(59562U);
    msg.setSourceEntity(241U);
    msg.setDestination(23560U);
    msg.setDestinationEntity(75U);
    msg.timeout = 46198U;
    msg.name.assign("LKNGCMEMOBLREGAEPPTAIDIWSGSVJYVWFRVYENFHKUHWDTIRDFMEKUCWNTXRFZDXUJTKDAOSSZPHYFZOUFCQXBZLCPXCBXMRBSNCCYBNSAPPDJGLRJTUNBUGJQIWHYFLOVJSYLJEITSNODGAXXMZGXWQOXRMZIAVWEIKRXTVWGKHCIPFJDGOALLPJDGTZYAKFL");
    msg.custom.assign("OUDTYCZOKJYRAAX");

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
    msg.setTimeStamp(0.163992714842);
    msg.setSource(38192U);
    msg.setSourceEntity(254U);
    msg.setDestination(45175U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.00990667478285;
    msg.lon = 0.894147171585;
    msg.z = 0.00783488017561;
    msg.z_units = 39U;
    msg.speed = 0.324996875872;
    msg.speed_units = 31U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40035U;
    tmp_msg_0.off_x = 0.386650291755;
    tmp_msg_0.off_y = 0.859766891673;
    tmp_msg_0.off_z = 0.875995383562;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.11201897081;
    msg.custom.assign("OCMJSTYTDSHKURTANJDKFUIRXTZPIJJZSWBWJCWINBMLAYENEEPKBCCKHXEHMZSOCPLFYYKZFMOSWIOLXUSAUDVVWXACGRSVXITQDYLGYRBFNWUDXRRQJOXNYIULWHCQUQFRMPTTZBCLFMDEKNYDOBJJVLVRLGTODCQBGQXAWNNCBKVMTQHOTGVAHPFPQGKZQIEGZRGLPY");

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
    msg.setTimeStamp(0.316713556578);
    msg.setSource(34433U);
    msg.setSourceEntity(214U);
    msg.setDestination(42247U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.150914686207;
    msg.lon = 0.613712811137;
    msg.z = 0.074319597493;
    msg.z_units = 76U;
    msg.speed = 0.522702469979;
    msg.speed_units = 96U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.70093586326;
    tmp_msg_0.y = 0.947559725344;
    tmp_msg_0.z = 0.725431334849;
    tmp_msg_0.t = 0.0552138187067;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.618516104475;
    msg.custom.assign("PLMGIZDMRNZHALXCIGBULZUFNMFSUKHZVEYPYORULQIFETQ");

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
    msg.setTimeStamp(0.588136815054);
    msg.setSource(14800U);
    msg.setSourceEntity(76U);
    msg.setDestination(52886U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.792063720829;
    msg.lon = 0.154822379596;
    msg.z = 0.973106785704;
    msg.z_units = 128U;
    msg.speed = 0.278013202636;
    msg.speed_units = 32U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53886U;
    tmp_msg_0.off_x = 0.550870258696;
    tmp_msg_0.off_y = 0.0311154735793;
    tmp_msg_0.off_z = 0.0926680924394;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.386676826869;
    msg.custom.assign("MBNSKTQJGBRZPGOPTMCCOOTHHFTVUSPGEUDNXLCPJWUIWJBQMASQVTGUCNMIFHSWGNSYJSMQOTJDQKPAHBRRPOOPBLVUHMCBUPENQLEGBAZDHLQUKWYYEKLHJYVAQZLVYWRERFNZRZSOHFIWVXWVAXFLHLSJPFHNAMY");

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
    msg.setTimeStamp(0.455012742282);
    msg.setSource(8964U);
    msg.setSourceEntity(61U);
    msg.setDestination(21779U);
    msg.setDestinationEntity(188U);
    msg.vid = 24440U;
    msg.off_x = 0.626730274698;
    msg.off_y = 0.24732493112;
    msg.off_z = 0.888911541324;

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
    msg.setTimeStamp(0.802398071285);
    msg.setSource(56840U);
    msg.setSourceEntity(249U);
    msg.setDestination(12431U);
    msg.setDestinationEntity(233U);
    msg.vid = 7526U;
    msg.off_x = 0.262531479908;
    msg.off_y = 0.0906718027494;
    msg.off_z = 0.682670021185;

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
    msg.setTimeStamp(0.436725871668);
    msg.setSource(58921U);
    msg.setSourceEntity(212U);
    msg.setDestination(45413U);
    msg.setDestinationEntity(77U);
    msg.vid = 26428U;
    msg.off_x = 0.364430094461;
    msg.off_y = 0.22604903831;
    msg.off_z = 0.889660886218;

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
    msg.setTimeStamp(0.884088549719);
    msg.setSource(38708U);
    msg.setSourceEntity(153U);
    msg.setDestination(52773U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.433436956597);
    msg.setSource(12356U);
    msg.setSourceEntity(156U);
    msg.setDestination(14744U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.561388700835);
    msg.setSource(3845U);
    msg.setSourceEntity(223U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.514271642853);
    msg.setSource(1094U);
    msg.setSourceEntity(12U);
    msg.setDestination(61732U);
    msg.setDestinationEntity(167U);
    msg.mid = 63895U;

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
    msg.setTimeStamp(0.349084418901);
    msg.setSource(54389U);
    msg.setSourceEntity(134U);
    msg.setDestination(27153U);
    msg.setDestinationEntity(117U);
    msg.mid = 23833U;

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
    msg.setTimeStamp(0.0795861640784);
    msg.setSource(7627U);
    msg.setSourceEntity(62U);
    msg.setDestination(56213U);
    msg.setDestinationEntity(27U);
    msg.mid = 7905U;

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
    msg.setTimeStamp(0.533511880257);
    msg.setSource(46142U);
    msg.setSourceEntity(57U);
    msg.setDestination(15719U);
    msg.setDestinationEntity(84U);
    msg.state = 45U;
    msg.eta = 18254U;
    msg.info.assign("KXBINDDXVPGLFQNWIHFYJPKYRCUTCYELAUYFEVCFUITILCRJBOMLNERQEGSFYSVUHZFQBZYNMVXWSUOUUSGZHNRQADUXOMTOWJLTBRWCSQZKUTWDCBOLHZTBEJJPHDQJFPBFPVKQRXCAEKINSGXGXEPRTVDMLKIZHKTTAKSIXGQBEQSV");

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
    msg.setTimeStamp(0.641366202253);
    msg.setSource(2422U);
    msg.setSourceEntity(239U);
    msg.setDestination(45222U);
    msg.setDestinationEntity(247U);
    msg.state = 210U;
    msg.eta = 3892U;
    msg.info.assign("KGUCTEPYWAOFKMXVPPWQGSPANUENAOVNUOTZFRBBKSGNVBTGBUZPYCLWEATOLYDOFJSJRHKEWBMMAYVXCCDIMYZBIASPRCLOHAHDKMQFCQELXBDLMOVUCIUMQOLKJHXYZNRSETELFHMPDRFHSAUNIJJZVLPXVHDHNKWQXYXDQRHXGQEDTVZBXJKZYGNCMUJNIOQLUWKGGGTCJGBUDRFISJMTYFZXEFWQIWQWZIPPIO");

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
    msg.setTimeStamp(0.114869763724);
    msg.setSource(32915U);
    msg.setSourceEntity(171U);
    msg.setDestination(53516U);
    msg.setDestinationEntity(108U);
    msg.state = 227U;
    msg.eta = 54094U;
    msg.info.assign("YLIFYJIKLFGDOWHWGFQNATQDPONXLQJMRMUHRASDMXPBLNDVVAUDTJPJQNFBJPOGXZVBZAKIHUUOMWADEXTSZJUFIFWPIBZTEENB");

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
    msg.setTimeStamp(0.915056157706);
    msg.setSource(43119U);
    msg.setSourceEntity(126U);
    msg.setDestination(36501U);
    msg.setDestinationEntity(152U);
    msg.system = 4067U;
    msg.duration = 41016U;
    msg.speed = 0.247978770004;
    msg.speed_units = 153U;
    msg.x = 0.819251991079;
    msg.y = 0.00839116857917;
    msg.z = 0.714564518372;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.843014310803);
    msg.setSource(52622U);
    msg.setSourceEntity(107U);
    msg.setDestination(21113U);
    msg.setDestinationEntity(203U);
    msg.system = 14240U;
    msg.duration = 41898U;
    msg.speed = 0.0476379442468;
    msg.speed_units = 103U;
    msg.x = 0.353349098983;
    msg.y = 0.405957413207;
    msg.z = 0.15536867473;
    msg.z_units = 85U;

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
    msg.setTimeStamp(0.45312699565);
    msg.setSource(11585U);
    msg.setSourceEntity(196U);
    msg.setDestination(60455U);
    msg.setDestinationEntity(119U);
    msg.system = 15434U;
    msg.duration = 41849U;
    msg.speed = 0.29017622411;
    msg.speed_units = 116U;
    msg.x = 0.170237689712;
    msg.y = 0.433921932528;
    msg.z = 0.907062706325;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.489153858065);
    msg.setSource(18437U);
    msg.setSourceEntity(22U);
    msg.setDestination(35316U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.0536813161055;
    msg.lon = 0.936678099742;
    msg.speed = 0.309727180061;
    msg.speed_units = 102U;
    msg.duration = 56799U;
    msg.sys_a = 1447U;
    msg.sys_b = 17601U;
    msg.move_threshold = 0.377475456424;

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
    msg.setTimeStamp(0.488546000415);
    msg.setSource(45683U);
    msg.setSourceEntity(245U);
    msg.setDestination(38936U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.880184992556;
    msg.lon = 0.328046501203;
    msg.speed = 0.0631711821637;
    msg.speed_units = 9U;
    msg.duration = 43250U;
    msg.sys_a = 29573U;
    msg.sys_b = 38341U;
    msg.move_threshold = 0.0565595201253;

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
    msg.setTimeStamp(0.551009882615);
    msg.setSource(43261U);
    msg.setSourceEntity(214U);
    msg.setDestination(37060U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.371853581323;
    msg.lon = 0.781568449346;
    msg.speed = 0.305352238451;
    msg.speed_units = 52U;
    msg.duration = 4505U;
    msg.sys_a = 42193U;
    msg.sys_b = 61996U;
    msg.move_threshold = 0.994043902234;

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
    msg.setTimeStamp(0.00700963640379);
    msg.setSource(50410U);
    msg.setSourceEntity(32U);
    msg.setDestination(20932U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.789688468823;
    msg.lon = 0.303127921522;
    msg.z = 0.0379529716015;
    msg.z_units = 119U;
    msg.speed = 0.737708318477;
    msg.speed_units = 172U;
    msg.custom.assign("WVFSNBAZKPDKSZDCEUXBFPRQCBVSIKLUNIEXWRZVPXXELAXXCYABACWOGJZHRQYAISWRBRMHOXNEDJDDCUTNTEPHSCEPRQXVOGJJTLDRZBABZZUGDWMMVJQTHZSFGGYUSJSUFHTNMYZOKGAMPGNTOIFMUCWYHHSTVYPBFMOJJGLOTIKYWFQTP");

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
    msg.setTimeStamp(0.986983146772);
    msg.setSource(19990U);
    msg.setSourceEntity(178U);
    msg.setDestination(52924U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.379831807788;
    msg.lon = 0.692915904011;
    msg.z = 0.76469022881;
    msg.z_units = 250U;
    msg.speed = 0.759023951107;
    msg.speed_units = 216U;
    msg.custom.assign("FGHCKTLASSKGNMRMTDFJPSXAZUICHZXBOWORGNDUXLTRBVUJBXCVIYRLPPQZOWLATLVFXNKGXSXBYWSIBLQBZOCMUZQKNJZYZFNICUPRWVKKKGVDDESZCDTVTGCDUYQOIUNQAZEVWLOGEAPQRFMEEJUOBPYWFKQHHLYKDOGDHHKAUWEQIGIPHREUHXFOYLZLPNMXRPATBTXAA");

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
    msg.setTimeStamp(0.948220134909);
    msg.setSource(44238U);
    msg.setSourceEntity(222U);
    msg.setDestination(30560U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.206462377475;
    msg.lon = 0.314453748623;
    msg.z = 0.703462298002;
    msg.z_units = 141U;
    msg.speed = 0.750156321424;
    msg.speed_units = 229U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.632944002333;
    tmp_msg_0.lon = 0.593834756334;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WXUKWPLJEGNKRKHE");

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
    msg.setTimeStamp(0.788403273584);
    msg.setSource(61818U);
    msg.setSourceEntity(190U);
    msg.setDestination(16804U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.738353106001;
    msg.lon = 0.725329580466;

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
    msg.setTimeStamp(0.0227762440169);
    msg.setSource(51624U);
    msg.setSourceEntity(54U);
    msg.setDestination(56095U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.644450420957;
    msg.lon = 0.910635267226;

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
    msg.setTimeStamp(0.932666488319);
    msg.setSource(35091U);
    msg.setSourceEntity(196U);
    msg.setDestination(50043U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.328339357283;
    msg.lon = 0.20531028951;

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
    msg.setTimeStamp(0.327919887375);
    msg.setSource(8272U);
    msg.setSourceEntity(229U);
    msg.setDestination(39712U);
    msg.setDestinationEntity(128U);
    msg.timeout = 57746U;
    msg.lat = 0.705223699555;
    msg.lon = 0.245111074556;
    msg.z = 0.30926683164;
    msg.z_units = 165U;
    msg.pitch = 0.311172717278;
    msg.amplitude = 0.729112713009;
    msg.duration = 8400U;
    msg.speed = 0.829585280356;
    msg.speed_units = 182U;
    msg.radius = 0.557325374336;
    msg.direction = 116U;
    msg.custom.assign("LSJJMCYBPXSOCNXRYNNGUKQJXOTGFZJWGFQEXUBVWVRLVDKAJEYPUTZGWDNHPFSVMIUVRKRVZFLMBSYTZEJAPXPIEWWWZBFJVFWKNEQQGNGXVDMZIBQPHBTMXIFCWDOMEEVPBDKUSYMNCRRLOXDWVXYKHBHLOHTJAHELDANYQJZLRZTSYOLUATIKQCRCHKSJUTIDAESOMN");

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
    msg.setTimeStamp(0.67242485537);
    msg.setSource(56936U);
    msg.setSourceEntity(147U);
    msg.setDestination(62836U);
    msg.setDestinationEntity(131U);
    msg.timeout = 8677U;
    msg.lat = 0.537317931131;
    msg.lon = 0.00443596389352;
    msg.z = 0.666474275724;
    msg.z_units = 222U;
    msg.pitch = 0.632214807255;
    msg.amplitude = 0.84247546888;
    msg.duration = 48U;
    msg.speed = 0.238173270821;
    msg.speed_units = 213U;
    msg.radius = 0.696629953518;
    msg.direction = 22U;
    msg.custom.assign("VYBXFHFCQGQFHHMOYZAFWUOSHEEVNLMAWMDAGIFKOIGDXZKSHZLNYTVNPLQIVNINCCHIDUJVHEHRLBKRMSFWJBKGZEZVYBGLDETLLREEOPNKQUWSYEURAWOMMOKRCZCXQXJXBSPXXJFUCQRAPAYJYAJICVOTOSSBPGZXTBDTKIBFCPZYQJXLFOZWHTDTPWBAKJDWQQPPSSNNTBKSQVTRYEDDTMFLNEVPRAZGICGJU");

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
    msg.setTimeStamp(0.493120676301);
    msg.setSource(65430U);
    msg.setSourceEntity(202U);
    msg.setDestination(160U);
    msg.setDestinationEntity(62U);
    msg.timeout = 49111U;
    msg.lat = 0.964518341084;
    msg.lon = 0.901239568029;
    msg.z = 0.91202276232;
    msg.z_units = 204U;
    msg.pitch = 0.920456951378;
    msg.amplitude = 0.952185480097;
    msg.duration = 6613U;
    msg.speed = 0.785814721881;
    msg.speed_units = 193U;
    msg.radius = 0.807503735378;
    msg.direction = 186U;
    msg.custom.assign("XYUZZAJGMJPFKZEMKXZQDFVLOJMFHNFKIPRSOMSWXEWGSUNNB");

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
    msg.setTimeStamp(0.951370786098);
    msg.setSource(16448U);
    msg.setSourceEntity(178U);
    msg.setDestination(50758U);
    msg.setDestinationEntity(242U);
    msg.formation_name.assign("ZMCKQAEWORDBLCQDBWKTOYFSFSJKVKAUGVEOAAXYOLWNWYXWMOXUPNZLZPCROMMEMYCQRYLFLWPCYPHCXMPCVCH");
    msg.reference_frame = 33U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61371U;
    tmp_msg_0.off_x = 0.144505295662;
    tmp_msg_0.off_y = 0.442212431073;
    tmp_msg_0.off_z = 0.290401302831;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TLSNXMHLEGXWYPFYRMKQKRUSKWANGYREKJEHOFCMNDTECVHMIZHGZNUVCLZVPUMNGERZLWBWVXXSCFXTXYKOLIZRBBTGIYQNAFFJPGWOBPWXQMRYLTWETUGIQNYKCEFDLFNHOLCKPVJYBEVBDKDZCAVDKMCFAQOJRFIBCOPHUULHDQSDSAVGYZIDAUAZIACXWDEHFZODUSSYPJTIMMQQJWLUBJBORJISPGMNQBRPANRGAXJHZVSTEOIWOPUQH");

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
    msg.setTimeStamp(0.893943520542);
    msg.setSource(39354U);
    msg.setSourceEntity(95U);
    msg.setDestination(31547U);
    msg.setDestinationEntity(38U);
    msg.formation_name.assign("DXUORWYMGOMCQZUOIKESXCEXFRWQYMBPZEPAAAKJRGCUNJLGLNSEBZJBVVEINEHTRNBIEZVCYGHYXKWQAVCLFXBRKSIBTOZZAIKHHAHFAWQTUMNJTWGGPITDYPGWCPYLRK");
    msg.reference_frame = 186U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4808U;
    tmp_msg_0.off_x = 0.0240208610344;
    tmp_msg_0.off_y = 0.821274152636;
    tmp_msg_0.off_z = 0.82543070854;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TYBHTHQQEKPOQLWKITCMTMSASTQVMNVYXXDTGAODBBZANKCPKJCWOUFEGYGNFIHRYQQQPPRWKPYJBOVJWIERNGJHYNJCZADFSIXIUBBXWOSTTSARSHOILKANFDRSDPYMZYZJCLVQGRKWZSBREIWTFOZBANSCFGQLDERXEGMHZWOKVKIHAHBCDIFLUUUECRLMGPGSCVJUOFPVJUEWNYDEPYEIJLZXNAV");

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
    msg.setTimeStamp(0.901853812342);
    msg.setSource(25200U);
    msg.setSourceEntity(18U);
    msg.setDestination(55549U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("SFRKQUHJUNLDKBRWXZVIJGCHPMQESOJNTQHFLNWDZYKRMAIFVMASLBDTDMFPGWCDBIREGZCYLZQRTFVEOIMSPLPVNSOJKOFMTGJUMWPBWDHYVEIOHVCXDCKQJNENKGEJVIFIATAJDPXXWCXUQBLNAUZLSSQTYHNNAMFQSZZHERGQK");
    msg.reference_frame = 209U;
    msg.custom.assign("VBSEPUDNDJJFE");

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
    msg.setTimeStamp(0.188762670981);
    msg.setSource(18007U);
    msg.setSourceEntity(191U);
    msg.setDestination(7478U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("OKUYIZXRIXCDHERKVHCTVUSJJCVSDDO");
    msg.formation_name.assign("GSQFAAUXIVAROOMGVBQPTWDNEUCSBXBZUZJNCFDHBFNNDJIYZDFFJWNEKNPTIMKUWV");
    msg.plan_id.assign("LRTWAHFNMTEKMLMCPYZIAWRSBIYKXCUAIYUDYOKAXDDKMQLJTVEJACPHFZXTKNVOPTGMKJOURWBVLDARAFESNTYNHRFDBSWAX");
    msg.description.assign("YAWDBPCENUXIUZPKPWBFOSLMOAWNAYKADFTDUVVLYDLUTLCSCMALHHFJGNJCXIBLHNOFKFIIKQEOQRLPEKCZYFHUMFXUTMGSSXRAQB");
    msg.leader_speed = 0.179280589045;
    msg.leader_bank_lim = 0.158890267478;
    msg.pos_sim_err_lim = 0.701346526722;
    msg.pos_sim_err_wrn = 0.578989809043;
    msg.pos_sim_err_timeout = 65315U;
    msg.converg_max = 0.586204482757;
    msg.converg_timeout = 63968U;
    msg.comms_timeout = 58830U;
    msg.turb_lim = 0.578590550353;
    msg.custom.assign("KGSJUCWTMQVQMMOTBFNTKHUQHWRSRMAQVOOYMZUBXDZZQXQUPZKCPNDTZRKAEFJSZUHHJDGVPYHWAXMKIUHEAUULIGHTPLCCBBPIADQMFTDDVEABQSXK");

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
    msg.setTimeStamp(0.890871079089);
    msg.setSource(13327U);
    msg.setSourceEntity(109U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("ZOUBQODTAENSUBTCHYEKCDWIJOEXIQTUHARPTTWQIMAVWCBVCWCWNEHXZOVFJEQCNSMBODRKMUDLGHYXJYJCNAFURYJDFMEHXHQBXPKSCVUSFAGGDJGZKRMWUBVTCKKLEBCFQQKHLVIRNTNPOOYLBXIFVUFGVOZBZELDVPSWGISXNZDYSQMILRUHYFHRRJVPYG");
    msg.formation_name.assign("YPWDBCMRNSZIAHQBKNQLTFSSOPJUCOABQPKWTRHQZBFGUCHJVXTURDEAFEARLPCKXYHYSHDARVRIMLCXJGGO");
    msg.plan_id.assign("YTIIXRLMDUMPQWSNRMIYFKTLIJYLJKNNCEXGEBLLDJOQKBSSZECJVQAJPUUGKVQGTVCLVFUTKCOKGJOZIYUGCMGXTSCXREQ");
    msg.description.assign("NXCOZIETBTUAPDQYREBGBESJFYSJS");
    msg.leader_speed = 0.984288767825;
    msg.leader_bank_lim = 0.495282425992;
    msg.pos_sim_err_lim = 0.594829053153;
    msg.pos_sim_err_wrn = 0.613446080355;
    msg.pos_sim_err_timeout = 38595U;
    msg.converg_max = 0.0339423445116;
    msg.converg_timeout = 16675U;
    msg.comms_timeout = 26240U;
    msg.turb_lim = 0.469597100313;
    msg.custom.assign("BYFADIGLHCDWEKPEZCLJNTTQZNSFPMXOAVQCUHPOCXWYIHPQEKRMMEORRXQJZRJDOREONYLSFQSKPCDVOQYOKDMPIFZDVILUZADGLRLTUSKLLENSRFTBUEBWWXMFBQISSXPBMKCKWMBYUJSGBOQABCHENHYHUIJHYPLXHDVZRWBMJGTYAGXKASPCXXGTTYOZVWNGXQJFZWECRKFIHDEYKIP");

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
    msg.setTimeStamp(0.0700604933879);
    msg.setSource(42263U);
    msg.setSourceEntity(80U);
    msg.setDestination(25577U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("LIWBRPGJPLUGWXCJSCIEVVWWZOKKXYTEUQLQSBMYPQALIFAWDGQXIANQKSJNZIBOEPPANFWVRJDEMBKNDTVXINCMVAMNWRSGY");
    msg.formation_name.assign("DBTHHPJVOPXCGZQFEWXWPCMHBQCZECRKGWCPODUPSRCGSMWZIRXNQZJFDJKFQSAJMFULFAKL");
    msg.plan_id.assign("NEHOHYSFFCBMYUOTPKHYGHZRUBLVVSJKVGBYSSOAGOHUBHQIXOJQNTIJVUDNKZWYATBNGDYLJFPKYCDNQCUXMZQROCGUMELMMRIKBSEVPNROSCHDBVYWLQNFWDJLJIWFSYRYBTGZAWOPRSXIELUW");
    msg.description.assign("LIPDEHLCKUPOYQYEUHQCYRUG");
    msg.leader_speed = 0.0651251704487;
    msg.leader_bank_lim = 0.587572397474;
    msg.pos_sim_err_lim = 0.135951471406;
    msg.pos_sim_err_wrn = 0.784904988452;
    msg.pos_sim_err_timeout = 44847U;
    msg.converg_max = 0.310561854605;
    msg.converg_timeout = 35813U;
    msg.comms_timeout = 5135U;
    msg.turb_lim = 0.258123378681;
    msg.custom.assign("MFQHAPQZUTXSCPNZZKJRBETVLIMHSXIQDRJLLUGHVKGFJYBSRNHWCHWATJNAWTWQRSQZDLJWYAAUELIE");

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
    msg.setTimeStamp(0.842580463149);
    msg.setSource(64546U);
    msg.setSourceEntity(29U);
    msg.setDestination(22062U);
    msg.setDestinationEntity(67U);
    msg.control_src = 46673U;
    msg.control_ent = 13U;
    msg.timeout = 0.00928601947689;
    msg.loiter_radius = 0.0798343077369;
    msg.altitude_interval = 0.636671806612;

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
    msg.setTimeStamp(0.835807518686);
    msg.setSource(7176U);
    msg.setSourceEntity(191U);
    msg.setDestination(55524U);
    msg.setDestinationEntity(51U);
    msg.control_src = 56532U;
    msg.control_ent = 134U;
    msg.timeout = 0.688310670528;
    msg.loiter_radius = 0.449177677714;
    msg.altitude_interval = 0.2500053549;

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
    msg.setTimeStamp(0.403396831659);
    msg.setSource(65294U);
    msg.setSourceEntity(168U);
    msg.setDestination(33051U);
    msg.setDestinationEntity(98U);
    msg.control_src = 13867U;
    msg.control_ent = 193U;
    msg.timeout = 0.493080063134;
    msg.loiter_radius = 0.0627004526606;
    msg.altitude_interval = 0.398471728294;

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
    msg.setTimeStamp(0.781448195784);
    msg.setSource(37989U);
    msg.setSourceEntity(129U);
    msg.setDestination(52974U);
    msg.setDestinationEntity(7U);
    msg.flags = 62U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.717644463482;
    tmp_msg_0.speed_units = 248U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.639004113329;
    tmp_msg_1.z_units = 237U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0522077716022;
    msg.lon = 0.718417824198;
    msg.radius = 0.929633087295;

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
    msg.setTimeStamp(0.0319510219447);
    msg.setSource(3807U);
    msg.setSourceEntity(48U);
    msg.setDestination(46473U);
    msg.setDestinationEntity(132U);
    msg.flags = 71U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.98967094878;
    tmp_msg_0.speed_units = 95U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.829509543821;
    tmp_msg_1.z_units = 40U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0186576466021;
    msg.lon = 0.339643563766;
    msg.radius = 0.811065600316;

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
    msg.setTimeStamp(0.320334856998);
    msg.setSource(38766U);
    msg.setSourceEntity(231U);
    msg.setDestination(53317U);
    msg.setDestinationEntity(135U);
    msg.flags = 196U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.134357504257;
    tmp_msg_0.speed_units = 79U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.66841130306;
    tmp_msg_1.z_units = 107U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.567710567334;
    msg.lon = 0.529835713898;
    msg.radius = 0.645683212684;

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
    msg.setTimeStamp(0.672147915881);
    msg.setSource(31103U);
    msg.setSourceEntity(16U);
    msg.setDestination(9372U);
    msg.setDestinationEntity(157U);
    msg.control_src = 41873U;
    msg.control_ent = 246U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 0U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.349470450993;
    tmp_tmp_msg_0_0.speed_units = 241U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0423027679754;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.467918447272;
    tmp_msg_0.lon = 0.0346305699348;
    tmp_msg_0.radius = 0.387787915873;
    msg.reference.set(tmp_msg_0);
    msg.state = 69U;
    msg.proximity = 137U;

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
    msg.setTimeStamp(0.17762284088);
    msg.setSource(44310U);
    msg.setSourceEntity(49U);
    msg.setDestination(2928U);
    msg.setDestinationEntity(44U);
    msg.control_src = 30849U;
    msg.control_ent = 229U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 246U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.901846030515;
    tmp_tmp_msg_0_0.speed_units = 204U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.76112839902;
    tmp_tmp_msg_0_1.z_units = 106U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.805758758802;
    tmp_msg_0.lon = 0.00286898932898;
    tmp_msg_0.radius = 0.105987453686;
    msg.reference.set(tmp_msg_0);
    msg.state = 190U;
    msg.proximity = 150U;

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
    msg.setTimeStamp(0.804246039673);
    msg.setSource(16563U);
    msg.setSourceEntity(38U);
    msg.setDestination(29094U);
    msg.setDestinationEntity(221U);
    msg.control_src = 41048U;
    msg.control_ent = 100U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 130U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0482159332757;
    tmp_tmp_msg_0_0.speed_units = 76U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.476467747796;
    tmp_tmp_msg_0_1.z_units = 102U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.127705213491;
    tmp_msg_0.lon = 0.219391051543;
    tmp_msg_0.radius = 0.192366454326;
    msg.reference.set(tmp_msg_0);
    msg.state = 61U;
    msg.proximity = 244U;

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
    msg.setTimeStamp(0.889418005087);
    msg.setSource(52716U);
    msg.setSourceEntity(141U);
    msg.setDestination(43828U);
    msg.setDestinationEntity(36U);
    msg.ax_cmd = 0.206213724135;
    msg.ay_cmd = 0.191904527101;
    msg.az_cmd = 0.627927140485;
    msg.ax_des = 0.115075270952;
    msg.ay_des = 0.46170453826;
    msg.az_des = 0.98428011385;
    msg.virt_err_x = 0.528781899969;
    msg.virt_err_y = 0.205366209082;
    msg.virt_err_z = 0.423622763078;
    msg.surf_fdbk_x = 0.631213270082;
    msg.surf_fdbk_y = 0.472071286691;
    msg.surf_fdbk_z = 0.199090242121;
    msg.surf_unkn_x = 0.112646622553;
    msg.surf_unkn_y = 0.517554243075;
    msg.surf_unkn_z = 0.464438254783;
    msg.ss_x = 0.78296082947;
    msg.ss_y = 0.0312674225505;
    msg.ss_z = 0.295471272293;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LPJAUKXZCHSVXTRNGYKCD");
    tmp_msg_0.dist = 0.277772106111;
    tmp_msg_0.err = 0.919151159907;
    tmp_msg_0.ctrl_imp = 0.114310019467;
    tmp_msg_0.rel_dir_x = 0.851557945536;
    tmp_msg_0.rel_dir_y = 0.1783506216;
    tmp_msg_0.rel_dir_z = 0.101504200341;
    tmp_msg_0.err_x = 0.289878509891;
    tmp_msg_0.err_y = 0.598968472991;
    tmp_msg_0.err_z = 0.747305553778;
    tmp_msg_0.rf_err_x = 0.894032407729;
    tmp_msg_0.rf_err_y = 0.0526948243117;
    tmp_msg_0.rf_err_z = 0.332738950756;
    tmp_msg_0.rf_err_vx = 0.700255996797;
    tmp_msg_0.rf_err_vy = 0.40799544459;
    tmp_msg_0.rf_err_vz = 0.700407576626;
    tmp_msg_0.ss_x = 0.167966271201;
    tmp_msg_0.ss_y = 0.239006335672;
    tmp_msg_0.ss_z = 0.955498683301;
    tmp_msg_0.virt_err_x = 0.772719614045;
    tmp_msg_0.virt_err_y = 0.301228486224;
    tmp_msg_0.virt_err_z = 0.790078604945;
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
    msg.setTimeStamp(0.965202520695);
    msg.setSource(18090U);
    msg.setSourceEntity(21U);
    msg.setDestination(57162U);
    msg.setDestinationEntity(17U);
    msg.ax_cmd = 0.944472069727;
    msg.ay_cmd = 0.773855358957;
    msg.az_cmd = 0.569724574378;
    msg.ax_des = 0.0242291405952;
    msg.ay_des = 0.794101955961;
    msg.az_des = 0.363911643362;
    msg.virt_err_x = 0.90769728308;
    msg.virt_err_y = 0.374597959471;
    msg.virt_err_z = 0.200876873724;
    msg.surf_fdbk_x = 0.971271716226;
    msg.surf_fdbk_y = 0.381009418602;
    msg.surf_fdbk_z = 0.100900623907;
    msg.surf_unkn_x = 0.735197173862;
    msg.surf_unkn_y = 0.815822271007;
    msg.surf_unkn_z = 0.921229635381;
    msg.ss_x = 0.407582268516;
    msg.ss_y = 0.79600548323;
    msg.ss_z = 0.239665725728;

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
    msg.setTimeStamp(0.494415122663);
    msg.setSource(58020U);
    msg.setSourceEntity(231U);
    msg.setDestination(44121U);
    msg.setDestinationEntity(145U);
    msg.ax_cmd = 0.744167901729;
    msg.ay_cmd = 0.447424601635;
    msg.az_cmd = 0.826397629851;
    msg.ax_des = 0.369889455826;
    msg.ay_des = 0.701841402365;
    msg.az_des = 0.259607712212;
    msg.virt_err_x = 0.0296542015539;
    msg.virt_err_y = 0.478973241722;
    msg.virt_err_z = 0.343096030443;
    msg.surf_fdbk_x = 0.636408054842;
    msg.surf_fdbk_y = 0.482028966688;
    msg.surf_fdbk_z = 0.604412275421;
    msg.surf_unkn_x = 0.12891597299;
    msg.surf_unkn_y = 0.0518066945044;
    msg.surf_unkn_z = 0.12483362599;
    msg.ss_x = 0.73574986787;
    msg.ss_y = 0.597027462172;
    msg.ss_z = 0.977032278882;

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
    msg.setTimeStamp(0.115968458069);
    msg.setSource(12775U);
    msg.setSourceEntity(123U);
    msg.setDestination(25214U);
    msg.setDestinationEntity(203U);
    msg.s_id.assign("NAHUNBYCEWGGUIKEMOLIZTWLXAGNFCBJDIAPFBSOTGSTLRNGURIDZMRMQMCKQFUBKNYXNFS");
    msg.dist = 0.738659086536;
    msg.err = 0.583661014428;
    msg.ctrl_imp = 0.811344168637;
    msg.rel_dir_x = 0.842216251452;
    msg.rel_dir_y = 0.697659914439;
    msg.rel_dir_z = 0.0232980599881;
    msg.err_x = 0.29989437973;
    msg.err_y = 0.20381419283;
    msg.err_z = 0.792091904143;
    msg.rf_err_x = 0.272166665839;
    msg.rf_err_y = 0.576485036059;
    msg.rf_err_z = 0.942639646525;
    msg.rf_err_vx = 0.155271708921;
    msg.rf_err_vy = 0.0214777555164;
    msg.rf_err_vz = 0.385344672551;
    msg.ss_x = 0.952779223784;
    msg.ss_y = 0.500452685403;
    msg.ss_z = 0.765650837469;
    msg.virt_err_x = 0.895765033844;
    msg.virt_err_y = 0.33341207225;
    msg.virt_err_z = 0.0985903816873;

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
    msg.setTimeStamp(0.462276975344);
    msg.setSource(42592U);
    msg.setSourceEntity(56U);
    msg.setDestination(47761U);
    msg.setDestinationEntity(155U);
    msg.s_id.assign("YQRVEQUUWODLWYUPIHDHEPXZYCMOBVFWHFNUIGUISJSPEHTNSA");
    msg.dist = 0.60924298189;
    msg.err = 0.715503026339;
    msg.ctrl_imp = 0.81277724213;
    msg.rel_dir_x = 0.425010157122;
    msg.rel_dir_y = 0.425241043077;
    msg.rel_dir_z = 0.212723683937;
    msg.err_x = 0.991800537539;
    msg.err_y = 0.23501803949;
    msg.err_z = 0.274935265919;
    msg.rf_err_x = 0.314677352744;
    msg.rf_err_y = 0.00346135324467;
    msg.rf_err_z = 0.972414962091;
    msg.rf_err_vx = 0.254663817761;
    msg.rf_err_vy = 0.589806889799;
    msg.rf_err_vz = 0.521151515832;
    msg.ss_x = 0.650473576242;
    msg.ss_y = 0.618554564645;
    msg.ss_z = 0.407345243192;
    msg.virt_err_x = 0.325960704759;
    msg.virt_err_y = 0.587525666503;
    msg.virt_err_z = 0.625359053314;

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
    msg.setTimeStamp(0.677653687059);
    msg.setSource(34767U);
    msg.setSourceEntity(192U);
    msg.setDestination(410U);
    msg.setDestinationEntity(213U);
    msg.s_id.assign("ESZPPLBXHDBFVUQZATQSIAQ");
    msg.dist = 0.636259446974;
    msg.err = 0.629101245746;
    msg.ctrl_imp = 0.843711727892;
    msg.rel_dir_x = 0.227159300715;
    msg.rel_dir_y = 0.136455594074;
    msg.rel_dir_z = 0.664975405796;
    msg.err_x = 0.341316724284;
    msg.err_y = 0.287266443091;
    msg.err_z = 0.420944823621;
    msg.rf_err_x = 0.752956155313;
    msg.rf_err_y = 0.425168351224;
    msg.rf_err_z = 0.54572092163;
    msg.rf_err_vx = 0.356913645499;
    msg.rf_err_vy = 0.128695868308;
    msg.rf_err_vz = 0.750980502386;
    msg.ss_x = 0.298888457725;
    msg.ss_y = 0.960723411474;
    msg.ss_z = 0.206206041196;
    msg.virt_err_x = 0.244565849502;
    msg.virt_err_y = 0.431879084878;
    msg.virt_err_z = 0.329521485445;

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
    msg.setTimeStamp(0.81557927699);
    msg.setSource(28840U);
    msg.setSourceEntity(198U);
    msg.setDestination(10407U);
    msg.setDestinationEntity(146U);
    msg.timeout = 43625U;
    msg.rpm = 0.222192475629;
    msg.direction = 116U;
    msg.custom.assign("WBMWGQASOWNVCLTYHANVLXV");

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
    msg.setTimeStamp(0.913321086999);
    msg.setSource(6668U);
    msg.setSourceEntity(42U);
    msg.setDestination(26013U);
    msg.setDestinationEntity(196U);
    msg.timeout = 52548U;
    msg.rpm = 0.564952571041;
    msg.direction = 10U;
    msg.custom.assign("BWRKURJNLEDBBSVNLMPESXTXPTECDLMLPBKNUUOJBJOHGDQQLQWHVHPZAMYMSJCMVPIUJPLHTGDCHSVZSJAZOBYIWKOJRYSIAJCGVXAGHXNTIVMELOKRCUDWAKCEVDIXTDMNWPORPXLYEYFXUIESBQTGKFQZYZOIYWHFUNDSQFGCMURJFZRARPKTVOSFWQPEWNGKKZXHHNWICIALTBFFRQQUADSBMVROVNTLJNKHFTUYZAQZ");

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
    msg.setTimeStamp(0.284951719232);
    msg.setSource(53916U);
    msg.setSourceEntity(114U);
    msg.setDestination(20936U);
    msg.setDestinationEntity(30U);
    msg.timeout = 56238U;
    msg.rpm = 0.0731925131484;
    msg.direction = 179U;
    msg.custom.assign("JGKZVBWWNKNKGAGFWMRVTSMALWQQQINDANTMPGSSGRSKONPTISJKRNEZGYPIIPXKAXHEPLNHECPZKZPQQBHQXJFCLFAJEASDFTSXGZHTIFEULLRQOTIOANDIEBRVZGZHDVDXTQGJSVYOJMWYMKNLRBUQEN");

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
    msg.setTimeStamp(0.722777882952);
    msg.setSource(29662U);
    msg.setSourceEntity(9U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(162U);
    msg.formation_name.assign("BKEJKEQBFPJCSKMBWIOHEKUSVEDMMYYZHCIBNCTCMBMXPWULMIPZRSMLXXXHSHDUPXRFBRTNUGGDYXVESGEAVGQPTRXPKVQOSXGVKLWQUKPNMRAGLRKGZAJMKDCGGW");
    msg.type = 184U;
    msg.op = 222U;
    msg.group_name.assign("GDVYWDBMPFYFSEZDNOIZW");
    msg.plan_id.assign("ZWXOXUSWKJWPJVPCAUNQDYARURGNHKFCMRUYGAOEGYMXEVLDPMIZTCFSVHOSWOKYCVMJHBUGHPJDMCVPLCKHBJVEOSLJCJNQLTTWXQQXBJKXVWOBKZFLASQVEDQKXHZLPCHYYEDKYFOIBWPYBGWBXUSAPQ");
    msg.description.assign("ICSIFWZQWROSZGZHNHHOUOMYBLBEFLLYETRIIBIXVPK");
    msg.reference_frame = 123U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26296U;
    tmp_msg_0.off_x = 0.955294114663;
    tmp_msg_0.off_y = 0.112635175979;
    tmp_msg_0.off_z = 0.235424111014;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.189880981999;
    msg.leader_speed_min = 0.170455770295;
    msg.leader_speed_max = 0.318251969439;
    msg.leader_alt_min = 0.843064035461;
    msg.leader_alt_max = 0.873957759616;
    msg.pos_sim_err_lim = 0.250997034637;
    msg.pos_sim_err_wrn = 0.526505990791;
    msg.pos_sim_err_timeout = 32102U;
    msg.converg_max = 0.406854038439;
    msg.converg_timeout = 12285U;
    msg.comms_timeout = 6436U;
    msg.turb_lim = 0.513210186274;
    msg.custom.assign("CUFEKWCJGKFFQBUADOUTIAMSXJMFAQJKIAYRNIDEJZYIPLZEEXXOCKSHQFOEWSGPNUMHCWIKTANZGAWCUSCYOGFPRXVIVWLVSUTVRELMBVSINCVXWLDZZYETJMQHRGAXEZIZDBBYEQIQNLMNYFQYDOPSBKBRXXITUYTOPFTGOHUJXDJOFPCWZDSVGLSJQBNRGCTHHRMHAUBDXOKUWVQRYAHDTZWMGFPYZLHNKLPPDBKCVHBRMKVOPMANRGEJ");

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
    msg.setTimeStamp(0.022285801725);
    msg.setSource(1608U);
    msg.setSourceEntity(119U);
    msg.setDestination(35064U);
    msg.setDestinationEntity(169U);
    msg.formation_name.assign("YYLWUAIGBBOYKHSIYRZRRWJBTJZPJBAFDPGGGDIIRTNUAVGPOOYMCMZKQGWDVPDCGISHQNLVQZDTBOXZWCYPTLVDHCQKBLQDVBMSEVUERVKLATQBZLTJTNZZPZXRNONWFJEJMKADCGHATZSHCIHUXUKRHFORNAENJCAWVSBHQMXLEPPII");
    msg.type = 90U;
    msg.op = 67U;
    msg.group_name.assign("TYCWSHHEZQQCSEUJVJOAXDUHQCMREYZKRTKXJPOESNCSLMYBKURILBYQDHLLGIJTBQYZYBLKJKRQINFDCAMVVSFNWTQAEDOVNSVXCITGCMFUTPZABRORWFDJIHWYXADMBIUWW");
    msg.plan_id.assign("LZXWMGZAXZAWBWGVFTRBFRBOREWIIPUUXULZRZOCMDOAJVDPIYGAFRLLGRWNKYEIVGGVPAHPPQTXNIDIQCDOGOKUSGUMIIHTSSUHYMXEYHLVNNLLPCQDJWZBLPEJCEBJMFXLHVBXAWKHTUSJIFNEDKUTACSJSMXNTXNXCTUSKRRVQNMWGEJRNKTHJOKQEOZBWOJQDEEJBFVF");
    msg.description.assign("EBCLLVTMJNYGDCTWJXXXOHGDSFFIMQWZHBKJAXZLNCYVSAVCMCSRUFHCMXSYRQPRFLUPOCBNETAWEUQZRIZBXTJGVHGWLWWVDRKSNDOZIQNJTDSTJQGIXAETRUENOCFKYEACVTIVQMVTUYLQBOKMUHOWNXWDZEYPOKIBYYNQIIGFUQZHSDRJJDRPRIZAZDRSBEVVOEMAMLUYNGGQPYJZUHSLMHFFPLPKBKALTWFAGODFXXNGKPSJHMBWKH");
    msg.reference_frame = 47U;
    msg.leader_bank_lim = 0.598354056862;
    msg.leader_speed_min = 0.876147899343;
    msg.leader_speed_max = 0.0054979667626;
    msg.leader_alt_min = 0.346330286633;
    msg.leader_alt_max = 0.876203597161;
    msg.pos_sim_err_lim = 0.820456642256;
    msg.pos_sim_err_wrn = 0.748818609205;
    msg.pos_sim_err_timeout = 37437U;
    msg.converg_max = 0.907212989165;
    msg.converg_timeout = 59477U;
    msg.comms_timeout = 23283U;
    msg.turb_lim = 0.733575549235;
    msg.custom.assign("OEZRUABXJAULXEGORMTTZNWZNFKVXAIHTAWCMESNRLBNAJUIUCDSRHYBSVBAQYLVNZGIFBYTIRJSYIQHK");

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
    msg.setTimeStamp(0.810894952453);
    msg.setSource(59554U);
    msg.setSourceEntity(247U);
    msg.setDestination(16197U);
    msg.setDestinationEntity(117U);
    msg.formation_name.assign("GPIVRCGFZUQCAYXXPIHQUECRPXVTBNJXHFNMBSQPUWLB");
    msg.type = 207U;
    msg.op = 206U;
    msg.group_name.assign("VUTLCXDPRPCZVVPJDWIOFQRRLEJAMZGWIQHRLHDQCSKXGPIMBWSPBBCRDLHFCMHFGE");
    msg.plan_id.assign("YDNSNZDUCRKQFMOCKTOGAOYKPMUZMTFULQBCVAIQALGPJRECIBZGFHERUNVEXGBQGOIHPVHO");
    msg.description.assign("VKLXLABQJWLYNGHJNCFVDCYLMJFCUXMAWIXTTZYGWOIRAVZSJCHTKJPWJGDWNNDOQHUQEBBMTPISRUTLZDIZAPBCDYOQZCZLEVPFVHKSSMMPQXHKAFWPYUHBWNAKBLPJDVQGFQUGESRFNQWPWXVFJROBXFDRUMFMEYUOKYAGRGCIMYASHDSZWZHEUCLCDBGVO");
    msg.reference_frame = 95U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2624U;
    tmp_msg_0.off_x = 0.0796461213258;
    tmp_msg_0.off_y = 0.0220452787705;
    tmp_msg_0.off_z = 0.745759360771;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.316559597511;
    msg.leader_speed_min = 0.843702109461;
    msg.leader_speed_max = 0.0745926366757;
    msg.leader_alt_min = 0.55656456225;
    msg.leader_alt_max = 0.528960009752;
    msg.pos_sim_err_lim = 0.726891373485;
    msg.pos_sim_err_wrn = 0.854154023781;
    msg.pos_sim_err_timeout = 32858U;
    msg.converg_max = 0.923147991194;
    msg.converg_timeout = 36075U;
    msg.comms_timeout = 30617U;
    msg.turb_lim = 0.7939446104;
    msg.custom.assign("WGHAPDQUPOAXMPWQZNVCJEQEOVOAPIBYNSQFOOBYAPKUDECVHWVNMVYZXKFPIFBMGSTHUKVTNTJBIUETNHJSSCWJZQDNZEKGJULIIYPJLDKKNYICDMIHZAMHPAQGSGXLXUDMIZYVLPWWUBHBXKDGUTZWFRBGQTMLTHKYVHELBNYRCFSGZCCWWCQDLOMFBCMXGIARFRRME");

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
    msg.setTimeStamp(0.580652450607);
    msg.setSource(31014U);
    msg.setSourceEntity(24U);
    msg.setDestination(60741U);
    msg.setDestinationEntity(149U);
    msg.timeout = 36546U;
    msg.lat = 0.70660329801;
    msg.lon = 0.824838813945;
    msg.z = 0.757212668295;
    msg.z_units = 230U;
    msg.speed = 0.237122125939;
    msg.speed_units = 252U;
    msg.custom.assign("PTIFOUVESQAIZFVQJPHCJXKNSXKUAQFNEKELOZLNEWIELXABSOFPYLORNLUMGREYDQZQALDRJVVIZUAWTHDGMFBCCMIZKODJHISPJZUREOUHXXHZB");

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
    msg.setTimeStamp(0.388966475043);
    msg.setSource(7469U);
    msg.setSourceEntity(148U);
    msg.setDestination(53595U);
    msg.setDestinationEntity(66U);
    msg.timeout = 55294U;
    msg.lat = 0.176231535836;
    msg.lon = 0.742484843575;
    msg.z = 0.827825412623;
    msg.z_units = 210U;
    msg.speed = 0.383958486739;
    msg.speed_units = 58U;
    msg.custom.assign("UCBUTXLSAFKBNLFHVZVWJPTFQSMLPEGTFEJQGZQNORADXEMGHTKULRMBJFMBLHOYTPGARLDMZDSIOOWNSJTCMWVBCVVWYQMMBDXAQXXNKA");

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
    msg.setTimeStamp(0.316985862832);
    msg.setSource(43105U);
    msg.setSourceEntity(53U);
    msg.setDestination(47548U);
    msg.setDestinationEntity(4U);
    msg.timeout = 55075U;
    msg.lat = 0.438202888307;
    msg.lon = 0.927593671959;
    msg.z = 0.516828841093;
    msg.z_units = 107U;
    msg.speed = 0.581337883582;
    msg.speed_units = 158U;
    msg.custom.assign("TCOHBNEWTSDXJBSEZZUXLLWKXLBYBEPPYGKPVYGXXEBYNJOWSKSYKQMJIDGUVCZFIWGIJTGSJQCBHJTZVGXVERUUFAAVHRDKUNXMNVCRCOMQZEOAIDUBMSCAOKPONXMLNISAPLUROUDOHPFDWEVHQMCNCAOBFTSKHJLIRYYPIBGIREQMZZJFYBTRHNVCQUTGPHHWQKMZYFXFSCRADHX");

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
    msg.setTimeStamp(0.63262641704);
    msg.setSource(50885U);
    msg.setSourceEntity(232U);
    msg.setDestination(20932U);
    msg.setDestinationEntity(201U);
    msg.timeout = 50790U;
    msg.lat = 0.714589646624;
    msg.lon = 0.150725098388;
    msg.z = 0.512178940895;
    msg.z_units = 189U;
    msg.speed = 0.135785868369;
    msg.speed_units = 226U;
    msg.custom.assign("FGRQWGYAKNTERLAHZCHODAQECJMHQYTXMKIYWKCACJIRDSRLPVIQANVXTNWELPPONDIYO");

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
    msg.setTimeStamp(0.266928164484);
    msg.setSource(12102U);
    msg.setSourceEntity(124U);
    msg.setDestination(35657U);
    msg.setDestinationEntity(133U);
    msg.timeout = 5546U;
    msg.lat = 0.456695645688;
    msg.lon = 0.937214355387;
    msg.z = 0.418281470952;
    msg.z_units = 147U;
    msg.speed = 0.463334759153;
    msg.speed_units = 188U;
    msg.custom.assign("AGBZDJARBMBTVNOKFSXIEUCOCNMYLHVPOJBCWABTTUCEKJDXQRAKMGNJXSUUYNRNDW");

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
    msg.setTimeStamp(0.268449214111);
    msg.setSource(32539U);
    msg.setSourceEntity(105U);
    msg.setDestination(51027U);
    msg.setDestinationEntity(117U);
    msg.timeout = 59672U;
    msg.lat = 0.756098147722;
    msg.lon = 0.173210418708;
    msg.z = 0.159774003865;
    msg.z_units = 82U;
    msg.speed = 0.895045233646;
    msg.speed_units = 123U;
    msg.custom.assign("DOHVQCNEQCPPSZJLJBOJSOGKVJHR");

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
    msg.setTimeStamp(0.0840989681644);
    msg.setSource(41173U);
    msg.setSourceEntity(41U);
    msg.setDestination(40241U);
    msg.setDestinationEntity(39U);
    msg.arrival_time = 0.429717700008;
    msg.lat = 0.71240851781;
    msg.lon = 0.284805928919;
    msg.z = 0.892290021026;
    msg.z_units = 107U;
    msg.travel_z = 0.910688343743;
    msg.travel_z_units = 167U;
    msg.delayed = 118U;

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
    msg.setTimeStamp(0.510091926712);
    msg.setSource(38471U);
    msg.setSourceEntity(45U);
    msg.setDestination(16498U);
    msg.setDestinationEntity(147U);
    msg.arrival_time = 0.681014663568;
    msg.lat = 0.761025885643;
    msg.lon = 0.134090984765;
    msg.z = 0.607467743319;
    msg.z_units = 111U;
    msg.travel_z = 0.289844096631;
    msg.travel_z_units = 160U;
    msg.delayed = 110U;

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
    msg.setTimeStamp(0.860650537007);
    msg.setSource(65381U);
    msg.setSourceEntity(71U);
    msg.setDestination(12000U);
    msg.setDestinationEntity(0U);
    msg.arrival_time = 0.759376042168;
    msg.lat = 0.39583062492;
    msg.lon = 0.449513211344;
    msg.z = 0.637704098051;
    msg.z_units = 131U;
    msg.travel_z = 0.82610532095;
    msg.travel_z_units = 41U;
    msg.delayed = 119U;

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
    msg.setTimeStamp(0.297559264944);
    msg.setSource(3175U);
    msg.setSourceEntity(4U);
    msg.setDestination(42105U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.948194809726;
    msg.lon = 0.161897479423;
    msg.z = 0.879351798059;
    msg.z_units = 44U;
    msg.speed = 0.241984413857;
    msg.speed_units = 232U;
    msg.bearing = 0.40285678731;
    msg.cross_angle = 0.12490278875;
    msg.width = 0.0255790838418;
    msg.length = 0.940205708992;
    msg.coff = 17U;
    msg.angaperture = 0.986535489101;
    msg.range = 65505U;
    msg.overlap = 138U;
    msg.flags = 156U;
    msg.custom.assign("FHGDSMAXZFHFHMNKIJUOTEXFAWUQSQOETECWZQVOAOSZZNHYAEFAXACJOXATXQNPVSDYEYEPGWUNVTVRPTJMBFCGLOLONYFFEDBKCNWKKZZJDKMUXAVSYRZJLPILCSINZPHGGISZWMIXMRALMPLBXWDCXQYGVBBGJQCUDSVZDBHRCOLURHJKEJXQ");

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
    msg.setTimeStamp(0.448120978937);
    msg.setSource(20827U);
    msg.setSourceEntity(38U);
    msg.setDestination(63251U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.329030394764;
    msg.lon = 0.0241569509602;
    msg.z = 0.153673377331;
    msg.z_units = 144U;
    msg.speed = 0.365257489081;
    msg.speed_units = 169U;
    msg.bearing = 0.165786086751;
    msg.cross_angle = 0.886237108635;
    msg.width = 0.722861492974;
    msg.length = 0.093569355917;
    msg.coff = 102U;
    msg.angaperture = 0.915684690386;
    msg.range = 20503U;
    msg.overlap = 172U;
    msg.flags = 78U;
    msg.custom.assign("HHAYKRHJYQODYBEAOKVESLBAFQLWJZMTZUIIRSLVKOJTPKZETTKHUXIPIFODRTYRPUFYTHVUMHBMSJLUCYONNKQHPGVAQFMGTVPZPQKECXYPUUMDZZLSDISSFARWMQCWLYUAMOICIWXHQGFLNWODVNJSMUXOJRN");

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
    msg.setTimeStamp(0.894846828817);
    msg.setSource(30372U);
    msg.setSourceEntity(204U);
    msg.setDestination(10100U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.393775403381;
    msg.lon = 0.999031927731;
    msg.z = 0.130361179229;
    msg.z_units = 55U;
    msg.speed = 0.285698049334;
    msg.speed_units = 225U;
    msg.bearing = 0.415499456103;
    msg.cross_angle = 0.604106727286;
    msg.width = 0.276708107393;
    msg.length = 0.315022080369;
    msg.coff = 218U;
    msg.angaperture = 0.155395299971;
    msg.range = 55826U;
    msg.overlap = 36U;
    msg.flags = 72U;
    msg.custom.assign("RISWALQGNGYANIQZMJZVQOCCKWUGSMVQXTFVDKYQUDKBXJTLVVBRQAIBTTPYGHDLHMNBFCKCEZFIWYBAPKRXGYAHFLFDFECVYEGFDLVADOFTPTWRLDRZSTSCQHJJVPRXNXEUSBCNEGSZDTEVWXMCHPSIYIHZEKBIPEQIWSMWCOLAKSXNZOGMOTPUDYKJUQJXLMRHTGSFUJGK");

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
    msg.setTimeStamp(0.548667236833);
    msg.setSource(7385U);
    msg.setSourceEntity(83U);
    msg.setDestination(34749U);
    msg.setDestinationEntity(21U);
    msg.timeout = 61529U;
    msg.lat = 0.693916485404;
    msg.lon = 0.341079101934;
    msg.z = 0.464025033068;
    msg.z_units = 125U;
    msg.speed = 0.164526113084;
    msg.speed_units = 0U;
    msg.syringe0 = 178U;
    msg.syringe1 = 25U;
    msg.syringe2 = 74U;
    msg.custom.assign("SHMUVMNPFWYXFJEWNTDBSYSJZELYAZQBOBYDENGYFYKRUUQHJVFIZQTCHWAYRKMQCOCBKPGLMDCHBXNGOSSXRTWVWUHRUDDFBHGUADJFJGESQRKYZCRREAJEKXLAFIGXPPCEKTMRNQVZUZMICOXAXXGYDSZHUJBZOZSFLCQQLVTJIWABILGHHKPCTANLXUQBDLIIYNRSOLREDFWSPQLPXKTIWJGHN");

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
    msg.setTimeStamp(0.572393824994);
    msg.setSource(26020U);
    msg.setSourceEntity(186U);
    msg.setDestination(60768U);
    msg.setDestinationEntity(213U);
    msg.timeout = 34710U;
    msg.lat = 0.96702202184;
    msg.lon = 0.658496388561;
    msg.z = 0.178546030233;
    msg.z_units = 130U;
    msg.speed = 0.919956535168;
    msg.speed_units = 138U;
    msg.syringe0 = 31U;
    msg.syringe1 = 222U;
    msg.syringe2 = 67U;
    msg.custom.assign("DPSYIVAEXILSESSVGTLIVZQBCFKMJXIXSOHZDTLLJDOVWHDWWVRRBUQHKFNROGGLGBIGLGGZRAPABYDLHCOAUYXXRKNKNVHEENVXSJ");

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
    msg.setTimeStamp(0.770294868988);
    msg.setSource(28618U);
    msg.setSourceEntity(72U);
    msg.setDestination(17774U);
    msg.setDestinationEntity(89U);
    msg.timeout = 925U;
    msg.lat = 0.344482763912;
    msg.lon = 0.912565359084;
    msg.z = 0.00493989967145;
    msg.z_units = 59U;
    msg.speed = 0.0308682755323;
    msg.speed_units = 130U;
    msg.syringe0 = 194U;
    msg.syringe1 = 241U;
    msg.syringe2 = 231U;
    msg.custom.assign("ITZICVNHZBPOKJBYZRG");

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
    msg.setTimeStamp(0.963784997663);
    msg.setSource(34513U);
    msg.setSourceEntity(59U);
    msg.setDestination(10030U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.689952268768);
    msg.setSource(35360U);
    msg.setSourceEntity(58U);
    msg.setDestination(15272U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.223573769722);
    msg.setSource(35618U);
    msg.setSourceEntity(111U);
    msg.setDestination(35454U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.850929777451);
    msg.setSource(52644U);
    msg.setSourceEntity(24U);
    msg.setDestination(12042U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.600758696206;
    msg.lon = 0.612696964832;
    msg.z = 0.0680314326084;
    msg.z_units = 175U;
    msg.speed = 0.690377407594;
    msg.speed_units = 233U;
    msg.takeoff_pitch = 0.275262372506;
    msg.custom.assign("HKDABJEFUDMXHZNLQVENZUQEABIZKPYCTFNQZNVLGKZJXONOPCSIAQQEFUMAHTRSSPVJWPGEGJVWEZQSLNWPYCMWCKLRBLXGQPRNHXHCYTSVSPUIPFFCHKWVKSVATUHPDMXNYORAOKURLVZPIBFQDCDGYOTIMKDRLCFEJQROIOYJOBXNXMISCSWFUSUBGHJZZYAENT");

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
    msg.setTimeStamp(0.452057016803);
    msg.setSource(38848U);
    msg.setSourceEntity(51U);
    msg.setDestination(64264U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.351139440651;
    msg.lon = 0.513530000445;
    msg.z = 0.498068253612;
    msg.z_units = 116U;
    msg.speed = 0.65215219782;
    msg.speed_units = 241U;
    msg.takeoff_pitch = 0.286870126806;
    msg.custom.assign("YVDPTRXNFSQUAWEIEJOJNOWLTFJUDIFYMHJXAHMIIWBNYFZXMTEQRJYKEUZRLGORVOJLBHGAIDBJZCVKGK");

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
    msg.setTimeStamp(0.763597940055);
    msg.setSource(27357U);
    msg.setSourceEntity(190U);
    msg.setDestination(42119U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.445805727751;
    msg.lon = 0.00980828194229;
    msg.z = 0.756297125457;
    msg.z_units = 74U;
    msg.speed = 0.679784323439;
    msg.speed_units = 250U;
    msg.takeoff_pitch = 0.875822454953;
    msg.custom.assign("EAAXGXTYMUTGELCEZCVOTFGVIKPXRZQUQPGRTCKKWUMYBHFEWNQDQXEGYIYFEMGRAHHFZJQTUBLJCBYBVQWIDZTBMWAQZODTRVVLWNELYPZQKGOAHSPFFXPWZSABWQXNUREJETNZNKDFMMKPGIZVXVUJYWDIPOHLYNSOVCOGDEXXCWSRRRJZYJFJSKUKLUSSAWD");

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
    msg.setTimeStamp(0.338823426016);
    msg.setSource(946U);
    msg.setSourceEntity(111U);
    msg.setDestination(41795U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.108324980948;
    msg.lon = 0.195548734499;
    msg.z = 0.289053376962;
    msg.z_units = 187U;
    msg.speed = 0.713664557694;
    msg.speed_units = 66U;
    msg.abort_z = 0.592005931409;
    msg.bearing = 0.102237469902;
    msg.glide_slope = 68U;
    msg.glide_slope_alt = 0.315891139418;
    msg.custom.assign("QFGSJPIDAZISRLDSCKKJAPCBBWDYMPITNDJHVQOCDACEUEYDXWHKGPSQXQCGCYDFVMTHXBEGNZGELFJEYEWLNZSLKYUGMNJGHIXISANPFKDSXTAEMWNRPZCUYVWUBTLKLIUQSLMFIRHTCUGFWYDMLEXKAONVPNKALZMWXJMCYJEYTOOKAAROUNWVVZHVBSBGUKZPOXBUFQTTGRRHQMBTZRPSWBPUHRQJVIX");

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
    msg.setTimeStamp(0.552577240728);
    msg.setSource(17023U);
    msg.setSourceEntity(248U);
    msg.setDestination(51614U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.912597959105;
    msg.lon = 0.561016342768;
    msg.z = 0.293913081054;
    msg.z_units = 185U;
    msg.speed = 0.182297570591;
    msg.speed_units = 104U;
    msg.abort_z = 0.0419249777665;
    msg.bearing = 0.945867842194;
    msg.glide_slope = 39U;
    msg.glide_slope_alt = 0.851786975429;
    msg.custom.assign("OREIQCRRLJNXMXGDMESGVBYKEWTJRMXLLSDDCIETLNOISXVHMEEYEAQJKPYUWNQAYPRPTYXZDZUFWWSXGBFYZUJLJMDZQZPGXTPQKHORIUDZSFJWSHUWOBGIUVVSFKTTHGKCMGVSODMWWAPUZBBRVANBAZXORN");

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
    msg.setTimeStamp(0.61297484622);
    msg.setSource(46740U);
    msg.setSourceEntity(209U);
    msg.setDestination(48025U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.689148249105;
    msg.lon = 0.171994782971;
    msg.z = 0.129542454545;
    msg.z_units = 86U;
    msg.speed = 0.919099248982;
    msg.speed_units = 188U;
    msg.abort_z = 0.0716757452546;
    msg.bearing = 0.371132461328;
    msg.glide_slope = 191U;
    msg.glide_slope_alt = 0.574309157588;
    msg.custom.assign("SYRUEKBWRUMZAXEHFIVJMLSZLNQMPQQHWRAILGDPTAAFNLGOKLYZZEBUJCSVJHVWJCODEBNQGUFMXCGPPQGLMXBNYXUSQLZKRKDSHNWNWSNQAFOKPLFUKODWEBHIVZJANJSXQPFVZYRBWKJWRSDGUYNZEITRYCKVXDUTYIEYDTFH");

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
    msg.setTimeStamp(0.103927253996);
    msg.setSource(31034U);
    msg.setSourceEntity(148U);
    msg.setDestination(9974U);
    msg.setDestinationEntity(139U);
    msg.op_mode = 138U;
    msg.error_count = 138U;
    msg.error_ents.assign("SKDQTXGYCVUSQOEQRSAJKHEGDWFXASWHDMWUFLJZRZRHJBCGFDLWOZQBPQPROFHSUALBEZNBYXGSNXHIWHJP");
    msg.maneuver_type = 42863U;
    msg.maneuver_stime = 0.0240065101485;
    msg.maneuver_eta = 17510U;
    msg.control_loops = 3477562145U;
    msg.flags = 8U;
    msg.last_error.assign("QMDJWKKODKUQCLPDDTLUQGQCTKTGEPRHPVVPWBHBJUVMJDORJQCNCRSYSSFKVZGBLWICGRDAZLBOZHDIJSTEYQHACWGBGHYYNKUYNRABNZXNLUMFWUHLIYLQZEPFEXKCEXWILPALVHEXZWTPOYAEXQCHI");
    msg.last_error_time = 0.227049004557;

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
    msg.setTimeStamp(0.743754092627);
    msg.setSource(45030U);
    msg.setSourceEntity(145U);
    msg.setDestination(46932U);
    msg.setDestinationEntity(68U);
    msg.op_mode = 237U;
    msg.error_count = 154U;
    msg.error_ents.assign("VMSOWXHBPQSZZNIWTORMZMDTFVFLXAKUGWICQCYLUDQFFPFJUAAQDOABTDKAUENGLKZWHVMLROKSHDTEXFZGVHCIVYTSQWERIERUROJHGXYSJBVJIYDMRQKRBXBRPWZPXUANCEXVLQOHYGJBNBKACUTIFYTSPWMGZKBHPRKXDSMFJJMIGLYA");
    msg.maneuver_type = 43714U;
    msg.maneuver_stime = 0.321965882011;
    msg.maneuver_eta = 26727U;
    msg.control_loops = 1294238991U;
    msg.flags = 17U;
    msg.last_error.assign("SXPNWJMTMOPNFZZXVAACLDNEXJFBXRSVLKAAMPITGFZUIWEBUSWNMTHVBAWMXOSFKBTOOFKKEZBHAHXLGFLPQQQKUAHSELZIYCULUJRHITTDKDWZXFGQKYCSTBLIBGIOQUJVREGWHDVCQDRINRUILWJVWFVIQDADLOTYRUTYBJDWPHHZIPGXCNOYWLBFSHCRPCMMYFCUQYOMEYQZCJXDOSVANSZGONESJTRPEVKMEJPQCJRYVUPDZKRX");
    msg.last_error_time = 0.827154269297;

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
    msg.setTimeStamp(0.624886233977);
    msg.setSource(60619U);
    msg.setSourceEntity(101U);
    msg.setDestination(5419U);
    msg.setDestinationEntity(68U);
    msg.op_mode = 221U;
    msg.error_count = 208U;
    msg.error_ents.assign("HRLQMGEPWGLKXFVTSZBUEBNBWOLLXFVIZQZNELWYHSTDDZOJHMMJABJVISCSHYBQWGCJTFDQFVXQYIVEKQNQVCPCIEMFNKMVVVBWNNANCOEJCNZPVJUYYOAUURHXCDWLMEL");
    msg.maneuver_type = 44842U;
    msg.maneuver_stime = 0.970019475104;
    msg.maneuver_eta = 27639U;
    msg.control_loops = 3176805869U;
    msg.flags = 51U;
    msg.last_error.assign("UYOCJUPAWWPZUVPNRUBOMKEHGYKURBLVWPVVOQGVSVEXIOBUKVQX");
    msg.last_error_time = 0.608207966774;

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
    msg.setTimeStamp(0.635141440746);
    msg.setSource(163U);
    msg.setSourceEntity(75U);
    msg.setDestination(47253U);
    msg.setDestinationEntity(203U);
    msg.type = 137U;
    msg.request_id = 24298U;
    msg.command = 244U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 19658U;
    tmp_msg_0.lat = 0.160897316951;
    tmp_msg_0.lon = 0.267399093686;
    tmp_msg_0.z = 0.385694725902;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.speed = 0.376014914217;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.custom.assign("ZXKDXHGYCUBJHMPYKVXWPLBIAVVYZJSRSSIQHYATXODXTFTAUIEVYROUHOGXSVLOWXCFNJFGZFHHDKVBEQMLFGAADMAUXDEFRBTIDBISWNJTCBCMTPAOQRJLSMPTVKBSASGVJFQKGIYWZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43356U;
    msg.info.assign("TZEEGPUFJRMHRXDNOXKOOIQJUUQUGPQFMVSERKBCXDGIENXOFSWKJSNWXDMMEKPBQPLFTXXSLBHTMGHRVLTZUCDQCOTBPLWGAVOWLTKYIFGCRWYPOMJRPJVWPXJJLYRUOHVRAZDCZLS");

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
    msg.setTimeStamp(0.298383764361);
    msg.setSource(43975U);
    msg.setSourceEntity(203U);
    msg.setDestination(35821U);
    msg.setDestinationEntity(142U);
    msg.type = 9U;
    msg.request_id = 56599U;
    msg.command = 200U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3370U;
    msg.info.assign("KXOGEDYIIUHWJDSPACMBWYYLTISHXCJBZKMKJKZFKPGANCSAUYBETNVGZOSRGPHROJNHAHWVZSPFDEJGSBIIMTSHDIMTYDZHNXKUFUNBZACECBUJOOHQXDDRWFMIVEKTZNLBMNMLLYQPQSDATWZDVRBNFRXPGA");

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
    msg.setTimeStamp(0.503034512273);
    msg.setSource(39636U);
    msg.setSourceEntity(54U);
    msg.setDestination(13432U);
    msg.setDestinationEntity(199U);
    msg.type = 97U;
    msg.request_id = 21103U;
    msg.command = 237U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 897U;
    tmp_msg_0.control_ent = 76U;
    tmp_msg_0.timeout = 0.947640495795;
    tmp_msg_0.loiter_radius = 0.667143290315;
    tmp_msg_0.altitude_interval = 0.551803540443;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35291U;
    msg.info.assign("SVEYQPKOBVNOBNLAOFJYGSYUNJAEOMNUHLNWYRCQFBPYDNTBLSWKYMRCWEDMKWCFXFFDECBSUMSKBGDMNBKJMGECQAJUIHIAUSDWYVZEKIQPOHLWDLIGIJVT");

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
    msg.setTimeStamp(0.798784589741);
    msg.setSource(60139U);
    msg.setSourceEntity(78U);
    msg.setDestination(59515U);
    msg.setDestinationEntity(162U);
    msg.command = 147U;
    msg.entities.assign("HROWGXMYXAZLJCBYHBPRJEGOQVGBTXJYKZCQAHPDTQITWJVFTCBFUCJXSIBOVM");

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
    msg.setTimeStamp(0.625601176874);
    msg.setSource(22945U);
    msg.setSourceEntity(197U);
    msg.setDestination(54950U);
    msg.setDestinationEntity(94U);
    msg.command = 230U;
    msg.entities.assign("ZNEOVTWWRDUTYHJDNJSQIZATMDWCSOSOOJQYUALQMOSFLYDXWJAZUZZVVFNYHKLGLSTVJDI");

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
    msg.setTimeStamp(0.0924566820401);
    msg.setSource(30805U);
    msg.setSourceEntity(184U);
    msg.setDestination(47702U);
    msg.setDestinationEntity(163U);
    msg.command = 83U;
    msg.entities.assign("MDECXLFZCGBGEQUUQOUCQDGQONDQUWSOXKWTFVRAKJPBBJXRISLTMENSNMOZRZWQMOXOUBDNYPPTDUEZXLGIYYBLDREJAARPXBVOAKCZLDXVRZFIABWMHBZUJFMGVTVWEJYIFIT");

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
    msg.setTimeStamp(0.0106065305288);
    msg.setSource(33367U);
    msg.setSourceEntity(30U);
    msg.setDestination(35138U);
    msg.setDestinationEntity(24U);
    msg.mcount = 140U;
    msg.mnames.assign("OIJCNRNUJTTQVBEMWTFRIKGTQNTHMIRNMZBHVVHFKKFPPEFIKEUQALWODBXHRXSQZMIJJYQUCFKCDYOLMVAYNQSVMYNHETGWSFKEUFCAWKBAIITZAPZKETAOTREDUUBRNGVQEMSDXMFROLJQYBLWDCBNHJJALAQYYDPPZLTKYBEEWSBUPWGUDIZSVOZOXVGGFRFUNGOXQLASDLCSSXIZJPXCBZIPSLHAJCVWGPHYUWKXYRD");
    msg.ecount = 125U;
    msg.enames.assign("UHGQJYRSSZOTZBTOOLIDNTSEUTEQVIKLOPZMARRJRVDHWGZFESZYZJHKKJXIBMOURXWBAGNEULOKENLFMDNASFFQQQNUYMUGJVQWOIHPFXCEFQIMVJKHNQMMIDDBFGCAPJEMAPAISEJRHVJAHLILAUWWHTDDIBVPYVJYXLSPLCBNKRCZLTFANWGTBHCBTGISCGDRVUKQWVEGCKPCCNXFUWVSAHCRYNYKPYKRXXP");
    msg.ccount = 131U;
    msg.cnames.assign("YAWTOFXGRAMAKDVFZSSIORNJIAIKSFVUXOZUKMSNOGXOCKFUKIMHHEFWPHYXWJHZLWOOYEBDTUQZ");
    msg.last_error.assign("LDMGYKRHJYQVCATDBZWEAVBFODZOGNTCARZQEPQXEBTPXDKEAZJEXPEAEXDPVGMKDUMBUXLFRROXIXSHPHZBOHVETKSLURTLTMEHTJWYBITCSCKBOB");
    msg.last_error_time = 0.218319532639;

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
    msg.setTimeStamp(0.921509764738);
    msg.setSource(55489U);
    msg.setSourceEntity(68U);
    msg.setDestination(44181U);
    msg.setDestinationEntity(167U);
    msg.mcount = 34U;
    msg.mnames.assign("KOEPYPGVKFMIUOBQFTHALTSHXUYLLJDXWRNLVOIVBNUODWYVSOMKFHWRZHRFZQXGCELEVREJQEMIJKRMTPXCRFYGTSQHJJXNWIUSYFNZEHNPOSJCBCFQLCBDXZNUTBWQNYDGXTQKUJPWVCGAXMBNYDSZGBVQUWFLWDUMJPZCHNWDAIMG");
    msg.ecount = 17U;
    msg.enames.assign("SDNTAOSBUXVXGKHZYOQGTVQUWAFHMQGMLWKIYIDMALCRPGYUFJQQVJVBAWFNUAXFUTFRTLVB");
    msg.ccount = 159U;
    msg.cnames.assign("GLCUZSKSZDNKCVPHVBBWUIZYCOUPDXSJEWJAZBOCNMFFGEMJKBWBGVQYLRTOMTUYBHYRCNSDLFRYDRIQYLXSWOYISGFQGROAQIBTTERJVMAQHNAALLEAWDERKBKFEJOSMQTHJJKZRNJOCLLPDHYKTWOPIQXKHYHIZCPQSHCPFWNKSJPEAFUGDNRHNTQPETZXXIDOBNVFISMXUZUHWKYVAUFACMAVC");
    msg.last_error.assign("NHFHTABUGTROXQNOJAJDMLPIXDEXIBUGFISZBINVYGILRMDMIEVFFWSCLWPHNNCNDGGLYTENSYDBFKZMVYOIKHWWZPWBYAJNQHRUFUCJECAUENCWSRKQYYHEKKOPTBQQGDYPRHPFVWJAHHMXSEUVORJCWFLCXIDQCLVSBKJTAZRACJXXLIEOQBSTDOIVOYKRPEZZMNSMLTBQKVGPOAYT");
    msg.last_error_time = 0.310638299917;

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
    msg.setTimeStamp(0.880714328412);
    msg.setSource(6361U);
    msg.setSourceEntity(13U);
    msg.setDestination(22755U);
    msg.setDestinationEntity(152U);
    msg.mcount = 241U;
    msg.mnames.assign("UAXRDHEAMWBMOFQKTUTKIUNLWOSJFOIMAREBOEIWEXHSAASDGWDOMDPIZVSWVFQBYEKCCDPNXIKTWPGFIQMQCRZJMQPFHLTXSLSLNMBQTFRXPYWPEOJBATYCIZKYXKZBFWHJGALVADSPQCZZOURUNSSIVDNNHLTXTAEOYHOPVKPDDUURPEGUGUMMKWXTVULFNLAERKJCKFVJIOCYIXZLNJHSHJCZBCVVWQHBBM");
    msg.ecount = 252U;
    msg.enames.assign("NZYHFKFUJKBTHMVBQUVCINPMEPZUSMQYKIEQVWJWCXRMSXROHNVDZUJCASGW");
    msg.ccount = 4U;
    msg.cnames.assign("WWGSIZHDNBDDTXBQQEUVPBAZEKPLJDIRPZWBEKJUSNLAHPKDLJXYJYDTQCPRMBHWQSGMTYWHMFPVNSOZDGMUSYQCZJQCIVXUCWTQELWCX");
    msg.last_error.assign("FRZZOIJQYWOWXQKWUIWIYSWXXRLQHBHUUSLLGIPNBZUYK");
    msg.last_error_time = 0.148792923306;

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
    msg.setTimeStamp(0.266111402273);
    msg.setSource(27074U);
    msg.setSourceEntity(99U);
    msg.setDestination(53475U);
    msg.setDestinationEntity(99U);
    msg.mask = 42U;
    msg.max_depth = 0.278270917673;
    msg.min_altitude = 0.523671651656;
    msg.max_altitude = 0.890452635088;
    msg.min_speed = 0.0622236784525;
    msg.max_speed = 0.188671226642;
    msg.max_vrate = 0.897285045249;
    msg.lat = 0.200082697736;
    msg.lon = 0.583410680926;
    msg.orientation = 0.0525571687665;
    msg.width = 0.329329710656;
    msg.length = 0.346659888745;

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
    msg.setTimeStamp(0.340958787028);
    msg.setSource(43125U);
    msg.setSourceEntity(251U);
    msg.setDestination(65441U);
    msg.setDestinationEntity(207U);
    msg.mask = 172U;
    msg.max_depth = 0.76862015735;
    msg.min_altitude = 0.969283646588;
    msg.max_altitude = 0.189645249292;
    msg.min_speed = 0.318036603068;
    msg.max_speed = 0.342400834555;
    msg.max_vrate = 0.145382490629;
    msg.lat = 0.896021239312;
    msg.lon = 0.386716660783;
    msg.orientation = 0.884929712988;
    msg.width = 0.606251628685;
    msg.length = 0.116008670072;

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
    msg.setTimeStamp(0.660423834696);
    msg.setSource(6442U);
    msg.setSourceEntity(224U);
    msg.setDestination(3289U);
    msg.setDestinationEntity(17U);
    msg.mask = 231U;
    msg.max_depth = 0.44952401827;
    msg.min_altitude = 0.716262234663;
    msg.max_altitude = 0.127629334761;
    msg.min_speed = 0.396255707144;
    msg.max_speed = 0.0181424009358;
    msg.max_vrate = 0.0138532938073;
    msg.lat = 0.439904329876;
    msg.lon = 0.933693874958;
    msg.orientation = 0.956298896884;
    msg.width = 0.600733724689;
    msg.length = 0.272316855063;

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
    msg.setTimeStamp(0.976020688487);
    msg.setSource(48465U);
    msg.setSourceEntity(21U);
    msg.setDestination(49437U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.489239946234);
    msg.setSource(34023U);
    msg.setSourceEntity(134U);
    msg.setDestination(16625U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.589158902516);
    msg.setSource(51019U);
    msg.setSourceEntity(37U);
    msg.setDestination(53410U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.932211137593);
    msg.setSource(45132U);
    msg.setSourceEntity(240U);
    msg.setDestination(43283U);
    msg.setDestinationEntity(209U);
    msg.duration = 24500U;

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
    msg.setTimeStamp(0.853943919552);
    msg.setSource(48193U);
    msg.setSourceEntity(180U);
    msg.setDestination(58157U);
    msg.setDestinationEntity(136U);
    msg.duration = 47946U;

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
    msg.setTimeStamp(0.845302141074);
    msg.setSource(33042U);
    msg.setSourceEntity(45U);
    msg.setDestination(17253U);
    msg.setDestinationEntity(56U);
    msg.duration = 1537U;

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
    msg.setTimeStamp(0.144727267416);
    msg.setSource(33937U);
    msg.setSourceEntity(212U);
    msg.setDestination(500U);
    msg.setDestinationEntity(193U);
    msg.enable = 189U;
    msg.mask = 2708076236U;
    msg.scope_ref = 105871374U;

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
    msg.setTimeStamp(0.338471628005);
    msg.setSource(38226U);
    msg.setSourceEntity(42U);
    msg.setDestination(50963U);
    msg.setDestinationEntity(130U);
    msg.enable = 246U;
    msg.mask = 1070144903U;
    msg.scope_ref = 600284116U;

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
    msg.setTimeStamp(0.662504004648);
    msg.setSource(20827U);
    msg.setSourceEntity(31U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(123U);
    msg.enable = 205U;
    msg.mask = 1008546800U;
    msg.scope_ref = 1224254512U;

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
    msg.setTimeStamp(0.580503812691);
    msg.setSource(24433U);
    msg.setSourceEntity(101U);
    msg.setDestination(4901U);
    msg.setDestinationEntity(48U);
    msg.medium = 170U;

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
    msg.setTimeStamp(0.63830044279);
    msg.setSource(7985U);
    msg.setSourceEntity(156U);
    msg.setDestination(10005U);
    msg.setDestinationEntity(93U);
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
    msg.setTimeStamp(0.43314782816);
    msg.setSource(51516U);
    msg.setSourceEntity(201U);
    msg.setDestination(24600U);
    msg.setDestinationEntity(153U);
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
    msg.setTimeStamp(0.0749445549979);
    msg.setSource(26002U);
    msg.setSourceEntity(230U);
    msg.setDestination(12165U);
    msg.setDestinationEntity(201U);
    msg.value = 0.179103324959;
    msg.type = 109U;

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
    msg.setTimeStamp(0.998765348112);
    msg.setSource(11921U);
    msg.setSourceEntity(11U);
    msg.setDestination(4853U);
    msg.setDestinationEntity(4U);
    msg.value = 0.337169407591;
    msg.type = 89U;

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
    msg.setTimeStamp(0.435795451688);
    msg.setSource(517U);
    msg.setSourceEntity(199U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(73U);
    msg.value = 0.837686356976;
    msg.type = 156U;

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
    msg.setTimeStamp(0.185641183832);
    msg.setSource(2133U);
    msg.setSourceEntity(119U);
    msg.setDestination(20922U);
    msg.setDestinationEntity(81U);
    msg.possimerr = 0.729030117084;
    msg.converg = 0.666225196335;
    msg.turbulence = 0.015719423788;
    msg.possimmon = 152U;
    msg.commmon = 161U;
    msg.convergmon = 123U;

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
    msg.setTimeStamp(0.431546830268);
    msg.setSource(6623U);
    msg.setSourceEntity(196U);
    msg.setDestination(3983U);
    msg.setDestinationEntity(42U);
    msg.possimerr = 0.986193184075;
    msg.converg = 0.484931444893;
    msg.turbulence = 0.974147363752;
    msg.possimmon = 208U;
    msg.commmon = 177U;
    msg.convergmon = 145U;

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
    msg.setTimeStamp(0.842544631379);
    msg.setSource(38785U);
    msg.setSourceEntity(19U);
    msg.setDestination(21497U);
    msg.setDestinationEntity(182U);
    msg.possimerr = 0.670457145788;
    msg.converg = 0.171001595883;
    msg.turbulence = 0.838896901238;
    msg.possimmon = 211U;
    msg.commmon = 102U;
    msg.convergmon = 196U;

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
    msg.setTimeStamp(0.0460475512787);
    msg.setSource(56869U);
    msg.setSourceEntity(168U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(11U);
    msg.autonomy = 233U;
    msg.mode.assign("ZSMZALGMPXWGQHWOQGOVTXVMTJHUMZAKICSCOOLNACTONMGFHUJLCCYLFQVEOMBITMUGIDHBREFHNIEFRXHYCCGWUOYCNQIXOQBIWOKBEKSNXGRVRXPSDGKJZDSDDKFJSYBRYEZPAYRESPXQBPDUDLAQZPDFWIGVJHJULTUHBFEJKRMRTPTVXHCLT");

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
    msg.setTimeStamp(0.11281406498);
    msg.setSource(31555U);
    msg.setSourceEntity(251U);
    msg.setDestination(37694U);
    msg.setDestinationEntity(11U);
    msg.autonomy = 49U;
    msg.mode.assign("DQJSGRCLKNJE");

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
    msg.setTimeStamp(0.0479393312976);
    msg.setSource(43336U);
    msg.setSourceEntity(87U);
    msg.setDestination(18751U);
    msg.setDestinationEntity(254U);
    msg.autonomy = 209U;
    msg.mode.assign("RBJDTCAHJVONQIDSXLPRYNRWUIVVJCKZPSLDTMCTNPRDUYCRBHFHWEZWZVLKWBTBHNUQPFAQUEKZNXAYNBLYZNWPATNSGYBHAUQZDPHYLXSYJOMDEIBONWQGEHGYKXGXCOXITCRJDGDAW");

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
    msg.setTimeStamp(0.628740637866);
    msg.setSource(51575U);
    msg.setSourceEntity(171U);
    msg.setDestination(59666U);
    msg.setDestinationEntity(83U);
    msg.type = 154U;
    msg.op = 180U;
    msg.possimerr = 0.40360886233;
    msg.converg = 0.0983195062469;
    msg.turbulence = 0.307237545256;
    msg.possimmon = 176U;
    msg.commmon = 226U;
    msg.convergmon = 226U;

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
    msg.setTimeStamp(0.549808159234);
    msg.setSource(1762U);
    msg.setSourceEntity(218U);
    msg.setDestination(18628U);
    msg.setDestinationEntity(163U);
    msg.type = 140U;
    msg.op = 37U;
    msg.possimerr = 0.553511733165;
    msg.converg = 0.794447845449;
    msg.turbulence = 0.829812999791;
    msg.possimmon = 252U;
    msg.commmon = 193U;
    msg.convergmon = 125U;

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
    msg.setTimeStamp(0.0339121676482);
    msg.setSource(64207U);
    msg.setSourceEntity(241U);
    msg.setDestination(34367U);
    msg.setDestinationEntity(70U);
    msg.type = 61U;
    msg.op = 33U;
    msg.possimerr = 0.282994172462;
    msg.converg = 0.932796339641;
    msg.turbulence = 0.646267224581;
    msg.possimmon = 102U;
    msg.commmon = 238U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.71154485884);
    msg.setSource(43782U);
    msg.setSourceEntity(148U);
    msg.setDestination(5726U);
    msg.setDestinationEntity(147U);
    msg.op = 241U;
    msg.comm_interface = 122U;
    msg.period = 49208U;
    msg.sys_dst.assign("LRMBIYXHOSHTVDUFXXDYRDWCHSBWVTOGBRALDGRUEIQQDMRREVAFMYYQVBWPLZCILEFAJPEZSNBCFPIHYPUAMMDAOSLVQLOGRJZLFGIVZWWTPAMRCRFNGIGKWAEHQSBJQBTPEUJHLCXZJMNK");

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
    msg.setTimeStamp(0.214869943374);
    msg.setSource(23456U);
    msg.setSourceEntity(74U);
    msg.setDestination(42037U);
    msg.setDestinationEntity(130U);
    msg.op = 188U;
    msg.comm_interface = 95U;
    msg.period = 35937U;
    msg.sys_dst.assign("GSECMLBRKZQQXFTPYPTJLACIECJZGZOZINGSDHLKNXUDAKLAAETZRESXRNWWHODIZUXUCNLQQGAFJOWXORYXDJNGETMVLDILWEQVBZJNGYKCUKFPQXPUPWHPYSDLLVA");

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
    msg.setTimeStamp(0.94345659382);
    msg.setSource(5816U);
    msg.setSourceEntity(52U);
    msg.setDestination(64155U);
    msg.setDestinationEntity(65U);
    msg.op = 236U;
    msg.comm_interface = 38U;
    msg.period = 43715U;
    msg.sys_dst.assign("YCJWLLPIPSNYDBVRNAYAOMCFEDKIJL");

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
    msg.setTimeStamp(0.678767235729);
    msg.setSource(14171U);
    msg.setSourceEntity(251U);
    msg.setDestination(33139U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.581503550741);
    msg.setSource(10680U);
    msg.setSourceEntity(254U);
    msg.setDestination(28388U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.334965864571);
    msg.setSource(26596U);
    msg.setSourceEntity(25U);
    msg.setDestination(20634U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.700711893969);
    msg.setSource(52836U);
    msg.setSourceEntity(62U);
    msg.setDestination(51149U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("AHNVZCETKOJMQIGUGPWYFZRSJCFIYTFVFAPDLQAZRCRLHNWGBUTODTCEKJIFPIBZJPQBDTJAEVSRYXZRWRXSYWAUZTCSHFTLQIBVUNTPWDZRXIGGMYCALODVDERFXMMHPYBNPMOCLHJWNCDVQABNERVELICNGXKMSSGJVUTDVLAIJGWZZWAKQ");
    msg.description.assign("CLISEVIPBDVUFGUNPPUXQOMVTKMVJJIIBYNNBDETRYFWYCZZNVZOHJUBCEJQHIDTEPSTLAUBCSZFPWAZAFVJBDWGGCSDAGFNVJT");
    msg.vnamespace.assign("XNMSBLXSPJKNMKSHXVLPEUGWYSCQCQFHAYWHDYTKMPADBXHFHGXQDBJVNOLUYFRGNARNMEWIXUVWUBTQJQHMTTCTEIDUDBZQALBAJREQKXCJNKDOOGCRGYKLEFUFNHUEFIEJSIPJDTAXEOVFJZZMZDTCRDKHQPBTWYOBXFPVEYNNZSSVCYBHULZAWUCVSTOAW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XTBUMBPULNEDRXXWDHEPIDXIKVLLMUFZHENBFXJADTFLRYZQJINVMRCMENGBGPMGOLARAZMROA");
    tmp_msg_0.value.assign("VUKUISREWQNJKNPZEQSBIOQTLZDJKAWHTCMORQDJBOUPSNCTNOFPYTAUDDSFGYHKZDXHENAQVHIXRPAOJDATLWUWYTOMYDM");
    tmp_msg_0.type = 49U;
    tmp_msg_0.access = 28U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KXPSQBAPUTDDVJJKQUXCGMGRRKMFGJEEUASTINISWAHOPGZVFDSVBQC");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KMGZRJEZXXOICEBDBFLHNYWQPNAGOFQZLPSJQCREADWKMYSHCBD");
    tmp_msg_1.dest_man.assign("FWEPQEFUKVVZRWHCSLYXPINIAIRCSCHKTLVGKNDRBRCDSRUQYQLBQPYKOZBOGFVVLJMGIGXBVDPZNATPHHLFZLDYSDCVIJZMSTMYIVVG");
    tmp_msg_1.conditions.assign("LWKEZQTSZJOHOOTALVIXVLNMTQKQLRSZLQYTKPAICEUMTSTQYDBVENJIPJQTRUXPGGBSOAVCDPIRRKBJYBVMXHACKLPBFJNHEQVNBVZWICZFXSNPUGGZIAWHBMFHTCZOWKFXRAWCDLGKKVYDJPNMMDQCNUEOSJJRMUEHDUVQHBJUATXGWIMACLGQROFGIYBNNXHEEXYSOSRDAMGTUKXRXUKD");
    IMC::FormationParameters tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.formation_name.assign("USZAWCHIPLXHHEJNNIHDRDZEEAJMLYMBYIUBBKVYSPMIPOUPDXCDEHIAQEIVEPJEZMOAIERYLMBVPRCRWFFTSSRQDVPWLWMSOFVTCLSILTGPYOFDVKHVUVZCPUFCZFQGBGOWK");
    tmp_tmp_msg_1_0.reference_frame = 148U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.vid = 3146U;
    tmp_tmp_tmp_msg_1_0_0.off_x = 0.586403306335;
    tmp_tmp_tmp_msg_1_0_0.off_y = 0.693863614374;
    tmp_tmp_tmp_msg_1_0_0.off_z = 0.577245846846;
    tmp_tmp_msg_1_0.participants.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("AGVMAISQAXLXBAVWOYIQYRZULPFQQTZUMFKAYNKXCPMACQIUPDIMETELNJZTOUKLKVKSVODZNWFFJUEYCUPZZSHXHABRQQHHGZLKPZHOBGSRUWXSTCDBPTFRDOEHRXFYEMRXOJCIYJWJSKOOYVLNRYBRIWNHDUGDCISIBGVWDLVZQCVYETJKMGMDJMBQGFGHBQXTASYSLBKVTNZDXLPGSWFPHRDUTMJPNA");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.873059681077);
    msg.setSource(51704U);
    msg.setSourceEntity(63U);
    msg.setDestination(5142U);
    msg.setDestinationEntity(188U);
    msg.plan_id.assign("QRFDHZDSUGAABVLFTWKMVETVRLSSTQZXLFJYCHVXOBMPYJWOCUHIDKETCGJFUYPWZWFWWUYTIHZOJPPGNXEGDNVOCLDBHVDGYWUFEYMFRJLKDPZPNRIGJLIIKOHNBUDEQNGWRGEKIAHMMGYSMQRXAEXVKSKSPNEUKQZHYFFQNDOZZBJIXIDMSBYPZZ");
    msg.description.assign("NDKALKQTLFFTERSGMWDXSIVZBKWZIAVECMNCHMJFIGZPGXRBXGQTYIQYFPFPIZXEWZUHHOIJBHANCORQELJEHVJVUQWDBHURPSPQKECCAGXIBZEQFPLOLABKRWZNJECIRALNZSATGEIDRSBESOJVKMSLMTNGQSKGVOTVCKZNYLOXUFLDBMFCNPYWMGOSWPMDYWAUYUXTQBNBJHTOYZRXFWOFAUVJRK");
    msg.vnamespace.assign("SFYEBINUURBZAARMXYDRTJVFCLNINHNLXUC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XOMMKIGPGRMVJFSOXHNCHQWFSDMRUQVXYGCQSTRIPCRZYKKBEVLMALVTOSHSUJAUKMPXEODQDWHCGBHYDNPWUDVXUCURAYZZQLMZPBSNIOWSCAJVABFRLKTFSJWWOWZCAPNANZZRBZVWKEIUVTUMLBWEGINCKXHTTQRRFVTMPQKXBHLEKLAGLPJTAYBZFNJHEQSCJMBXIUKFGNEFRQNXVSDOEQCPWFUHPOOGDATYJYNITZ");
    tmp_msg_0.value.assign("FCMOZJAWKFYJZCVCQQQMIBPIVARFGSLBLRNHRRDSNBBDZUMTAKSKVQSWAGHIHQUEJVXEMODEOVCNFTRVNXCSBKKEDDEKNAPGTXHYEXJTGDSPFHTINGMHDTLSZHGWRORDKNQFBHDFIJQMLOYNWMX");
    tmp_msg_0.type = 163U;
    tmp_msg_0.access = 168U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OZIVOUKGLOCTXZADYTFDBPRRQZHCVYEEVCWTAMVSQCUDAWZOJJMOGNOQWOJ");
    IMC::Aborted tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticSystemsQuery tmp_msg_2;
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
    msg.setTimeStamp(0.668142426771);
    msg.setSource(21593U);
    msg.setSourceEntity(188U);
    msg.setDestination(32438U);
    msg.setDestinationEntity(224U);
    msg.plan_id.assign("UPIHNGIPNRPGSPGWGCXXIBDZDZDMLWKAWMKVPZDXZUXUTFEEOYUKGQTDXDYOYLDORQNPHYBWELBZBGTUUTYUFSIVZAJTBLABTPRYHWTCWKBFVQOKHMIHEMJRCXIPSUJ");
    msg.description.assign("ENUVDTUJUXRTHMMOOELYRHYCDPAWRUJIJDEPFDSCOBNAQJRUCRA");
    msg.vnamespace.assign("USVDLASAPYQKAEHLBZPFQYYDFMTJQMJLMMAZZEXWYYQVMOETCZOUQJGMYCBNLDHHNWCPWOIJNIUBACZRWGISWDPFCKQZPGTHKSXTPMBJPDXWREVRINBJAVFINMRHOWCMVRETZGQASGURBUKIZTYIJXLHSFRKHFOBTHVEJWWLZXDYBFCOPDBQXWRXXGTAYAANLQUDXHCTRSMJTUNLVUOQVSRKN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MNIFEWCOQOCOVWFLJKLPGSTRIP");
    tmp_msg_0.value.assign("NVDNHWYHAQAMYDVAOFQEYXVVBFHIRJOSPETPFDCUJTDXAWLCZIOFUJGUJTHGPQTZIGZSZXMEBGALLCGDIQDRXCNEPMFYIPPGXUOCEIDWHPVZBNTRSSDSOIQMLHLOZUAYXKRPWOVFFLGMUZLCBSHCEVQTWMEFMJBTYFKKYINOTUKYYRHAUKKAKAGYVKLVISOINBGMENQJQUJMVFQ");
    tmp_msg_0.type = 176U;
    tmp_msg_0.access = 209U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PMIYSLETXLGOBJZHMFSBGOYNFSLVRBTSTKSZVFIQLDMVHLUXPKOSXDQ");
    IMC::Dislodge tmp_msg_1;
    tmp_msg_1.timeout = 35528U;
    tmp_msg_1.rpm = 0.707977146688;
    tmp_msg_1.direction = 61U;
    tmp_msg_1.custom.assign("QEXTNNVEVSVYTWSZIZQGEZIHXSWDONTOKUUWXHGNLTHQOXLYZXWFMONSXAKRAVMBLEGRKBSJGKMHFLIESCKBVFWGPBDIVBOBDNOXAKIZCQCWK");
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
    msg.setTimeStamp(0.692195623129);
    msg.setSource(28120U);
    msg.setSourceEntity(96U);
    msg.setDestination(13434U);
    msg.setDestinationEntity(239U);
    msg.maneuver_id.assign("MOAKJRHVRCEUEWWFXIZLFKCG");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.986711651804;
    tmp_msg_0.lon = 0.629209789562;
    tmp_msg_0.speed = 0.564110132208;
    tmp_msg_0.speed_units = 53U;
    tmp_msg_0.duration = 3943U;
    tmp_msg_0.sys_a = 26812U;
    tmp_msg_0.sys_b = 64977U;
    tmp_msg_0.move_threshold = 0.438549230083;
    msg.data.set(tmp_msg_0);
    IMC::PlanStatistics tmp_msg_1;
    tmp_msg_1.plan_id.assign("EYYROJATTWYMLDPSGQSORLJKANRQHALMKIXVRMUHFJYQGEGKBBIWLXRSLJXXYDYRPKCXXVKEQDTMVXETOWMPUEFVLOAHYBSUMUNWMENVHBBIJIZECAEGZWJAVZVQSIHJFBNLODKYRTDCTBGHSIKSNSHDJYACKFTVFPBUQPQAFPFIZZJDMHJQVRUTUXDWZNZTPXFIACXUNSCWEGKLOCFDRDBGOEM");
    tmp_msg_1.type = 107U;
    tmp_msg_1.properties = 92U;
    tmp_msg_1.durations.assign("JSXTWYKVCQTMXQAGGEHVSIYAWEWBFHNXHMXRYYSSE");
    tmp_msg_1.distances.assign("QQELJGNIOQSHYENJCTDZWXRHTNXXJWBHRGVQKOBYKLOORTOGWZABQRWAH");
    tmp_msg_1.actions.assign("OHEJLJTKAUBMR");
    tmp_msg_1.fuel.assign("SQUUCYGPAHUXNCXMGFGKJIFPZAGIOMURWATQEUGONCKDDILCWDDHALLFZGCKHIYZOVYEIBNTFQXYUNJFSKHQGOPWOJZLZTEATBVBPRRPSZSIFMLTAWDQMSNTJTYQPNORZKTOEDQPEFAXTYWJUCINCVESNIWHMBCVQBNLZIAEXSLOMRQFRJMYASAEMJOYXROVDBWGLVRXKSKCLYVPWWMZBSCUEFHDVKBBNHKGQMPDUHFVXIXBXRHD");
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
    msg.setTimeStamp(0.644249024019);
    msg.setSource(26751U);
    msg.setSourceEntity(11U);
    msg.setDestination(12341U);
    msg.setDestinationEntity(137U);
    msg.maneuver_id.assign("SVCDKRIURPMZXIEWCSLGMEWTTOLHPDHJZOTQEFKLUOIQHVLPRUGZRAXEWWYEYBHKFDNAOIKDPSQRVXRUDNDDRBYXHJECBFYLAEBJZXLYQVVKGSAGKTBZWXBHLOBWNVYSUACXQKCPHUDYGFVKNTILXCMWQJSSFCDZDKBWIFOPMMSJAIYPBHUGYPIQWA");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 56U;
    tmp_msg_0.lat = 0.822989073254;
    tmp_msg_0.lon = 0.734063299789;
    tmp_msg_0.z = 0.627184181689;
    tmp_msg_0.z_units = 69U;
    tmp_msg_0.speed = 0.827113663663;
    tmp_msg_0.speed_units = 183U;
    tmp_msg_0.custom.assign("UNLLBQCJDOROSMYAFLKOENBMJJOWIHOCHGANPGRXYBAPJTJSOPSONZUTR");
    msg.data.set(tmp_msg_0);
    IMC::HistoricData tmp_msg_1;
    tmp_msg_1.base_lat = 0.37573381058;
    tmp_msg_1.base_lon = 0.742268281549;
    tmp_msg_1.base_time = 0.590429133266;
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
    msg.setTimeStamp(0.103304329943);
    msg.setSource(19580U);
    msg.setSourceEntity(129U);
    msg.setDestination(32699U);
    msg.setDestinationEntity(77U);
    msg.maneuver_id.assign("ETOWDFSCUBCXCHJKOOWFTHQLMZBXLIJNSUSHTMFQKHWZTDNDWSIQHNTZRFODUWJEVWCHJIIMTZDZIKXZESPMCWYEDKAFDSNLIGBN");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.50738850542);
    msg.setSource(8309U);
    msg.setSourceEntity(50U);
    msg.setDestination(14169U);
    msg.setDestinationEntity(105U);
    msg.source_man.assign("KSZPAKXHXHPIYHTQZKDZQLJAEEKUPFXLALZWDHIPCCUZXF");
    msg.dest_man.assign("NGBYVZWAIGRBVMFDQWIIPMLPG");
    msg.conditions.assign("SHMWKVXGEFZPFIWZQKIQYWOVKVYVQWALVDUCGNABRPVDRNSISYJZMAIJMBTBSGMGGKWLXJPNEDLHLZTCUEERPGQCLXKZPZNAIFJPTJUDBHVIJDRBQHZTYKKACXMEQRVWOXRCOHYLRDECAAYSQLBNYOHLAVIKOHFSQTACBUUQITZXKRFJPMSUUSJFWIFEGPOMSWXBUDNODXFAGFBJPCHUNWTMELGC");

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
    msg.setTimeStamp(0.936065464314);
    msg.setSource(50574U);
    msg.setSourceEntity(128U);
    msg.setDestination(65192U);
    msg.setDestinationEntity(116U);
    msg.source_man.assign("OWHLLXPKAWHNBODNZJUPIUMYIVQGEQWNXLPHOXDKRCGLBAKZFTECMOQCFGDLXMTOEAPIKBBTNK");
    msg.dest_man.assign("RRXTRNHZVLOEOHPLPTRFQUSENODLNXICAQBDIMZJDYJWISJMFJTLIEJSZITCNUUELKFMWAYHNVKMVYOACEKLJDXCUYHWQFLQRYGAFVBUTSOXNMRNWCZTSMVCOVYSUMFEHZUHOUGBHYKQPYFOCWPGEJANGOHXRQSCXSKPSJTZHJMPWNA");
    msg.conditions.assign("TCSXHTTWNNQGDHRUNHRARBGQPHGDUYANKSFGJDERYKLFJVBRFZZKULISWZCYXYDTQKOEXMQLZPNAUOEIJQZKMWVDUZVLWXJLZMDJBHAYXYIOGCDBISEWRXRDWXGICFEKCE");

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
    msg.setTimeStamp(0.748391977174);
    msg.setSource(56807U);
    msg.setSourceEntity(89U);
    msg.setDestination(21602U);
    msg.setDestinationEntity(227U);
    msg.source_man.assign("TCFUOTCLGMWELSJXDGNQRSEWMULCCLPAJTASZAVHYDMKUSCRGBOOCDZCEXNWWZVNYCXJEQMIQYWIDZYJX");
    msg.dest_man.assign("HEXOETFEJYEAVGLBBLYLHCUGZDUTDKFANAVRFRSECGORPYIGVXQCKMYSXVUJJUAWPWHLQRZTJLRPNCWYMMUKERODGWNQZPHAIPTOPUEWVEQLFMTYSEYHCUBLDRMBJQCPGAQXDNKOHSYZKECUILAZBZLOSZHOVYOHUMWMVZIOKDBASZGKLCZDA");
    msg.conditions.assign("RNGSIJWFAJJFBRADWMRGQNNPDTAQOHUZXXIBQBFCXCAMCHSUXJOLUELMEPQQHIWQPDBTESCLYXSYTZQDTKBBCJGJBYIAKVBAAPLUGUPFRPNXAIOPEOVZTCNSIUTFHDZWTMZVYULEROKZPYKBNUUNVVLJOTXHUVWSOMDGVCFLOZFWMNRVITGZEDKCWOMTGJMYFDZHKLWEECSLWKRRHSDWKAHMCGEENKYHIPNVYBHJYQMLQ");

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
    msg.setTimeStamp(0.571894492664);
    msg.setSource(5188U);
    msg.setSourceEntity(33U);
    msg.setDestination(9444U);
    msg.setDestinationEntity(0U);
    msg.command = 65U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZPEYTDDZRMWKSJTUHRLIRYKXYMBHMAIWADWMUBEKA");
    tmp_msg_0.description.assign("PCLRPCRNHUBXIPDRVCXEDEVEMWLRUYCZHFWXMHTDQDBSKQDSS");
    tmp_msg_0.vnamespace.assign("LAWPJQKPZKECRFXKE");
    tmp_msg_0.start_man_id.assign("VHTEMDHUNLVZQBNOZSUJOXPEELRTYNUTVZYEVIIOWVWDSYRLOTYN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("EHSQNUIONFCUYSMBNSLZROYUXQUMSUZMPYGJWAHQQZHVTLWJSYDNVBCGDDKAJCAXQRGAQYIWPQICELOIQLKBGIEPROGGNBIFKRHEEHBRVNYPATJUMOZFFZTRWJLZXAAMFBBSIQZFCNLSGVNFIWXTP");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.328290081364;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.124891219794;
    tmp_tmp_tmp_msg_0_0_0.z = 0.597750886621;
    tmp_tmp_tmp_msg_0_0_0.z_units = 102U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.844506941359;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 253U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("WJQPKGXOIGRARFFOVBZKQLYWTCUBCYRCVCDMRXFBNHUZDISMEKTMPAAULWCCLVVDGETSFEZOJFTXFXZJDIYZBTZBGPVOPBLMVHBBZKHXHLTLTKXYCAGJEAAQQIPAJJUQVAMNLEGMUQRUGUNXPIKHJPNHQRIENVFOSENKSWTJOXWSRRKDCNTSDWOFSOSZMDWHJIWWACODIPVQUMHGTAWBEZLVRSYHYHIEQQBSDEOPGXYCIXMMUNYZ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.15078333034);
    msg.setSource(13021U);
    msg.setSourceEntity(236U);
    msg.setDestination(4782U);
    msg.setDestinationEntity(36U);
    msg.command = 37U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OJAQGFSZNDYIPCLITFXULAXQKIEELXVKSDKXYLBKCPJJTZGFEQYRJBXOMSMSMHGWZDDJZLREKPNEORDDNFSIKBXGHEWOJZEWUTOOTFHPXPBVIGKOKSJHYUYMOHUQERPFFLJZTCVWPRSEJSHNIFMVPYZSNZTGZWIHUGLECXQBVNLAHDGUTPWBGQOHWCRTVKUMGANUCRWDXHJVVNTMBIQ");
    tmp_msg_0.description.assign("BZMEBMRDSRHFLJKDOHUWOXNSKAVVXAVOMELZRTTUXJWENMJHFFOMDEVOQRMEFYCSUOPIRCGHRHXJJGLYKUBPMGPDATANNWFJTLYCDNKSZLJTOUFRGWYQJVEFCPUYNGOQFLZLZZWERSBYVUKQBCOYQANVFEAVXLTKIYHKZJNGXBPKOSCYPIBQQMSDLGCGPMUZGSUDIHRTEHKBPVAZCJ");
    tmp_msg_0.vnamespace.assign("JAMRMZMIYRYIUZYWTNNYLSCRXDIMNHZDFRQAZMDLUVOACFIBXNBHFFVGLBJNXRLKFKBQDEOQGUAODOHQHKPCJEDSBPDPAJRCWEHAICWTSSKFMDICVUYGNVZKPSYSGPWOWWXIPEXQTVPEBOBLDVWTPG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VNSQSWPOWDJTAEKQDMUPFUCRNWYXNVCIRCWKMFFKBWYMJRWQZIIMEJNZIWKTKXVRAEHMZTHXHQHCTUSQQOOMCORMZMLHVHBREJCLVLAKZAKTGPQTSYHEFUNBGPHJQLVAOJYBPTBSCDTB");
    tmp_tmp_msg_0_0.value.assign("FGBCKDBJMLYRZSSTQWGYNXXFFEHTXYFNTHRBXKNLMTPSIWRNOOKSGXIXIPDYUHZZAUWPRICWEZEKRUDORVCCQVSJIZGHNSJFQDJTMEIMJJOEGNBLVZXBGPDKAMKHLPQEZRTZCSONNAWUPVHLOMDPGAJSEZNUQVLVIYMYCDLVBQFLCCKRWXRQFRXALIKFWAGNZTPWBGYWULHSVPVHKJJBKUDTYYQAPB");
    tmp_tmp_msg_0_0.type = 52U;
    tmp_tmp_msg_0_0.access = 94U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OUZIVQJXJPDCTPXYWABHTQENFUFATLMDPDRULGHTALUVHYETQHVWJQNGXPXCKRUWLLUOXGPQHAGMOEEZSZLSMMAKZMUHD");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LZYZMPLRUUEBPDRQONOPHUJKBCLOWCMSFGTPRTIEZQBUKEFCEJUNDSWTSUBVGLLJDLRNWVXI");
    IMC::Dislodge tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 678U;
    tmp_tmp_tmp_msg_0_1_0.rpm = 0.640541875922;
    tmp_tmp_tmp_msg_0_1_0.direction = 46U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XYRYCEBSJXMOOWAUKTSYILHBUQVTBNLOCCFRFGQLQWRFKPQGEQXPCDXXIEYDBVJDLEKERQIHUTNKZXDXSCYAFAPHIPHNXVGKBSXSEQMCIHWUIKTMUHZMMDKLDTOWB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LblEstimate tmp_tmp_tmp_msg_0_1_1;
    IMC::LblBeacon tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.beacon.assign("BXXCLUERMKSXAUKVUJEHBFXIXIVYZSCPJCKRJLTGMKTFFGHUJDQRVDDBPPDZFTJQDXVCKTRKDIAEGLWGOCLUCYYHSKYSDWCVJKAPFWOPIMBZSOLPFSQZOVYHKWNNLSEONAYCCIFEOPRYOMBDNWMHRTHJXDWZRVQQRCMIOLUWGMMXYSBLWVPNIBEUWGAKUBQEZLQHZPOQJJN");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat = 0.518510578956;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon = 0.925785216057;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.depth = 0.753432905314;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.query_channel = 9U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.reply_channel = 34U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.transponder_delay = 153U;
    tmp_tmp_tmp_msg_0_1_1.beacon.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.x = 0.25468250667;
    tmp_tmp_tmp_msg_0_1_1.y = 0.195042847187;
    tmp_tmp_tmp_msg_0_1_1.var_x = 0.875548011547;
    tmp_tmp_tmp_msg_0_1_1.var_y = 0.458147114896;
    tmp_tmp_tmp_msg_0_1_1.distance = 0.712119509053;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::GetImageCoords tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.camid = 36U;
    tmp_tmp_tmp_msg_0_1_2.x = 33186U;
    tmp_tmp_tmp_msg_0_1_2.y = 60964U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::IoEvent tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 126U;
    tmp_tmp_msg_0_2.error.assign("NLPPYMUOLHWOEUFQSSAZXROPAGMMMNAWRTOZOFIYZRKQYTWEMKEHBFTJIYQUVVNUBKFEPALHZKLEOTJEP");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.625390367547);
    msg.setSource(42088U);
    msg.setSourceEntity(56U);
    msg.setDestination(13902U);
    msg.setDestinationEntity(78U);
    msg.command = 120U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OWUXCWPZGGFLMKDIUZQFYJNSULLLT");
    tmp_msg_0.description.assign("MACUJPKSDQSZGRMEOHTLFSDVMRMETXPAAIHIKTTBQHOVJCISVGKLLSQRBKJBNXJDCKITEEANEFQHOHAWQWD");
    tmp_msg_0.vnamespace.assign("FGRQOPQKYFBWUHVALVZGRTBSAS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZZBQFJQLADQLJJSWRPZCMWGAYXKEYCGDKCYSXGCXDOOQNWORICFEDDIPEFALIOHYKWSCJUPZBENLIEREKBQFLCAYLTEHJAJGYOZUPTGAHNPDWEYBGGZVMUQVXKOYTVXNVFNHMTXTMFUSRZFURNMCUQOIRPRTKMBOBGEMXEJHNSTRR");
    tmp_tmp_msg_0_0.value.assign("DVSNZLZPYTPSIJUOZERDCRXUBVOLGIIORQMYRPPBEQGFSBAXWYDFSNBMEXZBYXUMVYWWJPQUFJKLNKMSBCIZWFEQKSPMQPCHFCNLETHTTEONJTQVJMRZYTEIAKS");
    tmp_tmp_msg_0_0.type = 220U;
    tmp_tmp_msg_0_0.access = 234U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GGPKYGBHRWXPBQFLQBRYGOYWRQTDRHICSESOUWGUHWXUAACMXLGKLRISXVWJRVASAEQTYVERJWDUYKFVCJQQTOWSJZOBAZDJTT");
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
    msg.setTimeStamp(0.738725272567);
    msg.setSource(11895U);
    msg.setSourceEntity(41U);
    msg.setDestination(26978U);
    msg.setDestinationEntity(16U);
    msg.state = 151U;
    msg.plan_id.assign("EFJPYOJLKJHBGPCUWYOCUWBRHLMPVOMGNOGSFKABIYWDQZXQQTSUDDCZVHEHMLUYCZDVUKKZVYNSBFHTBOPKHASDBZEQHITMWNIATDBCNJWAFOLSNAYKEIOVAPMYAIKURQIERDBUPGBLTOGGLPJZKUFZMIETCWSEKGNSIMZFRTTUFXMLXLSWMTWEGYPNMRXJJECHRJCQQXTJVAQBPHANDVNVOLWRRXYDXYEXHZGP");
    msg.comm_level = 68U;

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
    msg.setTimeStamp(0.966712772316);
    msg.setSource(9323U);
    msg.setSourceEntity(91U);
    msg.setDestination(33030U);
    msg.setDestinationEntity(86U);
    msg.state = 225U;
    msg.plan_id.assign("MNWCWXTTBAXNIURYRKRWMSTDQIKJJFECGTDCJG");
    msg.comm_level = 192U;

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
    msg.setTimeStamp(0.833907025455);
    msg.setSource(19130U);
    msg.setSourceEntity(119U);
    msg.setDestination(9709U);
    msg.setDestinationEntity(214U);
    msg.state = 197U;
    msg.plan_id.assign("TBXBRSVMYVHBXKXZJWUHYFRNM");
    msg.comm_level = 136U;

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
    msg.setTimeStamp(0.932975044463);
    msg.setSource(10243U);
    msg.setSourceEntity(142U);
    msg.setDestination(47429U);
    msg.setDestinationEntity(18U);
    msg.type = 148U;
    msg.op = 108U;
    msg.request_id = 52108U;
    msg.plan_id.assign("DQSVTHRXBZSFXJJGXRNTECBDUSUTHJIBWVDOZQSXXJYKIIBPYPYTGCPLLPOIGRSCKBRVNMUVLWKTLFANUHHKIZLZTMNXCEOOVQQEAMOSROQEJQPGMDOASVYWYDGWWXUQCT");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("WLVQVBDZXEIFIMVMDFLDOOAHVHKGXVKHCJHROUDLPKSCHZMGZHGFPCAGNWGYPQBCEWIJUAUNTKJJNYILSZDZEPJOEOSTZEYBRESNZXSXMDYYUUBFIGOTMZRGUWIBFJQLGNOXWSQKFYTRMRNLACSQTLWVURHCYDEFJVCEBPMIPSFIOVWIXWALF");
    tmp_msg_0.text.assign("MGTNIRDKVZTXGFSGJDFTXNAVOILJEKCTPBLSUVHHMOMWCWJSDYHQJZZIKOMEDPBMNABLUMJDUJLNTWDHOGGYYPCJYHMQAEGQFFOAZKLFEYPOSVRQUPZEMXHGWTFVXTGSOROBLLFRUJLWDRTQUEKGZNXSPZSIBIUNUPWYIZBRPJCYIPWRYVRUSUACFANKN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WBLVAMYVNMICCLJGRHQMLXJQFFDDAYKZEYDOEEQBUVPNMEZZENTGBZEAYLFKOOAJNNGNGVAWSIFQMIKHYYXVQLQSNUDTKRBPUOAOIITKIZZRTJHDAPXCWRDOXLDYJBCEWRWMERFKUSYDAWPTPECCDGRZEPWJMRKGOTQLGSZBGXJTNVTZBOJPFFXSIDCLCGHWVQKQRUZBKIHYHSWYNKTJNLXUUMGOHCPSHJUUHXFUBMHX");

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
    msg.setTimeStamp(0.995370683909);
    msg.setSource(41798U);
    msg.setSourceEntity(177U);
    msg.setDestination(16254U);
    msg.setDestinationEntity(188U);
    msg.type = 201U;
    msg.op = 180U;
    msg.request_id = 63354U;
    msg.plan_id.assign("ZYUBBMNKUQFCONIJOSJHXVBJIXTMMMVLGY");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("VYIJECEEYJSGXBHEXWBIQMNFMZJOCWGYBOLIGTLTMMXDHTXAXCUPPVQAVZPQPEOBNQRQTWDNEITJQABDJYSECLHEXVUNVGYCTTJEUKXWQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWNVDBDJFOIJSYIMEUONCTVHKEGTBRTJWHIIKDPMLMENJXUOAEHLOUPBROUYPFELRFWXTGWOHGBKPDPKDPCQRDVGAYAPEBSRMYSFBUJCZSZPFNUBQYLSLEHVLAQMTJDVZZQRHTRKOSWBWECIKDWXOUPLYNKJKZINQYKGWPMCXAZOATIRAGXQVLVHXIFXFCCCYGUFWTFJBHHBVRIXVMWFZAXNQSNLCUCVO");

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
    msg.setTimeStamp(0.615329523819);
    msg.setSource(12316U);
    msg.setSourceEntity(95U);
    msg.setDestination(35567U);
    msg.setDestinationEntity(90U);
    msg.type = 171U;
    msg.op = 105U;
    msg.request_id = 9027U;
    msg.plan_id.assign("IKXLLHJINHLKATTTIINEBZYRVMRFGQZLCKQWBKFBWTULJQGIZEPBVWOCJFIZUAJARVOHDVPRIKASVMJFGOYFWEBPCSSTSGJJQKMDNTCOZJOCNIOJKKXTGAEUOFVMUMDXCLRUQSDHGHUXQXYVMCEZHHAEMYQLLXFBFYRWDZUENBWQSWPVPDPDDSZPNUISSKSHPVCRYELIBXRVMZEOYYWGMOWJBXAQQDTDNKMNA");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 246U;
    tmp_msg_0.value = 0.980913968108;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XYUYTYJZQODTAWOKDACGWYELXWIWBXTPTLRRVZAHERAZKGCMCLLJFSCXUIBTGDSNDYDPRQKILYNGAZDRSSEBKBKEQKZVHFUOBOFQAGHAQZBHYDJWOCVVJZTCPVOSKHNNJEBJHUW");

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
    msg.setTimeStamp(0.62585587945);
    msg.setSource(51666U);
    msg.setSourceEntity(56U);
    msg.setDestination(15394U);
    msg.setDestinationEntity(20U);
    msg.plan_count = 4312U;
    msg.plan_size = 2037040918U;
    msg.change_time = 0.283339465868;
    msg.change_sid = 62621U;
    msg.change_sname.assign("JQYZTOFRXZSCJPIJWEOHXZBOTAVIFPJHSXTNYWDGHMUTPXBQLMIDVSDNTTFANQJFKVGRCMBSCYZWDBHWHDWHAUZAIUPHMMRMWQISUIRLMUORGXCKXKPFJRDTMCFWSVWSAVULUIRQEOCOXGEQPLQJEOEMBFZFBQKBTXDASUVBRAYSFLKCFPETKJKEEALIDCDPNGEYHLLJNCKVZCAGPWQNEZMYSIJZYNYNGZVQBHVIKONYGWYUB");
    const char tmp_msg_0[] = {-111, 64, 1, -93, 39, -84, 124, 14, -54, -68, -118, -4, 82, 98, -34, -9, -93, 39, 64, 18, 102, -104, 122, -22, 55, 46, 43, -88, -63, -85, 40, -93, -39, -54, 80, 17, -86, -70, 49, -76, 0, 51, 116, 79, 41, -124, -115, -51, 125, -32, -67, 32, 57, 74, -35, -23, 93, -101, -68, -79, -85, 102, 42, 29, -115, 19, -2, 35, 114, -30, -31, 115, -21, -45, -99, -100, -12, 67, 63, -90, 19, -108, -86, -112, 108, 66, 26, -67, -42, 27, 73, -89, 84, 74, 119, 76, -127, 118, 32, -112, 22, 123, -15, -122, 108, 55, -4, -75, -77, 61, 20, -37, -64, -76, 43, 107, -85, -39, -66, 11, 31, -70, -11, 102, -39, 21, 106, 13, 48, 21, -122, -128, 42, 118, -18, 37, 91, 18, -39, -105, -21, -78, -59, -86, 123, -125, 85, 66, -54, -15, 5, -20, 26, -22, 25, 50, 16, -94, 15, 119, -2, 79, -25, -60, -39, -112, -102, 16, 56, 27, 92, 67, -83, -21, -107, 35, -99, 32, 103, 73, -12, 119, 33, -30, -60, 100, 122, -43, -42, 109, 58, -15, 76, -85, -117, -119, 30, -98, -110, -115, -127, -83, 16, 77, 77, 118, 20, 7, -74, -124, 33, 47, 12, 55, -84, -26, -26, -86, -98, 56, -37, -88, 122, 122, 102, 35, 30, 94, 68, 9, -122, -25, -128, -128, -71, -104};
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
    msg.setTimeStamp(0.334271615908);
    msg.setSource(64516U);
    msg.setSourceEntity(51U);
    msg.setDestination(250U);
    msg.setDestinationEntity(223U);
    msg.plan_count = 59036U;
    msg.plan_size = 3363448893U;
    msg.change_time = 0.862752118033;
    msg.change_sid = 16952U;
    msg.change_sname.assign("OXDTZAILQBAUUETHEBNVMJCPDPIKPEFWZWXHGZQKPXQEBBIOJTXGJONVCRUMVFGRZQIAJUXZZLNEHHGRJUOXQCLLNWMQUADTGFFCNFAHBWUVVDHUK");
    const char tmp_msg_0[] = {-17, 41, 72, -37, 30, 21, 16, -89, 56, 73, 87, 19, -88, -69, -106, 14, 74, -79, 26, -45, 82, 20, 32, 74, 58, -65, 60, -107, -118, 54, -42, -11, -28, -108, -29, 54, 37, 40, -126, 37};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OJSXKWCBBHMARXEVCBSDZKUKTZTLKGLWGFJTOQTOMIOHQRMHJCVUDVXMSGADLYAPGLPCCDVFRHBUQVVJEAXALIIATLXYNWHUEYACIRHLZXEOUENDFCAWDJUWVZPZLXDKBBQZLTRFQNCYVTQKOSOYQRFPTLSFGXA");
    tmp_msg_1.plan_size = 59500U;
    tmp_msg_1.change_time = 0.476523254875;
    tmp_msg_1.change_sid = 23983U;
    tmp_msg_1.change_sname.assign("PRRSUMDBQLFVWBGXCUQRMWEJFQGXDQMSRZJLIJTOYDLYJDXX");
    const char tmp_tmp_msg_1_0[] = {-89, 35, -52, -35, 22, -68, -95, -52, 9, -27, 22, 65, -113, 80, -52, -115, 74, 35, -63, 94, -65, -111, 11, -114, -50, 14, 36, 93, 64, -80, -30, -10, -123, -96, -97, 10, 32, -101, -9, -41, 3, -33, -112, -113, -61, 102, -122, 124, 100, -62, -91, 25, -71, -117, 118, -74, 23, -72, -71, 29, -37, 117, 29, -92, -37, 42, 50, -125, 105, -126, -42, -13, 25, -91, -74, -35, 101, -87, 119, -104, -13, -5, 65, 105, 91, -126, 90, 2, 16, 33, -110};
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
    msg.setTimeStamp(0.715477293687);
    msg.setSource(39309U);
    msg.setSourceEntity(193U);
    msg.setDestination(1624U);
    msg.setDestinationEntity(172U);
    msg.plan_count = 62024U;
    msg.plan_size = 932559690U;
    msg.change_time = 0.696439002891;
    msg.change_sid = 39458U;
    msg.change_sname.assign("WTGOJGWJKMDDJHEVBMZNQETOTAGYYTPAEVKDSSNWUSLVS");
    const char tmp_msg_0[] = {118, -8, -112, -58, -80, -66, -26, -92, 51, 97, 35, -36, -92, -121, -65, -24, -13, -53, 46, 55, 90, -126, -42, -107, -61, 17, 6, 54, -104, 81, 2, 46, -120, 28, 69, -63, -93, 21, 98, -80, 112, 31, -3, -68, -56, -10, 56, 96, 5, 100, 47, -6, 12, 41, -38, 19, -76, 120, -5, -10, 34, -80, 70, -10, -122, 72, 43, 11, -23, 44, -60, -83, 60, 73, 8, 30, -22, 94, -49, -30, -91, 80, 27, -110, 120, -58, 79, 54, -123, -83, 122, 91, -37, -116, -114, -78, 1, -42, 7, 122, 0, -110, 87, 108, 122, -69, -122, 124, -99, 92, 51, 17, -82, -104, -109, 73, 114, -84, -26, -1, -21, -112, 0, 117, 4, 113, 54, -107, -127, 107, -15, -74, -47, -115, 32, 42, -107, -50, -44, 41, -36, -1, -126, -71};
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
    msg.setTimeStamp(0.510910104266);
    msg.setSource(41823U);
    msg.setSourceEntity(194U);
    msg.setDestination(61480U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("HKMIEUKZHEBLSMQYDHGZXYAWLEKYPTPOVMXDDNYQWDWTKTZELVAWBOHRXCRBUWQFJZVAQMLIJBCSOMYPCKUADYNGHCOANQSXSFKWNFPMPRSQDVLWYFPPXERIHUGJIHEXMVUIAFTRAXMIQCTOFZFZOICZKICJWDTCFSUZQTEONLGASTFNJJQBGWMAJUODRXQYIVBBNDAGPLXVLERKBRMFWEZJBHUBGTJILXPPSGYYH");
    msg.plan_size = 64749U;
    msg.change_time = 0.699715392023;
    msg.change_sid = 43112U;
    msg.change_sname.assign("CGEVPCADHKUXTYUIQPMWRBSOWOQJEAEQHSLUDHLMTZCSWSHRUFDNBUVOERBBTZEXUNQKMSMHIRPPLOFMASXIPCUKWLHUEVIVPZXAKWCFJSKZZHFQNIYOBVJGGC");
    const char tmp_msg_0[] = {-21, -43, 29, -58, 113, -86, -40, 23, 98, -109, -60, 110, -5, 47, 25, -105, 40, -19, -103, -27, 50, 77, -117, -110, 7, -47, -88, -73, -105, 53, 6, -127, 46, 93, 44, -44, 88, 31, -15, -79, 55, -28, 9, -65, 58, 116, 57, 117, 79, 84, 43, -36, 15, 11, -44, 102, -19, -13, 1, 28, 62, -14, -26, 41, -126, -64, 14, 89, -128, -2, -78, 27, 106, -92, -54, -40, -97, 49, 18, -6, -66, -54, -52, -113, -16, 94, -43, -57, -59, -121, 5, -51, -31, -10, 117, -22, -68, -88, 58, -47, 64, 16, -38, -104, 116, 94, -44, 26, 40, -11, -85, 82, 95, 44, -71, -54};
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
    msg.setTimeStamp(0.747942988365);
    msg.setSource(47247U);
    msg.setSourceEntity(51U);
    msg.setDestination(63190U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("XABUMYXAFVLQWHSGXGXHYUCSKEVGFZRLJUFBCENWORXLRBECRDCHZJQVJWVSPBAVPNJTZIHLVNMVYCFWMPSDVDLSRARWKHNCRJMEBVX");
    msg.plan_size = 10558U;
    msg.change_time = 0.374524378996;
    msg.change_sid = 52088U;
    msg.change_sname.assign("ZDANAOXTKHZMDFEIZRPIXQSOCJBNVDAUMLITLNJMNYYVQOAQKGERZHTWABPYKIWQQGCJOKVJNCXXPKEYCVSOOFDVDCNWUTPTJWQWGPZVXFRSUMSGKRLBOMBSJMY");
    const char tmp_msg_0[] = {48, -19, -9, 18, 80, -91, 97, 40, 80, 68, 29, 124, 29, 13, -40, -79, -20, -114, 122, 61, 5, 13, 10, 8, -25, 75, -90, 70, 73, 13, 121, 76, -8, 73, 98, 15, -127, -117, 65, -96, -33, -88, 92, 110, -107, -46, -43, -121, 14, -8, -118, 120, -47, -29, -102, 93, -125, -76, -30, -29, -113, -4, 1, -97, 41, -78, 81, 101, 4, 66, 61, 115, 7, -128, -112, -126, -70, -3, 99, 27, 34, -116, 44, -48, 125, 20};
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
    msg.setTimeStamp(0.697560594205);
    msg.setSource(36591U);
    msg.setSourceEntity(98U);
    msg.setDestination(56583U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("NNPCQDRUZGBHRWMHTIQDHERKLSBEEFPYUMVFSQRYDIXEGJZUOLILHVXUXKHTFPHUVBBRVFFXKVPD");
    msg.plan_size = 10471U;
    msg.change_time = 0.239634224944;
    msg.change_sid = 3217U;
    msg.change_sname.assign("XHRSCPIARDIWKIRHZTGWXMCBZYBSB");
    const char tmp_msg_0[] = {-100, -17, 119, 88, 102, -110, 60, -91, 59, -111, 72, -72, -25, -107, -109, -91, -108, 94, 68, 110, 103, 48, 16, -96, -43, -87, 43, 98, -42, -128, -118, 24, 10, -88, 116, 67, -92, 102, -31, 110, -25, -66, -35, 104, 27, -6, -1, 93, -114, 98, 90, -99, 126, 1, 26, 36, -54, -82, 12, -126, 79, -20, 87, -89, -118, 116, 72, -108, 69, -107, 33, 6, 18, 40, -13, 114, 19, 70, -35, -36, 119, 74, 106, 13, -54, 120, -6, -2, -82, 124, 41, -107, 48, 53, 88, -86};
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
    msg.setTimeStamp(0.754253993081);
    msg.setSource(61690U);
    msg.setSourceEntity(22U);
    msg.setDestination(8438U);
    msg.setDestinationEntity(235U);
    msg.type = 1U;
    msg.op = 95U;
    msg.request_id = 17500U;
    msg.plan_id.assign("JDXLUFVCRNKONSVLYPSTRHAAZKLCITELCCEANMDKBIPDNPPEBKUUMFGFQBUFZOAVJQPUINWGYBPHHEHSQNWBIGWMLLIDAFCMJTKT");
    msg.flags = 26426U;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 25141U;
    tmp_msg_0.status = 231U;
    tmp_msg_0.text.assign("VYPVORBLJHBZPYKSWEEZPXLPFXWOGQYTIKRUKIFBDZHPOOUEAIJXHCFVFGWEGFNROBCNOIOXSTNMCNDLLYWXALNZAFPYPETIAQWPMMETTRXGYDZCZIUSFGUHYZGLTDNRJFSQGQIHVJWLVEDUCRQCVEYCMTJYQBSKDJVOXIKPLQRBVAOSBMLSADNTQZHECYONTRCEKQMJAAGMFUUHVXZL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UNSVUGKKXHFEVSSPPQSCVAAGJYOOMXBCFIBHGVXUXZNJAEEHNYESUPNJPRTFHNWSFJSCPUPBWXLWOMIMQBXDEAZUZKBGLTQANQIHRCTPMDOJQWOTVBQWKDHVWIJCDBZKIDQUKDMLMFTFBCHQORZARYTGYZGLLTN");

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
    msg.setTimeStamp(0.126140386006);
    msg.setSource(42891U);
    msg.setSourceEntity(79U);
    msg.setDestination(30091U);
    msg.setDestinationEntity(241U);
    msg.type = 223U;
    msg.op = 193U;
    msg.request_id = 17535U;
    msg.plan_id.assign("OPVAYHBSPDWDQKLHYALMCEJCBCIFOIKTAQNGYPVIVKNMVBLFZXWQHKVMREYONRVSLCMRTFVOLNQUZIPBFWCXZGAZJDCXWXSHFAFJMLKDREURDTDGYITKOMYRVLFYOIETAYCXPH");
    msg.flags = 30432U;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 147U;
    tmp_msg_0.mask = 743802992U;
    tmp_msg_0.scope_ref = 3003065488U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GBDREIYLUUXTSQEDBEECWSKCCQJWPMZDIGSTILCGNAVPFONKJEYZNANFPTUHSHBAFCUVXNJIIYTAMJTJZZYKQ");

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
    msg.setTimeStamp(0.649285187886);
    msg.setSource(338U);
    msg.setSourceEntity(54U);
    msg.setDestination(21566U);
    msg.setDestinationEntity(245U);
    msg.type = 138U;
    msg.op = 220U;
    msg.request_id = 4074U;
    msg.plan_id.assign("SFBHPLDKWYEMKDCVBJEQJNRCPMJDHTFQIVXDNYNGRDUHDCRUCNLXSTDXEKHVORCZABCBTZBWXTPQFQGLFOQTVITFYMKMVKSIAGFXYXFMVIHMVSWRYALCPFADHALRYQMXJNGBIUEJCOZHHUYOKRWJCIOCBLZZMKAVLQQLVAXNGKS");
    msg.flags = 50737U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.78771895689;
    tmp_msg_0.x = 0.389031232513;
    tmp_msg_0.y = 0.284680690442;
    tmp_msg_0.z = 0.182422244252;
    tmp_msg_0.timestep = 0.931898488095;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KMBXTPVJMRZGRMFVNBGMOJPJLTGGASLXCLFQXBMVHJYDTRUUWSYRXVSTHBEUWYABQYBQHAPMFIZJAQWJRDEIMHTQRKGBEWKADWWWNVELWBGUDOVARUOVGCNRXNSWIPCDYFDUJMQZLUDFIDFYEPEJNUVWCHOBMEOPOIYUPLGOEVXLZKXXNZSJNTTNAKSQFIRCSOIGEOVMP");

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
    msg.setTimeStamp(0.396063494434);
    msg.setSource(44357U);
    msg.setSourceEntity(150U);
    msg.setDestination(60202U);
    msg.setDestinationEntity(28U);
    msg.state = 138U;
    msg.plan_id.assign("INRIYECBUWDOMNURJGPRKBQACTJGNZTSEGGNMYEBVHVAWHMNCGCOSKHYUTEBDFJWGRXUZUFEUILCDTSMJAUCVLNXRVPHTSZXWJGXPLQIQZAVWHKNYPFKIFTWVZXBQRJHGDOYFBSWAAJPBCLOQVMATYGDTMQBEGKAXBTVNDSTYVOWZOFPKRLYZIAULNPMSMLLCEEMRJRKJOFIYDJSCOXCWVLHFXFYIKMNDZBQIXHDP");
    msg.plan_eta = 923701582;
    msg.plan_progress = 0.310176218048;
    msg.man_id.assign("WQZGUHYSDXEIXOGJKGLBGOMBLRWTLVYFNPMNRAFBKJOVYGPNJHNFGRQHPAODSVSZDBEERPGSTQYLSUWBIBBKYZCJQHXYKEKUTDOLTJOWRAILDBBMVVNNUHXDDRNZPHM");
    msg.man_type = 9824U;
    msg.man_eta = -1633120389;
    msg.last_outcome = 38U;

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
    msg.setTimeStamp(0.244602433221);
    msg.setSource(24415U);
    msg.setSourceEntity(3U);
    msg.setDestination(11297U);
    msg.setDestinationEntity(161U);
    msg.state = 0U;
    msg.plan_id.assign("ENOGJDZCUKQHKALTEFSELJRDJAOSYIXLZNKUXWUWBYBWXAOMLZYJNCEHTLMVQDVNBXDMKYVQHFLWPTGWSCRNESBRBPPXBZSUXBDNOSQAPRLCFECVMZQXIDVYZYFOKZGAEJKWYK");
    msg.plan_eta = 1290933576;
    msg.plan_progress = 0.520394709849;
    msg.man_id.assign("KIALTETVFIWDRBXIDNMFEKTXRCSXQOFLQPUMRHRHABBIUCZBMDCOFRIHEHYOBCPGLFPRARXOKWNVPVMDAYNWNVJCUTTMZNSBCXLVLULEFNXPPSLDQQPEJOCEDWSULSZUBDLGSYQGSZRF");
    msg.man_type = 33101U;
    msg.man_eta = -1748695603;
    msg.last_outcome = 58U;

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
    msg.setTimeStamp(0.295125930379);
    msg.setSource(26324U);
    msg.setSourceEntity(202U);
    msg.setDestination(46572U);
    msg.setDestinationEntity(127U);
    msg.state = 41U;
    msg.plan_id.assign("QHGNINMBUINOKAACAAJJYHPDDXHDCKGPOKBSNSWZSZCCSYRBIVWXRGOUAQMPOLMWVKUDRAJLXXATZZRWWFGQJOGRZPSOFLQHDUVFBFPSJQENCXLOUTUWQKJQRHSGHHEFNGITLMKSQTMFU");
    msg.plan_eta = 1899439339;
    msg.plan_progress = 0.0485389448084;
    msg.man_id.assign("VIMQSWTFELHAZKVHFDUUKJUFIGJMSURALWLNDHTNHRRCYMLIASFQXZSDUBDMVO");
    msg.man_type = 2969U;
    msg.man_eta = -2064277914;
    msg.last_outcome = 158U;

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
    msg.setTimeStamp(0.493622159525);
    msg.setSource(25381U);
    msg.setSourceEntity(220U);
    msg.setDestination(3748U);
    msg.setDestinationEntity(21U);
    msg.name.assign("MFEYRUFGROIXRZMGRTLEUWFDUIQJBGNRNGCISOKZQJBZXSUSHTAOIMXIGUEKDOQWYETEBJPDWURNDMZCOJBXKAZDIKHSATXIGZESPRAVCYFVATMLHAQBYSKAMCCGZGQXAFVKOKYKXBLVJCONBAPUHLXTPVWURRFPSCDBODVLJFWGJTJKPMLYDPVLBGVPONPYQSZXTNWHEVXFQQYCFMYLIDK");
    msg.value.assign("KWEVGGSSYURSXFZQLBAYTPSBYDNMXYGWHCOCZSTMQSBUVZGXLZVJTIAIFLLGURHRDHNKJBNITT");
    msg.type = 56U;
    msg.access = 230U;

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
    msg.setTimeStamp(0.930659089837);
    msg.setSource(15230U);
    msg.setSourceEntity(101U);
    msg.setDestination(22251U);
    msg.setDestinationEntity(66U);
    msg.name.assign("OEFVIMRARVMJAGTRWOKUAQNQRDKXDWDUGKYQJMKQIBUDGOCKKPIPBEJLNTYZTLVZRXYFJFNKDPEXRTMBPFSEVOCZSN");
    msg.value.assign("XBVLFXQMWULNLFKNGWJZCFPBQCIHLWVGKDKPKUDUOSTZRXOFMGCAMEACRIWWMMKUTHHSOTWQESORHEIVQHIAQLSOBADPBEHPLNWTWH");
    msg.type = 19U;
    msg.access = 178U;

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
    msg.setTimeStamp(0.987479368453);
    msg.setSource(58988U);
    msg.setSourceEntity(91U);
    msg.setDestination(50752U);
    msg.setDestinationEntity(90U);
    msg.name.assign("CLPNFNVVGEYFKSROVYARHVGITUBRSDMCSRRNUYALXJZADPHUTQTJXFUCSHOBHHCRYEODVZBUYXYYNHARUEIDNXWDNHPQKZTAIPEPEVZJMNQXCNEOJHWXIFBJHOZOWSBWUOSLWRUTQQIGZLIBGQFENKDZPIGFUXWOWJGSJQFPLKTYPUMGDMRBIS");
    msg.value.assign("GTBYQKHUWUGMKTVOLCROLFQABFSIWYKTKJXKYNAJRPRGMXENCOGGIFUDQMQVTVXOZPODNMSOMJGSTLILLXGUHESADIIKMMWJAACUISDZZQWSPHBPNAWGWDMFZWVDZNFVJVIFUREURSQLPCBEECVYLGJBDEXCYBRQPFYJWU");
    msg.type = 129U;
    msg.access = 84U;

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
    msg.setTimeStamp(0.832202566763);
    msg.setSource(27346U);
    msg.setSourceEntity(102U);
    msg.setDestination(23303U);
    msg.setDestinationEntity(6U);
    msg.cmd = 239U;
    msg.op = 203U;
    msg.plan_id.assign("CZELIBTQQZDTQKPGPAUZGSFPIASWUCYENWKUQHIMCGEUULCZBKFRXNWTFTUMAEVXLYZIWOJRXAJPVSGOSLJTZYEVWDKPQPFNSBDOHTADLHMAVJXMJAVIDGUSRKDGJWJEXGLTSYQIZQMPVBUPOFYOQTGFTYPHOWKZITCRLSNGVAXSUXEUJCBIWCNYEGKVRXDOCNVDYXLSIECRQJADIRKQEFOJNH");
    msg.params.assign("CLHHJEMWYUZBPTRGOARIZQUELFXECFXRSLHFNMMQQSXOERJSQDAGIEKCHIPYEMWGRQQEGYHGDLRMBKUBBFLJNZNWUTYVXZHTIIMQYFVTCGBBONOCNMJSLGRLIORMFMZKBDFOTWKUVSCKPCEANBVVXVDAPYVZHPEAYRDUZSASOUBJLPAXKTZTIVNAGGWJTFZCNMQUZIYWTSAUHSYRD");

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
    msg.setTimeStamp(0.535718520158);
    msg.setSource(18359U);
    msg.setSourceEntity(73U);
    msg.setDestination(10101U);
    msg.setDestinationEntity(232U);
    msg.cmd = 70U;
    msg.op = 180U;
    msg.plan_id.assign("RYKSVPQWSEKNAVJTAOFUGJJIFJQLIMKVVASOSQYOLFOBDHHUWGZLLAONUTTEBEIMAJNNTRWKGIUFAHXZNANQXDXPMSNCGELOXMWZUCESMMUGGUZZZFVIVKUECCAWLGXHEZCMDPQCTPVLILYRHCBJJFWVTAMTS");
    msg.params.assign("BPANJPDUGLCHZDWSUENWRTHOBXCYGXHWXAQWGLZPVKCCFLITNWTZVZUDZVGPHDMXRFCQPJSJYGSIQLABSCOHOPERNGCVQNAJBKFMWHETRRNPLGKIYFQXXQJEHKNOKBAMICZQLXREZVKJZAIJDKQHIPJMTFYBMOQTTTTHLKGOEAUIVWCDDOJVSVUIWNFNRXCKGMPOMSWFUFSSZEMUEQEBYXBIYSHFMFOUTZWMADIVY");

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
    msg.setTimeStamp(0.907076118034);
    msg.setSource(30703U);
    msg.setSourceEntity(192U);
    msg.setDestination(2638U);
    msg.setDestinationEntity(26U);
    msg.cmd = 191U;
    msg.op = 104U;
    msg.plan_id.assign("IZCWTNBGCQUBGKKAEKIQZJCXGXTULHLQOSQNTMEXUSPLVASLVNELWHMMJONKJZBMZSBFIUPJFAGWUAQVVYDDXEHNTHOTABYGYFXTRRIVEPPCK");
    msg.params.assign("RCQSDWGGQFUCCJTAZTYJRE");

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
    msg.setTimeStamp(0.908971512813);
    msg.setSource(27231U);
    msg.setSourceEntity(123U);
    msg.setDestination(3765U);
    msg.setDestinationEntity(132U);
    msg.group_name.assign("ZWYEDLYTKELDIWYTHKJNDWDQCZQCVACUDDEYVPRMOQSSHYAXSHUUMASPRBJNHYUGXPJXDCMMOEVIMRACGVTTELYHFLTZLFZZLIBAQOXLXWSNZZYVNPDQJBRGNOTZMOEUNRQOFMPTIJIHRVFMHVRJWPUJGEAAULPBBQGIHJSYWFZSMLBSCRKBGIGRKOFAGFXTTINPGJBFCQKBDZXUXHICKOW");
    msg.op = 18U;
    msg.lat = 0.810830212708;
    msg.lon = 0.947014233341;
    msg.height = 0.743668026028;
    msg.x = 0.952822722965;
    msg.y = 0.734431055216;
    msg.z = 0.446108220455;
    msg.phi = 0.441623770774;
    msg.theta = 0.0698398955035;
    msg.psi = 0.441264329822;
    msg.vx = 0.275568788465;
    msg.vy = 0.915642743726;
    msg.vz = 0.221700549317;
    msg.p = 0.851010718095;
    msg.q = 0.907915205345;
    msg.r = 0.866382243847;
    msg.svx = 0.407880437831;
    msg.svy = 0.786666736107;
    msg.svz = 0.956992767052;

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
    msg.setTimeStamp(0.756415602238);
    msg.setSource(43441U);
    msg.setSourceEntity(166U);
    msg.setDestination(21485U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("BHUZNSOHDYLFZWSUDFDNEXJQGWJQGMXXWVKHNQVNLSEAFDTRBLKCFJIZRBHYCJOHIRDHXUUASMBDV");
    msg.op = 151U;
    msg.lat = 0.868668348018;
    msg.lon = 0.920033050317;
    msg.height = 0.991265423725;
    msg.x = 0.266831442772;
    msg.y = 0.392703911531;
    msg.z = 0.779816573991;
    msg.phi = 0.949584415488;
    msg.theta = 0.797250680342;
    msg.psi = 0.731393278202;
    msg.vx = 0.282587873336;
    msg.vy = 0.804070394448;
    msg.vz = 0.90833288941;
    msg.p = 0.222375107247;
    msg.q = 0.217574312383;
    msg.r = 0.650367092934;
    msg.svx = 0.752102414562;
    msg.svy = 0.936199195351;
    msg.svz = 0.263474388079;

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
    msg.setTimeStamp(0.534980327827);
    msg.setSource(45301U);
    msg.setSourceEntity(150U);
    msg.setDestination(41754U);
    msg.setDestinationEntity(107U);
    msg.group_name.assign("XYDRNHDYMXUYYAMIDPWPPWEJAISQGWFNRKHDZKBACLMLQJMLNEQRZACWPRGIZOBCZYXUNHTMCWSQBNFLVBXHHFRIOJJQVRPZEKDQSTCMTHOOUUGRLNWITSTDCUJZFLESDFXWTBKUUWCOXBVHJAFGPNAULMAXUPHKTGKGQFBEZFGIDYVTPVGLRHBYYBVVNXPIOEXTVIAWSNE");
    msg.op = 119U;
    msg.lat = 0.382024384531;
    msg.lon = 0.739382236778;
    msg.height = 0.854226442565;
    msg.x = 0.0703483264385;
    msg.y = 0.450488269813;
    msg.z = 0.983669362279;
    msg.phi = 0.501685105064;
    msg.theta = 0.958424499752;
    msg.psi = 0.351718578921;
    msg.vx = 0.282529711051;
    msg.vy = 0.101009287871;
    msg.vz = 0.686865049653;
    msg.p = 0.0508081952642;
    msg.q = 0.828574324554;
    msg.r = 0.984600498238;
    msg.svx = 0.34737616847;
    msg.svy = 0.898292649717;
    msg.svz = 0.560335451918;

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
    msg.setTimeStamp(0.887291676559);
    msg.setSource(51819U);
    msg.setSourceEntity(90U);
    msg.setDestination(4970U);
    msg.setDestinationEntity(7U);
    msg.plan_id.assign("ENPXXRZMPOEFUINRGMOAYSEWOEYQOREQMVLBTZDKBGJDLXXZNGPLVUCNHITWLKNAPEXRUKTJENZFICBQAADTFGGYJPTJHHZZXTCFRDEXFUAQUKFHBUCHVQYUIHLDPWEMCGUROOESBMF");
    msg.type = 79U;
    msg.properties = 28U;
    msg.durations.assign("YQWKYDMZAPIPSXSBBTYIPKWLSOFRJYRKHJMHFFMREZUCMYUCNLWIIRAMNFIZETHDMGKYOTQTCOQJSVBGXVWDGDCLNYWPGELVCGNZXZNQAKYRVPLZUFBCAQXHCEVYHAVQXUNGFVPOFGRSWCPUNDXBDGA");
    msg.distances.assign("YIKXTOCGKLMPULVEVGGQOQNHSONXAYZCWEINKCMNWUYHQKDATPDLBAIVZPRTQVDYNGMCQVWCBKRJRVWMLWNUHBAJYJBPOCIXKMGPQUMETWUZFLVOJXGAMKAHHFNURSPSPTBBBZKDZFNWQERFJXYSFQLHIOEHLVAJDESYSDRZHBLCUJOENRNSHMSRVPIEOSTJJDTCAUXOPK");
    msg.actions.assign("IOZPQSACFZYMGMSKWCUROBOKLWTAKJURQEMFHYZGXLDHGIMWFGOVXLJGLWQAEUWIKHLNWUOSPUPYTAUIPBKEZAJFIRUGBZOVCSLQVPAVVKYCTIPZAGNFUHQBVQSSTOQOUNJHBHRMWRZI");
    msg.fuel.assign("FTRYCINRJCVVIISTJJBEKNNPPZYHNLLPVPCGYJGTCGFRLYOEXWLLSJPMOQGBSEITGMDQHQHZSOFDSAJKWCOSHHYXNZUXTCEWDUNQQGAZRGELOUZGDOKJOWIACBKZUXXDNMFRWXT");

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
    msg.setTimeStamp(0.897236815352);
    msg.setSource(43500U);
    msg.setSourceEntity(253U);
    msg.setDestination(28130U);
    msg.setDestinationEntity(128U);
    msg.plan_id.assign("KYKVLTDNXHSOFBCXHROQLSEAMVZKMUCNQJAKHPSDVDCKRNWUETRYZNMXWHGJAPFOMCTSOMVDWVIAUWPWXEZKPJQXYAIVBNWTZQPDIAFBRXKFGFNJBLIKOOSFUZUECOBFNLPGYQJHAPXZSSVNDYUIHIKWGYNYUZRBDTPVFPHXJSRBDKCYBZJGBLCTEUJQIMXRMGCLGLRSQTCITDFQLYEHPMWZNARLOXGUECWEOSTYEWUIMJJHGAFEM");
    msg.type = 141U;
    msg.properties = 43U;
    msg.durations.assign("KRAHQVUEDNNFGQIYMIZLCXABTWGKWQEAGJJRMLPGTEZVPRXIKGMPVBXBSAOITTXGIDMOVHKBWQEZLZFLOXFYAUJDJVDUNULQIUNJXMZODYRZRZVBMWBUSBANPNCOVTSVGLQTETYCNHXPQCKHQLMAGPFPPFBHRMXKFPJCKIYNKRYONGHSAUUQFOHWMASEOFVUJDMCKLSIHEWWWYOEIJLRCISDZCJQD");
    msg.distances.assign("QVIWHVFRQYFQKXREHWPEHNWCOMFBKRUNDPJHWPGAQJZJOQX");
    msg.actions.assign("UFHJQBFFRQJPZIYSHETXWXFLZDENASRBEPZWRCVGGHDUYLDDLNMQATXRCOLKQQHWJPGBEPNSKILFWHXUHCMVSEYLBKRYOBVTEIKZZTOEUSMWJP");
    msg.fuel.assign("ZQALDVZIGBRSCWKCTQJKTKAEWVOQZIZWXEHWEQRJUWDRYSUEWVXQBSBVTZFCPVZUIHSVOAWHDUYMALGPNGSQSFYSEPIXJCLPESZEKCXJLMLGIAPQKTCFMTUGOKRHYZB");

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
    msg.setTimeStamp(0.645947041993);
    msg.setSource(61965U);
    msg.setSourceEntity(179U);
    msg.setDestination(27549U);
    msg.setDestinationEntity(1U);
    msg.plan_id.assign("SFDRYFQHEGIUSKGCWIAAGDXINDHEKUIBIINZYVHZKXMUQYZBWWJRCXVWDHFEBXLDONJPDGPMKIXNTJSJTLNDAQGSSRPYPHFQSAUQFDWGCUMULBVJWAKCFFRJVQBLIELWTCUVXFLYTRFHERBOQNGODGLZVDMUKUZMTXHSYLQZABBKLPJOTYORNZKCATMRAPOEMSLFRBVNKHBI");
    msg.type = 138U;
    msg.properties = 198U;
    msg.durations.assign("SERUEVWBUXYGDMSWGDOXACIIHYKYSQYRDFMBPTDCFAVAERHYQCAJWFERLNZQ");
    msg.distances.assign("YNWSNUQNMKBDGVWKHNXMOEJCWJZHGDNJXPECSIZAOKTPGHRJEZVFWOJVUZYAXKKEWSVCCTBRSAETYQBMRFNCPHIUSMTAIBLCVBXK");
    msg.actions.assign("LRBEWFXKDGDSOONGYQLIJDQJGYBZRAHVUZVALPLBRFMFVPKTIXTSGJZQR");
    msg.fuel.assign("QPDIANKBZKNRMLNLRVYXAXGECFUSBCWLKWYMMPNTROAWITEPVFFIEUNJVHPLFAQZBGNTDBKQXQSRKLAQZTHHPWSMIUCEVCYVVDBGJTHWJYKXFPYDXDDUYQXQTMNFYAZOITKGDTYVSZCFAUVKMUJDJGKHDOXCSDUAAZWSGWXBEUOPOCHOQISOMVZWSPHOONXABEHNZQVI");

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
    msg.setTimeStamp(0.0173933100155);
    msg.setSource(3034U);
    msg.setSourceEntity(117U);
    msg.setDestination(20235U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.867592063209;
    msg.lon = 0.263783884733;
    msg.depth = 0.189116355899;
    msg.roll = 0.804177520357;
    msg.pitch = 0.0732275971955;
    msg.yaw = 0.583028525798;
    msg.rcp_time = 0.464258312445;
    msg.sid.assign("IYVTLFSYMACPXQHODAOLYWDXUVKJPTTGMALWGMWJGFQZRBJKMQILJCTPPRLKFFNAQIEFNUDVVMFTPUEGC");
    msg.s_type = 32U;

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
    msg.setTimeStamp(0.0795385626326);
    msg.setSource(29936U);
    msg.setSourceEntity(8U);
    msg.setDestination(3400U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.931968077136;
    msg.lon = 0.708114832656;
    msg.depth = 0.545139780392;
    msg.roll = 0.420001753447;
    msg.pitch = 0.323417291579;
    msg.yaw = 0.127369774991;
    msg.rcp_time = 0.345704175361;
    msg.sid.assign("BZFZNYTMZYVVNYAOUQEUVSWIKXGTOHOMQKEDIHVPRMAVPXINGKJHHRTUJQFHQAEBKDGZUNGETPASQJPAMPZYXSOZYHBHJDBCSDEMOYGTRJLVNXLNJSKUBKKCFXLCLAAOWBBIWYSKPSXAIZXGYDUWUDNMVLTRTRCCEEXTXUZNKWIOPWEPTLVQQOWNRTDCAXCLBLLBHJUUWOMLAZD");
    msg.s_type = 102U;

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
    msg.setTimeStamp(0.633910593708);
    msg.setSource(10011U);
    msg.setSourceEntity(234U);
    msg.setDestination(57471U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.825501378983;
    msg.lon = 0.125467760607;
    msg.depth = 0.160831491461;
    msg.roll = 0.959757100764;
    msg.pitch = 0.489704430655;
    msg.yaw = 0.255671009057;
    msg.rcp_time = 0.2489205308;
    msg.sid.assign("UCHGRGHSHOGKCPTBTLNBERTMUOBNQCBKJIGDEURMOYCFBZILDHWFYQMMQSSPSCDEFNFYDVRPNLWLFNNXHDAUNKIXGGUVXUTSEHRVKBWKNXZMVYZLNYQQAFJSSVKLGWEFUSQJAYDJIOTPXZHZQPCKYUIGEFPJQWOKDQCABFADGIAROWZRNVJTSPFEJIMWKRZDBWAMZOGETZYLAOEEAJKPOVLQCXLSTITTBBHVHAJOJRVZLY");
    msg.s_type = 122U;

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
    msg.setTimeStamp(0.715273787177);
    msg.setSource(27141U);
    msg.setSourceEntity(193U);
    msg.setDestination(63203U);
    msg.setDestinationEntity(93U);
    msg.id.assign("XQCEHZEOJGTAAAVKVEKFEHFHONSCUPRESULRJDXUFCSZXZLMXCOUVYQUGZMDNCWCURMIKZTBFNBOPQBRSWLDYPMDAWZEDAOVT");
    msg.sensor_class.assign("EXTKSQCCXAAQHPWKVSBTAQLEZPURZTDLLHZLQIGJGMOTHLNAUXDTWPBZMAVDARFYMVMPHYURJFFIFJMYZAXMWDXKBNONNPJNVHEMHCJBJFNTFPFYUIRXRGHKVEKIKYSAGBUJRYWOUJYWHBPBCTXSWZKPEOVINZTUVYBWZLXUWCGQSIGOCGFNO");
    msg.lat = 0.589522407009;
    msg.lon = 0.284197575381;
    msg.alt = 0.282571546401;
    msg.heading = 0.580745272305;
    msg.data.assign("RKKAYIFGYBEGUROINKZVOPWJUBVOCSLGMGAFWFKQUNNHNBHKICBAGHDRFCJWKAFZHATLWQKHXOLAQUWSFKVSROEXGOYDORZWPIFXHTRMMEZYPYDHCCJYUZKPMWIYRCQXEJ");

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
    msg.setTimeStamp(0.0273975636293);
    msg.setSource(10906U);
    msg.setSourceEntity(118U);
    msg.setDestination(45132U);
    msg.setDestinationEntity(240U);
    msg.id.assign("ONZHXKUSBNSRTDJBVUILHMIDTTLFZSEQGOIBFFPDRHHOUGHLVGRJNJOZNLYXDIWPCZEQFDSTYLUIZPTCLYKPHBWNJEJKQHPBGTNUCDLQMWMTTOQAZDNAPYKIBPIOWBAIOKGXWFOMYMJVEKFWG");
    msg.sensor_class.assign("OIBDLHBDEIGPQCUULVTXQOWCTTVUZNOCAJPJKUJUYXBYYSHMLCAIHHTFMJIDGPOQVJKEMDBTOCSO");
    msg.lat = 0.434523722034;
    msg.lon = 0.844807568478;
    msg.alt = 0.445926219243;
    msg.heading = 0.745538085772;
    msg.data.assign("NMTIBJQISQLAPVZKKMKRSBWJGKFJRQBSQZUFCTFGNGAJPUAJWRMICEWUUOCPIGINZMQXDWYGERH");

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
    msg.setTimeStamp(0.338559913918);
    msg.setSource(24869U);
    msg.setSourceEntity(64U);
    msg.setDestination(22029U);
    msg.setDestinationEntity(2U);
    msg.id.assign("QCXUIIHYNMEORIECLHJNSBXONKLQZXUHJVMCZEVTJLCRJHMHRIVKNBORWOWSFRPSGGUZYTBASKQLGBCFEMJWLAJXCZRAXDVNBOGVRZGZFYRYNGSRYPDNHZXOZSPDXTXKUEQNWSJMZSBOSCWAATNQPPUCEEYUVXVWBDOYTJFFLDLLSHDITWKOQGOWYMMUPHXMUTPIV");
    msg.sensor_class.assign("KFUCQRORQYMRQHAEIKWXCPKSPUUVSAHWCJWIALIKMDBUDLIUHNODFEWLEOOSTRLXRDZBQLCNOFIBMANTYZSLZKYGIXUAHKDUZPAYCDBWXVBQFQCXFZZMMGZNPBKJRATIVPGJELITTPOTSERRKFGETROFUJLPHYYXITHSJODGIJCJXXGNNHJDOSNQEMGQSXVZBGUVACAREFBWJDWELZYTN");
    msg.lat = 0.197091462977;
    msg.lon = 0.133101977711;
    msg.alt = 0.155013230833;
    msg.heading = 0.727403137934;
    msg.data.assign("YEZUSITXQOGYPAATMROZUFKU");

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
    msg.setTimeStamp(0.305182606614);
    msg.setSource(12827U);
    msg.setSourceEntity(41U);
    msg.setDestination(25745U);
    msg.setDestinationEntity(209U);
    msg.id.assign("VWUJXIUVCYVJQGWCDLCEYHOFRJAGIYLVKXPZRUQTPXSISIOVLQCGJTKAGIIGWPLKSXEFRZGRKZNKOHIILHPBFWMSXTRQULPANPMMVEFDMOTCLRFEHUONREDBFOBADHDBYGLFOLEBNTTYWUWS");

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
    msg.setTimeStamp(0.866456126978);
    msg.setSource(50053U);
    msg.setSourceEntity(29U);
    msg.setDestination(1149U);
    msg.setDestinationEntity(6U);
    msg.id.assign("QYLDJHIIMDMYLHAVWZTPODJFFXQHWXLXOIGPOHVQPSBE");

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
    msg.setTimeStamp(0.884833848049);
    msg.setSource(49129U);
    msg.setSourceEntity(122U);
    msg.setDestination(12424U);
    msg.setDestinationEntity(247U);
    msg.id.assign("GXQLBRUVFMNUULYKZTPCQZHRTPSHLTANZMIAZFZJCASKYPPNQZRNKWLWIHOYL");

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
    msg.setTimeStamp(0.350694146681);
    msg.setSource(48665U);
    msg.setSourceEntity(5U);
    msg.setDestination(25847U);
    msg.setDestinationEntity(167U);
    msg.id.assign("ZXTPNSLYEZPRCLLWYFVGGRRWHSOXXWHYIRFAYTKBJMMLTRQONIDAORDARYHQAUOKUDEJXDJBACXGWNWIRFTVUQUMCGSBGSEVKQNAYSINIZNPRALPRQKHEPBZKOUTYJVYGGSWSFJHKPTBIAKYNFIYAZLIDLZATJEMMVKEUTXQJCKOXELQJBPWZLLBSEVFHPDPMODZDDOXECQGZMFFODUVVONBJHWUVUHNGWPGFBSX");
    msg.feature_type = 194U;
    msg.rgb_red = 65U;
    msg.rgb_green = 210U;
    msg.rgb_blue = 196U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.583415153374;
    tmp_msg_0.lon = 0.808375407428;
    tmp_msg_0.alt = 0.711332794477;
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
    msg.setTimeStamp(0.447271547156);
    msg.setSource(5983U);
    msg.setSourceEntity(101U);
    msg.setDestination(47998U);
    msg.setDestinationEntity(129U);
    msg.id.assign("KADPLEVTTURVPHOESWVQAVNQXPLPYCTJUOFOIWRNJOOROZAHWKDKIZESXFGUWIJYTFFETMVTYNOTPLQMFYEKRUACHBZ");
    msg.feature_type = 176U;
    msg.rgb_red = 219U;
    msg.rgb_green = 207U;
    msg.rgb_blue = 131U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.848092408389;
    tmp_msg_0.lon = 0.170183145141;
    tmp_msg_0.alt = 0.5251163944;
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
    msg.setTimeStamp(0.270006365345);
    msg.setSource(2374U);
    msg.setSourceEntity(125U);
    msg.setDestination(7779U);
    msg.setDestinationEntity(130U);
    msg.id.assign("RHTKBHEFHYYLPKX");
    msg.feature_type = 253U;
    msg.rgb_red = 41U;
    msg.rgb_green = 24U;
    msg.rgb_blue = 141U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0966400110969;
    tmp_msg_0.lon = 0.125381444259;
    tmp_msg_0.alt = 0.623005291299;
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
    msg.setTimeStamp(0.012397256608);
    msg.setSource(38568U);
    msg.setSourceEntity(67U);
    msg.setDestination(44133U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.642159632802;
    msg.lon = 0.618402606132;
    msg.alt = 0.190961824001;

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
    msg.setTimeStamp(0.315749677656);
    msg.setSource(13896U);
    msg.setSourceEntity(79U);
    msg.setDestination(23893U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.845945936432;
    msg.lon = 0.282013386829;
    msg.alt = 0.716811426132;

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
    msg.setTimeStamp(0.724627347508);
    msg.setSource(49513U);
    msg.setSourceEntity(134U);
    msg.setDestination(1675U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.53619509485;
    msg.lon = 0.929488790016;
    msg.alt = 0.461259512864;

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
    msg.setTimeStamp(0.269794917444);
    msg.setSource(28013U);
    msg.setSourceEntity(121U);
    msg.setDestination(52124U);
    msg.setDestinationEntity(142U);
    msg.type = 254U;
    msg.id.assign("HHHQLXRWMMYPXIDVDLRLSYGMQORGBDGPFDOESINTSXJBO");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.565193672914;
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
    msg.setTimeStamp(0.883175519656);
    msg.setSource(18144U);
    msg.setSourceEntity(165U);
    msg.setDestination(22659U);
    msg.setDestinationEntity(60U);
    msg.type = 205U;
    msg.id.assign("DTWDXVLGFOMGAEHZKOWNEKAZLUMOUJKDOFTHDQLEHIXLYZTSLQMZYBLBQDHFFATAEWCPNYGQPJXMDFQYBWERAIPVUEOPKLOXJTBOWBJPALVMPARGVNMWIUNTMSUCLHSZPECPHXUIZYIGRGVQCYNORHWCCEQJRUWMKBSFBSBJSREXTWLQCFIGKJNKEBRRSQYSFDQCYZA");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 57947U;
    tmp_msg_0.lat = 0.366943747544;
    tmp_msg_0.lon = 0.269510699885;
    tmp_msg_0.z = 0.153394362077;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.speed = 0.577699311162;
    tmp_msg_0.speed_units = 9U;
    tmp_msg_0.syringe0 = 241U;
    tmp_msg_0.syringe1 = 102U;
    tmp_msg_0.syringe2 = 217U;
    tmp_msg_0.custom.assign("OCWXBCVXRGIUGQXSUNDODBHBDSOKARJZNEGPSOQVUQAPWECOQNFYORJELRCDFRJAKEUELLFMSHWPFMEUUZEGTKSFPYBHOPWDPIKODR");
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
    msg.setTimeStamp(0.855094513362);
    msg.setSource(64570U);
    msg.setSourceEntity(156U);
    msg.setDestination(6343U);
    msg.setDestinationEntity(170U);
    msg.type = 182U;
    msg.id.assign("NDJEVWWDFRNSPIVFZSFSKYWKOZFKGMJCZXUIIBVRQTPXCNNMZMNXT");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 31262U;
    tmp_msg_0.plan_size = 376967401U;
    tmp_msg_0.change_time = 0.13626983449;
    tmp_msg_0.change_sid = 61516U;
    tmp_msg_0.change_sname.assign("JFTIIROYUMOARQOFEPNRJIHMUHPMTZYWFPXSKBNUVLWUMBCNACHLGQYYKFRTMLNBKJSAVVKAXSMXSTDFZWRELFMLWPHGQCHRHOJBMTDEGIYAJYJKZZIXWZCJRFURZJWUPXWTJBXVOCCIWINNIYNBECDGMDJBNKCMFTELKTXKQFAPS");
    const char tmp_tmp_msg_0_0[] = {115, 48, -126, 94, 120, 36, 117, -114, 77, -101, -72, -38, 93, 16, 43, -103, 96, 24, -93, 16, -83, 48, -89, -92, -9, -67, -86, -29, -33, -113};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("RAWMEBORHICPYYIFEYYORDAJFVJTGOWNDNPILUUMXSRHKYQXQXJZFSMXDDNINLTQOTBQLMKSTGZQHBAXWRKPRMDWPEZZQNELJNLCOLLSZOEIHIDGCUOAHSWVVGEFQKPSUDAGLVAKBYZUWKGVNGJPBCMZRSMZTTXZQJCFBFIPYJFRVUSFEWUKJFCDSKBVCBNISXVEBAXGTAXRWICRIAVJNLHPLQCUPEHGNTVHDCHYZOKYUHKMUQTODWAPYFTG");
    tmp_tmp_msg_0_1.plan_size = 4763U;
    tmp_tmp_msg_0_1.change_time = 0.689429107118;
    tmp_tmp_msg_0_1.change_sid = 36927U;
    tmp_tmp_msg_0_1.change_sname.assign("OYDVYUZHUNBHTQKKMNWKAEADYVGCTOEODJOZNSQYYLSAWARTHRWMKXJPFU");
    const char tmp_tmp_tmp_msg_0_1_0[] = {26, -96, -105, -15, 8, 59, 74, -112, -68, 93, -102, 77, -13, -70, 100, 113, -87, -37, 13, 90, 25, -123, -93, -14, 84, -121, 19, -54, -49, -126, 101, -5, -87, -29, -115, 119, -92, 64, -58, 87, -116, -32, -115, -27, -82, 5, 110, 8, 75, -115, 115, -124, -108, 65, -126, 101, 126, 57, -59, 82, -47, -49, -67, -52, 122, 65, -42, -42, -75, 58, -94, 44, -59, 6, -34, -53, -94, 39, 2, 47, 17, -2, -47, 6, 99, 61, 49, 47, 113, 1, -59, 117, 9, 30, 17, 25, 49, -29, -118, -34, -82, -41, 102, -127, -38, 40, -57, 85, 47, 38, 2, -100, 120, -37, 68, 84, 16, 44, 104, 57, 106, 23, -57, 3, -59, -45, -22, -2, -75, -28, -17, -3, -9, -22, 106, 62, -1, 9, -92, 99, 91, -63, 68, 54, -101, -101, 3, -106, -18, 122, 5, -108, -104, -56, 3, -29, 47, -37, 37, -107, 83, 22, -20, -120};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.107526864207);
    msg.setSource(14466U);
    msg.setSourceEntity(74U);
    msg.setDestination(41748U);
    msg.setDestinationEntity(196U);
    msg.localname.assign("EJEPAZDJNKKELKMNITJMCPKYDQTEHLBNDYZUGDQFJVGY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MPQJOVVVTTUORCNPDQPYSAVFGLRZDCOCBXTHFIFMULPLOQTSUXKJCBNGALJIIETGSMHEAVMSQCGASKBOESDWUMGZKZUPBXJDXYQQBJOYIWLCENHUHRWQARGNPEZWTMRJJATXOZODYBKVVPOUHBMYEFAZCTYRSHGSKKFZWLGIBPFEUCZNSYTMLFRWWEHUSFYOIXLIWJVXGWYDLDHCFKEBRVHJN");
    tmp_msg_0.sys_type = 243U;
    tmp_msg_0.owner = 5334U;
    tmp_msg_0.lat = 0.771084917635;
    tmp_msg_0.lon = 0.0996159392049;
    tmp_msg_0.height = 0.565932208438;
    tmp_msg_0.services.assign("LTVISAVISJLFAVFJDJHBRWLPVHJSUUGMLYTHJNVYNFNXIQRNFRGLKNCDSKRFIXOQOBQKCOEJTGBWADMGRJAQSIVFTIPXMYREPYJEFJFOMWZSRWROLHODOOTUSDEKZECXGBZGECUZBVZUBMLCUVAKPUTSQXYYXNDGZMNLUVKYTYLPDHRACQCKHAHGFPFXPEWMZSYBTDNWQITQODG");
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
    msg.setTimeStamp(0.832588364373);
    msg.setSource(36345U);
    msg.setSourceEntity(97U);
    msg.setDestination(55083U);
    msg.setDestinationEntity(217U);
    msg.localname.assign("CPUNKRDKTPLSJXZQMWDZOGYWTRKZMDIKTCYILBVIWCAUIMPYKQQLLTOQSCVXLKSBVYRBAXXNNQMEIEOHGGHNKFPPAFJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MODKLVIAMIYNQWVLEZPQLBSBJMMSBACNSWEIWFWCQACZRGXTHPEFODYEHOZLUXENJTWOBVYAHVXEWGKUZNCAIZBQBWIENVPJMSBYRAHXBNTFRJMPXCNDVRPGNJLOKWFUETQJCJRWHYPFIGYBHAYAUSLKZOGKDPGJX");
    tmp_msg_0.sys_type = 26U;
    tmp_msg_0.owner = 32303U;
    tmp_msg_0.lat = 0.997994880424;
    tmp_msg_0.lon = 0.624604215779;
    tmp_msg_0.height = 0.727172355377;
    tmp_msg_0.services.assign("VKPDHTFQYKTGLRKEJFXBRHGHWEFXLJYOFNOKZEBBNYBAWYDZWP");
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
    msg.setTimeStamp(0.213507373895);
    msg.setSource(65446U);
    msg.setSourceEntity(133U);
    msg.setDestination(60068U);
    msg.setDestinationEntity(46U);
    msg.localname.assign("DOTBNFEHAQAGSHBTREAGBMAWTRQMQBZBWMRORCFIVECSMVIXUXQRWEHTCDMFDMYIRAHISOFOJJQDXPDPLSFYVBOUUXUTTLLQTYNNDYFPYZRUZVMNSJJKCGRXHKSPPGPBXZJKVHHVBFUYCGKIPTGNVOLUIVFNQOW");

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
    msg.setTimeStamp(0.0468404386184);
    msg.setSource(38437U);
    msg.setSourceEntity(131U);
    msg.setDestination(29092U);
    msg.setDestinationEntity(157U);
    msg.timeline.assign("BFJHWVOWMXDTRJNPZLDRVERTWYECONBIVGXJRLSFDWEPAVPLUPJWDULUOCHNGKIKWAZVGKRZCVUGDYWZMQYESLHCKJPPUZMSHIMNQHMYPJBOSOIMFMSBCNQGXZOTGRBTMXXAKXVAXJUYNZZCJSFEQLFUKAPALGODBVOKHIDTHIDIYGWGHRAQRSYUNFJPSQCAETAUBJC");
    msg.predicate.assign("BCQQQNDKVEPZRVZKUMHTXYTUJREGFBXZEXWBOAMATKRBJJDQFGOKKUGESOKCVNJZUKHWNNMPR");
    msg.attributes.assign("HGWIQXAZPIGPIJOBTBJDTSXJTMIYCTOBETWXLKVEEZFQUQRWFDUOKDZIHTQDARXOLWL");

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
    msg.setTimeStamp(0.47924679119);
    msg.setSource(856U);
    msg.setSourceEntity(28U);
    msg.setDestination(44604U);
    msg.setDestinationEntity(188U);
    msg.timeline.assign("VKWQVXNELHBDKXBYUFFRDTDHQRMBDUQVQJJTLNLEYSCAUCVSBXORIUIJFYLLSNMSPNTAXNLPSQEGUGCKMTVWBZANPZCOKKFUIMXWJFPEZFOTQJMEOBYUDGRYGIRHKPXHRCUICLKLOCDESVBOXNYMTMPWSTAAICOIVWPZMIYVKGNWHWQODFHGISRENOJDRHXNAYAEQWQFJKUIGAEFXLXPJZRKEPGJYS");
    msg.predicate.assign("ZWMLDLXAWKNZILWPSAHGEJMMNBRZLQVXFTZSAVRLFVSONSHSQRSBNEITJINPRPHCDKWBTGVHCCJTZPQQFKCYIXFUDAGFUMXZSWSANIELJNXGZIUTQUZKDQHJFEIRLHNCYYYTUIMLFEJJZIYORQHSJBOWXCADLMUFAGCVRGCYHVYKWPRR");
    msg.attributes.assign("XTGVKEQTOAHMJPVQYBKGWKVNOMUMQUYWWQCXPTJISPVKHQYAKRULANKWDEOOBMDDICGVCNUYPJLWZRJGMHXFOJPPTYEDBGJRUTLAWMCILRFMZSVBDTSPLXIVGHOALTIGIKQEXCFHASBOGKYPHNGMCOELEO");

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
    msg.setTimeStamp(0.308801503261);
    msg.setSource(20134U);
    msg.setSourceEntity(66U);
    msg.setDestination(6246U);
    msg.setDestinationEntity(44U);
    msg.timeline.assign("KQDBAIIKICOFYBZJVQZSYIJEXPWULFZMAZULTBOHZJHCSH");
    msg.predicate.assign("ONWDSETZQZW");
    msg.attributes.assign("OATIDTPOZRRCYGLNHHWIHDAAJBHEPFEQBYLOIFGIFLANICUSJAQIWYGPXWHVFXGQQVOGVZNFQXBXSEYXBVVDTSVWXNHRDNWUTKUESVPIRMNWEYBABKTDCOOBDMYMZYZWLCJPUEQOUPRWQOULSAWCEDOHFGBXFSLDCMNRRCKUKGKPUIZXMYCXZRQJOPDVKH");

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
    msg.setTimeStamp(0.884786653089);
    msg.setSource(30554U);
    msg.setSourceEntity(141U);
    msg.setDestination(43451U);
    msg.setDestinationEntity(244U);
    msg.command = 50U;
    msg.goal_id.assign("UHVNQOOFFFWETHZZYKBLRVTMNIWWDNGTCMZEQIHVZBCAVQIBDMTWOHAYHTUTNSKREUGDWLBJZVKMMMDLJRPMGZMVFHSQYWCHGPGGHKPFOPTUOCRDERRALILOXUXINBYETKVJNPJXYKLJSAJBSSYCSAJSORQWCITCPRXWSPUYDRIE");
    msg.goal_xml.assign("PKKMCEAIOLXDQTKXJBLBQHCR");

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
    msg.setTimeStamp(0.0310213091569);
    msg.setSource(62299U);
    msg.setSourceEntity(214U);
    msg.setDestination(30484U);
    msg.setDestinationEntity(0U);
    msg.command = 57U;
    msg.goal_id.assign("AEHFQFXNMBDXJVFAOVQDWNEVCFODUCYWOXYGHFSKWDJZHUPHPPSLMLZSPJPRKXMUZBYQBBTGULSJMNLDXQZZZXGAVTUHRXCNGE");
    msg.goal_xml.assign("CUKTBHBFFXDBXJ");

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
    msg.setTimeStamp(0.938690196238);
    msg.setSource(35477U);
    msg.setSourceEntity(147U);
    msg.setDestination(983U);
    msg.setDestinationEntity(177U);
    msg.command = 3U;
    msg.goal_id.assign("ANNJCHDVMXIBCHMJVQXFCISRIWUYRKLVSIEOJXXLLXMFBKGRNXIBTOYPUYHBHITFCPSCJTTJIFMHQZOWFGFKRCWPXGDZLUVSRBNOANENZYLHAAQMUNSOBFITCRLQGJWJNFZVQWRFUOXZDEMOVDPKKUQEEODWZXPXRVKDLQRBYPMCHZNISWH");
    msg.goal_xml.assign("BHYJDHNADMFCUMYCXDRUABUVZTHYFTFITQNLIPJWDMUEKNHSZARAGTHXJHZFXVJFGQZFRWLVXJBGWNAKOZMMCKVXBTIEIQLLBKPDKWEWMUWYUHCNDJPRORUVLXGVGOHOSQIJTZVOALBSSILRLXGGYFWZKDNEREWFZOMEMUPGVBNIVQKQRRTHPCPFOGSDIQYSQASAWR");

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
    msg.setTimeStamp(0.27923117975);
    msg.setSource(64415U);
    msg.setSourceEntity(79U);
    msg.setDestination(9025U);
    msg.setDestinationEntity(113U);
    msg.op = 226U;
    msg.goal_id.assign("LFXIYYJCZBECZKEBPLUFXUWJCDXGEPQHNTCPQUJRZJBFRHBHALQCUDKVKKQMWTXRUWKKVSBLXYLEYPBTQKNVSANGYIOEGLZVTCLMCBIWFTFHBAPSIJQDWQAGVYMKRAJCMDCAEOEARZLJBPYAXUMVSQH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HXROCZUSTKHGWFKQN");
    tmp_msg_0.predicate.assign("JPFZUBUHSOGIZHEUHQRBWMXMTCMCVVZOPGCJZZLHZBSRASIZYXTYPZUHODSKJTCKQLRJVELRULXMXWGNMWSUEXPFOJTRTTMSYZQDBYRPYIMIKRWJQEGOXACPTWBFVOIBLAJPDAXGLCGIEHQEQRONHSLDKDXECKDHKJMPBXOSUGYWQFKTPXYOSHPVKJYATUNNVAITE");
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
    msg.setTimeStamp(0.841770654976);
    msg.setSource(4916U);
    msg.setSourceEntity(14U);
    msg.setDestination(57179U);
    msg.setDestinationEntity(10U);
    msg.op = 206U;
    msg.goal_id.assign("FBVEFWTNQHKEMBDDTZJDESKIHCSIWKMBQFJXYEOKIHEIEWPIDAVLMCNAZILPZZJKGZAJJXMYVXBMBQSLFALCHXWUKOKSDXRLLRYOHRINCPLLNUZGTSFHZVNPPTRXDOEXVDLCSUAUOAHUUFPRVWTVWGOZGOMRBHXQMNNWCVINBOTQCELMOTGRDSYUVDYJGRYFASKDYZMZIBFTVQACAPQATHNQUWTJOJPBJUY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LYGYKJOCPCKPRFDQVKJHJNGTXEAVLNKOPBUGOEUQODIGUTAXDXPIWKZQCMWBNJJVGBMMVPWOWCTFLRAHTZPGVUV");
    tmp_msg_0.predicate.assign("CMKEMLWNCIFKOHXYOHPUFXTOLWMGVGYPNPGRJLBQRMROLXVBEUQZSJIWPFCBNSSXWKKKCVDMBIBEOIBJHZSYDBGECHINDIKACNYTAFFUJYLVTMUAPLEEAKFXWQQNXJNKBDFNDPRQHWSZQSJVDVYWZITSOZAPUPQRFIFTULRUTGBLZBCJAAMALDLHQ");
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
    msg.setTimeStamp(0.982807077914);
    msg.setSource(35709U);
    msg.setSourceEntity(130U);
    msg.setDestination(27915U);
    msg.setDestinationEntity(108U);
    msg.op = 11U;
    msg.goal_id.assign("JYQKVKCUPCWIBQLKRFJRNBXFTKUBOSTNODSXAKSTJNZDKKHQERVUXQMHGOAGTGSFZLKBRVQVTAIVWZYQPACZJPVEEPGEHLGUNMYDOEENWFPNAUTMXBOARIMQVRCCUGFXVDISNADVYTGMBMITRPFGOMTZJRJKZZOXWSZDXCXUBHSFPLHLYQNLNMDYRCCFIL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("USUWXYANOKMXKSDAFWKWZVWGKN");
    tmp_msg_0.predicate.assign("CKTGMDUQOYHWVBNXPCFQWRMSZPHGFSGRHNFUCMSKRWOLYXYKNEEJGGFBEPKSNCAVZWBXYTOYASLXJMUYEBBPKVZKPVEXAARJHWGUDQONCEMIFJQMGJHIC");
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
    msg.setTimeStamp(0.393391466133);
    msg.setSource(18274U);
    msg.setSourceEntity(243U);
    msg.setDestination(44742U);
    msg.setDestinationEntity(252U);
    msg.name.assign("AZCPOOYVSEUJHHOGBRTZSEJARZFNBGOXDIJIWPMXEKOUIKDUTCHBJMAMHZCNQHQZMIQDEEXYGUVSVLWUNLRQSGMLJWGITDTYCPFQCOAUPCVRCPXGLRNBVPRDYWQLLBMGHJJLNHAKMKIXWFUFXZWJQGDLZVARBIHYSDXTOXHFENISYARVULERFSOFVXSKEGUWAPCTTIKZBQYSTXSTQCPRNEMDJPANTIDUMKMQ");
    msg.attr_type = 75U;
    msg.min.assign("AKIYWVBPUXDXYEWMPGCQAGVFONTVCUMOKHUBELENLMZWMZQKSEQHRGRKLYSIEDAHQJIQTRPCKXGJILWDWLCFABSARITKVVBSHNGWFJOTZPGYRCGNZWSSYRNODFBQLUDSMZFKNCZKRSILKACCVATBPUOBWXTJORWHSDTIXDMAXPXFVDXQVEOZPUUCGUHFOWVCFATNIEBMZGLQZDEFFXHXEMTYJESZYT");
    msg.max.assign("JLPYZFDJQXKVTDUDQKAXFFBWGNKBVHCFBJXNRSLTEVAFEZOHOWMTXARPEIHBELKDLGHYTCEDCCQTWZOUCAPSGVLBUWMAWONOVGXDHOWPQSJGYRLVPKFN");

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
    msg.setTimeStamp(0.478439614609);
    msg.setSource(58247U);
    msg.setSourceEntity(234U);
    msg.setDestination(5174U);
    msg.setDestinationEntity(2U);
    msg.name.assign("IYWLLIFOHJNRCECBDTPEHO");
    msg.attr_type = 136U;
    msg.min.assign("HTXOKLLNARGOHENDJSIPYLYPYOYFZLZWZEPIOVWGKMVERVDMVSAKYFHMLEWUJIBPORZNCWVCNIOKSCUUSHBQHZTSHWKXNYQDXDCGKJKJQEQIBAAIEFRMPIGAXGCAURHJABJLPXRTNMSSZNOKBUXCUMHTMA");
    msg.max.assign("YZCMRUADDGONHRRTSVBKFQKBQEGVSYKKAHAAMTYUKVCTDXEFUHCSYZNJISMWZDHALBUJAXHVNIIVLMKCTSOXSLGTGQPPXFOUOIWEBEVDOLHKPSXRPDXJGIBYHTXSFKWQZEGVLYZLCICIICJHBZOJTN");

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
    msg.setTimeStamp(0.914614384706);
    msg.setSource(50040U);
    msg.setSourceEntity(229U);
    msg.setDestination(40590U);
    msg.setDestinationEntity(114U);
    msg.name.assign("LJUBKSEBPYCCPMATOMZXGUCKJWHBEEODRSSHREJWYVCVZYIPONMJBXECKGQFIOCDARRIGZOVAYIRXIMLBKQZSLOBQVOULWHNTBUYFHQTMUVCKQIAHPAFDSWLLVKDFRZTEPDNZWHQZCXGSLXXWAMXYFJTGZG");
    msg.attr_type = 69U;
    msg.min.assign("TODSHPWRVDDJLLTEBEOOMKGLWUHLEZDVGIGMCTHEPJBXJORADCUXLIAGMGXWWGAYXIZVLMMYAEFCSLWPTWKPFWQTQUBMXYZVGTUSUHENWZVDYTVBOTYWJIGRNHYTROPYANHBRQPLXKHQIODRHNU");
    msg.max.assign("ZPLPNYOMXBRYDGXCJMGGLPWEW");

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
    msg.setTimeStamp(0.385543388178);
    msg.setSource(3379U);
    msg.setSourceEntity(197U);
    msg.setDestination(57427U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("HGOOCZEMNSSJFVLIIEDRGBXQREQVMEGNZQJOCXUWDKANDBZLUHMLLXKGNAUFXRGKOMAJVPNFIVMJSZFXSYDRRAUYHKLDOQHJQYNUTKUVIJMZCVQYTPSYPRCDSPILCPOYGOEXVDGWGVXAWSUYXBITIAPQIOBYKTHFDRHXHDNSOICSBEPNHUJYEPKCWNIMXALTBWRMMEPBSUAFZZWZWKFQJRCOMWNFEVLHRZEATABCJFFYQTJUH");
    msg.predicate.assign("UYIKHKJQACTHXRGDZQBIZJXCKDEGIHPESVVNFXDDOUAIEROIYBOFWAFWNXKYXQBIRDGMDAKWFVUPKDJFHAQLUBGZERAASJWJPYXOIWKLHTRLLCCXYWCZOBNQEJFZTOWUBUJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RBFYCGKPMQDBRHAYNNCMUSLQNSAYCEPCORNLNERLAWUIVMODAECHSVJBCZBFGYDRZKMZTMXEKDVNINRWISXTGGUUVADVJBJERIOPAHIYAQWMXMVJFBIUQHSMUHCZSKWYXDGTAZQJLGRPUJPUYKUXGVFGKMWDPS");
    tmp_msg_0.attr_type = 188U;
    tmp_msg_0.min.assign("AJDOJPXUFPBZLWQQUHZCVLVTCRPAZSSKNMSTKFJIRWLQKWIYCVIAJJXQFCVWMNRNYGCWCJXMOSQMNFHAYZZNQCBHLGHGNABTTQKDSMSEUHRJBKPIYEACXXNMNLMYTWLTISFFFRZTOBGHCBHYBPLKUVGZOCXWAPGEPBFDPYWVKEIZSEKI");
    tmp_msg_0.max.assign("EQNNNZWWJTIEXLFHHEXFXENHDYRSIYXMYBNEMNQVQUWMTBHFVHKHQVERSWKNCDSRTWUCPHBSXZGSJRLLKJDOGVYXOTZOXWBCZZDJBGKOOCHQAIJMIIVCISHGAPBTJEJPPFFEDXUDWLKYOVRMUZKRGCFEADVUGKKDFBWXBSUAOJQUAFQLSMACMLVQFYKYZIGNGHDTJRXMUTTPQPKTVGWAAONZEI");
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
    msg.setTimeStamp(0.0640173814193);
    msg.setSource(37202U);
    msg.setSourceEntity(174U);
    msg.setDestination(25312U);
    msg.setDestinationEntity(92U);
    msg.timeline.assign("KICLOJUJHUDMDKCWSAHNMMVGJJQFLDMAVPDSXXSDIXZCUKMZCJDFYLTRVKUAAEWPVGRIXLBDOERMGWHTMXTLWQDYWRPYCPGTQPTEDFNEWLHGLXZKWZYMHHTJRAIKONRUVVJYFTZDPIKJNLFAGLBJFANOZQASYNRSBOQWSQOUGCFPYWBEIRNXBAMRWIEKKKG");
    msg.predicate.assign("VRUXKVJADJIMPOFVJUJEMESVGUCNRDKLQZGVYRMCEXSQZNAUJDOMUXEBVHFKRVTAZZALFCAIKFADBZISSNIWEXGYCCBFJQRTXWXTSLYUDTCIKPEC");

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
    msg.setTimeStamp(0.284762216922);
    msg.setSource(41700U);
    msg.setSourceEntity(179U);
    msg.setDestination(16052U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("OCLPIWBIOMZFIGNLZZHBPDQURNDRPZQPAAPKBYSMXMYQKOFCLTVNFMWVEPAVVZZFCVJDXGJBWENFXUPWFBNBQGHMSOCJKTDFMEVAHYCXNQXYETSTCTCVTGBSSLVLIGYDLQKSLBHUTAHFIHWYUZRXJYUPSYMGXIIZXAJRESKXJEYWTLGGYEMXQUJACZSUAQJKHFN");
    msg.predicate.assign("XNNWEUVVRHCDQUZLLWDYTLQRVMIEOGSWPDCJCUDHFYKGYUPJHGCMKFZBIZLAYSJCMFKXWZLMBAHNSNCJHANQWRGTPIUTEVQAGUYOOKFSJOLCFWNGAGOZJGFQPBFZQXXBQDSZEPQXWPINTIXACZFHWWDZIKRRGBIPDKRKCPJUDXRYLRAIKEIDNMFHTLBSVKVXJAOEYSOYPTUCRVSOKTNRBHMEYMOLENASEJYJBMTMELDQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NKFJBNUKNUAGCELLCSTGEZKVYYHJS");
    tmp_msg_0.attr_type = 159U;
    tmp_msg_0.min.assign("HEPPCIUTDBR");
    tmp_msg_0.max.assign("JTUGEFSUOIHJLUILUYOBASYTPQBPHGASFIYFTQDIWEPAIZQANUORVLXPVIEBWZJAENFCBTBMAZNAHHYKXSPBFNJFKWXZPCDMHDDRWVWGNQUSBTQIHUYMUOPKEUYDSKEGQYKFEOEJERZWLBOWVMTT");
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
    msg.setTimeStamp(0.672094079363);
    msg.setSource(21941U);
    msg.setSourceEntity(88U);
    msg.setDestination(10116U);
    msg.setDestinationEntity(5U);
    msg.reactor.assign("HXPXFWQKGMSAMMFALTEGREYLPFKJMJCWIFELDSNDQRABHRPQTTZOEOLCKRXBCHLVVKMZKYNILPURSNHBSSCJKDDWJPFPWIHSTYQCNIARZEKYSIUZFNLAMDTYAJYXQNTTUEKZXPOAOUENIZHGLMRZBFACVTOG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PIFRPVXESXLXGWUKSOJUJGYUTKWNSPVHJJKL");
    tmp_msg_0.predicate.assign("KOIZEQMXTT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MZKVWDHZZVSJXDNPKGZNYIJXSCQMBBUQXCJODSCIUNPQFGIIWVCVQCKRUJJWUODTCIMRYAUFJIRIWRRYWZYOHBWODSEMQXHXCMKEMVQNDHDPHEWGJSGQIZA");
    tmp_tmp_msg_0_0.attr_type = 140U;
    tmp_tmp_msg_0_0.min.assign("OZUJMOXWZCCIXEFZBICVDHWTLLJMGKBUOAGJUPCKKRKQJMUPYIYGQGPQCUXYXXNDEUUACXOLTBYWVLKAEFHCRMZHWTYTDJWXBNMEKWVFNMAWYHBVTIQHXRADGYQSNVIRTGENPCOFFQGTLBMDSOTCRUOUQOKJAPSLFYTBIYH");
    tmp_tmp_msg_0_0.max.assign("NKLSINHETX");
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
    msg.setTimeStamp(0.285860365804);
    msg.setSource(6492U);
    msg.setSourceEntity(130U);
    msg.setDestination(50161U);
    msg.setDestinationEntity(44U);
    msg.reactor.assign("AVVYCPQVPNFTBPEVISUUGMTKOSJSJWIPSSDQNGOAMLKAKMIGIBBGWLRBDXXOJQTFMQSWRWPHWCHURGIHWNONCAIFSSKVLVYPWIZADOKSEZHBMETJQLZRHMHXUZEYUFCBHTDETTDMXXOZHLPCAEQDRRKFNZZGBYUEWGUCOFCRRBIZZEPKLAXYDEONVNCLQEYAPGVYOWAITMVYJXNJKHUFTJFDPSYHFQMXTCLLFBCJOGXIRQWVUNDDYGKJLAZ");

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
    msg.setTimeStamp(0.356401708645);
    msg.setSource(51718U);
    msg.setSourceEntity(233U);
    msg.setDestination(50832U);
    msg.setDestinationEntity(78U);
    msg.reactor.assign("TEBETFMAAVFGSQZCCQDCNSBCXOXNNAEZFBZGWUARFUQHIORDPBDOFHDIVPYBWHJAHPPPIQJWLZQSKHTIVUUYWRALGSXXYOERSOJZWKJRGIMKZRXEJEMPSUIGLK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ODQKHIZQWJRXDHLLQJNIYKPYGYRPIMPMEQPLOFXCFVYUDBUHHHEMVQAQTNWMCTBN");
    tmp_msg_0.predicate.assign("YJXLSTZNPSSMAFPCTOSZYIZXSVSWWEEMBJAMWHHKPHXEQKJXDUNIVTFJWTRGKOQDJAVBAMHLMLXETYVBRYCKUKNDPPWGLBCCLAIBLEPNVERIGDDTAHYOQVVCGBVGCRXSRFINOJAKFACLKUNXWJDJYIZOQFOGRNQHTUWIPOUEMWYFGFYHHKXNIEUQSRBZPFVRLZYTSRFZDAUADHTEIOMDQKJDCUGX");
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
    msg.setTimeStamp(0.594366083959);
    msg.setSource(9998U);
    msg.setSourceEntity(124U);
    msg.setDestination(39741U);
    msg.setDestinationEntity(141U);
    msg.topic.assign("YQCXXJNBPZJADWGSOUNQLLBZUBHGBWNEGTSXHDMRTNKGSYUYERGHILMOQMTROCKCDIAPBXAMVVRZJQICGCCENXDZTKDJKHTPRVJKBWYUYELLGKDZUSUEGOOICKFQNVMRSOZGQFLXAYJFOITBWSFAEZBHIPCNFUVILILDARMEDSKMDVISHPZVSHRYWEOJOJFFYVQTQAV");
    msg.data.assign("HWPHNBLKSHNHTDCDBRXXRXJQFRIJBXIUVYZJVKYUCAY");

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
    msg.setTimeStamp(0.616745761781);
    msg.setSource(4695U);
    msg.setSourceEntity(79U);
    msg.setDestination(48780U);
    msg.setDestinationEntity(107U);
    msg.topic.assign("ETWOLORGFWJZNEVPYBKHCVSGHPDBZKTQXIFCNIVENAVZLFZEOLQSACGEXSRUWHXFKKCYRUCQLOXXVQ");
    msg.data.assign("DJYBMBGLKZDWHIZDJVYOXCHKTOSIMOOGDYPAPEE");

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
    msg.setTimeStamp(0.136199257998);
    msg.setSource(8990U);
    msg.setSourceEntity(151U);
    msg.setDestination(14945U);
    msg.setDestinationEntity(95U);
    msg.topic.assign("OLWJXGGQBWGEXMMXJHINVTY");
    msg.data.assign("SQEXNRPNUAHVKIIYBBUCGBPEWPCEOMHEYPGAVGJBMUWCADKNYTCWPSVSBZDTRZOWAWFGMULHLLJPCHBSMKWIWQFLBJZVCDBXXRTMYYMKTEVXLIOMCDUGELSQFYNSCPXXKAXKISFDPNLVUUTETGHBM");

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
    msg.setTimeStamp(0.102662288567);
    msg.setSource(27468U);
    msg.setSourceEntity(31U);
    msg.setDestination(3249U);
    msg.setDestinationEntity(114U);
    msg.frameid = 219U;
    const char tmp_msg_0[] = {-27, -121, -117, -65, -14, 104, -62, -115, 106, 42, -38, -88, 124, -22, -78, -116, -61, -86, -55, -100, 22, -5, -79, 66, 55, -58, 119, 17, 77, -41, 102, 114, -62, -27, -19, 80, 90, -82, 59, 83, -78, -96, -39, 22, 48, -110, -86, -85, -50, -76, 48, -22, 26, 10, 68, -89, -104, 31, -27, 92, -88, -27, 62, -59, 95, -38, 5, 115, -41, 112};
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
    msg.setTimeStamp(0.466308355651);
    msg.setSource(2664U);
    msg.setSourceEntity(71U);
    msg.setDestination(19052U);
    msg.setDestinationEntity(226U);
    msg.frameid = 133U;
    const char tmp_msg_0[] = {-105, 26, 105, -91, 21, 107, 124, -11, -85, 50, -3, -107, -59, -57, 105, 34, -62, 45, -10, 46, 38, 77, -45, 25, 19, 100, -87, -33, 3, 55, 123, 53, -74, -118, -104, 105, 28, 115, -41, 117, 80, 92, 20, 83, 50, -118, 123, 109, 72, -35, -78, 124, 51, 64, 37, 118, -38, 31, -102, 30, 53, 2, -28, 70, -67, 84, -33, -79, -102, 78, 125, -8, 24, -85, -72, 111, 84, -63, -57, -66, 22, 111, 50, 43, -106, -78, -106, 92, -21, 113, -10, -41, -64, -31, -33, 55, 34, -83, -90, 78, 41, -78, 63, -48, -110, 118, 87, -34, 22, 28, 63, -45, 53, -82, -104, -44, 31, 24, -96, -60, 64, 17, -11, 96, -64, -44, 0, 110, 51, 65, 6, -68, -2, -42, -66, -92, -53, -106, 12, -115, 27, 6, -105, -35, 42, 62, 108};
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
    msg.setTimeStamp(0.369256422263);
    msg.setSource(43577U);
    msg.setSourceEntity(9U);
    msg.setDestination(21656U);
    msg.setDestinationEntity(205U);
    msg.frameid = 106U;
    const char tmp_msg_0[] = {-70, -55, 24, 107, 48, -55, -67, 96, -103, 71, -50, -59, -78, -101, -113, -83, -22, 119, 11, 77, -74, 38, -80, 1, -87, -25, -76, 120};
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
    msg.setTimeStamp(0.590588915987);
    msg.setSource(6641U);
    msg.setSourceEntity(26U);
    msg.setDestination(43910U);
    msg.setDestinationEntity(162U);
    msg.fps = 120U;
    msg.quality = 92U;
    msg.reps = 121U;
    msg.tsize = 118U;

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
    msg.setTimeStamp(0.0499012083307);
    msg.setSource(1575U);
    msg.setSourceEntity(143U);
    msg.setDestination(9731U);
    msg.setDestinationEntity(135U);
    msg.fps = 77U;
    msg.quality = 166U;
    msg.reps = 60U;
    msg.tsize = 184U;

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
    msg.setTimeStamp(0.65979701401);
    msg.setSource(45974U);
    msg.setSourceEntity(74U);
    msg.setDestination(61640U);
    msg.setDestinationEntity(170U);
    msg.fps = 247U;
    msg.quality = 115U;
    msg.reps = 179U;
    msg.tsize = 218U;

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
    msg.setTimeStamp(0.00260230202631);
    msg.setSource(17259U);
    msg.setSourceEntity(108U);
    msg.setDestination(56891U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.160640286737;
    msg.lon = 0.285923410082;
    msg.depth = 206U;
    msg.speed = 0.182790444037;
    msg.psi = 0.141190248996;

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
    msg.setTimeStamp(0.198276223508);
    msg.setSource(19111U);
    msg.setSourceEntity(176U);
    msg.setDestination(24170U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.0577176923108;
    msg.lon = 0.0260218809437;
    msg.depth = 25U;
    msg.speed = 0.839629132378;
    msg.psi = 0.238858108885;

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
    msg.setTimeStamp(0.0768857239019);
    msg.setSource(51369U);
    msg.setSourceEntity(19U);
    msg.setDestination(25767U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.755603907369;
    msg.lon = 0.286186142364;
    msg.depth = 21U;
    msg.speed = 0.736563155467;
    msg.psi = 0.820675984975;

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
    msg.setTimeStamp(0.732073889627);
    msg.setSource(39230U);
    msg.setSourceEntity(73U);
    msg.setDestination(8172U);
    msg.setDestinationEntity(138U);
    msg.label.assign("SPUKMZEAKDHGMSCBEOMJVSWPCQJVHDWWNTWMPIJCGRLAXWATGFKSZJLKZBTCLXGVUMNURORJHGOFVYYJYDMCFNYZOQDFFGPXBGJWXBQFDSRXVCABSQADULAKTWPCPIMYUTEXZQQJETNHIYDZEAQTNGAFDITCGFRANFLNTDRERUI");
    msg.lat = 0.0598285574036;
    msg.lon = 0.324030501473;
    msg.z = 0.878997481606;
    msg.z_units = 22U;
    msg.cog = 0.0689408658146;
    msg.sog = 0.28751458351;

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
    msg.setTimeStamp(0.133026016079);
    msg.setSource(14065U);
    msg.setSourceEntity(42U);
    msg.setDestination(59089U);
    msg.setDestinationEntity(122U);
    msg.label.assign("JASVCRDMNEROQNYHGXYGSFIAINUIWHDCWWQGVTTHPCLZMTUBLCMPJOPYRBUMCGYESCYVVENIJWMXGAQAKEIRBDCDNGHPAQSGKUTQILATHUHCSJRDNZVYZYIODXZLEQXFUBOAXTBYWNXAJVRESLPSWTERFFVJFKLOKMJXPNUQDBFVZPDLIDTQQOXJFHZOF");
    msg.lat = 0.739965250414;
    msg.lon = 0.316721500603;
    msg.z = 0.68862313072;
    msg.z_units = 142U;
    msg.cog = 0.211660014755;
    msg.sog = 0.179392023339;

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
    msg.setTimeStamp(0.159128495963);
    msg.setSource(14745U);
    msg.setSourceEntity(34U);
    msg.setDestination(28324U);
    msg.setDestinationEntity(57U);
    msg.label.assign("UJCELLEBFJWHQZGEVUVACFOPOQAJOYMLRKMOETVVHBBVVXSGNLTPFQUEKCDYLMSSQXPYCMYWLBZBTNADMHZAMTHWKOJRDBSXGZPUHZIKXNDRSFINCEJBZQENXHQCYXFMUMSGTSXACVXJLECUWTWHGAHSTELHDDLUDFMPSFRWWIRZIRHIJOFPGNNDUQCKAVWDBUVLIXPCPYVBFYKDKRZKIQGIOJZGPOUBETOKR");
    msg.lat = 0.289443419421;
    msg.lon = 0.792719121606;
    msg.z = 0.813361846081;
    msg.z_units = 100U;
    msg.cog = 0.26958399816;
    msg.sog = 0.810953801635;

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
    msg.setTimeStamp(0.80382534081);
    msg.setSource(57141U);
    msg.setSourceEntity(86U);
    msg.setDestination(33509U);
    msg.setDestinationEntity(220U);
    msg.name.assign("CKREHHQOEGFMCXVVCYVNIUXFASBQQGXYEQNDMEKXDGSWIEPJGFMJZTOOGXWJVSBGXQMSLLJDECXNOFZMMAQMYZPPQWIPDANTFBDTRHTBDEKILBTPZFHTZVKHKFUARNLLOAINGMZYZYBUOGQOAEUQWAUUHSVLTUCMCSYUCCPVNRXXRDLJJJUDUIWRRTSOWTEOBIRKX");
    msg.value.assign("YVVXKJTCBTBHZH");

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
    msg.setTimeStamp(0.539338620457);
    msg.setSource(41992U);
    msg.setSourceEntity(107U);
    msg.setDestination(65095U);
    msg.setDestinationEntity(26U);
    msg.name.assign("OQSDOBWWEJNXDJXNNUCYZXRIBMEJZGHOZPBFDJKANTAKCQUYYSKLVIWZMIBXPEQSUUEJBPHICUABRHOZPOZTXZCVKLDNCMVTXOKQZWLLHKIFRRVIVPSRSJXWLFDCMOGHVJIUHGCECSMGSLUAYRZUDRJGETRWFHJYDAFCVTTGBYYLNRQYHLCGLXUBHXFNNSNZQPMFQQEJATHSWPEGTFNKAPIOXLEWUQWBBMWTMYKVIDOEGVMFTV");
    msg.value.assign("UQQOKPEBNCJJBWOJ");

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
    msg.setTimeStamp(0.292763858128);
    msg.setSource(28667U);
    msg.setSourceEntity(166U);
    msg.setDestination(21119U);
    msg.setDestinationEntity(241U);
    msg.name.assign("QZUQEWJVLBNVFIJOTUMIXWAJTNIWEYPFHSVHAJOBMNCYIZQDPRGSLSKIBHBNCVRDMSFIZICNSCETTWLLUBGZCRVXPVJGVHOTNTKRHDXEQAYFKCZMOQPGOWDKQXCLKFHSXFAJSBARNDQWXHJZRXXPYYIKGJEBBLIUFEPQDUI");
    msg.value.assign("HUFGIBMDCCKDLAUYDSFGBVHTMGSU");

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
    msg.setTimeStamp(0.581278387954);
    msg.setSource(2531U);
    msg.setSourceEntity(248U);
    msg.setDestination(5727U);
    msg.setDestinationEntity(164U);
    msg.name.assign("MCNBUIPUQNHUTFXBMEAUTICJNGBCLBIAIMVFGJOWSQMOOJBXZFVLDCHLDANTJJGULMLVROHLTZECLTJVQAKWCAIFVYEPYYYFNQFUQPFRPCTNPWBBRTXMWMXXTGRPZDUPSGYDXZSQZFXBRILUGKVKYTORUQEYSASWRDMZVYFWKVWJZXHVEJAJQSYGRGACWPDFWGMZZQUNPDJTNKKVIEKHPOWIREDNHHCROCOMEKSYIOHHXALDHBNOL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GYYHNKKMQTXSAETCHOSMPAYPHSFMIDZFMCFPOPSERCKYHAVFIIPQDERQOJLLSXUQUYRRVJWCMRZLAZZHWENLLPXI");
    tmp_msg_0.value.assign("PBIADCLYHHSHDJZBEKSXWACFEUTZTMAVGGCFIZDQSIERDSNUTVRGFUXTEDZDJJYAGNBUYLREAXOKVZULEMGHWVNBMPKIBXQJRFQJWZERNXFBGYFXCPLZVECNOHPYLBOWAGMZIYXNNMCRDJTAYKDMEZALI");
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
    msg.setTimeStamp(0.247023794634);
    msg.setSource(16946U);
    msg.setSourceEntity(78U);
    msg.setDestination(57939U);
    msg.setDestinationEntity(121U);
    msg.name.assign("SGOLXRNHBZFBMJDSFWYTCALCUWEWBRPFMEUXTTXWKMDNWVVVGLGYMHVTVBUJPJDPNOWBGSVCNCAPDNIQKWMUICYBTZMKLZLOAJBNGFFUJXYHFXHMDCLFLOTPRTYJOYCAJGQNKUELPEILEURSQBMSENIHTGAVBZUOJMODKVHQZLDNQHAROXEUW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UYIMLJLBQDSHXAEWVUCKCBDWPIKMSJKRYASNZFYOXLQUTBGYUPHEITBTLMAWRANQRMIMQPXMXBBLKPFAOBGWHYHNRIQHBZUCEKVILRONOCZAWXVF");
    tmp_msg_0.value.assign("AIGEWQFAVIBRCXVGGGRJKOTTYGCHXKICIVPLSUIBOLKUUZTTHONCHJPT");
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
    msg.setTimeStamp(0.571010766583);
    msg.setSource(9850U);
    msg.setSourceEntity(53U);
    msg.setDestination(35072U);
    msg.setDestinationEntity(194U);
    msg.name.assign("DYWYNFOTCERWAZGPOSFCKFANCXFFUMSYSLRUZIXIPINYURANSJAEYPFJZDRMXDXWSBVBVRPBXGBQQAJWIP");

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
    msg.setTimeStamp(0.00918619957224);
    msg.setSource(51868U);
    msg.setSourceEntity(1U);
    msg.setDestination(38856U);
    msg.setDestinationEntity(5U);
    msg.name.assign("JPXZRYXUYSVWQWGHMHZQJGMCOVDT");
    msg.visibility.assign("WBODXPEWHWLGRQUIINDSACLBISYONOQWAQNBPPBRCCBXMGTMZZHXKWJNMUXUXIUKLGEMIPUVHCTQSJYKVDMKXFOETFWFJYDJJKTKUAABPJRKWHTBPVXAANJVWDYCQRFHZBREFSVWIDCGDENHBZPRM");
    msg.scope.assign("ARSSTKOSBWHWJTDDEPVYVTKLJKDGHQGACURDMTKNMBSPFXBZXCIGCNNOMOZWAOAMEYBNZNZLVZCGYJWAA");

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
    msg.setTimeStamp(0.622934662659);
    msg.setSource(17771U);
    msg.setSourceEntity(78U);
    msg.setDestination(32538U);
    msg.setDestinationEntity(244U);
    msg.name.assign("RZKTPARPIEVUAPCTIGUPCTTFCLTISIZSXKZBUADDONITMVVQ");
    msg.visibility.assign("HDQTXPJCSEWINLFIWNODREINNBWAXLCFMFURABDYBTKGHHZUMKVQEKITUNPULUVLOBZIKHYY");
    msg.scope.assign("MXGKZAIAPQFPWXBJVEXDLAPEAKZRTYYDAJSIERKBDJCBPQPHUWYVOVRETVXVEFLSHUWILAQSLCCVJTBRFNEZPBMDOIRUNHJEFAKHONLKIDKMWGWXXPYNSOJSFEIHIAHBSLQNORUGCATNYZ");

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
    msg.setTimeStamp(0.791666186817);
    msg.setSource(31817U);
    msg.setSourceEntity(152U);
    msg.setDestination(14784U);
    msg.setDestinationEntity(215U);
    msg.name.assign("AHXCDTBGGLUGCDRANVHTFVHFYKVKFECOHQYHBZZWNMTQDNRLMYPWSUQXZOEACLPRENXIKOFXNTBQEXLTFCEGADATKZJEZQXABZBQNNNOJKKPWDYFUXIYKGRKJMYJSAVWMWPQRQJLWJGJUEAVTOLPKFPVSTPVARPIYBTEIGFMXIOWMHLNSVCPUKMCBFDUJZRERAMXZSIDEUHOOSWJSHXBUYUDRPGCYCWRCSMOSBJVIBUGSILTIGQOHNVH");
    msg.visibility.assign("MXYAYLJSPRGSMMMPVFMNEGRNUWFUKSSVYUWNDKYUVLWMPHSFKTDKXDTDKAPCIRNZODRBOBLLKCJFXQTAAQVNOADWIKDPLGGCIIYETQTLXBMTSCZHETHJRYYFFJXFZLLJOOMNWSEGULHDAWBKFTXSBCPPCPHHAZHVGGRFAGUC");
    msg.scope.assign("RBDJXMPAZHGBZIOPQBTGSQEJEPNVOWGZTWYNUYFVVUHXTINCFNHVLS");

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
    msg.setTimeStamp(0.433329552896);
    msg.setSource(64645U);
    msg.setSourceEntity(143U);
    msg.setDestination(49459U);
    msg.setDestinationEntity(159U);
    msg.name.assign("JKHZYGGFSVJDGDYWWFABUWXGLJNPBJWKPMLTDNQWECSRECZUWEFOOJIAHRBYCASFIWVUQKYDHYODUVQILMQMZKEXBJZGSSATPQCMTVAMIGDU");

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
    msg.setTimeStamp(0.909309054723);
    msg.setSource(25794U);
    msg.setSourceEntity(68U);
    msg.setDestination(60120U);
    msg.setDestinationEntity(20U);
    msg.name.assign("UNIOIRNHBVSDM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CARCIEWBHRXWGIZVCKNWP");
    tmp_msg_0.value.assign("QPULKTWSYQDKJJJMUTNROFWBGWSXCTCLDIPXZQBUNTCFMWIUENZGDMVNBTDPJLHAEEICKXHVYKCOQXUXSSTQAJAARLAKLHVSATKLDEIISXEIRNMPZQJBJKZ");
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
    msg.setTimeStamp(0.357337970581);
    msg.setSource(27795U);
    msg.setSourceEntity(66U);
    msg.setDestination(50314U);
    msg.setDestinationEntity(196U);
    msg.name.assign("XPDEBJWMRZZEOBKAKAUGVYAPNFPEQILOFALIZLABXDMTIYUCMCGVRSVQIOJOUWQGTWKNTPLVLZQSUIZWDWDFJGMOWCNYYYNKPFAMWKERSPQTVZFTLHTEOXNXPMXIHFGVEICQGTHKYXQUBNNJSDIWFOVFRGUTKFTDHRRULCTCOCHLCXMRSYBCYOMYNEDVZSIIXGSDJBEHKBLUZPSEWEUZAAKNGYXCHVOLJXAPFBSJHRQQPDNUKMRSJRJWBVQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OZTDHCVANCXLJVCQBAVPZCYKOWCBOKMWYKUUYRPPQAARCRHXMBJBZVIMYSNAXMNTXJTIFFJSBKCRQDEPOOEMHSPDQSBDUTAFSLJJXNIFMLEQTTWGHXEMVGWL");
    tmp_msg_0.value.assign("BAIGLTPDBYHSSTQRPQHJMZNVKQABMPDWDFERMXDFHQPHWUSXSGZIQBTTVBBWEFNXZLWHKAYOKFJFJCZK");
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
    msg.setTimeStamp(0.832350099104);
    msg.setSource(51888U);
    msg.setSourceEntity(206U);
    msg.setDestination(11329U);
    msg.setDestinationEntity(149U);
    msg.name.assign("GYULFGSITUNCNYYUZIBDTYMVTKEJCVEPKSVFOCQVQLYTBJCDEZQXHBGOGHOHVLTQENZJO");

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
    msg.setTimeStamp(0.540746091494);
    msg.setSource(22650U);
    msg.setSourceEntity(202U);
    msg.setDestination(58204U);
    msg.setDestinationEntity(72U);
    msg.name.assign("CLCVBNHQJXFDEEPWCEZFHPGXDFKIZKKTBAHCIGCMVWIEJKLBMNQYDVZGHVNLDAYVKGBYWOZDMUCMUDYXOSUIXPQCEKQCPLSVJMEAAYSNGNJEBOODRLIQYWGFNRVWZUTHFYLFHONMRFSAMZLPPPZTYNBFTAEERFTDXRBHLNZXZJYPWUXNWAPIGUOOJHXMURTIRVJDKGIUUPZMWXLQSHJCQWKTQJRTSXBFSIQKDROM");

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
    msg.setTimeStamp(0.960169795812);
    msg.setSource(38684U);
    msg.setSourceEntity(195U);
    msg.setDestination(19850U);
    msg.setDestinationEntity(40U);
    msg.name.assign("IJBHKYVOPYQCKDMFBSCLYZCZUDHMUJQYIQNGUSPUJFTBAWQENZGXRCJEJGNKNIEHRSDCYRBMBSEIFIJOAOGWXEVGZWXLWVJSKLXUEFBTKSVIBHHDOVOHXFHPQSKGRPRRVPWOTLHGLMZ");

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
    msg.setTimeStamp(0.0387346901433);
    msg.setSource(18323U);
    msg.setSourceEntity(66U);
    msg.setDestination(16718U);
    msg.setDestinationEntity(0U);
    msg.timeout = 2684113253U;

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
    msg.setTimeStamp(0.555150603641);
    msg.setSource(33303U);
    msg.setSourceEntity(63U);
    msg.setDestination(29454U);
    msg.setDestinationEntity(229U);
    msg.timeout = 2954778915U;

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
    msg.setTimeStamp(0.00557757664524);
    msg.setSource(64393U);
    msg.setSourceEntity(161U);
    msg.setDestination(50125U);
    msg.setDestinationEntity(124U);
    msg.timeout = 679790094U;

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
    msg.setTimeStamp(0.764707637607);
    msg.setSource(40237U);
    msg.setSourceEntity(139U);
    msg.setDestination(57436U);
    msg.setDestinationEntity(178U);
    msg.sessid = 3084616357U;

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
    msg.setTimeStamp(0.32444525298);
    msg.setSource(37556U);
    msg.setSourceEntity(178U);
    msg.setDestination(23282U);
    msg.setDestinationEntity(198U);
    msg.sessid = 2210283685U;

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
    msg.setTimeStamp(0.276230949268);
    msg.setSource(11897U);
    msg.setSourceEntity(11U);
    msg.setDestination(51402U);
    msg.setDestinationEntity(103U);
    msg.sessid = 4266199853U;

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
    msg.setTimeStamp(0.519330074434);
    msg.setSource(7287U);
    msg.setSourceEntity(124U);
    msg.setDestination(33087U);
    msg.setDestinationEntity(173U);
    msg.sessid = 3871101554U;
    msg.messages.assign("FXSJGJXQTZMTZMRNSFPCIXWMLJSYRKTCSNFGUXWHZDTYLYNCFNKJGEKFPRVRAESVUIHVUGOKGOIWDHOUHMIJYXWKNVRMHQONXWDYPHVUZBCPWMPUSDZVXSLZNLBGEFDAJLRIOIFNQETBKOVGEQTQLEBPYDTWRWIHOTUSYUWJDIKOQCQCRAAFMYPUMNQDZCTABLCEVUASQZLBZEABYFPRCLCBQNKOIE");

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
    msg.setTimeStamp(0.282034968252);
    msg.setSource(51997U);
    msg.setSourceEntity(103U);
    msg.setDestination(33071U);
    msg.setDestinationEntity(219U);
    msg.sessid = 756268490U;
    msg.messages.assign("VEYNWZJRBDWJJKVOUURYDNZATWHAHQSPJBDMXDXXMOIACQCTBFGLHDFIAJKVUPCIZDEPULIGNFUPCCHOFKZEGSQMWNPNTGJGIBYOTVXZMLPJFDVSWMIKMRUCFLGWIJNYFEUVQHROKYKSKWJZERJRWADNPQTLQDOPLTVYOIPZLSI");

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
    msg.setTimeStamp(0.0987132193113);
    msg.setSource(12664U);
    msg.setSourceEntity(77U);
    msg.setDestination(5025U);
    msg.setDestinationEntity(159U);
    msg.sessid = 2943284506U;
    msg.messages.assign("CDMREEFJSHOUGUUQOPHHZSLIOEQOCTDVQFNNSYRWKNNVHLXRVGJJITGAQZABOHVQCLOWAQGFILAMZRPBTYLYSHEMDPYWWFDYTX");

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
    msg.setTimeStamp(0.477006949158);
    msg.setSource(39937U);
    msg.setSourceEntity(68U);
    msg.setDestination(64808U);
    msg.setDestinationEntity(246U);
    msg.sessid = 3122696166U;

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
    msg.setTimeStamp(0.520585011616);
    msg.setSource(34735U);
    msg.setSourceEntity(201U);
    msg.setDestination(56339U);
    msg.setDestinationEntity(3U);
    msg.sessid = 3719535270U;

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
    msg.setTimeStamp(0.708817043061);
    msg.setSource(17205U);
    msg.setSourceEntity(181U);
    msg.setDestination(11368U);
    msg.setDestinationEntity(96U);
    msg.sessid = 2813119186U;

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
    msg.setTimeStamp(0.164377748027);
    msg.setSource(48453U);
    msg.setSourceEntity(145U);
    msg.setDestination(25280U);
    msg.setDestinationEntity(163U);
    msg.sessid = 1726454367U;
    msg.status = 195U;

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
    msg.setTimeStamp(0.740161995103);
    msg.setSource(56016U);
    msg.setSourceEntity(51U);
    msg.setDestination(35077U);
    msg.setDestinationEntity(95U);
    msg.sessid = 1727627153U;
    msg.status = 3U;

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
    msg.setTimeStamp(0.357206835583);
    msg.setSource(16462U);
    msg.setSourceEntity(253U);
    msg.setDestination(46864U);
    msg.setDestinationEntity(233U);
    msg.sessid = 53270186U;
    msg.status = 144U;

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
    msg.setTimeStamp(0.254810040902);
    msg.setSource(23432U);
    msg.setSourceEntity(229U);
    msg.setDestination(2868U);
    msg.setDestinationEntity(189U);
    msg.name.assign("YKHRHPCLEQPSERWJYTKKORJTHSFMWDBIYOVBVIBVDVVQZWTAXWPVWIMPEDHMIKFTDANVNKAUMMNMFUCPWRSXTDTGABMBWNQGZIIMTJZRQTMGHNTPUEELQQGCKZLHLUSFKCOLDUHCAMLACXRYDYSHQULKISLQOVCAHYEXULDCOWJBPGXNLJFCBYHZNFBORYAIDRDBIXFBEZZOUWCJWFGZJSSVXRENTOYEZZ");

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
    msg.setTimeStamp(0.572716728111);
    msg.setSource(50768U);
    msg.setSourceEntity(11U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(48U);
    msg.name.assign("IPELTYFAZNGMADHPJNVQMURFNWVIJPEXSWEGLVHDSWGCXANOOEKWOXGCZAQWPTBZF");

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
    msg.setTimeStamp(0.63972894359);
    msg.setSource(8263U);
    msg.setSourceEntity(40U);
    msg.setDestination(36690U);
    msg.setDestinationEntity(172U);
    msg.name.assign("EHPWBOJTGATXXUEZRVGQWKAWRPDPWUITZSCJBWFVQHXOKEPYYSDRHWHYXOMCBFKQAHZHLUZWNJPNUVATAOTDKRPDCBCSSGCMRFLZFJNPNGIVQNENVEMNRYOVXIABMKLCFOFMXLISTZEGQADQREJICVULMBSAZVGPOQMYUIFCYMNKTZJYKLQFYXDKZLDG");

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
    msg.setTimeStamp(0.762440977436);
    msg.setSource(2639U);
    msg.setSourceEntity(28U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(35U);
    msg.name.assign("KMGTOOIDNJIUOBUBSNPRFHETIKQKCAMUGNQBUNWICMCDTFPLRDBYZJVZDTSOGLIRFQWRJNOOUEHZWEAMGRSXCCBBDHMYAKWWUGHUYYFLEMMHQNCGAVDIXLLJSNVZAHULRMOXHBSVYAPFNTRFKWEEDSQFPKXXDVRHYVPSDUZKHPPXJIXJBKNJZBKZVWOBHRNEKOGXFYTESJMSZFPXSLDYLALIQYGCGRCWIQXG");

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
    msg.setTimeStamp(0.672190153468);
    msg.setSource(15948U);
    msg.setSourceEntity(145U);
    msg.setDestination(53728U);
    msg.setDestinationEntity(12U);
    msg.name.assign("LVOUXDEKJRKFANEPKRTTCRESDKIOMGVSTCZIMJMPNWNFJSLOGDOSMHMUVDIXQGXQDGHEPCUEDLBXXYTZRGBRNWXVXBBOVYJQFNKZDAMPBJRPEQAYGKTTEUPYOS");

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
    msg.setTimeStamp(0.938716606947);
    msg.setSource(42984U);
    msg.setSourceEntity(42U);
    msg.setDestination(20378U);
    msg.setDestinationEntity(89U);
    msg.name.assign("USAVIVBWPATNIKWPUSLOSSGGYFYIWUXGHQLKGGUWRQXFZSBMXBLECIVLNAQHSODIZSYNROKPTJKNAVYLGOQKJLLUYWYFKGTKTPKWCJEKOGAXTZFWLXSREOZRGBMMJHOHYNZWDOD");

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
    msg.setTimeStamp(0.427516156586);
    msg.setSource(52595U);
    msg.setSourceEntity(151U);
    msg.setDestination(48241U);
    msg.setDestinationEntity(51U);
    msg.type = 209U;
    msg.error.assign("LXZKISIZGDCUSFQQWEGRCIVKWMUKFEFRMMKRPJRNTNOFLUYYUOFPJHBDSJKIXBVJEMHKPPNPOJSEBYAKOYQUVONEWXPPWTTHGWVLKNCSQZMXXVIIYXBQAFBJLRDHYOWSCNCLMBGTVDEYOSAGNEWHGADKCGGQOZGSYHPPEIFD");

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
    msg.setTimeStamp(0.516897733504);
    msg.setSource(28335U);
    msg.setSourceEntity(110U);
    msg.setDestination(36749U);
    msg.setDestinationEntity(78U);
    msg.type = 246U;
    msg.error.assign("SXGNDIWLFTLAVQWJVEDMZHXNXBBVNSPCZYTOBKIWGPHRYFNWETQAUZHDPEKOJSBPVUMWXIUAGARCNJZM");

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
    msg.setTimeStamp(0.597244990945);
    msg.setSource(50387U);
    msg.setSourceEntity(1U);
    msg.setDestination(26806U);
    msg.setDestinationEntity(41U);
    msg.type = 81U;
    msg.error.assign("DOHCELFBURIFAUJJLRTGXZFAXCJTAWJOQIYVIIOEUJFGQLRXXORELYDRYRPHRJNSQZGVGDBCMSZF");

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
    msg.setTimeStamp(0.268230500889);
    msg.setSource(54238U);
    msg.setSourceEntity(69U);
    msg.setDestination(39848U);
    msg.setDestinationEntity(77U);
    msg.seq = 64507U;
    msg.sys_dst.assign("BLNGFKIUPQMZASQXMIBJFXNCAECERODFWTVHCBLXPT");
    msg.flags = 201U;
    const char tmp_msg_0[] = {-10, 29, -10, -15, -67, -122, 36, 80, -15, 101, 17, 18, -128, 77, -52, 14, -86, 111, -94, 111, -74, 41, 58, 71, -102, -73, -97, -14, -94, 3, 13, 24, 120, 65, 61, -33, -9, 112, 104, 38, -106, -112, -37, 73, 26, 7, -82, 122, -33, 13, 59, -69, 47, 10, 114, 24, 14, 31, 10, -40, 70, -68, 34, -110, -99, 124, 80, 104, -40, 97, 67, 115, 111, 94, 45, 111, -51, 104, -84, 32, -108, -39, 66, -35, 10, 114, 108, 68, -99, 36, -60, -28, 81, -25, 16, 97, -78, 17, -21, 55, 13, -27, 81, 52, 72, -32, -112, 46, 46, 14, -10, 48, 4, 108, 58, -11, -121, 55, -105, 124, -81, 7, -48, 30, -78, 60, -100, 4, 109, -26, -92, 70, -117, 105, -80, 124, -57, -15, -57, 81, 33, 44, 53, -50, 79, 97, 126, 19, -1, 95, 81, 107, 106, 125, -56, 112, 52, 18, -18, 109, 37, 71, 77, 8, -6, -4, 45, -6, -10, 48, 95, 66, 75, 52, -59, 25, -124, 87, 27, -52, 8, 101, -128, -95, 114, -20, 53, 120, 12, 21, -1, 34, -61, -2, 35, -20, -103, 53};
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
    msg.setTimeStamp(0.205063231287);
    msg.setSource(41891U);
    msg.setSourceEntity(216U);
    msg.setDestination(63709U);
    msg.setDestinationEntity(174U);
    msg.seq = 51903U;
    msg.sys_dst.assign("DQMZPTWKMMRYAIVZTYNOFFIBJKGCSETUMVEQWGBFAFOKGPFEJLQHJSXPYUUSJTOLWCINXXEMPRKFAHTECNIBQRWESBUWDNPLBHTQNZIVSXZGMMXMVCQJOGKNYERHDNYPSBJNSPQRDGLLKPLEJIAGAMGDBVXWDUZYZDWIPKIAAVAWSRHCIRPFJBWKCLCFCOJHZOZOURHLUKHCSXUQEDDJHBVHBIEOWTQTYVFSNVKZAYNQVYTYFRZLGAOXMOUX");
    msg.flags = 30U;
    const char tmp_msg_0[] = {77, 83, 14, -118, 96, 52, -68, -75, -104, -126, 91, 64, 73, 13, -94, 2, 91, -59, 82, -18, -17, 110, 126, -9, 83, -46, 5, -111, -107, -5, 61, 116, 98, 111, 3, 42, -33, -124, 54, -8, -124, -44, -60, 45, -87, 14, 99, 100, 21, 125, 50, -117, -44, -10, -65, 90, 16, -69, -52, 84, 36, 117, -35, -86, 59, -47, 53, -67, 41, -111, 8, 48, 23, -67, -126, -35, 93, 108, 108, -56, 55, 53, -6, -107, 45, 83, -68, 62, -44, -34, 117, 48, -3, 35, -119, -128, -69, 66, 5, -102, 107, 98, -36, 59, 99, 80, 53, 73, -46, 64, -9, -74, 40, -97, -35, 16, 90, -31, -110, 70, -87, -67, -13, 51, 64, 9, 89, -19, 55, 11, -53, 45, 69, 79, -91, -4, -75, 8, -30, 4, -51, -106, -54, 117, 115, -21, -67, -27, 102, 11, 48, 89, 66, 76, 47, -125, 3, -69, -40, 29, -3, 119, -79, 59, -1, -39, -21, 71, -91, -63, -9, -69, -82, -25, 8, 49, -74, 7, -79, 69, -6, -121, -123, 57, 87, -124, 115, -42, -127, 26, 104, -74, -126, 78, 120, 85, 62, -35, -20, 66, -14, -43, 4, 19, 24, -25, -127, -117, -97, 100, 49, 73, -64, 112, -4, -43, 69, 95, 41, 77, -3, 77, 63, 86, 123, 22, 77, -28, -111, -98, -40, 93, -106, 13, 63, 61, -119, 15, 72, 23, -55, 106, 97, 8, -114, 8, 13, 112};
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
    msg.setTimeStamp(0.446674802873);
    msg.setSource(58819U);
    msg.setSourceEntity(21U);
    msg.setDestination(61857U);
    msg.setDestinationEntity(13U);
    msg.seq = 24587U;
    msg.sys_dst.assign("GOUQZZPXPMFMHAGVFUJBHYJBCSQWOHYIXXPJTSCKUOQYGDHAXFDYJLRSADIYZABYAMNCWFYIZJFPBZNOQNVCGUICVSQFMWR");
    msg.flags = 136U;
    const char tmp_msg_0[] = {57, 81, 49, 107, 61, 99, 1, 38, -27, -123, 109, -87, 108, 51, -118, 12, -99, 37, -110, -73, -102, 18, -60, -47, -53, -94, -125, -89, -94, -120, -15, 69, -102, 27, 55, -96, -118};
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
    msg.setTimeStamp(0.0951880577549);
    msg.setSource(9941U);
    msg.setSourceEntity(70U);
    msg.setDestination(29390U);
    msg.setDestinationEntity(167U);
    msg.sys_src.assign("ZJRADQXLVRWLEJWMNVEQUBHWHDVXIRDTQUITEGHUJTKPDOWQCC");
    msg.sys_dst.assign("MVSPEUVIZXOGRYBYSEBPNEXTMZUWJHCPXHACBTLSNZIKLZOQFZUEDQGHILCRSEIHDCLNTMWPRMMRBJGCDTWASSQUJAPBPFFXZYLDHNCQTSOTIBXFYHUKUONZXWMAZWYTVGVWJPTTELKYQPFLNUVLKXOFDTVJGWMXRNQQGEXGAY");
    msg.flags = 176U;
    const char tmp_msg_0[] = {-110, -69, -36, -119, 83, 92, -99, -86, 91, 98, -11, -119, 29, 14, 76, -60, -40, -95, -16, 88, -44, 74, 67, -23, 114, -107, -81, -113, -63, -91, 10, 60, 81, -58, 65, 103, 112, 46, -71, -64, -73, -11, 104, 45, 56, 59, -42, -87, -120, -127, -24, -122, -62, 118, -7, 116, 115, -56, 105, -127, 34, 110, 116, 82, -17, 51, -58, -74, -121, 57, -36, 71, -113, -74, -1, -58, 12, -101, 71, 45, 70, 70, -22, -77, 22, 32, 117, 61, 67, -120, 78, 90, -99, 110, -41, 72, 25, 29, 74, 39, -29, 74, -64, -108, -7, -19, -21, -1};
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
    msg.setTimeStamp(0.585165129018);
    msg.setSource(49397U);
    msg.setSourceEntity(10U);
    msg.setDestination(61025U);
    msg.setDestinationEntity(2U);
    msg.sys_src.assign("TPRNQBYDYSXYYRMGAGPDBWUTDJSKXSNRWADDLGDWHPNICCQPZG");
    msg.sys_dst.assign("ZGXWLHEAXKOFFQUYGBRNHVEJXWUPCPKOCP");
    msg.flags = 179U;
    const char tmp_msg_0[] = {-115, 17, -124, -107, -111, -53, 25, -79, -119, 95, 75, 26, -97, 11, 14, 4, 124, 0, -111, 104, 117, -114, 126, 30, -84, -36, 115, -20, -49, 45, 94, -81, -97, 60, 120, -56, 124, 70, -49, -62, -48, 3, -27, 35, -8, -127, 24, 104, -106, 98, -10, -49, -88, 38, -33, 85, -9, 0, 12, 1, -128, 41, -82, -55, -57, -82, -17, -77, 99, -68, 93, 43, -43, -43, 42, 82, -66, -49, -10, -39, -98, 1, 27, 71, 101, 92, -12, 54, 1, -85, 105, 118, 97, 125, -115, 11, 92, -99, -36, 46, 47, -31, -107};
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
    msg.setTimeStamp(0.352718836271);
    msg.setSource(22503U);
    msg.setSourceEntity(252U);
    msg.setDestination(58804U);
    msg.setDestinationEntity(62U);
    msg.sys_src.assign("ZUABDHECGKUHKSXDTDDTFJACALQZNETSJSUCRNAZFOLYVMQULKIXVDXFQJMGGNWOTFMBIWBGSACANRHOWRBYPLIYPPZWKDBBMYETCHFHKEUHIJVQZHUYDRNEMTJNIYBJLSMZEEUENIKVGQRLOLPIVLSFVGXKFHRDSUWDJXPQKMIYVCHWQJDPEZOTSAIGJYXFSCOALFKONNCGRWOXBILVYYCGWPZGTBPJR");
    msg.sys_dst.assign("ACLJWDOEMSMHUIYFVWBKNRIMSHNWFJKFEBVOOCUYEGFOXDMWVFVPTDGLOLGTWEVGSAMRKQWOZKVSXMKDITQPWTOHIVUKUBSBHUTPQNBNLRPJNXGANFHXLRCPRGZRJQNEACHJDJYJKCRIEZPLBWDOBGSZEUCUBBQQAUXUYCCX");
    msg.flags = 109U;
    const char tmp_msg_0[] = {14, -102, 82, 99, -25, -115, 112, -83, -109, -128, 93};
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
    msg.setTimeStamp(0.824507136313);
    msg.setSource(62489U);
    msg.setSourceEntity(230U);
    msg.setDestination(56376U);
    msg.setDestinationEntity(21U);
    msg.seq = 48141U;
    msg.value = 210U;
    msg.error.assign("PJGOVPFAQDINBALNCOWOSQCDVMRDBUQKETLRAPNSENHAKCZNWJFKXHWSTJZNDCHWFQWGRMSIIPYNZCXYZWGBBFQMPDRGBJIPVLUFAFMFPIETFNWGHYUDMVOQPNMSDXYHSREUKHTKCDOOTMABGNPJUQUIQHLUOJGOLYXLVYVEAEYKLXJZOSUJIYCTEMAXJWQJRDCRRMOHFPCTRSYZTCVBKEQISIXDVXXZHKBZIRXKWWLZLETMGVBKEV");

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
    msg.setTimeStamp(0.713487786512);
    msg.setSource(44194U);
    msg.setSourceEntity(47U);
    msg.setDestination(49177U);
    msg.setDestinationEntity(155U);
    msg.seq = 49865U;
    msg.value = 222U;
    msg.error.assign("OJZYCUKIAZNSGGVLPDOEHMTQTLKEJSFHPVEVQFXTJYYKKVSLLZFGHRPLZOKVIFQLNQHXAMZQQSSPTKBXHVTNTONMGWLERNF");

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
    msg.setTimeStamp(0.354911243908);
    msg.setSource(61546U);
    msg.setSourceEntity(86U);
    msg.setDestination(50664U);
    msg.setDestinationEntity(252U);
    msg.seq = 31317U;
    msg.value = 122U;
    msg.error.assign("PSXMGEJMBQAIPLXHHHDSQCGPCNACVIMRZUCVMWLLJUBGRTEISYDLDQKPFMEKWUGBXEYTWGBFBKEDMFAZWEOHRVJFXFZNSRWBQHHEXCRUDIAYLTOQNCTXFDTPHAZEULGRDUNYNGPIQIYUUWOOMVRJQKWPMHCZKVJIIQJGTFZQZREOKSCDJXBKSGXVEH");

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
    msg.setTimeStamp(0.0668805188096);
    msg.setSource(64777U);
    msg.setSourceEntity(73U);
    msg.setDestination(17280U);
    msg.setDestinationEntity(58U);
    msg.seq = 7284U;
    msg.sys.assign("AOXHYJLWXYVDBCXDLMEDURDDKZWSHUNPFMXLZIKMZLAEENHWFJNCZKQGUWPZEASSTPCDGMHTRFKFNFWTVQRUZUXVOP");
    msg.value = 0.652876890608;

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
    msg.setTimeStamp(0.706792060371);
    msg.setSource(28053U);
    msg.setSourceEntity(206U);
    msg.setDestination(25622U);
    msg.setDestinationEntity(68U);
    msg.seq = 16844U;
    msg.sys.assign("DEMZESNHBEAMMXQBXUWEIPPUMLOXUDLWZFNRWCKXSHERHVLAOOUEGXALYQZLJVFVYPDBDOIHWGFCVGCMQZRJLFVWQWOAUSNQKBFRKMSXAFPOWQFBGBRDJNIIPOVNNKCBCKZXVTJGNNIADRDEAYUTHPEWFZWSWKYJUJUKH");
    msg.value = 0.0714604651281;

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
    msg.setTimeStamp(0.982593339158);
    msg.setSource(51711U);
    msg.setSourceEntity(86U);
    msg.setDestination(15497U);
    msg.setDestinationEntity(113U);
    msg.seq = 31555U;
    msg.sys.assign("BRMKBSCJAAIVISPUXYRLQJJEFAIRNIATTKMTSQFCHQQCTRBLCAKGNHDKZSGTHMDSOPZCVOZIBKUOVWHVZWEQIUNHKIMSYGUNRIMBDHLKAHSLXBYAFVTNMXQDFHTZCTDRGPASZONCWOYEZUOFYWJPPXQMJFENWPEUCUKBDTYGUDFPBHQAPERLXVNISYURTMJGFOXUQKRMEZGLPJARGVYWDJCW");
    msg.value = 0.380057474331;

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
    msg.setTimeStamp(0.671375545177);
    msg.setSource(34031U);
    msg.setSourceEntity(119U);
    msg.setDestination(55542U);
    msg.setDestinationEntity(58U);
    msg.action = 231U;
    msg.longain = 0.83261487286;
    msg.latgain = 0.652996788914;
    msg.bondthick = 3558529078U;
    msg.leadgain = 0.0242826742468;
    msg.deconflgain = 0.797833090812;

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
    msg.setTimeStamp(0.223998813511);
    msg.setSource(16877U);
    msg.setSourceEntity(70U);
    msg.setDestination(36941U);
    msg.setDestinationEntity(44U);
    msg.action = 112U;
    msg.longain = 0.95707116676;
    msg.latgain = 0.607775530997;
    msg.bondthick = 1907865987U;
    msg.leadgain = 0.934062513954;
    msg.deconflgain = 0.162947623599;

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
    msg.setTimeStamp(0.371491206596);
    msg.setSource(64183U);
    msg.setSourceEntity(62U);
    msg.setDestination(59179U);
    msg.setDestinationEntity(77U);
    msg.action = 232U;
    msg.longain = 0.844503484557;
    msg.latgain = 0.40945401616;
    msg.bondthick = 1712644392U;
    msg.leadgain = 0.437588818638;
    msg.deconflgain = 0.748941649778;

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
    msg.setTimeStamp(0.276066002177);
    msg.setSource(6206U);
    msg.setSourceEntity(36U);
    msg.setDestination(36875U);
    msg.setDestinationEntity(238U);
    msg.err_mean = 0.89635485324;
    msg.dist_min_abs = 0.151526475714;
    msg.dist_min_mean = 0.662341909126;

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
    msg.setTimeStamp(0.564621695813);
    msg.setSource(38086U);
    msg.setSourceEntity(86U);
    msg.setDestination(52969U);
    msg.setDestinationEntity(153U);
    msg.err_mean = 0.253698568594;
    msg.dist_min_abs = 0.964412767151;
    msg.dist_min_mean = 0.809343380312;

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
    msg.setTimeStamp(0.964390234694);
    msg.setSource(7940U);
    msg.setSourceEntity(189U);
    msg.setDestination(32017U);
    msg.setDestinationEntity(192U);
    msg.err_mean = 0.976347874558;
    msg.dist_min_abs = 0.88698708358;
    msg.dist_min_mean = 0.983431349324;

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
    msg.setTimeStamp(0.353012067003);
    msg.setSource(51395U);
    msg.setSourceEntity(55U);
    msg.setDestination(44007U);
    msg.setDestinationEntity(153U);
    msg.action = 166U;
    msg.lon_gain = 0.00908656554221;
    msg.lat_gain = 0.702733918346;
    msg.bond_thick = 0.485306879012;
    msg.lead_gain = 0.975692411241;
    msg.deconfl_gain = 0.579123953123;
    msg.accel_switch_gain = 0.0481278022879;
    msg.safe_dist = 0.693310094184;
    msg.deconflict_offset = 0.138250478019;
    msg.accel_safe_margin = 0.57335056794;
    msg.accel_lim_x = 0.738748210739;

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
    msg.setTimeStamp(0.227184594607);
    msg.setSource(31285U);
    msg.setSourceEntity(219U);
    msg.setDestination(23036U);
    msg.setDestinationEntity(187U);
    msg.action = 0U;
    msg.lon_gain = 0.119071990247;
    msg.lat_gain = 0.295799810998;
    msg.bond_thick = 0.168920817128;
    msg.lead_gain = 0.915466761941;
    msg.deconfl_gain = 0.236909806811;
    msg.accel_switch_gain = 0.914870077066;
    msg.safe_dist = 0.979159520086;
    msg.deconflict_offset = 0.0905729173558;
    msg.accel_safe_margin = 0.529470330701;
    msg.accel_lim_x = 0.435874631074;

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
    msg.setTimeStamp(0.178401728143);
    msg.setSource(34805U);
    msg.setSourceEntity(200U);
    msg.setDestination(50753U);
    msg.setDestinationEntity(58U);
    msg.action = 123U;
    msg.lon_gain = 0.734705545612;
    msg.lat_gain = 0.0610141790225;
    msg.bond_thick = 0.586730110006;
    msg.lead_gain = 0.856481568425;
    msg.deconfl_gain = 0.990133024247;
    msg.accel_switch_gain = 0.78346755861;
    msg.safe_dist = 0.59106377835;
    msg.deconflict_offset = 0.252294165415;
    msg.accel_safe_margin = 0.370700750727;
    msg.accel_lim_x = 0.864941272001;

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
    msg.setTimeStamp(0.568627862456);
    msg.setSource(17528U);
    msg.setSourceEntity(117U);
    msg.setDestination(41353U);
    msg.setDestinationEntity(24U);
    msg.type = 188U;
    msg.op = 62U;
    msg.err_mean = 0.544418393457;
    msg.dist_min_abs = 0.801794312185;
    msg.dist_min_mean = 0.153439160183;
    msg.roll_rate_mean = 0.177733630789;
    msg.time = 0.826849366213;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 221U;
    tmp_msg_0.lon_gain = 0.496952652128;
    tmp_msg_0.lat_gain = 0.514146548126;
    tmp_msg_0.bond_thick = 0.954248212548;
    tmp_msg_0.lead_gain = 0.114590200251;
    tmp_msg_0.deconfl_gain = 0.216741651501;
    tmp_msg_0.accel_switch_gain = 0.355129156136;
    tmp_msg_0.safe_dist = 0.215173887409;
    tmp_msg_0.deconflict_offset = 0.809269146538;
    tmp_msg_0.accel_safe_margin = 0.815791834355;
    tmp_msg_0.accel_lim_x = 0.622991236824;
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
    msg.setTimeStamp(0.969206126142);
    msg.setSource(27529U);
    msg.setSourceEntity(232U);
    msg.setDestination(40675U);
    msg.setDestinationEntity(208U);
    msg.type = 8U;
    msg.op = 53U;
    msg.err_mean = 0.967838845429;
    msg.dist_min_abs = 0.226490642337;
    msg.dist_min_mean = 0.757096901588;
    msg.roll_rate_mean = 0.921809803089;
    msg.time = 0.471447047919;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 121U;
    tmp_msg_0.lon_gain = 0.872415071977;
    tmp_msg_0.lat_gain = 0.735486058818;
    tmp_msg_0.bond_thick = 0.380161330502;
    tmp_msg_0.lead_gain = 0.82981717019;
    tmp_msg_0.deconfl_gain = 0.79723170947;
    tmp_msg_0.accel_switch_gain = 0.699702671619;
    tmp_msg_0.safe_dist = 0.37266517878;
    tmp_msg_0.deconflict_offset = 0.00626225420022;
    tmp_msg_0.accel_safe_margin = 0.00745455137949;
    tmp_msg_0.accel_lim_x = 0.544033418396;
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
    msg.setTimeStamp(0.38310069953);
    msg.setSource(26568U);
    msg.setSourceEntity(119U);
    msg.setDestination(56604U);
    msg.setDestinationEntity(135U);
    msg.type = 116U;
    msg.op = 214U;
    msg.err_mean = 0.856691490696;
    msg.dist_min_abs = 0.545590754892;
    msg.dist_min_mean = 0.0115407821827;
    msg.roll_rate_mean = 0.184312035703;
    msg.time = 0.578177601379;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 47U;
    tmp_msg_0.lon_gain = 0.489919376141;
    tmp_msg_0.lat_gain = 0.715633237724;
    tmp_msg_0.bond_thick = 0.997935236965;
    tmp_msg_0.lead_gain = 0.854363115073;
    tmp_msg_0.deconfl_gain = 0.451975383657;
    tmp_msg_0.accel_switch_gain = 0.488770461427;
    tmp_msg_0.safe_dist = 0.681671534925;
    tmp_msg_0.deconflict_offset = 0.807632943432;
    tmp_msg_0.accel_safe_margin = 0.316733528919;
    tmp_msg_0.accel_lim_x = 0.376690827639;
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
    msg.setTimeStamp(0.726875216616);
    msg.setSource(21218U);
    msg.setSourceEntity(104U);
    msg.setDestination(21771U);
    msg.setDestinationEntity(81U);
    msg.uid = 193U;
    msg.frag_number = 211U;
    msg.num_frags = 195U;
    const char tmp_msg_0[] = {33, 95, -75, 124, 116, 2, 12, -87, 68, -47, 28, -9, -95, 42, -98, -64, -79, -88, -72, 54, -39, -60, -6, -39, 112, 24, 30, 43, 123, -102, 83, 114, -113, 103, 101, 3, 95, -114, 18, 30, -73, -27, 100, -39, 90, 96, -41, -46, 38, -85, 44, -75, -97, 30, -101, -37, -59, 34, -69, 3, -88, 126, -22, -62, 69, -70, -81, 108, -10, 45, 75, 103, -56, 38, -56, -107, 119, -36, 38, 104, 107, -2, 54, -3, 108, -6, 122, 7, 59, -75, 6, -125, -3, 28, 75, -42, -107, -79, 66, -102, -80, -20, 70, -19, 99, 18, -37, -9, 91, 70, 100, 18, -34, -80, -120, -32, 16, 75, -38, -37, 9, 97, 66, -19, -126, -31, -127, -58, -2, 84, 83, -99, 87, -118, 31, -119, -71, 37, -20, -9, -115, 100, 47, -126, 14, 81, 13, 36, -104, -48, -66, -36, -89, -13, 66, -71, -105, 115, -64, 47, 99, -109, 68, -78, -55, 21, -5, -62, 122, -122, -41, 26, -22, -56, 11, -83, 29, 38, -110, -81, -121, 105, -90, -19, -112, -89, 118, 68, -90, -80};
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
    msg.setTimeStamp(0.332922360184);
    msg.setSource(59221U);
    msg.setSourceEntity(56U);
    msg.setDestination(44593U);
    msg.setDestinationEntity(112U);
    msg.uid = 195U;
    msg.frag_number = 90U;
    msg.num_frags = 65U;
    const char tmp_msg_0[] = {79, 116, -50, -17, 20, 40, 15, -32, -72, -57, 48, 73, 10, 9, 50, -57, -72, 44, -40, -16, 26, -109, 95, -125, -123, -72, 10, 29, -64, 64, -44, 43, -92, -92, -71, -33, 16, -14, 95, -52, 11, 122, -46, -61, 71, -111, 70, 125, -12, 7, 66, -91, 83, 89, 41, -40, 9, 45, -58, -12, -97, 23, 87, -51, -51, -120, 11, -4, 34, 125, -44, -56, -71, -111, 48, -118, 13, 118, -10, -19, 117, 83, -107, -109, -11, -54, -110, -24, 116, 9, -101, 33, 2, 115, 77, -127, 72, 67, -118, -121, 28, 21, 63, -111, -115, 72, -54, -21, 73, 95, 24, 26, 73, -98, 25, -67, -18, 55, 125, 13, -58, 93, -113, -9, 112, -62, -106, -27, -46, 65, 26, -115, -20, 53, -79, 95, -45, -50, -53, -51, 102, 55, -90, -31, -38, 43, 13, -20, -9, 34, 30, 27, 43, -123, -4, 111, -87, -30, -28, 83, 68, 13, -36, -23, 101, 107, 125, 98, 56};
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
    msg.setTimeStamp(0.448195821186);
    msg.setSource(57349U);
    msg.setSourceEntity(105U);
    msg.setDestination(28765U);
    msg.setDestinationEntity(2U);
    msg.uid = 166U;
    msg.frag_number = 22U;
    msg.num_frags = 72U;
    const char tmp_msg_0[] = {-53, -46, 89, -62, 110, -75, -85, 93, -80, -117, -125, -119, -20, -25, 33, 31, 19, 79, 62, -127, -121, 56, -76, -95, -36, -90, 110, -80, 58, 42, 108, 125, -108, -54, -112, 121, 42, -61, 90, 115, -16, 9, -104, 84, -108, 102, 31, 90, -17, -53, -51, 105, 71, 47, 68, -120, 67, -20, 75, -2, 39, -71, 11, 9, 14, 23, 41, 98, 1, -121, -62, 78, -116, -81, -13, -69, 55, 5, -73, -120, -53, 60, -84, 124, -87, -96, -106, -27, 76, -67, 33, -33, 22, 88, 119, -126, -127, 12, 34, 112, 74, 125, 116, 51, -34, -42, 6, -91, -109, -83, -32, -15, -107, -11, 86, 82, -78, 68, 77, -4, -54, 64, 47, 2, -7, -60, -27, 51, -35, 43, -123, 95, 123, 39, -27, -72, 85, 71, -15, 70, 12, 73, 9, -23, -23, -71, 33, -73, -63, 88, 26, 95, 80, -38, 117, 121};
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
    msg.setTimeStamp(0.197294442051);
    msg.setSource(63487U);
    msg.setSourceEntity(215U);
    msg.setDestination(388U);
    msg.setDestinationEntity(65U);
    msg.content_type.assign("FMVEXCHISPKFXXCHYXGSDHAGRQPZTHBWVXOQK");
    const char tmp_msg_0[] = {-107, -61, -37, -87, 71, -47, 70, -9, -22, -120, 22, -99, 101, -86, 46, -111, 41, 51, 39, -94, -63, 2, 75, -105, -18, -61, 96, -66, 90, 119, -77, -118, -57, -127, -15, 110, -96, 74, 118, -36, 58, 29, -117, 64, -66, 101, -92, 39, 5, -81, 86, -38, -24, 116, 48, -66, -25, 52, 54, -71, -97, 52, 18, 110, -49, 35, -45, -86, -18, 22, -70, 101, -31, -111, -106, -125, -110, -114, -65, -44, -66, 122, -10, 23, -9, 79, 36, -85, 27, -92, 119, -41, 18, -123, 92, -18, -63, 53, 75, 25, 109, -126, -18, 9, 9, 100, -64, -4, 81, -48, 113, 80, -72, 69, -16, -1, 34, 55, -108, -114, -83, 4, 90, 75, -13, 112, -75, -52, 4, 17, 87, 58, 109, 92, 34, 45, -84, -6, -112, -38, -128, 17, -101, 7, -85, 86, -117, 70, 4, -99, 32, -79, 112, 22, -31, 28, 96, 50, 65, 53, 31, -84, 68, 19, -97};
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
    msg.setTimeStamp(0.799987194751);
    msg.setSource(63524U);
    msg.setSourceEntity(198U);
    msg.setDestination(9253U);
    msg.setDestinationEntity(252U);
    msg.content_type.assign("BSLILKFTIRKJXYIEDAPECZSWVIEKQRMDLRHXYXLOPUSSMBZGRSQHPJNOTPEVLG");
    const char tmp_msg_0[] = {101, -48, -86, -67, -43, 77, -38, 108, -114, -106, -83, 38, 25, -42, 4, 24, 104, 121, 79, -67, -26, -61, -33, -35, -8, 45, -108, 126, 29, 118, -64, -52, 9, -119, 25, -34, -30, -107, 52, -124, 35, -117, -92, -35, 102, 115, 104, -112, 44, -24, -17, 15, -95, -8, 38, -78, -27, 63, 95, -3, -101, -27, 114, 11, 90, 74, -38, -64, -59, 88, 73, -121, 93, 121, 40, -110, -5, 71, -4, 29, -127, 113, 29, 65, -9, -91, 0, -65, -115, 107, -100, -112, -33, 44, -99, -13, -80, -81, -124, 49, -18, 123, -58, -24, -117, 93, -123, -85, 81, 74, -111, 100, -36, 124, -98, -31, -103, -107, -104, -99, 3};
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
    msg.setTimeStamp(0.986997958533);
    msg.setSource(61499U);
    msg.setSourceEntity(217U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(199U);
    msg.content_type.assign("BBPCOWPDFCILEQYLWPZVJTMXGNSFVXDSPNV");
    const char tmp_msg_0[] = {-36, 21, 7, 6, -124, -103, -118, 78, 89, -93, 116, -2, -90, -97, 71, -14, 41, -16, -14, 34, -48, 121, 80, -28, 92, -71, 51, 99, -36, -116, 24, -9, 55, 48, -123, -46, 23, 110, -91, -23, -52, -4, 119, -39, 22, -56, -78, -98, 28, -115, -67, -91, -127, 19, 40, -68, -48, 39, 122, 4, 70, -34, 43, 77, -111, 99, 95, -62, -13, 92, 103, -84, 35, 60, -100, 61, -56, 124, 56, -21, -113, 27, 107, 4, -96, -127, -61, -83, 97, -99, -102, 108, 64, -53, 96, -93, -20, -60, -119, -44, -126, 64, 123, 58, -73, -70, 42, -9, 49, 22, -63, -22, 58, -118, -54, -104, 112, -27, -93, 12, -3, -106, -88, 121, 14, 33, 38, -7, 16, 46, -91, 76, -25, 91, 30, -69, 124, -2, 93, 70, 41, -108, -104, -123, 50, 93, -35, -10, -124, 20, 103, 89, -84, -101, -6, -93, -112, 100, -57, -114, -22, 88, -75, 122, -3, -57, -113, -106, -31, -29, -82, 63, 66, -124, -58, 3, 34, 39, -96, 106, 63, 32, 87, -104, -124, -58, -115, 25, -21, 53, 124, -90, 94, 21, -37};
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
    msg.setTimeStamp(0.567022654918);
    msg.setSource(16944U);
    msg.setSourceEntity(173U);
    msg.setDestination(6786U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.363383695532);
    msg.setSource(15661U);
    msg.setSourceEntity(208U);
    msg.setDestination(11797U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.849727165);
    msg.setSource(30779U);
    msg.setSourceEntity(244U);
    msg.setDestination(54211U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.119482931978);
    msg.setSource(23590U);
    msg.setSourceEntity(45U);
    msg.setDestination(50035U);
    msg.setDestinationEntity(9U);
    msg.target = 7582U;
    msg.bearing = 0.277099631283;
    msg.elevation = 0.717740604035;

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
    msg.setTimeStamp(0.468827253421);
    msg.setSource(65354U);
    msg.setSourceEntity(254U);
    msg.setDestination(34753U);
    msg.setDestinationEntity(191U);
    msg.target = 45406U;
    msg.bearing = 0.567662595331;
    msg.elevation = 0.0652987037094;

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
    msg.setTimeStamp(0.412825744292);
    msg.setSource(37149U);
    msg.setSourceEntity(35U);
    msg.setDestination(51214U);
    msg.setDestinationEntity(66U);
    msg.target = 40063U;
    msg.bearing = 0.627254274145;
    msg.elevation = 0.929555455179;

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
    msg.setTimeStamp(0.682665537312);
    msg.setSource(63629U);
    msg.setSourceEntity(27U);
    msg.setDestination(54816U);
    msg.setDestinationEntity(220U);
    msg.target = 9193U;
    msg.x = 0.407443832192;
    msg.y = 0.160158058406;
    msg.z = 0.550363636813;

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
    msg.setTimeStamp(0.578619824406);
    msg.setSource(29073U);
    msg.setSourceEntity(210U);
    msg.setDestination(56224U);
    msg.setDestinationEntity(174U);
    msg.target = 51785U;
    msg.x = 0.0115221975703;
    msg.y = 0.663178212491;
    msg.z = 0.429417592606;

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
    msg.setTimeStamp(0.497994109375);
    msg.setSource(53875U);
    msg.setSourceEntity(163U);
    msg.setDestination(14043U);
    msg.setDestinationEntity(88U);
    msg.target = 31137U;
    msg.x = 0.700675249923;
    msg.y = 0.954035162668;
    msg.z = 0.0507627005799;

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
    msg.setTimeStamp(0.441925625752);
    msg.setSource(49455U);
    msg.setSourceEntity(9U);
    msg.setDestination(12295U);
    msg.setDestinationEntity(125U);
    msg.target = 18134U;
    msg.lat = 0.231556214371;
    msg.lon = 0.64167239942;
    msg.z_units = 60U;
    msg.z = 0.972367644388;

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
    msg.setTimeStamp(0.236540316265);
    msg.setSource(33502U);
    msg.setSourceEntity(30U);
    msg.setDestination(5243U);
    msg.setDestinationEntity(235U);
    msg.target = 56955U;
    msg.lat = 0.942585260478;
    msg.lon = 0.313968269387;
    msg.z_units = 205U;
    msg.z = 0.476137829273;

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
    msg.setTimeStamp(0.564378513901);
    msg.setSource(46239U);
    msg.setSourceEntity(13U);
    msg.setDestination(50835U);
    msg.setDestinationEntity(118U);
    msg.target = 37520U;
    msg.lat = 0.533479475538;
    msg.lon = 0.751741885912;
    msg.z_units = 72U;
    msg.z = 0.0311213107069;

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
    msg.setTimeStamp(0.445574394681);
    msg.setSource(687U);
    msg.setSourceEntity(93U);
    msg.setDestination(41583U);
    msg.setDestinationEntity(200U);
    msg.locale.assign("YNVTFJFODTGMFJPMEPAVHRXDXMUZUQRYSI");
    const char tmp_msg_0[] = {97, 57, 48, -115, -48, -45, 15, -54, 29, 11, -40, 11, 84, -128, 62, -83, -44, 47, 82, 100, -10, 18, 94, 73, -96, -28, 44, -53, -78, -121, -91, -72, 114, 50, 117, 24, 72, 32, -78, 1, 118, 80, -96, 93, 81, -94, -25, -44, 61, -7, 124, -74, 90, -72, -123, 0, -105, 81, -22, -48, 25, -97, -40, -29, 119, 13, -78, 89, 96, 105, -78, 108, -126, -128, -74, -50, 34, 77, -24, 22, -17, -69, 46, 30, 106, -81, 20, -62, -35, 113, -10, -29, -23, 63, 36, -71, -118, -29, 110, -49, -79, 15, -57, -52, -93, -67, 83, -71, 44, -100, 31, -52, 0, -116, 111, -35, 111, -70, -109, -75, -66, 64, -76, -42, -77, -61, -32, -62, 98, -90, -106, -2, -106, -90, 93, -18, -2, 106, -20, -19, 22, 74, -126, -23, -36, 46, 79, -99, 123, 34, 30, 81, 80, -112, 2, -9, -107, 67, 42, 12, 64, 126, -105, 37, -126, 68, 84, -121, -5, -120, 17, -90, -21, 85, 105, 92, 99, 96, 124, 12, -69, 79, -127, 51, 38, -117, 1, -51, 20, -66, -35, -16, 50, 3, 115, 87, -95, 61, -113, 68, 16, 107, 103, -21, -95, -47, 1, -128, 55, -12, -11, -67, 21, -78, 90, 58, 1, -88};
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
    msg.setTimeStamp(0.798434960048);
    msg.setSource(30610U);
    msg.setSourceEntity(185U);
    msg.setDestination(27350U);
    msg.setDestinationEntity(240U);
    msg.locale.assign("LVXUXQXLMBBICHLQCJMLUWPQPCIOWGLCNBLKOAMFMCVULQIAHJGSFGBTWXYGDIVPUJMRAWJYXEFJAEKPAFLMJDCCTPISDRTZXQTIVDNUWBMDXKRTRXNMEVXBUGVEROQGVYFSEPKYYLIWJOKBUTZSFOIHSZHEUKCZGXBFUWCHFZZDTNSPYSRQHYEOSHZYNHRLBP");
    const char tmp_msg_0[] = {-80, 37, 103, 40, 118, -94, 24, 55, 50, -90, 43, 29, -41, -1, 14, -41, -62, 112, -16, -68, 108, 49, 24, 109, -2, -11, -86, 27, -34, -55, 105, -20, -42, 23, 124, -23, -71, 84, 18, -64, -20, -72, -71, -69, -29, -26};
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
    msg.setTimeStamp(0.246256273571);
    msg.setSource(2369U);
    msg.setSourceEntity(214U);
    msg.setDestination(53121U);
    msg.setDestinationEntity(112U);
    msg.locale.assign("KIUPUVKKEKUXTLXHIVNFLRCHIEEHTAQZLASHUEOZWSVUORTPIKWLQDKZWYZJFXJXUYVZSDSHJGYPAIFMMXANUNMGMFEIEOJZXQKJNMVVCLKQQMBCNTBRCCTSALRDXTQBOGTQBRVYIWXLYTGOOQLBIITBGEJFLJNOOBPZVZPKARMYPGFCBSNNXRVPWGREGLGYFAJHRPOVZJSMTQUDWDIMYCNDOUQNCAGUAZCCHDHHYFSPWXMPHBDE");
    const char tmp_msg_0[] = {-96, 30, -27, -58, 109, -46, -126, 75, -67, 121, 65, -95, 23, -100, 105, 107, -94, -86, 80, 114, -59, -40, 19, 97, -65, -117, 87, -41, -62, 114, -85, -15, 85, 58, -103, 49, -99, -63, 92, 94, -123, 92, 123, -94, -124, -98, -42, -5, -10, -54, 52, 30, 97, -68, 74, 68, 93, -39, 90, -90, 0, -72, -127, 74, -59, -105, 27, 88, 81, -82, -45, -87, -72, -122, 4, 72, -100, 59, 95, -75, 110, -19, -40, -7, 118, 21, -14, 65, -93, -12, -66, 15, -112, -29, 62, 7, 1, 126, 122, -32, -72, -105, 66, -45, -102, -4, -105, -33, -71, -43, 112, 28, -52, -88, 106, -118, -127, -89, -47, -59, 13, -57, 109, 67, 75, 29, -70, 92, 119, -108, -11, -94, -11, 71, 65, 84, 104, 71, -94, -38, 120, -96, 118, 113, 100, -81, -88, -27, -11, -110, 42, 8, -17, -95, 75, 107, -12, -33, -8, 93, -83, -4, -75, 87, -62, -102, -90, 62, 13, 72, -24, 20, 64, 115, 109, 70, 28, -113, -49, -23, -49, 14, -32, 63, 87, 53, -55, 38, -4, -92, 103, 64, 121, 63, 10, -22, 103, 9, 49, 24, 72, -108, -124, 76, -122, 43, -33, 29, 103, 114, -87, -77, 42, -84, 88, 117, 70, -34, -61, 6, -30, 7, -115, -61, -31, 79, -67, -86, 22, -89, 13, 114, -31, 94, 32, -31, -126, 68, -68, 79, 45, -107, 18, -65, -109};
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
    msg.setTimeStamp(0.666557375567);
    msg.setSource(36760U);
    msg.setSourceEntity(99U);
    msg.setDestination(25741U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.158306698448);
    msg.setSource(52685U);
    msg.setSourceEntity(26U);
    msg.setDestination(24518U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.289458677719);
    msg.setSource(12191U);
    msg.setSourceEntity(192U);
    msg.setDestination(61608U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.92015025346);
    msg.setSource(37557U);
    msg.setSourceEntity(149U);
    msg.setDestination(17576U);
    msg.setDestinationEntity(77U);
    msg.camid = 88U;
    msg.x = 22242U;
    msg.y = 19853U;

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
    msg.setTimeStamp(0.844981651178);
    msg.setSource(8770U);
    msg.setSourceEntity(194U);
    msg.setDestination(24123U);
    msg.setDestinationEntity(15U);
    msg.camid = 32U;
    msg.x = 26706U;
    msg.y = 45982U;

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
    msg.setTimeStamp(0.88419723976);
    msg.setSource(63530U);
    msg.setSourceEntity(40U);
    msg.setDestination(25752U);
    msg.setDestinationEntity(239U);
    msg.camid = 200U;
    msg.x = 13364U;
    msg.y = 56474U;

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
    msg.setTimeStamp(0.878076251937);
    msg.setSource(23260U);
    msg.setSourceEntity(0U);
    msg.setDestination(65054U);
    msg.setDestinationEntity(153U);
    msg.camid = 106U;
    msg.x = 16083U;
    msg.y = 5231U;

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
    msg.setTimeStamp(0.460651722689);
    msg.setSource(36940U);
    msg.setSourceEntity(102U);
    msg.setDestination(61162U);
    msg.setDestinationEntity(2U);
    msg.camid = 197U;
    msg.x = 59786U;
    msg.y = 10451U;

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
    msg.setTimeStamp(0.748710919996);
    msg.setSource(13713U);
    msg.setSourceEntity(46U);
    msg.setDestination(61018U);
    msg.setDestinationEntity(49U);
    msg.camid = 132U;
    msg.x = 44508U;
    msg.y = 4722U;

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
    msg.setTimeStamp(0.483576616317);
    msg.setSource(53928U);
    msg.setSourceEntity(17U);
    msg.setDestination(43567U);
    msg.setDestinationEntity(192U);
    msg.tracking = 151U;
    msg.lat = 0.417752183279;
    msg.lon = 0.863044852968;
    msg.x = 0.941847307908;
    msg.y = 0.827969775717;
    msg.z = 0.454906846077;

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
    msg.setTimeStamp(0.413836362859);
    msg.setSource(12171U);
    msg.setSourceEntity(66U);
    msg.setDestination(37350U);
    msg.setDestinationEntity(241U);
    msg.tracking = 222U;
    msg.lat = 0.4397556388;
    msg.lon = 0.658776685286;
    msg.x = 0.934743743533;
    msg.y = 0.255683560613;
    msg.z = 0.850540333332;

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
    msg.setTimeStamp(0.0552696831613);
    msg.setSource(31267U);
    msg.setSourceEntity(242U);
    msg.setDestination(51479U);
    msg.setDestinationEntity(120U);
    msg.tracking = 11U;
    msg.lat = 0.303685572547;
    msg.lon = 0.707177005525;
    msg.x = 0.30428811347;
    msg.y = 0.916367586167;
    msg.z = 0.412658716416;

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
    msg.setTimeStamp(0.309538712605);
    msg.setSource(49021U);
    msg.setSourceEntity(195U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(121U);
    msg.target.assign("LCHKQLWUXJTILICKQVWMSBPCUFFGIUFKHCBOYGKZBRVWGWHDPYOLCOAUIDOAXPLFNCVYZHMKWJURFPAOEUSLMHTKNBSRJMPXHZQTYALMAYABQSQJJZDQESODTGTEZRVXNEYJTVJXEPMOISQGZTUQWCQRXKNFGBGRMDEXDIFLJMYDARTNAJHBBWMFHSCZYP");
    msg.lbearing = 0.313948950402;
    msg.lelevation = 0.258637622503;
    msg.bearing = 0.496412782443;
    msg.elevation = 0.345345425562;
    msg.phi = 0.445965327968;
    msg.theta = 0.460924007591;
    msg.psi = 0.593879492602;
    msg.accuracy = 0.436711833423;

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
    msg.setTimeStamp(0.495560618661);
    msg.setSource(17257U);
    msg.setSourceEntity(216U);
    msg.setDestination(6716U);
    msg.setDestinationEntity(37U);
    msg.target.assign("SOXAYDELMYJFYGWHBCQZKRETCDZAXBQQGMAOSPWESAZRGTCLKLAGJKMHLSMXXCTJDNESSWZOPUOVHOFYZPCWWUCVNMGIPRRCGSRFCHTVJKYIXHVFUINYRLDKPFWUGVTNUEATZHFQRVIXAAZVIIENBBFPONTTLINQDELYXEODGXWNVTPSQIRUHUBMIBQUCKGDJKTXBPHADWMEDZYKNEKJYGVBJZFUWCPXMKFLZHBLQWJQUFOJRISYP");
    msg.lbearing = 0.178037030022;
    msg.lelevation = 0.298024294792;
    msg.bearing = 0.508610764828;
    msg.elevation = 0.0434703522702;
    msg.phi = 0.691746333095;
    msg.theta = 0.236445033273;
    msg.psi = 0.171860718268;
    msg.accuracy = 0.679536055813;

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
    msg.setTimeStamp(0.451517665447);
    msg.setSource(52470U);
    msg.setSourceEntity(57U);
    msg.setDestination(55748U);
    msg.setDestinationEntity(39U);
    msg.target.assign("SFNFDPADOUPW");
    msg.lbearing = 0.774417618522;
    msg.lelevation = 0.0244293470174;
    msg.bearing = 0.885739996408;
    msg.elevation = 0.0824879340464;
    msg.phi = 0.848724889715;
    msg.theta = 0.910861202205;
    msg.psi = 0.733891976241;
    msg.accuracy = 0.745207751293;

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
    msg.setTimeStamp(0.619840641097);
    msg.setSource(49019U);
    msg.setSourceEntity(107U);
    msg.setDestination(46660U);
    msg.setDestinationEntity(191U);
    msg.target.assign("WNICOXQWXTMEOYMARBFIPVHIOEOVGMWXCAZWSCUQLOBLPMGRZLXSXRRVGXZIEKMJHVOELXMDPNSVQACDRNNEZGLPSVCKVPBOIWTUFXPFYKBGGZQEAVDPPNFQJAQLUUTRYSDJUGFEKI");
    msg.x = 0.610573965466;
    msg.y = 0.606796774957;
    msg.z = 0.355246246296;
    msg.n = 0.60042274246;
    msg.e = 0.175500928327;
    msg.d = 0.178863206155;
    msg.phi = 0.176634171146;
    msg.theta = 0.0325309223722;
    msg.psi = 0.00355889705371;
    msg.accuracy = 0.655393378774;

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
    msg.setTimeStamp(0.312746535727);
    msg.setSource(17222U);
    msg.setSourceEntity(68U);
    msg.setDestination(42463U);
    msg.setDestinationEntity(158U);
    msg.target.assign("CCUDEKSGZEZSPQRXHWHIFDWPYLDMGJTNVHEOCJRKEHEWBFYJTUUXKXNKFYIHAPHIYOVADOSQUZDJFVFULXKLNBGVOUYQICOQNRN");
    msg.x = 0.464088815649;
    msg.y = 0.237312355843;
    msg.z = 0.709889235827;
    msg.n = 0.193203998032;
    msg.e = 0.323417288127;
    msg.d = 0.11173605666;
    msg.phi = 0.622115963522;
    msg.theta = 0.765918665205;
    msg.psi = 0.0600968442119;
    msg.accuracy = 0.835849106959;

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
    msg.setTimeStamp(0.258893002631);
    msg.setSource(10436U);
    msg.setSourceEntity(210U);
    msg.setDestination(25823U);
    msg.setDestinationEntity(156U);
    msg.target.assign("EROSALZFNUFZHXWCSKVWHNQKFABYPIOMXPHPCTNVERTDYXXCGDHXECAUVXUACSTJSJMXKYTISFDP");
    msg.x = 0.86774856891;
    msg.y = 0.429583663253;
    msg.z = 0.463056959095;
    msg.n = 0.483824683681;
    msg.e = 0.100069221942;
    msg.d = 0.518943602179;
    msg.phi = 0.0422526528302;
    msg.theta = 0.00269979055639;
    msg.psi = 0.702880186063;
    msg.accuracy = 0.511962523935;

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
    msg.setTimeStamp(0.953220444607);
    msg.setSource(43976U);
    msg.setSourceEntity(76U);
    msg.setDestination(30136U);
    msg.setDestinationEntity(88U);
    msg.target.assign("XXOYNKLWVDOJLVIVSWMKMLQEHTVGNILSNTRIGPAOJPEBSFGPTONCIXPEGHLHGLZAYXMTRPZDRHBZAYQFGNBJDEKWFMOFPTLTKVVRDAYKCYVDQWJQJCVTFBGZKWKKNEPXWMRNMQINVZMDAXWJHRUTVOKUSIBQXIAWEIEHZESXFOMZAJQAZOHCIFCWRTTQUUUGHNCPLOBZLQWERJYBEHUGCCKPXBAUYUUSCQDJSFXF");
    msg.lat = 0.985613969401;
    msg.lon = 0.894565772533;
    msg.z_units = 9U;
    msg.z = 0.849247572984;
    msg.accuracy = 0.107001480724;

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
    msg.setTimeStamp(0.740592576032);
    msg.setSource(48862U);
    msg.setSourceEntity(62U);
    msg.setDestination(57785U);
    msg.setDestinationEntity(212U);
    msg.target.assign("OCMGLSJRQVPXBDLEIIVEXGXCLTEAALYQNBLAVJCOAYZUANBMIKCBREQPWSWZSXYKOSTYYRJLNNQBROUMDKLSFUGATPDLGVVWTUQKEZJIZHSWFVKQXFHEXCTPDRGBURSYATMODUROOMULGFGNWQKVDMHZKEIORZNOHDAHBYYPHUJFWBIRTTHGYPAQPMHDYFPIXCHEFISUVHEUGWNJSNZN");
    msg.lat = 0.189406663599;
    msg.lon = 0.102969085733;
    msg.z_units = 195U;
    msg.z = 0.369127895904;
    msg.accuracy = 0.77521062126;

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
    msg.setTimeStamp(0.504946998759);
    msg.setSource(2209U);
    msg.setSourceEntity(195U);
    msg.setDestination(14890U);
    msg.setDestinationEntity(45U);
    msg.target.assign("RGXTPOHAZKTGARVIUXTOEYKXCNERXYWOFVKTHTXPUCCUHLMSOLXSIOMZBYZFUKBWHTNJTURJDRVEFLCOFKJJDQRSCBBJLIOCKMWMXAZLGZQQAIJTNCSYGFVCWJCNQMBNTLLZYHPLDIWMANIEOEOUGKFZRVIUGGDKRBJYAESRMFVEODYI");
    msg.lat = 0.913828011396;
    msg.lon = 0.651586730345;
    msg.z_units = 122U;
    msg.z = 0.0661814347612;
    msg.accuracy = 0.84659358869;

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

  return test.getReturnValue();
}
