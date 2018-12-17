//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: cdc4c6dfe2baed8395138f0b1b8e1910                            *
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
    msg.setTimeStamp(0.613979821194);
    msg.setSource(18273U);
    msg.setSourceEntity(101U);
    msg.setDestination(36306U);
    msg.setDestinationEntity(217U);
    msg.state = 47U;
    msg.flags = 159U;
    msg.description.assign("HMZTSIWIVPGHLAEPMTXZELUPSXMVHOWGBFUYLTPNOSXXYZAFDLIFUOBIRXUZLDQVEEAHFKOT");

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
    msg.setTimeStamp(0.673373316241);
    msg.setSource(238U);
    msg.setSourceEntity(133U);
    msg.setDestination(58288U);
    msg.setDestinationEntity(64U);
    msg.state = 168U;
    msg.flags = 67U;
    msg.description.assign("YNHXNHNLVWGEZKCZXTZNVUVCSQWCIQHMJWAJMGOURWPODVCKYZIYXOYQIEDCPWCRTHDZFGLSFXVHYAESDUIPCHPJTKBAXN");

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
    msg.setTimeStamp(0.706259095019);
    msg.setSource(56898U);
    msg.setSourceEntity(111U);
    msg.setDestination(18121U);
    msg.setDestinationEntity(14U);
    msg.state = 210U;
    msg.flags = 21U;
    msg.description.assign("XOXFYVJZUOPJBFGHWYKDJHWTOZXUTAWVZEVEMTNAKLVHJEQLUCFLJQIYBKCKSGUZGUFEIUUVJDGEOHPRKCMCAMMBSMXZOLPNGBZIMJNESHBJLDOYRGAZHDMKRHHVVEQFATWWPMIYZKINPNBVNDYNJRDQGHQDYEOBXSOAVQSXWSBNKIGORUWTXXLDVGTSPQIYWKEUQUHLDWRWQIFIMCTSZCNMGFCLLSSRCTPNRPKBTZAAXFLC");

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
    msg.setTimeStamp(0.537243717164);
    msg.setSource(51859U);
    msg.setSourceEntity(216U);
    msg.setDestination(14059U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.494782527979);
    msg.setSource(10130U);
    msg.setSourceEntity(58U);
    msg.setDestination(5786U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.483501939313);
    msg.setSource(6761U);
    msg.setSourceEntity(97U);
    msg.setDestination(41538U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.652909434755);
    msg.setSource(45782U);
    msg.setSourceEntity(8U);
    msg.setDestination(61053U);
    msg.setDestinationEntity(104U);
    msg.id = 171U;
    msg.label.assign("LGCQEIPAKEXIZGAGEZLNUPWPXWLYJBOJSIUUNJSEDZHFMFMJAONOVKEEADIYZBQFBJGTKHRGUARBKKQPHHDBCUHRLRXHKJCWVPGPXSTJVCSSQLYVTYNOIRYUWATXWVANJFFOXIAFMEULEKRDHRCQZSCPTXICUWBWFWIYBNWCYDGDDMFNSAUGKZQRTSLYNMPXQNVGSXVVIIZHRTYABGMOYPDNHQKWMELQZVXBCDLOORTJCSZMQDMTHMVLOOJB");
    msg.component.assign("YJQAZLVQAYRPBKYRBLDHMJSFNWAMURWECUYZKKGWXQSLNBWTLCGSMLGRWSHSIZDONAFSADWRGHCUPIINDZYZQPCLIQFIKSFAZUOLETNJHUVOLHWJOEQDRJXPYBBPHTUTQFSOKKSIEMMNATQTMFCHMMRBKTOOFLOTXQ");
    msg.act_time = 28864U;
    msg.deact_time = 12052U;

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
    msg.setTimeStamp(0.958048671221);
    msg.setSource(44058U);
    msg.setSourceEntity(13U);
    msg.setDestination(33213U);
    msg.setDestinationEntity(222U);
    msg.id = 202U;
    msg.label.assign("ZHEHRDIFVEMQYYTHFBJZAZFGWLIBOVSLTIJCUHRLBC");
    msg.component.assign("TMDHRAXZKXELWBZWATARHIQCHEOJVYEXPOLWLUVIYIBYNLGPHPTECHSRMIKJMQMNCFGVUTRISVIPZBNINWFUEEUGUMYFFIMKBUBHYTEXWVJJXOTKDLSQDNCJTJFLEKQQRMJKCRCXSADJAPSZVDDTZBPOVGESZSXOHZULOAYQWCKHGGLGTONAXFOJURSCPMYCUFPAOOGXQQRZK");
    msg.act_time = 61251U;
    msg.deact_time = 62840U;

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
    msg.setTimeStamp(0.270687063882);
    msg.setSource(37135U);
    msg.setSourceEntity(110U);
    msg.setDestination(24969U);
    msg.setDestinationEntity(32U);
    msg.id = 80U;
    msg.label.assign("OWTDAJFXHYLXGQHIROJXNUWFCKYWCJNOGLZVNBNGPKERGRMSVJISEBXOZRQVLKKOTTQXXRNIPEJLUDKNKHTWZGVVEFMIALLWWZTUHMQKZSTZEQWINPSYCVCIEOSLRPYEWGAPFHIQWBYJQDUXDDNMASMVJDKTKC");
    msg.component.assign("IHPBGZTPWNTHZIDFVPFWUASJFSZYFOJENZMZBRFNXCLBBQCPMGMJCABXDRXDDQSOKTXFHTCOJYNCKBTDKVQQMQLGQZIKZOTVWSCLRRGIRWVOWPKYJZUFCBIWMCSDOVUXJRRGAHAWNLESPYIRQWSUOEEGANHJVRHAMHIFJYAYLBIPYAUZBAVSCMKOLFEEWPUUXXENE");
    msg.act_time = 9496U;
    msg.deact_time = 50401U;

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
    msg.setTimeStamp(0.432019768616);
    msg.setSource(11389U);
    msg.setSourceEntity(152U);
    msg.setDestination(22511U);
    msg.setDestinationEntity(47U);
    msg.id = 171U;

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
    msg.setTimeStamp(0.873157850734);
    msg.setSource(35593U);
    msg.setSourceEntity(179U);
    msg.setDestination(56056U);
    msg.setDestinationEntity(104U);
    msg.id = 81U;

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
    msg.setTimeStamp(0.0538227737103);
    msg.setSource(4784U);
    msg.setSourceEntity(163U);
    msg.setDestination(26409U);
    msg.setDestinationEntity(251U);
    msg.id = 238U;

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
    msg.setTimeStamp(0.599009326788);
    msg.setSource(30654U);
    msg.setSourceEntity(182U);
    msg.setDestination(48319U);
    msg.setDestinationEntity(214U);
    msg.op = 117U;
    msg.list.assign("BAVIMSMFYTUGOUPDOKLBRWBPBOEQSEHPQAFZAJZOGRAVJPAMIIBVLVNNGBJZTFIITMIAPOGBNWWUAOXCJSTDKNJNCYUN");

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
    msg.setTimeStamp(0.432201551193);
    msg.setSource(25137U);
    msg.setSourceEntity(27U);
    msg.setDestination(12383U);
    msg.setDestinationEntity(36U);
    msg.op = 112U;
    msg.list.assign("KHMJRCLLYNHUTFAJGKNOKEVANEZCHXQLWLOBHGAPZREVECAWVRPGUMJVMBHDJJINQZAGCQTOXXPCOGQQWPEOCIDOTDNZSYKMIABQQEAQJSESUKKSYBDYCLPO");

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
    msg.setTimeStamp(0.11835565576);
    msg.setSource(15701U);
    msg.setSourceEntity(234U);
    msg.setDestination(20823U);
    msg.setDestinationEntity(97U);
    msg.op = 141U;
    msg.list.assign("TQIRCNBSNBJCRQEESYLEOGHPBZKIRENUFGYTGTPKYENUXPMQGWZYNVCDWNCZZFOUTXASWMYFDIRBCWKPQMXVOJFUUBRRVJBQOMDUIWYOVLFJVKYTBFTDHISOGMISWHKGMNRE");

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
    msg.setTimeStamp(0.819674452761);
    msg.setSource(64414U);
    msg.setSourceEntity(240U);
    msg.setDestination(3017U);
    msg.setDestinationEntity(180U);
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
    msg.setTimeStamp(0.671822753367);
    msg.setSource(32139U);
    msg.setSourceEntity(50U);
    msg.setDestination(38296U);
    msg.setDestinationEntity(158U);
    msg.value = 40U;

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
    msg.setTimeStamp(0.553204475347);
    msg.setSource(8403U);
    msg.setSourceEntity(163U);
    msg.setDestination(3588U);
    msg.setDestinationEntity(240U);
    msg.value = 245U;

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
    msg.setTimeStamp(0.418948875037);
    msg.setSource(52244U);
    msg.setSourceEntity(106U);
    msg.setDestination(46137U);
    msg.setDestinationEntity(127U);
    msg.consumer.assign("LYRARLPLZLWFYFDEMFGZHEMIVRLKPHGCOZZQPRTMPYPDUXSPCQMPCEQSMIIOWNBJRXDCQVCEAGFVRETLQSMEDVHKORMINNWVIBRGXQSCSWMNKPZWKA");
    msg.message_id = 31851U;

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
    msg.setTimeStamp(0.873125064811);
    msg.setSource(43048U);
    msg.setSourceEntity(254U);
    msg.setDestination(19744U);
    msg.setDestinationEntity(28U);
    msg.consumer.assign("CMJCPTKEFOHZJDIWPOGRZMHUTGUUPQJCX");
    msg.message_id = 52906U;

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
    msg.setTimeStamp(0.969972064);
    msg.setSource(27320U);
    msg.setSourceEntity(3U);
    msg.setDestination(62841U);
    msg.setDestinationEntity(157U);
    msg.consumer.assign("DMFNPTOGLMMIJMLXQCANNJIKQWYVYKRNWVVBNIQMVQKDZKEULRXTKHJPWYIBCDZQZDZTEHLJUNWPWYDAHRQNHAKFSCANAEGG");
    msg.message_id = 19370U;

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
    msg.setTimeStamp(0.420807075133);
    msg.setSource(1637U);
    msg.setSourceEntity(144U);
    msg.setDestination(62321U);
    msg.setDestinationEntity(142U);
    msg.type = 206U;

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
    msg.setTimeStamp(0.768641668157);
    msg.setSource(53603U);
    msg.setSourceEntity(158U);
    msg.setDestination(22695U);
    msg.setDestinationEntity(180U);
    msg.type = 220U;

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
    msg.setTimeStamp(0.533562386692);
    msg.setSource(30816U);
    msg.setSourceEntity(0U);
    msg.setDestination(38509U);
    msg.setDestinationEntity(117U);
    msg.type = 209U;

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
    msg.setTimeStamp(0.44349382276);
    msg.setSource(46019U);
    msg.setSourceEntity(124U);
    msg.setDestination(14916U);
    msg.setDestinationEntity(71U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.511813201809);
    msg.setSource(45753U);
    msg.setSourceEntity(48U);
    msg.setDestination(13442U);
    msg.setDestinationEntity(40U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.257202393406);
    msg.setSource(30661U);
    msg.setSourceEntity(115U);
    msg.setDestination(62181U);
    msg.setDestinationEntity(116U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.432369886346);
    msg.setSource(2876U);
    msg.setSourceEntity(132U);
    msg.setDestination(11722U);
    msg.setDestinationEntity(38U);
    msg.total_steps = 156U;
    msg.step_number = 48U;
    msg.step.assign("VSVQLKQNDIFBEXZLDLHRYGLXVHPSGJXPVSNGXWOOFBGHJNZNBYSMZDEMENSJETQWLPNIAIXO");
    msg.flags = 174U;

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
    msg.setTimeStamp(0.693146468185);
    msg.setSource(36299U);
    msg.setSourceEntity(141U);
    msg.setDestination(21341U);
    msg.setDestinationEntity(118U);
    msg.total_steps = 207U;
    msg.step_number = 156U;
    msg.step.assign("FBNZJTVZBJILUMPSTLJAZCEDLZXVMDJXJLSOOKKFOLCZXIJTFRDWVNMAADZKORFVTEJICBHREDPPNHBXCEWCQJNGCLUKMAYUJIRUZRMPZDQQ");
    msg.flags = 73U;

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
    msg.setTimeStamp(0.387865685374);
    msg.setSource(17770U);
    msg.setSourceEntity(239U);
    msg.setDestination(51261U);
    msg.setDestinationEntity(210U);
    msg.total_steps = 173U;
    msg.step_number = 3U;
    msg.step.assign("VHDLFWAHUTNHMVXZDUOKUTPAHSMNTQSIBQOJYWDEYICWEYQMJTDVEBCGJRQWQAZAZDJKPZKBEOMKROGVRCBBKTRGLCKXLVDKIGSQGRWBHGSJLNEJNGZNZURCGGPZHCSHIGWIKLBOOJUUJYSBFZYRMXHNAWJWAVFSZTYOQLFIYFHFUYAXCIFEUTVVOOTNJAYAEQPM");
    msg.flags = 133U;

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
    msg.setTimeStamp(0.115253987404);
    msg.setSource(3515U);
    msg.setSourceEntity(116U);
    msg.setDestination(44421U);
    msg.setDestinationEntity(52U);
    msg.state = 161U;
    msg.error.assign("AFBDMREABHSEJTVPFQWNRHKZIJPWVAQJQHNEGRUWBWELNALWLYBJUJZKUYZSRDZTDQPN");

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
    msg.setTimeStamp(0.0242637844334);
    msg.setSource(56694U);
    msg.setSourceEntity(59U);
    msg.setDestination(23246U);
    msg.setDestinationEntity(36U);
    msg.state = 64U;
    msg.error.assign("EGRDQLQIKINOPAVEBMNMVCRHXRTKAFBPILLSZNDLZKPAZXDYYXFAUBFZMNLAZSJDOYMZQHUSIHWBRVUNOOUYGPWKBBRIMEJDMYACKKFRFFYIXICCTYGZOXMMHVOKDXZPTFNFDTUQQSSPWDZSQYSGRJPQJHJIUIFXSHOLV");

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
    msg.setTimeStamp(0.846332795343);
    msg.setSource(9839U);
    msg.setSourceEntity(23U);
    msg.setDestination(12122U);
    msg.setDestinationEntity(220U);
    msg.state = 52U;
    msg.error.assign("CFEGXWKRSOKHDQCPMIYSCDCLQFKMBYQGAWGLHBKVNYWJJNULWYDVMOLVKDTBTSHVLULIOXRWJCVBYJIDOGRPQBLKRFYTEYTNWDRNEBBUXMJCTPEAXPYAVWIHGNQPNMCBJGUUQZMGZAOSGZSLEVNPJBXNRQTEWEZSVRPJHVKAIKMSDFQZZPZRXUHWFBMSOF");

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
    msg.setTimeStamp(0.851139236187);
    msg.setSource(20798U);
    msg.setSourceEntity(90U);
    msg.setDestination(57160U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.0933854073973);
    msg.setSource(54086U);
    msg.setSourceEntity(158U);
    msg.setDestination(30633U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.896824124449);
    msg.setSource(22187U);
    msg.setSourceEntity(140U);
    msg.setDestination(31868U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.481327179268);
    msg.setSource(43450U);
    msg.setSourceEntity(20U);
    msg.setDestination(33104U);
    msg.setDestinationEntity(225U);
    msg.op = 48U;
    msg.speed_min = 0.113674936629;
    msg.speed_max = 0.50462075953;
    msg.long_accel = 0.410952881027;
    msg.alt_max_msl = 0.0292998191006;
    msg.dive_fraction_max = 0.770043904273;
    msg.climb_fraction_max = 0.350112516891;
    msg.bank_max = 0.243747896585;
    msg.p_max = 0.0163028138317;
    msg.pitch_min = 0.250185309976;
    msg.pitch_max = 0.559393464134;
    msg.q_max = 0.558628679773;
    msg.g_min = 0.0452344967911;
    msg.g_max = 0.299783030374;
    msg.g_lat_max = 0.0666927610476;
    msg.rpm_min = 0.608162712534;
    msg.rpm_max = 0.774065752515;
    msg.rpm_rate_max = 0.275993210659;

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
    msg.setTimeStamp(0.704527037905);
    msg.setSource(42904U);
    msg.setSourceEntity(169U);
    msg.setDestination(24551U);
    msg.setDestinationEntity(166U);
    msg.op = 168U;
    msg.speed_min = 0.986386247971;
    msg.speed_max = 0.820869881928;
    msg.long_accel = 0.299988492299;
    msg.alt_max_msl = 0.718512198681;
    msg.dive_fraction_max = 0.486968120282;
    msg.climb_fraction_max = 0.0200051848056;
    msg.bank_max = 0.315787313947;
    msg.p_max = 0.722974642197;
    msg.pitch_min = 0.369804829179;
    msg.pitch_max = 0.293302170117;
    msg.q_max = 0.287533981019;
    msg.g_min = 0.991243287653;
    msg.g_max = 0.436585567648;
    msg.g_lat_max = 0.328516455632;
    msg.rpm_min = 0.838892261362;
    msg.rpm_max = 0.0104941697062;
    msg.rpm_rate_max = 0.199286641371;

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
    msg.setTimeStamp(0.563006512162);
    msg.setSource(8819U);
    msg.setSourceEntity(209U);
    msg.setDestination(18595U);
    msg.setDestinationEntity(224U);
    msg.op = 55U;
    msg.speed_min = 0.330463979891;
    msg.speed_max = 0.916175167739;
    msg.long_accel = 0.358386949972;
    msg.alt_max_msl = 0.0645000425663;
    msg.dive_fraction_max = 0.429419911349;
    msg.climb_fraction_max = 0.84693593282;
    msg.bank_max = 0.93902292301;
    msg.p_max = 0.86180107119;
    msg.pitch_min = 0.213703752334;
    msg.pitch_max = 0.465401190023;
    msg.q_max = 0.37539924432;
    msg.g_min = 0.449426361552;
    msg.g_max = 0.31615794972;
    msg.g_lat_max = 0.620940900398;
    msg.rpm_min = 0.166702349634;
    msg.rpm_max = 0.432080857122;
    msg.rpm_rate_max = 0.875966496811;

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
    msg.setTimeStamp(0.578347531375);
    msg.setSource(39234U);
    msg.setSourceEntity(128U);
    msg.setDestination(54630U);
    msg.setDestinationEntity(86U);
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.684771826806;
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
    msg.setTimeStamp(0.62774500463);
    msg.setSource(58242U);
    msg.setSourceEntity(144U);
    msg.setDestination(14147U);
    msg.setDestinationEntity(101U);
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("RFSKYVMCNBLGSTBSIYEYIPSVXSGPEGOYJWLZQYOEEAI");
    tmp_msg_0.htime = 0.608992961653;
    tmp_msg_0.lat = 0.345168802893;
    tmp_msg_0.lon = 0.837373546493;
    const char tmp_tmp_msg_0_0[] = {-12, 6, 53, 83, 23, -70, -4, 112, 36, 118, -28, -20, -125, -38, 54, -119, 124, 20, -31, 116, 97, -92, 99, 52, -79, -83, 69, -64, -106, -126, -42, 63, -32, 102, -16};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.0069781648046);
    msg.setSource(1058U);
    msg.setSourceEntity(22U);
    msg.setDestination(5874U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.543746882311);
    msg.setSource(34074U);
    msg.setSourceEntity(198U);
    msg.setDestination(15298U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.889591433719;
    msg.lon = 0.201153043366;
    msg.height = 0.0726498842953;
    msg.x = 0.563785507179;
    msg.y = 0.568702799094;
    msg.z = 0.239375435135;
    msg.phi = 0.891095250877;
    msg.theta = 0.841560001073;
    msg.psi = 0.924029110519;
    msg.u = 0.0463433965872;
    msg.v = 0.344571032253;
    msg.w = 0.784807237837;
    msg.p = 0.0761424508567;
    msg.q = 0.0336229363544;
    msg.r = 0.77261980795;
    msg.svx = 0.782028311607;
    msg.svy = 0.0924362020295;
    msg.svz = 0.108912790005;

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
    msg.setTimeStamp(0.017788728769);
    msg.setSource(30394U);
    msg.setSourceEntity(20U);
    msg.setDestination(32316U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.125052765395;
    msg.lon = 0.726092264202;
    msg.height = 0.00584857958645;
    msg.x = 0.68025502848;
    msg.y = 0.545225550192;
    msg.z = 0.563096025935;
    msg.phi = 0.388253991096;
    msg.theta = 0.0426400267676;
    msg.psi = 0.0462725944109;
    msg.u = 0.776980171448;
    msg.v = 0.0878376457055;
    msg.w = 0.755852841035;
    msg.p = 0.41368624333;
    msg.q = 0.440314385217;
    msg.r = 0.946595086961;
    msg.svx = 0.803245095456;
    msg.svy = 0.482388779873;
    msg.svz = 0.297507654944;

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
    msg.setTimeStamp(0.438988149352);
    msg.setSource(1069U);
    msg.setSourceEntity(185U);
    msg.setDestination(26047U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.212980115611;
    msg.lon = 0.988061807319;
    msg.height = 0.637191637689;
    msg.x = 0.658827886365;
    msg.y = 0.536836126772;
    msg.z = 0.819826896432;
    msg.phi = 0.302417710051;
    msg.theta = 0.613483373073;
    msg.psi = 0.271906954473;
    msg.u = 0.366726100439;
    msg.v = 0.540939877954;
    msg.w = 0.507178499456;
    msg.p = 0.336481475715;
    msg.q = 0.442535815377;
    msg.r = 0.760247928326;
    msg.svx = 0.949469373448;
    msg.svy = 0.916948807157;
    msg.svz = 0.483116902699;

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
    msg.setTimeStamp(0.944081465256);
    msg.setSource(24901U);
    msg.setSourceEntity(157U);
    msg.setDestination(49593U);
    msg.setDestinationEntity(143U);
    msg.op = 92U;
    msg.entities.assign("WZFSBSIQYRYDQMPZTDBTZDSITJURENURJBVBSBOM");

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
    msg.setTimeStamp(0.449694310919);
    msg.setSource(19053U);
    msg.setSourceEntity(135U);
    msg.setDestination(53003U);
    msg.setDestinationEntity(241U);
    msg.op = 229U;
    msg.entities.assign("BKUQUAFFJSELOVVPGIZFIJLPHHCYXGJXCKRAYNHXYZKVEANCFOVQTEPWXPHUPJNJOFINKDNBYXLCFBWWTYTMCKDVDTSNMIUODZSTMFMWLARTJELEJDNSAJCZDCERQUQZRDWGAWGGMDMIQXSRBOXCUOUTOPRKHOIVBMORTFPXFWLIMAVPYNQJYUCWDKHSHWHKS");

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
    msg.setTimeStamp(0.926820600786);
    msg.setSource(31451U);
    msg.setSourceEntity(126U);
    msg.setDestination(49490U);
    msg.setDestinationEntity(37U);
    msg.op = 167U;
    msg.entities.assign("VSYNNSMPPMACNVQUB");

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
    msg.setTimeStamp(0.804003185285);
    msg.setSource(43281U);
    msg.setSourceEntity(241U);
    msg.setDestination(751U);
    msg.setDestinationEntity(164U);
    msg.type = 114U;
    msg.speed = 13400U;
    const char tmp_msg_0[] = {-64, 74, 29, 17, 79, -45, 95, -28, 13, 5, -74, 106, -128, -109, -69, -68, -82, -62, -55, 2, 89, -28, 13, 3, -23, -95, 9, 118, -45, -18, -105, 113, 123, 69, -75, 105, 113, 25, -112, -98, -56, -60, 25, 102, -51, 52, -72, -74, 117, 63, -36, 77, -124, 111, 124, 3, 25, 104, 116, 54, -70, -60, -74, -47, -47, -25, 1, -48, 91, -43, -37, 61, -126, 100, 67, 15, 73, -25, -90, -71, -79, 26, -80, -33, -96, -21, -51, 7, 76, 110, 88, -38, -28, 83, 59, 21, -60, -96, -92, -12, -36, -26, -99, 49, 100, -48, 125, -26, -80, 6, 1, 76, -23, 7, 18, -70, 120, -109, 90, -48, 61, 8, -101, -13, 9, -61, -58, -26, -27, 116, -103, 77, 22, -15, 96, -9, 42, 99, 99, 64, 23, 26, 84, -78, -3, 58, -64, 75, -99, 68, 56, -81, 125, 35, -27, 12, -84, 124, 22, 66, 23, 7, -108, -6, 102, -96, -108, 30, 0, 48, 103, 67, 120, -72, 29, 13, -34, -118, 39, 122, 105, 92, -97, 21, -44, 92, -105, 91, -44, 38, -78, -13, -128, -104, -8, 65, 53, -88, 110, -17, 124, -91, -107, 2, -4, -4, 111, -27, 85, -99, 1, 54, 22, 30, -23, 38, -66, -42, -69, -102, 94, 14, -108, -9, -39, -109, -54, -68, 94, -75, -97, -73, 48, 126, 85, -36, -27, -11, -104, -5, -126, 108, 64, -31, -11, -15, -63, 102, 56, 83};
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
    msg.setTimeStamp(0.754779757088);
    msg.setSource(61772U);
    msg.setSourceEntity(187U);
    msg.setDestination(57728U);
    msg.setDestinationEntity(208U);
    msg.type = 68U;
    msg.speed = 23872U;
    const char tmp_msg_0[] = {-47, 97, 42, 52, -78, -31, 123, 118, 120, 82, -11, -2, -24, 9, 125, -41, 125, 60, -111, 59, -114, -56, 15, -100, 10, -91, -115, 107, 82, 22, -7, 20, -94, 102, -35, -96, -72, 88, 46, -92, -18, -63, 1, -29, 12, 122, 124};
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
    msg.setTimeStamp(0.380529115556);
    msg.setSource(26198U);
    msg.setSourceEntity(16U);
    msg.setDestination(46571U);
    msg.setDestinationEntity(197U);
    msg.type = 104U;
    msg.speed = 61642U;
    const char tmp_msg_0[] = {-126, -109, 36, 73, 89, -16, 17, 40, -122, -93, 89, -1, 79, 33, 109, -125, 124, 13, 64, -51, -18, 7, 54, 122, -92, 118, 55, 66, -42, 94, -52, -48, -60, -78, 113, -96, 126, 84, -17, 25, 105, 54, -122, 64, -37, -121, 123, -58, -128, 57, -97, 41, 28, -82, -121, 12, 105, -119, -71, -24, -26, -17, -38, 74, -61, -14, -81, -52, 51, -64, -21, -114, -107, -108, 56, 37, 80, -78, -100, -90, -101, 47, -1, -97, 123, 125, -75, 19, 65, 86, -25, 4, 5, 112, -26, -24, 3, -27, -16, -127, 26, 56, -38, 94, 84, -106, 47, 97, 86, -107, -94, -60, -65, -34, 118, 31, 22, -48, -109, 105, -68, -114, -29, 41, -112, -125, 3, 19, 39, -109, -80, -66, -98, -127, -23, -31, 54, -79, 74, -104, 55, -109, -25, 3, 83, 92, 29, -47, -53, -95, -128, 120, -47, 1, 7, 52, 27, 73, -49, 57, -51, -77, 54, -54, 66, 114, 52, -40, -117, -31, 118, 32, -52, 122, -102, -45, -5, -91, -44, -17, -47, -106, -91, 109, -7, 38, -55, 93, -93, 10, -52, -104, -103, 123, -52, 21, 124, 35, 97, 22, 38, 94, 13, -93, 27, 78, -32, 124, 3, -73, -103, 126, 86, -77, 52, 71, -84, -68, 81, 18, -101, 105, 18, 25, 110, -54, -126, 75, -40, -65, 33, -109, -69, 64, -41, -41, 0, 36, -99, -103, 119, 115, 76, 94, 65, 60, 71, -75, -26};
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
    msg.setTimeStamp(0.271149205074);
    msg.setSource(51719U);
    msg.setSourceEntity(28U);
    msg.setDestination(30619U);
    msg.setDestinationEntity(186U);
    msg.op = 229U;
    msg.tas2acc_pgain = 0.759737765331;
    msg.bank2p_pgain = 0.801311979844;

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
    msg.setTimeStamp(0.89383316393);
    msg.setSource(5961U);
    msg.setSourceEntity(158U);
    msg.setDestination(26654U);
    msg.setDestinationEntity(76U);
    msg.op = 231U;
    msg.tas2acc_pgain = 0.336221101742;
    msg.bank2p_pgain = 0.159760348787;

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
    msg.setTimeStamp(0.0882031177584);
    msg.setSource(39448U);
    msg.setSourceEntity(134U);
    msg.setDestination(22834U);
    msg.setDestinationEntity(148U);
    msg.op = 12U;
    msg.tas2acc_pgain = 0.661704920651;
    msg.bank2p_pgain = 0.278863480517;

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
    msg.setTimeStamp(0.932632443735);
    msg.setSource(36792U);
    msg.setSourceEntity(18U);
    msg.setDestination(64359U);
    msg.setDestinationEntity(171U);
    msg.available = 942299876U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.50972836556);
    msg.setSource(4592U);
    msg.setSourceEntity(16U);
    msg.setDestination(50466U);
    msg.setDestinationEntity(167U);
    msg.available = 3885428682U;
    msg.value = 3U;

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
    msg.setTimeStamp(0.0793488824789);
    msg.setSource(11308U);
    msg.setSourceEntity(222U);
    msg.setDestination(60193U);
    msg.setDestinationEntity(172U);
    msg.available = 496398488U;
    msg.value = 144U;

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
    msg.setTimeStamp(0.71994496748);
    msg.setSource(21640U);
    msg.setSourceEntity(210U);
    msg.setDestination(21114U);
    msg.setDestinationEntity(228U);
    msg.op = 48U;
    msg.snapshot.assign("PEHOAQVKAJADHLDACPYUQYORBWDGHTAPXPCXFNJVBYGYKTBGANFITUXCOCUEENICRKMSQASCWSZKDLOKXUYM");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 109U;
    tmp_msg_0.mask = 3146000721U;
    tmp_msg_0.scope_ref = 2569332009U;
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
    msg.setTimeStamp(0.63429386217);
    msg.setSource(4148U);
    msg.setSourceEntity(141U);
    msg.setDestination(53904U);
    msg.setDestinationEntity(45U);
    msg.op = 118U;
    msg.snapshot.assign("THPBSYKHQXZODDETAQCYSAVTDVJSVOPRUGYYAQBGNZRGMZTKPWIYHZVPEEEJIXLQCDLHTRMCOMFIKYWBKSXROJNSUNRYMPFJTQEZXGQSDUXVMQXDTUCKPXJOCCAVIRLHYLKXHGSLIHQCJNKIHWOSJNBCHPBADLWLNZDKZPYEUQIVEGDFJOC");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.0776840835258;
    tmp_msg_0.x = 0.344756744;
    tmp_msg_0.y = 0.571644233231;
    tmp_msg_0.z = 0.137218393402;
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
    msg.setTimeStamp(0.957329951437);
    msg.setSource(26537U);
    msg.setSourceEntity(209U);
    msg.setDestination(47845U);
    msg.setDestinationEntity(154U);
    msg.op = 107U;
    msg.snapshot.assign("AJZOIPENHPTIMORUQZVKBBJDCHIIRTMWXEDHBXUQXRYCSVPGFBFKQVLSWJNQZTOGCXLUQEDRGZEOZHFYIJOKTWNXCGWYPDAVOEJZJMTJOIYIPLPUPBHHYDVCUXQYNSZBRYGDDTFYABZKWJXGAKPQCFLGNESKIACCONIYSWMGWMNFRLAKAVCMEQBTEBJTP");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 639265644U;
    tmp_tmp_msg_0_0.start_lat = 0.545619915123;
    tmp_tmp_msg_0_0.start_lon = 0.883788389555;
    tmp_tmp_msg_0_0.start_z = 0.0264396541599;
    tmp_tmp_msg_0_0.start_z_units = 172U;
    tmp_tmp_msg_0_0.end_lat = 0.134688755197;
    tmp_tmp_msg_0_0.end_lon = 0.847820100145;
    tmp_tmp_msg_0_0.end_z = 0.795768829861;
    tmp_tmp_msg_0_0.end_z_units = 147U;
    tmp_tmp_msg_0_0.speed = 0.919900837227;
    tmp_tmp_msg_0_0.speed_units = 84U;
    tmp_tmp_msg_0_0.lradius = 0.407485928581;
    tmp_tmp_msg_0_0.flags = 2U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 36896U;
    tmp_msg_0.custom.assign("PTZODLEGAIAWFBSMJJJLNOQJYBNUUCHLAXGCUGEVQUCZV");
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
    msg.setTimeStamp(0.975806435956);
    msg.setSource(14831U);
    msg.setSourceEntity(19U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(180U);
    msg.op = 222U;
    msg.name.assign("ASTLEKZGFYQTNWRZSSKRNZPVDQDHAYHCZEGFKESUDZOKEBLPJONRMZWLATPVBXCUWOSDYVOXHLLCXXDKPQHRAIDWWMVDMOIHMGMRTJHFANYYPGPAQUBIUBEOTXEMIZSNJCUWJRXEJNBFLGPXTYSMQTVGYZKLEIPDGBKCBEMRIVGDOUEKFIUCJF");

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
    msg.setTimeStamp(0.202642542908);
    msg.setSource(50323U);
    msg.setSourceEntity(114U);
    msg.setDestination(42729U);
    msg.setDestinationEntity(18U);
    msg.op = 207U;
    msg.name.assign("SJNNIOOCQEBQTKWUISXRMOAGBVDRXDEBYKDITZJAMSFRVSPFAIDFCRYDYHJFUPCVKLSPCSQOMTAGGMAUMHECXMGHBEZWLKIQMARYTTGVGGCQNREHQSGHYZZNVPWXCTMFZNUXJKNLK");

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
    msg.setTimeStamp(0.422440203268);
    msg.setSource(51403U);
    msg.setSourceEntity(23U);
    msg.setDestination(17871U);
    msg.setDestinationEntity(151U);
    msg.op = 98U;
    msg.name.assign("CKRSGVVNOHETDPSLAQLTKRQDRRZEPIMCMDCBHUODWPYCKHMHPFGGQESDDGWWMHRYSYNCPNKIHBKAJSVOVEZFYTCHYXOOLZZXBFUSFLXMVLZJORJLNPTETQBYXWQNKQEXAMXTAWPLTSQISCWUWZUAMBVOROATRIJOFNJEIVJCXKFJXGYSSTLIBGJCQABLMUGNJGKRHKIYLZIVDBXFCHVZUUHEEFRIVDMBAFXNUUWOZN");

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
    msg.setTimeStamp(0.559991328432);
    msg.setSource(35700U);
    msg.setSourceEntity(161U);
    msg.setDestination(54900U);
    msg.setDestinationEntity(223U);
    msg.type = 170U;
    msg.htime = 0.059365791658;
    msg.context.assign("ZZDPAADGUSQPTOVJJGZYQTZMPZFMJTNWOTZKUMHGPISLPPVLEYNTPKRCQARWGBWYCEDLHFWHXRQDVJLFFGCRROXMUSCT");
    msg.text.assign("OSUAUZCSGNLLOYUZDSZHHHYYYMNKQTD");

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
    msg.setTimeStamp(0.109050544531);
    msg.setSource(10615U);
    msg.setSourceEntity(11U);
    msg.setDestination(22433U);
    msg.setDestinationEntity(217U);
    msg.type = 48U;
    msg.htime = 0.314253300506;
    msg.context.assign("NHRTXOAITOZTNXUJOIQDGIMRWMHERJQLBWOSMYTTEGYQJAJCBYWNHYPFR");
    msg.text.assign("ZKDJCTKUPXNHCPTEHDZTGDHSYKYFNWHOSMSQYTKVXDJPSAHROIGUIOMBOIWWUSMJNLMLZVAVLEAQCYWJXTZDOWYPCXWZECKEFLWQRRTLDHRAMILECMDUQHCSFDIDUZJMKGQFYMJKJCKGQNVXSXOBLJIBFPGXRUNEZBRGONEMFTVCJUVLEUZIGRSWJ");

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
    msg.setTimeStamp(0.694163103436);
    msg.setSource(34678U);
    msg.setSourceEntity(93U);
    msg.setDestination(32613U);
    msg.setDestinationEntity(64U);
    msg.type = 19U;
    msg.htime = 0.743336230364;
    msg.context.assign("BRKUTDHGBEPVMSQMLBSCNSYAXOVCDNYTEPNXUBKJOJRRRDXWTMSWZWENGLGZWURAWUIYUOEOMCVNGHDMQHIROBLXZPOXNOSCCFIEYZAAIMFLKDYKCGTHISRVISMXQVDJRJBBZWYKYUTJOXEQRVKAKPQZWGQRMIIXFKSDLAQPHWJYFETGEYNUXVUNJGZFBZHBCSHVTWNJQEZKPSCLUTFOIHKPNFYFTVEOAXDGFVQADHCUIPMLHPJPFLAJTQL");
    msg.text.assign("VRTSKJKLZIDHPIKXHOZRCXAMKDJASMEWEYDALBQTURUXIQILPGDVIQPJAPIKWLVTNSVJHZYFTKFSBGBSPONHRDFKYPLKZDRYXZEECWCFIOBUBCGOKSJNQNYJCDMSLXAMCBNUOUBCJJFRAGJHHDTPTFTEENSBHWMGWWPYHITDPZVBQENMYZM");

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
    msg.setTimeStamp(0.939304201696);
    msg.setSource(43923U);
    msg.setSourceEntity(98U);
    msg.setDestination(62933U);
    msg.setDestinationEntity(144U);
    msg.command = 62U;
    msg.htime = 0.905702528225;

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
    msg.setTimeStamp(0.176015587413);
    msg.setSource(7575U);
    msg.setSourceEntity(130U);
    msg.setDestination(56722U);
    msg.setDestinationEntity(201U);
    msg.command = 138U;
    msg.htime = 0.4031268856;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 24U;
    tmp_msg_0.htime = 0.63375364931;
    tmp_msg_0.context.assign("DDFYOTUWVKWCYKDLJFECVRNUS");
    tmp_msg_0.text.assign("SRRMXTCTKOBRMJDZCDXSJPEUTIRUYSFZLROAFDIKJWWCIDFGVOKDBGRLJPANTRYJEDIHEAQUZQPQJTNENJUAEGEGMDHCVMHMOAPFNVVRFFFPGDHXDAPKJLQZMLYIYTCLBXLDGZUTNECYIYYCLJNXC");
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
    msg.setTimeStamp(0.501655153766);
    msg.setSource(5288U);
    msg.setSourceEntity(250U);
    msg.setDestination(26233U);
    msg.setDestinationEntity(101U);
    msg.command = 48U;
    msg.htime = 0.975874636544;

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
    msg.setTimeStamp(0.935957012271);
    msg.setSource(33530U);
    msg.setSourceEntity(20U);
    msg.setDestination(48084U);
    msg.setDestinationEntity(197U);
    msg.op = 43U;
    msg.file.assign("WZJCKCFMNBPOZVPCFJKMSLCWEEHPMMCFCSHTFBKLKKJT");

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
    msg.setTimeStamp(0.990042743447);
    msg.setSource(64902U);
    msg.setSourceEntity(126U);
    msg.setDestination(3796U);
    msg.setDestinationEntity(239U);
    msg.op = 216U;
    msg.file.assign("FDUGYFNHIGOLROMQAHJIHOPSUOLWBHYRHVVBWIB");

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
    msg.setTimeStamp(0.0273824988493);
    msg.setSource(25928U);
    msg.setSourceEntity(208U);
    msg.setDestination(42528U);
    msg.setDestinationEntity(203U);
    msg.op = 21U;
    msg.file.assign("DDORUUQIRXGPRNTMKWSJZQTALMHXCAWPYDHNKYMTFZLGEVYJYXMUQSXJUIJXLKOKSBEQRKAYNUVXJBDLWJSDNYNSAEWGQBPYADZEREFEZULIQZPOTXIXUNRPGKSZCNONJDOYSBCYOIKENMPTESZJWFMPGZIXGAIRDPHVQVHDFVLLJ");

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
    msg.setTimeStamp(0.360359416317);
    msg.setSource(15898U);
    msg.setSourceEntity(78U);
    msg.setDestination(54086U);
    msg.setDestinationEntity(64U);
    msg.op = 175U;
    msg.clock = 0.15308769015;
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
    msg.setTimeStamp(0.475766317601);
    msg.setSource(52769U);
    msg.setSourceEntity(75U);
    msg.setDestination(34816U);
    msg.setDestinationEntity(77U);
    msg.op = 4U;
    msg.clock = 0.598017194661;
    msg.tz = 52;

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
    msg.setTimeStamp(0.933456831264);
    msg.setSource(20051U);
    msg.setSourceEntity(112U);
    msg.setDestination(48298U);
    msg.setDestinationEntity(127U);
    msg.op = 228U;
    msg.clock = 0.0165561293411;
    msg.tz = -102;

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
    msg.setTimeStamp(0.787493465632);
    msg.setSource(20143U);
    msg.setSourceEntity(28U);
    msg.setDestination(51912U);
    msg.setDestinationEntity(65U);
    msg.conductivity = 0.447765962691;
    msg.temperature = 0.505380102357;
    msg.depth = 0.852307211213;

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
    msg.setTimeStamp(0.42926663683);
    msg.setSource(12849U);
    msg.setSourceEntity(173U);
    msg.setDestination(34684U);
    msg.setDestinationEntity(254U);
    msg.conductivity = 0.608161534631;
    msg.temperature = 0.584212697865;
    msg.depth = 0.661885578566;

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
    msg.setTimeStamp(0.182128214504);
    msg.setSource(46145U);
    msg.setSourceEntity(40U);
    msg.setDestination(15108U);
    msg.setDestinationEntity(78U);
    msg.conductivity = 0.374662253764;
    msg.temperature = 0.824486236353;
    msg.depth = 0.124105065328;

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
    msg.setTimeStamp(0.0416293831943);
    msg.setSource(26098U);
    msg.setSourceEntity(106U);
    msg.setDestination(15088U);
    msg.setDestinationEntity(154U);
    msg.altitude = 0.387565931342;
    msg.roll = 48479U;
    msg.pitch = 47971U;
    msg.yaw = 30712U;
    msg.speed = -13709;

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
    msg.setTimeStamp(0.821466178641);
    msg.setSource(44077U);
    msg.setSourceEntity(196U);
    msg.setDestination(34063U);
    msg.setDestinationEntity(50U);
    msg.altitude = 0.793471782196;
    msg.roll = 64251U;
    msg.pitch = 20061U;
    msg.yaw = 32593U;
    msg.speed = 22398;

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
    msg.setTimeStamp(0.283502684753);
    msg.setSource(16787U);
    msg.setSourceEntity(44U);
    msg.setDestination(12854U);
    msg.setDestinationEntity(82U);
    msg.altitude = 0.575227307293;
    msg.roll = 11922U;
    msg.pitch = 27976U;
    msg.yaw = 39103U;
    msg.speed = 24957;

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
    msg.setTimeStamp(0.152361842008);
    msg.setSource(32926U);
    msg.setSourceEntity(97U);
    msg.setDestination(19161U);
    msg.setDestinationEntity(205U);
    msg.altitude = 0.38248583369;
    msg.width = 0.372720801035;
    msg.length = 0.952388176554;
    msg.bearing = 0.278718089923;
    msg.pxl = -18603;
    msg.encoding = 108U;
    const char tmp_msg_0[] = {126, -55, -16, -43, 108, 62, 104, 7, 73, -13, 85, 83, -103, -83, -118, -121, -88, -88, 73, 86, 27, -121, 81, -3, 11, -55, 101, 71, 125};
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
    msg.setTimeStamp(0.601205079843);
    msg.setSource(10475U);
    msg.setSourceEntity(145U);
    msg.setDestination(27432U);
    msg.setDestinationEntity(101U);
    msg.altitude = 0.231699683209;
    msg.width = 0.0329589949517;
    msg.length = 0.24267151141;
    msg.bearing = 0.781226865037;
    msg.pxl = 1954;
    msg.encoding = 15U;
    const char tmp_msg_0[] = {-24, 98, -7, -107, -30, 11, 88, -77, -64, -75, 44, 65, -116, -37, -34, 78, 41, -107, -117, 89, 71, 49, 34, 21, 101, 36, -9, 101, -109, 105, -46, 81, 20, 109, 83, -110, 20, -101, -117, 50, -72, 13, 108, -104, 116, 56, -48, -53, 45, 14, 12, -50, 0, 110, -84, -66, -35, 20, -107, 105, -90, 55, -90, -79, 114, -22, -35, 11, -101, 116, -77, 102, -17, -69, -23, 4, -91, -62, 37, 31, -61, -88, 15, 88, -58, -20, -35, -42, 96, 83, -28, 121, 107, -17, 23, 77, -40, 111, 121, 118, 16, 11, -31, 21, -128, -118, -1, -30, -79, 39, 45, 115, 29, -120, -69, -124, 55, 35, -53, -17, -122, 40, 27, 7, 51, 46, 4, 116, 60, 56, -101, -76, 82, 89, 126, 90, -7, 30, 66, -44, -89, -4, -78, 42, 112, -28, -80, 116, -21, 79, -17, 116, -12, -30, 84, 120, 112, 48, 112, -84, 112, 16, 84, -67, -7, 39, -126, 4, -93, -42, 99, 29, 114, 54, -20, -1, 51, 18, -107, 31, 115, -9, -68, -66, 89, -109, 11, 109, 42, 61, 4, 57, 15, -68, -94, -95, 62, 111, -10, 75, -117, -80, -2, 121, 72, 73, 96, 91, -93, -112, 9, 97, -75, -64, -84, 84, 58, -62, -50, -8, -91, 40, 38, 30, -114, -99, 92, -112, -23, -7, -97, 28, 11, 2, -100, 85, -44, -24, 48, -102, 9, 5, 90, -21, -69, -21, 79, 57, -38, 92};
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
    msg.setTimeStamp(0.866650737986);
    msg.setSource(35836U);
    msg.setSourceEntity(211U);
    msg.setDestination(48359U);
    msg.setDestinationEntity(120U);
    msg.altitude = 0.526981507592;
    msg.width = 0.676971029854;
    msg.length = 0.785843901064;
    msg.bearing = 0.853431571615;
    msg.pxl = -23581;
    msg.encoding = 112U;
    const char tmp_msg_0[] = {-86, -111, -97, -48, -123, -1, 88, -39, 117, 42, -31, 99, 7, -90, -81, 98, 30, -16, 104, 106, 39, 1, 13, 69, -79, -39, 115, 47, -60, 27, -113, -28, 30, 38, 101, 4, -91, -75, 2, 22, 111, -19, -64, -40, 89, -50, 9, -60, 30, -118, -2, 9, -21, -63, 100, 97, -10, -103, -9, 14, 83, 99, 75, 31, -57, 96, -92, 126, 50, -29, 112, -38, 18, -40, -81, 68, 117, 87, -17, 12, -72, 23, -5, 21, 97, 47, 88, -73, -105, -48, 105, 64, 83, 28, 25, -64, -11, 84, 101, -31, 48, -88, 117, 10, -120, -99, -115, -78, 120, -97, -21, 45, 115, -38, 5, 35, 82, 67, 83, -100, 124, -84, 92, -6, -49, -51, -59, 104, -5, 113, -83, -11, -56, 105, -82, 58, -39, -119, -87, 25, 41, -81, 65, -77, -106, 101, 125, 8, -21, -113, 8, -48, -82, 49, -80, -89, -75, -76, 4, 107, -128, -53, -68, 42, -87, -5, 112, -119, 21, 24, -51, 64, 40, -10, 10, 19, -64, 42, 48, 40, -30, -20, -70, 98, 90, -56, -49, 24, 26, 15, -11, 69, -48, -14, 72, 68, -60, 87, -108, -50, 73, -104, -36, 101, -50, -108, 45, 124, 78, 45, -97, -6, -60, 80, 113, 50, -106, 94, 66, -58, 58, -5, -92, -30, -54, 2, -28, -91, -28, -16, 81, 108};
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
    msg.setTimeStamp(0.109363612678);
    msg.setSource(15030U);
    msg.setSourceEntity(129U);
    msg.setDestination(24000U);
    msg.setDestinationEntity(130U);
    msg.text.assign("AMYQVGIPAZDSYOUKXXRLEIYHTPXTDIHOHGHCZDEUJRVZLBFXRFMYMGVDMYNPBVJWWXWJUNVSMUZLOOYQKFHKCGIHMWHTOZSEZKGXUYAGMRAWTAQJHTTVUECXLVGABAXCZALVZJNEINCDM");
    msg.type = 139U;

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
    msg.setTimeStamp(0.519735309785);
    msg.setSource(16387U);
    msg.setSourceEntity(36U);
    msg.setDestination(48812U);
    msg.setDestinationEntity(236U);
    msg.text.assign("XYQUOIAWWGLEXSYVTROVEDJUCBKSZXGTUAHNXJRJFDKHPCUHQXMFCQOFNJFKISDGHTPFIWJAZIJBBRGAPMWZSMNEXBYNKGCUINZXDZNGYGLSOLLWDCYMBHCHUDEZFOHAEXAWXCEHVMPTRCZTVEQAQNRQYLDUQOJBRXTLAUTBJGSPTTVMEMNTINIBHLSPGGYQFEPKRMWNBVQOPFKJVKCPPFWFDQORDIKL");
    msg.type = 42U;

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
    msg.setTimeStamp(0.410156179776);
    msg.setSource(15936U);
    msg.setSourceEntity(157U);
    msg.setDestination(28090U);
    msg.setDestinationEntity(62U);
    msg.text.assign("MQLYHITUGVHZPDRP");
    msg.type = 50U;

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
    msg.setTimeStamp(0.0326583167946);
    msg.setSource(56100U);
    msg.setSourceEntity(135U);
    msg.setDestination(53993U);
    msg.setDestinationEntity(138U);
    msg.parameter = 119U;
    msg.numsamples = 189U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 19265U;
    tmp_msg_0.avg = 0.417270972288;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.149369885697;
    msg.lon = 0.993139764895;

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
    msg.setTimeStamp(0.478548001833);
    msg.setSource(41361U);
    msg.setSourceEntity(119U);
    msg.setDestination(2473U);
    msg.setDestinationEntity(160U);
    msg.parameter = 126U;
    msg.numsamples = 188U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 23304U;
    tmp_msg_0.avg = 0.435654198435;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.131112541964;
    msg.lon = 0.757373192775;

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
    msg.setTimeStamp(0.159513321452);
    msg.setSource(44103U);
    msg.setSourceEntity(112U);
    msg.setDestination(53540U);
    msg.setDestinationEntity(16U);
    msg.parameter = 2U;
    msg.numsamples = 52U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 61427U;
    tmp_msg_0.avg = 0.68676144342;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.638369830853;
    msg.lon = 0.0161335586439;

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
    msg.setTimeStamp(0.5042831502);
    msg.setSource(10245U);
    msg.setSourceEntity(123U);
    msg.setDestination(57351U);
    msg.setDestinationEntity(248U);
    msg.depth = 35938U;
    msg.avg = 0.150445440019;

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
    msg.setTimeStamp(0.774353790816);
    msg.setSource(61743U);
    msg.setSourceEntity(156U);
    msg.setDestination(10008U);
    msg.setDestinationEntity(197U);
    msg.depth = 7786U;
    msg.avg = 0.436910037719;

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
    msg.setTimeStamp(0.884269678155);
    msg.setSource(29635U);
    msg.setSourceEntity(247U);
    msg.setDestination(32592U);
    msg.setDestinationEntity(130U);
    msg.depth = 11288U;
    msg.avg = 0.24022980017;

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
    msg.setTimeStamp(0.668605940304);
    msg.setSource(55675U);
    msg.setSourceEntity(0U);
    msg.setDestination(51349U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.713404688682);
    msg.setSource(31907U);
    msg.setSourceEntity(24U);
    msg.setDestination(39183U);
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
    msg.setTimeStamp(0.886942577807);
    msg.setSource(18863U);
    msg.setSourceEntity(166U);
    msg.setDestination(35219U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.713478735481);
    msg.setSource(47469U);
    msg.setSourceEntity(167U);
    msg.setDestination(19831U);
    msg.setDestinationEntity(254U);
    msg.sys_name.assign("WWWURVRFOYJEDGMDIUOXHDUDJBNPNBRDVGUJYGHAKISQNFVYJDECZVSZEXIASCMTZSXPUVCUNHTMJCVKKVISPAXNALETHUPFVZYFOBPGMQFLJCEHSBYEKIAFERSBAKSBWBAWOHMHFLNOJGKQLVZGJTOLNGROJCYECDQCGPMFFAXXDTZTTHWQIWZXUHAQORBQXSLIJGEKNYZFMVLSTYOOCQRTIMYPPRBUNIALYHPWXUBLKQKTERNDGCL");
    msg.sys_type = 102U;
    msg.owner = 5359U;
    msg.lat = 0.117390969252;
    msg.lon = 0.303785185903;
    msg.height = 0.551260864683;
    msg.services.assign("PTOKFIGUWAKLYTRWEGCVVQRSPGCQQBGEKCVZIJBXDMUFGHXARGOPQEMKXEOCIENTLWUGBILKJEVSQWLNQPVIJCZBJVAHMZRSLIQDJMHPIILSXGRYPOMVLZSBDBVTCPRURMZDESWDYGDWN");

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
    msg.setTimeStamp(0.902976201721);
    msg.setSource(52445U);
    msg.setSourceEntity(46U);
    msg.setDestination(39254U);
    msg.setDestinationEntity(89U);
    msg.sys_name.assign("FRDYLVKTMPJHNS");
    msg.sys_type = 48U;
    msg.owner = 30685U;
    msg.lat = 0.481591569787;
    msg.lon = 0.862962334866;
    msg.height = 0.551767976626;
    msg.services.assign("XFLLAYGWAILEDZQRHNILNXGCRYPEOMMLVSKBBFBQJCUXQYZETNEAJAKZACMABTUPGECUDEJSRJJFMMVTHNXPSTDNHIIQLDGWTZYKGOHOEFXBFPBGSHNFRQMJXCANPNQVADGUVBTPJJEKIWMDWDUQIHSOVYVVZWSWEORORISWZFXAKJLHYVNSRVCKZWKBMQPPYLSCWLDYBUGTYDGKQWHPMFDGKAUUKTMJOXCOUETXZIRN");

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
    msg.setTimeStamp(0.146669900379);
    msg.setSource(38688U);
    msg.setSourceEntity(96U);
    msg.setDestination(61403U);
    msg.setDestinationEntity(12U);
    msg.sys_name.assign("UBTULYFMHZNCQOSKBUGFYYFMWFKLOFGXVTOA");
    msg.sys_type = 130U;
    msg.owner = 10400U;
    msg.lat = 0.757611595619;
    msg.lon = 0.488272940642;
    msg.height = 0.32031563694;
    msg.services.assign("BRYUEMXREJRTHJKXACXOZUKQLYVBIMGANUHZQZLBJCVGWKRTN");

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
    msg.setTimeStamp(0.904285077003);
    msg.setSource(42676U);
    msg.setSourceEntity(173U);
    msg.setDestination(46926U);
    msg.setDestinationEntity(225U);
    msg.service.assign("HTYAUHDSOXWCLXWXOHGDIRMAPDNNQFBCWXLMYEWUNWTQOJTTWSOTSPXKLVCRZBWMDYARNBIXJTQZOOBNDLBLOEBMVHHTLRCDICSFXQJYZVIVEJITHIEAJIKZFFPMKOLRBZ");
    msg.service_type = 125U;

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
    msg.setTimeStamp(0.84469708384);
    msg.setSource(56224U);
    msg.setSourceEntity(166U);
    msg.setDestination(52702U);
    msg.setDestinationEntity(229U);
    msg.service.assign("KTUMDXHIDVQGAVCXHKWETNCLELJPJZLINDSYCYGNNRXFFNJVCH");
    msg.service_type = 50U;

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
    msg.setTimeStamp(0.411844714224);
    msg.setSource(1880U);
    msg.setSourceEntity(147U);
    msg.setDestination(25424U);
    msg.setDestinationEntity(163U);
    msg.service.assign("XZHCULQPUYHQQAZOTVESFOLJICCDSMGXYCTFYWYGOEJVTNCDPEWEIXJRPTIRVZEPVDGFSNIAKXVNHAURJKWWFDEFZWYDITJCJFZKMGPXNMGHNNFOYDQMAEQRPIUXQSZERSGLXLZTLYXCENVRWIMHBSNTKKOUQUPHGWKHPUJYHTOOGDOUBARKXVOEDLSLTGRBJGMKIKSPVABF");
    msg.service_type = 114U;

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
    msg.setTimeStamp(0.867953799343);
    msg.setSource(7938U);
    msg.setSourceEntity(48U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(231U);
    msg.value = 0.77520889093;

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
    msg.setTimeStamp(0.851651935536);
    msg.setSource(57498U);
    msg.setSourceEntity(122U);
    msg.setDestination(28420U);
    msg.setDestinationEntity(240U);
    msg.value = 0.0166178862259;

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
    msg.setTimeStamp(0.407582808403);
    msg.setSource(16212U);
    msg.setSourceEntity(217U);
    msg.setDestination(41585U);
    msg.setDestinationEntity(99U);
    msg.value = 0.17054925941;

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
    msg.setTimeStamp(0.646772365299);
    msg.setSource(50418U);
    msg.setSourceEntity(217U);
    msg.setDestination(34236U);
    msg.setDestinationEntity(71U);
    msg.value = 0.246083767348;

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
    msg.setTimeStamp(0.68055365462);
    msg.setSource(2762U);
    msg.setSourceEntity(172U);
    msg.setDestination(48710U);
    msg.setDestinationEntity(7U);
    msg.value = 0.272955841611;

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
    msg.setTimeStamp(0.537301442174);
    msg.setSource(52025U);
    msg.setSourceEntity(164U);
    msg.setDestination(54665U);
    msg.setDestinationEntity(189U);
    msg.value = 0.534274856634;

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
    msg.setTimeStamp(0.6766178462);
    msg.setSource(36671U);
    msg.setSourceEntity(132U);
    msg.setDestination(3811U);
    msg.setDestinationEntity(159U);
    msg.value = 0.71328697829;

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
    msg.setTimeStamp(0.367527554964);
    msg.setSource(52757U);
    msg.setSourceEntity(34U);
    msg.setDestination(34400U);
    msg.setDestinationEntity(69U);
    msg.value = 0.499179839919;

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
    msg.setTimeStamp(0.497947860233);
    msg.setSource(62231U);
    msg.setSourceEntity(100U);
    msg.setDestination(15809U);
    msg.setDestinationEntity(126U);
    msg.value = 0.880122397312;

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
    msg.setTimeStamp(0.374705432248);
    msg.setSource(27873U);
    msg.setSourceEntity(212U);
    msg.setDestination(49518U);
    msg.setDestinationEntity(184U);
    msg.number.assign("DWAYLYNJCSZISFSTITGTFOETHCVGJVAUDRKWSDIRPLNFKW");
    msg.timeout = 5004U;
    msg.contents.assign("PRIYZEKFFZHXLVXBXITMTPAOJAQJYEKWMYVYGRFNUUFYXJRLCCQJQTDWBEITIJKPDDKRBPUUNEKDNSYDCSSIPGGEOQ");

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
    msg.setTimeStamp(0.484289670485);
    msg.setSource(17120U);
    msg.setSourceEntity(144U);
    msg.setDestination(18532U);
    msg.setDestinationEntity(132U);
    msg.number.assign("YVQWSPICCQLUOYTNRAGTFGHGAIWQFFFBMHLEJUYNYQEUWRKPCXWEVRKYTXRKNCXPUXLDNMURFKZEBJONZJBPHVYMQWVMFOMQTDFISIXSKIZJVDIUDHRJEITT");
    msg.timeout = 42973U;
    msg.contents.assign("VNTYEBTBXGHKYAKKKXRKEWDXEJAZZMEUBYOFFAZRRDPMDTTWJNBPQPHNYMSFQOGNOZKPQPBGAWVQMQCOPYZCSAQCRLVWJGLCGPLHEIMOIWMAEIRNRLCMRUPNECBSUYZHWBDFRXTGJBXGBXWTACLWKJTQRY");

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
    msg.setTimeStamp(0.416554994248);
    msg.setSource(36643U);
    msg.setSourceEntity(5U);
    msg.setDestination(63930U);
    msg.setDestinationEntity(99U);
    msg.number.assign("LNLKUTWYFECSYJBDPGTQXUSCSHFDNRNEAFJXWWCAFMRBGEISQNZYFGXAAMIHLMGTRTODJXEKFNMHIBQUOUOAIACSQPDBDAFZFYPLWANQXVOVDTBRDIMOHXCCELUDHKMRHEWLLSITYDVEPYIGWWRQRSMSP");
    msg.timeout = 29734U;
    msg.contents.assign("LTBDFACJCQQYIXROLPXAXVXIPCHSTJVVDXZMUKFVRIQGZDLKVHROHBGENTIWVJMQITDZSNQFBQWWBAMDFFUUKDSLXUGACYMEZJFWEGPAVIYSQKYGSUGPUXTOARJTMZLUBFLDENTNY");

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
    msg.setTimeStamp(0.0351003264436);
    msg.setSource(24704U);
    msg.setSourceEntity(124U);
    msg.setDestination(29097U);
    msg.setDestinationEntity(180U);
    msg.seq = 2640586956U;
    msg.destination.assign("LEXFPNXCYYOFSQDARIHBWQZSZDYXVSAPETPHTVLKESLFWJEDIBDUWGVZRDYXZCSILYJPOYBSCXDEFROKQAWRWCKGKZCHOPVCIQFJUUNGFMTGJZMISZXXQWUFTGFNZVCDMMICVOTRWWWFNKGXAKOGUL");
    msg.timeout = 21706U;
    const char tmp_msg_0[] = {-116, 68, -14, -32, 32, -108, -29, 21, -111, 0, 63, 123, 114, 108, 101, 121, -108, -96, -46, -67, -14, 87, -45, -79, -70, 99, 22, 47, -14, -38, 101, 96, -72, 81, -98, 125, 66, -128, -27, 27, 82};
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
    msg.setTimeStamp(0.791152981291);
    msg.setSource(53181U);
    msg.setSourceEntity(178U);
    msg.setDestination(61508U);
    msg.setDestinationEntity(93U);
    msg.seq = 522106367U;
    msg.destination.assign("TIRLWUGOKRZSHFQOJVIQGJTPNKLLKHBENPZAQINKZVKVWGYQCHOWHOVURCTBABCCXSFMJHLHZBBPLQQKBEBSYUFPQKVZZACWTHHZVTOFGGPHPFMSSLDMRPAEBELJXOZRU");
    msg.timeout = 63084U;
    const char tmp_msg_0[] = {-96, -110, 69, -14, 18, 17, 32, 115, 91, -22, -98, 84, -83, -126, -1, -46, -58, 70, -54, -30, 14, -7, -69, -51, 46, 115, -94, -84, -107, 31, -110, -120, 62, -88, -16, 39, 65, 85, 118, 60, 36, -72, 36, 90, 37, 103, 6, -119, 37, -91, 124, -90, -109, -9, -77, 47, -68, -102, -30, -49, -27, -112, 86, 4, 97, 104, 110, 95, 25, 109, -50, -73, 76, -96, -108, 10, -50, -67, 46, 9, 72, 94, 59, -84, 116, -120, 3, 81, 64, 83, 96, -107, 107, -62, -63, -13, 5, -51, 93, -59, -64, -112, -101, 12, -124, 58, 97, -12, 73, -10, 71, -28, 79, 106, 78, -16, 8, -103, 118, 120, -25, 74, 91, 24, -45, -2, -12, 22, 40, 33, 70, -17, 37, 116, -25, 23, -49, -30, -115, 60, 113, -45, -23, 0, -9, 14, 61, 67, -82, -49, 95, 80, 111, -41, 64, -68, 65, 77, 120, -7, 5, 62, -116, -9, -15, 48, -41, 71, -38, 97, -106, -71, 40, 74, -117, 86, 8, -24, -85, 107, -110, -73, -12};
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
    msg.setTimeStamp(0.532162963613);
    msg.setSource(57865U);
    msg.setSourceEntity(196U);
    msg.setDestination(58576U);
    msg.setDestinationEntity(93U);
    msg.seq = 1937975519U;
    msg.destination.assign("XOMCDTMQCQSALAWJHKJSALRXCEJIZNTPVEBPCJEZRVKOQUAKXDGYWSWQMPVEDZTFVHYZXPCXFMXERYAJXATSGUANUULLOQDFGKPITOYXUVWTEAMOZWNFRZHBQQTCMUSKZVIPTKYUIFWIIEBKJFPGJLBFBPVPDSYDEZWSBSLVRRAR");
    msg.timeout = 51958U;
    const char tmp_msg_0[] = {-107, -120, 111, -74, -128, -111, -71, -89, 123, 31, 125, 112, -25, 22, -40, -127, -77, -74, -49, 79, 97, -97, 7, 101, -59, -26, 30, 33, 14, 64, -97, 104, -44, -5, -109, 70, -54, -61, 37, -18, 100, 63, 8, 57, 27, -1, 80, -93, 10, 92, 7, -30, 41, -71, -69, -49, 26, 23, -106, 118, -60, 93, 80, 93, -111, 109, -111, -81, 44, 114, 49, -83, -67, -24, 50, 81, -46, 58, -107, 2, 85, -114, 114, -101, 107, -105, -3, 123, -103, 10, 10, -118, -67, -25, -33, 88, -27, -20, 44, -72, -86, 100, 55, 43, -59, -68, 114, 84, -101, -20, 22, 101, 41, -54, 59, 70, -109, -71, -119, 91, -9, -24, -92, 24, -3, -81, -69, -37, -101, 89, 4, -93, -47, 75, 2, 126, -6, -20, 50, -77, -123, 90, 36, -82, 13, -109, 92, 90, 51, -57, 58, 84, -34, 124, -39, 68, -16, 47, 76, 51, 98, -123, 99, 19, -114, 116, 124, 83, 86, -118, -15, 88, 62, 37, -83, 125, 40, -47, 92, 25, 19, -60, 41, 13, -3, 18, 28, -51, -67, 91, -65, -117, 2, 73, -51, 105, 4, 113, -93, 28, 21, -14, -47, -71, -104, 9, -128, 80, -17, -72, 1};
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
    msg.setTimeStamp(0.265193524701);
    msg.setSource(22468U);
    msg.setSourceEntity(92U);
    msg.setDestination(22260U);
    msg.setDestinationEntity(212U);
    msg.source.assign("DEVXIIPUISFHTPNOOKFJYKFUDRPMIEVAPDHNBAFSBXGAZVGZOBHQATZXVXVNRHDPRZELGIMHULFUF");
    const char tmp_msg_0[] = {124, -2, 48, 60, -108, 4, -10, -40, 51, -25, -46, -93, 121, -44, 106, 124, -100, 110, -122, 58, 47, -71};
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
    msg.setTimeStamp(0.575316023586);
    msg.setSource(29578U);
    msg.setSourceEntity(107U);
    msg.setDestination(41282U);
    msg.setDestinationEntity(19U);
    msg.source.assign("SXKRAGXWPGOMHZEIYIFVSNPUFTDBTMVNDJCZPAEKBXHWHRTQNYOTPQAL");
    const char tmp_msg_0[] = {103, 35, -72, 125, 91, -119, -4, -64, -73, -90, -35, 109, -114, -47, 27, -1, -32, -85, 66, 105, 83, 73, -42, -29, -121, 23, 8, 26, -28};
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
    msg.setTimeStamp(0.656938333683);
    msg.setSource(33483U);
    msg.setSourceEntity(76U);
    msg.setDestination(12355U);
    msg.setDestinationEntity(93U);
    msg.source.assign("TZASQSWMUJVAVKBUXSFAPGLNHIJQEOXNJJKAVWDODGFKXZMTBAOBURYONNNTETVDLEGFOKKZJVZSEOXNVVMCYMFEJUIDQFTCRDQZTCOHOBRKRKWMIXSJWQUJXQYBHVITXEYPWDIBHKWNMCBWRHLRRATYIDIWYZXSSIQBPUXZEHULHPFLAPMDLCUBMFGUQGPIRFUJ");
    const char tmp_msg_0[] = {116, -113, 77, -66, 107, 51, -31, 15, -109, 21, -117, -101, 26, 0, 34, -61, -13, 74, -119, -32, -65, -41, 96, 36, -53, 38, -96, 1, -90, -73, -15, -122, 84, 95, 100, -61, 42, 116, -127, 124, -106, -12, 18, 11, 122, 33, -114, 25, 90, 46, 123, 19, -39, -117, 98, -14, -68, -28, 26, 25, -59, 38, -32, 40, 84, -29, 40, -115, -75, -101, 53, 54, 6, 87, 103, 112, 44, 79, -89, 68, 122, -125, -60, 124, 1, 47, -102, -33, -92, 1, 26, -10, -53, 51, -70, 48, 25, 69, -60, -49, -58, 92, 116, 27, 102, 37, 35, -44, 33, 62, 62, 65, -119, -40, -113, 15, -110, 44, -35, 88, 103, 13, 69, -55, -63, 126, 98, 7, -106, -51, -98, 41, -33, 62, -3, 115, 0, -108, -30, 17, -110, 115, 117, -61, -106, 53, -6, 80, 93, 84, 18, -21, 101, -24, 45, 38, 47, 16, 95, -84, -74, -15, 114, 32, 92, 9, 34, -92, -83, -103, 72, -42, 33, 111, 77, 98, 18, -57, 96, -109, -11, -53, 78, -41, 14, 113, 36, -51, 52, 89, 52, 90, 100, -125, -39, 91, -16, -115, 111, 53, 7, 124, -112, 32, -97, 96, 103, 104, 5, 113, 55, 5, -9, -43, 96, 17, -25, 114, -45, 92, -120, -18, -28, -57, 76, -78, 106, -117, 77, 18, 76, -79, 68, -18, -19, -117, 105, -2, -47, -27, 50, 16};
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
    msg.setTimeStamp(0.439523370087);
    msg.setSource(11149U);
    msg.setSourceEntity(246U);
    msg.setDestination(30162U);
    msg.setDestinationEntity(115U);
    msg.seq = 4227778221U;
    msg.state = 61U;
    msg.error.assign("FHGJGQOPAYNNFZVGKWOMIAVBMCLLNMUYJAEXPUDKZFYDZRUSLDPBZHRGIAIXCLLFYEOWIQRKSNXTYBIQCBBANNVWTETJIUHGBKUJZFDITBXLPFQNJZSKTPEIEHMBHSQXXJVCVHEMCMELWVSJBWCUICRXXUDSBACCLVRTCVNWRPHGAEXKNQATMWDOQDJDVOKJYFOPTDUFPJIOZLUYYWZRESQGGMOYXTZTNRAGWHMAKS");

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
    msg.setTimeStamp(0.701844810867);
    msg.setSource(1181U);
    msg.setSourceEntity(8U);
    msg.setDestination(41627U);
    msg.setDestinationEntity(2U);
    msg.seq = 4042010158U;
    msg.state = 228U;
    msg.error.assign("PVEFBTLYBUODNUHMGIOZVLMEGYNJCGPOQWHUXMIGJTQRLWJDIHIMSRPESVBLHUOYSAZDCWDNRFZTOXQTYRVAVWTUJXCREBEVHJIUIDNNWQQRKOPGABDXUZCYKW");

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
    msg.setTimeStamp(0.825487282395);
    msg.setSource(38122U);
    msg.setSourceEntity(229U);
    msg.setDestination(6386U);
    msg.setDestinationEntity(155U);
    msg.seq = 2459577737U;
    msg.state = 47U;
    msg.error.assign("MQISCNOBBTAEJEPKHGKBUYGTHZTULQIIQOXBMPRNQJRJGBPVKOUNVKUVCTRXZWSUYFPGRPJBTAVDPYAIOKSFWHVSJZYGMTROBROZMYLFCEALVUYMVHLYFHEEGXFDCQVWZMGTKPMNZJNSVNUOLXLRBGCBRLNCZJKHNPIDWQUNQXXLFUWWNRMLWGAIYHTDYJH");

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
    msg.setTimeStamp(0.12534707624);
    msg.setSource(61653U);
    msg.setSourceEntity(107U);
    msg.setDestination(52224U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("ICCQTKWMJCYQNCNFZLFMIFVIMVSWNHFJOODMOIUDNWPEQJTDZBVEFHPQQETQPRPVEXHLSBRJHISOKUABEUJKTYCKNXRMVNFVVRPJXBGFVEQXBZGPGZXJDBHIVYGMSAZINWYGYSDDAGYKNOLWUQAICOWTCGEOZLSSUHHJPGBLZLUADEDTLAABJRIDETEZPKHHFP");
    msg.text.assign("BZSSJVZVLOTULCYWTKEBRVURPRGENVUQWQBFAORINTJGSGCQCJTEHHWPQHCKIHEBKDYFZJFEIGASHYGBJROBHEQFOKQTXTTSFKNIUQOZRODRVWXPYOBILWDRPDYOZXYKXVNCPDECTZBTGZKWIZDFFNEMMLYQWNOLIAWXMCJJJAPNDSPQXZFDPPEAKGNYMOAACVUAHSGSWNXHMGUAVUTUXDLLNPMKMYHLGIJCRLSXEHDB");

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
    msg.setTimeStamp(0.188068432177);
    msg.setSource(57967U);
    msg.setSourceEntity(99U);
    msg.setDestination(4656U);
    msg.setDestinationEntity(21U);
    msg.origin.assign("ZPVBYMWAUSKJRZ");
    msg.text.assign("OCFEEVPEYLXMXRUGPINWSSFRFQXIQOBWKCUDJVVJQDITTECAGVNLXVFYZRKJMJEMXPIMDNUDSYWONBTOARBTALPMXSTYVHRLAICGPLVGWFFHNBTTCJKWXEKNROWPHHUAZYRVKGHUJJSJGLFRBMEOGQAMQDRUBXXSHOLMBMUQZZFWYIHCSBWQHWQIZVKKFBKLCZYNADSGAPLCDIVBTZEGRKPJTIGUUTSSNECYHOQUO");

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
    msg.setTimeStamp(0.570255551705);
    msg.setSource(58041U);
    msg.setSourceEntity(134U);
    msg.setDestination(59585U);
    msg.setDestinationEntity(10U);
    msg.origin.assign("HYAHLYAGSDMTBZEHXXDLDTDHVOVNHWLMCSHQUBFYVDIKPAXXTCEJFXFZWROJRPITLMOAAIZUYTZUPDQPITFVARWRAKBHWLWAEQYJNYUOKEUGOCGNJJPQFBKWMPYWBTHHUMEQZLNRYGQTOMREEVXMKUFGAGBSESKXDCJLFWPNZZGILNVJGBSWSCSIKMSNTQUBMSFVDUILSQBANXDRGOWCGC");
    msg.text.assign("GBXWSYWGTUHVSIXRROXMDTPYYKJZCSQTWRBTKBBFNKWXPXWC");

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
    msg.setTimeStamp(0.364785706034);
    msg.setSource(488U);
    msg.setSourceEntity(150U);
    msg.setDestination(50343U);
    msg.setDestinationEntity(145U);
    msg.origin.assign("GFCRUNHNXOQWKTZSEEZSAEKPJPPBRPECQLGARWHWYFTMLUPFCJVRDPGMYIWISUYVHIHMPQWZOSQLGXVMHTAWVNTDYDHAUVLGDUMLTZATFSBJNGTQLWAXEECNVEKZFGYLKZBJPOEBYCDSPTARMGQRJOYOQWIFKJBYKWDLSOCGWOTUQAJTKLZMD");
    msg.htime = 0.380435746546;
    msg.lat = 0.903412153173;
    msg.lon = 0.639757699274;
    const char tmp_msg_0[] = {-16, 116, -82, 20, -3, -57, 100, 1, 116, -96, -77, -44, 57, -54, -29, 70, -14, -63, 47, -33, -27, -109, 50, -18, 25, 1, 17, 0, 97, 69, 89, 29, -70, -25, -87, 72, -63, 96, -90, 60, -26, 63, -106, -13, 45, -51, -62, 80, -34, 63, 3, -6, -27, 114, 102, -74, -37, 118, 20, 109, 103, 57, -90, -128, 113, -70, 88, 117, -61, -122, -65, 6};
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
    msg.setTimeStamp(0.667488591486);
    msg.setSource(60651U);
    msg.setSourceEntity(32U);
    msg.setDestination(58048U);
    msg.setDestinationEntity(168U);
    msg.origin.assign("LGYHZGWEJOHBQJEXMIJUZFPHMTWCDSEOTFKRBTWSNREXCAPTDFMZFSYWKTGIXDQMWKEXPSTN");
    msg.htime = 0.309128134215;
    msg.lat = 0.415000520657;
    msg.lon = 0.229251842685;
    const char tmp_msg_0[] = {-32, 119, 80, -110, 82, 104, 110, 23, 73, -112, 13, 108, -20, 40, -2, -80, -103, -57, -22, -89, -112, 8, -47, -48, 101, 82, -120, 92, -6, -85, 38, 88, 18, 62, -128, 64, -96, 61, -33, 62, 87, -47, 24, 12, 28, 37, -87, 3, 19, 46, 81, -122, 17, -17, 62, -36, -99, -77, 56, -26, -31, 89, 45, 68, -44, 90, -17, 80, -72, 117, -98, 78, 85, 94, -81, -56, 102, -22, 74, 44, 73, 4, 123, 50, 93, 6, 118, 46, 40, -104, 64, 52, -12, -3, 35, -72, -23, 42, -88, 8, 87, 5, -23, 57, 0, 58, 5, 46, -32, 107, -112, 78, -32, -84, -86, -73, 79, -20, -104, 19, 126, 118, -74, -115, 99, 78, -23, 95, -73, -87, 12, 73, 59, -107, 18, -119, 85, -34, 99, -3, -110, 34, 31, -19, -73, -44, 111, -1, 74, -52, -103, 41, 0, 42, 52, -39, -103, 28, 122, 73, 85, -110, -46, -114, 15, 46, -107, 125, -106, 24, -31, -51, -35, -75, 85, -115, -103, 39, 23, 45, -39, 69, 23, -9, 109, 79, -9, -89, -21, 86, -78, 92, 125, 30, 104, -39, -49, -79, -122, 47, 58, 35, 23, 47, -46, 103, 0, 1, 13, 83, 105, 63, -116, 10, -84, -109, 72, 62, -21, -74, 23, -9, -38, -93, 96, 24, 110, 41, -98, -100, 88, -3, -41, -30, -117, 124, -82};
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
    msg.setTimeStamp(0.866842599689);
    msg.setSource(53223U);
    msg.setSourceEntity(163U);
    msg.setDestination(27311U);
    msg.setDestinationEntity(77U);
    msg.origin.assign("SPUGMFLDKLUYAUGBYYXYEHIRZXNTGQXBCDCSJTUPROWKJRNUGBOEZ");
    msg.htime = 0.977817921921;
    msg.lat = 0.471377019497;
    msg.lon = 0.366157878172;
    const char tmp_msg_0[] = {-64, -110, -34, -20, 76, 107, 26, 74, -18, -120, 3, 88, -53, 91, 30, -33, 40, -100, -9, 123, 46, -90, -99, -83, -107, 29, -46, 126, -57, -87, -63, 60, 9, 120, -116, 35, -56, -88, 36, 4, 45, -15, -126, 66, -100, 29, -115, -33, 91, 45, -34, -32, 62, -1, -81, 36, -50, 78, 116, 16, 81, 104, -77, 111, -98};
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
    msg.setTimeStamp(0.167793184589);
    msg.setSource(14542U);
    msg.setSourceEntity(138U);
    msg.setDestination(44133U);
    msg.setDestinationEntity(237U);
    msg.req_id = 18453U;
    msg.ttl = 325U;
    msg.destination.assign("SIDFNVJYNYJHATTIOPIEDMFUAAPRMTRJPFJMGSDYJHZDLVZMCKXBRIVNXPACLLUNSGIMRVFGJXCXZNSHLKKNXAQXIGQFOZOGCPPLQHHTEJSEHKVRDIBURZOFZICZGDWSMKKETQIXXYZOYYQWOQQOGNKXUOBBFESDRKEBEWITYSUYTLZDVGTLVEBADJJOCNHCKRBKSHWUHEQWQRMPXLCMVWHAAUNBBPBCALJZRWWSV");
    const char tmp_msg_0[] = {-72, 6, 109, -10, -113, 107, -15, -24, 95, -126, 58, -87, -17, 43, -85, -72, 93, -6, 69, -117, -70, 68, -88, 72, -37, -103, -9, 114, 39, -96, 89, 124, -39, -41, 110, -87, 53, -28, 125, -59, 118, 88, 105, -37, 57, -57, 30, -41, 57, 16, -6, 77, -96, 125, -108, -26, 73, -107, -128, -114, -22, -106, 71, -110, -12, -116, 71, 8, -124, 34, 122, -52, -56, -90, 124, -36, 11, 28, 78, 65, 119, 119, -106, 7, 53, 33, 23, -117, -113, 14, 18, 12, 36, 96, -91, 11, -38, -40, -123, 15, -33, 40, 102, -106, -5, 80, 79, -76, -16, -82, -76, -11, -71, 54, 97, 101, -101, -126, -89};
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
    msg.setTimeStamp(0.41261840344);
    msg.setSource(35211U);
    msg.setSourceEntity(53U);
    msg.setDestination(46109U);
    msg.setDestinationEntity(111U);
    msg.req_id = 26628U;
    msg.ttl = 53643U;
    msg.destination.assign("KHTBZKONWROFPLYCBZDVXBEVGCEVFJCQLKBRHLZLQOCOWZYCHIOMVJEIDRKXUTQSDCIENTDHMXYVFDQSLAMIFLXQMWNEKRMSFWDIVOVBSKYSHXTGBYNWTHNYLAWYA");
    const char tmp_msg_0[] = {47, 124, 114, 63, 88, -92, 111, 9, -49, -19, -65, -98, 40, 126, 58, -54, -96, -32, 44, 89, -96, -48, 4, -52, 75, -29, 56, 93, -83, -107, -71, -40, -45, 39, -8, 115, -89, 44, 112, 43, -106, -4, -73, 108, 82};
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
    msg.setTimeStamp(0.0354424092599);
    msg.setSource(28013U);
    msg.setSourceEntity(87U);
    msg.setDestination(44543U);
    msg.setDestinationEntity(218U);
    msg.req_id = 52259U;
    msg.ttl = 4647U;
    msg.destination.assign("ZWLZXEXHFGHIGQBKQUXYBNRHFYSXUZOINAKJAMFKTPZGLWTFPQZOVTCMQBUBVUBDEAPKQGXOWYOBGKVKZGOAILPXFGYLEWCJYLTESEYBTQFRXYRNURYLOWUVPRVHNOWPUISSDQNRUCIRFCEUNDCAQUZBLMSWVZJYHWXXEMHHJOAMSGVMDAIPGTADDKLKATEITSJZNFFPJSCKZBHCDCVDTMJNMWSPDLMRJMQCHYGKVROQSCDEHOI");
    const char tmp_msg_0[] = {60, -56, 22, 68, 8, -29, 82, -85, 23, 40, -91, 2, -52, -18, -11, 121, -36, -26, 86, -124, -122, 70, 26, -88, -77, 67, 94, 106, 33, -124, 121, 117, 101, 82, 70, -62, -98, 96, -123, 17, 47, -42, -124, 69, 11, 65, 5, -104, 2, -122, -5, -83, -69, 13, 67, 112, 107, -92, -38, 39, -26, -81, 37, 92, -91, 44, 32, 25, 124, 76, -93, 124, -90, 38, 99, -78, -32, -51, 61, -13, -71, -65, -14, 23, -90, 81, -14, -88, -99, -89, 14, 122, -122, -88, -73, -1, -13, 44, -63, -47, 78, 102, 63, -86, -74, -99, 105, -54, -27, 51, 96, -60, 20, 50, 69, -39, 60, -49, 35, -58, -94, -128, -11, 57, -69, -60, -25, -106, 95, 35, -30, 75, 114, 91, 91, 54, -106, -39, 101, 63, 107, -126, -27, -51, -111, 30, -7, 91, 0, -9, -29, 49, -12, 37, 115, 94, 9, 79, -19, 62, 53, 14, 126, 15, -53, 21, -9, -63, 79, -50, 105, -13, 43, -126, 36, 54, -29, 101, -40, 39, -49, -51, -56, -69, 28, -98, -29, -12, -118, 4, 54, 3, 90, 64, 32, 50, -74, -93, -121, -71, 90, 11, -55, -1};
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
    msg.setTimeStamp(0.937812265603);
    msg.setSource(38598U);
    msg.setSourceEntity(157U);
    msg.setDestination(11311U);
    msg.setDestinationEntity(166U);
    msg.req_id = 53565U;
    msg.status = 145U;
    msg.text.assign("QRMRAOINHOPVWEWRYGCLFLWKTVCLNRGTQIEWTAHMTZWFOGCKBBEKSXXBIIJJQODTUOYAVDCXMBZYDPCMZEKSZVIMFPSNNVJUOGOEXRPXIHGYNESKGDMDXZSNABBRVQOHIDEUSBVYBSUDARLCGQJFFWUWHUEOMWOTUZNQRZIUYXXYCPIHXPJFKSQDFJJLWCLAFRYIVHDZNSBVEZFYLEHUKJVHXSCACKMZGMGNPFTQTYUAKMRTPGNWPK");

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
    msg.setTimeStamp(0.122592529513);
    msg.setSource(44918U);
    msg.setSourceEntity(154U);
    msg.setDestination(56874U);
    msg.setDestinationEntity(76U);
    msg.req_id = 61689U;
    msg.status = 73U;
    msg.text.assign("WBLFLOUSVUIJJRNWROCMXYXBCYMUNKHTWBPHEQLJPREDREFHBRELGIMNTSZSZXMVGQBFFNKKYIJDQKFZLQUGMVPMGYBXCQXSDHWSOQTZWVAACTPXBCVKHBQARA");

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
    msg.setTimeStamp(0.272721049197);
    msg.setSource(16634U);
    msg.setSourceEntity(165U);
    msg.setDestination(43639U);
    msg.setDestinationEntity(140U);
    msg.req_id = 33703U;
    msg.status = 183U;
    msg.text.assign("WWSGKHKGLDVCENFESOYRCLQZQPWVPADIDJTQITPGJDXGRIMQNWPJODMWJDSYBEUBXLZGYCQPSYMJVTCPMXCXANMAKVWBKBAFFASNGOYBSJ");

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
    msg.setTimeStamp(0.821899093529);
    msg.setSource(18456U);
    msg.setSourceEntity(169U);
    msg.setDestination(27201U);
    msg.setDestinationEntity(156U);
    msg.group_name.assign("KUWFDWDTJQEZNQCTRMDYAUYMWMBALNYZCNIUPWCRLYYHYFKINVWFMTIVHAKTNJRMPRBHZKWSGFKKYIR");
    msg.links = 269871408U;

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
    msg.setTimeStamp(0.612978881765);
    msg.setSource(18995U);
    msg.setSourceEntity(120U);
    msg.setDestination(26973U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("NPGLATFJEJBRYXFLUCIBJHUZTOKWTWHGJAGICJDESLCVCPCSRTOIJZUCDSVRYRJHKZNWAMNCXKYAPVNMZQUHEDVRKPEHBAQXQALPQKVYIUUAFMIHRVSDMYTWOWFPRDWHSNHVJOHZOBSQCXYYFUTJALEKCXUNPFNMGGXWXKIMKOGVQQYLWLVDFROOIDDFLDQZOIXGEEWKBQUZRMNVBIAEYAFYFBNTLNEMP");
    msg.links = 670503408U;

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
    msg.setTimeStamp(0.266406724862);
    msg.setSource(51988U);
    msg.setSourceEntity(59U);
    msg.setDestination(1271U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("QGDVFMMXVSONPLSJBJILXYLODBCNYBBYMZXMFWXPKIXMUKEMSCXD");
    msg.links = 3362390179U;

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
    msg.setTimeStamp(0.0643451502106);
    msg.setSource(29474U);
    msg.setSourceEntity(5U);
    msg.setDestination(13592U);
    msg.setDestinationEntity(44U);
    msg.groupname.assign("CEEMBBZYCORENPLEJJUYRIZBZSH");
    msg.action = 133U;
    msg.grouplist.assign("RJUONXCRAOSHCOESBIQFFUJIYWINCECTPJPQRAEKBEEZBPMCGVTZAJHXFFWKVLWLTUSCFGRMSGJBEJXTDKWMGQVGGXYXTZFVCMDVRQYPZMGTVFXHUWUMTGQMDCXRDILHYFNDPYLDSMSPCLPZNHXDABYDBLTSBLKQWNZRGKAHKIZUMNFREKNRNGYDHYVVLCEYDIKSBOUBJEAAQMZU");

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
    msg.setTimeStamp(0.875370150239);
    msg.setSource(137U);
    msg.setSourceEntity(76U);
    msg.setDestination(63610U);
    msg.setDestinationEntity(202U);
    msg.groupname.assign("EWUZOMOYPQNTFJDWJJQHJCTHBNRSKZMFDOTAEETZKKLVLBUEBEPCIRRRXKFYLSKDUPRBAGRYKLADMYLGNOJJILUSRCCMXVXYXXDUEWVTQDCJIINDAWGKJTOUZCYYINHYFOOVVQQRGMZWHFCYPMCGKZPBWPOFNGDLJXMGHOVEAIUHGNBZQVPFRTSTZFABPGEXZZHTOEMQDWBNHWR");
    msg.action = 254U;
    msg.grouplist.assign("TRYOZCRYGFVDGOZNDKRVSKO");

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
    msg.setTimeStamp(0.354515894689);
    msg.setSource(30217U);
    msg.setSourceEntity(244U);
    msg.setDestination(6455U);
    msg.setDestinationEntity(23U);
    msg.groupname.assign("WJTGVJZBGAFIRCUHMFBDBYQPPZKDGKMENIYCYJYOTESTGNOOJZIUOASJPMDSHIPGVVADMPQHTHKAUMUFZXPEMLXHLNSGTOTLAWYSZDLJOBCMIRODWWDSCFDLVKYAPNQWQJY");
    msg.action = 194U;
    msg.grouplist.assign("XZGVAHVVPJVYIUWPOHLATQCUTUHKNYBJEATDEIMUCUMGEZLPCMDPSYFJNYXCFJGWVVQDBUHGEIKXYYRVIKAWLHQDKSJILCKTKTFIBSSHESTABXMSQDFQBOJFMJKQRXGSWXLOMCMFWFNYELIUYBKTJUQWZEZVJXBNAZ");

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
    msg.setTimeStamp(0.695399570168);
    msg.setSource(52935U);
    msg.setSourceEntity(4U);
    msg.setDestination(28688U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0423907170252;
    msg.sys_src = 53230U;

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
    msg.setTimeStamp(0.779388397699);
    msg.setSource(48543U);
    msg.setSourceEntity(225U);
    msg.setDestination(27749U);
    msg.setDestinationEntity(95U);
    msg.value = 0.317477777283;
    msg.sys_src = 37884U;

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
    msg.setTimeStamp(0.689841140082);
    msg.setSource(20801U);
    msg.setSourceEntity(203U);
    msg.setDestination(49785U);
    msg.setDestinationEntity(56U);
    msg.value = 0.975181178223;
    msg.sys_src = 16892U;

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
    msg.setTimeStamp(0.145714352397);
    msg.setSource(7149U);
    msg.setSourceEntity(93U);
    msg.setDestination(13218U);
    msg.setDestinationEntity(13U);
    msg.value = 0.841550024765;
    msg.units = 25U;

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
    msg.setTimeStamp(0.0947433838807);
    msg.setSource(58876U);
    msg.setSourceEntity(169U);
    msg.setDestination(26503U);
    msg.setDestinationEntity(97U);
    msg.value = 0.105701559923;
    msg.units = 223U;

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
    msg.setTimeStamp(0.224211727811);
    msg.setSource(2241U);
    msg.setSourceEntity(74U);
    msg.setDestination(17757U);
    msg.setDestinationEntity(140U);
    msg.value = 0.644089888911;
    msg.units = 51U;

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
    msg.setTimeStamp(0.288679654912);
    msg.setSource(20581U);
    msg.setSourceEntity(21U);
    msg.setDestination(39270U);
    msg.setDestinationEntity(192U);
    msg.base_lat = 0.617717880611;
    msg.base_lon = 0.154774704863;
    msg.base_time = 0.652673596395;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 28368U;
    tmp_msg_0.destination = 8322U;
    tmp_msg_0.timeout = 0.451059087479;
    IMC::HistoricCTD tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.conductivity = 0.421641090791;
    tmp_tmp_msg_0_0.temperature = 0.202606729342;
    tmp_tmp_msg_0_0.depth = 0.649197551725;
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
    msg.setTimeStamp(0.22437728306);
    msg.setSource(36586U);
    msg.setSourceEntity(183U);
    msg.setDestination(20305U);
    msg.setDestinationEntity(226U);
    msg.base_lat = 0.818174725358;
    msg.base_lon = 0.131300412187;
    msg.base_time = 0.566753837736;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 22725U;
    tmp_msg_0.destination = 22471U;
    tmp_msg_0.timeout = 0.141197589005;
    IMC::Event tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.topic.assign("HGCANAKSZNKRDSNRULGEZPIKHZHLHBJMKGWSSUJZPEBBOOTJRDVVMQICXTTPMHNPGZFOWJLEXFSNTZVDYFYXFDEQUTDLKHEEDRHOKMJTJLRGARPCWNSVUHFXVOZCQOUYABAVYMJNO");
    tmp_tmp_msg_0_0.data.assign("HTGMPHQNDVSXHAIYWAFLYXUMVRVYDADFBCOPATRIBLFROSJQQJNCGZYVMCPSESYITMPKBOCFDWTXEVTFRPCZWGFBADWIYLRJVX");
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
    msg.setTimeStamp(0.235592348909);
    msg.setSource(35597U);
    msg.setSourceEntity(40U);
    msg.setDestination(18162U);
    msg.setDestinationEntity(55U);
    msg.base_lat = 0.438224818034;
    msg.base_lon = 0.811830979203;
    msg.base_time = 0.161228010109;

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
    msg.setTimeStamp(0.0474701166569);
    msg.setSource(30834U);
    msg.setSourceEntity(2U);
    msg.setDestination(55492U);
    msg.setDestinationEntity(233U);
    msg.base_lat = 0.246048125917;
    msg.base_lon = 0.447227558368;
    msg.base_time = 0.105405346479;
    const char tmp_msg_0[] = {-90, 121, -82, 120, 23, -62, 7, 76, 13, -104, -86, 0, 62, 75, 44, -45, 5, 18, 2, 57, -22, 35, -14, 67, 93, 1, 22, -68, 26, 19, 35, -32, 13, 38, 79, -27, 9, 32, 89, -30, -116, 81, 64, 72, 12, 119, -100, -1, 77, 108, -80, -4, 124, 105, 45, -114, 109, -55, -108, -123, 8, -59, 53, 11, -71, 41, -105, -82, 13, 0, -27, 113, -96, -8, 49, 77, 105, 57, 38, -104, 87, -106, 65, -99, -92, -59, -45, 75, -73, 68, 64, 124, -97, -13, 126, -125, 109, -65, 73, -111, -33, 48, 29, 16, -121, 67, 17, -86, -127, -93, -86, -99, 16, -53, -122, -65, 27, 98, -52, 17, 70, 83, -94, 114, -72, 50, 9, 11, -114, 1, 89, 117, -110, -47, 18, -126, -34, 90, -3, -92, -127, -36, -122, 35, -125, 120, 32, -82, -92, 42, 16, -58, 65, -114, -26, -98, -37, -51, -73, 117, 126, -76, 125, 78, 65, 32, 16, 93, -30, 44, 83, -99, -22, -19, -65, 123, -72, -16, 86, 73, 4, -50, 19, 46, 24, 48, -26, -49, 106, -63, -49, 22, 106, -31, 8, 77, -95, -125, 69, 8, -95, -74, -114, 110, 50, -103, -106, -118, 28, 121, 121, 67, 27, -115, 80, -51, -124, -91, -12, 21, -88, 95, -57, 87, 121, 32, -20, -109, 77, -52, -8, -43, 33, -89, -119, -94, -119, -77, 112, 122, 60};
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
    msg.setTimeStamp(0.611321803127);
    msg.setSource(31251U);
    msg.setSourceEntity(51U);
    msg.setDestination(61873U);
    msg.setDestinationEntity(84U);
    msg.base_lat = 0.915960863783;
    msg.base_lon = 0.528078592543;
    msg.base_time = 0.28600241368;
    const char tmp_msg_0[] = {-101, -104, -39, -87, 93, -74, 107, 113, 36, 123, 60, 33, 20, -76, -94, 94, -19, -4, 124, 82, 42, 0, 72, 124, -92, -75, -27, -99, -105, -83, -59, -43, 50, -89, 12, 52, 86, -106, 56, 58, 59, -89, 32, -83, 49, 47, 54, 58, 14, -109, -120, -72, -78, 121, -26, 5, -57, -28, -27, 64, -57, 95, -58, -28, 116, -32, 83, -113, 111, -103, -14, 23, 121, 55, -122, 61, -46, 97, 55, -126, 78, -34, -88, 53, -107, -80, 25, 119, 72, 6, -99, -68, -48, 118, -26, -67, -113, -111, -73, 109, -45, 124, 30, -85, -36, -108, -71, 123, -41, -3, 48, 3, -84, -62, 110, -17, -119, 37, -110, -79, 28, -110, -11, 36, -11, -76, 6, 15, -83, -71, -80, 92, -94, 59, 16, -120, 83, 52, 44, -78, 109, 41, -13, -87, -84, 73, 52, 114, 48, -94, -124, -49, 75, 68, 46, 65, 106, -88, 104, -122, 90, 54, 119, -106, -64, 114, 40, -41, 88, -56, 48, 67, 99, -44, -58, 104, -44, -27, -11, -110, -10, 13, -57, 113, -36, -103, -97, 7, -62, -116, 60, 12, 119, 91, -14, -21, -21, 93, 59, 100, -59, -47, 48, -77};
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
    msg.setTimeStamp(0.501124242991);
    msg.setSource(33809U);
    msg.setSourceEntity(244U);
    msg.setDestination(22193U);
    msg.setDestinationEntity(65U);
    msg.base_lat = 0.592047714538;
    msg.base_lon = 0.400794046359;
    msg.base_time = 0.965104891548;
    const char tmp_msg_0[] = {-79, -125, -69, 95, 118, -9, 47, 62, 77, -107, 8, -53, 79, -126, 124, -40, 75, -55, -98, -94, 17, 28, 68, 82, 61, 16, -39, -116, -9, 67, 39, -128, 87, 4, 42, 80, 22, -49, 17, -17, -27, 116, -56, -67, 65, -57, 36, -105, 99, -38, 106, 98, -41, -15, -64, -105, -31, -50, -124, 34, 68, 88, -59, -95, 106, -25, 22, -41, -107, -57, -4, 14, 57, 44, 50, 123, -90, 47, -69, 64, 76, -67, 61, 117, 59, -100, 108, 53, -90, 3, 104, 121, 79, 49, 54, 76, -53, 37, 8, -114, 108, -52, 120, 59, 83, 101};
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
    msg.setTimeStamp(0.443856964788);
    msg.setSource(58846U);
    msg.setSourceEntity(179U);
    msg.setDestination(42317U);
    msg.setDestinationEntity(172U);
    msg.sys_id = 57258U;
    msg.priority = 49;
    msg.x = -5693;
    msg.y = 17627;
    msg.z = -16554;
    msg.t = 6777;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.014181516946;
    tmp_msg_0.lon = 0.00505461277197;
    tmp_msg_0.height = 0.0993504473252;
    tmp_msg_0.x = 0.886863554494;
    tmp_msg_0.y = 0.928872884519;
    tmp_msg_0.z = 0.0563432607111;
    tmp_msg_0.phi = 0.226828343521;
    tmp_msg_0.theta = 0.855555946669;
    tmp_msg_0.psi = 0.526968335287;
    tmp_msg_0.u = 0.526884563974;
    tmp_msg_0.v = 0.126423119508;
    tmp_msg_0.w = 0.00608077407875;
    tmp_msg_0.vx = 0.364302976892;
    tmp_msg_0.vy = 0.721097620188;
    tmp_msg_0.vz = 0.217660456888;
    tmp_msg_0.p = 0.836207773603;
    tmp_msg_0.q = 0.405366266135;
    tmp_msg_0.r = 0.676652176276;
    tmp_msg_0.depth = 0.657044292896;
    tmp_msg_0.alt = 0.350857915662;
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
    msg.setTimeStamp(0.0796853262192);
    msg.setSource(22825U);
    msg.setSourceEntity(123U);
    msg.setDestination(6446U);
    msg.setDestinationEntity(182U);
    msg.sys_id = 57396U;
    msg.priority = -45;
    msg.x = 11536;
    msg.y = -11508;
    msg.z = 2934;
    msg.t = 25455;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QIJRHRWIWYVTGWHBCCIGLMBTOVXBTDKWWRYYZDQNSXCYLJMATFUHSKEVHKBDSQJBIQXUGOMPPCRFQAPYDNBPHVTDNDSUODZCNLJPFPBSOKSVMZEBITWKAHIGWUUJMUQLNGPERPUODXAASAJFKGMRTLOJPQLXYRPKWYTXZFEFZCZHHIKTHBRLVMMWXGMVIOGAQZFSZIKJLXCSIZBCN");
    tmp_msg_0.visibility.assign("QMERXNVDTXGULTHGHHNAFXDHCRQVEFBWWXDZEJSNBQNHFKZVVLVZSAJAPZJHLGDAIZCBVITRQUEFQSPFKMMPNGXXYSYIODTENFECIKYYJPDTYNVCGBPWVBGZPLGMWYWMIQOVRYYHMSMKFNIFUJEBOKOFSXCOIITCUBCNKYWDHCSAZRJPRQJAEUBOSBRKNGZ");
    tmp_msg_0.scope.assign("PBOHCFKPTJPIMBSVYRUXRABDZEMYGVQAUMXSZODZVLEQFCITHXSBHBAGJIYGMNNVOZSOPRVJCUMGUGVUIRSJAVIRDMINGZTMWKWJHSBKINDUUFLVRTK");
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
    msg.setTimeStamp(0.850027660938);
    msg.setSource(46526U);
    msg.setSourceEntity(136U);
    msg.setDestination(5378U);
    msg.setDestinationEntity(213U);
    msg.sys_id = 3162U;
    msg.priority = 15;
    msg.x = -17641;
    msg.y = 18126;
    msg.z = 996;
    msg.t = -17177;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.213917194905;
    tmp_msg_0.dist_min_abs = 0.945367396036;
    tmp_msg_0.dist_min_mean = 0.352287107486;
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
    msg.setTimeStamp(0.683255547935);
    msg.setSource(5530U);
    msg.setSourceEntity(29U);
    msg.setDestination(52128U);
    msg.setDestinationEntity(153U);
    msg.req_id = 34019U;
    msg.type = 118U;
    msg.max_size = 2605U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.881580543701;
    tmp_msg_0.base_lon = 0.443507548391;
    tmp_msg_0.base_time = 0.94392359886;
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
    msg.setTimeStamp(0.792034741176);
    msg.setSource(52133U);
    msg.setSourceEntity(232U);
    msg.setDestination(24432U);
    msg.setDestinationEntity(42U);
    msg.req_id = 21999U;
    msg.type = 159U;
    msg.max_size = 50115U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.561917971012;
    tmp_msg_0.base_lon = 0.449961425103;
    tmp_msg_0.base_time = 0.141293464289;
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
    msg.setTimeStamp(0.587330811183);
    msg.setSource(15326U);
    msg.setSourceEntity(195U);
    msg.setDestination(48216U);
    msg.setDestinationEntity(60U);
    msg.req_id = 5854U;
    msg.type = 151U;
    msg.max_size = 23209U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.75491419675;
    tmp_msg_0.base_lon = 0.11687599482;
    tmp_msg_0.base_time = 0.591032278678;
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
    msg.setTimeStamp(0.552500121319);
    msg.setSource(27768U);
    msg.setSourceEntity(15U);
    msg.setDestination(13051U);
    msg.setDestinationEntity(199U);
    msg.original_source = 5375U;
    msg.destination = 427U;
    msg.timeout = 0.240344666607;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.0972744994356;
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
    msg.setTimeStamp(0.809656612481);
    msg.setSource(33405U);
    msg.setSourceEntity(229U);
    msg.setDestination(50760U);
    msg.setDestinationEntity(56U);
    msg.original_source = 56208U;
    msg.destination = 3058U;
    msg.timeout = 0.903447390778;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 41U;
    tmp_msg_0.op = 209U;
    tmp_msg_0.request_id = 4441U;
    tmp_msg_0.plan_id.assign("AKYFWUIYSWDKNXRZZBMCBBIRPOEEAYSDOHFSPD");
    IMC::ExtendedRSSI tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.343274036626;
    tmp_tmp_msg_0_0.units = 15U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("PFNQGPFGAWDTEFBTDMRZXXAZVJDJBTZLOCRVUOSMAJGBABIPWVTCZGKYIQLNZHEGHVWJYSQIQNLZHJATKHQSKYDFXKTQBCQPIVLYSDMEMZOYNELYEERKWDRDAXIGCHPUPNNYRCJNJXENV");
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
    msg.setTimeStamp(0.961728136389);
    msg.setSource(6798U);
    msg.setSourceEntity(232U);
    msg.setDestination(18283U);
    msg.setDestinationEntity(230U);
    msg.original_source = 29467U;
    msg.destination = 21129U;
    msg.timeout = 0.238804255333;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("RJWMDUGUBVHMZKHJRYLPPAPYXWHAGAIJNMEIWMVJFSFDTYNARRZBMLCDGZSESHERMNSDXSUYVIXGBDOUWTWEJLXGZOBCPBSEHYOWKLEYHTNKFSXBFAOQCZTWVGDGYKFNHLCVQFMQDGARQQTMZWKHFVHIUQQBUKIXNOPILV");
    tmp_msg_0.type = 84U;
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
    msg.setTimeStamp(0.242498833608);
    msg.setSource(1185U);
    msg.setSourceEntity(140U);
    msg.setDestination(26605U);
    msg.setDestinationEntity(31U);
    msg.type = 92U;
    msg.comm_interface = 36078U;
    msg.model = 48578U;
    msg.list.assign("FXRYDOVXWCEUXTLSCGCJHXNFYZUDDUKRROJDZQXPECTOWVRZNQMEZZZFRYWYQUTLMAYXLIFNNIEJKLKOKMPUWSXGBRKEOBAALKYVPSHTNHZOANGTQBDCAXKXRQAVISNAVFLIBUCNLHJG");

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
    msg.setTimeStamp(0.729533564119);
    msg.setSource(7671U);
    msg.setSourceEntity(176U);
    msg.setDestination(30032U);
    msg.setDestinationEntity(103U);
    msg.type = 153U;
    msg.comm_interface = 18558U;
    msg.model = 13220U;
    msg.list.assign("ZDXTWHYDZHPZPQETVFLMGPAJMYHRLPBQVWHRKLUDXZFETC");

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
    msg.setTimeStamp(0.224169771053);
    msg.setSource(53529U);
    msg.setSourceEntity(175U);
    msg.setDestination(57995U);
    msg.setDestinationEntity(52U);
    msg.type = 148U;
    msg.comm_interface = 24852U;
    msg.model = 19337U;
    msg.list.assign("EQMSZLYWBHABUKTSQRZFPSWNCVRJOZZNQEHAISHAAPZTPRZXFGKIXGEOTVVCMOGXHYPYBJ");

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
    msg.setTimeStamp(0.0531229171729);
    msg.setSource(1940U);
    msg.setSourceEntity(204U);
    msg.setDestination(19463U);
    msg.setDestinationEntity(111U);
    msg.type = 221U;
    msg.req_id = 802606114U;
    msg.ttl = 8155U;
    msg.code = 226U;
    msg.destination.assign("EBDNGBAMUKYOBALNQQXIQMOGPGAGYQNNDQVDDMWFHVFJBCCKMJHMIIYFKRRWPDAOLBUHPNLVECPZLOIKTUNWFRJZFQYIOZRJAAESXDVDNLKTEZPYURNRWULSTCWPVOXTGZVSUXIECSTMYJPUNIEJOUXQXEVZBIHYSDGRXWSPTXHQWJGMGKPTTVAEEKCIHLJDVBWYCAUUSOHFYZDCSFFBGFCSOBZJVXJGQMPZKSKBMMCWQR");
    msg.source.assign("KDRXNKKZVBHPFJHLRMQRJCLEWDDTGAMYLSDVIDOSKTLTDBPGSOCKPJYRQUCZELNAFOCWLGECURHAHYIKOZWSRYIAQMWYLACUPXPBOVJVZLTKYJIUQXLSJBMDQRXYRUGOSRPGZGZNBWUXPZQUWZYXBSOIGMSFFHQJESWRPUAKFHVUBMCGBKETVNAKEICLHAFNWOQQGMTQFID");
    msg.acknowledge = 131U;
    msg.status = 152U;
    const char tmp_msg_0[] = {67, -89, -109, -34, -104, 116, 96, -77, 18, -14, 104, 7, 15, 74, 52, 90, 54, -96, -88, 8, -75, -38, 94, -117, 24, -126, 66, 78, -106, -103, -80, 7, 36, -13, 126, 72, -40, -100, 45, -58, 89, -109, -98, 71, -120, 112, 106, -70, 51, 67, 31, 64, 69, -50, -104, -122, 107, 58, 64, 43, 73, -86, -18, -11, -7, -95, 28, -17, -107, -114, -9, -63, 109, -73, 89, -101, -10, -22, 100, -113, 103, -120, 65, -80, -106, -100, 54, -59, -97, -27, 42, -95, 48, -79, -5, -50, 120, -55, -88, -113, -76, 89, 36, -123, -58, 5, 96, -21, -29, -63, 48, -116, -76, -17, 18, -90, -25, -53, -82, 20, -26, 49, 40, -83, -27, -97, -24, -78, 117, 114, -88, 72, 102, -100, -94, 78, -71, 13, 86, 66, 64, 57, 60, -123, -120, -102, 118, 37, -118, 74, 92, -11, 79, -84, -18, -8, 54, 75, -117, -128, -114, -80};
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
    msg.setTimeStamp(0.928282703353);
    msg.setSource(408U);
    msg.setSourceEntity(8U);
    msg.setDestination(2926U);
    msg.setDestinationEntity(168U);
    msg.type = 157U;
    msg.req_id = 1040142518U;
    msg.ttl = 7463U;
    msg.code = 143U;
    msg.destination.assign("TXQFNNHPKMTRRGHSBDNEEPWAGCTDCOHVEQNQVXOJQKZMAMZVSFIUICUGVTLIFFHHGSSSZNIOYRMNWDYFPGFWMHDDRLDAQWVKKDPYEGXU");
    msg.source.assign("XHNFTGCHVMHDLIEDOFDSPGTAVJKVALCUMLYMGPJVYCEACNLSXJZIYRTEWMGFVPYNADJOUFIHFZTZGZFBFUIQWAQBTDNOPBJURXYTBBSECLLEHWJKCSWKNXHRAGVMLERMCZYGUTEHOJXKBZWOIMPZBKDNRAKZGDWIVRX");
    msg.acknowledge = 112U;
    msg.status = 18U;
    const char tmp_msg_0[] = {-30, 96, 91, 48, -107, 110, -114, -120, 79, -127, 54, 92, -76, -73, -38, -126, -113, -127, -99, -61, 98, 106, 36, 75, -57, -58, 48, 61, -42, 98, 106, 112, 14, 48, -88, 23, 57, 4, -5, 26, -75, -38, 124, -34, -37, 55, 51, 123, -122, -125, 31, 111, 26, 17, 76, -11, 43, -106, -9, -64, -54, -16, 35, -40, -67, 123, 4, -28, -62, 118, 100, 58, -33, -67, -53, 46, -47, -1, -86, -39, 99, 104, -70, 58, -39, -127, -46, 11, -31, -50, 89, -70, 100, -120, 120, 45, 47, -121, 1, -15, 28, 20, -46, -72, -37, -53, -5, -117, 84, -19, -39, -95, 110, -117, -87, 73, -100, 40, 52, 103, 3, 113, -15, -92, 124, -9, -20, -21, 33, -44, -119, 113, 82, 38, -35, 113, 34, -89, -51, -94, 17, 85, 80, 73, 77, 70, -24, 82, 24, -66, 24, -31, 38, 115, 41, -77, -109, 47, -45, 66, 23, 86, 6, -97, 42, 31, 54, -68, 90, 49, 82, -85, 88, -25, 114, 36, -93, 116, -120, 93, 122, -94, 0, -67, -89, 56, 72, 21, 69, -98, 74, 43, -117, 93, -128, -25, -49, 34, -93, -63, 66, 2, -64, -117, -107, -67, 79, 114, 107, 112, 60, 110, 74, -52, -122, -22, -83, 115, 112, 40, 119, -26, -80};
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
    msg.setTimeStamp(0.775733760791);
    msg.setSource(40001U);
    msg.setSourceEntity(38U);
    msg.setDestination(25770U);
    msg.setDestinationEntity(66U);
    msg.type = 94U;
    msg.req_id = 527398754U;
    msg.ttl = 26538U;
    msg.code = 52U;
    msg.destination.assign("VVHXVEQWEBLZATPXHBLDGHGWBZZSYIFWBCVPCKLZKYPLVNJLUBZ");
    msg.source.assign("GDCFNRQHELYOAYALCIDLTFJMEKLNZIEJVKTARONUSEMTWNKBQOZXRVSQAOWSVWBNXRJBEMYAPMKGYE");
    msg.acknowledge = 170U;
    msg.status = 236U;
    const char tmp_msg_0[] = {9, -109, 8, -93, 97, 65, 2, 91, 28, -50, -31};
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
    msg.setTimeStamp(0.895352243184);
    msg.setSource(56397U);
    msg.setSourceEntity(152U);
    msg.setDestination(57827U);
    msg.setDestinationEntity(118U);
    msg.id = 30U;
    msg.range = 0.80082224322;

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
    msg.setTimeStamp(0.110091036773);
    msg.setSource(64133U);
    msg.setSourceEntity(237U);
    msg.setDestination(54353U);
    msg.setDestinationEntity(82U);
    msg.id = 117U;
    msg.range = 0.474673764298;

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
    msg.setTimeStamp(0.592439382486);
    msg.setSource(43113U);
    msg.setSourceEntity(103U);
    msg.setDestination(50593U);
    msg.setDestinationEntity(224U);
    msg.id = 240U;
    msg.range = 0.367702174872;

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
    msg.setTimeStamp(0.245427039296);
    msg.setSource(61226U);
    msg.setSourceEntity(180U);
    msg.setDestination(28704U);
    msg.setDestinationEntity(125U);
    msg.beacon.assign("DYRNGYYYNYDGSJKOIFZIPDWUTTBXRPXXGKLTHESDJCOKNDEVUHCMBJJBBNTNHKDHLXYYSVOAYYLVWQVPWEQJEOEZRNKQFAWSVGNWPLJRMMIQEVPDHNIONLSJFMVZAIOPAPJOUFZLWURFFSKFCATAUZCXTAUWOMUHGBTXBSJUZIOZSUJCXEKGAPQM");
    msg.lat = 0.0426421325019;
    msg.lon = 0.939689049303;
    msg.depth = 0.39501816823;
    msg.query_channel = 133U;
    msg.reply_channel = 123U;
    msg.transponder_delay = 140U;

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
    msg.setTimeStamp(0.336944836437);
    msg.setSource(796U);
    msg.setSourceEntity(204U);
    msg.setDestination(16949U);
    msg.setDestinationEntity(222U);
    msg.beacon.assign("WMXWAJLVZESJXYMPAMYBBVDEUAWDPZAUEYUZCRKPEKHCIGFNSMKJYTAAHOSTVAJWFVBEMPHORDKMHRGYIPUVKNUKRLSNNWVVJMQGJHUJXVFYRLFBDDYMQRJXWUGQYXOCOBOCQSREBNNLLIQGGBILHSANFEGNXUDQTFCIUSWDCMLUXTIBPJKYEAFPSZF");
    msg.lat = 0.525430307551;
    msg.lon = 0.429614767904;
    msg.depth = 0.654237834237;
    msg.query_channel = 63U;
    msg.reply_channel = 87U;
    msg.transponder_delay = 161U;

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
    msg.setTimeStamp(0.257689994265);
    msg.setSource(23401U);
    msg.setSourceEntity(98U);
    msg.setDestination(59949U);
    msg.setDestinationEntity(139U);
    msg.beacon.assign("BZYBQTVAVYIFVICNEGJHQSCUYDHXZSKWFIHOGNSMHVJABKCQGMCINUWSBKDBLDYWOCEWZBMNMFPSCXHXMCREDDRAIPKPTUVKTLMZXYNLJZKJAEJGMGOWECMAXROKEVAOFERHTPIIXLUTBQYZASTRDFHVFPERWPNUMSHSWJUGXGWONYKDPISABGFLZLYBJOQOPJDQHQTGCWSFNOJVXLDXLRQINNQPXWVELTQZKJRRKUUTYOFURLZ");
    msg.lat = 0.139289006387;
    msg.lon = 0.0519661684747;
    msg.depth = 0.264968641194;
    msg.query_channel = 179U;
    msg.reply_channel = 97U;
    msg.transponder_delay = 104U;

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
    msg.setTimeStamp(0.0330162556956);
    msg.setSource(39867U);
    msg.setSourceEntity(38U);
    msg.setDestination(44244U);
    msg.setDestinationEntity(14U);
    msg.op = 146U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LQCXGKDCRELMPHPADAUNGNRDUZEWLFVSYNMQFUYKAKXVBXEOXJEGHNWSQTRDHFECZJZQVUQGEOSBHBVAHWLJPXJIDFYAYURPSZXGJYOTHTTOESIPIBXVBKCEZRWDOAZATIBHRRDOPNAULXDPEYDMVMWGWO");
    tmp_msg_0.lat = 0.24848096743;
    tmp_msg_0.lon = 0.944691538253;
    tmp_msg_0.depth = 0.399415024251;
    tmp_msg_0.query_channel = 222U;
    tmp_msg_0.reply_channel = 120U;
    tmp_msg_0.transponder_delay = 163U;
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
    msg.setTimeStamp(0.426249164582);
    msg.setSource(39418U);
    msg.setSourceEntity(245U);
    msg.setDestination(20693U);
    msg.setDestinationEntity(242U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.927498648543);
    msg.setSource(10971U);
    msg.setSourceEntity(173U);
    msg.setDestination(55390U);
    msg.setDestinationEntity(121U);
    msg.op = 142U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HEPNUZVOUYZICVZRDXZGKMRXTQIEALCSONVARHSGSJWGIOC");
    tmp_msg_0.lat = 0.865650484002;
    tmp_msg_0.lon = 0.182089478453;
    tmp_msg_0.depth = 0.922766922015;
    tmp_msg_0.query_channel = 213U;
    tmp_msg_0.reply_channel = 246U;
    tmp_msg_0.transponder_delay = 74U;
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
    msg.setTimeStamp(0.764557874245);
    msg.setSource(42160U);
    msg.setSourceEntity(177U);
    msg.setDestination(42968U);
    msg.setDestinationEntity(253U);
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.160998741902;
    tmp_msg_0.units = 102U;
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
    msg.setTimeStamp(0.0573749443127);
    msg.setSource(63701U);
    msg.setSourceEntity(167U);
    msg.setDestination(22087U);
    msg.setDestinationEntity(135U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.192443566948;
    tmp_msg_0.lon = 0.140139417638;
    tmp_msg_0.height = 0.631872516698;
    tmp_msg_0.x = 0.458592495345;
    tmp_msg_0.y = 0.499219831359;
    tmp_msg_0.z = 0.715809096902;
    tmp_msg_0.phi = 0.449088177517;
    tmp_msg_0.theta = 0.966766519062;
    tmp_msg_0.psi = 0.763732852315;
    tmp_msg_0.u = 0.529876413911;
    tmp_msg_0.v = 0.924517944116;
    tmp_msg_0.w = 0.611715695045;
    tmp_msg_0.vx = 0.61369504262;
    tmp_msg_0.vy = 0.363125876631;
    tmp_msg_0.vz = 0.0271972935167;
    tmp_msg_0.p = 0.0629803633728;
    tmp_msg_0.q = 0.467669133235;
    tmp_msg_0.r = 0.489682607437;
    tmp_msg_0.depth = 0.152857441097;
    tmp_msg_0.alt = 0.409128859172;
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
    msg.setTimeStamp(0.364703435022);
    msg.setSource(28363U);
    msg.setSourceEntity(35U);
    msg.setDestination(64989U);
    msg.setDestinationEntity(70U);
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.438184014328;
    tmp_msg_0.x = 0.535077358409;
    tmp_msg_0.y = 0.361239343097;
    tmp_msg_0.z = 0.128309015731;
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
    msg.setTimeStamp(0.485312472317);
    msg.setSource(64291U);
    msg.setSourceEntity(73U);
    msg.setDestination(5119U);
    msg.setDestinationEntity(147U);
    msg.op = 209U;
    msg.system.assign("BKWHRWEPKGBMNXBOAC");
    msg.range = 0.550541321397;
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 52U;
    tmp_msg_0.text.assign("YHHSZDZCBFGQCJZYSUTSOAKNIKWHCDYJBAVSRBJIYAZJUJXXHELTQCUQVXFOMDDAFGROBDLVGPHWDSWVMJLNPSBFNPYEKNQQAWIWIMQVRGTWAIHTXKRYGIPVMZVTPSNAQDSXMMBXCYPFLLUOOZWKQZJTFEPZNUEXZRLGQTVUFXQELW");
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
    msg.setTimeStamp(0.250685589036);
    msg.setSource(4582U);
    msg.setSourceEntity(202U);
    msg.setDestination(39654U);
    msg.setDestinationEntity(229U);
    msg.op = 2U;
    msg.system.assign("RHVOHTUHMXYDTFWKDYMKQRHFCLQXWJTBCZZSIVSFNGFXIRTCOHZEXVPZZQPIBNZDNJLGJVAKWEJYROLREOYWWOJYNUCUEXOHFSLYOZGAIHJUJOAGTLQIPNDPBQGHHMUYXBNIXHCUSITKKGQDMETDXGAOQRQQSQUAZJFPLUMVRVSVTEKRJAWVUDWWMENFDYFBCRFCSPOBGKVPKMCPISCRMBYWAAPNL");
    msg.range = 0.00871661500769;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 1770824543U;
    tmp_msg_0.start_lat = 0.958202743676;
    tmp_msg_0.start_lon = 0.451224388308;
    tmp_msg_0.start_z = 0.736246401791;
    tmp_msg_0.start_z_units = 81U;
    tmp_msg_0.end_lat = 0.299509779681;
    tmp_msg_0.end_lon = 0.73552557438;
    tmp_msg_0.end_z = 0.296400621039;
    tmp_msg_0.end_z_units = 151U;
    tmp_msg_0.lradius = 0.848986394102;
    tmp_msg_0.flags = 79U;
    tmp_msg_0.x = 0.783096661712;
    tmp_msg_0.y = 0.167895802036;
    tmp_msg_0.z = 0.00721712465731;
    tmp_msg_0.vx = 0.321244470758;
    tmp_msg_0.vy = 0.822755913877;
    tmp_msg_0.vz = 0.0849261455587;
    tmp_msg_0.course_error = 0.0148233411778;
    tmp_msg_0.eta = 6642U;
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
    msg.setTimeStamp(0.738059156069);
    msg.setSource(61378U);
    msg.setSourceEntity(203U);
    msg.setDestination(51111U);
    msg.setDestinationEntity(58U);
    msg.op = 75U;
    msg.system.assign("OQWRMRTTRXEIZAFOQNSSLXNOXIIEPNWFQLWFFIBBPYVQRDBYMVHZULGUYVITFLGOXVPDRWSDHTIQJWXKCWWZKYJCVUVXUCBBBLKZJMKRRJFVBGWCXXMPNEUTERLEHOAMFHHMSSPOHXOJETZMIDVZYPHSNZHYNIIMCRSQJDKVTLGVKWNPEDBCZQAEFGABJSYPNCYTQOJYKUMWDEZUQHKCMGAORNGGUS");
    msg.range = 0.59466118802;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.791189157959;
    tmp_msg_0.width = 0.701665932305;
    tmp_msg_0.length = 0.76335967053;
    tmp_msg_0.bearing = 0.0346908274851;
    tmp_msg_0.pxl = 8425;
    tmp_msg_0.encoding = 99U;
    const char tmp_tmp_msg_0_0[] = {-70, -9, 77, -40, 48, 42, 66, -29, 22, -49, -109, 82, -39, -116, -19, -73, 95, 115, -35, -31, 103, -94, -12, -111, 20, -76, -84, -105, -51, -31, -75, 88, -96, 123, 63, -29, 1, -89, 34, -100, -37, 74, 90, -16, 71, 34, 13, -19, -22, -82, 123, 56, 86, 101, 27, -118, -11, -15, -50, 101, 16, -74, -63, -15, 16, 47, 100, 12, -104, -70, 42, -89, -66, -68, -56, -94, 56, 85, -119, -111, 26, -30, 6, -58, -101, -51, -16, 103, -37, 37, -108, -22, 41, -73, 93, 74, -70, 3, 45, -26, -66, 24, -51, -34, -85, -30, -43, -96, -29, -90, 101, 66, 123, 123, -67, -45, -18, -51, -119, 57, -96, 125, -19, 48, 8, -53, -26, 112, -12, 24, 52, -58, 36, 64, 61, -36, 108, 56, -21, 64, -26, -121, 61, -75, 35, 55, -12, 97, -5, -128, -120, 41, -128, -66, -109, 115, -66, 112, 44, -13, -107, -42, -58, -53, 100, -70, -13, 19, -30, 102, 28, 35, 86, -38, -122, 98, 14, -34, 99, 94, -26, 52, 66, 20, -55, 58, 28, 102, -109, -46, -124, -107, -52, -74, 45, 18, 32, 97};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.0436772516857);
    msg.setSource(54636U);
    msg.setSourceEntity(157U);
    msg.setDestination(10606U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.522273286492);
    msg.setSource(25551U);
    msg.setSourceEntity(197U);
    msg.setDestination(10453U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.0129750849671);
    msg.setSource(13202U);
    msg.setSourceEntity(116U);
    msg.setDestination(49539U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.758577637249);
    msg.setSource(56538U);
    msg.setSourceEntity(96U);
    msg.setDestination(65029U);
    msg.setDestinationEntity(25U);
    msg.list.assign("LGWIIYPCHANJYWTSZKUEZOLQYRNOROQXLUDVVPWVGHXRMFUSDFSJGVZTVNYUXCXFYZCMMZGWFRXONWAOLTLKQKRXEAWICJLMEDVLJEWPBQMBECAGGVFQMSJCCLNAKSVTEEHKGNISIELTYDHJNIXUMFTPISQMPOAQYDXOCHZSTKUXNQRBGDEHJVXVJUKKPAAGPUNHZQYHGBSJIUOBF");

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
    msg.setTimeStamp(0.330917817989);
    msg.setSource(28651U);
    msg.setSourceEntity(19U);
    msg.setDestination(15819U);
    msg.setDestinationEntity(83U);
    msg.list.assign("OPFZZZEACJXPWBQPNDBCZNVEHSFTCFRMGEVWYJCHAKDYMXTN");

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
    msg.setTimeStamp(0.410117256242);
    msg.setSource(59131U);
    msg.setSourceEntity(85U);
    msg.setDestination(64709U);
    msg.setDestinationEntity(171U);
    msg.list.assign("JDBYMNVFLZSODEBASOWNVFEBTDHNMDZVDUTFIIFGYBGHYOXKICXLPCQWZUXLXZPFNKDEGFWIRZTRTHPYAPNJYDELNRLSUIHJNPGVMHPBLAXAOMQRRCNJKWXIYELGUKASLABRJIEWJRVWTDQMHSMPJOGTCKUKJQWYWPHIRGUYUZBSFYEMJQOPKSVIADCCLFRAQUUCDCHYQFKNBGZUWTOVPBQOCEKMRKCAZALFV");

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
    msg.setTimeStamp(0.830008917226);
    msg.setSource(48680U);
    msg.setSourceEntity(17U);
    msg.setDestination(3729U);
    msg.setDestinationEntity(223U);
    msg.peer.assign("DOAFKVZDTBNEEEPSMTNLQWGYNIXYHGICTJDHRTIADUSTSBPJDJYCTCQOVZU");
    msg.rssi = 0.00935579576915;
    msg.integrity = 18871U;

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
    msg.setTimeStamp(0.631130308275);
    msg.setSource(4580U);
    msg.setSourceEntity(74U);
    msg.setDestination(22522U);
    msg.setDestinationEntity(128U);
    msg.peer.assign("EDIDZPCBUYMYUVTEYKOLGTVJDBCEZZBLROWNRBJYHKPQCJTQXFHWYAKWBLUUOFNJTUJBDKCRHQFNAKZDRORS");
    msg.rssi = 0.572587649367;
    msg.integrity = 63195U;

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
    msg.setTimeStamp(0.897985380049);
    msg.setSource(2377U);
    msg.setSourceEntity(143U);
    msg.setDestination(18177U);
    msg.setDestinationEntity(253U);
    msg.peer.assign("ZPYBBODQOTYEVDBDKILCLDRMXXKNVLXVGIIWBZKQJUIRTUBOODMMLSAGSLMBAXSFWLNZODFMADRPZWZXRILGHCSNRATFTJEVXMBZKDRMGLETJWHEGBCRJOSYXZFMWPNRUGHHWEZEOABPGXEKOHCVVTJFAUPNRJKTDNRFTHCJXAHFSFAVKQIYUWQUQJQQPNCDCJXGEVSWSSYKTYVLHLYIZCINUQN");
    msg.rssi = 0.129148312736;
    msg.integrity = 49810U;

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
    msg.setTimeStamp(0.409905350531);
    msg.setSource(17278U);
    msg.setSourceEntity(145U);
    msg.setDestination(19499U);
    msg.setDestinationEntity(155U);
    msg.value = -9000;

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
    msg.setTimeStamp(0.0330637430605);
    msg.setSource(47801U);
    msg.setSourceEntity(3U);
    msg.setDestination(20467U);
    msg.setDestinationEntity(54U);
    msg.value = 28389;

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
    msg.setTimeStamp(0.536748953806);
    msg.setSource(37006U);
    msg.setSourceEntity(209U);
    msg.setDestination(49133U);
    msg.setDestinationEntity(122U);
    msg.value = -11226;

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
    msg.setTimeStamp(0.369038907006);
    msg.setSource(62721U);
    msg.setSourceEntity(0U);
    msg.setDestination(32608U);
    msg.setDestinationEntity(236U);
    msg.value = 0.882241384739;

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
    msg.setTimeStamp(0.605158782363);
    msg.setSource(15963U);
    msg.setSourceEntity(102U);
    msg.setDestination(61171U);
    msg.setDestinationEntity(2U);
    msg.value = 0.755742914791;

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
    msg.setTimeStamp(0.737945559854);
    msg.setSource(52016U);
    msg.setSourceEntity(226U);
    msg.setDestination(9569U);
    msg.setDestinationEntity(118U);
    msg.value = 0.0691403090397;

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
    msg.setTimeStamp(0.394247859986);
    msg.setSource(30647U);
    msg.setSourceEntity(19U);
    msg.setDestination(62164U);
    msg.setDestinationEntity(238U);
    msg.value = 0.407639874386;

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
    msg.setTimeStamp(0.388749908904);
    msg.setSource(4070U);
    msg.setSourceEntity(153U);
    msg.setDestination(20880U);
    msg.setDestinationEntity(105U);
    msg.value = 0.711477595264;

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
    msg.setTimeStamp(0.259516764013);
    msg.setSource(28452U);
    msg.setSourceEntity(46U);
    msg.setDestination(52951U);
    msg.setDestinationEntity(10U);
    msg.value = 0.113617013463;

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
    msg.setTimeStamp(0.125302535538);
    msg.setSource(54168U);
    msg.setSourceEntity(126U);
    msg.setDestination(39690U);
    msg.setDestinationEntity(124U);
    msg.validity = 45680U;
    msg.type = 92U;
    msg.utc_year = 64305U;
    msg.utc_month = 3U;
    msg.utc_day = 212U;
    msg.utc_time = 0.148572661206;
    msg.lat = 0.53621804136;
    msg.lon = 0.317273595838;
    msg.height = 0.439968956432;
    msg.satellites = 33U;
    msg.cog = 0.330382131755;
    msg.sog = 0.332382510582;
    msg.hdop = 0.703337768953;
    msg.vdop = 0.129196399214;
    msg.hacc = 0.558668868525;
    msg.vacc = 0.588424124601;

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
    msg.setTimeStamp(0.825159263457);
    msg.setSource(45039U);
    msg.setSourceEntity(212U);
    msg.setDestination(59390U);
    msg.setDestinationEntity(213U);
    msg.validity = 60968U;
    msg.type = 245U;
    msg.utc_year = 61394U;
    msg.utc_month = 139U;
    msg.utc_day = 97U;
    msg.utc_time = 0.25548703466;
    msg.lat = 0.310164020905;
    msg.lon = 0.886049637674;
    msg.height = 0.826747217081;
    msg.satellites = 67U;
    msg.cog = 0.675941032853;
    msg.sog = 0.910440931992;
    msg.hdop = 0.567003480286;
    msg.vdop = 0.55105078427;
    msg.hacc = 0.87940481976;
    msg.vacc = 0.893423581696;

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
    msg.setTimeStamp(0.146029896786);
    msg.setSource(63435U);
    msg.setSourceEntity(220U);
    msg.setDestination(37827U);
    msg.setDestinationEntity(137U);
    msg.validity = 8531U;
    msg.type = 169U;
    msg.utc_year = 23629U;
    msg.utc_month = 148U;
    msg.utc_day = 166U;
    msg.utc_time = 0.950527997636;
    msg.lat = 0.225757986112;
    msg.lon = 0.215027755657;
    msg.height = 0.119455699461;
    msg.satellites = 139U;
    msg.cog = 0.823880396055;
    msg.sog = 0.86688767177;
    msg.hdop = 0.268722943093;
    msg.vdop = 0.0624514656437;
    msg.hacc = 0.366616960869;
    msg.vacc = 0.504761694894;

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
    msg.setTimeStamp(0.330340742638);
    msg.setSource(17164U);
    msg.setSourceEntity(155U);
    msg.setDestination(23052U);
    msg.setDestinationEntity(0U);
    msg.time = 0.744817556684;
    msg.phi = 0.951642641668;
    msg.theta = 0.964931772107;
    msg.psi = 0.759703763148;
    msg.psi_magnetic = 0.752601490492;

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
    msg.setTimeStamp(0.389279854135);
    msg.setSource(22515U);
    msg.setSourceEntity(182U);
    msg.setDestination(50136U);
    msg.setDestinationEntity(177U);
    msg.time = 0.0745064605254;
    msg.phi = 0.690061411348;
    msg.theta = 0.525400511416;
    msg.psi = 0.301613135947;
    msg.psi_magnetic = 0.710221449305;

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
    msg.setTimeStamp(0.207336439825);
    msg.setSource(18193U);
    msg.setSourceEntity(194U);
    msg.setDestination(50262U);
    msg.setDestinationEntity(23U);
    msg.time = 0.771970677455;
    msg.phi = 0.29832252633;
    msg.theta = 0.907673145257;
    msg.psi = 0.267929933228;
    msg.psi_magnetic = 0.274404531945;

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
    msg.setTimeStamp(0.557666146231);
    msg.setSource(47446U);
    msg.setSourceEntity(36U);
    msg.setDestination(56339U);
    msg.setDestinationEntity(240U);
    msg.time = 0.457550883957;
    msg.x = 0.451938811715;
    msg.y = 0.332552078548;
    msg.z = 0.314416595691;
    msg.timestep = 0.311973449032;

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
    msg.setTimeStamp(0.631702376396);
    msg.setSource(47515U);
    msg.setSourceEntity(34U);
    msg.setDestination(47082U);
    msg.setDestinationEntity(59U);
    msg.time = 0.179062437459;
    msg.x = 0.147362737536;
    msg.y = 0.670054622935;
    msg.z = 0.363464146952;
    msg.timestep = 0.987392941455;

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
    msg.setTimeStamp(0.933183454835);
    msg.setSource(3067U);
    msg.setSourceEntity(17U);
    msg.setDestination(4010U);
    msg.setDestinationEntity(118U);
    msg.time = 0.15302480362;
    msg.x = 0.541429324764;
    msg.y = 0.604012763029;
    msg.z = 0.25390529531;
    msg.timestep = 0.167892081206;

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
    msg.setTimeStamp(0.84546271019);
    msg.setSource(38786U);
    msg.setSourceEntity(186U);
    msg.setDestination(30753U);
    msg.setDestinationEntity(37U);
    msg.time = 0.661249127432;
    msg.x = 0.956572200473;
    msg.y = 0.887652928326;
    msg.z = 0.724796293756;

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
    msg.setTimeStamp(0.10944755588);
    msg.setSource(32226U);
    msg.setSourceEntity(86U);
    msg.setDestination(58052U);
    msg.setDestinationEntity(46U);
    msg.time = 0.659795840531;
    msg.x = 0.00964000982663;
    msg.y = 0.12732487749;
    msg.z = 0.167779636709;

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
    msg.setTimeStamp(0.817420717896);
    msg.setSource(42459U);
    msg.setSourceEntity(12U);
    msg.setDestination(16129U);
    msg.setDestinationEntity(90U);
    msg.time = 0.391830716115;
    msg.x = 0.608418106683;
    msg.y = 0.589791159141;
    msg.z = 0.532544367191;

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
    msg.setTimeStamp(0.00583386812716);
    msg.setSource(23002U);
    msg.setSourceEntity(128U);
    msg.setDestination(41022U);
    msg.setDestinationEntity(247U);
    msg.time = 0.159433638151;
    msg.x = 0.1320863937;
    msg.y = 0.929728959196;
    msg.z = 0.616605346594;

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
    msg.setTimeStamp(0.809175876522);
    msg.setSource(43195U);
    msg.setSourceEntity(132U);
    msg.setDestination(49235U);
    msg.setDestinationEntity(108U);
    msg.time = 0.590242087285;
    msg.x = 0.0609765716334;
    msg.y = 0.848555708461;
    msg.z = 0.970927035056;

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
    msg.setTimeStamp(0.622055080281);
    msg.setSource(60880U);
    msg.setSourceEntity(187U);
    msg.setDestination(42462U);
    msg.setDestinationEntity(171U);
    msg.time = 0.389530148106;
    msg.x = 0.307340583019;
    msg.y = 0.134940388114;
    msg.z = 0.174189843683;

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
    msg.setTimeStamp(0.909136438309);
    msg.setSource(40316U);
    msg.setSourceEntity(150U);
    msg.setDestination(31148U);
    msg.setDestinationEntity(201U);
    msg.time = 0.942623074332;
    msg.x = 0.955134608042;
    msg.y = 0.52214543007;
    msg.z = 0.397355994849;

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
    msg.setTimeStamp(0.993417636527);
    msg.setSource(11426U);
    msg.setSourceEntity(110U);
    msg.setDestination(42372U);
    msg.setDestinationEntity(136U);
    msg.time = 0.0327040694773;
    msg.x = 0.711494858188;
    msg.y = 0.742273209781;
    msg.z = 0.519431530431;

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
    msg.setTimeStamp(0.168551461803);
    msg.setSource(52197U);
    msg.setSourceEntity(228U);
    msg.setDestination(59670U);
    msg.setDestinationEntity(227U);
    msg.time = 0.727284921723;
    msg.x = 0.833972629962;
    msg.y = 0.907016379915;
    msg.z = 0.0350363425161;

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
    msg.setTimeStamp(0.945459033138);
    msg.setSource(50649U);
    msg.setSourceEntity(69U);
    msg.setDestination(8496U);
    msg.setDestinationEntity(5U);
    msg.validity = 132U;
    msg.x = 0.391994758123;
    msg.y = 0.215975610045;
    msg.z = 0.255859086767;

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
    msg.setTimeStamp(0.639684505142);
    msg.setSource(23733U);
    msg.setSourceEntity(49U);
    msg.setDestination(8492U);
    msg.setDestinationEntity(116U);
    msg.validity = 203U;
    msg.x = 0.451169552269;
    msg.y = 0.587453399284;
    msg.z = 0.231688369098;

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
    msg.setTimeStamp(0.560805842513);
    msg.setSource(53450U);
    msg.setSourceEntity(116U);
    msg.setDestination(15889U);
    msg.setDestinationEntity(220U);
    msg.validity = 35U;
    msg.x = 0.936041011535;
    msg.y = 0.539301417299;
    msg.z = 0.384274483952;

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
    msg.setTimeStamp(0.0577626684632);
    msg.setSource(1666U);
    msg.setSourceEntity(177U);
    msg.setDestination(23832U);
    msg.setDestinationEntity(119U);
    msg.validity = 165U;
    msg.x = 0.320397926031;
    msg.y = 0.414615728826;
    msg.z = 0.550434337433;

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
    msg.setTimeStamp(0.540187934538);
    msg.setSource(11214U);
    msg.setSourceEntity(109U);
    msg.setDestination(64155U);
    msg.setDestinationEntity(117U);
    msg.validity = 102U;
    msg.x = 0.0376272702202;
    msg.y = 0.0166798904174;
    msg.z = 0.802920935161;

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
    msg.setTimeStamp(0.71907252148);
    msg.setSource(40023U);
    msg.setSourceEntity(219U);
    msg.setDestination(8425U);
    msg.setDestinationEntity(69U);
    msg.validity = 188U;
    msg.x = 0.278395022853;
    msg.y = 0.0901817942349;
    msg.z = 0.719637124128;

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
    msg.setTimeStamp(0.0173236931567);
    msg.setSource(26954U);
    msg.setSourceEntity(68U);
    msg.setDestination(9322U);
    msg.setDestinationEntity(83U);
    msg.time = 0.254270463944;
    msg.x = 0.839320027942;
    msg.y = 0.731504221807;
    msg.z = 0.222484316432;

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
    msg.setTimeStamp(0.609163219104);
    msg.setSource(7823U);
    msg.setSourceEntity(226U);
    msg.setDestination(62853U);
    msg.setDestinationEntity(115U);
    msg.time = 0.670939937232;
    msg.x = 0.041441952506;
    msg.y = 0.758018316427;
    msg.z = 0.773652509227;

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
    msg.setTimeStamp(0.54793801478);
    msg.setSource(4292U);
    msg.setSourceEntity(48U);
    msg.setDestination(58412U);
    msg.setDestinationEntity(168U);
    msg.time = 0.517378117181;
    msg.x = 0.558019368971;
    msg.y = 0.454424849479;
    msg.z = 0.244470913217;

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
    msg.setTimeStamp(0.22616496044);
    msg.setSource(334U);
    msg.setSourceEntity(118U);
    msg.setDestination(36348U);
    msg.setDestinationEntity(0U);
    msg.validity = 126U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.155320432553;
    tmp_msg_0.y = 0.570756163965;
    tmp_msg_0.z = 0.198182982046;
    tmp_msg_0.phi = 0.967347841897;
    tmp_msg_0.theta = 0.357575120061;
    tmp_msg_0.psi = 0.685716105556;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.362063789188;
    tmp_msg_1.beam_height = 0.718225671193;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0581950422233;

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
    msg.setTimeStamp(0.0669348882191);
    msg.setSource(28969U);
    msg.setSourceEntity(182U);
    msg.setDestination(23626U);
    msg.setDestinationEntity(51U);
    msg.validity = 63U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.924997453675;
    tmp_msg_0.y = 0.790501522358;
    tmp_msg_0.z = 0.329503428271;
    tmp_msg_0.phi = 0.276367960929;
    tmp_msg_0.theta = 0.546658004648;
    tmp_msg_0.psi = 0.541526709598;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.968344265288;
    tmp_msg_1.beam_height = 0.445553289662;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.551565068367;

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
    msg.setTimeStamp(0.992821535892);
    msg.setSource(47579U);
    msg.setSourceEntity(53U);
    msg.setDestination(32006U);
    msg.setDestinationEntity(12U);
    msg.validity = 227U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.243176162975;
    tmp_msg_0.beam_height = 0.930281228038;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.894566446623;

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
    msg.setTimeStamp(0.952733060633);
    msg.setSource(43283U);
    msg.setSourceEntity(146U);
    msg.setDestination(47523U);
    msg.setDestinationEntity(83U);
    msg.value = 0.025823910081;

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
    msg.setTimeStamp(0.911681408933);
    msg.setSource(62258U);
    msg.setSourceEntity(240U);
    msg.setDestination(18146U);
    msg.setDestinationEntity(14U);
    msg.value = 0.29349522287;

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
    msg.setTimeStamp(0.0339139334664);
    msg.setSource(18257U);
    msg.setSourceEntity(199U);
    msg.setDestination(38205U);
    msg.setDestinationEntity(176U);
    msg.value = 0.368262506814;

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
    msg.setTimeStamp(0.998214628132);
    msg.setSource(22495U);
    msg.setSourceEntity(117U);
    msg.setDestination(47041U);
    msg.setDestinationEntity(26U);
    msg.value = 0.74794634034;

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
    msg.setTimeStamp(0.137343231025);
    msg.setSource(53380U);
    msg.setSourceEntity(131U);
    msg.setDestination(9322U);
    msg.setDestinationEntity(215U);
    msg.value = 0.569658998509;

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
    msg.setTimeStamp(0.862539225127);
    msg.setSource(29303U);
    msg.setSourceEntity(92U);
    msg.setDestination(15999U);
    msg.setDestinationEntity(15U);
    msg.value = 0.251402005172;

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
    msg.setTimeStamp(0.772168374154);
    msg.setSource(3625U);
    msg.setSourceEntity(61U);
    msg.setDestination(10028U);
    msg.setDestinationEntity(234U);
    msg.value = 0.750374235067;

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
    msg.setTimeStamp(0.364936289256);
    msg.setSource(59311U);
    msg.setSourceEntity(46U);
    msg.setDestination(7409U);
    msg.setDestinationEntity(216U);
    msg.value = 0.656460206264;

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
    msg.setTimeStamp(0.853947084513);
    msg.setSource(48273U);
    msg.setSourceEntity(205U);
    msg.setDestination(9576U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0410188519468;

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
    msg.setTimeStamp(0.854463963432);
    msg.setSource(8306U);
    msg.setSourceEntity(184U);
    msg.setDestination(28642U);
    msg.setDestinationEntity(58U);
    msg.value = 0.678865236752;

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
    msg.setTimeStamp(0.197528846731);
    msg.setSource(27774U);
    msg.setSourceEntity(191U);
    msg.setDestination(21727U);
    msg.setDestinationEntity(204U);
    msg.value = 0.660052574074;

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
    msg.setTimeStamp(0.126042773956);
    msg.setSource(15U);
    msg.setSourceEntity(31U);
    msg.setDestination(36482U);
    msg.setDestinationEntity(50U);
    msg.value = 0.940945347278;

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
    msg.setTimeStamp(0.121560073028);
    msg.setSource(26208U);
    msg.setSourceEntity(128U);
    msg.setDestination(7549U);
    msg.setDestinationEntity(172U);
    msg.value = 0.176984683796;

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
    msg.setTimeStamp(0.437598596056);
    msg.setSource(33978U);
    msg.setSourceEntity(117U);
    msg.setDestination(60462U);
    msg.setDestinationEntity(123U);
    msg.value = 0.316469007059;

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
    msg.setTimeStamp(0.0799364986619);
    msg.setSource(12203U);
    msg.setSourceEntity(129U);
    msg.setDestination(38296U);
    msg.setDestinationEntity(177U);
    msg.value = 0.408940904785;

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
    msg.setTimeStamp(0.631770159077);
    msg.setSource(36574U);
    msg.setSourceEntity(213U);
    msg.setDestination(33096U);
    msg.setDestinationEntity(219U);
    msg.value = 0.248352941336;

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
    msg.setTimeStamp(0.409151936268);
    msg.setSource(17233U);
    msg.setSourceEntity(41U);
    msg.setDestination(59719U);
    msg.setDestinationEntity(249U);
    msg.value = 0.972120450082;

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
    msg.setTimeStamp(0.141755961158);
    msg.setSource(26616U);
    msg.setSourceEntity(26U);
    msg.setDestination(62010U);
    msg.setDestinationEntity(209U);
    msg.value = 0.511459264275;

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
    msg.setTimeStamp(0.772774093074);
    msg.setSource(3390U);
    msg.setSourceEntity(102U);
    msg.setDestination(58358U);
    msg.setDestinationEntity(140U);
    msg.value = 0.838012491857;

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
    msg.setTimeStamp(0.202643277773);
    msg.setSource(5953U);
    msg.setSourceEntity(213U);
    msg.setDestination(11608U);
    msg.setDestinationEntity(114U);
    msg.value = 0.400168021694;

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
    msg.setTimeStamp(0.766572185546);
    msg.setSource(38472U);
    msg.setSourceEntity(236U);
    msg.setDestination(24577U);
    msg.setDestinationEntity(160U);
    msg.value = 0.255406044359;

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
    msg.setTimeStamp(0.92557044848);
    msg.setSource(12158U);
    msg.setSourceEntity(19U);
    msg.setDestination(50076U);
    msg.setDestinationEntity(126U);
    msg.value = 0.49931952245;

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
    msg.setTimeStamp(0.653343100321);
    msg.setSource(15261U);
    msg.setSourceEntity(132U);
    msg.setDestination(45348U);
    msg.setDestinationEntity(26U);
    msg.value = 0.751755046683;

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
    msg.setTimeStamp(0.510203725375);
    msg.setSource(26420U);
    msg.setSourceEntity(222U);
    msg.setDestination(10574U);
    msg.setDestinationEntity(191U);
    msg.value = 0.973649015936;

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
    msg.setTimeStamp(0.386440117117);
    msg.setSource(4235U);
    msg.setSourceEntity(199U);
    msg.setDestination(42633U);
    msg.setDestinationEntity(253U);
    msg.direction = 0.496112313386;
    msg.speed = 0.635386425134;
    msg.turbulence = 0.342783858241;

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
    msg.setTimeStamp(0.044727076273);
    msg.setSource(23558U);
    msg.setSourceEntity(37U);
    msg.setDestination(52522U);
    msg.setDestinationEntity(53U);
    msg.direction = 0.0552381991756;
    msg.speed = 0.904816739998;
    msg.turbulence = 0.418832694671;

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
    msg.setTimeStamp(0.0820817011607);
    msg.setSource(44855U);
    msg.setSourceEntity(104U);
    msg.setDestination(41826U);
    msg.setDestinationEntity(123U);
    msg.direction = 0.161113936265;
    msg.speed = 0.964656549435;
    msg.turbulence = 0.886540224697;

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
    msg.setTimeStamp(0.830619677161);
    msg.setSource(54926U);
    msg.setSourceEntity(220U);
    msg.setDestination(11875U);
    msg.setDestinationEntity(85U);
    msg.value = 0.755237153058;

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
    msg.setTimeStamp(0.354873635932);
    msg.setSource(23556U);
    msg.setSourceEntity(73U);
    msg.setDestination(54058U);
    msg.setDestinationEntity(212U);
    msg.value = 0.73559484416;

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
    msg.setTimeStamp(0.745603496836);
    msg.setSource(16082U);
    msg.setSourceEntity(125U);
    msg.setDestination(26562U);
    msg.setDestinationEntity(133U);
    msg.value = 0.920226585124;

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
    msg.setTimeStamp(0.349987161188);
    msg.setSource(33893U);
    msg.setSourceEntity(122U);
    msg.setDestination(28014U);
    msg.setDestinationEntity(251U);
    msg.value.assign("BQOUFNPFRKPOHARUWCVJXDFJUJYNDKFDPZUMKEPSUCRNGXQ");

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
    msg.setTimeStamp(0.227701461804);
    msg.setSource(26495U);
    msg.setSourceEntity(170U);
    msg.setDestination(21782U);
    msg.setDestinationEntity(182U);
    msg.value.assign("OPCZNJUPIZWEUNXWXCDMCADUHAOD");

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
    msg.setTimeStamp(0.704262854436);
    msg.setSource(29189U);
    msg.setSourceEntity(141U);
    msg.setDestination(4915U);
    msg.setDestinationEntity(82U);
    msg.value.assign("UBYLPSHUVPBPGJVYCWQPWTWQUETKEFHPOZYXANDRMLONRTFOXUDYNKMHCQWISGSXPXCQAEVGLORAMZGRXBHBBKIOTQYFTJHZQAPRC");

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
    msg.setTimeStamp(0.785181843342);
    msg.setSource(44467U);
    msg.setSourceEntity(199U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(169U);
    const char tmp_msg_0[] = {71, 102, 14, -52, -75, 118, -15, -23, -125, -12, 38, 92, 24, 75, 116, 26, 0, 94, 96, -122, -61, 83, 38, -104, 76, 116, -62, -61, -123, 120, 52, -29, -35, 114, -91, -45, 69, 74, 80, -2, -93, 18, 104, -39, 15, 101, 42, 30, -114, -74, -23, 64, -128, -89, 11, -8, -37, -39, 95, 7, 116, 23, -11, 118, 103, 32, -6, 106, 59, 86, -67, -39, -89, -119, 0, 57, 39, -13, -22, -68, 11, -35, -39, -58, 59};
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
    msg.setTimeStamp(0.77858366183);
    msg.setSource(63635U);
    msg.setSourceEntity(2U);
    msg.setDestination(46192U);
    msg.setDestinationEntity(211U);
    const char tmp_msg_0[] = {74, 6, 102, -124, 58, 67, 2, -105, 5, 39, -40, -25, -31, 0, -80, 89, -25, -112, -69, 101, -112, -109, 83, 42, 63, -87, 5, -22, 87, -9, -28, 92, -16, 66, -91, -82, 81, 119, -67, 101, -37, -126, -27, 49, -21, -75, -110, -26, 73, -84, 20, -87, -110, -36, 47, 86, -95, 42, 121, -80, 46, 34, -98, -56, -31, 85, -115, 46, 11, -61, -83, 30, -116, -32, -20, 45, 14, -48, -69, -79, 126, -11, 0, 64, 111, 81, -12, 22, 18, -39, 79, 81, 98, 124, 37, -105, -7, -89, 81, -93, 102, -47, 39, 4, -92, -72, -108, -3, 23, -110, -79, 108, 70, 51, -111, -109, -17, 106, -52, 79, 19, -99, -38, -46, 62, -115, -115, -69, -80, -111, -46, -40, 5, 71, 12, -95, -107, -36, -54, -57, -26, -98, -15, 82, -34, 14};
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
    msg.setTimeStamp(0.813562938039);
    msg.setSource(36019U);
    msg.setSourceEntity(128U);
    msg.setDestination(64639U);
    msg.setDestinationEntity(92U);
    const char tmp_msg_0[] = {4, 52, -46, 51, -81, 55, -15, -21, 5, -64, 36, 59, 28, -93, -127, 113, -92, 95, -3, 101, -26, 111, 69, 4, 73, 76, -48, -119, -31, -48, -115, -105, 99, 54, -43, 9, 65, -20, -14, 36, 121, -19, 100, -118, 75};
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
    msg.setTimeStamp(0.760328446339);
    msg.setSource(27452U);
    msg.setSourceEntity(77U);
    msg.setDestination(16039U);
    msg.setDestinationEntity(20U);
    msg.value = 0.0462111205135;

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
    msg.setTimeStamp(0.710076834261);
    msg.setSource(33196U);
    msg.setSourceEntity(89U);
    msg.setDestination(60398U);
    msg.setDestinationEntity(246U);
    msg.value = 0.828832324292;

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
    msg.setTimeStamp(0.684639480445);
    msg.setSource(46597U);
    msg.setSourceEntity(185U);
    msg.setDestination(65361U);
    msg.setDestinationEntity(120U);
    msg.value = 0.460795811084;

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
    msg.setTimeStamp(0.115520256544);
    msg.setSource(23952U);
    msg.setSourceEntity(65U);
    msg.setDestination(29263U);
    msg.setDestinationEntity(138U);
    msg.type = 144U;
    msg.frequency = 1271313826U;
    msg.min_range = 49530U;
    msg.max_range = 15939U;
    msg.bits_per_point = 231U;
    msg.scale_factor = 0.411187898851;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.843832365664;
    tmp_msg_0.beam_height = 0.382547016141;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-114, 10, -37, -128, -54, -93, -72, 88, -40, -46, 67, -23, -104, 75, -1, -79, 12, 97, 65, 50, -55, 22, -112, -29, 93, -108, 103, 84, -49, -123, 14, 51, -90, 83, 123, 79, -73, 116, -22, -110, 47, -109, -46, 91, -23, -21, 65, -111, -125, -103, 52, -111, -110, -91, 123, -73, -8, -97, -49, 59, 44, 18, 92, 90, 95, 44, 89, 98, -1, -99, 47, -46, -98, -9, 71, 63, -39, -112, -109, -59, -41, 11, 53, -35, 113, -61, -23, -112, -17, -19, 108, -87, 97, 82, -88, -47, -84, 46, -61, -52, 81, -110, 4, -80, -113, 82, 99, -62, -91, -117, -124, -93, 16, 122, -126, 12, -119, -22, 32, -115, 63, -63, -15, 68, -84, -5, -7, -100, 113, -34, 105, 110, -105, 90, 61, 118, -95, 58, -39, 98, -92, -86, -75, 34, -63, -87, -92, -1, 101, 90, 81, 69, 45, 44, 88, 40, 58, 9, -23, -77, -4, 119, -81, 2, -109, -14, -17, -109, -128, 125, -28};
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
    msg.setTimeStamp(0.908134652483);
    msg.setSource(60385U);
    msg.setSourceEntity(114U);
    msg.setDestination(64799U);
    msg.setDestinationEntity(16U);
    msg.type = 198U;
    msg.frequency = 1001760439U;
    msg.min_range = 29055U;
    msg.max_range = 34331U;
    msg.bits_per_point = 25U;
    msg.scale_factor = 0.728561512175;
    const char tmp_msg_0[] = {91, -15, -84, -53, -95, -97, -69, -119, 64, -107, -37, -77, 51, -97, -10, -89, -56, 112, 121, 0, 100, 36, 23, 33, 117, -114, 41, 71, 99, 30, 12, 83, -113, 109, 81, 19, -113, 88, 91, -53, -5, -93, 88, 53, 26, -92, 115, -96, -70, -1, -114, -45, 89, -32, -102, 104, -10, 17, -27, 37, 53, -65, 72, -10, -107, 3, -76, 73, 82, 57, 59, -33, -62, 13, 71, -90, 120, -115, 69, -13, 83, 70, -98, -126, -20, 20, 29, 54, -20, -11, 3, 13, 117, -64, -109, -7, -17, -103, -80, -64, 119, 99, -41, 84, -113, -51, 110, 92, -121, 54, -9, -120, -95, -125, -51, 75, -122, -83, 78, 0, 14, -109, -83, -40, 69, -6, 108, 84, 38, -122, 111, 90, 40, 89, 123, 105, 61, 9, 88, 15, -113, -110, -91, 101, -13, -71, -59, -69, -91, 12, -90, -43, -72, 110, 112, -72, -127, -118, 7, 112, -60, 11, 47, 109, 118, -43, -68, 108, -58, -78, -51, 24, 66, -89, 124, -8, 35, -27, -85, 16, -16, -109, -121, 109, -65, -112, -103, 42, 109, -110, -44, -111, -21, -104, -104, -64, 2, 93, 96, 1, -28, -29, 14, 52, -124, -28, 57, -96, -6, -56, 95, -64, -14, -49, 33, 64, 12, -107, 58, -77, -82, 52, -94, -35, -58};
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
    msg.setTimeStamp(0.0461529184782);
    msg.setSource(5961U);
    msg.setSourceEntity(45U);
    msg.setDestination(15362U);
    msg.setDestinationEntity(25U);
    msg.type = 185U;
    msg.frequency = 519589561U;
    msg.min_range = 15129U;
    msg.max_range = 47211U;
    msg.bits_per_point = 54U;
    msg.scale_factor = 0.93700875086;
    const char tmp_msg_0[] = {-113, 25, 15, 83, 104, -83, 1, 3, 21, 41, 35, 55, -72, 121, -59, 49, -76, 92, 120, -115, -46, -54, -19, -57, -83, -12, 99, 12, 17, 27, 44, -65, 61, -97, 83, 3, -113, -126, -5, 4, -3, 90, -118, -79, -61, 44, -50, -52, 91, 32, 26, -62, 69, 5, -37, -70, 37, -103, -102, 46, -79, 55, -85, -64, 41, 35, -119, 23, 21, 104, 61, -77, 15, 117, -111, 49, -118, -37, 48, -92, 114, -98, 29, -45, 115, 33, -63, 81, -74, -39, -70, -81, -3, -94, -25, 81, 126, 97, -70, -69, 38, 79, -17, 1, -112, 88, -106, -108, -59, -99, 117, -50, -59, 89, 7, 120, -106, -71, 31, 4, -52, 56, 43, -83, 25, -102, 100, 126, 69, -110, 121, 16, -11, -120, -113, 99, -67, -64, -119, -106, -57, 2, -9, 41, 24, 43, 43, 42, 47, 76, 118, 89, 68, 0, -40, -22, -56, 40, -124, -3, 0, -94, -86, 49, 97, 9, -102, -27, -85, -119, 71, 99, 39, 15, -111, 15, 72, 44, 121, -67, -50, 112, 107, -128, -18, 76, -8, -90, 34, 65, -115, 95, 119, -122, -76, 101, 80, -122, -89, -14, 75, 116, -12, 107, -63, -91, 115, 75};
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
    msg.setTimeStamp(0.0346829189952);
    msg.setSource(54135U);
    msg.setSourceEntity(198U);
    msg.setDestination(28157U);
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
    msg.setTimeStamp(0.991057121215);
    msg.setSource(21441U);
    msg.setSourceEntity(220U);
    msg.setDestination(37728U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.287579819937);
    msg.setSource(20010U);
    msg.setSourceEntity(165U);
    msg.setDestination(34931U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.716401681587);
    msg.setSource(60813U);
    msg.setSourceEntity(5U);
    msg.setDestination(21534U);
    msg.setDestinationEntity(227U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.391473019593);
    msg.setSource(57152U);
    msg.setSourceEntity(228U);
    msg.setDestination(2988U);
    msg.setDestinationEntity(141U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.198803055112);
    msg.setSource(59609U);
    msg.setSourceEntity(121U);
    msg.setDestination(37395U);
    msg.setDestinationEntity(17U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.764195409684);
    msg.setSource(13067U);
    msg.setSourceEntity(15U);
    msg.setDestination(56681U);
    msg.setDestinationEntity(200U);
    msg.value = 0.555782545947;
    msg.confidence = 0.683846709211;
    msg.opmodes.assign("TDQGNSNSTEGZUJTTVGVQJLUBKJHOUCAVQBCFUBFZPRZJEEPGXDIICWHQGIGWPKIFOYCEORZXSRWNAXJPQQKMZWRPUZHXNYDTLAISNYZAGPRDMNSFFAFVEXJPBASWRICXDIYYCRHWIUVCSVBXAJXMTJKUWDHPHCNOOLNTFFYW");

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
    msg.setTimeStamp(0.531935050303);
    msg.setSource(57334U);
    msg.setSourceEntity(213U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(60U);
    msg.value = 0.810643403467;
    msg.confidence = 0.304220871723;
    msg.opmodes.assign("LKVBNCFZUCAUQUJKXWFCEOOPOZTSTXNMBSBYKAMDEFIKTVFLBYGN");

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
    msg.setTimeStamp(0.733534902096);
    msg.setSource(16565U);
    msg.setSourceEntity(5U);
    msg.setDestination(17434U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0826874515691;
    msg.confidence = 0.362582447308;
    msg.opmodes.assign("VKTLMLSJABODGUKOGQFNVPCXYGZXPVQHDBRSTLRXJPXBUHSYZHWCOBPXYDKIEQOHQMTZODAVTMUDWFMKFPHSTYOCDWRDYFSGOCXYJWKBZTIFQKJGEYAITVAFUHTEGVBYJIIVUNPJERCLMEHAIYRLAJRNXXHOGVNPZFJEUHASBMSM");

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
    msg.setTimeStamp(0.505151617145);
    msg.setSource(49345U);
    msg.setSourceEntity(13U);
    msg.setDestination(32633U);
    msg.setDestinationEntity(24U);
    msg.itow = 3366902372U;
    msg.lat = 0.354923455473;
    msg.lon = 0.0603169933067;
    msg.height_ell = 0.507081099595;
    msg.height_sea = 0.762945565573;
    msg.hacc = 0.289576393594;
    msg.vacc = 0.865227452915;
    msg.vel_n = 0.218406934312;
    msg.vel_e = 0.784857357983;
    msg.vel_d = 0.733236525155;
    msg.speed = 0.0975910925712;
    msg.gspeed = 0.64232217958;
    msg.heading = 0.51752039067;
    msg.sacc = 0.748598535765;
    msg.cacc = 0.612461981787;

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
    msg.setTimeStamp(0.903439795697);
    msg.setSource(57564U);
    msg.setSourceEntity(195U);
    msg.setDestination(5944U);
    msg.setDestinationEntity(174U);
    msg.itow = 2903635637U;
    msg.lat = 0.623353416839;
    msg.lon = 0.0176765811715;
    msg.height_ell = 0.427544143481;
    msg.height_sea = 0.078868048875;
    msg.hacc = 0.233069833238;
    msg.vacc = 0.282078580361;
    msg.vel_n = 0.734259238053;
    msg.vel_e = 0.357214821552;
    msg.vel_d = 0.294953019691;
    msg.speed = 0.573746020837;
    msg.gspeed = 0.869524226412;
    msg.heading = 0.45069963893;
    msg.sacc = 0.591500627565;
    msg.cacc = 0.38382633262;

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
    msg.setTimeStamp(0.171792376721);
    msg.setSource(38720U);
    msg.setSourceEntity(8U);
    msg.setDestination(49738U);
    msg.setDestinationEntity(123U);
    msg.itow = 1824216494U;
    msg.lat = 0.845149185427;
    msg.lon = 0.798862077921;
    msg.height_ell = 0.676299469149;
    msg.height_sea = 0.0102999383447;
    msg.hacc = 0.789520832442;
    msg.vacc = 0.70770147005;
    msg.vel_n = 0.349450083799;
    msg.vel_e = 0.0384386856086;
    msg.vel_d = 0.0540253885877;
    msg.speed = 0.751331640958;
    msg.gspeed = 0.00369082091995;
    msg.heading = 0.577220248801;
    msg.sacc = 0.500709328315;
    msg.cacc = 0.260355533325;

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
    msg.setTimeStamp(0.0554189107491);
    msg.setSource(37876U);
    msg.setSourceEntity(191U);
    msg.setDestination(1155U);
    msg.setDestinationEntity(183U);
    msg.id = 59U;
    msg.value = 0.456502719907;

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
    msg.setTimeStamp(0.940075906819);
    msg.setSource(54884U);
    msg.setSourceEntity(111U);
    msg.setDestination(49620U);
    msg.setDestinationEntity(106U);
    msg.id = 210U;
    msg.value = 0.670798418314;

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
    msg.setTimeStamp(0.716910682007);
    msg.setSource(58337U);
    msg.setSourceEntity(228U);
    msg.setDestination(58657U);
    msg.setDestinationEntity(200U);
    msg.id = 161U;
    msg.value = 0.243466723228;

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
    msg.setTimeStamp(0.796605989784);
    msg.setSource(56491U);
    msg.setSourceEntity(138U);
    msg.setDestination(20929U);
    msg.setDestinationEntity(239U);
    msg.x = 0.0544744153526;
    msg.y = 0.824236776249;
    msg.z = 0.212577554685;
    msg.phi = 0.265945964837;
    msg.theta = 0.0813330873787;
    msg.psi = 0.285566629177;

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
    msg.setTimeStamp(0.174848083361);
    msg.setSource(44761U);
    msg.setSourceEntity(196U);
    msg.setDestination(64617U);
    msg.setDestinationEntity(162U);
    msg.x = 0.197535809436;
    msg.y = 0.564432539298;
    msg.z = 0.793413570169;
    msg.phi = 0.346218317674;
    msg.theta = 0.183259894514;
    msg.psi = 0.668911774384;

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
    msg.setTimeStamp(0.737998805609);
    msg.setSource(4980U);
    msg.setSourceEntity(207U);
    msg.setDestination(4060U);
    msg.setDestinationEntity(41U);
    msg.x = 0.313235431263;
    msg.y = 0.915964568979;
    msg.z = 0.96839077277;
    msg.phi = 0.405326526546;
    msg.theta = 0.462530714102;
    msg.psi = 0.698814590695;

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
    msg.setTimeStamp(0.476715670101);
    msg.setSource(62536U);
    msg.setSourceEntity(159U);
    msg.setDestination(31822U);
    msg.setDestinationEntity(206U);
    msg.beam_width = 0.0413598069677;
    msg.beam_height = 0.357097365659;

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
    msg.setTimeStamp(0.195248975863);
    msg.setSource(48569U);
    msg.setSourceEntity(54U);
    msg.setDestination(32544U);
    msg.setDestinationEntity(177U);
    msg.beam_width = 0.424457754925;
    msg.beam_height = 0.0572310119352;

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
    msg.setTimeStamp(0.657713148344);
    msg.setSource(29320U);
    msg.setSourceEntity(184U);
    msg.setDestination(55256U);
    msg.setDestinationEntity(6U);
    msg.beam_width = 0.461166194356;
    msg.beam_height = 0.200130798745;

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
    msg.setTimeStamp(0.585870499456);
    msg.setSource(58458U);
    msg.setSourceEntity(226U);
    msg.setDestination(14303U);
    msg.setDestinationEntity(223U);
    msg.sane = 70U;

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
    msg.setTimeStamp(0.167467838523);
    msg.setSource(490U);
    msg.setSourceEntity(73U);
    msg.setDestination(2640U);
    msg.setDestinationEntity(13U);
    msg.sane = 203U;

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
    msg.setTimeStamp(0.694314179659);
    msg.setSource(18550U);
    msg.setSourceEntity(191U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(82U);
    msg.sane = 10U;

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
    msg.setTimeStamp(0.307554720561);
    msg.setSource(62965U);
    msg.setSourceEntity(227U);
    msg.setDestination(25044U);
    msg.setDestinationEntity(86U);
    msg.value = 0.307518766425;

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
    msg.setTimeStamp(0.900601565947);
    msg.setSource(31316U);
    msg.setSourceEntity(112U);
    msg.setDestination(62170U);
    msg.setDestinationEntity(81U);
    msg.value = 0.20584711754;

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
    msg.setTimeStamp(0.308637470374);
    msg.setSource(59023U);
    msg.setSourceEntity(157U);
    msg.setDestination(29583U);
    msg.setDestinationEntity(71U);
    msg.value = 0.969899392345;

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
    msg.setTimeStamp(0.376770919516);
    msg.setSource(14632U);
    msg.setSourceEntity(20U);
    msg.setDestination(50899U);
    msg.setDestinationEntity(171U);
    msg.value = 0.88457202717;

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
    msg.setTimeStamp(0.840796011795);
    msg.setSource(56925U);
    msg.setSourceEntity(111U);
    msg.setDestination(52379U);
    msg.setDestinationEntity(222U);
    msg.value = 0.147469853954;

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
    msg.setTimeStamp(0.732991842266);
    msg.setSource(46111U);
    msg.setSourceEntity(209U);
    msg.setDestination(51433U);
    msg.setDestinationEntity(2U);
    msg.value = 0.697595193326;

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
    msg.setTimeStamp(0.836039915322);
    msg.setSource(27878U);
    msg.setSourceEntity(134U);
    msg.setDestination(50119U);
    msg.setDestinationEntity(100U);
    msg.value = 0.130331451092;

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
    msg.setTimeStamp(0.823400591059);
    msg.setSource(446U);
    msg.setSourceEntity(147U);
    msg.setDestination(37201U);
    msg.setDestinationEntity(12U);
    msg.value = 0.875630699294;

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
    msg.setTimeStamp(0.188858169105);
    msg.setSource(28239U);
    msg.setSourceEntity(122U);
    msg.setDestination(12246U);
    msg.setDestinationEntity(121U);
    msg.value = 0.423877899418;

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
    msg.setTimeStamp(0.449140529954);
    msg.setSource(20644U);
    msg.setSourceEntity(214U);
    msg.setDestination(46214U);
    msg.setDestinationEntity(139U);
    msg.value = 0.753243099857;

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
    msg.setTimeStamp(0.742578328662);
    msg.setSource(23449U);
    msg.setSourceEntity(25U);
    msg.setDestination(36303U);
    msg.setDestinationEntity(95U);
    msg.value = 0.598349738432;

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
    msg.setTimeStamp(0.663177323746);
    msg.setSource(21546U);
    msg.setSourceEntity(107U);
    msg.setDestination(16351U);
    msg.setDestinationEntity(144U);
    msg.value = 0.719325324086;

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
    msg.setTimeStamp(0.234581913032);
    msg.setSource(56252U);
    msg.setSourceEntity(204U);
    msg.setDestination(61588U);
    msg.setDestinationEntity(212U);
    msg.value = 0.680158848155;

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
    msg.setTimeStamp(0.919736552522);
    msg.setSource(33288U);
    msg.setSourceEntity(240U);
    msg.setDestination(795U);
    msg.setDestinationEntity(197U);
    msg.value = 0.570492325535;

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
    msg.setTimeStamp(0.606849294391);
    msg.setSource(60922U);
    msg.setSourceEntity(214U);
    msg.setDestination(39865U);
    msg.setDestinationEntity(192U);
    msg.value = 0.770414929616;

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
    msg.setTimeStamp(0.153656384403);
    msg.setSource(37327U);
    msg.setSourceEntity(75U);
    msg.setDestination(15380U);
    msg.setDestinationEntity(111U);
    msg.value = 0.443491838344;

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
    msg.setTimeStamp(0.928407036443);
    msg.setSource(40170U);
    msg.setSourceEntity(146U);
    msg.setDestination(15052U);
    msg.setDestinationEntity(164U);
    msg.value = 0.479447353164;

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
    msg.setTimeStamp(0.921636805268);
    msg.setSource(35806U);
    msg.setSourceEntity(106U);
    msg.setDestination(30633U);
    msg.setDestinationEntity(245U);
    msg.value = 0.434973163072;

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
    msg.setTimeStamp(0.706824637223);
    msg.setSource(35455U);
    msg.setSourceEntity(229U);
    msg.setDestination(63593U);
    msg.setDestinationEntity(108U);
    msg.value = 0.217813499259;

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
    msg.setTimeStamp(0.0195677234656);
    msg.setSource(33434U);
    msg.setSourceEntity(160U);
    msg.setDestination(29582U);
    msg.setDestinationEntity(210U);
    msg.value = 0.217033343402;

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
    msg.setTimeStamp(0.157007572199);
    msg.setSource(33335U);
    msg.setSourceEntity(222U);
    msg.setDestination(62218U);
    msg.setDestinationEntity(177U);
    msg.value = 0.0363551753474;

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
    msg.setTimeStamp(0.327391484583);
    msg.setSource(14571U);
    msg.setSourceEntity(174U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(161U);
    msg.value = 0.991014233122;

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
    msg.setTimeStamp(0.82280471152);
    msg.setSource(64318U);
    msg.setSourceEntity(49U);
    msg.setDestination(38887U);
    msg.setDestinationEntity(59U);
    msg.value = 0.269213098997;

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
    msg.setTimeStamp(0.306748395569);
    msg.setSource(3819U);
    msg.setSourceEntity(111U);
    msg.setDestination(5305U);
    msg.setDestinationEntity(120U);
    msg.value = 0.507042806476;

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
    msg.setTimeStamp(0.829745489225);
    msg.setSource(16094U);
    msg.setSourceEntity(96U);
    msg.setDestination(64904U);
    msg.setDestinationEntity(74U);
    msg.validity = 21361U;
    msg.type = 246U;
    msg.tow = 84777371U;
    msg.base_lat = 0.634224875691;
    msg.base_lon = 0.403977712664;
    msg.base_height = 0.385656659066;
    msg.n = 0.470025516492;
    msg.e = 0.115921584617;
    msg.d = 0.421604681672;
    msg.v_n = 0.920244805695;
    msg.v_e = 0.906924719896;
    msg.v_d = 0.284745209129;
    msg.satellites = 142U;
    msg.iar_hyp = 16625U;
    msg.iar_ratio = 0.694319968776;

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
    msg.setTimeStamp(0.534865768411);
    msg.setSource(39054U);
    msg.setSourceEntity(32U);
    msg.setDestination(13299U);
    msg.setDestinationEntity(241U);
    msg.validity = 2642U;
    msg.type = 157U;
    msg.tow = 358210704U;
    msg.base_lat = 0.505021131526;
    msg.base_lon = 0.194212436943;
    msg.base_height = 0.269874384805;
    msg.n = 0.120245991286;
    msg.e = 0.122496605049;
    msg.d = 0.676979792075;
    msg.v_n = 0.860570702402;
    msg.v_e = 0.297205158922;
    msg.v_d = 0.817515844209;
    msg.satellites = 97U;
    msg.iar_hyp = 6826U;
    msg.iar_ratio = 0.424505775239;

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
    msg.setTimeStamp(0.144003418453);
    msg.setSource(35228U);
    msg.setSourceEntity(26U);
    msg.setDestination(16184U);
    msg.setDestinationEntity(177U);
    msg.validity = 37703U;
    msg.type = 65U;
    msg.tow = 2812736532U;
    msg.base_lat = 0.388716988755;
    msg.base_lon = 0.529478601518;
    msg.base_height = 0.666579260363;
    msg.n = 0.000966574316541;
    msg.e = 0.737827092351;
    msg.d = 0.997347212514;
    msg.v_n = 0.311745328492;
    msg.v_e = 0.596206437626;
    msg.v_d = 0.649719642854;
    msg.satellites = 117U;
    msg.iar_hyp = 59837U;
    msg.iar_ratio = 0.251890877892;

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
    msg.setTimeStamp(0.83137110151);
    msg.setSource(20552U);
    msg.setSourceEntity(66U);
    msg.setDestination(40734U);
    msg.setDestinationEntity(157U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.562714337206;
    tmp_msg_0.lon = 0.796774968818;
    tmp_msg_0.height = 0.746734246304;
    tmp_msg_0.x = 0.721111496302;
    tmp_msg_0.y = 0.410920545285;
    tmp_msg_0.z = 0.716068557942;
    tmp_msg_0.phi = 0.0985430308767;
    tmp_msg_0.theta = 0.241394884544;
    tmp_msg_0.psi = 0.973518866848;
    tmp_msg_0.u = 0.081715036995;
    tmp_msg_0.v = 0.625123465105;
    tmp_msg_0.w = 0.431577507782;
    tmp_msg_0.vx = 0.779846251049;
    tmp_msg_0.vy = 0.0892398045454;
    tmp_msg_0.vz = 0.744400516521;
    tmp_msg_0.p = 0.670715530253;
    tmp_msg_0.q = 0.0755865130632;
    tmp_msg_0.r = 0.523025721605;
    tmp_msg_0.depth = 0.0311367512309;
    tmp_msg_0.alt = 0.0483157955124;
    msg.state.set(tmp_msg_0);
    msg.type = 102U;

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
    msg.setTimeStamp(0.347318822279);
    msg.setSource(25037U);
    msg.setSourceEntity(37U);
    msg.setDestination(30817U);
    msg.setDestinationEntity(27U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.152631204394;
    tmp_msg_0.lon = 0.859382321254;
    tmp_msg_0.height = 0.252206206225;
    tmp_msg_0.x = 0.0123490469996;
    tmp_msg_0.y = 0.544735668864;
    tmp_msg_0.z = 0.122426788108;
    tmp_msg_0.phi = 0.683830453119;
    tmp_msg_0.theta = 0.690658089625;
    tmp_msg_0.psi = 0.507114249525;
    tmp_msg_0.u = 0.722618524575;
    tmp_msg_0.v = 0.498042405945;
    tmp_msg_0.w = 0.843518856838;
    tmp_msg_0.vx = 0.596068287798;
    tmp_msg_0.vy = 0.0468086931618;
    tmp_msg_0.vz = 0.283658422919;
    tmp_msg_0.p = 0.247950307103;
    tmp_msg_0.q = 0.697186651189;
    tmp_msg_0.r = 0.107558141382;
    tmp_msg_0.depth = 0.0843746394268;
    tmp_msg_0.alt = 0.526891595078;
    msg.state.set(tmp_msg_0);
    msg.type = 30U;

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
    msg.setTimeStamp(0.087718845773);
    msg.setSource(60096U);
    msg.setSourceEntity(211U);
    msg.setDestination(60143U);
    msg.setDestinationEntity(220U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.915390460687;
    tmp_msg_0.lon = 0.213492600733;
    tmp_msg_0.height = 0.624881077259;
    tmp_msg_0.x = 0.889825899242;
    tmp_msg_0.y = 0.2311206076;
    tmp_msg_0.z = 0.441868588046;
    tmp_msg_0.phi = 0.924409297203;
    tmp_msg_0.theta = 0.215404084583;
    tmp_msg_0.psi = 0.840428775363;
    tmp_msg_0.u = 0.0733565800822;
    tmp_msg_0.v = 0.817774906846;
    tmp_msg_0.w = 0.35659622295;
    tmp_msg_0.vx = 0.282781181761;
    tmp_msg_0.vy = 0.746680428614;
    tmp_msg_0.vz = 0.893017580532;
    tmp_msg_0.p = 0.0755453820961;
    tmp_msg_0.q = 0.412115969281;
    tmp_msg_0.r = 0.564565441071;
    tmp_msg_0.depth = 0.517261666209;
    tmp_msg_0.alt = 0.979070101907;
    msg.state.set(tmp_msg_0);
    msg.type = 60U;

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
    msg.setTimeStamp(0.858494962742);
    msg.setSource(52161U);
    msg.setSourceEntity(25U);
    msg.setDestination(8816U);
    msg.setDestinationEntity(77U);
    msg.value = 0.574440544926;

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
    msg.setTimeStamp(0.959094927238);
    msg.setSource(4282U);
    msg.setSourceEntity(228U);
    msg.setDestination(53868U);
    msg.setDestinationEntity(180U);
    msg.value = 0.139539316028;

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
    msg.setTimeStamp(0.899172423049);
    msg.setSource(54133U);
    msg.setSourceEntity(193U);
    msg.setDestination(23175U);
    msg.setDestinationEntity(175U);
    msg.value = 0.48281027671;

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
    msg.setTimeStamp(0.263069692453);
    msg.setSource(60158U);
    msg.setSourceEntity(72U);
    msg.setDestination(6587U);
    msg.setDestinationEntity(173U);
    msg.value = 0.682033486974;

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
    msg.setTimeStamp(0.212112897922);
    msg.setSource(41578U);
    msg.setSourceEntity(129U);
    msg.setDestination(61480U);
    msg.setDestinationEntity(224U);
    msg.value = 0.376228402943;

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
    msg.setTimeStamp(0.46095158613);
    msg.setSource(27549U);
    msg.setSourceEntity(33U);
    msg.setDestination(4410U);
    msg.setDestinationEntity(223U);
    msg.value = 0.269633113867;

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
    msg.setTimeStamp(0.254516317468);
    msg.setSource(35678U);
    msg.setSourceEntity(10U);
    msg.setDestination(18802U);
    msg.setDestinationEntity(5U);
    msg.value = 0.670373934424;

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
    msg.setTimeStamp(0.189134088271);
    msg.setSource(9108U);
    msg.setSourceEntity(51U);
    msg.setDestination(59392U);
    msg.setDestinationEntity(30U);
    msg.value = 0.72898299727;

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
    msg.setTimeStamp(0.438418534346);
    msg.setSource(61168U);
    msg.setSourceEntity(160U);
    msg.setDestination(4966U);
    msg.setDestinationEntity(139U);
    msg.value = 0.0787113703514;

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
    msg.setTimeStamp(0.662449955451);
    msg.setSource(49346U);
    msg.setSourceEntity(224U);
    msg.setDestination(27036U);
    msg.setDestinationEntity(248U);
    msg.value = 0.860511979788;

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
    msg.setTimeStamp(0.18143680785);
    msg.setSource(41715U);
    msg.setSourceEntity(231U);
    msg.setDestination(28129U);
    msg.setDestinationEntity(106U);
    msg.value = 0.739092573243;

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
    msg.setTimeStamp(0.116885778753);
    msg.setSource(32944U);
    msg.setSourceEntity(220U);
    msg.setDestination(36217U);
    msg.setDestinationEntity(47U);
    msg.value = 0.919228647003;

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
    msg.setTimeStamp(0.394226790311);
    msg.setSource(16397U);
    msg.setSourceEntity(167U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(98U);
    msg.value = 0.862710794542;

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
    msg.setTimeStamp(0.0403211773815);
    msg.setSource(22300U);
    msg.setSourceEntity(57U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(184U);
    msg.value = 0.026017478465;

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
    msg.setTimeStamp(0.0490087269212);
    msg.setSource(10119U);
    msg.setSourceEntity(156U);
    msg.setDestination(58582U);
    msg.setDestinationEntity(40U);
    msg.value = 0.153554997063;

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
    msg.setTimeStamp(0.672495982349);
    msg.setSource(47777U);
    msg.setSourceEntity(162U);
    msg.setDestination(22231U);
    msg.setDestinationEntity(41U);
    msg.id = 204U;
    msg.zoom = 187U;
    msg.action = 179U;

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
    msg.setTimeStamp(0.751357868277);
    msg.setSource(58584U);
    msg.setSourceEntity(154U);
    msg.setDestination(24514U);
    msg.setDestinationEntity(251U);
    msg.id = 215U;
    msg.zoom = 95U;
    msg.action = 230U;

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
    msg.setTimeStamp(0.821569483651);
    msg.setSource(15673U);
    msg.setSourceEntity(215U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(108U);
    msg.id = 244U;
    msg.zoom = 169U;
    msg.action = 170U;

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
    msg.setTimeStamp(0.0658486675393);
    msg.setSource(62091U);
    msg.setSourceEntity(127U);
    msg.setDestination(24786U);
    msg.setDestinationEntity(90U);
    msg.id = 234U;
    msg.value = 0.772669119456;

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
    msg.setTimeStamp(0.845639548715);
    msg.setSource(7934U);
    msg.setSourceEntity(168U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(95U);
    msg.id = 195U;
    msg.value = 0.427981499054;

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
    msg.setTimeStamp(0.862954690818);
    msg.setSource(6787U);
    msg.setSourceEntity(222U);
    msg.setDestination(47212U);
    msg.setDestinationEntity(66U);
    msg.id = 65U;
    msg.value = 0.771744991346;

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
    msg.setTimeStamp(0.469315494327);
    msg.setSource(43631U);
    msg.setSourceEntity(26U);
    msg.setDestination(45739U);
    msg.setDestinationEntity(228U);
    msg.id = 205U;
    msg.value = 0.933438882778;

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
    msg.setTimeStamp(0.696913383774);
    msg.setSource(26727U);
    msg.setSourceEntity(70U);
    msg.setDestination(32458U);
    msg.setDestinationEntity(122U);
    msg.id = 106U;
    msg.value = 0.4538788493;

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
    msg.setTimeStamp(0.322061376715);
    msg.setSource(32378U);
    msg.setSourceEntity(184U);
    msg.setDestination(49872U);
    msg.setDestinationEntity(183U);
    msg.id = 254U;
    msg.value = 0.117962214158;

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
    msg.setTimeStamp(0.999284381665);
    msg.setSource(39255U);
    msg.setSourceEntity(138U);
    msg.setDestination(22057U);
    msg.setDestinationEntity(249U);
    msg.id = 217U;
    msg.angle = 0.12187204006;

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
    msg.setTimeStamp(0.566728014763);
    msg.setSource(54504U);
    msg.setSourceEntity(96U);
    msg.setDestination(29484U);
    msg.setDestinationEntity(209U);
    msg.id = 145U;
    msg.angle = 0.254003417828;

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
    msg.setTimeStamp(0.203561335074);
    msg.setSource(4756U);
    msg.setSourceEntity(114U);
    msg.setDestination(16085U);
    msg.setDestinationEntity(68U);
    msg.id = 179U;
    msg.angle = 0.248697227117;

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
    msg.setTimeStamp(0.676463722768);
    msg.setSource(32858U);
    msg.setSourceEntity(117U);
    msg.setDestination(11468U);
    msg.setDestinationEntity(7U);
    msg.op = 23U;
    msg.actions.assign("ZPQMOIXJPDFFKUFXIUMLZQHBVQIAQOTVZADZJQPKTMBCBGBZAXIVYAYBWLRERUGFNFSLOYPGOKUUCYEVDVPQFEKPDZGHSMXRLTMNKJHGHMOBIDSNOFVAYLQHE");

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
    msg.setTimeStamp(0.805063949971);
    msg.setSource(62637U);
    msg.setSourceEntity(166U);
    msg.setDestination(31761U);
    msg.setDestinationEntity(249U);
    msg.op = 74U;
    msg.actions.assign("ZECEDTYCEKVPRFHXVGHTVYUCHSRIVFQAUKWWXVZQEGUOJYHZMWMVKOYYSIETDIBMZTYKMLVHXWJNMXUXBOSPBQCMXAASRL");

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
    msg.setTimeStamp(0.515295128196);
    msg.setSource(28908U);
    msg.setSourceEntity(228U);
    msg.setDestination(44163U);
    msg.setDestinationEntity(234U);
    msg.op = 127U;
    msg.actions.assign("GLYZHDWVPMBFZNJGHEZGVLSEBYSATTMAHHREZYWRPNOFMWGOCTIGCCYWPTCQZZDJSMNSHFWTLAFKCIKCOIHQWXQWFIWSXLFIPVUXEBLRNU");

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
    msg.setTimeStamp(0.0810812109295);
    msg.setSource(49615U);
    msg.setSourceEntity(246U);
    msg.setDestination(43395U);
    msg.setDestinationEntity(137U);
    msg.actions.assign("ZLWLHIFYNZBESIOMNKMZZLWSCBKKXLWBVGJGETVXMQPLQGDLIWHGQNOBTEHLIWPAODNXZRYMJBVNIXYTNEVZJRCCCIADFXSUAIRSACLVWDLNUFOSFESUITDOJPONGPRITPJMBTTKWVPOJXKQZYUOAXMMZAYYZTKKBBQVKBAYJJHLEFUREBISGEHNTSHFTCMRECSCHOFYCDWRJXRDGGDCVXFUKRHVDHUMDHQ");

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
    msg.setTimeStamp(0.716799292758);
    msg.setSource(30968U);
    msg.setSourceEntity(223U);
    msg.setDestination(4083U);
    msg.setDestinationEntity(62U);
    msg.actions.assign("LEUJTEUIPOKZJPGOKCHCTBFUNGVXTVLENTPCWXXPEOVQLPFMMVQSWZABLGIWSMYRACITGIZAFEEOGDIPDDHN");

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
    msg.setTimeStamp(0.379351990333);
    msg.setSource(2947U);
    msg.setSourceEntity(237U);
    msg.setDestination(49779U);
    msg.setDestinationEntity(0U);
    msg.actions.assign("TUXZDFERRXYFLNILZFMQEIGBCJQJGUHQJPDXLBTVNZCTBLCLWUHMAASAWYPEMFKITDAMOVNANEOEXQUISWKZCLYWOUULHZHYQEKHJSYIWDVPZPCNKDASLXSKXRXBURCHFYKVMWWVXFZSKOPXMVABIQFAJYHNTDCVDFJGGWROATKRGNXEIORYAZPIVHBZIBRSQBPCMDWRYNWOMEEVLNZTTTJCUBGKRO");

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
    msg.setTimeStamp(0.875274647661);
    msg.setSource(24617U);
    msg.setSourceEntity(127U);
    msg.setDestination(51060U);
    msg.setDestinationEntity(231U);
    msg.button = 83U;
    msg.value = 149U;

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
    msg.setTimeStamp(0.199137184788);
    msg.setSource(64268U);
    msg.setSourceEntity(199U);
    msg.setDestination(19731U);
    msg.setDestinationEntity(42U);
    msg.button = 69U;
    msg.value = 149U;

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
    msg.setTimeStamp(0.241586294145);
    msg.setSource(59915U);
    msg.setSourceEntity(63U);
    msg.setDestination(14011U);
    msg.setDestinationEntity(61U);
    msg.button = 228U;
    msg.value = 162U;

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
    msg.setTimeStamp(0.638589863676);
    msg.setSource(4271U);
    msg.setSourceEntity(196U);
    msg.setDestination(37090U);
    msg.setDestinationEntity(106U);
    msg.op = 98U;
    msg.text.assign("RMRVBTLBWYGUQTAYZNLGJQYZQWVKANGXRYRRDWSDTUNXJLJMWPOTMZBYTCDJUOXKVOVKHOEYCXEBARKSFHMEKELLHEOPBFVCNMOUNMBDAT");

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
    msg.setTimeStamp(0.881877160061);
    msg.setSource(58997U);
    msg.setSourceEntity(62U);
    msg.setDestination(18168U);
    msg.setDestinationEntity(5U);
    msg.op = 235U;
    msg.text.assign("TOAAKFPLJDUYOZYVHHZJBVMKEQGWVBPTILZHDCPLAPFDEFVGXMWOONBMZCAXZSMULYZQCEEU");

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
    msg.setTimeStamp(0.312901975367);
    msg.setSource(46085U);
    msg.setSourceEntity(153U);
    msg.setDestination(26941U);
    msg.setDestinationEntity(4U);
    msg.op = 199U;
    msg.text.assign("FECBADWUAFQK");

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
    msg.setTimeStamp(0.575616050756);
    msg.setSource(23936U);
    msg.setSourceEntity(237U);
    msg.setDestination(56659U);
    msg.setDestinationEntity(120U);
    msg.op = 2U;
    msg.time_remain = 0.683648039167;
    msg.sched_time = 0.680112902752;

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
    msg.setTimeStamp(0.431833081152);
    msg.setSource(19573U);
    msg.setSourceEntity(105U);
    msg.setDestination(27129U);
    msg.setDestinationEntity(244U);
    msg.op = 140U;
    msg.time_remain = 0.52366086499;
    msg.sched_time = 0.300663806063;

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
    msg.setTimeStamp(0.24586410685);
    msg.setSource(4570U);
    msg.setSourceEntity(168U);
    msg.setDestination(53877U);
    msg.setDestinationEntity(2U);
    msg.op = 5U;
    msg.time_remain = 0.193211192634;
    msg.sched_time = 0.563875420848;

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
    msg.setTimeStamp(0.6033689824);
    msg.setSource(4894U);
    msg.setSourceEntity(139U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(144U);
    msg.name.assign("JPRBFKWTLVMOYJKTYVKLISSWZHGWDBGAKESRUNSHTADEL");
    msg.op = 18U;
    msg.sched_time = 0.031805835769;

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
    msg.setTimeStamp(0.252853919496);
    msg.setSource(24141U);
    msg.setSourceEntity(118U);
    msg.setDestination(44562U);
    msg.setDestinationEntity(6U);
    msg.name.assign("IFKDKZBMBRNMVIFLAVGMPWBCXVXDLSVILVRQRROYUIKSEIMMXETJDGXHNOFPPNGEAEQUPUZCAJOYBDXNHFSUBKSOUQATVAWLPYIWZLYWSEHFXDZDXDFHWBJTGDJHPZCPEMLKIRUSZVXZEUHQNXSGUULWCMDCQZAOHIEYNBJPAPYCKYJQFKMDBWLIQTNUWBJTLZJYWQHTSYPMTFMHKCZNTTRYLKO");
    msg.op = 229U;
    msg.sched_time = 0.283641865406;

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
    msg.setTimeStamp(0.160367505384);
    msg.setSource(51403U);
    msg.setSourceEntity(243U);
    msg.setDestination(22627U);
    msg.setDestinationEntity(149U);
    msg.name.assign("GXEKVDXGYIMOZQPBZYSFQCJVEHWPHELSYRPBXUUPGCKAKTTSDSWFUBGYKVIUDGESCVZACXBSXJHIKCIBXHMUAPJLWUYFYQNWHWEUPIWTDVFBNDOHGFQUEFAXZMELLKKJLDMGQBPNEYOBGQVMZVTKHSFAIWTLRNCKAWYDEXOSFIGVRFZNCDOTMPYLJRATHQZAOCTZWNDEUNLTCQXRNYOZ");
    msg.op = 27U;
    msg.sched_time = 0.217953546973;

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
    msg.setTimeStamp(0.941207658072);
    msg.setSource(31466U);
    msg.setSourceEntity(139U);
    msg.setDestination(11890U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.818714013595);
    msg.setSource(44046U);
    msg.setSourceEntity(61U);
    msg.setDestination(63047U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.764050401945);
    msg.setSource(40514U);
    msg.setSourceEntity(51U);
    msg.setDestination(20777U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.321472975169);
    msg.setSource(2414U);
    msg.setSourceEntity(33U);
    msg.setDestination(9068U);
    msg.setDestinationEntity(56U);
    msg.name.assign("PDABJGVKQPLXHIIWZJEXMTRGTEZFCSARNGGEIJMVRQNGVMTWWZMGPLGSLFXUJDXWLVXRXMRNPOUANHSQEYZARWMOAOVNSKBSDYFGDPLRKNWLICOFGRDVTYHWOTWNSLXUCEPVLPXZHDMHKJCOYQYAQJEKZDTYZSHQCTJUIEAYNUZZUBUMTQWJICSFRXUBATCEZPN");
    msg.state = 51U;

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
    msg.setTimeStamp(0.667465900282);
    msg.setSource(52171U);
    msg.setSourceEntity(55U);
    msg.setDestination(35547U);
    msg.setDestinationEntity(110U);
    msg.name.assign("OWEQFGSUNQPQVHWGUNPFUDERSCTGFPNVONJEMTDAUICKSIDMRLZBIZTZQAUKBSJVRMBEGSXPJKPYDJIXJBPXPIRTDKOFMCMCGHSKQBCSKAHLJXDALTWWBVRUKYWFLAKPPYVZCIOFCEALRQHXXGLSSAREAQNUVOQXNEH");
    msg.state = 20U;

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
    msg.setTimeStamp(0.989008757954);
    msg.setSource(41350U);
    msg.setSourceEntity(243U);
    msg.setDestination(34498U);
    msg.setDestinationEntity(61U);
    msg.name.assign("ADXPGDOJMWTGYDMUIOIYJEKYZNGIUXKFIZMELNDNLSCSBZLN");
    msg.state = 110U;

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
    msg.setTimeStamp(0.890173175653);
    msg.setSource(61407U);
    msg.setSourceEntity(185U);
    msg.setDestination(26934U);
    msg.setDestinationEntity(1U);
    msg.name.assign("ZZKQOXPSPEQEESUXXIFBUFJK");
    msg.value = 185U;

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
    msg.setTimeStamp(0.437456098799);
    msg.setSource(11500U);
    msg.setSourceEntity(66U);
    msg.setDestination(20635U);
    msg.setDestinationEntity(16U);
    msg.name.assign("ZWNRPZHIWYTKR");
    msg.value = 241U;

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
    msg.setTimeStamp(0.82021069614);
    msg.setSource(45605U);
    msg.setSourceEntity(204U);
    msg.setDestination(44067U);
    msg.setDestinationEntity(144U);
    msg.name.assign("DWFPQKDOMODWBTXREDFAGZEGUCHYOFIUTZQXMUPMIENERWCHRAILODNRJCFMPSOPOLPVSPXZQYMKYOUWDNDDVUCPIAPLKNTAKQKJFCMMAQJQEHOJHEZSKZIJXGJRFVBGHCKHCPYVZLHTFNXBLSJXQYVLBWFTUFNSDXTZLSRVQGDWNBGUEVYEZBVBIJOYUAMAKJYGAIWLYTS");
    msg.value = 11U;

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
    msg.setTimeStamp(0.948180750616);
    msg.setSource(33756U);
    msg.setSourceEntity(118U);
    msg.setDestination(52324U);
    msg.setDestinationEntity(75U);
    msg.name.assign("GGFSFEJNQVCXIIHXOQYUYJKBYACUMUMGCNHEIYSHERQT");

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
    msg.setTimeStamp(0.0728990149552);
    msg.setSource(12961U);
    msg.setSourceEntity(155U);
    msg.setDestination(12680U);
    msg.setDestinationEntity(224U);
    msg.name.assign("WJHTLWKYELFTNDGKUSYAWVXOZEZOKTPLMYXLMJXJLFSUHBGLUXFEOEBYJSCJMTVKOWPVAANQCIESQKMYTPEWZZRGPFPDNDOGRVHIAXSRINHYIZKHZXTOHGYDPRDBMBYLRQPBQPTGNOAQHIRECVEZMXHUXNCSDCYNWEVRKCUB");

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
    msg.setTimeStamp(0.381302538216);
    msg.setSource(225U);
    msg.setSourceEntity(12U);
    msg.setDestination(62124U);
    msg.setDestinationEntity(86U);
    msg.name.assign("XJUWTJRFOLWUUOALCZKAFBOZFFJXEHDHY");

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
    msg.setTimeStamp(0.411354621626);
    msg.setSource(48911U);
    msg.setSourceEntity(121U);
    msg.setDestination(26578U);
    msg.setDestinationEntity(151U);
    msg.name.assign("RLGUTJRJOXNDBTR");
    msg.value = 29U;

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
    msg.setTimeStamp(0.683716874296);
    msg.setSource(27768U);
    msg.setSourceEntity(3U);
    msg.setDestination(59670U);
    msg.setDestinationEntity(205U);
    msg.name.assign("MGDAXHBXHMQKBRYSABOQDOVWEUBJJMMKESQVGLAQHDLUAHYCDVUQTYYVOKTNKNUMLNYBHUCFZFXTJMCCWJPRV");
    msg.value = 30U;

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
    msg.setTimeStamp(0.771746788217);
    msg.setSource(2109U);
    msg.setSourceEntity(58U);
    msg.setDestination(40957U);
    msg.setDestinationEntity(78U);
    msg.name.assign("THOVBVNFPTIOEUOVWLTLPMKOSGCTIJIHVFJRZKEMUZDUOLDNAOMEFJSQKKBWHZYPDAWWY");
    msg.value = 116U;

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
    msg.setTimeStamp(0.288676816956);
    msg.setSource(39947U);
    msg.setSourceEntity(144U);
    msg.setDestination(60235U);
    msg.setDestinationEntity(7U);
    msg.id = 51U;
    msg.period = 536198405U;
    msg.duty_cycle = 2078636219U;

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
    msg.setTimeStamp(0.818632725947);
    msg.setSource(10235U);
    msg.setSourceEntity(250U);
    msg.setDestination(345U);
    msg.setDestinationEntity(172U);
    msg.id = 59U;
    msg.period = 3263015812U;
    msg.duty_cycle = 3002728852U;

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
    msg.setTimeStamp(0.929168644608);
    msg.setSource(51243U);
    msg.setSourceEntity(80U);
    msg.setDestination(19722U);
    msg.setDestinationEntity(34U);
    msg.id = 39U;
    msg.period = 4269828645U;
    msg.duty_cycle = 732795735U;

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
    msg.setTimeStamp(0.830975746918);
    msg.setSource(29162U);
    msg.setSourceEntity(209U);
    msg.setDestination(39990U);
    msg.setDestinationEntity(103U);
    msg.id = 209U;
    msg.period = 2191354654U;
    msg.duty_cycle = 2900836685U;

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
    msg.setTimeStamp(0.988239262447);
    msg.setSource(6166U);
    msg.setSourceEntity(76U);
    msg.setDestination(35456U);
    msg.setDestinationEntity(213U);
    msg.id = 58U;
    msg.period = 377999802U;
    msg.duty_cycle = 1865038863U;

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
    msg.setTimeStamp(0.165330008965);
    msg.setSource(53454U);
    msg.setSourceEntity(49U);
    msg.setDestination(52894U);
    msg.setDestinationEntity(99U);
    msg.id = 121U;
    msg.period = 3931368088U;
    msg.duty_cycle = 1848142578U;

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
    msg.setTimeStamp(0.386090968609);
    msg.setSource(6294U);
    msg.setSourceEntity(33U);
    msg.setDestination(32906U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.548165989935;
    msg.lon = 0.742280086466;
    msg.height = 0.183146805701;
    msg.x = 0.884238809531;
    msg.y = 0.162971203654;
    msg.z = 0.927066766299;
    msg.phi = 0.755837807857;
    msg.theta = 0.832833374498;
    msg.psi = 0.431626328394;
    msg.u = 0.863825615133;
    msg.v = 0.596220860772;
    msg.w = 0.105415885721;
    msg.vx = 0.485576734191;
    msg.vy = 0.304159914239;
    msg.vz = 0.192809587329;
    msg.p = 0.0957143194103;
    msg.q = 0.15924921085;
    msg.r = 0.623631326754;
    msg.depth = 0.654982008861;
    msg.alt = 0.105327946243;

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
    msg.setTimeStamp(0.550142621697);
    msg.setSource(9892U);
    msg.setSourceEntity(34U);
    msg.setDestination(61563U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.57743804154;
    msg.lon = 0.715954020188;
    msg.height = 0.387161735072;
    msg.x = 0.310934234776;
    msg.y = 0.226701068442;
    msg.z = 0.162154580332;
    msg.phi = 0.0130847141364;
    msg.theta = 0.549746949357;
    msg.psi = 0.731808182207;
    msg.u = 0.643697234685;
    msg.v = 0.408079533678;
    msg.w = 0.928692177912;
    msg.vx = 0.463983211093;
    msg.vy = 0.816634138918;
    msg.vz = 0.91610645525;
    msg.p = 0.913961742536;
    msg.q = 0.320949283334;
    msg.r = 0.744041521869;
    msg.depth = 0.416531115306;
    msg.alt = 0.0156836087147;

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
    msg.setTimeStamp(0.0405493892631);
    msg.setSource(26389U);
    msg.setSourceEntity(209U);
    msg.setDestination(4712U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.179373040895;
    msg.lon = 0.944799314903;
    msg.height = 0.099445115662;
    msg.x = 0.646337265487;
    msg.y = 0.0594437781981;
    msg.z = 0.456366224889;
    msg.phi = 0.432247277003;
    msg.theta = 0.28899110106;
    msg.psi = 0.880458356888;
    msg.u = 0.658471277843;
    msg.v = 0.708984369474;
    msg.w = 0.642042342434;
    msg.vx = 0.0648742119228;
    msg.vy = 0.366471900954;
    msg.vz = 0.38574514163;
    msg.p = 0.301170210901;
    msg.q = 0.875624736622;
    msg.r = 0.365722170952;
    msg.depth = 0.645223573505;
    msg.alt = 0.230892393841;

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
    msg.setTimeStamp(0.282094853613);
    msg.setSource(20949U);
    msg.setSourceEntity(232U);
    msg.setDestination(51991U);
    msg.setDestinationEntity(198U);
    msg.x = 0.844719778521;
    msg.y = 0.493219491253;
    msg.z = 0.654552269132;

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
    msg.setTimeStamp(0.11936045848);
    msg.setSource(44577U);
    msg.setSourceEntity(246U);
    msg.setDestination(65534U);
    msg.setDestinationEntity(133U);
    msg.x = 0.505434266944;
    msg.y = 0.979109925718;
    msg.z = 0.238122782993;

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
    msg.setTimeStamp(0.489811392408);
    msg.setSource(27595U);
    msg.setSourceEntity(118U);
    msg.setDestination(1498U);
    msg.setDestinationEntity(235U);
    msg.x = 0.855167994781;
    msg.y = 0.171755142774;
    msg.z = 0.45949994237;

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
    msg.setTimeStamp(0.462676282772);
    msg.setSource(46823U);
    msg.setSourceEntity(150U);
    msg.setDestination(39043U);
    msg.setDestinationEntity(253U);
    msg.value = 0.768963665557;

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
    msg.setTimeStamp(0.619104919649);
    msg.setSource(54299U);
    msg.setSourceEntity(124U);
    msg.setDestination(30909U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0122942924297;

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
    msg.setTimeStamp(0.0733648192362);
    msg.setSource(13762U);
    msg.setSourceEntity(8U);
    msg.setDestination(12012U);
    msg.setDestinationEntity(231U);
    msg.value = 0.637696881336;

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
    msg.setTimeStamp(0.179019433704);
    msg.setSource(13928U);
    msg.setSourceEntity(95U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(198U);
    msg.value = 0.315736242797;

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
    msg.setTimeStamp(0.00203076984446);
    msg.setSource(15316U);
    msg.setSourceEntity(185U);
    msg.setDestination(53864U);
    msg.setDestinationEntity(222U);
    msg.value = 0.341036374897;

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
    msg.setTimeStamp(0.744448861765);
    msg.setSource(21180U);
    msg.setSourceEntity(6U);
    msg.setDestination(56116U);
    msg.setDestinationEntity(56U);
    msg.value = 0.159127461413;

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
    msg.setTimeStamp(0.491358892851);
    msg.setSource(33477U);
    msg.setSourceEntity(197U);
    msg.setDestination(45812U);
    msg.setDestinationEntity(95U);
    msg.x = 0.889621105937;
    msg.y = 0.523741471026;
    msg.z = 0.241615457131;
    msg.phi = 0.59449022352;
    msg.theta = 0.367400139735;
    msg.psi = 0.659428964787;
    msg.p = 0.176082060145;
    msg.q = 0.0282391077026;
    msg.r = 0.12652039063;
    msg.u = 0.872465360047;
    msg.v = 0.545870029664;
    msg.w = 0.0256085457856;
    msg.bias_psi = 0.0883223315643;
    msg.bias_r = 0.201166037131;

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
    msg.setTimeStamp(0.385184801048);
    msg.setSource(30518U);
    msg.setSourceEntity(72U);
    msg.setDestination(55024U);
    msg.setDestinationEntity(203U);
    msg.x = 0.542887349643;
    msg.y = 0.577090338014;
    msg.z = 0.349495209971;
    msg.phi = 0.0296688046497;
    msg.theta = 0.641922727858;
    msg.psi = 0.793956763515;
    msg.p = 0.397884526964;
    msg.q = 0.250736951139;
    msg.r = 0.656535823956;
    msg.u = 0.827464070786;
    msg.v = 0.379621742269;
    msg.w = 0.159061464981;
    msg.bias_psi = 0.0909026423636;
    msg.bias_r = 0.169101812578;

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
    msg.setTimeStamp(0.63088116715);
    msg.setSource(36188U);
    msg.setSourceEntity(83U);
    msg.setDestination(62018U);
    msg.setDestinationEntity(78U);
    msg.x = 0.0225646516123;
    msg.y = 0.71427142237;
    msg.z = 0.749081195802;
    msg.phi = 0.336761473815;
    msg.theta = 0.514006749849;
    msg.psi = 0.909527567438;
    msg.p = 0.14268204231;
    msg.q = 0.779232013154;
    msg.r = 0.0886953096518;
    msg.u = 0.505797139259;
    msg.v = 0.00857370074125;
    msg.w = 0.950285082618;
    msg.bias_psi = 0.0331814651505;
    msg.bias_r = 0.0632956177836;

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
    msg.setTimeStamp(0.963930665542);
    msg.setSource(10083U);
    msg.setSourceEntity(120U);
    msg.setDestination(61079U);
    msg.setDestinationEntity(138U);
    msg.bias_psi = 0.577014259225;
    msg.bias_r = 0.668825662261;
    msg.cog = 0.885898793938;
    msg.cyaw = 0.997983196737;
    msg.lbl_rej_level = 0.737063830567;
    msg.gps_rej_level = 0.65660526112;
    msg.custom_x = 0.0439316317977;
    msg.custom_y = 0.65970181664;
    msg.custom_z = 0.649907501418;

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
    msg.setTimeStamp(0.368379193497);
    msg.setSource(18374U);
    msg.setSourceEntity(58U);
    msg.setDestination(48042U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.138466963842;
    msg.bias_r = 0.808792819922;
    msg.cog = 0.137044458197;
    msg.cyaw = 0.410558235755;
    msg.lbl_rej_level = 0.00258691612795;
    msg.gps_rej_level = 0.409134209363;
    msg.custom_x = 0.188371764218;
    msg.custom_y = 0.682173639144;
    msg.custom_z = 0.528016122479;

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
    msg.setTimeStamp(0.236996749978);
    msg.setSource(30885U);
    msg.setSourceEntity(25U);
    msg.setDestination(38571U);
    msg.setDestinationEntity(104U);
    msg.bias_psi = 0.176882721039;
    msg.bias_r = 0.423878832647;
    msg.cog = 0.386864822726;
    msg.cyaw = 0.175318292447;
    msg.lbl_rej_level = 0.161969237424;
    msg.gps_rej_level = 0.796796920043;
    msg.custom_x = 0.206907398689;
    msg.custom_y = 0.37185529877;
    msg.custom_z = 0.226757129829;

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
    msg.setTimeStamp(0.841557564791);
    msg.setSource(25158U);
    msg.setSourceEntity(233U);
    msg.setDestination(7040U);
    msg.setDestinationEntity(149U);
    msg.utc_time = 0.734201134408;
    msg.reason = 95U;

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
    msg.setTimeStamp(0.655143540678);
    msg.setSource(61704U);
    msg.setSourceEntity(134U);
    msg.setDestination(39542U);
    msg.setDestinationEntity(251U);
    msg.utc_time = 0.609818184548;
    msg.reason = 204U;

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
    msg.setTimeStamp(0.521730021322);
    msg.setSource(42643U);
    msg.setSourceEntity(57U);
    msg.setDestination(54161U);
    msg.setDestinationEntity(191U);
    msg.utc_time = 0.798148206372;
    msg.reason = 7U;

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
    msg.setTimeStamp(0.236350858553);
    msg.setSource(54722U);
    msg.setSourceEntity(143U);
    msg.setDestination(7428U);
    msg.setDestinationEntity(42U);
    msg.id = 62U;
    msg.range = 0.28460495561;
    msg.acceptance = 81U;

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
    msg.setTimeStamp(0.256965370221);
    msg.setSource(47931U);
    msg.setSourceEntity(7U);
    msg.setDestination(49251U);
    msg.setDestinationEntity(182U);
    msg.id = 154U;
    msg.range = 0.829486148414;
    msg.acceptance = 135U;

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
    msg.setTimeStamp(0.247326834304);
    msg.setSource(46464U);
    msg.setSourceEntity(177U);
    msg.setDestination(47638U);
    msg.setDestinationEntity(211U);
    msg.id = 10U;
    msg.range = 0.96354555037;
    msg.acceptance = 208U;

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
    msg.setTimeStamp(0.396633297001);
    msg.setSource(51586U);
    msg.setSourceEntity(88U);
    msg.setDestination(53994U);
    msg.setDestinationEntity(19U);
    msg.type = 97U;
    msg.reason = 166U;
    msg.value = 0.516086796177;
    msg.timestep = 0.155816140179;

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
    msg.setTimeStamp(0.415580180554);
    msg.setSource(54435U);
    msg.setSourceEntity(74U);
    msg.setDestination(47294U);
    msg.setDestinationEntity(214U);
    msg.type = 190U;
    msg.reason = 188U;
    msg.value = 0.406082529577;
    msg.timestep = 0.221525949458;

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
    msg.setTimeStamp(0.0977257568127);
    msg.setSource(20038U);
    msg.setSourceEntity(222U);
    msg.setDestination(38072U);
    msg.setDestinationEntity(24U);
    msg.type = 67U;
    msg.reason = 104U;
    msg.value = 0.93824172684;
    msg.timestep = 0.330727063976;

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
    msg.setTimeStamp(0.586720165593);
    msg.setSource(4891U);
    msg.setSourceEntity(226U);
    msg.setDestination(23400U);
    msg.setDestinationEntity(83U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WMYKYPYJBRDSFVXLMRQLMVIYDZDFLTILAIXXGBRUGMCZHNQZOWNGORGQMFVGAOGCMZQDWTEOPBPKBSLAJILRFPHAWHDUXFFWIZRJTOCTDKPERSVEEHHGTFUJKWZCSXUSNSUQRMNFVBIOTXADSLLAZBLSAVTVKKQONXHQGYEYETVCMNOBUCZYCJDIXAPXNWUBGFCOUKVPIRUGCWQKPYIMNHWDAEWYJNHKUYZXMBJDEZKJTJQQHHPOTEFSLB");
    tmp_msg_0.lat = 0.0826714264963;
    tmp_msg_0.lon = 0.610519586866;
    tmp_msg_0.depth = 0.531333467988;
    tmp_msg_0.query_channel = 57U;
    tmp_msg_0.reply_channel = 78U;
    tmp_msg_0.transponder_delay = 37U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.972698644317;
    msg.y = 0.255827889768;
    msg.var_x = 0.529762974596;
    msg.var_y = 0.743102068815;
    msg.distance = 0.291876023512;

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
    msg.setTimeStamp(0.526492772623);
    msg.setSource(22751U);
    msg.setSourceEntity(210U);
    msg.setDestination(32028U);
    msg.setDestinationEntity(87U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CMWSGZHGCNDKNYBMNJNQIETDJFCKFOAALDAVUOBUERRVOEWHSXAYFUHJBVMCXBKAKFLUUDLIWRPSNMZPSFMBXCBLAESCUDQXSQNYGSGHOJQZAVFEKEIPVKGLJKDOFDUV");
    tmp_msg_0.lat = 0.522864867382;
    tmp_msg_0.lon = 0.0775178121095;
    tmp_msg_0.depth = 0.11562104221;
    tmp_msg_0.query_channel = 158U;
    tmp_msg_0.reply_channel = 253U;
    tmp_msg_0.transponder_delay = 240U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.149983799553;
    msg.y = 0.927310324909;
    msg.var_x = 0.0531168620874;
    msg.var_y = 0.844426428726;
    msg.distance = 0.226508266384;

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
    msg.setTimeStamp(0.661135929129);
    msg.setSource(26432U);
    msg.setSourceEntity(198U);
    msg.setDestination(54739U);
    msg.setDestinationEntity(252U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KLGVREJKOXDSBRFGOOGBIJTCHJQIFJMFUCTWXBSADCMQNLXPTQKMQIHXJPVBLZYCTEUVGIPGWVAQBJSCDIWHZWGGTOUHXLYIAOPYLRLCJQMBAADSNXZNKDNGQZKNUT");
    tmp_msg_0.lat = 0.415751244952;
    tmp_msg_0.lon = 0.212061201664;
    tmp_msg_0.depth = 0.295087387467;
    tmp_msg_0.query_channel = 75U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 126U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.861273103671;
    msg.y = 0.366528220595;
    msg.var_x = 0.786079049782;
    msg.var_y = 0.963623294578;
    msg.distance = 0.00929907648302;

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
    msg.setTimeStamp(0.831196718171);
    msg.setSource(12259U);
    msg.setSourceEntity(77U);
    msg.setDestination(27108U);
    msg.setDestinationEntity(196U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.866033816506);
    msg.setSource(59919U);
    msg.setSourceEntity(107U);
    msg.setDestination(54468U);
    msg.setDestinationEntity(29U);
    msg.state = 196U;

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
    msg.setTimeStamp(0.479631182166);
    msg.setSource(30622U);
    msg.setSourceEntity(5U);
    msg.setDestination(7920U);
    msg.setDestinationEntity(192U);
    msg.state = 64U;

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
    msg.setTimeStamp(0.0993484692456);
    msg.setSource(57117U);
    msg.setSourceEntity(123U);
    msg.setDestination(52651U);
    msg.setDestinationEntity(176U);
    msg.x = 0.46381517185;
    msg.y = 0.81527185054;
    msg.z = 0.692364493422;

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
    msg.setTimeStamp(0.420307534609);
    msg.setSource(37643U);
    msg.setSourceEntity(7U);
    msg.setDestination(17480U);
    msg.setDestinationEntity(102U);
    msg.x = 0.994557009984;
    msg.y = 0.819709128041;
    msg.z = 0.668508029934;

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
    msg.setTimeStamp(0.515027200134);
    msg.setSource(13747U);
    msg.setSourceEntity(73U);
    msg.setDestination(61108U);
    msg.setDestinationEntity(32U);
    msg.x = 0.0430977945537;
    msg.y = 0.830691996556;
    msg.z = 0.374269718295;

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
    msg.setTimeStamp(0.889608903171);
    msg.setSource(27814U);
    msg.setSourceEntity(229U);
    msg.setDestination(7896U);
    msg.setDestinationEntity(201U);
    msg.va = 0.516881630388;
    msg.aoa = 0.0920373729499;
    msg.ssa = 0.101377440987;

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
    msg.setTimeStamp(0.224388864877);
    msg.setSource(49418U);
    msg.setSourceEntity(66U);
    msg.setDestination(16829U);
    msg.setDestinationEntity(226U);
    msg.va = 0.392010586109;
    msg.aoa = 0.819459692478;
    msg.ssa = 0.707801801276;

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
    msg.setTimeStamp(0.724838330945);
    msg.setSource(31941U);
    msg.setSourceEntity(132U);
    msg.setDestination(29101U);
    msg.setDestinationEntity(116U);
    msg.va = 0.772425754181;
    msg.aoa = 0.20474007626;
    msg.ssa = 0.380348140828;

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
    msg.setTimeStamp(0.995562378814);
    msg.setSource(41750U);
    msg.setSourceEntity(201U);
    msg.setDestination(42768U);
    msg.setDestinationEntity(134U);
    msg.value = 0.98279426967;

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
    msg.setTimeStamp(0.935278543415);
    msg.setSource(31250U);
    msg.setSourceEntity(215U);
    msg.setDestination(29765U);
    msg.setDestinationEntity(198U);
    msg.value = 0.764302776706;

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
    msg.setTimeStamp(0.819336814397);
    msg.setSource(7208U);
    msg.setSourceEntity(49U);
    msg.setDestination(21641U);
    msg.setDestinationEntity(39U);
    msg.value = 0.18789164534;

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
    msg.setTimeStamp(0.674231456508);
    msg.setSource(20802U);
    msg.setSourceEntity(221U);
    msg.setDestination(41453U);
    msg.setDestinationEntity(60U);
    msg.value = 0.904996266439;
    msg.z_units = 154U;

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
    msg.setTimeStamp(0.23455418781);
    msg.setSource(53059U);
    msg.setSourceEntity(232U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(108U);
    msg.value = 0.911976859665;
    msg.z_units = 158U;

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
    msg.setTimeStamp(0.520748636271);
    msg.setSource(20884U);
    msg.setSourceEntity(18U);
    msg.setDestination(5970U);
    msg.setDestinationEntity(152U);
    msg.value = 0.136593806412;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.124408438152);
    msg.setSource(17755U);
    msg.setSourceEntity(105U);
    msg.setDestination(5144U);
    msg.setDestinationEntity(71U);
    msg.value = 0.791077127737;
    msg.speed_units = 71U;

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
    msg.setTimeStamp(0.812497488776);
    msg.setSource(58601U);
    msg.setSourceEntity(28U);
    msg.setDestination(65191U);
    msg.setDestinationEntity(147U);
    msg.value = 0.588776533322;
    msg.speed_units = 211U;

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
    msg.setTimeStamp(0.494605067071);
    msg.setSource(38982U);
    msg.setSourceEntity(168U);
    msg.setDestination(10724U);
    msg.setDestinationEntity(249U);
    msg.value = 0.870195500439;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.984558416999);
    msg.setSource(40051U);
    msg.setSourceEntity(92U);
    msg.setDestination(7004U);
    msg.setDestinationEntity(177U);
    msg.value = 0.288366047434;

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
    msg.setTimeStamp(0.802724127764);
    msg.setSource(59971U);
    msg.setSourceEntity(230U);
    msg.setDestination(2188U);
    msg.setDestinationEntity(208U);
    msg.value = 0.161571042639;

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
    msg.setTimeStamp(0.554842986245);
    msg.setSource(64810U);
    msg.setSourceEntity(176U);
    msg.setDestination(12497U);
    msg.setDestinationEntity(242U);
    msg.value = 0.511801878799;

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
    msg.setTimeStamp(0.421916302287);
    msg.setSource(35188U);
    msg.setSourceEntity(94U);
    msg.setDestination(56341U);
    msg.setDestinationEntity(114U);
    msg.value = 0.496205754413;

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
    msg.setTimeStamp(0.349148313606);
    msg.setSource(20797U);
    msg.setSourceEntity(249U);
    msg.setDestination(10878U);
    msg.setDestinationEntity(213U);
    msg.value = 0.599573984741;

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
    msg.setTimeStamp(0.430034925419);
    msg.setSource(26130U);
    msg.setSourceEntity(243U);
    msg.setDestination(25946U);
    msg.setDestinationEntity(251U);
    msg.value = 0.553054246802;

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
    msg.setTimeStamp(0.665966966564);
    msg.setSource(30406U);
    msg.setSourceEntity(18U);
    msg.setDestination(29798U);
    msg.setDestinationEntity(223U);
    msg.value = 0.970850589577;

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
    msg.setTimeStamp(0.174597394995);
    msg.setSource(23528U);
    msg.setSourceEntity(189U);
    msg.setDestination(45808U);
    msg.setDestinationEntity(22U);
    msg.value = 0.809390593434;

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
    msg.setTimeStamp(0.822190441009);
    msg.setSource(48778U);
    msg.setSourceEntity(171U);
    msg.setDestination(47782U);
    msg.setDestinationEntity(95U);
    msg.value = 0.880869431133;

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
    msg.setTimeStamp(0.23742972649);
    msg.setSource(59912U);
    msg.setSourceEntity(139U);
    msg.setDestination(14854U);
    msg.setDestinationEntity(127U);
    msg.path_ref = 1595216775U;
    msg.start_lat = 0.916697618991;
    msg.start_lon = 0.0606122950929;
    msg.start_z = 0.8840490551;
    msg.start_z_units = 156U;
    msg.end_lat = 0.593250049998;
    msg.end_lon = 0.793864291902;
    msg.end_z = 0.359150827422;
    msg.end_z_units = 124U;
    msg.speed = 0.132518884369;
    msg.speed_units = 36U;
    msg.lradius = 0.270932660306;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.137473206661);
    msg.setSource(55880U);
    msg.setSourceEntity(95U);
    msg.setDestination(47448U);
    msg.setDestinationEntity(207U);
    msg.path_ref = 2092539288U;
    msg.start_lat = 0.408205331941;
    msg.start_lon = 0.945192953165;
    msg.start_z = 0.362008668977;
    msg.start_z_units = 135U;
    msg.end_lat = 0.220733489761;
    msg.end_lon = 0.166318785797;
    msg.end_z = 0.434430229974;
    msg.end_z_units = 113U;
    msg.speed = 0.356571131636;
    msg.speed_units = 65U;
    msg.lradius = 0.0603484760492;
    msg.flags = 139U;

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
    msg.setTimeStamp(0.737150349161);
    msg.setSource(47506U);
    msg.setSourceEntity(73U);
    msg.setDestination(12802U);
    msg.setDestinationEntity(69U);
    msg.path_ref = 932842544U;
    msg.start_lat = 0.515521984864;
    msg.start_lon = 0.497167607874;
    msg.start_z = 0.692607878098;
    msg.start_z_units = 45U;
    msg.end_lat = 0.453585864608;
    msg.end_lon = 0.724800590432;
    msg.end_z = 0.468841999185;
    msg.end_z_units = 143U;
    msg.speed = 0.161492197211;
    msg.speed_units = 132U;
    msg.lradius = 0.903287089365;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.786233335398);
    msg.setSource(10305U);
    msg.setSourceEntity(138U);
    msg.setDestination(44589U);
    msg.setDestinationEntity(159U);
    msg.x = 0.780172788352;
    msg.y = 0.885656004366;
    msg.z = 0.148268821233;
    msg.k = 0.839429616181;
    msg.m = 0.881495497576;
    msg.n = 0.829487523502;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.0464008210335);
    msg.setSource(41156U);
    msg.setSourceEntity(19U);
    msg.setDestination(63762U);
    msg.setDestinationEntity(0U);
    msg.x = 0.489500041935;
    msg.y = 0.759662552941;
    msg.z = 0.743323443364;
    msg.k = 0.293931690616;
    msg.m = 0.230293971417;
    msg.n = 0.0071552735348;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.873605889941);
    msg.setSource(4231U);
    msg.setSourceEntity(229U);
    msg.setDestination(31295U);
    msg.setDestinationEntity(160U);
    msg.x = 0.923677330583;
    msg.y = 0.349870657381;
    msg.z = 0.929876183975;
    msg.k = 0.656873519358;
    msg.m = 0.519762268466;
    msg.n = 0.0816832646049;
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
    msg.setTimeStamp(0.30234179049);
    msg.setSource(55169U);
    msg.setSourceEntity(10U);
    msg.setDestination(30101U);
    msg.setDestinationEntity(200U);
    msg.value = 0.971422455714;

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
    msg.setTimeStamp(0.228929872605);
    msg.setSource(52044U);
    msg.setSourceEntity(84U);
    msg.setDestination(2436U);
    msg.setDestinationEntity(112U);
    msg.value = 0.268418229723;

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
    msg.setTimeStamp(0.035431863048);
    msg.setSource(18169U);
    msg.setSourceEntity(201U);
    msg.setDestination(19891U);
    msg.setDestinationEntity(151U);
    msg.value = 0.70363314975;

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
    msg.setTimeStamp(0.487799709204);
    msg.setSource(15726U);
    msg.setSourceEntity(227U);
    msg.setDestination(12005U);
    msg.setDestinationEntity(14U);
    msg.u = 0.877649559782;
    msg.v = 0.158704879374;
    msg.w = 0.0640074127556;
    msg.p = 0.876391008965;
    msg.q = 0.300527448811;
    msg.r = 0.742534689975;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.516096442716);
    msg.setSource(25061U);
    msg.setSourceEntity(94U);
    msg.setDestination(60169U);
    msg.setDestinationEntity(48U);
    msg.u = 0.151273204453;
    msg.v = 0.801646227594;
    msg.w = 0.324150431908;
    msg.p = 0.574234469655;
    msg.q = 0.0145833379063;
    msg.r = 0.561654078843;
    msg.flags = 50U;

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
    msg.setTimeStamp(0.492912099699);
    msg.setSource(15785U);
    msg.setSourceEntity(201U);
    msg.setDestination(10445U);
    msg.setDestinationEntity(214U);
    msg.u = 0.124485312307;
    msg.v = 0.378513572133;
    msg.w = 0.478355764078;
    msg.p = 0.356572511021;
    msg.q = 0.536244971244;
    msg.r = 0.593237900212;
    msg.flags = 99U;

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
    msg.setTimeStamp(0.972788869169);
    msg.setSource(51563U);
    msg.setSourceEntity(155U);
    msg.setDestination(3283U);
    msg.setDestinationEntity(87U);
    msg.path_ref = 2956161507U;
    msg.start_lat = 0.628850885136;
    msg.start_lon = 0.0121482722432;
    msg.start_z = 0.471102349964;
    msg.start_z_units = 210U;
    msg.end_lat = 0.888084032161;
    msg.end_lon = 0.5007752883;
    msg.end_z = 0.662940737785;
    msg.end_z_units = 139U;
    msg.lradius = 0.492341859294;
    msg.flags = 87U;
    msg.x = 0.948304205222;
    msg.y = 0.236786224516;
    msg.z = 0.925328604975;
    msg.vx = 0.571066720883;
    msg.vy = 0.769315297808;
    msg.vz = 0.31888795943;
    msg.course_error = 0.751926004018;
    msg.eta = 33596U;

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
    msg.setTimeStamp(0.976893851064);
    msg.setSource(8119U);
    msg.setSourceEntity(98U);
    msg.setDestination(63714U);
    msg.setDestinationEntity(92U);
    msg.path_ref = 1092247950U;
    msg.start_lat = 0.916569072843;
    msg.start_lon = 0.619717404351;
    msg.start_z = 0.377008014873;
    msg.start_z_units = 111U;
    msg.end_lat = 0.190051607952;
    msg.end_lon = 0.654345128957;
    msg.end_z = 0.204660957629;
    msg.end_z_units = 214U;
    msg.lradius = 0.474960794295;
    msg.flags = 150U;
    msg.x = 0.220602394127;
    msg.y = 0.500421087033;
    msg.z = 0.0619778588519;
    msg.vx = 0.536852119697;
    msg.vy = 0.52646794289;
    msg.vz = 0.36324343821;
    msg.course_error = 0.337579892922;
    msg.eta = 37383U;

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
    msg.setTimeStamp(0.448066519168);
    msg.setSource(59903U);
    msg.setSourceEntity(2U);
    msg.setDestination(33869U);
    msg.setDestinationEntity(123U);
    msg.path_ref = 2419841379U;
    msg.start_lat = 0.815688914614;
    msg.start_lon = 0.0772364168901;
    msg.start_z = 0.750688438327;
    msg.start_z_units = 209U;
    msg.end_lat = 0.618528685642;
    msg.end_lon = 0.364775614915;
    msg.end_z = 0.545865253456;
    msg.end_z_units = 174U;
    msg.lradius = 0.129844535695;
    msg.flags = 103U;
    msg.x = 0.92769878746;
    msg.y = 0.604607975703;
    msg.z = 0.0840459947451;
    msg.vx = 0.479801681528;
    msg.vy = 0.336044731599;
    msg.vz = 0.94377185431;
    msg.course_error = 0.592701295259;
    msg.eta = 62066U;

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
    msg.setTimeStamp(0.728952342547);
    msg.setSource(23937U);
    msg.setSourceEntity(45U);
    msg.setDestination(10446U);
    msg.setDestinationEntity(20U);
    msg.k = 0.562664358082;
    msg.m = 0.129678325889;
    msg.n = 0.810590065307;

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
    msg.setTimeStamp(0.92272671292);
    msg.setSource(3088U);
    msg.setSourceEntity(80U);
    msg.setDestination(15816U);
    msg.setDestinationEntity(54U);
    msg.k = 0.281220728919;
    msg.m = 0.248352108387;
    msg.n = 0.507939887605;

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
    msg.setTimeStamp(0.030654290892);
    msg.setSource(60772U);
    msg.setSourceEntity(136U);
    msg.setDestination(27557U);
    msg.setDestinationEntity(13U);
    msg.k = 0.0751276058273;
    msg.m = 0.545234083277;
    msg.n = 0.764729746218;

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
    msg.setTimeStamp(0.365507207796);
    msg.setSource(13914U);
    msg.setSourceEntity(49U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(166U);
    msg.p = 0.54836556495;
    msg.i = 0.329719742726;
    msg.d = 0.26598676287;
    msg.a = 0.316053679138;

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
    msg.setTimeStamp(0.564510396403);
    msg.setSource(20485U);
    msg.setSourceEntity(51U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(181U);
    msg.p = 0.502517649652;
    msg.i = 0.134009412574;
    msg.d = 0.337913782269;
    msg.a = 0.346449390325;

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
    msg.setTimeStamp(0.75556103938);
    msg.setSource(1450U);
    msg.setSourceEntity(170U);
    msg.setDestination(29084U);
    msg.setDestinationEntity(204U);
    msg.p = 0.268431310769;
    msg.i = 0.18207499444;
    msg.d = 0.54097279692;
    msg.a = 0.82183715236;

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
    msg.setTimeStamp(0.108442803446);
    msg.setSource(15564U);
    msg.setSourceEntity(142U);
    msg.setDestination(46661U);
    msg.setDestinationEntity(112U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.130867270004);
    msg.setSource(62074U);
    msg.setSourceEntity(127U);
    msg.setDestination(63917U);
    msg.setDestinationEntity(153U);
    msg.op = 237U;

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
    msg.setTimeStamp(0.953765811202);
    msg.setSource(62144U);
    msg.setSourceEntity(128U);
    msg.setDestination(2123U);
    msg.setDestinationEntity(47U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.892494162667);
    msg.setSource(26665U);
    msg.setSourceEntity(82U);
    msg.setDestination(47426U);
    msg.setDestinationEntity(14U);
    msg.x = 0.937990255979;
    msg.y = 0.581329047188;
    msg.z = 0.925086777899;
    msg.vx = 0.222478979899;
    msg.vy = 0.0677876788409;
    msg.vz = 0.0526765709564;
    msg.ax = 0.950890391288;
    msg.ay = 0.379553361073;
    msg.az = 0.461625365619;
    msg.flags = 23056U;

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
    msg.setTimeStamp(0.942948968079);
    msg.setSource(16176U);
    msg.setSourceEntity(54U);
    msg.setDestination(33793U);
    msg.setDestinationEntity(84U);
    msg.x = 0.716460082675;
    msg.y = 0.169651051867;
    msg.z = 0.304082562959;
    msg.vx = 0.102860969772;
    msg.vy = 0.2620459759;
    msg.vz = 0.704603763515;
    msg.ax = 0.915378037413;
    msg.ay = 0.85122502571;
    msg.az = 0.0865346501755;
    msg.flags = 51070U;

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
    msg.setTimeStamp(0.38110017242);
    msg.setSource(53366U);
    msg.setSourceEntity(170U);
    msg.setDestination(14525U);
    msg.setDestinationEntity(144U);
    msg.x = 0.188344899435;
    msg.y = 0.001860411568;
    msg.z = 0.0790823069174;
    msg.vx = 0.283675812339;
    msg.vy = 0.793373211963;
    msg.vz = 0.538615987;
    msg.ax = 0.642845696258;
    msg.ay = 0.929762675619;
    msg.az = 0.437084049194;
    msg.flags = 38612U;

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
    msg.setTimeStamp(0.290012674484);
    msg.setSource(51707U);
    msg.setSourceEntity(98U);
    msg.setDestination(22488U);
    msg.setDestinationEntity(73U);
    msg.value = 0.288143668349;

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
    msg.setTimeStamp(0.97376688269);
    msg.setSource(35399U);
    msg.setSourceEntity(179U);
    msg.setDestination(35675U);
    msg.setDestinationEntity(140U);
    msg.value = 0.141164476521;

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
    msg.setTimeStamp(0.585849980383);
    msg.setSource(37329U);
    msg.setSourceEntity(16U);
    msg.setDestination(10477U);
    msg.setDestinationEntity(25U);
    msg.value = 0.669820565466;

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
    msg.setTimeStamp(0.3300033673);
    msg.setSource(27667U);
    msg.setSourceEntity(50U);
    msg.setDestination(12637U);
    msg.setDestinationEntity(144U);
    msg.timeout = 42524U;
    msg.lat = 0.526404946643;
    msg.lon = 0.588944098315;
    msg.z = 0.302562493481;
    msg.z_units = 67U;
    msg.speed = 0.0785017112957;
    msg.speed_units = 1U;
    msg.roll = 0.23914490994;
    msg.pitch = 0.0621078203399;
    msg.yaw = 0.0199504341332;
    msg.custom.assign("WTTFDHKKBWKSECJRBTWWANBJGXRSDGQGHEQKECYMFQCOEAHDRGXBVZLVMGXOHGYVZUMKPWYWALIJEISAMDDBAQDIYJNHJRHONLFQZIMFYUGTTLIRYXZAIIRCRLGIVTEZZYVRMFJKFMLUHZQCGYZWBTPIBWYMXWCSUKNRBPOVLPUTMAKXNXEXCOJNC");

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
    msg.setTimeStamp(0.388027889591);
    msg.setSource(54897U);
    msg.setSourceEntity(95U);
    msg.setDestination(52361U);
    msg.setDestinationEntity(178U);
    msg.timeout = 65162U;
    msg.lat = 0.325131005814;
    msg.lon = 0.0594290022533;
    msg.z = 0.821433848581;
    msg.z_units = 35U;
    msg.speed = 0.153445448147;
    msg.speed_units = 246U;
    msg.roll = 0.95038028822;
    msg.pitch = 0.38792512205;
    msg.yaw = 0.502286322422;
    msg.custom.assign("AGCSOSIJKYRIJVTKHMHQUJPTIPCUEUBOTMBTMDZTGAIQAZPAQFLMKISMXLSILQIKNYJWHEBJESCWXLOTIWNCDOGDPCGOBNKELMFRLACHGMUFOOPA");

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
    msg.setTimeStamp(0.743424833836);
    msg.setSource(33444U);
    msg.setSourceEntity(232U);
    msg.setDestination(2251U);
    msg.setDestinationEntity(127U);
    msg.timeout = 21823U;
    msg.lat = 0.111074743393;
    msg.lon = 0.920541106346;
    msg.z = 0.617666850241;
    msg.z_units = 188U;
    msg.speed = 0.0209204636565;
    msg.speed_units = 88U;
    msg.roll = 0.823617104189;
    msg.pitch = 0.535749688113;
    msg.yaw = 0.398872828906;
    msg.custom.assign("BSREMSOAULBPWVQFGEDDZTVZMNVIAZYDZLBLDZYAXOFGTCPCEWQCVNJIHEZATOYHKUAYNNULXTACJFTZATOHFDIMHZVMQWWAFKILBPLDJRPHXFGCROADKQQC");

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
    msg.setTimeStamp(0.492100908165);
    msg.setSource(55359U);
    msg.setSourceEntity(252U);
    msg.setDestination(38970U);
    msg.setDestinationEntity(148U);
    msg.timeout = 54960U;
    msg.lat = 0.289005785292;
    msg.lon = 0.88683863662;
    msg.z = 0.429557995393;
    msg.z_units = 35U;
    msg.speed = 0.435424609041;
    msg.speed_units = 0U;
    msg.duration = 45021U;
    msg.radius = 0.158780710692;
    msg.flags = 220U;
    msg.custom.assign("STPBXWQLUVLODIKSJSPJMVUOLCVTLQGBTFDRDMAZKRZIUAENCQMYYHZXJFDHHUIPSCAWISQOFRIPMVUGVTGBPEAPIRMYOBXBXZJFAQJJSMKLACRLAMWTOTFMWKOVYGMVFSYTJHCFPCZZDZDADGEXEQLAUCBFBOYGNVYP");

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
    msg.setTimeStamp(0.829872131422);
    msg.setSource(15213U);
    msg.setSourceEntity(115U);
    msg.setDestination(54027U);
    msg.setDestinationEntity(54U);
    msg.timeout = 443U;
    msg.lat = 0.304869499821;
    msg.lon = 0.329301618073;
    msg.z = 0.807023035008;
    msg.z_units = 181U;
    msg.speed = 0.0213434011923;
    msg.speed_units = 60U;
    msg.duration = 19091U;
    msg.radius = 0.801519335949;
    msg.flags = 103U;
    msg.custom.assign("TRCYMXHRKUJAUJVNHFDOPYFHPDUXJEGTENPJXHQUSKCMDYAWIOAOHNLZMDETICQFZRMQCIROZILNYLGIFLIDQGENNCFTUTBDFRKKIGWBKQTWWXFVEBGMWAUATCSSX");

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
    msg.setTimeStamp(0.38868041654);
    msg.setSource(63459U);
    msg.setSourceEntity(158U);
    msg.setDestination(14017U);
    msg.setDestinationEntity(234U);
    msg.timeout = 30276U;
    msg.lat = 0.986840265504;
    msg.lon = 0.411378097613;
    msg.z = 0.456202340358;
    msg.z_units = 114U;
    msg.speed = 0.162578054479;
    msg.speed_units = 75U;
    msg.duration = 14993U;
    msg.radius = 0.311856487233;
    msg.flags = 202U;
    msg.custom.assign("DAUHPMHQSKEUNXCSKRUYOWPRBZKHMOYAYBLEBNZUMJHHVGMXGWCDTXYIUFRZPDZBLODNEOIVTKXQPLRAYSZSA");

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
    msg.setTimeStamp(0.7403114622);
    msg.setSource(31852U);
    msg.setSourceEntity(82U);
    msg.setDestination(64527U);
    msg.setDestinationEntity(176U);
    msg.custom.assign("NCEGRFANOOOFHUZKNMTJYBMBTWAJRRZBUTSEFPGXYFIJHXCNEKWJWZSPANYWPPYBTMATPTEKLEHUDXHMNSWLBKVLHBOOGVYQMWGRYAFDLFUBKSSDLQQRCIQCILYVISIDKVMQAVVALAOWVNSIEPYMGCCKHJGWFWOZHTYVOXCXSCAPXLDLPPIGDDKTHZNRHIEEUJNZZFEUUDXMZUXCEJMGIVRXBROQOJBMUTZWKZJGSXQSDFR");

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
    msg.setTimeStamp(0.859655614093);
    msg.setSource(41095U);
    msg.setSourceEntity(223U);
    msg.setDestination(35324U);
    msg.setDestinationEntity(253U);
    msg.custom.assign("IHBOPWITQLMUDCZVXIBYRCJSWONAI");

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
    msg.setTimeStamp(0.757791120561);
    msg.setSource(53029U);
    msg.setSourceEntity(94U);
    msg.setDestination(38204U);
    msg.setDestinationEntity(26U);
    msg.custom.assign("IDDNHPTPFQZJWVKXZWXNFNTEVOLCOZRJDHVALWXRQXKGHRIKSBXCUEPOKUEP");

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
    msg.setTimeStamp(0.476668853042);
    msg.setSource(28306U);
    msg.setSourceEntity(127U);
    msg.setDestination(1601U);
    msg.setDestinationEntity(121U);
    msg.timeout = 58599U;
    msg.lat = 0.530713792981;
    msg.lon = 0.477885189926;
    msg.z = 0.81696167676;
    msg.z_units = 7U;
    msg.duration = 4223U;
    msg.speed = 0.402333758201;
    msg.speed_units = 127U;
    msg.type = 34U;
    msg.radius = 0.56161680729;
    msg.length = 0.298284067722;
    msg.bearing = 0.291712867882;
    msg.direction = 37U;
    msg.custom.assign("DBBWPLFUVAKHKXYTWPSJEMXMODYWLNOUKMZCSJIEFYTNTEHAVQICWKVBSTJCGSJDQZPJKJVAHZOIFGYKQEQYSMGUDEQOPOFLOAZCRACAQIMGQUJNURRHLIVPTHUBLOAHGDFVIKFUGJKECSEMXSXXWZMWTRXLMXWFGTPPNSXUMBUOSGLBEDYGKCBCNARBFZXJIEGHDJOVITDYFAZINYWPDNNZYKLAWRPWQCIHTRVDMZZOTQRPRCRNXQYSLB");

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
    msg.setTimeStamp(0.360026115383);
    msg.setSource(23974U);
    msg.setSourceEntity(98U);
    msg.setDestination(53816U);
    msg.setDestinationEntity(219U);
    msg.timeout = 61503U;
    msg.lat = 0.937463515671;
    msg.lon = 0.976236365755;
    msg.z = 0.943967170102;
    msg.z_units = 187U;
    msg.duration = 39280U;
    msg.speed = 0.367620968082;
    msg.speed_units = 202U;
    msg.type = 158U;
    msg.radius = 0.365193766416;
    msg.length = 0.465986998215;
    msg.bearing = 0.433402507551;
    msg.direction = 249U;
    msg.custom.assign("EYUHSWJKDNWOPIZBTIYAWRYZUGAXJKLTZLRCFHLAGCDYBVYVXCWRTKMYTUXGLARKSESMPVEALTDCMZAPBMLYXXNLSFBHWEURPIHAZWOCQUOUOQVTGZLTEJDFLMMXIZIDHJYNXWWEQBNDFQIIFZSSMCMOUGNVOFJWGX");

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
    msg.setTimeStamp(0.504096277407);
    msg.setSource(7399U);
    msg.setSourceEntity(12U);
    msg.setDestination(63155U);
    msg.setDestinationEntity(10U);
    msg.timeout = 33724U;
    msg.lat = 0.822445280798;
    msg.lon = 0.246383679142;
    msg.z = 0.732310929287;
    msg.z_units = 216U;
    msg.duration = 39183U;
    msg.speed = 0.723300968019;
    msg.speed_units = 75U;
    msg.type = 78U;
    msg.radius = 0.508009279192;
    msg.length = 0.748268459398;
    msg.bearing = 0.189353025913;
    msg.direction = 199U;
    msg.custom.assign("OSYPVSBMYGKQBURMTUNCHRMVHWPFACAETEWUSSAPRJXUGXXEOYGUDMZLVIYJPQDGQFQKNPJRCVYLAMFKZJUTTYFIMGXUVKOGYDPPJFIXXEBOKDHJJMKCGQIVKXURHEBCSQFQOWTLMIBQZJWWMBBWNYCLNOEGXAGHVEJRIQWSRNFNVFWFDCLINRZZWZXSHYEXUFDRKLZVPGTDBHOCBLMSLDHZNOPUT");

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
    msg.setTimeStamp(0.901458174443);
    msg.setSource(36546U);
    msg.setSourceEntity(53U);
    msg.setDestination(24479U);
    msg.setDestinationEntity(87U);
    msg.duration = 18823U;
    msg.custom.assign("QFYUDMUQULRBJWBWVFUSCBBSGEIKYB");

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
    msg.setTimeStamp(0.318044817708);
    msg.setSource(48000U);
    msg.setSourceEntity(142U);
    msg.setDestination(6282U);
    msg.setDestinationEntity(159U);
    msg.duration = 57763U;
    msg.custom.assign("LETCYMTSORMFXLADZURZHUHGISIINCPSPMT");

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
    msg.setTimeStamp(0.127966182273);
    msg.setSource(11276U);
    msg.setSourceEntity(23U);
    msg.setDestination(63714U);
    msg.setDestinationEntity(238U);
    msg.duration = 21020U;
    msg.custom.assign("FOGBZVHLOG");

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
    msg.setTimeStamp(0.287290227739);
    msg.setSource(62530U);
    msg.setSourceEntity(201U);
    msg.setDestination(11418U);
    msg.setDestinationEntity(65U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.534666938115;
    msg.control.set(tmp_msg_0);
    msg.duration = 17261U;
    msg.custom.assign("PONMSQQHGNVOVIBRUHFLEQLFDSURLHWFOPYFAWWZQEMWKLJRIWDEZGIUWHGBXPXSDOHWJIUSZTZIQAKPM");

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
    msg.setTimeStamp(0.960643451583);
    msg.setSource(29184U);
    msg.setSourceEntity(136U);
    msg.setDestination(12156U);
    msg.setDestinationEntity(78U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46393150739;
    tmp_msg_0.speed_units = 18U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9685U;
    msg.custom.assign("PKSXPNTDOYKOMCAVVXBBEIRFUGQAWJUXTPGZHTYCIHMZIZZRAQLWJGEUGLMAQWPJIDOFNTYODVEFLLBRBJDRUKCBMSHGJAYVNHPSUGWWA");

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
    msg.setTimeStamp(0.345815170486);
    msg.setSource(58529U);
    msg.setSourceEntity(181U);
    msg.setDestination(26664U);
    msg.setDestinationEntity(91U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.7936843718;
    msg.control.set(tmp_msg_0);
    msg.duration = 33464U;
    msg.custom.assign("VOFHAEXFUIKGCMKFLGKDSYWBHIUTRPGTYTWWVRSBQAPZLCWGPHWWTCBVYD");

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
    msg.setTimeStamp(0.131685390728);
    msg.setSource(23638U);
    msg.setSourceEntity(88U);
    msg.setDestination(33407U);
    msg.setDestinationEntity(207U);
    msg.timeout = 8577U;
    msg.lat = 0.760797944548;
    msg.lon = 0.294158324113;
    msg.z = 0.84244262181;
    msg.z_units = 252U;
    msg.speed = 0.639090462217;
    msg.speed_units = 173U;
    msg.bearing = 0.0304595006908;
    msg.cross_angle = 0.617272326853;
    msg.width = 0.100491910435;
    msg.length = 0.630728700925;
    msg.hstep = 0.212802691941;
    msg.coff = 116U;
    msg.alternation = 73U;
    msg.flags = 197U;
    msg.custom.assign("QMRSBHJHTLMUGSFNLCLMEUZRINNJACBAIZDVBJTAEGDNPKERWMKVZAJFPONZXVYUUVYCLCWUDONLVT");

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
    msg.setTimeStamp(0.423405570203);
    msg.setSource(41852U);
    msg.setSourceEntity(107U);
    msg.setDestination(29012U);
    msg.setDestinationEntity(205U);
    msg.timeout = 26715U;
    msg.lat = 0.0571711988969;
    msg.lon = 0.933632734916;
    msg.z = 0.749448654372;
    msg.z_units = 224U;
    msg.speed = 0.293215249822;
    msg.speed_units = 168U;
    msg.bearing = 0.954202522293;
    msg.cross_angle = 0.811785915041;
    msg.width = 0.248091550497;
    msg.length = 0.404181963756;
    msg.hstep = 0.0602482026878;
    msg.coff = 253U;
    msg.alternation = 53U;
    msg.flags = 9U;
    msg.custom.assign("DKVDKNJNUNPSJISLFHMSEXIOHZDWPMGPOYTSBDQMPXZZJGUOQHAYVYNOUCCHIIZPFLNRHDPIYHIWIRXEYLDECWLTCVFEXVCQLJUAKOZGTJRUKZBXRGJHBNHHQCCDOJGGORQJBKESEXPUGMWQFGVKFFRWKBBFVFJKWLDQYMLNKSPEMUXZSJXQAOPOTHGTNYAWZAMMRZETCWZTYPIXRMQBNYLRBVDVTFYGWBLABULEKUICX");

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
    msg.setTimeStamp(0.501755359027);
    msg.setSource(53724U);
    msg.setSourceEntity(157U);
    msg.setDestination(42451U);
    msg.setDestinationEntity(228U);
    msg.timeout = 11949U;
    msg.lat = 0.907665729491;
    msg.lon = 0.666398960637;
    msg.z = 0.378659647321;
    msg.z_units = 101U;
    msg.speed = 0.765587719715;
    msg.speed_units = 157U;
    msg.bearing = 0.225681515854;
    msg.cross_angle = 0.589240688401;
    msg.width = 0.0417909679285;
    msg.length = 0.86278743371;
    msg.hstep = 0.210193233086;
    msg.coff = 179U;
    msg.alternation = 115U;
    msg.flags = 219U;
    msg.custom.assign("GWJZWQPQIQCUTUVHNMDNATUGTDEKOQYMPLLEFSZNOXYPI");

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
    msg.setTimeStamp(0.702637771869);
    msg.setSource(37125U);
    msg.setSourceEntity(196U);
    msg.setDestination(9986U);
    msg.setDestinationEntity(157U);
    msg.timeout = 27518U;
    msg.lat = 0.286461513018;
    msg.lon = 0.263433331688;
    msg.z = 0.0386741884104;
    msg.z_units = 110U;
    msg.speed = 0.927535053233;
    msg.speed_units = 144U;
    msg.custom.assign("SPFHJMAHRHXNFISZCPRFVKJBHFKMYIFBHBINVXFKZJUPKOBAMYACVIJDQOYUDMSWN");

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
    msg.setTimeStamp(0.90634366636);
    msg.setSource(8026U);
    msg.setSourceEntity(47U);
    msg.setDestination(10063U);
    msg.setDestinationEntity(181U);
    msg.timeout = 32152U;
    msg.lat = 0.0444831235056;
    msg.lon = 0.017119799482;
    msg.z = 0.904677029694;
    msg.z_units = 154U;
    msg.speed = 0.466972175819;
    msg.speed_units = 3U;
    msg.custom.assign("IVIRAISQNEZBGZMBHGKVJXEJMSDAGRPACVSTNHFUKBBYIMAHALGDCVOMAEPHCHTONPONSTLUOEBZ");

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
    msg.setTimeStamp(0.947586983818);
    msg.setSource(62442U);
    msg.setSourceEntity(239U);
    msg.setDestination(6371U);
    msg.setDestinationEntity(198U);
    msg.timeout = 20736U;
    msg.lat = 0.981563399827;
    msg.lon = 0.766456037014;
    msg.z = 0.543136771732;
    msg.z_units = 4U;
    msg.speed = 0.786809215693;
    msg.speed_units = 113U;
    msg.custom.assign("IISIRLBJQFGCXYCLXUCPVBLDEDHQLAMBMJPELZLXKMFROPKYZFAUDRYFXJLSWQXTTNCMXGBHPFNHYQTHROXKO");

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
    msg.setTimeStamp(0.238048136119);
    msg.setSource(30186U);
    msg.setSourceEntity(28U);
    msg.setDestination(17558U);
    msg.setDestinationEntity(48U);
    msg.x = 0.602442655463;
    msg.y = 0.0806154455625;
    msg.z = 0.127874361437;

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
    msg.setTimeStamp(0.965732230438);
    msg.setSource(38028U);
    msg.setSourceEntity(92U);
    msg.setDestination(43134U);
    msg.setDestinationEntity(177U);
    msg.x = 0.141477907167;
    msg.y = 0.471433422574;
    msg.z = 0.778908866365;

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
    msg.setTimeStamp(0.860369046356);
    msg.setSource(33484U);
    msg.setSourceEntity(155U);
    msg.setDestination(34272U);
    msg.setDestinationEntity(196U);
    msg.x = 0.366668596415;
    msg.y = 0.440224621948;
    msg.z = 0.846882096049;

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
    msg.setTimeStamp(0.683516334);
    msg.setSource(33784U);
    msg.setSourceEntity(19U);
    msg.setDestination(37429U);
    msg.setDestinationEntity(100U);
    msg.timeout = 18337U;
    msg.lat = 0.694871716905;
    msg.lon = 0.545125913853;
    msg.z = 0.545543300436;
    msg.z_units = 48U;
    msg.amplitude = 0.847529695729;
    msg.pitch = 0.572760450825;
    msg.speed = 0.175485432549;
    msg.speed_units = 240U;
    msg.custom.assign("YNZAJDCISAGUNNIIUSWWPVHTKPMOJBSWQEMNWLHMBMZQXNUORXLITKQDCJWSBJWKAQQSEPB");

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
    msg.setTimeStamp(0.944308613191);
    msg.setSource(53259U);
    msg.setSourceEntity(29U);
    msg.setDestination(4884U);
    msg.setDestinationEntity(230U);
    msg.timeout = 17247U;
    msg.lat = 0.302258239397;
    msg.lon = 0.737873636421;
    msg.z = 0.0804695845521;
    msg.z_units = 150U;
    msg.amplitude = 0.490397543371;
    msg.pitch = 0.714887485585;
    msg.speed = 0.84065905811;
    msg.speed_units = 89U;
    msg.custom.assign("BOEVEHWUHWNMWHHTKKRKCYUXPRCHEJRNUHNDILVKUYYBUKAYAXMMYXJBZWQBYFIENTLWSDQRBWVJYFNWFRFDAKGEAYSZTPDIOIJLSMHGSOV");

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
    msg.setTimeStamp(0.848318555642);
    msg.setSource(14030U);
    msg.setSourceEntity(221U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(53U);
    msg.timeout = 21645U;
    msg.lat = 0.999898453453;
    msg.lon = 0.706346881318;
    msg.z = 0.124689467534;
    msg.z_units = 108U;
    msg.amplitude = 0.467732377676;
    msg.pitch = 0.770541269909;
    msg.speed = 0.891884644588;
    msg.speed_units = 246U;
    msg.custom.assign("YUXJANQVNRYUXBECEPSNSLQLVLZAAXDBRRIUTSHKZFLTGEYUJSXOALQRMCLPGHNFSAOIBUIRZCCNPDUWJVHSEHZSJITHXQIJPTCIEDKPNABMAEDRXMODBDCCEPXYFKNNPLBDIHXFGBHPKIZMPWFW");

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
    msg.setTimeStamp(0.624098893864);
    msg.setSource(1992U);
    msg.setSourceEntity(163U);
    msg.setDestination(17187U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.930058981372);
    msg.setSource(23944U);
    msg.setSourceEntity(249U);
    msg.setDestination(34662U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.918523922841);
    msg.setSource(43710U);
    msg.setSourceEntity(206U);
    msg.setDestination(51607U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.739427080414);
    msg.setSource(44899U);
    msg.setSourceEntity(55U);
    msg.setDestination(33723U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.70872148185;
    msg.lon = 0.333388174468;
    msg.z = 0.953211731684;
    msg.z_units = 55U;
    msg.radius = 0.722027189043;
    msg.duration = 37949U;
    msg.speed = 0.746985504746;
    msg.speed_units = 28U;
    msg.custom.assign("WLULDKHGNXJVBEHIUNXHRVPNSJAFNUWTTUVZFEUGTSQVKCHSWQPHMRBGODY");

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
    msg.setTimeStamp(0.194678512296);
    msg.setSource(8258U);
    msg.setSourceEntity(139U);
    msg.setDestination(52554U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.741052527193;
    msg.lon = 0.687427559121;
    msg.z = 0.928818065405;
    msg.z_units = 153U;
    msg.radius = 0.327694588522;
    msg.duration = 31778U;
    msg.speed = 0.184079363537;
    msg.speed_units = 209U;
    msg.custom.assign("LISVCZBVNHOWEXQIDRCOXWRTZJHMBHVDPPNCWZAGUFQEJPWMPFJCZNHGTNIVWBDPICFXYJXYBULVOQJUHSLQIBCOOSF");

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
    msg.setTimeStamp(0.285209890728);
    msg.setSource(46878U);
    msg.setSourceEntity(60U);
    msg.setDestination(5072U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.604905757073;
    msg.lon = 0.543273817357;
    msg.z = 0.751842809439;
    msg.z_units = 235U;
    msg.radius = 0.637701351752;
    msg.duration = 7109U;
    msg.speed = 0.449295437918;
    msg.speed_units = 34U;
    msg.custom.assign("INVZVXQRFVDPDABSNJCHFLXGCPISAZGFXCLZLDSYOKHPVEXRQWFDMJNHWYGCWQKJGYOMRQBIXQPHJSUUIBFGUJCSFVIKKLWOKBTPCMKPEWHHZCYNXIWKTTRYOVMLRBIUEPIJDHJTZOVATRLYMNEFYSTJEANJATFBWYGBYMQAVTIOQMZZ");

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
    msg.setTimeStamp(0.824965613061);
    msg.setSource(19016U);
    msg.setSourceEntity(119U);
    msg.setDestination(667U);
    msg.setDestinationEntity(133U);
    msg.timeout = 61276U;
    msg.flags = 248U;
    msg.lat = 0.222260864816;
    msg.lon = 0.541830688418;
    msg.start_z = 0.778390280428;
    msg.start_z_units = 133U;
    msg.end_z = 0.111231881086;
    msg.end_z_units = 230U;
    msg.radius = 0.108233146922;
    msg.speed = 0.941189012629;
    msg.speed_units = 236U;
    msg.custom.assign("OGERMPXEIKGZWTYLCOFHBFLASOFLKABJNHVCIGJRNWIKQYSMHANSMLDKSYOIUVUCWDPAGAWZLCHKPYIJWYUPXTLJETDRLHDXVXWRXZZYHBN");

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
    msg.setTimeStamp(0.772064163766);
    msg.setSource(33563U);
    msg.setSourceEntity(142U);
    msg.setDestination(11260U);
    msg.setDestinationEntity(73U);
    msg.timeout = 33778U;
    msg.flags = 126U;
    msg.lat = 0.231793197079;
    msg.lon = 0.990473586226;
    msg.start_z = 0.182504914379;
    msg.start_z_units = 222U;
    msg.end_z = 0.442635214808;
    msg.end_z_units = 211U;
    msg.radius = 0.721275711333;
    msg.speed = 0.686133138722;
    msg.speed_units = 66U;
    msg.custom.assign("QWBHBEIRGKVDGKKORCFISTFZYOFSQFFBAZBXKAUZTVYXSLREWAE");

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
    msg.setTimeStamp(0.647092152028);
    msg.setSource(2886U);
    msg.setSourceEntity(186U);
    msg.setDestination(38945U);
    msg.setDestinationEntity(203U);
    msg.timeout = 51286U;
    msg.flags = 29U;
    msg.lat = 0.373306746472;
    msg.lon = 0.0382008379528;
    msg.start_z = 0.709506306037;
    msg.start_z_units = 98U;
    msg.end_z = 0.124392398885;
    msg.end_z_units = 245U;
    msg.radius = 0.718611550612;
    msg.speed = 0.598654121033;
    msg.speed_units = 190U;
    msg.custom.assign("EBVTKYDQEHXVQUEHCPYVDEGXZZQSBUFXZCQBWVQTPRWCWMPXIKJHDXECOZDBHFVOULLIPQARZFQARMGUTGERMUKAMSVYLIVIOJHAHCUODVJABPHYQMCFGSBIYWDMFXMOPJRPHNHUMSTLNFAXJWBRYRXETGJVLLXIOAQR");

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
    msg.setTimeStamp(0.49216945236);
    msg.setSource(36253U);
    msg.setSourceEntity(225U);
    msg.setDestination(22065U);
    msg.setDestinationEntity(26U);
    msg.timeout = 20261U;
    msg.lat = 0.0533282487838;
    msg.lon = 0.512690612392;
    msg.z = 0.121890714883;
    msg.z_units = 226U;
    msg.speed = 0.260197835657;
    msg.speed_units = 9U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.852762285056;
    tmp_msg_0.y = 0.374019265599;
    tmp_msg_0.z = 0.144445664722;
    tmp_msg_0.t = 0.193470628508;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HRHQRMUKNSIQZMUEVCTFRAXQMEGFABNJKYWAJGNTZGSFEYXTGFYHEQCHSOKNUNWTKAWPABMZWYJEJVQDOVGWBTMLFUYZZBEZMULIHUNHJBHOTSMVYCXFTYXKPELNKRRJSGPVIQIAUVLKAXDYCSDQDIMEBELXPWRMLWZBELNLHCZSQSNFPXFKWBOPVOAZRYTAPICKDJSVCDOJLICGTRIQZNPYDBCFBROKJUODXWLIPPUXGIACMUTVSDRXOHGO");

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
    msg.setTimeStamp(0.469234460654);
    msg.setSource(49898U);
    msg.setSourceEntity(34U);
    msg.setDestination(31318U);
    msg.setDestinationEntity(21U);
    msg.timeout = 28184U;
    msg.lat = 0.25569443239;
    msg.lon = 0.235005708872;
    msg.z = 0.889117468713;
    msg.z_units = 47U;
    msg.speed = 0.692533182653;
    msg.speed_units = 29U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.344780865533;
    tmp_msg_0.y = 0.0956651948061;
    tmp_msg_0.z = 0.304100110388;
    tmp_msg_0.t = 0.872168441839;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MSYQZNUGXQYQVSJZWOKOLHIJKBFPZMUQHNIBKRXKKSRTWOCUTMGLQAUABIDFASXTYEGRBXXRMSDLPGQEVBDBIYMWPFABPZZSXWSRTSEICHOQHAGNEBHTXOPCJIWCMUEBWCZMJZCPAJJDYCXNIVFOMVQGJLYUFRPNA");

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
    msg.setTimeStamp(0.173615219216);
    msg.setSource(49343U);
    msg.setSourceEntity(84U);
    msg.setDestination(42289U);
    msg.setDestinationEntity(204U);
    msg.timeout = 14179U;
    msg.lat = 0.303364037594;
    msg.lon = 0.367254036762;
    msg.z = 0.760901071606;
    msg.z_units = 103U;
    msg.speed = 0.528186596736;
    msg.speed_units = 52U;
    msg.custom.assign("UXJXVLSVSFHYCAVZLJAYZFMFHRSSLRXZIAEFHBQAPXOLVCLCZSUOEKRJTWXSDGCAURLGTGRMRMIWMOCAVUGTDEOJIMZSWFDKDODPZKNHJBMONUWFHWVGLNKGKBHPPUKCIPAXJEKUPTZJWIQVQBFNYPRREYMPWMIQEBFEAABGOYECBBLWTQNWCDBDOJNCXIMYAGDNVQRCHOGZVYJUPENFLQEYJIXOTBUXHIMNTKWZLTNHSDFYUITQXKVKZQ");

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
    msg.setTimeStamp(0.249499743958);
    msg.setSource(24959U);
    msg.setSourceEntity(162U);
    msg.setDestination(32992U);
    msg.setDestinationEntity(152U);
    msg.x = 0.759050328535;
    msg.y = 0.716973845952;
    msg.z = 0.460162862173;
    msg.t = 0.916898286251;

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
    msg.setTimeStamp(0.389110838718);
    msg.setSource(50171U);
    msg.setSourceEntity(53U);
    msg.setDestination(38966U);
    msg.setDestinationEntity(37U);
    msg.x = 0.936943588133;
    msg.y = 0.846910747135;
    msg.z = 0.00286591538613;
    msg.t = 0.856080490533;

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
    msg.setTimeStamp(0.733490282742);
    msg.setSource(38183U);
    msg.setSourceEntity(189U);
    msg.setDestination(53658U);
    msg.setDestinationEntity(89U);
    msg.x = 0.892813220375;
    msg.y = 0.44034218265;
    msg.z = 0.2969893487;
    msg.t = 0.13163957137;

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
    msg.setTimeStamp(0.136381293701);
    msg.setSource(42745U);
    msg.setSourceEntity(24U);
    msg.setDestination(49260U);
    msg.setDestinationEntity(147U);
    msg.timeout = 41182U;
    msg.name.assign("IKWAPGNBLMCOKQPSWSR");
    msg.custom.assign("FTFLYRXZHLJGKIMPRZJYJVPWKEFWGMAWVLLAXUKJQDFNTTMTAPMBTBNKLCBHDSCTEBOWSUVZMWLIXP");

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
    msg.setTimeStamp(0.579417976789);
    msg.setSource(20775U);
    msg.setSourceEntity(191U);
    msg.setDestination(36955U);
    msg.setDestinationEntity(136U);
    msg.timeout = 45938U;
    msg.name.assign("NRREZOCMTYAKJMKQKQJZPTXTQFEDIQFMSLHQNSPFDNSXBXBBAVEPASOUKYBGICCYLAGOLYIYGWJRJUMTMEMCGSCXCBBUDDHWCKSEZZDZPHCVWLVEWWTKRDOFEIIWXLIYVCSVMWGXNFVTUYYOZQGTFOXWKFITLDQMHHYREUNBRKTNXOGGBOBUJPADABRFIIJVPKCJNZSZQYJIGHQZAQWDOU");
    msg.custom.assign("AUBGEKCGZIBQ");

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
    msg.setTimeStamp(0.147725719641);
    msg.setSource(1063U);
    msg.setSourceEntity(32U);
    msg.setDestination(59761U);
    msg.setDestinationEntity(155U);
    msg.timeout = 38530U;
    msg.name.assign("IEVZETOIPKQZUTQVGKPSOZRJNXYLXDNPWGQMQBRCNAMDIYBKACVUYMDUJKECVMPEOEUZFEBBRJLGWSHBWUOLAISFNXCAJPRBBAFRHGXZLGJXWRVQIUSUFTRCCWPBJNNFYEOSYEPJHPNWKKHCRGGSDQLHDAKAQZRCXODKMMIVLJNHDSXARWIUNNFZDLDZP");
    msg.custom.assign("OVMDOAYKLSUAGMOSBYNPXCEAAQHFIMKPGKMIOTGNIXOAARECWGHOFHRJNEIJOGQYSIL");

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
    msg.setTimeStamp(0.635972341207);
    msg.setSource(30997U);
    msg.setSourceEntity(236U);
    msg.setDestination(32739U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.878639919641;
    msg.lon = 0.154465724054;
    msg.z = 0.91569406516;
    msg.z_units = 213U;
    msg.speed = 0.810567970004;
    msg.speed_units = 147U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47530U;
    tmp_msg_0.off_x = 0.0174656348039;
    tmp_msg_0.off_y = 0.16908987502;
    tmp_msg_0.off_z = 0.688571745783;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.611749836405;
    msg.custom.assign("IGXNQJIDFGSWIPSKMRANNLBBQMN");

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
    msg.setTimeStamp(0.855642939402);
    msg.setSource(54705U);
    msg.setSourceEntity(63U);
    msg.setDestination(20348U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.53404061182;
    msg.lon = 0.393699165595;
    msg.z = 0.608961049449;
    msg.z_units = 61U;
    msg.speed = 0.902309487411;
    msg.speed_units = 98U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0876199247703;
    tmp_msg_0.y = 0.213374412507;
    tmp_msg_0.z = 0.651197007823;
    tmp_msg_0.t = 0.752124488968;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.709038454723;
    msg.custom.assign("GXPGBGFUNUNNXAMCUFSCTZCBCMDKZQXBCHXLHMZLRWPMZVLFJQODRKDVNSMGOULSCFVKDNHMSYYMLPIOLAVLUDJBWQPZIZNSCYPHQUQDYBWTDVJWLTHGEFPRDAYPIWKJIWEAAKYPZTRYQVSXOCRQIKNANHGEELAVMIMEBEHJUJVNXNEHWGBUXA");

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
    msg.setTimeStamp(0.368524359682);
    msg.setSource(3660U);
    msg.setSourceEntity(9U);
    msg.setDestination(13859U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.0746865557013;
    msg.lon = 0.850275377567;
    msg.z = 0.436087720485;
    msg.z_units = 197U;
    msg.speed = 0.435391497601;
    msg.speed_units = 25U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.378389141935;
    tmp_msg_0.y = 0.427162321535;
    tmp_msg_0.z = 0.270031643349;
    tmp_msg_0.t = 0.771808441936;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0362077314377;
    msg.custom.assign("SVBUCBQPEPSXZFDFAGZUBWW");

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
    msg.setTimeStamp(0.337501807885);
    msg.setSource(57255U);
    msg.setSourceEntity(8U);
    msg.setDestination(29153U);
    msg.setDestinationEntity(196U);
    msg.vid = 61690U;
    msg.off_x = 0.807100220609;
    msg.off_y = 0.222061632395;
    msg.off_z = 0.131096525268;

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
    msg.setTimeStamp(0.465630309707);
    msg.setSource(7298U);
    msg.setSourceEntity(57U);
    msg.setDestination(1225U);
    msg.setDestinationEntity(10U);
    msg.vid = 19174U;
    msg.off_x = 0.392546437188;
    msg.off_y = 0.158890736347;
    msg.off_z = 0.0654705402593;

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
    msg.setTimeStamp(0.87103019066);
    msg.setSource(39599U);
    msg.setSourceEntity(43U);
    msg.setDestination(61359U);
    msg.setDestinationEntity(239U);
    msg.vid = 39680U;
    msg.off_x = 0.189871938911;
    msg.off_y = 0.402214289085;
    msg.off_z = 0.150389451606;

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
    msg.setTimeStamp(0.290359543669);
    msg.setSource(12893U);
    msg.setSourceEntity(34U);
    msg.setDestination(27454U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.400877475879);
    msg.setSource(16021U);
    msg.setSourceEntity(143U);
    msg.setDestination(39530U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.0816284856798);
    msg.setSource(35898U);
    msg.setSourceEntity(18U);
    msg.setDestination(36444U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.0995841867805);
    msg.setSource(44166U);
    msg.setSourceEntity(111U);
    msg.setDestination(55491U);
    msg.setDestinationEntity(123U);
    msg.mid = 25613U;

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
    msg.setTimeStamp(0.849234110469);
    msg.setSource(4876U);
    msg.setSourceEntity(148U);
    msg.setDestination(25316U);
    msg.setDestinationEntity(146U);
    msg.mid = 5483U;

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
    msg.setTimeStamp(0.323277090384);
    msg.setSource(38570U);
    msg.setSourceEntity(51U);
    msg.setDestination(50095U);
    msg.setDestinationEntity(81U);
    msg.mid = 30865U;

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
    msg.setTimeStamp(0.149939044902);
    msg.setSource(61548U);
    msg.setSourceEntity(27U);
    msg.setDestination(50608U);
    msg.setDestinationEntity(1U);
    msg.state = 33U;
    msg.eta = 39402U;
    msg.info.assign("QAVUNJBWCEBPIZJLKWQLARCWXBJQQSBAFXYMWBXEKDRPMMDWJRKUIDVDELBLPQGAGMFYFAYLZHVTIOYZXQOJMLCQODDSHGTAXNIDHFIVCCMHVPOVLZJBKDTXYKPEYXYZAXFNRKQTUNTFZUWGGRGNPEKXHAOSTFEJJZHEIRRTVTURPYCF");

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
    msg.setTimeStamp(0.305622985812);
    msg.setSource(46214U);
    msg.setSourceEntity(19U);
    msg.setDestination(23996U);
    msg.setDestinationEntity(248U);
    msg.state = 2U;
    msg.eta = 46133U;
    msg.info.assign("NXFEINPJRBYKISBLMSDVOCOEURZPNJQDLQUUFQOTDWC");

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
    msg.setTimeStamp(0.778203418675);
    msg.setSource(28632U);
    msg.setSourceEntity(110U);
    msg.setDestination(22726U);
    msg.setDestinationEntity(229U);
    msg.state = 220U;
    msg.eta = 27383U;
    msg.info.assign("ANIORGYKXVUIAJMBRIZKFNEONESQOSLUD");

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
    msg.setTimeStamp(0.0826836507212);
    msg.setSource(31795U);
    msg.setSourceEntity(182U);
    msg.setDestination(25982U);
    msg.setDestinationEntity(19U);
    msg.system = 36177U;
    msg.duration = 27905U;
    msg.speed = 0.283563498395;
    msg.speed_units = 19U;
    msg.x = 0.36163799037;
    msg.y = 0.55984693258;
    msg.z = 0.417553563801;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.694078630617);
    msg.setSource(57954U);
    msg.setSourceEntity(243U);
    msg.setDestination(2841U);
    msg.setDestinationEntity(111U);
    msg.system = 63097U;
    msg.duration = 25324U;
    msg.speed = 0.107538099684;
    msg.speed_units = 96U;
    msg.x = 0.319669973913;
    msg.y = 0.946511976756;
    msg.z = 0.424157428929;
    msg.z_units = 227U;

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
    msg.setTimeStamp(0.859991489957);
    msg.setSource(56355U);
    msg.setSourceEntity(119U);
    msg.setDestination(23110U);
    msg.setDestinationEntity(226U);
    msg.system = 36212U;
    msg.duration = 1765U;
    msg.speed = 0.678459270741;
    msg.speed_units = 232U;
    msg.x = 0.722543650352;
    msg.y = 0.886987370153;
    msg.z = 0.261167230662;
    msg.z_units = 94U;

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
    msg.setTimeStamp(0.443563651028);
    msg.setSource(51087U);
    msg.setSourceEntity(139U);
    msg.setDestination(104U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.960855712449;
    msg.lon = 0.751322962858;
    msg.speed = 0.446643840361;
    msg.speed_units = 223U;
    msg.duration = 7852U;
    msg.sys_a = 55055U;
    msg.sys_b = 42361U;
    msg.move_threshold = 0.666475671203;

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
    msg.setTimeStamp(0.75726842698);
    msg.setSource(25045U);
    msg.setSourceEntity(182U);
    msg.setDestination(63327U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.651599299358;
    msg.lon = 0.73370217815;
    msg.speed = 0.835219442482;
    msg.speed_units = 20U;
    msg.duration = 24085U;
    msg.sys_a = 39171U;
    msg.sys_b = 44247U;
    msg.move_threshold = 0.920591821825;

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
    msg.setTimeStamp(0.663509991992);
    msg.setSource(47514U);
    msg.setSourceEntity(43U);
    msg.setDestination(4930U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.31064353724;
    msg.lon = 0.655599263674;
    msg.speed = 0.47303628964;
    msg.speed_units = 116U;
    msg.duration = 60579U;
    msg.sys_a = 46977U;
    msg.sys_b = 22479U;
    msg.move_threshold = 0.240225759754;

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
    msg.setTimeStamp(0.447400748552);
    msg.setSource(15605U);
    msg.setSourceEntity(67U);
    msg.setDestination(25019U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.250810904308;
    msg.lon = 0.628977127654;
    msg.z = 0.202582932742;
    msg.z_units = 148U;
    msg.speed = 0.68130094846;
    msg.speed_units = 79U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.757368425606;
    tmp_msg_0.lon = 0.101754666923;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DKKOXMUVOXLOYJDYLUVCBVUWPHPXMIAMMIQRNBIXDSAEFLRQROKDXASMATQNIXNGFDRZAAFHQZJBBWWTUGHEPPMMWE");

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
    msg.setTimeStamp(0.67028845082);
    msg.setSource(59231U);
    msg.setSourceEntity(144U);
    msg.setDestination(33565U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.104926417626;
    msg.lon = 0.997280803295;
    msg.z = 0.506113546288;
    msg.z_units = 103U;
    msg.speed = 0.826804341486;
    msg.speed_units = 135U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.568198079337;
    tmp_msg_0.lon = 0.520600069627;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PSUWHFSBBQHYHYCLVNLLSOFXLJUADCKHGBJGFMKQMNDNPTDELEHCHNMAVXKQYXROPWIETADDIJEQMBOOBVIOGKWCUELBBKGXRTVWWMHZQASANTYTHVHKSAEZAEOFXCVPUWFBJMTRALSZYFFWXOWQQZYKSNNZPCKJBNDRMZTMLJWVNGIRDSCIKZZUNFDVQOTCLVQJLRAGRRORECGPGUIDIOSIQGYZVJPJ");

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
    msg.setTimeStamp(0.719508953217);
    msg.setSource(11125U);
    msg.setSourceEntity(75U);
    msg.setDestination(41921U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.996828959093;
    msg.lon = 0.311692439434;
    msg.z = 0.592742458209;
    msg.z_units = 167U;
    msg.speed = 0.628854377747;
    msg.speed_units = 211U;
    msg.custom.assign("TICSHFLZCGSZYJKRSTYJYELCLEQLXVVSLNKIORAQMDYLEBUFQWWBZCKVLDBAQFUJPHDOXNGASTRAVUBKVWQGUIQDHGRJFNKKCYXYJRNZVMOXICKCPWHSLHXZIDGGBZJUURAYMKMNXRPFVMMUQUFHWACYESOLEPTMDTHGOOBIEWGJPUPVHFSFHWPECUFBYCAPGXSBOJZETQYTAOMJXDIAIOMHFZTNNDVG");

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
    msg.setTimeStamp(0.250364555283);
    msg.setSource(2508U);
    msg.setSourceEntity(19U);
    msg.setDestination(30054U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.46985726049;
    msg.lon = 0.259732450802;

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
    msg.setTimeStamp(0.692208216245);
    msg.setSource(38150U);
    msg.setSourceEntity(175U);
    msg.setDestination(44198U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.34244386005;
    msg.lon = 0.739472763676;

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
    msg.setTimeStamp(0.17961980157);
    msg.setSource(11795U);
    msg.setSourceEntity(187U);
    msg.setDestination(27648U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.681166889564;
    msg.lon = 0.477324939047;

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
    msg.setTimeStamp(0.391566558223);
    msg.setSource(29751U);
    msg.setSourceEntity(175U);
    msg.setDestination(4545U);
    msg.setDestinationEntity(35U);
    msg.timeout = 39330U;
    msg.lat = 0.714455846525;
    msg.lon = 0.0716694054614;
    msg.z = 0.205922748879;
    msg.z_units = 25U;
    msg.pitch = 0.362822513334;
    msg.amplitude = 0.415493936368;
    msg.duration = 15728U;
    msg.speed = 0.471484377128;
    msg.speed_units = 246U;
    msg.radius = 0.116847834622;
    msg.direction = 78U;
    msg.custom.assign("GWRKTKCCSWRIDVEGQYTKMPERKREBHBMJHJDYJAIVXFTKOPJWUETOSWLSEXMUCJQFDXVOPMLUIGAHHXQRAUFZLDJGTITRQXSVTUKOMSPPGDMMXCUPWUKEOKIASPBCELTCJIVIFLGZGXNKBXQDPYWJQUFNDQLLBNCASVBDNXOANHYWDHZNLYRCABBPRIRHZGYNEXOLJRYAUSOCLYKWSQGAPFEWZSVFNZIDHTVENAGMZIBVOOCVHJB");

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
    msg.setTimeStamp(0.615722682215);
    msg.setSource(17615U);
    msg.setSourceEntity(88U);
    msg.setDestination(53067U);
    msg.setDestinationEntity(215U);
    msg.timeout = 35170U;
    msg.lat = 0.30271044289;
    msg.lon = 0.994717008803;
    msg.z = 0.27929837739;
    msg.z_units = 70U;
    msg.pitch = 0.65727955574;
    msg.amplitude = 0.378746990455;
    msg.duration = 57429U;
    msg.speed = 0.414711708714;
    msg.speed_units = 158U;
    msg.radius = 0.295786065839;
    msg.direction = 186U;
    msg.custom.assign("WGXILKFNRACYZPYUKSQLPBRTVNVXSQSVTDDNGYNFCPNSATKIOJHQMHLPRAIXRWSLYBWSCVENHGFKSDZUGEHBDXEHHWAWUFCKFICLTDLVPYBFTZVFHSZFAJVFEMOOUWLSQHWQUBJZQOEUQCLABEOMBRTTDRXQZBXOPGRZNOENQMOPIDGMTMIXXDKAJXYYZIXPHAFUAJGUOIKJPSDVCEK");

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
    msg.setTimeStamp(0.93622121351);
    msg.setSource(18668U);
    msg.setSourceEntity(234U);
    msg.setDestination(18292U);
    msg.setDestinationEntity(205U);
    msg.timeout = 36437U;
    msg.lat = 0.802541970454;
    msg.lon = 0.402241551002;
    msg.z = 0.269953344375;
    msg.z_units = 203U;
    msg.pitch = 0.96461647974;
    msg.amplitude = 0.912658327857;
    msg.duration = 41717U;
    msg.speed = 0.224154925304;
    msg.speed_units = 83U;
    msg.radius = 0.805917796213;
    msg.direction = 253U;
    msg.custom.assign("KCYHCYVODUVYVIQDSRLPNRKBRMIIWWBFJUUATDVLSQRPUQXOTYATMYFBFWDEFIAIZRHHBAXUDOQGZUECSOEZDZFJFAOZNVSVWYONRIRHVLLDTNPNJAHPRCBKALCKDMDUHMSWLYHXRQNJXEACTTAJZALIPJSGUSXKKM");

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
    msg.setTimeStamp(0.21523653869);
    msg.setSource(28299U);
    msg.setSourceEntity(49U);
    msg.setDestination(25826U);
    msg.setDestinationEntity(244U);
    msg.formation_name.assign("PWZDTTVTSDMZWYTULJXVQUUCKNTDECJIZGEABOAXGWWWJNRAXQZRSSAX");
    msg.reference_frame = 117U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10193U;
    tmp_msg_0.off_x = 0.697443377022;
    tmp_msg_0.off_y = 0.923563344591;
    tmp_msg_0.off_z = 0.304332438762;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TWHYOUWMQVEYBABKIXPXXGHQGACZPGPNUQRWOMGOHCAZKCMAVVOVEYOACFFDTDZAJIPWJHRDFSKQYRMEHUWZPMNXJPKLKRENJTBJPWHKZKRAUPH");

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
    msg.setTimeStamp(0.699690101889);
    msg.setSource(43670U);
    msg.setSourceEntity(82U);
    msg.setDestination(13178U);
    msg.setDestinationEntity(54U);
    msg.formation_name.assign("AOIONXKMCK");
    msg.reference_frame = 37U;
    msg.custom.assign("ULQGEALQBFJDOQUUHKOUZBVRZGFHZMPDIAAJDXKMQXBTSNNWMKQHXVAWWNCQNXHRRPAKNDQWHRPRLSEITHBVZVSZJJJ");

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
    msg.setTimeStamp(0.243088880599);
    msg.setSource(9828U);
    msg.setSourceEntity(70U);
    msg.setDestination(56991U);
    msg.setDestinationEntity(248U);
    msg.formation_name.assign("TEOGECWNQMFIXLAECEAPNJEUKXNQZHNYSSQXUFQQOMUSXCDBFYZOVPBFFYRGWFZKBUSEDLIHMQTHTWQLJDALBJGRTSHDACVKUWFMVWMFWHZCXJAKJJBGDORZDXNGPOROVRMTQDOTZLYKPGOLQVEVDWUAJYVKHGJYLNPHCPMZMEITHAXKRHYOUTZWAADICCLIAPSBZDWIJGCMMBKVBIFZCRLRBFGEUYROTPXLEWUIIRS");
    msg.reference_frame = 218U;
    msg.custom.assign("QVRRXCNKFWAZNMSHYAIAWBHNXPORKJCIQNYXJVOIYEFQJMQLLNRDMAIUSLVHLOPCKKHCJPNYHHUDKMBGYZXOQELLFQTTXGDYZOPTSIVADWFNSICVOORZAKWBRGTMUJWEOGODXEWJEFSCCFYDGDYMZJZXZJFZMPUMPDDJXUSKCLF");

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
    msg.setTimeStamp(0.476515249977);
    msg.setSource(20573U);
    msg.setSourceEntity(178U);
    msg.setDestination(37352U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("BNXNBDYXDIMISYJYWSOQHYQLMLLNXPBHPCJGBVOPXTJEFEQJRKAVFGQAFOMQRJAKLVOTBBVNJMLZBJHVVKDSPKTSBDTIAEQMYDRIZAGRGZVCFSGTEZHYPUWFNVFWXICUIWLOSUDAFUZEUXMHZIRZJACQ");
    msg.formation_name.assign("MDZDBROXYGHTLTPVWZALHLEWNPXFCDVHDONPGWCELUHLFKZGMDQWRUPUPLNIDMYZCTUXSJTRVIOQNYXXQXMFWNHUJRUSJVOGOBGEKEYJMEQPBJJLJCOIRAXAEBQOYKGWNAYBAUSSTWWQPWIDRIEIIWZMSHPURZFXVANESOUNGFMLMSUZBRJAZADFFFVZYBKMKITHIVKNJGECTXFTMPHCECCHGBOXCFOPNJAVKSQK");
    msg.plan_id.assign("TLCYGXSJBEXYMQCUXLXPSFWOGRWOULGBMOKZQENNPOIXWNPBQPEJQDNZKVREPFBLWTJLTFCHVCZVUHYQGACKCUIADNMGKZQQUHWVEILQRYKFZNTXJ");
    msg.description.assign("MZLEDHCEMLKVRWKLOQBOWXJMMLLICUFAGJIRAOQPLCJGYDHPDGTAMZOPQBSLGWRAGNUTKDCOPFVFMSOETJEOXXQKWIYGUXKNQWXUSI");
    msg.leader_speed = 0.976710252017;
    msg.leader_bank_lim = 0.41875791716;
    msg.pos_sim_err_lim = 0.151243076666;
    msg.pos_sim_err_wrn = 0.443971386889;
    msg.pos_sim_err_timeout = 39238U;
    msg.converg_max = 0.579599193089;
    msg.converg_timeout = 51929U;
    msg.comms_timeout = 27248U;
    msg.turb_lim = 0.795418255573;
    msg.custom.assign("SCYGVCDJUVWKZJUKONV");

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
    msg.setTimeStamp(0.52213357759);
    msg.setSource(29344U);
    msg.setSourceEntity(40U);
    msg.setDestination(38812U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("XBZEBIBBQUTYZWCIPBHPBCZPROTBVFRDWMXUYFPYJDKCPORZAWSIAXKCCZWXVTEEDLUQYKOYLRHRUEOQGKMRVIUGKSTOAHMJTXSSNVFFDJZBQDRMZMLGOQUILIJMAVLOWZNYNIGANBLGMOSGCGNFTVHRGUKYQLSMFTEQAGQCMEYTNPOU");
    msg.formation_name.assign("ZYOJTNMQECASVPYUVYQHOWPFKUZGZPMKIJLCIXXBOUBINYBYXWPTZBWSEVCLSRIQQGKVUQJFYOEZTWOKEPJRACMPJIQCVSXVNZGWRYRVWZMXHADBYHQGG");
    msg.plan_id.assign("BEBFJFBMSKZSWJWDVKXZMKEYWTSSIIPXYHWNM");
    msg.description.assign("ICSQHAMNCQFXBMVEUSBRCJPCOWEOHEAGQCLVTCLWRZPQNKCHBTBIJKDNOZFKFPMCZEGTFIUJVNSSMMZJZPFYAVUONTWTELYMYOVNSGGVFJGKDTTGQJUOESBZPYBTNSFDMDAFIUJRNISKAWFOMSKYVUDQPVYRGZBEBABHXBXZWXDNRRRXHH");
    msg.leader_speed = 0.915032182684;
    msg.leader_bank_lim = 0.715441568196;
    msg.pos_sim_err_lim = 0.0876862929167;
    msg.pos_sim_err_wrn = 0.471498893096;
    msg.pos_sim_err_timeout = 17544U;
    msg.converg_max = 0.820862887717;
    msg.converg_timeout = 9913U;
    msg.comms_timeout = 5903U;
    msg.turb_lim = 0.370724774595;
    msg.custom.assign("HNJUGJKIBJOVYWRCKBWNRBZSQDPHMEZSSSBHUOHMPNLZAOPLTAMDWXGVKDFHLXLUZMFUMFOSYTRDLDMJYPTOWAINKBWDZCHQTLZSSZBJNRGXSXEAARTKYCREKINFYCTCIBLVUPILUBXBWDTWPMZPINOIXKHQHKGEEUKVXHDRFAIGXCVZQQPGLCJFUJAHICTROCOPQGIQYV");

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
    msg.setTimeStamp(0.123869112544);
    msg.setSource(38220U);
    msg.setSourceEntity(72U);
    msg.setDestination(52693U);
    msg.setDestinationEntity(201U);
    msg.group_name.assign("LUSXXWYDTCSFYOBWEUFNZWAJTTXIGVFRPFSSYQAEWKFSBPPGHGDEJXKFSMNAQGEPQPJQGSVVBKDWKPZXHNSRXIULNKRZFTAVTAFH");
    msg.formation_name.assign("YBFNOTSFRHMGPIQIAMAEJBAZFVCSWLIYYXIIWLLNDBUIUNXLFCJJOJPZYRPLUNCKNJOUGOWHCXPWZMXYSSKLKRCERSDYQTFLAGXVUMPU");
    msg.plan_id.assign("POEFFETVXLMTBIRSULZAPSADLSYPRYXQYICSZRCJWAUVUBBGXXISKNCLAOVJVMEXOAMEDKTWLXJKFBERVKSQPOWYZMQWTIBUAFZFRVHVRWYHMKJJARHNXFUCCMYJUONZFLNBKRPZQUQOGMLGWQSLHNQDNXOKOIQDSPZBKRLTZMDWJHHXPCYNYIKSTYNUDDGQTHOIFUCTTFEMPGGDFPRJVKCHACIDCJAWGTL");
    msg.description.assign("PASEXOZJIIKFNRVHNYSIULGZOTQKRIGQHGKCAFOYKZJCONUVKQSDWPEHCDVINVIZKACDOJHSWWLAJZLQKZKXBCDFZBCCNBJHXVNXGBWEQSMYXGFUBTDRPHDNIEJVABEUPCBU");
    msg.leader_speed = 0.122231128928;
    msg.leader_bank_lim = 0.519833845958;
    msg.pos_sim_err_lim = 0.765825310306;
    msg.pos_sim_err_wrn = 0.371648393979;
    msg.pos_sim_err_timeout = 63209U;
    msg.converg_max = 0.08479415544;
    msg.converg_timeout = 33107U;
    msg.comms_timeout = 29609U;
    msg.turb_lim = 0.70562790878;
    msg.custom.assign("QZHHKKJTCRMGNLZBKFVECWEUNFQMZOIRATMPSLLGNFXWDXCKSLTDZSHRIWVSKRNFXZMTOUYKAQJJGQSXEATEWXFBZOEHISUVEZWAAVIZDSDEKGGDDFQVUKIDRMUBMHPNGBZVAKYFJNNPQFASJOCYDBCIPRQOIYRFWWGJSBWTGFQXJTBUQCPVLLNUUVJHIKQMMTRBYGOHJSXEOUWDTXAEPZCCLOMWNHOAHPYYDCXPNUPIJBCYMB");

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
    msg.setTimeStamp(0.549925503944);
    msg.setSource(25266U);
    msg.setSourceEntity(165U);
    msg.setDestination(46522U);
    msg.setDestinationEntity(209U);
    msg.control_src = 1994U;
    msg.control_ent = 112U;
    msg.timeout = 0.611404176816;
    msg.loiter_radius = 0.205340254353;
    msg.altitude_interval = 0.587709091526;

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
    msg.setTimeStamp(0.578109515586);
    msg.setSource(6485U);
    msg.setSourceEntity(41U);
    msg.setDestination(15511U);
    msg.setDestinationEntity(198U);
    msg.control_src = 11386U;
    msg.control_ent = 27U;
    msg.timeout = 0.287642999156;
    msg.loiter_radius = 0.676079297501;
    msg.altitude_interval = 0.738661568705;

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
    msg.setTimeStamp(0.839301296473);
    msg.setSource(13411U);
    msg.setSourceEntity(130U);
    msg.setDestination(24157U);
    msg.setDestinationEntity(226U);
    msg.control_src = 41158U;
    msg.control_ent = 25U;
    msg.timeout = 0.490496301219;
    msg.loiter_radius = 0.809380375219;
    msg.altitude_interval = 0.458193648495;

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
    msg.setTimeStamp(0.429316237567);
    msg.setSource(849U);
    msg.setSourceEntity(224U);
    msg.setDestination(43430U);
    msg.setDestinationEntity(79U);
    msg.flags = 122U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.55681542932;
    tmp_msg_0.speed_units = 196U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0476025388661;
    tmp_msg_1.z_units = 248U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.493271959624;
    msg.lon = 0.0396501923885;
    msg.radius = 0.0690477498916;

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
    msg.setTimeStamp(0.899020773885);
    msg.setSource(63584U);
    msg.setSourceEntity(78U);
    msg.setDestination(31325U);
    msg.setDestinationEntity(13U);
    msg.flags = 13U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.140559046685;
    tmp_msg_0.speed_units = 162U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.418089948349;
    tmp_msg_1.z_units = 212U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.833430990524;
    msg.lon = 0.312125821458;
    msg.radius = 0.667021831288;

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
    msg.setTimeStamp(0.811810224624);
    msg.setSource(19586U);
    msg.setSourceEntity(240U);
    msg.setDestination(55525U);
    msg.setDestinationEntity(87U);
    msg.flags = 7U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.788483454005;
    tmp_msg_0.speed_units = 45U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.715461503973;
    tmp_msg_1.z_units = 155U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.898884770509;
    msg.lon = 0.675246927687;
    msg.radius = 0.21512853929;

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
    msg.setTimeStamp(0.111465341094);
    msg.setSource(39524U);
    msg.setSourceEntity(60U);
    msg.setDestination(24697U);
    msg.setDestinationEntity(140U);
    msg.control_src = 44136U;
    msg.control_ent = 216U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 83U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.494041298152;
    tmp_tmp_msg_0_0.speed_units = 61U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.962011236068;
    tmp_tmp_msg_0_1.z_units = 196U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0966143377609;
    tmp_msg_0.lon = 0.362364490511;
    tmp_msg_0.radius = 0.140541649978;
    msg.reference.set(tmp_msg_0);
    msg.state = 184U;
    msg.proximity = 89U;

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
    msg.setTimeStamp(0.904687474288);
    msg.setSource(6725U);
    msg.setSourceEntity(147U);
    msg.setDestination(44356U);
    msg.setDestinationEntity(214U);
    msg.control_src = 29020U;
    msg.control_ent = 184U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 61U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.236458724401;
    tmp_tmp_msg_0_0.speed_units = 230U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.843103538861;
    tmp_tmp_msg_0_1.z_units = 228U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.120267891449;
    tmp_msg_0.lon = 0.845071487442;
    tmp_msg_0.radius = 0.268494251584;
    msg.reference.set(tmp_msg_0);
    msg.state = 109U;
    msg.proximity = 172U;

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
    msg.setTimeStamp(0.70184064552);
    msg.setSource(39316U);
    msg.setSourceEntity(5U);
    msg.setDestination(3430U);
    msg.setDestinationEntity(184U);
    msg.control_src = 20143U;
    msg.control_ent = 57U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 252U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.908058213735;
    tmp_tmp_msg_0_0.speed_units = 191U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.837573676358;
    tmp_tmp_msg_0_1.z_units = 164U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.00589015773373;
    tmp_msg_0.lon = 0.479628076474;
    tmp_msg_0.radius = 0.820332238953;
    msg.reference.set(tmp_msg_0);
    msg.state = 120U;
    msg.proximity = 134U;

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
    msg.setTimeStamp(0.3694471699);
    msg.setSource(47758U);
    msg.setSourceEntity(81U);
    msg.setDestination(43373U);
    msg.setDestinationEntity(246U);
    msg.ax_cmd = 0.500359623759;
    msg.ay_cmd = 0.717304738207;
    msg.az_cmd = 0.795418139894;
    msg.ax_des = 0.373255725172;
    msg.ay_des = 0.841741537504;
    msg.az_des = 0.693098439828;
    msg.virt_err_x = 0.538447385663;
    msg.virt_err_y = 0.242516023694;
    msg.virt_err_z = 0.429098203659;
    msg.surf_fdbk_x = 0.818814232554;
    msg.surf_fdbk_y = 0.25421929084;
    msg.surf_fdbk_z = 0.441780577295;
    msg.surf_unkn_x = 0.911946812689;
    msg.surf_unkn_y = 0.754532348264;
    msg.surf_unkn_z = 0.630405687455;
    msg.ss_x = 0.14640902786;
    msg.ss_y = 0.683868417352;
    msg.ss_z = 0.573591136099;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FIJWYOCWALBZGXSIFVFYJYGOUSFMAHJKCBDYTNJSKFMWGHJDSRZKDAREHXALNVGFBEOMUVVMNJTNSABHCGWQQEUM");
    tmp_msg_0.dist = 0.172247204857;
    tmp_msg_0.err = 0.241189666661;
    tmp_msg_0.ctrl_imp = 0.242835433695;
    tmp_msg_0.rel_dir_x = 0.82028663395;
    tmp_msg_0.rel_dir_y = 0.563270863385;
    tmp_msg_0.rel_dir_z = 0.0436396921091;
    tmp_msg_0.err_x = 0.575809191244;
    tmp_msg_0.err_y = 0.120638113361;
    tmp_msg_0.err_z = 0.204864438438;
    tmp_msg_0.rf_err_x = 0.0947844758509;
    tmp_msg_0.rf_err_y = 0.817779549566;
    tmp_msg_0.rf_err_z = 0.282233991351;
    tmp_msg_0.rf_err_vx = 0.158418557225;
    tmp_msg_0.rf_err_vy = 0.704011986983;
    tmp_msg_0.rf_err_vz = 0.522933062042;
    tmp_msg_0.ss_x = 0.581765656373;
    tmp_msg_0.ss_y = 0.647082576389;
    tmp_msg_0.ss_z = 0.465814927007;
    tmp_msg_0.virt_err_x = 0.261694016255;
    tmp_msg_0.virt_err_y = 0.22852967622;
    tmp_msg_0.virt_err_z = 0.332737824571;
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
    msg.setTimeStamp(0.0233434457177);
    msg.setSource(55358U);
    msg.setSourceEntity(11U);
    msg.setDestination(2090U);
    msg.setDestinationEntity(202U);
    msg.ax_cmd = 0.92254532536;
    msg.ay_cmd = 0.118180072646;
    msg.az_cmd = 0.806227046984;
    msg.ax_des = 0.796343622697;
    msg.ay_des = 0.356033650879;
    msg.az_des = 0.116210530548;
    msg.virt_err_x = 0.573494564205;
    msg.virt_err_y = 0.949596800497;
    msg.virt_err_z = 0.388857036838;
    msg.surf_fdbk_x = 0.508007344678;
    msg.surf_fdbk_y = 0.80816185451;
    msg.surf_fdbk_z = 0.21731374922;
    msg.surf_unkn_x = 0.20316417915;
    msg.surf_unkn_y = 0.619593056423;
    msg.surf_unkn_z = 0.222368383583;
    msg.ss_x = 0.838459072827;
    msg.ss_y = 0.501736024897;
    msg.ss_z = 0.986925960785;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RZPCIOZNHGLVHSVJGRFGDIDIYMPYNKAAQTREENEYCQLZMNVBOSASJWBDRECNYAGWZXARQSNUGXXLMHQFMFYHQXOJKPPVGOBWJKLBQKIIWBYBSXTSATRMJXNORAMJHZKAKJOCWCBRLZFTZNBFEOTUAQ");
    tmp_msg_0.dist = 0.084879089327;
    tmp_msg_0.err = 0.497040283179;
    tmp_msg_0.ctrl_imp = 0.515070391067;
    tmp_msg_0.rel_dir_x = 0.233315106105;
    tmp_msg_0.rel_dir_y = 0.200716444365;
    tmp_msg_0.rel_dir_z = 0.708802203904;
    tmp_msg_0.err_x = 0.736679431042;
    tmp_msg_0.err_y = 0.35975874883;
    tmp_msg_0.err_z = 0.521460067092;
    tmp_msg_0.rf_err_x = 0.420937020384;
    tmp_msg_0.rf_err_y = 0.193403026778;
    tmp_msg_0.rf_err_z = 0.113406204163;
    tmp_msg_0.rf_err_vx = 0.597027070289;
    tmp_msg_0.rf_err_vy = 0.546936910979;
    tmp_msg_0.rf_err_vz = 0.335832302917;
    tmp_msg_0.ss_x = 0.847264830066;
    tmp_msg_0.ss_y = 0.425893780999;
    tmp_msg_0.ss_z = 0.985717392355;
    tmp_msg_0.virt_err_x = 0.985125326547;
    tmp_msg_0.virt_err_y = 0.90007561158;
    tmp_msg_0.virt_err_z = 0.856347970875;
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
    msg.setTimeStamp(0.925671894609);
    msg.setSource(29918U);
    msg.setSourceEntity(136U);
    msg.setDestination(59030U);
    msg.setDestinationEntity(52U);
    msg.ax_cmd = 0.433073890902;
    msg.ay_cmd = 0.822228009974;
    msg.az_cmd = 0.852367464458;
    msg.ax_des = 0.672220339863;
    msg.ay_des = 0.348099506052;
    msg.az_des = 0.524066056213;
    msg.virt_err_x = 0.784915323373;
    msg.virt_err_y = 0.908799449019;
    msg.virt_err_z = 0.423102383542;
    msg.surf_fdbk_x = 0.191018319544;
    msg.surf_fdbk_y = 0.230314972601;
    msg.surf_fdbk_z = 0.0954936671822;
    msg.surf_unkn_x = 0.709677435804;
    msg.surf_unkn_y = 0.78589540988;
    msg.surf_unkn_z = 0.964585775571;
    msg.ss_x = 0.728677521512;
    msg.ss_y = 0.732444375076;
    msg.ss_z = 0.0317672672404;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LXTHFNGRKOGZQJKZCXMMSCWNZMVTLEWBBVLGPVVAXUPWHYJJEDZJOZXTYFPXPUGYXQGWGTNAIHZFSFEUXDESDIUXWRUOYLTWWNNLBFVDEHCTKKNKICLIMGPTEQZBOAEHXVMSKBKIJTVUTRQRHDIFMDACGELQSKFVZZJQFCOCSARQOPQGUZUJABYDDPEIMDRKOP");
    tmp_msg_0.dist = 0.944271998524;
    tmp_msg_0.err = 0.12175433993;
    tmp_msg_0.ctrl_imp = 0.0847609083499;
    tmp_msg_0.rel_dir_x = 0.119953300841;
    tmp_msg_0.rel_dir_y = 0.153277027213;
    tmp_msg_0.rel_dir_z = 0.972331576853;
    tmp_msg_0.err_x = 0.791734159098;
    tmp_msg_0.err_y = 0.764213963981;
    tmp_msg_0.err_z = 0.0812007426834;
    tmp_msg_0.rf_err_x = 0.244004574208;
    tmp_msg_0.rf_err_y = 0.739041078855;
    tmp_msg_0.rf_err_z = 0.47303878416;
    tmp_msg_0.rf_err_vx = 0.135839589118;
    tmp_msg_0.rf_err_vy = 0.166371363751;
    tmp_msg_0.rf_err_vz = 0.903095173993;
    tmp_msg_0.ss_x = 0.829149990648;
    tmp_msg_0.ss_y = 0.860887775135;
    tmp_msg_0.ss_z = 0.0239450976495;
    tmp_msg_0.virt_err_x = 0.658171817336;
    tmp_msg_0.virt_err_y = 0.725698063392;
    tmp_msg_0.virt_err_z = 0.0625705891515;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.396313167376);
    msg.setSource(64703U);
    msg.setSourceEntity(61U);
    msg.setDestination(41561U);
    msg.setDestinationEntity(234U);
    msg.s_id.assign("BZAHYACJSWOMOZJZIXYNGFMBPCTRHUILSAROETPWDUMWPKVAEQZJRFNJKHHZPUIHCCVDMWTQOYMCSJHVVLRXFQGNCAVYFWBXDFHBWSLJSDBITALZCLNEJR");
    msg.dist = 0.311753226965;
    msg.err = 0.476930230291;
    msg.ctrl_imp = 0.279269830839;
    msg.rel_dir_x = 0.822330722348;
    msg.rel_dir_y = 0.954186535669;
    msg.rel_dir_z = 0.710555515287;
    msg.err_x = 0.22465464873;
    msg.err_y = 0.67955076345;
    msg.err_z = 0.708582149498;
    msg.rf_err_x = 0.340372727098;
    msg.rf_err_y = 0.302523108162;
    msg.rf_err_z = 0.113327503612;
    msg.rf_err_vx = 0.145745787633;
    msg.rf_err_vy = 0.781174208152;
    msg.rf_err_vz = 0.700338883424;
    msg.ss_x = 0.307339157591;
    msg.ss_y = 0.275030910677;
    msg.ss_z = 0.662851262383;
    msg.virt_err_x = 0.735367737417;
    msg.virt_err_y = 0.737571613915;
    msg.virt_err_z = 0.201571966125;

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
    msg.setTimeStamp(0.372518662851);
    msg.setSource(14894U);
    msg.setSourceEntity(103U);
    msg.setDestination(1616U);
    msg.setDestinationEntity(207U);
    msg.s_id.assign("VMNFFYOIOXMZBWHSBOBCXNBKZHSQWJRZRCIWTXZPKLLPEUSGKKZGSQXRVLRKUNTOXBFNYRTYBDMVHDGNTLBSSWMTVAQYUIAAAEPKJFCDUO");
    msg.dist = 0.200774610862;
    msg.err = 0.148161953921;
    msg.ctrl_imp = 0.763434538742;
    msg.rel_dir_x = 0.683508881409;
    msg.rel_dir_y = 0.273456298464;
    msg.rel_dir_z = 0.365253453;
    msg.err_x = 0.736180303449;
    msg.err_y = 0.0781814827948;
    msg.err_z = 0.0523073273516;
    msg.rf_err_x = 0.790867873715;
    msg.rf_err_y = 0.476056920076;
    msg.rf_err_z = 0.434472537905;
    msg.rf_err_vx = 0.248229728651;
    msg.rf_err_vy = 0.437033518797;
    msg.rf_err_vz = 0.608485418438;
    msg.ss_x = 0.880778215285;
    msg.ss_y = 0.912557249546;
    msg.ss_z = 0.70111231641;
    msg.virt_err_x = 0.90589259662;
    msg.virt_err_y = 0.988041265062;
    msg.virt_err_z = 0.310530791725;

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
    msg.setTimeStamp(0.405862118976);
    msg.setSource(38883U);
    msg.setSourceEntity(44U);
    msg.setDestination(23306U);
    msg.setDestinationEntity(132U);
    msg.s_id.assign("RGUWRGMQANTCRVPSHY");
    msg.dist = 0.516479299474;
    msg.err = 0.432290903597;
    msg.ctrl_imp = 0.437696096239;
    msg.rel_dir_x = 0.355507127667;
    msg.rel_dir_y = 0.271632596259;
    msg.rel_dir_z = 0.30296830481;
    msg.err_x = 0.254808898429;
    msg.err_y = 0.572070636014;
    msg.err_z = 0.609164085864;
    msg.rf_err_x = 0.696184403092;
    msg.rf_err_y = 0.687308363774;
    msg.rf_err_z = 0.543109389072;
    msg.rf_err_vx = 0.430343184583;
    msg.rf_err_vy = 0.772522699846;
    msg.rf_err_vz = 0.0260876653635;
    msg.ss_x = 0.319600395033;
    msg.ss_y = 0.289708901512;
    msg.ss_z = 0.182085419645;
    msg.virt_err_x = 0.164547085739;
    msg.virt_err_y = 0.719052238315;
    msg.virt_err_z = 0.918549758627;

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
    msg.setTimeStamp(0.626351574176);
    msg.setSource(21708U);
    msg.setSourceEntity(240U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(68U);
    msg.timeout = 26141U;
    msg.rpm = 0.0605349317605;
    msg.direction = 141U;
    msg.custom.assign("DZNLXCIDZWRIBSOFELYUODEETCSQDUGHBXJHLRJPYEVNKDYRMCDSBMEDTBGFVMATGUXLWWIIZNSJJPGOQTKWVUMJFQSVFAAOBJRUQDIRUSTXOKWXZROKTQNGYBYFFZNYPSL");

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
    msg.setTimeStamp(0.0219208933185);
    msg.setSource(26451U);
    msg.setSourceEntity(168U);
    msg.setDestination(10365U);
    msg.setDestinationEntity(193U);
    msg.timeout = 3874U;
    msg.rpm = 0.114004514179;
    msg.direction = 27U;
    msg.custom.assign("KSURDHMSQCCWYQ");

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
    msg.setTimeStamp(0.307931900159);
    msg.setSource(58830U);
    msg.setSourceEntity(213U);
    msg.setDestination(36558U);
    msg.setDestinationEntity(135U);
    msg.timeout = 3422U;
    msg.rpm = 0.0709140680809;
    msg.direction = 15U;
    msg.custom.assign("TRCUTAWDHTRMHQZYPBRLVNZZKBRFYJEVGUNIWAJDTWBCOLFMNSDQOQKXREDJEGMENBMNXWTKUYAHBDIBSQVDVWGJEGIYRQUPCUPECWJOHXZDDLOJPFJEQRGQDCCVPZTFRDCWWZSZUMISZPSOFIYPNATSHAALBJSLVIKMKXVLINVUQXWHNKGXFOFHQVOZYMNBCLGHCAAWSHXXTQFCYSIERKPZUPOLLRKKAMYGGUJUEIJYNIBL");

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
    msg.setTimeStamp(0.24246130377);
    msg.setSource(59991U);
    msg.setSourceEntity(247U);
    msg.setDestination(3243U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("VSYOCDETPLZZYZDIUVCRVHKPAEVYJAGSRTMGQELPKTESFFCJBAAKIPQKXIBFLBLZMFFOXMZWTJBNLOFOBQEOTJMIJNWHBQYKPBVM");
    msg.type = 155U;
    msg.op = 152U;
    msg.group_name.assign("IRJMHDIOWBUPDYPTEENNMAKVOUWCTMNUYXVHZQKQUTBSEXSPATFULTLYYBRPBJREIDJGDSVNFSWPZHJNSGZZVVAGYRHDICGPVMWVMXRVOSORKKMDQHUQFBJDKP");
    msg.plan_id.assign("BIYOFFBAVQNOEKXTJTFMUTUXLBKRVXTWZAPCTJIRPBVYEQEPXYQDZWLVDATHJBMDPSSSMDSXMABZHJBWCKUHMCOYUSQJGALEOREGQKGFCPCWSGZAJERXGRJLIHEKHMCNONIYOMMFHTDBVELLFXWHXRNPRVGNWQPUWLSAAONVCJVWQJBDSKISYCYQXZMGGUNUFYPZIFYQG");
    msg.description.assign("BFWPFSBPWQQYQULXZIHIJLNWGOKOFFMHYMEBKRSKVROELUQNNVKMDHDNRGZLLPLODCTGKUMBGOWNSZEAWGAPKUTZKYEHKCRHBCZJTXOCJTRYTSURLKFOQTYISWFLZNJVXN");
    msg.reference_frame = 200U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54305U;
    tmp_msg_0.off_x = 0.8403678346;
    tmp_msg_0.off_y = 0.763749695579;
    tmp_msg_0.off_z = 0.656582959087;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.832557523924;
    msg.leader_speed_min = 0.510664565479;
    msg.leader_speed_max = 0.701880967797;
    msg.leader_alt_min = 0.359430177972;
    msg.leader_alt_max = 0.604790942888;
    msg.pos_sim_err_lim = 0.341653615763;
    msg.pos_sim_err_wrn = 0.800976219035;
    msg.pos_sim_err_timeout = 16390U;
    msg.converg_max = 0.217664461676;
    msg.converg_timeout = 33770U;
    msg.comms_timeout = 41735U;
    msg.turb_lim = 0.319878604661;
    msg.custom.assign("IGWLGUOHOXLZAIWACPOMMILJTREHVADVUXFYNOQXLLTACEVKNKBKGDDKPPUWVNNRENFBGUHULIPMXCEICZSBZVEAPPEIRAGKRJQXFPWIPMQBCVOESIR");

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
    msg.setTimeStamp(0.0344021072466);
    msg.setSource(46465U);
    msg.setSourceEntity(210U);
    msg.setDestination(49800U);
    msg.setDestinationEntity(117U);
    msg.formation_name.assign("FSCKSBCBWAXQHYTPQNNXLBAJMCEFBGWQREVDHMVPCXIAHVDJUDWBHFQJSZNSICYKLASFPFDUNYXHQGOQXTIVLFFIOMTYPOIETXKLJOOGVMRIUVCWWSKUCLYHTJAJQDATWGIUVJQEBPFKLKKRLHKOAABGTVDBHYMLAZ");
    msg.type = 181U;
    msg.op = 223U;
    msg.group_name.assign("QIZIOHEQRIDJJOGERCKWYRMYKISAJMYSSOWLDZMRETBYHLUVPWVFOUAMWMDJLCZERGJFASMLJRBYQREFKVHXUBIFHWFZKAGMDTQTNPGYUWUWFOADCPCNZVKNGZSCVNLPXABAICIVVTEXDFBKGYXFONRPGHNGHTUDBSTYAVBLMW");
    msg.plan_id.assign("OCOBGQXKESNAWTZEMDJEGFUFEQWTFGRQTFRWKLADGDGBMSQBHUSWJBUASUJQHIGNYI");
    msg.description.assign("FJURPZMUKIGYW");
    msg.reference_frame = 26U;
    msg.leader_bank_lim = 0.285724152925;
    msg.leader_speed_min = 0.641496584624;
    msg.leader_speed_max = 0.33629593567;
    msg.leader_alt_min = 0.844817114444;
    msg.leader_alt_max = 0.373597881915;
    msg.pos_sim_err_lim = 0.381737210182;
    msg.pos_sim_err_wrn = 0.188733615536;
    msg.pos_sim_err_timeout = 5290U;
    msg.converg_max = 0.59753230582;
    msg.converg_timeout = 46413U;
    msg.comms_timeout = 14711U;
    msg.turb_lim = 0.651058004197;
    msg.custom.assign("IRXULKILGTMWKOLZNLOEPFNKWPDBCAZFPPZHHZJCNDIGNIXEGSEDMNJBRQDUXRJUJJAGTDOSCRWCYIECCTNGXAXGHIAJJJIEFYSBCFSWYSMAHQMBFVNVYUKGBKHYTFFPRDRKEUDOIMZNZPYXHUMTXBPQSHKUIVQXDEVXVKCMSOLANHEHMUMWESJLONPAGQTOPTFGQBYYQDVSYJTOQVEASTOVXQIKRGFLHOZM");

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
    msg.setTimeStamp(0.977737721736);
    msg.setSource(23222U);
    msg.setSourceEntity(189U);
    msg.setDestination(11199U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("UHQKVOEFLUBFKHSALRZMAZXZDUDPYMLMWQUFBNMN");
    msg.type = 238U;
    msg.op = 152U;
    msg.group_name.assign("XZZAMXOWEOTSWJUDOXPLZVPYXVNXYJAIXFYGRKZTYFDCHHVITXIJOGRRLHNRPTUE");
    msg.plan_id.assign("FDBGKNZHKKHJTEUNIRAPVDXOIEQWDYSZQVBNXLXFAVUNZSJVMWHTYBIFHKISEOTVURXZPAZGMOCHMJQPIZWODHIWBOTOZBCPRUNTMUGMLLJMZHQAJPTRWGXSBRPQQJVS");
    msg.description.assign("SQEHECOUHTITSKWARGCXYAJMTMBABWCHKEHGTKKZIGETFJVXVCYLZFFKTZGNFRQKWMOVRLUMUSFXUQJWGPRUUDEDFSVZZMVTRBRBNAVAO");
    msg.reference_frame = 196U;
    msg.leader_bank_lim = 0.150641218728;
    msg.leader_speed_min = 0.206568487119;
    msg.leader_speed_max = 0.670189145792;
    msg.leader_alt_min = 0.353785004596;
    msg.leader_alt_max = 0.4174508379;
    msg.pos_sim_err_lim = 0.175705662461;
    msg.pos_sim_err_wrn = 0.0763144059009;
    msg.pos_sim_err_timeout = 29938U;
    msg.converg_max = 0.189262841354;
    msg.converg_timeout = 23734U;
    msg.comms_timeout = 54437U;
    msg.turb_lim = 0.648946783095;
    msg.custom.assign("PHMMCMHNBMOKMVIPSJSQCGKJELFCAXMBKRFDNTSGWYSRMTNRWIBUTOVICKQKAEBQWMGQVHZLWVFKYAZJCHBZDAIOGPHZORQUGCSTVHVQPKGDSYEJHNLP");

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
    msg.setTimeStamp(0.891233270924);
    msg.setSource(44396U);
    msg.setSourceEntity(186U);
    msg.setDestination(5512U);
    msg.setDestinationEntity(85U);
    msg.timeout = 27873U;
    msg.lat = 0.43845797094;
    msg.lon = 0.717058177105;
    msg.z = 0.768744682714;
    msg.z_units = 81U;
    msg.speed = 0.202383369205;
    msg.speed_units = 172U;
    msg.custom.assign("PKBOQYISVDBRZMRVQFHGATLEOGYNGAWIGKKJKTSGNZQJHCWFHTCHSFEQTQMKXEHAPIZTGNYJLMAATXVEHLXVPUUSOXWSJIMFOOURECJAOTIQOKMLVPYNJVALYCUOKFCSUQIPKXUGEPHXJWFWMNBPMXDSFRRLPMVBQZDQUNJRWXEDGLYOGKBDTOLAUDFZQZLNKBNBHAMZY");

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
    msg.setTimeStamp(0.350082531927);
    msg.setSource(41725U);
    msg.setSourceEntity(15U);
    msg.setDestination(41207U);
    msg.setDestinationEntity(238U);
    msg.timeout = 41535U;
    msg.lat = 0.580812507378;
    msg.lon = 0.12045950953;
    msg.z = 0.368025229919;
    msg.z_units = 31U;
    msg.speed = 0.379371370642;
    msg.speed_units = 168U;
    msg.custom.assign("LNXQVLXPHMUMWFHSDBHFPYSEMFCIJCHZWAYIVLCBOIGWQRXKNKTHADATCUIKYTEPHVVUUICBJZBNTNLSOSQTECWMPGUEDDJTVMLRBGDRASYLEBZJMPSDKBLYKREPFVHIURVHOQMOUNATWFSPELARJDKXZPJPETWQRNBEJKIVIZEJJOZUMYAOTNIADHUAFWYFXNLXWVQYFQPZQJBTZYZURGQGSWGKXCSDNINXZMBQOXRDLOVFF");

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
    msg.setTimeStamp(0.800312997187);
    msg.setSource(28882U);
    msg.setSourceEntity(161U);
    msg.setDestination(52188U);
    msg.setDestinationEntity(38U);
    msg.timeout = 63763U;
    msg.lat = 0.0683101513705;
    msg.lon = 0.417502303478;
    msg.z = 0.580711298647;
    msg.z_units = 63U;
    msg.speed = 0.913493277377;
    msg.speed_units = 53U;
    msg.custom.assign("DRLDPRJCBLKPGPFDDVLYENLQSUYTVEIOCYXSXOYSDNMHGWUCYVFDKFTKUMCTACICOPZGJGPQEFXMLIJPDUJNJAHCBXFIBWXZEIMDFKTBEQKNUOEDTULRARTHNZHUSVBQGPMHIXXULWZQTEAFPQGIOZLBWEBKRYZKOAQRBRPJOWWVZMRCBBUNOILAWVNZFXJGMQHNVSAJIYWKJHEHMGSVTASZAFYHJUDXTQFAQPONWZVCHYGECGYMLVSKRI");

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
    msg.setTimeStamp(0.157779144327);
    msg.setSource(3238U);
    msg.setSourceEntity(55U);
    msg.setDestination(37751U);
    msg.setDestinationEntity(239U);
    msg.timeout = 48944U;
    msg.lat = 0.101240976583;
    msg.lon = 0.488265905024;
    msg.z = 0.444117651852;
    msg.z_units = 177U;
    msg.speed = 0.0698858201947;
    msg.speed_units = 150U;
    msg.custom.assign("OGMBFGGAVTMPQAKKSVUAOXPXJPTGXQQCAEKJYDFYYFCWBSIXBCDFVSPMKSPWMHXTMOEWTCGOODQGMEQORKVVTDGMESNPXKSWZCVZIHIRILZHRHYNBNYCXAZTCQLRJCBAHNQWJGFEYUGJMTHTKIRZMUDDZHZDLFXRILGKFRLIBOLENOVWJQRQLHVDKWWUNDYEAJAELBNIPUJUWZQVSJNWHMBRJFCSTXYFZLBUPZBUEUHLYFEOTRNYOPPKSISA");

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
    msg.setTimeStamp(0.00976968902434);
    msg.setSource(21447U);
    msg.setSourceEntity(231U);
    msg.setDestination(60022U);
    msg.setDestinationEntity(22U);
    msg.timeout = 57158U;
    msg.lat = 0.689330886694;
    msg.lon = 0.243081249899;
    msg.z = 0.809181904737;
    msg.z_units = 153U;
    msg.speed = 0.737561577085;
    msg.speed_units = 245U;
    msg.custom.assign("AZBAMXSIYZIYYFLTRUPSFPEHOPDCKMCZTRPAYWKYGZDOCHXPAVDUKT");

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
    msg.setTimeStamp(0.890338547002);
    msg.setSource(39852U);
    msg.setSourceEntity(68U);
    msg.setDestination(592U);
    msg.setDestinationEntity(64U);
    msg.timeout = 50697U;
    msg.lat = 0.717472717253;
    msg.lon = 0.348743223974;
    msg.z = 0.159303294728;
    msg.z_units = 95U;
    msg.speed = 0.709850327608;
    msg.speed_units = 164U;
    msg.custom.assign("ELJBOECAKSDUQJXHVFAMWENKXGWAKPUSUMCYYJFOWUTPOEZPFFRZLNSOWRUHRQQVTKAMNHSMXLCMIURGQLPPVTCTJKSZEMZJRZMNZMADXQLZOEHVYOHDWJYKDWTSJIWDSVAJGOJCGADYQTNFUCINFUIIGRIABBGXLIKTHUIXCR");

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
    msg.setTimeStamp(0.295346447707);
    msg.setSource(16251U);
    msg.setSourceEntity(29U);
    msg.setDestination(37179U);
    msg.setDestinationEntity(175U);
    msg.arrival_time = 0.1357249937;
    msg.lat = 0.256033195481;
    msg.lon = 0.115073572987;
    msg.z = 0.740528507095;
    msg.z_units = 170U;
    msg.travel_z = 0.3915222054;
    msg.travel_z_units = 152U;
    msg.delayed = 89U;

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
    msg.setTimeStamp(0.727512428306);
    msg.setSource(18410U);
    msg.setSourceEntity(110U);
    msg.setDestination(51702U);
    msg.setDestinationEntity(52U);
    msg.arrival_time = 0.0245421734012;
    msg.lat = 0.155278777925;
    msg.lon = 0.4993343087;
    msg.z = 0.987315301449;
    msg.z_units = 48U;
    msg.travel_z = 0.708977948382;
    msg.travel_z_units = 22U;
    msg.delayed = 254U;

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
    msg.setTimeStamp(0.88317017306);
    msg.setSource(27358U);
    msg.setSourceEntity(244U);
    msg.setDestination(17024U);
    msg.setDestinationEntity(56U);
    msg.arrival_time = 0.838568467895;
    msg.lat = 0.500792405486;
    msg.lon = 0.556482594692;
    msg.z = 0.2183678156;
    msg.z_units = 104U;
    msg.travel_z = 0.145023161094;
    msg.travel_z_units = 86U;
    msg.delayed = 69U;

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
    msg.setTimeStamp(0.488232246589);
    msg.setSource(51260U);
    msg.setSourceEntity(181U);
    msg.setDestination(62787U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.387324800383;
    msg.lon = 0.548464333679;
    msg.z = 0.434011492491;
    msg.z_units = 118U;
    msg.speed = 0.703093640904;
    msg.speed_units = 251U;
    msg.bearing = 0.350449830603;
    msg.cross_angle = 0.685375819141;
    msg.width = 0.783471792165;
    msg.length = 0.8488324015;
    msg.coff = 19U;
    msg.angaperture = 0.0429178253501;
    msg.range = 64672U;
    msg.overlap = 176U;
    msg.flags = 24U;
    msg.custom.assign("OHZGUXIDQKYXXZHM");

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
    msg.setTimeStamp(0.0320949870838);
    msg.setSource(47806U);
    msg.setSourceEntity(222U);
    msg.setDestination(25482U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.332788857557;
    msg.lon = 0.148141147615;
    msg.z = 0.17577360756;
    msg.z_units = 155U;
    msg.speed = 0.978585250254;
    msg.speed_units = 221U;
    msg.bearing = 0.227820741483;
    msg.cross_angle = 0.349896191592;
    msg.width = 0.313822359805;
    msg.length = 0.889017272799;
    msg.coff = 29U;
    msg.angaperture = 0.581438951337;
    msg.range = 16420U;
    msg.overlap = 7U;
    msg.flags = 171U;
    msg.custom.assign("MALEJLKCIKFGSKNNZVUJNFCYASBFXRBIXNOZOCPQDEOFSMQUOTBDHQCCHJGPGYVFNWLULFHYHBQRULJUSPMKARKNTWZTLEBMFXEEZIVVXVLCNBJJQIHRGPADPBICRMDTEAKWWBPFGHKTMXOHXTOSTWHAJSBSDQWPXGUVKLEOZUKJUHRYARNGCSYTONGMLCZCKVVGNZTXEFRVFJRGXHIPZQQPDSZLAEYDMQAYUIDQOZAJ");

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
    msg.setTimeStamp(0.759837230711);
    msg.setSource(49942U);
    msg.setSourceEntity(13U);
    msg.setDestination(60257U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.103782383892;
    msg.lon = 0.76853451558;
    msg.z = 0.770423756659;
    msg.z_units = 183U;
    msg.speed = 0.603707030158;
    msg.speed_units = 229U;
    msg.bearing = 0.160903700598;
    msg.cross_angle = 0.950714221936;
    msg.width = 0.965003783623;
    msg.length = 0.667859973242;
    msg.coff = 6U;
    msg.angaperture = 0.515776783447;
    msg.range = 7175U;
    msg.overlap = 139U;
    msg.flags = 75U;
    msg.custom.assign("AKJZYCGRDUAQPGOMKNFTRLGVKQRLFEAUICZHJPDQOJBRCWYPAOINUYARWBCHDUINRECAAPJERNOLOEBQXHBWFQDITFVLDOVREJHFBG");

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
    msg.setTimeStamp(0.27755310432);
    msg.setSource(34203U);
    msg.setSourceEntity(102U);
    msg.setDestination(45057U);
    msg.setDestinationEntity(137U);
    msg.timeout = 621U;
    msg.lat = 0.643852427225;
    msg.lon = 0.331320710962;
    msg.z = 0.7224933257;
    msg.z_units = 47U;
    msg.speed = 0.827574333241;
    msg.speed_units = 19U;
    msg.syringe0 = 151U;
    msg.syringe1 = 54U;
    msg.syringe2 = 163U;
    msg.custom.assign("QWOMXPRRGLIBODXDTXQDNXTSKWJFHSABSQAYTYEMZKFMTPZMAAGSVBVAUQNMEJCRCIYWVPPLVIBFYDHSWNFKHKEIEECCNPEDHTKRBUHWIBNXXYVATTDVFUQVYPFMCCLLUELVKNSILHBXAKWAGEUM");

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
    msg.setTimeStamp(0.502205394601);
    msg.setSource(29884U);
    msg.setSourceEntity(221U);
    msg.setDestination(15698U);
    msg.setDestinationEntity(30U);
    msg.timeout = 55939U;
    msg.lat = 0.843722578399;
    msg.lon = 0.283264033285;
    msg.z = 0.366822306668;
    msg.z_units = 27U;
    msg.speed = 0.832721036162;
    msg.speed_units = 192U;
    msg.syringe0 = 215U;
    msg.syringe1 = 182U;
    msg.syringe2 = 100U;
    msg.custom.assign("KCLEULPRVCUFIPAGEJAYDTHIMVUWYIPVRAZKZPDZEPXMONMFFD");

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
    msg.setTimeStamp(0.253934840211);
    msg.setSource(43370U);
    msg.setSourceEntity(126U);
    msg.setDestination(21189U);
    msg.setDestinationEntity(179U);
    msg.timeout = 13776U;
    msg.lat = 0.525126475969;
    msg.lon = 0.444635388047;
    msg.z = 0.00270289688175;
    msg.z_units = 58U;
    msg.speed = 0.163964313763;
    msg.speed_units = 172U;
    msg.syringe0 = 177U;
    msg.syringe1 = 11U;
    msg.syringe2 = 222U;
    msg.custom.assign("OXDFZMDOVMYTNOALCZJXGFJKBSMPRBPVEMGINCGEWWIEVFDQKCTDOUSVRKSAQRWZYXGIGSRTPLJKMSBCKDHWGRVIANFQDJJQBLENZSBWXNPMMELZHNIJFHHQVVGBWVCERZAGXPULAAVAWLWYZOJQCSHYHTTPYYUPUKIYMOPOCUKXSLNKFXBUNPNWAQHWFJYZPHRZXSXQTEMTJUVNARLUL");

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
    msg.setTimeStamp(0.457322034392);
    msg.setSource(1927U);
    msg.setSourceEntity(211U);
    msg.setDestination(59096U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.19613805343);
    msg.setSource(13414U);
    msg.setSourceEntity(94U);
    msg.setDestination(33493U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.0244780918773);
    msg.setSource(63601U);
    msg.setSourceEntity(193U);
    msg.setDestination(60397U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.454539125395);
    msg.setSource(54630U);
    msg.setSourceEntity(82U);
    msg.setDestination(49451U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.254157461534;
    msg.lon = 0.163792324025;
    msg.z = 0.0363704079402;
    msg.z_units = 73U;
    msg.speed = 0.980202072161;
    msg.speed_units = 58U;
    msg.takeoff_pitch = 0.330803897251;
    msg.custom.assign("KXXABRPVASCRLQIVDXGIJYBTAOTEBFCEJIOIUVEKYYXLRERTJPQZOGLXAJVFQMWLDPHRYKKCQKIJSFKFYDEZGDMMFANYZWTWAYNIDZTMSCOUBSXHZACG");

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
    msg.setTimeStamp(0.949190350152);
    msg.setSource(33979U);
    msg.setSourceEntity(233U);
    msg.setDestination(53858U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.309210991714;
    msg.lon = 0.287071945877;
    msg.z = 0.879337748771;
    msg.z_units = 131U;
    msg.speed = 0.811983884902;
    msg.speed_units = 67U;
    msg.takeoff_pitch = 0.224923411047;
    msg.custom.assign("ASBNDREXDTZFKNAEIVLREYBHMNQHSIHXXACZILIVHUYATJZOBWLLBQWPVTRJPRZGQOWMZELJIWLWAQKUVUCNHBDSXDXXYWGYTMUGKPVCFQTIECKZSUWGTFJWEYUEAJBZCQDFYMLJUOCHMJWPSPVSRQQIXTDWGKHXYUBZGMBNSOAVRYBPHPOKDGXS");

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
    msg.setTimeStamp(0.235798933182);
    msg.setSource(52013U);
    msg.setSourceEntity(29U);
    msg.setDestination(50229U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.673108862757;
    msg.lon = 0.205533367573;
    msg.z = 0.979160480493;
    msg.z_units = 201U;
    msg.speed = 0.807791249804;
    msg.speed_units = 168U;
    msg.takeoff_pitch = 0.225766537808;
    msg.custom.assign("WBKKWPBTIGUVSOCHAEWJQTDSITPUMKJWDBYDMILQHCVNHPCNZBFBVESOJAXPNMYXLJUADXBASYDWRIZKTKOQRJVDSLPVQGVTCEZSJROGMFNMAMLJJXCFDIGXZEBGUUGPJPXZWLTVWGEFTUMQBGONOPTFYKNFFCYQKHSOHVABRANKQJMIHYFLZPKLOQIEVNCXYUWGFRSSIIZKYYWQCWLDHEHBAZUMXZ");

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
    msg.setTimeStamp(0.549454143522);
    msg.setSource(16337U);
    msg.setSourceEntity(109U);
    msg.setDestination(9993U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.0210360155483;
    msg.lon = 0.582547472889;
    msg.z = 0.170951313371;
    msg.z_units = 168U;
    msg.speed = 0.135345381753;
    msg.speed_units = 87U;
    msg.abort_z = 0.567220737037;
    msg.bearing = 0.857249413621;
    msg.glide_slope = 77U;
    msg.glide_slope_alt = 0.158853487707;
    msg.custom.assign("OSDJNJTDKOYNCGBL");

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
    msg.setTimeStamp(0.129622917995);
    msg.setSource(25932U);
    msg.setSourceEntity(198U);
    msg.setDestination(6280U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.990458953531;
    msg.lon = 0.863303404504;
    msg.z = 0.315714350423;
    msg.z_units = 160U;
    msg.speed = 0.695871738114;
    msg.speed_units = 218U;
    msg.abort_z = 0.127227526851;
    msg.bearing = 0.18742160985;
    msg.glide_slope = 122U;
    msg.glide_slope_alt = 0.660054078585;
    msg.custom.assign("VIETERMYHPDHLUCGFRIEZYMXWEUOEPPUMBIZJOBJAZIVGSNZVXGOSKAQFGQMTLQWDSXXGKNXLWNDUCXASYVBTMKGNPXYISZWJKVEHUWLWYWOAJFQFDKDMSNYMTHTAWLEXEFYPULVFKQMRRKODNPDHQXXICMQCBJBTDFNPCRNAFYVLACNZVAAHUSOSJUJULIEPKGLQRSRPAFHUZWDJBJEDBPKTIMWTHOFCIJR");

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
    msg.setTimeStamp(0.724638390851);
    msg.setSource(33491U);
    msg.setSourceEntity(180U);
    msg.setDestination(10898U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.433268403309;
    msg.lon = 0.960040128069;
    msg.z = 0.332311446186;
    msg.z_units = 72U;
    msg.speed = 0.787345457227;
    msg.speed_units = 27U;
    msg.abort_z = 0.779444818906;
    msg.bearing = 0.189396957994;
    msg.glide_slope = 46U;
    msg.glide_slope_alt = 0.183188089922;
    msg.custom.assign("JOLRKYOVOHVMLPTKBAZMKDKFJVRNUEGSYUWMSPHIWCUOYPGARUJTCQZFBAAFEHYUAPPIYPVIBKMEIABSWYWSDWWIQZQUJDRHGQOLKSCTJMIRDEASUBEIKJNFKGQLXSVUPYNQXDCKMLPQWEHNVTICYOTNNPFBRRMZCTFFLGWMPZABDHMATSIZZBZYYRTWOKFN");

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
    msg.setTimeStamp(0.297579439052);
    msg.setSource(31293U);
    msg.setSourceEntity(52U);
    msg.setDestination(45069U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.659323468236;
    msg.lon = 0.104245350492;
    msg.speed = 0.869232669817;
    msg.speed_units = 18U;
    msg.limits = 192U;
    msg.max_depth = 0.945151288419;
    msg.min_alt = 0.399819297805;
    msg.time_limit = 0.804430756314;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.757745213678;
    tmp_msg_0.lon = 0.894275744793;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EDYCHTWIEKYISMIJPXUZYSRABCOKGUDOTDCKXUUNEKGEAGFJJCAFYQILBSTPOBMFTFZXDQGBMJKUWSTNTUAMXVHEQRXDLXGQLPUM");
    msg.custom.assign("VCKJKVEAZUAKSZLUTDEXYINMLNIGMITCITVLINNSSSGMVHWAORLFRGKIGBXVSOARVYVQTIWGCNTJKOCFIOPZDPYUXRJYRSQHAAEMAKHFGDGFPNOSWZUDYZBFOKDBXEFGPMPYDGCYZWHEFPBJOPJBNDRBRTEUJEMLMDQJQIX");

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
    msg.setTimeStamp(0.534167537706);
    msg.setSource(43600U);
    msg.setSourceEntity(19U);
    msg.setDestination(47344U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.384415276998;
    msg.lon = 0.952209187491;
    msg.speed = 0.273625452484;
    msg.speed_units = 107U;
    msg.limits = 121U;
    msg.max_depth = 0.252561689748;
    msg.min_alt = 0.782036367846;
    msg.time_limit = 0.67569530495;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.263428165772;
    tmp_msg_0.lon = 0.395350543682;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("CDRACLVTBGMHJHLKBPZZIVWUANXUYFFQKZFCTLSBEXLBUUZHOYSAAQRIPTYEONBLFAEPEJZSSATHGZTEWTQYHDOMMAQGFTHPBFGUZVTYKEXUJFEJCLRWMRFWDWVKHRDDNBSBDOMDYWNXXUXLBNQSDJVKSPIIWROOQPJOFAVKNQUYKCJNLTPCNIWSYVKHHECUGQJUASCOMHNVSTRIMZVXCEJBOQAGLIWOWMPQVRZGIIDLYEPXDKGJ");
    msg.custom.assign("XHSPXESBLQKQYMIXTSGZYYHGWKYXDFVJSVPHBTDEAVXZFIAEJIUBUTQMPBCSAKVWTWMAQZOUVXIJCFFVNRRLHYTZHTXNAIRWDBYCGFUOPREINQLDEBCGAOGVTRCYQDKFTPR");

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
    msg.setTimeStamp(0.620915455893);
    msg.setSource(9012U);
    msg.setSourceEntity(157U);
    msg.setDestination(27886U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.724177496489;
    msg.lon = 0.797005667667;
    msg.speed = 0.179980556808;
    msg.speed_units = 111U;
    msg.limits = 50U;
    msg.max_depth = 0.920008764175;
    msg.min_alt = 0.252293850234;
    msg.time_limit = 0.384383867752;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0595143374285;
    tmp_msg_0.lon = 0.725481109154;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("VHBIPZEDWTMNCRPURCFJJYUAYFQYPGTSQPBMOUXAPWLRAIZJVDMFLWRJKFTRLALVAKMDEYCKKUMMQCTIWWSKAUKXBGGQBHOEDBXDZOOBACZREXAOFSWAYDSOMGNNOUTGNZVLWYMEVVEXLNHDBIJYKN");
    msg.custom.assign("BWSKUSUZOMBSFLEGQBQXXHKJDHUPOYMRJICLSYNNGLZJRWVEOZFHFQAVTMAQKBAWRCDXPSMDTPFH");

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
    msg.setTimeStamp(0.1206829801);
    msg.setSource(35648U);
    msg.setSourceEntity(107U);
    msg.setDestination(36541U);
    msg.setDestinationEntity(123U);
    msg.target.assign("QCOLGTHUKRBZSDYOCIENZTTSBYAUUAPHRL");
    msg.max_speed = 0.57543379064;
    msg.speed_units = 176U;
    msg.lat = 0.550288015972;
    msg.lon = 0.868841666397;
    msg.z = 0.825009015067;
    msg.z_units = 60U;
    msg.custom.assign("WVLGLVZFFNAJYEYBESLXJBGIMIJHUWCHZXMAIOBZQNJKHESLQLYWOWXNWPZOOFLOUCZFAUFWJTUZKRMKYGSKXYAOQARDTUBHIHGCHKNGRFQARGBPPUA");

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
    msg.setTimeStamp(0.161728523898);
    msg.setSource(15167U);
    msg.setSourceEntity(250U);
    msg.setDestination(61606U);
    msg.setDestinationEntity(141U);
    msg.target.assign("TQXHGOKQZHAXDJIYOFLGRNYWVSFBARXCKKMIUXTESLLUMMHCEGNLSQWXBTOZNJMPAQIVYUGIWJGCGBFRDICOLXRHCNDVGSCPQBRYFIKKQXLVNQHPJTNBYHWYVQXRGSMAMUMWKTOEXONJBLVKEYZDPLDINMPOWNTPWYJIASPURXEVVKFWYEFTAHUETPUBORDAZLAGSVDVYPDHASBQPZBTZIFCQOJCJMEFDIBLGKJHZTCWRFZUAZSKRUU");
    msg.max_speed = 0.591103832872;
    msg.speed_units = 2U;
    msg.lat = 0.300811642614;
    msg.lon = 0.922731890383;
    msg.z = 0.390611948483;
    msg.z_units = 19U;
    msg.custom.assign("JAJDNJDICLEAVBHXRWYQYKPHHBGSMPZORKPROCGBE");

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
    msg.setTimeStamp(0.94592076493);
    msg.setSource(47310U);
    msg.setSourceEntity(2U);
    msg.setDestination(47930U);
    msg.setDestinationEntity(73U);
    msg.target.assign("KDEZFVBQMFGVUNMJTURSKQYHAXDXPHHYJYPHUCDMLAQLXMFQUEOTUKCPVSYYBXWBTRKAEEPUXBTEOLZJLGPCHSOOBIWOXBSOWZKUUGBEGYCORGTXAPJIZCYYKNIIVPWNWIVNZOIUCQHOADGLKTSZWNDNFVOGVYKRFRBQFILCCDGQCFIATVJTMEMPJXTRLWLHYPZKRNMQZTHFWVNVNFAUBDLJDJSSFAIHLXSMMRANDG");
    msg.max_speed = 0.469808575853;
    msg.speed_units = 181U;
    msg.lat = 0.480211624042;
    msg.lon = 0.359101500239;
    msg.z = 0.987845165379;
    msg.z_units = 33U;
    msg.custom.assign("XDKLTSXWOTJGMNZWYLOOCBHSFPQBAZNGUKSLMZZEAYKOKCVURABDRMQXUXEYRCIHDXNRFQNCOBTKCEPDGQBDIVOQRXDAMTNOILJEKWFHFZIWWGVSNQSPUSJVOEXMVNHYRAXJHVGSCLUEJCIIJPUWJVEYCQGQWFMNMPTKAMYRF");

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
    msg.setTimeStamp(0.728168900682);
    msg.setSource(31359U);
    msg.setSourceEntity(161U);
    msg.setDestination(48024U);
    msg.setDestinationEntity(103U);
    msg.timeout = 30829U;
    msg.lat = 0.469272148527;
    msg.lon = 0.128139512863;
    msg.speed = 0.209963051604;
    msg.speed_units = 190U;
    msg.custom.assign("NFHEORVCMSRNMAZJEVTFXRZCOYEUWAPXKCHKJUSUEJGMQMIZTPHMVQZDFSUCSYALTNUGTYQ");

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
    msg.setTimeStamp(0.375687777159);
    msg.setSource(19870U);
    msg.setSourceEntity(88U);
    msg.setDestination(30218U);
    msg.setDestinationEntity(49U);
    msg.timeout = 29765U;
    msg.lat = 0.25390764037;
    msg.lon = 0.312502796447;
    msg.speed = 0.792123574106;
    msg.speed_units = 158U;
    msg.custom.assign("RWSCYPOHCXTODLZDBVRPADEDTEHIWPSNHDLJTQOXNRFPRDKBTENWASAWUMTFAGVUXNOCGEOKDYDJEGPJKFZFMIPCPJJYZTMVUSABHUCSHQLWYQQLWZXKUQFZHQ");

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
    msg.setTimeStamp(0.450954818555);
    msg.setSource(32781U);
    msg.setSourceEntity(72U);
    msg.setDestination(29532U);
    msg.setDestinationEntity(125U);
    msg.timeout = 25544U;
    msg.lat = 0.438469069111;
    msg.lon = 0.117789958638;
    msg.speed = 0.89748971757;
    msg.speed_units = 138U;
    msg.custom.assign("DVOCCFPCIVMWEBRQBIJSDMBGIAFWSIKZRTCRPPFATYGYMMHECVSZHYWWIQILUNJHAUSIYXIKDSZYVUUVFQLEQLXJLRKTXKFUHMOPGOWOFTGOBBJYVJUTATMWXRUVUYNHSHEPMVACRONDRLDLZHOPTLSCHVHGBXCTCMAJQKEZE");

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
    msg.setTimeStamp(0.454492770787);
    msg.setSource(25086U);
    msg.setSourceEntity(124U);
    msg.setDestination(48961U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.832030321039;
    msg.lon = 0.731246308768;
    msg.z = 0.473975931088;
    msg.z_units = 180U;
    msg.radius = 0.850488726608;
    msg.duration = 58123U;
    msg.speed = 0.152924652347;
    msg.speed_units = 84U;
    msg.popup_period = 42222U;
    msg.popup_duration = 21597U;
    msg.flags = 151U;
    msg.custom.assign("RNNNEBOOYSS");

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
    msg.setTimeStamp(0.267142408915);
    msg.setSource(19545U);
    msg.setSourceEntity(96U);
    msg.setDestination(53382U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.256375242897;
    msg.lon = 0.726010097099;
    msg.z = 0.537839149715;
    msg.z_units = 61U;
    msg.radius = 0.906082688137;
    msg.duration = 29791U;
    msg.speed = 0.0707664129287;
    msg.speed_units = 165U;
    msg.popup_period = 7577U;
    msg.popup_duration = 40384U;
    msg.flags = 46U;
    msg.custom.assign("EWZYHVAXTKGQRTFOQCFOLEBAMRGBMESITNQWUFTJWMUGYBRAGKROXRAINOAYEDFNDVPSZLPPSRYWVLYUPDYLOXHMHNMVEJHKQJMGWFVXFZMSZJDFWGCJBRYLKPEHNZLIKQBYFWOENPFVHDCISRZCA");

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
    msg.setTimeStamp(0.569804208476);
    msg.setSource(44059U);
    msg.setSourceEntity(107U);
    msg.setDestination(13389U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.321405916218;
    msg.lon = 0.271051914612;
    msg.z = 0.241617176771;
    msg.z_units = 100U;
    msg.radius = 0.373753022467;
    msg.duration = 399U;
    msg.speed = 0.895710887423;
    msg.speed_units = 150U;
    msg.popup_period = 40678U;
    msg.popup_duration = 19487U;
    msg.flags = 86U;
    msg.custom.assign("KMHCJEEOKLVHYZQZTBOUKAYEOETIWFLDLHUAZODNSYRSAJXGSMUTDPGIFXLXSYGWQASFNWXPIHJWBNFOBZBQPMVTOUILCZMVFYZPDHHDCRRXEWAXUFIVPEMRPUIJFANYQVHMRTMEODBNZGMAKFXZABKMNGICTRUOBCQTRKGLQWXAQTYULYDVGJWPU");

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
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.66898268536);
    msg.setSource(26909U);
    msg.setSourceEntity(250U);
    msg.setDestination(33383U);
    msg.setDestinationEntity(9U);
    msg.timeout = 23447U;
    msg.lat = 0.364210790933;
    msg.lon = 0.320428799136;
    msg.z = 0.552857829572;
    msg.z_units = 157U;
    msg.speed = 0.235194003275;
    msg.speed_units = 9U;
    msg.bearing = 0.228912725753;
    msg.width = 0.0773508289868;
    msg.direction = 175U;
    msg.custom.assign("HLSYGFRWECGUZDUVLILSSEHKWLAQQQPYBRUUMZKGCNFDXHIDBDBFPFOYNDUOZPKXLFUIARHGMKKCFWKMTGJQXBFGRGILKCTXZAXPTMNNOOOPZVKEVOMJACLRQHVIHANVZDHMIOUQPBBOTYSACTYRDWWIPYJKUNZTUVSAIXIJQTYMJSNOYBVRSTFYRMWJXXTVLEQFWPJJOPR");

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
    msg.setTimeStamp(0.105564085405);
    msg.setSource(38785U);
    msg.setSourceEntity(53U);
    msg.setDestination(50383U);
    msg.setDestinationEntity(54U);
    msg.timeout = 38383U;
    msg.lat = 0.208966673615;
    msg.lon = 0.81925430915;
    msg.z = 0.798234731961;
    msg.z_units = 9U;
    msg.speed = 0.243664302949;
    msg.speed_units = 115U;
    msg.bearing = 0.781387507716;
    msg.width = 0.91774194187;
    msg.direction = 195U;
    msg.custom.assign("NNFEWIQTYIVRSHFCUGOQWSPYHHOPTGLBMDMNYVISTXBHZQOGPYJGLCZQJBQOZXGFIREWOCGUMPWWVIVBVFSAAPHBEKUNFUFQRCDDDMYGUZDXZQEMPKFUELRLMJWAGOJDALYTTJHINSDBIARZYJXXSMQMCZUEJUFGTVMPPAEDONZSABBADNMCJJKVDHTOUXNRSTKLKOZRCIBCIHONRYAQT");

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
    msg.setTimeStamp(0.0542185232609);
    msg.setSource(5703U);
    msg.setSourceEntity(244U);
    msg.setDestination(49186U);
    msg.setDestinationEntity(159U);
    msg.timeout = 54899U;
    msg.lat = 0.899478658627;
    msg.lon = 0.999449520897;
    msg.z = 0.818519313257;
    msg.z_units = 71U;
    msg.speed = 0.701591197922;
    msg.speed_units = 212U;
    msg.bearing = 0.89541313339;
    msg.width = 0.330129956984;
    msg.direction = 126U;
    msg.custom.assign("FUCANRJRVIOQDSKOYZZPSMGCEXTTPXBKYCDIGVGEHNDNIUJTMDCCMU");

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
    msg.setTimeStamp(0.8943361636);
    msg.setSource(18457U);
    msg.setSourceEntity(21U);
    msg.setDestination(48808U);
    msg.setDestinationEntity(142U);
    msg.op_mode = 136U;
    msg.error_count = 186U;
    msg.error_ents.assign("QUAKCRLIELSAVPFBCEGYEXBGOXGUWQOSJFIJOZVYFLTVTHFKNPHCVPGDCKZPJFEXWDGZYHUDAFBMKLRHFNLPNYHXINYZOWXQNMJERKWHCQAJVEWTJGCJRMSFKULMWJXPUUYCTDSIGOIQNSGPCBEROYMZRKKETNQYGJOQKBWY");
    msg.maneuver_type = 53883U;
    msg.maneuver_stime = 0.957315602312;
    msg.maneuver_eta = 54652U;
    msg.control_loops = 2857709569U;
    msg.flags = 60U;
    msg.last_error.assign("XOAXSGUCSTTVHDMMLENQMWBXINQFOQHWUCAPAOOVSQZBTPZMZEBFGAQUJAQDFEMEPTIFEHZHVYNVBHCYVLTYSHGJNHUQZDOXCIDXYSLJIKRENFNRKZWJKVAEIRFMPDCHDMU");
    msg.last_error_time = 0.570908787523;

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
    msg.setTimeStamp(0.881774050125);
    msg.setSource(13386U);
    msg.setSourceEntity(188U);
    msg.setDestination(62452U);
    msg.setDestinationEntity(239U);
    msg.op_mode = 230U;
    msg.error_count = 75U;
    msg.error_ents.assign("ESOKEGCELMPLCXXLYUSUTMWFGNZFPFZYKITVWTRWBMCTHGUEOIBSXVMRVJOMPIAMDFEZYXLNJVOXECLZADARADTFEESYCABUQDDZSNHIITUUEVAHGLDYWIWUBLWSQVMZHGPFPVYHCBXGSGMQVAORIYBNRTJHCKAMDSVUHWJLAZNOXNQSPWKWKOFDNZLHHTOLCFOFJINJKIUBKPEWNJTZDXXYQKOSNXYBCRGQDGPFPJKBRMAHTRVJRR");
    msg.maneuver_type = 43706U;
    msg.maneuver_stime = 0.462839289981;
    msg.maneuver_eta = 11118U;
    msg.control_loops = 343528709U;
    msg.flags = 212U;
    msg.last_error.assign("TLNUEVZEJBQZLELVAGEUPYLGQHRYKNEGQOXBNXQMBLUJMWWMSDFTOCJQHWCTHIKDNITHSAYWGHBGSYTDDAIEZGKAEZWABIJKYHJGAKPNXQZJLVKCNWOOKJDRYPRZRLVSSCFXQOUKJTSCCICVMOANHSVEUXMWCWMPRBDEXVGAZMKLRGSTOZVRUDXDQYNFBTKYDDGFWMLRPYFPCQTIIUXHOLROWFNPH");
    msg.last_error_time = 0.779238679497;

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
    msg.setTimeStamp(0.110822332901);
    msg.setSource(26202U);
    msg.setSourceEntity(80U);
    msg.setDestination(21146U);
    msg.setDestinationEntity(239U);
    msg.op_mode = 27U;
    msg.error_count = 22U;
    msg.error_ents.assign("PXCEBIBDIGGDSQERTHPUKYZZQASVNECBYNZKLLICJCOCQUXLMTDPCFDP");
    msg.maneuver_type = 45954U;
    msg.maneuver_stime = 0.577010189623;
    msg.maneuver_eta = 21543U;
    msg.control_loops = 2368100751U;
    msg.flags = 127U;
    msg.last_error.assign("AQWDRINXLGMBWKBCHMIKDJJLHRF");
    msg.last_error_time = 0.937541218243;

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
    msg.setTimeStamp(0.166587339884);
    msg.setSource(21579U);
    msg.setSourceEntity(186U);
    msg.setDestination(5237U);
    msg.setDestinationEntity(190U);
    msg.type = 170U;
    msg.request_id = 2280U;
    msg.command = 93U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 29618U;
    tmp_msg_0.lat = 0.181347285848;
    tmp_msg_0.lon = 0.550234529616;
    tmp_msg_0.speed = 0.346010334152;
    tmp_msg_0.speed_units = 75U;
    tmp_msg_0.custom.assign("TZAHUPPZXAJCOUKIDJSRPRHGNOERVYNXXTJDOKYIVJTGEOVZHFJSBIKCYHBYOPHJVZUAFQPISKGXOUQASSDLBXMWYDSXEETIAJQWZGWRHERMWVYKNDDHUOBJUMTLFIUQHZBSKWSSNRQXNMPYADBLILIUNTAOGSTVIWLPKFQHMIULEPJAYRTEFCRVQMCOOGFDDZLRCEKCCMZZZRAEWWNGVFLNBAMVCFGVY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44252U;
    msg.info.assign("WGERROAUETHXQUEMREAVQMDWWTYPLOCAEPUXPKPZJWPRQEAYOGNOIJSDTQCZIODWHDIUTNIGMAJLAINKCMPRGNPAUFXMBJILSLNYCKXJFHSSEYMHBBOQZJBETYXBUHNBJIWLTDZKZFTJKBCKLWBYMGJHZFHVNQRDDUWSGVZRTDOAQVUUKKLKCADEZYQZWYZHRHFBSCVX");

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
    msg.setTimeStamp(0.377727091654);
    msg.setSource(56088U);
    msg.setSourceEntity(214U);
    msg.setDestination(49284U);
    msg.setDestinationEntity(23U);
    msg.type = 120U;
    msg.request_id = 54303U;
    msg.command = 28U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.377586462657;
    tmp_msg_0.lon = 0.19622940797;
    tmp_msg_0.z = 0.0289993819309;
    tmp_msg_0.z_units = 70U;
    tmp_msg_0.speed = 0.580498071808;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.bearing = 0.68992811874;
    tmp_msg_0.cross_angle = 0.909068154114;
    tmp_msg_0.width = 0.0780424163403;
    tmp_msg_0.length = 0.288633752416;
    tmp_msg_0.coff = 144U;
    tmp_msg_0.angaperture = 0.229756833059;
    tmp_msg_0.range = 6431U;
    tmp_msg_0.overlap = 147U;
    tmp_msg_0.flags = 115U;
    tmp_msg_0.custom.assign("DMQGUPPSLFKTHNHHPAMKXXGPECDDLDGVJFUNBWYBVFIWYSJRVRPRCTNYCUROYMPARJLASJMHIZXNSOHCAMQJIVEWSQGNSDMXZZZSORDVFOZUMKYTABVVYHUJBXOUONMLAEYIIQZUFNRZMWBRLOAQALDETGXPAQGKZWUITEB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38386U;
    msg.info.assign("GUWGQDDTIBSJGOODNFSIMUEUPEKS");

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
    msg.setTimeStamp(0.119930636301);
    msg.setSource(26040U);
    msg.setSourceEntity(225U);
    msg.setDestination(52935U);
    msg.setDestinationEntity(60U);
    msg.type = 36U;
    msg.request_id = 8567U;
    msg.command = 109U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.377917324274;
    tmp_msg_0.lon = 0.72692650155;
    tmp_msg_0.speed = 0.647057670673;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.duration = 35271U;
    tmp_msg_0.sys_a = 48172U;
    tmp_msg_0.sys_b = 43921U;
    tmp_msg_0.move_threshold = 0.450765676687;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9228U;
    msg.info.assign("EDQKCXBOURMRWVLIKVVIJBHRCYKHWEHDZNZOZVX");

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
    msg.setTimeStamp(0.410062765901);
    msg.setSource(16895U);
    msg.setSourceEntity(34U);
    msg.setDestination(7523U);
    msg.setDestinationEntity(200U);
    msg.command = 46U;
    msg.entities.assign("EWRSZPKTZGHOUDXHRUFBIDNOSUWXPBNPAKQCLTISACUGH");

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
    msg.setTimeStamp(0.14719717242);
    msg.setSource(20642U);
    msg.setSourceEntity(250U);
    msg.setDestination(14128U);
    msg.setDestinationEntity(181U);
    msg.command = 126U;
    msg.entities.assign("PLMRXJKFMAUDDACDPGJGUCFYXVDBBAESEVMHV");

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
    msg.setTimeStamp(0.391511924422);
    msg.setSource(37867U);
    msg.setSourceEntity(74U);
    msg.setDestination(5957U);
    msg.setDestinationEntity(110U);
    msg.command = 103U;
    msg.entities.assign("QODZQPNMODFEMCRSVVTHLKGQFNJCLKJKYLHNXKDHYFQVPTEXTWMRUTKBXZMRUAOQEWYJIRTIRGHPHKSQNDCWEFMRIRATLLYAJNBWXDMRDSREIHNFVKLWEODIAOOGOFQFBBUVWHAANLPZOFJBBCJZNISLWVQOEHZLXGJIIDRJXBYCUIXFWACVUUMWTZGSKBV");

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
    msg.setTimeStamp(0.751223671872);
    msg.setSource(52826U);
    msg.setSourceEntity(159U);
    msg.setDestination(45079U);
    msg.setDestinationEntity(93U);
    msg.mcount = 56U;
    msg.mnames.assign("XSPTCUWJVZNGDUNYRKZRIMLQJTTDHXBFRQESAVETZQUYQGLXTHVBNWIFBKDMAFLQXSAIBHCKAGJACQXLOECYREJKDBGWFCAHSKBAMSYRWTBLCXLVYVHPDVPYXCQOTRDARVUOECMATOSFUUJQVIJOSNISTYIKGRGXBYMQVEDGIENIPYXXASKKFDOUUGICWPV");
    msg.ecount = 93U;
    msg.enames.assign("ZKMGLDWJZMONLWVVNBMULRKVUZPTMVCDRXGCOAFUUTWJOJQJSEJCIMNWKZBKLFAPISMNVSTOCQAFTEAINIQHXGOZFAHXUQTHMTZVERWPFTLGBILKDBUVGIXAXJHRKNEYKDISMFRXQSFEWCSNJWMCTAPDQDFIZBRYDRSUJQCWLEVXYEZEPOWGYSZUOMJRPGFJYPWSZXHQHTHXTBBCLOIOSBKAYX");
    msg.ccount = 165U;
    msg.cnames.assign("JEWZHVCYOIYAQLWPFLDLKDJSCZNOTPAZPMUYPPBZETZOKLJZKREUQCBWBTENDTXEDYBJUAIIXKHDJBSRGGXGLXRWXHZONSBHJNXETVYJIFDGTRGDFIRVDBCWOMTEOJMFZIICQHFMAGYOLZHACDKCAREPILNSVSGUGOLFPQNQRSPMVBBCYUNEWMMVBQZUTKKPSQHUIGJFMHSVWYHFQLEJXCFSKXMAXL");
    msg.last_error.assign("HLJNVPYQZKYAGFISSXOHXVGJMQBMPEFVRGGUHUBRMWTGH");
    msg.last_error_time = 0.318231878654;

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
    msg.setTimeStamp(0.0671500712367);
    msg.setSource(5972U);
    msg.setSourceEntity(62U);
    msg.setDestination(56535U);
    msg.setDestinationEntity(120U);
    msg.mcount = 52U;
    msg.mnames.assign("VINMICWNDNFQUZLOSVFZLRENDHTSZVIOXELRIJBCBBHGHAQFETORHDGXXZIOKKMRJYPEUPJEHXUJQLEZZTSZXMDBFFUZUOFMGPEMFFLRTIBKUYBPAOVSQLKBYALRICQJNHRHLAVCWXKMTQDRGWJXSBSIMEAKGUYWEHTYSVVUTKAADSYQGM");
    msg.ecount = 35U;
    msg.enames.assign("WOWBGARQDLIESTOMVVEPVDEQTPJMIVSCAFV");
    msg.ccount = 252U;
    msg.cnames.assign("EDYAXVSRYBCGVLEOZJAUTPE");
    msg.last_error.assign("ODXCGXJVLGEXVMFJHKDDAIJOAPSOASNCDRUJQYRDPPIEYBCSCKIQTYFZUVTZGYSCNNWRTPBAUKMPH");
    msg.last_error_time = 0.161547813782;

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
    msg.setTimeStamp(0.502675459053);
    msg.setSource(5774U);
    msg.setSourceEntity(209U);
    msg.setDestination(65276U);
    msg.setDestinationEntity(246U);
    msg.mcount = 80U;
    msg.mnames.assign("GLQKZJZQHTYPUVKNPBKMYGOPTWRCWTIHZEINMVANDSAESVXRTCBWYSFFJJUVWCDYWVNDZVUSIRNXMRAUEXDIXGQZPCMSRSYFPKSWKZNZBQSBPQOITOJMGFEORWRKINQFSGUBB");
    msg.ecount = 90U;
    msg.enames.assign("OAYBJBWHANBVMWAOCQVGOKWYMHDTPMRIXKLEMTPFPGVAUDPCOHQADNLTPCJELZGTKSEJVNWUKEWFBWLSPLCAMMNYPYQBNXOYFUOSVTIYFGXNJILFWKHFBYZNGVZIUISEZVRMVQFJUAJHHXBHDPTGWRIL");
    msg.ccount = 215U;
    msg.cnames.assign("VAYPZFXLIXJGWXFRQIHLCQPEBZKSCRTWRAIEFLKBW");
    msg.last_error.assign("VHSHIYMPZCSPLECQAIEWJRVVCXKEYIOUULMEWGMEQXWHNKWAUYZYIMOURYBKKKPXSHSBFDCRAENVDJRDPVXXSCQBBWUFOGAHNILEJUZTHNNOJHSCSRVBWQG");
    msg.last_error_time = 0.141176945984;

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
    msg.setTimeStamp(0.0874179181333);
    msg.setSource(58256U);
    msg.setSourceEntity(176U);
    msg.setDestination(15560U);
    msg.setDestinationEntity(164U);
    msg.mask = 73U;
    msg.max_depth = 0.174302331573;
    msg.min_altitude = 0.00565377236053;
    msg.max_altitude = 0.665997254854;
    msg.min_speed = 0.573248058782;
    msg.max_speed = 0.323473898231;
    msg.max_vrate = 0.218347850616;
    msg.lat = 0.357618765631;
    msg.lon = 0.972829687667;
    msg.orientation = 0.532759168256;
    msg.width = 0.85392541011;
    msg.length = 0.913834090799;

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
    msg.setTimeStamp(0.782558721452);
    msg.setSource(32814U);
    msg.setSourceEntity(85U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(212U);
    msg.mask = 225U;
    msg.max_depth = 0.832636456353;
    msg.min_altitude = 0.062912282553;
    msg.max_altitude = 0.9311262565;
    msg.min_speed = 0.613578715724;
    msg.max_speed = 0.0384036062392;
    msg.max_vrate = 0.541379130056;
    msg.lat = 0.756969945125;
    msg.lon = 0.764507713177;
    msg.orientation = 0.521295011334;
    msg.width = 0.505560943865;
    msg.length = 0.906422345395;

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
    msg.setTimeStamp(0.235860270034);
    msg.setSource(27898U);
    msg.setSourceEntity(153U);
    msg.setDestination(9024U);
    msg.setDestinationEntity(249U);
    msg.mask = 115U;
    msg.max_depth = 0.392962156127;
    msg.min_altitude = 0.912984091847;
    msg.max_altitude = 0.52400247043;
    msg.min_speed = 0.603394234748;
    msg.max_speed = 0.934024706495;
    msg.max_vrate = 0.87587899964;
    msg.lat = 0.541368935129;
    msg.lon = 0.687711731019;
    msg.orientation = 0.41685581818;
    msg.width = 0.912340932526;
    msg.length = 0.636413110299;

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
    msg.setTimeStamp(0.556552287158);
    msg.setSource(20662U);
    msg.setSourceEntity(152U);
    msg.setDestination(45140U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.47592631456);
    msg.setSource(11789U);
    msg.setSourceEntity(160U);
    msg.setDestination(46261U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.562713529112);
    msg.setSource(15397U);
    msg.setSourceEntity(78U);
    msg.setDestination(62620U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.0922349921677);
    msg.setSource(6615U);
    msg.setSourceEntity(170U);
    msg.setDestination(44540U);
    msg.setDestinationEntity(203U);
    msg.duration = 18263U;

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
    msg.setTimeStamp(0.733638192717);
    msg.setSource(47363U);
    msg.setSourceEntity(251U);
    msg.setDestination(43847U);
    msg.setDestinationEntity(195U);
    msg.duration = 47347U;

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
    msg.setTimeStamp(0.0862961520762);
    msg.setSource(52519U);
    msg.setSourceEntity(156U);
    msg.setDestination(58508U);
    msg.setDestinationEntity(19U);
    msg.duration = 7415U;

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
    msg.setTimeStamp(0.273560871654);
    msg.setSource(14445U);
    msg.setSourceEntity(163U);
    msg.setDestination(25413U);
    msg.setDestinationEntity(117U);
    msg.enable = 188U;
    msg.mask = 3688693825U;
    msg.scope_ref = 3890237187U;

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
    msg.setTimeStamp(0.294163269777);
    msg.setSource(24460U);
    msg.setSourceEntity(202U);
    msg.setDestination(16444U);
    msg.setDestinationEntity(78U);
    msg.enable = 109U;
    msg.mask = 1721320536U;
    msg.scope_ref = 1002221877U;

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
    msg.setTimeStamp(0.803345760854);
    msg.setSource(24302U);
    msg.setSourceEntity(117U);
    msg.setDestination(35783U);
    msg.setDestinationEntity(92U);
    msg.enable = 155U;
    msg.mask = 1198883544U;
    msg.scope_ref = 230014810U;

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
    msg.setTimeStamp(0.760792421952);
    msg.setSource(51544U);
    msg.setSourceEntity(59U);
    msg.setDestination(43263U);
    msg.setDestinationEntity(92U);
    msg.medium = 178U;

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
    msg.setTimeStamp(0.256405146027);
    msg.setSource(53994U);
    msg.setSourceEntity(86U);
    msg.setDestination(6281U);
    msg.setDestinationEntity(210U);
    msg.medium = 30U;

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
    msg.setTimeStamp(0.76130792306);
    msg.setSource(35131U);
    msg.setSourceEntity(0U);
    msg.setDestination(64130U);
    msg.setDestinationEntity(214U);
    msg.medium = 42U;

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
    msg.setTimeStamp(0.693540469842);
    msg.setSource(11028U);
    msg.setSourceEntity(14U);
    msg.setDestination(16461U);
    msg.setDestinationEntity(195U);
    msg.value = 0.268616626713;
    msg.type = 170U;

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
    msg.setTimeStamp(0.37511510176);
    msg.setSource(8014U);
    msg.setSourceEntity(115U);
    msg.setDestination(30985U);
    msg.setDestinationEntity(216U);
    msg.value = 0.294785458692;
    msg.type = 146U;

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
    msg.setTimeStamp(0.699562379282);
    msg.setSource(38938U);
    msg.setSourceEntity(190U);
    msg.setDestination(13869U);
    msg.setDestinationEntity(195U);
    msg.value = 0.386313997331;
    msg.type = 49U;

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
    msg.setTimeStamp(0.447404318679);
    msg.setSource(54342U);
    msg.setSourceEntity(73U);
    msg.setDestination(54778U);
    msg.setDestinationEntity(114U);
    msg.possimerr = 0.506185395023;
    msg.converg = 0.556317382455;
    msg.turbulence = 0.92105732736;
    msg.possimmon = 49U;
    msg.commmon = 154U;
    msg.convergmon = 201U;

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
    msg.setTimeStamp(0.867893583512);
    msg.setSource(54753U);
    msg.setSourceEntity(174U);
    msg.setDestination(7470U);
    msg.setDestinationEntity(244U);
    msg.possimerr = 0.839112526955;
    msg.converg = 0.31882542178;
    msg.turbulence = 0.631382566854;
    msg.possimmon = 53U;
    msg.commmon = 206U;
    msg.convergmon = 81U;

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
    msg.setTimeStamp(0.281677592219);
    msg.setSource(10260U);
    msg.setSourceEntity(1U);
    msg.setDestination(43986U);
    msg.setDestinationEntity(127U);
    msg.possimerr = 0.163251437252;
    msg.converg = 0.82831175118;
    msg.turbulence = 0.901229099255;
    msg.possimmon = 50U;
    msg.commmon = 158U;
    msg.convergmon = 4U;

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
    msg.setTimeStamp(0.216557709549);
    msg.setSource(13659U);
    msg.setSourceEntity(183U);
    msg.setDestination(7147U);
    msg.setDestinationEntity(197U);
    msg.autonomy = 208U;
    msg.mode.assign("HTCQCJBQKRTTXUNKPDAJJBPGIFXGKQOAZKMJMSRMRYXQGKASVYSPZQRGFDDGWVMMVOOOSWYUHCEFBIRCWFQWZENTDAG");

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
    msg.setTimeStamp(0.616037984494);
    msg.setSource(45157U);
    msg.setSourceEntity(37U);
    msg.setDestination(59824U);
    msg.setDestinationEntity(182U);
    msg.autonomy = 203U;
    msg.mode.assign("CHRYSXEWTWWSXJQDPYGIKDGZFRXYRGMYPZVUGDDMVMSPOVQ");

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
    msg.setTimeStamp(0.981318203265);
    msg.setSource(35927U);
    msg.setSourceEntity(245U);
    msg.setDestination(8410U);
    msg.setDestinationEntity(177U);
    msg.autonomy = 51U;
    msg.mode.assign("MUWAODPFZZMPEKVYPSWTQHJWGDRBAJPZIQCCJBVKSAOFUBTATZDMDXULNCIRFADIIRYCYTNPMMMJKEZFXBXEHHBSWCJNINKPABHYJGBTXIHUCWAUXQYUOOZQXLSASWRZDTOLLASHIYJYFROBEIJTDESCGKHYGPGTUWQSNZFGIHXRCMVNCDVGPVUVQO");

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
    msg.setTimeStamp(0.22309917911);
    msg.setSource(57774U);
    msg.setSourceEntity(46U);
    msg.setDestination(6396U);
    msg.setDestinationEntity(220U);
    msg.type = 216U;
    msg.op = 182U;
    msg.possimerr = 0.591829543183;
    msg.converg = 0.982428863747;
    msg.turbulence = 0.979846775401;
    msg.possimmon = 15U;
    msg.commmon = 132U;
    msg.convergmon = 78U;

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
    msg.setTimeStamp(0.00888049097886);
    msg.setSource(38314U);
    msg.setSourceEntity(70U);
    msg.setDestination(35920U);
    msg.setDestinationEntity(178U);
    msg.type = 156U;
    msg.op = 147U;
    msg.possimerr = 0.741163751397;
    msg.converg = 0.289268565269;
    msg.turbulence = 0.762592706516;
    msg.possimmon = 195U;
    msg.commmon = 212U;
    msg.convergmon = 212U;

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
    msg.setTimeStamp(0.642600520396);
    msg.setSource(35483U);
    msg.setSourceEntity(141U);
    msg.setDestination(29056U);
    msg.setDestinationEntity(81U);
    msg.type = 74U;
    msg.op = 38U;
    msg.possimerr = 0.0353827089945;
    msg.converg = 0.248936137325;
    msg.turbulence = 0.590359082824;
    msg.possimmon = 80U;
    msg.commmon = 206U;
    msg.convergmon = 82U;

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
    msg.setTimeStamp(0.6858049152);
    msg.setSource(30108U);
    msg.setSourceEntity(151U);
    msg.setDestination(58584U);
    msg.setDestinationEntity(25U);
    msg.op = 168U;
    msg.comm_interface = 71U;
    msg.period = 17314U;
    msg.sys_dst.assign("MVXHRHLMOPJHEFDMNTXBUPIBAAEELSMUFBCYMRGQZEUQICLTTWGWPOFLAAGEYDPWGUZLANVIUFQMPZPYLUNDXRQKSGHTUDOMYECPHSOROACHKGWFALNKCFHCYZTYZPUDUVRFTXGJNJMOJTYZTGUJSHWJYX");

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
    msg.setTimeStamp(0.968900955186);
    msg.setSource(10611U);
    msg.setSourceEntity(240U);
    msg.setDestination(11184U);
    msg.setDestinationEntity(89U);
    msg.op = 27U;
    msg.comm_interface = 101U;
    msg.period = 42134U;
    msg.sys_dst.assign("XKVFADAZWEWYCGWETTKMLHPNOVDSGDPHPIRISWBZUMQIMFILRBHKKFSCRMSWIBRRBUSKGXONTCLFYJSL");

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
    msg.setTimeStamp(0.018523316529);
    msg.setSource(55801U);
    msg.setSourceEntity(211U);
    msg.setDestination(51024U);
    msg.setDestinationEntity(173U);
    msg.op = 34U;
    msg.comm_interface = 12U;
    msg.period = 6572U;
    msg.sys_dst.assign("VMIHPJLUZZWLFFTDYHFZGSYXVNHBOWCWHABZPDBJKBATXQLECZFSQAYUCMSQDKNBURUSRBQQKWONHLVNZZIXIUHXIPVCFOIAORZMLORJGKZVPJKDPGTJTREOBFNVZWNRSPTKADRKMCVHVOLMUIBULWJVOORKXCLPKXCMJTCYAINLFEEIQGGAUEYDNSETSYBFXSAEPUWAOJCGJGWRBEYQYSQKPMNFLCTIWHVPWDRMGHGXMIJHXDTXEMYQ");

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
    msg.setTimeStamp(0.281982806081);
    msg.setSource(4272U);
    msg.setSourceEntity(30U);
    msg.setDestination(10933U);
    msg.setDestinationEntity(222U);
    msg.stime = 3001704168U;
    msg.latitude = 0.434829548556;
    msg.longitude = 0.759335488124;
    msg.altitude = 57582U;
    msg.depth = 31090U;
    msg.heading = 61933U;
    msg.speed = 13718;
    msg.fuel = 118;
    msg.exec_state = -19;
    msg.plan_checksum = 39953U;

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
    msg.setTimeStamp(0.246149240475);
    msg.setSource(12275U);
    msg.setSourceEntity(141U);
    msg.setDestination(59525U);
    msg.setDestinationEntity(158U);
    msg.stime = 629709949U;
    msg.latitude = 0.046126518128;
    msg.longitude = 0.726370049033;
    msg.altitude = 41625U;
    msg.depth = 3866U;
    msg.heading = 36607U;
    msg.speed = 10803;
    msg.fuel = -23;
    msg.exec_state = -1;
    msg.plan_checksum = 41277U;

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
    msg.setTimeStamp(0.758732813986);
    msg.setSource(20183U);
    msg.setSourceEntity(115U);
    msg.setDestination(52894U);
    msg.setDestinationEntity(100U);
    msg.stime = 3084626366U;
    msg.latitude = 0.148970348356;
    msg.longitude = 0.0194550806022;
    msg.altitude = 52614U;
    msg.depth = 23220U;
    msg.heading = 30735U;
    msg.speed = -4721;
    msg.fuel = -82;
    msg.exec_state = 104;
    msg.plan_checksum = 61443U;

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
    msg.setTimeStamp(0.333853856623);
    msg.setSource(60159U);
    msg.setSourceEntity(96U);
    msg.setDestination(11366U);
    msg.setDestinationEntity(53U);
    msg.req_id = 30200U;
    msg.comm_mean = 23U;
    msg.destination.assign("WBIUYOJBURVTFNFVJPLXWSUNYEGKHUCLKMBYULUMLSBSGGWJUXVZFGTVJDHZQIMYEXWCTBAEHVMLMVNBPLOYTQXUHDAWOTJITKHVQLSBHFQOKRXPJLZYTEXTNDCSXDVKQCNIJRXTKBLOGNNPAURCNGHZUNCFADPRZJSNWVEDMZMYRECHYRWFILISTPWBAPOWRFDAQXQMMJAGFXQFEIOQKCZSHOYSQZPVIFRIYH");
    msg.deadline = 0.799870489791;
    msg.data_mode = 75U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.353276530032;
    tmp_msg_0.lon = 0.412948105854;
    tmp_msg_0.z = 0.266394696;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.speed = 0.926236306909;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.abort_z = 0.685954236401;
    tmp_msg_0.bearing = 0.31685881209;
    tmp_msg_0.glide_slope = 246U;
    tmp_msg_0.glide_slope_alt = 0.406667349867;
    tmp_msg_0.custom.assign("HYSCFIFMDKIBMRPHMEVJUNNXONSBSYCYMESHHWKUODACIWPRXGUKBOALYZISFKRWYYJUJNXJQEGLHOXRLTNDTRGIHRYRFCPBGNVTLBOIEPIXVWKPQEEZLQLAHXMVTKYEQFPOCOBWXQZUHHFZBTCKYZYIVDAMFSXTWBCQUFLODGCEWUUULQZILCMQNJDFUGNZQMJSBTVTJVVDZAJFPZDVSWTHXAGAEAGOEMXDWJBS");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TOOZAUXOHMGJRSMNIDNVWJLRSHMZJPYJECHMTGZPRYALEBANCKJTDOAZUWINCRPVRBVMXSFACSDMIYTEBEGUIMWUOPZTCSYVFEGSFFTHNUTGDKVHSBQPRVSWULWHUOWPLEBHQBGXUIPBDFRZYOWKOLVKCCXWIOFWYYJFDCGQEIKXDPCWQKELZQTLASYBXTFJRINATUVLYYENAGDQZVQZE");
    const char tmp_msg_1[] = {-123, 100, -2, 120, 70, -30, -29, 40, -32, -106, 124, -32, 126, -67, -106, 42, -69, -30, 12, -120, 98, 60, -106, -16, -32, 28, -97, -104, 71, 99, 65, -109, -15, 79, -73, 20, -124, 101, 52, 53, 115, -27, -50, 10, 119, -101, -3, 28, -15, -104, -100, 14, -81, 51, 22, -3, 108, 66, 111, 117, 9, -13, 43, 29, -68, 65, -73, -29, 106, -16, 67, 89, -107, 72, 44, 124, -83, 26, -42, 77, -23, 44, -125, -69, -34, -95, -7, -107, 87, 118, -44, -38, -6, 81, 125, -9, 92, 80, -116, -103, 41, -109, -38, -79, -33, 110, 52, -47, 18, 35, -10, 7, -99, -117, 95, -32, 67, 18, -2, -36, -18, -92, 3, 91, 60, -16, 2, -38, -28, 77, 80, 95, 21, 94, 95, 12, 112, 63, -34, 100, 91, -113, 0, 74, -59, -6, -12, 65, -54, -4, 55, -28, -104, 72, 54, -124, 44};
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
    msg.setTimeStamp(0.341461546855);
    msg.setSource(37177U);
    msg.setSourceEntity(110U);
    msg.setDestination(60850U);
    msg.setDestinationEntity(7U);
    msg.req_id = 31703U;
    msg.comm_mean = 227U;
    msg.destination.assign("AITAUBJKASLAZCBHZAPQYQKQPOMPCIRDQZNNOGTIITZJYVBWLFAMCTHCHUNCWSXNFVFVHYBFKQGWARHFIECEWLJFSRDTCWNQRXMOSYVXVZQHUMXKHDLKIWKUSPGKBAIRILON");
    msg.deadline = 0.461056125433;
    msg.data_mode = 29U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.684208740099;
    tmp_msg_0.x = 0.671288048495;
    tmp_msg_0.y = 0.370028003441;
    tmp_msg_0.z = 0.247430881227;
    tmp_msg_0.timestep = 0.779537900618;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CUWVDNHLNNGKWDXCSHIFFJZPYJAPSNCTGRIQXZNLHFQMKQQMYYZQDATSKOTMKERVQDUZABEMWGUIHYAYJBYPBKPJUFICXWJMVANGNFOWOGOMEIUFDSRUHDUYKUZOUHFPOSNLEVQGXRBFQQIIGDPRECKH");
    const char tmp_msg_1[] = {-119, -54, 93, -123, 16, 61, -13, 64, -19, 70, 79, -70, 44, 60, -128, -39, 2, 48, -11, 84, -119, -53, -50, 89, 34, 77, 99, 125, 48, 46, 14, 44, -72, 9, -60, -83, 13, -44, 60, 12, 66, -97, 39, 38, 102, 43, -93, -115, 1, -61, -93, -101, -34, -126, -91, 7, 22, -30, -18, 122, 86, 40, 21, -30, -20, 75, 101, 107, 42, 90, -124, -111, -62, -120, 122, -54, -12, 22, -107, -58, -101, 123, -31, 94, 99, 39, -66, -52, -13, 126, -10, -24, 39, -117, 14, 5, -98, -114, 41, 18, 95, 82, 117, -87, 13, 21, -44, 2, -19, -93, -53, -123, 51, -55, 120, 37, -87, 37, 68, -114, -16, 95, -7, 108, -121, 27, 82, 43, 77, -46, 3, -48, -30, 61, 22, 52, 125, -96, 123, 63, 63, -100, 24, -127, 82, 111, -36, -65, 27, 87, 19, 8, 20, -56, -40, 91, 100, -56, 22, 125, -112, -119, 41, 100, -94, 112, -104, -26, 65, -116};
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
    msg.setTimeStamp(0.890212118252);
    msg.setSource(44995U);
    msg.setSourceEntity(215U);
    msg.setDestination(34557U);
    msg.setDestinationEntity(246U);
    msg.req_id = 16811U;
    msg.comm_mean = 190U;
    msg.destination.assign("DWRZIEVDHZMGESTMXPCAYAZOHAGVQSVOKZSJCBJEUMNDKB");
    msg.deadline = 0.531413512202;
    msg.data_mode = 235U;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 203U;
    tmp_msg_0.value = 0.825676555722;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ADASXZXJYHTKJMMCIRVCAUBKSZCQRMPQBHPGKQKZNBIHEOZALQOONNUCJZRENCTWBRPFTOEAWLOMGSOFLJYRUZSAYDDWTMXQJFQGUCWKFDVGCIGPSFZIFVMMWRHIPBECGSQQAHBKWWGJTAYIABDGFNYDVJYFUOELYHZCEFYXOECUAPSTIUWXJPBLILVMJNXRDKBNTULRDIIQDLMSKFPMVTZWKUYVHXKRLWXGPGBXUSNERVYHEOZVHPHQVN");
    const char tmp_msg_1[] = {48, -37, -87, -117, 39, -116, 62, -51, -63, -112, 121, -9, 69, 0, -27, -42, 79, -74, -11, -48, -52, 121, -94, 33, -31, -68, -31, 36, 68, 115, 55, 74, -99, -24, -57, 52, 60, -65, 28, -104, 55, 61, 88, 77, 33, -90, 120, -4};
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
    msg.setTimeStamp(0.800407084007);
    msg.setSource(23143U);
    msg.setSourceEntity(145U);
    msg.setDestination(50309U);
    msg.setDestinationEntity(206U);
    msg.req_id = 33973U;
    msg.status = 99U;
    msg.info.assign("IBOTJMRKTUKFVILMPEKJYIVEJEZAJGPACISQYJCMXSTFTAHEVUBSHXNOOMCRUNHVWYXDBPOFGYKBUDUDRURLZNDKQQMNMYVGTFGBARNTLQCNQIDZHLRAAXBXXHIKMBRFWDWNHECXSVFNFSWYGGHBRCFOSPSJZISPVCYTGQW");

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
    msg.setTimeStamp(0.420045283135);
    msg.setSource(52801U);
    msg.setSourceEntity(167U);
    msg.setDestination(17861U);
    msg.setDestinationEntity(49U);
    msg.req_id = 57394U;
    msg.status = 254U;
    msg.info.assign("LINMVOXMCZKVTMSBDJECBKWKAYYYZUMHUUGKBOCDJNMGSNUJOXELSXANJTAPOLFGEDLKPBWARHDOGUYBGDIZQGBSUISZSKMXKCGYXBNWUVERXAMIAJFRJPQPPSYWOLSAXHZYOSMRCDTLBTF");

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
    msg.setTimeStamp(0.728546170754);
    msg.setSource(42215U);
    msg.setSourceEntity(142U);
    msg.setDestination(52081U);
    msg.setDestinationEntity(72U);
    msg.req_id = 22276U;
    msg.status = 134U;
    msg.info.assign("CMPECKKPQNISEIHQLJDWKYHRCYSLPKCLEGGNHBDWLMNGJOWQERJAKEDOTBGXKHIVWBPMFBLTPUCHEDGWMWZWZNBDYBDSZAYXSYJEFSKQLYHGTUBVEDPFLUWRAJZGOZPNKCLZORZFLSUXBUVRQCHMTRVWJIMMAKRJNTFBIJTFXZARAAFQOXZGIDGQSOXQCHIXJAJOEXTVVRYUVTNOR");

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
    msg.setTimeStamp(0.101318413902);
    msg.setSource(30076U);
    msg.setSourceEntity(83U);
    msg.setDestination(3489U);
    msg.setDestinationEntity(30U);
    msg.req_id = 15050U;
    msg.destination.assign("LRGWUNYSJLTGNOUJTVMIKMWKLNMNNDPUVEYOSAZMDTQFPHMSRQMXKWUFFBGLOOCVNZXTCGZHSCOMAYZSXHOSKPTXQPHBCIVNKWIQZCDQJGTUEJWB");
    msg.timeout = 0.937221373873;
    msg.sms_text.assign("HSFZZNGPAMPRVVVNWHKVBIIMYBFCZCS");

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
    msg.setTimeStamp(0.53816872332);
    msg.setSource(42626U);
    msg.setSourceEntity(130U);
    msg.setDestination(5610U);
    msg.setDestinationEntity(92U);
    msg.req_id = 17117U;
    msg.destination.assign("XVAPORUXTNZSNAXDDJNJVNMGGDFFTJGNCEXICNHSYXEIBYZAPRENSDULAHOFWQJUBAIHIMOCSMFNULTUXFRMIQDOZKEOAIONTDAKRPALACLPBACJWKNLFSBJTVQPZQGTXRVGPUBMGPKVCDWWYROECUHTYHWQVZPKQMFYWIBKMWLQFMKMCYXLRZFZEHGCHWVTRGSEKESQJMIFPTLERUQIJEPLCVBDSXKZSYBUVBULQOGYHXSZVKTDWZJGBHYYHD");
    msg.timeout = 0.0110786333245;
    msg.sms_text.assign("NLFRFUBGNSDGLALZSAYVVLCOKUFUEZCSTLTKPOBVPWTWMYNBHXDNWEZKDKMWRXEPDZBEZQXJMHXMISQRFOQLIYNIWQHXDUAVJTNQQMWDFHESWPUKKRZIEIZVAFXAITYTZBMOGVVIQZCCGHALHCOYXPYCBBYYHWBUAJIFJIGNRTFVPKRXGOASOPGKFCRTT");

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
    msg.setTimeStamp(0.260743631261);
    msg.setSource(44606U);
    msg.setSourceEntity(37U);
    msg.setDestination(31747U);
    msg.setDestinationEntity(228U);
    msg.req_id = 39173U;
    msg.destination.assign("EBVOBFWIIPXEMWBDFLYZPNJCOHAKRHBPZJEDVALGLDDYPAHOGNIBTUNTTJMHQUIYXXVOHCNTNCNBQXVAGVWZJSMRSDWHVFQCWPVMAFWSUIFMPLNAKYIWLGKDUQOSRAECZ");
    msg.timeout = 0.93016326309;
    msg.sms_text.assign("KHREAZYTNDWWDHXXATLKSYFUIUQWSNPDJZMNFWORTQYSCYHNBLDHJGSIVRGKAHQRMQPYCGJJCOUKCROTUGQLJUNTWXZKOZVS");

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
    msg.setTimeStamp(0.800427159544);
    msg.setSource(14297U);
    msg.setSourceEntity(120U);
    msg.setDestination(62125U);
    msg.setDestinationEntity(13U);
    msg.req_id = 7570U;
    msg.status = 249U;
    msg.info.assign("DINQWUAJQGAHRRDRUZMFCHJHAREBAHTNILCOFGPKGGIEZWFDJPQZUEPSXSVVBZNBZCVSTPEYYCJCPKHGDCYRIYUQVRHIZNKXFUDOKVGJDFPLVMXYGXRMSYSBBUAFYBHTJCMWOEWHXYDCIODLFBTMULTMTXLSOFMJLNWQRZBWXSEPDSHVWHEENXAWXKISZQATNJQCCZMTD");

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
    msg.setTimeStamp(0.229765072394);
    msg.setSource(35672U);
    msg.setSourceEntity(40U);
    msg.setDestination(6095U);
    msg.setDestinationEntity(99U);
    msg.req_id = 36322U;
    msg.status = 202U;
    msg.info.assign("BDYCBKMARRQDPHFLHWTKEIJIAXFNGSZQCBNAUPMUTNHWTPEVLPCTGMFDFZIXVKEMGQBRCPTVQGUNFNRJDHECJEXHSMAWPLJU");

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
    msg.setTimeStamp(0.210617044047);
    msg.setSource(65149U);
    msg.setSourceEntity(78U);
    msg.setDestination(57676U);
    msg.setDestinationEntity(211U);
    msg.req_id = 6291U;
    msg.status = 97U;
    msg.info.assign("IMVKWISAMIEZFWAUOWRHQIXLUPOEINBKOYXPPSGSYF");

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
    msg.setTimeStamp(0.00637323698257);
    msg.setSource(63535U);
    msg.setSourceEntity(44U);
    msg.setDestination(3993U);
    msg.setDestinationEntity(6U);
    msg.state = 82U;

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
    msg.setTimeStamp(0.120720811059);
    msg.setSource(12141U);
    msg.setSourceEntity(169U);
    msg.setDestination(52129U);
    msg.setDestinationEntity(41U);
    msg.state = 56U;

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
    msg.setTimeStamp(0.262063777193);
    msg.setSource(11640U);
    msg.setSourceEntity(41U);
    msg.setDestination(1402U);
    msg.setDestinationEntity(233U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.508451364032);
    msg.setSource(10977U);
    msg.setSourceEntity(108U);
    msg.setDestination(4300U);
    msg.setDestinationEntity(125U);
    msg.state = 201U;

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
    msg.setTimeStamp(0.315601469027);
    msg.setSource(12835U);
    msg.setSourceEntity(38U);
    msg.setDestination(7536U);
    msg.setDestinationEntity(200U);
    msg.state = 95U;

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
    msg.setTimeStamp(0.486872978126);
    msg.setSource(62341U);
    msg.setSourceEntity(92U);
    msg.setDestination(19342U);
    msg.setDestinationEntity(30U);
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
    IMC::Abort msg;
    msg.setTimeStamp(0.892071471402);
    msg.setSource(5548U);
    msg.setSourceEntity(211U);
    msg.setDestination(35703U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.102382892649);
    msg.setSource(1528U);
    msg.setSourceEntity(202U);
    msg.setDestination(4208U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.927200910713);
    msg.setSource(57383U);
    msg.setSourceEntity(170U);
    msg.setDestination(33067U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.68058217358);
    msg.setSource(50071U);
    msg.setSourceEntity(208U);
    msg.setDestination(5727U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("OWQZIKMEWVGIUTAOHSGVPFXMBXKXMQHGSNWCUILWIZWZYZTIKFPASCRBVCSBHNXUZPGSOPNVZLNHOPFDJTHDPOGDBCJYHLBVTFUB");
    msg.description.assign("PWITGZLZURGBREVVBHEAUQOQGXHMRMUYFDJNYOFUONBHRVUGGQTYLFZBNDKENJSARDMTXHFINOAVXZZHIFTCFTBGRKSZXXRWMXDSLGMFPGNBBQNNZJDYOZVBWJGYHOLTCKWIBMMQCWNQKQMCSAXCPWXOIEDIH");
    msg.vnamespace.assign("NRKGBPHVPEANIVACAXDOPMOJOVEIHGEQTQDKCSYUOIEWNRMBBBYSETNZSAWPGFBKULFMSWUGUTTMNUZOYMHZPVMRRJOJPCPARGWSIECQKULLDMSLPQOBVCFWBQRTHFDCQVZSDNGHYTFZLFZECDHFDQFXQFZJYXMIPGTHAXKQEDJGKNLYJSHYGZVUHIVKRQETOFLBLJCKUZUSAIUJX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JFRFEOIAACWQRJHKVDDASMRPMJDALYZNKQOKCYLIHFLKTNTRYMNZHKOYXUGFFMBXPPNVDOVYWZYPNLAENSHKEISXQVWUADACSSCUEFHDGSZECQRJZKBYGYJBL");
    tmp_msg_0.value.assign("CIVFSWMXBSLTDUESNU");
    tmp_msg_0.type = 254U;
    tmp_msg_0.access = 226U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GDVIXUXEEQQFKDGMOIMSAUQVYWFLJCVXGVHFOXAMGJJBAYUXTZIBM");
    IMC::AutonomousSection tmp_msg_1;
    tmp_msg_1.lat = 0.8879709001;
    tmp_msg_1.lon = 0.810920744574;
    tmp_msg_1.speed = 0.587829131402;
    tmp_msg_1.speed_units = 134U;
    tmp_msg_1.limits = 101U;
    tmp_msg_1.max_depth = 0.416994215879;
    tmp_msg_1.min_alt = 0.916071107033;
    tmp_msg_1.time_limit = 0.30517343775;
    IMC::PolygonVertex tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.431752006964;
    tmp_tmp_msg_1_0.lon = 0.0703116071995;
    tmp_msg_1.area_limits.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.controller.assign("RQGSAKIINPPZWBLMNKAYIKHAGSIOZGZHJCGGEQCXWMULGNOSQRMYTOJNVUOBUKXZLXOBIYEKMDENFXXTPSGDTGCCYAOHEBOJZHULWBJXFEYRDTMGXILPURZAGNFBFQNVSATYVBKRDJHENQVSKKRFYDOBHLRQMHVCDKSLZWIXQIDVSPWHCXPXEDPQEA");
    tmp_msg_1.custom.assign("MJZKWHBLGKFTKZNKSBSXPHURAHJPASFASWRWDDQWFYAPEKHWISNVVCCNRGKOGQBNPYQJZZDKWLLDDSSDVZEDUMSZPAVXXSHZWJOOSGCPHATLBEGXBDBMFCWIFXTBMXJBVXAKAUFVIQTQRIOBORNIQOVLKOEJFRJMJYLMNGLIXMCINBROWTDOTYEMYPYQCXZAPYMJLRIEGFQAYCR");
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
    msg.setTimeStamp(0.200102728952);
    msg.setSource(11461U);
    msg.setSourceEntity(46U);
    msg.setDestination(24748U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("EBNBFFIJNHLPYJWYLTGIYOSULNAPSZIQPLFVSRBMOIDGVYCARRZNCJUIWPJFBNKTQXPXMROBPTWBMRZCRUMNZ");
    msg.description.assign("VAWZJUXKHFVRRDAVMTKOAHIPIPARGYESBUKQAEERXIZCTSFTMLSZSKWRJZJYJAEXHCUVGNOMNIHUTSDWNNPMYAQLDB");
    msg.vnamespace.assign("MTSYHPAYZZMYWONSXLKQEPBCLNKSPWMIYKQWKGXKOPOTREBJRPKBIKONYGUJYAOWWFINFLYPAZQOYGCGTTBQJQZP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GWCJCCUWEMTLYXRRVWDXORBVQSQVFNHKLESGRFGUPREQTHNDUJASDCRNLOZZRBYKNCCJNKRSALOXFOJUAXJJYDTLXUMNXBFYXLWOMIMVZUQZJDAFTSKRPLCAKHSCMMIBIEDEHEHZEPGLJBVMPSHGDWHPNVOUGCAIDFEYLBAIXQITQPZQMDWSPHPTFIIQAUTTMQVGBKEZBYMRVXKAJLNWPWZBXGGGHKOISZTKHKS");
    tmp_msg_0.value.assign("AQSHEUFJCDNBJGKVNSHVYXGMCYHVVLWUWJCSBXPEMEIQRORDFNWKZCTCTKKJFBXMLRRUDKUBRXPEMUHDJVPIMMHQXGBZBJALOWLSZOIXLXWUQCZYNFROIPYMLUPOIKZNMZNARBVGJSBGPWGHFYIJTQLISWVAVKHGATGLJUXAOEDCPAUYSEZEVHROOQYKFGBYDPNXHGKJQYDFFEQXAEKMTLBSSCUENIZTP");
    tmp_msg_0.type = 5U;
    tmp_msg_0.access = 15U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UEFFJLLYXZUBNDRIFKYGJMNJROLIUSFONPEEDKVNEXLSYJYXATKFWYDBPHCYJSFVSNEWHAFOZGLWHROPKTWKDSCTHDAPMAHSFETQVHMTZUUZJVZZJMVZVQKXXIOOBCBQPJGVIGBHAMCRTEANCDACNWTIYMQIVQUUKIATIC");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QLKPFMQYRGLZVE");
    tmp_msg_1.dest_man.assign("PCABHBJNDNGPWUAJDCYRKYBQJEZLRNTKMTSSVWKATKQAYFCYAMIIOFKOYADHMIHWTTNQHYOEBIJPPGCUNRUSAOFONQXLUSLHWODLGOVFRBXSJQ");
    tmp_msg_1.conditions.assign("EFOIOJCDLRZFBUFRWTIDANNSRSNCQWGYOYGVHJTHBXMTIFHWYRMIDFBAMITUEOQXOHZSQAZVRTPKWKJXVZYABHKNBPQWBEWOBNIVLFRJPCNEZXVVEBNIHLPSJMLQKTPPCNQVZEQFVGEMCEKUUTLNMKXHGWJQFGTDTUJTXRCJSUSEQZJDRMYZRLFLGXIHACRDUCNOCAKLKAGDYGHBSZEZLYFQVSUXGPYHBMOLUYWIMAIJAKOMSCK");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.42236535035);
    msg.setSource(24168U);
    msg.setSourceEntity(12U);
    msg.setDestination(20289U);
    msg.setDestinationEntity(127U);
    msg.plan_id.assign("UYCHAWZTGXRCIBJDQJTTXWZFXIPMYZCLAYTDDHAPBWUEFPLEYIUGROXYUCQJOPNVSAEOZAHLUCZPFEOVWJQANRSLJCVBIFSQFLNWIXIDCSAMSZFYVYTHWFJGROSEUDMLXJEDVHZBJWXJSKEVKYZMRCXUGYSQKRVTRKOGQHDMBVOBHZHUIYPLMPNBWIGLUFKTAWAQMZCFSIVDNQHPDNRXONKGTGEWUKPXQETQANHONJCEIGDBMLTVMSOKG");
    msg.description.assign("RXQHHUVJEMKZAVOOZMLBLEGQENMORWKDLMWLVJHQ");
    msg.vnamespace.assign("UPAZVXHQULNBSMQXBAMCVYQZDFIOVGTKRICQMIOGJDTGPFJCNJOWQKJRDODDEHNJHFJBYHCGLTNBWLBYTSDMZHRVHBBYYZXJMSSOFYAGIPFQHIMNTRUCQMQMYXCZINIPNCOWEEJZSKCUPLRTTNGXXOBEYWLQWJXYRRPDGAVIDSTIZHAUNVL");
    msg.start_man_id.assign("YMUIWEIFNUSGSBFDZDCPWJDYVQUKVIAXZNCJDVQFGYLKOBJECZAYIKWISALVLGOYOADHOEJNVXZVCCNSSINLEACIANNCHFPJKKPNZXVZLQQYYGHEWDBTFOHPQLOFBUCGMXQFBRNOLUJRAGVDURAHFMVWRTUMMHXKHQTHPRZPTGPMF");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("SOPJAGOTONKEVQNUYFLHZKRVIZDDEDGWSPFNBEHXBQWRZLNPAOMHJCGUMCWDJQRYQS");
    tmp_msg_0.dest_man.assign("DCNJZCLHZJNLDDBLROKCRAVJGXUWXPOEEUQZDXZVAGQSWAQCIPWPDS");
    tmp_msg_0.conditions.assign("BPTZSTANZMARO");
    IMC::PowerOperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 88U;
    tmp_tmp_msg_0_0.time_remain = 0.686702822644;
    tmp_tmp_msg_0_0.sched_time = 0.355366851944;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::TransportBindings tmp_msg_1;
    tmp_msg_1.consumer.assign("FXQZGPUFHKPYKGOGYTIZEYTSVLNYYLCJAMTXRMLJNWNRIPKVXWTHRRXKCCDFHODQMSJKQLEN");
    tmp_msg_1.message_id = 8718U;
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
    msg.setTimeStamp(0.940386952471);
    msg.setSource(47325U);
    msg.setSourceEntity(165U);
    msg.setDestination(55334U);
    msg.setDestinationEntity(88U);
    msg.maneuver_id.assign("KHQRFKEFNPZZKLGBAEGYYZZKQAMSGCXGDHWRGSLEPUWNWBYQVIXMALTRNRDUFWJVYGUXJTUYTQVRGXDJQZMLVQFROOJQTGVEHMOBMPBENJWUSJUPHYCJNCAXTZETIBOCRXSFEBFVDASPDDGIUQDXAZYUDTESMAUOKVSOTHBEFFSIBHOSYCICMNBHTWHLCHWOIGCJPWKIAN");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.643603975685;
    tmp_msg_0.lon = 0.375683462227;
    tmp_msg_0.z = 0.123634365205;
    tmp_msg_0.z_units = 161U;
    tmp_msg_0.speed = 0.321828635808;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.takeoff_pitch = 0.884878463346;
    tmp_msg_0.custom.assign("WQBPAEXMIVLTXUDSQFCMFJTUNVTWTJCDXZGBJLROUEDDTPAGCZIHINHZLMXFVKJFKMZNOASYZYZAAVDKWYFBMPEHLNWMUIATQEQEVKRBRGWXOOMPUDFRCOENCSDIZGSKALZUAGPLREIQFRLKVDCQCRSPUQNHTXHDOPZJVHXTPYJKHOIESOOJBSLGHEUKWTNCIRJYMXQLVTIOYXPJBUJYAZSFWLHNMCM");
    msg.data.set(tmp_msg_0);
    IMC::Conductivity tmp_msg_1;
    tmp_msg_1.value = 0.158580370016;
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
    msg.setTimeStamp(0.780010026646);
    msg.setSource(42482U);
    msg.setSourceEntity(214U);
    msg.setDestination(25255U);
    msg.setDestinationEntity(176U);
    msg.maneuver_id.assign("BXWGPXXYHLZETLIKVLMNLJZISXFZTYSXDTSFKXZJOTLMNJCAVHUBPJWWAEYARWKHOQGHQWVOYDVGULIKLRYQQQROIBOG");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("ALSRWXUWWUYQVZTBKPRWGHDUOEYJVHQLKFVBIALOLETCEKVGFJZDMUYZECTTLNIVWSIWCVYCLGMZOAZSXFYRZWVXPM");
    tmp_msg_0.formation_name.assign("IDXQGHOXSTUEDURRGAKPRLZENKTIGWSTDFNMSGOJI");
    tmp_msg_0.plan_id.assign("WZIPAFSQVYWVLMURCSJUOWZQHKAYVIDEDXFPJIIMETGHZLAMCQNVUFMQOCOLHCHSMRFPXUYOFXOSMGIKEWXEILWZ");
    tmp_msg_0.description.assign("FCBIPXDPGLPURRBWMYHNESRQIKJFNHDMRHQAEOFCZZASTNGBIHEZUJWANNIZPO");
    tmp_msg_0.leader_speed = 0.417150541829;
    tmp_msg_0.leader_bank_lim = 0.680379420799;
    tmp_msg_0.pos_sim_err_lim = 0.984490254934;
    tmp_msg_0.pos_sim_err_wrn = 0.630998014038;
    tmp_msg_0.pos_sim_err_timeout = 5812U;
    tmp_msg_0.converg_max = 0.558397175992;
    tmp_msg_0.converg_timeout = 47256U;
    tmp_msg_0.comms_timeout = 27627U;
    tmp_msg_0.turb_lim = 0.131942859611;
    tmp_msg_0.custom.assign("ISXXOJWRXYVBDIZLQCNQHZAYSLVUXWHXUDVUGSKJOEDRXGJPBJYKNUVOLGIMHCNZZOPIITNJGF");
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
    msg.setTimeStamp(0.99121096626);
    msg.setSource(13343U);
    msg.setSourceEntity(111U);
    msg.setDestination(30901U);
    msg.setDestinationEntity(183U);
    msg.maneuver_id.assign("SGDNNGBLFDWTKDBCRABYHPHASXWUEDMVWKZBNHNFUFTAVRKAZQLQQZXQHQIKN");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 52509U;
    tmp_msg_0.lat = 0.308345977736;
    tmp_msg_0.lon = 0.289309794943;
    tmp_msg_0.z = 0.0543903608041;
    tmp_msg_0.z_units = 62U;
    tmp_msg_0.speed = 0.476729070848;
    tmp_msg_0.speed_units = 124U;
    tmp_msg_0.bearing = 0.480148325924;
    tmp_msg_0.cross_angle = 0.0534755304707;
    tmp_msg_0.width = 0.65286278035;
    tmp_msg_0.length = 0.463995154879;
    tmp_msg_0.hstep = 0.544674698872;
    tmp_msg_0.coff = 159U;
    tmp_msg_0.alternation = 57U;
    tmp_msg_0.flags = 89U;
    tmp_msg_0.custom.assign("HOBKDBFQOBRSPUSIKTDIRVYJPUQGYDSMUUAHXJWISUNRXKCINRQLCGQORLNVBUQOICWGTRFFWTMNZUCTWKKVILROZAPPMJXLPQWJYXPHWOQVBBZVFBLTEXBYHUZZSEXFDSZXHDHPYOOJEDYEEDRKVGCJNDC");
    msg.data.set(tmp_msg_0);
    IMC::QueryPowerChannelState tmp_msg_1;
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
    msg.setTimeStamp(0.592922692601);
    msg.setSource(60602U);
    msg.setSourceEntity(84U);
    msg.setDestination(64173U);
    msg.setDestinationEntity(198U);
    msg.source_man.assign("LOHPVTHIGFAPRMNLUZQWJAIUMFEKBADLATUDOJZSBFWEDMVSK");
    msg.dest_man.assign("FSDWJWQLJEWKNZQHYNJYAXQXEVWBAFRUWPRYIKKSRLRXQOTTYUOCPIFMMSVOUMQNWEXHATWZOSBIAGVX");
    msg.conditions.assign("IVLMLMKEZIQCBKPNHLRVUJRRIHDBNPTEEEWWKNTMYOOTDCVWDUMXXPOZZUOGUPTUGIPBNQEFZYHIJLOVHLAMCKPUZYUMTQHHGCBFJDCHHXSOBKFKZSUECGCGKSS");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 187U;
    tmp_msg_0.period = 3978228760U;
    tmp_msg_0.duty_cycle = 875308598U;
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
    msg.setTimeStamp(0.225196817995);
    msg.setSource(31150U);
    msg.setSourceEntity(88U);
    msg.setDestination(55303U);
    msg.setDestinationEntity(244U);
    msg.source_man.assign("JZNEKHZBNWJOUXKQLFGWYCYOZGNUHMSEBZXKUQAXARJZBFJISZJTNIKPBOHDGOLFQLMISWXQJEXGQIOKLTYEWIKIIHVJTASYHZAUDSEZIPRLCFDMMKHVMPKBYXGFQW");
    msg.dest_man.assign("RYAYIVKYINNKSREDSFIFNEINTMHJXDULCUJSQBMGZGNIAWLSDFVQBRHWKNRVHEQHTQPNSWMYUWVZQHOPXECPSVMCQAJULEOJXAYBJBQHTDBSKPRWUIDYVPIQRKMYCVEWCQPEZAOKLMGURZVAGFAJEZKGEOTWLBPPTFKDZCXGXYILBFRLMN");
    msg.conditions.assign("SSLJCLVOCNOPBVBPCSZXWVZASBGRNVQFUPHWDMNBZECTBBBUMCFXHIIYLTNKGMKQCWWFHSEZHYZOHFQRAYYOCJKHNJLNDXTXGGEQTGYDLUJAQGOQAVXGVEWWANMLSTUQDXNXXODYDNZLHZDKVMAESIGJKTJIZUIAUHPGOYW");

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
    msg.setTimeStamp(0.87649374411);
    msg.setSource(56924U);
    msg.setSourceEntity(144U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(203U);
    msg.source_man.assign("NWEZRQWXNQKUQBMXW");
    msg.dest_man.assign("UOZDHPCNPCNHQKHDMBYYAYYGFZWZEFBEAXRLTCRDWQABHJIKLTPKDRWRLZDXZROTZSNJVOSERTNMXQTKMFQXBVF");
    msg.conditions.assign("CDIHHBYAJAWDQNKEEJYYOWJBRRZTMFWQPJMPWQLIJSZFKSBRHGEUGSKCUQZQDNRNGVEDYEYHETJIVZHTVNLNOVTOXGGSIFQFMMIXDOLRLKFIEYKHDMG");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 50990U;
    tmp_msg_0.sys_dst.assign("FCFSKYACCFDSUJYKBNADRTQALJGRETGPFPSYBUAWPGYACOXXGYLMJPVHMXMUMWOZGQWMEZXCNCFDAKLBHSIIOVNNVWHRUJJQBXLOLYGNNQVHGRILUVWXBDTZUYHCXXTKSLZWIFOELKUYHGZIWTPOZBVVBC");
    tmp_msg_0.flags = 177U;
    const char tmp_tmp_msg_0_0[] = {11, -113, 112, -1, -24, -77, 86, 125, -11, 72, 50, 94, 6, -62, 24, -76, -115, -34, -57, 117, 10, -77, 1, -52, 12, -29, 108, 77, 111, -72, 25, -4, 12, -32, 17, 78, -4, -31, -49, 4, 51, -54, 95, -82, -75, 32, 2, -69, 62, 44, 40, 123, -7, -92, 19, 13, -117, -24, -86, 34, -113, -72, -119, 41, -58, 119, 42, -49, -99, -78, -119, 56, -116, -45, 55, -43, -52, -128, 73, -25, -52, -71, 104, -107, 76, 29, 34, -8, 75, 120, -102, 38, 108, -22, 56, 4, -126, 32, -74, 64, -37, -39, -58, 38, -120, -110, -22, 123, -4, 84, -27, -123, 113, 91, 120, -4, 70, 6, -118, 66, -104, 103, 55, -86, -69, 23, -94, 113, 17, -75, -123, -26, 117, -61, 105, 21, 96, -40, 45, -52, 9, 43, -29, 73, 8, -1, 115, 10, 29, 36, 70, -4, -114, -22, 103, -19};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.904182928656);
    msg.setSource(21574U);
    msg.setSourceEntity(134U);
    msg.setDestination(61666U);
    msg.setDestinationEntity(67U);
    msg.command = 225U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MOVXTVPINBLOSGGDKBNDFFNPATJIORSPZHDKLTSAYASYEBJQEBKHPZJTSLRUDYLOTKRGQRMNXCFXHNUROYNVKBUVWDQOEUKJGFEYUXMJFNAOXGTYEMJWEPWKQGPCHOTLFIGWZKZWIMPACRXJPVRAEHSSMMVMJRCOFDIYZVDNFLCQHTYZKWRABHNLCWGLXXVIDICTIVLBFQDIESXZZ");
    tmp_msg_0.description.assign("DOHCBBLUJWQAQLVCLIFJKGTUAPHFCEMMRLURZODQPFIGZVLDGHUUZZWMLQNDAIFLQFMXIONKXOFWRWCMKVHXRHUUPOANXMZATKEVUPDCPLKTJCBZTCEMJOASMPHBIEWNEYQRYVPNNWZVIQGVDOLWYHZYSSGBBDITZDSKGVOCYRPWDGJSNRYMXETCTRUGGNFAULR");
    tmp_msg_0.vnamespace.assign("DEQJJAGVGRMEZKZGPJOOJAUWWNTSTXHTKLYQPKYCEVZHZUADKISXHRDLKXAQWTEFKWURNKQIYOIYWVIS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FCUBXPCFZQXHXBJLAZFKVGPWTASNRZYDLSHGQQKVQBRUWJTW");
    tmp_tmp_msg_0_0.value.assign("OFKHJNNCKVQIOERVIUHADPOKJXXHEXGJDBABAIVZZMHGBBGVLXECFQFUABJXWWMPXKUCHEMWZYVLYXBTQSLJOWRJMHEWILOGSRQRSPWGMTRCOPTFEFECLQUCPDFIVFTDTSZIKABYRENDMXLUCMNTSMCUKEWU");
    tmp_tmp_msg_0_0.type = 16U;
    tmp_tmp_msg_0_0.access = 180U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MIWGEBUXQXUGACQXZBMMHRQCVFBPITHROETGDBRWRKRKNBCWVYSLGNIUXVDXNAYPMGGEZPBDSLNWJHFVSSJTJYLSUCTPUKBZWFNRCPGVMDJTHWYJZEKEFPLIUQXMGJNFYSPPOEDFORXKWNKYQLJARIEAKQOZBWVGDLMISKCITVYNFJTYPIMDBAOOKULLZTOIKOA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("IKJGGPBKNFZRWEGNCFKZLGEWRXTETXLNMAPDIEQYORWWAFVHZRLOYPSUFGQVEAVHVWLSMCHKFAHVDIVSTPMKJPKDAQCQMUDJCZJZCMXUDIRYHCXOCOGRACDLALONXDHBOHBJHBMQPRYTRINITUUSBSOPTVGXFUHAFEYTXQUGKZSJKXQBAJYDZEEWJOMQTEKW");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.574927962863;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.0290922031994;
    tmp_tmp_tmp_msg_0_1_0.z = 0.673355375844;
    tmp_tmp_tmp_msg_0_1_0.z_units = 0U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.270716875628;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 85U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WUVZUPLMGNHZWSJCIWERVPRXLZQDSQCOPKQAQNOYZVZLFRJBJNXAHRHEWBGYVIPYHNNNLVMNTFAFDGJBQMFDPVLMFBFEVEUPGJYDKOCXTITEZVYJBGDDWDOEEABGOHWTHCWGKSYXOSFTXI");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SonarData tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 59U;
    tmp_tmp_tmp_msg_0_1_1.frequency = 604758478U;
    tmp_tmp_tmp_msg_0_1_1.min_range = 49334U;
    tmp_tmp_tmp_msg_0_1_1.max_range = 58096U;
    tmp_tmp_tmp_msg_0_1_1.bits_per_point = 40U;
    tmp_tmp_tmp_msg_0_1_1.scale_factor = 0.786636044142;
    IMC::BeamConfig tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.beam_width = 0.300848225813;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.beam_height = 0.366004283692;
    tmp_tmp_tmp_msg_0_1_1.beam_config.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    const char tmp_tmp_tmp_tmp_msg_0_1_1_1[] = {-32, -85, -59, 17, 30, 19, -9, -63, -39, -84, -36, -90, -83, 80, -115, 11, 88, -2, -89, 5, -31, 102, -82, 4, 13, 2, 33, 87, -12, -54, -16, -86, -128, -17, 57, -19, 11, 50, 72, -85, -25, -3, 60, 50, -35, 91, 61, -62, -115, -49, 5, -51, 118, 67, -31, -70, 73, 59, 113, 61, -2, 30, 75, -55, 123, 102, 9, 26, -70, 7, -39, 75, 9, -100, 124, -53, -116, -27, 21, -118, 49, -109, 82, 78, -110, -122, -27, -127, -44, 106, 5, 44, -94, -32, -112, -68, -100, -76, -42, 55, -18, 93, -96, -110, 49, 87, 16, 119, 52, 110, -28, -110, -102, 75, 34, 68, -54, -122, 66, 113, 15, 124, -76, -19, -81, 102, 20, 39, 8, 104, 121, 38, -81, 25, 97, -100, -105, 84, 85, 62, -95, 77, -23, 3, 106, 41, 85, 37, -7, -60, 52, 104, 23, 103, 112, 41, -36, 29, -35, -38, -124, 45, -63, 43, -64, -81, 50, -81, 87, -43, 3, 75, -10, -99, 124, 44, 21, -15, 113, -23, -73, 117, -44, -98, 91, 14, -38, -55, 36, -44, -54, 39, 112, 41, -4};
    tmp_tmp_tmp_msg_0_1_1.data.assign(tmp_tmp_tmp_tmp_msg_0_1_1_1, tmp_tmp_tmp_tmp_msg_0_1_1_1 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_1));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::CloseSession tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sessid = 940343862U;
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
    msg.setTimeStamp(0.626471667664);
    msg.setSource(50007U);
    msg.setSourceEntity(103U);
    msg.setDestination(20429U);
    msg.setDestinationEntity(6U);
    msg.command = 67U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RWDBLDKHUWVFTKOSANDRJTHCZGQPGLSXQNQEABWRRGYUMIEMLCPXHXNVALCY");
    tmp_msg_0.description.assign("VOMKOREBCLIWAGXTPOTHMRUDBQEDCIIDSUPITERPTHWQZRMJWYKVLVEIHFYCONYMYMSKYFGGVHANNCFSUXXQWYFSLQVNCUYMLVPCQUPXZMMRNLOQDLGZQAJJUDNFPQIKPBBAZDWROSSTPKNR");
    tmp_msg_0.vnamespace.assign("RJZAJBQXTXUEZVCY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QGKYAPWUMLFFCEMWVWPYESRDYXAJLTSTHKIDMJHOZQIMANCBSPADYUHPVHLTLIQHHRFTUOONQDPYBXDIXRJAMTVRUNFKLWABKJXFVETQCWEXOIFXUGQWOFKRGPIICACDZGQUNZYKVBDBFZCKBLS");
    tmp_tmp_msg_0_0.value.assign("JIUNHNJEQUUZSYFHDFQMTTWCHMJHADSZAJLIVLKDPQZYUXVOEIMXUASGNAINDADVITBEACVXTPGWOPDDBUFERKJJXHCDJEZNFTBRVHYPMBICSKGPYRNAXZWRWPSYPCAOTFOYWQTKFDWEZXMWGFCLLBSOERCBBQNRNOVIURGHEYKNFMOWFVIMOSTLPQDTJJZQXGBWCKLA");
    tmp_tmp_msg_0_0.type = 238U;
    tmp_tmp_msg_0_0.access = 247U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QRESJTDQDYBAXCUYEKHYUSXLSPLFKKICTMZIORTFYFXHLHBWZIRMQZTAVPKCXHKY");
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
    msg.setTimeStamp(0.697222311656);
    msg.setSource(7957U);
    msg.setSourceEntity(7U);
    msg.setDestination(19997U);
    msg.setDestinationEntity(196U);
    msg.command = 136U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NNASOBBAMVTPYWMPIVRTEZWTFOULQDHDKKVROPOQSTNEPOWKHQWGFR");
    tmp_msg_0.description.assign("LWFFUUIHCATBLMWTBGLAZROHVSQGHNYNKIUVOGKCWYRFURSDINMAQDMNUZBZSXGPWCTAXVVKSWMPHRJNFBERJAANETWBYCCBXDDMZQQKNYQZSMLYOHRIP");
    tmp_msg_0.vnamespace.assign("ZPCCZXXRNUKMXGCWTESTKHTUMKESUGMRXKQBUIVDKLVDTOWODYPTEEOAGNYBUNPIOWLCXUIHXEOJVPVPGWHIMWQMXXARFLRBSBLWBENTMZCYEDNJOMANHQQCBMQJRFFYAG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JWQPVRUYEXNDQDLSJGZXVYLCMUPAUEGJIIFLDJGEBCAKQSBAWXZBWTTLXTTEFRECRXISTYYBRPIQGKJFTPQKJUFDMKUAWCRMWHMKVJUCNXUUKFLUFAXMSHIVNSHNVEOQXOREDHXCLWZNHPJAAWESFPTOOZWYCHYBAMBZDGVONWFKDLNNKRUMCOYDTMZ");
    tmp_tmp_msg_0_0.value.assign("VXNLEOEJIRYNZHVLSECATUULQFPOHZIQLONDTNRMFRRPEPUSKPOYJVQVBQFIVFVGGWEJUWMOJMATKCVDCVOGHKRRGIMBYEBIHSMDLHBCBZHDJMPHYYQUEQSXXFSDCEESPYTVPPFLWNMTLXNYBBRGGAAXIDRUNJQJCTPYCYCEZZNXUYAIHUIWIPSOCGSWRJMTWKZAXALUTXKBOHKFKWWVLZAFXKBGBQ");
    tmp_tmp_msg_0_0.type = 93U;
    tmp_tmp_msg_0_0.access = 122U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KWACMDHGZUTIMCJVYFINTAUUFHQIASNDQEWWOBNCQTFGVVLOXLDXBPHKZSLDJWIQUFPCVIKNXGQCBKEKJOPSOEWZGSJYEZTQMRIDYEUUBWVYKZMWDSSMUIKOTAHMKNNRGEQABCDEZJNGYBHTXYJOBJFGYYVJDNOEXHRWHFFOSZSIUCWAZPAVRAFXRB");
    IMC::LogBookEntry tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 155U;
    tmp_tmp_msg_0_1.htime = 0.817438898761;
    tmp_tmp_msg_0_1.context.assign("MGYZNPRYFJULMKZHXJFQTHQHQUJGNTOPBARIFDVCSPBFESBYLKETWZYZZYIQIHXVRHAQNPKOUDTOBYGHVPRDGMIQMSJPRXSQJNCZRLCLNMAIBWNSYAOKKLJUSPGVSXBSNAOPMRGDNCEXPRCUAPCOMUJBDQAWUXFZERBGJUEDRWILVKKBZFJIZGVGVAWXFVWXOVNTKHXBQGSYAMECHWWDFEEIDEKTWIOEKTXDAJFCUILZVWHH");
    tmp_tmp_msg_0_1.text.assign("RAQLNDHSYLYULBMNLDNNGXVSQAPPIKIMBFUEKJARDXKJWZVRZZSSUJSJGXDYAOAKREQDYRNO");
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
    msg.setTimeStamp(0.838013281279);
    msg.setSource(2705U);
    msg.setSourceEntity(186U);
    msg.setDestination(53139U);
    msg.setDestinationEntity(98U);
    msg.state = 136U;
    msg.plan_id.assign("PTROUBWHSQLJHZOYGIBHWDTYHSBNEWNZFKDZMKGEZZRAAVTDMKXFHJKCRSFNXAKEDXUPFMGGYIMRWMSUQESPWYJQVIVIPYTDPGWUQXXOCHNXUJGZOEXTSIINFATPDLULKHWLBPZOSODNIWPMGZNRDVFIWTVLRLIBOSJUOEQABURRKAKMGCJTYFHKEIMSLTYRXRMCVKBFAAPZANQEYXCBQCWTCZVDXVDJLCV");
    msg.comm_level = 29U;

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
    msg.setTimeStamp(0.082722342118);
    msg.setSource(31442U);
    msg.setSourceEntity(162U);
    msg.setDestination(44893U);
    msg.setDestinationEntity(105U);
    msg.state = 78U;
    msg.plan_id.assign("HQXKVVCRRMCMQLOEODOCTBQIYBKXRRVSWUQEYXUSKGTQQJEGVA");
    msg.comm_level = 162U;

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
    msg.setTimeStamp(0.556448256031);
    msg.setSource(7029U);
    msg.setSourceEntity(201U);
    msg.setDestination(19988U);
    msg.setDestinationEntity(119U);
    msg.state = 193U;
    msg.plan_id.assign("ACRXUBPFGDPUMWKJMKQATPYUZJBTLYUGNCINZIGYWSXHTCSNQXNSYQKQDPTOFQPWFJBIDYLLZIJOVHAVSXWTMEFKGSLDPCMZRMQYBEURVVUUTERUPHQNHGEFHDELZBVWWLTGEKOYVRYBGXZICZKQHSJWKICMGRBKNTAIEIFLDRPENSAVODUSLBACOKGRWAMMZAOSFAMBXHJRQYPHDTAVFIZV");
    msg.comm_level = 169U;

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
    msg.setTimeStamp(0.430154651834);
    msg.setSource(20600U);
    msg.setSourceEntity(52U);
    msg.setDestination(2700U);
    msg.setDestinationEntity(107U);
    msg.type = 205U;
    msg.op = 152U;
    msg.request_id = 45220U;
    msg.plan_id.assign("EUJUTVFINBHUIXZDJTTQYERTWVQSYUUWVJUMFHMBKOZPCRQKRHQAMXJLDMTCVWBZKXSUPCXDNNBTOMZRCCQLONLWRLMXGDVC");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("WNFJLPTIVGTAWKPMVAMZZYFOGPCETZYEZNUUPNCFBXMASRLSDJFZODHJZKGLBDAJBPQSGYKIQAXVIFNNYTRLQVWHTNWCSXEIJBMLQIAMQHFKGHLJLGOURRCIDJJSMXVYKOYBUXUXBAZFBGQIDCSYOMNRIQNNHOYLDXTCWFDRWHEOISTZERPYEJSKKJXATQDIWETBU");
    tmp_msg_0.plan_size = 52428U;
    tmp_msg_0.change_time = 0.702678227061;
    tmp_msg_0.change_sid = 60461U;
    tmp_msg_0.change_sname.assign("ZRMOQOOLSZTEEWTUJKJNPRGSENXVUABXKVYIKHMMDNAFBZSCRZDZVVATWCIRCBVFLDOWKTAFBWUKJMTBJEPTQFEGKZ");
    const char tmp_tmp_msg_0_0[] = {46, -4, 67, 74, 53, -64, -31, 106, -46, 51, 51, -122, -23, -96, 29, -91, -10, 107, 90, -99, -21, 99, 111, 43, 88, -18, 13, -20, 113, 5, 30, 58, -39, 16, -46, 74, -17, -77, 121, -105, -109, -66, -97, -30, 32, 93, 102, 70, 68, 36, 124, 106, 65, -62, -1, -35, -44, 6, -9, 8, 92, 103, -123, 50, 120, 111, 68, -51, 30, -59, 29, 121, -34, 11, -102, -71, -18, 43, -25, 46, -106, -15, -43, 5, 25, 125, 87, 84, -49, -75, 26, -32, -106, 72, -33, 54, -11, -79, -13, -125, 16, 27, -24, -53, 10, -81, -22, -88, -101, -45, -39, 0, -123, -75, 107, -95, -105, 0, -64, -102, -106, 56, -88, 12, -39, 7, 91, 20, 56, 27, -70, -117, -25, 76, -88, -64, -92, -30, -93, 70, -63, 17, 121, 17, 55, -62, -27, -100, 82, -25, 90, 24, 119, 90, -126, -62, -106, 80, 47, -50, 125, 17, 76, -77, -68, -83, -116, -122, 71, 61, -104, -60, 99, -55, -51, 51, -117, 110, 116, -16, -120, 79, -35, -113, 111, -39, -66, -125, 119, -37, 17, -71, -68, -117, -16, -55, 103, 119, -99, 103, 52, 43, 12, 7, -119, 19, 42, -70, -59, 67, 0, 11, -55, -8, -63, -36, 70, 14, -67, 102, 64, 57, -61, 84, 29, 31, -20, 61, -4, -83, 88, -73, 19, 25, 25, 0, 85, -32};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IHKPGRZSLDNCTHWQFUHSTQKMYYYPWJVQHDYSDKPBOKWLBICNCEFMUBDXAINFRXCCUZHNNLHEOCZJHAVBFATPYZMUFOENYIGZ");

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
    msg.setTimeStamp(0.93159237903);
    msg.setSource(38346U);
    msg.setSourceEntity(50U);
    msg.setDestination(8878U);
    msg.setDestinationEntity(168U);
    msg.type = 25U;
    msg.op = 95U;
    msg.request_id = 24187U;
    msg.plan_id.assign("HAVOZKQKXEARFGBDSEQGUAIOOCHJZLUPLTKJHUSNJMGBJOYAXUTPIDFWMAKLJRMHYGGFFXGEUWTVNJWDXCLYCVZYIQWDFKHMYXEVSHKQPMYWBIFEBRSFBTPCERNANAWVHFPVFHQIRQKDYIGVUROAWTTLCNLDQZWKNTDOXSVJAMBJEEIQXMPQUSNNXPZRCNDVPNOLRJTCRROTYSTFJXGHBIBCZYMKEKISXULZSUDVMYUWZMLPQCHESZAZO");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23284U;
    tmp_msg_0.off_x = 0.952754892515;
    tmp_msg_0.off_y = 0.824850295149;
    tmp_msg_0.off_z = 0.651768972355;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DAQMZIYMNSWBNXXRSKMEFXOFFHOLTDWMUPDVGZILTSDTMZJCFMKRIFOBEULNFQLFSUXIRWKRSASYUCSMTZEGAUAJWSEJDKGVUMCAZUPERYPAHSYQQBQNMVRJPLZBYNYNIIJXEKQXOHBWGKQPOCVNRYOGXYWDSNPLDZUPQKVRVTWZXOLPVBRIIYPAMJWYOFVCHJTDHXTJGBCDWUEBOAEQUPOGCNWFDJTHTHBXNFGCELAAKGKHLZKIHCLBZVR");

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
    msg.setTimeStamp(0.170760049053);
    msg.setSource(14075U);
    msg.setSourceEntity(123U);
    msg.setDestination(9823U);
    msg.setDestinationEntity(194U);
    msg.type = 10U;
    msg.op = 134U;
    msg.request_id = 42554U;
    msg.plan_id.assign("NMVUVVNAPJLULWXJVPHNSJTDLUYCYOPCWZXMZFLIOIQXOEAGKEAXICKDHSPPNTBZYG");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 5U;
    tmp_msg_0.period = 2155484734U;
    tmp_msg_0.duty_cycle = 3062742742U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HWBDFOQYTJLNQNWBYRTOZMVIALRFHHVKYYITOZBUBAQWVLXUJIFMAPOZOERPUUGKPVQVEGTWZGEHTDVDHICCMVPUEPEJICUQLXSIEFGPAWLETGZNXGBSDFHQSNBBZFZADWYORIXAOCKTVQDGKLATRYJAMXNEDKUJMIVBYWXXSDGSFRPABPMMGSCKHPKDFNLRQKXMUDCBJJUXURHWECWXFNSIRLZRVHJZLJMSKOYNPLIETNHCGNOWYSSTKOZQY");

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
    msg.setTimeStamp(0.699413093092);
    msg.setSource(44506U);
    msg.setSourceEntity(184U);
    msg.setDestination(17346U);
    msg.setDestinationEntity(234U);
    msg.plan_count = 16320U;
    msg.plan_size = 1540575826U;
    msg.change_time = 0.675581683059;
    msg.change_sid = 28991U;
    msg.change_sname.assign("QTSPPPPPSEPDYTKVFRFLOBZOQEAIBONKCJXDVFCZXVIVLTSUDEJVTZYFUWZKNPXYFNMASODNOIISYWUENQBYVLSJJTXGVRCGCGWXFQJEOZZQZKLMNJANITPNWEWWFBYVWTCCMVDXGIRLAQSEVHAIRUIDQLXKLUZRHLJNKKDUDMHE");
    const char tmp_msg_0[] = {41, 21, 97, 17, -101, 57, -103, 62, -15, 95, 21, 28, -121, 81, -8, 108, 73, 114, 52, 84, -68, -78, 95, 15, -75, -127, 84, 102, -106, 44, -116, 16, -99, 82, 55, -91, 102, -105, 106, -99, -84, 19, -18, -53, 28, 21, 83, -98, -56, 32, 38, 31, -78, 23, 30, 85, -3, -71, 76, -39, 11, -58, 11, 96, -58, 93, -66, -37, -65, -16, -128, -52, 10, 103, -120, 71, -80, -72, 69, 20, -110, -53, -26, -30, -126, 48, 93, 6, 110, -92, 116, 0, 14, 70, -58, 30, -128, -40, -37, 93, 26, 28, -43, 77, 80, -52, -64, -2, -52, 125, -75, 82, -123, -29, -113, -9, 95, 70, -92, 81, 51, 20, -24, 63, -31, 81, -71, -40, 66, -50, 51, -83, 2, -49, 92, -7, 84, 119, 60, -16, 6, -101, 96, -69, 12, -128, -106};
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
    msg.setTimeStamp(0.960843394915);
    msg.setSource(1459U);
    msg.setSourceEntity(196U);
    msg.setDestination(58826U);
    msg.setDestinationEntity(69U);
    msg.plan_count = 57713U;
    msg.plan_size = 1854227265U;
    msg.change_time = 0.53689437313;
    msg.change_sid = 13574U;
    msg.change_sname.assign("EGEJCYSOTMNLFAGHPIDPJZZHDLMVDNPHUYOPZOOMGYNCXBSIVGPQBSWGKYAVFHSYIINDRKUCLJEYXQXWJROXAVDWFUUIYQSCIVTOOFRAVIUJMRLHEBIRMKBQEHDDQUYFABNZZQJGSQAKEUAZVXZCRTLLLRTNPBJSOTXCXWAHLBJGUZN");
    const char tmp_msg_0[] = {45, -74, 40, -32, 9, -74, -73, 44, -55, -89, -2, -10, -66, 8, 109, 124, 28, -91, -73, -30, -58, -65, -40, -86, -106, 91, 69, -5, -126, 60, -18, 41, -97, 65, 22, -33, 28, 43, 15, -72, 105, -33, -106, 67, -6, -59, 85, 25, 88, -128, -95, -116, 73, 37, -55};
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
    msg.setTimeStamp(0.54050449859);
    msg.setSource(16382U);
    msg.setSourceEntity(123U);
    msg.setDestination(57310U);
    msg.setDestinationEntity(242U);
    msg.plan_count = 30754U;
    msg.plan_size = 2698056730U;
    msg.change_time = 0.860373415926;
    msg.change_sid = 35153U;
    msg.change_sname.assign("NWJLGBBJXWZJKUYHSLDHARTYWFGMNVOKDCNNRWPSNAQTETLXFUFKZAPEBKQYZMZJYUJQADSCPDVFTXCVSTIREKPGYWKHCQXPIMVUQHIHYSGOROLHMLZSRDALZUHHJTORXVRRGTN");
    const char tmp_msg_0[] = {-41, -46, -74, 102, -53, 112, 68, -25, -107, -74, 111, 40, -30, 120, 57, -115, -65, -80, 6, 63, -112, -38, 112, 94, -101, -126, 66, -49, 116, -60, -47, 32, 18, 12, 111};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZLQEUYTJQYCGZOWDRNWWCAAEHABELCO");
    tmp_msg_1.plan_size = 41172U;
    tmp_msg_1.change_time = 0.10224968063;
    tmp_msg_1.change_sid = 41812U;
    tmp_msg_1.change_sname.assign("WCKSYFPEVDILZRTDJAGPZASWZPQNZMKOCLNGBEALHCSVJVYLPFARBHWIWUQKDHKCRWKCKYFAJJMUVFSXLOHKGUFTLOUWFHXFWDZJTCEISBTHAXJRGLTQRNZMOUVPPMBVYFSPXRIPXIUGQIOCQVJYQJWOIZWBHNLJBVMOXBYYNRNODMQPGNDGEERDEAYQZTZI");
    const char tmp_tmp_msg_1_0[] = {-115, -96, 2, -78, -15, 26, -15, -72, -79, 66, 46, 34, -22, -34, 33, 90, 55, -53, -30, -38, -16, -118, 32, -34, -6, 50, 94, 53, 98, 35, 32, 64, 19, 107, -103, -25, 81, -64, -78, -47};
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
    msg.setTimeStamp(0.851011102468);
    msg.setSource(31265U);
    msg.setSourceEntity(166U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("FKCZOTOURLNFZWWIJLGQILLKIVCDZBGSNGUABQVNXLDTWIVUGHMRVUYDQJOBCKZDUYQSRMBMLBPVBZDRHBYITPUSEHXHNUSEZPPEWFUHASJMJZPONDJUESOIYJVTWNYBPTKTWACKDPMNIZERJELPWOCICRRXIXAAEHWFNGOCWHHGETKRAGCWLEX");
    msg.plan_size = 44072U;
    msg.change_time = 0.0393495311828;
    msg.change_sid = 55803U;
    msg.change_sname.assign("IXBNVAWJFMDYYOBXRJJEQTWQMNUMNSJTPWYHBCIVJCOIQISCQLDEGJOTKRSYIJOIBYLXDMQUVOWJDEF");
    const char tmp_msg_0[] = {7, -26, -65, -10, 19, -98, 99, -22, 113, -49, -76, 66, 102, 119, 37, -73, -93, -64, 11, 88, -120, -48, 27, -125, 113, 45, 2, -109, -52, 16, 67, 77, -17, 94, 91, -55, 16, -23, 111, -23, -57, -38, -14, -63, 51, -122, 45, -110, -83, 63, 36, -92, -17, 69};
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
    msg.setTimeStamp(0.0511480951078);
    msg.setSource(12166U);
    msg.setSourceEntity(140U);
    msg.setDestination(58910U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("URQZBSHJWUDBAYMSM");
    msg.plan_size = 30759U;
    msg.change_time = 0.621535152714;
    msg.change_sid = 18842U;
    msg.change_sname.assign("SMMZFUETPHZBSVLGDNJMSIDSMXFKZWMPEHURAGUDXYWTVOCLBTBBJAWEPQGEGTQLVWJYPZVGDXMOCHXZ");
    const char tmp_msg_0[] = {111, 34, -37, -61, 4, -27, -11, -51, 15, 101, 75, -70, 49, -72, -15, 31, 125, 44, 71, 68, 103, 63, -42, 10, -5, 25, 78, -29, 25, 59, 46, 53, 83, 36, 0, 90, 112, 1, 45, -102, -120, 99, -51, 90, 74, -52, 19, -96, -87, 100, 17, -73, 50, 111, -57, 60, -107, 86, 15, -88, -113, -123, -86, -75, 91, 93, -62, -100, -84, -124, 96, 32, -78, 117, -116, 18, 16, -120, -14, 73, 41, 11};
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
    msg.setTimeStamp(0.555795646657);
    msg.setSource(18602U);
    msg.setSourceEntity(235U);
    msg.setDestination(6669U);
    msg.setDestinationEntity(214U);
    msg.plan_id.assign("VGEGQLHOZLHWJAUPDNQRZGTWDQXACIEDLUARBUOELUQDMUJTCXXEMVBNOFNFFSNVBHJNPMDOFYRJVHWBLIJJKTIDJJPBWPMUIIOADLGBFTSTRWZKORSQMZSJLFYIG");
    msg.plan_size = 17468U;
    msg.change_time = 0.424613833223;
    msg.change_sid = 61101U;
    msg.change_sname.assign("ZUJDNXGZHSFKETVRHHDXTQDBGGWCJFEGYDUTWWUACIDEVVRDSMOQYDSCCZKPWMAXIZFZVDNZFCLGXTURQJXANHIAMIYSFSEWYRJIKVQJOMLULRVEOTSUPTJUWYAJOXNMKBXICPPRWDAMXQEKGABSLNPLI");
    const char tmp_msg_0[] = {-100, -113, 16, -27, 64, -101, 121, -39, 43, 71, 58, -112, -9, -83, 10, 118, 1, 47, -5, -53, 88, -74, -92, 114, 11, 110, 37, -42, 55, -84, -60, -121, 70, 81, 92, 66, -87, -54, 98, 76, 112, 71, -25, -50, 64, 77, -96, 123, -126, -30, -74, -77, -44, -101, -69, -49, 8, -58, 64, -11, 41, 47, -34, 16, -105, 41, 41, -20, -109, -66, -98, 15, -18, 34, -72, 121, 90, 9, 10, 74, 55, -82, -111, -68, 113, -51, 18, -16, -114, -48, 92, -21, 80, 63, 62, 57, 11, 101, 3, -84, -21, -77, 119, 48, 11, -25, 123, -116, -113, -76, -64, 124, 123, -126, 58, 65, -28, 1, -123, 66, -77, -43, -62, 80, -77, -118, 112, -56, -51, 21, 21, -86, -25, 26, 91, -104, 15, 114, 100, -95, -38, 46, -106, 107, -116, 37, 81, -114, 81, 82, -35, 3, -118, -76, 82, 22, 64, 47, 56, 86, 113, -65, -81, 98, -33, 110, 93, 84, -110, 22, 3, -101, 38, -4, 22, -19, -24, 118, 41, 26, -70, 104, 87, 48, 100, -49, -122, -75, -114, -45, 43, 46, -79, -94, 30, -52, -45, -70, 99, -20, -49, 84, -18, -56, -31, 4, 52, 5, 98, 39, 42, -117, -111, -52, 71, -94, 15, 46, 13, 16, 18, 118, -117, 44, 88, 21, 35, 34, 77, -50, 33, -52, -42, -128, 85, 7, -9, 62, 44, -120, 27, 119, 52, -127, -63, -93};
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
    msg.setTimeStamp(0.239742874072);
    msg.setSource(12972U);
    msg.setSourceEntity(93U);
    msg.setDestination(43015U);
    msg.setDestinationEntity(79U);
    msg.type = 103U;
    msg.op = 217U;
    msg.request_id = 28872U;
    msg.plan_id.assign("CIGTSMKOXFNNEMEKFJAVDNASAXZJDLZVURPKGNWZUZELPZQDLKWANMUBICJBEWNJEJMHQRSVBORUPWASMCPCUXUXNWPERFBXYMQEBQLSZJTOVRHSYQZSKVFIXQWTJTXLYEHLBRLMDPIPSOYZWGHOYGFQDFZDVAUDAICBQKHXKZIRGOLSKVTSRFEHNPVRWEGHGXXHWFNPYOUAFFACWJBCOHCTQIJDAC");
    msg.flags = 39151U;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("XEVHUMEFXDZHMHMYSFZRBNRLHVAAMLCHOCTDXCDQKSFJYRXTMBGCRLEXIGYDOQYKFSDWVCFBRBJLNITVMLIDLXTYIVAQMWNYIVVYHKYBBAZHJJJJLQECGFKKMXFAXZPNQFSAJGPSZPNSUDNGUPZHOTOOKGFBRPSWZCPFNNEPCWOWHOQXGTQDTEXKOIOMJYIDUIRBVEZGKPTEBDHPKRUUECTULWJAJZAIKIRRUAALZESWUTU");
    tmp_msg_0.predicate.assign("XZTMJIWGTJRAEWDTIJTPYLSMXMTJKCAXISGKDULJUUHCYKOYZNSRGWOFJTFEZKFQUZVYBCLOTGCDMOFPISZUIBKEHPYYDIBXMLRXGWPQAFWHIDZMQUXPMRHMMJRRBSNSOSNGGUQRLWOVVGEANBDNICUZXXCNKEOKAPNTQWPNYRVYAFZBKLTVFBXQHERLBDFFCSAPKNHEQEIBU");
    tmp_msg_0.attributes.assign("UWDYNABSPHXSNENUHIDLLPGLBYBEQCOPDVBMLTRLJZPNUSYFGWJWQUA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YHHKUMJAJDWKFNULIERNEDHQFSKUYBDOMFRPBNQYRSZENMATCHMFJYPERUVROZOHCLSCUFYWHMXHIPNXMXNIVELFZOBKUJCWNYQOSDYHGVQCXRSPNLOWGEIRTADJXQGLMHJETJUQJSXKZGLXSWSAOCOUITZDMANEYVSAPIHKPPJGFGRFKOATQCBZTAIVZVGMBCDQCUCAUFBZSKLZVWVAFXDYXTWPLIETNMV");

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
    msg.setTimeStamp(0.75670780417);
    msg.setSource(13206U);
    msg.setSourceEntity(159U);
    msg.setDestination(27083U);
    msg.setDestinationEntity(171U);
    msg.type = 133U;
    msg.op = 33U;
    msg.request_id = 11550U;
    msg.plan_id.assign("LEXYFHBSNQIMOZVZMHMNCBOPDIOCGUIIYDSSTDMHTSEVAZWFTJPCWHXAZJMYVHYQEOTBEKODUUMGOCAZWQBQIZPEIOTLLRWTRBWXHHQYFBARUNPBTKXUKCEQDSGDGJSVGGLXQMNYKRGVRGQWAVKLEXXCJDBXVFXRNMOUOJTVHLDARJVKSCYRRWOJFULZDIBJPFAJAUZQIPVLLPAAPWZHFTNUEEGKXPWKKSPBNIMTCFN");
    msg.flags = 32258U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 46998U;
    tmp_msg_0.name.assign("KHKPVZFIPKWFXVTJOFOBTERKPTEGWHBMZWPLUAHBRXOCDCKMIKQPYOIBSNRADMCFAWZQJQLMLNGUKXJQGSLVPDGLMNPCRDK");
    tmp_msg_0.custom.assign("DZCUTHNYGSYXVZYGJWAQCLQBLANZFGDOMXITCSEBBEIJJMTMKGPQLJVPKYWWLCBPJMQTDEHTFHMAF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HIYTFHSQRBFVMDSXWEOPBDUDOGWELFPTKWVEZKBDTNTJLXPXRRJIXJLRHYNUBJXOEDYISOXMTYYNVLAQMUHUBCPKWFPFHGRALSGSEARGEPCNVWYUDIAWFBQJCWSOCCYAYIIJNKPCITAILVRUMLQLZDOHNXBXMJPUZAXGGRNQYHPSOKFZVPASKTAZSECFRQCKDWODRTUNMZMHJWYHBOUVLVVEHQSFUTQCZKNITZQMB");

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
    msg.setTimeStamp(0.752556940466);
    msg.setSource(5075U);
    msg.setSourceEntity(253U);
    msg.setDestination(5955U);
    msg.setDestinationEntity(178U);
    msg.type = 131U;
    msg.op = 232U;
    msg.request_id = 8362U;
    msg.plan_id.assign("GMNISBRSDLQTUYPFORQZEYSIXUUPHJGHWABEFNPZRZICNEQVNMMPNYYJJUJGHMXAZZSVKGDIRZDARTZNSPDLAEHEZFMOVSCFIKUTCFKOXFLOIQWVSKTGYELHRNAWQKDMCVWLJHQCEPCFJPQGXABXJOBFSARGCJTMUKDCLBBNTROLUWBWJBANDMYHGEKSGYPXPOZ");
    msg.flags = 55636U;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("XSHXLPDZPMAQSLHFEJAUMHDXADNDOBPNHYRJGIISUKMHIPOANKXDKFUNGQIQEMJLLZFMFJYZWVPVWCIVSPGQBCYCGBSIJMNRINMOTXTFOKVAJBLYDUUNGGEW");
    tmp_msg_0.type = 194U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TZWUGBSTKTTJKTTWXZBPUJRMZDRVMTCZYWWFZCDIRKYXVGFPZKIHCIXBHJYHGVPKBOIFJAIXEYPCFFZYLJXMLLHNDJYRXISAEMBRDUNJDFOYEGTHVOEMFBGGIWQSEFUMRVFVUUWPPARSKLWGAEWNXCQHMKHPSSLNOURWSIAAVNKXFAJUGANLDOMCDBHHB");

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
    msg.setTimeStamp(0.256023248802);
    msg.setSource(63106U);
    msg.setSourceEntity(94U);
    msg.setDestination(31690U);
    msg.setDestinationEntity(115U);
    msg.state = 146U;
    msg.plan_id.assign("TVKDACTDROXQFYXHTOFGIUNHQJAURCQKABLOQYNPQKWZCVMQJALLZDQMI");
    msg.plan_eta = 1463540452;
    msg.plan_progress = 0.0565650070067;
    msg.man_id.assign("VVXKDIABBAJWLFHGUYPSCRRWLKKTWANTAUSCNCXFPZJIXNGUOMFHQOXPTLETUHKJTZSQWPTJSSEZQWDMZBVERIEBOWGEQRUIVUBFNAJIQKCVBKYMQMJGRWMUATHQOCKDVZORCMXURZYLNDITVSOEMJDVNNDHYF");
    msg.man_type = 6348U;
    msg.man_eta = -316906246;
    msg.last_outcome = 12U;

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
    msg.setTimeStamp(0.174464628086);
    msg.setSource(26043U);
    msg.setSourceEntity(206U);
    msg.setDestination(34381U);
    msg.setDestinationEntity(69U);
    msg.state = 100U;
    msg.plan_id.assign("OVCZLPQXQEWNHRTMZTTEAQOVVUTVXGINCGGJUSTTIHENZHGSTWZJBEHUMJQIXPQDLRIQHFIRASGTEWYHMGCRDJDDZWCACMQAOCDRGOVRWJBKLGCDYXKCUUYUUIPKMPDOESZRXMVJHMRYWWJAFLPZQFSJBNPVXABHBBDNJVOYNNJPYZBXBAYFFKYYUSLNLYQKMKSXEBEORVFPICDVAZTWFMQIPXGNUKAUSBXREIIFASDMLCKOHSEGL");
    msg.plan_eta = -859042223;
    msg.plan_progress = 0.285149132095;
    msg.man_id.assign("ZRDVECOKEHEPATFUAUYNFXUMVGMHPXCOKTBDBFBTYZXIONEKSCOBIBINYPQCIQJSWKNTGURGIFROXEEMDTWVFVCWRBHSYBDXPHJOEGRKKLLMLCNTIYJVPQAJIAUWTXYQBHAF");
    msg.man_type = 41601U;
    msg.man_eta = 134860019;
    msg.last_outcome = 235U;

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
    msg.setTimeStamp(0.826562614313);
    msg.setSource(2591U);
    msg.setSourceEntity(39U);
    msg.setDestination(21367U);
    msg.setDestinationEntity(26U);
    msg.state = 6U;
    msg.plan_id.assign("DFRVZQWDQGEIUWGAMENZZEPAUWQJBHOSVRSDXAGAJTKWRFISCDNHDILAFEQREHEQUWKSQCPUVUBGNTQVVBEYZHXHPOBRTRJGTDUCJZPVXFCPKKCCGPUVINZWSMVHAYQLIWWFKETMXOPGZXDDFWTXCZJTLUZVMBHNHYMJMONIBMBKHMOQZLROOTFTLBKPGYDBTOCPKVLAJGCYLIXPYRYU");
    msg.plan_eta = 755765463;
    msg.plan_progress = 0.305132263045;
    msg.man_id.assign("EVRXCZHKQKUPFFUCOHTHYWJTMHTMPFPOQEPLCZNRYFNSKZFYBKLGRBDIESGUYSWNJXKCSEVJQXHFXNSRNWNL");
    msg.man_type = 10216U;
    msg.man_eta = -1949232357;
    msg.last_outcome = 114U;

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
    msg.setTimeStamp(0.53201223687);
    msg.setSource(8583U);
    msg.setSourceEntity(53U);
    msg.setDestination(63061U);
    msg.setDestinationEntity(230U);
    msg.name.assign("HKCGHCFYAVEGVKMLURRYWWNEOIFTQMCSDRBZNMZXDWFFJDRVJXJCJVTINPEKKMXUBZZCIPVHRLHUNERUGIZOURPSDLLVEDEIUMSFWKYLOCMHQJCSNSBJFNYVXYTXPLITMDUCPNBCSKBOZTGCBQIGKLNQOJAWATGOLYEYUFAVXLQSQTVQ");
    msg.value.assign("BMDWEIYYBIKYRTSFSJTFBQVEICHEPSYTEYLWR");
    msg.type = 223U;
    msg.access = 29U;

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
    msg.setTimeStamp(0.370476492728);
    msg.setSource(24245U);
    msg.setSourceEntity(239U);
    msg.setDestination(39005U);
    msg.setDestinationEntity(141U);
    msg.name.assign("JFTTCKFBEXYUCBPTVBWVSDQXRXNCGMWSCEOAARUEFQVISNEQAOIXITRUYDMIAWPGLLNDSZRPZSNECKSMJEL");
    msg.value.assign("IGUDYLIGBTL");
    msg.type = 133U;
    msg.access = 128U;

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
    msg.setTimeStamp(0.0775130061137);
    msg.setSource(17934U);
    msg.setSourceEntity(190U);
    msg.setDestination(27875U);
    msg.setDestinationEntity(23U);
    msg.name.assign("NDVEJMDSJCEAOCUNCISEJZTCWXVYTCCLZHHGIESUNQXGVJQFPDIURGGQRUEWUPOJRCGNOKDZVFDHKNZSXIUNQBLWMRGWVFYRIYIAPBO");
    msg.value.assign("SMBHOAKTJNVWLUKWVQOUIBPSVRZJDWXYCZSHKDXYTLOOQFSEFQGXPMMMNR");
    msg.type = 124U;
    msg.access = 161U;

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
    msg.setTimeStamp(0.45096496859);
    msg.setSource(31395U);
    msg.setSourceEntity(238U);
    msg.setDestination(4859U);
    msg.setDestinationEntity(244U);
    msg.cmd = 14U;
    msg.op = 130U;
    msg.plan_id.assign("VITWZXIMBQZQKIYQCZVLKVFQLLFPIRUMRPAZABDOYISEAHCATDXUUECPVYRKXERGPOXXTHRFSUNBZSDMFRGNJVUGNADRCRDHPEQQSJMHHQMRAQDDJWNXUFLATZPFBWKTKYBXNXZPTRBZSTXSLCKYIIPL");
    msg.params.assign("XHHPJBIXJUKRRQNSXBVZQNPQNUBRCZCMOAKQUNSLEXJYBENVZPIYFELKPPKLWERGNYQZQBXHTKMFEAMSUVLTGUOMFZPUMENIVWWAMHYODUHGOZWWWHJVDCHADDONRKXDMSZLIPXWKXOFSDURVLTZIKTTJNGFSEOCULTFRCZFVOFVNYJFSOJGEKDUTCTIHAJSYLYGCHCQVHMBPVGWIMBMLAFXDABZJSRWGAQGCSDIPAABGEYKBDEY");

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
    msg.setTimeStamp(0.916888633297);
    msg.setSource(57470U);
    msg.setSourceEntity(132U);
    msg.setDestination(23371U);
    msg.setDestinationEntity(80U);
    msg.cmd = 13U;
    msg.op = 133U;
    msg.plan_id.assign("RVMOUWWJHFUZATHHFBHFVCJORNBZDWPMOGECNLWQNNYRMOGBRIBSWAJVDRSONTKKRLPTQMEFLERHSXHCBTXCPIAIVUPPUMIZYBQPK");
    msg.params.assign("KJVBFTRRFNFSGVQJCAZWUYVMKITHOZBPLOGCPBYH");

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
    msg.setTimeStamp(0.51459759175);
    msg.setSource(925U);
    msg.setSourceEntity(204U);
    msg.setDestination(55276U);
    msg.setDestinationEntity(35U);
    msg.cmd = 39U;
    msg.op = 28U;
    msg.plan_id.assign("YEZVLFFLWPUSWSBQCLQTEZOCLTBRTEFGBNKPLOTSVGBVJQVMHCJPHKZWGPBQXACJYSAHCRJXBUMAHBMAVDTZDQNXVTOCFHFMIADPIPYGUUINJEHMAGSKRPXYMHZXRCIQNMESLNUSFBQVKNMDIQRHJTEXOZWZWYFOODXYUHNEOSNIFSLDGFKAKKEDJIRXTUOKSNZBODMPIBRALNLIDUUVQXOYVDYCQY");
    msg.params.assign("ZONZBYBJCUHNUPFSGPIODSWCRDYSDYBHKUCAPGEIRNBQCUOYBHMCYDMUSFSKWLGTVLETUL");

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
    msg.setTimeStamp(0.487474011851);
    msg.setSource(45186U);
    msg.setSourceEntity(39U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("TCXCJHKTVJYMQLHMHASLKNRUODQQPRIDPREHBVMQUJOLKSSQXFPDUNJDBSOUYBMXDECMRZJWMPGUYSZBJEWPTKVIGGKHJLEAYUTJCMOVTQKDRXWZQXOGNZARZDRNTLCTPIAHMZHSQMFXBLVCWSRDZYTWOEBZZOVDNVXRSYXFIIINFCGAGBIIHCIFHDTWMKNASFNWGGUIOWKWBAUGTFNEPFHOVLKUCBPK");
    msg.op = 129U;
    msg.lat = 0.339607535622;
    msg.lon = 0.916801385249;
    msg.height = 0.946357414731;
    msg.x = 0.84099017193;
    msg.y = 0.192537514369;
    msg.z = 0.741941806272;
    msg.phi = 0.854808570832;
    msg.theta = 0.807680850777;
    msg.psi = 0.519743048303;
    msg.vx = 0.105184180211;
    msg.vy = 0.757174257692;
    msg.vz = 0.799237362737;
    msg.p = 0.325182854789;
    msg.q = 0.366912865945;
    msg.r = 0.176253627625;
    msg.svx = 0.921838494551;
    msg.svy = 0.762087191705;
    msg.svz = 0.266433610879;

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
    msg.setTimeStamp(0.000835586130838);
    msg.setSource(2717U);
    msg.setSourceEntity(95U);
    msg.setDestination(27035U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("YYBEJUAAGSADUCBJGOCVEEFNSYFGFPPCTXGROWEVMZAYMRRBKRGUXXYIBYIKCKLUUZMHIWOTFDMRVWHZBTWAGJSOVEMGLIVJNSEXFXXMQZVNSYAIHDTQWEPNHLMDAUOBUQMWVVXKLTBDTUZCNHBJPALRWYTHSFVDYMHQEXDOZKPWHNWOCJ");
    msg.op = 202U;
    msg.lat = 0.212553160991;
    msg.lon = 0.913790092581;
    msg.height = 0.825826062463;
    msg.x = 0.849239796792;
    msg.y = 0.482752360864;
    msg.z = 0.169307708746;
    msg.phi = 0.667570968386;
    msg.theta = 0.585355373475;
    msg.psi = 0.22032167215;
    msg.vx = 0.0276289426567;
    msg.vy = 0.8651893875;
    msg.vz = 0.186074343119;
    msg.p = 0.649104478824;
    msg.q = 0.554660359457;
    msg.r = 0.239758995614;
    msg.svx = 0.294621222014;
    msg.svy = 0.873090241539;
    msg.svz = 0.71718491775;

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
    msg.setTimeStamp(0.174469853109);
    msg.setSource(36155U);
    msg.setSourceEntity(156U);
    msg.setDestination(25077U);
    msg.setDestinationEntity(132U);
    msg.group_name.assign("BQPNQEIDQXCKDGAYOVMITIHLEMRSPQQAYZEFCGIMAHENMYQSFTRZTISPQYVRLZGWXOWJBVKNSTAXCVOGJWOPEMTMJFEHKVWSBVHWXLZIFLZHFVKTLYULFMJCNYCZZYJLOWIHTBAASXDSALURFQOUCNONWVBITNHPEPGK");
    msg.op = 4U;
    msg.lat = 0.871632583568;
    msg.lon = 0.815354466381;
    msg.height = 0.0702319440655;
    msg.x = 0.154979091508;
    msg.y = 0.58417812258;
    msg.z = 0.857058620313;
    msg.phi = 0.218411163161;
    msg.theta = 0.707825505363;
    msg.psi = 0.251539998419;
    msg.vx = 0.357301997314;
    msg.vy = 0.784904208853;
    msg.vz = 0.869859745408;
    msg.p = 0.245043627179;
    msg.q = 0.814283246851;
    msg.r = 0.298310887766;
    msg.svx = 0.339935581142;
    msg.svy = 0.79288334058;
    msg.svz = 0.781840097766;

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
    msg.setTimeStamp(0.343743268912);
    msg.setSource(54350U);
    msg.setSourceEntity(38U);
    msg.setDestination(57261U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("GEKEYMPXVMIKTXLAILKPTGVOGQRLKSXFWHVEPLMCBVNDARKMBGSOWCTQCQXYJJNYUYMCFFMRMNWTHNRQEHRNBVJIQEIZJJDCZSUWCZWYRHAXT");
    msg.type = 17U;
    msg.properties = 222U;
    msg.durations.assign("FVOSATUEQWYZVQFTCTTHRMYVEJFOVNSKPYZBFHUNXDZMCLQOOKHFDXCPUCLXVADLSIZMGKVPJYRJIMJKWHRPKHOURRBVFZAGBYASPCZOHMNEHBDPBIICYQRGFBSNQYIUQUARHZOECLDADQZALEGNTCHLAGSRNIOFVDWXVOLQDWKSXXFCBGLPBLMUSNJENGJIVJTDSQTEIIDZPLQWXJWB");
    msg.distances.assign("NDKVLJUEWGQQREDDHQTMMMUIALQFOIHQYBMPYJKJCXVSQTJLXOLOUNAEZAZFAUFCDLQYYHOSUYTWFPZRGWSOPPHMIEZTNHGYXEZCWKPVABYGXXUYNRUWFRULJAZCRNRKMIQHKMFIONSYZHBHCBKKGFTBZSEMAADTYCXGXPXPTJHVADMIGBREWWXDETIWVKQRWZZGKEVXFHVJPBNISGSUBEGONJBVLRSJBNUICFCLASDSJ");
    msg.actions.assign("RDSNQUZBFVOBNJQSXBVQRVJGDMFHFVGJNFESGHDLOQGWYBYQPIAJOWEDNWHAMHEWNZTLUYOCSPNLYUTIOJVPCHIKJZNYMJGUAEDIEQWVLTLUTYJQPXVDDVNPZMBEMRGBIBCKTCAOESETSZBILRFRIACJMWXQXXGXCZTFADCMKHAH");
    msg.fuel.assign("NVRNQSDCFVKEYSTWIUWXHZWBXPTLLYPHFZMYIZEIQBPAGPHFNQUIZOJLQAFWRFQSTNUYLVTLWZBHGIMVNFQURGZDMEVMRJJQSIGMYUJWIFENTDKPXSHSDRDSKFOTHDYUYJALLOXHITOIEDHAEVBPJUODUCKEAGRFCWWKKBPWAMARUPGMGXZTJPTROAJMJZLLFJDCKCVKBXYQEDZBXKSOCRQXCMRVGVXCXOYS");

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
    msg.setTimeStamp(0.126804158802);
    msg.setSource(36264U);
    msg.setSourceEntity(246U);
    msg.setDestination(51608U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("IXCJUOXUSAAIKSTLBWJZIPLQRVNMKDWUXNICANBOEOXQSEJJOISCJGEFUSSJRKKBWBPXKFVRSCHMJBUPQFSWNIOAQUMJNGFYRHUETXRWZEOBRDIWTWFJZTC");
    msg.type = 168U;
    msg.properties = 233U;
    msg.durations.assign("NJHDPMFDHOMTCMEZAPBCXTIRIJCTFHCKMQVLWHZDSDXJQWATAVLGIHLSVBEVIRYLYFEUWNJRCGQDGNRRXIKHGGNHOGWBK");
    msg.distances.assign("PALKBLEKXWFSYXVXPTQRLLWEHMAFWWZTRMFDJCUAIWVPERFUFKIKDKOIFNLSGSVCUYNFMZGTK");
    msg.actions.assign("CZIQGRFPROBDIMMVLPEDRYJPKLTLTZIJKAJUCFUPMGMZXSMSJBXUYANHUKVTQXAPAWJGZANKLCDTETGGMNTUCOQOOZBIUHLASWRSVWUCKLVIJCNGOHKITFIQJLTOSRAKFUEQHWBNFVCDBCMBVRAWGPLGFNASUHFUELDREWBXQOJYNEWYYGBXHQMXXVQBJDTVOYPEBKWHNNVQSODZHTDGHYFYZVCZRIESODNCQPYFAHSYPXJMWREREWIKXFD");
    msg.fuel.assign("CLHNNSGNIRPLDVUZLRPNRJPGBTJAZPQRGUUIBLOYICWQISTSEDONXMUBCHFHPUNMOAQJCDQLFGPVCVBOQBUPXTSHEUPBYWPDELTEGOJVAANSODXRWIAYMJXZAWDCYHMKZNRFTGQTGWWWSUJQKLJUKMDQYFFEIVDYRJEILMYRJWGQUMWWZXEPCMBFJYAAOHFRZTIOCNKKEDVFMZVZBHFBHSSXCKKTEGSIKAX");

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
    msg.setTimeStamp(0.562786754187);
    msg.setSource(1863U);
    msg.setSourceEntity(25U);
    msg.setDestination(7487U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("QBAGYBDMWSHBAYTDBXXUSAYZGQFAWERIHGOVWTYPPCHFVJGJORSHSZCTVCNSJMPTKUTCXFOBYPXRUXDBDLJPNVWQIFFEQRIJWWQLZZPPJOEEKUXUE");
    msg.type = 143U;
    msg.properties = 202U;
    msg.durations.assign("QIRLKZXJGTIURNETCUNSHDMBILWEPJBOAONYUXGQRFUXYWYPGORHURPKDCVGFBZOZJJTNGTCDKTXAAVSFWJLQXSFCKAFKLSCVDMOURDDEOLPMLGNEGNXIFHMHHBJGCRTSGYVKPSCVNOVZWAVWBQLZOQRYZZUQJIPEHJYMDGFHWQVBYIWXRCBUYBDUZCPFNNHS");
    msg.distances.assign("GNRHRMNPGXZFAEIMCVEHBQHZUVTSGXSDPZJKAMUPSJIWTCFVCDIBRAHDGBODOXSFLFMGZUJPNYPJZBTWFOFQTGMSMACNEPSOLKOLQVCNBVEPUWXFNYJAUOKEVKWSECDLXYMPTQEEVUIZSVGDYUTSKHZAYRLWSO");
    msg.actions.assign("OZCBPTWEFCEGQNVREZBVDMPXKOZZFYSPBPJXSVXNHTPBDTAORLATSWXIGCENMRFLOSIUBBYFKGAFBOUELRSWHMZLTHJYOFIXUNBQRNANECIXQSDFTMXCFYCLANAZKIIFRLJWNZOUQKYQHW");
    msg.fuel.assign("KESYTUEOQDRVALQAZHTPLCQNGZUDRZKDYFTLRDEZMFBYLNRXKVUHOGBHPCWSOQJXFOWRAGUWVBYVTGCFQMNRYOXHSGXGF");

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
    msg.setTimeStamp(0.579619539128);
    msg.setSource(20940U);
    msg.setSourceEntity(78U);
    msg.setDestination(53221U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.0257444635066;
    msg.lon = 0.383213887838;
    msg.depth = 0.776783560908;
    msg.roll = 0.588660411559;
    msg.pitch = 0.728187139617;
    msg.yaw = 0.115889622665;
    msg.rcp_time = 0.288446107724;
    msg.sid.assign("NGJUPQFGFOHQSPXWWYBHEZPELANYSFVGCSCYOTGYRJSKKADWVPG");
    msg.s_type = 33U;

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
    msg.setTimeStamp(0.969551223796);
    msg.setSource(23067U);
    msg.setSourceEntity(232U);
    msg.setDestination(2034U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.65738428952;
    msg.lon = 0.845873031182;
    msg.depth = 0.952962657832;
    msg.roll = 0.0841684553612;
    msg.pitch = 0.74966057097;
    msg.yaw = 0.109082377656;
    msg.rcp_time = 0.12894496481;
    msg.sid.assign("XFJEUDAFQHKSPLNVBTKOURNYAIKGVCCHSBZQNAJIBMOCDVBHWYDYMWYDZGPNSASOMRCCEAINQAPGSWHBKMWHRTNGXXWUEDGWUTXECQHDTRLNEUTKCLEVMURDUHGJYTFXMTQOZREVUGEYYMAFULJOBLDXMVJZWRCIFSNFLCRTVSTZFVPZIVPQKKMQWPXYZWBCDSFHRXRJAKKXJLXUOSPFHQGGBKAPPOEJIMFHVPAYNZWINOB");
    msg.s_type = 180U;

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
    msg.setTimeStamp(0.692628249704);
    msg.setSource(6740U);
    msg.setSourceEntity(56U);
    msg.setDestination(64222U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.881623848016;
    msg.lon = 0.214252114655;
    msg.depth = 0.0456406561063;
    msg.roll = 0.799111732885;
    msg.pitch = 0.912482716772;
    msg.yaw = 0.52550345769;
    msg.rcp_time = 0.868317636488;
    msg.sid.assign("YGBLCDXELNFTPWCXODSDMOVLPIEAVEBMLZAOVUKRKJEJUJGVPBHRDIYYOXLHOVHGXTASIXGRAUTVDEUWZZNAQHJTUWDYLRBMANUECMTPNWJHMCTJFKDMAIKCNNFNABGNVGPCDVRWKCFZRLOFWTGRSEMY");
    msg.s_type = 83U;

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
    msg.setTimeStamp(0.101633858966);
    msg.setSource(39765U);
    msg.setSourceEntity(222U);
    msg.setDestination(30628U);
    msg.setDestinationEntity(89U);
    msg.id.assign("DUSROAPCXRRBSLJBIOCNKJWLWUEIRUNSQASCTFYXZKKWCLACMVZBJLYDBHNVQJVGPTGDWUFQXPIQWJQJGHWALIAKTMZXJAMJCUXBLSBOKMFJZYGGDARVHMQNVGMDVPMVRWNKVIXNOOUYFOZZZYPPOHENTDXSPLRMQDBCEYLCIKFHFTRSTMPSJFHZEQHXAKPSSTL");
    msg.sensor_class.assign("WWNQOTKCAIVAPTFYDLGARIEBNAFGNUBSQUNOZNUVXLHJJFNQEBFGTMXYWUOSIKZJWCVQWEACBIACOLWXLFZNUVZBSJJJBSDKFHJYTMYFVQUPQHQGMRKJEGNMIECBMAHPNLNXA");
    msg.lat = 0.682986747348;
    msg.lon = 0.606726487576;
    msg.alt = 0.595376834735;
    msg.heading = 0.88375785566;
    msg.data.assign("FAAWYCAPNKNHDUFQNYXKDVQLOYREVBULOUJCUYLAJPGQKJDR");

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
    msg.setTimeStamp(0.472474190786);
    msg.setSource(39426U);
    msg.setSourceEntity(30U);
    msg.setDestination(29511U);
    msg.setDestinationEntity(177U);
    msg.id.assign("DAKBZVQRAECZTIHXWWJFWKZZQBIPQBHJSLBNLSTPMSMOYFNELORRBITYPQSZACQIRYPFOLRCVSWGMGCIKLVHGUI");
    msg.sensor_class.assign("MPKBHWZDWJLSJWXRKIXISSNJUCQPKKWLLFNAROQPEPXITUZPLHVGIYFCGYEXVMSJWKMAGPVXAOEWEVFJIZNFDAQLIZTOBAZTGFRVHUWBYOSQNQYOADLFWKVNKGYXSLCEQZJHRETIQXWDKSHVATIUCKTHREKYYNHZMFATMJVTCCAONRDBNLJFURGOJMUYQBSREZDBUEXDLFCHXFGRPD");
    msg.lat = 0.44833760128;
    msg.lon = 0.197094951819;
    msg.alt = 0.205450302681;
    msg.heading = 0.914828603339;
    msg.data.assign("HAIYCIOJSNJHCTUVJMTIPMXVOUSIHEFCKDPTXHBPDWMLQYDEYRNHMZZJJURAJDLBMWXBGSDIBYMUUNMJYKDWTKGRRAJKTFANRIGPAZWIXYAKGEWSBNS");

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
    msg.setTimeStamp(0.154787923463);
    msg.setSource(59518U);
    msg.setSourceEntity(220U);
    msg.setDestination(2225U);
    msg.setDestinationEntity(48U);
    msg.id.assign("HZZKCCAXJUWYRSVYLDZBKFIIBLMKDGCIAKIUNLNRRCBZWREXJWNTBMTJDGTQOOUTSZUQVVASUGDWISAFKNBFFYYVGQXYDPWXNTZYPHYJSLMAKZJIQJHTSLZFBPTSONPNWPLFBGQUFDXRZMIGVFDLOMKVFLJWQQHPMLMKDIOTTUVWMNVQDUE");
    msg.sensor_class.assign("ENPRVNGOUCXAACMZPVTOGKDHCBZBWUCEWJUCKFDKYTISZQVEQQFQTGTXSNOKZXRHYMCHVKRBUUIZLBIKAWMGIFRIEUAHLLZMVSPPRNWKXNPFR");
    msg.lat = 0.94708194065;
    msg.lon = 0.721632967186;
    msg.alt = 0.755920053741;
    msg.heading = 0.618446260616;
    msg.data.assign("SMMUGYGZYPPALUKFCLFWABTNYFHSPEOPOWADKDYZBQYXEVUWLNFIKDBQBLXOKRJPIORDADHQJFTMDWQJQEFPVCLIQHGMMJAOSUAONJWRSCUTCSTIZIKNSUKMKVSXRZZEDLMKZGGDATUBRVAEXWGBMOQCIEHWAVGLOUPRNQUCCIYNNINEYETNRFYQTXZXXJOVEWTLZAZHHHPGITCLQ");

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
    msg.setTimeStamp(0.942257254095);
    msg.setSource(38119U);
    msg.setSourceEntity(32U);
    msg.setDestination(21303U);
    msg.setDestinationEntity(8U);
    msg.id.assign("GDMZMLKPSTLGLCYCGQSZTRMJYTBGPIDYHCLQSTNSVBFPTCXZIIIBYSLSXAFAOXZZTZKBUSRJNDURJODQWWKORECKLAHMFTZWHNXHYHQFRVJPJNEPVMXTAWJUWAHQVZBPFDMBPZEQDGEGLEAKIROPSNODVVJNHYBNKUHFXJHIGILEGURNFUYTXQMYOCYVEOFBWWWU");

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
    msg.setTimeStamp(0.806917858211);
    msg.setSource(50018U);
    msg.setSourceEntity(167U);
    msg.setDestination(33758U);
    msg.setDestinationEntity(128U);
    msg.id.assign("TYUBKRBOOCTPBYUKALHSAVFEEQJBCNPGZRALAWJCEKYQIVGDBIGYKZLYMHWUJNDXFPCFOIXFAGWJQJZNESZPFTXMVKGBUYTVMSLWEYLRDESKAGZUHMEWTMNDKLCJAUFFNRBOASYBDJQDZWMYEXCUWNPTJQZSVEVPDONRMVXFTWPTICQKLUVHDFRSDTFOHXRLAKQNAVCBPQGNPJQIOUCSZSJGWGVWZYHDIB");

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
    msg.setTimeStamp(0.234674714725);
    msg.setSource(6212U);
    msg.setSourceEntity(22U);
    msg.setDestination(47468U);
    msg.setDestinationEntity(157U);
    msg.id.assign("UANTCAUHSWFKCKFOECQAWRNUTZEDZIKMZQDJSCTLRFGQYTSZIJOGRFGYDGAGIEGCJFMLAJBLPFMGQCZPBCWRIJNWEIVDVXANUIVWDCMKAJF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PHPJDCIOUWHFMNGVETRBJQIACJJFOESLBACQXEZZMTZQGIXEOKCEKBXREZBDHGAQBVYWOPJYIPWFKFPYVDVHUNIHQNHRUSIKTOANQZPHGDMELNIXYTSNMAWGMWSOHUFNOJUASYGDPHCJPLUCJKEWDQRULSSNQWFVSXELVLYXZBTLDSZMRYCHOAIPXEWYAJGDMZPLWTKBFCOTXGXNRVRKVNABRKOQUDWGUQKVRRGSLCAUYMKTI");
    tmp_msg_0.feature_type = 71U;
    tmp_msg_0.rgb_red = 25U;
    tmp_msg_0.rgb_green = 65U;
    tmp_msg_0.rgb_blue = 156U;
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
    msg.setTimeStamp(0.73722320526);
    msg.setSource(60491U);
    msg.setSourceEntity(254U);
    msg.setDestination(42689U);
    msg.setDestinationEntity(222U);
    msg.id.assign("GUBFUTFTUQZSJEYGZAPPUVSBYXNNAKHKELRNIYKEGSAKWJISPXXOIPZHFCC");
    msg.feature_type = 105U;
    msg.rgb_red = 1U;
    msg.rgb_green = 160U;
    msg.rgb_blue = 93U;

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
    msg.setTimeStamp(0.270674989503);
    msg.setSource(11084U);
    msg.setSourceEntity(92U);
    msg.setDestination(53929U);
    msg.setDestinationEntity(136U);
    msg.id.assign("DZRPFAPGIBCPMMXTJZICVFYLXPMKNQHXGBARWFODAHTKRMJAIZAFUSJZXZEORCACZUJHMBSTGNDTTTKZDSHWDLOVYJUNXEXEAQRYVSWVCQIBFJVMSUVPSDMISFZMBRQJPKLOBMRUGPXNWFOHNWWQHOGIEYWSJYBGQUIPRKYWYEKWUPDEJEPTENBIAFZGSLC");
    msg.feature_type = 124U;
    msg.rgb_red = 221U;
    msg.rgb_green = 201U;
    msg.rgb_blue = 243U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.997875349911;
    tmp_msg_0.lon = 0.708059808071;
    tmp_msg_0.alt = 0.130754399597;
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
    msg.setTimeStamp(0.345176796515);
    msg.setSource(44806U);
    msg.setSourceEntity(169U);
    msg.setDestination(22370U);
    msg.setDestinationEntity(6U);
    msg.id.assign("QCKBEHNJPUFHYCFJOMYUBWBDXMUMCIIJQFYDAWXCHDYWVYUSFELDZNPFWUVRAJKHBRLCLNEWTJPLZEXUMSSDPWPQT");
    msg.feature_type = 97U;
    msg.rgb_red = 100U;
    msg.rgb_green = 13U;
    msg.rgb_blue = 104U;

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
    msg.setTimeStamp(0.945305115669);
    msg.setSource(59963U);
    msg.setSourceEntity(140U);
    msg.setDestination(53764U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.626009242688;
    msg.lon = 0.137529794664;
    msg.alt = 0.110049151262;

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
    msg.setTimeStamp(0.608213205347);
    msg.setSource(42764U);
    msg.setSourceEntity(43U);
    msg.setDestination(9537U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.484369451371;
    msg.lon = 0.940455536165;
    msg.alt = 0.398229495305;

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
    msg.setTimeStamp(0.801259905179);
    msg.setSource(57169U);
    msg.setSourceEntity(53U);
    msg.setDestination(22047U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.820868880532;
    msg.lon = 0.47787551005;
    msg.alt = 0.889789965732;

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
    msg.setTimeStamp(0.521877894874);
    msg.setSource(52281U);
    msg.setSourceEntity(37U);
    msg.setDestination(54167U);
    msg.setDestinationEntity(84U);
    msg.type = 46U;
    msg.id.assign("QSLKAMLUSBYHKOHRTWMNJRDUXYMGFQGYEITEXBIPISFGZKZUIXKHAWILJBHFIHPBCYVEGTPIDOFSFYJBOKCQMWCCIVVJSEOVSZEJRLZRUJAVULCZZPPMJCYYYWXDFWNBHHEDZNOQKRPLNWGWPVFMNQXRZAZNQBLAKACW");
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.699965716548;
    tmp_msg_0.y = 0.934226163385;
    tmp_msg_0.z = 0.133748525392;
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
    msg.setTimeStamp(0.289602845);
    msg.setSource(13510U);
    msg.setSourceEntity(252U);
    msg.setDestination(12681U);
    msg.setDestinationEntity(150U);
    msg.type = 112U;
    msg.id.assign("KMWQHEOWZBZFIDWGFVUGYAVTNSCYSPFZANTEOKBIWHAJOCGGHVEIMTWFLPUGHUJHARZYXDHEBXYESLQMSPEHYFLQAMXEJHPNTAKVBMNUPXSOKLZDQDJNWFYUEUOSNIAVGZWGQIROFWCOGWBYDUCXRMXOTTXPBBRXNZCIIRATDSLPTVJKNPOLKBS");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.reason = 218U;
    tmp_msg_0.value = 0.503683044;
    tmp_msg_0.timestep = 0.242010855169;
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
    msg.setTimeStamp(0.194740590338);
    msg.setSource(34070U);
    msg.setSourceEntity(218U);
    msg.setDestination(35848U);
    msg.setDestinationEntity(168U);
    msg.type = 2U;
    msg.id.assign("YSOCAFUEEVZHRAABXOXKFYTIUZQACEAERBHGDKQYDWKSOPIXKVL");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.664872363553;
    tmp_msg_0.lon = 0.884042299799;
    tmp_msg_0.z = 0.465723993591;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.speed = 0.0750368508448;
    tmp_msg_0.speed_units = 140U;
    tmp_msg_0.abort_z = 0.520198217105;
    tmp_msg_0.bearing = 0.523469292304;
    tmp_msg_0.glide_slope = 69U;
    tmp_msg_0.glide_slope_alt = 0.315250616543;
    tmp_msg_0.custom.assign("JVJXAKPZSFXACSBZJYAEGCIGPNOYPUNRQQDARWOEEKKLINIZVJVSOAZFYYMDXLBCYEBDNIYGDDWMELKDDPGPRSQQEIBWWBZKUGCGFTIXSRZJRCWLXBXHMJOECRHJDPVVFUQNUVRSYZJFORWJBOEOKALLGTBVFPAFXWBTMKXEQEBXUUTGHFNPUYDMAAMSNHO");
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
    msg.setTimeStamp(0.681125266086);
    msg.setSource(29706U);
    msg.setSourceEntity(82U);
    msg.setDestination(40670U);
    msg.setDestinationEntity(229U);
    msg.localname.assign("FPQNURTCQTFKUVNPQYZQVHAZZNMZYQJPLMXLOKFZVRWSFVENKJCMSDSTDTEWBETQSZF");

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
    msg.setTimeStamp(0.266641831906);
    msg.setSource(33427U);
    msg.setSourceEntity(202U);
    msg.setDestination(12337U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("GFTRMWIMPKAWXFQLDYGFJYOSRRDAHIMPCEHBFIPGGXWICOYSJMJPUHLLHJSJSFBWNHETZPUJHINDUGGYNEQZNVVTDACRVVBWTFBKCREMDZNXOMYFWNOQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VARZKNBQGDVXBIKJDQXCNNRJWGAWOINOWZCUWKXMGEGPQQJWHILHWLHLZSZKPVMJAIBXCLEDDETBTUL");
    tmp_msg_0.sys_type = 117U;
    tmp_msg_0.owner = 21251U;
    tmp_msg_0.lat = 0.554207224827;
    tmp_msg_0.lon = 0.208722055922;
    tmp_msg_0.height = 0.875168805468;
    tmp_msg_0.services.assign("ABHCKMRVYTLLOOSHWYERODNLSMUKKKAYHRXTECHVSPBFRRNIPVMPIWVTYRFVFWINTIXAUPFQQTDRBPYQGDHUQYVDRBZCSNOXSKJIUMSEECONECEJHIGAWYWTSGVJFPNEJXMBCJMSQGNZLMTIWZZGDHKVGEXOCAETWAOL");
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
    msg.setTimeStamp(0.620422820976);
    msg.setSource(13438U);
    msg.setSourceEntity(126U);
    msg.setDestination(44173U);
    msg.setDestinationEntity(55U);
    msg.localname.assign("ZVFMXOHJIZSVMNKEJOGJQNLQTBYIYCXEJBLYIZLRSSIDWURFXXPHPHUPPCPCNYIPHGMFPHRNYVQXTFHFCXORALMECEOZVDZNFWUTHIVDWAR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ALKBCILTFNFHONWJQWSHICNUMQQXAPNYUJLJDRKVMNMYTMBYYTUALILEDOZKXRVJZNAEBEAWFCZJHPQAYNKIYTZWXIZZZURQYIUFGXTSNMGVMKQLOGGFVTRCXRTJBCWOQJXJGNBWSHMWMEFQLAX");
    tmp_msg_0.sys_type = 157U;
    tmp_msg_0.owner = 53373U;
    tmp_msg_0.lat = 0.907257087497;
    tmp_msg_0.lon = 0.301862829647;
    tmp_msg_0.height = 0.868684613834;
    tmp_msg_0.services.assign("IZMCMMUNUXQAGEFQMLGZQEUNEOGSUMSTGIACZYWORKDLEZQAFQVXPHJKYUDLUUKXQTMDDLQCNZOLHRYETBACHYQANIHORZLRGAWVJPGWHYXMBAEXIEFUPOFEJWNIIGNGEVVV");
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
    msg.setTimeStamp(0.55047611196);
    msg.setSource(31536U);
    msg.setSourceEntity(234U);
    msg.setDestination(58771U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("SGCZJQRXQOSZRTHNVNFTYLTQDNDKXLWCRPATMTLTMFGOGWKBXZCWWYWHCOYNUMELIIDBFSYABEPCYFSSVMRVZYSARFQCDSQVQVSJPEZPIVZPXAULGEUMHPSOPURNHJGAYBHBVXKLJHOCWIUXJCUDBUIKGYAERFCQLIBDJZUEFTFDIDVLPLOJZSWTEGHMKXVPXARWYARKNMJRIMAZGAOUETOWNEMKELQKXNBDBDNJGZIBK");
    msg.predicate.assign("UOCCARIVXHBZ");
    msg.attributes.assign("EMIRULJTBVLVVBUSTDRPAAPZGSCMRHJXDCICJGKYNBCQOELYBCMEDGVNDXROZKBPRXHXOWRTHYSOXYRELFWQKJAFQSUGRFMQFELQNQAKGFUMNYZCBWHXYHGYAPKFXCOVNPFEUSZIQGHAFGH");

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
    msg.setTimeStamp(0.134545524402);
    msg.setSource(21623U);
    msg.setSourceEntity(43U);
    msg.setDestination(44926U);
    msg.setDestinationEntity(214U);
    msg.timeline.assign("XLZDIPAFWOOKMZRZBNHLBGULKAXWZHHAPCYLFEVAGIZTTHRUQLVFEIBBAHNBSAIV");
    msg.predicate.assign("RWFCJMWEKPESTPAFJHWJYVCEWRVOEJYODCIWQSIFUIGIOXOCNMURBGURVZXSPGZTYSCKSLXXGGRXHPSAZHNCRJOIGZYDLBQBTUVNLWDJFYNAFEXALBDXADQRGCYPIEAQANNCJAD");
    msg.attributes.assign("SDQTDJMWGXXNAVXPGMIDPVIRYBRZYOVWFZLMYGFHUQUXYTTBFYCORJNFBVAEGTCVQSGMJFZIZIMHAOKUNRPXWXVLOCDYDVBEKFEGTBDSCPRLNUVOHQEIQUHPSBLKWROCSEVRDKHUJSSMHKPUWBYAOFQUARZNILIJTWWIKZEJTEPAGOFWAQDCXGEHYHFPKWSIZYNIJLN");

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
    msg.setTimeStamp(0.212142505408);
    msg.setSource(45785U);
    msg.setSourceEntity(133U);
    msg.setDestination(32555U);
    msg.setDestinationEntity(184U);
    msg.timeline.assign("ZGISVNJZQWRCPHFVWWONIXJYUQNJFKOGFRZNAXAMRNEOFXAJXCZUKBVYHGEWSVYPKRZABIUGMCZNKKXRHLLPCDEGOATUULRMIQBGELTEWVSBYXBDSZOHLDINLCMARMVXTCHICPPSPHWPXVGPYJFFQFPGDHHQDVRCKWJOJIDUEIYESMBWUAFTHYTMDBMENSATPQHRNASTLSUGBMXKTDAIZGLYJOQQUOBECUTLIZDXK");
    msg.predicate.assign("KNTIGYVILSQNCMJTXOQQXUINXCUFZFPFMPJUPLTJMLFUASBADDPNSRYOWHAQVFIMAWNJTHISFKALPUPJRHNYGCDUDEGHEDQOKHDSDYWJBBMNOUOEBNEKQHGLBBACXWUHYDCYYIVKWSTQVLEJGORKRGQXGVTCSXMBANKUURXFETAWTKTWPVORVPSROZGYHIZHIAJOEHLZISBVZCEJWGCJNTDVZPLDZESFQAWLZFZCMRRZBKMVXYCFMXYQRKG");
    msg.attributes.assign("DVYBUMUOEHLXBAPRBKYHRARJJLCFETXQEDZFICAIEUJFVWFNHZSLQESTZXCAKPXFOKZOMKNNRDKVTZHBGMQUZMAWBVSQEOAPDM");

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
    msg.setTimeStamp(0.752717203492);
    msg.setSource(34981U);
    msg.setSourceEntity(205U);
    msg.setDestination(34443U);
    msg.setDestinationEntity(236U);
    msg.command = 57U;
    msg.goal_id.assign("WXPVVMRJSKXLHJRLARZEFVAMLEYYFROIRHYSKRMTICYOAXEDUIAIHXWHNCZLITWNSVBPFAZOFPAUUBMKRKXVMBQBQCCCLOCMPZZECLBKDFXKTIYHNHZXPENDOAFTYEVDAODWQXPBVKRWJUXRCJQZSGZTCJQKIWKEDFUHQDSQNEGGPLBKABJLTUTUANPZQYWSMNHSQJRIPPUCGOFGTWTTSBNMYFIGJJGXDNNDMUJLVWEOSVGOUFYWSOHYQD");
    msg.goal_xml.assign("HCDCQUZQCYZWHPNXOQADOHBIRWIMBMOZLRENUURHNTLP");

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
    msg.setTimeStamp(0.206104725938);
    msg.setSource(3906U);
    msg.setSourceEntity(106U);
    msg.setDestination(58984U);
    msg.setDestinationEntity(154U);
    msg.command = 107U;
    msg.goal_id.assign("PNVUBMKZFSQFUTBVXINCJQPYGDOHREDEJECGVWWNVBUJTTBFPRHJGYDEXSRFLRHSLZLZEOJCKNGIYCWDBLZNJYFALUTIPNTKUPRIFDURTKDNZIKYFRPZCIRPWHOSDAFVWIZEEBRSSLVMEAHQTECMCFWLGJJAXMHXGNVRZMHXK");
    msg.goal_xml.assign("SCHNEITGFLLBWIHCPBSFGRPLNRKIIEFYSJGRUCJIXKYSYQBHXTDNDIARWRXCMDSYKPAYMHOSXWFHOUZWLVOZWWGMEZQMQSAALAUPFGNXCMVYPJNTJBQYGUIETBJYZIWBNWYRIAOQJUZOKQHCMDHFYXTHPZBDAJPKJVLZDURGKUKPTFBXOKRZTOEJKEOXWFURCGVTCDSBQ");

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
    msg.setTimeStamp(0.496507362589);
    msg.setSource(2766U);
    msg.setSourceEntity(5U);
    msg.setDestination(56649U);
    msg.setDestinationEntity(66U);
    msg.command = 240U;
    msg.goal_id.assign("MVANXLRRHME");
    msg.goal_xml.assign("IGYKYJAQXQCLEFWWESPSUDIGRHNNJZVEXWVFEQBZCJJXMBQAVTWTCVBUDKLTHRDQMVPBZDABUONHSLFNEJIHCRYMYSATTEYLLKRTFMQZRLNAMMFTXWUZKQWOIPJASPSIYBBYJLQK");

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
    msg.setTimeStamp(0.479713354767);
    msg.setSource(24260U);
    msg.setSourceEntity(166U);
    msg.setDestination(56226U);
    msg.setDestinationEntity(119U);
    msg.op = 109U;
    msg.goal_id.assign("DOYZTJGFRTVTTZCQYNFXBXMYIRFGGNIKFTMUJLHHQQPLJRMXRDHHEPGLFMSOMHDAQYJAKDLCXYHCUWRMMVJSWQNWZKQNVCDUTXLVCNOAZJNEPECTJBMMTUBSPDIWKOBLDLAYASBWPCQGEWBBGOEZWETAGXOSYSAIPWYZVFUEQUISQKJZXMABTZHHCBVGQFAPDXNCWNULO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YBJVLENVCOPBKTVDGTHUOMABRQVRXPFEKODBEAVDVNHKETJOFLSCWRXLQMRNRZFGFQIEXWKHAAUYQSJSMPRJPYHNHZGS");
    tmp_msg_0.predicate.assign("FIXFMCELHOJCSRISRIBJYGJBRQARLBEBIMROMKWOCLSGVOUXPJHTUSQFFVNIWIHSWMP");
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
    msg.setTimeStamp(0.42514067376);
    msg.setSource(54944U);
    msg.setSourceEntity(213U);
    msg.setDestination(38394U);
    msg.setDestinationEntity(14U);
    msg.op = 244U;
    msg.goal_id.assign("FLRGRZATLZTPZPYEQJHVKARNSSL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HKAHAYUYKQTVLZLZWMQAMGUFJHOGLWFEPZSIJYPZNDZKIFCIUHTKUEWENKYLVDRCVGQJRDRTXZKUIOVQNBGSNNFJWEVYOTXQFMXGPVTKFEANOPSCLPSMMBRXUEPWAUOLFBOWODDYGATZASBFJOZQPWGJOBWZMRBMGPMHJJTNVYCLQJSINESRSIOYAFTBHHVXBACYCHPITRPIQXAVLRXU");
    tmp_msg_0.predicate.assign("MMFEBZKVHRAPXNTULEIIXKCCFMPFSQWGPIJCDGMUZMLTNJKVUKDUIAMSLLXUETHGSWHOXDBGJZYPFPNWGITQBWYCKIVXXIJENEGSEMEIVQZAGUBFYUHAALORVALVPXNVIDDAOAKYQHJUCSDSDPMNANCCJBQWKGYMOXLBBYS");
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
    msg.setTimeStamp(0.79455438363);
    msg.setSource(60956U);
    msg.setSourceEntity(86U);
    msg.setDestination(55504U);
    msg.setDestinationEntity(87U);
    msg.op = 241U;
    msg.goal_id.assign("CGIWJCAZLCQIXWKOGVKUCTOZLOODVYZETWTHMMPSRGVPOHIFFADJXDQLJKWJMXLMEJBWTUXNYTZDDZXKGMRSHXAFEJQYESREXGBNDSBUKFFFYZZDKRVVJGCGXCERAJSYRFNBHBSWZPITXANKBLUDPNCSFQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CAUIFKBCJKRVPHOMYTUHWAAANFKSLRVUPCROYLJKULCNGDUMKXQZLZIFTQFGBTMYQLWDWXCXZUQQIRGEZODHJFYNGPSDTEKHY");
    tmp_msg_0.predicate.assign("SVCAQFMZGHFNACCWYZVSEBZVBNLCAMIFQDVKZSTFQOXXYVTMWARRXPUZSRIMLUACWUYHXOJUOHQHLGECJKLIBIQADMBXNISPWPMIATADQAYKTNFZNVEMPKNSRKSWXKUZYOUYLCQGREKULQIOEYEYMEQFYOHSFGHZTPRWDXKDBOKDHZILQXRTCHJWPPLWEBOJIMNNIGUPRUGCWNZJDPJKRVNCWXJTTDXOEHJGOFBDGMDJBLSHVETP");
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
    msg.setTimeStamp(0.342717507849);
    msg.setSource(60787U);
    msg.setSourceEntity(171U);
    msg.setDestination(17073U);
    msg.setDestinationEntity(64U);
    msg.name.assign("AMHNAEVXYXKHKMPTTGJTRHNUVRTCJPOQICEPIXWGHXDYW");
    msg.attr_type = 23U;
    msg.min.assign("UCHKSTCSVSSJPTZVZXPGNMGKOQVEJPIKYQNOSMZZXISBOKALSLYYMDHZFKDHJGCSYXPQBTACCQQRXLWRKHAJZJEYUHHIAALGQPRFEBUUUPNCVEEWBWRHINPYNGDBEUBMFCNFQVGZILALJJHPVEWABWTRUWTVWNUXXABVBOOJMC");
    msg.max.assign("CKEPINZGDWSEVBLHUVKUDGRQBRPAPYNCHEZVPFXDOB");

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
    msg.setTimeStamp(0.740836158976);
    msg.setSource(65460U);
    msg.setSourceEntity(169U);
    msg.setDestination(41627U);
    msg.setDestinationEntity(234U);
    msg.name.assign("OHWAJBRBBRJOETFGIKMEKLKCFGDKRBWTLIBWWEAETGRAOTNRZVVILLEUDDZNYPLNJDQISHJNMHBHRGXYG");
    msg.attr_type = 59U;
    msg.min.assign("KVZKAHVQDRSYGMJTDWWTSLVEMCTVFALXQBXOWGABKBCJQOJSZTGRYIFDLCMFNFFETVHUTIAIPSVZBTSRNRMPZYLRJLOGYLQVGYWYRABUCUPVJIBFDSEJQHNXRWGQKEINOHAXFSNIZBGFWVNOMDKZFXQZIJSAEHMEXYHMMQUCPWXENTDIHOLEOXZHUDHZUOIKJDRUUSCAQKLWEN");
    msg.max.assign("LMMFNRULPNCTOFBZXCIJOLYPXXRPWYESKXDNAKSPPYFUZLZOQTKYMIJUNHVDHUMWMGDXIHATLZQCZLZLAECUYVHMI");

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
    msg.setTimeStamp(0.387702452582);
    msg.setSource(36108U);
    msg.setSourceEntity(63U);
    msg.setDestination(43449U);
    msg.setDestinationEntity(224U);
    msg.name.assign("JXBOXPBBTJNOAVGYJHDHCREYCAKJNGACAHOBTCRXNNPVWHRTKGEGDHBLIUIUJOCVJRPQMSMENOAIKUWCLHGUQQZIWWGNQEVZDRWVXLBDTNCAPTYFOASEYWRWLZFWHTMVZJFIUFYARMGTAOSDMPSQLDY");
    msg.attr_type = 104U;
    msg.min.assign("HWMHPDGWFPXIBMHRCNBELSFZGYDCEKPDNIGKGPJCMOVOVBVBFJPLQRPSWWKEIGFBSVLXQYNZXSLLJJXFBINTFAUIQQKZOFNTZCOKMMUUVYLTZVUJBCVRTZKWHMQKSERSZALHUDYYQIRLRWGHUBYQZZVACGDPBJMREHTCPBENEXJSXGOPMIYFXDTCYAUTDQGSMOHCTQKLAPNKDSKNANRYVAHLNR");
    msg.max.assign("FRVFNFQRFXXCHVAIJWLYBPPQDOQEMBZTRPNCJRRIGHLVHHUVBNGEOLDAUVTJKWMDQLQJHAQIGIMLCUCFOQTIKSKPLBFUESVBWULGSZHBGPSYXBYMRO");

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
    msg.setTimeStamp(0.542150203425);
    msg.setSource(42761U);
    msg.setSourceEntity(37U);
    msg.setDestination(39271U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("ZGVUQVWWBWFZZZYRCBTPHAMFDSJQCBJUFKXYLEOFSNHLFJDUNWUQDFLTDGYMXIWTPKJTRANOAKUYRIVQFNOYKLPAAQPHUNCSREGSJLHLLSWBQOAGHVYOIETORPZCIJSGIPFOTMI");
    msg.predicate.assign("IEVZSGGQWEUAWVIPBVAOTBGAYSJTNIYLJUPQLTDCDUSOIABJHKKNWZJVTEIYDHZARXAWFJCZEZQXRYPMEDMQYOHOGLFNZANRJMPFZYHAHVKCBBSMSFCXBWCRDNEFHZXZXGWQWDFHKSHMRLIEQSWJNBKBTAPRPMNLTZPFSWOILXJLGPGOLMURVTMUIKTQBQPWLTDYHPDIOGQNUVGYGCVJRCFO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FHUOIVORXZMJBAHPKUPNIQENBORYVUADRJLDBAUCIQZHLLYEBXGCKOWTBPS");
    tmp_msg_0.attr_type = 4U;
    tmp_msg_0.min.assign("QLUZXYYVDFNLYYEFTKJKHZWYKODEEUMRBRCAGAGSNCDHCGUJHBDQMQICUNGXBNHXUGINJJG");
    tmp_msg_0.max.assign("QCUSEQXAKPWEBLZXBVZHGQZMMMZDEKCPYIWGGUGELIDWYEBKANFIHRIZSAQOCYSCDATUHYQRHKDGBTFZNQDMQGACZNWNNKRJRIUQCLNE");
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
    msg.setTimeStamp(0.371759601668);
    msg.setSource(48167U);
    msg.setSourceEntity(72U);
    msg.setDestination(4528U);
    msg.setDestinationEntity(173U);
    msg.timeline.assign("DNCWVYFMUUDATHEIJQTGUZFDOWCAKKCNHCODLVOWQSPRYGSXXPBUWBEGEWRNZJLDYLWQSNJKGMYSFLJDZHAIGIBRENYWOLQSXXOTNAMOHYRDAADOAIWSIVXSXMGLVVPIPTPHKHVMNSWTXQFAGPRJPHVRXOEQFMNYVEHGSPZICABKKKYNQULQLFHJWQRJEAVZVZXBLNPTRYFICO");
    msg.predicate.assign("TRZYHXAKXCCIXRHGDBGYPAJYENWMOPZNMXFEPOKHHZZCOTVFISXRTHRLZGHBRPSHI");

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
    msg.setTimeStamp(0.124147771397);
    msg.setSource(62017U);
    msg.setSourceEntity(122U);
    msg.setDestination(6029U);
    msg.setDestinationEntity(118U);
    msg.timeline.assign("DMWLZPIRUMBDKGZBAEOZSEPAWEYCAARMFMIYNAEHYGSSPKHSABQBGUBCWPKSBDNZDAIZDBJNRQRFFXJQJVYJMLKRVVGGCUGFYJTWPWPNHMXZCCIXOUYWQLKVIOTS");
    msg.predicate.assign("SINXHFBJXGKIKWHSEXOPRVFTCUAAYPJVVQLKCCCJMAHGPVOXHTGFQZAQZXNTQMHDGPWBBDWPBYITZXKEVPMDEEITFNQWKHEMDYBENZJWBINEDOYSOWWFPRVQRVIQASMUKKL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BPELVVBEEFTTMASMKNNDHFMYXACUAFHAZQZJNWRRCCPHIHXNYSFAMELCFWTDUDDIKMAIQSDHBIBGVXJRLFUEKPWPUINHTGXJRPAGVKCKPOODUGJ");
    tmp_msg_0.attr_type = 147U;
    tmp_msg_0.min.assign("QENYOPMNGLPLWCLKZADHDKMUJIHBPJQSDFGOVYKXDMGHLNGDXCSAH");
    tmp_msg_0.max.assign("UIRGKVJDMYWNGHMUMGBAAOCHVVJLQXDRCCFJFROMQBZRKTQO");
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
    msg.setTimeStamp(0.995636041565);
    msg.setSource(53484U);
    msg.setSourceEntity(176U);
    msg.setDestination(17736U);
    msg.setDestinationEntity(59U);
    msg.reactor.assign("VYLYOGSZNBRNT");

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
    msg.setTimeStamp(0.716823591312);
    msg.setSource(17979U);
    msg.setSourceEntity(252U);
    msg.setDestination(50668U);
    msg.setDestinationEntity(250U);
    msg.reactor.assign("VXEIELFLWJTVSITZMGBVIRBORQJDKQWBEDCOAXORZPOBVDSPEKMVPSTJCDLOTUONJGAE");

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
    msg.setTimeStamp(0.96559351552);
    msg.setSource(8662U);
    msg.setSourceEntity(253U);
    msg.setDestination(19947U);
    msg.setDestinationEntity(227U);
    msg.reactor.assign("AFANSFIFXSEEBJVQHYOINRJRYQBCBHLYHWPPEQRCRFKVNSIYEGZKZXMGDOWQPIKCNHWETWIBVNDHRMOWOGZKNTOHOLVJPNLJWLAMWSMZPUKAKWXAUPCSUUIHUNCCBYRYSBBWGFNAXVLDTXBNTQDWTCVOTYRSZDQBKZQPXJUVELLDIECAMOXZHATJYXXDTUMQVLFDJPZSJCMGASYDUM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OUPYMMQRXJYXHMFNJETXTNBTGMBMNHFJFBALVTGEMWPRGLPAHUZNOPWMWBXSJLHWPIDVYFUGBXKKOTMIRNCXAWTSVVNVYMRNEKIPXEIXHQUECZZQUVOUYOBYBGLKQTDQIPODUJXIGSSYHTWKCEGVZFFJTFDDASQZDJZAVNEKCQJLHYGRQIFWSSLIEMCWKQUWXTCGOVHLVASDN");
    tmp_msg_0.predicate.assign("BTTAZZVCXWFCQWNRJQVVHYKJGILZAZMSXIPJQMPVYGQFBVEBMORYPNSREQMOQLBWUBMXNADERTRHDRUGUDUVKCWOUESLTHLHTLNCUOQIIOYPYANRAKPDVJXNZSSGCAWAZLESMHTBFEIDBBCOGUWTHABDMLWSCRXGFAZVUWIYDJTJFLYHHQNFUKNHVZYMSHQRIDEKFFNFPOXPEIKMJOGGKLXJEYBFAGSWSCXIRXUPYV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JWNKTKIYPQYALVRRNPDIBEWCGZXWZCALNLLCWZJJSDSIRGBDULZPODBVKLCOYTPEKSAHIFVYDEJHRQDRFMOLSDXCZQMJBTCCZSQKOLUJXIXQVVKYGWHXGCRQHCTVGFUMQETHSPNMJUMYXPNZPSZT");
    tmp_tmp_msg_0_0.attr_type = 18U;
    tmp_tmp_msg_0_0.min.assign("BFEFHVMVAPLGZHMYNFEZXMXJVAJXYRZEAJYNFFRJHKJAPVXLDBIACODCJNKJBQLJPTGTLYWPYREZHDUDELLPYGDVOGSUKVOPFGIBXYVTPUI");
    tmp_tmp_msg_0_0.max.assign("UJVTBPLBBMORUFYRGIDOYFZRTMNXIOQEKHKUDTEFRQQQIOBBMLSMINALXUDBGUWBUZJIAPDHYMIJFNKMPJFDPOLHDGUPWAWCDJXJOBCRSJTSTSYLOGBIIQCZSRWYZNHQTOZYTEWGUVFGKQICVPCZKXPFHFRVEZEHTNHPVCALUKKVZUTDAYNCHSMASMRZNDGWMXXKQMRBFWRJNZSXWDSEVYXEASGCEVLLWJGEEVPVXGKFHATOOCNKHQWYQC");
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
    msg.setTimeStamp(0.782513212911);
    msg.setSource(44643U);
    msg.setSourceEntity(15U);
    msg.setDestination(8662U);
    msg.setDestinationEntity(77U);
    msg.topic.assign("EWSCCRVSCWXWZSOPHFJMCDRRFKTBPBNOXUJLTEQWHVLTQIEKHBFDDDIKEYCZVFHKUVUAHLTTYKNQISGBSSOPRXSOIMOZALDNXKJHCFEZMUTERASUDQOLGWAQL");
    msg.data.assign("ZCXNICSVPFXIMKYLTTQFKMLFRJKZMISUXISAQIVYGYWQVZDCUIEHOSMCHYRBDBAACPQDRRKJFXYRAGPOMKFQZCNHGHRPYTUMSPFNRZQDWLKDOXPGQSIKVEQOELRJWWSXINAOANTDBQBT");

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
    msg.setTimeStamp(0.560275484918);
    msg.setSource(60928U);
    msg.setSourceEntity(218U);
    msg.setDestination(46561U);
    msg.setDestinationEntity(217U);
    msg.topic.assign("QXZALXXIHDUSAFSYUFJPIHRFAXGPONYOQ");
    msg.data.assign("HYIMDUFDSKVMAXUYBOLJPIJHZCOAEBTWIBOOPLBNTNBBKONPTMGMTPVWQVDXLYSLNFECYTZPJTTGAUCYNHQMWDUWUQFQDRMXAXCDZTFVRZPZSWKJDPDRRFGFKQQSGVFKLEQAONJNCCJMRTAWCSKZHKWMUDZAVUGJSPGIUOVSJIPRKOSJFAHHWNUECNIXRVXZCGNRJESLB");

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
    msg.setTimeStamp(0.0788722146055);
    msg.setSource(40993U);
    msg.setSourceEntity(34U);
    msg.setDestination(38418U);
    msg.setDestinationEntity(175U);
    msg.topic.assign("GEZJPBBREVMZPPJKWWRQTWJNWCUEXQAPQLZSEJZAPFFDRQHVDHJCKUWOSRFBFGIMTZHNCOVIXFAOO");
    msg.data.assign("GQQJLRGRBUUZRSLCOCSLUTXROJSKRRJZZWOJHNTIUBKCGKPEEYRQLAPIASMOFODIIMEXTWHNJPDIPKW");

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
    msg.setTimeStamp(0.165427330302);
    msg.setSource(10134U);
    msg.setSourceEntity(49U);
    msg.setDestination(48191U);
    msg.setDestinationEntity(44U);
    msg.frameid = 189U;
    const char tmp_msg_0[] = {13, -112, -98, -49, -58, 57, -120, -21, 4, 79, -60, 41, -93, 33, -66, 20, 124, -118, 108, 92, -23, -112, 108, -4};
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
    msg.setTimeStamp(0.857774967568);
    msg.setSource(46298U);
    msg.setSourceEntity(27U);
    msg.setDestination(40449U);
    msg.setDestinationEntity(175U);
    msg.frameid = 44U;
    const char tmp_msg_0[] = {-52, 44, -35, 36, 42, -76, 118, -99, -70, 114, -70, -56, -109, -41, 87, -30, -34, 67, 122, 97, 40, 57, 46, 97, -66, -23, 28, 75, -18, 33, 104, 102, 25, 67, -42, -74, 48, -85, 50, -109};
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
    msg.setTimeStamp(0.742856443169);
    msg.setSource(22472U);
    msg.setSourceEntity(225U);
    msg.setDestination(46564U);
    msg.setDestinationEntity(98U);
    msg.frameid = 220U;
    const char tmp_msg_0[] = {-47, 123, -99, 90, 58, 112, -95, -99, 26, 97, -2, 115, 1, -100, -57, 84, -116, 121, 50, 24, 12, 115, 77, -120, -113, 85, 66, 79, -57, -84, 84, -16, -6};
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
    msg.setTimeStamp(0.217988955816);
    msg.setSource(4335U);
    msg.setSourceEntity(77U);
    msg.setDestination(3980U);
    msg.setDestinationEntity(178U);
    msg.fps = 176U;
    msg.quality = 147U;
    msg.reps = 79U;
    msg.tsize = 46U;

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
    msg.setTimeStamp(0.474216439346);
    msg.setSource(51944U);
    msg.setSourceEntity(224U);
    msg.setDestination(27148U);
    msg.setDestinationEntity(231U);
    msg.fps = 138U;
    msg.quality = 148U;
    msg.reps = 101U;
    msg.tsize = 152U;

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
    msg.setTimeStamp(0.983725879867);
    msg.setSource(6894U);
    msg.setSourceEntity(237U);
    msg.setDestination(48500U);
    msg.setDestinationEntity(81U);
    msg.fps = 254U;
    msg.quality = 105U;
    msg.reps = 203U;
    msg.tsize = 157U;

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
    msg.setTimeStamp(0.726646429372);
    msg.setSource(29270U);
    msg.setSourceEntity(64U);
    msg.setDestination(48109U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.904696518421;
    msg.lon = 0.579159755366;
    msg.depth = 168U;
    msg.speed = 0.0110498046321;
    msg.psi = 0.194678547152;

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
    msg.setTimeStamp(0.0145064383395);
    msg.setSource(26863U);
    msg.setSourceEntity(75U);
    msg.setDestination(27162U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.431990040694;
    msg.lon = 0.769153858505;
    msg.depth = 34U;
    msg.speed = 0.511543371464;
    msg.psi = 0.675314099699;

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
    msg.setTimeStamp(0.304871471882);
    msg.setSource(25383U);
    msg.setSourceEntity(10U);
    msg.setDestination(8629U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.423447362345;
    msg.lon = 0.531339071964;
    msg.depth = 66U;
    msg.speed = 0.151049213163;
    msg.psi = 0.763660123556;

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
    msg.setTimeStamp(0.78848041587);
    msg.setSource(4650U);
    msg.setSourceEntity(158U);
    msg.setDestination(24284U);
    msg.setDestinationEntity(5U);
    msg.label.assign("GCEINTOKCVYDKTLFWQRJLHWBKZMFTGZRGLBUZRVBJAWEPOMOMIIDSNRIVHGPRNTQADIKGCVJUNASYWZBELBPPHZLWSUMLCFCSPLPDT");
    msg.lat = 0.530647452217;
    msg.lon = 0.928754857327;
    msg.z = 0.0562160501318;
    msg.z_units = 91U;
    msg.cog = 0.296604715406;
    msg.sog = 0.591498500742;

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
    msg.setTimeStamp(0.509817047908);
    msg.setSource(44330U);
    msg.setSourceEntity(161U);
    msg.setDestination(13558U);
    msg.setDestinationEntity(245U);
    msg.label.assign("PLDNNXCWOLHPFTDJOQMYWKGTKFDHWRUSHTYJZGPPIFXGKRHRMIBIJNQLXLTBTJQNZSIDUOTATJGARVKKIWQWORCEMVTZHOUIGMELYVAJXXDUUBYANHZKGLCVCNSESBLAEYEGZQJXGSLVDRSLSZUGCTZHFPXEMJDQCOSGVZYCSVCOMUIWKXYBYWHKMBRWUCWVLXQKNPUDQSZAFIMFHZFFOYNDEEX");
    msg.lat = 0.674820587367;
    msg.lon = 0.209251961126;
    msg.z = 0.498229161929;
    msg.z_units = 227U;
    msg.cog = 0.350975789406;
    msg.sog = 0.85911026945;

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
    msg.setTimeStamp(0.804671898078);
    msg.setSource(44015U);
    msg.setSourceEntity(52U);
    msg.setDestination(27810U);
    msg.setDestinationEntity(235U);
    msg.label.assign("DWVALGHYFNUHEPYYXMRQABNL");
    msg.lat = 0.595280749843;
    msg.lon = 0.479358100737;
    msg.z = 0.325423051296;
    msg.z_units = 200U;
    msg.cog = 0.279596923239;
    msg.sog = 0.354811102803;

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
    msg.setTimeStamp(0.418909852033);
    msg.setSource(54994U);
    msg.setSourceEntity(100U);
    msg.setDestination(59794U);
    msg.setDestinationEntity(133U);
    msg.name.assign("EQRANKFDDMOKZRVHNYLRACRNVBFZH");
    msg.value.assign("INVNWMMGFKPSQSLAXRUQNHVAQPYHONJCJHGIMJYMDRWFLBNEXIQNNIEEGVQDJAUMEWSABGPUJKVJQJRZRRKKLIVWZZMSDTFIVCDKOEONHGMYKMALFBDUYSCFRGDKNFBPXOUAW");

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
    msg.setTimeStamp(0.472024161035);
    msg.setSource(50431U);
    msg.setSourceEntity(10U);
    msg.setDestination(62342U);
    msg.setDestinationEntity(97U);
    msg.name.assign("BWIEQRRUWRHBWXTNKFXERFTMJAONJACXPXFFNKRDBJTQNYPQIPYVIFXEIMZKCBTJCSKBPHXNSDLRXKVNSC");
    msg.value.assign("SQIZJNDLRTISECFSXIRQLAQUBWFVPLXKHYVYMHZYYVGIZVOSSZQKEPAXEFONCKTJATCBGNAEQLYRPPPTEPDADGKHUVOUTCACLDBBWMDEMNTJOKZLYKQBSYTNWFOFBWDVVUIXSRUNUJWBAMNEXKCN");

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
    msg.setTimeStamp(0.349631974567);
    msg.setSource(18618U);
    msg.setSourceEntity(196U);
    msg.setDestination(47667U);
    msg.setDestinationEntity(115U);
    msg.name.assign("LPXNWPZYDTYDZKGASNNVVZITMPMBZKUTFAVYOJFHQQQJIACLOKMHMFUULSYBPRRIEKCNCUHGZKFETNEHPOLTBKMNSXFTOGXMNEZIXQJDTSSOJQAKXBQJLQMRPWIHNRURNLSOGJZTZFKDWCOGXAKLJVGGCPCEGXEDZWABYHARLSVJEEBXYDCBUZYWOYCTM");
    msg.value.assign("AUVJZEPHHOWQZVIUAMIZNWIRSEGGGXEOFVDFSNQVMDEXKTMXXBSSTEWPNSOICXUWIGXQQJRURYOAPVHVDPOFUNBQPCQQSJKGBLLRLPMKURNSJEIHEFTBNXWARHLDFLYMBOKCCDXVJCQTDYARNJUMFHV");

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
    msg.setTimeStamp(0.518827492777);
    msg.setSource(31200U);
    msg.setSourceEntity(20U);
    msg.setDestination(45438U);
    msg.setDestinationEntity(114U);
    msg.name.assign("JKOFSCDTJWOLLDGLKWCFMTCKQHCHUFUXLODDIZZB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RZAEFPNIERKYDMLWLZICRNUVAWHQJXUVYIJOVQOSKSJYDBEUBASZOFPHEAPLDUYIJCPWMBDXTCTDTBCMQPJANECJQQGRLCAGKLLSXDKFIHMQWDMUJJKBSHIXLYGNTYEFCIITJWOAGKGNXDOVUYZYSPIOAZTTZUTFOGGDYPWFTBNBHBWPOSMVNRRHOXGMWMAHS");
    tmp_msg_0.value.assign("QVITODEJIRYTBIDEJECQGKRUJYAPHBGHZILZDGRTDHPHFOETTFQZEKKALXORRQXROBWSNFAMUHZMYNISWAEZOXLUKVLGPXNFSSNYIVAIXYAYXJVNFQNFHQLXOMTHDUHGTQKWMPNLBTEUDQCDFPJPFZJAKMQPNIJCAPZWCZGXDLTBYORWKFSMDRVBCCKUJBVYWNBCUXVCMZDEVWMSIWJLW");
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
    msg.setTimeStamp(0.284263728912);
    msg.setSource(35139U);
    msg.setSourceEntity(244U);
    msg.setDestination(15380U);
    msg.setDestinationEntity(151U);
    msg.name.assign("PXBVDPMJLIPCGABDGPKIBLZDDYQZYGXSMWKESVXTXTKHWPQBZBTDKN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZMFXYHEDIYYPONWHEOJMATFJGWHZDDSOGKQPSPRCQEDGOKNKDXPJRTKZMBJKCCIOAOHZGOIGZBRIHWYEWSYJIKWEJLDUVTUFGLWYSLALAHYIENNTLZWWBRWYRESUXCZXRYKTIXXBQJAJUFVQPHNXYMQSZZCSLMOMIANILCMVTDCUULMGUIUVSTNVQAAHVRKKPFVQBRTSTPSXO");
    tmp_msg_0.value.assign("ZHBYNCTORQPEIQKKAZVPBKIAAJAJNHAVHSMGXASBCBPGEULZHJQHPSNUWCXLZZUXCOXRWAYCYLOKMTUDISGDGVFNVNSDJHABFMCQXOJAPQSWE");
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
    msg.setTimeStamp(0.15427326331);
    msg.setSource(62627U);
    msg.setSourceEntity(134U);
    msg.setDestination(19957U);
    msg.setDestinationEntity(194U);
    msg.name.assign("JKMHQXCBGYBJJEKKQVIUSRPXVVHSFRRTTKDXMCNNNYWDNMLZFBSPFIAQTHMXAEZOZIYTMLUGRYLGRAOEDTTRHEXRYNWFHGKRCZIQYULSWVPWBUSDJQEUGANSWXIZXBOLXAGIWTBKCDOFOCSMZHORUPYAQVCEFKJGHCXDPFYZOMIYZZVKJLCNMWNAQKBOWPEEFYFMBLUUUHBWRVQVCQINVISBAQSWVTOADGDHHLMAJFETJXEZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VQKSLQKLPCFDSPCMFGIWMBTBOMNYID");
    tmp_msg_0.value.assign("IOFYKOVBSSOAQYKJZSJBGGAFQDTIJWFBUXXYCACNUVBXKXIUVKPPRWMDAHXRJQNZPTJCLDPRAVIGKIBAEDCYBWMHXESJ");
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
    msg.setTimeStamp(0.220927161843);
    msg.setSource(6053U);
    msg.setSourceEntity(69U);
    msg.setDestination(3884U);
    msg.setDestinationEntity(53U);
    msg.name.assign("FGEFRXWPVBGKXSWZELRMRKWUMYDFTOITPJPPPBYZZQJTMRFBNRTSCOTO");
    msg.visibility.assign("GSNZYEBWSWDCTQQFIAWALHYHZRVBZHAVILDJKXVOPLQBWKUCYJSKZYNFMAAICODQRLF");
    msg.scope.assign("FQNNKEMUKFOITXQXKWFHXJPPWUJSYZGRENLYIQXVMLAUSYXOBEOIYCQNEYMIBKGAVCYQZWUUWXGGSSFRZDIEPZUBNMMQRQF");

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
    msg.setTimeStamp(0.589850243401);
    msg.setSource(47062U);
    msg.setSourceEntity(232U);
    msg.setDestination(38831U);
    msg.setDestinationEntity(10U);
    msg.name.assign("CLGCEHDMVSMQGGGXKMRNEKKUMQKJXBJVZWSPITVZOLCQWTZUZSCFAEMGNUN");
    msg.visibility.assign("KLKJHEPNUAELMEUWVCQDWNYZGPBZPXHINYYALGXDACGBLCHTFFMREJNOKAKXFAAGCBARNJSGM");
    msg.scope.assign("LCPLOEEQDMHZDYMIFEOCXWUHXTDRUNOITIDETSEFSBPFGSVAMFFXQVPSRSHCYGLLKIROROHLOYVNNULMHICGZMAQNGCTQSYAJEVOGYUUQXGMGBJBBFCHWJFBJPAIMJBBKWKQAXXURWUZPBXPWCMQYIPANNRSYWEYUZOZVELEKDZMIRZKQDXWTEAVFTJKKLKNMPHJHYHWKDRCVTASJGYZQLNTNVD");

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
    msg.setTimeStamp(0.27468357906);
    msg.setSource(40714U);
    msg.setSourceEntity(252U);
    msg.setDestination(51184U);
    msg.setDestinationEntity(230U);
    msg.name.assign("OVKPQXDHCXIWPJOZNRMOWEVWXMUZTGJIEYONHKDGWXABTYFCQAYUMUELTFEMVQMYGULBHHXFVWNKEALQGTHSOSZODMHBCKQKUTGORKZDJBFRZGNHJPSEFTBZEYOURYCTHQQRZDISUDGDZAQSMLWBYFBPNJPEILPVCXXPYVCIKKELADICLJUHIAAJMPZKDWVULVLWRGQSGNKRFJSOMMASEJCPB");
    msg.visibility.assign("DIALZKKDYCHNKJGGSQRZMMLKGREMWCVNGLPOQBBJFGQPOALRERPOFLJZUYYCPAJZFIEUVOXDWNISHSBVBDKPWNVOECGNYXOCZYTZSDVHVFHWRXLZJLWJUTXIPIYUWEJXTDNRKWXAUPK");
    msg.scope.assign("PEPZDVVHRCPIODSLUCKCSOMUUVLEYWXBNOOFOBGPNIZCHAFTJMKGANNIBGORCBVXEQVFQFRUWEAQEKODTSYUTNTWIEYCFHDXOCZYSWZTQJXWMT");

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
    msg.setTimeStamp(0.369005172435);
    msg.setSource(16754U);
    msg.setSourceEntity(108U);
    msg.setDestination(56063U);
    msg.setDestinationEntity(40U);
    msg.name.assign("YZAOZXCHYQBGLAGLSEZOVXZIKUPMVXWAHGXQPCHBFZJBFPGXHHDPBRWYMOMLXQDUAHFLYOURYJKIOJLEYRJPINLUICCWBKTXWKEAVOEIUMTIRWANVFVAPMWKUQNIBGJRHGYFIBQGPDTEMJLQSHAWIBVPMFRFXKYXNNVACHWVRFNCQQSOGPYQDUBONCLBDUALSZCSQJSTWMFZDTJPLKMKXZWSZGTZHO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CEJVCLGUSCZTERKVUOMYVZFUDUNAAWUWFOMPPMGBROQTBNPEDJYMIWSEOCXCFRHDOKLLRAXCMJQACTHWEYKTXPJGOSSCSPPGNXEGWLBYSILRZDASUJCBHLDUAFKQLJKHQXDOBXFILUZDTDPQGNLFBTBILMQNHNEAYOVKSIRVBPQKYZTERAADNYIRIVRIFQOMJZFHWGTKFJMWRQVPHKDZUZNMWSZKWGNZYOYXXBYFTIAXH");
    tmp_msg_0.value.assign("JSWFHLBUWURACGSGJJQNPYFEJYOCOOINOXXUEIBPWGRNCVNVTVXAMHCLRAESUHPJKPXGWPHZCLUSWRGHNGKCMPQBTLMFLTIYVNRQDLQDFVPXZHYTLMZJIIHRYZIUMUQUXNGEZQOIKLVOXSNKDXWIMEGGAQXXPAWYVJAZMJNDMFTCYIIOQRFECPFHTDZDKBYZAJKWKZSWACBRKRVFDKAZGBSFLDESMBYRKHOAVNBSBPY");
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
    msg.setTimeStamp(0.958555378103);
    msg.setSource(27334U);
    msg.setSourceEntity(49U);
    msg.setDestination(23166U);
    msg.setDestinationEntity(184U);
    msg.name.assign("RZFFGWQJHTDEPGAHYOILFIMRWULIHXSZHVIEIWUZWRYKKKQQNIOFFTTBJMFTGEGSECVKHWIVOVPVUBQUXLCCDBMLLYGSNVPXCBYNBZURWUGORIHGKDCYBHJMGAFRBXWDSSYAOTLBKZNLCRAY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QUZLJMGSDKGPMGQYDNUKBREOHVFZCHMAFVWPYVECJDFERVHYQKXXJFKGMUHAYADBTVBCLDWXGYYQNHHRIBPJXRVYJTPWAKMNLRPSOSXYAKCZWHWILKRFQODPEBIQUIIGCUOQRNZEAQVRDQDLAVPSLM");
    tmp_msg_0.value.assign("MAELBVNFUUSNUPXIKVAMCJXOSRBZLAIEELWEBYXYOGKOYFFXFUZGGKAWR");
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
    msg.setTimeStamp(0.638119577996);
    msg.setSource(5585U);
    msg.setSourceEntity(149U);
    msg.setDestination(44638U);
    msg.setDestinationEntity(104U);
    msg.name.assign("HPPJJXCXRBAGIMSVLTJTPSMQHJQLFBVRZTDBUHXUUNMWZOSNCTTSKORZKJEFDEOFZOLSJAUEVHUAWFJWMIJLP");

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
    msg.setTimeStamp(0.823939282433);
    msg.setSource(30173U);
    msg.setSourceEntity(42U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(88U);
    msg.name.assign("UTEWEXCQYBWPLLLOUJQWSMXDNARYSYDNOYIEGFJNCRFNDQLLAHWTSDAONPKSBJJWXQGMZKGQHHQYNBPZPGMRUZJEWKCFSCZUHMLDBEVYYUJTAGNXUIGODIIOAVXSWNPQQDKHKMGPBSIHRFKAYRGCTWLDQBCOPCNZPRESUIXHRMAZWFPKZZEJPGARCEYZXOIVIKQAFSEXTRBMVLYHIXFJOVJVBEUDFVXFTOUUACIBTCGBV");

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
    msg.setTimeStamp(0.517285147132);
    msg.setSource(48599U);
    msg.setSourceEntity(115U);
    msg.setDestination(46455U);
    msg.setDestinationEntity(42U);
    msg.name.assign("XKCPWYMWIABLRSOBMTNVOVXIRRQYXUZPLYNNBIPNKXRMURIMNWERXAOFXIDWAZLUJIGEZHGECSTUQZIEMRRQYRDSLCGQDJYOSNFHGQHJMKCBHMAABFKBVBQPOHCTOYDITYMODTECUXLQARJSTLUKVAANMAGAVUHWEBJMPZPXOTNPNDPVWTPJHJWCLGLPVZUSHHZXKDEGVVSZOEUGSCYQFWFDBS");

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
    msg.setTimeStamp(0.399728484913);
    msg.setSource(40941U);
    msg.setSourceEntity(81U);
    msg.setDestination(12297U);
    msg.setDestinationEntity(210U);
    msg.name.assign("AODKBNPZBQSSKGPXHFINJBYICGQTINCFTUOKOVILTJEJBYGUJWRBWGGBVSXMOXPEWTLXCRADKBPYQLKUGXWDISIAUNAIPL");

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
    msg.setTimeStamp(0.231824033172);
    msg.setSource(15714U);
    msg.setSourceEntity(141U);
    msg.setDestination(34469U);
    msg.setDestinationEntity(178U);
    msg.timeout = 2005721816U;

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
    msg.setTimeStamp(0.691048586019);
    msg.setSource(119U);
    msg.setSourceEntity(63U);
    msg.setDestination(47998U);
    msg.setDestinationEntity(50U);
    msg.timeout = 2565665179U;

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
    msg.setTimeStamp(0.113133761268);
    msg.setSource(65443U);
    msg.setSourceEntity(143U);
    msg.setDestination(2440U);
    msg.setDestinationEntity(10U);
    msg.timeout = 1691538125U;

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
    msg.setTimeStamp(0.294121717032);
    msg.setSource(17396U);
    msg.setSourceEntity(210U);
    msg.setDestination(11478U);
    msg.setDestinationEntity(11U);
    msg.sessid = 3005475018U;

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
    msg.setTimeStamp(0.873412100053);
    msg.setSource(55980U);
    msg.setSourceEntity(62U);
    msg.setDestination(51647U);
    msg.setDestinationEntity(111U);
    msg.sessid = 1618188452U;

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
    msg.setTimeStamp(0.801710518696);
    msg.setSource(20289U);
    msg.setSourceEntity(68U);
    msg.setDestination(8934U);
    msg.setDestinationEntity(33U);
    msg.sessid = 88963802U;

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
    msg.setTimeStamp(0.178701801759);
    msg.setSource(8262U);
    msg.setSourceEntity(213U);
    msg.setDestination(54391U);
    msg.setDestinationEntity(120U);
    msg.sessid = 3651134746U;
    msg.messages.assign("KEWHNBRDFYIIBSUZKADMXESIVKLNTFVFKYLRRFADBCPSBJZIIUVLUFRCIYOJCJYGTNZVFMPLPVJMZGYPTSDPZLOSDNTVAGWHXHEEHEOFYPPVSFLFKUYNQQAWHTQQQOMKOJGKOCSXJRSNKJOJGNZTNBQEUYSAMQKRBIIQXCWJXEQUVEASICMOGURXONUBPXXDKTMGGC");

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
    msg.setTimeStamp(0.875315498631);
    msg.setSource(48343U);
    msg.setSourceEntity(138U);
    msg.setDestination(62680U);
    msg.setDestinationEntity(92U);
    msg.sessid = 1446886613U;
    msg.messages.assign("VYWOVJGESCLTYKCVQSUQDHLADYRZSTXNERXNYFKLKZEXHYILVXZTIPRUUEMEVRWWFLNHDJPNIFAMNVZJOGWPGEMVGOZAJKOBHXTCHSSTGUDQTOJMASXVYPKBDDRKDMQLAQ");

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
    msg.setTimeStamp(0.547843041581);
    msg.setSource(56188U);
    msg.setSourceEntity(64U);
    msg.setDestination(43460U);
    msg.setDestinationEntity(37U);
    msg.sessid = 3151349281U;
    msg.messages.assign("BDYXCFRECIIJBSWVFXQHHPTIZVGZWGTIGMTSDTYXCPACBJYEEVOKAHRWETGXBUXSEMLAJC");

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
    msg.setTimeStamp(0.858234713857);
    msg.setSource(18482U);
    msg.setSourceEntity(74U);
    msg.setDestination(62709U);
    msg.setDestinationEntity(57U);
    msg.sessid = 2475906815U;

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
    msg.setTimeStamp(0.930232564887);
    msg.setSource(41003U);
    msg.setSourceEntity(57U);
    msg.setDestination(59867U);
    msg.setDestinationEntity(193U);
    msg.sessid = 3587422962U;

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
    msg.setTimeStamp(0.149315933339);
    msg.setSource(5574U);
    msg.setSourceEntity(157U);
    msg.setDestination(40410U);
    msg.setDestinationEntity(44U);
    msg.sessid = 1658649258U;

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
    msg.setTimeStamp(0.264802493938);
    msg.setSource(63968U);
    msg.setSourceEntity(76U);
    msg.setDestination(10720U);
    msg.setDestinationEntity(169U);
    msg.sessid = 2574599994U;
    msg.status = 102U;

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
    msg.setTimeStamp(0.0847643060517);
    msg.setSource(51756U);
    msg.setSourceEntity(206U);
    msg.setDestination(57983U);
    msg.setDestinationEntity(94U);
    msg.sessid = 105032945U;
    msg.status = 50U;

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
    msg.setTimeStamp(0.668986648992);
    msg.setSource(64662U);
    msg.setSourceEntity(114U);
    msg.setDestination(19920U);
    msg.setDestinationEntity(1U);
    msg.sessid = 577828304U;
    msg.status = 52U;

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
    msg.setTimeStamp(0.00163822286218);
    msg.setSource(28387U);
    msg.setSourceEntity(149U);
    msg.setDestination(57663U);
    msg.setDestinationEntity(226U);
    msg.name.assign("LDFMUNFAWOLGKWCNPOJBNLVFY");

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
    msg.setTimeStamp(0.679039368136);
    msg.setSource(16376U);
    msg.setSourceEntity(31U);
    msg.setDestination(22292U);
    msg.setDestinationEntity(7U);
    msg.name.assign("YUVJEJFEQIQVGNAYLJAMAOPRYHRJJSIKYYZDY");

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
    msg.setTimeStamp(0.786987530945);
    msg.setSource(43171U);
    msg.setSourceEntity(162U);
    msg.setDestination(1669U);
    msg.setDestinationEntity(131U);
    msg.name.assign("CYXGXWKXJDUAFQCYVRLIJBTLRRYADWIIHTPKLCWMRCYIOONHVZFZQKTKFYLYSENDXCIBBINNBAXDUYJVIXEGMKLSTDBBDVDMXIVAMF");

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
    msg.setTimeStamp(0.485238437731);
    msg.setSource(34628U);
    msg.setSourceEntity(189U);
    msg.setDestination(45499U);
    msg.setDestinationEntity(153U);
    msg.name.assign("XMVPAXCSCYFVDRRSJMFCUZNGQFIMHXEBVZDGFWMYHQDHGVUFJKZSHJTHVGIZCLMJQTUBQFHXTWSJIMDKRLRLWYOQBAEVCJEUATPNFCXTDIWASRWOZBWRUFKLPXPKMOVHRJBUITBWRYZCG");

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
    msg.setTimeStamp(0.174098380474);
    msg.setSource(29662U);
    msg.setSourceEntity(1U);
    msg.setDestination(13818U);
    msg.setDestinationEntity(144U);
    msg.name.assign("CXBYOCMIRHDDEQRINULLBPCIKBIARMMGOGLOVXZCTYODEEQNPPAVYDBCYEPNVYVTZNLJTKPRWJXHZQFTEFWMUXGXSCEFZMTOETJMWSXCFAHMMUUQXOOBUWNEFKYHQJKWJUFRTAQNHDIPETFCVGRVEZYNKGYJIUGDSVQSZGZXPHLFNAPKKULADRSWWDJNBBFWLAAXCSSCHRHISRYBOAZDMUQIHZVJSQJSFTUGRIONWVLOHG");

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
    msg.setTimeStamp(0.939828151489);
    msg.setSource(8315U);
    msg.setSourceEntity(224U);
    msg.setDestination(30409U);
    msg.setDestinationEntity(153U);
    msg.name.assign("VIFXCGTZAXYBMOEUGQNGBOOAXEAUJCJTKJETUEPZNVJPKUWVRRHPTRDZKFITRMMVMSWSAWICMRTNQKENDSVHDLRSZIYRDKFQFUUPPYSQDGPWDUIXEHWCXKWAEVHEDRFNSFBBSWOICPYNXWCJFOMHVLFTTIXOIKZAYEPZVMNJDNKNL");

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
    msg.setTimeStamp(0.369490088061);
    msg.setSource(20276U);
    msg.setSourceEntity(205U);
    msg.setDestination(55601U);
    msg.setDestinationEntity(249U);
    msg.type = 252U;
    msg.error.assign("PWVYAEPMOIAJJ");

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
    msg.setTimeStamp(0.725384019202);
    msg.setSource(16936U);
    msg.setSourceEntity(145U);
    msg.setDestination(54791U);
    msg.setDestinationEntity(217U);
    msg.type = 11U;
    msg.error.assign("NESMSEPHBMWYPLGJPFCOYGZXVIAMSQRIEFNRIILZCGZDAIMUQJWRPQLCZKLOPU");

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
    msg.setTimeStamp(0.558592066178);
    msg.setSource(51053U);
    msg.setSourceEntity(245U);
    msg.setDestination(54664U);
    msg.setDestinationEntity(11U);
    msg.type = 18U;
    msg.error.assign("EDVQFUBAKCLXWYPXSGOLDEHDJQKUEHPVSWAMCFWJLGXCMRFDPHJMEYNMMPUDRTYBRWGVVKHXARRNACQGFVCWTPISOEVPEJXPTQBGGYQQOYTHKZJNBOOTQNZASFAWZMSBEIDLVLNAWBDUXETUKZLTGYNDGZXIMOZYBEZXHIUKRKJNWNLHFAOTHLCQXIFUSZMZWIXPACQKOACBMPVDVJIKJEOFHTZY");

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
    msg.setTimeStamp(0.835268278905);
    msg.setSource(54025U);
    msg.setSourceEntity(142U);
    msg.setDestination(18986U);
    msg.setDestinationEntity(63U);
    msg.seq = 40132U;
    msg.sys_dst.assign("VKXWFLXPVYQKYTUOVNTCGDADLDKRKANOZABONQCYXMDMTZFEJBIZZXSCYRSGRYGQXSGPBVUYTCEPAJEKDXHIINU");
    msg.flags = 21U;
    const char tmp_msg_0[] = {56, 58, -120, 61, -49, -93, -1, 2, 125, -85, 43, -9, 72, 6, 122, 95, 58, 46, -110, -12, 46, 59, -32, -94, 23, 50, 104, 107, 114, 7, -99, 35, 99, 8, -30, 63, -84, -52, -102, -41, -57, -115, 92, -82, 49, 117, -23, -69, 51, -44, -26, -97, 91, 82, 67};
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
    msg.setTimeStamp(0.766664389206);
    msg.setSource(39128U);
    msg.setSourceEntity(179U);
    msg.setDestination(38256U);
    msg.setDestinationEntity(77U);
    msg.seq = 27026U;
    msg.sys_dst.assign("ERAHQTZZFUHZGSRWRRRQGOCQSWYMDHOIVJHLVOFSU");
    msg.flags = 223U;
    const char tmp_msg_0[] = {-29, 112, 39, 8, 49, 105, -118, -50, -32, 14, -61, -119, 8, 90, 7, 106, 44, -110, 23, -42, 123, 40, -116, -8, 118, -97, 65, -46, 100, 104, -36, 28, 13, -126, 41, -51, 42, 43, -30, -123, -109, -64, -38, -33, 118, 16, 73, 76, -33, 83, 15, 61, 72, 17, -24, -102, 71, -111, 29, 107, -39, -83, -119, -32, -108, -71, 70, -118, -15, 22, -39, -16, -63, 86, 85, -110, -80, -87, -70, 20, 91, 110, -28, 82, 99, 37, -62, -30, -113, -23, 66, 79, 88, -46, 20, 123, 46, -18, 123, -105, 103, -38, 114, -95, 108, -96, 47, 13, -39, 120, -86, -98, -69, -8, 8, -103, -34, -32, -103, -75, 118, 95, -32, 6, -44, 88, -93, 36, 16, 46, 12, 55, -35, -34, 101};
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
    msg.setTimeStamp(0.20905072816);
    msg.setSource(16179U);
    msg.setSourceEntity(96U);
    msg.setDestination(39809U);
    msg.setDestinationEntity(183U);
    msg.seq = 27977U;
    msg.sys_dst.assign("EXHNAXSMKWTNQFYTIRGGCHRDJATWLYKXVIBJHBUJMWUBPVJEZNRQHGZMUPT");
    msg.flags = 220U;
    const char tmp_msg_0[] = {-57, -115, -124, -125, 80, -19, 13, 96, -39, -29, -71, -102, -66, 105, -43, -110, -102, -117, 69, 19, -24, -120, -73, 59, 49, 114, -90, -78, 100, -80, 88, -119, -29};
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
    msg.setTimeStamp(0.653464939421);
    msg.setSource(15749U);
    msg.setSourceEntity(229U);
    msg.setDestination(13477U);
    msg.setDestinationEntity(213U);
    msg.sys_src.assign("ATYHIHCICVJVFZSSJAFJVRTWWKQPNAQHWWSHXGXJFEDMNQBLPOXEJRISSDPOPEICGDEVSOHSDJOIXTGTZU");
    msg.sys_dst.assign("WWXPHZYYDFNXEBSHQHFHPDWIZOBQAVVYSECSLJPULMVVILBMHESQG");
    msg.flags = 1U;
    const char tmp_msg_0[] = {66, -23, -74, 0, 21, -73, -64, 93, 89, -85, -37, 49, -89, 85, -60, 11, 7, -17};
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
    msg.setTimeStamp(0.846130176413);
    msg.setSource(64384U);
    msg.setSourceEntity(155U);
    msg.setDestination(38785U);
    msg.setDestinationEntity(185U);
    msg.sys_src.assign("CXKVEVDJYRKEWJEZDSAH");
    msg.sys_dst.assign("NUEBGFKGWNUBDKLBIWVELWNWIYZHWHFLHIGYJYMASUNZUXAOVXQAOEFCROMEILNGXKRJJZYPENPQKKDRCBCJJTFCKMISOZAILJXHBPYJHLLAPPDIMMHGOVSHFCGNTDOJVPRQZGAUNBGCQLPFESPDXKBXMRNQUTSWDAYQCTQUDIWAFJOBXMPCVVFVVYHKZZDTTMVSLWTMQORGFQDZUTRSAWNAXRLZBZUCOXIUS");
    msg.flags = 35U;
    const char tmp_msg_0[] = {-104, 19, 7, 95, 58, -51, 116, -86, 83, -78, 109, -123, 56, 38, 67, -114, 19, -105, -81, 49, -83, -23, -44, 107, -89, 101, 122, -13, 34, 94, -75, -85, 9, 89, -22, 26, 86, -63, -56, -9, 40, -52, -92, 14, 73, -22, 42, -12, -16, -2, 75, -91, -88, -50, -1, -104, -76, -45, 27, 50, -48, -6, -34, 26, -32, -101, 117, -66, -82, -11, -53, 100, -66, -38, 67, -89, 123, 107, 100, 44, 7, 78, 118, -64, -36, 115, 17, 32, 103, 59, 55, -117, -117, 86, -115, -122, -113, -112, -99, 35, -56, -89, -57, -16, -53, 12, -52, 81, 71, -110, 122, 48, -32, 26, -49, 15, 13, 112, 98, -76, -20, -124, 126, 123, 117, 124, 101, -12, -82, -67};
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
    msg.setTimeStamp(0.196554044667);
    msg.setSource(32589U);
    msg.setSourceEntity(77U);
    msg.setDestination(8997U);
    msg.setDestinationEntity(17U);
    msg.sys_src.assign("WHVWNXRXIWFPVUNVEAXDNKYRIMFFVIWQDIHFHLBRDPAQYYSLMPNZIXMUUHGFORADSKEOWLSGQPEQSPKBGCJCKMZQJSETZTFQCLEGNPXRCHZICOVUEUDYCTGBDJRIBOFXPS");
    msg.sys_dst.assign("SVQZBOAEKFLHLQTMXWDTVCBXKSVEVXYOOXPUJTC");
    msg.flags = 151U;
    const char tmp_msg_0[] = {6, 57, 31, -54, -74, 72, -35, 38, 32, -20, 65, 123, 94, -113, -17, -8, 88, -13, 60, 100, -43, -3, -54, 108, 43, -97, -16, -60, -6, 107, 87, -111, 79, 48, -4, 47, -62, -30, -117, 55, -123, 113, -57, 82, 105, 18, -85, -87, -5, 99, 43, 100, 90, -43, -116, 30, 38, 76, -40, -39, -115, 124, -31, 3, -38, 72, 119, 85, -118, -119, -57, 100, 64, -3, -61, 38, 98, 78, 46, -56, 51, -53, 31, -46, 39, 55, 89, -49, 47, -75, 110, 97, -77, -72};
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
    msg.setTimeStamp(0.740194278565);
    msg.setSource(56139U);
    msg.setSourceEntity(144U);
    msg.setDestination(17157U);
    msg.setDestinationEntity(85U);
    msg.seq = 1140U;
    msg.value = 128U;
    msg.error.assign("GBJTPSYVUWZHMGLCPAWFOEKHZLMDCOCCRSPILOMUBSFNENWLGNJXUPSEIRUNTJJXNNGHVIQFBDUEQZKAXKTVHCYLLFFYKBQTRPPVVYXUSYQQHAHPAHVRUOOMTKHGTNSTTCDILEYQVDXKMAPXRKXCPYCCBMGDJQMJAFDGLHRASKPUDDFRAGBIMGWRWOWKJZQZXEBOBIQIT");

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
    msg.setTimeStamp(0.475090834595);
    msg.setSource(17124U);
    msg.setSourceEntity(104U);
    msg.setDestination(47505U);
    msg.setDestinationEntity(251U);
    msg.seq = 12055U;
    msg.value = 190U;
    msg.error.assign("BOYHWDUGCIUXAOOMTYZXHASMTJHJDMPQQCDDLVRZFJEHYJGJEQFZGEXYFTERIXNPISOZAEWNBXQLCKWUSAOUINZUZWLCQHXIRNLWVLNTJBKHXMTDGRQEVPDXTWZGCIAUVPASJSQBEFQESAYVKGFSUFTGNKBKCHZOLDLFBVJLPKFTBCHMGVSWMGYYNEVAKIBTULPMWOQSOPMOVRUDZYDTLGBQYWERJAHNRAXKHJ");

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
    msg.setTimeStamp(0.370621631074);
    msg.setSource(33338U);
    msg.setSourceEntity(252U);
    msg.setDestination(24594U);
    msg.setDestinationEntity(185U);
    msg.seq = 46738U;
    msg.value = 221U;
    msg.error.assign("SLZBVRLDCZCKLKCLFKHAWJJHJKDSGWRIXPAOVRFJDKETRUGXYKIWDVIPQABFUNWYZKXSN");

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
    msg.setTimeStamp(0.620469256048);
    msg.setSource(35505U);
    msg.setSourceEntity(235U);
    msg.setDestination(42158U);
    msg.setDestinationEntity(3U);
    msg.seq = 17451U;
    msg.sys.assign("YIGDYMWPAIURMGYODQKQPIKRREOMZUDOFUQMKABBLNBTUEPIEKBOPTXYANGLLXNJVWRSWPLQMYFIFVEVHGWNUIDKOFOJGJCRPUHVNVQBMAPECBVAFXXEQGYZVYSMHPC");
    msg.value = 0.576812438994;

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
    msg.setTimeStamp(0.781679856201);
    msg.setSource(12827U);
    msg.setSourceEntity(6U);
    msg.setDestination(24504U);
    msg.setDestinationEntity(95U);
    msg.seq = 38057U;
    msg.sys.assign("HYPRAMGREILHYPOLENCBVCHZJIZKYFEXQJMNJSLPIOKWQAXRGGNUCIBCUHJVLCTRASIWIHQKJTRNATDTGXBMXSIVBTFKEHFSULDAGPDGDWQPBCLDGCOFPWQZZCXZTRPSOUMHMOVKNDGIUFWMSIOWAWEFYTDVZNQFEVKUEODRNLKFJYKVJXWEHASIQXABBASBSKXFCEZGRTDH");
    msg.value = 0.416023803675;

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
    msg.setTimeStamp(0.807698040756);
    msg.setSource(47273U);
    msg.setSourceEntity(167U);
    msg.setDestination(46608U);
    msg.setDestinationEntity(182U);
    msg.seq = 105U;
    msg.sys.assign("XMQASUADJNHXVHEBVWCBGCSUNFHITEKLWITBXKBXMGNRDGSKTDYT");
    msg.value = 0.0506757250293;

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
    msg.setTimeStamp(0.28505162671);
    msg.setSource(43446U);
    msg.setSourceEntity(248U);
    msg.setDestination(53236U);
    msg.setDestinationEntity(129U);
    msg.action = 137U;
    msg.longain = 0.339115780467;
    msg.latgain = 0.35536492425;
    msg.bondthick = 3443660276U;
    msg.leadgain = 0.406493323288;
    msg.deconflgain = 0.850414432893;

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
    msg.setTimeStamp(0.492239571454);
    msg.setSource(21028U);
    msg.setSourceEntity(69U);
    msg.setDestination(870U);
    msg.setDestinationEntity(229U);
    msg.action = 239U;
    msg.longain = 0.714059700011;
    msg.latgain = 0.743744453875;
    msg.bondthick = 3107291459U;
    msg.leadgain = 0.34395573535;
    msg.deconflgain = 0.904683380713;

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
    msg.setTimeStamp(0.499721772586);
    msg.setSource(54782U);
    msg.setSourceEntity(9U);
    msg.setDestination(54326U);
    msg.setDestinationEntity(109U);
    msg.action = 55U;
    msg.longain = 0.0157515021023;
    msg.latgain = 0.0378738680048;
    msg.bondthick = 500624706U;
    msg.leadgain = 0.646758598885;
    msg.deconflgain = 0.076262466582;

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
    msg.setTimeStamp(0.152841198405);
    msg.setSource(27919U);
    msg.setSourceEntity(157U);
    msg.setDestination(5360U);
    msg.setDestinationEntity(85U);
    msg.err_mean = 0.710873142691;
    msg.dist_min_abs = 0.856365328386;
    msg.dist_min_mean = 0.16771993443;

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
    msg.setTimeStamp(0.131757495747);
    msg.setSource(3780U);
    msg.setSourceEntity(130U);
    msg.setDestination(52297U);
    msg.setDestinationEntity(88U);
    msg.err_mean = 0.57599171062;
    msg.dist_min_abs = 0.308028113674;
    msg.dist_min_mean = 0.938654623602;

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
    msg.setTimeStamp(0.743808827754);
    msg.setSource(14844U);
    msg.setSourceEntity(137U);
    msg.setDestination(15332U);
    msg.setDestinationEntity(252U);
    msg.err_mean = 0.462236390715;
    msg.dist_min_abs = 0.69781022485;
    msg.dist_min_mean = 0.188704724153;

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
    msg.setTimeStamp(0.598305740341);
    msg.setSource(102U);
    msg.setSourceEntity(110U);
    msg.setDestination(9200U);
    msg.setDestinationEntity(137U);
    msg.action = 70U;
    msg.lon_gain = 0.332399194038;
    msg.lat_gain = 0.657377285561;
    msg.bond_thick = 0.546948412215;
    msg.lead_gain = 0.265358286583;
    msg.deconfl_gain = 0.514628164506;
    msg.accel_switch_gain = 0.438981927126;
    msg.safe_dist = 0.788001367186;
    msg.deconflict_offset = 0.871524108794;
    msg.accel_safe_margin = 0.527812375531;
    msg.accel_lim_x = 0.0385092414203;

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
    msg.setTimeStamp(0.642272923802);
    msg.setSource(19542U);
    msg.setSourceEntity(166U);
    msg.setDestination(5636U);
    msg.setDestinationEntity(160U);
    msg.action = 80U;
    msg.lon_gain = 0.211989555088;
    msg.lat_gain = 0.28664915895;
    msg.bond_thick = 0.0963495227225;
    msg.lead_gain = 0.983163802581;
    msg.deconfl_gain = 0.459486080974;
    msg.accel_switch_gain = 0.486522591578;
    msg.safe_dist = 0.267795194189;
    msg.deconflict_offset = 0.458607985088;
    msg.accel_safe_margin = 0.783136646915;
    msg.accel_lim_x = 0.773594373137;

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
    msg.setTimeStamp(0.893863829476);
    msg.setSource(47338U);
    msg.setSourceEntity(90U);
    msg.setDestination(23412U);
    msg.setDestinationEntity(159U);
    msg.action = 13U;
    msg.lon_gain = 0.420261514939;
    msg.lat_gain = 0.466185133912;
    msg.bond_thick = 0.323144877754;
    msg.lead_gain = 0.207503456954;
    msg.deconfl_gain = 0.606847449395;
    msg.accel_switch_gain = 0.36640453556;
    msg.safe_dist = 0.897268141643;
    msg.deconflict_offset = 0.345628172591;
    msg.accel_safe_margin = 0.373058757806;
    msg.accel_lim_x = 0.895469436227;

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
    msg.setTimeStamp(0.0673868079823);
    msg.setSource(53143U);
    msg.setSourceEntity(227U);
    msg.setDestination(30407U);
    msg.setDestinationEntity(55U);
    msg.type = 234U;
    msg.op = 24U;
    msg.err_mean = 0.645234004809;
    msg.dist_min_abs = 0.70492440063;
    msg.dist_min_mean = 0.68631772707;
    msg.roll_rate_mean = 0.815277183621;
    msg.time = 0.0997592526501;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 233U;
    tmp_msg_0.lon_gain = 0.708465746608;
    tmp_msg_0.lat_gain = 0.90223067661;
    tmp_msg_0.bond_thick = 0.945972049821;
    tmp_msg_0.lead_gain = 0.671246359905;
    tmp_msg_0.deconfl_gain = 0.175617989777;
    tmp_msg_0.accel_switch_gain = 0.0472768860819;
    tmp_msg_0.safe_dist = 0.31192654489;
    tmp_msg_0.deconflict_offset = 0.172740459736;
    tmp_msg_0.accel_safe_margin = 0.389564939965;
    tmp_msg_0.accel_lim_x = 0.747749245424;
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
    msg.setTimeStamp(0.554987896096);
    msg.setSource(50494U);
    msg.setSourceEntity(41U);
    msg.setDestination(2699U);
    msg.setDestinationEntity(206U);
    msg.type = 91U;
    msg.op = 20U;
    msg.err_mean = 0.0679699830091;
    msg.dist_min_abs = 0.124445478832;
    msg.dist_min_mean = 0.694311580175;
    msg.roll_rate_mean = 0.41070005214;
    msg.time = 0.39722590922;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 68U;
    tmp_msg_0.lon_gain = 0.568205703169;
    tmp_msg_0.lat_gain = 0.313149344259;
    tmp_msg_0.bond_thick = 0.756281611993;
    tmp_msg_0.lead_gain = 0.773684102864;
    tmp_msg_0.deconfl_gain = 0.210670305229;
    tmp_msg_0.accel_switch_gain = 0.891631143272;
    tmp_msg_0.safe_dist = 0.238359348673;
    tmp_msg_0.deconflict_offset = 0.700461016808;
    tmp_msg_0.accel_safe_margin = 0.450337997367;
    tmp_msg_0.accel_lim_x = 0.245339816068;
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
    msg.setTimeStamp(0.690915415724);
    msg.setSource(31079U);
    msg.setSourceEntity(233U);
    msg.setDestination(16312U);
    msg.setDestinationEntity(51U);
    msg.type = 35U;
    msg.op = 151U;
    msg.err_mean = 0.439932300991;
    msg.dist_min_abs = 0.138278834365;
    msg.dist_min_mean = 0.657361842308;
    msg.roll_rate_mean = 0.651169730634;
    msg.time = 0.735495356635;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 143U;
    tmp_msg_0.lon_gain = 0.243158288269;
    tmp_msg_0.lat_gain = 0.223854378345;
    tmp_msg_0.bond_thick = 0.745147510954;
    tmp_msg_0.lead_gain = 0.198162043527;
    tmp_msg_0.deconfl_gain = 0.268545699428;
    tmp_msg_0.accel_switch_gain = 0.170909030325;
    tmp_msg_0.safe_dist = 0.542221251755;
    tmp_msg_0.deconflict_offset = 0.13249705746;
    tmp_msg_0.accel_safe_margin = 0.949912502916;
    tmp_msg_0.accel_lim_x = 0.0762884592637;
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
    msg.setTimeStamp(0.240228146452);
    msg.setSource(16499U);
    msg.setSourceEntity(44U);
    msg.setDestination(891U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.0120944363506;
    msg.lon = 0.657537294114;
    msg.eta = 1377046538U;
    msg.duration = 37132U;

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
    msg.setTimeStamp(0.0330985179929);
    msg.setSource(55492U);
    msg.setSourceEntity(88U);
    msg.setDestination(975U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.310478529862;
    msg.lon = 0.217413297575;
    msg.eta = 3567801979U;
    msg.duration = 34116U;

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
    msg.setTimeStamp(0.0635627028933);
    msg.setSource(53448U);
    msg.setSourceEntity(150U);
    msg.setDestination(42152U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.641869051921;
    msg.lon = 0.107500323212;
    msg.eta = 654891687U;
    msg.duration = 11878U;

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
    msg.setTimeStamp(0.0817287732965);
    msg.setSource(32785U);
    msg.setSourceEntity(193U);
    msg.setDestination(2327U);
    msg.setDestinationEntity(108U);
    msg.plan_id = 50339U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.476569086158;
    tmp_msg_0.lon = 0.287231806473;
    tmp_msg_0.eta = 1813825547U;
    tmp_msg_0.duration = 49950U;
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
    msg.setTimeStamp(0.642354221284);
    msg.setSource(43165U);
    msg.setSourceEntity(217U);
    msg.setDestination(56662U);
    msg.setDestinationEntity(149U);
    msg.plan_id = 15105U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.3025418311;
    tmp_msg_0.lon = 0.308917549983;
    tmp_msg_0.eta = 3568664043U;
    tmp_msg_0.duration = 65288U;
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
    msg.setTimeStamp(0.286472909583);
    msg.setSource(37574U);
    msg.setSourceEntity(140U);
    msg.setDestination(31000U);
    msg.setDestinationEntity(191U);
    msg.plan_id = 34048U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0524100331636;
    tmp_msg_0.lon = 0.216391538714;
    tmp_msg_0.eta = 426590272U;
    tmp_msg_0.duration = 49677U;
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
    msg.setTimeStamp(0.240929099979);
    msg.setSource(24916U);
    msg.setSourceEntity(29U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(13U);
    msg.type = 180U;
    msg.command = 89U;
    msg.settings.assign("NXLYHIZMDZVBMKYRGOGCFAEAJCSRMKOVSRPWTWDJPOEVGLBBUQURVVJJAHYVJPABXR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45105U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PKGTUYEVXFTNGFFVQJIWUPVFORRLPJXZSMATSMCQOLPIZXDFVKAYQRTROGOHCIJXHJGRQSPLCWENYNHTECYGKZPOWVMQNJLHHUBSKEZZXEBBUDGBYXPKMQEQXGQTHBFWJOAFKSJIYSDYFDACLFAJDKLTLUSYHWIECUOBZVRADHTIZRJOEXVJLWGAZWKCNODACVNNSBIVIMFQMENCCKRITUWKUAWMXYNMGMAR");

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
    msg.setTimeStamp(0.536476369157);
    msg.setSource(19085U);
    msg.setSourceEntity(184U);
    msg.setDestination(21205U);
    msg.setDestinationEntity(50U);
    msg.type = 119U;
    msg.command = 15U;
    msg.settings.assign("FKZGVJFQAWSQXPSLOUCUZCJOHFDEKWGTMXUFNYMZBTBQHMLBBKHHPJEVZPSQURXSPTOYGCPQZAPRIPDNHVXLQNOYDGABOIUPXNAMHONIQFKOCXHMDJTTIFKHELRTRCISRKFJKHCLXS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 16096U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QTIXFMRRSZHPAGUDGQKCMDLNJUNBYYJOXHCBRRWXUBCJSFGCJOCEHGRSBVALWUDOSBZLPKAVVPGRPGYNHQPCGSZCWDXNOEFZCAQQBDIALVMIXEKGEASITZSEFDMJTZVZLGKAJEMWHWVDLOXXTRGIWYZVVLBKNMNBHFMPYYIOUAINWTTFCZHIKXWTXYMQQQQSJDWFRRKEQOHVETYIORWPFPVUPFPDEJ");

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
    msg.setTimeStamp(0.329272192928);
    msg.setSource(43905U);
    msg.setSourceEntity(192U);
    msg.setDestination(33728U);
    msg.setDestinationEntity(228U);
    msg.type = 107U;
    msg.command = 34U;
    msg.settings.assign("PKKXQVJMUZFBIBOBKEZZQUGNFJMUILFXJAXCRZEWUPPLVEZHKYXSOTVQBLSEYDQAUNANIASQYETSWXWTJRIWFCNHDJTEHTMPJKZOMOXLZGWBRJHGIKUJOFSAEAUXPQGTSPAXFMZJWYEXQOVNMHIBYSTULKYDPKAOMDQHRXCVTINUFDGEFWEPSBHRYCAKDOLVVIOBCBMQOFCHMJWBDGPVRMSGWYZRDDNGLNNWUTIZY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43917U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("REOXTBINQGHKZXCDQHAUELJYJWOWTUJBFRQPDDNYZGGIADNCEIVZAIHQZWZXUAWPPUFUZSYLOAVBPGIYTSCOHHXEFRPOVDCCALMRHUEMYGYRZDMQJVTEEBRGKDWVVPVZPWSJMUQMMXZLCLMFBWIHCFKFKFAWSRISJOEHBXTIDBDMWNRVTKNAZ");

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
    msg.setTimeStamp(0.255486558845);
    msg.setSource(54855U);
    msg.setSourceEntity(63U);
    msg.setDestination(31809U);
    msg.setDestinationEntity(157U);
    msg.state = 43U;
    msg.plan_id = 38091U;
    msg.wpt_id = 200U;
    msg.settings_chk = 39483U;

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
    msg.setTimeStamp(0.644925672597);
    msg.setSource(17245U);
    msg.setSourceEntity(92U);
    msg.setDestination(58125U);
    msg.setDestinationEntity(208U);
    msg.state = 195U;
    msg.plan_id = 26783U;
    msg.wpt_id = 252U;
    msg.settings_chk = 2702U;

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
    msg.setTimeStamp(0.820905510303);
    msg.setSource(57128U);
    msg.setSourceEntity(11U);
    msg.setDestination(57756U);
    msg.setDestinationEntity(253U);
    msg.state = 160U;
    msg.plan_id = 9578U;
    msg.wpt_id = 133U;
    msg.settings_chk = 64274U;

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
    msg.setTimeStamp(0.519077908429);
    msg.setSource(33063U);
    msg.setSourceEntity(250U);
    msg.setDestination(34162U);
    msg.setDestinationEntity(181U);
    msg.uid = 201U;
    msg.frag_number = 110U;
    msg.num_frags = 130U;
    const char tmp_msg_0[] = {-74, 43, 54, 99, -8, 100, 26, -98, -30, -61, -91, -97, 0, -18, -39, 114, -107, -80, 78, 8, 28, 80, -15, 10, 109, 117, -23, 88, -31, 52, -45, 16, -22, -79, -72, -24, 125, -15, 11, 35, 123, -115, -102, -3, -30, -52, -127, 85, 122, 126, 76, -126, 90, 60, -84, 64, 117, 66, -62, -89, -33, 61, -93, -50, -43, -34, -13, -7, -23, -23, -64, -77, 119, -108, 23, 48, -63, 8, 106, 109, 93, 19, -58, -4, 54, -63, -41, -83, -2, 9, -113, -79, 4, 61, 28, 14, -102, -24, 48, 103, 46, -5, -20, -55, -104, 27, 9, 13, -30, 8, 8, -45, 30, -116, -97, -66, -80, 14, -52, -126, -59, -45, 16, 58, -62, 120, 92, -96, -20, 119, -93, 83, 52, 65, -90, -33, -68, 33, 56, 39, 24, 31, 29, 45, -90, -114, -48, -8, 82, 104, 45, 87, -111, -55, -81, -43, 28, -119, -126, 93, 95, 119, 30, -47, 123, -78, -74, 29, 80, -5, 1, 99, 122, 21, -18, 95, 76, -114, -75};
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
    msg.setTimeStamp(0.112193809069);
    msg.setSource(9529U);
    msg.setSourceEntity(137U);
    msg.setDestination(18842U);
    msg.setDestinationEntity(43U);
    msg.uid = 111U;
    msg.frag_number = 85U;
    msg.num_frags = 171U;
    const char tmp_msg_0[] = {10, 95, 27, -91, -57, 64, -89, 91, -111, 73, 35, -17, 82, -50, 76, 23, 94, -59, -73, -75, 3, 9, -95, -5, -72, -95, -119, -84, 107, 60, 25, 13, -106, 0, 64, 31, 70, 43, 20, 56, -81, 81, 37, -4, 39, -14, 12, -2, 118, 63, -93, -79, -30, 44, -46, -8, 8, -71, 53, 31, 116, -19, -83, -98, -34, -64, -108, 47, 63, -22, 31, -1, -110, -117, 25, -101, 8};
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
    msg.setTimeStamp(0.294608588343);
    msg.setSource(29923U);
    msg.setSourceEntity(174U);
    msg.setDestination(58126U);
    msg.setDestinationEntity(30U);
    msg.uid = 9U;
    msg.frag_number = 201U;
    msg.num_frags = 106U;
    const char tmp_msg_0[] = {-29, -49, -10, -21, 1, 0, 43, -9, 84, 93, -83, 15, -106, -78, 44, -50, -63, -59, 47, 100, 41, 59, 86, 77, -105, 34, 27, -83, -22, -15, -91, -117, 60, -123, 10, -99, 59, 56, 107, 42, -105, 17, -101, -92, 93, 43, 89, 106, 107, -66, -82, -91, -114, -94, 2, 38, 20, -109, -54, -100, 4, 69, 60, -26, -45, -113, -117, -68, 105, 31, 96, -74, 109, 43, -90, -85, -9, 100, -108, 103, -63, 31, -69, -42, -7, 10, 116, 85, -40, 82, -37, 84, 20, 18, 114, 61, 76, -94, -67, -125, 8, 114, 62, 5, 55, -6, 24, 80, 80, -119, 2, 45, -111, 97, 90, -119, 11, -7, 69, -1, 94, 82, -10, -72, -21, 37, -61, -14, 31, 111, 94, -80, -116, -84, -48, -19, 98, -22, -32, 44, 64, 59, -50, 11, 101, -93, 76, -19, 107, 58, 43, -63, 0, -2, -80, 108, 61, 23, -82, -124, -126, 114, 19, 110, -69, -38, -68, 57, 37, -16, -19, -98, 121, -61, 108, -103, -84};
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
    msg.setTimeStamp(0.221443517582);
    msg.setSource(23673U);
    msg.setSourceEntity(230U);
    msg.setDestination(9949U);
    msg.setDestinationEntity(207U);
    msg.content_type.assign("CGBKORAOEDMYOHYBPGNATKZIQXXUVCKTXKFDRSISMMIGLCKIXSTDTAJLJHIYRCSSCIKCVXMEPZTTIKPRKFDYUVJBVQFNEZWPMJOYGCCDBWNYUIDJNVRTNYNWEOAHPUQLGKWZYJZZOFPELGGGTMMHWUWAZTCRNUOBELHRIXODHGULUAXLQBAHPZJ");
    const char tmp_msg_0[] = {117, -124, -26, -83, -127, 73, -84, 94, -18, -55, -84, 78, -58, -61, 31, -88, -11, -51, -83, -69, -18, -105, 13, 30, -69, -117, -118, 79, 94, 15, -90, 93, -78, -59, 78, -14, 110, -46, -3, -106, 83, -72, 40, 118, -41, 101, -90, 81, -125, 75, -74, 7, -61, 57, 125, 102, 21, -47, 74, -85, 40, 45, 30, -27, -3, -83, 110, -67, 75, 66, -96, 53, 96, 122, 25, -37, 78, -25, 4, -78, 107, -57, -32, 58, -123, -98, 6, 22, 81, 119, 86, -45, -97, 18, -53, -13, -65, 78, 111, 29, -10, 9, -99, -81, 82, -25, -117, 73, -24, 125, 65, 56, -15, 94, 77, -82, 7, -20, 1, -76, -113, -34, 102, -59, 17, -103, 72, -74, -45, 95, -18, -104, 59, 55, 110, 7, -49, 124, 121, 51, -108, -121, -9, 84, 69, 96, -16, -103, -13, -124, -37, -110, -50, 6, -27, 37, 110, 0, -19, -28, -11, -48, -57, -36, -118, 38, -42, 54, -77, -107, 8, 63, 13, 77, -46, -25, -69, -124, -6, 89, -96, 49, 11, 18, -128, 71, -23, -95, -93, -81, 4, 120, 123, -52, 6, 63, -22, -72, 87, -31, -103, 12, -108, -4, -114, -68, -16, 13, -125};
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
    msg.setTimeStamp(0.528608591809);
    msg.setSource(27775U);
    msg.setSourceEntity(251U);
    msg.setDestination(36246U);
    msg.setDestinationEntity(213U);
    msg.content_type.assign("WSKYMXSILTUNCBFBVFMLAKVRSTKRGVKUKQPHFEKMFEDONGWBZMZEZYDJQWOTZUDQBEINDVJQBAQJUAQTGUDSTMLHWTIZGFGTRCGOCCDPVNLPATPZHBSCCNMFLWEDWPCXVIDARKGRGOMLAKFUPCNNPERXVVYZXNIYRWHXQEYIHBCJOXXLINSSP");
    const char tmp_msg_0[] = {77, 17, 75, -35, 63, 101, -14, -98, -86, 9, -17, -97, -70, -31, 100, 57, 15, -79, -127, 65, 116, -55, -39, 88, 86, -35, -54, -88, 67, -36, 19, -5, -39, -83, -123, -15, -70, -66, -60, 67, -44, 75, 41, 32, 84, -112, 20, -80, 30, 53, -27, -119, -90, -81, -105, 46, 112, -14, -95, 126, -60, -11, -81, 35, -23, 84, -89, -61, 50, 68, 86, -63, -101, -109, 92, -57, -84, -80, 85, -11, 124, -53, -4, 23, 12, 51, -53, 93, -114, 62, -1, -65, 33, 54, -76, 62, 109, 30, -7, -7, -96, -6, 54, 113, 100, -10, 101, 112, -125, 72, -41, -66, -54, 64, 20, -36, 115, -24, -15, 10, -47, -83, -11, -9, 1, -65, -117, -48, -8, 66, 68, 124, -84, -110, 124, -85, 40, -29, -57, -49, 46, -30, -10, 89, 43, -40, -1, 2, 107, -46, -52, 12, -34, 35, -119, 105, 121, 59, -54, -122, -62, 27, 101, 63, 90, 79, -6, 115, 49, -38, -23, 1, 84, 4, 4, -73, 29, 4, -20, 57, -77, 120, -88, 65, -98, -101, 59, -7, -111, 12, 85, 80, 113, 11, -110, 66, 99, 65, 107, 123, -87, 35, 124, 102, 35, 71, -16, -81, -101};
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
    msg.setTimeStamp(0.649225120037);
    msg.setSource(35702U);
    msg.setSourceEntity(197U);
    msg.setDestination(56051U);
    msg.setDestinationEntity(136U);
    msg.content_type.assign("KZQCERVWMHOGNFRINCLNWGTWKVTARRGQPCTNRXEJXMLAEPWZQMKFLFJUTORBGTHINOQLOSMGXVJTWBUSEIBFSAYKYBCKJDCLDLKGFPICUVHHBDUBIUJPXYTRKILXRIQZTOLAXDMIQVZSQHAEUYYKPOXQMLOKHYCUSIZTVSEOVLFBNHWKQUSWGFZFMRBNPEHNDMBNCJYFJWXXGBZDGHCPJQTDZVYXGRD");
    const char tmp_msg_0[] = {106, -69, 62, 2, -120, -8, 123, -31, -87, 13, 62, 74, 118, -49, 62, 106, -121, 71, 93, 4, 60, -18, -5, 31, -14, 3, -117, 101, -26, -93, -36, 124, -75, -110, -13, -33, -8, -5, 13, -32, 99, -59, -2, 108, 94, -108, -41, -125, -11, -92, 1, 22, -15, -74, -39, 83, 118, 33, -21, -35, 105, 57, 88, 49, -80, 64, -47, 122, -97, -46, -6, 49, -5, 35, -55, 82, -37, -50, -55, 107, -70, 35, 66, -84, 63, -8, 84, -77, -127, 51, 18, -68, -59, -109, 16, -30, -88, -22, -58, 86, -86, 1, 110, 6, 78, -81, -102, -124, 71, -89, -24, -35, -59, -112, 23, -98, -26, -114, -89, -128, 65, -22, 20, 107, -118, 40, -126, 85, -11, -52, 89, 113, 96, 100, 72, 114, -24, 3, -36, -90, -109, 94, 57, -70, 83, 32, -125, 81, 37, 20, -21, 96, 72, 21, -41, -110, 56, -38, 2, 41, 52, -103, 58, 93, -45, -123, 76, 95, 86, -115, -60, 124, -120, 24, 124, 107, -50, -55, -76, 13, 39, 72, -126, -33, 116, -74, -21, -113, -55, -128, -88, -29, 88, -50, 125, 59, 66, -64, -4, 76, -72, -92, -76, 61, 91, 19, 31, -22, -59, 123, 72, -28, 57, -52};
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
    msg.setTimeStamp(0.0660194668915);
    msg.setSource(1342U);
    msg.setSourceEntity(37U);
    msg.setDestination(17534U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.767010959742);
    msg.setSource(63677U);
    msg.setSourceEntity(152U);
    msg.setDestination(28145U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.147160763755);
    msg.setSource(10111U);
    msg.setSourceEntity(118U);
    msg.setDestination(13023U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.243015743199);
    msg.setSource(20867U);
    msg.setSourceEntity(19U);
    msg.setDestination(29387U);
    msg.setDestinationEntity(123U);
    msg.target = 44351U;
    msg.bearing = 0.445984446583;
    msg.elevation = 0.629905256852;

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
    msg.setTimeStamp(0.388416681689);
    msg.setSource(23148U);
    msg.setSourceEntity(55U);
    msg.setDestination(6523U);
    msg.setDestinationEntity(163U);
    msg.target = 9645U;
    msg.bearing = 0.408973614091;
    msg.elevation = 0.522540729889;

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
    msg.setTimeStamp(0.398208299544);
    msg.setSource(53728U);
    msg.setSourceEntity(191U);
    msg.setDestination(23327U);
    msg.setDestinationEntity(125U);
    msg.target = 15701U;
    msg.bearing = 0.422288477099;
    msg.elevation = 0.407690273714;

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
    msg.setTimeStamp(0.590278486901);
    msg.setSource(47302U);
    msg.setSourceEntity(77U);
    msg.setDestination(29339U);
    msg.setDestinationEntity(228U);
    msg.target = 28437U;
    msg.x = 0.155066210993;
    msg.y = 0.463600296652;
    msg.z = 0.921630501681;

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
    msg.setTimeStamp(0.199323028233);
    msg.setSource(57755U);
    msg.setSourceEntity(134U);
    msg.setDestination(58608U);
    msg.setDestinationEntity(36U);
    msg.target = 41482U;
    msg.x = 0.181168117043;
    msg.y = 0.321408947605;
    msg.z = 0.622465644632;

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
    msg.setTimeStamp(0.724524527488);
    msg.setSource(4188U);
    msg.setSourceEntity(113U);
    msg.setDestination(21901U);
    msg.setDestinationEntity(96U);
    msg.target = 36160U;
    msg.x = 0.302473550278;
    msg.y = 0.0867848904426;
    msg.z = 0.897916610172;

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
    msg.setTimeStamp(0.438598315546);
    msg.setSource(25316U);
    msg.setSourceEntity(202U);
    msg.setDestination(58849U);
    msg.setDestinationEntity(194U);
    msg.target = 40221U;
    msg.lat = 0.817967782146;
    msg.lon = 0.567984666928;
    msg.z_units = 157U;
    msg.z = 0.819285105278;

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
    msg.setTimeStamp(0.237950176287);
    msg.setSource(60997U);
    msg.setSourceEntity(157U);
    msg.setDestination(65175U);
    msg.setDestinationEntity(53U);
    msg.target = 43828U;
    msg.lat = 0.280277510847;
    msg.lon = 0.604009016;
    msg.z_units = 22U;
    msg.z = 0.772856371727;

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
    msg.setTimeStamp(0.168171806662);
    msg.setSource(8802U);
    msg.setSourceEntity(190U);
    msg.setDestination(58041U);
    msg.setDestinationEntity(120U);
    msg.target = 27754U;
    msg.lat = 0.361323268052;
    msg.lon = 0.8005418569;
    msg.z_units = 151U;
    msg.z = 0.292706967645;

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
    msg.setTimeStamp(0.472695327284);
    msg.setSource(14983U);
    msg.setSourceEntity(1U);
    msg.setDestination(37170U);
    msg.setDestinationEntity(196U);
    msg.locale.assign("JFPHGYAPEDEWIGZPOGQEBOFMNPKGZJSPNDGUXKSZSAETTJLVTALSMBFIKVPXYKPGLJEQYADFSRBYKBGFERSYQCCMUNUZNHVOISAZEOB");
    const char tmp_msg_0[] = {-22, -28, 31, 34, -30, 51, 56, 40, -55, -14};
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
    msg.setTimeStamp(0.858349034232);
    msg.setSource(37173U);
    msg.setSourceEntity(171U);
    msg.setDestination(55989U);
    msg.setDestinationEntity(128U);
    msg.locale.assign("WTBODFJLAMRIBJZDKOWMJREILWPNQEMJCBIKSSHRZUIDNENGXWZZJJQZYJOYUAPLDHNGRYCXESFFXPEBLFTTUPOOQTOUWCGZLHMURKBIWQGJMBVBBWECXURGTAERVCIBMKLOWFTVOVYYKSEADTPXWRYZUUSKSWHGIGKKFVNMYFPSTGNXZXPLSQXHHNZHMCHUDFKVQJKHRQLCUIGRZA");
    const char tmp_msg_0[] = {103, -97, -5, 95, -118, 94, 67, 70, -16, -7, -4, -41, 96, 50, 11, 110, -88, -64, -88, 106, -55, 84, 6, -38, -55, 119, 9, 108, 96, 102, -36, -49, -106, 70, 103, -28, -50, 16, 4, 105, -48, -111, 77, -26, 44, 88, 103, -125, -103, -9, -67, -84, -63, 21, -5, 46, 69, 40, 11, -22, -1, -82, -59, -2, 28, -1, 125, 62, 84, 94, -44, 78, 60, -93, -76, -105, 38, -69, -12, 40, -16, -92, -29, 109, -26, -67, 67, 122, 88, -103, -43, 62, -123, -46, -85, 56, -20, -62, -78, 2, -12, -102, 35, -7, -113, -33, -92, -128, 13, -54, -38, -61, -64, -104, -121, 79, 38, 75, 101, -23, 66, -31, 116, 42, -47, -46, 49, -126};
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
    msg.setTimeStamp(0.255186420441);
    msg.setSource(55917U);
    msg.setSourceEntity(218U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(13U);
    msg.locale.assign("UQLFTKUOBBOPNIUHSBCRVCVBOMSFDMHYLQCVYJXNAHSFKGNNAVOGPMQGRIXAKJSIGABQLEJXPCEXAYEIYUSYODWEMULJEZBAMKQMJWQRZKHLRFMCJHKAIHZTZEOPNCDMWGGDLBNTRWLFEJVQWEATTSUDOKLO");
    const char tmp_msg_0[] = {-73, 66, 82, 103, -42, -92, 96, -52, -71, 100, -64, 4, -10, -49, 7, -24, 108, -39, -99, 92, 69, -18, -42, -53, 48, -45, -10, 29, -123, -93, -93, 36, 99, 109, 6, 0, -38, -26, -56, -58, 91, -9};
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
    msg.setTimeStamp(0.515681434165);
    msg.setSource(35948U);
    msg.setSourceEntity(55U);
    msg.setDestination(60740U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.470877843664);
    msg.setSource(16378U);
    msg.setSourceEntity(193U);
    msg.setDestination(11026U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.667717592013);
    msg.setSource(33912U);
    msg.setSourceEntity(159U);
    msg.setDestination(17466U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.779720332108);
    msg.setSource(26421U);
    msg.setSourceEntity(36U);
    msg.setDestination(28636U);
    msg.setDestinationEntity(83U);
    msg.camid = 58U;
    msg.x = 59274U;
    msg.y = 12085U;

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
    msg.setTimeStamp(0.573941394064);
    msg.setSource(60325U);
    msg.setSourceEntity(224U);
    msg.setDestination(52892U);
    msg.setDestinationEntity(209U);
    msg.camid = 204U;
    msg.x = 22872U;
    msg.y = 15932U;

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
    msg.setTimeStamp(0.406990771787);
    msg.setSource(4651U);
    msg.setSourceEntity(151U);
    msg.setDestination(3990U);
    msg.setDestinationEntity(58U);
    msg.camid = 100U;
    msg.x = 5961U;
    msg.y = 43644U;

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
    msg.setTimeStamp(0.638544853693);
    msg.setSource(64527U);
    msg.setSourceEntity(156U);
    msg.setDestination(16976U);
    msg.setDestinationEntity(100U);
    msg.camid = 211U;
    msg.x = 704U;
    msg.y = 56800U;

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
    msg.setTimeStamp(0.747360379584);
    msg.setSource(56130U);
    msg.setSourceEntity(172U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(250U);
    msg.camid = 195U;
    msg.x = 32185U;
    msg.y = 193U;

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
    msg.setTimeStamp(0.385704599534);
    msg.setSource(10426U);
    msg.setSourceEntity(192U);
    msg.setDestination(27412U);
    msg.setDestinationEntity(99U);
    msg.camid = 164U;
    msg.x = 44821U;
    msg.y = 60863U;

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
    msg.setTimeStamp(0.273891728772);
    msg.setSource(29473U);
    msg.setSourceEntity(197U);
    msg.setDestination(17283U);
    msg.setDestinationEntity(210U);
    msg.tracking = 46U;
    msg.lat = 0.852681106034;
    msg.lon = 0.471762814555;
    msg.x = 0.0851359184389;
    msg.y = 0.086021326448;
    msg.z = 0.0430627152832;

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
    msg.setTimeStamp(0.962162085672);
    msg.setSource(57350U);
    msg.setSourceEntity(169U);
    msg.setDestination(46784U);
    msg.setDestinationEntity(155U);
    msg.tracking = 138U;
    msg.lat = 0.204815737107;
    msg.lon = 0.076882313171;
    msg.x = 0.476008265649;
    msg.y = 0.253141868868;
    msg.z = 0.610088224332;

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
    msg.setTimeStamp(0.576789900562);
    msg.setSource(14692U);
    msg.setSourceEntity(243U);
    msg.setDestination(3542U);
    msg.setDestinationEntity(108U);
    msg.tracking = 47U;
    msg.lat = 0.268510040668;
    msg.lon = 0.930471282157;
    msg.x = 0.517867749016;
    msg.y = 0.261113450378;
    msg.z = 0.764912509319;

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
    msg.setTimeStamp(0.444713662338);
    msg.setSource(17914U);
    msg.setSourceEntity(43U);
    msg.setDestination(49130U);
    msg.setDestinationEntity(228U);
    msg.target.assign("JETBIZIXKYKDQEUPYKVUNQQGHSDCNSDMCPDIORFQMELCMTZSKDVPFVNLMLTVPNAXKGIZLGFEEQCWSBJKBKZWLNHUUGTOILHVVWCOSBSYWNNBRTUUEVOMWFHRDJCKGRETUXPQTAJBODQRJYXQLYAJMLARXGPQRWWRNRJWOBSOFFTOWQMHAZAXSDSZEJGKPYLAHIHIOMFGAVPINUCWPFVKISUOBJYAPYZDBHZENFGUX");
    msg.lbearing = 0.961564559107;
    msg.lelevation = 0.723986891674;
    msg.bearing = 0.525194994502;
    msg.elevation = 0.363824474351;
    msg.phi = 0.848750899911;
    msg.theta = 0.645986022601;
    msg.psi = 0.88408914871;
    msg.accuracy = 0.854521625938;

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
    msg.setTimeStamp(0.670044725759);
    msg.setSource(8045U);
    msg.setSourceEntity(128U);
    msg.setDestination(52917U);
    msg.setDestinationEntity(234U);
    msg.target.assign("BWIBRRMQHGCPPVBXSOMKZETGYJPUXEXNQZLRVDNDTCCOELUJCBXWTDLBALNARKBHMTKVOCFCHZNOQKFKWNEUWKJMEFAUNAKGGMMJJDVAIZWATHLCLXRAPYGUROVB");
    msg.lbearing = 0.477080399477;
    msg.lelevation = 0.600174955628;
    msg.bearing = 0.0462584885289;
    msg.elevation = 0.936029223807;
    msg.phi = 0.634167504705;
    msg.theta = 0.170409297992;
    msg.psi = 0.354632617536;
    msg.accuracy = 0.703676508119;

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
    msg.setTimeStamp(0.19878969768);
    msg.setSource(517U);
    msg.setSourceEntity(112U);
    msg.setDestination(42789U);
    msg.setDestinationEntity(153U);
    msg.target.assign("GLRWIDAPAQDFMOSIOXCWUHUMCFZCPU");
    msg.lbearing = 0.775156989158;
    msg.lelevation = 0.571223355189;
    msg.bearing = 0.953991105445;
    msg.elevation = 0.425763843566;
    msg.phi = 0.760796060235;
    msg.theta = 0.956685727866;
    msg.psi = 0.399803264683;
    msg.accuracy = 0.652101029995;

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
    msg.setTimeStamp(0.717420143138);
    msg.setSource(3576U);
    msg.setSourceEntity(191U);
    msg.setDestination(57250U);
    msg.setDestinationEntity(219U);
    msg.target.assign("JEOIAAIWVASHLDUWLFQNLPSMZVFGAFYUOMGMZADOHZESDKQMJIIGQNTBL");
    msg.x = 0.407485686143;
    msg.y = 0.270441920158;
    msg.z = 0.930987490937;
    msg.n = 0.249756869138;
    msg.e = 0.125120570065;
    msg.d = 0.549526531851;
    msg.phi = 0.153690705824;
    msg.theta = 0.57806678893;
    msg.psi = 0.0677808539899;
    msg.accuracy = 0.168276845745;

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
    msg.setTimeStamp(0.538861762947);
    msg.setSource(44311U);
    msg.setSourceEntity(13U);
    msg.setDestination(34352U);
    msg.setDestinationEntity(117U);
    msg.target.assign("JQEAGZUOTLDAAQSE");
    msg.x = 0.347556248376;
    msg.y = 0.516194987646;
    msg.z = 0.193859727395;
    msg.n = 0.565704785491;
    msg.e = 0.578993267666;
    msg.d = 0.598180393859;
    msg.phi = 0.772717402472;
    msg.theta = 0.638747772335;
    msg.psi = 0.474903780299;
    msg.accuracy = 0.785107180937;

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
    msg.setTimeStamp(0.343534777389);
    msg.setSource(1680U);
    msg.setSourceEntity(227U);
    msg.setDestination(9154U);
    msg.setDestinationEntity(7U);
    msg.target.assign("AKZCNTZNAUSRBIMWOXQKJDMGUVBTCWZASIDBNHSTTBFWYADGPSXJWKYCXPDOELHEAJCTOJ");
    msg.x = 0.0434334549674;
    msg.y = 0.782529970178;
    msg.z = 0.15522515286;
    msg.n = 0.642637594958;
    msg.e = 0.703146109237;
    msg.d = 0.766498195684;
    msg.phi = 0.901767981482;
    msg.theta = 0.119344818546;
    msg.psi = 0.601052347719;
    msg.accuracy = 0.538556065473;

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
    msg.setTimeStamp(0.189816645919);
    msg.setSource(6690U);
    msg.setSourceEntity(2U);
    msg.setDestination(7812U);
    msg.setDestinationEntity(229U);
    msg.target.assign("ETDHXQIAGTHFNSJIDGMPLJBDXNBGXWLYUTZWINFPKCYJFNIZBGMWOZCPRWFAFKIGCMQYBRXLAXKLMUAUKSYQJNYHNSZZVNMIL");
    msg.lat = 0.796150428472;
    msg.lon = 0.7940002067;
    msg.z_units = 72U;
    msg.z = 0.0269944157368;
    msg.accuracy = 0.59169471929;

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
    msg.setTimeStamp(0.00252685357013);
    msg.setSource(36547U);
    msg.setSourceEntity(40U);
    msg.setDestination(60803U);
    msg.setDestinationEntity(157U);
    msg.target.assign("DPMIHZEBEGKULKALXPDDSUJJBJADSBOTDYRHZOEBAIVMRANNHMQMDTIXPHTKOFBJKZLIVPLRRIMDNCULLTHUGELDYCOJOSUOBMATEYGTIXWBLRNCGMCQVOGTTAYLYVXCJQNVYQVUZQGDFIJXVYCPFGWIXUSWPKWX");
    msg.lat = 0.202769545604;
    msg.lon = 0.789316496379;
    msg.z_units = 32U;
    msg.z = 0.704479289488;
    msg.accuracy = 0.245198441386;

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
    msg.setTimeStamp(0.893415845325);
    msg.setSource(41327U);
    msg.setSourceEntity(95U);
    msg.setDestination(1707U);
    msg.setDestinationEntity(148U);
    msg.target.assign("YZYKTBRDSACGGQQDCMZTBRJFUUMZFJOWYPQVCUEIQRKPSVXGOWYDTLESORXLVOUOMEREXFZMAXYEKYTQEWEBBMJUNCBCNLDZGBMUAAPPCVOVWTUPIFXXWKJQOWTZCOLCHUTXISNGSKTQLJYVHWOHMHYFAVBPFNBAHWHNS");
    msg.lat = 0.583465916151;
    msg.lon = 0.0987714830268;
    msg.z_units = 119U;
    msg.z = 0.058109698025;
    msg.accuracy = 0.939544305485;

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
    msg.setTimeStamp(0.176684475974);
    msg.setSource(34845U);
    msg.setSourceEntity(151U);
    msg.setDestination(12568U);
    msg.setDestinationEntity(122U);
    msg.name.assign("EDBBHZKPFCLFPORRHBHMOIEWOIXWVHFPXUIMKIMDBKOBMLLHZZGQNOCFIGKIKXDAQWYWYUFVQHNSKPXOTRNRUZDPWTPXPCXVGSLCJERVARRMSYVLNQIFADEVBDEBLAVLVGJWTKOLSEQAFNKMQAHTDZAMQBGLNOOENJF");
    msg.lat = 0.170452993947;
    msg.lon = 0.521257304578;
    msg.z = 0.521783845023;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.0425348326511);
    msg.setSource(64904U);
    msg.setSourceEntity(73U);
    msg.setDestination(24514U);
    msg.setDestinationEntity(242U);
    msg.name.assign("INBEVACAAYVWFARLEEXZIDGJZWNEHULNFTKJMXVBQRNPFGHXEBAUEBJWTISZGOPQCOPSTIMOGYVUGFMGZSKX");
    msg.lat = 0.617540878653;
    msg.lon = 0.296550130734;
    msg.z = 0.365155600577;
    msg.z_units = 28U;

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
    msg.setTimeStamp(0.919968761119);
    msg.setSource(6738U);
    msg.setSourceEntity(61U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(112U);
    msg.name.assign("JDHEZXWOKYVAUWAOPDKURXOCETLRCJEVSRPDDVCBIRTXTNJMHVLLAATSGWKKCM");
    msg.lat = 0.78126478068;
    msg.lon = 0.179343637631;
    msg.z = 0.968736451648;
    msg.z_units = 181U;

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
    msg.setTimeStamp(0.979494598977);
    msg.setSource(25283U);
    msg.setSourceEntity(117U);
    msg.setDestination(40437U);
    msg.setDestinationEntity(144U);
    msg.op = 189U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZMWZIEPUPYUUJCKQAMCLZSAAVRDMBVUFMPWQNHRHARIIZBTAIQZGJLVCOHPPJBTHSSELQRISXOTAFHNOAFKLHRY");
    tmp_msg_0.lat = 0.592223187909;
    tmp_msg_0.lon = 0.79672385578;
    tmp_msg_0.z = 0.141852831608;
    tmp_msg_0.z_units = 47U;
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
    msg.setTimeStamp(0.112332235655);
    msg.setSource(63437U);
    msg.setSourceEntity(8U);
    msg.setDestination(26368U);
    msg.setDestinationEntity(44U);
    msg.op = 253U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EMBFPEMERQPIKKVCAKTKIQYBBYGUHNTXXDQAOLRYWWEJLQONEKQVGDYNFYXMLOVZSSPRDHBDMVHPRDMCVCJWCUIOXNGADZIBMNJNVGIEEQNBOPLRJACAZQJLCVKQ");
    tmp_msg_0.lat = 0.356183323954;
    tmp_msg_0.lon = 0.453073900955;
    tmp_msg_0.z = 0.994272613489;
    tmp_msg_0.z_units = 169U;
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
    msg.setTimeStamp(0.0692811994164);
    msg.setSource(54134U);
    msg.setSourceEntity(44U);
    msg.setDestination(59476U);
    msg.setDestinationEntity(20U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.109816126304);
    msg.setSource(10082U);
    msg.setSourceEntity(100U);
    msg.setDestination(24165U);
    msg.setDestinationEntity(30U);
    msg.value = 0.857414443454;
    msg.type = 60U;

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
    msg.setTimeStamp(0.835632976813);
    msg.setSource(17243U);
    msg.setSourceEntity(192U);
    msg.setDestination(28848U);
    msg.setDestinationEntity(194U);
    msg.value = 0.567559430664;
    msg.type = 70U;

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
    msg.setTimeStamp(0.597939516724);
    msg.setSource(46044U);
    msg.setSourceEntity(2U);
    msg.setDestination(44812U);
    msg.setDestinationEntity(243U);
    msg.value = 0.770089871713;
    msg.type = 75U;

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
    msg.setTimeStamp(0.620233553066);
    msg.setSource(6810U);
    msg.setSourceEntity(68U);
    msg.setDestination(15367U);
    msg.setDestinationEntity(124U);
    msg.value = 0.551452772631;

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
    msg.setTimeStamp(0.559188431854);
    msg.setSource(22396U);
    msg.setSourceEntity(87U);
    msg.setDestination(39525U);
    msg.setDestinationEntity(187U);
    msg.value = 0.028126531922;

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
    msg.setTimeStamp(0.203245075837);
    msg.setSource(3563U);
    msg.setSourceEntity(160U);
    msg.setDestination(15517U);
    msg.setDestinationEntity(208U);
    msg.value = 0.987958893554;

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
    msg.setTimeStamp(0.23224443266);
    msg.setSource(37877U);
    msg.setSourceEntity(113U);
    msg.setDestination(12452U);
    msg.setDestinationEntity(236U);
    msg.timestamp_last_service = 0.139637610652;
    msg.time_next_service = 0.405943145855;
    msg.time_motor_next_service = 0.0808796526357;
    msg.time_idle_ground = 0.896101684905;
    msg.time_idle_air = 0.497856456197;
    msg.time_idle_water = 0.454230445071;
    msg.time_idle_underwater = 0.285850950425;
    msg.time_idle_unknown = 0.194252447113;
    msg.time_motor_ground = 0.894593038157;
    msg.time_motor_air = 0.958411927706;
    msg.time_motor_water = 0.629787785154;
    msg.time_motor_underwater = 0.173675282454;
    msg.time_motor_unknown = 0.212388024822;
    msg.rpm_min = 26434;
    msg.rpm_max = 17721;
    msg.depth_max = 0.11800358301;

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
    msg.setTimeStamp(0.800468255361);
    msg.setSource(7654U);
    msg.setSourceEntity(101U);
    msg.setDestination(58371U);
    msg.setDestinationEntity(240U);
    msg.timestamp_last_service = 0.481461958605;
    msg.time_next_service = 0.066195323489;
    msg.time_motor_next_service = 0.172240826448;
    msg.time_idle_ground = 0.560073460933;
    msg.time_idle_air = 0.556721767154;
    msg.time_idle_water = 0.69547607219;
    msg.time_idle_underwater = 0.520668671399;
    msg.time_idle_unknown = 0.920199319963;
    msg.time_motor_ground = 0.316232284659;
    msg.time_motor_air = 0.722920897246;
    msg.time_motor_water = 0.56069802257;
    msg.time_motor_underwater = 0.65274771012;
    msg.time_motor_unknown = 0.250239761141;
    msg.rpm_min = -20678;
    msg.rpm_max = 5086;
    msg.depth_max = 0.0266565977168;

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
    msg.setTimeStamp(0.543733444455);
    msg.setSource(3739U);
    msg.setSourceEntity(52U);
    msg.setDestination(39014U);
    msg.setDestinationEntity(89U);
    msg.timestamp_last_service = 0.14031466331;
    msg.time_next_service = 0.92517238137;
    msg.time_motor_next_service = 0.732152766715;
    msg.time_idle_ground = 0.968018812809;
    msg.time_idle_air = 0.815469000838;
    msg.time_idle_water = 0.49147756332;
    msg.time_idle_underwater = 0.552386029174;
    msg.time_idle_unknown = 0.356545261189;
    msg.time_motor_ground = 0.48943245202;
    msg.time_motor_air = 0.55373522809;
    msg.time_motor_water = 0.41605335433;
    msg.time_motor_underwater = 0.701831941549;
    msg.time_motor_unknown = 0.630646122825;
    msg.rpm_min = -11403;
    msg.rpm_max = -1415;
    msg.depth_max = 0.335690840544;

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
    msg.setTimeStamp(0.628325302088);
    msg.setSource(62334U);
    msg.setSourceEntity(225U);
    msg.setDestination(33052U);
    msg.setDestinationEntity(42U);
    msg.severity = 200U;
    msg.text.assign("CTNROGYDEITHBQDIVDOJEWXRKTXXYTOZADMWZFSKGRFWNFDAAIJVLMYCNXVELROJQPZYXQHSSECUMTQWHZWBXFA");

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
    msg.setTimeStamp(0.939852765599);
    msg.setSource(30305U);
    msg.setSourceEntity(29U);
    msg.setDestination(20180U);
    msg.setDestinationEntity(58U);
    msg.severity = 186U;
    msg.text.assign("VERZNOFLDXSPCFBFRETPNGSZZJAGRXACFTZIBVGDFWKWDNLNVUIGKYURJBIPVOPQKT");

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
    msg.setTimeStamp(0.0761642479214);
    msg.setSource(36266U);
    msg.setSourceEntity(61U);
    msg.setDestination(13441U);
    msg.setDestinationEntity(221U);
    msg.severity = 94U;
    msg.text.assign("BDMNIFHZLSYXFYBDHFOFBQINTCPECOAFCHLALIOSNMXNAWZCHKVJPWKUUTNCYVWRTEPQETGDWTCUHWRCOPHDUCZSTXZJFFKMNYSCKGISQWAHQGILJLUSJYKMXGGQVKRQNNTAULISERABXALGVDFPVBJGVDGPCUDSMFJULYDBMPAEFYLEJURKNVOXZMWM");

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
    msg.setTimeStamp(0.788388392571);
    msg.setSource(48270U);
    msg.setSourceEntity(130U);
    msg.setDestination(14212U);
    msg.setDestinationEntity(253U);
    msg.channel = -33;
    msg.value = -1610717970;
    msg.gain = 82U;

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
    msg.setTimeStamp(0.306193191608);
    msg.setSource(45465U);
    msg.setSourceEntity(175U);
    msg.setDestination(43994U);
    msg.setDestinationEntity(141U);
    msg.channel = -60;
    msg.value = -1829457669;
    msg.gain = 35U;

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
    msg.setTimeStamp(0.795678889748);
    msg.setSource(18888U);
    msg.setSourceEntity(6U);
    msg.setDestination(55452U);
    msg.setDestinationEntity(248U);
    msg.channel = -81;
    msg.value = 66073453;
    msg.gain = 123U;

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
    msg.setTimeStamp(0.639867455405);
    msg.setSource(58934U);
    msg.setSourceEntity(35U);
    msg.setDestination(40497U);
    msg.setDestinationEntity(204U);
    msg.ch01 = 0.8327227672;
    msg.ch02 = 0.0366404524996;
    msg.ch03 = 0.6078481726;
    msg.ch04 = 0.498741156045;
    msg.ch05 = 0.352449346253;
    msg.ch06 = 0.63165784024;
    msg.ch07 = 0.0194297459601;
    msg.ch08 = 0.77268799695;
    msg.ch09 = 0.204212431572;
    msg.ch10 = 0.9370429316;
    msg.ch11 = 0.81789471447;
    msg.ch12 = 0.981289585685;
    msg.ch13 = 0.307023185613;
    msg.ch14 = 0.304170563422;
    msg.ch15 = 0.0927639143515;
    msg.ch16 = 0.403426880813;

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
    msg.setTimeStamp(0.597637557413);
    msg.setSource(20391U);
    msg.setSourceEntity(233U);
    msg.setDestination(20150U);
    msg.setDestinationEntity(0U);
    msg.ch01 = 0.434437379847;
    msg.ch02 = 0.521807891299;
    msg.ch03 = 0.765608442084;
    msg.ch04 = 0.227507786174;
    msg.ch05 = 0.628441822622;
    msg.ch06 = 0.131410934119;
    msg.ch07 = 0.901599731378;
    msg.ch08 = 0.203664213709;
    msg.ch09 = 0.359825763542;
    msg.ch10 = 0.0586435428208;
    msg.ch11 = 0.283218173141;
    msg.ch12 = 0.849655373824;
    msg.ch13 = 0.526719034306;
    msg.ch14 = 0.795852840453;
    msg.ch15 = 0.508658850565;
    msg.ch16 = 0.656878121993;

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
    msg.setTimeStamp(0.762087478322);
    msg.setSource(42342U);
    msg.setSourceEntity(168U);
    msg.setDestination(14576U);
    msg.setDestinationEntity(162U);
    msg.ch01 = 0.817759423379;
    msg.ch02 = 0.421651570642;
    msg.ch03 = 0.360821857032;
    msg.ch04 = 0.814897495715;
    msg.ch05 = 0.912043153141;
    msg.ch06 = 0.533820217374;
    msg.ch07 = 0.201906563546;
    msg.ch08 = 0.72128943631;
    msg.ch09 = 0.348485456498;
    msg.ch10 = 0.601232508855;
    msg.ch11 = 0.88839886766;
    msg.ch12 = 0.95936374073;
    msg.ch13 = 0.662551348249;
    msg.ch14 = 0.732282766944;
    msg.ch15 = 0.0984685992207;
    msg.ch16 = 0.39437623744;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.784096300529);
    msg.setSource(44185U);
    msg.setSourceEntity(180U);
    msg.setDestination(17429U);
    msg.setDestinationEntity(179U);
    msg.value = 0.691534018255;

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
    msg.setTimeStamp(0.803578646636);
    msg.setSource(32161U);
    msg.setSourceEntity(240U);
    msg.setDestination(18247U);
    msg.setDestinationEntity(158U);
    msg.value = 0.722720921632;

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
    msg.setTimeStamp(0.32605316896);
    msg.setSource(26803U);
    msg.setSourceEntity(84U);
    msg.setDestination(26582U);
    msg.setDestinationEntity(249U);
    msg.value = 0.208438765712;

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

  return test.getReturnValue();
}
