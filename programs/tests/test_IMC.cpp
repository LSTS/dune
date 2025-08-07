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
// IMC XML MD5: b794b0c221e5aa0d1c123a3514b9cf52                            *
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
    msg.setTimeStamp(0.3247247008101799);
    msg.setSource(45938U);
    msg.setSourceEntity(227U);
    msg.setDestination(20301U);
    msg.setDestinationEntity(248U);
    msg.state = 254U;
    msg.flags = 66U;
    msg.description.assign("WVVTEZZNLGXMKTRBPTGZDARVWMVQYEPMDLIKUXGJGIIHSHI");

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
    msg.setTimeStamp(0.6296116209719134);
    msg.setSource(14201U);
    msg.setSourceEntity(70U);
    msg.setDestination(10615U);
    msg.setDestinationEntity(34U);
    msg.state = 220U;
    msg.flags = 82U;
    msg.description.assign("LPWLDTSXVPTOMQYTMZAOFBSAVETHINGGUPRZKMZVWWFBBYJPORICEVOUNXBBBATTQEAGFBOYJBLWKSRPRDQHANHPYWNFZMXWHGURJDDMPGGKIEUOKEGHZQKCPPZUFMXNAXCCLWORYDEEZNJRRXDVGYCXYZYUOLMJWQUSVMLKXCLAHQISDVBFQIEPQKNKUFHVFTEGTZHCTYJDIHIQOBSJXWOSFRINIYSAWXCJVZQRKLUIFTACGHJ");

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
    msg.setTimeStamp(0.7720056274604112);
    msg.setSource(11588U);
    msg.setSourceEntity(127U);
    msg.setDestination(59946U);
    msg.setDestinationEntity(43U);
    msg.state = 40U;
    msg.flags = 67U;
    msg.description.assign("XXSEFAEHTWRZGBKQSSHIRIMYFCIBBZUFLKMUMOGEXVETUFLOERT");

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
    msg.setTimeStamp(0.19686762199698626);
    msg.setSource(37681U);
    msg.setSourceEntity(126U);
    msg.setDestination(50386U);
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
    msg.setTimeStamp(0.19302443363509736);
    msg.setSource(2864U);
    msg.setSourceEntity(168U);
    msg.setDestination(20443U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.5545830442662836);
    msg.setSource(21403U);
    msg.setSourceEntity(157U);
    msg.setDestination(61236U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.06513069949254302);
    msg.setSource(8442U);
    msg.setSourceEntity(145U);
    msg.setDestination(16083U);
    msg.setDestinationEntity(50U);
    msg.id = 123U;
    msg.label.assign("ZUESFGKRHAGHKNVCLDMTRFIUNSPSMOYALWMXFJBIRGXHTVRVMHPGXIEEEXJMVELZADKYSTIFEVQAMFWXTSUQRLBZALWKNWWAPDUBHYQNPVKOCIUFFTIKUNRTAWJWMKWGJVGXPYCQIUARTTLUIDBJDHZASANZJCISSOQCPMFYBWPXCBDSN");
    msg.component.assign("QSXFPHGJBUWCGFXGMSFLSJZITZAHQCYWGDVWUAUVNCBEAXHYJVTPSASRUABLIJINPZZIVPCTAZQBX");
    msg.act_time = 25631U;
    msg.deact_time = 10237U;

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
    msg.setTimeStamp(0.1833607333025099);
    msg.setSource(46401U);
    msg.setSourceEntity(129U);
    msg.setDestination(60883U);
    msg.setDestinationEntity(21U);
    msg.id = 61U;
    msg.label.assign("LRZDADSGUKOJSPHXJGPATRQLUAT");
    msg.component.assign("RSVXESRJUNWCIWFAEYSHOKYJTNJ");
    msg.act_time = 18671U;
    msg.deact_time = 58090U;

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
    msg.setTimeStamp(0.7339359844971636);
    msg.setSource(33676U);
    msg.setSourceEntity(152U);
    msg.setDestination(50362U);
    msg.setDestinationEntity(226U);
    msg.id = 23U;
    msg.label.assign("GBCONUGLCFOEPXJQTVTCZKEBVHQKCSAXKCWLEYVWCPJRCIMZNBPLZFMXDVAFPYVJEHUQTZHLRYSRRBNJNXXXMAOAFOYHIDTKIIEETCLOBYGMPAHEWMFWPUZKIRYJUU");
    msg.component.assign("YFBRWGGHMQVWJICWPOFZJYQONQWGBLHSGOUHPMCIXZSEQESEJRVNPACJLDZHZJSCIIWBRZGTKFKWMBHMEWTFTFKYZMXQXFSUXAZDDRSTPXGKJADNCEUROLOMLHWLCFKDISPYUIQVVTV");
    msg.act_time = 33378U;
    msg.deact_time = 24014U;

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
    msg.setTimeStamp(0.6084555976767889);
    msg.setSource(49736U);
    msg.setSourceEntity(29U);
    msg.setDestination(35878U);
    msg.setDestinationEntity(90U);
    msg.id = 18U;

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
    msg.setTimeStamp(0.3661635345057318);
    msg.setSource(31026U);
    msg.setSourceEntity(13U);
    msg.setDestination(22305U);
    msg.setDestinationEntity(46U);
    msg.id = 126U;

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
    msg.setTimeStamp(0.5462496532291243);
    msg.setSource(30254U);
    msg.setSourceEntity(35U);
    msg.setDestination(30046U);
    msg.setDestinationEntity(230U);
    msg.id = 164U;

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
    msg.setTimeStamp(0.03899912143593676);
    msg.setSource(9785U);
    msg.setSourceEntity(125U);
    msg.setDestination(38619U);
    msg.setDestinationEntity(135U);
    msg.op = 94U;
    msg.list.assign("WYZIWWBFLPZSBXYQPBVGSPGHGETXTGBKYNYFYCVECWXSLAMKLQTSAMQLTHCJCCLFAZIQSOGALOLPFJCDUUKGMABKVKNRCFWIGXFHJPUQEHDOOFZIAMXDNTDYWJUPNCONJH");

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
    msg.setTimeStamp(0.667559611241205);
    msg.setSource(27118U);
    msg.setSourceEntity(169U);
    msg.setDestination(6402U);
    msg.setDestinationEntity(51U);
    msg.op = 157U;
    msg.list.assign("SYUDKXAVZCHLFXIRXCWMPCPUOIZJAHDYQTKQRSXMAKUTNKY");

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
    msg.setTimeStamp(0.6725207883822978);
    msg.setSource(6489U);
    msg.setSourceEntity(105U);
    msg.setDestination(53895U);
    msg.setDestinationEntity(208U);
    msg.op = 157U;
    msg.list.assign("EJIMILOHJMJYPBQQBYFKRIURISFEGJMRZEMEOAQTNLCGPGPLBVYFXRNLWPLUKPUQEMDIABABVGQPUKCKOXMHNNQXEZDJVKCZECDZJFVSYOQMDTIHLXZVTCYEPYNFHHNALWGJTKGOIVEPFNCNWRKQABADYKWGRTCDTBMWTISPDVXSFSHLGHXHQCNJRSOAWWSTXOBM");

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
    msg.setTimeStamp(0.27084019440305385);
    msg.setSource(34654U);
    msg.setSourceEntity(16U);
    msg.setDestination(44028U);
    msg.setDestinationEntity(99U);
    msg.value = 235U;

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
    msg.setTimeStamp(0.142819153960412);
    msg.setSource(30157U);
    msg.setSourceEntity(50U);
    msg.setDestination(60424U);
    msg.setDestinationEntity(243U);
    msg.value = 72U;

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
    msg.setTimeStamp(0.6838559878293172);
    msg.setSource(62038U);
    msg.setSourceEntity(18U);
    msg.setDestination(10250U);
    msg.setDestinationEntity(9U);
    msg.value = 90U;

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
    msg.setTimeStamp(0.5980215583248694);
    msg.setSource(37806U);
    msg.setSourceEntity(123U);
    msg.setDestination(22235U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("YYCFUELNNRLWQHURLNNTBUKONBEGMGWXUUFAWJYMNIJYHEHDRBOWZTRZZPSTFVGITBMISOXLOBXDOKVXAGPHHKQGDSTPEHNOQHKCQXJWFTAIJMMKJJWPTCEUVEHACFPJKJSIIMSSOPCRDVEI");
    msg.message_id = 52066U;

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
    msg.setTimeStamp(0.1308913182538186);
    msg.setSource(28371U);
    msg.setSourceEntity(73U);
    msg.setDestination(32149U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("OBVCJQJCOMDRMFUCSVHGZMEXUUBIDOOJQDTDXYFLTHWEGJGVRUOAWMRTDLHYRMSKDRIJCMKEOHTVTEWWGXEVHLBYNXKFLWPKQFWQSZBANFRNQECBZPPGDZDWJKSZFVTVKYXCIKUWAZPTPEKAMQHZQUURQUGVAFIXOYGLASXTXLHRECYSDPJLOI");
    msg.message_id = 63128U;

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
    msg.setTimeStamp(0.6894502719320121);
    msg.setSource(39937U);
    msg.setSourceEntity(56U);
    msg.setDestination(53185U);
    msg.setDestinationEntity(39U);
    msg.consumer.assign("IQWPJMXSMIEFLNVALGYNSRUCXWCZCGDUEZBQIMPEBV");
    msg.message_id = 24210U;

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
    msg.setTimeStamp(0.8776297062995759);
    msg.setSource(50568U);
    msg.setSourceEntity(2U);
    msg.setDestination(28463U);
    msg.setDestinationEntity(37U);
    msg.type = 187U;

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
    msg.setTimeStamp(0.2871537397956082);
    msg.setSource(9443U);
    msg.setSourceEntity(96U);
    msg.setDestination(49109U);
    msg.setDestinationEntity(157U);
    msg.type = 69U;

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
    msg.setTimeStamp(0.9340048045078263);
    msg.setSource(55457U);
    msg.setSourceEntity(39U);
    msg.setDestination(59473U);
    msg.setDestinationEntity(253U);
    msg.type = 110U;

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
    msg.setTimeStamp(0.48738075083807897);
    msg.setSource(34604U);
    msg.setSourceEntity(102U);
    msg.setDestination(61817U);
    msg.setDestinationEntity(71U);
    msg.op = 114U;

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
    msg.setTimeStamp(0.6469821263049592);
    msg.setSource(24866U);
    msg.setSourceEntity(29U);
    msg.setDestination(9682U);
    msg.setDestinationEntity(234U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.9524214711864454);
    msg.setSource(61520U);
    msg.setSourceEntity(168U);
    msg.setDestination(52510U);
    msg.setDestinationEntity(92U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.5041049896760958);
    msg.setSource(24875U);
    msg.setSourceEntity(144U);
    msg.setDestination(54843U);
    msg.setDestinationEntity(103U);
    msg.total_steps = 77U;
    msg.step_number = 122U;
    msg.step.assign("NTHRZGQOWCDPYTJSZZGHCRVOFXVEBZUIDJXJNEQBQJGLQGBJNYOKHTPFNSFOONYCHEKSRWEZPQKXFKIRVQXLRISUKOZYXRINMSPYBTJAKHWFCTLUPESFFTQFIRFQKGBHCLIAGXGHOWDDBXD");
    msg.flags = 16U;

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
    msg.setTimeStamp(0.3917864086685018);
    msg.setSource(54952U);
    msg.setSourceEntity(196U);
    msg.setDestination(43245U);
    msg.setDestinationEntity(63U);
    msg.total_steps = 250U;
    msg.step_number = 173U;
    msg.step.assign("AMFHEDNYSEEKABVWEKFIEKUFPUOTRHGIMDQXGJJAPZTRIHUNTBHCOXOHLUJDQOBJUZQGNVGJXBNNTZSVAOIVUVCHDCCLMTSQCTBYZLNLRJUIWOGAIQFQXUWCWBMAJPMZGDGWYPDZADHXYJFXRGBTRLOVAMICURXFMFZHSMYMOTWUYCFSJPBSKDREQFIELNKYAPDRKWGDKCX");
    msg.flags = 48U;

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
    msg.setTimeStamp(0.30119002067266576);
    msg.setSource(47815U);
    msg.setSourceEntity(232U);
    msg.setDestination(37316U);
    msg.setDestinationEntity(118U);
    msg.total_steps = 57U;
    msg.step_number = 58U;
    msg.step.assign("ZNCADIGEZKFBVBQIQWXNXBCFODLSHEZHDQGCKWJSGBVP");
    msg.flags = 176U;

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
    msg.setTimeStamp(0.5389904005359077);
    msg.setSource(5779U);
    msg.setSourceEntity(187U);
    msg.setDestination(13492U);
    msg.setDestinationEntity(174U);
    msg.state = 254U;
    msg.error.assign("FQGJGHAIRKILBTWUBKRDUSSLGFNPPXLXJOLWBBLPGQZQJQZTYKJDODUZIRRTISUAEMZXWEYEAHWVTAAESDDNHEUGSZCDTICXHKIJYANGXUSNICVCRYKFXRTOEZFTBFZXAOTEIVFOVPCSPWCYHDHBMTVNFYOWGSUVMOZFXXRZNVWEOPKVHNX");

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
    msg.setTimeStamp(0.7536575581631202);
    msg.setSource(7053U);
    msg.setSourceEntity(223U);
    msg.setDestination(3453U);
    msg.setDestinationEntity(69U);
    msg.state = 28U;
    msg.error.assign("PGVKTVMKGYFODJCFTPAAQFZLRHNWMRBQKLRPYZOOMDJHWAEENZJCOSQRFXIPIYLDYAWZJTSKTQOLQSPDVQEVKWIWUNENASMFPYEXKURGXYWFLPYHTBGHAVCIUFVXUBELXVMGJRXBLGKKHGUTNJHHRACMCFDWBYYTPUPSGZDFNLMKGRNAPRZHWNV");

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
    msg.setTimeStamp(0.43784849404283943);
    msg.setSource(44747U);
    msg.setSourceEntity(193U);
    msg.setDestination(7410U);
    msg.setDestinationEntity(34U);
    msg.state = 90U;
    msg.error.assign("FBXOMHYRGOYELQDTLHOIKCMWIDSQEJZAXCOGKLQLPVWOPIUTQSWPWGSNHUAPQMZVFJKSOFAGEBFDZWBEMCLWCFQQZTBPDLUBWSTXNEKRRAHRGCNJBVKNKDAOGPZMXNYEPUSZEVBBIDUNAYXJFZKARKNLIWEYKFTQCSJOIBMXVHDJPWLDUITGVLTZLBUHHJUTORDFEGXRRRVXZSWCSRCQQYUZXCYPMCXIKFUGINPOY");

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
    msg.setTimeStamp(0.22996954667869363);
    msg.setSource(13393U);
    msg.setSourceEntity(152U);
    msg.setDestination(17020U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.9689098063844193);
    msg.setSource(24832U);
    msg.setSourceEntity(117U);
    msg.setDestination(41084U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.17664390171292454);
    msg.setSource(64958U);
    msg.setSourceEntity(163U);
    msg.setDestination(23105U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.47817465835909834);
    msg.setSource(26304U);
    msg.setSourceEntity(196U);
    msg.setDestination(6997U);
    msg.setDestinationEntity(236U);
    msg.op = 77U;
    msg.speed_min = 0.3876558814075832;
    msg.speed_max = 0.6974308625217086;
    msg.long_accel = 0.46880110398361796;
    msg.alt_max_msl = 0.08752722951821534;
    msg.dive_fraction_max = 0.7712190417885523;
    msg.climb_fraction_max = 0.4601882776701136;
    msg.bank_max = 0.7436334772798271;
    msg.p_max = 0.7132734092231237;
    msg.pitch_min = 0.4272667976153359;
    msg.pitch_max = 0.746942315858331;
    msg.q_max = 0.5041150574305646;
    msg.g_min = 0.948922180297342;
    msg.g_max = 0.2863459388624432;
    msg.g_lat_max = 0.851700919580672;
    msg.rpm_min = 0.7204123817178648;
    msg.rpm_max = 0.10282759965212063;
    msg.rpm_rate_max = 0.2705840478920021;

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
    msg.setTimeStamp(0.5234210577673085);
    msg.setSource(63852U);
    msg.setSourceEntity(101U);
    msg.setDestination(18983U);
    msg.setDestinationEntity(0U);
    msg.op = 158U;
    msg.speed_min = 0.47575400349573405;
    msg.speed_max = 0.29065563902305125;
    msg.long_accel = 0.4834089131948356;
    msg.alt_max_msl = 0.48346341042244523;
    msg.dive_fraction_max = 0.42656858537573683;
    msg.climb_fraction_max = 0.10239338422325017;
    msg.bank_max = 0.30896789628265386;
    msg.p_max = 0.11278114951261775;
    msg.pitch_min = 0.43905520849521407;
    msg.pitch_max = 0.2919089918461948;
    msg.q_max = 0.801735810657875;
    msg.g_min = 0.2996757058095282;
    msg.g_max = 0.09484904724024967;
    msg.g_lat_max = 0.7822578836067895;
    msg.rpm_min = 0.36076677901160403;
    msg.rpm_max = 0.86213162981441;
    msg.rpm_rate_max = 0.4269100255369861;

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
    msg.setTimeStamp(0.5332766056520474);
    msg.setSource(50382U);
    msg.setSourceEntity(179U);
    msg.setDestination(25526U);
    msg.setDestinationEntity(125U);
    msg.op = 55U;
    msg.speed_min = 0.830234340211664;
    msg.speed_max = 0.04456064956249384;
    msg.long_accel = 0.12920860611056484;
    msg.alt_max_msl = 0.9458729105028524;
    msg.dive_fraction_max = 0.11380104017849779;
    msg.climb_fraction_max = 0.8331146785547886;
    msg.bank_max = 0.5382311151539835;
    msg.p_max = 0.5853431932225868;
    msg.pitch_min = 0.630903388159087;
    msg.pitch_max = 0.7109587699901012;
    msg.q_max = 0.7507691378787303;
    msg.g_min = 0.9992169495171189;
    msg.g_max = 0.15316296621407688;
    msg.g_lat_max = 0.5116098582544485;
    msg.rpm_min = 0.36485385393479075;
    msg.rpm_max = 0.8532268970699857;
    msg.rpm_rate_max = 0.5391431152222016;

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
    msg.setTimeStamp(0.8897478262533585);
    msg.setSource(16020U);
    msg.setSourceEntity(4U);
    msg.setDestination(14569U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.5591142662800803);
    msg.setSource(7247U);
    msg.setSourceEntity(172U);
    msg.setDestination(6563U);
    msg.setDestinationEntity(50U);
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 11269U;
    tmp_msg_0.custom.assign("CAYVLRYHBHYNCHAMVRHSNBGUHBDECBOKBOFQCPOZQFFVPRYWNYGZOAUJPAYZUXZBIMZPMQEUYGALDWYJIWSDFCTDOLEHWW");
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
    msg.setTimeStamp(0.6514224120866061);
    msg.setSource(52196U);
    msg.setSourceEntity(60U);
    msg.setDestination(20666U);
    msg.setDestinationEntity(96U);
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.1368228680689687;
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.31752297507163596);
    msg.setSource(3970U);
    msg.setSourceEntity(2U);
    msg.setDestination(64658U);
    msg.setDestinationEntity(231U);
    msg.value = 0.061972049924248096;

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
    msg.setTimeStamp(0.324815330180234);
    msg.setSource(25533U);
    msg.setSourceEntity(96U);
    msg.setDestination(26101U);
    msg.setDestinationEntity(205U);
    msg.value = 0.901656467385329;

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
    msg.setTimeStamp(0.6180684300675847);
    msg.setSource(28312U);
    msg.setSourceEntity(17U);
    msg.setDestination(11669U);
    msg.setDestinationEntity(40U);
    msg.value = 0.4951367972558264;

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
    msg.setTimeStamp(0.9178261652278429);
    msg.setSource(53809U);
    msg.setSourceEntity(25U);
    msg.setDestination(59601U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.09770371123138755;
    msg.lon = 0.9913813914557533;
    msg.height = 0.08101067055759126;
    msg.x = 0.3490522437992092;
    msg.y = 0.6033294541807218;
    msg.z = 0.39431069579249656;
    msg.phi = 0.6576073311971058;
    msg.theta = 0.6784827666058226;
    msg.psi = 0.3660150718127462;
    msg.u = 0.3914049508441747;
    msg.v = 0.45779353288248203;
    msg.w = 0.33449670185976355;
    msg.p = 0.24688105555171125;
    msg.q = 0.9696389843974598;
    msg.r = 0.5694094716485829;
    msg.svx = 0.7142817791071846;
    msg.svy = 0.9932878708696126;
    msg.svz = 0.3131172826669739;

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
    msg.setTimeStamp(0.8551291463947819);
    msg.setSource(46224U);
    msg.setSourceEntity(161U);
    msg.setDestination(41255U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.31494459537310304;
    msg.lon = 0.7302496025807288;
    msg.height = 0.5082078889298864;
    msg.x = 0.5761018428714673;
    msg.y = 0.8443388314056737;
    msg.z = 0.4966156395466659;
    msg.phi = 0.6655741933774657;
    msg.theta = 0.6986300439865842;
    msg.psi = 0.852643898193642;
    msg.u = 0.047811714534696015;
    msg.v = 0.3985324853330928;
    msg.w = 0.3109161190699692;
    msg.p = 0.6880375921576097;
    msg.q = 0.7282189302118264;
    msg.r = 0.4827936096902097;
    msg.svx = 0.21198473940075324;
    msg.svy = 0.7952159333877017;
    msg.svz = 0.9094157523762826;

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
    msg.setTimeStamp(0.9845436733158508);
    msg.setSource(18272U);
    msg.setSourceEntity(173U);
    msg.setDestination(26028U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.1147010309291282;
    msg.lon = 0.7341160351686433;
    msg.height = 0.4056149768095215;
    msg.x = 0.6137478995286475;
    msg.y = 0.5221299025023567;
    msg.z = 0.8828762498599743;
    msg.phi = 0.5287570217403242;
    msg.theta = 0.18988597165666576;
    msg.psi = 0.7226788774166948;
    msg.u = 0.40528167479368227;
    msg.v = 0.9990144539101499;
    msg.w = 0.949847207494131;
    msg.p = 0.8578852017860297;
    msg.q = 0.6280079334240475;
    msg.r = 0.41905965399181455;
    msg.svx = 0.62006770969258;
    msg.svy = 0.036025285020633624;
    msg.svz = 0.46945490221217034;

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
    msg.setTimeStamp(0.08441464406337362);
    msg.setSource(17029U);
    msg.setSourceEntity(157U);
    msg.setDestination(26675U);
    msg.setDestinationEntity(54U);
    msg.op = 22U;
    msg.entities.assign("VPFMKNHEDXOKHHKCFCYJJYMBPGDLAPBONAOTXPSYASUZBGGWSQEZKSJGRYGOMUFPUNWSVRYYQKFCLXVCACBJXEHWQPONBQCRMVAJHQTVFPTVOFU");

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
    msg.setTimeStamp(0.6873601101503043);
    msg.setSource(7695U);
    msg.setSourceEntity(163U);
    msg.setDestination(24977U);
    msg.setDestinationEntity(92U);
    msg.op = 204U;
    msg.entities.assign("CGILAEOKNMUBFXQXMCBQYSHMIPTKQIRVDTFGTXUODBKRMSXDYARKFUQOTWEFSJTRVWNYMHZJNLESEFDCWWFHCVOHBSHBMEJNBWRFJKAAQPWTRZUTVOYMHXWGIJJSPONYOXLURNTAAAZNZAGQMINVWPNUXQWDLQAEIMUJFTVDLDVGDRABGMZDHJLSZKGCKZRLDBJZFSTUPFIJLPIXKVWCPGPIYSYHKYKEUECRGCYZQCOVEOEVQHNXUCSZGL");

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
    msg.setTimeStamp(0.627575345797122);
    msg.setSource(128U);
    msg.setSourceEntity(227U);
    msg.setDestination(22018U);
    msg.setDestinationEntity(157U);
    msg.op = 78U;
    msg.entities.assign("EWYQXNCRTBBVFPCOYWCQXKIVTIUMIGADAZNDNQCUEJZZFSKUCSMJDZMSVEDRLWFYSZTJGEHJCSLVSBTRBIPHXCYRSSHFVDUNVHAQLGNLDFJFBGJLMJDQQEVBPLNEUTHKKXCHUPBIGQGZYRLTYOKUYOZDXKGSCXFRFHIDGOSFNMWLZEKWW");

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
    msg.setTimeStamp(0.6419942132868447);
    msg.setSource(389U);
    msg.setSourceEntity(114U);
    msg.setDestination(61839U);
    msg.setDestinationEntity(38U);
    msg.type = 175U;
    msg.speed = 3488U;
    const signed char tmp_msg_0[] = {64, 111, -106, -84, 94, 124, 67, 34, -57, 77, -79, -42, -76, 27, -91, -107, 44, 35, -20, -121, 27, 92, -57, 95, 92, -43, -64, -116, 28, 60, 55, -38, -54, 64, 69, 86, -68, 29, 74, 117, 14, 121, 19, -19, 36, -20, -32, 122};
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
    msg.setTimeStamp(0.8011195303395242);
    msg.setSource(21435U);
    msg.setSourceEntity(32U);
    msg.setDestination(9798U);
    msg.setDestinationEntity(231U);
    msg.type = 102U;
    msg.speed = 442U;
    const signed char tmp_msg_0[] = {-79, -63, 93, -25, 86, 37, 117, -20, 70, -81, -72, -89, -128, 94, 65, -9, -62, -109, -87, -1, 62, 100, -106, -29, -48, 14, -13, -117, -104, -21, 46, 124, 106, 32, 71, 85, -14, -32, -21, -55, 33, -110, -45, 104, -62, -107, -63, 123, -30, 10, 52, -107, -4, -98, 58, 91, 69, 71, -63, 6, 109, 114, -81, 9, 98, -97, 102, 107, 51, -15, 116, -30, 85, -30, -100, -55, 6, 113, -127, -37, 117, 112, 72, 85, 119, -47, -93, 19, 126, 22, -29, -128, 66, -24, 76, -117, 103, 77, 83, -38, -78, 61, 6, -66, -32, -121, 88, -81, -19, 73, 33, 99, -79, -91, 94, -13, 54, 99, 25, -59, -58, 74, 29, -115, -78, 118, -101, 38, -45, -72};
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
    msg.setTimeStamp(0.516793341472611);
    msg.setSource(19419U);
    msg.setSourceEntity(147U);
    msg.setDestination(43434U);
    msg.setDestinationEntity(125U);
    msg.type = 149U;
    msg.speed = 13884U;
    const signed char tmp_msg_0[] = {-1, -95, 110, -34, -106, 33, 94, -128, 38, -82, 104, 1, -40, 28, 31, 25, 25, 101, 103, -82, -116, -54, -120, -95, 79, -126, 69, -124, -71, -8, 30, 92, -2, 16, 118, -77, 55, 8, 60, -90, 62, -65, -66, -60, 82, 56, -83, 18, 77, -35, 35, 94, -67, -18, 10};
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
    msg.setTimeStamp(0.5287967419045931);
    msg.setSource(27416U);
    msg.setSourceEntity(102U);
    msg.setDestination(25445U);
    msg.setDestinationEntity(239U);
    msg.op = 169U;
    msg.tas2acc_pgain = 0.5876207792660749;
    msg.bank2p_pgain = 0.4516499307475693;

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
    msg.setTimeStamp(0.05411534969717269);
    msg.setSource(14217U);
    msg.setSourceEntity(95U);
    msg.setDestination(20025U);
    msg.setDestinationEntity(246U);
    msg.op = 175U;
    msg.tas2acc_pgain = 0.8734042144337766;
    msg.bank2p_pgain = 0.32970258562588595;

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
    msg.setTimeStamp(0.5532113013200138);
    msg.setSource(64518U);
    msg.setSourceEntity(51U);
    msg.setDestination(21009U);
    msg.setDestinationEntity(16U);
    msg.op = 37U;
    msg.tas2acc_pgain = 0.9301062305709443;
    msg.bank2p_pgain = 0.9085878054362587;

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
    msg.setTimeStamp(0.8638040920850418);
    msg.setSource(62715U);
    msg.setSourceEntity(69U);
    msg.setDestination(4772U);
    msg.setDestinationEntity(121U);
    msg.available = 84402653U;
    msg.value = 108U;

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
    msg.setTimeStamp(0.23923747019706554);
    msg.setSource(62196U);
    msg.setSourceEntity(45U);
    msg.setDestination(15201U);
    msg.setDestinationEntity(171U);
    msg.available = 572034225U;
    msg.value = 222U;

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
    msg.setTimeStamp(0.5380309928700581);
    msg.setSource(54356U);
    msg.setSourceEntity(21U);
    msg.setDestination(55318U);
    msg.setDestinationEntity(5U);
    msg.available = 65111841U;
    msg.value = 2U;

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
    msg.setTimeStamp(0.8485517220273533);
    msg.setSource(21826U);
    msg.setSourceEntity(219U);
    msg.setDestination(54111U);
    msg.setDestinationEntity(217U);
    msg.op = 29U;
    msg.snapshot.assign("QPBBPHGBNIAAKBWYEXXDYIFZDWTCICVEBWXTKHLDJEOGYMENIUTMXERURVUEZIXZDVKAWWRYBMFLAGTFKZSIYZUPWRVRLJJFMHURPHSTPC");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 56U;
    tmp_msg_0.value = 155U;
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
    msg.setTimeStamp(0.5069365925262991);
    msg.setSource(13520U);
    msg.setSourceEntity(7U);
    msg.setDestination(19706U);
    msg.setDestinationEntity(231U);
    msg.op = 92U;
    msg.snapshot.assign("GCUUZYUYWUZQRNDGXXFCNTA");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 55U;
    tmp_msg_0.frequency = 1009599873U;
    tmp_msg_0.min_range = 15741U;
    tmp_msg_0.max_range = 57456U;
    tmp_msg_0.bits_per_point = 254U;
    tmp_msg_0.scale_factor = 0.566570021484624;
    const signed char tmp_tmp_msg_0_0[] = {77, 90, -2, 112, -97, 21, 72, -13, -20, -41, -11, 102, 70, -80, -16, 115, -76, -9, -96, 67, -78, 68, -97, 116, 100};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.1146465400282447);
    msg.setSource(50486U);
    msg.setSourceEntity(124U);
    msg.setDestination(5213U);
    msg.setDestinationEntity(73U);
    msg.op = 63U;
    msg.snapshot.assign("KBBAYLWLPKDXGZZMOIHMJYOMLPYPRUHVBMXEGSFVDBZERPMLXETQJNUNCXPMYSUTQRETAJQIORZZGLKCAXAIZAHUSUVLEFKJICIIQNFVHDSQ");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 211U;
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
    msg.setTimeStamp(0.7822650296336453);
    msg.setSource(620U);
    msg.setSourceEntity(215U);
    msg.setDestination(31370U);
    msg.setDestinationEntity(200U);
    msg.op = 240U;
    msg.name.assign("OTOLLCMGQIYKAQXKPDNHTQICAOFLLVLHMQYIQUVONXAPGXHZPYNXTGUBPCNTACSJLGUVSJXRDWWWUIXBPIPJSDUIHFAONAPDGSXDNYCJLKZNZEXDIEHIFHBXRTIBPEBMYSEGBYBLZKFCLMPNJVVZGYKVQTMUMFXKQJWOCESUSBPYYVKHAZYUFMACRQTNHGF");

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
    msg.setTimeStamp(0.9504188948884115);
    msg.setSource(63353U);
    msg.setSourceEntity(211U);
    msg.setDestination(46289U);
    msg.setDestinationEntity(107U);
    msg.op = 169U;
    msg.name.assign("AHMGFCNKPQQXNIWVWRPXESBTCLOBLUOJYCIYVHMOBDWPFZXZUUPTRFELSTWDTPDKGCTKBQNLKJEBNISAZGDLNQPURMXIVSPNTDMNIMHYOXHPDAVERRFVZAAZJJDMYGLHWRRWEOYHEZLHTOTESWISKEOBRCHUUHSPXOUQNQYOAVSAYBGGUOZXBBLDTJGKWJIJLMYXXCKUKZQGDQZCFQVVWKJCHKFVPWRSCJFITLMSEX");

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
    msg.setTimeStamp(0.25011322743056696);
    msg.setSource(32153U);
    msg.setSourceEntity(211U);
    msg.setDestination(22394U);
    msg.setDestinationEntity(116U);
    msg.op = 102U;
    msg.name.assign("EYELAGPXXYKTFCLQJAHIQGVXTGWVHSRFOGPANNQTDYTXYAUHIHEIOALIBZKFGERGVWHWPPJUQRPWWMZHXBVBBXCCLYCMYPPLMNJ");

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
    msg.setTimeStamp(0.6736602607366367);
    msg.setSource(58066U);
    msg.setSourceEntity(55U);
    msg.setDestination(18042U);
    msg.setDestinationEntity(206U);
    msg.type = 190U;
    msg.htime = 0.23597268344973577;
    msg.context.assign("ZCKWDABMEZJLGNFTEICDULCEKMTFQLJQVIURMVUEUMAZVDXUVCOISBOTOYSLPQBYLEIREUXYMYKDCKDQBOJBGXFVORJZGAMMCANHFRXHADDWBFFDYWBIHVOVARKRATSYESQIPNMXRNJACRIOPPWGQUYMJPUGYMXEXVZFHQZCKNKNEUQSTZHTHPWHWLJLSZGWS");
    msg.text.assign("WIUENYTLJPUCMCBSDQPXUSEXQSGQEXTFPLWDJLDBXBVOVWSYAOHSRURFARTGIVLQRONFIGZHAVJOOBGVOZZHKYSADCWTYMBWXQTOWVJUQXLPECA");

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
    msg.setTimeStamp(0.19230430964514356);
    msg.setSource(9846U);
    msg.setSourceEntity(126U);
    msg.setDestination(43685U);
    msg.setDestinationEntity(169U);
    msg.type = 11U;
    msg.htime = 0.1503071654131094;
    msg.context.assign("ZRJQFIJDVYIPQABWJQPFSFSUKBQNPUQCKYQEZPKTUGVISRGQTALOOSUJZOPCPKGUXPKBIZDYGRDYKMFHMRLJDUTUCNBLETHDBWNAFJRXHVTQOAGCHZIDOLTMBIVEHAPVXOTEZOPTHERXEETUFHWRZNXQZGCNDFYSTOPIVSOGEYYXXBAVDLFGYMWWKJBNXNHKKAZWVEYLUVCEBQRYDMWWGHMSJ");
    msg.text.assign("OLGNQJVICZJWYTMKXJEUPTTJKOFBTXQEZJLWYLGNYMLISVRMHZQPKYDXNKYXXGICLDHRELURKVCCPZQEGEZSFRYOVBNGOIDBCSXMPEUEHRTPSAGBFLUTOAFSRGFNVBTFAADHIPAGPEHDMCWHAMWJDNHQICCYAJOFO");

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
    msg.setTimeStamp(0.8064986512627365);
    msg.setSource(56354U);
    msg.setSourceEntity(225U);
    msg.setDestination(13315U);
    msg.setDestinationEntity(8U);
    msg.type = 85U;
    msg.htime = 0.7440356075367693;
    msg.context.assign("LELPBUJTHOXSWDUTHZICQGMQFLYNGNWXAHVJUBSQAPWATAVEINSRSGTHIYRZPJKEVQUDYPKS");
    msg.text.assign("PNVKFFOBAWBKKFXAV");

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
    msg.setTimeStamp(0.27126012887401674);
    msg.setSource(45432U);
    msg.setSourceEntity(55U);
    msg.setDestination(30722U);
    msg.setDestinationEntity(96U);
    msg.command = 119U;
    msg.htime = 0.28909968211529935;

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
    msg.setTimeStamp(0.5035728635187142);
    msg.setSource(62108U);
    msg.setSourceEntity(196U);
    msg.setDestination(42675U);
    msg.setDestinationEntity(200U);
    msg.command = 153U;
    msg.htime = 0.23568810477594304;

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
    msg.setTimeStamp(0.46724822912638864);
    msg.setSource(22513U);
    msg.setSourceEntity(110U);
    msg.setDestination(43971U);
    msg.setDestinationEntity(97U);
    msg.command = 59U;
    msg.htime = 0.24948377185660386;

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
    msg.setTimeStamp(0.18239632084958712);
    msg.setSource(56071U);
    msg.setSourceEntity(199U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(201U);
    msg.op = 74U;
    msg.file.assign("ZDYJRZHDRRYKTMMQISLEYGFDPGZAEWZKMFBYVEQAXDDDZXDYACQCUHOACYHVCUGEKKVOSULF");

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
    msg.setTimeStamp(0.46935397628665365);
    msg.setSource(51628U);
    msg.setSourceEntity(187U);
    msg.setDestination(36822U);
    msg.setDestinationEntity(227U);
    msg.op = 41U;
    msg.file.assign("RKHRGGWVDQOKMHMYLPYBYTSCAGBBRZXVUTBMZIJUKHNRYRSUQSLEKPCWSSVUGXNVLSBFCGMDBAWPWNVVUYUXQECUJFMPWFFKKFDTSLKIIZEQIECNGUJYDQXPNYQQOHJOGAVWZTXPCXIAXDLOQJWE");

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
    msg.setTimeStamp(0.8687748494066571);
    msg.setSource(24372U);
    msg.setSourceEntity(153U);
    msg.setDestination(8654U);
    msg.setDestinationEntity(171U);
    msg.op = 27U;
    msg.file.assign("KZHEIZYLYEZSPFVNGJJPGECITBLBUJLNZTXIMEBXESHACBUNOXROLXIRBBIMTVOSOHVPAFMAUPQWGJSDYCWDUTPYFMOPMDPTWGCHEOEBGPLLLGJWCXIPAOVHWDDFADTRQMWIMAHKFRNMTDREWYCCZSAFKDRVQKCEZGJAZRQHPKFBKNZZGUJORYOLKFHHUSJIVJEZMYDVXXQIWFULNWQCHS");

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
    msg.setTimeStamp(0.8611925638901479);
    msg.setSource(58192U);
    msg.setSourceEntity(82U);
    msg.setDestination(21704U);
    msg.setDestinationEntity(170U);
    msg.op = 31U;
    msg.clock = 0.45294551023649277;
    msg.tz = -45;

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
    msg.setTimeStamp(0.15379104508614672);
    msg.setSource(14040U);
    msg.setSourceEntity(227U);
    msg.setDestination(47566U);
    msg.setDestinationEntity(250U);
    msg.op = 223U;
    msg.clock = 0.22298411029422605;
    msg.tz = 16;

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
    msg.setTimeStamp(0.6978398555729832);
    msg.setSource(42454U);
    msg.setSourceEntity(222U);
    msg.setDestination(54929U);
    msg.setDestinationEntity(32U);
    msg.op = 82U;
    msg.clock = 0.35042380424479447;
    msg.tz = -104;

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
    msg.setTimeStamp(0.6170601078622923);
    msg.setSource(64621U);
    msg.setSourceEntity(251U);
    msg.setDestination(26344U);
    msg.setDestinationEntity(134U);
    msg.conductivity = 0.44461973294370705;
    msg.temperature = 0.4980453986917084;
    msg.depth = 0.19218492026001366;

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
    msg.setTimeStamp(0.8701225885231468);
    msg.setSource(32235U);
    msg.setSourceEntity(53U);
    msg.setDestination(33786U);
    msg.setDestinationEntity(192U);
    msg.conductivity = 0.46369543792023926;
    msg.temperature = 0.25819663040366714;
    msg.depth = 0.01804710899164974;

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
    msg.setTimeStamp(0.7465388198602693);
    msg.setSource(8667U);
    msg.setSourceEntity(158U);
    msg.setDestination(36415U);
    msg.setDestinationEntity(44U);
    msg.conductivity = 0.3013722930629421;
    msg.temperature = 0.26586934168949805;
    msg.depth = 0.49651056576304076;

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
    msg.setTimeStamp(0.5265933922263255);
    msg.setSource(58079U);
    msg.setSourceEntity(253U);
    msg.setDestination(57170U);
    msg.setDestinationEntity(93U);
    msg.altitude = 0.9206192669884408;
    msg.roll = 31518U;
    msg.pitch = 37272U;
    msg.yaw = 7560U;
    msg.speed = 1816;

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
    msg.setTimeStamp(0.04507795635922207);
    msg.setSource(57996U);
    msg.setSourceEntity(72U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(102U);
    msg.altitude = 0.3996563095214085;
    msg.roll = 40672U;
    msg.pitch = 1419U;
    msg.yaw = 59287U;
    msg.speed = -22876;

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
    msg.setTimeStamp(0.858126069068595);
    msg.setSource(52673U);
    msg.setSourceEntity(12U);
    msg.setDestination(34637U);
    msg.setDestinationEntity(189U);
    msg.altitude = 0.3068746789987713;
    msg.roll = 3687U;
    msg.pitch = 42231U;
    msg.yaw = 32396U;
    msg.speed = 12184;

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
    msg.setTimeStamp(0.6881244024023703);
    msg.setSource(28441U);
    msg.setSourceEntity(203U);
    msg.setDestination(11723U);
    msg.setDestinationEntity(44U);
    msg.altitude = 0.46189335840148016;
    msg.width = 0.06677479106596462;
    msg.length = 0.8575973526951501;
    msg.bearing = 0.7394762898226015;
    msg.pxl = -2379;
    msg.encoding = 191U;
    const signed char tmp_msg_0[] = {80, -100, 15, -106, 55, -105, -27, -52, 5, 38, 40, 33, -61, -16, 117, -8, -22, -48, 16, -35, 75, 0, -87, -19, 51, 13, 62, 105, -73, -60, -91, 120, 118, -96, 29, 28, 11, 100, 4, -17, -83, 87};
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
    msg.setTimeStamp(0.009227875987940504);
    msg.setSource(16710U);
    msg.setSourceEntity(154U);
    msg.setDestination(5157U);
    msg.setDestinationEntity(195U);
    msg.altitude = 0.8447901978186518;
    msg.width = 0.639127191872514;
    msg.length = 0.9465313740625882;
    msg.bearing = 0.33862808192147853;
    msg.pxl = 12854;
    msg.encoding = 42U;
    const signed char tmp_msg_0[] = {-101, -44, 31, 74, -53, -13, 72, 60, 43, -62, 103, 32, -55, -126, -15, -45, 27, -48, 50, 125, 85, 12, 17, 89, 23, -109, -35, -54, 126, -63, -6, -115, -18, 72, -122, 103, -115, 80, -128, -7, -74, -43, -114, -125, -54, -79, -107, 18, 72, 79, -9, -99, 109, 30, -52, -94, 30, 99, -36, 43, 107, 68, -83, -123, -34, -108, 126, 62, 32, -5, -54, 120, 10, 54, -67, -6, 122, -64, -73, -42, -127, -49, 86, -26, -100, 102, -24, -100, 32, -15, -128, -75, -19, 32, -29, -102, 125, 45, 98, -7, 6, -26, 101, -12, 99, 102, -3, 1, 17, 48, 41, -25, -76, -61, 45, 111, -77, -67, 43, -36, 38, -65, 22, -79, 21, -76, -2, 112, -65, 81, 45, -98, -117, -106, -77};
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
    msg.setTimeStamp(0.7472836659592943);
    msg.setSource(40126U);
    msg.setSourceEntity(152U);
    msg.setDestination(13375U);
    msg.setDestinationEntity(198U);
    msg.altitude = 0.24134658750094284;
    msg.width = 0.33051255557031123;
    msg.length = 0.28665514372701706;
    msg.bearing = 0.47811631631009066;
    msg.pxl = 16001;
    msg.encoding = 197U;
    const signed char tmp_msg_0[] = {13, -74, -115, -7, 87, 2, -96, 47, 68, -118, 123, -127, -11, 63, 11, 121, 19, 101, -31, 46, -103, -54, -23, 31, -1, 83, 60, 11, 35, 105, -101, 110, 33, -126, 13, 7, 7, -46, -88, -117, -80, -101, 97, -85, 90, -81, 46, -24, 117, 49, 38, -66, 14, 110, 21, -95, -34, 1, -58, -99, -56};
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
    msg.setTimeStamp(0.3518782813208554);
    msg.setSource(55763U);
    msg.setSourceEntity(214U);
    msg.setDestination(44155U);
    msg.setDestinationEntity(222U);
    msg.text.assign("ZQBWTUIIBFXQBHMXHXXWYLGSYTHNUEGLCJJYLJOZDYDVAHNWRFQEHZHIQEMMIMCDNKYUUEZNKAPUPVYAPDZLMFRTDGQSBJXYRTACGOOCLKYUUKGASVJQBENIXMQLGSDSVSOFAWTVPZVQTSXKRRWJEDSFNMLWOJVVABFLWUCBEGOPHYUFVRPGXJFHBNTMZFMIQOKHANICILD");
    msg.type = 101U;

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
    msg.setTimeStamp(0.542626213196115);
    msg.setSource(51635U);
    msg.setSourceEntity(68U);
    msg.setDestination(50751U);
    msg.setDestinationEntity(91U);
    msg.text.assign("KKFWTIHCSVGDVURTGQEIBBZDXFNKIHUJPUSKULVCNMFZEXYYYRPOBWRBDFQNQFRRHLMVOHYYQBDOZMFZVLCOCIWSUGEWYOVIPTTPNNUKVTJNJDHRZMWARSTSLDGFKSSQNHRLTSYZMAKLZUGQFHJJRYNUDYWPMAODUXGAEIXPHALSDENQAHFVCCJJXZOGARBPCXWDMGGTJ");
    msg.type = 54U;

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
    msg.setTimeStamp(0.538819213461941);
    msg.setSource(42862U);
    msg.setSourceEntity(217U);
    msg.setDestination(56447U);
    msg.setDestinationEntity(245U);
    msg.text.assign("AVIDAOESKIPRNBKJGHABZOXGVFRJFEABWUOMMEDKRIUZPZPKYCQNNTXIGNCJCSUALZRBOTWTZHPQXLZDACUFKTFKQRRYJNSOADTRNBMHJSSGWXVTIUSOYEUGXSRXIOGVIEIZYUOZQBLKYKCE");
    msg.type = 240U;

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
    msg.setTimeStamp(0.18089273136014505);
    msg.setSource(49000U);
    msg.setSourceEntity(154U);
    msg.setDestination(60979U);
    msg.setDestinationEntity(189U);
    msg.parameter = 84U;
    msg.numsamples = 178U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 38611U;
    tmp_msg_0.avg = 0.4807977410688531;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.3483951468362061;
    msg.lon = 0.7244873364365735;

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
    msg.setTimeStamp(0.2175826000942055);
    msg.setSource(21773U);
    msg.setSourceEntity(22U);
    msg.setDestination(24981U);
    msg.setDestinationEntity(68U);
    msg.parameter = 139U;
    msg.numsamples = 244U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 48098U;
    tmp_msg_0.avg = 0.679264871407607;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.3196013163434762;
    msg.lon = 0.49397673381190577;

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
    msg.setTimeStamp(0.07073070095200884);
    msg.setSource(2096U);
    msg.setSourceEntity(233U);
    msg.setDestination(33913U);
    msg.setDestinationEntity(175U);
    msg.parameter = 6U;
    msg.numsamples = 188U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 47725U;
    tmp_msg_0.avg = 0.8176032351339992;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6656303932823566;
    msg.lon = 0.42584151812040594;

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
    msg.setTimeStamp(0.05469037759839035);
    msg.setSource(56915U);
    msg.setSourceEntity(247U);
    msg.setDestination(15675U);
    msg.setDestinationEntity(69U);
    msg.depth = 46043U;
    msg.avg = 0.2024257966745221;

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
    msg.setTimeStamp(0.6000367613105998);
    msg.setSource(24293U);
    msg.setSourceEntity(216U);
    msg.setDestination(32947U);
    msg.setDestinationEntity(180U);
    msg.depth = 49152U;
    msg.avg = 0.20650494421057064;

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
    msg.setTimeStamp(0.006283370972844815);
    msg.setSource(23077U);
    msg.setSourceEntity(10U);
    msg.setDestination(43803U);
    msg.setDestinationEntity(139U);
    msg.depth = 45439U;
    msg.avg = 0.125140539560611;

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
    msg.setTimeStamp(0.5539014293234525);
    msg.setSource(19207U);
    msg.setSourceEntity(233U);
    msg.setDestination(9888U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.46952445940810583);
    msg.setSource(46488U);
    msg.setSourceEntity(151U);
    msg.setDestination(1298U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.3454305111890412);
    msg.setSource(30742U);
    msg.setSourceEntity(247U);
    msg.setDestination(62521U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.8579820997029011);
    msg.setSource(2660U);
    msg.setSourceEntity(224U);
    msg.setDestination(54676U);
    msg.setDestinationEntity(186U);
    msg.sys_name.assign("PIZIMZTQUFSEXXHBFCIOLAGWPVVICGUFKAPGNRDVBZLLNRXAGDFAAUFGBLEDPGKULFTCFDIPUAAEYOCWYQBIJMNLQSYOVEYYQCHXJWHQWSXJWUKRHOZNAVPXZWQRKOQHXTECUMTLIWPOVYKBOJGSVMREHDYWSBAHMDSUXOJODGGGUZDTVBE");
    msg.sys_type = 201U;
    msg.owner = 29246U;
    msg.lat = 0.7363231597909282;
    msg.lon = 0.2409085306878479;
    msg.height = 0.43775409473708904;
    msg.services.assign("HTQLGJDTUKXQZTQWETQLXJEZABJHHULUGHNRVYDHJIWYIXSKMRYSHQXTAJVTADNBSXXOMHHAJFWLNUOLRGJYETWPOFRMLCBSMSSDGIFBONLZMNDRZAPBGZFRNDQYZHTEORNNIMBESKWQZEFVOMMLYYPGALBLCKBUDVPPXWWUATKSYQPKPFBCFCNURHKRIQPIGDVCUVKGGRGIWJZV");

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
    msg.setTimeStamp(0.9472334894204878);
    msg.setSource(23235U);
    msg.setSourceEntity(85U);
    msg.setDestination(54697U);
    msg.setDestinationEntity(239U);
    msg.sys_name.assign("NYSEWJDOCYCBPIMYQIFAFJMAJZIXRWLBBBZEXXGRUHFKYFPOSYHAQJFAWQONJDSIMBHJXTZSPYOHSJWCELCKVGSVTWMLRKZF");
    msg.sys_type = 201U;
    msg.owner = 27469U;
    msg.lat = 0.022261777863360366;
    msg.lon = 0.26431572389590796;
    msg.height = 0.4085335118163167;
    msg.services.assign("BDZDSEQVIRIKWEPMUWSCGZDDJFFXNPFKECCRKJSKUUQVTLOQHBTNMRNQSONKXIBJPMZUOHDDBJXGAJKPAGPEPJAEVOZPGUHENFUHVDLAWLIYHOYSZDZPNSLWVUYBVRYXMHFXGLGATTGQSBJXWNCQOXLLCVIBQRLSNNKKLXGCRQPW");

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
    msg.setTimeStamp(0.3005382989395673);
    msg.setSource(54117U);
    msg.setSourceEntity(58U);
    msg.setDestination(28145U);
    msg.setDestinationEntity(16U);
    msg.sys_name.assign("LWYZNKMZOBRUKTEAHRGEAOSXYORQHISVGDATZCDLIHAMBCUIENSSFSTSHRNQBRKSWKZJMBTWMTJONHPDGUICDGYALTWBLEAFVMALCPQROUHFFKQXUJXYHOKBPVWCGUNXPDSXXIGVIBOFPPQSPFGQBTZEWLITOFPAMWVQZJORLVNJUXJNHJEPXJDDQZBFYWYQUVVKUDANCXDSTJKUYCLTFER");
    msg.sys_type = 201U;
    msg.owner = 11724U;
    msg.lat = 0.5264252387328354;
    msg.lon = 0.07115919978421636;
    msg.height = 0.3023969344745523;
    msg.services.assign("CAXQJKGMUAPIZEMPVEYBCFDBNPNVBGTGDDZMMDYAORQXLJYXCRVYAJXTFLCPKHGRIXCRTEKTWZLDSUNREVVBXQBZWZKGLUVVZJGQHMMFBHQLOPTJPAYSQGICMAYNOLDHCHUIVHNQTFTKLEYNZLXISOHBIWUBXKWQOMRBNTYPAOYRWJSPSJXNJRFFCUDAISBZUWWSYIFZWEXHCNOMLIDEOJQKFNEPFHDKFA");

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
    msg.setTimeStamp(0.2799183917981297);
    msg.setSource(27001U);
    msg.setSourceEntity(156U);
    msg.setDestination(24905U);
    msg.setDestinationEntity(66U);
    msg.service.assign("KMLVIFUCTAEOZORSCPURZRICPQFQBEKCIOFPBIZBDIXSGCADJTUEJUKIGWEJALRGPQMKCHHMDICCPJUMJLDHEQFKMNGQOZWXXJIDSNQNAYUWVAJQTTTPXNRPZDUVBNVVWAYLXRWJEKDGTHOYMNDGGBAKRVAJRTHNGDEOVASWHFSPMOXLZYOFYRPIWTYUPQT");
    msg.service_type = 172U;

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
    msg.setTimeStamp(0.7083174171252535);
    msg.setSource(50974U);
    msg.setSourceEntity(121U);
    msg.setDestination(1268U);
    msg.setDestinationEntity(237U);
    msg.service.assign("CQCFIIPVLJULWFLLBSZOVKBUDLJLUMLQQWEUUMEBPWNYYNWJHKOHV");
    msg.service_type = 215U;

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
    msg.setTimeStamp(0.4295510481211179);
    msg.setSource(40625U);
    msg.setSourceEntity(53U);
    msg.setDestination(31672U);
    msg.setDestinationEntity(207U);
    msg.service.assign("KQXOKWKHGCWGHMKMSCEZIAYEZXFJXQEEUFODVPWPYZVDVYAUIEJFYJMCZBGZSMTIBOAYYBEDQCRJSTHMZEKCGJLUBMECVTBLNGZPRIHSHDDGXQOROANJIAMUDSRWHSQNFTSVEWNUJAPLDAKOULVYFKZCQNIWPYAR");
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
    msg.setTimeStamp(0.28226097232632663);
    msg.setSource(57366U);
    msg.setSourceEntity(102U);
    msg.setDestination(5414U);
    msg.setDestinationEntity(82U);
    msg.value = 0.5129497663991827;

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
    msg.setTimeStamp(0.048388065371082645);
    msg.setSource(30391U);
    msg.setSourceEntity(206U);
    msg.setDestination(9023U);
    msg.setDestinationEntity(3U);
    msg.value = 0.6043337887299142;

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
    msg.setTimeStamp(0.40250058710171155);
    msg.setSource(9776U);
    msg.setSourceEntity(220U);
    msg.setDestination(3891U);
    msg.setDestinationEntity(134U);
    msg.value = 0.6827610956109273;

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
    msg.setTimeStamp(0.9990968404481146);
    msg.setSource(49054U);
    msg.setSourceEntity(227U);
    msg.setDestination(46406U);
    msg.setDestinationEntity(229U);
    msg.value = 0.3875190789105921;

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
    msg.setTimeStamp(0.5942804724029187);
    msg.setSource(6197U);
    msg.setSourceEntity(122U);
    msg.setDestination(57912U);
    msg.setDestinationEntity(43U);
    msg.value = 0.428252291359871;

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
    msg.setTimeStamp(0.5611479601585091);
    msg.setSource(65298U);
    msg.setSourceEntity(224U);
    msg.setDestination(12836U);
    msg.setDestinationEntity(89U);
    msg.value = 0.599321593612067;

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
    msg.setTimeStamp(0.12228314411378749);
    msg.setSource(24209U);
    msg.setSourceEntity(94U);
    msg.setDestination(15204U);
    msg.setDestinationEntity(143U);
    msg.value = 0.05050390934289617;

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
    msg.setTimeStamp(0.8496766157358968);
    msg.setSource(11045U);
    msg.setSourceEntity(188U);
    msg.setDestination(17882U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5087931953978677;

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
    msg.setTimeStamp(0.658580013122972);
    msg.setSource(58744U);
    msg.setSourceEntity(29U);
    msg.setDestination(38338U);
    msg.setDestinationEntity(206U);
    msg.value = 0.9646466509630491;

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
    msg.setTimeStamp(0.04729371326001719);
    msg.setSource(547U);
    msg.setSourceEntity(240U);
    msg.setDestination(59722U);
    msg.setDestinationEntity(46U);
    msg.number.assign("FELXISUWYBWUEZZRATMTTPORKDDISCMRDXQZFXOLVNCNTYQYZOKZMNWAUULPNIKSPQYETBMXDSKSSXTHXFRKNLQHGTGEULYINMFQTWTBZAIPPJZOKMBAHSECHBGPYCCKOHIFYSUHBRVUGPDRWJXMFDIBUPJOGFHEAJLZYVOHNTPJINWAJPWFLLRJXRBGMVCAMHKNHCJVFMLOBEOAZEEWWRQ");
    msg.timeout = 32737U;
    msg.contents.assign("VSNOQLREIVDJDIFMENMRMBECGAFCTTUCEMRFKWRKVKKRGQRWTBGWAJBCJZARZNMICUXLCGRYGHTSITLBVQBEOKQZESVUNBFSJQPEWTGLV");

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
    msg.setTimeStamp(0.46429280874440837);
    msg.setSource(49630U);
    msg.setSourceEntity(35U);
    msg.setDestination(6493U);
    msg.setDestinationEntity(111U);
    msg.number.assign("UPDXGSPMGQIOVSIZYHZTHFBNFOZJQKXZPHREZQONPYCIMYERUYHFDGECLKDEN");
    msg.timeout = 49020U;
    msg.contents.assign("KWBGCOOKYVICLMTXPWUPDUQXQHPZKTERKSNANIAMGAPTDEEMAWVDGTWAFBOGDQDVGYBOJELLKXNORRQSCEYBRZBOTTFMIIZTJYFPGLLWLMHTSWUYNXYXNCNKCZDPWUHJFAXHPAHDLINNRPWDJJJQ");

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
    msg.setTimeStamp(0.8793221488874269);
    msg.setSource(25387U);
    msg.setSourceEntity(8U);
    msg.setDestination(39316U);
    msg.setDestinationEntity(159U);
    msg.number.assign("BDTDAETNXIVVTMIPJEBGSWGBNZHOINIZNECLWJPOWNFIVSFCKYXMDMJCLUQUGORHCUJZBGGXDSVYOXYWRBDZWKYZTCUQRTFCNSHXAKHODJRKPDHPHRVAAXIUGPBWQBQYJPJRGVTZLZXNYJKMWUJSOLXAIFALXVRUEQ");
    msg.timeout = 51041U;
    msg.contents.assign("ZBBHVOHBOJX");

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
    msg.setTimeStamp(0.3705968364394707);
    msg.setSource(20826U);
    msg.setSourceEntity(51U);
    msg.setDestination(44988U);
    msg.setDestinationEntity(76U);
    msg.seq = 3237559621U;
    msg.destination.assign("BEELAQHYUBZBWXJBQIYWLNRRTVAJQIVJMGMHKTRECEFPJAZMMWJNCIHWMDCCCFSLQUAOGFYDPXCIRSGYFGNLCAOMENGISDRIWNOVIPACTNANAKBQEIYNUQHKXLXJKSDPKBVMKCDVXCTJRKZVGEFKYDJXJUOPVLQYA");
    msg.timeout = 62702U;
    const signed char tmp_msg_0[] = {-35, 20, 51, 5, -17, -91, 108, -61, 57, 106, 31, -65, 115, 86, 36, 7, 75, 1, 108, -12, -47, 95, 2, 26, 77, 25, 48, 6, 30, -74, 111, -3, 0, -2, -34, -124, 42, -28, -4, -38, 124, 85, 31, -2, -109, 62, -76, 124, 26, -64, -52, 62, 26, 121, -28, 86, -9, -70, -95, -81, 1, 63, -95, -3, 61, 125, 122, -31, -74, -36, 79, 85, 15, 91, -119, -49, 46, -53, -102, -35, 62, -28, -107, -68, 79, 44, -86, 7, -42, -95, 91, -83, -114, -105};
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
    msg.setTimeStamp(0.07136057913283922);
    msg.setSource(38176U);
    msg.setSourceEntity(59U);
    msg.setDestination(51933U);
    msg.setDestinationEntity(184U);
    msg.seq = 541859923U;
    msg.destination.assign("WRZKUPEEJSOPKMUCFCQJGVP");
    msg.timeout = 14508U;
    const signed char tmp_msg_0[] = {-64, 7, -82, 74, 63, 119, 100, 118, 85, 79, 110, -116, 8, 60, 78, -45, -67, -105, 71, 73, 86, -44, -25, -47, 96, 55, 79, -78, -87, -84, 4, -21, 87, -4, -29, -65, 38, 66, 33, -56, -124, -93, 18, 53, 34, 124, 22, 80, 26, -13, 13, -113, 3, 3, -59, 19, -32, 85, 18, -67, 74, 67, 123, -107, -25, -121, 63, 25, 107, -33, -126, -98, -118, 111, 72, -88, 21, -127, -5, 93, -121, -37, -94, -19, -73, -124, -79, 22, -51, -121, 33, 20, 83, -112, -78, -124, -28, -81, 95, -11, -59, -4, -76, 85, 56, -128, -12, 72, -119, -8, -37, -14, -89, -73, -62, -114, -118, 40, -69, -108, 43, 114, 19, 67, -56, 112, 70, 126, -41, 104, 11, -97, -105, -33, -14, -109, -58, 58, 105, -78, -55, 105, 74, 86, -121, 21, 84, -70, -56, 101, 84, 28, 81, 21, -50, -99, 34, 80, -106, -50, 68, 116, 124, -65, -9, 63, 18, 83, 59, 113, -64, -45, -107, -57, 57, -124, 65, -79, -97, -54, -19, 24, 86, -51, -28, -90, 21, 90, 63, -63, -28, -12, 56, -127, -16, 100, 0, -86, -124, -90, 121, 18, 79, -20, -4, -24};
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
    msg.setTimeStamp(0.9136248771856594);
    msg.setSource(18679U);
    msg.setSourceEntity(120U);
    msg.setDestination(31052U);
    msg.setDestinationEntity(170U);
    msg.seq = 1017635044U;
    msg.destination.assign("GSRVVHWWOVBILPDMDTEXLTSNRXSHKTIVEMCAWCZPRCMFKKGLZOMSGGNATAEIUDSBETBOAWHTRERCYEZXHFDBVDKGQTJQIHJNXSMXPYZUOTUCNYBQJYKQVGPYZKEUDUBMGZAFKEYHNMPWLJNLJBZUNRGJSAKXGSYJQUBRHIQOLCWDTMWKWIRLUVPUAFLCQBVCJKRFJXRSQIXXNIHTPDYSV");
    msg.timeout = 58476U;
    const signed char tmp_msg_0[] = {61, 112, 46, 112, -111, -28, -110, 84, 115, -87, 21, 33, 18, -6, -58, -98, 19, -100, -120, -69, 15, 16, -61, 51, -75, -88, 117, 32, 106, -77, -59, 44, 126, 88, -1, 66, -40, -110, -123, -39, 126, 11, 11, -100, 47, 102, 66, -48, 113, -126, 113, -11, -99, -72, 6, -12, 118, -9, -93, 71, -127, -118, 76, 53, 86, 89, -86, 60, 27, 106, 42, -1, -16, 26, 21, -120, -89, -72, -61, -23, -21, -94, -88, 34, 109, 11, -56, 46, 38, -119, 81, 74, -89, 26, -67, -84, -115, -54, 72, 93, 31, 80, -32, -90, 119, 86, -5, -9, -115, 109, -35, -93, -13, -110, -65, -32, -53, 13, 20, -41, -110, -57, -64, -18, 0, -88, 83, 6, -61, -74, -119, -60, 84, 125, -100, 14, 82, -33, 30, -9, -121, 125, 115, -46, 93};
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
    msg.setTimeStamp(0.513761690774502);
    msg.setSource(34810U);
    msg.setSourceEntity(100U);
    msg.setDestination(19782U);
    msg.setDestinationEntity(35U);
    msg.source.assign("XVOAFLRAVXHMLIVSSTQZCGGRIPUXUAWSFTUGREPDCKRSLCSATLUODZIUFYQQYEXDYQOBDHJNVPYAXWOIFDKLIAYBONDGU");
    const signed char tmp_msg_0[] = {-125, -117, 2, -3, 0, 24, 111, -25, -85, -86, -23, -128, 119, -116, -48, 119, 75, 107, -13, -95, 85, -8, -25, 51, 77, -48, -91, -93, 12, 125, -11, -100, -20, 56, -6, -124, -64, 35, -61, -31, 81, -25, -22, 38, -41, 97, 13, -70, 58, 75, -67, 59, 80, 62, 7, 88, 5, -91, 79, 33, -127, -124, 40, 22, -5, 78, 27, -24, -6, -78, 98, 78, 124, 123, -91, -64, 111, 74, 63, -50, -42, -44, 34, -20, -43, -54, -120, -90, -82, -30, 27, 45, -34, -85, -109, -41, 97, -91, -3, -26, 115, 125, -90, -8, -12, -14, -95, 109, -82, -36, 35, -34, 84, 88, 109, -16, -56, -99, 28, 57, 23, 40, 77, -91, 114, -34, -73, 75, 0, -2, 105, 89, -51, 122, -93, 6, 15, 25, -63, 67, -37, -63, 1, -10, -5, -45, 78, 119, -69, 76, -17, -27, -65, -2, 90, 89, 87, -117, 93, -81, -114, -127, 34, -67, 103, 69, -1, -78, -39, 118, 62, 86, 34, 68, 123, 87, -71, -70, -20, 16, 73, -18, -27, 60, -17, 33, 97, 54, 48, -57, -5, 86, 69, 9, 124, 42, 112, -115, -75, -123, -30, 113, 120, -76, -112, 90, 109, -44, 20, -10, 8, -92, 15, -117, -105, 117, 94, -24, 14, 97, -117, 2, 18, 48, 37, 91, -116, -97, 59, 91, -49, -128, 102, -66, -54, 90, 98, -96, -85, -74, -101, -45, 95, 85, -92, -100, 12, 95, -116, -59, 74};
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
    msg.setTimeStamp(0.5133779869057234);
    msg.setSource(65416U);
    msg.setSourceEntity(51U);
    msg.setDestination(14222U);
    msg.setDestinationEntity(240U);
    msg.source.assign("SNRCCCMDVTGYNELADBTOQUPBHDEGRYFWVUFYJSVJCCSIHCFBPZVTXLVKQBLKHAEGXYSBXJPZPFDWSSBEJXHZOHEUUIVNJMJENEACQLLRILDFOSPHLVIYPOMQCKMZD");
    const signed char tmp_msg_0[] = {-11, 31, -39, 28, -94, -92, 62, 91, 117, 94, -52, 18, -123, 117, 0, -126, 11, -97, 6, -62, -38, -30, 63, 108, -14, 83, -121, 57, 100, -56, 59, -24, -37, 111, 29, -13, -121, 65, -27, 126, -69, 93, 57, 14, 60, 99, -101, -34, -9, -10, -123, 61, 15, 87, -36, 105, 14};
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
    msg.setTimeStamp(0.20744905035639727);
    msg.setSource(53894U);
    msg.setSourceEntity(105U);
    msg.setDestination(17730U);
    msg.setDestinationEntity(28U);
    msg.source.assign("HHEELEPLLHNBBMJAESURUDKFYKRD");
    const signed char tmp_msg_0[] = {-109, 106, -71, -6, 10, -70, -58, 79, -93, 74, 85, 0, -67, 46, -6, -86, 10, -24, 9, -88, 12, -32, 33, 112, -59, 67, -67, -127, -114, 25, -28, 79, 104, 30, -100, 124, -124, 56, -116, -98, -24, -20, -85, -56, -38, 81, 122, 15, 103, -79, 71, 33, -95, -34, 103, -45, -36, 36, -110, 78, 19, -117, 99, 76, -76, -74, 13, 20, 88, 116, 43, -59, 72, 65, -90, -60, 24, 94, 91, 29, -56, -86, 29, -81, 118, 84, -116, -45, -58, -43, 39, 45, 67, 48, -18, 69, -34, 122, -46, 70, -38, -57, -21, -26, 25, -61, 112, -30, 106, 92, 98, 112, 20, 86, 54, 82, 96, -125, -4, -21, 63, -121, -128, 96, 108, 110, 119, -52, -55, 51, -67, -26, -97, -87, 0, -96, 8, -83, -36, -61, -72, 39, -2, 67, -65, -7, -17, 74, -56, 82, 76, -11, 95, -16, 35, -115, -54, -72, 24, -88, -23, 66, 102, -4, -31, -50, 91, -102, 59, -117, -126, -5, -21, 67, 123, 44, -41, 75, 92, 99, 28, 74, -101, 88, 38, 81, -47, -103, -121, 123, -81, -60, -96, -68, -41, 117, -109, 5, 96, -30, 28, -21, -21, -79, 26, 3, -110, 83, -26, -66, -74, 121, -126, 28, -35, 39, -81, 69, 47, -123, 92, 13, 79, -20, 125, -25, 76, -118, 121, -114, -42, 65, 86, -50, -122};
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
    msg.setTimeStamp(0.8640334085982182);
    msg.setSource(56066U);
    msg.setSourceEntity(31U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(111U);
    msg.seq = 925858988U;
    msg.state = 49U;
    msg.error.assign("WWIBWVJGFMUHTNLLBGDPHVQSLRKFONCGAUELJJFZPGOBCLFCYXKSIRXWDMCIPHBQDQONIDXMZIFABLSTSBZKXKTCNYLJFQVVZAHCOVTALGWNHEGJHSZWPEEYQOZZSGXFXRUJLAJMOTISSYIBOXSARXZD");

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
    msg.setTimeStamp(0.7825649317527384);
    msg.setSource(34833U);
    msg.setSourceEntity(209U);
    msg.setDestination(27754U);
    msg.setDestinationEntity(210U);
    msg.seq = 2963689054U;
    msg.state = 16U;
    msg.error.assign("GMEKXCDLENGVHZTLHTPVKQUAQJOLZNHRYXNDH");

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
    msg.setTimeStamp(0.34432061509077816);
    msg.setSource(47498U);
    msg.setSourceEntity(89U);
    msg.setDestination(31708U);
    msg.setDestinationEntity(153U);
    msg.seq = 1959591520U;
    msg.state = 4U;
    msg.error.assign("QMSEQTCXSZLOTFCOQBAOLWKAQVXQTGJRNKIMTPPCFYLGFKJSPGYVUWLLHGRISGVYZHGDBYIICXZLJCPDWWLJGEFMPTPQYOJESUUUDUTDKTYFKJYHSQWGDAESBKQABNVVRSEHC");

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
    msg.setTimeStamp(0.706660281687064);
    msg.setSource(21737U);
    msg.setSourceEntity(244U);
    msg.setDestination(48053U);
    msg.setDestinationEntity(227U);
    msg.origin.assign("YLMXHPZOTNXRVIGUIIZCRSCEMGJGSVQLBWURRGZDTJRTHXEYKNRMEFWUDVYBHQQHAQHLOGDLCJFWEUKNSFQX");
    msg.text.assign("ERAVJYOICOQXJPGYBADOMBMEUKZXIMPVIXZDNALQTDLTQWNWCPLHQIJJFODTJUYCTJHHXAURGUVYDDKXKYDSOJBZAMSURN");

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
    msg.setTimeStamp(0.9381260069390227);
    msg.setSource(45242U);
    msg.setSourceEntity(12U);
    msg.setDestination(38576U);
    msg.setDestinationEntity(177U);
    msg.origin.assign("AUGVURCLRNLHPDRKSOZMMJNBQNNAXGNPOYCETGYMOJEWGIXGJXEPXKFEZFVMYYIZHGIQLVBDUTKHTYY");
    msg.text.assign("FVFYKDKEZIIUMIXIHYQWZBJNGONFAPLDPFAIFOCAATCPPPXXMVRRSTEKAGVDBKTTELWSQLWFMHRMAHVQCVDGCQJDZTMHZHYZHQZSITGYYNULXXRFCLOHWTRJDDYDYPDJGICVZQBOOBRBRPNKJKGLAEIOCMOMQXESKIKAKWNSOALXJESPUGTLYSLKPJENSWNXHEZNJUBXWYZTJFC");

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
    msg.setTimeStamp(0.8025263468053859);
    msg.setSource(30397U);
    msg.setSourceEntity(126U);
    msg.setDestination(44219U);
    msg.setDestinationEntity(34U);
    msg.origin.assign("TZTQOIZQUAKMR");
    msg.text.assign("XYJLWMOFMAURURXPUJSXEHYRARTRVUAYGOXOHMMQ");

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
    msg.setTimeStamp(0.5960914048783801);
    msg.setSource(44629U);
    msg.setSourceEntity(95U);
    msg.setDestination(55268U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("HABEHTYBLJISRSKPWYPRLZCZHVAWJNWBHCVMOW");
    msg.htime = 0.10973483397650774;
    msg.lat = 0.6503777390742176;
    msg.lon = 0.5916393076168949;
    const signed char tmp_msg_0[] = {112, -9, -19, 101, -98, 18, -101, -10, 114, -108, 27, -96, 114, -3, -116, 69, 69, -128, 123, -1, -27, -47, 40, -30, 33, 23, 122, -128, -58, 68, 72, -111, 57, 74, -121, -91, -88, 45, 88, 56, 31, -3, -17, 43, -72, -94, -100, 78, 93, -67, 44, 49, 59, 77, -45, 61, -65};
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
    msg.setTimeStamp(0.3472658265739501);
    msg.setSource(50986U);
    msg.setSourceEntity(157U);
    msg.setDestination(40164U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("QEVQHXZGKENYBHAIWRAONBRLCJRGZUPUDTVXJGRPZALOKECDISCQAMBSOPNHAOXIQSRDCEYBMLUWCOPODWDKUXQXUNLRSNGNFMXCJVQVQHIPDSPZYZYHHWBMPYTFAOSTFTETUIKFGAFZJTYDZZRJJWYEMFSIOHBLGGGVJCCMLNIZVODMMKXWERXJFKZQLULFACVJ");
    msg.htime = 0.04832597993547616;
    msg.lat = 0.8158532010946176;
    msg.lon = 0.19352888617704478;
    const signed char tmp_msg_0[] = {102, -22, -58, -42, 14, -112, -29, -5, 82, -125, 118, 105, 16, -13, -103, 45, 79, -77, -78, -65, -112, -70, 93, -123, 30, -106, 61, 77, -52, 48, -74, -25, -103, 74, 36, 93, -63, -23, 13, -89, 28, 109, -34, -28, 98, 2, 61, 45, 86, 69, 66, 53, 82, 104, 33, 59, 91, -103, 51, -92, -105, 79, 55, -3, -72, 51, 53, 66, 118, 11, 8, -27, 16, 8, -111, 84, -65, -60, -92, -49, 29, -34, 104, -128, -62, 93, -2, -12, 116, 100, -31, -89, -78, 68, -16, 108, -108, -45, -30, 50, -40, -125, -125, -18, 15, -109, -35, 125, -16, -79, -99, 45, 126, -125, -61, 76, 102, 28, 38, -108, 67, 64, 16, -113, 87, 103, -103, -30, -66, -17, 54, -10, 32, -118, -19, -112, 102, -24, 100, -55, 4, -81, -28};
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
    msg.setTimeStamp(0.93058877966365);
    msg.setSource(3567U);
    msg.setSourceEntity(177U);
    msg.setDestination(7512U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("HRCWXMOAPGPRKUQKASGQYWFTDMDGQFXIUHTMZBICKZPMYUZBTCKXHLCUVLMQKEXRGVWNFAGWYAXKRPAHXNQONITHOZVVLMPTVNVEUBQONBSMBCESBXNWOAHWFSZLYNENPSESOLMKNJRAVDWXYWPJFJPJQIJECBZOITDVSPYZAEQYIRLEVCRUETUJDJATJZDPSJNAWSRWGEOMJXHOXVGUCCIBOLUFGDDLDDGSKRYL");
    msg.htime = 0.058820042994970234;
    msg.lat = 0.4321033627515508;
    msg.lon = 0.6135436119731735;
    const signed char tmp_msg_0[] = {45, -75, 64, -4, 113, 64, -61, -124, -1, -49, -118, -100, 103, 38, 21, -105, 71, 111, -77, 98, 84, 31, -30, 12, 13, -34, -27, 71, 58, 102, 66, -72, 104, 90, -64, -95, -17, -117, 10, 126, -32, -118, -50, -99, -24, 96, -2, 14, 84, -67, 89, 29, -99, 33, 95, 93, -106, 78, 58, -45, 78, 115, -8, -95, -27, -75, -120, -125, -36, 62, -60, 100, -110, -99, -93, -50, -109, -37, -31, -33, 27, 22, -115, 76, -123, -16, -47, -101, -61, -82, 7, 74, 37, -30, 52, -128, -62, 114, -108, -105, -101, -98, 47, -115, 29, 68, 125, 35, -88, -85, -64, -73, 98, 33, -16, -37, -78, -63, -82, -109, -113};
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
    msg.setTimeStamp(0.16868678288244698);
    msg.setSource(53029U);
    msg.setSourceEntity(12U);
    msg.setDestination(62120U);
    msg.setDestinationEntity(225U);
    msg.req_id = 28090U;
    msg.ttl = 64658U;
    msg.destination.assign("PNVAQZIUBZYRRJKLLGCKDYCQCOMNDTRHFOXAUUSNHULVBELUKKZMFFBYYBLNQXYFDORJMVPROMXOAHASQEDBMCVTEEZZPDMJSNNUZSORWSWWARVGSGWTGEPPEPRJUGCWWKUIDBLCEWQTNIPHCMFVIWDQRQXAGMEBTZLSHYSASLKUIQGIHZJXOOWYCFZHKVPJJGROLSXXKGFNEHJDJVTFCAJDKGYPTLAXBUTIVTMXINWKYOFVMZQTPYEQIIDN");
    const signed char tmp_msg_0[] = {12, 124, -119, -114, 61, -125, -67, -59, -54, 32, -123, -126, -68, -79, 24, -6, -121, 79, -74, 121, 48, 65, -63, 64, 99, 41, -99, -65, 99, 65, -75, -6, -3, 90, 18, -52, 110, 64, -78, -39, 8, -68, -102, -125, -103, 48, 2, 61, 16, 61, 43, 18, -3, 51, 110, -21, -112, -16, -59, -19, -61, 112, 117, 119, -62, -66, 29, -115, -26, -34, -78, 62, 89, 71, -116, -11, -128, 35, -88, -53, -114, 52, 117, -110, -79, -128, -74, -48, -108, -111, -86, 50, -40, 101, 37, -89, 94, 104, -80, -66, -80, -59, 35, 25, -84, -85, -121, 18, -77, -19, 122, -23, 69, 126, -43, -57, 65, 103, 28, -31, 40, 87, -16, 97, 95, 38, 12, 125, -35, 126, 57, -71, 125, 62, -90, -117, -119, -96, -53, -110, -100, 111, 85, -2, 55, 61, 92, 37, -68, 39, 106, 53, -102, -30, 8, -75, 68, -50, -21, -26, 97, -96, 50, 22, 33, 49, 85, -91, 27, 69, 83, 43, 65, -88, 89, 4, 106, 65, -34, 78, -76, -38, -108, 68, 17, 19, 72, -20, 101, -58, -35, 29, -44, 101, 38, 117, 67, 103, -70, 92, 7, 51, 30, 26, 15, 108, 122, 31, 29, 70, -119, -85, -61, 70, 38, 26, -112, -119, 55, 19, 3, 1, 37, 16, 5, -125, 7, -126, 106, -18, -34, -97, -23, 91, 17, -122, 69, -57};
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
    msg.setTimeStamp(0.13177313407440128);
    msg.setSource(43087U);
    msg.setSourceEntity(1U);
    msg.setDestination(21865U);
    msg.setDestinationEntity(172U);
    msg.req_id = 38215U;
    msg.ttl = 56562U;
    msg.destination.assign("UEHHLKJIURBJJAPXHEBDBSXWCXRVGSFGZXMTCNQCAAVITSWWPRBBIRFRMNK");
    const signed char tmp_msg_0[] = {-66, 71, -93, 93, -73, -21, 3, 21, -9, 10, 36, -31, 16, 14, 70, 70, -86, -67, -54, -16, 21, 45, 7, 6, -8, 28, 29, -35, 95, -86, 27, 85, 4, -64, 22, -27, 115, -35, 32, 124, -14};
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
    msg.setTimeStamp(0.7523017104202393);
    msg.setSource(36176U);
    msg.setSourceEntity(223U);
    msg.setDestination(50986U);
    msg.setDestinationEntity(236U);
    msg.req_id = 58773U;
    msg.ttl = 34796U;
    msg.destination.assign("RXNHXCIIJIEBZZYRNYYWVDFKYZEVDAPIACTKYNSTTLORLWUIOVEPAZTSTCFXGJFLKOBOVXRMCZMYVMJIDHOBKGEAQQKDNXVWJQHPCLRABVIFZYKUTOGULPDGUGUHNUXSHKDDPKWEHBLPVVTXRADN");
    const signed char tmp_msg_0[] = {46, -52, -63, 62, 59, -23, 33, 55, -2, -11, 90, -23, 54, -5, 107, 16, -35, -128, -96, 113, -28, -44, 60, -54, -73, 8, 79, -29, 81, -55, -79, -54, 94, 87, -39, -82, -76, -108, 5, -48, -123, -9, -123, -81, -95, 89, 60, 67, 65, 63, 8, -73, -125, 108, -55, -52, 14, 16, -1, -118, 108, 103, 116, 60, -51, -82, 46, -124, -96, 77, 32, 76, -63, -86, -44, -114, -54, 40, -106, 55, -128, 109, -89, 11, -2, -35, 85, 0, 21, 87, 91, -19};
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
    msg.setTimeStamp(0.8835194954557988);
    msg.setSource(28095U);
    msg.setSourceEntity(89U);
    msg.setDestination(23309U);
    msg.setDestinationEntity(145U);
    msg.req_id = 5390U;
    msg.status = 203U;
    msg.text.assign("TXIIBYNXSXZGCBC");

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
    msg.setTimeStamp(0.1584280719889687);
    msg.setSource(24719U);
    msg.setSourceEntity(75U);
    msg.setDestination(58685U);
    msg.setDestinationEntity(49U);
    msg.req_id = 14676U;
    msg.status = 117U;
    msg.text.assign("EMOMJABNZQWQEMDWIGSRVUGKEAEZBRTZNRJVGBHWJGFJNEOHCOADLPNCZETKBIDTMFZFKRJCINIPUELTYOHTJDPFRHGPOYISLAAXYWQTYZIJUSQQCJUSVDKNTUUBXWLCXRBPXQNTAFISPBXPIAVJXOFXQYCCIZNUEYELGNLBRKUDKKWGOVOHLCSZCHEOAMTLFLKGGY");

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
    msg.setTimeStamp(0.6811881056514921);
    msg.setSource(35362U);
    msg.setSourceEntity(178U);
    msg.setDestination(24881U);
    msg.setDestinationEntity(173U);
    msg.req_id = 18166U;
    msg.status = 36U;
    msg.text.assign("WJYCXSALCGVLHRRZNYKBBNACPUZYTZQSTONHVGUKURYITVDWZHE");

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
    msg.setTimeStamp(0.8933795426675017);
    msg.setSource(46918U);
    msg.setSourceEntity(235U);
    msg.setDestination(38539U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("LCUYHUNGVGJYCSTSZZOQJLKNDSEPZHDKVQMCAGVEPNKLRZANALDXTUHROSYFDJISJWBKOWVJHGXKAEPRTLOEHHFLIFGMEWHXLFVZSRTUPBLXHFINWPPRLTAZVQPXBVMUGZSIBDEVJEOKQQJYBKIUGDWWDRMKCWPRHNYFOYNBMSRQSFMQZCHLMGTXNJOYEOUCZIOMSCBROXKNCQYEQUDJNBRIEAWYYUXPZIG");
    msg.links = 855689082U;

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
    msg.setTimeStamp(0.6485079329505152);
    msg.setSource(55147U);
    msg.setSourceEntity(38U);
    msg.setDestination(27555U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("HNRKFRONFGCXOLQPOXEHVXIXDQDPASRAQWYWLCLIYMJTMFAAXVSCSMDSYYITXUSZGWXRGLCHOPQXJBMNSYKIBERDHLPWTPKTZTSJYTKIFNTGAPVDMRPIHDOEVMMNMDUMGNVCCJEBZZLQYAJADLGBQMNVRZFBFASTXCLURUWTQCYYIZPGSVKAQBTERQUXPKHJHHQCPZOKGFEJCVLZZBINJ");
    msg.links = 973757180U;

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
    msg.setTimeStamp(0.8837536106981786);
    msg.setSource(23965U);
    msg.setSourceEntity(222U);
    msg.setDestination(58744U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("VVFPXESSITKQMGLBRMOTGNGGEUHHCVHEXENAPAFOWLPFVRKIYLZCORQSBLHUCYHNPTAZEAJSWWZRMXRVKTAYTZJLXDOFMTUOJEQHQJRC");
    msg.links = 478378375U;

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
    msg.setTimeStamp(0.2597858972214655);
    msg.setSource(1970U);
    msg.setSourceEntity(10U);
    msg.setDestination(55595U);
    msg.setDestinationEntity(56U);
    msg.groupname.assign("MJQIBFVZNCDRPGTQMONBQNBMAPKYIWOFXQQNHAUGAALGMIVXBYBZGVVJOQXKHAAZGRKZXCUYGHDJBDCTEEIAMCEKSMRWCSBLEKMHVZXEWIFZFSPUCDYHSEKX");
    msg.action = 14U;
    msg.grouplist.assign("GPMWKILOGDCGHLFXSVZFDIJBXTUENTVCMPSFSIWYECBKAMRCTUJBRBQJHVPMLDYFPNIZIKUEYHHLCRCDLORBCQHZMWJODNRLCTBMEDUENUWNBIIXNAKX");

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
    msg.setTimeStamp(0.44317596710160756);
    msg.setSource(16484U);
    msg.setSourceEntity(116U);
    msg.setDestination(26540U);
    msg.setDestinationEntity(70U);
    msg.groupname.assign("PWMJGOMHUZTZQCBPOGVPQDAERHWYHROHIYWCAXAMMVYYVEWGIXJAOFZNGYORLLQFGRLWDBRXIJHHWXAYPEDCUEUKZFCMVBLKNQVKWDWFBATDOMKNZSPFSKWKSSSCURSKHTQJUGLFUKDDVIXD");
    msg.action = 207U;
    msg.grouplist.assign("ZKYZEQEIMNCFVSEDKTHABTUXFRCYILKBEPPYBPDHSNHAXWPYRFBDQDKVLSGJJDNMWGRAVXTOQSVFCXBHIYJNBHSIOEDYTPZFWXOUMPLJTFTBPWBMHZKDJDGQMLKNALMIZRKRV");

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
    msg.setTimeStamp(0.23947008250146873);
    msg.setSource(28778U);
    msg.setSourceEntity(168U);
    msg.setDestination(63317U);
    msg.setDestinationEntity(245U);
    msg.groupname.assign("WKZUXBXWABWSRNHSHGXGLSZFMDGEWIPQREYYNXXN");
    msg.action = 42U;
    msg.grouplist.assign("IRSALYCNGHJPETAWIBZRJUEZCXWPJD");

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
    msg.setTimeStamp(0.5330404494313149);
    msg.setSource(44480U);
    msg.setSourceEntity(132U);
    msg.setDestination(25481U);
    msg.setDestinationEntity(165U);
    msg.value = 0.25188487072705723;
    msg.sys_src = 20234U;

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
    msg.setTimeStamp(0.8857006196978809);
    msg.setSource(34485U);
    msg.setSourceEntity(129U);
    msg.setDestination(50991U);
    msg.setDestinationEntity(198U);
    msg.value = 0.23598082419617517;
    msg.sys_src = 34569U;

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
    msg.setTimeStamp(0.4828027121033417);
    msg.setSource(1245U);
    msg.setSourceEntity(176U);
    msg.setDestination(17159U);
    msg.setDestinationEntity(17U);
    msg.value = 0.011814857723007721;
    msg.sys_src = 34326U;

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
    msg.setTimeStamp(0.8726231047811965);
    msg.setSource(18342U);
    msg.setSourceEntity(207U);
    msg.setDestination(37864U);
    msg.setDestinationEntity(191U);
    msg.value = 0.5269658564842432;
    msg.units = 116U;

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
    msg.setTimeStamp(0.44565601251060694);
    msg.setSource(41910U);
    msg.setSourceEntity(200U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(230U);
    msg.value = 0.2801239179890319;
    msg.units = 86U;

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
    msg.setTimeStamp(0.24946320978783543);
    msg.setSource(8374U);
    msg.setSourceEntity(151U);
    msg.setDestination(26215U);
    msg.setDestinationEntity(146U);
    msg.value = 0.788372934335961;
    msg.units = 198U;

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
    msg.setTimeStamp(0.9218527740747278);
    msg.setSource(41871U);
    msg.setSourceEntity(22U);
    msg.setDestination(44317U);
    msg.setDestinationEntity(227U);
    msg.base_lat = 0.08613813401549975;
    msg.base_lon = 0.5631916541411293;
    msg.base_time = 0.9766091673218306;

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
    msg.setTimeStamp(0.924633085386071);
    msg.setSource(46071U);
    msg.setSourceEntity(17U);
    msg.setDestination(3670U);
    msg.setDestinationEntity(70U);
    msg.base_lat = 0.583535126405236;
    msg.base_lon = 0.6461365169674345;
    msg.base_time = 0.6028819410249588;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 36167U;
    tmp_msg_0.priority = 98;
    tmp_msg_0.x = -5659;
    tmp_msg_0.y = -13983;
    tmp_msg_0.z = -14258;
    tmp_msg_0.t = -189;
    IMC::QueryLedBrightness tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PDPPFNTXVANNLIFLNDUEKMRYXKMAURPKNUORKQFNGUHQQGLTHJVWWQHZKIWABZURAMYFMMOGRUJJVVZLMRFBAZWSVDNGZQV");
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
    msg.setTimeStamp(0.6979009642603576);
    msg.setSource(33422U);
    msg.setSourceEntity(148U);
    msg.setDestination(52160U);
    msg.setDestinationEntity(87U);
    msg.base_lat = 0.26004025684162935;
    msg.base_lon = 0.9388592504547687;
    msg.base_time = 0.37728634687159546;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 17645U;
    tmp_msg_0.destination = 18790U;
    tmp_msg_0.timeout = 0.5948095635805813;
    IMC::CameraZoom tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 166U;
    tmp_tmp_msg_0_0.zoom = 6U;
    tmp_tmp_msg_0_0.action = 59U;
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
    msg.setTimeStamp(0.7925347925044314);
    msg.setSource(50405U);
    msg.setSourceEntity(43U);
    msg.setDestination(44429U);
    msg.setDestinationEntity(221U);
    msg.base_lat = 0.296889962697903;
    msg.base_lon = 0.018869987880957728;
    msg.base_time = 0.7352456167841651;
    const signed char tmp_msg_0[] = {48, -82, -71, 41, -56, 32, -126, 33, -96, -11, 38, 9, -2, 105, 18, -2, 11, -27, -9, -36, -90, -55, 68, -86, 25, 56, -73, -35, 120, -65, 69, 121, 34, 42, 28, 100, -28, -69, -27, -78, 22, 115, -29, -76, -45, -124, 37, -97, 117, 124, -120, 21, 33, 31, 20, 52, -41, -95, 105, -89, 109, -109, 26, -19, -94, -92, 35, 58, -124, -59, -34, -6, 7, -38, -127, 95, 16, 8, -18, 86, 114, 78, 3, 0, 19, -65, -55, -56, 46, -3, -113, 40, 103, -63, 103};
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
    msg.setTimeStamp(0.1094358049012284);
    msg.setSource(5812U);
    msg.setSourceEntity(77U);
    msg.setDestination(33025U);
    msg.setDestinationEntity(60U);
    msg.base_lat = 0.4883139816485971;
    msg.base_lon = 0.7034923817633109;
    msg.base_time = 0.23544560025731387;
    const signed char tmp_msg_0[] = {79, 92, -36, 114, -2, 73, -120, 46, -45, -122, -42, 14, 36, 103, -79, -104, -92, 96, 102, -74, -35, 61, -62, 18, -128, 44, 14, 60, 51, 94, 25, -33, -114, 78, -95, 12, -50, -49, 83, -30, -44, -1, 47, -58, -16, 61, 42, 47, -3, -36, 1, -93, 39, -78, 48, -128, 117, -28, 79, -25, -30, 66, 86, -111, 95, -66, 70, -38, -120, -101, 25, -57, 56, 94, -32, 82, -111, 20, -111, 96, -48, 61, 17, -65, 0, -124, 91, 32, 88};
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
    msg.setTimeStamp(0.8596345597036126);
    msg.setSource(20091U);
    msg.setSourceEntity(43U);
    msg.setDestination(40641U);
    msg.setDestinationEntity(203U);
    msg.base_lat = 0.13596994160564668;
    msg.base_lon = 0.7759694967466076;
    msg.base_time = 0.4699242211509945;
    const signed char tmp_msg_0[] = {14, -105, -6, 81, -22, 83, -111, 122, 4, -111, 107, -41, -116, -22, 51, 64, 115, 57, -79, -105, -103, 93, 46, -44, -81, 120, -78, 106, 108, 36, 43, -19, 65, -77, -16, 26, 57, 122, 35, 33, 10, 102, 20, 39, 51, -76, 90, -2, 24, 92, 34, -46, -30, 63, 83, -40, 121, 2, -20, 49, 24, 48, -118, 12, -39, -33, -87, 43, 73, 15, 65, 108, -93, -45, -118, 100, 8, -52, -21, 23, 17, 125, -44, 10, 123, -59, 21, 15, 111, -90, -51, 7};
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
    msg.setTimeStamp(0.3863975996599376);
    msg.setSource(24043U);
    msg.setSourceEntity(162U);
    msg.setDestination(23704U);
    msg.setDestinationEntity(110U);
    msg.sys_id = 63270U;
    msg.priority = 98;
    msg.x = -29449;
    msg.y = 15372;
    msg.z = 23522;
    msg.t = 23155;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3172062869384419;
    tmp_msg_0.y = 0.12262297376347497;
    tmp_msg_0.z = 0.6353225932003489;
    tmp_msg_0.phi = 0.9474224724478695;
    tmp_msg_0.theta = 0.4648808208943055;
    tmp_msg_0.psi = 0.04246878946363786;
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
    msg.setTimeStamp(0.8068958041596721);
    msg.setSource(10437U);
    msg.setSourceEntity(233U);
    msg.setDestination(55461U);
    msg.setDestinationEntity(50U);
    msg.sys_id = 13239U;
    msg.priority = -21;
    msg.x = -3261;
    msg.y = -21932;
    msg.z = -27277;
    msg.t = 9664;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8460653029282563;
    tmp_msg_0.lon = 0.9293139315625562;
    tmp_msg_0.height = 0.1618171034398289;
    tmp_msg_0.x = 0.4289791050680729;
    tmp_msg_0.y = 0.4921731475529493;
    tmp_msg_0.z = 0.439978339734199;
    tmp_msg_0.phi = 0.04918021534235484;
    tmp_msg_0.theta = 0.5292956977177873;
    tmp_msg_0.psi = 0.8121870628349334;
    tmp_msg_0.u = 0.34511898926425966;
    tmp_msg_0.v = 0.37396513515223506;
    tmp_msg_0.w = 0.8810207750798693;
    tmp_msg_0.vx = 0.3016946982840987;
    tmp_msg_0.vy = 0.3479134015861587;
    tmp_msg_0.vz = 0.6271109254968346;
    tmp_msg_0.p = 0.4580466931863889;
    tmp_msg_0.q = 0.692745200482523;
    tmp_msg_0.r = 0.3323911841339977;
    tmp_msg_0.depth = 0.9398382328907964;
    tmp_msg_0.alt = 0.7935662200540415;
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
    msg.setTimeStamp(0.4209454494422713);
    msg.setSource(1569U);
    msg.setSourceEntity(204U);
    msg.setDestination(63858U);
    msg.setDestinationEntity(89U);
    msg.sys_id = 38922U;
    msg.priority = -110;
    msg.x = -9639;
    msg.y = 29444;
    msg.z = 18714;
    msg.t = 14716;
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.6023403621445886;
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
    msg.setTimeStamp(0.268515381049349);
    msg.setSource(31093U);
    msg.setSourceEntity(206U);
    msg.setDestination(20216U);
    msg.setDestinationEntity(172U);
    msg.req_id = 18028U;
    msg.type = 30U;
    msg.max_size = 25819U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.565449592926146;
    tmp_msg_0.base_lon = 0.7009661978118362;
    tmp_msg_0.base_time = 0.2489177331449528;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 24842U;
    tmp_tmp_msg_0_0.priority = 78;
    tmp_tmp_msg_0_0.x = -14138;
    tmp_tmp_msg_0_0.y = -19331;
    tmp_tmp_msg_0_0.z = 9635;
    tmp_tmp_msg_0_0.t = 29786;
    IMC::LeaderState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("PXBGXPHWXTLKISMFULQTEHB");
    tmp_tmp_tmp_msg_0_0_0.op = 135U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.14849420774019784;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9485947988574919;
    tmp_tmp_tmp_msg_0_0_0.height = 0.6166154188417522;
    tmp_tmp_tmp_msg_0_0_0.x = 0.4715141591927766;
    tmp_tmp_tmp_msg_0_0_0.y = 0.764099417966517;
    tmp_tmp_tmp_msg_0_0_0.z = 0.3690996247564754;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.7055521607957067;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.9834801082341972;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.989088137818259;
    tmp_tmp_tmp_msg_0_0_0.vx = 0.2782892184134491;
    tmp_tmp_tmp_msg_0_0_0.vy = 0.17513825281152995;
    tmp_tmp_tmp_msg_0_0_0.vz = 0.3695599689902581;
    tmp_tmp_tmp_msg_0_0_0.p = 0.5091036263725989;
    tmp_tmp_tmp_msg_0_0_0.q = 0.7643440876416294;
    tmp_tmp_tmp_msg_0_0_0.r = 0.8349536010269917;
    tmp_tmp_tmp_msg_0_0_0.svx = 0.5456235789738939;
    tmp_tmp_tmp_msg_0_0_0.svy = 0.09615466700202968;
    tmp_tmp_tmp_msg_0_0_0.svz = 0.13089113326716373;
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
    msg.setTimeStamp(0.41053607298588035);
    msg.setSource(9289U);
    msg.setSourceEntity(22U);
    msg.setDestination(55904U);
    msg.setDestinationEntity(77U);
    msg.req_id = 29107U;
    msg.type = 159U;
    msg.max_size = 57674U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9910448249959547;
    tmp_msg_0.base_lon = 0.7055252044461161;
    tmp_msg_0.base_time = 0.5981122322094837;
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
    msg.setTimeStamp(0.7324449709561909);
    msg.setSource(64150U);
    msg.setSourceEntity(235U);
    msg.setDestination(57136U);
    msg.setDestinationEntity(88U);
    msg.req_id = 1013U;
    msg.type = 120U;
    msg.max_size = 45138U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6516831043874906;
    tmp_msg_0.base_lon = 0.40032728925914673;
    tmp_msg_0.base_time = 0.16168766373613452;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 49529U;
    tmp_tmp_msg_0_0.priority = 112;
    tmp_tmp_msg_0_0.x = -16447;
    tmp_tmp_msg_0_0.y = 27286;
    tmp_tmp_msg_0_0.z = -30113;
    tmp_tmp_msg_0_0.t = 25202;
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.k = 0.5294578713497403;
    tmp_tmp_tmp_msg_0_0_0.m = 0.9632564007578418;
    tmp_tmp_tmp_msg_0_0_0.n = 0.5528384562698968;
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
    msg.setTimeStamp(0.7564039505735501);
    msg.setSource(29849U);
    msg.setSourceEntity(0U);
    msg.setDestination(51645U);
    msg.setDestinationEntity(4U);
    msg.original_source = 43573U;
    msg.destination = 62779U;
    msg.timeout = 0.4305157017180393;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.07591595167241649;
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
    msg.setTimeStamp(0.1969105741367232);
    msg.setSource(31936U);
    msg.setSourceEntity(2U);
    msg.setDestination(29522U);
    msg.setDestinationEntity(179U);
    msg.original_source = 4594U;
    msg.destination = 51347U;
    msg.timeout = 0.31733075094140584;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("WITBGWDDALKUPYLBCYNKXWKRMWUSBJQHJWZTRNGYNDCBWHYQTRXPHUBL");
    tmp_msg_0.value = 191U;
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
    msg.setTimeStamp(0.22168728903217383);
    msg.setSource(41817U);
    msg.setSourceEntity(3U);
    msg.setDestination(35506U);
    msg.setDestinationEntity(109U);
    msg.original_source = 18575U;
    msg.destination = 29734U;
    msg.timeout = 0.40105034918628935;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 11850U;
    tmp_msg_0.status = 22U;
    tmp_msg_0.info.assign("BWOTTBFFRUUNJCPIKNBBBDMUNYHYQAYGMVOOPNEIDXDYLCMXCIFDZKYUBNMKYDSAWQPLGSFUWCCTZJAVKBJKRXGSKHHPAUDLIURIHHQDKPQIGJMPHPOXCXANEXAFAJXUVHZRJPVFUFSMPQWWSRQXENLLEMZMQYTYVGONECOLOHOFWIKHBSGFDZVATGZLEZBZJHMRNTREQTSLJ");
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
    msg.setTimeStamp(0.7574778638754164);
    msg.setSource(27998U);
    msg.setSourceEntity(87U);
    msg.setDestination(36071U);
    msg.setDestinationEntity(167U);
    msg.type = 122U;
    msg.comm_interface = 13470U;
    msg.model = 1523U;
    msg.list.assign("QKHCBAGLUMOEAGOICUEKUPLGCIZKVRZNGWVFEZKNMAZTXAEDZTLAXQZFZVGFQHOJJYSAEULDROOVBYPVBWPKOKRZRMMSNNRWQSJDIKNLUHBMIEJFNRSFMSPUWWCFXIDIPOICFJXVXYXYITKMEPTRPTAMJXLHKYJOZEWCTCDCJIVLNXOJRYTHUDH");

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
    msg.setTimeStamp(0.07480213462476715);
    msg.setSource(32146U);
    msg.setSourceEntity(185U);
    msg.setDestination(51398U);
    msg.setDestinationEntity(160U);
    msg.type = 114U;
    msg.comm_interface = 8187U;
    msg.model = 23032U;
    msg.list.assign("OCMMZSESLGBSSK");

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
    msg.setTimeStamp(0.3284236100380705);
    msg.setSource(32522U);
    msg.setSourceEntity(227U);
    msg.setDestination(24222U);
    msg.setDestinationEntity(17U);
    msg.type = 24U;
    msg.comm_interface = 13737U;
    msg.model = 64360U;
    msg.list.assign("FBJIAAJZEVPRWMFUZLEWPKTJYLQDOKVESZVTVWIWVOVPDLIJOOYINSVXTSUDXCIUJRHCXDTBQGSFYYBCNTIMBHONASEK");

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
    msg.setTimeStamp(0.6216117747780505);
    msg.setSource(55992U);
    msg.setSourceEntity(231U);
    msg.setDestination(58716U);
    msg.setDestinationEntity(189U);
    msg.type = 227U;
    msg.req_id = 303446486U;
    msg.ttl = 3949U;
    msg.code = 97U;
    msg.destination.assign("VJQRIYMRSNYLFMUEJNSRHWSVDTVXCIDWUWGSLXVHEFBVPGYCQPZQNCUSKGDFDNWAJLYSOIHPFAJCUHYSGWFLGAODKLXJCCTUYACBXRPBIOSDIBEAZKEVAWEUFTOKOBZUQQKKXBDNEPZSZUTQ");
    msg.source.assign("ICNACZLSRZPKIHFCROGIPRDCLNYXRVUOPWJEAKECARPGMPMYYEJSYOEDFHLTJYWCRUGIGJTQQXDSETHOHAMGICMZUWNFKZFPNBZBEOSUPXLKVZMZRJBTNFXFUMCZWEKSSTGXQRUFBVQAQVKUQUVBHOTSDHKAALGB");
    msg.acknowledge = 220U;
    msg.status = 85U;
    const signed char tmp_msg_0[] = {47, 80, -80, -127, -81, -97, 103, 11, 27, 126, -33, 35, -12, 92, 120, 64, 67, -40, -15, -114, 61, 72, -6, 31, 124, 69, 88, 0, 99, -58, 69, 78, -72, -116, -79, -120, -23, -67, -57, -2, -18, -48, -84, -42, -44, -98, -120, -59, 103, 27, 64, -36, 60, 64, -47, 85, -101, -29, 124, 54, -121, 93, 49, 96, 52, -87, -107, 82, 104, 80, 32, 111, 51, 91, -29, -16, -82, 52, -34, 14, 107, 5, -83, -26, 60, -70, -39, 2, 82, 79};
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
    msg.setTimeStamp(0.48978029784276655);
    msg.setSource(31993U);
    msg.setSourceEntity(132U);
    msg.setDestination(9829U);
    msg.setDestinationEntity(208U);
    msg.type = 95U;
    msg.req_id = 154462037U;
    msg.ttl = 35406U;
    msg.code = 175U;
    msg.destination.assign("PFZWKWAHMHNIGRSHSQVBTITEHFKVRUMQBTENPZELZETRYSEMUZRUPSRSTNSBXBVIAJDKVMJHZJLXBWTKALNNOLCYCPODSCIMROPRCIYOMHZWOPOKHHFOPWJINTPSZQUYGXDCQDXGRKFOZMEFNJHDVWXVZVXIUABQNAKBJUEOPWXKJWQAAQMFDAYJTQFFBMKDLYUVVYMVQUSLOLGRLGYNGGDBKHDDQWEPCIIICTUYXEBGZFRYGX");
    msg.source.assign("SWZSLHKLEISKEUBHMGXXVRHMDYFUQMAXCDWELNFZYMAJKGDWNXWPNUAOJBXHTAWIWRVUUEILGRHRDBWKZKMHPFIVRVKQABWLTFJJITMGSQUBCDUVNFCMNPPCHYUNTIDPASMSJDKGTOYQJBGQQXDOYPGYZXQQCYFHOSRLZNKTZNZJEQIZTOMEDCFXEEGIUCLAATHHRMJEIZFSODBULXNREPYSZJFIKLPWFJOGVXVYPVCW");
    msg.acknowledge = 106U;
    msg.status = 92U;
    const signed char tmp_msg_0[] = {-47, 91, 15, -94, -79, -59, -65, -128, 27, -67, -113, -50, -24, 99, 78, 0, -124, 72, 107, -31, -110, 111, 121, -31, 55, 55, -81, -123, 18, -94, 43, -8, 108, -39, -51, -71, 85, -77, 76, -68, -124, -61, -9, -30, -38, 102, -42, -40, 15, 11, -91, 9, 115, 7, -100, 61, -122, -3, -7, 58, 101, -125, -40, -76, -127, -53, 110, -32, -26, -44, 74, -21};
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
    msg.setTimeStamp(0.910101839038166);
    msg.setSource(4691U);
    msg.setSourceEntity(122U);
    msg.setDestination(35348U);
    msg.setDestinationEntity(139U);
    msg.type = 50U;
    msg.req_id = 2436500637U;
    msg.ttl = 18869U;
    msg.code = 108U;
    msg.destination.assign("ITAVCORLNRGNXITSDYSPMGKJBSAGQCNBFKEQFHEEDCEAPJERVKRFZIYFYASIBUFMLQYMDUHYMGIJZGTLRZQJQNDLWXHYNOZCVJLWCWPNQYLMPKWLGXSYJCUFKUH");
    msg.source.assign("DQWZLSIHTSYXCCHHTUIELLARBZLVYOFBUMTIBMFLIUYKDAPZKTABPZIKGAXZTSYOUDCXTJDLSLKKXUXQNFOWFEXZWFNIMUFRJNMRDRDGEUKNJOQRHHTGEN");
    msg.acknowledge = 5U;
    msg.status = 8U;
    const signed char tmp_msg_0[] = {114, 86, -113, 82, -35, -24, -123, -63, -114, -94, -95, 50, -85, 109, -22, 23, -12, 43, -32, -24, 60, -100, 86, 25, 0, 49, -120, -125, -47, -99, 2, -68, 0, 83, -11, -12, 96, 61, -50, -88, -49, 52, -53, -88, 46, 113, -77, 25, 113, -3, -91, 1, -23, -36, 55, -120, 10, 119, -20, 41, 23, 40, 32, 39, 115, -38, -96, -3, 4, 65, 82, 67, 78, -6, -101, -86, -7, -42, -5, 15, -123, 115, 118, -89, -56, -26, 62, -68, -89, 70, -92, 107, -52, -36, 42, -123, 74, 96, -65, 98, 109, -27, -106, 86, 118, -11, -62, 31, -64, 117, -98, 63, -70, -43, 29, 51, -84, -122, -61, 107, 83, -33, 85};
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
    msg.setTimeStamp(0.057153248498203135);
    msg.setSource(11004U);
    msg.setSourceEntity(2U);
    msg.setDestination(31707U);
    msg.setDestinationEntity(177U);
    msg.id = 19U;
    msg.range = 0.048085775158832944;

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
    msg.setTimeStamp(0.9601164696851885);
    msg.setSource(59578U);
    msg.setSourceEntity(193U);
    msg.setDestination(17447U);
    msg.setDestinationEntity(253U);
    msg.id = 51U;
    msg.range = 0.5553355115779596;

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
    msg.setTimeStamp(0.6269039870121915);
    msg.setSource(5300U);
    msg.setSourceEntity(124U);
    msg.setDestination(4130U);
    msg.setDestinationEntity(150U);
    msg.id = 232U;
    msg.range = 0.681040673933523;

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
    msg.setTimeStamp(0.14139159127055323);
    msg.setSource(6466U);
    msg.setSourceEntity(57U);
    msg.setDestination(19883U);
    msg.setDestinationEntity(180U);
    msg.beacon.assign("RXAUXPHGMDKLWMRCSZHIHOGOCOVZRIESYJXFLTAQPX");
    msg.lat = 0.7675226088236299;
    msg.lon = 0.33210112369003164;
    msg.depth = 0.1665261705893607;
    msg.query_channel = 61U;
    msg.reply_channel = 16U;
    msg.transponder_delay = 170U;

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
    msg.setTimeStamp(0.06569346433311773);
    msg.setSource(20577U);
    msg.setSourceEntity(241U);
    msg.setDestination(40288U);
    msg.setDestinationEntity(5U);
    msg.beacon.assign("PJMUQZLQYPNGVKERFTPEFLKNGUOEVDEXTBJBLVTOZKOBJOCYKJQIBASMGAHAUQLWWUSWCCCWPMWCHYATZYIOVTEIQXDHRKTLHFZVEKGDCZXRLYCNVVLDVMNXGTSPUFFDIWSDJMRINNZYBPVMBMGWAKOQJSSFMGHAIXXLNAHJACRHXGR");
    msg.lat = 0.21877246329272027;
    msg.lon = 0.6494205601091686;
    msg.depth = 0.3614910696020355;
    msg.query_channel = 216U;
    msg.reply_channel = 15U;
    msg.transponder_delay = 187U;

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
    msg.setTimeStamp(0.21776208455527335);
    msg.setSource(31485U);
    msg.setSourceEntity(75U);
    msg.setDestination(33698U);
    msg.setDestinationEntity(0U);
    msg.beacon.assign("LTQXVSFIVYGRHDFSEQTWUPMCBNTMMOFLXDTPDHWJYJTBZHKCCFNJICUBVGTLEOPFIDTVOXJMNUXOITGFAFXQZQYIASFULOSAP");
    msg.lat = 0.016483641803249793;
    msg.lon = 0.448555103267657;
    msg.depth = 0.7239971077575656;
    msg.query_channel = 119U;
    msg.reply_channel = 196U;
    msg.transponder_delay = 69U;

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
    msg.setTimeStamp(0.8325313415541412);
    msg.setSource(65384U);
    msg.setSourceEntity(119U);
    msg.setDestination(64390U);
    msg.setDestinationEntity(174U);
    msg.op = 253U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OAVOCPCUNSFGQQPSFTYEWMXZODFFCXHLWTZHOK");
    tmp_msg_0.lat = 0.6038840772525369;
    tmp_msg_0.lon = 0.4614115156656824;
    tmp_msg_0.depth = 0.827481662885104;
    tmp_msg_0.query_channel = 192U;
    tmp_msg_0.reply_channel = 235U;
    tmp_msg_0.transponder_delay = 28U;
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
    msg.setTimeStamp(0.34322419340172106);
    msg.setSource(58228U);
    msg.setSourceEntity(41U);
    msg.setDestination(29677U);
    msg.setDestinationEntity(224U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.37734368939588414);
    msg.setSource(58919U);
    msg.setSourceEntity(24U);
    msg.setDestination(32857U);
    msg.setDestinationEntity(195U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.2872989109649715);
    msg.setSource(6583U);
    msg.setSourceEntity(169U);
    msg.setDestination(7169U);
    msg.setDestinationEntity(164U);
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.9221110250814176;
    tmp_msg_0.lon = 0.9695739823891639;
    tmp_msg_0.z = 0.9101467696769803;
    tmp_msg_0.z_units = 212U;
    tmp_msg_0.speed = 0.35295754275182556;
    tmp_msg_0.speed_units = 209U;
    tmp_msg_0.custom.assign("HYHXVDZGGCTIIKPZCNAWJGLWGEVMZ");
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
    msg.setTimeStamp(0.06532063240340757);
    msg.setSource(18036U);
    msg.setSourceEntity(145U);
    msg.setDestination(9107U);
    msg.setDestinationEntity(200U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2816310117U;
    tmp_msg_0.start_lat = 0.15424057486640141;
    tmp_msg_0.start_lon = 0.9171040200820353;
    tmp_msg_0.start_z = 0.45831415229334704;
    tmp_msg_0.start_z_units = 175U;
    tmp_msg_0.end_lat = 0.09721808978971502;
    tmp_msg_0.end_lon = 0.9763276801613964;
    tmp_msg_0.end_z = 0.11732038430788094;
    tmp_msg_0.end_z_units = 102U;
    tmp_msg_0.speed = 0.480439433765692;
    tmp_msg_0.speed_units = 216U;
    tmp_msg_0.lradius = 0.4221142682053567;
    tmp_msg_0.flags = 80U;
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
    msg.setTimeStamp(0.15694513919456599);
    msg.setSource(29372U);
    msg.setSourceEntity(64U);
    msg.setDestination(41895U);
    msg.setDestinationEntity(100U);
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 43975U;
    tmp_msg_0.type = 114U;
    tmp_msg_0.status = 115U;
    tmp_msg_0.info.assign("YEGJHIMYIIAMVSMRUEHJUKUYGHOBJOBDJOSEURXNRDLDRAFHE");
    tmp_msg_0.range = 0.1065645679592927;
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
    msg.setTimeStamp(0.7352310423832648);
    msg.setSource(1038U);
    msg.setSourceEntity(116U);
    msg.setDestination(12261U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.794471365370591;
    msg.lon = 0.24251475091291252;
    msg.depth = 0.06980828742472711;
    msg.sentence.assign("AKVULSUUZNHCZSSRTGXVZHGPSDKOGAATTHLDQQAHNBDDMVTWMKUWOEFCXJGIJWIRXBCMMYLXJNJEWMYMETMFZMWKTAPRISFYQSKOZKPZFFPYUPYHFEWOALIJLJPTVBUNMBEJBPOUZIJUTWQJYPGPLEATHYEHQFZULCVTPLDKNQLNBNLODKXZVWWXYSOUOFA");
    msg.txtime = 0.14162248886731;
    msg.modem_type.assign("AMZEGAGRGEIBIZIDHVFLDYREZGAUYJAUEGWHSZORJCHONKJFKZSQPBCYGYHVJQTHMAWDKITUUSAULPOILQRAPLINNZLGIYNTJMTWQRWLSFYBSZVKGPNMEBEDJCBQOLVVMFHFGEPOSTOOCMFTANMTCXNFKRSXSHTUXESOIKXXMFIYCRDWIPFZUPQQDKWVOQVVVZRNQRLEJYDVUMNTUYBBKGHJHBDXWKXPTCQJHOFEWCXLS");
    msg.sys_src.assign("YCZQYAVRQXWFQOQKLZFYRJSVIDHVUILBBJLGSAWPPTHQINUYRRWVGMAJJ");
    msg.seq = 37005U;
    msg.sys_dst.assign("CTWQLANCNWXCWCZMKPUYMYKLWGSBITNQJRIBNGVDREKBCGZWRKLGGXYEGWMSJDOOQVNIHXJPYNUOJMKKRAFMHZQREFIUCVLORCHJOYDHSWMDDGGTNPWQKEQAAAVTTQSIQXSQHELTPPLAHIIZERUKBDXIBBEVUCFSBHAPIYSVBJJWZLOWXTJPYDULCPBSUZFVQNOXAGNDZM");
    msg.flags = 200U;
    const signed char tmp_msg_0[] = {-54, 7, -57, -22, 118, -125, 44, 73, -62, 37, 34, 46, 76, -22, -110, 6, -74, -34, 28, 33, 4, 104, -123, 15, -117, 52, -31, -97, -79, 25, 81, -111, 13, 26, -77, 86, 82, 86, -9, 110, -57, -95, -128, 32, 110, -11, 52, 107, -77, 82, -52, -38, -60, 23, -33, 102, 78, 125, 48, 5, -22, 62, 19, 27, 120, 60, 46, -65, -128, -109, -112, 20, -99, -104, -63, 41, 81, 53, 62, 113, -33, 88, 4, 20, -51, 72, -111, -103, 17, -49, -25, 125, 32, -120, 40, 43, -10, -105, 63, -31, -105, -111, 56, 25, -82, 4, -64, 25, 9, -81, -19, -63, -98, 32, 4, -78, -121, -16, -67, -16, 20, 62, 21, -47, -61, 52, -7, 28, 115, 30, 66, 97, -62, 75, -116, 77, 73, -74, 86, 6, -114, -29, -90, 119, -105, -77, 122, 78, -20, 63, 60, 102, -69, 46, 6, 65, -45, -121, 124, 77, -35, 38, -77, 60, -108, 99, -122, -22, 123, -58, 17, -37, 75, -22, 99, -8, 25, -63, -60, 40, 82, 64, -37, -54, -128, -59, -125, -68, -119, -97, 104, 109, -2, 26, 90, -63, -21, -55, 26, -19, -17, -126, -117, 126, 60, -27, 31, 126, 125, -87, 3, 88, 10};
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
    msg.setTimeStamp(0.9684100894281131);
    msg.setSource(39392U);
    msg.setSourceEntity(159U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.8166872835592738;
    msg.lon = 0.5084968197603511;
    msg.depth = 0.17579723513783763;
    msg.sentence.assign("FZTXWVYGXEOOHLMNYVYHCBOWGRUQPCEDGDPJGRKFOJRXDTI");
    msg.txtime = 0.0678316447439542;
    msg.modem_type.assign("OYYQTQPHXIXMIZNJOVPLWBSYILNN");
    msg.sys_src.assign("MJQXBSTGROCXENGEMEQRELRYPNIKZRUWDEFBTJQHTVTMILKFHANTULSRMIDKZOONHWWNEQCEGQUBLPFYDVXEXVIURONEZKILBILLGMYADAA");
    msg.seq = 62002U;
    msg.sys_dst.assign("XXMBBNHQLKSWOOJQCEOTPGLJDLOKNXTAPWWFSYMXDZVSRCTQFPDVOCXGFBFJWMSJVTZYYGJZTDSZEKKTLBOUZKRIVNJFCEOUTPXBKWUHELQCNFNOYQIRPJATUOPHHWUVBTAKEMQDNMANCYBYARPVEBKMJFRJMMHHGXXXTZWQSRIBPGQVAHWMSVGBIPDPNIECRVAYGNSSZQNOGIELFEMDGHVRAZIAECKYRYQAXWDURCKLWLFDIL");
    msg.flags = 64U;
    const signed char tmp_msg_0[] = {-70, 23, 56, 106, -26, -52, 62, 126, 108, 1, 99, 29, -44, -4, 119, 26, 114, -99, -50, -11, -56, 52, -32, -53, 118, -93, -121, 77, -94, -126, 37, 36, 104, -74, 113, 3, -106, 22, -19, 76, 21, -71, 28, -59, 17, -50, 100, -96, 55, 124, -54, 79, 112, 100, -98, 37, -19, 89, -102, -50, 106, 66, -48, 95, -62, -66, -44, 56, -69, 100, 62, -123, 97, 81, -56, 0, 57, -37, 63, -91, -102, 124, 100, -99, 59, -40, -69, -3, -78, 118, 15, -107, 14, 87, -101, -52, 22, -15, 26, -8, -51, 22, -81, -88, 124, 95, -83, -77, -14, 123, 111, -87};
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
    msg.setTimeStamp(0.9639601565593301);
    msg.setSource(57905U);
    msg.setSourceEntity(124U);
    msg.setDestination(47974U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.7945478428015106;
    msg.lon = 0.3872963438319216;
    msg.depth = 0.32390250389907305;
    msg.sentence.assign("KZFKOYDFXXLUMROBFPBYUQWSJCKAHLYZNOSDYEORQGIXEIZTKKYJTVMJVQADDITBWEJCCODLYHMZPELRYVGWXWRATTABTJQBUVGAHWAS");
    msg.txtime = 0.7391448293225603;
    msg.modem_type.assign("LGXCWGFADKJFPOUIOIOOKWBIQZMCQGUHKFGRNWBTZPOAKVLFDSJUK");
    msg.sys_src.assign("XQEYPNHQNYZEJSJKPMWMIKVRQFARWGVDUGLCMOIMKCECGPITPYIQVYHMSHWOAFKCPFEBUTGBWOUDNHGZTRBCBWRCYUVXVZUBHRHRCDXLLCYPBFDRRSZQGAZKVTMGQTJQLLEBJXTNEZKDGSDDISUEXYVHQLDHIGZRKIIVBUVATYLJKPJJOZEABWZBLNDFMKMOFEIFLHVN");
    msg.seq = 18605U;
    msg.sys_dst.assign("PDUVLHCVNMZRWXKQBXZOUNRAHFXIPPKEEZPGEUEOUJKQVNAFBCVWKATLIHJLKGGQGHLAHNSULRYAAYOZIJMTFXLGHCSGBSYIPWFDQNDQSBKZXFMXEKERUJSKRFRQOTPFBRHDUZNIVIFFNXPTUSAOYLMRVAIMOSRCPGYCKTVYNDATOWBLUHDCTWNHBKULIBSWCMQIPOXQTJZSJEJDOGXZWQVBG");
    msg.flags = 125U;
    const signed char tmp_msg_0[] = {-29, -58, -8, -16, -44, 48, -94, 33, -57, 1, 75, -125, 116, 116, 60, 125, 62, -11, 71, 66, 25, 15, -12, -62, 114, 32, 119, 96, 32, 0, -88, -52, -125, 4, -98, 91, 27, 119, -59, 20, 111, -95, -28, -117, -101, -82, 2, 49, -74, -53, 60, -88, 39, 76, -43, 96, -52, 52, 115, 0, -45, -94, -63, -18, -102, -76, 73, -81, 23, -82, -120, 68, -72, 50, -121, -63, 63, -12, 102, 72, -107, -103, 74, 65, -36, 49, 23, -44, 85, -111, -31, -126, -88, -35, 31, -71, 91, 67, -18, 95, -92, 54, -123, 68, -39, -8, 45, -63, -66, -31, -65, -70, 18, 110, -114, 122, -26, 76, 52, -121, -26, -121, -37, -53, 36, -3, 95, 64, -79, 13, 86, 26, 1, 100, 104, -1, 0, 27, -16, -75, 3, -60, -98, -45, 117, -98, 117, 44, 91, 22, 73, -106};
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
    msg.setTimeStamp(0.5473249157328269);
    msg.setSource(19350U);
    msg.setSourceEntity(167U);
    msg.setDestination(25873U);
    msg.setDestinationEntity(155U);
    msg.op = 93U;
    msg.system.assign("EYTCAWLMLXWCQKPDHHSHLCTEFPUZSLYVYOVLTJMZWKHMJVPJSPUFQYHVRSKYTGAZWDPVXYGSMDJLRQCNMHMURUEGHCNDJNIADAEGKVBWAGUDGKBWBCQMMQIGJNMPVRUEDVGGEBHIOINOOUNXTXCRIDIJAFQOSFDBQYRLIPZZZNOTBYPEIUCNRJLSADXOJHYQKQFRXUTJUZBWVPTKACFVWAGZXZEQW");
    msg.range = 0.10935088975229912;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("OFRKIJXZQVHCDSXPLGOZYOVJSMIYHRYQHZWMEBLIQHTHYVSRBNIAXQPTUICGXZMQBFAJPBSUWYTORFNIUMUBWSYMKOUYMBWNKHCHKRMVI");
    tmp_msg_0.x = 0.6962540744175796;
    tmp_msg_0.y = 0.988582239379852;
    tmp_msg_0.z = 0.3709959687522424;
    tmp_msg_0.n = 0.3796273308310065;
    tmp_msg_0.e = 0.9575985863921114;
    tmp_msg_0.d = 0.4024787262280798;
    tmp_msg_0.phi = 0.5794036968345776;
    tmp_msg_0.theta = 0.83150619021962;
    tmp_msg_0.psi = 0.021744999418511934;
    tmp_msg_0.accuracy = 0.44764426102766874;
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
    msg.setTimeStamp(0.44288977057965484);
    msg.setSource(28112U);
    msg.setSourceEntity(14U);
    msg.setDestination(57582U);
    msg.setDestinationEntity(50U);
    msg.op = 110U;
    msg.system.assign("NQRPNKARVXHWCHYBZKNIOYSKJAAHZVBPIMMYMHDZFTLQGYFVDXFOMABXXRCOKRSYYYSBPIEAWIGHFYNJOXHSJSOUDGGCFDTMMYENZAXGPBOVBNCPNKVJULXTROEJZQTBVPQLLJLJAXZ");
    msg.range = 0.141758364309153;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.6377297258410222;
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
    msg.setTimeStamp(0.7638400825726279);
    msg.setSource(3648U);
    msg.setSourceEntity(159U);
    msg.setDestination(27689U);
    msg.setDestinationEntity(207U);
    msg.op = 24U;
    msg.system.assign("NSOIKZYLKQNJWVEAZ");
    msg.range = 0.8654300715627719;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 21U;
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
    msg.setTimeStamp(0.22345315874318472);
    msg.setSource(64631U);
    msg.setSourceEntity(140U);
    msg.setDestination(16491U);
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
    msg.setTimeStamp(0.7735443219084124);
    msg.setSource(59528U);
    msg.setSourceEntity(71U);
    msg.setDestination(28331U);
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
    msg.setTimeStamp(0.00799470098700672);
    msg.setSource(4673U);
    msg.setSourceEntity(122U);
    msg.setDestination(52894U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.24493132281188124);
    msg.setSource(24881U);
    msg.setSourceEntity(17U);
    msg.setDestination(21762U);
    msg.setDestinationEntity(131U);
    msg.list.assign("NTQIGQIUSSCFQPOTVFWNYUHHRMAKCXCIYJMONKOCIWTSBXZBLYRRBQHJTJTSZGOUJDBEVFE");

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
    msg.setTimeStamp(0.14353272825549745);
    msg.setSource(15155U);
    msg.setSourceEntity(115U);
    msg.setDestination(11224U);
    msg.setDestinationEntity(62U);
    msg.list.assign("OQKXHQZMFEJEVGSUCPVF");

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
    msg.setTimeStamp(0.4816476668826485);
    msg.setSource(57650U);
    msg.setSourceEntity(2U);
    msg.setDestination(52030U);
    msg.setDestinationEntity(214U);
    msg.list.assign("SLFSLTYJPKSSZHBXDEEMAFFXZRKVKIUJYTZHVROMHVCQYOPBBZBAMTKERCGMCDSBIZOXMBHUQMACSJNLZSPNLAGGGIPVOYPFJDLUIYRNFMRXWAGETOQNWLDDVJRNLPIYUTWXUFNWFCTQKCBKENZOQUVOPVBYYFYQJJYCJENGITXZEUKDAPARWWHHRIWDMVLRWGUWKVRTVAKAIEXDHOXHQTCPJXZMOHWEGFQFEDLSHQOC");

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
    msg.setTimeStamp(0.8560985051362922);
    msg.setSource(49853U);
    msg.setSourceEntity(128U);
    msg.setDestination(6056U);
    msg.setDestinationEntity(71U);
    msg.peer.assign("RQZXFAJATYDWMUQWBPZCWNOECBXIOBNOLGZFNKCCTJEJPPPQAGLRXETZEZSMHAFZEHLPTNMWINNRTDYKMYWMBVQNIRBLLLVBSXUCIYGUITWDOYHUCMKGVLDUIYQPDDXGHSSDZYZVOXFKUSEUVSAJGHFFZHKTMAJQAHVUJYTRMNPGIHJRB");
    msg.rssi = 0.5978337821788727;
    msg.integrity = 39223U;

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
    msg.setTimeStamp(0.03866320288784797);
    msg.setSource(42813U);
    msg.setSourceEntity(64U);
    msg.setDestination(50180U);
    msg.setDestinationEntity(61U);
    msg.peer.assign("JKSJIMFHPWJDILZCPPUNGLDICIPRGKFJLNTDLMHIA");
    msg.rssi = 0.6225971471439611;
    msg.integrity = 55056U;

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
    msg.setTimeStamp(0.03529444624076994);
    msg.setSource(51246U);
    msg.setSourceEntity(198U);
    msg.setDestination(30186U);
    msg.setDestinationEntity(70U);
    msg.peer.assign("FAPGAVFBCHMJSZSIRLMUOPKHMIUSIUQSOBXRXTHNAOABCHQLEUXJEPOELZUFHHSIKTJLGLGPBBWPJFRWNCBRQYYRVLGEZXUNNMCGDRSTHJRAJLCMCWZWMFJWJYRXTTTBBKC");
    msg.rssi = 0.9508248263936782;
    msg.integrity = 48524U;

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
    msg.setTimeStamp(0.7519601002192349);
    msg.setSource(35595U);
    msg.setSourceEntity(88U);
    msg.setDestination(31496U);
    msg.setDestinationEntity(198U);
    msg.req_id = 62566U;
    msg.destination.assign("UOEQXBOTXANHGEBOLAFTAMGGSIQPQLSTDKPJYDXCJLYSZTKNGWCLODUZORVHVULRDYESSLCIXAVMUWPQRLARRYBPNKNVBBJIGTNYJWKTAQFPFWYCNUYIPXDBOFFHXIXDMBKVVVMZQKHBWIJXNHGMOKCBFHNRQUZMFZSAAWHJWDFNTCUZNLPUFIYRQJFDSCXMWMECWEVWTERIEPODXLEEMKZSCTJMVPKGUBZKIQTYGAHHSEJUPRGYHCORVJI");
    msg.timeout = 0.5676810252272301;
    msg.range = 0.26250760867411094;
    msg.type = 241U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.7282189347171355;
    tmp_msg_0.lon = 0.2727576005635747;
    tmp_msg_0.z = 0.0893396679243762;
    tmp_msg_0.z_units = 208U;
    tmp_msg_0.radius = 0.030487250030549085;
    tmp_msg_0.duration = 47392U;
    tmp_msg_0.speed = 0.9404057679020374;
    tmp_msg_0.speed_units = 83U;
    tmp_msg_0.custom.assign("LYKOHMPUUURHHZDWNZUPPBUYJRJYAIIGUVKADRBGJVQHUGCEKUXDFIVGNGEHAEEXGJXQOCBPMYOBVZIQSOQVFPTFLRSSLEDSVBDPIAWQTJNPBWTGOFLMKIQSWFROSUYMXAQEZWCLOKWSNTCKHBTWZNWZEJYWNHCOXKTZDATEADFMLGDOCKVNPMLHSWQECFFRJSVRBMYB");
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
    msg.setTimeStamp(0.719201065932062);
    msg.setSource(35060U);
    msg.setSourceEntity(84U);
    msg.setDestination(24486U);
    msg.setDestinationEntity(101U);
    msg.req_id = 11289U;
    msg.destination.assign("YQCCCVJWIBMCGZXMLXLVHWCOFJXBMYEYPQTRBPGNQFZTROZAJTUNRIWFLJHKRDTESEVZIOAOUUOPKSWLDJXSQDHCFNHMRMBLSCQNKHKWZFNUTAQIRBGHXOVEARQBZMGKPUZATUZUDLELSBKMGRYEFIXKNQWUSAROXJRNACWSPSFNBJWVTVJDEYITLGQHHMJXKAYKHFPUGVPALWXHTMNLVGDJOVVSDK");
    msg.timeout = 0.524352263251491;
    msg.range = 0.44678898536970535;
    msg.type = 35U;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 126U;
    tmp_msg_0.op = 4U;
    tmp_msg_0.err_mean = 0.942013620767038;
    tmp_msg_0.dist_min_abs = 0.27176393381712727;
    tmp_msg_0.dist_min_mean = 0.19227402073321131;
    tmp_msg_0.roll_rate_mean = 0.8282999585177594;
    tmp_msg_0.time = 0.12432610804413624;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 133U;
    tmp_tmp_msg_0_0.lon_gain = 0.15300748753591753;
    tmp_tmp_msg_0_0.lat_gain = 0.6470783688124321;
    tmp_tmp_msg_0_0.bond_thick = 0.8910767390626307;
    tmp_tmp_msg_0_0.lead_gain = 0.5691399955318589;
    tmp_tmp_msg_0_0.deconfl_gain = 0.10409094571594146;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.13102932246257226;
    tmp_tmp_msg_0_0.safe_dist = 0.9592448761367102;
    tmp_tmp_msg_0_0.deconflict_offset = 0.5815602115132525;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.9771454848093439;
    tmp_tmp_msg_0_0.accel_lim_x = 0.11319484652327994;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.07893050692788772);
    msg.setSource(39363U);
    msg.setSourceEntity(243U);
    msg.setDestination(48729U);
    msg.setDestinationEntity(199U);
    msg.req_id = 30097U;
    msg.destination.assign("JPQMKWJQETUKFLSWOCVGDHPSBLOWMIZUOEDPHEVXCPXXZOPTCXCRUWARUDWMFJUFKJQDVLBUKFHYMZHLNDLNLYNAUQEEBVLWTXMLNTISSSOFIQJBXHYXQSMVHYBGDLQGKGGZOTBAXCIWAZURCTWETYNVBFGVILRQCPVRRYISSQMJDRNKJEVCSKDHAENURYKAMVKGPFINHJDO");
    msg.timeout = 0.8374688086030015;
    msg.range = 0.22290090900619886;
    msg.type = 114U;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 33694U;
    tmp_msg_0.duration = 43715U;
    tmp_msg_0.speed = 0.41842218870406866;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.x = 0.8458307566792821;
    tmp_msg_0.y = 0.05365311785189608;
    tmp_msg_0.z = 0.5053819725195806;
    tmp_msg_0.z_units = 96U;
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
    msg.setTimeStamp(0.987539882576988);
    msg.setSource(31111U);
    msg.setSourceEntity(185U);
    msg.setDestination(3358U);
    msg.setDestinationEntity(203U);
    msg.req_id = 62328U;
    msg.type = 71U;
    msg.status = 130U;
    msg.info.assign("RMRDIVYBIIVYREWROGWJPZBPEBMMDMIWYSCWBZQNKMBXMTCGAVAADLDWFSRFNSDHESVIJGTLEGQMWAXOQHKLYLQIFSZNCVLYUTIXWMCAMP");
    msg.range = 0.14749884430970994;

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
    msg.setTimeStamp(0.5972534549185314);
    msg.setSource(35064U);
    msg.setSourceEntity(232U);
    msg.setDestination(9942U);
    msg.setDestinationEntity(52U);
    msg.req_id = 46862U;
    msg.type = 30U;
    msg.status = 206U;
    msg.info.assign("HJIWWHGTBNAA");
    msg.range = 0.6030610474682686;

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
    msg.setTimeStamp(0.14574854865508502);
    msg.setSource(64326U);
    msg.setSourceEntity(183U);
    msg.setDestination(62563U);
    msg.setDestinationEntity(224U);
    msg.req_id = 61248U;
    msg.type = 208U;
    msg.status = 200U;
    msg.info.assign("GVXUUVTCPKKNQHIKHVCZADJAZYXYIXZPIJUNXZOCUAYLRLZQHHUYCNFGQEYPURGWQXFMETENBTYJOTCBGDLPEGLMQDJPWGBOKAGKRZTTJNFMMZDZOVCZMNUWOMHXNDLVWWKDFEPIWIXORJVCCBPQBABDNXQDMXTFGMIOMTETWDCWTSIREUJHNFKOHBOWSSYJRQQAFRSYMRILSFXBYHVHASFBALQEICN");
    msg.range = 0.29254301295326335;

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
    msg.setTimeStamp(0.12002486500609211);
    msg.setSource(37457U);
    msg.setSourceEntity(35U);
    msg.setDestination(41156U);
    msg.setDestinationEntity(160U);
    msg.system.assign("KZUEDCFUTLGFLSJOHXKVIXMDZCUFEGGSYBWMMGVCIOJERIWZRGZXNPLBLLRWGPQRBZPPWTXYVXCAHIPJUJMVYOURHKSOXNIEDCCRLSFKAHBTVSKMVFAJHXZQOJFPHRJKWDEKQFOUOVMYAFITGNSTCMAAHZMEHETTGSDGWYICCLQUBRIEGTNMBYOTNFCQQQQNZLJEPBDRNHKNYUSWWWLVKYXBBPYWXOSXNDFMZERDHVJQBPV");
    msg.op = 175U;

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
    msg.setTimeStamp(0.524814657891454);
    msg.setSource(34927U);
    msg.setSourceEntity(230U);
    msg.setDestination(27778U);
    msg.setDestinationEntity(5U);
    msg.system.assign("QAOPWAXIDLBTVHIYENKFRPXPZDBWZFYLYBZILHUFALMEZCLBVUURCJDATDWCDXNVSFJEVKAZNJLXPHWMCGWYVCXYONWKPQOBKOKO");
    msg.op = 7U;

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
    msg.setTimeStamp(0.17573798205598523);
    msg.setSource(10612U);
    msg.setSourceEntity(232U);
    msg.setDestination(2549U);
    msg.setDestinationEntity(25U);
    msg.system.assign("IAKWBPKLJNMFBRSNVRMLHRULJYXMKUNDFWYKCJCUVKWAKOCVHPTMXGMBEWUGOBYJDTXZRLOWXDFRJHYIYABFQADVEIFPEWNGPSPGTEMR");
    msg.op = 113U;

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
    msg.setTimeStamp(0.6642503188158896);
    msg.setSource(42431U);
    msg.setSourceEntity(5U);
    msg.setDestination(63102U);
    msg.setDestinationEntity(99U);
    msg.value = -29380;

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
    msg.setTimeStamp(0.29546283848353394);
    msg.setSource(6664U);
    msg.setSourceEntity(87U);
    msg.setDestination(45701U);
    msg.setDestinationEntity(102U);
    msg.value = -10965;

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
    msg.setTimeStamp(0.8528122073475675);
    msg.setSource(20301U);
    msg.setSourceEntity(118U);
    msg.setDestination(4831U);
    msg.setDestinationEntity(156U);
    msg.value = 24353;

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
    msg.setTimeStamp(0.004247903119766638);
    msg.setSource(40332U);
    msg.setSourceEntity(96U);
    msg.setDestination(44634U);
    msg.setDestinationEntity(204U);
    msg.value = 0.8075181941677677;

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
    msg.setTimeStamp(0.5891058904666379);
    msg.setSource(24176U);
    msg.setSourceEntity(149U);
    msg.setDestination(45555U);
    msg.setDestinationEntity(24U);
    msg.value = 0.6880063824967023;

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
    msg.setTimeStamp(0.5365068393411038);
    msg.setSource(24461U);
    msg.setSourceEntity(220U);
    msg.setDestination(54104U);
    msg.setDestinationEntity(174U);
    msg.value = 0.5667518753381879;

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
    msg.setTimeStamp(0.09167536597841874);
    msg.setSource(55655U);
    msg.setSourceEntity(224U);
    msg.setDestination(26698U);
    msg.setDestinationEntity(13U);
    msg.value = 0.7992280740227123;

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
    msg.setTimeStamp(0.5200626133339212);
    msg.setSource(49510U);
    msg.setSourceEntity(80U);
    msg.setDestination(42713U);
    msg.setDestinationEntity(71U);
    msg.value = 0.28225188922386457;

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
    msg.setTimeStamp(0.39148685536692274);
    msg.setSource(41781U);
    msg.setSourceEntity(15U);
    msg.setDestination(17118U);
    msg.setDestinationEntity(154U);
    msg.value = 0.023013506594917188;

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
    msg.setTimeStamp(0.22986551307369563);
    msg.setSource(38882U);
    msg.setSourceEntity(91U);
    msg.setDestination(13201U);
    msg.setDestinationEntity(230U);
    msg.validity = 50582U;
    msg.type = 165U;
    msg.utc_year = 29913U;
    msg.utc_month = 252U;
    msg.utc_day = 66U;
    msg.utc_time = 0.9815816102583451;
    msg.lat = 0.09976052667219171;
    msg.lon = 0.8718227392676768;
    msg.height = 0.7776741649315807;
    msg.satellites = 177U;
    msg.cog = 0.39873923545739653;
    msg.sog = 0.5659395963755558;
    msg.hdop = 0.09133180985751;
    msg.vdop = 0.7858980307763808;
    msg.hacc = 0.1290783665592552;
    msg.vacc = 0.7433866368158557;

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
    msg.setTimeStamp(0.11694435277133874);
    msg.setSource(12408U);
    msg.setSourceEntity(12U);
    msg.setDestination(26894U);
    msg.setDestinationEntity(170U);
    msg.validity = 14028U;
    msg.type = 5U;
    msg.utc_year = 10323U;
    msg.utc_month = 158U;
    msg.utc_day = 6U;
    msg.utc_time = 0.013669727289935873;
    msg.lat = 0.4479120484715927;
    msg.lon = 0.08414991749030365;
    msg.height = 0.9039177862387114;
    msg.satellites = 102U;
    msg.cog = 0.4196229893870287;
    msg.sog = 0.9805266810158091;
    msg.hdop = 0.1991707020006146;
    msg.vdop = 0.22525254779317427;
    msg.hacc = 0.684492427867773;
    msg.vacc = 0.592217532216735;

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
    msg.setTimeStamp(0.525366698218008);
    msg.setSource(8565U);
    msg.setSourceEntity(232U);
    msg.setDestination(18387U);
    msg.setDestinationEntity(189U);
    msg.validity = 45740U;
    msg.type = 129U;
    msg.utc_year = 55367U;
    msg.utc_month = 62U;
    msg.utc_day = 22U;
    msg.utc_time = 0.2409451500158527;
    msg.lat = 0.3450644587928683;
    msg.lon = 0.5277847995124306;
    msg.height = 0.8249452837563136;
    msg.satellites = 252U;
    msg.cog = 0.16263982192214155;
    msg.sog = 0.690690149349048;
    msg.hdop = 0.652368061888118;
    msg.vdop = 0.39344054358645364;
    msg.hacc = 0.020753727774598718;
    msg.vacc = 0.4620819583553416;

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
    msg.setTimeStamp(0.299355894593459);
    msg.setSource(61607U);
    msg.setSourceEntity(116U);
    msg.setDestination(12572U);
    msg.setDestinationEntity(55U);
    msg.time = 0.2912554518167235;
    msg.phi = 0.25523607664425807;
    msg.theta = 0.032879648887504276;
    msg.psi = 0.5544863466597757;
    msg.psi_magnetic = 0.5391426659197667;

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
    msg.setTimeStamp(0.32223398019963356);
    msg.setSource(51338U);
    msg.setSourceEntity(80U);
    msg.setDestination(50447U);
    msg.setDestinationEntity(77U);
    msg.time = 0.869196937716211;
    msg.phi = 0.19656334809045994;
    msg.theta = 0.9313195215173746;
    msg.psi = 0.75007948169995;
    msg.psi_magnetic = 0.7534880785581323;

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
    msg.setTimeStamp(0.7407753677744476);
    msg.setSource(37932U);
    msg.setSourceEntity(93U);
    msg.setDestination(26316U);
    msg.setDestinationEntity(202U);
    msg.time = 0.9447045349929114;
    msg.phi = 0.3122484001602752;
    msg.theta = 0.7417989522505235;
    msg.psi = 0.6587161804548283;
    msg.psi_magnetic = 0.971342017567998;

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
    msg.setTimeStamp(0.43985335631216127);
    msg.setSource(25652U);
    msg.setSourceEntity(194U);
    msg.setDestination(38385U);
    msg.setDestinationEntity(173U);
    msg.time = 0.5447379946390277;
    msg.x = 0.9789197478986998;
    msg.y = 0.505611280537315;
    msg.z = 0.4406724873664202;
    msg.timestep = 0.4596204206851582;

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
    msg.setTimeStamp(0.6957804982638593);
    msg.setSource(47319U);
    msg.setSourceEntity(49U);
    msg.setDestination(17929U);
    msg.setDestinationEntity(28U);
    msg.time = 0.5217342330907135;
    msg.x = 0.9851603304661585;
    msg.y = 0.06618436896417912;
    msg.z = 0.6908921451102453;
    msg.timestep = 0.02786961012417788;

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
    msg.setTimeStamp(0.11123003088594985);
    msg.setSource(42471U);
    msg.setSourceEntity(163U);
    msg.setDestination(32895U);
    msg.setDestinationEntity(35U);
    msg.time = 0.20758599061731509;
    msg.x = 0.5770880677294693;
    msg.y = 0.04347358992946648;
    msg.z = 0.9935241623686425;
    msg.timestep = 0.6466424173362441;

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
    msg.setTimeStamp(0.6102899454012856);
    msg.setSource(8711U);
    msg.setSourceEntity(229U);
    msg.setDestination(44429U);
    msg.setDestinationEntity(159U);
    msg.time = 0.7549341234636565;
    msg.x = 0.7283167023432625;
    msg.y = 0.7577630054888161;
    msg.z = 0.6256540453543884;

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
    msg.setTimeStamp(0.6177238429954997);
    msg.setSource(960U);
    msg.setSourceEntity(138U);
    msg.setDestination(42015U);
    msg.setDestinationEntity(103U);
    msg.time = 0.7575960006745992;
    msg.x = 0.1401574484628405;
    msg.y = 0.9653483943679475;
    msg.z = 0.3569130142373399;

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
    msg.setTimeStamp(0.185838457212682);
    msg.setSource(62160U);
    msg.setSourceEntity(120U);
    msg.setDestination(54111U);
    msg.setDestinationEntity(31U);
    msg.time = 0.08212403295863413;
    msg.x = 0.9666429904290442;
    msg.y = 0.4446425018164233;
    msg.z = 0.8295405485762242;

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
    msg.setTimeStamp(0.9893308325635831);
    msg.setSource(23786U);
    msg.setSourceEntity(60U);
    msg.setDestination(26362U);
    msg.setDestinationEntity(131U);
    msg.time = 0.02376155032496252;
    msg.x = 0.3194556144246524;
    msg.y = 0.30078071755343216;
    msg.z = 0.06788144497730975;

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
    msg.setTimeStamp(0.12729921669408106);
    msg.setSource(50234U);
    msg.setSourceEntity(2U);
    msg.setDestination(23584U);
    msg.setDestinationEntity(189U);
    msg.time = 0.3825832087740132;
    msg.x = 0.18706251585306288;
    msg.y = 0.5282112967282898;
    msg.z = 0.48303343200484306;

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
    msg.setTimeStamp(0.9546656697797978);
    msg.setSource(13179U);
    msg.setSourceEntity(245U);
    msg.setDestination(53527U);
    msg.setDestinationEntity(20U);
    msg.time = 0.8518228187362661;
    msg.x = 0.5952722742616895;
    msg.y = 0.9219752555323608;
    msg.z = 0.2939184655589274;

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
    msg.setTimeStamp(0.6714476199922621);
    msg.setSource(41051U);
    msg.setSourceEntity(86U);
    msg.setDestination(62378U);
    msg.setDestinationEntity(174U);
    msg.time = 0.32675151824038284;
    msg.x = 0.6121459127175243;
    msg.y = 0.24978020998764605;
    msg.z = 0.4553975658210665;

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
    msg.setTimeStamp(0.1751919443305544);
    msg.setSource(25527U);
    msg.setSourceEntity(82U);
    msg.setDestination(4617U);
    msg.setDestinationEntity(53U);
    msg.time = 0.5073924562087985;
    msg.x = 0.837111991151389;
    msg.y = 0.6872478099194265;
    msg.z = 0.9587956528186768;

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
    msg.setTimeStamp(0.9278660946457762);
    msg.setSource(15006U);
    msg.setSourceEntity(171U);
    msg.setDestination(47021U);
    msg.setDestinationEntity(20U);
    msg.time = 0.2528761158986642;
    msg.x = 0.07552394577889698;
    msg.y = 0.5293165520891158;
    msg.z = 0.301371717255589;

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
    msg.setTimeStamp(0.12630793791511175);
    msg.setSource(33909U);
    msg.setSourceEntity(217U);
    msg.setDestination(25992U);
    msg.setDestinationEntity(123U);
    msg.validity = 184U;
    msg.x = 0.3467532697654109;
    msg.y = 0.8755231090381892;
    msg.z = 0.40871079021203305;

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
    msg.setTimeStamp(0.940692828640236);
    msg.setSource(29835U);
    msg.setSourceEntity(70U);
    msg.setDestination(35003U);
    msg.setDestinationEntity(232U);
    msg.validity = 20U;
    msg.x = 0.8735859741414941;
    msg.y = 0.8136268712688933;
    msg.z = 0.5231734204953192;

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
    msg.setTimeStamp(0.6143583112320546);
    msg.setSource(32486U);
    msg.setSourceEntity(115U);
    msg.setDestination(61007U);
    msg.setDestinationEntity(102U);
    msg.validity = 32U;
    msg.x = 0.6331914335626921;
    msg.y = 0.13494748800914713;
    msg.z = 0.8255685810388852;

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
    msg.setTimeStamp(0.932890925145172);
    msg.setSource(43501U);
    msg.setSourceEntity(201U);
    msg.setDestination(64218U);
    msg.setDestinationEntity(136U);
    msg.validity = 129U;
    msg.x = 0.6749408813210913;
    msg.y = 0.9822690923711922;
    msg.z = 0.7969187955435147;

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
    msg.setTimeStamp(0.8843919785844381);
    msg.setSource(36428U);
    msg.setSourceEntity(191U);
    msg.setDestination(21373U);
    msg.setDestinationEntity(164U);
    msg.validity = 148U;
    msg.x = 0.778328407817212;
    msg.y = 0.9641178756996369;
    msg.z = 0.7523472030579861;

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
    msg.setTimeStamp(0.622907069772336);
    msg.setSource(55120U);
    msg.setSourceEntity(38U);
    msg.setDestination(56437U);
    msg.setDestinationEntity(242U);
    msg.validity = 101U;
    msg.x = 0.08198307321391496;
    msg.y = 0.327911872310265;
    msg.z = 0.033857360264316516;

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
    msg.setTimeStamp(0.594870786290077);
    msg.setSource(2217U);
    msg.setSourceEntity(193U);
    msg.setDestination(43798U);
    msg.setDestinationEntity(12U);
    msg.time = 0.9743069555048862;
    msg.x = 0.8172124385248425;
    msg.y = 0.17304849232240205;
    msg.z = 0.9899580888396253;

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
    msg.setTimeStamp(0.21035266210691372);
    msg.setSource(13570U);
    msg.setSourceEntity(112U);
    msg.setDestination(51576U);
    msg.setDestinationEntity(205U);
    msg.time = 0.8592964553292329;
    msg.x = 0.7037851333494082;
    msg.y = 0.24528755903340482;
    msg.z = 0.27302065342508375;

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
    msg.setTimeStamp(0.5325067512693805);
    msg.setSource(40359U);
    msg.setSourceEntity(202U);
    msg.setDestination(64618U);
    msg.setDestinationEntity(18U);
    msg.time = 0.8905868414277686;
    msg.x = 0.15142258963298172;
    msg.y = 0.4893472328579156;
    msg.z = 0.8834619244031563;

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
    msg.setTimeStamp(0.020175244114190027);
    msg.setSource(56921U);
    msg.setSourceEntity(91U);
    msg.setDestination(48758U);
    msg.setDestinationEntity(29U);
    msg.validity = 11U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7298689558124605;
    tmp_msg_0.beam_height = 0.5935849572865294;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.386235634657069;

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
    msg.setTimeStamp(0.14248379803190292);
    msg.setSource(64480U);
    msg.setSourceEntity(191U);
    msg.setDestination(60681U);
    msg.setDestinationEntity(119U);
    msg.validity = 173U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.1192362630316437;
    tmp_msg_0.beam_height = 0.9799289703868601;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.2234714899109037;

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
    msg.setTimeStamp(0.5314162521595011);
    msg.setSource(63338U);
    msg.setSourceEntity(81U);
    msg.setDestination(37913U);
    msg.setDestinationEntity(127U);
    msg.validity = 140U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.029883110572954896;
    tmp_msg_0.beam_height = 0.07748743597068797;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.3068942920161223;

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
    msg.setTimeStamp(0.3502695058750518);
    msg.setSource(36248U);
    msg.setSourceEntity(161U);
    msg.setDestination(3493U);
    msg.setDestinationEntity(12U);
    msg.value = 0.6940718966580577;

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
    msg.setTimeStamp(0.3484303136265814);
    msg.setSource(63823U);
    msg.setSourceEntity(41U);
    msg.setDestination(35334U);
    msg.setDestinationEntity(131U);
    msg.value = 0.2715889037107664;

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
    msg.setTimeStamp(0.44077838619031595);
    msg.setSource(26802U);
    msg.setSourceEntity(118U);
    msg.setDestination(2277U);
    msg.setDestinationEntity(70U);
    msg.value = 0.587307586009566;

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
    msg.setTimeStamp(0.5955538310900295);
    msg.setSource(19192U);
    msg.setSourceEntity(58U);
    msg.setDestination(21017U);
    msg.setDestinationEntity(206U);
    msg.value = 0.4986660358577757;

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
    msg.setTimeStamp(0.4324989426183463);
    msg.setSource(22494U);
    msg.setSourceEntity(186U);
    msg.setDestination(54700U);
    msg.setDestinationEntity(177U);
    msg.value = 0.7693198595428732;

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
    msg.setTimeStamp(0.8900474795681254);
    msg.setSource(59586U);
    msg.setSourceEntity(162U);
    msg.setDestination(32509U);
    msg.setDestinationEntity(253U);
    msg.value = 0.22764344671010506;

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
    msg.setTimeStamp(0.14855805409436695);
    msg.setSource(10054U);
    msg.setSourceEntity(101U);
    msg.setDestination(12862U);
    msg.setDestinationEntity(234U);
    msg.value = 0.535240222226398;

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
    msg.setTimeStamp(0.6265112649838316);
    msg.setSource(34019U);
    msg.setSourceEntity(196U);
    msg.setDestination(54427U);
    msg.setDestinationEntity(74U);
    msg.value = 0.45845388888993654;

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
    msg.setTimeStamp(0.2330948370995426);
    msg.setSource(47995U);
    msg.setSourceEntity(115U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(40U);
    msg.value = 0.18671111035439691;

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
    msg.setTimeStamp(0.0454590291619037);
    msg.setSource(45160U);
    msg.setSourceEntity(122U);
    msg.setDestination(15873U);
    msg.setDestinationEntity(185U);
    msg.value = 0.6633860809074905;

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
    msg.setTimeStamp(0.946743268618088);
    msg.setSource(27380U);
    msg.setSourceEntity(157U);
    msg.setDestination(57474U);
    msg.setDestinationEntity(208U);
    msg.value = 0.284525078038417;

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
    msg.setTimeStamp(0.18715144795996552);
    msg.setSource(49822U);
    msg.setSourceEntity(216U);
    msg.setDestination(18397U);
    msg.setDestinationEntity(85U);
    msg.value = 0.8257640044715521;

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
    msg.setTimeStamp(0.8596870782609706);
    msg.setSource(15242U);
    msg.setSourceEntity(176U);
    msg.setDestination(59459U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7139397646266069;

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
    msg.setTimeStamp(0.1319632992141272);
    msg.setSource(10982U);
    msg.setSourceEntity(116U);
    msg.setDestination(9140U);
    msg.setDestinationEntity(64U);
    msg.value = 0.28794579830252187;

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
    msg.setTimeStamp(0.27261771808925217);
    msg.setSource(2708U);
    msg.setSourceEntity(157U);
    msg.setDestination(48779U);
    msg.setDestinationEntity(64U);
    msg.value = 0.3914046395608707;

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
    msg.setTimeStamp(0.6710753295834756);
    msg.setSource(28364U);
    msg.setSourceEntity(102U);
    msg.setDestination(56141U);
    msg.setDestinationEntity(17U);
    msg.value = 0.8726081350390827;

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
    msg.setTimeStamp(0.038512644294444565);
    msg.setSource(57741U);
    msg.setSourceEntity(22U);
    msg.setDestination(14942U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7658289517974003;

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
    msg.setTimeStamp(0.500002372693167);
    msg.setSource(6442U);
    msg.setSourceEntity(215U);
    msg.setDestination(15204U);
    msg.setDestinationEntity(225U);
    msg.value = 0.8956061479383834;

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
    msg.setTimeStamp(0.6463579337638949);
    msg.setSource(52825U);
    msg.setSourceEntity(97U);
    msg.setDestination(48651U);
    msg.setDestinationEntity(102U);
    msg.value = 0.34055033822729874;

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
    msg.setTimeStamp(0.7640430872318039);
    msg.setSource(35415U);
    msg.setSourceEntity(136U);
    msg.setDestination(38270U);
    msg.setDestinationEntity(92U);
    msg.value = 0.7019245509252386;

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
    msg.setTimeStamp(0.11322834145938565);
    msg.setSource(47453U);
    msg.setSourceEntity(22U);
    msg.setDestination(46539U);
    msg.setDestinationEntity(217U);
    msg.value = 0.48558327880754626;

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
    msg.setTimeStamp(0.7159539740753236);
    msg.setSource(32246U);
    msg.setSourceEntity(134U);
    msg.setDestination(55691U);
    msg.setDestinationEntity(143U);
    msg.value = 0.891276164407356;

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
    msg.setTimeStamp(0.4706932846336923);
    msg.setSource(58905U);
    msg.setSourceEntity(29U);
    msg.setDestination(21152U);
    msg.setDestinationEntity(37U);
    msg.value = 0.8356639519029708;

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
    msg.setTimeStamp(0.49299261176077913);
    msg.setSource(706U);
    msg.setSourceEntity(242U);
    msg.setDestination(6153U);
    msg.setDestinationEntity(217U);
    msg.value = 0.692091061078123;

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
    msg.setTimeStamp(0.18734741801003485);
    msg.setSource(4665U);
    msg.setSourceEntity(163U);
    msg.setDestination(47386U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.3938403497677916;
    msg.speed = 0.8197840533025521;
    msg.turbulence = 0.005903754891490753;

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
    msg.setTimeStamp(0.07731132162583398);
    msg.setSource(884U);
    msg.setSourceEntity(167U);
    msg.setDestination(43872U);
    msg.setDestinationEntity(158U);
    msg.direction = 0.7586538778151795;
    msg.speed = 0.9060928815026771;
    msg.turbulence = 0.10751177510729859;

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
    msg.setTimeStamp(0.641951018632833);
    msg.setSource(20592U);
    msg.setSourceEntity(114U);
    msg.setDestination(52803U);
    msg.setDestinationEntity(11U);
    msg.direction = 0.24176216819966645;
    msg.speed = 0.8004959135500248;
    msg.turbulence = 0.7611028772950693;

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
    msg.setTimeStamp(0.35884780096110513);
    msg.setSource(2014U);
    msg.setSourceEntity(251U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(9U);
    msg.value = 0.25149681924742373;

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
    msg.setTimeStamp(0.3931143959027903);
    msg.setSource(62291U);
    msg.setSourceEntity(76U);
    msg.setDestination(50816U);
    msg.setDestinationEntity(28U);
    msg.value = 0.4519502954465955;

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
    msg.setTimeStamp(0.36200237657287226);
    msg.setSource(59607U);
    msg.setSourceEntity(32U);
    msg.setDestination(25052U);
    msg.setDestinationEntity(35U);
    msg.value = 0.07893717610099604;

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
    msg.setTimeStamp(0.9104298375940493);
    msg.setSource(41716U);
    msg.setSourceEntity(48U);
    msg.setDestination(47757U);
    msg.setDestinationEntity(86U);
    msg.value.assign("QEDEHDUEEBCPUPFFWKTZWALVBYSPSNLOEMQMUAOAQQYZATRJP");

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
    msg.setTimeStamp(0.6998852936027588);
    msg.setSource(35601U);
    msg.setSourceEntity(155U);
    msg.setDestination(54796U);
    msg.setDestinationEntity(186U);
    msg.value.assign("OGJVBFYRIHRSRUCEVBAUMFBTAOIEOYKBVANLGXPVYAMNIJVCWKHSAAJQBTTESRQLTKIDF");

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
    msg.setTimeStamp(0.2601562850712782);
    msg.setSource(9510U);
    msg.setSourceEntity(30U);
    msg.setDestination(58854U);
    msg.setDestinationEntity(163U);
    msg.value.assign("GAMPRNYPNPHUDSMOVLQOHJFYYK");

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
    msg.setTimeStamp(0.5432984705545604);
    msg.setSource(34992U);
    msg.setSourceEntity(254U);
    msg.setDestination(61894U);
    msg.setDestinationEntity(43U);
    const signed char tmp_msg_0[] = {123, 56, 19, -5, 110, 16, 75, -87, -116, -3, 5, -36, -55, -125, -40, -88, -99, 5, -76, 59, 83, -68, -75, -27, -95, 11, -37, 24, -44, 64, 115, 64, 123, 95, -54, -26, 98, 60, -29, 83, -12, -7, 71, 64, -31, 117, -45, -58, -58, 63, -98, 82, 60, 108, -105, -33, 8, -24, 31, 79, -115, 48, 5, 101, 38, -3, -121, 64, 5, 125, 113, 107, 97, 123, -115, 47, -88, -49, -120, -117, 72, 87, -80, 8, 3, 65, -113, -91, 124, -121, -128, -116, 119, 29, -66, -68, 102, -127, 18, 89, -114, -80, 93, -36, -83, 108, -123, 27, 69, 67, -10, -98, -46, -111, 22, -63, -124, -110, -128, -126, 4, 101, 90, 63, -74, 57, -45, 64, 123, -20, 26, -76, -68, 73, 106, -39, 116, -127, -1, 96, 78, -62, -17, 26, -4, 66, 39, 112, 65, -1, -40, 65, 114, 73, 46, 28, -55, 96, -98, -82, -38, -53, -93, 39, -122, 113, -126, -91, 59, -28, -14, -96, -55, 111};
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
    msg.setTimeStamp(0.390666746600157);
    msg.setSource(55115U);
    msg.setSourceEntity(226U);
    msg.setDestination(46243U);
    msg.setDestinationEntity(109U);
    const signed char tmp_msg_0[] = {-55, -118, -53, -103, -82, 20, -6, -22, 54, -116, -50, 101, -65, 39, -6, -44, 84, 24, -82, -81, 68, -96, -51, -86, 107, -50, 50, 20, 18, -31, 96, 35, -105, -92, 50, -65, 82, -53, 39, 43, -77, -33, 118, -88, -119, 9, 7, -5, -104, 6, -82, -21, -125, -77, -29, -70, -71, 12, 97, -108, -66, -49, -48, -68, 121, -25, -24, 107, 44, -117, -32, -16, -96, -103, -13, -59, 39, -53, 32, -100, -97, -116, -6, 14, -56, 36, 64, 91, -20, -106, 103, -118, 1, 41, 100, -41, -81, 84, 54, -3, 19, 53, 123, 9, 5, 20, 95, -45, -60, 83, -78, 87, -2, 53, 102, 99, 22, -40, -48, -15, 74, 110, 117, 66, 93, 63, 2, -79, -116, 44, -80, -34, 56, 100, 45, 8, -43, -111, 70, -29, -99, -45, -90, 4, 41, -128, 46, -93, -72, -78, -44, 83, 106, -118, 106, 91, 11, -101, 41, -91, 109, -69, 29, -54, 81, 97, -113, -40, 23, -22, -89, -92, 50, -74, 25, 78, -33};
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
    msg.setTimeStamp(0.3086446506734656);
    msg.setSource(50871U);
    msg.setSourceEntity(244U);
    msg.setDestination(28293U);
    msg.setDestinationEntity(1U);
    const signed char tmp_msg_0[] = {16, -127, -106, -64, 54, 35, -67, 10, 0, 5, 2, -71, 51, -35, -98, -21, 45, -1, 62, -7, -103, -102, -125, 12, 46, -108, 82, -90, -80, 21, -40, 36, 11, 2, 40, 6, -23, 63, 95, -34, -14, 60, 42, 114, 99, 42, 106, 7, -14, -43, -47, 53, -46, -83, 102, -128, 51, -38, -1, 6, 79, -78, 18, 64, -38, -88, -33, 52, 30, 41, -116, 65, -53, -92, 49};
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
    msg.setTimeStamp(0.06747305624510602);
    msg.setSource(21159U);
    msg.setSourceEntity(181U);
    msg.setDestination(33502U);
    msg.setDestinationEntity(221U);
    msg.value = 0.48161814728842034;

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
    msg.setTimeStamp(0.9490446031906679);
    msg.setSource(47649U);
    msg.setSourceEntity(32U);
    msg.setDestination(1367U);
    msg.setDestinationEntity(176U);
    msg.value = 0.5242425502875611;

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
    msg.setTimeStamp(0.44353139571929);
    msg.setSource(34875U);
    msg.setSourceEntity(252U);
    msg.setDestination(4598U);
    msg.setDestinationEntity(219U);
    msg.value = 0.13138355143183977;

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
    msg.setTimeStamp(0.1999459068248558);
    msg.setSource(52811U);
    msg.setSourceEntity(227U);
    msg.setDestination(2873U);
    msg.setDestinationEntity(126U);
    msg.type = 59U;
    msg.frequency = 4291058226U;
    msg.min_range = 37502U;
    msg.max_range = 16492U;
    msg.bits_per_point = 111U;
    msg.scale_factor = 0.8873835187277611;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9997428324038604;
    tmp_msg_0.beam_height = 0.8975844056314174;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {19, -128, 15, -99, -93, -29, 119, -119, -2, -16, 119, -127, -84, 78, 74, 14, -106, 71, -47, 47, -34, -6, -128, -110, -123, 59, -118, -76, -65, -33, 24, 10, -119, -114, 57, 67, -126, 64, 8, -50, -15, -29, 107, -23, -105, -55, 60, 65, 112, 104, 50, 25, -49, -40, 42, 26, -34, -40, -59, 99, -37, 77, -20, 27, -66, 48, -22, 72, -40, -62, -100, 19, -47, 10, -10, -90, -11, -74, -61, 14, -112, 97, -110, 1, 22, -39, -8, -90, 51, 35, -60, 51, 22, -107, 36, -64, 6, 106, -58, 72, -24, -89, -107, 21, -70, -60, -87, -23, -36, -110, -25, 108, 63, 52, -122, 35, -90, 16, 56, -121, -82, 74, -90, -39, 109, 9, 99, 116, 44, 28, -39, 86, -24, -79, -79, 117, 69, 91, -53, 9, 41, 59, -105, -115, 118, -59, 9, -126, 100, -58, -106, 18, 96, 65, 28, -25, -122, -100, -24, 119, -87, 100, 25, -62, 120, 94, 52, 125, 50, 6, 49, -36, 116, 55, 8, -21, 27, -45, -119, -36, -2, -24, -2, -70, 110, -10, 73, 113, -8, 57, -120, -50, -11, 42, 5, -65, 50, -65, -72, -30, -55, -50, 19, 106, -8, -56, 57, -88, 109, -65, -109, 15, 37, 74, -31, -50, -32, 6, 112, 24, -121, 126, -55, -81};
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
    msg.setTimeStamp(0.2557487930535697);
    msg.setSource(23111U);
    msg.setSourceEntity(189U);
    msg.setDestination(23588U);
    msg.setDestinationEntity(113U);
    msg.type = 129U;
    msg.frequency = 1799387984U;
    msg.min_range = 34883U;
    msg.max_range = 18459U;
    msg.bits_per_point = 25U;
    msg.scale_factor = 0.4871148501202198;
    const signed char tmp_msg_0[] = {-85, -100, 122, -17, -10, -39, -109, 122, -34, 18, -42, -58, -128, 3, -12, 93, 79, 85, 16, 9, 72, 10, 53, -35, -110, 95, 92, 2, 98, 32, -111, 88, -74, -76, -42, -60, -103, -65, 106, 55, 57, 21, 123, 125, -34, -52, -97, 67, 10, 109, -51, -17, -66, -23, -29, 25, -33, -87, 13, -23, -84, 15, 71, -37, 95, -55, 102, -95, 115, 26, 38, -103, -65, -65, 121, -99, 79, -65, 63, 83, -109, 48};
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
    msg.setTimeStamp(0.6973866567482596);
    msg.setSource(27596U);
    msg.setSourceEntity(173U);
    msg.setDestination(8876U);
    msg.setDestinationEntity(50U);
    msg.type = 104U;
    msg.frequency = 3348982800U;
    msg.min_range = 40632U;
    msg.max_range = 55564U;
    msg.bits_per_point = 178U;
    msg.scale_factor = 0.6099180282007587;
    const signed char tmp_msg_0[] = {32, 97, -45, 118, -124, -112, 44, -48, 0, 86, -72, -25, 16, -120, 89, -126, -98, 19, 84, -69, -49, -93, 27, 93, -101, 83, -101, 17, 60, 94, -101, 1, -15, -39, -37, -2, -64, -46, -87, -118, 61, 81, 2, -109, -1, -63, -31, 93, 5, -59, -76, 81, -122, 71, 24, 15, -83, -36, -3, -120, -16, -105, 90, 114, -42, 117, -19, 32, -23, -76, -6, -38, -75, 104, -87, -18, 61, 71, -46, 32, -4, -96, 18, -5, 72, -15, -19, 22, 100, 51, -28, -12, -43, -87, 65, 94, -66, 69, 97, -6, 63, -123, -90, -69, 32, -34, 42, 54, 60, -89, -17, 30, 76, -112, -45, 119, -30, 5, -22, -4, 4, 69, 75, -71, -108, 75, 76, 67, 7, -36, -47, -82, 119, -56, -69, -59, 87, -57, 113, -27, 56, 66, -21, 100, -43, 47, -22, -55, -57, -19, -40, -46, -121, -112, -116, -96, 47, 95, -105, 47, -34, 8, 37, -9, -85, -115, 39, -23, 36, 117, 70, 23, -80, 122, -57, -122, -36, 7, 3, -103, 74, -116, 78, -114, -38, 83, -30, -34, -94, -102, -70, -45, -22, 116, 81, 61, 124, -81, 77, -66, -60, -15, -122, -46, -46, -93, 25, 26, 96, 57, 18, -30};
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
    msg.setTimeStamp(0.6436964660439357);
    msg.setSource(14969U);
    msg.setSourceEntity(184U);
    msg.setDestination(2640U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.10349182580912497);
    msg.setSource(23103U);
    msg.setSourceEntity(60U);
    msg.setDestination(11066U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.5218474437208286);
    msg.setSource(52536U);
    msg.setSourceEntity(110U);
    msg.setDestination(40800U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.7963731571935253);
    msg.setSource(63002U);
    msg.setSourceEntity(10U);
    msg.setDestination(5240U);
    msg.setDestinationEntity(94U);
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
    msg.setTimeStamp(0.8520663963863712);
    msg.setSource(18861U);
    msg.setSourceEntity(253U);
    msg.setDestination(40780U);
    msg.setDestinationEntity(168U);
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
    msg.setTimeStamp(0.5901221830414423);
    msg.setSource(63675U);
    msg.setSourceEntity(152U);
    msg.setDestination(43725U);
    msg.setDestinationEntity(2U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.06350485955550644);
    msg.setSource(15822U);
    msg.setSourceEntity(14U);
    msg.setDestination(22425U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7033315903942704;
    msg.confidence = 0.6526193335946204;
    msg.opmodes.assign("KPHGGHXPANXNOZAQBCDKPUJYFBZZZLR");

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
    msg.setTimeStamp(0.1263048940162248);
    msg.setSource(18895U);
    msg.setSourceEntity(60U);
    msg.setDestination(4213U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9724712063760782;
    msg.confidence = 0.04937841197769488;
    msg.opmodes.assign("BHMTETZXJCHJWTCHAABGEOUJRIPYZGNKXARMNYBWKCFGEERFVUVNKOWPADLRSSDKSJOZVLCVKVMUTQBHSLLWEJADZZCPYLDOPCNFRGZNQDIMERPWKUHK");

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
    msg.setTimeStamp(0.9489515418220978);
    msg.setSource(31148U);
    msg.setSourceEntity(200U);
    msg.setDestination(14784U);
    msg.setDestinationEntity(56U);
    msg.value = 0.03200928365293776;
    msg.confidence = 0.7055416093620773;
    msg.opmodes.assign("XASWCNDDKLLWJZHWHLXOGNYFCBTPZJZSMAAAVBOWNCRQFFKKJYUONLSOGFFIFQTEUVYDSUOBWLXNSRICEYSECRXOXZXCMLPTKKNGKTHQWAUCKEWEJSXEGAJDVIYTZHEOGIQMKZKMYAHXJTQQJBLNEZHUPSOAVLDYGOCVRIWUGQHLMCGDTTJPIZDPUGXECOPRHAVMVYUIFMQYPH");

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
    msg.setTimeStamp(0.36492206035508346);
    msg.setSource(13198U);
    msg.setSourceEntity(9U);
    msg.setDestination(33359U);
    msg.setDestinationEntity(1U);
    msg.itow = 220870180U;
    msg.lat = 0.19721771327764182;
    msg.lon = 0.49214229303079127;
    msg.height_ell = 0.9060252738413672;
    msg.height_sea = 0.20918120644315363;
    msg.hacc = 0.22691996949097182;
    msg.vacc = 0.051636938019341105;
    msg.vel_n = 0.7111945562427293;
    msg.vel_e = 0.5720463518855219;
    msg.vel_d = 0.11290193554033312;
    msg.speed = 0.7915514318149647;
    msg.gspeed = 0.35541097292780255;
    msg.heading = 0.8028301945371871;
    msg.sacc = 0.17745570269160105;
    msg.cacc = 0.4496952228622989;

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
    msg.setTimeStamp(0.8657421957057347);
    msg.setSource(1375U);
    msg.setSourceEntity(251U);
    msg.setDestination(58706U);
    msg.setDestinationEntity(208U);
    msg.itow = 2497360846U;
    msg.lat = 0.8651880524924842;
    msg.lon = 0.210914466695033;
    msg.height_ell = 0.1293253267128044;
    msg.height_sea = 0.13104591476135796;
    msg.hacc = 0.3355609649658807;
    msg.vacc = 0.8522831737959158;
    msg.vel_n = 0.8376750976021222;
    msg.vel_e = 0.8940884862853763;
    msg.vel_d = 0.8067936648326395;
    msg.speed = 0.14694082577647138;
    msg.gspeed = 0.4745603263714544;
    msg.heading = 0.5278036014526226;
    msg.sacc = 0.2320665891021929;
    msg.cacc = 0.12611940637307317;

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
    msg.setTimeStamp(0.2777631714681088);
    msg.setSource(21689U);
    msg.setSourceEntity(223U);
    msg.setDestination(51061U);
    msg.setDestinationEntity(233U);
    msg.itow = 372433540U;
    msg.lat = 0.11794801035054958;
    msg.lon = 0.6504104063473756;
    msg.height_ell = 0.914782269949598;
    msg.height_sea = 0.28813765481999765;
    msg.hacc = 0.5018540745235337;
    msg.vacc = 0.5528210270058285;
    msg.vel_n = 0.3265541170353795;
    msg.vel_e = 0.1022747422564173;
    msg.vel_d = 0.9532971951778461;
    msg.speed = 0.3753886691343311;
    msg.gspeed = 0.23375709298759417;
    msg.heading = 0.8451948158983236;
    msg.sacc = 0.5551712114562711;
    msg.cacc = 0.056011397499262316;

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
    msg.setTimeStamp(0.599181671376366);
    msg.setSource(41284U);
    msg.setSourceEntity(147U);
    msg.setDestination(27249U);
    msg.setDestinationEntity(135U);
    msg.id = 80U;
    msg.value = 0.9718015657836248;

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
    msg.setTimeStamp(0.4134846034456191);
    msg.setSource(57886U);
    msg.setSourceEntity(152U);
    msg.setDestination(52158U);
    msg.setDestinationEntity(170U);
    msg.id = 227U;
    msg.value = 0.7138675885553467;

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
    msg.setTimeStamp(0.6104391830189171);
    msg.setSource(37137U);
    msg.setSourceEntity(210U);
    msg.setDestination(5253U);
    msg.setDestinationEntity(152U);
    msg.id = 114U;
    msg.value = 0.9624245701003962;

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
    msg.setTimeStamp(0.3532651870020721);
    msg.setSource(50716U);
    msg.setSourceEntity(171U);
    msg.setDestination(32768U);
    msg.setDestinationEntity(159U);
    msg.x = 0.1550089954168864;
    msg.y = 0.33052375141653656;
    msg.z = 0.8515175274462261;
    msg.phi = 0.5872785302931179;
    msg.theta = 0.391997792651688;
    msg.psi = 0.1780049334795475;

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
    msg.setTimeStamp(0.8900501006717771);
    msg.setSource(4297U);
    msg.setSourceEntity(228U);
    msg.setDestination(4075U);
    msg.setDestinationEntity(112U);
    msg.x = 0.126107139224238;
    msg.y = 0.08578928670221986;
    msg.z = 0.24541632131125457;
    msg.phi = 0.9939122581266786;
    msg.theta = 0.5302772497668878;
    msg.psi = 0.3043770782340328;

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
    msg.setTimeStamp(0.6264987424145029);
    msg.setSource(8814U);
    msg.setSourceEntity(80U);
    msg.setDestination(9497U);
    msg.setDestinationEntity(198U);
    msg.x = 0.016755021828690486;
    msg.y = 0.8714358542494457;
    msg.z = 0.5425960284090869;
    msg.phi = 0.6969910749681587;
    msg.theta = 0.13019914407749578;
    msg.psi = 0.8915637187102706;

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
    msg.setTimeStamp(0.6874220158990754);
    msg.setSource(36940U);
    msg.setSourceEntity(42U);
    msg.setDestination(57687U);
    msg.setDestinationEntity(48U);
    msg.beam_width = 0.9545820087273168;
    msg.beam_height = 0.422053819370791;

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
    msg.setTimeStamp(0.2566058605444993);
    msg.setSource(58668U);
    msg.setSourceEntity(124U);
    msg.setDestination(57729U);
    msg.setDestinationEntity(132U);
    msg.beam_width = 0.12588378117069143;
    msg.beam_height = 0.7112656764691311;

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
    msg.setTimeStamp(0.6096225459336474);
    msg.setSource(59537U);
    msg.setSourceEntity(243U);
    msg.setDestination(31477U);
    msg.setDestinationEntity(8U);
    msg.beam_width = 0.08307438269390177;
    msg.beam_height = 0.554623338787584;

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
    msg.setTimeStamp(0.6737072372848881);
    msg.setSource(33497U);
    msg.setSourceEntity(87U);
    msg.setDestination(30384U);
    msg.setDestinationEntity(80U);
    msg.sane = 182U;

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
    msg.setTimeStamp(0.5164220160100481);
    msg.setSource(17423U);
    msg.setSourceEntity(188U);
    msg.setDestination(39587U);
    msg.setDestinationEntity(218U);
    msg.sane = 146U;

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
    msg.setTimeStamp(0.22299548870886277);
    msg.setSource(12697U);
    msg.setSourceEntity(43U);
    msg.setDestination(49060U);
    msg.setDestinationEntity(72U);
    msg.sane = 117U;

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
    msg.setTimeStamp(0.07622526986330869);
    msg.setSource(6949U);
    msg.setSourceEntity(212U);
    msg.setDestination(34852U);
    msg.setDestinationEntity(107U);
    msg.value = 0.9718151875282429;

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
    msg.setTimeStamp(0.9694232464314795);
    msg.setSource(25977U);
    msg.setSourceEntity(63U);
    msg.setDestination(46322U);
    msg.setDestinationEntity(120U);
    msg.value = 0.14436160963597378;

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
    msg.setTimeStamp(0.025895586808159177);
    msg.setSource(53956U);
    msg.setSourceEntity(88U);
    msg.setDestination(31046U);
    msg.setDestinationEntity(253U);
    msg.value = 0.7563262982540524;

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
    msg.setTimeStamp(0.4326055446039627);
    msg.setSource(25368U);
    msg.setSourceEntity(79U);
    msg.setDestination(56837U);
    msg.setDestinationEntity(253U);
    msg.value = 0.6178203546598084;

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
    msg.setTimeStamp(0.6276904531658143);
    msg.setSource(17667U);
    msg.setSourceEntity(250U);
    msg.setDestination(32027U);
    msg.setDestinationEntity(9U);
    msg.value = 0.004038773226534675;

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
    msg.setTimeStamp(0.9770063896136378);
    msg.setSource(54971U);
    msg.setSourceEntity(140U);
    msg.setDestination(30633U);
    msg.setDestinationEntity(200U);
    msg.value = 0.012455499984108442;

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
    msg.setTimeStamp(0.4242749055512751);
    msg.setSource(2119U);
    msg.setSourceEntity(60U);
    msg.setDestination(40237U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5382090478931388;

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
    msg.setTimeStamp(0.6985387445066049);
    msg.setSource(29245U);
    msg.setSourceEntity(51U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(193U);
    msg.value = 0.9444282475179749;

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
    msg.setTimeStamp(0.9378156045628584);
    msg.setSource(55777U);
    msg.setSourceEntity(223U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(203U);
    msg.value = 0.8902306916130378;

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
    msg.setTimeStamp(0.9304816032406378);
    msg.setSource(44697U);
    msg.setSourceEntity(87U);
    msg.setDestination(54277U);
    msg.setDestinationEntity(215U);
    msg.value = 0.06443443441610808;

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
    msg.setTimeStamp(0.862126814080001);
    msg.setSource(64640U);
    msg.setSourceEntity(174U);
    msg.setDestination(12058U);
    msg.setDestinationEntity(110U);
    msg.value = 0.4768719598285692;

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
    msg.setTimeStamp(0.8260743346204494);
    msg.setSource(65071U);
    msg.setSourceEntity(222U);
    msg.setDestination(21226U);
    msg.setDestinationEntity(218U);
    msg.value = 0.45942545493278397;

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
    msg.setTimeStamp(0.9606751776708344);
    msg.setSource(53791U);
    msg.setSourceEntity(171U);
    msg.setDestination(3543U);
    msg.setDestinationEntity(221U);
    msg.value = 0.46028879261363975;

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
    msg.setTimeStamp(0.2779544995814678);
    msg.setSource(23449U);
    msg.setSourceEntity(126U);
    msg.setDestination(4621U);
    msg.setDestinationEntity(167U);
    msg.value = 0.45449586255258456;

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
    msg.setTimeStamp(0.2554152926454756);
    msg.setSource(42986U);
    msg.setSourceEntity(22U);
    msg.setDestination(40345U);
    msg.setDestinationEntity(57U);
    msg.value = 0.2346478542934498;

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
    msg.setTimeStamp(0.6931795510416277);
    msg.setSource(8613U);
    msg.setSourceEntity(107U);
    msg.setDestination(37602U);
    msg.setDestinationEntity(114U);
    msg.value = 0.4284161599669527;

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
    msg.setTimeStamp(0.2731904605950449);
    msg.setSource(58193U);
    msg.setSourceEntity(245U);
    msg.setDestination(19435U);
    msg.setDestinationEntity(124U);
    msg.value = 0.4799978514036064;

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
    msg.setTimeStamp(0.9439242365053898);
    msg.setSource(25155U);
    msg.setSourceEntity(198U);
    msg.setDestination(17051U);
    msg.setDestinationEntity(177U);
    msg.value = 0.9214438287375664;

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
    msg.setTimeStamp(0.0439289402390588);
    msg.setSource(26292U);
    msg.setSourceEntity(55U);
    msg.setDestination(39269U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6139941600169255;

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
    msg.setTimeStamp(0.936513894110242);
    msg.setSource(6811U);
    msg.setSourceEntity(221U);
    msg.setDestination(51779U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8073176632060917;

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
    msg.setTimeStamp(0.3559008334596919);
    msg.setSource(26482U);
    msg.setSourceEntity(119U);
    msg.setDestination(25255U);
    msg.setDestinationEntity(64U);
    msg.value = 0.8821057116342632;

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
    msg.setTimeStamp(0.6447857498634407);
    msg.setSource(15517U);
    msg.setSourceEntity(213U);
    msg.setDestination(9734U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5441308409365093;

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
    msg.setTimeStamp(0.39629388236961394);
    msg.setSource(61466U);
    msg.setSourceEntity(224U);
    msg.setDestination(9057U);
    msg.setDestinationEntity(4U);
    msg.value = 0.643238991969478;

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
    msg.setTimeStamp(0.11874521338513566);
    msg.setSource(18776U);
    msg.setSourceEntity(14U);
    msg.setDestination(45516U);
    msg.setDestinationEntity(16U);
    msg.value = 0.09662544947668572;

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
    msg.setTimeStamp(0.12329497104256648);
    msg.setSource(27042U);
    msg.setSourceEntity(99U);
    msg.setDestination(2010U);
    msg.setDestinationEntity(132U);
    msg.validity = 48732U;
    msg.type = 156U;
    msg.tow = 2663943033U;
    msg.base_lat = 0.4129112978505214;
    msg.base_lon = 0.37171315817039285;
    msg.base_height = 0.12395549728248778;
    msg.n = 0.209828887756774;
    msg.e = 0.20697100728785067;
    msg.d = 0.937440704209185;
    msg.v_n = 0.5232168336904435;
    msg.v_e = 0.40647944376090284;
    msg.v_d = 0.19770412313384222;
    msg.satellites = 81U;
    msg.iar_hyp = 56274U;
    msg.iar_ratio = 0.32711320734328586;

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
    msg.setTimeStamp(0.2470798613443136);
    msg.setSource(51501U);
    msg.setSourceEntity(142U);
    msg.setDestination(64019U);
    msg.setDestinationEntity(177U);
    msg.validity = 37158U;
    msg.type = 198U;
    msg.tow = 115715092U;
    msg.base_lat = 0.140100133993582;
    msg.base_lon = 0.6837893040335556;
    msg.base_height = 0.9236276045683053;
    msg.n = 0.8101303076885915;
    msg.e = 0.7219949854740931;
    msg.d = 0.0809724382528123;
    msg.v_n = 0.8103964078780435;
    msg.v_e = 0.8765395191019973;
    msg.v_d = 0.6091316181002491;
    msg.satellites = 226U;
    msg.iar_hyp = 6906U;
    msg.iar_ratio = 0.4312363457305365;

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
    msg.setTimeStamp(0.23056771454803948);
    msg.setSource(39604U);
    msg.setSourceEntity(168U);
    msg.setDestination(14440U);
    msg.setDestinationEntity(127U);
    msg.validity = 5120U;
    msg.type = 20U;
    msg.tow = 4087879044U;
    msg.base_lat = 0.14431303602819368;
    msg.base_lon = 0.4566564203629192;
    msg.base_height = 0.08161029625046234;
    msg.n = 0.611037839496056;
    msg.e = 0.39975542994017876;
    msg.d = 0.8177217306364608;
    msg.v_n = 0.37466869471001185;
    msg.v_e = 0.23080230712243566;
    msg.v_d = 0.03708477376774788;
    msg.satellites = 55U;
    msg.iar_hyp = 9200U;
    msg.iar_ratio = 0.6413573988640338;

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
    msg.setTimeStamp(0.7646170906304168);
    msg.setSource(11425U);
    msg.setSourceEntity(116U);
    msg.setDestination(45701U);
    msg.setDestinationEntity(4U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.17569866885224328;
    tmp_msg_0.lon = 0.5359376294535017;
    tmp_msg_0.height = 0.034521981715170624;
    tmp_msg_0.x = 0.03426342317904241;
    tmp_msg_0.y = 0.9772675839890833;
    tmp_msg_0.z = 0.5986349322162986;
    tmp_msg_0.phi = 0.0038284961417884844;
    tmp_msg_0.theta = 0.06284051696554538;
    tmp_msg_0.psi = 0.5842080935350912;
    tmp_msg_0.u = 0.01794148747078228;
    tmp_msg_0.v = 0.471961111568562;
    tmp_msg_0.w = 0.4746864155740932;
    tmp_msg_0.vx = 0.8588198385507451;
    tmp_msg_0.vy = 0.4200491803131565;
    tmp_msg_0.vz = 0.22363310967603034;
    tmp_msg_0.p = 0.05701245248293019;
    tmp_msg_0.q = 0.9048620701121516;
    tmp_msg_0.r = 0.6507432794804392;
    tmp_msg_0.depth = 0.20151454220470355;
    tmp_msg_0.alt = 0.764772398621284;
    msg.state.set(tmp_msg_0);
    msg.type = 1U;

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
    msg.setTimeStamp(0.4093574783246041);
    msg.setSource(57000U);
    msg.setSourceEntity(158U);
    msg.setDestination(28350U);
    msg.setDestinationEntity(196U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7697345812240978;
    tmp_msg_0.lon = 0.05716596344344416;
    tmp_msg_0.height = 0.6360676060418775;
    tmp_msg_0.x = 0.1012291658409189;
    tmp_msg_0.y = 0.07951125602127374;
    tmp_msg_0.z = 0.042429791179346865;
    tmp_msg_0.phi = 0.39020621793286203;
    tmp_msg_0.theta = 0.22725907065566497;
    tmp_msg_0.psi = 0.4903983124834185;
    tmp_msg_0.u = 0.5198847515195669;
    tmp_msg_0.v = 0.7283098017473106;
    tmp_msg_0.w = 0.8314508982329074;
    tmp_msg_0.vx = 0.5143228830345882;
    tmp_msg_0.vy = 0.5229182802198754;
    tmp_msg_0.vz = 0.1521951600295075;
    tmp_msg_0.p = 0.4585498465429332;
    tmp_msg_0.q = 0.72811540617795;
    tmp_msg_0.r = 0.7833302685316148;
    tmp_msg_0.depth = 0.5328679508955825;
    tmp_msg_0.alt = 0.6968746724858275;
    msg.state.set(tmp_msg_0);
    msg.type = 152U;

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
    msg.setTimeStamp(0.3313343740614215);
    msg.setSource(36231U);
    msg.setSourceEntity(215U);
    msg.setDestination(51468U);
    msg.setDestinationEntity(63U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.17505001945283982;
    tmp_msg_0.lon = 0.6823575566934379;
    tmp_msg_0.height = 0.08151548326172198;
    tmp_msg_0.x = 0.05559304849913094;
    tmp_msg_0.y = 0.9938633479181589;
    tmp_msg_0.z = 0.19120615185297607;
    tmp_msg_0.phi = 0.5503522066195085;
    tmp_msg_0.theta = 0.07183452631772136;
    tmp_msg_0.psi = 0.04305655712925793;
    tmp_msg_0.u = 0.32831614710329415;
    tmp_msg_0.v = 0.2003483298931351;
    tmp_msg_0.w = 0.4744197548196831;
    tmp_msg_0.vx = 0.5858747228938549;
    tmp_msg_0.vy = 0.41442539096848596;
    tmp_msg_0.vz = 0.5413778787666687;
    tmp_msg_0.p = 0.5363648557332601;
    tmp_msg_0.q = 0.321837836775244;
    tmp_msg_0.r = 0.6789797164349085;
    tmp_msg_0.depth = 0.8484181143953401;
    tmp_msg_0.alt = 0.41825040680743986;
    msg.state.set(tmp_msg_0);
    msg.type = 147U;

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
    msg.setTimeStamp(0.5150333603786313);
    msg.setSource(44446U);
    msg.setSourceEntity(171U);
    msg.setDestination(4133U);
    msg.setDestinationEntity(129U);
    msg.value = 0.5517081288687146;

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
    msg.setTimeStamp(0.6445920262534943);
    msg.setSource(46392U);
    msg.setSourceEntity(180U);
    msg.setDestination(56605U);
    msg.setDestinationEntity(32U);
    msg.value = 0.043412500366520335;

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
    msg.setTimeStamp(0.027873947705068902);
    msg.setSource(41574U);
    msg.setSourceEntity(93U);
    msg.setDestination(15507U);
    msg.setDestinationEntity(75U);
    msg.value = 0.4690459935158764;

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
    msg.setTimeStamp(0.2516642594447579);
    msg.setSource(59703U);
    msg.setSourceEntity(134U);
    msg.setDestination(46403U);
    msg.setDestinationEntity(60U);
    msg.value = 0.15538073589378698;

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
    msg.setTimeStamp(0.17583529627016903);
    msg.setSource(52828U);
    msg.setSourceEntity(84U);
    msg.setDestination(30807U);
    msg.setDestinationEntity(59U);
    msg.value = 0.8322723270456265;

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
    msg.setTimeStamp(0.38196398108187946);
    msg.setSource(27447U);
    msg.setSourceEntity(203U);
    msg.setDestination(41267U);
    msg.setDestinationEntity(36U);
    msg.value = 0.5959733721344095;

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
    msg.setTimeStamp(0.5722011120510809);
    msg.setSource(38110U);
    msg.setSourceEntity(80U);
    msg.setDestination(59385U);
    msg.setDestinationEntity(0U);
    msg.value = 0.9737813804319948;

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
    msg.setTimeStamp(0.9783906197854494);
    msg.setSource(33181U);
    msg.setSourceEntity(221U);
    msg.setDestination(2088U);
    msg.setDestinationEntity(29U);
    msg.value = 0.910573824916059;

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
    msg.setTimeStamp(0.6681116534475512);
    msg.setSource(47479U);
    msg.setSourceEntity(80U);
    msg.setDestination(39326U);
    msg.setDestinationEntity(198U);
    msg.value = 0.1388804171922069;

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
    msg.setTimeStamp(0.6214381759979064);
    msg.setSource(22467U);
    msg.setSourceEntity(118U);
    msg.setDestination(23365U);
    msg.setDestinationEntity(24U);
    msg.value = 0.004602602214345941;

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
    msg.setTimeStamp(0.980031149130118);
    msg.setSource(47457U);
    msg.setSourceEntity(223U);
    msg.setDestination(57132U);
    msg.setDestinationEntity(30U);
    msg.value = 0.3757738230879051;

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
    msg.setTimeStamp(0.7613305397794257);
    msg.setSource(39600U);
    msg.setSourceEntity(207U);
    msg.setDestination(33844U);
    msg.setDestinationEntity(9U);
    msg.value = 0.39378656445737714;

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
    msg.setTimeStamp(0.9155016280696274);
    msg.setSource(55457U);
    msg.setSourceEntity(145U);
    msg.setDestination(26297U);
    msg.setDestinationEntity(191U);
    msg.value = 0.00773151262321603;

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
    msg.setTimeStamp(0.01323650005391741);
    msg.setSource(22276U);
    msg.setSourceEntity(223U);
    msg.setDestination(16675U);
    msg.setDestinationEntity(22U);
    msg.value = 0.5987323001954147;

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
    msg.setTimeStamp(0.19041752539073564);
    msg.setSource(2709U);
    msg.setSourceEntity(204U);
    msg.setDestination(42888U);
    msg.setDestinationEntity(27U);
    msg.value = 0.46944809141519384;

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
    msg.setTimeStamp(0.8477617795059541);
    msg.setSource(22500U);
    msg.setSourceEntity(159U);
    msg.setDestination(2809U);
    msg.setDestinationEntity(1U);
    msg.id = 133U;
    msg.zoom = 254U;
    msg.action = 13U;

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
    msg.setTimeStamp(0.09983117198534563);
    msg.setSource(50231U);
    msg.setSourceEntity(127U);
    msg.setDestination(31355U);
    msg.setDestinationEntity(120U);
    msg.id = 10U;
    msg.zoom = 213U;
    msg.action = 151U;

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
    msg.setTimeStamp(0.10744753659187145);
    msg.setSource(55729U);
    msg.setSourceEntity(76U);
    msg.setDestination(2596U);
    msg.setDestinationEntity(253U);
    msg.id = 247U;
    msg.zoom = 108U;
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
    msg.setTimeStamp(0.9939492944627126);
    msg.setSource(37860U);
    msg.setSourceEntity(73U);
    msg.setDestination(1767U);
    msg.setDestinationEntity(100U);
    msg.id = 148U;
    msg.value = 0.5821325993079589;

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
    msg.setTimeStamp(0.5619523128580675);
    msg.setSource(50399U);
    msg.setSourceEntity(140U);
    msg.setDestination(46030U);
    msg.setDestinationEntity(219U);
    msg.id = 164U;
    msg.value = 0.6168470754569433;

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
    msg.setTimeStamp(0.34286877560712703);
    msg.setSource(63035U);
    msg.setSourceEntity(65U);
    msg.setDestination(43649U);
    msg.setDestinationEntity(166U);
    msg.id = 175U;
    msg.value = 0.738906697652691;

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
    msg.setTimeStamp(0.4822343000689421);
    msg.setSource(42572U);
    msg.setSourceEntity(140U);
    msg.setDestination(28994U);
    msg.setDestinationEntity(250U);
    msg.id = 53U;
    msg.value = 0.03215502785985558;

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
    msg.setTimeStamp(0.43764571344145387);
    msg.setSource(54791U);
    msg.setSourceEntity(228U);
    msg.setDestination(8919U);
    msg.setDestinationEntity(103U);
    msg.id = 11U;
    msg.value = 0.29244650886783774;

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
    msg.setTimeStamp(0.2524277959413178);
    msg.setSource(31621U);
    msg.setSourceEntity(253U);
    msg.setDestination(17099U);
    msg.setDestinationEntity(159U);
    msg.id = 42U;
    msg.value = 0.9224548694292097;

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
    msg.setTimeStamp(0.38649292735679175);
    msg.setSource(28805U);
    msg.setSourceEntity(90U);
    msg.setDestination(61150U);
    msg.setDestinationEntity(79U);
    msg.id = 175U;
    msg.angle = 0.6699579330891942;

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
    msg.setTimeStamp(0.4605985166655113);
    msg.setSource(55214U);
    msg.setSourceEntity(242U);
    msg.setDestination(58797U);
    msg.setDestinationEntity(56U);
    msg.id = 89U;
    msg.angle = 0.9101426359818972;

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
    msg.setTimeStamp(0.8480581244448485);
    msg.setSource(16696U);
    msg.setSourceEntity(110U);
    msg.setDestination(62737U);
    msg.setDestinationEntity(48U);
    msg.id = 39U;
    msg.angle = 0.25547299980229143;

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
    msg.setTimeStamp(0.49146439684216725);
    msg.setSource(30954U);
    msg.setSourceEntity(148U);
    msg.setDestination(31618U);
    msg.setDestinationEntity(139U);
    msg.op = 94U;
    msg.actions.assign("SEOLINMZXVKQJHEKZYSGWVBRKWMKNDDPNRXBGNGOTSTBWXSWZYLUJJHLKXASFVIGBVTRJPCEIQCKXXUSQALHWOIMBZ");

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
    msg.setTimeStamp(0.5017856973584357);
    msg.setSource(16312U);
    msg.setSourceEntity(170U);
    msg.setDestination(46586U);
    msg.setDestinationEntity(22U);
    msg.op = 151U;
    msg.actions.assign("XBQULUFRKMPJEUXCQHDZY");

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
    msg.setTimeStamp(0.01875031683673123);
    msg.setSource(24875U);
    msg.setSourceEntity(169U);
    msg.setDestination(30568U);
    msg.setDestinationEntity(204U);
    msg.op = 250U;
    msg.actions.assign("LOKDBPIWFTFVOKZSAJYRSBGAPHOWRSNEPDXCJGMNYNJNIFTNYHSPUIBOELQBKINSMJJOHMGTEDWNRAWGCPIQRDBPLQZUHMKFKQRTQVSYBWODSMFKJRBWTCVCKXHTYTZOFWKNAUSQEQAXDMZXEELPXDAMCZUYFWSLZBZBIQMLWAVUP");

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
    msg.setTimeStamp(0.0074074625395722515);
    msg.setSource(12195U);
    msg.setSourceEntity(208U);
    msg.setDestination(48585U);
    msg.setDestinationEntity(128U);
    msg.actions.assign("VJBICADKJJUGCKGBRSPMDOOHRZAKQBPIYSXGNEUKVMBWTGJJKNRFQNGHVVZMJVVZSQDALGFGTOMXNLJVZOFWYRTWOF");

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
    msg.setTimeStamp(0.6873048860553969);
    msg.setSource(35561U);
    msg.setSourceEntity(227U);
    msg.setDestination(17918U);
    msg.setDestinationEntity(86U);
    msg.actions.assign("QKJJGTCUWMJEBAXPYSOJRUOBTDXHVSFVYWSIMEHQDHCNVSDLTXZKQOIKMXFQBKJJSULFVTWQYNUATGVHISFUOPRPWQGFNTDPHHJPQNWYOVUJMYHAUCATGFCZAPEXEIEGDGRPDNWBNXEUMQVCBWVIMROCLGFETPIRNKOLPYVGRFLJSXKD");

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
    msg.setTimeStamp(0.10720649552108896);
    msg.setSource(7005U);
    msg.setSourceEntity(10U);
    msg.setDestination(10677U);
    msg.setDestinationEntity(15U);
    msg.actions.assign("IJMLPRMHTZVDKHTGIVKRKGKQPXKZOPDHTMEAUVHGNFWODKZPRJFEXQQGMTGMBDNYAVBWQLDHQSOYAJHTFWJVQSMEDEEOFEVKTZWBNSARGJUSRYVNHQLRLDSGKKSFHXEWTLVAXARUJNFRVMXRUKYEBGTLFFYOCNMIUTSCPULSQPIPPDFCDUWILMXCAYWZIWJEZDRBIJCAOGHYZUYQWBCXQJMBCACHXBVNNGZICOZYZLNOBFXBPTENYO");

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
    msg.setTimeStamp(0.3294130907704905);
    msg.setSource(52375U);
    msg.setSourceEntity(24U);
    msg.setDestination(34397U);
    msg.setDestinationEntity(194U);
    msg.button = 204U;
    msg.value = 118U;

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
    msg.setTimeStamp(0.1659618920919559);
    msg.setSource(53608U);
    msg.setSourceEntity(155U);
    msg.setDestination(64390U);
    msg.setDestinationEntity(67U);
    msg.button = 180U;
    msg.value = 3U;

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
    msg.setTimeStamp(0.23507790254016447);
    msg.setSource(7677U);
    msg.setSourceEntity(204U);
    msg.setDestination(50556U);
    msg.setDestinationEntity(87U);
    msg.button = 107U;
    msg.value = 195U;

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
    msg.setTimeStamp(0.3374272966189039);
    msg.setSource(38232U);
    msg.setSourceEntity(186U);
    msg.setDestination(39675U);
    msg.setDestinationEntity(230U);
    msg.op = 75U;
    msg.text.assign("TMQXUIZBZGPVZLNCHYKRMQAFKPLJOIUHIDGXMAOOLORDGXFDGUIHRIRQCBWYCTRFMSNOQSWZYFPIUMQQEAEWAQRAVCJHESKKJLZNSHUACSYRSXZKDXNPYKPFZMFLZETTFOHMRJDIKMGJVDDSVKAUBPPQGRWHVTWEUBNXDEJHGNNWOPATNCXBTYDWCLJAVTWOGTSJKLXPOCENHWVECVEQNTIRVXYBBGFQBFSGBLJKVPCWUZULEXUOAYJIBFHIL");

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
    msg.setTimeStamp(0.925475085533655);
    msg.setSource(34816U);
    msg.setSourceEntity(43U);
    msg.setDestination(60125U);
    msg.setDestinationEntity(145U);
    msg.op = 184U;
    msg.text.assign("UZHSUVJFNUPLWUEJPTPSWDMLFXMPLNZDGVGYEBRHTXRRDKPMFVYCHBEYHBJBOPKOKHILDTQMSIITAAEERKWVQG");

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
    msg.setTimeStamp(0.5581085145628077);
    msg.setSource(42451U);
    msg.setSourceEntity(246U);
    msg.setDestination(23078U);
    msg.setDestinationEntity(248U);
    msg.op = 147U;
    msg.text.assign("PPAQLZVQFIKRSOEVYQ");

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
    msg.setTimeStamp(0.8554362056657489);
    msg.setSource(54633U);
    msg.setSourceEntity(13U);
    msg.setDestination(872U);
    msg.setDestinationEntity(35U);
    msg.op = 68U;
    msg.time_remain = 0.13869754324937322;
    msg.sched_time = 0.7466087877889936;

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
    msg.setTimeStamp(0.72585842502591);
    msg.setSource(16410U);
    msg.setSourceEntity(243U);
    msg.setDestination(27873U);
    msg.setDestinationEntity(155U);
    msg.op = 89U;
    msg.time_remain = 0.9272474051465637;
    msg.sched_time = 0.7753383407702524;

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
    msg.setTimeStamp(0.5436490886932301);
    msg.setSource(32554U);
    msg.setSourceEntity(61U);
    msg.setDestination(50479U);
    msg.setDestinationEntity(20U);
    msg.op = 62U;
    msg.time_remain = 0.8493681612540847;
    msg.sched_time = 0.2978891579847033;

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
    msg.setTimeStamp(0.6045845614987352);
    msg.setSource(18660U);
    msg.setSourceEntity(171U);
    msg.setDestination(30862U);
    msg.setDestinationEntity(108U);
    msg.name.assign("ZUOXFRFJJRBBKSSCWFJIDIAGUVOWGMECOQYPZYVMTIQXBAFSJYHJUGLFGAUMIYJDEGHCZSEPOWKQQPHKLLRGLEVCXLAZBRXRQCKLFMWFHJGMXUVTBTESRHHNECWNYRCZOVKXI");
    msg.op = 189U;
    msg.sched_time = 0.43454108091816335;

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
    msg.setTimeStamp(0.11941169374353156);
    msg.setSource(65096U);
    msg.setSourceEntity(44U);
    msg.setDestination(25973U);
    msg.setDestinationEntity(45U);
    msg.name.assign("ZYFWFFCULNYIESDWEANRWWFDZJBORKCTBJMFJVIYQHDJMVKSCPKFAIHASPHDRYQWHMLTQPEAHVBHBELZHXQROTGXIYXXWRBCTJCZSXUUWYPMDGAALJGBQOSYGIQQRAOUTVORSBNNLPUZVMKMCAUGCDOLGUYDMSLVJZKJEHCARWPKZFUTZKEVZQGOMLDDIVKJUQTCIEBNT");
    msg.op = 205U;
    msg.sched_time = 0.2339344970422128;

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
    msg.setTimeStamp(0.02926806348669231);
    msg.setSource(62121U);
    msg.setSourceEntity(136U);
    msg.setDestination(17133U);
    msg.setDestinationEntity(225U);
    msg.name.assign("MGBKCCGHEXNSTOXPNEPKHEHHLUCAVMPOPFVZYWI");
    msg.op = 136U;
    msg.sched_time = 0.9795649265462655;

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
    msg.setTimeStamp(0.5692646796669278);
    msg.setSource(9625U);
    msg.setSourceEntity(176U);
    msg.setDestination(5631U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.8713966476266186);
    msg.setSource(35683U);
    msg.setSourceEntity(196U);
    msg.setDestination(39475U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.6149304785709698);
    msg.setSource(65451U);
    msg.setSourceEntity(94U);
    msg.setDestination(4967U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.24084329521807812);
    msg.setSource(31810U);
    msg.setSourceEntity(128U);
    msg.setDestination(57361U);
    msg.setDestinationEntity(101U);
    msg.name.assign("WUEHAHMPJSVETULFNFKOAHBFWMAGNDBFRYKMRJQMSYTAH");
    msg.state = 2U;

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
    msg.setTimeStamp(0.11505029599398331);
    msg.setSource(34392U);
    msg.setSourceEntity(146U);
    msg.setDestination(45789U);
    msg.setDestinationEntity(162U);
    msg.name.assign("RZRIKJLLAUNKIVGOJYAANTMDSOLIRFZRWXEMWWLYEQPPKIYJDBMOVCVGS");
    msg.state = 194U;

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
    msg.setTimeStamp(0.666092836973849);
    msg.setSource(22680U);
    msg.setSourceEntity(66U);
    msg.setDestination(61792U);
    msg.setDestinationEntity(125U);
    msg.name.assign("CLBBULLAUWFYVJYHUGPVRKDGUKHUCOFNKAMQMIGCIKERTBHAMKUFLVWZOYEIMZXNNXCLAEUZRP");
    msg.state = 157U;

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
    msg.setTimeStamp(0.6666246706030715);
    msg.setSource(13750U);
    msg.setSourceEntity(205U);
    msg.setDestination(6110U);
    msg.setDestinationEntity(86U);
    msg.name.assign("QENFSFBDZGGUEYITGAODEUUZSWKYLFGDRIYTDTDZYGLXGKKHWLWSXJVMZIHTECPFSLQPKJOFCRFRZSPLQBXRQECPNXVWDUZDINBXIOAWRYEOSNPOTCTBMJMRTGUGWHUBYEECAKJSXQXLPLHHBHXMFURICVHJVLTDBGJK");
    msg.value = 242U;

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
    msg.setTimeStamp(0.7608976147299312);
    msg.setSource(14714U);
    msg.setSourceEntity(129U);
    msg.setDestination(49392U);
    msg.setDestinationEntity(37U);
    msg.name.assign("OGDLFQWANNKJOJZVBIBMEIUCHYPCDZHGHYCDSUWXKHGMNXAFLEKQPNWQRRVNTJPLLHZEYCYGXXJYAVFKVFLRARXVRGEIETWFFPHTOGJBFMBWKHCHPVOMOJMZYNFIKBLQWMUDIYWIMLJUJQUHBQAMKSCDCCJXIBWKGNKXSLTOXSTDRUTDPADZVWFWEEIUTZMVQSCTGUZDOPRYUPMUSJITBANGKZSAQRYRZXZCHASFS");
    msg.value = 151U;

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
    msg.setTimeStamp(0.5401706559908563);
    msg.setSource(41240U);
    msg.setSourceEntity(198U);
    msg.setDestination(38417U);
    msg.setDestinationEntity(140U);
    msg.name.assign("SFYVPQJFZVWUUBZOGSEKAYCIYUVJXCMCOAMIEUTIXZGAPWXEPGUCSOVSYOACINDBKBGUWQPTVXXLMOR");
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
    msg.setTimeStamp(0.004465052854841001);
    msg.setSource(60479U);
    msg.setSourceEntity(3U);
    msg.setDestination(60837U);
    msg.setDestinationEntity(235U);
    msg.name.assign("VBYSQTXUPWCCXUDMJLYKHQLIJXEMWKZIFXABHUYNYFZTQMKUVAEJLTJZLBOBEZDDKTHYK");

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
    msg.setTimeStamp(0.7356333799804814);
    msg.setSource(61677U);
    msg.setSourceEntity(134U);
    msg.setDestination(11811U);
    msg.setDestinationEntity(91U);
    msg.name.assign("VDWMQJYHUGSOCHSEXHIXWXHUUDPOWGOIVZPYVJVPITZGTFVCAZBELUYKSQKQTUIXICRSVIQBFFHETMBANVITJP");

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
    msg.setTimeStamp(0.45219695640695956);
    msg.setSource(13460U);
    msg.setSourceEntity(71U);
    msg.setDestination(45463U);
    msg.setDestinationEntity(2U);
    msg.name.assign("PWRUGWQFKYXFSJTJCMKWINIAPGBUSSICKRWNXHZOZRFCOQUKERQYLFCOKENGEJIDFUEDHMCLHOMACGEQPDHZHGZRZCWDVPROKPYHGDIWRBFVUWCZAYYGKALSHMFEIWPTTLBRAXHZBWGYJRMVMNYPPVYSOCLNQDHYTFGTEOVJSNHSKAPQUVFDMVKINQXUVBOTNOAABCQXJXXMMQTZJWZDVJLIGB");

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
    msg.setTimeStamp(0.7886140040971997);
    msg.setSource(61484U);
    msg.setSourceEntity(67U);
    msg.setDestination(18985U);
    msg.setDestinationEntity(96U);
    msg.name.assign("HPUHTDIDWLVURIBHTZBGEYJJZYYPSNFNUWBNQXQXPJSTNMUQWYNXKGKOPXZKDAGBAOUNOTDECBLEKSYQQFHJCEWGIFSELMTFPDEGKGQWCRSWCIAUUNMZEZVSCQYVXVGHKYELVKRHTPQJIZW");
    msg.value = 131U;

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
    msg.setTimeStamp(0.1876277564527068);
    msg.setSource(37177U);
    msg.setSourceEntity(144U);
    msg.setDestination(45883U);
    msg.setDestinationEntity(118U);
    msg.name.assign("SFISTMYNGABICTQOAUDFJWGGHBCYRRYUCIMTMZFCAEDNSOPWPGMZNELHQPTWJLSLBUQIMVPJVFRXTVDUMDJQTMDLEPIEIRHKKGSXBYDXEOKKKYWKEOHHJYAPIWVSXLRWVBZHMHSUQROZMGFWUAFXWOZULZHENXXDVZPTDCEZBAVGXFIOSIAGNKMKQJOPLBBO");
    msg.value = 253U;

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
    msg.setTimeStamp(0.58908822692454);
    msg.setSource(53126U);
    msg.setSourceEntity(253U);
    msg.setDestination(31583U);
    msg.setDestinationEntity(170U);
    msg.name.assign("ZARXVOLOBLUDIYRCXGFHELPVQOEOOGOENHZMVRCAMEAXBJQGYLTTHFPCKCYQKVFWXLXMYBIULJRYVDXAWZFDWBUUUVXSWZYOTUMPORKKEC");
    msg.value = 59U;

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
    msg.setTimeStamp(0.28701181563438904);
    msg.setSource(10459U);
    msg.setSourceEntity(203U);
    msg.setDestination(22542U);
    msg.setDestinationEntity(245U);
    msg.id = 51U;
    msg.period = 3996388634U;
    msg.duty_cycle = 3866202591U;

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
    msg.setTimeStamp(0.023765609944268018);
    msg.setSource(329U);
    msg.setSourceEntity(108U);
    msg.setDestination(12288U);
    msg.setDestinationEntity(145U);
    msg.id = 169U;
    msg.period = 132085097U;
    msg.duty_cycle = 791990277U;

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
    msg.setTimeStamp(0.9256483131210158);
    msg.setSource(32170U);
    msg.setSourceEntity(219U);
    msg.setDestination(32852U);
    msg.setDestinationEntity(252U);
    msg.id = 54U;
    msg.period = 294348920U;
    msg.duty_cycle = 4070007704U;

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
    msg.setTimeStamp(0.38049417983284173);
    msg.setSource(23972U);
    msg.setSourceEntity(231U);
    msg.setDestination(57858U);
    msg.setDestinationEntity(154U);
    msg.id = 2U;
    msg.period = 864800628U;
    msg.duty_cycle = 2934855418U;

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
    msg.setTimeStamp(0.13540220850791762);
    msg.setSource(64306U);
    msg.setSourceEntity(135U);
    msg.setDestination(56370U);
    msg.setDestinationEntity(37U);
    msg.id = 212U;
    msg.period = 3654057533U;
    msg.duty_cycle = 4044284701U;

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
    msg.setTimeStamp(0.12023870907068279);
    msg.setSource(56563U);
    msg.setSourceEntity(72U);
    msg.setDestination(63738U);
    msg.setDestinationEntity(10U);
    msg.id = 215U;
    msg.period = 687996475U;
    msg.duty_cycle = 482188908U;

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
    msg.setTimeStamp(0.5727932884022678);
    msg.setSource(47418U);
    msg.setSourceEntity(233U);
    msg.setDestination(39160U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.525098839284347;
    msg.lon = 0.24550827126764052;
    msg.height = 0.890663563083868;
    msg.x = 0.3279426581929845;
    msg.y = 0.02516951221715147;
    msg.z = 0.8572225343980906;
    msg.phi = 0.457406706899805;
    msg.theta = 0.5912020309809072;
    msg.psi = 0.7543434846062975;
    msg.u = 0.870709329011873;
    msg.v = 0.030598664225269023;
    msg.w = 0.09959735788385049;
    msg.vx = 0.14226348608951445;
    msg.vy = 0.07106282296355848;
    msg.vz = 0.2790520589426462;
    msg.p = 0.40709980292966086;
    msg.q = 0.5465256556360117;
    msg.r = 0.7893633003565459;
    msg.depth = 0.3474787104185434;
    msg.alt = 0.7441356121003957;

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
    msg.setTimeStamp(0.11245326466974848);
    msg.setSource(18728U);
    msg.setSourceEntity(12U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.0013383038804469782;
    msg.lon = 0.9535821026720751;
    msg.height = 0.33974954158845627;
    msg.x = 0.8427109018891076;
    msg.y = 0.2392273871406887;
    msg.z = 0.4143885916882638;
    msg.phi = 0.4033210695803955;
    msg.theta = 0.013766536056344925;
    msg.psi = 0.001639020839800387;
    msg.u = 0.26006637684344347;
    msg.v = 0.9855388331775837;
    msg.w = 0.7379076408283733;
    msg.vx = 0.2345826451272336;
    msg.vy = 0.02276010554507657;
    msg.vz = 0.5815517874440003;
    msg.p = 0.9919833823756217;
    msg.q = 0.2537266550578774;
    msg.r = 0.8209419405231713;
    msg.depth = 0.4863992673842237;
    msg.alt = 0.929296893601209;

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
    msg.setTimeStamp(0.05035893732719554);
    msg.setSource(62296U);
    msg.setSourceEntity(127U);
    msg.setDestination(9948U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.1374754356741087;
    msg.lon = 0.06250048255099605;
    msg.height = 0.3580536364148561;
    msg.x = 0.004885256184018694;
    msg.y = 0.16762223591623182;
    msg.z = 0.5916416195590342;
    msg.phi = 0.9935769988671602;
    msg.theta = 0.5784406629961183;
    msg.psi = 0.8183382563696615;
    msg.u = 0.5005177675033767;
    msg.v = 0.07215143337172003;
    msg.w = 0.6914007800905962;
    msg.vx = 0.061695672590841855;
    msg.vy = 0.39855431183245127;
    msg.vz = 0.8905876690129502;
    msg.p = 0.4781442767428422;
    msg.q = 0.08313547905482699;
    msg.r = 0.9043263782343555;
    msg.depth = 0.48356718956334754;
    msg.alt = 0.5625715992014573;

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
    msg.setTimeStamp(0.988543825047775);
    msg.setSource(24528U);
    msg.setSourceEntity(195U);
    msg.setDestination(734U);
    msg.setDestinationEntity(118U);
    msg.x = 0.04400237250042327;
    msg.y = 0.412275041919258;
    msg.z = 0.14979688888774534;

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
    msg.setTimeStamp(0.7527226227097447);
    msg.setSource(18504U);
    msg.setSourceEntity(195U);
    msg.setDestination(23224U);
    msg.setDestinationEntity(78U);
    msg.x = 0.7529765832423704;
    msg.y = 0.2161763401889497;
    msg.z = 0.06792576797384353;

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
    msg.setTimeStamp(0.07998855466402732);
    msg.setSource(37838U);
    msg.setSourceEntity(233U);
    msg.setDestination(43549U);
    msg.setDestinationEntity(127U);
    msg.x = 0.8066471004646174;
    msg.y = 0.045467761143862084;
    msg.z = 0.1155672904607189;

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
    msg.setTimeStamp(0.9533449255057299);
    msg.setSource(20696U);
    msg.setSourceEntity(235U);
    msg.setDestination(45908U);
    msg.setDestinationEntity(38U);
    msg.value = 0.6238400029004035;

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
    msg.setTimeStamp(0.9963132058135277);
    msg.setSource(52828U);
    msg.setSourceEntity(138U);
    msg.setDestination(32595U);
    msg.setDestinationEntity(20U);
    msg.value = 0.2048262999457915;

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
    msg.setTimeStamp(0.9733120797720989);
    msg.setSource(49637U);
    msg.setSourceEntity(148U);
    msg.setDestination(49862U);
    msg.setDestinationEntity(137U);
    msg.value = 0.4300735748147356;

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
    msg.setTimeStamp(0.0836440447738348);
    msg.setSource(7450U);
    msg.setSourceEntity(209U);
    msg.setDestination(28487U);
    msg.setDestinationEntity(143U);
    msg.value = 0.04819719896699659;

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
    msg.setTimeStamp(0.3638378657830055);
    msg.setSource(21905U);
    msg.setSourceEntity(2U);
    msg.setDestination(28008U);
    msg.setDestinationEntity(124U);
    msg.value = 0.5314566016203872;

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
    msg.setTimeStamp(0.6891148323908204);
    msg.setSource(10136U);
    msg.setSourceEntity(67U);
    msg.setDestination(8416U);
    msg.setDestinationEntity(188U);
    msg.value = 0.4601048429177207;

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
    msg.setTimeStamp(0.14659702598231306);
    msg.setSource(2814U);
    msg.setSourceEntity(146U);
    msg.setDestination(63862U);
    msg.setDestinationEntity(49U);
    msg.x = 0.691898647179503;
    msg.y = 0.6602694752679862;
    msg.z = 0.8684268295363693;
    msg.phi = 0.46345953810114804;
    msg.theta = 0.8605701241231369;
    msg.psi = 0.11218254899020164;
    msg.p = 0.98321627993668;
    msg.q = 0.6591396080542101;
    msg.r = 0.610320801572411;
    msg.u = 0.7749593063776525;
    msg.v = 0.40872938155562877;
    msg.w = 0.3929798465146981;
    msg.bias_psi = 0.5709504958018381;
    msg.bias_r = 0.9839793675212328;

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
    msg.setTimeStamp(0.49142494357793176);
    msg.setSource(36217U);
    msg.setSourceEntity(231U);
    msg.setDestination(41639U);
    msg.setDestinationEntity(64U);
    msg.x = 0.1205766328481781;
    msg.y = 0.6318765457946403;
    msg.z = 0.4167734049022157;
    msg.phi = 0.4216747613853391;
    msg.theta = 0.07761360279511864;
    msg.psi = 0.49193358899470496;
    msg.p = 0.04434281698438469;
    msg.q = 0.7427398778036266;
    msg.r = 0.8078283818945111;
    msg.u = 0.3877909526297675;
    msg.v = 0.8002730595372892;
    msg.w = 0.4393588024255638;
    msg.bias_psi = 0.2113195688729883;
    msg.bias_r = 0.31307455005934925;

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
    msg.setTimeStamp(0.44400188982735556);
    msg.setSource(14365U);
    msg.setSourceEntity(71U);
    msg.setDestination(32070U);
    msg.setDestinationEntity(190U);
    msg.x = 0.2991245238922665;
    msg.y = 0.4624501155337726;
    msg.z = 0.22915457662215022;
    msg.phi = 0.3922020103954259;
    msg.theta = 0.4487908177047425;
    msg.psi = 0.8372874321311612;
    msg.p = 0.7404959203541474;
    msg.q = 0.982165835483581;
    msg.r = 0.36723461307066096;
    msg.u = 0.7312606712696879;
    msg.v = 0.2744662086630819;
    msg.w = 0.2846438089572103;
    msg.bias_psi = 0.7004587274466411;
    msg.bias_r = 0.19495420633468707;

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
    msg.setTimeStamp(0.38498390425427864);
    msg.setSource(51639U);
    msg.setSourceEntity(98U);
    msg.setDestination(53670U);
    msg.setDestinationEntity(72U);
    msg.bias_psi = 0.6639361202275139;
    msg.bias_r = 0.4810199222482602;
    msg.cog = 0.2815103440039374;
    msg.cyaw = 0.7078610522037456;
    msg.lbl_rej_level = 0.7305636571426839;
    msg.gps_rej_level = 0.3417627206826044;
    msg.custom_x = 0.6562994910908123;
    msg.custom_y = 0.2702607971402191;
    msg.custom_z = 0.1858988691486516;

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
    msg.setTimeStamp(0.8862513359233579);
    msg.setSource(14752U);
    msg.setSourceEntity(36U);
    msg.setDestination(60271U);
    msg.setDestinationEntity(8U);
    msg.bias_psi = 0.9215471416339014;
    msg.bias_r = 0.5674146479677226;
    msg.cog = 0.0469456276462894;
    msg.cyaw = 0.9845099555322429;
    msg.lbl_rej_level = 0.4901058747199195;
    msg.gps_rej_level = 0.22664477469315514;
    msg.custom_x = 0.2653317692893429;
    msg.custom_y = 0.38786740435511846;
    msg.custom_z = 0.4130836898290037;

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
    msg.setTimeStamp(0.5316793219034703);
    msg.setSource(63236U);
    msg.setSourceEntity(18U);
    msg.setDestination(64992U);
    msg.setDestinationEntity(210U);
    msg.bias_psi = 0.4493556891085193;
    msg.bias_r = 0.9962854287900672;
    msg.cog = 0.8908565502789062;
    msg.cyaw = 0.6514246285674261;
    msg.lbl_rej_level = 0.7654505856896414;
    msg.gps_rej_level = 0.7628194727280656;
    msg.custom_x = 0.32605950936100503;
    msg.custom_y = 0.9120943016518899;
    msg.custom_z = 0.25209844528681424;

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
    msg.setTimeStamp(0.12301613966444325);
    msg.setSource(4971U);
    msg.setSourceEntity(162U);
    msg.setDestination(2978U);
    msg.setDestinationEntity(167U);
    msg.utc_time = 0.16338911738560613;
    msg.reason = 238U;

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
    msg.setTimeStamp(0.35716243547919646);
    msg.setSource(44884U);
    msg.setSourceEntity(54U);
    msg.setDestination(42822U);
    msg.setDestinationEntity(231U);
    msg.utc_time = 0.3198559883284675;
    msg.reason = 208U;

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
    msg.setTimeStamp(0.5331074407746786);
    msg.setSource(561U);
    msg.setSourceEntity(102U);
    msg.setDestination(16148U);
    msg.setDestinationEntity(139U);
    msg.utc_time = 0.8801265153838821;
    msg.reason = 79U;

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
    msg.setTimeStamp(0.9903636241211884);
    msg.setSource(16996U);
    msg.setSourceEntity(245U);
    msg.setDestination(7608U);
    msg.setDestinationEntity(44U);
    msg.id = 205U;
    msg.range = 0.5099372683585159;
    msg.acceptance = 2U;

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
    msg.setTimeStamp(0.4519716879558826);
    msg.setSource(11353U);
    msg.setSourceEntity(37U);
    msg.setDestination(7199U);
    msg.setDestinationEntity(152U);
    msg.id = 204U;
    msg.range = 0.3139514832149968;
    msg.acceptance = 252U;

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
    msg.setTimeStamp(0.8368628285370833);
    msg.setSource(62730U);
    msg.setSourceEntity(36U);
    msg.setDestination(60177U);
    msg.setDestinationEntity(247U);
    msg.id = 253U;
    msg.range = 0.13759759072135158;
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
    msg.setTimeStamp(0.6561262579103689);
    msg.setSource(542U);
    msg.setSourceEntity(29U);
    msg.setDestination(13814U);
    msg.setDestinationEntity(226U);
    msg.type = 149U;
    msg.reason = 23U;
    msg.value = 0.9557777204605431;
    msg.timestep = 0.3689759861680313;

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
    msg.setTimeStamp(0.8312207222446315);
    msg.setSource(33590U);
    msg.setSourceEntity(156U);
    msg.setDestination(43402U);
    msg.setDestinationEntity(119U);
    msg.type = 124U;
    msg.reason = 91U;
    msg.value = 0.026811520115907705;
    msg.timestep = 0.8232692332654598;

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
    msg.setTimeStamp(0.07840046370996312);
    msg.setSource(19126U);
    msg.setSourceEntity(116U);
    msg.setDestination(40411U);
    msg.setDestinationEntity(13U);
    msg.type = 78U;
    msg.reason = 241U;
    msg.value = 0.5364917651895986;
    msg.timestep = 0.33722284421973114;

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
    msg.setTimeStamp(0.22207990012095047);
    msg.setSource(17657U);
    msg.setSourceEntity(72U);
    msg.setDestination(50050U);
    msg.setDestinationEntity(74U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VNOXUPGHFZYSJAKXPSAEBZXCISZKHIDRVYYPRGOSFNXUVFLXWBAKJTCUEXVVVJTMGRCYBSNAFOHSIZVRQTORJNEXSQWCIIFHQMIMPYQOUHGZUFNLBTANFEBGTYBAHCADOKRFUYWPLCIMXEGK");
    tmp_msg_0.lat = 0.07276707171272567;
    tmp_msg_0.lon = 0.14093617148849535;
    tmp_msg_0.depth = 0.6536515332200948;
    tmp_msg_0.query_channel = 6U;
    tmp_msg_0.reply_channel = 182U;
    tmp_msg_0.transponder_delay = 15U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9319483551124492;
    msg.y = 0.34130676574980223;
    msg.var_x = 0.7066540683719631;
    msg.var_y = 0.5556732640355077;
    msg.distance = 0.74231410706549;

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
    msg.setTimeStamp(0.8359727701359037);
    msg.setSource(8793U);
    msg.setSourceEntity(211U);
    msg.setDestination(26894U);
    msg.setDestinationEntity(222U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OIFLQTKVLBJJILUWJHOCMXULLELKGYTBSAEDEXPSPOUGUKWWJUWKZOZTBHRWJZVDZFMXPHRZYHCFIMYCIRKSVWXNERB");
    tmp_msg_0.lat = 0.3421804457132176;
    tmp_msg_0.lon = 0.4386657463032334;
    tmp_msg_0.depth = 0.17031488440970688;
    tmp_msg_0.query_channel = 64U;
    tmp_msg_0.reply_channel = 92U;
    tmp_msg_0.transponder_delay = 14U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7867632510516565;
    msg.y = 0.7716062317022503;
    msg.var_x = 0.07484191550565888;
    msg.var_y = 0.31023584226378675;
    msg.distance = 0.36772467259227026;

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
    msg.setTimeStamp(0.6354167548065143);
    msg.setSource(50571U);
    msg.setSourceEntity(229U);
    msg.setDestination(63692U);
    msg.setDestinationEntity(3U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FTANSSUXLMWDJWXBEPCIZUVSYLRHUSHFDQECPVWCMBYRAZPYHEJGXTXAUADCFUNWPUIFZDFGABFKMHOZBLKPOPLUAWKEIARCPZQQXEFMYMUINXXYVXG");
    tmp_msg_0.lat = 0.15924720323774932;
    tmp_msg_0.lon = 0.49971750127975945;
    tmp_msg_0.depth = 0.6595375921337401;
    tmp_msg_0.query_channel = 17U;
    tmp_msg_0.reply_channel = 224U;
    tmp_msg_0.transponder_delay = 84U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.29991413585161053;
    msg.y = 0.576581508979195;
    msg.var_x = 0.45890129877846;
    msg.var_y = 0.5894686169480154;
    msg.distance = 0.21466385114776665;

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
    msg.setTimeStamp(0.16548448724123932);
    msg.setSource(6715U);
    msg.setSourceEntity(88U);
    msg.setDestination(49027U);
    msg.setDestinationEntity(232U);
    msg.state = 68U;

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
    msg.setTimeStamp(0.6743532877634418);
    msg.setSource(61609U);
    msg.setSourceEntity(222U);
    msg.setDestination(29866U);
    msg.setDestinationEntity(222U);
    msg.state = 153U;

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
    msg.setTimeStamp(0.3441077525981543);
    msg.setSource(43851U);
    msg.setSourceEntity(233U);
    msg.setDestination(10056U);
    msg.setDestinationEntity(247U);
    msg.state = 77U;

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
    msg.setTimeStamp(0.0853240151279725);
    msg.setSource(42611U);
    msg.setSourceEntity(23U);
    msg.setDestination(38206U);
    msg.setDestinationEntity(120U);
    msg.x = 0.6125411583211573;
    msg.y = 0.5204056686103297;
    msg.z = 0.2590733717441289;

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
    msg.setTimeStamp(0.8531575565654064);
    msg.setSource(37023U);
    msg.setSourceEntity(53U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(214U);
    msg.x = 0.03538759254573709;
    msg.y = 0.3718966310634122;
    msg.z = 0.6966502617826803;

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
    msg.setTimeStamp(0.04945340780391494);
    msg.setSource(32512U);
    msg.setSourceEntity(67U);
    msg.setDestination(12771U);
    msg.setDestinationEntity(250U);
    msg.x = 0.1608405829344166;
    msg.y = 0.2866003092377114;
    msg.z = 0.853227971952643;

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
    msg.setTimeStamp(0.8053083560621924);
    msg.setSource(45853U);
    msg.setSourceEntity(0U);
    msg.setDestination(56788U);
    msg.setDestinationEntity(83U);
    msg.va = 0.2681228145386858;
    msg.aoa = 0.6351079489123287;
    msg.ssa = 0.6054875711299511;

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
    msg.setTimeStamp(0.7644581217743329);
    msg.setSource(31178U);
    msg.setSourceEntity(101U);
    msg.setDestination(39695U);
    msg.setDestinationEntity(119U);
    msg.va = 0.8559384953476066;
    msg.aoa = 0.5128851254701684;
    msg.ssa = 0.8391056614297296;

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
    msg.setTimeStamp(0.635401183302807);
    msg.setSource(55152U);
    msg.setSourceEntity(95U);
    msg.setDestination(36385U);
    msg.setDestinationEntity(206U);
    msg.va = 0.7167061848384916;
    msg.aoa = 0.26168174990939175;
    msg.ssa = 0.9578840651640173;

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
    msg.setTimeStamp(0.08211946806813297);
    msg.setSource(2586U);
    msg.setSourceEntity(221U);
    msg.setDestination(30320U);
    msg.setDestinationEntity(100U);
    msg.value = 0.47695645313267243;

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
    msg.setTimeStamp(0.11240416541850007);
    msg.setSource(48212U);
    msg.setSourceEntity(132U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(51U);
    msg.value = 0.5541286557753912;

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
    msg.setTimeStamp(0.9553057353036449);
    msg.setSource(10790U);
    msg.setSourceEntity(29U);
    msg.setDestination(10261U);
    msg.setDestinationEntity(117U);
    msg.value = 0.708679590029035;

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
    msg.setTimeStamp(0.9061687991570648);
    msg.setSource(11421U);
    msg.setSourceEntity(195U);
    msg.setDestination(34121U);
    msg.setDestinationEntity(40U);
    msg.value = 0.2748176208820926;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.6869165271831625);
    msg.setSource(3919U);
    msg.setSourceEntity(233U);
    msg.setDestination(9553U);
    msg.setDestinationEntity(58U);
    msg.value = 0.3053496656348923;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.6858388972379265);
    msg.setSource(55734U);
    msg.setSourceEntity(172U);
    msg.setDestination(32535U);
    msg.setDestinationEntity(115U);
    msg.value = 0.5926607204995366;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.7821714479665972);
    msg.setSource(12722U);
    msg.setSourceEntity(147U);
    msg.setDestination(54776U);
    msg.setDestinationEntity(81U);
    msg.value = 0.8043043633938994;
    msg.speed_units = 187U;

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
    msg.setTimeStamp(0.536850334464026);
    msg.setSource(44082U);
    msg.setSourceEntity(13U);
    msg.setDestination(10621U);
    msg.setDestinationEntity(38U);
    msg.value = 0.5997345421863801;
    msg.speed_units = 208U;

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
    msg.setTimeStamp(0.5518910519964234);
    msg.setSource(32345U);
    msg.setSourceEntity(104U);
    msg.setDestination(6030U);
    msg.setDestinationEntity(248U);
    msg.value = 0.23145735159121195;
    msg.speed_units = 50U;

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
    msg.setTimeStamp(0.8903702400062947);
    msg.setSource(35957U);
    msg.setSourceEntity(112U);
    msg.setDestination(3304U);
    msg.setDestinationEntity(245U);
    msg.value = 0.07463933366605002;

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
    msg.setTimeStamp(0.8674634322746477);
    msg.setSource(3827U);
    msg.setSourceEntity(51U);
    msg.setDestination(14989U);
    msg.setDestinationEntity(29U);
    msg.value = 0.686171407861151;

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
    msg.setTimeStamp(0.4710940700787849);
    msg.setSource(10842U);
    msg.setSourceEntity(181U);
    msg.setDestination(54861U);
    msg.setDestinationEntity(153U);
    msg.value = 0.06631735590102417;

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
    msg.setTimeStamp(0.24603964445691906);
    msg.setSource(23242U);
    msg.setSourceEntity(210U);
    msg.setDestination(63787U);
    msg.setDestinationEntity(66U);
    msg.value = 0.5193489695381337;

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
    msg.setTimeStamp(0.23198142902001284);
    msg.setSource(59976U);
    msg.setSourceEntity(139U);
    msg.setDestination(55991U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6135687034235515;

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
    msg.setTimeStamp(0.5442687405600455);
    msg.setSource(29348U);
    msg.setSourceEntity(134U);
    msg.setDestination(2757U);
    msg.setDestinationEntity(199U);
    msg.value = 0.006427398101247261;

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
    msg.setTimeStamp(0.019578638051145236);
    msg.setSource(12598U);
    msg.setSourceEntity(174U);
    msg.setDestination(16300U);
    msg.setDestinationEntity(230U);
    msg.value = 0.19454697271234955;

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
    msg.setTimeStamp(0.2296705097077768);
    msg.setSource(49759U);
    msg.setSourceEntity(242U);
    msg.setDestination(31468U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8677131148537852;

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
    msg.setTimeStamp(0.05441236730313015);
    msg.setSource(59953U);
    msg.setSourceEntity(214U);
    msg.setDestination(53876U);
    msg.setDestinationEntity(27U);
    msg.value = 0.236575254289499;

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
    msg.setTimeStamp(0.17843643329532977);
    msg.setSource(5626U);
    msg.setSourceEntity(34U);
    msg.setDestination(1583U);
    msg.setDestinationEntity(162U);
    msg.path_ref = 942833344U;
    msg.start_lat = 0.1949925039307343;
    msg.start_lon = 0.17905429952214036;
    msg.start_z = 0.7639366440243955;
    msg.start_z_units = 51U;
    msg.end_lat = 0.16700110587146777;
    msg.end_lon = 0.9324588186953912;
    msg.end_z = 0.6401992970861436;
    msg.end_z_units = 49U;
    msg.speed = 0.35302679852308216;
    msg.speed_units = 95U;
    msg.lradius = 0.11967391714810849;
    msg.flags = 38U;

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
    msg.setTimeStamp(0.16078267759145726);
    msg.setSource(7863U);
    msg.setSourceEntity(46U);
    msg.setDestination(64263U);
    msg.setDestinationEntity(172U);
    msg.path_ref = 1743258307U;
    msg.start_lat = 0.9833312988160801;
    msg.start_lon = 0.9800294520821021;
    msg.start_z = 0.24178673102557413;
    msg.start_z_units = 189U;
    msg.end_lat = 0.00799040493003611;
    msg.end_lon = 0.7865791002977757;
    msg.end_z = 0.5021836941253687;
    msg.end_z_units = 146U;
    msg.speed = 0.17130551895167923;
    msg.speed_units = 228U;
    msg.lradius = 0.8120085923029614;
    msg.flags = 96U;

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
    msg.setTimeStamp(0.7104459058112005);
    msg.setSource(6859U);
    msg.setSourceEntity(132U);
    msg.setDestination(19355U);
    msg.setDestinationEntity(132U);
    msg.path_ref = 3740905938U;
    msg.start_lat = 0.6330120241991896;
    msg.start_lon = 0.9958755228390052;
    msg.start_z = 0.23474883212394493;
    msg.start_z_units = 72U;
    msg.end_lat = 0.32639522044006886;
    msg.end_lon = 0.8226525245891867;
    msg.end_z = 0.759554338152942;
    msg.end_z_units = 174U;
    msg.speed = 0.995885572605779;
    msg.speed_units = 26U;
    msg.lradius = 0.14095340730134798;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.22766883311082275);
    msg.setSource(33101U);
    msg.setSourceEntity(57U);
    msg.setDestination(34819U);
    msg.setDestinationEntity(176U);
    msg.x = 0.06589274787592359;
    msg.y = 0.2226824073603223;
    msg.z = 0.42140501691701693;
    msg.k = 0.9612405309126044;
    msg.m = 0.7216466595877473;
    msg.n = 0.696371405734621;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.443495697779948);
    msg.setSource(35823U);
    msg.setSourceEntity(80U);
    msg.setDestination(46043U);
    msg.setDestinationEntity(161U);
    msg.x = 0.023432671873833355;
    msg.y = 0.5833131724974239;
    msg.z = 0.8309355848311891;
    msg.k = 0.628523871679291;
    msg.m = 0.9692887864200412;
    msg.n = 0.6105574762222388;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.34144544588767556);
    msg.setSource(45575U);
    msg.setSourceEntity(119U);
    msg.setDestination(63695U);
    msg.setDestinationEntity(136U);
    msg.x = 0.8586839310435653;
    msg.y = 0.5654829919029047;
    msg.z = 0.45131885161677854;
    msg.k = 0.8349272989095121;
    msg.m = 0.38550716024213694;
    msg.n = 0.9683673834361808;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.38496026664091276);
    msg.setSource(5736U);
    msg.setSourceEntity(254U);
    msg.setDestination(37850U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9728835761534144;

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
    msg.setTimeStamp(0.7690756742485713);
    msg.setSource(12462U);
    msg.setSourceEntity(178U);
    msg.setDestination(57651U);
    msg.setDestinationEntity(188U);
    msg.value = 0.3641363317683445;

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
    msg.setTimeStamp(0.3809234949452813);
    msg.setSource(18420U);
    msg.setSourceEntity(249U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(45U);
    msg.value = 0.4768815308006682;

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
    msg.setTimeStamp(0.7081110919711144);
    msg.setSource(57755U);
    msg.setSourceEntity(196U);
    msg.setDestination(16542U);
    msg.setDestinationEntity(67U);
    msg.u = 0.04157145558287911;
    msg.v = 0.43586452979519863;
    msg.w = 0.3220340702974236;
    msg.p = 0.05928218061123558;
    msg.q = 0.6404441778868173;
    msg.r = 0.25169395667318717;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.657555669609942);
    msg.setSource(10319U);
    msg.setSourceEntity(93U);
    msg.setDestination(61388U);
    msg.setDestinationEntity(183U);
    msg.u = 0.8249213317803721;
    msg.v = 0.3755024402177818;
    msg.w = 0.11417894465312417;
    msg.p = 0.39177408147055925;
    msg.q = 0.6224269243163075;
    msg.r = 0.4564912764148179;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.8186359149112725);
    msg.setSource(29749U);
    msg.setSourceEntity(245U);
    msg.setDestination(11475U);
    msg.setDestinationEntity(183U);
    msg.u = 0.8436048332454389;
    msg.v = 0.6855872122166982;
    msg.w = 0.7618399238371231;
    msg.p = 0.8958095213785005;
    msg.q = 0.09757358719942211;
    msg.r = 0.6034222820964075;
    msg.flags = 8U;

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
    msg.setTimeStamp(0.8193874319368589);
    msg.setSource(14891U);
    msg.setSourceEntity(0U);
    msg.setDestination(29096U);
    msg.setDestinationEntity(243U);
    msg.path_ref = 1835046734U;
    msg.start_lat = 0.5416188681243226;
    msg.start_lon = 0.038784349822228115;
    msg.start_z = 0.7844726735404377;
    msg.start_z_units = 36U;
    msg.end_lat = 0.5640597232988636;
    msg.end_lon = 0.37647139032297616;
    msg.end_z = 0.7875479196719507;
    msg.end_z_units = 101U;
    msg.lradius = 0.6372095619686907;
    msg.flags = 191U;
    msg.x = 0.4328471108997788;
    msg.y = 0.9694156730150792;
    msg.z = 0.3467893344998402;
    msg.vx = 0.16141881739112707;
    msg.vy = 0.42546813239381476;
    msg.vz = 0.1936863878801406;
    msg.course_error = 0.3917697962758889;
    msg.eta = 1912U;

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
    msg.setTimeStamp(0.5169890540457842);
    msg.setSource(40358U);
    msg.setSourceEntity(79U);
    msg.setDestination(82U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 3323229508U;
    msg.start_lat = 0.9367973237864845;
    msg.start_lon = 0.04169132468607328;
    msg.start_z = 0.6270244122702652;
    msg.start_z_units = 214U;
    msg.end_lat = 0.6291875815871285;
    msg.end_lon = 0.9804547954002005;
    msg.end_z = 0.12578076249677161;
    msg.end_z_units = 47U;
    msg.lradius = 0.3096806083750706;
    msg.flags = 203U;
    msg.x = 0.37905972259000764;
    msg.y = 0.9654783254946142;
    msg.z = 0.8184856680114593;
    msg.vx = 0.9724250853183404;
    msg.vy = 0.9964109349790504;
    msg.vz = 0.16641150713855468;
    msg.course_error = 0.9017481679468399;
    msg.eta = 13010U;

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
    msg.setTimeStamp(0.061730044504657244);
    msg.setSource(2758U);
    msg.setSourceEntity(205U);
    msg.setDestination(23359U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 231486476U;
    msg.start_lat = 0.9115306700660827;
    msg.start_lon = 0.9259116216816452;
    msg.start_z = 0.4084238918793982;
    msg.start_z_units = 212U;
    msg.end_lat = 0.44659682630332564;
    msg.end_lon = 0.4331395041380107;
    msg.end_z = 0.23619675740805945;
    msg.end_z_units = 60U;
    msg.lradius = 0.1128447443965972;
    msg.flags = 102U;
    msg.x = 0.7129031045485089;
    msg.y = 0.452888296529968;
    msg.z = 0.6123452073346994;
    msg.vx = 0.515050936512316;
    msg.vy = 0.509871057150054;
    msg.vz = 0.06875499734508339;
    msg.course_error = 0.7274432267856902;
    msg.eta = 55888U;

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
    msg.setTimeStamp(0.6282445390489545);
    msg.setSource(48787U);
    msg.setSourceEntity(69U);
    msg.setDestination(45395U);
    msg.setDestinationEntity(74U);
    msg.k = 0.3076589784324828;
    msg.m = 0.3260413899794212;
    msg.n = 0.2040031211373936;

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
    msg.setTimeStamp(0.6522850200327709);
    msg.setSource(20414U);
    msg.setSourceEntity(55U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(33U);
    msg.k = 0.15106040795414322;
    msg.m = 0.9747675059327818;
    msg.n = 0.3882231932905035;

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
    msg.setTimeStamp(0.9206949149960049);
    msg.setSource(62773U);
    msg.setSourceEntity(104U);
    msg.setDestination(64487U);
    msg.setDestinationEntity(219U);
    msg.k = 0.7432918185056046;
    msg.m = 0.9917652461220704;
    msg.n = 0.5621787188251207;

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
    msg.setTimeStamp(0.5271548891294078);
    msg.setSource(2091U);
    msg.setSourceEntity(198U);
    msg.setDestination(38365U);
    msg.setDestinationEntity(144U);
    msg.p = 0.7122123472606303;
    msg.i = 0.3347912161624049;
    msg.d = 0.9055586830076408;
    msg.a = 0.733428715968355;

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
    msg.setTimeStamp(0.5794961343710915);
    msg.setSource(19875U);
    msg.setSourceEntity(234U);
    msg.setDestination(36450U);
    msg.setDestinationEntity(189U);
    msg.p = 0.8086433164790743;
    msg.i = 0.5233409263126306;
    msg.d = 0.7370333966291769;
    msg.a = 0.6825516935953834;

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
    msg.setTimeStamp(0.9594473325347668);
    msg.setSource(44028U);
    msg.setSourceEntity(64U);
    msg.setDestination(5848U);
    msg.setDestinationEntity(185U);
    msg.p = 0.9665733507294377;
    msg.i = 0.07517143711022178;
    msg.d = 0.4882234770873417;
    msg.a = 0.8852828862155079;

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
    msg.setTimeStamp(0.7645544324033716);
    msg.setSource(21120U);
    msg.setSourceEntity(119U);
    msg.setDestination(19412U);
    msg.setDestinationEntity(177U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.9951472563893909);
    msg.setSource(59213U);
    msg.setSourceEntity(97U);
    msg.setDestination(43179U);
    msg.setDestinationEntity(196U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.9354156002759476);
    msg.setSource(24218U);
    msg.setSourceEntity(109U);
    msg.setDestination(45562U);
    msg.setDestinationEntity(229U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.3306352580434496);
    msg.setSource(43426U);
    msg.setSourceEntity(104U);
    msg.setDestination(65132U);
    msg.setDestinationEntity(217U);
    msg.x = 0.3387262115472113;
    msg.y = 0.799674183136172;
    msg.z = 0.7571907757312667;
    msg.vx = 0.08865324456456736;
    msg.vy = 0.5483962549842685;
    msg.vz = 0.662759186376676;
    msg.ax = 0.6558924611252362;
    msg.ay = 0.8526622470333142;
    msg.az = 0.7536262927613916;
    msg.flags = 61838U;

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
    msg.setTimeStamp(0.8086761345722117);
    msg.setSource(3724U);
    msg.setSourceEntity(34U);
    msg.setDestination(26243U);
    msg.setDestinationEntity(43U);
    msg.x = 0.20020687329027187;
    msg.y = 0.760262147875463;
    msg.z = 0.8007225129770055;
    msg.vx = 0.8114334390899208;
    msg.vy = 0.5722412699657194;
    msg.vz = 0.33592168782124865;
    msg.ax = 0.08965757439507283;
    msg.ay = 0.6587132449660419;
    msg.az = 0.8371937003174205;
    msg.flags = 57971U;

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
    msg.setTimeStamp(0.8010068495868492);
    msg.setSource(18238U);
    msg.setSourceEntity(31U);
    msg.setDestination(43354U);
    msg.setDestinationEntity(191U);
    msg.x = 0.2889619668957305;
    msg.y = 0.720250795812528;
    msg.z = 0.3867138040287712;
    msg.vx = 0.7797013352697603;
    msg.vy = 0.9307979238480018;
    msg.vz = 0.9769897753016381;
    msg.ax = 0.8245356294821956;
    msg.ay = 0.04819367387292672;
    msg.az = 0.7418184606868075;
    msg.flags = 23478U;

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
    msg.setTimeStamp(0.435399728946848);
    msg.setSource(37076U);
    msg.setSourceEntity(214U);
    msg.setDestination(17996U);
    msg.setDestinationEntity(153U);
    msg.value = 0.40907622568284896;

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
    msg.setTimeStamp(0.5063183380552585);
    msg.setSource(18042U);
    msg.setSourceEntity(88U);
    msg.setDestination(64213U);
    msg.setDestinationEntity(145U);
    msg.value = 0.31846882785035047;

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
    msg.setTimeStamp(0.4819444786215742);
    msg.setSource(64002U);
    msg.setSourceEntity(67U);
    msg.setDestination(3039U);
    msg.setDestinationEntity(181U);
    msg.value = 0.4702459516694846;

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
    msg.setTimeStamp(0.6161486440950253);
    msg.setSource(56956U);
    msg.setSourceEntity(247U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(95U);
    msg.timeout = 971U;
    msg.lat = 0.9373179649498817;
    msg.lon = 0.0024326836977827115;
    msg.z = 0.17707830209543574;
    msg.z_units = 140U;
    msg.speed = 0.9512904611947401;
    msg.speed_units = 87U;
    msg.roll = 0.8289960640815447;
    msg.pitch = 0.6992006900375227;
    msg.yaw = 0.37047332666639454;
    msg.custom.assign("NJSHNPDTYGJFTDMCHMXNUILIODOKVYTUHKCAVFFMNRBRDASEPWESKROOXTMWTIWVMFVFEAPJMIUOFZCTBPLRVHNGOPBOFGLXWYIRKCZIANVJOEUPQWJQFYDPYYGXDEEWBZRAWXYTRRJGEMMZGTZHEUYLJUZJQKFUHIVFACSVBCLBWQSCXXIKWPSRXNANXBHZCUQHDIDNRQOTBKAYLLCHKBLJKSMKUHGDUBWJPQ");

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
    msg.setTimeStamp(0.5605620581541207);
    msg.setSource(35224U);
    msg.setSourceEntity(24U);
    msg.setDestination(11973U);
    msg.setDestinationEntity(158U);
    msg.timeout = 48780U;
    msg.lat = 0.05430950817304758;
    msg.lon = 0.26517871707393637;
    msg.z = 0.2975364429275352;
    msg.z_units = 18U;
    msg.speed = 0.009472177545519767;
    msg.speed_units = 176U;
    msg.roll = 0.34897489118149283;
    msg.pitch = 0.420571700959562;
    msg.yaw = 0.6278590434102552;
    msg.custom.assign("UWOSVFHJMLDPGJXNMACXKZXQZTCAETBCLMKBMLIBNFQEBADKVXDUZBKMVROEUNWWJS");

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
    msg.setTimeStamp(0.21965572631823393);
    msg.setSource(44765U);
    msg.setSourceEntity(63U);
    msg.setDestination(42118U);
    msg.setDestinationEntity(239U);
    msg.timeout = 53504U;
    msg.lat = 0.4233602193360503;
    msg.lon = 0.09802927628288238;
    msg.z = 0.6816448729873391;
    msg.z_units = 189U;
    msg.speed = 0.4141182619565499;
    msg.speed_units = 151U;
    msg.roll = 0.9150416843285359;
    msg.pitch = 0.8001520773110599;
    msg.yaw = 0.7558204991217491;
    msg.custom.assign("ERTOPKKYLEPKPRJJSEPMNNWZJONKWNVIKXCTDHLJMADEUFQTTJMSVLZVGEFSZPHYSTQMZCQBKILHSDFXIJLBUGZXWQYAAJGGHFBVBTKWLNUGRHOOTOCYJQAWUBBUIMSOQCNABCRRAGLFMWRVDKOOYXCOLDWNGSDZBDMMGURZAIYNCENPAPWXGSZTKV");

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
    msg.setTimeStamp(0.5268181354071036);
    msg.setSource(41314U);
    msg.setSourceEntity(103U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(215U);
    msg.timeout = 5524U;
    msg.lat = 0.03066612148108716;
    msg.lon = 0.6700011697137918;
    msg.z = 0.8953548926079953;
    msg.z_units = 123U;
    msg.speed = 0.3056335732586086;
    msg.speed_units = 88U;
    msg.duration = 60148U;
    msg.radius = 0.1928327322603649;
    msg.flags = 0U;
    msg.custom.assign("UCROZTZOGYSOEBQZSUOCEICKPIMCFMHMRBPLBJTPXVSDWQJUGXAGLVPSLWCXSFLVNJYGBMWXHPERZNACVWTYGDNYKQOLSAQOJCASFWHTZUJOTXLTPSU");

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
    msg.setTimeStamp(0.012214069406028871);
    msg.setSource(20048U);
    msg.setSourceEntity(246U);
    msg.setDestination(19211U);
    msg.setDestinationEntity(2U);
    msg.timeout = 47368U;
    msg.lat = 0.2154892139336929;
    msg.lon = 0.7422836824969422;
    msg.z = 0.9321906577076728;
    msg.z_units = 137U;
    msg.speed = 0.32901216703338854;
    msg.speed_units = 3U;
    msg.duration = 36732U;
    msg.radius = 0.8270622768403381;
    msg.flags = 140U;
    msg.custom.assign("SIZRBOILHKBNZMZCLRKFAXMHJAJOUGHQODTHTEPGQWCTLJHOWXZCLVPKDSIWWARXLZELGJVZXNRVQQCOCVNRYAHZVJHAMNUKRSCGYPQQEPZDYVKRFSWCEUWKALDJAJYPNVYEALOTCUUOGBQSTJKFRVXELQFBJEPHIMFWGNVBUGUQXXASNVXGNSUDKEMFPZWOAJYPMXUMXBFSDTPFTIDIURBIPKTTDDQBEWOM");

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
    msg.setTimeStamp(0.7468578422966742);
    msg.setSource(31488U);
    msg.setSourceEntity(104U);
    msg.setDestination(8131U);
    msg.setDestinationEntity(185U);
    msg.timeout = 59476U;
    msg.lat = 0.5142608190981897;
    msg.lon = 0.4384717060558131;
    msg.z = 0.20619098828842108;
    msg.z_units = 49U;
    msg.speed = 0.143354112905004;
    msg.speed_units = 73U;
    msg.duration = 3597U;
    msg.radius = 0.32695846294124364;
    msg.flags = 80U;
    msg.custom.assign("UOIFYGIRPEHDXLHFBJC");

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
    msg.setTimeStamp(0.6574998381527319);
    msg.setSource(35004U);
    msg.setSourceEntity(181U);
    msg.setDestination(63143U);
    msg.setDestinationEntity(88U);
    msg.custom.assign("VGKQEUEXRQZESKYDFPKQTFCWVLGAOAHQBPUOKAXVXGIZOXVHHPCVPBABXIGZYRVYENLOJMDFCYIQDHLJIMALUULMGHNHVVQPSKFLZDSMVJAJCYINPCOGEGPBGWTSKBUTASMKLEBDAZWKNRCNJFOFXHJHUXBYQSWYDYTRUSZRSTFIHJNQYZLQEXMWIGWNNTNZRCAOZ");

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
    msg.setTimeStamp(0.765819373139163);
    msg.setSource(16785U);
    msg.setSourceEntity(224U);
    msg.setDestination(21686U);
    msg.setDestinationEntity(30U);
    msg.custom.assign("JNZJCBHOQFWTSAQGRCPJLBPPGNEUNGKVWOSCSXJMLOIAJLBLCQVIEZVSBAGBJFUEDZXYCZHWAQVRCHHRHGZUYGWXMVJSEFJCAULHPRODJXDMINMVSPMZEINOEWRYSKIVDEFXTQLEVOFNTITIRMSKZK");

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
    msg.setTimeStamp(0.5040845793506679);
    msg.setSource(50618U);
    msg.setSourceEntity(237U);
    msg.setDestination(63099U);
    msg.setDestinationEntity(97U);
    msg.custom.assign("FLYDSHRKXIJMXHBPYMHQNDAWDTLGCSKPPLFFKTBLXSCVPBNJUDXORPIJAZGLUVALDHYZUCOLPVNXIFPOUASSAMERHCJXURAUJWMZQFKXFICKSBJPRDNUILFHN");

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
    msg.setTimeStamp(0.5494855949041719);
    msg.setSource(32931U);
    msg.setSourceEntity(28U);
    msg.setDestination(59164U);
    msg.setDestinationEntity(250U);
    msg.timeout = 25052U;
    msg.lat = 0.8558240616125719;
    msg.lon = 0.5344882092781759;
    msg.z = 0.5172125093679617;
    msg.z_units = 13U;
    msg.duration = 51929U;
    msg.speed = 0.8345298743963313;
    msg.speed_units = 245U;
    msg.type = 223U;
    msg.radius = 0.5518577180301496;
    msg.length = 0.12439486000859001;
    msg.bearing = 0.18300372951879817;
    msg.direction = 15U;
    msg.custom.assign("AWAJIVKLOWIDFMYBKYFBZHLWIKQOLIDNRPEETAHEEOYFOCAGODAXCDEWSTNMHXEXVPRVSDZRRYSNLFDQRX");

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
    msg.setTimeStamp(0.2419631430649707);
    msg.setSource(35830U);
    msg.setSourceEntity(0U);
    msg.setDestination(5461U);
    msg.setDestinationEntity(221U);
    msg.timeout = 47797U;
    msg.lat = 0.6369949355499466;
    msg.lon = 0.534496940375481;
    msg.z = 0.6824408368571766;
    msg.z_units = 151U;
    msg.duration = 19726U;
    msg.speed = 0.22897244352445223;
    msg.speed_units = 124U;
    msg.type = 234U;
    msg.radius = 0.2457552364553114;
    msg.length = 0.07365113471204487;
    msg.bearing = 0.09743360895468811;
    msg.direction = 83U;
    msg.custom.assign("QDNNRPHCYPSQTZIRLREJAASURIXAVAGPTMLCMKXMDLIXTFTZLMJKZMOOGAKEEJIYWWBLRELVFRYBNYBDMTIWJQTKHTXDIFHTBPKYQEFJBHRPBGXWJZARGZLZKGOSYSWZW");

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
    msg.setTimeStamp(0.7776267070633063);
    msg.setSource(37646U);
    msg.setSourceEntity(114U);
    msg.setDestination(61815U);
    msg.setDestinationEntity(175U);
    msg.timeout = 58235U;
    msg.lat = 0.6809552760622587;
    msg.lon = 0.6815564756584513;
    msg.z = 0.2696612858387035;
    msg.z_units = 233U;
    msg.duration = 1712U;
    msg.speed = 0.7879714916877667;
    msg.speed_units = 120U;
    msg.type = 226U;
    msg.radius = 0.5660225040163985;
    msg.length = 0.4011051253720608;
    msg.bearing = 0.07270857093098038;
    msg.direction = 21U;
    msg.custom.assign("BEEDMORLITLBWBKQLHWZYHAVMJDHVLAILCEGQJTUWQPEJBCJYACFRZDHDINUWFRFLGHWYHVECVNGNTXMGTDPIFUFXJIVGKNKOKVBXMKHLRUOGUO");

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
    msg.setTimeStamp(0.4017742833952177);
    msg.setSource(26657U);
    msg.setSourceEntity(185U);
    msg.setDestination(62287U);
    msg.setDestinationEntity(56U);
    msg.duration = 20902U;
    msg.custom.assign("BJNQWSGLXEDOQGKCUKWDFITZLMGACOTPHFOSUQPWMHHRPILYERILEWLZYVMZUVDFWLAJYESWQZCDKDMXFFKYUMGSYEUQQVWXNKLSRVOESSOEIBDOIBXGZHPTA");

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
    msg.setTimeStamp(0.7481055477754371);
    msg.setSource(2116U);
    msg.setSourceEntity(165U);
    msg.setDestination(47778U);
    msg.setDestinationEntity(102U);
    msg.duration = 32035U;
    msg.custom.assign("RFKBYMBVLXBDPKGBHARZOAUIJKPTJOMMPNHVYIXJHWIPSNDKVJMQYCAXHICJVRNHHFYICCVYAZSAIMWJFRFLGFNAKSMOVRENGPUDJOEGXABGRWSMT");

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
    msg.setTimeStamp(0.27499468938337823);
    msg.setSource(53678U);
    msg.setSourceEntity(96U);
    msg.setDestination(58380U);
    msg.setDestinationEntity(149U);
    msg.duration = 14584U;
    msg.custom.assign("SDEENKKZAXTTICEOFOJGYCSPLVWLQNGUSWBGCMVPAFXRWXPKGCXZGKZIBEEAPSAORDIYCYGTNTROQVYGUEHDXKBDMOFQEBZYZNEBYKIUEQSUICCDIFLAILRYMJGVHVLADMXJWWFOXWEIFAJLHUQUTZOVLFHJASSRXPLSAUQZKPGHVPUWHNWTCBZDXOXRANYKBRJLRZWUYMTTJHNQHNJZDCPBHTWB");

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
    msg.setTimeStamp(0.43078191286438916);
    msg.setSource(33449U);
    msg.setSourceEntity(223U);
    msg.setDestination(61046U);
    msg.setDestinationEntity(197U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.6430636822781366;
    msg.control.set(tmp_msg_0);
    msg.duration = 52777U;
    msg.custom.assign("NQBTPSJPWIRHYMGAKIHUQCWOUDOOVNCKETLEMUKMZVODGSEXPMWENWAMLZYDMQAJWZTBGDJTCPXKNNHTQLVGYQUIFXHDFSRHYMVVNCMYFIIKKAZYEZEVASCTIHBXOUEETRBEXYFPOFGGBFQXJLJKQRRHNAYZ");

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
    msg.setTimeStamp(0.27250354416717304);
    msg.setSource(22486U);
    msg.setSourceEntity(97U);
    msg.setDestination(45325U);
    msg.setDestinationEntity(83U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.14548685601014388;
    msg.control.set(tmp_msg_0);
    msg.duration = 11556U;
    msg.custom.assign("QGTLKFWBJGBNAXSRKSWTPGYLTFJFHTKQLGZCEDAPRZVYHVQORRERKVGPUOYHZURX");

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
    msg.setTimeStamp(0.9914711004813496);
    msg.setSource(28019U);
    msg.setSourceEntity(163U);
    msg.setDestination(32007U);
    msg.setDestinationEntity(170U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4048823574U;
    tmp_msg_0.start_lat = 0.5183118304520864;
    tmp_msg_0.start_lon = 0.4784746502844539;
    tmp_msg_0.start_z = 0.6483794515246233;
    tmp_msg_0.start_z_units = 138U;
    tmp_msg_0.end_lat = 0.8243417902079122;
    tmp_msg_0.end_lon = 0.822697238013711;
    tmp_msg_0.end_z = 0.3131244627346359;
    tmp_msg_0.end_z_units = 95U;
    tmp_msg_0.speed = 0.15376558554446584;
    tmp_msg_0.speed_units = 54U;
    tmp_msg_0.lradius = 0.07377206971034489;
    tmp_msg_0.flags = 218U;
    msg.control.set(tmp_msg_0);
    msg.duration = 27486U;
    msg.custom.assign("LWUGYPIETSOXYERTWPFPLNUHZVINOQZYFEWKRWTUVXJZVPURFBNRADIEGOKJIABZMHLMCXUGQCSREAAWEOHYXQYNRNEVSTZVYPCHBFGLSFZBDQKADQKBTLZFXHENRSUQJVJDGDCLKIEKUQSCAMWURUYIZVWFJIKJCBOQGAROIKBHYLTZDITPXPBGHHJDYOMSXMJPBIVMGTQDCSDAM");

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
    msg.setTimeStamp(0.06782034155228844);
    msg.setSource(47642U);
    msg.setSourceEntity(32U);
    msg.setDestination(36854U);
    msg.setDestinationEntity(171U);
    msg.timeout = 956U;
    msg.lat = 0.3391440498758873;
    msg.lon = 0.8145817480056362;
    msg.z = 0.23462278649639345;
    msg.z_units = 13U;
    msg.speed = 0.23279076315389613;
    msg.speed_units = 238U;
    msg.bearing = 0.49736918109664674;
    msg.cross_angle = 0.5971397925890051;
    msg.width = 0.6625944090544823;
    msg.length = 0.39931453346360024;
    msg.hstep = 0.7111176718462288;
    msg.coff = 152U;
    msg.alternation = 233U;
    msg.flags = 115U;
    msg.custom.assign("CTHXMFYLOZISHUYFIMCATNHYIYJMTNPKGBIMXDFKLFAVRYGZZSONHLCYPJTZYLWRXNSNZ");

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
    msg.setTimeStamp(0.6949009150651528);
    msg.setSource(40904U);
    msg.setSourceEntity(141U);
    msg.setDestination(46284U);
    msg.setDestinationEntity(185U);
    msg.timeout = 54271U;
    msg.lat = 0.7182391709761133;
    msg.lon = 0.941775437116054;
    msg.z = 0.999238750613538;
    msg.z_units = 25U;
    msg.speed = 0.27585853025462104;
    msg.speed_units = 145U;
    msg.bearing = 0.03151888585125551;
    msg.cross_angle = 0.5044746344404689;
    msg.width = 0.32261276295935915;
    msg.length = 0.9173586211914482;
    msg.hstep = 0.29320990791885304;
    msg.coff = 25U;
    msg.alternation = 215U;
    msg.flags = 238U;
    msg.custom.assign("GXVKCZXFFMMUJLHHIMALJAOBJSGCLKGCCTIUNSGCHMXWHVZUUPVQOSIPKSQIEVCODNYWAOGXLOFSMIQZEYFFQGYTDESRNDTRFHAKNBRLPDKTLSJJEZPBCSAIXCRPMJOQMNDPEKDKHYJTATRZKPZDVJYMRXZOBEXARLSYEMGQWHVHSIETYVDLIUZDROYJLIOMUBYVWGXEZTHWQLQWERKUJKWYCXWWRBAFFQHVGAIBZFBCAGUVUPPTNQP");

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
    msg.setTimeStamp(0.03934882875351464);
    msg.setSource(58935U);
    msg.setSourceEntity(5U);
    msg.setDestination(20243U);
    msg.setDestinationEntity(162U);
    msg.timeout = 41530U;
    msg.lat = 0.11124449216721577;
    msg.lon = 0.9049983347414936;
    msg.z = 0.2226717412991127;
    msg.z_units = 41U;
    msg.speed = 0.6886308231738799;
    msg.speed_units = 164U;
    msg.bearing = 0.682356447248578;
    msg.cross_angle = 0.5863700997681176;
    msg.width = 0.27801482292967117;
    msg.length = 0.01007073515947754;
    msg.hstep = 0.8967291467066659;
    msg.coff = 247U;
    msg.alternation = 64U;
    msg.flags = 198U;
    msg.custom.assign("VTVGLAWSLYTJQBBXBNQDGGKYKXHURPFDHJIVFMGPBIYZONWLYZPKSRFUGVALHYCGEWEAJVBYPZUKXNKNSGIPFAHTDNUXKHZSJHCVDPDXUEIFIVIMCNPSODRYXZCOCGJLMSSBKQUQCOKZNQPRUVEIRJLDWBXVTNLQHHUWSLRKJAEFQGNRZAIBT");

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
    msg.setTimeStamp(0.5109252955922216);
    msg.setSource(61819U);
    msg.setSourceEntity(162U);
    msg.setDestination(48975U);
    msg.setDestinationEntity(49U);
    msg.timeout = 35741U;
    msg.lat = 0.9878252926320891;
    msg.lon = 0.7045002901702863;
    msg.z = 0.7728337239691261;
    msg.z_units = 208U;
    msg.speed = 0.8957734879220914;
    msg.speed_units = 165U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6766248628947832;
    tmp_msg_0.y = 0.6860016371130219;
    tmp_msg_0.z = 0.22691620366866716;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YPZUBYMRCAVKXHQZVJUQFFTRLETSVVAZUWAPLWONSWXXKSRDKQPIVECBXDQIYUWWLOOYRYLINDWGWTJOXHCFEDFIKDZMLSCTKHZKHATCBJRMNFHJPTZEPVBZPJMEXOJSFSWHNNHIVGESQMLXUZGAJPGUHWFVSNCRLQDVFTDNIUOZLGJGILSQUMYLZKNTRAANXMDVGGHCCYDQMGBFOXKKBJWE");

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
    msg.setTimeStamp(0.8443668498288794);
    msg.setSource(14301U);
    msg.setSourceEntity(193U);
    msg.setDestination(22376U);
    msg.setDestinationEntity(117U);
    msg.timeout = 62736U;
    msg.lat = 0.07363110192786804;
    msg.lon = 0.5217678525318298;
    msg.z = 0.2098713061441878;
    msg.z_units = 185U;
    msg.speed = 0.050823158037705984;
    msg.speed_units = 123U;
    msg.custom.assign("GCOPVUPSOALPCHEOJJPUHDNPYYORMZHZCMDBNNTXFHLVMHLUEVEPIJZSRJTHPAWXTUXDWZQETXBBYOFMDSOVGYZQQLPQYBNKDCDBJKCUFMWPIXOSIWFCXUABJGS");

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
    msg.setTimeStamp(0.29967317947055117);
    msg.setSource(61476U);
    msg.setSourceEntity(168U);
    msg.setDestination(49282U);
    msg.setDestinationEntity(77U);
    msg.timeout = 11271U;
    msg.lat = 0.32468823410916337;
    msg.lon = 0.41773361313206203;
    msg.z = 0.6960779217957627;
    msg.z_units = 238U;
    msg.speed = 0.45658244593999586;
    msg.speed_units = 176U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6569239781329946;
    tmp_msg_0.y = 0.20114239303635573;
    tmp_msg_0.z = 0.6687317409513222;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VPBSDIZWEJKGOYTDSGHCWHOL");

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
    msg.setTimeStamp(0.633336945724889);
    msg.setSource(42405U);
    msg.setSourceEntity(159U);
    msg.setDestination(35562U);
    msg.setDestinationEntity(161U);
    msg.x = 0.9253816976050669;
    msg.y = 0.3878151357810351;
    msg.z = 0.966386963839194;

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
    msg.setTimeStamp(0.41629494647483833);
    msg.setSource(37057U);
    msg.setSourceEntity(223U);
    msg.setDestination(12749U);
    msg.setDestinationEntity(10U);
    msg.x = 0.3520648683508064;
    msg.y = 0.15471903620781036;
    msg.z = 0.2912259100774073;

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
    msg.setTimeStamp(0.3519251077145318);
    msg.setSource(13012U);
    msg.setSourceEntity(206U);
    msg.setDestination(36647U);
    msg.setDestinationEntity(61U);
    msg.x = 0.9519207211497637;
    msg.y = 0.11502031426799719;
    msg.z = 0.8145684522104295;

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
    msg.setTimeStamp(0.34283935774967944);
    msg.setSource(47300U);
    msg.setSourceEntity(155U);
    msg.setDestination(16818U);
    msg.setDestinationEntity(122U);
    msg.timeout = 34158U;
    msg.lat = 0.4425708437815875;
    msg.lon = 0.6146240101278361;
    msg.z = 0.6203154956901419;
    msg.z_units = 251U;
    msg.amplitude = 0.8142432075011229;
    msg.pitch = 0.06839262605962204;
    msg.speed = 0.9458919534899146;
    msg.speed_units = 223U;
    msg.custom.assign("DZUBGWRPZAOVMNHXYIVUGBVDGKHFWSXVUOOLTWUYLTJROAGLSOLEQADCKFNLQSLMFTQBNJGRZIADZDNKAINBUA");

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
    msg.setTimeStamp(0.31936275466032116);
    msg.setSource(22545U);
    msg.setSourceEntity(84U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(108U);
    msg.timeout = 28219U;
    msg.lat = 0.11749755727571431;
    msg.lon = 0.8160165052196352;
    msg.z = 0.5738117790161601;
    msg.z_units = 100U;
    msg.amplitude = 0.6430278853146505;
    msg.pitch = 0.486511062709034;
    msg.speed = 0.9471738417152815;
    msg.speed_units = 172U;
    msg.custom.assign("UKTJPWZGCCAPAHNHAVTGVCZLOSNQMGBBWVXJPBXFAWXEKBFUDIZCLMTNURUBJBEORZSVDBEPOYSCUGNXFDHATXLJSGVQFWTHETZQNFZFGJCUIYMURQIVHSPAAWGKYTKYQGPBOQKIJOMGJWL");

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
    msg.setTimeStamp(0.35939083362432145);
    msg.setSource(55072U);
    msg.setSourceEntity(14U);
    msg.setDestination(59949U);
    msg.setDestinationEntity(157U);
    msg.timeout = 7310U;
    msg.lat = 0.5238742327194057;
    msg.lon = 0.25844531113962277;
    msg.z = 0.43732323212749624;
    msg.z_units = 227U;
    msg.amplitude = 0.9902641673358555;
    msg.pitch = 0.5903178872712703;
    msg.speed = 0.7020216676934156;
    msg.speed_units = 181U;
    msg.custom.assign("UVTYKHHFAUKUCSWLOAIECCRLOKKAPHWHJQXDYVFTBNZXXBADYMNKGMTZBWWLYOHEZKYRXUCYSXEGGGKMJLQJGTNSMRVQXOTKWZPIPEAIWZNOHMQBRFAPMENBGBEJEZQMKEQPHDOMVADJYDXWQUVQFDBYFJICQRRCVVBXPWNLCULGFGNRCYSAOUEJRROTTICIAK");

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
    msg.setTimeStamp(0.5364385503572989);
    msg.setSource(9443U);
    msg.setSourceEntity(60U);
    msg.setDestination(29140U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.38302537764126976);
    msg.setSource(42627U);
    msg.setSourceEntity(130U);
    msg.setDestination(9744U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.9034386212944232);
    msg.setSource(27282U);
    msg.setSourceEntity(91U);
    msg.setDestination(42911U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.8656068339082604);
    msg.setSource(43886U);
    msg.setSourceEntity(237U);
    msg.setDestination(20631U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.11359391084783332;
    msg.lon = 0.31454580721723013;
    msg.z = 0.6516465736562392;
    msg.z_units = 85U;
    msg.radius = 0.18473854813032853;
    msg.duration = 59336U;
    msg.speed = 0.8140959196050659;
    msg.speed_units = 181U;
    msg.custom.assign("RJDCBABDOEMCHXSLCRJCOXNTDJJCAMDPWQDIAWBSMSXGSMZIUNFLPNYJWQNPRZNIVGULOIFGPZQRFXDWKKHQEUNTVLFXYTCPKTLCPZWZLWYERREFFIQZIXHOFMKGCPIXQPGHBYJZMOQMIKISXSBBVOSEGHYFMZAAJDVBVJOJ");

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
    msg.setTimeStamp(0.5502585410881503);
    msg.setSource(54591U);
    msg.setSourceEntity(71U);
    msg.setDestination(37557U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.3095234864731067;
    msg.lon = 0.8832374463149198;
    msg.z = 0.29033327213266324;
    msg.z_units = 149U;
    msg.radius = 0.06364208767254564;
    msg.duration = 55158U;
    msg.speed = 0.6767387055335415;
    msg.speed_units = 28U;
    msg.custom.assign("RMFZMUURHLANDYMYQWTKEPSKKBAZXYBVNCZJCIGKFREJOFTFZVJHILWUSDGHKLLJUOMAXPJGIFCQGCDH");

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
    msg.setTimeStamp(0.7158595548959445);
    msg.setSource(5974U);
    msg.setSourceEntity(55U);
    msg.setDestination(45646U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.6635202250246467;
    msg.lon = 0.39044581977573956;
    msg.z = 0.16692332094119489;
    msg.z_units = 143U;
    msg.radius = 0.04210844596546781;
    msg.duration = 25906U;
    msg.speed = 0.5494325994477756;
    msg.speed_units = 127U;
    msg.custom.assign("AHWHIXRVYIZXXRKMOCEJMXCVJVUAWTCEPZPSJKJWIBZLUFHQWGIBZFPUSBPGBCLKMVPFTSVYGRIWFNDJYBEVGJAGKXYQNTVAOTFDRHWISEFDNUXCGUUDPVURJTHCWOGXZYKRQYEBLSXNYLZSZAENQNMDUIRZROCOELCEKQFCKBKUHPKXYGF");

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
    msg.setTimeStamp(0.7244816619881914);
    msg.setSource(18916U);
    msg.setSourceEntity(85U);
    msg.setDestination(14937U);
    msg.setDestinationEntity(188U);
    msg.timeout = 58029U;
    msg.flags = 110U;
    msg.lat = 0.8372344296747023;
    msg.lon = 0.6566446943067676;
    msg.start_z = 0.09457184668297869;
    msg.start_z_units = 228U;
    msg.end_z = 0.7760827336086256;
    msg.end_z_units = 1U;
    msg.radius = 0.593056959294194;
    msg.speed = 0.5970087198089844;
    msg.speed_units = 164U;
    msg.custom.assign("RQMVQTHWWHRWPWLMNKSZDGSBUX");

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
    msg.setTimeStamp(0.8493657380837795);
    msg.setSource(56280U);
    msg.setSourceEntity(139U);
    msg.setDestination(29953U);
    msg.setDestinationEntity(99U);
    msg.timeout = 63746U;
    msg.flags = 12U;
    msg.lat = 0.7953548166982687;
    msg.lon = 0.8295782177660767;
    msg.start_z = 0.2716631002738614;
    msg.start_z_units = 86U;
    msg.end_z = 0.794730262945317;
    msg.end_z_units = 238U;
    msg.radius = 0.5029227242485562;
    msg.speed = 0.12062483157851156;
    msg.speed_units = 86U;
    msg.custom.assign("WJSESJBKBUDVMQVGJWNHKCSWLMCGNJBMGDCFRCSPXLGEVVBZNUUGZKALIMQDJIKKKDCXIPQHZWQTUZONBOFQTDNNZGQZIHMOCCXLPBZJIYYZYBNNRVSRTFLSKYPSDGTOMLUMSSOMCTHZXHSPPURE");

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
    msg.setTimeStamp(0.7375416380493305);
    msg.setSource(54544U);
    msg.setSourceEntity(94U);
    msg.setDestination(31652U);
    msg.setDestinationEntity(104U);
    msg.timeout = 33931U;
    msg.flags = 7U;
    msg.lat = 0.9617670860123484;
    msg.lon = 0.7760240315317112;
    msg.start_z = 0.4539538571018057;
    msg.start_z_units = 237U;
    msg.end_z = 0.9551631417649372;
    msg.end_z_units = 112U;
    msg.radius = 0.1488204079966613;
    msg.speed = 0.36783665382260344;
    msg.speed_units = 6U;
    msg.custom.assign("VOQSBYSBPCFNKMOWAXFGMQOIFFXWGJCHFBHZIDWHFQH");

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
    msg.setTimeStamp(0.2567826867051779);
    msg.setSource(41351U);
    msg.setSourceEntity(156U);
    msg.setDestination(52197U);
    msg.setDestinationEntity(95U);
    msg.timeout = 30950U;
    msg.lat = 0.9382334090664459;
    msg.lon = 0.760391982012959;
    msg.z = 0.1957805681402237;
    msg.z_units = 169U;
    msg.speed = 0.8324462810788252;
    msg.speed_units = 199U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5123804798528403;
    tmp_msg_0.y = 0.09860271014406274;
    tmp_msg_0.z = 0.9070681442069234;
    tmp_msg_0.t = 0.516301721323962;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TSUYNGSGQQNERZPRXDJVFUIYLLYUOGNVAQFXKMJWZVVJTSIIEZBNCODQOACUOQXAFLRDWIOHPZDUNFKSHINATFTEWSIWZEAICGQVXA");

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
    msg.setTimeStamp(0.7661385901735747);
    msg.setSource(38254U);
    msg.setSourceEntity(45U);
    msg.setDestination(52100U);
    msg.setDestinationEntity(95U);
    msg.timeout = 57875U;
    msg.lat = 0.35412952266440845;
    msg.lon = 0.5105804728383371;
    msg.z = 0.4740950221846765;
    msg.z_units = 205U;
    msg.speed = 0.03545225157078358;
    msg.speed_units = 154U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9120124393041303;
    tmp_msg_0.y = 0.9447540095305634;
    tmp_msg_0.z = 0.17221833934362818;
    tmp_msg_0.t = 0.17129318835733498;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JVZRGFFTMMIWCPSVICWFFVGRYUYBUSDXVVOYSRAKGYXHHTADFNXWHYSEBWNKXSPOXMESLIQKHYOKNKJRXKUDTLLMGMCJABLKDMAFCZZQWCPEUXAKBDAHVATQZETXOVPEPIYZTROYPKHJWESFWQVCOVRZQGQXDCTNC");

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
    msg.setTimeStamp(0.5933987637254277);
    msg.setSource(49880U);
    msg.setSourceEntity(158U);
    msg.setDestination(48106U);
    msg.setDestinationEntity(148U);
    msg.timeout = 51304U;
    msg.lat = 0.6864895593142335;
    msg.lon = 0.34989117591845453;
    msg.z = 0.21446887326168307;
    msg.z_units = 31U;
    msg.speed = 0.3052974980878532;
    msg.speed_units = 250U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2749144734773675;
    tmp_msg_0.y = 0.347937664569944;
    tmp_msg_0.z = 0.2131218109979004;
    tmp_msg_0.t = 0.7830491089304872;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZTURQEHJDZSFEWYEOHADYVAUBISGQDHXGDWBVMUARJNXOXBBFROECARDFWROQYVJTJXCYHIZJWQJSPIPKBTNLPMVNHEZVQYLFRUPTRFNTCGMSFQBC");

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
    msg.setTimeStamp(0.12412756886050702);
    msg.setSource(55055U);
    msg.setSourceEntity(94U);
    msg.setDestination(15929U);
    msg.setDestinationEntity(88U);
    msg.x = 0.7928944743181496;
    msg.y = 0.5135728058230281;
    msg.z = 0.9220047023620483;
    msg.t = 0.6372042731626912;

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
    msg.setTimeStamp(0.2232851476812917);
    msg.setSource(43965U);
    msg.setSourceEntity(75U);
    msg.setDestination(14305U);
    msg.setDestinationEntity(165U);
    msg.x = 0.35627836544696656;
    msg.y = 0.042841194006577266;
    msg.z = 0.6438591679154105;
    msg.t = 0.04259549990382394;

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
    msg.setTimeStamp(0.6873973009376829);
    msg.setSource(62285U);
    msg.setSourceEntity(87U);
    msg.setDestination(18129U);
    msg.setDestinationEntity(140U);
    msg.x = 0.528098141769797;
    msg.y = 0.2146089880488833;
    msg.z = 0.3480018523886268;
    msg.t = 0.9405698357909898;

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
    msg.setTimeStamp(0.10807555133092495);
    msg.setSource(55293U);
    msg.setSourceEntity(109U);
    msg.setDestination(25740U);
    msg.setDestinationEntity(52U);
    msg.timeout = 30380U;
    msg.name.assign("ETVKOJCAVNYIWVBFTTGNZXVURJHQJOKMHRGFEBEYTYMWMNEMXNRRWQGHLDWSOKNANJZMIVFRBFKCPUMVDAZDEKOXKDQZJDPOJFOSLBMCHQHQLIT");
    msg.custom.assign("OAUSIXYQUEARVAESUTXABLJJWHUNRVDQDSFZAKFVYVNKEVXSCAARZIGOGMPCBRIPGWNLEFVZFMEBCFPXBNXNNRVEJUJDDLCNECGDPDPQZYTULMBRGCXZPYHKOIDQJPZIZFYPIVDWM");

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
    msg.setTimeStamp(0.5459214701469045);
    msg.setSource(18998U);
    msg.setSourceEntity(70U);
    msg.setDestination(63747U);
    msg.setDestinationEntity(231U);
    msg.timeout = 1269U;
    msg.name.assign("JGYQQQPWCCOEWDFYLTJZFAVQSOKMKGCGZASBCWHFALITNYLBNKUBTDSSJNRORYLSNBNWUJGGOMOLIKFKHWCXHJUUIIMFRRMZMBCEPLCWLQDOYVSDBTGFZTBJHPYXSEFLTPXVETHQRXVXUFCMIOPMEXPHITGEXKEHJDEQZFLBVDWUKSYSZHXXXPZRKNKSYUJWWDAQNCAJ");
    msg.custom.assign("XGHIGVNQZIOLVLOBNYXANDYGNONSXUHMXJF");

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
    msg.setTimeStamp(0.9131113038140943);
    msg.setSource(59642U);
    msg.setSourceEntity(104U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(253U);
    msg.timeout = 2673U;
    msg.name.assign("KQDKOGENNLXJBFVKEVOISINCVSOIVZGTNDTBXOXEERJATTFHHCXQGYOCWMZYBCQTJWMJROIUCAVMRRNEMYXKXGZSDGPROSWEKVKJZFHUNQASMPZIALAWVJQQJLDGEWSBGM");
    msg.custom.assign("NOAUPAGIMFURFMDBGDZBHOIKCJPGHMH");

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
    msg.setTimeStamp(0.41122017252782217);
    msg.setSource(32710U);
    msg.setSourceEntity(92U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.2336118573792031;
    msg.lon = 0.7316116318834013;
    msg.z = 0.34222273175661166;
    msg.z_units = 206U;
    msg.speed = 0.9007589680666597;
    msg.speed_units = 35U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2618800242748508;
    tmp_msg_0.y = 0.9888870194186724;
    tmp_msg_0.z = 0.8197980122171102;
    tmp_msg_0.t = 0.6043756625893714;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 14336U;
    tmp_msg_1.off_x = 0.10109224448890419;
    tmp_msg_1.off_y = 0.5391145760467455;
    tmp_msg_1.off_z = 0.7385798321637782;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.2261269467740934;
    msg.custom.assign("DHSFABIMKICBUJPXVGGJUGSGNYOTYSZFIV");

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
    msg.setTimeStamp(0.766498027190742);
    msg.setSource(21012U);
    msg.setSourceEntity(202U);
    msg.setDestination(58896U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.8506151313706216;
    msg.lon = 0.17378721928647678;
    msg.z = 0.07661381773748;
    msg.z_units = 46U;
    msg.speed = 0.29829189593461514;
    msg.speed_units = 168U;
    msg.start_time = 0.9821225610955686;
    msg.custom.assign("XDMKBORHCFNIUFHCTUDHYNIGBPXVLUILPEOOIIXNGWMKAVFAPDMQUQPWCZ");

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
    msg.setTimeStamp(0.3066667122759973);
    msg.setSource(45010U);
    msg.setSourceEntity(45U);
    msg.setDestination(35824U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.7724183680279824;
    msg.lon = 0.35948273166358014;
    msg.z = 0.5067824677167586;
    msg.z_units = 70U;
    msg.speed = 0.9013611582401205;
    msg.speed_units = 192U;
    msg.start_time = 0.9760006315124874;
    msg.custom.assign("JETMQCBWDNWCUSEYEPIAISHJDVFHLETTNZLPEYWVTXGWHRPKEAWNTARASGGQFUZKKEHFVUMCBYZKWJMTRHQRJAGFABCJQKLDFEMQJNURZGDEIKPLWAOKSNJQVMCGVSMZVCQRQYACOSZLYYWOVUOLGA");

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
    msg.setTimeStamp(0.7276724979597478);
    msg.setSource(57583U);
    msg.setSourceEntity(87U);
    msg.setDestination(28679U);
    msg.setDestinationEntity(113U);
    msg.vid = 3283U;
    msg.off_x = 0.3283231553576822;
    msg.off_y = 0.24617896265502281;
    msg.off_z = 0.7007099688545466;

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
    msg.setTimeStamp(0.016648975496880603);
    msg.setSource(53146U);
    msg.setSourceEntity(247U);
    msg.setDestination(49922U);
    msg.setDestinationEntity(177U);
    msg.vid = 8409U;
    msg.off_x = 0.30916779231380453;
    msg.off_y = 0.22688670165675262;
    msg.off_z = 0.9990270145989959;

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
    msg.setTimeStamp(0.42483760753845345);
    msg.setSource(65079U);
    msg.setSourceEntity(62U);
    msg.setDestination(42415U);
    msg.setDestinationEntity(169U);
    msg.vid = 41201U;
    msg.off_x = 0.6209596747255555;
    msg.off_y = 0.0036265220914138974;
    msg.off_z = 0.005854684458538095;

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
    msg.setTimeStamp(0.8274333880881998);
    msg.setSource(28866U);
    msg.setSourceEntity(253U);
    msg.setDestination(61658U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.5399151230378486);
    msg.setSource(57021U);
    msg.setSourceEntity(216U);
    msg.setDestination(58084U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.9196988524058521);
    msg.setSource(34991U);
    msg.setSourceEntity(133U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.7774310342964372);
    msg.setSource(26909U);
    msg.setSourceEntity(237U);
    msg.setDestination(32198U);
    msg.setDestinationEntity(57U);
    msg.mid = 41641U;

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
    msg.setTimeStamp(0.2812463976587819);
    msg.setSource(54225U);
    msg.setSourceEntity(167U);
    msg.setDestination(339U);
    msg.setDestinationEntity(50U);
    msg.mid = 47190U;

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
    msg.setTimeStamp(0.4676971339980426);
    msg.setSource(59639U);
    msg.setSourceEntity(77U);
    msg.setDestination(39594U);
    msg.setDestinationEntity(204U);
    msg.mid = 64187U;

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
    msg.setTimeStamp(0.7013184373401947);
    msg.setSource(1838U);
    msg.setSourceEntity(17U);
    msg.setDestination(8860U);
    msg.setDestinationEntity(73U);
    msg.state = 57U;
    msg.eta = 5622U;
    msg.info.assign("MPJTTZVHSYAQAOXFGHXLQUYQNZBSVBPZHPXSODHBTDBRJGOPYERSDJJNFVPBKMBV");

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
    msg.setTimeStamp(0.26582745437247857);
    msg.setSource(55838U);
    msg.setSourceEntity(128U);
    msg.setDestination(61698U);
    msg.setDestinationEntity(38U);
    msg.state = 195U;
    msg.eta = 52812U;
    msg.info.assign("UZSALTYBNMNZ");

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
    msg.setTimeStamp(0.1112962996085638);
    msg.setSource(51571U);
    msg.setSourceEntity(77U);
    msg.setDestination(6073U);
    msg.setDestinationEntity(51U);
    msg.state = 253U;
    msg.eta = 64155U;
    msg.info.assign("XURESDZMNOTGBPPJXICQZSCRKBXHONGKGVMFPLBHMSWCMAFPQOXQVLIVPJQQLMEPNBJYXZGVUUQLEODPILUGOTZRFDCMNDIBDELQOUGZBVSWRUENOENPO");

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
    msg.setTimeStamp(0.6701907276629274);
    msg.setSource(53880U);
    msg.setSourceEntity(164U);
    msg.setDestination(59841U);
    msg.setDestinationEntity(102U);
    msg.system = 52942U;
    msg.duration = 13288U;
    msg.speed = 0.12415494780013059;
    msg.speed_units = 91U;
    msg.x = 0.9444234459066371;
    msg.y = 0.43452059897959705;
    msg.z = 0.3791534674948076;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.16874045738588161);
    msg.setSource(3676U);
    msg.setSourceEntity(176U);
    msg.setDestination(17421U);
    msg.setDestinationEntity(0U);
    msg.system = 10133U;
    msg.duration = 50665U;
    msg.speed = 0.4087218519420839;
    msg.speed_units = 40U;
    msg.x = 0.5591944982979965;
    msg.y = 0.703628744748227;
    msg.z = 0.3760537551255744;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.38960623526161553);
    msg.setSource(51470U);
    msg.setSourceEntity(2U);
    msg.setDestination(54203U);
    msg.setDestinationEntity(6U);
    msg.system = 46179U;
    msg.duration = 1703U;
    msg.speed = 0.02163484391465631;
    msg.speed_units = 48U;
    msg.x = 0.05667100409011716;
    msg.y = 0.0774171814650545;
    msg.z = 0.6610618259317174;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.1522583719545776);
    msg.setSource(216U);
    msg.setSourceEntity(116U);
    msg.setDestination(6365U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.2944454948099168;
    msg.lon = 0.7291604421806848;
    msg.speed = 0.5961021839537511;
    msg.speed_units = 156U;
    msg.duration = 40890U;
    msg.sys_a = 10861U;
    msg.sys_b = 37742U;
    msg.move_threshold = 0.7121951907451876;

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
    msg.setTimeStamp(0.2179070616589488);
    msg.setSource(10974U);
    msg.setSourceEntity(60U);
    msg.setDestination(11404U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.5164561060365155;
    msg.lon = 0.27882282210570497;
    msg.speed = 0.3371170306818486;
    msg.speed_units = 95U;
    msg.duration = 13275U;
    msg.sys_a = 61556U;
    msg.sys_b = 20575U;
    msg.move_threshold = 0.628591998025679;

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
    msg.setTimeStamp(0.36149102001011624);
    msg.setSource(27355U);
    msg.setSourceEntity(191U);
    msg.setDestination(63787U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.7200382956526225;
    msg.lon = 0.37872306076605156;
    msg.speed = 0.20633062410093916;
    msg.speed_units = 240U;
    msg.duration = 2436U;
    msg.sys_a = 46096U;
    msg.sys_b = 4542U;
    msg.move_threshold = 0.9860179519107952;

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
    msg.setTimeStamp(0.5695926304267821);
    msg.setSource(54268U);
    msg.setSourceEntity(53U);
    msg.setDestination(5346U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.47722914058493027;
    msg.lon = 0.6992147693332702;
    msg.z = 0.2684236022612695;
    msg.z_units = 215U;
    msg.speed = 0.7023942796754405;
    msg.speed_units = 107U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.04891020468604912;
    tmp_msg_0.lon = 0.6176194601957545;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ELNTDCUXVOQKFNTTQWWAIQZKBYXJVBZSJCIYCGNWMUEZAHMESZUAQKFDPHUXMBBWEEANGGZYTKEUBLFHMDYSOWFZTYVMVLSAPPPOLBDFLRBIWNWRLPJOQEDXXFDPJCAGUPOOHLGTARIDPGUYYLFRXGYYOJKTCICTKFBSXJVNGELWKS");

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
    msg.setTimeStamp(0.8327923731335587);
    msg.setSource(12368U);
    msg.setSourceEntity(214U);
    msg.setDestination(15470U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.656718352066489;
    msg.lon = 0.4950787827862744;
    msg.z = 0.6138827853963756;
    msg.z_units = 82U;
    msg.speed = 0.08618149020724786;
    msg.speed_units = 194U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9383226560375517;
    tmp_msg_0.lon = 0.6298284148535092;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZNULXAHAVVHFOUWLYERURJKNBACUDWQNEVLSRFDLKWPTUCTTSERTGCJOFRWYJSNGIPTDVLJEKALFJGQAEWXIEEZKASRCQBVXQFWMLGDHKUMHGBVYOWEFTIBVXKCAXDSPZSIYPGPYTBOKXJFDQIWZGJBWZAEIMZTHNZXYHCOQVNOHSBJSMUHKHJCTQGMPZRDURNYSOHQWXYTZDIIMOLOYCX");

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
    msg.setTimeStamp(0.3639901814903518);
    msg.setSource(49067U);
    msg.setSourceEntity(58U);
    msg.setDestination(6320U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.9739192354671118;
    msg.lon = 0.13520347124485366;
    msg.z = 0.8251861531894618;
    msg.z_units = 198U;
    msg.speed = 0.7743564977487274;
    msg.speed_units = 38U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.39994126875286395;
    tmp_msg_0.lon = 0.5059464020661892;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QFANIZFGKLJCBAVQLJGPQYAZNIHSUUXFSNJNZWLYWHQWMOGAGHTGOXINPUSGLPOHCFREKNYTSWKBLTIEDVVVRLQJBERYZSSKWHEVMPLDNUKXYPCPIZSXGZJPQDEBRTPUVPNQBDTLVMUTOGYAJHHONMOREQMOTTUIWXTESXYJKQSMPRC");

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
    msg.setTimeStamp(0.2540928221220007);
    msg.setSource(20401U);
    msg.setSourceEntity(253U);
    msg.setDestination(23409U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.368561706614394;
    msg.lon = 0.3737622281754919;

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
    msg.setTimeStamp(0.23191343333948522);
    msg.setSource(51854U);
    msg.setSourceEntity(141U);
    msg.setDestination(55509U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.17949046670144497;
    msg.lon = 0.6946252366612469;

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
    msg.setTimeStamp(0.703531217469378);
    msg.setSource(30043U);
    msg.setSourceEntity(179U);
    msg.setDestination(32923U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.04111226774911325;
    msg.lon = 0.9009891161399849;

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
    msg.setTimeStamp(0.19991940568966393);
    msg.setSource(7319U);
    msg.setSourceEntity(142U);
    msg.setDestination(56947U);
    msg.setDestinationEntity(132U);
    msg.timeout = 30187U;
    msg.lat = 0.015319021375552078;
    msg.lon = 0.3266313045581948;
    msg.z = 0.34822572623423365;
    msg.z_units = 190U;
    msg.pitch = 0.7196223454726449;
    msg.amplitude = 0.9902929111130614;
    msg.duration = 12725U;
    msg.speed = 0.7593208943523433;
    msg.speed_units = 243U;
    msg.radius = 0.0003930180439388753;
    msg.direction = 52U;
    msg.custom.assign("BEVOQVHVAQNIBVUHINTOGMPKLEXLLMPVMCNYMDKDCHMDKWGYGCFEGKGNLQQCXXZQJRNRKATFUYSUALVMZRAUOEWZZNIKCKROGWOPSZFEDROCZDCXHQBWNHYIXXMJXVPTHJBTICQYURJYSTPGHRDCXSFUBBVWWRAMXCDZKKTGEVUDAEPITSUAQJRFIFBBELYFZQMTPLQONUAFOJMG");

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
    msg.setTimeStamp(0.405498439156057);
    msg.setSource(27711U);
    msg.setSourceEntity(117U);
    msg.setDestination(30137U);
    msg.setDestinationEntity(88U);
    msg.timeout = 24408U;
    msg.lat = 0.394035413346021;
    msg.lon = 0.01838589272215163;
    msg.z = 0.5230586547895489;
    msg.z_units = 128U;
    msg.pitch = 0.03326739161736936;
    msg.amplitude = 0.4743896889155036;
    msg.duration = 31032U;
    msg.speed = 0.022457161740797038;
    msg.speed_units = 168U;
    msg.radius = 0.13528995850704129;
    msg.direction = 15U;
    msg.custom.assign("QXPURPVIIAZQYLTNZUIHDPXSCLHKKPMCGFBFHJEJTHFDWZDWBGAEURGGSCCHOVJZFKPFTVLTGSLSJCWBAYMILZQRXJCMOWLOTWTSGWNOTYOVGNVKVKYJMXJHVUXXEKQYVNKPKZIWLIYXYCHEJIQMUOWZSKBOOEFMFDRXTAUQBNJTNFRSUEEAEBEFSTDBUXHDPSQMWVUZAPRIJYQLMLDM");

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
    msg.setTimeStamp(0.5650197753986534);
    msg.setSource(15735U);
    msg.setSourceEntity(20U);
    msg.setDestination(59419U);
    msg.setDestinationEntity(210U);
    msg.timeout = 41633U;
    msg.lat = 0.8918789142828912;
    msg.lon = 0.1355970223592855;
    msg.z = 0.5931463817799029;
    msg.z_units = 77U;
    msg.pitch = 0.5829674517469966;
    msg.amplitude = 0.9171177350724904;
    msg.duration = 24020U;
    msg.speed = 0.42653955716771774;
    msg.speed_units = 220U;
    msg.radius = 0.2725250769856027;
    msg.direction = 158U;
    msg.custom.assign("YKCJOZWSLTTUDGGODXPIBPLVZCXXSHRUBULSHPFARLFGSITEEGQLAEMMKDYMNZNODUMFDFXMAYINOMCVSFSPOVRUNJDQJYATBGJCFXPXUHHEQLAZHWTBAVDBIJ");

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
    msg.setTimeStamp(0.19846290003838496);
    msg.setSource(45343U);
    msg.setSourceEntity(192U);
    msg.setDestination(41146U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("OANQCPHZQZYQMTBPIASJLWFZVWJJELAMTMRWTQLMDGITHBMBOSGDCLPAKOGCJHXSBTRQSPEXYRRJCMXUCEWANWLXZPNXLGKMVZEFYHVXOFVLFMSYIEUQSINNOKJFWOKNDNLVNZZBLKQTSYXGBAT");
    msg.reference_frame = 55U;
    msg.custom.assign("XITHEFDOSROJJKYEKKDUQRQQJCXDOAPVVYXAFBXMKWILBZLNNVGELSMUNESKFISVHGHRRDEFZZBQMNKCVSHHPIFMKCCYLWBGXGGKZZVWDNACNFTLXNAJLMKJPRZXYMJUPIROAAKUQTPEPSHIYUNQTETVJSIHLGWANYPRFTBLYBCMZROREHXUQABSTJVA");

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
    msg.setTimeStamp(0.20466744541778747);
    msg.setSource(17121U);
    msg.setSourceEntity(102U);
    msg.setDestination(64332U);
    msg.setDestinationEntity(133U);
    msg.formation_name.assign("BGITCLPQDMOEXTECCOASFKK");
    msg.reference_frame = 51U;
    msg.custom.assign("ZACHBZQJIFDFGFVPDLWKEHIFSERKHJYIVQXEZOJWTGFDTUPTNTPMEQNGCMXFUSQPHKUJUVHCPTPYGFYTGJDZLCBSOZEHKWDWEKUHJXTYLXXEGJMNXSVFADBIWRBOFNKDNIOZWJVUDBXBBKRAOWYRSQMJUGVCLCYHABYAQMMEPRWOLMRVDKWYQLLPUGNMSXGAUAPRMCOLRKTNBLFQAIEWNNCSROKUCTITNQSIZHYAZXSVOG");

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
    msg.setTimeStamp(0.9639011862435704);
    msg.setSource(50082U);
    msg.setSourceEntity(61U);
    msg.setDestination(31379U);
    msg.setDestinationEntity(50U);
    msg.formation_name.assign("FDQJCWBZMDSASZBLLYRQEXLBDPWHZILYVCKXQTCGRVXZWMCGGGYPOJKVNQVSIFKLRPYFWHNRJKJSHFALWNIHUPUHNOSFNSQHZERXCKIBTYDMDEZOITJLMTWF");
    msg.reference_frame = 250U;
    msg.custom.assign("CBPQZTWGBMDAACFHSYDJBUVFIRCSZWRVRVPHUGEIDLGUJSAVKVYQMOMCCQVOQTXJHUEIRLROWDDBTWJMAYVNTWNSWNFLCOBXSLXMNAIQZPUJXDOIGVDHWNLGESSO");

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
    msg.setTimeStamp(0.3622883835118459);
    msg.setSource(5916U);
    msg.setSourceEntity(222U);
    msg.setDestination(37205U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("GNRQSSWQNNYGTVZIMZBHJVUBVGYBYEVELUZJKBDVZBALOICHATJECPCZSZIMKOUHNFICVGYEXFXMCTITLOOPORKBFXDCLZFVFUDTWCIKGRIPSSPMUVHKDRHIOGYGLPVAQAQFBKJWAHJQXHWXNJEXEX");
    msg.formation_name.assign("XDYNVIALWSFRVARAULBDFAUZZDJZCJMELWRTIPPQDYDNKWEIQHTXVFGXGOHFHPDYQAKNHSBSWPLUACOPFGTYZPIUVBTJNISWHMOQBXGLBZKJVGZCCWQBMCGOKABYTTTJLJKGRACRTIHIGBOSJEXRJEV");
    msg.plan_id.assign("ATJPKXEDDDFBIRAPEXITDRYUCXUFDEKSBHSGEEHGTCPVGUMFVTLBABBNKHGVZTIUJEQSGFTTVRPGIISWLGSDKVDTHYAVHIOWBWT");
    msg.description.assign("HRIFULUXEUCOQXVFDQPNTWOZYSUGUZNJDIJCVZLBPGDMADGBXZEUCHJSMCVSXHLFSFFQCKTMJWVYDQPNHYKBKLNPAYIYTWHHEQWRKWQKLUCLBSOEZIBBYXGTNMQHSTAUWWHZIBQAMLDBPEBLEJ");
    msg.leader_speed = 0.909268454407267;
    msg.leader_bank_lim = 0.3770506635757147;
    msg.pos_sim_err_lim = 0.2999410739259599;
    msg.pos_sim_err_wrn = 0.6912458551497385;
    msg.pos_sim_err_timeout = 56544U;
    msg.converg_max = 0.7316852514236761;
    msg.converg_timeout = 41133U;
    msg.comms_timeout = 19496U;
    msg.turb_lim = 0.22266069936387878;
    msg.custom.assign("EZDPDTHEZCMYEKNXLHCHJRUWIJQGRRNUKNYPHHZZRSBBTDYLLPPTCGPOXPFUMAGHMOHTIZQCNIQUTPNYZVUQCYAYQODLARBRJVDZJXTMIJHKQLGVJUKRSXOOQSHOEESSFFLIOEKPCKFCTASGGPVWXDYCWFNGBPTUBVUAAXBZWYKWNLMFESXVSRWXIAEFQKC");

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
    msg.setTimeStamp(0.18374680294558876);
    msg.setSource(57501U);
    msg.setSourceEntity(99U);
    msg.setDestination(12776U);
    msg.setDestinationEntity(197U);
    msg.group_name.assign("MVXXPBMWFKUIHAINGMJRGRZCNLPDCLICRGRT");
    msg.formation_name.assign("NPYDQBDPMMMVEDZJMAOCIGFYWBZAOQRUFPLJECQUNTTWBTDQPZPHTNONVALVRBMAUFKPL");
    msg.plan_id.assign("RPBPCIZQOIBDTJAOEJEFYFCHXQJSDKSAZYWMQUCBBANXPOYKXBGBNGZKPWTLHPCFQUEOUXYGKNREFYMNRWFABXLLJKERUEDVEDLGBCHWMMKPVZHIVJCYSSTQUIDRMPZIFLIAELUVNCZDLVEYWNATFWZJMSHTITDV");
    msg.description.assign("JAMUSYRROLRGQPWCVVPWWCPUFZQGOHHYHLVPXMSIHNOTWZQNWYTEKRBRBFDJMVICBFFDDRAZCQAQURUBFIXUSYIVVDXJYGLTNROAFSDQZOVOZKCGNDYPSJWDUGBICKEOXUZBFZZPTLRXEEMIBAKYXJHDNTHMVFYKATUQPVPWYKNEY");
    msg.leader_speed = 0.9511622259984601;
    msg.leader_bank_lim = 0.16192843628579656;
    msg.pos_sim_err_lim = 0.8860673079358775;
    msg.pos_sim_err_wrn = 0.5491065571680231;
    msg.pos_sim_err_timeout = 38261U;
    msg.converg_max = 0.2016919098879889;
    msg.converg_timeout = 3398U;
    msg.comms_timeout = 38807U;
    msg.turb_lim = 0.28100471977033326;
    msg.custom.assign("PYYJBBFKOHJUQXCXUMXYDTIOXYICSEJPTOYROVQRAEGBLQWJNDUIVVHPHFZVLMKLXTXVZSNJTDXRGBTOXGCRWWTANQBUEEZWMUYMMWMPDMLKDFRAFHFSNXOUJCUIIQHQTRECRLEBSEACZVZPMP");

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
    msg.setTimeStamp(0.6913701359828965);
    msg.setSource(54994U);
    msg.setSourceEntity(143U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("LOUBGHOTSLHZFZTGZCAUKORPNIPNRDLERKHISCOXHKZCOOWVPIQMTKPUKAYYGYQUPDTBRJUYVLFJGXSYHOSNBCXAVMCDYUVGIJPBETANCPXJUJNNMFVOFMXLGZZNZIBNGMDAFXYSOWKYVTPEQKAXRQJBECJEHKAQHEBCGTLTXQ");
    msg.formation_name.assign("NTKGQQSMYUAOJXWXACKLCDOMEJAGKEZDVCVXLVJGQUGMMZGGRXBZEYTWTRPFIUIBMSKHJKYLWQFYRMCBDDPZAXFRDPVGESNXZFTKVHVJRFSCUNQMAJBPLSFOOASITBBBDVIYLWDFXPHAMUHYDKNESGMSHVWHNOQOQZTAVZZEZLPEFWONKJICQJFVNFIHGWIMYBNZUPAREBCGRQCPXTDWINULYBXYWLOUTSEKXNRWTDRAJCLORPJ");
    msg.plan_id.assign("VRWQBOTYOAUKVEMIGGJKNVTNCYZVSERMSXDBUVVXUOTYUPQDSVGSYKTBCJIAUMHDQIXJGLCLIWXLWMRHZMAFELOAIDELPHZIYHCDVUEGNXKZSQAPTEZKMRPAZQEPNFCNYMCFKNLAEOBN");
    msg.description.assign("RLGQMJCECIPOWJYYCMNNCUXAOEWIRRXXNWCINHVSOKJWOXFEFSPTVIROKENXMCVFGXBCKSDJXQFAIVYGKCAUVYHZPMSYWTDRJHDNVCUVBFGNQUWOOSDMXTGYDBQEQUFOLZPYNRLIAFZKAHJNZHVMLIDHVZRAKJGHWGYRGJZRKPPQYPMLTTBFAJIBXTIWSADSQRMPBLBYAKUKELPOTHDSQHEXWQMAUSBZIDTGODTUPBLF");
    msg.leader_speed = 0.8282969005091614;
    msg.leader_bank_lim = 0.8305823104497089;
    msg.pos_sim_err_lim = 0.2875002043161691;
    msg.pos_sim_err_wrn = 0.773217672139682;
    msg.pos_sim_err_timeout = 10476U;
    msg.converg_max = 0.17638719575802486;
    msg.converg_timeout = 54379U;
    msg.comms_timeout = 17404U;
    msg.turb_lim = 0.33614861638581217;
    msg.custom.assign("QXHXBOYAFYSPWPAKOAWXPEMXROEMMGFUJSCNXYRFYVKIIBJQUUHIRWVXKPDHQEXAZYVMROBJAVOHYSWNJQUKNRKCKXNYCBATFGOVRUZOHEPDUTILSILWOKIUE");

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
    msg.setTimeStamp(0.18686279892584445);
    msg.setSource(32430U);
    msg.setSourceEntity(7U);
    msg.setDestination(8353U);
    msg.setDestinationEntity(169U);
    msg.control_src = 45449U;
    msg.control_ent = 29U;
    msg.timeout = 0.33749839987928354;
    msg.loiter_radius = 0.10881070375667523;
    msg.altitude_interval = 0.8418059244867497;

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
    msg.setTimeStamp(0.5926467417018603);
    msg.setSource(48781U);
    msg.setSourceEntity(53U);
    msg.setDestination(28622U);
    msg.setDestinationEntity(173U);
    msg.control_src = 28605U;
    msg.control_ent = 165U;
    msg.timeout = 0.9134626934363127;
    msg.loiter_radius = 0.8359206732477028;
    msg.altitude_interval = 0.5200428366574731;

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
    msg.setTimeStamp(0.33097023497626077);
    msg.setSource(25657U);
    msg.setSourceEntity(147U);
    msg.setDestination(49582U);
    msg.setDestinationEntity(200U);
    msg.control_src = 25767U;
    msg.control_ent = 120U;
    msg.timeout = 0.18657822826632697;
    msg.loiter_radius = 0.4832268544305891;
    msg.altitude_interval = 0.07603667164644679;

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
    msg.setTimeStamp(0.3987583667915905);
    msg.setSource(50426U);
    msg.setSourceEntity(98U);
    msg.setDestination(7799U);
    msg.setDestinationEntity(237U);
    msg.flags = 41U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9624564995566773;
    tmp_msg_0.speed_units = 4U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3662054028196582;
    tmp_msg_1.z_units = 123U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9935339531944806;
    msg.lon = 0.7513554425411914;
    msg.radius = 0.8241986297697923;

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
    msg.setTimeStamp(0.8974888249930808);
    msg.setSource(54105U);
    msg.setSourceEntity(203U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(237U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.030783200066798688;
    tmp_msg_0.speed_units = 194U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5527240652931302;
    tmp_msg_1.z_units = 216U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.527126747200182;
    msg.lon = 0.2877585665782276;
    msg.radius = 0.5283792219076454;

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
    msg.setTimeStamp(0.5975031999344875);
    msg.setSource(10878U);
    msg.setSourceEntity(4U);
    msg.setDestination(30920U);
    msg.setDestinationEntity(245U);
    msg.flags = 183U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5392482421314575;
    tmp_msg_0.speed_units = 159U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.36354778791343856;
    tmp_msg_1.z_units = 250U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5012985046037141;
    msg.lon = 0.011026867462758494;
    msg.radius = 0.6044242453628507;

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
    msg.setTimeStamp(0.46694812752845827);
    msg.setSource(34960U);
    msg.setSourceEntity(32U);
    msg.setDestination(32065U);
    msg.setDestinationEntity(42U);
    msg.control_src = 248U;
    msg.control_ent = 154U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 179U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5633798549046397;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0395830275548239;
    tmp_tmp_msg_0_1.z_units = 207U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6556894564057513;
    tmp_msg_0.lon = 0.3018552118691513;
    tmp_msg_0.radius = 0.7168402728043709;
    msg.reference.set(tmp_msg_0);
    msg.state = 65U;
    msg.proximity = 229U;

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
    msg.setTimeStamp(0.17161886925410952);
    msg.setSource(46935U);
    msg.setSourceEntity(121U);
    msg.setDestination(22873U);
    msg.setDestinationEntity(175U);
    msg.control_src = 64321U;
    msg.control_ent = 16U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 4U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8397101940276603;
    tmp_tmp_msg_0_0.speed_units = 172U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9751189636961447;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4037019847687471;
    tmp_msg_0.lon = 0.29222837707261085;
    tmp_msg_0.radius = 0.4198623882923306;
    msg.reference.set(tmp_msg_0);
    msg.state = 114U;
    msg.proximity = 69U;

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
    msg.setTimeStamp(0.8305424757914349);
    msg.setSource(35357U);
    msg.setSourceEntity(150U);
    msg.setDestination(8731U);
    msg.setDestinationEntity(164U);
    msg.control_src = 33025U;
    msg.control_ent = 43U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 36U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4578768010053862;
    tmp_tmp_msg_0_0.speed_units = 136U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.21139762870027423;
    tmp_tmp_msg_0_1.z_units = 208U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.24691571833752912;
    tmp_msg_0.lon = 0.40852779440646414;
    tmp_msg_0.radius = 0.04028669123897033;
    msg.reference.set(tmp_msg_0);
    msg.state = 119U;
    msg.proximity = 167U;

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
    msg.setTimeStamp(0.04873984314637947);
    msg.setSource(37200U);
    msg.setSourceEntity(136U);
    msg.setDestination(919U);
    msg.setDestinationEntity(110U);
    msg.ax_cmd = 0.8369667326134427;
    msg.ay_cmd = 0.6779082625093147;
    msg.az_cmd = 0.49290647452054637;
    msg.ax_des = 0.7676503360384456;
    msg.ay_des = 0.5683405465413129;
    msg.az_des = 0.27372494448740825;
    msg.virt_err_x = 0.4281059108425942;
    msg.virt_err_y = 0.15340323933156275;
    msg.virt_err_z = 0.7081236413088178;
    msg.surf_fdbk_x = 0.9279841056156195;
    msg.surf_fdbk_y = 0.4362049566869911;
    msg.surf_fdbk_z = 0.7947990220736517;
    msg.surf_unkn_x = 0.13462706217778986;
    msg.surf_unkn_y = 0.3309973774563706;
    msg.surf_unkn_z = 0.002100758823069593;
    msg.ss_x = 0.5097608643022389;
    msg.ss_y = 0.09969556452135164;
    msg.ss_z = 0.354919354412647;

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
    msg.setTimeStamp(0.39676609083675496);
    msg.setSource(36795U);
    msg.setSourceEntity(195U);
    msg.setDestination(2303U);
    msg.setDestinationEntity(233U);
    msg.ax_cmd = 0.9872649948545176;
    msg.ay_cmd = 0.39752254782915464;
    msg.az_cmd = 0.46055909678674467;
    msg.ax_des = 0.16773294365290659;
    msg.ay_des = 0.8449269177700504;
    msg.az_des = 0.9999704560048978;
    msg.virt_err_x = 0.3457779008251355;
    msg.virt_err_y = 0.7523551914024235;
    msg.virt_err_z = 0.6523370552007455;
    msg.surf_fdbk_x = 0.9823960680053748;
    msg.surf_fdbk_y = 0.7072192734177076;
    msg.surf_fdbk_z = 0.29820157586730434;
    msg.surf_unkn_x = 0.2358514244510198;
    msg.surf_unkn_y = 0.5265063843857918;
    msg.surf_unkn_z = 0.2407926328535117;
    msg.ss_x = 0.13296640411525373;
    msg.ss_y = 0.905928213224877;
    msg.ss_z = 0.23378604961901284;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HNRVDKXLMSPUCLM");
    tmp_msg_0.dist = 0.1695594387767022;
    tmp_msg_0.err = 0.22783536152078765;
    tmp_msg_0.ctrl_imp = 0.9351508657504383;
    tmp_msg_0.rel_dir_x = 0.6139806672494732;
    tmp_msg_0.rel_dir_y = 0.11178906637955421;
    tmp_msg_0.rel_dir_z = 0.5884895884134086;
    tmp_msg_0.err_x = 0.7158652851510259;
    tmp_msg_0.err_y = 0.05197475396798923;
    tmp_msg_0.err_z = 0.31838651970387044;
    tmp_msg_0.rf_err_x = 0.461897575286886;
    tmp_msg_0.rf_err_y = 0.8038627377588848;
    tmp_msg_0.rf_err_z = 0.6141200882621577;
    tmp_msg_0.rf_err_vx = 0.5838468858410312;
    tmp_msg_0.rf_err_vy = 0.5724290571406009;
    tmp_msg_0.rf_err_vz = 0.44716490325418734;
    tmp_msg_0.ss_x = 0.9526265835524933;
    tmp_msg_0.ss_y = 0.6507108577606812;
    tmp_msg_0.ss_z = 0.10023669465976937;
    tmp_msg_0.virt_err_x = 0.004656350759412287;
    tmp_msg_0.virt_err_y = 0.4398846902534501;
    tmp_msg_0.virt_err_z = 0.8148390062803098;
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
    msg.setTimeStamp(0.4274674760591243);
    msg.setSource(57406U);
    msg.setSourceEntity(21U);
    msg.setDestination(41023U);
    msg.setDestinationEntity(245U);
    msg.ax_cmd = 0.3479156734017117;
    msg.ay_cmd = 0.7035783335692223;
    msg.az_cmd = 0.9820719166377387;
    msg.ax_des = 0.6145544248712272;
    msg.ay_des = 0.024452211876829222;
    msg.az_des = 0.7688063282143559;
    msg.virt_err_x = 0.6661995967546704;
    msg.virt_err_y = 0.6280689454893216;
    msg.virt_err_z = 0.2312676686025158;
    msg.surf_fdbk_x = 0.8927324210539291;
    msg.surf_fdbk_y = 0.5161298405802937;
    msg.surf_fdbk_z = 0.7915401890092283;
    msg.surf_unkn_x = 0.8266132148481788;
    msg.surf_unkn_y = 0.8973658746141866;
    msg.surf_unkn_z = 0.46536617739717656;
    msg.ss_x = 0.3851931902841197;
    msg.ss_y = 0.8156796903716845;
    msg.ss_z = 0.4706551216019276;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PVYMFRFPXGGEWZOSHZHWVLBCGRKKCBPCJRTSBVFLDNINQHJHLONCUYQUUGRAKQXGAGJMISASYPTSPEXZITCFAJMFUYKIKTDFUJGZMIFRMDZSFYUWXQMGFUVVELASAXWMDTPXKOBQMNYDZSABHLMHYWWTLRPRHEQQENOTSPREOXUYOZRCWBLIJKYYHDXTWLVQAJPAKDVLVKJQCCNEOIWJBRPDJOTNXDBMVEDSO");
    tmp_msg_0.dist = 0.7506041377329855;
    tmp_msg_0.err = 0.5128438843231353;
    tmp_msg_0.ctrl_imp = 0.4534241483113659;
    tmp_msg_0.rel_dir_x = 0.846507826196768;
    tmp_msg_0.rel_dir_y = 0.4140202062402021;
    tmp_msg_0.rel_dir_z = 0.8282927755183951;
    tmp_msg_0.err_x = 0.6171793275302498;
    tmp_msg_0.err_y = 0.05574249098126416;
    tmp_msg_0.err_z = 0.29378600000825095;
    tmp_msg_0.rf_err_x = 0.3226425383439119;
    tmp_msg_0.rf_err_y = 0.835227901226749;
    tmp_msg_0.rf_err_z = 0.0595865340286974;
    tmp_msg_0.rf_err_vx = 0.0864170633782434;
    tmp_msg_0.rf_err_vy = 0.38996086542001274;
    tmp_msg_0.rf_err_vz = 0.9289939980764356;
    tmp_msg_0.ss_x = 0.03694828934729466;
    tmp_msg_0.ss_y = 0.6581341979305605;
    tmp_msg_0.ss_z = 0.9566893526500231;
    tmp_msg_0.virt_err_x = 0.2619048481325462;
    tmp_msg_0.virt_err_y = 0.65701897147577;
    tmp_msg_0.virt_err_z = 0.4693475917122749;
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
    msg.setTimeStamp(0.5111862309815379);
    msg.setSource(21227U);
    msg.setSourceEntity(183U);
    msg.setDestination(4288U);
    msg.setDestinationEntity(51U);
    msg.s_id.assign("FXXSRKDITXJCNCDJRLNOSPPUMTKXVNNIRCLZIOUPJOISMA");
    msg.dist = 0.612168727217625;
    msg.err = 0.5862624640393138;
    msg.ctrl_imp = 0.5500885096460988;
    msg.rel_dir_x = 0.5581928810045372;
    msg.rel_dir_y = 0.24533280969368731;
    msg.rel_dir_z = 0.7296236534949748;
    msg.err_x = 0.9681641409201196;
    msg.err_y = 0.1235792262259281;
    msg.err_z = 0.5947747160330522;
    msg.rf_err_x = 0.5541521591485641;
    msg.rf_err_y = 0.7510259588362893;
    msg.rf_err_z = 0.2955941174297789;
    msg.rf_err_vx = 0.9029170858385032;
    msg.rf_err_vy = 0.04913599262724744;
    msg.rf_err_vz = 0.9439908095745879;
    msg.ss_x = 0.5984127935139507;
    msg.ss_y = 0.11809795696795322;
    msg.ss_z = 0.2626942865265609;
    msg.virt_err_x = 0.2562778621994498;
    msg.virt_err_y = 0.6909025986956422;
    msg.virt_err_z = 0.632971866605473;

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
    msg.setTimeStamp(0.3103240999999669);
    msg.setSource(59041U);
    msg.setSourceEntity(88U);
    msg.setDestination(7033U);
    msg.setDestinationEntity(24U);
    msg.s_id.assign("DWZLXOLNRXFRGDMYJCSDFNWUTKYUZZOBCPYHABPZYONROGMBUETCVJIAXFPDPDDPBQEDUMOAYIYLHQADEZSQZAETJPQLSIKHTVMOEBVKDKKGSNIOHJTBEJDMHAJQNWWMVEWYWELUBO");
    msg.dist = 0.8152187450079269;
    msg.err = 0.6742412130556223;
    msg.ctrl_imp = 0.9619065517145466;
    msg.rel_dir_x = 0.5003905270034206;
    msg.rel_dir_y = 0.8676038151063614;
    msg.rel_dir_z = 0.13509338054989695;
    msg.err_x = 0.6568718333250925;
    msg.err_y = 0.7158069029483726;
    msg.err_z = 0.5430603717987208;
    msg.rf_err_x = 0.5406747531396051;
    msg.rf_err_y = 0.21709764857952185;
    msg.rf_err_z = 0.9312349744310484;
    msg.rf_err_vx = 0.5095498977641572;
    msg.rf_err_vy = 0.07497277988496465;
    msg.rf_err_vz = 0.11072554818380531;
    msg.ss_x = 0.14027108241277186;
    msg.ss_y = 0.19717288555634926;
    msg.ss_z = 0.11372178989811643;
    msg.virt_err_x = 0.8595247412608749;
    msg.virt_err_y = 0.8347588098016134;
    msg.virt_err_z = 0.039914588663333306;

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
    msg.setTimeStamp(0.09847266311729341);
    msg.setSource(65270U);
    msg.setSourceEntity(149U);
    msg.setDestination(42271U);
    msg.setDestinationEntity(160U);
    msg.s_id.assign("ODNULDBTTCNGEDDNWFATEVBTIRGTDYIUIHQOQHKFWDVUFVWGHEZRKXGFKCSYEF");
    msg.dist = 0.45824189581139474;
    msg.err = 0.09347924003464303;
    msg.ctrl_imp = 0.7492310009924724;
    msg.rel_dir_x = 0.1608552499589796;
    msg.rel_dir_y = 0.6205298526498041;
    msg.rel_dir_z = 0.6570784386093039;
    msg.err_x = 0.9644968191024654;
    msg.err_y = 0.28307302973276516;
    msg.err_z = 0.45042347848007047;
    msg.rf_err_x = 0.5848138907598661;
    msg.rf_err_y = 0.09330636169632078;
    msg.rf_err_z = 0.9463846990196831;
    msg.rf_err_vx = 0.8716645003967685;
    msg.rf_err_vy = 0.6617899392378713;
    msg.rf_err_vz = 0.044426985708115985;
    msg.ss_x = 0.07856321753469053;
    msg.ss_y = 0.15642347679943625;
    msg.ss_z = 0.778209778468483;
    msg.virt_err_x = 0.6693361146096288;
    msg.virt_err_y = 0.35853853305980943;
    msg.virt_err_z = 0.5862329642293583;

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
    msg.setTimeStamp(0.7071793413176731);
    msg.setSource(56744U);
    msg.setSourceEntity(72U);
    msg.setDestination(35212U);
    msg.setDestinationEntity(62U);
    msg.timeout = 37321U;
    msg.rpm = 0.0439645437234617;
    msg.direction = 147U;
    msg.custom.assign("NSYCWDFQKJVECQVKNQNPNXBDYFORAWUIZWGGTVKXJUPZQYHRNWDLAGABZLUJYSBEIPDBAIPQWLUIVCUBZZVCWHHMHJDXNXDBITNDZSQAMPFELTSBIEOCSNWORGGVPLIYPHYXXYJLMPGFKASCWOZKKBXAVEFBFKKQPBSTGJJIMIKXJVAYODOTEYCTEZHUURODTF");

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
    msg.setTimeStamp(0.45019291573038833);
    msg.setSource(24061U);
    msg.setSourceEntity(97U);
    msg.setDestination(47092U);
    msg.setDestinationEntity(205U);
    msg.timeout = 40956U;
    msg.rpm = 0.23118847276596521;
    msg.direction = 15U;
    msg.custom.assign("BEQZDYLQMHRXMHTVLMVGLPPGGBGYNTINOZYITWYMQQBFACOZAAGOHSTKZA");

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
    msg.setTimeStamp(0.6233960629003894);
    msg.setSource(29808U);
    msg.setSourceEntity(16U);
    msg.setDestination(60044U);
    msg.setDestinationEntity(210U);
    msg.timeout = 62557U;
    msg.rpm = 0.6187949043827154;
    msg.direction = 87U;
    msg.custom.assign("TEONMWOTYDPWGXXTGJDFMSOBLEYQKTGATGDKGKEKPRPMSUOZFDITYVYBQNSXSVUKRFRFRVHUNCVXUYCIOHCVWUPZJKJKRQLBCGHIHDZALNEVWBBMLGITJKFEZBHVAXVPQQJNVKTAQCKXJI");

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
    msg.setTimeStamp(0.7635858023175377);
    msg.setSource(48909U);
    msg.setSourceEntity(84U);
    msg.setDestination(40724U);
    msg.setDestinationEntity(55U);
    msg.formation_name.assign("PLDRTKXPAYOEWIAKMRYCKRCQBTDHLFAHKFQUXCXOGDGLFRIVEZOEFMYGBMTBRRMYNXNTPHFPJCXYQJBPOAABMMGHUCYZWVNRIXLTQFKPSJUVSOCGXYRQGQSASXSJOKVEUALEKUIIDNKVYODZWUHNSVZJZSWIGZTZKUCJTHYWQOBAHPLPPIEENVWWDJGMWBDIVULYBDFFQDKNASLMVLSSCCOTNWULAHTBEWUHVIXZBETIRMQZEFNCONGXQJFJJZ");
    msg.type = 229U;
    msg.op = 16U;
    msg.group_name.assign("QNWQFJGOEJIKGQYFVUBCKREHELJSDCHWMSPRSFKQFLWDTYFWDJTGJXMTUOYDIZUSUWOCENHRAYZAAAUYEUN");
    msg.plan_id.assign("SQITBTATUNEFRVJIKNHUQVLEMXPBFEJGBJZTBPPJPCRCWOZVQVQCNUKQWTLWLBDDDOSMJZMBDTUGPKEZQXDODIGNIEPOKTDROXCHKUWTZWFBNNPMRAFJCWFZEY");
    msg.description.assign("SJTELDDMUBKFKGKOXGLXNBRRCBQSMYDCXKETARDKQOKQYKYXIDTPVHGUHRBOHMVGGYVNXZHQSMPTXFPZMNRYBTAZRJUPUIQSDILXFYNFRVLOVWWUBQHIGEXBUGPOSVVPZZQTWZCLZJXUHERVMDVIEKCDFPMORIGDQYJYLCAOBNOUXTVJSPT");
    msg.reference_frame = 209U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55099U;
    tmp_msg_0.off_x = 0.1139074696916309;
    tmp_msg_0.off_y = 0.06380177616615834;
    tmp_msg_0.off_z = 0.5794622751093108;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9732668751588976;
    msg.leader_speed_min = 0.8111167212859778;
    msg.leader_speed_max = 0.8531985922621076;
    msg.leader_alt_min = 0.632640802048737;
    msg.leader_alt_max = 0.748626128481629;
    msg.pos_sim_err_lim = 0.576268162890657;
    msg.pos_sim_err_wrn = 0.08450958346406268;
    msg.pos_sim_err_timeout = 57249U;
    msg.converg_max = 0.08961076119672695;
    msg.converg_timeout = 65136U;
    msg.comms_timeout = 10335U;
    msg.turb_lim = 0.0708924647132756;
    msg.custom.assign("WPIHBLWZASVLPFOMRATQRXBWNTXVFTAGKUKMTNRMVJPUINUUYYMGDKMWVCCFYBZGDLEZXNQEOJNUQRQYHPVQBXEAZTOPFRIBEKGTPJZYCQGNMYXDTKNQJEJQDQAPWOSNFRSOHTJLDOQBHRZDCACFEHIXOMADBDDHXHRRHKRSUPEWFVOXTCGNMIVYLBPDJGSKMOAVCHESSVGVABXTF");

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
    msg.setTimeStamp(0.910175701769143);
    msg.setSource(40295U);
    msg.setSourceEntity(215U);
    msg.setDestination(55530U);
    msg.setDestinationEntity(162U);
    msg.formation_name.assign("JOKVVTUBGHWIW");
    msg.type = 3U;
    msg.op = 48U;
    msg.group_name.assign("UTHAVOJCMPQNKOJEJNCRNZHGHOUIIWBXSXPSAZGHNYXUAOHZWXWZQMMAEGDWLEVQDIDVCMQVHRQUHVWNQDCFASZPTNYSXPKXNXECSRBDHBXIGGZVGEKYCFQJKLMFSBTFCQZKQUKIBYYODNSGBACOEFHSPYGYWUTGYBDKIDXRQBJVLJVBALDVWFLAZKLEDTCMUPWRBTWEXNIEPPAFOMMFYTLJRUPMYCONFTTVJGRRZOFWKPM");
    msg.plan_id.assign("ZULZQUQBUVWZDJFKPQWZLPPSXAOXLXJBBHZANGKCQEXSFJIJITYRRDKIKPMAFLGBJXKIWBWTNSOUEYMAZOSEPVFABISGQTTUYHQDUDXHRGHYAVFUTYNMQRMHKNKCJOWSDHIPHCVORXSHGCKJDTIETOOEOELCFYWJAJMGOBFTREGFQXNAMWNGTEIYLMRKYALFPAUZEIBCYMPOIMVNFCYLVHRRVVCCRDZBXPWDNZ");
    msg.description.assign("SUHDGPXISBQFJWLMDXVUYZGZOCKWCVKQBBSZRUFBQZOXJYWAAHAATAOXFUITTXMQQQLREBCKRIAVTBPKWOGWDDVNQOTETJFIARKOPPUTRIERQVPPURZEYXFOYZFYHTBDDCJADXDNKSJLKAHRWMLPAZLHMYDIMIIUVMCYWOSEZNFVUEGCOGMUNSGNLBNZMBLXTGIKDTEOI");
    msg.reference_frame = 140U;
    msg.leader_bank_lim = 0.18707045841151126;
    msg.leader_speed_min = 0.9636286929565416;
    msg.leader_speed_max = 0.10319528859585914;
    msg.leader_alt_min = 0.3978424697900861;
    msg.leader_alt_max = 0.9139836961134278;
    msg.pos_sim_err_lim = 0.6473625913460118;
    msg.pos_sim_err_wrn = 0.23694953888479187;
    msg.pos_sim_err_timeout = 48763U;
    msg.converg_max = 0.24418971922535093;
    msg.converg_timeout = 56760U;
    msg.comms_timeout = 4059U;
    msg.turb_lim = 0.286306941565884;
    msg.custom.assign("PTUGSZPEJRUPPOQTHXJPHVHWMEJTLRARVILLLOHVANAPROHCJKNRUNTSUINMDBQQKMXKHIZDITUXZIUEUZOFKLSSXSLGQJWCNKYZCJERAMCBEODPZFHUFHDBHLZAQCGFYMEYWGWITLRTKMCCJYKVWLBGFHAZFAAQYYIZGFVFM");

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
    msg.setTimeStamp(0.7288567281744428);
    msg.setSource(12395U);
    msg.setSourceEntity(174U);
    msg.setDestination(17166U);
    msg.setDestinationEntity(237U);
    msg.formation_name.assign("ORNIUODODBYNEYCXBVVLWZENBAVXGCYCHAUSFUYXTRMDPLWQNCGJNBZWSAKCQZUGBSAHBUSROJVLKUWOYDMFLIGSXOQGERFFZPJPTKRATZVDFRHQTTBIEWIQAZTPMGFUKWUEPEFTILVLMSJGOVARGLLDKPXYHYBM");
    msg.type = 143U;
    msg.op = 11U;
    msg.group_name.assign("IRXSAFTZPQAPICYTFUUMWLXRTHIZQOADDEMUZSYVXRNKKKLJQFXQUECCWECXMYMJWIDLBHLGHXFOTFGMCBCHFOYDPBVPZMIHGVAVZBIJXDGVUQLDTJLGPWREFWEURMQJRSVMOTAOUKGFDLUGHRSQPQWXNDSPSOSKKXAKLFN");
    msg.plan_id.assign("RPPKFCOJHZYYTDTWNKECWXXLGCVQZYLEDBQTYIIYEFJOAUQHVEWKDSNLQVDHUFUNPGVNXEQPJFMWPEUEVRNKRDJIRUEZLUBCNLDUJOFZDYARMDTLVHPXCYFQKDAFCKBOILNOCEAIBJTPTGXXHSCAZJLHYSWUBPGICRSSMOHOXSBAPOGTHHBBMOWGOKMZLAWDZANSJPIITGZRMSQNVQUFEISIXBNKMYJRWLW");
    msg.description.assign("TOVGABIODMJXEFNILTUYVNQCACGQBZZIIYCKKGLJHZHXGEEEAHHNCRJBAULDECBZXRQLIAYJSSSBLQOXDVCUWPOBIPGWRVFDHFZNBXTEHYUFKKHOPLQE");
    msg.reference_frame = 16U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26802U;
    tmp_msg_0.off_x = 0.004469667658561383;
    tmp_msg_0.off_y = 0.6206236721163191;
    tmp_msg_0.off_z = 0.895630084682155;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4610519832025378;
    msg.leader_speed_min = 0.5104111699378283;
    msg.leader_speed_max = 0.7303252180860782;
    msg.leader_alt_min = 0.04233272373605679;
    msg.leader_alt_max = 0.4857112494685982;
    msg.pos_sim_err_lim = 0.17106844964340018;
    msg.pos_sim_err_wrn = 0.4388131462385979;
    msg.pos_sim_err_timeout = 29259U;
    msg.converg_max = 0.8440688208214411;
    msg.converg_timeout = 10637U;
    msg.comms_timeout = 56175U;
    msg.turb_lim = 0.9807570861154589;
    msg.custom.assign("CRGFQQTKHLGQIIDNCSGALBLWEESMOAWOHNHXUTTXCFYGIKAFJHILONEEVRBSNOWDHREUXUJDBUQCBOHVXVWGVEATKAFILWLDSKAJYODPVMIZKMFLUMNNMBTXXCXGYZKOJYQZKPPXRVYIRHBUPFDRQWRTIFNAVCJTWZKPMYZLGQTUNATMCKYZHDNOVTWZGGWXVFIXABJYWSUBIZYSPCCQDZMQGCEUBFNPSLQH");

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
    msg.setTimeStamp(0.827962528735346);
    msg.setSource(10494U);
    msg.setSourceEntity(200U);
    msg.setDestination(13442U);
    msg.setDestinationEntity(217U);
    msg.timeout = 12442U;
    msg.lat = 0.8028297531193191;
    msg.lon = 0.7186447511410541;
    msg.z = 0.08528237179092113;
    msg.z_units = 50U;
    msg.speed = 0.5176418366638499;
    msg.speed_units = 224U;
    msg.custom.assign("USETEBWFRTKIDYOHGWJNFDMTWSORKSZDSHVZNAXABMYKDLUVZZASUERLSOVMAPHPJEOJDQLXJXHKMMILKXCZTPXBWQCFWOPTPICQETRYXONZALXYRGHYTKHAPHMJWUSAEBIYEDFCWQDHLZRJICBYFJILDAQFULBWUNLJPNOWXHIAVQ");

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
    msg.setTimeStamp(0.8988309980398023);
    msg.setSource(54647U);
    msg.setSourceEntity(98U);
    msg.setDestination(49513U);
    msg.setDestinationEntity(142U);
    msg.timeout = 5786U;
    msg.lat = 0.7444459400496538;
    msg.lon = 0.01951159273867753;
    msg.z = 0.49479712349377725;
    msg.z_units = 77U;
    msg.speed = 0.3349995625923483;
    msg.speed_units = 73U;
    msg.custom.assign("ZZHWSPITSYZFSRDVYS");

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
    msg.setTimeStamp(0.3034067304391196);
    msg.setSource(19767U);
    msg.setSourceEntity(249U);
    msg.setDestination(2618U);
    msg.setDestinationEntity(11U);
    msg.timeout = 63754U;
    msg.lat = 0.5337270291102492;
    msg.lon = 0.4480850006501208;
    msg.z = 0.8015421368271467;
    msg.z_units = 183U;
    msg.speed = 0.5562044541391149;
    msg.speed_units = 26U;
    msg.custom.assign("ZAKRQKFBBMJKEUWDVJMALICREUOBVYGYXFXFQXZLZNEJKKQUPWAJOXWWBEHUHUPHPUSD");

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
    msg.setTimeStamp(0.19730039564184199);
    msg.setSource(12801U);
    msg.setSourceEntity(124U);
    msg.setDestination(35462U);
    msg.setDestinationEntity(45U);
    msg.timeout = 15579U;
    msg.lat = 0.047361065967038485;
    msg.lon = 0.020338062576666704;
    msg.z = 0.6661707682910307;
    msg.z_units = 38U;
    msg.speed = 0.15365564241283836;
    msg.speed_units = 22U;
    msg.custom.assign("SFRMPKHPXXVMTNKQPVKATTAYOCTHWHICVTCKFLEIECWWRMERUMGYENHJXEYJCAZTINAPJLGXBSDHWVVEBJJZDFTYOFYIWODQGKNVQVREXNEXSVLKCOQNYVSJOMSOJYFLIQTDFAIRPZQOLALDSQGIHGAQLKDPKNBZHDBANFUUMBSXAVKFTWIMTCZGJXKLHBLBGPEUHLRBW");

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
    msg.setTimeStamp(0.5700268647372784);
    msg.setSource(28117U);
    msg.setSourceEntity(103U);
    msg.setDestination(47153U);
    msg.setDestinationEntity(186U);
    msg.timeout = 13651U;
    msg.lat = 0.24300473036979386;
    msg.lon = 0.6702053870781192;
    msg.z = 0.5112292541102245;
    msg.z_units = 112U;
    msg.speed = 0.6594365886948733;
    msg.speed_units = 173U;
    msg.custom.assign("TWNKCKEZOPMCBZJWTPWGGIRLHQMKAALUNSNBHNLQNHHIRSYRUBJXDUIVFODJDTKHYHPLVADOAXVNJSGTVPKRYOGKDUIICPLDVJFERMZAPDEVKGOBQ");

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
    msg.setTimeStamp(0.15227089219752443);
    msg.setSource(64636U);
    msg.setSourceEntity(109U);
    msg.setDestination(20102U);
    msg.setDestinationEntity(157U);
    msg.timeout = 39896U;
    msg.lat = 0.603299350065413;
    msg.lon = 0.6858034449025571;
    msg.z = 0.11124549311004639;
    msg.z_units = 132U;
    msg.speed = 0.6860089604184967;
    msg.speed_units = 75U;
    msg.custom.assign("SYAMSEDRNJPOJSNPGWXXZMVRCAIVBPHZZWRLPOIQQGUDLXHYOPAICDLVRKFISJSJTQFDAWNANMZLMLZWGYCCAEPTNQQFCOKYVIBHDMTCRQJEHYZRWIPUBTKYVPGUHBVNIYEGLMVDZPOAMLUHSWBLHLXMVXHUZBGORCTDWANGXOKYTJKGXMQBGEONTFHSDTWKKEJNSHAJCYJFQUERDABZIXXTMV");

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
    msg.setTimeStamp(0.3898406508686849);
    msg.setSource(10877U);
    msg.setSourceEntity(108U);
    msg.setDestination(23591U);
    msg.setDestinationEntity(157U);
    msg.arrival_time = 0.42174180093984226;
    msg.lat = 0.19229221637488858;
    msg.lon = 0.6801104115174214;
    msg.z = 0.2717318946064541;
    msg.z_units = 171U;
    msg.travel_z = 0.3017944358526311;
    msg.travel_z_units = 123U;
    msg.delayed = 247U;

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
    msg.setTimeStamp(0.1263378960351781);
    msg.setSource(54946U);
    msg.setSourceEntity(163U);
    msg.setDestination(39553U);
    msg.setDestinationEntity(159U);
    msg.arrival_time = 0.11436378056664931;
    msg.lat = 0.5257414003359723;
    msg.lon = 0.1754047093796317;
    msg.z = 0.9163089719238143;
    msg.z_units = 31U;
    msg.travel_z = 0.8013419319124748;
    msg.travel_z_units = 54U;
    msg.delayed = 102U;

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
    msg.setTimeStamp(0.381155885551559);
    msg.setSource(35797U);
    msg.setSourceEntity(89U);
    msg.setDestination(3267U);
    msg.setDestinationEntity(109U);
    msg.arrival_time = 0.8172959622200177;
    msg.lat = 0.5608670199709155;
    msg.lon = 0.5906524467189918;
    msg.z = 0.49409119546299696;
    msg.z_units = 113U;
    msg.travel_z = 0.6525576434567928;
    msg.travel_z_units = 127U;
    msg.delayed = 116U;

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
    msg.setTimeStamp(0.888069663473099);
    msg.setSource(23440U);
    msg.setSourceEntity(157U);
    msg.setDestination(44907U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.35249355607718724;
    msg.lon = 0.24712379180777688;
    msg.z = 0.6235452893603325;
    msg.z_units = 58U;
    msg.speed = 0.7988222152150469;
    msg.speed_units = 128U;
    msg.bearing = 0.030499220444114572;
    msg.cross_angle = 0.8387525719150639;
    msg.width = 0.9355323051962298;
    msg.length = 0.6716235411656074;
    msg.coff = 167U;
    msg.angaperture = 0.3153043037444002;
    msg.range = 58942U;
    msg.overlap = 30U;
    msg.flags = 156U;
    msg.custom.assign("ELYRYRTWXSLSNDIENNSYDVHNRSKEBUUIAUTJCKITYDTQJVALUNUKVZPLYWOFTBOZFMBPNPOZXQ");

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
    msg.setTimeStamp(0.5336234446954057);
    msg.setSource(20676U);
    msg.setSourceEntity(140U);
    msg.setDestination(13321U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.7379586967363528;
    msg.lon = 0.8016666092500019;
    msg.z = 0.8226915739295605;
    msg.z_units = 99U;
    msg.speed = 0.8726101075873218;
    msg.speed_units = 70U;
    msg.bearing = 0.08469720012562221;
    msg.cross_angle = 0.1574271294809636;
    msg.width = 0.6413153105678001;
    msg.length = 0.04828185940838747;
    msg.coff = 189U;
    msg.angaperture = 0.6355696937827313;
    msg.range = 40741U;
    msg.overlap = 50U;
    msg.flags = 213U;
    msg.custom.assign("PIGKSTCSHXPTMXFWFQMAVGCODMSHMPDVZTUAMIQIQNRFENRTYKXSHJEUWJCOZLVJTWBLHENNANEOSBRZSIOXHKRACAIJTRSLKFFARRYJFLXCZLAGMMAXQOYMUKZXYEN");

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
    msg.setTimeStamp(0.7163005998343581);
    msg.setSource(11570U);
    msg.setSourceEntity(215U);
    msg.setDestination(18248U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.885659675433194;
    msg.lon = 0.774200092735902;
    msg.z = 0.729708460873075;
    msg.z_units = 79U;
    msg.speed = 0.40409560656255916;
    msg.speed_units = 232U;
    msg.bearing = 0.567024155842497;
    msg.cross_angle = 0.7394603207393557;
    msg.width = 0.027052360051962543;
    msg.length = 0.3543756431670504;
    msg.coff = 134U;
    msg.angaperture = 0.6264456849848438;
    msg.range = 26323U;
    msg.overlap = 228U;
    msg.flags = 212U;
    msg.custom.assign("EZQOWSPADJNKBECGSGUZISBWXTDZBHSQFXJOYYQIGDCMAVIOHQRHVVFVRMYCTHOUJTWPRNHTYZUUVAJLCRAPXCXSKSELMKAUOBKJYHETPDEALDZPKJQZFKGRLWYCOHEQIIGJAZXUGMSWZPWIMRLMXSFVKONBMQIECITURCNBGNUWSHCXYPKEDUANXYGMDNJAFFEGRBBTJFTVNGBTIXXMABTWFF");

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
    msg.setTimeStamp(0.5276213387010257);
    msg.setSource(8344U);
    msg.setSourceEntity(238U);
    msg.setDestination(44467U);
    msg.setDestinationEntity(111U);
    msg.timeout = 16341U;
    msg.lat = 0.44184227909054685;
    msg.lon = 0.26028570972043374;
    msg.z = 0.3531864752319084;
    msg.z_units = 165U;
    msg.speed = 0.33356390033210637;
    msg.speed_units = 90U;
    msg.syringe0 = 53U;
    msg.syringe1 = 59U;
    msg.syringe2 = 47U;
    msg.custom.assign("DJUPCIIRFLHNFCQOBSWTXVHGHDVFNYSYXYFZAGMLBVMKBFIAXYVQJRZDIADTNZXTGCPCSWHGGIKJBKXQYQRXYHO");

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
    msg.setTimeStamp(0.2641874734162356);
    msg.setSource(22346U);
    msg.setSourceEntity(56U);
    msg.setDestination(35562U);
    msg.setDestinationEntity(158U);
    msg.timeout = 3923U;
    msg.lat = 0.3890805731044771;
    msg.lon = 0.19927308911487007;
    msg.z = 0.39537078162953665;
    msg.z_units = 53U;
    msg.speed = 0.8227004313328646;
    msg.speed_units = 245U;
    msg.syringe0 = 191U;
    msg.syringe1 = 230U;
    msg.syringe2 = 2U;
    msg.custom.assign("HHLMWGZNDWSDAKPNCBKSMHTNFYQQIBQOQOPGRYICCEZAJCWRUVXOXBDDEMOJIWGXWSFCZHEKVEOJONMS");

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
    msg.setTimeStamp(0.40842189223404524);
    msg.setSource(18208U);
    msg.setSourceEntity(66U);
    msg.setDestination(28267U);
    msg.setDestinationEntity(48U);
    msg.timeout = 21086U;
    msg.lat = 0.6286171657221908;
    msg.lon = 0.5902881791709103;
    msg.z = 0.26864523870483337;
    msg.z_units = 17U;
    msg.speed = 0.6068370982683592;
    msg.speed_units = 83U;
    msg.syringe0 = 26U;
    msg.syringe1 = 197U;
    msg.syringe2 = 114U;
    msg.custom.assign("WLAZZUGIZCJRDQFPUAZVFUKRQIMDVKJVIPFQDPJXRWJZBVECIM");

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
    msg.setTimeStamp(0.46286461177300553);
    msg.setSource(57808U);
    msg.setSourceEntity(142U);
    msg.setDestination(53469U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.8322214052375405);
    msg.setSource(37252U);
    msg.setSourceEntity(133U);
    msg.setDestination(54119U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.7358245505783687);
    msg.setSource(49U);
    msg.setSourceEntity(243U);
    msg.setDestination(41462U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.5704920084635741);
    msg.setSource(37503U);
    msg.setSourceEntity(229U);
    msg.setDestination(9139U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.2170253842062132;
    msg.lon = 0.8317729201059844;
    msg.z = 0.5483871544629556;
    msg.z_units = 146U;
    msg.speed = 0.7672566362311858;
    msg.speed_units = 136U;
    msg.takeoff_pitch = 0.9890045856153294;
    msg.custom.assign("YDRIAVQLLVLRCEDUXTUQXZFWHJUJPDNZXOKIFIJBOBRUXUSMTMYZOPEKQLNCBAYEIM");

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
    msg.setTimeStamp(0.8394311816451041);
    msg.setSource(50279U);
    msg.setSourceEntity(128U);
    msg.setDestination(51112U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.1884482374610702;
    msg.lon = 0.5636860453360489;
    msg.z = 0.7084046991571976;
    msg.z_units = 121U;
    msg.speed = 0.3088981656838342;
    msg.speed_units = 65U;
    msg.takeoff_pitch = 0.3712166092062259;
    msg.custom.assign("QWUDYORGMDYMVDISEZBTHWLTJCKSUIZTGCFQJKDARHXJWMIQKMYJNPAHSIBNCAUFVQOKZJZJBGHXRMYMRWILWFVKIDGFSWATPPGKOPCUAE");

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
    msg.setTimeStamp(0.5999772387230248);
    msg.setSource(37295U);
    msg.setSourceEntity(10U);
    msg.setDestination(49910U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.5955575899572483;
    msg.lon = 0.5768791036724421;
    msg.z = 0.8374225062439842;
    msg.z_units = 246U;
    msg.speed = 0.06402066656506511;
    msg.speed_units = 122U;
    msg.takeoff_pitch = 0.8450175543827211;
    msg.custom.assign("VDVKOMGWIWJFHKCSGVWOQGERKMNIAIGSXCXQJEYFMZKOEAFPPLRDDXBFGTWWEUUYGIVQTLVJBETXYWMKSJ");

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
    msg.setTimeStamp(0.38872043595237915);
    msg.setSource(5627U);
    msg.setSourceEntity(64U);
    msg.setDestination(26255U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.41852896024380437;
    msg.lon = 0.9869203720453201;
    msg.z = 0.3316469603952844;
    msg.z_units = 65U;
    msg.speed = 0.853025759554497;
    msg.speed_units = 27U;
    msg.abort_z = 0.8894151584701626;
    msg.bearing = 0.795400750463488;
    msg.glide_slope = 131U;
    msg.glide_slope_alt = 0.6574677706761479;
    msg.custom.assign("MHXJSZOSLIXJMYBTRMVWIESTEGIHLBZRXPLEVNWTXBNCMOGORCFSDAGAYANLZMFFRBCDUXPJXXHWFTEWCDCUTXHKJYHKACOBXZYZGRGCONSYVGAUCBSZFFIEOIGSMWUNVWRKJQSFBMEYMMBGMQJHJLIEPQHPTDGKFFFDUILY");

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
    msg.setTimeStamp(0.7494923455390763);
    msg.setSource(44868U);
    msg.setSourceEntity(133U);
    msg.setDestination(55180U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.8498939943285408;
    msg.lon = 0.20159589683975476;
    msg.z = 0.1347419546392019;
    msg.z_units = 93U;
    msg.speed = 0.551758845016148;
    msg.speed_units = 214U;
    msg.abort_z = 0.5716340674502316;
    msg.bearing = 0.44161993753746276;
    msg.glide_slope = 153U;
    msg.glide_slope_alt = 0.9568461074585539;
    msg.custom.assign("WBEQFFVFLIAPAWZDSYQNORIXYUWMJRHNGFBTSUYMVUJFPWWDLHADQMXHOGCU");

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
    msg.setTimeStamp(0.4980840964225062);
    msg.setSource(1487U);
    msg.setSourceEntity(153U);
    msg.setDestination(33636U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.6748311558712373;
    msg.lon = 0.6130375691181911;
    msg.z = 0.21974200443705905;
    msg.z_units = 0U;
    msg.speed = 0.052379324984732745;
    msg.speed_units = 182U;
    msg.abort_z = 0.10082854316270362;
    msg.bearing = 0.08871941990667187;
    msg.glide_slope = 73U;
    msg.glide_slope_alt = 0.9692320940615112;
    msg.custom.assign("IFNBJHEPQNGDPGQNHHGUNWLACFYIFSRRQKJWZIYFZKBOTEKZDSNDDNOQMEHXXUDKYAFDGGHLPKYHQMAUCBBVGDOSXXYRCMSIMCTUWMBYPZVQVVGCGQALLHVINJSAXMRGECIKXGZFJSEMOXCVLVUUEZRFYAZOESFWXPRAHWNCLTEQCTQHXQOM");

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
    msg.setTimeStamp(0.16010829671315718);
    msg.setSource(58196U);
    msg.setSourceEntity(131U);
    msg.setDestination(19867U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.8082740647739197;
    msg.lon = 0.6322781541735598;
    msg.speed = 0.032793315854642735;
    msg.speed_units = 207U;
    msg.limits = 8U;
    msg.max_depth = 0.8752282757113276;
    msg.min_alt = 0.5634180731526477;
    msg.time_limit = 0.40807318617640775;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.479852073835924;
    tmp_msg_0.lon = 0.9183986362005784;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UXYLJKWVMEYRAUCEVCGWLYLQXKFDDTJZQMKBBSWDIMZBHFFXTRZJIKDESXUMJCQPHMHDRIJLAWFVGHLLGJXZCAJNLYMJNPQBEPKOVNRXCWIOXBKGHIURCCOVNDRUAZSFEBUTBQGBRYDQCTNFPDWKPSAWWDDLHFEUGTEPOUSOYTSOIZUTOQKCPMSZAZSSNCQVKKNTPLHZUBFEANPXNTWQTSVXEV");
    msg.custom.assign("FFZSNRWPCIJJWHPULMFVBOYMEUKZWFKOJIZQEAMACSBGXJPBCQDGBJTURBCFEGURBKFIAYZESPBCQXALYGZRXQQDXYDSKJXCKJMRNFZDURGGVDBEFHUBLTKLTAOSSIEOOGECDMHSXHUNTZVIBLDTONXNACSMGXTVMOCPAV");

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
    msg.setTimeStamp(0.36099590342274057);
    msg.setSource(32959U);
    msg.setSourceEntity(112U);
    msg.setDestination(14600U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.6096275717166416;
    msg.lon = 0.6807636405094039;
    msg.speed = 0.8431570543005611;
    msg.speed_units = 139U;
    msg.limits = 32U;
    msg.max_depth = 0.3121603666056383;
    msg.min_alt = 0.7960732311396099;
    msg.time_limit = 0.6871157024434953;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.20198684659840505;
    tmp_msg_0.lon = 0.4581292897018604;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TSMDYCUNAFCUXXKNJQRJNMCDPSZBZDPWMNKWVHGTTG");
    msg.custom.assign("YJCAWKUGVYSMGFWXZKHTPPKSUCUZUTJTRJASOGSIDPBCZOYCJXATERPYUGUIDNXMDSYLPKPDZISVNAHHIFYZRDVHGMTVKKSMLIZKLPWBCRWIHSOQAWAXZEAEQBGTGMDGJWLOFDPNBLHWJWMTUVOQVTNFVROQREFHEVFTZYBDXUJGCAMBJZWDCBYQJVXGPECIXANSMYERUMNKNRF");

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
    msg.setTimeStamp(0.6430778071109907);
    msg.setSource(45904U);
    msg.setSourceEntity(98U);
    msg.setDestination(56317U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.6338512301575511;
    msg.lon = 0.473745618249957;
    msg.speed = 0.30223056308984997;
    msg.speed_units = 172U;
    msg.limits = 84U;
    msg.max_depth = 0.28237699281967155;
    msg.min_alt = 0.5877527532027913;
    msg.time_limit = 0.5920886460161943;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4995318220584112;
    tmp_msg_0.lon = 0.47753327531980694;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("IXCOKTTLQJMVGWVEWLPRSFBIPNHXCRBMHIUKWNOVCQNEPBWVMYGLZRUFLFWQAEYMGNDCJHBZCTFJQAYKZUFXELSLUFANXBPVHOJGLFXVNXOPJSUERTETBFHQXVCCRNUMISXPOYGTDZRATWVEOUGNEBMZHRKYDBCSGIUWBQCCLYQZYMQEOGKKIAFOVZTMKMIPIUOSISZLDAJAVXADPKDYSSK");
    msg.custom.assign("UWMAXBNQIAKNSNGQKHZMACZRDSXAZAOZULEKTRDJYDCLLIVGWHLSUJHYLGBRHROMOMXJDOSASBBNXFUNBMMFKLVEOBCHWPUORDMBT");

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
    msg.setTimeStamp(0.7130870987263159);
    msg.setSource(43571U);
    msg.setSourceEntity(172U);
    msg.setDestination(51825U);
    msg.setDestinationEntity(155U);
    msg.target.assign("NEUVXADFVBRAEPRVDSGNXZZLQABVOEUJQFVJJKFHQMMSHTAYNMQLETJNFRDTLRTQNCKFFYGRJSIVOEFDICNCZJLQMCKLJKBHSSLUZXTOUNUWKTSMKGMIUNTYWADJPIPOUVPYAYDHDAPPOZQUSVCHX");
    msg.max_speed = 0.057129451523131425;
    msg.speed_units = 70U;
    msg.lat = 0.6909042962292735;
    msg.lon = 0.43886512499770736;
    msg.z = 0.873899479260993;
    msg.z_units = 151U;
    msg.custom.assign("AWOHPQLYDJIFBSUWDVCCBXKXWWMYVHIOTDXKXEJBFIHNVXEHOUQCPIITKLRTZMGJBWSADSDAQEEONEJFAPZNTYMXSHCOMSDOVQCTAMXWXIPEMPSEYCURHVWILDGVYQURTZTHRSKZDYBKLXGBJQRLFULNGIFKJIGOZU");

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
    msg.setTimeStamp(0.5839490468196377);
    msg.setSource(53228U);
    msg.setSourceEntity(195U);
    msg.setDestination(21914U);
    msg.setDestinationEntity(188U);
    msg.target.assign("XCZCVMKZTBNASTCYLOXGHJLNNGDOAXJURWHHUYAOOLVWYNYIDMRHHWIACIPQVKDPRLYDRTRUAFPRVXSCQXHTSJIEMZSQMXCPZSPCRTEGRPYJKKEFVXQZWTSNPNMBOOFKLXJJGUYFIWRKABDPH");
    msg.max_speed = 0.16521168946478992;
    msg.speed_units = 48U;
    msg.lat = 0.04659580787503237;
    msg.lon = 0.27930283518683907;
    msg.z = 0.3785500291445618;
    msg.z_units = 189U;
    msg.custom.assign("OBTQZJVPOKZEGULANTECJCGELKSTFVHIMAQFWLQVGRDHWBVIXHPZOXGYANBMOGHWNRUPFMMLFVRONKYUHASRRYDQTAXCMZPJQRSONKDDNSIDIPBCFOFEHKXOYCAIOLFGZERLEDVXCQRTPVHBWQWMFKTSJESQCIZMGIWDLH");

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
    msg.setTimeStamp(0.768771286051733);
    msg.setSource(14354U);
    msg.setSourceEntity(243U);
    msg.setDestination(17469U);
    msg.setDestinationEntity(80U);
    msg.target.assign("FWJXABPORBSPOMOGRBHWWEGKXWCDJAJZLDJABYMTVDNKPPRVXCIXEIRTINYGJDLEZTPOKXYETLANIWJJVZYTQTBQACVRNMYJCCKQUOCFUUZCMNLMCWHDYSBVHLRZDXGLFKEPRMIGAPBSHPBFQEJBTEQQTFCZQUFKUYIZCEUQGOWRSMIGXUMFSVGZMV");
    msg.max_speed = 0.1684230421486146;
    msg.speed_units = 235U;
    msg.lat = 0.43367899582036273;
    msg.lon = 0.5806882935375882;
    msg.z = 0.8414064529927309;
    msg.z_units = 234U;
    msg.custom.assign("XDSEFWHWZMTIRZLYHOVNJIQZUKNTFSPHRUXQXACBAMFVJBUGRGRSGVPLHYDWCQTGCLCJNLAWFDXZQOOGSBEUEVZCJHLUWPIXDNBFZMOCPRDYVUNTJPYSEICRKQ");

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
    msg.setTimeStamp(0.6804787257681183);
    msg.setSource(33563U);
    msg.setSourceEntity(75U);
    msg.setDestination(36044U);
    msg.setDestinationEntity(191U);
    msg.timeout = 9806U;
    msg.lat = 0.5164200056323075;
    msg.lon = 0.07486611874663096;
    msg.speed = 0.062145159977207154;
    msg.speed_units = 76U;
    msg.custom.assign("OBMUJHCUGZDVTAE");

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
    msg.setTimeStamp(0.45719143140274);
    msg.setSource(47602U);
    msg.setSourceEntity(8U);
    msg.setDestination(58740U);
    msg.setDestinationEntity(39U);
    msg.timeout = 7197U;
    msg.lat = 0.34649398779760554;
    msg.lon = 0.8525720164245773;
    msg.speed = 0.18340347890591702;
    msg.speed_units = 226U;
    msg.custom.assign("EHDSDEXGNNMGRCT");

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
    msg.setTimeStamp(0.4957716326815529);
    msg.setSource(38331U);
    msg.setSourceEntity(34U);
    msg.setDestination(2321U);
    msg.setDestinationEntity(72U);
    msg.timeout = 19410U;
    msg.lat = 0.6828081357194653;
    msg.lon = 0.8365847573329026;
    msg.speed = 0.9715823243314461;
    msg.speed_units = 106U;
    msg.custom.assign("DGJSCTZOPXSLXQVHGTVTYPLFLOVRQAKQJLPNEARYTXRYFIUDIUGAKUJSNKVXBDMZJEKWESAFJJQMBQCWNSLPAYZXCVSNPKOPUKFEMGEVUWOAMFGSCRLCWBIPVYZEWKJQYXRQEPZLDXWTXJABKNEHSHUDHEOFBWBIEOIKRHTWBLCNYHYOOGINXQNMDMDZ");

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
    msg.setTimeStamp(0.9638409147638827);
    msg.setSource(40962U);
    msg.setSourceEntity(126U);
    msg.setDestination(16451U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.021197264696226625;
    msg.lon = 0.21918493914031323;
    msg.z = 0.49320117925923;
    msg.z_units = 133U;
    msg.radius = 0.0016360704771086754;
    msg.duration = 31063U;
    msg.speed = 0.7811756307559762;
    msg.speed_units = 188U;
    msg.popup_period = 60148U;
    msg.popup_duration = 23419U;
    msg.flags = 182U;
    msg.custom.assign("DKHECVCGBFKKRTSTWJTGDFILYKFYHMOTDGRXAEXEHXHADKDFZKOXLRHAJIIRBNEHVEOWZUPUPMVWUWBEZQASTNRIOIFLOMBTMUJSYKINKWBRGVGYLQSQFWIGXBJHZPRPYLJXYRQGJVMEDMDJUWZLZULOCTMIJFVYTQYAIMSRPZHVNDXEUGJKONNXZEBPPCSOJYXACQQDUOUCMVAAVHBXCWFDPPMTAFZSYQBFOQUP");

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
    msg.setTimeStamp(0.19688869697912192);
    msg.setSource(13866U);
    msg.setSourceEntity(37U);
    msg.setDestination(47188U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.3324915969626334;
    msg.lon = 0.3123424986182207;
    msg.z = 0.7626819708689564;
    msg.z_units = 177U;
    msg.radius = 0.6302800438441453;
    msg.duration = 39551U;
    msg.speed = 0.04992119519043259;
    msg.speed_units = 98U;
    msg.popup_period = 62960U;
    msg.popup_duration = 57565U;
    msg.flags = 188U;
    msg.custom.assign("SWMDSPJOEWOG");

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
    msg.setTimeStamp(0.4387226343339432);
    msg.setSource(45529U);
    msg.setSourceEntity(160U);
    msg.setDestination(32719U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.4533372190500493;
    msg.lon = 0.9195688048945753;
    msg.z = 0.5686865295344833;
    msg.z_units = 51U;
    msg.radius = 0.10443952917144905;
    msg.duration = 48183U;
    msg.speed = 0.7678918313434351;
    msg.speed_units = 228U;
    msg.popup_period = 29013U;
    msg.popup_duration = 9650U;
    msg.flags = 185U;
    msg.custom.assign("IHZBGKMSSIRQADPGXAWFYAGILOOROOFYBIRONTRDAVNWMXLGCFQLFPTWXALRDMND");

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
    msg.setTimeStamp(0.19851851532846165);
    msg.setSource(1525U);
    msg.setSourceEntity(232U);
    msg.setDestination(21023U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.5670637366944893);
    msg.setSource(48001U);
    msg.setSourceEntity(124U);
    msg.setDestination(35248U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.010570278332400984);
    msg.setSource(53404U);
    msg.setSourceEntity(108U);
    msg.setDestination(8847U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.9858526347106445);
    msg.setSource(34551U);
    msg.setSourceEntity(157U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(114U);
    msg.timeout = 57218U;
    msg.lat = 0.40686408209179004;
    msg.lon = 0.7059292592565182;
    msg.z = 0.08900490240156766;
    msg.z_units = 212U;
    msg.speed = 0.22036512557175592;
    msg.speed_units = 201U;
    msg.bearing = 0.6677955781535235;
    msg.width = 0.5363691371560667;
    msg.direction = 178U;
    msg.custom.assign("KUHWQFXAHZJSPHLRRYOQOKBNUCAXZNBTKQLRDOETQWJCFGZRSPLJVEWGJUKKDDSSXK");

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
    msg.setTimeStamp(0.980069539160296);
    msg.setSource(42385U);
    msg.setSourceEntity(81U);
    msg.setDestination(54726U);
    msg.setDestinationEntity(162U);
    msg.timeout = 5778U;
    msg.lat = 0.2675123641378061;
    msg.lon = 0.5885736634185662;
    msg.z = 0.9085271643533006;
    msg.z_units = 145U;
    msg.speed = 0.6068586184359748;
    msg.speed_units = 123U;
    msg.bearing = 0.6529242793162602;
    msg.width = 0.7975322575782561;
    msg.direction = 254U;
    msg.custom.assign("ALDWSFRTPACUZLHFIDNTLSNMDRMXEYHISTQFKVSOTQQEPYJJMBJKAXRERZXLEHODAYEFHLBKSFFDELKHUSJPYFQRBAWRGTTMGLKXNOEIOISPWNNMBAXMPOPUZHHGBFYZBWOWMDHCPEJUVUCCDQMQVVSGRKYYFRTGQIANGYZ");

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
    msg.setTimeStamp(0.5300655743851095);
    msg.setSource(12435U);
    msg.setSourceEntity(39U);
    msg.setDestination(10610U);
    msg.setDestinationEntity(210U);
    msg.timeout = 54552U;
    msg.lat = 0.9279944519265291;
    msg.lon = 0.5771882160307067;
    msg.z = 0.30762666423314744;
    msg.z_units = 241U;
    msg.speed = 0.8539593779226905;
    msg.speed_units = 68U;
    msg.bearing = 0.420607596208875;
    msg.width = 0.4342155599167298;
    msg.direction = 112U;
    msg.custom.assign("AVMNAJHXJMGNDJMYHOUXFEHSPUWVHWLVGPUTHPCZVMQKEHRQPPRTAJZJOJQSULDGKAXWLEKQVGOCWQDONWBDGNZMSYPXBYDVBZHOTCELNJHZSJKYZIKMXPBIDZNBEGAKEPVHFOLAIVNYMTALWKWDIQBCYPLQECBMX");

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
    msg.setTimeStamp(0.4645546405992117);
    msg.setSource(38761U);
    msg.setSourceEntity(27U);
    msg.setDestination(21149U);
    msg.setDestinationEntity(94U);
    msg.op_mode = 53U;
    msg.error_count = 94U;
    msg.error_ents.assign("NLBEHVYCMAGWUGKEIWFSKYHDSURDOKKLTFRRZJWIPXKTEFTXFODOCOZATDUGSVVAIGCQAIJFWAFRCNXBDJZNIPQYCAR");
    msg.maneuver_type = 26089U;
    msg.maneuver_stime = 0.18813818686686512;
    msg.maneuver_eta = 2483U;
    msg.control_loops = 3973695159U;
    msg.flags = 163U;
    msg.last_error.assign("ZJQJENLZQFEF");
    msg.last_error_time = 0.5598958423767189;

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
    msg.setTimeStamp(0.33776431576674026);
    msg.setSource(18106U);
    msg.setSourceEntity(25U);
    msg.setDestination(4914U);
    msg.setDestinationEntity(105U);
    msg.op_mode = 124U;
    msg.error_count = 244U;
    msg.error_ents.assign("KAJGRCJEFLHORUSUNEXSYJVWKVYDAVPXBFAHPWJEOHHOGIMCQOCKTDXROPHDUKONGQBVRLZWAMTQQDPWMHUFYAFVBBETNXMDZRPZOSBWAKMNGITUMFWIYTODYCWTLXHEUK");
    msg.maneuver_type = 10404U;
    msg.maneuver_stime = 0.40227863427943145;
    msg.maneuver_eta = 10162U;
    msg.control_loops = 801721740U;
    msg.flags = 223U;
    msg.last_error.assign("UUCIAYYYHCRLWVZGBAPWWXFGJZQMDJVAVRPHYRASDONMURINERYSLYLZOILSGKPEBJDXBCURUILQFEOHJJMUDNQDYPTXZKFJDBTOXKIEWPNLEZAUKJGFGBEIHQFVNGYDFJENWSETBMQCFUMVZOVAAJSCFFOPHDYNLTQNWGRZUKK");
    msg.last_error_time = 0.46501178773754015;

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
    msg.setTimeStamp(0.23831659140326455);
    msg.setSource(22716U);
    msg.setSourceEntity(139U);
    msg.setDestination(35830U);
    msg.setDestinationEntity(49U);
    msg.op_mode = 93U;
    msg.error_count = 102U;
    msg.error_ents.assign("CGHPHSDHGFZNYITFXZAVQJQGKTIMVSOWSNUKTYJUVLGMASTQKVDTIRUWYMQOAFJBXPHOTDJCPFWWORDYUJKPAGSQBABUNRPQSTXUFAVMLMSXXZECNLIGIIXTYDQTRPQCE");
    msg.maneuver_type = 5200U;
    msg.maneuver_stime = 0.6784893233891304;
    msg.maneuver_eta = 31774U;
    msg.control_loops = 1725786673U;
    msg.flags = 4U;
    msg.last_error.assign("EGYXNWHUKLROZOVOZPUPFJJCYFZWDMPKAHIAMVGJTQJDORN");
    msg.last_error_time = 0.8018128896072613;

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
    msg.setTimeStamp(0.8021659288238824);
    msg.setSource(22424U);
    msg.setSourceEntity(146U);
    msg.setDestination(26272U);
    msg.setDestinationEntity(64U);
    msg.type = 216U;
    msg.request_id = 64064U;
    msg.command = 30U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 49970U;
    tmp_msg_0.lat = 0.9560292238800083;
    tmp_msg_0.lon = 0.38368611777294803;
    tmp_msg_0.speed = 0.879727689109017;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.custom.assign("EDWLUHTQFIFBVQAIYTIURFLNQDDGZFWFRJLTQYTHLUNYJRVXLECXGQDQMBKVCYUDHMLBNHKZUZDFNOCHCEKWCDHCPQCRFJPIEKQKCZPGYJWAVYTTSSAHRDRPOOBIOVFBXAPXOLPVESGWIB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58821U;
    msg.info.assign("HMSXFWMKTARJDSRFSDYFQDPEUTFHKZCODGHDFXQEAUDGXNYMVXENWETILXXFNQNGIWPCRLBBYPTOUJICECCUKIASLCGEXAKNUZBZVYQJPGLIZBYBTVJNDOWYSPODPNYGTSTGRIZMSVOKATDNWHLZILFCWARURJBKXYIJAMMZVQQWSIEQSMMGUFZCKJZPKHOHXFOHNHSGCTBPZVLALCWLBVVEAPJHQPAXGMUORBRB");

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
    msg.setTimeStamp(0.9093524883767822);
    msg.setSource(47043U);
    msg.setSourceEntity(130U);
    msg.setDestination(64525U);
    msg.setDestinationEntity(127U);
    msg.type = 5U;
    msg.request_id = 5719U;
    msg.command = 174U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.10908588112343409;
    tmp_msg_0.lon = 0.08305189892467457;
    tmp_msg_0.z = 0.969425429434517;
    tmp_msg_0.z_units = 61U;
    tmp_msg_0.speed = 0.7631577416420194;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.custom.assign("SXSYYLCQBLRQAIFERNFIYIZKCXMAZBANDQZPFKXTCDWLZXHHRULDNNJQGYLUQUTTPVVQWFWOOWUJZMSHBYDLZSGIDNHBUWNDBHJMVIXVLAEUXYGTPGAHREGDOQPJDZFKMJXEFLPCMEEYPTAIIGRMLFBWJYUSXDVMSNHBGMINCKCOVGWTTSEKJWCOMITFFGUAGQRYPBNCJXETCHRV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29821U;
    msg.info.assign("XSUFTFLNEYDRMPYWAYJTIONGRAQRCVRFHYUOJWMZCZSQJHBNITHYSAXZAVEHPJWUIQRKZPNPJGMXMVV");

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
    msg.setTimeStamp(0.0036024563790593156);
    msg.setSource(824U);
    msg.setSourceEntity(11U);
    msg.setDestination(44336U);
    msg.setDestinationEntity(134U);
    msg.type = 64U;
    msg.request_id = 6067U;
    msg.command = 228U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 58408U;
    tmp_msg_0.lat = 0.4663688861189409;
    tmp_msg_0.lon = 0.2641863364618596;
    tmp_msg_0.speed = 0.6606422882524171;
    tmp_msg_0.speed_units = 195U;
    tmp_msg_0.custom.assign("WZFKNZFQMENOWSMZNHASCPSIIKAICLELOKORQVXFUSZDYYTXUPEEGVQWIDJGDPQXGSIWEWOMGLCYTNAPCYVVWERXSAEVLDLPAZCVKHBDQLNMJFNRRTXHIMIBKKTJBMUAOQYZFDPJPUJVRUGHCBYEVJMPFYMZRQLRTQYSOOWAMLFTNJCQWFPZRJYGSPHHXVBWUDXIX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61792U;
    msg.info.assign("LRQGVZZTIYXBWPBTZATHBOZHXVAYOZVMUAHXMCPIDNCSPESNJQIKOTXGCOWZJPJGHYMKSNCNCDKRGACPEOHUGKYQEBTTLXGAVFUMBQEDFINWDYRPSMSRXMNBERCWVIMUWCHWBSXLFMKBAPFJLNMKVXMVRICYJDEEXCRFZAIVZSEFFNVYLNAHDLGYXVKJNDZPUUSWHQOHQQGI");

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
    msg.setTimeStamp(0.349950713100628);
    msg.setSource(12865U);
    msg.setSourceEntity(14U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(83U);
    msg.command = 168U;
    msg.entities.assign("BOONWYPZAMDKTSZRGPNZOZUVAFMWGEMKNMNNICEOYSJXPJTPYOYKFLVGAYLWJKXSBARASHRINNWHBMEVQIEFJXNLIMJQEBRPRKHBEPLFWUCGFRRDCEVHVCCJIBLHHYUQLGD");

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
    msg.setTimeStamp(0.33324899775180583);
    msg.setSource(48400U);
    msg.setSourceEntity(26U);
    msg.setDestination(42818U);
    msg.setDestinationEntity(74U);
    msg.command = 191U;
    msg.entities.assign("YLCQNGAMXCAWDAAVKYJTLTPNYIZROZUBFPYRXPCMGHNGHECDCXFDOXMZWTVKSVJOXIVPATBKIMUIRLTLMZSANGESJPEVVEZFHAUBGQSUGHLHZFLUKWJNWOYQTWQTMTSHOPKUWQWJRDIEMLBZVDXCPLZ");

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
    msg.setTimeStamp(0.07786356772094494);
    msg.setSource(2433U);
    msg.setSourceEntity(222U);
    msg.setDestination(6390U);
    msg.setDestinationEntity(166U);
    msg.command = 57U;
    msg.entities.assign("LHJZMNQFMOXYPIZWQPYTOXVFSMBXDKXYUTRNYRKFJCOIAKBGSQRICVMGKAIYZWATLDRCUNQFTPWAQSBUQJGLMVBEWZRCEPZBVVIXGHSKEVEFIAZUHBBLUORUIFAHLEYCOQTTWHZAXGPFHUBJLDODDUMDNF");

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
    msg.setTimeStamp(0.7173517554889873);
    msg.setSource(21175U);
    msg.setSourceEntity(166U);
    msg.setDestination(38320U);
    msg.setDestinationEntity(30U);
    msg.mcount = 173U;
    msg.mnames.assign("ADSKPNQNTBKIQQGRUTESIRSKZGWGPHPANAHMEGXAQUMXVTHDUVYCKCBEWLOJMYWZQJCXPYGLCEPRORAIULOXJQKTJPRXLYEEEGWYLNZKXJWVTLDUDBLFFAVIRCHUWNZBQXUFSQZMWFGOMUAMEOOSQ");
    msg.ecount = 150U;
    msg.enames.assign("XKPRSSCKACKMSCKXVHMJRXKBTRNACRACRUMCGWVUMSOAABDHLRGQXJIKOGJIXUDFTBSZWTUKWPDMFBCXEOIUTNPOKIPDDCHUQPQFGDNMZWLNYOPHFSTMBEQZHGEFHTVLSSPQBELJJJEWAIFSNVEOVOLAUZJJJXZLOAFFNHYZRURSGYUVQIZYBLPVWHONLRVMKYNMTMYQLTFDXVTXWTCZIWHKNWGJIHQPZUNYEAEYBBD");
    msg.ccount = 169U;
    msg.cnames.assign("XSNEZPBUITHYUJUULWSSXPKMDOXNURFFHWRIRQTWETXVTNKNLMZNVUJQKXPPAYHZQIMVEFGTFDYSZQ");
    msg.last_error.assign("YHAQBWRYMBGEVPTMYTGZCSOPLPHQRYEZXEL");
    msg.last_error_time = 0.7359202341564468;

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
    msg.setTimeStamp(0.799748518544498);
    msg.setSource(572U);
    msg.setSourceEntity(169U);
    msg.setDestination(641U);
    msg.setDestinationEntity(214U);
    msg.mcount = 20U;
    msg.mnames.assign("GVVTEKITSMUAQAYYKWCXDFSDBBRLVZIWBXUOFOZJKKSULAHDXUBGGKBGDFRHLWRHGRMLBOWZJYJMBWZEAWUUUZDEOCLPEWQRMHCGHGUYEPYSZLKRSFAVYOVAZICJYXTGQIUVMSXFUJPXNQJNRBFHHBKEJECRDAQKOAOPCFCOFPQFNNTMTQTSIMIDELVWOYSQZDMNRSLZOFPWINZXVGGCNJTYC");
    msg.ecount = 113U;
    msg.enames.assign("GSNZOUHNCXTZAIUSHJNDMOIPXNBQTAVUGJHFHCDHKUFBKJQGNYTYLJKRDAMBVYHRQZOGYDWTXVEJCAPWTIJWLAYMCYDQTSBEZLMHLVBRIUAQPVYBROFFPORCMUBPPXTSFCWXSDGIAFKUMYFPZBJNKKELRTEZHWCAQNYEXYUQZLKCSFVSH");
    msg.ccount = 58U;
    msg.cnames.assign("UXBVNVMSRIFUKHBKTQWUZRRBORCRVYMYOFQSZG");
    msg.last_error.assign("GMJAHPUNNFRRNHFXDUJSBQTZLQPEEEGILBDLIKKDAAHGINXROBOAGROLWOWJVMJTV");
    msg.last_error_time = 0.10561636455685486;

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
    msg.setTimeStamp(0.11725103135389114);
    msg.setSource(52856U);
    msg.setSourceEntity(46U);
    msg.setDestination(39254U);
    msg.setDestinationEntity(65U);
    msg.mcount = 176U;
    msg.mnames.assign("IWFMHYQAERNTVHUJQRXQMYNQQMKJJJKROLMALMGOAZTIGJAWDYKZQNLLODSRPMZFHFWTLVUXRGHOTZUNAWHMLOGFDUNKIPBBMDBXJYSIFQZWXKXFBCADETSKBFXEDLEBOIKKACGXLIRECINDQRGGEVJZVOQTSNHYSCVZYVICLUSOANUTSKLVPDFUVYSBJVHYAPYRUPPCZWACFXTPEUXBWTDHZRGPCMTSXEFIPWVCBEIOKUYMHZWCNGE");
    msg.ecount = 3U;
    msg.enames.assign("RQHKMVWLQFCNBFGDAOEFWNSYXTBGTMJKLGIQEZKGNYGRQUVMJBXCFMNMZGXRKGLMUCBXWYCSJSXONIYEYXTAJO");
    msg.ccount = 1U;
    msg.cnames.assign("YKZTZGYCTQHJFISDXNKAQKPJSRSACJXLODAZLUYANJGHLITGOMZLEALEPVFKAWGKTYQMRWDWTIBZBMAFEYQERHHPQEXRDUCNXIXGXLBRRYHNFCQSJQFHUWENPEMVRCTLCWJVYWOYGXT");
    msg.last_error.assign("ZPPXVGRALXMBPHIQANMIKISNJSTZDEVZSPQQNJIBFZCMVYWIGUOSPDSUOTUCYJZNOWLYYAXNCXGFYGYKAXECTOUYYH");
    msg.last_error_time = 0.5668523017801839;

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
    msg.setTimeStamp(0.31181381383544204);
    msg.setSource(48537U);
    msg.setSourceEntity(164U);
    msg.setDestination(52369U);
    msg.setDestinationEntity(150U);
    msg.mask = 52U;
    msg.max_depth = 0.04893096845589384;
    msg.min_altitude = 0.4714974894940581;
    msg.max_altitude = 0.08112969514034052;
    msg.min_speed = 0.40877559564459043;
    msg.max_speed = 0.8854575070094388;
    msg.max_vrate = 0.6052497096529591;
    msg.lat = 0.4220611785419346;
    msg.lon = 0.12749232599993743;
    msg.orientation = 0.5904566535777808;
    msg.width = 0.9727272223508233;
    msg.length = 0.2957110359206899;

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
    msg.setTimeStamp(0.6532194689556061);
    msg.setSource(55335U);
    msg.setSourceEntity(139U);
    msg.setDestination(58796U);
    msg.setDestinationEntity(199U);
    msg.mask = 217U;
    msg.max_depth = 0.6627865983642125;
    msg.min_altitude = 0.7458689774619649;
    msg.max_altitude = 0.2547462990778435;
    msg.min_speed = 0.6191052895339585;
    msg.max_speed = 0.6922890393414636;
    msg.max_vrate = 0.5453918058729667;
    msg.lat = 0.8630122051226939;
    msg.lon = 0.5885471322408589;
    msg.orientation = 0.8515617398995928;
    msg.width = 0.6483875356953153;
    msg.length = 0.707961410925202;

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
    msg.setTimeStamp(0.9766607852571655);
    msg.setSource(34978U);
    msg.setSourceEntity(219U);
    msg.setDestination(4683U);
    msg.setDestinationEntity(16U);
    msg.mask = 124U;
    msg.max_depth = 0.35094246910444904;
    msg.min_altitude = 0.7009747813296809;
    msg.max_altitude = 0.8191279947407721;
    msg.min_speed = 0.8245793868669492;
    msg.max_speed = 0.4639396462287543;
    msg.max_vrate = 0.43597968232703266;
    msg.lat = 0.6677653589745882;
    msg.lon = 0.9466174695756757;
    msg.orientation = 0.594320010480985;
    msg.width = 0.2505616437821291;
    msg.length = 0.8899556442269063;

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
    msg.setTimeStamp(0.6355110964223618);
    msg.setSource(50884U);
    msg.setSourceEntity(0U);
    msg.setDestination(45597U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.1120230367863373);
    msg.setSource(61771U);
    msg.setSourceEntity(16U);
    msg.setDestination(21370U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.8135101638465171);
    msg.setSource(43058U);
    msg.setSourceEntity(64U);
    msg.setDestination(53807U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.9086521941768645);
    msg.setSource(12535U);
    msg.setSourceEntity(5U);
    msg.setDestination(57167U);
    msg.setDestinationEntity(118U);
    msg.duration = 6826U;

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
    msg.setTimeStamp(0.5463311536259482);
    msg.setSource(33199U);
    msg.setSourceEntity(241U);
    msg.setDestination(6753U);
    msg.setDestinationEntity(163U);
    msg.duration = 45503U;

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
    msg.setTimeStamp(0.24335843575800442);
    msg.setSource(12577U);
    msg.setSourceEntity(49U);
    msg.setDestination(57476U);
    msg.setDestinationEntity(126U);
    msg.duration = 8939U;

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
    msg.setTimeStamp(0.32105946707963195);
    msg.setSource(11496U);
    msg.setSourceEntity(153U);
    msg.setDestination(8565U);
    msg.setDestinationEntity(96U);
    msg.enable = 12U;
    msg.mask = 4021013858U;
    msg.scope_ref = 603561702U;

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
    msg.setTimeStamp(0.12591534514076752);
    msg.setSource(24691U);
    msg.setSourceEntity(208U);
    msg.setDestination(38638U);
    msg.setDestinationEntity(133U);
    msg.enable = 228U;
    msg.mask = 244023754U;
    msg.scope_ref = 3641978965U;

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
    msg.setTimeStamp(0.06430142568896335);
    msg.setSource(27407U);
    msg.setSourceEntity(123U);
    msg.setDestination(30775U);
    msg.setDestinationEntity(93U);
    msg.enable = 159U;
    msg.mask = 1912897917U;
    msg.scope_ref = 864226214U;

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
    msg.setTimeStamp(0.5937020352853832);
    msg.setSource(42002U);
    msg.setSourceEntity(167U);
    msg.setDestination(35631U);
    msg.setDestinationEntity(165U);
    msg.medium = 207U;

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
    msg.setTimeStamp(0.5879908078179603);
    msg.setSource(40290U);
    msg.setSourceEntity(187U);
    msg.setDestination(63684U);
    msg.setDestinationEntity(93U);
    msg.medium = 14U;

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
    msg.setTimeStamp(0.8730893456397231);
    msg.setSource(17960U);
    msg.setSourceEntity(47U);
    msg.setDestination(36133U);
    msg.setDestinationEntity(172U);
    msg.medium = 90U;

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
    msg.setTimeStamp(0.6312907080488124);
    msg.setSource(52319U);
    msg.setSourceEntity(221U);
    msg.setDestination(60852U);
    msg.setDestinationEntity(123U);
    msg.value = 0.027584775846411946;
    msg.type = 210U;

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
    msg.setTimeStamp(0.3345722901788696);
    msg.setSource(49860U);
    msg.setSourceEntity(230U);
    msg.setDestination(45527U);
    msg.setDestinationEntity(221U);
    msg.value = 0.13512777170709067;
    msg.type = 182U;

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
    msg.setTimeStamp(0.5153505061914753);
    msg.setSource(33010U);
    msg.setSourceEntity(227U);
    msg.setDestination(65508U);
    msg.setDestinationEntity(17U);
    msg.value = 0.3057314507611819;
    msg.type = 220U;

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
    msg.setTimeStamp(0.8473043924552548);
    msg.setSource(54116U);
    msg.setSourceEntity(226U);
    msg.setDestination(15488U);
    msg.setDestinationEntity(60U);
    msg.possimerr = 0.25107792269464557;
    msg.converg = 0.9248880981381732;
    msg.turbulence = 0.14852740793115993;
    msg.possimmon = 81U;
    msg.commmon = 117U;
    msg.convergmon = 52U;

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
    msg.setTimeStamp(0.360904981408506);
    msg.setSource(64353U);
    msg.setSourceEntity(67U);
    msg.setDestination(34914U);
    msg.setDestinationEntity(239U);
    msg.possimerr = 0.5081790422518324;
    msg.converg = 0.8529469034549875;
    msg.turbulence = 0.9675295707606936;
    msg.possimmon = 216U;
    msg.commmon = 169U;
    msg.convergmon = 155U;

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
    msg.setTimeStamp(0.8333502508395504);
    msg.setSource(53348U);
    msg.setSourceEntity(120U);
    msg.setDestination(62376U);
    msg.setDestinationEntity(184U);
    msg.possimerr = 0.21174215462968993;
    msg.converg = 0.5583010879008382;
    msg.turbulence = 0.5522166979010432;
    msg.possimmon = 23U;
    msg.commmon = 139U;
    msg.convergmon = 112U;

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
    msg.setTimeStamp(0.10917088163092692);
    msg.setSource(46340U);
    msg.setSourceEntity(202U);
    msg.setDestination(57047U);
    msg.setDestinationEntity(196U);
    msg.autonomy = 47U;
    msg.mode.assign("NSRQGJJBLJSRDPPEIEKRKFQVODSS");

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
    msg.setTimeStamp(0.6610386802278899);
    msg.setSource(65005U);
    msg.setSourceEntity(29U);
    msg.setDestination(30423U);
    msg.setDestinationEntity(193U);
    msg.autonomy = 147U;
    msg.mode.assign("BCZPFWPUKDWAFSMLLCGONSRUHXZUTEXRKCNXAEBBMFQYEZOTSROQQUEIMYRKDMJBHMSQTEBSTABBKZJMAVYFHVFANZFWIRNHNZLVOBZGAOFU");

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
    msg.setTimeStamp(0.8966693425798914);
    msg.setSource(62184U);
    msg.setSourceEntity(91U);
    msg.setDestination(35020U);
    msg.setDestinationEntity(208U);
    msg.autonomy = 109U;
    msg.mode.assign("FOJYZTIMJTQVEWCW");

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
    msg.setTimeStamp(0.8815901078123868);
    msg.setSource(2157U);
    msg.setSourceEntity(117U);
    msg.setDestination(29890U);
    msg.setDestinationEntity(241U);
    msg.type = 185U;
    msg.op = 37U;
    msg.possimerr = 0.05400337964251689;
    msg.converg = 0.6018685146782851;
    msg.turbulence = 0.18289755752069203;
    msg.possimmon = 193U;
    msg.commmon = 181U;
    msg.convergmon = 90U;

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
    msg.setTimeStamp(0.6835938629947245);
    msg.setSource(63923U);
    msg.setSourceEntity(234U);
    msg.setDestination(135U);
    msg.setDestinationEntity(190U);
    msg.type = 106U;
    msg.op = 205U;
    msg.possimerr = 0.5082045675841375;
    msg.converg = 0.007436610403655175;
    msg.turbulence = 0.9051503852732274;
    msg.possimmon = 116U;
    msg.commmon = 229U;
    msg.convergmon = 3U;

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
    msg.setTimeStamp(0.9165350911597114);
    msg.setSource(43945U);
    msg.setSourceEntity(179U);
    msg.setDestination(10316U);
    msg.setDestinationEntity(15U);
    msg.type = 98U;
    msg.op = 187U;
    msg.possimerr = 0.8109544506938553;
    msg.converg = 0.4822558105228;
    msg.turbulence = 0.2874362572767639;
    msg.possimmon = 117U;
    msg.commmon = 8U;
    msg.convergmon = 158U;

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
    msg.setTimeStamp(0.04137724757744532);
    msg.setSource(57912U);
    msg.setSourceEntity(174U);
    msg.setDestination(36565U);
    msg.setDestinationEntity(78U);
    msg.op = 77U;
    msg.comm_interface = 182U;
    msg.period = 63862U;
    msg.sys_dst.assign("RNGCJYDCKIPBHIKCBYZPHZDJGSEVUQONGLPWSXZUJKMNLKFFNQKWXEHNHRRITPYOYMUSDMRTCWVEHABOFCJWEQHSYVBMNAVAKLMJTRFSKEIGVA");

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
    msg.setTimeStamp(0.8701060580375292);
    msg.setSource(30654U);
    msg.setSourceEntity(234U);
    msg.setDestination(44462U);
    msg.setDestinationEntity(110U);
    msg.op = 112U;
    msg.comm_interface = 236U;
    msg.period = 50229U;
    msg.sys_dst.assign("RBCQVSQLDTPVVAZVWINIKBEOFZJKVJGAMGWRNFBWLWEXEMHKEGVUYRRTTOCKQQIUFNESBPYHFRLTHUUOKQDHHGQZBHZXVNYACHZUYACYJXZDGCRAZIKTPNTPCLLUXKZAORMLCAVNHLMDXMJYPXBUUSYEOWIANFSXEBJMTGYKWVXFWBGMGDDRDQJCOFQMTRWSGCLHDEJEMGPVLINDZSRPXNLPBKSFTOWOINKJQDIM");

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
    msg.setTimeStamp(0.07985689200847024);
    msg.setSource(5701U);
    msg.setSourceEntity(78U);
    msg.setDestination(39160U);
    msg.setDestinationEntity(223U);
    msg.op = 197U;
    msg.comm_interface = 31U;
    msg.period = 52107U;
    msg.sys_dst.assign("VGGFAZETJYDLBLRGBGVNCVOBBIKLMTAKAENUNMMVLFGOZISKJWGEVAWTQBMZZSPJJYUDIBCHLARUWNVOHDBYIJRNYRTFNLVSKJRPMLNSWRIMEPGPEMUMOXQEKEZSHFWDNCPTQJYPOIRBDWXFPCKKCYCLHCLDXYHJWPQYVZNHDOHEFTPOIRYOSQEZXUAMUQCQSIXMSWUVTCIASNIVBDAHJUPHUAHODARJXOF");

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
    msg.setTimeStamp(0.37767883238173305);
    msg.setSource(62767U);
    msg.setSourceEntity(130U);
    msg.setDestination(34265U);
    msg.setDestinationEntity(242U);
    msg.stime = 2963128013U;
    msg.latitude = 0.991841089637851;
    msg.longitude = 0.13050804436423769;
    msg.altitude = 31811U;
    msg.depth = 64514U;
    msg.heading = 43021U;
    msg.speed = -18694;
    msg.fuel = -55;
    msg.exec_state = -9;
    msg.plan_checksum = 33842U;

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
    msg.setTimeStamp(0.9896489696455946);
    msg.setSource(52056U);
    msg.setSourceEntity(207U);
    msg.setDestination(29334U);
    msg.setDestinationEntity(235U);
    msg.stime = 2833569426U;
    msg.latitude = 0.5753090348222468;
    msg.longitude = 0.18094206981236916;
    msg.altitude = 64538U;
    msg.depth = 26480U;
    msg.heading = 31340U;
    msg.speed = 2496;
    msg.fuel = 50;
    msg.exec_state = -95;
    msg.plan_checksum = 57126U;

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
    msg.setTimeStamp(0.7832144393741388);
    msg.setSource(27707U);
    msg.setSourceEntity(0U);
    msg.setDestination(56403U);
    msg.setDestinationEntity(246U);
    msg.stime = 340124677U;
    msg.latitude = 0.26954251072879165;
    msg.longitude = 0.12183080367721733;
    msg.altitude = 52719U;
    msg.depth = 34743U;
    msg.heading = 26728U;
    msg.speed = -14233;
    msg.fuel = 80;
    msg.exec_state = 110;
    msg.plan_checksum = 3776U;

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
    msg.setTimeStamp(0.7549403385568011);
    msg.setSource(48167U);
    msg.setSourceEntity(75U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(166U);
    msg.req_id = 12956U;
    msg.comm_mean = 63U;
    msg.destination.assign("GISEVOOFLMITCRPMPGYXERKYKCNODJIVLWTUHDQVJBFXVCXKAOKEJUYZROZLDBJQNFZEFOGHIVNMSZHRBUJMBQNARQHMHQODATVNZIM");
    msg.deadline = 0.8097079548701183;
    msg.range = 0.2526315323950874;
    msg.data_mode = 151U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.1715967326793716;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CPGVKWBBFVJCUORLXXQDTIXOJLAQZLWKBNWZKDUGQGHJYXHAQIVEHFHETYLCIOKICWTEZBPMPVYMWPUHYFKTIOEMUNQFPWV");
    const signed char tmp_msg_1[] = {-121, -39, 12, 89, -114, -104, 15, -88, 89, 52, 24, 114, 113, -33, 41, 17, -20, -46, 45, 23, 37, -69, 75, -32, -27, -71, 92, 88, -73, 115, 97, -115, 62, -63, 79, -54, -13, -26, -116, -118, -3, -107, -44, -4, 9, 91, -95, -38, 15, 93, 14, 119, 14, 70, 69, -127, -121, 102, -40, -20, 67, -81, -118, 1, 11, 93, 99, -37, -104, -101, -118, 111, -8, -34, 26, 5, 52, 126, -6, 48, -22, -58, 0, -17, -126, 53, -24, 37, -36, -103, 0, -108, -81, -1, -48, -82, -96, 101, -80, -122, 90, -122, -117, 52, 122, 105, -103, 38, 56, -67, -55, -18, -84, -70, -20, -121, 3, -76, 21, -30, 25, -33, 109, -22, 123, -104, -50, 106, 104, 65, 1, -21, -116, -73, -64, 87, -23, 96, 60, -112, -52, 81, -116, 44, 68, -4, -54, 97, -43, -3, 39, 54, 53, -44};
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
    msg.setTimeStamp(0.37421608662946293);
    msg.setSource(62759U);
    msg.setSourceEntity(170U);
    msg.setDestination(61583U);
    msg.setDestinationEntity(120U);
    msg.req_id = 40835U;
    msg.comm_mean = 175U;
    msg.destination.assign("PTOGTLJURYHKHZQRYKSBRZIZDFGDDOTVOJKNUQXJCHGBCRNZEAQILAOPGEYRARLLEFBZBWA");
    msg.deadline = 0.4296778396016171;
    msg.range = 0.9972171210534267;
    msg.data_mode = 54U;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("ESHNBCSQYDNHVZDGVOJFYOUPTVTOIFVHBTPCERKZ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OHUSBDTFDKVHEOCIBARXYVRBKVZEUWZSVQOKBSJTMSZGCIMTIXQSHEJDPYNIQPFMLZATMSBEPEAQJEMKSJTTLDF");
    const signed char tmp_msg_1[] = {-100, 0, 38, -104, 59, -121, -29, 124, -109, 94, 107, 71, -63, -76, -98, -9, 0, 3, -82, -93, 18, 90, -15, 25, -39, -18, -79, -9, 115, -13, 102, 107, 95, -18, 81, -31, -125, -100, 91, 57, 3, 13, -25, -36, -43, 31, -100, 108, 114, -127, -37, 35};
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
    msg.setTimeStamp(0.7688306410707962);
    msg.setSource(26725U);
    msg.setSourceEntity(99U);
    msg.setDestination(910U);
    msg.setDestinationEntity(138U);
    msg.req_id = 51237U;
    msg.comm_mean = 253U;
    msg.destination.assign("PYBRISJGCCOMEGLEUBLVVZSPCNTXTKDPWBFNEXAXOCLNBPEQYCDQQKTSCGODVUXKYXHM");
    msg.deadline = 0.6329261064231828;
    msg.range = 0.5571919309560135;
    msg.data_mode = 225U;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 235U;
    tmp_msg_0.entities.assign("ATJCVDSJUSNUVDZHRMUTJEURYXASEVKEERCQBMCHMGTPYSHEBTWRPGLLVFOSDUQUZQSARJHUAGTDWVLTIMBRNJLUXZDCPRZLSIHAYGBLDHLCPPDBHKIYMZIEYLBI");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QSSUBGUKEBJGIRNQMXKFALHEXQEMCZTAJNUNWQI");
    const signed char tmp_msg_1[] = {75, -63, 117, -59, -39, -30, -106, 14, -39, 72, -55, 44, 125, -32, 24, 95, 78, 79, 111, 91, -50, 89, -128, -82, 40, 16, -85, -2, -39, -2, 42, -107, -119, -6, 117, 36, 81, -50, -16, -117, 97, -121, -75, 40, -117, 74, -57, 3, -65, -107, -11, -60, -118, 48, 46, -51, -126, -105, 106, 69, 29, -45, 72, 122, 76, 29, -125, -76, -107, 3, 50, -68, 22, -81, -122, -49, -33, 102, -53, -9, 100, 114, -106, -21, -31, -52, 84, 45, 57, 51, 114, -99, 30, 123, 82, 10, 75, -35, -99, 105, -71, 41, 88, -49, -64, 26, 67, 102, 44, 72, 108, -7, 11, -66, 125, 35, -120, 1, -114, -109, 91, -20, 100, -87, -120, 9, 60, 112, -67, 78, 54, 94, -125, -9, -75, 90, -115, 121, 123, 60, 1, 51, -89, -5, -112, 51, 8, -17, -55};
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
    msg.setTimeStamp(0.7600756016842067);
    msg.setSource(51780U);
    msg.setSourceEntity(192U);
    msg.setDestination(9157U);
    msg.setDestinationEntity(80U);
    msg.req_id = 34438U;
    msg.status = 7U;
    msg.range = 0.684843138808415;
    msg.info.assign("VZCZZZZWKKILYPCVWFALOABCZHYCSSJMYHPODPPIHPHXDDIPVBFVWKBCUGAEERKABXGDDTGHVNSLHQSNMFPSMGBEULTRCOYXNUTUYELNQTUNJBILWJIERBWLZSULQKNGYTQQMBXAMBIHHFGUKXZRCIDTLKVYMDMUAOJEGODDGAVRZTOZEROAJXNSXTSEKEIQXJQPCFWVXOQ");

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
    msg.setTimeStamp(0.05852282689356181);
    msg.setSource(32745U);
    msg.setSourceEntity(226U);
    msg.setDestination(8545U);
    msg.setDestinationEntity(233U);
    msg.req_id = 3784U;
    msg.status = 64U;
    msg.range = 0.5569121251419185;
    msg.info.assign("NNRMJZNGBABJTBKSHSELMZVAHJZUXIYPFWLUJHBBMNRQOERKKHXWUUEUAPAVILBFISNOQEGVOODSJTIFVFILQKKKXYYKYQDSZXIERHECNPTRLOQHZQAHRWPTRZGFAMFXCJTKDCQCRUOLYZCSVFJMAFETPGUPAFFPDIWDQV");

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
    msg.setTimeStamp(0.21728508000596902);
    msg.setSource(36839U);
    msg.setSourceEntity(128U);
    msg.setDestination(13228U);
    msg.setDestinationEntity(205U);
    msg.req_id = 45480U;
    msg.status = 182U;
    msg.range = 0.18486592517266687;
    msg.info.assign("EIXFBGYNYAGVJIXTGUCHPQCENDXPHOZHOEVMPKGOENSJDZOPNDPRCPYLRWPTKPIZIZLHNHNNYHYAJLUWLGWKMRWOMACWKNSKMELLDRRSRKCBZOZVSVKJOQQDSTHTTFEPI");

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
    msg.setTimeStamp(0.547048493454645);
    msg.setSource(32092U);
    msg.setSourceEntity(38U);
    msg.setDestination(6676U);
    msg.setDestinationEntity(23U);
    msg.req_id = 62591U;
    msg.destination.assign("XSJRWYEMCEFZVHOLUNVDBISZAKOZTZAHWWVNBQJXXGTIYVHZNGQDFSUUNNSZTHCQKGWILJFAMXCOQGJPYZQDQAOPMPQIFTEFYSALHOJPTEYAGUJMBAGVKWFUE");
    msg.timeout = 0.7482897957818156;
    msg.sms_text.assign("XPQMPKESIHLQWDLLFPSUCISNIWANLRKMAFNAZXJBYVXKTFAZSCDWVXWAFWLYP");

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
    msg.setTimeStamp(0.11026338437252725);
    msg.setSource(45006U);
    msg.setSourceEntity(54U);
    msg.setDestination(49259U);
    msg.setDestinationEntity(253U);
    msg.req_id = 19160U;
    msg.destination.assign("SQJKUEJTJEUBFBQVSXDFAIWFALZKTOWRCQWVNCMSLTVMEIASEQNTYCPGRJPKDAETNUWUKRSYCFLNXZSUXPLRQKXHVVVVOSWOIDOSETOUDZVWLIXJUAEXZEQDKJDJWBHCYGOHQMGJCMTLGHMRBQOTNDCZMNPTFFKIIHRHCBTXRAP");
    msg.timeout = 0.4180791221420763;
    msg.sms_text.assign("KVXQSQLTERMOTBWRJCYGTJPWORISZNUXTMKCFPOFWBYXNVWBSMTWLUXLFGUHCUGIEJYIRYLBQRSLWB");

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
    msg.setTimeStamp(0.7263763582321566);
    msg.setSource(45812U);
    msg.setSourceEntity(78U);
    msg.setDestination(54266U);
    msg.setDestinationEntity(90U);
    msg.req_id = 34579U;
    msg.destination.assign("DLLTJSLYRBMOKJQRQYCNGHEKBWKCIWQLEQISQEJSJIQPDZVNUYHYVNNZJDXRXVQAGREWWPVWMXUOACMLXFTXXFWICYBRBHKCZNCKTSAIDDYNPVLGLEXHM");
    msg.timeout = 0.8924594983623004;
    msg.sms_text.assign("DZCIRFPITGWHTJHXPEQBPMYQXZPZJQXCBBDWLFQJUWBBOVFYLXRISWVLDBWWNLHNQ");

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
    msg.setTimeStamp(0.3351264585753734);
    msg.setSource(26016U);
    msg.setSourceEntity(220U);
    msg.setDestination(35466U);
    msg.setDestinationEntity(240U);
    msg.req_id = 48608U;
    msg.status = 55U;
    msg.info.assign("SRROONXHVKTPTRLJRVWIWJQM");

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
    msg.setTimeStamp(0.7514769279657076);
    msg.setSource(16874U);
    msg.setSourceEntity(62U);
    msg.setDestination(18009U);
    msg.setDestinationEntity(221U);
    msg.req_id = 32795U;
    msg.status = 43U;
    msg.info.assign("ISGXALOGUOMJVYZZFHJNREYBHNQZKMFDVRLAFJUYWCVTDOCYPATXDMXXAVGPOXHTOECXN");

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
    msg.setTimeStamp(0.9537438381920685);
    msg.setSource(12465U);
    msg.setSourceEntity(37U);
    msg.setDestination(7342U);
    msg.setDestinationEntity(213U);
    msg.req_id = 48895U;
    msg.status = 141U;
    msg.info.assign("NZOSJFROWXYLHKOXIKGSTSXDB");

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
    msg.setTimeStamp(0.7517893895391993);
    msg.setSource(60976U);
    msg.setSourceEntity(47U);
    msg.setDestination(11444U);
    msg.setDestinationEntity(115U);
    msg.state = 2U;

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
    msg.setTimeStamp(0.933468191413416);
    msg.setSource(15094U);
    msg.setSourceEntity(60U);
    msg.setDestination(56730U);
    msg.setDestinationEntity(239U);
    msg.state = 29U;

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
    msg.setTimeStamp(0.8892385215634497);
    msg.setSource(20637U);
    msg.setSourceEntity(210U);
    msg.setDestination(30455U);
    msg.setDestinationEntity(48U);
    msg.state = 235U;

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
    msg.setTimeStamp(0.6736869593892689);
    msg.setSource(36454U);
    msg.setSourceEntity(146U);
    msg.setDestination(15163U);
    msg.setDestinationEntity(232U);
    msg.state = 190U;

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
    msg.setTimeStamp(0.616557424554357);
    msg.setSource(40237U);
    msg.setSourceEntity(170U);
    msg.setDestination(46607U);
    msg.setDestinationEntity(204U);
    msg.state = 177U;

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
    msg.setTimeStamp(0.07256146348525716);
    msg.setSource(17991U);
    msg.setSourceEntity(254U);
    msg.setDestination(16843U);
    msg.setDestinationEntity(42U);
    msg.state = 53U;

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
    msg.setTimeStamp(0.967982439404394);
    msg.setSource(14078U);
    msg.setSourceEntity(134U);
    msg.setDestination(8375U);
    msg.setDestinationEntity(85U);
    msg.req_id = 59632U;
    msg.destination.assign("RPSPKXMZNXUZILVBINRJLOZDYUGEXPGYDSBCNJTIHWSUOEEYARHPJQKSPTWVZFCHMHPO");
    msg.timeout = 0.8920164887814325;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("YRCSLSEUPMHKA");
    tmp_msg_0.state = 141U;
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
    msg.setTimeStamp(0.10852154444412054);
    msg.setSource(37631U);
    msg.setSourceEntity(148U);
    msg.setDestination(39113U);
    msg.setDestinationEntity(19U);
    msg.req_id = 28146U;
    msg.destination.assign("KHZFKTTDOVQUEYANXWUJRVHHUBRPUPBEYSDKTWILRQBCSVBIYTQROOSAHTUKANZFWFYHBYFHMOSPRNJDEAGICAXMVMNTFGPORVPNGZDADNZHLJYVXGDUVSCMOEJRPCRCAGCPQENKTAEINVZYEZFKSGWDJEVDXBLDUIOJTOE");
    msg.timeout = 0.3811679991526499;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("DSPKWYCYRWZAMHJOWWOMNBBSOHXRYDKBLYGZEZEZORMTDLOVMKVDKLGPTTMSHGJAWIMAANTOOOCXDRBPXIKTFPFJPWBTJCONRFZBNJIQEPHZIENNYFHWWQNPZXEPGQSLVWYZIYLCEUGGXDXQFDZTFXEYJTFDILVYVLTUKRQUGISXFHUVUBHJMRQ");
    tmp_msg_0.state = 78U;
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
    msg.setTimeStamp(0.46711529641431027);
    msg.setSource(49795U);
    msg.setSourceEntity(254U);
    msg.setDestination(937U);
    msg.setDestinationEntity(254U);
    msg.req_id = 58101U;
    msg.destination.assign("BGMRFOAVSJZLHUNBTWH");
    msg.timeout = 0.011114661652290136;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 62871U;
    tmp_msg_0.lat = 0.23213979419873432;
    tmp_msg_0.lon = 0.5147221463599684;
    tmp_msg_0.speed = 0.06426083160538631;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.custom.assign("ZQNIUWAXLUOKNDDXZZHZSCYQDFJXSEFAUELIVLRKPXWEGNMWMYLQIWBZWROCWMBKBGTBANDJHBTIXTQBZMYUMDBHVADOPEIOGRJHDSCIMPCBAZVUTMSJHRROFYDLCCKEDIFEKQJVTOGVGHGRTWFEPAEYXSANHJYHSMJTXTNPVQPMLRNNLRXKSOVEYWQPPLSUOITKAVLRTYNZFGZUNVJMHCLKCBGXCFIRVJCQFUDXA");
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
    msg.setTimeStamp(0.9683806594055374);
    msg.setSource(35955U);
    msg.setSourceEntity(211U);
    msg.setDestination(16690U);
    msg.setDestinationEntity(126U);
    msg.req_id = 16755U;
    msg.status = 31U;
    msg.info.assign("UZFGCBHKLBHUCRVBSWKQWTEJOKKRTQHPVEYRISYPHIMOUKYOFXMFVAEQERYPMUAKTMTUZWDIQOOGATPQKLKKYWQMCEZNGZJVAS");

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
    msg.setTimeStamp(0.5678401138490624);
    msg.setSource(56798U);
    msg.setSourceEntity(20U);
    msg.setDestination(39274U);
    msg.setDestinationEntity(8U);
    msg.req_id = 37903U;
    msg.status = 214U;
    msg.info.assign("PBECZVWOCTCPLGSTWEDGRYNJLMHAGZSDIZUXUIIHEULIKMTCSPJDDEDJVNERL");

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
    msg.setTimeStamp(0.055373326323053806);
    msg.setSource(11195U);
    msg.setSourceEntity(112U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(183U);
    msg.req_id = 65162U;
    msg.status = 41U;
    msg.info.assign("OLLQEIJCJFRUUXXJIXAPWGRGHTONWAHOTEFLRZEXJIBRVILHBMHTZYXBKVLNYPWKYZZJQPCNRPSSDGMAKMGSMYAIEHNDRCMFSNACVBUPIKDQCVFEDQHMUW");

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
    msg.setTimeStamp(0.5172214499367256);
    msg.setSource(40195U);
    msg.setSourceEntity(61U);
    msg.setDestination(33941U);
    msg.setDestinationEntity(163U);
    msg.name.assign("HNPYRUULYDZZQMKLIPLA");
    msg.report_time = 0.5734721581494923;
    msg.medium = 120U;
    msg.lat = 0.1926584625064327;
    msg.lon = 0.14529186960423357;
    msg.depth = 0.015727974612462226;
    msg.alt = 0.7499435456909179;
    msg.sog = 0.6304811286912447;
    msg.cog = 0.1674040432123287;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.6125267381522225;
    tmp_msg_0.lon = 0.7188057615383212;
    tmp_msg_0.z = 0.7410001280779007;
    tmp_msg_0.z_units = 18U;
    tmp_msg_0.speed = 0.2829930548312092;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.abort_z = 0.007103522445334298;
    tmp_msg_0.bearing = 0.6474054012562359;
    tmp_msg_0.glide_slope = 224U;
    tmp_msg_0.glide_slope_alt = 0.6169750155959717;
    tmp_msg_0.custom.assign("GHOMGSQQPEWFQZETYUIRDCTNEVMVHMOSSEXILNMJDSRTSLCIUWMRWVKJOBIVPLDMTAQNGJKOHEXRTPBYJWOYFLDZFJCDWKRJVTOGZQIJUBICOQYYLNFZEXYOFYQUEGJLYPIRTZMBPTRCCBCFZXKFALQXMSHTEUKCMWJFALZBKXDPUXRPNKCVGSPNNFN");
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
    msg.setTimeStamp(0.6018137718088671);
    msg.setSource(19968U);
    msg.setSourceEntity(81U);
    msg.setDestination(32496U);
    msg.setDestinationEntity(235U);
    msg.name.assign("SFRFNJYNGDBNPQKJEGQDGUDYTLOWHTDIIMXROKPHORWKBQCVIOLUXRYHSRQELVTYJDSDECPXTPNCUVZLGCVQJHIQGREZTWBWHJVYAPIAOSZHNWSLWHQRMDYKSKMXTQCCYFQIFKDVXFGABZLUFULXMHEEFDNHPVUIWBPJMNGXLEAOZMGWLURCMJFSIBTORBJOCJCSZMUZQY");
    msg.report_time = 0.2685397285179191;
    msg.medium = 23U;
    msg.lat = 0.16937331342384565;
    msg.lon = 0.575492534676205;
    msg.depth = 0.47733996668025425;
    msg.alt = 0.33597999431424097;
    msg.sog = 0.4147977187427747;
    msg.cog = 0.6179222760496599;

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
    msg.setTimeStamp(0.8526184063722637);
    msg.setSource(15274U);
    msg.setSourceEntity(158U);
    msg.setDestination(64261U);
    msg.setDestinationEntity(138U);
    msg.name.assign("GYVGENHOLBSITOOZQLHTGZWVZAEISKIUUNFWYFJVEWFHFAQLOKXMRGCCQ");
    msg.report_time = 0.2338113310245914;
    msg.medium = 13U;
    msg.lat = 0.6635359769676219;
    msg.lon = 0.8213657110648251;
    msg.depth = 0.043167856304129004;
    msg.alt = 0.7451650169525328;
    msg.sog = 0.5463159744194264;
    msg.cog = 0.7563513748120657;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 111U;
    tmp_msg_0.flags = 85U;
    tmp_msg_0.description.assign("OPEWMEUJUVWZLJSAWBZPBXQFRFTVPCTULNTYAYIPXGRQRLWBFGHKBJCAFDXQYMDPCDRAAGHQLDW");
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
    msg.setTimeStamp(0.0027565884468497837);
    msg.setSource(46050U);
    msg.setSourceEntity(208U);
    msg.setDestination(60955U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.031094888173265);
    msg.setSource(25747U);
    msg.setSourceEntity(186U);
    msg.setDestination(45565U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.9507512539087493);
    msg.setSource(26407U);
    msg.setSourceEntity(205U);
    msg.setDestination(16589U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.010773155462806105);
    msg.setSource(41343U);
    msg.setSourceEntity(159U);
    msg.setDestination(9574U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("JPSJYDTOQWWELMTXWLJJWETUWBFNFFYZQNDTCIEYLEXKZOBLQLBXBIUAXMTZKEJYBYGGNGLPVJEHVGCKXGHMAMGKXSRZHTVZADMZLKYCPLSXKPPQVISRROHATMYGAUCUIARPSHYDGCUNPFNQSDOIUDMOIOBIASBAOOTIDHUWRVHSVYVCAJFYZHURAFSNNWHPRHTRVUCMRGJUKVZKIFTXPFZWN");
    msg.description.assign("KMXMJOSNUKRHLYWZHMTLAPKUJGYWAEPD");
    msg.vnamespace.assign("BGCHBIFMIXSKLSQKGWBFPDOIJSHTTTYCOPETESJNCZQTRXLPFKDJKAIBVSJPNAVAFFHZGDTOACYLWEMDZLKIGZBRNRPHUNDCXWRQMZDZBMHPZCVOVQDOQ");
    msg.start_man_id.assign("KPVRLFDLJJYJHWYRIMXOHEZIKQWABVJLTXYHFBPRTICOVTJOPDVSXCFGQWCRGNAEURGYBVGAJVMNETTSMLPUUBWHHZRGQUAQDWMIUODTSEJEMLWWNRCSMFUFGOSSCLZVQJTNENHOKXQYCKCFHAZEUWOZTJDWBZFCGBSKRATEUVNRXORXSDDMIBYMZKEQLYKFILVDWIZPOMXSAGBITBHDNFIAK");
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 183U;
    tmp_msg_0.flags = 52U;
    tmp_msg_0.description.assign("QBRWFGDACDWVCLPVSWZKEMQJFONPOUHTVSXLASNWFTEVMCXIMJOKYTLNDUIVCDARAKTAHDCBJAFGZLXOEEDBUIQEGJQXTMEUYCKWQRCQAIBRQSIQHNPPLRWGTRMPRLDUDUSHXBMFDMKJWOOHZTZEPJKYIRGZYABEZPZIWBVNUB");
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.694144668684831);
    msg.setSource(36072U);
    msg.setSourceEntity(166U);
    msg.setDestination(27899U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("MYZTFXRPMWSXMGKOZZOHIVOFUQHWNYELNCXXUARZLPSKMANIMYHUKHOLBVMWEJSUZJIEIXHOTXBGGASDDKPKEYVGBBAVPDYPZTIZFWTAPHLGLLCATEQXBNMWGNMCRJPUQMWE");
    msg.description.assign("GHGIQODAMLKBXMQGBURELQRYFHUNKSPETNWNEEYVVQIAASMJHVYMGMHRWFJWRWUCVBXBRTPHADDNFDLIQYFUKDCCQJTGP");
    msg.vnamespace.assign("KPFCIXNLSRQTVAEWXRKFQJUOERTJQPSUTXRHJQKWOQLPESTQIWXHHUAZVGWABJSXXNOJAPBSZZRBNUGOZTIQYDJWKOGVYXPKHVYGMMKVZYNJTRZAFAKAPIDDV");
    msg.start_man_id.assign("UCXFEARJYAPYSJLOCHWQRTNAPHNQYXBOGKJTVSVCVJGXSNQTCBXPKAUFMOZORBBIRIHFHVWYMDIZDPWCUFLKDZDIBRDFJJQXEYKHEYVVUVSOCJKPKGQLMQUAVMFHCEGZLIAHTVIPWNQMIOUGGTARDMSFYOUXFMVZEQXRTANUUMZZUSLEJMEBIXWPJPTQZKBHFRQWECHWJGEIKPHGNPERBWTDW");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ALGQEGJNVDNRRBJRBOSMVWTHOLGODEFDPUHIGLBCZVYBSZDYVGZWXYTJEBURPAFXTKQWUNRWYHXSCVPOTLKRWIYFHTMMIKFCQEFCCSEZNLAUIVBCXYIOUPCLMGOZL");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("EOBBGQFTITPUHATAGQHOKUFNWMVJZPGBXJHYJWPRDRKXFEVLSKNKOISFDSNVJAEXAYWHOCPOHGZTQCPKRLMVPGWUSIMFWRGLPVUCXUTY");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ValuesIf tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.param.assign("SBZJWEXERQSBVGGMSHWUBSUCHADPWCPZUWQTGLLHMTABSEFNFROOUFVAKUEBRLCLPELZOWFYKNNUHXIPCMYBQSNTSXVAJHADYQMDDID");
    tmp_tmp_msg_0_1.value.assign("SZMTKLUXLSBJQJYSFBBYIFIXXINTACBVATYQXZHVUOPMINMGLMMCCJZCATDQNEDMPJFVCCRTGIQOGNOFORENIDUDVUUPHHDSVFCJRDYPTCZGSESEZOWPDIVAGRJUTPAGFPDBHKZWMERHHZKFNXAUOUWPRQEYZAAVNBXQLYJKWWARSULQULKQWKXBLPKYMEN");
    tmp_tmp_msg_0_1.values_list.assign("HFARRZEPMZVDHGCZITINNIAVBTSKENGIJZQSXTUCYOYCWGQNDHKFODZWXAYCKQGETEAKQZIULRDEVJXEYPTHJWCXORPSGOHXGTNQWMYDFAPDASLLKKQNMTLUJAYFVYXLOCUZPVMPBNZKQULDBJMOAPRDMBMXLCUEBQVEHSAFRGSXZSGTWYSRPRJLIFFCFWHIRBBWIIYYBPASBSVKJHXOWLCO");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ILAIPPGFYNYTCGHMRTQUEPDMWCVBAUGXOZAKKBWXSQUSGZJIYXOYFHLWEDMWASIVRTZLUMPODQXYGBQGZSUJLAMEDNRHJXVNENGRQELYMJJKZTWOXVKFPNKKGOLCXJSYFBRNB");
    tmp_msg_1.dest_man.assign("TQADGERTGIVDMQRJQTMOINBJBMHGAFBQFPJAHUTSPKIYZWEGKPWUVYTUTMQERNSHFNJXNMUSCBCCFCIWGEUAEBSHSESPHBCOVJHVLBLFNOPRVBCUNXUBTYSFSNYMULFRXDOIHGKWJLACPYJZATKRRJXYQVOGGPILCRCNQXLZMDFWZIEVXZIPKZMGUWXUKATAMIGQYXVOZPBLODFLKRXACNYXITLHRKAYVWJYVHOOWDLQEJDDK");
    tmp_msg_1.conditions.assign("RGVDVXVFAOXKAHNMBFEYZOJGPUFIVKNATKFYQYZKVARDSEIQNAFLIKBSSHUWIOTMHTYCPLPELPIYRVRXIBCJQVGGJYQFWILQFNCMSBNYAOJNCXEOBCDURKAPDUJGHEZJPCRTXAHJCDXPEZMXTEHITFZQYLNDRNJJOWCDDRLOIUUFEZTKWEPOSZBPHXWLQU");
    IMC::DepthOffset tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.0968399389443001;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::QueryEntityActivationState tmp_msg_2;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.4686369086221267);
    msg.setSource(4762U);
    msg.setSourceEntity(176U);
    msg.setDestination(26648U);
    msg.setDestinationEntity(56U);
    msg.plan_id.assign("VKJWCQXKSEBVBISPODPOSITVCAILKHUQJAKOWWOPCXGQAWQGNXLGCFJMMMLEKMSYOWQKADPBUNAYSMZUIFZRHZQPAKCGRYMVFXYEECNNJLHQDVIWDLSDGFNYZEHYZVTLULBBMPEHPRHTUUNOFBGJQQWWGXOTCVZECCIUZSLFDBRFVLBDGKHMNNYGHRUDJJWPAYKMBZESVYMPTAFUSRXYOWIRQ");
    msg.description.assign("SFEUBCDBXJCFUODFTOWMPRKYZGLMDITXWCVVBRRLAXASZLHNNJDCTXNPQEWUYYLVQCKLORDSTZMJPKZNOPYOGGIAUXTGIZKNCTVISGUQJAYXLDCQHOWHFSRFQHDPMBETPQXVWQZFJCHHHUWJFKVOBBTTNKJSJJCQEDORPRSMDOGMHEQXCUDKBSIEAWOZRASPRVIPMPBNKNSLNIMFAEVIUEXVGZYHZAQAI");
    msg.vnamespace.assign("NPNAAMHZBALERTMPBQVOPCRWYLFXSLQOPUUMAWWVNHOOUXNRZUOUYPKVPFRDQOBITKXKWRTTYENQVK");
    msg.start_man_id.assign("PEHGUAOYVWOILZZSWQPYELKLDNCROFSWUARDGCVMBAGQAVQAEMVBYGPEK");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("KCYSLWLSERZZIQUHZHQQDMOHDQFOXVEBCHXWNZUPREUURXVBPQRNPARJDVENCTGGLMJJKBPLEOANFHYFWQKIBATFKCCHAMEKGPANTDDGDXTFLXXQMJAFOQYEUCTOUKIXRZGSKUAOREBMRGYTTFYJKAHRUJMZKOPVNOC");
    tmp_msg_0.dest_man.assign("FVOEVBTAEHTDBLTPPSEKAISWTYSCKAUDXMBTQLUJYAZIFUWAKDLDBUDZTHYORVKZTZFJRZQEMNVHHGGJVRFGFYCXWZDFQIQJCKOMQVJASQAVMWRTGMQSNXCNJVQYSWKUCN");
    tmp_msg_0.conditions.assign("GHMNWOKJXGDBOBLQNIHIRKPEZASIUAPZXJUHVI");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5156184477846145);
    msg.setSource(27785U);
    msg.setSourceEntity(12U);
    msg.setDestination(64586U);
    msg.setDestinationEntity(205U);
    msg.maneuver_id.assign("CIPBOYLDDBJKNDEUXUWPICNFWHIKJCROOLRBZVELFRISNQYEVAKEMYFSQUJAXTPAZPYXOOMLSXCLFYFDVYIFEHTFWQMHBHUXQDHXK");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 64171U;
    tmp_msg_0.lat = 0.22215771096009485;
    tmp_msg_0.lon = 0.3588443236786374;
    tmp_msg_0.z = 0.8756226775388233;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.speed = 0.6185310696183901;
    tmp_msg_0.speed_units = 61U;
    tmp_msg_0.bearing = 0.624145906398931;
    tmp_msg_0.cross_angle = 0.22138231171155898;
    tmp_msg_0.width = 0.3630762896787777;
    tmp_msg_0.length = 0.8341463847530013;
    tmp_msg_0.hstep = 0.19493303610896373;
    tmp_msg_0.coff = 231U;
    tmp_msg_0.alternation = 142U;
    tmp_msg_0.flags = 209U;
    tmp_msg_0.custom.assign("NJMCKGYCRGIAIFRNBTMBNNAKYDOVYZVELCJEPAIHRCTSDUAKEHGGIQDFJXOLKGMCWNPXYJPVNWGSHWHSHAJQOMCZWFXEZRCBDUVMZNPXQJZLQLLNDVJQTQRZQFDWPTEWUIKWOWZJRVLYDMGVHEKHIPMBRROBXPUENUHKOFFCASXAMBQFPZGTDBXXSXCNYIGQWMKOFVSVDBLKSFTTIMYRIAOBYPZOULACQHLDTHATVUEZJOEUXYS");
    msg.data.set(tmp_msg_0);
    IMC::DesiredVerticalRate tmp_msg_1;
    tmp_msg_1.value = 0.28651677736361847;
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
    msg.setTimeStamp(0.6032153165425844);
    msg.setSource(11826U);
    msg.setSourceEntity(206U);
    msg.setDestination(27124U);
    msg.setDestinationEntity(183U);
    msg.maneuver_id.assign("BSGIEYLJPYAPXHXEPKYFRJKSBDWCXHPTZVGNOWTUSEAWPFZFQTMHKHTVHJZGIXGZUAMQEGRJOBVNICVFXUYRMEZDIISBYHETCVIDQBYAZLNHZVIHRLRMVIVTKXOJYBNDGCJDTCWJNPMBKRATFNWZWFRBNYD");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.685656500784058;
    tmp_msg_0.lat = 0.20107369374229123;
    tmp_msg_0.lon = 0.7789548916071682;
    tmp_msg_0.z = 0.8505116207088347;
    tmp_msg_0.z_units = 202U;
    tmp_msg_0.travel_z = 0.08459398320780964;
    tmp_msg_0.travel_z_units = 118U;
    tmp_msg_0.delayed = 21U;
    msg.data.set(tmp_msg_0);
    IMC::Frequency tmp_msg_1;
    tmp_msg_1.value = 0.017974438560299455;
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
    msg.setTimeStamp(0.5143479563668413);
    msg.setSource(39337U);
    msg.setSourceEntity(200U);
    msg.setDestination(17389U);
    msg.setDestinationEntity(178U);
    msg.maneuver_id.assign("LIGWCHSWZXJFGVSTAJYZMWONU");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.0027342045732631215;
    tmp_msg_0.lon = 0.4382299747121112;
    tmp_msg_0.z = 0.3853132614647158;
    tmp_msg_0.z_units = 180U;
    tmp_msg_0.speed = 0.9338913532673426;
    tmp_msg_0.speed_units = 51U;
    tmp_msg_0.abort_z = 0.11182913606726164;
    tmp_msg_0.bearing = 0.8992517117375396;
    tmp_msg_0.glide_slope = 179U;
    tmp_msg_0.glide_slope_alt = 0.07214023638125044;
    tmp_msg_0.custom.assign("VZIVNINDJBCHWCTGXRBMAGQZTIVANTLCKOAKZVHSJVTEPJNULRSQFWFVHTRVMCPLMZBVODKTHTEXSNYMFHXGLIYPRFFZPVSXNNAPBYKXGELFKNBLYTWFCWIGRGSRTCIRFLGCQQYDPZKUBMIQAQMTEJASNODYQPWJRSAUMRJYOHOHUKPJFPJICGNUJUILZOZUAUYWSIHAPCWMZDBXDLYYZWGOAE");
    msg.data.set(tmp_msg_0);
    IMC::Land tmp_msg_1;
    tmp_msg_1.lat = 0.7242445202890918;
    tmp_msg_1.lon = 0.6793618690739177;
    tmp_msg_1.z = 0.009584636565736937;
    tmp_msg_1.z_units = 73U;
    tmp_msg_1.speed = 0.790436955927106;
    tmp_msg_1.speed_units = 191U;
    tmp_msg_1.abort_z = 0.9574790999833588;
    tmp_msg_1.bearing = 0.6381206530185995;
    tmp_msg_1.glide_slope = 152U;
    tmp_msg_1.glide_slope_alt = 0.09551094692207218;
    tmp_msg_1.custom.assign("NLKEQPHWYXACSKTGGMLUDBUMAHMSPUVUZKRLZFNBAYNHRBHJSAJALTBAQPFFQOIXCWLXKHTQQUMOMALVMUONHJCFNGILHGWYEJVAFQRHIDWOIVWQCQEZEJUGQXGNLHGOJJTYTLZIYOVDKKWPVBWNWANZCVWXBSBOUODMIXLESMIVNTFZFPYVRWDKGSSJDBBHEFYPDTRJCRSCUDIECVYXBAKYPYMRRDIXRXCGFITUP");
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
    msg.setTimeStamp(0.6590845498277856);
    msg.setSource(34811U);
    msg.setSourceEntity(43U);
    msg.setDestination(40792U);
    msg.setDestinationEntity(194U);
    msg.source_man.assign("IGYAFWNVQPBZNQTYBXNPKCCMRJZXTRRFAHZOEJQSMLMKVFWWFLFCOIQPHBRWRLSPWOZISWXWADYEBBSYWDABYHLDNKMKUEQCSUKYIJCNBOYDMHQAEKZRDIEEMHCHQGIBGEPGEFXTISLDAGNINBBPGOPIONVCRLPLXZXPUVJMFVZVCQUUTGSJJH");
    msg.dest_man.assign("KJLKVQSRDULFNFZGBMQMUDQROWIOGFCSFVYAPMKCLSXMHGXZPLSYVWBYHXXVNQVRAHX");
    msg.conditions.assign("FWEGCFJCVYFNMFDHMFROWVQGKTNMTYZZVIRMBFLIQHDXXSSEVBMRJNHBASUSDHWNFEEBWWMYZOAAEDGXHXYRGMUWUQALLPANBTKJPGSUNLMVTKQDGYKCZDKVSRQGIEGZKTHHZVJPJBLGFYBIXDOUICSJTIUAZKJQCSALAPWPACBWECKQLZBXODTGTUEYREHOMPOOZIRELFCNRHSYOT");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 32074U;
    tmp_msg_0.status = 104U;
    tmp_msg_0.text.assign("ZOBPEEMDYQTEAYMNWZQAIMVASGHFNUXYPBWHMJVZLTFZMFPZIRRJQMFXVTVBQMUZGPONXJPZLAVJFGJEBJWKHNYLAJLNINICCSUKOVRGPEBQUXFTWDKJQVHUXYHSLBPOPFAIQKYEKDCFCMYSLDSJHPXNCODVUCSFLYKGHRKLIBTTTS");
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
    msg.setTimeStamp(0.27717576390842824);
    msg.setSource(864U);
    msg.setSourceEntity(71U);
    msg.setDestination(38399U);
    msg.setDestinationEntity(31U);
    msg.source_man.assign("HNOAKQTAHPRYJULETVEYUBUQTERWTUHFRNVNHKDQXDYDQXNUSPXJLOEBPPPDGOSQRILDIZZBMDUOYVZNDCWBCXIWWGGKBJROM");
    msg.dest_man.assign("SNGGAXXNYBCJBHRTEZPCVQQSSQTKLKWZBHMVPNXZUUUTNDEJISUKOSGKMWFJXAPRKBHSFHQLPNDVDSJRBEINKAJALTPWEEXBLEROLVITPOGUHMWBGZHYXLAVCWUSNVFNIJFUXDWQRJQGAHTPFICRCKEDFYLJQZYFRGRDIYDCCOMDL");
    msg.conditions.assign("ERSMCFYBLA");
    IMC::MessagePartControl tmp_msg_0;
    tmp_msg_0.uid = 237U;
    tmp_msg_0.op = 188U;
    tmp_msg_0.frag_ids.assign("NBVACPQUFZFJXJKRTHPRCZJDWGGBHQOSLRVKCOWIHTYAKIPHRMLCBNCUIYFIISUSXBJNBLATMOODTDLWSHGOMZAMANCEJJHJVZIKTHYRAVOGEQMBBBSGVQWRZQHBOSWPOEUPXLDANYNXCZUNFZG");
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
    msg.setTimeStamp(0.35159486671950757);
    msg.setSource(27055U);
    msg.setSourceEntity(117U);
    msg.setDestination(31094U);
    msg.setDestinationEntity(73U);
    msg.source_man.assign("CNYFZNLSHSQZDXZQZOHBFSWBWAHNGERNUYJZCFBLIJOGFICNAXUWXDBMCXCPERFUGMSAKALZFSRSNWIEHWPNPGJRYHOODAOEDRPTVEVYMBYVGMSARXBWIBJHLEQTXHZCQQVMACIDINTMTDFWYUSUTRSQHPEQXXVIWTGEPLPZWCBVDYMKCXMOAUKUYKQSTOZLIKGANJFLZBHLPKCJHOLJDVGYTJRVIMUAXRJPPOKYKONUFKEVGGJ");
    msg.dest_man.assign("AXRLYRMUIQTRCNOAWASQFGDMKKWCYHSUOXPGLINJSYXLLXPAGRUEEZ");
    msg.conditions.assign("BLRKKMJIHJKPGYCRVYGDFDGREBCVWAL");

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
    msg.setTimeStamp(0.2527897410125506);
    msg.setSource(59450U);
    msg.setSourceEntity(244U);
    msg.setDestination(54658U);
    msg.setDestinationEntity(8U);
    msg.command = 71U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AUCKVHDAGUALRQLOGEUXYPJOCCWWNBJTEVBJHMUUHZRKNIATSMJKUNBXXYFHCKMQDFDIHOLSSWNDSELORRFYNZWDVKRJAISXMDQKSQHZMNDGHNXHGCF");
    tmp_msg_0.description.assign("OPLBCTODUMRZATOGZENXTBSTYCYTVIIDASFNUKS");
    tmp_msg_0.vnamespace.assign("AYFBGCGIUKITQSIILSUWNAZUMOSXPYVSBWOICSMCTDGNSYKXYRWQVATJDGJHFZTFQCEYXRQKAVPWJHAGYOPLJXKTTSDZMQXLTTYLZDWHJNBTDHADIAMBGVXPJECLAOQMOAZZFGRFNPKRCUFCKD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UIONRDLAXKZIPUSKJCEWQBLBYDAW");
    tmp_tmp_msg_0_0.value.assign("ZWJTTCPIFPKVKRURMJTFNXHUHMYMTDBNF");
    tmp_tmp_msg_0_0.type = 182U;
    tmp_tmp_msg_0_0.access = 204U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DLTUUAOWOFGAIHNFEOWYOEDCNCRZIONYYFVJYVEHHUIOHBSHRMCJWTMZTZYTCMHXYDZGTMOSQXDKZPMVJUVJXFSBNOPENA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PCHJGLBTPNXRIVHTJRBVNVZCEKQGEDLYZKFUQZYRVRZBCYSAEPSSAZCOJDOZNKXQXOLFLPIYVFHTBHLFYWOPYFIJLHNKUWA");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 7270U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.2585216948001152;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8430686979936345;
    tmp_tmp_tmp_msg_0_1_0.z = 0.9168155078883746;
    tmp_tmp_tmp_msg_0_1_0.z_units = 156U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.49006340751909505;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 154U;
    tmp_tmp_tmp_msg_0_1_0.duration = 50587U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.9061410251810091;
    tmp_tmp_tmp_msg_0_1_0.flags = 94U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XJUXEYIOLYYEEMUXAGZAVRBUSTCNDULGHZLPJVLBMGDGMZNDEHGIOAFCILCBAUIGNKXJTYJOROZMBWFQHJKSPMKFKUPNRURCANQZQZZVYPBCBSDWHPMXPGWTYJKHIPWFZJRYJRGONQCLORTLXEPTDTGUVFKDCSTKBXRPDDOSQVQMEHVBDVIXCWFTQM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Pulse tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("MFFBRPEGGBYZDTPMMDSJNRFAFHRVSFWITBUAEVGQXYJRSGTSEVPYYZEQQINOHQKWDNLKQTIFRMXVPEFYZLMNKUTAHCGIMVTMQWHXHVELLCLVEXLTPTMZOJSMUJKOXSGNCWARHOIVYBUIHBWCWLARDJDDPWOCXPBBANCZJQUKESOSBXXYGWIJLNCQPVBUQKYOMRHKXLRUBNDZJPASEU");
    tmp_tmp_msg_0_2.dest_man.assign("TAFLIGLGXDFJWQLVQLERERWWBNOGPYKVZQFRJUYQETQTZLYZEXGBMPHSHMKHGPKPROROVWMIEDDJACMCCRQQLVJWALQYMCHLYGFSNRTWXWUPGNVDLCIAMVKGZAWJZVS");
    tmp_tmp_msg_0_2.conditions.assign("FSBOUBYKUCFHAIFAQKZNZMQWVWWXOZVXRRJCTTBWURSUDWZHRCIOELAQGQSMEKPWOHKRCRYMQJGGWZIDCNPFJZQLXJXFIUDRDKVHDIEGBJAFGRLPCBZGL");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::NavigationUncertainty tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.x = 0.010982853562890305;
    tmp_tmp_msg_0_3.y = 0.29164067487941925;
    tmp_tmp_msg_0_3.z = 0.09253861954258746;
    tmp_tmp_msg_0_3.phi = 0.6001597645504771;
    tmp_tmp_msg_0_3.theta = 0.08723936965367696;
    tmp_tmp_msg_0_3.psi = 0.2141429918557164;
    tmp_tmp_msg_0_3.p = 0.010456526547619749;
    tmp_tmp_msg_0_3.q = 0.7005723595531037;
    tmp_tmp_msg_0_3.r = 0.4168699277073271;
    tmp_tmp_msg_0_3.u = 0.28454244472332;
    tmp_tmp_msg_0_3.v = 0.6154515677684587;
    tmp_tmp_msg_0_3.w = 0.733254427572351;
    tmp_tmp_msg_0_3.bias_psi = 0.6172046143275709;
    tmp_tmp_msg_0_3.bias_r = 0.7408675518843967;
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
    msg.setTimeStamp(0.6894984589789853);
    msg.setSource(22080U);
    msg.setSourceEntity(41U);
    msg.setDestination(28332U);
    msg.setDestinationEntity(158U);
    msg.command = 213U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("POUCWDYFECOTBQXPCQIROISEPDORZXZBSIJDYPTXWAHMBVPFBPZGJXNAFZHPZEUADLTGXKCNFFJQRAZFSMNSZAMVJYYGJPAEWRIOXBQELLNYEOCRUKFJHQWJQKKNTGPFMK");
    tmp_msg_0.description.assign("OBMMWFFALNEQVTFTYUZGHKNQUQHEBKEAKPFLBAIFKJTTCJFOAVSTDZBJSPGHMSDVWLRIICEOGLMJTJGIMGKNFDXLROXQTIC");
    tmp_msg_0.vnamespace.assign("YSTMPYFBQQYFUQPEPOBOWBVTQJKJHLDXOZGIYNBBMHECQMRHEVGUVXHOFJZWFIVARPPXSMQPEFILVQOWMLRSFELUEXMFKURVKNQSAKUSWDWYMCPLVAIMLDBRBZTFHDWZRLXBLQIOYNZZNXUKKCTWKHNPCVYEAHUDDHKCEUJVIGVNXNRZCSKIRATPOBKJGHEGJASDRZGR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FFOYNEFJBIFNWGKTLMZMKXZPNZDIURAMEWFQSAPQ");
    tmp_tmp_msg_0_0.value.assign("XQHKKAAGZMYPTRVQBFGMYOOVYXYBTSDELPUDXEVNSKAJLWJENHXURXHHFZCLSUKTUIEFENNCFGNPPCQNAZNBTRHVQFINMBOCGDSUFGKXECDIFXLMSADFTRREBPOSLHMIBJDYHULFZKMHKYRMDDAJJGJQWMWOGZLWIDA");
    tmp_tmp_msg_0_0.type = 115U;
    tmp_tmp_msg_0_0.access = 254U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NRHNKLJMBZDDCRRFYNXXNRQWMKFRWSFNTQJUXEJLCECODGYV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("IWZTGIZVCSXNAKVYELXRDSDRSWIEPPKNJFJGQTWOUSKCIGUGLWLLRCFLRTYKPJYZGRZIYRXXVUTDJDOBPZHUDBZHISPOIMYAGQQDUZFBPHCAEYVLBJGBIHEYQOMBRTRJHFJHNJSAACQULZMZFFBLKVKOXYAXEQGVFVOBMMSYVOCLDTGESGHKCUWKRMXEBTJRPFQPXNLZYVKSUNQNIAQMNBHMXUECFXUWTCATOHWTADDHIPNWNWWOEE");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.28994564102503195;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.4478003440577937;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0860273517396587;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 159U;
    tmp_tmp_tmp_msg_0_1_0.limits = 214U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.11805116086734146;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.82025253306295;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.15403022073728456;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.6663448769140926;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.8187614413208114;
    tmp_tmp_tmp_msg_0_1_0.area_limits.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.controller.assign("OKBWCUNATTIRUDOSJQCCWYDHDDXMQYMQAVLSFJVGUYRRAPTHBPPROSEUZTIUFMBLVABNNFUWJVSGGXJNVTFPWZBZOYTOEGVXNLBFLAUFTDFDWPBVINFEKXQYAEJJOINADUOCXHIAIHEZVPDSZSVSDZCLGNKUNGSYZLMQXOIAHWGFDZCHJNXEQELHXCKFEPLJKJYIRYOBRERBUPGTR");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("MESRLZKRLUAAVAPPRATBZKZPHBQBWXXLTWMIXVYGOODBJMGQGQTZQAYHLHPPJXFXOGHKKIWVYADDUNPJWGJCIUXQRZENWJXRJBNRLVISXGZKWEFQZOOKYEYLIQFCVZBJSIHPJSVJFUDWVRTDOWCSEQEVBANNEWOMIPLNZLTCSCFUBMGHTDLUHROXDFTLFGQSHQSYKHUEZ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeout = 32315U;
    tmp_tmp_tmp_msg_0_1_1.name.assign("FYTCFEHVEORJW");
    tmp_tmp_tmp_msg_0_1_1.custom.assign("HEIOJISBBZEYALTLEZSHRFXWSOXUNLFTNWQUPGTXPEJRUTJBGRZLCKHCPDVYCDPNAUNDYPVMIPYJVQKDFLWXDVKALOGNMIMZKM");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("QQABWQYYNTBMURDMXYQQHBHXUSTKOGWRXXCFYXCPEDDXZJMAHTKIWLRYYGDNEOZSDEKVKLFUYUKELWPNDIRFFSGXGNQPCTPOSDPNCRHMSFCTVMHVWVAVUNAIFSKJBZINJTQTOOELFDAUICJPQCQXIXHIOFEJYCLIRWBIDWEPMVVCOGRRNALFJBUHTOEMHRSSL");
    tmp_tmp_msg_0_2.dest_man.assign("LQCSVBXCDWJERUKPJSOHMPBCVAGXKHGYOAVHZKPCRZOVXVKUVYWHNMTIWUNFISUELGOORIIMJQBFRSVULBCEMPMALKSNNOCFUPDWPGFBJLUITSBFWTLBCTOZSWXWXNQXHJUADRFYPROEUHTMDDPHILNATRYSFDWIMMZVGXZIPUFZBLKSGJZINRQHBJDCGLAOCAGIKYEHM");
    tmp_tmp_msg_0_2.conditions.assign("QBGTDTFAUFKLOMRZOYUTGTTUYHFIMJELZVKIIGBBDSXTAGWDRCZYVSJSVWKHPHAOWCSAODAQBMTNQRIQWCWYZMKQJRREFBNLCADHJMLSOSAVCUBQZWNWDYDHPNPSKCAXZUTYFKIIXYLPEHOKSXNQXIRBJQXBNWSUOKLYPUPXVVUFRVEKGMPZOXJJYRBSCVGFHDWRODELJ");
    IMC::PathPoint tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.x = 0.5987188054401795;
    tmp_tmp_tmp_msg_0_2_0.y = 0.7800236254986841;
    tmp_tmp_tmp_msg_0_2_0.z = 0.6343130641924226;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Teleoperation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.custom.assign("HVVAGFVDMVHSEACBHMWEYNTAYREWYFYPIUYSFGCFUWBWEZOOZDCJKUCLFGEQWPGDPOAORBZSTLXTLQISCOKJAUVRKCFYBKYJIGYWOCTZIPLNBNRLDMRIBRDDIPINGOHGHEQQKBTZCAKSPJNVASHIQALWODXEJUFR");
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
    msg.setTimeStamp(0.5543490595905469);
    msg.setSource(7101U);
    msg.setSourceEntity(32U);
    msg.setDestination(63590U);
    msg.setDestinationEntity(99U);
    msg.command = 189U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MHTLXVCETKKLSWQWQZRVXPCPFEIHXTVYZJSKSJATDLRCBMODOBYIANWRHOAXLEIQPLJWWITQJBMJXBIWPYMJHXKQUESHDGCUXLCPDMHZFBKLYWHFITDABSLYFMEDUOUGZXFJSVZDRNUJSZRFTPORYAGGJDUVCELKXZEKNYQQNSOHIRFFVYBOKQYAHGAFCZCMJINNNYRVCMRGPVPMDESIWQWVPOABGZLQAVUCOKUMTZU");
    tmp_msg_0.description.assign("PIHWMFXJSUZUYERUKPCHVHBOVDPZNVKDDQWCBDITOHZQHTCIIXNALESGFNBZUAKMNVEDCDOGEQRLUHELKYLKTWQBQZYFIXLMGRRMJKAYUEWGMGVTSCRQWTODELTZZUYBGLJEJLPDKIVYVHVPDCIMAS");
    tmp_msg_0.vnamespace.assign("GJKUHVCDSZ");
    tmp_msg_0.start_man_id.assign("RUOSVQQUDLZNZPPWSRHBZMOVRBQGSHGGARSBEIJJTUEKUEFRFYISLOWQPNCLECTYTQMNRHEJJOKDVGFI");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("RSMIGSHTKEBCAAHZLMISDGVTOBVYRURGZXIZUUGXKMDZIWSYRNYHWKWRRVXYCTAFTEXHQVYLYJEPEGHLFQQZXGGYHFKWSZQLIUVSFJRDOMQEVNKZOOBAJEOGFSEWJHWWCJHXYPFAUCKCVEZBBOIKUDWCJIZBXWQIDMLNLEAIQABDJN");
    tmp_tmp_msg_0_0.dest_man.assign("DTIZWNKORMTBNDRPFTSDIRGYKSSUJEHNFFSMNNLUTUOROWAFMRAUPBWCCGAZHSNZGPNFYSNEWEEEAYWDKNCYOVGJFGJPUXJQRLALUXFWVYHZEPTHZPZKIWNRQVUGDQLVAQMXMCKBTCSXKIRVDDVEJMHHBUPBHXFCYGZKJBSLODBGMIZKLCBTUGEBOPCVRXXHZCTOXLFQGAJOWUWMJVZLOXLAFSWQCHAERHYSPQMQDVYVQAKEPJLIYOTYITIIIX");
    tmp_tmp_msg_0_0.conditions.assign("BKQQPWRDYUMYXVSEKIXEZSAVCQUURNWHBHKU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::WaterVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.validity = 129U;
    tmp_tmp_msg_0_1.x = 0.5454744854594858;
    tmp_tmp_msg_0_1.y = 0.7543742673137284;
    tmp_tmp_msg_0_1.z = 0.9306320274539707;
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
    msg.setTimeStamp(0.7392069340694422);
    msg.setSource(394U);
    msg.setSourceEntity(21U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(77U);
    msg.state = 34U;
    msg.plan_id.assign("XVNESNORAWIGAKIMQXRDDLDOPUIWPJCHBADELEVFDAEPZMRVGCSGDONBLOUOEAKFXLGFQNYPDLWXMOHVBCYTLUOUINHUKCTJKISEVSVFPYTEUHMGJXZQKMXHXIRTTYCEFZJWTGJISRKZPFUBMGMNYFJHHVWRYDUPMVNSKKIPVZONTHXJXRZHUNYDJJBALQJAQWKQ");
    msg.comm_level = 175U;

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
    msg.setTimeStamp(0.04065693962593586);
    msg.setSource(46688U);
    msg.setSourceEntity(22U);
    msg.setDestination(59050U);
    msg.setDestinationEntity(138U);
    msg.state = 253U;
    msg.plan_id.assign("APEVWKIIZAQWEXUKOTASSJQJGGMORNJMQBGSDKYIZUECQMWTKEVCDOBYGCDKBZLVVQLPWNVEDXTATHOLJRFUPGQSFTENOKXLEJLHSRBWMYWGBJZNQYYZDMCUFEURDTBCVURPRUNAHHGVZWEFCLOHPXPI");
    msg.comm_level = 227U;

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
    msg.setTimeStamp(0.9287015346418218);
    msg.setSource(49943U);
    msg.setSourceEntity(149U);
    msg.setDestination(58746U);
    msg.setDestinationEntity(101U);
    msg.state = 253U;
    msg.plan_id.assign("WRCEWZJHGYOXMVAEYAPJBMIGQRPBEYGTOMPQTFWZXSSQVDANYCFZVMHDOCEXUKIWVLYSTMCKIUOXRSTPYEJSHICYBJTQIXCIFDUSZJCWKIPARPLWKEMMGBYIPBNYDDJQIJUNHVHCSVUGRTFWZAEQOLPROBOFMVTXKJLMKFDCAUQQNAGUNLUTNNZDAZHFNFKBREMSODHFQOWGPOYVAXBZCJDLVRPKEULSJUHBEGTNGBGXRZIHL");
    msg.comm_level = 40U;

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
    msg.setTimeStamp(0.9379308287814792);
    msg.setSource(36258U);
    msg.setSourceEntity(11U);
    msg.setDestination(30010U);
    msg.setDestinationEntity(173U);
    msg.type = 64U;
    msg.op = 168U;
    msg.request_id = 27465U;
    msg.plan_id.assign("EOYCOMTPVSEDVMFFSJTRMJCCXHISALCUXAEAIWQHDPNHPVIRKXDAHWRULHJZWBXRAVNTNHSKUHLMPPNAKUGQSCALVEWBDGMYSQGDQQYWXCZUODWM");
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("VJXPEJGTNJUYURSPCHSIHNWWOUKBPNYTTBEHGLMKRBKPLIEDSDLDZJWVWITBGWZYVXIAPDZBYTFUSIKEGRCVYBTUANOGFZVRERDATYKCLDIKQDFJRQOCMCSOQYCWDFSMPWLZJXAZVNKMBIQLMFREJGJMO");
    tmp_msg_0.value.assign("NAKZSMBKWKLTRUCKYZQCYJVUNDOCZRQXXRHGAXORIXWEGFCYWTOMDEXBLOUNCQGSGIXEHMYYFGEABNPLNAEVEZJAIACBIFEDOXLYHFWHOWBSNPHQKHMLDNTIJMZVRJGBGYWPXTFVUSJDNJYRPEKTVVULT");
    tmp_msg_0.values_list.assign("GLCUHBOUXCPSSNWXALKPAUHILYTEPXVDNRHJF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FASJRRJFFOQKHKWBBZAVZUETERRGCNTQXIQTVBSDNIJDLYUJLMKZHNQVVWEKTBTFCTPTASSOEGUGSMTOYUYCHNXBUMJXJCQQRYKXIGPKPMWUOZAEHBVPTVXXQMNDLHQSHJPJQRBGIMOQOPWLXWMBRUIZCAKVYCROYOYFDGLUFOFRYBYZLNGDDEYNLHHBIAOGKXSAAEDDNAUIMLZJZPVIRIFLZCNEPP");

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
    msg.setTimeStamp(0.7856020859820756);
    msg.setSource(14418U);
    msg.setSourceEntity(240U);
    msg.setDestination(61309U);
    msg.setDestinationEntity(71U);
    msg.type = 53U;
    msg.op = 153U;
    msg.request_id = 38108U;
    msg.plan_id.assign("CRITGSQLAOIICDXLFWEUFCUZCPLQHJUGUAY");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 95U;
    tmp_msg_0.eta = 36011U;
    tmp_msg_0.info.assign("WDEYAJTSWGUZYANZXYFMVHDMXQYWRONSRNECDCMNFIUFIAGREIMBZLOVASSCPICRKLVXAUYZWPWAGCUTLXGTOPZQMUKKUENDRV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CUVTFJIOHNDBTKEDTLWIFOLTIJZ");

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
    msg.setTimeStamp(0.1787020867950403);
    msg.setSource(4006U);
    msg.setSourceEntity(223U);
    msg.setDestination(50510U);
    msg.setDestinationEntity(227U);
    msg.type = 113U;
    msg.op = 148U;
    msg.request_id = 58842U;
    msg.plan_id.assign("OMKAMJRQNCSLSTLNYGNPZJHWYLKTNBLDZKFFWYPQQEJVPISAYCMBSGPDCVWFZYMXUAMUTPBECDFXWIVUELTEYNAXFCSQEIVDDAPTFJRBEJPDRBDGFLWXCQOIRXURUQKODZELPXACGAIWUPZNSGOVKIHDROOMEIQNFZTX");
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 19225U;
    tmp_msg_0.priority = -40;
    tmp_msg_0.x = -26136;
    tmp_msg_0.y = -9555;
    tmp_msg_0.z = 25086;
    tmp_msg_0.t = -5740;
    IMC::EntityList tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 99U;
    tmp_tmp_msg_0_0.list.assign("SDLNRXTZKOXGGPUCPCLYVLQURHBQNWEOUMJOIBYVICBUZUBNVOXPKKYTUWNOSJBEMAGRZNJEIHINWFVLSQAGHADWFKYWNQXLHVGBDRJZDACPXGDWBTSACZTMKXIMIRPXSJROBXMEDVRQNGTAREFFTZHCCVTMWHPSOGSGPFRJAYTNQMJYQQFBDKOKWEEUHERZCWZZLJNKD");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AIVMGXFXVEKZYUDYNIKNEMIJRNYYNYRWQAWZQTMNPYZLKUUBGQCCACADCPUPOPLKPTDOHIQZVGUYTSFIFRGDLCMBSVHIFECBUXHJTHUTXKGMGMVQXBSRVZLCDDNHFHRWBBZPKRLVOCTQPFSWZBEXBMGLPPWLIJSQMFSAOYQWJRPOWKVYEFHDHOCKHVZGQGNAODFKTRJOAOXERLEMSELXOWIIBJ");

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
    msg.setTimeStamp(0.07030812263528252);
    msg.setSource(4232U);
    msg.setSourceEntity(99U);
    msg.setDestination(45466U);
    msg.setDestinationEntity(242U);
    msg.plan_count = 24189U;
    msg.plan_size = 1801717816U;
    msg.change_time = 0.43335682696000244;
    msg.change_sid = 1542U;
    msg.change_sname.assign("YPNSCDEGLWEMXSGXVHZRIKLIXDAIHPALTPTRMUHRIGCRTABTWLNTVJSZTCOVPSEWEKNYKUSKJRYXHOQSEFVJTRMYCUWLRHGXPIGBPDZVAIBVNXFQPKAAERDQKLIWWMOBZQMMCFFFNMQIUKBCYQUHWMHZOKTYGJPYPJERGXHSXEOAVCZBZZLAFUOQBNEFZDMUTJLOKZSNOG");
    const signed char tmp_msg_0[] = {52, -68, 72, 65, 13, -61, 25, -5, -12, 68, -32, -100, -33, 1, 73, -9, 6, -84, -119, 84, -29, 95, 33, 65, 87, -81, 71, 90, 54, 27, 22, -47, 16, -17, -1, -67, -39, -56, -124, -119, -78, -56, -121, -41, 33, 113, 90, 88, -11, 47, 50, -85, 84, -120, -31, -71, 0, 115, 25, -37, 59, -113, -81, -121, 44, -36, 85, 55, 18, 91, 123, 123, -110, -7, -40, -62, -1, -76, 76, -52, -113, -37, -114, 98, -5, -71, -58, 45, -104, 33, -127, -23, -81, 76, -63, -45};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SWXIWQFPGVNYHAZLSNZGUQKCQDYRTGTLWKHSGVECHXRJCHIELVDKJNJYRRYHYJUQWIWPFPVLKUSNWKD");
    tmp_msg_1.plan_size = 56794U;
    tmp_msg_1.change_time = 0.6990177537507688;
    tmp_msg_1.change_sid = 26099U;
    tmp_msg_1.change_sname.assign("GBDDRCKBVTSHYAOZKMSYSVZNJQXTENCWOLEIRUHGXOTMKTBQDKLNLJTIEYSTHGNJILWQJLRUXRHFCPPFGEDKWNHRQQJIIJJGGKCGFSAFMLYMUMBQDXBPXVTXGXYRATAAOHSZYMWU");
    const signed char tmp_tmp_msg_1_0[] = {4, -77, -23, -33, -46, -82, 113, -23, -52, 116, 48, -85, 20, -109, 74, -78, -48, -85, -6, -110, -127, -114, -111, 98, -71, -5, -78, -44, 29, -15, -64, -61, 18, -41, -59, 116, 48, -37, -126, 99, -15, -110, -117, -21, 53, 89, -40, -67, -122, 0, -123, -100, -29, 78, 58, 52, 93, -71, 64, -86, 71, 119, 30, -58, 101, 80, 104, 114, 90, 9, -17, 77, 72, -5, 123, -37, -113, 114, -45, 75, 95, 89, 46, 51, -4, 97, 81, 10, 105, 6, 23, 65, 32, 82, 23, 119, 25, 105, 119, -26, 44, -111, -126, 40, 41, 32, -85, 73, -32, 30, -29, -115, -39, 119, 5, -63, -27, -87, 72, 8, -99, 45, 43, 74, -112, -42, 126, -103, 46, 103, -52, 75, 100, 25, -97, -92, 31, 37, -6, -70, 12, -121, -25, -57, 59, 70, 88, 44, 13, -73, -104, 108, 107, -41, -8, -119, -112, 118, 3, -70, -70, -28, 7, -120, 16, -91, -105, 79, -104, -53, 53, -63, -89, 12, -126};
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
    msg.setTimeStamp(0.9443986261993074);
    msg.setSource(59536U);
    msg.setSourceEntity(242U);
    msg.setDestination(45504U);
    msg.setDestinationEntity(253U);
    msg.plan_count = 28221U;
    msg.plan_size = 1918219912U;
    msg.change_time = 0.41875441954103554;
    msg.change_sid = 54763U;
    msg.change_sname.assign("GZURKTLAZXQGGOVOHPALCKREOIJQSJOFRB");
    const signed char tmp_msg_0[] = {99, -85, -75, -2, 102, 15, 22, -1, 101, 70, 116, 113, 78, -69, -54, 107, 52, 81, 65, -57, 84, 114, 20, -110, 109, 97, -81, -104, -23, 44, 121, -59, -29, -113, 24, 87, 83, -57, 102, -60, -75, 29, -107, 121, 65, 23, -90, -61, -111, 55, -89, 80, 32, -104, -118, -125, 75, -90, -57, 96, -32, 83, -76, -112, 16, 33, -120, -29, 74, 70, -54, 67, -7, -26, 25, -119, -81, 98, 110, -12, 37, -44, -109, -123, 33, -100, -71, -19, -15, -23, 45, -82, -45, 25, 32, -98, 37, 6, -112, -96, -82, 118, -109, 23, 116, 88, -113, 126, 41, 97, -50, 65, 76, 16, -9, -34, 5, -118, -33, -116, -36, 64, -101, 107, -35, 94, 24, 48, 113, 3, -50, 48, -18, 16, -100, -106, -126, 25, -124, -35, -25, -77, -2, -125, -66, -51, -37, -23, 18, 104, 104, 15, -39, 10, 102, -18, 47, -95, 124, -33, 20, 25, -37, 20, 122, -41, -79, 7, 22, 50, -34, 40, -35, -92, 4, 27, 28, -103, -67, 74, -96, -86, -69, -28, -48, 82, 66, 71, -41, 46, 48, 124, -102, 106, -91, -45, -127, 110, 73, -52, -40, 46, -35, 9, -120, -20, 37, -26, -123, 111};
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
    msg.setTimeStamp(0.12819533150160456);
    msg.setSource(64042U);
    msg.setSourceEntity(24U);
    msg.setDestination(28050U);
    msg.setDestinationEntity(105U);
    msg.plan_count = 29631U;
    msg.plan_size = 3602594946U;
    msg.change_time = 0.9965093038758489;
    msg.change_sid = 1046U;
    msg.change_sname.assign("JFJDRMCUBHYEHOGBSDUOKIFFZAZHEUSVVRFSRWMLQQGEQDQNPAROIJSFKTILFIBZAMOUPASCHELKIXQNWXPDTIZZYMRDPJWESAVOCXXQCRONNGCB");
    const signed char tmp_msg_0[] = {10, 82, -117, -42, 82, 2, -26, -75, -41, 62, 22, -67, 79, 63, 101, 13, 85, -115, -54, 93, -102, -49, -39, -79, 37, -89, -71, 69, 105, 60, -57, -60, 123, -8, 25, 86, -58, -46, -88, 8, -67, -121, -80, 24, -114, -38, -48, -55, -76, -79, -114, -26, -26, 114, -51, 69, -110, -79, -114, 101, -93, 100, -90, -102, 35, -7, 78, 115, 102, 37, -102, -117, 50, -20, 83, -29, -124, 111, 12, -110, -13, -110, -67, 39, -20, 27, 110, 66, -4, 57, -22, 10, -5, 119, 30, -70, 105, 75, -18, 49, 70, -19, 60, 53, -52, -108, 109, -113, 28, -30, 115, -2, 15, -52, 90, -88, 49, -19, -20, 71, -105, -75, 43, 100, 15, -27, 62, 0, 58, 90, -11, -43, 10, -107, 109, 86, 42, -75, -49, 76, -77, 47, -38, 107, -53, 1, 120, 55, -81, -98, -128, 114, -35, 62, 37, -34, -90, -67, 126};
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
    msg.setTimeStamp(0.9088742541168193);
    msg.setSource(6483U);
    msg.setSourceEntity(181U);
    msg.setDestination(63583U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("IOVZQPQTKRSIALAANDZMWXAGCCLQRTKYFNHMFJBLKSMPFUOAVKESXZLGYCPMCWKIYSODDHDHIGHLERNYIELDVTTTUXTJFWRXQFJVPCJYHHSOPJFZYVHZBCUANXYAUOEDTQNRWTJMBJWNQBPQDEKCNPWVOQPUCFUAMURZHLISPGSOXBCNMLGLUVXEUFDIGGIXAYWIOWFABKDZSHSXYBMETJKZWGRGWDRKJGEEJQVUXBYEFPZRBVLZIQR");
    msg.plan_size = 16048U;
    msg.change_time = 0.5236025642227794;
    msg.change_sid = 3392U;
    msg.change_sname.assign("LLEFIEPMRVCCJSWPUDBHKONOMQDOHKPSMASKFYMSZXDZUBUNEMSSISKBELJQUAANYBFGZTTVXKYXBWUWAYXXZXLYIQWTKZIZXTRJCETHWMVXGMIBKCOUJRNWQLOEVZPPIZRZJTPLINRCEDIHXFSVJNLOFQHBLTWREYVFRVQVOHNBGBHQTQVGIVOJCTQAPDWCMSMJPLFNBWDOYUHGAQLXDCZUKGY");
    const signed char tmp_msg_0[] = {-98, -58, 34, 7, 39, 117, -49, 79, -7, 19, 117, 96, 19, -87, -54, -73, 103, 56, -8, 72, 74, -103, -6, -8, -37, -43, -49, 61, 91, -44, 78, 68, 8, -8, -114, 112, 111, -26, 14, 110, -91, 54, -75, -92, -5, -51, 124, -113, -70, -60, -80, -55, 40, -85, 49, -107, -20, 57, 90, -120, 98, 51, -101, 50, 49, -48, -116, -19, -30, -114, -109, -83, 24, -49, 21, 47, 2, 44, 80, -110, 59, 9, -74, -58, -27, -51, 65, 0, -71, 70, 118, -3, 31, -28, 94, 11, -21, 72, 120, 27, 77, 96, -116, 111, -37, 96, -12, 15, 0, -78, 73, 6, 40, 93, 79, 81, 54, -114, 7, 10, -93, -21, -11, 51, -26, 95, -108, -108, 93, 22, -10, -75, -113, 3, 126, -20, -86, 109, 74, 66, 108, -51, 124, -14, -102, 97, 116, 29, -106, -27, -72, -2, 122, 124, -11, -113, -114};
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
    msg.setTimeStamp(0.9107322485743475);
    msg.setSource(45228U);
    msg.setSourceEntity(102U);
    msg.setDestination(21369U);
    msg.setDestinationEntity(183U);
    msg.plan_id.assign("LJNUMYJAPZHGWWCOCDGDMGVJGXHYIDASUTUDPABPTOJSDMIOLJIVVFJKAZUOBHDNETYNNQXENJIRVNELPUILMVDDMRCYEFRTSNJGFHFUKXSFZFVHXGZFEXBMHTSZQXPBEPWXYLFCKVMARRQAGWZLETZXKICTJFYFSIRNEKKIORQNZKSVRHQDBMBYQWVQEAVO");
    msg.plan_size = 47958U;
    msg.change_time = 0.1319916961654749;
    msg.change_sid = 60172U;
    msg.change_sname.assign("UDJGTQVXAZBGJWWBXGCWIVLZHAAJNMZEJUIPKNNLKOUDBZGDVWFIBPVHKUTMCSJBFQUHYLBFRJFOBTMEIYIISYPOKTZQHKEODRWXRKYWYSBACNSBHMDKJLVEDZZLNQTNEFXEWRHRSFNVOVEPLAYFVVUOTFZYBGRAEQDWQEYARCPHLCUECNAHSORSMPINU");
    const signed char tmp_msg_0[] = {-104, 56, 42, -22, -72, 107, -20, -94, -50, 20, -124, -11, -77, -44, -121, 89, 22, 56, -125, -87, -9, -118, -114, -75, 50, -118, 72, 117, 60, 1, 49};
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
    msg.setTimeStamp(0.49967055951809614);
    msg.setSource(34722U);
    msg.setSourceEntity(126U);
    msg.setDestination(65429U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("SCGFCVXXMXMTQIHDWDUWSGIWFCKK");
    msg.plan_size = 46505U;
    msg.change_time = 0.6748930895851921;
    msg.change_sid = 59968U;
    msg.change_sname.assign("LZYQIVJIDRSQVKZEJRAYEYVMPYQSGSKDEJHWGNNFBYELLQNLXVMOHNZYAIKNQDEZPPEWKBDTKRTPODTOTGBBWBDDPSUHJUJZABCMOCLAOELQQHCHNVSTNXXHAHYVIMGGFGOSTYPIGHPFKBSCLFWOOMMAUXPZAXUNJKWSQV");
    const signed char tmp_msg_0[] = {-83, 49, 112, -27, 95, 30, 82, 7, -14, -69, 82, -119, 60, -60, -119, 45, -117, -37, -79, 120, -33, 113, 118, 23, 88, 122, -81, -31, -113, 20, 102, -125, 63, 119, 66, 27, 18, 6, 126, 13, 73, 88, 20, 43, -13, 63, -37, -3, 53, -114, 30, 3, -85, -74, 101, 60, -89, 33, 105, 80, -53, -68, 30, 48, -98, -79, 4, -127, 62, -78, 56, -46, 82, 26, 78, -90, -47, -11, 58, -68};
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
    msg.setTimeStamp(0.6196484724353578);
    msg.setSource(31346U);
    msg.setSourceEntity(130U);
    msg.setDestination(48547U);
    msg.setDestinationEntity(176U);
    msg.type = 180U;
    msg.op = 187U;
    msg.request_id = 13845U;
    msg.plan_id.assign("IDWSXCDCJMXWFOPWWUTFLKLZGRJKVBRVQRETGONAUKTHIMPDLNZRLDZKSJCTKJOHUZQCSXCMHFEYBVXNGEYJIXQKBYACVDFGIAWTUXQLNEEIGEISSUDHJTCRDAOFPLEPALLVSDYODYFEJVLGYIUMKPANQAMHRBMGGZJTUUYRMUEMKIPTHRRBXRYNSVCBXYOFSHQNKOPQNXNQM");
    msg.flags = 5438U;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.06584581239615628;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GBVEYXEHGOTRAF");

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
    msg.setTimeStamp(0.5001907184119875);
    msg.setSource(16293U);
    msg.setSourceEntity(61U);
    msg.setDestination(22965U);
    msg.setDestinationEntity(249U);
    msg.type = 27U;
    msg.op = 11U;
    msg.request_id = 6810U;
    msg.plan_id.assign("HXRWLHUUMABUEKSWOEHTWQXRCTJECDVJVPOMIIYQBQJMBTGHMPLYNGPEWARLAGFYLOYRMXCGOFNCIZWMHDSFIMSJMZGDQPDXZACRXMCAMLOKCVPJVNFYHVYNQEXKNZBPGQBYVEUNWISTHYDJXVZBKVBXZHPJSAOETTTIHOCTXUVRDRWAQTGAFNFIFKLXIFHCZPBURODZU");
    msg.flags = 37008U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 5472U;
    tmp_msg_0.lat = 0.46814160714855;
    tmp_msg_0.lon = 0.8790731671024662;
    tmp_msg_0.z = 0.6126505192143856;
    tmp_msg_0.z_units = 229U;
    tmp_msg_0.speed = 0.9125924457700251;
    tmp_msg_0.speed_units = 33U;
    tmp_msg_0.roll = 0.689317534542361;
    tmp_msg_0.pitch = 0.3193023960750263;
    tmp_msg_0.yaw = 0.5212746963347359;
    tmp_msg_0.custom.assign("ZGXCBXBSAPGUWUSJPTYJTWOMMKAGQMJDTOWKOPSUVKFIIRMVBESXXTPACFVHONTZASHLGPOZVJBRLMHPBNVYFFRLQNGZLADQQCEYNQJAXCHXMGHNBTDUETNRBLHYHOKQIMVPNDGAIVSJZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VRBNKKFUQRXEDWSKXKHZSJLSLZDBLIMWIAPXUGLFRJGELOCBVFHHOTOLJASKVNHPYNVWXHUBMCMRYYPSZUXKIFHGZCXBRTPOMYLGOPIWPRBZLNKAVZSQXGEIADQTAOCGQEQAFESJGERWHTVYONMTQGFNNIBETMVVJOEMZDXNYCOFTFBJAD");

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
    msg.setTimeStamp(0.342780542445556);
    msg.setSource(15488U);
    msg.setSourceEntity(25U);
    msg.setDestination(62826U);
    msg.setDestinationEntity(31U);
    msg.type = 202U;
    msg.op = 50U;
    msg.request_id = 4135U;
    msg.plan_id.assign("VEAPBBRJTNRVNOGIIGOHRRQKGTOTEQCJXWUURJAEGHKGMKXTOXENWXFXQPXBSSVRJPVJFXGRZSBOQPIEKRZCHAJJDWCUKVLEOPUGUZCZQAHINCLNKNSDXKZKWFOAKYZWYDFJPLVUVQMDVWTWWQNAUHUQNDDBIPCEYLASSKMZLMOZFBPYINGQFYAHVFBTESSASUMLIHLDCVHWLIJCRA");
    msg.flags = 17578U;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 231U;
    tmp_msg_0.error_count = 91U;
    tmp_msg_0.error_ents.assign("DMHFFBRWRNYPBWXDMRICXITLLQLTAVAGDYFSDM");
    tmp_msg_0.maneuver_type = 24890U;
    tmp_msg_0.maneuver_stime = 0.6066793323586787;
    tmp_msg_0.maneuver_eta = 29782U;
    tmp_msg_0.control_loops = 107386914U;
    tmp_msg_0.flags = 209U;
    tmp_msg_0.last_error.assign("GFALBCUHMBJFSLFSTKDYGSPDWZTQEUKMRLTJKOPXCQJVIYYSNGAXMIYJWJBOAXUMJTZZHEHBHFWGGPRJCVJLHCUAMEMFNSFPWNMLOECIA");
    tmp_msg_0.last_error_time = 0.5045037519472291;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KZLMOKAPVVRUFOIXNMFNUYJGQJJJRMFXAUGUSAIEPBYLWKXKWWQDRSQGHCHNZRXMFQYGBXYPLNDZGBESLUD");

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
    msg.setTimeStamp(0.20747844004313065);
    msg.setSource(61481U);
    msg.setSourceEntity(224U);
    msg.setDestination(4779U);
    msg.setDestinationEntity(200U);
    msg.state = 16U;
    msg.plan_id.assign("AJAAUPVYTFPZWMERLDRHHQNMVXUDRXDHEPYYXKLLG");
    msg.plan_eta = 284912506;
    msg.plan_progress = 0.05559871718089182;
    msg.man_id.assign("SCINFTVOGIGWYDUOLPQOWQYDBVTTLZDYEMCBWVJUNCHBOPUZLDZKMJTRASGVUIMGL");
    msg.man_type = 5351U;
    msg.man_eta = -1744102978;
    msg.last_outcome = 206U;

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
    msg.setTimeStamp(0.8572409737786955);
    msg.setSource(64501U);
    msg.setSourceEntity(12U);
    msg.setDestination(19978U);
    msg.setDestinationEntity(147U);
    msg.state = 139U;
    msg.plan_id.assign("NPYYWGGFIIMPPYVKJWXCHXZAVJPJNOSCXAIRARQBJPBEGRPLLQLJVQOFMPAUBHVEQRWXPXKZVWTGWMCKEOZTREYIGJWDNICTFRBSZBQEHGWPMUCTGZLNKDNGLINCLASSUXHINDZDESYEAUXOXNYXOWMRMFQFCVHSRWVMTKDYRT");
    msg.plan_eta = -2058476068;
    msg.plan_progress = 0.6511175216068198;
    msg.man_id.assign("VEXZMFDPBASSOUKERPUVJISXLATAYIVQBGYJYLDEPQUTBXVNZUURTQGTLSRVCJXZAWMXHBWBOHJYYFKWTNIOPRDOKHTDTO");
    msg.man_type = 59879U;
    msg.man_eta = -291157923;
    msg.last_outcome = 143U;

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
    msg.setTimeStamp(0.8724082924501636);
    msg.setSource(36598U);
    msg.setSourceEntity(9U);
    msg.setDestination(31259U);
    msg.setDestinationEntity(64U);
    msg.state = 50U;
    msg.plan_id.assign("YDUZMRWDHLQXUBEOWNAPKAWJDFSCMDSKPXFVGMFUEBVNXVOPSTVJBWEPEUGXIELYU");
    msg.plan_eta = -988951601;
    msg.plan_progress = 0.34768703207194374;
    msg.man_id.assign("KGJSPXEQPKBPXEBIATAUOSUPMNXDUDGMSTFUFWKIIRIVJPQLASNMOERKSJCCVGPLQORUNRZGKNDNAZPXHMZYOVYONLQFYFGGCVMCFAEXZHQSFHFTJSAZECLJIDLJZTUANDYQZV");
    msg.man_type = 35204U;
    msg.man_eta = 1237344516;
    msg.last_outcome = 31U;

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
    msg.setTimeStamp(0.3170131010380427);
    msg.setSource(60029U);
    msg.setSourceEntity(225U);
    msg.setDestination(20645U);
    msg.setDestinationEntity(89U);
    msg.name.assign("VTMBNDEWTZZAMPCUEMUVNXYLRIGTNELFZHXAWBCBASEFEPJPVZORZEFCRJQINNPZIDROHFRDYYKIPGGRKMQVXIVATSLIQSMPWYLRZGKFIZSETQJAARJBOULJBUCKXNUGAYSQWTJLQZLOHJXICOYTHP");
    msg.value.assign("SWPGDEZOWRDYPUVKWGZFTZGJMYUFMNDBWHIRBDLZA");
    msg.type = 1U;
    msg.access = 238U;

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
    msg.setTimeStamp(0.4267352939700949);
    msg.setSource(51939U);
    msg.setSourceEntity(19U);
    msg.setDestination(6299U);
    msg.setDestinationEntity(238U);
    msg.name.assign("FDUFSDSNRHEGJKKFKSTZZPCCMLHIKABBNREHYGDFJQMZADHXOOZACMWWOXQEAINPJTWULNCTIRPEGDOYVCMYRLLHFZVSTT");
    msg.value.assign("FARDOODORCFCJHHMYWIE");
    msg.type = 106U;
    msg.access = 131U;

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
    msg.setTimeStamp(0.941631574188548);
    msg.setSource(14080U);
    msg.setSourceEntity(194U);
    msg.setDestination(28803U);
    msg.setDestinationEntity(154U);
    msg.name.assign("GYDMPPSCLWTRCKLTQSLOTPWVDKLFHEPFVIEXLNLQACVLVXDVZXSEMFHXBVEP");
    msg.value.assign("ECJOQWXIBBSTJYUTFKPFAAZSMRIBYEVRZLRCXSUTZSSVIROZLZCKUEMPBDVGTICOAYJQGMNETYXHSVJVPSIMIEMXBTARHVGUOHMFWQBNUPTADWZVHAXPRQNEAHZBHYFFGPJECXOEJHNGMJFLYWPLETLDLZHUYMOTWZNRWIVFROWUALBHRNDJKRAKNWKIOXLIAJXGQPKBDMYGKGWDSLFVDQLDBGCONHQWZUODPCNUVEXFD");
    msg.type = 61U;
    msg.access = 27U;

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
    msg.setTimeStamp(0.37094944880586933);
    msg.setSource(13456U);
    msg.setSourceEntity(85U);
    msg.setDestination(868U);
    msg.setDestinationEntity(67U);
    msg.cmd = 38U;
    msg.op = 186U;
    msg.plan_id.assign("HQQLXHATUZMMKIFJHAJIUUKNNFGMLBFAVJKABLUVBDOJPBZYHRPJBYS");
    msg.params.assign("SPAWCHHOTDGWLQOVTYURIKOUEVNYEVEBLKFFUJNYKYQGGPSEJWGZANPLDYAFVCFREKLZRSZEOJGZAXJNQXQMKIWAYTCKDHSJDABCYHSPKUNHKQFRMVAJIMLCIEEUXSXXEPQTWGWTCNTLRENUHCZBBQRTFPLPUVRNDCZFSWIDACBWKXYTHOVBMUOLGBMYPXOSGRJQNOMAFVWSGMCQMFNRTH");

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
    msg.setTimeStamp(0.5402786818636345);
    msg.setSource(40736U);
    msg.setSourceEntity(176U);
    msg.setDestination(55211U);
    msg.setDestinationEntity(120U);
    msg.cmd = 234U;
    msg.op = 147U;
    msg.plan_id.assign("TMIXYUAIAPWVNUZIRIJZHORZEPCDVDZMBKEOQWTXOAPKSCGIAMCQMNZGZUFXDUAJAVGKINBVBSOYGLWFIIJOLQJCTRPBXCUDHJRWQNHHJEWXZPEKEWMUSDYBKSQBCDGQMPOTTANGNYNYBEBASBNVSHRTFGVTDKHLHVWHXAPSXYLSOCYFDIQERFRKFGJDYONLUOZUXZCFJHCUKWMRKVDMXLYXNLVESPZJJERLFITPBVSUPQWLFQATQMWKMYTFRO");
    msg.params.assign("OWHZMRXOQAQAFXKWJIFQNMYLMCUPQOELKLTXWRGAVKBNURZTDJB");

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
    msg.setTimeStamp(0.22365458733451293);
    msg.setSource(54774U);
    msg.setSourceEntity(11U);
    msg.setDestination(35778U);
    msg.setDestinationEntity(253U);
    msg.cmd = 250U;
    msg.op = 226U;
    msg.plan_id.assign("FWDEANYYUEWDMQUVURCNRQRQIVJTXKKJSAUCRQFGPEIPYFNXWZWKTBKYBSLLTWGKBQMEOGHPEMMPUOMIJXRGXJNRFEVYSWFSTDKGYOEFJVLPCRWZQLYPDYDNMIHJTOAUDZVIOA");
    msg.params.assign("YNIIZIYODPINRYHLMQYZIFDBXYBXGZPQBTMJEUXXSTDUMDRNBPETCSNBLGECWALJOKHJWOECQTJSTKFBFJORFA");

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
    msg.setTimeStamp(0.8007044061358629);
    msg.setSource(24836U);
    msg.setSourceEntity(116U);
    msg.setDestination(46445U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("VZZKAAVSQDRHOHKTZNABYUYHQJEFMNIQAMOGVAJDDWLKPNMQXIMNQCAPLAKHDTIXCRGGFUEJACRXBEJ");
    msg.op = 184U;
    msg.lat = 0.7138507092545979;
    msg.lon = 0.6624183085862905;
    msg.height = 0.4943528737502254;
    msg.x = 0.5340854308333132;
    msg.y = 0.1392493514612575;
    msg.z = 0.9776288252831548;
    msg.phi = 0.6495987606017573;
    msg.theta = 0.7814670754556294;
    msg.psi = 0.9400637293438266;
    msg.vx = 0.18909007109556075;
    msg.vy = 0.7169569406508132;
    msg.vz = 0.9620420003275482;
    msg.p = 0.4033925415904276;
    msg.q = 0.22735778576949572;
    msg.r = 0.49059957069313886;
    msg.svx = 0.6845057835399584;
    msg.svy = 0.9209159012117969;
    msg.svz = 0.01102244557954668;

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
    msg.setTimeStamp(0.043730682669089416);
    msg.setSource(47637U);
    msg.setSourceEntity(176U);
    msg.setDestination(37767U);
    msg.setDestinationEntity(12U);
    msg.group_name.assign("BHNOGHKOPIKWJMEZAKPBZWTNRUCJDBPLQHBTTLZQTUGCTLKXWHLMKAWXW");
    msg.op = 153U;
    msg.lat = 0.28609192523892835;
    msg.lon = 0.5772052116157382;
    msg.height = 0.3403255734564884;
    msg.x = 0.3779332461964974;
    msg.y = 0.7889564413042769;
    msg.z = 0.001011820868832669;
    msg.phi = 0.51974474335431;
    msg.theta = 0.509125587910062;
    msg.psi = 0.4512882096525075;
    msg.vx = 0.10911504420512341;
    msg.vy = 0.4597872302070455;
    msg.vz = 0.9422807433309219;
    msg.p = 0.6762418779233942;
    msg.q = 0.6551715551006286;
    msg.r = 0.7413963848303383;
    msg.svx = 0.7838837786705732;
    msg.svy = 0.3810920967420359;
    msg.svz = 0.4991086988811342;

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
    msg.setTimeStamp(0.7714853863738889);
    msg.setSource(33569U);
    msg.setSourceEntity(189U);
    msg.setDestination(17378U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("ZWHKSTBJTHJGIADDGYZCHQUPXPXGGDBQKUXSNQPVCKSOUGNSZ");
    msg.op = 171U;
    msg.lat = 0.8108921245981708;
    msg.lon = 0.6508754123925435;
    msg.height = 0.8224021005542235;
    msg.x = 0.5271459172208721;
    msg.y = 0.2777727821168957;
    msg.z = 0.4991001754680008;
    msg.phi = 0.6472231930919019;
    msg.theta = 0.10152591245158005;
    msg.psi = 0.44103968310275143;
    msg.vx = 0.037076102986968285;
    msg.vy = 0.9712350562831988;
    msg.vz = 0.18347201262006418;
    msg.p = 0.7834468504405927;
    msg.q = 0.8621277215914412;
    msg.r = 0.2780566933702956;
    msg.svx = 0.6511992495030996;
    msg.svy = 0.358171607610721;
    msg.svz = 0.48561686169146767;

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
    msg.setTimeStamp(0.8706980891214647);
    msg.setSource(14908U);
    msg.setSourceEntity(92U);
    msg.setDestination(63911U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("NUQTDRWLBY");
    msg.type = 128U;
    msg.properties = 245U;
    msg.durations.assign("URIGDDUEKTZBKTNUBRPWHSCMYCGZVESEBSISAMSOPXRAPTMHXWXLPANWHBHICDGMISDFLQQBQFPARPEUORRKAKRRVBQGQXVXPYJOKEQKKCKMQPUGMNNOYDCILDHILZJJBUZXJQWBZQASHWFOMCSOOAJX");
    msg.distances.assign("OVLISHMHVIAYBCAR");
    msg.actions.assign("VGUEUXUEKSOCLQEBAPVHPTALHTZNSFNWNHMQETXVFOWSRYFBWUADDUIPKY");
    msg.fuel.assign("UDMFCSNYZFLUYORHXCIEPQXNKGFAGXBZPKVONAHLTQDMAZTYRBFMLEDBCIIBKUVVSJNYCVWNERRYVKWWIGTHAEDSZXUWSSKAOQZJVJQWEPSLJNSEPFQDFOTIVJ");

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
    msg.setTimeStamp(0.7230321537291159);
    msg.setSource(11664U);
    msg.setSourceEntity(108U);
    msg.setDestination(39703U);
    msg.setDestinationEntity(249U);
    msg.plan_id.assign("FKUZSNTOWDRQYLSNWCSVSPRWKLMJIZGYKTQUCFDIPOPPOFGMHMMGZNZCCGQICDXPQOVOCLAMFWQELFRVUSEIKTLAAHRZZHGIFQWBRMXXDNFXZRJBAEZ");
    msg.type = 200U;
    msg.properties = 99U;
    msg.durations.assign("IBSUPZVZTTKDAYUSXTQBBEICLPEMKKJJPQDTUNAECPYSPGLXJIOTRTWEKLACSEJNIJXZGGYOHMMRMMVBKYXELEPQSFBBCQZVODUROCIQYKVILRRASFZVXBQULNDCHMYIFHKABNQ");
    msg.distances.assign("SKPUQAYPFPPAIEOIZGMMGDECYAIUNETOIHDJCUQJHSGKXTGCLCILXXKSQBMFHRLUEMDHUXLDHVZNKADVJYQVTXVCZANWULANUGFAMCSCMPQLSFSRPDBLKQXIZESUERKDXHBJTRPHIBBQJSWQMDALCOWVKOWRJNDWEWXJBNHKMYGSRTPRECKFFAFJRAHYFEXEMNWUYZOLWGOVOIMYOYVNCNXZTQRKGZJWFZTHZVQPTBIYBGVSLBW");
    msg.actions.assign("MBNXUGAVHIFUYIJYVSGOMWOUVIXGQODTQSGPUFYUSNAKYRYUHEPICTWBMPREBDZLESNCSQSMCLVTBWUHLRQNLJAMLCQDYUNLRTPOODTPPLNIPGEMPJQMRIKOXANRWKYCZAOETMSXKWAWOUXGVHXKXHDKLBAFVDZZCBOTKJEHXVSQEIPFCJYH");
    msg.fuel.assign("BBQSJEKSVZVGULWTHNXZXVXQ");

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
    msg.setTimeStamp(0.45476635217215444);
    msg.setSource(43482U);
    msg.setSourceEntity(213U);
    msg.setDestination(49701U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("DFFRQOGJUNJINKUCATGHRWI");
    msg.type = 9U;
    msg.properties = 249U;
    msg.durations.assign("XXRCNAXCHFANKOQDYJDGAOQOZZSWUQHRNPEVPMZPTNLOQPQMVYMZFHLWGTYABUTFFKKJTGDNLVBXJSSVFPFSXILBYPCVYLGEEIRBWQSMIODFDTBXGKOVKZPXMBRAXCSVGYMQLEHWLFNNXMJRAHEZBYNVQHZZGJJICEYWDICJEYFYGMSMUAIRZLWTAOWKL");
    msg.distances.assign("RAYDQNNYEWUGXZEJSEIIDPYAVXDJFOVYOSANUWQFMUXOPWBEBZHGUQTMRITDFEGVNEUQSCKEDRNWALRZSMTMLTYHDDNYGAWAVDMQGGJJSJRUCVCAEJFOWWVNIEILXBPVHHCBRYFLLKOCLTXBNZYJBGXYIKTVHPOSHBUFMQODJJHWKDWYOBUIBC");
    msg.actions.assign("AIISKDRUCSZYSIHLFDWHEOJLDOMQAXXCRXKPIIYNELFIGKVNVWLGARZQIANVKZGBPQDZZBBJMPTAAMNDBBLRRDSCQVROWPOVKEFQJKGBMORDTTHVEBZHNVYPCWWKKLXQTPLAQZJJGLHXZGGAEXEAQCUUDZYMPTLUFJORPTKIMFNBZCUOMGONHTUEFUYHTYJUCINQDWFSVPMEK");
    msg.fuel.assign("IJIFYNHYWRHKGCJSQHUCTBUZJHVYUQJGDAIGYAWQRICGIKKZOQCHOUOWOBTMBEMZFSTOXANDFCSOMVXYZDEGBXNXOJFNMLDIQCJUGIZXRSTYXVSUSBODPWPUIEVRLKMLHWPLFRSDRN");

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
    msg.setTimeStamp(0.0046986983847535635);
    msg.setSource(62109U);
    msg.setSourceEntity(174U);
    msg.setDestination(24757U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.09527456318876126;
    msg.lon = 0.8644445723636779;
    msg.depth = 0.044564482975490316;
    msg.roll = 0.14630007390773958;
    msg.pitch = 0.9605347389616187;
    msg.yaw = 0.7715432339917278;
    msg.rcp_time = 0.36047309272913763;
    msg.sid.assign("BGOVZPJOPOVXCAKHUBEBHKAIYDHPEILBYUWCJPXCCLZSCMVQVJFHMBJXALKMRDSMUKKUWWKHAHUUIRELIBTKEQRLLZTEROOFAFFHWWLVJIANPUTHNPRLISGPBXPGRRQOIFVDNNIWZNZXCGSVDSCCREXDZGTTJMQZ");
    msg.s_type = 147U;

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
    msg.setTimeStamp(0.3628164963083428);
    msg.setSource(64660U);
    msg.setSourceEntity(143U);
    msg.setDestination(28099U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.8114507113068925;
    msg.lon = 0.15811168479177007;
    msg.depth = 0.46967923277251666;
    msg.roll = 0.43413983505202325;
    msg.pitch = 0.1893701844377621;
    msg.yaw = 0.8435699800105165;
    msg.rcp_time = 0.3449237378077392;
    msg.sid.assign("PGYVVQWISKUIYBLTCVCNRGHTQJCGLSGMHJLXJYXVTMMJUZKXRTUBERQDGIRUITAKUDAHKBHUVOXJZZNCFIQUXDERDERZRQWQHHOFMAYZWNWOEFFZPBJYPNILHFTJPVYKKNDBVXLDNNQRNAESKXMVTPXBMXAWAEIPFGALSPHPNFSDOIHSMTWQTJSGUZZQYCCPLWYOGOUEOKUEOJGBDMNGIZFFD");
    msg.s_type = 193U;

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
    msg.setTimeStamp(0.62289873707082);
    msg.setSource(11115U);
    msg.setSourceEntity(90U);
    msg.setDestination(48619U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.7025847903257365;
    msg.lon = 0.35466196894491975;
    msg.depth = 0.33732986537663046;
    msg.roll = 0.9376124239428734;
    msg.pitch = 0.5508869950578742;
    msg.yaw = 0.1303927575355598;
    msg.rcp_time = 0.052206363896878494;
    msg.sid.assign("FGOKXKJZSWFCLFDSGIU");
    msg.s_type = 109U;

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
    msg.setTimeStamp(0.15755329763847292);
    msg.setSource(16838U);
    msg.setSourceEntity(86U);
    msg.setDestination(46732U);
    msg.setDestinationEntity(234U);
    msg.id.assign("PZGVTLNSYTUHDMOQLYTUSYTVKEDBTSLHAMUJJWWZEISQUNFFIXPAYXFGWJFBXHHMCRNNGRVJBVUQYZCFQRVIXRQORVLMGRCDHYSGHMQDTWHQPGVPVWQKIIJROUOPEIZKEIYVMKDYFSSWLKEUZMEWCZNCKTUCAVHAMODPJNEPHAJKBTIXNOJDYZYBXGKLPBICGWASCWTXQEFKQODGGJSXRLHEAJLFPUXXBNAFRORKEIZO");
    msg.sensor_class.assign("BHFREJDVYJCGTPFWYCAOIXBHNPRLHLPSOBZOXWHIKVYFELKYCCPAJGOHFRKDXKATLMGSQOWZYWAAMPPHNLJ");
    msg.lat = 0.17044844365924328;
    msg.lon = 0.6656754785405211;
    msg.alt = 0.8237313283161014;
    msg.heading = 0.9545612383393893;
    msg.data.assign("ZLCHFNRTYVRYLGCVSAPTXSMRKFJIJXNUBOAVPGHQNISEXTTBBMMXABVAKJDSGSLFKYGKYNMHUOUEWFSSNHYLZOSESAWPDEQJEXZJDRNGHMDQHMNSCOEHKHLMBPRKDKNCYZBZWPMVPWUOXAGHDFCTVJLCMXFLBIJYQQCRCFQGIUFTRRUJNFTAMTOPJZWQCVCIFZETNUPJPLGRWWWPDQYWQIZILWXQY");

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
    msg.setTimeStamp(0.22738962516452854);
    msg.setSource(24380U);
    msg.setSourceEntity(250U);
    msg.setDestination(13305U);
    msg.setDestinationEntity(107U);
    msg.id.assign("NEEXGBUNWBCATDNJIWMFQSAYSWUYAPVZSLYGQGWHPSRNMDXOVSITVJCDTVPEESDGIIRLSQWLAXHYIKWVJREAWMKSUPPKXEGGUZXDKOJPZILKLTPHLQFMMQTMVOHZNJFYKEBLCLSPYZNJTJO");
    msg.sensor_class.assign("IIBINBAVFJYVVAUHJTSVDQEWNWTNHCRJVRODBIUPHSMMSZEUUTIQGOHOWEJYKYQLOYMBRAGPTXHEAPLSOMGDCRBXZKAPUKCAJDCYRINNWLWFOYXNFJZDBUOJYHGDWIRMCZPIERQKXTBAKHMNWPZVNKLXPLHFTMBFBYQRMLFZFPWKXLKGASOELVTJFUXQQGMEVSQYLSZYVJVQKTNUDKUGGCJWDCSOXUWFFPETTCCISXREIDGDOCRPGAZXHB");
    msg.lat = 0.7204742925575363;
    msg.lon = 0.2869411064607964;
    msg.alt = 0.31535811012007753;
    msg.heading = 0.3722508951873368;
    msg.data.assign("RWQKWLSOEKPEFEEKPMHBCPRZPDKUNBILHFELRWCJLSFELHZIDGCQMIZINKUCVCFVLFIMPAZUAGO");

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
    msg.setTimeStamp(0.9900351742421106);
    msg.setSource(28679U);
    msg.setSourceEntity(46U);
    msg.setDestination(45849U);
    msg.setDestinationEntity(22U);
    msg.id.assign("XLYNILTQBXNDYBSBXZHSKEU");
    msg.sensor_class.assign("RNIJAVPQUKKLIXMCSYKHBNRCBQWPHJYFQZMLQFEIXYGLEVCIOTWVSINAQHXLKWZFRPQAKTYRWVUWSWVOHDOJURQUBDLQIUHGZFT");
    msg.lat = 0.9547450808656542;
    msg.lon = 0.7682892873166014;
    msg.alt = 0.7948213658325185;
    msg.heading = 0.3450635051634573;
    msg.data.assign("IUENABYWXEOOXDFMXPPRHAVSPUVKBKDLEWDATCQNXPILPPIXS");

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
    msg.setTimeStamp(0.740888669072229);
    msg.setSource(39499U);
    msg.setSourceEntity(148U);
    msg.setDestination(23976U);
    msg.setDestinationEntity(235U);
    msg.id.assign("DPEDNNHFHNLNYHAWBIRCDLYMHCACZPMWZBVUK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZVFXUBEXRUYYJBEYIRQAYNDBIDOSJMOXJMPUOWHKSCGWBOFUTOZGGIHVVKEZKXPVCAWJUIBDYDURNTKSBBCJCHGJYIVQWOEESRTZQPFELOUSQPHVKMLEIUIMZWRNIQIDNZACFFCSPSWLVFKWRZLZNRKRGLJWYJTTHVNNGTXZQQHWFLPKAYSEOPNNLGFOADYABXPA");
    tmp_msg_0.feature_type = 2U;
    tmp_msg_0.rgb_red = 11U;
    tmp_msg_0.rgb_green = 94U;
    tmp_msg_0.rgb_blue = 138U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5748510082408419;
    tmp_tmp_msg_0_0.lon = 0.9344609498658047;
    tmp_tmp_msg_0_0.alt = 0.11862987869235853;
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
    msg.setTimeStamp(0.1929492982410138);
    msg.setSource(44661U);
    msg.setSourceEntity(127U);
    msg.setDestination(59801U);
    msg.setDestinationEntity(89U);
    msg.id.assign("WJEJWFWIBCLNNIRYJQQUNDMFNTYMCRLLGSSEENXTDCLACPUHTLZFAOGGYQFBBOKOQOSTGZXKREVHGQBZSGAZOAOUJCRYHFVAZKFAEUKAQCRGMJTOHWOXNXVIMMDLHXVFIWPYPSUWKAXBURGCUUHGRLKUVSKIZSNRPOPLYPWYLWODXMCHVSIXGLVMJZYVEMIBVDVPHRBJHCESPYDETZSEBIRWZQYMBTCDTXNDKXKQJFFNEJJATI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QGUBXCGZHGXUIKFJQDLWMRCLHIRCULQGJ");
    tmp_msg_0.feature_type = 224U;
    tmp_msg_0.rgb_red = 50U;
    tmp_msg_0.rgb_green = 95U;
    tmp_msg_0.rgb_blue = 180U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.21339865928791402;
    tmp_tmp_msg_0_0.lon = 0.19068844555245368;
    tmp_tmp_msg_0_0.alt = 0.7212907272602301;
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
    msg.setTimeStamp(0.36571640385593374);
    msg.setSource(45656U);
    msg.setSourceEntity(77U);
    msg.setDestination(54161U);
    msg.setDestinationEntity(172U);
    msg.id.assign("WNMTQUIALNLPKMDGIJITYJBSFHKLBFQIDNERBSXPAZJTYLNZOZCGNPPUWDZNAEHPFQUNFB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LXMINLRKFGRNAGIUQGMNLWDVOFRTOYXAVIPGGNONVCPTZGCYLPDVP");
    tmp_msg_0.feature_type = 76U;
    tmp_msg_0.rgb_red = 69U;
    tmp_msg_0.rgb_green = 21U;
    tmp_msg_0.rgb_blue = 175U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.598647136882412;
    tmp_tmp_msg_0_0.lon = 0.7103072273097947;
    tmp_tmp_msg_0_0.alt = 0.40845054540463044;
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
    msg.setTimeStamp(0.5986766937615617);
    msg.setSource(41314U);
    msg.setSourceEntity(142U);
    msg.setDestination(1569U);
    msg.setDestinationEntity(193U);
    msg.id.assign("BZVFODWJZKGASNJSAVGDCWYNMHKHAMHFZOTAHUTPRMWZSDZCWUPETHYIERAQFXJDLQITEBYVIAXQBEEUBHGSPALIEOYQYGZMLEXZCNORTKCQXMFRUIEGDMJJYJHQWFMTJVJKZFWPDGEOXKWEXLSYLUKBHMVIFVDCNRKFGJPOOYQKSOALLCCOPCNFBXTAAYPGRPURVVXKSRHKQFU");
    msg.feature_type = 149U;
    msg.rgb_red = 42U;
    msg.rgb_green = 73U;
    msg.rgb_blue = 131U;

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
    msg.setTimeStamp(0.5645497110560967);
    msg.setSource(4851U);
    msg.setSourceEntity(69U);
    msg.setDestination(31071U);
    msg.setDestinationEntity(55U);
    msg.id.assign("SXPBPKLIQYKXCCRMMGOJGLONJL");
    msg.feature_type = 218U;
    msg.rgb_red = 148U;
    msg.rgb_green = 60U;
    msg.rgb_blue = 237U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.10539393849254697;
    tmp_msg_0.lon = 0.3676125628468434;
    tmp_msg_0.alt = 0.043608306825833276;
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
    msg.setTimeStamp(0.10564817057974762);
    msg.setSource(39258U);
    msg.setSourceEntity(167U);
    msg.setDestination(16738U);
    msg.setDestinationEntity(51U);
    msg.id.assign("FUCNEWJGMEMIWJCEVLFIAGCXFWBOMAIRJAYPJWEINDVTVTDYZMUOLWCSTPVKFDDCQEGUXR");
    msg.feature_type = 101U;
    msg.rgb_red = 250U;
    msg.rgb_green = 80U;
    msg.rgb_blue = 66U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.36186624020197966;
    tmp_msg_0.lon = 0.5954972291137601;
    tmp_msg_0.alt = 0.48714116642116767;
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
    msg.setTimeStamp(0.054693733298236014);
    msg.setSource(28620U);
    msg.setSourceEntity(226U);
    msg.setDestination(16460U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.6264096619565026;
    msg.lon = 0.5687281614102307;
    msg.alt = 0.9947723838866126;

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
    msg.setTimeStamp(0.07985622789004887);
    msg.setSource(17652U);
    msg.setSourceEntity(8U);
    msg.setDestination(8139U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.4777919402103412;
    msg.lon = 0.8951660633349162;
    msg.alt = 0.37955107113797293;

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
    msg.setTimeStamp(0.21533100194906252);
    msg.setSource(4601U);
    msg.setSourceEntity(153U);
    msg.setDestination(47527U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.6031495447258516;
    msg.lon = 0.09076163484756483;
    msg.alt = 0.5465525028485586;

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
    msg.setTimeStamp(0.7912630008924195);
    msg.setSource(35318U);
    msg.setSourceEntity(92U);
    msg.setDestination(41487U);
    msg.setDestinationEntity(42U);
    msg.type = 65U;
    msg.id.assign("QEHOYNSRTFMJAFVEJCWULRVBNQSNHYIRWNFLBOHWRDULKCCBLFFMGUTPGSUGLEEFQSGLHVPUGONAQLZFARDIRTHFABDSKYHSHEYIGPMXJYLYMOXNZTXGCDCEDEUIDRANVYQAEZVGJZBIKIZPZMOWOMBYZHVGKPVSCRSWJYABZKAJQBJMOBOXUXKDWSMKZUCTQOXATTUWDTKPNWCIEQWZXXTXVF");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("LGTCJBZWCNJWCKIXCSARAQXLYWBMJLIJYGRTSJIPBKZXDFFHZXAJAEXZYGDQEDOIHNHEHRPNOHLVEPNOYMDQMKVRYSTBTPXUDYMUJJSUKUYWLDVFWLWABWRVEKKBXUNTZBDURHMCFNAUCTKTFIJZKBQCXVFTWSPDOIIEDYKZGSGVNQMARUQDMYFPTFUEOZZGEFLUQVWIVIG");
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
    msg.setTimeStamp(0.8325204087586091);
    msg.setSource(63873U);
    msg.setSourceEntity(149U);
    msg.setDestination(23203U);
    msg.setDestinationEntity(41U);
    msg.type = 135U;
    msg.id.assign("GQEBZMSTJFIMZGTPEOTRVPGGEVSDAPYQYVUZQHONRXAVSMHXFATRZBLCQQHEOFJBWCUPLDBLHLXGADTEJWORSYGXYVNOMMWWFGPPOAZVKLBUOLQCIXERFJQKWZASCIFOFPIZATAVWNNNUVMDQKUDTHUIZWHLRDFNSAUCITIFKNXLBYJFBCEQUKEURNRYXSDLSUGDCYZMKYBWTDMVSWEJNYKBCXHCKHPIOHJMETKQYDLKV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50660U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.08898622214463259;
    tmp_tmp_msg_0_0.lon = 0.31408487883751124;
    tmp_tmp_msg_0_0.eta = 3665285090U;
    tmp_tmp_msg_0_0.duration = 38674U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3629504710701057);
    msg.setSource(2505U);
    msg.setSourceEntity(71U);
    msg.setDestination(59949U);
    msg.setDestinationEntity(221U);
    msg.type = 86U;
    msg.id.assign("OUXNSKMSCCHMANRNCYWRLFEZJTUOJCPXYVJDCIAKQAVADUFEUKMLZBMBRSCZERTYBCMKGHZSJGLKRWRDVWTMRHYFQQGADXZTUVSFYKHOBWOPATNEFHPGBQMWJNOBPZYFOBEUXTCFKRHZAGNWAILSZATGLHPBGPHODOXLDSBMUPWYIVUDMTSLOQEIKHSOFVRQBSEPILXCQGLGQTHVQKDGUNDMWENJFEXXJJZJIEDWAXTVCUQNXPRYV");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 84U;
    tmp_msg_0.text.assign("DHYYYIXLWRAQQMVJDILYCAOCKHZXZPDAREIZPGXEPAUVFPWVAYAFTLBHVXBKOQSMCLFEWTOTVPHDVXWGOEKPJXZLGYVOTUENXTBKRLANFDCDZGYFQNMYSJBKEITNUNDCKN");
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
    msg.setTimeStamp(0.19612574804211658);
    msg.setSource(40176U);
    msg.setSourceEntity(57U);
    msg.setDestination(64878U);
    msg.setDestinationEntity(30U);
    msg.localname.assign("NCIXIJCUUBHYZUFPVERDVGMJBXVSIQEZQFMAWGNCSVOBYPTDUYFYXKLKBAENDGZFSDVZLOBFGLZTLOVEDUXWQAQCVNTFHDPIPKJJACHSWTFLSMIROVJQHIRKUKEPHKMHVJCGUTNMWEXMDIDNCITNUPOAOEFPBPGSEPEUHJYHSZQXBKLMGBZWMQRSRLFBJRVMNXXYJGDLH");

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
    msg.setTimeStamp(0.9954761545752882);
    msg.setSource(20055U);
    msg.setSourceEntity(138U);
    msg.setDestination(60776U);
    msg.setDestinationEntity(146U);
    msg.localname.assign("SQQQJJIEICUDXDORTRWCLHFTOGKSBGLKIXGLPWSAMMCEUMGBEBRJRZTEWIXLTYYQCVFORTKQCYSSAMZFFYLUZQPXQKUWAUMFIDEMJLSJNFIPBMJEXKQEYKRGZGOZEDXASRIOHCCDEHPJDYNLNPGVNQATMKOVXWOWBVFQOWKRALHWZBJTBAJVSDPJTIHKOVMOUFSBABTFENPXGSYUCHVLZMGZCVUNIKHTNGDWHXRVXILYADZVCNFAUZDYYWRHNP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WWOZHEVVHT");
    tmp_msg_0.sys_type = 245U;
    tmp_msg_0.owner = 39076U;
    tmp_msg_0.lat = 0.45872660106117713;
    tmp_msg_0.lon = 0.4930231192761291;
    tmp_msg_0.height = 0.3134327333821111;
    tmp_msg_0.services.assign("QJUMGBLVQFCZOWNYIJV");
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
    msg.setTimeStamp(0.6134313947702159);
    msg.setSource(15725U);
    msg.setSourceEntity(158U);
    msg.setDestination(37839U);
    msg.setDestinationEntity(212U);
    msg.localname.assign("UBYDDHHOZLNJXKNXSSQENKZFNVJNYUOMRKLPEJAAQZMOCYBUIRIWDDKPIHTCSORXUFYIFVVPJCGDQHICZDXPTIAYDCKMQJTKWWSBZCWXCQIRVERQQAOCGXEBAZBQOBGPWHSWGHMEXAVUTYBFKTDBTTEULGOLOCJLJGQUXJAVFOJGSEHMIZBPHGMSUYAVEANLPLGSYRDMZLQCWTGSSHPINDBUAKKJFU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MZQUKAEYZPSABXICISBCNMPHRCIIGGNQJPLWFTFDZRXDEPQHVFYWPDDUSEIISGXQTOHDOYCCJVZMOYUMJXKQKELMTFEKPGUFOAANSILSSBTTJTVJLMKHDMCKXJXSXHHGRDIYCVRXRNZTUOQQWGYWRBKOCLQNSMHBZL");
    tmp_msg_0.sys_type = 65U;
    tmp_msg_0.owner = 17010U;
    tmp_msg_0.lat = 0.35643237959390417;
    tmp_msg_0.lon = 0.6932690546980752;
    tmp_msg_0.height = 0.02692749287026852;
    tmp_msg_0.services.assign("INHEIGCABOFKBNAHDYJFKJDUTCEIGFWVBEWEMAPAVVHMSZZPSZIPBJFNDGWUADTQYSCUDOKYRBQLYSVOFINKHRUIGRVMHTGWXHWDGBGQRVRTTONILQUCZXWCDXREORPJSBLAKPCCMHMZOPZEOUDKQIXDBKIBMEYJVEVWHYLKTNYQLHXUWAOYRRXQSSPMXLAWNLQOXBIATAJUKUTNMFFLJMTPGVLUFQCYLECEG");
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
    msg.setTimeStamp(0.3474312079375643);
    msg.setSource(51691U);
    msg.setSourceEntity(115U);
    msg.setDestination(56108U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("TPBAGDDFRXIEJDLOCTEOAUUGYIXBRZAZOFTYMVKDRIMQLPUSGBOEHKSIZJNRPKUVHFBNMMTTEFUQQVNVLSQVSNQFTASBGMZIKOFJCTIWVHDRDYTFEWQGJBBWOZCMPNZHVNMLHMEPLGPXSHXOXWORAQPVYJQLZABKWFGEIOPRIJNHUXJHXLSDDJK");
    msg.predicate.assign("IJAHTRSYFOKDMYIQCFDNFGIGLBRRLGUUIBRXNYPLIAUUCEHTLRCIHSOANVFWQXKUXVJASJJUPVSYMHWMGOGGMNMYSRCMPDTAWMSZLFVCADDLFTBBMKQTJTUZOQWVZZKXZECEOKPSTZNAPICJDHSPYYGXCVHKKBNANBESNWC");
    msg.attributes.assign("JSAJITWFXDHTSSJFHFTQMMBRGWXPLVMVRJACNQTDAUWZIVWZLNGGDERYEXOXZPXMBEJ");

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
    msg.setTimeStamp(0.7559837680470264);
    msg.setSource(21790U);
    msg.setSourceEntity(10U);
    msg.setDestination(24665U);
    msg.setDestinationEntity(83U);
    msg.timeline.assign("GIACKDTGWJNYXOWUHFMSFMPNTJUCM");
    msg.predicate.assign("HUIGURFEQJHLKRVXPUGDSOOVGNSFOFZRYALHUOUUZEZCOQEMRKQGRYPMSEWTKNPNQFCPIMPUCOQWNHEXMBTLCWJVIYKXXISXNSYMTBISCLDUXBIVZVMEHQFTDBSJVORRIYNPYXZSHNBJOKLYFTUTEEMJFPEAGARZDGKPGSGCYALQIYBANBJORCJBIRAWHJKHAVPVWLDDWNNKJCFMMQQFAXVILHXZBKZOKDJZWTCZFDTV");
    msg.attributes.assign("MAWFPGINKCLTPOBYMQMWURQEBMZEGSHQIHDGOLKYFSJECISFUKABFPECFEVILCPIOTGSANVHWDAGBJKPBKZXNHUYUHKUDQLXCZANKGKYNYCPYLRNUSBRMDJVMJNWBUQIZNHWPOQICYATRCRVFMZXPEOUYXMVIASWVCXOSKTAVVBBLZMXNOTFCXOLBADJATHGQDQRYLPJDTZFDHELGRLKSEHYUWIJ");

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
    msg.setTimeStamp(0.8186741485389418);
    msg.setSource(2448U);
    msg.setSourceEntity(198U);
    msg.setDestination(7511U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("WJWHRQZLFV");
    msg.predicate.assign("KWHNZNJVSETHPACMUVBBOGBULCKVDULFYPNTZWMKYUHXHX");
    msg.attributes.assign("IDUROIWINRPSQJFBYQUTDVSJIDSYOONHUPZJQWAGU");

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
    msg.setTimeStamp(0.1474850040240363);
    msg.setSource(57024U);
    msg.setSourceEntity(89U);
    msg.setDestination(23261U);
    msg.setDestinationEntity(215U);
    msg.command = 222U;
    msg.goal_id.assign("HNQKJEHGSIPTRLRDGZXIBJZVGJUTDIHHSWPHZMBLVRKYYLXMPUFBQWDFZWEFXLNOZHNQLISTTXZKGONDAOBPPQLMRJWMAPSFYOCNCLDOJYNAZYUSKKSXIOGESYKDCKIRMFOJTARAYVLIVRUBDJZXELJXFKECCMFUABNERJVFVGQFJSIWXMYWXWOE");
    msg.goal_xml.assign("YPLOPBPZCOGZDIBHSJOJDGFYDLRWDSBTIWDQHXFJSRNIGTPMUVERKUVIPDFKGVTYTVOFITQAHEYJJMXNAFIKCWEACATKBVVNVH");

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
    msg.setTimeStamp(0.3740946710397519);
    msg.setSource(38186U);
    msg.setSourceEntity(32U);
    msg.setDestination(47353U);
    msg.setDestinationEntity(189U);
    msg.command = 42U;
    msg.goal_id.assign("BDJUYTRFEBFDWKPSISKLRBAPOUUVKYDCJZKVPEEOEPTEPHLLOJOGBRUXSYTYNCZEZDWTIZDNXXSLRMFWDIBWAFVFG");
    msg.goal_xml.assign("VRFICRVVITPNCNPHJCWLWZQ");

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
    msg.setTimeStamp(0.7681120904845407);
    msg.setSource(35028U);
    msg.setSourceEntity(72U);
    msg.setDestination(3855U);
    msg.setDestinationEntity(137U);
    msg.command = 151U;
    msg.goal_id.assign("RUKMLMAUOZRVZTYLHBNHPWTSQEAHCMMSADXKOAUIDYDLONGZYGGFHPGOQFLGQXPDSAKITBXNMSTPEQXRDTULXNEKFRPXJZGDWSCJJPHOLQRNCUFNWMGBWSUUQRZVBGOYCOXVUKHFEDNAIECOXPUSJENBGBZFEQMJZVMHINVABGRSTYBEPZKLMHLFCPWKOFHJJDKQTDIWLXVVRJNIIWBQJATDRWWZXPVHREM");
    msg.goal_xml.assign("TFLQONZBYDIEBZXGKYDCQFMVQRMBMPMHAMJKPHDVLHXRZNCPNMEVUKJLJBIFOKVQFLBQYLSOCUYZQLGKIUITMSHDVFNMDQQUIVTRBAOCUGCEAPUKZAYARTWWHPRGGWXYDNRLIOBXGIIBYWONSMVLISPKPFPHLABEODEAEOXANERBQVUZZKNJECPUCMVDGJQWVWGAWDZNJZFGRFDTX");

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
    msg.setTimeStamp(0.3171840890220051);
    msg.setSource(38646U);
    msg.setSourceEntity(194U);
    msg.setDestination(25955U);
    msg.setDestinationEntity(179U);
    msg.op = 213U;
    msg.goal_id.assign("DQNWURUSDOIDCQJJJDXWINAZLMEDVTSZVRRYJCJRKIDQEGPKGXYAVOTXVIAYYLAFCZPCTJEQHWOQJBMYKKUKFSCFBMPFNOFIVAFONOSDLYBSIFSEGRRZQBIGL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PRRDFLBKCYUBDZEQJNRABVBUEIL");
    tmp_msg_0.predicate.assign("OMIQXUPLFJFTHVBMWGAMBKLNFBPRAOLVZZNFIKBEUDTQLFUQSCTDOMJDGEAHPSJLTESXXQALWVCWFURSPWGORTSZAXKXWMBCIYDBOSQZRQRAXRIMTPWYASIMIODGHUDXXCYQMLATVCPAGSJNKJVDSTARLJBWYDPDBNZYFMNVKRCINNFROWZQYCHTNYGHHSJENELUXMOBKFCJNTVGCUHPOGRZJFJZOVIZQXYIDKEWBK");
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
    msg.setTimeStamp(0.3621598826102148);
    msg.setSource(3734U);
    msg.setSourceEntity(34U);
    msg.setDestination(16957U);
    msg.setDestinationEntity(20U);
    msg.op = 250U;
    msg.goal_id.assign("ZNHVKFYVEDUMJBTEQXMKEANVYIGVMAXIQHHSULCROBMLLPAKZBGKRJOKTBJSVZMOTYDNVBJYPYXIDEFZDEEKRXBEUCRBWFGPXCJUWRHIOLIIHYYTDBNAP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XWHAQXNHCVIWTZGMBDBWPRQHVNMHBWJEVYMCQEHXTHBBTZASMLWPTFJZCXUCCLIZRRQFOSTRSFMIOPDUKGYBIHXQVFEKAKNDYKWUNMOLWBRFAZYWIJVFQDMNUSJUWAXUJPQCXCOOHZICNBSAYZPKDIUTGKOVMFDWLAUMLYELSTPOJTEGINQSEHUFVGQXGSSCDDJMAZEBLCGRKVAERFLVHLORORIFBEETVXGYKGRDTO");
    tmp_msg_0.predicate.assign("AOQZVDWBHBZOMGSAISUNZKUXIUHZXYTWAVMGDHVHZCEXTDEZFMBTFMBYLPUHICOIP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OOZHLTKZGCAYZOPPYFHRHSEBVLGLJCACYSMOXKNQSMZANOIYIRWDTPFNRHRANCIZTEQRIFYDRAKRKVJSEXHFBVQTBIGNVUHYGBMVQCBSKEPWDHJMLJMGA");
    tmp_tmp_msg_0_0.attr_type = 200U;
    tmp_tmp_msg_0_0.min.assign("WRNPOMWQAAXTVLZLLNRMDXGQVTKUETRWSBCIMSGILEUHALMJJUAROKIFCBOIPTVGNZCZRDKBOKBSHDDLZQASUBRNGEGYLYIXNXUBSJBMNOTFIJVFXJVMDMKLSLAQIBYGWWFNORCJINVZTGHBTXPVLEVUUQPDWFKYOXFFEYHTZOASDVPZARHGJSHZFWCPYPAUFXCEKYTBAXFYCGQYZHTPCMROSPWNYGXCI");
    tmp_tmp_msg_0_0.max.assign("ZEISMVUNFBLHULXTADSPS");
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
    msg.setTimeStamp(0.6950268206749769);
    msg.setSource(38556U);
    msg.setSourceEntity(223U);
    msg.setDestination(2996U);
    msg.setDestinationEntity(112U);
    msg.op = 177U;
    msg.goal_id.assign("WXNMEUNLAAUFPLMLGKCYUNPQGGGWJJTTTBZDDZVKDKKNRMQUBJSGHJORTCSLFEIQLHICGIUXIDHVWWMXR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YKYBUCFZTPSWPQZANNLDRJTDAYXXMCMJZLNAQHVAESERTJMRHYPZPLNUWYOOLIZHYSQKIHGMHCISZFGOCIBKDLPVXTEUXOOYVSWMYNSFVJXSOPABIHQTHDXQIGIPTGRWRGGUFIECVPRUJFAZKADKUNZKBYQLGDSWCVNALWQUDKJLBPFMVWOBRVBCTQJCVKUFMFAKJELXRMEAOEDOGYNBPETMRHSWCEQQICXMFWSGEINLUNKHTOFHDJ");
    tmp_msg_0.predicate.assign("OROHFKZFAWZMVFGPIPOJWVDJKQOSBYRMTUWHXCMGYIWDWTSUKCNWJJZHEVRXAYLZXDGQHKA");
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
    msg.setTimeStamp(0.4084881210133978);
    msg.setSource(34918U);
    msg.setSourceEntity(89U);
    msg.setDestination(14246U);
    msg.setDestinationEntity(76U);
    msg.name.assign("XLCGMDACGZQFLVOZFIITGDZBRBKZCGEXUHXRFAPFWSNIRB");
    msg.attr_type = 247U;
    msg.min.assign("HQRNQVGOOTPWUDQFPNCZVWFCPDIJMWABBUTQWYRGIZPRVYBXVWUEZCVJCT");
    msg.max.assign("UIARAHFOVIEJNGFBHUBXWNDRXWCGMGDJQHNWSIKCHUKUQYTZRSTSNP");

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
    msg.setTimeStamp(0.12135302475432819);
    msg.setSource(20867U);
    msg.setSourceEntity(238U);
    msg.setDestination(25732U);
    msg.setDestinationEntity(36U);
    msg.name.assign("RFQQHGDYNZNZXYSOCUSLVAOGYDPYUWVJICZMPFGWQWGSEYEUDWVJLPILTFYAYQGDVERTYLOMHUDMBAKEVTTEGISQUAVKODCPSQLVRPIRPIXKMHHKUPNBHGEXWAZTJEFFBQNQNRRXIVATUIZZRLFKGWAUDHPQMDOZSXCTJXH");
    msg.attr_type = 14U;
    msg.min.assign("ZQBEUUSXSBAVLROVGTYTXWMLPDSAJDKRKUCGGXSFLCBANFKJJXEGVIHLUPOVEJZQGBCCVJMGZFDMAAPHFLUIMJTQXKTYIVDYIEMJXFNBRVWNGHOFWKYNBRIOGLQMCHJXRQCULGBVWWEKIFIHZXTYANCMNBWQFAKFSLXHYDDZAKUTNROCZOOLPZISDPKGOPTXLYZEJOWUDENPYHNYRSCZBEQQJISUKWDUVHHZ");
    msg.max.assign("WXXDMFOTCAJEZVSIZQQVCZEAMDPBFELWSWZXTZPGWHPAWGYJUHHBJCURMYYKMUEQFUTPODTMEKTL");

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
    msg.setTimeStamp(0.47846647425286204);
    msg.setSource(445U);
    msg.setSourceEntity(106U);
    msg.setDestination(63980U);
    msg.setDestinationEntity(22U);
    msg.name.assign("CPMMHRTGJVFGINVKGKPCHVWMVFGRMOBQZXLLTWMNEDFIJFOZXTAAOJQYUKYCVYADSLAOSNJSPTDUSYXYGXDVAQZHFQREWQDUPHIJXGVEHMEPHSKNEWYWTUDCRIJUMLZEX");
    msg.attr_type = 251U;
    msg.min.assign("LOEJREQXIFUXIKWEYVPXNMHMKXECLRFCVTVQSNAEZWPLCNZFPXYIOVURVDSNQD");
    msg.max.assign("WYCHAYEBDPHZUNAEADKCQQMMIHAMKLI");

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
    msg.setTimeStamp(0.4771746821814037);
    msg.setSource(17988U);
    msg.setSourceEntity(170U);
    msg.setDestination(40125U);
    msg.setDestinationEntity(167U);
    msg.timeline.assign("NFLQPYEQUDSYZEUSEMBXSURKQHQDMQBWRDOENLFRNNSYIYQTZUCWEUEGRBFJHNTTDHXKTHIVUOULHCWLYIGXPJSCEJHNJVJFTXHJPWWTMQKIICGFSUXPZNBWOKGVAUVQBRXL");
    msg.predicate.assign("KRHEMAUPOLQWBTUIWGBJBYXHIDWGCDSGKYBXRSIPZTMJPWOQIIQCAYSKQNFVHHPKDEPSCRCNXKANZZXYDWRDTTPUBFNWCWDUOVQVVJAMZQDEMGFXRATXURHFAIEZJQKYXSSOVJHLWEMQWMODBQVKRPLYMTIBRJUDNZLONYHFPNKCOGJCPCVECFXUTIFCSNJNSKNYYRXHWQZLEUJJTHLOKGZYOSMXFROMIGBZAVETALFSU");

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
    msg.setTimeStamp(0.32157885732148705);
    msg.setSource(45951U);
    msg.setSourceEntity(254U);
    msg.setDestination(62145U);
    msg.setDestinationEntity(36U);
    msg.timeline.assign("RLAWFCXESEJGKCJZVNVDEDWFURPSZTSYXXVTYFBZRIKKJGUHMDCXRBVUTPOFDYXGNWDZUHFSLZNDYGJAPVRKIQWECGSSQCUUIBTOOIGACTEPTHABCKOLTTQWFRGQOEKBQ");
    msg.predicate.assign("YFDEXMULSCHCJEVOBEEKTSJKNDXMIUDPASUKSRIDPAHBIWHJPAEWTQYHUVKHGGFAMMKZOSYANPEPCQRWRGMXJNYRAPWNURYIENQKHZXHQEVVWYZXJSTFGUTWZLZ");

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
    msg.setTimeStamp(0.4062057221890284);
    msg.setSource(45572U);
    msg.setSourceEntity(11U);
    msg.setDestination(21210U);
    msg.setDestinationEntity(165U);
    msg.timeline.assign("TVBECXVQCISTXKWEZMYUFSKPHSUARSQQZMTKVCOXDPSGLXRIWEDYMQFJMYGDJBGCTQPZNKVXPVXEPDFMMQHBGCLSMTUORYAWOAVYGOBSIDEILELJNYWOUOYAQBJBANQARGAVRAULADMSENZFXYPNGLRIJQVMHYNHK");
    msg.predicate.assign("MJAHBAIJPZLXFROTIECCTZRVJZNVGRGWEMDFDHQDSYIYIYOAPPUNITMNDFRXZINBFUJHLKXFBWGRAAOXRLKBSDVUOABOWZDKZNDUJVQMWTMEUMVYSWPJKYLACVLJTRTFEOBFJMICYEBEAFJFKHKHPBWINEHLQJXZQIQLGUQTZKRGGXKYMDKGXNPGCRXHEOTPTSSNZWSYGSHMXPLNCVUSCSOSUUBQYAW");

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
    msg.setTimeStamp(0.7947250463844248);
    msg.setSource(1578U);
    msg.setSourceEntity(200U);
    msg.setDestination(8220U);
    msg.setDestinationEntity(14U);
    msg.reactor.assign("FRFHDSIKCKSSYKPXSXTSPPQEOHZOXDLZCFALDGZDGJKEOHITALCNDWHXVMIOMNDOULMRWQAFAPRFNLUCCTVULZMHSRMWPOUMYNURXGSKHBTSUXNYCIMEBCZIJBVQXEOUGYPWEIYGYWLVJWHTGJYVNYDFQPNEZCVIQKPCAJOWZTBQZEIFXIIBQNAZYKAYDMET");

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
    msg.setTimeStamp(0.2756847907133281);
    msg.setSource(46812U);
    msg.setSourceEntity(179U);
    msg.setDestination(62410U);
    msg.setDestinationEntity(206U);
    msg.reactor.assign("YDOZWBDCWXAHILOSKRJHREPANRZVKLZLFQYMFSRLIXEAJECVALYDTSKSTQQOCYZGMMNJGHKBMGKQYCBTJQBWCCWUIJNFPRLZVLRDFKBGDPWPYTFOESPTIUBSEBZQXBYEOBRPMFIUJUBHFXVIMEXHSYAODQLRPOTAKHRNPLJFXXTDCOMVMYKLMJAIWTGTWQMSDHVVHUDWJQZDUGENIKCUVIQKENZUGACOSEIGGVWCFWJSH");

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
    msg.setTimeStamp(0.9120994499385643);
    msg.setSource(57386U);
    msg.setSourceEntity(51U);
    msg.setDestination(14155U);
    msg.setDestinationEntity(87U);
    msg.reactor.assign("CUCADYHFKTBMXOIFKLYOTJOSHZQVRXUFWRMSKJXNEWOMGLAHZWIEWSLKCFZTYYXWWQAJHPSYSUPDZEXBJTPXHPDCSDUQEKHOBLGGITQCRJBTWAJDLJNFLOFFIKAGEUNECAIETRBBYDDOXALKEBZSEAPVVMVPQIZWTNGJGRDCIWROVAUYYQOQFPUQUR");

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
    msg.setTimeStamp(0.2741339618613433);
    msg.setSource(13858U);
    msg.setSourceEntity(46U);
    msg.setDestination(14524U);
    msg.setDestinationEntity(36U);
    msg.topic.assign("RMQNREGNIRPRYHHDCNVDGVKPPELGCWTMPOOWXUCAEGBEZTNAXKVSSPRDVFOGESMZBHZVEJQBNKJWLLDHKLFHUCRZMNJYIWVCYYSDYUGODETTSSNTZXSXXDBQEPKRTIIPNZFSUMZGQQFABUWVMCJWPCTAFOI");
    msg.data.assign("BVYICYZCDXLSXMYDNESQTOQNRJUOHWLEOYNMTDLNWXASJVXFKSUXPRUPAVFKTPGEPKRVHKZLKDXUDAZWZQZHCHITGJAHBWOIOVYLTBBEBLBUBZDCKZCNROLAPMPUBICRJNTUYQZBYPTTCVMFMAGKIDHOLZPPSCSYSEWILAGUAMSJEJFCDQ");

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
    msg.setTimeStamp(0.12475922198639056);
    msg.setSource(41677U);
    msg.setSourceEntity(254U);
    msg.setDestination(48949U);
    msg.setDestinationEntity(153U);
    msg.topic.assign("MDTYGGNJETRDWJPLHSJRVZRIZBUCJNWYUKBPOEIAXYHIAAFOWCOSPNBMFLQYFDFLSHVRCCKACCXVSWBPKRIZFZGKNLZPNLWYUONEUSGBUHCHVBNJKSQBIJYFUMGJNARFSTOSQARD");
    msg.data.assign("LQTFCCHRYUFGYSTLFMXJVOIARYLYFQORPTASJXPUWJKGELSABBIVXKXPQHVBRUNDINFNESSKKQJHGCWLAOUREABGFHEBCGZUGEJQRIJHIVYYOZANMUGVCFECMCZUTSLVIKNFKUQYNHEQWBWOWIMMYXZXASJKTLJDGPVNDGBDTFTNQDHYMVZDQOPJOROWPBSURZFESEESHPKRZMKHXIZGUWXLLVOWNDDOBDPVLDAPTMPQXTTICCYABNMHM");

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
    msg.setTimeStamp(0.34873109998386775);
    msg.setSource(27630U);
    msg.setSourceEntity(99U);
    msg.setDestination(8107U);
    msg.setDestinationEntity(227U);
    msg.topic.assign("XRINDPAXPYGGSRMPFAUIULCSEJKDHJVZPJQNTZDSKGGWEHQQDRWZINKMXWRXTKUBQSMFIYG");
    msg.data.assign("PKQXUFGNMEICLSCAUMWVXRIUOMHXMXFEMEZYIJIGASBDJDZWNPBEEYJPELIOLPFLRQJOAQTZURTWQMTRKGWDROYJRCBNJFQZLZYLCTBYVBWVWOTAVDXAOUAXRJVVG");

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
    msg.setTimeStamp(0.91719137600208);
    msg.setSource(30072U);
    msg.setSourceEntity(101U);
    msg.setDestination(47742U);
    msg.setDestinationEntity(216U);
    msg.frameid = 226U;
    const signed char tmp_msg_0[] = {-31, -87, 2, 59, 110, -51, -74, -87, 43, 125, 93, 7, -124, -21, 16, 125, -67, 92, 13, -118, -89, -88, 89, 13, -27, 18, -1, 7, -75, 34, 0, 13, -72, -62, 2, 18, -73, 72, 55, 22, -15, 72, -96, -71, -84, 108, 112, -57, -113, -99, 55, 57, -26, -39, -38, 61, 85, 2, 28, 22, 87, 119, 40, -25, 34, 48, -126, 41, -96, -57, -54, 91, 96, 64, -28, 73, 50, 102, 101, 62, -52, -101, 122, -115, -94, -105, 0, -21, 57, 96, 24, 5, 123, -97, -111, -42, 72, -53, -25, -44, 31, 24, 75, -58, 87, -65, -83, -88, -88, -127, 22, 103, -112, 50, 17, -40, 59, -87, -42, 63, 116, 32, 82, -9, 34, 2, -55, -93, -69, -81, -49, -71, -94, -94, 102, -110, -48, -111, 125, -122, -54, 8, 9, -104, 96, 125, 63, -64, -38, 105, -36, 77, -33, 67, 87, 65, -116, 0, 64, 9, 24, -1, 12, 30, 91, -40, 105, 48, -84, -109, 5, -58, 91, 18, 23, 46, 58, -3, 10, 117, -24, 88, -12, 122, 116, -13, 11, -53, 107, -107, 11, 76, 103};
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
    msg.setTimeStamp(0.5605537307925548);
    msg.setSource(58635U);
    msg.setSourceEntity(105U);
    msg.setDestination(29584U);
    msg.setDestinationEntity(227U);
    msg.frameid = 88U;
    const signed char tmp_msg_0[] = {16, 65, 108, -116, 15, 119, 104, -56, -111, -97, 18, 109, 100, -71, 102, -54, -29, -54, 48, 120, -6, 125, -14, -67, 101, -32, 76, 10, 15, 71, -61, -39, 10, 113, 58, 41, -22, 87, -13, 91, -64, 34, 71, -64, 88, 51, -103, 111, 36, -103, -66, 105, -14, -42, -106, 16, -27};
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
    msg.setTimeStamp(0.7178550951375879);
    msg.setSource(36685U);
    msg.setSourceEntity(212U);
    msg.setDestination(56385U);
    msg.setDestinationEntity(73U);
    msg.frameid = 37U;
    const signed char tmp_msg_0[] = {-1, -18, -58, -31, 72, -76, 46, -89, 94, 37, 51, 58, -94, 38, 86, 46, -53, -81, 124, 119, 19, 53, -43, -16, 77, 121, -34, -79, -80, -39, 33, -109, 46, -12, -102, 105, 112, 91, -95, -116, 117, 113, 84, -89, -73, -128, -89, 107, -67, 4, 28, -58, 7, -75, -74, 65, -105, 64, -62, -123, 111, -62, -96, -46, 99, -41, 56, -7, 92, -98, 85, 27, -42, -89, 90, 43, 3, -2, -3, 55, -119, -117, -11, 18, 55, -41, -21, 87, -99, -22, 91, -10, 85, -33, 96, -14, -114, 65, 39, 36, 57, 68, -94, 2, 44, 36, 119, -7, 8, -36, -49, 79, -105, -3, 22, 86, 48, -80, 57, 111, 4, 85, 91};
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
    msg.setTimeStamp(0.18134955469683467);
    msg.setSource(63488U);
    msg.setSourceEntity(169U);
    msg.setDestination(22122U);
    msg.setDestinationEntity(134U);
    msg.fps = 156U;
    msg.quality = 87U;
    msg.reps = 115U;
    msg.tsize = 63U;

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
    msg.setTimeStamp(0.6002300146835754);
    msg.setSource(2092U);
    msg.setSourceEntity(0U);
    msg.setDestination(15542U);
    msg.setDestinationEntity(202U);
    msg.fps = 175U;
    msg.quality = 18U;
    msg.reps = 84U;
    msg.tsize = 200U;

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
    msg.setTimeStamp(0.6291815973553633);
    msg.setSource(46152U);
    msg.setSourceEntity(82U);
    msg.setDestination(53956U);
    msg.setDestinationEntity(235U);
    msg.fps = 116U;
    msg.quality = 56U;
    msg.reps = 7U;
    msg.tsize = 239U;

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
    msg.setTimeStamp(0.04654642652958629);
    msg.setSource(25208U);
    msg.setSourceEntity(5U);
    msg.setDestination(7162U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.7251447153454449;
    msg.lon = 0.9858592628192403;
    msg.depth = 245U;
    msg.speed = 0.0973098646457029;
    msg.psi = 0.7821138998549555;

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
    msg.setTimeStamp(0.6437720016256709);
    msg.setSource(42891U);
    msg.setSourceEntity(26U);
    msg.setDestination(57122U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.6471234026798419;
    msg.lon = 0.23250194921909373;
    msg.depth = 149U;
    msg.speed = 0.579062488280798;
    msg.psi = 0.9810441824484787;

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
    msg.setTimeStamp(0.5404186624077846);
    msg.setSource(20393U);
    msg.setSourceEntity(200U);
    msg.setDestination(48617U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.5750969562312013;
    msg.lon = 0.4903933652418393;
    msg.depth = 241U;
    msg.speed = 0.03545412818957927;
    msg.psi = 0.5797239053010431;

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
    msg.setTimeStamp(0.22936840779554368);
    msg.setSource(16254U);
    msg.setSourceEntity(116U);
    msg.setDestination(33946U);
    msg.setDestinationEntity(99U);
    msg.label.assign("JHAZYXMFTUZRIMGURIFOKIYGVCSHBJWCROZDLEOLXWZZTRERGSSNVOZYDJFLLYLXHWERDMPKEJFOUCUTNTOVVEPVFBYXTGSLCWQSSMPMGKYAQUKDDKI");
    msg.lat = 0.1856811851473309;
    msg.lon = 0.31704350459664643;
    msg.z = 0.24380979557553095;
    msg.z_units = 9U;
    msg.cog = 0.35677862306836305;
    msg.sog = 0.9412458153802302;

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
    msg.setTimeStamp(0.5249650825236215);
    msg.setSource(55686U);
    msg.setSourceEntity(101U);
    msg.setDestination(19169U);
    msg.setDestinationEntity(57U);
    msg.label.assign("IEKPNKSHTMEXQZWYNLCYRHKCOOCSWLYNAVLQEDBSWBKFEUYXWVRI");
    msg.lat = 0.18575608806295463;
    msg.lon = 0.8954441094337288;
    msg.z = 0.1163698118160511;
    msg.z_units = 39U;
    msg.cog = 0.5209107210818448;
    msg.sog = 0.7362261213156956;

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
    msg.setTimeStamp(0.1561657165019309);
    msg.setSource(35438U);
    msg.setSourceEntity(199U);
    msg.setDestination(1610U);
    msg.setDestinationEntity(78U);
    msg.label.assign("GVXYGCRABBWGKVKQOWXEQFDNCRGHXVCQHSNQAUAQUFQPZYMMRWQSSBHRMCSDGFVEKCPOTMJPZYTJYQITDBPOMIDZNGBOIUYRDPXUJMAUYQECLWUPVWLOAGORJEFTXYAPZRGBXYBISSNLICINLJHVLNTEEWPBHZJDCHAUTVSHHGFWKWFDDEJYEKGYMAHLWUZLPZXTS");
    msg.lat = 0.4184644136738852;
    msg.lon = 0.9665715543773641;
    msg.z = 0.19994808768126948;
    msg.z_units = 184U;
    msg.cog = 0.1335847935200346;
    msg.sog = 0.7079292401202031;

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
    msg.setTimeStamp(0.12112092013000553);
    msg.setSource(41153U);
    msg.setSourceEntity(162U);
    msg.setDestination(27169U);
    msg.setDestinationEntity(33U);
    msg.name.assign("SZYLQCDIFTCGBXLACYVYQMAPYEKPZCWBHDKKHVAONGVRZQRQNLDRCBAQSSZGUSZUVDWTUMXJGSIXKVKYFWJJWNZNKWFMMMYHPNJDKVPJQUFKTJAOBLQBCJFXGV");
    msg.value.assign("CYLYDJUPCSPVZNPDMSHOSAJQWYMAAPKGOWVHXRLDZCIOSLTMNNZQVRHNQQIQETSBTSBFKAJVXCGDGQIEHPWDJZUE");

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
    msg.setTimeStamp(0.2418088337422699);
    msg.setSource(2350U);
    msg.setSourceEntity(13U);
    msg.setDestination(32931U);
    msg.setDestinationEntity(104U);
    msg.name.assign("BGEAQMQCRUZNXDCMWZMKANDGLPQYXKGDAPVSOOQWERHNJTCVM");
    msg.value.assign("YKODZXMNQYYCIEFGFHAHHLOTPURESLRPPBJSLNFHHFIJXIMHSULOXKGDYMRVXMBTASYXTAGPWRMCIHMKQVAJFEIFZKGNAMVQLSSDCDQBLVKQRYVKPCNPTKGPVYBWXDJDTFEHBUJAQBQPORZSLUOGXVOBCUUCQSSZUXEMCJJDGABPHPWGGZEMNWYRYTZZZCVWUHDZIACDEOK");

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
    msg.setTimeStamp(0.7766959921982702);
    msg.setSource(54889U);
    msg.setSourceEntity(31U);
    msg.setDestination(62393U);
    msg.setDestinationEntity(185U);
    msg.name.assign("SDOKDKYSLJNTHZEHLFRHNNHXVWOTQFZTSBDNWTSMSJYPAQYHDUINXJCLIHWTUHQSZF");
    msg.value.assign("GXZFOUMUMCNIPVICHPNQAABATANOTLMPWCLMSSKEMAYGPUROULDTTRSLEDCZUPXFWLBCELJQJFTIYFEOASXXJJVBPONXDBQSYGRVKFTJJDMUXKRLZYHPKPQERBAGSNIHOJMHOFWSLWBXDHQDVEJWHNAJUMTCRVKSZRICYRDXVBKOLIZHDXCWWQYQTKWEAUHCVZRKVDYEDFGEPGBVYGZAZKOHZTTGCONHUKXBRSEBIMIFWYGNZSFPWVI");

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
    msg.setTimeStamp(0.5871719939859187);
    msg.setSource(6809U);
    msg.setSourceEntity(221U);
    msg.setDestination(22545U);
    msg.setDestinationEntity(74U);
    msg.name.assign("YIAQHMGAZGJLIYHANIDEMTQCUVWWCITJVLTJSFOIWAAXVPLGZMKKRUTQZFPIAVBXSSIOPOPAOFYAGPGHKHLUEXIUSVCOQYOEFWTTMYGBLMWFLBJHRPSLDZWR");

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
    msg.setTimeStamp(0.9038442349252641);
    msg.setSource(63107U);
    msg.setSourceEntity(178U);
    msg.setDestination(12978U);
    msg.setDestinationEntity(58U);
    msg.name.assign("NKHULWUAXXDSIJGUFTGPTNIMQQFMCUTITZYNSYUZU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BCAAVZQHUDOANPFWQYJWJLFJEMGIUPRIGNHHPGXQXTOSBZQLKTPKZBQKCOSNLCVKKRINBLHPTDNASSEHYMGIYJRSFXZUSBJQCDOSNPNAAXQGBIZWBZWYVDEUOSMDLXUZGETIEKMIJMAMXTBHUULNDFWTSAXKFGYULXFRINQAHUAYMLPRD");
    tmp_msg_0.value.assign("CAKHEACGOJCQYRMVXUPFKDHRPIDBGQGNRRABOAPELJAFLLTMOWYPXHRYSNODKTEXNFTOXNMHVVARGOKWTFSQMMLZWKZXDGJHKMIHUCCFVDDSOYSTLCFPHBRMDWXKZYZUQNJVWPAYBCGSJNBBXMUIVIWKIGQFDRPUYFBVFBGHQQQWGQITECFOLREWZJSCHPZEREJDIWZBIUTPQUUSKYJXOEGAAYOEJZANTMZSYVTWLLULKLSIIUDNHPVSEV");
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
    msg.setTimeStamp(0.24868186836817907);
    msg.setSource(12024U);
    msg.setSourceEntity(225U);
    msg.setDestination(54083U);
    msg.setDestinationEntity(250U);
    msg.name.assign("FETPFQHEGXHFDRRSYJBOJJXXHAHWBCDXWUTCTFMSRVCYDSJNQFRSORNYJVUDSLZRCMJXORDDQPLYO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RGYETOKFWMXVABREIPGOPHSARFYXRRXYATHJJWXWUKUGVLPCZLFRZSXCMYDJVMNBTIEATZOIGMSOGKJLWLMIJPGHKZMSPKBADQRKVNYPHCUODSQKEOEUUFQIMHCBYEVQOJQDZWGHBEUFYKZDMTIBCTGLANZKC");
    tmp_msg_0.value.assign("SUIPREZRACVMGLRXVZXZKDFCARGZHKOWUJDVJSMFWRJFOQYYTQLRQHGXPDTFHVTSZQVNYNCPGIIEWBSBYTODECGSLLVPXBWMMJUINBLGQUFCARUAJPXKVCTPXCJIKNGIINJJQHWHOYFVKMWQSXBNNEYFMQTODYDLWJIOOIEZYOXSUSMAWAFDVWLXSGZLZAYKUQNEHKTWDPLMDRAPIAUOEMPEXGBLHKKUBTNMCFB");
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
    msg.setTimeStamp(0.8021745497946902);
    msg.setSource(19951U);
    msg.setSourceEntity(27U);
    msg.setDestination(12100U);
    msg.setDestinationEntity(47U);
    msg.name.assign("JMILQCIIKPPXKATLWZCNFJKZRKJORECDYQAFGIXPAAHMYMLAGQEBRDKPJRUXZZVIWLUDBPTUXTQNWPDMEDSRTNDREGPCGHCCL");
    msg.visibility.assign("LNAPGBNOVRJVXYBTLHMTGLQZRMBIVJFSMQNFNUZRHXWVICYLKPEWWPLVETHROCFHGTDURFGEOJWKXNNJZLSEQAUMYASGGRWSJXVIUCLAPCXTJXYOVXQKTULYRSZHPIOYGCHZEVAZDUWRQNQOUHBIJMWODMLGDSZJOBQDFASRBMFBVMUDFIQTLIUWGUTFIOKDPKJCZAGJWFYEPPARE");
    msg.scope.assign("SNEBHBSIPIMSANGTFNLQRHVUDZMYKBVMZAESQPJSOHYGYEGNPSMDJMKXKDWXKOVOBSUICNRMEEGMKOFUEGQYGXWBOULOKDSLQDTUALSWYVPQWHINVNMAGQAQJBOIBODFVFIIWUTHRZFIRUJLCZEUHAQOCHKTLPXEJYAXZRCCRCEKADLWKZXJTLWPOHZTXVNDTHTMNQPUQATEWRPCNUJCVBFGZVMZCF");

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
    msg.setTimeStamp(0.23224826481718464);
    msg.setSource(52165U);
    msg.setSourceEntity(159U);
    msg.setDestination(38255U);
    msg.setDestinationEntity(29U);
    msg.name.assign("FMVNDIUSBEDIHSHMKRBMXYBOCQGHDBXZEBSRLXQQHVUHMRNURAPVFRBPBPASGEHJDISWOIFPQGKJWWIQRPLMZZLAPCWYGAFDHICSKDFSVUTMONTXNYCZOT");
    msg.visibility.assign("USLFYRICCCFAOTPIRHEHTJLOYZKSQQGGMYLCZMIBMBDYEQX");
    msg.scope.assign("YJEBOGMFVPEFHAFZCPXANQWACBHJBYYASZELVNYJFUCZKSJKUQHIOTXGOEGXHGCNJONCTVPTJSYLOZNKZFVOFSQTOBHFXEMMTDPXSNTPMREQEJUSISHDFZRLTOXQWALDNG");

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
    msg.setTimeStamp(0.36682345721902976);
    msg.setSource(12983U);
    msg.setSourceEntity(253U);
    msg.setDestination(41412U);
    msg.setDestinationEntity(138U);
    msg.name.assign("XIMVYMPFYJQJEYRZSRXAKDKSNGCGMMUYFHHDOBIBDVOPRTZBWOGVXDIBBAUJIEDXAXBXUONCQQMYCVYTLYHZIEEGZAGFLCATLFNQYSVPWYTSUJLWFMLKJLUNNKWAAPGKPUQUXRFWVKRSRZQB");
    msg.visibility.assign("PTUNRDBPRWMYCNMLVVJGWQZDKPTAUZACPPXWXZNXWAOOJGBCK");
    msg.scope.assign("FEVKDTULPIZRFNOVQNCYERLJNPBQKXOWCDCTGRMUXVFNWFARXPDTCWRTSIJMYYOKPPB");

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
    msg.setTimeStamp(0.8719514537860841);
    msg.setSource(19138U);
    msg.setSourceEntity(200U);
    msg.setDestination(29226U);
    msg.setDestinationEntity(117U);
    msg.name.assign("PIMOMNSEQQAIZGSJYBRZMCTDGLGOHATXJOPUAKMDNVBJKJCFVVWVXCUFRFOILSYZTXDJESGTSVIJXFQKMEQKQOMCPIDNCVSBHQLOKIABUHMULKOIZBHZNKMNQSPSWPJYKUYNXWBWYQGIEC");

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
    msg.setTimeStamp(0.37549808841390553);
    msg.setSource(13513U);
    msg.setSourceEntity(64U);
    msg.setDestination(1717U);
    msg.setDestinationEntity(40U);
    msg.name.assign("JYLJBZKCWHLKMIDPXURHEXPBB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ADTULXAPEFQKKCBAKWGDAIGGESRAGMRWPPTFIDXBVWXXFOHVZNDQSZAKMTBKHXUWYPVZFZBPCVEGPAFTWKMZCIOIGCLYISJNJPMHQHOAGXFUQDJCIORZIRNL");
    tmp_msg_0.value.assign("YLNGIAGRFYJIFOSJSNQFWKTPHURVUACCPKWWMGISFSXFYYGXLGLUCREHQDQJWIHUPPCKDHOZLQUTWMAOEHXATVBWZLBVRZNTYUMSDBVJB");
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
    msg.setTimeStamp(0.031858191533750024);
    msg.setSource(19728U);
    msg.setSourceEntity(19U);
    msg.setDestination(29188U);
    msg.setDestinationEntity(213U);
    msg.name.assign("RYXTEMFQOOVFALFMJWHEYCCFMHSFJXDIWPCNDXKRVGVYHKJLELQZQJSDYAGUPZWBPYAGKNMVHDULRTHNITJAUSARRVWTMUXYRQTJKIXZKOLUFLZBSSSUIUEOJXNNHPUMXDGNVEZZAQBCQQAOBWGROJITLPXVWMYWPJLDFTABVBLYUCRMULIQWECSIZEKPBZTVKORZVSHOWBBBRCOGTYKKJDOCPCFAWGSDI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LACNZUSIDBODDVCDWULFOVJRSQFOYEJXNJSRMWNJTQGZSBJWGLASSHNITXNOQHJHMCLFIFNIAGIDNUGPUFPPVELPWEZYURCWXHCHWBLNTBOLAECJHABRGFHVREWIAZGKXVTYIKSXVCLCAZPQZZBDFDJMQYDKLPYKVFMQHXRGVEFETEBRSYRAGYZZPWJMKIXUOMIYMIKTPQAHFBTWONZQYNRDMOXGPUCTVHOPSLKGKBRKQQCUEU");
    tmp_msg_0.value.assign("HAXJOOFENFDRBYONDKQTN");
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
    msg.setTimeStamp(0.5930583235501274);
    msg.setSource(40191U);
    msg.setSourceEntity(193U);
    msg.setDestination(11391U);
    msg.setDestinationEntity(66U);
    msg.name.assign("XRZETUJRTHHXNNYUHCGNLLYUFYOUFSMYEONYSKBJWSK");

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
    msg.setTimeStamp(0.7767421956539144);
    msg.setSource(58950U);
    msg.setSourceEntity(8U);
    msg.setDestination(1066U);
    msg.setDestinationEntity(116U);
    msg.name.assign("QPERLPNOOCSTZCCLNGUKEIHKZYRGJTQGFXADFOBVUFEVEWQANTBOMQCIYKGQISEKJYSDGXIBTNNXYSHCYTXOUAOZKJLPUEMHEWCJQNZDWJHTXHKGDRWJSXGJBJGDASEDIHMYOLPFTVURFLXSBXGMZCITNVXFTVATSDZRNLYWWNQYXLOKDMVBVHRABYWWIVLKARBSRAQCAAMKNCMZPQDHPKQCRVFFISBFOUUPPHMURMEFJGWHIUMUJBZLLOPY");

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
    msg.setTimeStamp(0.7885110066976221);
    msg.setSource(5336U);
    msg.setSourceEntity(25U);
    msg.setDestination(22281U);
    msg.setDestinationEntity(34U);
    msg.name.assign("TGGXEKMHIOZJEZSQTFFZMNLUGZRAUOCQWPVSZRDSXCNXYLWVCXYKUJKLPZPLWFHSAUQWIMHQYRHKEGQPOVLMOLCBCVHRSNINAKUKPKHOYFIHTBHIBVJEMKCDVIHWEJEYLARSSKRBAUTFRDEWXACFMNAYPDJUZVIIYQTPEGJGHEIKXDOXLSDRSODJQMJTVFIXOARVUNBJYXUPBYMTRNXNUWLDOCGWFFCZQTDBJYDWTB");

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
    msg.setTimeStamp(0.9804382484150228);
    msg.setSource(20502U);
    msg.setSourceEntity(236U);
    msg.setDestination(17383U);
    msg.setDestinationEntity(27U);
    msg.timeout = 3463754339U;

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
    msg.setTimeStamp(0.4976306199738537);
    msg.setSource(48489U);
    msg.setSourceEntity(77U);
    msg.setDestination(37541U);
    msg.setDestinationEntity(231U);
    msg.timeout = 882673164U;

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
    msg.setTimeStamp(0.9623313694777463);
    msg.setSource(63023U);
    msg.setSourceEntity(149U);
    msg.setDestination(64615U);
    msg.setDestinationEntity(230U);
    msg.timeout = 2232349458U;

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
    msg.setTimeStamp(0.4812806416053518);
    msg.setSource(31012U);
    msg.setSourceEntity(236U);
    msg.setDestination(53430U);
    msg.setDestinationEntity(101U);
    msg.sessid = 153426805U;

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
    msg.setTimeStamp(0.5513102502968401);
    msg.setSource(9302U);
    msg.setSourceEntity(66U);
    msg.setDestination(56208U);
    msg.setDestinationEntity(193U);
    msg.sessid = 609329103U;

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
    msg.setTimeStamp(0.8421920799538888);
    msg.setSource(21181U);
    msg.setSourceEntity(209U);
    msg.setDestination(14888U);
    msg.setDestinationEntity(7U);
    msg.sessid = 3535887839U;

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
    msg.setTimeStamp(0.06360238011598651);
    msg.setSource(37629U);
    msg.setSourceEntity(161U);
    msg.setDestination(25082U);
    msg.setDestinationEntity(9U);
    msg.sessid = 316511941U;
    msg.messages.assign("NYTADFKMTNUEUWAJPPOSPHGSWHVFBNDMATRX");

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
    msg.setTimeStamp(0.19329321166169033);
    msg.setSource(17512U);
    msg.setSourceEntity(199U);
    msg.setDestination(52256U);
    msg.setDestinationEntity(0U);
    msg.sessid = 3339815235U;
    msg.messages.assign("JJYCCOEPVKRIREJCMQMFGGETMQNTMSLGDJANNZQEKGFWCZGPLAMBU");

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
    msg.setTimeStamp(0.7457328319956865);
    msg.setSource(27070U);
    msg.setSourceEntity(14U);
    msg.setDestination(26550U);
    msg.setDestinationEntity(163U);
    msg.sessid = 2103527100U;
    msg.messages.assign("YOUKPZZYOURIBWYPGZBEUVFUKIXBQWJFPJSQXKDMADYUIGCSTAENRMSOJXBLMXTHLMDRNZGHZWHHKNDXIRHBUAWPWMXYTPEXH");

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
    msg.setTimeStamp(0.1975176239999964);
    msg.setSource(47141U);
    msg.setSourceEntity(163U);
    msg.setDestination(25180U);
    msg.setDestinationEntity(174U);
    msg.sessid = 1675617111U;

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
    msg.setTimeStamp(0.8208309103286945);
    msg.setSource(55110U);
    msg.setSourceEntity(93U);
    msg.setDestination(14337U);
    msg.setDestinationEntity(188U);
    msg.sessid = 3196962970U;

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
    msg.setTimeStamp(0.7784159831236486);
    msg.setSource(37192U);
    msg.setSourceEntity(196U);
    msg.setDestination(58979U);
    msg.setDestinationEntity(183U);
    msg.sessid = 2858154397U;

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
    msg.setTimeStamp(0.7164923292080453);
    msg.setSource(15281U);
    msg.setSourceEntity(144U);
    msg.setDestination(51779U);
    msg.setDestinationEntity(222U);
    msg.sessid = 861754496U;
    msg.status = 164U;

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
    msg.setTimeStamp(0.41691069002105174);
    msg.setSource(58936U);
    msg.setSourceEntity(76U);
    msg.setDestination(38982U);
    msg.setDestinationEntity(231U);
    msg.sessid = 4111403588U;
    msg.status = 35U;

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
    msg.setTimeStamp(0.41607858182942725);
    msg.setSource(17440U);
    msg.setSourceEntity(103U);
    msg.setDestination(9263U);
    msg.setDestinationEntity(137U);
    msg.sessid = 2164958328U;
    msg.status = 249U;

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
    msg.setTimeStamp(0.48976563467335665);
    msg.setSource(29965U);
    msg.setSourceEntity(128U);
    msg.setDestination(31535U);
    msg.setDestinationEntity(249U);
    msg.name.assign("KTHYFJBJGWYUZBKUAYAPNWZRFFKPOXTWBJXUGQWJC");

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
    msg.setTimeStamp(0.4725880401298109);
    msg.setSource(38083U);
    msg.setSourceEntity(98U);
    msg.setDestination(21845U);
    msg.setDestinationEntity(214U);
    msg.name.assign("IGOMJCWMQNAYTBJSZLYIDUBPDEMOUOJPORXKGDBTLEQFZPLFOJRWGAVTYAYFSQENDVA");

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
    msg.setTimeStamp(0.7770707197560109);
    msg.setSource(53197U);
    msg.setSourceEntity(77U);
    msg.setDestination(8246U);
    msg.setDestinationEntity(250U);
    msg.name.assign("URRNRMUWPLCZGLDBURQKGOXKQYJZSZNFRQYDIQTNXOMXVPIXVIGCWYRSZBOHDOQHIEHPHGKUEMDSZSVJWNISYXDMQJXFHCTGYTTLOTASNOKZLWQIHKMUAEAPCSTADNCEBEELIJMZMKYJFYZTLGVVUEPCSYBGFJHVPYAHHWTGOAFAKIVDUIMMCABOUBTNLWAWFKPNBOEEJQKT");

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
    msg.setTimeStamp(0.9574777848413468);
    msg.setSource(57283U);
    msg.setSourceEntity(24U);
    msg.setDestination(32006U);
    msg.setDestinationEntity(40U);
    msg.name.assign("UCINAEELFXONDKFUUXHAKFRIXEMSSNHDMIJLRXIKDEKFEHGGVSNSGTYLKOIQMPXJDUZRZHOZYCKPRRKRVWARHGFGSWVNDSANEDLCUCYOOLAHMZQBBTEYWCQUZVQVQWJTTYXAZQLJFFZNSPTPJYOLZJRWTYTBMMARACQIPBPHEASMKKPBWUHVMDISFVVXPFRYFPCGPXQUXGWBJGIIWHJTTOJWOCSLZVZC");

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
    msg.setTimeStamp(0.8500480670139897);
    msg.setSource(51266U);
    msg.setSourceEntity(239U);
    msg.setDestination(57664U);
    msg.setDestinationEntity(16U);
    msg.name.assign("LZKSHGDNWNGYHOJYUTUKZVWMMESWXHBYYWKWXXIFBZEFAHFBCJQGWZRABDVKUQPABJHVVVJYXDSIDGTC");

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
    msg.setTimeStamp(0.9976532725319426);
    msg.setSource(48054U);
    msg.setSourceEntity(254U);
    msg.setDestination(44925U);
    msg.setDestinationEntity(123U);
    msg.name.assign("RSBBJMHMKXCQTVYCDRLRYDOSIGXIFBBZHEAMTQLQLEBTSRHVJYCPJCPQPBRWBDCAAVQQZKAWGUKJTXTOYRAKUUZNAUKVSMOMHGOZZPLEQPPYWWWVIAXDLGHYFJJQMXXGGOTYEUEOAHXINBDNBIJTTFYVSWVSCAFOCUWTLKPDZIPDRXVUJWIMNFNRMKOVHSNQFHNGOVGUIEPFKMDZELFXFUDRWRUEMIGKNSLLFNHAYEBCKGLSSN");

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
    msg.setTimeStamp(0.6705524856920901);
    msg.setSource(56516U);
    msg.setSourceEntity(126U);
    msg.setDestination(40610U);
    msg.setDestinationEntity(216U);
    msg.type = 155U;
    msg.error.assign("KEUPLPYKHEFVHKQHXMLELEUTJDTTXVUPMOXWFNFIGUUNJRQKJFLBFGSJWHHJUTYTOWQVVSAQGXDZESEOTANKILWLKWRMEWJSXCGOLGRJMWACLDYQWXAPCZLISADRFZVTGPUQDQINNOPVBYBJVZYPTRVFGEAGCVAUJHQHFBHASKYCBRBHTNHIUDCIOBGYCBRFSLWZSIK");

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
    msg.setTimeStamp(0.7343735596414718);
    msg.setSource(18376U);
    msg.setSourceEntity(98U);
    msg.setDestination(64957U);
    msg.setDestinationEntity(54U);
    msg.type = 120U;
    msg.error.assign("PJLAGBXRQJRZMJEHFLZDTKVUNFTGSSUIKDNLWPHCHSZVUFOCWSTPXIQRMCTKYEOYSMIFZWWYUIFDXPSTEMQDYEHEVEUIMRBBVVOPACHZBDMMOTPOBHANENPHFNJFQLODYGMLKARNVGCDJGQNXLXYIWORCEQXZBMYVRJTGUAQKLBYBWUCVRVQNAZIC");

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
    msg.setTimeStamp(0.8091784795836697);
    msg.setSource(31660U);
    msg.setSourceEntity(208U);
    msg.setDestination(52484U);
    msg.setDestinationEntity(75U);
    msg.type = 71U;
    msg.error.assign("ZQOBBJZQOSABLDWDAUMKZDSFGBWAIQHFLHOYUGYPFDVQMLHDRCXERIOSQBQJGHPMUUGJXKZLKUHAQKDEIHNWDWIASCPSBHOEEGCPIJLFTXZDTPGJRAVGOUTVTEGCIVXSTVYSIPCQSWTPYHSPRKXFNEZZGGWYYRNTZIVFNTOWMLBVAXBVCYXDFIFFJMTRDKNUCURWEHCCZLRIEMWKJAJRMMLOBVEQMKNTNMAORUBLCWYSVPPFEZNJLHKJY");

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
    msg.setTimeStamp(0.6274427826972024);
    msg.setSource(64159U);
    msg.setSourceEntity(148U);
    msg.setDestination(8747U);
    msg.setDestinationEntity(247U);
    msg.seq = 27658U;
    msg.sys_dst.assign("DXLWOFLILRVYPHEUUITPTR");
    msg.flags = 82U;
    const signed char tmp_msg_0[] = {89, 79, -12, -95, -103, -68, 120, 28, 75, 35, -44, -95, 124, 34, -60, 104, 11, -91, 54, 83, 71, -126, -49, 114, -69, 47, 34, 60, -70, -25, 63, -76, -109, -63, -30, -109, 53, 107, 33, -114, -52, -16, -30, 4, -110, -85, -20, 80, -118, -90, -123, 91, -124, -76, -67, 53, -15, -30, -33, -5, 17, -89, -97, -16, -97, -20, -94, 112, 31, -24, -100, 27, 3, -75, -7, 126, -62, -7, -94, -102, 61, -94, 38, 62, 99, 64, -124, 125, 85, 10, -101, -14, 1, 34, -118, -59, 49, 96, -68, 23, 120, 106, -62, -53, -47, -94, 1, 115, 45, 95, -6, -77, -97, -99, -73, 49, -92, -28, -44, -67, -27, -113, -19, -92, 112, -79, -42, -90, 112, 114, -80, 92, 32, -7, 39, -3, 5, -31, 41, 25, 89, -96, 90, -113, -90, -128, -47, 61, 26, 60, -94, -78, 86, -7, 84, -19, -95, -45, 2, 19, -69, 11, 72, -22, -9, -112, 23, -27, -85, 3, 68};
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
    msg.setTimeStamp(0.11565017364942742);
    msg.setSource(48947U);
    msg.setSourceEntity(56U);
    msg.setDestination(4864U);
    msg.setDestinationEntity(147U);
    msg.seq = 26428U;
    msg.sys_dst.assign("XUAZBXCJANSJAPSJRPTSCZSSDDRKBUOCOTQHVUTPMJEWUWHNBUPFHTGYGEZOPQETSXWFMPHKOFMKPWBYRQQMFICJUVVXUDEFGAYYLZMCYIKWPOIHZGDKFIJLXLNNUWEWAJSONXZWRLQHVOGFCNAFXKDBEBXJBTRVDSEZUPEKDTEYQOXZNRWVETFFAGMIJPKMNICBYQQITDCKVLGTCLSNNYJYVAHAALOCLBQHGBRKIHZURWVIQDDHOMGRZLG");
    msg.flags = 240U;
    const signed char tmp_msg_0[] = {122, 26, 28, -104, -114, 85, -52, 67, -90, 2, 33, 116, 98, -55, 11, -61, -34, 44, -18, 101, -43, -85, -20, -83, 71, 37, 87, 29, -14, -83, 35, 15, -10, -101, -69, 47, -40, 14, -65, -43, 104, -71, -114, -122, 10, 106, -51, 98, -57, -82, 3, 93, -21, -71, -87, 115, 88, -86, 12, 63, 7, 94, 65, 35, 64, -15, 59, 38, 39, 12, 114, 81, 25, -17, -99, -60, 77, 47, 49, -99, 111, -15, -113, 89, 76, 122, -119, -94, -52, 103, -87, 17, -125, 51, -17, 106, 109, 97, 59, 106, 63, 46, -128, -15, -100, -70, -40, -46, -113, -75, -127, 35, 47, 61, -88, 76, 46, 56, 97, -82, 37, -46, 19, -88, 24, -95, 9, -26, -90, 94, -41, -43, 45, -118, 18, 45, 6, 81, -77, 29, 47, -94, -97, 22, -101, 56, 35, -45, 3, 14, -69, -102, -90, 124, -32, -24, 99, 49, 34, 56, 99, -1, 60};
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
    msg.setTimeStamp(0.9155644198229304);
    msg.setSource(44061U);
    msg.setSourceEntity(60U);
    msg.setDestination(49576U);
    msg.setDestinationEntity(57U);
    msg.seq = 31069U;
    msg.sys_dst.assign("HGWNDSTNMNYMZPCVYQMMJNGFMJHBSYZKFDYUZWSSRTVOALCIRQSBEMRAKCZILTCKQISBIHKSEEKXDALWIIRAFZUFHRPPYWJDAXNMOUHGEOJCBRKEQBZTBNDVLLXETTDOOFWOCUEQSHEWDYZXOXQNEJLVPFWTAUTLZ");
    msg.flags = 135U;
    const signed char tmp_msg_0[] = {101, 6, 24, -90, -90, -93, 65, 93, 105, 98, 121, -9, -113, -96, -40, 70, -66, 55, 43, -16, 56, 77, 104, -38, 22, -114, -105, -96, 24, 67, 74, 112, 68, 91, 56, -14, -49, 14, 32, 13, -122, 93, -85, 44, -101, -82, -88, -57, 40, -119, -16, -15, -38, 97, -105, 94, -96, -44, -101, -34, -82, -54, 113, 100, 8, -52, -25, -113, -19, -94, 35, 55, 120, -78, 74, 22, -71, -123, -46, 7, -30, -111, -62, 72, 81, -38, 55, 109, -109, 122, 36, -128, 106, 124, 3, 32, -69, 32, -113, 96, 47, 17, 111, 99, -58, -51, 123, -112, -9, 105, -63, 113, 15, -60, 49, -84, 48, -57, 126, -63, -113, 73};
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
    msg.setTimeStamp(0.7612977217566206);
    msg.setSource(33641U);
    msg.setSourceEntity(84U);
    msg.setDestination(62818U);
    msg.setDestinationEntity(203U);
    msg.sys_src.assign("NXQPTNPLSMPFSJMKNQSKJBLYRNTJBWCHCFTXWUAZDQT");
    msg.sys_dst.assign("KBQJKNUUPHJBACEFBMFDOZNKVPFJGLQZEXEIRIRVHIMTXCGFYDQXZMODRKHKZIAYOVIAIPPKKXPAQSXXBDQZUAFLKMCCGEJGSTLNFOFNMHHINCSYOWJBYUDYDUKNNEJZTHSGSJERCXAIPDDHU");
    msg.flags = 150U;
    const signed char tmp_msg_0[] = {-98, 11, -115, -22, 24, -103, -61, 4, -21, 4, 94, -85, 36, -23, -39, 102, -16, -34, 51, -46, -27, -43, -35, 117, 37, -34, 115, -127, -91, -79, -32, 41, 113, 67, 126, 28, 36, 90, -121, 14, 97, -101, -40, -79, -46, -36, -33, -58, -51, 38, -114, 118, -46, 23, 72, -112, -61, -75, -47, -18, -107, -36, -108, -64};
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
    msg.setTimeStamp(0.4304936544316317);
    msg.setSource(5140U);
    msg.setSourceEntity(197U);
    msg.setDestination(8672U);
    msg.setDestinationEntity(124U);
    msg.sys_src.assign("UKVIVPXZYLBZBRMQYEWWMBNINYIYADNXDDJXDFUYVCWSQQUTACYBAUNEZPKFKPSPRCBEUZFZMYMDKVPHAXAGZLFVBDAKRZSMFPHXOELCCJQKTCHHMDOTPODWTTG");
    msg.sys_dst.assign("OISCAQILCVGKOMGKESFKHTUTUMYAZYIOVQSQDNRZXQVKFSOEAZZTBXSNUCYBPDHBVRJTYVOCGJLPAAARNJZZLHPWSUCDONAKHPDSOCMQCBLFULFIUZSUIILMVBJVRVXFGQOUDDRYSYEP");
    msg.flags = 66U;
    const signed char tmp_msg_0[] = {73, 94, 30, 26, 26, -112, -31, -89, -83, 51, -118, -59, -59, -58, -56, 124, 90, -24, 74, -36, 14, -122, -38, -49, -54, -98, -56, 91, 44, 50, 79, -128, 112, 86, -24, -112, -79, -67, -63, 26, -66, -79, -80, -65, -89, 3, 25, -60, 118, -20, -101, 81, 54, -35, -86, 102, -82, -126, -51, -77, 105, -74, -36, -3, -11};
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
    msg.setTimeStamp(0.49666092089711966);
    msg.setSource(3150U);
    msg.setSourceEntity(241U);
    msg.setDestination(62755U);
    msg.setDestinationEntity(57U);
    msg.sys_src.assign("SQBQBKYFNGHLZBDZQCTMUILQVZNUVGZUULMJHQSCFYJJOTKKPRBWDOYALXTXDAMHIVIKJASDNEJPSHJKDCLRTCYLINPDZVOJNRQXZUBZOFEXOANYARKGRQPQRXYZGFSWAEEXHQCKPBHMHWZMEXVYMXACMUPFOYODUSRDANCLLGBDMNEIUJEITIPVGTLZDAFVTYFWSSWSVHLRWVKEGOVHXRHFIJWENQ");
    msg.sys_dst.assign("KQPSIHEDDDEIZMJCQIRHHSTCURWNFGVOVAHVHDLXQDAPTTFLCLZGGSEMUVLEQQGYZCBZMVQIXPSE");
    msg.flags = 180U;
    const signed char tmp_msg_0[] = {-72, 70, 1, -10, -120, -98, -19, 102, -35, -103, -83, 99, -33, 70, 72, -17, -25, 45, 115, -28, 78, -72, 4, -29, -12, -123, 7, -90, 88, -38, 43, 86, -23, -124, 68, -37, -11, 121, -6, -29, -109, 99, -7, -64, -92, 12, 70, 33, -51, -50, 86, 89, 25, -85, 34, 4, -115, -111, 77, -34, -11, -89, 69, -20, 18, -110, 56, 102, 85, 120, 14, 0, -104, 91, -23, -92, -59, -102, -26, -100, -35, -103, 63, 88, -43, 15, 99, -62, 98, 106, 26, -88, 60, -12, 23, -90, 40, -34, 69, -121, -26, 33, -54, -63, 96, 54, -13, 105, 18, 74, -52, -30, 57, 95, 28, 42, -113, -127, 58, 62, -120, 86, 45, -21, -85, -95, 71, 86, -119, -23, 24, -73, 95, -114, 48, 62, 95, -11, -26, -107, -56, 117, -4, 7, 33, 110, -125, -103, -19, -89, 20, 119, -33, -126, 68, -126, -88, 84, 85, -81, -97, -76, 6, -6, -115, 77, -65, -76, 65, -6, 112, -108, 35, 91, 55, -82, 83, -123, -84, 17, 107, -59, -52, 6, -23, 65, -23, -83, -69, -22, -54, -54, 69, -114, 95, -77, 61, 38, -15, -18, 66, -114, 37, -46, 42, -128, 21, 95, 90, -60, -73, 91, 44, 64, -37, -123, -116, -64, 108, -48, -113, 10, 104, -43, 1, -119, -95, -50, 88, -58, 118, -23, 1, -1, -101};
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
    msg.setTimeStamp(0.41868782376640146);
    msg.setSource(43420U);
    msg.setSourceEntity(66U);
    msg.setDestination(56723U);
    msg.setDestinationEntity(230U);
    msg.seq = 21754U;
    msg.value = 30U;
    msg.error.assign("QEBVXOQQOQ");

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
    msg.setTimeStamp(0.4340996981233687);
    msg.setSource(52145U);
    msg.setSourceEntity(10U);
    msg.setDestination(13029U);
    msg.setDestinationEntity(42U);
    msg.seq = 31343U;
    msg.value = 109U;
    msg.error.assign("WRSRNSYZOCMXJWGDJXDFUKRLWMYUIIXTAAYQPRXNFTCIHNLCNCCHZALSIKRKKVGJPYQJAQCADVEZODIVFMLHPREKHWQPJLLUVZXUVOZNBWRTPGIXUWXCVBXSQRYUIXOVXHTNGKOANABJBGAELPBFBBZVTJASOEWGYEOIMDFOMLFTKQFRMQSIDNRVMUFQTYHJUGHCZUYJQSYCCYFHWPELTMGIHSODZEDMTVSDBMUKFDPBQEZBWJTPANWPE");

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
    msg.setTimeStamp(0.4955833556240691);
    msg.setSource(891U);
    msg.setSourceEntity(224U);
    msg.setDestination(53314U);
    msg.setDestinationEntity(94U);
    msg.seq = 39044U;
    msg.value = 249U;
    msg.error.assign("QPSGHGZAHDDQEJHBPAMQJBWTUKSWPVTZCCOIZGNGTIQFMKNGVJOBZODCEYRTYTFAAR");

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
    msg.setTimeStamp(0.5752927064060472);
    msg.setSource(26568U);
    msg.setSourceEntity(251U);
    msg.setDestination(46890U);
    msg.setDestinationEntity(54U);
    msg.seq = 1141U;
    msg.sys.assign("IFRBQKXKNTUMHUPTKAWHATNFEHUXWUXRGTEQIKEQCSOVSWZXGIRXCTZPYJEZVDIBTYRWDSWLSLICBLKFBAQZPILKPKSQDYBJAOGFGPRJVQCDQUDOEBORPYXVLJBJRJCMOHZSQLNODVWNHWIBRKWFDYDFNOU");
    msg.value = 0.30503923194210114;

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
    msg.setTimeStamp(0.8809402044206488);
    msg.setSource(59992U);
    msg.setSourceEntity(199U);
    msg.setDestination(6734U);
    msg.setDestinationEntity(16U);
    msg.seq = 25948U;
    msg.sys.assign("PWKPYUVQMNLVRWCCMWTNFQLMZSJVKOVCIZFDNPJOJYXRKIJSTWBUHXHHSMNEVDTRDJCUFDQQEBDDUPSOGKPPGYBOLLIUSXURBXURMFCMAQTHBINWLZZPYFZFTSMOGGOFGOGUIHXSHESWDTYJEYBHRGAFKNRGLAULATADMWCVSOKMERCQVONP");
    msg.value = 0.43412704644811173;

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
    msg.setTimeStamp(0.15891706543926343);
    msg.setSource(59372U);
    msg.setSourceEntity(2U);
    msg.setDestination(39288U);
    msg.setDestinationEntity(45U);
    msg.seq = 19539U;
    msg.sys.assign("NBLXBAVTWZUFURPWQGRRIXVQJMVDKCARAOXVOJIKTYIBJOBJPQROTPSDNBLHSYOKJYRAPODCMUKTLWKWESCEXSTAJTCXLZDEJKAMFZGQNOQDZYMYULNQNBNSPNVOPEOYGHJERWKHIUEXTMAACIFSWJRYFHFHZKNTLCQVQZ");
    msg.value = 0.6041673876426736;

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
    msg.setTimeStamp(0.5997996762961983);
    msg.setSource(13334U);
    msg.setSourceEntity(29U);
    msg.setDestination(53357U);
    msg.setDestinationEntity(228U);
    msg.seq = 5077U;
    msg.sys_dst.assign("XAJRZMKECTHRTTKJHSWZPFUNLXWLFDDWIQTIUYTZFPZROBYAURGBQMXUVNCJPOADGPWCSXGVZAYAHRURIVQSGIMQKRHFGCHSOBCYMOHWLDYOZFCHVADAYLDJFFSQUYCQPTJINOEZQOBRBJUPMMVWWLNNPJVNCZHOEVZSYKKYLMWEBJLNXADFGOIGXDYNEXNTUHEBK");
    msg.timeout = 0.22966050874806065;

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
    msg.setTimeStamp(0.14599637597791504);
    msg.setSource(36103U);
    msg.setSourceEntity(66U);
    msg.setDestination(59083U);
    msg.setDestinationEntity(54U);
    msg.seq = 12650U;
    msg.sys_dst.assign("NXDNOHZTZDMUTPLJAXVUALEHPURMLCKQQTZKHOYQRXFHIJKZSGAGSCWIGVPYZTIO");
    msg.timeout = 0.8445009193213008;

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
    msg.setTimeStamp(0.7116309369893623);
    msg.setSource(31151U);
    msg.setSourceEntity(64U);
    msg.setDestination(49586U);
    msg.setDestinationEntity(94U);
    msg.seq = 12586U;
    msg.sys_dst.assign("GYJZPDJAQGWHRVAUDZBJVNXHYHWUPMHCEZYPDWOGR");
    msg.timeout = 0.23109105135222885;

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
    msg.setTimeStamp(0.26039885579457756);
    msg.setSource(10554U);
    msg.setSourceEntity(147U);
    msg.setDestination(40820U);
    msg.setDestinationEntity(210U);
    msg.action = 182U;
    msg.longain = 0.7425825144404189;
    msg.latgain = 0.7767780980770725;
    msg.bondthick = 2867688989U;
    msg.leadgain = 0.0842481898146692;
    msg.deconflgain = 0.11513026995310849;

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
    msg.setTimeStamp(0.21591711066061836);
    msg.setSource(7374U);
    msg.setSourceEntity(208U);
    msg.setDestination(57270U);
    msg.setDestinationEntity(115U);
    msg.action = 112U;
    msg.longain = 0.7622877396434877;
    msg.latgain = 0.505523136464136;
    msg.bondthick = 1424992315U;
    msg.leadgain = 0.34051296075296944;
    msg.deconflgain = 0.34420967212522746;

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
    msg.setTimeStamp(0.6225919231183294);
    msg.setSource(25321U);
    msg.setSourceEntity(96U);
    msg.setDestination(61146U);
    msg.setDestinationEntity(93U);
    msg.action = 24U;
    msg.longain = 0.6383375965902862;
    msg.latgain = 0.35572553935611884;
    msg.bondthick = 62395723U;
    msg.leadgain = 0.44087216789556694;
    msg.deconflgain = 0.7383970751612291;

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
    msg.setTimeStamp(0.16896252452553806);
    msg.setSource(19851U);
    msg.setSourceEntity(101U);
    msg.setDestination(43681U);
    msg.setDestinationEntity(77U);
    msg.err_mean = 0.9494031220609686;
    msg.dist_min_abs = 0.5942906745547223;
    msg.dist_min_mean = 0.3376373168906447;

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
    msg.setTimeStamp(0.5461278823161496);
    msg.setSource(19762U);
    msg.setSourceEntity(249U);
    msg.setDestination(8686U);
    msg.setDestinationEntity(103U);
    msg.err_mean = 0.28913203126188103;
    msg.dist_min_abs = 0.45012955110582453;
    msg.dist_min_mean = 0.03102117288233741;

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
    msg.setTimeStamp(0.25673721452970244);
    msg.setSource(28287U);
    msg.setSourceEntity(55U);
    msg.setDestination(16773U);
    msg.setDestinationEntity(97U);
    msg.err_mean = 0.7164648005925797;
    msg.dist_min_abs = 0.3447618518849206;
    msg.dist_min_mean = 0.9858298690178058;

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
    msg.setTimeStamp(0.15445628249392163);
    msg.setSource(57186U);
    msg.setSourceEntity(209U);
    msg.setDestination(39724U);
    msg.setDestinationEntity(225U);
    msg.action = 176U;
    msg.lon_gain = 0.8654881965951462;
    msg.lat_gain = 0.5534910367595923;
    msg.bond_thick = 0.359591661615169;
    msg.lead_gain = 0.3458083204825737;
    msg.deconfl_gain = 0.7490467083878689;
    msg.accel_switch_gain = 0.2108136099691007;
    msg.safe_dist = 0.6350696348728087;
    msg.deconflict_offset = 0.6778822129322538;
    msg.accel_safe_margin = 0.44912836538393075;
    msg.accel_lim_x = 0.4140328344554953;

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
    msg.setTimeStamp(0.38169678122243245);
    msg.setSource(17825U);
    msg.setSourceEntity(151U);
    msg.setDestination(32356U);
    msg.setDestinationEntity(238U);
    msg.action = 168U;
    msg.lon_gain = 0.25020492779283043;
    msg.lat_gain = 0.4769322236642374;
    msg.bond_thick = 0.7080756015511793;
    msg.lead_gain = 0.99251706747429;
    msg.deconfl_gain = 0.9249027783821959;
    msg.accel_switch_gain = 0.6260418648758068;
    msg.safe_dist = 0.2640111689537664;
    msg.deconflict_offset = 0.35863673915459027;
    msg.accel_safe_margin = 0.6612381141482969;
    msg.accel_lim_x = 0.559476530767395;

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
    msg.setTimeStamp(0.0875051479299842);
    msg.setSource(26151U);
    msg.setSourceEntity(197U);
    msg.setDestination(12394U);
    msg.setDestinationEntity(122U);
    msg.action = 80U;
    msg.lon_gain = 0.2920950993846485;
    msg.lat_gain = 0.42306477467696;
    msg.bond_thick = 0.6315777182539516;
    msg.lead_gain = 0.953488592644404;
    msg.deconfl_gain = 0.0027702914078543417;
    msg.accel_switch_gain = 0.027121304546505298;
    msg.safe_dist = 0.3188978309490148;
    msg.deconflict_offset = 0.7830687663833881;
    msg.accel_safe_margin = 0.7518876507558995;
    msg.accel_lim_x = 0.13132777875672663;

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
    msg.setTimeStamp(0.8286546804326445);
    msg.setSource(6482U);
    msg.setSourceEntity(70U);
    msg.setDestination(34833U);
    msg.setDestinationEntity(58U);
    msg.type = 227U;
    msg.op = 208U;
    msg.err_mean = 0.04188728946451392;
    msg.dist_min_abs = 0.5584736090183883;
    msg.dist_min_mean = 0.4965983959837388;
    msg.roll_rate_mean = 0.29165534469333243;
    msg.time = 0.9878261085207538;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 237U;
    tmp_msg_0.lon_gain = 0.24241073417541747;
    tmp_msg_0.lat_gain = 0.8783997904537364;
    tmp_msg_0.bond_thick = 0.009143147134991647;
    tmp_msg_0.lead_gain = 0.9537754383230075;
    tmp_msg_0.deconfl_gain = 0.9473343337460683;
    tmp_msg_0.accel_switch_gain = 0.8002720262840801;
    tmp_msg_0.safe_dist = 0.613606926582388;
    tmp_msg_0.deconflict_offset = 0.39702676986555574;
    tmp_msg_0.accel_safe_margin = 0.4883320586697485;
    tmp_msg_0.accel_lim_x = 0.003396683468209316;
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
    msg.setTimeStamp(0.2639156235276984);
    msg.setSource(26613U);
    msg.setSourceEntity(238U);
    msg.setDestination(27401U);
    msg.setDestinationEntity(172U);
    msg.type = 186U;
    msg.op = 50U;
    msg.err_mean = 0.8770991429984317;
    msg.dist_min_abs = 0.14212530764721532;
    msg.dist_min_mean = 0.15279140492612253;
    msg.roll_rate_mean = 0.9345134776128248;
    msg.time = 0.4513050163873422;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 98U;
    tmp_msg_0.lon_gain = 0.6640990444358803;
    tmp_msg_0.lat_gain = 0.5087962914158527;
    tmp_msg_0.bond_thick = 0.06566305841479247;
    tmp_msg_0.lead_gain = 0.6675318024446215;
    tmp_msg_0.deconfl_gain = 0.9819359371833477;
    tmp_msg_0.accel_switch_gain = 0.7769695881828238;
    tmp_msg_0.safe_dist = 0.05111392551584759;
    tmp_msg_0.deconflict_offset = 0.137058412004731;
    tmp_msg_0.accel_safe_margin = 0.6782503978691293;
    tmp_msg_0.accel_lim_x = 0.924549686090757;
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
    msg.setTimeStamp(0.7052349093230508);
    msg.setSource(22883U);
    msg.setSourceEntity(226U);
    msg.setDestination(65231U);
    msg.setDestinationEntity(228U);
    msg.type = 240U;
    msg.op = 128U;
    msg.err_mean = 0.7368812135983452;
    msg.dist_min_abs = 0.594210744179411;
    msg.dist_min_mean = 0.6171400509302981;
    msg.roll_rate_mean = 0.43251209946852265;
    msg.time = 0.626385584145257;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 249U;
    tmp_msg_0.lon_gain = 0.20264020569504826;
    tmp_msg_0.lat_gain = 0.2874839920436477;
    tmp_msg_0.bond_thick = 0.729427572615608;
    tmp_msg_0.lead_gain = 0.4626339461129033;
    tmp_msg_0.deconfl_gain = 0.9163874916543048;
    tmp_msg_0.accel_switch_gain = 0.5363451220481742;
    tmp_msg_0.safe_dist = 0.41319679032649115;
    tmp_msg_0.deconflict_offset = 0.7366173521950997;
    tmp_msg_0.accel_safe_margin = 0.14596867799173363;
    tmp_msg_0.accel_lim_x = 0.43120864334305964;
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
    msg.setTimeStamp(0.5952567153318079);
    msg.setSource(19449U);
    msg.setSourceEntity(111U);
    msg.setDestination(59825U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.5705103671567151;
    msg.lon = 0.18000670226755078;
    msg.eta = 756891132U;
    msg.duration = 34360U;

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
    msg.setTimeStamp(0.268701586069525);
    msg.setSource(42504U);
    msg.setSourceEntity(176U);
    msg.setDestination(29595U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.009839593054120965;
    msg.lon = 0.598638852626432;
    msg.eta = 3926860443U;
    msg.duration = 16684U;

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
    msg.setTimeStamp(0.6616840475654581);
    msg.setSource(2003U);
    msg.setSourceEntity(194U);
    msg.setDestination(55225U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.07373070585685682;
    msg.lon = 0.9983067474016559;
    msg.eta = 425482231U;
    msg.duration = 20119U;

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
    msg.setTimeStamp(0.5478155419271081);
    msg.setSource(48857U);
    msg.setSourceEntity(179U);
    msg.setDestination(37677U);
    msg.setDestinationEntity(69U);
    msg.plan_id = 25886U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.26317784495537444;
    tmp_msg_0.lon = 0.5130536179924748;
    tmp_msg_0.eta = 1991508083U;
    tmp_msg_0.duration = 24249U;
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
    msg.setTimeStamp(0.34888741871167883);
    msg.setSource(53054U);
    msg.setSourceEntity(91U);
    msg.setDestination(46999U);
    msg.setDestinationEntity(192U);
    msg.plan_id = 23200U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5636132967792642;
    tmp_msg_0.lon = 0.5908089746697492;
    tmp_msg_0.eta = 1195213066U;
    tmp_msg_0.duration = 30406U;
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
    msg.setTimeStamp(0.5605209315277275);
    msg.setSource(35716U);
    msg.setSourceEntity(0U);
    msg.setDestination(52385U);
    msg.setDestinationEntity(177U);
    msg.plan_id = 11491U;

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
    msg.setTimeStamp(0.9003093653048738);
    msg.setSource(6761U);
    msg.setSourceEntity(91U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(141U);
    msg.type = 134U;
    msg.command = 157U;
    msg.settings.assign("OYMDEUAWAYIXSWJKTAVGYTMHJKPZNPERVLJXLWMLZNHKTZRRRVIKTXFUF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 26194U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SWVLPTRNUFQMBGHODTONHFWPBUOXFUONAMVJGGUEQPOPRTFXUNRXPXSYCLASVKLBFDMQVIHBYYTHFQHASPLLAKTNCTCXQGMEARMJZKCZQJQNKZBPMWZDIWXVHKJBXJQVOJGEDAAKSWTDKA");

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
    msg.setTimeStamp(0.8002429180013774);
    msg.setSource(33347U);
    msg.setSourceEntity(54U);
    msg.setDestination(42838U);
    msg.setDestinationEntity(153U);
    msg.type = 134U;
    msg.command = 21U;
    msg.settings.assign("YOKJZPPUKTILXQORRDHEABHTYAYBXLMLTCJUVANWYULEGRBERBGADLHMVVDFLVGYPIGTQMCVYRNIHZWQIKYBQLOLXTXPKWTBOCMMNOUFBUSKVCJJJPIZEHDQIOHIJSCDSOKUBOMXNCAHQDARXPSSFFHAQTNGWUZSXFGVVXMERBNRGQSRXTPJGE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 64779U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.02050706770173283;
    tmp_tmp_msg_0_0.lon = 0.7357815860091701;
    tmp_tmp_msg_0_0.eta = 3285919824U;
    tmp_tmp_msg_0_0.duration = 36347U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QBWAUSCWCNZYEQWNQIEVDSTRMFCOVPJVIEYP");

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
    msg.setTimeStamp(0.4280504791527774);
    msg.setSource(45037U);
    msg.setSourceEntity(184U);
    msg.setDestination(57769U);
    msg.setDestinationEntity(226U);
    msg.type = 207U;
    msg.command = 105U;
    msg.settings.assign("NJORWKHGXDVALFKAAXXYBHYUEVKWBYCXCWRGCVHMYGXJKBPEIWZQTHTUPFMDQKHDLXZYARGCFOHLPFXJYMDNNAEEDQJFNSZQRKNADJEZOKHAUBUZITUIGTXCSDRTLQVMELIPYHAMTCVROYGCOWUIS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27791U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZBSRFVLFHHDFCOOYMMZQECSUVFTDPMIIBXNTEUSZGPWEPPZXCSWWOIUQHNGQHTLGDGEHGSYAAWMJXYABBSIDMHYMUXOPWDKTOOVQKZRHJWFULJHINGNBKEBEESXAIQKIOAWGDRXQBAVDYOEXBXSTYSJRPRQXKGFKWCLNPCTNKZCZZLJTMTHCNVPUYTRBCEKJ");

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
    msg.setTimeStamp(0.31521410300794284);
    msg.setSource(65422U);
    msg.setSourceEntity(125U);
    msg.setDestination(9634U);
    msg.setDestinationEntity(221U);
    msg.state = 204U;
    msg.plan_id = 47492U;
    msg.wpt_id = 126U;
    msg.settings_chk = 43965U;

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
    msg.setTimeStamp(0.2716018734254314);
    msg.setSource(60730U);
    msg.setSourceEntity(173U);
    msg.setDestination(30820U);
    msg.setDestinationEntity(242U);
    msg.state = 216U;
    msg.plan_id = 54221U;
    msg.wpt_id = 96U;
    msg.settings_chk = 19550U;

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
    msg.setTimeStamp(0.7657366308708219);
    msg.setSource(26416U);
    msg.setSourceEntity(109U);
    msg.setDestination(60056U);
    msg.setDestinationEntity(97U);
    msg.state = 30U;
    msg.plan_id = 43163U;
    msg.wpt_id = 102U;
    msg.settings_chk = 13722U;

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
    msg.setTimeStamp(0.9435297883792407);
    msg.setSource(44030U);
    msg.setSourceEntity(29U);
    msg.setDestination(12568U);
    msg.setDestinationEntity(238U);
    msg.uid = 117U;
    msg.frag_number = 239U;
    msg.num_frags = 126U;
    const signed char tmp_msg_0[] = {31, 114, -3, -112, -5, -97, 1, -68, 78, 21, -50, 26, -24, -75, 55, -27, 31, 19, -49, 88, -117, 47, -34, 116, 13, 115, 28, -17, -60, 73, 39, -17, 117, -124, -18, -58, 64, -7, 47, 117, 88, 38, -47, -104, -84, -63, -97, -55, 17, 56, -45, 112, -49, -22, -38, -69, -109, -91, 112, 76, -112, -25, -98, 39, -86, 2, -26, -28, 85, -3, -100, 67, -47, -57, 55, -6, -35, 40, 66, 75, 41, -126, -110, 51, -45, 123, -97, 97, 29, 32, 73, -52, 105, 108, 123, 63, 31, -102, 85, -68, -119, -116, 110, 3, 119, -65, -68, -28, -97, -30, 74, 40, -120, 44, -74, 85, 24, -68, 60, -28, 126, -128, -61, 89, 56, -78, -7, -123, 106, 38, 63, -125, 47, 44, -10, 33, 100, -122, 85, -117, -27, 98, -52, -119, -119, 49, -30, 109, 109, 14, -18, -81, 15, -66, 124, -55, -62, 27, 38, -71, -124, 65, -75, 22, 28, 33, -109, -99, -54, -116, -127, -109, 123, 67, 35, 85, 64, 12, -125, -20, -40, -6, 76, 66, 65, 8, -63, 42, -96, -89, -111, -39, -44};
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
    msg.setTimeStamp(0.805394835689287);
    msg.setSource(49335U);
    msg.setSourceEntity(123U);
    msg.setDestination(5472U);
    msg.setDestinationEntity(247U);
    msg.uid = 172U;
    msg.frag_number = 92U;
    msg.num_frags = 231U;
    const signed char tmp_msg_0[] = {-25, -27, 14, -46, -110, -107, -87, 62, 6, -63, -113, 86, 9, -121, -48, -127, -124, 81, -108, -2, 53, 56, 41, -122, -85, 8, -100, 25, 124, 118, 65, 60, -25, 126, -87, -19, 99, -79, 11, 110, 23, -29, -79, -59, 84, -77, -34, 67, 43, 125, -110, -21, -40, 106, 79, 31, 9, 79, -3, 113, 11, 41, 11, 33, -23, -102, 13, -100, 10, 105, 19, -123, 28, 100, -33, 57, -11, 93, -88, -43, -34, 119, 81, 69, 36, -126, -46, 71, -117, -66, 9, -61, -23, 107, 98, 46, 31, -80, 114, -124, -101, -14, 40, 76, -114, -86, -116, -86, -118, 33, -88, -122, 33, -122, 28, -17, 65, 35, -13, -84, -92, -23, 38, -83, -74, 45, -72, 66, 120, 20, 92, 79, -126, 74, 52, 64, 31, 18, 112, -65, 22, 26, -31, 37, -51, 126, -116, -37, 83, -102};
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
    msg.setTimeStamp(0.27223954342182133);
    msg.setSource(7091U);
    msg.setSourceEntity(76U);
    msg.setDestination(1367U);
    msg.setDestinationEntity(242U);
    msg.uid = 77U;
    msg.frag_number = 240U;
    msg.num_frags = 67U;
    const signed char tmp_msg_0[] = {76, 0, -34, -65, 125, 74, 21, -70, -16, 62, 55, -63, 43, -19, -105, 43, 15, -102, 106, -100, -16, 9, 23, 22, -20, -31, -111, 23, -95, -2, 45, -19, 23, -57, 109, 109, 42, -47, 95, -88, 76, -79, -2, -67, -31, 59, 47, 106, -4, -18, -9, 112, -112, -119, 19, 106, -20, 67, -98, 77, 73, -25, 57, -76, -38, -22, 113, -5, 58, -66, -83, -73, 80, 118, 18, -37, 24, 118, -45, -4, -12, -61, 105, 71, -121, -39, 109, -97, 105, 113, 13, 73, -5, -10, -128, -107, 120, 29, 53, 100, -10, 81, -90, -109, -55, -50, 71, -126, 56, -110, -56, -124, 121, 3, -83, -63, -62, 63, 122, -17, -62, -120, -122, -51, -100, -39, -103, -57, 117, 67, -115, 68, -43, 83, -108, 88, -51, 97, 46, -31, 69, 28, -64, -61, 119, 27, -9, 56, 84, 32, -14, -119, 29, 12, 52, 43, -93, -63, 83, 116, -13, -77, -62, 90, 8, 48, 112, 126, 111, 70, -117, 36, -61, -60, 60, -62, -37, 32, 120, 94, -91, 39, 11, -67, 15, 71, -117, -56, 120, 7, -8, -13, -95, -21, -91, -56, 108, -74, 116, -39, -123, -7, 7};
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
    msg.setTimeStamp(0.18033281546304247);
    msg.setSource(39609U);
    msg.setSourceEntity(76U);
    msg.setDestination(45017U);
    msg.setDestinationEntity(11U);
    msg.uid = 163U;
    msg.op = 228U;
    msg.frag_ids.assign("QIZKQLSHGGRJTENMJUSWNHSBHUZYVLCRCVJHRSQXKPDQDCOBZPXOPYLZSTSBCNBMUJDRQWTYY");

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
    msg.setTimeStamp(0.48885864691887226);
    msg.setSource(12118U);
    msg.setSourceEntity(151U);
    msg.setDestination(39361U);
    msg.setDestinationEntity(175U);
    msg.uid = 108U;
    msg.op = 88U;
    msg.frag_ids.assign("TVCIHHZBXNLGYIKCVVJMOZDQATRKSEMUVFRNPDBUDRQCEWGQSJGYDQFACZKQOSHNDOBXPHTABWFOUPDUYKBEAPZKLNCFSAVWRUEELXNBPHYTFRGSOIVQLJSISVGKZFSZOAJZNNVQRJCEBILPWWRZLYXRTMMWEUGHPWYXQUJCMNBIZOQTPMLHJGHYUWQAKRMDYZEMILLVCTCTNXVJTF");

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
    msg.setTimeStamp(0.3424301481968235);
    msg.setSource(31528U);
    msg.setSourceEntity(188U);
    msg.setDestination(9216U);
    msg.setDestinationEntity(176U);
    msg.uid = 107U;
    msg.op = 104U;
    msg.frag_ids.assign("WGZOAEQUISNBHCKNDMXNTHBPDCXDYNKLYTKFJZZEJDVWPOMYHHPEPYMKAXPECAGEXRMLJS");

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
    msg.setTimeStamp(0.49500186476669084);
    msg.setSource(9768U);
    msg.setSourceEntity(175U);
    msg.setDestination(64560U);
    msg.setDestinationEntity(140U);
    msg.content_type.assign("EXUHIDXNMECAEODDSXKUJVTBFTTISEVXGREVIGWFFOGRXVSUANPUHAJY");
    const signed char tmp_msg_0[] = {-94, -19, -33, 100, -72, -36, 14, -43, -119, 55, 82, 76, -70, -29, -11, 72, -44, 71, 66, -17, 114, -83, -10, -19, -61, -77, 68, -47, -98, 41, 115, -115, -8, 116, -119, -7, -48, 55, -97, 39, 110, 107, 49, -106, -32, -117, -119, 22, -52};
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
    msg.setTimeStamp(0.06513908225768439);
    msg.setSource(10088U);
    msg.setSourceEntity(107U);
    msg.setDestination(49296U);
    msg.setDestinationEntity(63U);
    msg.content_type.assign("RLWAIKABRLDHCICKWIEAZBVMTLOGDTDFVQMUOCPSAGHNCXQQPLOTQPAFWBEMEZMJLPITTHNIKENYZOKWNPSLBHFAPWVEWIBJHGRDFSPUSYRGCEORGYJKPJBVAHQHVIYVNCMSRQHZQGXNYEJQAAMFTFZXJLEFXJTTCZKXMYKBSNWFTVPDOYQZBMGDGR");
    const signed char tmp_msg_0[] = {-127, 19, 59, 39, 104, 114, 75, 35, -12, 45, 73, 78, 69, 93, -80, 62, -11, 115, -7, -27, -22, 103, 97, 47, 65, -70, -82, -110, 119, -25, 44, 7, 70, 120, -122, 85, -96, 15, 18, -82, 112, 45, 34, 122, -12, -41, 31, -58, 125, -115};
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
    msg.setTimeStamp(0.8345033620152249);
    msg.setSource(33019U);
    msg.setSourceEntity(244U);
    msg.setDestination(45961U);
    msg.setDestinationEntity(164U);
    msg.content_type.assign("UUNZAYRVUAEWEOXIVSRHUPDVBQLPDQJVXKJLSECCBDEPWUQXJTGGHPOGMLBNKAYEIWVXFJGVYNNMGQXTLCZPLYIIRDYMQQTODPBLLYAMSKMGDGNUSZXGYFOHISQIETVNBHNVWZOKNVFQHWRSXMWKCJIXJQZZDFEJWAEDCLTMDUOPBEXOPFUHVAOHKPHARWAMYOMZIURMXKTTCGCWJISPLSHFZTBKJFAFF");
    const signed char tmp_msg_0[] = {103, 24, -59, 61, 106, 50, -76, 45, -22, -9, 98, -1, -110, 24, 126, 29, -95, 98, -67, -64, 42, 120, 2, -103, -40, -66, -121, -122, 125, -13, -1, 4, 11, -61, 71, 32, 9, -108, -101, -88, 125, -71, -77, -119, -85, 80, -17, 108, 106, -128, 91, 45, 105, 47, 26, 15, 65, -16, -110, 75, 85, 87, -116, -69, -54, -96, 30, 14, -66, 59, 39, -42, -21, 40, 98, 7, -90, 88, 110, 65, 67, 95, 100, 70, 80, -12, -14, 27, 99, -82, 119, 105, -80, 0, -26, -46, 76, -73, 14, -109, 120, -21, -46, -63, 81, 64, -58, -122, -8, 71, 80, -73, -12, 20, -60, -102, -54, -111, -59, -9, -107, -94, -40, 11, -40, 85, -103, 55, 121, -87, -86, 109, -117, -35, -2, -104, 38, 40, -117, 114, -18, -108, 83, -58, 73, -19, -87, 124, -99, -58, -96, -13, 39, 49, 40, 92, 117, -51, -32, 66, 44, 64, -30, 113, -67, -98, -36, -23, 23, -125, 74, -57, -125, 22, -45, 8, 103, 114, 65, 61, 80, -44, 39, 6, -90, -23, -46, -4, -12, -94, -93, 73, -105, -67, 39, 77, -4, -96, -1, -107, 4, 56, -112, -28, 126, 49, 74, 89, -82, -85};
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
    msg.setTimeStamp(0.06111433079504702);
    msg.setSource(5399U);
    msg.setSourceEntity(246U);
    msg.setDestination(53189U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.9332934139731982);
    msg.setSource(25253U);
    msg.setSourceEntity(228U);
    msg.setDestination(46864U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.9251218633156799);
    msg.setSource(54016U);
    msg.setSourceEntity(245U);
    msg.setDestination(46913U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.7312093046071785);
    msg.setSource(54996U);
    msg.setSourceEntity(27U);
    msg.setDestination(5074U);
    msg.setDestinationEntity(72U);
    msg.target = 22045U;
    msg.bearing = 0.6244966101296112;
    msg.elevation = 0.30852725526925917;

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
    msg.setTimeStamp(0.0924990664652866);
    msg.setSource(64126U);
    msg.setSourceEntity(205U);
    msg.setDestination(31395U);
    msg.setDestinationEntity(81U);
    msg.target = 8205U;
    msg.bearing = 0.4574814213009305;
    msg.elevation = 0.24251915308074012;

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
    msg.setTimeStamp(0.3542073079134066);
    msg.setSource(22428U);
    msg.setSourceEntity(198U);
    msg.setDestination(6058U);
    msg.setDestinationEntity(218U);
    msg.target = 56442U;
    msg.bearing = 0.287019438664074;
    msg.elevation = 0.18308756423994754;

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
    msg.setTimeStamp(0.943100048748299);
    msg.setSource(52185U);
    msg.setSourceEntity(118U);
    msg.setDestination(30661U);
    msg.setDestinationEntity(186U);
    msg.target = 8994U;
    msg.x = 0.6969588149560932;
    msg.y = 0.5568016476016161;
    msg.z = 0.6138442574598659;

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
    msg.setTimeStamp(0.7901760075945431);
    msg.setSource(21485U);
    msg.setSourceEntity(38U);
    msg.setDestination(11244U);
    msg.setDestinationEntity(56U);
    msg.target = 46660U;
    msg.x = 0.8916645789923114;
    msg.y = 0.04483162989199996;
    msg.z = 0.2875940079299024;

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
    msg.setTimeStamp(0.644572379538689);
    msg.setSource(8588U);
    msg.setSourceEntity(19U);
    msg.setDestination(40982U);
    msg.setDestinationEntity(28U);
    msg.target = 54684U;
    msg.x = 0.06967561307843162;
    msg.y = 0.05983352659711283;
    msg.z = 0.1039700805881586;

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
    msg.setTimeStamp(0.7746565153582945);
    msg.setSource(37910U);
    msg.setSourceEntity(31U);
    msg.setDestination(35170U);
    msg.setDestinationEntity(75U);
    msg.target = 25817U;
    msg.lat = 0.32405861163374494;
    msg.lon = 0.27795239478002454;
    msg.z_units = 62U;
    msg.z = 0.4505121088404913;

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
    msg.setTimeStamp(0.0338133010081717);
    msg.setSource(56792U);
    msg.setSourceEntity(115U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(207U);
    msg.target = 62650U;
    msg.lat = 0.6600226258788268;
    msg.lon = 0.6879704825216204;
    msg.z_units = 238U;
    msg.z = 0.9145791486362838;

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
    msg.setTimeStamp(0.03747616820940991);
    msg.setSource(11658U);
    msg.setSourceEntity(242U);
    msg.setDestination(33102U);
    msg.setDestinationEntity(233U);
    msg.target = 42842U;
    msg.lat = 0.0904024004627163;
    msg.lon = 0.7196761924386169;
    msg.z_units = 49U;
    msg.z = 0.27840885570420215;

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
    msg.setTimeStamp(0.01685827100429782);
    msg.setSource(54129U);
    msg.setSourceEntity(54U);
    msg.setDestination(54273U);
    msg.setDestinationEntity(123U);
    msg.locale.assign("BUZEJHUUZUXNDRTBGCRDEWEZAYFIKGJWCAWWRBDKXMKGNOBPMTOPOCHQSKAWYOVTYSLOSTCGBFQVSUHUXTHFYXAYNFRNKBJIMPCILX");
    const signed char tmp_msg_0[] = {53, 48, -78, 113, -82, -50, -8, 63, -31, 77, 61, 6, -62, -21, -16, 30, 1, -83, 90, -63, -62, -63, 93, 49, 50, 4, 76, -36, -49, 85, 86, 125, -29, 77, -34, -20, -121, -9, 55, 35, -14, 118, 124, 50, -123, -93, -101, -99, 83, 33, 82, -29, -92, 23, -57, 86, 11, 50, -100, -10, -23, 124, -122, 122, 47, 29, -61, -70, -45, 105, 112, -88, 14, -6, -87, -117, 96, -50, -7, -97, 1, -77, -13, 87, -67, -69, 28, -62, 9, -98, -122, -61, 85, -37, 51, -117, -90, 81, -71, 61, 47, 1, 22, -23, -63, -98, 15, -14, -127, 67, -103, 97, -73, -21, -63, 16, 58};
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
    msg.setTimeStamp(0.22650407405501283);
    msg.setSource(36249U);
    msg.setSourceEntity(222U);
    msg.setDestination(38962U);
    msg.setDestinationEntity(74U);
    msg.locale.assign("LVCYPATBESIABUMUSZJDYSZJDLOGWEFGXZTLJXVQODZQGNTSXQDFADMAIBKVGFIXNGLBDHUUALAOBGKELPSWAHWOFPNQIXKUOTUMTWHPCZWALC");
    const signed char tmp_msg_0[] = {-23, 122, 9, 49, -33, 72, -51, -6, -109, 102, 16, 34, -101, 14, 42, 37, -125, -81, -1, 118, -21, 124, -6, -1, -32, -103, 111, -78, 54, 61, 76, -48, -44, -96, 74, -85, -23, 37, 16, 41, -40, 21, 81, 47, -66, 69, -62, 36, 74, 5, -76, 104, -79, 124, -86, -12, -111, -10, -86, 56, -126, -39, 55, 19, 117, -5, 26, 41, 121, 43, 75, 9, 39, -50, -88, 50, 15, 38, 106, -91, -15, 6, 71, -85, -49, 63, -28, -28, -96, -86, -47, -70, -113, -16, 32, 54, 63, -60, 88, 19, 59, 4, -36, 29, -75, -113, 47, -44, 72, 50, -20, -19, 94, -37, -90, -79, -116, -3, -88, 85, -79, 123, -40, 73, 50, 33, -69, 17, -28, -61, 25, 73, -112, -50, 62, 33, -108, 111, -94, -82, 99, 124, -115, -122, -28, 21, 73, -85, -7, -127, 91, 54, -56, 76, 12, 101, 93, 49, 81, -118, -63, -90};
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
    msg.setTimeStamp(0.033188002285777674);
    msg.setSource(48940U);
    msg.setSourceEntity(57U);
    msg.setDestination(11278U);
    msg.setDestinationEntity(60U);
    msg.locale.assign("WLMPGATIEQYTBZNICSJAWKRQGSRXMJNTKDNOXZBMBDUTYOLNLNNSTGFFBDOEC");
    const signed char tmp_msg_0[] = {-18, 45, 37, -48, 1, 89, -35, 31, -123, 27, -27, -12, -22, 72, -5, 31, 113, -84, 49, 83, -94, -3, 110, 91, -124, 44, -59, -46, -12, 107, 42, -1, -26, 32, -62, -105, 9, -52, -7, 83, 20, 126, 37, -11, -62, -106, 62, -126, -81, -92, 63, 21, -128, 50, 124, 6, 0, 29, 28, -90, 58, -91, -42, -40, -53, -59, 71, -34, 102, -113, -89, 110, 72, 115, -13, -100, -100, -127, 116, -58, 104, -83, 105, 72, 10, 50, 23, -95, -126, 13, 55, -8, -22, -41, 91, -66, -111, 68, -88, -72, 94, 48, -34, -81, 31, -82, 88, 83, 95, -113, 3, 47, -46, 88, 91, -58, 65, -8, -83, 8, 1, -88, 122, 86, 75, -5, -68, -127, -43, -84, -105, 66, -51, 53, -86, 85, 29, 11, 61, -71, 124, -61, 35, -45, 37, 116, -116, 111, 85, -122, -20, 13, -100, 45, 24, 22, -72, -31, -47, -1, 29, 90, -100, -71, -18, -72, -110, 76, 108, 60};
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
    msg.setTimeStamp(0.09706230204330102);
    msg.setSource(31283U);
    msg.setSourceEntity(219U);
    msg.setDestination(13625U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.5165676527672127);
    msg.setSource(55205U);
    msg.setSourceEntity(179U);
    msg.setDestination(43626U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.637812727190277);
    msg.setSource(18096U);
    msg.setSourceEntity(73U);
    msg.setDestination(18938U);
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
    msg.setTimeStamp(0.9088385789390063);
    msg.setSource(39719U);
    msg.setSourceEntity(7U);
    msg.setDestination(20985U);
    msg.setDestinationEntity(100U);
    msg.camid = 94U;
    msg.x = 1209U;
    msg.y = 35885U;

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
    msg.setTimeStamp(0.18062902153633464);
    msg.setSource(6876U);
    msg.setSourceEntity(185U);
    msg.setDestination(60500U);
    msg.setDestinationEntity(86U);
    msg.camid = 121U;
    msg.x = 5982U;
    msg.y = 4797U;

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
    msg.setTimeStamp(0.20352638897530317);
    msg.setSource(57419U);
    msg.setSourceEntity(78U);
    msg.setDestination(63638U);
    msg.setDestinationEntity(10U);
    msg.camid = 159U;
    msg.x = 17068U;
    msg.y = 34464U;

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
    msg.setTimeStamp(0.7559229695012302);
    msg.setSource(60600U);
    msg.setSourceEntity(27U);
    msg.setDestination(23120U);
    msg.setDestinationEntity(176U);
    msg.camid = 41U;
    msg.x = 45089U;
    msg.y = 11324U;

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
    msg.setTimeStamp(0.9855359084618088);
    msg.setSource(59230U);
    msg.setSourceEntity(237U);
    msg.setDestination(44684U);
    msg.setDestinationEntity(238U);
    msg.camid = 237U;
    msg.x = 46256U;
    msg.y = 15619U;

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
    msg.setTimeStamp(0.49678685612047047);
    msg.setSource(60809U);
    msg.setSourceEntity(134U);
    msg.setDestination(64757U);
    msg.setDestinationEntity(168U);
    msg.camid = 218U;
    msg.x = 21801U;
    msg.y = 39678U;

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
    msg.setTimeStamp(0.10880174465147108);
    msg.setSource(36192U);
    msg.setSourceEntity(208U);
    msg.setDestination(1736U);
    msg.setDestinationEntity(140U);
    msg.tracking = 104U;
    msg.lat = 0.4185304626808044;
    msg.lon = 0.7788424123308234;
    msg.x = 0.1993256420337597;
    msg.y = 0.16288023673964946;
    msg.z = 0.8672725028561405;

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
    msg.setTimeStamp(0.9170714247779839);
    msg.setSource(35924U);
    msg.setSourceEntity(234U);
    msg.setDestination(44658U);
    msg.setDestinationEntity(164U);
    msg.tracking = 236U;
    msg.lat = 0.19703674724836195;
    msg.lon = 0.2080589439680829;
    msg.x = 0.33855044252483;
    msg.y = 0.19329181211647295;
    msg.z = 0.005592479124146177;

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
    msg.setTimeStamp(0.18162862837038518);
    msg.setSource(39682U);
    msg.setSourceEntity(32U);
    msg.setDestination(37802U);
    msg.setDestinationEntity(144U);
    msg.tracking = 76U;
    msg.lat = 0.13057025301162628;
    msg.lon = 0.37464209201963394;
    msg.x = 0.30343483963505946;
    msg.y = 0.7285387707006755;
    msg.z = 0.5480269762550182;

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
    msg.setTimeStamp(0.15195521327261774);
    msg.setSource(37192U);
    msg.setSourceEntity(71U);
    msg.setDestination(30852U);
    msg.setDestinationEntity(124U);
    msg.target.assign("UOJYIZPHWE");
    msg.lbearing = 0.8166131840007539;
    msg.lelevation = 0.803414777831133;
    msg.bearing = 0.6326927030703274;
    msg.elevation = 0.5079607207221103;
    msg.phi = 0.31113882672111004;
    msg.theta = 0.05467267594296876;
    msg.psi = 0.13568400898471622;
    msg.accuracy = 0.7762185658134659;

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
    msg.setTimeStamp(0.3111004835201836);
    msg.setSource(55317U);
    msg.setSourceEntity(147U);
    msg.setDestination(30985U);
    msg.setDestinationEntity(190U);
    msg.target.assign("WDNUCPOAZIMWWGRYHVNVIIQLWCGYWLFYMGKOAPHTXDGWGAFCCJPXZLAIJPAJHBHKPN");
    msg.lbearing = 0.22969205652909364;
    msg.lelevation = 0.5712546623031896;
    msg.bearing = 0.047347958845867955;
    msg.elevation = 0.8251043601932269;
    msg.phi = 0.7959791336023025;
    msg.theta = 0.585504118882087;
    msg.psi = 0.17891961732536676;
    msg.accuracy = 0.8822403226729164;

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
    msg.setTimeStamp(0.34480559026292334);
    msg.setSource(45704U);
    msg.setSourceEntity(43U);
    msg.setDestination(48894U);
    msg.setDestinationEntity(200U);
    msg.target.assign("HMFGKFUOBBIRXAMTNHVVESKSWWKWGUENUDUHNDXLTUBCFLNETDOWXFPWYLAIOASOAUCEJMACEPPKYLSVQNKMHQBRNTWTZHZRAPYHIAXSJTRFRQTDSBCBMQGYGGLFJTJDZZJLIYPCWCUEIXCOMOBFGPUREWKTPCBPFEHGTPQLZBAUMVGMIAMD");
    msg.lbearing = 0.7792239122912957;
    msg.lelevation = 0.41176821388077267;
    msg.bearing = 0.5153985310838447;
    msg.elevation = 0.27182235226843177;
    msg.phi = 0.3172720842301783;
    msg.theta = 0.5958488183623101;
    msg.psi = 0.19360497134399068;
    msg.accuracy = 0.6088567780300114;

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
    msg.setTimeStamp(0.9927968090485462);
    msg.setSource(18032U);
    msg.setSourceEntity(102U);
    msg.setDestination(60091U);
    msg.setDestinationEntity(147U);
    msg.target.assign("YYBSIAEVOYWEGUEUFAQAPCCZLIJTGSMBGJQXUGLCFVFSHKMLKLEWVDPHBOKRYRDVGSVOCDQZBMLAXQPMYISLZUQRRDTANDWSTUNNMWGKZHPZAVLANXCXONPJDLOGYAIQYTBWUNKYCXNMWNE");
    msg.x = 0.051692490910981936;
    msg.y = 0.17221042986540402;
    msg.z = 0.7918874700677574;
    msg.n = 0.3868037959234327;
    msg.e = 0.3946230064082199;
    msg.d = 0.11739293795223982;
    msg.phi = 0.30076710437245135;
    msg.theta = 0.2877422715451766;
    msg.psi = 0.7953189358156014;
    msg.accuracy = 0.7998109811490883;

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
    msg.setTimeStamp(0.824753756467239);
    msg.setSource(21520U);
    msg.setSourceEntity(94U);
    msg.setDestination(59224U);
    msg.setDestinationEntity(74U);
    msg.target.assign("SQTHCSZBMVOVCYKFMKYIARAGOLRKRLNORCXHWVQRJBZPCJLMDVYTUWJSZTPEJFUBKDMGLNEQEXOIIRXDXNFVQSBBQVORFMIKHRDGTCFPAIDUHWEBWYLAFMCSSRFLPDSSPANONBCPLOVQCEIYRTWZEVDPNAFY");
    msg.x = 0.8457656740024372;
    msg.y = 0.565031758478951;
    msg.z = 0.7200692576932755;
    msg.n = 0.10394894318655346;
    msg.e = 0.20671861415954706;
    msg.d = 0.2789317879167321;
    msg.phi = 0.5660856507038399;
    msg.theta = 0.9021655697810583;
    msg.psi = 0.45442291381625743;
    msg.accuracy = 0.660566712614151;

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
    msg.setTimeStamp(0.9655953140039023);
    msg.setSource(10418U);
    msg.setSourceEntity(27U);
    msg.setDestination(21271U);
    msg.setDestinationEntity(24U);
    msg.target.assign("DKTZFIFHWCMOAVWXWGILWLJTRJTSKUXL");
    msg.x = 0.5238334901948137;
    msg.y = 0.5602097968731008;
    msg.z = 0.19666668435573742;
    msg.n = 0.5072645971281351;
    msg.e = 0.5390266578720403;
    msg.d = 0.4501581877133801;
    msg.phi = 0.6473123859585606;
    msg.theta = 0.9346525033485023;
    msg.psi = 0.191109243965511;
    msg.accuracy = 0.3879239826622535;

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
    msg.setTimeStamp(0.929952452447454);
    msg.setSource(37593U);
    msg.setSourceEntity(72U);
    msg.setDestination(14353U);
    msg.setDestinationEntity(184U);
    msg.target.assign("ONDJIIDIUMHDCHQFNAECTUUYBVSRBVFLYL");
    msg.lat = 0.47502597173271555;
    msg.lon = 0.3924404032343104;
    msg.z_units = 143U;
    msg.z = 0.23182821010980637;
    msg.accuracy = 0.9969288233238441;

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
    msg.setTimeStamp(0.2684330370415371);
    msg.setSource(20642U);
    msg.setSourceEntity(7U);
    msg.setDestination(17072U);
    msg.setDestinationEntity(214U);
    msg.target.assign("TJDXSBNDREWMINRCABKOBVFPAPWZBTDJOTQUMPJNOAOQLRZMWPHFHZULQWLNAPLSEKQGXEQNAUYOJXUFTGCTYMIPRCXNZPOJHICPVEDJNKBIFKRKYAOCFUBVWNKISZQHEGRGGHSSL");
    msg.lat = 0.999598701045877;
    msg.lon = 0.7980432815821319;
    msg.z_units = 185U;
    msg.z = 0.1555103084476731;
    msg.accuracy = 0.42937916071206994;

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
    msg.setTimeStamp(0.049733356133565);
    msg.setSource(46829U);
    msg.setSourceEntity(116U);
    msg.setDestination(17534U);
    msg.setDestinationEntity(251U);
    msg.target.assign("ZLERLTHPVJMKSSCNNDDSBRWNPLFLKIRZUZXBQWNWWXMDSROEHIKSDYDKNBEYKFJFUUWNTAHBJMLPQRMUUACXDIOAAEEJTVITFQYBJIJFHRXZCXGSVIHMAQWGXMBVNLUYPWGKGGDUYBIBCPLFOBAASYKMFLHZLEWVJLRXKVYDTFRASUNCTEEEGHIPGVFNZERHVQNPGQZXOIPPCHQWTTDDMXKFORKJXQVYJZ");
    msg.lat = 0.5478642696759009;
    msg.lon = 0.5688476137208478;
    msg.z_units = 126U;
    msg.z = 0.739761579541441;
    msg.accuracy = 0.29216332981440707;

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
    msg.setTimeStamp(0.08981404623712108);
    msg.setSource(37963U);
    msg.setSourceEntity(27U);
    msg.setDestination(16465U);
    msg.setDestinationEntity(47U);
    msg.name.assign("NGAPKQIUXHQTNITLWUZWFBRIIKNOTFYCOCRDQZUBMDVQOBBSGKEBBLMKYFNFDHLBCMMGJVHRECRCWPXQUGZEJNIXVDZIOURSBXUFDSYLDLATSJEJMJUIWIZJRPFD");
    msg.lat = 0.45340085599011815;
    msg.lon = 0.7564295780796912;
    msg.z = 0.4254018932886574;
    msg.z_units = 146U;

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
    msg.setTimeStamp(0.21917328912901723);
    msg.setSource(11866U);
    msg.setSourceEntity(112U);
    msg.setDestination(29214U);
    msg.setDestinationEntity(40U);
    msg.name.assign("QEPSXQJQATGGKEPVKDUYVMSROIINOZNXSXKFELBPLDWCZXSCHFDRLQTDQOETDFIIFQWXFUFTUWSJOMSRQVPIEPWHJYNEGKLTVLDHVXRACYPJHYCNKTKEZBQCPFCWHOTLJAUVJVULRULJMIBPBPGAUIBNYQKMSJCNRXYWQBMEHVIROEZNBTFGBMOJBMTAGMMZNAVHCFYHBYWOSVZDCZGJCTDRGUYDXGWMZWSLDPUGSWONIKA");
    msg.lat = 0.7526111181243129;
    msg.lon = 0.5297799492562014;
    msg.z = 0.9175825231302359;
    msg.z_units = 21U;

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
    msg.setTimeStamp(0.14871464331684447);
    msg.setSource(13067U);
    msg.setSourceEntity(109U);
    msg.setDestination(65492U);
    msg.setDestinationEntity(45U);
    msg.name.assign("HPVNESSCBNDOTKKRMWZETYJWPOSDYDLYFXOQELCGVQNOKAWLDQMADIPQUIRGKYOOHWZEBGMQTYZNZMVFUEZNWKLSGFQJBCUHMAOVLJXLSIBOZMCUIDZPLNYJTKUVSDIIQHNVNAPGBOQSFWHEETAKVTNCZRLTJGI");
    msg.lat = 0.12185638126793696;
    msg.lon = 0.6949229204649721;
    msg.z = 0.13702310381858296;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.46576859777878277);
    msg.setSource(46467U);
    msg.setSourceEntity(37U);
    msg.setDestination(13609U);
    msg.setDestinationEntity(244U);
    msg.op = 88U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("REIESBZGLLWAAZJWXGRCTQRVMTBQPDNJMRMWGOUCPDEVYHKWOSPDWAHLIFXAXUIFQKVGJCJZSJJPAGVVITPZZQPAXNTEMDLQHVWYPOFSBNZCHSEEECYEHFOLFFTBIMPIZXNTHZOCVWAFCULRUBBGYXXCXJUYNFMHQXMK");
    tmp_msg_0.lat = 0.584811585808924;
    tmp_msg_0.lon = 0.7480282464879248;
    tmp_msg_0.z = 0.5481842969262748;
    tmp_msg_0.z_units = 2U;
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
    msg.setTimeStamp(0.6455741997168088);
    msg.setSource(36521U);
    msg.setSourceEntity(86U);
    msg.setDestination(2137U);
    msg.setDestinationEntity(195U);
    msg.op = 198U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HEAJZFBNBBLMOPCVBAGODGWGJNMRGILHIVODONKBVQYWSGPDBZQFCLPIRSKCNUPLFIBEYZAKSFJSZWMFUGVCHRGNUHEDTMJTYAZZITPJJFXRWJFUAKDKRKMMXVLPXCOYKOHYWXJFRBSIGDXYEDCWRLSQRYDTLPVCOQSYULQUSBXQAZHNECEGUTMEAUFATMREXOQZHOPTZNUNVJIVLIKCKWXPHEZXEBDCLFHJUQTWMSDIKXQAYVWONAMHI");
    tmp_msg_0.lat = 0.9956790122374888;
    tmp_msg_0.lon = 0.636259616512665;
    tmp_msg_0.z = 0.1512310158765705;
    tmp_msg_0.z_units = 116U;
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
    msg.setTimeStamp(0.7705888325997431);
    msg.setSource(52868U);
    msg.setSourceEntity(246U);
    msg.setDestination(23907U);
    msg.setDestinationEntity(205U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.7891771327201985);
    msg.setSource(25366U);
    msg.setSourceEntity(82U);
    msg.setDestination(27483U);
    msg.setDestinationEntity(191U);
    msg.value = 0.9730874587561854;
    msg.type = 34U;

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
    msg.setTimeStamp(0.016504272395017394);
    msg.setSource(14737U);
    msg.setSourceEntity(203U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(18U);
    msg.value = 0.27954752652744896;
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
    msg.setTimeStamp(0.727459855880464);
    msg.setSource(29274U);
    msg.setSourceEntity(210U);
    msg.setDestination(5731U);
    msg.setDestinationEntity(200U);
    msg.value = 0.16060954225589463;
    msg.type = 215U;

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
    msg.setTimeStamp(0.31934922565603985);
    msg.setSource(48478U);
    msg.setSourceEntity(218U);
    msg.setDestination(47715U);
    msg.setDestinationEntity(163U);
    msg.value = 0.344333964631674;

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
    msg.setTimeStamp(0.12691034145858238);
    msg.setSource(38008U);
    msg.setSourceEntity(111U);
    msg.setDestination(432U);
    msg.setDestinationEntity(59U);
    msg.value = 0.36194770193941594;

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
    msg.setTimeStamp(0.4497602673137512);
    msg.setSource(32300U);
    msg.setSourceEntity(73U);
    msg.setDestination(56985U);
    msg.setDestinationEntity(115U);
    msg.value = 0.8758222543199627;

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
    msg.setTimeStamp(0.9366498284585402);
    msg.setSource(26377U);
    msg.setSourceEntity(176U);
    msg.setDestination(17022U);
    msg.setDestinationEntity(165U);
    msg.timestamp_last_service = 0.23883765653713918;
    msg.time_next_service = 0.671716234394577;
    msg.time_motor_next_service = 0.23802830321895474;
    msg.time_idle_ground = 0.12656173776520319;
    msg.time_idle_air = 0.3740153075617849;
    msg.time_idle_water = 0.019946937205970405;
    msg.time_idle_underwater = 0.32894989978160427;
    msg.time_idle_unknown = 0.5843843086627801;
    msg.time_motor_ground = 0.893788659475848;
    msg.time_motor_air = 0.26187280377352884;
    msg.time_motor_water = 0.41898313286625477;
    msg.time_motor_underwater = 0.020029168228459793;
    msg.time_motor_unknown = 0.6544980990899316;
    msg.rpm_min = 22247;
    msg.rpm_max = -26999;
    msg.depth_max = 0.06201528003861112;

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
    msg.setTimeStamp(0.9361872395548855);
    msg.setSource(15307U);
    msg.setSourceEntity(109U);
    msg.setDestination(44598U);
    msg.setDestinationEntity(254U);
    msg.timestamp_last_service = 0.7885343760976783;
    msg.time_next_service = 0.4124773109085752;
    msg.time_motor_next_service = 0.06743752161046945;
    msg.time_idle_ground = 0.37849882294425075;
    msg.time_idle_air = 0.6565105267702096;
    msg.time_idle_water = 0.7189487707067521;
    msg.time_idle_underwater = 0.11342071875938198;
    msg.time_idle_unknown = 0.6305866799529457;
    msg.time_motor_ground = 0.5434588949025855;
    msg.time_motor_air = 0.05898335262820731;
    msg.time_motor_water = 0.9021015058442226;
    msg.time_motor_underwater = 0.842803843743085;
    msg.time_motor_unknown = 0.7892290214226692;
    msg.rpm_min = 2730;
    msg.rpm_max = 15804;
    msg.depth_max = 0.10713887591242288;

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
    msg.setTimeStamp(0.4702892781286626);
    msg.setSource(31842U);
    msg.setSourceEntity(122U);
    msg.setDestination(45923U);
    msg.setDestinationEntity(85U);
    msg.timestamp_last_service = 0.49142717988846585;
    msg.time_next_service = 0.9479913749471269;
    msg.time_motor_next_service = 0.9226716598793883;
    msg.time_idle_ground = 0.96833446492552;
    msg.time_idle_air = 0.2739164070692276;
    msg.time_idle_water = 0.3091097946277631;
    msg.time_idle_underwater = 0.6503870358688739;
    msg.time_idle_unknown = 0.32731502554345737;
    msg.time_motor_ground = 0.40488674181516016;
    msg.time_motor_air = 0.4108852151288095;
    msg.time_motor_water = 0.5883207553735501;
    msg.time_motor_underwater = 0.4968992133944876;
    msg.time_motor_unknown = 0.9257560063018044;
    msg.rpm_min = 11135;
    msg.rpm_max = 11687;
    msg.depth_max = 0.9910162093904775;

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
    msg.setTimeStamp(0.6231112526084779);
    msg.setSource(40180U);
    msg.setSourceEntity(156U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(7U);
    msg.severity = 211U;
    msg.text.assign("VNWPHEWQROTNRZENBOYQPLMJQLMJAYXMNEXFWBOLDXEUDCTZIXWNQBPLHDVSAZVHERYEHYSKIRFUOGPKCHLINOTKOCSTGGFACFXILMWGUATBFNYJYRMPOGBRJEVEBIKBKJVJTCFVSMDZQZHDGPEGTSAMZWKSMHKGHXLDLFTBUJAZTHKHN");

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
    msg.setTimeStamp(0.34882951152550157);
    msg.setSource(53622U);
    msg.setSourceEntity(186U);
    msg.setDestination(1772U);
    msg.setDestinationEntity(17U);
    msg.severity = 139U;
    msg.text.assign("GICTHWXRAZPSWJTNVARXCIFZRTYXKFJMHXPXYCRMQIWBJQQVUNDEBDQRFANQ");

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
    msg.setTimeStamp(0.4310881736137916);
    msg.setSource(25985U);
    msg.setSourceEntity(183U);
    msg.setDestination(38538U);
    msg.setDestinationEntity(150U);
    msg.severity = 251U;
    msg.text.assign("HGZDCYQNFSZBIDVGQ");

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
    msg.setTimeStamp(0.17641609317899387);
    msg.setSource(61497U);
    msg.setSourceEntity(247U);
    msg.setDestination(444U);
    msg.setDestinationEntity(215U);
    msg.channel = 113;
    msg.value = 1533027202;
    msg.gain = 221U;

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
    msg.setTimeStamp(0.5708938159775034);
    msg.setSource(6276U);
    msg.setSourceEntity(121U);
    msg.setDestination(6893U);
    msg.setDestinationEntity(119U);
    msg.channel = 30;
    msg.value = -2103974856;
    msg.gain = 205U;

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
    msg.setTimeStamp(0.3685103090599541);
    msg.setSource(23538U);
    msg.setSourceEntity(194U);
    msg.setDestination(34147U);
    msg.setDestinationEntity(73U);
    msg.channel = -114;
    msg.value = 1997819322;
    msg.gain = 222U;

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
    msg.setTimeStamp(0.04548147428078586);
    msg.setSource(63418U);
    msg.setSourceEntity(189U);
    msg.setDestination(26331U);
    msg.setDestinationEntity(194U);
    msg.ch01 = 0.721508067353866;
    msg.ch02 = 0.30304036875626117;
    msg.ch03 = 0.3920225094175238;
    msg.ch04 = 0.9502648425303692;
    msg.ch05 = 0.6007519054530285;
    msg.ch06 = 0.35629195281406123;
    msg.ch07 = 0.6293753867058207;
    msg.ch08 = 0.6626016978991768;
    msg.ch09 = 0.6354704086624908;
    msg.ch10 = 0.6667465314299523;
    msg.ch11 = 0.9225445853000708;
    msg.ch12 = 0.312936317809808;
    msg.ch13 = 0.002285218046721549;
    msg.ch14 = 0.8094628789604513;
    msg.ch15 = 0.13418698009834695;
    msg.ch16 = 0.14889671153221284;

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
    msg.setTimeStamp(0.6319984561633478);
    msg.setSource(18417U);
    msg.setSourceEntity(77U);
    msg.setDestination(18233U);
    msg.setDestinationEntity(141U);
    msg.ch01 = 0.08715738346759694;
    msg.ch02 = 0.661023635622627;
    msg.ch03 = 0.11338502878947665;
    msg.ch04 = 0.1689857790508853;
    msg.ch05 = 0.9216225631413133;
    msg.ch06 = 0.6259310903193099;
    msg.ch07 = 0.44332455557131434;
    msg.ch08 = 0.3686170737314495;
    msg.ch09 = 0.9880277268875428;
    msg.ch10 = 0.017182009090975225;
    msg.ch11 = 0.9068221755568495;
    msg.ch12 = 0.17764656115632138;
    msg.ch13 = 0.905158475856732;
    msg.ch14 = 0.6960067219112065;
    msg.ch15 = 0.3757481110178231;
    msg.ch16 = 0.8070463175680104;

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
    msg.setTimeStamp(0.16125427541065807);
    msg.setSource(15323U);
    msg.setSourceEntity(59U);
    msg.setDestination(7293U);
    msg.setDestinationEntity(71U);
    msg.ch01 = 0.8252875254211266;
    msg.ch02 = 0.4402637855626276;
    msg.ch03 = 0.06480126022068922;
    msg.ch04 = 0.7193846922156939;
    msg.ch05 = 0.018189292419139358;
    msg.ch06 = 0.09347271427614312;
    msg.ch07 = 0.7186112813146742;
    msg.ch08 = 0.9041593839066011;
    msg.ch09 = 0.431746432331939;
    msg.ch10 = 0.3704679733173336;
    msg.ch11 = 0.617080004422893;
    msg.ch12 = 0.27589772114412014;
    msg.ch13 = 0.16310296244214595;
    msg.ch14 = 0.5033435734721642;
    msg.ch15 = 0.3419350493706548;
    msg.ch16 = 0.35918840095721005;

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
    msg.setTimeStamp(0.970466340425493);
    msg.setSource(54146U);
    msg.setSourceEntity(225U);
    msg.setDestination(46668U);
    msg.setDestinationEntity(233U);
    msg.op = 108U;
    msg.lat = 0.580020390236599;
    msg.lon = 0.5237609910021281;
    msg.height = 0.8634922639300217;
    msg.depth = 0.30850651568377063;
    msg.alt = 0.8647719849295452;

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
    msg.setTimeStamp(0.40978892557495816);
    msg.setSource(50009U);
    msg.setSourceEntity(201U);
    msg.setDestination(7745U);
    msg.setDestinationEntity(38U);
    msg.op = 39U;
    msg.lat = 0.5787619801918599;
    msg.lon = 0.4697129136013226;
    msg.height = 0.08924564887219266;
    msg.depth = 0.05726242619991595;
    msg.alt = 0.46844290765166774;

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
    msg.setTimeStamp(0.6337910288062079);
    msg.setSource(19001U);
    msg.setSourceEntity(141U);
    msg.setDestination(51715U);
    msg.setDestinationEntity(100U);
    msg.op = 111U;
    msg.lat = 0.41559318409421353;
    msg.lon = 0.10458104519327072;
    msg.height = 0.5624382858244773;
    msg.depth = 0.5390078616454437;
    msg.alt = 0.8060862409968301;

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
    msg.setTimeStamp(0.7605075993972907);
    msg.setSource(24032U);
    msg.setSourceEntity(181U);
    msg.setDestination(30699U);
    msg.setDestinationEntity(243U);
    msg.direction = 0.0727546493980471;
    msg.speed = 0.37987213351098237;
    msg.turbulence = 0.9523537218545033;

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
    msg.setTimeStamp(0.6296327772284463);
    msg.setSource(42645U);
    msg.setSourceEntity(15U);
    msg.setDestination(42085U);
    msg.setDestinationEntity(131U);
    msg.direction = 0.04478237578099731;
    msg.speed = 0.08385888271112096;
    msg.turbulence = 0.05331916349704635;

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
    msg.setTimeStamp(0.8968260420042713);
    msg.setSource(24990U);
    msg.setSourceEntity(18U);
    msg.setDestination(61593U);
    msg.setDestinationEntity(121U);
    msg.direction = 0.3636865330960759;
    msg.speed = 0.982349355148805;
    msg.turbulence = 0.9310223032807571;

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
    msg.setTimeStamp(0.8421753527327371);
    msg.setSource(32516U);
    msg.setSourceEntity(35U);
    msg.setDestination(49712U);
    msg.setDestinationEntity(92U);
    msg.msg_type.assign("XRCDPKUAVINHFXYATHVOPYSSMINOQNPRDEBJUZLTQSQFBOVGUZWIMEFFFKLGYDLZDLTRGJMCJEEDBZZGXHSQEAAMMRCFGUDOMAJEGMGIIKVNWLSYXXUPZIITLYICGEATPWLJRCO");
    msg.sensor_class.assign("ITTBXUWABCWNCRJLEGQJSICEUXKEXJVNZQOYXDPVODKGDHHBUQLGEZYIDXUSWQGHENBLOYCOINGKAJCYSRZLVSNOWFUPJFYFUHSIXPHJLBWMDUKIAJKLFHZPOILTGZWQBGVEAOKTOMHDCZMYQQZBNFOVMUGAIXYRMAZRDRSBEPFZXBKHILNSVMLSJFAEXVCJODVKQWUTJWSVFPZPMN");
    msg.mmsi.assign("WTRSQYWFBMPAUBOETXWIMPXFVUZQJTTXCYXEREJBCLILJYDLZPYBKKPIVKAZJXAHNEUQKZFSFNRYNKRJYRIDWJVVOEAHVLAOECGDVVRIGDHPOAOYDILQMNHNDPCNHZNPYMELNRWPTUMCMBHSHERUQUBWFFTWLZGLJGPCODQMVITUGSQKIQUETGNSICNTCVSOJOGUBOZBWDTZRSUMAWCCYMFGAKXG");
    msg.callsign.assign("ZEGEGINSKXUTUKJEDJFXLPNBZHVONLZQSTVMAMLOCTVDYDUVSCLQULHYFRGFASBICIMRLHYNWYYNFHQKFVGNMYBQHQTOMTXBPBZXKOJFHMCEDDHYIPPUIRBEZPHLFEFAXVQTKCZRBPGOWJJUKMPSKDRANDLIRUSEEVFZNDJWSPZUXVKYRRRAMYWKLBGCKNOSTAZQBUWWLXJWGQBGAOOEICSXODZUCJAAPXJTTHRPNOYQIVMGSDCEFAMWWJ");
    msg.name.assign("JLHQKCYWRXVLRDBWJQMCDNEUXVJLQPXALZTAQIDRBNYAVEWMGXKEMEVHFFIYQTNRNNPGUWCVMZAUBOSLEOJAZQORDSSOBRVZLMUKPCBAIMHFQWAVRRNJKEUQKGZQIHOVCZAHKIHWKXWCUJDWJDPTIYPPNQGZFIMITKBSHHYOKLUXGYPOUTATOIPOJYOBZYG");
    msg.nav_status = 0U;
    msg.type_and_cargo = 157U;
    msg.lat = 0.8650275702282741;
    msg.lon = 0.737672420488694;
    msg.course = 0.5543826304225851;
    msg.speed = 0.1663062832161687;
    msg.dist = 0.9702595797998553;
    msg.a = 0.07382798163155202;
    msg.b = 0.06076371478448861;
    msg.c = 0.8559624307598349;
    msg.d = 0.723144888777586;
    msg.draught = 0.12271157603270766;

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
    msg.setTimeStamp(0.9371147133488282);
    msg.setSource(34964U);
    msg.setSourceEntity(254U);
    msg.setDestination(17057U);
    msg.setDestinationEntity(69U);
    msg.msg_type.assign("LVLCPVPHGSVJKOXVYQYKQNCEELRROLOYBMFISKGKHCEAEXUJWGEZTLAIFZMBMPZMFZICUJWQIDNAWXBDPHIBFIHUANVYOVHJDZFCRMRUEGXTLPWSLASWGRWTZYQBTGQMMUBGTF");
    msg.sensor_class.assign("OVIAHXQUQHELGHKMLME");
    msg.mmsi.assign("DCRCZZDAQKHPSWQVVVRMKSEEYZTJOAEMNIKIALICRGALXMQYOCBFLPTRWOBZRUNZQYGGEOIRVVVULJAAJPWKPMYDGIQHCZTMXQNBDOFSNJDBWGWQCOXPXBDNFTTYJBDPAERKJGXPVSAFXCKGIUKWSBLLLOSXJQPNJZNLOUKWKUYOYSCDVHENUUUFHDXXPYITFJFZXRIUCHFBMVTESGCFKMTNOQREEAGMUHHLIHWBVDPWSZRFYNQBMYS");
    msg.callsign.assign("RYQYNGEPHDIXAWTJNACJGKEAZOIYYGGARNPUQXXRBFOSYTOQYDKPTNRHTDSHZUWMUFHHLDQXDFQCJMJRCASLZHXUQUREOOLIWLKJWCOFKHEVAEVVWQUF");
    msg.name.assign("JSOCQGUMOINDEQUPOWWRCVEFZRNNWYLKMWNAZT");
    msg.nav_status = 57U;
    msg.type_and_cargo = 159U;
    msg.lat = 0.276775750000514;
    msg.lon = 0.3085114720421641;
    msg.course = 0.39588580879080015;
    msg.speed = 0.7575130785386204;
    msg.dist = 0.027324605799209145;
    msg.a = 0.617599068439671;
    msg.b = 0.07748803449517983;
    msg.c = 0.4134603996733761;
    msg.d = 0.31984569091444504;
    msg.draught = 0.9433859556342328;

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
    msg.setTimeStamp(0.6321883689053643);
    msg.setSource(2044U);
    msg.setSourceEntity(234U);
    msg.setDestination(34921U);
    msg.setDestinationEntity(178U);
    msg.msg_type.assign("JWKORONVOXMRWPOYIULTNAOGEWMASYWLSXMOYJTQMNHNTCIZCSGDUGGKBBSKEKGOEYUXDYYYRFJTPRWLPQEQBGBHDIJYORMWNHYBTXNUSJXBFCC");
    msg.sensor_class.assign("KVXRJHWFZZDQVKFCOXPQBLFHPTXROOGDMYFWBGYUZDECSQJQXTRMYDLINUUWTTWRWWFSTAKYDQHEFSVAERWKZUELBJTHQQRPENGVEDAUXOKBCJVGCDUUOLJSNTLOEWSMYLILRINEXIGBCABGBJILAKIRXOISGTIEQPAYCHCVZSCINKSRKDLMFLKOCJHGPHZPTMFPQZAKZYVAI");
    msg.mmsi.assign("IJREEXAZENIFGZVERODBTJD");
    msg.callsign.assign("EXGMKBMXGUFKBPYCBIYERLFRNTUZNVLLVNRDMYLXKQTXZZUMCYZPYIJHTNBNIPJQMDEAVFVOFGHFZKVNEDYZWJMCJLADXSSFTUIGBQOTALICXKDWQZHCVUDFWRUESSBFYWHZIKHJIPSIOXRDLGJZQTWDOOAXUUJLGIHEFQEAFQLOCTLEHWPKHVYRSJPKATAZACYOMCMS");
    msg.name.assign("KQLBPJSWHNQYZBKQBRAAIJDDNBWOGYSDITMQRHBVCJKFTPCDSVUNYYIPVPLZGINWZMNRSECAUUVNGHTECSRDTMMRGZKFDTJVKYQKOSKZXOODJM");
    msg.nav_status = 232U;
    msg.type_and_cargo = 147U;
    msg.lat = 0.6669977598866084;
    msg.lon = 0.20433952832080637;
    msg.course = 0.1850833596386554;
    msg.speed = 0.015632287115594945;
    msg.dist = 0.7912433296115109;
    msg.a = 0.030908578482314764;
    msg.b = 0.11667764363429611;
    msg.c = 0.3850799415792583;
    msg.d = 0.7104250773372656;
    msg.draught = 0.31147086639317334;

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
    msg.setTimeStamp(0.8231205614663596);
    msg.setSource(55972U);
    msg.setSourceEntity(49U);
    msg.setDestination(7011U);
    msg.setDestinationEntity(47U);
    msg.depth_at_loc.assign("NFGOATGCDIUDTVJIFSGQAPNZPZKYXAYAYLNHMPTIHBHNCJDZJAZMEIQJYLXSGUFRYOKYFAWHPLLBBYVZBUQTMHTPNVLZTSUJCWVKFZHPLESQWMIHXCBESXXORIJFUIZNKQWRXNFEOCNMBOLDCVVGRPWAQFDKEDKBJPNTGAVJBTCSUGXHRXKVKOLPRHRIJALMEVBNBKADCEUROMFUDIWWSLWKMEUWXGDTI");
    msg.danger.assign("ZVAKJAMRZCMEBVZMZTPGJUJPPBJPLIEYRBXKZEAFNHLJQRKIIWACTSOTQQAWOBMWQIHFOKGLCAAXFWNRETPAIKUCVLFRRZWIGICEBSPHCMEYBYWFPZZTQGOUUSXWMYTBQDZMOY");

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
    msg.setTimeStamp(0.33332144691329313);
    msg.setSource(8270U);
    msg.setSourceEntity(215U);
    msg.setDestination(36579U);
    msg.setDestinationEntity(92U);
    msg.depth_at_loc.assign("QQPEPPSLHWMZHTASSBJMKKEJVNN");
    msg.danger.assign("ZMBZZLTKUWYNVRGDCYSCCWGKBWNJHSUNZOCQPIVEIDCUAFBHEKWUPXLYKLYBQDAKMDMENXJIKMEDYGNNRZRYTWJRZMPVRKHWX");

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
    msg.setTimeStamp(0.6385171681223196);
    msg.setSource(62301U);
    msg.setSourceEntity(16U);
    msg.setDestination(11542U);
    msg.setDestinationEntity(110U);
    msg.depth_at_loc.assign("YGKNGVLJSTJLSDXUXTTFMTZWNFEXRGDNSOGQEHTLKBWMBFVQDSXWYNPFUKJCCUYDCQNLBTVBESERWRSAZMUIOXQHBFZQIZGGQFYRYHXMLJPATRJXNZDXY");
    msg.danger.assign("DIIRXKUSLKWPIGEYRQRWDAYEERISUMZPQYBTTOOLAZCGSFRBNUMQCTTNCHQECPRKOCNVBBEZLLHWLJKBQNSZGDAPYDZZJDANCBS");

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
    msg.setTimeStamp(0.1275736746788506);
    msg.setSource(6059U);
    msg.setSourceEntity(242U);
    msg.setDestination(41887U);
    msg.setDestinationEntity(109U);
    msg.time = 0.5660455692465862;
    msg.x = 0.7394897787129666;
    msg.y = 0.9720230612391696;
    msg.z = 0.3313510222077133;

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
    msg.setTimeStamp(0.611159862978074);
    msg.setSource(61468U);
    msg.setSourceEntity(124U);
    msg.setDestination(39797U);
    msg.setDestinationEntity(130U);
    msg.time = 0.12917093888981945;
    msg.x = 0.15769165735984236;
    msg.y = 0.600226773103871;
    msg.z = 0.03683895114911717;

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
    msg.setTimeStamp(0.9238577743452849);
    msg.setSource(61576U);
    msg.setSourceEntity(114U);
    msg.setDestination(57612U);
    msg.setDestinationEntity(178U);
    msg.time = 0.2199216952992752;
    msg.x = 0.4055397358258629;
    msg.y = 0.28321582726514416;
    msg.z = 0.058760010760003145;

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
    msg.setTimeStamp(0.1717686340103568);
    msg.setSource(13066U);
    msg.setSourceEntity(3U);
    msg.setDestination(14063U);
    msg.setDestinationEntity(86U);
    msg.nbeams = 117U;
    msg.ncells = 207U;
    msg.coord_sys = 57U;

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
    msg.setTimeStamp(0.9193238072112639);
    msg.setSource(15686U);
    msg.setSourceEntity(127U);
    msg.setDestination(36402U);
    msg.setDestinationEntity(199U);
    msg.nbeams = 219U;
    msg.ncells = 211U;
    msg.coord_sys = 77U;

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
    msg.setTimeStamp(0.06548848423800913);
    msg.setSource(26691U);
    msg.setSourceEntity(193U);
    msg.setDestination(36902U);
    msg.setDestinationEntity(223U);
    msg.nbeams = 232U;
    msg.ncells = 74U;
    msg.coord_sys = 142U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.7201906156971898;
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
    msg.setTimeStamp(0.4044245668267028);
    msg.setSource(6533U);
    msg.setSourceEntity(201U);
    msg.setDestination(1771U);
    msg.setDestinationEntity(182U);
    msg.cell_position = 0.35350616689879344;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6887461256992439;
    tmp_msg_0.amp = 0.2590574672434932;
    tmp_msg_0.cor = 193U;
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
    msg.setTimeStamp(0.1956695534245353);
    msg.setSource(27840U);
    msg.setSourceEntity(145U);
    msg.setDestination(14364U);
    msg.setDestinationEntity(242U);
    msg.cell_position = 0.4066112596607476;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.7540053813550656;
    tmp_msg_0.amp = 0.3123845292256573;
    tmp_msg_0.cor = 133U;
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
    msg.setTimeStamp(0.9626581967009088);
    msg.setSource(495U);
    msg.setSourceEntity(202U);
    msg.setDestination(41111U);
    msg.setDestinationEntity(94U);
    msg.cell_position = 0.29231971800061496;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.8346352025555178;
    tmp_msg_0.amp = 0.3682056647868913;
    tmp_msg_0.cor = 228U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8749919198913616);
    msg.setSource(1709U);
    msg.setSourceEntity(229U);
    msg.setDestination(63079U);
    msg.setDestinationEntity(90U);
    msg.vel = 0.41729090845965133;
    msg.amp = 0.004989562664663771;
    msg.cor = 185U;

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
    msg.setTimeStamp(0.6861119856482878);
    msg.setSource(5109U);
    msg.setSourceEntity(223U);
    msg.setDestination(24617U);
    msg.setDestinationEntity(3U);
    msg.vel = 0.13439763603307053;
    msg.amp = 0.8086709235030904;
    msg.cor = 52U;

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
    msg.setTimeStamp(0.0632243067333248);
    msg.setSource(31307U);
    msg.setSourceEntity(111U);
    msg.setDestination(9377U);
    msg.setDestinationEntity(43U);
    msg.vel = 0.740579450178531;
    msg.amp = 0.8200714847067827;
    msg.cor = 189U;

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
    msg.setTimeStamp(0.5592380817745902);
    msg.setSource(59016U);
    msg.setSourceEntity(122U);
    msg.setDestination(14249U);
    msg.setDestinationEntity(39U);
    msg.value = 0.9918499228198215;

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
    msg.setTimeStamp(0.17028451101105901);
    msg.setSource(32143U);
    msg.setSourceEntity(54U);
    msg.setDestination(49486U);
    msg.setDestinationEntity(106U);
    msg.value = 0.28664433235221776;

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
    msg.setTimeStamp(0.3357230929118229);
    msg.setSource(42591U);
    msg.setSourceEntity(228U);
    msg.setDestination(26458U);
    msg.setDestinationEntity(79U);
    msg.value = 0.3316020211651607;

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
    msg.setTimeStamp(0.1098765756640444);
    msg.setSource(15052U);
    msg.setSourceEntity(204U);
    msg.setDestination(2624U);
    msg.setDestinationEntity(144U);
    msg.sig_wave_height_hm0 = 0.24454503529345217;
    msg.wave_peak_direction = 0.4506421802675328;
    msg.wave_peak_period = 0.935636392403516;
    msg.wave_height_wind_hm0 = 0.25440895131668295;
    msg.wave_height_swell_hm0 = 0.5256515682004088;
    msg.wave_peak_period_wind = 0.7362047347717633;
    msg.wave_peak_period_swell = 0.4991846971600151;
    msg.wave_peak_direction_wind = 0.7451274120865652;
    msg.wave_peak_direction_swell = 0.3907141062754965;
    msg.wave_mean_direction = 0.6688438159620745;
    msg.wave_mean_period_tm02 = 0.9916477918507937;
    msg.wave_height_hmax = 0.5947607031422297;
    msg.wave_height_crest = 0.8656787236022598;
    msg.wave_height_trough = 0.554809568917601;
    msg.wave_period_tmax = 0.7554348773137064;
    msg.wave_period_tz = 0.02890127005262877;
    msg.significant_wave_height_h1_3 = 0.6607764124151453;
    msg.mean_spreading_angle = 0.08131028639519067;
    msg.first_order_spread = 0.6174569082047293;
    msg.long_crestedness_parameters = 0.5434731448088035;
    msg.heading = 0.8684514384210634;
    msg.pitch = 0.5360172552870874;
    msg.roll = 0.8838059281406488;
    msg.external_heading = 0.3145299469224765;
    msg.stdev_heading = 0.6667245232577909;
    msg.stdev_pitch = 0.6249633876665017;
    msg.stdev_roll = 0.6122284600402832;

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
    msg.setTimeStamp(0.5638093983393594);
    msg.setSource(62103U);
    msg.setSourceEntity(234U);
    msg.setDestination(17333U);
    msg.setDestinationEntity(184U);
    msg.sig_wave_height_hm0 = 0.14124124058326548;
    msg.wave_peak_direction = 0.8772976279557603;
    msg.wave_peak_period = 0.02037764548590726;
    msg.wave_height_wind_hm0 = 0.9854748739977219;
    msg.wave_height_swell_hm0 = 0.9517720078326773;
    msg.wave_peak_period_wind = 0.2104913628326126;
    msg.wave_peak_period_swell = 0.9823052229002684;
    msg.wave_peak_direction_wind = 0.5098348941270137;
    msg.wave_peak_direction_swell = 0.11369054516404786;
    msg.wave_mean_direction = 0.383735654013424;
    msg.wave_mean_period_tm02 = 0.2876515730047272;
    msg.wave_height_hmax = 0.250249374441768;
    msg.wave_height_crest = 0.3870917510606656;
    msg.wave_height_trough = 0.6529727473029394;
    msg.wave_period_tmax = 0.2188356576529793;
    msg.wave_period_tz = 0.08149546403459806;
    msg.significant_wave_height_h1_3 = 0.16424806396337177;
    msg.mean_spreading_angle = 0.9705356054719755;
    msg.first_order_spread = 0.7514021571717471;
    msg.long_crestedness_parameters = 0.2856975438920982;
    msg.heading = 0.7047489526103857;
    msg.pitch = 0.7598459689207507;
    msg.roll = 0.5830923256822075;
    msg.external_heading = 0.4389196960550251;
    msg.stdev_heading = 0.17023846475049187;
    msg.stdev_pitch = 0.4068084324169512;
    msg.stdev_roll = 0.47383489492656816;

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
    msg.setTimeStamp(0.053436774790259434);
    msg.setSource(16908U);
    msg.setSourceEntity(195U);
    msg.setDestination(44033U);
    msg.setDestinationEntity(180U);
    msg.sig_wave_height_hm0 = 0.7727291166286965;
    msg.wave_peak_direction = 0.1202337923271819;
    msg.wave_peak_period = 0.7006694136404147;
    msg.wave_height_wind_hm0 = 0.03128731837272736;
    msg.wave_height_swell_hm0 = 0.5489411300794832;
    msg.wave_peak_period_wind = 0.031072100923974277;
    msg.wave_peak_period_swell = 0.913157151699448;
    msg.wave_peak_direction_wind = 0.1607875252294152;
    msg.wave_peak_direction_swell = 0.41653541823975826;
    msg.wave_mean_direction = 0.9309301086829774;
    msg.wave_mean_period_tm02 = 0.18403509377324134;
    msg.wave_height_hmax = 0.933142197895369;
    msg.wave_height_crest = 0.7571311654751987;
    msg.wave_height_trough = 0.5466399707546111;
    msg.wave_period_tmax = 0.4670719575292537;
    msg.wave_period_tz = 0.253371287730494;
    msg.significant_wave_height_h1_3 = 0.3490462117600759;
    msg.mean_spreading_angle = 0.7519115014603245;
    msg.first_order_spread = 0.23756420565219727;
    msg.long_crestedness_parameters = 0.14256859202837546;
    msg.heading = 0.47223285904657486;
    msg.pitch = 0.8313573582559827;
    msg.roll = 0.9485734366694313;
    msg.external_heading = 0.4000610520324561;
    msg.stdev_heading = 0.9635788682341236;
    msg.stdev_pitch = 0.1764110965409802;
    msg.stdev_roll = 0.22042948162632003;

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
    msg.setTimeStamp(0.3598964663400812);
    msg.setSource(39642U);
    msg.setSourceEntity(8U);
    msg.setDestination(23530U);
    msg.setDestinationEntity(217U);
    msg.name.assign("DREAZYUWNLBJPTUAJBZWODNYPJQRHTINKPAGKRBWRJURKFCISWLWXOFWSF");
    msg.value = 229U;

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
    msg.setTimeStamp(0.4718688052664721);
    msg.setSource(45670U);
    msg.setSourceEntity(187U);
    msg.setDestination(44998U);
    msg.setDestinationEntity(249U);
    msg.name.assign("YOMPMUIHXJUTVZEFSDECQFJVTBQZHPRPTAWBBURCSTPWHHENFGPRNMMIQHZWGGXI");
    msg.value = 65U;

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
    msg.setTimeStamp(0.2338094580609239);
    msg.setSource(61146U);
    msg.setSourceEntity(65U);
    msg.setDestination(18728U);
    msg.setDestinationEntity(191U);
    msg.name.assign("CCLLOYEBQILQSDSCSMQEBSNYCNCRARWFUYIPGUGKXRJZLXCHHNTUTTYXDLXHKPIALYBSEZXOJGMFJVEFTNPFXBETMCLBFPQSZKJVJTDEMHKPYEAGFUNMITTMVFARQMREGXLHQXSKHBACZHWVWIBPNNYSDHBPOMFUKOHKJQBNVDYVQRLUMGQMDZTOGWVWQVWZIOGZZAWCDRWOUABIPVF");
    msg.value = 146U;

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
    msg.setTimeStamp(0.5386381774659744);
    msg.setSource(46078U);
    msg.setSourceEntity(195U);
    msg.setDestination(9375U);
    msg.setDestinationEntity(41U);
    msg.name.assign("AILKCLKZOXTSXXVVTNSMERCSLHSLUPWGLGYARFQYBWVCXJXTOZBGUZJHJAGMBPYVJERWOVJWSNWFCSITAOIMDSVMNUHNUFSBDPNEBKDTMZ");

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
    msg.setTimeStamp(0.8552840836532669);
    msg.setSource(3107U);
    msg.setSourceEntity(48U);
    msg.setDestination(18763U);
    msg.setDestinationEntity(200U);
    msg.name.assign("HTOCUMXWZYDCSEBULKOKZGMVNGANHUAIJHZMJWQSNFKMFXSKQNAJXWHFTV");

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
    msg.setTimeStamp(0.8425274072716294);
    msg.setSource(15263U);
    msg.setSourceEntity(219U);
    msg.setDestination(32292U);
    msg.setDestinationEntity(89U);
    msg.name.assign("QWRMGPPZRJSPKGUCYQVJNADCBFMMBNMUZJYREKSBQTCPUJTFVVHMZOOUQSOHMJORTIMUWJTHXDGZRKBAGCNYWVHLGTXZIHDZDILUGYCVEJTQEJEOLEVKNYPDLLSERYTTYSHIDINUABGBIEVLZGBLPTSANWVXPIHWFXHGYKOFZFILCDPMXLUECAZFWNFUHKREWSWVYFOIDAQIYRXASSEDQLOUWQPBQWMTVKCBDZNFQFRGP");

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
    msg.setTimeStamp(0.02593278841104485);
    msg.setSource(30114U);
    msg.setSourceEntity(5U);
    msg.setDestination(21146U);
    msg.setDestinationEntity(6U);
    msg.name.assign("POHBMCQFLRARRGYISAQCNCEBVISLMJZKKDJMQDJTUYMUXGNVSERBELXWDHGQXSDJRWEIKGITKKYFJPMTTEYCMDGHTVAUUZJTCIZNKZAZZQRGKXENFDEWWANPGFKPCPZWGRFSBJOWFMPJYX");
    msg.value = 215U;

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
    msg.setTimeStamp(0.8141746196117333);
    msg.setSource(17960U);
    msg.setSourceEntity(79U);
    msg.setDestination(17902U);
    msg.setDestinationEntity(130U);
    msg.name.assign("VOFNOEQEOVFLPFAOKIHRPAWGSZSLXTMIFBCBZBZYZONDZVNPEURFYKPVJARXUJVUAOMSQEJDRICNOLYCXNMWMIQDHXHKKGPCPYWPZKGYEAYIKYJBNISRNBESMMAXYFUEBTYNSQGMULWEDCKGGWJLBLAETVSGMCRQSUFFHDTSTQRTXCJTUGVZRHNKHAIGFJTOTWDNAJJMZVWGKBBCQQXTLUPCIEUIVHZYRWKBHOXUDIDFJZVMLQXDSPWW");
    msg.value = 31U;

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
    msg.setTimeStamp(0.053523893868385075);
    msg.setSource(24602U);
    msg.setSourceEntity(242U);
    msg.setDestination(81U);
    msg.setDestinationEntity(189U);
    msg.name.assign("HECRSUYNOIRHIZTYMQCVXYCGDISOYTMUAIUAQRYANCPKBDKXOMVFPFOCHJBSSMPOSKWJAMQTXPDJTFLFWVOQKJLORHKDBGODNFXBZJQILRLMWZFWLBKLIGYSWS");
    msg.value = 155U;

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
    msg.setTimeStamp(0.5392975291155502);
    msg.setSource(38027U);
    msg.setSourceEntity(216U);
    msg.setDestination(32694U);
    msg.setDestinationEntity(62U);
    msg.value = 0.6874299063135114;

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
    msg.setTimeStamp(0.09440517063721421);
    msg.setSource(43953U);
    msg.setSourceEntity(165U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(120U);
    msg.value = 0.12207787353869959;

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
    msg.setTimeStamp(0.6685206911010662);
    msg.setSource(27447U);
    msg.setSourceEntity(111U);
    msg.setDestination(49268U);
    msg.setDestinationEntity(235U);
    msg.value = 0.20303787767551273;

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
    msg.setTimeStamp(0.6369533888389386);
    msg.setSource(53024U);
    msg.setSourceEntity(146U);
    msg.setDestination(50637U);
    msg.setDestinationEntity(66U);
    msg.value = 0.028340592533162012;

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
    msg.setTimeStamp(0.5704430070987181);
    msg.setSource(28908U);
    msg.setSourceEntity(25U);
    msg.setDestination(65145U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9774718598255705;

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
    msg.setTimeStamp(0.2002614779140952);
    msg.setSource(7433U);
    msg.setSourceEntity(130U);
    msg.setDestination(56964U);
    msg.setDestinationEntity(114U);
    msg.value = 0.6697187872763466;

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
    msg.setTimeStamp(0.9083384635474191);
    msg.setSource(5892U);
    msg.setSourceEntity(72U);
    msg.setDestination(47500U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6338756916724748;

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
    msg.setTimeStamp(0.6393783162342007);
    msg.setSource(35819U);
    msg.setSourceEntity(227U);
    msg.setDestination(15799U);
    msg.setDestinationEntity(142U);
    msg.value = 0.24807942533904515;

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
    msg.setTimeStamp(0.552348625551568);
    msg.setSource(59021U);
    msg.setSourceEntity(212U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(145U);
    msg.value = 0.47640320625301336;

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
    msg.setTimeStamp(0.5155630863330756);
    msg.setSource(39781U);
    msg.setSourceEntity(122U);
    msg.setDestination(3196U);
    msg.setDestinationEntity(101U);
    msg.restriction = 32U;
    msg.reason.assign("AEOYKLVFZCCIVXHPDUTKZAWSQGHVSNDLAPXAZPLAPUWTKGTKBNDCFVMZMYOKINLSMQXNKMSGTXCTIFSMFVEVHEWYTCIKJMUWYFQCDTQKXEWJCVDUYYNMULFOULLMZJXUDEPXHRDQBEYXSZZSWAPZHHXNOQCWRW");

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
    msg.setTimeStamp(0.5980640839216185);
    msg.setSource(18149U);
    msg.setSourceEntity(231U);
    msg.setDestination(30948U);
    msg.setDestinationEntity(92U);
    msg.restriction = 167U;
    msg.reason.assign("HISERGMYHYBANPZHBYXMIEZCFSEGFGYOVPMNOOXLUOVVKLZMQRTDADTLD");

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
    msg.setTimeStamp(0.985572605166175);
    msg.setSource(31464U);
    msg.setSourceEntity(146U);
    msg.setDestination(39181U);
    msg.setDestinationEntity(111U);
    msg.restriction = 40U;
    msg.reason.assign("ZPHOQQVUSGNFEIGRFVMFMWYOLZEYIKQFKWDLKZSSEIVXPRGZUEJFVCNJOJTCQAOGJOLYZZABVLOJPKYFJAGPTMLOMBHTNJTHWUWNEUXBMEBDJGGWIXZYOMLUPDMJRLBDTSXVPALADKNTMLRYQZXJNFCDORBWHFIKWNCIHXHSBBUSTKTIERRKTAYGDCRUWIUVDZU");

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
    msg.setTimeStamp(0.7711898941232064);
    msg.setSource(11957U);
    msg.setSourceEntity(93U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(163U);
    msg.op = 74U;
    msg.request_id = 1053645840U;
    msg.entity_name.assign("ARDSQCKJTOPRKNHVTSTHXESOJPZRFFAYEXTWNWKCUNHMVAICBFGTDUANCJEZUIKWIMFICXWENH");

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
    msg.setTimeStamp(0.6814361721470308);
    msg.setSource(52036U);
    msg.setSourceEntity(129U);
    msg.setDestination(25639U);
    msg.setDestinationEntity(176U);
    msg.op = 211U;
    msg.request_id = 923485426U;
    msg.entity_name.assign("LBVHSWRRPCDKHTTPENYKEZVWJFLEHBULSTPJUQAQBAOTSHIRDPBVJCDQRAHORHMCUMYKHHYOBPANPJCLAHKJRXUNGNWLPFXBQOFODKMUEXSVBGFUHNKCCLORYNETYLYRDVXFZIOUWGMMVWSRZQAXGGAIGKMFFL");

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
    msg.setTimeStamp(0.2491321650842555);
    msg.setSource(30250U);
    msg.setSourceEntity(173U);
    msg.setDestination(20689U);
    msg.setDestinationEntity(181U);
    msg.op = 123U;
    msg.request_id = 4247461425U;
    msg.entity_name.assign("TJNUBDTTZGHVZBZEFOLULDXAXCXVYAETRFNQVWKTOANGRJRMVMMSQVIVIEKIGDWB");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TVOWXKNIFXXZOZEYTLJUBYUNFNDJIYJUTADGMSPZCUUSKAXQWPDAMXFHIANORRGTXPCMEVQLNLEJXABJNOQZPMYWQGQVQPEUGVONTDHPYJPWGBNTZIFOSYBMIRSBTKDHJIGURBLCKPHYBJ");
    tmp_msg_0.type = 86U;
    tmp_msg_0.default_value.assign("RUYJTECBVSQHUSEGUDRXRHVXGGHMFJNORIGBHZGCNOULVKESQAPOBEYYLSLMV");
    tmp_msg_0.units.assign("SFOEMUULKDJWPLNMCRVVBRJWEYWVCFKQCFSIOAXSRLCQFIFIKFZ");
    tmp_msg_0.description.assign("NOKSQWLNXTCDICJPYQZMABARFOCCKQLNCNNXJEIXOCGTMFAUSDUWIIQOFBVNPKRFYTJTUAGGGHOVBYKJDHJQSQEYZMIPEYZBBJAPYWEMGSPYZBGIEAJRHTLUPTVHBOKUMRSEXKXMVAYLWLPKLGODSTLUUBHBWKTMCZFJIMPRRWWUPQDFFNNX");
    tmp_msg_0.values_list.assign("RUNNNAMXURPWDBCPMCPHWNKKFQYQJASGFQGLVNOJRBYNJWXSADTWZEOLGOITQEGBZBTZWKHXKCCOTYFOWUJTBTEDRYTMTXLSHUNIPHDNHBDQYIDPZEQXCMRZMLGJSLGRCFLGPRYJOJKIAOPVWPVIMIDCGXWHVCAHCFSRASCJZMZUUEBIDYVEPLNALYMDRXOZTVFBWOBWRSXESUZMGFHZVKHIFNOTVYVXMEUAYXDIQFHGEVKKLJJELABUIFSP");
    tmp_msg_0.min_value = 0.721308515624297;
    tmp_msg_0.max_value = 0.5297054182488347;
    tmp_msg_0.list_min_size = 57U;
    tmp_msg_0.list_max_size = 202U;
    tmp_msg_0.visibility = 57U;
    tmp_msg_0.scope = 105U;
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3206907503257824);
    msg.setSource(48439U);
    msg.setSourceEntity(104U);
    msg.setDestination(29021U);
    msg.setDestinationEntity(179U);
    msg.name.assign("MOVVMUXNRCPLKANXFULBIQPXJWEPVGOSDKJBEIOSTHPSQRIELQGLOKTUDCFYPEXRDHFVZLYOQZHRUJJFUVINDNJSARGSUQFANBFZZRJMBKYZHQLIHHWAHBQAXMYLKMJCMCTFJBWBNGBVSKSSMOYODZRILGWENCKOJYNVRICMDEDFTZGEDGHAYTXEKYAJCGZZEHWPMNWGDQTAKAI");
    msg.type = 16U;
    msg.default_value.assign("DJGOYTXCBVNFAQZMLSJVZSXSUEZAPQCKYYQMAWJKYMLCYVLGBBUGMSJWQBIIOXKCMSCENTHWFXY");
    msg.units.assign("NGUSCSRHDPEVSMNUYOFREBLJSIMNIPYNUWFJCTKEQSMSWWVQRDISYBZZRHTOMZZKKDJYAHIDIOMKCWXIXVEPHZATWOMTYXJPTQESVWEIJBSRMFGMLLHHWJLQQIHRRRZDGDBCLHFATKOAGKB");
    msg.description.assign("AXWGEOUYWWBXIOEZKNYVSRJNRKL");
    msg.values_list.assign("RBGDMKZJMWZUYPZIECOATOANHPRMHQRDIANDFANYODVXVKRFZZZPMVTERUEPXUIBBTVSJDLQKYKHRPADZJMVAOKEWGUIR");
    msg.min_value = 0.5240770062631576;
    msg.max_value = 0.578278373636434;
    msg.list_min_size = 218U;
    msg.list_max_size = 105U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("LMKWDNDSZTFBUDYLGWKYTXOGJXGUH");
    tmp_msg_0.value.assign("OCYJUWKZHSJDKOCVMDUNTPQSMYXKMTKBKIMGAUBVFFSLZREMIFNQJRVNHNGNTLBTPPZQPAOSRUDWOUEX");
    tmp_msg_0.values_list.assign("JVXLAQNBPYJHCZZKOMIJPBPDKGGSOJRYLTGHYBHRAPXSFCQTDMESANWUUIDDBGAIMGFOVLBUMTDYCFMGSEYMOKTFVBFLRVZJKXGNOTQETBLMZRBANSBQXFWIVDQITFFWWEMHKPESXHPTSFGKWZCTJCCUWQOQNDEDQYRLRQMXUEHZDFRHPOSZUJXXCGXJPVCRXYZAPNOYISWOLNHCJHADPRVWVTYULKESIABKVUCYL");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 175U;
    msg.scope = 253U;

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
    msg.setTimeStamp(0.7369019502794604);
    msg.setSource(7170U);
    msg.setSourceEntity(148U);
    msg.setDestination(11943U);
    msg.setDestinationEntity(231U);
    msg.name.assign("RLHKEEXSNUXFJTJDSRULXGCQLNVXAVMMDMWSZPUIOVCIKUBWGRXJTQKUYJWFFZGURERFCHHTELUYJFQXTGDAJPKQJKIDJODPIEDZDMAERATALNYKSJOPMXZLISGDHOMOBWLUZOPGYYSWATKMEPLWZYYICNMGSHYBQAEWRDEVKPXBRHBWVEHQZNJOSVUZFQXBVCTWGTWBBUPHPAAKKCIHFINFCHVQCXVSINQLNRZMY");
    msg.type = 110U;
    msg.default_value.assign("HRBKACMYXRXJVPTQBIIYWPKMGBQLECSASGTYAUEMKDLPVLDEDGNZMKTICOQXVBFQWQKIOEPXYJVWVVXQWRHSAXTFHENHDXPITFSTYJUVFWGLEFQUFFUONTMCLLJQUBZHRZ");
    msg.units.assign("ZLXYJMMVKJQZVTMZJUSJWOEQRRTBDQVGFPFYVYAPOQTLPUPDWMKZACPINWDVJVUSLYAZEKGOQRWMTSZSRZSTHLQQBXUIXNEWCWLDEDIPJXQSXPKBXYHQCCTVLWIBMJWCWHGAACCNKBYCGJCIRULODRNFSZABRKNKIPZHXGCVPAHRNBHYONFJEGBKQKDBTDGSIUJFEVMPOFEHAUYGTUFNUTFSLKIEEEARFTYSZRFDIWOX");
    msg.description.assign("HYKLDQRTPCUXEXRDGNUGIHUYZDMBFTDCGJAPHOWHOWRBJXCHWKNPTVVQMRUFAVBYFICKSLBRZMETUTEQSZB");
    msg.values_list.assign("ZTXBRGEGJVYXMKYGSLNPZRFEALLUSDVGPOZYBXLRHZARTUBUUIDDKLCJYEDHSJQSVHTXOFICWHAFNLZIHCFKUWIMDDGBCWDOSVEOKFSHVVOBIVJGARGDCJAXTXPTUWLPWTSECCIKPQIJBFKZUOJNED");
    msg.min_value = 0.5443082775467879;
    msg.max_value = 0.030035051292653492;
    msg.list_min_size = 84U;
    msg.list_max_size = 71U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("KVSOKMDPAEWOIYIQHNEHASHNWUGKMFAUWIPLORKGSVBNKZQEYCMUGMJTDENJULAU");
    tmp_msg_0.value.assign("UHZJTDLNIPBQJDKIXMLCRMFFAPEBWDJQWYLURKFNBMVMPGXJUDRSBVTKSDDEXSQZGOPMZSXNWOIFGXQEURIMTABGRCSPVUORNMWVJOFTAKWQCSKGFUFNEJATZLRCYANGHIEEWAOSHIWFFXPHGZGCDVMCWGPQAXAXLLICLXYZWIIJSQJSILQNJZLGFBZSXYHVKHBMQTHYYTUDZOYEVUV");
    tmp_msg_0.values_list.assign("FYDWLHAJGNEVMGOCEKIPXOXLWRYJYBIXUCXEBWDMUHSYAEXWJOALIDZTJVUETBVUQXFPQCANDMKFGJWAHKTDIMTUKMRWZNHJSQDXLKXGWZSRNJOJOHKYPHVEOASWNOVDVHXANZ");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 166U;
    msg.scope = 149U;

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
    msg.setTimeStamp(0.2990894147796094);
    msg.setSource(13004U);
    msg.setSourceEntity(33U);
    msg.setDestination(49174U);
    msg.setDestinationEntity(202U);
    msg.name.assign("MCYPCNBZHWKFNWWIHYRFAHDPKKDOPZLQEFEQTMNSMIRYTHBZWZPEXOQCYXQDDBLFAVMEBEQJTVSJRPWUFUXQCOJPKFKUXATMTEXGMLUUOVQJNBNKLXIODWXQYSSUKWYGFRRMGPLUUVMPYCRHCBTITNHMGFTJRJYXFRZOOZNCOSSDAVCTWOKGAYVAJBQAEHRUGAGRLZWJSLILCYHGZSEDHXCGGLAFMBVZIIJWV");
    msg.type = 78U;
    msg.default_value.assign("JLUMDHQXSVXLSLYHEFSUYAFWUFLRHIKENWZWLCNKQXYJLSEOPIPRASCEUEKPTPEXZRNZJRZDQXFMTUHGRWARSFDTGVVGTHYICRKDJJFFCANHY");
    msg.units.assign("NSNSPNFKWGJXFNWPMQWRABZHWDYLLNRCTQBINXESZYXYYUMOHMNXTVRPIFBOSMLPNSJXCEODJHMTAKVULDBSTOBZGXZIQPAOWMJEEHRCDQNRBGIVTZDRJZEVWPYKAQDYMCJLKEEXBGRXKKFSLUKCTIBJCWRHUUUITWBZPFTYFGOIRQGFIWCFZODGGXKDSGEMCRHFMYJJHAVPVIMQSBLXJADCKOQTHAOP");
    msg.description.assign("ZRVWUSCSFOULUZADQBBVZ");
    msg.values_list.assign("PVCCYALQCOZTEPQPZSTDNYJZGUKMXSHDFCLDIELKFLDBLDJZRYPFPRKKUJOMHKZAEGCJNUCSFNAIJPRDBJROEUJMACBGAONWVVJTGRXWHSIYZUTSMTORBZZWHTQHFPMMVVBFNOILIGGDWQNHHAMTSOVXBIGPFGZSXVXSYQUGGMAENENXEQIWYCTJLMUFPHEWIRASMEUKRVQTPYYETWXZRNBCQDLFDS");
    msg.min_value = 0.9349050206732836;
    msg.max_value = 0.8065380223953478;
    msg.list_min_size = 218U;
    msg.list_max_size = 164U;
    msg.visibility = 137U;
    msg.scope = 61U;

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
    msg.setTimeStamp(0.2959157470695245);
    msg.setSource(635U);
    msg.setSourceEntity(236U);
    msg.setDestination(28617U);
    msg.setDestinationEntity(191U);
    msg.param.assign("YXGVCQJQCNNXPBVF");
    msg.value.assign("QXEXIQBYNWUYOICIANCWSINVTQEKEMDFAPOBMHREOFOASMCJUUUTWYJGZHJMHRSYTAEINRNNVARWYZCLZPRYQQRBFKTCFTHVDUIQDBHHSJMFEKOVNEFZSSBGXJADMNMEIRPPKLXJZXJVVZXVIROYQDDYPQTNGKXUYAKEUWBFDHCBOICCTUJPCFOWDLZTBGJPQUKBSYTLWAGLOVPCLKGHERWRWXFMDMD");
    msg.values_list.assign("GZYCQIFNLRPTPPRJVQYMIGAELSGSQUBFIUBFQNHMWMZCROAIOMXTGNVRSTWQEYHRMECAQBNJZDDQUOTXQOUYXDGFLVWYVKWOOUFPMARMWLFVXJZBNBPTOZWBSGRVUSDXPVKIHPCKVRBILKLCYXYGXWACNKLDEUIDSKATMHTEADWHUHEESGITKYJVTZBJPEFJUWHNNDOPCIMFXCWOZAPDQQLXSBJRUKZSJFABSZCGYHLYJXOIFZHTCN");

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
    msg.setTimeStamp(0.06758840043847503);
    msg.setSource(26132U);
    msg.setSourceEntity(116U);
    msg.setDestination(6325U);
    msg.setDestinationEntity(183U);
    msg.param.assign("ZAURKWKEHNTVXUNFCTERJFFHLJYNWYGBBFPFNUOBACRFHQTSPDCEQDVAGYPSSLSXNJBZKXQQIAFXRQDPKBWKVZMMMPFEADQTBCVIDWVXCBSGRMQEWIGJPUDIWKDVAAJYAU");
    msg.value.assign("FGXTHXVJVQBIMUHVGUYMFTXKDQZBTMHLCFGWAKDUUGOFGBCZSNQAAJKTAWCBVKLTRNCBPDJGVWQGOHLXIWOOHECFWNLABYFRLIOUSJASNRZIHIYBPBMQMZPERXBOZRDPOAYMUZTEQFSZJJLOFFUHYTQJYBHZO");
    msg.values_list.assign("PYGPEAKXVKCRPFFI");

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
    msg.setTimeStamp(0.823887541710586);
    msg.setSource(12597U);
    msg.setSourceEntity(215U);
    msg.setDestination(43787U);
    msg.setDestinationEntity(193U);
    msg.param.assign("WTUWHTUHXRUBZYRSOJXKRKZXSGFZDPAYWQKOGLMVEYFCIFLYHXMJCZMIRLEHPYIDJYEPTOBNAPWQLPHNOEMSZHKOXGOGXLIFJUOVDEQANTBWCLAEKLDLHAHCYGKFKBUVSPSQGWNFRSJBQDAHDANYGWUCEXDFRFPOGLNITORYMWVQWXRVDSVYPNEBDMJUUVAWECPXTOZ");
    msg.value.assign("AXWSRBOLOLGKHHKKXRUEZCOPWPQWAFHGOUQCNP");
    msg.values_list.assign("XJRZSGVCDLJMRPRJHWTNVSESCLADMGTUFGGYDIZROEZYBDJMCJRYEKAHCOORENJBKGKBOKAHFSBEVUJUHYWFEJGDWWERIZQQTLSEOZRMENRCPVABFQMPWTPAKUAOLFLICCHIIFMVHWNSJQHXMGKCBUNAQRBMGZSAWTIQPOVPFZUKHUPDTBWGKXVCLXLHFDWXTYYFPTDFXQKNYOEIPUILYBNMYXYAIASQDPXLXK");

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
    msg.setTimeStamp(0.0867901525140703);
    msg.setSource(11327U);
    msg.setSourceEntity(20U);
    msg.setDestination(51903U);
    msg.setDestinationEntity(247U);
    msg.op = 229U;
    msg.version.assign("YXZUFVRTGQGQXKMGSINZUIECCYZRSIQLNKXKYQWDJAOLGAUWAOMMJUAPPVTIMBRLGXBVNVUFVCHDTFKKCXWCFSNRVCYSDHEXNFPDAUXYMLVPGA");
    msg.description.assign("AMCAFBWAPITJFLMKLOLMNGLCQAEAVITGXSLGHVEAFCRTYGRJTBKALXBZQBRXGHDKODHTAUVYBZYIKWCYLUOIGYSVCNQRFWNTSHVFEPPDVZMTJKAUWWRQSKXQJEEVYMQUQZBREHNNQGFHONWRBCXSYDWMEOCWOQEHSZEJDUIGBYBSPCF");

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
    msg.setTimeStamp(0.948217249377285);
    msg.setSource(63534U);
    msg.setSourceEntity(4U);
    msg.setDestination(59177U);
    msg.setDestinationEntity(137U);
    msg.op = 86U;
    msg.version.assign("RDTVGNFJIKKUHWQWUVEAIBCWBMLJQVYSALKHOMKZPMOBFBDSVSNMCOYWYBJOWIWQVDLLLHRWSJUOYUSMCHFZFTAPXRNHRTYIXEGQTCFURDFKIPYXSRNAP");
    msg.description.assign("OWDOTBWFBHXVYUACIESYDLZPGJMELL");

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
    msg.setTimeStamp(0.4558728974223336);
    msg.setSource(42207U);
    msg.setSourceEntity(52U);
    msg.setDestination(56133U);
    msg.setDestinationEntity(144U);
    msg.op = 165U;
    msg.version.assign("BOROQPBSHHJRSCBFQAZBAWDGRJHYUPKVDICHRTNGDPNHIXPHBP");
    msg.description.assign("MRGGHOGYBAGTOCSFOADVMQCMERRAWEDJDZBNXSJWIWMWYBDATZKFSXIRJTEIZQBQVTNQXYHXVGLDPHFHQEESZYBJKKUKAIOVDEAFQZTJEMPCDDRYCRDHHNFPAGHWXSBWOYVRWJTZOEORFLBXQCLJLBKAIPNLZIWUVZGMGKCBLQKHTQMSFPULGKANKEWNUINPFHNSNQVYLITSDKCLSIUPUUXAUYLISVPXXXZYPWMOJTOUVTMCPY");

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
    msg.setTimeStamp(0.8029014179494729);
    msg.setSource(23082U);
    msg.setSourceEntity(254U);
    msg.setDestination(44191U);
    msg.setDestinationEntity(175U);
    msg.value = 0.16536242149478397;

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
    msg.setTimeStamp(0.29069098939771154);
    msg.setSource(28999U);
    msg.setSourceEntity(229U);
    msg.setDestination(18375U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8638950382383688;

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
    msg.setTimeStamp(0.8983748679493561);
    msg.setSource(58414U);
    msg.setSourceEntity(145U);
    msg.setDestination(1430U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9715817200523843;

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
