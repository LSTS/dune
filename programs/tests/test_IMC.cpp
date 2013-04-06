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
    msg.setTimeStamp(0.7690845343349069);
    msg.setSource(16608U);
    msg.setSourceEntity(16U);
    msg.setDestination(35945U);
    msg.setDestinationEntity(127U);
    msg.state = 194U;
    msg.flags = 41U;
    msg.description.assign("KWIOOZHRIUQBDAJHTQKTSZZAFGAQYYNIVVHGVXCLJGQCBAQRILQVVTKNGSFEQXPOPWDYDBXLZJNDWJMJLFKDEYCVHMZWDJBHEGTUBODELISOCLORJALGYSSUIFFYQCPKMARFRXNAHA");

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
    msg.setTimeStamp(0.3442023775935401);
    msg.setSource(36511U);
    msg.setSourceEntity(228U);
    msg.setDestination(28314U);
    msg.setDestinationEntity(65U);
    msg.state = 31U;
    msg.flags = 119U;
    msg.description.assign("IOFDHHVCYUJEXWQBAELVCHBSSLIXPAFGRENXXQNJRCVZMQTXBFCUWOOUDPXQOJYBTITIGGCCUBNXCAMASAKLMEXIKSEIIQBFFDFTWOTOUWDPYHLOHLHDVWVLIVSNK");

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
    msg.setTimeStamp(0.647153502619435);
    msg.setSource(27261U);
    msg.setSourceEntity(0U);
    msg.setDestination(44394U);
    msg.setDestinationEntity(81U);
    msg.state = 10U;
    msg.flags = 42U;
    msg.description.assign("KWYVMSYNBKGXVRAZUHZPTDQTPNABFMLFZLYMFYDSJBNRINKXUALXOHG");

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
    msg.setTimeStamp(0.5741546610824799);
    msg.setSource(11428U);
    msg.setSourceEntity(226U);
    msg.setDestination(42024U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.5902020733164035);
    msg.setSource(52013U);
    msg.setSourceEntity(233U);
    msg.setDestination(8901U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.9609815505894961);
    msg.setSource(34135U);
    msg.setSourceEntity(251U);
    msg.setDestination(39708U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.2484935652533815);
    msg.setSource(9007U);
    msg.setSourceEntity(143U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(100U);
    msg.id = 108U;
    msg.label.assign("LEJKWRYJMCKGUXFKQMGHNUZCOBXGLVSHSAYMCKHUPRTAEOGPFQAKCCEFRRDTRNEICVMJFRQFCKZNZQIEOWUCKWYQSUBJHMOPSDNGXJTLIUSKQYYPEDERLMDTGUQZWDTLIOTXFWBAZFPILJ");
    msg.component.assign("ZIJQFVQCNGPBOZFZMWWKNBKMXNORJVJDVJLUFDPUUCDBSXNERNXGTQCYYNHZRWOHYZTJBUXKHIALOAHIUJETWRZUWPZKRELWXHMOLIBUIBGOGCYOIHVBQAFWPVLAAILQFGNQGXNOSXFGGEDHLQQPGCWCREGMULYYFFMSSTIFZRJLPIDWEJPSNOVVCYB");
    msg.act_time = 17428U;
    msg.deact_time = 49907U;

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
    msg.setTimeStamp(0.3815070663329465);
    msg.setSource(9435U);
    msg.setSourceEntity(225U);
    msg.setDestination(60848U);
    msg.setDestinationEntity(85U);
    msg.id = 220U;
    msg.label.assign("DYXWAYVCYHDKFUCDJLHOVWCROHVKCPEYNFPFYBZMAIVOOPQJGXTMNCEBBRLJEYZGILKFTXUQJPADXOBKHHLKUGSEAIILVRYB");
    msg.component.assign("TINOKPSOIOTECCFNOAYDXCZZQRLAKOLSOLEJGPOJTRMGLKETVCLVSYMWXXOFBUAWWMUAETQZOXXWHYRZBSFUPHMQPNSJQPGROQQDEKBUBQDNCBHRYTFSDFFHZXPCRJMQFWAMYNEECCLNQGWYDVQRBLYJGKMATPSTVKRJIFNUEEKNKPHGNLBJJMGWISXVZADVWYBZVVIYD");
    msg.act_time = 30843U;
    msg.deact_time = 43966U;

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
    msg.setTimeStamp(0.7723025781499511);
    msg.setSource(38444U);
    msg.setSourceEntity(160U);
    msg.setDestination(55636U);
    msg.setDestinationEntity(101U);
    msg.id = 147U;
    msg.label.assign("BKNUSMJDJLUBSQDQLOPVNCIHZYRFJZGVHBMODXQXQYLWNOTSPFZTRAOKNWALPQYNMFIOQBARCVYPOHWIYFFXCNDJJBVTGJHOHAVKJGPRXYDPUSZULXFLSQCINQLTZQTPXJCARNRFJMCBSTISRXDRTAXHWKEMHDAKZKLGIQMOEWPMVWWCIEHEZYVXERMVSUTLKFYEESHTEWZGDAJBOND");
    msg.component.assign("QZKURDIQNVBNXCUIRZOGSEHGTGXJEIFLQLJSBOVXQTLDNJC");
    msg.act_time = 43791U;
    msg.deact_time = 22473U;

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
    msg.setTimeStamp(0.07648941747214011);
    msg.setSource(33276U);
    msg.setSourceEntity(156U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(61U);
    msg.id = 185U;

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
    msg.setTimeStamp(0.1969044683866672);
    msg.setSource(13850U);
    msg.setSourceEntity(140U);
    msg.setDestination(36784U);
    msg.setDestinationEntity(162U);
    msg.id = 43U;

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
    msg.setTimeStamp(0.6193285896019315);
    msg.setSource(21065U);
    msg.setSourceEntity(88U);
    msg.setDestination(51626U);
    msg.setDestinationEntity(64U);
    msg.id = 128U;

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
    msg.setTimeStamp(0.8370259944891086);
    msg.setSource(35413U);
    msg.setSourceEntity(178U);
    msg.setDestination(59180U);
    msg.setDestinationEntity(113U);
    msg.op = 137U;
    msg.list.assign("FJCKBXLCOIYUGMVMDDBBOCFXMNDYOYBJCEAAWXQUIRRIFEETDVAZQSKATRJGZUFMOIQAJVWHYFPZZBLHEXJQCOQGQPISNXFVPJXMVGFIXFMCSYLLIGNZBPURWTKGUCZKORCDKITNNRTPWLEFLRGEPEWANTITOHGNWBQFQPLUOWRZYKADVHHJLUJZTKDLRXYQMTAXQACMVIYDVEHSKDP");

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
    msg.setTimeStamp(0.3545598683283273);
    msg.setSource(30945U);
    msg.setSourceEntity(218U);
    msg.setDestination(59094U);
    msg.setDestinationEntity(127U);
    msg.op = 56U;
    msg.list.assign("FNRXDHEYVZSSZLJWMSBDTAKRNYJEACVRLSTHQTGLYWUPLIKVJIDFDHQRWOUWDBYCNLUUOQNGSFOQDZITZCEYPBOXOSQWJSLVHXFKWNLJXEFTRTEBJIHKCIFZSKUEQGDFFZHSHCIKGVCVCKFKWCFKZPBWDPENIBGPQEMGTYYAIOMACJPLELJMXMGGGMBYWMJATPNBTNUXBQURIOVGXAQUBHYLOVOHCXPMOMAJX");

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
    msg.setTimeStamp(0.6690450252048191);
    msg.setSource(50850U);
    msg.setSourceEntity(194U);
    msg.setDestination(20879U);
    msg.setDestinationEntity(150U);
    msg.op = 168U;
    msg.list.assign("BUXWVOZIKAMXFHUMJMGXGKYBYSCKJEDSDHFMUNXWHYTNKBIOLRCOQIBFQUGRIGDGUYGAWDQGZDQGBVRWIMXEDMLERPWEAZWHWTXFSJSXZMINYVCPFUHLKDQKUEFLQ");

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
    msg.setTimeStamp(0.8073380180013491);
    msg.setSource(54366U);
    msg.setSourceEntity(103U);
    msg.setDestination(34994U);
    msg.setDestinationEntity(46U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.8044533303148919);
    msg.setSource(61441U);
    msg.setSourceEntity(162U);
    msg.setDestination(57024U);
    msg.setDestinationEntity(139U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.7843079257805763);
    msg.setSource(15793U);
    msg.setSourceEntity(254U);
    msg.setDestination(48300U);
    msg.setDestinationEntity(229U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.7034443020505592);
    msg.setSource(27223U);
    msg.setSourceEntity(11U);
    msg.setDestination(10723U);
    msg.setDestinationEntity(74U);
    msg.value = 15U;

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
    msg.setTimeStamp(0.7565642019466274);
    msg.setSource(6530U);
    msg.setSourceEntity(92U);
    msg.setDestination(61507U);
    msg.setDestinationEntity(140U);
    msg.value = 93U;

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
    msg.setTimeStamp(0.3906679945020136);
    msg.setSource(15703U);
    msg.setSourceEntity(118U);
    msg.setDestination(34211U);
    msg.setDestinationEntity(253U);
    msg.value = 54U;

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
    msg.setTimeStamp(0.7665676086489706);
    msg.setSource(36430U);
    msg.setSourceEntity(91U);
    msg.setDestination(12607U);
    msg.setDestinationEntity(111U);
    msg.consumer.assign("STTXNRFPQKFPCGMHKWJQMQLDDWAELVUDDFDSVRIAWACQBLSRZBDBHYELGNLRYRIEYNGCOZZZLGMCMBOZOICOXNJPZPTKYVRNBSAKFWRPIABCNEFQFQOGXYNYCJWQXHWJEZVITQZHCXVVMAMUSFEXPFTXMTWURLBTREHHQYSDAXVKKSBDVWTUGCCSSEOLLGJVNZYIZUAONHIBSAKKOXTQJEPPMIYFDWHWGVKXROAHGKJ");
    msg.message_id = 49560U;

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
    msg.setTimeStamp(0.5177703215744656);
    msg.setSource(17433U);
    msg.setSourceEntity(58U);
    msg.setDestination(29736U);
    msg.setDestinationEntity(165U);
    msg.consumer.assign("GFHVYFCTAQCSEEGBTRHARGLBORIITTXSKNNILNFWSLPLKKXLYUTDZRTZWNPSOYRRJVEGCBQ");
    msg.message_id = 3411U;

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
    msg.setTimeStamp(0.9986793478118408);
    msg.setSource(9947U);
    msg.setSourceEntity(160U);
    msg.setDestination(35584U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("CGAJCHEOUHJKHEFDHCIJLFAEFEKAQEDXWOHNHSOGOKSZNFJOJZHFSXLVLNVTCE");
    msg.message_id = 5580U;

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
    msg.setTimeStamp(0.129163522483696);
    msg.setSource(49063U);
    msg.setSourceEntity(52U);
    msg.setDestination(65268U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.438404282861544);
    msg.setSource(60640U);
    msg.setSourceEntity(193U);
    msg.setDestination(3222U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.2432828415665974);
    msg.setSource(58144U);
    msg.setSourceEntity(44U);
    msg.setDestination(41662U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.4313139594347235);
    msg.setSource(44946U);
    msg.setSourceEntity(88U);
    msg.setDestination(56204U);
    msg.setDestinationEntity(9U);
    msg.section.assign("CSTUZNNVJXQXDRPCIWGPLHAAZIBGZZKVYWMODDJKQHNIOUGHOPJMJGSQKEPRRVYVUZCBYFXDMTHYETLKTFDKWTLPFEOUMYBIWANJHVYDUXBBWMDCPFZZACBSVHSBEWNTSMFGQJPJWGHBZRIDOUCROLSPSKNHAVAIMRCLXRLDHVHIFRKVBRMMXCGXLLGEUQTSCOQT");
    msg.param.assign("HGCTDKAOCVJRFEJMGRREZSNFQKVWWPJSHHMSBVSAYTPYDLLZUTIFGHZNOSAQDVRJDEKLYUVEFGXYKRCHWXYNXXI");
    msg.value.assign("MHREMXUARXGDMISMEVHKNYNJKKFYAOPHFZCWDVXWKQWGQJJIFBVUHUVBTXOSTYKLREGKQZP");

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
    msg.setTimeStamp(0.4044521090713621);
    msg.setSource(7713U);
    msg.setSourceEntity(74U);
    msg.setDestination(32378U);
    msg.setDestinationEntity(19U);
    msg.section.assign("RDNYCIMKHRZGFFQBIHNGCYVAPNMNRDVAZJLXNHFOJJWUG");
    msg.param.assign("RFGSJEILWAVIQHWUIRZWYAVPTOPTLSRQNEPGRLTXJZDEFWEHLEFYQTFBXIYDOFPTZBZAQHVOGWWXMYBNACDUMQAIOFQPVGSLGUYXHYBOSJMTWARBHJIYBXZDPQSAHKKULJHMNBTKBPRDJWVZOMKUFHQVDQXKZIKNEFSNMKCITTRWOCMBDECKGNXMRLPKSAPUNUECTZCVQSDBUELHDGWNVCDC");
    msg.value.assign("WBFKUQQYBTPRGKGOUZNINEFQWLLDWMLVSYCCRRIZTDYMMUUVWRZYKLTNPDUZFE");

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
    msg.setTimeStamp(0.2945048883191205);
    msg.setSource(9888U);
    msg.setSourceEntity(174U);
    msg.setDestination(9412U);
    msg.setDestinationEntity(240U);
    msg.section.assign("OSKVJPLEFLYAIPOZCKZRHLNIVDRPCDYSJCEFBDKFGLNSDMUFEJAZUQXIROKUEFIUFIOVTBVWDKPQZMTTCH");
    msg.param.assign("GZRAESXZNRWOWRUAEQNECJDUQFVXVQJRWB");
    msg.value.assign("YHRRXNLSAOEFDLXOLVIHBQUTJSYUBBZYDFWWDAZQLYOJNAKIOVVINACGGOSVPFU");

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
    msg.setTimeStamp(0.5739470873232463);
    msg.setSource(14470U);
    msg.setSourceEntity(138U);
    msg.setDestination(41343U);
    msg.setDestinationEntity(106U);
    msg.op = 51U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("NCIBWIUJUVSSORXMSMQWWJCEJVTHSXXRRRFABFEOIXKVHVYYBZMN");
    tmp_msg_0.param.assign("VHOALLYCYVWWWNPJXRGORXTSYXGJFGKHOQLQMXRGSHDUTESSVJDHUHQKKROUYIPCFWKDAWEBICIZNYDEWNCCTLWFKUZAPLWHELIMBQRLVTMCZQHEGMXBWSTXASKMVBGJROBOACUIFZUFNXOIAYFATVPQIDKCNYJRUAPMBDBJ");
    tmp_msg_0.value.assign("WDGRUPFATRWXZYFVNCEIPVSARR");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7377238989101835);
    msg.setSource(62282U);
    msg.setSourceEntity(140U);
    msg.setDestination(7344U);
    msg.setDestinationEntity(183U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.360163999766242);
    msg.setSource(28886U);
    msg.setSourceEntity(211U);
    msg.setDestination(37716U);
    msg.setDestinationEntity(13U);
    msg.op = 153U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("OAIYRBSULWAVTHQUMFZUFCLRBKLXHVAMGFYRDXJQSFIXEKGDRQOIWSFPJUSKCQCNZXTLJWWBGXWEHZVDKOPEVMUXTXBQREOCPWLJOJKGUZLNGAJLKISRTOXPBTPVKPMVIUQFAGNXABOYDHRXZVQBPEWGJFEEIDWZYDOCLFRYQIYGVCFKAHMYZDVTSLPNMYZHNTNHIQBRAEYGKOHHSCDACTESCOTBBNLJJJMAWSQINYURUUTHGMF");
    tmp_msg_0.param.assign("QKIREPZJYQFRHWDCGIUXRUYFJZIGESEDOMKAAHXULPWVABPRDACCNLDYINAZK");
    tmp_msg_0.value.assign("FYOWYJCVCYQCJPYGEVITIBUNCNLOAETSFSTSNPLGUMQQZMVXBCZBOBVZAHKKHAKQOUHJZSQSLHQPOFNVNXEMUWGPBJJFRITBETDETTC");
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
    msg.setTimeStamp(0.4610836383308826);
    msg.setSource(57638U);
    msg.setSourceEntity(219U);
    msg.setDestination(2182U);
    msg.setDestinationEntity(170U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.498148962270211);
    msg.setSource(58892U);
    msg.setSourceEntity(24U);
    msg.setDestination(8840U);
    msg.setDestinationEntity(113U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.23766807313016514);
    msg.setSource(49446U);
    msg.setSourceEntity(229U);
    msg.setDestination(59813U);
    msg.setDestinationEntity(112U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.43648499868465995);
    msg.setSource(1424U);
    msg.setSourceEntity(156U);
    msg.setDestination(3457U);
    msg.setDestinationEntity(1U);
    msg.total_steps = 90U;
    msg.step_number = 211U;
    msg.step.assign("OVZHXZCQRTOVCUJXSMMURAJDWBOVINHJRJAZLLLZLZIBGEKJNTENTALTMPNYBZZLCQHVWVAGJFWODTOIYUNCESQSLYBQYPTDJSFNPGMUGKHMYOEMVTCHXHDGXUGPYWQYXHEBBFAVEKUDULAGUMWKKQWDJKPPPBTAHMSCP");
    msg.flags = 247U;

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
    msg.setTimeStamp(0.4377463860916957);
    msg.setSource(33659U);
    msg.setSourceEntity(69U);
    msg.setDestination(20745U);
    msg.setDestinationEntity(220U);
    msg.total_steps = 228U;
    msg.step_number = 125U;
    msg.step.assign("BRAGVROTOURVAIXCFDZHSUEKDMWKFTUFMQDXCQFZDSIQZLENDXTGJIUSJYBKETBVJERWGTXDHOPZGSCJBATCDSNHYI");
    msg.flags = 11U;

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
    msg.setTimeStamp(0.17379249742086433);
    msg.setSource(41730U);
    msg.setSourceEntity(172U);
    msg.setDestination(33414U);
    msg.setDestinationEntity(6U);
    msg.total_steps = 10U;
    msg.step_number = 193U;
    msg.step.assign("UQKKGMGZYQGITFXIAYCDZBLWUZADKOCNWTGHXDYNTQFGMF");
    msg.flags = 239U;

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
    msg.setTimeStamp(0.9557101442245367);
    msg.setSource(42836U);
    msg.setSourceEntity(149U);
    msg.setDestination(18231U);
    msg.setDestinationEntity(55U);
    msg.state = 140U;
    msg.error.assign("UUDIMVQKKZFHSJGLNNPZWXXEUWAVTQXQLFWWPYIJYJEVVMHJVYCVW");

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
    msg.setTimeStamp(0.09026915363270893);
    msg.setSource(3751U);
    msg.setSourceEntity(128U);
    msg.setDestination(1104U);
    msg.setDestinationEntity(54U);
    msg.state = 58U;
    msg.error.assign("HUSDNWZMFPPRELMQNEQFONYFRDLUUHKVCIWUJOZRSKJTBYKYXRGCVVVXZVQWGTNCPRDZPVTWPBMNYPSAXDKYJOHCKOWNLZGDICXZLEWSWSYSAODPRSWRDLYBAXREHMIOJJOZOPHVXCIZKLCGGMCLBEADHCLQFVXTASJIBLPNIRZTQMJURTIU");

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
    msg.setTimeStamp(0.994460723426323);
    msg.setSource(37835U);
    msg.setSourceEntity(53U);
    msg.setDestination(11195U);
    msg.setDestinationEntity(19U);
    msg.state = 221U;
    msg.error.assign("VAWAMNFHFACHGQJXMUHRJEYLCOGOSPBMDRXTLABYHPLEEGZOSJKODWPFPZACWXJHVXPKQWNODOCSNDRBNUEFNBVSJSUYNBGFBCSAGYDCIXZKURUMEFKRHELQTYWZPUJTFRGVTZDLDELPYTYUMDAQQALYULMRHVSOSHNZCHFIIZQXPLI");

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.6031143004897227);
    msg.setSource(10061U);
    msg.setSourceEntity(126U);
    msg.setDestination(6541U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.7504372317600496;
    msg.lon = 0.7271800420350152;
    msg.height = 0.47704499922748866;
    msg.x = 0.2190003354921335;
    msg.y = 0.357503193603262;
    msg.z = 0.2828868648984667;
    msg.phi = 0.9422154867656971;
    msg.theta = 0.011093872309951847;
    msg.psi = 0.06877659433889483;
    msg.u = 0.915511645203219;
    msg.v = 0.022858572471336824;
    msg.w = 0.34477053132396474;
    msg.p = 0.7874161774898385;
    msg.q = 0.09901871324712175;
    msg.r = 0.11273156321206435;
    msg.svx = 0.8202652153413933;
    msg.svy = 0.7395210945848353;
    msg.svz = 0.6748868348460407;

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
    msg.setTimeStamp(0.6018254325558464);
    msg.setSource(22583U);
    msg.setSourceEntity(242U);
    msg.setDestination(22449U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.7443496971858921;
    msg.lon = 0.5739119364135858;
    msg.height = 0.1619456283083398;
    msg.x = 0.833267991638792;
    msg.y = 0.5215798587218801;
    msg.z = 0.8049719023087551;
    msg.phi = 0.8713880169568665;
    msg.theta = 0.8646228803594053;
    msg.psi = 0.12588836681244397;
    msg.u = 0.09573766956784657;
    msg.v = 0.48712089453360086;
    msg.w = 0.47434709197044334;
    msg.p = 0.7133135802171203;
    msg.q = 0.30165389894677164;
    msg.r = 0.6716250759291402;
    msg.svx = 0.14481453852149773;
    msg.svy = 0.3250835537050766;
    msg.svz = 0.831748828595318;

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
    msg.setTimeStamp(0.03182525242866985);
    msg.setSource(21969U);
    msg.setSourceEntity(83U);
    msg.setDestination(55091U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.560598217608211;
    msg.lon = 0.25239416232205547;
    msg.height = 0.9682981005209997;
    msg.x = 0.8029251561258371;
    msg.y = 0.9395521865667044;
    msg.z = 0.2941544265542233;
    msg.phi = 0.24476633989698482;
    msg.theta = 0.5213746780555287;
    msg.psi = 0.10008858337560533;
    msg.u = 0.9187240777559813;
    msg.v = 0.5749838101338174;
    msg.w = 0.015314638606837017;
    msg.p = 0.23170137868234664;
    msg.q = 0.7908958530446181;
    msg.r = 0.5393730905196601;
    msg.svx = 0.7304877555183167;
    msg.svy = 0.8807758777574596;
    msg.svz = 0.08760333413395982;

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
    msg.setTimeStamp(0.03611619051325432);
    msg.setSource(31255U);
    msg.setSourceEntity(190U);
    msg.setDestination(47398U);
    msg.setDestinationEntity(17U);
    msg.op = 254U;
    msg.entities.assign("AHGJALROCTGRITBLJZWVJPSZHCZMRCTNYUZVLZHINOHCJANYYLVGGOUBOSTUWIJEDMXEWQJNOPCFFWFYNWPDFIGBBFAT");

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
    msg.setTimeStamp(0.6630711542676468);
    msg.setSource(27847U);
    msg.setSourceEntity(143U);
    msg.setDestination(46404U);
    msg.setDestinationEntity(108U);
    msg.op = 52U;
    msg.entities.assign("IWPRKNTIDONROWJKSLAJJEZSOOUCFCTYNMUBSMNXAKYCHBFGPRTEOEDZKSKCBJZMQIPDHXTROZXAPEUIIULLNVWQDVLQMQLBXMSPSDEYPUNRGROKXIXXWNRUXSWKGZAIVPBCLLTRWPEACHOWFXLQXGMBHFVYDJFKHEKASAVOAVHBGTYJQGVJDLVGNYCFRMZZQCQJGKTVYNYBDZDVUEFLITCNHSHPUMQZGDMWSCRUFPIEBUTWZJFBIAFYOHWQ");

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
    msg.setTimeStamp(0.4062810446444335);
    msg.setSource(6070U);
    msg.setSourceEntity(210U);
    msg.setDestination(62056U);
    msg.setDestinationEntity(57U);
    msg.op = 162U;
    msg.entities.assign("FLZOKTSDPHGSBYRJPXHJSLWQAMVPZFMVEMXUSK");

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
    msg.setTimeStamp(0.9005341487315781);
    msg.setSource(22216U);
    msg.setSourceEntity(3U);
    msg.setDestination(36185U);
    msg.setDestinationEntity(128U);
    msg.type = 109U;
    msg.speed = 6710U;
    const char tmp_msg_0[] = {34, -119, -114, 43, 80, -29, 86, 33, 42, -20, 57, 70, 117, 3, -84, -39, 62, 46, 30, 62, -46, -44, -42, 6, -96, 126, 88, 78, -118, -58, -83, -91, -63, 36, -54, 103, -107, 61, 69, -16, -99, -8, 26, -49, 56, 75, -113, 99, -43, 16, 72, 16, 48, -117, 11, 91, 82, 73, -31, -104, 3, -107, 69, 51, 30, 88, -35, 40, 95, -62, -78, -35, -67, 37, -3, 27, -9, -126, -71, -34, -50, 45, 21, -52, 103, 118, -47, 62, -41, 57, 96, -41, 33, -86, -39, -49, -100, -61, 58, -112, 90, 116, -115, 12, -45, -73, 21, 82, 100, -17, 126, -94, 122, 91, 26, -108, -72, 72, -23, -18, 33, -96, -29, 15, -59, 71, -48, 110, 91, -37, 93, 100, 126, -122, -101, -59, -67, 81, -4, -39, -19, 20, -89, 79, 124, -64, 103, 48, -46, -118, 67, -66, 87, -115, -35, 65, -9, 119, -58, 109, -82, -12, 52, -91, -26, -7, 100, 123, 47, -81, 50, -10, -119, 103, 44, 24, -33, -127, -91, 124, -8, 126, -65, 33, 66, 46, -101, 15, 86, -11, 4, -74, 80, -31, -112, -102, -94, -49, 76, -65, 36, -11, -30, -80, 61, -29, -33, -72, -110, -99, 61, 58, -47, 25, -10, -69, -110, 31, -104, -110, 46, -79, -29, -98, -24, -72, -47, 45, -101, -112, -86, 103, -114, -74, 71, -51, 11, 85, -18, -48, 62, 33, -119, 22, 57, 122, -24, 3, 31, -59, -128, 83, 57};
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
    msg.setTimeStamp(0.6046335622561101);
    msg.setSource(47645U);
    msg.setSourceEntity(234U);
    msg.setDestination(32143U);
    msg.setDestinationEntity(196U);
    msg.type = 149U;
    msg.speed = 11963U;
    const char tmp_msg_0[] = {84, 38, 105, 80, 72, -27, -80, -50, -95, 5, 7, 93, -36, -21, -59, 53, 37, -90, -103, -39, 5, 90, -51, 116, -47, 100, -89, -20, 74, -60, 94, -17, -53, -106, -30, -20, -29, -104, 67, -85, 12, 59, -66, -37, 12, -86, 51, -54, -44, 95, -28, 89, -90, 24, -61, 46, 35, 55, -96, -107, -75, 69, -111, -42, 6, -113, -17, 120, 33, 90, 35, -58, 117, -91, -93, 30, -52, -75, 59, -34, -28, 91, 53, -39, 114, 60, -84, -22, 84, -54, -48, 123, 62, 101, 51, -100, 61, 106, -81, -114, 11, 67, 16, 81, -60, 5, 102, -11, -22, -122, 37, -111, 80, -110, 62, -8, -124, 64, 20, 62, -55, -7, -75, 93, -108, -25, -78, 31, -109, -22, -82, -14, -11, -100, 105, -90, -97, 38, 69, -87, 124, -53, -109, 86, -12, 50, 83, -48, -127, -4, 124, 39, 18, -94, 12, -126, -11, 67, -115, 87, -49, -6, -20, -69, -82, -28, 103, -10, -87, 6, 3, -52, -106, -76, -99, 90, -52, -99, -112, 59, 59, -99, -55, 90, -91, 108, -98, 42, -95, -28, -127, 107, -21, 60, -24, -16, 41, -98, 101, -117};
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
    msg.setTimeStamp(0.7019375927554852);
    msg.setSource(52720U);
    msg.setSourceEntity(125U);
    msg.setDestination(32578U);
    msg.setDestinationEntity(176U);
    msg.type = 12U;
    msg.speed = 65099U;
    const char tmp_msg_0[] = {-120, -104, 95, 120, -69, -101, 105, -42, -47, 72, 42, -43, 90, -22, 5, -63, 101, -74, -26, 33, 110, 97, -117, -36, -122, -92, 122, 120, -72, -33, -44, 90, -117, 116, -100, -8, 65, -95, -46, -73, -61, 78, -51, -78, 76, -95, 100, 15, -115, -64, -48, -85, 69, -102, 71, -90, -102, 81, 51, -24, -16, 89, 96, -22, -82, -61, 105, -14, -78, -55, -115, 34, -25, -93, 16, 53, -15, -12, -41, -3, -76, -103, 30, -50, 0, -105, 39, -60, -119, 95, 32, -53, -119, 83, -92, -52, -88, -66, 71, 25, 32, 52, 99, -42, 1, -30, 5, -115, 98, -107, -85};
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
    msg.setTimeStamp(0.12440363599513515);
    msg.setSource(52482U);
    msg.setSourceEntity(54U);
    msg.setDestination(13070U);
    msg.setDestinationEntity(30U);
    msg.available = 1225453250U;
    msg.value = 220U;

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
    msg.setTimeStamp(0.6878478491932694);
    msg.setSource(61749U);
    msg.setSourceEntity(76U);
    msg.setDestination(37249U);
    msg.setDestinationEntity(187U);
    msg.available = 2906926731U;
    msg.value = 241U;

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
    msg.setTimeStamp(0.5112384568014093);
    msg.setSource(19702U);
    msg.setSourceEntity(229U);
    msg.setDestination(12612U);
    msg.setDestinationEntity(119U);
    msg.available = 2505759204U;
    msg.value = 186U;

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
    msg.setTimeStamp(0.7551173222866673);
    msg.setSource(46036U);
    msg.setSourceEntity(92U);
    msg.setDestination(28148U);
    msg.setDestinationEntity(5U);
    msg.op = 112U;
    msg.snapshot.assign("UFCWYIJGRGSFRXZCMSYZFNYCFTHLTUEQIEHHHOQONCIGTDONIVBAPHSKYLOSFATCBZNIKDKK");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DYKMIXBFIOBWQUUUCCMWWOPGTAUKLXGDCCLNNHVCZJGFXGYYLUEEZOWRFSFSHYJUGVSTIJZLZSRFEWLRVFCQJYJCHWZXMNNBRPBEQYU");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YCUTVHBVPZPXYGHOANHNZINLNMFJXJRHDVQBRCIMICWPJFJUENRZREBKGOFYAKYSHWUZHYGZYORPVAXTLNUWXXSFPGFCUFYCLKJTXIUAEKOTEQELDZTOMSKUSBLDXMCPQLTEWAQWTRRYSJDLBWASLBWVNMVKAQWMXJGGPZTEDMCIZZLGORNBONPKOQBQDFCAJVFSJVEIDJQYXUTFTPNOSDYQABWGVMDUVIMDGRXKWHHUCILQKBIMEOIR");
    tmp_tmp_msg_0_0.value.assign("SCTAMNDCBVEUXCWWNGJIKKZQFBZLFDSGPTYPKAXSDWPRHNBTTJLPAWRBZTPIBGLFWEDLFRNHKBILIJNWTRXAVOTRJOLVSYXXKJQHHKTMNRPICJZGUOOECUSJWAQSGMKNDMNQXFHQZSSGGQDOFEOUAULCVRDIUECDQFUMAPHTGEZYSMRNYJRUPIVHCEZZMXNCWUDBZVQJEXPLTWEKMFIGFLVUPSBOYHMVDLVAMEYYVQJHOKWBKGY");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9085679533143166);
    msg.setSource(1050U);
    msg.setSourceEntity(144U);
    msg.setDestination(54004U);
    msg.setDestinationEntity(84U);
    msg.op = 111U;
    msg.snapshot.assign("PZJRWXBMKQVHPKDPMLWBFJVTEZXJMHYIHODLLRDOIAUQFTIJIYQPHXXVLTUADDACWTNBVXHDI");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("NUUPIWDBKHHECUCRJDJOIJHKWHPFJXVQKXDQSFUAWZZWODDHPBGPPBHVIMDVXCFNJRUJKUQZZUOIFNJBHZROHQVXZSVXXWAHBBYEEAEZASXUIAGCVWTSQSKTSYTEPDNLEMQTCGKUTDQOOJMATIZQIYMBYSTLVFHEBPRPILMNLXFVRCGROPLESIOTKAUNTGALLRXXQNCGYGZSYBFETMGYIFOGRYMSDMQCNM");
    tmp_msg_0.timeout = 52813U;
    tmp_msg_0.contents.assign("NOELPVGTFVJXKIOBWASVOTKFSXMOQSDSGRQHXBSGFMYUIDFJAPLBBZUMZXMKXFVVLPXUTQRSZPU");
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
    msg.setTimeStamp(0.8239195850429333);
    msg.setSource(5481U);
    msg.setSourceEntity(214U);
    msg.setDestination(42872U);
    msg.setDestinationEntity(22U);
    msg.op = 171U;
    msg.snapshot.assign("YQOPIGBRDJLCBPILQIEUIADGOUVYZURXLSMOBFHKVTKKDPFGRRCWQBGSZJRCBZQZCIZGJHAQCVWYIHWFXWSRXPIWGTNAMGPYWCEHYISUATTXDUHYKLPNKBALLJZMBTENDTHTTOFYNABKKQCANNKJMLZR");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 153U;
    tmp_msg_0.actions.assign("PHTMRSBENDXAPCMFXHVIFNKHKLXFPSEMWNGUEYYBIKDUVVJRJNASZVDNJYMUIHWBSOOLLKSGVPMMDDABETHLZKQEODITSCSLJGRINWFAGPRKCPRGQQDTFVCSFGVQGHDDNAOPZYTMWVPLRAADFOZXLHCLHLQBRZUMAWBEJYXZTMEZUPCBJXBIKZU");
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
    msg.setTimeStamp(0.21446548160909606);
    msg.setSource(55537U);
    msg.setSourceEntity(72U);
    msg.setDestination(30226U);
    msg.setDestinationEntity(148U);
    msg.op = 93U;
    msg.name.assign("ZWQPJHHRWIWUSSQMATRHOPEMAIPBXPDSOOXMGNGAZSTGRUQLCZYBWSRBNPMKBWYKHVKZXXLQUSTKGJWQLHVRZDTIFVJVYXIVIUMQVYTCAQYBYNFABTFVSUOFZXGLBGMWMFFNVX");

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
    msg.setTimeStamp(0.9822104833142036);
    msg.setSource(49673U);
    msg.setSourceEntity(222U);
    msg.setDestination(9322U);
    msg.setDestinationEntity(112U);
    msg.op = 89U;
    msg.name.assign("VFCTBFAOSJZIRHPHFPCQTUNRTZWGDSANVKNXZHNNBGXTBSECAUCGFIBOPWZKEKXMLWMFQEOVINEFACGWKPRNAWVHXLFKZFMEEJZDTMKURQAPVAJDJJRHQBMDWYLBYLKITDJTBTXARCIUSISLOBXDVQUGZMMYXHLMSLFOZOPRRJYEDHEVHYSYMYGVGZJHBRSVUQWWGIIISDCYYXJKDXOFEPTLKUAZLRCNQNXSYUOUWQPTKCG");

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
    msg.setTimeStamp(0.6260130897405733);
    msg.setSource(53356U);
    msg.setSourceEntity(1U);
    msg.setDestination(25108U);
    msg.setDestinationEntity(25U);
    msg.op = 138U;
    msg.name.assign("OYBRDXDQNNPEXRGONLATWPTKRPUCNOGBKHQPMNHWQBURVUHEFHZPZBKZJIFKJSIWUTMLLUSBTNJUCYGFPGMWEZTVNLPCI");

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
    msg.setTimeStamp(0.9320011378762191);
    msg.setSource(55100U);
    msg.setSourceEntity(186U);
    msg.setDestination(36529U);
    msg.setDestinationEntity(212U);
    msg.type = 191U;
    msg.htime = 0.7858328144965909;
    msg.context.assign("MKLGZXGRLZQVLOPOWCFGNZBMHHANJLDCOTCPIIDEWBPVLKTSRXTKPYICWOENNPINDWUSDHUMRCRTAUANVNDUXATQJOSEFFYWJQPZWOFHMKEAZHNFGBYHVBCSHYMCFKMZSYXELQGKCFWZQMVPUO");
    msg.text.assign("SMURKGDNUEKPWZRIIHOEGIBPUUHSDAAAWZFWEUKFTLWDKTXLJTNZUSQVXDPLCXLSMTBYFKQJNEVTIZMKAMBYYIWGGGISZKMJGAVBQTEYHKWVIERPOSSUZQNDJMLTDAUPBWLHLPQDHIMYRVHXOAZWCDEMQFKGRVFLRFIHHXTLONNKSCYETLONBYXQNMONRQCPYQOPG");

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
    msg.setTimeStamp(0.9937281219419528);
    msg.setSource(2324U);
    msg.setSourceEntity(69U);
    msg.setDestination(9380U);
    msg.setDestinationEntity(219U);
    msg.type = 214U;
    msg.htime = 0.4244744130295669;
    msg.context.assign("DJUMQUDMGXYAVLPWGTGNTNZECJQNYVWUAAFHSNBBHDIOPRIOSKIHJVZLOZGKWOTRMASTSZVSCENKNCEGQBCKXHUSKFBJEVECEFPKRJODFFMISWRLPHHGUXWMPTOARFNQXZSACLWZLNRQWMTFNADRJAIHXQMLMYUYXLPZUQANURVYPXVIJDPZJTVTMLCCKOYYIGAKEPVYGKBMFHGCQBBYOITEDUBIRSFJXJEQTUDDDOQLXCLHIKH");
    msg.text.assign("CASTBMAENBYSSYOBYECGFPFE");

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
    msg.setTimeStamp(0.1844884973340689);
    msg.setSource(12696U);
    msg.setSourceEntity(59U);
    msg.setDestination(50164U);
    msg.setDestinationEntity(218U);
    msg.type = 208U;
    msg.htime = 0.8170613252428567;
    msg.context.assign("THGFPBEJUDOJPHFAJYFKFASRFONLOIOXJDYZSPRSNIQJIZLFGACSCETVWNVEVPBNUUQIVGSPEKRXNSLUFQDHHNHIEGSHRBDADRMORBKTEXGVVRBFPVZOPKWWQFJXGCSQYNOWDWOSGTQDZMRAXQUVA");
    msg.text.assign("UJUHLEEFRVRHGYJQQQXFCZIHUOUBXPIBTNEZIEQABPQHSBNFLGJJFSDSCAJMPELTZOPKSPRNYXVUYRKYYDCUBVCGEATQHEQZKTPCDOTDYVVDPXNDZFCCFIKBWRWSNGZSQVFPOIDPYIBVJABTEZDSEUUXSMBVGOZMZTALBXJYLWAKMCCOHWFKYXQOANFWGHITLWWRYAXMTDOE");

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
    msg.setTimeStamp(0.9496052372533795);
    msg.setSource(33059U);
    msg.setSourceEntity(88U);
    msg.setDestination(11423U);
    msg.setDestinationEntity(119U);
    msg.command = 4U;
    msg.htime = 0.01805926808662217;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 90U;
    tmp_msg_0.htime = 0.7773973488538294;
    tmp_msg_0.context.assign("KIBGQJGXQMHEUZGTFZXQWMCBOABWRNOEKECHALVQDPDDESEWARYDGXLGXWQRGVSACEQDEBSBJUVFTICWGIAUFSMPZSFYFTDVETIONJCASXITXCKQBNVZITOPIZLRYGYRJBLVRPMLPVIQPZYNNAXXGRWTHHAPKMJFHSBYPUDRCUHIWVFCVBJJVNLOLTYKMUNCMGRXO");
    tmp_msg_0.text.assign("CWNOEQLZIRMENZAWRWCIVOBZLSAZJSTBDXJT");
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
    msg.setTimeStamp(0.9055456306133786);
    msg.setSource(17243U);
    msg.setSourceEntity(66U);
    msg.setDestination(49422U);
    msg.setDestinationEntity(171U);
    msg.command = 246U;
    msg.htime = 0.8129973633343932;

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
    msg.setTimeStamp(0.8637451060318967);
    msg.setSource(26755U);
    msg.setSourceEntity(132U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(38U);
    msg.command = 178U;
    msg.htime = 0.5386446153264981;

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
    msg.setTimeStamp(0.2421834094682055);
    msg.setSource(48436U);
    msg.setSourceEntity(172U);
    msg.setDestination(51776U);
    msg.setDestinationEntity(185U);
    msg.op = 156U;
    msg.file.assign("FITVOZTEJVFXGYCTDALREBLPUSWWELGCMRTVIUZINXKSWTQYUBYBWLJAOSKKLQGZSWVEJDYMLDMJBMBABPMKDPSJARBRIZAVOQEREIFCOUXDUZAHYLNNXCQMOFSIIWNFKJLRZCWCVNXKSFMQGVHJQNYANMWILTZNTRZGXCODMQHFHMETJFSBOERHOPYQVUXFTEHUHCNOXZPQETUKDKYGHVWSX");

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
    msg.setTimeStamp(0.22887804028781367);
    msg.setSource(26201U);
    msg.setSourceEntity(215U);
    msg.setDestination(17216U);
    msg.setDestinationEntity(131U);
    msg.op = 152U;
    msg.file.assign("TEUWKBHGPUOEQYLADVVBNMFJNVFLZAIRCFUIKOLGBZJWFZFZOQPYVNTHCHMOGSRWWZBKGIQZVHRTRZAUEKSNEZMDARMTNKGFSLLIYOEUCSCMPYVP");

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
    msg.setTimeStamp(0.3785813269409848);
    msg.setSource(42274U);
    msg.setSourceEntity(165U);
    msg.setDestination(56022U);
    msg.setDestinationEntity(233U);
    msg.op = 219U;
    msg.file.assign("MCTMYZESZYCPYZKTAFXWQXQNVMWORQIQNWIVGZDOGIMEMTYUFMCNKQVDTKCJ");

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
    msg.setTimeStamp(0.7476504052464733);
    msg.setSource(10853U);
    msg.setSourceEntity(22U);
    msg.setDestination(12292U);
    msg.setDestinationEntity(184U);
    msg.op = 79U;
    msg.clock = 0.41352143085550397;
    msg.tz = 101;

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
    msg.setTimeStamp(0.6537409019418755);
    msg.setSource(17209U);
    msg.setSourceEntity(75U);
    msg.setDestination(14148U);
    msg.setDestinationEntity(137U);
    msg.op = 83U;
    msg.clock = 0.48829869685733773;
    msg.tz = 43;

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
    msg.setTimeStamp(0.8920473976657213);
    msg.setSource(39721U);
    msg.setSourceEntity(50U);
    msg.setDestination(27154U);
    msg.setDestinationEntity(220U);
    msg.op = 125U;
    msg.clock = 0.012068781085823765;
    msg.tz = -22;

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
    msg.setTimeStamp(0.4262901975014337);
    msg.setSource(63145U);
    msg.setSourceEntity(86U);
    msg.setDestination(5034U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.04910055629707921);
    msg.setSource(12723U);
    msg.setSourceEntity(96U);
    msg.setDestination(29504U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.6321130168695536);
    msg.setSource(288U);
    msg.setSourceEntity(43U);
    msg.setDestination(32561U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.6526530108877335);
    msg.setSource(369U);
    msg.setSourceEntity(3U);
    msg.setDestination(18180U);
    msg.setDestinationEntity(232U);
    msg.sys_name.assign("NVGDIHYZEXSLTQBILUCIMHB");
    msg.sys_type = 211U;
    msg.owner = 5519U;
    msg.lat = 0.5311858794423996;
    msg.lon = 0.4786205370060417;
    msg.height = 0.7768808136927241;
    msg.services.assign("EVQVHQWPUMCTODWWGUKFI");

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
    msg.setTimeStamp(0.7652671404201254);
    msg.setSource(54732U);
    msg.setSourceEntity(199U);
    msg.setDestination(4862U);
    msg.setDestinationEntity(198U);
    msg.sys_name.assign("NYZBTELKGDSVWNMDHMAXYHOWFCWNUIXGPJWARCIDMJNLHVOCRENQUWHKALVKYBPVIUOGLIPGMJXKGJVTSRLHCFESDSHKJKNQFGYCAZQCOMHMZQALSMWYPBBKQUZRUZXUYQZWXFKXPIASDGTUXPTVHOFFPIOTVHMW");
    msg.sys_type = 193U;
    msg.owner = 6732U;
    msg.lat = 0.4327510062206269;
    msg.lon = 0.09759466416263818;
    msg.height = 0.679519211663766;
    msg.services.assign("OLHJKQEAUIBBPVYUDHWNYNRZZQAVCHZMZTTRVDWDTHTIHIUFKVSWUVIIWPZUSZQDEOHRTAYTEUCMPICRAHKPRVKFDXLAXQUHMFSURMWKXMCRTGQIQCOOSGYXRUOJYKDBVIDCJFMCZGPXNDBYYIOOEPLENVBPJKRLDHAQMFQLEZGTEMXSOBEBWVGFVAQDPAJEYOLGXQZCRMMGJBPISJT");

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
    msg.setTimeStamp(0.2748146523039272);
    msg.setSource(37241U);
    msg.setSourceEntity(182U);
    msg.setDestination(49677U);
    msg.setDestinationEntity(105U);
    msg.sys_name.assign("KYGRVJPGALTAHIFXONCQWJTFJOIGEKUHANKEZYHOOANQROGNNQBFMBDEVDZWZMWKONVTPCTGPKFNXIYSFSMZMPXHBHMYOTYLURBHJXCIRFJAQHIJKSQPMQBDWCOTLNDVGDCJYXUDEPZETXDWVCJSYJZIGCVUSLHPSYMCPBRISXTKWVFRWREFPIEUKUAAEPCRUDUZ");
    msg.sys_type = 222U;
    msg.owner = 43627U;
    msg.lat = 0.1827358930355656;
    msg.lon = 0.47713413183499;
    msg.height = 0.8803635826774204;
    msg.services.assign("ULOAHGQPKPHTRFFFJFTHICEAZYEDNBOCQCYLNTMDVXNHVCGGMDKTOAKDBGDRKYPBGS");

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
    msg.setTimeStamp(0.18306804232151952);
    msg.setSource(31739U);
    msg.setSourceEntity(108U);
    msg.setDestination(5731U);
    msg.setDestinationEntity(39U);
    msg.service.assign("FVHZKYHKLTDOIRSSJSYILRSRBICSDGJFMPEBGAHNYWFQCCAUWRHXPYFFPMDYIUKVDTAXHEZAQHDGGXNFLNNJFPOUUPJTVDWTGVTYTNZWLYLCBUWBOZMIQODNJBGRORQVTZTASMFWXVWXJQRKSEEHFFSNQUAGXOINXZJUSBIYEPRACPAONZYQVBQKQPMLXDJTHEBCMEMOHKTJKGIHLWPVYXMMUGOS");
    msg.service_type = 192U;

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
    msg.setTimeStamp(0.5719397225872751);
    msg.setSource(60203U);
    msg.setSourceEntity(204U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(242U);
    msg.service.assign("UDBJWZPULELYPZKEQIQWCIS");
    msg.service_type = 34U;

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
    msg.setTimeStamp(0.811214091628087);
    msg.setSource(31877U);
    msg.setSourceEntity(124U);
    msg.setDestination(4628U);
    msg.setDestinationEntity(123U);
    msg.service.assign("EUQLOWLTTDNFGDUWLJSUFEVYKBZUINWCLPAESLDKX");
    msg.service_type = 100U;

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
    msg.setTimeStamp(0.19947787050117272);
    msg.setSource(43380U);
    msg.setSourceEntity(187U);
    msg.setDestination(29451U);
    msg.setDestinationEntity(201U);
    msg.value = 0.2158014695151731;

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
    msg.setTimeStamp(0.18344024333867015);
    msg.setSource(3489U);
    msg.setSourceEntity(181U);
    msg.setDestination(49083U);
    msg.setDestinationEntity(216U);
    msg.value = 0.35676977807897736;

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
    msg.setTimeStamp(0.6571333060575147);
    msg.setSource(35743U);
    msg.setSourceEntity(28U);
    msg.setDestination(21312U);
    msg.setDestinationEntity(194U);
    msg.value = 0.6035997542030785;

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
    msg.setTimeStamp(0.08096885626874273);
    msg.setSource(29947U);
    msg.setSourceEntity(161U);
    msg.setDestination(50701U);
    msg.setDestinationEntity(177U);
    msg.value = 0.7382293662592309;

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
    msg.setTimeStamp(0.8678831762584344);
    msg.setSource(8462U);
    msg.setSourceEntity(232U);
    msg.setDestination(10768U);
    msg.setDestinationEntity(69U);
    msg.value = 0.7752854529393838;

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
    msg.setTimeStamp(0.642858100713913);
    msg.setSource(50769U);
    msg.setSourceEntity(179U);
    msg.setDestination(20848U);
    msg.setDestinationEntity(201U);
    msg.value = 0.6950828023092398;

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
    msg.setTimeStamp(0.11149207666059857);
    msg.setSource(55277U);
    msg.setSourceEntity(117U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(9U);
    msg.value = 0.3967601511456854;

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
    msg.setTimeStamp(0.9675969943277867);
    msg.setSource(6336U);
    msg.setSourceEntity(23U);
    msg.setDestination(58148U);
    msg.setDestinationEntity(252U);
    msg.value = 0.36595300267985675;

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
    msg.setTimeStamp(0.6607244513381981);
    msg.setSource(14134U);
    msg.setSourceEntity(222U);
    msg.setDestination(8212U);
    msg.setDestinationEntity(115U);
    msg.value = 0.5014756749930909;

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
    msg.setTimeStamp(0.44956316183122647);
    msg.setSource(20157U);
    msg.setSourceEntity(153U);
    msg.setDestination(8551U);
    msg.setDestinationEntity(21U);
    msg.number.assign("KKWXHOGJAZFFMYGQZXKOOGEWZDRFOZGTPRMXETNEAWHCZMPMOBGULIQDIBUMUFBBTWRTQSDAIAVSDFCHSHCUAJOMJUUNRIHHOCLEWSBGBV");
    msg.timeout = 37271U;
    msg.contents.assign("IBTVOGCKQQJAZIELEFJLWPVBOPRCOZKZREEIVUDSBXDBSQWTEIPZLXJAGBJUHVLDIUPJITYWKQJBRZSHLPKMCXUNPVXLIWSSBUSDBTIVAGBLCGAJTQUMXYYZAUHPDHALMXOXMAELGENKRXCQFTCKQIEYDLCWMVYTFGKSSVJHHEZMHHUWOFPOITJDAZMXFFKNNFWUMFWCDNFGQZDYPANRQUGBOYPSHFSYZN");

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
    msg.setTimeStamp(0.17293670270615724);
    msg.setSource(43080U);
    msg.setSourceEntity(27U);
    msg.setDestination(64719U);
    msg.setDestinationEntity(52U);
    msg.number.assign("THSCAXQRLUCZHHIHNRWPDJVPBADZWSHVOZCVBTEZKPEDGCAOOQRTPGBGUEZPF");
    msg.timeout = 65489U;
    msg.contents.assign("WDEZKJZROMHDBUWGXRBYSDKQWAOOCGPXGKNCHQAJCAQIVQTCKQLSUVONRVTSFFHASKABPOHMRNBIDXLSWRGGQMWRZVMOMXHXVQLIHLZFUFWPVKA");

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
    msg.setTimeStamp(0.7142994323189493);
    msg.setSource(2871U);
    msg.setSourceEntity(54U);
    msg.setDestination(62424U);
    msg.setDestinationEntity(86U);
    msg.number.assign("ITAFRRPNWTCARHBRABBUXRCKZMQBZFJHDMVYZIVWYMHNTIZZXZZJBCLFOSOTLNXVWUOHQONUWKFELMHVNWADNVLKHIQYUTGFHZXDAECGSDHMKDJLPSTPWBUSJCUIBCVN");
    msg.timeout = 65272U;
    msg.contents.assign("DHQXEQUPGLHJSINLAKZMYRLRFAHCFQCJJOMEJSEDOBGHWMKPWRHWMYQFAMFNUMKNJDSFELUPRZBTKVJBCPFQEVYTGYHOUKTAZIKYOLLTUSAOZQNXC");

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
    msg.setTimeStamp(0.9619484951005206);
    msg.setSource(61409U);
    msg.setSourceEntity(152U);
    msg.setDestination(47808U);
    msg.setDestinationEntity(116U);
    msg.seq = 638749877U;
    msg.destination.assign("EJUYNUGHNMQSFCIGHNDKVXJSUVDLAUNTRGFBCWRIWRKBSWRQRPJVXMKVHSIDCYSIZYMDXSPFAACPAQAOXTYMROBLGQLPTBWFOHATZDXLJLGLBDPPMBFHNDEZWQMIVNGVQOKJIFGCGIFEOXNBCRQEPKGXZKIGTFKKCQQWMNFIXVSCEQOWOLMZPZFMVYZLKHAXHPERBDJHJUVTHPAOLJRHNRTSYEDUYEYWTUJVSUZSDZKENUEOOBYBACC");
    msg.timeout = 32975U;
    const char tmp_msg_0[] = {61, -5, -53, 32, -100, -112, -119, -63, 120, 53, -63, 0, -69, -125, -39, -112, 67, 119, 120, -4, 30, 110, 91, 116, -120, -96, -62, -37, 84, -84, 71, -21};
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
    msg.setTimeStamp(0.5485779975270644);
    msg.setSource(52654U);
    msg.setSourceEntity(105U);
    msg.setDestination(63450U);
    msg.setDestinationEntity(81U);
    msg.seq = 1816314308U;
    msg.destination.assign("ZGHBKJOXVLCNVXSTJGGIIPWUODYMEEQSHLBJUTNFGQBAAZTNPOWDRRZHEGSSZUPEBEOZYXOIZMVNXZLHNAUZOQSRUITCFFMOOPFNAIPULRFAWVLTAKCXFHVHEVPDRGFTLQBCYGWWEEMKJXJWUJMBSRDXJUVPKWPBILGHOPCYSKJKDJKYYNICQTNSMHLC");
    msg.timeout = 31806U;
    const char tmp_msg_0[] = {-10, -99, -44, -62, -42, 125, -78, 43, 22, -38, -34, 5, -118, 45, 4, -38, 32, -88, 80, -55, -48, -96, -39, 44, -105, 31, 117, 32, 118, 97, 122, 72, -77, -2, 66, 108, 105, -84, 112, -90, -22, 47, -119, 66, 121, -25, 14, -116, -113, 90, -50, 118, 121, 121, 0, -106, 36, 46, -120, 11, 58, 38, 113, -63, 115, 28, 98, 31, -67, -52, -100, -9, 7, 78, -106, -119, -51, 117, 102, 34, 46, 38, 33, 119, -94, 76, 119, -7, -27, -127, 120, 19, -68, -109, -123, -24, 70, 22, 18, 61, -2, -16, -96, -69, -29, -38, 106, 124, -114, -108, 19, -69, 113, 55, 111, -60, -62, 104, -40, 13, -48, 42, -91, -100, 17, -128, 10, 39, 7, 119, -82, -85, -44, -89, 60, 112, 0, 114, 66, -2, -35, 109, 2, -79, -33, -75, -26, 115, -34, 42, 119, -60, -51, -19, 25, -53, 48, -73, 59, 4, -94, -26, -124, 83, 29, 17, -78, -113, -37, -85, -84, -9, -76, -103, 126, 63, 58, -8, -38, 22, 39, 9, 77, 45, 29, -11, -69, -55, 3, -101, -4, 38, -115, -99, -22};
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
    msg.setTimeStamp(0.777092703792231);
    msg.setSource(50458U);
    msg.setSourceEntity(34U);
    msg.setDestination(46482U);
    msg.setDestinationEntity(249U);
    msg.seq = 1504302652U;
    msg.destination.assign("GTGBIOLXDYXSMYXJZUGVMITANZWSJKFVHVYDWMSOGCYLQFHTEKHSRQWACCLCZYKXORFFQUBAKEWLBJZZNANRTNPUWUCATNPPAWUFXRDVZUSQEGEBYPEBPWYPJWMOQMILUTXDXGOTHRXIVNGVKRFHFNSEIJZLXCXSILRPDAYTEKCIGRVOLRUPJ");
    msg.timeout = 56697U;
    const char tmp_msg_0[] = {40, -24, 104, -34, -64, 4, -39, -77, 47, 2, -23, 29, 29, 118};
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
    msg.setTimeStamp(0.20877847245820813);
    msg.setSource(15881U);
    msg.setSourceEntity(254U);
    msg.setDestination(37622U);
    msg.setDestinationEntity(168U);
    msg.source.assign("MMDFXNDTPWNIRNYFDCSPCRFOEVPTIHIVONSHGXLYTGUTSQVR");
    const char tmp_msg_0[] = {-66, -10, 111, 25, 38, -33, 22, 78, 19, -55, 124, 27, -73, -31, 1, 120};
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
    msg.setTimeStamp(0.6969209647320378);
    msg.setSource(41076U);
    msg.setSourceEntity(22U);
    msg.setDestination(63963U);
    msg.setDestinationEntity(167U);
    msg.source.assign("TGJEXGFLLLHZSEVYUASMPKDOYTHRIJTEUKUUAKTHWDZKSJWMPDJCEMJHMBNARPRSANZ");
    const char tmp_msg_0[] = {-36, 101, 113, -7, 106, -114, 117, 123, 15, -90, -93, 25, -68, 9, 7, -110, -70, 108, -83, -75, -115, 94, -70, 126, 7, -126, -57, -73, 75, -26, -101, -77, 116, -55, -93, 103, 22, -76, 84, -113, -37, -32, -68, -54, -103, -68, -40, 15, -83, 114, -84, 44, 116, -97, -80, 111, 113, 69, -102, 26, -84, 71, -128, 59, -32, -96, -99, 95, 82, -86, -7, -105, 119, 95, -108, -9, -44, 102, 82, -118, 74, -91, -47, 93, 62, 96, 10, -60, 44, 123, -64, -52, 102, -103, -1, 115, -76, -36, 69, -22, 1, -29, 115, 47, -46, 68, 1, 72, -6, -115, 1, 61, 81, 84, -74, -41, -122, -23, 53, -59, -11, 66, 60, 111, 61, 40, -98, 80, -63, 73, 92, 45, -102, 28, -128, -10, 63, 98, 97, -69, 119, 115, 38, 13, 124, -120, -113, 46, -25, 34, -1, -1, 31, -83, 101, 6, 41, -111, 50, 105, 61, 66, 13, -79, 11, 90, -4, 69, 47, 1, 9, 77, -96, -40, 31, 83, 58, -92, 4, -32, 6, -39, -107, 9, 119, -41, -73, -12, 2, -61, -61, 126, -67, 53, -89, -67, -115, -78, 123, 82, -89, 50, 84, 30, -14, -39, -115, -79, -113, -36, -78, 29, -43, -22, -42, -37, -87, 123, -62, 5, -79, 13, 57, 1, 13, 71, 3, -90, -14, -109, -68, 6, -10, -78, -98, 90, 80, -34, -126, 61, -20, 44, 121, 22, -54};
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
    msg.setTimeStamp(0.634483978809802);
    msg.setSource(26339U);
    msg.setSourceEntity(7U);
    msg.setDestination(28666U);
    msg.setDestinationEntity(184U);
    msg.source.assign("RHSMKMLTQKPXHVDNAHSFJEPMUATQBYDBBHARWKFQTGXNWYZZZOCXJDCOIXEARLPZKALFHYYVKCJSMSO");
    const char tmp_msg_0[] = {-15, 31, 67, -39, -100, -71, -21, 40, -48, 74, -126, 47, 103, -20, 15, -88, -123, 102, -126, 42, 113, -66, -69, -62, 32, 14, 92, 73, 75, -41, 126, 61, -66, -9, 21, -42, -64, -97, -87, 75, -95, 6, 99, 69, 15, -113, 100, -80, -59, -98, 106, -51, -46, 118, 50, -117, 21, -100, 65, -89, 33, 4, 64, 21, -7, 11, -66, -86, -68, 0, -112, 65, -46, -93, -111, -38, 3};
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
    msg.setTimeStamp(0.3641682158384528);
    msg.setSource(14164U);
    msg.setSourceEntity(10U);
    msg.setDestination(17969U);
    msg.setDestinationEntity(127U);
    msg.seq = 2793263518U;
    msg.state = 132U;
    msg.error.assign("YPRERXHTWHEDXLHABTLSWMLBFXJEYNHNLOSTQQTYIUUELLAENZAVUSMYPPCRBCTEBIVHDSSCJZGIPSUYAZWPRZJCODHBFDCFUDMSQJHGINIPP");

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
    msg.setTimeStamp(0.2737374044495733);
    msg.setSource(27001U);
    msg.setSourceEntity(108U);
    msg.setDestination(57859U);
    msg.setDestinationEntity(87U);
    msg.seq = 962689471U;
    msg.state = 100U;
    msg.error.assign("CVDRJIYCHBMFGZOVLREHZCVUJSMVJHMJSFWFMYFUVAXPQPYODWATYBFENXLUKVOHXGHPHRIZTQCAUGKIVEFUIODDENQYBKSJRLIKMXELEVTTGIKBJUMZBHLMTZZOSPYLICTSSWRWBEAAXWXOAGLNGVWXNPDYRZSFYPEAGQGTIQZBZQENDWFHLL");

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
    msg.setTimeStamp(0.3852034875030744);
    msg.setSource(8847U);
    msg.setSourceEntity(61U);
    msg.setDestination(41838U);
    msg.setDestinationEntity(229U);
    msg.seq = 2257862756U;
    msg.state = 228U;
    msg.error.assign("UMHANQNDIGNRKNMFFPVTDNLHYVSLGJAOVQHCIOPEOUQTMRVKFZQUZUKFBDKFSDBDKIGEZCXEVXPWLSJYJFZEBCKREARDPWLMVBAEQJFRJJLLIFHABLDPGEKAFZSDIBXCSZUTUKDSVWFWVIPNOHNZYCTYMACCGTPNCAYOMUTLDQVJOAOHQTJYYMPNZRGWUXYAEIORBJBWZRWMHIBTWGREMUBNSCSTJLVYEKHXGXCHPWRLSXQUOGHTQYIX");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.11071475335354286);
    msg.setSource(45104U);
    msg.setSourceEntity(144U);
    msg.setDestination(23941U);
    msg.setDestinationEntity(41U);
    msg.id = 58U;
    msg.range = 0.9014970194877817;

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
    msg.setTimeStamp(0.17185041494852338);
    msg.setSource(19149U);
    msg.setSourceEntity(94U);
    msg.setDestination(25764U);
    msg.setDestinationEntity(155U);
    msg.id = 188U;
    msg.range = 0.1135455071357715;

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
    msg.setTimeStamp(0.6859523857288718);
    msg.setSource(32607U);
    msg.setSourceEntity(185U);
    msg.setDestination(11174U);
    msg.setDestinationEntity(148U);
    msg.id = 66U;
    msg.range = 0.0906560332038232;

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
    msg.setTimeStamp(0.15706395685758634);
    msg.setSource(12297U);
    msg.setSourceEntity(183U);
    msg.setDestination(20023U);
    msg.setDestinationEntity(96U);
    msg.tx = 12U;
    msg.channel = 217U;
    msg.timer = 58467U;

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
    msg.setTimeStamp(0.6561621822880928);
    msg.setSource(43350U);
    msg.setSourceEntity(228U);
    msg.setDestination(38039U);
    msg.setDestinationEntity(130U);
    msg.tx = 177U;
    msg.channel = 4U;
    msg.timer = 57148U;

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
    msg.setTimeStamp(0.49918332282183375);
    msg.setSource(51348U);
    msg.setSourceEntity(109U);
    msg.setDestination(32441U);
    msg.setDestinationEntity(248U);
    msg.tx = 98U;
    msg.channel = 191U;
    msg.timer = 37538U;

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
    msg.setTimeStamp(0.9854951019918112);
    msg.setSource(59976U);
    msg.setSourceEntity(119U);
    msg.setDestination(36415U);
    msg.setDestinationEntity(48U);
    msg.beacon.assign("EMQUSNDTISAIUTZOKDVNHKLLGYPVSZUGHQCBTNMXABEBZKNFFDRKTDWGEILKDHKPONUSUAIPLOPQWAAIWYUHRMOCBJYFRMFVPTDUQEJSRCWBHVPTVLFNPZSLBVJZNHQTTYYOJHMZTHLBVEGPNCCJUPAIGXRDGMOWWLYEZFCWXUKCWVKXEUIWVOJXYQA");
    msg.lat = 0.12557376605534942;
    msg.lon = 0.33910180101258514;
    msg.depth = 0.4946543974397666;
    msg.query_channel = 93U;
    msg.reply_channel = 215U;
    msg.transponder_delay = 218U;

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
    msg.setTimeStamp(0.7175251325698457);
    msg.setSource(25023U);
    msg.setSourceEntity(139U);
    msg.setDestination(59189U);
    msg.setDestinationEntity(1U);
    msg.beacon.assign("WKYQMPXOJJPCTNYTDEBZEWDLRSIOFKJZGJQMBZICCILNFOGRVAHDEUPLIAKPIEKZFNESDPZRXWZMYJHCDNJKBMYIPMZYLCJCHBREXOFWYOOFHSVHARVFTDMRYICRXUTVBXSLHDZQASYUGKGGBKIFPNVLVPCXAYLQDHEKFVIGDMOAEKJXWTQQDM");
    msg.lat = 0.33776679196130166;
    msg.lon = 0.9168105765803819;
    msg.depth = 0.44544970772025183;
    msg.query_channel = 18U;
    msg.reply_channel = 238U;
    msg.transponder_delay = 7U;

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
    msg.setTimeStamp(0.999994355467943);
    msg.setSource(20114U);
    msg.setSourceEntity(202U);
    msg.setDestination(50153U);
    msg.setDestinationEntity(56U);
    msg.beacon.assign("HQNPEPVFHBOMGXWVEAZZCSCXKQSTYWGJUIHBF");
    msg.lat = 0.9909393656840543;
    msg.lon = 0.8866348599766993;
    msg.depth = 0.8047677566458149;
    msg.query_channel = 147U;
    msg.reply_channel = 196U;
    msg.transponder_delay = 45U;

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
    msg.setTimeStamp(0.9101864378476091);
    msg.setSource(54962U);
    msg.setSourceEntity(246U);
    msg.setDestination(50742U);
    msg.setDestinationEntity(17U);
    msg.op = 51U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YGZEZEEOOASFTIAQWGXELJKNVLNFUZILCMJAVKMHUFYVQCKNTCPYUAMMEKEQKGNSIWNBFQMCQZWETNBHPFDLJPQBPTDLCMSYIHSEDGZNLDWARWBGZASOOMOJHELIYNOGPMLZTVJIIYSTGJSRPQTOSOXXUPVHBKHZUYBTHEFJCLASUDJIPBRVIFLMXVPCVXDACNRQWKFXFQWABHUGMSDTORXVXKFHGYR");
    tmp_msg_0.lat = 0.474835521347303;
    tmp_msg_0.lon = 0.23732721218282116;
    tmp_msg_0.depth = 0.8388253642413619;
    tmp_msg_0.query_channel = 113U;
    tmp_msg_0.reply_channel = 63U;
    tmp_msg_0.transponder_delay = 143U;
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
    msg.setTimeStamp(0.05580222382417743);
    msg.setSource(13110U);
    msg.setSourceEntity(232U);
    msg.setDestination(62361U);
    msg.setDestinationEntity(2U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.08689522008317174);
    msg.setSource(60300U);
    msg.setSourceEntity(181U);
    msg.setDestination(26461U);
    msg.setDestinationEntity(137U);
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
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.9496444061249284);
    msg.setSource(56680U);
    msg.setSourceEntity(249U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(225U);
    msg.address = 62U;

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
    msg.setTimeStamp(0.02091342354937631);
    msg.setSource(19423U);
    msg.setSourceEntity(254U);
    msg.setDestination(39340U);
    msg.setDestinationEntity(104U);
    msg.address = 51U;

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
    msg.setTimeStamp(0.08823565912664277);
    msg.setSource(64097U);
    msg.setSourceEntity(108U);
    msg.setDestination(20023U);
    msg.setDestinationEntity(35U);
    msg.address = 196U;

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
    msg.setTimeStamp(0.4401274336695019);
    msg.setSource(4544U);
    msg.setSourceEntity(241U);
    msg.setDestination(1567U);
    msg.setDestinationEntity(92U);
    msg.address = 139U;
    msg.status = 61U;
    msg.range = 0.41649111301133446;

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
    msg.setTimeStamp(0.47214348887086155);
    msg.setSource(15058U);
    msg.setSourceEntity(187U);
    msg.setDestination(3260U);
    msg.setDestinationEntity(141U);
    msg.address = 113U;
    msg.status = 28U;
    msg.range = 0.47140560990624136;

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
    msg.setTimeStamp(0.6126383135591401);
    msg.setSource(51894U);
    msg.setSourceEntity(100U);
    msg.setDestination(30168U);
    msg.setDestinationEntity(133U);
    msg.address = 85U;
    msg.status = 218U;
    msg.range = 0.4481439589348075;

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
    msg.setTimeStamp(0.2186589302603381);
    msg.setSource(36597U);
    msg.setSourceEntity(23U);
    msg.setDestination(51411U);
    msg.setDestinationEntity(228U);
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.43632763066687197;
    tmp_msg_0.lon = 0.09459267706844621;
    tmp_msg_0.depth = 251U;
    tmp_msg_0.speed = 0.2406020946680465;
    tmp_msg_0.psi = 0.11793192175355283;
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
    msg.setTimeStamp(0.2157381097221106);
    msg.setSource(60769U);
    msg.setSourceEntity(36U);
    msg.setDestination(37018U);
    msg.setDestinationEntity(133U);
    IMC::NavigationReset tmp_msg_0;
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
    msg.setTimeStamp(0.5117131626764323);
    msg.setSource(26340U);
    msg.setSourceEntity(148U);
    msg.setDestination(31020U);
    msg.setDestinationEntity(185U);
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("JEWOCRIVJVZYEIGCZUFTXBNVWQUPLZCIEEHOKADFRFFQOKWKBNPDIAMPACRSFSATHLEFUWSHGSYSGQXZLZXGVCMWMDKRCVJNQYIMGHXTFTOMAJTRCPWHGJLSNHZEGBAHDLVMNRPDTJDAZLYIFPIVWCLNEXQLOOUGJYTXILHVNAXDMTTKSYKPIANZGEAKFCNQBOEKBRT");
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
    msg.setTimeStamp(0.8520480741951554);
    msg.setSource(8365U);
    msg.setSourceEntity(182U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(135U);
    msg.enable = 235U;

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
    msg.setTimeStamp(0.8431462014006592);
    msg.setSource(24077U);
    msg.setSourceEntity(104U);
    msg.setDestination(57010U);
    msg.setDestinationEntity(225U);
    msg.enable = 145U;

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
    msg.setTimeStamp(0.6828192447320913);
    msg.setSource(64560U);
    msg.setSourceEntity(209U);
    msg.setDestination(12043U);
    msg.setDestinationEntity(36U);
    msg.enable = 139U;

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
    msg.setTimeStamp(0.6520011263392029);
    msg.setSource(33273U);
    msg.setSourceEntity(141U);
    msg.setDestination(24985U);
    msg.setDestinationEntity(57U);
    msg.summary = 130U;
    msg.level = 190U;

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
    msg.setTimeStamp(0.6960405442161693);
    msg.setSource(12123U);
    msg.setSourceEntity(241U);
    msg.setDestination(50529U);
    msg.setDestinationEntity(110U);
    msg.summary = 172U;
    msg.level = 176U;

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
    msg.setTimeStamp(0.8044375216562996);
    msg.setSource(50180U);
    msg.setSourceEntity(124U);
    msg.setDestination(64512U);
    msg.setDestinationEntity(53U);
    msg.summary = 77U;
    msg.level = 176U;

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
    msg.setTimeStamp(0.5536067990145574);
    msg.setSource(59403U);
    msg.setSourceEntity(7U);
    msg.setDestination(23571U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.23838633067645532);
    msg.setSource(61605U);
    msg.setSourceEntity(40U);
    msg.setDestination(48273U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.8553965301673171);
    msg.setSource(43539U);
    msg.setSourceEntity(176U);
    msg.setDestination(6360U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.266303726333337);
    msg.setSource(46774U);
    msg.setSourceEntity(107U);
    msg.setDestination(38169U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.1810844984962866);
    msg.setSource(7140U);
    msg.setSourceEntity(45U);
    msg.setDestination(40758U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.0708065461599433);
    msg.setSource(64030U);
    msg.setSourceEntity(44U);
    msg.setDestination(14933U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.6739486955056146);
    msg.setSource(8077U);
    msg.setSourceEntity(128U);
    msg.setDestination(10735U);
    msg.setDestinationEntity(231U);
    msg.op = 15U;
    msg.system.assign("SCDMUCPFDAMIFXDCXSGSCDNYMEKJGATMIOWYTZJG");
    msg.range = 0.8720944883717268;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 25U;
    tmp_msg_0.entities.assign("CCYCLCPRIENFPUBHBDWMSRDGBZCWOSWLBRNZJNGGLAKJJSFSCVYZIAVYYEJOFITXTIPLKHHGEJWWFDESLQIARYNNDQOFKUMBXMJKLXXMRLIQIYGUXRAMPAUQRWODZRCAHBTIAZQTOZWCQTZUMHLBNJJNOURUHTDHTWKGXEFGDVVAXCPZVQHSJWMDMPZLGTOSLNOKNFDPJ");
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
    msg.setTimeStamp(0.9361470944192911);
    msg.setSource(5880U);
    msg.setSourceEntity(194U);
    msg.setDestination(31246U);
    msg.setDestinationEntity(254U);
    msg.op = 17U;
    msg.system.assign("LHGTAEAOJIOZKDPCSORDALRWCUJTMLIKQKXEFZZZANBALTPWNMYSUOOOHQBSFPBVDIBDTECKQOPUJZKFCXJRHJMIZPNXYEGDMK");
    msg.range = 0.27507449279316654;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 182U;
    tmp_msg_0.plan_id.assign("HXGXBJHXIPDBTLGSZTMQAVFRMYTFSDLRUVYANPALKTSNMJEKSLBQEHRUDNJXIYUPDCODPJWGOCUKNWETVSWCPGTGPBUZTZPKWFXIRUWLBUQSDZECIRNEKRJHVMVAXFRMYFNOVVXSGSOEAMQGDMWBPGCVHPJCRZUYSWLHQANLWYIRJEIQHIZBAEGYTQTFOSZCVEJFRCGINLCNQAUODQHKFYXHYABMJBPVLEJCFKOKUXHOTIYFOLZDWBDAM");
    tmp_msg_0.plan_eta = -543455411;
    tmp_msg_0.plan_progress = 0.20809070012964548;
    tmp_msg_0.man_id.assign("YLEFNYPJGKEOIZDSVPYQEOFBPDZSLJIBLSVSTAKTREKGTHTOCWNCHRUBQVRNAFAYVBJKGXLQEQXFQBRFXHWVXDUBCICERTFUDZMWVJTEHWOOZYOLIUSTHCQPAGZBJFKOJGYLALVSPHZNKGIUBKCSHLFDWTMBYMQWWRQTMLVUAOPJGIRXDCGZENIKOQJHMIEPWAIZVTZCEUDGSNAKMCOIYXKUM");
    tmp_msg_0.man_type = 50358U;
    tmp_msg_0.man_eta = -1286320850;
    tmp_msg_0.last_outcome = 182U;
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
    msg.setTimeStamp(0.7230053263002624);
    msg.setSource(17152U);
    msg.setSourceEntity(140U);
    msg.setDestination(25058U);
    msg.setDestinationEntity(119U);
    msg.op = 213U;
    msg.system.assign("GZXMQROYGCPALDDVQEQLCYAFTCBNTXOCHYONDJIUTCNGKPOLGHEEZZVDEXTHQGWNOWPSTKIAIIRCTPBXQLXVGQKAQGDKQRBTHVJFJNRCYBMMWBASFRFJUEUSJMRWLI");
    msg.range = 0.2855381750825585;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 168U;
    tmp_msg_0.range = 0.22384404843911254;
    tmp_msg_0.acceptance = 178U;
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
    msg.setTimeStamp(0.9143796280943358);
    msg.setSource(59023U);
    msg.setSourceEntity(203U);
    msg.setDestination(46293U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.21600930853432276);
    msg.setSource(15746U);
    msg.setSourceEntity(40U);
    msg.setDestination(36641U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.24635401802365686);
    msg.setSource(20136U);
    msg.setSourceEntity(89U);
    msg.setDestination(52133U);
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
    msg.setTimeStamp(0.548871590847979);
    msg.setSource(11880U);
    msg.setSourceEntity(156U);
    msg.setDestination(130U);
    msg.setDestinationEntity(39U);
    msg.list.assign("JNTZIYEQWAOTKGDBRDESSRJHUZIHQFPMNQBHHVBVYUZRCWJAZYYKHVJSLYJGNWLKVRACIFQAEYLBMIUDDTANSOSZHGAKJBNDZYTRXTLWZHRUWFMFQMEUZHAFQIVSOTBWKOOYCVXEMILFDXOXBOCQFGPSJQTLIJPKKD");

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
    msg.setTimeStamp(0.0897938319941829);
    msg.setSource(34096U);
    msg.setSourceEntity(43U);
    msg.setDestination(58804U);
    msg.setDestinationEntity(28U);
    msg.list.assign("GQHGRWWKYFJOENTDCRUOQKGEPQHFLZMPOUGQYURTBLDWPHBYAZMUTHBFOJGPJJOHUFDIAKMINZUKUZIILJRSCGGWQOBIXSCENRKZETGIURBZKACQTWVFVOHAVUHZKXHLXZCENMCRIEROIGONMFPNDLADAXYAJYYWXGS");

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
    msg.setTimeStamp(0.8770141875928034);
    msg.setSource(23980U);
    msg.setSourceEntity(91U);
    msg.setDestination(7158U);
    msg.setDestinationEntity(44U);
    msg.list.assign("HKSJBBPWQOVDOHFIZPLCHCIZUKINMXTHJUNQEQZUWYWZYGMNRNOLLGGDELTWWSDXESCARZZCMFGFNVUCVXNIGHGRSRFSPMORFRTDTYYWETACIPOQOJMIJKDXLOQVVPDHPEGTOLEMSKJEPVAHIJLISYSDANMEFBJXXHIYGANWCCXBEWGXYYBKHJTOTUTMREDASUZTAPFLBVSYZKMICFBGAQXRLCKUAQQUBVQ");

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
    msg.setTimeStamp(0.5223943963473531);
    msg.setSource(28609U);
    msg.setSourceEntity(31U);
    msg.setDestination(1831U);
    msg.setDestinationEntity(127U);
    msg.value = 26209;

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
    msg.setTimeStamp(0.2166403457465863);
    msg.setSource(40554U);
    msg.setSourceEntity(97U);
    msg.setDestination(59129U);
    msg.setDestinationEntity(39U);
    msg.value = -27461;

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
    msg.setTimeStamp(0.23077726357209494);
    msg.setSource(3694U);
    msg.setSourceEntity(163U);
    msg.setDestination(39125U);
    msg.setDestinationEntity(150U);
    msg.value = 24872;

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
    msg.setTimeStamp(0.5772168674761696);
    msg.setSource(808U);
    msg.setSourceEntity(33U);
    msg.setDestination(55817U);
    msg.setDestinationEntity(133U);
    msg.value = 0.7897440525179271;

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
    msg.setTimeStamp(0.08623175606927913);
    msg.setSource(56919U);
    msg.setSourceEntity(111U);
    msg.setDestination(49121U);
    msg.setDestinationEntity(224U);
    msg.value = 0.9363756057561547;

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
    msg.setTimeStamp(0.8169932722211025);
    msg.setSource(40644U);
    msg.setSourceEntity(126U);
    msg.setDestination(8321U);
    msg.setDestinationEntity(105U);
    msg.value = 0.9194170129972878;

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
    msg.setTimeStamp(0.1812128038073305);
    msg.setSource(49748U);
    msg.setSourceEntity(183U);
    msg.setDestination(43803U);
    msg.setDestinationEntity(79U);
    msg.value = 0.7671490371141413;

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
    msg.setTimeStamp(0.11379335683271097);
    msg.setSource(61244U);
    msg.setSourceEntity(66U);
    msg.setDestination(53525U);
    msg.setDestinationEntity(199U);
    msg.value = 0.1305624473132645;

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
    msg.setTimeStamp(0.04197755710600437);
    msg.setSource(28255U);
    msg.setSourceEntity(126U);
    msg.setDestination(10604U);
    msg.setDestinationEntity(9U);
    msg.value = 0.6644084577100229;

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
    msg.setTimeStamp(0.19580121024420372);
    msg.setSource(15966U);
    msg.setSourceEntity(142U);
    msg.setDestination(14712U);
    msg.setDestinationEntity(253U);
    msg.validity = 29626U;
    msg.type = 94U;
    msg.utc_year = 45593U;
    msg.utc_month = 132U;
    msg.utc_day = 136U;
    msg.utc_time = 0.5638316236125002;
    msg.lat = 0.9077953805669113;
    msg.lon = 0.7130379838269255;
    msg.height = 0.7722440243273286;
    msg.satellites = 129U;
    msg.cog = 0.9271445323788705;
    msg.sog = 0.568191357210874;
    msg.hdop = 0.8849491072372723;
    msg.vdop = 0.25572165515525647;
    msg.hacc = 0.16310145301088663;
    msg.vacc = 0.9607137486168567;

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
    msg.setTimeStamp(0.4123439855096893);
    msg.setSource(29900U);
    msg.setSourceEntity(13U);
    msg.setDestination(13531U);
    msg.setDestinationEntity(144U);
    msg.validity = 26104U;
    msg.type = 1U;
    msg.utc_year = 40444U;
    msg.utc_month = 6U;
    msg.utc_day = 128U;
    msg.utc_time = 0.9830757737421673;
    msg.lat = 0.849986046536346;
    msg.lon = 0.36336115218732434;
    msg.height = 0.40810309379847354;
    msg.satellites = 32U;
    msg.cog = 0.13274111715511283;
    msg.sog = 0.3824058456851367;
    msg.hdop = 0.9595462874422199;
    msg.vdop = 0.23764401151474834;
    msg.hacc = 0.0843753944605824;
    msg.vacc = 0.3533904346952579;

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
    msg.setTimeStamp(0.27397012171068114);
    msg.setSource(51660U);
    msg.setSourceEntity(103U);
    msg.setDestination(53399U);
    msg.setDestinationEntity(112U);
    msg.validity = 19904U;
    msg.type = 6U;
    msg.utc_year = 43144U;
    msg.utc_month = 2U;
    msg.utc_day = 222U;
    msg.utc_time = 0.8541818057230502;
    msg.lat = 0.8120724088807787;
    msg.lon = 0.5386990948702949;
    msg.height = 0.8315410045660803;
    msg.satellites = 38U;
    msg.cog = 0.8364131424764425;
    msg.sog = 0.6341260960838995;
    msg.hdop = 0.6060269034666224;
    msg.vdop = 0.724951426563486;
    msg.hacc = 0.020042448087347897;
    msg.vacc = 0.85121151016834;

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
    msg.setTimeStamp(0.28554528746343333);
    msg.setSource(60669U);
    msg.setSourceEntity(9U);
    msg.setDestination(31389U);
    msg.setDestinationEntity(59U);
    msg.time = 0.2025451245459593;
    msg.phi = 0.3658790285934391;
    msg.theta = 0.9252424095730855;
    msg.psi = 0.911951511652537;
    msg.psi_magnetic = 0.9116881412058581;

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
    msg.setTimeStamp(0.5648684032680245);
    msg.setSource(53323U);
    msg.setSourceEntity(143U);
    msg.setDestination(45075U);
    msg.setDestinationEntity(221U);
    msg.time = 0.2243591471716907;
    msg.phi = 0.3312158925361688;
    msg.theta = 0.2658826645044614;
    msg.psi = 0.39574179613103677;
    msg.psi_magnetic = 0.25898803277167526;

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
    msg.setTimeStamp(0.6836780184533316);
    msg.setSource(41829U);
    msg.setSourceEntity(231U);
    msg.setDestination(21442U);
    msg.setDestinationEntity(100U);
    msg.time = 0.07960439145538267;
    msg.phi = 0.15284705578909163;
    msg.theta = 0.26858602919231556;
    msg.psi = 0.6980548206415128;
    msg.psi_magnetic = 0.11552394186816906;

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
    msg.setTimeStamp(0.3466387367795919);
    msg.setSource(9721U);
    msg.setSourceEntity(80U);
    msg.setDestination(7214U);
    msg.setDestinationEntity(131U);
    msg.time = 0.01762968869216519;
    msg.x = 0.29611844515835783;
    msg.y = 0.1324015571498094;
    msg.z = 0.04556727900764834;
    msg.timestep = 0.22583725944113642;

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
    msg.setTimeStamp(0.8875708666677012);
    msg.setSource(58422U);
    msg.setSourceEntity(244U);
    msg.setDestination(6487U);
    msg.setDestinationEntity(123U);
    msg.time = 0.36877929647579033;
    msg.x = 0.30554196771112074;
    msg.y = 0.5045700277282661;
    msg.z = 0.21586829725878098;
    msg.timestep = 0.7458026250044838;

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
    msg.setTimeStamp(0.6721844814717255);
    msg.setSource(6779U);
    msg.setSourceEntity(155U);
    msg.setDestination(9339U);
    msg.setDestinationEntity(198U);
    msg.time = 0.9138216897465208;
    msg.x = 0.6035283611197725;
    msg.y = 0.132866328688098;
    msg.z = 0.9923421004602977;
    msg.timestep = 0.822239085531249;

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
    msg.setTimeStamp(0.039568150233382005);
    msg.setSource(3590U);
    msg.setSourceEntity(152U);
    msg.setDestination(40609U);
    msg.setDestinationEntity(203U);
    msg.time = 0.060254776686959555;
    msg.x = 0.5359749462297829;
    msg.y = 0.745041401508819;
    msg.z = 0.8847885478763852;

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
    msg.setTimeStamp(0.7293930320027792);
    msg.setSource(6989U);
    msg.setSourceEntity(192U);
    msg.setDestination(15268U);
    msg.setDestinationEntity(183U);
    msg.time = 0.7640954760076133;
    msg.x = 0.3321280170240526;
    msg.y = 0.3473901707367886;
    msg.z = 0.840336398531636;

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
    msg.setTimeStamp(0.382716851510728);
    msg.setSource(193U);
    msg.setSourceEntity(240U);
    msg.setDestination(36793U);
    msg.setDestinationEntity(150U);
    msg.time = 0.15913047601846664;
    msg.x = 0.002348175876380809;
    msg.y = 0.6626959066536472;
    msg.z = 0.014862063952162607;

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
    msg.setTimeStamp(0.28948137788137496);
    msg.setSource(9292U);
    msg.setSourceEntity(53U);
    msg.setDestination(22672U);
    msg.setDestinationEntity(73U);
    msg.time = 0.3454229607000232;
    msg.x = 0.15335835413309118;
    msg.y = 0.10558900570519614;
    msg.z = 0.4876058341469536;

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
    msg.setTimeStamp(0.03431208687720133);
    msg.setSource(26356U);
    msg.setSourceEntity(1U);
    msg.setDestination(26814U);
    msg.setDestinationEntity(77U);
    msg.time = 0.04680103867073515;
    msg.x = 0.1315123190006645;
    msg.y = 0.6820595832861738;
    msg.z = 0.8456116832423002;

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
    msg.setTimeStamp(0.7882040569087622);
    msg.setSource(42923U);
    msg.setSourceEntity(112U);
    msg.setDestination(58942U);
    msg.setDestinationEntity(211U);
    msg.time = 0.40454616084331996;
    msg.x = 0.06153373236463122;
    msg.y = 0.5440000860471951;
    msg.z = 0.9467746810218018;

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
    msg.setTimeStamp(0.16792589648680611);
    msg.setSource(5889U);
    msg.setSourceEntity(254U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(29U);
    msg.time = 0.6791421045350278;
    msg.x = 0.4967053521655984;
    msg.y = 0.5618126138922783;
    msg.z = 0.25535632116389484;

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
    msg.setTimeStamp(0.37605220806372985);
    msg.setSource(3731U);
    msg.setSourceEntity(241U);
    msg.setDestination(60127U);
    msg.setDestinationEntity(119U);
    msg.time = 0.6298163431328961;
    msg.x = 0.7272620183278051;
    msg.y = 0.048378955111251565;
    msg.z = 0.5078859453571944;

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
    msg.setTimeStamp(0.12999639101360771);
    msg.setSource(55719U);
    msg.setSourceEntity(74U);
    msg.setDestination(53977U);
    msg.setDestinationEntity(143U);
    msg.time = 0.7201963740974899;
    msg.x = 0.7375814861871299;
    msg.y = 0.9983382792469259;
    msg.z = 0.2874320157743039;

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
    msg.setTimeStamp(0.39072547711676864);
    msg.setSource(14282U);
    msg.setSourceEntity(40U);
    msg.setDestination(36846U);
    msg.setDestinationEntity(118U);
    msg.validity = 70U;
    msg.x = 0.8802839648923416;
    msg.y = 0.20586956793180067;
    msg.z = 0.2975383681673537;

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
    msg.setTimeStamp(0.5209944424728387);
    msg.setSource(15597U);
    msg.setSourceEntity(137U);
    msg.setDestination(47696U);
    msg.setDestinationEntity(12U);
    msg.validity = 157U;
    msg.x = 0.39126681933382645;
    msg.y = 0.11499565256295485;
    msg.z = 0.7733339124240202;

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
    msg.setTimeStamp(0.5209932530517686);
    msg.setSource(30429U);
    msg.setSourceEntity(103U);
    msg.setDestination(9123U);
    msg.setDestinationEntity(208U);
    msg.validity = 84U;
    msg.x = 0.2392921294867334;
    msg.y = 0.4075493283554522;
    msg.z = 0.9521972749605901;

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
    msg.setTimeStamp(0.02557153910290777);
    msg.setSource(13068U);
    msg.setSourceEntity(54U);
    msg.setDestination(61195U);
    msg.setDestinationEntity(241U);
    msg.validity = 125U;
    msg.x = 0.16937689835921144;
    msg.y = 0.734776935750955;
    msg.z = 0.4855795752175349;

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
    msg.setTimeStamp(0.5136103018859635);
    msg.setSource(48905U);
    msg.setSourceEntity(152U);
    msg.setDestination(33901U);
    msg.setDestinationEntity(60U);
    msg.validity = 208U;
    msg.x = 0.2627139945834229;
    msg.y = 0.15792136491761344;
    msg.z = 0.07803677313121116;

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
    msg.setTimeStamp(0.4794562610082842);
    msg.setSource(57376U);
    msg.setSourceEntity(109U);
    msg.setDestination(25983U);
    msg.setDestinationEntity(55U);
    msg.validity = 209U;
    msg.x = 0.14180168917357516;
    msg.y = 0.24736319821746178;
    msg.z = 0.0525798735476638;

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
    msg.setTimeStamp(0.8070718449563518);
    msg.setSource(38508U);
    msg.setSourceEntity(202U);
    msg.setDestination(24223U);
    msg.setDestinationEntity(118U);
    msg.time = 0.1890619459997267;
    msg.x = 0.6340204571408157;
    msg.y = 0.6470978881742976;
    msg.z = 0.6359769865791937;

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
    msg.setTimeStamp(0.4923531717356482);
    msg.setSource(61717U);
    msg.setSourceEntity(76U);
    msg.setDestination(58265U);
    msg.setDestinationEntity(227U);
    msg.time = 0.7964350578589032;
    msg.x = 0.5707944473020309;
    msg.y = 0.24534362083922923;
    msg.z = 0.5195082262299698;

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
    msg.setTimeStamp(0.463351033084234);
    msg.setSource(47291U);
    msg.setSourceEntity(82U);
    msg.setDestination(50830U);
    msg.setDestinationEntity(176U);
    msg.time = 0.16166746662696851;
    msg.x = 0.30449893343898937;
    msg.y = 0.2819523346846312;
    msg.z = 0.11885602038394316;

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
    msg.setTimeStamp(0.3137814548028389);
    msg.setSource(35025U);
    msg.setSourceEntity(131U);
    msg.setDestination(7383U);
    msg.setDestinationEntity(141U);
    msg.validity = 67U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.21674918503907825;
    tmp_msg_0.y = 0.02948002384685955;
    tmp_msg_0.z = 0.9500677568485919;
    tmp_msg_0.phi = 0.6916275266121603;
    tmp_msg_0.theta = 0.2875849460279528;
    tmp_msg_0.psi = 0.969738397171592;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9725382128101281;

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
    msg.setTimeStamp(0.5005445188201498);
    msg.setSource(7687U);
    msg.setSourceEntity(213U);
    msg.setDestination(60789U);
    msg.setDestinationEntity(183U);
    msg.validity = 64U;
    msg.value = 0.5502133656137093;

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
    msg.setTimeStamp(0.34582594102850184);
    msg.setSource(21102U);
    msg.setSourceEntity(237U);
    msg.setDestination(28794U);
    msg.setDestinationEntity(137U);
    msg.validity = 192U;
    msg.value = 0.23709483902588158;

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
    msg.setTimeStamp(0.6717101963844809);
    msg.setSource(39249U);
    msg.setSourceEntity(145U);
    msg.setDestination(38118U);
    msg.setDestinationEntity(52U);
    msg.value = 0.21941403671757165;

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
    msg.setTimeStamp(0.324251246194718);
    msg.setSource(57987U);
    msg.setSourceEntity(34U);
    msg.setDestination(5885U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4289233568973052;

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
    msg.setTimeStamp(0.8918229923659852);
    msg.setSource(39908U);
    msg.setSourceEntity(144U);
    msg.setDestination(23581U);
    msg.setDestinationEntity(240U);
    msg.value = 0.21947435708290508;

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
    msg.setTimeStamp(0.8156486818939018);
    msg.setSource(56969U);
    msg.setSourceEntity(106U);
    msg.setDestination(12219U);
    msg.setDestinationEntity(166U);
    msg.value = 0.8305848536087551;

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
    msg.setTimeStamp(0.6127601475953993);
    msg.setSource(23090U);
    msg.setSourceEntity(53U);
    msg.setDestination(17421U);
    msg.setDestinationEntity(173U);
    msg.value = 0.25516591936159105;

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
    msg.setTimeStamp(0.9234679712848937);
    msg.setSource(9682U);
    msg.setSourceEntity(173U);
    msg.setDestination(20765U);
    msg.setDestinationEntity(185U);
    msg.value = 0.37498489640066746;

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
    msg.setTimeStamp(0.028477739311584926);
    msg.setSource(57797U);
    msg.setSourceEntity(164U);
    msg.setDestination(21339U);
    msg.setDestinationEntity(246U);
    msg.value = 0.43117154049413486;

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
    msg.setTimeStamp(0.765439870830882);
    msg.setSource(39363U);
    msg.setSourceEntity(46U);
    msg.setDestination(25553U);
    msg.setDestinationEntity(12U);
    msg.value = 0.23037821940811332;

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
    msg.setTimeStamp(0.4098467631738597);
    msg.setSource(17027U);
    msg.setSourceEntity(225U);
    msg.setDestination(21608U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6773360368251705;

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
    msg.setTimeStamp(0.9860769427742448);
    msg.setSource(21561U);
    msg.setSourceEntity(89U);
    msg.setDestination(6678U);
    msg.setDestinationEntity(93U);
    msg.value = 0.8622387518536802;

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
    msg.setTimeStamp(0.4451851601524005);
    msg.setSource(63588U);
    msg.setSourceEntity(249U);
    msg.setDestination(20526U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8830259388721294;

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
    msg.setTimeStamp(0.22059127647425492);
    msg.setSource(16988U);
    msg.setSourceEntity(163U);
    msg.setDestination(55178U);
    msg.setDestinationEntity(133U);
    msg.value = 0.6850091734903594;

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
    msg.setTimeStamp(0.33287536351268365);
    msg.setSource(49090U);
    msg.setSourceEntity(132U);
    msg.setDestination(7896U);
    msg.setDestinationEntity(225U);
    msg.value = 0.8296088999627022;

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
    msg.setTimeStamp(0.7372568705465244);
    msg.setSource(26209U);
    msg.setSourceEntity(101U);
    msg.setDestination(61196U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6057691434905228;

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
    msg.setTimeStamp(0.20812053109228112);
    msg.setSource(44187U);
    msg.setSourceEntity(65U);
    msg.setDestination(51605U);
    msg.setDestinationEntity(65U);
    msg.value = 0.6219265910276516;

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
    msg.setTimeStamp(0.2096734586940895);
    msg.setSource(46862U);
    msg.setSourceEntity(238U);
    msg.setDestination(34539U);
    msg.setDestinationEntity(122U);
    msg.value = 0.9373433136149035;

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
    msg.setTimeStamp(0.6175950833569545);
    msg.setSource(863U);
    msg.setSourceEntity(113U);
    msg.setDestination(65500U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6449525791388244;

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
    msg.setTimeStamp(0.15109199108033566);
    msg.setSource(44212U);
    msg.setSourceEntity(215U);
    msg.setDestination(11400U);
    msg.setDestinationEntity(167U);
    msg.value = 0.9677905058208514;

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
    msg.setTimeStamp(0.34547438211623027);
    msg.setSource(9034U);
    msg.setSourceEntity(127U);
    msg.setDestination(56879U);
    msg.setDestinationEntity(238U);
    msg.value = 0.4163351517178744;

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
    msg.setTimeStamp(0.4820596270115469);
    msg.setSource(19390U);
    msg.setSourceEntity(194U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(100U);
    msg.value = 0.4536520724801557;

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
    msg.setTimeStamp(0.4513395237282303);
    msg.setSource(48531U);
    msg.setSourceEntity(252U);
    msg.setDestination(60029U);
    msg.setDestinationEntity(223U);
    msg.value = 0.40314170828923745;

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
    msg.setTimeStamp(0.5654583821649731);
    msg.setSource(21225U);
    msg.setSourceEntity(205U);
    msg.setDestination(54143U);
    msg.setDestinationEntity(14U);
    msg.value = 0.4440670852634083;

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
    msg.setTimeStamp(0.7970601277405549);
    msg.setSource(19592U);
    msg.setSourceEntity(122U);
    msg.setDestination(15753U);
    msg.setDestinationEntity(160U);
    msg.value = 0.6391586460517519;

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
    msg.setTimeStamp(0.02863625131360059);
    msg.setSource(17628U);
    msg.setSourceEntity(130U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(86U);
    msg.value = 0.12487274205779919;

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
    msg.setTimeStamp(0.7917140675227067);
    msg.setSource(8544U);
    msg.setSourceEntity(66U);
    msg.setDestination(63644U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.3034293874519659;
    msg.speed = 0.8620606786602902;

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
    msg.setTimeStamp(0.8716118954234566);
    msg.setSource(5399U);
    msg.setSourceEntity(235U);
    msg.setDestination(7257U);
    msg.setDestinationEntity(108U);
    msg.direction = 0.35921984066302337;
    msg.speed = 0.2688386601070506;

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
    msg.setTimeStamp(0.17722693812920243);
    msg.setSource(49185U);
    msg.setSourceEntity(194U);
    msg.setDestination(15287U);
    msg.setDestinationEntity(129U);
    msg.direction = 0.05945059138482989;
    msg.speed = 0.1365714035482809;

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
    msg.setTimeStamp(0.1700523605916937);
    msg.setSource(59973U);
    msg.setSourceEntity(224U);
    msg.setDestination(14756U);
    msg.setDestinationEntity(124U);
    msg.value = 0.39998349817653733;

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
    msg.setTimeStamp(0.23546559008445445);
    msg.setSource(43951U);
    msg.setSourceEntity(37U);
    msg.setDestination(40488U);
    msg.setDestinationEntity(25U);
    msg.value = 0.21525782622859302;

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
    msg.setTimeStamp(0.27011568341130776);
    msg.setSource(33887U);
    msg.setSourceEntity(182U);
    msg.setDestination(30523U);
    msg.setDestinationEntity(21U);
    msg.value = 0.7900505931280959;

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
    msg.setTimeStamp(0.4762754292164393);
    msg.setSource(32695U);
    msg.setSourceEntity(6U);
    msg.setDestination(63510U);
    msg.setDestinationEntity(179U);
    msg.value.assign("XHLNFCUSOYTKAXKNCGMNREJUYKIXFLPSAWMXIUNFXCCBOYDSBIDCDIHDLSCYZVBKIOQZOTEFPTRRPQHQYFKIZVBEANWL");

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
    msg.setTimeStamp(0.4450009377759244);
    msg.setSource(32470U);
    msg.setSourceEntity(63U);
    msg.setDestination(24159U);
    msg.setDestinationEntity(78U);
    msg.value.assign("EKOABXQPTSFZWJIVSZRREPAVQXNZASVMCYWRPXNSZSRZPINTEEJOCMGKTGUHRPUNCLU");

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
    msg.setTimeStamp(0.041927328044764844);
    msg.setSource(33295U);
    msg.setSourceEntity(138U);
    msg.setDestination(43718U);
    msg.setDestinationEntity(21U);
    msg.value.assign("QYSIGRNMGTUMDZRIEHJCLEAZKSZTIAGJKDBZCVONBMZTOVPIJQCYMCORGZXXVBRRAWTWCRAPLPKKHVSNKGIPXFYMTZUAOWVYUCBJXUTAFF");

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
    msg.setTimeStamp(0.4323966122339725);
    msg.setSource(34431U);
    msg.setSourceEntity(154U);
    msg.setDestination(6419U);
    msg.setDestinationEntity(51U);
    const char tmp_msg_0[] = {-126, 58, -4, 60, -44, -89, -128, 78, 22, 81, -87, 52, 27, 63, -44, 3, 78, -44, 126, 46, -49, -37, 98, -113, -53, 121, 92, -70, -40, -91, 123, 51, 99, 6, -23, 42, -93, -36, 39, -60, -62, 42, -49, -15, -55};
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
    msg.setTimeStamp(0.16354609694596878);
    msg.setSource(43894U);
    msg.setSourceEntity(138U);
    msg.setDestination(54586U);
    msg.setDestinationEntity(129U);
    const char tmp_msg_0[] = {-33, 59, 84, 104, -81, -113, -104, -109, -23, 105, -9, 113, -32, -73, -97, 21, -93, 76, 94, -58, 41, 80, 111, 113, 66, -35, 64, 118, 6, 100, 58, -97, -115, 49, 86, 73, -21, -91, 111, -103, 123, -124, 3, 13, 70, 49, 92, 71, -93, 14, 89, -39, 94, 62, 86, 76, -113, 84, 44, 20, -120, 121, 62, -62, -34, -65, 38, -12, -80, -98, -56, 74, 121, 92, -35, 63, 56, 98, 13, 92, -76, 0, -9, -66, 92, 126, 103, -52, 19, -101, 68, 86, 66, -73, -124, -111, -29, 35, -103, 43, 109, 78, -57, 23, 57, 10, -82, -5, -20, -106, -24, -104, -43, -126, 29, -8, 78, 4, 44, -45, -2, -26, -80, 26, 90};
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
    msg.setTimeStamp(0.597489037665442);
    msg.setSource(34700U);
    msg.setSourceEntity(181U);
    msg.setDestination(57901U);
    msg.setDestinationEntity(92U);
    const char tmp_msg_0[] = {-128, 66, 39, -8, -17, -22, 73, -121, -45, 117, -124, 12, -23, 27, -12, -39, -67, 56, -92, -14, -109, 73, 85, -79, 89, 17, 42, 99, 81, -19, 122, -124, -29, 74, -112, -90, -3, 70, 125, 39, -29, -61, 53, -46, 20, 41, 3, 96, 13, 50, -42, 54, -101, 60, 60, 35, 58, -19, 91, -99, -69, 39, 71, -40, -112, -70, 40, -124, 73, -75, -126, 24, 58, -31, 83, 33, -41, 100, 45, 16, -71, 107, -95, -91, 28, 122, 90, 28, 103, -61, 48, 72, 12, -64, -126, 34, 66, 123, -63, -98, -124, 78, 72, 17, 0, -127, -46, 31, 36, -106, 13, 116, -61, 29, 88, 4, -50, -14, 116, 92, -105, 88, 70, -123, 120, -25, 15, -125, -98, 9, -6};
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
    msg.setTimeStamp(0.24083040367815767);
    msg.setSource(58447U);
    msg.setSourceEntity(207U);
    msg.setDestination(55791U);
    msg.setDestinationEntity(248U);
    msg.frequency = 1352122645U;
    msg.min_range = 53376U;
    msg.max_range = 6434U;

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
    msg.setTimeStamp(0.601568329092922);
    msg.setSource(17469U);
    msg.setSourceEntity(199U);
    msg.setDestination(64193U);
    msg.setDestinationEntity(162U);
    msg.frequency = 586274958U;
    msg.min_range = 56664U;
    msg.max_range = 46273U;

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
    msg.setTimeStamp(0.4942584623440601);
    msg.setSource(14590U);
    msg.setSourceEntity(123U);
    msg.setDestination(58316U);
    msg.setDestinationEntity(254U);
    msg.frequency = 2586999414U;
    msg.min_range = 45324U;
    msg.max_range = 6899U;

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
    msg.setTimeStamp(0.135754856179778);
    msg.setSource(11233U);
    msg.setSourceEntity(229U);
    msg.setDestination(26673U);
    msg.setDestinationEntity(174U);
    msg.type = 60U;
    msg.frequency = 2104450412U;
    msg.min_range = 35129U;
    msg.max_range = 26086U;
    msg.bits_per_point = 116U;
    msg.scale_factor = 0.30597034782686316;
    const char tmp_msg_0[] = {-79, 18, 19, 38, 60, 5, 61, -125, -94, -36, -20, -4, -4, 94, -51, -85, 120, 98, -106, -46, 105, -86, -56, -117, 30, -11, -34, -100, 125, 7, -121, 101, 64, 43, 12, -110, -38, 0, -106, 16, -91, 89, 78, -104, 93};
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
    msg.setTimeStamp(0.6372749928806346);
    msg.setSource(40244U);
    msg.setSourceEntity(92U);
    msg.setDestination(7574U);
    msg.setDestinationEntity(199U);
    msg.type = 53U;
    msg.frequency = 2001228732U;
    msg.min_range = 4838U;
    msg.max_range = 27549U;
    msg.bits_per_point = 180U;
    msg.scale_factor = 0.026604728788266252;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9774521932181223;
    tmp_msg_0.beam_height = 0.23484095952250317;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {39, 16, 38, -8, -23, -116, -99, 32, 85, -2, -74, -52, -78, 46, 87, 2, -22, -103, 28, -125, 73, 40, -32, 37, 82, -38, 119, -6, 12, -53, -62, 40, -3, -104, 29, -28, -61, -53, 124, -101, -40, -84, 46, -92, 115, -60, -71, -61, 14, -102, 9, 80, -81, 65, 65, -18, 17, 81, -125, 51, -125, 10, -68, 97, 64, -49, -37, -43, -26, -57, 46, -50, -33, -65, -56, -89, -69, -105, -10, 70, -115, 80, 45, 16, 95, 30, 69, -71, -1, -52, -127, -9, -3, -30, -42, 65, 48, 44, 91, -96, -69, -110, -118, 74, -107, -69, -74, 4, 43, 75, -42, 15, -127, 62, -85, -10, 32, 35, 87, 35, -58, 30, 8, -119, -41, 57, 68, 120, -15, 102, 113, 27, -124, -105, 23, 80, 33, 14, -30, 75, -54, -58, 10, -33, -105, 101, 118, 67, 26, 4, -21, -50, -113, -75, -93, 108, -86, -114, -105, -112, 1, 122, -123, 68, 90, 65, -78, -54, 95, 11, -39, 72, -122, 99, 119, 36, -54, 95, -88, -121, -71};
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
    msg.setTimeStamp(0.29963033369077763);
    msg.setSource(36801U);
    msg.setSourceEntity(99U);
    msg.setDestination(62234U);
    msg.setDestinationEntity(103U);
    msg.type = 68U;
    msg.frequency = 2355812601U;
    msg.min_range = 23456U;
    msg.max_range = 21234U;
    msg.bits_per_point = 80U;
    msg.scale_factor = 0.5616051783820227;
    const char tmp_msg_0[] = {-87, 91, 102, 80, 55, -42, 105, 30, 101, -14, 74, 111, 20, -70, 23, -29, -86, -61, -123, -19, 73, -95, -125, 83, 48, 118, -120, -45, -87, 119, 85, 79, -113, 47, 118, 122, -41, -69, -79, 101, 63, 15, 107, 45, -19, 38, 7, -15, 106, 6, 21, 84, 122, -94, -127, 11, 21, -62, 36, -116, 5, -111, 42, 13, -47, -62, 75, -112, -99, 29, -10, 16, 70, -42, 17, -114, -34, 41, 6, -111, 106, 15, 1, -70, -5, 21, 15, -22, -67, 69, 63, 106, 35, 104, -45, -12, 11, 19, 115, -103, 16, 85, 107, -120, -19};
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
    msg.setTimeStamp(0.05083982245617713);
    msg.setSource(50816U);
    msg.setSourceEntity(9U);
    msg.setDestination(32892U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.7334358637419117);
    msg.setSource(20391U);
    msg.setSourceEntity(30U);
    msg.setDestination(58322U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.06543052472308908);
    msg.setSource(23450U);
    msg.setSourceEntity(193U);
    msg.setDestination(30797U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.5028898388524398);
    msg.setSource(40446U);
    msg.setSourceEntity(81U);
    msg.setDestination(56140U);
    msg.setDestinationEntity(163U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.4648302956698871);
    msg.setSource(43447U);
    msg.setSourceEntity(88U);
    msg.setDestination(49920U);
    msg.setDestinationEntity(91U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.9171310849986815);
    msg.setSource(49942U);
    msg.setSourceEntity(85U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(145U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.1634426693147495);
    msg.setSource(46600U);
    msg.setSourceEntity(60U);
    msg.setDestination(19709U);
    msg.setDestinationEntity(41U);
    msg.value = 0.8917751212615593;
    msg.confidence = 0.07069266365122673;
    msg.opmodes.assign("LSRVFQVHOFBQZMDMDNN");

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
    msg.setTimeStamp(0.797663592984336);
    msg.setSource(52405U);
    msg.setSourceEntity(29U);
    msg.setDestination(15909U);
    msg.setDestinationEntity(235U);
    msg.value = 0.7547273703682261;
    msg.confidence = 0.54190086578583;
    msg.opmodes.assign("DLXJXLQSEUPFVQDKHNRJDLKAVXLNBFWFNWSESOACRDNMOOJVAOIVCCABCGYAKGPZQJERYHYPSCGODMDSLSPWUBHDBDLVTTUUKTIKCVLJCQYVIJHPTSNZNKXTBNKSQPWOHXZIMFGRUHQIRDYZWMOEFQTNQSUMTKEBIYEXUZVQQZDZNGKABAWIFVJGXFIM");

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
    msg.setTimeStamp(0.21723807271694384);
    msg.setSource(51545U);
    msg.setSourceEntity(109U);
    msg.setDestination(53219U);
    msg.setDestinationEntity(212U);
    msg.value = 0.49754176934202354;
    msg.confidence = 0.2932922590198438;
    msg.opmodes.assign("ZXAOHCHUTQQN");

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
    msg.setTimeStamp(0.7602861978124152);
    msg.setSource(14654U);
    msg.setSourceEntity(199U);
    msg.setDestination(59809U);
    msg.setDestinationEntity(56U);
    msg.itow = 20205418U;
    msg.lat = 0.9596216499837278;
    msg.lon = 0.9303259198352557;
    msg.height_ell = 0.2320090038692907;
    msg.height_sea = 0.635689438131078;
    msg.hacc = 0.8231495680757134;
    msg.vacc = 0.0739709300906759;
    msg.vel_n = 0.2355970200820644;
    msg.vel_e = 0.022912015589704238;
    msg.vel_d = 0.43159999619745615;
    msg.speed = 0.060495470184459776;
    msg.gspeed = 0.05668819958383631;
    msg.heading = 0.8135781287281773;
    msg.sacc = 0.04822538996748915;
    msg.cacc = 0.7694447726413303;

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
    msg.setTimeStamp(0.8001580510464164);
    msg.setSource(60566U);
    msg.setSourceEntity(56U);
    msg.setDestination(662U);
    msg.setDestinationEntity(133U);
    msg.itow = 2125034786U;
    msg.lat = 0.11284085573630243;
    msg.lon = 0.28495594403105395;
    msg.height_ell = 0.8726492762497141;
    msg.height_sea = 0.5410654198948204;
    msg.hacc = 0.08763270704186399;
    msg.vacc = 0.7160205354603543;
    msg.vel_n = 0.44936974596997314;
    msg.vel_e = 0.22653521465388937;
    msg.vel_d = 0.7224270619167396;
    msg.speed = 0.17889736390450728;
    msg.gspeed = 0.7547359509444806;
    msg.heading = 0.3137936425766652;
    msg.sacc = 0.06610235689260857;
    msg.cacc = 0.5891617176525903;

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
    msg.setTimeStamp(0.817030322565931);
    msg.setSource(11948U);
    msg.setSourceEntity(58U);
    msg.setDestination(43321U);
    msg.setDestinationEntity(141U);
    msg.itow = 1263637024U;
    msg.lat = 0.5136405975387434;
    msg.lon = 0.6824051864074722;
    msg.height_ell = 0.7553795341791194;
    msg.height_sea = 0.6783658994257089;
    msg.hacc = 0.5547810246897581;
    msg.vacc = 0.19243438695758808;
    msg.vel_n = 0.31617255702878444;
    msg.vel_e = 0.27961643226553834;
    msg.vel_d = 0.8618370085833489;
    msg.speed = 0.028323586056927308;
    msg.gspeed = 0.018641486183253342;
    msg.heading = 0.841421113863872;
    msg.sacc = 0.8915059541492175;
    msg.cacc = 0.1832801222391195;

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
    msg.setTimeStamp(0.9955492717297634);
    msg.setSource(29938U);
    msg.setSourceEntity(16U);
    msg.setDestination(22985U);
    msg.setDestinationEntity(170U);
    msg.id = 82U;
    msg.value = 0.4750633564328258;

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
    msg.setTimeStamp(0.18574417370374485);
    msg.setSource(61512U);
    msg.setSourceEntity(237U);
    msg.setDestination(56837U);
    msg.setDestinationEntity(229U);
    msg.id = 135U;
    msg.value = 0.0958796673715584;

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
    msg.setTimeStamp(0.6313201640207806);
    msg.setSource(19095U);
    msg.setSourceEntity(140U);
    msg.setDestination(21774U);
    msg.setDestinationEntity(88U);
    msg.id = 9U;
    msg.value = 0.14288379152621844;

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
    msg.setTimeStamp(0.569998967814605);
    msg.setSource(2461U);
    msg.setSourceEntity(106U);
    msg.setDestination(63074U);
    msg.setDestinationEntity(5U);
    msg.x = 0.18818360479895357;
    msg.y = 0.7834651053980014;
    msg.z = 0.4820316970851253;
    msg.phi = 0.5935312606685841;
    msg.theta = 0.0931445715794964;
    msg.psi = 0.25219132803221844;

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
    msg.setTimeStamp(0.162542945178204);
    msg.setSource(54255U);
    msg.setSourceEntity(229U);
    msg.setDestination(14409U);
    msg.setDestinationEntity(78U);
    msg.x = 0.373645305859828;
    msg.y = 0.4136707035209427;
    msg.z = 0.36058108828538593;
    msg.phi = 0.3318116883374669;
    msg.theta = 0.881854658507364;
    msg.psi = 0.11227416013269143;

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
    msg.setTimeStamp(0.8140005646537016);
    msg.setSource(2209U);
    msg.setSourceEntity(238U);
    msg.setDestination(49118U);
    msg.setDestinationEntity(218U);
    msg.x = 0.08278500017264356;
    msg.y = 0.9088997234391408;
    msg.z = 0.5125794352103463;
    msg.phi = 0.8150667333109776;
    msg.theta = 0.017495794913979124;
    msg.psi = 0.07217465168438641;

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
    msg.setTimeStamp(0.9462216055180472);
    msg.setSource(61620U);
    msg.setSourceEntity(108U);
    msg.setDestination(41791U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.8523295148709513;
    msg.beam_height = 0.6245196224946459;

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
    msg.setTimeStamp(0.25575291760809327);
    msg.setSource(54745U);
    msg.setSourceEntity(91U);
    msg.setDestination(50612U);
    msg.setDestinationEntity(252U);
    msg.beam_width = 0.8820318676253013;
    msg.beam_height = 0.16310806893478802;

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
    msg.setTimeStamp(0.8473825693437346);
    msg.setSource(58775U);
    msg.setSourceEntity(30U);
    msg.setDestination(47992U);
    msg.setDestinationEntity(216U);
    msg.beam_width = 0.5984359268586149;
    msg.beam_height = 0.2076936087236625;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.3366409701611478);
    msg.setSource(38916U);
    msg.setSourceEntity(85U);
    msg.setDestination(4392U);
    msg.setDestinationEntity(216U);
    msg.id = 248U;
    msg.zoom = 252U;
    msg.action = 92U;

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
    msg.setTimeStamp(0.8412974768910279);
    msg.setSource(32229U);
    msg.setSourceEntity(195U);
    msg.setDestination(24193U);
    msg.setDestinationEntity(42U);
    msg.id = 11U;
    msg.zoom = 69U;
    msg.action = 116U;

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
    msg.setTimeStamp(0.1294409631281298);
    msg.setSource(16517U);
    msg.setSourceEntity(158U);
    msg.setDestination(41272U);
    msg.setDestinationEntity(198U);
    msg.id = 248U;
    msg.zoom = 96U;
    msg.action = 35U;

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
    msg.setTimeStamp(0.753771083741285);
    msg.setSource(29089U);
    msg.setSourceEntity(87U);
    msg.setDestination(18422U);
    msg.setDestinationEntity(45U);
    msg.id = 96U;
    msg.value = 0.8835943571353182;

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
    msg.setTimeStamp(0.679422267833234);
    msg.setSource(15441U);
    msg.setSourceEntity(128U);
    msg.setDestination(34343U);
    msg.setDestinationEntity(129U);
    msg.id = 36U;
    msg.value = 0.5415982968637463;

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
    msg.setTimeStamp(0.9526362714088796);
    msg.setSource(40378U);
    msg.setSourceEntity(37U);
    msg.setDestination(44813U);
    msg.setDestinationEntity(6U);
    msg.id = 164U;
    msg.value = 0.22374100920324347;

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
    msg.setTimeStamp(0.41829703052603573);
    msg.setSource(44917U);
    msg.setSourceEntity(188U);
    msg.setDestination(50853U);
    msg.setDestinationEntity(136U);
    msg.id = 72U;
    msg.value = 0.9446370536500328;

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
    msg.setTimeStamp(0.05739006334203578);
    msg.setSource(9185U);
    msg.setSourceEntity(50U);
    msg.setDestination(35492U);
    msg.setDestinationEntity(17U);
    msg.id = 122U;
    msg.value = 0.08191612942910664;

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
    msg.setTimeStamp(0.4565381884311145);
    msg.setSource(22016U);
    msg.setSourceEntity(164U);
    msg.setDestination(60778U);
    msg.setDestinationEntity(45U);
    msg.id = 138U;
    msg.value = 0.08061526746512082;

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
    msg.setTimeStamp(0.3339479301000329);
    msg.setSource(53744U);
    msg.setSourceEntity(47U);
    msg.setDestination(33984U);
    msg.setDestinationEntity(60U);
    msg.id = 191U;
    msg.angle = 0.12246949746119762;

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
    msg.setTimeStamp(0.8720721309249126);
    msg.setSource(23794U);
    msg.setSourceEntity(146U);
    msg.setDestination(54039U);
    msg.setDestinationEntity(102U);
    msg.id = 119U;
    msg.angle = 0.2893994374410256;

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
    msg.setTimeStamp(0.04490081730163986);
    msg.setSource(8570U);
    msg.setSourceEntity(110U);
    msg.setDestination(51265U);
    msg.setDestinationEntity(30U);
    msg.id = 157U;
    msg.angle = 0.4807877295123275;

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
    msg.setTimeStamp(0.0934275216156859);
    msg.setSource(28280U);
    msg.setSourceEntity(148U);
    msg.setDestination(56419U);
    msg.setDestinationEntity(181U);
    msg.op = 6U;
    msg.actions.assign("HJGFXIWBSMZXXQSDWXBLAHXNDIVRUWNGQMHANNJAWFQFPFTEW");

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
    msg.setTimeStamp(0.4736976635308351);
    msg.setSource(30394U);
    msg.setSourceEntity(75U);
    msg.setDestination(59973U);
    msg.setDestinationEntity(228U);
    msg.op = 212U;
    msg.actions.assign("VBFWCWHSIFBZIPCNKA");

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
    msg.setTimeStamp(0.003396302139831997);
    msg.setSource(18329U);
    msg.setSourceEntity(117U);
    msg.setDestination(26692U);
    msg.setDestinationEntity(33U);
    msg.op = 77U;
    msg.actions.assign("UHPQCLSTALUDUQQCASPTQEHELRAORJAGGZTRTYLEJFEFEYYNFOGIZMQZPWRZXAYYNWSDXVVQYMEDYUZFJAKNJSHVXXFPNZVBLAKHUWGOUMWOQJNCINGMHHPXZOUYHMRDKIFWIVQUOJBNYCWDOEUFSTVXCMTCRBCSLSNPTNECSIKDUTBDALLCKBJFJWIVFGKGBKNMKLLZQIXXRHKWCWMZJVWHGGVIBXRVADTZBIYRMEMER");

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
    msg.setTimeStamp(0.21591831194930589);
    msg.setSource(2072U);
    msg.setSourceEntity(221U);
    msg.setDestination(58173U);
    msg.setDestinationEntity(86U);
    msg.actions.assign("XJAVNKMVZAVSCTQRBSXEZIHAIKIWNMYYRJZLQADPBFDOFJVBKZGCZWXFEILLOHWKBHVDVNXKHGUJFPXHAUJHILUQLCPQSQGMYOCFRWRVHIEMAZGYTNVCGZKSDLLQDAIFBHOIUJSDQHMZFIKTTMCLNJGVPRN");

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
    msg.setTimeStamp(0.8916854288599075);
    msg.setSource(19023U);
    msg.setSourceEntity(154U);
    msg.setDestination(8167U);
    msg.setDestinationEntity(132U);
    msg.actions.assign("RHYSITIFGCLSUXHRVLUXTLRHXVTRKEZJRUENBBBFEBWWAXCLOSUSOJMHPPMULGXFAMDICBPVNMFJZTICBTNAHOAPFTEDZTMZMVVJHYWYRVNJCIGYORQJSIJSGDEZZPWQZEIXMLAEIIGCUYNASBU");

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
    msg.setTimeStamp(0.5372659632335878);
    msg.setSource(1188U);
    msg.setSourceEntity(185U);
    msg.setDestination(62074U);
    msg.setDestinationEntity(51U);
    msg.actions.assign("REWMGROZAOOVCRGAAWAWZQCYDECNDZKBSXHITIWGUQXJRXLBNSRYTADYOPBDZKDFBOYITPLXRMVLUUCLCJCNJXZOVKIUMOSVERHAOSPPMULFBGABYNJSQ");

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
    msg.setTimeStamp(0.05861447516369456);
    msg.setSource(54726U);
    msg.setSourceEntity(95U);
    msg.setDestination(23149U);
    msg.setDestinationEntity(15U);
    msg.button = 119U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.48550019216776297);
    msg.setSource(50173U);
    msg.setSourceEntity(88U);
    msg.setDestination(1506U);
    msg.setDestinationEntity(65U);
    msg.button = 190U;
    msg.value = 90U;

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
    msg.setTimeStamp(0.014664999637839737);
    msg.setSource(18527U);
    msg.setSourceEntity(102U);
    msg.setDestination(8233U);
    msg.setDestinationEntity(225U);
    msg.button = 202U;
    msg.value = 252U;

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
    msg.setTimeStamp(0.7963615214214106);
    msg.setSource(56038U);
    msg.setSourceEntity(250U);
    msg.setDestination(572U);
    msg.setDestinationEntity(23U);
    msg.op = 171U;
    msg.text.assign("VQMZYBADNIREAWXKJJMUFJQDJZRTLBDYVTLYQPPMVKAUMBXBGCFARTOSDZENWPD");

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
    msg.setTimeStamp(0.9121300851229879);
    msg.setSource(55286U);
    msg.setSourceEntity(88U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(220U);
    msg.op = 64U;
    msg.text.assign("MMMEUPTCBZGGANUMLADRYYYRNZXYHLFOTHZKNXVVIERZVNZLCVORAQBWVMSQXLHVUPQDYBFDAQWXGDLJJTFURUMAOFUCYHBZSBPZXXAJHLIJFXEGIEOZFYPKHSAJAELNFRIYQCTQDVWWXSBTUKPOQQEARNDDIMJCOKSQKZNNTKDHYOIDSMVEVPCOWKUFHXPCBYKVNEACCGDMJBHOPPSCSEUBTGZJITFJX");

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
    msg.setTimeStamp(0.19882694663575284);
    msg.setSource(15238U);
    msg.setSourceEntity(35U);
    msg.setDestination(38710U);
    msg.setDestinationEntity(164U);
    msg.op = 173U;
    msg.text.assign("WLFPDNJBFYZSOWVJCDRTVTAGJTENETBDOVPJSNXRLQTUFAMYYKSVZGCXUORXZCYLGECOCZYNTEPQBXXMSFMOUJFHKQLNOPBFZLUIBOAIWZLTXNEIWXMYCBQKDGCIXASREFQCFDNRMBHDEMGZWHWFHIQGFDEHLPBKZDNVHQ");

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
    msg.setTimeStamp(0.22720721995373427);
    msg.setSource(32195U);
    msg.setSourceEntity(224U);
    msg.setDestination(39450U);
    msg.setDestinationEntity(247U);
    msg.op = 172U;
    msg.time_remain = 0.6039053858767459;
    msg.sched_time = 0.689202122839066;

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
    msg.setTimeStamp(0.49738909960250965);
    msg.setSource(49193U);
    msg.setSourceEntity(232U);
    msg.setDestination(65344U);
    msg.setDestinationEntity(180U);
    msg.op = 232U;
    msg.time_remain = 0.4541145047096474;
    msg.sched_time = 0.8621914456251625;

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
    msg.setTimeStamp(0.27927397433972767);
    msg.setSource(16277U);
    msg.setSourceEntity(139U);
    msg.setDestination(36431U);
    msg.setDestinationEntity(146U);
    msg.op = 19U;
    msg.time_remain = 0.5582592235634102;
    msg.sched_time = 0.5784838193680358;

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
    msg.setTimeStamp(0.26295718927293865);
    msg.setSource(50321U);
    msg.setSourceEntity(128U);
    msg.setDestination(13844U);
    msg.setDestinationEntity(201U);
    msg.name.assign("OKLJGNBGKVSXPJOSWABRNVEMYKANXDWUYUTEWVBQDRQCGMPMQUPQOZJKQYBNAVNXUGPHTGTTEZLNLBTRTRHRFPZHLIZGUSTVLFSSIYBHEMCIDUVDUKTIWYZIOMMAEEJORROCDPCGJRYWSLVAWAFEXNAVJUYQEJSEKBQHGVLNHRQSHIZWMOOXIZDHAORLFZJPFXJASMDMGCWUIBUOTSJVQPBDCKLCTHPQAFDKWKFPCMXXXFECI");
    msg.op = 147U;
    msg.sched_time = 0.380246835893456;

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
    msg.setTimeStamp(0.3802229350625357);
    msg.setSource(23884U);
    msg.setSourceEntity(63U);
    msg.setDestination(42195U);
    msg.setDestinationEntity(154U);
    msg.name.assign("QZCCLQBIAUZAZZWWJUHPLNEFOTXUGBOOYGNJUYLOZGBSOMCELRPSVNDDWFRQPQUTROERBLZIKGKXCFOYQRGGAJRWMLTCGDQGAIDWZXUXSPTSHTXATNWCPBTPQKWEISNMVJGTVMCPRDCKRYNAMYCJYEQHLVMFJXIBDTMSVKTOHFAZLMYJNLWMFFNWPEEIFPZFVSZCJVUGOSBIMYPVKJKDBBSREBIHXXUJNYHEEHAAIUVXX");
    msg.op = 227U;
    msg.sched_time = 0.35225899459913024;

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
    msg.setTimeStamp(0.0829461401377164);
    msg.setSource(30604U);
    msg.setSourceEntity(243U);
    msg.setDestination(47221U);
    msg.setDestinationEntity(119U);
    msg.name.assign("KPNMHSMNUGCZXTLPOKXPKGDUFVOJJIWWMKBTKCGFRTGLRTMFSDJEJNVAJFBUAFRWLECJXLNOETPQFLHIRKFBUMNBTZNJCDUKVEXLCSZLETWYWSSCCGDWGVOMIQAWBIRYYDXVPZKAUONHAKYXXWZSBFHGIGJRAPGQXVEDTOAYRQOVQNAYYPXP");
    msg.op = 236U;
    msg.sched_time = 0.09535326111829345;

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
    msg.setTimeStamp(0.5883846804998443);
    msg.setSource(41834U);
    msg.setSourceEntity(184U);
    msg.setDestination(30414U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.25760063290916024);
    msg.setSource(17526U);
    msg.setSourceEntity(93U);
    msg.setDestination(6410U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.29176633739559477);
    msg.setSource(46528U);
    msg.setSourceEntity(177U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.7467228637446548);
    msg.setSource(4487U);
    msg.setSourceEntity(137U);
    msg.setDestination(63900U);
    msg.setDestinationEntity(170U);
    msg.name.assign("FXZNMZYDCPDDPJMYJMYLQWXCXHDCXCJUNCZUULZFEMOFCQZLGHOSVEZKFUWHAQHVHONOAQGLLAMKRRGQOXBLPBFNJHJQHPOJKPBZPBRLTIXDAYIWCZRFIWVRBYQAYHIEDVSOGJTUI");
    msg.state = 190U;

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
    msg.setTimeStamp(0.8817050816731127);
    msg.setSource(3956U);
    msg.setSourceEntity(163U);
    msg.setDestination(27872U);
    msg.setDestinationEntity(117U);
    msg.name.assign("QHWUGZHROUGTVMJHSGFSPQLYDKLQEITDGQMRIRYETTVTDHZAVHIQDVQZKQGYBPORGYTFPWRVCPVYFMLPSQJEHFXNCAKWWUMESISIMLURNCXKIGEBBXTIZENOSVMBUNXXLGNNCKEJJGBCBHDQWRZOUPMJAFXALTTOOXCNYEWCPCFSZBJUUDWRFJFZHUPRDYVQSUMBKJXKZPHDAHWSOLABIEANXYVAFWEKOLAIZWGJPXIKLTNMZFDKRBOYASLC");
    msg.state = 47U;

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
    msg.setTimeStamp(0.2698174526154319);
    msg.setSource(14142U);
    msg.setSourceEntity(166U);
    msg.setDestination(33990U);
    msg.setDestinationEntity(11U);
    msg.name.assign("CNLSISVGXXBNUOEYEWFITDKEITJHDOHBSHYPXUOEDEZIEEYLTNNJMPSAXLRCYHVBBZRXGDFKWNNLRKTTMTSIFSFFYZILGQAZWGRDUOVMEQJJGLJWMEXUVWMCQRKOADVKXIFQCSJSHOJBWTOLYYDRMVAKZMMQVYDZADCNRWKRQBPITHWRLSZPAGAWJGAPPQCUCQUBPJNVOALKPTZWNCFMURCOUFZKIXHXFMHBVUYPIEHNKZSLFQGOA");
    msg.state = 50U;

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
    msg.setTimeStamp(0.8599347322277517);
    msg.setSource(5238U);
    msg.setSourceEntity(189U);
    msg.setDestination(29346U);
    msg.setDestinationEntity(167U);
    msg.name.assign("RHPYECUNLKGPJIFPYOBHBNVZAGUCJADDUPWSXSHOAPXSAEOCFVNJBSDVFHBZMTEZZQQENOFOMJNTLPTNXTQFGATMDKWXYIJX");
    msg.value = 204U;

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
    msg.setTimeStamp(0.44688419562333315);
    msg.setSource(21379U);
    msg.setSourceEntity(186U);
    msg.setDestination(64254U);
    msg.setDestinationEntity(65U);
    msg.name.assign("RQWYYVYMUDQXTYSNXWTADGCIHXKMSQQXUXMNNZDISMKVNBYQWXNKROVCVSIGFCYGAZFDJBCBRPIKCLJMQWDUMTHFLZEIIZYLFODTUNZOZJHOBAACTAMOXBTULPZCFPJXQBUYVHHVAHBITNISPBKMTNWFKRGYWDLQRCQFEWHJGPTGGKZPDJPCVOTSESZWFOP");
    msg.value = 180U;

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
    msg.setTimeStamp(0.26912373085838703);
    msg.setSource(31431U);
    msg.setSourceEntity(206U);
    msg.setDestination(44286U);
    msg.setDestinationEntity(140U);
    msg.name.assign("CQZGIAXPHTAJRWBFHITDSJZXFJJTNIFTCCSHAIWTEMOYCHSHVSOYNXAQGCSAEGSXPXXJWMEZQUMEZOIVGWBTMDNSWJEUZRIKPWLAPEPGQUNDXWLZDXRUGLGQPLPOKHVYNKHAARCFVEZYHNOKQDUCCVXOYSFAVTGFBLUFBBBYWQDTEYYQDIHGKRXWWCN");
    msg.value = 126U;

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
    msg.setTimeStamp(0.4386843161877426);
    msg.setSource(4912U);
    msg.setSourceEntity(76U);
    msg.setDestination(54794U);
    msg.setDestinationEntity(102U);
    msg.name.assign("KAAPGKWYAGFDVIMHCGRVRAJCKID");

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
    msg.setTimeStamp(0.9723577012001591);
    msg.setSource(14388U);
    msg.setSourceEntity(142U);
    msg.setDestination(19469U);
    msg.setDestinationEntity(75U);
    msg.name.assign("DPFKKNQERKHVDAKUAXJUIWJZEXVLCYJOEPLPPSQNGQLADXCEETCZSXOHTBSYINFJQSHWERNLKGAEVHIHFRMTNVRSTGXNXROGYZYKGUNVDQIHYCFQMPPEXMRWTITZICUHP");

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
    msg.setTimeStamp(0.17294858857371265);
    msg.setSource(579U);
    msg.setSourceEntity(169U);
    msg.setDestination(10400U);
    msg.setDestinationEntity(124U);
    msg.name.assign("EMLCZGEVNHKCUUIYFDDWEYOFINRBCHZTNBPXELASKTXWSGFKJTZSZFAADPCFUYHEMIVUPZKRDQPSGXRSQMPWDDWNMVMBIPQTCMYJMNEIDHXFDTKUBGZLPTQWCFWNLZQAHXRTTYUKJROEQEBNVAKJFBBAOYTGPCFGJUGTXKOOYSQLYCXL");

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
    msg.setTimeStamp(0.9828304326440827);
    msg.setSource(36477U);
    msg.setSourceEntity(14U);
    msg.setDestination(30461U);
    msg.setDestinationEntity(242U);
    msg.name.assign("TRIJEJHYKGZCVWRVAQGGXBUIJLLYKOEVKOPSOKCHRYDEANEHMXBSULZSEJLFWPEQYCETAJWHYQSBIODLHNLUDDCZJIWDJXZIWYUDMNIVCWMTPPNJRKHUVPYTNISDJXABFQVKGBKAGTAGMHUWQDUQCPXAFF");
    msg.value = 249U;

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
    msg.setTimeStamp(0.7330240796526584);
    msg.setSource(31014U);
    msg.setSourceEntity(79U);
    msg.setDestination(7513U);
    msg.setDestinationEntity(1U);
    msg.name.assign("ZJFKJVSHQLSXTNKNWXYMGDDQBYYARORAAWLMGQGVKSMCDLIUMROSNPWDUFRRAMSGBYRXRYUVUDMZKIIWJMRQBLBTEWXDJJYZLOAPSNPQHEUBGBCBTNXWLIKJKWYPOQTMTNZPHKNCOGONEJKVDFPQCKIFCULNCZSUXJOBRTTUQZ");
    msg.value = 250U;

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
    msg.setTimeStamp(0.324560521668774);
    msg.setSource(37168U);
    msg.setSourceEntity(152U);
    msg.setDestination(49489U);
    msg.setDestinationEntity(165U);
    msg.name.assign("NZXWYEYSAIZERGGNHTLEHTACQJTMDPKRLFQQADNLUJPONVOBDNRJZKXQUGFJIDZTDBMEYNKTFQRBASWD");
    msg.value = 185U;

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
    msg.setTimeStamp(0.2879080704464687);
    msg.setSource(47403U);
    msg.setSourceEntity(196U);
    msg.setDestination(52932U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.5242205001421067;
    msg.lon = 0.09723451799360883;
    msg.height = 0.3697244822112563;
    msg.x = 0.4614341432161523;
    msg.y = 0.10689914893826169;
    msg.z = 0.6770315606859655;
    msg.phi = 0.5354135609595619;
    msg.theta = 0.6857530866874848;
    msg.psi = 0.02707080200605716;
    msg.u = 0.32759701223679205;
    msg.v = 0.935882585809308;
    msg.w = 0.6421672327203185;
    msg.vx = 0.3767700321318771;
    msg.vy = 0.9853898249644611;
    msg.vz = 0.014561931129419281;
    msg.p = 0.307957178006783;
    msg.q = 0.3838983927772899;
    msg.r = 0.3114350576288003;
    msg.depth = 0.9137724219696719;
    msg.alt = 0.2520770246850239;

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
    msg.setTimeStamp(0.5734243115235192);
    msg.setSource(3928U);
    msg.setSourceEntity(206U);
    msg.setDestination(55459U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.7021720952483619;
    msg.lon = 0.6870266961345561;
    msg.height = 0.9670565413851601;
    msg.x = 0.18016212887665362;
    msg.y = 0.9526026150289166;
    msg.z = 0.7275108143998739;
    msg.phi = 0.44433072250121286;
    msg.theta = 0.28167439638469416;
    msg.psi = 0.793773129057008;
    msg.u = 0.007807099873516576;
    msg.v = 0.7284366062516141;
    msg.w = 0.004751017441008365;
    msg.vx = 0.6901619273214706;
    msg.vy = 0.2670560050717453;
    msg.vz = 0.3382103701400877;
    msg.p = 0.48425931794244614;
    msg.q = 0.08008962555783339;
    msg.r = 0.7843002349310142;
    msg.depth = 0.380625370753066;
    msg.alt = 0.8502888126175677;

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
    msg.setTimeStamp(0.7789390973409782);
    msg.setSource(35517U);
    msg.setSourceEntity(238U);
    msg.setDestination(9285U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.04757159798342303;
    msg.lon = 0.07264609246990672;
    msg.height = 0.8376819191836282;
    msg.x = 0.6472331720344653;
    msg.y = 0.9476404911880526;
    msg.z = 0.9048204017394432;
    msg.phi = 0.2293105338824798;
    msg.theta = 0.07526394732922959;
    msg.psi = 0.7274679595227431;
    msg.u = 0.1323372862906681;
    msg.v = 0.44787260188698064;
    msg.w = 0.6790765971681695;
    msg.vx = 0.011913673850931228;
    msg.vy = 0.64947400580266;
    msg.vz = 0.008442036280423282;
    msg.p = 0.18411966655284984;
    msg.q = 0.7094767260601147;
    msg.r = 0.3094548765989409;
    msg.depth = 0.16271542119379945;
    msg.alt = 0.7897531512789137;

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
    msg.setTimeStamp(0.9586490819835163);
    msg.setSource(16406U);
    msg.setSourceEntity(68U);
    msg.setDestination(34118U);
    msg.setDestinationEntity(169U);
    msg.x = 0.3965569974240506;
    msg.y = 0.28899862231565554;
    msg.z = 0.7354847425153915;

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
    msg.setTimeStamp(0.7898286855742064);
    msg.setSource(31343U);
    msg.setSourceEntity(36U);
    msg.setDestination(63380U);
    msg.setDestinationEntity(69U);
    msg.x = 0.8152544501437421;
    msg.y = 0.8973704600882058;
    msg.z = 0.7573356637983086;

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
    msg.setTimeStamp(0.45931790311307596);
    msg.setSource(41427U);
    msg.setSourceEntity(16U);
    msg.setDestination(45896U);
    msg.setDestinationEntity(238U);
    msg.x = 0.40599896678958547;
    msg.y = 0.006076938140320287;
    msg.z = 0.30067333834887267;

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
    msg.setTimeStamp(0.5633783623536961);
    msg.setSource(56736U);
    msg.setSourceEntity(21U);
    msg.setDestination(23752U);
    msg.setDestinationEntity(154U);
    msg.value = 0.8774033723978663;

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
    msg.setTimeStamp(0.541895572870359);
    msg.setSource(15432U);
    msg.setSourceEntity(60U);
    msg.setDestination(61943U);
    msg.setDestinationEntity(29U);
    msg.value = 0.7416433818729644;

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
    msg.setTimeStamp(0.5706918165478998);
    msg.setSource(12821U);
    msg.setSourceEntity(254U);
    msg.setDestination(34335U);
    msg.setDestinationEntity(2U);
    msg.value = 0.046431370101589264;

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
    msg.setTimeStamp(0.309886574577767);
    msg.setSource(65396U);
    msg.setSourceEntity(168U);
    msg.setDestination(48868U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5718667445941203;

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
    msg.setTimeStamp(0.9720334389066141);
    msg.setSource(26318U);
    msg.setSourceEntity(201U);
    msg.setDestination(21263U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5088840203017504;

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
    msg.setTimeStamp(0.6853874946542327);
    msg.setSource(6218U);
    msg.setSourceEntity(244U);
    msg.setDestination(58827U);
    msg.setDestinationEntity(223U);
    msg.value = 0.6576939611490192;

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
    msg.setTimeStamp(0.9692657228492026);
    msg.setSource(12497U);
    msg.setSourceEntity(163U);
    msg.setDestination(59860U);
    msg.setDestinationEntity(152U);
    msg.x = 0.5399605701712402;
    msg.y = 0.45146885470333054;
    msg.z = 0.7238621553532009;
    msg.phi = 0.48342304963886107;
    msg.theta = 0.14750326773349776;
    msg.psi = 0.9631092626150766;
    msg.p = 0.5726821676220578;
    msg.q = 0.2636805678790145;
    msg.r = 0.23229360016682854;
    msg.u = 0.7108150314700774;
    msg.v = 0.08446575374607312;
    msg.w = 0.4676880943810877;
    msg.bias_psi = 0.5790431286565678;
    msg.bias_r = 0.6391617234090867;

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
    msg.setTimeStamp(0.8108379515588375);
    msg.setSource(45864U);
    msg.setSourceEntity(44U);
    msg.setDestination(35007U);
    msg.setDestinationEntity(74U);
    msg.x = 0.829077732943625;
    msg.y = 0.03316474389243618;
    msg.z = 0.5784399512165849;
    msg.phi = 0.03594080135559907;
    msg.theta = 0.23344099422605258;
    msg.psi = 0.7532996995367532;
    msg.p = 0.38956525580076096;
    msg.q = 0.0611999071230207;
    msg.r = 0.034456737546299965;
    msg.u = 0.5547324542258787;
    msg.v = 0.11905800333119021;
    msg.w = 0.49905300219117177;
    msg.bias_psi = 0.5168386549071793;
    msg.bias_r = 0.5059733372195264;

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
    msg.setTimeStamp(0.7092705787089064);
    msg.setSource(59097U);
    msg.setSourceEntity(250U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(222U);
    msg.x = 0.060775760747044494;
    msg.y = 0.03417207143690715;
    msg.z = 0.196620437465874;
    msg.phi = 0.9248922244010876;
    msg.theta = 0.04917321204208991;
    msg.psi = 0.3944378486974157;
    msg.p = 0.9288232734617712;
    msg.q = 0.11972064348716904;
    msg.r = 0.6475443550040143;
    msg.u = 0.8943376403693956;
    msg.v = 0.1798856983199698;
    msg.w = 0.5458232158480598;
    msg.bias_psi = 0.5432401213620215;
    msg.bias_r = 0.23104818006962968;

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
    msg.setTimeStamp(0.6441637265492467);
    msg.setSource(58508U);
    msg.setSourceEntity(234U);
    msg.setDestination(42018U);
    msg.setDestinationEntity(245U);
    msg.bias_psi = 0.8460601161877811;
    msg.bias_r = 0.0989899871554093;
    msg.cog = 0.48877811965365736;
    msg.cyaw = 0.2996173418748832;
    msg.lbl_rej_level = 0.8681372043890617;
    msg.gps_rej_level = 0.8268762211555551;
    msg.custom_x = 0.9683906901762576;
    msg.custom_y = 0.8372592140163204;
    msg.custom_z = 0.6405271048175387;

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
    msg.setTimeStamp(0.14063732752156277);
    msg.setSource(7912U);
    msg.setSourceEntity(69U);
    msg.setDestination(64132U);
    msg.setDestinationEntity(43U);
    msg.bias_psi = 0.12086670827257473;
    msg.bias_r = 0.6822516821184405;
    msg.cog = 0.6935994717249966;
    msg.cyaw = 0.30934618465229213;
    msg.lbl_rej_level = 0.4906424460221559;
    msg.gps_rej_level = 0.6104099215721759;
    msg.custom_x = 0.5238440433739855;
    msg.custom_y = 0.027256234447892713;
    msg.custom_z = 0.8551587950592424;

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
    msg.setTimeStamp(0.20431947043668908);
    msg.setSource(25942U);
    msg.setSourceEntity(70U);
    msg.setDestination(24204U);
    msg.setDestinationEntity(84U);
    msg.bias_psi = 0.1590943208663479;
    msg.bias_r = 0.3039609060158349;
    msg.cog = 0.41926062433272127;
    msg.cyaw = 0.8207805873978253;
    msg.lbl_rej_level = 0.326427740964493;
    msg.gps_rej_level = 0.261250965703385;
    msg.custom_x = 0.6555930453340795;
    msg.custom_y = 0.5392852840541639;
    msg.custom_z = 0.8832722097940324;

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
    msg.setTimeStamp(0.8169755901563);
    msg.setSource(58915U);
    msg.setSourceEntity(150U);
    msg.setDestination(24798U);
    msg.setDestinationEntity(48U);
    msg.utc_time = 0.40957614606195847;
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
    msg.setTimeStamp(0.31913687471480523);
    msg.setSource(23361U);
    msg.setSourceEntity(170U);
    msg.setDestination(19170U);
    msg.setDestinationEntity(155U);
    msg.utc_time = 0.9181856739445389;
    msg.reason = 240U;

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
    msg.setTimeStamp(0.929936804281246);
    msg.setSource(4141U);
    msg.setSourceEntity(19U);
    msg.setDestination(20006U);
    msg.setDestinationEntity(155U);
    msg.utc_time = 0.21182599514334943;
    msg.reason = 203U;

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
    msg.setTimeStamp(0.5282575027032239);
    msg.setSource(9710U);
    msg.setSourceEntity(101U);
    msg.setDestination(47767U);
    msg.setDestinationEntity(244U);
    msg.id = 27U;
    msg.range = 0.13948078697791577;
    msg.acceptance = 179U;

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
    msg.setTimeStamp(0.9687575378461416);
    msg.setSource(47178U);
    msg.setSourceEntity(133U);
    msg.setDestination(36009U);
    msg.setDestinationEntity(37U);
    msg.id = 15U;
    msg.range = 0.7823228060265052;
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
    msg.setTimeStamp(0.8917095109612496);
    msg.setSource(3932U);
    msg.setSourceEntity(84U);
    msg.setDestination(39037U);
    msg.setDestinationEntity(31U);
    msg.id = 236U;
    msg.range = 0.8294249492590672;
    msg.acceptance = 110U;

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
    msg.setTimeStamp(0.9885674706588786);
    msg.setSource(48024U);
    msg.setSourceEntity(107U);
    msg.setDestination(2784U);
    msg.setDestinationEntity(147U);
    msg.type = 9U;
    msg.reason = 152U;
    msg.value = 0.9313365632920995;
    msg.timestep = 0.8788745415759877;

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
    msg.setTimeStamp(0.0002611022939793539);
    msg.setSource(37798U);
    msg.setSourceEntity(132U);
    msg.setDestination(53160U);
    msg.setDestinationEntity(175U);
    msg.type = 128U;
    msg.reason = 124U;
    msg.value = 0.6255335605650514;
    msg.timestep = 0.29162861795603423;

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
    msg.setTimeStamp(0.8635645437689873);
    msg.setSource(14309U);
    msg.setSourceEntity(220U);
    msg.setDestination(28429U);
    msg.setDestinationEntity(43U);
    msg.type = 114U;
    msg.reason = 125U;
    msg.value = 0.4828180920945242;
    msg.timestep = 0.6821608600073108;

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
    msg.setTimeStamp(0.820408462490038);
    msg.setSource(65085U);
    msg.setSourceEntity(187U);
    msg.setDestination(55026U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.43153433765280624);
    msg.setSource(36942U);
    msg.setSourceEntity(21U);
    msg.setDestination(33496U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.5722154635118225);
    msg.setSource(10066U);
    msg.setSourceEntity(175U);
    msg.setDestination(50675U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.2140867139683259);
    msg.setSource(17577U);
    msg.setSourceEntity(191U);
    msg.setDestination(40264U);
    msg.setDestinationEntity(21U);
    msg.beacon.assign("RGPLMCJDJCBOQIADKKQYNVQLJOWTHLLQAXHIGYQCISDOLMQISNHJGZEOWWNDYCYABFEZKJZBXHPQTOZSMTLIUHWWMNNPUYEUVOUROCGJWTZEKWUCEFLXRIHFPRRBIDKSZDAACVBAMNRKMPUXMHQRZFVRCVOMXUQJOFIGDOEBHVXPHGAZMYTLKCPXZUHXSKENDEQNGJBKYBVVFJGEVEMXSNISLRTPYTYFVZIFLASBY");
    msg.x = 0.2414354193966558;
    msg.y = 0.6007643857147946;
    msg.depth = 0.3298708980376539;
    msg.var_x = 0.20095429061657133;
    msg.var_y = 0.30465997942609446;

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
    msg.setTimeStamp(0.36148307344770614);
    msg.setSource(29741U);
    msg.setSourceEntity(201U);
    msg.setDestination(13167U);
    msg.setDestinationEntity(171U);
    msg.beacon.assign("JXRGAXYKWRECUUDSUVRITHL");
    msg.x = 0.8118928621659092;
    msg.y = 0.43402484617594717;
    msg.depth = 0.3584400739841491;
    msg.var_x = 0.12055583370820111;
    msg.var_y = 0.21347794680239995;

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
    msg.setTimeStamp(0.688988717912106);
    msg.setSource(63570U);
    msg.setSourceEntity(169U);
    msg.setDestination(20174U);
    msg.setDestinationEntity(226U);
    msg.beacon.assign("KJQCELDSHHCWWBOYKOHDISAHDXJSPHUABNQKHVTKVFUUMWVOZUTLOKPPVFDGMAHFLVZQBOJVQNPCEGULXXBJYJWDLOFXBMZBIRQTNSIKGWZDEYOQEQBKLVQUWFXLVVSVWRFYMDANORRKZUTIXUFGPLMTJXLCTTMNBIIBICGEJAHIGYZFFTPAZAOMMXSPWTJK");
    msg.x = 0.836504566013399;
    msg.y = 0.6102001446887239;
    msg.depth = 0.060535333275165915;
    msg.var_x = 0.8402301610147549;
    msg.var_y = 0.9514181677256002;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.30763729302956966);
    msg.setSource(35263U);
    msg.setSourceEntity(192U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(153U);
    msg.value = 0.09571175529876985;

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
    msg.setTimeStamp(0.47020034887240825);
    msg.setSource(22086U);
    msg.setSourceEntity(211U);
    msg.setDestination(30739U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9308132172964623;

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
    msg.setTimeStamp(0.38651166398799186);
    msg.setSource(31439U);
    msg.setSourceEntity(235U);
    msg.setDestination(31749U);
    msg.setDestinationEntity(158U);
    msg.value = 0.46580157106922726;

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
    msg.setTimeStamp(0.2819885893551157);
    msg.setSource(43409U);
    msg.setSourceEntity(78U);
    msg.setDestination(55574U);
    msg.setDestinationEntity(130U);
    msg.value = 0.518156015602459;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.20913661015714913);
    msg.setSource(4674U);
    msg.setSourceEntity(124U);
    msg.setDestination(47459U);
    msg.setDestinationEntity(96U);
    msg.value = 0.27812313919664944;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.6643706327101463);
    msg.setSource(35546U);
    msg.setSourceEntity(69U);
    msg.setDestination(4933U);
    msg.setDestinationEntity(222U);
    msg.value = 0.24667951021868717;
    msg.z_units = 106U;

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
    msg.setTimeStamp(0.46502515182364834);
    msg.setSource(7287U);
    msg.setSourceEntity(128U);
    msg.setDestination(41370U);
    msg.setDestinationEntity(209U);
    msg.value = 0.7954226522402587;
    msg.speed_units = 79U;

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
    msg.setTimeStamp(0.799291500408497);
    msg.setSource(21126U);
    msg.setSourceEntity(180U);
    msg.setDestination(38486U);
    msg.setDestinationEntity(190U);
    msg.value = 0.29947337340502167;
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
    msg.setTimeStamp(0.05048038066315219);
    msg.setSource(53744U);
    msg.setSourceEntity(62U);
    msg.setDestination(41789U);
    msg.setDestinationEntity(137U);
    msg.value = 0.3707238084035478;
    msg.speed_units = 102U;

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
    msg.setTimeStamp(0.9863105153239909);
    msg.setSource(54118U);
    msg.setSourceEntity(59U);
    msg.setDestination(38318U);
    msg.setDestinationEntity(45U);
    msg.value = 0.5870259207077002;

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
    msg.setTimeStamp(0.468140081993184);
    msg.setSource(17110U);
    msg.setSourceEntity(95U);
    msg.setDestination(63577U);
    msg.setDestinationEntity(0U);
    msg.value = 0.34707346071288303;

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
    msg.setTimeStamp(0.5954554375016725);
    msg.setSource(4203U);
    msg.setSourceEntity(229U);
    msg.setDestination(49081U);
    msg.setDestinationEntity(129U);
    msg.value = 0.4528011506446791;

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
    msg.setTimeStamp(0.2889588686462542);
    msg.setSource(55882U);
    msg.setSourceEntity(185U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(124U);
    msg.value = 0.4130262814358897;

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
    msg.setTimeStamp(0.8429472501532945);
    msg.setSource(4357U);
    msg.setSourceEntity(42U);
    msg.setDestination(1585U);
    msg.setDestinationEntity(236U);
    msg.value = 0.4972070623768654;

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
    msg.setTimeStamp(0.04234082657838101);
    msg.setSource(3801U);
    msg.setSourceEntity(240U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8428456819979763;

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
    msg.setTimeStamp(0.03529243256636272);
    msg.setSource(60714U);
    msg.setSourceEntity(120U);
    msg.setDestination(12128U);
    msg.setDestinationEntity(119U);
    msg.value = 0.7599587833301166;

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
    msg.setTimeStamp(0.40371496291981657);
    msg.setSource(28637U);
    msg.setSourceEntity(188U);
    msg.setDestination(1262U);
    msg.setDestinationEntity(249U);
    msg.value = 0.25802697935909213;

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
    msg.setTimeStamp(0.665705684618152);
    msg.setSource(2058U);
    msg.setSourceEntity(161U);
    msg.setDestination(38804U);
    msg.setDestinationEntity(204U);
    msg.value = 0.29405300472122875;

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
    msg.setTimeStamp(0.958089422042396);
    msg.setSource(55743U);
    msg.setSourceEntity(212U);
    msg.setDestination(56802U);
    msg.setDestinationEntity(224U);
    msg.start_lat = 0.10551840849028593;
    msg.start_lon = 0.14879993030405292;
    msg.start_z = 0.5316680154329173;
    msg.start_z_units = 244U;
    msg.end_lat = 0.35043641820980287;
    msg.end_lon = 0.9222252411378989;
    msg.end_z = 0.13201325644274164;
    msg.end_z_units = 126U;
    msg.speed = 0.17851568592565048;
    msg.speed_units = 85U;
    msg.lradius = 0.8374744488673819;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.7698964152834453);
    msg.setSource(8985U);
    msg.setSourceEntity(86U);
    msg.setDestination(58837U);
    msg.setDestinationEntity(17U);
    msg.start_lat = 0.44201597299248363;
    msg.start_lon = 0.06309715655663506;
    msg.start_z = 0.3275966202686609;
    msg.start_z_units = 77U;
    msg.end_lat = 0.8525855522456854;
    msg.end_lon = 0.6002518453977941;
    msg.end_z = 0.4277231040439974;
    msg.end_z_units = 99U;
    msg.speed = 0.20862588619826117;
    msg.speed_units = 3U;
    msg.lradius = 0.730765366552685;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.22626902509207636);
    msg.setSource(57748U);
    msg.setSourceEntity(195U);
    msg.setDestination(19961U);
    msg.setDestinationEntity(234U);
    msg.start_lat = 0.47030540936959464;
    msg.start_lon = 0.1691988505256028;
    msg.start_z = 0.3519481492885159;
    msg.start_z_units = 39U;
    msg.end_lat = 0.24647432230025168;
    msg.end_lon = 0.9874790034457869;
    msg.end_z = 0.8685474790586577;
    msg.end_z_units = 203U;
    msg.speed = 0.22212343727420047;
    msg.speed_units = 172U;
    msg.lradius = 0.21505993604507412;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.05760933042015992);
    msg.setSource(2642U);
    msg.setSourceEntity(59U);
    msg.setDestination(34035U);
    msg.setDestinationEntity(251U);
    msg.x = 0.6702912595152947;
    msg.y = 0.8237451383055857;
    msg.z = 0.6143497199825503;
    msg.k = 0.6764507876070183;
    msg.m = 0.21764857802788495;
    msg.n = 0.5739688442574659;
    msg.flags = 60U;

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
    msg.setTimeStamp(0.514476274796999);
    msg.setSource(56328U);
    msg.setSourceEntity(53U);
    msg.setDestination(63559U);
    msg.setDestinationEntity(132U);
    msg.x = 0.1179180349888519;
    msg.y = 0.2781161020691757;
    msg.z = 0.8410693725809028;
    msg.k = 0.9794990271268776;
    msg.m = 0.6367384257648051;
    msg.n = 0.5186694376979945;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.8876782322797078);
    msg.setSource(55221U);
    msg.setSourceEntity(7U);
    msg.setDestination(63722U);
    msg.setDestinationEntity(156U);
    msg.x = 0.769244411572486;
    msg.y = 0.9069663848135141;
    msg.z = 0.14366600374717398;
    msg.k = 0.14042409715160986;
    msg.m = 0.19496124789129976;
    msg.n = 0.9005416390297848;
    msg.flags = 192U;

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
    msg.setTimeStamp(0.8669294496908205);
    msg.setSource(20990U);
    msg.setSourceEntity(179U);
    msg.setDestination(22089U);
    msg.setDestinationEntity(183U);
    msg.value = 0.8580707691218591;

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
    msg.setTimeStamp(0.9548699648858112);
    msg.setSource(2317U);
    msg.setSourceEntity(191U);
    msg.setDestination(46012U);
    msg.setDestinationEntity(152U);
    msg.value = 0.08495680614769674;

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
    msg.setTimeStamp(0.39054738766961083);
    msg.setSource(10294U);
    msg.setSourceEntity(116U);
    msg.setDestination(24241U);
    msg.setDestinationEntity(94U);
    msg.value = 0.5439049483088744;

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
    msg.setTimeStamp(0.8603378437957521);
    msg.setSource(26024U);
    msg.setSourceEntity(86U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(23U);
    msg.u = 0.30811878247574076;
    msg.v = 0.19771610549688323;
    msg.w = 0.8812052040857744;
    msg.p = 0.18672711975234413;
    msg.q = 0.9265001541707287;
    msg.r = 0.3252851491380564;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.5145282243551771);
    msg.setSource(16557U);
    msg.setSourceEntity(115U);
    msg.setDestination(28781U);
    msg.setDestinationEntity(144U);
    msg.u = 0.5390829382396484;
    msg.v = 0.8397781064939374;
    msg.w = 0.4688731963877577;
    msg.p = 0.9098173160757772;
    msg.q = 0.47908185535920333;
    msg.r = 0.4316263981303289;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.06434027838135925);
    msg.setSource(35800U);
    msg.setSourceEntity(170U);
    msg.setDestination(54159U);
    msg.setDestinationEntity(188U);
    msg.u = 0.5352128163248397;
    msg.v = 0.13398402704143386;
    msg.w = 0.532385813955913;
    msg.p = 0.5331512955110779;
    msg.q = 0.6213924925453048;
    msg.r = 0.18810414650198726;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.20884459362513652);
    msg.setSource(53845U);
    msg.setSourceEntity(167U);
    msg.setDestination(44188U);
    msg.setDestinationEntity(87U);
    msg.start_lat = 0.4834966109019445;
    msg.start_lon = 0.9890753258519028;
    msg.start_z = 0.9395214750982426;
    msg.start_z_units = 7U;
    msg.end_lat = 0.5238811778446724;
    msg.end_lon = 0.18519823911655875;
    msg.end_z = 0.04708627174875235;
    msg.end_z_units = 161U;
    msg.lradius = 0.13992986591085022;
    msg.flags = 250U;
    msg.x = 0.24510847987398476;
    msg.y = 0.048877620432485114;
    msg.z = 0.7996722212689191;
    msg.vx = 0.25821301292259324;
    msg.vy = 0.5711249472247774;
    msg.vz = 0.9608438491051415;
    msg.course_error = 0.7256468713151515;
    msg.eta = 44091U;

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
    msg.setTimeStamp(0.6721510863972894);
    msg.setSource(50384U);
    msg.setSourceEntity(221U);
    msg.setDestination(15283U);
    msg.setDestinationEntity(252U);
    msg.start_lat = 0.13557035830821884;
    msg.start_lon = 0.42626326836432404;
    msg.start_z = 0.5697755276405707;
    msg.start_z_units = 65U;
    msg.end_lat = 0.051902914222182295;
    msg.end_lon = 0.12319431073867226;
    msg.end_z = 0.05521189419003114;
    msg.end_z_units = 236U;
    msg.lradius = 0.8351910910589184;
    msg.flags = 136U;
    msg.x = 0.32023984759911595;
    msg.y = 0.46808147830325286;
    msg.z = 0.4234212958237309;
    msg.vx = 0.17895140174519186;
    msg.vy = 0.7555390202074793;
    msg.vz = 0.6949090620597503;
    msg.course_error = 0.32150030402506424;
    msg.eta = 49902U;

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
    msg.setTimeStamp(0.6266265569251469);
    msg.setSource(5165U);
    msg.setSourceEntity(195U);
    msg.setDestination(371U);
    msg.setDestinationEntity(41U);
    msg.start_lat = 0.5710947761180262;
    msg.start_lon = 0.16708070562963506;
    msg.start_z = 0.32496593777652094;
    msg.start_z_units = 231U;
    msg.end_lat = 0.16181652715111228;
    msg.end_lon = 0.40619003850544544;
    msg.end_z = 0.44816312328703634;
    msg.end_z_units = 184U;
    msg.lradius = 0.6554574000284428;
    msg.flags = 173U;
    msg.x = 0.7908205763435543;
    msg.y = 0.3932012236200213;
    msg.z = 0.19778355208097975;
    msg.vx = 0.7721002994219888;
    msg.vy = 0.4364853695330311;
    msg.vz = 0.9010348378995818;
    msg.course_error = 0.8477432774513057;
    msg.eta = 26925U;

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
    msg.setTimeStamp(0.6213996252959086);
    msg.setSource(23777U);
    msg.setSourceEntity(215U);
    msg.setDestination(52435U);
    msg.setDestinationEntity(213U);
    msg.k = 0.014611846986334776;
    msg.m = 0.8171500095224409;
    msg.n = 0.5800192189066868;

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
    msg.setTimeStamp(0.04165617353875095);
    msg.setSource(4584U);
    msg.setSourceEntity(226U);
    msg.setDestination(46039U);
    msg.setDestinationEntity(144U);
    msg.k = 0.3906895317138672;
    msg.m = 0.03307621266719274;
    msg.n = 0.586344973813958;

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
    msg.setTimeStamp(0.8152248513016747);
    msg.setSource(24239U);
    msg.setSourceEntity(207U);
    msg.setDestination(56783U);
    msg.setDestinationEntity(233U);
    msg.k = 0.4521354869685493;
    msg.m = 0.46623943313227045;
    msg.n = 0.8533337786235152;

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
    msg.setTimeStamp(0.4174630858807238);
    msg.setSource(44167U);
    msg.setSourceEntity(71U);
    msg.setDestination(30856U);
    msg.setDestinationEntity(134U);
    msg.p = 0.7892198667375337;
    msg.i = 0.17986419841210888;
    msg.d = 0.8520559520051254;
    msg.a = 0.6520450468564433;

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
    msg.setTimeStamp(0.6604294679869196);
    msg.setSource(46868U);
    msg.setSourceEntity(184U);
    msg.setDestination(19399U);
    msg.setDestinationEntity(154U);
    msg.p = 0.0059547225566285444;
    msg.i = 0.49244817918505157;
    msg.d = 0.09383597620628725;
    msg.a = 0.8562280449162573;

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
    msg.setTimeStamp(0.5667939189644331);
    msg.setSource(48611U);
    msg.setSourceEntity(90U);
    msg.setDestination(17630U);
    msg.setDestinationEntity(105U);
    msg.p = 0.8599719569572258;
    msg.i = 0.7293970193865071;
    msg.d = 0.30869993675448326;
    msg.a = 0.11303934723878672;

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
    msg.setTimeStamp(0.39157362934385753);
    msg.setSource(12421U);
    msg.setSourceEntity(33U);
    msg.setDestination(22831U);
    msg.setDestinationEntity(137U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.15274095612457528);
    msg.setSource(108U);
    msg.setSourceEntity(245U);
    msg.setDestination(44627U);
    msg.setDestinationEntity(252U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.9099243042726585);
    msg.setSource(56754U);
    msg.setSourceEntity(130U);
    msg.setDestination(23130U);
    msg.setDestinationEntity(62U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.2674534659461395);
    msg.setSource(25624U);
    msg.setSourceEntity(202U);
    msg.setDestination(15160U);
    msg.setDestinationEntity(182U);
    msg.timeout = 6056U;
    msg.lat = 0.4050071908962032;
    msg.lon = 0.2654423791893359;
    msg.z = 0.04076710088294677;
    msg.z_units = 31U;
    msg.speed = 0.25757741844361837;
    msg.speed_units = 212U;
    msg.roll = 0.7037435557964429;
    msg.pitch = 0.1566107673124476;
    msg.yaw = 0.8439076492982921;
    msg.custom.assign("OIAZHEXPNALMIKLGQYKQNCVMNXXYSTDWFSZIZLMMMDNBYKCYTRBGXCQHTICOBRHYPBPENNYYVAUTGOEZBSCAJAJOXZDCAULQWEJSOGPZUCHQXUPJUJVRLFGOGMEPJQUZSHLPFINEMRTAIFVJAWDDRVXPAUFJFDMZOPWKXHIOVQB");

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
    msg.setTimeStamp(0.2972353245845638);
    msg.setSource(63936U);
    msg.setSourceEntity(45U);
    msg.setDestination(45360U);
    msg.setDestinationEntity(161U);
    msg.timeout = 801U;
    msg.lat = 0.18975538560153227;
    msg.lon = 0.5132591423719667;
    msg.z = 0.09029271479451095;
    msg.z_units = 103U;
    msg.speed = 0.7239901231556907;
    msg.speed_units = 240U;
    msg.roll = 0.6858818198421381;
    msg.pitch = 0.4005284523533875;
    msg.yaw = 0.18743256875531278;
    msg.custom.assign("IDRUZFLYLLNMRHDEYHJLIMRBXSXZYWPSTUWBRDSASEJZVKAONGXQIHUWK");

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
    msg.setTimeStamp(0.6290147329074387);
    msg.setSource(24873U);
    msg.setSourceEntity(221U);
    msg.setDestination(36886U);
    msg.setDestinationEntity(111U);
    msg.timeout = 51615U;
    msg.lat = 0.3091832275300017;
    msg.lon = 0.24817365784223722;
    msg.z = 0.2560669550501792;
    msg.z_units = 124U;
    msg.speed = 0.9587581046214695;
    msg.speed_units = 10U;
    msg.roll = 0.6275048849401889;
    msg.pitch = 0.8549343098762318;
    msg.yaw = 0.17597252890753357;
    msg.custom.assign("UEPWSUBGMOIUUMSYLSTGMMIH");

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
    msg.setTimeStamp(0.7951167747145481);
    msg.setSource(8825U);
    msg.setSourceEntity(79U);
    msg.setDestination(45400U);
    msg.setDestinationEntity(163U);
    msg.timeout = 17673U;
    msg.lat = 0.1433845204658004;
    msg.lon = 0.3702447174016237;
    msg.z = 0.7328301682794753;
    msg.z_units = 75U;
    msg.speed = 0.3236242924432967;
    msg.speed_units = 175U;
    msg.duration = 5039U;
    msg.radius = 0.7882180257627714;
    msg.flags = 104U;
    msg.custom.assign("VLUMEWLMAKKGLVJMUECKQYBDBHLFSPUWSABGRETZZQKZLGISPATEYYTBNPGIDIZXHAIWUTZDXRUCCPOIGJBYFEYPXSRDVNIGECTHNBAUWLNITDQEVVEFRQDXEKBLCCLZOXQWKAXICJHHHXYFGKOCMNWKQOQEJPOMNTOXYSZPMRCJGYWASQM");

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
    msg.setTimeStamp(0.4769438195299215);
    msg.setSource(42991U);
    msg.setSourceEntity(222U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(190U);
    msg.timeout = 37088U;
    msg.lat = 0.16821466023018694;
    msg.lon = 0.8806283646240808;
    msg.z = 0.01017841465667424;
    msg.z_units = 183U;
    msg.speed = 0.7908571410116121;
    msg.speed_units = 121U;
    msg.duration = 1573U;
    msg.radius = 0.9867484149921136;
    msg.flags = 52U;
    msg.custom.assign("FJHFAKGSGUOIRBTYYQERLRHVPLQTOIYSZUARPLGBBFNYMZEKEGOOUTEWZNQCWWJAZBXWXLYAXQGAITPNYJYUSQUPFMGEEWILKUXVMTANHQOMNSVDUCYVXEKAGMRHCRIUBDPPJJOFEAKNOFEDSBMJYJITDM");

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
    msg.setTimeStamp(0.8601831302663006);
    msg.setSource(49601U);
    msg.setSourceEntity(253U);
    msg.setDestination(7869U);
    msg.setDestinationEntity(119U);
    msg.timeout = 54107U;
    msg.lat = 0.1624031422611404;
    msg.lon = 0.7424422424824006;
    msg.z = 0.6410090992643169;
    msg.z_units = 239U;
    msg.speed = 0.3484801545167643;
    msg.speed_units = 117U;
    msg.duration = 55304U;
    msg.radius = 0.9050942299294492;
    msg.flags = 209U;
    msg.custom.assign("NWRHLMFLWHZWCDCMKKXHSTOAEUNABKSTEBRLVIDTJTZVISOEXRITFPPQIMPJAQJIGFFOMYNVHLUJWSOWFMTGUPZMFBYDLNWRUCYERCABLGPARQXXKZPHFLYMSTUXBGQJJCVPLQDKGCXDSZZNJLHOACIAYWARVVPOOYQBTZYOKHBQTMDHXGSFNXYJDBRNWCEESXEGIDZKDUBVKWGLKXWIUUCMUPNR");

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
    msg.setTimeStamp(0.3367209939366572);
    msg.setSource(44399U);
    msg.setSourceEntity(132U);
    msg.setDestination(45241U);
    msg.setDestinationEntity(147U);
    msg.custom.assign("WRNWFDSZHBMPVMOXTCKBTRWYJPHQFBPRXWWLEJTHENHELIJMYAZZQVXUWMTBVABTMBCFAGUKOCNZIPTXYSEKUERLWJCYMFYMCFOQEROGJDSZNYWGKOUVYPQ");

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
    msg.setTimeStamp(0.5748386286501017);
    msg.setSource(60913U);
    msg.setSourceEntity(59U);
    msg.setDestination(38774U);
    msg.setDestinationEntity(54U);
    msg.custom.assign("FSLJKEUOAFUTICDRWQSBQRYPRVMENHFMIXSSZWJLYPQKPWVVCJHEHNYUHSXTQQDIMSPWAOXFLXBUNRAMEZIBJNGBAOKBFDTITGJHXLJRVNCFCQJHXKDJPGDGGUEFEUVXALWSNZFWRCMJPODUUYYAHSHNLGKUQIECVMPKEQIKAXOMOMVYOVIWTOARXYBGIBGZMZMHTKDLRPLOZE");

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
    msg.setTimeStamp(0.8447329851525125);
    msg.setSource(57936U);
    msg.setSourceEntity(154U);
    msg.setDestination(9228U);
    msg.setDestinationEntity(155U);
    msg.custom.assign("YPTBUDJXYZFPHMEGEGCDZOKVHWENAQIXITPEAIGSYFUWDHTAJITLLZXISIABAKNSPQMVDVCMXIDFHQWQNQUOMBWVRCOZBQLRFGOYVKAWJRPHWPDYMMTCWPNOBWDWFIHXQCDJGPRKEJHFKQUYAOGGTMZYYGVZFSRSNRQSRXSNTEAXPZZSVYUGCAKFKWOZEILNDVLBVJHJPTSHBOAEUR");

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
    msg.setTimeStamp(0.18032775407284707);
    msg.setSource(59125U);
    msg.setSourceEntity(193U);
    msg.setDestination(260U);
    msg.setDestinationEntity(47U);
    msg.timeout = 64363U;
    msg.lat = 0.5675736277701169;
    msg.lon = 0.8026641285839249;
    msg.z = 0.6002309791591357;
    msg.z_units = 184U;
    msg.duration = 54520U;
    msg.speed = 0.39044745998112806;
    msg.speed_units = 12U;
    msg.type = 11U;
    msg.radius = 0.716529994651566;
    msg.length = 0.5104929317507785;
    msg.bearing = 0.1307118744657224;
    msg.direction = 188U;
    msg.custom.assign("ZKOLSRFWUJRKUAZBNWNVQPFDJQDRMQJOQBOWXSSKIBHSIURIMYUAOXQCLHOQZWHZNJOYRDSKSYJFHXHSGNULFDTTZNTNIMJRMGPGAQVQOQEDMPLLJPCTREAFUDKDGYUCBNUYNFOWEAKWQBJIKCTGEAKYODANZFUVPTIXHCPJCFLLHRBVYMMJZHBEBWIHAPAKTDTNYGPVOGCTKIBHPLSLCVWB");

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
    msg.setTimeStamp(0.12595362172967284);
    msg.setSource(28188U);
    msg.setSourceEntity(114U);
    msg.setDestination(29065U);
    msg.setDestinationEntity(172U);
    msg.timeout = 28292U;
    msg.lat = 0.8324831075512198;
    msg.lon = 0.48131043093964143;
    msg.z = 0.9728935763017128;
    msg.z_units = 211U;
    msg.duration = 8362U;
    msg.speed = 0.40621961566955467;
    msg.speed_units = 43U;
    msg.type = 215U;
    msg.radius = 0.43893661165995046;
    msg.length = 0.9965525022760936;
    msg.bearing = 0.041490238833932214;
    msg.direction = 220U;
    msg.custom.assign("YCZUTOLXHGCGDCMHUCZDNDORVBTUNFWKVEBSSONZNXUNTGSDYVLPJNRCMGBEQCLYIGEWHTBVBMLPZRITIQZOKAQHYPDBPFVVSGXRUVGEQAZAZWUWKOIGQ");

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
    msg.setTimeStamp(0.4383582692432507);
    msg.setSource(54828U);
    msg.setSourceEntity(87U);
    msg.setDestination(43124U);
    msg.setDestinationEntity(16U);
    msg.timeout = 9509U;
    msg.lat = 0.8737764912607392;
    msg.lon = 0.6939897849673076;
    msg.z = 0.2967299606676389;
    msg.z_units = 61U;
    msg.duration = 52403U;
    msg.speed = 0.43167495400467126;
    msg.speed_units = 67U;
    msg.type = 250U;
    msg.radius = 0.3969127553305315;
    msg.length = 0.49695595740817977;
    msg.bearing = 0.8641798851696239;
    msg.direction = 209U;
    msg.custom.assign("NBVHVBMMLHCHORCRXXJZ");

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
    msg.setTimeStamp(0.10959027437980051);
    msg.setSource(63740U);
    msg.setSourceEntity(110U);
    msg.setDestination(53454U);
    msg.setDestinationEntity(161U);
    msg.duration = 54522U;
    msg.custom.assign("SSHMFSSRRWTBDYYO");

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
    msg.setTimeStamp(0.8427320978447683);
    msg.setSource(42960U);
    msg.setSourceEntity(67U);
    msg.setDestination(3042U);
    msg.setDestinationEntity(3U);
    msg.duration = 56015U;
    msg.custom.assign("DLINXWIEOTVALXXQKZXMYZSJO");

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
    msg.setTimeStamp(0.6866313797524615);
    msg.setSource(17427U);
    msg.setSourceEntity(3U);
    msg.setDestination(27439U);
    msg.setDestinationEntity(174U);
    msg.duration = 7561U;
    msg.custom.assign("XVADUKXDIAYVGVCMWGZEZJUMOAWKQVTTGWKZTRRUROGPASMDOYLRVSLBJZFJSCWSIXHVLXOOFFAMZLVYDBHHPTITUUSPREFUNQZQECFOIW");

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
    msg.setTimeStamp(0.5777875353620333);
    msg.setSource(31366U);
    msg.setSourceEntity(96U);
    msg.setDestination(39730U);
    msg.setDestinationEntity(24U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.6110235189852341;
    tmp_msg_0.z_units = 201U;
    msg.control.set(tmp_msg_0);
    msg.duration = 33243U;
    msg.custom.assign("XRSJSKMOSABIMKWQGSEGQUHNREDWBBEWSPOXFTQQKKOXHQACJXCVIOXNYDYYDRTSMRWIKHSNRRFMNWEDZFQQCJZHHHWOAOODZHKSLLUJTOBNPYYYXHVAVVWUUWBRUZBTLVHAXLPRPCDZFAGXN");

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
    msg.setTimeStamp(0.436374577584154);
    msg.setSource(2537U);
    msg.setSourceEntity(152U);
    msg.setDestination(52785U);
    msg.setDestinationEntity(166U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.8059406785797794;
    msg.control.set(tmp_msg_0);
    msg.duration = 31729U;
    msg.custom.assign("KZFGMDBOVBLHDJOQSHFESJIOFNRZIHFVIPXVBWYKLPSRXRXRRSULEDTDGGFMKPUKEBGORWUUEAJVTEXTHMLGGYYQSWCNAVQUSVDLZXJCHOOLDOPAMJKNZOBXHQXECLWIREUAZFYIGZTNHXBZISQMPPPUMCACQJUSCQZQCVLNNHQYEZPMDFMOIYFUTWWOVJNRYCWDSEBGYUTLFPAXAH");

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
    msg.setTimeStamp(0.40544766987615);
    msg.setSource(26887U);
    msg.setSourceEntity(40U);
    msg.setDestination(17611U);
    msg.setDestinationEntity(202U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.30187684460755737;
    msg.control.set(tmp_msg_0);
    msg.duration = 43097U;
    msg.custom.assign("BCTFHXXPKWHUAYETTMGOSVDXBNUHSESUKBRWBRZRHBZQHCUOMWZNVZNJOMFBNIIUALNFQIYZ");

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
    msg.setTimeStamp(0.07078598782452428);
    msg.setSource(1624U);
    msg.setSourceEntity(61U);
    msg.setDestination(15834U);
    msg.setDestinationEntity(60U);
    msg.timeout = 64914U;
    msg.lat = 0.693660370434259;
    msg.lon = 0.16853677633599473;
    msg.z = 0.8195504281194467;
    msg.z_units = 7U;
    msg.speed = 0.8964266542170655;
    msg.speed_units = 252U;
    msg.bearing = 0.0741445813636471;
    msg.cross_angle = 0.6620503336133603;
    msg.width = 0.5651772434545906;
    msg.length = 0.015256515063141296;
    msg.hstep = 0.3827783825901919;
    msg.coff = 252U;
    msg.alternation = 0U;
    msg.flags = 72U;
    msg.custom.assign("TEDFXSSLDDVUREAKIRSOYLDDVHDQYVWWSXGPKMPZBQVOEHSKJUQXZSUKAWERTXHTRWUCYVCMHJZPJKEIDJFZPAQYAILOVGVBZLAHHCFQHPSONMXQKFFFGTEGLEJXFJUB");

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
    msg.setTimeStamp(0.0484777796946545);
    msg.setSource(59060U);
    msg.setSourceEntity(64U);
    msg.setDestination(6381U);
    msg.setDestinationEntity(107U);
    msg.timeout = 27456U;
    msg.lat = 0.3328752449048712;
    msg.lon = 0.3462359793632188;
    msg.z = 0.35554093595317193;
    msg.z_units = 3U;
    msg.speed = 0.028754501080370254;
    msg.speed_units = 173U;
    msg.bearing = 0.41408584317177544;
    msg.cross_angle = 0.4436690912745661;
    msg.width = 0.9357906370416562;
    msg.length = 0.15839824068693564;
    msg.hstep = 0.45544933630726725;
    msg.coff = 172U;
    msg.alternation = 37U;
    msg.flags = 229U;
    msg.custom.assign("HWTYILARCQUPIGIXOQJNAGUJVFSJYHKBFNEFRMMSMNFTANXTSFGKCQMSQKGZAOBVXSJBPHOANDYBTVOMOSHHIXLNKVECBFGSGCA");

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
    msg.setTimeStamp(0.5000917272838808);
    msg.setSource(41371U);
    msg.setSourceEntity(125U);
    msg.setDestination(8552U);
    msg.setDestinationEntity(111U);
    msg.timeout = 29628U;
    msg.lat = 0.4041397867481509;
    msg.lon = 0.6963931956022312;
    msg.z = 0.6406782495990668;
    msg.z_units = 170U;
    msg.speed = 0.7260444594399104;
    msg.speed_units = 248U;
    msg.bearing = 0.475677427235762;
    msg.cross_angle = 0.5831743221666895;
    msg.width = 0.469609937513376;
    msg.length = 0.2676407379716369;
    msg.hstep = 0.5503455629164212;
    msg.coff = 171U;
    msg.alternation = 86U;
    msg.flags = 32U;
    msg.custom.assign("YBBGWRMFAKERHOZPVAYJMIXGBHFJQFLZXKDMJUTAUZVSVNUOZWSGBCAXUELLFNPPJDKITACWYLZORRLYUCFCEWCGJXOXOKBVNHCOIZWFOPGPM");

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
    msg.setTimeStamp(0.019914925093722058);
    msg.setSource(494U);
    msg.setSourceEntity(220U);
    msg.setDestination(47377U);
    msg.setDestinationEntity(189U);
    msg.timeout = 56716U;
    msg.lat = 0.892453258924352;
    msg.lon = 0.7810804257041791;
    msg.z = 0.8465997223613475;
    msg.z_units = 198U;
    msg.speed = 0.6456029482947563;
    msg.speed_units = 46U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5123651281202595;
    tmp_msg_0.y = 0.7123610581652434;
    tmp_msg_0.z = 0.951601483791506;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UMBFTXTGENLOYHJEBHRVFPFVTXDCODBQEVPMQLFIAEOJOUXSKLODKAKAJCWMVQHHJMLSUKUQWWXPLAXRVQINKUFDTGAIHLEGXRNAZGUTCCGVTBDDOTYNMKZRTRBKMCEVQSWAFTKZTUIUHOJIORIRQHRXDFNGZPZQICFGHPBVGSIBJX");

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
    msg.setTimeStamp(0.36829837638506224);
    msg.setSource(64490U);
    msg.setSourceEntity(249U);
    msg.setDestination(14426U);
    msg.setDestinationEntity(221U);
    msg.timeout = 20104U;
    msg.lat = 0.1910788869165695;
    msg.lon = 0.2973405419513254;
    msg.z = 0.8598120410325056;
    msg.z_units = 224U;
    msg.speed = 0.08793827518227892;
    msg.speed_units = 208U;
    msg.custom.assign("CDUIDEGSNASVSXDLOWZPSPXNKFBPKODDGCJAHFAJGMWZARGXTVYLTUTHNWDSZSABNRABFJDGJUYHETMBGWLOJXPLNQHHVUSTEEMGFOFYGXXVXYFVOWBZMUFVEUPIIHQOYJWCPABKRN");

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
    msg.setTimeStamp(0.2478336397791201);
    msg.setSource(19764U);
    msg.setSourceEntity(93U);
    msg.setDestination(12598U);
    msg.setDestinationEntity(40U);
    msg.timeout = 53391U;
    msg.lat = 0.07281225186567186;
    msg.lon = 0.7735532694298521;
    msg.z = 0.009916447608097734;
    msg.z_units = 186U;
    msg.speed = 0.21487875169809434;
    msg.speed_units = 74U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0995357081251339;
    tmp_msg_0.y = 0.22073114384399783;
    tmp_msg_0.z = 0.16968934915419065;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LCNCAVVOKUFDSHWXJFLVHYWQFQOTHKAUVSAOKRELUSUHMDRTHSDIGLBZHYXVNXBYMRHCJMGNYPTFTLFTVGIRCWPXSZVVXZXOSE");

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
    msg.setTimeStamp(0.258786049127501);
    msg.setSource(34985U);
    msg.setSourceEntity(153U);
    msg.setDestination(47908U);
    msg.setDestinationEntity(157U);
    msg.x = 0.26152076573506755;
    msg.y = 0.2904183733549458;
    msg.z = 0.7006650958930057;

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
    msg.setTimeStamp(0.3317862298124409);
    msg.setSource(15971U);
    msg.setSourceEntity(217U);
    msg.setDestination(64172U);
    msg.setDestinationEntity(163U);
    msg.x = 0.6717730935938124;
    msg.y = 0.41706416401337876;
    msg.z = 0.309044620914812;

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
    msg.setTimeStamp(0.39100330960492324);
    msg.setSource(17828U);
    msg.setSourceEntity(252U);
    msg.setDestination(19754U);
    msg.setDestinationEntity(23U);
    msg.x = 0.39736414018677224;
    msg.y = 0.5474081547528813;
    msg.z = 0.8229736166822818;

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
    msg.setTimeStamp(0.8908268144838554);
    msg.setSource(27251U);
    msg.setSourceEntity(145U);
    msg.setDestination(63484U);
    msg.setDestinationEntity(182U);
    msg.timeout = 63514U;
    msg.lat = 0.5537712246613512;
    msg.lon = 0.760269828979201;
    msg.z = 0.9902057374270401;
    msg.z_units = 228U;
    msg.amplitude = 0.4299803516329044;
    msg.pitch = 0.2726007671995353;
    msg.speed = 0.3018686691731508;
    msg.speed_units = 195U;
    msg.custom.assign("HIMASLHGMWGUCNNDHTTHGTLKIVVOTEFWXKODEHQPALRJKKZVEFHWIMFSKUQAQCNYQSSKUIXGYFTAQNBHCYZZIVOLJOCTDEEVPTCZXTYRZUWXGPDLBORKRPOJPDBIUBSUNWMFCDOSRJBAANFBIGDIYNHRCQXQAHWARGUMEBDBYXBIKJMMYXSOSPOJDBAWSPTCHLNCMYZWGETUIJQREJKWXLVGWCSYFPVPJNL");

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
    msg.setTimeStamp(0.9347352274369977);
    msg.setSource(16896U);
    msg.setSourceEntity(83U);
    msg.setDestination(25109U);
    msg.setDestinationEntity(29U);
    msg.timeout = 42840U;
    msg.lat = 0.6812470583962107;
    msg.lon = 0.0813579077897505;
    msg.z = 0.47802029075221597;
    msg.z_units = 105U;
    msg.amplitude = 0.4796006868922208;
    msg.pitch = 0.5553041761986529;
    msg.speed = 0.4125411026543473;
    msg.speed_units = 38U;
    msg.custom.assign("NFRYNAMUHEEKGPWIVPFXFACMQHCOTBQJQLRTSDOEUJGKZW");

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
    msg.setTimeStamp(0.41232723411265393);
    msg.setSource(65163U);
    msg.setSourceEntity(164U);
    msg.setDestination(27542U);
    msg.setDestinationEntity(101U);
    msg.timeout = 41129U;
    msg.lat = 0.6499317460709582;
    msg.lon = 0.05486126311293904;
    msg.z = 0.5308435646131466;
    msg.z_units = 19U;
    msg.amplitude = 0.7559815116031486;
    msg.pitch = 0.5425542690080625;
    msg.speed = 0.3764453798474001;
    msg.speed_units = 231U;
    msg.custom.assign("FBFAHSKANSOXTJDHKLGJCBOUREYDDWWFMMTBYIHCRQTZNZSKIMXKWVPJGXBIZRKDRJEPVLZFGKRZWITLYEACWAALEDFHQBVDAOODYGLXTUPPZYROXVLOCMVNAGSUVOFIVSWCRHY");

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
    msg.setTimeStamp(0.5523337493470266);
    msg.setSource(11271U);
    msg.setSourceEntity(143U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.41671301104642045);
    msg.setSource(26294U);
    msg.setSourceEntity(48U);
    msg.setDestination(28137U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.05534017634190591);
    msg.setSource(52357U);
    msg.setSourceEntity(19U);
    msg.setDestination(28616U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.44659372636561145);
    msg.setSource(29755U);
    msg.setSourceEntity(120U);
    msg.setDestination(11492U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.7462566374614551;
    msg.lon = 0.7806607608283466;
    msg.z = 0.186633721435989;
    msg.z_units = 99U;
    msg.radius = 0.8275872763530795;
    msg.duration = 42125U;
    msg.speed = 0.7174721947220309;
    msg.speed_units = 148U;
    msg.custom.assign("AFOVCVWIBJHPOVBWBUFSWWQBWHJJZEYANZDKTNEQDDZEXCFEMGIGSHVLQDCMDLHYPBMTUIMLNOXMAOSJQKEQSAGGYURARTXBIKOYOCAYPGCJFZXBHUEZIEUKDLRDYNRCZDFVAIQIWSCEYLKRJKZMZHINCBPGSVBOWTPPSRKZOCPFQLXMNLHXBHEHDJMPHNOZKRTIUKFNXYREAWGRXSTUMIVWSQORUTCXGLNYTSNPVFAFPJL");

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
    msg.setTimeStamp(0.9419131329443811);
    msg.setSource(6944U);
    msg.setSourceEntity(7U);
    msg.setDestination(29357U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.9939644218139899;
    msg.lon = 0.07856370095434595;
    msg.z = 0.6225479012621103;
    msg.z_units = 232U;
    msg.radius = 0.7258195270985787;
    msg.duration = 15103U;
    msg.speed = 0.734676505882763;
    msg.speed_units = 171U;
    msg.custom.assign("LTFYHFWIBBKDKSWTIVAZLEGYNZBKDUKMNGROQDUWQYNESHFFXGUSCSEGLJZDOCUJVDCGICVAWVOMZLHQXMWOPAKGAPCPQATRAHWEGRGBOWIHETIHNSVOMJICQVNBRVUKXBRBAKPOMWUMEZNIUNRYEKPSJFEDOXVJJKMNGEYPDNIWLYINVPPRZBLZJDFHXXPACJTTWGUDUHQK");

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
    msg.setTimeStamp(0.05766166208346646);
    msg.setSource(6727U);
    msg.setSourceEntity(179U);
    msg.setDestination(61580U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.4690519462357018;
    msg.lon = 0.44008723038593933;
    msg.z = 0.4036771466889121;
    msg.z_units = 48U;
    msg.radius = 0.4227178359269954;
    msg.duration = 39837U;
    msg.speed = 0.46476592530112115;
    msg.speed_units = 213U;
    msg.custom.assign("LAXWSEJAOPCFYSRIUZAMWPAUGNROVONQKKGLWYTRECXLXWFRQOSTXCZBHESDUCKPLAOHSYWGXMXIDJCFVNEBUEJIUZSDPHFMNNAYHRVOUQIWZADCUDMLBGM");

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
    msg.setTimeStamp(0.6714799199968277);
    msg.setSource(25661U);
    msg.setSourceEntity(198U);
    msg.setDestination(26045U);
    msg.setDestinationEntity(192U);
    msg.timeout = 17401U;
    msg.flags = 151U;
    msg.lat = 0.6982974747143055;
    msg.lon = 0.2985317136062078;
    msg.start_z = 0.5731731240150798;
    msg.start_z_units = 178U;
    msg.end_z = 0.24822579944911805;
    msg.end_z_units = 125U;
    msg.radius = 0.8654300094544183;
    msg.speed = 0.10550191999680958;
    msg.speed_units = 46U;
    msg.custom.assign("FJJWVMQHUIOJEBGXFQZNGFWYJUPFQGEKQGSAFYOXHHXVTJVIMENAELEPOWICXSMVHOFNRHQZQLYRZGBBPFDLYNJDWAKUDTQWVRTBDRXGYCMRRTWOVNXTKRMXLSSHKJIRWJGUANDFLOCZKJUINDAYDYKZHNICBSMVHZRUHOIMPPMKSMKWSSBBYPZLDPGRULEKVUDHFNVVCCOLAXXCEXCTUAOZTWQCASFTJEEIPBZYNAIOEITBYQCQLGBKUZ");

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
    msg.setTimeStamp(0.7977671699858173);
    msg.setSource(38440U);
    msg.setSourceEntity(192U);
    msg.setDestination(62599U);
    msg.setDestinationEntity(130U);
    msg.timeout = 19809U;
    msg.flags = 87U;
    msg.lat = 0.5788443006309879;
    msg.lon = 0.31529500618616646;
    msg.start_z = 0.2529515094053365;
    msg.start_z_units = 91U;
    msg.end_z = 0.32022446551162764;
    msg.end_z_units = 135U;
    msg.radius = 0.7307136316395516;
    msg.speed = 0.5787778732187381;
    msg.speed_units = 187U;
    msg.custom.assign("GIKSSZSBZGBQSKBKNPBPWEYCCFKUOLNZHZQIBLJRYQMMBPDUXYMNFECJYGPCJCVJAGSODMXIZLTCWVDAMIFHWTWNWRUTOPRTGOXLBXWOIQRKUXJQRFOVJKSSTZUTYVWYVXATBEUMACOXHBJHHYVXPQZURPAMQNNZKIDDEDEOIDHADSLGGZRUNLMQRSKTGTAWQQKFLEEHJEXVAULVADWJFRPIPKVXOYEZGFPSWLBAFTNRYGLUDHCN");

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
    msg.setTimeStamp(0.3729828800741777);
    msg.setSource(8235U);
    msg.setSourceEntity(74U);
    msg.setDestination(34098U);
    msg.setDestinationEntity(57U);
    msg.timeout = 53279U;
    msg.flags = 248U;
    msg.lat = 0.8624328592744703;
    msg.lon = 0.5477944256221906;
    msg.start_z = 0.4276096130874215;
    msg.start_z_units = 17U;
    msg.end_z = 0.5378505415557551;
    msg.end_z_units = 149U;
    msg.radius = 0.5132262306457269;
    msg.speed = 0.14528152303339426;
    msg.speed_units = 226U;
    msg.custom.assign("ISMRNFMDOSUPAYLOIERWSSNVLQRZXOAXKUPGODAQCFCKEYKTTLGJAGFMDKMPPNDOHHJFLLMJOTWDWNTBZBXICHTRHFGVWABIFMFBZDPCIFKXRGQAYYWECGBXYLBNPRUEXUAKM");

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
    msg.setTimeStamp(0.4077435739667453);
    msg.setSource(24242U);
    msg.setSourceEntity(87U);
    msg.setDestination(9933U);
    msg.setDestinationEntity(141U);
    msg.timeout = 56101U;
    msg.lat = 0.643819857527792;
    msg.lon = 0.13260776309593347;
    msg.z = 0.3339805264773682;
    msg.z_units = 125U;
    msg.speed = 0.09451754967712944;
    msg.speed_units = 45U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.48013605353479116;
    tmp_msg_0.y = 0.49845613898682595;
    tmp_msg_0.z = 0.5125163033704825;
    tmp_msg_0.t = 0.8477083048428027;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JSUGSCZRAOVMFYVKDQWBZYRQJPJGINEERRIBHLXJK");

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
    msg.setTimeStamp(0.2749733327641096);
    msg.setSource(22451U);
    msg.setSourceEntity(200U);
    msg.setDestination(60312U);
    msg.setDestinationEntity(254U);
    msg.timeout = 9959U;
    msg.lat = 0.8548822870899839;
    msg.lon = 0.904666613861024;
    msg.z = 0.15710900774026948;
    msg.z_units = 52U;
    msg.speed = 0.8388826273754773;
    msg.speed_units = 155U;
    msg.custom.assign("IIJQMXMEGZLFJFTHWSZKXALOFUBLHXYHPCQWOKUZCFRHHKJYXWJBBDAYABNERXBURMZGTLKOQVWCSHHOODOXVEPVTYKNAUOBRIHLKFZXYTQVAESNDPBCNRNIZMTOGWSC");

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
    msg.setTimeStamp(0.6690116527030231);
    msg.setSource(44266U);
    msg.setSourceEntity(18U);
    msg.setDestination(49516U);
    msg.setDestinationEntity(147U);
    msg.timeout = 63078U;
    msg.lat = 0.5468142332556373;
    msg.lon = 0.9149542429773664;
    msg.z = 0.7520667829560089;
    msg.z_units = 43U;
    msg.speed = 0.7136424909714895;
    msg.speed_units = 186U;
    msg.custom.assign("RVTFPQOPJVMDQCHDZROTTXLTJCCYEJSXGWBNRVWXEIUMULSNKMVIMJXGWFSMHOKPEDPPZOANFOYIJGSWKSSNQQECEDR");

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
    msg.setTimeStamp(0.09074283172068587);
    msg.setSource(18128U);
    msg.setSourceEntity(176U);
    msg.setDestination(365U);
    msg.setDestinationEntity(145U);
    msg.x = 0.7585427324136224;
    msg.y = 0.8199410267124263;
    msg.z = 0.7001435890251211;
    msg.t = 0.28159135176277017;

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
    msg.setTimeStamp(0.8526354794547859);
    msg.setSource(34903U);
    msg.setSourceEntity(148U);
    msg.setDestination(48609U);
    msg.setDestinationEntity(86U);
    msg.x = 0.3796150598280378;
    msg.y = 0.8591877436457044;
    msg.z = 0.6390361420490414;
    msg.t = 0.8914858056033502;

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
    msg.setTimeStamp(0.3396868429925729);
    msg.setSource(43270U);
    msg.setSourceEntity(13U);
    msg.setDestination(13207U);
    msg.setDestinationEntity(162U);
    msg.x = 0.790992798255617;
    msg.y = 0.6894985439640848;
    msg.z = 0.20857539846890172;
    msg.t = 0.0447048522737199;

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
    msg.setTimeStamp(0.4959250544419813);
    msg.setSource(28706U);
    msg.setSourceEntity(216U);
    msg.setDestination(44271U);
    msg.setDestinationEntity(102U);
    msg.timeout = 2504U;
    msg.name.assign("YPFRWDWEVWQTEMOTOBUEJZJBRRWMABSODFZAMGWRUJVYMHZPPISZKQXLPUKHIQKSHHSYAVBVQHYRHLAUPJMEKOLRCRSVIKFOFDNTSLGTCTZFXCEJTMTPDEGUTBYCFNDNMFJNPUGYRFIFVXHXLIQMKCGUNHAIYCXYBBSZIWVGKNZLB");
    msg.custom.assign("GTMJVOOQFIKCHVPJFRJEYJUNGLOZHWEVUAAPWMXRGMWOAYFXZVDHVHGXCYJTZQGLSTCEWZNQDGCBSFBXXQTELTB");

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
    msg.setTimeStamp(0.047616944783938964);
    msg.setSource(30366U);
    msg.setSourceEntity(171U);
    msg.setDestination(30098U);
    msg.setDestinationEntity(163U);
    msg.timeout = 26904U;
    msg.name.assign("YLBMMTGICEOGNUSWGHVFUVBHMHANQRTNVPHFINHKNAPIIKSCGDQHCZXVWDGQXAWMUZMM");
    msg.custom.assign("XNMZLQYYEVMCDPLO");

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
    msg.setTimeStamp(0.5938533724549001);
    msg.setSource(24159U);
    msg.setSourceEntity(45U);
    msg.setDestination(17737U);
    msg.setDestinationEntity(54U);
    msg.timeout = 50968U;
    msg.name.assign("XFTLZEZTEMOCTQPYFCBURSJPKXGWEDQCVRGABYNYDREMIJSJIFLVQBNHLZFTKIWINGWUWFSQDGHACYSCLINVDXZBDAPOSWLCXCJIULVG");
    msg.custom.assign("ULAIYVXRPVIQRIBKXZXPSFT");

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
    msg.setTimeStamp(0.5904538376297479);
    msg.setSource(30317U);
    msg.setSourceEntity(125U);
    msg.setDestination(19824U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.14672016599097681;
    msg.lon = 0.6760393560033592;
    msg.z = 0.8103569490596498;
    msg.z_units = 191U;
    msg.speed = 0.41371141493919983;
    msg.speed_units = 55U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.05318600424988873;
    tmp_msg_0.y = 0.34677053156660953;
    tmp_msg_0.z = 0.580660635892319;
    tmp_msg_0.t = 0.021791874081900753;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5012000192702775;
    msg.custom.assign("LTCMXLUVPJKQFPRIIAEAWFMHZMNRFHSDZJJCMLKURJPSGIHBEPTYOMBONVZTLVTPOC");

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
    msg.setTimeStamp(0.07075890165659438);
    msg.setSource(34520U);
    msg.setSourceEntity(141U);
    msg.setDestination(40784U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.753883546749194;
    msg.lon = 0.8117829231399525;
    msg.z = 0.01887631577127713;
    msg.z_units = 85U;
    msg.speed = 0.046119102854757066;
    msg.speed_units = 21U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14610U;
    tmp_msg_0.off_x = 0.13953813050474773;
    tmp_msg_0.off_y = 0.46225889174518875;
    tmp_msg_0.off_z = 0.194831249792903;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9612449692429856;
    msg.custom.assign("LTLQCQMGREHHUALIZRXGPOJZLPGMPOFVNNOKTKWZLEWKCQWKAWCYTYQNUJYPCVIRPEVBTHISOLFTGMGVXIKXMFTMFXNQSPYGNSIAUEDEZOSBBSBNFDEBIDYJBVZQXXLHCYKFWCINHVURPCQJTPPAAA");

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
    msg.setTimeStamp(0.6912503259193451);
    msg.setSource(25246U);
    msg.setSourceEntity(85U);
    msg.setDestination(32466U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.23456435185676827;
    msg.lon = 0.4312844354866703;
    msg.z = 0.9933111222561369;
    msg.z_units = 253U;
    msg.speed = 0.8472394992142266;
    msg.speed_units = 128U;
    msg.start_time = 0.12889909049957027;
    msg.custom.assign("FMVAVDWCCUUSIYJNJPBLCKIRHLWADRWXSPYUKEZDKFUBPRKYQWXNLSBGJQMQQGEWXZCFJZEYLLAHTHTKQHXWHFRSRMTICIWGPEEAZBHXUKXEJSNVGOZOAWQPNFSTHEVLAKZ");

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
    msg.setTimeStamp(0.33504091283544446);
    msg.setSource(17821U);
    msg.setSourceEntity(158U);
    msg.setDestination(15650U);
    msg.setDestinationEntity(159U);
    msg.vid = 65045U;
    msg.off_x = 0.7709519534765541;
    msg.off_y = 0.5711949219565005;
    msg.off_z = 0.31389689019525224;

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
    msg.setTimeStamp(0.11497370793336303);
    msg.setSource(62603U);
    msg.setSourceEntity(45U);
    msg.setDestination(37831U);
    msg.setDestinationEntity(6U);
    msg.vid = 16009U;
    msg.off_x = 0.5845062107415021;
    msg.off_y = 0.8989116994474368;
    msg.off_z = 0.6191233684408862;

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
    msg.setTimeStamp(0.27788737462020163);
    msg.setSource(25426U);
    msg.setSourceEntity(55U);
    msg.setDestination(42586U);
    msg.setDestinationEntity(161U);
    msg.vid = 39866U;
    msg.off_x = 0.07122995581305647;
    msg.off_y = 0.5511760426097806;
    msg.off_z = 0.2745987331617308;

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
    msg.setTimeStamp(0.18515981511434487);
    msg.setSource(41671U);
    msg.setSourceEntity(71U);
    msg.setDestination(8961U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.5796697213207949);
    msg.setSource(4271U);
    msg.setSourceEntity(154U);
    msg.setDestination(57494U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.13998129803716008);
    msg.setSource(5052U);
    msg.setSourceEntity(230U);
    msg.setDestination(14584U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.21392294095535558);
    msg.setSource(14409U);
    msg.setSourceEntity(104U);
    msg.setDestination(47570U);
    msg.setDestinationEntity(121U);
    msg.mid = 46083U;

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
    msg.setTimeStamp(0.3243629002844405);
    msg.setSource(58564U);
    msg.setSourceEntity(53U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(242U);
    msg.mid = 55329U;

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
    msg.setTimeStamp(0.7114091836958759);
    msg.setSource(8306U);
    msg.setSourceEntity(179U);
    msg.setDestination(3227U);
    msg.setDestinationEntity(83U);
    msg.mid = 15111U;

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
    msg.setTimeStamp(0.43775034131266943);
    msg.setSource(1487U);
    msg.setSourceEntity(142U);
    msg.setDestination(4303U);
    msg.setDestinationEntity(36U);
    msg.state = 87U;
    msg.eta = 14420U;
    msg.info.assign("QFLJOGMFPWRODZQZHETPZMUKDCV");

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
    msg.setTimeStamp(0.49484688647275976);
    msg.setSource(61072U);
    msg.setSourceEntity(13U);
    msg.setDestination(40252U);
    msg.setDestinationEntity(90U);
    msg.state = 77U;
    msg.eta = 34884U;
    msg.info.assign("ACXNBZPFBQNIDVXYEAVLXNYQTJBBNMXPPRTC");

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
    msg.setTimeStamp(0.0916490655065838);
    msg.setSource(1837U);
    msg.setSourceEntity(182U);
    msg.setDestination(58659U);
    msg.setDestinationEntity(62U);
    msg.state = 27U;
    msg.eta = 45759U;
    msg.info.assign("XRVHODKWYKVAKHONCJRLEQZGWTRNIZLXJGLANWDOJXSMECMBGZCHTBTOIRPPUTIXWJMZMXSSVCVANOVNCWQEIMSFZABFVQTZBANUBUBYBMTKHFRYEZUENCFJYPADSKAIGFHVYZTLXQAGQTUUWDYUHTCLPKEDAQAPMJDNISBCIIRFSXWHDUSHJHM");

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
    msg.setTimeStamp(0.5670869112119999);
    msg.setSource(18112U);
    msg.setSourceEntity(185U);
    msg.setDestination(50969U);
    msg.setDestinationEntity(83U);
    msg.system = 46177U;
    msg.duration = 41184U;
    msg.speed = 0.17531092932561776;
    msg.speed_units = 71U;
    msg.x = 0.5159335493924311;
    msg.y = 0.7579821603672166;
    msg.z = 0.4363652392729921;
    msg.z_units = 151U;

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
    msg.setTimeStamp(0.6592388849632063);
    msg.setSource(28429U);
    msg.setSourceEntity(180U);
    msg.setDestination(61003U);
    msg.setDestinationEntity(17U);
    msg.system = 57355U;
    msg.duration = 48801U;
    msg.speed = 0.4650573704773001;
    msg.speed_units = 212U;
    msg.x = 0.3485121109322631;
    msg.y = 0.2561270976097576;
    msg.z = 0.3262217350423581;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.5014688901867465);
    msg.setSource(34235U);
    msg.setSourceEntity(59U);
    msg.setDestination(59099U);
    msg.setDestinationEntity(237U);
    msg.system = 8816U;
    msg.duration = 45675U;
    msg.speed = 0.513147976966918;
    msg.speed_units = 161U;
    msg.x = 0.19270969882640665;
    msg.y = 0.14672452567804206;
    msg.z = 0.888009596344587;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.2453261733260409);
    msg.setSource(19625U);
    msg.setSourceEntity(2U);
    msg.setDestination(32968U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.4226744968962315;
    msg.lon = 0.9789775231119962;
    msg.speed = 0.5670469808690589;
    msg.speed_units = 152U;
    msg.duration = 48022U;
    msg.sys_a = 34397U;
    msg.sys_b = 7168U;
    msg.move_threshold = 0.7130551889350303;

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
    msg.setTimeStamp(0.5018541025907125);
    msg.setSource(6565U);
    msg.setSourceEntity(20U);
    msg.setDestination(38253U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.28544697482303694;
    msg.lon = 0.44887898966890316;
    msg.speed = 0.42539297358732064;
    msg.speed_units = 10U;
    msg.duration = 4960U;
    msg.sys_a = 155U;
    msg.sys_b = 54285U;
    msg.move_threshold = 0.9934716593291527;

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
    msg.setTimeStamp(0.9509645921300157);
    msg.setSource(13841U);
    msg.setSourceEntity(240U);
    msg.setDestination(44916U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.3363598335553887;
    msg.lon = 0.6509249101372038;
    msg.speed = 0.30454597350396984;
    msg.speed_units = 173U;
    msg.duration = 64383U;
    msg.sys_a = 18017U;
    msg.sys_b = 40983U;
    msg.move_threshold = 0.06409132110850568;

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
    msg.setTimeStamp(0.406706559712136);
    msg.setSource(33589U);
    msg.setSourceEntity(57U);
    msg.setDestination(19703U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.834605307534828;
    msg.lon = 0.9189868101829719;
    msg.z = 0.6832874157406706;
    msg.z_units = 15U;
    msg.speed = 0.5220253350862076;
    msg.speed_units = 73U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.005200456089116567;
    tmp_msg_0.lon = 0.7183022626812239;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KWXIFZGJMHCPPSKUEOCVOESKYWSGRA");

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
    msg.setTimeStamp(0.42462338807421585);
    msg.setSource(47998U);
    msg.setSourceEntity(142U);
    msg.setDestination(17046U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.27389775553656925;
    msg.lon = 0.512511026347964;
    msg.z = 0.6165492175443905;
    msg.z_units = 86U;
    msg.speed = 0.4865506971590262;
    msg.speed_units = 20U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8308820921368543;
    tmp_msg_0.lon = 0.9235938448209389;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KZADGGQCPUSZHPORSFKVKQBYSAEXCVQTDOEHHTRRRRVJDBSJKQMOTLFOJXILNANNCXHFZDNKSULMDYAULGIHQATWXLPBWIONCRSMKZWHDLKXJTNDYDVFDEVUEKFIPYUWZLQBOHPAXUJYEMEWGWRQGACNXWPZDILGSFQFZLIEXUVXVKXWCAIJPGTIITKHEJSTZBOVCTFZJNYHMNMFMUSOCNY");

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
    msg.setTimeStamp(0.854426085096087);
    msg.setSource(18496U);
    msg.setSourceEntity(154U);
    msg.setDestination(28422U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.4249574689255846;
    msg.lon = 0.8134600891197536;
    msg.z = 0.22883514227007862;
    msg.z_units = 138U;
    msg.speed = 0.6381119520864702;
    msg.speed_units = 135U;
    msg.custom.assign("NYZLJVQKKBPQIMEQYDLRUPAOGOPWXZXMVUZMHTKOUSSMHLEPTIWUYXYBGGXCKXCTYIKSQQIOHBYDZKLKNYWSARRSHXYXRTRFQNVBTELCBTVLECFFSCWTTDZHMSYFPKNJURGJGDWH");

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
    msg.setTimeStamp(0.6116188556029667);
    msg.setSource(41503U);
    msg.setSourceEntity(58U);
    msg.setDestination(46155U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.8782015124872944;
    msg.lon = 0.11174163806813908;

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
    msg.setTimeStamp(0.6467446214184108);
    msg.setSource(30151U);
    msg.setSourceEntity(135U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.9899128735666123;
    msg.lon = 0.3295829139229782;

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
    msg.setTimeStamp(0.4019068438005192);
    msg.setSource(2200U);
    msg.setSourceEntity(86U);
    msg.setDestination(37412U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.8953155894551249;
    msg.lon = 0.8571094686559978;

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
    msg.setTimeStamp(0.37477751568386064);
    msg.setSource(62556U);
    msg.setSourceEntity(126U);
    msg.setDestination(10474U);
    msg.setDestinationEntity(74U);
    msg.timeout = 29717U;
    msg.lat = 0.029812899731627707;
    msg.lon = 0.6777315101902568;
    msg.z = 0.15061766099540674;
    msg.z_units = 69U;
    msg.pitch = 0.03422956437597924;
    msg.amplitude = 0.9462925527094832;
    msg.duration = 64130U;
    msg.speed = 0.8862339610407705;
    msg.speed_units = 99U;
    msg.radius = 0.3175864366586024;
    msg.direction = 203U;
    msg.custom.assign("LFTAHKEIMBTDORIYPKYGAIIBPVQNTMYHCRLALWGEQJTZFPLFPRDWVSEJDEZSYPOWFJUVRNJPZGYKVOAZJVLOSCFHLCWDPUMTCMQXBEWOYYZHOCOGG");

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
    msg.setTimeStamp(0.3429026490427114);
    msg.setSource(40460U);
    msg.setSourceEntity(9U);
    msg.setDestination(35828U);
    msg.setDestinationEntity(245U);
    msg.timeout = 14551U;
    msg.lat = 0.3627900379023701;
    msg.lon = 0.8845268393676115;
    msg.z = 0.06259404023429427;
    msg.z_units = 46U;
    msg.pitch = 0.8430405112180512;
    msg.amplitude = 0.18548849904468057;
    msg.duration = 61875U;
    msg.speed = 0.8141790513426833;
    msg.speed_units = 38U;
    msg.radius = 0.24503362035020393;
    msg.direction = 189U;
    msg.custom.assign("ENNBELMVHCVQHKBXCLOIYUJZHMHXLYNLFTJDIPCJFUBXTHQKGSWIQRZMMFDFUYEWYXDMYUZQCHWOCJGADKRVNAHKSPAZOUCESVAXLFPOIVDUPJHONBCPABXRZUBLKIQATQDSZNSRSWJKAQZGKJVYLIQRYAMZQGJSOYGOERZDT");

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
    msg.setTimeStamp(0.8135856044552962);
    msg.setSource(9858U);
    msg.setSourceEntity(72U);
    msg.setDestination(36413U);
    msg.setDestinationEntity(220U);
    msg.timeout = 48674U;
    msg.lat = 0.08279142673052298;
    msg.lon = 0.8690161660767444;
    msg.z = 0.7626393910821401;
    msg.z_units = 205U;
    msg.pitch = 0.151924331585245;
    msg.amplitude = 0.8801381120519762;
    msg.duration = 34626U;
    msg.speed = 0.3703028027861456;
    msg.speed_units = 251U;
    msg.radius = 0.227768802747214;
    msg.direction = 98U;
    msg.custom.assign("NSYVGJABGBKIGRARBXWECVTAHHWGYZZVRTDYUZIGLATUEJXJDJTHZXPMDOJCDCNIRLJHPVNGZPLNWWPGNCFSFVAGFBBSGLKPOXNXDFTQJ");

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
    msg.setTimeStamp(0.5017436095736244);
    msg.setSource(15805U);
    msg.setSourceEntity(217U);
    msg.setDestination(4193U);
    msg.setDestinationEntity(11U);
    msg.control_src = 54086U;
    msg.control_ent = 63U;
    msg.timeout = 0.5230028164422068;
    msg.loiter_radius = 0.6324885677492242;
    msg.altitude_interval = 0.2630117255636647;

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
    msg.setTimeStamp(0.05131996655751703);
    msg.setSource(54257U);
    msg.setSourceEntity(49U);
    msg.setDestination(54311U);
    msg.setDestinationEntity(102U);
    msg.control_src = 35603U;
    msg.control_ent = 198U;
    msg.timeout = 0.03925019525982265;
    msg.loiter_radius = 0.35834698899333894;
    msg.altitude_interval = 0.7713667659523094;

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
    msg.setTimeStamp(0.2541397733909728);
    msg.setSource(844U);
    msg.setSourceEntity(67U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(168U);
    msg.control_src = 23933U;
    msg.control_ent = 175U;
    msg.timeout = 0.8917274663257253;
    msg.loiter_radius = 0.8113281542889464;
    msg.altitude_interval = 0.7652126698866888;

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
    msg.setTimeStamp(0.5367647718786882);
    msg.setSource(17094U);
    msg.setSourceEntity(123U);
    msg.setDestination(22987U);
    msg.setDestinationEntity(87U);
    msg.flags = 15U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9356571623219444;
    tmp_msg_0.speed_units = 238U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.213126626802286;
    tmp_msg_1.z_units = 98U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2950998286821971;
    msg.lon = 0.05210760417226035;

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
    msg.setTimeStamp(0.5583478718529679);
    msg.setSource(45153U);
    msg.setSourceEntity(122U);
    msg.setDestination(47498U);
    msg.setDestinationEntity(85U);
    msg.flags = 156U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9854530710503356;
    tmp_msg_0.speed_units = 202U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.613911355208192;
    tmp_msg_1.z_units = 73U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.006303643527607816;
    msg.lon = 0.6441724048059513;

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
    msg.setTimeStamp(0.31793000333952903);
    msg.setSource(7669U);
    msg.setSourceEntity(151U);
    msg.setDestination(29961U);
    msg.setDestinationEntity(54U);
    msg.flags = 149U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5155175822996212;
    tmp_msg_0.speed_units = 147U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7064371131412319;
    tmp_msg_1.z_units = 73U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4773553768787906;
    msg.lon = 0.8640372461335665;

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
    msg.setTimeStamp(0.027423294211118887);
    msg.setSource(63217U);
    msg.setSourceEntity(74U);
    msg.setDestination(40148U);
    msg.setDestinationEntity(234U);
    msg.control_src = 27073U;
    msg.control_ent = 50U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8862026166987027;
    tmp_tmp_msg_0_0.speed_units = 222U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.031006057269857057;
    tmp_tmp_msg_0_1.z_units = 138U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5204993477581021;
    tmp_msg_0.lon = 0.4532733655884674;
    msg.reference.set(tmp_msg_0);
    msg.state = 76U;
    msg.proximity = 22U;

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
    msg.setTimeStamp(0.254340520779171);
    msg.setSource(26215U);
    msg.setSourceEntity(154U);
    msg.setDestination(23270U);
    msg.setDestinationEntity(57U);
    msg.control_src = 28328U;
    msg.control_ent = 147U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 128U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6280091862672916;
    tmp_tmp_msg_0_0.speed_units = 100U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.448401801807466;
    tmp_tmp_msg_0_1.z_units = 229U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6727974925534852;
    tmp_msg_0.lon = 0.6250433196999375;
    msg.reference.set(tmp_msg_0);
    msg.state = 49U;
    msg.proximity = 46U;

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
    msg.setTimeStamp(0.6978935936317413);
    msg.setSource(1921U);
    msg.setSourceEntity(228U);
    msg.setDestination(42043U);
    msg.setDestinationEntity(176U);
    msg.control_src = 30599U;
    msg.control_ent = 4U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 196U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6431597946675276;
    tmp_tmp_msg_0_0.speed_units = 168U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12135750740870976;
    tmp_tmp_msg_0_1.z_units = 214U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.10034673132078664;
    tmp_msg_0.lon = 0.6805448875510256;
    msg.reference.set(tmp_msg_0);
    msg.state = 2U;
    msg.proximity = 136U;

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
    msg.setTimeStamp(0.2855570651947068);
    msg.setSource(10598U);
    msg.setSourceEntity(60U);
    msg.setDestination(3688U);
    msg.setDestinationEntity(224U);
    msg.op_mode = 63U;
    msg.error_count = 13U;
    msg.error_ents.assign("YUOJAGQPGDSJLMARXJTZHMSRCQXJLNXAPDVHXSQGIBWKVPACKBJKZEOXQOYJBELNYYLTBQKYKLEDCQTDWOUCQDEVNGPYUSUTRNFBLOFIBUGHBYAHDCISERSRYIPRPGSGOIKCETZGLZVWTRNHJJMUMDF");
    msg.maneuver_type = 12425U;
    msg.maneuver_stime = 0.456563931226286;
    msg.maneuver_eta = 36411U;
    msg.control_loops = 3440801804U;
    msg.flags = 242U;
    msg.last_error.assign("DKKGBMUWWICTALXFDDQNXMRRNLSYTAWFRXWKPXFCFOPQCWKVJCQUYTJGULXKPWQXTI");
    msg.last_error_time = 0.06336659538707301;

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
    msg.setTimeStamp(0.7158614862239118);
    msg.setSource(17685U);
    msg.setSourceEntity(1U);
    msg.setDestination(46872U);
    msg.setDestinationEntity(184U);
    msg.op_mode = 99U;
    msg.error_count = 192U;
    msg.error_ents.assign("MYAQPSCRWLHFJHYDYKUAGGLJJBWQBLVPAXIHVCNOTCWZSERXMIKWQKFUPRRDPBJUQLJYZBAZXANJXLXG");
    msg.maneuver_type = 8412U;
    msg.maneuver_stime = 0.26486721137561064;
    msg.maneuver_eta = 26867U;
    msg.control_loops = 2285912698U;
    msg.flags = 30U;
    msg.last_error.assign("OPKMWZFKLHJRHMWEYXQCBUERIGUPZBBFBURFRLHGAKJNQGKJNNLDGSQME");
    msg.last_error_time = 0.30770312930788546;

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
    msg.setTimeStamp(0.22945813716328756);
    msg.setSource(59955U);
    msg.setSourceEntity(184U);
    msg.setDestination(31004U);
    msg.setDestinationEntity(97U);
    msg.op_mode = 234U;
    msg.error_count = 145U;
    msg.error_ents.assign("XFRNKYGSSSQZIAKQSXANUGKGMFBEPFIMCOCXYOKLLNRWRHBCFNFOEEWQNUIBBPXBIDSRXLMHCUHKNKTDPZRPIHUAGJFHRZJUSVULMUADYGJAPMZVAGPIOYCSSYBEXCQZDBCKTKZLQWLVPW");
    msg.maneuver_type = 29303U;
    msg.maneuver_stime = 0.7606050568117674;
    msg.maneuver_eta = 50032U;
    msg.control_loops = 2570759422U;
    msg.flags = 82U;
    msg.last_error.assign("WMGWVEWQDRUPJBOUSTRPSADLIKTMHDCUOSZYLSFDIHLESGKHQHVQJNDMEHAAUZXIEFFETVRPLFLVARXSKCZBTVHG");
    msg.last_error_time = 0.3326788984344409;

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
    msg.setTimeStamp(0.7001640107652848);
    msg.setSource(28118U);
    msg.setSourceEntity(38U);
    msg.setDestination(32145U);
    msg.setDestinationEntity(148U);
    msg.type = 187U;
    msg.request_id = 55772U;
    msg.command = 181U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 39805U;
    tmp_msg_0.lat = 0.23657992860756205;
    tmp_msg_0.lon = 0.46903215135403287;
    tmp_msg_0.z = 0.1364099040781157;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.pitch = 0.991960953435755;
    tmp_msg_0.amplitude = 0.9486847496214742;
    tmp_msg_0.duration = 62120U;
    tmp_msg_0.speed = 0.6340717942980484;
    tmp_msg_0.speed_units = 235U;
    tmp_msg_0.radius = 0.804722191244801;
    tmp_msg_0.direction = 100U;
    tmp_msg_0.custom.assign("XHXXIYDKQFLSPHOOFJRAIALCWVGPJQZUJSLIEGPNZANHDGWKDPOHLVKUENVRFTRBDNTPXMHWQLOSYTEUYVJIMAASOVKMLMIXSZGBGWCRRMZBFKNYETILVZNQEUCBCPVLKQEQWTMXZJEDZVFQJYYXUCPBCIMRIBL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47111U;
    msg.info.assign("HJYUIAFMSSDZGQPBRVPAUYZQIXCOCHZKFKKEOWTJMPRRNWBHWEFUHAKNZHKXQNOWKLTDZSRJENVSIFRVVTLIFQELLYTMXXXSAQIKWAMKHHIEIGPUTROZDOFLFENZGAAVDURSNGUBZGVGSXYDJZDIYHOLJQRHYAGBNJYFXUDFCBJIAKZ");

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
    msg.setTimeStamp(0.35025842914649785);
    msg.setSource(13561U);
    msg.setSourceEntity(204U);
    msg.setDestination(19486U);
    msg.setDestinationEntity(248U);
    msg.type = 116U;
    msg.request_id = 23048U;
    msg.command = 49U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.34824334148719116;
    tmp_tmp_msg_0_0.speed_units = 134U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 59910U;
    tmp_msg_0.custom.assign("UPBMCSPZKPOKWSHELZLQNHJNKBPWODRKZFJLGIAVFVHOHRKXKCNFGGBXNFKAUBNDQYLRJTEMYVMOMZXIUAOQQGWBWAZWEPXIFDGLEWTHTUQLSVCQRLSXCRQJOUKWUZWZIOYIRQVTTZYBDCAVLOPDJBTNJBMSDKNGRGAADALHWHUYIJHYLVFUCYMCRETXVYIIPSBHBSMVIYSEQXTGUUSTRFAORPVEWJJNKIFXNOACHMFNTPFEDSXMECJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48295U;
    msg.info.assign("LJBMORBARZDUOEHYAQAUUNPZWHSIGRDHMNKRSPGQIAPGIRYPK");

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
    msg.setTimeStamp(0.42795870824310556);
    msg.setSource(62413U);
    msg.setSourceEntity(118U);
    msg.setDestination(34471U);
    msg.setDestinationEntity(221U);
    msg.type = 23U;
    msg.request_id = 16754U;
    msg.command = 75U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 63629U;
    tmp_msg_0.name.assign("CGARUIJYOKMIRMQFCVLKSQXUATBOSJMANOHSAONNLQMBOEVMLLNVPMXHSWYTEZZAHPCNZWPGOPUDDUCZUFTTSHRXDVEFVNWQKZQRTLTHTTDEAIGOFKXZBXIZXJRKIEHCPBDCRIYYWNXEDZBGRELCUVUSQRUDSHLKDYTPYYHNXNVUIYGQVFFDQPMCJOPFISGADEEXTFZSMGHAOWBQK");
    tmp_msg_0.custom.assign("LBZRUDVSFWNIEMSVTBERLBIMJVAWJUVMUBELTCYNHGXWSXAIKUMZADXRHDWBSGLDCKJMMFLXPWZNQHIAZGXTCIWPMVVCEGZALVLQIBPDHTTCOGZGPKOPDKUWUUEIOBOLTZPQYPHEAXXRPRFEJHRQRHIENFNSJAVVJQWJZIQQNYGOIZPUSNLUTDBKOFCFXGYMUTZCYSKXDKOCSJRQYCFEONOEQCWHRMHBN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6024U;
    msg.info.assign("XGLMCRIPQZEQBXBBTOQNRMATVLDDVUZTGBRFNEWBIEQPOASMWBYCPSZRUNRGWJZRGAEIFLMDXJKITSERNILOFPUVVRBMATUSMHXFZROQFHLDTXLYFWCUPYYDSPHNXUIQLKSHCPIOCEZWOVCLBWLUIDFAMWFJYFLGZPGCCNHUBO");

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
    msg.setTimeStamp(0.5379526665919555);
    msg.setSource(35617U);
    msg.setSourceEntity(84U);
    msg.setDestination(18207U);
    msg.setDestinationEntity(162U);
    msg.command = 108U;
    msg.entities.assign("APVIMYZITIFSEPUCAUDLKJBNKXFXTWKQGDBNEGMXZIXMVEBGCUJFRYJSVSIOFVGEQWOLWLXKYFLQIMMQLXWHQSRFHTWOYUBOZRZPOAASRDNTOHUOTSBDYOQCQXJCIFCTDUTDSMFVCYFKKIL");

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
    msg.setTimeStamp(0.9256825505803972);
    msg.setSource(39783U);
    msg.setSourceEntity(190U);
    msg.setDestination(4648U);
    msg.setDestinationEntity(99U);
    msg.command = 236U;
    msg.entities.assign("UTBLOCPEQZPZYWNLIVMWMKJLFALUXBZRQPMVFUAHGRSWCHBDOJCPKOFBUPWVKIMYHEWYICPJQEPAMKYEVZZCGQMZCVRJRHIYJNORWXGDSYDDDNSCMZTFLOKXGXRVJFTTAXATNJXLNWSVFFOYNOTUACFZNEHOZRKGGTOWABGLWBIJKETSASAVXPQCIQNXZMDSDJBYYBUFENCOXHILHARFRHVSUBPKREPHUNLGIJMKMTEDWVGQGBQXKQSDLHUID");

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
    msg.setTimeStamp(0.3354934011535089);
    msg.setSource(60399U);
    msg.setSourceEntity(219U);
    msg.setDestination(38827U);
    msg.setDestinationEntity(68U);
    msg.command = 227U;
    msg.entities.assign("NUFSRNRQNIJZYXSCGVRHTNXVHTZIKDHUKGFPATIIJAICAFGOSJWZOEKMZOVZBDRGSBMYPQOOXLJJEGTOWVLTSHDKMTYUCOLHQYZGSBNJHAEDNRBXNLWICIPPSQPXPCYNLCXPXFKDFQYRHLVHIOAKLQKEJFMWUXCKDOROAQEWJPGHNJLFUUWMYZBDBUFXAETEUEDYRMHZDSMVVQWDMFPB");

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
    msg.setTimeStamp(0.6312413282837663);
    msg.setSource(8388U);
    msg.setSourceEntity(147U);
    msg.setDestination(62040U);
    msg.setDestinationEntity(129U);
    msg.mcount = 168U;
    msg.mnames.assign("ZIXEMEJNMOPFIXZBHTIFSVKIDDJVAWHJTAJVYJTFKRCQVORWWCDKBOUHCMNURTDHESPAESGRHULQAWCNRZJRJXLGPACTQMPDIVYOTINKJEZBXHGEK");
    msg.ecount = 74U;
    msg.enames.assign("LZAKZTZKJTEKXZRZIDWNNZNXJPPGHTMNVZRYGOPEYTTGIJOFOYHLYMYNUKMVMOEQOVFPZLJKDHHGTFYIHPAOWBIEOWIGRUATAINCWJLBIBSRCXFYEXBBINQQPEZSBNXJECFVCDYPACOFGNRWRGCVKMWQQREMQJZUWDDUDVQQRXFAUVKKLAYWJLVJGMHJCMFDOUBNSXHEVDCKEIRLDGTHQGSFUSOTCVWAYUUKLH");
    msg.ccount = 237U;
    msg.cnames.assign("UDITMJAXWOOBTGNKZK");
    msg.last_error.assign("IQKLYNWCEAZFCVBGEWULPTXDTRUZKIHBPYVJXVXMHKRIDKNDUVNRCETBPOFNQENSZR");
    msg.last_error_time = 0.7281514840063914;

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
    msg.setTimeStamp(0.6498142720969587);
    msg.setSource(34670U);
    msg.setSourceEntity(50U);
    msg.setDestination(49832U);
    msg.setDestinationEntity(37U);
    msg.mcount = 37U;
    msg.mnames.assign("MDRSZFMEJQOWTMCDCXXVTDFSYFTHMQIKBEUZYGRUOIEDPP");
    msg.ecount = 65U;
    msg.enames.assign("PXOJKJPEHAOKNMWQIXWRVYFRUUECSIAXNJYILKNGAXQCQXPYJKCSEHFLHRJBEKBTJISOJRGZBXGRPADNJMLPFEGJMUGLQUIVAHWSMCYIHFDSFCQMFIXYBOTRZQHSIEWPYZDGZMLCBLZNZDGQUFQVXUVSRUCVTZWQBODEBATXUODKBIZVFGWJSCDYKTLTWTKNCFDSGRNMRXHLYSYWBHAOTKTNGHTIDMEPPUECRKLWM");
    msg.ccount = 105U;
    msg.cnames.assign("PECKCMZRUFBNSDUIYZNVLSOXBKJKWWGYWGYBTLRUNTFIQHGBCSERKNSRHRQGCAUPHXUXYIGHQZYALW");
    msg.last_error.assign("SGCCRKRVMKOPJONBMFPQBIADFMHPYAAOYTKNIFHZYGOEVPUCBOXXZNWEJGNVQQURLIJJHUCZDCFFHLNKSRZDKOIPXSNHJSYIHVBURUYTZGRQJASZ");
    msg.last_error_time = 0.8495744122900959;

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
    msg.setTimeStamp(0.685737611251314);
    msg.setSource(37027U);
    msg.setSourceEntity(61U);
    msg.setDestination(51836U);
    msg.setDestinationEntity(15U);
    msg.mcount = 36U;
    msg.mnames.assign("NQOBTZQKDKFUTVCIXAGEIADPTDMUUUUSDSEIOFJOLRNHFMANCHFXZLJLPADRZRSYGWJJJMAFDNHHNNGWEUSBTFBNWZOIYGAVJMKQWKXPVLPIVJFBZAIMPICAXDGRVGPHPBWWQATKFLGRQYDYRCKNXTHLIGXYWSVEBAZQWTSEDSWTCVKDCLKHLZEZYMSBN");
    msg.ecount = 151U;
    msg.enames.assign("YRTVJTBCFRUVRQZFKSPQITQZNEISOHHALZNZEDGMVITXAKYBTTBFGEPDSUDUTVG");
    msg.ccount = 133U;
    msg.cnames.assign("GBXBTPNXHYQDSEJTAITOJYODPFNYCPDVSCBUKLLSMGYUGBOTWWPMWGAFYZDPZKUDBOXWPIQXLFECYLTATAFASEFVZCQHLVMZUGIFPMIYKSLSEFZUSRDBJUEETJKJEYCTMXHZHXWXRQRFSAKOIURZKWWLKVOQJOLCGWULOEXOQCZVNCSPGHINDAHNMVJYMMRXWGRIO");
    msg.last_error.assign("YDOPXMKZUKVAMIHIFUAS");
    msg.last_error_time = 0.2997346347602562;

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
    msg.setTimeStamp(0.9267874617521563);
    msg.setSource(33699U);
    msg.setSourceEntity(132U);
    msg.setDestination(1282U);
    msg.setDestinationEntity(181U);
    msg.mask = 101U;
    msg.max_depth = 0.1720090864493672;
    msg.min_altitude = 0.011236510911479036;
    msg.max_altitude = 0.0172767694668432;
    msg.min_speed = 0.41253339638499;
    msg.max_speed = 0.01678484574077921;
    msg.max_vrate = 0.7044781529190655;
    msg.lat = 0.7629989528742852;
    msg.lon = 0.20707550977185418;
    msg.orientation = 0.5911115763960136;
    msg.width = 0.1861648688832369;
    msg.length = 0.7501018901098478;

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
    msg.setTimeStamp(0.4904438617609872);
    msg.setSource(9423U);
    msg.setSourceEntity(14U);
    msg.setDestination(8411U);
    msg.setDestinationEntity(102U);
    msg.mask = 98U;
    msg.max_depth = 0.8318187578542928;
    msg.min_altitude = 0.8184220936532632;
    msg.max_altitude = 0.07158851870174021;
    msg.min_speed = 0.7822272279158746;
    msg.max_speed = 0.5341169161153722;
    msg.max_vrate = 0.16555990508436336;
    msg.lat = 0.783821393174218;
    msg.lon = 0.6173913796021877;
    msg.orientation = 0.3868484073700821;
    msg.width = 0.3668176513986007;
    msg.length = 0.7351348904649772;

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
    msg.setTimeStamp(0.36410483836432905);
    msg.setSource(25573U);
    msg.setSourceEntity(207U);
    msg.setDestination(45487U);
    msg.setDestinationEntity(138U);
    msg.mask = 64U;
    msg.max_depth = 0.7987769597081066;
    msg.min_altitude = 0.7342389401919686;
    msg.max_altitude = 0.23417390099490532;
    msg.min_speed = 0.24536154771016283;
    msg.max_speed = 0.3054068146012934;
    msg.max_vrate = 0.8007209216917394;
    msg.lat = 0.07245123004485698;
    msg.lon = 0.8752638786281074;
    msg.orientation = 0.9064427859586709;
    msg.width = 0.5464133073327427;
    msg.length = 0.9503978088560694;

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
    msg.setTimeStamp(0.8032969222850534);
    msg.setSource(59100U);
    msg.setSourceEntity(139U);
    msg.setDestination(15401U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.19770530615592308);
    msg.setSource(16239U);
    msg.setSourceEntity(82U);
    msg.setDestination(58963U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.6836493946748199);
    msg.setSource(50648U);
    msg.setSourceEntity(59U);
    msg.setDestination(56461U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.3520916006387237);
    msg.setSource(61555U);
    msg.setSourceEntity(171U);
    msg.setDestination(12056U);
    msg.setDestinationEntity(31U);
    msg.duration = 43079U;

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
    msg.setTimeStamp(0.5586923091172238);
    msg.setSource(60694U);
    msg.setSourceEntity(194U);
    msg.setDestination(58889U);
    msg.setDestinationEntity(29U);
    msg.duration = 4748U;

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
    msg.setTimeStamp(0.5028227976510533);
    msg.setSource(10841U);
    msg.setSourceEntity(138U);
    msg.setDestination(39305U);
    msg.setDestinationEntity(103U);
    msg.duration = 23127U;

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
    msg.setTimeStamp(0.5301744888515797);
    msg.setSource(43579U);
    msg.setSourceEntity(63U);
    msg.setDestination(58740U);
    msg.setDestinationEntity(79U);
    msg.enable = 170U;
    msg.mask = 744488040U;
    msg.scope_ref = 0.6618850815662156;

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
    msg.setTimeStamp(0.11940206488476801);
    msg.setSource(21392U);
    msg.setSourceEntity(56U);
    msg.setDestination(9748U);
    msg.setDestinationEntity(246U);
    msg.enable = 210U;
    msg.mask = 4144441640U;
    msg.scope_ref = 0.286754749259847;

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
    msg.setTimeStamp(0.7352807326574998);
    msg.setSource(13798U);
    msg.setSourceEntity(97U);
    msg.setDestination(26820U);
    msg.setDestinationEntity(6U);
    msg.enable = 78U;
    msg.mask = 699164647U;
    msg.scope_ref = 0.3558032762883304;

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
    msg.setTimeStamp(0.34548369049873817);
    msg.setSource(8855U);
    msg.setSourceEntity(241U);
    msg.setDestination(7428U);
    msg.setDestinationEntity(91U);
    msg.medium = 84U;

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
    msg.setTimeStamp(0.43850593019465145);
    msg.setSource(9712U);
    msg.setSourceEntity(64U);
    msg.setDestination(35896U);
    msg.setDestinationEntity(85U);
    msg.medium = 94U;

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
    msg.setTimeStamp(0.07634048872487476);
    msg.setSource(49420U);
    msg.setSourceEntity(229U);
    msg.setDestination(1223U);
    msg.setDestinationEntity(218U);
    msg.medium = 49U;

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
    msg.setTimeStamp(0.7735171933302102);
    msg.setSource(43621U);
    msg.setSourceEntity(121U);
    msg.setDestination(63266U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6050913845637823;
    msg.type = 230U;

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
    msg.setTimeStamp(0.17850510185258284);
    msg.setSource(59826U);
    msg.setSourceEntity(70U);
    msg.setDestination(54855U);
    msg.setDestinationEntity(111U);
    msg.value = 0.6638131350410132;
    msg.type = 231U;

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
    msg.setTimeStamp(0.24702748240662487);
    msg.setSource(63457U);
    msg.setSourceEntity(157U);
    msg.setDestination(58906U);
    msg.setDestinationEntity(132U);
    msg.value = 0.899210521506095;
    msg.type = 202U;

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
    msg.setTimeStamp(0.8689416494087934);
    msg.setSource(62120U);
    msg.setSourceEntity(28U);
    msg.setDestination(15422U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.7284842549976113);
    msg.setSource(32319U);
    msg.setSourceEntity(63U);
    msg.setDestination(37703U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.05629165074950104);
    msg.setSource(7712U);
    msg.setSourceEntity(193U);
    msg.setDestination(57439U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.5825758385539448);
    msg.setSource(65368U);
    msg.setSourceEntity(87U);
    msg.setDestination(32648U);
    msg.setDestinationEntity(128U);
    msg.plan_id.assign("ZSKAUAKGRXOMEAFCRXNEWWQCKJGBSPNLU");
    msg.description.assign("DJFSBTWQQAIEUARQDLSIQQBNZVYGWYNKCTNHGFVQWZSZCMMWAFUHDEAHACIJELFXBYJPHRBYEMWFPWUYLJWIKIRLYGRCDGPAGVROWIZUOFKUVZXTXNDBNDMP");
    msg.vnamespace.assign("DVNFZAGZTHORTKSZVLSUJNFOINSOEMFVIWPXCANIPQBZGVWMRWVDPJGXMLNAWIJFVBUYUIMVXRHUFBMHLAJLXTXPCEYKFEDCYTZUMNYQORCKKTDKFDRYUBGSEDGSWZTYVREJELOGWGOWYQPBCIHTDDXGIJXQIQRNXCJXSQBCFQRAUKPYBBJEZNEFPMZSALCPKENIATBCTSLLMOUMFRSHHKO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HROJPWVBUSTLNKROLDGRFEMDVOFMTJNVRJZRXKMUIECXYKKEAOJCXHHUCJRFZMABCGQJUVLYZPWJLSXFWIXUVWLDCSNVVBIVBXMNLOTAVDLFOQKAZAYKJGQDETSMGTYODWQNGIRSUNFXYTAVHAWPITJFCENGGTWGQPZOBAYEZGMRLWFZPNHICSBAHCSISDEBCQZJFNPIQLOIXXPHSIWTSYZPQBTYRHE");
    tmp_msg_0.value.assign("RBGUYWFEXXSPYADTKVLFPIICEQEWODOBQUXNCRJREICGSPUXBJGSYTWVFDORRXLCACFFCMOEJZAIZEGZRVPLPKKKQGTTUGKJEIPFCTDCJQXBHNUMDWZQSKMNRPSH");
    tmp_msg_0.type = 194U;
    tmp_msg_0.access = 173U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IZGRWCCLDZSLIGNTUIYCVTOGBJBMSXNZKYTHAZEUWHRRJORDOKFQAMHYAGNWGAWIHBKWZEUESBBXOSFUTJCUZBDSHORSTOAUMRWEBFKKARGXFJRLAVFPYWQNFDZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LOFYFDABEIFMHGARAXJVMSVXBOTYWGPVTXJMPAOMXHSBVEWLPZYRDRDKOTEJHTVGCWBZPLQINKOWDOZHQYYRWNJIXXNONQLVECDUBYTPSXBGCYLSUPRTMCLMENIWFMIZHDZXMBQETGZFUSIURBFPLCCYEIISEZWMAUAEVVZAHQGFKSVQTHNBQQVXQJUWKGHBCDCLTDUAJDEJOKKRUYRPILIKSGFFAHGJNC");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 53466U;
    tmp_tmp_msg_1_0.name.assign("UIVFATWDGHAXOIEKPUDQCZOEKOSQQLICNJJLISTGLQEBGFZOCQAQXUOXNWJNIIYWEBYJRYMPECPGWFLBLTBAMUUYGSRKCKPAFWDJCXRYBTRQQOGPLYFVMOOWJRGSQVBZFSKTKKXAFODZDSAJNCLTHADBTBWHEMYPSGNKDUTPEUSIDHYBPGVVWHJLVDTZOGHUZWELCRFYIXHCRWSUJSMICUQRN");
    tmp_tmp_msg_1_0.custom.assign("OAMDWTMURLUAEMJFJCWALKHDLRNKIQCJUMPQRIWKWOXZZDBONKUINSCXJXWFNZFBHLISNPRYHPLDACGLBCFPNAEFYWQBROHGNLOCREPGMSBTSCTHTKBQQIAQYFXXIQYQZDUVFDCJHLFZSUPDVJVJHRFVSJXNEGPGEHNKZMJFGLNSXKSLYBDTAYWOMIMVZPDTETPUUWQURHUXCIIOEDGEZMWPYKOAZXASWGVVEKVVSJBQXA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::LblBeacon tmp_msg_2;
    tmp_msg_2.beacon.assign("QRILZMEOWOZMIMNSJKFBELOXZSHXTQNGCQXPGMHWTKEIKNCLMTIJYVZVJGBSYQPLCQCDLGRNGCIOUPEXZZBBNURWULPSTZYSDVTYAWULAHAKHDOQBWNOXUXSMPOMXVMDAYNAMJUFEFRHAXHKVRBQPTI");
    tmp_msg_2.lat = 0.29930655733953493;
    tmp_msg_2.lon = 0.3022016388153731;
    tmp_msg_2.depth = 0.7485137021311415;
    tmp_msg_2.query_channel = 164U;
    tmp_msg_2.reply_channel = 200U;
    tmp_msg_2.transponder_delay = 91U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::CameraZoom tmp_msg_3;
    tmp_msg_3.id = 117U;
    tmp_msg_3.zoom = 94U;
    tmp_msg_3.action = 233U;
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
    msg.setTimeStamp(0.6128843467346089);
    msg.setSource(54322U);
    msg.setSourceEntity(164U);
    msg.setDestination(24949U);
    msg.setDestinationEntity(232U);
    msg.plan_id.assign("RSZJFOQJRAWDBVAZNXCXCSVYGOLFLHGPNFKSBQHIKVFFGENIHJWCSMNFGDJUUPNBCPZARXGZIGTDUPAUQXKYTCAVRPJSEBHMLOZSACEOKSRNYXSQNPJDVHHVKUUZIXOQSBLFBHELMGFAGMHARKZLYZOXDVDSRGXENWITLTYDYJEVTIQMRQHWOYLQDPIYZTRWOCPRBIWGDVDTKPCUZWFLNI");
    msg.description.assign("QOPSWEXYMMPDUCDJGEJSNHSIBKXYLKFCCGVFOZJNKZOUXQOGUZTN");
    msg.vnamespace.assign("POSLONVIKUCKUMREDNATJZMPWSZKQZKRCXJYUWLFVTONUJAYMVSONNJJQMNLNVXKKAMHJHSEINFODHVXDFDRYSBDIIWTBXHKWGGTRDPBRCHIPFREPOCPXEOMCCYBVGILXUBRROPZJPTHJWNQBEZBWGLCTYRQYIKAIDULADLHSUMPGOFDIEFEWIOCMXXGGUYZJTDHGSGFYFLEMAZSHWYEZASESFQB");
    msg.start_man_id.assign("SRDNGXCMOQFJSPPRGUTPYLWLAXNUXVZMHRTXWUNJIXJFLHYACZSYVXDBCZAKPYTBSMPDCGRUIEQGDRNANAATQEQICPDNUEBTIMHYHQQKKSZSNFKULVCDKVSKSIQLPDCOTYJBLAYHMEWQFNFATLWZUVOOQRKJIMOAHJFKWEJWQNZCVLWELGZTBGKBLOFHOBBYFMESITRCEE");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.5800368301691496;
    tmp_msg_0.phi = 0.4229683410970261;
    tmp_msg_0.theta = 0.060647843289438286;
    tmp_msg_0.psi = 0.5859282652752342;
    tmp_msg_0.psi_magnetic = 0.6722765858673448;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::Depth tmp_msg_1;
    tmp_msg_1.value = 0.5816307957787648;
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
    msg.setTimeStamp(0.8747549960252838);
    msg.setSource(26842U);
    msg.setSourceEntity(33U);
    msg.setDestination(41909U);
    msg.setDestinationEntity(202U);
    msg.plan_id.assign("MPUKKSLPJOSNFXSEQGBKDVJRATSCKBFHFPM");
    msg.description.assign("RGCTIKFQAURDUHPNIQDINVA");
    msg.vnamespace.assign("PEXJNAWRRTSCQRDTURDPSHVJDEPTACYESXUDJLFTUYFJMYEJKKFKCLTZFNCOXMJIWVIHJUZMOWSEXBJPWQBRILISPQ");
    msg.start_man_id.assign("NATPIWUAIGQHNVBHLWJIFXUOGJIVZEFSKTQBHVZDFXSFHKSGYBEUQPPZTYXNANPELXZNRUSYEGCAWXFPSZFJORMTVYDOFQKBURXPJUMCGJWNAXLXMUHNTIDZOBSMEWAWPMVRMBAEVWJRIICGHRMAOUWWIZJ");

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
    msg.setTimeStamp(0.5945678255213411);
    msg.setSource(50730U);
    msg.setSourceEntity(195U);
    msg.setDestination(55453U);
    msg.setDestinationEntity(6U);
    msg.maneuver_id.assign("WYGQVRTVUVGBJSKOOEVYRWFSZTNAZOHUNCNYASDUBPKVGEPOLUKFWXANEHCPEACGMBOPZO");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 16372U;
    tmp_msg_0.custom.assign("TVGPXLKFOUYWRGFXDEXSOWOQPGEUWSRTYYHSMSNBYRHMQAVQOKIDCDZPMCFHUCWIHTFGRHVZYARZBDNDYSDHRQBUHBWUUPDQJJGDHMLEXNROGANOPKSGBSGANIUTCNPJANKTZOOIMOZBMSZIZDRWTKEWJEWXAEUECQKXXU");
    msg.data.set(tmp_msg_0);
    IMC::SmsTx tmp_msg_1;
    tmp_msg_1.seq = 170003535U;
    tmp_msg_1.destination.assign("TKQAIWYSBRBJPUDKWXDGTDVVGATOFRGEHZLKFWFMAURQOKRDKSXFUGOQADFWUJQQYCYMAPCVNDZMDZPUQWGTTVBXIUOLVNSZYLUSJMFHLCZEBJDXXIIKFOGGENNPJWCQHBXACZYTJGHTHNVMPPIOQCRALETXAWLOKVQZKXEIEBY");
    tmp_msg_1.timeout = 20170U;
    const char tmp_tmp_msg_1_0[] = {-26, -99, -35, -72, -22, -23, 126, -97, 10, -123, -7, -11, -58, 118, 10, 80, -80, 103, 43, 88, -98, 75, 3, -32, -29, 57, -19, -90, -45, 5, 101, -19, 3, 9, -87, -125, 111, 9, -35, -79, -15, -3, 8, 78, 94, 116, -6, 112, 115, -116, -64, 57, -19, 84, 50, 108, -43, 70, -1, 19, -118, 79, 19, 120, -38, -1, 122, -64, -60, -74, 17, -113, -94, 82, 36, 32, 111, -45, 71, -21, 39, -73, 83, 61, -83, 3, -113, -94, -23, 117, -61, 32, -88, 114, 100, -67, -67, 4, -4, 99, 26, -77, 61, -47, -113, -37, -82, 22, -77, 86, 123, -86, 105, -31, -21, 20, 45, 30, 59, 43, 52, -63, -40, 56, -64, 35, 74, -99, 28, -106, 42, -116, -118, -66, -22, 112, -62, 50, -54, 9, -118, -93, -87, 37, -111, -105, -13, -75, 22, 14, -36, 55, -79, -48, -54, 30, -73, 123, -127, 60, -5, 84, 109, 54, 35, -98, 92, 87, -89, -78, 123, 0, 13, -85, 76, 43, -18, -52, 93, 109, -89, -121, -105, 87, -121, 19, -15, 47, -125, 52, 22, -2, 52, 10, 39, 98, -50, 67, 15, -39, 50, 50, -80, 45, 52, -106, 9, -1, 46, -55, -47, -11, 104, 113, -4, 58, -117, -98, 36, 74, 123, -120, -101, 99, -52, -97, 38, 42, 86, 122, 34, 92, 8, -64, -121, 75, 41, -63, -69, 104, -28, 23, -54, 14, -111, -87, 52, -111, 98, 50, -22, -106, -106, 17};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.1318907783385409);
    msg.setSource(38372U);
    msg.setSourceEntity(114U);
    msg.setDestination(21414U);
    msg.setDestinationEntity(21U);
    msg.maneuver_id.assign("CPXHAOXDFKIJAMBAKLMCDIQEPGJOHOVNUUDSBCTVFFXRPDBOLQBTEUSTEAQVDCPUXDWNUKYKOMBTHHYLNUPITDOVGXWLCXEYZQBJYCXLQMVRLZTGSIWHSFTLYKLORBGJRQPUNOXEDJRBRPEFARMKNZJQSZHWSZCIVTNHUAK");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 53827U;
    tmp_msg_0.custom.assign("ZAXMABGDVQQQDLCRNZJHPLIMJVXHTOZFRKZOGXPNBPHAHJPIDAXSYXDNKFCPAYIOYGPRWBCUUQFWAZEGLCYSVVWLRGRDTRYGSDSBNQVJLSXNSJESCJVFIIMQPPBMAHFVHOYBURMYXKZPARLIZYXTTDBWWKSSRPIOZYIEJBKXKQEOCQXJWWHLUMEMUGMEJECOUMOWTCBHACHWZUATTNQUJFVZGWLSITLUYVRCDDFKNOENGLFNNKB");
    msg.data.set(tmp_msg_0);
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 233U;
    tmp_msg_1.snapshot.assign("VMFCYJAMHTVGIXPDBQMLBEBOGXJPOFNVGTZZSTQPIJJCBIAIWXWSPYLUUQPLHYQBOXWTYTROTUSRPFDWJNDHPMNETOZABMFXZUVHZNKQCOMCNJDURACVLJSESLRZITHICARYRYKESDLDWVPFZXUBJKQACYIQIFGGSORNUMQZCJUGERNASCLDVBNHFICLTVIEMFLDRHEJFXK");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("BNSOLQCHHSQCMAREGOPDFRSRDPCJBFWAJVKVGLMKBUYTPSYFPJUZLQWXXIRWGRBVICMQNWZMYZEZAAPVTYWCSVSGGCUKLHEXLIBOIVWDUZPTDHJCZNIQKPDRXHNEORJEOGFBNOPEFDXXAZYXQKKRTTZIFAYYYW");
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.4040413494799694);
    msg.setSource(8119U);
    msg.setSourceEntity(53U);
    msg.setDestination(24032U);
    msg.setDestinationEntity(161U);
    msg.maneuver_id.assign("QDIOSQQFQBWOWLMSHCCQGZDAAZKXLOJHYAEBSRVFJIBITLXISLTBCUEXAQHQANBMLGVWXTMJIWZGAPXYJKMPFSFRGWJHNCTCEJSSJRUXUOKXXULDTVHMVDTNEPYCYOVKCXBDAUMRDWDRCZGBUFIVKLTZIEGYNSCDNYPAQEFZYKYDHBZRHEPUZCMOPEPLVJEFUQOVHRSGKUQVNOLAIPWLKSPYRWJEINRVJPNIFHMFTFWTGWBMMOGUGBZKOKNDAN");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 9463U;
    tmp_msg_0.lat = 0.5733098720963735;
    tmp_msg_0.lon = 0.4305293865412969;
    tmp_msg_0.z = 0.5248978954514749;
    tmp_msg_0.z_units = 186U;
    tmp_msg_0.speed = 0.675795694070266;
    tmp_msg_0.speed_units = 5U;
    tmp_msg_0.bearing = 0.7581151469800615;
    tmp_msg_0.cross_angle = 0.6918221371682862;
    tmp_msg_0.width = 0.44429537846997513;
    tmp_msg_0.length = 0.26789071683535204;
    tmp_msg_0.hstep = 0.695328711267668;
    tmp_msg_0.coff = 172U;
    tmp_msg_0.alternation = 86U;
    tmp_msg_0.flags = 245U;
    tmp_msg_0.custom.assign("OQBWBLORYMWQSYEBBLZGOXILVXEXGDVRDZUEAJWXKCHVECOQDSUZPXDKLUETGTMVZEWIPJACRBPEFQHZETPBCLFMAPYIWQFNOBTS");
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
    msg.setTimeStamp(0.11321961674835068);
    msg.setSource(7737U);
    msg.setSourceEntity(33U);
    msg.setDestination(44232U);
    msg.setDestinationEntity(32U);
    msg.source_man.assign("LUHHWPQEUDJYPBOXCWYDCGZXXFBJAAWGFYMMSNPNGH");
    msg.dest_man.assign("BRXUINHCOYQNAGVEBFXYPJEPMERKOSITUKLFOECBHRPLVTVKJSIMYTCLSYUQLVDLGGWGVSXOZRAZKQUMZVQCWNJNDWJFL");
    msg.conditions.assign("SLFXSHPTRCXHDVIQEUWVJDPBRWKXBRUYSGRDXNZTBEOZGCZMGTEBTHQMKIPXKCSUQLJCYKZYAKBIXTLWAJCQWTDRRFYBWEZFPIQSACVZBYAFUANFS");

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
    msg.setTimeStamp(0.8429041490221604);
    msg.setSource(25154U);
    msg.setSourceEntity(244U);
    msg.setDestination(59030U);
    msg.setDestinationEntity(86U);
    msg.source_man.assign("ODXOIXLFEGWXOAYQCYSVXSDUVIQOZQISCZSFABOHZIERNJSXHRQCZDWUPIENFHYVWWFYDKTVRXKTWEMAHKFMLGAZFKIPPGDJNKMUAVCNJNQUNFJITOBTCETXSYHDVCPZNCUJGQFRVATOKIMZAYBBGDL");
    msg.dest_man.assign("IUCOODDBFBIMPCKBSXLEPRIHTGBKHODCDZYTVBLUNMRDOVLFVMGAMUIDZQLQHQQOWQBWJMHAPZXSSPECHTAHXZWRJTWJJGFAVVWHARQNTWUEYNQGUFPSYYKRRYQKRZCCCFTLLUFJZKRKFABPKODSGMSIHYGXVAZXNSYMLEPFOUHXIMKZDWUEZAIXETFDXTNXSCSOLAJPNKYWYVJEETUJDJIVPET");
    msg.conditions.assign("JMVFIBGOECKLYMKYYFBAVGSRRBDRJNTAATVIZCUHSUINJZAVTFYFIZBMYNMPIOKSDYCWWJKZMFQDUKCKFEDVPIHZOKAVZHGXOMSSWFUUUDNPLVXTFSGSOEIGRGTVWP");

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
    msg.setTimeStamp(0.33078392756608266);
    msg.setSource(1700U);
    msg.setSourceEntity(90U);
    msg.setDestination(25701U);
    msg.setDestinationEntity(209U);
    msg.source_man.assign("EBBVJXBULDYUCHYJERADZQXGNWCERNOIMIKIOSPPRHKUQOVTCNKXMRFTOJFDIALKZDXDUBSAIGHWNFATZHDPCPSFQFMVYTQRSHWZUBMXOPHPYZAQSWZESKUFWAFKCYBNUMGJGAIRCWNROJXIPVVGJXYCZFMDGGEDSZUMFLJISVQHPVBEGLGVGNCJZEYFJQ");
    msg.dest_man.assign("ETGQPSBQFZRRGLNTHRCPDZZCCUENXTLSKAICSIRTQEHGMHXDKTKOCSEQCSATWEJBGJFVPFYJLRAFPOROYDAKNXSRXIUNDSBDVDWJLKNKRYRELLPOXPIKOOBQUWXHOWYOADHPZMUVQWAUHNIWIPHEBVAPUYDHXJTGIFAWADHOBKUZNMZJIKZEGHJGXKULTGWBVYBNFGZNSEMMQQVMZYFSQVLIFCSTMXYVORLJEFCYWGAXP");
    msg.conditions.assign("VGNQFJBUYDTTKHIKNFOSLIMEJNXIKHUPCBXSDEHRUIYURKXNAUPIOZBTDQUBIFGGRQAJOAO");

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
    msg.setTimeStamp(0.3155797197782031);
    msg.setSource(62537U);
    msg.setSourceEntity(192U);
    msg.setDestination(61168U);
    msg.setDestinationEntity(37U);
    msg.command = 60U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EONTLYZAYZDWLFMBBNUAXLGIXRFEQHURWKQCKZFNPXXJWUHLADPTTOIYJUKTPVMHPWNCMXBKRNIGPSSTHEPARTABEXEWLIJEWWQIHHMZIDOBGKQCYDSGVCJFYVSRZCQWJEKSSYMFMZHPAVVGIYOYHGBNLNNFVFROLZTFCXSYOJRXIORHOCCDLGVUKIUJAAQJGLMMSEXSEBNMQO");
    tmp_msg_0.description.assign("DFJUFJSEPHNCPZCZIXTYJFINOJRECZJAKLYBEMNVMMOOORUUNNYLGBJQL");
    tmp_msg_0.vnamespace.assign("VONTWAXBOMVQAOTDLEZPQACMADGYZGKRSMDICINSHCBJCDFHWZEAJUIUUPPAQGPCIECGZWNBPSYIBTGSSHOAWHKFLJTUZMXLRBRKKZNVHVBJNMQNGVOUSMSY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YNJVUMLFHHWCCKPKRDDDSULUK");
    tmp_tmp_msg_0_0.value.assign("IMHXWFSAUNCMKNBHFLFZTO");
    tmp_tmp_msg_0_0.type = 86U;
    tmp_tmp_msg_0_0.access = 250U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CTQSNBJWCBZTUASLDZDUCZLXPVBOEYANKIIIMQTSWQJUTTWUPWBRVGICHRFDXXNEDFXUMDXFSHWNFTBRSEILDMVHXGXBGHBPRBMAKQNMWNIWTRFVAODNTGZKCREOIKAZMZUHQXGDSQMIYKGFUQCBIJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("SARDVCETGLDROLCOWNSCPRWKNXHEVZKVONQFGYTKTNLECZDNTVNGQYBMSQZOWLAQXKKZSBTROIWPPYCZOQMSVMAGIKQBYDTIXPPECYFGYDPFRKFHPRTGMMLYSHIDZWMHHHIUNH");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 726U;
    tmp_tmp_tmp_msg_0_1_0.flags = 133U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5206848468045402;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8052312476897142;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.920091573175756;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 186U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.2645761897518897;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 157U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.18786412504959105;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6400188153939933;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 62U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WKLNXCWLNBDHZBSUYLWTDMSANOLKUKAIVRGRNRKHCFLTGXOPPVACEFLRGDHYXQSWGIBTCRQNMPRVFUMFZEPUDFHIZGBKDDVJFYCNATIJNLGSKPGMHZQJYV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("CKPFRUWMOHFVICUAPUQQPQQBQLDBWAGVNHQIDOUZOXLGQNFJJQRHTHIKLNMNPVAMEOOPIXUEZDXWKBXPGVVHWSPLHZTCMWZAFDYSTKSRJRASTUYRFYAGSPDCHCBCUIJSPDJKRGGVLYGNCDNKXFTPBJZKLSFLFGCBTSHVGHXVXYIRNDVOUJEZOWUIMQXYAKLEDXRZZBRLIEAO");
    tmp_tmp_msg_0_2.dest_man.assign("GCJVHEZCYPYNAPONDOIISLRHIJOYTOWVKEZLIATJIYYSMMARPGBPETUIJVZEOKRWHDCDAGLAITSMLXTHNEYUWRWWVSGZUTJVABJZFMTXQLHSLAZFCZMSSRHIHXYSGDDGLKXNDGLMYWEYELAXEZHZQNSQVWCOQUSNUONFIJDKWKFXBNQDPFROQGPFDRMHUBQFBRJFWWCTGOZBXECDCALJRQT");
    tmp_tmp_msg_0_2.conditions.assign("GVBDMJWSGOSOSDDVCSWEQQLFWLJZIPHUQHTEFFTXYYCJVWGTGGBLXSEXOAKODCIXRXLPOAXSTABIKJRUIEJWZFEJMJARGLFTLOURPANRDBXPSKTQESHCLGQNCJZUKCFTMCOYYIRJEVGKNSEDYMNHZNFYVNQBMIRBRYUHPHCGTUKZAHLXZMNVNHTQGZWVIDBUFHNYHQWBDUAZKERQMQBMZOIBZKCXIEOFAUXAVMPNOKTWALYJPIWPSWCMDPLP");
    IMC::EstimatedState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.9262569587069831;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.46812933984786187;
    tmp_tmp_tmp_msg_0_2_0.height = 0.8780657125749224;
    tmp_tmp_tmp_msg_0_2_0.x = 0.23432404276594787;
    tmp_tmp_tmp_msg_0_2_0.y = 0.3609110079498603;
    tmp_tmp_tmp_msg_0_2_0.z = 0.4256537754725854;
    tmp_tmp_tmp_msg_0_2_0.phi = 0.762607027258822;
    tmp_tmp_tmp_msg_0_2_0.theta = 0.7041263921204834;
    tmp_tmp_tmp_msg_0_2_0.psi = 0.7180395764859402;
    tmp_tmp_tmp_msg_0_2_0.u = 0.2859194332676288;
    tmp_tmp_tmp_msg_0_2_0.v = 0.5664780901163192;
    tmp_tmp_tmp_msg_0_2_0.w = 0.9473447952028011;
    tmp_tmp_tmp_msg_0_2_0.vx = 0.8146405352099658;
    tmp_tmp_tmp_msg_0_2_0.vy = 0.7180299920384288;
    tmp_tmp_tmp_msg_0_2_0.vz = 0.156226849393042;
    tmp_tmp_tmp_msg_0_2_0.p = 0.6566103759319125;
    tmp_tmp_tmp_msg_0_2_0.q = 0.24557593603331807;
    tmp_tmp_tmp_msg_0_2_0.r = 0.8583628627838749;
    tmp_tmp_tmp_msg_0_2_0.depth = 0.1101082076158243;
    tmp_tmp_tmp_msg_0_2_0.alt = 0.30034607455003304;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Announce tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sys_name.assign("OJQXPKYQCDJITXNQBKSKICBJICSXMZPPMBJNFZVOBHHOHGSFXGMTYACDCPTWONLQUBEJFLNWUGZAKPGFMLNJWQTLMQVPINFFNVEGRISRFKZSURLDWTILYPNTVQTRDTEERASUAXSMDKZIEMAPRGUIDYUJFXJBEWUFGCHYWAEOZVVALEERHCCKTXQQHNLBOCHQXDHJUIVDXLLHZOKWJYPBUBWRCASDTNZABAGWVSVWYROEUYKMHGVXKZ");
    tmp_tmp_msg_0_3.sys_type = 76U;
    tmp_tmp_msg_0_3.owner = 47034U;
    tmp_tmp_msg_0_3.lat = 0.8371620627761646;
    tmp_tmp_msg_0_3.lon = 0.8375234678484598;
    tmp_tmp_msg_0_3.height = 0.4532149124670821;
    tmp_tmp_msg_0_3.services.assign("UFJCOCGKVSDCCOQHYXOXWCNHXFXLWVDGSNXIALJORJIXKTFQVNEEMEIGTYQIHIVSUAGECJYKNPHQFPPMBDMCOYEIS");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::DesiredSpeed tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.value = 0.31334558307944127;
    tmp_tmp_msg_0_4.speed_units = 244U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.5691938771264283);
    msg.setSource(9645U);
    msg.setSourceEntity(8U);
    msg.setDestination(30004U);
    msg.setDestinationEntity(142U);
    msg.command = 63U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XTXSIBGHVYIYVFMHEXKCRTAJVIDNBMUQLSRSYGFYVTTMQBSLTFTJWBMPZMGNMIFRCMOKECGXQHCAXEDBEUWXUMIRAIZPYHOHAATOOIHCNUFQQHWDJRQIWZUXLLKUCPRTKOXZGPDNNCKGCLJNARWFNQVEEOKPPAAED");
    tmp_msg_0.description.assign("KPECIQJIXNRELHGXXNBVNWHPBLTPANJQVPRZYBAJWFTCUDEZBSOPPUTUOZWUBDFLYJDGIPVXKSVHHOHNURVPYCQQQEJIGXGSGMUSMJJVKJRZBDBEXFGMCTONAGKHWAYFHORCSSEMAPI");
    tmp_msg_0.vnamespace.assign("PHBIIPXXDMFPQDEDYCIUGWNMAHDFSPARGMUISSRKKYGHQUXSK");
    tmp_msg_0.start_man_id.assign("GOOPTRDNQKGGPJRLRLJNBDSMRGQISCTLDKLZDNBTUTIIWRJOUSWSDTTJBHEVKMHVFOLRUZCMYYAFUNXAJCKHBWYSMFVPNHKVWYTEEQFNIXXVFWCFOSPJBZKRHROCZMYSRBQUBYAUTKGEGAIA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UOCFXOZIOYITRQAZATPOXXAYMZRZJKEIKTBQZVGPVXOTOUWQLPNEDNLWDTKFSFKBBQHZBSFJYJWUCPEHFWNBRDCVGXLMXMFMGXIHXSHQLBHRTNKLZSLNEPILHWMCNNVDYHUGAPMUOOQVDECPCHJTKTNLPTUINEDJXUSVDMJZWVEIHKGGSZPJNJYZRJFJVYWCUSYVHSWSIKQCWAGBETDAREWAXOCFFIROAUPBQKVMGRAMDFMABYSRULKR");
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 5410U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.2882659097492295;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.10486082987553169;
    tmp_tmp_tmp_msg_0_0_0.z = 0.14230051630070506;
    tmp_tmp_tmp_msg_0_0_0.z_units = 142U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.018570910632086268;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 13U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.6351027100405816;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.05771478500946814;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.5415978448504997;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("COLAFZPGGZKAJZZAOOFCARDRBBKLOTBVOWXYUPMQIBTWCUQBIMTHWOPRINVRWEHNSFQSRMKVUBSUDHTDFAMFPSNFLHXLOYBYCFEEXLQMQTTVEP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::QueryPowerChannelState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DHRWKZRFBFALYPZCJPORPFYFLIYUKCSSBALDXDRTVDRSAKWZTTSPVGQYBVITJUULGBIXYIZAXOEMDEKEQFPORNHZJTPSNNTTHHSFVQMQNGKJWGJEWZETDWRBQCDIZVFBGLQFJWBCSZGUUWZOORUQMLEVOKOHNOKMTNILCVPXCNWOYRLEOC");
    tmp_tmp_msg_0_1.dest_man.assign("OVNGSCFKPBJBTQUKIPWRWEVPSSPHSSJKQKDBCLLNANRUTRCNKFYZMGDNHBENBVRTEQWHTEDHYRJPYNMNZHVFONKAAOGIXWX");
    tmp_tmp_msg_0_1.conditions.assign("DIVJJGJFROPTLVHNKBKOKJZBMZNYMJHJQJXUASGHZREQQFFNPXYXMLQQFSRQGEMIBMDVDHLMATRVCYWICCJOMIPOUDZXONSKFHWTTARAPYOTLEOYAXYCNEPXQDATYMZGWLQGFVBYVFNDDFNBUMGKNNIHWBZZUCK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Target tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.label.assign("CUWFQPMSIRAFRHUMGNUDAASEYPKWRNOAKAJLKPHLZZSELCIWTCRRXHBWGKTFHJGRQJVVPZCEECGMCDMR");
    tmp_tmp_msg_0_2.lat = 0.8527035345960386;
    tmp_tmp_msg_0_2.lon = 0.19676109042833134;
    tmp_tmp_msg_0_2.z = 0.5641984383140003;
    tmp_tmp_msg_0_2.z_units = 254U;
    tmp_tmp_msg_0_2.cog = 0.6928087829837624;
    tmp_tmp_msg_0_2.sog = 0.6906406905592638;
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
    msg.setTimeStamp(0.16693501856467519);
    msg.setSource(38947U);
    msg.setSourceEntity(15U);
    msg.setDestination(15705U);
    msg.setDestinationEntity(83U);
    msg.command = 113U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TEFGUCZZAQXMCKGRTYRHMUYDTLYOTQNSFHKDVKZHWCMDGTEBKUXQSUEEIRXPMBEVAKEOJUIDWPKGIYGGWXLNPBXTFEATTSZDZYHEOCJLQGHIJJVWLOJSA");
    tmp_msg_0.description.assign("WGKDPSRZXNGEVQRCDGGOSFMEODMENJWSYVWGFIAUYOHINCLOFCPLUSBKCJTFJKKJIDBNZQOTEXJKPZMGAXYRPPZPCYSHZANWBUANSNEPKBZTMIJQNXUGLRMQQELUCYBNELIDWTGTYRLPYLVIXXFOVFQOTVURKFABFRQABRUTGAXVKEMADUZVKHHMVXZEOMSJIVWOZAWHHMJDCIEFYUGNBHRPUBXZMHYRXCJOSLWSWTH");
    tmp_msg_0.vnamespace.assign("FSVPEBVFCKLABALXLIGYJVTWFUSYMZTOKKNVADSEPNPNJYRSUCFCZAKGFAOQLIRUNOHPYPMDIXFJKXUHQS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SOAPECSSNDJGVEAMOFTUGKRZNHTEENWBJASJSHWCICVRJXURBAHCEXFTYNRXBKBIZFMNMQAZFDMTDGOOMSECXZFXRDFUPIHPZTMJVTQMBYLLDAZFPMYZZYNQHUKRXVCQDVYHAEMBZLGVQVHJLAUVNVQNUJWSLAKBVLACOSPBYOKOOFGUPIWWEPPMLGBIYSXDCYQDRRKIYUTJJPWDYRILDTOKLOKKCKJXGHGTW");
    tmp_tmp_msg_0_0.value.assign("PYTDYVRBHN");
    tmp_tmp_msg_0_0.type = 121U;
    tmp_tmp_msg_0_0.access = 91U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XLZVNDNYXQGIKVNJCLTSLAVUGJPWTABEWHQNGJBFIJDMMCWRRROXFZHGAHSKOCSPLEHZEVBPOBDUNFEVCSPHTYTZYFWRECKFSENDQPGNQKTVJOMXWZUGRISGPZKYEUWJPKARQHAYVUGJHXWFFCVUODTQMIMJBYAUIFBJHQQLQXQTXWRLIRLMBIPTEUAMNRIYUCVDMZKIXNIXHXPZDBDOLEZYUWJPOALYYLSTKOMDFVGCAWSSMDNCZ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("OYNMGWCBHZHOYRASLGESCKXNNAZSRFHOGQRDNJGWJNZPQXACQIETUHXKBGAGTDNIUSUOAJMFXWASPTVATFNDVVKWEKOHZSCITOMNSRZJRXOQTXHUHTREPLVWIXYKWMVAYFBBOJP");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 63940U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6501480519285627;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6033951570382943;
    tmp_tmp_tmp_msg_0_1_0.z = 0.46492985394411945;
    tmp_tmp_tmp_msg_0_1_0.z_units = 108U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.38871905789999484;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 177U;
    tmp_tmp_tmp_msg_0_1_0.duration = 33176U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.9114242797711045;
    tmp_tmp_tmp_msg_0_1_0.flags = 231U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NWSLTZCRECJIELVFZIWYAAQTCVQGVMHCWJXSHZNPGPBX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SetServoPosition tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id = 252U;
    tmp_tmp_tmp_msg_0_1_1.value = 0.6392381925424389;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::AcousticSystemsQuery tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::LblRangeAcceptance tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 150U;
    tmp_tmp_msg_0_2.range = 0.7716072095551637;
    tmp_tmp_msg_0_2.acceptance = 5U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.17397413953913587);
    msg.setSource(13771U);
    msg.setSourceEntity(126U);
    msg.setDestination(38767U);
    msg.setDestinationEntity(149U);
    msg.state = 193U;
    msg.plan_id.assign("CTLIWDYMXFQAECSDYTISWJLGFKJOYIKYEYGSMRILPXQTXXHYQGCRBZQLXRREFYRIIL");
    msg.comm_level = 25U;

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
    msg.setTimeStamp(0.4605706450389958);
    msg.setSource(21174U);
    msg.setSourceEntity(53U);
    msg.setDestination(36655U);
    msg.setDestinationEntity(126U);
    msg.state = 200U;
    msg.plan_id.assign("ORLEOXXABVMIOAAMYFXKLNAPQRGJCNIUYIQMLGZRKZCHTQM");
    msg.comm_level = 175U;

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
    msg.setTimeStamp(0.7421129812493977);
    msg.setSource(45915U);
    msg.setSourceEntity(138U);
    msg.setDestination(39834U);
    msg.setDestinationEntity(100U);
    msg.state = 122U;
    msg.plan_id.assign("TUMISWWBGOTXRPJHYQIHAYCAHILLYFZIPVLLBILYNMKBVBBWIQTUJVJRQDCKANSQRXNAHFEUMPVKPJLDWPUZHSFC");
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
    msg.setTimeStamp(0.6975821314120828);
    msg.setSource(45970U);
    msg.setSourceEntity(216U);
    msg.setDestination(5152U);
    msg.setDestinationEntity(31U);
    msg.type = 133U;
    msg.op = 29U;
    msg.request_id = 37529U;
    msg.plan_id.assign("VUOMXXAPGPKHRJDB");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.7439021461339197;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZXOUXLRSDWRTLMOJKJLZOHRKTDDOMOQYRWZCRLUWFFTHTVEEPDWYYYEKNBAZMLLNRAXCUVEJBGNWTROGSXQSCFNXSTZDVQGVEQCKUAJKWQMPGFIBLNBEGPTDFYILMVXIPAJHXHDTWEGQFUMAEUVNHGASTYSYBOOMSDNFCNKUVPAUZFRSFGGKHABKJV");

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
    msg.setTimeStamp(0.3328223153386589);
    msg.setSource(17536U);
    msg.setSourceEntity(8U);
    msg.setDestination(35381U);
    msg.setDestinationEntity(111U);
    msg.type = 201U;
    msg.op = 31U;
    msg.request_id = 34183U;
    msg.plan_id.assign("UIPPNVGXNDHXGAMZNMCDHFZEYMERWIGUJEUOCOPVTDHMJPQKUIXKQZJZUWDZOJUAZAPEGXTRAQVLNBTRANRKAZSHSOOQFCFIBULMQNFSWTLWVCEPJRWYQFDIATNYEHMMYLBIKFTCMWTLDMLQXYGBLRRJHEBJSWVVWHKBVICJESZOKURWPZCDXLOYGPAIVYOYIGKVKVT");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 249U;
    tmp_msg_0.frequency = 3157769570U;
    tmp_msg_0.min_range = 40267U;
    tmp_msg_0.max_range = 46106U;
    tmp_msg_0.bits_per_point = 104U;
    tmp_msg_0.scale_factor = 0.14269555682326363;
    const char tmp_tmp_msg_0_0[] = {-80, -106, 55, -62, -61, -105, 1, -98, -16, 60, 89, 34, -104, -4, 40, -46, 79, -122, -29, 33, -116, -94, -79, -81, -36, -66, -81, 47, 57, -75, 112, 88, 126, -121, -123, 60, 47, 48, 54, -39, -44, -65, 81, -47, 94, 19};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UAOKUHKYDIXJBIKNFNYNXZYPUZPPGTLKPSNZDRZCLRFXGECVUEW");

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
    msg.setTimeStamp(0.1337853832621132);
    msg.setSource(35070U);
    msg.setSourceEntity(50U);
    msg.setDestination(31660U);
    msg.setDestinationEntity(59U);
    msg.type = 179U;
    msg.op = 249U;
    msg.request_id = 28331U;
    msg.plan_id.assign("DGKKRZWNYDKJOCCSPKPTTYCPLZHGMLIPIIEGYOFGLJFFVEHARVMYWABRMGQVZAITDVIPMUXLWOUDRADYDGUHEJVDJGEZQFYQCMCQSOR");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 162U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JHJWOYSBNHOHIBPDXHOGDIGRRJQHWAGGABBOXDWPQWCGWFOUAASDNKZWZKYLZRWQJDUDKYKFHVLZLXHLPHAUKRMVCYPQOPOVCEEXGTXFLTBFESNTVLCLKYINMJ");

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
    msg.setTimeStamp(0.7163230420152135);
    msg.setSource(24378U);
    msg.setSourceEntity(163U);
    msg.setDestination(26027U);
    msg.setDestinationEntity(76U);
    msg.plan_count = 33694U;
    msg.plan_size = 3998088551U;
    msg.change_time = 0.2943047336488134;
    msg.change_sid = 61107U;
    msg.change_sname.assign("LHSUAGVBDINOWHUMJACUPYGNIYFZAAXJQSACPTWEAJUFEQLXCVKFRERMVJBNIKNPIGTJYQKQMOZYRTWSKJTGCNHOWSCVXBRNVGBPZOPSXSFONPPKBDUXHMZMAMJTYTIIFYUSXRJHIUVOMLJDPPHEBZXEORNWKFLTAKLDL");
    const char tmp_msg_0[] = {20, 5, 75, 56, -126, 11, 40, 94, 34, 44, -83, -42, -96, -78, 46, 16, 118, -64, 109, -10, -114, -1, 74, -103, 62, -74, 28, 72, -12, 59, 70, 79, -70, -51, -49, -128, 78, -26, 61, 70, 90, -20, 0, -51, 110, -82, 17, -127, -73, -19, -100, -39, 62, -14, 35, 120, 46, -50, -22, 47, -55, -34, -99, 57, 84, 21, 110, 89, -36, 99, -87, 48, 15, 70, 23, -39, 54, -28, 25, 66, -42, -34, 125, 123, -62, 38, -123, 84, 21, -17, 115, 0, 25, -94, -37, -28, 56, 107, -78, -96, 72, 72, 51, 72};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JXYIEWXHYDMACPUQBWTENUGJBWMLPEUOYPONTGNZLXAJEVRJNGZDUIDJERBWHZSFDVSHKFEKLOMRCPYHIZGOOOARDYDRZTEEIJPFPZGLQUBANVBFYZWMCQSN");
    tmp_msg_1.plan_size = 28270U;
    tmp_msg_1.change_time = 0.45656440535465914;
    tmp_msg_1.change_sid = 47917U;
    tmp_msg_1.change_sname.assign("XGPDAFTGPBYKNCVFWHARMSYQZYERHCLLLQJKXKZRXDSJVRUDMSSOZPBWUMMPKZKOYOSBLGYIRVISL");
    const char tmp_tmp_msg_1_0[] = {-94, 122, 34, 56, 50, -37, -41, -39, 22, 117, 30, 22, 112, -27, -59, 12, 122, -80, 88, -3, 79, 92, -33, 118, 60, 123, 2, -33, 65, 71, 110, 69, -69, -1, 50, -115, 31, -113, -54, -49, -93, 76, 53, -10, 60, 87, -76, 51, 115, -35, 34, -60, -25, 4, -95, 44, 47, -20, 25, -46, 101, 89, 83, 103, -29, 3, 126, 87, 87, 86, -19, 119, 64, 30, -66, 108, 108, 76, -55, 41, -32, 6, 15, -90, 125, 11, -90, 39, -119, 20, 87, 36, 55, -18, 1, 73, -27, 124, 106, 69, -128, -44, -38, -79, 42, 85, 30, 88, 86, 64, -54, -18, 106, 29, 94, -99, 6, -46, -22, -74, 88, -72, -4, -29, -27, -6, -95, -77, -108, -37, 113, -98, -23, -35, 53, 3, 12, 101, -43, 101, -120, 107, 37, -73, -9, 45, -90, -124, -31, 110, -30, -122, 121, 27, -20, 65, -109, 68, 89, 77, 39, 71, -96, -93, -46, 53, 77, 112, 107, -103, -79, 103, 1, -124, -101, 32, 34, -35, 97, -5, 106, 90, -98, -7, 58, -59, -66, 101, -97, -106, 114};
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
    msg.setTimeStamp(0.35577477790281775);
    msg.setSource(41999U);
    msg.setSourceEntity(228U);
    msg.setDestination(38190U);
    msg.setDestinationEntity(252U);
    msg.plan_count = 49105U;
    msg.plan_size = 3407178604U;
    msg.change_time = 0.8570654628126477;
    msg.change_sid = 21414U;
    msg.change_sname.assign("BPWAGFQYUUCAXYLFJNJAQYPTQADEZGJLUGSMNVVDXYEGWDZYGMWIAEAZOJAYXZOTHZOSNVXOHLTGEEIYNHBMXBRBY");
    const char tmp_msg_0[] = {-66, 123, 72, 91, -95, 28, 62, -51, 94, 49, 11, -18, 76, -87, -92, 74, 7, 59, 86, 98, 27, 68, 49, -96, 95, 109, -40, -105, 95, 58, 82, -31, -119, 86, 7, -118, 121, -6, -46, -13, 101, -103, 89, -50, -19, -88, -40, -43, -29, -112, 46, -49, -35, 30, 7, -70, 0, -59, 24, 92, -8, -13, -4, -117, 119, 50, 91, -54, -58, -9, 111, 18, -10, 108, -99, -15, 9, 102, 57, 86, 42, 84, -2, -73, -82, 52, -25, -61, -125, 116, -90, 3, 14, 98, 34, 34, -37, 13, 40, -36, -58, 26, -70, 22, -15, -28, -41, -18, 109, -107, -65, 61, -118, -92, -46, 30, 42, -1, -77, -8, 52, 18, -38, 40, -116, 114, 17, 120, -75, 26, -17, 84, -114, -26, -101, 71, -49, 52, -108, 77, 59, -100, -58, -21, 85, 100, -87, -24, -23, -96, 123, 89, -46, -45, -9, -7, 36, -52, 79, -28, -27, -126, 28, 11, -100, 104, 57, 23, 100, 51, -19, 45, -49, -1, -79, -102, -37, -106, -46, 56, -94, -127, -63, 105, 46, -15, 23, -63, 96, -95};
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
    msg.setTimeStamp(0.9771077351723817);
    msg.setSource(63478U);
    msg.setSourceEntity(152U);
    msg.setDestination(55992U);
    msg.setDestinationEntity(34U);
    msg.plan_count = 36671U;
    msg.plan_size = 1097567382U;
    msg.change_time = 0.02938451997252478;
    msg.change_sid = 62002U;
    msg.change_sname.assign("NJNKHOUMFGLXVAMHWXHOBEFBJINRQEGVIBOWDFLEDEHPLZTLYEARMWTZEYJATXLGNLCMFOKWCXNUJQLDAYXKGFEUPSVHHIMKMTBKVSCVGURNJQWOLBRMDZMPPIAZRSROIKHMSFYVVCNFAWNICPJEXVZW");
    const char tmp_msg_0[] = {76, 61, -112, 28, 9, 124, -92, 116, -50, 16, 31, -88, 38, 8, -22, 44, 72, -13, -29, -2, -92, -105, 71, -4, 83, -33, 35, -21, -39, -48, -41, -27, -38, -6, -76, 50, 75, 116, 111, -123, 41, 24, -117, 108, 82, -42, 49, 17, -123, 67};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZMDQTJHELMFDYRPIDPPFKEVTXESYGXULMBNHTIZJOVKGNUZTNQHALRWQYQB");
    tmp_msg_1.plan_size = 13875U;
    tmp_msg_1.change_time = 0.48734780168190683;
    tmp_msg_1.change_sid = 9529U;
    tmp_msg_1.change_sname.assign("IMWAKCUURGWVZIHPTAHAMLQYBXSRRKYYGCPLABOEXDJVETRYUYVHCUPAIDVVXDTCLNDPDNBZRGWOZKTTDBZTRZQQUXJ");
    const char tmp_tmp_msg_1_0[] = {20, -5, -94, -57, -46, 49, -89, 1, -44, 5, -114, -99, 121, -128, -45, -18, -47, 87, 15, 50, -28, -117, -46, 76, 108, 85, -77, 34, 30, -25, 12, 85, 36, -105, 64, -1, -29, 90, 17, -33, 81, -82, -126, 118, 52, 16, 93, -56, 61, -53, 47, 26, -58, -108, -102, -47, 53, -67, 126, -65, -89, -128, 107, -13, -103, -108, 17, -66, -2, -69, -80, 10, -43, -71, 39, -47, -107, 39, -76, -43, 99, 34, -67, 23, 66, -49, 9, -75, -29, -127, 12, 5, 61, 49, 91, -55, -100, 30, -85, -26, 52, 105, -27, 77, -27, -71, -88, 32, -51, 4, -98, 62, -19, -29, -109, 23, 30, 13, -85, -114, 61, -48, -90, -75, 114, -72, -84, 8, 95, 61, 48, 100, -83, 124, 103, -53, 57, -71, -15, -41, -49, -52, 125, 60, -12, 41, 116, 40, -48, 46, 54, -105, 95, -121, 76, 78, 66, -109, 57, -19, -42, 51, -46, -50, -82, 5, -110, 81, 15, -10, -69, -17, -36, 59, 17, 71, 1, -83, -12, -19, 114, -89, -117, 60, 73, -98, 75, 58, -25, -71, -58, -65, 52, -101, 42, -80, -118, -102, 27, 105, -68, 72, -120, 60, 33, 4, -44, -30, -32, 10, 93, -55, 47, -97, -91, -23, 2, -112, 7};
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
    msg.setTimeStamp(0.9887297782844148);
    msg.setSource(36815U);
    msg.setSourceEntity(86U);
    msg.setDestination(48808U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("NCJFBNEIOBTXHMSIPKQAAIFDHPOVAPBILQKFFZD");
    msg.plan_size = 34569U;
    msg.change_time = 0.6131235274224497;
    msg.change_sid = 679U;
    msg.change_sname.assign("YLFLEHHRFUNVJKRBSJO");
    const char tmp_msg_0[] = {-118, -36, 98, 122, 109, 67, -62, -63, 25, -98, 104, 14, -103, -73, -53, 55, 81, 88, -49, -14, 105, 6, 101, 82, 9, -51, -103, 96, 62, -63, 5, -118, 46, -68, -127, 57, 96, -15, -108, 70, -20, 49, -101, -24, 95, -79, -24, 54, 33, 119, -92, -35, 99, -104, -5, -25, -3, -48, -118, -49, 123, -11, -117, 110, 90, 20, 44, 33, 122, -45, -126, 80, -98, -111, -97, -55, 43, 48, 84, 113, -22, -37, 95, 53, 66, 108, 99, -108, 99, 108, 9, -106};
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
    msg.setTimeStamp(0.5728235619265272);
    msg.setSource(58186U);
    msg.setSourceEntity(6U);
    msg.setDestination(9002U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("REKVVAFTXKIDWCDKGHXBOZHCIPVQGUCPTDBGYUJNFTHFGCFLSKHUEUCARGBBELVQLPGUBFOHX");
    msg.plan_size = 21189U;
    msg.change_time = 0.020955984242352232;
    msg.change_sid = 22346U;
    msg.change_sname.assign("ZESYFDTWGRPUUEVIURMCYTGVWKJYFYSGLCMAVXNZBQOZQTBDAORSVBBEIHMKZLRKTJSOORYZHKIKMVEVMRNAGUCXODYJNECRNKBLDFCHUPSOYIFOCEPSJXPQLSPSUZVFVJDYFPJFEOCWWMIJBCWMHOIVNGARMDBJWNUPIOXJLVGXQGNLXAIHQHQRGNXLXIDNJHLXTUGBHTQBWKTKMTADEKYEZ");
    const char tmp_msg_0[] = {89, 10, -36, 87, -119, -79, -7, -53, 102, 6, -58, 18, -85, 102, -53, -86, 113, 5, 103, -73, 20, -48, 96, -121, 121, -60, 122, 78, -43, 90, -9, 29, 66, 26, -71, 44, 30, -45, 109, 13, 106, -30, -78, -36, -103, 27, 9, -106, 19, -28, -97, 22, -4, -51, -85, 18, 125, -57, -109, -35, -112, -9, -36, 12, -31, -61, 60, 25, -105, -59, 92, 9, -34, -25, 109, -37, -66, 91, 86, 102, -125, -87, -18, -36, 76, -39, -96, -52, 64, -119, 41, -50, -105, -119, 83, 10, 96, 85, 97, -126, 90, 125, 62, 36, -40, 68, 89, -84, 92, -35, 54, 87, 42, -68, -125, 103, 85, -70, 67, -34, -37, 73, 17, 60, -7, 87, -62, -98, -49, 91, 113, -21, -6, -95, 55, -88, -36, 57, 126, -51, -23, -21, -57, -120, 72, -38, -88, -128, 25, -104, 52, -9, -115, -36, 124};
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
    msg.setTimeStamp(0.3008458532434485);
    msg.setSource(18206U);
    msg.setSourceEntity(142U);
    msg.setDestination(22407U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("UKERXTCPQATKXCKFYFZQEFHVYKWAPICAWIMHUVPYOBKQBSXHJMGMAQMYTTRRECCCDMPHAJUJHOXPYXZRZISALGWPV");
    msg.plan_size = 35409U;
    msg.change_time = 0.010683362433220656;
    msg.change_sid = 9389U;
    msg.change_sname.assign("FORNPOOBNWFWYHLQASELMQSKUNGPDXVYXANEIRDWKTCPWSVNYKXMOTHGHOHKKIER");
    const char tmp_msg_0[] = {-82, -44, 18, -80, 63, 30, -79, -27, -95, -2, 59, -74, 110, -64, 125, -53, 57, -69, -12, 37, 63, -39, 34, -67, -86, 98, 24, -47, -83, 0, -82, -77, 12, 20, -78, 56, 31, -83, 92, -93, 76, -34, 77, -81, -59, -80, -47, -112, -78, 5, 84, -64, -33, 35, 29, -112, -59, 92, -35, -76, -50, -87, 43, 109, 39, -119, -104, -11, 87, 105, -46, -70, -44, -59, -125, 98, 61, 7, -52, 62, -39, 49, 56, -20, 42, -6, 39, -8, 126, 113, -112, -119, 77, 45, 0, 74, 74, 109, -118, 90, -44, -100, -44, 45, 26, 11, -60, 35, 2, -35, -41, 108, 60, 107, -74, -103, 21, -1, 33, -10, -17, -1, -45, -61, -112, 13, 25, 114, 56, -39, 77, 125, 4, -99, -41, -125, 96, 95, 66, 7, -97, 28, 37, 31, 22, 102, 104, 120, 17, -91, -105, 63, 37, 26, -17, -34, 27, -112, 7, 22, -26, -42, 60, -67, -32, 123, 84, -71, -98, 77, 19, -54, 6, 26, 86, -60, -53, 126, -39, -67, -16, -16, -28, 42, 71, 28, 106, 103, 97, 35, 44, 124, 38, -63, -70, -63, 111, -36, -111, 58, 113, 78, -104, 21, 31, -9, -97, -59, 30, -44, -6, 22, -64, -98, 111, 90, -114, 34, -16, 50, 48, 13, 64, -49, 68, 82, 78, 21, -35, 14, 119, -21, 16, -18, 55, 102, 78, 13, 18, -16, -7, -32, -25, 11, 73, 112};
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
    msg.setTimeStamp(0.6133787083820794);
    msg.setSource(52486U);
    msg.setSourceEntity(144U);
    msg.setDestination(23629U);
    msg.setDestinationEntity(147U);
    msg.type = 212U;
    msg.op = 91U;
    msg.request_id = 46144U;
    msg.plan_id.assign("XMOVNTQHRBLOVPUSJLSQRJBJGDITMCYNRDKQMJCCSJTOGYXTYFMRWTDYYKFUZXDOEJVPZUAWNXAOGQVUKYQYRBBIRKTIWXXBIGUHAZGDADARYDQSKMVLPSWBMEUROZZHTVSALFPEDPPAZPHFWGMKXUNJSCOESHJNCSIAMNCKLQYEFEFFJOGNTZNEMPQBPENMKXHHLICIHTVFENWIIXLBJGBOQWVCCLSVUGWHULRZFL");
    msg.flags = 59934U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8495452537198936;
    tmp_msg_0.lon = 0.6284575238303639;
    tmp_msg_0.alt = 0.8044946571005933;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LHONOVEUEZTSDGVNZIFTHLVHFKRGWHJIBKVNTTMSZSRGMTGCPDWYPWWBN");

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
    msg.setTimeStamp(0.5484297281182353);
    msg.setSource(32211U);
    msg.setSourceEntity(53U);
    msg.setDestination(50631U);
    msg.setDestinationEntity(153U);
    msg.type = 111U;
    msg.op = 70U;
    msg.request_id = 8075U;
    msg.plan_id.assign("AOVDGOVMYUDNFVBYQHGZOEVBVCAWJIAYKHZWVISYTRWOVEWXTFQAVDUMUARIYUNGCOHXJLDSYLLLIBHWVFCFPFHNDCEXNOMSNZXXJZCRTFBQKDPLHQUBITDPUHEWEFQZATOTRMS");
    msg.flags = 59768U;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 374006155U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PTCTDSCRQZUCUOJSPREMUYRFQHYZFDTNDPSGMCKLNALGZZIOGVIXQYMMTSLRJXLNUOBDTYQDYXHVLFSRPJZQMBVBITARXLHEURKIGTDRRXOLQENYCOEJ");

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
    msg.setTimeStamp(0.8925482480593876);
    msg.setSource(19923U);
    msg.setSourceEntity(178U);
    msg.setDestination(63967U);
    msg.setDestinationEntity(195U);
    msg.type = 113U;
    msg.op = 166U;
    msg.request_id = 21551U;
    msg.plan_id.assign("NWUOTCIBRNEDMZPWLRSYMHHGGRNFLFIVPXTRAAKLHWAJWFUSJTEBEUGXIWTVFFVNMHLBGSLQDLQRASQIGVAZDCZQAXMTOKNHYGOLYJWMZHFONKXBCRNTZVKPFKXYZYBRVYHSIDNRLJXXSTDKIO");
    msg.flags = 19381U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 46210U;
    tmp_msg_0.lat = 0.044664374450751776;
    tmp_msg_0.lon = 0.7019704369982958;
    tmp_msg_0.z = 0.011157885248822552;
    tmp_msg_0.z_units = 136U;
    tmp_msg_0.duration = 26584U;
    tmp_msg_0.speed = 0.5840398270644017;
    tmp_msg_0.speed_units = 164U;
    tmp_msg_0.type = 238U;
    tmp_msg_0.radius = 0.26480778486782597;
    tmp_msg_0.length = 0.7405953998184622;
    tmp_msg_0.bearing = 0.016468089532537533;
    tmp_msg_0.direction = 181U;
    tmp_msg_0.custom.assign("HTPNDZAWSKMBVTBGZROGACQJCFQLUBCJHQQDZNNLVLGGUPFSEZYIXSLREWDARMXLIUGZWHRHOWNTTMFHFOKKKNHEVELIITSYPLSDCVQKMCXVMBJANDEAOPCXNOUXXFWWTEJWUPDDOYULKKICVTJTUPFDHMXKTLIQBBJAFVGOOCYGISYQETYVZQMANNQJERXRVPZZAERCKLARXZGNBCDISSMFBMPGHHKFWQDIBSEUJVWYZJPWYBXSIHJYRMRUY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DHUTQNNTCUMXEJJKMDRGRAIPZXFQLOEEXDDCIBMBJYMNPADSYIXZHMVXVWQUKRGLKWJDVCHORVHBXRXRAFEKXBNCZLPFHTUEZAPGIRPDOSUQZYYCUBYGFRMPOJHXAVNFGREEIOTSIYPXETMFBUBNYLE");

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
    msg.setTimeStamp(0.20296450781897202);
    msg.setSource(20340U);
    msg.setSourceEntity(34U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(78U);
    msg.state = 124U;
    msg.plan_id.assign("TAYIWDVPPARKXSLHUCOXQOWJULKHQQWZMZGPSRYYYNFJCBITDBPRJDVBXPULKLWFSDXXSTCFEAXPEOUWOQGFQVXORARLEFVTJUXZNMJKKGBUGVRAGEDUFASMDECSUQB");
    msg.plan_eta = -644192974;
    msg.plan_progress = 0.42418844377987885;
    msg.man_id.assign("UJDOSPKPZQOZEOMITSJBOSDEBCJXBYFRNNDYRRJAXS");
    msg.man_type = 5975U;
    msg.man_eta = 914260466;
    msg.last_outcome = 199U;

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
    msg.setTimeStamp(0.0717671502574665);
    msg.setSource(34722U);
    msg.setSourceEntity(60U);
    msg.setDestination(65507U);
    msg.setDestinationEntity(58U);
    msg.state = 186U;
    msg.plan_id.assign("QYCPPVAABLPCZFWKCOMINPSOSBOFMGIEIFSQYOVKNDEDSYWLAKFRLSTQBHPTQNEQWRJDHECOJJTJEEZDUWSZERACLIBCPNYHQFNKHZXXUPOMDMBUTNHGKYHXHAVWAVGRBTHUTIZIACLDAOROZURTGJFUGWANKNJVGJLGUVICSRIXPCDWQEIKVZYUTPSJLFMWLXXZKNXYHRMBQYJYULRSRGHEGU");
    msg.plan_eta = -523166586;
    msg.plan_progress = 0.3441635738733717;
    msg.man_id.assign("BRZELNBLRZWJTLNWMCCKHFPJUCWIHNEVVUIMDMRQDBEPXDUDZSIWZSOLRSAOSZCGHFDHDXNJUTYKYXFVSTBTGFQSAKTZNMGEGIOPMUFQIXLCOCDEQTVXHOKQMOSCXXVPFDTZTGRJYYKPWHENXWFZNQAJQNPUB");
    msg.man_type = 31072U;
    msg.man_eta = -404861507;
    msg.last_outcome = 73U;

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
    msg.setTimeStamp(0.9333752697353631);
    msg.setSource(41907U);
    msg.setSourceEntity(142U);
    msg.setDestination(40482U);
    msg.setDestinationEntity(177U);
    msg.state = 185U;
    msg.plan_id.assign("UMCOMXRIAGEVIWCRATOLFJLIZGKNKBACJDIBMWPWMMGGDISZFULEDKAHXZIDCNERSPLAUSJNSXTYCSJXHISMZRUVXLTFFUQJQEYBGQIXPQVTRZPTLHGJYPVDJTWIRHNVETIHOZLXYSBLDWHOTYXUAQASGQXHYYKCPYQUAKSXOAKNWLHRUJBVETKTNNPDF");
    msg.plan_eta = 814134244;
    msg.plan_progress = 0.008837875601963474;
    msg.man_id.assign("NXFSQBRSQMBTECXEMUDMIWYAZPVAIVOXFJYQLTBUWNFKEOSQDGJZWCNBNGFQUPRDOXDODLVWAXZHRGPCOGNHZHLZCQGCSMKXOTKYTMJRUGYBGIKWDTSCGMZU");
    msg.man_type = 14535U;
    msg.man_eta = -176640911;
    msg.last_outcome = 145U;

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
    msg.setTimeStamp(0.43129199569921495);
    msg.setSource(40444U);
    msg.setSourceEntity(99U);
    msg.setDestination(46700U);
    msg.setDestinationEntity(5U);
    msg.name.assign("FXGFIWDVRHRWHBGKDMUKKRDEJABAAORYPRDUCVNOKLEZAYUUEGTZIBVJZ");
    msg.value.assign("NPLUEOZFKFBIHLECBYDLVEXTIQCGULDYGFKLYUVQHLPWQOIRWFEYSRGRGEOPADHZRUWKCXNJIQFVNTOCOXZHCAUOSWBNGVVMYANKKPTQBDIWVRDSTLHUSKDCADMXSQCLKZZMMHWWAJBHNJTGLOHUNRIZKIBPVERQGCPIRYJAAXHXTFNEBHOSMUXFNBXZQYQPQJTWMAVIACEEZP");
    msg.type = 157U;
    msg.access = 158U;

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
    msg.setTimeStamp(0.6577711827902829);
    msg.setSource(3473U);
    msg.setSourceEntity(155U);
    msg.setDestination(6496U);
    msg.setDestinationEntity(142U);
    msg.name.assign("TFYZQWIXXERTXAFFPDHVPPAZISKFBQUVSUIVDFURZOAWNHSKVQRDBELFNAAZUGBHNYVAUGELVVCTQIAERJFHFGRKCHMPUGJMPCJNLJSJISCNJGYDYJFGWLCBZKEBZYYPQRWKGAGLNBDNAGEKZETGWQLIQWKNOWXXSPUIRMOOQ");
    msg.value.assign("WTNSKRNBUSYIUVYPVDZUMZVOFHOYGPTRJDXTLBMJYJODULAVCYIAADRQWIIXFKUFUNKOARWHEESRRBMIDLOVRCC");
    msg.type = 215U;
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
    msg.setTimeStamp(0.5616886601564279);
    msg.setSource(9250U);
    msg.setSourceEntity(13U);
    msg.setDestination(23737U);
    msg.setDestinationEntity(30U);
    msg.name.assign("AAKMPUBUIMPEPDDFFRSX");
    msg.value.assign("AYIBSHOATPZLEPAZNXDWRGVJRNEYQCOJJOMKQALKCRMALUSYDRITWTNZHNTGGXZBANZZUWWMTRYYQKWOOHZCEHTIEKSIHGSNRVIIHFFRSYETBUUBLANGKQWVOPYLMGJCQFXXIAETYPVTUPGWKLUDDSZBAUGDYKXXGIKPLBEODXDWBFOVUCTAQRMCVFXLJUWCRBMDNFLPME");
    msg.type = 144U;
    msg.access = 109U;

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
    msg.setTimeStamp(0.39936103420841595);
    msg.setSource(6312U);
    msg.setSourceEntity(25U);
    msg.setDestination(35056U);
    msg.setDestinationEntity(122U);
    msg.cmd = 252U;
    msg.op = 241U;
    msg.plan_id.assign("PGNXGNTBKTKHHFJYNIUQYEQCWNYBIGZVLDWPACDKRQSRLRBOSDHCMCBZUZGKMASDDNQLXAWWNYPOZWKJVKHKUJHQETVUFFFEJFUHYOAKEEWZKYQFDMATOXMULJMXCVVDUIPZNHBUPC");
    msg.params.assign("YLZQVRNUYUYMYUEHKKSMCREFOVGALYQYMODABDQDUWGCMLWSBSMBXOTQJHIGBPWZUBAQHLPXVNBJLVURHITIZARNQHPWCFOZCLFXQUMKSLXFAEMWEQQHTRCDPCUBBSZVJDBFNRPXZINFIAJRKCXDTAVAYIMEJPMIID");

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
    msg.setTimeStamp(0.30264090043713177);
    msg.setSource(56620U);
    msg.setSourceEntity(77U);
    msg.setDestination(36679U);
    msg.setDestinationEntity(75U);
    msg.cmd = 151U;
    msg.op = 58U;
    msg.plan_id.assign("AZGHNNYLTAWFRGOKILLEXPAPOHDQSWXSQUMPOZXUTMYNAEYHLWBLTMCZMGRYSRPCQCBPJRLUMQYUFGFKYUYQXZCMEDJTVEWMDSIIUITGXKKTMZUMEZYGGKJHGIOJBXNSVREDBQOFUNMNWQACZVRHPODNGNVCQHAVKVABKRUSIROEPCDFADNUSVJRQITCWFPIXLBAOXDXP");
    msg.params.assign("CZTGNCYGYARGWQMICIYCAEFBTSNZAPFUTPXYY");

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
    msg.setTimeStamp(0.4277757001833774);
    msg.setSource(28196U);
    msg.setSourceEntity(66U);
    msg.setDestination(33280U);
    msg.setDestinationEntity(102U);
    msg.cmd = 247U;
    msg.op = 149U;
    msg.plan_id.assign("LTEQOKMZLPEYNHPWCHCFBUBAJGMKLCWAVLPXHPJZQUEEBQGIBOMETVYUFJWRGUFALXCURNSYLQCXXLDWDLNKGYI");
    msg.params.assign("KUFBKVSUKSNPUDKVSGFCEPARKGPQNWYMEJGXKBAGHDLECVTBSTEARTHLISZSGLGTDEGBXGDBBNOFIIROVUWICQRTEXUTKSCXKHNLQHWPOQQJTIALLVFILVAXAZPUJWQJDOGDKPKZJCVDGXYHRSMJTVPMA");

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
    msg.setTimeStamp(0.4113197545759051);
    msg.setSource(11653U);
    msg.setSourceEntity(149U);
    msg.setDestination(2668U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.36253819615332894;
    msg.lon = 0.3636710215449178;
    msg.depth = 0.5763047201305219;
    msg.roll = 0.07815185637174682;
    msg.pitch = 0.4931847448038794;
    msg.yaw = 0.8653756298584036;
    msg.rcp_time = 0.8147784763216074;
    msg.sid.assign("STLQRNQQENRNREAOSPWFMJGAQYDBOOCNLBYSVXFJGVSDWXGHFVDIVWGCIQLEYTCFKD");
    msg.s_type = 24U;

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
    msg.setTimeStamp(0.18724411739178515);
    msg.setSource(35178U);
    msg.setSourceEntity(202U);
    msg.setDestination(18687U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.937211953507745;
    msg.lon = 0.9124561826675603;
    msg.depth = 0.9556401942031378;
    msg.roll = 0.9866217538917015;
    msg.pitch = 0.031358031158548516;
    msg.yaw = 0.0422980730775151;
    msg.rcp_time = 0.34472280788814436;
    msg.sid.assign("MXKRWTKJYAIOYOORKGGBWZWPNATUCZLYAOCJFRQYHTEESPSCWOUEXRSCVWYTSFNKJFUPIQQRAVQDMGNPZEBQTGICALYYCLIIMDBRYQWSJVRPNDHMVCLXQLWHONFJRHLAVOUAQKMHNTSBDGZBPDUDSEEPZDXDBCTVMOMTPJEKHBAZTIEFBFHLLUGGSGOEWHWNIKBREGIZARXZTUUHYGPXYXUDXSBJKPKXFQNJJFJLZHCCAWVNFMLFQ");
    msg.s_type = 42U;

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
    msg.setTimeStamp(0.47212494901416924);
    msg.setSource(25449U);
    msg.setSourceEntity(69U);
    msg.setDestination(22543U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.5647688730641078;
    msg.lon = 0.1344833298115231;
    msg.depth = 0.15627429185230357;
    msg.roll = 0.4928527160136632;
    msg.pitch = 0.9773611686749347;
    msg.yaw = 0.028501458586058237;
    msg.rcp_time = 0.39481613009194105;
    msg.sid.assign("DYXMQKTUFAURAFMUWWUUYEXCGCGEC");
    msg.s_type = 2U;

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
    msg.setTimeStamp(0.2759846771802624);
    msg.setSource(34872U);
    msg.setSourceEntity(117U);
    msg.setDestination(57685U);
    msg.setDestinationEntity(119U);
    msg.id.assign("SLXNORNIZGQYJJVKNIDTFFXQZAMUXSILEBDVCGTKDRT");
    msg.sensor_class.assign("SWHKKRSMHYUKCNDNQQXYQURMKNSHYICXGEEMVSEHRDGQOWJELAJCUCAUARCTWLOLJOYOGXHODPRQNOZGTVONCDLIRRPIFQSLYMPQZBMYONVG");
    msg.lat = 0.983234436237747;
    msg.lon = 0.062411644303571046;
    msg.alt = 0.10977050105074726;
    msg.heading = 0.08990350342510933;
    msg.data.assign("LCZOMLDUPHPOKPLVCODYCCTYOALFIDAESYASJMZGADWUEOXPNUDLCMWVJHRFLTJHDUEAKYRIBUBEJXUYHZGZWWJFTTLSGZCBUBKQZROYRGSJNJGHRYQTANRXUGHRQCALXTBHMHCNCXBWSPEIQMEWDNTPZBIQIKNXVLPSMYVEQGIIFZTQWBJLUWKRNNNOWQTXBQEJVZRFSAAYQGWOIEACRMVSKSTOBP");

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
    msg.setTimeStamp(0.9164973943387054);
    msg.setSource(40264U);
    msg.setSourceEntity(184U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(113U);
    msg.id.assign("TEELPXLXHIKDSBBOILWDURZJNHFRXZFAPMEAOFJHIGSWEIABHQWMUKYCKQVTJNBZRWMYFHKPYHRNSOAWVKNGLBRZHXUVXZPSXXWJTTYGUHULLGEAFHEJNQKPTZRUJBZWSVQNSIXNBKGEBUCRAPPFQZNRQOCOYFYZMCOBTDIXVCJG");
    msg.sensor_class.assign("PZJNNOCNUDSWGVHZCZLWPEPVWHOOGXFDAEVPRIRMKHDZVILZSABXAQOISMUUTHCFMXAHESLIOJBQSZAKIDXQDHRDZHYVTLMSOFOKODAMNRXQYPBEXBCTMMGJJYWUSIQYYUGQNPFBSJZPGUIAKWFRAMHEAHQLTNTEKBOGZGKBYKXSWRICMPTVJVIMGYEJUSOWLICEUFDZGUCXCYFDFDRNRREQEKBP");
    msg.lat = 0.293156149600582;
    msg.lon = 0.17283917593866704;
    msg.alt = 0.024236422204788166;
    msg.heading = 0.21773042420633038;
    msg.data.assign("BKNQQHKPFYATGGAPRHQQLMSUFKCEIICDTXV");

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
    msg.setTimeStamp(0.10836401415476793);
    msg.setSource(64875U);
    msg.setSourceEntity(82U);
    msg.setDestination(30665U);
    msg.setDestinationEntity(254U);
    msg.id.assign("GUGDWUWLXHTTMGPYLCAXLUOGTBUFBUIZYJVCPSKOZRBGQXBDPCRBAVIAELWDIBYDJALFGLUTSBJXEJAZWZNHZOAQYJSKQJKXKGRTBBFCMIVKWWVHSEYKYPLGNAWJCFNQSMZCHLNOZUAMRRXKSNSHVHAHWOGPDRIDCVNOFIMMNMQDSQHXGBKVOFVXL");
    msg.sensor_class.assign("QBADQBLPVKHAYASTMSXAOODPQNFGMSWYUTBIRZEHGJWKRHIOYGTJQMCJXIUWAULEGJRBQXWEYEJASRLCUAIFQPDRJMKBZHHAILHKDVGYHXPFXGDOTDWIRWONVJFTPBSGHJKCANSSFLYDFUYBHIRSJVPIILZEOLVZCNZSGSTPRLLFPWKYXTWMZAFETOTUVNBOCJUNXYKLOVTNVHMDQQEZXDQCMNEZGXKNDKYKOWZCRMCCGVE");
    msg.lat = 0.8502407455453282;
    msg.lon = 0.6022690867341773;
    msg.alt = 0.2681069461897334;
    msg.heading = 0.057939933169558144;
    msg.data.assign("ALDPQUXBYAVVVCRTNEYRHSHOTEKYKMECRYJMBZUGSWBJIJKKXQKAPDMLMBTQSOFHGRMBEAWKAJFDOJMXTFKIPLVXZUEHULYTDCPTAJTMWKISGZBXMMGOPLJPIRTFXICSVXYJNFAACRWZJKCPZUZQLAHCWFQEOYBURQIBDQHWWNSPGIUZMGDLNPNDLQOFVNQZOUSVSFTOIFCINERXBPFDWNHRI");

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
    msg.setTimeStamp(0.9501939048847029);
    msg.setSource(25458U);
    msg.setSourceEntity(12U);
    msg.setDestination(51325U);
    msg.setDestinationEntity(250U);
    msg.id.assign("XEBTOOIUFPDLYICVGVILLJHYUNIYGRKYMTGLNNGZENJXJGYYWGKJQCAZYHZEGDDPIFJDIEHK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CORGZWNGRZCSADWSBODDJSIFMBEEANBKCJUGPMUKEMPPKJLQYLAHRIXJESQZQWHNFVBMGKYRSBVNWDDWJQIDLUTBWUUNLCHGANAQFFOFFYVLXYXRYLWVEIFPULHCXCVJTEMTMRWBPGJRHNKNUTHQTAJVAYLVFGQFAHTVRXCZDOVUAOCZSNSQMSXRPEZQMILVOPZIYNIGDWSMGIDOJKZXBYHTEROUYKOKHIBZHUXMICQFAXTW");
    tmp_msg_0.feature_type = 12U;
    tmp_msg_0.rgb_red = 163U;
    tmp_msg_0.rgb_green = 59U;
    tmp_msg_0.rgb_blue = 141U;
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
    msg.setTimeStamp(0.3420415038370265);
    msg.setSource(61481U);
    msg.setSourceEntity(54U);
    msg.setDestination(55384U);
    msg.setDestinationEntity(195U);
    msg.id.assign("CRRHAMCFQZFAYOVCFAEOEMRITHPJCFZNWMQDIDKMYRSIZLZOGGKCAWIEGWTUSPTYGUSCLUGLNYUHJIGKUYPBBOYYEXRBXMHEUQOJINATDBJZFMJVBRLLSTNEWSNVLWYEAAYPJTOQ");

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
    msg.setTimeStamp(0.1427233399590706);
    msg.setSource(20405U);
    msg.setSourceEntity(60U);
    msg.setDestination(17682U);
    msg.setDestinationEntity(79U);
    msg.id.assign("JCGPWGDTZBFOLSHVNYPAQTZOWYNBAQDEZHNTMCCYDAXFPSAYWGQPHXBMJTBWIAQMIGVQCHF");

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
    msg.setTimeStamp(0.8241677695340611);
    msg.setSource(23946U);
    msg.setSourceEntity(247U);
    msg.setDestination(44200U);
    msg.setDestinationEntity(105U);
    msg.id.assign("GMHNCXEBYAPZILGQXBZYJLATBUNVSTF");
    msg.feature_type = 38U;
    msg.rgb_red = 249U;
    msg.rgb_green = 239U;
    msg.rgb_blue = 142U;

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
    msg.setTimeStamp(0.5721064797024191);
    msg.setSource(20023U);
    msg.setSourceEntity(176U);
    msg.setDestination(38U);
    msg.setDestinationEntity(134U);
    msg.id.assign("WLYZNOUHLYVAKXNLBRFOEEDQYIZGMXBUQGFGAWLSMIBGIVJCNTVLCSDCNHPIFBRFAKWHMRNKERLQBKGQUFMMJPOLEJRAYRQZDTY");
    msg.feature_type = 194U;
    msg.rgb_red = 153U;
    msg.rgb_green = 86U;
    msg.rgb_blue = 108U;

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
    msg.setTimeStamp(0.2402027055426007);
    msg.setSource(11187U);
    msg.setSourceEntity(191U);
    msg.setDestination(46235U);
    msg.setDestinationEntity(77U);
    msg.id.assign("UMXEDHJEIHRFCIDDICGVHKRJMDKIZTVTWKCXMZGCRENYQUYWZUNLFROMAYPTZXSGAELVNYLMRKQOCEHOKTFQOHQOM");
    msg.feature_type = 134U;
    msg.rgb_red = 177U;
    msg.rgb_green = 161U;
    msg.rgb_blue = 235U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3194019974415411;
    tmp_msg_0.lon = 0.6828630424455397;
    tmp_msg_0.alt = 0.23804010725034785;
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
    msg.setTimeStamp(0.07356891320195713);
    msg.setSource(61340U);
    msg.setSourceEntity(133U);
    msg.setDestination(1697U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.7270980010840611;
    msg.lon = 0.1644943042860152;
    msg.alt = 0.9342379003443312;

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
    msg.setTimeStamp(0.8967920142490095);
    msg.setSource(19416U);
    msg.setSourceEntity(4U);
    msg.setDestination(50919U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.01262053653024564;
    msg.lon = 0.3304106638360105;
    msg.alt = 0.7137678171696208;

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
    msg.setTimeStamp(0.4001696240705672);
    msg.setSource(392U);
    msg.setSourceEntity(34U);
    msg.setDestination(48907U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.7690607129468555;
    msg.lon = 0.5595681797169255;
    msg.alt = 0.4268654908344066;

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
    msg.setTimeStamp(0.4990073898303815);
    msg.setSource(29349U);
    msg.setSourceEntity(6U);
    msg.setDestination(35427U);
    msg.setDestinationEntity(202U);
    msg.type = 33U;
    msg.id.assign("NCXKAAGKMNLFGMOFMTBWAERCUBTRCBNNDLVSFNVSGOHSYAGXVXBROJLXUIUKEQTXVWCENYVIQZBGEQDASJGWKFYZPWBQJMNABQBHGWFZDLYRIGPTTZFQOUNXJAPDIFXVSIOOOSDLZCHWJBFSHD");
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.41956048429885107);
    msg.setSource(828U);
    msg.setSourceEntity(233U);
    msg.setDestination(527U);
    msg.setDestinationEntity(145U);
    msg.type = 67U;
    msg.id.assign("SKFPWPRYQBMGONJZQAOSWYHVDTFQXLKVIZQNUCWHERRZVLOXWGQZFEVDHCGUJEISARCNVHZOUGMDMPKLPCLDEMCPXLPSERSXABOGYVANGOGOBWUQJLQLTQMHTUXTFZDJFWNLGENKEYBVCRAFYJCTZSO");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 3031860909U;
    tmp_msg_0.state = 118U;
    tmp_msg_0.error.assign("PYCNIBRGPTCARDIUBPZVCFQTHCOZHMAHTWWRFCNKQZWDEGXVSVYJBZGSJHWRBELFNERWSGOYQPDNNUXYSIBFQRESEUYHSUIKZNTWVXJQPVOABXKGCDKCDFUVFTIQZVUNQHDWTTKSMEIGZTMRXYMEUHAKOPAVSJZLYFPZMRHLMMDDMUTOJOQARIGA");
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
    msg.setTimeStamp(0.5235936593597876);
    msg.setSource(36248U);
    msg.setSourceEntity(122U);
    msg.setDestination(32738U);
    msg.setDestinationEntity(244U);
    msg.type = 146U;
    msg.id.assign("UFMJQEPMXHWRHLRTRXCKGEGMQJFXORSKIKDNEGHPJSSQRDUHAMZZCSECFDKRYUCBWSUQRBNMEFSLWYCAWGHBENYPOLZZNVTSPTURJIYHYQJQWMVIEOAVIDDACIBLKZKGOYTKYOPTNWDAKKXDTJBBLPFYFZKXBWOLOQFVJTISFUOVGYHCFIJLIVLZZIXUNQ");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AFBKNBUWCONEUVJARYTTLXKWSCUPJVLBRIGNMJVSEMFYJQAGMJAQFHTXWYNGFSRQLSEDPOHQINTRGNGYDVADTYBCYALXMMZHFGLIJYOHPZOKERHFOQJPLJTKEIVVDSCLXDKDVOZNBCVSXKITYECGOHRPWLPUZIQEVDPSNFOMFPQNTXZABLSJCECZTBDEGHZUTNIIAZDYYAGSZQPFCHBPKEBG");
    tmp_msg_0.lat = 0.8024193184390346;
    tmp_msg_0.lon = 0.47166598435686813;
    tmp_msg_0.depth = 0.4567136077611613;
    tmp_msg_0.query_channel = 36U;
    tmp_msg_0.reply_channel = 54U;
    tmp_msg_0.transponder_delay = 1U;
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
    msg.setTimeStamp(0.1627445410977706);
    msg.setSource(1118U);
    msg.setSourceEntity(103U);
    msg.setDestination(9998U);
    msg.setDestinationEntity(248U);
    msg.localname.assign("PRPBPBZHDWYWIFLZKNFNBNMUYNTLTKFUEFYVEAGGPGSIHRQXVQMINQJUVGKGNQODIOUELHCOKYSSQUSMDPENMEWSJGYTSXCSJWDXPCGBYOXXYQAULHLXBCYMTZTFKBTUQPNASBTOBKUGHSERLDRDLAVVYREXCWPKCHEOKBIRWHZSAJ");

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
    msg.setTimeStamp(0.7248115756620473);
    msg.setSource(62076U);
    msg.setSourceEntity(114U);
    msg.setDestination(44514U);
    msg.setDestinationEntity(215U);
    msg.localname.assign("OSCUMYYWIIVDQXRYQSLYBJREOQZMPQFLBOUVENUNHXOCVIWDFCACTWVMWAXVADQEAPLBWDZVITFEPFEWEHNAGRZIPMAGJPDHGBOZLKVHFPDNLXLZCKWIRSVFIMQUZOBJRYPXQHCNJPUXBA");

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
    msg.setTimeStamp(0.5915786064927457);
    msg.setSource(25543U);
    msg.setSourceEntity(84U);
    msg.setDestination(54181U);
    msg.setDestinationEntity(252U);
    msg.localname.assign("ESBBPMHOODPRASRFXECGUQKAJVQVMDIQPBDAPVGCNZUAYYGTMXMRPIUCYCRLFFJUZZBDTRUYEWHLAJSVZJKBPRJQJVQTWFMFOHZHLOOAJINDDDFMWRLHQIWZWOYKNPSCZFSKSPYTJQCTDNSLSVAHHHPNKIVXHNWZNXTEZDHU");

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
    msg.setTimeStamp(0.6528739236061063);
    msg.setSource(31855U);
    msg.setSourceEntity(30U);
    msg.setDestination(28333U);
    msg.setDestinationEntity(204U);
    msg.timeline.assign("HRLXEJFTDDGYRVJKJKNHOUSJKJSYGGYHPZJLZZSWBPUZPCYJCISCXQMXCHDKLZRAQMYHKFZEIIDUERGMENIMWZQWIOHATWUTMAUNKEOFVARXGMDGAQVTETEWDRLXBIIPQGFJFWVNGBCTSIUFOWXDVSFFHVOOMJZBGLIBVDQ");
    msg.predicate.assign("XJDREAKGQDFFVCMUEVQCNTVPAGVWZUPFECRKSMEI");
    msg.attributes.assign("EUBKEEIDRRHBGOQSMYQBKOBPGEAIPYZFLDARQLKTWRBTNZHEIUWGCCFFZNABUBTTXLCPZSLZLEMNYRFEWFDQVKUQUJCQYXMBPEOPYMDWNCGPJWOWECGKNIGPCKDLUTRJSMXHOHDISDMGZJYTMNVVBFXQPINYBIYFTHWOAUUUVRDZGPJHKSSVXXWDQAXJSVSCWCIPATKLLNJTFHKDVZKXOAONVLRJMQVGYSWHIIOAJTFXFRYHMEXZOAQHSZM");

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
    msg.setTimeStamp(0.24223245907393676);
    msg.setSource(58441U);
    msg.setSourceEntity(237U);
    msg.setDestination(46529U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("OPIOBDMGHHPYHPVNLISVZLECWWGHEXXZPOKMUJOESHOYUFJQFMGPRVCDRJVCWLQIRQHRRSABKXSZSJJDDWCAYWJUGTDZNTZMAMAQUWNZQYNBKYTDOTLETLFGLZRUDCMQLYAMBMUNXBQPTAQHGUYSVYYGPKBSQWNSUZRHVONWHKKKBNYAFZFEVKPCEWJLXLRCEEKEPDCGFTAOVKDHVRNENLISIIR");
    msg.predicate.assign("AAMPHQLYEWLOQISXOZGJHDKUWQRYHDAQFXLDTWSYOBEZCWUFKDHUCMMFRPXOKIEVPYFGTODFZHSBWVBUQJFBWQDHJAMIFGNULPCMJKFPHZMIBDKRKENLHXLZOEAVOOMEGOJYIZNTNVZQEKRRDXYTH");
    msg.attributes.assign("PPQVXRUTBBOYIRNADQTVOSZEFSYFWRNCYIECMWRXJGWRMUHOVNTIXTWOMDFHRTQPBGTJLMHMWIKXMPFODCKIGUNYDHXKQCWWFLYNY");

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
    msg.setTimeStamp(0.7864555823091547);
    msg.setSource(54943U);
    msg.setSourceEntity(110U);
    msg.setDestination(22973U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("KYMMSJPRZUHEEEUIXUKUM");
    msg.predicate.assign("UIUEBSGMBFCPLSOR");
    msg.attributes.assign("PVNPICKVQKBRAJWFDYQFAGUSOUBICCTGJXKGTHYOGUPTROQHPUGVYEFJMBUOLFHVFYGINSZETZJVGNTEGZTTXRQDKMWXLZBLSXDZEAKRSXXNICUSBFTPHZC");

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
    msg.setTimeStamp(0.27543768452075434);
    msg.setSource(17230U);
    msg.setSourceEntity(79U);
    msg.setDestination(30824U);
    msg.setDestinationEntity(235U);
    msg.command = 157U;
    msg.goal_id.assign("FZHVHCDIAHJARTZPJDNUUTOAUCCMVULXXJOSYJUZUGEYKZAYTNXKIMOLYIABNBDZUGMRXHFUGWIRMYNCZGBIKWIYEEQLHKOQSTFXZESWCIKJGYJPGDEIZQKDRELJPVIQZCJQHLSYHCSAMFLCNDQYHTVRGPDLBCSOMTBHGFXSZOFQPEKBWXWTTWSMRSFDDMVABMKVGVPXUEKWSONENVWUQBCLVHOFIPGL");
    msg.goal_xml.assign("ESSEHXEPCIQDZJNWLDRTQMCYNGMAMPYZGBDJMYVCNUIFGFKUBZWFUIEBOUCDOSJBTMVJUVTNDPSLHSFDRNSWKWIHEYTKEOVICG");

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
    msg.setTimeStamp(0.21151223258497232);
    msg.setSource(49391U);
    msg.setSourceEntity(240U);
    msg.setDestination(51260U);
    msg.setDestinationEntity(249U);
    msg.command = 134U;
    msg.goal_id.assign("RYVEPUGQVVCEPHHCUTPRWGSMUMCXKMTSPZXY");
    msg.goal_xml.assign("KGCMGCEEXSEFFGYDTXZBAVWCIDRJGION");

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
    msg.setTimeStamp(0.8621924196736616);
    msg.setSource(55488U);
    msg.setSourceEntity(41U);
    msg.setDestination(35912U);
    msg.setDestinationEntity(235U);
    msg.command = 52U;
    msg.goal_id.assign("AJBIKHEAWHIZQISJUEVRSXFYNEZMGBRKXGNZQWLBAPRTIYIZFQUSVKGJXYLUIFQSKXVOXSLSARAJDBAVYSUUQBWUZPCDAHXFMDPHKNWNMUFNWUDPVGWGSZKPSHYCUEKXJTYTWEMVVVFRJCDFETBRWFIXMPTARAMGERLQPJLNZFINDCGQOYITNROCPEYTEZCPORWZLJNPQUTS");
    msg.goal_xml.assign("HCXKDFSMMEDCTZHJHWIPBDUVBVLVTEKFMNJEBPDAQRAZYNLDAXNAZHOOTUKTXHQREPPAJICWUYPDSUVRWDIWXHPJDJBCFFEMMSJGNLXAUYAEHLOIQCOAUZMOBQIYVKMSNYNGILOISCXHZGMBGLJVUWCUWWTKLMSNQKRLQRRRGFOFUOTPMHQTCZYNPWXVBIEKPVBQOJSYBJWSNSEBYFFEFAKERKYVHZTGZVGILC");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.4804558124789454);
    msg.setSource(60724U);
    msg.setSourceEntity(143U);
    msg.setDestination(51122U);
    msg.setDestinationEntity(245U);
    msg.id = 55U;
    msg.width = 62492U;
    msg.height = 20704U;
    msg.widthstep = 46376U;
    msg.channels = 12U;
    msg.depth = 142U;
    msg.finaldata = 93U;
    const char tmp_msg_0[] = {-126, 65, 54, -85, -64, -59, 99, -109, 107, 89, 99, -20, -92, 40, -36, 21, 26, -93, 100, 78, 53, -99, -22, -80, -30, -19, -17, -21, 90, -121, -117, -10, -81, -9, -56, 50, -57, 0, -87, 86, 119, -55, 35, 82, -3, -13, 54, -68, -51, -99, -101, 121, -19, -14, -123, -106, 20, 2, -34, 121, -29, -73, -32, -37, -126, -103, -48, -104, -23, -79, -112, 52, 64, -77, -119, -110, 3, 81, 79, 91, -14, 49, 7, 84, 55, -115, -30, 62, -5, -2, -79, -3, -50, 98, -55, 111, 24};
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
    msg.setTimeStamp(0.6468949608216495);
    msg.setSource(61336U);
    msg.setSourceEntity(3U);
    msg.setDestination(55472U);
    msg.setDestinationEntity(200U);
    msg.id = 82U;
    msg.width = 59318U;
    msg.height = 20823U;
    msg.widthstep = 39936U;
    msg.channels = 204U;
    msg.depth = 127U;
    msg.finaldata = 227U;
    const char tmp_msg_0[] = {-18, -55, 113, 16, 103, 79, 72, 10, 89, -21, -60, -61, 47, 83, 90, 33, 43, -19, 103, -41, -2, -11, 111, -63, 3, 120, -62, 123, -61, -35, -23, -22, 47, -44, 15, 78, -67, 26, 120, -22, -7, -11, 4, 19, -34, -57, -124, 32, -6, 52, -52, 48, 29, 7, -125};
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
    msg.setTimeStamp(0.9124720967205708);
    msg.setSource(24318U);
    msg.setSourceEntity(187U);
    msg.setDestination(22951U);
    msg.setDestinationEntity(222U);
    msg.id = 116U;
    msg.width = 48312U;
    msg.height = 5638U;
    msg.widthstep = 54977U;
    msg.channels = 130U;
    msg.depth = 104U;
    msg.finaldata = 15U;
    const char tmp_msg_0[] = {-9, -101, 81, 80, 89, 108, 32, 54, 72, 91, 37, -114, -89, 94, 64, -12, -77, 68, -55, 6, -72, 63, -73, 54, 70, 64, 95, -99, -27, -81, -127, -33, 66, 48, -4, -102, 65, 104, -81, 45, 124, -9, 61, -94, -111, 100, -80, 60, -31, -19, 102, -36, 83, 107, 13, 113, 60, 65, 19, -40, 108, -97, -98, 57, -101, -1, 88, 55, -39, -94, -101, -127, 49, -89, -8, -25, 56, -47, 10, 32, 48, -35, -13, -85, -42, 121, 107, -87, -124, 14, -69, -17, -117, -99, 52, -104, -84, -119, 111, 67, -98, 17, 78, 49, -69, -94, 115, -4, 29, 28, -121, -98, 38, 83, -55, -126, -115, 5, -52, -62, 85, -96, -72, 4, 20, 73, 51, 118, 51, 81, 54, -34, 122, -102, 35, -82, 6, 72, 80, -107, -26, -18, 6, -23, -58, -90};
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
    msg.setTimeStamp(0.7438893086420507);
    msg.setSource(30553U);
    msg.setSourceEntity(246U);
    msg.setDestination(25755U);
    msg.setDestinationEntity(64U);
    msg.width = 60699U;
    msg.height = 37294U;
    msg.channels = 50U;
    msg.depth = 164U;
    const char tmp_msg_0[] = {-26, -115, -27, -34, 3, 46, 99, -68, 32, -65, -67, 28, 48, -79, -37, 101, 91, -119, 26, -97, 90, 25, -57, 72, -30, 102, -82, 93, -127, 35, 111, -10, -48, -74, -81, 108, 22, 24, -77, 14, 98, 93, 81, 87, 69, 117, 68, -95, -63, 13, -78, -90, 49, -115, -37, -41, 104, 99, 106, -31, 79, 86, -126, -102, -45, -83, 115, 60, -78, -41, 13, -90};
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
    msg.setTimeStamp(0.6710293798669424);
    msg.setSource(38340U);
    msg.setSourceEntity(100U);
    msg.setDestination(17844U);
    msg.setDestinationEntity(69U);
    msg.width = 5342U;
    msg.height = 14558U;
    msg.channels = 201U;
    msg.depth = 68U;
    const char tmp_msg_0[] = {57, -60, 66, -10, -87, 106, -115, -37, -13, 103, 94, -80, 45, -54, -73, 65, -71, 50, -28, -77, 2, 11, -84, -80, -79, -47, 124, -125, -103, 96, 59, 3, -63, -97, 85, 15, 29, -61, -63, -107, -76, -27, 36, -60, 67, 33, 125, -56, -51, -53, 5, 103, 109, 39, 94, -87, 45, -79, -2, -7, -31, 34, -124, -89, 9, 109, -106, 50, 10, 110, 50, 73, 108, 110, -112, -11, -4, 53, 75, -113, -82, 32, -72, -127, 63, -37, 65, 20, 89, -20, -108, -78, 56, -16, 11, 79, 50, -97, -93, -8, 50, 37, 64, -25, 51, -115, -123, -123, 51, -33, -57, 91, -95, -71, 123, 54, 3, 27, -116, -108, 21, -76, -38, -11, -121, 62, 115, 81, 0, 109, 49, 26, 91, -13, -6, -104, 15, 0, -47, -67, 55, 68, 107, -39, -20, 112, 11, -8, 4, -54, 102, -123, 63, 105, 106, 35, -64, -68, -78, -2, 10, 19};
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
    msg.setTimeStamp(0.6273709289540865);
    msg.setSource(52766U);
    msg.setSourceEntity(218U);
    msg.setDestination(4121U);
    msg.setDestinationEntity(161U);
    msg.width = 6416U;
    msg.height = 29414U;
    msg.channels = 116U;
    msg.depth = 191U;
    const char tmp_msg_0[] = {-78, -88, 42, 93, -108, 114, -109, -126, 39, 52, -48, 34, 15, 96, -45, -24, 29, 74, 49, -69, -95, 111, -125, 100, -47, 40, 45, 116, -107, -79, -80, 64, -71, -104, 109, -44, -46, -111, -25, 30, 35, 121, 61, -10, -115, -38, -64, 31, -55, 50, 97, 40, -61, 52, 67, -62, 4, -85, 26, 13, -81, -121, 53, 34, 7, 60, -25, 117, -17, -77, -20, 81, 70, -29, -113, -46, -87, -29, -39, 12, -94, -20, 31, 109, -15, -18, 41, 58, -74, 109, 37, 59, 57, -51, -118, 73, 12, 107, 39, 125, -41, -1, 42, 75, 107, 126, 51, -66, -67, 15, 61, 5, 107, 126, -77, 62, -103, 25};
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
    msg.setTimeStamp(0.18630923011138611);
    msg.setSource(48827U);
    msg.setSourceEntity(29U);
    msg.setDestination(45329U);
    msg.setDestinationEntity(158U);
    msg.frameid = 152U;
    const char tmp_msg_0[] = {-9, 14, -9, -45, 76, 2, 30, 54, 75, -81, -113, 83, 20, -64, -67, -106, 12, -51, 30, 125, -94, -86, -82, -40, -88, 40, 75, -115, -72, 105, -60, 39, 23, -102, 121, 13, -47, -124, 41, -16, -84, -32, -38, -50, 10, 10, -117, 25, -106, -39, 21, -60, 93, -87, -121, 96, -79, 114, 33, 3, -2, -1, -22, -118, 92, -112, -11, 31, 92, 111, 101, -95, -81, 7, 90, -118, -118, 7, -114, -87, 12, -85, -126, -91, 121, 70, 49, 66, 76, 4, -19, 113, 68, -29, 54, 61, 14, -69, -42, 80};
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
    msg.setTimeStamp(0.5480857848167925);
    msg.setSource(25917U);
    msg.setSourceEntity(51U);
    msg.setDestination(19033U);
    msg.setDestinationEntity(11U);
    msg.frameid = 0U;
    const char tmp_msg_0[] = {-107, -98, 93, -35, 56, -112, -7, 4, 89, 46, -35, 37, 6, -62, 59, -104, 1, -35, -92, -117, -122, -61, -96, -80, -83, -92, -20, -52, -117, -63, -16, -28, 26, 121, 2, 2, -63, 123, -28, 89, -106, 72, -87, 124, 21, -22, 37, -37, -88, 30, -110, 95, 32, 26, -115, -69, 112, 30, -107, 3, -104, -105, 48, -113, 5, 95, -33, 38, 56, 3, 88, -95, -101, -63, 6, -106, 120, -34, -96, 56, -73, -70, -77, -10, -11, 84, -115, 23, 20, -18, -74, -119, -59, -51, -65, -118, 12, 43, -5, 63, 34, 69, -7, -59, -60, -15, 90, -117, -67, 38, 71, -18, 53, 24, -35, 88, -114, 57, 78, 56, 42, -52, 11, -63, -94, 46, -103, 80, 39, 62, 84, 45, -123, -12, -7, 4, -126, 8, 30, 88, -86, -87, -89, -76, -127, -125, 33, -121, -7, 0, 76, 92, 43, 63, -46, -82, 117, -32, 13, 4, -39, 61, 13, -60, -27, -19, 54, 101, 30, 103, 81, 64, -6, -119, -43, -108, 99, 36, 22, -2, 7, -63, 107, 13, -72, -92, 117, 21, 27, 76, 62, 69, 97, -7, -12, -64, -43, -17, 71, 114, 80, 51, -64, 42, -49, 114, -1, 15, -7, -124, 87, -116, 48, 64, 89, -78, 66, -12, -52};
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
    msg.setTimeStamp(0.5356468945132834);
    msg.setSource(50120U);
    msg.setSourceEntity(160U);
    msg.setDestination(29185U);
    msg.setDestinationEntity(63U);
    msg.frameid = 194U;
    const char tmp_msg_0[] = {-112, 42, 16, 79, 6, -75, -66, -21, -1, 12, -1, 126, -107, 38, -79, -57, -56, 19, -56, -104, -31, 91, -116, 87, 29, 117, 114, 100, -66, -115, -13, -12, -63, 28, -14, 87, -59, 72, 18, 72, -7, -95, 62, 15, -52, -38, 74, -34, 8, 15, -24, -8, -31, -102, 2, -123, 104, -110, -65, -21, 63, 110, -40, -39, -78, -45, -76, -4, 36, 1, -8, -120, 93, -79, 107, -3, 66, -120, 47, 6, -126, -122, -100, 32, 53, 85, -31, 33, -14, -26, 3, 107, -69, 2, 95, -58, 82, -62, 84, -23, -1, -7, 86, 70, -10, 48, -49, 114, 82, 96, -88, -14, 120, -108, 75, 63, -68, -102, -94, -9, -31, 44, 49, -120, -84, 87, -16, 9, -47, -95, 41, -123, -53, 20, 100, -108, -90, 8, 116, -52, -83, 17, 121, -93, -52, -15, -51, -86, -114, -19, 73, 61, 94, -108, 35, -92, -59, -40, -109, -95, 1, -99, -74, 14, 120, 57, -59, 54, -47, -58, 55, -27, 18, -84, -59, 68, 52, 108, -97, -93, -96, 94, -78, -42, 88, 44, 68, -31, 104, -62, 106, 49, 122, 4, 112, 66, -96, 10, -74, -37, -94, -120, 86, -71, 3, -77, 93, -91, -2, 102, 19, 126, -25, 86, -60, -32, -67, 4, 72, -16, -91, -43, -123, 25, 16, 65, -15, 71, 47, 44, -42, -24, -42, -90};
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
    msg.setTimeStamp(0.07399825699465579);
    msg.setSource(44154U);
    msg.setSourceEntity(61U);
    msg.setDestination(40916U);
    msg.setDestinationEntity(175U);
    msg.fps = 118U;
    msg.quality = 37U;
    msg.reps = 19U;
    msg.tsize = 253U;

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
    msg.setTimeStamp(0.27706041600312603);
    msg.setSource(37649U);
    msg.setSourceEntity(39U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(21U);
    msg.fps = 103U;
    msg.quality = 230U;
    msg.reps = 132U;
    msg.tsize = 215U;

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
    msg.setTimeStamp(0.40609661100465533);
    msg.setSource(12429U);
    msg.setSourceEntity(143U);
    msg.setDestination(12788U);
    msg.setDestinationEntity(15U);
    msg.fps = 35U;
    msg.quality = 172U;
    msg.reps = 223U;
    msg.tsize = 94U;

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
    msg.setTimeStamp(0.33924361355124466);
    msg.setSource(29406U);
    msg.setSourceEntity(137U);
    msg.setDestination(17245U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.3653018064515533;
    msg.lon = 0.3003163641229539;
    msg.depth = 64U;
    msg.speed = 0.308385473463585;
    msg.psi = 0.13899366344140374;

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
    msg.setTimeStamp(0.12282566505766856);
    msg.setSource(37648U);
    msg.setSourceEntity(192U);
    msg.setDestination(20453U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.2596695234873714;
    msg.lon = 0.9447417897203897;
    msg.depth = 2U;
    msg.speed = 0.3719070280941572;
    msg.psi = 0.9144391263273135;

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
    msg.setTimeStamp(0.05512771989305698);
    msg.setSource(46049U);
    msg.setSourceEntity(213U);
    msg.setDestination(56937U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.4659069187346655;
    msg.lon = 0.6544836512801252;
    msg.depth = 63U;
    msg.speed = 0.09551259067328033;
    msg.psi = 0.6433726987495453;

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
    msg.setTimeStamp(0.2609032394722537);
    msg.setSource(50757U);
    msg.setSourceEntity(202U);
    msg.setDestination(59079U);
    msg.setDestinationEntity(83U);
    msg.label.assign("ICRIGJNTEDWJY");
    msg.lat = 0.8129711491410591;
    msg.lon = 0.8908202959864259;
    msg.z = 0.36024620402676943;
    msg.z_units = 182U;
    msg.cog = 0.7950385009655719;
    msg.sog = 0.8601530925745164;

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
    msg.setTimeStamp(0.8234526299419493);
    msg.setSource(26619U);
    msg.setSourceEntity(236U);
    msg.setDestination(1299U);
    msg.setDestinationEntity(23U);
    msg.label.assign("IYTCJUHCHRBDZMXJNOGRKGDOPWBLAOLKBNESQPKGXHLUDPNGCJMNINVQHNKNSZGMFWYZWVLQLQXYGLVSISOUKRQAHHPZXXFIUUSYIGXHJVEEEACTRJSZCBFKMYVBOVTRXPTASOCVMVZERIPMIFUPDWBYCHBLGTDPKTXDCNFYMTUDQIBEWWKWYAWSEAUUEZ");
    msg.lat = 0.17777261642207298;
    msg.lon = 0.8796079512009084;
    msg.z = 0.14124745118545667;
    msg.z_units = 205U;
    msg.cog = 0.3437711490776265;
    msg.sog = 0.03479258583630174;

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
    msg.setTimeStamp(0.10796323768220817);
    msg.setSource(3116U);
    msg.setSourceEntity(88U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(107U);
    msg.label.assign("CQLCYJNHNVHVAWODKYVZHFANOUVBQHCQZGWWXXIV");
    msg.lat = 0.009365607036170176;
    msg.lon = 0.7597021581677568;
    msg.z = 0.5253153962141184;
    msg.z_units = 1U;
    msg.cog = 0.7116684784186648;
    msg.sog = 0.4858492872203073;

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
    msg.setTimeStamp(0.5621865580601594);
    msg.setSource(15459U);
    msg.setSourceEntity(14U);
    msg.setDestination(12685U);
    msg.setDestinationEntity(105U);
    msg.name.assign("NJFWRAZQIHGQKHUKGVENUYSVACKDDTOEDUVECEPVIOGSU");
    msg.value.assign("WLNEMCSDODKQIGDMHAEHCJTHUNXKGBBAYKGQEVDPXPTXWNVGMAJQYWYSPVMHICPNXAEQLFLBKLGRTUFSDUOVHCJFRUBWTJHMHIOIYDZSFNREIEIKYVAYLOYRAMW");

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
    msg.setTimeStamp(0.8680228939949904);
    msg.setSource(20322U);
    msg.setSourceEntity(242U);
    msg.setDestination(41530U);
    msg.setDestinationEntity(23U);
    msg.name.assign("AKFCWKXNYMFZJDQJTIZPDLBRPCHBMGXSYAVTKJKQZLFIJCOHSXWWFEYXTVRWLHRXCODANRFCRLRLBTWYNUZLBJNHZVJGVUEKCNJSQCDR");
    msg.value.assign("PAADKOQLXABKOHPYZSVQJTTFCGIJLOCHHJWZJCNPDGWLHIHWBVZBXRWWDXUMBYCMHKAYCRSGTKXQSQSJPEITYFVXXTLJQOYHDRAFMBUZRPINTNTWIQYYBMGGKUVFYXOFTIPIKGEBRNDOQSMEDICZZFVJXFETSYKANLZUGAJJOGXGUMHWCXKLDNPYBCELVCUNGTFMSIUFSMFOBNOWVUQWLDVPDERNSROK");

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
    msg.setTimeStamp(0.07489523073575899);
    msg.setSource(28389U);
    msg.setSourceEntity(197U);
    msg.setDestination(26535U);
    msg.setDestinationEntity(155U);
    msg.name.assign("WHYAIROCNQQNS");
    msg.value.assign("HGSHRIKEBLFZPNWWWAPRJGLZRTQBEODGZQHVCVEARZLOBFAGYVMZPYLBAWBOCZWMQUMHDZYAPDTXXNQXSDKACTZHIOXMOCSNWAOESYAGVEJTYNKOFVTHSXYHSGTCBWIDIFYJDPWRPUNFVNTUXKFKFCXMBLPICJYDUEKIXYZCBMDLAJYH");

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
    msg.setTimeStamp(0.5497326239743728);
    msg.setSource(10405U);
    msg.setSourceEntity(51U);
    msg.setDestination(58460U);
    msg.setDestinationEntity(111U);
    msg.name.assign("NDATQTXRPYDJTIZQIDMGPMALJRJRNHPYNHNBLODSUSZKUKNTORUIHTONGUDKQXQUHQVMZACZCHWEPUPOWEJKIZULIVWZLTZIWOWBYULJWOPNGUKMXEWBLYJACFBATPSPQZXL");

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
    msg.setTimeStamp(0.08638675236830895);
    msg.setSource(9103U);
    msg.setSourceEntity(214U);
    msg.setDestination(12564U);
    msg.setDestinationEntity(165U);
    msg.name.assign("QZILWTLRYNUAEMJWXOTEIZZXOOWFKNRFQAQMJVZHGYMAAMEQEDLYFIIQXBPLHQJBSZQAKDUPOOLFPGDAIGXCMHPTBTQWYTY");

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
    msg.setTimeStamp(0.14146164482487067);
    msg.setSource(55446U);
    msg.setSourceEntity(56U);
    msg.setDestination(5347U);
    msg.setDestinationEntity(240U);
    msg.name.assign("ROBSRPJNBCNQHWRZWWZIZJICOAWNGALOLZVNEDDWXSHAKEZQFGDMFOCKVLYNPQAMVEEJUZFIAFUAIYRTQBTOLRHMUANPQTOFLSDJYGKKARXPCBPLDRMDBHLSUFSSGMNLTXTKJOUABBBQFFKYDHXXTFPVUZRDOELFVEAYJMGJLWWQHZVYVVYIIITCEMMRHKJCNTIZXUTRKSNECJVOOWPQGYTHYXGCGEDB");

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
    msg.setTimeStamp(0.6834810133373237);
    msg.setSource(26334U);
    msg.setSourceEntity(143U);
    msg.setDestination(42711U);
    msg.setDestinationEntity(167U);
    msg.name.assign("NXYVHBXJSOZTMQRUOETANSFIVFPBENRIGUFXFQHUZJPQLWVFHULSEGUYNOMPXKUTACCKWZGKJZQUDXLNBLJECCGMBREJRFPITXKZWVLMAQIAEOZZDZFOCVAZHIHGITOFAPDMTQCFSK");
    msg.visibility.assign("GPYWVRCALNXIWCXTBJBPBIFDAPHLAPSUQNZZOFQJBVIJKQVQKQOAVIQUEEEPUDEWWJBGXCLUTONLSEMMNVRPBEHELH");
    msg.scope.assign("ZSVVYWCGSYZRNWTREBPSGGOXEEUPLORXTMJIHNXXJCKJQEZFBWEIAVFBLWYLBTGCASRSBMPDACJZXDXJUFJVDPQOJIKWEVBQYJLOYCNQGTAALVURFFYPCTEBJKHVWXOGZUAMVQPFYIUYZUFTDMGUDUOAENPIPQRKFAZNOOKULMWLKYNDCYZTP");

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
    msg.setTimeStamp(0.8925735512155728);
    msg.setSource(34408U);
    msg.setSourceEntity(238U);
    msg.setDestination(3448U);
    msg.setDestinationEntity(211U);
    msg.name.assign("PKRWLRZMVBMMDAVKCQSXKKTNSQBOVLSLNCFONLXPRGXIWWSIVWZFCMHTOIQTAZLGSQHTVIJTCHDWBUEJTLXOCZZETQSJUNYQSJBZPDECMHEUUPPVJQWADWNBOIPXRURRBZZFIHVFDAUGLEZXRCSHEYXHOMMOQQSYINUPRYPCPMXAKFIVUAUKFINCOLFEEATUDGNYMXYXJBHDBMOSGL");
    msg.visibility.assign("XGIFQNWGLEBGUJEYEJKZCWNZNDXXJKBSANKRNHJSCPUZAKEQMEODLWOUWVFHOKNGPYJWOWYFUVEBJHTIRBGKGCOQXISTQXMQJLVAHFHTOIBGRMVRURWGQDYUBMIRUEZVTYTK");
    msg.scope.assign("ZOLTZQXZORZLRKFJBKNSRQFBFNFGOGUWACKPXHTDYJEHVVBGOAU");

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
    msg.setTimeStamp(0.15284261167736657);
    msg.setSource(872U);
    msg.setSourceEntity(32U);
    msg.setDestination(36115U);
    msg.setDestinationEntity(4U);
    msg.name.assign("TAYAHVTFCWWKTSDLGQUXFQAUAGZOXSNERGDNBMHCIVOPNCCODDNVJRHKFKKMYYFDSVSTGVJSJL");
    msg.visibility.assign("KSZHQMYESXSNFAHNDKVBRXPIHLZLJKPRQNCKWQSYNFCTUCLRMUGVSEQMCTLJOLSCEBDARYRTJIIUJQMDQWQWDJTNKSFARZYPZPJRUZKVIQHNUOUXTTPYRTULGYLMIBGVVHEPUBBDXZHAXKA");
    msg.scope.assign("COEDSWIIYMMBCOYNEUDBUUJPHNLTBGFTHLOTKTBBUFFQZENGARLZEBQRXDOILKLGKFVIJBDOXTWAESJLV");

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
    msg.setTimeStamp(0.7283452511868149);
    msg.setSource(26801U);
    msg.setSourceEntity(89U);
    msg.setDestination(46541U);
    msg.setDestinationEntity(25U);
    msg.name.assign("GAMTWZQYALEDZFWWJTUCLKSTQZHMOB");

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
    msg.setTimeStamp(0.057174113831664486);
    msg.setSource(26755U);
    msg.setSourceEntity(2U);
    msg.setDestination(6068U);
    msg.setDestinationEntity(214U);
    msg.name.assign("BOXQLBREGCTGRZOOKXNUTELPIJNYRMOAGSAXFPVVRSBFZVGWXKHVILZYSMIFREZBTZLMNLWLXLZOCFWZMPJWJJUJNKDMFISNXNCRUGANSAKWSQSBECEDHJGIVAVNDLRIZXJIYJPNEANKEARHXPDYUBIHYVOQHGUSYBCCDEAUPSKXPQYG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IYWITDLXCKDQQHLJTNDWJTWSZPNSGCIOCRYYRMGDNAYBXKFGCZRUNJAJORIMESBZKDAWHQGPLTSVNEXMXIBRBBEFYAWDBCMLFOCLJUDXBRHSLAWWIALKTVRUVCFWUXSGOYDQVRFQRQUDJHMEKUUOFVMTYYFBLPWAIUJADBHAXJKMOZPGHZQHERVISTXBEHESQUFOUEEIGTIKXZMPSTVNVOMMVXCLH");
    tmp_msg_0.value.assign("DDEIFAVEOCRHANRBSQISHZZYKCUKWMYMCKWHBJPBCKVVDBMGTNRXTQQAPIPLWSQBAUZHINFDSXQDLBQDTDJLFCZWOXJYPAPUFIYLEMYAJLBWYDKHHUVSVZYVOTLOXEYRWWVRFUINFELBZFAKRNLXNPTAIECFJJAVMXVSLPYFQJGURXMINMHGPFAONOCCTHIXUQGGGLTHGCNPRBMMGOQZYDSUEKUQEHRXVR");
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
    msg.setTimeStamp(0.6171064438001395);
    msg.setSource(24608U);
    msg.setSourceEntity(230U);
    msg.setDestination(49280U);
    msg.setDestinationEntity(253U);
    msg.name.assign("WYMRYIPEQCOYYB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MIGRXLRXWJEXUROCEEMKKWJHKKWTCFLAWYNLLNIVZIYRQHRZBXREXUPYFSVAZBMHSIPVSCSJKPFBEVGUGDCGEQXWKDVZPQIMPJYCFUQGJLVXUALYIBSCTTLNYQESOLASQNDLHZGFBDAYKRHOUWIFNSBGKFDMJEVWORNUQUJMYTHWSTZOEATOXVNRVGLXTMVJFAHBYBQDDKWIXDUSPEMPZPFBNOPYAODJDNTJ");
    tmp_msg_0.value.assign("AZAOICLIHIERBGH");
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
    msg.setTimeStamp(0.6252785580882715);
    msg.setSource(1519U);
    msg.setSourceEntity(76U);
    msg.setDestination(52085U);
    msg.setDestinationEntity(119U);
    msg.name.assign("EYWJVKZVZEZDUMBASKOQLVJRBXQKIVXKUUQRBIHXYGYZXNZFAWHVJABKSVMGSJQPCCJPFOISINJLFOBGECNGQZVTPSDYFAQVYWPFMCVMZAUUJGMYRCYHNLIPBRLFHGTORLYWXBJJAEFKFGESMBMZDHTOUSASETXIDDTPPCANTEKGTWKHLWHDRTDIXCSELPPQECZZTVOLWRUOIMXLFQNNBIGKHFWHCEOOXQRUHUUPQTRKANWDJ");

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
    msg.setTimeStamp(0.5388542787326015);
    msg.setSource(24633U);
    msg.setSourceEntity(126U);
    msg.setDestination(9430U);
    msg.setDestinationEntity(199U);
    msg.name.assign("FHAVSURALNCWRPKSDIJXUBRICJFYIIAMGETDFYOZNHQAUOHAOVIHGXJKQZ");

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
    msg.setTimeStamp(0.8101740450482192);
    msg.setSource(28339U);
    msg.setSourceEntity(49U);
    msg.setDestination(3865U);
    msg.setDestinationEntity(161U);
    msg.name.assign("ZVYSGCFPQFVQJFTNMYNGPRKQOHSFZYROOMAGDTNIENOWWHWJTKBNGECLOEIJXKAOIWTEUPWGCIXDYUPEIBVSWUPMEBDZRMFTMTTPGRZTRLGGAAWHJQYXBODIUROJBKTHFXXLFNJBCUWVKZVFSBCQAXOVYFHDHKAHRWSYLRNZTGEFBQLPAHOCNXAZQCVSQKCSDMPQUKLKUSIZDYDYKADPMXJVNJVXVSJMIWLENCLRYQMEELMS");

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
    msg.setTimeStamp(0.7738286433497589);
    msg.setSource(4193U);
    msg.setSourceEntity(55U);
    msg.setDestination(20008U);
    msg.setDestinationEntity(248U);
    msg.timeout = 14167348U;

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
    msg.setTimeStamp(0.2961537919187788);
    msg.setSource(41686U);
    msg.setSourceEntity(98U);
    msg.setDestination(3613U);
    msg.setDestinationEntity(199U);
    msg.timeout = 3907251689U;

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
    msg.setTimeStamp(0.4211844547123661);
    msg.setSource(46347U);
    msg.setSourceEntity(149U);
    msg.setDestination(54079U);
    msg.setDestinationEntity(176U);
    msg.timeout = 606486170U;

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
    msg.setTimeStamp(0.45137910658638014);
    msg.setSource(11128U);
    msg.setSourceEntity(210U);
    msg.setDestination(63905U);
    msg.setDestinationEntity(217U);
    msg.sessid = 573576253U;

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
    msg.setTimeStamp(0.48591278633801505);
    msg.setSource(32997U);
    msg.setSourceEntity(123U);
    msg.setDestination(21225U);
    msg.setDestinationEntity(80U);
    msg.sessid = 150116425U;

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
    msg.setTimeStamp(0.21536627271046715);
    msg.setSource(447U);
    msg.setSourceEntity(118U);
    msg.setDestination(52281U);
    msg.setDestinationEntity(28U);
    msg.sessid = 2127964448U;

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
    msg.setTimeStamp(0.21558898814098415);
    msg.setSource(32770U);
    msg.setSourceEntity(225U);
    msg.setDestination(8362U);
    msg.setDestinationEntity(179U);
    msg.sessid = 2695572074U;
    msg.messages.assign("UQGWXIHVCHKUUXWOASWVXNGPJGFPXGTFKYBLMDICXSBWWINQOEUPLOPVFEUJFLCRSDZPIPQRRKGSAYGFELPOKXZBLJYTTOOIJDCVBIYHZBSTWRSXTJEOST");

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
    msg.setTimeStamp(0.9745112540863357);
    msg.setSource(52584U);
    msg.setSourceEntity(83U);
    msg.setDestination(50977U);
    msg.setDestinationEntity(143U);
    msg.sessid = 4096865110U;
    msg.messages.assign("NDKTVKLNJHGKFUVBUOEATRJPCBEXJZTSZFGRCQIWYJUMDNTACOJVZNHLSXCFCGODESBUHJQWLAIQVEZMAIMEYGCCXZKRONSVMBGIXBHIMEHBRWAUFWSGZYWDKXBSCYEMWYGRKRL");

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
    msg.setTimeStamp(0.6744384395513852);
    msg.setSource(39307U);
    msg.setSourceEntity(92U);
    msg.setDestination(56470U);
    msg.setDestinationEntity(207U);
    msg.sessid = 2893135689U;
    msg.messages.assign("BWJBTHQVBQUVRPGTNUQAAOLDIZSPNKPFUEWJJKXFEMIBWWGYGCQJMTEMRDJZ");

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
    msg.setTimeStamp(0.42961434746335636);
    msg.setSource(34302U);
    msg.setSourceEntity(96U);
    msg.setDestination(64218U);
    msg.setDestinationEntity(161U);
    msg.sessid = 1742716U;

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
    msg.setTimeStamp(0.436068651811383);
    msg.setSource(23659U);
    msg.setSourceEntity(193U);
    msg.setDestination(13720U);
    msg.setDestinationEntity(184U);
    msg.sessid = 635639195U;

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
    msg.setTimeStamp(0.8862278759366589);
    msg.setSource(1624U);
    msg.setSourceEntity(146U);
    msg.setDestination(7556U);
    msg.setDestinationEntity(25U);
    msg.sessid = 3458726023U;

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
    msg.setTimeStamp(0.10716940407391129);
    msg.setSource(6356U);
    msg.setSourceEntity(175U);
    msg.setDestination(8512U);
    msg.setDestinationEntity(176U);
    msg.sessid = 1789449714U;
    msg.status = 129U;

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
    msg.setTimeStamp(0.8817281241817527);
    msg.setSource(44928U);
    msg.setSourceEntity(9U);
    msg.setDestination(24645U);
    msg.setDestinationEntity(127U);
    msg.sessid = 326243605U;
    msg.status = 89U;

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
    msg.setTimeStamp(0.7249966316232086);
    msg.setSource(57612U);
    msg.setSourceEntity(74U);
    msg.setDestination(5572U);
    msg.setDestinationEntity(41U);
    msg.sessid = 2579401285U;
    msg.status = 28U;

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
    msg.setTimeStamp(0.6552179784124904);
    msg.setSource(57601U);
    msg.setSourceEntity(0U);
    msg.setDestination(16557U);
    msg.setDestinationEntity(158U);
    msg.name.assign("PXFTPCXDKVGBIELQYAAEQSSGQZJMSDCWDEBKRUGOFDTMUPWENYZXQJJFMNHOBYFZNIVGHSUFCDAZUHFARKBFDUWSGSPH");

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
    msg.setTimeStamp(0.03295933171843435);
    msg.setSource(47201U);
    msg.setSourceEntity(56U);
    msg.setDestination(25602U);
    msg.setDestinationEntity(207U);
    msg.name.assign("WZWHFHTCPKZDMRHIMTWFBUUISMIHXFOVUGRBQCFJLEDJAAYMUBYLRDPZYKWLHQOVVNHDOOXIXYUEXKGTIGEZVUWPMOBVGHMYGIFXMFXRGJJOOTPQNPDHVSTBKEZWMDJJQGXZARCAUDQYCAECKECAYSIVPIEKZLJLUYKJSXURPSBTULKVWBNXNLSTZGRZWRIBFCQYSEFA");

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
    msg.setTimeStamp(0.6752093257912724);
    msg.setSource(40106U);
    msg.setSourceEntity(87U);
    msg.setDestination(45878U);
    msg.setDestinationEntity(221U);
    msg.name.assign("GAFEIMIPFBYKPKHQLIITJXVIEWUFYLBRQOAZVARTFOHGRXSOFPPOTOJWSAYYXRABOFXZYGCLQZWQBYDBGNAAGPPSCNUMCMTMWUAKDJOMDCDDHTLTCLRFPRHQDZQVUKHWSSBDXTCSNMCJVSWQHAHTQGFKSNESB");

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
    msg.setTimeStamp(0.6789959900649138);
    msg.setSource(60893U);
    msg.setSourceEntity(16U);
    msg.setDestination(22675U);
    msg.setDestinationEntity(89U);
    msg.name.assign("JLMGRZUGDYHFBSXBCUOMTSXRPIYEFALLVFWQCPICWXGSYYRXYBIDJTARSBNTKDQDXDOUJRFYIPJXVIOQMCSWZVVDVAWVXHHOHWECJSTRECMGLKOOKUPKNZWEDCQOLJSVMTHBVJXWXFUTNBLSOESBDMZPEHCDBNPAKOUNKYDNFY");

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
    msg.setTimeStamp(0.388291193108781);
    msg.setSource(31794U);
    msg.setSourceEntity(87U);
    msg.setDestination(2930U);
    msg.setDestinationEntity(214U);
    msg.name.assign("LCFKDWTUTHIHEVGGGICWVUJTJJDKWKWYHSFUQPPNBOSPZVAJMNRKGRHYRPLLUKTPMKEMXMKXBNAXQBPHRRHGLAZONIOJWOPDWWJIAECKZQRZMDNILUILROQHAZCYAMNIEVUMDMCFCYSOLGZS");

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
    msg.setTimeStamp(0.41751516946109);
    msg.setSource(25175U);
    msg.setSourceEntity(183U);
    msg.setDestination(22195U);
    msg.setDestinationEntity(19U);
    msg.name.assign("MYCVNSHZZKRBAUALBGDSHDDQNMBORUUVGEWSWWZBWDSXXGNMKEMUQHWYCMXOYLMQFCNTEVKKFIRNIPJIXIEYENJWGXOJPDLLSJTKRSLOIQPHCWSFLFQBHGPUTGMJCDEUAUTRPFBDJCZQNOKHFWTTGNCOWDNPBYVOLZUZKPPAY");

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

  return test.getReturnValue();
}
