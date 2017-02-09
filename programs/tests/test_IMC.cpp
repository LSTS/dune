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
// IMC XML MD5: 97e9b1e32d2db432781ca63dd92965e5                            *
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
    msg.setTimeStamp(0.603580191732);
    msg.setSource(15970U);
    msg.setSourceEntity(231U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(69U);
    msg.state = 144U;
    msg.flags = 81U;
    msg.description.assign("DZDXPUGPYPBUBBVZSVCAKPVUAEZFWEHURAC");

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
    msg.setTimeStamp(0.787832332833);
    msg.setSource(50259U);
    msg.setSourceEntity(197U);
    msg.setDestination(11304U);
    msg.setDestinationEntity(100U);
    msg.state = 52U;
    msg.flags = 75U;
    msg.description.assign("BXTBKSVIWNCVIZARQJCYEGJFGZQMOMNFIUXSGMUEVEQWBBNJTXCZPUVSRKFXWQDOL");

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
    msg.setTimeStamp(0.855956048479);
    msg.setSource(57804U);
    msg.setSourceEntity(235U);
    msg.setDestination(21642U);
    msg.setDestinationEntity(33U);
    msg.state = 129U;
    msg.flags = 135U;
    msg.description.assign("NDRAFLFWTQJWBSTTVCXRRVPCFXJNZIEDOGTBYNZLZFAHDBDBMUVMYUFIPMBVTFERSVIERKBIJYWQEPZDMCSSCGYLXUGJUYFOBWAIJYLBJQOPAAAJUBCWNMKVDMUPYYNEWTLSXLN");

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
    msg.setTimeStamp(0.0521101514395);
    msg.setSource(36151U);
    msg.setSourceEntity(209U);
    msg.setDestination(8014U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.222661705669);
    msg.setSource(54532U);
    msg.setSourceEntity(193U);
    msg.setDestination(57820U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.767459403607);
    msg.setSource(15030U);
    msg.setSourceEntity(185U);
    msg.setDestination(42758U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.326594480394);
    msg.setSource(57575U);
    msg.setSourceEntity(82U);
    msg.setDestination(41119U);
    msg.setDestinationEntity(9U);
    msg.id = 77U;
    msg.label.assign("SRLSMVLMZZDKQKWRXOEYLNLNYBIEYGBWHXWHEPMNGIUOOGBGJLRLKYBMRRBAJCSKZQEIJQVFETDVHAKOONSLMLCQBEKTUTIOXHICUPZDIAFKCHCBIFHPSTCUJQPVHFKADMZ");
    msg.component.assign("VGFJDTSBGFNQCLNNNZTUOEOLLFRLAFFYHIDNDDCDDHWPZGTTGSFJMHLHYABKVVJEHAIQTXXSXMIFYIMAXIQYCMXOJPQBBTWORPNEBUMMQCVGYQLGKWGZUBZPRQHGIAZXCTVARHQJRUOXJTBCPMFWZZVSHYSY");
    msg.act_time = 4812U;
    msg.deact_time = 30387U;

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
    msg.setTimeStamp(0.687024641906);
    msg.setSource(22946U);
    msg.setSourceEntity(6U);
    msg.setDestination(54903U);
    msg.setDestinationEntity(45U);
    msg.id = 135U;
    msg.label.assign("CYRLVVEGOSUEAOBUWQQMUSITPNZEFJJHUDIGKHOBTFRLFJLPSOULIMLTJEKIPCZQNVZGNMDWCKAIRLVRBFENRGCRSTALOKWERJXMZDASJTEYNSKTEFNXXOUGBZJLKRBWZFAEMODWQFAPCYYWXKPSQCHKTHPMDKWPIFXQ");
    msg.component.assign("XTDJTNHKPGGUVTKDDRFJETCSIQNYAVLOCTPJKSESKUANGPURUXUVYQMNBAPBXXKYCIKJWIIHQYOXRLQTHQNYI");
    msg.act_time = 61713U;
    msg.deact_time = 46295U;

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
    msg.setTimeStamp(0.552976204545);
    msg.setSource(26930U);
    msg.setSourceEntity(219U);
    msg.setDestination(22781U);
    msg.setDestinationEntity(180U);
    msg.id = 45U;
    msg.label.assign("MURUDBRJBTSIFWYHMPNGVBXWBGIWKHNUTLJJAGKYJGTTEJKXOMEEFQIVRQHZTGVSPSVYCLVSWCUNWMUCTNDMXTUDJAMSFWHJQEGCKTUEVPOSWLOMKJNHJXLOOIGMZZDRNSNAFYZPPV");
    msg.component.assign("QCBGQWZCHJVSHLEEIDFYKPWIGBQPAS");
    msg.act_time = 39704U;
    msg.deact_time = 56011U;

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
    msg.setTimeStamp(0.56695765922);
    msg.setSource(60439U);
    msg.setSourceEntity(114U);
    msg.setDestination(51500U);
    msg.setDestinationEntity(47U);
    msg.id = 41U;

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
    msg.setTimeStamp(0.37570751585);
    msg.setSource(135U);
    msg.setSourceEntity(122U);
    msg.setDestination(26395U);
    msg.setDestinationEntity(145U);
    msg.id = 197U;

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
    msg.setTimeStamp(0.548359628927);
    msg.setSource(27585U);
    msg.setSourceEntity(60U);
    msg.setDestination(28991U);
    msg.setDestinationEntity(214U);
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
    msg.setTimeStamp(0.828064675683);
    msg.setSource(20155U);
    msg.setSourceEntity(29U);
    msg.setDestination(42947U);
    msg.setDestinationEntity(241U);
    msg.op = 185U;
    msg.list.assign("FJQDBSVCEQAGZCGAUNXOYZMYBMOWUITXSWMMNXIPUFUCRJYJRATQSGRXBKFOQQCVYGBXNVERVXPHTKDCTFCPRYEFCEGZRHWIWLWPJZLEVQUTKFAVBUDDOYAQHHMKKZPALLZBHI");

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
    msg.setTimeStamp(0.0507823900419);
    msg.setSource(29463U);
    msg.setSourceEntity(5U);
    msg.setDestination(60748U);
    msg.setDestinationEntity(130U);
    msg.op = 165U;
    msg.list.assign("BRVLMEYUHXJRJZMIGDNDPZQGBGJFUWBSCNVYBKFFXVZNASTOQOGOELKTJAQXVSRDYUHYBHNMPLGXKEACEVIRJMPKEOHXRZFPACSCDYFDFIBJGPOWNSXAXZJWYWTTERKSLFZLPSMWKKOBMIEIZDOSCMYWJFUURTWRVCITHVICEDDJUFUQWZGBQZANPHDKTILCUTNALWAHYNDIO");

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
    msg.setTimeStamp(0.497156120342);
    msg.setSource(8854U);
    msg.setSourceEntity(74U);
    msg.setDestination(51484U);
    msg.setDestinationEntity(156U);
    msg.op = 249U;
    msg.list.assign("NIAGCJQZBYBQYQRZGWTMSFTEMQUZTJVHGPQNZFUNDJFKAOCP");

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
    msg.setTimeStamp(0.544850201641);
    msg.setSource(39695U);
    msg.setSourceEntity(198U);
    msg.setDestination(46732U);
    msg.setDestinationEntity(151U);
    msg.value = 63U;

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
    msg.setTimeStamp(0.35725626353);
    msg.setSource(24878U);
    msg.setSourceEntity(42U);
    msg.setDestination(50230U);
    msg.setDestinationEntity(78U);
    msg.value = 64U;

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
    msg.setTimeStamp(0.862392313388);
    msg.setSource(38205U);
    msg.setSourceEntity(144U);
    msg.setDestination(20905U);
    msg.setDestinationEntity(19U);
    msg.value = 201U;

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
    msg.setTimeStamp(0.785153012567);
    msg.setSource(16951U);
    msg.setSourceEntity(241U);
    msg.setDestination(39311U);
    msg.setDestinationEntity(108U);
    msg.consumer.assign("GDSMBYHDRSYFTAMKLTWQZGOUNIVEXCJOHFOHIRKJENHNMUXTFDMAQXQQQTSVAPXRJRSEPHXDALOFAB");
    msg.message_id = 24418U;

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
    msg.setTimeStamp(0.235711392433);
    msg.setSource(29524U);
    msg.setSourceEntity(39U);
    msg.setDestination(58487U);
    msg.setDestinationEntity(137U);
    msg.consumer.assign("PGYFNBZFASTOQNMSAEOODJDHUMFVXGHRYOMQCISDOILCZSLJKRMYWLMCPXKMUAJQZBGEIYREIZBGMWHHGACABZSUATGMTLUXRPFQNWKKDXWVPZFNLOIXBORULIJGECAXHDSKUKBGKSPAFNZDLOIDWDREWELKNSCPGLPYRZVVTCHPXVFQCBOUHTQAEFIVMYJRJVPHVDTOZBXGENNNEAYFVWIQCBKTTCSDUTRPUURVJYQHHQNJJSXTWYMBYQWEJL");
    msg.message_id = 59087U;

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
    msg.setTimeStamp(0.215632879497);
    msg.setSource(15869U);
    msg.setSourceEntity(24U);
    msg.setDestination(22523U);
    msg.setDestinationEntity(188U);
    msg.consumer.assign("GPPKOPZNBRNNWNYQSXR");
    msg.message_id = 39739U;

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
    msg.setTimeStamp(0.748803405636);
    msg.setSource(58679U);
    msg.setSourceEntity(166U);
    msg.setDestination(22112U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.727151393797);
    msg.setSource(50300U);
    msg.setSourceEntity(219U);
    msg.setDestination(3701U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.800867558961);
    msg.setSource(32204U);
    msg.setSourceEntity(246U);
    msg.setDestination(12333U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.822980227526);
    msg.setSource(18783U);
    msg.setSourceEntity(177U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(196U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.297218403582);
    msg.setSource(23539U);
    msg.setSourceEntity(230U);
    msg.setDestination(1411U);
    msg.setDestinationEntity(66U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.630715532741);
    msg.setSource(43458U);
    msg.setSourceEntity(47U);
    msg.setDestination(52188U);
    msg.setDestinationEntity(21U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.482799810531);
    msg.setSource(37965U);
    msg.setSourceEntity(246U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(252U);
    msg.total_steps = 46U;
    msg.step_number = 119U;
    msg.step.assign("MIFBXDEFYEGXKOMAOPQPWOJIHKFVLZYFSGWNZEZPOSGHWRZLMCNAZOYVKDGCJUMKCVTGGSAUNIIHWAGQBPARBJYHFDNZNFEWCBQZKYNIEFEYOCXTSQTOGLRLHMVWTFYEQTKHNDLWUYCNQJXKKISPDHRPMOQWHEYXFPWZIWHUGBRBOXSBRVBDXSQGTAVTRXPIUJHVITJNMJUSREDMTPCPNKUAADDLLUOLREZAYSDZSCQBQVJTMA");
    msg.flags = 94U;

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
    msg.setTimeStamp(0.0287510156382);
    msg.setSource(65179U);
    msg.setSourceEntity(64U);
    msg.setDestination(27139U);
    msg.setDestinationEntity(219U);
    msg.total_steps = 101U;
    msg.step_number = 227U;
    msg.step.assign("FALYTFLCWJTWSAEKXAPTDVMAGBHLHYBLEUEWPOEOPADPSYCPJVUDMMXRVTJJTRBYRGMBCTIGTKDRGZUIHSAZZNNGFCZRRIINVRQYGWDZGMUQNQEXODJGZMRBPOPJESLGIKWRLSXQFCQHBUXLKYOBDDHO");
    msg.flags = 128U;

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
    msg.setTimeStamp(0.67317714872);
    msg.setSource(25394U);
    msg.setSourceEntity(76U);
    msg.setDestination(8492U);
    msg.setDestinationEntity(184U);
    msg.total_steps = 236U;
    msg.step_number = 240U;
    msg.step.assign("ZPHXNSTHCAXTOSEKNRDEECWRTTAQLKRQWPQWSDVTJAOWPLMNBMPHAJWLMNKHDIENYHGLIPUGMEVYHTRYYXDBESIDDZFUMJYNBAPCXDCUJXZV");
    msg.flags = 147U;

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
    msg.setTimeStamp(0.415553016889);
    msg.setSource(9988U);
    msg.setSourceEntity(136U);
    msg.setDestination(21211U);
    msg.setDestinationEntity(69U);
    msg.state = 221U;
    msg.error.assign("RITTDVRZSLIVEEYXBKPKGJKZRBHOHKDNUBSXKPHZMEQVZYAFNHCXJBGATFVCQINOQWOBRJHSCASLDOEYPFYOSNGRPTYVHNYXOQWIWEVJYGP");

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
    msg.setTimeStamp(0.585231871259);
    msg.setSource(17302U);
    msg.setSourceEntity(90U);
    msg.setDestination(42454U);
    msg.setDestinationEntity(172U);
    msg.state = 177U;
    msg.error.assign("DEMRSYUCNHMTSCVGWQIACOLDWYYMQJBOWAVWJFEQFUMXAPNTUAEEXCFNRQAKOMOKYKSOWJKGKQMIEZMRLFLDLQFXDPCVJGMAAPSHGWZBLZBUBVYWZESJHCUFGIDCEJRXIITQARCNNNUTLGVHHRXAKYZTYAHBVDHODVNJHISRIXTQFEXKLXSSCXHGYBNRNKYOZGVPPFQTFULXQ");

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
    msg.setTimeStamp(0.27429893415);
    msg.setSource(60125U);
    msg.setSourceEntity(154U);
    msg.setDestination(62433U);
    msg.setDestinationEntity(146U);
    msg.state = 43U;
    msg.error.assign("AUPQQNHPTGPTTTGTQSWUMWMBVNZBKFLYWMNCNLMHEVJYFKNYDVOSDBZLTJXCUIJKHVDGIWHQLQNVMOFEIXFRCZTBMGAAYHZMWEUZRJCAJOPVJRBHAOYFRKSFKOIASBPYXQVPDOKRRFPZ");

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
    msg.setTimeStamp(0.604999541747);
    msg.setSource(13246U);
    msg.setSourceEntity(27U);
    msg.setDestination(40794U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.270891352543);
    msg.setSource(15764U);
    msg.setSourceEntity(64U);
    msg.setDestination(50102U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.628585008577);
    msg.setSource(38821U);
    msg.setSourceEntity(63U);
    msg.setDestination(54284U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.0838544954252);
    msg.setSource(30743U);
    msg.setSourceEntity(147U);
    msg.setDestination(31672U);
    msg.setDestinationEntity(122U);
    msg.op = 6U;
    msg.speed_min = 0.702558158095;
    msg.speed_max = 0.0181626207169;
    msg.long_accel = 0.495763672514;
    msg.alt_max_msl = 0.412628169764;
    msg.dive_fraction_max = 0.110017524443;
    msg.climb_fraction_max = 0.937703883629;
    msg.bank_max = 0.960319056481;
    msg.p_max = 0.23888538337;
    msg.pitch_min = 0.0215888807774;
    msg.pitch_max = 0.312152468503;
    msg.q_max = 0.233730058443;
    msg.g_min = 0.144632733664;
    msg.g_max = 0.379247245795;
    msg.g_lat_max = 0.849968474288;
    msg.rpm_min = 0.702193246513;
    msg.rpm_max = 0.172076836755;
    msg.rpm_rate_max = 0.860499912438;

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
    msg.setTimeStamp(0.8711616144);
    msg.setSource(33167U);
    msg.setSourceEntity(34U);
    msg.setDestination(58252U);
    msg.setDestinationEntity(238U);
    msg.op = 39U;
    msg.speed_min = 0.154390396164;
    msg.speed_max = 0.74511915295;
    msg.long_accel = 0.361838831943;
    msg.alt_max_msl = 0.830779786653;
    msg.dive_fraction_max = 0.107118116187;
    msg.climb_fraction_max = 0.550827088179;
    msg.bank_max = 0.853192560023;
    msg.p_max = 0.243950888119;
    msg.pitch_min = 0.871424963093;
    msg.pitch_max = 0.999501687567;
    msg.q_max = 0.212119118669;
    msg.g_min = 0.215329579553;
    msg.g_max = 0.667688001192;
    msg.g_lat_max = 0.624605019077;
    msg.rpm_min = 0.612775473963;
    msg.rpm_max = 0.340947921432;
    msg.rpm_rate_max = 0.113510161953;

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
    msg.setTimeStamp(0.844879749389);
    msg.setSource(6119U);
    msg.setSourceEntity(252U);
    msg.setDestination(62790U);
    msg.setDestinationEntity(127U);
    msg.op = 148U;
    msg.speed_min = 0.482458451344;
    msg.speed_max = 0.740638728391;
    msg.long_accel = 0.282281459102;
    msg.alt_max_msl = 0.981622871824;
    msg.dive_fraction_max = 0.233076465823;
    msg.climb_fraction_max = 0.900401318814;
    msg.bank_max = 0.277633431207;
    msg.p_max = 0.277278583358;
    msg.pitch_min = 0.843626857217;
    msg.pitch_max = 0.796796444242;
    msg.q_max = 0.304513943512;
    msg.g_min = 0.798701502058;
    msg.g_max = 0.441695100798;
    msg.g_lat_max = 0.818350670058;
    msg.rpm_min = 0.730904640565;
    msg.rpm_max = 0.175475579445;
    msg.rpm_rate_max = 0.0484854795159;

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
    msg.setTimeStamp(0.810138527321);
    msg.setSource(19185U);
    msg.setSourceEntity(52U);
    msg.setDestination(15388U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.698350800096);
    msg.setSource(44714U);
    msg.setSourceEntity(9U);
    msg.setDestination(23032U);
    msg.setDestinationEntity(121U);
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 212U;
    tmp_msg_0.value = 46U;
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
    msg.setTimeStamp(0.989537968958);
    msg.setSource(41261U);
    msg.setSourceEntity(91U);
    msg.setDestination(59879U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.252587402351);
    msg.setSource(2531U);
    msg.setSourceEntity(117U);
    msg.setDestination(10589U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.374563881301;
    msg.lon = 0.27989760764;
    msg.height = 0.012216998428;
    msg.x = 0.719615121848;
    msg.y = 0.97725846315;
    msg.z = 0.962884529376;
    msg.phi = 0.187392376551;
    msg.theta = 0.0323031596127;
    msg.psi = 0.714948632291;
    msg.u = 0.47247289368;
    msg.v = 0.427005325171;
    msg.w = 0.372305800174;
    msg.p = 0.739484368868;
    msg.q = 0.0370448534359;
    msg.r = 0.541168164343;
    msg.svx = 0.604984068546;
    msg.svy = 0.702226846309;
    msg.svz = 0.964192516931;

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
    msg.setTimeStamp(0.0481552902521);
    msg.setSource(54693U);
    msg.setSourceEntity(198U);
    msg.setDestination(19465U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.979889648627;
    msg.lon = 0.148513530641;
    msg.height = 0.159280813234;
    msg.x = 0.442063450977;
    msg.y = 0.712988682682;
    msg.z = 0.789439466302;
    msg.phi = 0.811675442324;
    msg.theta = 0.840836284422;
    msg.psi = 0.13001723768;
    msg.u = 0.693735569871;
    msg.v = 0.861555592972;
    msg.w = 0.894765412285;
    msg.p = 0.258913671212;
    msg.q = 0.752866278526;
    msg.r = 0.258784527656;
    msg.svx = 0.317964778114;
    msg.svy = 0.961030653272;
    msg.svz = 0.285019555565;

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
    msg.setTimeStamp(0.417016462676);
    msg.setSource(14297U);
    msg.setSourceEntity(102U);
    msg.setDestination(19985U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.963950114546;
    msg.lon = 0.973226416455;
    msg.height = 0.191455621757;
    msg.x = 0.420845163917;
    msg.y = 0.302448764628;
    msg.z = 0.432900225945;
    msg.phi = 0.148059741659;
    msg.theta = 0.71158209006;
    msg.psi = 0.283338148222;
    msg.u = 0.874721441424;
    msg.v = 0.494769740889;
    msg.w = 0.98393550685;
    msg.p = 0.712722851945;
    msg.q = 0.036870474385;
    msg.r = 0.0250697812753;
    msg.svx = 0.925028977441;
    msg.svy = 0.586646529336;
    msg.svz = 0.641470730094;

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
    msg.setTimeStamp(0.759122901653);
    msg.setSource(62404U);
    msg.setSourceEntity(28U);
    msg.setDestination(34136U);
    msg.setDestinationEntity(38U);
    msg.op = 109U;
    msg.entities.assign("MRNTOMWSRWCGFYAUFFPOGHNHTCZTRYNRPLPMRWLICBOQUOCFBDLLMYLUGWQVBDLXVVSPMPXEXSZKHYVCJAUTINJSVKVXBBVVHDMHQIIQQXKJMWLFDNPBDREBJRYHSSUYZIESPYUGJGZZ");

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
    msg.setTimeStamp(0.203667572306);
    msg.setSource(54148U);
    msg.setSourceEntity(23U);
    msg.setDestination(52766U);
    msg.setDestinationEntity(41U);
    msg.op = 221U;
    msg.entities.assign("AWDTLTAYMQRBQHWMUOWXWNGVMZOIJUPXKJFRLMIBJCKPSMPIQPXEKPRUZVKPVKRBZQH");

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
    msg.setTimeStamp(0.995015935649);
    msg.setSource(64626U);
    msg.setSourceEntity(54U);
    msg.setDestination(51870U);
    msg.setDestinationEntity(205U);
    msg.op = 81U;
    msg.entities.assign("DVJNYJSYLOGUQSCESZCFUPRJXYEQRCDFXDGQVCEMWGISKWICTLHVIGVNJSXTHPMZGFQJLEWIBXUSKILRHXXMPGPNRYFTYNXHKEWNKZWLGGRLBAWBTMHUMW");

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
    msg.setTimeStamp(0.600943277733);
    msg.setSource(23650U);
    msg.setSourceEntity(238U);
    msg.setDestination(36778U);
    msg.setDestinationEntity(29U);
    msg.type = 30U;
    msg.speed = 27062U;
    const char tmp_msg_0[] = {27, -79, 55, -13, 63, 82, -44, 65, 82, 96, 104, 71, -72, -46, -114, -93, 5, 9, 75, -21, 126, 69, 102, 71, -74, -42, -102, 56, 16, 35, 16, 3, 82, 1, 89, -26, -58, 94, -58, 49, -92, -111, 61, -87, 117, -1, -37, 82, 118, 95, 93, 59, 93, -45, 53, 52, 11, -8, -77, -110, -40, 13, -79, 27, -18, 94, -44, -52, -104, 10, 103, -1, 73, -29, -112, -70, 65, 39, -5, -39, 38, -73, 107, 98, 111, -87, 3, -101, 1, 7, 64, 49, -72, -65, -17, -105, -79, 63, -113, -94, -42, 17, 94, -53, -109, 44, -107, -37, -11, -80, 53, -97, 98, -34, 113, 6, -112, 112, -49, 1, -43, 109, 80, 120, 28, -22, 109, 26, -114, 120, -100, 81, 50, 43, -2, -119, 72, 11, -102, -76, 72, -15, -63, 56, 22, 22, 12, -47, 6, 49, 88, -128, 47, -77, -86, -26, 81, 28, -83, -14, -113, -95, -111, 29, -122, -11, -77, -11, 86, 66, 110, -118, 93, -30, -8, 34, 9, 123, 81, -16, 109, -67, 31, 11, 102, 79, -38, -5, 87, -11, -97, 1, -80, -99, 107, 123, 88, 43, 42, -3, 23, -29, -113, 125, -74, 21, -86, 17, 98, 38, -116, 25, 112, -65, -56, 53, -11, 111, -85, -57, 116, 38, -86, 74, -54, 9, 67, 26, -63, 111, 37, -103, 69, 92, -98, -113, -34};
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
    msg.setTimeStamp(0.119796919602);
    msg.setSource(34174U);
    msg.setSourceEntity(27U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(188U);
    msg.type = 52U;
    msg.speed = 16998U;
    const char tmp_msg_0[] = {-52, 123, -32, -94, 86, -27, -70, -81, -52, 17, -97, 126, 21, 71, 48, -12, 57, -33, 43, 113, -78, -30, -92, -100, -23, 6, -122, 28, -13, -76, 3, -72, 46, -40, -63, -90, -69, 85, 23, 15, -70, 5, 107, -123, -93, -39, -105, 16, -29, 37, 44, 72, 2, -19, -13, 31, -98, 107, 37, 16, 13, -116, 115, -91, -81, -66, 10, 105, -50, -11, -26, 16, 85, 26, -37, -101, 91, 101, 63, 124, 22, -26, 96, 125, -57, -33, -85, -101, -80, 3, -86, 14, 94, 32, -21, 11, -4, 69, -69, 51, -67, -37, 59, -16, -53, 4, -69, 23, 106, 94, 13, 78, 72, 2, -85, -110, -63, -48, -117, -124, 103, -109, -127, 53, -95, -59, -27, -128, -42, -93, 8, -74};
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
    msg.setTimeStamp(0.0395902279321);
    msg.setSource(21854U);
    msg.setSourceEntity(136U);
    msg.setDestination(27542U);
    msg.setDestinationEntity(66U);
    msg.type = 143U;
    msg.speed = 37062U;
    const char tmp_msg_0[] = {54, -73, 61, -52, 76, -76, 93, 94, 113, 71, -126, 28, 16, 42, 20, 25, -59, -18, -1, -43, -17, -59, 32, 111, -63, 60, 42, -83, 35, 22, 123, -23, -13, 79, 82, -107, -53, 69, -121, -22, 124, -81, 90, -62, -20, 66, 38, -92, 76, -7, -106, 34, -89, 63, 18, 61, 26, -66, 37, 55, -69, 18, -52, -106, 33, 50, 63, 126, -109, 37, -124, 85, 81, -22, 81, -128, 8, -57, 101, -85, -27, 65, 116, -107, -57, -116, -44, -10, 27, 47, 121, -95, 106, -71, -75, 88, -105, 97, -27, 15, -63, 108, -60, -21, 33, -42, -11, 98, 124, -90, -88, -34, 99, -1, -24, 65, -76, -101, 97, -31, -114, -120, 113, -78, -125, 41, 98, -97, 8, -44, -55, -21, 1, 62, 93, -74, -2, 76, 44, -29, -90, 2, -12, -45, 44, -117, 34, -43, 99, 44, 48, 81, -86, -47, -47, 72, 98, 99, 36, 99, 99, 78, 117, -70, 122, -73, 73, 26, -92, -65, -68, -87, -93, -118, 44, -49, 119, -63, -3, -65, 85, -79, -33, -68, -57, 8, -100, 65, 88, 86, -63, 76, -114, 84, 5, -39, -7, 3, 12, 65, -13, 116, 125, -33};
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
    msg.setTimeStamp(0.269227069259);
    msg.setSource(5045U);
    msg.setSourceEntity(115U);
    msg.setDestination(57300U);
    msg.setDestinationEntity(202U);
    msg.op = 190U;
    msg.tas2acc_pgain = 0.860012879415;
    msg.bank2p_pgain = 0.0990233861848;

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
    msg.setTimeStamp(0.556521447673);
    msg.setSource(10590U);
    msg.setSourceEntity(178U);
    msg.setDestination(35703U);
    msg.setDestinationEntity(140U);
    msg.op = 39U;
    msg.tas2acc_pgain = 0.0718187446441;
    msg.bank2p_pgain = 0.529070557358;

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
    msg.setTimeStamp(0.512350337627);
    msg.setSource(3163U);
    msg.setSourceEntity(114U);
    msg.setDestination(35036U);
    msg.setDestinationEntity(8U);
    msg.op = 99U;
    msg.tas2acc_pgain = 0.88378090678;
    msg.bank2p_pgain = 0.354786665701;

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
    msg.setTimeStamp(0.87478344114);
    msg.setSource(23995U);
    msg.setSourceEntity(221U);
    msg.setDestination(3905U);
    msg.setDestinationEntity(77U);
    msg.available = 1691829096U;
    msg.value = 144U;

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
    msg.setTimeStamp(0.333558709191);
    msg.setSource(56954U);
    msg.setSourceEntity(47U);
    msg.setDestination(40270U);
    msg.setDestinationEntity(54U);
    msg.available = 772908349U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.840671137287);
    msg.setSource(12689U);
    msg.setSourceEntity(55U);
    msg.setDestination(44518U);
    msg.setDestinationEntity(150U);
    msg.available = 3806795661U;
    msg.value = 230U;

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
    msg.setTimeStamp(0.816108049314);
    msg.setSource(41850U);
    msg.setSourceEntity(97U);
    msg.setDestination(62763U);
    msg.setDestinationEntity(159U);
    msg.op = 189U;
    msg.snapshot.assign("NZBSNECJOQUHAECKVKORMUFGMIAQCADWSLUYLFZOIWCJMACVESYIJPTUUEQOJLNFABYHJBSRDAZSKVEHLGGBFKRBTPIDQXYDPVNDYEQVVDMJVLAXYELT");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.789880840895;
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
    msg.setTimeStamp(0.314411276919);
    msg.setSource(12190U);
    msg.setSourceEntity(2U);
    msg.setDestination(61362U);
    msg.setDestinationEntity(80U);
    msg.op = 224U;
    msg.snapshot.assign("RKGITEGFWETDVJUZTQMDZDESDXRWRKOZMCNGPGRCPQHYIPYQHSQ");
    IMC::AcousticMessage tmp_msg_0;
    IMC::EulerAnglesDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.715849228252;
    tmp_tmp_msg_0_0.x = 0.210066407812;
    tmp_tmp_msg_0_0.y = 0.762394336068;
    tmp_tmp_msg_0_0.z = 0.962039222619;
    tmp_tmp_msg_0_0.timestep = 0.713088132408;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.72713199672);
    msg.setSource(10902U);
    msg.setSourceEntity(22U);
    msg.setDestination(18881U);
    msg.setDestinationEntity(163U);
    msg.op = 55U;
    msg.snapshot.assign("VALTZWRLCPOJSTWFKRSQDIBAWTVTDDBMKSAPZDECGQTZCTFQUFVIXPGYOIM");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 135U;
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
    msg.setTimeStamp(0.798823677387);
    msg.setSource(47529U);
    msg.setSourceEntity(131U);
    msg.setDestination(45171U);
    msg.setDestinationEntity(169U);
    msg.op = 107U;
    msg.name.assign("NELOFNWDJYSEGLZVIXBOKSPCTLCMWQHVOEQX");

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
    msg.setTimeStamp(0.585244292535);
    msg.setSource(22338U);
    msg.setSourceEntity(68U);
    msg.setDestination(62061U);
    msg.setDestinationEntity(137U);
    msg.op = 209U;
    msg.name.assign("AYEFWVIYVWKQRZZINZRLCGBSUGBCJCPNCCESPWYVEHYPJTMJWLKFVXBEHZIHNXDJXWAMICWOAABDZSDDPGVFGTOVMEQNABHORKQNFSDBJKWZDLINGXYGXWVLZQBSUPVUOMYSYWNCOEBKUKMTRVJBYXGCFRUKYNLGUITMIRAJOLFPSHAFQSMHNUUADCXZJPTRKQMKHPIDTEOEUHGLHELTPPKHRSRJZXXJADTWFTQSXDLQFEORIGTLAQZFQVO");

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
    msg.setTimeStamp(0.288230449535);
    msg.setSource(57802U);
    msg.setSourceEntity(115U);
    msg.setDestination(47911U);
    msg.setDestinationEntity(216U);
    msg.op = 41U;
    msg.name.assign("MSEHLOHSEQSWQHDCDCLOFAQQNAWNUKRGBEURD");

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
    msg.setTimeStamp(0.498312795036);
    msg.setSource(53661U);
    msg.setSourceEntity(229U);
    msg.setDestination(50592U);
    msg.setDestinationEntity(191U);
    msg.type = 128U;
    msg.htime = 0.258862168006;
    msg.context.assign("WDAYROMSNMZACVMTUXBCCNOIFNJYXBCYHDRYHOAWSNGZZPHVGHHDITZDWZUXQQYDLAWJGLCPWPIMTZEIDVAHNERUERRCBEEKMXJEUUGARJQPBLPFSSTZJVCKXTFVIPSIOGWGZBOMNYQXDLJAZQBPJTUWKMFRJVCLLAVCVFUOXAGITXFJLEHQEFQWIQVNTIROHYM");
    msg.text.assign("WVBAZVSGIDTXTLBGXCUOQBJOZDMEPGVGOKDRZAVYWNQDKLIMOSPSOBTSDNJXYJIEUJTIUIGUMVECXTTPWYMCUJAMLXTFPOGYEEJSKDOJLMIGUGXRRXWBMRZVOBJWAPWKHEDAFBCYSCJAAMBBQHLBNUIPNVSXWL");

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
    msg.setTimeStamp(0.767464719416);
    msg.setSource(37690U);
    msg.setSourceEntity(193U);
    msg.setDestination(47128U);
    msg.setDestinationEntity(108U);
    msg.type = 183U;
    msg.htime = 0.866678254195;
    msg.context.assign("QQEPHVZISMMVMAAEICQGBZFJITTFRPEFPNOWHNRJANDNBDMRKOFWUJTLRHVDPASUXDZLHCDYUVEVGSGOSYLYDDRFZUCKQGNWXCPRVWKGDEMJXNFUWKLOBYKBQSZTMGRQWKRVOBZUOGAEPHJYRO");
    msg.text.assign("LOGSWUOGPTTTTDYLDJQJPIGNKSIYIJMNRHCFBLIHLQKTVRXQNKDHUQFFBQLKZIEGTPDYHUWDQOYALOEWAREPJAIUBMOBRNEVKVKKFCREEXOMCXRCXDSSSLHBFVMFLPBRNRQJSUEUVXZIZCFSTMOWCTHSPJDNXWZHRQXAZELGHSMHCKETAWJAEGBZIPHNOXBAWCN");

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
    msg.setTimeStamp(0.212941420916);
    msg.setSource(10381U);
    msg.setSourceEntity(129U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(98U);
    msg.type = 165U;
    msg.htime = 0.450497117242;
    msg.context.assign("PNTWVSFLQLXSIHIHBLZOYYEXCUJVPCXGZNABMJVITWZEDEAPXBFPTURJBEUFBHYEAVHMKOOUXRGHSYFKYQACGWAVJNWHHPQFDTXEBUOFJDKDHKKOTVZ");
    msg.text.assign("VFGFELOFWWDISPCDIBLTHYCKKQOZPZNLXESYUWYQLWSHORDXQVKSRCSNJXWZFPGBANZUXJFYNQAYDRCEXMFPZCUZEBSAOJRKDTPCKM");

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
    msg.setTimeStamp(0.196838639189);
    msg.setSource(9386U);
    msg.setSourceEntity(64U);
    msg.setDestination(36092U);
    msg.setDestinationEntity(13U);
    msg.command = 205U;
    msg.htime = 0.0676816125165;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 189U;
    tmp_msg_0.htime = 0.90888238026;
    tmp_msg_0.context.assign("QSKRWWFDDDVCHAOGLJZPZYGEDQTXFZQHNIKRRKGUVWZCBNXGXFDHQFNCUMTMPZXEQUROPWKGOGYJGGILKADHBSOBWSUXYWIMYCMNDPEOWNITICCLZSFJXFYMWZIVEXOALJKH");
    tmp_msg_0.text.assign("PXAIINLPMDSJQCSOJFJDZHWKOZGWNMAWBAYZBGBDZLVXVYNFPZTGNCWIGCREJWSJUNIHOETTKSBSUNGXLQUEIJIUVHOXGTZFXGLHKVBFHMPWKEDKZATMRUSRWSGAOPFZWYVHQEVXOBDRQXJC");
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
    msg.setTimeStamp(0.8516908744);
    msg.setSource(59069U);
    msg.setSourceEntity(109U);
    msg.setDestination(44110U);
    msg.setDestinationEntity(99U);
    msg.command = 117U;
    msg.htime = 0.810970326328;

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
    msg.setTimeStamp(0.813565741816);
    msg.setSource(31078U);
    msg.setSourceEntity(204U);
    msg.setDestination(31938U);
    msg.setDestinationEntity(87U);
    msg.command = 117U;
    msg.htime = 0.229087428934;

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
    msg.setTimeStamp(0.275070361606);
    msg.setSource(4571U);
    msg.setSourceEntity(24U);
    msg.setDestination(5967U);
    msg.setDestinationEntity(191U);
    msg.op = 54U;
    msg.file.assign("LVEZUSPAKQKBAFQBHURGLOGQZKQSSYSYPFUDPIRCPNRYEMDLSWKBENYYVVXKAYHRIIKYMYZIDWMHVOJLVVUHZQBUOJMZWBOIHASS");

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
    msg.setTimeStamp(0.960284720597);
    msg.setSource(21497U);
    msg.setSourceEntity(130U);
    msg.setDestination(5909U);
    msg.setDestinationEntity(109U);
    msg.op = 180U;
    msg.file.assign("YEYFDTWLKCCWORFZFWNZJJLBZERISWXHTARJIARTJIBECYIDUKGZYHGRPLONMSQBDMMFZMSUZBDHKWTIZDHUXKCWTOLJPPVCYAKYUERGJVQISVEVCAMUS");

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
    msg.setTimeStamp(0.471228165498);
    msg.setSource(51551U);
    msg.setSourceEntity(77U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(158U);
    msg.op = 224U;
    msg.file.assign("QXUPYRDITHLVSTBEMAHTMYWDOQMUGLQAXQPIUJJHAZIBZCRTBQQVPBGMYJZNYDSJYNSCFLNJNMKTUZNEMOWROWXZLSJFDKQAPSGLVDLWQVRPXTJEEOEIWMSPYTWBZEWNYKYONHFVKKBRTCLQZMGLIBNUKWAVVIFSPCFSZHPLNAGCKFRXCFKFIBDAEM");

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
    msg.setTimeStamp(0.89639110971);
    msg.setSource(49399U);
    msg.setSourceEntity(150U);
    msg.setDestination(4536U);
    msg.setDestinationEntity(148U);
    msg.op = 30U;
    msg.clock = 0.0811597588486;
    msg.tz = -85;

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
    msg.setTimeStamp(0.472921414321);
    msg.setSource(27727U);
    msg.setSourceEntity(62U);
    msg.setDestination(56140U);
    msg.setDestinationEntity(121U);
    msg.op = 44U;
    msg.clock = 0.443389683405;
    msg.tz = -46;

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
    msg.setTimeStamp(0.205091322083);
    msg.setSource(6762U);
    msg.setSourceEntity(229U);
    msg.setDestination(28789U);
    msg.setDestinationEntity(157U);
    msg.op = 12U;
    msg.clock = 0.325940013907;
    msg.tz = -101;

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
    msg.setTimeStamp(0.832069913617);
    msg.setSource(53635U);
    msg.setSourceEntity(101U);
    msg.setDestination(17481U);
    msg.setDestinationEntity(158U);
    msg.conductivity = 0.664482368209;
    msg.temperature = 0.934493856055;
    msg.depth = 0.990151753349;

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
    msg.setTimeStamp(0.228291092555);
    msg.setSource(31434U);
    msg.setSourceEntity(198U);
    msg.setDestination(7858U);
    msg.setDestinationEntity(184U);
    msg.conductivity = 0.716745775955;
    msg.temperature = 0.600855690145;
    msg.depth = 0.210368115072;

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
    msg.setTimeStamp(0.594520107094);
    msg.setSource(46897U);
    msg.setSourceEntity(52U);
    msg.setDestination(19146U);
    msg.setDestinationEntity(226U);
    msg.conductivity = 0.0726359066188;
    msg.temperature = 0.0180654971341;
    msg.depth = 0.929389509695;

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
    msg.setTimeStamp(0.320180113985);
    msg.setSource(3435U);
    msg.setSourceEntity(168U);
    msg.setDestination(11003U);
    msg.setDestinationEntity(199U);
    msg.altitude = 0.122947057131;
    msg.roll = 12043U;
    msg.pitch = 35244U;
    msg.yaw = 23562U;
    msg.speed = 18170;

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
    msg.setTimeStamp(0.26057944548);
    msg.setSource(39857U);
    msg.setSourceEntity(240U);
    msg.setDestination(9680U);
    msg.setDestinationEntity(88U);
    msg.altitude = 0.0784434666456;
    msg.roll = 30241U;
    msg.pitch = 10971U;
    msg.yaw = 15585U;
    msg.speed = -31115;

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
    msg.setTimeStamp(0.641214900375);
    msg.setSource(60380U);
    msg.setSourceEntity(73U);
    msg.setDestination(9458U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.393203967243;
    msg.roll = 28348U;
    msg.pitch = 64740U;
    msg.yaw = 49212U;
    msg.speed = 9381;

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
    msg.setTimeStamp(0.0752360459014);
    msg.setSource(60094U);
    msg.setSourceEntity(114U);
    msg.setDestination(25941U);
    msg.setDestinationEntity(118U);
    msg.altitude = 0.346364466374;
    msg.width = 0.288284801975;
    msg.length = 0.935129947012;
    msg.bearing = 0.786391302507;
    msg.pxl = -30002;
    msg.encoding = 135U;
    const char tmp_msg_0[] = {102, -100, -9, 30, 89, 58, -108, -32, -40, -43, 56, -97, 54, 1, 56, 95, 114, -84, -125, -127, 25, -52, -70, -29, -99, 91, 105, -59, 49, -27, -13, -51, -85, 66, 68, -125, 44, -66, -68, 26, 55, -37, -66, -18, 103, 45, 48, 75, 104, 15, -126, 122, 92, -10, 92, -128, 79, 31, 74, -38, -67, -38, 106, 15, -64, 98, 55, 10, 82, -20, -113, 118, 3, -112, 88, -99, 13, 10, 75, 69, -127, -77, 121, -12, -78, 5, 125, -69, 119, 40, 29, -60, -2, -84, 24, -51, -99, -56, 85, -12, -78, 117, -90, -40, 10, -10, -5, -117, 21, -39, 84, 67, -59, 53, -102, -64, 121, 97, 111, 61, -103, -6, 14, -45, -18, -85, 36, 0, 41, 105, -11, 12, 24, 65, 48, 112, 86, 26, -78, 27, -22, 85, 89, 108, -68, 93, 113, -5, -122, -85, -55, -93, -58, 104, -17, -21, 42, 61, 23, -106, -36, -35, 61, -12, 119, -14, 39, 26, 60, -54, 9, 101};
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
    msg.setTimeStamp(0.441532628481);
    msg.setSource(57697U);
    msg.setSourceEntity(55U);
    msg.setDestination(60644U);
    msg.setDestinationEntity(65U);
    msg.altitude = 0.564840504097;
    msg.width = 0.178339603876;
    msg.length = 0.34356125149;
    msg.bearing = 0.916003019007;
    msg.pxl = -32105;
    msg.encoding = 175U;
    const char tmp_msg_0[] = {75, -93, -101, -44, 17, 91, -61, -61, -79, -38, 121, 20, -51, -25, -34, 45, 60, 67, 21, 91, -62, 115, -34, 0, 44, 85, 34, 14, -62, -93, -44, -109, -68, 8, -121, 73, 22, -61, 74, 3, -82, -36, -40, 16, 67, 101, 86, -39, -35, -64, -58, 112, -80, 40, -92, -98, 96, 108, -79, 8, 65, 100, 52, 34, 12, -9, -62, 57, -85, 49, -22, 69, 35, 41, 54, 14, -9, -47, -93, -127, 55, 97, -79, -92, -13, -37, 81, 121, 3, -66, -65, 20, -68, 82, 91, 111, 66, 102, 40, 69, -28, 82, -100, -52, 72, 72, -71, -50, -2, -47, -57, 48, -64, 32, -46, 124, -65, 67, -60, -23, -4, 71, -110, 42, 86, 32, 85, 121, 101, 14, -52, -16, 27, 61, 66, -51, 68, -116, -32, 105, -104, 57, 71, -84, -124, 51, 7, 49, 73, 9, -36, -118, -101, -118, 23, -2, 77, -17, 17, 50, -15, 94, -70, -72, 58, -67, -53, -109, 45, -55, -106, -116, -122, 69, -105, -56, 66, -42, 50, 30, 22, 16, -50, -61, 12, 38, -34, -24, -111, -79, 12, 50, 89, 61, 40, 22};
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
    msg.setTimeStamp(0.91008023679);
    msg.setSource(18045U);
    msg.setSourceEntity(43U);
    msg.setDestination(6885U);
    msg.setDestinationEntity(116U);
    msg.altitude = 0.51388594462;
    msg.width = 0.120830573892;
    msg.length = 0.793790947289;
    msg.bearing = 0.923804539898;
    msg.pxl = 6673;
    msg.encoding = 109U;
    const char tmp_msg_0[] = {-62, -123, -93, 1, -15, 95, -5, 64, 125, 90, -62, 107, 70, -64, -104, 29, 65, 40, -100, -59, 66, -111, 111, -3, -121, -105, -91, 124, -20, -64, 106, 80, -116, 24, -104, 101, 4, 105, 19, -23, -119, 16, -67, -109, -7, 14, 13, 112, 31, 2, -103, 48, -81, 95, 3, -6, 71, -122, 108, -21, -94, -73, -128, -43, 125, 117, -39, 117, 73, -90, -41, 38, 88, 49, -105, 120, -39, -77, -106, -112, -40, 20, -1, 92, 1, 56, 55, -41, -2, 57, 60, -88, 97, -53, 100, -104, 62, 57, -92, -49, -18, 56, 8, 15, -114, -91, -81, 5, -74, 29, 19, 123, 4, -128, 125, -31, -16, 117, 96, 13, -46, -102, -58, 88, 120, 19, -112, 71, 46, 39, -104, -35, 120, -53, -93, -11, 62, -16, 32, 6, -125, 109, 63, 66, -99, 26, -119, -115, 60, 101, -60, -25, 18, 102, -89, 28, 19, -56, -23, 95, -80, -26, 21, 2, -22, -127, 126, -45, 72, 8, -123, -123, -62, -68, 31, 60, -20, -100, -18, 65, -62, 69, -34, -105, 50, 69, 14, -81, 113, 11, 71, -56, -69, -96, -24, 65, -24, -95};
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
    msg.setTimeStamp(0.211312858844);
    msg.setSource(58483U);
    msg.setSourceEntity(21U);
    msg.setDestination(63500U);
    msg.setDestinationEntity(180U);
    msg.text.assign("GWACRKQFFTTPHARQWDRWKBHDGCLMMYNLKVCBCJPAZUYCSGUPHVBRNFOINXZPHDMUBFVRPNARWQPSKFHKEEXZETWIMFJEANKSZZOYILCESVGLKKYQHPANBSLVJZSAREQMDI");
    msg.type = 247U;

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
    msg.setTimeStamp(0.960365470571);
    msg.setSource(16974U);
    msg.setSourceEntity(47U);
    msg.setDestination(37949U);
    msg.setDestinationEntity(109U);
    msg.text.assign("XXRNLZQNKURAANVLDKAOEMJEMDSFJNMWBIIMSFVWKJLOT");
    msg.type = 252U;

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
    msg.setTimeStamp(0.451971202106);
    msg.setSource(59961U);
    msg.setSourceEntity(55U);
    msg.setDestination(3362U);
    msg.setDestinationEntity(181U);
    msg.text.assign("EWQYAGRGOBRZPFEJAPHWCVGQNXXVDFZOUSKVUHFWGABUVMDJVJEOQRMLQNNIUOOHALRDSWBXCVSXMFRQPDEEA");
    msg.type = 67U;

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
    msg.setTimeStamp(0.552021708431);
    msg.setSource(28005U);
    msg.setSourceEntity(108U);
    msg.setDestination(52319U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.542374250887);
    msg.setSource(30163U);
    msg.setSourceEntity(159U);
    msg.setDestination(24099U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.802266835819);
    msg.setSource(57881U);
    msg.setSourceEntity(254U);
    msg.setDestination(10242U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.653988924036);
    msg.setSource(63870U);
    msg.setSourceEntity(52U);
    msg.setDestination(55300U);
    msg.setDestinationEntity(51U);
    msg.sys_name.assign("FASMXBSEGKYKKJDLZZKKUHQXALUGNNMZVSYIIZAORZJLSFFJCOILLHTWUSSNCMEBYYIVTARWAWQWHPQGGMWUEXZCBDXCJDDDIYGBBTGRZOCKBRYSVNOQTQPDYQIAUBQZNIOLRBPTPNUNMVPMSYIAMHHTNHPHCCKNKLJWLUIMJTQGRTJMCEDFKFPGGRESFXATBOVPOZOVVUDPRQLHUUVGJQYREZWOAHEACFMXEEK");
    msg.sys_type = 16U;
    msg.owner = 42364U;
    msg.lat = 0.618342796942;
    msg.lon = 0.219222388805;
    msg.height = 0.43845642512;
    msg.services.assign("TIYCBEPQGHCIVITHZTJEWLEPYNJDJDMSERXXNNXVLEOVOCFPKFYLPYBCHLAZXTYEGTWGWVLJZAIDNHNOQTWVXDTMZOPQCODTUAULANNRDLULRYQBQFJTEMOGSSBTNFMUISXGRFKBPRBCNAOHJJPXKPNEKDHWZARMLDFZRXBMWHGFVHIEAQEMBSKJCGCOXHUQJZGBWGSQKAVOKKVRPUMHCSDOQFVW");

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
    msg.setTimeStamp(0.0418882035983);
    msg.setSource(34122U);
    msg.setSourceEntity(235U);
    msg.setDestination(33381U);
    msg.setDestinationEntity(39U);
    msg.sys_name.assign("KFZEYSMSXZOLCTZQGAUWCMAEXVLJJVYBIQCSJFBDHFBNXAYPLMJQNCBLLVQSGHETMRHMJYOUUCNCRTLUHGWDZOYRGAFOBRRUPCDXUBURWQEZXSMGSORKIQDOZBNWVNZLTWYXGWAPPANZVJTVEGWGKQBDISQDHTVEKTYOXVWXCKFTDXEMPIUFXCGOKPHKVGDFZFQIKADMJJTNMYPNRYIHILHOS");
    msg.sys_type = 247U;
    msg.owner = 52883U;
    msg.lat = 0.774623683814;
    msg.lon = 0.704145410856;
    msg.height = 0.752626966008;
    msg.services.assign("ZLDWEFQGQHBTAEMOQUZWDBNWKNVVYUFOXCMIPATJPUXTXSZILJRQBYAFIRLSELSAZEACNUTVYPBOVFNFEPRJYRQWDGMTBKKOLRKRZGBICPTNCUKPYWGBNHJMHRMJAJVBSDWIRQWXHVXOKCGXNPHDSIHFXEAUIUDGFIHJYG");

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
    msg.setTimeStamp(0.687070833302);
    msg.setSource(8538U);
    msg.setSourceEntity(145U);
    msg.setDestination(28305U);
    msg.setDestinationEntity(128U);
    msg.sys_name.assign("EHINHEZZYEVHRGFOJHWVGBICUNDLDVNLRAMDSRVMXZEPVOFTV");
    msg.sys_type = 183U;
    msg.owner = 62101U;
    msg.lat = 0.198143353851;
    msg.lon = 0.901175189528;
    msg.height = 0.704555366835;
    msg.services.assign("JGLFUCBRWQWLXIUZSOITFRWACNEGUGTDXNZIDKSFVHJLXQNAGUZPEHLYIMNZYTLZTSKCPOGLQLBJARKMHHUOOFHZRZQCTNMSPSDQRJTBNOMVLVBRPONFMTVAYKARHOEYMVWXHXCVDDKLKKSUAEVGEXFIYQCRGEFFWRGVJDYWSDEAUCCUANTOWDXDPLMBQBBQTUSHFYXVHXWEBIQG");

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
    msg.setTimeStamp(0.445394877223);
    msg.setSource(56126U);
    msg.setSourceEntity(38U);
    msg.setDestination(59859U);
    msg.setDestinationEntity(190U);
    msg.service.assign("HNRTKYCVIQBCHFPQXQNQOJPRTITNFYTWUSLBJJOIRIPSZWOBHMDXTYSDCGNBSSBV");
    msg.service_type = 102U;

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
    msg.setTimeStamp(0.838268095467);
    msg.setSource(20451U);
    msg.setSourceEntity(120U);
    msg.setDestination(52265U);
    msg.setDestinationEntity(34U);
    msg.service.assign("EOAESNTQQMYTJDJIFHXWKABUCIXWOHTHBUAVUFINASJYHGGKSEMVDIEOTOMFJXZJOEVSQUHRHKWRTXABZJOQNWKCLUMVAOYNDFQLCPHERWMKTUYXCPBTZAWIKVPGDGHOAZUCPNBZLRGXPJPXDCLWVLEBLRPF");
    msg.service_type = 35U;

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
    msg.setTimeStamp(0.0710004992111);
    msg.setSource(55092U);
    msg.setSourceEntity(93U);
    msg.setDestination(6063U);
    msg.setDestinationEntity(111U);
    msg.service.assign("FYPJZXFDBQDKOYQEBSGEUYRVUAJLGPHEPQMDGQLFHNLBJLQJYOZKBEWUPLLIOIZLEIGRTIVVMMNVGUQXLAEUSBCIUZKLORXCNPCGGSATXAZQFERTWOPFUJFOWCZHVCBECMSSWKQUWIDAHFSNIBMXJPVWZMJSKPDYGANFAROOHETMJKZSNYTXGMHMWBIKWKLHHVDCNJRGVTTVVSTEHDOAYAQNFXCWX");
    msg.service_type = 10U;

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
    msg.setTimeStamp(0.43914840191);
    msg.setSource(6224U);
    msg.setSourceEntity(31U);
    msg.setDestination(31626U);
    msg.setDestinationEntity(130U);
    msg.value = 0.328510989012;

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
    msg.setTimeStamp(0.115050967539);
    msg.setSource(48795U);
    msg.setSourceEntity(35U);
    msg.setDestination(16211U);
    msg.setDestinationEntity(138U);
    msg.value = 0.878133695683;

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
    msg.setTimeStamp(0.708073801224);
    msg.setSource(39041U);
    msg.setSourceEntity(32U);
    msg.setDestination(43775U);
    msg.setDestinationEntity(239U);
    msg.value = 0.494722877771;

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
    msg.setTimeStamp(0.271565415868);
    msg.setSource(7851U);
    msg.setSourceEntity(179U);
    msg.setDestination(26198U);
    msg.setDestinationEntity(63U);
    msg.value = 0.00109150034717;

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
    msg.setTimeStamp(0.124753608597);
    msg.setSource(17682U);
    msg.setSourceEntity(9U);
    msg.setDestination(10059U);
    msg.setDestinationEntity(139U);
    msg.value = 0.362301920477;

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
    msg.setTimeStamp(0.0563377105719);
    msg.setSource(3069U);
    msg.setSourceEntity(88U);
    msg.setDestination(39155U);
    msg.setDestinationEntity(192U);
    msg.value = 0.29336341725;

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
    msg.setTimeStamp(0.379866570962);
    msg.setSource(36880U);
    msg.setSourceEntity(184U);
    msg.setDestination(62713U);
    msg.setDestinationEntity(89U);
    msg.value = 0.839642716334;

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
    msg.setTimeStamp(0.352820713693);
    msg.setSource(58452U);
    msg.setSourceEntity(239U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(93U);
    msg.value = 0.281669779646;

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
    msg.setTimeStamp(0.72245358154);
    msg.setSource(16807U);
    msg.setSourceEntity(78U);
    msg.setDestination(57663U);
    msg.setDestinationEntity(168U);
    msg.value = 0.814073705579;

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
    msg.setTimeStamp(0.885845401167);
    msg.setSource(5921U);
    msg.setSourceEntity(118U);
    msg.setDestination(26380U);
    msg.setDestinationEntity(236U);
    msg.number.assign("DFYFDBAAXHFCICPLROGKJCLHWNQXWSWLLJDUSTZJHQVEOMZNIVJYBRJXXVPWSIAPLKTOEJGVMNSHTHMBWKGTDSWMJMKNCLOTCGPUKDODAXIMEOUSOPAZQGEXIRPDOENUEZNQKWFRQCNAFHXV");
    msg.timeout = 64757U;
    msg.contents.assign("QHDWNEDIVPDELQRCDEAVSNUWKHSJUJZODJPQOMTTVUEIGLYMLBXHCYLIZBSRAAWMDRJOFURIAYVDLNPUFQZQJXIHWQNYXOAOCMHBWFOZKBPTUYEKGFGV");

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
    msg.setTimeStamp(0.500542732242);
    msg.setSource(37570U);
    msg.setSourceEntity(87U);
    msg.setDestination(13839U);
    msg.setDestinationEntity(183U);
    msg.number.assign("IMJVFPRQFLVCNYOFGHCXWPEQXNI");
    msg.timeout = 46180U;
    msg.contents.assign("EIALBIYMQEUHJNOIFTGNLICDKKXGECCKYNQDKJAYBCRAKUWEQCDTZXZJPSVYTONPPECGGYCZDN");

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
    msg.setTimeStamp(0.370876952242);
    msg.setSource(12009U);
    msg.setSourceEntity(20U);
    msg.setDestination(1940U);
    msg.setDestinationEntity(234U);
    msg.number.assign("EVWMIVDAHWICQKZGN");
    msg.timeout = 29064U;
    msg.contents.assign("LCLRJJNTMSZVBFIESKMVGXPCQLMFLFCHDVEEEGRTFPIHHDUBBMZUOVNUXOREDYIDZEACOCKPILSZKSNXTUSEQKWRKLUWXVTMAWLBBMSMTNHGJWOBGWNMRUFECZUKWFIAKTWYBJCIQFGMJBHIXRXTYPQRFZYOLYOZBVZDFQNXQJHZTHURTPHWGNUYGXLGOASOJSDHTVRZPJKGQAOAYMJPDBYSUKNWQXWQIXDGPFPEVCSJVIQKLY");

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
    msg.setTimeStamp(0.00240198250805);
    msg.setSource(23189U);
    msg.setSourceEntity(228U);
    msg.setDestination(39628U);
    msg.setDestinationEntity(64U);
    msg.seq = 642368794U;
    msg.destination.assign("TZOANHYOQURGVLXGAFMFUHWQPQNMCKEXRPVUGIDHKUXLCQWLRVOGZSQWTSRURWJIBQONDIBSHPOGAEWSAJSEECXJVTHJQMLCFASFSKVUSJLINBNAWIBJYABEAECHDBFHPMMBADTJMTUVCONFSNQDZL");
    msg.timeout = 24496U;
    const char tmp_msg_0[] = {-3, 83, -27, -49, -87, -120, 98, 114, 30, -82, -122, 94, 8, 62, 4, -68, 36, -44, -39, 119, 83, -81, 10, 13, 99, -48, -30, -107, 63, 29, -120, -16, 103, 86, -4, -68, 42, 118, -34, 76, -40, 78, 89, 44, 111, 71, -54, 94, 41, 84, -92, -41, 39, 23, -51, -29, 30, -10, -94, 63, -23, -24, -41, -124, 82, -119, -46, 77, -65, -39, -64, 10, -24, -103, 83, 119, 59, -82, -100, 7, 50, 21, 100, 121, -127, -61, -100, 99, 20, -38, 41, -33, -77, 118, 63, -34, -65, -121, 49, -91, 33, -110, 60, -103, -23, -118, 110, 87, -94, -119, -124, 92, 13, -74, -12, 67, 123, 75, 16, 32, 51, 75, -9, 80, -36, -60, -101, -64, 108, -66, 102, -70, -105, 44, -7, -61, -107, 83, 34, -123, 111, 17, -120, 82, -56, -32, 64, -98, 125, 15, 77, -18, 51, -117, -17, 99, 10, -28, 60, -44, -25, 94, 65, 97, 95, 11, 15, 90, 87, -3, -5, -90, -54, -58, -90, -6, 86, 109, -72, 93, 114, -65, -73, 3, 68, -3, -87, -108, -39, -13, 69, 25, 106, 38, 73, 15, 82, -55, 3, -18, -38, -128, 46, -35, 43, -69, -75, -14, 60, -43, 44, -120, 117, 37, 91, 16, 63, -126, -81, 12, 30, -100, 71, 17, -34, -114, -85, 37, -43, 10};
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
    msg.setTimeStamp(0.0784622861461);
    msg.setSource(11700U);
    msg.setSourceEntity(147U);
    msg.setDestination(8573U);
    msg.setDestinationEntity(186U);
    msg.seq = 1031641151U;
    msg.destination.assign("HHFTCTMDZCFXDZCUTAPRQCRPASRUNBMXJILHIJVKKBLCUSJHUDHXUABSITISIMEXWPIHLFPVGMOYYTKQYBCWBEPANMGNOVKRXWRXGOUWKAREMAZNJ");
    msg.timeout = 10709U;
    const char tmp_msg_0[] = {-94, 13, -116, 72, -127, -24, -99, -96, -4, -43, -41, -19, 52, -48, -92, -78, 126, 29, -90, -70, 112, -108, -34, -49, 22, 14, 115, -75, -36, -112, -24, 77, -44, 53, 11, 60, 100, 28, -10};
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
    msg.setTimeStamp(0.892872379406);
    msg.setSource(20630U);
    msg.setSourceEntity(165U);
    msg.setDestination(17052U);
    msg.setDestinationEntity(129U);
    msg.seq = 1300122000U;
    msg.destination.assign("WAMRPUWNEPBPBFZXUOFDNIJDFLGCOWTYSUTVKNQAHCDVIWVIPPYKQUAQLGNTYJZUNNZVLTEWYK");
    msg.timeout = 34435U;
    const char tmp_msg_0[] = {-97, -36, -23, -108, -52, 126, 26, 23, -26, -2, -67, 31, -23, 112, 100, 100, 119, -124};
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
    msg.setTimeStamp(0.21243841028);
    msg.setSource(51239U);
    msg.setSourceEntity(85U);
    msg.setDestination(53415U);
    msg.setDestinationEntity(198U);
    msg.source.assign("HVZMLRJWCQIDCVOHPDSJWERIUXTGXNAFSNYSRGHIDSKNKWTQPRMZCCJLQJMEXULOFTPVBUQMYVPRTVGZVYDCIYUY");
    const char tmp_msg_0[] = {9, -29, 114, 24, -53, 60, 29, -94, 111, 62, 105, -8, 120, -120, 34, -41, 84, -18, 43, 109, -52, 2, 19, -101, 122, 81, 86, -114, 71, -93, 27, 60, -20, 106, -120, -78, 118, -103, 121, 116, 0, -22, -35, 25, -74, 66, -65, 44, 15, 52, -94, 126, 113, -27, 109, 73, 100, -36, -45, 5, 110, -84, -68, 70, -10, -65, -33, -31, 63, 25, -36, 26, -110, 12};
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
    msg.setTimeStamp(0.21627431264);
    msg.setSource(58179U);
    msg.setSourceEntity(228U);
    msg.setDestination(20694U);
    msg.setDestinationEntity(213U);
    msg.source.assign("NWFWIAZKFJHUZPNLQVWZKNFKJSUXLCESHNRBITFTCQJVTABYXKQVBHDJOAMMBVGUKXKEVXZERNCERWATDOKKLOTDRYTGONGMRZPPPBBHVONXQMDALCWLYWDPIFQFYRTDBISADTMGQXYALFEGLSDOXPDNKOYJXGQGHHNYGJTVHHMMEPGGCQIZZSSICW");
    const char tmp_msg_0[] = {-71, -101, 112, 19, 76, -92, 1, -84, 62, 94, 118, 78, 110, 97, -71, -95, 14, -86, 126, -12, -91, -87, -105, 89, 49, 94, -112, -50, 66, 61, 108, 35, -48, 108, 76, 4, 26, 30, 11, 95, 78, 72, -36, -21, 113, 39, -70, 42, -28, -48, 27, 64, -72, -86, 77, -28, -120, 42, 71, -88, -19, 29, 1, 43, 70, -54, 4, -1, 4, 45, 13, 25, -61, 105, 74, 100, -47, 79, -31, 55, -15, -26, 30, 7, 89, -87, -106, 87, 89, 29, 126, 31, -76, 80, -31, 34, -7, -17, -88, 6, 87, -61, 116, 55, 52, 91, -85, 123, -86, 119, -60, -79, 107, 24, 125, -60, -108, -76, 44, -111, -18, -98, 63, 76, -92, -94, -116, 75, -20, 96, -88, -110, -115, 75, 4, 56, 32, -3, -71, -16, 8, 109, -73, 37, -106, 33, 10, 90};
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
    msg.setTimeStamp(0.869767081272);
    msg.setSource(18197U);
    msg.setSourceEntity(153U);
    msg.setDestination(41332U);
    msg.setDestinationEntity(98U);
    msg.source.assign("NLUDVLVOKDERWFMMLTBUPZRXGWZDYQESDKYMPNWJAIUWYKMCTZINJUAOAZFENVZQICNOBCYXMRTAWCHYPBQXCCIVFLTKQKKKGZSPXDPFYRSQHOHXVWEVSOXQGOHVPOIJNXOXDLJGXTDPJANEOGASLCFJHVEZQLYRTASWFQTYUREIRHVMKIQHGRBYHNLJKPBAIMYUBTULCWZUEWSGWSHBPCRVOSDBJEBTU");
    const char tmp_msg_0[] = {7, 120, -95, -112, -14, -90, 1, 20, 121, -102, 84, -9, -86, 6, -17, -1, -80, 74, -15, 78, 82, -91, -102, 89, 73, -34, -44, -17, -58, -31, 98, -71, -103, -80, -1, 73, 123, -123, -36, 38, -16, 89, 21, 68, 43, 106, -95, -92, 95, 33, 126, -88, 6, -76, -71, -61, -117, 107, 80, 124, -61, -40, 68, 110, -62, 9, 91, -44, -102, -74, 109, -56, -41, -34, 34, 89, -98, 93, 4, -10, 50, -94, 21, 45, 99, -97, 62, 15, -102, -94, 33, -97, 121, -116, 98, -91, -120, 56, 38, -115, 42, -73, 14, 78, -89, -89, -93, -86, -84, -10, 70, -7, 5, 106, -93, -38, -123, -116, 6, -80, -96, 72, -94, -106, -30, 18, 113, 126, -113, 4, 103, -60, -94, 35, -111, -51, 49, 3, 34, 103, -7, -15, -67, -24, 1, -68, -62, 10, -117, 85, 72, 29, 58, 46, 46, 46, -117, 1, 55, 76, 40, -82, 72};
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
    msg.setTimeStamp(0.38157949265);
    msg.setSource(49469U);
    msg.setSourceEntity(179U);
    msg.setDestination(52962U);
    msg.setDestinationEntity(172U);
    msg.seq = 1310638486U;
    msg.state = 250U;
    msg.error.assign("JVTBVGXVDBSVLSKVQJLSKULPXPRADNBHRNOJQAXQPGOMFDECEYKPEYMMXTBXLKPOCZDSTWUYXAIYLWIODRYRBYGFYICIGMAEGQMXCZGEVHDIHMMZJTYGSODJZNHICWGUNZEPNTRHXKLFOUXFEXTGZWNWSJHFBGUQLJQOUABORWEFTTAHYIBFONFQVNKCWCWCVPTAPWCFEIJ");

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
    msg.setTimeStamp(0.167144809966);
    msg.setSource(35010U);
    msg.setSourceEntity(215U);
    msg.setDestination(14257U);
    msg.setDestinationEntity(99U);
    msg.seq = 58089073U;
    msg.state = 231U;
    msg.error.assign("HPFQYCSQUDZNAGCFPSGRIUPOZWUFZXCNVFAWNKRODXRQXDVKIULGTNEEIMTGBAXZRNMBYFKZFZHGQRIQNMTPZDTCRMSYDTBWMXRMAKDIIXUHHXJRSFPLDIIQJZBBKOITYXSVJTEKHLFAZECQWSNFWOWAKHWAGSDVUVCMVJJHDRLSEPJONOQAIEPPLYPVYCQEOMAJJLZYKOLTKSEUOGBLAUJWCLUVBYHNGGGYDPCEORWUKXQVL");

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
    msg.setTimeStamp(0.80730382254);
    msg.setSource(19013U);
    msg.setSourceEntity(24U);
    msg.setDestination(545U);
    msg.setDestinationEntity(217U);
    msg.seq = 2427816559U;
    msg.state = 4U;
    msg.error.assign("MTQHLTJLSXVCIPXGFMGPWSPJARIHBMEZDLTOTRPQEITEULRYDCLGLJDDHWEAARRNFUIWZRVQSIYMWYXMJFLBTIUVAXNPVUDPXGGQJUBOOKODBRVESBKGAMQECYAIASWRSWLOJUZZHCNHKFQBXFXNUJPGTD");

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
    msg.setTimeStamp(0.251248859327);
    msg.setSource(31175U);
    msg.setSourceEntity(244U);
    msg.setDestination(15388U);
    msg.setDestinationEntity(218U);
    msg.origin.assign("BMJXKJEKDCCAFCEWPLPUPTTJSVDUKFERLHHBBKVPXQOHCZWLVQFMVRPOUFVGZEBHLRSONJMDEDYXWAZQUTDULMORGSFWYERXGDSQZAOROBQFLGLKQMZTBYHSGERXTNBRGQFYUPUQPCIOJHJMIXTVJLAFXJWIPYKKIQSUYRFVCWYYSEWNITHOALPVAIZBWITUXNHACNCDVJMTLSNZKIOWAHIFNQMVBINTDCPGYSASKAZBXUNGMDKCZGDMJGWE");
    msg.text.assign("YMZNWHVFPYMSCNFYEQBCSXUGTWRQUKVRRHABYJRLCYPIJXYRNSZCHEBIKITBVYZEGGNAKPMLPCYXESRGVVOPFDSBWQCAKDDLLWSLOLAKVMLGGNPPWIJFOOBTGUPFIZKUUJDXCJANIFLSQDOHFISHFUGAXHOKHJJETOOTZYZIBVFPPMLYHUWITZVRRQDADOJQVZKUUMEQKDQFMMNJKXZDCITAWBUG");

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
    msg.setTimeStamp(0.795193200938);
    msg.setSource(63775U);
    msg.setSourceEntity(116U);
    msg.setDestination(14935U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("DYTPXLSBQZVTMPUMJZUNDEZFZPQGBFNURCUVWIOGKUTCWXAPGFSTHXWANWRXFGWZPBGIRDRKTHNQKSRGJFAHOBFSQSGLLCYHJNDCMIKJQMKXDTSVEB");
    msg.text.assign("KENLJRPZYXCKWYZPFNSHQSOGZMUYGKBAMLXTYTGCNJDKAOBDAFBSSMSEHRUOGQDHCYHBWFLQDPPVXPGBFKHFRNRFZVMIVTAAPJWXIHQLVYUAKKXCA");

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
    msg.setTimeStamp(0.782244751026);
    msg.setSource(4978U);
    msg.setSourceEntity(195U);
    msg.setDestination(35542U);
    msg.setDestinationEntity(10U);
    msg.origin.assign("JZTJACXVKTTGA");
    msg.text.assign("CDJSSZKTQJJRYOKAUMINVHCQFLIDSPUHMHNJRXKPBWXGMBGYTQHLTQCYHIXNORIGMVKACJOZR");

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
    msg.setTimeStamp(0.24944508503);
    msg.setSource(28896U);
    msg.setSourceEntity(137U);
    msg.setDestination(27821U);
    msg.setDestinationEntity(0U);
    msg.origin.assign("VUKTLYPLSQYGOMUBTAFSAUFTSZXPXEUOMVECVHFJACEJJLBANLGIXPKKBDIEGQBQZDAQVNBXYVQSMOJPKJIIRRGEDHYJZJHGDTDXULUHDTH");
    msg.htime = 0.734927363037;
    msg.lat = 0.188751026069;
    msg.lon = 0.554840290699;
    const char tmp_msg_0[] = {-76, 65, -124, 99, 24, 126, 109, -91, -58, 106, -24, -33, 56, 75, 75, -11, 58, 52, 111, -96, 92, 105, 113, 37, 102, -19, -4, 3, 14, 6, 73, -30, 7, 58, -103, -38, -30, -69, 72, -68, -24, 117, 11, -10, 111, -103, -3, -121, -71, 24, -60, 81, 116, 14, 26, -101, 124, 74, 2, -6, -64, -114, 91, 96, 5, 15, -89, -6, -77, 45, 24, -28, 24, 100, -83, -85, -100, -115, -123, 0, 96, 90, 39, 19, 56, -20, -109, 125, -54, 92, -111, 79, 20, 63, 81, -61, 83, -25, 33, -74, 61, 60, 38, 125, -78, 13, 92, 74, -95, 126, 68, 0, -83, 85, -47, -37, 69};
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
    msg.setTimeStamp(0.196562376054);
    msg.setSource(15844U);
    msg.setSourceEntity(22U);
    msg.setDestination(8401U);
    msg.setDestinationEntity(92U);
    msg.origin.assign("QYQZEMHYMTWILQREOSFOHWJKXTJAAYBEHZURGBCSNVZSUDWEKBJDWVLNTZFOKGDJEKFYSBSTPPNGPLGNOLWJLZVMJQKUBXHMFRVHUUSGRBVYFLDG");
    msg.htime = 0.561572543074;
    msg.lat = 0.625175679895;
    msg.lon = 0.296684613995;
    const char tmp_msg_0[] = {46, 84, 30, -99, -73, -107, -55, 95, 48, 119, -46, 58, -126, 29, -93, 103, 109, 3, 89, -37, 1, 88, 27, -108, -94, -35, 43, 26, 41, 31, 53, 88, 86, 31, -61, -123, 69, 35, -14, -35, -48, -52, -82, 16, -8, 115, -66, 105, -47, 1, 58, -81, 29, -14, -106, 2, -45, -61, -19, -102, -80, 34, 13, 7, 46, -69, -46, 7, 96, 0, -35, 14, -19, -99, 91, 99, -49, -82, -114, 91, 27, 21, 87, 126, 38, -87, -61, 120, 126, 15, -45, 87, -99, 78, -94, 71, -79, 17, 41, 119, -12, -8, -57, -70, 61, -48, -53, 24, 5, 102, -101, -71, 44, 103, 11, 81, 22, 63, -101, 102, -118, 60, -80, -12, 75, 49, -11, -120, -20, 27, 33, 60, -11, -67, 6, 74, 109, 35, 110, -20, -125, 114, -11, 118, 34, -69, 5, -32, -110, 67, -76, -123, -121, -109, 96, 119, -35, 123, -39, -104, -99, 53, -51, 50, 94, -106, -22, 102, 53, -123, -15, 1, -58, -64, -6, -9, -51, -95, 74, -18, -81, 10, -72, 88, -79, 48, 17, -33, -89, -120, -84, 123, 90, -97, 125, 88, 62, -62, 31, 126, -44, 77, 119, -2, -27, -68, -112, -97, -110, 101, 34, -60, 66, 118, -37, -68, 113, 60, -27, 7, 85, 126, 42, 90, 56, 52, 125, 48};
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
    msg.setTimeStamp(0.762841202437);
    msg.setSource(44815U);
    msg.setSourceEntity(195U);
    msg.setDestination(52380U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("WWVJPMSXLGGODFSRYECRFVJSECDOHECKZXIQTJU");
    msg.htime = 0.612238734695;
    msg.lat = 0.225880196535;
    msg.lon = 0.320311477176;
    const char tmp_msg_0[] = {41, -96, 57, -111, -5, -35, 76, 32, -22, -42, 20, -38, 26, -99, 16, 14, -45, -123, -21, 126, -92, 85, -62, 43, -86, -63, -115, 14, 14, 65, 39, -84, -5, 2, -75, 122, 54, -19, -75, 82, 98, -72, -127, 4, 90, 117, 49, -75, -110, 119, 66, -53, -51, -99, 10, 68, -49, -90, 78, -99, -107, 11, 70, 121, 31, -44, -126, 95, -87, 1, -128, 60, 83, -59, -31, -70, -81, -11, -47, -89, 109, -8, -110, -28, -53, 52, -104, -44, -31, 58, -78, 118, 7, 101, 104, 78, 73, 105, 45, 120, 72, -112, 55, -40, -60, 13, 86, -125, -105, 37, -81, 122, -31, 3, 69, -8, -100, 70, 9, -60, 32, -54, 87, -75, 25, -79, -127, -93, 99, -120, 31, 118, -93, 23, -2, 60, 51, 12, -31, -24, 14, 36, 57, -92, -49, -121, -26, -87, -66, 33, 105, 39, 17, -16, 123, -34, 61, 80, -117, -49, 87, 46, 82, 30, 94, -93, -89, -109, -88, 112, -28, 62, -111, 88, 104, 20, 50, -116, -79, -36, 65, -113, -7, -92, 10, -61, 64, 92, 14, -102, 70, 43, -91, -83, 99, 98, 37, -40, 58, 101, -118, 122, 2, -48, -21, 60, -83, -92, -78, -40, -20, -64, 117, -18, 104, 42, 64, -17, 20, 15, 14, 77, 6, 20, -51};
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
    msg.setTimeStamp(0.113529695174);
    msg.setSource(65219U);
    msg.setSourceEntity(233U);
    msg.setDestination(62752U);
    msg.setDestinationEntity(122U);
    msg.req_id = 30565U;
    msg.ttl = 21696U;
    msg.destination.assign("WFKNXNYCNEYYBHQKEQDQCXFUOYRDPMQFBVMDF");
    const char tmp_msg_0[] = {93, -73, 41, 15, -8, 74, -51, 104, 34, -9, 110, 39, 72, 45, -94, 36, -121, -79, -38, 22, -112, 52, -92, -93, -111, 31, -81, 37, 89, -20, 113, 67, -30, -39, -27, 13, 97, 8, -59, -64, 63, -28, -5, -93, -120, -57, 78, -67, -36, 110, 99, 1, 61, -30, -38, 1, 49, -47, 62, 68, -128, -44, -108, 103, -78, 99, -90, -86, 34, -16, -48, 55, 16, 11, 79, 0, -4, -124, 22, -114, 37, -69, 119, -103, -91, -28, 40, 100, -98, 124, -39, -15, -37, 14, 119, 5, 4, -24, 84, -57, 98, -5, 125, 112, -78, 16, 6, 23, -88, -5, -72, 55, 52, 88, 26, -102, -29, -31, 73, 9, 50, 122, 86, 123, 82, -127, -78, -84, -20, -2, -5, 32, 97, 58, 126, -17, 44, 6, 31, -75, 55, 81, -123, 0, -29, -65, -45, -43, -97, 117, -67, 8, 64, -123, 122, 65, 35, 63, 109, 60, -73, 2, 114, 34, -8, 35, 60, 2, 78, -65, -77, 41, 105, 4, -70, 22, -18, 125, -110, -72, -47, 80, 8, 119, 83, -125, -33, 41, 89, 105, -69, 93, -99, 66, 24, -75, -99, -37, -27, 101, -10, 52, 30, -32, -80, 66, -20, 38, -21, -92, 117, -41, -19, 105, 77, -128, -28, -49};
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
    msg.setTimeStamp(0.0969653712021);
    msg.setSource(4472U);
    msg.setSourceEntity(6U);
    msg.setDestination(19904U);
    msg.setDestinationEntity(35U);
    msg.req_id = 8745U;
    msg.ttl = 47631U;
    msg.destination.assign("FWILUJCGPKKIWMVXNMPOEMIZRQVOSFOASJWRHKHZOEROGRPKQBGUUJNQGDYSCVZDTGJYRWEXVDIJFSBHYTUYPZUDTHMLNNKVEMZMNUSDOYABRFWFLLVPXSNGAKPTHGCTEVWIAQCACVHAUZXJOGBKHQXUIFKQXFLNGRHLCQXJYWLMC");
    const char tmp_msg_0[] = {58, 97, 107, 56, 92, -18, -118, -67, 20, 98, -109, 118, 67, -104, -15, -106, 90, -67, -25, 116, -53, 102, 43, -95, 86, 120, 36, 117, 126, -127, -125, 12, -55, -26, 55, -87, -114, 100, -127, -7, 61, 54, -61, 32, 100, 58, 48, 92, -117, -125, -76, 1, 118, -109, 56, 10, -109, 18, -110, -6, -52, -76, 62, 2, -37, -70, -22, -40, -98, 91, -58, 96, -11, -27, -29, 125, 7, 6, 50, 55, 124, -84, 19, -86, -58, -127, 23, 21, 9, 57, -35, 16, -72, -24, 21, 70, 89, 22, -84, -84, 79, -100, -52, -52, 105, 64, -101, 33, 56, 35, -56, 41, -62, 114, 55, 103, -43, -107, -84, -96, -33, 54, -60, 83, 38, -72, -87, 102, 61, -64, -50, 108, 93, 104, -43, 76, -48, 54, 63, 9, 95, -27, 72, 92, 44, -120, -126, 96, -102, -37, -98, 91, -76, -19, 20, -12, 93, -18, -49, 35, 19, -97, -46, 47, 1, -113, -101, 88, -88, -21, 100, -105, -74, 122, 78, -41, -7, 30, -73, 57, 64, 13, 4, -119, -114, 118, -127, 126, -68, 49, -51, 68, 95, 9, -64, -36, -73, 79, -7, 103, -76, 41, 107, 64, 93, 44, -15, 7, 81, -69, 67, -114, 107, 53};
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
    msg.setTimeStamp(0.283356937343);
    msg.setSource(16371U);
    msg.setSourceEntity(59U);
    msg.setDestination(16457U);
    msg.setDestinationEntity(42U);
    msg.req_id = 40376U;
    msg.ttl = 33380U;
    msg.destination.assign("ZEASXUXPDMAJEQHODKVCTHGYQKJTLANKPYSGVEKHPRREUKTXJLWSESAFAFSANMFHOYWJOKLRILVYVLRYCENORCCJVRXFNTWQGVCLHVHMFOTFHWDMLFMBEZURP");
    const char tmp_msg_0[] = {96, -31, 62, 103, 67, -41, -48, 121, 75, 116, 75, -43, 86, 29, -98, 57, -101, 21, -44, -43, 18, 39, 23, -108, 57, 107, 121, 12, -23, 13, 85, -3, 26, -32, -88, -32, -9, 25, -12, -65, 1, -97, 116, -37, 10, -49, -69, -23, -64, -75, 94, 90, -72, 1, 61, 47, 29, 18, 95, -117, -95, -112, -70, 26, -5, 87, 92, -29, 78, 81, 115, -69, -84, 81, -114, -75, -113, 63, -84, -93, -53, -8, 8, 110, 62, 70, -72, 87, -34, 77, -102, 20, -79, 76, -81, 53, 111, -77, -67, -6, -125, -29, -19, 82, -128, 67, 66, 76, 100, -97, -69, 69, -27, 27, 25, -42, -40, -73, -4, 11, 63, 117, -24, -52, -89, -89, -113, 55, -107, -126, -102, 48, -63, -70, -114, 25, 110, -109, 71, -9, 62, 57, -42, 4, -106, -81, -72, 15, 29, 58, -34, 85, 92, -119, 96, 81, -21, -119, 101, 28, -101, -52, -124, -42, -117, 46, 98, -60, 59, -94, -40, -99, 122, 3, -94, 41, -7, 85, -74, -122, 102, -26, 24, 76, -86, -37, -46, -12, 79, 43, 118, 32, 10, 27};
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
    msg.setTimeStamp(0.641986390292);
    msg.setSource(29057U);
    msg.setSourceEntity(235U);
    msg.setDestination(52275U);
    msg.setDestinationEntity(191U);
    msg.req_id = 62929U;
    msg.status = 196U;
    msg.text.assign("ANVETSMVWWCCUBAPIYOPRUHXKZJNNLNHJVKBJCUTFKAHNMTQTYCNKQFEPYNAESPYUBDJYCBGHUIQSHFGSRHLOBQGGSNPRXIUTHWXVDFWXDZMMRTEFQSW");

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
    msg.setTimeStamp(0.784084295256);
    msg.setSource(43930U);
    msg.setSourceEntity(5U);
    msg.setDestination(24170U);
    msg.setDestinationEntity(65U);
    msg.req_id = 31835U;
    msg.status = 192U;
    msg.text.assign("ZOHEMHCCWKLVLGZKNZHDEWXIJIMOTWRZXNZYWVQBGNEDRXHTAXGFJGBQKLULQYSGOPTFQLGJTRATEIKOSAXVYZFFDMOKAKS");

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
    msg.setTimeStamp(0.321668735442);
    msg.setSource(47188U);
    msg.setSourceEntity(51U);
    msg.setDestination(21355U);
    msg.setDestinationEntity(167U);
    msg.req_id = 44373U;
    msg.status = 41U;
    msg.text.assign("NYEGXFHNGTBQMLFWTWMAZARKGZFDKMMNSHOCWINWFBQVBRMTJGLRYZWPFZLQGZWPXYGGJJPDOPCHNCVVVQDCDKOFURUSDRDYDSBSIYXUKCSKABNEFXSALYYDIUCKUJTXZXU");

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
    msg.setTimeStamp(0.313511692976);
    msg.setSource(38813U);
    msg.setSourceEntity(161U);
    msg.setDestination(5287U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("XTJHFKELXLLLIDTTBOOCXJWDMYUTSUVPWGWLEPXYOUJORATCVMGRXFKBCZJJPQATVVDZYEWLZQGQQVTJQIMHKPWXAZFLMOHRSSXUNBTFKNHUOJMOSOCLXSPZKXXHGDZECFGFONIMPEAREBJCVUJKIQDNDSBRV");
    msg.links = 3561697113U;

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
    msg.setTimeStamp(0.941720762026);
    msg.setSource(57789U);
    msg.setSourceEntity(37U);
    msg.setDestination(53003U);
    msg.setDestinationEntity(65U);
    msg.group_name.assign("ZOMJVULBUBASGCORKKMSHYZLBBFFAYHAWRPMEPLXLVKSVUGRKJRFTBUDIFCFSMLBMLZNHWJDPEFWTDBHDCGWSVJIIQWOWSYPVANHAVMYRUSLXBNDDEHEZONQTYJKZUTCXWKCADYWMVYKGHNUZVYBWWQQRTIJUSQZOTFJACLGXYPNQXOOXIJGCNUMY");
    msg.links = 1552548251U;

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
    msg.setTimeStamp(0.361827935629);
    msg.setSource(33615U);
    msg.setSourceEntity(196U);
    msg.setDestination(16747U);
    msg.setDestinationEntity(8U);
    msg.group_name.assign("UUJQIFTBUURNXOLMVLOJWBHJTDWLMWNQTRYQBTFUACBRPWKAOXHADHYOQPRBRHKJVZAOMQYKBRGKJLICPKGKVVPKOCWGSPDIXNZJVDFENL");
    msg.links = 4289961571U;

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
    msg.setTimeStamp(0.761185140423);
    msg.setSource(9623U);
    msg.setSourceEntity(152U);
    msg.setDestination(63330U);
    msg.setDestinationEntity(144U);
    msg.groupname.assign("XQZBQECUBXQAIIYBDMUFIXONFEWFLYXTSSRVRVQMMMMHYCCAKGPJXGDGCERPHPAPOMJHLPVOPJRZODONTOAQQHRWIDSUVKIAUNRPUEVASFJVLRCKVWJUBWGWFANXCYQURICHWUNDXNKTSEKMTFJEOKTVQFHYSIQZGBYTELZQTOYBOWHFWUNKSZZCBGSSRBPSHDETYIKFYCHMKNDELKPFALIHW");
    msg.action = 143U;
    msg.grouplist.assign("IEKOHAIXZLHAEMAUQAKYMNDWGHCNBJHPHMMXWHZGEWDDCYAAKAHYJECSOPVMKPIBRSLZMKYNBJPKCSVYEWUFYLTQGZGUFGIRRVAZDWSWQCOMFWBRWXUNYVTMCNXEDDVQGSSHTECINNUTHRUOBOEKZVRPNMSRXXPJJGQDSMLUZQHFRABROXDQVXUQINIYGWLLFIBJSFRZLBTOL");

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
    msg.setTimeStamp(0.538573101525);
    msg.setSource(47269U);
    msg.setSourceEntity(164U);
    msg.setDestination(52302U);
    msg.setDestinationEntity(183U);
    msg.groupname.assign("NJSXSPKHVKHPQQIUWOFJELYAJMADUBIZSBWEUTEYCDYXPSBCMXQYXFLIBNRRNCEHFXBVGTDZJKJSQWKBCHFMZQFPKQLRMAITAFGXISRUQGPCJCSBIGGXNFZZZYZPOGGZAMDHHCBOKNKORLCLF");
    msg.action = 190U;
    msg.grouplist.assign("OROPOVYKWHAJEQWEBIVZDDOADWMXWMINXAPRGVIGFCEPUSIUDNPOYKCPPLXONYLCWKZTTBJFACJOWHXTJBXFKEWZLJUUNBNGMNQOFDILFIRJABPBSYJEZVQLTIYMSBPHPHXTSZMMCLQKY");

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
    msg.setTimeStamp(0.323282728578);
    msg.setSource(24180U);
    msg.setSourceEntity(206U);
    msg.setDestination(49369U);
    msg.setDestinationEntity(55U);
    msg.groupname.assign("UQFEZWPUDBVHDMTSGPFSSCUE");
    msg.action = 111U;
    msg.grouplist.assign("IRFDCSCTGUUQSTTTFLVSMWVMPPETWQLPKHJUBJWZMDQVJKKOBGGEDPRBQFQYIOOAAUUVSSBTIWLMUFNCAAXKODFHNENHIAXVDGHPTNLRHZYMCUWAORJFRELNPCKXBMOUKFY");

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
    msg.setTimeStamp(0.161086319111);
    msg.setSource(41663U);
    msg.setSourceEntity(61U);
    msg.setDestination(50080U);
    msg.setDestinationEntity(111U);
    msg.value = 0.944763988587;
    msg.sys_src = 52795U;

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
    msg.setTimeStamp(0.0541037003573);
    msg.setSource(32367U);
    msg.setSourceEntity(99U);
    msg.setDestination(13517U);
    msg.setDestinationEntity(105U);
    msg.value = 0.857008847222;
    msg.sys_src = 62181U;

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
    msg.setTimeStamp(0.6905376641);
    msg.setSource(60802U);
    msg.setSourceEntity(133U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(230U);
    msg.value = 0.135003985577;
    msg.sys_src = 54396U;

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
    msg.setTimeStamp(0.63458566451);
    msg.setSource(7868U);
    msg.setSourceEntity(247U);
    msg.setDestination(4772U);
    msg.setDestinationEntity(125U);
    msg.value = 0.190361545476;
    msg.units = 190U;

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
    msg.setTimeStamp(0.236771186696);
    msg.setSource(23220U);
    msg.setSourceEntity(18U);
    msg.setDestination(13152U);
    msg.setDestinationEntity(176U);
    msg.value = 0.493210123676;
    msg.units = 143U;

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
    msg.setTimeStamp(0.866860140989);
    msg.setSource(58159U);
    msg.setSourceEntity(238U);
    msg.setDestination(53837U);
    msg.setDestinationEntity(3U);
    msg.value = 0.0288073088323;
    msg.units = 80U;

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
    msg.setTimeStamp(0.0205636257567);
    msg.setSource(8575U);
    msg.setSourceEntity(147U);
    msg.setDestination(30416U);
    msg.setDestinationEntity(3U);
    msg.base_lat = 0.0988116753103;
    msg.base_lon = 0.925738206304;
    msg.base_time = 0.386123363368;

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
    msg.setTimeStamp(0.18082821326);
    msg.setSource(54070U);
    msg.setSourceEntity(31U);
    msg.setDestination(40843U);
    msg.setDestinationEntity(12U);
    msg.base_lat = 0.159264822322;
    msg.base_lon = 0.166647215154;
    msg.base_time = 0.919241090402;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 24369U;
    tmp_msg_0.destination = 26901U;
    tmp_msg_0.timeout = 0.10132333327;
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 62242U;
    tmp_tmp_msg_0_0.name.assign("HXGPQOFODEFDZKSYLWVPZZGBUPWFGSGESZBNAUQQFHMPLMSFHXUQXRVNDBHZNNSFQISEDUIVJVEZSSHCQRUDQELNWDTRXWXOOMJOJOTQVWAWARIDUCHMTYPCNLUILIVIRGIR");
    tmp_tmp_msg_0_0.custom.assign("IFUKGOPIWSMXHHSCXXCALMLAJFRWGTRUMWWUWGVAIGYUEODOZGAZMRNVITXBEGUJKYIUNHQWANXYWCAAMLJTMABDKQBLBHXVEVNVSMYYGJQIFBHKQGODFICZSJRVTDSRQUCBHFQKSTY");
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
    msg.setTimeStamp(0.0343122589854);
    msg.setSource(4108U);
    msg.setSourceEntity(153U);
    msg.setDestination(16579U);
    msg.setDestinationEntity(190U);
    msg.base_lat = 0.280959388765;
    msg.base_lon = 0.809304981721;
    msg.base_time = 0.0742214972466;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 3627U;
    tmp_msg_0.priority = 86;
    tmp_msg_0.x = 5074;
    tmp_msg_0.y = -894;
    tmp_msg_0.z = 20461;
    tmp_msg_0.t = -32110;
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 48036U;
    tmp_tmp_msg_0_0.lat = 0.65760511869;
    tmp_tmp_msg_0_0.lon = 0.693467593458;
    tmp_tmp_msg_0_0.z = 0.890511050975;
    tmp_tmp_msg_0_0.z_units = 97U;
    tmp_tmp_msg_0_0.duration = 8034U;
    tmp_tmp_msg_0_0.speed = 0.971981745378;
    tmp_tmp_msg_0_0.speed_units = 227U;
    tmp_tmp_msg_0_0.type = 72U;
    tmp_tmp_msg_0_0.radius = 0.181994781938;
    tmp_tmp_msg_0_0.length = 0.4823809897;
    tmp_tmp_msg_0_0.bearing = 0.111791909468;
    tmp_tmp_msg_0_0.direction = 159U;
    tmp_tmp_msg_0_0.custom.assign("MAVUVREWEJTOQKFJMZAPEJSNBRHXDOBXDGSSLSVCNNRZAIBDUCJWVHFYHTESCRGQUTJUBIFVFBRROPZSMNTVTRWDGRYUVWXKJCKWMYMMXNHZCVRHTWZWIYOAPDPQEFRXPUNGYKCEYLBSQKLLI");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.691960576355);
    msg.setSource(8692U);
    msg.setSourceEntity(176U);
    msg.setDestination(64514U);
    msg.setDestinationEntity(70U);
    msg.base_lat = 0.987840956777;
    msg.base_lon = 0.270217625436;
    msg.base_time = 0.918064439767;
    const char tmp_msg_0[] = {-32, 26, 66, 100, -23, 54, -25, 113, 16, 102, -50, 101, -112, 36, 91, 107, 35, 14, 84, -49, -112, -25, -76, -41, -112, 64, -122, -72, 91, -66, 40, -17, 33, -2, -2, 43, -46, 29, -58, 26, -38, -119, 32, 92, -127, -45, -113, -70, 107, -105, 81, 73, -75, 56, -58, -5, -75, 7, 92, -56, 67, -11, -31, -28, -72, -90, 50, 125, 68, 69, 115, -88, -67, 54, 31, 97, 97, -41, -34, -64, -68, 90, 9, 118, 106, 53, -90, 90, -50, -123, 78, 80, 28, 40, -24, -70, 40, -22, -54, 12, 54, 9, -121, -118, -98, 115, 104, -19, -47, 53, 34, -64, 22, 26, -71, -94, 73, 53, -56, -128, -126, 47, -65, 58, 9, 103, 4, -125, -61, 68, -9, 80, 21, -15, 17, 12, -96, -78, 17, -97, 12};
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
    msg.setTimeStamp(0.0552293837912);
    msg.setSource(60305U);
    msg.setSourceEntity(82U);
    msg.setDestination(57981U);
    msg.setDestinationEntity(20U);
    msg.base_lat = 0.867966957284;
    msg.base_lon = 0.278291127266;
    msg.base_time = 0.304917493231;
    const char tmp_msg_0[] = {-123, -25, -53, 32, 15, -123, -93, -52, -39, 94, 38, -3, 41, -7, 23, 39, 104, -41, 107, -84, 120, 118, 43, 125, 42, -58, 124, -119, 32, -54, 124, -9, -41, -116, -50, 122, 103, 125, -16, -78, -10, -58, -25, -103, -97, 45, 123, -108, 55, 51, -26, 52, 124, 126, 108, -24, 100, 55, -84, -39, 102, 109, 45, 89, 14, -22, 74, -126, -13, 2, 44, 87, -32, -45, -123, -122, 76, 109, -96, -2, -60, 106, -82, -117, 76, 35, 113, -47, -91, -12, -126, 126, 56, -109, -41, 58, -23, -90, -111, -24, 116, 2, -102, 21, 84, 70, -46, 16, 5, 99, 18, 7, -39, -77, -46, -76, 107, 124, -111, -62, -38, 95, 24, -122, 55, -16, -97, 20, 58, 47, -122, 96, 105, 53, 0, -63, 88, -72, -117, -62, -73, -30, -105, -1, -11, 21, 42, -69, -88, 17, -30, 44, 45, 57, 30, 116, 6, 82, -88, -106, 47, -14, -81, 75, -33, -123, 55, -75, 37, 125, -92, -126};
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
    msg.setTimeStamp(0.38623701542);
    msg.setSource(45581U);
    msg.setSourceEntity(202U);
    msg.setDestination(17452U);
    msg.setDestinationEntity(225U);
    msg.base_lat = 0.74495551715;
    msg.base_lon = 0.830252177029;
    msg.base_time = 0.0396099657167;
    const char tmp_msg_0[] = {-25, -75, -5, 100, -23, 59, -67, -106, 108, -81, -44, -93, -107, -74, 98, 122, 95, 58, -123, 88, 22, -20, 120, -77, 123, -118, 26, 76, 38, 55, 34, -120, -42, -9, -95, -108, 78, 8, -2, 125, 110, -93, 119, 77, -94, -101, 23, 123, -92, 21, -87, 24};
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
    msg.setTimeStamp(0.159674234729);
    msg.setSource(36040U);
    msg.setSourceEntity(121U);
    msg.setDestination(57969U);
    msg.setDestinationEntity(32U);
    msg.sys_id = 26349U;
    msg.priority = 108;
    msg.x = 22216;
    msg.y = 17725;
    msg.z = -14922;
    msg.t = 8936;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 27340U;
    tmp_msg_0.bearing = 0.981293126413;
    tmp_msg_0.elevation = 0.971676907638;
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
    msg.setTimeStamp(0.0822994730167);
    msg.setSource(57790U);
    msg.setSourceEntity(241U);
    msg.setDestination(61339U);
    msg.setDestinationEntity(108U);
    msg.sys_id = 54795U;
    msg.priority = 37;
    msg.x = 7102;
    msg.y = 30910;
    msg.z = -2321;
    msg.t = -212;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.00178857809517;
    tmp_msg_0.reason = 237U;
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
    msg.setTimeStamp(0.0847359514286);
    msg.setSource(40907U);
    msg.setSourceEntity(220U);
    msg.setDestination(60701U);
    msg.setDestinationEntity(34U);
    msg.sys_id = 11179U;
    msg.priority = -84;
    msg.x = -12904;
    msg.y = -17654;
    msg.z = 8976;
    msg.t = 24920;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 239U;
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
    msg.setTimeStamp(0.121167998005);
    msg.setSource(55675U);
    msg.setSourceEntity(124U);
    msg.setDestination(39399U);
    msg.setDestinationEntity(145U);
    msg.req_id = 47275U;
    msg.type = 234U;
    msg.max_size = 11725U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.499466088055;
    tmp_msg_0.base_lon = 0.428295058101;
    tmp_msg_0.base_time = 0.717416759598;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 28342U;
    tmp_tmp_msg_0_0.priority = -56;
    tmp_tmp_msg_0_0.x = -22968;
    tmp_tmp_msg_0_0.y = -26189;
    tmp_tmp_msg_0_0.z = -2814;
    tmp_tmp_msg_0_0.t = 9886;
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 34269U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.323891747761;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.318056978121;
    tmp_tmp_tmp_msg_0_0_0.z = 0.475459997467;
    tmp_tmp_tmp_msg_0_0_0.z_units = 74U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.788465517089;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.614033886906;
    tmp_tmp_tmp_msg_0_0_0.duration = 40U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.684840591363;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 31U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.856973206298;
    tmp_tmp_tmp_msg_0_0_0.direction = 63U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NXRNRAKQGFVZHWISADUNPZFCYJWLVBQERNBOTGYCWAGFKEFPLHLSKMCRKKNINOIDIRJMMJTMQSEGORVTXZULL");
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
    msg.setTimeStamp(0.0172831390072);
    msg.setSource(26117U);
    msg.setSourceEntity(100U);
    msg.setDestination(62132U);
    msg.setDestinationEntity(63U);
    msg.req_id = 47798U;
    msg.type = 104U;
    msg.max_size = 27590U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.787337445198;
    tmp_msg_0.base_lon = 0.936556261281;
    tmp_msg_0.base_time = 0.657296711051;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 45888U;
    tmp_tmp_msg_0_0.destination = 30718U;
    tmp_tmp_msg_0_0.timeout = 0.532372253677;
    IMC::AcousticSystems tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.list.assign("DLTWEVVAXBHKSSQRGEZICAYZISMOLJBKPZMVRVIJONJJMHEZBJDOKGVUWBSAUYJQPMGLGYGNRFNKCNKZLAEPODMUYOTMINXWGNDWVHQGCAQLSDIYECKTHXZZURKAJFFHWKTTORURRCHXRSEQIMPGYJTMYXAWCEWCTOPTOPBNXGBASB");
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
    msg.setTimeStamp(0.298076015918);
    msg.setSource(32921U);
    msg.setSourceEntity(97U);
    msg.setDestination(25044U);
    msg.setDestinationEntity(234U);
    msg.req_id = 24715U;
    msg.type = 152U;
    msg.max_size = 327U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.14685632629;
    tmp_msg_0.base_lon = 0.223747666464;
    tmp_msg_0.base_time = 0.386419309911;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 54459U;
    tmp_tmp_msg_0_0.destination = 47064U;
    tmp_tmp_msg_0_0.timeout = 0.0884587414552;
    IMC::IndicatedSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.937586214782;
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
    msg.setTimeStamp(0.130070387333);
    msg.setSource(10368U);
    msg.setSourceEntity(200U);
    msg.setDestination(55704U);
    msg.setDestinationEntity(76U);
    msg.original_source = 57397U;
    msg.destination = 31096U;
    msg.timeout = 0.324077674206;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("FJVWWLYGXRZFRDDCNHOBSSHQMP");
    tmp_msg_0.lat = 0.565019307995;
    tmp_msg_0.lon = 0.19823883315;
    tmp_msg_0.z = 0.748891200558;
    tmp_msg_0.z_units = 101U;
    tmp_msg_0.cog = 0.178733229774;
    tmp_msg_0.sog = 0.0639897358487;
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
    msg.setTimeStamp(0.322602106558);
    msg.setSource(4366U);
    msg.setSourceEntity(40U);
    msg.setDestination(57169U);
    msg.setDestinationEntity(93U);
    msg.original_source = 3789U;
    msg.destination = 28896U;
    msg.timeout = 0.907719437128;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 177U;
    tmp_msg_0.frag_number = 94U;
    tmp_msg_0.num_frags = 55U;
    const char tmp_tmp_msg_0_0[] = {-56, -29, 101, -94, -28, -11, -103, -51, -1, 10, 124, 83, -79, 12, 21, -54, -102, 50, 123, -49, 24, 98, -67, -79, -124, 122, -40, 7, 115, -16, -62, -60, -95, 39, -35, 97, 61, -109, 20, 34, 6, -95, -102, 76, -38, -37, 82, 108, 12, -49, 69, 18, -125, 105, -23, 45, 75, 37, -67, -16, 90, -62, 120, -94, -69, -64, -95, -10, -11, -73, 55, 23, 35, -25, 79, -33, -100, -101, -7, -54, 88, 37, -79, -125, 105, -52, -41, 0, -2, 36, 97, 125, 30, 36, -57, -100, 10, -28, -4, -39, -55, 45, 61, 7, -94, -33, -71, 6, 35, -64, 5, -128, 56, 65, 87, -61, 82, -54, 14, -3, -123, 48, 112, 35, 18, -94, -53, -62, -14, -71, 94, 14, 0};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.141683915469);
    msg.setSource(20142U);
    msg.setSourceEntity(224U);
    msg.setDestination(54639U);
    msg.setDestinationEntity(55U);
    msg.original_source = 63581U;
    msg.destination = 50604U;
    msg.timeout = 0.11634618973;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 468U;
    tmp_msg_0.ttl = 13076U;
    tmp_msg_0.destination.assign("LRNFQSEUXDGHMFWJKZRTOLOGSXTJDTACMSHOIBHJZACILGIJZIURLVYEATDWBMTXPMAIEGTBXLYBVCPCWKXHKIFYCKDDBBEYXGRJFQFNJOBPTLVYLYMKXUUZQBWDRCKKQUJAURNBEDANDOZZPEVWLQCFM");
    const char tmp_tmp_msg_0_0[] = {96, 39, 61, 69, 119, 24, 104, -41, -123, 110, -111, 20, -55, -79, 116, -93, -57, -87, 32, 57, 94, 53, -32, -94, -52, -40, -128, 37, 84, 16, -123, 52, -14, 88, -1, -40, 93, -76, -3, -57, -58, -47, -106, -45, -120, -80, -74, -64, 86, 1, 37, 54, 55, 93, -67, 112, 11, 58, -40, -74, -108, -70, 84, -42, 31, 29, -18, -10, -36, -101, -31, -45, -94, 122, 86, 36, -100, -128, 23, -86, -107, -48, -71, 3, 67, -95, 82, 96, 49, -8, -99, -96, -99, 72, -50, -81, 83, -109, 110, 77, 98, -57, -71, 28, -22, 73, -59, -57, 47, -6, 101, 32, -42, -121, -21, -43, 112, -107, -21, 110, -100, -83, 27, 72, 120, 72, 1, -56, -109, -118, 27, 80, 36, 108, -10, -78, 4, 5, -23, 121, -59, -54, -26, -119, 16, -26, -71, -63, -12, -49, 97, 94, -69, -114, -32, -21, 31, -93, -117, 78, -75, 78, -73, 117, -118, 104, -128, -73, 94, -39, 0, 74, 58, 59, 126, -89, 2};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.994360815941);
    msg.setSource(53186U);
    msg.setSourceEntity(78U);
    msg.setDestination(38550U);
    msg.setDestinationEntity(201U);
    msg.id = 146U;
    msg.range = 0.0497212855299;

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
    msg.setTimeStamp(0.145600202177);
    msg.setSource(4043U);
    msg.setSourceEntity(24U);
    msg.setDestination(33066U);
    msg.setDestinationEntity(92U);
    msg.id = 228U;
    msg.range = 0.0356801295308;

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
    msg.setTimeStamp(0.527771996548);
    msg.setSource(40236U);
    msg.setSourceEntity(29U);
    msg.setDestination(58855U);
    msg.setDestinationEntity(29U);
    msg.id = 40U;
    msg.range = 0.14574908043;

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
    msg.setTimeStamp(0.0820811435831);
    msg.setSource(7168U);
    msg.setSourceEntity(245U);
    msg.setDestination(42887U);
    msg.setDestinationEntity(123U);
    msg.beacon.assign("WNUETUXPXGJBNJFT");
    msg.lat = 0.488257108429;
    msg.lon = 0.0154953381514;
    msg.depth = 0.364930579575;
    msg.query_channel = 223U;
    msg.reply_channel = 185U;
    msg.transponder_delay = 156U;

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
    msg.setTimeStamp(0.00838892354317);
    msg.setSource(33289U);
    msg.setSourceEntity(161U);
    msg.setDestination(31361U);
    msg.setDestinationEntity(122U);
    msg.beacon.assign("HZRTKWJCFTRPDINQFJDXHGALQQCJFOTQVGLEBSXKUEKRZZPMXJBCYOWYCKPPLLOOBXYGJOAIHMFPSRUNWJYEHVSMCMXQTMKAQXSTIIKTKYVNOBENENTMQGDYPBXJQONIVXVVSRWCZCEARUAZUTDKCHMEDBIUQZMVYGZLBGOSAYGLCAFZRBPLOIUEIWUBDWHNXWHKXRDLBUKHUTWFNSZ");
    msg.lat = 0.632541610071;
    msg.lon = 0.129446460733;
    msg.depth = 0.807717814654;
    msg.query_channel = 33U;
    msg.reply_channel = 104U;
    msg.transponder_delay = 117U;

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
    msg.setTimeStamp(0.0796443986821);
    msg.setSource(35429U);
    msg.setSourceEntity(59U);
    msg.setDestination(50870U);
    msg.setDestinationEntity(148U);
    msg.beacon.assign("BUTSUOYXBCARHKAJSJNIYEYQVUGPJLMFMMBFYKYGMTVVVKSFQALXLZZWGGGEWMUJYDHPHAX");
    msg.lat = 0.0885891386955;
    msg.lon = 0.91414825939;
    msg.depth = 0.957287918963;
    msg.query_channel = 5U;
    msg.reply_channel = 167U;
    msg.transponder_delay = 32U;

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
    msg.setTimeStamp(0.178994541763);
    msg.setSource(64351U);
    msg.setSourceEntity(110U);
    msg.setDestination(25745U);
    msg.setDestinationEntity(139U);
    msg.op = 77U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EOCEMAIZKEIXOFMAOIQTQPJJPVQUJWUBFRFNGJBPFTTKAZVVRYDRSRNTIVYJCXYXTTWNTGAYWIJUHKXCIRPDLNDEVMNDQVACIBHDUNGKIGRMZLGSEWYFLSBDAZFRCWAFCEXPKMJEJSWXUWHVXUNZCZLTSVMUOHMYGOZSWQGRPJYVSQFWYOHBOKHQXKHGRHFWBBQEKCLNTBMIYHLAOXZCZDMUK");
    tmp_msg_0.lat = 0.852644915857;
    tmp_msg_0.lon = 0.522647612956;
    tmp_msg_0.depth = 0.666160059111;
    tmp_msg_0.query_channel = 134U;
    tmp_msg_0.reply_channel = 67U;
    tmp_msg_0.transponder_delay = 167U;
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
    msg.setTimeStamp(0.196291313371);
    msg.setSource(8829U);
    msg.setSourceEntity(46U);
    msg.setDestination(34223U);
    msg.setDestinationEntity(95U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.36448116173);
    msg.setSource(45602U);
    msg.setSourceEntity(196U);
    msg.setDestination(19572U);
    msg.setDestinationEntity(28U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.491974495594);
    msg.setSource(60321U);
    msg.setSourceEntity(55U);
    msg.setDestination(12217U);
    msg.setDestinationEntity(51U);
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 175U;
    tmp_msg_0.zoom = 68U;
    tmp_msg_0.action = 9U;
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
    msg.setTimeStamp(0.428910144893);
    msg.setSource(47488U);
    msg.setSourceEntity(128U);
    msg.setDestination(60016U);
    msg.setDestinationEntity(56U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1934561343U;
    tmp_msg_0.start_lat = 0.350120441871;
    tmp_msg_0.start_lon = 0.631665502698;
    tmp_msg_0.start_z = 0.306143272685;
    tmp_msg_0.start_z_units = 196U;
    tmp_msg_0.end_lat = 0.133085154787;
    tmp_msg_0.end_lon = 0.455792102641;
    tmp_msg_0.end_z = 0.589694979856;
    tmp_msg_0.end_z_units = 90U;
    tmp_msg_0.speed = 0.438497141479;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.lradius = 0.959522048072;
    tmp_msg_0.flags = 244U;
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
    msg.setTimeStamp(0.984874883323);
    msg.setSource(42648U);
    msg.setSourceEntity(53U);
    msg.setDestination(48632U);
    msg.setDestinationEntity(182U);
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.817009674772;
    tmp_msg_0.y = 0.434531111584;
    tmp_msg_0.z = 0.626617195984;
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
    msg.setTimeStamp(0.345423316216);
    msg.setSource(34495U);
    msg.setSourceEntity(136U);
    msg.setDestination(48971U);
    msg.setDestinationEntity(16U);
    msg.op = 236U;
    msg.system.assign("RNHNSEJYMFPJPIRITRHQHSWWWSKGUOTKRDXNDGTIIEOTLBRCMIXZ");
    msg.range = 0.641097320785;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("RNNKOXHAZIAUXZMHGZPDNJFYSDHOWZGTVNMSMZBCZPYGEVIXGRNSXQJVBUPSERJDYQGZTHRXZOYTAHNCPFQPMYQVWKMRCFLOIMWFIJNSPRYQDEUWKFWCBNWASMZODJIUTJBYGWODKGLRMFWLSTPVMXBFVTORKXULRAUDCQPTIBGLCVSYKJOPHAIRLHAEUX");
    tmp_msg_0.rssi = 0.360651646527;
    tmp_msg_0.integrity = 12798U;
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
    msg.setTimeStamp(0.798775518743);
    msg.setSource(6962U);
    msg.setSourceEntity(163U);
    msg.setDestination(23122U);
    msg.setDestinationEntity(111U);
    msg.op = 194U;
    msg.system.assign("WPAXLOMKGNJRMUORUDSDPVWHMJFIOXGBSZYRPFTSVHIYYGFOIAMGSEQBEMQZIZLKPZCZRCFVSEYHHLXVICUYVDRE");
    msg.range = 0.440149900774;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 10599U;
    tmp_msg_0.custom.assign("DUJISPWALKSLTQCAKIWTCJPTFRXMKQHYANCCJKTDVIBGGPUPVKRWRQBRYYNLBVJVNVIDSEAYVCLGPKECNYSJIFAFSDMFMOWDMJADBFVQNKXSNZQZOOBPPNRMIDJCGXYEZTHUBHCHEHXUQGQZIXNVUBAERJXORZGGEUMHNZLJRAFSKFBFTCVZRAWUQEODCM");
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
    msg.setTimeStamp(0.486299848853);
    msg.setSource(59932U);
    msg.setSourceEntity(153U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(136U);
    msg.op = 51U;
    msg.system.assign("JBMJSODXYVZBBWSFUBOIUHUQOGWEPLSTFRKSMDFMEIIPMQRJXGPZWSLUYXHTZRXGQDIRTSANWWXBFHHGKLLGJWZALJYTLLOEDYEKVEGCITEJQKTKZRKR");
    msg.range = 0.852920746678;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 10268U;
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
    msg.setTimeStamp(0.955000171786);
    msg.setSource(49607U);
    msg.setSourceEntity(17U);
    msg.setDestination(38128U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.0849398111593);
    msg.setSource(448U);
    msg.setSourceEntity(81U);
    msg.setDestination(47625U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.633621744791);
    msg.setSource(42594U);
    msg.setSourceEntity(60U);
    msg.setDestination(24914U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.403920188767);
    msg.setSource(21312U);
    msg.setSourceEntity(245U);
    msg.setDestination(17580U);
    msg.setDestinationEntity(7U);
    msg.list.assign("AEYZIXRAEFEMLPUAQUHONOWPFPNOIOLTGSCBMRRNDJLNGCSIFPDJNHIETHFZFXKWKYJCLRIDSPNWAHYKWHUWYLTHXRRAMCLPGZVSHDRJKMYWGKQHOFQDJCKDBZLHOUETPPO");

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
    msg.setTimeStamp(0.871043606032);
    msg.setSource(58903U);
    msg.setSourceEntity(16U);
    msg.setDestination(39040U);
    msg.setDestinationEntity(117U);
    msg.list.assign("YDXIKBOXKQFDFAWWVWRPHCIZZNWIKDOGNBOLOUZJOFYABQXUSQREAUXXXDAKQVCRPNAVYXYLMHLTYJHMMJMKPLBLVYUHFPMKCWAOFSELDHKSJOWNSTIRHVSXXBEYZCEASPCGURREIUMZJFEHIKDPNWITEGBFWMJQRPCRZTANLRW");

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
    msg.setTimeStamp(0.286336669887);
    msg.setSource(1406U);
    msg.setSourceEntity(231U);
    msg.setDestination(31370U);
    msg.setDestinationEntity(187U);
    msg.list.assign("BFYDECZHVSLURORGOBKNGVSFXXPEWCMBDJUOMDUPHWOHTDMRZMLKVACOQBKYAGAXWAAKHKYFXHFRBCOIRKPGSQLNEFUJLJHYNT");

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
    msg.setTimeStamp(0.386972896891);
    msg.setSource(62883U);
    msg.setSourceEntity(27U);
    msg.setDestination(12586U);
    msg.setDestinationEntity(94U);
    msg.peer.assign("BFHAETJGUYHWHSLPLLBARENSRCBTMAQINHPSTRBXUFJSAYVOGJWVYDRXQNIMDPBHDKRJMMNLXXCCRHTEMNQMGUPAPSVOVQGDBAFFDUYVXSQUVWDELWECVZDRCJVISEKAJNHWXQDZOFREBZUZJBZGWBXJOICUYCKIWRNYKTOWFIOYNKQTKQCTILXUPTZGOMFLPIKJXREAEZKIZLMVNWKYGTDSTDICVHUOOYZPFAHLJOLGWPAHEM");
    msg.rssi = 0.549123848338;
    msg.integrity = 62564U;

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
    msg.setTimeStamp(0.0731963412621);
    msg.setSource(6322U);
    msg.setSourceEntity(153U);
    msg.setDestination(45445U);
    msg.setDestinationEntity(228U);
    msg.peer.assign("FTLXMJYSFLSFZVVOGQHVEKBUPDLMQCOCIXAZGHMXHPQWIGQCEMPUOUHOBVGDEDXLYTZGIMZRDDWJABKWRCJEHIVQSKPBYDRNMHQUPNHCUKHVPBGFODFRYFAWLTJYSNAFNVYHFKXCBMBHWZSBTWNZUBANYXOJXCUIJEJNDCQVTSYPXWCWTQERALOISEPFEGJDQJAZNLRA");
    msg.rssi = 0.969696590085;
    msg.integrity = 53967U;

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
    msg.setTimeStamp(0.911439158823);
    msg.setSource(8480U);
    msg.setSourceEntity(158U);
    msg.setDestination(9615U);
    msg.setDestinationEntity(220U);
    msg.peer.assign("JUSNFXTZZONRVKMYFDJWPHKACOXAIEYOZXMSJHHZMPBUHEATBEABIOQJRTCTNHARSDBUVBBEILCXPVVQEGRDNPIQJTHMEZGWGFFKIXYWJEUDKTSSZNCKQNNTKPWPWVRUDWFSCVXQBDQKOBICFSGMAAWMODUEYOCARHSFZLPHQRZFLLZOZQBYLGY");
    msg.rssi = 0.704942550971;
    msg.integrity = 551U;

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
    msg.setTimeStamp(0.575366960809);
    msg.setSource(38769U);
    msg.setSourceEntity(48U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(194U);
    msg.value = 9141;

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
    msg.setTimeStamp(0.949950831485);
    msg.setSource(40256U);
    msg.setSourceEntity(234U);
    msg.setDestination(39938U);
    msg.setDestinationEntity(8U);
    msg.value = 21566;

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
    msg.setTimeStamp(0.270762711608);
    msg.setSource(22915U);
    msg.setSourceEntity(180U);
    msg.setDestination(57041U);
    msg.setDestinationEntity(246U);
    msg.value = -11701;

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
    msg.setTimeStamp(0.08316352203);
    msg.setSource(33508U);
    msg.setSourceEntity(171U);
    msg.setDestination(2281U);
    msg.setDestinationEntity(240U);
    msg.value = 0.897688078877;

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
    msg.setTimeStamp(0.129692616984);
    msg.setSource(9210U);
    msg.setSourceEntity(124U);
    msg.setDestination(13768U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0495473136373;

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
    msg.setTimeStamp(0.0752572656493);
    msg.setSource(1365U);
    msg.setSourceEntity(62U);
    msg.setDestination(34986U);
    msg.setDestinationEntity(191U);
    msg.value = 0.371921510772;

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
    msg.setTimeStamp(0.729084524939);
    msg.setSource(16125U);
    msg.setSourceEntity(68U);
    msg.setDestination(5298U);
    msg.setDestinationEntity(53U);
    msg.value = 0.891176372172;

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
    msg.setTimeStamp(0.644014666912);
    msg.setSource(35727U);
    msg.setSourceEntity(78U);
    msg.setDestination(20760U);
    msg.setDestinationEntity(127U);
    msg.value = 0.319596724156;

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
    msg.setTimeStamp(0.181498865405);
    msg.setSource(61331U);
    msg.setSourceEntity(221U);
    msg.setDestination(1905U);
    msg.setDestinationEntity(137U);
    msg.value = 0.371912537941;

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
    msg.setTimeStamp(0.818948538022);
    msg.setSource(43777U);
    msg.setSourceEntity(202U);
    msg.setDestination(22286U);
    msg.setDestinationEntity(209U);
    msg.validity = 394U;
    msg.type = 174U;
    msg.utc_year = 60606U;
    msg.utc_month = 206U;
    msg.utc_day = 38U;
    msg.utc_time = 0.431495281071;
    msg.lat = 0.398706879278;
    msg.lon = 0.924915414609;
    msg.height = 0.0307449507786;
    msg.satellites = 173U;
    msg.cog = 0.283049140598;
    msg.sog = 0.928870321819;
    msg.hdop = 0.474810616436;
    msg.vdop = 0.974654854247;
    msg.hacc = 0.0985247546471;
    msg.vacc = 0.979225266052;

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
    msg.setTimeStamp(0.539961191199);
    msg.setSource(54037U);
    msg.setSourceEntity(213U);
    msg.setDestination(11480U);
    msg.setDestinationEntity(181U);
    msg.validity = 58267U;
    msg.type = 178U;
    msg.utc_year = 20358U;
    msg.utc_month = 70U;
    msg.utc_day = 107U;
    msg.utc_time = 0.982434098693;
    msg.lat = 0.951139463973;
    msg.lon = 0.998271501331;
    msg.height = 0.90051115459;
    msg.satellites = 240U;
    msg.cog = 0.591771144651;
    msg.sog = 0.646635962204;
    msg.hdop = 0.488898746894;
    msg.vdop = 0.0288896758925;
    msg.hacc = 0.555435426292;
    msg.vacc = 0.351418466335;

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
    msg.setTimeStamp(0.353609067429);
    msg.setSource(42655U);
    msg.setSourceEntity(29U);
    msg.setDestination(52144U);
    msg.setDestinationEntity(126U);
    msg.validity = 49853U;
    msg.type = 161U;
    msg.utc_year = 3595U;
    msg.utc_month = 176U;
    msg.utc_day = 98U;
    msg.utc_time = 0.873072286566;
    msg.lat = 0.140629960073;
    msg.lon = 0.197140315977;
    msg.height = 0.41188026534;
    msg.satellites = 0U;
    msg.cog = 0.584972652022;
    msg.sog = 0.617643652666;
    msg.hdop = 0.141548463621;
    msg.vdop = 0.871811580762;
    msg.hacc = 0.303637957271;
    msg.vacc = 0.0562936081921;

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
    msg.setTimeStamp(0.76049384924);
    msg.setSource(59747U);
    msg.setSourceEntity(27U);
    msg.setDestination(36514U);
    msg.setDestinationEntity(211U);
    msg.time = 0.268598759517;
    msg.phi = 0.164295046286;
    msg.theta = 0.79771818527;
    msg.psi = 0.841725820588;
    msg.psi_magnetic = 0.67550068002;

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
    msg.setTimeStamp(0.130261674072);
    msg.setSource(63810U);
    msg.setSourceEntity(180U);
    msg.setDestination(61670U);
    msg.setDestinationEntity(210U);
    msg.time = 0.139755660291;
    msg.phi = 0.119938894013;
    msg.theta = 0.106108543084;
    msg.psi = 0.319232561513;
    msg.psi_magnetic = 0.301719551905;

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
    msg.setTimeStamp(0.1416999255);
    msg.setSource(17454U);
    msg.setSourceEntity(80U);
    msg.setDestination(8061U);
    msg.setDestinationEntity(65U);
    msg.time = 0.541901685441;
    msg.phi = 0.213613153157;
    msg.theta = 0.42737329407;
    msg.psi = 0.785082443506;
    msg.psi_magnetic = 0.600856288206;

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
    msg.setTimeStamp(0.569940916125);
    msg.setSource(32386U);
    msg.setSourceEntity(211U);
    msg.setDestination(32462U);
    msg.setDestinationEntity(133U);
    msg.time = 0.578077074882;
    msg.x = 0.643204300147;
    msg.y = 0.35175653244;
    msg.z = 0.536426232774;
    msg.timestep = 0.61802424584;

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
    msg.setTimeStamp(0.759690179795);
    msg.setSource(50190U);
    msg.setSourceEntity(80U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(43U);
    msg.time = 0.809601673134;
    msg.x = 0.361447020478;
    msg.y = 0.650091223221;
    msg.z = 0.299446767695;
    msg.timestep = 0.882899208426;

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
    msg.setTimeStamp(0.0797858729733);
    msg.setSource(21773U);
    msg.setSourceEntity(206U);
    msg.setDestination(27480U);
    msg.setDestinationEntity(226U);
    msg.time = 0.607717337438;
    msg.x = 0.734714222537;
    msg.y = 0.18727541696;
    msg.z = 0.267050058696;
    msg.timestep = 0.187688832999;

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
    msg.setTimeStamp(0.766224739891);
    msg.setSource(20583U);
    msg.setSourceEntity(78U);
    msg.setDestination(37664U);
    msg.setDestinationEntity(189U);
    msg.time = 0.119464725469;
    msg.x = 0.118185086695;
    msg.y = 0.224175155078;
    msg.z = 0.553319306439;

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
    msg.setTimeStamp(0.801220103828);
    msg.setSource(15609U);
    msg.setSourceEntity(159U);
    msg.setDestination(60772U);
    msg.setDestinationEntity(5U);
    msg.time = 0.91312945609;
    msg.x = 0.652002015576;
    msg.y = 0.973226814088;
    msg.z = 0.217482945153;

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
    msg.setTimeStamp(0.270400633205);
    msg.setSource(36486U);
    msg.setSourceEntity(84U);
    msg.setDestination(45367U);
    msg.setDestinationEntity(148U);
    msg.time = 0.84219999241;
    msg.x = 0.687981856204;
    msg.y = 0.420821344582;
    msg.z = 0.10297375405;

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
    msg.setTimeStamp(0.87883675858);
    msg.setSource(31742U);
    msg.setSourceEntity(7U);
    msg.setDestination(13848U);
    msg.setDestinationEntity(126U);
    msg.time = 0.504530615617;
    msg.x = 0.301857756578;
    msg.y = 0.2499181775;
    msg.z = 0.958748317992;

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
    msg.setTimeStamp(0.927227347676);
    msg.setSource(54365U);
    msg.setSourceEntity(181U);
    msg.setDestination(49592U);
    msg.setDestinationEntity(101U);
    msg.time = 0.173560784206;
    msg.x = 0.780815619182;
    msg.y = 0.133245284074;
    msg.z = 0.706134852919;

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
    msg.setTimeStamp(0.598663120663);
    msg.setSource(1115U);
    msg.setSourceEntity(15U);
    msg.setDestination(57323U);
    msg.setDestinationEntity(51U);
    msg.time = 0.34833717821;
    msg.x = 0.719223142065;
    msg.y = 0.177756467702;
    msg.z = 0.453152554422;

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
    msg.setTimeStamp(0.735986608216);
    msg.setSource(60866U);
    msg.setSourceEntity(134U);
    msg.setDestination(58456U);
    msg.setDestinationEntity(20U);
    msg.time = 0.163544903001;
    msg.x = 0.346818429762;
    msg.y = 0.849836137138;
    msg.z = 0.132400400393;

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
    msg.setTimeStamp(0.645016242129);
    msg.setSource(40570U);
    msg.setSourceEntity(54U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(107U);
    msg.time = 0.0954642412316;
    msg.x = 0.755876854167;
    msg.y = 0.574436690331;
    msg.z = 0.872781476212;

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
    msg.setTimeStamp(0.308894598751);
    msg.setSource(52755U);
    msg.setSourceEntity(120U);
    msg.setDestination(32152U);
    msg.setDestinationEntity(136U);
    msg.time = 0.939505055814;
    msg.x = 0.516929899576;
    msg.y = 0.871898893677;
    msg.z = 0.83591934357;

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
    msg.setTimeStamp(0.840208821569);
    msg.setSource(47372U);
    msg.setSourceEntity(159U);
    msg.setDestination(20459U);
    msg.setDestinationEntity(158U);
    msg.validity = 124U;
    msg.x = 0.0737281392743;
    msg.y = 0.781668378474;
    msg.z = 0.216813443051;

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
    msg.setTimeStamp(0.531039640325);
    msg.setSource(44625U);
    msg.setSourceEntity(125U);
    msg.setDestination(14796U);
    msg.setDestinationEntity(39U);
    msg.validity = 154U;
    msg.x = 0.632210282045;
    msg.y = 0.0262346146977;
    msg.z = 0.150460330273;

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
    msg.setTimeStamp(0.593412100131);
    msg.setSource(56119U);
    msg.setSourceEntity(33U);
    msg.setDestination(60362U);
    msg.setDestinationEntity(56U);
    msg.validity = 147U;
    msg.x = 0.900295063287;
    msg.y = 0.402541920696;
    msg.z = 0.95550741031;

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
    msg.setTimeStamp(0.363290234881);
    msg.setSource(19189U);
    msg.setSourceEntity(64U);
    msg.setDestination(58327U);
    msg.setDestinationEntity(92U);
    msg.validity = 169U;
    msg.x = 0.259651104622;
    msg.y = 0.884654097978;
    msg.z = 0.364992298251;

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
    msg.setTimeStamp(0.2241561251);
    msg.setSource(47839U);
    msg.setSourceEntity(193U);
    msg.setDestination(37139U);
    msg.setDestinationEntity(131U);
    msg.validity = 78U;
    msg.x = 0.206518544727;
    msg.y = 0.484519538392;
    msg.z = 0.709224098507;

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
    msg.setTimeStamp(0.765236637563);
    msg.setSource(2656U);
    msg.setSourceEntity(106U);
    msg.setDestination(32127U);
    msg.setDestinationEntity(105U);
    msg.validity = 72U;
    msg.x = 0.873968511817;
    msg.y = 0.453189269221;
    msg.z = 0.877411930279;

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
    msg.setTimeStamp(0.584011369123);
    msg.setSource(34007U);
    msg.setSourceEntity(189U);
    msg.setDestination(9069U);
    msg.setDestinationEntity(32U);
    msg.time = 0.631523066265;
    msg.x = 0.787597651088;
    msg.y = 0.220074580976;
    msg.z = 0.0387388481851;

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
    msg.setTimeStamp(0.899330030602);
    msg.setSource(30077U);
    msg.setSourceEntity(239U);
    msg.setDestination(64114U);
    msg.setDestinationEntity(160U);
    msg.time = 0.628832152435;
    msg.x = 0.595742925892;
    msg.y = 0.652822243687;
    msg.z = 0.227423068515;

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
    msg.setTimeStamp(0.768357695065);
    msg.setSource(41583U);
    msg.setSourceEntity(172U);
    msg.setDestination(4858U);
    msg.setDestinationEntity(226U);
    msg.time = 0.980237322676;
    msg.x = 0.487210585006;
    msg.y = 0.886975798518;
    msg.z = 0.331531790485;

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
    msg.setTimeStamp(0.350405000084);
    msg.setSource(32757U);
    msg.setSourceEntity(9U);
    msg.setDestination(57459U);
    msg.setDestinationEntity(153U);
    msg.validity = 107U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.904319512698;
    tmp_msg_0.y = 0.111165067972;
    tmp_msg_0.z = 0.986987020104;
    tmp_msg_0.phi = 0.143538786163;
    tmp_msg_0.theta = 0.848157534571;
    tmp_msg_0.psi = 0.56720944851;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.201510809306;

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
    msg.setTimeStamp(0.970321412842);
    msg.setSource(18213U);
    msg.setSourceEntity(45U);
    msg.setDestination(48707U);
    msg.setDestinationEntity(17U);
    msg.validity = 15U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.00567382727909;
    tmp_msg_0.y = 0.72718149071;
    tmp_msg_0.z = 0.26773224043;
    tmp_msg_0.phi = 0.141164387661;
    tmp_msg_0.theta = 0.651452679439;
    tmp_msg_0.psi = 0.260717602714;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.652532345144;

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
    msg.setTimeStamp(0.3014416458);
    msg.setSource(35368U);
    msg.setSourceEntity(186U);
    msg.setDestination(37573U);
    msg.setDestinationEntity(246U);
    msg.validity = 117U;
    msg.value = 0.278553344466;

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
    msg.setTimeStamp(0.930263994439);
    msg.setSource(43869U);
    msg.setSourceEntity(10U);
    msg.setDestination(45289U);
    msg.setDestinationEntity(159U);
    msg.value = 0.717874970202;

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
    msg.setTimeStamp(0.468254567553);
    msg.setSource(61101U);
    msg.setSourceEntity(79U);
    msg.setDestination(49238U);
    msg.setDestinationEntity(44U);
    msg.value = 0.998497080246;

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
    msg.setTimeStamp(0.278130586992);
    msg.setSource(45438U);
    msg.setSourceEntity(20U);
    msg.setDestination(12202U);
    msg.setDestinationEntity(35U);
    msg.value = 0.74809923821;

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
    msg.setTimeStamp(0.102819357312);
    msg.setSource(10960U);
    msg.setSourceEntity(16U);
    msg.setDestination(21129U);
    msg.setDestinationEntity(113U);
    msg.value = 0.899999757379;

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
    msg.setTimeStamp(0.565448779174);
    msg.setSource(61062U);
    msg.setSourceEntity(212U);
    msg.setDestination(24957U);
    msg.setDestinationEntity(79U);
    msg.value = 0.860778022429;

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
    msg.setTimeStamp(0.200065723599);
    msg.setSource(55697U);
    msg.setSourceEntity(242U);
    msg.setDestination(64981U);
    msg.setDestinationEntity(252U);
    msg.value = 0.832078083208;

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
    msg.setTimeStamp(0.45370951155);
    msg.setSource(1832U);
    msg.setSourceEntity(9U);
    msg.setDestination(22874U);
    msg.setDestinationEntity(185U);
    msg.value = 0.569790327002;

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
    msg.setTimeStamp(0.667392448524);
    msg.setSource(47222U);
    msg.setSourceEntity(254U);
    msg.setDestination(50480U);
    msg.setDestinationEntity(100U);
    msg.value = 0.865507185726;

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
    msg.setTimeStamp(0.423102657362);
    msg.setSource(30806U);
    msg.setSourceEntity(242U);
    msg.setDestination(26231U);
    msg.setDestinationEntity(108U);
    msg.value = 0.316747723691;

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
    msg.setTimeStamp(0.967639468505);
    msg.setSource(7076U);
    msg.setSourceEntity(139U);
    msg.setDestination(11198U);
    msg.setDestinationEntity(101U);
    msg.value = 0.102215494839;

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
    msg.setTimeStamp(0.391948952016);
    msg.setSource(56027U);
    msg.setSourceEntity(55U);
    msg.setDestination(13016U);
    msg.setDestinationEntity(88U);
    msg.value = 0.74324249921;

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
    msg.setTimeStamp(0.0988464129581);
    msg.setSource(6217U);
    msg.setSourceEntity(170U);
    msg.setDestination(20658U);
    msg.setDestinationEntity(185U);
    msg.value = 0.165380683112;

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
    msg.setTimeStamp(0.997861870043);
    msg.setSource(49120U);
    msg.setSourceEntity(117U);
    msg.setDestination(18694U);
    msg.setDestinationEntity(240U);
    msg.value = 0.709677934354;

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
    msg.setTimeStamp(0.244936566009);
    msg.setSource(10849U);
    msg.setSourceEntity(112U);
    msg.setDestination(53664U);
    msg.setDestinationEntity(72U);
    msg.value = 0.49087518463;

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
    msg.setTimeStamp(0.00761971667651);
    msg.setSource(60946U);
    msg.setSourceEntity(216U);
    msg.setDestination(42915U);
    msg.setDestinationEntity(188U);
    msg.value = 0.0446657988769;

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
    msg.setTimeStamp(0.0855183001874);
    msg.setSource(55165U);
    msg.setSourceEntity(183U);
    msg.setDestination(49368U);
    msg.setDestinationEntity(53U);
    msg.value = 0.210891906552;

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
    msg.setTimeStamp(0.781990318561);
    msg.setSource(52551U);
    msg.setSourceEntity(6U);
    msg.setDestination(54586U);
    msg.setDestinationEntity(254U);
    msg.value = 0.180663233966;

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
    msg.setTimeStamp(0.252150172716);
    msg.setSource(15018U);
    msg.setSourceEntity(41U);
    msg.setDestination(54735U);
    msg.setDestinationEntity(58U);
    msg.value = 0.318854832477;

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
    msg.setTimeStamp(0.853883275184);
    msg.setSource(15584U);
    msg.setSourceEntity(214U);
    msg.setDestination(20158U);
    msg.setDestinationEntity(12U);
    msg.value = 0.162344884818;

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
    msg.setTimeStamp(0.253347432479);
    msg.setSource(48956U);
    msg.setSourceEntity(153U);
    msg.setDestination(55162U);
    msg.setDestinationEntity(26U);
    msg.value = 0.60847503366;

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
    msg.setTimeStamp(0.13075966149);
    msg.setSource(23512U);
    msg.setSourceEntity(156U);
    msg.setDestination(17097U);
    msg.setDestinationEntity(74U);
    msg.value = 0.777203487498;

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
    msg.setTimeStamp(0.68334734332);
    msg.setSource(52470U);
    msg.setSourceEntity(67U);
    msg.setDestination(23552U);
    msg.setDestinationEntity(128U);
    msg.value = 0.694312384155;

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
    msg.setTimeStamp(0.602493044015);
    msg.setSource(40613U);
    msg.setSourceEntity(221U);
    msg.setDestination(60671U);
    msg.setDestinationEntity(254U);
    msg.value = 0.634817390143;

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
    msg.setTimeStamp(0.54521946352);
    msg.setSource(1846U);
    msg.setSourceEntity(144U);
    msg.setDestination(18782U);
    msg.setDestinationEntity(45U);
    msg.value = 0.1679060529;

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
    msg.setTimeStamp(0.986698581889);
    msg.setSource(3357U);
    msg.setSourceEntity(129U);
    msg.setDestination(49091U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.507295792384;
    msg.speed = 0.194295530813;
    msg.turbulence = 0.0422271453581;

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
    msg.setTimeStamp(0.0808384583519);
    msg.setSource(65396U);
    msg.setSourceEntity(130U);
    msg.setDestination(36537U);
    msg.setDestinationEntity(110U);
    msg.direction = 0.338074054072;
    msg.speed = 0.484174792343;
    msg.turbulence = 0.364110365816;

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
    msg.setTimeStamp(0.905161167793);
    msg.setSource(60213U);
    msg.setSourceEntity(91U);
    msg.setDestination(38639U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.813538903944;
    msg.speed = 0.58507769673;
    msg.turbulence = 0.172785326935;

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
    msg.setTimeStamp(0.325421434478);
    msg.setSource(53135U);
    msg.setSourceEntity(51U);
    msg.setDestination(53409U);
    msg.setDestinationEntity(250U);
    msg.value = 0.394258770699;

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
    msg.setTimeStamp(0.988624380281);
    msg.setSource(47946U);
    msg.setSourceEntity(78U);
    msg.setDestination(38881U);
    msg.setDestinationEntity(68U);
    msg.value = 0.489544069197;

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
    msg.setTimeStamp(0.991660318156);
    msg.setSource(48540U);
    msg.setSourceEntity(166U);
    msg.setDestination(52927U);
    msg.setDestinationEntity(180U);
    msg.value = 0.522330805454;

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
    msg.setTimeStamp(0.806572296238);
    msg.setSource(44829U);
    msg.setSourceEntity(64U);
    msg.setDestination(3099U);
    msg.setDestinationEntity(132U);
    msg.value.assign("GGNIEFBSDWDOTKZLEPEVRSZOPLDXRKVHTTMJLKXRKPNNCPZRUUBFHGCFGJDPYBNZEMMHCTSBBLWWCQJNPSMTVLAJHAPI");

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
    msg.setTimeStamp(0.63317763206);
    msg.setSource(38213U);
    msg.setSourceEntity(98U);
    msg.setDestination(52U);
    msg.setDestinationEntity(243U);
    msg.value.assign("WEFGHZNUOFPBEREOBNUWVHXCVCDIOVAYJORTIHMSILHNZUOLPCJSXRUOGLGFFGPGPVJYVWJQFZVDCMCKEAJVMZILAOSAIYXZXNRFGIAQTKKOUSMGUNQGRKSCHPAABQTFYBHMQRJLDYEMMPWZTITHQIYGESJNVSKXEHTKXBHUPVPRCEWVTBYAXNXBSMHOQCIATSZXDTWDPRMBFDCUSWDGEQYWDWKFNWNPRLLOUAQKZYY");

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
    msg.setTimeStamp(0.479933650264);
    msg.setSource(56424U);
    msg.setSourceEntity(16U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(249U);
    msg.value.assign("QYHATIBQWIJTWNVCMFZCWSZZIBNBBOKXGRVOXDALOESCXJZXAFWGOJIEYFPNRCUXAKDSPHMEZVHYYBTQAJSYMZOPPRKLUVPEQQKFOSICPTBVDEKMJDBVKLTAGYWLBPGRMUGEEKWLANHDAFZXJNBHQCQYJFTPDDJLDXTCGNDHKOIZSGKVLIMWKOSVXYH");

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
    msg.setTimeStamp(0.942710134373);
    msg.setSource(37335U);
    msg.setSourceEntity(40U);
    msg.setDestination(51409U);
    msg.setDestinationEntity(15U);
    const char tmp_msg_0[] = {-4, 4, -22, 48, 112, 50, 125, -100, 13, 39, 27, -112, -116, 84, -107, -50, 123, 56, 99, 26, 2, 76, 84, -4, 32, -82, -100, 60, 0, -93, 3, 94, -63};
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
    msg.setTimeStamp(0.55226296135);
    msg.setSource(28984U);
    msg.setSourceEntity(7U);
    msg.setDestination(19348U);
    msg.setDestinationEntity(123U);
    const char tmp_msg_0[] = {-108, 107, 85, 15, -101, -91, -83, -15, 78, 28, -123, -10, -21, -52, 107, -14, -105, -30, -29, -17, -107, 44, -18, -48, 16, -80, 62, 120, 13, 100, 37, -103, -69, 31, 49, -119, 38, -54, -62, -37, 25, -12, 37, -53, 35, 54, -55, 97, -1, 98, 11, 1, 95, 47, 59, 85, -59, 74, -59, 44, 79, -55, 115, -17, -47, 65, -45, 53, 4, -12, 35, -126, 124, 90, -96, 116, 9, -78, 67, 26, 3, -60, 11, -31, -99, -25};
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
    msg.setTimeStamp(0.704089429595);
    msg.setSource(64767U);
    msg.setSourceEntity(152U);
    msg.setDestination(22043U);
    msg.setDestinationEntity(128U);
    const char tmp_msg_0[] = {-107, 74, -95, -20, 45, 14, 78, -12, -73, -44, 21, -112, 112, 74, 85, -83, -87, 115, -75, -48, -51, -112, 40, 6, -49, -89, -67, 31, 76, 65, 49, -50, -80, 72, 18, -122, 99, 102, -16, -90, -5, 53, 86, -26, -72, 106, -117, 37, -31, -36, 121, -117, 76, 1, 96, 7, 2, 70, -33, 77, -13, -8, 57, -111, 13, -10, -65, 45, 75, -96, 55, -93, 35, 59, -30, -84, 117, -64, -120, 68, 51};
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
    msg.setTimeStamp(0.188843068448);
    msg.setSource(41137U);
    msg.setSourceEntity(244U);
    msg.setDestination(62522U);
    msg.setDestinationEntity(120U);
    msg.type = 26U;
    msg.frequency = 2757621151U;
    msg.min_range = 63079U;
    msg.max_range = 46838U;
    msg.bits_per_point = 191U;
    msg.scale_factor = 0.778989358978;
    const char tmp_msg_0[] = {72, 104, -66, -28, 26, 115, 112, 101, -60, -107, 116, 69, 61, 74, -42, 20, 63, 31, 110, -47, 19, 112, -111, -97, -64, 66, 46, 37, -42, -51};
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
    msg.setTimeStamp(0.851461267798);
    msg.setSource(5029U);
    msg.setSourceEntity(58U);
    msg.setDestination(57839U);
    msg.setDestinationEntity(217U);
    msg.type = 235U;
    msg.frequency = 1016537048U;
    msg.min_range = 20740U;
    msg.max_range = 8683U;
    msg.bits_per_point = 176U;
    msg.scale_factor = 0.0686082015002;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.27659545665;
    tmp_msg_0.beam_height = 0.0256622395439;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {68, -110, 117, -14, 11, 41, -1, -56, 121, 9, -36, 86, -66, 113, 115, -106, 85, 16, -61, 47, 116, -37, -106, -6, -32, -26, 49, -18, 78, -16, -72, -67, -127, -67, 100, -16, -107, 74, -123, 56, -5, 97, -107, -106, -87, -49, 61, -50, -29, 8, -94, -52, 118, 93, 30, -30, 68, 40, -42, 42, -112, 57, -126, -8, 63, -121, -81, -51, 72, 88, -115, 103, 76, 59, 86, -123, -73, -102, -89, -80, 46, -87, 14, -93, 0, -96, 39, 33, -76, 59, 22, -74, 103, -127, 124, -45, 64, -27, -1, -58, -128, 59, 11, 111, 121, 1, 1, 5, 49, -112, 29, 124, 125, -6, 27, -110, 88, -77, -78, 82, 35, -119, 114, -126, 75, -92, -30, -7, 46, -94, 48, 6, 43, 8, 118, -27, -19, -11, 7, 16, -93, -108, -86, -16, 74, 9, 104, 71, -86, 62, 104, -110, 93, 75, -56, 35, 48, 33, -2, -42, -25, -71, -21, -125, -8, -33, -76, -26, 57, -77, 51, 44, 38, -25, -9, 122, -42, -66, 33, 11, -109, 120, -44, -32, 96, 107, 75, -93, 8, -56, 59, 40, -80, -42, -15, 4, -107, -116, -15, 35, 51, 59, 76, 9, 114, 16, 53, -51, 92, 31, -112, -114, 106, 105, 13, 125, 92};
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
    msg.setTimeStamp(0.843395734057);
    msg.setSource(2912U);
    msg.setSourceEntity(167U);
    msg.setDestination(55433U);
    msg.setDestinationEntity(174U);
    msg.type = 105U;
    msg.frequency = 289843205U;
    msg.min_range = 11701U;
    msg.max_range = 30972U;
    msg.bits_per_point = 203U;
    msg.scale_factor = 0.0206832534422;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.58655728068;
    tmp_msg_0.beam_height = 0.241051023312;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {113, 87, -68, 100, 77, -119, 86, 50, -39, 3, -1, 59, -65, 36, 13, 89, 80, 34, -5, 118, -6, -87, -94, -34, 116, 66, 19, 12, -15, -55, -120, 110, 41, -35, -86, 62, -93, 115, 82, 41, -44, 14, 83, 57, 100, -43, 70, 105, -40, -51, 13, 6, -30, 41, -47, -22, -98, -115, 13, 82, -5, -117, 56, -109, 24, 48, 123, 10, -22, -21, 83, 29, -49, 86, 26, 4, -110, 98, -122, -54, 34, 1, 70, 63, 16, -56, 57, 52, -97, 33, 79, 24, 13, -50, -113, 87, -60, 6, -8, -81, -31, 68, -9, 39, 0, -41, -54, -56, -103, 69, -88, -93, -116, -62, -121, 104, 87, 72, -59, -81, 31, -76};
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
    msg.setTimeStamp(0.281605110374);
    msg.setSource(32271U);
    msg.setSourceEntity(249U);
    msg.setDestination(52998U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.896642584053);
    msg.setSource(63646U);
    msg.setSourceEntity(200U);
    msg.setDestination(22282U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.986341741703);
    msg.setSource(16176U);
    msg.setSourceEntity(57U);
    msg.setDestination(48080U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.120115170118);
    msg.setSource(23939U);
    msg.setSourceEntity(105U);
    msg.setDestination(22291U);
    msg.setDestinationEntity(112U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.940631728932);
    msg.setSource(51549U);
    msg.setSourceEntity(118U);
    msg.setDestination(12843U);
    msg.setDestinationEntity(195U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.26638968288);
    msg.setSource(8417U);
    msg.setSourceEntity(158U);
    msg.setDestination(26904U);
    msg.setDestinationEntity(253U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.408122526848);
    msg.setSource(40163U);
    msg.setSourceEntity(229U);
    msg.setDestination(52623U);
    msg.setDestinationEntity(245U);
    msg.value = 0.090955899383;
    msg.confidence = 0.547600626842;
    msg.opmodes.assign("KPDTXUOZUKZJEEEHLESSPPENAXXAHGGNHOFWNTSTYORQTRQMLBSPSOMUCXTDDXLHRAIMHUBVIJJWJPGOCIDUVTQJKFSWDJFVWRRNOGGGUSFMWDQGOLHUOJZLIGVHBRUZNRKQJVOMRXXZJTAWQMFNBYDFXWBKCAGSCALPYWFIVTBHDJFYKIYIWZULQMAYCRCAQCOZCIZYMDBHFZIPARMPENSHKXBCYLKXGVVWFQYEATQVE");

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
    msg.setTimeStamp(0.994064629166);
    msg.setSource(24059U);
    msg.setSourceEntity(187U);
    msg.setDestination(33886U);
    msg.setDestinationEntity(190U);
    msg.value = 0.276421239829;
    msg.confidence = 0.989140646363;
    msg.opmodes.assign("CBFRTRKXKUCTFWOZPPDEWJZNYVIYMOTSXWBNXPHQVETDCIGYUHJIVOJMGXHYJNZNZTQGVQXAJJCAWHTXWGAZQV");

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
    msg.setTimeStamp(0.589582024596);
    msg.setSource(52994U);
    msg.setSourceEntity(36U);
    msg.setDestination(19025U);
    msg.setDestinationEntity(59U);
    msg.value = 0.869821633097;
    msg.confidence = 0.788252918562;
    msg.opmodes.assign("GWMGAMULKVFDTWLAVVJILJAUVCZFEWKN");

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
    msg.setTimeStamp(0.477326439799);
    msg.setSource(46761U);
    msg.setSourceEntity(250U);
    msg.setDestination(61078U);
    msg.setDestinationEntity(149U);
    msg.itow = 3752166819U;
    msg.lat = 0.333128082017;
    msg.lon = 0.0680461185019;
    msg.height_ell = 0.142854071439;
    msg.height_sea = 0.338037370544;
    msg.hacc = 0.657664854042;
    msg.vacc = 0.996743707832;
    msg.vel_n = 0.730843774632;
    msg.vel_e = 0.493766376159;
    msg.vel_d = 0.413141406446;
    msg.speed = 0.609635934572;
    msg.gspeed = 0.917056721173;
    msg.heading = 0.463491256911;
    msg.sacc = 0.642455633243;
    msg.cacc = 0.229576146633;

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
    msg.setTimeStamp(0.293894566455);
    msg.setSource(30790U);
    msg.setSourceEntity(102U);
    msg.setDestination(25181U);
    msg.setDestinationEntity(65U);
    msg.itow = 1493058845U;
    msg.lat = 0.804589393553;
    msg.lon = 0.930983258744;
    msg.height_ell = 0.706840686209;
    msg.height_sea = 0.879750592115;
    msg.hacc = 0.706416441838;
    msg.vacc = 0.851458356992;
    msg.vel_n = 0.864613485545;
    msg.vel_e = 0.397957284763;
    msg.vel_d = 0.4244393206;
    msg.speed = 0.413813038224;
    msg.gspeed = 0.810686273343;
    msg.heading = 0.443047599842;
    msg.sacc = 0.658187413351;
    msg.cacc = 0.219590698183;

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
    msg.setTimeStamp(0.209369622031);
    msg.setSource(6250U);
    msg.setSourceEntity(135U);
    msg.setDestination(64121U);
    msg.setDestinationEntity(105U);
    msg.itow = 2275061174U;
    msg.lat = 0.803426089184;
    msg.lon = 0.878086625567;
    msg.height_ell = 0.0338701229494;
    msg.height_sea = 0.166718397485;
    msg.hacc = 0.570071448932;
    msg.vacc = 0.479672793581;
    msg.vel_n = 0.120256969627;
    msg.vel_e = 0.27198285586;
    msg.vel_d = 0.471149531637;
    msg.speed = 0.927067077482;
    msg.gspeed = 0.375434555449;
    msg.heading = 0.208256750601;
    msg.sacc = 0.804088960425;
    msg.cacc = 0.941170581963;

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
    msg.setTimeStamp(0.719003518509);
    msg.setSource(31626U);
    msg.setSourceEntity(115U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(200U);
    msg.id = 66U;
    msg.value = 0.960976101821;

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
    msg.setTimeStamp(0.103429940151);
    msg.setSource(43911U);
    msg.setSourceEntity(112U);
    msg.setDestination(60525U);
    msg.setDestinationEntity(247U);
    msg.id = 205U;
    msg.value = 0.706192405887;

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
    msg.setTimeStamp(0.802341974899);
    msg.setSource(31218U);
    msg.setSourceEntity(209U);
    msg.setDestination(23952U);
    msg.setDestinationEntity(71U);
    msg.id = 170U;
    msg.value = 0.124152965608;

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
    msg.setTimeStamp(0.670271693983);
    msg.setSource(9450U);
    msg.setSourceEntity(104U);
    msg.setDestination(61988U);
    msg.setDestinationEntity(207U);
    msg.x = 0.199035880514;
    msg.y = 0.144217503257;
    msg.z = 0.293831918688;
    msg.phi = 0.146580242869;
    msg.theta = 0.813240817595;
    msg.psi = 0.626946461388;

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
    msg.setTimeStamp(0.491247570239);
    msg.setSource(38568U);
    msg.setSourceEntity(179U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(101U);
    msg.x = 0.0119776378455;
    msg.y = 0.61222585966;
    msg.z = 0.859054899486;
    msg.phi = 0.029969412829;
    msg.theta = 0.0701783583981;
    msg.psi = 0.970223501046;

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
    msg.setTimeStamp(0.628977860592);
    msg.setSource(50478U);
    msg.setSourceEntity(17U);
    msg.setDestination(40507U);
    msg.setDestinationEntity(236U);
    msg.x = 0.108969578862;
    msg.y = 0.888656639555;
    msg.z = 0.643135236168;
    msg.phi = 0.944363430777;
    msg.theta = 0.502955081671;
    msg.psi = 0.965678795972;

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
    msg.setTimeStamp(0.0910439538358);
    msg.setSource(39787U);
    msg.setSourceEntity(95U);
    msg.setDestination(37499U);
    msg.setDestinationEntity(194U);
    msg.beam_width = 0.430198444311;
    msg.beam_height = 0.915634696941;

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
    msg.setTimeStamp(0.487347144334);
    msg.setSource(63438U);
    msg.setSourceEntity(88U);
    msg.setDestination(11245U);
    msg.setDestinationEntity(35U);
    msg.beam_width = 0.237552611471;
    msg.beam_height = 0.184382996033;

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
    msg.setTimeStamp(0.117870235017);
    msg.setSource(29353U);
    msg.setSourceEntity(166U);
    msg.setDestination(37101U);
    msg.setDestinationEntity(2U);
    msg.beam_width = 0.697055552539;
    msg.beam_height = 0.0602885865658;

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
    msg.setTimeStamp(0.127246995268);
    msg.setSource(62472U);
    msg.setSourceEntity(150U);
    msg.setDestination(12756U);
    msg.setDestinationEntity(131U);
    msg.sane = 53U;

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
    msg.setTimeStamp(0.0792666483096);
    msg.setSource(31496U);
    msg.setSourceEntity(182U);
    msg.setDestination(44251U);
    msg.setDestinationEntity(228U);
    msg.sane = 118U;

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
    msg.setTimeStamp(0.132246271218);
    msg.setSource(30491U);
    msg.setSourceEntity(127U);
    msg.setDestination(42784U);
    msg.setDestinationEntity(91U);
    msg.sane = 218U;

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
    msg.setTimeStamp(0.249525526886);
    msg.setSource(63615U);
    msg.setSourceEntity(81U);
    msg.setDestination(49618U);
    msg.setDestinationEntity(25U);
    msg.value = 0.772718153832;

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
    msg.setTimeStamp(0.058818015453);
    msg.setSource(363U);
    msg.setSourceEntity(123U);
    msg.setDestination(57616U);
    msg.setDestinationEntity(68U);
    msg.value = 0.935524873337;

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
    msg.setTimeStamp(0.626168819179);
    msg.setSource(41110U);
    msg.setSourceEntity(115U);
    msg.setDestination(10244U);
    msg.setDestinationEntity(168U);
    msg.value = 0.428212554692;

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
    msg.setTimeStamp(0.992262950287);
    msg.setSource(4667U);
    msg.setSourceEntity(201U);
    msg.setDestination(45998U);
    msg.setDestinationEntity(156U);
    msg.value = 0.673798050496;

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
    msg.setTimeStamp(0.643187114971);
    msg.setSource(28266U);
    msg.setSourceEntity(158U);
    msg.setDestination(23464U);
    msg.setDestinationEntity(79U);
    msg.value = 0.429830356265;

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
    msg.setTimeStamp(0.0314109637316);
    msg.setSource(5353U);
    msg.setSourceEntity(168U);
    msg.setDestination(10618U);
    msg.setDestinationEntity(184U);
    msg.value = 0.932467441538;

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
    msg.setTimeStamp(0.800250740411);
    msg.setSource(49152U);
    msg.setSourceEntity(124U);
    msg.setDestination(6352U);
    msg.setDestinationEntity(239U);
    msg.value = 0.816258798326;

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
    msg.setTimeStamp(0.732579355713);
    msg.setSource(39035U);
    msg.setSourceEntity(183U);
    msg.setDestination(21750U);
    msg.setDestinationEntity(16U);
    msg.value = 0.0727559960718;

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
    msg.setTimeStamp(0.83267224285);
    msg.setSource(1213U);
    msg.setSourceEntity(25U);
    msg.setDestination(36281U);
    msg.setDestinationEntity(72U);
    msg.value = 0.412812988552;

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
    msg.setTimeStamp(0.188042368045);
    msg.setSource(63477U);
    msg.setSourceEntity(171U);
    msg.setDestination(38366U);
    msg.setDestinationEntity(129U);
    msg.value = 0.42260023514;

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
    msg.setTimeStamp(0.660933448963);
    msg.setSource(11534U);
    msg.setSourceEntity(1U);
    msg.setDestination(9383U);
    msg.setDestinationEntity(34U);
    msg.value = 0.804837288907;

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
    msg.setTimeStamp(0.266921504946);
    msg.setSource(24328U);
    msg.setSourceEntity(44U);
    msg.setDestination(43673U);
    msg.setDestinationEntity(18U);
    msg.value = 0.451611349824;

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
    msg.setTimeStamp(0.221796057597);
    msg.setSource(61180U);
    msg.setSourceEntity(149U);
    msg.setDestination(24790U);
    msg.setDestinationEntity(115U);
    msg.value = 0.507766742053;

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
    msg.setTimeStamp(0.803363004179);
    msg.setSource(50887U);
    msg.setSourceEntity(127U);
    msg.setDestination(10603U);
    msg.setDestinationEntity(246U);
    msg.value = 0.707201756071;

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
    msg.setTimeStamp(0.878395258844);
    msg.setSource(27812U);
    msg.setSourceEntity(241U);
    msg.setDestination(5814U);
    msg.setDestinationEntity(155U);
    msg.value = 0.994284759541;

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
    msg.setTimeStamp(0.0647994873183);
    msg.setSource(52932U);
    msg.setSourceEntity(244U);
    msg.setDestination(39003U);
    msg.setDestinationEntity(97U);
    msg.value = 0.911446945707;

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
    msg.setTimeStamp(0.920982998166);
    msg.setSource(22568U);
    msg.setSourceEntity(146U);
    msg.setDestination(3119U);
    msg.setDestinationEntity(81U);
    msg.value = 0.771132392555;

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
    msg.setTimeStamp(0.164634834793);
    msg.setSource(61098U);
    msg.setSourceEntity(173U);
    msg.setDestination(55792U);
    msg.setDestinationEntity(114U);
    msg.value = 0.611689646365;

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
    msg.setTimeStamp(0.894477297208);
    msg.setSource(28796U);
    msg.setSourceEntity(116U);
    msg.setDestination(39865U);
    msg.setDestinationEntity(177U);
    msg.value = 0.22906007271;

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
    msg.setTimeStamp(0.840607639274);
    msg.setSource(48400U);
    msg.setSourceEntity(206U);
    msg.setDestination(12865U);
    msg.setDestinationEntity(156U);
    msg.value = 0.800114353541;

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
    msg.setTimeStamp(0.592268470277);
    msg.setSource(51456U);
    msg.setSourceEntity(187U);
    msg.setDestination(1116U);
    msg.setDestinationEntity(40U);
    msg.value = 0.750571749604;

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
    msg.setTimeStamp(0.440724014988);
    msg.setSource(15508U);
    msg.setSourceEntity(113U);
    msg.setDestination(39125U);
    msg.setDestinationEntity(240U);
    msg.value = 0.881558877241;

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
    msg.setTimeStamp(0.199191760935);
    msg.setSource(48018U);
    msg.setSourceEntity(194U);
    msg.setDestination(42938U);
    msg.setDestinationEntity(6U);
    msg.value = 0.457164292551;

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
    msg.setTimeStamp(0.602094227386);
    msg.setSource(44302U);
    msg.setSourceEntity(4U);
    msg.setDestination(13280U);
    msg.setDestinationEntity(209U);
    msg.value = 0.564864308212;

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
    msg.setTimeStamp(0.289171520658);
    msg.setSource(64086U);
    msg.setSourceEntity(165U);
    msg.setDestination(17092U);
    msg.setDestinationEntity(248U);
    msg.validity = 48155U;
    msg.type = 75U;
    msg.tow = 234954410U;
    msg.base_lat = 0.375404281834;
    msg.base_lon = 0.0129118930357;
    msg.base_height = 0.389054171099;
    msg.n = 0.273127930582;
    msg.e = 0.694747884653;
    msg.d = 0.680490986399;
    msg.v_n = 0.610320481325;
    msg.v_e = 0.642733820117;
    msg.v_d = 0.267781993371;
    msg.satellites = 210U;
    msg.iar_hyp = 44041U;
    msg.iar_ratio = 0.286007038994;

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
    msg.setTimeStamp(0.345518892531);
    msg.setSource(7839U);
    msg.setSourceEntity(20U);
    msg.setDestination(14420U);
    msg.setDestinationEntity(62U);
    msg.validity = 48914U;
    msg.type = 252U;
    msg.tow = 1620228699U;
    msg.base_lat = 0.769219183443;
    msg.base_lon = 0.717345647194;
    msg.base_height = 0.291841901518;
    msg.n = 0.839790782168;
    msg.e = 0.442457575027;
    msg.d = 0.91459446838;
    msg.v_n = 0.412115190677;
    msg.v_e = 0.541363264702;
    msg.v_d = 0.892735416597;
    msg.satellites = 115U;
    msg.iar_hyp = 14446U;
    msg.iar_ratio = 0.454115475661;

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
    msg.setTimeStamp(0.118447962177);
    msg.setSource(2213U);
    msg.setSourceEntity(124U);
    msg.setDestination(52369U);
    msg.setDestinationEntity(133U);
    msg.validity = 57632U;
    msg.type = 154U;
    msg.tow = 3513098905U;
    msg.base_lat = 0.927441058167;
    msg.base_lon = 0.330674492224;
    msg.base_height = 0.449058846466;
    msg.n = 0.686370978073;
    msg.e = 0.143058805439;
    msg.d = 0.836987162618;
    msg.v_n = 0.870319659054;
    msg.v_e = 0.349359860367;
    msg.v_d = 0.00683167420898;
    msg.satellites = 203U;
    msg.iar_hyp = 39804U;
    msg.iar_ratio = 0.975559458913;

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
    msg.setTimeStamp(0.579657729941);
    msg.setSource(43896U);
    msg.setSourceEntity(226U);
    msg.setDestination(34562U);
    msg.setDestinationEntity(206U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.33304085497;
    tmp_msg_0.lon = 0.853742178228;
    tmp_msg_0.height = 0.00202483845771;
    tmp_msg_0.x = 0.191854535978;
    tmp_msg_0.y = 0.331917155705;
    tmp_msg_0.z = 0.329081640284;
    tmp_msg_0.phi = 0.015568748666;
    tmp_msg_0.theta = 0.12540627116;
    tmp_msg_0.psi = 0.0174351770283;
    tmp_msg_0.u = 0.711085875189;
    tmp_msg_0.v = 0.87301404131;
    tmp_msg_0.w = 0.540899582764;
    tmp_msg_0.vx = 0.835159871685;
    tmp_msg_0.vy = 0.448247085922;
    tmp_msg_0.vz = 0.224262311473;
    tmp_msg_0.p = 0.512492356209;
    tmp_msg_0.q = 0.541702338278;
    tmp_msg_0.r = 0.571557773139;
    tmp_msg_0.depth = 0.651934343423;
    tmp_msg_0.alt = 0.767250411831;
    msg.state.set(tmp_msg_0);
    msg.type = 42U;

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
    msg.setTimeStamp(0.140762488655);
    msg.setSource(47070U);
    msg.setSourceEntity(50U);
    msg.setDestination(62152U);
    msg.setDestinationEntity(245U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.188430627252;
    tmp_msg_0.lon = 0.0888444398791;
    tmp_msg_0.height = 0.234621092944;
    tmp_msg_0.x = 0.090492708857;
    tmp_msg_0.y = 0.453378036168;
    tmp_msg_0.z = 0.482729407657;
    tmp_msg_0.phi = 0.378954776188;
    tmp_msg_0.theta = 0.296546723667;
    tmp_msg_0.psi = 0.306389677917;
    tmp_msg_0.u = 0.685456363794;
    tmp_msg_0.v = 0.00756699521085;
    tmp_msg_0.w = 0.569674406985;
    tmp_msg_0.vx = 0.611584745707;
    tmp_msg_0.vy = 0.0695230847372;
    tmp_msg_0.vz = 0.817424955536;
    tmp_msg_0.p = 0.732885990524;
    tmp_msg_0.q = 0.203097318349;
    tmp_msg_0.r = 0.453125031554;
    tmp_msg_0.depth = 0.134038157765;
    tmp_msg_0.alt = 0.63325790908;
    msg.state.set(tmp_msg_0);
    msg.type = 48U;

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
    msg.setTimeStamp(0.0685801314796);
    msg.setSource(6414U);
    msg.setSourceEntity(76U);
    msg.setDestination(54677U);
    msg.setDestinationEntity(18U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.846334072813;
    tmp_msg_0.lon = 0.282429373244;
    tmp_msg_0.height = 0.271176659401;
    tmp_msg_0.x = 0.979143866376;
    tmp_msg_0.y = 0.993302392887;
    tmp_msg_0.z = 0.331033555037;
    tmp_msg_0.phi = 0.847236776898;
    tmp_msg_0.theta = 0.175152874167;
    tmp_msg_0.psi = 0.894756377169;
    tmp_msg_0.u = 0.177906153514;
    tmp_msg_0.v = 0.264554377422;
    tmp_msg_0.w = 0.562125992067;
    tmp_msg_0.vx = 0.643203407271;
    tmp_msg_0.vy = 0.410273121578;
    tmp_msg_0.vz = 0.365017378741;
    tmp_msg_0.p = 0.75473134598;
    tmp_msg_0.q = 0.204190038021;
    tmp_msg_0.r = 0.777183328419;
    tmp_msg_0.depth = 0.233336418287;
    tmp_msg_0.alt = 0.95762683503;
    msg.state.set(tmp_msg_0);
    msg.type = 29U;

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
    msg.setTimeStamp(0.938964886997);
    msg.setSource(20165U);
    msg.setSourceEntity(31U);
    msg.setDestination(829U);
    msg.setDestinationEntity(186U);
    msg.value = 0.251503491885;

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
    msg.setTimeStamp(0.199477933133);
    msg.setSource(48890U);
    msg.setSourceEntity(139U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(1U);
    msg.value = 0.937476930489;

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
    msg.setTimeStamp(0.190935223521);
    msg.setSource(39203U);
    msg.setSourceEntity(35U);
    msg.setDestination(2751U);
    msg.setDestinationEntity(148U);
    msg.value = 0.507903677091;

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
    msg.setTimeStamp(0.729948068468);
    msg.setSource(807U);
    msg.setSourceEntity(61U);
    msg.setDestination(2267U);
    msg.setDestinationEntity(219U);
    msg.value = 0.540656993574;

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
    msg.setTimeStamp(0.861988023419);
    msg.setSource(59342U);
    msg.setSourceEntity(66U);
    msg.setDestination(28799U);
    msg.setDestinationEntity(193U);
    msg.value = 0.484242533437;

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
    msg.setTimeStamp(0.719520120773);
    msg.setSource(49625U);
    msg.setSourceEntity(223U);
    msg.setDestination(34370U);
    msg.setDestinationEntity(97U);
    msg.value = 0.390878053224;

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
    msg.setTimeStamp(0.0993147880221);
    msg.setSource(17906U);
    msg.setSourceEntity(108U);
    msg.setDestination(25817U);
    msg.setDestinationEntity(114U);
    msg.value = 0.441786929767;

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
    msg.setTimeStamp(0.833339769468);
    msg.setSource(43602U);
    msg.setSourceEntity(195U);
    msg.setDestination(11144U);
    msg.setDestinationEntity(139U);
    msg.value = 0.765317530449;

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
    msg.setTimeStamp(0.0593816660955);
    msg.setSource(38059U);
    msg.setSourceEntity(22U);
    msg.setDestination(59637U);
    msg.setDestinationEntity(19U);
    msg.value = 0.773304136261;

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
    msg.setTimeStamp(0.903033961637);
    msg.setSource(33635U);
    msg.setSourceEntity(227U);
    msg.setDestination(53621U);
    msg.setDestinationEntity(28U);
    msg.value = 0.489868570956;

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
    msg.setTimeStamp(0.274526373887);
    msg.setSource(47109U);
    msg.setSourceEntity(200U);
    msg.setDestination(6668U);
    msg.setDestinationEntity(198U);
    msg.value = 0.925937764708;

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
    msg.setTimeStamp(0.64788209628);
    msg.setSource(36798U);
    msg.setSourceEntity(137U);
    msg.setDestination(34075U);
    msg.setDestinationEntity(31U);
    msg.value = 0.169909553553;

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
    msg.setTimeStamp(0.956897627493);
    msg.setSource(18888U);
    msg.setSourceEntity(123U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(42U);
    msg.value = 0.297490280775;

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
    msg.setTimeStamp(0.820815549121);
    msg.setSource(43881U);
    msg.setSourceEntity(82U);
    msg.setDestination(15241U);
    msg.setDestinationEntity(79U);
    msg.value = 0.989217494514;

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
    msg.setTimeStamp(0.137082922091);
    msg.setSource(15951U);
    msg.setSourceEntity(3U);
    msg.setDestination(51566U);
    msg.setDestinationEntity(112U);
    msg.value = 0.762467469613;

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
    msg.setTimeStamp(0.804530925187);
    msg.setSource(25370U);
    msg.setSourceEntity(16U);
    msg.setDestination(3367U);
    msg.setDestinationEntity(144U);
    msg.id = 33U;
    msg.zoom = 168U;
    msg.action = 180U;

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
    msg.setTimeStamp(0.980875726168);
    msg.setSource(38363U);
    msg.setSourceEntity(156U);
    msg.setDestination(32474U);
    msg.setDestinationEntity(226U);
    msg.id = 181U;
    msg.zoom = 223U;
    msg.action = 204U;

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
    msg.setTimeStamp(0.83556246576);
    msg.setSource(12531U);
    msg.setSourceEntity(100U);
    msg.setDestination(57213U);
    msg.setDestinationEntity(235U);
    msg.id = 26U;
    msg.zoom = 203U;
    msg.action = 64U;

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
    msg.setTimeStamp(0.850219820811);
    msg.setSource(12689U);
    msg.setSourceEntity(249U);
    msg.setDestination(21578U);
    msg.setDestinationEntity(22U);
    msg.id = 53U;
    msg.value = 0.806011882621;

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
    msg.setTimeStamp(0.267988531723);
    msg.setSource(60849U);
    msg.setSourceEntity(31U);
    msg.setDestination(32805U);
    msg.setDestinationEntity(220U);
    msg.id = 111U;
    msg.value = 0.537291191617;

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
    msg.setTimeStamp(0.391684496323);
    msg.setSource(27595U);
    msg.setSourceEntity(249U);
    msg.setDestination(52650U);
    msg.setDestinationEntity(201U);
    msg.id = 57U;
    msg.value = 0.458225278267;

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
    msg.setTimeStamp(0.232381111854);
    msg.setSource(34857U);
    msg.setSourceEntity(223U);
    msg.setDestination(52937U);
    msg.setDestinationEntity(88U);
    msg.id = 50U;
    msg.value = 0.41565394512;

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
    msg.setTimeStamp(0.875361727595);
    msg.setSource(29185U);
    msg.setSourceEntity(142U);
    msg.setDestination(24992U);
    msg.setDestinationEntity(75U);
    msg.id = 241U;
    msg.value = 0.914688949524;

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
    msg.setTimeStamp(0.128749784799);
    msg.setSource(21656U);
    msg.setSourceEntity(78U);
    msg.setDestination(9103U);
    msg.setDestinationEntity(58U);
    msg.id = 160U;
    msg.value = 0.443648187148;

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
    msg.setTimeStamp(0.0339859578927);
    msg.setSource(37440U);
    msg.setSourceEntity(77U);
    msg.setDestination(17664U);
    msg.setDestinationEntity(37U);
    msg.id = 199U;
    msg.angle = 0.387017269722;

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
    msg.setTimeStamp(0.655457710501);
    msg.setSource(11929U);
    msg.setSourceEntity(225U);
    msg.setDestination(40744U);
    msg.setDestinationEntity(105U);
    msg.id = 155U;
    msg.angle = 0.843916190166;

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
    msg.setTimeStamp(0.727148613218);
    msg.setSource(4406U);
    msg.setSourceEntity(41U);
    msg.setDestination(8696U);
    msg.setDestinationEntity(81U);
    msg.id = 80U;
    msg.angle = 0.989771130456;

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
    msg.setTimeStamp(0.888132384789);
    msg.setSource(48032U);
    msg.setSourceEntity(252U);
    msg.setDestination(41255U);
    msg.setDestinationEntity(196U);
    msg.op = 170U;
    msg.actions.assign("TCPKJBSUFIGBCUQYLWKRQAKQWNVLDCHEEUZCTIJUBPBOOMHUZPDYRFDPFNLZILTOPILJJCCRRDAHGZUZJDLXNCNWKTANWCLERCTXWNEQMZYNEJIPLOMOOKHVZPEVMIQHUEITWDIQQYRSATLOXCFPVEIWXUYXYYHVZWXQJJFGKFYUTRBHRGXGRXFAHVGFSVQAVKBDYDIEWBWGAMMASNRHABX");

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
    msg.setTimeStamp(0.782994244573);
    msg.setSource(20302U);
    msg.setSourceEntity(157U);
    msg.setDestination(64054U);
    msg.setDestinationEntity(55U);
    msg.op = 224U;
    msg.actions.assign("GASZEAFQOHJQFYZHGBIUJRKLBLXJNGHJBRCHLMLZCTHCOFGFAQWXGUREHKEPSWJVEVHMSOZTIXTTZLPMICUKGKIUTJYYYMRLMKILARJCFVOPZUTEQJBQHKBAFDKPDZTITVQPJHUMQGFMMUFMXSBBNVRCOTRNCDPQZXEBVWDBXDXYGIPSDOKSVIIYGWKNVRYNWNGPAQEVERMZWNSBVCFLHELWDSJYPCWOXDAOAXOOAIUFNCUWQD");

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
    msg.setTimeStamp(0.706237988995);
    msg.setSource(38256U);
    msg.setSourceEntity(72U);
    msg.setDestination(48173U);
    msg.setDestinationEntity(60U);
    msg.op = 35U;
    msg.actions.assign("VTZJPQICCLTUVRLNLFZDRPKYNQEOGHGFYJJDDVPWPKWMMHHUXXZQYDKTGQNKABJZEOSHMJCMCOUQXENHSLGYGEKLPEENOA");

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
    msg.setTimeStamp(0.805908410433);
    msg.setSource(59337U);
    msg.setSourceEntity(126U);
    msg.setDestination(47859U);
    msg.setDestinationEntity(115U);
    msg.actions.assign("GUYLNCIIRJDLZSIZHGZXWMOKSWPWKQZNEYLUTFCYBXHTSVUUDRNTNRVLEQIUICMQAFWVOLTYCFJVXUOPSTBXAJCKFSQZILZMYPDCQADNVNOOWBBZUBNKGUJIVCMYXAFQOYAYFMAVOKHYXHRKKEJBENAFFJIAZWBSDRVWPDQENWEASHRGGDAMRGMGLGQCTPPMTDHEFOSPJVZSKBXEUIPICJQPRXBSMYJ");

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
    msg.setTimeStamp(0.899189029007);
    msg.setSource(47125U);
    msg.setSourceEntity(92U);
    msg.setDestination(18176U);
    msg.setDestinationEntity(236U);
    msg.actions.assign("TYODJAYEVXLTFVURZPEZRCXLZJWYQMDAEBRBFGGUYBVRIXMUHNZGHRSVSOKCZLNIXNQXLGSWFEYTPMKQOMATCLPDKAINHEQIGKGFWIODKBWCFFJIRJHUIMFNZXXWRPDCAQSTOXWCYTEJOLHNQNNQHELPCDOQCDVJNGAKFHYLFWKRSKSOBSKVGQXIMRBXPZVFSDWTUHZHEMRUIAJLGNWYUODMIYBYZQBWDHEPPTSOUULJPT");

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
    msg.setTimeStamp(0.921294574438);
    msg.setSource(25526U);
    msg.setSourceEntity(179U);
    msg.setDestination(16782U);
    msg.setDestinationEntity(146U);
    msg.actions.assign("JAQHMQZOGWMPDIOOASZBNNCMPMULORGVDOQIFUVNFIBEMBHYRKKDGYNYFFPCLTESFRKFPLWRNNJTOTATJFGLZVWZQLGGRZQQJICYDDKWDPWPJRWVXUSFYDCHDXUUNRZWIKZYABETGRHHMSTYVVYEAOKWIOVXHQKGHKBVEPIUEUGCXVYXAJRE");

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
    msg.setTimeStamp(0.389502936051);
    msg.setSource(50587U);
    msg.setSourceEntity(82U);
    msg.setDestination(24912U);
    msg.setDestinationEntity(202U);
    msg.button = 88U;
    msg.value = 11U;

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
    msg.setTimeStamp(0.0844197944324);
    msg.setSource(29984U);
    msg.setSourceEntity(123U);
    msg.setDestination(18750U);
    msg.setDestinationEntity(226U);
    msg.button = 97U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.569761940597);
    msg.setSource(24082U);
    msg.setSourceEntity(93U);
    msg.setDestination(30705U);
    msg.setDestinationEntity(163U);
    msg.button = 52U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.188713210289);
    msg.setSource(44447U);
    msg.setSourceEntity(34U);
    msg.setDestination(64061U);
    msg.setDestinationEntity(176U);
    msg.op = 142U;
    msg.text.assign("JPONWGWZSFCXVUCMBEPLCWKELPSOTVFIUBEGJNLVGBNIBAHGAITDJZBLQICLFPWHXMEQUIQHUUWTBWJVFVPSEESHJYKVABZNTSLMMWZHZKQYCXRRNUESRQFDKADEGDHRPODURNCNXBSUEABJXVTWRXHCJLWIORLMDJZNKKGYQPPMNOYLWVCQJHTAGYYAJUOKPKDSZGYMMOIUCRAAXAGPYNQIQZ");

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
    msg.setTimeStamp(0.180305552698);
    msg.setSource(61827U);
    msg.setSourceEntity(35U);
    msg.setDestination(7955U);
    msg.setDestinationEntity(96U);
    msg.op = 110U;
    msg.text.assign("DEUQTHLFLQHLDGYCELPWJLDJAXNRBMGIDYQVXGYFGYXVSCZUEYPZHCVS");

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
    msg.setTimeStamp(0.669880596916);
    msg.setSource(34629U);
    msg.setSourceEntity(141U);
    msg.setDestination(54461U);
    msg.setDestinationEntity(212U);
    msg.op = 110U;
    msg.text.assign("OOAVYFSKVFTZWAHBXNMQQKLKNNZDCYTNXQIWZGSOPTVHBJXVTNMCTAVKIVNEHBDVORKTJDZBGFWHFMHLJYDLXFEZFBUSOLSUNTISSBCFALQZRLKKCGUNOEECZQJWAXMVLNUPIJEXQCJOUAYPLOUBIYRUYFGQPBUEGAHW");

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
    msg.setTimeStamp(0.954266259155);
    msg.setSource(44480U);
    msg.setSourceEntity(149U);
    msg.setDestination(18776U);
    msg.setDestinationEntity(146U);
    msg.op = 248U;
    msg.time_remain = 0.43244555173;
    msg.sched_time = 0.206671911932;

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
    msg.setTimeStamp(0.16423577266);
    msg.setSource(42002U);
    msg.setSourceEntity(233U);
    msg.setDestination(38442U);
    msg.setDestinationEntity(59U);
    msg.op = 112U;
    msg.time_remain = 0.940412467528;
    msg.sched_time = 0.158524606837;

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
    msg.setTimeStamp(0.410204819464);
    msg.setSource(40226U);
    msg.setSourceEntity(157U);
    msg.setDestination(15297U);
    msg.setDestinationEntity(9U);
    msg.op = 30U;
    msg.time_remain = 0.815814765987;
    msg.sched_time = 0.794163536536;

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
    msg.setTimeStamp(0.956791970684);
    msg.setSource(3788U);
    msg.setSourceEntity(139U);
    msg.setDestination(25682U);
    msg.setDestinationEntity(40U);
    msg.name.assign("GHJUOPELFRJBBJYSBZUGASQISVUYHXRJVKMYRXEXTKKYGIAFMZEINZDY");
    msg.op = 44U;
    msg.sched_time = 0.603445763371;

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
    msg.setTimeStamp(0.835339565847);
    msg.setSource(49208U);
    msg.setSourceEntity(40U);
    msg.setDestination(20819U);
    msg.setDestinationEntity(55U);
    msg.name.assign("DOVKCMPSHRRJECXLQHZUJUSDRQVYABTTLPUJWEAVCAOYRTBLWNFQBPMSRATXUIHICXMUEAOCGKXBITRSBSOYKGEXPLDIGXMXWCGQYPJFORWNMIZNDZCLMVVJFXAMGQHDJMIWWLIHDIOHAJFUSKGRPYWLHNKWAGVQLMWEDGNZLIEFEBEZVFUDOCTP");
    msg.op = 145U;
    msg.sched_time = 0.492189290997;

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
    msg.setTimeStamp(0.983196406716);
    msg.setSource(22462U);
    msg.setSourceEntity(132U);
    msg.setDestination(59725U);
    msg.setDestinationEntity(54U);
    msg.name.assign("UFWOTMDKFWHKORJIDLSOUCONYQPIABYVAKGSIKECWTYDUMATLOMZXRASCTPQTZWYACWOBQHIBYPFCMHNDLDTYWGTN");
    msg.op = 112U;
    msg.sched_time = 0.0655996714213;

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
    msg.setTimeStamp(0.911030272903);
    msg.setSource(47384U);
    msg.setSourceEntity(185U);
    msg.setDestination(30428U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.503986364264);
    msg.setSource(29194U);
    msg.setSourceEntity(9U);
    msg.setDestination(31549U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.152962971387);
    msg.setSource(44854U);
    msg.setSourceEntity(107U);
    msg.setDestination(42050U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.873511349387);
    msg.setSource(28053U);
    msg.setSourceEntity(124U);
    msg.setDestination(25776U);
    msg.setDestinationEntity(210U);
    msg.name.assign("ATLRNRUJIXQSKMJ");
    msg.state = 195U;

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
    msg.setTimeStamp(0.00259256891848);
    msg.setSource(19940U);
    msg.setSourceEntity(33U);
    msg.setDestination(59741U);
    msg.setDestinationEntity(193U);
    msg.name.assign("PAICJHAFVFTLKFWOEISXMQXIOHRKOKIGFXRBZAUXDGODLVIHGWYTWTNEJPCKKGIWLWTMPNUSVQUUBKGPEXNLNAWEPVZMBGZYEQJOQFDZUIDWOKNDZQHBYLHAUMGCNWAFSKMNDBQHLJFYLVQIBJXBJKTSGVDZEYUISTXEPKGVCQCHMPXHFBRRLFNVTEWDQTRZHSJZSXJAEBSYUPCYFUPCUZ");
    msg.state = 227U;

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
    msg.setTimeStamp(0.855772100543);
    msg.setSource(2981U);
    msg.setSourceEntity(3U);
    msg.setDestination(36434U);
    msg.setDestinationEntity(250U);
    msg.name.assign("BHRCCDRVVRDJYDBBIGCZENIGDMFEVOPJTFIWOBWNIYOODKSRIFVVFXEZWAQXKLHPWVQIOCHTBFOYNXKLELRLZWCYUNYZVGFPCXZZKEQHKRPLTZDXALHGWNPJTAWQNTXMHAIUTQCEQFTGNRDAYIOPFCMREMLYOEPEH");
    msg.state = 246U;

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
    msg.setTimeStamp(0.866762320506);
    msg.setSource(63342U);
    msg.setSourceEntity(113U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(57U);
    msg.name.assign("YQFOEMLFOMDVCIXILYWCYDSZMCLFWZROGZXEXMDDPVGSFDIIMTAKVUWDAQHZRLXSCIFANAEYLYNROTOVQJVFHKHRIOHJJDSATNRYJS");
    msg.value = 193U;

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
    msg.setTimeStamp(0.777083676506);
    msg.setSource(42355U);
    msg.setSourceEntity(163U);
    msg.setDestination(16590U);
    msg.setDestinationEntity(234U);
    msg.name.assign("FQPBRSIRYDWZYFRIMIVETHMUMYLUXJULWNDXZFSGRKQCOQMDNAXKBNOLTRQPLEXMEYYHBPTS");
    msg.value = 123U;

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
    msg.setTimeStamp(0.169790464592);
    msg.setSource(37342U);
    msg.setSourceEntity(105U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(193U);
    msg.name.assign("QGULMVFLIKFWSASASYPYAGXFJWBLTYDHROVNWWRQTYZNLZBRAKEAHADRUPMXLBVXMTSIEPDNJQDNJTOVTMNHYQVVOJFGOBHGNNGMQJXPKWZVAIOVSYRYOIBLTKCNYUCMMWIPXFUDZIMWFFBGRKKLCHHRDAIZISDFOKAZULR");
    msg.value = 135U;

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
    msg.setTimeStamp(0.486872258191);
    msg.setSource(16206U);
    msg.setSourceEntity(2U);
    msg.setDestination(65331U);
    msg.setDestinationEntity(1U);
    msg.name.assign("HDFTYTTLCZUTYWAZBAXWXIUWTOIFGYMQSLFMDGQEHHKJOJTPPVFEGYIXIPOUJQDMKAEAZRVWLVAZWOIDRLMCDACGXNTVVQPNSZXPZVXYOSEK");

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
    msg.setTimeStamp(0.177288613628);
    msg.setSource(19597U);
    msg.setSourceEntity(89U);
    msg.setDestination(3668U);
    msg.setDestinationEntity(159U);
    msg.name.assign("RCFYAJOIPFHHOLNHGRITNCRTQIVRGKIYJSZESLLTCRPBKSWXOVSITXKPRIPDCWIXANVNUDHGZTUWTDGMSWQANFJFYRDPMQULULVLFOGBUBKCVTXVAZMNBRXZDZMOCKMDBGCDQEULQZIUJSEQCWSNPZJUMABVLFVTWRDCBAFJEXXKKNOFCEGZHPQDNOWKPRYGWXYHVQEQNO");

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
    msg.setTimeStamp(0.400092056302);
    msg.setSource(1439U);
    msg.setSourceEntity(67U);
    msg.setDestination(24310U);
    msg.setDestinationEntity(203U);
    msg.name.assign("JXOFUSYJTQBEKSVMGEJAHMLONCRPUNGWPFYISNFBUZIFWHYMFOTXWARDWIAUIORNL");

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
    msg.setTimeStamp(0.240716890173);
    msg.setSource(11970U);
    msg.setSourceEntity(212U);
    msg.setDestination(21916U);
    msg.setDestinationEntity(116U);
    msg.name.assign("NQVCSAMIUBMKDGTL");
    msg.value = 126U;

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
    msg.setTimeStamp(0.299874617333);
    msg.setSource(27818U);
    msg.setSourceEntity(245U);
    msg.setDestination(53554U);
    msg.setDestinationEntity(171U);
    msg.name.assign("RJSHJOKNDCACLHBIRVAALRXYCMHCMNVDZNAVEXRXYUFGFVVPZDOEOMTDKFKCCTWNNKJGQYRXJYGDOHOHFBUOZNEAVMKWTUFXAAJAWIJMZQWQUPGDSTRIXGVUDUBXSMSEQRWC");
    msg.value = 186U;

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
    msg.setTimeStamp(0.609786751484);
    msg.setSource(3856U);
    msg.setSourceEntity(236U);
    msg.setDestination(12523U);
    msg.setDestinationEntity(203U);
    msg.name.assign("SVWTWIGAQYEMUVEPMGATFWIVPXTWLRRUTQMOFJVMPIKRUGPWHVACGSUIBAYKNUEHXCMELLPDSWVDKJUQOMYXRVJCIQOXAPFKFLZNXCMGQEZJGESPGHGVCCSXZAQYPKZLFKDRMKHRWQSTQCBNQHXHAETTJFUMJZLGANFHDJFTUBYNUNELRSICDXZBTVINOZRQHUINLBRONSGODEOMJTWBBNOOKYDEOHDXSJPZCIBKRYYAIYFABDZFHYDLWBKX");
    msg.value = 120U;

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
    msg.setTimeStamp(0.425638220689);
    msg.setSource(43214U);
    msg.setSourceEntity(195U);
    msg.setDestination(4645U);
    msg.setDestinationEntity(94U);
    msg.id = 123U;
    msg.period = 1947219580U;
    msg.duty_cycle = 2288583321U;

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
    msg.setTimeStamp(0.499519850225);
    msg.setSource(10550U);
    msg.setSourceEntity(170U);
    msg.setDestination(7886U);
    msg.setDestinationEntity(214U);
    msg.id = 50U;
    msg.period = 3589164137U;
    msg.duty_cycle = 1929171606U;

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
    msg.setTimeStamp(0.98093269886);
    msg.setSource(62092U);
    msg.setSourceEntity(95U);
    msg.setDestination(43817U);
    msg.setDestinationEntity(7U);
    msg.id = 194U;
    msg.period = 3947647344U;
    msg.duty_cycle = 3225464581U;

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
    msg.setTimeStamp(0.150465042483);
    msg.setSource(29613U);
    msg.setSourceEntity(11U);
    msg.setDestination(3534U);
    msg.setDestinationEntity(47U);
    msg.id = 225U;
    msg.period = 4169067529U;
    msg.duty_cycle = 2307004739U;

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
    msg.setTimeStamp(0.341681232887);
    msg.setSource(15602U);
    msg.setSourceEntity(49U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(131U);
    msg.id = 212U;
    msg.period = 1855612038U;
    msg.duty_cycle = 4044140776U;

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
    msg.setTimeStamp(0.543542661666);
    msg.setSource(42387U);
    msg.setSourceEntity(74U);
    msg.setDestination(35026U);
    msg.setDestinationEntity(209U);
    msg.id = 197U;
    msg.period = 3023922647U;
    msg.duty_cycle = 4020140061U;

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
    msg.setTimeStamp(0.994282078323);
    msg.setSource(37864U);
    msg.setSourceEntity(180U);
    msg.setDestination(21244U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.149170085885;
    msg.lon = 0.389665112499;
    msg.height = 0.8465650479;
    msg.x = 0.410044554775;
    msg.y = 0.377019860349;
    msg.z = 0.686641965754;
    msg.phi = 0.142924734654;
    msg.theta = 0.559388400793;
    msg.psi = 0.301993089777;
    msg.u = 0.0872085025697;
    msg.v = 0.00788721085527;
    msg.w = 0.361021633213;
    msg.vx = 0.740597224958;
    msg.vy = 0.129657236351;
    msg.vz = 0.189077669829;
    msg.p = 0.608979060685;
    msg.q = 0.835479222653;
    msg.r = 0.0319395363758;
    msg.depth = 0.471709308045;
    msg.alt = 0.499988170661;

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
    msg.setTimeStamp(0.765309857935);
    msg.setSource(48070U);
    msg.setSourceEntity(215U);
    msg.setDestination(55934U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.297293778686;
    msg.lon = 0.484506160573;
    msg.height = 0.492129763885;
    msg.x = 0.506390232843;
    msg.y = 0.828925358724;
    msg.z = 0.974207111074;
    msg.phi = 0.11313993378;
    msg.theta = 0.686541537577;
    msg.psi = 0.916917558312;
    msg.u = 0.00679933773748;
    msg.v = 0.0268526191526;
    msg.w = 0.684732846379;
    msg.vx = 0.802730470701;
    msg.vy = 0.530969048575;
    msg.vz = 0.396973013479;
    msg.p = 0.00534196435488;
    msg.q = 0.440374725742;
    msg.r = 0.912675221781;
    msg.depth = 0.628789983918;
    msg.alt = 0.755516777281;

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
    msg.setTimeStamp(0.598076147309);
    msg.setSource(50048U);
    msg.setSourceEntity(147U);
    msg.setDestination(39495U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.190658751576;
    msg.lon = 0.185457569943;
    msg.height = 0.0656019077865;
    msg.x = 0.470313837084;
    msg.y = 0.367056502655;
    msg.z = 0.981380478149;
    msg.phi = 0.231415313193;
    msg.theta = 0.259600623088;
    msg.psi = 0.00635866466831;
    msg.u = 0.170174073825;
    msg.v = 0.129420584042;
    msg.w = 0.659285847962;
    msg.vx = 0.843023720018;
    msg.vy = 0.261938455614;
    msg.vz = 0.167494779811;
    msg.p = 0.196028948179;
    msg.q = 0.683317513414;
    msg.r = 0.284293729604;
    msg.depth = 0.55276868707;
    msg.alt = 0.496144590487;

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
    msg.setTimeStamp(0.859761596115);
    msg.setSource(43282U);
    msg.setSourceEntity(55U);
    msg.setDestination(28459U);
    msg.setDestinationEntity(206U);
    msg.x = 0.134792862395;
    msg.y = 0.531571629891;
    msg.z = 0.433041343775;

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
    msg.setTimeStamp(0.743442678);
    msg.setSource(47928U);
    msg.setSourceEntity(130U);
    msg.setDestination(31417U);
    msg.setDestinationEntity(130U);
    msg.x = 0.454599455242;
    msg.y = 0.864619726706;
    msg.z = 0.989461227265;

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
    msg.setTimeStamp(0.895917443254);
    msg.setSource(9324U);
    msg.setSourceEntity(26U);
    msg.setDestination(13306U);
    msg.setDestinationEntity(150U);
    msg.x = 0.31070488194;
    msg.y = 0.639456913533;
    msg.z = 0.321180057944;

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
    msg.setTimeStamp(0.45265089166);
    msg.setSource(28897U);
    msg.setSourceEntity(103U);
    msg.setDestination(63973U);
    msg.setDestinationEntity(155U);
    msg.value = 0.254824039419;

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
    msg.setTimeStamp(0.384290062726);
    msg.setSource(26162U);
    msg.setSourceEntity(125U);
    msg.setDestination(56742U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0688520169013;

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
    msg.setTimeStamp(0.295734807603);
    msg.setSource(2748U);
    msg.setSourceEntity(185U);
    msg.setDestination(17671U);
    msg.setDestinationEntity(135U);
    msg.value = 0.818916944872;

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
    msg.setTimeStamp(0.688684800974);
    msg.setSource(37050U);
    msg.setSourceEntity(137U);
    msg.setDestination(53757U);
    msg.setDestinationEntity(77U);
    msg.value = 0.52525741897;

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
    msg.setTimeStamp(0.136788575589);
    msg.setSource(9784U);
    msg.setSourceEntity(134U);
    msg.setDestination(32313U);
    msg.setDestinationEntity(246U);
    msg.value = 0.120857746755;

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
    msg.setTimeStamp(0.802893084074);
    msg.setSource(23909U);
    msg.setSourceEntity(148U);
    msg.setDestination(22592U);
    msg.setDestinationEntity(241U);
    msg.value = 0.26919067127;

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
    msg.setTimeStamp(0.175578800551);
    msg.setSource(50451U);
    msg.setSourceEntity(43U);
    msg.setDestination(31693U);
    msg.setDestinationEntity(13U);
    msg.x = 0.23533013385;
    msg.y = 0.242447215751;
    msg.z = 0.736708765023;
    msg.phi = 0.0535888442374;
    msg.theta = 0.625915486473;
    msg.psi = 0.422603450931;
    msg.p = 0.58753826819;
    msg.q = 0.124284209863;
    msg.r = 0.592316612862;
    msg.u = 0.544004796596;
    msg.v = 0.624482597679;
    msg.w = 0.192230660955;
    msg.bias_psi = 0.927830470097;
    msg.bias_r = 0.598694368308;

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
    msg.setTimeStamp(0.426107716153);
    msg.setSource(11344U);
    msg.setSourceEntity(35U);
    msg.setDestination(40295U);
    msg.setDestinationEntity(10U);
    msg.x = 0.688441958019;
    msg.y = 0.177503191773;
    msg.z = 0.562070138759;
    msg.phi = 0.83987926497;
    msg.theta = 0.691128881017;
    msg.psi = 0.668337284201;
    msg.p = 0.605374705986;
    msg.q = 0.884249016286;
    msg.r = 0.528195628359;
    msg.u = 0.0824828956379;
    msg.v = 0.747487600638;
    msg.w = 0.578494387845;
    msg.bias_psi = 0.254592921847;
    msg.bias_r = 0.14385200385;

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
    msg.setTimeStamp(0.870113887827);
    msg.setSource(50379U);
    msg.setSourceEntity(87U);
    msg.setDestination(49238U);
    msg.setDestinationEntity(68U);
    msg.x = 0.151953510553;
    msg.y = 0.567312581952;
    msg.z = 0.819133032722;
    msg.phi = 0.807449560661;
    msg.theta = 0.27705100337;
    msg.psi = 0.637984085367;
    msg.p = 0.917984142223;
    msg.q = 0.1797144293;
    msg.r = 0.141991044993;
    msg.u = 0.250055554534;
    msg.v = 0.19950075515;
    msg.w = 0.268551796598;
    msg.bias_psi = 0.332073118879;
    msg.bias_r = 0.0490187423134;

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
    msg.setTimeStamp(0.470805402096);
    msg.setSource(31551U);
    msg.setSourceEntity(188U);
    msg.setDestination(55625U);
    msg.setDestinationEntity(119U);
    msg.bias_psi = 0.168517434589;
    msg.bias_r = 0.437217910291;
    msg.cog = 0.817816333201;
    msg.cyaw = 0.748167295783;
    msg.lbl_rej_level = 0.193163422556;
    msg.gps_rej_level = 0.141886165499;
    msg.custom_x = 0.30197617503;
    msg.custom_y = 0.768346954824;
    msg.custom_z = 0.59277919448;

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
    msg.setTimeStamp(0.863724032784);
    msg.setSource(18911U);
    msg.setSourceEntity(179U);
    msg.setDestination(49742U);
    msg.setDestinationEntity(144U);
    msg.bias_psi = 0.515441354066;
    msg.bias_r = 0.499267690397;
    msg.cog = 0.204534841035;
    msg.cyaw = 0.692231804536;
    msg.lbl_rej_level = 0.367988519656;
    msg.gps_rej_level = 0.780747926583;
    msg.custom_x = 0.96933075077;
    msg.custom_y = 0.949993770552;
    msg.custom_z = 0.696302663967;

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
    msg.setTimeStamp(0.0948425810211);
    msg.setSource(10338U);
    msg.setSourceEntity(81U);
    msg.setDestination(61607U);
    msg.setDestinationEntity(131U);
    msg.bias_psi = 0.384251819715;
    msg.bias_r = 0.481395656388;
    msg.cog = 0.8919429476;
    msg.cyaw = 0.258614487754;
    msg.lbl_rej_level = 0.763573082272;
    msg.gps_rej_level = 0.137716541376;
    msg.custom_x = 0.154170526217;
    msg.custom_y = 0.789600806866;
    msg.custom_z = 0.163354825333;

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
    msg.setTimeStamp(0.12385180426);
    msg.setSource(7636U);
    msg.setSourceEntity(254U);
    msg.setDestination(24968U);
    msg.setDestinationEntity(102U);
    msg.utc_time = 0.577484782342;
    msg.reason = 218U;

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
    msg.setTimeStamp(0.214016409228);
    msg.setSource(17246U);
    msg.setSourceEntity(60U);
    msg.setDestination(45050U);
    msg.setDestinationEntity(169U);
    msg.utc_time = 0.575770133184;
    msg.reason = 21U;

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
    msg.setTimeStamp(0.349215442631);
    msg.setSource(55728U);
    msg.setSourceEntity(140U);
    msg.setDestination(35141U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.910213973051;
    msg.reason = 185U;

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
    msg.setTimeStamp(0.0351833181995);
    msg.setSource(40358U);
    msg.setSourceEntity(237U);
    msg.setDestination(49669U);
    msg.setDestinationEntity(46U);
    msg.id = 82U;
    msg.range = 0.210837691027;
    msg.acceptance = 104U;

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
    msg.setTimeStamp(0.339663907057);
    msg.setSource(18802U);
    msg.setSourceEntity(162U);
    msg.setDestination(64698U);
    msg.setDestinationEntity(72U);
    msg.id = 171U;
    msg.range = 0.523471422353;
    msg.acceptance = 105U;

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
    msg.setTimeStamp(0.733168914283);
    msg.setSource(4543U);
    msg.setSourceEntity(79U);
    msg.setDestination(36699U);
    msg.setDestinationEntity(92U);
    msg.id = 172U;
    msg.range = 0.918647258928;
    msg.acceptance = 132U;

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
    msg.setTimeStamp(0.726471432211);
    msg.setSource(9457U);
    msg.setSourceEntity(101U);
    msg.setDestination(47333U);
    msg.setDestinationEntity(105U);
    msg.type = 83U;
    msg.reason = 49U;
    msg.value = 0.424453422142;
    msg.timestep = 0.43694725139;

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
    msg.setTimeStamp(0.865038453815);
    msg.setSource(27995U);
    msg.setSourceEntity(67U);
    msg.setDestination(16549U);
    msg.setDestinationEntity(49U);
    msg.type = 61U;
    msg.reason = 34U;
    msg.value = 0.801951252849;
    msg.timestep = 0.467384588183;

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
    msg.setTimeStamp(0.741585211703);
    msg.setSource(41435U);
    msg.setSourceEntity(32U);
    msg.setDestination(44088U);
    msg.setDestinationEntity(171U);
    msg.type = 142U;
    msg.reason = 239U;
    msg.value = 0.183808255259;
    msg.timestep = 0.784776888371;

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
    msg.setTimeStamp(0.166601440127);
    msg.setSource(16330U);
    msg.setSourceEntity(113U);
    msg.setDestination(5698U);
    msg.setDestinationEntity(69U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RWYYCPXLLQZLCHNCHPUTTDCJXONSTMZBUVKQCRZTIRFXJQGUQFCCDNMJTNEWRSXNARLWZLQTFJPOBVFBDVINZGUZSEVTPFIFGABULI");
    tmp_msg_0.lat = 0.628333666058;
    tmp_msg_0.lon = 0.803529036008;
    tmp_msg_0.depth = 0.663130312517;
    tmp_msg_0.query_channel = 205U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 36U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.564623488093;
    msg.y = 0.973132802647;
    msg.var_x = 0.125376562954;
    msg.var_y = 0.625700048008;
    msg.distance = 0.211411027961;

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
    msg.setTimeStamp(0.411224865235);
    msg.setSource(10944U);
    msg.setSourceEntity(48U);
    msg.setDestination(32620U);
    msg.setDestinationEntity(136U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UKHKUITYCGDHKWFNJEBDQDPJNJSLWLZMHRTDVQRMTLQCIWTOPFHYJHAQVYNLEM");
    tmp_msg_0.lat = 0.382985092551;
    tmp_msg_0.lon = 0.70212666286;
    tmp_msg_0.depth = 0.648132580035;
    tmp_msg_0.query_channel = 129U;
    tmp_msg_0.reply_channel = 204U;
    tmp_msg_0.transponder_delay = 86U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0207097481;
    msg.y = 0.706455431986;
    msg.var_x = 0.801403887675;
    msg.var_y = 0.178883038271;
    msg.distance = 0.0127027080736;

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
    msg.setTimeStamp(0.378981626864);
    msg.setSource(47996U);
    msg.setSourceEntity(55U);
    msg.setDestination(59577U);
    msg.setDestinationEntity(209U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TCUKSGHKYYXYTGERXAMGSZTNJYSTLODVZGSBJLVZUIDLZDQNLXJKNFQQLNAPNVNPMYCTRBYMUKCRXLGN");
    tmp_msg_0.lat = 0.913102002333;
    tmp_msg_0.lon = 0.759044923278;
    tmp_msg_0.depth = 0.574056938811;
    tmp_msg_0.query_channel = 10U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 36U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.373806715061;
    msg.y = 0.559837181991;
    msg.var_x = 0.311012607102;
    msg.var_y = 0.848894105021;
    msg.distance = 0.883900932193;

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
    msg.setTimeStamp(0.156059840729);
    msg.setSource(51129U);
    msg.setSourceEntity(192U);
    msg.setDestination(49923U);
    msg.setDestinationEntity(21U);
    msg.state = 120U;

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
    msg.setTimeStamp(0.193287103762);
    msg.setSource(31695U);
    msg.setSourceEntity(199U);
    msg.setDestination(46502U);
    msg.setDestinationEntity(114U);
    msg.state = 34U;

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
    msg.setTimeStamp(0.744663591163);
    msg.setSource(31057U);
    msg.setSourceEntity(217U);
    msg.setDestination(34971U);
    msg.setDestinationEntity(151U);
    msg.state = 130U;

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
    msg.setTimeStamp(0.695492983644);
    msg.setSource(21041U);
    msg.setSourceEntity(136U);
    msg.setDestination(38144U);
    msg.setDestinationEntity(225U);
    msg.x = 0.179232014606;
    msg.y = 0.701174720342;
    msg.z = 0.71269597055;

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
    msg.setTimeStamp(0.182535282743);
    msg.setSource(33378U);
    msg.setSourceEntity(231U);
    msg.setDestination(55594U);
    msg.setDestinationEntity(151U);
    msg.x = 0.525056395087;
    msg.y = 0.764374903034;
    msg.z = 0.440848842313;

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
    msg.setTimeStamp(0.0237552766282);
    msg.setSource(26077U);
    msg.setSourceEntity(130U);
    msg.setDestination(38256U);
    msg.setDestinationEntity(76U);
    msg.x = 0.207068284825;
    msg.y = 0.665188640173;
    msg.z = 0.771884015587;

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
    msg.setTimeStamp(0.738444964805);
    msg.setSource(24409U);
    msg.setSourceEntity(187U);
    msg.setDestination(20565U);
    msg.setDestinationEntity(45U);
    msg.va = 0.969200591133;
    msg.aoa = 0.543705011999;
    msg.ssa = 0.680365884149;

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
    msg.setTimeStamp(0.225018398595);
    msg.setSource(28161U);
    msg.setSourceEntity(95U);
    msg.setDestination(53794U);
    msg.setDestinationEntity(23U);
    msg.va = 0.984011907018;
    msg.aoa = 0.69292353626;
    msg.ssa = 0.788136387702;

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
    msg.setTimeStamp(0.643290948151);
    msg.setSource(39562U);
    msg.setSourceEntity(86U);
    msg.setDestination(53544U);
    msg.setDestinationEntity(253U);
    msg.va = 0.759570141499;
    msg.aoa = 0.333522341999;
    msg.ssa = 0.470513111835;

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
    msg.setTimeStamp(0.0296373926389);
    msg.setSource(47620U);
    msg.setSourceEntity(15U);
    msg.setDestination(18660U);
    msg.setDestinationEntity(162U);
    msg.value = 0.74898198827;

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
    msg.setTimeStamp(0.732825813388);
    msg.setSource(17582U);
    msg.setSourceEntity(252U);
    msg.setDestination(18436U);
    msg.setDestinationEntity(102U);
    msg.value = 0.541994559251;

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
    msg.setTimeStamp(0.843839421456);
    msg.setSource(31433U);
    msg.setSourceEntity(173U);
    msg.setDestination(38406U);
    msg.setDestinationEntity(182U);
    msg.value = 0.477531821739;

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
    msg.setTimeStamp(0.0494018593838);
    msg.setSource(49405U);
    msg.setSourceEntity(157U);
    msg.setDestination(9202U);
    msg.setDestinationEntity(165U);
    msg.value = 0.0503763845474;
    msg.z_units = 189U;

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
    msg.setTimeStamp(0.564458540841);
    msg.setSource(43147U);
    msg.setSourceEntity(9U);
    msg.setDestination(33516U);
    msg.setDestinationEntity(8U);
    msg.value = 0.545172404731;
    msg.z_units = 189U;

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
    msg.setTimeStamp(0.13217247777);
    msg.setSource(53246U);
    msg.setSourceEntity(126U);
    msg.setDestination(39768U);
    msg.setDestinationEntity(167U);
    msg.value = 0.586724802067;
    msg.z_units = 158U;

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
    msg.setTimeStamp(0.269903931731);
    msg.setSource(4448U);
    msg.setSourceEntity(220U);
    msg.setDestination(12460U);
    msg.setDestinationEntity(7U);
    msg.value = 0.558459465448;
    msg.speed_units = 103U;

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
    msg.setTimeStamp(0.87260071764);
    msg.setSource(42522U);
    msg.setSourceEntity(225U);
    msg.setDestination(6655U);
    msg.setDestinationEntity(77U);
    msg.value = 0.804985323828;
    msg.speed_units = 92U;

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
    msg.setTimeStamp(0.46502133672);
    msg.setSource(30365U);
    msg.setSourceEntity(170U);
    msg.setDestination(65424U);
    msg.setDestinationEntity(38U);
    msg.value = 0.0287096887551;
    msg.speed_units = 106U;

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
    msg.setTimeStamp(0.247368079528);
    msg.setSource(3049U);
    msg.setSourceEntity(136U);
    msg.setDestination(15227U);
    msg.setDestinationEntity(63U);
    msg.value = 0.353857291312;

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
    msg.setTimeStamp(0.554877942838);
    msg.setSource(43371U);
    msg.setSourceEntity(124U);
    msg.setDestination(7635U);
    msg.setDestinationEntity(1U);
    msg.value = 0.618631870042;

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
    msg.setTimeStamp(0.516149725322);
    msg.setSource(63521U);
    msg.setSourceEntity(254U);
    msg.setDestination(2319U);
    msg.setDestinationEntity(50U);
    msg.value = 0.0840581888857;

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
    msg.setTimeStamp(0.723581933777);
    msg.setSource(570U);
    msg.setSourceEntity(17U);
    msg.setDestination(39343U);
    msg.setDestinationEntity(222U);
    msg.value = 0.617634018648;

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
    msg.setTimeStamp(0.955801434684);
    msg.setSource(1547U);
    msg.setSourceEntity(249U);
    msg.setDestination(25996U);
    msg.setDestinationEntity(177U);
    msg.value = 0.304230461474;

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
    msg.setTimeStamp(0.605846429942);
    msg.setSource(32383U);
    msg.setSourceEntity(157U);
    msg.setDestination(40414U);
    msg.setDestinationEntity(100U);
    msg.value = 0.983264772964;

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
    msg.setTimeStamp(0.78865213131);
    msg.setSource(33001U);
    msg.setSourceEntity(172U);
    msg.setDestination(3420U);
    msg.setDestinationEntity(145U);
    msg.value = 0.71940292124;

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
    msg.setTimeStamp(0.58285543194);
    msg.setSource(27477U);
    msg.setSourceEntity(176U);
    msg.setDestination(1459U);
    msg.setDestinationEntity(235U);
    msg.value = 0.127705271503;

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
    msg.setTimeStamp(0.968200550565);
    msg.setSource(56898U);
    msg.setSourceEntity(120U);
    msg.setDestination(23500U);
    msg.setDestinationEntity(169U);
    msg.value = 0.00863854642521;

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
    msg.setTimeStamp(0.59141570211);
    msg.setSource(5014U);
    msg.setSourceEntity(189U);
    msg.setDestination(33739U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 2360161760U;
    msg.start_lat = 0.603955333073;
    msg.start_lon = 0.35636462089;
    msg.start_z = 0.143013927449;
    msg.start_z_units = 128U;
    msg.end_lat = 0.264406537448;
    msg.end_lon = 0.0363947158318;
    msg.end_z = 0.692782880403;
    msg.end_z_units = 239U;
    msg.speed = 0.917866001847;
    msg.speed_units = 40U;
    msg.lradius = 0.145694875081;
    msg.flags = 197U;

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
    msg.setTimeStamp(0.680702178907);
    msg.setSource(25455U);
    msg.setSourceEntity(204U);
    msg.setDestination(28590U);
    msg.setDestinationEntity(129U);
    msg.path_ref = 186254043U;
    msg.start_lat = 0.895698282648;
    msg.start_lon = 0.275502848479;
    msg.start_z = 0.509908821851;
    msg.start_z_units = 155U;
    msg.end_lat = 0.137854777426;
    msg.end_lon = 0.992261798554;
    msg.end_z = 0.616885361605;
    msg.end_z_units = 60U;
    msg.speed = 0.433151588577;
    msg.speed_units = 35U;
    msg.lradius = 0.023124708555;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.688124388634);
    msg.setSource(8902U);
    msg.setSourceEntity(183U);
    msg.setDestination(42762U);
    msg.setDestinationEntity(165U);
    msg.path_ref = 3480776194U;
    msg.start_lat = 0.0924319842208;
    msg.start_lon = 0.944918452254;
    msg.start_z = 0.359779619157;
    msg.start_z_units = 15U;
    msg.end_lat = 0.633001205136;
    msg.end_lon = 0.498039127894;
    msg.end_z = 0.0963282426953;
    msg.end_z_units = 52U;
    msg.speed = 0.926575324271;
    msg.speed_units = 40U;
    msg.lradius = 0.630044170734;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.629784520313);
    msg.setSource(25239U);
    msg.setSourceEntity(249U);
    msg.setDestination(6600U);
    msg.setDestinationEntity(154U);
    msg.x = 0.144452910087;
    msg.y = 0.855106728025;
    msg.z = 0.866397072679;
    msg.k = 0.819679514223;
    msg.m = 0.762138439841;
    msg.n = 0.518638517307;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.755089002194);
    msg.setSource(29246U);
    msg.setSourceEntity(160U);
    msg.setDestination(52180U);
    msg.setDestinationEntity(66U);
    msg.x = 0.760431301239;
    msg.y = 0.0134266474349;
    msg.z = 0.0365803528567;
    msg.k = 0.658003267478;
    msg.m = 0.194988581249;
    msg.n = 0.756360140476;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.51292449835);
    msg.setSource(40181U);
    msg.setSourceEntity(233U);
    msg.setDestination(32854U);
    msg.setDestinationEntity(217U);
    msg.x = 0.0868095084868;
    msg.y = 0.451714299318;
    msg.z = 0.626020045528;
    msg.k = 0.758386166854;
    msg.m = 0.725141366259;
    msg.n = 0.349743979964;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.557605772394);
    msg.setSource(35682U);
    msg.setSourceEntity(93U);
    msg.setDestination(44477U);
    msg.setDestinationEntity(170U);
    msg.value = 0.921385120986;

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
    msg.setTimeStamp(0.32533853764);
    msg.setSource(57760U);
    msg.setSourceEntity(78U);
    msg.setDestination(57975U);
    msg.setDestinationEntity(129U);
    msg.value = 0.253245502673;

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
    msg.setTimeStamp(0.144413615419);
    msg.setSource(43993U);
    msg.setSourceEntity(214U);
    msg.setDestination(33690U);
    msg.setDestinationEntity(48U);
    msg.value = 0.689487399408;

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
    msg.setTimeStamp(0.364503500197);
    msg.setSource(19566U);
    msg.setSourceEntity(76U);
    msg.setDestination(16094U);
    msg.setDestinationEntity(197U);
    msg.u = 0.297921259902;
    msg.v = 0.535288708133;
    msg.w = 0.418306474925;
    msg.p = 0.0807492896379;
    msg.q = 0.207386769851;
    msg.r = 0.432158390491;
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
    msg.setTimeStamp(0.057182015398);
    msg.setSource(59415U);
    msg.setSourceEntity(130U);
    msg.setDestination(55697U);
    msg.setDestinationEntity(25U);
    msg.u = 0.378156486236;
    msg.v = 0.927689170782;
    msg.w = 0.188001714456;
    msg.p = 0.192163688997;
    msg.q = 0.776550273273;
    msg.r = 0.469229558053;
    msg.flags = 43U;

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
    msg.setTimeStamp(0.207729188504);
    msg.setSource(54194U);
    msg.setSourceEntity(49U);
    msg.setDestination(18323U);
    msg.setDestinationEntity(237U);
    msg.u = 0.799852716574;
    msg.v = 0.527759268463;
    msg.w = 0.248452212783;
    msg.p = 0.0130924199726;
    msg.q = 0.472167836934;
    msg.r = 0.0307899923615;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.870491381157);
    msg.setSource(22316U);
    msg.setSourceEntity(221U);
    msg.setDestination(11576U);
    msg.setDestinationEntity(136U);
    msg.path_ref = 2942347994U;
    msg.start_lat = 0.62149619921;
    msg.start_lon = 0.260756007377;
    msg.start_z = 0.229915830337;
    msg.start_z_units = 250U;
    msg.end_lat = 0.406433428224;
    msg.end_lon = 0.537037498504;
    msg.end_z = 0.0411253828179;
    msg.end_z_units = 180U;
    msg.lradius = 0.449024876675;
    msg.flags = 157U;
    msg.x = 0.0236341883644;
    msg.y = 0.811587032423;
    msg.z = 0.000462985017279;
    msg.vx = 0.650403045087;
    msg.vy = 0.859690002626;
    msg.vz = 0.376388164778;
    msg.course_error = 0.497349539176;
    msg.eta = 48896U;

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
    msg.setTimeStamp(0.972054219368);
    msg.setSource(6076U);
    msg.setSourceEntity(196U);
    msg.setDestination(29745U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 3595566942U;
    msg.start_lat = 0.446862864493;
    msg.start_lon = 0.973477752533;
    msg.start_z = 0.491289039081;
    msg.start_z_units = 191U;
    msg.end_lat = 0.639975571102;
    msg.end_lon = 0.96175276327;
    msg.end_z = 0.95638285629;
    msg.end_z_units = 218U;
    msg.lradius = 0.0377452466602;
    msg.flags = 155U;
    msg.x = 0.132540353308;
    msg.y = 0.39694964359;
    msg.z = 0.630222803391;
    msg.vx = 0.658992700319;
    msg.vy = 0.90146951302;
    msg.vz = 0.836173416423;
    msg.course_error = 0.946516264142;
    msg.eta = 45485U;

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
    msg.setTimeStamp(0.334203496083);
    msg.setSource(62148U);
    msg.setSourceEntity(194U);
    msg.setDestination(48128U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 2683655311U;
    msg.start_lat = 0.139686332618;
    msg.start_lon = 0.232484291926;
    msg.start_z = 0.15169727052;
    msg.start_z_units = 57U;
    msg.end_lat = 0.242887190918;
    msg.end_lon = 0.478937199206;
    msg.end_z = 0.213009766595;
    msg.end_z_units = 207U;
    msg.lradius = 0.0215801519722;
    msg.flags = 147U;
    msg.x = 0.157562759288;
    msg.y = 0.308137807032;
    msg.z = 0.44692712678;
    msg.vx = 0.115771347314;
    msg.vy = 0.674075230039;
    msg.vz = 0.715387676229;
    msg.course_error = 0.506172334826;
    msg.eta = 5057U;

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
    msg.setTimeStamp(0.779196840001);
    msg.setSource(49157U);
    msg.setSourceEntity(101U);
    msg.setDestination(47675U);
    msg.setDestinationEntity(190U);
    msg.k = 0.714705911938;
    msg.m = 0.367382783655;
    msg.n = 0.569033762072;

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
    msg.setTimeStamp(0.106790445768);
    msg.setSource(22891U);
    msg.setSourceEntity(19U);
    msg.setDestination(30236U);
    msg.setDestinationEntity(158U);
    msg.k = 0.51399437233;
    msg.m = 0.643600072379;
    msg.n = 0.594412958654;

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
    msg.setTimeStamp(0.997721433301);
    msg.setSource(23133U);
    msg.setSourceEntity(61U);
    msg.setDestination(12677U);
    msg.setDestinationEntity(66U);
    msg.k = 0.516447593848;
    msg.m = 0.0569900217125;
    msg.n = 0.104858792893;

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
    msg.setTimeStamp(0.410502985597);
    msg.setSource(33926U);
    msg.setSourceEntity(115U);
    msg.setDestination(59809U);
    msg.setDestinationEntity(72U);
    msg.p = 0.238804463084;
    msg.i = 0.0755746569402;
    msg.d = 0.172648865332;
    msg.a = 0.761679275295;

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
    msg.setTimeStamp(0.345553163226);
    msg.setSource(2098U);
    msg.setSourceEntity(142U);
    msg.setDestination(45278U);
    msg.setDestinationEntity(133U);
    msg.p = 0.197051191699;
    msg.i = 0.17275553556;
    msg.d = 0.720596291617;
    msg.a = 0.944741922361;

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
    msg.setTimeStamp(0.059090821502);
    msg.setSource(38471U);
    msg.setSourceEntity(171U);
    msg.setDestination(12818U);
    msg.setDestinationEntity(211U);
    msg.p = 0.393061491856;
    msg.i = 0.0396695259282;
    msg.d = 0.204770299987;
    msg.a = 0.429857822128;

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
    msg.setTimeStamp(0.189040410786);
    msg.setSource(45211U);
    msg.setSourceEntity(228U);
    msg.setDestination(7492U);
    msg.setDestinationEntity(53U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.128482922887);
    msg.setSource(34330U);
    msg.setSourceEntity(79U);
    msg.setDestination(38858U);
    msg.setDestinationEntity(123U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.635531422821);
    msg.setSource(19665U);
    msg.setSourceEntity(32U);
    msg.setDestination(47651U);
    msg.setDestinationEntity(150U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.227840402676);
    msg.setSource(23902U);
    msg.setSourceEntity(0U);
    msg.setDestination(15933U);
    msg.setDestinationEntity(57U);
    msg.x = 0.0341857574599;
    msg.y = 0.411503018243;
    msg.z = 0.969299575227;
    msg.vx = 0.929016641281;
    msg.vy = 0.633356604688;
    msg.vz = 0.231632717256;
    msg.ax = 0.388836194827;
    msg.ay = 0.395171432779;
    msg.az = 0.113302405151;
    msg.flags = 18030U;

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
    msg.setTimeStamp(0.301614986561);
    msg.setSource(40172U);
    msg.setSourceEntity(200U);
    msg.setDestination(60184U);
    msg.setDestinationEntity(148U);
    msg.x = 0.42478657188;
    msg.y = 0.062705058747;
    msg.z = 0.0982018228076;
    msg.vx = 0.356373098774;
    msg.vy = 0.13760009191;
    msg.vz = 0.900826920672;
    msg.ax = 0.928852825008;
    msg.ay = 0.974648678531;
    msg.az = 0.977629828342;
    msg.flags = 18959U;

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
    msg.setTimeStamp(0.929304250876);
    msg.setSource(17592U);
    msg.setSourceEntity(225U);
    msg.setDestination(15481U);
    msg.setDestinationEntity(183U);
    msg.x = 0.687765629974;
    msg.y = 0.49473741586;
    msg.z = 0.798742105203;
    msg.vx = 0.693576473433;
    msg.vy = 0.0540591522136;
    msg.vz = 0.729963557877;
    msg.ax = 0.410929285333;
    msg.ay = 0.843318865101;
    msg.az = 0.872280244613;
    msg.flags = 31652U;

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
    msg.setTimeStamp(0.805381224483);
    msg.setSource(20176U);
    msg.setSourceEntity(21U);
    msg.setDestination(58563U);
    msg.setDestinationEntity(56U);
    msg.value = 0.195609525109;

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
    msg.setTimeStamp(0.822981351693);
    msg.setSource(22713U);
    msg.setSourceEntity(11U);
    msg.setDestination(8057U);
    msg.setDestinationEntity(210U);
    msg.value = 0.103924391521;

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
    msg.setTimeStamp(0.344510182);
    msg.setSource(7271U);
    msg.setSourceEntity(180U);
    msg.setDestination(21796U);
    msg.setDestinationEntity(145U);
    msg.value = 0.707068538082;

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
    msg.setTimeStamp(0.532311463899);
    msg.setSource(39699U);
    msg.setSourceEntity(16U);
    msg.setDestination(44126U);
    msg.setDestinationEntity(181U);
    msg.timeout = 8941U;
    msg.lat = 0.758666366493;
    msg.lon = 0.459493151373;
    msg.z = 0.287892819742;
    msg.z_units = 235U;
    msg.speed = 0.652921358436;
    msg.speed_units = 28U;
    msg.roll = 0.907381260976;
    msg.pitch = 0.891660910802;
    msg.yaw = 0.093861306357;
    msg.custom.assign("OBLKZCNVEUCXLWGUPABYNYAPXEIFEZIWSMBFPMOXYHJTQDAACLYHWYFRWWYQKUNKUGJLIZLUNKOTDH");

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
    msg.setTimeStamp(0.633715350145);
    msg.setSource(399U);
    msg.setSourceEntity(43U);
    msg.setDestination(21822U);
    msg.setDestinationEntity(192U);
    msg.timeout = 16010U;
    msg.lat = 0.288965682711;
    msg.lon = 0.0522390226933;
    msg.z = 0.544591808252;
    msg.z_units = 99U;
    msg.speed = 0.65486985887;
    msg.speed_units = 148U;
    msg.roll = 0.832545386374;
    msg.pitch = 0.257652956095;
    msg.yaw = 0.310445721449;
    msg.custom.assign("QFXOEIUWEVNKJUHIMTDSOJXNJPWCNRTUPMWOWGNTNYVSVNEZYOVUALDAPVQQLESVNBXGHQMXKZHDSBUMXDKTFPDMZWTRHKRMQGUAOV");

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
    msg.setTimeStamp(0.564564852458);
    msg.setSource(35455U);
    msg.setSourceEntity(178U);
    msg.setDestination(40620U);
    msg.setDestinationEntity(32U);
    msg.timeout = 50194U;
    msg.lat = 0.702126519991;
    msg.lon = 0.739793166353;
    msg.z = 0.439893923748;
    msg.z_units = 139U;
    msg.speed = 0.852103987071;
    msg.speed_units = 99U;
    msg.roll = 0.815188062438;
    msg.pitch = 0.336833703174;
    msg.yaw = 0.863093703141;
    msg.custom.assign("LKIUHOVTYKJZYVGRZPLCHZNDMMNIVZNLPADXZQOBIPOKDXNIUFQAHHNCRSUYMGGXHEMPPRUALEGAAQOBCLQLVFYSHOROQEVAVDTBIPFYMMSQ");

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
    msg.setTimeStamp(0.821806447387);
    msg.setSource(1718U);
    msg.setSourceEntity(209U);
    msg.setDestination(47346U);
    msg.setDestinationEntity(174U);
    msg.timeout = 10931U;
    msg.lat = 0.442564062758;
    msg.lon = 0.624893790321;
    msg.z = 0.909373639779;
    msg.z_units = 65U;
    msg.speed = 0.00918680958605;
    msg.speed_units = 167U;
    msg.duration = 29289U;
    msg.radius = 0.862176548623;
    msg.flags = 81U;
    msg.custom.assign("HMMFIHOGZKXWGFPYPLGGAOZSEDEEDMQUQCIHTREBZLRFPVMDHGVMALRAUGHOXZMLBPBYKCIJTYKMNNLLYKHYBXSCJNWJXKSXTUDCPFKWBGXDIJRSOUTRAKSTNCKIJWZZ");

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
    msg.setTimeStamp(0.178571937711);
    msg.setSource(11172U);
    msg.setSourceEntity(118U);
    msg.setDestination(22543U);
    msg.setDestinationEntity(81U);
    msg.timeout = 56154U;
    msg.lat = 0.673666200278;
    msg.lon = 0.407943601949;
    msg.z = 0.786423351881;
    msg.z_units = 59U;
    msg.speed = 0.327158517407;
    msg.speed_units = 135U;
    msg.duration = 63956U;
    msg.radius = 0.757140828084;
    msg.flags = 77U;
    msg.custom.assign("VZFSNSAUXWUPBDTLPESPNGZGDRFEEOMAQSJETHVRUXBODIQWQZMCHGKDHVSZULILYSKZMFHCZTDROFETKRFYLNYUYSGAEAUJNUZBJQBOOHCMTDWLCDBVKYKMBY");

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
    msg.setTimeStamp(0.0336121819575);
    msg.setSource(51853U);
    msg.setSourceEntity(184U);
    msg.setDestination(35767U);
    msg.setDestinationEntity(155U);
    msg.timeout = 30686U;
    msg.lat = 0.136331496738;
    msg.lon = 0.615543860284;
    msg.z = 0.50731269014;
    msg.z_units = 41U;
    msg.speed = 0.448781945881;
    msg.speed_units = 11U;
    msg.duration = 3675U;
    msg.radius = 0.838393441761;
    msg.flags = 141U;
    msg.custom.assign("JWFCHBMRKCZOBPEEEYASAQNEUUHCLOVVKCXLBUZXKTGDIIQGIHVEOQJQODTDGLTGJFREWBGFDIKVFZCQALJYNNXTVVYTPMUSLMBRKIFGXNDSHWCOJUZALLRNYJZWNSYRPPQRBFYPWUJTZXIRPFNIREBFMHGCMQKQTHMKSEPPJSRZZXAOSMVLUTZNWDDPXCWVYMNHOEMRSXCNYKKKBODGJQMHGCOATOFL");

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
    msg.setTimeStamp(0.995326679772);
    msg.setSource(42159U);
    msg.setSourceEntity(16U);
    msg.setDestination(2638U);
    msg.setDestinationEntity(61U);
    msg.custom.assign("ZZLOOJVKTMYAREAUID");

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
    msg.setTimeStamp(0.626667225761);
    msg.setSource(42612U);
    msg.setSourceEntity(183U);
    msg.setDestination(52148U);
    msg.setDestinationEntity(137U);
    msg.custom.assign("TAWFRBNMMOUKBWHTFCMZMWGPLDQTIGZYYEDQMMCDBNRKC");

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
    msg.setTimeStamp(0.0800177422866);
    msg.setSource(48165U);
    msg.setSourceEntity(165U);
    msg.setDestination(36418U);
    msg.setDestinationEntity(142U);
    msg.custom.assign("OEWFMTUEXKBJJAPNIQPHUKAF");

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
    msg.setTimeStamp(0.712372209779);
    msg.setSource(16689U);
    msg.setSourceEntity(11U);
    msg.setDestination(36941U);
    msg.setDestinationEntity(4U);
    msg.timeout = 26768U;
    msg.lat = 0.707668142922;
    msg.lon = 0.476210408448;
    msg.z = 0.775301628457;
    msg.z_units = 126U;
    msg.duration = 3611U;
    msg.speed = 0.945271785216;
    msg.speed_units = 14U;
    msg.type = 156U;
    msg.radius = 0.930987729314;
    msg.length = 0.127941934084;
    msg.bearing = 0.593020424572;
    msg.direction = 24U;
    msg.custom.assign("HSOOPQGPBXXOGTHZFBJREBYESUPIVGLNELWTBYCQYAVKCCAWRUQWYNPZLKOEADKTJFJDZVHPRFVURURARWCWMPIKHNJEVDQHNNHFQKBZCQDTDYHYMEPITKWSDXXQWTMFILJVUAJOCJRCMWVZQSSHASASJHMZQFGNZFDZIUTDIIOUXDRAKFWNLXOTJVUYTOLBOLNSGEJXVGRCYBNCYKMPZWQNOGFKSBZSFPLECAKAXM");

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
    msg.setTimeStamp(0.768401937437);
    msg.setSource(41458U);
    msg.setSourceEntity(20U);
    msg.setDestination(59950U);
    msg.setDestinationEntity(229U);
    msg.timeout = 25984U;
    msg.lat = 0.971110014247;
    msg.lon = 0.248117756971;
    msg.z = 0.908370812776;
    msg.z_units = 17U;
    msg.duration = 41971U;
    msg.speed = 0.358503891209;
    msg.speed_units = 16U;
    msg.type = 97U;
    msg.radius = 0.446217063104;
    msg.length = 0.263233675504;
    msg.bearing = 0.320830715154;
    msg.direction = 192U;
    msg.custom.assign("PBYXTMYSABUCKUEPLAKCBROKDGBHHBQPTPGDRHQRMREOHZQONUFBJCVISMTYQBTUVBWRQOQEUMPLZYUFFOYYQHIVUYACGNOMGBMWTQJJSGMFHXJXNPZWLPOZFJSAWHXHISAKX");

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
    msg.setTimeStamp(0.298829706613);
    msg.setSource(45155U);
    msg.setSourceEntity(245U);
    msg.setDestination(49833U);
    msg.setDestinationEntity(233U);
    msg.timeout = 27114U;
    msg.lat = 0.494954672781;
    msg.lon = 0.644211866144;
    msg.z = 0.621431036934;
    msg.z_units = 14U;
    msg.duration = 3426U;
    msg.speed = 0.981567296294;
    msg.speed_units = 210U;
    msg.type = 75U;
    msg.radius = 0.22302023836;
    msg.length = 0.548499376716;
    msg.bearing = 0.82602600806;
    msg.direction = 88U;
    msg.custom.assign("YQQHJGMAAEKBQOQOILNEYJRGVVXJRIDDWTGGBOOWWVLTBGIBHQIHCXLZZMUY");

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
    msg.setTimeStamp(0.302229134479);
    msg.setSource(6386U);
    msg.setSourceEntity(85U);
    msg.setDestination(35125U);
    msg.setDestinationEntity(5U);
    msg.duration = 8893U;
    msg.custom.assign("ECTIDGAYIRBTMTHQXVORFJSFMLOYWEWDBLSFEYZKTPXYDNUUQLMFMJMBXCTYFHZHVWCZRKPWQSKKTZCAPSNGXBRUBEKIUIRCGNXKNVZJPRSAFSQRGJBLUGYHDOENJSJARBEUCVWLXBMVEATHKWTVCVFIYNFEYTOMAQEYECSQKVDIRDIUL");

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
    msg.setTimeStamp(0.823173495613);
    msg.setSource(14177U);
    msg.setSourceEntity(118U);
    msg.setDestination(50020U);
    msg.setDestinationEntity(211U);
    msg.duration = 55071U;
    msg.custom.assign("HZALBGGOLQKQLKTPFHCRKEWRTCGRMMXQCNYPINQSAIMGTGZEUEAYWUHOMMTJNTPONAIQBCUZIDBOGBPXVXYKWJOBXFRHMDHXJKVNZAXZNUEDJRPDLNSVLLHDFBIMCDQSWRRWVLWVECFNSZKVSOWWOLZZQZAXJEYAUWTNAUETPYPCRTIJSHMYPVSRJRICVFTAFSDZGUMPLQDVUQXLOQJIXUSWGYJDCKTYIKFXDKOMGEBHYKFUB");

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
    msg.setTimeStamp(0.45220643857);
    msg.setSource(7037U);
    msg.setSourceEntity(145U);
    msg.setDestination(35104U);
    msg.setDestinationEntity(23U);
    msg.duration = 47264U;
    msg.custom.assign("TBZYOBNAPXSHTTEGVRFNCDZZEATCGLZUQUVPXEISYNBVFINDMQKWZOLKELOLDCWQIHPOQGMSYJJHUNAYXLKBKIURRKQKJYHHDIJPHAQKCTEVBMBTICAPQVWMVEGJJEAJCLRPPXMKYCLWRIEHQJGGISPLBSXZDJAEUJTHCXNWRNQUNNCFF");

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
    msg.setTimeStamp(0.514069004628);
    msg.setSource(46528U);
    msg.setSourceEntity(177U);
    msg.setDestination(10632U);
    msg.setDestinationEntity(5U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.480011556168;
    tmp_msg_0.z_units = 76U;
    msg.control.set(tmp_msg_0);
    msg.duration = 38425U;
    msg.custom.assign("IXZTBJGJPECMSCWVUYULYVKKUI");

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
    msg.setTimeStamp(0.483512830679);
    msg.setSource(61277U);
    msg.setSourceEntity(31U);
    msg.setDestination(25220U);
    msg.setDestinationEntity(149U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0460769938318;
    msg.control.set(tmp_msg_0);
    msg.duration = 25741U;
    msg.custom.assign("XSDXOIESNCQYBQAICDAOIEXLVXSKMQEZPAMJXPPFPRZHPHIMIEAGKEDLBGTRDCQXHDEBTKTUPSWZWCOYPWSKDMVUAZENCTANNMFYGHCVVBTYZGGLAMULDFBDEALEIUVSNQLIQJSRHKWBICXAEFKXHAY");

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
    msg.setTimeStamp(0.503844880646);
    msg.setSource(2019U);
    msg.setSourceEntity(247U);
    msg.setDestination(585U);
    msg.setDestinationEntity(204U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.811702915379;
    msg.control.set(tmp_msg_0);
    msg.duration = 62900U;
    msg.custom.assign("YQRENLBNSGKCBQPRBCFYOJUIJQDDPOXFAPVXKTLJTYRCJFZSLIHGFCGUNMTQDSSWZVMMEUUFAQNRPMWHBFSTUEGAMGOQAXUXYIDKXFWHILWWKEZAXZLHPACHNFALLIZMBXEHTEUKGEMTHILWMNYNODERSJGGRCYPXPVPOM");

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
    msg.setTimeStamp(0.856412117406);
    msg.setSource(25128U);
    msg.setSourceEntity(105U);
    msg.setDestination(52908U);
    msg.setDestinationEntity(172U);
    msg.timeout = 42784U;
    msg.lat = 0.223614623564;
    msg.lon = 0.132202904689;
    msg.z = 0.588726363655;
    msg.z_units = 115U;
    msg.speed = 0.46622769748;
    msg.speed_units = 47U;
    msg.bearing = 0.0204588300662;
    msg.cross_angle = 0.59614617291;
    msg.width = 0.97972940371;
    msg.length = 0.812319859975;
    msg.hstep = 0.461052851713;
    msg.coff = 252U;
    msg.alternation = 34U;
    msg.flags = 129U;
    msg.custom.assign("QRAOFFLTYEOXJYZTDANPAREVDMHNNAWJUXAKPVLGKMKPSWWWYBZIFDGBQCCGWBAKCNOSSJEKKMPENFZHXHAXIQCUEAIBIFHSONMJKRTYMFSIQDVRYPUYYVSZUEEKXZCNDDPZOTDPQLRMVYMG");

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
    msg.setTimeStamp(0.692175645865);
    msg.setSource(56282U);
    msg.setSourceEntity(10U);
    msg.setDestination(46890U);
    msg.setDestinationEntity(14U);
    msg.timeout = 9140U;
    msg.lat = 0.954984891971;
    msg.lon = 0.105943438058;
    msg.z = 0.0886459608499;
    msg.z_units = 197U;
    msg.speed = 0.70872690939;
    msg.speed_units = 83U;
    msg.bearing = 0.950624625069;
    msg.cross_angle = 0.628599917756;
    msg.width = 0.800496357396;
    msg.length = 0.639593311008;
    msg.hstep = 0.153685952179;
    msg.coff = 34U;
    msg.alternation = 187U;
    msg.flags = 128U;
    msg.custom.assign("TEOULGQBMOAHNVNNBEFASYHBRKABMOWLURCHGSNWKMYYODEWRXOYLPMYRJGSDVTGMSQFUTHCWJQKT");

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
    msg.setTimeStamp(0.7531209187);
    msg.setSource(57798U);
    msg.setSourceEntity(247U);
    msg.setDestination(12956U);
    msg.setDestinationEntity(249U);
    msg.timeout = 17580U;
    msg.lat = 0.494175257801;
    msg.lon = 0.193603662234;
    msg.z = 0.796172434393;
    msg.z_units = 250U;
    msg.speed = 0.977826112134;
    msg.speed_units = 201U;
    msg.bearing = 0.10298785722;
    msg.cross_angle = 0.978738850194;
    msg.width = 0.129163791223;
    msg.length = 0.606843336749;
    msg.hstep = 0.824624430585;
    msg.coff = 42U;
    msg.alternation = 236U;
    msg.flags = 189U;
    msg.custom.assign("IXTOQOKXCVQUEFNZREEJNMGGZZJNLRCDSUKVBMJCWQOOMJNYY");

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
    msg.setTimeStamp(0.854569766878);
    msg.setSource(8275U);
    msg.setSourceEntity(156U);
    msg.setDestination(22396U);
    msg.setDestinationEntity(145U);
    msg.timeout = 50887U;
    msg.lat = 0.388349744363;
    msg.lon = 0.318885724531;
    msg.z = 0.855872960894;
    msg.z_units = 95U;
    msg.speed = 0.688763908785;
    msg.speed_units = 83U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.234035420161;
    tmp_msg_0.y = 0.543210777509;
    tmp_msg_0.z = 0.0993406610833;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OFYCYPZFQIXJJZIENQKARSFHFLTZRLDLSHBHQACAAXVYHGYZYKITLICHT");

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
    msg.setTimeStamp(0.057462624972);
    msg.setSource(23394U);
    msg.setSourceEntity(156U);
    msg.setDestination(11373U);
    msg.setDestinationEntity(192U);
    msg.timeout = 3702U;
    msg.lat = 0.644490750282;
    msg.lon = 0.186862795746;
    msg.z = 0.295836042991;
    msg.z_units = 35U;
    msg.speed = 0.624158431658;
    msg.speed_units = 195U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0778351237828;
    tmp_msg_0.y = 0.851565990598;
    tmp_msg_0.z = 0.928283386636;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XDJJLRENVWAEGTSTZPTGUCXBVJFXHRTCIRLZSZYNIFBODFGFOVLBEDOTWZLHYOWFFHLMKVZWAWPRJWIKHYCUPDGNYHQHWUEPJHXVRBKAUZOTCVSKNCQUDPQAWSYBDMLGKMGMVFSQJMTSNLEMTBAOEQPXUIGOIYIUEWVKQCNDLHCRZZILPNAIGBXOFSTBZPIFKCNREDMYHKXUGESASJIGUQJCYSNMMALOAJNRDR");

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
    msg.setTimeStamp(0.163706428144);
    msg.setSource(30751U);
    msg.setSourceEntity(152U);
    msg.setDestination(64792U);
    msg.setDestinationEntity(8U);
    msg.timeout = 57319U;
    msg.lat = 0.380411520553;
    msg.lon = 0.791338362741;
    msg.z = 0.0620270343769;
    msg.z_units = 178U;
    msg.speed = 0.245752784764;
    msg.speed_units = 55U;
    msg.custom.assign("MQDJVZVDATAUPGEWRYOSKAAGIKITJANECLCIYWLXSUKQDFMURTONXBROGWWJMPGNOHLJIUYBEKZVPCSGPPSEELMYBXATNSQNRHQQZHXMXULDVJTLAHTGDPKPIDVYEDTWEXFJYQNRQCJZFLZIZCSUDNFKFRTHNOMEBKWXZKCVAXRUWIOFHTNZOVCLODHBWZCBPLGVFQI");

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
    msg.setTimeStamp(0.47512168889);
    msg.setSource(9049U);
    msg.setSourceEntity(44U);
    msg.setDestination(9298U);
    msg.setDestinationEntity(199U);
    msg.x = 0.33896029106;
    msg.y = 0.00705539120482;
    msg.z = 0.90078590862;

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
    msg.setTimeStamp(0.675233984241);
    msg.setSource(55036U);
    msg.setSourceEntity(158U);
    msg.setDestination(60098U);
    msg.setDestinationEntity(45U);
    msg.x = 0.266736042561;
    msg.y = 0.851425535451;
    msg.z = 0.156293914887;

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
    msg.setTimeStamp(0.172081170178);
    msg.setSource(41068U);
    msg.setSourceEntity(244U);
    msg.setDestination(42602U);
    msg.setDestinationEntity(73U);
    msg.x = 0.560086719226;
    msg.y = 0.66275423497;
    msg.z = 0.805516586636;

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
    msg.setTimeStamp(0.0225549273611);
    msg.setSource(36662U);
    msg.setSourceEntity(221U);
    msg.setDestination(11999U);
    msg.setDestinationEntity(40U);
    msg.timeout = 53670U;
    msg.lat = 0.791300476258;
    msg.lon = 0.288075106478;
    msg.z = 0.156216271802;
    msg.z_units = 66U;
    msg.amplitude = 0.796884593278;
    msg.pitch = 0.00662580690443;
    msg.speed = 0.139287107175;
    msg.speed_units = 123U;
    msg.custom.assign("ZPVMOFIUWRSXUGCQFQUQPMRGAWQFOSKDJBKECLTCKPOALJHZSIKNORFEFRGCLWVPBCBAGVMXFXIXUDQOWJDSKRXVGNNNCVQNTS");

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
    msg.setTimeStamp(0.164670714196);
    msg.setSource(52078U);
    msg.setSourceEntity(19U);
    msg.setDestination(11876U);
    msg.setDestinationEntity(207U);
    msg.timeout = 16854U;
    msg.lat = 0.724551458966;
    msg.lon = 0.391719468755;
    msg.z = 0.588161539643;
    msg.z_units = 21U;
    msg.amplitude = 0.804128188769;
    msg.pitch = 0.680936190971;
    msg.speed = 0.470018649773;
    msg.speed_units = 95U;
    msg.custom.assign("RTUGLRPOYFBUPTWOZXEVVLNUDKMVNDWMUFEZLFACLGTSTVXANRZCQACJUKKBPLAFBDFIJDSWXEAQIMUFHVKXZEHRYMBBPHEZBTBKSHGNHVFSMCUPIMINRNHPJIMNGJ");

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
    msg.setTimeStamp(0.457873521966);
    msg.setSource(41053U);
    msg.setSourceEntity(14U);
    msg.setDestination(9549U);
    msg.setDestinationEntity(182U);
    msg.timeout = 36328U;
    msg.lat = 0.118696793665;
    msg.lon = 0.859659292404;
    msg.z = 0.285647764595;
    msg.z_units = 237U;
    msg.amplitude = 0.829816241983;
    msg.pitch = 0.606759960446;
    msg.speed = 0.137659538666;
    msg.speed_units = 240U;
    msg.custom.assign("GSVLNZLMPDVOQYAXODIBRGMQOACYKRXUTJXFUKKENNQCKEOHDKQHBGMPYHKYZWSDFSXGEVMOCDZUWPYCPYNAOKLJVNHCLSRXHAWMMTPGVFNTFTGOKBXCFRCFPDGVEGXTAYUTLSFLZLJOKQLIZUJBZWAAUPBQWZMOBNVYEXQALPNNSYWZADAIUEPIBJTESDRWKDHIHMJIRHSMHJJEEZSIRHLRGFTRNWJWCOYVIFCMC");

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
    msg.setTimeStamp(0.551145853173);
    msg.setSource(12825U);
    msg.setSourceEntity(189U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.335991504791);
    msg.setSource(5949U);
    msg.setSourceEntity(190U);
    msg.setDestination(6377U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.967162325159);
    msg.setSource(36664U);
    msg.setSourceEntity(189U);
    msg.setDestination(52028U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.997763720772);
    msg.setSource(46988U);
    msg.setSourceEntity(195U);
    msg.setDestination(31929U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.876070996604;
    msg.lon = 0.550799189588;
    msg.z = 0.549075560672;
    msg.z_units = 253U;
    msg.radius = 0.328753008474;
    msg.duration = 45639U;
    msg.speed = 0.155186428152;
    msg.speed_units = 230U;
    msg.custom.assign("IGUFELVLAURWAPWH");

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
    msg.setTimeStamp(0.827235587944);
    msg.setSource(18555U);
    msg.setSourceEntity(137U);
    msg.setDestination(7431U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.31359138561;
    msg.lon = 0.314724972015;
    msg.z = 0.35024806341;
    msg.z_units = 31U;
    msg.radius = 0.39648443323;
    msg.duration = 9332U;
    msg.speed = 0.296156056422;
    msg.speed_units = 231U;
    msg.custom.assign("XSHYGZCVBQNSHCESYNOMGZPZYDAERRWBHIFECARJGRENQQLH");

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
    msg.setTimeStamp(0.237974292921);
    msg.setSource(12381U);
    msg.setSourceEntity(182U);
    msg.setDestination(20608U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.223626586628;
    msg.lon = 0.872758542126;
    msg.z = 0.831737953253;
    msg.z_units = 110U;
    msg.radius = 0.0945342817148;
    msg.duration = 27723U;
    msg.speed = 0.43291928685;
    msg.speed_units = 251U;
    msg.custom.assign("LYOKTQUGNIWHKOVNVKGNMWDYSVJLTIVDGJEXCBUZEWEIAWQBQXDUPXHKSDACHGMXDWGZLMV");

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
    msg.setTimeStamp(0.952503381405);
    msg.setSource(39140U);
    msg.setSourceEntity(192U);
    msg.setDestination(49367U);
    msg.setDestinationEntity(104U);
    msg.timeout = 12341U;
    msg.flags = 44U;
    msg.lat = 0.497126641025;
    msg.lon = 0.516343351274;
    msg.start_z = 0.58446721137;
    msg.start_z_units = 19U;
    msg.end_z = 0.453004880027;
    msg.end_z_units = 222U;
    msg.radius = 0.261001050068;
    msg.speed = 0.750011130478;
    msg.speed_units = 12U;
    msg.custom.assign("LXPGIDZPEOJYTSVIHOTVVNJIQWEFXTKWLBYGIAMPHKMWWFAX");

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
    msg.setTimeStamp(0.80999989884);
    msg.setSource(8607U);
    msg.setSourceEntity(91U);
    msg.setDestination(5584U);
    msg.setDestinationEntity(4U);
    msg.timeout = 13539U;
    msg.flags = 133U;
    msg.lat = 0.0292352608991;
    msg.lon = 0.058148934313;
    msg.start_z = 0.913482644869;
    msg.start_z_units = 174U;
    msg.end_z = 0.696732948388;
    msg.end_z_units = 162U;
    msg.radius = 0.203899559447;
    msg.speed = 0.925516119303;
    msg.speed_units = 121U;
    msg.custom.assign("WBGIZVJCVEFMDJYRKRFSYEOYGGEFIXTUDICKWTUSFKRDHFWFTQFZESNMOMOQRRHYUMXRKERXYDNLFIAPZEUVNZGHJAAGQCOHJZSWDTQPEDPMYLCJKXNGRQZUDXNYLNVBAMAMTDCIODPPBJFTCJKVBLIHXXHNKNRBYANQLGUQXCFEQWAHZOLXTPUWYAZIKSHILZUQDJOBWICYVGBUEACASOPSVWS");

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
    msg.setTimeStamp(0.0168299785864);
    msg.setSource(56643U);
    msg.setSourceEntity(242U);
    msg.setDestination(14816U);
    msg.setDestinationEntity(63U);
    msg.timeout = 43180U;
    msg.flags = 205U;
    msg.lat = 0.703120283659;
    msg.lon = 0.804394224103;
    msg.start_z = 0.834702330666;
    msg.start_z_units = 86U;
    msg.end_z = 0.332470283159;
    msg.end_z_units = 23U;
    msg.radius = 0.199976708484;
    msg.speed = 0.0841526371954;
    msg.speed_units = 201U;
    msg.custom.assign("CJPFNFHIFSMWRJVNVJMJFCJPNKZGQVPBKKIWTAAKJGIUVESIZMSOQARIMMQUMCLXKKOHMVQNYVNEZBWEUKHLDRKGHDPAZTUCATXPKCCHIEXHACETPGUZNYNPYJBDLEZROMLNHNBUZASQMWGBXOXSZRWXAZDYQYLXRHWLBUGIYDTS");

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
    msg.setTimeStamp(0.350917978984);
    msg.setSource(48022U);
    msg.setSourceEntity(246U);
    msg.setDestination(37162U);
    msg.setDestinationEntity(131U);
    msg.timeout = 5358U;
    msg.lat = 0.647592782119;
    msg.lon = 0.508420503072;
    msg.z = 0.283932785243;
    msg.z_units = 30U;
    msg.speed = 0.792890548558;
    msg.speed_units = 156U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.246545561349;
    tmp_msg_0.y = 0.756696044766;
    tmp_msg_0.z = 0.168628550807;
    tmp_msg_0.t = 0.910169394613;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HZUGTJZJRZEJHRHHFMYJJSSQFWWWJTFXBDMKXTCUCITKWTSHGDQTNINOAVFMKZXZXHWLIAYLSCOAJTYPKJOUVMENCXRQEVJGGGNAUXVGZORSFAAWMHDYUAKEBPMUZVPOUXWNZIOYCNQBIODKVWLZTNERVLATEXHFLLYQLDBLKKLKXCMIK");

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
    msg.setTimeStamp(0.583753782485);
    msg.setSource(55326U);
    msg.setSourceEntity(40U);
    msg.setDestination(51612U);
    msg.setDestinationEntity(223U);
    msg.timeout = 435U;
    msg.lat = 0.369454399129;
    msg.lon = 0.704010018992;
    msg.z = 0.60802029284;
    msg.z_units = 131U;
    msg.speed = 0.360286500939;
    msg.speed_units = 219U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.221007133163;
    tmp_msg_0.y = 0.918121362691;
    tmp_msg_0.z = 0.79980797671;
    tmp_msg_0.t = 0.868041368825;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FSIFVWKMOTCPCXPTZHZPIDNZNNIMGMIWEEPSCKXJQYMFLJHLFGSFYDUJTBBRUYHESRAWQVEZ");

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
    msg.setTimeStamp(0.108318346871);
    msg.setSource(56545U);
    msg.setSourceEntity(235U);
    msg.setDestination(20092U);
    msg.setDestinationEntity(166U);
    msg.timeout = 26393U;
    msg.lat = 0.235175940328;
    msg.lon = 0.371407946506;
    msg.z = 0.270897444926;
    msg.z_units = 84U;
    msg.speed = 0.924918156589;
    msg.speed_units = 76U;
    msg.custom.assign("HHCGFUPFFKNVXQGOITYHPYMBQOIWJJQUDBRZTMSVCKBISRPXCSTHKOCOZUCELHRWITFKDTFBSEZEAAYWOSGQEJQKCQLWWBVPMRLVNXGFZBJOQMXTICLHPFYUYPQXRNIGXGFLGKUUNZOSLKHMRNKENWEPDASIHWYJLMOBEGUAJAJZVKEHAUAWMTWMVZDRTDVAGVJRCJMSTSCQRIEB");

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
    msg.setTimeStamp(0.321225597045);
    msg.setSource(43537U);
    msg.setSourceEntity(88U);
    msg.setDestination(34600U);
    msg.setDestinationEntity(193U);
    msg.x = 0.941220926742;
    msg.y = 0.327488130051;
    msg.z = 0.583685095038;
    msg.t = 0.0337396153726;

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
    msg.setTimeStamp(0.605352994567);
    msg.setSource(51022U);
    msg.setSourceEntity(10U);
    msg.setDestination(54298U);
    msg.setDestinationEntity(130U);
    msg.x = 0.379914277139;
    msg.y = 0.528667609536;
    msg.z = 0.998664820822;
    msg.t = 0.857894730442;

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
    msg.setTimeStamp(0.215776831862);
    msg.setSource(27455U);
    msg.setSourceEntity(94U);
    msg.setDestination(33247U);
    msg.setDestinationEntity(132U);
    msg.x = 0.341036390288;
    msg.y = 0.963536358815;
    msg.z = 0.645160072178;
    msg.t = 0.146881637917;

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
    msg.setTimeStamp(0.350850846512);
    msg.setSource(26270U);
    msg.setSourceEntity(102U);
    msg.setDestination(17271U);
    msg.setDestinationEntity(95U);
    msg.timeout = 5113U;
    msg.name.assign("XLSHRPELONNSWBCOACIWJXUTIQRBWSEMULDUPJOEZDNJDMHTSAXXVWWQGLXESWFUQMRBKKPRXAKVYSZATFLFLAEVXSZKUPDTUJSNNEDTEYKOYTURYMBDMSLWRGJPECGFHSZMBIGFCIKLVWKZZAQBPGFALPJYBYQDCYGMZYURZPQMZHCDRJTHAKQFFKVGFVWUOOJFIUILIDGZODQYQWNBR");
    msg.custom.assign("EBULGXFAINDKZQVIWAJDIOSRQIWGJAQHYUNTMQYVIIQDCZMSBMOGNDEGY");

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
    msg.setTimeStamp(0.945572510486);
    msg.setSource(9646U);
    msg.setSourceEntity(209U);
    msg.setDestination(18981U);
    msg.setDestinationEntity(123U);
    msg.timeout = 39537U;
    msg.name.assign("EKMIFSDGAWVMOWJJCNATKRTKHZWQBMWRWMOJTATNQSIEZADJSWFGECAJLCIGHTYEZJIFPORXNWMUGUOSAWGDLKBICFSNOBBDLYXUGHCTFKXAVSVTVHZRBZAGVYSCPMMFCDXPYFCBJRQNZLNEOIDNQSKHBVLNLMXYNPOUBQKLWUQVTIIPDWZYADKTERHIGQUZXOZOJSHVGHFPMQHLEPUXFYTYHFQEMDRKXDEUYV");
    msg.custom.assign("ASWCIJGNFEPWRCNLADOTWGJSEOGTXRBAUXQFWKORCNMPOMKDTBJASTSVKT");

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
    msg.setTimeStamp(0.260926950272);
    msg.setSource(50677U);
    msg.setSourceEntity(196U);
    msg.setDestination(45776U);
    msg.setDestinationEntity(34U);
    msg.timeout = 48553U;
    msg.name.assign("ZFMOUDHVQPSAAGCBTXJZDVYMZDEPSEXFGVDHUWUBORBIGRUKMOCLOJBRIVGFFXQRHJWHVQGMPTNZQFWFCCEKNTHFEXCEZGQZFQMEWGLMWP");
    msg.custom.assign("PRALIGHVMUZWXFZWMSETZGLZNXNSAWRRXHSSUMGUGDYQYRIJQRWZVJHLIODZTSUDFJMSDTXFNBXTKIWLLQGPPAKKBEOPGMUIJN");

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
    msg.setTimeStamp(0.931859338398);
    msg.setSource(14812U);
    msg.setSourceEntity(101U);
    msg.setDestination(45183U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.634309343474;
    msg.lon = 0.11589526505;
    msg.z = 0.422961933535;
    msg.z_units = 123U;
    msg.speed = 0.159227499882;
    msg.speed_units = 5U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0137633424841;
    tmp_msg_0.y = 0.368750695238;
    tmp_msg_0.z = 0.614506385373;
    tmp_msg_0.t = 0.64741004724;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.654956693117;
    msg.custom.assign("PWNDBWEKBSYNMQPLUTFHFXCDAIQNQDFJAVKDGJJOYXP");

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
    msg.setTimeStamp(0.501358516653);
    msg.setSource(57280U);
    msg.setSourceEntity(30U);
    msg.setDestination(54948U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.992023222743;
    msg.lon = 0.822506915308;
    msg.z = 0.396489839109;
    msg.z_units = 219U;
    msg.speed = 0.115858533425;
    msg.speed_units = 147U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.680801572089;
    tmp_msg_0.y = 0.360669993101;
    tmp_msg_0.z = 0.435409110477;
    tmp_msg_0.t = 0.956843600023;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.564791368792;
    msg.custom.assign("FHDXGROKDEWZTGHLIQAFKKVEWWIPTDMHUEJPRMGUFAYGLQNIRRMECNJZDJTTBQZ");

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
    msg.setTimeStamp(0.246704173951);
    msg.setSource(48135U);
    msg.setSourceEntity(174U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.268200690184;
    msg.lon = 0.456471859957;
    msg.z = 0.302477878804;
    msg.z_units = 141U;
    msg.speed = 0.740671777168;
    msg.speed_units = 129U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.364708055898;
    tmp_msg_0.y = 0.75301840513;
    tmp_msg_0.z = 0.152874899502;
    tmp_msg_0.t = 0.656951255902;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 17106U;
    tmp_msg_1.off_x = 0.121764204135;
    tmp_msg_1.off_y = 0.826609868245;
    tmp_msg_1.off_z = 0.759729651233;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.975625151889;
    msg.custom.assign("XEORRHNGTIVONFSD");

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
    msg.setTimeStamp(0.327448056008);
    msg.setSource(32188U);
    msg.setSourceEntity(64U);
    msg.setDestination(8670U);
    msg.setDestinationEntity(6U);
    msg.vid = 42985U;
    msg.off_x = 0.52088321997;
    msg.off_y = 0.0844117789361;
    msg.off_z = 0.139459634748;

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
    msg.setTimeStamp(0.113892204103);
    msg.setSource(2199U);
    msg.setSourceEntity(212U);
    msg.setDestination(47496U);
    msg.setDestinationEntity(142U);
    msg.vid = 675U;
    msg.off_x = 0.653533286657;
    msg.off_y = 0.158275113126;
    msg.off_z = 0.573827262808;

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
    msg.setTimeStamp(0.603652158661);
    msg.setSource(34713U);
    msg.setSourceEntity(195U);
    msg.setDestination(62020U);
    msg.setDestinationEntity(95U);
    msg.vid = 34467U;
    msg.off_x = 0.11004815309;
    msg.off_y = 0.035236537611;
    msg.off_z = 0.85623450687;

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
    msg.setTimeStamp(0.263370292717);
    msg.setSource(11898U);
    msg.setSourceEntity(121U);
    msg.setDestination(22058U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.301299597343);
    msg.setSource(16655U);
    msg.setSourceEntity(177U);
    msg.setDestination(13314U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.577607124033);
    msg.setSource(16531U);
    msg.setSourceEntity(246U);
    msg.setDestination(55303U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.655249988613);
    msg.setSource(1673U);
    msg.setSourceEntity(151U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(152U);
    msg.mid = 54223U;

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
    msg.setTimeStamp(0.829061556959);
    msg.setSource(27590U);
    msg.setSourceEntity(56U);
    msg.setDestination(29318U);
    msg.setDestinationEntity(52U);
    msg.mid = 39564U;

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
    msg.setTimeStamp(0.413621542235);
    msg.setSource(61343U);
    msg.setSourceEntity(246U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(224U);
    msg.mid = 8448U;

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
    msg.setTimeStamp(0.47923685386);
    msg.setSource(40910U);
    msg.setSourceEntity(41U);
    msg.setDestination(52139U);
    msg.setDestinationEntity(119U);
    msg.state = 234U;
    msg.eta = 32494U;
    msg.info.assign("VUIPEDTUQXWGHVDSZEEAWCTNXCBSPJKFCKGTPGKREROSLBLLOVJJLNITROTNRG");

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
    msg.setTimeStamp(0.754752847486);
    msg.setSource(37302U);
    msg.setSourceEntity(174U);
    msg.setDestination(61324U);
    msg.setDestinationEntity(157U);
    msg.state = 192U;
    msg.eta = 6212U;
    msg.info.assign("URIRLYUZVGGMRHMNKRMHSIXNRWCWWQNBBTIVVKFWPOEDBLHTKZEZHXKHJBABUDXVBCSZLCRVWYTIGA");

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
    msg.setTimeStamp(0.918193195343);
    msg.setSource(5079U);
    msg.setSourceEntity(148U);
    msg.setDestination(12019U);
    msg.setDestinationEntity(36U);
    msg.state = 22U;
    msg.eta = 4628U;
    msg.info.assign("ZKPZZSGDXRDGAEDUSCOWEOQHSREBHPULGJARNUEIADRVLNAXIQKFXEZMDMXKIXRRNXFCEHLQYCSMQWYCTQTPXPTZPYCXILWSRJKUHKPYLPNIVKBNWLKPOEAXWLUPA");

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
    msg.setTimeStamp(0.0730282291992);
    msg.setSource(523U);
    msg.setSourceEntity(51U);
    msg.setDestination(2134U);
    msg.setDestinationEntity(120U);
    msg.system = 3111U;
    msg.duration = 14247U;
    msg.speed = 0.333736460759;
    msg.speed_units = 196U;
    msg.x = 0.378179051262;
    msg.y = 0.711351946826;
    msg.z = 0.0913353098204;
    msg.z_units = 254U;

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
    msg.setTimeStamp(0.0107663813294);
    msg.setSource(44988U);
    msg.setSourceEntity(178U);
    msg.setDestination(61101U);
    msg.setDestinationEntity(188U);
    msg.system = 2838U;
    msg.duration = 24084U;
    msg.speed = 0.836989475956;
    msg.speed_units = 60U;
    msg.x = 0.748382136438;
    msg.y = 0.932663773606;
    msg.z = 0.425188375251;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.734892611809);
    msg.setSource(53820U);
    msg.setSourceEntity(0U);
    msg.setDestination(47910U);
    msg.setDestinationEntity(69U);
    msg.system = 1285U;
    msg.duration = 42224U;
    msg.speed = 0.411972488949;
    msg.speed_units = 236U;
    msg.x = 0.538279102037;
    msg.y = 0.196137112717;
    msg.z = 0.0642259847956;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.396184358265);
    msg.setSource(49192U);
    msg.setSourceEntity(24U);
    msg.setDestination(109U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.277052499241;
    msg.lon = 0.685574537477;
    msg.speed = 0.309310299874;
    msg.speed_units = 204U;
    msg.duration = 33245U;
    msg.sys_a = 43295U;
    msg.sys_b = 31068U;
    msg.move_threshold = 0.696410795323;

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
    msg.setTimeStamp(0.24306002415);
    msg.setSource(49686U);
    msg.setSourceEntity(201U);
    msg.setDestination(24303U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.772570409234;
    msg.lon = 0.468841292426;
    msg.speed = 0.121955965642;
    msg.speed_units = 86U;
    msg.duration = 15831U;
    msg.sys_a = 20499U;
    msg.sys_b = 20126U;
    msg.move_threshold = 0.210262800973;

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
    msg.setTimeStamp(0.808498621646);
    msg.setSource(8528U);
    msg.setSourceEntity(46U);
    msg.setDestination(52546U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.9701641671;
    msg.lon = 0.0416460684592;
    msg.speed = 0.187776772701;
    msg.speed_units = 203U;
    msg.duration = 7965U;
    msg.sys_a = 45267U;
    msg.sys_b = 31512U;
    msg.move_threshold = 0.632491389748;

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
    msg.setTimeStamp(0.572335212266);
    msg.setSource(13737U);
    msg.setSourceEntity(36U);
    msg.setDestination(48395U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.815768100584;
    msg.lon = 0.686831301479;
    msg.z = 0.0771734535641;
    msg.z_units = 81U;
    msg.speed = 0.969479849037;
    msg.speed_units = 33U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.11136379552;
    tmp_msg_0.lon = 0.447063058926;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YSVFCZAAKAUXVDWCYNHCVRSMDDKIRKROHURQZLEULYBNHTYJJACIFVSPLITRZCYHIGNQFBWZPZBGPUSYHESORQTFUGAODGUONXJXWHMNQMDCFXOGCVGWJSQ");

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
    msg.setTimeStamp(0.301868269859);
    msg.setSource(17319U);
    msg.setSourceEntity(209U);
    msg.setDestination(15233U);
    msg.setDestinationEntity(21U);
    msg.lat = 5.02918790473e-05;
    msg.lon = 0.709940952723;
    msg.z = 0.457853037717;
    msg.z_units = 75U;
    msg.speed = 0.363845208664;
    msg.speed_units = 2U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.377460197102;
    tmp_msg_0.lon = 0.167931540873;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RDSRHTLIJGFECYAKSRSQTIZCBCXFGOBLXMZMLONQDWOSOIUAQXIUUX");

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
    msg.setTimeStamp(0.513235090333);
    msg.setSource(19539U);
    msg.setSourceEntity(140U);
    msg.setDestination(36806U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.496420483676;
    msg.lon = 0.201873250787;
    msg.z = 0.725709426894;
    msg.z_units = 219U;
    msg.speed = 0.656633896924;
    msg.speed_units = 42U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.44610922051;
    tmp_msg_0.lon = 0.932477174879;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZHAIUMJORXQBVQYSGGHYYHTNDNHNDBUPIIAFOCFKTBCLALDWDRPRESOPFMTPDCWJUJXRMRRGUFBZTYWKLQJVLNSCCGIGOUHAYIFTZXQIYWNFZCCKYUGJUXPMDKJEBAMIEHOTAOZMVWSIXXBBDWLEEARKLLSEXVDQKZJNTIQVSNADBCTMUXKLPWESQJXOPOYVMPWOHRJQBEVNGGJVHHBMSFWZFVKUGYCKRPEAPH");

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
    msg.setTimeStamp(0.570773580867);
    msg.setSource(48103U);
    msg.setSourceEntity(133U);
    msg.setDestination(44357U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.165261362542;
    msg.lon = 0.82888700561;

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
    msg.setTimeStamp(0.80449916129);
    msg.setSource(50416U);
    msg.setSourceEntity(19U);
    msg.setDestination(44095U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.0919695516879;
    msg.lon = 0.922491608623;

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
    msg.setTimeStamp(0.366385703743);
    msg.setSource(38641U);
    msg.setSourceEntity(154U);
    msg.setDestination(65452U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.552212742825;
    msg.lon = 0.459555980058;

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
    msg.setTimeStamp(0.557567156001);
    msg.setSource(26494U);
    msg.setSourceEntity(174U);
    msg.setDestination(35657U);
    msg.setDestinationEntity(225U);
    msg.timeout = 16663U;
    msg.lat = 0.702401209699;
    msg.lon = 0.359083229591;
    msg.z = 0.0553102089756;
    msg.z_units = 185U;
    msg.pitch = 0.451004380354;
    msg.amplitude = 0.343867074873;
    msg.duration = 18875U;
    msg.speed = 0.0815755043452;
    msg.speed_units = 148U;
    msg.radius = 0.545515074148;
    msg.direction = 33U;
    msg.custom.assign("LAOXKSEOHCZPAMNMEMOQBPLSXLEHPJDHBRVCYINKYFPSVNQVRDMOKXPTGZFSINIYYDQBRZZCAGAWVXFIGWEDYVRZANMQGEGTBXVFKZKUUNWCCGBPPETIFDOTOUBRBRWZZOLRXEIJUDAHJTTGXHLBDGQZHLFFSQJAKGRYDMWWAQWHERXVXRCKU");

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
    msg.setTimeStamp(0.795266058434);
    msg.setSource(38917U);
    msg.setSourceEntity(177U);
    msg.setDestination(33197U);
    msg.setDestinationEntity(125U);
    msg.timeout = 62321U;
    msg.lat = 0.0028311511012;
    msg.lon = 0.0918515801079;
    msg.z = 0.285230410875;
    msg.z_units = 166U;
    msg.pitch = 0.21723546628;
    msg.amplitude = 0.562006147262;
    msg.duration = 56595U;
    msg.speed = 0.426058779182;
    msg.speed_units = 247U;
    msg.radius = 0.942575928042;
    msg.direction = 40U;
    msg.custom.assign("NFYSOOGTOAEII");

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
    msg.setTimeStamp(0.473653704135);
    msg.setSource(2714U);
    msg.setSourceEntity(112U);
    msg.setDestination(62011U);
    msg.setDestinationEntity(106U);
    msg.timeout = 44944U;
    msg.lat = 0.328981860416;
    msg.lon = 0.740271483459;
    msg.z = 0.338941724152;
    msg.z_units = 16U;
    msg.pitch = 0.698944839981;
    msg.amplitude = 0.291771707691;
    msg.duration = 4226U;
    msg.speed = 0.96916134391;
    msg.speed_units = 26U;
    msg.radius = 0.708651431281;
    msg.direction = 46U;
    msg.custom.assign("LUNXPDIIRVHWOGAKTRAMHRRUABAUSJCGAVGVIFINKOXQFDX");

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
    msg.setTimeStamp(0.106128790471);
    msg.setSource(40535U);
    msg.setSourceEntity(217U);
    msg.setDestination(46878U);
    msg.setDestinationEntity(236U);
    msg.formation_name.assign("BYFJYYKPRQMELNBRWX");
    msg.reference_frame = 170U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53842U;
    tmp_msg_0.off_x = 0.608954328115;
    tmp_msg_0.off_y = 0.830212224766;
    tmp_msg_0.off_z = 0.575670934813;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RXCMXVFGSACEKTIAEFZPEAQBKYJYLRZQRCJPUZKMS");

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
    msg.setTimeStamp(0.740908739428);
    msg.setSource(48953U);
    msg.setSourceEntity(122U);
    msg.setDestination(40819U);
    msg.setDestinationEntity(96U);
    msg.formation_name.assign("YVISJZABDWWDTGRUPI");
    msg.reference_frame = 18U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22190U;
    tmp_msg_0.off_x = 0.41546078959;
    tmp_msg_0.off_y = 0.647718514913;
    tmp_msg_0.off_z = 0.265699409603;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KPHFOSNBJPCRZOYWSNLXFWBTKOMWTUVEFZGIIBXYCDBSWBMTHXOVUKJNUNANXKHVQULCHVZXBQJNPPWHQYTEKZPGWRGIWEFDCNHNSXIAXEHKLNMYRQSOZIKHPYEBVJIIDDIEMWLQBGYILAOOPRSDRD");

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
    msg.setTimeStamp(0.128991270365);
    msg.setSource(62962U);
    msg.setSourceEntity(219U);
    msg.setDestination(59242U);
    msg.setDestinationEntity(150U);
    msg.formation_name.assign("JQKZJAXJPRUGUDOKGJINCEZADRVNZGIRDDMSOPYGROKJTZEVQMBRYYSCCMQNMAJLUMPDYEDSNTDAGAY");
    msg.reference_frame = 219U;
    msg.custom.assign("FFJVMMGSQDTVADKOBUJYWSCAEWXEPCAEHTOPGUQEMNWDFJQFICJLBKMSVHFTXZYTJDXEZLOLWIUBJFNKUDIYTTKTZBRYUOFRDBZHRGAHNPHJJAOKSAYEYZRSEWUGBKPIRDDCMPUZMABFRGSXQYNQISOBJFLDNVHLQSPPQGKLVHRMITPVOZCZGXYUBNANXVCVIKQACSLQVMWWSHHFZRNRVNDOMZUK");

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
    msg.setTimeStamp(0.138780979084);
    msg.setSource(3634U);
    msg.setSourceEntity(101U);
    msg.setDestination(26073U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("UVVZQIJRFOUOVQUJSRAEXRLRDYMWLAKKUGLNNHBDJCIUYIKRCXXXSGTFDUYMLFHXDCFLILEXZHOTDZNRZATPROAQLGFDYUHNAHNKNTWFVOWIBWLAZZZEGIAXNSGCUFQNMPEFOXGMZPTAWYYMJTBMSDVYHNESWZSTBEUWJGYHJSIQGKKPOWMFAJHQEDPQKQB");
    msg.formation_name.assign("XOSGZMYIMKVATQ");
    msg.plan_id.assign("CSFPUNJAXCUAXMEDJZOMISGNRFKLFXIWNOAMSHOAZBTHVYATKHRKTTKRJDCDGHYOORQNQF");
    msg.description.assign("DWHUMCXRJRIDCYCXEJILJMJQJPYIIFEYUGITBAPWRKBEJMFLTYQIIRBDANGHSAFUXFXHWSSEULETXCPHZWMXQ");
    msg.leader_speed = 0.609481249926;
    msg.leader_bank_lim = 0.145392532649;
    msg.pos_sim_err_lim = 0.689803365579;
    msg.pos_sim_err_wrn = 0.804545414802;
    msg.pos_sim_err_timeout = 55484U;
    msg.converg_max = 0.668551221812;
    msg.converg_timeout = 36242U;
    msg.comms_timeout = 62195U;
    msg.turb_lim = 0.194095497076;
    msg.custom.assign("GXWMOJSKDFFYEGSRXNBWVBTMSBHGQTWVARLCVAGZZJBDHYQLWOJMZZTKDGCIXDNJEUKVROHSVYGAIAUENEJSDIZBHLKRCRPPDGHJMNFMWRVITGPCEHZJAJVMXNKTAIRFUDLFDBIC");

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
    msg.setTimeStamp(0.0998248847569);
    msg.setSource(20040U);
    msg.setSourceEntity(139U);
    msg.setDestination(26619U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("MMGYRVTXXTYCLREFBRXTFKROTHXLIWRMJNOZXIACXHKESAIDSSBEWHQPBVVVQYKRQDPTNSHYDOBAWIUAKPQEYLQAWOIYEUUOXRZPZTBHXUCIHJADGWBZLU");
    msg.formation_name.assign("LFXRLCBEFZRACHMAVUHFLBNFGTMRYYDOKYNMGAQAAIIBKJNKUXHLEMNZWZHSWCOUCKXKBHZKVJMEYUFEVIQESCRPVKMUNBSWTDIBIDBGTZWHTSGUGKYXPVJFLHMJOZTVBGGIWFVOXLETECYAPQYFXOTRJAA");
    msg.plan_id.assign("NWPQFTXPDTFYBTCELZSMCIRLCKNUTLGTFFAQOILPQIKZOCKWQTEDYEPBTPXUHMFUAIKXUNDPJEPJVCHVBLAZMKMGZBWXDJVTVICHOJKBBMZDQDNNASYAILRRAJZMXVIJZIWUWUBAG");
    msg.description.assign("UYFQHODLLGSPGOZKYCPCEFOHLCAQYVSDFBMGUVIUFZCRVHIFMECVTISMEORIMDDNZWTTXMDEMQAXDFQHITIAJWADIYLABNNYKVPUTKJLGSHWKURMRUJPAHZEBEQOPPZXDZTYCCOWNJ");
    msg.leader_speed = 0.755435985945;
    msg.leader_bank_lim = 0.28842905234;
    msg.pos_sim_err_lim = 0.220232450456;
    msg.pos_sim_err_wrn = 0.743209336789;
    msg.pos_sim_err_timeout = 419U;
    msg.converg_max = 0.404199006684;
    msg.converg_timeout = 42162U;
    msg.comms_timeout = 44894U;
    msg.turb_lim = 0.0607804854277;
    msg.custom.assign("DMGQSGVBXPQXAVDEIHJCELSTCAWEOMVKCVMOCBXHCKTAPPMRMFOPQWJFQQYUEJJREVENDVZFNXICBTWWGY");

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
    msg.setTimeStamp(0.804726833518);
    msg.setSource(50494U);
    msg.setSourceEntity(53U);
    msg.setDestination(6361U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("AZAWEEUOGYQUMINRSBVZBRVOFSXGFGLBKZLDIDNYAFHLOCRQMWPGQKXRYFCHUZOFFPTGMQCUESGJXSNVWWAHGHEGPOIIUXPIKQOTHKNBZZNTJVDYTHCMFNCYVWTATDPIXBLRZJVAZTNWXQIDYFCHECDZTJYEPBEFBOAEUKLPRLPKQAMIMQUTIDNGWYDPSXWXSYQSBELRKVVHMLEQOMDJSKBYUPKVACLWJOABNJTSHGLWU");
    msg.formation_name.assign("GELQSNGZIANPZLQFIRDWMDIGTOHWS");
    msg.plan_id.assign("XPPSVRWLMJXYDZIXCCBQEQNXAIAAITGZNKCNEWZEDISCIVOMHURZGSPKNZJSRLDPSHQCDMTTBFNFDOGEQVXUNAJJWZRMTGAEUASWNHRLLQEZDPSXMVZBUKTGCOJNBMWLFPGRXEIYDYILIRAXFBWWBITCBAQPJJIYKBHUQKFHZFBDABFCJH");
    msg.description.assign("ZZSSYCPEZLMSRZDBWGRMALJTNJKRLHDGLTGJVUFOIXEZNPFGKDNQMJBGXENDSRNYDFEQROPFMVQTWCSLBQHKSHKAEA");
    msg.leader_speed = 0.937788682189;
    msg.leader_bank_lim = 0.98081825823;
    msg.pos_sim_err_lim = 0.444198781549;
    msg.pos_sim_err_wrn = 0.235754884159;
    msg.pos_sim_err_timeout = 32794U;
    msg.converg_max = 0.689585666839;
    msg.converg_timeout = 44282U;
    msg.comms_timeout = 5125U;
    msg.turb_lim = 0.0473930132353;
    msg.custom.assign("DCFGRUPTOVISZBHXLCLSFCHQLAVZEDWMYRPHHXTZDRJINOCLFSFIVDEHXUVXHBJEQIC");

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
    msg.setTimeStamp(0.572612508928);
    msg.setSource(18345U);
    msg.setSourceEntity(217U);
    msg.setDestination(32141U);
    msg.setDestinationEntity(243U);
    msg.control_src = 43344U;
    msg.control_ent = 18U;
    msg.timeout = 0.00655017526495;
    msg.loiter_radius = 0.766630360304;
    msg.altitude_interval = 0.344496915286;

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
    msg.setTimeStamp(0.0311812308286);
    msg.setSource(16354U);
    msg.setSourceEntity(199U);
    msg.setDestination(933U);
    msg.setDestinationEntity(202U);
    msg.control_src = 56146U;
    msg.control_ent = 240U;
    msg.timeout = 0.17629750827;
    msg.loiter_radius = 0.390613424107;
    msg.altitude_interval = 0.292951153251;

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
    msg.setTimeStamp(0.874343409628);
    msg.setSource(222U);
    msg.setSourceEntity(210U);
    msg.setDestination(52474U);
    msg.setDestinationEntity(231U);
    msg.control_src = 20080U;
    msg.control_ent = 210U;
    msg.timeout = 0.0971394545159;
    msg.loiter_radius = 0.716975418044;
    msg.altitude_interval = 0.502030066488;

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
    msg.setTimeStamp(0.910290883902);
    msg.setSource(11241U);
    msg.setSourceEntity(3U);
    msg.setDestination(30263U);
    msg.setDestinationEntity(131U);
    msg.flags = 5U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.923668024283;
    tmp_msg_0.speed_units = 146U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.509923756908;
    tmp_msg_1.z_units = 236U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.494294338155;
    msg.lon = 0.652756485444;
    msg.radius = 0.209321702545;

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
    msg.setTimeStamp(0.632644713228);
    msg.setSource(26166U);
    msg.setSourceEntity(9U);
    msg.setDestination(45250U);
    msg.setDestinationEntity(26U);
    msg.flags = 164U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.803889414946;
    tmp_msg_0.speed_units = 71U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.214525990329;
    tmp_msg_1.z_units = 88U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0918032801785;
    msg.lon = 0.111988971761;
    msg.radius = 0.532686424414;

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
    msg.setTimeStamp(0.174598915629);
    msg.setSource(63953U);
    msg.setSourceEntity(31U);
    msg.setDestination(42093U);
    msg.setDestinationEntity(179U);
    msg.flags = 154U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.866759430493;
    tmp_msg_0.speed_units = 244U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.333881878886;
    tmp_msg_1.z_units = 231U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0291731259044;
    msg.lon = 0.316083849385;
    msg.radius = 0.821762870513;

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
    msg.setTimeStamp(0.233081509698);
    msg.setSource(14013U);
    msg.setSourceEntity(145U);
    msg.setDestination(49041U);
    msg.setDestinationEntity(21U);
    msg.control_src = 2540U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 117U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.435262785894;
    tmp_tmp_msg_0_0.speed_units = 245U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.380629912245;
    tmp_tmp_msg_0_1.z_units = 100U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.32685197741;
    tmp_msg_0.lon = 0.486943919423;
    tmp_msg_0.radius = 0.923667695217;
    msg.reference.set(tmp_msg_0);
    msg.state = 84U;
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
    msg.setTimeStamp(0.368490253958);
    msg.setSource(6424U);
    msg.setSourceEntity(200U);
    msg.setDestination(47097U);
    msg.setDestinationEntity(31U);
    msg.control_src = 29208U;
    msg.control_ent = 70U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 156U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.515610675519;
    tmp_tmp_msg_0_0.speed_units = 135U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.861879736806;
    tmp_tmp_msg_0_1.z_units = 165U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.384853939461;
    tmp_msg_0.lon = 0.142486883927;
    tmp_msg_0.radius = 0.777454766299;
    msg.reference.set(tmp_msg_0);
    msg.state = 2U;
    msg.proximity = 228U;

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
    msg.setTimeStamp(0.482230097763);
    msg.setSource(15137U);
    msg.setSourceEntity(12U);
    msg.setDestination(10038U);
    msg.setDestinationEntity(183U);
    msg.control_src = 60481U;
    msg.control_ent = 51U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 175U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.128329645557;
    tmp_tmp_msg_0_0.speed_units = 7U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.376209300674;
    tmp_tmp_msg_0_1.z_units = 60U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.164507691428;
    tmp_msg_0.lon = 0.375476872582;
    tmp_msg_0.radius = 0.919074663385;
    msg.reference.set(tmp_msg_0);
    msg.state = 170U;
    msg.proximity = 238U;

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
    msg.setTimeStamp(0.0328723196594);
    msg.setSource(59422U);
    msg.setSourceEntity(123U);
    msg.setDestination(6810U);
    msg.setDestinationEntity(11U);
    msg.ax_cmd = 0.99035978002;
    msg.ay_cmd = 0.109087066686;
    msg.az_cmd = 0.811379175753;
    msg.ax_des = 0.570094419569;
    msg.ay_des = 0.120405809078;
    msg.az_des = 0.118120656913;
    msg.virt_err_x = 0.72143571106;
    msg.virt_err_y = 0.476796917962;
    msg.virt_err_z = 0.181093077727;
    msg.surf_fdbk_x = 0.318978463954;
    msg.surf_fdbk_y = 0.298118525609;
    msg.surf_fdbk_z = 0.709559907885;
    msg.surf_unkn_x = 0.82925579257;
    msg.surf_unkn_y = 0.933176366132;
    msg.surf_unkn_z = 0.990624116007;
    msg.ss_x = 0.678865052299;
    msg.ss_y = 0.150997130376;
    msg.ss_z = 0.180892753759;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VDEMDVIJFXFBEROWYXGSFPWVMMKXXTXQVUDHLDLSUXHZQAHDPIBOTFGQUCKBLP");
    tmp_msg_0.dist = 0.178051260503;
    tmp_msg_0.err = 0.888940083848;
    tmp_msg_0.ctrl_imp = 0.707992427902;
    tmp_msg_0.rel_dir_x = 0.175111267551;
    tmp_msg_0.rel_dir_y = 0.0292974077197;
    tmp_msg_0.rel_dir_z = 0.605611408055;
    tmp_msg_0.err_x = 0.722388449712;
    tmp_msg_0.err_y = 0.123484691138;
    tmp_msg_0.err_z = 0.453135727363;
    tmp_msg_0.rf_err_x = 0.96074706654;
    tmp_msg_0.rf_err_y = 0.0824130865155;
    tmp_msg_0.rf_err_z = 0.10786235363;
    tmp_msg_0.rf_err_vx = 0.845167751687;
    tmp_msg_0.rf_err_vy = 0.952518985796;
    tmp_msg_0.rf_err_vz = 0.298419303492;
    tmp_msg_0.ss_x = 0.285578142633;
    tmp_msg_0.ss_y = 0.837550951661;
    tmp_msg_0.ss_z = 0.473270117797;
    tmp_msg_0.virt_err_x = 0.655500497225;
    tmp_msg_0.virt_err_y = 0.12692229337;
    tmp_msg_0.virt_err_z = 0.278559813438;
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
    msg.setTimeStamp(0.42084450454);
    msg.setSource(16668U);
    msg.setSourceEntity(138U);
    msg.setDestination(64067U);
    msg.setDestinationEntity(230U);
    msg.ax_cmd = 0.957583858394;
    msg.ay_cmd = 0.359422817986;
    msg.az_cmd = 0.0677215041664;
    msg.ax_des = 0.711229489656;
    msg.ay_des = 0.96709744822;
    msg.az_des = 0.821766005271;
    msg.virt_err_x = 0.230638105837;
    msg.virt_err_y = 0.565420702508;
    msg.virt_err_z = 0.364459481929;
    msg.surf_fdbk_x = 0.260217856538;
    msg.surf_fdbk_y = 0.281666530405;
    msg.surf_fdbk_z = 0.942468242278;
    msg.surf_unkn_x = 0.167200225353;
    msg.surf_unkn_y = 0.492144886628;
    msg.surf_unkn_z = 0.759394261946;
    msg.ss_x = 0.905173986401;
    msg.ss_y = 0.432156436423;
    msg.ss_z = 0.304978585165;

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
    msg.setTimeStamp(0.823974975907);
    msg.setSource(2569U);
    msg.setSourceEntity(39U);
    msg.setDestination(37578U);
    msg.setDestinationEntity(112U);
    msg.ax_cmd = 0.72696117956;
    msg.ay_cmd = 0.489917794765;
    msg.az_cmd = 0.77285369571;
    msg.ax_des = 0.784341903875;
    msg.ay_des = 0.527988106931;
    msg.az_des = 0.771989084133;
    msg.virt_err_x = 0.664953235178;
    msg.virt_err_y = 0.986069515089;
    msg.virt_err_z = 0.012975902702;
    msg.surf_fdbk_x = 0.201924186281;
    msg.surf_fdbk_y = 0.680713552617;
    msg.surf_fdbk_z = 0.563197446984;
    msg.surf_unkn_x = 0.475365317785;
    msg.surf_unkn_y = 0.946432410668;
    msg.surf_unkn_z = 0.764416840359;
    msg.ss_x = 0.60874619389;
    msg.ss_y = 0.163391844328;
    msg.ss_z = 0.0926494198819;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZLFINVTUEBMWCAZRVRHWXQCFFDNHYBUOBCRIAAHSCETKAIFHQUTQAOZNKGGTHHJOOKGULHVMWMPSEBTJBFYUNWRRJAGXLLVUWXLNIXMSDUVDROBNJQRYPPMEKSQCO");
    tmp_msg_0.dist = 0.933629643139;
    tmp_msg_0.err = 0.290740436996;
    tmp_msg_0.ctrl_imp = 0.365657898038;
    tmp_msg_0.rel_dir_x = 0.235179290488;
    tmp_msg_0.rel_dir_y = 0.808852648255;
    tmp_msg_0.rel_dir_z = 0.581731593075;
    tmp_msg_0.err_x = 0.437481844538;
    tmp_msg_0.err_y = 0.992261840801;
    tmp_msg_0.err_z = 0.810045840199;
    tmp_msg_0.rf_err_x = 0.168576453172;
    tmp_msg_0.rf_err_y = 0.432575163626;
    tmp_msg_0.rf_err_z = 0.568753333039;
    tmp_msg_0.rf_err_vx = 0.0996850350967;
    tmp_msg_0.rf_err_vy = 0.902595996323;
    tmp_msg_0.rf_err_vz = 0.112915619212;
    tmp_msg_0.ss_x = 0.195828558163;
    tmp_msg_0.ss_y = 0.171791451606;
    tmp_msg_0.ss_z = 0.450856209983;
    tmp_msg_0.virt_err_x = 0.625078574415;
    tmp_msg_0.virt_err_y = 0.796201368189;
    tmp_msg_0.virt_err_z = 0.643242128952;
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
    msg.setTimeStamp(0.915502887407);
    msg.setSource(62278U);
    msg.setSourceEntity(164U);
    msg.setDestination(18278U);
    msg.setDestinationEntity(142U);
    msg.s_id.assign("NPUUZRATERBANBGHASBLGAQOJKVVZZMONUCRXZPFPCHZFXNJEYPVWFKRFXGYGXPZIQOHQUMYBEOXWDXMOEKWFUVEWGJIDXVIDFAZYTJCGWEXELDRJCJMEOZRJCMOUFZNPNMS");
    msg.dist = 0.663914393503;
    msg.err = 0.341566922366;
    msg.ctrl_imp = 0.87707627238;
    msg.rel_dir_x = 0.0239621313692;
    msg.rel_dir_y = 0.20991766909;
    msg.rel_dir_z = 0.0666501517832;
    msg.err_x = 0.2646695501;
    msg.err_y = 0.511815893922;
    msg.err_z = 0.0954592325399;
    msg.rf_err_x = 0.473302665714;
    msg.rf_err_y = 0.0534785718066;
    msg.rf_err_z = 0.437910557245;
    msg.rf_err_vx = 0.821612315877;
    msg.rf_err_vy = 0.0852999583793;
    msg.rf_err_vz = 0.219737343477;
    msg.ss_x = 0.43642698411;
    msg.ss_y = 0.471106807054;
    msg.ss_z = 0.931865027227;
    msg.virt_err_x = 0.513517565983;
    msg.virt_err_y = 0.930432329473;
    msg.virt_err_z = 0.883801286424;

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
    msg.setTimeStamp(0.166502759774);
    msg.setSource(52951U);
    msg.setSourceEntity(57U);
    msg.setDestination(30075U);
    msg.setDestinationEntity(193U);
    msg.s_id.assign("WQUUCYOYJLVJTANVACRYKFLROSWGSDHCEGBOKSEAPWMMSPNSGIKBQNUIMODHNBKLICAW");
    msg.dist = 0.282334978711;
    msg.err = 0.579577098458;
    msg.ctrl_imp = 0.912454037267;
    msg.rel_dir_x = 0.0064053597153;
    msg.rel_dir_y = 0.59405642998;
    msg.rel_dir_z = 0.542949720762;
    msg.err_x = 0.621863172111;
    msg.err_y = 0.588889360478;
    msg.err_z = 0.46051421549;
    msg.rf_err_x = 0.223735379739;
    msg.rf_err_y = 0.881442215534;
    msg.rf_err_z = 0.854436802822;
    msg.rf_err_vx = 0.93765234732;
    msg.rf_err_vy = 0.696902605926;
    msg.rf_err_vz = 0.903570452241;
    msg.ss_x = 0.665815296409;
    msg.ss_y = 0.380603428931;
    msg.ss_z = 0.709140382285;
    msg.virt_err_x = 0.243072259955;
    msg.virt_err_y = 0.911150093548;
    msg.virt_err_z = 0.694358474564;

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
    msg.setTimeStamp(0.319502994797);
    msg.setSource(6585U);
    msg.setSourceEntity(59U);
    msg.setDestination(19029U);
    msg.setDestinationEntity(234U);
    msg.s_id.assign("BZISEQEAMTTGUSWXKJBJKQTKOVMFLPCAILXFCRSBPQYHQJRQABJHNMXGIJDVFTQUGDLYIHFPYCMPQSGOVKRACHNJPGRRNOEHZFZCXVCCMRLGVSIHLJTTEIXSUOQGZZFCPYGHUHCMRIUDBTXLKZKVC");
    msg.dist = 0.00677637524503;
    msg.err = 0.917992074649;
    msg.ctrl_imp = 0.645617454038;
    msg.rel_dir_x = 0.42358233254;
    msg.rel_dir_y = 0.610705765445;
    msg.rel_dir_z = 0.556352490346;
    msg.err_x = 0.521617756653;
    msg.err_y = 0.811325514805;
    msg.err_z = 0.17121455346;
    msg.rf_err_x = 0.899781892053;
    msg.rf_err_y = 0.39311870829;
    msg.rf_err_z = 0.387518501947;
    msg.rf_err_vx = 0.345429189634;
    msg.rf_err_vy = 0.143263170406;
    msg.rf_err_vz = 0.749571982435;
    msg.ss_x = 0.631284105232;
    msg.ss_y = 0.507866437522;
    msg.ss_z = 0.152077446272;
    msg.virt_err_x = 0.692614913608;
    msg.virt_err_y = 0.518455810937;
    msg.virt_err_z = 0.0303457289012;

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
    msg.setTimeStamp(0.262573148706);
    msg.setSource(20001U);
    msg.setSourceEntity(19U);
    msg.setDestination(30589U);
    msg.setDestinationEntity(250U);
    msg.timeout = 58900U;
    msg.rpm = 0.0615592423411;
    msg.direction = 225U;
    msg.custom.assign("VGOBYSYKOWCMSEKQRFVCXEAYRKRRZBUHLAIEPROWFWVFZQNBGQRZGXFSIHMCENRX");

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
    msg.setTimeStamp(0.489506882882);
    msg.setSource(50890U);
    msg.setSourceEntity(222U);
    msg.setDestination(24988U);
    msg.setDestinationEntity(5U);
    msg.timeout = 12692U;
    msg.rpm = 0.746901731994;
    msg.direction = 141U;
    msg.custom.assign("OBHJNDHLZXGODGLXHFMFEMVPWYSPPHWMESQITRQFMEUHNDSKILBTQCXAALEPSWIYKSNRWDBOANBGEXFMZFBOXBIZARFSNIEQNBPUTJMATGCZHDTGDKHKIKZT");

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
    msg.setTimeStamp(0.353600875471);
    msg.setSource(9182U);
    msg.setSourceEntity(226U);
    msg.setDestination(64501U);
    msg.setDestinationEntity(75U);
    msg.timeout = 50239U;
    msg.rpm = 0.447151942575;
    msg.direction = 114U;
    msg.custom.assign("NEBXJZCLWBILHZDXPHWAXRYNYGMBZIWHIZLZRLPYDJIKDMDDDEOUGZFSKIZYNGNQYCCUGFDHQNLCVYFPBJJKWMJXFPXSABKROVEBJLJTOOITPVNFFTRXKUDHQCKEQWFUCGSQWDOIRTJTXNUROFAYJEWMVHMPWSSHMIBVPMVUKVAUMXFEKOLQHMNCP");

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
    msg.setTimeStamp(0.842929922879);
    msg.setSource(59636U);
    msg.setSourceEntity(68U);
    msg.setDestination(36750U);
    msg.setDestinationEntity(196U);
    msg.formation_name.assign("SIZCIOAOGDYWEPSMYSLNBJQSGVFFBZTZCHNIZYMXSCWLJGTAEMPMHTRXGEXKCKAQYWNYOMUIDTGKIAVZQUXLLPQQETIZWVXEHIALODPGGBXWKL");
    msg.type = 33U;
    msg.op = 43U;
    msg.group_name.assign("YFMIHOHXKPWQGFEHZLZFVCMBDCVLERCQJSEAYKVPDYBFTWRSRAOSMQZZUCLCFVGSCVPIJYZJWQSADPNXOTEDKCAZUNSTOBZSQJWABUXDDHLVKPKJMGEWYIIMUTNTYJBJRLPPOSLOVBXNYT");
    msg.plan_id.assign("YXZPRIYCGJYQZAJOFXZIGXZWKLEWQFQBETQTJXTUGLESKPIPDTSAMADRZWDMEFHXFOLHWUOIAQPYHBYMATXYIOUOVBJNREQQURPSDZFLQVJZFVTCAPGLDUDTENXKURXBFOUSDZJPKB");
    msg.description.assign("YPCZKOEVFMVJAKFFXUGPOXWDTBZQWIPCMNNVWCJGKQBEQICLOWFSEHFBQXTXWXYAYKYYQAXPIDYUTWSUEQNJYIPRNMGHNTPUSODHPAZFWHOVFERNOCIFQPEJJGWCARDT");
    msg.reference_frame = 192U;
    msg.leader_bank_lim = 0.371666882044;
    msg.leader_speed_min = 0.777123781094;
    msg.leader_speed_max = 0.663790570054;
    msg.leader_alt_min = 0.769348263177;
    msg.leader_alt_max = 0.293469660411;
    msg.pos_sim_err_lim = 0.272651964358;
    msg.pos_sim_err_wrn = 0.0807344547993;
    msg.pos_sim_err_timeout = 27975U;
    msg.converg_max = 0.473997321088;
    msg.converg_timeout = 41364U;
    msg.comms_timeout = 22539U;
    msg.turb_lim = 0.516404305458;
    msg.custom.assign("WYWXOEFTRWWNSVGCHKHGKMFXZLILXJDBEYAHPTPCCATOUXAYRYJLOIXCCJVZSSMPWHBZYEGGADJWNOBIPSVHJTIRZPVHBQNQMGVLHAUPMNUDIWCGCIVRJZXTPBKDDXZKTUUMAGJSCDOPCQTRLIWOEWNZMVERIQORFDKFNXNYJZEBSUVAMKLOFELUQVRFQCTNBLUJTKOSSEBOZDWIUKADJXPGDHMQUKRPYGYFTHSBQ");

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
    msg.setTimeStamp(0.417942015655);
    msg.setSource(55018U);
    msg.setSourceEntity(69U);
    msg.setDestination(40678U);
    msg.setDestinationEntity(238U);
    msg.formation_name.assign("VUXBBIIJYSREYZMZXPTMRJOIMLGZHYUIGDVIBJETQPTKFHSSROYKPKNCHQXLMSZBSBDTZCHTGJWCUMMFGKRCXPSEZNPFNTBNRVZUGMAQTWCYRVKRE");
    msg.type = 33U;
    msg.op = 160U;
    msg.group_name.assign("JZEMNHJKCWUJEIOTCGBPGPPBUNRUFLVPRQBUGVCRQAHJETWAYGAYGKTCJVTCYYXMQAGORIESLSFWLZPDIOXZJBQIAEDKAEQAUAOOWCRZBLTCUQELXWKOUVOCCHEGQWFXS");
    msg.plan_id.assign("YTCFOXYHUBVKIBRZAJGXEUTRDLTBTDJPSKSGRKUZFJLVLXSWCGIOPDGWIIXVMMSHEQFYDFCPKZCXNOUONVONJRPFLCGNCOACGFDVSZTMOIQADQLCWXWXUHFJEVVTHQTYATWMRQKDMKYJBRPVPNNFFXWTJJYQMSMICQMNZBLZYBETVDJLBAEWPOISHI");
    msg.description.assign("LQKHEFNGYOMGVQ");
    msg.reference_frame = 6U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59958U;
    tmp_msg_0.off_x = 0.270392551775;
    tmp_msg_0.off_y = 0.377341972188;
    tmp_msg_0.off_z = 0.216599633066;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.891785846916;
    msg.leader_speed_min = 0.552676924907;
    msg.leader_speed_max = 0.469672788132;
    msg.leader_alt_min = 0.130212951795;
    msg.leader_alt_max = 0.322189779049;
    msg.pos_sim_err_lim = 0.320209866508;
    msg.pos_sim_err_wrn = 0.995289837795;
    msg.pos_sim_err_timeout = 29872U;
    msg.converg_max = 0.331342198526;
    msg.converg_timeout = 7437U;
    msg.comms_timeout = 52825U;
    msg.turb_lim = 0.440020535378;
    msg.custom.assign("KWJIRSXYLSDDKUCRPOUIGGXTKNSVGRGXVOFPWTNFPIRAWDVBIQKASERIZWOMDXAXEANTWBHHFQSEJBVCGBLJMTRQYPMLMQWTYFOUDDIREH");

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
    msg.setTimeStamp(0.501517804412);
    msg.setSource(52832U);
    msg.setSourceEntity(235U);
    msg.setDestination(55301U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("UMDVFSTKPMEGHQHZTVOULVDHYAFZEXAQMXEZGZOKTMEPDINKWSVCAFERFZCGOZJTCIXBAYMPNTXNEBOXGWBZMVYQJHRCPRKKSHZALYDTHBOWLZRIQUSSPDBMBRHQGCILUUPNXLQKYUKSCKLBGDYJVXIHWIXUKOOHFLEYDICTOCGKPWQBYWJFRRAYSQWHMGUMLLFADPTOVFUEFCIDNVSNJRNALVSBIJYXEJNNASJPQVEQNAO");
    msg.type = 0U;
    msg.op = 137U;
    msg.group_name.assign("XNIEOGULGRIE");
    msg.plan_id.assign("WJVJRJLURXVWXIIUMHIMWTRKDOVMDTVFIXZDFJWMWUENBXUJKQYYHSLQGUFJZPGXJUEZGYONDNDDYEWOKIMUFCJXJCQMSHLKZTTCYIGAASQMPWSXBRALMPCCYSATNFNCSETIEKGZLHERSBTQRFHZFFGQCURHSPUAFNLVOHHYQYTVQOZILBBZSKSFXNIGHPGDOZAVCBLLDVBPYAHPEOWARVWOXEADUYVIBODQKBCGNTENGAMQKPJXRNLC");
    msg.description.assign("KHWDZSQEIPLLGJSXBICVWJBZPAQRKRVFQYFRDICGFBRGFMXMZDLMGMUYKORIFQPAMUSMOXCNQTVTQOJHCTOGKTHPIFOYNXEOZOAXBNNTVRYDYZCOSITLPAVXQNOYOHBWTNXRHNXUEJHZRKLMUDYCAEKURWJZKTMGVEJSARHUMKLAPGEDLWTKVNDFWB");
    msg.reference_frame = 187U;
    msg.leader_bank_lim = 0.648111183994;
    msg.leader_speed_min = 0.901486745725;
    msg.leader_speed_max = 0.468214028668;
    msg.leader_alt_min = 0.134570364487;
    msg.leader_alt_max = 0.405154281789;
    msg.pos_sim_err_lim = 0.512520246641;
    msg.pos_sim_err_wrn = 0.0307682468281;
    msg.pos_sim_err_timeout = 53726U;
    msg.converg_max = 0.908629866628;
    msg.converg_timeout = 49691U;
    msg.comms_timeout = 44689U;
    msg.turb_lim = 0.954418467668;
    msg.custom.assign("ZGHHCUAWXRIFMFVSNBSOFBRMOEAJLQEAGXLIKUKWHHGXQRJZVODPEYLTBMDUANLPMVHSVGJXKAIPCINZPLGNEJYTFSUYNWKTGDPLEGZIMIDLDORXZPKOXPSZYJZTDHKSPINACQWQNOZ");

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
    msg.setTimeStamp(0.255739892837);
    msg.setSource(8443U);
    msg.setSourceEntity(20U);
    msg.setDestination(2682U);
    msg.setDestinationEntity(68U);
    msg.timeout = 24261U;
    msg.lat = 0.91489305117;
    msg.lon = 0.243290508659;
    msg.z = 0.855144647703;
    msg.z_units = 96U;
    msg.speed = 0.462168039647;
    msg.speed_units = 126U;
    msg.custom.assign("LBIQEJLRCKONMWSQDRRLUESVRXIAAWVTZQIDKUDNFNLZFWQWQBHSOTTMKFDSXPJMAQXFWONJKUUDTVEELIYCZPKTPGL");

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
    msg.setTimeStamp(0.705372598213);
    msg.setSource(28605U);
    msg.setSourceEntity(213U);
    msg.setDestination(37042U);
    msg.setDestinationEntity(187U);
    msg.timeout = 54786U;
    msg.lat = 0.398820126352;
    msg.lon = 0.467406723627;
    msg.z = 0.776430335433;
    msg.z_units = 52U;
    msg.speed = 0.194939966045;
    msg.speed_units = 110U;
    msg.custom.assign("SLNFFBVUPQAZUROAOQUGRZJLMTVSYPYYJQRGKDDYPLBEPXYBTGOFO");

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
    msg.setTimeStamp(0.0601174306908);
    msg.setSource(3128U);
    msg.setSourceEntity(193U);
    msg.setDestination(48837U);
    msg.setDestinationEntity(40U);
    msg.timeout = 18567U;
    msg.lat = 0.784151671531;
    msg.lon = 0.52273682391;
    msg.z = 0.147565715328;
    msg.z_units = 39U;
    msg.speed = 0.975864900401;
    msg.speed_units = 140U;
    msg.custom.assign("LXQSEJIGLVEDSVXDWFKPBVLYHOOPKCHWVCNPONDRFQVIVEIGZRSCICAOTZMTSLIJMUYITYGMDRLJHVRLPRWHCYPQ");

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
    msg.setTimeStamp(0.0773159443569);
    msg.setSource(24734U);
    msg.setSourceEntity(174U);
    msg.setDestination(13786U);
    msg.setDestinationEntity(165U);
    msg.timeout = 57303U;
    msg.lat = 0.962717840632;
    msg.lon = 0.322466541728;
    msg.z = 0.872087101295;
    msg.z_units = 13U;
    msg.speed = 0.995063424482;
    msg.speed_units = 197U;
    msg.custom.assign("QCJBLXWDALZVEEPDSKFAAKKUUONWJGZZSRUZSDFBTPSVXISFIZMPRQYRHLGPPMUQOGTTBUZTMIUYNGOYGCJPHVUKFLKZIMOBGQOENDFRAEJVEWCRRVYP");

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
    msg.setTimeStamp(0.642896081471);
    msg.setSource(55308U);
    msg.setSourceEntity(145U);
    msg.setDestination(21714U);
    msg.setDestinationEntity(43U);
    msg.timeout = 12888U;
    msg.lat = 0.0655134809222;
    msg.lon = 0.296408261696;
    msg.z = 0.959747230933;
    msg.z_units = 250U;
    msg.speed = 0.944101275698;
    msg.speed_units = 161U;
    msg.custom.assign("AKEYOSWPYTBADRTMHTVQMMTJXKCHTMMKIKEHQYRRNTGXXAKLIQMENDDWFTFSAGELOYNFOFJQJZKYELCWYNUYSCAQISNHHDJUKXGLHWUICIGWZSHFAJBCBWNIVBSQMODGCWTSMJRWEBOXNXSIHIYJKIZBXARCCORVLVHUSCROZNOMPLQNWUEVHLGXZKJFPUCKWJEEDBLGLRDZYBSGVUZQVVDXFQFUPUPZRZAFEXBYPNUPOAGMVLAPID");

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
    msg.setTimeStamp(0.569705489598);
    msg.setSource(3104U);
    msg.setSourceEntity(172U);
    msg.setDestination(15633U);
    msg.setDestinationEntity(164U);
    msg.timeout = 61954U;
    msg.lat = 0.93143365641;
    msg.lon = 0.177452003858;
    msg.z = 0.0319958307082;
    msg.z_units = 94U;
    msg.speed = 0.52094328358;
    msg.speed_units = 170U;
    msg.custom.assign("VUWCJQCFFWGOCHZMOSERJIYFPLVPSIOCCZHPJZDIBHBXNMGAMCFXEGHVDMLDSWDSGXMKXXTBUIIFOPXPSJTU");

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
    msg.setTimeStamp(0.582980073152);
    msg.setSource(57237U);
    msg.setSourceEntity(132U);
    msg.setDestination(55168U);
    msg.setDestinationEntity(112U);
    msg.arrival_time = 0.133560862702;
    msg.lat = 0.203640996635;
    msg.lon = 0.525034861769;
    msg.z = 0.205380369787;
    msg.z_units = 33U;
    msg.travel_z = 0.331116337863;
    msg.travel_z_units = 53U;
    msg.delayed = 168U;

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
    msg.setTimeStamp(0.192241068309);
    msg.setSource(26034U);
    msg.setSourceEntity(93U);
    msg.setDestination(34901U);
    msg.setDestinationEntity(248U);
    msg.arrival_time = 0.294159086355;
    msg.lat = 0.57646695927;
    msg.lon = 0.874004985806;
    msg.z = 0.436750095658;
    msg.z_units = 113U;
    msg.travel_z = 0.390992607156;
    msg.travel_z_units = 202U;
    msg.delayed = 204U;

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
    msg.setTimeStamp(0.851163039886);
    msg.setSource(28759U);
    msg.setSourceEntity(30U);
    msg.setDestination(16622U);
    msg.setDestinationEntity(43U);
    msg.arrival_time = 0.144156510404;
    msg.lat = 0.508194316035;
    msg.lon = 0.87569940077;
    msg.z = 0.616999138725;
    msg.z_units = 172U;
    msg.travel_z = 0.470507311862;
    msg.travel_z_units = 226U;
    msg.delayed = 80U;

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
    msg.setTimeStamp(0.341567676608);
    msg.setSource(21090U);
    msg.setSourceEntity(113U);
    msg.setDestination(58676U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.87979002139;
    msg.lon = 0.603423939991;
    msg.z = 0.986914940657;
    msg.z_units = 186U;
    msg.speed = 0.842423076743;
    msg.speed_units = 46U;
    msg.bearing = 0.791902508427;
    msg.cross_angle = 0.363417669832;
    msg.width = 0.693593936682;
    msg.length = 0.969100787476;
    msg.coff = 126U;
    msg.angaperture = 0.134598888203;
    msg.range = 17107U;
    msg.overlap = 14U;
    msg.flags = 144U;
    msg.custom.assign("WZOALQWFABDJTGLQGJYLYNLBTCBGQAVQYWEMJZCXEXSVUIUKQNNXPSLIOIGAOCBWFCPIEYPVAPBULVTRXHMOYFTZVDPCFEBGCDGJJMKCROMWDIQFGODHAUXUSAFVPQWHUPYWRSYTYXUJVAJIQESXQZDHRKFEFMEHWZEMKOYCTNNOPJVJMRZPTEWNSKXLOFZCSKYKOBBTPJDBHXCI");

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
    msg.setTimeStamp(0.590949451471);
    msg.setSource(63124U);
    msg.setSourceEntity(183U);
    msg.setDestination(21217U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.884603521459;
    msg.lon = 0.283452863096;
    msg.z = 0.558130441798;
    msg.z_units = 43U;
    msg.speed = 0.731101784863;
    msg.speed_units = 185U;
    msg.bearing = 0.763153337187;
    msg.cross_angle = 0.0181121989106;
    msg.width = 0.200250094664;
    msg.length = 0.00376033701499;
    msg.coff = 141U;
    msg.angaperture = 0.0734650387323;
    msg.range = 60309U;
    msg.overlap = 201U;
    msg.flags = 193U;
    msg.custom.assign("CYNGTPNSMEQCSMTDIQXZCOIHSSQFMQBUQDAKMHXFTWSUDBANSKQGUDHKYSSVIVOLADHUBEHDLLBZBTIOZBNWZOJQJWTAOASEXWFYPPTLLDRUJGPYR");

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
    msg.setTimeStamp(0.813700441079);
    msg.setSource(64142U);
    msg.setSourceEntity(171U);
    msg.setDestination(39122U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.7879931282;
    msg.lon = 0.0261627906753;
    msg.z = 0.0322932122939;
    msg.z_units = 93U;
    msg.speed = 0.679360349219;
    msg.speed_units = 244U;
    msg.bearing = 0.521888902624;
    msg.cross_angle = 0.679271707034;
    msg.width = 0.126133609465;
    msg.length = 0.879002884409;
    msg.coff = 202U;
    msg.angaperture = 0.270510696826;
    msg.range = 54995U;
    msg.overlap = 156U;
    msg.flags = 96U;
    msg.custom.assign("LMJYODDHAGCWXYIEP");

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
    msg.setTimeStamp(0.779157040218);
    msg.setSource(8115U);
    msg.setSourceEntity(57U);
    msg.setDestination(12631U);
    msg.setDestinationEntity(216U);
    msg.timeout = 50660U;
    msg.lat = 0.641298644352;
    msg.lon = 0.913015505121;
    msg.z = 0.0511291332213;
    msg.z_units = 77U;
    msg.speed = 0.676378292076;
    msg.speed_units = 164U;
    msg.syringe0 = 102U;
    msg.syringe1 = 144U;
    msg.syringe2 = 211U;
    msg.custom.assign("DTVEQUUSYMXTGDXLBXWCOXODCMZQJKJACFIWHTVNHDIBDQJSSEHUCCKASYUFJAXMKMDHCNELRVS");

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
    msg.setTimeStamp(0.740536329352);
    msg.setSource(5481U);
    msg.setSourceEntity(51U);
    msg.setDestination(46609U);
    msg.setDestinationEntity(26U);
    msg.timeout = 33757U;
    msg.lat = 0.231414744648;
    msg.lon = 0.414436790344;
    msg.z = 0.895195665528;
    msg.z_units = 227U;
    msg.speed = 0.300656943701;
    msg.speed_units = 187U;
    msg.syringe0 = 78U;
    msg.syringe1 = 181U;
    msg.syringe2 = 77U;
    msg.custom.assign("UEXIMJMNMVRLPGOF");

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
    msg.setTimeStamp(0.0231367257773);
    msg.setSource(59914U);
    msg.setSourceEntity(72U);
    msg.setDestination(23213U);
    msg.setDestinationEntity(1U);
    msg.timeout = 47886U;
    msg.lat = 0.991335581843;
    msg.lon = 0.308282051423;
    msg.z = 0.68528821886;
    msg.z_units = 81U;
    msg.speed = 0.900339720456;
    msg.speed_units = 100U;
    msg.syringe0 = 147U;
    msg.syringe1 = 48U;
    msg.syringe2 = 7U;
    msg.custom.assign("EPVYQDNIGZIPWDAWPOVVFHFIBCDEMIUEJFTXGXBQULMJNLIRBMPZFTDUJRWAMEBQRVADYRNCQSFNVUMCIVH");

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
    msg.setTimeStamp(0.230580027631);
    msg.setSource(26069U);
    msg.setSourceEntity(236U);
    msg.setDestination(31340U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.658565287041);
    msg.setSource(52579U);
    msg.setSourceEntity(27U);
    msg.setDestination(59314U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.615122069757);
    msg.setSource(44155U);
    msg.setSourceEntity(58U);
    msg.setDestination(30165U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.526474555189);
    msg.setSource(6985U);
    msg.setSourceEntity(142U);
    msg.setDestination(28876U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.189006209338;
    msg.lon = 0.0864004139737;
    msg.z = 0.533816253261;
    msg.z_units = 88U;
    msg.speed = 0.378966704809;
    msg.speed_units = 122U;
    msg.takeoff_pitch = 0.13216920685;
    msg.custom.assign("RKSJPKCIFASKMJJACUZUDHJABIMZCLRBQQTXFUDTZUOWEYCNVAMEQLHMFXGYUXEMIGQQSUGIGAKRHIFUBDTXGXEDFPVWPOPOQKGSNFZNIBVROGVEAWTDJNBFYNHTTOJSBQQMHSHROBPARMNMQTWLVXYZIGYJJVROAJLCTQFFSAUDFMZYYWDBCYXDULPYXP");

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
    msg.setTimeStamp(0.298509670956);
    msg.setSource(33423U);
    msg.setSourceEntity(140U);
    msg.setDestination(62573U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.93805733716;
    msg.lon = 0.43601222457;
    msg.z = 0.519057084849;
    msg.z_units = 48U;
    msg.speed = 0.526525628307;
    msg.speed_units = 251U;
    msg.takeoff_pitch = 0.0416900924562;
    msg.custom.assign("APLVSHSNXFHFCEKUNIONGQXNAMGVLLYBKEHTZQKZQDDQSLEMDFDEVOSJXYSDMZWLWKCTDIWGBYGIOFCSTUHOUCEPKVUTNGEXYPRQCBPGUUJTDXCHJMRRSR");

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
    msg.setTimeStamp(0.122096887099);
    msg.setSource(22477U);
    msg.setSourceEntity(55U);
    msg.setDestination(60133U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.624799534741;
    msg.lon = 0.19833400494;
    msg.z = 0.343606233964;
    msg.z_units = 110U;
    msg.speed = 0.50286810657;
    msg.speed_units = 196U;
    msg.takeoff_pitch = 0.481254014823;
    msg.custom.assign("QKRGJUVHOVTIJLOTQCTPEDPNAGKENSUEFTJMGTMXKAXLFFOANHCNOVHXBMFQOANAGCTWIHWUIHODYJVQAVUCGEBUSORDAKHSTHMBQWYRIZCYRJCCJLLAQVRLTFXLLFZIEBSZOQDLSDVWGTRXRIXPEXZWWYKVCYRRQHUNVWPNNZIMJJZIRYEBKDLFBOMGIPEMVQBHQKTWSGPKZYLZDPJSBZBAASUJXHKMDIBDFFSPYNYYNEUWMSUXOXGM");

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
    msg.setTimeStamp(0.586369904134);
    msg.setSource(37652U);
    msg.setSourceEntity(206U);
    msg.setDestination(55469U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.390180435265;
    msg.lon = 0.12220958785;
    msg.z = 0.978883490369;
    msg.z_units = 5U;
    msg.speed = 0.765062105383;
    msg.speed_units = 239U;
    msg.abort_z = 0.340110106225;
    msg.bearing = 0.995307648019;
    msg.glide_slope = 140U;
    msg.glide_slope_alt = 0.979037213657;
    msg.custom.assign("XRRMBQHGYCZTQRRWRHCKYAHJPXJUBIOXKEHZRPVPIUCQKUMISABLSOCQPCTDOCFESXHTUBBCUYJAHVNJWVIVSX");

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
    msg.setTimeStamp(0.974991126853);
    msg.setSource(7038U);
    msg.setSourceEntity(195U);
    msg.setDestination(47680U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.871298808853;
    msg.lon = 0.626759004573;
    msg.z = 0.746289136253;
    msg.z_units = 107U;
    msg.speed = 0.603615547522;
    msg.speed_units = 36U;
    msg.abort_z = 0.768552780415;
    msg.bearing = 0.962287050569;
    msg.glide_slope = 200U;
    msg.glide_slope_alt = 0.847176829244;
    msg.custom.assign("FZOZYLZPPBRLJROTBLADTYPWOZDCHFUJIBBIXIXSIOOQTHKWCLETYAIRIZXVHJKHZMJNAVFSPMENDILSFLVRGVSRJSRDUAKWKXJQHBJBETGFGFSLUXEECQGVMHMSVGQYTIWIMZCUPVGXNCWGHGQMODOUVDRPEZXYUFWSQSKUTOBDRTXLYKENBVVQEN");

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
    msg.setTimeStamp(0.632686050243);
    msg.setSource(60612U);
    msg.setSourceEntity(236U);
    msg.setDestination(32966U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.225474972973;
    msg.lon = 0.355841486965;
    msg.z = 0.616926616898;
    msg.z_units = 90U;
    msg.speed = 0.810478467561;
    msg.speed_units = 52U;
    msg.abort_z = 0.579543850414;
    msg.bearing = 0.976468008636;
    msg.glide_slope = 72U;
    msg.glide_slope_alt = 0.893958923762;
    msg.custom.assign("EAVZXHAQPLLBDWIAKPUWACTQBPSHEQZOORURLEAXPRNYCPRHJOXBJTGLUOVWLTQFRYVVGIJVBHUIFUSVMKIFMYAGSYITDDRKWCSDZMGAOGGR");

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
    msg.setTimeStamp(0.0104399537819);
    msg.setSource(61886U);
    msg.setSourceEntity(190U);
    msg.setDestination(28867U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.026677453352;
    msg.lon = 0.49886972856;
    msg.speed = 0.187685998871;
    msg.speed_units = 26U;
    msg.limits = 34U;
    msg.max_depth = 0.12993884593;
    msg.min_alt = 0.209278338381;
    msg.time_limit = 0.539328432709;
    msg.controller.assign("FXOPLDCJMXIIIZNGQOEDOJMYFAHRJSRTYXGUOIGRCGYHDYDGNNEWMWETKLCDRKTJ");
    msg.custom.assign("YVOIHRJJVRXLOSGGJQUAHFWDNEXKHZWBPWCRKKSBVZLCTJTJMKDZLTZHPKUEAAVULCOBASROWXVUCBPNHZVFVZUQIXBTEBYPMOMPVUOFYTYNAXKNHJLGSOOVPKADSNCJDECULXZMFWEYZIWMLMQTUUGNIYINGMTYWRSQRCQMCYFABOIECUIENDEFWLHQSPHLIBFFTWSXKSDD");

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
    msg.setTimeStamp(0.567864257287);
    msg.setSource(12992U);
    msg.setSourceEntity(248U);
    msg.setDestination(47564U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.323935085029;
    msg.lon = 0.225272470694;
    msg.speed = 0.20885882114;
    msg.speed_units = 224U;
    msg.limits = 98U;
    msg.max_depth = 0.404460229362;
    msg.min_alt = 0.510709337359;
    msg.time_limit = 0.554469417287;
    msg.controller.assign("KLNWNIDMMHZVFBPBSVNADAPUMQCJ");
    msg.custom.assign("QHQFDPSWTPDLFCDVYAYXIINSREGKQFFFYXBABGGZZVBCMWDEJGZANIOYQXYDRMHZSORUFNCNUTBQCTUMUJCGWAOPLSUORULWPFMHIMLHZBJNPQMKARNTSJTRPKNCLITTPGADSVQIMCMMPILWVJZIQOBHXNNFTDTJSXECVWVGZZXHOELXUKYKAMJCUUWYGPVH");

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
    msg.setTimeStamp(0.467601387738);
    msg.setSource(61500U);
    msg.setSourceEntity(88U);
    msg.setDestination(32250U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.213710250579;
    msg.lon = 0.70130469812;
    msg.speed = 0.679331500799;
    msg.speed_units = 140U;
    msg.limits = 48U;
    msg.max_depth = 0.980201892257;
    msg.min_alt = 0.836021962196;
    msg.time_limit = 0.202628280868;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.197298548435;
    tmp_msg_0.lon = 0.241632892171;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HRIVBSRPRNYCSVTNXFPKZUTENRDEKZWLFXWBXYWTJCVQZPSRGKQEXEAJOTOGKABMMOZFVISZEBFVLBNJMPWNTJSJHGRXGPCJ");
    msg.custom.assign("RIWNBRHWSKRVXHHGTZWUKOTJCZDDVRDFQGXCIWUEPYBBRDDPYTEIMPTFMAYQCIJEJAZHKRGJUKTLMWKLEXNPXAVFVTUFVNXUIPTXLSNXSPLBCUQKBGYFMEVMJSOQLZLCWLLZBHABIGUPDCSYHQVYZTORDJHBFKCSVYGOMOXEAZIJVRIDGFJNYGTUYIUGNQJMZOFQKRWSSSLFFQQWNPEHANHGMDPOWMKNVIXE");

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
    msg.setTimeStamp(0.220056038596);
    msg.setSource(55329U);
    msg.setSourceEntity(228U);
    msg.setDestination(57418U);
    msg.setDestinationEntity(137U);
    msg.target.assign("LVCYQIDDXRUJXFUMQOTQXXIOTKACEGIUSSZSFUWNGCGRRQOFNKIQMHMNHPXSORNMJJVCGVSDTNPAEVICRKKXBAZYVCFAXRZHUMPOJSLAICFRBWYJIZXQWYEXITNJGGVUMSEZENHWWJHLUYMCOIKEBPWYKKNLUQBLZTBLBYYJUOZBQTMWTCPBJSDWEKHGRXDCAKEYHBTQFZTZDSNVMYGFA");
    msg.max_speed = 0.245931526933;
    msg.speed_units = 126U;
    msg.lat = 0.527002312028;
    msg.lon = 0.0490043966592;
    msg.z = 0.0339172240666;
    msg.z_units = 243U;
    msg.custom.assign("XALHHNBFLZTOMBPVOEFFQNQWPVIKVNVUGXLJVNYLABZIMXUGIUFDEMKTCOQOHCNNU");

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
    msg.setTimeStamp(0.809140586995);
    msg.setSource(4369U);
    msg.setSourceEntity(145U);
    msg.setDestination(17645U);
    msg.setDestinationEntity(199U);
    msg.target.assign("YRMDJTHYCPSTBSZNDYRTRNCKCCOISWUGGTBJXHBYQUIZSLMFTVIMEDPEOJVTXADZKHCWFOQHYWUJSZZNBJIPDHQFKLCVTUAKNHLOOVQLRXAQULGXQJWCRHDGZFGBBPIRQEXBNT");
    msg.max_speed = 0.0489557181151;
    msg.speed_units = 44U;
    msg.lat = 0.761983295386;
    msg.lon = 0.244445472856;
    msg.z = 0.826935678916;
    msg.z_units = 185U;
    msg.custom.assign("TWFZSTOMKRFYCESHPDCTPVONARAAVNXLEPHIALTIENMCJLYMUXRUUOKRRQRUTYRKTTGXXVBVGKZGSBWFHGXGABFAQSQBKYNIIEXLUKZTUDWHJFWPECJPDOAYUFYDECAZDNHDOBMYVDJMCSYFVWKGWFFJILKBTJYHGIZLXLNZMHXLPZMROEPIBVJQETWIPYEJODRBHEMQVAXUNKPNOWUZKWSSGDHCIIMXJPZQWSSLVNBG");

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
    msg.setTimeStamp(0.636542377919);
    msg.setSource(48341U);
    msg.setSourceEntity(251U);
    msg.setDestination(48762U);
    msg.setDestinationEntity(151U);
    msg.target.assign("EMKUCJFEVRTEONCRAGBYGNAKOKROWNHNYBYDQTDPJOZGQGPDNMZWLMVKBTSLIYAZRJFLFLXSBAWYUJWYGEHDFJSIEENLUOXSVAZHTNHIMUDF");
    msg.max_speed = 0.591725126178;
    msg.speed_units = 76U;
    msg.lat = 0.678965030243;
    msg.lon = 0.195669108619;
    msg.z = 0.208404835537;
    msg.z_units = 112U;
    msg.custom.assign("KYZXZMPJWKMIGWPSNJRGQCAQMGEKMKLNZYPXAUFKXALNZAYHOUYFIINSOVEOHAGLIWEARVYFTFVNUZJQCWWNFDKOEEXADKPHDRUHXJOIBUBOSFOZVAMNXJEQNWOXKSBEFXZBYQJJQVTDIMGISCHDEGZTACMDMFTVVOHBRQCEBEFBZZHQGJYWYYHIBKTNTDPBQYTFCXJDWOIPGRRDTIRVHSLTPHVLDXRKMLLMUJTSUSL");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.514455984101);
    msg.setSource(63141U);
    msg.setSourceEntity(94U);
    msg.setDestination(43469U);
    msg.setDestinationEntity(40U);
    msg.op_mode = 212U;
    msg.error_count = 147U;
    msg.error_ents.assign("BBUCDXBYWDGOQDDRVIHFKLYFGXULIFXQGCNCZVBOJJTLKVWVMPEERVEJUQHGZWRSHNCACJEGQGIREXSLRIKTYYLWXFBTEUJPZBEQFUAKCNXPGIIQFFU");
    msg.maneuver_type = 37941U;
    msg.maneuver_stime = 0.0634673061364;
    msg.maneuver_eta = 63612U;
    msg.control_loops = 3677133579U;
    msg.flags = 22U;
    msg.last_error.assign("DXWMEASOPOOWGIUEFJVIYJPQYIPLCLRFNFTBVJZIFQZXSYGWYEJXFQQDPEKWQIHMGDNVJLWRHKUHTIKPNXLKICRFEBUABUHKPBAMVAOBRMRGFOWCTZTSECSYCBODHVLZAKXQLGTRBMYIKYOARSSUOHSCYLNVXHJJDMNXOALCFSZIE");
    msg.last_error_time = 0.602987446115;

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
    msg.setTimeStamp(0.343248682704);
    msg.setSource(52224U);
    msg.setSourceEntity(39U);
    msg.setDestination(11777U);
    msg.setDestinationEntity(163U);
    msg.op_mode = 179U;
    msg.error_count = 193U;
    msg.error_ents.assign("KNOHDFLNCOQBQVBYOIHXHWZYWBJJJDSTVIVXMMBMBOOMPNSGQERRVLFWHTJQRBSOUWZSRQNYKVTGMILJIEDWHPUBNQIMREEBQFOKHUFQLZUYGEUYLVOPLSCPWTNFYAEISPEFYKXGBUXZRMTGCHAMHSZGFSVRPEADONKDEAYWTSKEVLBNYXKURNXSPFIQCZDGQPOMPDZTIIJMKX");
    msg.maneuver_type = 55116U;
    msg.maneuver_stime = 0.186685063824;
    msg.maneuver_eta = 43480U;
    msg.control_loops = 1688021927U;
    msg.flags = 102U;
    msg.last_error.assign("RJUACHIYINJEXXBBRSGGHMVQFTSWUGMBSBKMXCALVCGOVEBAGYFJSJSLEOKHWQAKUQNEKR");
    msg.last_error_time = 0.473047049989;

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
    msg.setTimeStamp(0.8309370962);
    msg.setSource(26970U);
    msg.setSourceEntity(9U);
    msg.setDestination(30199U);
    msg.setDestinationEntity(136U);
    msg.op_mode = 21U;
    msg.error_count = 156U;
    msg.error_ents.assign("UPMPRMSQRKGOMJERWKWKWGJXGVMFNZKFKEQYYWVVZQGXENIPUBKIXHRMFAIQJAMXPSNDAAMNDZSGBGTDLOSAJLXJUNVOSFCVLUVSZLHBZKORQQHEBYYUZJAAUFFTTCRSPVAZXFCLVXNSPJOJOQTBHEQTKAUHTLJHLPUKBOIOFILXAIRGDDYBWDNNBBRMZWHLHP");
    msg.maneuver_type = 19118U;
    msg.maneuver_stime = 0.581090072971;
    msg.maneuver_eta = 14307U;
    msg.control_loops = 1226645091U;
    msg.flags = 187U;
    msg.last_error.assign("BJBEMDQIDXTSYYCZFJXFXDOAFYCAZQWZBDOKVPLRDKQGWGXYVCNFKAEMSLRHAYANOXDHRAGXODNVKJSSRKKIVTOEBSNXULUNYMU");
    msg.last_error_time = 0.237651910534;

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
    msg.setTimeStamp(0.252539792161);
    msg.setSource(9303U);
    msg.setSourceEntity(213U);
    msg.setDestination(58712U);
    msg.setDestinationEntity(110U);
    msg.type = 216U;
    msg.request_id = 54070U;
    msg.command = 221U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 45345U;
    tmp_msg_0.lat = 0.916718388636;
    tmp_msg_0.lon = 0.710540900633;
    tmp_msg_0.z = 0.136546871938;
    tmp_msg_0.z_units = 211U;
    tmp_msg_0.speed = 0.889952872564;
    tmp_msg_0.speed_units = 71U;
    tmp_msg_0.syringe0 = 97U;
    tmp_msg_0.syringe1 = 178U;
    tmp_msg_0.syringe2 = 111U;
    tmp_msg_0.custom.assign("OTJLOYOSQWFWFBNVAXTTPIGUMXVMAZGAVSYDTIBBONICFAQGXZGAEVZDWEHURUINOQOQXSNP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16350U;
    msg.info.assign("YDMHXLZALHPPQZQWXSAPNIYAKMYRFIVNPWKPGJXTNCSHPZIDUILAVREIVYCPIWFBMJOUPTSANEZLVOAMVJNSMKUOMBRTCWUYYLWRXCABMXCFRBRAQEHHETCPULOFOTDJFZYULJZWTNJQCGUHXHZBOSKMVTRCGIEGLNDOFWBIEVTNQL");

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
    msg.setTimeStamp(0.361925639674);
    msg.setSource(7611U);
    msg.setSourceEntity(130U);
    msg.setDestination(38511U);
    msg.setDestinationEntity(98U);
    msg.type = 9U;
    msg.request_id = 18293U;
    msg.command = 141U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 11116U;
    tmp_msg_0.name.assign("VVDQLOAVUBUWKMSOKBYSSIML");
    tmp_msg_0.custom.assign("VGJRHFVVPBTLLUQXNRHVXZQCUXYXSSICQLSKDOQFWZPCMLDKCBWUPOABMWJURSGHMXNCAREWMYEIEVOROKAZA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5277U;
    msg.info.assign("NGWMOSESLXYEGLDZZIFHRRRFXYBQCCJCPFGYVXWBYZAAGMIQGWGRJCFNDHEZNMUVZNAZIDDMPEUPDUMYCONJPTAZNBTAOARJMK");

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
    msg.setTimeStamp(0.500480027756);
    msg.setSource(37334U);
    msg.setSourceEntity(221U);
    msg.setDestination(10910U);
    msg.setDestinationEntity(123U);
    msg.type = 46U;
    msg.request_id = 19808U;
    msg.command = 201U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 8789U;
    tmp_msg_0.lat = 0.242452952267;
    tmp_msg_0.lon = 0.755627688076;
    tmp_msg_0.z = 0.81480012027;
    tmp_msg_0.z_units = 218U;
    tmp_msg_0.speed = 0.378120902137;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.duration = 11702U;
    tmp_msg_0.radius = 0.732218531635;
    tmp_msg_0.flags = 73U;
    tmp_msg_0.custom.assign("DJAIVBUDITYFFYQTICWSQYMWZNGXRECPEFYCDBWUESXAASUTYGWYKHMWCKHMPAUIGEKQLBJJSGMXUOHHRWCNZPDCVSXKOHEFLQUXUHZBDMOBNJAHJPGNVNROKRULIKSGZATIVWQXZYNWZFLPTLJXLICNTQJMPBPC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45632U;
    msg.info.assign("UYSOWCXMOZOMWOYPCLRLSBOAPEKGKCZCPXYDHXHG");

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
    msg.setTimeStamp(0.234135100286);
    msg.setSource(36353U);
    msg.setSourceEntity(29U);
    msg.setDestination(23939U);
    msg.setDestinationEntity(79U);
    msg.command = 140U;
    msg.entities.assign("DWIPQJOOBIECWREGYMAX");

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
    msg.setTimeStamp(0.0697696758666);
    msg.setSource(20373U);
    msg.setSourceEntity(86U);
    msg.setDestination(29519U);
    msg.setDestinationEntity(90U);
    msg.command = 169U;
    msg.entities.assign("VCUZHOBRHIVARONRPXIUSDWWTICESAJUWEDJGEIRLMLFZEEGHCLOUFCZUOJHDTSGGBTXLLPSKKXOICGDKWQDTHWTQRYURMEVJRALZZFMNHUFXZERNAYBYHBMOJKHKNVPEMQMALJMGEIPIVMADUBJKYXHLNZAFKPDWQZO");

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
    msg.setTimeStamp(0.0518239784942);
    msg.setSource(43742U);
    msg.setSourceEntity(100U);
    msg.setDestination(9029U);
    msg.setDestinationEntity(15U);
    msg.command = 233U;
    msg.entities.assign("VVLWNZQIVWYZLBVRDZDFBFYWLNAGQPRLXSILMZRUWUUJQHFCCAGNPEQJDPYNCVCTADLDOZUORSAOJISLCFVIYMMHPBBNXSAAYNGVCCWFKWDGGVSHPKBXMBTZ");

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
    msg.setTimeStamp(0.440248165336);
    msg.setSource(54129U);
    msg.setSourceEntity(189U);
    msg.setDestination(6359U);
    msg.setDestinationEntity(75U);
    msg.mcount = 56U;
    msg.mnames.assign("SLHTMTIVPTWEXRYIBZALAKVPEWFKXEIXJCYTNFOJADJCLQWKLBEHJLPXURFJKQBWBMOQASACGEUXZGSRQZPFGTFZSWNCGVQRILNJXDTSWHPNHINHFS");
    msg.ecount = 5U;
    msg.enames.assign("NBHNWYORVRSKARZCDKIZJBPAJNZFEXDQFKDUHKIPIFCJHLCYGGMVQKESWRWZZINADOWTJFFTYVQJWEZPVTCJKFXGAXDUHPYDYATAJHDBIKRMUPSGGQXDOTZKESWWESFENNXHUAVPXVGMABVINBMZVBLWARAQJMDUUDGEXIFUSWSTQQHJBMOCLKOYBYULGCPOYTULYGBIRSTLWMXQIINHMCKQERCMBLJFRSXPGYFPOZQXCNUVOTLH");
    msg.ccount = 227U;
    msg.cnames.assign("QTLFXHLWFRMCUKVPQUKMLRIXMKKGICBVYDPNZUTNCIUFNKQXOEYAETWSOQ");
    msg.last_error.assign("KMFOYEACITNNIWHIGPSFFQEBLOUCORCIDAENXVPQKEULZUEEVQXQNCYFTFGNHFLBKIMTHBCZYEIRIFCQSKNLVAQXWVJRLVVZPJRYSGZGXFSUEUJZUEOHPGDNMUONDKYDWMBRSXWPANYWVGJIZKRCGJTLHBDSVOMQBVOZBTHMOH");
    msg.last_error_time = 0.147030536273;

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
    msg.setTimeStamp(0.649470101586);
    msg.setSource(51925U);
    msg.setSourceEntity(218U);
    msg.setDestination(38294U);
    msg.setDestinationEntity(53U);
    msg.mcount = 122U;
    msg.mnames.assign("ZVVTHKLAWYRICNIKYFTHMMXFCMNQHGIUBHYLCXNWFPLBRGQYDOGECCHSGFRLAFRHLTPZOXGMYOZFTUTEXUGJTSZAPOSCAUINMQPXPYBEWJWJRZJWJNHPRBMDBAQGFAZWMWSFEPOUDXLCTNSVKNIIGDDTBLUNEMFBNZCVFOREXYCRQLVDQQXWJYAAPRKTKOLUIZTHVZKSSKEWERMPVIZVWKUUXMBNVADESIK");
    msg.ecount = 48U;
    msg.enames.assign("CVNDLPXPVQJUDSFZNWZMSYMLWLSYJZZRYRGROIFBOGBVAJZQUCNITCMKIHAMEWIGRGHKCKSRYDQNCFKMNERJZDVLYKTNXHVKKLRXIAXJOQQWCEEXQLJEJTDWCHPUGXAJBUHVTGEMNZUIKSXBFOUESLHABCGGOYNLTUSTSXORPHMMHMEDYJEBEHFWVRICPPBFDAFUVPGIQAAWWFW");
    msg.ccount = 128U;
    msg.cnames.assign("UCOUWIAUDFGRQVNZAYIJSNNIZBFZCUJFQULHFHQVJONDNUXSXYOZQCZCQGPRQRDRTBBTXAVULHYXBOOHZAQJIMYWGTSMEHZHFUYFCKMZBSCOKHMPDLGVNEWFYTYPGIDWEJAXJSZKROVMWLEVBTKEBFLKRKXHWYMHFZQTAEWUNOOMDGJEPSBFNCJJDGALBMTDSTAIEMRHAOLENSXPDRGQVGLDKGIRNWPPTVYKIKKUPXPYXQ");
    msg.last_error.assign("DZMNBOGHTZEZMCNPBVICHSBXDZGULEUOAHPGZXTMUQVILHSPBSMNJXHPXOMMIHATAOKVCTJYJWYOJRFJMGSXALKVVYRKSEPQIBBSYIEKUCSOXNXNERSSCCDMLRPWKJXGTKNKKCEKBILAUHYVUEHHLYAN");
    msg.last_error_time = 0.374608624681;

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
    msg.setTimeStamp(0.234933916992);
    msg.setSource(14533U);
    msg.setSourceEntity(85U);
    msg.setDestination(15739U);
    msg.setDestinationEntity(205U);
    msg.mcount = 224U;
    msg.mnames.assign("PYPZNHVPNFUWGK");
    msg.ecount = 116U;
    msg.enames.assign("PKENPGAEPVDEKHJENAPKEWTVXBYUISCNWYQOEUYBKJKRCBLIXTKYBQTFUOSUGVJHNSTYRBHFCWUUFVSRBWMNODLLMZDRJIIGVPNPODHPZXRZHNRVVZAWFADOLMHZLLJEMQBQXAJLDYCSEFPSLURIRJGEUWQZXMNKGMOUWUCYQAI");
    msg.ccount = 207U;
    msg.cnames.assign("SEQCUAKEGOBNUTRMYHOMOPOIDTAXCVUDVDUWXZGBXYGMKHFXUFJBOEBIQXVWJMXXPUPOACZGENOINNUZJSQTXFQCRTHHAOWHYIQFYNPVJTJMNAXMKECJCYVSBCCDDILGWNJRDKDZIQJEBGUAP");
    msg.last_error.assign("BBLBQMQOOIUBVZDCHAZOINOXVFCTCYXBYJUWWEWJAWRYROGOIWKUWWMTLQFITLIYKPQJJIMGQNDPAXNLPXHVDEKWZBTZCIMXMPLSTHADAKMERDJZKZPMENZPUQWIWLRRAOSJXNCDVHUSGSTK");
    msg.last_error_time = 0.31203830558;

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
    msg.setTimeStamp(0.755413962183);
    msg.setSource(29559U);
    msg.setSourceEntity(163U);
    msg.setDestination(35045U);
    msg.setDestinationEntity(137U);
    msg.mask = 106U;
    msg.max_depth = 0.523219031531;
    msg.min_altitude = 0.945358522603;
    msg.max_altitude = 0.540829923069;
    msg.min_speed = 0.476091284684;
    msg.max_speed = 0.362434926955;
    msg.max_vrate = 0.187204919985;
    msg.lat = 0.259889426248;
    msg.lon = 0.523414717647;
    msg.orientation = 0.0232262673754;
    msg.width = 0.755997145376;
    msg.length = 0.492397171556;

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
    msg.setTimeStamp(0.804895793337);
    msg.setSource(50776U);
    msg.setSourceEntity(143U);
    msg.setDestination(3877U);
    msg.setDestinationEntity(110U);
    msg.mask = 95U;
    msg.max_depth = 0.470032625762;
    msg.min_altitude = 0.727748080844;
    msg.max_altitude = 0.826413085611;
    msg.min_speed = 0.154812043489;
    msg.max_speed = 0.498816360423;
    msg.max_vrate = 0.460415907121;
    msg.lat = 0.739663823736;
    msg.lon = 0.0697008605467;
    msg.orientation = 0.024432481258;
    msg.width = 0.927337252294;
    msg.length = 0.338462539618;

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
    msg.setTimeStamp(0.379338760747);
    msg.setSource(16632U);
    msg.setSourceEntity(58U);
    msg.setDestination(64519U);
    msg.setDestinationEntity(3U);
    msg.mask = 118U;
    msg.max_depth = 0.0868297737401;
    msg.min_altitude = 0.564805183062;
    msg.max_altitude = 0.959997210859;
    msg.min_speed = 0.586181511431;
    msg.max_speed = 0.236331846946;
    msg.max_vrate = 0.828402069268;
    msg.lat = 0.647719818929;
    msg.lon = 0.214580902555;
    msg.orientation = 0.935947166782;
    msg.width = 0.176063065229;
    msg.length = 0.159469062075;

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
    msg.setTimeStamp(0.993013312869);
    msg.setSource(20077U);
    msg.setSourceEntity(134U);
    msg.setDestination(12621U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.00795576452361);
    msg.setSource(7897U);
    msg.setSourceEntity(178U);
    msg.setDestination(21204U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.281294168612);
    msg.setSource(52992U);
    msg.setSourceEntity(141U);
    msg.setDestination(49064U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.918500952264);
    msg.setSource(27371U);
    msg.setSourceEntity(231U);
    msg.setDestination(54399U);
    msg.setDestinationEntity(227U);
    msg.duration = 19015U;

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
    msg.setTimeStamp(0.517691040688);
    msg.setSource(51836U);
    msg.setSourceEntity(88U);
    msg.setDestination(8872U);
    msg.setDestinationEntity(41U);
    msg.duration = 39703U;

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
    msg.setTimeStamp(0.581008771521);
    msg.setSource(50490U);
    msg.setSourceEntity(139U);
    msg.setDestination(10816U);
    msg.setDestinationEntity(126U);
    msg.duration = 893U;

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
    msg.setTimeStamp(0.660829053549);
    msg.setSource(48648U);
    msg.setSourceEntity(199U);
    msg.setDestination(38500U);
    msg.setDestinationEntity(5U);
    msg.enable = 11U;
    msg.mask = 1451695307U;
    msg.scope_ref = 3090889051U;

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
    msg.setTimeStamp(0.362600113465);
    msg.setSource(54931U);
    msg.setSourceEntity(133U);
    msg.setDestination(30012U);
    msg.setDestinationEntity(155U);
    msg.enable = 243U;
    msg.mask = 200727566U;
    msg.scope_ref = 1427778319U;

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
    msg.setTimeStamp(0.140725651943);
    msg.setSource(26742U);
    msg.setSourceEntity(101U);
    msg.setDestination(18206U);
    msg.setDestinationEntity(7U);
    msg.enable = 230U;
    msg.mask = 4241414242U;
    msg.scope_ref = 1300950747U;

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
    msg.setTimeStamp(0.220228229783);
    msg.setSource(39298U);
    msg.setSourceEntity(145U);
    msg.setDestination(14947U);
    msg.setDestinationEntity(230U);
    msg.medium = 36U;

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
    msg.setTimeStamp(0.199780569898);
    msg.setSource(29650U);
    msg.setSourceEntity(160U);
    msg.setDestination(15544U);
    msg.setDestinationEntity(221U);
    msg.medium = 65U;

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
    msg.setTimeStamp(0.137725203802);
    msg.setSource(25470U);
    msg.setSourceEntity(92U);
    msg.setDestination(53728U);
    msg.setDestinationEntity(162U);
    msg.medium = 234U;

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
    msg.setTimeStamp(0.537704285678);
    msg.setSource(44838U);
    msg.setSourceEntity(108U);
    msg.setDestination(14188U);
    msg.setDestinationEntity(245U);
    msg.value = 0.377979464216;
    msg.type = 203U;

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
    msg.setTimeStamp(0.807924913151);
    msg.setSource(38520U);
    msg.setSourceEntity(166U);
    msg.setDestination(60736U);
    msg.setDestinationEntity(38U);
    msg.value = 0.575069956589;
    msg.type = 253U;

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
    msg.setTimeStamp(0.908710821445);
    msg.setSource(42548U);
    msg.setSourceEntity(61U);
    msg.setDestination(29249U);
    msg.setDestinationEntity(98U);
    msg.value = 0.482741704491;
    msg.type = 141U;

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
    msg.setTimeStamp(0.0648486099019);
    msg.setSource(6103U);
    msg.setSourceEntity(42U);
    msg.setDestination(49727U);
    msg.setDestinationEntity(168U);
    msg.possimerr = 0.0624506332494;
    msg.converg = 0.205824387225;
    msg.turbulence = 0.976339737228;
    msg.possimmon = 14U;
    msg.commmon = 247U;
    msg.convergmon = 178U;

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
    msg.setTimeStamp(0.590863360721);
    msg.setSource(11049U);
    msg.setSourceEntity(242U);
    msg.setDestination(7867U);
    msg.setDestinationEntity(248U);
    msg.possimerr = 0.440846399134;
    msg.converg = 0.676314120027;
    msg.turbulence = 0.0974705436301;
    msg.possimmon = 136U;
    msg.commmon = 7U;
    msg.convergmon = 156U;

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
    msg.setTimeStamp(0.696056025727);
    msg.setSource(31161U);
    msg.setSourceEntity(91U);
    msg.setDestination(16084U);
    msg.setDestinationEntity(29U);
    msg.possimerr = 0.719624080544;
    msg.converg = 0.239204113837;
    msg.turbulence = 0.475091007857;
    msg.possimmon = 82U;
    msg.commmon = 206U;
    msg.convergmon = 51U;

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
    msg.setTimeStamp(0.671002291829);
    msg.setSource(18978U);
    msg.setSourceEntity(156U);
    msg.setDestination(48280U);
    msg.setDestinationEntity(201U);
    msg.autonomy = 76U;
    msg.mode.assign("HDRKFTKGNMXLJKTKJRIBSTXLNQIKHXSPNDYDIYWXEWTXBBRAGJSPPVFDZCDJVZLWNODLFGMXRFIMKSVRDXBSUFLASPAPFREYJMCENEYWJSEGUPVUTTKQUXZWMOHAGPOEOBWKMQCAOUOZHSTCHCNUGLMJUJZZRFEDJHJTPNIECXPOASVRRQGNYYMSTWCKQYD");

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
    msg.setTimeStamp(0.396224770764);
    msg.setSource(29193U);
    msg.setSourceEntity(145U);
    msg.setDestination(8910U);
    msg.setDestinationEntity(106U);
    msg.autonomy = 231U;
    msg.mode.assign("PBXLGWHLSXHWHJHAZDZAABTIJIWIGCXUEJNNOIZZIRKTXTUEVRYVDOXDANUDWBICQMZDTWCZUPNLRFTDEGQGUNYFQEEFSFCCLYQEIRVLUPKJYKKOHDLKGUONCZONNRBJBMEKYRVSZNJOFHOVRCLODTRHWQFWYKXIE");

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
    msg.setTimeStamp(0.591021164291);
    msg.setSource(64706U);
    msg.setSourceEntity(210U);
    msg.setDestination(54037U);
    msg.setDestinationEntity(125U);
    msg.autonomy = 243U;
    msg.mode.assign("ENAUIKXLTIVOCWHECYGXBFGMVWFTJXHOAUPOYQPMYYTSQXDLGNEGWKXCVZRGHFBOAZBQMOIWVKNWUMSTBCNZJFBOP");

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
    msg.setTimeStamp(0.16603305031);
    msg.setSource(40799U);
    msg.setSourceEntity(37U);
    msg.setDestination(24300U);
    msg.setDestinationEntity(99U);
    msg.type = 2U;
    msg.op = 235U;
    msg.possimerr = 0.726286723652;
    msg.converg = 0.54467323475;
    msg.turbulence = 0.243875199397;
    msg.possimmon = 130U;
    msg.commmon = 62U;
    msg.convergmon = 140U;

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
    msg.setTimeStamp(0.166085589491);
    msg.setSource(62879U);
    msg.setSourceEntity(242U);
    msg.setDestination(23347U);
    msg.setDestinationEntity(156U);
    msg.type = 172U;
    msg.op = 35U;
    msg.possimerr = 0.539521121176;
    msg.converg = 0.368683563527;
    msg.turbulence = 0.370838320988;
    msg.possimmon = 89U;
    msg.commmon = 44U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.114508072267);
    msg.setSource(37682U);
    msg.setSourceEntity(153U);
    msg.setDestination(13913U);
    msg.setDestinationEntity(138U);
    msg.type = 144U;
    msg.op = 193U;
    msg.possimerr = 0.413805763702;
    msg.converg = 0.0906914788155;
    msg.turbulence = 0.143325015228;
    msg.possimmon = 2U;
    msg.commmon = 250U;
    msg.convergmon = 241U;

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
    msg.setTimeStamp(0.789266306028);
    msg.setSource(4719U);
    msg.setSourceEntity(28U);
    msg.setDestination(44838U);
    msg.setDestinationEntity(25U);
    msg.op = 168U;
    msg.comm_interface = 130U;
    msg.period = 52993U;
    msg.sys_dst.assign("WMMQAMJYDQFBTKLEORMKSFRROHQIJTKYKIAGJTDAIVPFAOHHIVYSHHUGCOYHYVRPFLUZOIPTOAGGEPIZLKMBIODRBFMSUVLLPDCDGPZXDPJBWCPLWGNJEEYRXBAUGXZNWSHSIASV");

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
    msg.setTimeStamp(0.528122295238);
    msg.setSource(42589U);
    msg.setSourceEntity(10U);
    msg.setDestination(43639U);
    msg.setDestinationEntity(110U);
    msg.op = 132U;
    msg.comm_interface = 130U;
    msg.period = 48873U;
    msg.sys_dst.assign("CYZEQZTOMQAZIIITFDXIKLKARRKNLWMHCJSIGNXUBNDAPALMOZPLITWHTFLFBYXTVNOAJSDUVAHXVKUFGYWYZUWPURMWHUPSGOIVJLHUOFVBWIFOBTGNEDDVXFSKHDSXLXMBEHEPCRWZNGBMSZAQLSPMLKAFRBQKKUERYQFMAGDTQXO");

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
    msg.setTimeStamp(0.881966931709);
    msg.setSource(62737U);
    msg.setSourceEntity(219U);
    msg.setDestination(14806U);
    msg.setDestinationEntity(31U);
    msg.op = 203U;
    msg.comm_interface = 92U;
    msg.period = 2412U;
    msg.sys_dst.assign("RPEHDQNHSZSXWPAMFCVIJTOGJVQYIQLHYEVDMUGMMFZODROBSMFBLMCTVSRATKOOKPPGZEQIYZVMYXKNNWLJNFOHDUXZYISNNRIDHGELKPYCBVNORVSEDQFUKUXBQZXNPRCHECIJYJWOCDYVUGHXWIRCFOBBGLLRRFBJZZUXC");

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
    msg.setTimeStamp(0.555779856172);
    msg.setSource(40579U);
    msg.setSourceEntity(113U);
    msg.setDestination(38572U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.59875571716);
    msg.setSource(18211U);
    msg.setSourceEntity(199U);
    msg.setDestination(8085U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.76237835186);
    msg.setSource(41304U);
    msg.setSourceEntity(35U);
    msg.setDestination(64705U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.619826401812);
    msg.setSource(16196U);
    msg.setSourceEntity(120U);
    msg.setDestination(43913U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("XAUINGQBTMFVUVXNMJITWJDDBJNHZOWTNGKJKVCTLQWUSIMVVEOASPRXSCNGOEFYEJXRDFWOCKPCXBPTZNVAGRYQAZQPPICGFKKWPTLCEZSBKMUOQNQWKGEDRORFWBIMKVWGQAALDTWIMRJYOK");
    msg.description.assign("OGDOTMBOXCUXCQLQDDBJMSYHRFSHDJQKPJEUKNXNMKBQSDGHPFPUUCAELIRATFNUPQLNOYYUIVIANLWKHFBTPDRXWZCZUCOJLNEQIKJMVVIILTPXBWFAFFMQFTBDMMVDGSZUQAYYRXOGHQLQXPTYBSKJOAGGRTVWIIWHOJCMZHVEJRZXWLDEOSWYHUVVXYGZLHBINFZZST");
    msg.vnamespace.assign("RKHWZIXFSHVKXPTTEHCXJKQBEFREZQOGRCUMHZRTWTWJSNYIPGIDAKYLWGIKBUNSQZVUQDWSNVZFLPOYMXOWYFCUDJTPZFQFLMGOCBLRXOWVAJGTVUCJCPZVUYODBZC");
    msg.start_man_id.assign("JGVANBKSESLCWYVMOCMZPWZRQPPZOMQGCQGFTDKDONIQQPRDNBJDRYUJYSAFCIBTTXTAQPLWKYH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TBKGRAOXYKXWSDAINWLPPIXWL");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 8223U;
    tmp_tmp_msg_0_0.custom.assign("VGQIENUZRGDIPRGPBOLHAVJUWOBDKZGJIJCCENRMQHTAZPGSIRQTBUTFMMZLUCMVSITMYQWKJMNWTBQAKBYRKNLNXEEQIBVRFWOVSSUDTAFMUXGCCZECNPFDOMELTGZDSSFEJQOHKLEFZYCAKUFXYOVCTLWJLWSFYBOXVYUKHXSTTVKXHJYNCBHMRUXKDYPGIJFEAD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SmsTx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 1123152548U;
    tmp_tmp_msg_0_1.destination.assign("PJGPOPUFPNYMTIXSRTJLTFHIEDVVRITLAQHPWEZGNOBMFUUQNWVZJELYAGOBHNOJA");
    tmp_tmp_msg_0_1.timeout = 46815U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-42, 0, 38, -6, 95, 49, -93, -106, -85, -76, -51, -51, 36, 5, -99, 108, -57, -20, -46, -79, -18, 86, -89, 11, 107, 32, 58, 123, -86, 118, -8, 67, -97, 49, -1, 115, 16, 78, 52, 58, -32, -120, 85, -107, -4, 107, -25, 90, 41, 100, -86, 65, 125, 17, -29, -45, -108, 80, 20, -13, 123, 106, -80, 43, 5, -22, -36, 84, 89, 60, -79, 126, 105, 107, 56, -84, 35, 74, 8, 18, -69, 82, 1, 24, -120};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleLinks tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.localname.assign("TNNPTAZDVRMXVXVOFCWYNPQZQCHFECHUPICALXIZFBRBOUKSCFKEIVUWBKLGZNSDETZSSWDHFSWAKKMYGBPGKRDLECVJDUXESGIDYNGRXXMHATDRLK");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0473373105395);
    msg.setSource(61548U);
    msg.setSourceEntity(72U);
    msg.setDestination(61888U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("CRPVTHVJZCEFWFNMPVCLZWLQIVDZSGKIPSJQVKBNEZSKJGXVXDIIAYHTBZWUECIPQSPCOIYAXXBNDUNLKR");
    msg.description.assign("GDIKPNHCBDCMEEOOVWBZMQVRVBPUSHJZYECWUQSARNHHHQTAFPBFOPTGNFIUBRVYFOHPNFBHYYFUDIJCQWXWOGFIG");
    msg.vnamespace.assign("ORGHKPHYXWNUXOXRJCTBBQZEDSMXTZNBQPVDCWQPICQLVZQSTYPEXSPOZWCKADKNQISUDIEZPFRZJDYNACKMQAHYXNSRKTBIWGKLMKLXM");
    msg.start_man_id.assign("EFJQSNYATAPVMCPLXXREQMHSPDSKGTFHLILOKWHIDGYQWIBSNPGJNFPUVPMYACWTYZGGUCBIOMESJDORKEWRPGEQQNOWHYQLZLTMAKFGVYJISIYWWQJKVLJFPOMVBIJDVZFXPHZEMZAHKBIYNUWZXRUFCBXLUZNRMWHAOTIKFTTAKEHXMVCDNCSANDVDXNLLTBROYJBKPSGYGNL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OKOYQWYRWRQZMQQATIOGINRERIBRICMTEKASIBALSQJRUSVJZLMDVTUCLHPUHNDGGBKDAZLCIZGKAXCMUBDKAGRYRRHGAFCDZFUMTCSXHSGXBEHTYUXJDSLYHRAWPOTCVLNFEZJMPBA");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 24648U;
    tmp_tmp_msg_0_0.lat = 0.101270732114;
    tmp_tmp_msg_0_0.lon = 0.476588615661;
    tmp_tmp_msg_0_0.z = 0.966421283076;
    tmp_tmp_msg_0_0.z_units = 58U;
    tmp_tmp_msg_0_0.speed = 0.662301397291;
    tmp_tmp_msg_0_0.speed_units = 193U;
    tmp_tmp_msg_0_0.custom.assign("EPBPGTZBLMQAXNJUFTCNONENODFIHFYWEZMPZKKJOYJMVZDCAXRMFQTAZDYMJSJXMZLPFININBJAYXHHQSCTWCRIUFKKRYUTSHRWIWGBUXSTLPSAWGACZUIOXDGEPOVCFQBZHSKJGBVLAXGSOU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AcousticLink tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.peer.assign("PEZINDCRNFXAYOYGSHKVXXOLSCBEZNWXVBMLTJGKDOZOBWRZFNKNPMGCKTRHLTQUSZEEQVDSWPXVFLKFDJUNYUTIIFOBQMTEHCXPBHXFRCMBQPGSFSLGDUFBJZINTVBGBPDVQFRYGKVGYQFAKDIZSMPRWIAEVXJYKVXLYLMIOZUHRXTEQLTUJWQEGW");
    tmp_tmp_msg_0_1.rssi = 0.32836309199;
    tmp_tmp_msg_0_1.integrity = 40825U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityList tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 66U;
    tmp_tmp_msg_0_2.list.assign("GOCTHAXKCKMYWWKGNXEKFRODASFYRZMHJZYHMOUOBNDGPPPFOUMGPSCTAVVKSQFCVILKLDIGXSZAQUBRHRUKMAPPCYBDHIUBZWESQZTVOXPOOWXGZDKAJMVBDTDODJEHGDYCSCTQNEFINNIRBBQCHUZUASHUKLXI");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::HistoricDataQuery tmp_msg_1;
    tmp_msg_1.req_id = 58618U;
    tmp_msg_1.type = 187U;
    tmp_msg_1.max_size = 39697U;
    IMC::HistoricData tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.base_lat = 0.83187174354;
    tmp_tmp_msg_1_0.base_lon = 0.460382909165;
    tmp_tmp_msg_1_0.base_time = 0.796947900492;
    IMC::RemoteCommand tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.original_source = 58105U;
    tmp_tmp_tmp_msg_1_0_0.destination = 34562U;
    tmp_tmp_tmp_msg_1_0_0.timeout = 0.175452529812;
    IMC::PushEntityParameters tmp_tmp_tmp_tmp_msg_1_0_0_0;
    tmp_tmp_tmp_tmp_msg_1_0_0_0.name.assign("NOFCSUFBPZDWRGMAJRIQCZIFLPDVYXBBQVIGGXYIHEIETGWFAPFXMLHNBJRLXTKFLJUXDAGHLUWETPVEEEQJAKNSYDUWKQSRVOKYBOITZWKZISUOWREYBYCBBQGXPDATNFXRHNZQV");
    tmp_tmp_tmp_msg_1_0_0.cmd.set(tmp_tmp_tmp_tmp_msg_1_0_0_0);
    tmp_tmp_msg_1_0.data.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.174447166159);
    msg.setSource(34324U);
    msg.setSourceEntity(159U);
    msg.setDestination(22990U);
    msg.setDestinationEntity(137U);
    msg.plan_id.assign("LEREHSEWDJVWYLLFLESASBWBXPMHZPCZWDHUQXJLTLLXAMFVTGVINRTNEZVANBHZNKVGZQGMYCHAPYUCFQXKOQAQGYDPRDKUFGGFVEUJIBVDNMHNORBVFGNLUJNGMEGASJTYZOWPUFMYHHYQVUIRYZLZKBUKZJOWOXWTMXJKKOOIMIIPRBBPTXYSRTSIQRJXNDMSCOCRHJFEDWDCAZEPAKIOBSPXDWGISVSDENCIKLOTPTRCUQXCAM");
    msg.description.assign("OACKXWHTTDFVPZHUHGLIHVROCWKDMVMTRACTWAJIQCZXAASSCWXFEMZSHNVBJSSVYLOGMPOBKXRKYXDFFLIHWMOXTYOYEGSAPFUCRGLWBQRNECQXZWNMYNHKDPJXQDBZLVBCNOPMSUFGYZWS");
    msg.vnamespace.assign("BISIFBDAPAWAWIZLPONQLKHRYELHVOCCEXGUYPIIDKHHIDPJNAWBOTMTNRMVJJTTMRHUCSWXPQDPVXPIWYOJRJSMFAQGPSSGLHACUBAQWNRHUZGEWLFNVQKXTNCLKWQUSVKCYNWFKGDGRZANACOKGFBMYXOIKVDBBTLQMIYYKJGVEFH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KGBTQNYDYGZFZNLEHKCJDGDPCQERBJYWAJRYICGOXXYOWXDIHGIFKQBVWKHHCHSURWBHKNYOLORZQHKVCOLVTVOLRLJCFKCZRJTPDMTESYBQNOMWSZXOWKLTKXJYJNGFMHBDENEKJZGBYOCGUZITPDVISUQMP");
    tmp_msg_0.value.assign("OPDZXAXZLKGIISCPGKCPOGVHZEEPJTWKLQOEJWLLBKZIHVVZJMBMVGTCLONNJOFWUJ");
    tmp_msg_0.type = 236U;
    tmp_msg_0.access = 56U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XGOSHABCLVRVIKLJUVBKMLPYUPAICJJEDXERFIZNGEMKVTWSYMQZANRSOWQHSDTHVWAHYOYOJHGRQAQMYSIZKLFBRPWDSFVDBIPWKMOALNDRRXDEFQJTHBYFMNYTTUHIAPBSMDXICMJYGPTZFFXUOZUZQYPXZEFQBNNWGVQNCLCVOLWXWTKZBHEUJLCIKLKRPSSCGXHAXFNJQW");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KDGFLYLXGUACBQLZUBNWZJNYTNCYYYQPUAGSHRNCWGBJTZODELQKGJSUFOHPYPVOONFUWKIFBLZQFRBTXZNINSJVMJPDZEAHSAKHUVJQZVREDFLDCVPMCUEJIXVBWNIEEMLZYNRUBYDLTEBUWFCAIRTSVFQCW");
    IMC::Land tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.86339228937;
    tmp_tmp_msg_1_0.lon = 0.838124071188;
    tmp_tmp_msg_1_0.z = 0.328826323576;
    tmp_tmp_msg_1_0.z_units = 90U;
    tmp_tmp_msg_1_0.speed = 0.39847381222;
    tmp_tmp_msg_1_0.speed_units = 170U;
    tmp_tmp_msg_1_0.abort_z = 0.600279768277;
    tmp_tmp_msg_1_0.bearing = 0.206842743882;
    tmp_tmp_msg_1_0.glide_slope = 134U;
    tmp_tmp_msg_1_0.glide_slope_alt = 0.441186224771;
    tmp_tmp_msg_1_0.custom.assign("PJNRFFVHWJXHZZOC");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredThrottle tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.459580084697;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("LJCLVFKIWYBDTVAMAAMRGTNHW");
    tmp_msg_2.dest_man.assign("XWLGPVHITGQORGFYZRWVXVMNYTFMAETHXAHXWRLKJUDUHQENRORMBBVLJAENZFBGAZUBRMYJAIUKYYLCFYCSUMQTQSRFOGSSNUNVZTVIINXECQLVWUKBIPDXHAERTPFHEZJAXSZSWJWOSIGYFTHTOPCGHJKSUCJWFKWBZNMQMZJHWDMQLOKOPPFLRHMODCPLWRBIZGUDTNBVECJKOVUYZKBCNAPYGQI");
    tmp_msg_2.conditions.assign("OSQBTBLMHIDTEJUPDZIRXRQTKLKVKSGZTKMIQSVGWPEFGWPGUNQRFXXAINONQUABHCGZJGDHIQPFCIWNXLZMFLLYUOATFHVWDGHPRBYGUKWCGSHPXYZQBNBCWUBYNJRYSZNKAFT");
    msg.transitions.push_back(tmp_msg_2);
    IMC::ExtendedRSSI tmp_msg_3;
    tmp_msg_3.value = 0.093416713641;
    tmp_msg_3.units = 188U;
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
    msg.setTimeStamp(0.785158374783);
    msg.setSource(49186U);
    msg.setSourceEntity(32U);
    msg.setDestination(61404U);
    msg.setDestinationEntity(120U);
    msg.maneuver_id.assign("JOPDPVZDKXVQVTNAMZUVONRUNWCROYJIG");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 2171U;
    tmp_msg_0.lat = 0.744043942391;
    tmp_msg_0.lon = 0.210996706018;
    tmp_msg_0.z = 0.874132591841;
    tmp_msg_0.z_units = 92U;
    tmp_msg_0.speed = 0.971833016745;
    tmp_msg_0.speed_units = 118U;
    tmp_msg_0.custom.assign("HLSJDDMSJRIBLZQGCGCLEWTRDYLIOAUENEIJHPQZIRNLWHGWSQYKRGBTDDASZJZHOHEGVGSJINRV");
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
    msg.setTimeStamp(0.629827887939);
    msg.setSource(31251U);
    msg.setSourceEntity(86U);
    msg.setDestination(57344U);
    msg.setDestinationEntity(202U);
    msg.maneuver_id.assign("JVUPJSVQBYOYBARSQJUSWFEGAPBNRGYOERAOOOGAKLDZKTFEOWYJCDOXDJUHTBMXBIDMBAPYHTQYZGNZAIAVNYRQKTHQJUPJVLNYIOZEPENSZVMMNTGGZWLXKJSYVTQGSDQZQCADWEOHSWLFNNRUNRHSUCLUALTKXCEKRTVWFRLXZHIRWDOZHMCFXBWFDIHYQVTGBZVXJKLCE");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.458692297558;
    tmp_msg_0.lon = 0.746840929103;
    tmp_msg_0.z = 0.847758410232;
    tmp_msg_0.z_units = 203U;
    tmp_msg_0.radius = 0.959172253791;
    tmp_msg_0.duration = 6171U;
    tmp_msg_0.speed = 0.753965049265;
    tmp_msg_0.speed_units = 237U;
    tmp_msg_0.custom.assign("JEOUOVUDRJJLGGRRNDEQMPJFZPDFLD");
    msg.data.set(tmp_msg_0);
    IMC::RemoteCommand tmp_msg_1;
    tmp_msg_1.original_source = 26825U;
    tmp_msg_1.destination = 17836U;
    tmp_msg_1.timeout = 0.323314509296;
    IMC::ReportedState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.647803257236;
    tmp_tmp_msg_1_0.lon = 0.202516469531;
    tmp_tmp_msg_1_0.depth = 0.495669542935;
    tmp_tmp_msg_1_0.roll = 0.352590183957;
    tmp_tmp_msg_1_0.pitch = 0.794987580049;
    tmp_tmp_msg_1_0.yaw = 0.464766714322;
    tmp_tmp_msg_1_0.rcp_time = 0.993832089593;
    tmp_tmp_msg_1_0.sid.assign("LZGQKHKTGKVZMHAZXPNQCASAJTMOMRPAQPEBBBWJTRFCAJDHKPTWXCWPTVVW");
    tmp_tmp_msg_1_0.s_type = 30U;
    tmp_msg_1.cmd.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.657934207479);
    msg.setSource(60735U);
    msg.setSourceEntity(189U);
    msg.setDestination(62243U);
    msg.setDestinationEntity(11U);
    msg.maneuver_id.assign("AUZUGSOFAKTJRCECUNVSNPEQXHJQRLLFPVOWPBBDKLHWQUHAASRDDXFHTRQXCJJYYKOYQXTQZHCFEUYWWEKVMIRBDFODVYTGPVYSUEZMJQJEEIDHICVNONMACTECRVYPIXIULYWZUNOIBOGFGGFEZDMBFAJWLBBPCBIMYOKSMS");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 50767U;
    tmp_msg_0.lat = 0.834220618849;
    tmp_msg_0.lon = 0.484592868197;
    tmp_msg_0.z = 0.684997397341;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.speed = 0.351797106295;
    tmp_msg_0.speed_units = 155U;
    tmp_msg_0.duration = 61389U;
    tmp_msg_0.radius = 0.875911023856;
    tmp_msg_0.flags = 184U;
    tmp_msg_0.custom.assign("VJKMZUSNMRJUQIIFYTVOLYPABIGGILQFUOZXLFKSPSEPYDDYNXXVJGQJIOZTSOHWRPMLTBEGQHDXVVOZYKJWYRVHZXEHHNBMYIRKGFNCYCGBUSTKJCTXPOZSNOTDNKQBDPFJBLRNWPFPDWAZLSBIQFZXALBAQHVOV");
    msg.data.set(tmp_msg_0);
    IMC::SmsRx tmp_msg_1;
    tmp_msg_1.source.assign("LIGUDGTINBSAUOVHKLMZFDMQZOUDHQEHUJARLRVEZNWBZYRSWVCJXKKTFEOECSWOVWSBSPKXMQDUMUBJYVXJNSXBUPFIRATJQHEZLUAGVKOHHBCYPUNDCMKTXFTIRPDFLMDLKRLEMPJAIIGFWSJVATIJNMRJDHBLOSBFXCLQECSWNGAFAGPYHBTGONTWD");
    const char tmp_tmp_msg_1_0[] = {-48, -50, -63, 21, -55, 118, -128, 29, 10, -114, 66, 14, 92, 104, -80, 70, -86, -124, -11, -118, -46, 58, 76, 73, 63, -15, -26, 96, -122, -12, -100, -32, 32, -55, -2, -61, 12, -67, -92, 62, -81, 58, 15, 60, -55, -40, -32, 9, 7, 79, -75, -114, -56, 18, 116, -27, -43, 74, -15, 84, 102, -18, 44, 88, 17, -110, 42, -62, -57, -10, -104, -4, -107, -97, -22, 83, 55, -76, -77, -30, -66, 60, -48, 54, 30, -5, 9, -102, 108, 63, 114, -82, -65, -111, -100, -71, 15, 15, -99, -6, -102, 26, 120, -12, 45, -81, -106, 107, 62, -5, -37, 116, -25, 115, -23, -1, -126, 98, -42, -118, -100, 103, 97, -61, -79, -29, 41, 38, 55, 58, 72, 94, -89, -66, -109, -58, 17};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.329171866313);
    msg.setSource(59456U);
    msg.setSourceEntity(81U);
    msg.setDestination(39166U);
    msg.setDestinationEntity(160U);
    msg.source_man.assign("TEYDWVAODZBPPBAUORYAIGCBRRARDATFZQUWKBNIRBXHGJAGJWHFHKZMBJLCOLDLPYWEOXZTXDWGJLMJVHONFDG");
    msg.dest_man.assign("FPVWVFKUJDHCAKSTOGRRNFYJOBXPEEEELWWGMXBAITGSGCHICUULCI");
    msg.conditions.assign("DVGICXPUBFDOPJCQTZS");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 217U;
    tmp_msg_0.tas2acc_pgain = 0.895174544206;
    tmp_msg_0.bank2p_pgain = 0.858489200867;
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
    msg.setTimeStamp(0.847098994865);
    msg.setSource(51562U);
    msg.setSourceEntity(110U);
    msg.setDestination(2855U);
    msg.setDestinationEntity(104U);
    msg.source_man.assign("BYUNXRIALKILYAJGNJOWHLNRZTSOSJPHDLNAXVZVVRSYMZEKIEPCFWBQNGRDFBUQDQJYDBIKTCROSXUVXBBNLXRMQK");
    msg.dest_man.assign("XMPEUOGCQUBAQSQPHODHLOBSFKWJMKEQZYSZUUPTZQCEAMDUTEHTDILYOYGFFBFNWBNJLLMNNDXFRGKYOTPBWINXCOXYHWYOKVVEKNSPHUJEHUYIUIABRGMLXSOIGQWGPDRDGKRPTXETVBZAZKIWYQXJJVKCZLNRXTFFHPQIDCJRVGHWRFCFEBSVJJIRSJMOPBSCQVVMMGGXNAANWZH");
    msg.conditions.assign("VOIQTZWENTUVCEGFOVYFCNBQOLIDTREKDGKQSXXUJLFDERUSDZRTBKGUOFVLFQMAXW");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3212258604U;
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
    msg.setTimeStamp(0.866751259268);
    msg.setSource(10270U);
    msg.setSourceEntity(210U);
    msg.setDestination(34069U);
    msg.setDestinationEntity(56U);
    msg.source_man.assign("AHVUZNNOWMIXLSMBTRMANDUTEFTXIGJCLPGUGBCNUNFLEVSQIAAFXUIVLQNIJLKWMRBTDRBSARDJHDRRSNFQJJOWBWBHKFPKITPKVESLSPCPAZXCPKEQZGVBZYMKOGEGPVITHSUYOPRSKGJYMITPOFMYTNOWCWWJZCLQYDZOXDJQTXDCYHXENQEFTCPBHZXVHKQJVFZHFXUGIDLRQYCGSMREUHV");
    msg.dest_man.assign("IPLYEJBTUZTITYZSPKDHVTWLAOKWBZUNNRXGTJDAOCAISHDLSEMZVYXKCHCUOTQNQNWZVDWGFBILDZWWUHQWEUHXVOFFFUDGMWPQRHAXGEEFHVGDHANIVOLUFSLBNBMOIJINZRDALDKKCQDPZRTOSJTCQYAWNMEJKMMBZAKMCFUJGCSQYJEYGRVBNERPYUSBURTIFVSXSXPRVJFBYGIVHCWEALAXQMZENCIMXXOLKPFYPGH");
    msg.conditions.assign("DIWSFLVCNUBHTXPUDJCVFZPTQRWMVOLNESDLAMGKXPFIAAROLYJCRJNHMADQKVNLYTCBWNOYEFGRXRJBARUZKWUPSSDMKDMIAOADTHUQHGNLFEASQOCYICBPAVBKPEXQNDFKCBJFJQXMFURJVYBZXTJJCWVOLGLBJTIEOGWIUBEHYEOUSGIXWVEKPYFRBVSVKNXZUEHC");
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.0326492066841;
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
    msg.setTimeStamp(0.362508196433);
    msg.setSource(41530U);
    msg.setSourceEntity(178U);
    msg.setDestination(58782U);
    msg.setDestinationEntity(91U);
    msg.command = 193U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QXGSQJWSTUOSRMVIVOLJJBWBYJHRFKBLGMWBCCRKJIUDGOZDYLFSDWIGDNPASFKNTZBAWIWVFQYE");
    tmp_msg_0.description.assign("CGKHWZWEEICREOLAUDMAPCBHUMPVKGTMB");
    tmp_msg_0.vnamespace.assign("JTCICNNLQOSKHLZUWOGFSSKGVGXJZCNECJYDBFMAMIQWPPXYTUDWAFFGMRSRWVIELJQGJDYQCHOGKZNIE");
    tmp_msg_0.start_man_id.assign("NVPDLKIIWHCQLWPYRFEBWEIXJGWWNBEDZIK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BBCQPAIZNCGSVKDPKHIDTEJLYSFRNZYRKYNBFTHYHJKJPMAUBLASNGWFJFEZZWVLKEYVTTNNXBRPUISALZPXWQMBDFKCHMCYLIHQGUTOFTYFGXVRCEVM");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 40998U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.367448685066;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.155597099661;
    tmp_tmp_tmp_msg_0_0_0.z = 0.973095136929;
    tmp_tmp_tmp_msg_0_0_0.z_units = 91U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.800942707593;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.023469330673;
    tmp_tmp_tmp_msg_0_0_0.duration = 18314U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.9473115492;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 218U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.0196461463365;
    tmp_tmp_tmp_msg_0_0_0.direction = 11U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MZDVPHFPPJQFNBBIXTLFOITMZAWL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FollowSystem tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.system = 18074U;
    tmp_tmp_tmp_msg_0_0_1.duration = 24052U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.77750178604;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 75U;
    tmp_tmp_tmp_msg_0_0_1.x = 0.261375903898;
    tmp_tmp_tmp_msg_0_0_1.y = 0.566248260607;
    tmp_tmp_tmp_msg_0_0_1.z = 0.295205354193;
    tmp_tmp_tmp_msg_0_0_1.z_units = 84U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::DesiredLinearState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.x = 0.958987775812;
    tmp_tmp_tmp_msg_0_0_2.y = 0.0804533641423;
    tmp_tmp_tmp_msg_0_0_2.z = 0.926227163124;
    tmp_tmp_tmp_msg_0_0_2.vx = 0.79371108853;
    tmp_tmp_tmp_msg_0_0_2.vy = 0.268735787259;
    tmp_tmp_tmp_msg_0_0_2.vz = 0.78748684085;
    tmp_tmp_tmp_msg_0_0_2.ax = 0.834071750642;
    tmp_tmp_tmp_msg_0_0_2.ay = 0.171616404694;
    tmp_tmp_tmp_msg_0_0_2.az = 0.453258677795;
    tmp_tmp_tmp_msg_0_0_2.flags = 5596U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::SmsTx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 1387369232U;
    tmp_tmp_msg_0_1.destination.assign("YVWVUEMXDIAIZOWFAVTIJFRBPORWHUNGAQOQPRLNJCFCYPISANJEVMYSVUOOGCHDWUTMQIDESIEGKZMRZJJEZRGULAYFDBZKVWPSGLLBIXJFGXQXRXBSHTALEWWBNGWQOSTGZSIKWKKBYQYMMZXXSMFAMLEINCFVTNCMUNZEOBHMRPPSTDZYKVWTFUHCLQHORRQKDFKXODZHGJTULUBRVFX");
    tmp_tmp_msg_0_1.timeout = 14656U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-49, -112, -117, 48, 43, 110, -111, 118, 92, 23, 33, -77, 3, -79, -91, -65, 72, -97, -76, -84, -28, 64, 25, 37, 86, 100, -64, -81, 47, 30, -20, 26, 51, -45, -17, 37, -65, 33, -20, -77, 118, -96, -72, -117, -74, -49, -105, 60, 88, -29, 95, 100, 72, 111, -98, 69, 107, 126, -82, -114, -25, 1, 110, 47, -37, -57, 112, -62, 45, 14, 27, 17, 91, -62, -41, -61, 59, -7, -127, -13, 63, 30, 29, -47, -73, -100, 46, 83, -29, 27, 15, 47, -116, -21, 71, -122, 14, 28, -82, 115, 43, 4, -117, -11, -91, 36, -80, -55, 14, 120, -5, -52, 86, -123, 113, 11, -124, -85, 104, -101, 85, -76, 52, 12, 104, -10, -67, -32, -14, 0, -79, -74, -105, -81, 49, -120, 59, -77, -127, 34, -13, 121, 113, 91, -52, -86, 112, -88, -81, 118, -80};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Rpm tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 21302;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.728791260921);
    msg.setSource(12377U);
    msg.setSourceEntity(165U);
    msg.setDestination(1422U);
    msg.setDestinationEntity(222U);
    msg.command = 14U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LBWJUOWRCRF");
    tmp_msg_0.description.assign("ZLZXYUHJGRKCPEFANACUUKXDXJUWQPBVJJYMUEPGIWNGAUMDZBFNSMYTALQIBPCLWVVMHCRFCFYISZBYUDSFYGNNR");
    tmp_msg_0.vnamespace.assign("EJIBHXMSROCWQTKFHWPEGSB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AKURQSXFMJLFSR");
    tmp_tmp_msg_0_0.value.assign("TFUXDFWYNMOLOPPNVRURDVUOEJAXMJAYFRJRSOZTVLOMNQBIJESCUZYHTGWKZNHHGKVMOIDNKIKXEZPVGNPUXDPORQAKSGGY");
    tmp_tmp_msg_0_0.type = 236U;
    tmp_tmp_msg_0_0.access = 28U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YBVAVHRKJKELJLTMMOULZEYINFTDQOIQWHOHMFGSRFIQXOEDDTYYPTQKECNBUWMPCKNAPPU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("IXQESLNTCZY");
    IMC::Dislodge tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 35703U;
    tmp_tmp_tmp_msg_0_1_0.rpm = 0.443541059407;
    tmp_tmp_tmp_msg_0_1_0.direction = 219U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CMMUJCOUQSGJJWDIIAZAOPEMEDBPZCSDBJFOTLFSSABNVHKTIGWKUOVSWKRFCTWNEDILESBVNXAXHDJSPOFUGJHRGLFCYOQBPVYMGXWUPUBLCLVNZFUYQTXCIHTTFMABRFEPXLXVCVNXAYKAW");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LoggingControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 162U;
    tmp_tmp_tmp_msg_0_1_1.name.assign("VYJXPXZSLJKHIQXRUHCNBEJKUYLGNOSFITSWRPVHDWLAMUDIHLEXFZHMZSUTMUBXGVXRNNIWKIJDUKJYLPOOBKHTSGYTQGPDAXZFRVNDCAWMLCTBMRSNQNZBOEBAYWACPUDFTYFLTNRENXMAMWKUCGIFGFO");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::MagneticField tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.623827480222;
    tmp_tmp_msg_0_2.x = 0.828835270314;
    tmp_tmp_msg_0_2.y = 0.492564471487;
    tmp_tmp_msg_0_2.z = 0.103183739463;
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
    msg.setTimeStamp(0.230493716503);
    msg.setSource(19698U);
    msg.setSourceEntity(55U);
    msg.setDestination(53728U);
    msg.setDestinationEntity(202U);
    msg.command = 38U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MJHBNHKAHMZTGVZYFWGSFDHGNUQENFYFHROQREWAJOZQVRPJQOVVYPCEAJCHJFDDAZLWGLUABCMIQCMIFLDNXUJZURMSLUKUOONXWQEZIKEYEXDPVVCYOMHAZWSJTYTSODRKSCWIZFIGDXXDIISOBAORYUXUXCAVIZK");
    tmp_msg_0.description.assign("DEXCYBKLQWNRQCJXSWZUYGOLYZQMCHHBSMHSNAFFRHLMHGPFIVNUGLTPKXRJPFABLDCDOGJTNWVAMGSOMACIEFOQOZHJDEHNJQUBKCCZKXAAPAWDIORIURWYYUBDYBKKZJPEPEKVTMEYZTNYURIIQTYFWERNMHTURUEDXCIVXLAIPEWQXVWLBKNAFFGGLJGFJZROTQGMPPSOGBDCSTDXRUOAVQVVTWSSODXEQUBLVMWZTXIJLNHB");
    tmp_msg_0.vnamespace.assign("MWXUKVTYCUBJZSPSBONHTNYZBKFTZQGWIGYJZSQNXJLGTTSTHRIROISVEDW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RCDBXAKSFGTDAUCMKPQUMDFZIZEVYTALQPYMSIQLHWTLNACPCFBOEOBVOQROENFPDGWMFRDDGUOHOUWAIHHKEJDKRNQCXFYDCEIWHJGCCXIBZYORPAGSFTQWKFXNLSHVZGZXZBJEYKXBDUKTLSEGZVHGIVVIZDSCPXZPUQ");
    tmp_tmp_msg_0_0.value.assign("YDZXUNXDYBPVVYSEZMRKZOSHKXLYZDQGIV");
    tmp_tmp_msg_0_0.type = 229U;
    tmp_tmp_msg_0_0.access = 12U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OXEVUIEDSVUSLSNPFYKVISGYUNDMJCNMAVRLWPVSLLKXUYTECGDXSPJGFBFBUTAGCNGOLLEBFDXAOTXRCKVLQIPEHZJUTMKAEFUNRUXLHZVHQOJZKJBEHRTZYZOTAHGDIGOQHMLAYYAMXBFPBBJRHDVOZWMBMQFMWCIQKHNSPSJWGHEYPMUNSFOARJXDCDAUDCOWBYGVPHRZTCPKRILENK");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ALMMTUIUFGCIXIIHTZISVWNYATOKCDNKJWPJSUTRDFQQWVSGOOIRYYNXNPTHWATBYLBDBRMFEHVZBZSEKIBHETGBMSZZRBSGAJSAIEUDOZXVPYOTQEYLUEJGOLK");
    IMC::Launch tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 24431U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.919508938808;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.319238486871;
    tmp_tmp_tmp_msg_0_1_0.z = 0.914701539311;
    tmp_tmp_tmp_msg_0_1_0.z_units = 156U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.609575991686;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 116U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("PSUXAQICPDJHHXRNIZYRYJDDJBPMZYZPMEHTZODSKEDWIVIWCVROVGKDWUNFAXIKUKWNFEOALVKTHKRBEPXOWFPGCIBEGOXNSQSRBSHJTYAZJLGUTQZCLACVDRNGWQFCYOABHOLZFWYAEXBLWHDYKRMDALHJTQEQNQSOMZVNXKCVHSJTPDMYSNRTQOLUNYREPYXHXCRLCQIWWGJGOFBSCZILMMJMLGPUAAZIMNB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Temperature tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.522966526994;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::UamTxFrame tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 7829U;
    tmp_tmp_msg_0_2.sys_dst.assign("OZUBVLYXEKVJLHWSFUZATFWSVZOOK");
    tmp_tmp_msg_0_2.flags = 126U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {15, 108, -82, -1, 65, -102, -73, 116, 68, -31, 20, -84, 110, -81, -110, 21, 88, -4, 108, -101, 119, 79, 83, -56, -120, -11, -119, -99, -5, -24, -11, 110, 46, 118, -115, -33, 63, -100, -20, -72, -85, 8, -87, -112, 102, 66, -112, -1, -58, -91, -105, -14, -30, 88, -42, 7, 99, -47, 67, 71, 66, 53, 50, 68, 43, 56, 92, -107, 69, 106, 96, -23, 39, 37};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
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
    msg.setTimeStamp(0.547960455264);
    msg.setSource(36873U);
    msg.setSourceEntity(7U);
    msg.setDestination(41965U);
    msg.setDestinationEntity(100U);
    msg.state = 244U;
    msg.plan_id.assign("SYIEZXJXKGNIMPKXXWZVHFQFJNCTWBWBQLGNDEZTVPRYOJIJKALGUYVVYRTQHAEREMBRRTGBRGVULCJSJXOFFDTDYSSASDMIEOHNPUYWUFMWXWMZOFDKCDNYQIHPTSKFDVTGBCBKJXLQWQPHDQUAQOAYLPANHZGBTTVHMPOAPXRAEOIVBEQNHTDDXLHOELSALZAFKYMJUOUPECIMCVLIWKGXSMZONCU");
    msg.comm_level = 65U;

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
    msg.setTimeStamp(0.17150174974);
    msg.setSource(2262U);
    msg.setSourceEntity(236U);
    msg.setDestination(64741U);
    msg.setDestinationEntity(117U);
    msg.state = 211U;
    msg.plan_id.assign("JFCBVLOZUJVGAHIKHDPYRSDYUXVCNHRIFEVAWSYKRUBIHUTAHSMUCHESMIMOHVFKNRVGADEWVMTHDMYGLANLQJRWTBXZF");
    msg.comm_level = 50U;

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
    msg.setTimeStamp(0.505276204158);
    msg.setSource(37029U);
    msg.setSourceEntity(12U);
    msg.setDestination(36955U);
    msg.setDestinationEntity(99U);
    msg.state = 85U;
    msg.plan_id.assign("JKPNYDXGFGDDVPNJKXVFCJTOMEBGFLYWFDHSOWECOTURWTXAKLQSJSQDCULPMEQ");
    msg.comm_level = 24U;

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
    msg.setTimeStamp(0.262188568761);
    msg.setSource(42171U);
    msg.setSourceEntity(64U);
    msg.setDestination(35316U);
    msg.setDestinationEntity(75U);
    msg.type = 9U;
    msg.op = 238U;
    msg.request_id = 28439U;
    msg.plan_id.assign("MAWLYZQWMTEGYFKQUPFEFKWPFRQVULCDVEYTVGMYCSBJFFNPQZCKLZAZJGDOOJGNHDXIHLXEXUMLKXAWEDCOAJTNPMIMKXGOYJCAKWYZTEHUKESGIHPWJQRLVSLUBRNTPBRUKMFAYBIGHOMRQBMISPZAWUNDJVTZRNJKQHNFHHJAOTNQYXRIGVRERTGIXCDDDFBIUWBZ");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 58U;
    tmp_msg_0.value = 0.566876625976;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AZLYENHRXBKWGXSKFYAFKWQZCRTOQFNUYLWHVROGTYKLFJSDVLHPRPQIGSWWMPSGYJUVZAIQUNMRZHNRYXSJVMENCXT");

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
    msg.setTimeStamp(0.733913044498);
    msg.setSource(38408U);
    msg.setSourceEntity(246U);
    msg.setDestination(7314U);
    msg.setDestinationEntity(179U);
    msg.type = 71U;
    msg.op = 85U;
    msg.request_id = 21933U;
    msg.plan_id.assign("CCXMTUPURGUBNMQMECDHNFLSXJJELZDDHPLABWCFBGKVUN");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 169U;
    tmp_msg_0.lat = 0.155736672203;
    tmp_msg_0.lon = 0.829031767758;
    tmp_msg_0.z = 0.545504803358;
    tmp_msg_0.z_units = 247U;
    tmp_msg_0.speed = 0.000846108660154;
    tmp_msg_0.speed_units = 29U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.363938295673;
    tmp_tmp_msg_0_0.y = 0.971343061506;
    tmp_tmp_msg_0_0.z = 0.0964869366868;
    tmp_tmp_msg_0_0.t = 0.264601958632;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("LGNAZXQKUCLOHLRNHQGJIEAWHDTUOGYOPSY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RGHYTQAVLYEEQPRKXNVGIOLIKPQNOWBMRNGJUKRBTFXACEAQBCHUAHTLJLCBHXMNTOUQZHVJUOV");

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
    msg.setTimeStamp(0.267330438531);
    msg.setSource(53486U);
    msg.setSourceEntity(124U);
    msg.setDestination(24945U);
    msg.setDestinationEntity(222U);
    msg.type = 103U;
    msg.op = 184U;
    msg.request_id = 15745U;
    msg.plan_id.assign("WTZPYLOHEYEHYRBLWNRFIGUAUJ");
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("UQYTJUUVUHABHCWBWDMTMQFYIPZLYQKGAOPCJRZMEBGMHILVWNJNKDKTHXNZIYAGFMZORHRJDSYROBNFHLZFKXVADVGMXRKGFAQPNCKYJANT");
    const char tmp_tmp_msg_0_0[] = {117, -114, 63, 8, 17, -47, -103, 88, -47, -73, -27, -106, -48, -103, -15, -45, 59, -46, 34, 62, -23, -127, -112, 11, 39, -58, 104, -32, 57, 19, 65, 120, 87, -50, 19, 31, 38, -126, 40, 92, -107, 111, 117, 121, -27, -127, -23, -27, 66, 83, -93, -9, 32, -24, -10, -5, -50, 79, 118, -33, 18, -108, -19, -32, -11, -19, 98, 108, -46, -16, -78, -8, 12, 115, -107, -10, 116, 22, -96, 53, -95, -86, 96, -101, 70, -93, -68, 111, 81, 33, 41, 94, -47, 86, 62, -77, 110, -29, -124, -51, -41, 72, -85, -75, -125, 52, -78, -54};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DINGGYSNIXPZBRNIPONXKYMEIAQQFEQDORAZJGRCVVKAYOCYSJEUWWLFFLSIZXJYUHHQ");

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
    msg.setTimeStamp(0.4275285862);
    msg.setSource(8096U);
    msg.setSourceEntity(125U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(32U);
    msg.plan_count = 47580U;
    msg.plan_size = 148192548U;
    msg.change_time = 0.10617157905;
    msg.change_sid = 30389U;
    msg.change_sname.assign("QGNCOLKVUKDLOGOVAJAVRDRVJVOISZFCZNIXOCRSFWZEXNHRPENPAQMWRXSTAKZBOURJQMOBJMHZLMKTUPMVTIETLFNOEFDEAMNPWWSFQNBDNAHPQQJIZCVSYEPIBUSGJCKR");
    const char tmp_msg_0[] = {-97, 124, -84, -57, -17, -67, 41, 81, -9, -51, -66, -126, 44, -29, 37, -97, 32, -3, 23, 121, 52, -22, 120, 33, 116, -80, -124, 91, -95, -107, -109, 106, 107, -78, -105, 107, 89, 35, -42, 62, -64, 43, 108, -101, 27, -80, 116, 67, -42, 50, 70, -17, 78, -56, -36, -107, -23, -119, -85, 110, 87, -21, 95, 43, 75, 69, -12, 101, 28, -40, 3, -51, -20, 56, 115, 19, -123, -23, -111, -94, 28, 53, 62, 22, 84, 85, 81, 22, 54, 9, 23, -106, 96, 2, -15, -21, 88, 110, 122, 44, 14, -6, -59, 64, -15, -52, -119, -117, -76, 80, 82, -56, -59, 91, -101, 63, -83, 34, 42, 77, -9, -15, 85, 86, -21, 45, -50, 23, -20, -26, 79, -116, 53, -3, -36, 65, -79, 58, -119, 45, -105, -76, 84, 119, 105, -55, -119, 9, 44, -106, 23, 92, -70, -37, -87, 105, 105, -113, -20, 75, -24, -82, 18, -95, 5, 6, 8, 111, 56, 62, 95, -74, -16, 0, -93, 37, 7, 88};
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
    msg.setTimeStamp(0.929582568258);
    msg.setSource(38256U);
    msg.setSourceEntity(42U);
    msg.setDestination(1271U);
    msg.setDestinationEntity(187U);
    msg.plan_count = 50955U;
    msg.plan_size = 3386909479U;
    msg.change_time = 0.343363143279;
    msg.change_sid = 55470U;
    msg.change_sname.assign("IMJGBBQIJYFEOZQLKS");
    const char tmp_msg_0[] = {50, 57, -28, -102, 62, -62, 110, -128, -24, 70, -22, -87, -114, 66, -86, 59, 46, 96, -89, -9, 10, 57, 110, -2, -80, -102, -24, 32, 99, -116, 24, -49, -9, 3, 37, 32, -49, 96, -40, 90, -47, 73, 7, 72, 30, -44, 118, 106, -8, 22, -92, 77, -49, 23, -39, 59, 5, 50, 103, -19, 2, 61, 92, -7, 120, 19, -70, 76, -38, -101, -92, 94, -29, 67, 87, 83, 37, 61, 49, -8, 87, -55, -85, -122, 65, -24, -74, 72, 34, 55, 18, 112, -10, 56, -92, 75, 126, -82, 125, 39, -66, 64, 44, -111, -67, -110, -93, 22, 78, 37, 9, 2, -97, 29, -66, -98, 1, -117, 28, -117, 54, -25, -120, 31, -84, 86, 111, 44, 23, 37, -62, -81, 77, -90, 26, 42, 3, 72, 104, -36, -83, 93, 95, 118, -81, 56, 95, -36, -127, 97, 38, -87, 22, 113, -22, 56, 100, 77, -7, 41, -84, 42, 24, -93, 60, 52, -48, -88, -61, -120, -52, -40, -45, 13, -97, 26, 29, -6, 113, 26, 117, 104, -24, 120, -97, -9, -92, 53, 90, 48, 27, 20, -90, 23, -48, -62, -112, 51, 63, 2};
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
    msg.setTimeStamp(0.404797860369);
    msg.setSource(60995U);
    msg.setSourceEntity(237U);
    msg.setDestination(25288U);
    msg.setDestinationEntity(142U);
    msg.plan_count = 38326U;
    msg.plan_size = 1779291311U;
    msg.change_time = 0.0779666937401;
    msg.change_sid = 22653U;
    msg.change_sname.assign("PDQTODBVSAGUPNURAYIBWXQGOBGSGHERZNITVYQDATVEEJSMNJRPCKEIWOPWKMKXRJGMYTYINMDEOKOBZJXZHWYTSBFLIVLEBUEEJXDTBZRNHFSOPQZZYFCSYMTMAGHKCTOKZJ");
    const char tmp_msg_0[] = {-40, -124, -6, 116, 35, 26, -55, -102, 3, 108, -91, 62, 91, -110, -40, 69, -127, -80, 65, -44};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WSNAUTCUKMQGIJMMHGZVCQQYYFGHRZIFSUCDBRXCLLLJKEEKYZINLFGQBRRONIPWOUMKNXIMPTSXAQAOFHKPKJSTQDOGZVCKGVRVWZOJSFODTKAXUFCAQAWLQBC");
    tmp_msg_1.plan_size = 64934U;
    tmp_msg_1.change_time = 0.62768561226;
    tmp_msg_1.change_sid = 502U;
    tmp_msg_1.change_sname.assign("BRUSKHXPMFKLCYDJKOQQMXNCDPTOZXATGWVMAFHVSTOMLGUZBTIXEUKESADEROZUMSQMUAETIJNYWSHOXRCLNHSBCYSEAZBOINSTZWHUTYIJRKBWJEKMIFVNREPMOBKWDETVNAAMZAYWWXYFPREBXRJQQVHCPQDPFQLOVNXGVDLGSILPQBRWNGIRHJNFYGGRHHPSJZKGZXLDUYLQDJCYLDYMJBCAPCHDIO");
    const char tmp_tmp_msg_1_0[] = {-49, 25, -99, -98, -22, 16, -101, -112, -45, 103, 48, -68, 88, -47, 107, 57, -122, -79, -78, -12, 17, -87, 29, 121, 73, 81, -103, -34, -93, -63, 59, -67, 109, 10, -45, -89, -104, -80, -13, -23, -51, -56, -110, -48, 122, 32, 40, 92, -71, 52, -105, 11, 84, 75, -27, -105, 37, -36, -110, -77, -12, 28, 115, 54, 87, -4, 39, -62, -29, 108, -110, 15, 26, -74, 21, -97, 63, 11, -48, 87, 76, -120, 99, 3, -74, -24, 97, -117, -55, -29, -66, -81, -75, -101, -57, 40, 64, 37, -86, -47, -2, -86, -81, 13, -82, -13, -87, 78, -15, -85, -91, -49, -42, 100, -41, -22, -9, 47, -83, -35, 90, 28, -41, 8, 27, 113, -103, 1, 67, -84, 30, -122, 108, 57, -93, 47, -63, 55, -65, 51, 6, -72, 122, -89, 0, -12, -81, 63, 117, 34, -50, -51, 45, 66, 92, -94, 100, 123, 50, 90, 65, -18, 84, 89, 73, 46, -61, 32, 49, -4, 9, 117, -20, -18, 64, 113, 0, -104, -108, -78, -48, -18, -74, 45, 47, 84, -78, 93, 52, 50, 91, 28, -7, -125, -78, 0, 91, 116, -99, -119, 93, -36, -81, 43, 75, 120, -103, -11, -29};
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
    msg.setTimeStamp(0.252990638001);
    msg.setSource(2417U);
    msg.setSourceEntity(71U);
    msg.setDestination(28948U);
    msg.setDestinationEntity(171U);
    msg.plan_id.assign("PTFBMJQWPOKCBDKVEJKDXNPSRWVPECNLFGURQNRTWUPDKXEROJIVZIDHFJIGFRYUNRTYCTNWCHVITDKFBLXZXYUWISEZZHHENMPRQBYFXHKIAMFSEA");
    msg.plan_size = 31069U;
    msg.change_time = 0.412339937386;
    msg.change_sid = 2664U;
    msg.change_sname.assign("WGOTXZKFRZJSNFCNYGUKFAXWQUKZMXYHXARGERWQIZAPGCQNTCBMQYEQOLVRQGBDANVIBXLGEBVASULEMTYOIDCWBKJGDADLWCDVPMQKHTKOYASRJNXCFZUTOPCVTECGDVQFPEJLJGSTPTMNHSEOUARNUYLABWBHXSGUEZKRTMHZDHWZOXONSYSWBDZFNAVKPFILE");
    const char tmp_msg_0[] = {-113, -81, 108, -99, -114, 14, 104, 40, -108, 124, 29, -110, -36, -53, 65, -74, 44, -54, -8, -55, -123, -14, -72, -29, -77, -119, -23, 90, 31, 79, -121, 69, -27, 80, -128, 120, -106, 2, -55, 33, -28, 98, 99, 68, -126, 25, -101, -10, -24, 74, -127, -46, 41, -4, -45, -6, -54, 58, -45, 31, -27, -3, -36, 70, 109, -55, 24, -34, 14, -86, -95, 104, 19, -41, -71, -110, -57, -118, -80, 49, 117, -116, 74, -117, 52, -66, -96, 118, 102, -79, -72, 63, 34, 15, 109, 37, -41, 99, 14, 5, 92, 108, 30, -36, 85, 79, 65, 95, 18, 55, -61, -125, -38, 23, 84, -3, -128, 57, 96, 119, -14, 10, -54, -41, 104, -21, 88, -94, -17, 123, 41, -73, 76, -48, 74, -61, 121, -36, -14, 123, -110, -20, -68, -57, 39, 78, 29, 55, -85, 79, -48, 108, 92, 47, -42, -34, 29, 36, -21, -18, -46, -92, 87, 124, -121, 55, -106, -61, 76, 27, 0, 62, 109, 44, -113, -106, 104, 63, 69, 17, 14, 16, 78, 39, 52, 17, 50, -62, -27, -122, 117, -10, -11, 55, -4, 116, -15, -84, -73, -71, -25, 87, -77, 53, 52, -12, -94, 47, 43, -124, -109, 104, -49, 82, -82, 116, -124, -99, 120, -120, 93, -109, 121, -88, -51, -79, -74, 105, 117, 93, -77, 77, -110};
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
    msg.setTimeStamp(0.0775180730567);
    msg.setSource(14022U);
    msg.setSourceEntity(35U);
    msg.setDestination(55187U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("TEFCWNNJILLUJWGVMZUQKHHCGUZOFBVGKXNIOABVGSDSLTGHUHLURZZHNDNTEWGIBWQGDZLUJQRYIJBASYARKIMLYUXYMIJCCFHDCYZDSPBMQOKXMJCOJBNTALPMIHKETDRUDKECADYWSQEZXLRUPVTBNBJREEKGHWQQECEPFQBNXWGMTPGSZAFID");
    msg.plan_size = 43020U;
    msg.change_time = 0.194623681884;
    msg.change_sid = 18617U;
    msg.change_sname.assign("VPLJICRNMZSKGZXYHWEMOXZTYTNBNGWITJMRDFWBVYGPRZTX");
    const char tmp_msg_0[] = {-21, -9, -101, 90, 64, 3, 54, 49, -88, 35, 17, 55, 120, 97, -29, -128, -83, 120, -25, 74, -76, -52, 47, -125, 87, -75, 14, -94, -20, -64, -72, 48, 69, -84, 100, -93, 71, -30, 36, 3, 59, 112, 79, 25, 60, -14, -118, 126, -13, -49, -115, 75, -1, -72, -110, 42, -34, 13, -78, 45, 108, -8, -31, -59, 113, -106, 25, -39, -102, -112, -112, 105, -41, 97, 114, 79, 12, -107, -55, -50, -40, -51, 95, -10, -9, 80, -76, -104, -1, 8, -46, -11, 67, 9, 18, -9, 36, -76, -55, 49, -52, -125, 30, -34, 13, -85, 80, 60, 59, 19, 112, -111, 87, -88, -109, -13, -81, -32, -17, 77, -113, -22, -32, 123, 53, -86, 125, -44, 45};
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
    msg.setTimeStamp(0.779749346385);
    msg.setSource(37406U);
    msg.setSourceEntity(22U);
    msg.setDestination(31021U);
    msg.setDestinationEntity(3U);
    msg.plan_id.assign("DGHVQGVAEHXTLCNPWXNBNYROPHTHKGAIMJNJPJLXCEIJ");
    msg.plan_size = 15448U;
    msg.change_time = 0.733429384488;
    msg.change_sid = 60279U;
    msg.change_sname.assign("BUEMMMQOQCEJFZVFHPDIZOYOSONNGKBGDDVRCYVI");
    const char tmp_msg_0[] = {-42, -70, -98, 85, -44, -93, 1, 86, -108, -106, 55, -67, -99, -125, -71, -20, -29, -77, 101, 54, 75, 126, 18, -50, -54, 66, -87, -107, -23, -92, -66, 77, -13, -48, -93, 90, 86, -118, 31, -42, 42, 21, -109, 75, -61, 17, 30, -75, 118, 69, 56, 2, -95, 54, -29, 88, 83, -33, -110, 73, 49, 8, -53, 54, 44, 110, -14, -107, 32, -35, -11, -96, 64, -8, -106, -84, 54, -109, 109, -98, 38, 69, 95, 76, 111, -82, -120, 105, 103, 39, -91, -91, -108, -76, -53, -112, 114, -11, 75, -93, -65, 83, -4, -4, 65, 117, -13, -19, 66, -78, 19, -50, -43, -15, 118, -46, -93, -47, -97, -49, 109, -118, -69, 41, -110, 52, 6, 122, -8, 90, -124, 21, 4, 108, -120, -43, -4, 93, -113, 84, -80, -128, 97, -114, 120, -27, -66, 22, 70, 101, -103, -118, -48, -18, 22, -23, -103, 104, 33, -26, -29, -70, 21, -10, 19, 68, -26, -77, -115, 15, -86, 27, 96, 81, 61, 123, 64, -73, 38, 89, -68, -17, -62, -125, 86, 109, 44, -51, 20, -42, -2, -4, -23, -30, 66, 105, -70, -4, -11, 91, -94, 79, -28};
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
    msg.setTimeStamp(0.0338818004794);
    msg.setSource(32389U);
    msg.setSourceEntity(122U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(42U);
    msg.type = 226U;
    msg.op = 132U;
    msg.request_id = 27289U;
    msg.plan_id.assign("YBRKMRHWFNSGXBFUTYIOPFKKOENRM");
    msg.flags = 12676U;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 11436U;
    tmp_msg_0.status = 122U;
    tmp_msg_0.text.assign("EFPZJXGLHRSJWRWNUEPCVAIODIYHNBGINDKYNWEFTKSIUCQLOHDTVQKALAGMFAUMHERMBYSJPOQJIKMBSWMDLRICANZYNCNPQEMOSAXQVQVRWRMDBOUYFMXTPPNBWDQVUUCKQTTXDKBUPXUEGHXOKDCYEZXQWKOYFPXZWJAFE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GJYJVZRPPJXZRLGBJHAMZFNYYGYBJHRFSIEADQMNTVNTPIWWETHMWEZRVGQHXUUFKLLQNXKQLUJEASNACQQCIGYIUODJTRCMCXEEMZPNQHSHWTYVNIKHHVBXBTDVOBSULAKIUQDHNWFXPKSGBKBRCKJIEVTSFIVNXNFDLISFKESPZMXMBWMFYOOPTUEDCLVQORFVRYUYRWYALRCTIBPSDTACJGDZAEOPWK");

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
    msg.setTimeStamp(0.666219305248);
    msg.setSource(26191U);
    msg.setSourceEntity(80U);
    msg.setDestination(5861U);
    msg.setDestinationEntity(155U);
    msg.type = 181U;
    msg.op = 71U;
    msg.request_id = 6259U;
    msg.plan_id.assign("DYKVTVMIZJGUVFXSHHBZWOKOHHULODETREDQGCPOWJZQGILUUJXWNFLUTZBGVNTAJNBVXLQDXIAGWERFICANXPOVEMSRZEMSG");
    msg.flags = 47854U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 55372U;
    tmp_msg_0.lat = 0.0725908021441;
    tmp_msg_0.lon = 0.592947056524;
    tmp_msg_0.z = 0.431981234956;
    tmp_msg_0.z_units = 71U;
    tmp_msg_0.speed = 0.890407477577;
    tmp_msg_0.speed_units = 62U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.912412969888;
    tmp_tmp_msg_0_0.y = 0.992413904257;
    tmp_tmp_msg_0_0.z = 0.117394622214;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("GACUKSFNYJHROWGCUCUDMBWNITICNSMBKJYGUHKRSUWRZQXIPVOFQPROPQSJZCQWSAHGEBOLGSDVFVOBEOCRZCABFADNFMYEYDOLVYPXPSNDJWLHEBWJJBAXBLLNARBSQTLOCUTWEGXIAICREMRQFVHEJSMHRYMJGOWVZHEIHLNEKPVTPNGDGWVK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OYVNJIRFNLIKJSAFASXNEMADNLZZRAHZXJVGUDRTWEQBAOZUQFPSOPRMVNUOGCSATWQUIGGPXRDYNWBYDHMJJBNWWJEYZYFGOSUJHKRBHQVIMDRIPTBTSDCMTHQTOTNFOVAVIBWRIEGAXQEFXLUEOIYAWWEZCLCEKTUBKCECMUFKGYSJZCPPHLUAKYBZDSYXPSVZKPYIQTCPQDFMOMXHHBSTVBLQFG");

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
    msg.setTimeStamp(0.44116641382);
    msg.setSource(61452U);
    msg.setSourceEntity(121U);
    msg.setDestination(48101U);
    msg.setDestinationEntity(126U);
    msg.type = 204U;
    msg.op = 51U;
    msg.request_id = 55797U;
    msg.plan_id.assign("JIQFZHBZKAYURYTWOHJVOLJPDFONNVFBLWSFPZUHPDEKELYWSCOXDZNXBXQEBIJPARUOGTSQIAUDGYIIUMXWYEJVONZCHIMJUFGWKDIXLVNBPKCFQNTMUDTSTLO");
    msg.flags = 57643U;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.336801189954;
    tmp_msg_0.lon = 0.595048232432;
    tmp_msg_0.depth = 0.458259672365;
    tmp_msg_0.roll = 0.861415191547;
    tmp_msg_0.pitch = 0.36137978898;
    tmp_msg_0.yaw = 0.202501556514;
    tmp_msg_0.rcp_time = 0.892479205376;
    tmp_msg_0.sid.assign("MKDUGZYNQFTFEAGXQNJYHSZCSXWHGHRLUFLRVQQLIGFMTSGOPVULFJUMQLPMNACSDUICUVGEEQAEGWVVKIBXSMDBRJZVJNICKKNMXLTYDWWXJVFOIYFTCWNNVWDOJEHIHXADECQCIBYUGMZRODQAYVZPZOFSPWUPBHOROWBRVACJBPZWTMIAPBTBXTSNKFEZRYDCLYEGQESSBQFJLYYSLOKPMZHTRMUUELGOJXKBNJRAWKK");
    tmp_msg_0.s_type = 192U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VKPVKLXGPOYWTJCCVQEOZOILSGOJZMUFAZTBWEXWOKFFKLYIWQSYJCLRVROSTIPZPXYGHSGUCNQDXKEMWBMIWAINLVHUIJCTEZMHRTUQDHMYAOARFQNDAZBSHAMTBCXBOPNFPUKGGEZ");

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
    msg.setTimeStamp(0.367835067048);
    msg.setSource(20975U);
    msg.setSourceEntity(110U);
    msg.setDestination(4875U);
    msg.setDestinationEntity(108U);
    msg.state = 16U;
    msg.plan_id.assign("VASSSMPWXTAJFDGIRWOFTLRMKKYJYESOXRNBYORYBBZMGNCFIZQUJLTGITYDZCCBHMLSCXCQPVUDUEVZEAJPNIDXBTNNVDHFAEC");
    msg.plan_eta = 1655919453;
    msg.plan_progress = 0.297689724299;
    msg.man_id.assign("GBJXCKIHHLYSQLPACLMHSBRHZZKMGRTULAERPKREXHJQMEFWLUGUVLZJHOXGDZJTFSEVNADWLDMCYVBBXWMFZQROPFKFHIOPLAWQJGGNZCDZNPVACYMTRYSTXACYFOAQFCNPNBIQTAZDMXWZTQEEMTBXOFHVVWNRNPUDVE");
    msg.man_type = 37760U;
    msg.man_eta = 597232272;
    msg.last_outcome = 15U;

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
    msg.setTimeStamp(0.76735198224);
    msg.setSource(38641U);
    msg.setSourceEntity(49U);
    msg.setDestination(10351U);
    msg.setDestinationEntity(247U);
    msg.state = 58U;
    msg.plan_id.assign("CYSXCANFADZHDHTKHWQLOAPIIGRBIVSPRAUHJVZSHJYFIUWHEIOBCKICWEHIEQWSOXOBBXTZNXYHVXQREZGIJDGRKZOUGMCMJGML");
    msg.plan_eta = 1513816259;
    msg.plan_progress = 0.980966033842;
    msg.man_id.assign("QIMMULHCWOZAOPONEPJDLMJHZAQUHEYOTFAEAPGKKBQMBDNFTDEJMGNNOXXHJCDQVQWRTKXVXPGALKMJLZLQRERXYVGZSWLOPIIACYGQFQDHYRBCTDSYXGINSBXHRWSCUZNVZTZMCVGHHFRZYWADDPAGGUJUPGMEIIRFUMBZSQ");
    msg.man_type = 49065U;
    msg.man_eta = 47552210;
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
    msg.setTimeStamp(0.632683677577);
    msg.setSource(21630U);
    msg.setSourceEntity(202U);
    msg.setDestination(22917U);
    msg.setDestinationEntity(147U);
    msg.state = 253U;
    msg.plan_id.assign("RPWKFAJTRYTQJSGQVAYXSJXEHHIGUHLWQUNDLPVRYFKYGKGZOSNWSQSIEVGVWXTNTPHKRZQCAXDOWOHCWTERFMHCAARJDPLNVZRNBHJEVWQCUOCCIQGJDUZBBLEMRLIFNMTYFUZVBXPXOWESUAYDXUKXMOPTZAWSYYEJG");
    msg.plan_eta = -1845525186;
    msg.plan_progress = 0.192601417964;
    msg.man_id.assign("JXTQIZCCFNGHEXDASVBHHUPSZNKJESGFVWUFRIHHNNQAKQUDZFJJUPWWGIGMMSCTEYKWEHVIXYHAWKPW");
    msg.man_type = 28521U;
    msg.man_eta = 632230736;
    msg.last_outcome = 14U;

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
    msg.setTimeStamp(0.717460681701);
    msg.setSource(23448U);
    msg.setSourceEntity(236U);
    msg.setDestination(42194U);
    msg.setDestinationEntity(201U);
    msg.name.assign("XHERRQJHYIVMZQXWULFIEMXGSGHSPONJWLMPJHPONSPFPHDUUIDKXSNIFBJIEXFRDNEVFRORZWUSTMOUTJQGQIDRAOVADACIWZBYVWDMCCR");
    msg.value.assign("OUKIREARXSRBQUYIZZWTVBZPGZPKK");
    msg.type = 252U;
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
    msg.setTimeStamp(0.926823769797);
    msg.setSource(23263U);
    msg.setSourceEntity(200U);
    msg.setDestination(5269U);
    msg.setDestinationEntity(160U);
    msg.name.assign("DSCAHFKHBFJGCPDLMBTJAYPYPGMCFZIXTWWERMEUFINDSYFDRRTYZVIULCK");
    msg.value.assign("JVHRZHKJZDAGRVZDTPUTHGLBSMNVIGBTKNPEYESRQSGKNIWQEQKLIRHWDUBMVUEBZFXBWOGOV");
    msg.type = 136U;
    msg.access = 116U;

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
    msg.setTimeStamp(0.0972950719514);
    msg.setSource(47120U);
    msg.setSourceEntity(121U);
    msg.setDestination(58786U);
    msg.setDestinationEntity(156U);
    msg.name.assign("UXUHUHNWLVBVNELCTTJHOMTQGKJRCXMSMYXGKQEJUIHRFUSQOCGKQXEASKDBZNLFIEELRZKNPUBYFYPDOQMSMBCWMXFRNJJYTCPQZJDOSXHLCGXLPMINVGAFCEYGVAZF");
    msg.value.assign("LBRPLBHUWMZTGNIOYXIZXXGIZMYQQEGKJCPMZJYKXQMVMUUVFVNATMPBKCRJUBMEIZWMGXFTWSNASDEQWQNCKLNCYNAZDXKPNFCVORDFTRSZRJULSLHBZUVUNGYPOEVTBCSEJOGIIQSBQJCOIWSRMCAAUX");
    msg.type = 153U;
    msg.access = 220U;

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
    msg.setTimeStamp(0.358215169638);
    msg.setSource(26644U);
    msg.setSourceEntity(148U);
    msg.setDestination(32971U);
    msg.setDestinationEntity(239U);
    msg.cmd = 168U;
    msg.op = 84U;
    msg.plan_id.assign("DAFDLFFLOZXJQGOMIGQJEQGPQIQTAHRZWWDEMQFOTUNWOQVTSKBBKPWBDJDCERIPFMWLHESRGXTQCIFXFRMYUIWEXMJHMYYKSAMFAPCNNTJGZNCCBVPEDYBRYIYPOYNHTLJVLJXKUBXVTSZMOWGSRKHZVCDMYXOGUKAVSVIOEHEPUWHFZNNQ");
    msg.params.assign("TMHTBEWQNZKDQSSRGKBWJZFMWDPOJYNBOHSGOCXSRHVURIPELLOLFOYOUTOZIGVKOSFEBMSQIFNWMRDBAWCAXPMRTQDBGEKLGVEFYAUFISUAUZYBKZCWJNJAPZVDPECILQYVQEGHGMYPPCFTYTCXDXKRNASELJXWOTJEXHLCRUZTPIUDVJXEDWTUXLZCKPNVMNFQTDMKIOJPXLBLYJIMVBINHNRCSGFUGHWHBZA");

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
    msg.setTimeStamp(0.232174833645);
    msg.setSource(64513U);
    msg.setSourceEntity(244U);
    msg.setDestination(10020U);
    msg.setDestinationEntity(44U);
    msg.cmd = 153U;
    msg.op = 201U;
    msg.plan_id.assign("TZBMUEPVCMFUDKYRFVKPNPSEFBJHAGUCBHVWMZKIWGDKLWRWQZDYSAMWGSCMVUQJNXUTOXRLXGINBBLNLOOOEFHAZHBJSTDZJBWHGXNPXEOXQKFKPKAJLLHEYDXRSFOAICJHGROJXWQCEGVTQHGGNAIYPATTOCIMZHCTIFRFAAVDRUUQYXSWPQOFYWYQZEZD");
    msg.params.assign("PVAACYJPSZJHGLLFAPFGBAOIGUZPGISCTVMFWBOXEOJDCZUMUQNIFMMBNQMXTADILZAJYLCNHFVVEXTKBTCERGNDSQQKEJGPVNKRKEXPJIDNZRWDARBTKNRYXSEKVSSLVNXUGSFDUHHSEJCIHSKCTTOHXRUMLBEYMXLOWPMTFWZRUTW");

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
    msg.setTimeStamp(0.34876106753);
    msg.setSource(58291U);
    msg.setSourceEntity(69U);
    msg.setDestination(17699U);
    msg.setDestinationEntity(15U);
    msg.cmd = 243U;
    msg.op = 112U;
    msg.plan_id.assign("JVWQAMTPQEXNGWSLEHCJBAYRKHSFRTLHQIJMOBPZSIUKNNIZGCWMMMZKKRDVSFZKCEAMFRGJSHXCXYDL");
    msg.params.assign("BYWQIQWIADHYUHWCAHOBZXKFXQYWONJXFCJCOVKRWRFRHUSQDNMSLFGQTMKIXLZOOHGGSICVTSMNYLGTVQUJPENMGSRUPPDZHEXAZXSXVNJTFPPFODDLVRTMALUKSG");

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
    msg.setTimeStamp(0.545826927486);
    msg.setSource(32916U);
    msg.setSourceEntity(30U);
    msg.setDestination(32769U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("UOIQBLWAPQSDJFHDMBAPRJVOZQAPVLPTONHRXQNCGTELHPGWJPFDMWYXUHDBRCQXRKKDK");
    msg.op = 115U;
    msg.lat = 0.718884143698;
    msg.lon = 0.317379810268;
    msg.height = 0.0805997916863;
    msg.x = 0.0272413997466;
    msg.y = 0.0171508555348;
    msg.z = 0.565060516652;
    msg.phi = 0.933487202555;
    msg.theta = 0.226801436898;
    msg.psi = 0.78047998446;
    msg.vx = 0.116615851836;
    msg.vy = 0.463307282915;
    msg.vz = 0.823616416667;
    msg.p = 0.333775419278;
    msg.q = 0.308597540993;
    msg.r = 0.0640092258809;
    msg.svx = 0.680004232312;
    msg.svy = 0.169952220664;
    msg.svz = 0.680450191699;

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
    msg.setTimeStamp(0.694541280244);
    msg.setSource(36825U);
    msg.setSourceEntity(153U);
    msg.setDestination(1810U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("NPSMKKWZDSYAOADRMHECGAQUTBRHUMXLMESGXNLNXBFTNODKPEBUICUYYJXLHVLURBLPZTJPXQXZDPIIXPWEKKBZ");
    msg.op = 110U;
    msg.lat = 0.0623210834165;
    msg.lon = 0.769728263636;
    msg.height = 0.608414282238;
    msg.x = 0.569539902432;
    msg.y = 0.293898918938;
    msg.z = 0.551045522606;
    msg.phi = 0.945835140487;
    msg.theta = 0.658300203566;
    msg.psi = 0.192274443098;
    msg.vx = 0.829341915875;
    msg.vy = 0.806594795183;
    msg.vz = 0.137735467097;
    msg.p = 0.972743641748;
    msg.q = 0.0962807135521;
    msg.r = 0.900105607016;
    msg.svx = 0.336360297829;
    msg.svy = 0.392297360269;
    msg.svz = 0.296605081158;

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
    msg.setTimeStamp(0.736618784873);
    msg.setSource(56210U);
    msg.setSourceEntity(242U);
    msg.setDestination(4980U);
    msg.setDestinationEntity(223U);
    msg.group_name.assign("FATBFWNQUBTAKHMPKBTUADZBTKEQPSCJ");
    msg.op = 101U;
    msg.lat = 0.283215749835;
    msg.lon = 0.144994693404;
    msg.height = 0.430178819936;
    msg.x = 0.418525061541;
    msg.y = 0.488203073043;
    msg.z = 0.605251541352;
    msg.phi = 0.197504938645;
    msg.theta = 0.731888507336;
    msg.psi = 0.330738745552;
    msg.vx = 0.053833490452;
    msg.vy = 0.0382278888079;
    msg.vz = 0.273893856182;
    msg.p = 0.0611910409977;
    msg.q = 0.128997302388;
    msg.r = 0.275118845485;
    msg.svx = 0.495041349648;
    msg.svy = 0.832557118421;
    msg.svz = 0.184484282484;

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
    msg.setTimeStamp(0.640732484005);
    msg.setSource(36394U);
    msg.setSourceEntity(213U);
    msg.setDestination(10689U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("BLWMXQBITCKZLADZCLAAUDTBMKNDPHVJCHQSCSU");
    msg.type = 175U;
    msg.properties = 208U;
    msg.durations.assign("AFROWOARIVFEOPDPZLOMCEXHT");
    msg.distances.assign("ZVQYAXBEVJFMXXIQJIGHSOBXHFIFBLKRQFOVJDVSDPTUAAXUMYFBZMOETLXVKMHELNQATWDYLTLIWOAVOY");
    msg.actions.assign("KYXIYDPCJCWZWGTTQPWLFEECJNTZBGZBTUVECMSLOJAFOJUXQPOWXPXJVRDGEPZSIGNRFLRSJQTGLZSWOQSYOAXDMBBFVEPTZALJPZMCTMIBPOKZMHHHWRITSDONBIYMKKUAUCHMJAYVPCNFYKDGPAEELXBTRWZK");
    msg.fuel.assign("EWBQQITPBXQUGDWJBJBAOHXCIUFHDETOSIEJYMELLMTNUZKCWWTHFGDPUYQJKOZZRTYCIPFDBOPNKNHQLIMSMUZGAWIKXHIOXZAJDLESGNHWLFXBVRNLMUNLRMCXOWEFRVKCVGXOTTATGBQYCCAMSZLWGRNYHFKZXJCPZVYBGSVBINEHCDVQOSUHZAIJQGEWYMMJAPLHDYQLKGXPSFAPRDQFFOVIJYJKM");

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
    msg.setTimeStamp(0.468041412982);
    msg.setSource(30493U);
    msg.setSourceEntity(52U);
    msg.setDestination(36774U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("XXJTVBPALPAYVGMSUCLWMPSVOWMUBFEMUYZRNWMVAPAKXDTWNDNUPPSYCKYASOPKFCHEOXLFJRBHOFXAGOQMWBYTOGOQTCNXHWKECLYTIBNGYJVDUXXQISXPQRENVEIWP");
    msg.type = 66U;
    msg.properties = 77U;
    msg.durations.assign("LKMJJNHJRUSSCVOXZEQQSAFOUAWCOEJZQBHTDVMBLXEHUWHUIVTNPARVHMYRJFARSGBTRFECYSLLIDNDAFIJMMT");
    msg.distances.assign("JVPHGXNWYIQOCPJIHALFDPKULTMBZKYAONVFLEERPYDTKZJFVBLUVPMZFKDNKOUZOSUBSPJVIXHFEJQXEAXPIHXQGAWIYWLUPXBSEXHATADBUURGTTDIBDCSQKCGMNGZMMOCRHUYDMNDEVHJQNYYCMPGQWGHIFAKLVRTSYFWKCCWORHZJSLCAQNYAFKRRVWOKEEWRRPBCSGADILZZFTLLJFS");
    msg.actions.assign("XMBHENUZBWEITKALVYVRCJMNFKGHJOTLYNQRHVQCQUSHGMJVGFDTXRQLNDABJKQUAESRPMABPWQSYIESKPTCKOLNCDIYJXZLWYWFRXILVFCUPLBKZOHJTRDAKLWIAESHRZEJFCOSPHXUUZGSKMEUVNXLXFEWDINUNJIPFMWRMSQNWQWRTQYJOHZ");
    msg.fuel.assign("CXOIBPKFHBFAWMDMBFELQLLUKANBARXUAUFRTRIKKHQENUQTIVWSZGWTJXWVLOAROJKJHVGLCFSVTMGRYUHDBNPKQHBEICXZPSCWEXVVGYISFOFYCTICJQEQWRXZWYGXVHBRLGFJZSZNIHXENSYSWCDZYMPGIDMLSMJDKIKTFUGSBATVDQUTNECUUZVCHDNUJMYWOOXBZVPLGFWZJCPAMQLOHTMPXHQPSP");

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
    msg.setTimeStamp(0.0334804384874);
    msg.setSource(28076U);
    msg.setSourceEntity(11U);
    msg.setDestination(25907U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("ENJREWFANESIVXGTJKDJFEMXNISPWSQQWGBTOTUGOAZZLBIGIWHFHMOOWRARAMCWAKKVLCBRPRUKVRPQCNPQLHBVLOFSIEHVLGYTZSLGTKSZAQNNXHYDSDUXDIDKTRUUDGWCRIYLYDUPMUCMCSXNMZXOZIFEZDTSOJXWGBWKNB");
    msg.type = 226U;
    msg.properties = 213U;
    msg.durations.assign("OIAPFAUCSNHSFRECXWFVLQTHJTJBSTRWQIWAPGDWXKVOHQICZYKXXNOZLHRELKUYAEALYSBMVDBMWQRPAJBDHCVCMMLYEBQNJOUIYYFIJIHBCULSZXMVWFKRGLXNWDURFMRVTJLDCGCDJBTYQUDTSESOYWGMPXEHQBJXZVPAKWIEUQJEQKVPKKDMGRTGZGVUFLSZRAUUKOFCMHVMIYBOTJFHNZZAPXIBQEZXPOCS");
    msg.distances.assign("DGGHAZCUMKNTKKAPURVHDQKHBCNUWXYGOJQPQNFNMWNXXABG");
    msg.actions.assign("LWCVOXKIEEFTSPIFBTGOPPXORTQWOFCLMMRDUFXUZGNFPOHBBHNGRTGMMIEWSZUHSVCWYQXTKUCNOMZMRMCBANWKPGSESSRUVRJCDVMZFHAVJRWVROWXOYQYKZEBUJWZCZFBQSAUNTYYXLLYPXKYTDKUHBDDJNPLNXHIJVTEJEIQKHZQDXQSYATGGELFIGOCQGBBHYHYANDFDKJAITJUICNABSVLAJVZU");
    msg.fuel.assign("FVJNZIPLJFYIZYTRLKUWTUZNQQOKDFSQEXIRRYCOGGECHEJELOTMCJGDNDPKISMVXIBXHMNCTAONTPMBFLAFWJUXDCPDASSZXFFRIC");

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
    msg.setTimeStamp(0.401105245248);
    msg.setSource(53167U);
    msg.setSourceEntity(134U);
    msg.setDestination(7098U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.822340661862;
    msg.lon = 0.266901601595;
    msg.depth = 0.346195527747;
    msg.roll = 0.619720008195;
    msg.pitch = 0.38325659983;
    msg.yaw = 0.0719212006217;
    msg.rcp_time = 0.837311291951;
    msg.sid.assign("OQNUBIOPCMZAJBSCEKEQPWTZBHXDVGICLYPICYSNNKDPKPBPHNMFVCNUTVSGRKXLCHSNTFQXEFTDTKCMOPQCWSTHDZIQYQFBMEHBZATXJZFJFYRODLZJZAOYNMYGJXGXARDVVNQRBEOMMROJYQXQYDRSAUGIDSUJVURFHWGWTLGOFNKLHCOJEEGSVIALBFXWMSWYEQVLVKJPLDAGNJIHUZHZPSHWVGKLME");
    msg.s_type = 253U;

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
    msg.setTimeStamp(0.490661396731);
    msg.setSource(28810U);
    msg.setSourceEntity(49U);
    msg.setDestination(34463U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.0185085184684;
    msg.lon = 0.57703553091;
    msg.depth = 0.9164539235;
    msg.roll = 0.837604062161;
    msg.pitch = 0.00968966944013;
    msg.yaw = 0.0307582254902;
    msg.rcp_time = 0.200665639635;
    msg.sid.assign("YLOOPNTKVXGANPXAZIENHYNYCRKUOUGHDMSRJLMXBVBPBVQNIRGQBWPJORJCMCSMHQPFTCSDRHVEXEZCUTZPXPOWTGUMLVYJKNLJQEUHAQRLFIZDWZRMQTAAUVZPZTFCZWWDIVRFXMFUSVPISIEHIOTFWPVAJGKVQJJHGYEGAWSYDCQWLKUNJSXSACLLEEDKFYYDBXBBXYMWWOOCGZUXFBSGOTUIHREKMTJLQMFEAI");
    msg.s_type = 170U;

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
    msg.setTimeStamp(0.679678519205);
    msg.setSource(11859U);
    msg.setSourceEntity(2U);
    msg.setDestination(38633U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.227856877354;
    msg.lon = 0.458748932893;
    msg.depth = 0.502195117223;
    msg.roll = 0.068304479654;
    msg.pitch = 0.689950537895;
    msg.yaw = 0.534103696528;
    msg.rcp_time = 0.638037262178;
    msg.sid.assign("CTHOTHTGUVRMRPXSLJOSLGNGOJEYCEI");
    msg.s_type = 243U;

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
    msg.setTimeStamp(0.67470127089);
    msg.setSource(10413U);
    msg.setSourceEntity(37U);
    msg.setDestination(4500U);
    msg.setDestinationEntity(68U);
    msg.id.assign("NTIFIFBIQZDKYGOWXGMMVTGZYLVAVQVECKSYMLSWMJITGZZZAYZRBJOQCYP");
    msg.sensor_class.assign("AZBWYYIHJNCRFWYOCLVSXCHKXQVMYAUVAU");
    msg.lat = 0.731618542933;
    msg.lon = 0.845842884991;
    msg.alt = 0.941954680639;
    msg.heading = 0.3669802476;
    msg.data.assign("SFVLONLDQTUVCFSXKUMZJGOLDZXRDCHRAOBXZMHMRHNCLELXXNAJJIMYMYN");

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
    msg.setTimeStamp(0.849616624415);
    msg.setSource(4301U);
    msg.setSourceEntity(95U);
    msg.setDestination(59410U);
    msg.setDestinationEntity(170U);
    msg.id.assign("BYSMPNXMATNZXCRYFEDDTMEPTWYOHODDZXHKRYOEIAIOPMDJPFFBNQFBAKYWAMMKRKVNMTLXOCNVTJXKAVJDNWRRHQHJIOUNYIHSQAGHCKKQZBPFSJIUSVDCJRLPRFGXXKUXAQZSLE");
    msg.sensor_class.assign("JHHAGGYPIFUFWIKSQTRQJRHXHSXMVKCMGTFNDOKNXFSDSWSOEXCVRZIZQATRLTHWMAHFLZSVVZQKHEIZVWCSKBKROJRSCLYBMQNXPPCQEMLRMOANGGIVBKZNYEVJUQIFCEMPHWKUUNNMTWGLQJTZOLLYSNVTPUEGRVWPDHYIOQICFUTIRTYJODMYPOXIEYZLBCKZHEDPAFJOJABDWMBZGWOUSBULAYDYARVWENJGTXPBUBPLGDCXEXKQBJXFDA");
    msg.lat = 0.28871469245;
    msg.lon = 0.959619834805;
    msg.alt = 0.402264388987;
    msg.heading = 0.680537356592;
    msg.data.assign("YNPGNFFHAULLKQXINTCCUUXWPMILFOSMXYAZVZRHCCFQAPYBGUWQVTAQLOULWJOZZCKECYYWKVKLMCGGCRFFDYOSVYIZDZWJBGPMTRKRFTJHUDGOEPDJJSIIBANSQHMCSNIKZVSPVWNOMHHDDPHDZRNWDYQLRYZQKQBVFERXSAVORKWXAJESGEKUQRAIXTBFSNEWWTXIOHOYAEBNTUBTMMAFJLLVNUJMXGTE");

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
    msg.setTimeStamp(0.341660624019);
    msg.setSource(3973U);
    msg.setSourceEntity(41U);
    msg.setDestination(12443U);
    msg.setDestinationEntity(224U);
    msg.id.assign("MGNGFOZPBHFQKOCEVRSWQRAWZAEYDEZMPGWBZCFOJSKLAMGKSNQHUYBZCLNFUVSZXEDYTNZJKGPTATNLMIGAZVRUMWBSGLNRDDJRWJLUAPKDLOLBOEVTAPHVXIJJIYVSBQFFRWBQAISFOJPKGXTLUTMUOGXIFCYETMBZRXYKHJICXXPIRZAWKDHQLMQUHBCQWJXPKTYYROOIXDROPYYNHUHDVDJEBWECQKCLPA");
    msg.sensor_class.assign("KREXDLCWANPZBIFVWBQXAESGSIQDAGKUMXCV");
    msg.lat = 0.213022567736;
    msg.lon = 0.884448162588;
    msg.alt = 0.369559543355;
    msg.heading = 0.502888663399;
    msg.data.assign("BXMQEWYYLPZSLYOEIXMNHUIZTBIARSFHYZJFAGPYTLTCZCLKXGOFLYWKQSGDFAJYKUZARVQUMHUVORZRWEYJEQDCOWFBVAUMZKXQTTFZJZKBPEYCSWZISHMEVPXHGKXNNPWBKKDQETEUVVDUTHAMBJYSPHPRDUIIOVLIGGRBCTNFADOXBCFHWXNOQDMVCOIGPTCJBGDQNQKNJWNQJUJHCGDGPSULHFW");

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
    msg.setTimeStamp(0.869309570341);
    msg.setSource(46064U);
    msg.setSourceEntity(91U);
    msg.setDestination(53072U);
    msg.setDestinationEntity(112U);
    msg.id.assign("UCHFNKZKWGWGJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XMWOAZWZFQYQTFFRKUMYVUDSGGVXAKXPILSNGERJ");
    tmp_msg_0.feature_type = 119U;
    tmp_msg_0.rgb_red = 219U;
    tmp_msg_0.rgb_green = 209U;
    tmp_msg_0.rgb_blue = 69U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6060822189;
    tmp_tmp_msg_0_0.lon = 0.0327231704544;
    tmp_tmp_msg_0_0.alt = 0.00171777187757;
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
    msg.setTimeStamp(0.522898603695);
    msg.setSource(43647U);
    msg.setSourceEntity(15U);
    msg.setDestination(18909U);
    msg.setDestinationEntity(19U);
    msg.id.assign("QSPUBVOJHLAFGVTOCMPKILKLJUOBUNSDACQHJTWLCHHRJMDMBDUVLKSNSEEZNMVIFKZQQURCFTWBTHQXYVPEDKISGFAGSHOMMVRGQXYRNXWRPRLWBCOYIHUJPTHTULYRNOAESKEZHDDEZGDIMJFWOYIKNLAUSKNTYWPVYOYGTGBQZSVFXRWXRCLEBPYD");

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
    msg.setTimeStamp(0.263685627743);
    msg.setSource(7401U);
    msg.setSourceEntity(1U);
    msg.setDestination(9656U);
    msg.setDestinationEntity(152U);
    msg.id.assign("SOYYPRTZZNKXXCVABJAQG");

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
    msg.setTimeStamp(0.656722992933);
    msg.setSource(26363U);
    msg.setSourceEntity(32U);
    msg.setDestination(40375U);
    msg.setDestinationEntity(242U);
    msg.id.assign("HEDTTOWYMFLIRQPJDKRUVWAUZNIWXDSTXTBQOJXPPBKQGQKNZEHUSOXESUCYNDFORSQOLGXZHMXYLNTQIRECXGLKRWDTTVMBMODTSIIVMMIZCZULXCBRQZEVA");
    msg.feature_type = 63U;
    msg.rgb_red = 49U;
    msg.rgb_green = 29U;
    msg.rgb_blue = 99U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.725931087848;
    tmp_msg_0.lon = 0.633279592117;
    tmp_msg_0.alt = 0.459242237507;
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
    msg.setTimeStamp(0.784684150645);
    msg.setSource(17179U);
    msg.setSourceEntity(92U);
    msg.setDestination(44973U);
    msg.setDestinationEntity(202U);
    msg.id.assign("JQIQULAYQRAXHRTRYSFQTZWAZPILOTWIUZZCDHTIRETJBGMQGZONCXXJBLTOCPLHMFKZYPBR");
    msg.feature_type = 15U;
    msg.rgb_red = 49U;
    msg.rgb_green = 2U;
    msg.rgb_blue = 130U;

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
    msg.setTimeStamp(0.343054860663);
    msg.setSource(34634U);
    msg.setSourceEntity(142U);
    msg.setDestination(21281U);
    msg.setDestinationEntity(20U);
    msg.id.assign("UNAQLICSCHHEBIWRFPLBDBSRUOEHOHAWYOGFRDLMOOCHBBZUWCHOPSVMTWYQKUIPYWFIKUHWBRFDVVEHRXXOVTRJGXXUZFFZBHJGUZOPXDSAVMMRDSIWAQZTNPCMVXGDLSQJVLYLNJNWTPKTDUAZZFPPESLDVNLYTXYJAYSTADYKGDJNCIATJGMIKCCRENCWVYFQMBMCMPJQMVHGREONUT");
    msg.feature_type = 246U;
    msg.rgb_red = 6U;
    msg.rgb_green = 66U;
    msg.rgb_blue = 140U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.187778647186;
    tmp_msg_0.lon = 0.757108734413;
    tmp_msg_0.alt = 0.0836540582685;
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
    msg.setTimeStamp(0.898668336688);
    msg.setSource(14000U);
    msg.setSourceEntity(246U);
    msg.setDestination(37655U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.741035572108;
    msg.lon = 0.781118756948;
    msg.alt = 0.508735564268;

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
    msg.setTimeStamp(0.576551298191);
    msg.setSource(42196U);
    msg.setSourceEntity(148U);
    msg.setDestination(8423U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.758107099228;
    msg.lon = 0.598320924649;
    msg.alt = 0.486664320424;

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
    msg.setTimeStamp(0.867706673712);
    msg.setSource(2668U);
    msg.setSourceEntity(225U);
    msg.setDestination(35172U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.328835504495;
    msg.lon = 0.757993144245;
    msg.alt = 0.356826304784;

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
    msg.setTimeStamp(0.741905917461);
    msg.setSource(26899U);
    msg.setSourceEntity(213U);
    msg.setDestination(10624U);
    msg.setDestinationEntity(230U);
    msg.type = 113U;
    msg.id.assign("MGUPXWXRCYVZAHFNDRHROULECBWLYQMLBQDGMSCGEKBBIMZELUHASVTVJNKGULUBQKZKYHQUMFZNDETJRWLRVMIKZCOGVMDFUAFEYFGOIPBJVSGHAMQDNKYRWOKPN");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.451586867569;
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
    msg.setTimeStamp(0.0770159656167);
    msg.setSource(65479U);
    msg.setSourceEntity(170U);
    msg.setDestination(2883U);
    msg.setDestinationEntity(41U);
    msg.type = 76U;
    msg.id.assign("ZDLHEILRINCBLLWGONOCRGKOFVMRDNTTDHPTWPZRUNWMKWHVQPTEYQFWINSJVASDKFSXFHYDVPJWGYQ");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.0383526804077;
    tmp_msg_0.lon = 0.279681082854;
    tmp_msg_0.z = 0.0764329185517;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.speed = 0.852964112579;
    tmp_msg_0.speed_units = 192U;
    tmp_msg_0.takeoff_pitch = 0.845282992534;
    tmp_msg_0.custom.assign("EENRATXMQHJPHWFIKUAKSMXKJEAWRJVSEZVLIGRYVBVMIRRPVUSCRRUPZTUIQGQOCZFGIBJORLG");
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
    msg.setTimeStamp(0.96080020163);
    msg.setSource(24309U);
    msg.setSourceEntity(10U);
    msg.setDestination(29642U);
    msg.setDestinationEntity(86U);
    msg.type = 146U;
    msg.id.assign("YFXKXDIFANVWRMATSSCMDKLLTLAPEVJKTGVQTLSRWOZUEXBHXYUOMNUPKIAORHYHPSSNRWOQNXLHLEJTRGA");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 222U;
    tmp_msg_0.frequency = 465892302U;
    tmp_msg_0.min_range = 39402U;
    tmp_msg_0.max_range = 51775U;
    tmp_msg_0.bits_per_point = 172U;
    tmp_msg_0.scale_factor = 0.66094016059;
    const char tmp_tmp_msg_0_0[] = {-88, -52, 64, -95, 100, 64, 110, -78, 101, -106, 102, 87, 106, -81, 43, -2, -54, -81, -106, -56, 101, -95, 126, 123, 119, 23, 87, 126, -13, 74, 70, -43, 109, 18, 118, 37, 12, 30, 104, 24, -71, -47, -57, -17, -88, -100, 5, -8, -61, -50, 4, -98, 105, -68, 103, 27, -124, -90, 12, -48, -11, 21, -119, 98, 85, -87, 25, 21, -69, 88, -35, 6, -98, 112, -76, 106, 32, -126, -29, 106, 12, 124, -30, 28, -49, 66, 73, 47, -37, -120, 89, -102, -46, -36, 98, 84, 39, 43, -71, 15, 114, -117, -98, 68, -39, 125, 126, -26, -39, 123, -76, -100, -116, 69, -58, 99, -10, 77, 8, -40, 83, -126, -102, -77, -3, -94, 22, 63, 57, -32, -109, -110, 57, -21, -3, 10, -62, -1, 74, -121, -83, -120, 54, 55, -99, 94, 14, 64, 62, 72};
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
    msg.setTimeStamp(0.300387823396);
    msg.setSource(33929U);
    msg.setSourceEntity(119U);
    msg.setDestination(42259U);
    msg.setDestinationEntity(141U);
    msg.localname.assign("WEHOTCFTJOQAVKTKYJTDCWTRKZBDVCDYRINGPB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GYQSEOWYMDWTPMLUPMBTESTFHTIJDGIXKHOFOPAZQHMTIJRFBASIAAELDIXCQUSGCCLHQZIOBPZFHZTWGTLVTRZBNVVNATRSDPMCLCLKWRKDEGNIFZOBFIPHVQJYYNKUSBMRA");
    tmp_msg_0.sys_type = 84U;
    tmp_msg_0.owner = 13644U;
    tmp_msg_0.lat = 0.308989023849;
    tmp_msg_0.lon = 0.834534958046;
    tmp_msg_0.height = 0.884653166099;
    tmp_msg_0.services.assign("VBWNHMFKEONSQOFSPLSSQMOVRVUJOGSWSCVYPNCBIQXQRMRQQOPDONHCWQTQCHMHZBACZDIEJHAKHGVICTTVYKGZFYRHEAYHLLXJDZZCFJETLIPGLRAYTNDJMHEMFZWPMRXLKAECENTSFAKUZKPTZXBBAVGXDJWUXEGFUOJWPJGUVWKJYBTOFWUOBOXEYGUGW");
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
    msg.setTimeStamp(0.687909904579);
    msg.setSource(61054U);
    msg.setSourceEntity(9U);
    msg.setDestination(26531U);
    msg.setDestinationEntity(162U);
    msg.localname.assign("OPNSPBZDDZHYEQSEMSDAAIVSCCQFCPMBQFXZQVIWKNWMVESXYYPXHOOLDTVYVGWFHGDQQJOWYFPGSHUZYIVKRAOAKPAHRIFUKTRJQHPKVAXLAIBLNZLUMLLKUJIJGTHEIMPTDXUZLNLBVYTPTEQCORKUCDVJUHJWIFHRRDTWZACOCGERKTGZOMZJGARORBNYIJQSZXCQAWEVCDSMXBWNSITEYYLXNBXBBNJGXU");

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
    msg.setTimeStamp(0.655046283098);
    msg.setSource(13191U);
    msg.setSourceEntity(185U);
    msg.setDestination(2322U);
    msg.setDestinationEntity(173U);
    msg.localname.assign("QHOFFFPHJYJIHUNVQFBJLYYGROEKEKMDTMKXWPCSWAXZUQNXBOKIJVZDFDZICLXQUERTCSSJOVGVIJAPTVHT");

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
    msg.setTimeStamp(0.30764653529);
    msg.setSource(14534U);
    msg.setSourceEntity(192U);
    msg.setDestination(18514U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("SAXMCIZMZROEPGSXREYHVVQTEOERKJCWWASNNMODLBSCBWONRGRASZBAWDGHUXFLSWAXYTIVNPYHEXOCWITQHQDIQUYMDRUFBJMR");
    msg.predicate.assign("SBMFLRCNLNGBJBTDYUXSHQRGJTCRZHOYGNGCOGFCRJYBNUUFWKSCHDJPPBJBIMUMQQXZCVKYTQWEWBOYQAWXMUKZSXKDZ");
    msg.attributes.assign("SXDVJRAISLBQIQAVELZLJNNAYWQTRGCUFHBTTQFLMCILFHDWNJJWJXOLKKFPAVQGGNMU");

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
    msg.setTimeStamp(0.984043265868);
    msg.setSource(55913U);
    msg.setSourceEntity(123U);
    msg.setDestination(63308U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("QGJEGFYANABMOQGBOHWLELPBDQYVWZCEYIRKHZQJPBFXMGNLVIMIDUBRXBUSOYEYKXWVVBFPROQTTSKIHBJKDFTAUHWYLUTFJMQWLTRSIJZMAYRVDNMJONFANSAAENMBCTGBOVPRVEMEDEYEXKVHSIHKZHXAJFJCGROWURNZKNTYAPSIPLNEQCDRJZWDOQKUCSPHWXRCOCXTDWWLQZVHUZDPLC");
    msg.predicate.assign("XEZNMZXAWKOYERGMWSJQQHPYWMHBWDAVCINNQGGBFKWSBTVJARHTYZVTQHNUVKXSTLKAESGILLSGFUDBEXCXNZRIBDPBVEARJFGODXKUJRGCIGADZOFIJBEMVMEXTRFCSQFLCGCOKNSNXQUZDDIPHFWRTEAYLCKKCJCMH");
    msg.attributes.assign("GISWLCVZSINWSELLMFNRGROUAFLRCSHGCVKJTBXPJZCWXYEAZYELKTDDCVVGOSBIQOCHUIVHMSYLBTNWBCDSDEOMKIRITNJPYPGZIGYUVZHBDDGTAXQHZQFCXMBMMNNAQPJVQNFSOEHYBWWTNKRGPTZXNHDUXLXUJVMIPKLZVUGPDAQZRKAFPEFLUXYBRUJ");

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
    msg.setTimeStamp(0.0601690349372);
    msg.setSource(65250U);
    msg.setSourceEntity(235U);
    msg.setDestination(53530U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("RSPQTDCIJUHXWMEHQIXMKXZMXPPCLOVCFTKBDRL");
    msg.predicate.assign("SMPEZORSMYSWDCXZFVBMIJLFEBQXBCTCKBTPHVQWHFUOOXFBRXYJUKLVFIYMESHQRGUOGDEKGAUVPGYOWYJPXCMAJFCLTEQXXAGNDNNJWOAOWHVKTCLGIERVTIKEHRNSIUMELFVBZSWXPOWZYIURMLNQRBDAINKDDIYT");
    msg.attributes.assign("KZMFBQSWFEIEVZXJCPRNUUUCGTSFLGUTXCAMNOSRPIYPICKYTTZRCJDIAESOPGNQOZGNFQHKYCNBSXNXAKKJCHETAYPSJXUQDRUSILOPCXDNGOYMVSVORGEBEKVZLLPBHJGHBMLJWCQOHMWLVOBDRKQYGADUXBH");

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
    msg.setTimeStamp(0.809366942791);
    msg.setSource(56970U);
    msg.setSourceEntity(15U);
    msg.setDestination(15215U);
    msg.setDestinationEntity(233U);
    msg.command = 94U;
    msg.goal_id.assign("KBHDKNEGOCHPIIZBYXNGHNHORLDTZHXLUDMUONQJXTVYBMMJIEEFYTLQXGZTLRZSQYNUIUJQRMUFKYZDKTCMPKLSRNZBQWGPFTADQCCOWXAPJAVNYPDKGRRODSBUVSWHXHGUUFAFJOWEAJUAAVYLPWMQPWFFTBCONRJIAMKSFEZIICGTQDSVQTREYCEXSZLYWVSSVCZAIKWCVRHEXWAVRFJBIZ");
    msg.goal_xml.assign("GTTDPSUVIYOPCCXMJIVKNRULNCAJJSHPDLEHQVGTTZKDNMYOKLSWGSKYSQRBMCQJCDLBXZFSOIEUGVQVGMXSUIWIARKDLAOECQLQTSAUBEHMHCZAWYTFFXKMSPVFFUHXBTZCXGEQMBZBQWQQPYEHVIOKPYUNOCHRVDFOAAZHYROZWRANJWAIEXTDLGRWPZRVNFOWYEWIGABMXJXKIOXFLWLGTYBMSHB");

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
    msg.setTimeStamp(0.556478756887);
    msg.setSource(39582U);
    msg.setSourceEntity(158U);
    msg.setDestination(47083U);
    msg.setDestinationEntity(210U);
    msg.command = 199U;
    msg.goal_id.assign("NYODASLASCLOUZXTJJVSTFULLWELBKHQCBBSGDMMCQPINFBEKITKWKWRUCDHCLZLCRXDCYINUBSTUTSNGATWEHJQNSQHXFYAEZPABOYIVFWMYHQMJGQRDOFOEOKZFFRZGVMKVJPYXEPEVZXFMHAXMUXEQNAWZNHYZKWGPGPVCQHIYDRCHXYISLNVAJIUTJCEFRUMWHBUQUPTIPVDAXZSTMGDPLQOX");
    msg.goal_xml.assign("UXSCYKYGTQWSYFSIOXWRVLWVBQSHMZJCYIAMEWZQVYOHVKABBBOANZJYKIPJVHJJIROUONYTAGQQGVSXAJZGXEECTNIBNVBHUOSNOTELKXMKMMZPOMRQPPZFVCLRYZPHEEADBFRBLTURYDULGTZLWNNPSNXCQCGHSFFCCVODHVIFMGWJKKWDFRTLGGDBLZPSXAAUEDIHDPXUUDTZXDAIRJUMRJUNFYHMMSQE");

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
    msg.setTimeStamp(0.047152603959);
    msg.setSource(41139U);
    msg.setSourceEntity(63U);
    msg.setDestination(60771U);
    msg.setDestinationEntity(243U);
    msg.command = 80U;
    msg.goal_id.assign("VIBHLEFWYMRTICOTFJFIBSVWYDNXSDCGIEWBVYDATDJYUENWBNHSNZEGTH");
    msg.goal_xml.assign("UNMTPCJYNSXVBYAGRPVEKWSVVOPSXNGDKIRQBJTZLIXMCMSKQGFCSPJHJILVNZJSQRFZCXJJGYWBDPDDIJNCFBUEIZHWZBJAOXHOUUGGIHZXAPFARWUQZAFVRZZGQPANLWQXBHMASBVGKSWROMPBACLMTYOPFQNOEBDRTX");

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
    msg.setTimeStamp(0.171564408849);
    msg.setSource(39717U);
    msg.setSourceEntity(242U);
    msg.setDestination(28083U);
    msg.setDestinationEntity(46U);
    msg.op = 69U;
    msg.goal_id.assign("GPSLPNSHVK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QVZESRNNICLWQAZVPSBAAVFYXFNMNDXQKLNOXMCXKLWMRIZUUMWULAHJAJOSYAMHQRGKPGZOMXDCQYUKWHPGIEWKZUHVBYPLXIETNGBGIBMPFBXJCZTJULBFIYVFHFDOKHLHTNJRHGALFETONYWUBWJDCAQUBKSSYOO");
    tmp_msg_0.predicate.assign("CACSWJEUWBHZAQUPLLTORXLKZCFJQOVZDRBRUHIAEHSIBCPJRAJNWDFNAWGYWTOCHUTNMGMIMSCYNUBMRQAUVKIWNYTHYHMGWWXDSSVGY");
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
    msg.setTimeStamp(0.553396025017);
    msg.setSource(49673U);
    msg.setSourceEntity(234U);
    msg.setDestination(32637U);
    msg.setDestinationEntity(230U);
    msg.op = 143U;
    msg.goal_id.assign("BLDVZCFKZAXGARUSDHASDWYQRFMKHCFSDOGTLEFYTUVXIOVKUYNWLWJKEWEQVBFZHNITPGTDFXHNPRJFMQKJOUARSKPBBBSTZEAPRCXHIJWHPOGQMFXKYDXUBEOJIOAGFDER");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QQHAZMPOUDUDRJEXZJIHCNHYTFAYJVWXEOCPGJXBSKTAAETQKDTIKWUUWKFKYTRIKZBYKQPQSAFUJDOXGLAFLFYDAQCBSYXPNDELSIMUBXEFCNVUBIBYGJQUPZ");
    tmp_msg_0.predicate.assign("MCKBWQUQKCOYGSRCPUFIDPMHREGZGOQJNHIDHRXJAHPRLTISOZFBBQNSMWZJCECJDJFLSIOD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UKCMVIEYSOWTGPOOVEGQJESMMHUWWJZWQIXLORYBDFJRDUJXURULCUVXYKVHPNKRHLQKNMRMKHAHTFZXIIOBVDNZBGWBOPFHUNWKDNTFXWLDXUPKTBCPCGRYCGVRCCSZBWQMZOPHQGHGEQOLCJASBEKPFVQYYJSEDIIXFQEYOMANUBVWHJDAVAZAJCGSPOAEMYPLZGSLLCFIXHSDJY");
    tmp_tmp_msg_0_0.attr_type = 84U;
    tmp_tmp_msg_0_0.min.assign("QVDOPMDCLTSOWCNRZINKCSIJFTRNNLVVI");
    tmp_tmp_msg_0_0.max.assign("RSMEJOCVMSKRCCFTMTNUYWVUOILSHTOJTYKQGUORHPRADTKVXSKAIGARFOOHFTRJXPLNKXNWPMNIPAFFGLZESBFVAWAYBMCVLZDDPGYXUQSTQQWNEUKYHBBDTKMOCWIZUQ");
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
    msg.setTimeStamp(0.499200491773);
    msg.setSource(60101U);
    msg.setSourceEntity(15U);
    msg.setDestination(7779U);
    msg.setDestinationEntity(214U);
    msg.op = 24U;
    msg.goal_id.assign("UQWMVYLAHQSPEZKEAZHWBDADNATZOWQWXDAMLEYZJCSKUWJOUVOQICOEEBDCOADJDLCQJFAQZFUFGVUAMKMSE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PAHDVMRYBJMGWHRRITFGEBJPSOFVMTHUWOKXNEGCREFDOZYVHLPKVFEDCLXABJCHPXANCNKBSSFLQSPRJAJZVMNCRRKKVHPTRQVZWGSICCNRNTGSQDDUFQCZUWGELHEIODKSYUMBXVENPQZEJBULSAWF");
    tmp_msg_0.predicate.assign("DBZDWMMQGOSWEYQVBKYPSHDQUHKPTKKCVJNGDQGFHALEEMRILKMIXJPYFECGUHLRYCINPSOSGQBNWIZJRBYARTXXTKASLZJBCRXSFNKOTCUHULANLTJATZLXDKCYPXEEQMBCVSOOOEOQGZJQRWZUJYYDCFAIMZVSYMEXAXHVWLFNTBUWYPBDVDQHARPRQVHOJBSMMTNIUCZDANUNIWGJZWUUVVRMLTFAFVLPKPWJG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QDLQQYKMETGWYOAOSUTISQORTNKHENQESNFJSGSHSOIZEZXVPHNKXRDK");
    tmp_tmp_msg_0_0.attr_type = 87U;
    tmp_tmp_msg_0_0.min.assign("WEUACPXIPOTYWRGICBXODAFZEPKAGZHRUKOZRGJVBRZXQDMHALYXFOTIKCBUIOJLPUNKHVTKPPKFBQSFVSWVELJGYQYCORZSYDECVDJNZITCLQREELLZHMRHNHXDQMTSAQGQHYDWABFOYOKLWGTEXRGJDIWIXTPGYADFUZALVHOYNUEDLHWIVOKTNRSUKUNQMVYFWRCNFC");
    tmp_tmp_msg_0_0.max.assign("UKERZQJTUCGUMOXVDISYBTE");
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
    msg.setTimeStamp(0.908718965293);
    msg.setSource(49917U);
    msg.setSourceEntity(246U);
    msg.setDestination(54899U);
    msg.setDestinationEntity(103U);
    msg.name.assign("DISSTRLPPXXLOEQVJUJNGBPMUFSMUEOZQBXADPIISJBXKCHCEAZOSYFQRMIPTGBMHRVLOCOUCAULKYBBQJNOYMYUHNFRKZTONAQWREPFRCQGDYHGLQUDECMOHWDEQGIETFKZFIMVRATQDAHJFTZIWXOIYTQUIYFDTZBKECCSAHBWKVWDNZRDGAYNCANVJXLRHWTJXYVPJZOSKSYNCLJNENZWAGIPBRTKLGUMVMSLXZDWFHGPJKLPSVW");
    msg.attr_type = 204U;
    msg.min.assign("UJDWGOVHPUGKMKAYEAFMOSTTCHXVKVMBKEJWTAMXXMZYDMIDSWCHYLEMZIBWQCFGWGRSJFIZQORQKVAKRUJKNRKJNHJYMANZLCHPXJDNYXFYALDRZBNIOLVZISHPYRDPDXQBZLSURVOERHUFJUECZEPNNOCOIAXTXPDQIEYSVSRQLFQWMDOHDPGNQVPTFTYELTTLGSJ");
    msg.max.assign("NMRLCUAYEBHSDLEDZJYEBWOTUXFFDKMKFOIZDRBNXVGBJSRCEVUWSGCLFWJAEDICQRIDYHOIHBTNPDNNCCXZCFIPFNOJKJGUZ");

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
    msg.setTimeStamp(0.623063777233);
    msg.setSource(61016U);
    msg.setSourceEntity(101U);
    msg.setDestination(40516U);
    msg.setDestinationEntity(53U);
    msg.name.assign("QEPYQTUYUZBPVUGQFIGWENUHALEGFKYRTETMMAKHBJJASOUXBZLZAOZJQCEQJLJGZFQLCOVNZDSQEIKKYNHZPMTRUBXCWYDDWWSCSCYARPMEFRNXPUJTGNNGWCRSTAIMSPFGWLMPIHQIFIDWKZHVJTVBCTODSVTURLTODHPAGEYVSOGOJHRZCNXIJHUFYGQOARHSNBMXNMQLXVKKFMBFXUEJLDKYDCAYWIRKAMZDP");
    msg.attr_type = 66U;
    msg.min.assign("EPEUCNTLWAFGYYWGZWPXUOBQEFZUPMEHLEJJCUZZMQXAUBDHSLGPJNVQBSNAIRHXPAADBQDYSYQPEHAZFOEWUVGCSGHJZGWSXFDNAJHDYLKIMMTYRTPFDXKTNVWOWTLNNBYRMGIVHJRKEDP");
    msg.max.assign("JPAPXZFBFKP");

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
    msg.setTimeStamp(0.446524719377);
    msg.setSource(11600U);
    msg.setSourceEntity(118U);
    msg.setDestination(60508U);
    msg.setDestinationEntity(86U);
    msg.name.assign("YASAFRGKRDDYJPVEHLTMHIGTYZHYXUNGWCEVKNCZDTSZGTJJKDOQLMUJNMXRRYFQVDCDWBEWLYXUCALMUMOWNFMHSQINHMZDFXBGMSCRPZTEVDAOPCCBAPOOFSOAVFKJHUHOJQYOTQDOPRWELGRBSADFBVQZZEIIXBHQXHWVIPNWGNUKJTKQHYKBBWL");
    msg.attr_type = 10U;
    msg.min.assign("SAPSIOTKLZRGAFRTFPQESEMLYKYFBUJZCIPIVZNUUUBNXLJIRUIQKSZHJPWDNQRTCYOVVYQLDWWONJBXVHZFGTYMGSOXBTTAZEHFDKXOAIWDZGUAKLACNCKODXOLRNWREXLSKDWBLTXHBEVOIMMGRYOLIJDMUEZTIQFHHRDOCVDWPPNJJSEVQGPYDBMXNMVGIZMTPWSZTRUBVMBHUNSGVCAJAAEQHFMLUQXJHCBWGPY");
    msg.max.assign("YHZKYSEUDVILPSGJXUZJPQDZNKEB");

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
    msg.setTimeStamp(0.128529898829);
    msg.setSource(51976U);
    msg.setSourceEntity(103U);
    msg.setDestination(28761U);
    msg.setDestinationEntity(173U);
    msg.timeline.assign("HNYMVXWHOJQHKKIXAYACFQZEKKDINZAOHUBBKJUKWVRILYNOEOVFANCGRYGTRDOWJQFDBLCUMXBXJPRLVPSTOBNCKISDWETQWPNASXHXEVTMRSUCDHBNCEQHNPZITMDZHLEECAABJOCWRGJXPNXCTMTYFLEFLGQNURZMUVTFYIBOMY");
    msg.predicate.assign("EJDAGOBTTCGGOADIDORBRSAWOUFNYDQEKMFCTXHPJIDDPBFIPAIWOQKBGIYUCNNLMTJYBFJHNMYXRYGVKSZQYVDEMBUUMTVZYZFSLCYAPETGXCXCONRKL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GZAFTZOLBTPWVWWNXGHOENIVBSMQDAIRVGHANZAGQGWDONXVOVPYCAMULCIHKLGUKOWKYDYEJWRSFSOEBRUGMFTESYORMAZDXPQZQTJBFTEHDPVCDNYVOUJIQEXKCXTCNSLJHZRZUKHWFEKB");
    tmp_msg_0.attr_type = 35U;
    tmp_msg_0.min.assign("XVLEZJSUNPTSYTRCAKQRVCSYIRNDAIHANOURJKABISRYTCVWMPZNUGWQBMMMXYWSEYUYXZPLHORGJHUOOGMXTMIEHOWMBOKNDADFBERCQTXGCVGXQHZCETUGGWJKKZOMZGTEIJGTFRWZBJXULZYBIPAFHYYBZJPQPMJCYPVKCFNHULXLXQZINLDLHUIHERWPUQTGWKMJDLDSNQQLDPCXFDKSVSO");
    tmp_msg_0.max.assign("EIONBJQPYCQXNJPHNABOZJRJKYZPMYNUDBDDBIRGGICYGMKWTXNXZQOLDSHXDKICKUYHLPTMZGTAEBTCJTHOJOWWJDRTVETKVFLRANEUNUPROPROITCWRIGCBBMHUDESUGSZUFIIVMWIXKBMFVDZANYMZBGWHKJXAUCMZFRFCQEALLNQLJYGVWQTFAGSLSQKQRD");
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
    msg.setTimeStamp(0.389570828201);
    msg.setSource(64686U);
    msg.setSourceEntity(30U);
    msg.setDestination(16270U);
    msg.setDestinationEntity(138U);
    msg.timeline.assign("EXGHDWGDFNJNJEVRKBLBOLATVSSRCQHLYZFDUITCAMPYGXWAZGUNYFWGMMILFNWIKGEMPPOXBVJJKOVVYGVUPODVTHSUHIIALIDYKNUZXOMQPXDARSDJSSKFXBCORYAFTBCKUHOLMHRXQZZBTJFSBKAHNTLYQSRYQNOUEMCFZKHWSICJRYCUQWQNPHCJB");
    msg.predicate.assign("EUANKCDORJXVSEBLIPS");

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
    msg.setTimeStamp(0.470639994142);
    msg.setSource(53097U);
    msg.setSourceEntity(130U);
    msg.setDestination(5516U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("BOYLGUTFYKCWVVJZIYAXAICFQCSFNGIUMOTJETMHPSUZFDFFJQBCZVZHRHDWOZWFEEOXHPLZKOWRLPIXKCVXHDPQWDNDYJOHYRXPYIEJMGTZHKIWPPBUDVSCSKVEDGKVAVWTFYULGAJLUMQQTZNYQIGXAOMBSOZGDKSBE");
    msg.predicate.assign("QOZNWYUQXOTIZHQQVCUAERPMCFEXYPW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PUCOIYNJZWTEBZKD");
    tmp_msg_0.attr_type = 222U;
    tmp_msg_0.min.assign("OPYEBWLWKRBTMJZQYODVBXVXQPKLHPYSFTXDPEZDPFNLDJVLDLMDKVHCDXIRCJSTWUILYVZRNHGQHGJBVFNBZWAMWAAOGTPBQHRKWTFJUJYXNGNUQPCTEYOHVSFRDZZHTOCSECANECHSAFMUALIYKOBAIQSWCTGNNIGDXRKQRIZYJXOOZSGURUYTFBVCEVHIZGTZJUIQPEWSVAQMSWEKHJFFNCEXUERGGQJKIM");
    tmp_msg_0.max.assign("DUFMKFSZSDBYJQHEJYPCQ");
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
    msg.setTimeStamp(0.764603188003);
    msg.setSource(9421U);
    msg.setSourceEntity(197U);
    msg.setDestination(34183U);
    msg.setDestinationEntity(210U);
    msg.reactor.assign("CGIZMCVIPFGCHYXNXEHPQPJMHNSPXOJQBWVVLXJLRDJUQHSBZEUALWPBJURKZHZBWQGJGGMDOKJDOSNGIAQRWKVUYUKCUDKKHMOYNSUDXCTRNUCESPOLZLCLZJVEDYYMYEOJQRQTFGXE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YEQWPXSCYDJZCSVPKUFPRRXJSVHAEKXYFCITHAEVUZVUNIEDGDBLNXRBBLCQEGFCUMLCAYSJVNSZMSIGJKKREOLRMOAZOUCMQXBWKGCAZTYBWTIHAGIINKPPLHBZXPURJNGDFQPUNDRDOIJMAOMNLYKTYORLFWQJCNZFFHJQ");
    tmp_msg_0.predicate.assign("WXXMYGKYONBKXMZUPCMTLZETEDAQMYUOKJITXMOLVJHSJGUMFNVBOLLINASZEGHTYZVBISTGRCNXEWZPYIQVKHNEVDSXWLPCEVFTBCUIFKXLAKPHHNKP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VVZLWKUPDLUBFVSALKWUPZFINMQYLYLRQHYGXDSXNMQCSEHFBZDPOZKBSALNESJCQFZSBXRFHWTNNROQIECGHWFRNRZVCMMFYVBGSAHZLCTTYJJBKOSTDPKNOXFXYGWIMOMXXXOKFSJEVODCUYTIKZPJBN");
    tmp_tmp_msg_0_0.attr_type = 8U;
    tmp_tmp_msg_0_0.min.assign("BOAYZVKXDNSPCPDNUGMFXWYNFZUMSHZZDGBATVHJOSIKLDWANQMWKNUPMLJPZYXDFZIEISWZSWDVSEHNEKQHWWLOIFBUTTYCIBIKEIPFXYVRPGFWPXUDYQNHTDNXRIEBSPZJEJWQGEKMKJPCAONCBARMXWRFTCALBTEYVIZLCGAORISMKAVSQOLRJQJQQVHRHXRTUKLVFLNCUEYHXTSFRRJOEOYJGMMHCDLQJYFPGGTVCAHUUGBOQAV");
    tmp_tmp_msg_0_0.max.assign("MOAGXHYGOKSDXQHHHMYLWGVOEVFFCJUWERIYDBHZBBHOLQRXEJBXKCPFYFJRPMDQGHUTPVBJNTOQOZNABJTHUBKPLVANZWCAVOCCMJPXMK");
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
    msg.setTimeStamp(0.116047325444);
    msg.setSource(53519U);
    msg.setSourceEntity(166U);
    msg.setDestination(7707U);
    msg.setDestinationEntity(47U);
    msg.reactor.assign("LGIZZUXWPTRQPZKYDERCISOKFMJTDEPIXMTDQHUGMSCGZNHJTZNQZKEOTUCORPPFSYYIVDGIODJSLCBLXLYAZOZXBGBQXSRGOASDVMEMFWYAHTDUKLHBCBJYJIREFRUKNQYWQXNVNAGJFITHNNMHEKINKXJOGGOJWRCSWUAFKAWMUHVWAYUEEQNXXPHDBLJQFVSUVIKRBOJCACQBLDTVW");

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
    msg.setTimeStamp(0.463012223584);
    msg.setSource(37374U);
    msg.setSourceEntity(79U);
    msg.setDestination(19527U);
    msg.setDestinationEntity(106U);
    msg.reactor.assign("NIIGYQUWCVEBVDOEQOEFFDXEWPJNKJZQEZHRALISJJMYCVHWJXWUDONFLJZKUXFARCPJRSCHURXOOZSZNOTRITHDGNKVTUIEPXIPGKQIHTXTCXBZEDBGUUGAULSGENRYQRWLZVTFLJFCNOMPYSPIQPLTMUEFMLRJZHQDDBTCAFNGAJLSCXSRNSQFHOLBWWABZKIVEFQGANHYKBMAYTHYSUDMDMOIVLMPADCWKHWKP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PKTNUVMWCMFEWRXOKKERNBKJQPHYTDPDWQHJYAZISOWHOEQVZSZDINMMIOTGWDCKXTXRATRLDQUUQJEACFSPDHDFUM");
    tmp_msg_0.predicate.assign("YERRRGATBMYCRQQTSKOMKYVLFZWCNNUTEHIFEGXDSOSCEZSJAXUKMDGS");
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
    msg.setTimeStamp(0.559967343728);
    msg.setSource(34577U);
    msg.setSourceEntity(26U);
    msg.setDestination(64345U);
    msg.setDestinationEntity(40U);
    msg.topic.assign("RLKBECTUPBRMMFSHDZRRWJTCXDXGBCLTQFLSCXOQRSGXZVNKJTUYPEDFDFDVOIELDOINNUUBJQXGSXQHSRYTUIVZTLGLMVCPEHPIABGHWAVOUAHZHVGVJSMYEKWUOZQPNYCLRJNPQPDUIRKCTNKKACDIHWKTWOBWXFWJBAFFJYJDOLMZFLHHSPYERAOLMWBTYMYKIICQJACGNVNPXAUWBFDIYNFQZKEEESWSZZQABZVGQXIMO");
    msg.data.assign("PALHNIBSGPUZTFFDYIASMLDSRVXAWKATCXAEWQHNAJPIRCDPOYKHVVECQGAQKHWFYXSZSBBFSBBEFGBUNSPOKMKIZEDFVQWNRHVUYNJMMOVQRM");

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
    msg.setTimeStamp(0.662371536765);
    msg.setSource(7500U);
    msg.setSourceEntity(193U);
    msg.setDestination(48202U);
    msg.setDestinationEntity(60U);
    msg.topic.assign("BHGKNDQSYCIVPMVZDISXNOTLNUASOZIVTSJFMXWSBNKIKNLVNAGYFIUBZHQBNARFTLUWDLWUWFALFEHRTOXZHQINGQDKMKROKXZCJDZPFH");
    msg.data.assign("TBBSMSYWEKVHWXYDRIXBCMHXRJIBGQINZCUKPBLASTOCQIVZJUKFRAMJWGXZIBOLUVAHEYCZFVUVEMZLYRHOLNPXULGJPYMGOYLQFAKSDQWYVCTFODNCNUOFKFGWEWPQZPADDTNRQPINJRSKMRXHQIEWYKRNILZXDGKVFGGNFQGAAKMSCTXLDUPQRUOIGYYNWEALZMCHTVOESQKZHALBHUODOXFUETAXJWJHMBJBFSTVNIHEWPTSECPJV");

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
    msg.setTimeStamp(0.852063311219);
    msg.setSource(37111U);
    msg.setSourceEntity(160U);
    msg.setDestination(28738U);
    msg.setDestinationEntity(7U);
    msg.topic.assign("VIYULUKMJHKHAVZCKSLWRRJZUEPINZNSQUGLXHJMBVXFQNTIXTEDSXXCSXFKSARLCPVHVFCZLEEKGJHYVDNFSBMYKDCUGRVEWQPQYEETFBIYEPSLWOTBDIDFDCARPYJOKYNOTMVFKQOBXTYQDCOZAXMMXIIGLESBHUZWUYVATEAFZQNGDPTJQGAWNCKRZJBPDPIOMNRHZRLOMJBOSPMWQFILGOJWL");
    msg.data.assign("PPWSFZLSOJGSBPYTVWREHYMDWUDCKZKZZZGHTGCULKXPXYRPWDBMTYBMZXFOJBFJPRKKNQNVULHKALMJFSYIDQUGNBQEHNMNQMNTZOWRMYWQMVHSAEQZUADKSVBJOVEAOJUEKLLXVPOWYRGNZVJAOLVTCXHAOYQDBXFJFCEWLEAHXDRAFNWMDSCJJTGQWYICVIRHIZBXVEO");

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
    msg.setTimeStamp(0.907893292133);
    msg.setSource(36004U);
    msg.setSourceEntity(164U);
    msg.setDestination(15440U);
    msg.setDestinationEntity(118U);
    msg.frameid = 205U;
    const char tmp_msg_0[] = {123, 34, -1, -33, 112, 122, 64, -45, -72, -76, -21, 123, -29, -27, -72, -24, 18, 41, 77, 115, 29, 98, -117, 83, -78, 33, -42, 60, -93, 79, -94, 110, 64, -69, -26, -116, 40, 66, 90, -27, -103, -114, 82, -13, -91, 37, 37, 44, -97, -76, -51, -55, 77, 85, -27, 69, -94, -120, -83, 44, -93, 45, -66, -89, 29, 113, -33, -51, 63, 108, 83, -96, 63, 4, -128, 28, 77, -73, -26, 28, -70, -60, 1, 35, -28, 5, 68, -50, -84, -1, -42, -103, 70, 84, 7, 88, -123, 113, -82, 3, -4, 27, 66, -97, 5, -47, -24, 47, 21, -17, -106, -44, -75, -66, 5, 47, 51, -31, 124, -17, 114, -46, 64, -120, -38, 94, -45, 23, -93, -28, 104, -126, 27, -20, -106, 73, -13, 75, -97, 117, -61, 121, -36, 97, 61, 105, 122, 95, 76, 111, -126, 45, -80, 109, -76, 64, 33, 107, 97, 105};
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
    msg.setTimeStamp(0.79740973591);
    msg.setSource(13809U);
    msg.setSourceEntity(135U);
    msg.setDestination(57114U);
    msg.setDestinationEntity(29U);
    msg.frameid = 49U;
    const char tmp_msg_0[] = {116, 19, -120, -53, -13, -61, -111, -124, 37, 122, -35, -122, -76, 21, 48, -122, 86, 50, 60, -88, 5, 80, 37, 125, -41, 79, 72, -126, -35, 126, -35, 59, 49, 90, -99, 30, 0, 17, 64, -88, 89, -36, -49, 126, -34, -68, -11, -14, 22, 106, -79, 116, 88, -73, -27, 61, 47, 87, -1, -115, 35, -3, -58, -74, -6, -59, -78, -71, -33, -101, 45, 100, -76, -84, -128, -3, 7};
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
    msg.setTimeStamp(0.994846623673);
    msg.setSource(36562U);
    msg.setSourceEntity(19U);
    msg.setDestination(61952U);
    msg.setDestinationEntity(137U);
    msg.frameid = 236U;
    const char tmp_msg_0[] = {-37, 114, 47, -76, 15, -82, 96, 24, 90, -115, 13, -65, -82, -35, -116, -82, -40, -79, 57, 66, 108, 39, 45, 89, 72, 1, -89, 100, 32, 5, 111, -12, 67, 69, -7, 95, 67, 57, 119, 48, 80, -110, 58, 53, 60, -104, -99, 48, -54, -66, 98, 87, -5, 8, 100, 59, -122, -77, -14, 125, -17, -16, 34, 125, 9, -31, -116, -71, 97, 82, 116, 52, -34, -35, 96, -123, 112, 57, 12, -15, 55, 18, -94, 56, -91, 17, 117, -79, -12, 37, -47, 117, -128, 23, -92, -6, 62, -30, -84, -75, -18, -112, -13, -95, 3, 18, -55, -88, -58, 125, 63, 65, 107, 40, -65, 123, -33, -24, 82, -56, -120, -34, -116, 117, -49, 34, 77, 105, 37, -99, 83, 59, -78, 40, 107, 44, 60, 64, 72, -2, 81, -2, 93, -128, -90, 34, 25, -92, -59, -2, 103, -82, -109, -41, -53, -46, 69, -120, -71, 114, 19, -88, 97, 107, -84, 30, 119, 76, -37, 0, -123, 17, 70, -49, -6, 73, -67, 44, 65, -66, -85, 98, 36, -40, -69, 11, 94, 19, -110, -24, -3, 66, 66, 5, -47, -60, -114, 9, 34, -35, -45, 84, 52, -92, 63, 100, 109, -84, 114, -8, 98, 1, -38, 65, -10, 103, 116, -82, -119, -119, -61, -95, -24, -13, 68, -44, -25, 86, -26, -21, -92};
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
    msg.setTimeStamp(0.804483072114);
    msg.setSource(51788U);
    msg.setSourceEntity(78U);
    msg.setDestination(739U);
    msg.setDestinationEntity(101U);
    msg.fps = 214U;
    msg.quality = 136U;
    msg.reps = 19U;
    msg.tsize = 249U;

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
    msg.setTimeStamp(0.236451976601);
    msg.setSource(45533U);
    msg.setSourceEntity(237U);
    msg.setDestination(1086U);
    msg.setDestinationEntity(107U);
    msg.fps = 110U;
    msg.quality = 4U;
    msg.reps = 229U;
    msg.tsize = 39U;

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
    msg.setTimeStamp(0.660806141069);
    msg.setSource(42050U);
    msg.setSourceEntity(247U);
    msg.setDestination(64152U);
    msg.setDestinationEntity(217U);
    msg.fps = 50U;
    msg.quality = 228U;
    msg.reps = 251U;
    msg.tsize = 162U;

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
    msg.setTimeStamp(0.597494205526);
    msg.setSource(56564U);
    msg.setSourceEntity(225U);
    msg.setDestination(33468U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.94837345915;
    msg.lon = 0.374668591257;
    msg.depth = 138U;
    msg.speed = 0.528097094471;
    msg.psi = 0.961983722351;

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
    msg.setTimeStamp(0.778751512227);
    msg.setSource(29589U);
    msg.setSourceEntity(241U);
    msg.setDestination(31604U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.443098554378;
    msg.lon = 0.373747293374;
    msg.depth = 139U;
    msg.speed = 0.705718988824;
    msg.psi = 0.994005325416;

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
    msg.setTimeStamp(0.934128882832);
    msg.setSource(41603U);
    msg.setSourceEntity(89U);
    msg.setDestination(35609U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.360593127434;
    msg.lon = 0.739946786758;
    msg.depth = 161U;
    msg.speed = 0.705605543539;
    msg.psi = 0.988419277476;

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
    msg.setTimeStamp(0.635297629298);
    msg.setSource(18040U);
    msg.setSourceEntity(234U);
    msg.setDestination(53227U);
    msg.setDestinationEntity(67U);
    msg.label.assign("PLHHFIPDHPRIBJVEJWAQHCYACORMQVVZIBVMGCYEOOVVUCVXPKSGWQFVEKHBFUXAIYQLISZGGEQRDMYPLTKGORCPJIKXMYTKULEEJMGOGGWHZFUKNYBDMSPZOCIDCNQTHJWBLJPKTLAZUKZZCSPBUXDVWBCMHSGRDHIPEQATFWGMXNEUAYRJXBWWLOQDISNFRSUXN");
    msg.lat = 0.931468582541;
    msg.lon = 0.0902434188335;
    msg.z = 0.292071312063;
    msg.z_units = 15U;
    msg.cog = 0.325638511454;
    msg.sog = 0.67290741436;

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
    msg.setTimeStamp(0.158393446912);
    msg.setSource(11326U);
    msg.setSourceEntity(38U);
    msg.setDestination(17394U);
    msg.setDestinationEntity(169U);
    msg.label.assign("DJKPDLNDUPA");
    msg.lat = 0.116263478062;
    msg.lon = 0.831252921822;
    msg.z = 0.694631759043;
    msg.z_units = 252U;
    msg.cog = 0.657818417824;
    msg.sog = 0.380202790487;

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
    msg.setTimeStamp(0.0584758413829);
    msg.setSource(57957U);
    msg.setSourceEntity(93U);
    msg.setDestination(64823U);
    msg.setDestinationEntity(253U);
    msg.label.assign("FDHTHNFHXXMEUCXIFTMBFAHGUSVPEKXTZVRQMNCNZRYOOYQRLEFQVRAUZVXSHJZHFSBXIUIACVPFAEBFDJBJLTESLZN");
    msg.lat = 0.774958612907;
    msg.lon = 0.779053051945;
    msg.z = 0.278818947337;
    msg.z_units = 118U;
    msg.cog = 0.973765121791;
    msg.sog = 0.528195392285;

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
    msg.setTimeStamp(0.962257384568);
    msg.setSource(4664U);
    msg.setSourceEntity(137U);
    msg.setDestination(21660U);
    msg.setDestinationEntity(188U);
    msg.name.assign("CYAQXOGRLIUFFDRVWREYGBFRVDVWZQCKORJXWLAMSFDGPIEASCTMKNFXWWHWZIJBPCQQZGISKTFAZWKTPWJNPNUNQTKBLEVQMUCJDMDXORPLPJCBYGZAMIXULJZBHVHFPRQJWHMEGFZYAISKSBULE");
    msg.value.assign("YPOUIBKFKBCZVGKMAPBBDBIRQHLZTRJFLTWUHOVZYLDTXXFJLXVZRNWYHMNVRWTDCYFJGBQUXEROSGIFDMSQKPWATWSUQHJJEWUJSEGENBVKZLHNJQDPGIYQKCFP");

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
    msg.setTimeStamp(0.0878891266185);
    msg.setSource(11858U);
    msg.setSourceEntity(18U);
    msg.setDestination(53528U);
    msg.setDestinationEntity(156U);
    msg.name.assign("JGFGCAFRKCXZQLFQPFZRKQYHBCTDECGVSMBLNVUHUBOPJPLZOFEENDGUZKTXTEVHECLRMWOYDLMUVQYIAPYQJPMYQOLAIKFQGIEMGSRAWFBSPOQUYOXIVAOUVWVIMSKRTDIZPNKHHNLSCEIJSCIHWDXBMTUTMXLXKBNZRWJWGWGCRAYUYDAHXLIOTWXTRBZVKSFM");
    msg.value.assign("QSUEEOAOWFECOLORAKJVQBXPKYGVLZPCZXKOQNGMQMOPTLMAWRWIQRHFTSPYFSJXVPZIDRWYTDARDUQLYKZTRADUZRNYSIAASOIPJMWQXINXGPJDEXJMGCJQHIBUMIKNBVLUMTWVDVPAFKHJZZYBXCVYIYK");

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
    msg.setTimeStamp(0.686019581974);
    msg.setSource(13611U);
    msg.setSourceEntity(62U);
    msg.setDestination(34339U);
    msg.setDestinationEntity(28U);
    msg.name.assign("LMOKNFPYXDPCRAVBZTOVFKZJIDOYWFHVHJLMRCBWIAPVUXTDQWKLTWAWIQEXZVOCQRYHNFQVUYGZIJPGEHZKMDSTSURXZJSRFUSLFMY");
    msg.value.assign("KFYWXHKVUISGEQUZYZUSXEBRPBEBGVWORZOMPSDOZEJINZMVVVYONQGDPU");

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
    msg.setTimeStamp(0.849406467289);
    msg.setSource(43259U);
    msg.setSourceEntity(217U);
    msg.setDestination(47289U);
    msg.setDestinationEntity(222U);
    msg.name.assign("USHOBKSTYBGEFXBGVCQCQGPXMXCODIGMSPHRNWVLFCQWVVJMDLWATQPOGLSIVBBNXQOLDHOJBYDCPNJIIPPRY");

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
    msg.setTimeStamp(0.739791736017);
    msg.setSource(63727U);
    msg.setSourceEntity(57U);
    msg.setDestination(55810U);
    msg.setDestinationEntity(146U);
    msg.name.assign("HTVHSNMKMZDDOJATVYXPCQOPWRPHOTNWWQKZLLXBSPTHYMKWFNJNJNRVZDHZSKNCGSNMLTZSBR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FRJBCZUVYQJSMEESBOYLFDSFABOYGCECWM");
    tmp_msg_0.value.assign("HWRTZVSLCMBPWMZINIOCNDVAKXUGKWHDCGEYNZVZIGEDACKHXNORSYHMKWVTCOXWZGXZWULEMFOVBIJKIGFFAKRMUOAQORFGMGLBNHFTPEHPWKFSVPAQLUWEXDG");
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
    msg.setTimeStamp(0.40156676786);
    msg.setSource(48051U);
    msg.setSourceEntity(202U);
    msg.setDestination(62942U);
    msg.setDestinationEntity(211U);
    msg.name.assign("RJTIDBRQPVUTUCVSDQKNVJSVPBQLJBNNZKQOPCNUPWUOBQOKHHTFKGEAMYJYSSKETGAYOXHAGHLAGZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZQRTETOARBOMGZMOIAASJIZHNIFLNISUVTFXSEFANHQEXCIHYDYTZYTEWXLOVQNSZNGXBJPKUMJVKFDVZWKZRBIYDDSVCPPXKTH");
    tmp_msg_0.value.assign("GBZFLLHLRDBAGDZEUFMOUCRJSOCKGXMFOWLFCTHKSTVYFEEVLSZUBHAVVLIGORGPTRHQBFSZDDVSXIZPZNFXIHRRWCKZKUTEOPIPZQMIFDYCQALWODMIMCORAKAPIWYBSEMHTAWXYTLKJWYSTGKQBMMROEBGKJNVUYVNZAXJQHQMLIECHNAJGDZGJTWBYXHEYWTJFRQEJPQKOEHSDRUAQP");
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
    msg.setTimeStamp(0.244882250791);
    msg.setSource(7980U);
    msg.setSourceEntity(124U);
    msg.setDestination(20830U);
    msg.setDestinationEntity(71U);
    msg.name.assign("HTCAQAVQCERUZCERAGUYTFPBRFOELJTBQPZDQBCIZXGWYLRHSHNEDUUAKQPFQSSYCYLWTCUMOQXOIVHGDFATHNEWZBNBVXUYOCIINGUUXKJUWKVMXTLWSIJYLYFXJHIZAEDMFTJLAGVNIRWAKPJXHSJPVNKEODBWCQIWQRKFRPDEOMSWOUMPZTNYKTNYGBJWZOSBDGSCSJRFEFZAVGZOIDM");
    msg.visibility.assign("TWNEHLRPUOJZNYCZOXMCQDDCETHEJRAOBJVBLASCRKXIHSOKPIXMWFUVVPIXMYOAVJPKGFIJXFXNPCQBNYSEQFTBSIJNCMHGDTPDNLSOKZAADRSDIEQJYUVHOTVMCZMVRYZGLIJXTY");
    msg.scope.assign("LRZDVWVZAOGGJHMNQUONOTKRLYEFMTPOZXIQBVPTANSMVVEZRWIHKCGXGBYRUOHJSPLMZCIUFQOUGBPNIOSACNTCJQJMPXIMKRMOPJCJXYHYIBKFSGIQUWRFDHSPVKZODMHETHHGXXQTQLURPETWCBNLQMLFKFWWREBFLXEYYYRDYDNXLAZFEKHWSEJQKAKDABSCKIJDJGHQUVFJZYYESRBNCLXCPTZUPVDVDZDVISBXTESOTCLAAWUMU");

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
    msg.setTimeStamp(0.236058564754);
    msg.setSource(26093U);
    msg.setSourceEntity(7U);
    msg.setDestination(38509U);
    msg.setDestinationEntity(137U);
    msg.name.assign("ABMLIMJTTCEVKGOXPQTSGAQP");
    msg.visibility.assign("OOXERIPRCXGRWHWLVVVNMWBCSTRIBWGAQCGSNMKOAHRCQZOSMVGBLTSJQZRFTBILAIDHULTZFYKYGEOMSHKVINDSDUUTUBXUQMVTTCCDXEJTCYEOHDOFMAEXRFGEBQSXUAKOFPMJASALCRYINQJFJWMRWNFLOEGKDLUKDINPLBWYBXJHQNMJFZJSQPYEIHFGBODJTCZJIQGVBXWSMKVUKEA");
    msg.scope.assign("HVVNIYTIXYPMOATDPKAAYZPBVDRUQFUYXMYBNPDTZRSNLBMFZUEUBIZEKKFFIWJGRTUYGEVCCHFJTOUBGQLFQLMCOLMFKIXWDWIQXDXLFEUQEFVTXGIABBYHSKHARGJVJJEMCZCHCSZKODALECWXWNDWAVAZPDQMNNWKHESWXMRUEZLHSJRLXPHTSRGPUXIYAYQNCUPKPCGJFLMBLAKGVBTZJDVOSJGNPWIYCQSSNHOO");

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
    msg.setTimeStamp(0.522293996791);
    msg.setSource(19519U);
    msg.setSourceEntity(169U);
    msg.setDestination(50368U);
    msg.setDestinationEntity(152U);
    msg.name.assign("WBCDNZMAFOWFSBGITJYDZKPVSTCAJEXOVQXIJTHIGNJINHFTORCJZBMMOSKRCKHWVUYBRIPMKQDLNFPCESVGEZSRCGYMRBFCSYZIVVAHBZSPHJPNXGOXKLUFZMYCYTQPXRUAVEKWNDSUDRLYGPLWCHBWOEUUWZDEMBIGXLYXDOTNTGRDFYOQEAVAWPPZNRQMSFOYGXPFLKINZHD");
    msg.visibility.assign("GDFISROBGXVYSAPUPWVAMUTEILAJHTIBRZHMJRJ");
    msg.scope.assign("OGAUBWWXAKJGCTWEJQXMJDPXRWBQTJHIXYPMJARCWBCJEZMXWHLDXKHSIEWXHMVOHIYNLLGFRFXEHLZHVGPKGYBZJKRBDSECAPFHDUSFPBZDLPGOCOWUNGMZFLTIFNVEZOEFVGBZHOQTLBCACEUKGQUQSMVTCURCREYWPFIKNFVWBUMTMTRPASNMSIYQRSYJDVNKAUKNODI");

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
    msg.setTimeStamp(0.833988751068);
    msg.setSource(26166U);
    msg.setSourceEntity(209U);
    msg.setDestination(64711U);
    msg.setDestinationEntity(191U);
    msg.name.assign("BSSCBUDDKAIWTLVRPJXPFNAMEAIAPRMCJYEXXATNECYDEEGHIVTEAXFADNWBTBLCZQGWUXIWFZSLYVUGTOJTHQBHZEWRLOMWZNHZLKZJSRGJKYBPVHNNCYGIRJCMUYBSPKXVYLESAAOMHVDIGXRCKKUOZPPMJNOVFZGQZDQUSBNRQFPUDYVXNIOMH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HQBLSYDIHJQHNRMZVAOQXPGGCPKMRPYIQZGYRVDCYJRUIOWONSEMNZTSNCRCMMUYRCNTDKWOFJKBAAHKSYGOMIXVEHCUXSUBFWONJEMOZYPDWELIJCLTAXBNDDHEJMGBJPKPGNMLUTOXQPAZWESVJSFQYVPSAKQTSDLLWWKUCXRZXZCNADXZWAGFYKFEQKWHDBTFJUVFVLQVTBUIRJGIEBOKILQLAPFUDCEBIZOXBHFG");
    tmp_msg_0.value.assign("VQIZRBMTAEMKNOTOPYZYAECDNBIJSQQVGGOAJYTDZEXGASACEDIELTDESWOWPKLJOXLBSSQIEXYPMMXEVKKHHCKFBDDJKLNXLOCB");
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
    msg.setTimeStamp(0.563368354347);
    msg.setSource(41912U);
    msg.setSourceEntity(99U);
    msg.setDestination(31193U);
    msg.setDestinationEntity(96U);
    msg.name.assign("INLEYNEUZVBOXPBHRVYVFMKFSJGHGXMNCUMRRAFVARERRPDBFFDBHDWDIPKDIPFGUIBLSPSMVVQTHWXAGADTBIIEAOWCGWYHQUUYRNPKISQPOJKWAZVOJXLYQTCHKNSFXEPPJXDVSZUTGLOTCTMKZJLNWSRYLEDOJWBAMZTMHECCQMQNQQLSYLGXEBKRLZNOFJHIILGXKHYNNAJYIHAKCSBFVYBKOUWWDCJPWAQDSQUOUXXZUFVTZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NGLXHRILGUDZEOPVMFOIZOTLTJIRVUNZWXHGGMSNMXJGVUWAHJERENYRTOFVEBIZUAALFNTUYTBAZIPMRRKHZHLSVIDYOJSOWGORKPCODVUYLRUPLPSVKKVATB");
    tmp_msg_0.value.assign("CSZRYUJPYSQNFOHJYPPTDHKQITIUSFWJDSHMTKINDJDDGJCUGYQNSHZZFIXLQVSLLXOMYRABXGUBEWXWDQDPVKRCLEKMWLYOPVCIZFTZAMVLVPAHPBGWXZIAQWFWKKPNVIVRHGMCOGXTENKGYTUEGIZOLJBQOJOMJEECRBATFOIUSTRVPTFNDAYBEKR");
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
    msg.setTimeStamp(0.989183337432);
    msg.setSource(20138U);
    msg.setSourceEntity(115U);
    msg.setDestination(4823U);
    msg.setDestinationEntity(51U);
    msg.name.assign("BUBFLNSLYTZDMVXAAHUCPRUESKUPAQYOQZZJPLECWEZHEPTIIGYAKEWRTTVFSNSADLSRMCAODXHQCHKHFWSFDMYURKVKBAOTPDRTSVMNFFRDUGEIRUHPITZJEDCNIVBBHAXMBPTQMNQDLOSEBIXKJNFLCGKXYOKSDPPQLJQCCZJJMXSGPNXWRMWWDOZOGNJIOHZIJGIUZYA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HRGNAXCQNUOUTCGDANBWELZYPIWBGQHIULPOWWHDYPTDLGUWCNPLUNTCCGQXYFHOQUBVXIFAAEWMSPEOUWJXRRZTSNMKZEAQYMSVZQVKDSTERCOCKBYXOEYCAEBSDPXLQYKKBFJMFSJXIWTJZQQRJDAPRFNMWGFULUYZAIHQIOVMAZJOUKYIXBNHGSLVGRTMTIEVIHZHRFFTJDHSCLXGYLJSEKMASVIMJDZPM");
    tmp_msg_0.value.assign("UZUQSCBZJKHVYJRWRCBQJULFIPQYXNNODFMDBKHOKULBCVBWTAGPXHMJVYZDRXIUMKAPVLYGHCPAYHSAEEJNONDQFGFVIFHHIWJPLCYCCYFJTBRCRKUMKPXGGXKMWMNIXMTLXOOWRTLSMDMCOTPUUOYDRLKQATBFLQFXESZEXVSHSPGIS");
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
    msg.setTimeStamp(0.0287019132152);
    msg.setSource(7249U);
    msg.setSourceEntity(241U);
    msg.setDestination(40609U);
    msg.setDestinationEntity(104U);
    msg.name.assign("ESYTHVOKPRZPKISRCPEXGRQDHIGMQJTLUHJEGRJPCKJVZXJLWMACOHXUOKMPIFYXHETUBSAZOXSCFWSI");

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
    msg.setTimeStamp(0.435616934672);
    msg.setSource(60422U);
    msg.setSourceEntity(137U);
    msg.setDestination(56769U);
    msg.setDestinationEntity(151U);
    msg.name.assign("KDOBCBSVXUQBOZSHYHELYVRYOAKFFVBORGUNGQLURQMZQTGIHBCBACQXDUYQVJNLIRTRVHNJYHYWXJFIBLWDZBYGWPFTCKNNSJAINUTNXVRSPLDJARCVYMTTNEZCEDQLFTZZFXIESZSKWCWVPDHIXHOYOIXKUCSTFPFUPBZLHAXJELQLSSUFWTWAJOHXDYCQNSIOEDWMMUIOWMPUXREEGKZJPIGPHEWAG");

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
    msg.setTimeStamp(0.589478092801);
    msg.setSource(63330U);
    msg.setSourceEntity(185U);
    msg.setDestination(13739U);
    msg.setDestinationEntity(200U);
    msg.name.assign("NOXZJGQKYETRYHMAJDFLGTRLVXQXTEWEKNCIBVOCDWFYPEHTJNWVPZDUDSQTCUBFXWDYGJKSICFRGBISHBXAJCYSSLWLKQZSRIUOFCBOGFUEQPWZLPAIDVOTWUAQOJCTUOZLKWYSDOREXNYGTPXLMIPXOQYPKUFSAJNMRSRZBGSDLVAAMHHVWHLFMZRGBJPHYIMZNDKVWJDGBANAQLVKXKRCIMFNXUHAEHMUNBVEIHJMCFPPZQUBTOCENY");

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
    msg.setTimeStamp(0.469301667132);
    msg.setSource(51327U);
    msg.setSourceEntity(67U);
    msg.setDestination(43804U);
    msg.setDestinationEntity(111U);
    msg.timeout = 978352797U;

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
    msg.setTimeStamp(0.391258435886);
    msg.setSource(53383U);
    msg.setSourceEntity(42U);
    msg.setDestination(37617U);
    msg.setDestinationEntity(180U);
    msg.timeout = 1547829853U;

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
    msg.setTimeStamp(0.795388374984);
    msg.setSource(49662U);
    msg.setSourceEntity(242U);
    msg.setDestination(31478U);
    msg.setDestinationEntity(164U);
    msg.timeout = 293240002U;

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
    msg.setTimeStamp(0.679901243302);
    msg.setSource(35040U);
    msg.setSourceEntity(121U);
    msg.setDestination(65151U);
    msg.setDestinationEntity(236U);
    msg.sessid = 3311742102U;

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
    msg.setTimeStamp(0.0545099096195);
    msg.setSource(16165U);
    msg.setSourceEntity(195U);
    msg.setDestination(58972U);
    msg.setDestinationEntity(225U);
    msg.sessid = 3402073676U;

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
    msg.setTimeStamp(0.40081319684);
    msg.setSource(34025U);
    msg.setSourceEntity(32U);
    msg.setDestination(22015U);
    msg.setDestinationEntity(43U);
    msg.sessid = 1440172847U;

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
    msg.setTimeStamp(0.121449865803);
    msg.setSource(38116U);
    msg.setSourceEntity(165U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(73U);
    msg.sessid = 3480168756U;
    msg.messages.assign("IODZWEWIAUDTGJYYEKXLJWSMVGVADOUOANIOOOFSCTXNKBITGSXKMYXRXUZUNJIEMFIMFTVAKWXCQRBFNLAUZTAVYQHTBTMPVZJGZJCHPKEFCVKIGBDSPQSIWAMBIKCPLNGUJLHEADCXSVWRRXZPJGUROXHLDJFYZHCLPNQCJSQYKUZHMXFPRYEYCMWEVNZQKNQGBOBAITSHDWOTPPWHETUHNDLLKUBDYNARSEBFRH");

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
    msg.setTimeStamp(0.578751624509);
    msg.setSource(38141U);
    msg.setSourceEntity(65U);
    msg.setDestination(49097U);
    msg.setDestinationEntity(113U);
    msg.sessid = 461029813U;
    msg.messages.assign("BHYUESLTGYVJTZITPMCHPUFAZMRQVKHKBIVXPCOFNHCLGHMFBIBNZMFRCITYJJOVLPIDBOELEAXUQQQZMHAWCNIQAKYYRIGFNXHSWRGQELTZXGSYTAUOWQAUZJHEUXMSGXIPUIOXRHVKERNFOPBDUAZM");

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
    msg.setTimeStamp(0.82784978679);
    msg.setSource(59731U);
    msg.setSourceEntity(178U);
    msg.setDestination(48125U);
    msg.setDestinationEntity(195U);
    msg.sessid = 2993733471U;
    msg.messages.assign("JHUQPOCPMMBQPIRGWOXPG");

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
    msg.setTimeStamp(0.355503787587);
    msg.setSource(4727U);
    msg.setSourceEntity(183U);
    msg.setDestination(1787U);
    msg.setDestinationEntity(131U);
    msg.sessid = 34450592U;

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
    msg.setTimeStamp(0.461674760948);
    msg.setSource(59102U);
    msg.setSourceEntity(95U);
    msg.setDestination(64405U);
    msg.setDestinationEntity(72U);
    msg.sessid = 3432640251U;

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
    msg.setTimeStamp(0.497332068471);
    msg.setSource(30826U);
    msg.setSourceEntity(213U);
    msg.setDestination(21572U);
    msg.setDestinationEntity(63U);
    msg.sessid = 424455354U;

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
    msg.setTimeStamp(0.789787002221);
    msg.setSource(48626U);
    msg.setSourceEntity(217U);
    msg.setDestination(12485U);
    msg.setDestinationEntity(129U);
    msg.sessid = 4036046590U;
    msg.status = 17U;

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
    msg.setTimeStamp(0.0621799020033);
    msg.setSource(7435U);
    msg.setSourceEntity(63U);
    msg.setDestination(42935U);
    msg.setDestinationEntity(117U);
    msg.sessid = 602836432U;
    msg.status = 65U;

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
    msg.setTimeStamp(0.754694116112);
    msg.setSource(24899U);
    msg.setSourceEntity(208U);
    msg.setDestination(60472U);
    msg.setDestinationEntity(56U);
    msg.sessid = 243971136U;
    msg.status = 251U;

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
    msg.setTimeStamp(0.542692473436);
    msg.setSource(23030U);
    msg.setSourceEntity(191U);
    msg.setDestination(18185U);
    msg.setDestinationEntity(104U);
    msg.name.assign("UHKRRDJJCLPRVENOALFUGTQEWAVMUMYGZHWXUDP");

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
    msg.setTimeStamp(0.150977883248);
    msg.setSource(51809U);
    msg.setSourceEntity(197U);
    msg.setDestination(20926U);
    msg.setDestinationEntity(198U);
    msg.name.assign("HUCNVKDHWPEIFRGSACQUTBYTQYJDEGQTPEMDZMKFMQDLIHZAKRGZLHAGWHESLHAMRNAUWTZRKGGORIIELSBUFFXIEMDGQXXTNCJNBTISKUNYXWNAYZNQGKAKFIJVBOXCSETYBJJCMDGTQOHFFIQLMVWPCSCJBFKCPOSVWNWRBOVGEMZPQXWPSICHPRJPYUZXYROAZJRV");

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
    msg.setTimeStamp(0.0558217295861);
    msg.setSource(26913U);
    msg.setSourceEntity(254U);
    msg.setDestination(8844U);
    msg.setDestinationEntity(113U);
    msg.name.assign("XZCDZYGVZAACQHEWAHNPNOMCRBKQBQCCKINMCXCTTMUYDIFHLKUWRVDNJOATPVJMGGEBQILWSZHSMMAWGSZBLAEKCBJPNGLYZGDWGSEPZHJEAOJFLWKBWUFQVBNFETUBLROMHDPDMKWFNDONRQKUAMWQWZSSXEJAKYUTEDDMLPILYKYRSPIULOVYNRFXBDXPBPPVYOOVTHTRYEXQFCUNKIFTGRJHZJOXSXXJLIXUQYHRSIOUTVT");

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
    msg.setTimeStamp(0.761757540841);
    msg.setSource(28266U);
    msg.setSourceEntity(220U);
    msg.setDestination(3610U);
    msg.setDestinationEntity(145U);
    msg.name.assign("LNDQMNTBEDBQLYPEHINDWTUGLSAKQXXNCBFFEMOLGUTZNRPJPHREXGXATYZLEHU");

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
    msg.setTimeStamp(0.0477069796426);
    msg.setSource(7145U);
    msg.setSourceEntity(37U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(234U);
    msg.name.assign("ANAFVKJYDHJWRZIIPSHQGBCCEOZWYNIBTV");

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
    msg.setTimeStamp(0.363182963227);
    msg.setSource(62610U);
    msg.setSourceEntity(123U);
    msg.setDestination(38462U);
    msg.setDestinationEntity(96U);
    msg.name.assign("FZWZXAPTNIUIFKHHLPHSFMIWEAJVIHHSPCNXOYQETMYRGBKDLTQRYGKSGYQESUBQEEXYKMJAGJGYZDBJOUTCAVCDKPLMAMJBRHTDRLNZMYNBMQILWCVXSFXARVWLQSGZQLFZR");

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
    msg.setTimeStamp(0.345001727503);
    msg.setSource(23177U);
    msg.setSourceEntity(103U);
    msg.setDestination(8967U);
    msg.setDestinationEntity(75U);
    msg.type = 236U;
    msg.error.assign("KWLHCFRSIPVTQURCPCGNRZFQLNAXALHAIKMBAOUUPPKZHWGUAZTBPFGGXCMFXBAGQMOMXLXITVLEWEDNDTQPDWAGLVMYZDIDICPEQWZKSZTLTDJMRMQHFQNFVJYEYBEHHSUDRBCUVTRHNAYCBWYJJMVCGCWQTHTEKZIPMSEJFVNHWBQNNYEOWYYRNXJUOOKHBTFAFSDJOIJVCRUSSAVJUYFPOGRXSISORPJZDGKDIMUNGBXOXQWZKB");

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
    msg.setTimeStamp(0.405850350553);
    msg.setSource(21573U);
    msg.setSourceEntity(3U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(244U);
    msg.type = 32U;
    msg.error.assign("MUKGJFKNHXHSBIOHUKCYCIFKLDNQUUOGTBFOFAKXULWHMPTENZTANRATBZMTYNHWERIQTVQDIVXCUUWZCDWIRXM");

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
    msg.setTimeStamp(0.704697857573);
    msg.setSource(40437U);
    msg.setSourceEntity(33U);
    msg.setDestination(55840U);
    msg.setDestinationEntity(17U);
    msg.type = 218U;
    msg.error.assign("EGQKXLGOVXAQVFHSKTVKDSPYACOHETMLYY");

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
    msg.setTimeStamp(0.475195071891);
    msg.setSource(15699U);
    msg.setSourceEntity(111U);
    msg.setDestination(63758U);
    msg.setDestinationEntity(217U);
    msg.seq = 58510U;
    msg.sys_dst.assign("QZNLIRVQLWXGTAYFWQDZHVLFKLGBEEDROTNIKS");
    msg.flags = 20U;
    const char tmp_msg_0[] = {-32, 72, 65, -119, 0, 35, 61, 41, 115, 21, 117, 3, 42, -76, -28, -12, 65, 27, -86, -38, -76, 14, 120, 87, 92, 18, 89, 92, -123, 13, 56, -100, 108, -47, 119, -11, -36, 126, -52, -54, -29, -19, -77, -32, -36, -50, -39, 12, 83, 103, -98, -97, -27, -57, 36, -91, -122, 57, -127, -94, -26, -84, 8, -44, 16, -88};
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
    msg.setTimeStamp(0.527895091003);
    msg.setSource(56540U);
    msg.setSourceEntity(70U);
    msg.setDestination(39013U);
    msg.setDestinationEntity(57U);
    msg.seq = 45046U;
    msg.sys_dst.assign("CXVATJFGZCBCAVGFIJFHJYTJVRLQKWZALVEHNMOCEIPUORHKUWQOVBFSGEFIUDCZDGQHYBCXODKXLIPIPEGANUYAKBUWPMAUDENIUWSBQIFASSWJOUDMYQSGOLTKQLDEVDDHGHHPYCZNAKLLXN");
    msg.flags = 213U;
    const char tmp_msg_0[] = {47, -33, 39, -38, -88, -51, 0, -47, -46, 99, 93, -91, -29, -124, 37, -29, -126, 114, -99, 13, 57, 78, -80, 14, 123, -29, 31, 39, 105, 7, 79, -36, -126, 58, -45, 91, -79, -101, 49, -45, 109, 102, 98, -51, -64, -21, 78, -102, -41};
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
    msg.setTimeStamp(0.292361808937);
    msg.setSource(19090U);
    msg.setSourceEntity(122U);
    msg.setDestination(62056U);
    msg.setDestinationEntity(90U);
    msg.seq = 50283U;
    msg.sys_dst.assign("WXQPFZEZSCZCQSQULABILJBOIZEIRWDCJIWTRUWUOVHUKDHBGJFKEDXVZOCVPUKRZLHSCEATZWMXYLYDSRNPJVAWYTGCRMEIFKFLNOOGCVEOFBNYPTONJSBMWNVQSYBGHMXNKAPEPQFAHXAVSPNZUQXEIXRHAQODUIAGWUFCTQLVTQYJKVYEBMMBTRPXRILAJOHYCMAQDDFMKGDTUPDSZZTWVGNMMGKRIWHEYGRNSKXNFTKLF");
    msg.flags = 175U;
    const char tmp_msg_0[] = {-85, -63, 72, -106, 96, -18, -82, 2, 0, 17, -87, 105, 119, 39, 42, 120, 20, 21, -95, 69, -71, 15, 0, 122, 36, 103, 91, -67, -125, 120, -82, -111, 99, 34, -34, -40, 109, 86, -107, 100, -18, -28, -49, 90, 60, -24, 98, -16, -43, -21, -103, -41, 7, -114, -112, 55, -74, -113, -80, 58, 114, 56, 33, -111, 66, -57, 67, -3, -64, -90, -40, -48, -16, 115, -66, -12, 99, 97, -104, -96, -89, -16, 91, -35, 103, -99, -64, -69, -30, 38, 124, -109, 68, -63, -16, 90, 38, -31, 30, -100, 62, 89, 105, -32, -87, 75, -50, 51, 37, 33, -68, -44, -106, -32, 40, 89, 41, 74, -66, -30, -55, 1, 17, 7, 96, 34, 101, -33, 72, -107, -21, -118, 91, 25, -62, 62, -57, -111, -122, 121, 115, 124, 87, -60, 20, 1, 12, -12, -87, 78, -56, -34, 59, -94, 46, -109, 108, 96, -25, 113, 89, 11, 39, 113, -9, -58, 104, 86, 85, -79, 41, 88, -29, 61, -37, 106, -28, -48, -117, 54, 20, 108, -11, -70, 86, -49, -100, -92, -80, 25, -87, 93, -122, -21, 7, -27, 97, 124, 63, -19};
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
    msg.setTimeStamp(0.901130422375);
    msg.setSource(54760U);
    msg.setSourceEntity(31U);
    msg.setDestination(56163U);
    msg.setDestinationEntity(133U);
    msg.sys_src.assign("WURURCARSVADNYVXTGWXJWPFPSQDV");
    msg.sys_dst.assign("SAUAVYEICGOYMVMWFMZKRYMNDEZWQTYXUOXZBHPKVSPIPYBJBWNGARJKKZHMGRKOJDMIETQSXWYTMAJMEPCHBSZFRBJVOLSHHMYXYOTDEDZDLCBXHTXJGPCRGVNCPROEKTSIJUNWCRHNGXI");
    msg.flags = 160U;
    const char tmp_msg_0[] = {113, 38, -106, 87, 101, -44, -126, -127, -31, 32, 117, 123, 44, 4, 36, -19, -41, -31, 42, -67, -54, -71, -16, -53, -119, 103, 47, -36, -8, -11, -108, -102, -73, 103, 46, -116, 78, -90, 42, -87, 10, -3, 54, -15, 32, 53, 16, 109, -29, 38, 97, -18, -44, 46, -79, 77, -29, -27, -122, -71, 104, -8, 30, 105, 18, -21, -48, -25, -27, -21, 73, 8, 39, 21, 85, 107, -83, -40, -59, 107, 57, -29, -79, 18, -128, -40, -44, 23, 94, -107, -35, 26, -35, -1, -57, -41, 99, -42, 76, -88, -12, -79, -122, 105, -110, -36, 81, 1, -88, 3, -8, -28, -80, 74, 93, -86, 67, -110, -39, -55, -34, 26, 106, -88, -87, 11, -102, 76, -65, 42, 13, 92, -95, 89, 8, -105, 104, 113};
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
    msg.setTimeStamp(0.819511683359);
    msg.setSource(23747U);
    msg.setSourceEntity(106U);
    msg.setDestination(63657U);
    msg.setDestinationEntity(177U);
    msg.sys_src.assign("GBXJBLYCNUNZYRIRIPYMFKQTLAUZRPRPTRNHGRIIYSMUIKIKEHHYJWYOQRZAQNNQEPFZAIHCNXGIGXDOKFCJFBVSRXEBKRHLZPUKHRHXOWMMXNGFCTOLUVODCIAWNCDF");
    msg.sys_dst.assign("IFYBPKBYIDINTGSNQNQZZWVWKXJJMFTVPAUSIKKMODYJSGUZCAYQOUJVQMDQCGEKGDDKWPNUECEMSJCXLVATJSQQVBZHIPDYMRAGGVRJMLSNOFTPEXPGUPEYFWEHTWXHUOXOTYFBANAHJFQBHAOCRFOHMLUMQBHJGTOYDOIIBWRDPQCNTCINRKGUJSIMZLCZYTXOEBKLXAHVSAYWCUDXBRPWSBFWRHERGFEKURLKVZPZENLZICLNRHXS");
    msg.flags = 69U;
    const char tmp_msg_0[] = {-115, 1, -18, -125, -19, 37, -1, 45, -82, -105, -98, -48, -119, -40, 84, 63, 43, 105, 26, -12, 60, -19, 25, -47, 63, -70, -113, -61, 82, -89, -22, 102, 104, -50, -40, -94, -82, -79, -82, -103, 4, -55, 21, 1, 37, -5, -81, 93, 81, 22, 55, -67, 126, 88, -3, -30, 23, 43, -119, -61, -82, 81, -6, -77, 54, -25, 50, -17, -18, 45, 116, 89, -56, -55, 23, -40, 94, -66, 91, -57, -74, 56, 126, 63, 24, 36, 43, -98, 60, 34, 116, -48, -89, -30, -52, -99, -79, 126, 40, -64, 74, 30, -98, 102, 56, 74, 99, 27, 80, -92, -60, 26, 118, 100, -84, 93, -104, -93, 15, 37, 1, 94, -31, 12, -17, 54, -86, -28, 24, -35, -91, 107, -21, -4, -110, 1, -114, 30, 117, -128, -72, -61, -57, -35, -124, -116, 48, -128, -50, -102, -87, -64};
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
    msg.setTimeStamp(0.522312685689);
    msg.setSource(34791U);
    msg.setSourceEntity(135U);
    msg.setDestination(52442U);
    msg.setDestinationEntity(119U);
    msg.sys_src.assign("YQBCRNJOKHDRYNTKXJLGRXUANMFKIEBTAMBIWLZBHBIQEDNNTELRUBWFCGUEVPYTTZQOSTRPZYFZKPPPIOEKDLBSOOKZZCLXUIFREAVPNYVIAMGNFRDUVDKSMJSAWAACSWQZUGLLHYCUVCKGYCXRHGHDZWVTYSQRKJOYQYONGNUHCJSOQZZAMOHIMPAFLEE");
    msg.sys_dst.assign("MJYSWODUELOXKLCKLWREPVFDFQYRRVHNHJJK");
    msg.flags = 227U;
    const char tmp_msg_0[] = {-49, -37, -85, -124, -27, 31, -98, 17, -61, 61, 18, -108, 109, 14, 76, 25, -74, 86, -10, -70, -48, -106, 122, -26, -111, -39, -63, -8, 63, -120, -87, 109, -28, 20, -31, -47, 86, -110, 74, 67, 80, 108, 37, -29, 60, -70, 44, 78, -22, -49, -37, -9, -102, -128, 81, 64, 96, 33, -63, -60, -87, -7, -85, -117, -26, -47, -88, -100, 121, -42, -10, 91, 95, -3, -68, -73, 95, -127, -64, 89, 119, -98, 22, -45, -113, 76, -57, -95, 103, -1, -24, -86, -77, 3, -28, 106, -1, 122, -70, 58, -116, -80, 15, -124, 24, 71, -9, -88, 69, -39, -37, -55, -1, 57, 29, -55, 15, -68, 1, -123, 119, 87, -71, 97, -121, 114, 12, -89, -15, 6, 55, -108, 0, 1, -22, 119, -35, 38, -3, -38, -96, -71};
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
    msg.setTimeStamp(0.125432555928);
    msg.setSource(62937U);
    msg.setSourceEntity(25U);
    msg.setDestination(25818U);
    msg.setDestinationEntity(200U);
    msg.seq = 57954U;
    msg.value = 243U;
    msg.error.assign("WGTNKMKWDNKHPAFDORAIWGIWEOTWBUYTXIOQDHJZGGXGTNDSXZVQMSZRJEYOVCHEGICSFYLBLSEBWFLMZZQBAQSCLEDTFTBRGOKAVWWRNXQZQCAIUPHDKCIOAHYZZXICYNXAAMNFPCVHHCLVOUANKDJJUUOJVBEKYQHXBBQESTQSFKSROIPDJPPSURUBJPVSZTNRVDHGLRLKFJHYI");

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
    msg.setTimeStamp(0.0618825866708);
    msg.setSource(53097U);
    msg.setSourceEntity(42U);
    msg.setDestination(56638U);
    msg.setDestinationEntity(28U);
    msg.seq = 57501U;
    msg.value = 161U;
    msg.error.assign("ZOJPGYAMASKZDFQEILMILPEZXVSPUVUUKTCFQXOBRLIBSBFDKTWUEDKFXCZGBBNIJMDGMIYWXDAAFQAYGNZNN");

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
    msg.setTimeStamp(0.0766004224152);
    msg.setSource(28673U);
    msg.setSourceEntity(173U);
    msg.setDestination(32276U);
    msg.setDestinationEntity(42U);
    msg.seq = 5294U;
    msg.value = 247U;
    msg.error.assign("DBURGDPEKEZQOZIKUNDXHJZXHESDVLEJKXQMJWLRYIANHEODCFVYJPFTRQGGZWDOWGHFYHVKQCXWAATPINJHLBGOPXVAMRVXDVYMENESRXZCHUQLUIKGKCFCISSVCLNFTBGACIGSUTMBWKDMQTWOYJQXDAULECNFLYCWRIPRJQKUFBSXPAATTBKWADZUOBZHIMTLTQRYGOUFYMPSYQVXNYJWJBGCZRONRAMUJHFZBTV");

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
    msg.setTimeStamp(0.211406388328);
    msg.setSource(29376U);
    msg.setSourceEntity(4U);
    msg.setDestination(53883U);
    msg.setDestinationEntity(12U);
    msg.seq = 39483U;
    msg.sys.assign("KTEETPVLHFYIAKXAJMGEOQOTADNIGDCIJIYACNEXULXOUPNZERJGPUYYTJFUVBNGQGPWUEXIWDPCWDHPXYIKTRXQVSFFWVRWKSLJCZHRQGBKABUXRSOAYXUSCIZQVZSBOMGKRLVRZUDORCNHUOPEFLITOAZBMKNMIDSKIQNCWMWYSVHHGZEMTNTQEPSLTQBNFCNYQK");
    msg.value = 0.197688737624;

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
    msg.setTimeStamp(0.44930735047);
    msg.setSource(50307U);
    msg.setSourceEntity(49U);
    msg.setDestination(22271U);
    msg.setDestinationEntity(87U);
    msg.seq = 39436U;
    msg.sys.assign("PDVNCQXUQMJKWAQFMHELLTEXFSJDHSHIYVTADJSXPIFTMNAVLOEVOLNKYBYNWTZYWHJHTNJAJXMWPZNRUJGICEZCEOIKLJDUNCTKOIBBCOLMXKMDCBGGZZKSEVUCGZFTDJUWYHLKASMTXTGCAENYZZRRAPEWHWYIUECARSMAFGKVSPUG");
    msg.value = 0.628556442442;

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
    msg.setTimeStamp(0.227205859198);
    msg.setSource(36796U);
    msg.setSourceEntity(57U);
    msg.setDestination(24394U);
    msg.setDestinationEntity(216U);
    msg.seq = 16079U;
    msg.sys.assign("GNZGODIUSCNUDRHLKLKTBHRPSGWAFYQCWYNSPQ");
    msg.value = 0.794126755118;

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
    msg.setTimeStamp(0.875614868207);
    msg.setSource(35268U);
    msg.setSourceEntity(208U);
    msg.setDestination(47467U);
    msg.setDestinationEntity(30U);
    msg.action = 101U;
    msg.longain = 0.431285852929;
    msg.latgain = 0.731188709214;
    msg.bondthick = 1028352337U;
    msg.leadgain = 0.623060711957;
    msg.deconflgain = 0.148903287563;

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
    msg.setTimeStamp(0.0794799092029);
    msg.setSource(23661U);
    msg.setSourceEntity(120U);
    msg.setDestination(62356U);
    msg.setDestinationEntity(14U);
    msg.action = 46U;
    msg.longain = 0.849961844843;
    msg.latgain = 0.853112263206;
    msg.bondthick = 247340188U;
    msg.leadgain = 0.315893916613;
    msg.deconflgain = 0.0665989308753;

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
    msg.setTimeStamp(0.811338054542);
    msg.setSource(53865U);
    msg.setSourceEntity(82U);
    msg.setDestination(47853U);
    msg.setDestinationEntity(46U);
    msg.action = 79U;
    msg.longain = 0.0293565663254;
    msg.latgain = 0.395511788141;
    msg.bondthick = 1441481332U;
    msg.leadgain = 0.143978130852;
    msg.deconflgain = 0.195533131774;

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
    msg.setTimeStamp(0.854486146334);
    msg.setSource(46184U);
    msg.setSourceEntity(174U);
    msg.setDestination(6431U);
    msg.setDestinationEntity(82U);
    msg.err_mean = 0.25021017809;
    msg.dist_min_abs = 0.767284530052;
    msg.dist_min_mean = 0.382684386218;

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
    msg.setTimeStamp(0.997287917106);
    msg.setSource(41021U);
    msg.setSourceEntity(95U);
    msg.setDestination(42686U);
    msg.setDestinationEntity(116U);
    msg.err_mean = 0.852928009467;
    msg.dist_min_abs = 0.388717030354;
    msg.dist_min_mean = 0.376845676853;

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
    msg.setTimeStamp(0.3741952304);
    msg.setSource(29706U);
    msg.setSourceEntity(170U);
    msg.setDestination(18127U);
    msg.setDestinationEntity(220U);
    msg.err_mean = 0.791425142525;
    msg.dist_min_abs = 0.761485903942;
    msg.dist_min_mean = 0.113902256388;

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
    msg.setTimeStamp(0.769141562086);
    msg.setSource(45272U);
    msg.setSourceEntity(206U);
    msg.setDestination(37346U);
    msg.setDestinationEntity(203U);
    msg.action = 30U;
    msg.lon_gain = 0.401700135327;
    msg.lat_gain = 0.12761528814;
    msg.bond_thick = 0.388867337496;
    msg.lead_gain = 0.95875642215;
    msg.deconfl_gain = 0.856568085782;
    msg.accel_switch_gain = 0.892843266595;
    msg.safe_dist = 0.51777284064;
    msg.deconflict_offset = 0.863216462987;
    msg.accel_safe_margin = 0.380980955676;
    msg.accel_lim_x = 0.711868701878;

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
    msg.setTimeStamp(0.964220899549);
    msg.setSource(53178U);
    msg.setSourceEntity(59U);
    msg.setDestination(48537U);
    msg.setDestinationEntity(126U);
    msg.action = 200U;
    msg.lon_gain = 0.191422254177;
    msg.lat_gain = 0.443966176057;
    msg.bond_thick = 0.82851900324;
    msg.lead_gain = 0.250156530591;
    msg.deconfl_gain = 0.215235989081;
    msg.accel_switch_gain = 0.730682062564;
    msg.safe_dist = 0.5271762626;
    msg.deconflict_offset = 0.607647231569;
    msg.accel_safe_margin = 0.279385155578;
    msg.accel_lim_x = 0.565376143416;

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
    msg.setTimeStamp(0.27314472182);
    msg.setSource(54101U);
    msg.setSourceEntity(104U);
    msg.setDestination(10908U);
    msg.setDestinationEntity(152U);
    msg.action = 45U;
    msg.lon_gain = 0.210288843217;
    msg.lat_gain = 0.484753343723;
    msg.bond_thick = 0.0231533501668;
    msg.lead_gain = 0.860761431023;
    msg.deconfl_gain = 0.363966846038;
    msg.accel_switch_gain = 0.700119192947;
    msg.safe_dist = 0.56691261067;
    msg.deconflict_offset = 0.995117423406;
    msg.accel_safe_margin = 0.0982762415716;
    msg.accel_lim_x = 0.506574752193;

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
    msg.setTimeStamp(0.804673945271);
    msg.setSource(28810U);
    msg.setSourceEntity(206U);
    msg.setDestination(1162U);
    msg.setDestinationEntity(31U);
    msg.type = 224U;
    msg.op = 124U;
    msg.err_mean = 0.803243568071;
    msg.dist_min_abs = 0.892963546821;
    msg.dist_min_mean = 0.098209559081;
    msg.roll_rate_mean = 0.287411195167;
    msg.time = 0.110759041153;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 138U;
    tmp_msg_0.lon_gain = 0.113792365126;
    tmp_msg_0.lat_gain = 0.0783762356541;
    tmp_msg_0.bond_thick = 0.819595735918;
    tmp_msg_0.lead_gain = 0.380964249918;
    tmp_msg_0.deconfl_gain = 0.331362781856;
    tmp_msg_0.accel_switch_gain = 0.613768463167;
    tmp_msg_0.safe_dist = 0.304810934225;
    tmp_msg_0.deconflict_offset = 0.672105484835;
    tmp_msg_0.accel_safe_margin = 0.913005126247;
    tmp_msg_0.accel_lim_x = 0.095946867612;
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
    msg.setTimeStamp(0.908746730052);
    msg.setSource(21704U);
    msg.setSourceEntity(63U);
    msg.setDestination(43103U);
    msg.setDestinationEntity(78U);
    msg.type = 2U;
    msg.op = 38U;
    msg.err_mean = 0.77566526315;
    msg.dist_min_abs = 0.252283959702;
    msg.dist_min_mean = 0.965982902553;
    msg.roll_rate_mean = 0.598941689271;
    msg.time = 0.594991671646;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 163U;
    tmp_msg_0.lon_gain = 0.525890714845;
    tmp_msg_0.lat_gain = 0.860158704621;
    tmp_msg_0.bond_thick = 0.669887208382;
    tmp_msg_0.lead_gain = 0.342189256238;
    tmp_msg_0.deconfl_gain = 0.478742164925;
    tmp_msg_0.accel_switch_gain = 0.256703687845;
    tmp_msg_0.safe_dist = 0.540892324246;
    tmp_msg_0.deconflict_offset = 0.837736459866;
    tmp_msg_0.accel_safe_margin = 0.325910915831;
    tmp_msg_0.accel_lim_x = 0.457013526812;
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
    msg.setTimeStamp(0.0466720563692);
    msg.setSource(18935U);
    msg.setSourceEntity(113U);
    msg.setDestination(54931U);
    msg.setDestinationEntity(224U);
    msg.type = 86U;
    msg.op = 218U;
    msg.err_mean = 0.0744491272025;
    msg.dist_min_abs = 0.11161582322;
    msg.dist_min_mean = 0.68990494485;
    msg.roll_rate_mean = 0.409959606028;
    msg.time = 0.14757538056;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 125U;
    tmp_msg_0.lon_gain = 0.223432270768;
    tmp_msg_0.lat_gain = 0.53461481942;
    tmp_msg_0.bond_thick = 0.547530053494;
    tmp_msg_0.lead_gain = 0.823844857343;
    tmp_msg_0.deconfl_gain = 0.565897312536;
    tmp_msg_0.accel_switch_gain = 0.296844307846;
    tmp_msg_0.safe_dist = 0.707020096193;
    tmp_msg_0.deconflict_offset = 0.355040500644;
    tmp_msg_0.accel_safe_margin = 0.702274878179;
    tmp_msg_0.accel_lim_x = 0.929796369495;
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
    msg.setTimeStamp(0.288030922177);
    msg.setSource(2911U);
    msg.setSourceEntity(30U);
    msg.setDestination(64498U);
    msg.setDestinationEntity(55U);
    msg.uid = 246U;
    msg.frag_number = 160U;
    msg.num_frags = 208U;
    const char tmp_msg_0[] = {76, 112, 18, 92, -88, -77, 38, -79, 64, 94, -118, 124, -124, -101, 43, 90, 104, 43, -41, 66, 101, -114, 74, -61, 116, -113, -20, 14, -8, 121, 42, -51, -20, 70, -78, -123, 93, 96, -91};
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
    msg.setTimeStamp(0.515588388929);
    msg.setSource(29181U);
    msg.setSourceEntity(92U);
    msg.setDestination(38324U);
    msg.setDestinationEntity(38U);
    msg.uid = 43U;
    msg.frag_number = 197U;
    msg.num_frags = 111U;
    const char tmp_msg_0[] = {25, 125, 112, -59, -46, 50, 15, 36, -118, -122, -96, -95, 43, -90, -111, -71, -79, -127, 33, -56, -110, 75, -58, -89, -67, 117, 105, 40, 13, -116, 15, 20, 118, -10, 31, 91, -40, 105, -93, 117, -27, -10, -65, -6, 25, 90, 27, -95, -70, -95, 123, -65, 119, -60, -39, 27, -84, 75, 62, -113, -23, 114, -54, -67, 121, 58, -9, -97, 82, 27, 75, 95, -91, -44, 64, -76, 86, 52, -121, -116, -31, -23, -14, 112, 111, 5, 35, -21, 92, -30, -108, 11, -69, 17, -45, 66, 103, -127, 30, 72, -78, -120, -39, -32, -122, 30, -121, -117, 28, 55, -15, -90, 40, 16, -27, -49, -56, -17, 69, -46, 12, 107, -31, -71, -85, 62, -106, 21, -84, -4, -102, 90, -27, -117, -2, 77, -47, -7, -42, -86, -128, 95, -59, 44, 40, 53, -3, -57, 101, 25, -47, -66, 112, -105, -4, 28, 103, 103, 41, -91, -84, 53, 61, -33, -41, -109, 111, 36, -112, -100, -116, -109, 44, 59, -22, -68, 42, -28, 40, 79, -18, 11, -107, -33, -55, -3, 126, 12, 80, -51, -44, 116, -119, -92, 114, -62, 11, -101, -77, -94, -109, 12, 17, -78, -102, -28, -34, -49, 101, 122, -58, -58, 108, -125, -125, -84, -2, 60, 5, -41, 67, 36, 72, 16, -25, -127, -30, 59, 46, -127, 21, -79, 95};
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
    msg.setTimeStamp(0.953562099916);
    msg.setSource(20952U);
    msg.setSourceEntity(178U);
    msg.setDestination(6958U);
    msg.setDestinationEntity(214U);
    msg.uid = 114U;
    msg.frag_number = 244U;
    msg.num_frags = 249U;
    const char tmp_msg_0[] = {7, 13, 99, 31, -69, -23, -119, -70, -115, 58, -76, -50, 25, 7, -83, -31, -81, 108, -16, -3, 66, 95, 92, 109, -5, 4, -82, 54, -86, -70, -12, -86, 77, -43, -53, 78, 22, 1, 2, 62, 98, -74, 30, -73, -63, 90, -25, 83, 28, -32, -29, 12, -105, -34, -51, -34, 63, -98, -118, 112, -15, -124, -21, 14, -23, -125, 98, 84, -123, -11, -98, 98, 126, -97, 83, 70, -37, -59, -19, 38, 38, -106, 90, 48, -61, 66, 75, -123, -29, 38, -61};
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
    msg.setTimeStamp(0.307667078022);
    msg.setSource(7754U);
    msg.setSourceEntity(15U);
    msg.setDestination(34023U);
    msg.setDestinationEntity(213U);
    msg.content_type.assign("YGZDYILODPVIKUGTHAVOYFOWAGVBLBMPENB");
    const char tmp_msg_0[] = {-121, 88, 13, 30, -92, 41, -122, -10, 64, -118, 117, 114, -43, -12, -5, 92, 99, -89, 83, 89, 75, 108, -117, -49, -93, 14, 87, 1, -73, -44, -79, -69, 63, 15, -64, -39, -59, -120, 60, -57, 75, 5, -125, -91, -22, -106, 74, 44, -62, -61, 16, -91, -19, 41, 79, -80, -46, 100, -24, 80, 7, 43, 16, 79, -61, 90, 113, -15, 47, -70, -53, -124, 100, 81, -15, 101, 9, 118, 84, -27, -48, -113, -84, 18, 97, -112, -19, 105, 14, -111, -110, -91, 91, -17, 16, 34, 110, -80, -5, 45, -11, 25, -68, 110, 116, 11, 20, -82, 109, 108, 43, 55, -77, -23, 40, 16, -70, 100, 27, 116, -72, -3, 90, 113, 38, -72, -84, 74, -60, 2, -38, 79, 57, 88, 90, -85, -27, -123, -126, -94, 80, 104, 109, 61, 103, -12, -21, 61, -44, 71, -51, -52, 116, -58, 63, -97, -118, -74, -82, 94, 87, 105, 9, 103, 15, 94, -85, 9, -57, -78, 43, 72, -60};
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
    msg.setTimeStamp(0.629717989453);
    msg.setSource(24860U);
    msg.setSourceEntity(15U);
    msg.setDestination(37895U);
    msg.setDestinationEntity(66U);
    msg.content_type.assign("PBZKKRDAMCFWUHFWKBURYCWHETEOXOPILFIQCVQFLVPQXXVCANLJDYJHXLZVMIPJBWGNTSZDZYIYBRFRGZBGNBRXEMAHDWSAEUSKIEZOAACYNMRVLPJZXBXOTUQ");
    const char tmp_msg_0[] = {-111, 22, -51, -59, 51, -38, -37, -76, -72, -4, 35, 76, -63, 18, -33, 91, -5, 72, -21, -47, 39, 111, -127, -126, 50, 82, 126, 115, -35, 65, 109, 122, -53, -118, 95, -36, 63, 115, 86, -79, -126, -37, -118, -99, 40, -2, -72, -69, -102, -76, -4, -2, -57, 62, -89, -59, -55, -106, -1, -19, 25, 31, 51, 63, -120, 49, 76, -99, -82, -42, 25, -70, -80, 87, 13, -62, -114, 124, -25, 90, -38, -78, 69, 102, -10, -106, -31, -94, 7, 78, 43, 10, -51, -110, -113, 112, 117, -13, 82, -51, 5, -34, 48, -79, -1, -83, -37, 13, 18, 126, 46, 80, 16, 78, 112, -116, 58, 52, -90, 1, 112, -91, -9, -117, 15, 50, -76};
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
    msg.setTimeStamp(0.728481626931);
    msg.setSource(23052U);
    msg.setSourceEntity(35U);
    msg.setDestination(21760U);
    msg.setDestinationEntity(74U);
    msg.content_type.assign("FOORDEJBIPKMMNRNWVZLWLTOUXENXQQNAKUYVMRSCBXDTKANSRMPDFHZPTYLEUNLIKHZNRWDXJNSJAIYBYHGGUGUUZCFEOMMPDWMBXVVDBSZGQUJOHKIAKYGCCGPFVTCQXYIAGSBGXJIXEVTMGHNJYENEIISOZKCEBTKTZFMRETIRDOWXWLXBFVZUKULHTLSMYPPQYQCLY");
    const char tmp_msg_0[] = {120, -77, -123, -11, -59, 37, 121, -6, -24, 125, 35, -126, 97, 57, 13, 50, 48, 120, 69, -54, -57, -47, 26, -108, -120, -111, 121, 76, 52, 4, 68, -18, 54, -113, 103, -7, 32, 100, -10, -10, 104, -67, -37, -23, -79, -36, 100, 22, -10, -53, -68, 96, 13, 101, -98, -22, 54, -104, 28, -96, 113, -58, 108, -44, 77, -123, -97, 96, -116, 28, 107, -7, 20, 4, 124, -101, -40, 51, 74, 119, -48, -126, -8, -109, -86, -96, 20, -97};
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
    msg.setTimeStamp(0.718117788346);
    msg.setSource(41324U);
    msg.setSourceEntity(11U);
    msg.setDestination(47111U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.806531469198);
    msg.setSource(4831U);
    msg.setSourceEntity(244U);
    msg.setDestination(24524U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.644232317511);
    msg.setSource(57862U);
    msg.setSourceEntity(254U);
    msg.setDestination(50911U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.0738381943789);
    msg.setSource(33242U);
    msg.setSourceEntity(226U);
    msg.setDestination(36912U);
    msg.setDestinationEntity(216U);
    msg.target = 32151U;
    msg.bearing = 0.0499801014847;
    msg.elevation = 0.210014656124;

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
    msg.setTimeStamp(0.828699462807);
    msg.setSource(54028U);
    msg.setSourceEntity(8U);
    msg.setDestination(9453U);
    msg.setDestinationEntity(74U);
    msg.target = 59657U;
    msg.bearing = 0.216936711071;
    msg.elevation = 0.115736077998;

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
    msg.setTimeStamp(0.733162528523);
    msg.setSource(26990U);
    msg.setSourceEntity(3U);
    msg.setDestination(38896U);
    msg.setDestinationEntity(47U);
    msg.target = 61933U;
    msg.bearing = 0.0405129970495;
    msg.elevation = 0.35050603274;

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
    msg.setTimeStamp(0.632765854319);
    msg.setSource(13396U);
    msg.setSourceEntity(48U);
    msg.setDestination(12429U);
    msg.setDestinationEntity(55U);
    msg.target = 30133U;
    msg.x = 0.877514974554;
    msg.y = 0.516825461754;
    msg.z = 0.893587350874;

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
    msg.setTimeStamp(0.837845552927);
    msg.setSource(58094U);
    msg.setSourceEntity(152U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(169U);
    msg.target = 26474U;
    msg.x = 0.457558239331;
    msg.y = 0.627239743396;
    msg.z = 0.974727517069;

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
    msg.setTimeStamp(0.28736301439);
    msg.setSource(12033U);
    msg.setSourceEntity(253U);
    msg.setDestination(504U);
    msg.setDestinationEntity(9U);
    msg.target = 40561U;
    msg.x = 0.535399614933;
    msg.y = 0.859945204831;
    msg.z = 0.567549853426;

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
    msg.setTimeStamp(0.890917802228);
    msg.setSource(37302U);
    msg.setSourceEntity(147U);
    msg.setDestination(19914U);
    msg.setDestinationEntity(74U);
    msg.target = 52729U;
    msg.lat = 0.995181324881;
    msg.lon = 0.456862549812;
    msg.z_units = 141U;
    msg.z = 0.161370065154;

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
    msg.setTimeStamp(0.513821715882);
    msg.setSource(23046U);
    msg.setSourceEntity(62U);
    msg.setDestination(44634U);
    msg.setDestinationEntity(112U);
    msg.target = 17558U;
    msg.lat = 0.92797638148;
    msg.lon = 0.814769679525;
    msg.z_units = 14U;
    msg.z = 0.817987339758;

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
    msg.setTimeStamp(0.0607187994528);
    msg.setSource(63385U);
    msg.setSourceEntity(18U);
    msg.setDestination(3763U);
    msg.setDestinationEntity(172U);
    msg.target = 22702U;
    msg.lat = 0.673473422664;
    msg.lon = 0.0508630805767;
    msg.z_units = 1U;
    msg.z = 0.327709392846;

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
    msg.setTimeStamp(0.0997712701334);
    msg.setSource(45517U);
    msg.setSourceEntity(4U);
    msg.setDestination(10699U);
    msg.setDestinationEntity(57U);
    msg.locale.assign("ZENKFNOCZSGWBTPZIOGHGFCHYAHSFFDK");
    const char tmp_msg_0[] = {-55, 76, -103, -103, -93, 118, 33, 19, 65, -22, -115, -30, -5, -19, -87, 70, -74, -122, -94, 43, 103, -128, 24, 107, 10, 116, 54, -99, 37, 44, -4, -64, -97, -3, -12, 115, -39, 96, -58, 120, 14, 56, 88, 94, -68, 114, -24, 55, 7, -28, -67, -120, 42, -102, 107, 29, 93, 109, -42, -1, 21, -60, 92, -54, 62, -22, 121, 37, 116, -91, 121, -111, 28, 58, 82, 20, 49, -80, 14, -76, 30, -69, 101, 103, 108, 123, 97, 89, 122, 23, 126, -25, 54, -73, -23, -70, -5, 114, 79, -41, -68, -18, 31, -1, -2, -44, -27, -8, -40, -122, 55, -15, 96, -108, -63, -17, 120, -96, 69, 47, -119, 94, 65, 13, -6, 108, 6, 33, -27, 103, -93, -107, 110, -28, 13, 50, -105, -71, 93, 48, 72, 11, 30, 76, -74, 117, 17, -69, 115, -39, -22, -3, -28, 36, 59, 115, 8, 80, -92, 14, 17, 31, 113, -9, -19, -78, 119, -90, 86, 42, 84};
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
    msg.setTimeStamp(0.180614352725);
    msg.setSource(33586U);
    msg.setSourceEntity(112U);
    msg.setDestination(32662U);
    msg.setDestinationEntity(169U);
    msg.locale.assign("ONHBUSOVEZVXBTFGEFTRCAEVSNOXAJCMLHIZQNGUSLGXQORTGDKXXDEXSRZFVUY");
    const char tmp_msg_0[] = {48, -52, -77, -54, -34, -113, 74, -61, -118, 73, -124, 72, -65, -59, -91, 35, -45, 123, 113, -46, 44, -128, 60, 58, 82, -116, 5, -116, 57, -50, 64, 108, 38, 30, -68, 42, -32, -73, -2, 104, 81, 116, 21};
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
    msg.setTimeStamp(0.987982969372);
    msg.setSource(45426U);
    msg.setSourceEntity(47U);
    msg.setDestination(52851U);
    msg.setDestinationEntity(1U);
    msg.locale.assign("LVMGMHLEIMFVJYLRIZRSFLIXSCIDYRVERZPPXWFDNLLHPUHOPBACEQIKROQGKWXYYUEWKHJQBRXIDPZZSFBHVHNJI");
    const char tmp_msg_0[] = {-82, -101, 36, 85, 114, 57, 30, 59, -93, 52, 109, -22, 95, 89, 68, -6, 61, -95, -120, -47, 13, 7, 112, -60, -21, -84, -85, 39, -106, 51, 35, 100, 120, 125, 61, 96, -57, -91, 109, -29, 19, 57, 82, 87, -90, -90, -115, -68, 18, 102, -54, -63, -115, 126, -47, 100, 57, -17, -120, -104, -30, 112, -37, 83, 95, 63, 20, 28, -85, -89, 79, 1, -9, -98, 75, 64, -25, 124, 53, -90, -2, -126, 27, -91, -98, -92, -30, 48, -85, -102, 20, 42, 93, 83, -70, -109, -119, 89, -41, 101, -86, 98, 42, -39, 19, -108, -127, 65, -57, 45, 104, 78, 84, 51, -109, 104, -119, 119, -116, -37, -103, 84, 119, 19, 20, -124, -79, -126, 31, -116, 113, -76, -98, -49, -23, -40, -83, -28, -128, 78, 27, 9, 107, -109, -102, 116, 18, -20, 101, -31, 91, 109, 82, 59, 58, 74, -18, 81, 115, -39, -39, -46, 52, -76, -64, 3, -109, 125, -31, -112, -86, 107, -121, 9, -5, 123, 2, -103, 5, 0, -96, 41, 40, 52, 36, -124, -13, 122, 124, 80, 63, -82, 46, -109, -30, 99, -27, 74, 97, 45};
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
    msg.setTimeStamp(0.913417432545);
    msg.setSource(32390U);
    msg.setSourceEntity(125U);
    msg.setDestination(52198U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.519806376758);
    msg.setSource(1753U);
    msg.setSourceEntity(142U);
    msg.setDestination(24992U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.358566369756);
    msg.setSource(25054U);
    msg.setSourceEntity(65U);
    msg.setDestination(50351U);
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
    msg.setTimeStamp(0.537223774773);
    msg.setSource(14869U);
    msg.setSourceEntity(61U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(23U);
    msg.camid = 134U;
    msg.x = 35685U;
    msg.y = 7619U;

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
    msg.setTimeStamp(0.812252344186);
    msg.setSource(4406U);
    msg.setSourceEntity(101U);
    msg.setDestination(54644U);
    msg.setDestinationEntity(253U);
    msg.camid = 129U;
    msg.x = 46272U;
    msg.y = 26964U;

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
    msg.setTimeStamp(0.47578696052);
    msg.setSource(23461U);
    msg.setSourceEntity(16U);
    msg.setDestination(17583U);
    msg.setDestinationEntity(97U);
    msg.camid = 2U;
    msg.x = 35596U;
    msg.y = 44061U;

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
    msg.setTimeStamp(0.0682119688674);
    msg.setSource(50363U);
    msg.setSourceEntity(103U);
    msg.setDestination(40666U);
    msg.setDestinationEntity(187U);
    msg.camid = 9U;
    msg.x = 34412U;
    msg.y = 14268U;

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
    msg.setTimeStamp(0.212968865028);
    msg.setSource(21002U);
    msg.setSourceEntity(224U);
    msg.setDestination(17019U);
    msg.setDestinationEntity(93U);
    msg.camid = 240U;
    msg.x = 17102U;
    msg.y = 2195U;

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
    msg.setTimeStamp(0.795624838133);
    msg.setSource(348U);
    msg.setSourceEntity(251U);
    msg.setDestination(7857U);
    msg.setDestinationEntity(189U);
    msg.camid = 106U;
    msg.x = 11527U;
    msg.y = 54063U;

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
    msg.setTimeStamp(0.665172115035);
    msg.setSource(36520U);
    msg.setSourceEntity(71U);
    msg.setDestination(17852U);
    msg.setDestinationEntity(37U);
    msg.tracking = 103U;
    msg.lat = 0.645699572714;
    msg.lon = 0.23166542437;
    msg.x = 0.188325357712;
    msg.y = 0.25045360599;
    msg.z = 0.423577641963;

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
    msg.setTimeStamp(0.216667773157);
    msg.setSource(62275U);
    msg.setSourceEntity(95U);
    msg.setDestination(40534U);
    msg.setDestinationEntity(231U);
    msg.tracking = 226U;
    msg.lat = 0.764674511259;
    msg.lon = 0.112498020011;
    msg.x = 0.27033817215;
    msg.y = 0.154217916341;
    msg.z = 0.637572890204;

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
    msg.setTimeStamp(0.987201107985);
    msg.setSource(10284U);
    msg.setSourceEntity(118U);
    msg.setDestination(48010U);
    msg.setDestinationEntity(137U);
    msg.tracking = 219U;
    msg.lat = 0.0466716767097;
    msg.lon = 0.535410371624;
    msg.x = 0.342593421059;
    msg.y = 0.254594714862;
    msg.z = 0.819095313644;

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
    msg.setTimeStamp(0.0920784291946);
    msg.setSource(17439U);
    msg.setSourceEntity(26U);
    msg.setDestination(49389U);
    msg.setDestinationEntity(195U);
    msg.target.assign("ZQLVLPTCHMWXJWSFLIVJPIZTORQKCK");
    msg.lbearing = 0.678766981522;
    msg.lelevation = 0.128290893934;
    msg.bearing = 0.632731183357;
    msg.elevation = 0.985790649294;
    msg.phi = 0.528495347239;
    msg.theta = 0.533606073018;
    msg.psi = 0.301751256931;
    msg.accuracy = 0.937216029259;

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
    msg.setTimeStamp(0.384848971557);
    msg.setSource(34703U);
    msg.setSourceEntity(84U);
    msg.setDestination(5170U);
    msg.setDestinationEntity(227U);
    msg.target.assign("SHYWKNBQSSYDXIRLUMICYJBXSIAQWGNVVJMXEFPYJHIBWSPIEGDQNKOJFDGRLCTRVEHRPHRWZYLADTVNHCCWRYJZTIZCXAKXZWEQBMZMTLUBGGOHWOENPIPNVBLUGXBGDFPBZXKVGJXHFUYQLKTSKCYQPZTWUMXSNCBVDQTACOQKPYAHUYVIJQFTFPNLGIEJDATHHACNEVFZLULPORWOAEFTBQUXCRMEDSMZFMWURAFKDJVJAOKLMDNZSEIM");
    msg.lbearing = 0.432677053701;
    msg.lelevation = 0.715340199774;
    msg.bearing = 0.732570497673;
    msg.elevation = 0.272130116531;
    msg.phi = 0.999898253293;
    msg.theta = 0.900364384762;
    msg.psi = 0.397802420369;
    msg.accuracy = 0.334307853853;

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
    msg.setTimeStamp(0.102680213067);
    msg.setSource(19651U);
    msg.setSourceEntity(182U);
    msg.setDestination(18716U);
    msg.setDestinationEntity(217U);
    msg.target.assign("WSBUHWWPVEQEOLKWWSNGNMXMMEBQYZQOJZXUQCKTOYUDFTECTPNIJOUYSVNTCHLJALGGTERBETPIKRYVSDXZZAJTIJQFVZWXFSIGHJDFBRKOPHSXMNEIGSOBVRXDRHZIDDQK");
    msg.lbearing = 0.821193934984;
    msg.lelevation = 0.690489346737;
    msg.bearing = 0.709272008911;
    msg.elevation = 0.803216447437;
    msg.phi = 0.781021918767;
    msg.theta = 0.503883021925;
    msg.psi = 0.73521946425;
    msg.accuracy = 0.631899572973;

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
    msg.setTimeStamp(0.346406826279);
    msg.setSource(3498U);
    msg.setSourceEntity(235U);
    msg.setDestination(34169U);
    msg.setDestinationEntity(132U);
    msg.target.assign("MMKHVMVLPQLBFKACCDLXEHLAPCUVIWKPBLHWHGTVILBSWARSWIESSUDAGHLLOJWUQJFSRBWKWSTXXZGPHOYXBITGNYWBDFLZXYRCNZEFXKJFPDJWSENGUTFYRAKEVROUFQMIISCYGYQRNXXSOBWQJTOMVCVYUOQIGDNOKEAOYPNZEADDIMVPQRBSNJATAREVCZTYZ");
    msg.x = 0.0272593186994;
    msg.y = 0.399127576573;
    msg.z = 0.584646396128;
    msg.n = 0.590080187865;
    msg.e = 0.139525578144;
    msg.d = 0.045533981856;
    msg.phi = 0.0237479113554;
    msg.theta = 0.981782338805;
    msg.psi = 0.0785649656175;
    msg.accuracy = 0.640474543196;

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
    msg.setTimeStamp(0.754484102368);
    msg.setSource(59100U);
    msg.setSourceEntity(241U);
    msg.setDestination(4208U);
    msg.setDestinationEntity(57U);
    msg.target.assign("UPZGURSRBQPUFXEODOEJCYAXIMDTYAHQQFEIXKHRNVOHFLGKINBNBSLQAEOYDSTXMNOEZVLOHUCRXLSBYKXPWTGGRLDMDZDISNDYMVZZTYPMZGSWEYUHFCBIRPZXVRYQNWMHCLECAIEPGZOUFODWNZLVGJWQTJDKILARPVIYKEIJW");
    msg.x = 0.485610653561;
    msg.y = 0.0377631272968;
    msg.z = 0.029074431583;
    msg.n = 0.150101939692;
    msg.e = 0.668090029639;
    msg.d = 0.358293586058;
    msg.phi = 0.27994689844;
    msg.theta = 0.912774415831;
    msg.psi = 0.209702895914;
    msg.accuracy = 0.721264744705;

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
    msg.setTimeStamp(0.700307286694);
    msg.setSource(42006U);
    msg.setSourceEntity(39U);
    msg.setDestination(7337U);
    msg.setDestinationEntity(9U);
    msg.target.assign("JULDXNCMFKOQQJZFPXOXCLADDPKPJRZAJPEBYLVFYWWGHHHHTEVNAIAGYJSPSJPCALNYGCQDUHXSEOFKDRVGCVIICZAYIB");
    msg.x = 0.51396117597;
    msg.y = 0.814117506298;
    msg.z = 0.859230795123;
    msg.n = 0.178635127764;
    msg.e = 0.819605966145;
    msg.d = 0.686821414922;
    msg.phi = 0.684300690377;
    msg.theta = 0.202622263;
    msg.psi = 0.972255192318;
    msg.accuracy = 0.25574240516;

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
    msg.setTimeStamp(0.633404921094);
    msg.setSource(58181U);
    msg.setSourceEntity(151U);
    msg.setDestination(64249U);
    msg.setDestinationEntity(93U);
    msg.target.assign("CRILIKGAPBLVGGELYTWDAQFMCYQINEIWZFWWOOVKOIFMRHBTAQTNLEYEOYJWHPOXTFRWKNVBXMFQSYWSUMDZYQZFBSSXIPVGAYBRDQJPJGQODEDBIEROCCLSAXO");
    msg.lat = 0.372104402125;
    msg.lon = 0.390777091145;
    msg.z_units = 87U;
    msg.z = 0.826884695374;
    msg.accuracy = 0.960463124417;

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
    msg.setTimeStamp(0.0285292723462);
    msg.setSource(34280U);
    msg.setSourceEntity(191U);
    msg.setDestination(30133U);
    msg.setDestinationEntity(88U);
    msg.target.assign("LREBWAFRTVQMVHFQKATASUSTCVZUEBCSQVAGUCBXQMBWDLYJPMMJOFANUZDWENKGOHALTJZCTNYMDBBNHOCJJVDYBUSWPDSCZFLGBJDLFGQIXNXXODBUTEIKXTDMSICYJROOMCWQWRMSOIJNWPHVLKWYWIDZQGLTIZGEYHFFGAQHQUPDHWIVSPPZFZQXYHFIJBXCGMYOLOCHFTPPLRIGVXIPGNERNXRZPKVYESZKRJRNYKTALKRKVSEU");
    msg.lat = 0.104407467134;
    msg.lon = 0.716676572253;
    msg.z_units = 169U;
    msg.z = 0.809900970205;
    msg.accuracy = 0.0313000257218;

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
    msg.setTimeStamp(0.4326919487);
    msg.setSource(11825U);
    msg.setSourceEntity(157U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(28U);
    msg.target.assign("LLZZGUMKNZSOCNCCAJKHNROHHGAJVTBIVFNDMJSLRDIDOTJHZOWEMJDHZTHDBSWKGXYZDIACWMLQJLYZAEKQOMBGQLCYPKNCLNQQPUNSYKIKGSTSMVFWRJAIRFXVGUSBEWKUBHRIEXBEAIBGEDYPRJOFEMHFFPJKTUAPFMZLWCYLXHYNZXGWTEDAYVTOXOHDQEXXIRNPUYJACDBPFELQBPNUZVOTUSASMUQIWTRGV");
    msg.lat = 0.117830499045;
    msg.lon = 0.876678504132;
    msg.z_units = 90U;
    msg.z = 0.376346519941;
    msg.accuracy = 0.341958201464;

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
    msg.setTimeStamp(0.167030481078);
    msg.setSource(16627U);
    msg.setSourceEntity(178U);
    msg.setDestination(7284U);
    msg.setDestinationEntity(78U);
    msg.name.assign("AZZADRMBWIZOGPAPIKZKIAWKFYDUTMATQOFCHKGMPLXRJENSHCLKNGPWWKDOQPJVSMBLFYORURPQOLFVBHBZYVWWIORSNCLKREYTUTHEDWESEGLXVSJQGAUITEUCVIMHHXHYHAYLNISARXLXQUJBENYNXEJTMCXWXZDWBVPNQFOSUQNN");
    msg.lat = 0.202233346912;
    msg.lon = 0.693590879113;
    msg.z = 0.849307869417;
    msg.z_units = 81U;

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
    msg.setTimeStamp(0.463254204873);
    msg.setSource(24669U);
    msg.setSourceEntity(244U);
    msg.setDestination(65291U);
    msg.setDestinationEntity(138U);
    msg.name.assign("TYJPDNBVDHTIBSRTYZFMNOYQVZRQTNFDNHRUTOOUEACICPRIGSFDKESNXMMZVVGRJYOAVWXAVEZPZBHEFWUOOOKIWNMGFSSXZMNLVULMPXUICLRLAAJJYWLVEVELTRQWL");
    msg.lat = 0.704231514721;
    msg.lon = 0.313531246427;
    msg.z = 0.731901603892;
    msg.z_units = 187U;

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
    msg.setTimeStamp(0.10340312042);
    msg.setSource(40656U);
    msg.setSourceEntity(90U);
    msg.setDestination(51109U);
    msg.setDestinationEntity(231U);
    msg.name.assign("SDQKHWDWTQABXJMQCVFRWCKWNZBAFCWGEREMISNHBDSGKEHZVYUZECZVESYSTZRRSNUCMAUXKGJVYTUBKLDZPAGWVVWYUHEUPYZDHLMQUBARFLIJITISFWHZSKOGDWGOFXNPBLIENMSURYIFXKN");
    msg.lat = 0.0218940152586;
    msg.lon = 0.160969076273;
    msg.z = 0.416939887418;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.941885232942);
    msg.setSource(7529U);
    msg.setSourceEntity(247U);
    msg.setDestination(61948U);
    msg.setDestinationEntity(110U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.841797523244);
    msg.setSource(51057U);
    msg.setSourceEntity(161U);
    msg.setDestination(47072U);
    msg.setDestinationEntity(66U);
    msg.op = 96U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FRIXSEBJLSZLTLCKMKGGBGCANOIHLAHTQBEYONMHXNJHVAYIVVD");
    tmp_msg_0.lat = 0.837761338017;
    tmp_msg_0.lon = 0.65590613614;
    tmp_msg_0.z = 0.102135020634;
    tmp_msg_0.z_units = 27U;
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
    msg.setTimeStamp(0.501863984818);
    msg.setSource(63122U);
    msg.setSourceEntity(50U);
    msg.setDestination(31727U);
    msg.setDestinationEntity(225U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.30293849694);
    msg.setSource(54953U);
    msg.setSourceEntity(214U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(115U);
    msg.value = 0.403363445063;
    msg.type = 189U;

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
    msg.setTimeStamp(0.114031370159);
    msg.setSource(14042U);
    msg.setSourceEntity(13U);
    msg.setDestination(44916U);
    msg.setDestinationEntity(92U);
    msg.value = 0.527679081647;
    msg.type = 195U;

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
    msg.setTimeStamp(0.49106457229);
    msg.setSource(32330U);
    msg.setSourceEntity(134U);
    msg.setDestination(47014U);
    msg.setDestinationEntity(32U);
    msg.value = 0.347064079024;
    msg.type = 135U;

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
    msg.setTimeStamp(0.180728460289);
    msg.setSource(49904U);
    msg.setSourceEntity(96U);
    msg.setDestination(33554U);
    msg.setDestinationEntity(18U);
    msg.value = 0.112998716034;

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
    msg.setTimeStamp(0.306729332565);
    msg.setSource(2106U);
    msg.setSourceEntity(221U);
    msg.setDestination(58153U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0639595254739;

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
    msg.setTimeStamp(0.975999517072);
    msg.setSource(31166U);
    msg.setSourceEntity(82U);
    msg.setDestination(60202U);
    msg.setDestinationEntity(208U);
    msg.value = 0.734331715639;

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
    msg.setTimeStamp(0.336797118938);
    msg.setSource(13523U);
    msg.setSourceEntity(156U);
    msg.setDestination(51553U);
    msg.setDestinationEntity(86U);
    msg.timestamp_last_service = 0.163889218234;
    msg.time_next_service = 0.907794262306;
    msg.time_motor_next_service = 0.490288119825;
    msg.time_idle_ground = 0.00259187091982;
    msg.time_idle_air = 0.535494245132;
    msg.time_idle_water = 0.579938694993;
    msg.time_idle_underwater = 0.575057215394;
    msg.time_idle_unknown = 0.0938685790058;
    msg.time_motor_ground = 0.129449117979;
    msg.time_motor_air = 0.707401844984;
    msg.time_motor_water = 0.775635688906;
    msg.time_motor_underwater = 0.982980737545;
    msg.time_motor_unknown = 0.580192573247;
    msg.rpm_min = -16449;
    msg.rpm_max = -26749;
    msg.depth_max = 0.682713149286;

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
    msg.setTimeStamp(0.798495440227);
    msg.setSource(42772U);
    msg.setSourceEntity(3U);
    msg.setDestination(40641U);
    msg.setDestinationEntity(1U);
    msg.timestamp_last_service = 0.092848307555;
    msg.time_next_service = 0.731583062253;
    msg.time_motor_next_service = 0.130930635959;
    msg.time_idle_ground = 0.993186112787;
    msg.time_idle_air = 0.291095155493;
    msg.time_idle_water = 0.361647170605;
    msg.time_idle_underwater = 0.83702167582;
    msg.time_idle_unknown = 0.977505733165;
    msg.time_motor_ground = 0.641576649407;
    msg.time_motor_air = 0.823575334076;
    msg.time_motor_water = 0.435800909709;
    msg.time_motor_underwater = 0.0531031521758;
    msg.time_motor_unknown = 0.638449379016;
    msg.rpm_min = 20327;
    msg.rpm_max = -11178;
    msg.depth_max = 0.859182765976;

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
    msg.setTimeStamp(0.261360056211);
    msg.setSource(38520U);
    msg.setSourceEntity(245U);
    msg.setDestination(32797U);
    msg.setDestinationEntity(216U);
    msg.timestamp_last_service = 0.688393919112;
    msg.time_next_service = 0.177637376903;
    msg.time_motor_next_service = 0.219886357731;
    msg.time_idle_ground = 0.996443120002;
    msg.time_idle_air = 0.0103595914945;
    msg.time_idle_water = 0.760549642216;
    msg.time_idle_underwater = 0.610628893563;
    msg.time_idle_unknown = 0.223898212772;
    msg.time_motor_ground = 0.867896151857;
    msg.time_motor_air = 0.0673565031946;
    msg.time_motor_water = 0.277689059353;
    msg.time_motor_underwater = 0.555291651695;
    msg.time_motor_unknown = 0.730389781627;
    msg.rpm_min = -24299;
    msg.rpm_max = 25686;
    msg.depth_max = 0.235357035586;

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
    msg.setTimeStamp(0.915262687203);
    msg.setSource(33447U);
    msg.setSourceEntity(199U);
    msg.setDestination(17329U);
    msg.setDestinationEntity(168U);
    msg.severity = 117U;
    msg.text.assign("IPTUXHQIXNBJQDTGVWYBRTSENKKVOCIFRJPTAONAODUXYMRZFEWBWXBGILEMDCRIIZKEABATLXNQMVRXQLKHJONQULZJHCZUJCBSQZWEBXJZFCWXPFWVMSGYGIOYDLUQGMYBEVLAPAAXPNOFTVPFPNQPCUADZSYTEI");

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
    msg.setTimeStamp(0.194415518162);
    msg.setSource(57105U);
    msg.setSourceEntity(241U);
    msg.setDestination(29519U);
    msg.setDestinationEntity(217U);
    msg.severity = 34U;
    msg.text.assign("XAJHZODEBSPALTSGTDWRLDZWNBRKWPVMTFTOKBGVRIUIRKNNVQMXWRYFHXYGBMZNOAEHZVJKTAZLJNMHCDJAKHUIANFYQPJPZWUGDCFQPXGJCSOPUSONUSFYUVGEXJJKPWXESMGIGHUENOFTHWEGRLIUXLHVIQBVUCGAZRRVKLCUOYDFDSKBXAZODFHTVRASQPWWSWMNCNBXXVJM");

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
    msg.setTimeStamp(0.728502186836);
    msg.setSource(34728U);
    msg.setSourceEntity(210U);
    msg.setDestination(28776U);
    msg.setDestinationEntity(48U);
    msg.severity = 216U;
    msg.text.assign("TIZRYRJWUKPNMIPBONBEFQTNXWDEFHUKAXSMZJXTLJXHMBAYFACGXLTZDDGXKHMFESFBQVOJAOTVMAZWCVTTLYKDGMIPJAPRIGVSVQBNWKHEXQUCJLLUWOWBHLYEAKLDKDUTGOYQRRWCSJHCZLMVCFBPCGEEGOFNNDXSBSSOZPNYJOIWBH");

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

  return test.getReturnValue();
}
