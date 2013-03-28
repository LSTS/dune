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
    msg.setTimeStamp(0.8930644272320467);
    msg.setSource(59078U);
    msg.setSourceEntity(198U);
    msg.setDestination(58129U);
    msg.setDestinationEntity(83U);
    msg.state = 137U;
    msg.flags = 29U;
    msg.description.assign("DDJMANWZEVWLVUFTLYWGQRPMZDACOQEBEUOIPQTUTQDCHMDSGPFGAXVWYRKNAEQAVLCHBTZTFWUBCBVCVYYJFFSKUPPYURYBZNNWCNWYLPQZEOWRTXQGJHKJUOJBSOXDLEVAZT");

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
    msg.setTimeStamp(0.013085803131020812);
    msg.setSource(25624U);
    msg.setSourceEntity(179U);
    msg.setDestination(14078U);
    msg.setDestinationEntity(11U);
    msg.state = 240U;
    msg.flags = 211U;
    msg.description.assign("YAMUBODEYBHTWXMOAQCOZNOKHWYYFHJMUDBMHIGTZQEYAFIKSIKASXTHSRXRMYVCZQUHJSBHJPBRFYTWLEFBNTXZTDGVIQAQMGMVINBDQKRGOMDGWXGDEZWVLRKNVYZCS");

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
    msg.setTimeStamp(0.9118009873624515);
    msg.setSource(14163U);
    msg.setSourceEntity(102U);
    msg.setDestination(17193U);
    msg.setDestinationEntity(167U);
    msg.state = 40U;
    msg.flags = 220U;
    msg.description.assign("ZHNKNSFBTFVYLOIWIVMBYEXWRNCKYDLRDJUXQGXUHGXROPIBAFCFICSWUREWJRWPQLTFKWYBRSQZQBMTVPSLOMBGZIZYUUFHJKMV");

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
    msg.setTimeStamp(0.20284527876318859);
    msg.setSource(53008U);
    msg.setSourceEntity(24U);
    msg.setDestination(29743U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.38034763496444246);
    msg.setSource(43411U);
    msg.setSourceEntity(10U);
    msg.setDestination(7552U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.7442947292245015);
    msg.setSource(31420U);
    msg.setSourceEntity(237U);
    msg.setDestination(24484U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.5549945633153018);
    msg.setSource(7945U);
    msg.setSourceEntity(84U);
    msg.setDestination(31139U);
    msg.setDestinationEntity(97U);
    msg.id = 93U;
    msg.label.assign("VELSNCPTOXERBDUJINJJCMWGGSZDGRVSAHMGTFWZRITRIUQJDASSKLNZLPAYHOUPHZOQBTMQCJIWITHXICHIVOCGCZMTANVZWQKYCPOBADIMXOHIFVKBEXWPBJKUMEAQVHY");
    msg.component.assign("EKMRUWUHUVADVMBHVYLETTFZEORJTQYECCIHDCAHBDKFQBWQJBYA");
    msg.act_time = 1812U;
    msg.deact_time = 6838U;

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
    msg.setTimeStamp(0.8193085954273396);
    msg.setSource(34096U);
    msg.setSourceEntity(120U);
    msg.setDestination(8560U);
    msg.setDestinationEntity(234U);
    msg.id = 172U;
    msg.label.assign("XXDNTWNRGYITGTAEHKSXDDRLTFLQWCAINBHYWZEDAEXLYAPJLIVXIUHJJYTJDDEZOSONHNKWUAHGOVQWEQBLMZQSO");
    msg.component.assign("FNTHYTNXGKKIMHFHITABQBOMFEBUMUDTXHKPSUZCLFXRVAZIAJJEGPJCNJCTHPENNJGGGXEFYQRERQAKGJNUWCVMUNVZQOJAEYIDMYXDXIPFQVSOTOLKSCBWFTSPZLAQWIZSCVDFTDXSOQOHLNGATLYMMMJSUDWDBEFUDMV");
    msg.act_time = 37619U;
    msg.deact_time = 39517U;

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
    msg.setTimeStamp(0.6647788469900746);
    msg.setSource(63907U);
    msg.setSourceEntity(39U);
    msg.setDestination(1018U);
    msg.setDestinationEntity(112U);
    msg.id = 218U;
    msg.label.assign("ECKRDBRKEWJNHLHEFBGGJKQZDAVAXFGYDXBMKNPIIJRANMPEIBFHQYKEARDXJLGAPTIXIODWLFFWUMCNGSSRHXDSATOYUHUJ");
    msg.component.assign("QBDPALCXJEVYORKUDDWMXJBGCMFGPYAADRLBZFPGUGYENQBFKWXKRHSAICSLGUNVBOTJAWWERZHYQEPVDICBQRNQFJRZOYSNLXTUZVKSTBLMIEMSNGLJWKTIFKALAIFDXRIVTZPCVMJCZPQNFWWJDHQHVMOLYOQOMUDYAMSFIJUFNWUFHGPLBKIOAOGHMCZTKETQVGXEKHLEUKXJXDCNOVSWXYSEYPUHERJISIHWXORTRGBZBHCVCAS");
    msg.act_time = 33521U;
    msg.deact_time = 47900U;

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
    msg.setTimeStamp(0.9279491895155205);
    msg.setSource(18979U);
    msg.setSourceEntity(164U);
    msg.setDestination(56126U);
    msg.setDestinationEntity(189U);
    msg.id = 189U;

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
    msg.setTimeStamp(0.35119889055007847);
    msg.setSource(32410U);
    msg.setSourceEntity(206U);
    msg.setDestination(50332U);
    msg.setDestinationEntity(100U);
    msg.id = 63U;

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
    msg.setTimeStamp(0.612185043511277);
    msg.setSource(42212U);
    msg.setSourceEntity(146U);
    msg.setDestination(24999U);
    msg.setDestinationEntity(189U);
    msg.id = 158U;

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
    msg.setTimeStamp(0.8402921625274615);
    msg.setSource(27869U);
    msg.setSourceEntity(56U);
    msg.setDestination(58103U);
    msg.setDestinationEntity(161U);
    msg.op = 240U;
    msg.list.assign("LKXVTYAUSPGOTFUZXMYKTWRREEKHCGDQPLOJZGLNHYRVHDWRGOGWKKBMELPBZFUKGXLYNAQANTUBYNMZYDUILJHQMRTVFOGXQX");

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
    msg.setTimeStamp(0.5823473337541304);
    msg.setSource(36386U);
    msg.setSourceEntity(18U);
    msg.setDestination(1480U);
    msg.setDestinationEntity(153U);
    msg.op = 207U;
    msg.list.assign("BETUMODRHHNCCIADMUCXBQSAKLYBKCTVPSHZXFKGLPAZCVYMOKWPWKEQCNCSQQTAZAUXAIROIBOEGEYO");

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
    msg.setTimeStamp(0.9908495944724324);
    msg.setSource(42420U);
    msg.setSourceEntity(196U);
    msg.setDestination(7216U);
    msg.setDestinationEntity(220U);
    msg.op = 35U;
    msg.list.assign("AHHBXGEECORTIYMCHODXPEJWLQHUEFMMKEWMAUURDHAVTXXAANZGSGOVJXCLBINJAPBTBZVGUPXLTVQLEDI");

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
    msg.setTimeStamp(0.5034971648868722);
    msg.setSource(19757U);
    msg.setSourceEntity(23U);
    msg.setDestination(19893U);
    msg.setDestinationEntity(159U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.7335417988943794);
    msg.setSource(17749U);
    msg.setSourceEntity(23U);
    msg.setDestination(52133U);
    msg.setDestinationEntity(92U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.6360859073023569);
    msg.setSource(20781U);
    msg.setSourceEntity(2U);
    msg.setDestination(36506U);
    msg.setDestinationEntity(199U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.057241570417732146);
    msg.setSource(53925U);
    msg.setSourceEntity(96U);
    msg.setDestination(26339U);
    msg.setDestinationEntity(151U);
    msg.value = 75U;

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
    msg.setTimeStamp(0.8209475020575435);
    msg.setSource(64987U);
    msg.setSourceEntity(62U);
    msg.setDestination(16862U);
    msg.setDestinationEntity(226U);
    msg.value = 160U;

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
    msg.setTimeStamp(0.9481920945036503);
    msg.setSource(1882U);
    msg.setSourceEntity(135U);
    msg.setDestination(59204U);
    msg.setDestinationEntity(22U);
    msg.value = 65U;

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
    msg.setTimeStamp(0.48015026656281967);
    msg.setSource(21557U);
    msg.setSourceEntity(174U);
    msg.setDestination(9776U);
    msg.setDestinationEntity(5U);
    msg.consumer.assign("QEDMCBCISUJEIUUHIIMBTHDWZAFZJYABGELRVLRONGPUICNFTQDJFZMCILPVIQNYWJUARTLIYSCFRQGPESWRSFWKUHXALCUXMOBRWWXOEZFKZQGXZMKYGBXESHQGCTVCINJKRSQTTKDPNSWZJNGYKMVBPAPVOUOKHAFHWPDTYXHLYODCZDJEXOZPVTSVHTDXWFMUGJQVGCMRAJHLFSSKB");
    msg.message_id = 41038U;

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
    msg.setTimeStamp(0.8996978653568998);
    msg.setSource(29475U);
    msg.setSourceEntity(76U);
    msg.setDestination(10054U);
    msg.setDestinationEntity(77U);
    msg.consumer.assign("ADJXDHJCNKKILTRNGXOFSPHPAQMWTDYGRCVFSFEABBSMTOKHIMCRZWOVMZCPXDCVLNJKRPGRCNGUSIVAAOENZBIWWFQMHOXVPZLOFUNJPUJLEKQXNYPWXJDVDZHSYVOOQSDRFKSX");
    msg.message_id = 8885U;

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
    msg.setTimeStamp(0.107626387256194);
    msg.setSource(13255U);
    msg.setSourceEntity(75U);
    msg.setDestination(54846U);
    msg.setDestinationEntity(233U);
    msg.consumer.assign("LSBIJCBUBDRDQQLGLIWEACXYFLYHJRXXMMSPSFCYQWKRLXRBWTTCADEOLGPZIKTPZMDVQMPHZTRIYGRQZNSWSYIUUEPEAQMKKVEUSUVWHPANRXWZMIVVOOJINQOTCWZKRCHKMOGOUNLZJDTDFVHQFZXIANKRBB");
    msg.message_id = 49878U;

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
    msg.setTimeStamp(0.10324655330363819);
    msg.setSource(61330U);
    msg.setSourceEntity(218U);
    msg.setDestination(26436U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.5433118176768825);
    msg.setSource(8913U);
    msg.setSourceEntity(94U);
    msg.setDestination(55083U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.794753003078182);
    msg.setSource(36116U);
    msg.setSourceEntity(165U);
    msg.setDestination(34578U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.42089460404798096);
    msg.setSource(4485U);
    msg.setSourceEntity(70U);
    msg.setDestination(31765U);
    msg.setDestinationEntity(160U);
    msg.section.assign("UGDIQHUHLWNXITCKDAWZEQYFZPCWDHSPAEDMVZEYAPSSFSARUAOBNXROEGNUTYPENVTBZEYERYGSQTHBGZIRUKOYFQCJVLADAONCSBWIMWRCJUQBCPCZVAIFYRMBONTYZXJIMSRHFFRRLKLIHTGXGTEIJIAFHPKVLDOBHLPENSUZKLLJZQWDJKENQXTUMF");
    msg.param.assign("EIYYRGFINWECQGSDAQKPXUOCWETHHQTLMOJGHRDHTSHAW");
    msg.value.assign("QEEZQFMVWUKUWHBBCCKMUFPMJMRBFUSKVGJHXODBUNXLCLDIY");

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
    msg.setTimeStamp(0.13113402369145077);
    msg.setSource(48934U);
    msg.setSourceEntity(79U);
    msg.setDestination(54673U);
    msg.setDestinationEntity(30U);
    msg.section.assign("MMYOVQDTYJQKLQZTYVZWGAEVMBJSMCKGJXAUZAPBMRJXBRPMYAVBKLIEIJLDDGBWCZOVRARCIWBIMVCPTUNXUVDDNUXRHQORMKTYDOLRIVXGUZBRGNZLQHEYPFQPRWYNWGOXCISSFWHISDENHLNWHYNBUSADPSFAXERTTZNPVFUKXKETOLEIQEFLWZKUNHBQUOEGAJAGCPJPNTGKQOHKBYWEICHVJFOXFTGJYXHWLU");
    msg.param.assign("QOIHACDPZPOYRKBJAUZYRGAHNYHBHGWGTXFPGHMZMTNPITNOHVNBFBBRGQDIYEHIUJTJ");
    msg.value.assign("RWDQVQYKYPPCSXHBOPIYDOLEBHBKFGAMYFBPYRBEKPETIETVRHTONJJTPBUWTZAHPRSOUPSFSZJVOMRHMOLZGDKCTVACMULDJXHHGEARRFFGLKKMCSFZWOGYQZYVBAASNWOCQMWOYDAHMKRQGCXVK");

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
    msg.setTimeStamp(0.29864888295710523);
    msg.setSource(20920U);
    msg.setSourceEntity(9U);
    msg.setDestination(56802U);
    msg.setDestinationEntity(245U);
    msg.section.assign("LMGHGRETIPAZTFCWJPNWIIUKZAWALSMLYQQTJGTJEZBPLRUFHTKYEDKFGVXONXFSVHSJED");
    msg.param.assign("OAETEFYLSEYEPVWQZPAZOVCUSAXBIIZYFMUWFDQWRNGPJAMVAANCJVXHLMPIMLQJJDMKOXXLPVNQKTTZHNNOQXBDHCCFVQRBIJULNUBTJMHQDYJORQTTFMHHJNIPBPJPRDFUMAWACWKWASWTLXHUEYYKIWSVQAOJFGXGNZXRKMDIODXZMOCSKFSGKSEIVWPGEZRNSRFLYWGEGEYKCBTUEYVLVRRCCTDGB");
    msg.value.assign("PIMUYBMCRQSNHKYNHBWFUBWOBVGKOSUGVXZLFCATTUJPHVRJEBNHCXXYTIEWYQXEWHSKGAPPCLKGHCPGHOOZEHRFNJQYXAQVTFJXXZTEZPRWKLCFUMSYTTKIAZSZMQLVOGCBQPRYDCRSFXHXDOLMNOVIDICJMZFKGBSGGLQREMRDDKTDBMOZGYQVPNMWXQNUNRVEJIJLDURTIYJDOZEKLBCUNYASDUWFVLSAEMUPABEFSATIWNILQAW");

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
    msg.setTimeStamp(0.8213494767837609);
    msg.setSource(49944U);
    msg.setSourceEntity(34U);
    msg.setDestination(30668U);
    msg.setDestinationEntity(235U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.28511308004072133);
    msg.setSource(33659U);
    msg.setSourceEntity(172U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(117U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.5002353622354724);
    msg.setSource(57906U);
    msg.setSourceEntity(163U);
    msg.setDestination(34959U);
    msg.setDestinationEntity(213U);
    msg.op = 146U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("FQTCKOWKBZMLTUXKLKGYOBGFVVBYUCPTDAXEIFGVRSVZDUZPFHBIXSUSPWJAGEVYHHAS");
    tmp_msg_0.param.assign("BPFTJROQSJKALWOHQHIDXFGCNYRBYPIKRXTKUVA");
    tmp_msg_0.value.assign("WSANPKQZPUNLMZMLJHDJWFNLHYRZUBKTTMHGLEOHFYHYDAIFVHBEAEKVNLONIYRODAJBXRTDAHVMKWOXDYJHKOPAJXFBTWWVQFCSBRDCSGAKXTPIBIVXLNCASXEQRPIUWQEWQSSQLSZAKSXXNUGBPCF");
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
    msg.setTimeStamp(0.9157822066808011);
    msg.setSource(31703U);
    msg.setSourceEntity(51U);
    msg.setDestination(40894U);
    msg.setDestinationEntity(38U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.8706681611186962);
    msg.setSource(49226U);
    msg.setSourceEntity(3U);
    msg.setDestination(56533U);
    msg.setDestinationEntity(204U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.29413434290472973);
    msg.setSource(16054U);
    msg.setSourceEntity(239U);
    msg.setDestination(16881U);
    msg.setDestinationEntity(62U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.44319728680050785);
    msg.setSource(1904U);
    msg.setSourceEntity(40U);
    msg.setDestination(38681U);
    msg.setDestinationEntity(111U);
    msg.total_steps = 148U;
    msg.step_number = 101U;
    msg.step.assign("GSCSEDOWEMZJXJANLHXPQYRAJRNGYYCJVHCPFEVKFKIRGLIUWBMFRSCEKTHRBBTIUDSUDBATUEWYITVEHSPOZPZZVJTZLYMQIVZGXXPBSTDAINMBITNJELRWCZXHYRODROHKKPOSNWWGUYFWIQQUOSDKWVCVBCTZPNIHJOYOEWXMUQGFPFFEYOIVQPNSGMLHAXD");
    msg.flags = 168U;

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
    msg.setTimeStamp(0.976531219145456);
    msg.setSource(50635U);
    msg.setSourceEntity(4U);
    msg.setDestination(26497U);
    msg.setDestinationEntity(195U);
    msg.total_steps = 173U;
    msg.step_number = 233U;
    msg.step.assign("BVUIRBLTEQKVYLNOOQKEXHRZTOPQCJMIPZYCDKXZCLEDXFTIUWENRFLFJKRGWHISAWOHOFZBQEM");
    msg.flags = 133U;

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
    msg.setTimeStamp(0.7822812061617618);
    msg.setSource(31880U);
    msg.setSourceEntity(145U);
    msg.setDestination(23148U);
    msg.setDestinationEntity(188U);
    msg.total_steps = 82U;
    msg.step_number = 23U;
    msg.step.assign("RQMAODSKEJWJGLCBCQFVRFQFSTBJCASPGNFXUKQHAQLCITJXCFQRSVNHQOFHJKVG");
    msg.flags = 62U;

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
    msg.setTimeStamp(0.14661496933319518);
    msg.setSource(2938U);
    msg.setSourceEntity(126U);
    msg.setDestination(47304U);
    msg.setDestinationEntity(12U);
    msg.state = 115U;
    msg.error.assign("JZUDKTMVCPXAURNIJEOGVGOYKCFBYUCTZNGIXAJCDWTPIKGBYOROJKPFZISWQOLXMVXADJFKLWSILDYIMCBEMZQMPRKHQIWJXQBBGSQEDPACFECLOOGTADULWAKRUMGLCFBAUNTBFGKOTMVSHWOGESWHOLLFHQSVYVCYDDSEDZFPIUZMQKYDPGNQPNZRNYRXIJXMJBLITEAYHTSANXNNZRBEHHFVEUERVJZMXJPXRTASQTUKWUWCP");

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
    msg.setTimeStamp(0.09062219968170748);
    msg.setSource(58026U);
    msg.setSourceEntity(212U);
    msg.setDestination(64980U);
    msg.setDestinationEntity(81U);
    msg.state = 101U;
    msg.error.assign("NZWDRZXOWSGTXMGWUTLMEHLAXERNVIJUSRSJRHZAUEUNJCFYWDPFFDINGUYYMIRPTJQJIRYBJB");

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
    msg.setTimeStamp(0.4854308373695506);
    msg.setSource(31732U);
    msg.setSourceEntity(42U);
    msg.setDestination(50085U);
    msg.setDestinationEntity(172U);
    msg.state = 182U;
    msg.error.assign("JMMQUEUEOMZSLJPVQAHOWOAFIJKNDDLAZKPDHBMBMTCSQOGXGWBAGFCLRCDWVADLWZHGCXWRETQUPYMIFSVYRUTHHDFNIOEONQQPJXFTEYYSPGOUGIRPGMCXONWNGPNJTAKVLDEUZGXCERPHRHGACYWIZSQDDNXCHLYXBTTFICKWXLYNBXTHMEBYVUMJUQKLZSTRPVYSVBFZZHKOWKR");

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
    msg.setTimeStamp(0.9336230763707921);
    msg.setSource(51177U);
    msg.setSourceEntity(200U);
    msg.setDestination(5258U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.3890073587990591;
    msg.lon = 0.6022510205098073;
    msg.height = 0.12681672345715;
    msg.x = 0.9615691010821268;
    msg.y = 0.06384519469680106;
    msg.z = 0.23412420538608214;
    msg.phi = 0.4786184523650042;
    msg.theta = 0.44654603000753246;
    msg.psi = 0.12792777946049538;
    msg.u = 0.26615076629998435;
    msg.v = 0.30423010201553313;
    msg.w = 0.5021394382438624;
    msg.p = 0.06160118583422969;
    msg.q = 0.00484470934701442;
    msg.r = 0.9620322878612633;
    msg.svx = 0.3845210880973102;
    msg.svy = 0.6220345438012258;
    msg.svz = 0.9373230032581125;

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
    msg.setTimeStamp(0.83050888804374);
    msg.setSource(43789U);
    msg.setSourceEntity(91U);
    msg.setDestination(50137U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.7841722102552344;
    msg.lon = 0.2450241195846301;
    msg.height = 0.46604814262729843;
    msg.x = 0.5855367733206178;
    msg.y = 0.08938190440678406;
    msg.z = 0.26442114528393945;
    msg.phi = 0.6078636641705809;
    msg.theta = 0.6313468446279641;
    msg.psi = 0.7535790322486527;
    msg.u = 0.8483486595969807;
    msg.v = 0.0034524831049480564;
    msg.w = 0.01894415434744645;
    msg.p = 0.8619138702243456;
    msg.q = 0.30734459835034855;
    msg.r = 0.1602133451753155;
    msg.svx = 0.863461509309059;
    msg.svy = 0.6139376300872856;
    msg.svz = 0.0037103427154708823;

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
    msg.setTimeStamp(0.29838382339088176);
    msg.setSource(60487U);
    msg.setSourceEntity(139U);
    msg.setDestination(30025U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.24441398232395495;
    msg.lon = 0.4358166641039961;
    msg.height = 0.6171382529125821;
    msg.x = 0.7450301231682511;
    msg.y = 0.6860660967719842;
    msg.z = 0.9300699409100379;
    msg.phi = 0.7361007969574117;
    msg.theta = 0.5460127195667582;
    msg.psi = 0.045436732571678906;
    msg.u = 0.5030342967331342;
    msg.v = 0.7927665099816127;
    msg.w = 0.01790056620924585;
    msg.p = 0.12993465965407747;
    msg.q = 0.44532394126185393;
    msg.r = 0.20687501059999414;
    msg.svx = 0.8285057663826829;
    msg.svy = 0.5606329168631661;
    msg.svz = 0.014157145015835093;

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
    msg.setTimeStamp(0.5652114581772457);
    msg.setSource(63539U);
    msg.setSourceEntity(111U);
    msg.setDestination(64596U);
    msg.setDestinationEntity(65U);
    msg.op = 94U;
    msg.entities.assign("THTLYDMMNZRMARORPCSZRHDRUQSLVWBATLRXNVHNFNUVMEWBPVQFCKQIPIFUCADKKFGJNFJBOSNXBVYZZBGWIEODCIHSLLXAXSMAEKSFPWUIWNWQYCKHYQPGSZHQGVVQIELPFFAHWBUNYZGEEGWGPJSORUMICBTZTOSHKAYYJXQTYOPZJLJYVTXEZUKKGCKBAJDKPLMIOXXWDRODEHYQFCATRBMLZJXVOQIBLOTE");

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
    msg.setTimeStamp(0.23336713034028833);
    msg.setSource(46762U);
    msg.setSourceEntity(237U);
    msg.setDestination(34240U);
    msg.setDestinationEntity(192U);
    msg.op = 134U;
    msg.entities.assign("CQWZLWRIRWKYDQMXQOTGSJKAHTTNOPUXHKCANCGYKXAMENXFCQFAGLP");

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
    msg.setTimeStamp(0.4049346829524908);
    msg.setSource(23089U);
    msg.setSourceEntity(166U);
    msg.setDestination(11143U);
    msg.setDestinationEntity(193U);
    msg.op = 245U;
    msg.entities.assign("HEJZQMRWTFKFSJXTCIYWKEJXQHGSQCNSOIBAYSVXNPLWUJWKEBDQRLASZYBFIQYFDMAGCTBHHRLHUBGPGOZYCVYMELNKODXCRAMPTVLBOFCVVWTPYMKUGACTVHIZPINEOKUJW");

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
    msg.setTimeStamp(0.35302780991933436);
    msg.setSource(13289U);
    msg.setSourceEntity(2U);
    msg.setDestination(11506U);
    msg.setDestinationEntity(216U);
    msg.type = 220U;
    msg.speed = 16725U;
    const char tmp_msg_0[] = {-113, 86, 118, -84, -70, 90, 105, -82, 95, 104, 8, 99, 89};
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
    msg.setTimeStamp(0.7552799079184839);
    msg.setSource(62824U);
    msg.setSourceEntity(186U);
    msg.setDestination(15763U);
    msg.setDestinationEntity(117U);
    msg.type = 220U;
    msg.speed = 37126U;
    const char tmp_msg_0[] = {26, -51, 11, -102, -34, -109, -88, -105, 27, -76, 23, 9, 74, 22, -93, -105, 95, 45, 43, -69, 106, 21, -6, 12, -27, 50, -110, -51, 101, -97, 89, 2, -15, 89, 6, -107, -108, -105, -19, 4, -64, 102, -19, 99, -127, -122, -46, -23, 16, -74, -126, 5, 13, 42, -124, -67, -56, 122, 29, 59, -42, 14, 23, 77, -22, 21, -73, -1, 114, 59, -56, 24, -19, -119, -65, -22, 111, 113, -49, -82, -113, 46, -36, 84, -70, -77, -44, -79, 62, -44, -43, -19, 101, -42, -107, 14, -11, -75, 12, 87, 64, -64, 51, 85, 40, -64, -17, 90, 9, -21, -58, 57, 82, -39, 24, 124, 76, 43, -92, -98, 64, -40, -88, -97, -111, -116, 111, -127, -127, -118, 1, 27, 42, -114, 95, 4, -88, -58, 36, 28, -27, -39, -114, -28, 42, 57, 28, -71, -50, -39, -40, -102, 81, 99, 48, -54, -107, 111, -78, 59, 88, -41, -80, 92, -55, 49, -1, -79, 125, -12, -70, -75, -36, 107, -28, 66, 59, -74, -11, -74, -103, 120, -67, 110, -16, 69, 28, 100, -40, 109, -66, 0, 59, 31, -89, -27, 108, 121, 47, 53, -37, -51, -82, 56, 25, -73, -72, -54, -45, 81};
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
    msg.setTimeStamp(0.6496172527037517);
    msg.setSource(11922U);
    msg.setSourceEntity(137U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(226U);
    msg.type = 192U;
    msg.speed = 62169U;
    const char tmp_msg_0[] = {-79, -100, -10, -20, -110, -2, 82, 41, -31, -29, 55, 102, 38, -98, 6, 73, 85, -123, 50, 39, 9, 6, -7, 94, 102, -25, -70, -100, -88, -46, 98, 7, 80, -27, -66, -54, -61, 82, 44, -30, -26, 40, -14, 11, -70, 121, -105, -82, -45, 60, -124, -45, 112, 116, -95, 115, -73, 48, -79, 22, -27, 116, 25, 53, -28, -43, 55, 38, -57, 3, -95, 118, -110, -11, 66, -105, 106, -12, 30, -94, -112, -87, 29, -62, -36, 65, 20, -13, 61, 31, 29, 105, 14, -98, 40, -126, -119, 44, -20, -111, -7, 19, -1, -50, -5, 114, -114, 116, -62, 5, 118, 66, 0, 26, 4, 100, 73, -83, -95, 118, 39, 6, 125, 83, -22, 102, -82, -114, 102, -50, -101, -5, 102, -28, 75, 119, -49, -56, 39, 71, 40, -78, 92, 16, -12, 114, -80, 96, 119, 36, -74, 95, 120, 120, -53, -3, 99, 89, 94, 11, -2, 111, 29, 22, 121, 76, 103, -63, 42, 70, 57, -9, -5, 68, 20, 93, -10, -70, 40, -23, 31, 69, -16, -120, -110, -49, 70, -28, -70, -14, 45, -95, 68, -127, -98, -82, -126, 12, 6, -49, 94, 103, -15, 121, 79, -123, 97, 113, 97, -64, 110, 83, -87, 77, -90, -108, 24, -46, -73, -26, -46};
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
    msg.setTimeStamp(0.0029265354976980573);
    msg.setSource(17417U);
    msg.setSourceEntity(83U);
    msg.setDestination(61783U);
    msg.setDestinationEntity(99U);
    msg.available = 2841288208U;
    msg.value = 137U;

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
    msg.setTimeStamp(0.5450192339423586);
    msg.setSource(47961U);
    msg.setSourceEntity(184U);
    msg.setDestination(49200U);
    msg.setDestinationEntity(222U);
    msg.available = 1447308790U;
    msg.value = 55U;

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
    msg.setTimeStamp(0.7038652964139338);
    msg.setSource(24036U);
    msg.setSourceEntity(220U);
    msg.setDestination(13499U);
    msg.setDestinationEntity(169U);
    msg.available = 4105483531U;
    msg.value = 248U;

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
    msg.setTimeStamp(0.4754951475259611);
    msg.setSource(8171U);
    msg.setSourceEntity(106U);
    msg.setDestination(33783U);
    msg.setDestinationEntity(129U);
    msg.op = 201U;
    msg.snapshot.assign("CROZDXOFXELETDYRAQQQUHLIWKIBNVOUDMTZERVFHCGFGFZAIQMEOQPXPOUTJTNWLVBJPEJMULZL");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 40U;
    tmp_msg_0.request_id = 57665U;
    tmp_msg_0.command = 64U;
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 31788U;
    tmp_tmp_msg_0_0.control_ent = 194U;
    tmp_tmp_msg_0_0.timeout = 0.405051720395298;
    tmp_tmp_msg_0_0.loiter_radius = 0.2530794978599079;
    tmp_tmp_msg_0_0.altitude_interval = 0.7462443454793521;
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 51773U;
    tmp_msg_0.info.assign("PZWTLHFUCTCOFQRYZSJZGTXMUVTKSNGSKOVBWZTQCVPTIUIGKLKHYEERDFPRFVMSXSYIRUBDDLPLHLDYXGKJPNWEXKMPQCHXHENSRCOQWGWDZVJVFTGIHEWYXFSSKJMBEOIUEIBUMNNNDXRZIQPMYNLXXLUOIYZAQNATLUAVMMRMRUSFEFBDKNJBZHLXUGBCK");
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
    msg.setTimeStamp(0.9154271012191747);
    msg.setSource(46844U);
    msg.setSourceEntity(4U);
    msg.setDestination(7080U);
    msg.setDestinationEntity(198U);
    msg.op = 95U;
    msg.snapshot.assign("AWSHRHPPKMADOBNBZGCHYJEIKPYVMSIBQAQJFLCXYIHKENDJFEKYCNZMPLWQVFCTICUVGJFLINKYQYZRJFQLRZEJKLTJAUKWROEWAIHGOSBDBIXDITNSYDSUPEMHMTBOXKHPOFGXGPSVJNRSTLFWFIREDZOEEBZUVTQXQVWYWRTGXVKAZJHZODNZAWMTUXCQDNPSCULBXVSWMTMUGGOFUULPSRUBJH");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5352018419297246;
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
    msg.setTimeStamp(0.7281845328533756);
    msg.setSource(43435U);
    msg.setSourceEntity(40U);
    msg.setDestination(15750U);
    msg.setDestinationEntity(82U);
    msg.op = 108U;
    msg.snapshot.assign("LSLOMIAIULFJSDZZUCCYTIJPNMQKCOFEKWJROBLZUNURNWMFMKPFQMFNSVDMEYBSHQZXGTTVRZKNYIDACNXDROPTHOPEAQGWOAJFGAQXDVPZTBCWNOROHPXRJAYFWRSIHPPCJGBFQXTAKDOVGNCBMYEGVGNITQRLVSCEHZMZBSWQRCVMYJKZAYGLKMBTPXSUWKHEJIRIXPSVUYU");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 1290032025U;
    tmp_msg_0.messages.assign("HVLQWIQLASQAMAFKNUGQLYABNWMCNTLPQNENNANMDJWYGTVUMTILVGSHRRSXFKWRUCNZGODCCJRVZTGOPVCFVXDMCAHY");
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
    msg.setTimeStamp(0.8359036002695773);
    msg.setSource(39400U);
    msg.setSourceEntity(32U);
    msg.setDestination(30660U);
    msg.setDestinationEntity(12U);
    msg.op = 237U;
    msg.name.assign("CSEPWKLGCVOPXGXYUCVMDJUSQTPDLQNDJRZJTIJC");

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
    msg.setTimeStamp(0.2150842661023865);
    msg.setSource(47145U);
    msg.setSourceEntity(175U);
    msg.setDestination(19573U);
    msg.setDestinationEntity(182U);
    msg.op = 218U;
    msg.name.assign("JWQDOHJHXQFZAIXC");

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
    msg.setTimeStamp(0.7539443077687354);
    msg.setSource(52820U);
    msg.setSourceEntity(229U);
    msg.setDestination(4502U);
    msg.setDestinationEntity(226U);
    msg.op = 64U;
    msg.name.assign("APDYOGJBRRTKVOCQYOPGVRKKYWZAJSTOPBYENFLJJOBNZUHZIPZSAXDLGHOSFAVSPKUYHEJQXERNOEWTGEASRNNWWWQABUECXMMHBGCVQOUTYZETZIDHGGKXZRCPFFRLAVAWUCKMWRZJDUKLHSJSWBNPZJVYIQNDKFDLQDPQQFXUIRXMMVFTI");

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
    msg.setTimeStamp(0.7423900753185103);
    msg.setSource(42561U);
    msg.setSourceEntity(17U);
    msg.setDestination(37063U);
    msg.setDestinationEntity(84U);
    msg.type = 172U;
    msg.htime = 0.06010070243569565;
    msg.context.assign("EHUVSGLZBXQRPVXNXLVQFCAHDSMJRONXDFIGYRTNMDGWYWFFYLJLJELOSEK");
    msg.text.assign("AIMQVBYMBHEXYNNHREABQWGFLDMNMKXDCSQJQPOFOF");

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
    msg.setTimeStamp(0.5280202497107376);
    msg.setSource(17267U);
    msg.setSourceEntity(203U);
    msg.setDestination(56109U);
    msg.setDestinationEntity(208U);
    msg.type = 211U;
    msg.htime = 0.14290531231128767;
    msg.context.assign("UKKROEYLKYGITPQPTXTRDSBNNCHIPCHZNBWIEPLZLPKLQWCXZAQSYC");
    msg.text.assign("GBYIDOSPLJWGLRAFFETODJIXSNKGTKWYUSCETKZAUBVAANNHNCZSHZOVBLPSXZCUWEFXD");

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
    msg.setTimeStamp(0.6434128424473846);
    msg.setSource(10092U);
    msg.setSourceEntity(44U);
    msg.setDestination(52094U);
    msg.setDestinationEntity(190U);
    msg.type = 37U;
    msg.htime = 0.5383872312097981;
    msg.context.assign("ZXLAQTSCXRQMWEPNEZOMADBLRZOFGSVRNVGPUTPVKIKCWPMOPGDVELAVQJXYCYSFIMZHLYQWFYGSTIDANUKTVBQHSGMEYNKVIKHDEANIQTIGFKWPFFWMUPRXBRJQICKEJWWCBDRMRTM");
    msg.text.assign("TLMNAUBOLUNLGESVAXOGLFDMZZTEZTAJUCBZQ");

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
    msg.setTimeStamp(0.6147907959059297);
    msg.setSource(12341U);
    msg.setSourceEntity(3U);
    msg.setDestination(16286U);
    msg.setDestinationEntity(141U);
    msg.command = 80U;
    msg.htime = 0.3866646710815481;

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
    msg.setTimeStamp(0.3486865172562822);
    msg.setSource(48664U);
    msg.setSourceEntity(92U);
    msg.setDestination(64964U);
    msg.setDestinationEntity(133U);
    msg.command = 13U;
    msg.htime = 0.829343103154656;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 154U;
    tmp_msg_0.htime = 0.6749330753282832;
    tmp_msg_0.context.assign("GEESTDARALFEYULYQWSMBHQHVUCZMRGIYKCLAYJKLSTONDMBLJKOODAWEHQMVSLXFDQRWOGZZYGOODXVVPUDBZEJZFOMKQDRRVK");
    tmp_msg_0.text.assign("XGRSHCGWUDMKECEJLGMJSVAOYPYRNJFBNJXPWQAYVLLIXMGLADAYRJZSGNJXWSOCTLJAWFFEXDVGMUCOLQRUBNMYAZVVFBJUVIKQXRYKRSNYRAIKOGIIQZWZCFVCWIAITDTUFLQIZPKKUSMOFOSWWETPIQYNPZAHMOXLMDBPYGDVCAXWDZZMGHXEOTICBSWUBHMP");
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
    msg.setTimeStamp(0.9606122280907862);
    msg.setSource(1477U);
    msg.setSourceEntity(157U);
    msg.setDestination(35522U);
    msg.setDestinationEntity(116U);
    msg.command = 191U;
    msg.htime = 0.1630618460499027;

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
    msg.setTimeStamp(0.05735646603483657);
    msg.setSource(52135U);
    msg.setSourceEntity(76U);
    msg.setDestination(328U);
    msg.setDestinationEntity(209U);
    msg.op = 2U;
    msg.file.assign("RHIRBGQVLVQAFZCMEDKELIGYWOBQQYKKWFCUDMWDJPCNNRQTTTJQPAGFXMXJJDLBCBBKEFSTWEKUKZUNXKJXOSPCVVXJSWADBGPTOXMUMXVENZJFVCUHIVGIIAIQNSZOORSRYUYHMHMVTBLRPDFNWPXRUJYIJILSDNASMWPFEVTRZWLCGKGAWHYNLHLDKYZGRHECXLZEQUVWUOYPBOSOMTUGRMGTZPFSHEYNAFQLCSJYQTPAZCZBNDBAO");

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
    msg.setTimeStamp(0.7043011424092023);
    msg.setSource(59638U);
    msg.setSourceEntity(146U);
    msg.setDestination(47548U);
    msg.setDestinationEntity(107U);
    msg.op = 56U;
    msg.file.assign("HAKXSITECTXKCZMCSWQHGIGDBUVCBEGPUY");

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
    msg.setTimeStamp(0.06456503553168513);
    msg.setSource(39019U);
    msg.setSourceEntity(28U);
    msg.setDestination(20920U);
    msg.setDestinationEntity(117U);
    msg.op = 24U;
    msg.file.assign("YZGEUYKFXSUNWEDPAYTFLFVMVALWIJHPLXDGJHHMNLBXQOPDXBZFOWPLJPEYGUAZNCBWNTVFNMYLQKIPAVDUGHAMOVXBKTQWMTCEORLSDMCVXCNLRDVQRCOZFNXBOJKUOZGSZNSRARJOLKJLEBXCQACPNIEQQFMKYCITBST");

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
    msg.setTimeStamp(0.09675558959826136);
    msg.setSource(1852U);
    msg.setSourceEntity(84U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(70U);
    msg.op = 92U;
    msg.clock = 0.9323851135307628;
    msg.tz = 65;

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
    msg.setTimeStamp(0.7073043506621176);
    msg.setSource(41264U);
    msg.setSourceEntity(158U);
    msg.setDestination(19389U);
    msg.setDestinationEntity(151U);
    msg.op = 247U;
    msg.clock = 0.7299976686506413;
    msg.tz = 74;

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
    msg.setTimeStamp(0.46700258432287367);
    msg.setSource(41022U);
    msg.setSourceEntity(206U);
    msg.setDestination(39457U);
    msg.setDestinationEntity(38U);
    msg.op = 76U;
    msg.clock = 0.6747509482306426;
    msg.tz = -57;

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
    msg.setTimeStamp(0.47117408367784785);
    msg.setSource(30992U);
    msg.setSourceEntity(48U);
    msg.setDestination(36738U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.8345108024046743);
    msg.setSource(13308U);
    msg.setSourceEntity(250U);
    msg.setDestination(14494U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.9159631881583467);
    msg.setSource(12479U);
    msg.setSourceEntity(158U);
    msg.setDestination(27169U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.5897427347343437);
    msg.setSource(37343U);
    msg.setSourceEntity(196U);
    msg.setDestination(37299U);
    msg.setDestinationEntity(3U);
    msg.sys_name.assign("TSPCQEJVLIYXCYBQTIKZQHEEJNTALHYEQPSVPQOIWXNVRMVBTJJYKNAZBXGEPPYUDXDCPPJKBCWEBTZJSMOZSZPYXQGFOVWREXHKSZWKHHEYWWEULFZNQKXVILTYTGDLDAKFODFOTMNMFFZHVBKANNCYHMGALRFLIRFINIRUGKCAIMVORIDAGPWACTRLQOSFMJDWDULRGHPBDZUHOSFJGXEYVQASGCAHUR");
    msg.sys_type = 92U;
    msg.owner = 40974U;
    msg.lat = 0.34793982961942926;
    msg.lon = 0.4614569517286461;
    msg.height = 0.1107477028722127;
    msg.services.assign("FCEWTQKRJDTJUPMBKMRIPZGPPQMASPYNUMUIVUKJISLIIOAYPWRQIECFBFJKQBHJQYCDWURULOJTNQSTNWNLFHCNSEWBSCAVXRHIHNCQGOYLQMONVA");

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
    msg.setTimeStamp(0.31028135579396343);
    msg.setSource(61384U);
    msg.setSourceEntity(10U);
    msg.setDestination(32140U);
    msg.setDestinationEntity(154U);
    msg.sys_name.assign("TUBPZBFMBAOMHLZSUOMHHXJPOHQJZCWQFMBCXHLGSVQVWFQEFXYAUTXFSJTRPUYPYMLGLDTWASBKCRKTWPEAJDCNNUSRIZDZVEUGIVCAYFJIJDNBP");
    msg.sys_type = 199U;
    msg.owner = 55062U;
    msg.lat = 0.506224332669717;
    msg.lon = 0.6535584196519824;
    msg.height = 0.38934218362954554;
    msg.services.assign("QOWZTUIZRSTX");

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
    msg.setTimeStamp(0.9315298330124302);
    msg.setSource(55652U);
    msg.setSourceEntity(50U);
    msg.setDestination(55032U);
    msg.setDestinationEntity(239U);
    msg.sys_name.assign("GZPTTDJDPIOCHFWNTRZFPGQYOMNTOLUTJIEYJQOZZTUEEHLFQXXOMSUEQJNEFWDMAAAPYMYSMBCOUBZKXZHTOMRPAVLVQAEVZJNTLWRARUWCONQMJOFKNSLBISMRDNNIIBKGRXCCFGJMDBXSIYLRFZUFEJQPXFSWHIHVOBVGALPYYCSFLZKDRHVHMBUVNXSLKBPRIPXEUGKPKUWBVVYLAKVYCHXQGACJGJ");
    msg.sys_type = 83U;
    msg.owner = 22337U;
    msg.lat = 0.10161741693775161;
    msg.lon = 0.6070365485795325;
    msg.height = 0.3200087829993772;
    msg.services.assign("SJUGKZEQNAKQIFNFWXOAGTIBMDPAMVELXBOOLFVHVTGAHRZDVIGKXLIZNORWRTQQQHBVRSFBZZLQWYZUOECDBCASVSYXJCLPSDDYENXXIHIOXNPOWMZBGMYFQBWARCNDGKPINWCUKLMOZTPREEUBXNQHMOPHIYTJSBFJ");

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
    msg.setTimeStamp(0.6566554230490899);
    msg.setSource(21686U);
    msg.setSourceEntity(250U);
    msg.setDestination(52191U);
    msg.setDestinationEntity(129U);
    msg.service.assign("XVOFNQHBANYXVMNTOHAMEYJCQAXNUGUXVEGKRPSBSZUOWNZZZELGGXEOGQLNDCUDDYSM");
    msg.service_type = 166U;

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
    msg.setTimeStamp(0.4650542392128608);
    msg.setSource(34253U);
    msg.setSourceEntity(21U);
    msg.setDestination(21662U);
    msg.setDestinationEntity(66U);
    msg.service.assign("WYRGDJSFLUWKGWUZDYUZDXORWLBWYNFPNIWURTNMTGUVKGHQJVTQCCAEOTPERQCRPZCMHBEPPSAHAFDNDEMWUVJRFQLGNJJCZRMRHJBKZEHPSNDEIKQDPSXAVOKSQWUJAPUNBIROSKMBYXBVBCJQLKPYGLOJSHYKTVNOBXVTAFYSIMALOGYH");
    msg.service_type = 45U;

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
    msg.setTimeStamp(0.8118787859201084);
    msg.setSource(35240U);
    msg.setSourceEntity(236U);
    msg.setDestination(39386U);
    msg.setDestinationEntity(98U);
    msg.service.assign("CHNOCTDBFPIQRWZVDWRCOLNQMBUUAXIHXAZVLEOHHNHZTRSFPLTJCHRYDTVDASEKVVZZTCBCZYYMJADEIPBQAFYKIVMO");
    msg.service_type = 131U;

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
    msg.setTimeStamp(0.3334069812926783);
    msg.setSource(13246U);
    msg.setSourceEntity(5U);
    msg.setDestination(27212U);
    msg.setDestinationEntity(46U);
    msg.value = 0.08318186062446198;

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
    msg.setTimeStamp(0.6378416336500651);
    msg.setSource(48050U);
    msg.setSourceEntity(25U);
    msg.setDestination(57019U);
    msg.setDestinationEntity(220U);
    msg.value = 0.6098546695979964;

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
    msg.setTimeStamp(0.6211905972918103);
    msg.setSource(26919U);
    msg.setSourceEntity(203U);
    msg.setDestination(20974U);
    msg.setDestinationEntity(233U);
    msg.value = 0.34659720650369075;

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
    msg.setTimeStamp(0.29785479497608036);
    msg.setSource(40525U);
    msg.setSourceEntity(166U);
    msg.setDestination(51917U);
    msg.setDestinationEntity(114U);
    msg.value = 0.01712856730751222;

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
    msg.setTimeStamp(0.9027335956054214);
    msg.setSource(19434U);
    msg.setSourceEntity(133U);
    msg.setDestination(4503U);
    msg.setDestinationEntity(234U);
    msg.value = 0.5095791240917871;

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
    msg.setTimeStamp(0.06483571282369816);
    msg.setSource(19268U);
    msg.setSourceEntity(28U);
    msg.setDestination(58133U);
    msg.setDestinationEntity(56U);
    msg.value = 0.16110738039450478;

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
    msg.setTimeStamp(0.5920278989122557);
    msg.setSource(25609U);
    msg.setSourceEntity(174U);
    msg.setDestination(36140U);
    msg.setDestinationEntity(112U);
    msg.value = 0.3413870822046896;

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
    msg.setTimeStamp(0.9479677387616228);
    msg.setSource(47226U);
    msg.setSourceEntity(223U);
    msg.setDestination(11197U);
    msg.setDestinationEntity(169U);
    msg.value = 0.895246256912223;

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
    msg.setTimeStamp(0.9564700474881515);
    msg.setSource(4470U);
    msg.setSourceEntity(72U);
    msg.setDestination(43381U);
    msg.setDestinationEntity(102U);
    msg.value = 0.5123841864318295;

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
    msg.setTimeStamp(0.7957493764843939);
    msg.setSource(43387U);
    msg.setSourceEntity(121U);
    msg.setDestination(31710U);
    msg.setDestinationEntity(177U);
    msg.number.assign("RZANLMAYHNGGVKOOUWPKHVHNTBNEBOJJXPWKEVZLTFRQVZKAMSFWCCBILEMDRQOM");
    msg.timeout = 769U;
    msg.contents.assign("MUOXWPOZIJ");

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
    msg.setTimeStamp(0.7102770230353657);
    msg.setSource(2603U);
    msg.setSourceEntity(111U);
    msg.setDestination(35163U);
    msg.setDestinationEntity(224U);
    msg.number.assign("LBEBSNORAGVYIAVVDQAHMWIBIIKPXHPRXFGWUEJVSTUEZDUMAGDUMYXAEVQPREVCYNFYWHXTWWOKPMBBRDPLGOTQPHYKKZJCCBXXZUDIKPKCJHDWTVBLEKVZOFNNGEOFEQIUSTXQQTDORQWFTSFUKE");
    msg.timeout = 38419U;
    msg.contents.assign("PYHNCFLKJKQPANPSQLGUZQXSBPWIOGNCDMJCBBVDOBKFEVTDIQUHVNQU");

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
    msg.setTimeStamp(0.44098345739771283);
    msg.setSource(44174U);
    msg.setSourceEntity(10U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(221U);
    msg.number.assign("PSJFUQTDTYJDNBVHPRGCBPKFHLAEEBHIDZHAIUVBRIQXYBOYWJSRYKJMQZUEFXFTQVVBDNJBROTKTRJUKKKRTRCCDVIFRQMLDESPNGHXLFBHZWZTMPSAIGYLADEEWGVGNTMAKPFHGKWWDRAQXLAEUSSFNOCUVYMYWXZUPQTZEDFSGCANVLOZIXWOSTMPVDMJLUHJNCIKEMCPINXZPIMUIYGLCQJYOWBGNXQYEKX");
    msg.timeout = 9249U;
    msg.contents.assign("EVVWLGBNZHUJOHYXYKJEATCDDDJEUZPAAPQWVKAAPRFYRPBKFBMIMCSFAKRZTGQBVZCTNALCIVAWXJPVOQIOJWLGZDHHOJLHGLEXZQFKCKJCUSPNGMTFYVLXDNYXGJNIWKUVUPTIMNUSRDGTCVMPEBXXRWQIIMZSFMJLRUTDNTXNSMU");

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
    msg.setTimeStamp(0.7729286117584276);
    msg.setSource(35517U);
    msg.setSourceEntity(231U);
    msg.setDestination(33357U);
    msg.setDestinationEntity(159U);
    msg.seq = 903008200U;
    msg.destination.assign("PZCNXIKFUAFTWNILVCEEUNEADYCZXQSIKDBIIHNULQSHSTJXCKYEPYRJNWPPRIOJHEUGTQAATYFCEFEBVICGXSQBOSXHTMIVOKQZMSUEFDFCVLKBFAGLVJWBLMUSYFZROTUJPZYIOCOVVGAJKMHXDJXSBWAHWWW");
    msg.timeout = 22008U;
    const char tmp_msg_0[] = {-14, -57, -65, 124, 110, 27, -108, 32, 50, -102, -89, -93, -8, 47, -8, 61, -3, 64, -10, 12, -45, -60, 33, -28, -56, -41, -116, -106, 46, 76, 17, 3, 98, 116, -39, 29};
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
    msg.setTimeStamp(0.47439221541906607);
    msg.setSource(63405U);
    msg.setSourceEntity(78U);
    msg.setDestination(30057U);
    msg.setDestinationEntity(96U);
    msg.seq = 3703425156U;
    msg.destination.assign("EBVQXRILNYTWFQXDGOOMARBJZEAIJZGDWCVXEEWHGOYBSQUQRRQLLZIGITTLCNHETSBVMSTILHPSHSUWSPANXGRMHQNGKOTEHNNFCRDZYPPILAMVAHIYMFKYFKHWPBZQLMFMNRAQAFWWJSJNVTHJKXCBEQGXKCAZBPEUJLMBMFKGPICZDAKANZQOLOXTSMZNGUOSEIXFBTJHPCDWWVOKYUZDKYDJBOC");
    msg.timeout = 30457U;
    const char tmp_msg_0[] = {10, -33, -30, 76, -76, -112, 63, 28, -102, 11, -111, 75, -67, -53, -44, -40, 112, -67, 123, 17, -72, -71, 101, -49, -80, -92, -91, -108, -56, -56, 94, -109, -88, -74, -98, 105, 100, 70, -120, -9, 40, 62, -12, 65, 23, -119, 81, -42, -112, 122, 109, -12, 90, -8, -36, -65, -31, 81, 26, 126, 41, -70, -20, 56, 4, 60, -18, -52, 4, -122, -18, -89, 20, 60, 76, 75, -114, 6, 53, -52, 37, 71, -2, -33, -52, 56, -81, -18, 86, 50, 78, 126, -86, 3, 123, 73, 83, -9, -61, 45, 20, -31, 64, -31, 47, 85, 47, -20, -8, 46, 58, 117, 50, 100, 32, 101, 40, -11, 35, 9, 22, -67, -72, 119, -59, 110, 35, -114, 45, -87, -24, -115, -69, -25, -9, 30, -58, 14, -69, -54, 106, 91, -49, -79, 48, 46, -51, -111, 5, 37, 41, 48, -91};
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
    msg.setTimeStamp(0.5215115500763057);
    msg.setSource(7149U);
    msg.setSourceEntity(87U);
    msg.setDestination(63123U);
    msg.setDestinationEntity(58U);
    msg.seq = 3816707925U;
    msg.destination.assign("VRCKVDDAYWNCVLONMPWLTAWWRLESYPPCSQYXZQEQMAMGGRGLUZNKUHIOGRATRJBODLQLHHBEUNALXKZFUJTJOIEXNKRFZSQBTHTCBEIIUOWQPKMHVFIMKVHJXUYLLDTYCYDGNYSJCFWUIOXSPPCXBUNERWBTGRWXMAYQBJNFBJVCVDNMDZGMDSYAWPSAXESEZOEMIDFHGSHSBPRZTLKGPMTX");
    msg.timeout = 37670U;
    const char tmp_msg_0[] = {107, -106, 99, -90, 1, 64, -50, 59, 32, 82, -77, 35, -91, 116, 93, -92, -58, 29, -112, -113, -98, 50, 98, -69, -1, 51, -12, -51, 117, -36, -74, -95, 104, 31, -120, -120, 124, 51, 93, 76, -15, 51, -116, 118};
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
    msg.setTimeStamp(0.5310643734572924);
    msg.setSource(27105U);
    msg.setSourceEntity(41U);
    msg.setDestination(8473U);
    msg.setDestinationEntity(128U);
    msg.source.assign("FXURMCPWNRZLAZYNQGEFAEDZPDRTKVMNTSHWLVBGUNVLKSUNCOQCWCLTLELXDDCKNSGIDFUEYTQWBEYPEZBDBTKSNDJMRKYMKJFBUHXSOHNZUOJC");
    const char tmp_msg_0[] = {91, 68, 19, -116, 107, -69, -70, -6, -52, -78, -120, -51, 85, -88, -86, -52, 48, 89, 93, 31, -69, 77, -119, 47, -2, 20, 44, -1, 6, 118, 14, 46, -28, -27, 38, 83, 52, 109, -46, -77, -102, 12, -67, 99, 36, 33, -6, -94, -13, -68, -42, 14, -38, 48, -97, 23, -56, -98, -109, 93, 22, -63, 26, -22, -42, -28, 27, -66, -59, -114, -20, -26, -77, 104, -74, 124, -7, -61, 77, -105, -120, -41, -8, 16, 93, 34, 42, -26, -114, -50, -62, -93, -66, -99, 13, -39, 71, -128, -32, -104, -62, 93, 31, -82, 98, 77, 10, 14, 30, 24, 31, -94, 56, -50, 55, 92, -45, 115, 70, -53, -58, 103, -76, -80, -69, 124, -75, -31, -47, 66, 47, -108, -76, 51, -23, 42, 10, -128, 5, 57, -57, -89, -5, 21, -2, 0, 118, -107, -67, -107, -4, -82, 45, -76, -43, -99};
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
    msg.setTimeStamp(0.10266883408915195);
    msg.setSource(6811U);
    msg.setSourceEntity(122U);
    msg.setDestination(24029U);
    msg.setDestinationEntity(109U);
    msg.source.assign("OFHMGRMLDKSLBYGKTJVTOYTPQEWQWICUAOQRXKPZHYUCABNRMACLWLDPEYORAXZSJYJCXTIDGIXWVTWESCBMRSUIHUQPJUBQWBXNLSSIXPUKLRMVGGCDPNEJWZPJZNSBEDBXMWNGZZPOKRWLE");
    const char tmp_msg_0[] = {80, 80, 92, 15, -102, -44, -9, -86, 45, -55, -75, 102, 124, 35, 124, 8, 21, -109, 1, -110, -95, -54, -117, -82, 119, -10, 13, 79, -116, 105, -46};
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
    msg.setTimeStamp(0.4798463305269426);
    msg.setSource(24066U);
    msg.setSourceEntity(56U);
    msg.setDestination(36928U);
    msg.setDestinationEntity(154U);
    msg.source.assign("VNPDCAPZKGQZWSRDMSHTOFMEQTMMNUFVZCNNFUPFGMOPCLIWSABEDKGYISGAGNGKRYHGRQLJXFYRERSZGFAIDZTWKKIXXDQ");
    const char tmp_msg_0[] = {-45, -99, -26, -48, 95, -84, -17, -100, -81, 45, 70, -26, -121, 76, 57, -89, 12, -73, 28, -113, -107, 78, 29, -3, -95, -109, -86, 96, 64, -9, 74, -23, 125, -99, -76, -128, -35, 62, 44, -30, 39, -57, -112, 92, -100, 48, 62, 117, 72, 61, -78, 114, -80, 29, 109, 100, -94, -53, -81, 86, 88, 89, -52, 18, -11, 43, 29, 40, 97, -70, -36, 20, -71, -123, 123, -109, -89, 119, 89, -47, 74, 62, -106, 25, 44, 83, 113, -83, -46, 116, -13, -73, 109, 122, 1, -44, 0, -20, 98, 3, -117, 5, 85, -80, 40, 86, -115, 119, -39, -23, -89, 12, -59, 37, -93, 70, 94, -18, -72, 40, -113, -93, -126, 103, 105, 81, 121, -15, 65, 57, 36, 12, 111, -45, -8, 84, 111, -126, 16, -17, 57, 40, 89, -22, 82, -115, 93, 38, -81, 92, 104, 55, -73, -92, -2, 100, -102, 51, 42, 69, 82, -11, -123, 68, -109, -6, -43, 34, -1, 45, -75, -67, -97, -83, -78, 88, 83, -123, -66, -104, 56, -118, -68, -27, -89, -124, 126, -19, -100, -88, -96, 49, 92, 26, -42, 59, -57, -86, 95, -116, 29, -7, 118, -11, 120, 81, 25, -55, -66, 56, 125, 62, 85, 126, 46, -95, -42, 30, -13, -107};
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
    msg.setTimeStamp(0.861365179732704);
    msg.setSource(52184U);
    msg.setSourceEntity(60U);
    msg.setDestination(11258U);
    msg.setDestinationEntity(104U);
    msg.seq = 1703657703U;
    msg.state = 107U;
    msg.error.assign("OCPCZTOTXEGNMUICQZABENXVBNEJOYRNAURXGLTKICFMRVTBVPKBABIWRSWTQCHYWTV");

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
    msg.setTimeStamp(0.6912342744057888);
    msg.setSource(17922U);
    msg.setSourceEntity(57U);
    msg.setDestination(43131U);
    msg.setDestinationEntity(214U);
    msg.seq = 2971002345U;
    msg.state = 119U;
    msg.error.assign("WTTPQJMOZVHYDCNFREVXJADDTUHINXWQTKTCLNMMGBELPJISEUPVXMRIZFGKCDCXMWRLIDRPPNBYKCZYNEFZKAQIJBMVUCSUGDAAPOSCNXYGIIIECCRLDADMHKLPSTPQMXWPHVLOJWIAZVBPAEFXTOOLDZAG");

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
    msg.setTimeStamp(0.7573989694870278);
    msg.setSource(9282U);
    msg.setSourceEntity(52U);
    msg.setDestination(38449U);
    msg.setDestinationEntity(57U);
    msg.seq = 49901435U;
    msg.state = 10U;
    msg.error.assign("ZEBMQXJEJSYIRCFSPCETZLCTIIJJJOXSIGIKLXRPZTKWYDQFAMEAJQCSPHHQOOORRZEECTWFUJSBDMFHHSWZKGPAWLOUQKRNDZZVSQAEVKXAYTGKXFPRXAMGNTMECDWIGNLXGXUIVLUQJAFNTUSHDDVFARDVWCKOTJRHZWECNYCBVELLDVMUIKGBURULNKBQFBTONPBDFVYMOYMWKWANYPYLABVYDFJGNSUZXIG");

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
    msg.setTimeStamp(0.5991871003863005);
    msg.setSource(30694U);
    msg.setSourceEntity(111U);
    msg.setDestination(4172U);
    msg.setDestinationEntity(58U);
    msg.id = 151U;
    msg.range = 0.19160659723251527;

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
    msg.setTimeStamp(0.4161997950433669);
    msg.setSource(16155U);
    msg.setSourceEntity(227U);
    msg.setDestination(29815U);
    msg.setDestinationEntity(239U);
    msg.id = 177U;
    msg.range = 0.29008148591315186;

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
    msg.setTimeStamp(0.3480897492323958);
    msg.setSource(37456U);
    msg.setSourceEntity(83U);
    msg.setDestination(26317U);
    msg.setDestinationEntity(233U);
    msg.id = 32U;
    msg.range = 0.6450001511312917;

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
    msg.setTimeStamp(0.7301117698445149);
    msg.setSource(59452U);
    msg.setSourceEntity(75U);
    msg.setDestination(56789U);
    msg.setDestinationEntity(237U);
    msg.tx = 148U;
    msg.channel = 175U;
    msg.timer = 59950U;

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
    msg.setTimeStamp(0.722703507845118);
    msg.setSource(56101U);
    msg.setSourceEntity(144U);
    msg.setDestination(31288U);
    msg.setDestinationEntity(65U);
    msg.tx = 192U;
    msg.channel = 18U;
    msg.timer = 17080U;

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
    msg.setTimeStamp(0.028751295924440146);
    msg.setSource(29316U);
    msg.setSourceEntity(90U);
    msg.setDestination(45260U);
    msg.setDestinationEntity(115U);
    msg.tx = 110U;
    msg.channel = 166U;
    msg.timer = 19764U;

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
    msg.setTimeStamp(0.5599134733805021);
    msg.setSource(52520U);
    msg.setSourceEntity(160U);
    msg.setDestination(13963U);
    msg.setDestinationEntity(98U);
    msg.beacon.assign("UKDYSSECCGEDSCVBLNENXTWXGZOZAMJATTHTYYUETIHBNBKUMPCNIWPSZROZJVXIBQNWMPUFHZMYUDQCCFBVQEOWJXNUNQDMMKMQGTVQIREIOWHDJQPAACVTARTPSCKIVYPVEOJRVHRRZNNUNQYWSHLDXPKVEBJGOMAUHBZXDZXRPFQJIULMLBPKKLWISSBSXXWGLPLFHFHGJOVCYDFJ");
    msg.lat = 0.9162399053973581;
    msg.lon = 0.3083597495534145;
    msg.depth = 0.9590816700030239;
    msg.query_channel = 1U;
    msg.reply_channel = 94U;
    msg.transponder_delay = 246U;

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
    msg.setTimeStamp(0.33666230546677656);
    msg.setSource(27189U);
    msg.setSourceEntity(85U);
    msg.setDestination(43584U);
    msg.setDestinationEntity(169U);
    msg.beacon.assign("FEUSCKWWEDORWXDIFFTOTPBVZKZHCCOIRPVFMUKNEQFMDMEABHAGTYSLJDBTPVEUCDLXBWOORUYCJIAVIRUYUL");
    msg.lat = 0.12307462680400527;
    msg.lon = 0.8792928288562151;
    msg.depth = 0.932983971231503;
    msg.query_channel = 22U;
    msg.reply_channel = 32U;
    msg.transponder_delay = 0U;

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
    msg.setTimeStamp(0.4712077166195445);
    msg.setSource(41299U);
    msg.setSourceEntity(102U);
    msg.setDestination(51016U);
    msg.setDestinationEntity(83U);
    msg.beacon.assign("WUXOGEQNRACOLOOQURELSBGGJLBTYXCDNNSBXRZCJCUTKYGPWKENKWRYIFYTRBVXHUYOPRGMZIWKPONHWTDONGDEIWRBJTQEKVPWPACEQTYFHMBFJDRLKR");
    msg.lat = 0.19998391270617089;
    msg.lon = 0.2953835065031124;
    msg.depth = 0.5239439714506208;
    msg.query_channel = 10U;
    msg.reply_channel = 133U;
    msg.transponder_delay = 146U;

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
    msg.setTimeStamp(0.8351709549566186);
    msg.setSource(13402U);
    msg.setSourceEntity(129U);
    msg.setDestination(3574U);
    msg.setDestinationEntity(215U);
    msg.op = 236U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EMGWXXUQAOHJLETDOHIQRBIZFBGSOJMXKKLGSVVAJAYHZVYQMNPEKTSPOEQMYTVGDRPHWAYMZLNYBXLBHDKTAZFFLZVBYNBMXJQVNSRGPLSBDJDQFNWICXWCXBQDGMAIUUDDUGQFPOSNCLRFHVUCARTSUANHCRTFNDBSGZJHNXCEXCECVIOSYVOLZWEIMVKOWNZTYGWPZICIWFEZKYJDWKJKUEOEMPURJUQIWGHKPTIYOJXPPRCUFARR");
    tmp_msg_0.lat = 0.13701764273360684;
    tmp_msg_0.lon = 0.6904116119530983;
    tmp_msg_0.depth = 0.3462600891286829;
    tmp_msg_0.query_channel = 22U;
    tmp_msg_0.reply_channel = 110U;
    tmp_msg_0.transponder_delay = 88U;
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
    msg.setTimeStamp(0.5661194143303391);
    msg.setSource(55729U);
    msg.setSourceEntity(209U);
    msg.setDestination(26550U);
    msg.setDestinationEntity(99U);
    msg.op = 166U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GAIVIPIDUNAKVWVBFYQSBANKMEVFMNDRXPWRZPZOFMRDCJKPWSLKOXCFBZZGNOEJLGHIDEJMPXMJWYNQSQKURTKKGVMQTEDHSONCHBZSBZCDAYLYYTIZOIWWXGWUWMRWDJGFELUICECNLKLRQOULNHCXZHBBILSYPTSCZTQVYVTXEKMAUIFOAORRNQUMQVBHFAPYVXJADBAFDWDCXSE");
    tmp_msg_0.lat = 0.39108291520998084;
    tmp_msg_0.lon = 0.4295613701892588;
    tmp_msg_0.depth = 0.20749046764618384;
    tmp_msg_0.query_channel = 18U;
    tmp_msg_0.reply_channel = 8U;
    tmp_msg_0.transponder_delay = 60U;
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
    msg.setTimeStamp(0.263109867666962);
    msg.setSource(58568U);
    msg.setSourceEntity(32U);
    msg.setDestination(29785U);
    msg.setDestinationEntity(169U);
    msg.op = 18U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IEHWVTWQUTROMZIEGCIDDNERPXNHTNFWJHVYKG");
    tmp_msg_0.lat = 0.33130658204710284;
    tmp_msg_0.lon = 0.47909359663451256;
    tmp_msg_0.depth = 0.5088827597423747;
    tmp_msg_0.query_channel = 116U;
    tmp_msg_0.reply_channel = 177U;
    tmp_msg_0.transponder_delay = 158U;
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
    msg.setTimeStamp(0.19188141438653417);
    msg.setSource(64744U);
    msg.setSourceEntity(45U);
    msg.setDestination(55104U);
    msg.setDestinationEntity(8U);
    msg.address = 249U;

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
    msg.setTimeStamp(0.20024562881330166);
    msg.setSource(12573U);
    msg.setSourceEntity(219U);
    msg.setDestination(40355U);
    msg.setDestinationEntity(35U);
    msg.address = 99U;

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
    msg.setTimeStamp(0.8015814353980578);
    msg.setSource(53910U);
    msg.setSourceEntity(98U);
    msg.setDestination(42035U);
    msg.setDestinationEntity(98U);
    msg.address = 244U;

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
    msg.setTimeStamp(0.9079054357982097);
    msg.setSource(32370U);
    msg.setSourceEntity(135U);
    msg.setDestination(18051U);
    msg.setDestinationEntity(19U);
    msg.address = 218U;
    msg.status = 32U;
    msg.range = 0.7349451243643332;

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
    msg.setTimeStamp(0.6206749867861303);
    msg.setSource(52012U);
    msg.setSourceEntity(91U);
    msg.setDestination(55845U);
    msg.setDestinationEntity(34U);
    msg.address = 204U;
    msg.status = 247U;
    msg.range = 0.0452843721947902;

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
    msg.setTimeStamp(0.9712318781070025);
    msg.setSource(45229U);
    msg.setSourceEntity(196U);
    msg.setDestination(62796U);
    msg.setDestinationEntity(211U);
    msg.address = 73U;
    msg.status = 17U;
    msg.range = 0.4510884159018915;

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
    msg.setTimeStamp(0.08576991922363142);
    msg.setSource(17780U);
    msg.setSourceEntity(82U);
    msg.setDestination(50356U);
    msg.setDestinationEntity(60U);
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("IMAXLGJQIQWQXIBZJZCDOFPOVUGFMRUAZGFBHEOHOACSTAQBNPJYHEKNHDWAYIBPNOYZARXBTJPOSQSOWZKNXMCOVKUDFBVYVSZSTMCKJIFUUOLHNQEDQ");
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
    msg.setTimeStamp(0.29794536572113817);
    msg.setSource(33824U);
    msg.setSourceEntity(25U);
    msg.setDestination(7447U);
    msg.setDestinationEntity(233U);
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 170U;
    tmp_msg_0.plan_id.assign("CEVJKAJXLIXMHBABYJLLBXHXHIPQVECDSQRKAMEHCGLWIZOVRFNUTPZMGGSKHCNNBAPWYCFGQOUJBMYTKYIWVJSSRSMZJEEMAQOTZJLXZQZUUIYOETMIIOZUWCFSMFCPXXVPIONPKTNNXHZEFWBGJYNRNDECCFITFTODALOUFQRPYRVSRSVLBLGCPQTDWZ");
    tmp_msg_0.comm_level = 229U;
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
    msg.setTimeStamp(0.34459353013147553);
    msg.setSource(5177U);
    msg.setSourceEntity(211U);
    msg.setDestination(31836U);
    msg.setDestinationEntity(102U);
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.21313758083678724;
    tmp_msg_0.lon = 0.03476547762988924;
    tmp_msg_0.alt = 0.5126761495693772;
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
    msg.setTimeStamp(0.6586617735222012);
    msg.setSource(26173U);
    msg.setSourceEntity(211U);
    msg.setDestination(51176U);
    msg.setDestinationEntity(240U);
    msg.enable = 59U;

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
    msg.setTimeStamp(0.43033341288634575);
    msg.setSource(9204U);
    msg.setSourceEntity(235U);
    msg.setDestination(44868U);
    msg.setDestinationEntity(2U);
    msg.enable = 178U;

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
    msg.setTimeStamp(0.22673477118676844);
    msg.setSource(17613U);
    msg.setSourceEntity(92U);
    msg.setDestination(2760U);
    msg.setDestinationEntity(214U);
    msg.enable = 98U;

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
    msg.setTimeStamp(0.21528154970665647);
    msg.setSource(5898U);
    msg.setSourceEntity(204U);
    msg.setDestination(45085U);
    msg.setDestinationEntity(163U);
    msg.summary = 145U;
    msg.level = 205U;

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
    msg.setTimeStamp(0.8122839623109975);
    msg.setSource(22885U);
    msg.setSourceEntity(195U);
    msg.setDestination(21342U);
    msg.setDestinationEntity(247U);
    msg.summary = 105U;
    msg.level = 170U;

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
    msg.setTimeStamp(0.4290929452690283);
    msg.setSource(8201U);
    msg.setSourceEntity(105U);
    msg.setDestination(24047U);
    msg.setDestinationEntity(209U);
    msg.summary = 154U;
    msg.level = 82U;

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
    msg.setTimeStamp(0.6456287950772873);
    msg.setSource(21087U);
    msg.setSourceEntity(141U);
    msg.setDestination(2009U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.6354950496056545);
    msg.setSource(7339U);
    msg.setSourceEntity(112U);
    msg.setDestination(719U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.09073617612063367);
    msg.setSource(55924U);
    msg.setSourceEntity(72U);
    msg.setDestination(54210U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.5290175732645508);
    msg.setSource(46840U);
    msg.setSourceEntity(126U);
    msg.setDestination(1857U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.9670989485526222);
    msg.setSource(46783U);
    msg.setSourceEntity(60U);
    msg.setDestination(59084U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.5465684374905312);
    msg.setSource(33936U);
    msg.setSourceEntity(233U);
    msg.setDestination(17225U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.9284416333987561);
    msg.setSource(42040U);
    msg.setSourceEntity(192U);
    msg.setDestination(32914U);
    msg.setDestinationEntity(162U);
    msg.op = 198U;
    msg.system.assign("DGOMIMAVZVCAZOXFUJUJHBCXKYGTYZKOWHYCYLAJBMKTIEINXIIHAHOBLDGKJPEHZNLQSDPFOUDPBQOABCDFDUWIGVVDCOMEZNGKTLLKRXCHFQVUYSPGDRSBZXFXOGFMTVQJTWRHKUZULGRTJEFGJAPKBSTZHRMETQEMCLSQPNYRERNNAXEJQRKPXWCWNLHVMORUWWSHJAVIFTQINYFSSISTDUN");
    msg.range = 0.7328200339210891;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.03066114635518935);
    msg.setSource(62824U);
    msg.setSourceEntity(23U);
    msg.setDestination(1106U);
    msg.setDestinationEntity(40U);
    msg.op = 160U;
    msg.system.assign("MAZQCESJRIVENZZYMSBQXNFPXYWIETWCR");
    msg.range = 0.43179355220436244;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.06582560481770261;
    tmp_msg_0.lon = 0.493483527441552;
    tmp_msg_0.depth = 0.6131997148795918;
    tmp_msg_0.roll = 0.31657316072142627;
    tmp_msg_0.pitch = 0.26874301455318084;
    tmp_msg_0.yaw = 0.004201379283097606;
    tmp_msg_0.rcp_time = 0.43570091009685163;
    tmp_msg_0.sid.assign("KNHGOYFHGNDSHFUBFOWOEVIXGYIHCPKLBXIOJKCRWHWVYJQWYAANZRKJRIBNTMDYRCLVGDRKQVGEQEVJTCMZPAMUOEPSQMFGIXIPOXTLBXUBMJXJDHWMBAXLTECOEZTPHZUEXUNMVYFYAZFRFLKSWIOJMTWCVUZNAPUNDRBHIFTMNGCJQZQJVRSSSTSUTXIPFERGAQBZYDOTRMBLNZAJWKKCVWDKANYDUOLEHCZQDUIH");
    tmp_msg_0.s_type = 221U;
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
    msg.setTimeStamp(0.9999011275611007);
    msg.setSource(32172U);
    msg.setSourceEntity(214U);
    msg.setDestination(1682U);
    msg.setDestinationEntity(128U);
    msg.op = 25U;
    msg.system.assign("JUYHNZFLIBQMFAGJHKFMGFHCXTQIUVWNVFLHANORAGJGDCSKDENIAWWRYFQFGXOXOTIFERKERVVHMAPGUVOUCLUSXNEMYGSBBTBIMRTRIBTKDPEIAWOJPPPTXXQQDHTEZTAZCNIKPDUBYPZZDVNAHQZMJWIXSCLLQOVPZRICSPEYSJJDSKQRWVYMHHYTKSVMDAXREDBJKLNW");
    msg.range = 0.8819606309910993;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.35014300883075944);
    msg.setSource(24923U);
    msg.setSourceEntity(98U);
    msg.setDestination(61221U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.13495429468826547);
    msg.setSource(43709U);
    msg.setSourceEntity(154U);
    msg.setDestination(36018U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.8474414723306939);
    msg.setSource(23430U);
    msg.setSourceEntity(105U);
    msg.setDestination(50487U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.30358525593264596);
    msg.setSource(9093U);
    msg.setSourceEntity(83U);
    msg.setDestination(64683U);
    msg.setDestinationEntity(30U);
    msg.list.assign("YJTULTIXZMERFQJBKQNWDMZEQNAUPYLGDBIPHCLJPAGIOASWZTTSNEWECPXWSAAFQDGXUEXDUDMZ");

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
    msg.setTimeStamp(0.23783739189804654);
    msg.setSource(64492U);
    msg.setSourceEntity(178U);
    msg.setDestination(23874U);
    msg.setDestinationEntity(240U);
    msg.list.assign("EDNYJAORLITXJBFDUZSGLUTDJLSNKEUYYTHEATICLFUEXWCQXOOSQDDPATMXWMJVXMPARNMBMEZFGXBIOZGHPMQSIHOBFCBOHSLTZZXLVSYCGMKWNVYLARIQWWJEVBDMIJEFHYRTOJSKBAPRWABZSSDOQUGZQRIFIFNVKQXBLFDUGTYLWXSCJVJOHCOITPKFHDUZRPPNRCQCVGWCAUVYKQBNGZHUHNKARWPKNPLYUZCEIMPFYJKVMRKXQWHGTE");

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
    msg.setTimeStamp(0.7493441019819215);
    msg.setSource(27613U);
    msg.setSourceEntity(30U);
    msg.setDestination(21539U);
    msg.setDestinationEntity(71U);
    msg.list.assign("QMCZWGYROHRDTKJOCDVKBRGMWNOCXWTMBTXIYBWVHXLHQRYXHAMFULENWFHJUKVJMSSWCBORXSIQYEDIQAEHBDCWYTSSZSILFPJETEOHDOAVPGZLPEWKNUKRQYAHNCPJYNVDTEQVYRWSGUENUBLFFFDVPKZPFGNDXAATOWSBPUFBOVPNQNVFLCZIAZECBDHGMKULXPTGIMSTZZGIRLIGRVQTROMXLXJCEAQFKXJ");

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
    msg.setTimeStamp(0.9962693569067601);
    msg.setSource(25702U);
    msg.setSourceEntity(194U);
    msg.setDestination(49075U);
    msg.setDestinationEntity(189U);
    msg.value = 21476;

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
    msg.setTimeStamp(0.3165076493192176);
    msg.setSource(63803U);
    msg.setSourceEntity(2U);
    msg.setDestination(26452U);
    msg.setDestinationEntity(9U);
    msg.value = -11778;

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
    msg.setTimeStamp(0.6099473317459577);
    msg.setSource(1315U);
    msg.setSourceEntity(144U);
    msg.setDestination(53354U);
    msg.setDestinationEntity(240U);
    msg.value = -1066;

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
    msg.setTimeStamp(0.9433798940957847);
    msg.setSource(528U);
    msg.setSourceEntity(187U);
    msg.setDestination(50469U);
    msg.setDestinationEntity(34U);
    msg.value = 0.2224000025675672;

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
    msg.setTimeStamp(0.4824203611637048);
    msg.setSource(36576U);
    msg.setSourceEntity(157U);
    msg.setDestination(52981U);
    msg.setDestinationEntity(243U);
    msg.value = 0.030983186445321165;

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
    msg.setTimeStamp(0.5918697899697729);
    msg.setSource(19436U);
    msg.setSourceEntity(72U);
    msg.setDestination(28116U);
    msg.setDestinationEntity(249U);
    msg.value = 0.008654018047330014;

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
    msg.setTimeStamp(0.481929998066157);
    msg.setSource(54127U);
    msg.setSourceEntity(243U);
    msg.setDestination(43709U);
    msg.setDestinationEntity(90U);
    msg.value = 0.03863330914072127;

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
    msg.setTimeStamp(0.6387700095759028);
    msg.setSource(10406U);
    msg.setSourceEntity(104U);
    msg.setDestination(19678U);
    msg.setDestinationEntity(39U);
    msg.value = 0.029692314418648502;

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
    msg.setTimeStamp(0.4993120838645);
    msg.setSource(30310U);
    msg.setSourceEntity(124U);
    msg.setDestination(27554U);
    msg.setDestinationEntity(229U);
    msg.value = 0.13242949262947157;

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
    msg.setTimeStamp(0.7194608857328569);
    msg.setSource(9714U);
    msg.setSourceEntity(238U);
    msg.setDestination(26299U);
    msg.setDestinationEntity(80U);
    msg.validity = 56204U;
    msg.type = 195U;
    msg.utc_year = 46840U;
    msg.utc_month = 50U;
    msg.utc_day = 213U;
    msg.utc_time = 0.41121881332524823;
    msg.lat = 0.793724609080658;
    msg.lon = 0.45968754152130376;
    msg.height = 0.8834500079309503;
    msg.satellites = 205U;
    msg.cog = 0.030611070771911497;
    msg.sog = 0.5050064414439805;
    msg.hdop = 0.05068920761292883;
    msg.vdop = 0.7879589858811725;
    msg.hacc = 0.5506772160518801;
    msg.vacc = 0.27050871878176763;

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
    msg.setTimeStamp(0.440517650723827);
    msg.setSource(17998U);
    msg.setSourceEntity(20U);
    msg.setDestination(64930U);
    msg.setDestinationEntity(9U);
    msg.validity = 31828U;
    msg.type = 39U;
    msg.utc_year = 8153U;
    msg.utc_month = 110U;
    msg.utc_day = 224U;
    msg.utc_time = 0.926344538691427;
    msg.lat = 0.8584567541324379;
    msg.lon = 0.6678858728541114;
    msg.height = 0.9276996264943812;
    msg.satellites = 31U;
    msg.cog = 0.5607040591562136;
    msg.sog = 0.7017846251328251;
    msg.hdop = 0.1687183035724179;
    msg.vdop = 0.4117463505501382;
    msg.hacc = 0.8240943755496597;
    msg.vacc = 0.17391265062868067;

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
    msg.setTimeStamp(0.1360695601054972);
    msg.setSource(36310U);
    msg.setSourceEntity(204U);
    msg.setDestination(51666U);
    msg.setDestinationEntity(226U);
    msg.validity = 12074U;
    msg.type = 233U;
    msg.utc_year = 31159U;
    msg.utc_month = 7U;
    msg.utc_day = 239U;
    msg.utc_time = 0.6344809007364863;
    msg.lat = 0.5584935542491566;
    msg.lon = 0.6006077153515627;
    msg.height = 0.8673490789553364;
    msg.satellites = 186U;
    msg.cog = 0.24497185466954674;
    msg.sog = 0.8888491897374862;
    msg.hdop = 0.4071364027522344;
    msg.vdop = 0.18863782080169522;
    msg.hacc = 0.6804923374734777;
    msg.vacc = 0.25632016277519265;

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
    msg.setTimeStamp(0.3725535454414127);
    msg.setSource(38256U);
    msg.setSourceEntity(58U);
    msg.setDestination(10859U);
    msg.setDestinationEntity(212U);
    msg.time = 0.7299372425230407;
    msg.phi = 0.9990332666860251;
    msg.theta = 0.06617692921687712;
    msg.psi = 0.7283456443974134;
    msg.psi_magnetic = 0.2974796572780224;

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
    msg.setTimeStamp(0.21407407111191978);
    msg.setSource(39020U);
    msg.setSourceEntity(40U);
    msg.setDestination(58514U);
    msg.setDestinationEntity(74U);
    msg.time = 0.0667381741609846;
    msg.phi = 0.5077708889862594;
    msg.theta = 0.5164105098112084;
    msg.psi = 0.97293958724407;
    msg.psi_magnetic = 0.24506778731806278;

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
    msg.setTimeStamp(0.09648720534771937);
    msg.setSource(37905U);
    msg.setSourceEntity(53U);
    msg.setDestination(55107U);
    msg.setDestinationEntity(21U);
    msg.time = 0.2037706269429037;
    msg.phi = 0.30414536432777317;
    msg.theta = 0.4673296903507793;
    msg.psi = 0.6342005172054355;
    msg.psi_magnetic = 0.9426701430333578;

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
    msg.setTimeStamp(0.6816947143360106);
    msg.setSource(44262U);
    msg.setSourceEntity(134U);
    msg.setDestination(63765U);
    msg.setDestinationEntity(68U);
    msg.time = 0.7537936093171855;
    msg.x = 0.4681471090494752;
    msg.y = 0.911078397017956;
    msg.z = 0.8811873128425951;
    msg.timestep = 0.9791954628167545;

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
    msg.setTimeStamp(0.842389891777849);
    msg.setSource(58435U);
    msg.setSourceEntity(95U);
    msg.setDestination(28404U);
    msg.setDestinationEntity(62U);
    msg.time = 0.7060818932467026;
    msg.x = 0.10052475792765359;
    msg.y = 0.14777239869280745;
    msg.z = 0.5868656032258651;
    msg.timestep = 0.4328297359474855;

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
    msg.setTimeStamp(0.21895153404400303);
    msg.setSource(57638U);
    msg.setSourceEntity(66U);
    msg.setDestination(58231U);
    msg.setDestinationEntity(182U);
    msg.time = 0.21442439815773595;
    msg.x = 0.5097439311781329;
    msg.y = 0.41638620691479444;
    msg.z = 0.5055279848969012;
    msg.timestep = 0.7290944739023024;

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
    msg.setTimeStamp(0.02691562406950887);
    msg.setSource(57494U);
    msg.setSourceEntity(75U);
    msg.setDestination(15762U);
    msg.setDestinationEntity(215U);
    msg.time = 0.3572534981734983;
    msg.x = 0.2900438877195044;
    msg.y = 0.005214015193654387;
    msg.z = 0.1792254923646166;

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
    msg.setTimeStamp(0.6887255843667742);
    msg.setSource(14500U);
    msg.setSourceEntity(218U);
    msg.setDestination(42271U);
    msg.setDestinationEntity(174U);
    msg.time = 0.8854054912292569;
    msg.x = 0.9510855104002567;
    msg.y = 0.6977358331846194;
    msg.z = 0.12997104238978618;

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
    msg.setTimeStamp(0.29446432548227075);
    msg.setSource(15985U);
    msg.setSourceEntity(127U);
    msg.setDestination(64751U);
    msg.setDestinationEntity(65U);
    msg.time = 0.377051583003424;
    msg.x = 0.8103203052423715;
    msg.y = 0.12520316960385147;
    msg.z = 0.37862619550244303;

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
    msg.setTimeStamp(0.7315094209822076);
    msg.setSource(47932U);
    msg.setSourceEntity(191U);
    msg.setDestination(3841U);
    msg.setDestinationEntity(186U);
    msg.time = 0.07391410315207325;
    msg.x = 0.5334056599526487;
    msg.y = 0.9709506062772403;
    msg.z = 0.9417529672587908;

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
    msg.setTimeStamp(0.9730198143405545);
    msg.setSource(43042U);
    msg.setSourceEntity(22U);
    msg.setDestination(56431U);
    msg.setDestinationEntity(219U);
    msg.time = 0.4905165821418217;
    msg.x = 0.663747079531946;
    msg.y = 0.8098705172663754;
    msg.z = 0.8704214571707773;

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
    msg.setTimeStamp(0.8442927034625735);
    msg.setSource(50650U);
    msg.setSourceEntity(75U);
    msg.setDestination(58576U);
    msg.setDestinationEntity(58U);
    msg.time = 0.05821091980215953;
    msg.x = 0.08916380691908021;
    msg.y = 0.28276439054575353;
    msg.z = 0.019839646163154367;

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
    msg.setTimeStamp(0.3012983704433325);
    msg.setSource(818U);
    msg.setSourceEntity(124U);
    msg.setDestination(42268U);
    msg.setDestinationEntity(136U);
    msg.time = 0.4393987279601854;
    msg.x = 0.2639795923138387;
    msg.y = 0.5431901458014193;
    msg.z = 0.7878318243087314;

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
    msg.setTimeStamp(0.10728467385194429);
    msg.setSource(7695U);
    msg.setSourceEntity(138U);
    msg.setDestination(5828U);
    msg.setDestinationEntity(246U);
    msg.time = 0.3620391370740882;
    msg.x = 0.6891277739498466;
    msg.y = 0.3385190999897074;
    msg.z = 0.1651070061211095;

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
    msg.setTimeStamp(0.5445463561772639);
    msg.setSource(45551U);
    msg.setSourceEntity(73U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(9U);
    msg.time = 0.7200097414670119;
    msg.x = 0.36199193090896675;
    msg.y = 0.38539627568000967;
    msg.z = 0.08910361986517124;

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
    msg.setTimeStamp(0.1974515844423259);
    msg.setSource(27487U);
    msg.setSourceEntity(217U);
    msg.setDestination(5320U);
    msg.setDestinationEntity(74U);
    msg.validity = 169U;
    msg.x = 0.8106302244960857;
    msg.y = 0.417759913613567;
    msg.z = 0.5247038604445369;

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
    msg.setTimeStamp(0.9646243811721135);
    msg.setSource(52788U);
    msg.setSourceEntity(119U);
    msg.setDestination(25781U);
    msg.setDestinationEntity(221U);
    msg.validity = 55U;
    msg.x = 0.5031937122377688;
    msg.y = 0.8203246694803612;
    msg.z = 0.4351205061461658;

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
    msg.setTimeStamp(0.06749916193264116);
    msg.setSource(14097U);
    msg.setSourceEntity(143U);
    msg.setDestination(3489U);
    msg.setDestinationEntity(117U);
    msg.validity = 97U;
    msg.x = 0.06553551767809795;
    msg.y = 0.38340363063405625;
    msg.z = 0.9432308627074547;

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
    msg.setTimeStamp(0.10609955478735489);
    msg.setSource(34505U);
    msg.setSourceEntity(115U);
    msg.setDestination(6320U);
    msg.setDestinationEntity(129U);
    msg.validity = 175U;
    msg.x = 0.26931302801512025;
    msg.y = 0.29635484414747904;
    msg.z = 0.20391338641877887;

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
    msg.setTimeStamp(0.9257708701716244);
    msg.setSource(45315U);
    msg.setSourceEntity(35U);
    msg.setDestination(39155U);
    msg.setDestinationEntity(127U);
    msg.validity = 167U;
    msg.x = 0.05889330527276837;
    msg.y = 0.4017845718340911;
    msg.z = 0.1442320564338122;

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
    msg.setTimeStamp(0.2728265921031491);
    msg.setSource(50334U);
    msg.setSourceEntity(127U);
    msg.setDestination(13323U);
    msg.setDestinationEntity(65U);
    msg.validity = 94U;
    msg.x = 0.6556115708109137;
    msg.y = 0.39658159614690425;
    msg.z = 0.7709817112212458;

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
    msg.setTimeStamp(0.3413449350925867);
    msg.setSource(8141U);
    msg.setSourceEntity(204U);
    msg.setDestination(5897U);
    msg.setDestinationEntity(183U);
    msg.time = 0.9268466122179155;
    msg.x = 0.9329758886138098;
    msg.y = 0.5979440173860406;
    msg.z = 0.19565902993413975;

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
    msg.setTimeStamp(0.32517157940825403);
    msg.setSource(2663U);
    msg.setSourceEntity(35U);
    msg.setDestination(37025U);
    msg.setDestinationEntity(132U);
    msg.time = 0.2221785294284664;
    msg.x = 0.7012932545674694;
    msg.y = 0.1967563698244661;
    msg.z = 0.4040791305530551;

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
    msg.setTimeStamp(0.7318540541725727);
    msg.setSource(31120U);
    msg.setSourceEntity(54U);
    msg.setDestination(6990U);
    msg.setDestinationEntity(75U);
    msg.time = 0.8969678406053312;
    msg.x = 0.7971022874558098;
    msg.y = 0.5372486106531009;
    msg.z = 0.04764627871753124;

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
    msg.setTimeStamp(0.5993251880493792);
    msg.setSource(43125U);
    msg.setSourceEntity(106U);
    msg.setDestination(15178U);
    msg.setDestinationEntity(47U);
    msg.validity = 162U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9054335773163459;
    tmp_msg_0.beam_height = 0.5897882917622086;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4995175402864087;

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
    msg.setTimeStamp(0.9580020148521278);
    msg.setSource(2396U);
    msg.setSourceEntity(225U);
    msg.setDestination(22231U);
    msg.setDestinationEntity(8U);
    msg.validity = 93U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.04353373592798526;
    tmp_msg_0.y = 0.99590640802836;
    tmp_msg_0.z = 0.7218010399842236;
    tmp_msg_0.phi = 0.6429229280525881;
    tmp_msg_0.theta = 0.708643068523647;
    tmp_msg_0.psi = 0.5535905590125957;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5456175182015048;

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
    msg.setTimeStamp(0.0850473641781142);
    msg.setSource(44168U);
    msg.setSourceEntity(193U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(58U);
    msg.validity = 64U;
    msg.value = 0.07261629115648804;

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
    msg.setTimeStamp(0.16745939718191927);
    msg.setSource(60317U);
    msg.setSourceEntity(137U);
    msg.setDestination(53252U);
    msg.setDestinationEntity(215U);
    msg.value = 0.4424966130789415;

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
    msg.setTimeStamp(0.5255348805131711);
    msg.setSource(47295U);
    msg.setSourceEntity(96U);
    msg.setDestination(49891U);
    msg.setDestinationEntity(121U);
    msg.value = 0.6288093967436534;

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
    msg.setTimeStamp(0.010339901939593);
    msg.setSource(20051U);
    msg.setSourceEntity(66U);
    msg.setDestination(57684U);
    msg.setDestinationEntity(46U);
    msg.value = 0.48324654056955785;

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
    msg.setTimeStamp(0.9422105121890546);
    msg.setSource(43426U);
    msg.setSourceEntity(165U);
    msg.setDestination(29424U);
    msg.setDestinationEntity(238U);
    msg.value = 0.07473395006594363;

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
    msg.setTimeStamp(0.8356751370348784);
    msg.setSource(29708U);
    msg.setSourceEntity(196U);
    msg.setDestination(31059U);
    msg.setDestinationEntity(164U);
    msg.value = 0.19306064863382122;

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
    msg.setTimeStamp(0.4564490775551254);
    msg.setSource(50945U);
    msg.setSourceEntity(105U);
    msg.setDestination(34793U);
    msg.setDestinationEntity(43U);
    msg.value = 0.5711852098419099;

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
    msg.setTimeStamp(0.7091227733201243);
    msg.setSource(20358U);
    msg.setSourceEntity(31U);
    msg.setDestination(42996U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7189367836514013;

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
    msg.setTimeStamp(0.7790503569506757);
    msg.setSource(24430U);
    msg.setSourceEntity(146U);
    msg.setDestination(35627U);
    msg.setDestinationEntity(19U);
    msg.value = 0.768269340709367;

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
    msg.setTimeStamp(0.9963970090412246);
    msg.setSource(23693U);
    msg.setSourceEntity(161U);
    msg.setDestination(64108U);
    msg.setDestinationEntity(123U);
    msg.value = 0.4745461293826818;

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
    msg.setTimeStamp(0.7679599945258873);
    msg.setSource(46822U);
    msg.setSourceEntity(121U);
    msg.setDestination(30530U);
    msg.setDestinationEntity(78U);
    msg.value = 0.06375504029688261;

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
    msg.setTimeStamp(0.10683185212136881);
    msg.setSource(22439U);
    msg.setSourceEntity(20U);
    msg.setDestination(17230U);
    msg.setDestinationEntity(44U);
    msg.value = 0.4056986562878273;

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
    msg.setTimeStamp(0.4488665519304965);
    msg.setSource(61757U);
    msg.setSourceEntity(253U);
    msg.setDestination(54101U);
    msg.setDestinationEntity(165U);
    msg.value = 0.8709187917534084;

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
    msg.setTimeStamp(0.5924112794872977);
    msg.setSource(45174U);
    msg.setSourceEntity(11U);
    msg.setDestination(43142U);
    msg.setDestinationEntity(7U);
    msg.value = 0.8494297033136764;

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
    msg.setTimeStamp(0.43688488799916503);
    msg.setSource(1165U);
    msg.setSourceEntity(136U);
    msg.setDestination(62887U);
    msg.setDestinationEntity(124U);
    msg.value = 0.18776635036097833;

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
    msg.setTimeStamp(0.14254849557939697);
    msg.setSource(34229U);
    msg.setSourceEntity(198U);
    msg.setDestination(39984U);
    msg.setDestinationEntity(208U);
    msg.value = 0.9109159980165679;

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
    msg.setTimeStamp(0.5304726081481479);
    msg.setSource(24870U);
    msg.setSourceEntity(41U);
    msg.setDestination(55714U);
    msg.setDestinationEntity(105U);
    msg.value = 0.9500744721424343;

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
    msg.setTimeStamp(0.47719614927965504);
    msg.setSource(7564U);
    msg.setSourceEntity(124U);
    msg.setDestination(46667U);
    msg.setDestinationEntity(233U);
    msg.value = 0.6291607494252847;

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
    msg.setTimeStamp(0.7240168173461595);
    msg.setSource(64631U);
    msg.setSourceEntity(164U);
    msg.setDestination(56979U);
    msg.setDestinationEntity(166U);
    msg.value = 0.5698782849509857;

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
    msg.setTimeStamp(0.9092181792590303);
    msg.setSource(47299U);
    msg.setSourceEntity(240U);
    msg.setDestination(22560U);
    msg.setDestinationEntity(156U);
    msg.value = 0.6794233407749061;

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
    msg.setTimeStamp(0.6505603730796181);
    msg.setSource(33827U);
    msg.setSourceEntity(35U);
    msg.setDestination(46932U);
    msg.setDestinationEntity(251U);
    msg.value = 0.2898924078748921;

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
    msg.setTimeStamp(0.27357301715733207);
    msg.setSource(55257U);
    msg.setSourceEntity(166U);
    msg.setDestination(6411U);
    msg.setDestinationEntity(169U);
    msg.value = 0.07109980147154371;

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
    msg.setTimeStamp(0.32266404604907695);
    msg.setSource(21584U);
    msg.setSourceEntity(94U);
    msg.setDestination(41057U);
    msg.setDestinationEntity(51U);
    msg.value = 0.003597339044136283;

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
    msg.setTimeStamp(0.00012734564677796545);
    msg.setSource(16176U);
    msg.setSourceEntity(226U);
    msg.setDestination(2268U);
    msg.setDestinationEntity(87U);
    msg.value = 0.6825025146274063;

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
    msg.setTimeStamp(0.5910288057568651);
    msg.setSource(11131U);
    msg.setSourceEntity(18U);
    msg.setDestination(63055U);
    msg.setDestinationEntity(167U);
    msg.value = 0.10398426361732038;

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
    msg.setTimeStamp(0.2681049888246815);
    msg.setSource(4686U);
    msg.setSourceEntity(103U);
    msg.setDestination(58120U);
    msg.setDestinationEntity(232U);
    msg.direction = 0.6149094497952153;
    msg.speed = 0.6133930926157466;

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
    msg.setTimeStamp(0.03848866514906246);
    msg.setSource(15873U);
    msg.setSourceEntity(12U);
    msg.setDestination(20409U);
    msg.setDestinationEntity(1U);
    msg.direction = 0.6056943262298455;
    msg.speed = 0.8460383683903322;

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
    msg.setTimeStamp(0.4565770493845017);
    msg.setSource(48069U);
    msg.setSourceEntity(93U);
    msg.setDestination(32138U);
    msg.setDestinationEntity(95U);
    msg.direction = 0.12402349249386035;
    msg.speed = 0.8527955326315101;

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
    msg.setTimeStamp(0.8849102488752956);
    msg.setSource(23505U);
    msg.setSourceEntity(232U);
    msg.setDestination(33092U);
    msg.setDestinationEntity(141U);
    msg.value = 0.13955327281112806;

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
    msg.setTimeStamp(0.6568494133396661);
    msg.setSource(1988U);
    msg.setSourceEntity(160U);
    msg.setDestination(1727U);
    msg.setDestinationEntity(39U);
    msg.value = 0.6245878387692849;

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
    msg.setTimeStamp(0.9755981147008537);
    msg.setSource(25877U);
    msg.setSourceEntity(239U);
    msg.setDestination(19708U);
    msg.setDestinationEntity(107U);
    msg.value = 0.4945811818903745;

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
    msg.setTimeStamp(0.9247300673815715);
    msg.setSource(17893U);
    msg.setSourceEntity(91U);
    msg.setDestination(62029U);
    msg.setDestinationEntity(242U);
    msg.value.assign("JEVVFZYYPNUREOXHJQJZJBLMISEYJXGCNZZWIMXFIHRRFZRKEHEMORPLDAAGOSLGIKQCGNNTWVHHLKJDINKETQXXFQFRHXXKLDYDJCVPOCFDKWXLIYLXHPZAADMRYZOKESGSYCUIDXSVUCFMPTVBBJDRFSQPOQKZUCWQUGDHNQWNCIVGJEOUBBPQKMHPUANAOCFGLTASABKMNGYUGTSUCWYTOVERDMSWTBJ");

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
    msg.setTimeStamp(0.5847289493119102);
    msg.setSource(56733U);
    msg.setSourceEntity(66U);
    msg.setDestination(8834U);
    msg.setDestinationEntity(240U);
    msg.value.assign("UNUVHIQIXNYZIJXYSXITOWSVJCPHUWKYMFVRNBNFPTQUGQKEVWNRAFRTUYLZMDPDHAQOZUJMAQGOKWGCGZAASEPOXGMZNMVLZPXOYJRJBPAYTK");

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
    msg.setTimeStamp(0.4358682127645237);
    msg.setSource(21360U);
    msg.setSourceEntity(58U);
    msg.setDestination(56764U);
    msg.setDestinationEntity(139U);
    msg.value.assign("FFWKVFEWFIWAFDGPMJXQEYPUTZHIESKTIHDVGAKPTDYRLUTXPKQODBZGVNLGERBMQCEUMCNXYFBWOCLMVQTOIHLZKSSRNSHIHKVXGGLHSWSODTA");

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
    msg.setTimeStamp(0.7755762532237923);
    msg.setSource(11255U);
    msg.setSourceEntity(57U);
    msg.setDestination(9757U);
    msg.setDestinationEntity(254U);
    const char tmp_msg_0[] = {-12, 3, 94, 53, -96, 28, 101, 101, -61, 37, -86, 114, -108, -67, -82, -88, -103, -26, -98, 121, 109, 77, -79, -8, 98, 19, -52, 62, -88, 50, -4, -57, -48, 25, -54, 72, 17, -15, -77, -76, 92, 125, 80, -27, 58, 32, 110, 39, -28, 31, -109, 58, -25, 9, 33, 82, -119, -44, 63, -98, 59, 35, -24, -109, 100, 57, -7, -102, 73, 45, 9, -78, -109, -89, 55, 0, -76, 121, -37, -89, 108, -17, -61, 23, 116, -48, -62, -67, -111, -91, -121, -121, 30, -69, -81, -21, -35, 39, 43, -27, -61, -87, -98, 39, 62, -112, 33, -118, -60, -85, -94, 0, -42, 99, -6, -82, -122, 26, -80, 26, -77, -88, 114, -118, 123, 34, -18, 69, 31, -22, 101, -122, -116, 105, 68, -100, -117, -75, -62, 6, -6, 88, -23, 30, -44, 107, -103, 124, -37, 41, -16, -85, 9, 106, -114, 23, 16, 67, 28, 124, -18, -41, -75, 48, 72, 39, 14, -128, 95, -39, 51, 15, -36, 43, -53, 16, 27, 55, -88, 119, 109, -1, -92, 102, 16, -21, 96, -90, 11};
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
    msg.setTimeStamp(0.2862961055836335);
    msg.setSource(56768U);
    msg.setSourceEntity(207U);
    msg.setDestination(24094U);
    msg.setDestinationEntity(13U);
    const char tmp_msg_0[] = {-45, -7, 85, -110, 37, 52, 75, -126, -68, -59, -121, 80, -64, -34, -18, 65, -101, -116, -125, 35, -73, -51, -48, -95, -96, 113, -82, 90, 62, -7, 107, -79, 50, -110, -21, 88, -42, 33, -101, -91, 101, -41, 26, 41, -120, -119, 13, 45, -107, -34, -40, -30, 94, 82, -66, -89, -47, 119, -109, 76, -85, 51, -20, -114, 71, -13, 68, 93, 5, -127, -28, -24, 100};
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
    msg.setTimeStamp(0.647764587458303);
    msg.setSource(29405U);
    msg.setSourceEntity(190U);
    msg.setDestination(36956U);
    msg.setDestinationEntity(77U);
    const char tmp_msg_0[] = {93, -40, -66, 29, 34, 13, -46, -23, -22, 30, 15, -115, 27, -83, 36, -57, -99, 6, -107, 18, -71, 60, -77, -1, -18, -14, -29, -63, 105, 38, 47, 33, -39, -21, 62, 72, 68, 126, 12, -34, -88, 72, -124, -78, -28, -81, 15, -46, -60, 83, -103, 50, -107, -33, 21, 96, 72, 22, -2, -100, -119, -3, -99, 116, 28, -1, 103, -68, 1, -43, 2, -82, 86, -1, 82, 92, 14, -21, 31, -94, 75, -66, 92, -75, -107, -116, -88, -101, 11, -56, -110, -83, 4, -45, 22, -91, 55, -12, 96, 91, -2, 39};
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
    msg.setTimeStamp(0.3382646954535382);
    msg.setSource(42418U);
    msg.setSourceEntity(63U);
    msg.setDestination(31357U);
    msg.setDestinationEntity(34U);
    msg.frequency = 2670933542U;
    msg.min_range = 52290U;
    msg.max_range = 54245U;

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
    msg.setTimeStamp(0.2366821982566758);
    msg.setSource(32890U);
    msg.setSourceEntity(106U);
    msg.setDestination(41687U);
    msg.setDestinationEntity(218U);
    msg.frequency = 2907358532U;
    msg.min_range = 47748U;
    msg.max_range = 44136U;

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
    msg.setTimeStamp(0.13782822197037659);
    msg.setSource(44875U);
    msg.setSourceEntity(94U);
    msg.setDestination(24241U);
    msg.setDestinationEntity(166U);
    msg.frequency = 2287478181U;
    msg.min_range = 58463U;
    msg.max_range = 32533U;

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
    msg.setTimeStamp(0.6129946084314797);
    msg.setSource(7193U);
    msg.setSourceEntity(153U);
    msg.setDestination(21100U);
    msg.setDestinationEntity(26U);
    msg.type = 186U;
    msg.frequency = 198271611U;
    msg.min_range = 54638U;
    msg.max_range = 6970U;
    msg.bits_per_point = 32U;
    msg.scale_factor = 0.14528901082104784;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6030797352911028;
    tmp_msg_0.beam_height = 0.4113452407171402;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {24, 57, -83, -126, -16, -78, 23, 78, 60, 22, 67, 87, 78, -39, 85, -50, -75, -36, 41, 116, 63, -18, 98};
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
    msg.setTimeStamp(0.7115320604660819);
    msg.setSource(64273U);
    msg.setSourceEntity(48U);
    msg.setDestination(15548U);
    msg.setDestinationEntity(23U);
    msg.type = 246U;
    msg.frequency = 3333250676U;
    msg.min_range = 47885U;
    msg.max_range = 52810U;
    msg.bits_per_point = 100U;
    msg.scale_factor = 0.9289202606181989;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5060306088182089;
    tmp_msg_0.beam_height = 0.043415954459125716;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {63, -125, -120, -38, 1, 70, -27, 54, 57, 81, -110, 6, 111, -70, -50, 48, -56, -68, -39, -52, -17, -15, 64, -58, 33, 52, -29, -123, 97, -70, -19, 0, -80, -34, -122, 77, 66, -61, 57, -127, -127, 28, -113, -13, 113, 100, 17, -75, 98, 24, -18, 52, 18, 57, -49, 76, -22, 33, -13, -64, 25, -83, -16, -53, 94, 31, -6, -35, -62, 73, -4, -57, 21, -114, 59, -120, -126, 30, -44, 111, 72, -126, -111, 17, 20, -111, 69, 8, -113, 95, -88, 44, -84, -7, -90, -128, 103, 113, -59, -81, 66, -42, 85, 85, 62, -2, -14, -104, -6, 4, -36, 16, 64, 103, 41, 75, 92, 117, 16, -2, -114, -62, 42, 67, -97, 29, 85, 63};
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
    msg.setTimeStamp(0.5728836809490596);
    msg.setSource(36565U);
    msg.setSourceEntity(122U);
    msg.setDestination(58674U);
    msg.setDestinationEntity(93U);
    msg.type = 38U;
    msg.frequency = 2913641830U;
    msg.min_range = 57568U;
    msg.max_range = 22510U;
    msg.bits_per_point = 22U;
    msg.scale_factor = 0.09505723433850144;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9124105002653089;
    tmp_msg_0.beam_height = 0.3981956430204969;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-105, 108, 9, 45, -75, 80, -119, -16, -105, 23, 105, -78, 116, -15, 12, -84, -7, 69, 102, 109, -83, 28, -120, -116, -34, 123, -12, -82, 24, 65, 27, -7};
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
    msg.setTimeStamp(0.9394838222994176);
    msg.setSource(6752U);
    msg.setSourceEntity(232U);
    msg.setDestination(51615U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.3956780694998201);
    msg.setSource(52014U);
    msg.setSourceEntity(232U);
    msg.setDestination(48241U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.6053555329817463);
    msg.setSource(47794U);
    msg.setSourceEntity(205U);
    msg.setDestination(30323U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.5261804264761855);
    msg.setSource(60372U);
    msg.setSourceEntity(177U);
    msg.setDestination(51607U);
    msg.setDestinationEntity(38U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.8295215546253812);
    msg.setSource(44555U);
    msg.setSourceEntity(153U);
    msg.setDestination(19995U);
    msg.setDestinationEntity(142U);
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
    msg.setTimeStamp(0.9385093339990817);
    msg.setSource(56135U);
    msg.setSourceEntity(34U);
    msg.setDestination(46799U);
    msg.setDestinationEntity(107U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.9289649660066718);
    msg.setSource(15249U);
    msg.setSourceEntity(115U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(73U);
    msg.value = 0.17464443243906336;
    msg.confidence = 0.11777176879739881;
    msg.opmodes.assign("BBTDVOSUOFTQLTOXWXWNKBPUXEBXMGDJJIYYCTMULDDZJHZMWUWXDGTNSEKQRMJMSCYJQQOESXEGSQKWRADVLHLRNHPTEGKMYXPZZEHJIIBQDBKRAFUIGNAAQSFWHKJYKCMIGHHCSQCIHPAQVWRPVDIXCQZLURFMIZPHRSYXGIZPZFYAVPVWEOUTJPKWGKVLRTFOENYTOVYETWFVIMNECOOJANMLONNBDPUCSLFAZUDFNVAGRLCGBYLRFS");

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
    msg.setTimeStamp(0.8808897945574888);
    msg.setSource(14362U);
    msg.setSourceEntity(171U);
    msg.setDestination(3050U);
    msg.setDestinationEntity(35U);
    msg.value = 0.6403106285740336;
    msg.confidence = 0.6607760373054918;
    msg.opmodes.assign("KCPPABTSIMKYVJWPZHFMQXAZSDYXUJRHERCUXLPPMWCKMWQNSHLYWBTMADSNNEOOWDXQCQPKWGIVVLFAKDLS");

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
    msg.setTimeStamp(0.3489909056105016);
    msg.setSource(17173U);
    msg.setSourceEntity(119U);
    msg.setDestination(40933U);
    msg.setDestinationEntity(165U);
    msg.value = 0.0026781264254018833;
    msg.confidence = 0.6298178197014432;
    msg.opmodes.assign("QJPMKXJLWGSUAZNMFPQNWRVEKYYFBFIIDQRUXVOWLZYACBJIPROTCWOSZBKXIWMAEVAOUMZHTKXVGQCQFXDIPYPJUWHYVVMDSWKEVOBMGTGWIGVTRGMEET");

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
    msg.setTimeStamp(0.35272291667630684);
    msg.setSource(13730U);
    msg.setSourceEntity(97U);
    msg.setDestination(48496U);
    msg.setDestinationEntity(6U);
    msg.itow = 1366284219U;
    msg.lat = 0.36530258099062296;
    msg.lon = 0.02693533121905145;
    msg.height_ell = 0.4177801401779849;
    msg.height_sea = 0.8109671462049488;
    msg.hacc = 0.11840158137244816;
    msg.vacc = 0.6135133080920085;
    msg.vel_n = 0.041410009916444945;
    msg.vel_e = 0.914226771999277;
    msg.vel_d = 0.07717557944022913;
    msg.speed = 0.7053147555307951;
    msg.gspeed = 0.735496947517846;
    msg.heading = 0.5810159228317614;
    msg.sacc = 0.9022202780235188;
    msg.cacc = 0.48351173282304805;

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
    msg.setTimeStamp(0.32565058968551186);
    msg.setSource(10361U);
    msg.setSourceEntity(43U);
    msg.setDestination(22448U);
    msg.setDestinationEntity(242U);
    msg.itow = 2745833263U;
    msg.lat = 0.41581367366840816;
    msg.lon = 0.24468283158622606;
    msg.height_ell = 0.6040036737068687;
    msg.height_sea = 0.7874634704618212;
    msg.hacc = 0.2152667555470792;
    msg.vacc = 0.9883746342358356;
    msg.vel_n = 0.7901268643807795;
    msg.vel_e = 0.4171050220314998;
    msg.vel_d = 0.4290222642597844;
    msg.speed = 0.35318364714237593;
    msg.gspeed = 0.758861797528669;
    msg.heading = 0.33920580766625086;
    msg.sacc = 0.7863156412096843;
    msg.cacc = 0.8240510651919775;

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
    msg.setTimeStamp(0.31801857085962626);
    msg.setSource(15287U);
    msg.setSourceEntity(196U);
    msg.setDestination(929U);
    msg.setDestinationEntity(254U);
    msg.itow = 1769011664U;
    msg.lat = 0.2953944959407222;
    msg.lon = 0.89398893710199;
    msg.height_ell = 0.3303770844242976;
    msg.height_sea = 0.20436458353009035;
    msg.hacc = 0.8078611800736296;
    msg.vacc = 0.9080478149345534;
    msg.vel_n = 0.3593266222332854;
    msg.vel_e = 0.5224116835994513;
    msg.vel_d = 0.164921660544604;
    msg.speed = 0.6108030597417435;
    msg.gspeed = 0.6857893144691096;
    msg.heading = 0.8655341494033928;
    msg.sacc = 0.4684414002291748;
    msg.cacc = 0.5087611452251223;

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
    msg.setTimeStamp(0.9098702709683387);
    msg.setSource(48541U);
    msg.setSourceEntity(209U);
    msg.setDestination(25448U);
    msg.setDestinationEntity(85U);
    msg.id = 218U;
    msg.value = 0.08798346395037504;

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
    msg.setTimeStamp(0.23052928764659442);
    msg.setSource(50139U);
    msg.setSourceEntity(14U);
    msg.setDestination(37199U);
    msg.setDestinationEntity(198U);
    msg.id = 132U;
    msg.value = 0.3625540156517931;

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
    msg.setTimeStamp(0.20311427964055473);
    msg.setSource(16835U);
    msg.setSourceEntity(78U);
    msg.setDestination(3284U);
    msg.setDestinationEntity(172U);
    msg.id = 68U;
    msg.value = 0.7183367586927344;

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
    msg.setTimeStamp(0.9093538054545428);
    msg.setSource(13138U);
    msg.setSourceEntity(133U);
    msg.setDestination(27833U);
    msg.setDestinationEntity(177U);
    msg.x = 0.9319468359145865;
    msg.y = 0.743965176525456;
    msg.z = 0.6596214370448473;
    msg.phi = 0.8472275671989993;
    msg.theta = 0.5699007012388936;
    msg.psi = 0.20084569098121619;

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
    msg.setTimeStamp(0.32882005516201684);
    msg.setSource(41036U);
    msg.setSourceEntity(199U);
    msg.setDestination(26300U);
    msg.setDestinationEntity(33U);
    msg.x = 0.4623490445732955;
    msg.y = 0.7605874722435887;
    msg.z = 0.4508378672535097;
    msg.phi = 0.2242403677359448;
    msg.theta = 0.7712011554654465;
    msg.psi = 0.011927363116569278;

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
    msg.setTimeStamp(0.8775553711213475);
    msg.setSource(35756U);
    msg.setSourceEntity(218U);
    msg.setDestination(51025U);
    msg.setDestinationEntity(53U);
    msg.x = 0.04989458329435792;
    msg.y = 0.2708543125182499;
    msg.z = 0.9629131486230705;
    msg.phi = 0.521823533971059;
    msg.theta = 0.20160742273883525;
    msg.psi = 0.2782734783637537;

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
    msg.setTimeStamp(0.02231761956545142);
    msg.setSource(21458U);
    msg.setSourceEntity(98U);
    msg.setDestination(8576U);
    msg.setDestinationEntity(135U);
    msg.beam_width = 0.5129728797708892;
    msg.beam_height = 0.622088071334904;

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
    msg.setTimeStamp(0.21060845986216037);
    msg.setSource(47509U);
    msg.setSourceEntity(95U);
    msg.setDestination(58690U);
    msg.setDestinationEntity(131U);
    msg.beam_width = 0.10338749639289824;
    msg.beam_height = 0.4991361292698039;

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
    msg.setTimeStamp(0.606054652428859);
    msg.setSource(39671U);
    msg.setSourceEntity(129U);
    msg.setDestination(42712U);
    msg.setDestinationEntity(11U);
    msg.beam_width = 0.024328662946629942;
    msg.beam_height = 0.32521233354141643;

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
    msg.setTimeStamp(0.9668097545633403);
    msg.setSource(57289U);
    msg.setSourceEntity(187U);
    msg.setDestination(56671U);
    msg.setDestinationEntity(205U);
    msg.id = 178U;
    msg.zoom = 103U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.22465529459486455);
    msg.setSource(6397U);
    msg.setSourceEntity(0U);
    msg.setDestination(49594U);
    msg.setDestinationEntity(165U);
    msg.id = 1U;
    msg.zoom = 60U;
    msg.action = 209U;

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
    msg.setTimeStamp(0.6741980906898107);
    msg.setSource(59351U);
    msg.setSourceEntity(153U);
    msg.setDestination(62779U);
    msg.setDestinationEntity(72U);
    msg.id = 218U;
    msg.zoom = 71U;
    msg.action = 42U;

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
    msg.setTimeStamp(0.4104554662542569);
    msg.setSource(6991U);
    msg.setSourceEntity(15U);
    msg.setDestination(21658U);
    msg.setDestinationEntity(175U);
    msg.id = 144U;
    msg.value = 0.4691603239194192;

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
    msg.setTimeStamp(0.6466486072365986);
    msg.setSource(57960U);
    msg.setSourceEntity(250U);
    msg.setDestination(36829U);
    msg.setDestinationEntity(107U);
    msg.id = 45U;
    msg.value = 0.4250266847279355;

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
    msg.setTimeStamp(0.4999131362569442);
    msg.setSource(27767U);
    msg.setSourceEntity(51U);
    msg.setDestination(48475U);
    msg.setDestinationEntity(108U);
    msg.id = 97U;
    msg.value = 0.6775185593229979;

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
    msg.setTimeStamp(0.4197521931522282);
    msg.setSource(46111U);
    msg.setSourceEntity(225U);
    msg.setDestination(55612U);
    msg.setDestinationEntity(225U);
    msg.id = 14U;
    msg.value = 0.521247094798572;

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
    msg.setTimeStamp(0.2670083121790583);
    msg.setSource(50785U);
    msg.setSourceEntity(174U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(247U);
    msg.id = 119U;
    msg.value = 0.5416017621776082;

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
    msg.setTimeStamp(0.04565300303052966);
    msg.setSource(59371U);
    msg.setSourceEntity(1U);
    msg.setDestination(19639U);
    msg.setDestinationEntity(119U);
    msg.id = 118U;
    msg.value = 0.6996526700734811;

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
    msg.setTimeStamp(0.10198906174679856);
    msg.setSource(31317U);
    msg.setSourceEntity(164U);
    msg.setDestination(19954U);
    msg.setDestinationEntity(237U);
    msg.id = 54U;
    msg.angle = 0.46540931285263354;

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
    msg.setTimeStamp(0.6466421106149655);
    msg.setSource(40203U);
    msg.setSourceEntity(193U);
    msg.setDestination(59317U);
    msg.setDestinationEntity(63U);
    msg.id = 53U;
    msg.angle = 0.17659309004354806;

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
    msg.setTimeStamp(0.5682853669978515);
    msg.setSource(17094U);
    msg.setSourceEntity(249U);
    msg.setDestination(24297U);
    msg.setDestinationEntity(105U);
    msg.id = 26U;
    msg.angle = 0.8459896308700104;

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
    msg.setTimeStamp(0.3969999287867916);
    msg.setSource(29772U);
    msg.setSourceEntity(63U);
    msg.setDestination(23908U);
    msg.setDestinationEntity(58U);
    msg.op = 106U;
    msg.actions.assign("WJZLGYISBVESQNTGQDLXDCWKJVFFSETRHAMPVQRENVXKBKEYOOQLAWLFNNKXARKGRKKZHYUXWOUHDWBOYBZOGGEJQRCLYDTMZJOPIZDLNFUVJZDCFSNRJDHMTGNPYPWXLIQBMGRNTBSB");

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
    msg.setTimeStamp(0.3980634841950096);
    msg.setSource(25666U);
    msg.setSourceEntity(179U);
    msg.setDestination(18283U);
    msg.setDestinationEntity(254U);
    msg.op = 162U;
    msg.actions.assign("TWRLJQCHBBBECGMRVFXOQKRIBYOPARDPWAPFVCWHRTFVVDDKSNSHELEYSSTYKEPCOMJTLAMZVOYWAXLBVLTJJZZUZXTNUBMUMWYHAGILNZKCGOSDOEJCDIIISXQLXGIPDIZATXHIPKRBNKDYEPVOQXGVHKHKOOQUVEFWZUJXNUSCJSAWNQGJJKMFAWWCFQ");

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
    msg.setTimeStamp(0.9925938138542686);
    msg.setSource(24865U);
    msg.setSourceEntity(231U);
    msg.setDestination(22835U);
    msg.setDestinationEntity(74U);
    msg.op = 72U;
    msg.actions.assign("GZNEMQYWQOIQXEDEFHQBJRNLEDBHMYYOTLHPJKWRCVIHHXXTKAPUKFOSDFCKGTGEYEBCUTRTILBIAFERCKZKSIRFAJVGFWALCLC");

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
    msg.setTimeStamp(0.9415998782591701);
    msg.setSource(8351U);
    msg.setSourceEntity(3U);
    msg.setDestination(26753U);
    msg.setDestinationEntity(71U);
    msg.actions.assign("CGPGMPMIKOZFJGTCUQRMMKDWTVVTVJHPCLUZBIZEBFHNVBZPIHQMFBGRNYJDVXALITQWYHCSFEXYSFOCGXKATJWUYSBSOUWDVMIGUBZOOJHEJLQTXKKPRRZDEFLBZIVFAWWEZGOPRUMSWAEWSERNCJWYYVNCVYXLRFVADKYNWEJYXBOLXRODJTROHTQCAYMQQ");

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
    msg.setTimeStamp(0.9714286462405691);
    msg.setSource(52268U);
    msg.setSourceEntity(193U);
    msg.setDestination(7802U);
    msg.setDestinationEntity(140U);
    msg.actions.assign("MOHUUQTFZSEGQSECINTQBCNWEDDATHRWZMPXCBLVDYBLPRARFTQZQSSIMXCYULURLSFYYSNDGZVQWGIVRMCOLIEIJILOBNWKZPOLAMCJUKDBHWZKFRWNUIARRRFFFNFJVLPSTAYXXIGHJOBYPEOQXZVRCMWKJHFNGXNOJDQFLABKTCETTSDAVLTTNSGBMNWAOUMOKEGCJKVOWYYWPMA");

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
    msg.setTimeStamp(0.14080344363627773);
    msg.setSource(16082U);
    msg.setSourceEntity(156U);
    msg.setDestination(37685U);
    msg.setDestinationEntity(106U);
    msg.actions.assign("GUXZQPEVWIPSQICZEFJUAEVQWKSDHAITNEBHCMAFRHWBUHAFIVFFQJZODLJRKDUKGTNLNSKVZSANCRCNYCEVTX");

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
    msg.setTimeStamp(0.4965336872515992);
    msg.setSource(26183U);
    msg.setSourceEntity(182U);
    msg.setDestination(54012U);
    msg.setDestinationEntity(172U);
    msg.button = 80U;
    msg.value = 168U;

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
    msg.setTimeStamp(0.230640175702709);
    msg.setSource(11809U);
    msg.setSourceEntity(223U);
    msg.setDestination(5398U);
    msg.setDestinationEntity(4U);
    msg.button = 219U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.44311706175076326);
    msg.setSource(25396U);
    msg.setSourceEntity(25U);
    msg.setDestination(29504U);
    msg.setDestinationEntity(253U);
    msg.button = 183U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.33948325943076707);
    msg.setSource(50001U);
    msg.setSourceEntity(53U);
    msg.setDestination(48972U);
    msg.setDestinationEntity(198U);
    msg.op = 89U;
    msg.text.assign("IVVMEMTWMUJOMVRNQYJPDIFUJYDAMZPYQJXCLQIYJCKCOBLLNQWSRE");

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
    msg.setTimeStamp(0.9631408057425406);
    msg.setSource(9814U);
    msg.setSourceEntity(118U);
    msg.setDestination(21610U);
    msg.setDestinationEntity(142U);
    msg.op = 72U;
    msg.text.assign("MELFZENONGTFDQVQVCEHAOWBFGBIAWXSXDWWYKVNVCLJRHHUTILDJBFZSSNGWEGCSJFJYGNNPLDRKMPRUTQOIMJOEWZRFCHWIXFTWHQUGNIKPRTJCMMKNNOIAMWIULJLVGHSA");

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
    msg.setTimeStamp(0.24755402952118077);
    msg.setSource(2922U);
    msg.setSourceEntity(226U);
    msg.setDestination(22588U);
    msg.setDestinationEntity(171U);
    msg.op = 174U;
    msg.text.assign("KJMXSORYWIQJCUCRPEYTZAVXULARKTLYDGMDLNERJZCDPWKLMRTMOKZUGGVHUYDBMVPVHZBJFQLTNTOWUUKCQJVJHDJVAQHPZWEZFIJQPFVQGUXSHSELGBZPABMQNBAQDEKVEXMJZZOFDNQAWYKCBFSEGPIDASXREFAPIGEBJUXBHXXYHMYOIONGDPIPWVFNRCXRUTSSWNIFAZOGBRVRKULQC");

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
    msg.setTimeStamp(0.6631600058573031);
    msg.setSource(27209U);
    msg.setSourceEntity(160U);
    msg.setDestination(34172U);
    msg.setDestinationEntity(160U);
    msg.op = 36U;
    msg.time_remain = 0.28771406355003615;
    msg.sched_time = 0.8625385610785196;

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
    msg.setTimeStamp(0.23688120744889773);
    msg.setSource(20078U);
    msg.setSourceEntity(35U);
    msg.setDestination(27907U);
    msg.setDestinationEntity(208U);
    msg.op = 177U;
    msg.time_remain = 0.7187800920398286;
    msg.sched_time = 0.5671854898310301;

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
    msg.setTimeStamp(0.7716184867060655);
    msg.setSource(36699U);
    msg.setSourceEntity(253U);
    msg.setDestination(1176U);
    msg.setDestinationEntity(201U);
    msg.op = 121U;
    msg.time_remain = 0.6143994541652791;
    msg.sched_time = 0.8405588230461465;

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
    msg.setTimeStamp(0.9890013580412814);
    msg.setSource(22997U);
    msg.setSourceEntity(190U);
    msg.setDestination(23290U);
    msg.setDestinationEntity(109U);
    msg.name.assign("GBMSPMPCSQZPZFTOMIYTXQWBZYYALKXQYYHCKAJNUVIVWPXUIGKBROZZXPKUKSTCBNLWGVKRXOAHTIBZUDUZODKEZXDNHPQIJFFFAOCSJUQCNTSUQSHBTCDDHLWZCPTIYRFCXMWVDWFELGNADNRMAOLEVJYEDYJNUCHKOAQVYBBWJQOHDYWFXNGBJJWDHIGGEVVHRTWRNBSRUSPGSLMZSUELEAQGAGEIQLHLLRV");
    msg.op = 39U;
    msg.sched_time = 0.5009332206014089;

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
    msg.setTimeStamp(0.3515595399721516);
    msg.setSource(31466U);
    msg.setSourceEntity(23U);
    msg.setDestination(11828U);
    msg.setDestinationEntity(180U);
    msg.name.assign("LJHBLKTUJPYPIECXQBRKWWNKVACCDPVSTZZVVVXQKAKRBJZZBEUOJDXOUHMIERKQHDMCJXACUYPDYSQRUWTWLLHSHFQYNXROJPISFHWGSPUXLDFBVDUNNGVSHGZEOAOSTFXOFQIPJTZEOZDNRIQGMBMTVNWA");
    msg.op = 228U;
    msg.sched_time = 0.6749690801776134;

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
    msg.setTimeStamp(0.02396390921023772);
    msg.setSource(24939U);
    msg.setSourceEntity(210U);
    msg.setDestination(42216U);
    msg.setDestinationEntity(207U);
    msg.name.assign("LAFZAEYOPEAQVJRDTJOELTFGTVTKJUMTJCMCNUNNDBBSUCDZHENOLAYYXKFANQUGIKRQBWUVWZLCDFRYKWBGXMYXSQVWCJ");
    msg.op = 135U;
    msg.sched_time = 0.09857755203823415;

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
    msg.setTimeStamp(0.04465527805481706);
    msg.setSource(41504U);
    msg.setSourceEntity(212U);
    msg.setDestination(11474U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.27358523314890804);
    msg.setSource(1317U);
    msg.setSourceEntity(135U);
    msg.setDestination(26199U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.7411243894895727);
    msg.setSource(29786U);
    msg.setSourceEntity(227U);
    msg.setDestination(49840U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.22243984300703412);
    msg.setSource(34888U);
    msg.setSourceEntity(144U);
    msg.setDestination(48713U);
    msg.setDestinationEntity(173U);
    msg.name.assign("SDQZLKCBPOSHHDENBMKFUPJOS");
    msg.state = 79U;

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
    msg.setTimeStamp(0.26670283848794607);
    msg.setSource(24971U);
    msg.setSourceEntity(188U);
    msg.setDestination(54450U);
    msg.setDestinationEntity(71U);
    msg.name.assign("BYNQVVZRBJNLIAECMMGUURHATMXLNOUDMIEIPFWTHRSCPKBWNGLLRGUNZVVESTWCWYOCOEDPPCBSFZAAMCJIOLGOAVDUEUCNLXSHODZQZLHPFSTQWHPMTMBYAFJIRLJYRSLSEQMAEYAWHKBDUPTEOSKFF");
    msg.state = 221U;

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
    msg.setTimeStamp(0.7796905858911904);
    msg.setSource(52053U);
    msg.setSourceEntity(56U);
    msg.setDestination(61877U);
    msg.setDestinationEntity(197U);
    msg.name.assign("KHAKOFHFTACSRGMQLQLDJVEIHBDLTDGJIIAMTKIQQYEXWFDCUANTGBRBOWQXIRPPLKSBOQWJOVGZHTTBDQYFXFZYFOKZDYZRZLSUQJZGFZMXYBMKLMEQTHNJP");
    msg.state = 159U;

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
    msg.setTimeStamp(0.3080355652138368);
    msg.setSource(20666U);
    msg.setSourceEntity(179U);
    msg.setDestination(52540U);
    msg.setDestinationEntity(49U);
    msg.name.assign("COSKSSKPYRKFEYNTRDLPOJOYMGLAATKIAAUBDCDNDPWZBHTKOBUWCLSFKSSIPHOUGEPTKSBHVWMXZZXXECGXRRUIETPDYUKCQXQOTQULNMODJAVDVPISBAVWLGDTLOOFRCMHFSYIGKUTJNQQMEVYUZIUHNDCTNHJXNFIJBRQYVLCXZEGAQEXXIUZAMEAGBVGFVGLIWGHDICYFWWZPQRZNKRVTRZYCAYMWPJJENW");
    msg.value = 153U;

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
    msg.setTimeStamp(0.7265826201757244);
    msg.setSource(40017U);
    msg.setSourceEntity(113U);
    msg.setDestination(923U);
    msg.setDestinationEntity(65U);
    msg.name.assign("AFXBEUCQRTUFVRFDHXULSPLTIB");
    msg.value = 170U;

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
    msg.setTimeStamp(0.4465471225200873);
    msg.setSource(33761U);
    msg.setSourceEntity(59U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(220U);
    msg.name.assign("YKXWJAADMRTHLYDSPWUXHGKFOLRBZVADNRUHFUMTLOUJUIXCVIAFBHPTGLWUDRRQDNQOKZZGCANBNEMZCCXTIMYAIVSFYCTHNWEGMASYDMVJEZKEKRYZVHCQUPLJJXFGQJTZJGPRLFIU");
    msg.value = 122U;

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
    msg.setTimeStamp(0.5243144929865033);
    msg.setSource(56880U);
    msg.setSourceEntity(205U);
    msg.setDestination(60776U);
    msg.setDestinationEntity(164U);
    msg.name.assign("IIRLHNIPEECKSEYACPBMJEERVTFZKNODZPTQSFWAXLPYHKPDXSBVKFAUOUHDYRTHKGZGOHBDDVVKEYOUUXCTOFXTAJAMHPWQPEMGDGPTFCCSPAWZQMNZTNLCQHQLWZYWSSHIPWLEJTZMUKUUSJWYRIQMNWYBWBVVTIOZZGSWRRDOXCKMSMCJOIKUNNFQLEMXVGG");

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
    msg.setTimeStamp(0.22154380904816406);
    msg.setSource(63428U);
    msg.setSourceEntity(248U);
    msg.setDestination(52255U);
    msg.setDestinationEntity(40U);
    msg.name.assign("VJHPARKLQRRQMTAXTCZTLEQJEENSMBFXDVFSVZQCZGSYBSVQJHCDLDXFUDVIHMOORAYNWPBMPNCNAMKSKNMTKXGGJTEKIFXNQRZIGCVERLODBOHHGIFYHZPILARTXWUAXCGCEJWEKTA");

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
    msg.setTimeStamp(0.22987933923907078);
    msg.setSource(42328U);
    msg.setSourceEntity(73U);
    msg.setDestination(28735U);
    msg.setDestinationEntity(45U);
    msg.name.assign("PBJHAKXHZFARJCCDRMEUKDJVKEIWIKTPOMHWRQSHOCYMJMGPDYWXTETLWWRMVZAZMKZFAQIPRJENJZWQNSRKRUEIOIAFWSUPJZPWSMFBGSNLQGSNAEBQKFDAZYNQHGTLDTBLGLMOGKDPEITVICJCQGFAXYIBWLXUOCYBVIQUOUVALYGFFWSOUTEHTLLGUNZJ");

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
    msg.setTimeStamp(0.4846245751606474);
    msg.setSource(1627U);
    msg.setSourceEntity(153U);
    msg.setDestination(5782U);
    msg.setDestinationEntity(17U);
    msg.name.assign("VFQQVAOMBOKHPHWDNFYYCWCZTGJIHEGZYYZNSOZNFBSUEUEDLAXLRXPRKVONKZGFFSELQVNWAKXNTXILZLWMMOGWTZDVNUKFMCLFFRTTMRTTPRDPRXDRGOQXZOWHIUGQANOJDTYAWQQXVUBJLC");
    msg.value = 115U;

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
    msg.setTimeStamp(0.19284054797995198);
    msg.setSource(13331U);
    msg.setSourceEntity(163U);
    msg.setDestination(48020U);
    msg.setDestinationEntity(83U);
    msg.name.assign("MHYWWKXIRZHJWFUXDZVXVLNCERETQPTCOQSOLAICLDPAWQUYTUZNKVEDNPTYFWFPMBONYPKQAWRKVBCUSHBJLQDBPUYPHBMDCMMCZGMOLIBFTLDSIXCOGEFXKYDSOKCQQGACVGVILOUBMLSQVKUWFYTJJZMQNPFNAJRAKHNFPSXURJXLEDEAWMIVKETAAIGYJRHRBRAWDWZUEJG");
    msg.value = 22U;

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
    msg.setTimeStamp(0.2935995865438057);
    msg.setSource(64052U);
    msg.setSourceEntity(168U);
    msg.setDestination(54135U);
    msg.setDestinationEntity(78U);
    msg.name.assign("MVGXPPFACMAXNNRLOYZOVJVORZTETRNZUCYMUXLOZWHPRWUDSGXIHDERSBOSETFLGUSWZJIQFQZEQSNTPESKGHACMDAJQFVOGWJUCYNBEDBRHSDBLZATQYBEIUHXAYLTEAKKHQHSLBWCZLCAIOPKVVBCNQPUPHKBGMYFJEKNANWYRMOUXWJWYTFKJJ");
    msg.value = 253U;

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
    msg.setTimeStamp(0.3937267514399656);
    msg.setSource(42139U);
    msg.setSourceEntity(202U);
    msg.setDestination(41446U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.4130689836544498;
    msg.lon = 0.05471373595868778;
    msg.height = 0.1293298731992626;
    msg.x = 0.6430765996061392;
    msg.y = 0.33033487075421664;
    msg.z = 0.8433040308415503;
    msg.phi = 0.34806133153647434;
    msg.theta = 0.07162760117291989;
    msg.psi = 0.8209286746858779;
    msg.u = 0.21566066748829127;
    msg.v = 0.225469252237962;
    msg.w = 0.6248554166187898;
    msg.vx = 0.2222154537793074;
    msg.vy = 0.9209047618599521;
    msg.vz = 0.7737519905425616;
    msg.p = 0.6462955879488177;
    msg.q = 0.6484583305851923;
    msg.r = 0.040063417532633094;
    msg.depth = 0.42544134506360654;
    msg.alt = 0.3563182459324301;

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
    msg.setTimeStamp(0.9605245259115986);
    msg.setSource(39008U);
    msg.setSourceEntity(253U);
    msg.setDestination(54013U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.02403837207129056;
    msg.lon = 0.8633468887786742;
    msg.height = 0.4924091749510674;
    msg.x = 0.22993863713612173;
    msg.y = 0.5888943275057255;
    msg.z = 0.8006897771556472;
    msg.phi = 0.10680346627589488;
    msg.theta = 0.5295040520453367;
    msg.psi = 0.37176607516881;
    msg.u = 0.5231670880280139;
    msg.v = 0.6908340263180106;
    msg.w = 0.2621499253082745;
    msg.vx = 0.6766250217752621;
    msg.vy = 0.8176733291273669;
    msg.vz = 0.4272766975401553;
    msg.p = 0.21134899787025452;
    msg.q = 0.6057709152480657;
    msg.r = 0.14798370866106647;
    msg.depth = 0.4673083031481915;
    msg.alt = 0.3112065177516137;

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
    msg.setTimeStamp(0.06484993118097937);
    msg.setSource(16301U);
    msg.setSourceEntity(123U);
    msg.setDestination(29993U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.1706507662650849;
    msg.lon = 0.6215825620523067;
    msg.height = 0.10700586935438938;
    msg.x = 0.02926732323442227;
    msg.y = 0.12936398339550703;
    msg.z = 0.2552896296913152;
    msg.phi = 0.4708829165665277;
    msg.theta = 0.31585229214162414;
    msg.psi = 0.0267010749477804;
    msg.u = 0.3173500295210978;
    msg.v = 0.5999260512229423;
    msg.w = 0.2277912501970406;
    msg.vx = 0.9685977137826313;
    msg.vy = 0.8452864735993306;
    msg.vz = 0.07545716695411886;
    msg.p = 0.13244516427480868;
    msg.q = 0.9071284273811795;
    msg.r = 0.2906126406485757;
    msg.depth = 0.8394585727358755;
    msg.alt = 0.5890265188314571;

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
    msg.setTimeStamp(0.6188816100251966);
    msg.setSource(63787U);
    msg.setSourceEntity(247U);
    msg.setDestination(12819U);
    msg.setDestinationEntity(232U);
    msg.x = 0.32658693005251127;
    msg.y = 0.3526658872480428;
    msg.z = 0.2598417576330333;

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
    msg.setTimeStamp(0.9148749644288054);
    msg.setSource(43107U);
    msg.setSourceEntity(13U);
    msg.setDestination(35012U);
    msg.setDestinationEntity(218U);
    msg.x = 0.1042983280603812;
    msg.y = 0.7666345181339197;
    msg.z = 0.30562419862444035;

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
    msg.setTimeStamp(0.5847062227727304);
    msg.setSource(31983U);
    msg.setSourceEntity(75U);
    msg.setDestination(35864U);
    msg.setDestinationEntity(229U);
    msg.x = 0.4654579012129081;
    msg.y = 0.6117960021045622;
    msg.z = 0.8956498899451865;

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
    msg.setTimeStamp(0.5331025703918624);
    msg.setSource(44484U);
    msg.setSourceEntity(225U);
    msg.setDestination(50747U);
    msg.setDestinationEntity(20U);
    msg.value = 0.83266885595871;

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
    msg.setTimeStamp(0.8875576893581517);
    msg.setSource(6830U);
    msg.setSourceEntity(60U);
    msg.setDestination(26158U);
    msg.setDestinationEntity(136U);
    msg.value = 0.7399509638566917;

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
    msg.setTimeStamp(0.9943487291489862);
    msg.setSource(41277U);
    msg.setSourceEntity(144U);
    msg.setDestination(52441U);
    msg.setDestinationEntity(163U);
    msg.value = 0.7440110841205443;

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
    msg.setTimeStamp(0.048684013195682385);
    msg.setSource(35509U);
    msg.setSourceEntity(94U);
    msg.setDestination(38672U);
    msg.setDestinationEntity(49U);
    msg.value = 0.07175408610025169;

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
    msg.setTimeStamp(0.7819179616454345);
    msg.setSource(51180U);
    msg.setSourceEntity(15U);
    msg.setDestination(62984U);
    msg.setDestinationEntity(171U);
    msg.value = 0.18710882890856073;

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
    msg.setTimeStamp(0.499279815468636);
    msg.setSource(48772U);
    msg.setSourceEntity(26U);
    msg.setDestination(10203U);
    msg.setDestinationEntity(10U);
    msg.value = 0.7019280964123069;

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
    msg.setTimeStamp(0.932824558517729);
    msg.setSource(29955U);
    msg.setSourceEntity(115U);
    msg.setDestination(21562U);
    msg.setDestinationEntity(87U);
    msg.x = 0.6658093716192977;
    msg.y = 0.3610041072403105;
    msg.z = 0.22603444259181615;
    msg.phi = 0.40576939670262735;
    msg.theta = 0.15688242741301806;
    msg.psi = 0.3185031936405871;
    msg.p = 0.40614076429002355;
    msg.q = 0.7392052299701503;
    msg.r = 0.9062280303044364;
    msg.u = 0.22216360028429005;
    msg.v = 0.7750350618363352;
    msg.w = 0.379840242377915;
    msg.bias_psi = 0.7791472461838762;
    msg.bias_r = 0.6116904652153786;

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
    msg.setTimeStamp(0.5019089350019269);
    msg.setSource(29546U);
    msg.setSourceEntity(53U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(50U);
    msg.x = 0.05844049280588748;
    msg.y = 0.4889624610612363;
    msg.z = 0.36380343207685994;
    msg.phi = 0.03118444506015927;
    msg.theta = 0.12975189724551295;
    msg.psi = 0.8619861296441073;
    msg.p = 0.8720673430890159;
    msg.q = 0.04215623627287679;
    msg.r = 0.04623099995570845;
    msg.u = 0.8019507521860684;
    msg.v = 0.46537679192237147;
    msg.w = 0.2516417340357111;
    msg.bias_psi = 0.5276955317234203;
    msg.bias_r = 0.15325244308320451;

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
    msg.setTimeStamp(0.9841456988510137);
    msg.setSource(5836U);
    msg.setSourceEntity(154U);
    msg.setDestination(9816U);
    msg.setDestinationEntity(21U);
    msg.x = 0.09977757053673608;
    msg.y = 0.3489773068497749;
    msg.z = 0.639383179487397;
    msg.phi = 0.8200765233955948;
    msg.theta = 0.6954230695463086;
    msg.psi = 0.5550397569161777;
    msg.p = 0.11559447853709859;
    msg.q = 0.9086172704780353;
    msg.r = 0.3368710176985137;
    msg.u = 0.03753178296703252;
    msg.v = 0.8251811192666964;
    msg.w = 0.9552271097540211;
    msg.bias_psi = 0.21387334677314518;
    msg.bias_r = 0.668870712410103;

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
    msg.setTimeStamp(0.21796149668394027);
    msg.setSource(49045U);
    msg.setSourceEntity(190U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(56U);
    msg.bias_psi = 0.09996470882912756;
    msg.bias_r = 0.03255782858565459;
    msg.cog = 0.5778546844810956;
    msg.cyaw = 0.2679093516710641;
    msg.lbl_rej_level = 0.2152593250546464;
    msg.gps_rej_level = 0.8507678148541822;
    msg.custom_x = 0.22578239788606425;
    msg.custom_y = 0.7818441101853084;
    msg.custom_z = 0.1022949955171718;

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
    msg.setTimeStamp(0.5434331315830215);
    msg.setSource(33362U);
    msg.setSourceEntity(138U);
    msg.setDestination(33823U);
    msg.setDestinationEntity(143U);
    msg.bias_psi = 0.23292372717941445;
    msg.bias_r = 0.2483813965006071;
    msg.cog = 0.810064014792885;
    msg.cyaw = 0.6557793827812168;
    msg.lbl_rej_level = 0.4148951101103676;
    msg.gps_rej_level = 0.8427314442560235;
    msg.custom_x = 0.05750590090846819;
    msg.custom_y = 0.10319198396159934;
    msg.custom_z = 0.2219986051740137;

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
    msg.setTimeStamp(0.14750502835621304);
    msg.setSource(63109U);
    msg.setSourceEntity(74U);
    msg.setDestination(14909U);
    msg.setDestinationEntity(192U);
    msg.bias_psi = 0.4641343983897376;
    msg.bias_r = 0.27010975526676206;
    msg.cog = 0.1898708088568205;
    msg.cyaw = 0.10779141404566728;
    msg.lbl_rej_level = 0.6393491576660093;
    msg.gps_rej_level = 0.17328036382225998;
    msg.custom_x = 0.7806724244560125;
    msg.custom_y = 0.7671545095328387;
    msg.custom_z = 0.20892651960304076;

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
    msg.setTimeStamp(0.12853901547120294);
    msg.setSource(6409U);
    msg.setSourceEntity(39U);
    msg.setDestination(5055U);
    msg.setDestinationEntity(9U);
    msg.utc_time = 0.18503027949466389;
    msg.reason = 201U;

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
    msg.setTimeStamp(0.6022406692993133);
    msg.setSource(63756U);
    msg.setSourceEntity(240U);
    msg.setDestination(19043U);
    msg.setDestinationEntity(243U);
    msg.utc_time = 0.35845101512704425;
    msg.reason = 148U;

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
    msg.setTimeStamp(0.8853820335472046);
    msg.setSource(27015U);
    msg.setSourceEntity(43U);
    msg.setDestination(20208U);
    msg.setDestinationEntity(67U);
    msg.utc_time = 0.1803712144082691;
    msg.reason = 111U;

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
    msg.setTimeStamp(0.3639438610898298);
    msg.setSource(21146U);
    msg.setSourceEntity(242U);
    msg.setDestination(38385U);
    msg.setDestinationEntity(42U);
    msg.id = 94U;
    msg.range = 0.22077528977836858;
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
    msg.setTimeStamp(0.49708466541737917);
    msg.setSource(48842U);
    msg.setSourceEntity(235U);
    msg.setDestination(40772U);
    msg.setDestinationEntity(106U);
    msg.id = 234U;
    msg.range = 0.4960804743414774;
    msg.acceptance = 170U;

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
    msg.setTimeStamp(0.6309586745226977);
    msg.setSource(26719U);
    msg.setSourceEntity(32U);
    msg.setDestination(36256U);
    msg.setDestinationEntity(247U);
    msg.id = 175U;
    msg.range = 0.35008531400183096;
    msg.acceptance = 106U;

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
    msg.setTimeStamp(0.26375897592170405);
    msg.setSource(17778U);
    msg.setSourceEntity(65U);
    msg.setDestination(25997U);
    msg.setDestinationEntity(44U);
    msg.type = 128U;
    msg.reason = 186U;
    msg.value = 0.5879223962309278;
    msg.timestep = 0.8127434265770592;

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
    msg.setTimeStamp(0.3434093721296322);
    msg.setSource(25872U);
    msg.setSourceEntity(239U);
    msg.setDestination(6428U);
    msg.setDestinationEntity(107U);
    msg.type = 78U;
    msg.reason = 195U;
    msg.value = 0.7638959251948001;
    msg.timestep = 0.9771351167255863;

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
    msg.setTimeStamp(0.974025125679869);
    msg.setSource(42306U);
    msg.setSourceEntity(84U);
    msg.setDestination(24234U);
    msg.setDestinationEntity(251U);
    msg.type = 111U;
    msg.reason = 14U;
    msg.value = 0.06874349977563154;
    msg.timestep = 0.7381603425438268;

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
    msg.setTimeStamp(0.9058291349454417);
    msg.setSource(26110U);
    msg.setSourceEntity(85U);
    msg.setDestination(38536U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.1543432822426587);
    msg.setSource(47736U);
    msg.setSourceEntity(181U);
    msg.setDestination(7123U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.06496387240633117);
    msg.setSource(10809U);
    msg.setSourceEntity(65U);
    msg.setDestination(10091U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.9980493580358583);
    msg.setSource(12500U);
    msg.setSourceEntity(112U);
    msg.setDestination(932U);
    msg.setDestinationEntity(200U);
    msg.beacon.assign("VKAENCDIHZNXHHUVRPITEZIPZIAAGBGAZQMTDHUBOKWEGQFZMFJNFIQXZKNUBJCHSOXWICWQRHRAFFMEUVNTCCYNFZYZTDELLQUQSEQJUOTOMVFVLYGHMBPCGYIWOBYKFRDYSPBNBSQMCEHWOJTWCGWLMLHYJOVRUDTTPJGJSLQIPYNOLPLXRXNFWSVTUXWKJRKKMDZRGDKSJIDJOKUUWBKC");
    msg.x = 0.3235110100800547;
    msg.y = 0.5776489480376844;
    msg.depth = 0.3981135188245888;
    msg.var_x = 0.692396008449656;
    msg.var_y = 0.39853494968514425;

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
    msg.setTimeStamp(0.4345764489176196);
    msg.setSource(38308U);
    msg.setSourceEntity(211U);
    msg.setDestination(3381U);
    msg.setDestinationEntity(151U);
    msg.beacon.assign("OZVILQCFSPLWKTMIRYDVBMWYNIVUZNEFDAIKDHCABRHCZNRGMPZITAONBODCWCYHQPUXGOVLJIOTHXUGEIGLIEEBCCQMGZXZKKKPOSPBNSBKYTSGZDOMMLEODGURLQSDHTPXAFUPH");
    msg.x = 0.664483224971296;
    msg.y = 0.8877859107902947;
    msg.depth = 0.8928218559243468;
    msg.var_x = 0.32012887416685587;
    msg.var_y = 0.5348458705098197;

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
    msg.setTimeStamp(0.3446908347498546);
    msg.setSource(13833U);
    msg.setSourceEntity(66U);
    msg.setDestination(61511U);
    msg.setDestinationEntity(33U);
    msg.beacon.assign("UYYCQMATCTUBQQQMFBTWXWUIHFEQBBELRDGBFHYGKMSIHFFPSATOHUVVOPOWSKRNX");
    msg.x = 0.39621144616743065;
    msg.y = 0.3985740546907003;
    msg.depth = 0.5735589359158895;
    msg.var_x = 0.564756854787465;
    msg.var_y = 0.9030700336645808;

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
    msg.setTimeStamp(0.9535580568276867);
    msg.setSource(15973U);
    msg.setSourceEntity(47U);
    msg.setDestination(58637U);
    msg.setDestinationEntity(222U);
    msg.value = 0.13690044256418166;

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
    msg.setTimeStamp(0.6757847639252825);
    msg.setSource(58688U);
    msg.setSourceEntity(59U);
    msg.setDestination(5199U);
    msg.setDestinationEntity(99U);
    msg.value = 0.23527450158838237;

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
    msg.setTimeStamp(0.40300455852258654);
    msg.setSource(42961U);
    msg.setSourceEntity(225U);
    msg.setDestination(10424U);
    msg.setDestinationEntity(125U);
    msg.value = 0.808083877355143;

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
    msg.setTimeStamp(0.6775397678270938);
    msg.setSource(63031U);
    msg.setSourceEntity(62U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(242U);
    msg.value = 0.3560056324405083;
    msg.z_units = 31U;

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
    msg.setTimeStamp(0.05141255366514497);
    msg.setSource(43312U);
    msg.setSourceEntity(104U);
    msg.setDestination(28147U);
    msg.setDestinationEntity(83U);
    msg.value = 0.017821829241661313;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.8580490521154482);
    msg.setSource(46234U);
    msg.setSourceEntity(110U);
    msg.setDestination(54331U);
    msg.setDestinationEntity(234U);
    msg.value = 0.11436629620300165;
    msg.z_units = 166U;

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
    msg.setTimeStamp(0.5761516859815848);
    msg.setSource(55525U);
    msg.setSourceEntity(241U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(49U);
    msg.value = 0.8697705900388285;
    msg.speed_units = 243U;

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
    msg.setTimeStamp(0.30648317832648897);
    msg.setSource(65010U);
    msg.setSourceEntity(203U);
    msg.setDestination(43446U);
    msg.setDestinationEntity(246U);
    msg.value = 0.301986847643115;
    msg.speed_units = 173U;

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
    msg.setTimeStamp(0.4995485016459411);
    msg.setSource(4329U);
    msg.setSourceEntity(159U);
    msg.setDestination(4752U);
    msg.setDestinationEntity(95U);
    msg.value = 0.8961347304313159;
    msg.speed_units = 107U;

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
    msg.setTimeStamp(0.4689510483680761);
    msg.setSource(50369U);
    msg.setSourceEntity(90U);
    msg.setDestination(36845U);
    msg.setDestinationEntity(5U);
    msg.value = 0.3870981751701038;

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
    msg.setTimeStamp(0.9747296744580627);
    msg.setSource(49442U);
    msg.setSourceEntity(30U);
    msg.setDestination(9184U);
    msg.setDestinationEntity(220U);
    msg.value = 0.9642851659277885;

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
    msg.setTimeStamp(0.5898080911208149);
    msg.setSource(50358U);
    msg.setSourceEntity(68U);
    msg.setDestination(16935U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7075073729937557;

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
    msg.setTimeStamp(0.45779018091207613);
    msg.setSource(17664U);
    msg.setSourceEntity(115U);
    msg.setDestination(19359U);
    msg.setDestinationEntity(70U);
    msg.value = 0.41964756825747207;

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
    msg.setTimeStamp(0.38556250194314634);
    msg.setSource(20287U);
    msg.setSourceEntity(237U);
    msg.setDestination(28799U);
    msg.setDestinationEntity(3U);
    msg.value = 0.09271921233845559;

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
    msg.setTimeStamp(0.9279545155655404);
    msg.setSource(44051U);
    msg.setSourceEntity(20U);
    msg.setDestination(43732U);
    msg.setDestinationEntity(144U);
    msg.value = 0.931946057045642;

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
    msg.setTimeStamp(0.39124483430415613);
    msg.setSource(41030U);
    msg.setSourceEntity(166U);
    msg.setDestination(57068U);
    msg.setDestinationEntity(157U);
    msg.value = 0.8164874701681368;

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
    msg.setTimeStamp(0.15684953234978827);
    msg.setSource(13932U);
    msg.setSourceEntity(177U);
    msg.setDestination(32988U);
    msg.setDestinationEntity(134U);
    msg.value = 0.17649742505185684;

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
    msg.setTimeStamp(0.6741513284029463);
    msg.setSource(12719U);
    msg.setSourceEntity(152U);
    msg.setDestination(15245U);
    msg.setDestinationEntity(82U);
    msg.value = 0.05446856272114409;

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
    msg.setTimeStamp(0.1877132321202789);
    msg.setSource(32934U);
    msg.setSourceEntity(93U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(187U);
    msg.start_lat = 0.336121817447682;
    msg.start_lon = 0.5723931678215665;
    msg.start_z = 0.21944234009208108;
    msg.start_z_units = 56U;
    msg.end_lat = 0.7859204491954075;
    msg.end_lon = 0.5754219314681059;
    msg.end_z = 0.5806647084006629;
    msg.end_z_units = 66U;
    msg.speed = 0.2866559556263768;
    msg.speed_units = 216U;
    msg.lradius = 0.05789265380866271;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.6476387429826399);
    msg.setSource(17256U);
    msg.setSourceEntity(237U);
    msg.setDestination(13058U);
    msg.setDestinationEntity(166U);
    msg.start_lat = 0.2011099137293626;
    msg.start_lon = 0.6665818084340835;
    msg.start_z = 0.6429962776097807;
    msg.start_z_units = 252U;
    msg.end_lat = 0.03643887377739996;
    msg.end_lon = 0.2024256719384152;
    msg.end_z = 0.34045611209436855;
    msg.end_z_units = 185U;
    msg.speed = 0.8687375476669863;
    msg.speed_units = 100U;
    msg.lradius = 0.7906573884483963;
    msg.flags = 80U;

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
    msg.setTimeStamp(0.053453319308605196);
    msg.setSource(936U);
    msg.setSourceEntity(42U);
    msg.setDestination(18162U);
    msg.setDestinationEntity(27U);
    msg.start_lat = 0.5229750505720174;
    msg.start_lon = 0.6096853474409466;
    msg.start_z = 0.14637640472499902;
    msg.start_z_units = 122U;
    msg.end_lat = 0.6280701565390368;
    msg.end_lon = 0.43415294213849687;
    msg.end_z = 0.8492515233038238;
    msg.end_z_units = 252U;
    msg.speed = 0.5321798914446482;
    msg.speed_units = 68U;
    msg.lradius = 0.2953757615569145;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.14281733883808467);
    msg.setSource(6202U);
    msg.setSourceEntity(70U);
    msg.setDestination(40139U);
    msg.setDestinationEntity(99U);
    msg.x = 0.7110870033794225;
    msg.y = 0.47580196529963326;
    msg.z = 0.8764803104566302;
    msg.k = 0.2998243297508606;
    msg.m = 0.130365226465887;
    msg.n = 0.6021642963800676;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.6801079825625593);
    msg.setSource(55225U);
    msg.setSourceEntity(52U);
    msg.setDestination(52948U);
    msg.setDestinationEntity(230U);
    msg.x = 0.761142063332373;
    msg.y = 0.9392953099574748;
    msg.z = 0.905240983144237;
    msg.k = 0.6377868678396446;
    msg.m = 0.7083134622185373;
    msg.n = 0.7194414170195982;
    msg.flags = 56U;

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
    msg.setTimeStamp(0.5041934188906819);
    msg.setSource(49415U);
    msg.setSourceEntity(72U);
    msg.setDestination(19912U);
    msg.setDestinationEntity(61U);
    msg.x = 0.5571943179616116;
    msg.y = 0.1887038130466987;
    msg.z = 0.8395660023207311;
    msg.k = 0.3536660893493073;
    msg.m = 0.7427304326969311;
    msg.n = 0.5650946563433311;
    msg.flags = 154U;

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
    msg.setTimeStamp(0.05923649548834431);
    msg.setSource(5285U);
    msg.setSourceEntity(252U);
    msg.setDestination(64671U);
    msg.setDestinationEntity(5U);
    msg.value = 0.254954256699201;

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
    msg.setTimeStamp(0.39862720414097463);
    msg.setSource(64904U);
    msg.setSourceEntity(24U);
    msg.setDestination(47326U);
    msg.setDestinationEntity(218U);
    msg.value = 0.904809824317357;

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
    msg.setTimeStamp(0.752398686969759);
    msg.setSource(13354U);
    msg.setSourceEntity(187U);
    msg.setDestination(32114U);
    msg.setDestinationEntity(234U);
    msg.value = 0.2183328178266365;

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
    msg.setTimeStamp(0.35923036676338993);
    msg.setSource(59740U);
    msg.setSourceEntity(231U);
    msg.setDestination(42772U);
    msg.setDestinationEntity(99U);
    msg.u = 0.027194875344419445;
    msg.v = 0.8409805490834465;
    msg.w = 0.4298448605298698;
    msg.p = 0.9933099294918339;
    msg.q = 0.5033744472014948;
    msg.r = 0.9060964565485782;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.5225501066409719);
    msg.setSource(59247U);
    msg.setSourceEntity(51U);
    msg.setDestination(37261U);
    msg.setDestinationEntity(25U);
    msg.u = 0.37271060068023765;
    msg.v = 0.88121641108091;
    msg.w = 0.4683498027847025;
    msg.p = 0.022726738437961136;
    msg.q = 0.45991028955223745;
    msg.r = 0.02877193389837529;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.8343480096288258);
    msg.setSource(36962U);
    msg.setSourceEntity(243U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(18U);
    msg.u = 0.8701963584192797;
    msg.v = 0.15692312929741215;
    msg.w = 0.8243780279167586;
    msg.p = 0.38556223947028956;
    msg.q = 0.67091389544292;
    msg.r = 0.37964026105261206;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.5195694480686637);
    msg.setSource(25560U);
    msg.setSourceEntity(6U);
    msg.setDestination(58746U);
    msg.setDestinationEntity(244U);
    msg.start_lat = 0.37115372772499833;
    msg.start_lon = 0.2013592943354483;
    msg.start_z = 0.29929991294400293;
    msg.start_z_units = 193U;
    msg.end_lat = 0.2198546592608741;
    msg.end_lon = 0.4921829345896579;
    msg.end_z = 0.8952801986186751;
    msg.end_z_units = 165U;
    msg.lradius = 0.5341268924094805;
    msg.flags = 91U;
    msg.x = 0.6901126986767154;
    msg.y = 0.5603817549003396;
    msg.z = 0.491516670044601;
    msg.vx = 0.7630135956184695;
    msg.vy = 0.4415857768251986;
    msg.vz = 0.3100976893178726;
    msg.course_error = 0.9809737121069781;
    msg.eta = 19709U;

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
    msg.setTimeStamp(0.2693020824640925);
    msg.setSource(52390U);
    msg.setSourceEntity(60U);
    msg.setDestination(12790U);
    msg.setDestinationEntity(134U);
    msg.start_lat = 0.027521208558282884;
    msg.start_lon = 0.44670367505566755;
    msg.start_z = 0.9829017977863718;
    msg.start_z_units = 49U;
    msg.end_lat = 0.05872049638110921;
    msg.end_lon = 0.4563532619409507;
    msg.end_z = 0.6479524262164267;
    msg.end_z_units = 141U;
    msg.lradius = 0.5274861999417408;
    msg.flags = 207U;
    msg.x = 0.6150180436891702;
    msg.y = 0.8335180775481489;
    msg.z = 0.47502634354480133;
    msg.vx = 0.7990513092372278;
    msg.vy = 0.06518486535070112;
    msg.vz = 0.27523472263632576;
    msg.course_error = 0.5036640417862842;
    msg.eta = 25417U;

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
    msg.setTimeStamp(0.7154602683991935);
    msg.setSource(23549U);
    msg.setSourceEntity(88U);
    msg.setDestination(15388U);
    msg.setDestinationEntity(181U);
    msg.start_lat = 0.608015778385032;
    msg.start_lon = 0.4009672008898242;
    msg.start_z = 0.12694488091835066;
    msg.start_z_units = 231U;
    msg.end_lat = 0.2637361409046044;
    msg.end_lon = 0.9824094005724096;
    msg.end_z = 0.25006483808273816;
    msg.end_z_units = 148U;
    msg.lradius = 0.49432059317621735;
    msg.flags = 10U;
    msg.x = 0.7053132030573723;
    msg.y = 0.9697335812456501;
    msg.z = 0.05134786784234502;
    msg.vx = 0.04992093778428852;
    msg.vy = 0.6046651421678184;
    msg.vz = 0.6100300729095008;
    msg.course_error = 0.40440874226932433;
    msg.eta = 42516U;

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
    msg.setTimeStamp(0.8505672754398577);
    msg.setSource(11328U);
    msg.setSourceEntity(51U);
    msg.setDestination(29742U);
    msg.setDestinationEntity(45U);
    msg.k = 0.5219422249711138;
    msg.m = 0.41391547354164104;
    msg.n = 0.4926384627614153;

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
    msg.setTimeStamp(0.6347146164953872);
    msg.setSource(60120U);
    msg.setSourceEntity(162U);
    msg.setDestination(47774U);
    msg.setDestinationEntity(11U);
    msg.k = 0.043083485614657024;
    msg.m = 0.4402861310034386;
    msg.n = 0.4615036841623753;

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
    msg.setTimeStamp(0.9651839777801886);
    msg.setSource(38354U);
    msg.setSourceEntity(108U);
    msg.setDestination(6282U);
    msg.setDestinationEntity(166U);
    msg.k = 0.9611999124242633;
    msg.m = 0.641958049748687;
    msg.n = 0.3873763077759158;

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
    msg.setTimeStamp(0.6698677995261229);
    msg.setSource(17556U);
    msg.setSourceEntity(138U);
    msg.setDestination(28304U);
    msg.setDestinationEntity(192U);
    msg.p = 0.8338778873763267;
    msg.i = 0.42425713429991785;
    msg.d = 0.060676096862959494;
    msg.a = 0.1316195586548694;

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
    msg.setTimeStamp(0.048694001333256076);
    msg.setSource(5307U);
    msg.setSourceEntity(47U);
    msg.setDestination(3506U);
    msg.setDestinationEntity(95U);
    msg.p = 0.558955951592551;
    msg.i = 0.043535316411500546;
    msg.d = 0.9706849522575721;
    msg.a = 0.24729054592707622;

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
    msg.setTimeStamp(0.20798347004290452);
    msg.setSource(46465U);
    msg.setSourceEntity(85U);
    msg.setDestination(60380U);
    msg.setDestinationEntity(201U);
    msg.p = 0.09947765084522342;
    msg.i = 0.35306237630250803;
    msg.d = 0.21402617038672067;
    msg.a = 0.08044879467765342;

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
    msg.setTimeStamp(0.2190847935028133);
    msg.setSource(36872U);
    msg.setSourceEntity(102U);
    msg.setDestination(61378U);
    msg.setDestinationEntity(177U);
    msg.op = 8U;

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
    msg.setTimeStamp(0.8196528730741673);
    msg.setSource(1868U);
    msg.setSourceEntity(124U);
    msg.setDestination(13854U);
    msg.setDestinationEntity(217U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.9682140552022482);
    msg.setSource(35047U);
    msg.setSourceEntity(160U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(160U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.4642297514716407);
    msg.setSource(55813U);
    msg.setSourceEntity(167U);
    msg.setDestination(58284U);
    msg.setDestinationEntity(74U);
    msg.timeout = 43544U;
    msg.lat = 0.2535937348382582;
    msg.lon = 0.30948319664197466;
    msg.z = 0.8403187005591715;
    msg.z_units = 223U;
    msg.speed = 0.2733550268503645;
    msg.speed_units = 172U;
    msg.roll = 0.5141932528210089;
    msg.pitch = 0.4750815423921879;
    msg.yaw = 0.7066620639939776;
    msg.custom.assign("WULIPYRMOLCROSVZREVCNEFNHHJPUEK");

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
    msg.setTimeStamp(0.013074102292355061);
    msg.setSource(50813U);
    msg.setSourceEntity(120U);
    msg.setDestination(7564U);
    msg.setDestinationEntity(189U);
    msg.timeout = 59926U;
    msg.lat = 0.485515880306307;
    msg.lon = 0.9717511069012282;
    msg.z = 0.9648304906863826;
    msg.z_units = 161U;
    msg.speed = 0.2614658415157157;
    msg.speed_units = 198U;
    msg.roll = 0.9120183479223896;
    msg.pitch = 0.35965888412800995;
    msg.yaw = 0.4126007117760112;
    msg.custom.assign("DPXUSMNMMATKUSSDHSYSICTVWSXLYPKODEWABGPUSNRDHCISZJOMJXEUOBXFENFYABIKZEMFVRLYNTJCSFTOINRZZBYEUQKVIMCVROQZLQOXNQZLYCJULLWGIBDJSGVPLILTQQYAEMPMWBJHODRKRGTTDJYCFGFPHFODHWFHCIBUCGVYQXKECPOXEHV");

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
    msg.setTimeStamp(0.7071119894717662);
    msg.setSource(12594U);
    msg.setSourceEntity(25U);
    msg.setDestination(44033U);
    msg.setDestinationEntity(124U);
    msg.timeout = 27609U;
    msg.lat = 0.039916699727129745;
    msg.lon = 0.019863477030924614;
    msg.z = 0.28220161792280196;
    msg.z_units = 72U;
    msg.speed = 0.1921768401803713;
    msg.speed_units = 99U;
    msg.roll = 0.40532166855333696;
    msg.pitch = 0.9642166974766913;
    msg.yaw = 0.7593999362563241;
    msg.custom.assign("BQBXLBKZZTIJXIEOUYHFEYZDOJWWRRYEKQYBLGCZDDTFHHBZFNQRFWPGFUTFDCQUSDCOBQEYOELKSHLJMJENGZTAPITWNRWQZXRGSVMVLFBJVLMORXMYMIUUARKXOCXPALUUIDXVMPWJBVJERSKATQQMCWMLPVDUYJGYDHGFYNACKIWASLXAECTFHQEZNPZKICUCHITDWJAPOHRJCAYKSKELHVMSBTPQ");

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
    msg.setTimeStamp(0.13891110522101302);
    msg.setSource(62169U);
    msg.setSourceEntity(48U);
    msg.setDestination(12019U);
    msg.setDestinationEntity(32U);
    msg.timeout = 21569U;
    msg.lat = 0.23003803405309198;
    msg.lon = 0.10245267319772078;
    msg.z = 0.7781251165119114;
    msg.z_units = 159U;
    msg.speed = 0.7130617834009138;
    msg.speed_units = 27U;
    msg.duration = 15089U;
    msg.radius = 0.505769122189973;
    msg.flags = 214U;
    msg.custom.assign("KWLEIMOMJOHXOGADLGCPZQAOIUPZKHSBQBVDKNUVIRRVEQDPUTCMYADQVCHRXKZYRE");

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
    msg.setTimeStamp(0.8393365243756615);
    msg.setSource(12367U);
    msg.setSourceEntity(104U);
    msg.setDestination(54330U);
    msg.setDestinationEntity(24U);
    msg.timeout = 51194U;
    msg.lat = 0.29176571058912937;
    msg.lon = 0.6949107851217922;
    msg.z = 0.7819918008942011;
    msg.z_units = 38U;
    msg.speed = 0.9009150641846342;
    msg.speed_units = 32U;
    msg.duration = 23644U;
    msg.radius = 0.9580350743504271;
    msg.flags = 176U;
    msg.custom.assign("QDQMESBBMVZZMSVQJTOMKNRCNQDYSWDYKGTIDRYMWGXPPVMCYQEXLFBARXCUVJKALBLEFLFDXNHXQRHJOZGELLGJKMTYPAFVLZCKPJRKHZYNCDGDNHAIXSMJWXTJIGBSXQRZAFJLCNTYHCQRFZVLHIYLPPOUJBZNP");

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
    msg.setTimeStamp(0.7573946801907777);
    msg.setSource(9471U);
    msg.setSourceEntity(51U);
    msg.setDestination(53033U);
    msg.setDestinationEntity(25U);
    msg.timeout = 10370U;
    msg.lat = 0.693533443564639;
    msg.lon = 0.23673565488487647;
    msg.z = 0.3347280714128227;
    msg.z_units = 163U;
    msg.speed = 0.5457388852694316;
    msg.speed_units = 142U;
    msg.duration = 18372U;
    msg.radius = 0.675011660479949;
    msg.flags = 104U;
    msg.custom.assign("XJJBQIDBCGPONALZSLUGUOXRLYOICZAMPQKSPVSNDZATJWEJHEFMXDJIMYEQMHERYNMZSTHTPRJ");

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
    msg.setTimeStamp(0.5138076678940875);
    msg.setSource(1392U);
    msg.setSourceEntity(16U);
    msg.setDestination(38042U);
    msg.setDestinationEntity(240U);
    msg.custom.assign("TRWTDZIPZBBQFGEVREPRFYWPTJCKTGAEUNZLAJYOUVYMQKQKUWAQDTXKGZAWJKBYGHRZEROZDOIBXRRICCPZLITFJHJUDAAJMCWDXNBLFSFGNXZCMBONBHNDMOJRYGMESVEAKDMVHYXYCPIYOEMHLNTSQQKLAXIBQZKVGSK");

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
    msg.setTimeStamp(0.8924463226184629);
    msg.setSource(20585U);
    msg.setSourceEntity(133U);
    msg.setDestination(911U);
    msg.setDestinationEntity(58U);
    msg.custom.assign("TGPLGPEOTCYPVTNGXFMYDMRWFHAVDRNUFZVRFWQZDYQVPJNYFFWEKNRERBD");

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
    msg.setTimeStamp(0.04428134001794537);
    msg.setSource(63246U);
    msg.setSourceEntity(124U);
    msg.setDestination(59433U);
    msg.setDestinationEntity(207U);
    msg.custom.assign("XUFDSRSBPRDMYSOIVKFHGBAITJVZVPTJZJSDISGKUJKFJHNZXFTNNZBPRGZQXGYBAPADYKFAQONQFIBCVHVCECWXNGEWOLVHMUQUGCXMZ");

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
    msg.setTimeStamp(0.6931796383204523);
    msg.setSource(4425U);
    msg.setSourceEntity(64U);
    msg.setDestination(26426U);
    msg.setDestinationEntity(38U);
    msg.timeout = 48593U;
    msg.lat = 0.2605640385640685;
    msg.lon = 0.8043050274181355;
    msg.z = 0.9765869710815374;
    msg.z_units = 129U;
    msg.duration = 37119U;
    msg.speed = 0.9011825332962664;
    msg.speed_units = 253U;
    msg.type = 30U;
    msg.radius = 0.6254197495414766;
    msg.length = 0.006905266324620518;
    msg.bearing = 0.7460906377651543;
    msg.direction = 167U;
    msg.custom.assign("XMMBZGVYCAIURLNHZIHDNSFJZYWKRTNVUVZRDBFNERFQLZCCPFCALYRRLTYGTCXYWBBCRSPFAQCMRBUQZEMLDWYFIWTADKJPSJEYQPARJUQYHKAEUGHQWBEQXFIMOPSNEGVTNFPCDPUJOQHQTIAWXKOOKGWDYVLPJGEANSZSHJKXRTXZVFOMSZJNBDAUSVNOLOLKSEKKPZJHVLSOODCTDWLCENEJIBWPFBGUBMMXIUHVIXHOQTWGKDUGAT");

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
    msg.setTimeStamp(0.7294747232973038);
    msg.setSource(21712U);
    msg.setSourceEntity(104U);
    msg.setDestination(4056U);
    msg.setDestinationEntity(228U);
    msg.timeout = 59911U;
    msg.lat = 0.818417012716026;
    msg.lon = 0.9770656964770902;
    msg.z = 0.2807196292095566;
    msg.z_units = 194U;
    msg.duration = 49581U;
    msg.speed = 0.3311544005379281;
    msg.speed_units = 240U;
    msg.type = 37U;
    msg.radius = 0.019184145460111823;
    msg.length = 0.4341369294489328;
    msg.bearing = 0.28635182305897633;
    msg.direction = 58U;
    msg.custom.assign("GMTAWEFHYWGFYXAFYYZBBIKNRDMGYQGYAWMCEPUKIKCEHVNMLCQYJSRXVRZFDJTHGQWBDEE");

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
    msg.setTimeStamp(0.055903892608857864);
    msg.setSource(12867U);
    msg.setSourceEntity(228U);
    msg.setDestination(47613U);
    msg.setDestinationEntity(214U);
    msg.timeout = 10404U;
    msg.lat = 0.7778957138356618;
    msg.lon = 0.9726360487225135;
    msg.z = 0.4555441118944257;
    msg.z_units = 118U;
    msg.duration = 61601U;
    msg.speed = 0.41503186536793235;
    msg.speed_units = 131U;
    msg.type = 3U;
    msg.radius = 0.7012378980091081;
    msg.length = 0.2485326664048748;
    msg.bearing = 0.8494453512064706;
    msg.direction = 240U;
    msg.custom.assign("THMCJEHOAJWYSIVSVGTOPGZBBNMVQVKWALWASHMPPQAFNPFDZVKXUZQLKXKJGAEMNALYUJBQFXTZYGBEHROGCIYICJHQYCEYGTPELBZQCNFOMRSDNHHGLGSAJNJXWWSZVITRUQTNWFVVADINCJVBKWEOSRIVGXTRPFFMMSWSOTZFQPSXPWLEEYBDTCUKIOUOFRYLDRALMXUENXUYUKCBDKCBJGRIXPREDZKLXLQIHZ");

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
    msg.setTimeStamp(0.06711269630284111);
    msg.setSource(74U);
    msg.setSourceEntity(79U);
    msg.setDestination(4698U);
    msg.setDestinationEntity(81U);
    msg.duration = 14974U;
    msg.custom.assign("TKAMHMNJDYHYMDQONOBTCPJVYRQIEDAIXAAUACQXERVDWDSBYLRMSIIFRKOJKGVSNPKEAJEDBAKLMLGZJUFRFHOZDVQGWWTLWCXKUWQRIMUYSNLBVBXQWNNHKHN");

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
    msg.setTimeStamp(0.47033477011812974);
    msg.setSource(64104U);
    msg.setSourceEntity(150U);
    msg.setDestination(32868U);
    msg.setDestinationEntity(112U);
    msg.duration = 52131U;
    msg.custom.assign("HKAEMYNLDWPYTIUSLZZLPRFALSDRRFULDTCFSKVCBUVZZMOSKYILSTNZWVEIUSOYTOHEUFDGJAEQCBRJCDCPQJYYBGDBOBHWRAELAUFAOTMGNRJFJJIHSOYHMWPKCQNFGAIKPGYLEMOEGBSXNMPURIRRSBLQWYZQRHNNDIQZHQJFUPAMCSZQHPVAXKDEVNXTWKWUJVIOETGVKLBPFODOVWHIXVGQKNCMNZDZ");

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
    msg.setTimeStamp(0.6732656181396093);
    msg.setSource(61545U);
    msg.setSourceEntity(221U);
    msg.setDestination(21925U);
    msg.setDestinationEntity(251U);
    msg.duration = 51520U;
    msg.custom.assign("VYHFCNEJSKORTMVAJZFNKQYPBYODOPXKSIASGBOLRCLNDNTWFXHRUIFQHACGGLILKBTGVXHPCRLPPXWVTGUMNQDIRMRUMYHGBHZWTJQPTLZMLJDJNHDZMVGGHQKEEMNJXSWRMBEDPUQVENDZIPRWZ");

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
    msg.setTimeStamp(0.47615837735319866);
    msg.setSource(11992U);
    msg.setSourceEntity(210U);
    msg.setDestination(62236U);
    msg.setDestinationEntity(174U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9130174710699659;
    tmp_msg_0.speed_units = 49U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11406U;
    msg.custom.assign("SXNFUUPMEPLTAAGPYOLUPFMKVNZMPUEFVASRNYNIKUBWVNCEUDLRARWBBSPWXDPARRFZCLJMQZCUZGZGMRGKHZSTXNVWZWCAHTXBWYSFFOXOMAPELCAIRXFVLGHTUTTLQJETJONZDOGZMWSJKGHFDFLBPBIOILYYTXQJXJYBSAQCHOBJOKSIAYTOCRXHELZHQPJKQEWXQKIHDHDIVCUVSNQRR");

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
    msg.setTimeStamp(0.6355985125803338);
    msg.setSource(27503U);
    msg.setSourceEntity(198U);
    msg.setDestination(64940U);
    msg.setDestinationEntity(222U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.5116227428863158;
    tmp_msg_0.start_lon = 0.08213275365602657;
    tmp_msg_0.start_z = 0.3490947660047953;
    tmp_msg_0.start_z_units = 216U;
    tmp_msg_0.end_lat = 0.2125231068368052;
    tmp_msg_0.end_lon = 0.8383614748692547;
    tmp_msg_0.end_z = 0.32134441266385605;
    tmp_msg_0.end_z_units = 16U;
    tmp_msg_0.speed = 0.27372008706921513;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.lradius = 0.04361455070951836;
    tmp_msg_0.flags = 124U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44705U;
    msg.custom.assign("VGKZSLMWIDTJEPWWZZMQKTSHORMOXOQDBYQUXUFELFEBYHVLSCXDRLDISEGSJQLSJNNAIEIICKZYNVRDMDGXTAXJYMIPACBCZTRSPYXVUHGTOCNVUAOHCDLYNFHRWRZHSB");

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
    msg.setTimeStamp(0.13515393626917582);
    msg.setSource(45037U);
    msg.setSourceEntity(42U);
    msg.setDestination(24515U);
    msg.setDestinationEntity(26U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.11618164369807993;
    msg.control.set(tmp_msg_0);
    msg.duration = 40167U;
    msg.custom.assign("OTTIROKHANTJUTBTCJIBYJPXBECSFEJUPHDWEBGXVDIDAZRSLPQHCRQPLSKOMUBVPDIHVKQSDNLF");

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
    msg.setTimeStamp(0.6783729256021842);
    msg.setSource(41504U);
    msg.setSourceEntity(51U);
    msg.setDestination(49492U);
    msg.setDestinationEntity(199U);
    msg.timeout = 13296U;
    msg.lat = 0.02810553697552043;
    msg.lon = 0.8410866536637798;
    msg.z = 0.9154423491038166;
    msg.z_units = 55U;
    msg.speed = 0.30286117781743926;
    msg.speed_units = 253U;
    msg.bearing = 0.9241971144903086;
    msg.cross_angle = 0.8265118071081416;
    msg.width = 0.46264153045305945;
    msg.length = 0.6976263002925872;
    msg.hstep = 0.34888451885149996;
    msg.coff = 18U;
    msg.alternation = 253U;
    msg.flags = 2U;
    msg.custom.assign("PNCIDSSKOLCMGABSOGMMZFJJLUXNTHIBEKULAWDDSQXUHKDXNEPWOLYOFGXHZORKMBTUDSNAPBKAOTKBIBJGDCFYCIZPQIAIGGTCDQHDVI");

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
    msg.setTimeStamp(0.4506124980182499);
    msg.setSource(11386U);
    msg.setSourceEntity(182U);
    msg.setDestination(47415U);
    msg.setDestinationEntity(104U);
    msg.timeout = 18926U;
    msg.lat = 0.49137153875295714;
    msg.lon = 0.7789470202561827;
    msg.z = 0.5489350776900738;
    msg.z_units = 21U;
    msg.speed = 0.1561705030619417;
    msg.speed_units = 211U;
    msg.bearing = 0.8161930049211074;
    msg.cross_angle = 0.38515396885152975;
    msg.width = 0.3958145943895086;
    msg.length = 0.48472313434411607;
    msg.hstep = 0.3119281816393582;
    msg.coff = 31U;
    msg.alternation = 238U;
    msg.flags = 101U;
    msg.custom.assign("FUVLIODBSQYRBUCVZDBZLRUBYEWINQXRJKJEXPVDVZNZACDFJMP");

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
    msg.setTimeStamp(0.19254633985447844);
    msg.setSource(57572U);
    msg.setSourceEntity(203U);
    msg.setDestination(14267U);
    msg.setDestinationEntity(20U);
    msg.timeout = 16805U;
    msg.lat = 0.1648908600689628;
    msg.lon = 0.8909636518324825;
    msg.z = 0.3044569182049167;
    msg.z_units = 236U;
    msg.speed = 0.6081786997604868;
    msg.speed_units = 159U;
    msg.bearing = 0.881844818108328;
    msg.cross_angle = 0.2366498831331041;
    msg.width = 0.8564530044707753;
    msg.length = 0.6289242729907547;
    msg.hstep = 0.6898261337939056;
    msg.coff = 242U;
    msg.alternation = 88U;
    msg.flags = 37U;
    msg.custom.assign("DLKFXPAWEVNCRHUDJCXVFEKZSZIGBNWHKUFXUOWLNXYBSXQBCIFPGLCMXXEYHQKUPUGZFZVJVCIPCKNPYGYWQXI");

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
    msg.setTimeStamp(0.8829041890294921);
    msg.setSource(24856U);
    msg.setSourceEntity(215U);
    msg.setDestination(61296U);
    msg.setDestinationEntity(60U);
    msg.timeout = 65235U;
    msg.lat = 0.3359542166266749;
    msg.lon = 0.040901246611333875;
    msg.z = 0.20048131172827177;
    msg.z_units = 161U;
    msg.speed = 0.1453408161770019;
    msg.speed_units = 65U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.02325673478737389;
    tmp_msg_0.y = 0.17655585041158162;
    tmp_msg_0.z = 0.40074676561451816;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OBMNNDTZUSLXNNGQKLGBYHJEYMDIIINEPLBHKJTTCCFESZFKDZPMSKMIVUVSIGWYRMAFAXPRXQGVF");

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
    msg.setTimeStamp(0.8541365726086108);
    msg.setSource(46650U);
    msg.setSourceEntity(112U);
    msg.setDestination(47749U);
    msg.setDestinationEntity(98U);
    msg.timeout = 11836U;
    msg.lat = 0.09236691047391443;
    msg.lon = 0.7951346465218133;
    msg.z = 0.03656046026293491;
    msg.z_units = 234U;
    msg.speed = 0.34651924932296796;
    msg.speed_units = 247U;
    msg.custom.assign("GCQPTLQQVOFLXCZYIDDTHZAHWYLJJDCHRMVSNLNXLVCXGZKGKKZQOGGBEDWUPRJAAWCTFNYIHPVASNMDMDIOSBGQFAPKMQWPRLUHGSIBVDCLZFKYZOOIDWKCDRETTBCVOABFFREJZXGHWFTRUGQKYNNPXQMZMEINCSJWBEWR");

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
    msg.setTimeStamp(0.3173355943160018);
    msg.setSource(30810U);
    msg.setSourceEntity(104U);
    msg.setDestination(58921U);
    msg.setDestinationEntity(166U);
    msg.timeout = 963U;
    msg.lat = 0.9629369888097357;
    msg.lon = 0.21481141353746336;
    msg.z = 0.8262708580235896;
    msg.z_units = 216U;
    msg.speed = 0.264122179786066;
    msg.speed_units = 81U;
    msg.custom.assign("DMCCQQIUQNQIBBUDHZRYRSROJFNMEPZKQXTGCPGBOUHTXGX");

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
    msg.setTimeStamp(0.035526359529447715);
    msg.setSource(10906U);
    msg.setSourceEntity(181U);
    msg.setDestination(15868U);
    msg.setDestinationEntity(162U);
    msg.x = 0.05374886028740533;
    msg.y = 0.6497977656993396;
    msg.z = 0.4699674453955257;

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
    msg.setTimeStamp(0.5916845768167043);
    msg.setSource(60408U);
    msg.setSourceEntity(33U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(22U);
    msg.x = 0.43486423527665263;
    msg.y = 0.4571883896285217;
    msg.z = 0.5955584785706001;

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
    msg.setTimeStamp(0.7266455876193306);
    msg.setSource(31352U);
    msg.setSourceEntity(80U);
    msg.setDestination(1330U);
    msg.setDestinationEntity(52U);
    msg.x = 0.7351578964510658;
    msg.y = 0.4910845624167347;
    msg.z = 0.9611094700146523;

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
    msg.setTimeStamp(0.6234708903487365);
    msg.setSource(38984U);
    msg.setSourceEntity(218U);
    msg.setDestination(25004U);
    msg.setDestinationEntity(119U);
    msg.timeout = 64428U;
    msg.lat = 0.5370386632665632;
    msg.lon = 0.22766175520371124;
    msg.z = 0.641760709355991;
    msg.z_units = 240U;
    msg.amplitude = 0.5899163215929751;
    msg.pitch = 0.5157056254822904;
    msg.speed = 0.7446178303338029;
    msg.speed_units = 7U;
    msg.custom.assign("NVBGTHPBCYLKDAFLQKDYGVPPOHGQJMYNQTUNKTUGATZLIGIWQZAVNYQNXCWVFNIOHHZSLSITTCBEYCFILODDDDPJLJJHFWEOJFYBIMKFAOTOXJZDFMOMHUAAXERRKBEG");

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
    msg.setTimeStamp(0.9175496443524338);
    msg.setSource(30485U);
    msg.setSourceEntity(194U);
    msg.setDestination(28617U);
    msg.setDestinationEntity(228U);
    msg.timeout = 26876U;
    msg.lat = 0.8169144845570885;
    msg.lon = 0.21592837223061656;
    msg.z = 0.06739679996684778;
    msg.z_units = 134U;
    msg.amplitude = 0.8095050214798423;
    msg.pitch = 0.06559941277107573;
    msg.speed = 0.8593440643043789;
    msg.speed_units = 119U;
    msg.custom.assign("MWHCQCRFGLDTWMNPOUSMFHDOGNWINAEKJKKOJJWXTNUIUHZNMWYLFLBARQMENQEBUXQVBIOKQXXUFJJGWUZZTMIYOVFRFHXCHLV");

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
    msg.setTimeStamp(0.5867172315836514);
    msg.setSource(30188U);
    msg.setSourceEntity(183U);
    msg.setDestination(11826U);
    msg.setDestinationEntity(238U);
    msg.timeout = 8286U;
    msg.lat = 0.8115079627184772;
    msg.lon = 0.28706539677874277;
    msg.z = 0.8881098524927854;
    msg.z_units = 74U;
    msg.amplitude = 0.628312413990397;
    msg.pitch = 0.13905131406308646;
    msg.speed = 0.2982410329856575;
    msg.speed_units = 212U;
    msg.custom.assign("KQLZOCOUDPJZCIYSIBEZKLHVMONLSKVXPNYSQIFBEQSHMDPTUKFGJMVSATFIBMOTTRUUAIBOWUNCXRMZITJDJKSDHGXGWRCLARIVOKTPHWZGRRXMHOWFBMSIHTAYPCXSPFNFDEX");

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
    msg.setTimeStamp(0.10389625426315308);
    msg.setSource(22236U);
    msg.setSourceEntity(169U);
    msg.setDestination(13571U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.6742460490053582);
    msg.setSource(4147U);
    msg.setSourceEntity(32U);
    msg.setDestination(2631U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.7737824493131445);
    msg.setSource(53206U);
    msg.setSourceEntity(57U);
    msg.setDestination(12152U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.139478026038243);
    msg.setSource(43006U);
    msg.setSourceEntity(242U);
    msg.setDestination(59988U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.3566004023049939;
    msg.lon = 0.45624833336387105;
    msg.z = 0.08916727274604974;
    msg.z_units = 120U;
    msg.radius = 0.9293181713454434;
    msg.duration = 49372U;
    msg.speed = 0.5132143702607154;
    msg.speed_units = 211U;
    msg.custom.assign("EFISHVNESLZRHPEZKVFTRBBWGLFOLASWFWJUKEBPKADAHDXFYKAIHNQSMZQNLKGVMZPSKMJZWRYP");

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
    msg.setTimeStamp(0.6748047848841477);
    msg.setSource(48079U);
    msg.setSourceEntity(229U);
    msg.setDestination(25285U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.28189576015832785;
    msg.lon = 0.3592024959497975;
    msg.z = 0.5048381569658931;
    msg.z_units = 6U;
    msg.radius = 0.06357333857503333;
    msg.duration = 3033U;
    msg.speed = 0.3160342930534972;
    msg.speed_units = 251U;
    msg.custom.assign("FYOWRXOPSAKFJQZUICAYPNLYRHTVFLTPRPGMESOXBODDKIZOPNIBIGCJXSHMBXTOFQOISWCQHVAJSMNUGWIY");

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
    msg.setTimeStamp(0.7203844419778157);
    msg.setSource(24794U);
    msg.setSourceEntity(88U);
    msg.setDestination(15783U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.2017603321857283;
    msg.lon = 0.08825205972092087;
    msg.z = 0.8575387549728931;
    msg.z_units = 15U;
    msg.radius = 0.5112374805560629;
    msg.duration = 47477U;
    msg.speed = 0.5769725564276149;
    msg.speed_units = 230U;
    msg.custom.assign("ZGPPOLCBSNPIMEYLBMHWOXJIVVQIWOOVYESZWKTVGKJIGZYQJSUAQVWXXHFNKBAKXWSJCMIDXPMREDDKCBGWUDGHMMZINIFHMAWBSMRHRIHXEGBARWSDXDVJLNQQFLILZSYDY");

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
    msg.setTimeStamp(0.9126927954369828);
    msg.setSource(28190U);
    msg.setSourceEntity(39U);
    msg.setDestination(29590U);
    msg.setDestinationEntity(51U);
    msg.timeout = 35242U;
    msg.flags = 183U;
    msg.lat = 0.12406336406551621;
    msg.lon = 0.6783067380743901;
    msg.start_z = 0.7844941131471045;
    msg.start_z_units = 137U;
    msg.end_z = 0.8754466235363587;
    msg.end_z_units = 3U;
    msg.radius = 0.49456091236024136;
    msg.speed = 0.5956987134243571;
    msg.speed_units = 99U;
    msg.custom.assign("MJFAVMYBSSOMSFINQDCAVNLTHKGNTKRZXTHHJLRWAJJKGKZBFVNSRGEZWTUGBXYYLYKFPCDERXBAERANDPCDPMOZXYUIXBQXPRVRFCBDJWIMQQINYNAEOOLOTPFIOEHMXKUEIZCNTRQCVAKSCHMUJUJBLQIGXPEZXONLFAHJVCJYUQYSZLQOKFTFQSFZLIRTGSEKVWCPSVURYHAPWQUXOPPYBSGOWUGDHTDMW");

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
    msg.setTimeStamp(0.054783746618929596);
    msg.setSource(6540U);
    msg.setSourceEntity(248U);
    msg.setDestination(43515U);
    msg.setDestinationEntity(208U);
    msg.timeout = 38591U;
    msg.flags = 137U;
    msg.lat = 0.7902428057081666;
    msg.lon = 0.9263487046881004;
    msg.start_z = 0.04761321711938349;
    msg.start_z_units = 49U;
    msg.end_z = 0.6753687182460442;
    msg.end_z_units = 198U;
    msg.radius = 0.20986459753364217;
    msg.speed = 0.495302817111099;
    msg.speed_units = 64U;
    msg.custom.assign("MEVHDPQHFKCAWLXSCSWIHCLRSDXOZLPNINJHMVQPZQZRUNODWWNILVGRCBFZEXFKHJZGDDSGLOXRVUOEXTXIJQNULGBLEOIMFYQDCPGBRJTKFYTSQMEXANEWYKRPYWUHJCXUMWGQLKTYBHQTVJJAKLMDB");

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
    msg.setTimeStamp(0.44360646422226213);
    msg.setSource(15101U);
    msg.setSourceEntity(185U);
    msg.setDestination(27672U);
    msg.setDestinationEntity(216U);
    msg.timeout = 12920U;
    msg.flags = 70U;
    msg.lat = 0.7576201957356387;
    msg.lon = 0.7599235688969407;
    msg.start_z = 0.2856439025114038;
    msg.start_z_units = 64U;
    msg.end_z = 0.6755699783056558;
    msg.end_z_units = 123U;
    msg.radius = 0.04337614900707365;
    msg.speed = 0.268568780051896;
    msg.speed_units = 12U;
    msg.custom.assign("RNKUXFGXQEUICFVYKRGMWZUWHYKKFWJWAEUDPLXUUCTNBGTPDOIJEDFIELHHXRQIQLSCFGELMHECIDYVTAKPZRWYLPYZBDZOFAFVNRBBRAGASOLLFAHIQATOZOCMOAWSHOWGDQQYUCZJUJATYQXQDFJIJYVGVOPNMUQRNV");

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
    msg.setTimeStamp(0.7491753456583665);
    msg.setSource(53278U);
    msg.setSourceEntity(186U);
    msg.setDestination(49617U);
    msg.setDestinationEntity(64U);
    msg.timeout = 59146U;
    msg.lat = 0.860828737599956;
    msg.lon = 0.3661312255136976;
    msg.z = 0.19329973854049753;
    msg.z_units = 28U;
    msg.speed = 0.29239112351122054;
    msg.speed_units = 90U;
    msg.custom.assign("ZGEHVUYNASMPYQUNGJBLCYSBYKLPXHXEEUKCMWNQCBJZKHHIWQXJJXTEZGJRJFHPVKJCVOTWBRNUVQSUMRFSTMSRMXFLVAZPTZFEUYVMTGDOOZDWRASVUBLWBROPSAREKIXBKCWMQZNQYAJBMCEMZXTDRHSHLGLKEIFYVKQDSQYIXEMDOWOPFIOLIVYGTINDXUNHIGDATNGFFKAAHRJQPGCKDWSBTNRPAZFDOLOOBIPHZIPVCCXY");

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
    msg.setTimeStamp(0.5097642153163915);
    msg.setSource(28890U);
    msg.setSourceEntity(203U);
    msg.setDestination(5859U);
    msg.setDestinationEntity(247U);
    msg.timeout = 40799U;
    msg.lat = 0.35368292456372674;
    msg.lon = 0.9831537668524475;
    msg.z = 0.5800536792178771;
    msg.z_units = 203U;
    msg.speed = 0.3460644556004818;
    msg.speed_units = 144U;
    msg.custom.assign("BDIVONIJSEHZPTWRCFHLQUVNGYGXTWIRCJSNFAACNRUXDPGDNLWVEQOQUWJWLEORE");

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
    msg.setTimeStamp(0.013432048208207092);
    msg.setSource(12470U);
    msg.setSourceEntity(57U);
    msg.setDestination(31041U);
    msg.setDestinationEntity(106U);
    msg.timeout = 12077U;
    msg.lat = 0.006302074988181694;
    msg.lon = 0.06393726512649767;
    msg.z = 0.5221825106532689;
    msg.z_units = 97U;
    msg.speed = 0.7240551982338475;
    msg.speed_units = 196U;
    msg.custom.assign("PNMUEQMAGFZVLBXPLFBWMQTZBZPGJDCRVVARBQBZNKAXNRFQDSHEGLZNVLUFJTKDZIFAIZGSYPNUASAKCCGBNWTHCMSYHKI");

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
    msg.setTimeStamp(0.5349954572218333);
    msg.setSource(47756U);
    msg.setSourceEntity(151U);
    msg.setDestination(651U);
    msg.setDestinationEntity(223U);
    msg.x = 0.6908493294288431;
    msg.y = 0.6513215814763192;
    msg.z = 0.21634412578363027;
    msg.t = 0.8589035349902353;

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
    msg.setTimeStamp(0.23205350101828048);
    msg.setSource(46443U);
    msg.setSourceEntity(105U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(186U);
    msg.x = 0.9171150784723173;
    msg.y = 0.21917170617163284;
    msg.z = 0.3788117278636257;
    msg.t = 0.9983928496260639;

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
    msg.setTimeStamp(0.10561884729554594);
    msg.setSource(49939U);
    msg.setSourceEntity(244U);
    msg.setDestination(9165U);
    msg.setDestinationEntity(214U);
    msg.x = 0.3462651079986586;
    msg.y = 0.06802288879769292;
    msg.z = 0.028671376253482928;
    msg.t = 0.45569638788016475;

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
    msg.setTimeStamp(0.8616769373605904);
    msg.setSource(9954U);
    msg.setSourceEntity(138U);
    msg.setDestination(12708U);
    msg.setDestinationEntity(20U);
    msg.timeout = 30943U;
    msg.name.assign("EZKLCMCLLZNKOJYQASJNIUDLQDHMZPWPXDJKTPXQBSURTRBVKGTMIYWFIDIJOUYUOFHXZMTBMBKSLZUCSTHFFRJHURJRDZQQYCTXNROGXCXDXPQZIFLUGUPN");
    msg.custom.assign("LZQEFNDEKOMFKNXZIWJXMUQSVFZBFKNMYYZELJJGWFDHAXKAULPJSYJUDELWGMCWOAYAAHZTALQHQUDGPTFOIIKHTUSDVNUQFPFUCPDVCXRZCLEBQAQIPWGRDCSRILYKRVVBPWZPMDYICAWPMBEXJGSV");

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
    msg.setTimeStamp(0.2572565712439552);
    msg.setSource(29477U);
    msg.setSourceEntity(58U);
    msg.setDestination(39730U);
    msg.setDestinationEntity(102U);
    msg.timeout = 44215U;
    msg.name.assign("TZOFLQNODBWDJODNJQPYRZZGSZCMHHAEOJUVVATHQXJCSPZXODHXNMCPGQVOJHUKSDUBRJNSIHGILRMGYRPKBKMSTWTEGKNDJXVAUBXSEEFDJSAIKACEPPLRGLBNAWAOUMQIHVTFGRFWPBKIMSYZXIFCNESYTRQQPIFGMXLUZDTUTCUZCDLLBKYOUTQEVWFTZ");
    msg.custom.assign("YHDZCZBQMPJGNUIPVLR");

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
    msg.setTimeStamp(0.7824644300360339);
    msg.setSource(29266U);
    msg.setSourceEntity(140U);
    msg.setDestination(26503U);
    msg.setDestinationEntity(174U);
    msg.timeout = 47674U;
    msg.name.assign("IEIRFYNYZEWMCPYDIOOZKMMHWCPEUCQOBHRNILCLYXDPLXYUEZBZBTFFXBVZXANLOJYXMNFGTNYE");
    msg.custom.assign("ZAGYCODYXMLRT");

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
    msg.setTimeStamp(0.8706561234331481);
    msg.setSource(25772U);
    msg.setSourceEntity(222U);
    msg.setDestination(32717U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.4155049878975081;
    msg.lon = 0.24485857887099705;
    msg.z = 0.93721363546048;
    msg.z_units = 156U;
    msg.speed = 0.7308286529684865;
    msg.speed_units = 92U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65472U;
    tmp_msg_0.off_x = 0.0959889283279145;
    tmp_msg_0.off_y = 0.7006285067514253;
    tmp_msg_0.off_z = 0.7608698360193518;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.3184035458689639;
    msg.custom.assign("PVRXZTOJGWOIHYXESCOUPUGOBYEPTHGAMFZVJXDQIKLVTZUADBHEDPNOHOWMEGONNCTBRPMRPRQWRIJRDELIBBLBFOQWVJFAILQHYQMYCMSYPJDSDNJAIRRPZHXHXKKCNFYKBUXLTFYLKQKQKONPUSMXTIBSUGAESV");

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
    msg.setTimeStamp(0.6116124213735835);
    msg.setSource(39087U);
    msg.setSourceEntity(249U);
    msg.setDestination(24724U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.7615318293558383;
    msg.lon = 0.872584728457339;
    msg.z = 0.5027790711444787;
    msg.z_units = 130U;
    msg.speed = 0.03345407385178689;
    msg.speed_units = 9U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5363669614711012;
    tmp_msg_0.y = 0.5049196303446579;
    tmp_msg_0.z = 0.740797159312524;
    tmp_msg_0.t = 0.5149912220416993;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7088369932736928;
    msg.custom.assign("JFSNGIEZDPRJDFLSAWKEIKRCYPVZMXZMQHBDXJITIXXETPFGWSAPVHTHXTHKVABTCQPHGTFMLEENWCYUYVPRPQSMSCQLEFBYRWULAWPQAWKMKICBWCYVTAIDKJOHZINSRVNKXCQDHSQRRZUMOSJEAHLBGJJINNNTDONCQASJODFUOOPUVXRFARBYRTBLEQGVFSKWOMPKAYQ");

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
    msg.setTimeStamp(0.032225890633409415);
    msg.setSource(1668U);
    msg.setSourceEntity(250U);
    msg.setDestination(33675U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.21063107841375117;
    msg.lon = 0.5066293198073092;
    msg.z = 0.9264990103257171;
    msg.z_units = 52U;
    msg.speed = 0.10256325904854446;
    msg.speed_units = 209U;
    msg.start_time = 0.783388308147988;
    msg.custom.assign("NERAUURITUEWGTECOJJFJUKPLTZGDOGJKCVWXZWMKILMSWPGANJVDZVBCQUFFSFOGPBFHTWWTNSELGOAEVWN");

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
    msg.setTimeStamp(0.8834211933634771);
    msg.setSource(42305U);
    msg.setSourceEntity(101U);
    msg.setDestination(44405U);
    msg.setDestinationEntity(224U);
    msg.vid = 10101U;
    msg.off_x = 0.661716905550881;
    msg.off_y = 0.7191591677535665;
    msg.off_z = 0.7910940627199131;

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
    msg.setTimeStamp(0.7807125054830858);
    msg.setSource(23050U);
    msg.setSourceEntity(144U);
    msg.setDestination(44990U);
    msg.setDestinationEntity(66U);
    msg.vid = 27274U;
    msg.off_x = 0.5635820851403438;
    msg.off_y = 0.6503082602376093;
    msg.off_z = 0.9366044007323574;

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
    msg.setTimeStamp(0.5203674485192046);
    msg.setSource(26965U);
    msg.setSourceEntity(165U);
    msg.setDestination(2577U);
    msg.setDestinationEntity(68U);
    msg.vid = 31659U;
    msg.off_x = 0.9211069575894063;
    msg.off_y = 0.12148309102144716;
    msg.off_z = 0.6454364141923624;

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
    msg.setTimeStamp(0.11479103503587373);
    msg.setSource(47673U);
    msg.setSourceEntity(67U);
    msg.setDestination(52373U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.5338595738813247);
    msg.setSource(56141U);
    msg.setSourceEntity(182U);
    msg.setDestination(63450U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.07619412451301855);
    msg.setSource(49135U);
    msg.setSourceEntity(229U);
    msg.setDestination(36306U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.5557066567289269);
    msg.setSource(35243U);
    msg.setSourceEntity(240U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(183U);
    msg.mid = 12737U;

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
    msg.setTimeStamp(0.9731739738914019);
    msg.setSource(54002U);
    msg.setSourceEntity(198U);
    msg.setDestination(2381U);
    msg.setDestinationEntity(135U);
    msg.mid = 63541U;

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
    msg.setTimeStamp(0.38944987624359706);
    msg.setSource(54140U);
    msg.setSourceEntity(214U);
    msg.setDestination(21148U);
    msg.setDestinationEntity(189U);
    msg.mid = 62128U;

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
    msg.setTimeStamp(0.12055990119311355);
    msg.setSource(49929U);
    msg.setSourceEntity(231U);
    msg.setDestination(63258U);
    msg.setDestinationEntity(140U);
    msg.state = 133U;
    msg.eta = 53424U;
    msg.info.assign("AXYPMAEGLDHGVDMDLFDSQKJTWQFWLUOPNNGJRAONUVDPLIRLMEYZCXCLFKYQKIGIAROSFXRCJKICDWCEKHCZHEXRBXZUBIJHMYIYQTOSPMIFMHSKYAMBGSBWJJGVUCOKWQUMTZURZHTRVMULXBXAW");

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
    msg.setTimeStamp(0.5182527757408887);
    msg.setSource(46417U);
    msg.setSourceEntity(178U);
    msg.setDestination(14475U);
    msg.setDestinationEntity(48U);
    msg.state = 125U;
    msg.eta = 32979U;
    msg.info.assign("EWCPFPKSKDOTPSODMPHITW");

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
    msg.setTimeStamp(0.9042389850508255);
    msg.setSource(22002U);
    msg.setSourceEntity(9U);
    msg.setDestination(43362U);
    msg.setDestinationEntity(183U);
    msg.state = 49U;
    msg.eta = 5364U;
    msg.info.assign("GDCAMEEZFVKQIDONHAWAICXGMLWIKIWZDYSZXKBRYKQRCTDPNXWFKSWVXLZAAIYCQCTWNUJLJOOMHOZRXPPFXVTRQLODXOEGJQJFMGNAZIXSVBFLLUQUZRWAKPYFSLZBBBMGTLKVPYRTJJMNVRTBGNGUBDIKUWSFRUICHQUSXZEEEPEUCLIMPRYSTBUCEZJQWOB");

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
    msg.setTimeStamp(0.3687300562636183);
    msg.setSource(24523U);
    msg.setSourceEntity(30U);
    msg.setDestination(6908U);
    msg.setDestinationEntity(220U);
    msg.system = 25248U;
    msg.duration = 15264U;
    msg.speed = 0.9043785318889018;
    msg.speed_units = 50U;
    msg.x = 0.010703929647578825;
    msg.y = 0.8143426278876759;
    msg.z = 0.41797251843402905;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.9521797088074447);
    msg.setSource(11600U);
    msg.setSourceEntity(86U);
    msg.setDestination(61900U);
    msg.setDestinationEntity(13U);
    msg.system = 61054U;
    msg.duration = 19910U;
    msg.speed = 0.26787101628609544;
    msg.speed_units = 227U;
    msg.x = 0.06122707531073446;
    msg.y = 0.8941433446350208;
    msg.z = 0.19911904066761665;
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
    msg.setTimeStamp(0.7613723897853781);
    msg.setSource(15916U);
    msg.setSourceEntity(219U);
    msg.setDestination(52237U);
    msg.setDestinationEntity(24U);
    msg.system = 8967U;
    msg.duration = 54315U;
    msg.speed = 0.30899774237347566;
    msg.speed_units = 91U;
    msg.x = 0.5848774061910358;
    msg.y = 0.07082454752345846;
    msg.z = 0.9393942436342485;
    msg.z_units = 125U;

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
    msg.setTimeStamp(0.9836519227777435);
    msg.setSource(18157U);
    msg.setSourceEntity(223U);
    msg.setDestination(23085U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.35096565353947673;
    msg.lon = 0.4963065525420418;
    msg.speed = 0.25812791497119036;
    msg.speed_units = 215U;
    msg.duration = 30128U;
    msg.sys_a = 57100U;
    msg.sys_b = 21568U;
    msg.move_threshold = 0.43935795458491955;

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
    msg.setTimeStamp(0.2226111699654868);
    msg.setSource(39458U);
    msg.setSourceEntity(205U);
    msg.setDestination(5785U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.6815464827905926;
    msg.lon = 0.6543565019448344;
    msg.speed = 0.5146166275709998;
    msg.speed_units = 128U;
    msg.duration = 28762U;
    msg.sys_a = 65455U;
    msg.sys_b = 28779U;
    msg.move_threshold = 0.38401079828928253;

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
    msg.setTimeStamp(0.7767577527695725);
    msg.setSource(8298U);
    msg.setSourceEntity(196U);
    msg.setDestination(13714U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.363938359718433;
    msg.lon = 0.3764140865446699;
    msg.speed = 0.14292355561239245;
    msg.speed_units = 193U;
    msg.duration = 6536U;
    msg.sys_a = 28083U;
    msg.sys_b = 52075U;
    msg.move_threshold = 0.29593286797482077;

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
    msg.setTimeStamp(0.5429344186024146);
    msg.setSource(39246U);
    msg.setSourceEntity(229U);
    msg.setDestination(62050U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.8012776239755736;
    msg.lon = 0.6200010882718757;
    msg.z = 0.6594687173587493;
    msg.z_units = 228U;
    msg.speed = 0.2669829600591388;
    msg.speed_units = 65U;
    msg.custom.assign("ELSDTPUBZOCNJOWXYCQKVHANPRKVXEEHWDSNCWYOWZTTBHLIGNMDUFADTOIYANEQLYGRAHBRBYVTNJBQXFSRPIAJUQXFVGMXZMVBGHGZGLYDVRZSAZFLIAODPMRIHPBZUXZYWAEUSNXDKJGJMEKDIWVRMZCCJWPKXWJHUCCQHGYQSJPDSQNCPFILTNDUKLMV");

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
    msg.setTimeStamp(0.4838539745705175);
    msg.setSource(52997U);
    msg.setSourceEntity(160U);
    msg.setDestination(28851U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.3614536223546331;
    msg.lon = 0.02403002014511968;
    msg.z = 0.3755459017280577;
    msg.z_units = 2U;
    msg.speed = 0.9655671408347373;
    msg.speed_units = 222U;
    msg.custom.assign("YFYCEKBIRNDFHBWITSNRFYKJWZJGMBZVSSIHNUKOZCCFYPVRWMGUATF");

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
    msg.setTimeStamp(0.841511298372123);
    msg.setSource(3716U);
    msg.setSourceEntity(81U);
    msg.setDestination(41517U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.5153368121485079;
    msg.lon = 0.26974111702369585;
    msg.z = 0.6539260607337135;
    msg.z_units = 67U;
    msg.speed = 0.031551960753960384;
    msg.speed_units = 187U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7249525782650681;
    tmp_msg_0.lon = 0.4016569731547436;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XKCQPYXICOJENLBGVU");

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
    msg.setTimeStamp(0.020932685773797588);
    msg.setSource(12837U);
    msg.setSourceEntity(72U);
    msg.setDestination(64723U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.28129799127268607;
    msg.lon = 0.17531604699982506;

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
    msg.setTimeStamp(0.8130399671832648);
    msg.setSource(20358U);
    msg.setSourceEntity(9U);
    msg.setDestination(56179U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.1790275754094891;
    msg.lon = 0.7684608795684328;

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
    msg.setTimeStamp(0.7860772172882866);
    msg.setSource(205U);
    msg.setSourceEntity(92U);
    msg.setDestination(35179U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.814745072112978;
    msg.lon = 0.08073366991851127;

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
    msg.setTimeStamp(0.14308819873198064);
    msg.setSource(52615U);
    msg.setSourceEntity(184U);
    msg.setDestination(16478U);
    msg.setDestinationEntity(149U);
    msg.timeout = 33509U;
    msg.lat = 0.8413527219988348;
    msg.lon = 0.8193316064960257;
    msg.z = 0.5442461383669368;
    msg.z_units = 49U;
    msg.pitch = 0.8054881912828751;
    msg.amplitude = 0.46895683292799484;
    msg.duration = 27691U;
    msg.speed = 0.8105399077193977;
    msg.speed_units = 73U;
    msg.radius = 0.5492777160991549;
    msg.direction = 253U;
    msg.custom.assign("YINYXPLDFIMKATBHCLOOEAWWBJPVLTXFBPLNUQURGQINWWJYEZCPHMJWIFJSGSVBYKEPDGHVGMGUBMSCTKWCBXNKHDXMVQKDRXCVVCEUPIKQVOHDROOQDADRPGUZHQXSDYXKYFOOJAZBMZNYWPVEHTPCWUMAVCXTRISWINJTOSBUSCXAAURKEQJYERTGZEUAKGIZESOUKSFHPRNFHZMWYLLNFOTJJTMHEGNAQILYCLSFBVLDXJQFA");

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
    msg.setTimeStamp(0.4655111413958871);
    msg.setSource(65179U);
    msg.setSourceEntity(122U);
    msg.setDestination(4779U);
    msg.setDestinationEntity(27U);
    msg.timeout = 55257U;
    msg.lat = 0.1880698704240127;
    msg.lon = 0.863781611303002;
    msg.z = 0.991785743400357;
    msg.z_units = 232U;
    msg.pitch = 0.23423547857306648;
    msg.amplitude = 0.6960921560299175;
    msg.duration = 46714U;
    msg.speed = 0.42880511400600996;
    msg.speed_units = 152U;
    msg.radius = 0.768869512275634;
    msg.direction = 191U;
    msg.custom.assign("TLDPLTGZOAWMIYDBZXGWLXWOCDRVMHSUCEPNNFYPAQFTMFAWXPXYDCQDDUEBWNLGSZVAJPTIJEOXQVVVXNPYUKJEHYETAFGHKBRGZZAMYUBJKXTLRCKOCFIQHONMXAGIWTUPGNDEJSRUJUSZLJIEZLLGFROBQBIKHDMQMWQYPFICSUCBQZMGACAFHSHMWKZWJVRE");

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
    msg.setTimeStamp(0.1139725319353877);
    msg.setSource(58205U);
    msg.setSourceEntity(182U);
    msg.setDestination(19133U);
    msg.setDestinationEntity(184U);
    msg.timeout = 36250U;
    msg.lat = 0.5623220917671783;
    msg.lon = 0.2900507911286013;
    msg.z = 0.9076215268339813;
    msg.z_units = 170U;
    msg.pitch = 0.7601977481412429;
    msg.amplitude = 0.8052517143453061;
    msg.duration = 8495U;
    msg.speed = 0.07096239358593481;
    msg.speed_units = 226U;
    msg.radius = 0.34063660877732216;
    msg.direction = 234U;
    msg.custom.assign("EWIRWTWGBCBBQQEFXVWLRUMTSZMADPBZUVLVEYUUSYBEIFDEMKNSYFZSFWKRSCAIHYXNAOBLQGCDSTPHFDKPADUXESCIAZZMMQEKZRQRYRNYLHMZCOIYGTOFJHITGZODNJVYALPCQNPXIHIGBLPHJUDQOSNTGGMAOCAWK");

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
    msg.setTimeStamp(0.9999524081253253);
    msg.setSource(44450U);
    msg.setSourceEntity(122U);
    msg.setDestination(1144U);
    msg.setDestinationEntity(229U);
    msg.control_src = 54470U;
    msg.control_ent = 87U;
    msg.timeout = 0.876311952162121;
    msg.loiter_radius = 0.6475030539473403;
    msg.altitude_interval = 0.9312946061557216;

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
    msg.setTimeStamp(0.7224932261822933);
    msg.setSource(8548U);
    msg.setSourceEntity(140U);
    msg.setDestination(37170U);
    msg.setDestinationEntity(226U);
    msg.control_src = 27407U;
    msg.control_ent = 78U;
    msg.timeout = 0.596072496857601;
    msg.loiter_radius = 0.6246756999859734;
    msg.altitude_interval = 0.7208419196085382;

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
    msg.setTimeStamp(0.6671889903454303);
    msg.setSource(52973U);
    msg.setSourceEntity(101U);
    msg.setDestination(13879U);
    msg.setDestinationEntity(105U);
    msg.control_src = 59332U;
    msg.control_ent = 231U;
    msg.timeout = 0.25970904953693463;
    msg.loiter_radius = 0.3939432160123286;
    msg.altitude_interval = 0.2651911730237174;

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
    msg.setTimeStamp(0.7402932856264083);
    msg.setSource(49105U);
    msg.setSourceEntity(175U);
    msg.setDestination(57710U);
    msg.setDestinationEntity(196U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9721437931602526;
    tmp_msg_0.speed_units = 160U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.08104831311079719;
    tmp_msg_1.z_units = 168U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.584204152782246;
    msg.lon = 0.5047702655374939;

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
    msg.setTimeStamp(0.49957997381590613);
    msg.setSource(56692U);
    msg.setSourceEntity(146U);
    msg.setDestination(13041U);
    msg.setDestinationEntity(136U);
    msg.flags = 56U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.036747734351370576;
    tmp_msg_0.speed_units = 94U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2161997211444897;
    tmp_msg_1.z_units = 242U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6816384295162067;
    msg.lon = 0.8548685179294598;

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
    msg.setTimeStamp(0.9845986070059435);
    msg.setSource(33772U);
    msg.setSourceEntity(131U);
    msg.setDestination(65125U);
    msg.setDestinationEntity(108U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.22460882812543748;
    tmp_msg_0.speed_units = 188U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0027391131302081373;
    tmp_msg_1.z_units = 250U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5516972618046355;
    msg.lon = 0.9534388110588076;

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
    msg.setTimeStamp(0.04104615662433331);
    msg.setSource(37840U);
    msg.setSourceEntity(174U);
    msg.setDestination(49702U);
    msg.setDestinationEntity(127U);
    msg.control_src = 30276U;
    msg.control_ent = 205U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 145U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.890011869625776;
    tmp_tmp_msg_0_0.speed_units = 88U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.04554567275906651;
    tmp_tmp_msg_0_1.z_units = 115U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.044299167316319;
    tmp_msg_0.lon = 0.9246526283299876;
    msg.reference.set(tmp_msg_0);
    msg.state = 54U;
    msg.proximity = 164U;

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
    msg.setTimeStamp(0.3369609120083904);
    msg.setSource(24260U);
    msg.setSourceEntity(14U);
    msg.setDestination(23237U);
    msg.setDestinationEntity(105U);
    msg.control_src = 35118U;
    msg.control_ent = 27U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 105U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8985993361986706;
    tmp_tmp_msg_0_0.speed_units = 243U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.14521826889628864;
    tmp_tmp_msg_0_1.z_units = 240U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8216177356584315;
    tmp_msg_0.lon = 0.051092261056145394;
    msg.reference.set(tmp_msg_0);
    msg.state = 163U;
    msg.proximity = 161U;

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
    msg.setTimeStamp(0.7400307662007263);
    msg.setSource(22274U);
    msg.setSourceEntity(191U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(4U);
    msg.control_src = 18114U;
    msg.control_ent = 57U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 71U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.47695108019140553;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3309139093935235;
    tmp_tmp_msg_0_1.z_units = 98U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.43210322471077545;
    tmp_msg_0.lon = 0.15115799542145747;
    msg.reference.set(tmp_msg_0);
    msg.state = 189U;
    msg.proximity = 160U;

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
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.06815322882377695);
    msg.setSource(50762U);
    msg.setSourceEntity(11U);
    msg.setDestination(16556U);
    msg.setDestinationEntity(165U);
    msg.control_src = 2468U;
    msg.control_ent = 47U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 214U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4771476487416544;
    tmp_tmp_msg_0_0.speed_units = 93U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4418624176472268;
    tmp_tmp_msg_0_1.z_units = 167U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.17628824549347855;
    tmp_msg_0.lon = 0.20590527218974686;
    msg.reference.set(tmp_msg_0);
    msg.state = 3U;
    msg.proximity = 101U;

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
    msg.setTimeStamp(0.8789648400190129);
    msg.setSource(26075U);
    msg.setSourceEntity(185U);
    msg.setDestination(10525U);
    msg.setDestinationEntity(88U);
    msg.control_src = 19004U;
    msg.control_ent = 228U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 109U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.09254722894691214;
    tmp_tmp_msg_0_0.speed_units = 135U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9771031646470995;
    tmp_tmp_msg_0_1.z_units = 149U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.03520570012709734;
    tmp_msg_0.lon = 0.8071918720023473;
    msg.reference.set(tmp_msg_0);
    msg.state = 30U;
    msg.proximity = 128U;

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
    msg.setTimeStamp(0.9032896962989545);
    msg.setSource(43532U);
    msg.setSourceEntity(74U);
    msg.setDestination(36654U);
    msg.setDestinationEntity(19U);
    msg.control_src = 52501U;
    msg.control_ent = 114U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 32U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10882319160315779;
    tmp_tmp_msg_0_0.speed_units = 188U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5885051126897354;
    tmp_tmp_msg_0_1.z_units = 59U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8791240040137509;
    tmp_msg_0.lon = 0.15464197514850087;
    msg.reference.set(tmp_msg_0);
    msg.state = 34U;
    msg.proximity = 130U;

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
    msg.setTimeStamp(0.9115066634307732);
    msg.setSource(28594U);
    msg.setSourceEntity(27U);
    msg.setDestination(59396U);
    msg.setDestinationEntity(102U);
    msg.op_mode = 189U;
    msg.error_count = 67U;
    msg.error_ents.assign("UTRXFQZWZIDHNKGVMBQFMBXTLAQTDOPODNSMOFT");
    msg.maneuver_type = 59834U;
    msg.maneuver_stime = 0.5452131107634102;
    msg.maneuver_eta = 38700U;
    msg.control_loops = 967998818U;
    msg.flags = 133U;
    msg.last_error.assign("LSNAMLGVIYJOWYIHOSDWMSYPGLPZJDBLRXTQYBCERVKKHYSQDZZFQMRFNJRKAOCLMFGUMIBJCLQROTEHNHRTBUDYUBFLPNUNYGLTVIYZCZMUSPLIEFTSDRQVCWBKMNHEXJHFGJQUJKOZFVVWCZNNHWQVPXQAHWYGBAHKGODMEEDICOBSFDSFEOTPIZKVKCYWAGJGJEWCRASINTCKXMEUXHUXXNBELIOIRWR");
    msg.last_error_time = 0.759469709100946;

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
    msg.setTimeStamp(0.38215643659842136);
    msg.setSource(3719U);
    msg.setSourceEntity(148U);
    msg.setDestination(56617U);
    msg.setDestinationEntity(137U);
    msg.op_mode = 87U;
    msg.error_count = 248U;
    msg.error_ents.assign("NUPIRQBHWMELUWFMJYVOALRFBNNDORCVYUSBGELEOWCCTDSTUWFGZIFAHHARGFKYMDHOXUSLRQHRHJJOTGQRLVNEJOWIPPDJEXAATVCZBMGOSDILITZDXZYGBXPJUPQEIOTSZCXIEUEFDBQXTHSKIJTKBX");
    msg.maneuver_type = 59301U;
    msg.maneuver_stime = 0.9813457960389419;
    msg.maneuver_eta = 59660U;
    msg.control_loops = 2553684737U;
    msg.flags = 188U;
    msg.last_error.assign("RJJGQNVUICFWDWFRRSEVFIPLOTUWYAXWSNOIIMQKVSWHVESZXXPHMXVAXMAYXOYHJXYEKCHVLCZBTWYMWUNBWGBBPXQGNZL");
    msg.last_error_time = 0.39673588166801377;

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
    msg.setTimeStamp(0.1482132009429552);
    msg.setSource(48172U);
    msg.setSourceEntity(196U);
    msg.setDestination(56735U);
    msg.setDestinationEntity(106U);
    msg.op_mode = 189U;
    msg.error_count = 141U;
    msg.error_ents.assign("OWWNXJSQDAZAXXHVFQEDRKAESJEXTFJUNGHYDASPYUVFGDYMARMJWLHMLXQZIVYCFMNRQEZGJCEWCOXBHZMZZWRCPKPKEJWSRDHJJSSBAYVPZGNCERTUKGKOGHUAMTMUUIXN");
    msg.maneuver_type = 2327U;
    msg.maneuver_stime = 0.6883367370262959;
    msg.maneuver_eta = 60174U;
    msg.control_loops = 1691450292U;
    msg.flags = 231U;
    msg.last_error.assign("RBAQJGYPFVMOHPSIOZKDBIZPHSRDTURGHBLTYNLIULKSWIVQHCCAUSKEDEHOBFVFGTNFGYEWATEDEISPOCEDNJVJICVVNIAZDQTVMPLMNAYLTUCWXRZOIFJAJODWDSIKKRAKMMXNNRWWFBXMQDBAIYUQPZOLUXCVNHPRPMXCNWOZYLOUBJSXGDFZEXYRTZXCKMX");
    msg.last_error_time = 0.6970252320435038;

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
    msg.setTimeStamp(0.6977297823669392);
    msg.setSource(37341U);
    msg.setSourceEntity(134U);
    msg.setDestination(42444U);
    msg.setDestinationEntity(239U);
    msg.type = 51U;
    msg.request_id = 49833U;
    msg.command = 18U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 32778U;
    tmp_msg_0.lat = 0.41096464118633236;
    tmp_msg_0.lon = 0.8280839401234282;
    tmp_msg_0.z = 0.6495624522838035;
    tmp_msg_0.z_units = 39U;
    tmp_msg_0.amplitude = 0.3039167883069376;
    tmp_msg_0.pitch = 0.4707328418115213;
    tmp_msg_0.speed = 0.5785016645064303;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.custom.assign("RITGSXADJOJDFMMLRQDCBMTGNWFNRREPGDJEYPBZKEYKDDCFKXMCQZKUFJGVFTOSGGVMKH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50587U;
    msg.info.assign("SKEDYGRGCOHDJXHKDBTQHAEJTLKMDMDYXKAHVQQPWDOFRHXDVIKRBCSJUVAXFOCECUZUQGUPRSPZNGLOWENTOITKIVHMIVACNJZIUCXPBCPHSLFMGZUWSXTDDYWQQGXEELZFOLBWJNYMXRGWAXMYKRYHNMUJKSHGIJJGAMYVRLRTYEBDYTNVANLZ");

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
    msg.setTimeStamp(0.18305027873127955);
    msg.setSource(44259U);
    msg.setSourceEntity(253U);
    msg.setDestination(13852U);
    msg.setDestinationEntity(123U);
    msg.type = 147U;
    msg.request_id = 23773U;
    msg.command = 224U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 8085U;
    tmp_msg_0.lat = 0.3387059147922531;
    tmp_msg_0.lon = 0.6926487164000181;
    tmp_msg_0.z = 0.7715944742652515;
    tmp_msg_0.z_units = 67U;
    tmp_msg_0.speed = 0.6839575181071519;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.bearing = 0.6213358207760036;
    tmp_msg_0.cross_angle = 0.6505702847696846;
    tmp_msg_0.width = 0.31385789468468694;
    tmp_msg_0.length = 0.4418104313559552;
    tmp_msg_0.hstep = 0.6416789151122579;
    tmp_msg_0.coff = 30U;
    tmp_msg_0.alternation = 156U;
    tmp_msg_0.flags = 63U;
    tmp_msg_0.custom.assign("RFQZDGYFCVWRXGUIECUXAAQDYCOMSVGFHKIVMTCPPCBIIMKEFTTHSLHTGENFNZKDDLKNSJGSJPQKRDKCARWGTOVFAPNXSUOQWBAHGNIHHFNRZAWNVKMAKIQDOPKYKWZRBRXWYVYJNAPBBOHVEMSYWLPSGLJLZZHUJXRCETSQWPZXHYIXMCBQUADDLLERSZURGUOJTATEBQIFBNMJXTJGVLMJPOIDODUC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60801U;
    msg.info.assign("NIWRGDAXYFYNCBKUDKIXQVEACJQRKJHZAPSQAIUUIYPPLBKQTGTWUCVRTYTCLRGKBIMSRIBYPSVPFOENRIZPZPOAWDLQEDEERNJSHVFAMJTYHOCHHSTQDEBQAXHSFYLEKJCSFNOJGGXZDBSMWXBCTWFOWFNCMYLGWMXRKMOHRPXTWVQZFOVUWEVZKUXDUFDNDXVRIBMNKZUUBOAUHBJKGYVTYJSEVGJIXDNSLMZGQZAHHOZNEQPLMMFLPJ");

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
    msg.setTimeStamp(0.30311519870388126);
    msg.setSource(30414U);
    msg.setSourceEntity(182U);
    msg.setDestination(16116U);
    msg.setDestinationEntity(174U);
    msg.type = 217U;
    msg.request_id = 56838U;
    msg.command = 42U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.794177698622764;
    tmp_tmp_msg_0_0.z_units = 224U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 38339U;
    tmp_msg_0.custom.assign("PDDCBPFNMEJUVGTBBTSYOVAHCQXMTYWTASNILNMDLODJSDBQBPLLUGSQJWMXLNPNIFLFWDUFAXZFFPNWOPGSPAINJNJTVPTXYZKPXXOREHSABWLKESHKALWGYJVCKIZJUJZUSCTFSUGEIIOKSKNYBY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21188U;
    msg.info.assign("CSJVRVEXKXUDVOMKLJOMSZYTGYZHPHVNSELTUNUIRCDKTMNNXMSRZHFRKIVQGQSQUDHDBSFCRGYWCDEDSCLFSAETNAEGXYPBKVWJOPBPKKPIJREYVINAOZQFTQILGNJQATFJJASZEAVQLMOHBBTKAWNJVLYLBMMWAWBGGHLURSWBFYXQILYUGICNAHYHGVTHCEXWJPKUXU");

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
    msg.setTimeStamp(0.9498007908061624);
    msg.setSource(38521U);
    msg.setSourceEntity(127U);
    msg.setDestination(3304U);
    msg.setDestinationEntity(50U);
    msg.command = 182U;
    msg.entities.assign("PVKOJVBMWQARKTFSJE");

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
    msg.setTimeStamp(0.15312195956750896);
    msg.setSource(13183U);
    msg.setSourceEntity(229U);
    msg.setDestination(64372U);
    msg.setDestinationEntity(46U);
    msg.command = 80U;
    msg.entities.assign("PTRTNRZOGYFMWRBJPTTDSOUKXRVQEDDPIVBPOKLWNQMXGWVMOJKNGSARTIIABYXXFLZQTFGBFSJWALOFGMAEUJZIDJWCOIVHQUKAEEZXFCCQGICNYZPUGYVWHRNDWAEJSQUSPYELVNOZAQLVHFGJEMCTRBJPEMBAPBLQKDJDOWUYMMIHZCYRFGMXVCYKHWBFLTQHZXDWLNHCRXB");

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
    msg.setTimeStamp(0.5855568341977825);
    msg.setSource(27659U);
    msg.setSourceEntity(152U);
    msg.setDestination(60648U);
    msg.setDestinationEntity(232U);
    msg.command = 223U;
    msg.entities.assign("DBGGIZRBAWSXEBGKQDZAHSVBEHHTNMPCAFNNEJGORKMVZQCLMUKPAOMIYJPORHGNNEPZAIVYFKVSVWIILMGMLHBEVRXRDZUCEYJKN");

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
    msg.setTimeStamp(0.7540820980747914);
    msg.setSource(31929U);
    msg.setSourceEntity(212U);
    msg.setDestination(57061U);
    msg.setDestinationEntity(221U);
    msg.mcount = 157U;
    msg.mnames.assign("GPEMDWUHPWSXTIXGKHOXEYURCAYAQPJDBEZJFNYQXRTEBUVWQCDYCMVNDIRVWSEJLPAHSQIAXZEIYSQFVLJRSAFFGZNWTMFIKDGFYIHWOKICBBHINLORYVKQRLEODKMFZTLTHTDFCKNNNZBYB");
    msg.ecount = 208U;
    msg.enames.assign("GXVXHVNMNSAOGQEPYAPQFOQGJVQYJTJIGSWVGELFBZYETWC");
    msg.ccount = 231U;
    msg.cnames.assign("EXAEKLNYWSGVVQTUHQUZNMKYMAHOATWLPTBBSRLGYTCYENYCYIYTWKESBZSGLHVIDIPHKZMAMFBXDKCPAJPJNBMDOZJZIWDVZJGHDUFEJQDEHGGKICQGNOKCBZGXSHXMXLMBPFJVDOFRCOFQWAOWSRBPZUOCOFXTYBMJNJCIHGRFIJTPRLLEBFGVXKWTSRPTVYU");
    msg.last_error.assign("ACXYAWGKXZDVSYSRHUIFPDPJIMLLEFXALCNMT");
    msg.last_error_time = 0.5077605252646534;

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
    msg.setTimeStamp(0.08444647462674404);
    msg.setSource(16242U);
    msg.setSourceEntity(222U);
    msg.setDestination(41621U);
    msg.setDestinationEntity(152U);
    msg.mcount = 233U;
    msg.mnames.assign("VHDSCITWTXAHVTUFZLNNJPAZJKGAOZPLFTFVIBIJOXLMHTKTOGFKSRWJJBQTXGHTGEDPOCHPXLJQVFXTUDDVKMUFGROAUUDRJHBVPCYJASEERKGFOZQXPYOECYWEKUCBILRXFZWQSPQCNYYRGNQKUUENQSPIMISCABLSZFMWMY");
    msg.ecount = 214U;
    msg.enames.assign("LPERZKHFOITJELAFPOEXAEDDMTCBOJWEJVVNXOVPUNNNUJNJHLRAIQYYAGIZZVTQDHRUAOBSLXUDTMGHDKSWCXCKBJBMWZDB");
    msg.ccount = 67U;
    msg.cnames.assign("WEDHWSPBRQIZRAAWWHMRAKUCJZGTVKUCTBRNKOUQPGCOLNHGWDBDUNPOICLPVIXEEHYYUXRZBOCYMDCXERLFH");
    msg.last_error.assign("FLQEXEASOEOPQMQYHTAHHTVFBWLIHHAZSOGLVBASCZCTORFJEJPRREJZODKXTOXYVUKRGQGNKIKEEBWJYSXOGIJTJVVWILBCHCVDYMWDRMTKOLKQLNUDCPWJBNRIBCSEDORBVVJNGHZQVXALTCBMYSPLTZJPBYFWDGAMXQWIURZDYQUFZESUVNSLICPFPXYINGZZG");
    msg.last_error_time = 0.8356603510905634;

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
    msg.setTimeStamp(0.11723805659234665);
    msg.setSource(21161U);
    msg.setSourceEntity(28U);
    msg.setDestination(24410U);
    msg.setDestinationEntity(223U);
    msg.mcount = 180U;
    msg.mnames.assign("VMJILXBHXIPSWDTKDNYCTUDFUVHTGSZEXWWMPHVHYKOXECWFOUEYQMRQFDRGVHIBYKBYUOXZWWIZDMFDETLVUSJQBJFSVETOXPMSBCFVKNUQLFPKIQHDYUZEJGAPGSROONTPAZBXCRMKMIYAVGCRGPZQJEYLCNUJTJWNZVWOARAYENTTQSJRSYOHTNPEHQFCIMABPXDUAOMKF");
    msg.ecount = 142U;
    msg.enames.assign("RFHLAYVVNXCMPCDIAC");
    msg.ccount = 82U;
    msg.cnames.assign("SFUJBFMLWEGVDKYYBEPEVLUZXJWQYRHFNTHFDZYTIHBECYYLHKYQCJZFOAWEEEKJXXUAZXRBEOZDOUAJXIBVRSZLDYUJWRBTCEZKVHPLIPCMTPWNWLFDSCDSCZXKTRKLGADMQNISTKPRIGIRGNMHFIVBUOJQFTALMTWCQWATGHYUPGXXNCDVGACCVZQQQGNBULVOKMXM");
    msg.last_error.assign("WARFGGHXJRGQVOKAMVUBCCHQDEYATKCKZHUIFZBIYPCMTUJIQYSIIMVLANBOFGLVYUKDEBAXLQRQFJGVJKKQOTOAWPJXHNGWORULSEOHEMXTQNLMTEPSDWVXCAKLJSERJYBCOFKOIHFNRLGVCSHTPXPENZQOSRFBJNPCHMWUPLYEYTXYBSZFDSWHVWD");
    msg.last_error_time = 0.34872273328928527;

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
    msg.setTimeStamp(0.9226253161367838);
    msg.setSource(39491U);
    msg.setSourceEntity(71U);
    msg.setDestination(30484U);
    msg.setDestinationEntity(49U);
    msg.mask = 59U;
    msg.max_depth = 0.34613069118059003;
    msg.min_altitude = 0.8823803326915823;
    msg.max_altitude = 0.5784023607084557;
    msg.min_speed = 0.379123507193566;
    msg.max_speed = 0.6783675894093025;
    msg.max_vrate = 0.45688413500642455;
    msg.lat = 0.36476404706519017;
    msg.lon = 0.5055168947378258;
    msg.orientation = 0.6251480920176608;
    msg.width = 0.7554684248902863;
    msg.length = 0.0005411368003264139;

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
    msg.setTimeStamp(0.9455125246392603);
    msg.setSource(40358U);
    msg.setSourceEntity(64U);
    msg.setDestination(61187U);
    msg.setDestinationEntity(110U);
    msg.mask = 95U;
    msg.max_depth = 0.005832778922790327;
    msg.min_altitude = 0.1508842250204684;
    msg.max_altitude = 0.6255345494494888;
    msg.min_speed = 0.5273493006793513;
    msg.max_speed = 0.33311555423330586;
    msg.max_vrate = 0.09520364517632651;
    msg.lat = 0.30267815916123464;
    msg.lon = 0.4249678519420088;
    msg.orientation = 0.005752222505235438;
    msg.width = 0.5548245043660656;
    msg.length = 0.2028908516597494;

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
    msg.setTimeStamp(0.9146890075173923);
    msg.setSource(2976U);
    msg.setSourceEntity(98U);
    msg.setDestination(19051U);
    msg.setDestinationEntity(190U);
    msg.mask = 26U;
    msg.max_depth = 0.4911672222703215;
    msg.min_altitude = 0.6021617475408456;
    msg.max_altitude = 0.5796828251285697;
    msg.min_speed = 0.2760248008609665;
    msg.max_speed = 0.3319657076242212;
    msg.max_vrate = 0.8966660401590898;
    msg.lat = 0.384420015512427;
    msg.lon = 0.14263842621388556;
    msg.orientation = 0.8109152381809904;
    msg.width = 0.26562046635300063;
    msg.length = 0.7434318114419829;

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
    msg.setTimeStamp(0.31350445079260936);
    msg.setSource(46431U);
    msg.setSourceEntity(54U);
    msg.setDestination(55693U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.06690939978018628);
    msg.setSource(43302U);
    msg.setSourceEntity(244U);
    msg.setDestination(25704U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.28555354917057485);
    msg.setSource(54495U);
    msg.setSourceEntity(167U);
    msg.setDestination(4988U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.6660042810234323);
    msg.setSource(50430U);
    msg.setSourceEntity(183U);
    msg.setDestination(2418U);
    msg.setDestinationEntity(250U);
    msg.duration = 59764U;

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
    msg.setTimeStamp(0.9119202248424296);
    msg.setSource(38522U);
    msg.setSourceEntity(138U);
    msg.setDestination(52641U);
    msg.setDestinationEntity(164U);
    msg.duration = 44006U;

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
    msg.setTimeStamp(0.16905661557676233);
    msg.setSource(40945U);
    msg.setSourceEntity(96U);
    msg.setDestination(19461U);
    msg.setDestinationEntity(65U);
    msg.duration = 34254U;

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
    msg.setTimeStamp(0.7664635273939795);
    msg.setSource(54228U);
    msg.setSourceEntity(176U);
    msg.setDestination(41745U);
    msg.setDestinationEntity(247U);
    msg.enable = 142U;
    msg.mask = 53312687U;
    msg.scope_ref = 0.49102510697421864;

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
    msg.setTimeStamp(0.8577992966130698);
    msg.setSource(19846U);
    msg.setSourceEntity(137U);
    msg.setDestination(41379U);
    msg.setDestinationEntity(177U);
    msg.enable = 205U;
    msg.mask = 85666464U;
    msg.scope_ref = 0.7814546723124176;

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
    msg.setTimeStamp(0.389245139520226);
    msg.setSource(55090U);
    msg.setSourceEntity(220U);
    msg.setDestination(46136U);
    msg.setDestinationEntity(218U);
    msg.enable = 230U;
    msg.mask = 762067943U;
    msg.scope_ref = 0.7669248814119526;

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
    msg.setTimeStamp(0.8002029831083288);
    msg.setSource(50420U);
    msg.setSourceEntity(58U);
    msg.setDestination(28894U);
    msg.setDestinationEntity(76U);
    msg.medium = 41U;

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
    msg.setTimeStamp(0.537146098762023);
    msg.setSource(8029U);
    msg.setSourceEntity(112U);
    msg.setDestination(1610U);
    msg.setDestinationEntity(75U);
    msg.medium = 252U;

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
    msg.setTimeStamp(0.5540548652502044);
    msg.setSource(17841U);
    msg.setSourceEntity(223U);
    msg.setDestination(4533U);
    msg.setDestinationEntity(4U);
    msg.medium = 217U;

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
    msg.setTimeStamp(0.24677613823830913);
    msg.setSource(13760U);
    msg.setSourceEntity(16U);
    msg.setDestination(63647U);
    msg.setDestinationEntity(206U);
    msg.value = 0.6397639810776703;
    msg.type = 66U;

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
    msg.setTimeStamp(0.15060097304669617);
    msg.setSource(24517U);
    msg.setSourceEntity(246U);
    msg.setDestination(65426U);
    msg.setDestinationEntity(10U);
    msg.value = 0.6464262116796249;
    msg.type = 69U;

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
    msg.setTimeStamp(0.10538398970886276);
    msg.setSource(43101U);
    msg.setSourceEntity(83U);
    msg.setDestination(32472U);
    msg.setDestinationEntity(77U);
    msg.value = 0.8735413077025074;
    msg.type = 15U;

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
    msg.setTimeStamp(0.19301194925529652);
    msg.setSource(28130U);
    msg.setSourceEntity(141U);
    msg.setDestination(1243U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.882065201458151);
    msg.setSource(36308U);
    msg.setSourceEntity(50U);
    msg.setDestination(57292U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.3716404985761592);
    msg.setSource(20686U);
    msg.setSourceEntity(69U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.7395635119735493);
    msg.setSource(1428U);
    msg.setSourceEntity(163U);
    msg.setDestination(33035U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("KDCITRSVWWQCCJBVJAQPTRJOSLMGXYBOBZJJUCJTWTLCHSQLNAFWAHFMGOBAZDGGXDUGZABPRGQIIAMUAAFIQTFGXNEKMJOUEQVVCZIRSKXYKRLZVJSFYLPSXOHGUOKYZLVMNHSGFOOUPXYEEDULSNDPZETBILVKUCMPRHWCYRQONXJXWWVMRKYKHENQMDPVZBZYXPIYGNTSMRDQBFPML");
    msg.description.assign("VIHQAMBGGLUIIPFQYQODEBPFETVNOLMAZSUUFCNFXOCAACBSPDGKSKXETQODQMBGKJEOTLXTHMLGJDWXCSKQYMIMBRJWU");
    msg.vnamespace.assign("QQUICHBNFQWWSVVOTXPSWBHXONGFJGNAYAHMCE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ESVPRELGRANTXCBUWYVDCOQNSRFDCZXYAYODQZQAHRPQRFBJOKOMXVLAXCERLLT");
    tmp_msg_0.value.assign("WCKVIAOEQTIXXUPIVJWRT");
    tmp_msg_0.type = 28U;
    tmp_msg_0.access = 37U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WTPVRTMWHXPDZLKVBYKAZLOAHPNZNRJLBUEAPBEIMTXGKLEFADQIWMOQSLDJSOOJLGRGIFQHKCILVRORYBWJGNTCONXUCILKETYJINPZKKVQCTKXVHHEAFNCWERGYGAVTNZFVUMYIUUDPIUEYZIBTUZEDOAXHWJPDXXGWGGTHJBSCMRWHAWQYFLVPQSYSXHZNTBZRCDAJVBMSSJFRQSZXBQSODNDKKEEUVFUYOQCDMWHNQAMURJ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WTCYFOOTDUQXDWDMKQIXMEOVWINKRFSCRWBYLONVLH");
    tmp_msg_1.dest_man.assign("CMOYECSZVDZHTGNQA");
    tmp_msg_1.conditions.assign("TKOGWPIUFGLPAGYMXBNHSLYDOIEKROAYWWYAKGBVYUKIVXMQTGCSMLZBMRSCOJGILEEAWXWDINIMEJHXPBATSCZVMRBWTPXYARREONQBWWFZLRWVKXVQNFKPPLVHDEWHNHRTLQLQYTYJJQJXCUCFU");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Salinity tmp_msg_2;
    tmp_msg_2.value = 0.5299614077594892;
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
    msg.setTimeStamp(0.8518824932367111);
    msg.setSource(48061U);
    msg.setSourceEntity(94U);
    msg.setDestination(284U);
    msg.setDestinationEntity(10U);
    msg.plan_id.assign("IRDGGKMMVRTFAEMPELCDEXYVPMAVDLHHJQBZUSOOPOUNVIOXDMKOBWFJNHMEYCWUTZLURPSCJCJYNSHIAUONQGIAFATTKTTVOKORHPGXBSGQQWVDJFXKKBSNFWWDLHBZPQXZHCCKKETNZVLLCLAAMNWIRVMQMZCBOOFBBYHRUKJXWPLBYFYYPUKWZRRYNTFUIQBNDFCEJWGHRQFZJXGAYDUWISJAGYZCAIQELXIHPXUSJXDGPZEGVM");
    msg.description.assign("IUEQMJKTUPJBANKRGKPWTJDOKAHQMIQDAGDBHZCBVVYSHYJGYTQCEWSFALPILJOKPJBXTSRDSMQFLYCEELUXHCOHJOIZDWNKKDRVCXISTQWFIHTMBWCTRXGCUIYWFGPMOHCSXFVZNONYYOFBQKUZQRGAZNFXARBGWDXZIPVVUPGEYNLYXHKGVXVAWEELZRVXJSHNTRSBHODCFOUMDLMLDUWMUVTWJIS");
    msg.vnamespace.assign("JHQBASBVLSTIGWIXFFPTKFMNQFNKYOARUMCJBUQCXSHRCIDQAYJHOWDGVWSTVEQXONGEOLBVZKGRRQMHAYSOMJUWPMJUKWGOZYLDHBIDFDBIQTRSZADFOHCVHXSNEUFCHRJSKPEFEZNHRTUJTVDRZ");
    msg.start_man_id.assign("OSTOBCPKSAVYDIELKQWUEZBNQWLKCTZXNOAOFXULBABEWLBCMUPANDTAPKZLHSRDSKNBYGYRPGOOVMNDJDZCSLEVGEFQXLARMWJNXWWQIOJRCFXIZNSBSMLBIVXMCKGKSRYVVURQGNPQHRBFKGPLPDYEMHXGWZJTTTIMVLDTQVZU");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BQXVXYUPXHAYJXFEWDTLWDQBMQNKLRYOWEZZTMWHLIRFZQCWGNCQSFNABGEDLIHPIFSDCSJHMJXIOZEYSCICRTVVULMNLJXHRNSERKMSWV");
    tmp_msg_0.dest_man.assign("ZTEBIMQUJAIGPMYHUHKXLRMWZUBAFPDWCSJCUGBFRCWQSNLSYOVHQABNOXGPPBUATKULZJASTSRQVIKPEEHZTEIOVFCBSVMEX");
    tmp_msg_0.conditions.assign("GBLKMOPRRTAGQECLWHENJTSHCAHXSKZZTKDAUSTYQBRGTPOYGYDXNTLAZGIBVKFFEMLXKAIKIWRGBTPSJOFZDFUFJQBMNRHUEPZUSMLRVBCSVUKLYPKLGQYNJFFJLWWFTQZCIAJNUEPKVVTZCJXYSEXVRGQEEJRAAYUDEBNLDVPIOHTPHOBWDHYYKHMMQVIZVUFQWXJMNCPDRGHLSEWBOZBQMAIAN");
    IMC::StorageUsage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.available = 3544997846U;
    tmp_tmp_msg_0_0.value = 142U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::LblBeacon tmp_msg_1;
    tmp_msg_1.beacon.assign("WSOHCUGAKDDNNBWXGUACGPXWDSSZTYCISOTHTBAJHOGSCVIJTPDLSRGFJCBSVOZFEZRRQDEQLYYDBTMBVNMNBEZSUANNLMJNNKIPFDSYKJKIOUKCSZMMYFETGZFGQIANCWHGERMPMLUXDROOQUKHXRYQZYTEPQHAHVKBLBOHZHUYQWXFDLXKOXFJMUFPEETUKMYICWRIWKIBFZXPXXLATHWGABRQWRJIQEEZFYLWLPNAICPTRVJJQVVPGDJ");
    tmp_msg_1.lat = 0.8774058680216403;
    tmp_msg_1.lon = 0.026173030128033514;
    tmp_msg_1.depth = 0.6446262932290514;
    tmp_msg_1.query_channel = 117U;
    tmp_msg_1.reply_channel = 162U;
    tmp_msg_1.transponder_delay = 157U;
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
    msg.setTimeStamp(0.22723146237081182);
    msg.setSource(44466U);
    msg.setSourceEntity(175U);
    msg.setDestination(48442U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("WNQZTTAYSHXNGJEMKWJSPDVOQDLEHLFOSQACOOVZEKWBMEWFMHFFSDTMBBDATVTZVXFENKUKGYZHIAUHEGVDWDDJNWOGDAZQJLVULSCRXISPKQS");
    msg.description.assign("VLUIWNRBRFLHKHTNJRZCXPRTYKWTQSHMGOECGFAFLHBQWYHVCIZRNRZZLFQAUIBZWVADGNKPUQUCCOSFOYVWNEIVRKAWKUMPUSGYRYAPQBXMBOUQDIZADMJPQDJFDSFCXAPEXXMGVSMOHJTDBHDCGZMLLOXPEHZJVELDRZBEWEGAVGUNJYHPWXAOEMDNVIJLJAKNYNKMBHLLYOFN");
    msg.vnamespace.assign("KIETEAKETITYJQWJYMDVAYRHREUXDPMGFGSZQPMJFXWDVWJXCVSGGSAWARYTRDITOZVBWRULIEJSETCRDYFQLJCDSPCDQZLKTSCJBXDHIHIGPPQXROUEBLSNZPUVSVANUUXWTCERKHEULUXLHHFXMAWBMPU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DTAULRFXWUZGEPOVUFTIEINNPEYBTNOACYDBTBLAFFGPTIUJJEBDCVUJHXVQBBJOYOCANVKFMXQQKVZOAVKMJOXMRMCQQUGGYHTSLCQIBGBT");
    tmp_msg_0.value.assign("CXHTEIYLWMWXPXVCXBKHVDPUJSZBOBQCYPPIIILTDSUFGPPJYWRXNDGAYNMENZDBALFJCTROVNDBVALJOHNQFZOPLURUAMYFLKISGUALOMYQSQQRWUCZAFHNPHDOBUUFVBFVPEYEUSIMJWEBRNBTOHNVPDZJOXZYIAWLHGWMWZGCHFQIJEFRGZRKRQRAMHSQMKSVSRKDIFGSCYELGKTSNMOYXVTMZOAJTGEC");
    tmp_msg_0.type = 98U;
    tmp_msg_0.access = 87U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FMFNUPQSMWLYGVEDOJJIMISKJTEPZGCFCQRAEVCTMQLVWMUOHJYGIBVSQYWRDCAEBTKKDZTXDBNLUOH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QQDJOHVXZPEOQWMAVSYXQYHPTOTNSXGSFEKR");
    IMC::FollowPath tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 57079U;
    tmp_tmp_msg_1_0.lat = 0.952872882262372;
    tmp_tmp_msg_1_0.lon = 0.17127880669796047;
    tmp_tmp_msg_1_0.z = 0.5878639152073905;
    tmp_tmp_msg_1_0.z_units = 13U;
    tmp_tmp_msg_1_0.speed = 0.6688822172070475;
    tmp_tmp_msg_1_0.speed_units = 43U;
    tmp_tmp_msg_1_0.custom.assign("SFCGJOSDTDGHCWWBCVAHFIBTZOQKFBKNSTMWAFYDRPBKXPVYSCEDDHHTKXBDEJZJMFZDUOQRKD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PulseDetectionControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.op = 120U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("JIVUEZHIBJLHKKZYGVDLYQILPANNLHUVRKNYFZQJYXJXHABQWMIFSTAOYFADUJAFKPDRWCBSZYDEDBVIBMEUKHXITNLMOCNYLOWESVITMYUMQCNYBTUCSJPVFLIPWSWFVKESTEXQOOZBQGPXHXSXCNZSE");
    tmp_msg_2.dest_man.assign("YGRMBUSKKXLVCBVRSUFWKYDRTVCOPBGDITYZVOWPAQLTKLIBDYSNXIVICCCUTSLTIBBKJTKPWAQZADNJBOMMSVQTBYJWEFDONEKAFPYGFDLXMIFENNEJBSPAZOWREGZPZBQQCJUYUURXIQFNVJNFAXXZNHMZZDMHQXOSMSQUWUJDPGMRLRTMXWOYXLHJWHQHXJVMTEIQIFOPEHGZWUPGWOEGK");
    tmp_msg_2.conditions.assign("EPRTFDLEOEPZANVITLKGJEQOYCTMZBQCSNZAIQXAKWZDNBCKAPHGIOLYBMXJPXRHBZHTCZPMJKNYSTCVOZGEDJFRDIQXYVKFYAMSHLWJXFYTBEFRRBJNJGOMISBIUDSUXVYSYOXUHNHLDORMDVGUUFQXKQVRCLQLPVUEGPPGACLKVUTNCITXPWVMSFFWCYIXRBZHSZMVENOWGRTCJWAMOQHHFDIEKZQAWJYKWPGUK");
    IMC::LcdControl tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.op = 143U;
    tmp_tmp_msg_2_0.text.assign("BYMNDEDDSVHHCNSQRVHUMPYRGENXCLKBJVOGANETJABDLIBZEPQROUNWSKUYFHBFLCISRZUIAXPFHIXP");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::EntityParameter tmp_msg_3;
    tmp_msg_3.name.assign("JSVZAQJENFLJUAYTJKBMCXPDNZURQIHGDERXWRSQUKVRWPPOYHNXBKZCDOWEQXYHOZZKINBWIGSNWLEFPTKYZLTVJDQWYYBOAJXCNBDMIPXXRXNCPDWEFVBLEQIHTKTPHYMCRTTOXKOGTUNAVSCMBWZAHJXLGOLHZ");
    tmp_msg_3.value.assign("TCPSEOYXMBAZFJQZYSILKTNJEPPCJGHLPOGMHHCIDTHNVLZVXYJQGAKEHQMLUZJRYJAE");
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
    msg.setTimeStamp(0.584404191098585);
    msg.setSource(56106U);
    msg.setSourceEntity(120U);
    msg.setDestination(62767U);
    msg.setDestinationEntity(246U);
    msg.maneuver_id.assign("PACDHMSCEKDGLZQXZYEFLHPGSBDRHUSMWINONAKEKFLZYQRJQGTVYPXDDSLJLIINKKBWYWFHQXNCCPACADBRAFMSLINUSZFYYOOBKRIURUDJFMMLESVUXZMRCIGLGQCDWIOBLKTEHPWPZWRNEGNWYXUGQQEFSKACRBCBQTPXDAUFTJIVFJTBSRVM");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 34862U;
    tmp_msg_0.custom.assign("AXSRGILSHLXAWAPZOOCQXVZTGYPKLORQIYVXHBXMCAAPNQHUNMJKHEVMEUBNKLDBHVEECQYNWUVKHBOIQFDGZTEYVCNWRLVUUDEVOGQSZKISYFARRXTKMTVJWVFLBGGHQPMQMFNXTSEIEEJHGJLRDSDBBMOZNYKBCHYSWKOFUGIJPLQOQTPWAJCOTRZFWRZCMUXJPZHJWUUDMA");
    msg.data.set(tmp_msg_0);
    IMC::DesiredPitch tmp_msg_1;
    tmp_msg_1.value = 0.12443699257443075;
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
    msg.setTimeStamp(0.43745665469447426);
    msg.setSource(31432U);
    msg.setSourceEntity(58U);
    msg.setDestination(53132U);
    msg.setDestinationEntity(164U);
    msg.maneuver_id.assign("ISAOTKVXVDKZJCLPVAYLGOUNGNMPHQEUDMQBRIWBFHBXLTOQRRLGQJXCJXEFOPSOKVEKQPLBTWYPGFHEYSNTYCRRTQXHDFZVDDUYBSDJVGSZEKJCKZHZGTFWHKLUBJUSEVDSRCVZYNBDNINPLQUPGOZXGTKJCKW");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10643468849489013;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 50252U;
    tmp_msg_0.custom.assign("EAUPVZVHRHGPLNNYYJDCEVETUHKSPTNGQUBTGLUYWNDGFZIBNWQEAWJMKOZDDCYMOXFRXNYQCTDKTXIPBFLKLXSNTMZHWGQWLJEQWVQCIVPSGMRHYPYEZUJCBSXWRCBAXIIUDZAEKMJC");
    msg.data.set(tmp_msg_0);
    IMC::FollowSystem tmp_msg_1;
    tmp_msg_1.system = 30385U;
    tmp_msg_1.duration = 25121U;
    tmp_msg_1.speed = 0.24554498485833587;
    tmp_msg_1.speed_units = 191U;
    tmp_msg_1.x = 0.3441887424577955;
    tmp_msg_1.y = 0.9915063283355231;
    tmp_msg_1.z = 0.9811026666164089;
    tmp_msg_1.z_units = 246U;
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
    msg.setTimeStamp(0.8352002055409106);
    msg.setSource(51667U);
    msg.setSourceEntity(244U);
    msg.setDestination(31316U);
    msg.setDestinationEntity(50U);
    msg.maneuver_id.assign("LAYKPERBJZDIJCTUQTBKIOFYXNAFRRMCAJOTCUWEUPNJLXGRYWOUWKHGCATTUEFYPQNGJYGRDNJMXDZBXZOVVIPAKFIRYDVMBMHDSFSELKPOMQXZIOVNJEAGANIZVWMTRYCHCGLOSFGLMXQSGXEWVDUXQBCCTSKZQRHHIBNUNHKFAJHQHWBTZILZQLZWVWRYJXVDM");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 18643U;
    tmp_msg_0.lat = 0.09572786738864125;
    tmp_msg_0.lon = 0.49414728256610485;
    tmp_msg_0.z = 0.31703149268658604;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.038946094285489785;
    tmp_msg_0.speed_units = 150U;
    tmp_msg_0.roll = 0.644233074130695;
    tmp_msg_0.pitch = 0.7856578878249462;
    tmp_msg_0.yaw = 0.8660318584932302;
    tmp_msg_0.custom.assign("YQKKOARODLCEDPKPYXPYRERVCOITFWGUURRSJLHXDAJATQXHPQHERWMRMNFVSCFVIFYFUIFEAMCYGMHLSIBJPMFKFJNOPIQLZOCTUGIXDKWGLFKLXPCVSAJBPGZTEXTUFZZXCMEMENOIOEAHEMQSZCHQZDYDKBUZNSMGXZTRA");
    msg.data.set(tmp_msg_0);
    IMC::PopUp tmp_msg_1;
    tmp_msg_1.timeout = 14949U;
    tmp_msg_1.lat = 0.8756428319546976;
    tmp_msg_1.lon = 0.9579100516739026;
    tmp_msg_1.z = 0.6108641379794406;
    tmp_msg_1.z_units = 17U;
    tmp_msg_1.speed = 0.4621722635233909;
    tmp_msg_1.speed_units = 84U;
    tmp_msg_1.duration = 16689U;
    tmp_msg_1.radius = 0.29632281619834033;
    tmp_msg_1.flags = 22U;
    tmp_msg_1.custom.assign("DWAQBCHYJTQEJVGHXMYBMDWRRHUIPQLXNABEIZQDJRAXUVGVKXANO");
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
    msg.setTimeStamp(0.545755661246912);
    msg.setSource(24907U);
    msg.setSourceEntity(233U);
    msg.setDestination(37022U);
    msg.setDestinationEntity(16U);
    msg.source_man.assign("EVJTYICJGKFCNWLVFSOWPLFTEHTLPZYP");
    msg.dest_man.assign("KITANPRGEAFCZXPOTUBIKBWKQELIBEJMZWOZRXYEPHQISMWNJKVJX");
    msg.conditions.assign("LQSJKJIPQGTVJEPTXQLYLYYIQHERLLVHBXODXWNJJWFDPCHXMAQMDYGYLALORXJTOABZHTTGVPDZZXZYQKEVGTYMOPFCACIYKANKBKUFEOOGZMIURIIORBHKUPFNMGLSWNUWNDKOMFIZGEWHFEXJCFJVUTMXACQOHDCABFCKMGCUUHCWNUWNQVVNWTPNQYWVLRSIFMXSKZPGTMIRBFRESGSDHKETRARRSZADNOVBJHAPUZILBUYPECDX");

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
    msg.setTimeStamp(0.5488841120862735);
    msg.setSource(42657U);
    msg.setSourceEntity(87U);
    msg.setDestination(35714U);
    msg.setDestinationEntity(63U);
    msg.source_man.assign("VSYBDHRZYDXHAWCBBUFCSEMQBJEUZMDSDLGWLAJDZGXBKNUC");
    msg.dest_man.assign("MJSOBMDHDQZFBGULPUXNPADTXIOAPIRBWBYJTFNPQVZUGCEKEKVPICYLVDBJNXAZIGKIVNNDRGGSWNTLYQLGGPRZMOTAUHZIYSOQMJHWUXKAHTEDFOVKAQVHRWOULOSPCCQMJQNTVELWKBMHCCGKHDVWSFSJXTZ");
    msg.conditions.assign("BNVRBHSIHZELACWGCVONEXFUZEYKKDPPITAULZTUQZKVOUEIMWGSHIMMYKCMEEJNFRTCQQDPJKAFPVIFKHEQUBLAGFGYXRCMORCIMBZWLZMOPOCOWJBDIVWLHQFKYJSCDNPVDKJTASEJDFSYXJXCONIFRUGLLTBDGSHLVGIWAJNDZZHTNQXWVUARKSUKNPWDAMPQXBHCYGMTPLSEJTQUXSJXYZHROHIQOSONXXRMVVWBB");

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
    msg.setTimeStamp(0.8387824818169246);
    msg.setSource(880U);
    msg.setSourceEntity(179U);
    msg.setDestination(52163U);
    msg.setDestinationEntity(100U);
    msg.source_man.assign("PTSSNGWARFROQENCEVDXVYFHEUENBHAUITYNBDIOWEATPJHTSGIYPDXQKDWQHOVATUYROPTNMFDZIHCHKEULFDFWGZJBKNRABKAJFYNGMSVPPQRYLZQNZJJYLXJQIHPDOQYLXGVVMJWKWJRCCYQHTLFRZBOSYXOZCVWU");
    msg.dest_man.assign("UTPGDGZHPKHZBYYWJJIOSCJLEEAVRHCVRHIVQFLPERUTHEAMJSZBLBKZNVAFUTSYIOQBYMYTOANUCEPCUDVBPKNBWDBSSWOEGXGMDILZHWXWIVHNZAQNPYKGIMZXTBWFLCNJYNRCTEELKERPQGUXQMFMXSVDORVJXLKLWOSHUOSOAXQ");
    msg.conditions.assign("ALKOSUNOTLOHCBWRUSPVYVCLWULBIANFIXSPOMEGBUCNNUDFSGHFCFQHFXDETOPJYQPXUJNWFRJWOGTZIZNXBLOZXRZFTEHLVTBADEDYVREMAABVOHHTWYNFJAABBXHGJVCJDGKYWIMXJRQMRZSQBFQRRIDDCTZBEGHZSLYIJEIFMLTEKGMDLWYIVZXKQWAYHVSIPTOMMMIXGYACZGWKPCLQQPXGUKP");

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
    msg.setTimeStamp(0.46040649950669277);
    msg.setSource(26955U);
    msg.setSourceEntity(134U);
    msg.setDestination(46668U);
    msg.setDestinationEntity(115U);
    msg.command = 110U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RHAHNLWVUCOWCGMKZNISUFUYOGDHAATNHBFNXIKOBAUDSQUUOZQHCTEWMAMMIYRNEEXYGVVYVJWXQOTVGILDHSKJGXSCOPAFQSYPOHAMJKCOWDUVLZFMBRUIPNPQTTPDNWUJCQPDYEBAVRATWSDPRSGBHLRNHZCBMNECVXKOSRFLPKXYIZKVKEDCFKN");
    tmp_msg_0.description.assign("CRVDGXXMPLISMEDJFOFPEACIYQESNLYJXMFJIMRDTIEIORLPWTNQYVZVK");
    tmp_msg_0.vnamespace.assign("WZREVGMDTEZFKMYBAYAKAMXOBRILUMKFNJJWIOJIKLVDEGRVPJDWSSHJXTBGLLAGLYTHDNCPKXKUYSFCBBAXQLFQVRYSIOIPHCKEXFQCAXXTLMOLWUUCNHFVFPLDOHYCWFQDNRYGMLKPPZJEQUZPXQSTUWOZUASFMNJRTUAMJQRSIQNEPKHJZWOZQXHEHZCPIOETABTYVOMRVRIWGXOTPDVVFNYZQINBVC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SNBWYPMQVSTGDBCIGOVSUUAYLNBYLKKUBRMOTZWWFWXMMRFNIZVJAAZERJIZQJCRXYZFQPAROPMXRIXTNUQNKPIEDFECVCVJDCTXUVEDTKOLXKWLKSWHJANUXWJSULGNFZJIPSELWPGEZQOBIAMEQXDYQHIMVYKMQMJBOYIYFTEBBHLZJPVUZTODOPYWPRGACHENTTZVSRQHHSXUOCSWGESRDLRAKUCCPFLGQIDHOBNT");
    tmp_tmp_msg_0_0.value.assign("DFBNUYFJJYNTZDTCWRPMMMWZZAFALUMQJPSUKRPBSDSYAUPDGKFVQLNZGFXMIDXPPZSVTOIAO");
    tmp_tmp_msg_0_0.type = 168U;
    tmp_tmp_msg_0_0.access = 162U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UKSYYZRKQVVCZRJWBQPWHTXHUFFBEQIODIUJIJMDBPSWUFATVMCKFCVQHRGGPXUNSIPDBARKKLLIOZEFCXSGFDNNDVZRZLATZACBIXGYX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BUIFFYROWEQLUVVELBEMSNVUTJRNTSOTXFQYXYHPFTVMECCWDGMPMWZDEEISJIVBJANTSQHHRJARFBZLZSVCUOQPMRRGIGICVKEIUAKDJXWGCRMIBUHAANZOOSHDNNSBHDQLTZPXKDKUPSKQHLLGFGWXNYVZYIYWIGHYETMLRAULXJPWOCKA");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 4472U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.049582895921233994;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.26649942125722903;
    tmp_tmp_tmp_msg_0_1_0.z = 0.4595217417130889;
    tmp_tmp_tmp_msg_0_1_0.z_units = 127U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7404705595428565;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 165U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.7450460934289563;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.33695509875639906;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.4171477764990268;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("QCVNFUWBOYDQLFDIQLBNVQXAHKXIOTOYRULZEZPBXZJGBZG");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EntityParameter tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("ETYUSQRECXHAGIMHQLQBFRGJDZWNPXVQEIWMVNZDQOGPFLCLEFXUOEYGORIOKUBZMCFNJYBNNXKASPEOFPIZJXJBQMZIXPIVQFLBCSCZAVUOKBXACLCGFFNTSPPLJFUGXVUDLPJAZMKSWIEUXJCKSETZWPGBDZEGSFARMRKOQKYPTCVNJG");
    tmp_tmp_tmp_msg_0_1_1.value.assign("QUGMJACDZWSMANQZWJYCGNLEQRVHMIODPHFTHJWUVNOUPMKBFKEGCBLPKUJEXRPDLHAOWPLHTXFZGTKYXCASOBAUBPOZFIAAQWNLJFVHXET");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::VelocityDelta tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.66695759365701;
    tmp_tmp_msg_0_2.x = 0.5561741603608402;
    tmp_tmp_msg_0_2.y = 0.2284394902203274;
    tmp_tmp_msg_0_2.z = 0.406355811141354;
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
    msg.setTimeStamp(0.26088445202790667);
    msg.setSource(10750U);
    msg.setSourceEntity(167U);
    msg.setDestination(53564U);
    msg.setDestinationEntity(103U);
    msg.command = 51U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ELMCOMTFETDXVVGWHXDJXIZPLLVUKGCHIR");
    tmp_msg_0.description.assign("GVKIMTWSKYOALJRRYINHFPVDFABYJWBCCMZNGVMLVCIHWSABRQDXJOHWZSBFCSIOBSZEHIJURDKPJBTZFEKXRVQMVUWUAGGFNWPFKLWILJTQQFOJUOXCHYINLPVZBRTACZWYSMLEXODCPJDQVRBMPZEFUAGQK");
    tmp_msg_0.vnamespace.assign("PQMHAFBDAJZRNWELXSIHAOEJFTDAIVVLASBCPLVINWPOSYFGJECYYRFKLZGTXUHFXXGTIPOEGBKMTIEDNUXIPRQQYFXEQWPDGBUEJAMSNWOIHFBYMT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SOOGOISAIIBGQKCOGJVBVDXAJUJIGDBLQVMGPRWHJTRPDOTQGCXBOUYVHNALDOPKECVRKBSCKDFWPERAHOFFYAPLZNWNQSBMMAGEKJF");
    tmp_tmp_msg_0_0.value.assign("MOHZGVAFFKWHOEFYHJJXUKGSLVNSCYWVGOOOSFKXAJQLATTLCQLIFERIURQLGHRJMDULVUKWJLWKCBTTPVKGUMDARTAWPGSFMAFXZTLQUAZJILIBQXDPNILCQHDYHXQHTYTWWDXOPIPVIR");
    tmp_tmp_msg_0_0.type = 158U;
    tmp_tmp_msg_0_0.access = 6U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XHYNOVOGWASEJZGVPDTBGZSRUYBMJYDMATSZOBRQNCMRIFVWQXXQSAGVZOSXCIREMCVWTBUHHTWTYZJVHHTUQXCDQCPQRGMJLPFKCAHRDNMZWSOVBKCVKZIYBAKWDVPWIRBKINOXYSPYVZFJUWHXJTLNFSE");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EKGCVKIUFXMCAYCFYGBBOEUJSYVMVETDVBOBYTAAFUGWSIHMRJUTVGKPKQWWZDKRDZHQJYRWJZFSMPXNMYXXYIUMFBRPXTLSBFCEN");
    tmp_tmp_msg_0_1.dest_man.assign("JMVLAAGOEZJDAGRXBWQWLYUUBNETSUKZDNCSCAAOQMGUSMLOKKOZXPRWEM");
    tmp_tmp_msg_0_1.conditions.assign("PBMQTYAHSYKTNHXSQEHAJZSKICCHLZJVEQEBNCMURMQQZLCOKNPXKKUULGUJDEZTPWRXA");
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
    msg.setTimeStamp(0.14397768456616866);
    msg.setSource(17512U);
    msg.setSourceEntity(173U);
    msg.setDestination(46138U);
    msg.setDestinationEntity(62U);
    msg.command = 243U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GODSWPVVYCQQIXBMACUHVVZESEFFLISWCYFOBHTPMZKWFCMWMBOJCLDMKSJBJAUXTTRPSCCKTNBDKXOXTNNZCJKFPMOYDOLVEMQMITXPIZHQYOZNSQMJNRFAPZTDSUOJWGHVDGMZKWAHYOJTRGPYQVFVYDGB");
    tmp_msg_0.description.assign("OMZUJRTPIOYZWNDPXHTJLIAESIRUPLSECJDXJDXHLRTWJTBHYSRQMXGVQKENLXJMRXJUKUGOXFDEJ");
    tmp_msg_0.vnamespace.assign("MXTTTOJPEOBLAIIESANWPCDZZLYZLNDHYDNUSBJBKKSJHKPELDJSDSESXOHCIJZMMNQVDBVRHJBQKVLHFFPWGHEQZUUWECVPGCFQAXGPWTAYWKLQOYPDNREHMXKMAAUGOI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OHPOWYTSDURTXQKJWZBNRXNAYWMJVENXLKTRTOZAEYXSRRRGIEQOPQDJKOSKBWFABUAHTDJRVTPNCAMBGJDEQYKFYIAMPIHIHAVZPNKIJKLBCHH");
    tmp_tmp_msg_0_0.value.assign("FDTLSKXUPSQCNXFJPEYVPFJONEHKRLOZUTIMRUPGVOKEYBIUDDIFICNXCLBMQOCQZKFIAHTQVNICASTTWQXQOWJGOFBBVFYSZPLHWNEQBDLLSALVWUXZGZXRPDGE");
    tmp_tmp_msg_0_0.type = 127U;
    tmp_tmp_msg_0_0.access = 161U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UOPOXKSZFIOBKHYQADNFRZXSAAQCUUNBLVRPEBDERLWLTRGDDKWYETNWTLTFPUOAXLFVIGPVNUTHCQRGUWEFVMYSOHLOLNQQTBIKGKCZISRPJAIBPOZJQSTCPDR");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("XBANEYGLDABVBNHFBUTGGUEZJSRXVMDBUTLRRWCVJKSCGBGRVMJFFHUJNIFJKXNZSRLCGADRIZGIIRARYRDOXKFDARUVTQFMOPGKDNFXCNSTEJSPDDPZJVQCQQXHWLOEJZBSPVPOSVTWIQLKVZCONMAJOTCXIWLYMCUHMQQPFPXNLKKKWEFFLNWOPSY");
    tmp_tmp_msg_0_1.dest_man.assign("QRDOAWNEGHFQCXURHCTPWYQMBXPLWWZWEFJQYYEAYHTSGJIBBCNTVZIGDHNRHCHQKKSMAAODUJHAMDZXEMNCHDITOBNXRGGXDFTSAQHBPKDWVHSBIBJEPYUVOSDFQRBRMZMYAVTUJPEJFSLKWLARNLPOIUVVYKXXOSUFSQJZQZYGARVTMMCVGFPLGNCIOJRPPZXJRPWZKIOFKKLDQGSMEVKMUUDXBNNFTLYZJGYISFOOWETLLKZIWNA");
    tmp_tmp_msg_0_1.conditions.assign("POKBOCNDCPOAMHRQPHTWYJQTUXLWWPAEOXIMNLMEEPCITBQUIBXGJVSCJKRRMKAISXMMYWUCRFDTEGTZRDGG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EstimatedStreamVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.0037066582320723906;
    tmp_tmp_msg_0_2.y = 0.7604945294359784;
    tmp_tmp_msg_0_2.z = 0.3374194629926348;
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
    msg.setTimeStamp(0.8686087195162451);
    msg.setSource(677U);
    msg.setSourceEntity(60U);
    msg.setDestination(13018U);
    msg.setDestinationEntity(102U);
    msg.state = 20U;
    msg.plan_id.assign("QDAMBEQOCNYCWABAZMNIPBAYSNLUSTZVLSTJYCOXVVQTPXEADTOFBDGNGBZZZBQUFKRMSKOLGWKJCTZGRKGKEXPLYJDXTWEAAULHZKXWOWHMAUIICNGDUCOSPYIPQIUHCHERFPRNXAWIVVPLVFLAHMBFZOUUJWJRZRODQLJCMEGFUFINEGXRCBXJRLFWJKPINWBWYXQSDUOLFEPQSHQKHOGSMNXYYMMFYHE");
    msg.comm_level = 111U;

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
    msg.setTimeStamp(0.36139896798494187);
    msg.setSource(30019U);
    msg.setSourceEntity(52U);
    msg.setDestination(33423U);
    msg.setDestinationEntity(182U);
    msg.state = 186U;
    msg.plan_id.assign("VQDVTBFXTOLWDXYVRURDZEJQICSKGXHUOXVOUBFCYLDOVXDMZRLWYNBXSAEHTAVBEZKLCFHHKRNTQJRMBDRZCXWUTMVYSUIAYGNMZHZNTNKBFOFAUYSFQLHZQGHHWOYTMGKCQHJXSYWGBACTWHESRDKCRRPBEWEVXTOFVKPIMLPUIPAZMJGWEIQJPXSLGIU");
    msg.comm_level = 27U;

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
    msg.setTimeStamp(0.06273048400907022);
    msg.setSource(35778U);
    msg.setSourceEntity(164U);
    msg.setDestination(42528U);
    msg.setDestinationEntity(158U);
    msg.state = 77U;
    msg.plan_id.assign("SLFLCFMEQRURLDWGWEHWHCDMTOXMYOUTYKXTOZDVKJCHEETFYCNYFEZWJLHSRIOTSEOKNBYVZKAVXPIAQGMDEGWXUTJZANZPIBOXQQNRBOBZDIJBKIMQQDKYGIPJXBPXMJDLVPVCDYRHDIJSBUIPEEKJQBHEKFTUQPWMRCSGLWQLSBVRGMFSCLPFURCPTTGSUTDCFOOVAWXGNHMOAJCHZXYRFMUVASNKN");
    msg.comm_level = 127U;

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
    msg.setTimeStamp(0.8437096568821114);
    msg.setSource(40636U);
    msg.setSourceEntity(122U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(24U);
    msg.type = 184U;
    msg.op = 66U;
    msg.request_id = 15601U;
    msg.plan_id.assign("LMGWFQMJKHNSDEEQGHOTCAWQTERYYFIHSUYRCDAKREGNQAQQBUCUVVLRNJZYJWBTKANNLFQJOPDLJYTCBPZUVUQGMXXQMPLOPJDOBRWLEGBSEAFBTZWWWQUSUXRMJZOIINPDNOTZUEMTXMTISSHSHNVDKHOKRFKYKULJRFLCCIXFXNZ");
    IMC::AcousticMessage tmp_msg_0;
    IMC::LinkLevel tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13304003117883922;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FUOCDIWSDYBTAJLQVGRZVDJHXDEQWUSBRMYNXDADESRCUXRKNCVOHHCVAMRWJAVIRCAMSPLEUVOZUYIHXTDATGDNKEIOOYQBNXVUKNZVLQPBKWKMICZBGZVATSZIMSWZPKTQJMGOLNNCMDAPQRKLRGXGFTEFYZFJNWEELFKWPLBOJHABHXOGYRLPFTMUUFMPZGCJQYUPPIIUHPEYASYMWL");

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
    msg.setTimeStamp(0.5944250019950896);
    msg.setSource(2037U);
    msg.setSourceEntity(7U);
    msg.setDestination(25540U);
    msg.setDestinationEntity(26U);
    msg.type = 19U;
    msg.op = 44U;
    msg.request_id = 59810U;
    msg.plan_id.assign("WXCDWHSDFYBYTBTXVPZCLZMPKETCIXJENDYHBMETEINKWKIVMXP");
    IMC::AcousticRangeReply tmp_msg_0;
    tmp_msg_0.address = 60U;
    tmp_msg_0.status = 73U;
    tmp_msg_0.range = 0.9651888881455096;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BQGLDLKUAYURYEYAOPCYUMUYALXOQXBVOZNGBMSXGVBYRIQQAWZTHSPNDWPJXCUFCBMLR");

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
    msg.setTimeStamp(0.7646323814753182);
    msg.setSource(47129U);
    msg.setSourceEntity(107U);
    msg.setDestination(36336U);
    msg.setDestinationEntity(158U);
    msg.type = 211U;
    msg.op = 18U;
    msg.request_id = 18286U;
    msg.plan_id.assign("LGAYVUUYCSLOOJXTIRVRDIJDUWPOYUZQFSWVMDDNBBOIDCQWLHUYPJMBIROSGSNYFYAESJMCTVCPXPBBKNLQKEHMQZAXLNIBGOPAAWNRTEDZEJIPYGGALEUNDCRZDCFYWDHVMATXOGVERAQJMXIQZUQTJHGVEZHJJSWTREGKNRXXFTKGHMIFULXSWPKZNNSGFAIKFVQWPIKFHULPBSV");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.11557606409368593;
    tmp_msg_0.y = 0.33608387899333714;
    tmp_msg_0.z = 0.22477784543921164;
    tmp_msg_0.k = 0.5982037993925335;
    tmp_msg_0.m = 0.17670802026339616;
    tmp_msg_0.n = 0.7091949740766668;
    tmp_msg_0.flags = 19U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AIEQETSMQKGZZBUAQDZQXFYHLWQ");

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
    msg.setTimeStamp(0.6348163382839321);
    msg.setSource(19509U);
    msg.setSourceEntity(43U);
    msg.setDestination(42137U);
    msg.setDestinationEntity(6U);
    msg.plan_count = 50763U;
    msg.plan_size = 4193483928U;
    msg.change_time = 0.6306870820312631;
    msg.change_sid = 11237U;
    msg.change_sname.assign("ITLDYTFIAOXAIMLMXNXXBFJOHOGJAZBAEHYYPUHGMQDFJRLORHQKGDVJPCXPHERHXTCRIWVEUKSXIIMDNYMQAOWNTKEJZJQUNATQNFETPNSYCNRYAWSOHURWFABDTMBCMYMKWUOVYGCFEXDHAQSZOVWQJQJVZVULRYSEFPWULTRZALKBHODPSZSFNJUTEIJBKNGLBZDCGWGWCGBPZUKVMCZSC");
    const char tmp_msg_0[] = {-68, -43, -26, -56, -10, -91, 12, -105, -96, -48, -79, 112, -84, -7, 0, 110, 106, -4, -24, 106, -11, -25, 115, -31, 87, -88, -58, 45, -75, 125, 87, 37, 32, 107, 92, 41, -121, -107, 38, -25, -10, -65, 70, -96, 105, -99, 57, 85, 107, 98, -88, 3, -94, -101, 99, -125, 26, 11, 31, 41, -111, 57, -99, -22, 79, -40, -103, -57, 101, -48, -58, -66, -70, 49, -48, 125, 59, -55, -12, -128, -12, -123, 103, -100, -32, 31, -54, 23, -45, 53, 47, 55, -59, 112, -75, 121, -20, 24, -41, 41, -9, -56, -107, 119, 41, 18, 116, -100, -9, 121, -9, -34, -83, 42, -99, -6, -58, -35, 113, 96, 12, -81, 46, 63, -50, 66, -126, -4, -76, -42, 105, 39, -53, -39, -4, 92, -31, 115, 36, -67, 4, 118, -59, 41, -55, 118, -4, -85, 34, 119, 119, 82, 100, 87, 113, 19, 2, 100, 56, -17, 98, -119, 74, -60, 60, -109, 43, -120, 90, -125, 123, 4, 66, 98, -52, -37, 124, 9, -54, -111, 95, -15, -32, -8, -24, -90, 16, 46, 105, -43, -123, 45, -61, 117, -77, 114, 110, -33, -60, 81, -127, 72, -121, 117, 115, -37, -97, -36, -6, 46, -23, 121, 95, -16, -125, 49, -88};
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
    msg.setTimeStamp(0.2613397111496705);
    msg.setSource(18719U);
    msg.setSourceEntity(15U);
    msg.setDestination(9361U);
    msg.setDestinationEntity(147U);
    msg.plan_count = 12973U;
    msg.plan_size = 3214495424U;
    msg.change_time = 0.15525236855021363;
    msg.change_sid = 23369U;
    msg.change_sname.assign("HVOVVGBRBVGWUXHRILQDMPDTEVHQWITUWSPSASKTQLENJZKMWKBIQTAXTUDGNGXXLQNRYMFTXSKGGEJCUKACIIOUDFLYKMZWRACFLACDBPSZUFPCNWSSQDRVNHZINSYWVFOUFXFY");
    const char tmp_msg_0[] = {88, 102, -112, -125, -68, -92, -15, -10, -45, -16, -58, 96, 0, -13, -103, 91, -18, 6, 76, -57, -50, 2, 97, -45, -10, 97, 78, 13, 115, -46, 83, -18, 124, 90, 15, -89, 120, 92, 75, 88, 47, -56, 68};
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
    msg.setTimeStamp(0.8627130498943926);
    msg.setSource(32868U);
    msg.setSourceEntity(222U);
    msg.setDestination(56300U);
    msg.setDestinationEntity(46U);
    msg.plan_count = 13650U;
    msg.plan_size = 3374790579U;
    msg.change_time = 0.7405026834184056;
    msg.change_sid = 9937U;
    msg.change_sname.assign("BREQRMBIBKVHFMWQQQYMTWDWNAUIJPENNBZOZBSZXEXSLLJIDNSNHVKFXOBFTCCMOYVJZNVYCGUTIYDJBXJDAGJEOSRFGTKFEPDRXSCETMAWRHYSRMBYIYYGJMWLCHRPQOWXNGDOZOKWFHHZLUCHKIQFAKLUJMGVHEPBHNIMLAZXOJUGUAKLAUIHDTQZVGP");
    const char tmp_msg_0[] = {-109, 2, -113, -61, -18, 15, 55, -67, 123, -85, -4, -36, 85, 60, -51, -7, -2, -120, 14, 109, -68, -79, -58, -117, 49, -31, -64, 63, 53, -19, -4, -105, -120, -106, -3, 99, 90, 118, -18, 49, -29, -36, -29, -7, -119, -54, -32, 52, 83, 9, 97, 54, -11, 30, -28, 37, 101, 106, -40, -107, -61, 4, -58, 98, 8, -109, -113, -28, -14, 64, -124, 17, -100, -61, 48, 108, -54, 91, 117, 45, -19, -37, 125, -58, -49, 109, 18, -125, -71, -2, 64, -61, 24, 121, 5, -121, 107, -119, -89, -81, -73, 62, -57, -84, -89, -15, -22, -31, 50};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SOCSCLWUKTDMKVJKFRQVYIEHVJSAKLFEUTGNXAVOJREJSAERGQNGEXONIEOPPTOJHDLOMAJEAVZMMUQZZXPRJMESSFUNZCYHFVNWPDCBTNYZOJOIZGNLMYSGEBLNRXJPWVGDHQNQFTAQLHYFPUPDGIXFGLWQXDVAHRIUKXHDXMSBGLYHBLYIWRMIUCCIAYDNZQCAPFAKBFBTB");
    tmp_msg_1.plan_size = 21365U;
    tmp_msg_1.change_time = 0.7063037248128268;
    tmp_msg_1.change_sid = 20409U;
    tmp_msg_1.change_sname.assign("IFTWOHYTWKWUMXOGIPQVJXYOEIVSENKZBKATNRIGAGFTWJUIRNXLIWMDQSFHXUTTDJMXBUGYPLRBPZWDSCASVEPRFBXXVSZAFOQKYLJIIUPSPOGZHYHAMOCRKLCZYVDCGYGS");
    const char tmp_tmp_msg_1_0[] = {80, -97, 21, 7, -27, 125, 116, -106, 34, -84, 27};
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
    msg.setTimeStamp(0.8276663053429384);
    msg.setSource(65021U);
    msg.setSourceEntity(7U);
    msg.setDestination(22498U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("WDCALZFAOBYUBLFJSDCQMAOXGVOQPYIAOTEPPIHNIWXIVWPVUMTWCNZYNUSTOFMUKHDNKEGAEYEETQETHFCJERISHJKBCBOJEWVQGOBGFCXKBUTKMRIQOSNPXHGSKKKUJFCQWZTSKZHZDZLXDXMRRYWJRBQXFBVLHPL");
    msg.plan_size = 59182U;
    msg.change_time = 0.8561655729228524;
    msg.change_sid = 137U;
    msg.change_sname.assign("DHXEYRCRSVCJCWNXTZYPYZGXFUAWNINZCLERGPMOFQZZKBWORVOIAHQSFALGMUXKPXBHKUKCLDUXWUJGYHOAQLXGKFHOIWAELOTQMTFPSDSGJBMFUQFXWOCRWPTJPZYBJNBYBQAYHIGJKPZYJAVWWMWUERNOCOTCNQJVRZY");
    const char tmp_msg_0[] = {55, -22, -7, 106, 91, 85, -115, -2, -109, 10, 47, -91, -50, 102, 55, 12, 45, 41, 29, 39, 100, -4, -46, -55, 40, 70, 101, -96, 111, 15, -68, 125, -60, -32, 55, -80, 66, 105, 124, 32, 114, 7, 38, -104, -110, -88, -38, -117, 85, 114, 23, 3, -54, -96, 109, 29, -62, 21, -37, 13, -21, 47, 57, -25, 92, 93, -128, 16, -95, 55, -114, 55, 85, -124, 63, -102, -74, 106, -66, 116, 37, -115, -63, 63, 30, -112, -72, -36, -106, 29, 10, 117, -76, -77, -27, 122, 3, -18, 124, 105, -63, -103, -57, 125, -128, 4, 88, 6, 53, -4, -107, 76, 123, 86, 71, -34, -51, -96, 24, 98, 117, -42, -112, -108, -25, -11, 84, -77, -61, -42, -19, 28, -28, 66, -80, 82, -121, 89, -77, 125, 92, 125, -52, -38, 51, -85, -1, -25, -27, 68, -117, 24, -38, -2, -48, -52, 35, -20, 10, -98, -96, -90, 22, 109, 14, -82, -61, -118, -94, -5, 18, 112, -96, 53, 70, -119, 19, -110, 94, -96, 17, 105};
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
    msg.setTimeStamp(0.40602564399350716);
    msg.setSource(20767U);
    msg.setSourceEntity(125U);
    msg.setDestination(14523U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("CEUDZSWOOXPZJQDXCRFGYGCUYTDTBWLSSAMGMKKAOMXVNUNNOPXJUWLBPIMMRXIZFYRMOSJXZWMFUYYHYRSVARIABENXXIESYFHMSIQWTXFVHGJLJAGQVIJKPWYTVVSRZARDACFAQNK");
    msg.plan_size = 46497U;
    msg.change_time = 0.7094001930796313;
    msg.change_sid = 27557U;
    msg.change_sname.assign("RARLLMWWZFBXVKQLWGPETVUQHFLTAOGDBWOXJNUURBOCCMKNHAYWHISAUOCXRXGRFZSJTQIOUPUZNGJVEGVPKPLZXMCZSTMIHDZWENXWEAJFINABTMFSSAPDRIQXXHFX");
    const char tmp_msg_0[] = {-104, -99, 48, 65, 53, 103, 100, 109, -57, 95, 23, 76, 49, 47, 56, 126, -55, 87, -74, 70, -47, -104, -53, -17, -66, 113, 98, 9, 34, -8, 22, 126, 45, 37, -30, -43, -65, -72, 100, 96, 120, 81, -95, 92, -62, 78, 81, -104, 59, -83, 6, 27, -21, 16, 38, 62, 1, -124, -22, 1, -12, 30, -123, 99, -56, 57, 28, -93, -25, 82, 74, -52, 46, -4, -60, 118, 94, 10, -30, -30, -102, 62, -92, 61, -50, -23, 44, -103, 15, -116, -53, -42, 60, -111, -72, -95, 123, 114, -61, 93, -54, -68, 67, -66, 73, -37, -126, -21, 76, -56, -94, -92, 112, 79, -77, 55, 51, 116, -53, 111, -109, -81, -25, 58, 69, -31, 83, -107, 109, -88, -94, 13, -93, 7, -39, 16, 26, -42, 106, -98, 114, -127, -96, 95, -126, -93, 97, 84, -32, 54, 122, 79, -10, 122, 71, -112, 44, 61, -9, -48, -119, -123, -82, -113, -69, 56, -95, 20, -74, 37, -104, -26, -46, -44, 5, -30, -117, 52, -64, 101, 93, -77, 84, -88, -95, -76, -7, 63, -120, 43, -118, -121, -74, 67, 25, 84, 47, 67, 39, 104, 26, -45, 106, -45, -73, 14, 66, -107, -16, -24, -39, -58, -33, -100, -65, 96, 61, 81, -123, 93, -95, 44, 47, -107, -58, 81, -11, 34, -74, -124, 10, -77, 65, -3, 126, -55, -66, 8, 34, 82, 94, -29};
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
    msg.setTimeStamp(0.9152325414587299);
    msg.setSource(27709U);
    msg.setSourceEntity(106U);
    msg.setDestination(50307U);
    msg.setDestinationEntity(215U);
    msg.plan_id.assign("IJRBXSMSLTNMRECZSRGTRPSDAKITZOWPKKNNXYQURMPIXTPLLYZMXWZRHCNSQELMDHEUDXDXYVGNAWFPFSJKSLTJBKSPGDVGBICYHOKNVZDQVMLOQFOFXYFEUDPDOOVXNMQQWWMLWJVGP");
    msg.plan_size = 11336U;
    msg.change_time = 0.258911054756952;
    msg.change_sid = 62662U;
    msg.change_sname.assign("KTZHBCLLYQFMJYRUSQPHGVCQJJAASIEQOEMKHDRDBEBYPLMGVCIIYNVMVCYBRGCUCEWZYOQHZVMWXUIYNEYVFIPTONADTFMCOHPKTMPTKSPFIFAXIHWKKPJEFXLRT");
    const char tmp_msg_0[] = {36, -124, 52, 2, -58, 45, -44, -109, -116, 120, 16, -16, -84, -29, 17, -40, -48, 111, 21, 51, 115, 45, -110, -9, 37, 15, 92, -121, 69, 26, -28, -51, 11, -67, -112, -46, 28, -29, -79, -12, 37, 123, 113, -96, -10, -120, -43, 40, -39, -37, -13, 122, 14, -87, -32, 103, 51, -115, 37, -93, 30, 98, 8, 21, -74, 52, -73, 64, 60, -37, -109, 76, -79, -117, -27, 44, -39, -92, 74, -111, 126, 110, -87, -74, -90, 38, 2, 121, 24, -121, 67, -109, -66, -79, 78, -9, 57, -124, 110, -120, 68, -13, -86, 69, -65, 111, 90, -116, -111, -123, 76, -111, 59, -88, 51, -59, -76, -58, 12, 122, -12, -50, -104, 4, -115, 19, 110, 69, -91, 86, 36, -102, -40, -93, 78, 108, -95, 117, -74, 3, 23, -89, 45, -78, 12, -4, 70, 100, 62, -59};
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
    msg.setTimeStamp(0.7938365671885804);
    msg.setSource(12300U);
    msg.setSourceEntity(68U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(16U);
    msg.type = 186U;
    msg.op = 18U;
    msg.request_id = 64098U;
    msg.plan_id.assign("JMJOCKKTADBPPENPAVBEXROJPJHKQSVDNTNPCJHELOBUOAYBVFACQPXYQEVYSJXHGLMOYNZZERTZCSLRVRXACGHWWWUWIXRNSSLKYZLSYMYHYEAYNRCBXTMXEOBD");
    msg.flags = 19594U;
    IMC::Heartbeat tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SRVJQRMLTXNWVHBHHGQRLJFGNSJKNIAIOTKWOJUSUGOIPOGXPQK");

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
    msg.setTimeStamp(0.9534257751991867);
    msg.setSource(7070U);
    msg.setSourceEntity(135U);
    msg.setDestination(48461U);
    msg.setDestinationEntity(85U);
    msg.type = 120U;
    msg.op = 2U;
    msg.request_id = 47078U;
    msg.plan_id.assign("XFVKXOCRDVUDZXDEFVUJUCIWVUXRBKHSTQKGFWCECLPDOYALVTNVIADTBMTPHWFGMZJCBOOJIYXWEWFAQNQAULYNVSCNAHGULFAHSMSIRPCKYPMKVOLRLTMSJEG");
    msg.flags = 59444U;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1087009175U;
    tmp_msg_0.value = 5U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RIKJUEHGAFCVWAROPV");

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
    msg.setTimeStamp(0.650021079563325);
    msg.setSource(34662U);
    msg.setSourceEntity(197U);
    msg.setDestination(48573U);
    msg.setDestinationEntity(30U);
    msg.type = 199U;
    msg.op = 184U;
    msg.request_id = 26534U;
    msg.plan_id.assign("XAFIEWVLPCCPHOKXNFAJZHTVYVXETDPDNWDKVOWLDJUDQSKISONFWKZLGYYPNAMSGQBHISBAZLASEMMCPFDL");
    msg.flags = 52116U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("OEUTVOHEMFSWWPBLBLZSEIWHKHVOGYCFYPCYYVMRHKRHPXEKWGYWUKYCZVVTBPBHMNEJXMDJZRNDGCLOSRAKAZMTAKCNANGQXOAKUHX");
    tmp_msg_0.service_type = 94U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FGLZEKOGTZZNXWEROYDMAWVATJBWYARWLTLIEGOVVBFAJRIMOJ");

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
    msg.setTimeStamp(0.6086787326919999);
    msg.setSource(7727U);
    msg.setSourceEntity(83U);
    msg.setDestination(21731U);
    msg.setDestinationEntity(144U);
    msg.state = 80U;
    msg.plan_id.assign("AEENEJRFLXGXGPOSZRZPWYMAQCVQCVKOSZTSDXAHSIQUBOIRWBBFYRPWIKVVHWZPICVFKVSATJUQRJKNEVFTVNWUXUFMYTHBAVHGTGDLQLQKDDNPKWNKESFJAFXOHXDYEMIZMFMUOYGHLWZGURWYSWYYBLFUCONZATALJZCWHDLOCCJDIGBNTBHOAJRYEUMPHPZNYPXTOHGSGGDPIJLVCAIOTSDBEBFMSBCXMIIQXCJQPNZLKNJXRQDMEML");
    msg.plan_eta = -620502410;
    msg.plan_progress = 0.2737225728475806;
    msg.man_id.assign("BVTFCXJTRWAWAMYVYGSOGUOFCFWWVHWOAVRPATREJBIRGKRQQCQEMYYSPZCWAEXXOXERMPRXRMXTYQDPBTNDTZMSBJKOYIISNNTKZHGBKASZAZMJOGBWJBUZHUMLHRBNLUAIJBECSTVYCLQOUHOEKWEGIPTWJDHOKCDDFUDICLKFMZVLVYOINFPZDJVWPHQLULNLXENHLSN");
    msg.man_type = 52810U;
    msg.man_eta = 755953181;
    msg.last_outcome = 131U;

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
    msg.setTimeStamp(0.38856731999287464);
    msg.setSource(11566U);
    msg.setSourceEntity(197U);
    msg.setDestination(10730U);
    msg.setDestinationEntity(1U);
    msg.state = 105U;
    msg.plan_id.assign("CSTYYMPEKVSHHXKTGUSZXLYVPTCHPWJBHE");
    msg.plan_eta = -1398307152;
    msg.plan_progress = 0.8130995195042254;
    msg.man_id.assign("ENANXLRHUXPFAIAWXIPRGDNPYVBTJLIRTUXDWJGQDIIQGPSHVJPOFVILVITJBTZEANXECYGVWZKWNDUSSHAYPLLXMACADQJZYKLQHYDVILRRDEXQOWHNYTHGVTLCUGCMVEYFDQOMNBSWPKWHJBCHOBUBAGYSNUJKEKKCXNQJBGU");
    msg.man_type = 41316U;
    msg.man_eta = -1921450106;
    msg.last_outcome = 237U;

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
    msg.setTimeStamp(0.2711857350936624);
    msg.setSource(22996U);
    msg.setSourceEntity(6U);
    msg.setDestination(50874U);
    msg.setDestinationEntity(25U);
    msg.state = 177U;
    msg.plan_id.assign("VKYNTFINLHGLDFQVVUFTIMIYLJXJBQHALHPNCLEZBPWXIKXZVNSKEOPJFWCWADQYVMQNMPPDTFOVJCSRZTBUENICJKTDVQRGUIJGUJCAJNMABBTIOYAYSAMFJERQBSEHIQZOWOTMUVGMOAUHZZSGOHRIDMPLQRWDPYECLTKXBKTHAFNKVPTXGCZLSVYYCXDEPECZHHEBWRNGDLFHXO");
    msg.plan_eta = 120857216;
    msg.plan_progress = 0.9750280818223285;
    msg.man_id.assign("UPRJVRHBRNNMGZIBVZMZVEJZWCWDTXRABUSSYKXQXHUOXLVDYVFJMXLMHQGCRIOEMFKDBADNQULDQUR");
    msg.man_type = 48215U;
    msg.man_eta = -1323537857;
    msg.last_outcome = 140U;

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
    msg.setTimeStamp(0.8554580491245726);
    msg.setSource(8996U);
    msg.setSourceEntity(235U);
    msg.setDestination(12522U);
    msg.setDestinationEntity(209U);
    msg.name.assign("SDGDVWSEBCAMQHWRQXCSXMRSIQZGAUWNWMXFZUGEZEJJUCRQFGKDHNICWBVNOOYWZOYHTMKTOBJANQOQHGRPLDMMXZMDCRHEPCLGPJUIUTZEEHGI");
    msg.value.assign("PKWEQICGXUDZWBSYRIECMXSBKKVRKFSUAFWJHGJTDQLYULNVDGTSSTFSCOIYRTIPAECNMILUQVDVNZRAFRXGSHRVZFCTDJACFHYHNJPIXHVYLGUEPMTUESJCZQPOXWGOWABIVGZBSBEYQNZTLUGCW");
    msg.type = 177U;
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
    msg.setTimeStamp(0.9138669773597959);
    msg.setSource(12533U);
    msg.setSourceEntity(186U);
    msg.setDestination(51345U);
    msg.setDestinationEntity(139U);
    msg.name.assign("ZLTJJKNMKOJVYBQOCVBSEPZSUXQGHXDRVMFYILLPFZYUIGDGRKSLLOCQPIPWOKRUOLNLWHIXRVBPTIYCIGBZZNEVHOOVDDJIYRQNGYRVYIHKVBP");
    msg.value.assign("BLHWZOWVQZKCXAJRCIPKISPVTARAFAITLMQBTUBXNXKSBJDGYSTU");
    msg.type = 16U;
    msg.access = 213U;

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
    msg.setTimeStamp(0.2299185111441303);
    msg.setSource(41640U);
    msg.setSourceEntity(169U);
    msg.setDestination(52823U);
    msg.setDestinationEntity(233U);
    msg.name.assign("HTUNJUGMEEZCRQBNEWYDDEXYFXKHBLCRFMZGZDSRXVRAZKNWJQQHJEPZGLTVJBUYSAJKTWAEXSIGEJGRUZRZ");
    msg.value.assign("NZCMIVKZEMSRLOYHZOTNC");
    msg.type = 58U;
    msg.access = 223U;

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
    msg.setTimeStamp(0.7247196329971054);
    msg.setSource(6690U);
    msg.setSourceEntity(243U);
    msg.setDestination(22504U);
    msg.setDestinationEntity(11U);
    msg.cmd = 26U;
    msg.op = 23U;
    msg.plan_id.assign("FBSBUNLRGFFRACBJSAVDRPQDEBDRUXGQIEYSPNYCLZGFGCDOOWLUOQIHAMYSYWFQOUONRCJIGPNQLCRJDKOLVJGEHMSIMNEADKJZKZGUIWFJHDBGIMTBPVZVRXUKORTAPSHKIEKJHKMXXPONWTEMQVXYISXAHWLFEBMLTAUBNAYHAVVSSPQFFPYUTNHYHTCUHXC");
    msg.params.assign("SSBQPBDOSZVWGVQAMIUHFGDXHTNCJWELIIQGTWPLLKEEHVRZVKUOXRPRTNNVOIQAAVCSJCBAFLTPAYGUDNFKUBQCWKUKUEJTETFNRYZYOMGBTKPVLDPAHIMTFLMHICHNMGCSSYJN");

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
    msg.setTimeStamp(0.47668790233869485);
    msg.setSource(51235U);
    msg.setSourceEntity(13U);
    msg.setDestination(32972U);
    msg.setDestinationEntity(172U);
    msg.cmd = 59U;
    msg.op = 198U;
    msg.plan_id.assign("BETYFGJWSNMKPEKJZLNOSBOCIATAJLOCJZRKQKZYBDERDWVFAVPWPVLUMFFTYGBNIPXFRKNWGKDUAQJBGFILVCWQURBQZPECBYVURWVUZSKQVMTSBAQLQPAFGPDXGOAGLNQFMMWDHQCZHW");
    msg.params.assign("LMMAEIKATJVLVEUPTVCTXSHJZKXTDYDSADERYRDYSIZDOLRCGZWIYDPQUBNRKZCBWFPCFRLWLYIWASRYXDBNMRKMTUHXFQUGJFNWRUPULUGVJRCOVLICHONVPOLNGZJEEAHPUZIZMHLKEABFFDFPWZI");

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
    msg.setTimeStamp(0.7267071920674535);
    msg.setSource(48996U);
    msg.setSourceEntity(211U);
    msg.setDestination(35685U);
    msg.setDestinationEntity(74U);
    msg.cmd = 226U;
    msg.op = 82U;
    msg.plan_id.assign("STFKUIDCHACEPXDAKFHQMDHKOPRAQTCWXVEXDOZGMX");
    msg.params.assign("HHPTGJMGCIPDETODJOWLCTSYDUHPRQIGGYWNRRXGRXIJBERNONRJDYSDUHINNVPRYTNCDRFXVZFAVWEMQLZGYMJBWFPYULZGTQASZYFCFXRVQSKYZUCKKPADJEOQBCAJXMEMIQAMPBSTGSWXXHNTMAVSJOMBHELRABCICMAOLWTXLLVB");

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
    msg.setTimeStamp(0.43496175750973165);
    msg.setSource(15002U);
    msg.setSourceEntity(240U);
    msg.setDestination(19927U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.6951471340092318;
    msg.lon = 0.8273782083000073;
    msg.depth = 0.6125331131968748;
    msg.roll = 0.3644443917220528;
    msg.pitch = 0.5477941003961743;
    msg.yaw = 0.22638906388234825;
    msg.rcp_time = 0.04756234970103179;
    msg.sid.assign("QZNLSRRDSNOHTGCXAXUMVFCONBFLQYZKIKAVYRPOCIGHDFHUKCBWQAFYJOTEFSYHWRUMLBMDBWDONEXSXCZFPPGPHWBHWBHKIMLVXCNLUUQZPEGFZWJPXKXKUCGMJCAIQOELIDTTWRJTRVMERJLABYJHTOMINEEZALTSOWVOAFJWNDVLFVMYYATPRFVPDYPXWXQQISTAI");
    msg.s_type = 22U;

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
    msg.setTimeStamp(0.5736623633216165);
    msg.setSource(24457U);
    msg.setSourceEntity(71U);
    msg.setDestination(7029U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.6327615076460125;
    msg.lon = 0.5711136755159648;
    msg.depth = 0.05614605337926504;
    msg.roll = 0.17960818703433923;
    msg.pitch = 0.9976783240371792;
    msg.yaw = 0.07304125650159221;
    msg.rcp_time = 0.9472911103842122;
    msg.sid.assign("ULEBAJDCVZLJEYQSNNNUCTIPUOBDMDRAKZXKHDMFEAXJWPGQDBUHZPENWOBEHYOAPSTLUNDRZUZWICGTQVIYIGVKLYGCPOICCECMJVSOYFMNJFCFSNSMVXAMTBEEVNFLARIYTJRFCZHACQXJFXWBXIGARGKPTKHKYQBFLKNMJGAKWQNSQIZSHPYRFOOZRXWMDUYYSIEVLDXTWQFODH");
    msg.s_type = 202U;

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
    msg.setTimeStamp(0.192744277020373);
    msg.setSource(55965U);
    msg.setSourceEntity(224U);
    msg.setDestination(2540U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.11438544408766804;
    msg.lon = 0.44949771977827113;
    msg.depth = 0.7507642822016616;
    msg.roll = 0.9407861923035424;
    msg.pitch = 0.2221090467962612;
    msg.yaw = 0.6321048002928522;
    msg.rcp_time = 0.7557052380866561;
    msg.sid.assign("DQRTZMMOQXUVVNVKNUYRNMUONZRBDQEQAYDNLHJORTSEVBKRFKUHXYPJJAXRBLDXOTFBVKIXISOAKGDVCZIGFEKTCFFJCJGNCOVSLN");
    msg.s_type = 77U;

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
    msg.setTimeStamp(0.18704348669305892);
    msg.setSource(30365U);
    msg.setSourceEntity(228U);
    msg.setDestination(47164U);
    msg.setDestinationEntity(73U);
    msg.id.assign("JFHDBVXZEGLITGUKZUMQWEECHVQZWLFZMXSBIDLXCOKGNUFAYPVTUNGQIMEGGNAPELPOANPIUTMAHRJSSBSCRVFXDXCFJAAOKNNPYARSBMQTHYLQBSNNRGWHSCGZWWBXCHWDTJCIRLUOOZLKYKJPWYIQIVVRMLHDEALRALPKZDWURXCYVOXEMPZYJIQVDFSGYBAJVTUMQWQBJKOZMMHYFESEPTFUCZDXHKXHTNTWIJUIJQGSRBOKNOVFEOKFD");
    msg.sensor_class.assign("ZHDZQRZSQGVQTSEDXLATNPODYJVZIJNBLLCGNOZIDUUJUYYMHKQYSVWEMSEVEDWVTLYOFOAKQNIFAAROGTFQBQPDEWBKHIOPHWGNBRSCVZWAJXVURBBPKMMDTTKFQARKKJGSQLIBGPHTGJWEUUJLFDDXFKCMFYUXVSH");
    msg.lat = 0.027905581429819692;
    msg.lon = 0.4639152862128092;
    msg.alt = 0.9611867784378304;
    msg.heading = 0.46450041052272106;
    msg.data.assign("HKSFRWBIGRTAIACBKUTVEBFOFYABINODGKLVLSKQDZROJJZSKTRGECRSUHMVAIWLFDVV");

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
    msg.setTimeStamp(0.6647227217135453);
    msg.setSource(16770U);
    msg.setSourceEntity(44U);
    msg.setDestination(50842U);
    msg.setDestinationEntity(212U);
    msg.id.assign("CROCLWBABNLPATKXMMHJVRLMCPNBQNERGKJEOTGSZGIJITDPLWUIHDYE");
    msg.sensor_class.assign("ZDLZDYKPEWQCHPPNUEHBENJAPZQTEVBXGGMTRTLOYBNLYZKVMJPJEFMAJGPQSBXWNFXGNBFJDMFTZTJRBRTBHXCHPFKNMUCRAXCCLHREVQAGHUOMCAFDYSOCTLWMZSYTKMIRKNVOOEPVHNWTIFDAOFSRSJCFUWSOTEYVVQDUZZKFIUARKIDRVGHYIGDRJYWZXGQGWLPVSDIAZLEXBLPCXGSNLJKWMKOXIDYWVNUXUAAQUCEOIIOM");
    msg.lat = 0.17293266914328453;
    msg.lon = 0.27148150467457843;
    msg.alt = 0.618776310306764;
    msg.heading = 0.41999325277834054;
    msg.data.assign("OQLJAFCHOTIPFQTTHEHXPZXSOJLVKLZSCGGPECBBACUMHFNWRDURSNHJKVMQNBJDLIYYWLPGJMZAOFNMQUOERRXAUQKDIZFDPACPGBYEIDAVSNOMSLADDUXCLJMUAGNYHFJSTTWRZKGGKNWRIQEZBELXXEIKEKJWVWOMQ");

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
    msg.setTimeStamp(0.6356421392686827);
    msg.setSource(1124U);
    msg.setSourceEntity(201U);
    msg.setDestination(47056U);
    msg.setDestinationEntity(21U);
    msg.id.assign("PLJBOACRKUSVHGXKXMXZWMLXTEVWGNIIANTRZFINSESAQJUNPPMZKGAQBLYR");
    msg.sensor_class.assign("YPTCQTUCGMPTKRVXJLEFCVVDPOTAKQCNLOTDAXYHJTYIGYRTIURQTPPPWNOZGBHDYUSMLNOZBKJFSNGSWVJVHZCANAHOYWCQXFQIWZUSGAEIEVVPPMLACFMUGXKF");
    msg.lat = 0.9264987095819293;
    msg.lon = 0.20828576838681723;
    msg.alt = 0.8582884917888318;
    msg.heading = 0.0530384956942217;
    msg.data.assign("AGVZRZNHWZXRMZMGTFABYOICOIQKKEQUNPWPNJMIBXZEFDALIDLLSIQDHLTGUKSEXUXYIYAAJBVQMSTZFODSNDJJCGTKSOKYYZKGOCBNDHPKLFMBLAWORPBOTEHBCHXCGDPUIECA");

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
    msg.setTimeStamp(0.6896431992507511);
    msg.setSource(33757U);
    msg.setSourceEntity(238U);
    msg.setDestination(1523U);
    msg.setDestinationEntity(49U);
    msg.id.assign("EIBHCDRANSBHCYFHTQDTJLCXVBYDHIRXAQUCXMTEENJRYNGUMUNEAZSEODYXLXRBKEWPTQTXAVSQPDMCCZULTJRWVRDGFMKZJSTPHRAPJBWZUCUWQLSRROAYXLWHOGJSHW");

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
    msg.setTimeStamp(0.21473432007149396);
    msg.setSource(54535U);
    msg.setSourceEntity(83U);
    msg.setDestination(48347U);
    msg.setDestinationEntity(209U);
    msg.id.assign("YVYQDZOEIYWPJDFUXOKENFSACNGRBUXRGLDLBSLMYSQLMOQJNDNVEOFSRASEPBRVBZLJFNOGNUMJECCHOUFCASVMMXVYPHZDCURQXYGPKLHQIPKWKAACTVIDYHWIFILLTUJKFGGGNOTITIDSXYOOJLHFBPWZIERNMHHWZGQJIUMZTSYETMQFJPKOCVKBQNEXGTBGWAZZXUH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HPYQYFMFWGLEE");
    tmp_msg_0.feature_type = 164U;
    tmp_msg_0.rgb_red = 224U;
    tmp_msg_0.rgb_green = 247U;
    tmp_msg_0.rgb_blue = 133U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.641057553860898;
    tmp_tmp_msg_0_0.lon = 0.8445114656474456;
    tmp_tmp_msg_0_0.alt = 0.9555556441137047;
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
    msg.setTimeStamp(0.7445089667690638);
    msg.setSource(6U);
    msg.setSourceEntity(166U);
    msg.setDestination(5976U);
    msg.setDestinationEntity(12U);
    msg.id.assign("RSHTUIMXVMJMPELNOITKYEEEIFFTLECZCLKYXYAPSWTCQIZBNPKDUOJXDSBLTROUFCMRMNQEPFCOUPPUDLQKBMCIIYLRUISVNHMEQSVGHDZWOVQHBRJWGWVNXVTBZSTNFDFZMTZNRHPKTASCUKIDUOWYEAWYLJLFXNAQFXREVLHKWAAOGTPKJBCVAZKQWHZGHSBJXANGVBWPOCQRBJRHGLJYFGYGXMFQHIADVCUZKGRJP");

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
    msg.setTimeStamp(0.9216534723965832);
    msg.setSource(38580U);
    msg.setSourceEntity(18U);
    msg.setDestination(6425U);
    msg.setDestinationEntity(5U);
    msg.id.assign("QRKPPHEEIHUATJAGLVPPQYHIDIOJCBXFZFVNSLWLEWUFWQSRKXVBZGVOUMUQXYEVRZLGRWNRBJBRMLWHNDIJTQEPXUCDPDWHAZGMHTTYWAMHIZUAOFZCOUJEYEILCDMDGKPSGJGIKGCKMNDXFBFJTTSPJROACEXAYYJDSTXQBKBCEXWMIHKNVZRMQAKNT");
    msg.feature_type = 50U;
    msg.rgb_red = 34U;
    msg.rgb_green = 135U;
    msg.rgb_blue = 222U;

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
    msg.setTimeStamp(0.5653115756000884);
    msg.setSource(66U);
    msg.setSourceEntity(17U);
    msg.setDestination(48972U);
    msg.setDestinationEntity(173U);
    msg.id.assign("XLZMIRCNOTVCXQNVBSWFGGFWQXHBJPASKKZCDQTQDPIIUDKKZGPGLEYSUIOOLEUAWOMPOWHEIMAFYWPRJCJAUOHHFHXGACHNHAGVPQUEPYQNTTHOBSMQTOSFUELSKLUMKVRKTQLOPVRTZMRERWZGVDEERZJDFQDJJCYYLUITARWJLXDYCZSRYTYNTCKUPXHKEMZAIAXFZCGFIVKNMVBLLDBVWSXN");
    msg.feature_type = 122U;
    msg.rgb_red = 253U;
    msg.rgb_green = 194U;
    msg.rgb_blue = 236U;

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
    msg.setTimeStamp(0.05732140360169502);
    msg.setSource(7479U);
    msg.setSourceEntity(143U);
    msg.setDestination(7949U);
    msg.setDestinationEntity(223U);
    msg.id.assign("ARIZYJFUOCEMDLTNCSMJBOLSVILMPXWDXSRY");
    msg.feature_type = 246U;
    msg.rgb_red = 177U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 31U;

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
    msg.setTimeStamp(0.42690258647716506);
    msg.setSource(20080U);
    msg.setSourceEntity(203U);
    msg.setDestination(23710U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.773564481538381;
    msg.lon = 0.08511675027380217;
    msg.alt = 0.2454837662759447;

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
    msg.setTimeStamp(0.35427705430006373);
    msg.setSource(32635U);
    msg.setSourceEntity(170U);
    msg.setDestination(5617U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.01466113930998958;
    msg.lon = 0.20487880375251544;
    msg.alt = 0.6964957840207548;

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
    msg.setTimeStamp(0.12814915623754308);
    msg.setSource(42045U);
    msg.setSourceEntity(250U);
    msg.setDestination(51820U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.09319284019336638;
    msg.lon = 0.28126160563372815;
    msg.alt = 0.7940758608464711;

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
    msg.setTimeStamp(0.0845214607289716);
    msg.setSource(28451U);
    msg.setSourceEntity(116U);
    msg.setDestination(37921U);
    msg.setDestinationEntity(164U);
    msg.type = 103U;
    msg.id.assign("HENCLHIBTUMQOGWKGZAKQCLTPMLPWIEPENMUWVHQOUONWVIACZRXPBZJHYBCYIALJRXWRZQXPFJNROHBSLOPACTKBCYD");
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("WJGWFLKUHIMXVLAYNISTJIGUZVOMSUAVRSPCZYDTDURBVMRYIPWCHRGGCTLBAKTOQQOQCOMTFYSDWSBGVGXASGUDKLTKFJMXPALEWXCVRHODEJAIHLPKQFZJCDEKZVXSW");
    tmp_msg_0.op = 155U;
    tmp_msg_0.sched_time = 0.8566051847945692;
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
    msg.setTimeStamp(0.3744915087399471);
    msg.setSource(51180U);
    msg.setSourceEntity(101U);
    msg.setDestination(16265U);
    msg.setDestinationEntity(182U);
    msg.type = 177U;
    msg.id.assign("BTZKPCZSCZZVWAJWYHIQICTHRAREBQRCYOLUMTGPSGNVPRVQNKEJXTYPNJEJ");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 1569344647U;
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
    msg.setTimeStamp(0.013952037622906532);
    msg.setSource(2394U);
    msg.setSourceEntity(202U);
    msg.setDestination(21358U);
    msg.setDestinationEntity(118U);
    msg.type = 39U;
    msg.id.assign("NULSJLSAQFWOVTHPTLVEGOMCCYTDIZYRRQCGGMDFTOWXXTMBLNOWVLEDKUFXVZHBRPPYCYVLNYSLQRRODJINHENMSDCPIQQHAJZHQXIXBGQRKJTWOANUWVWUCYRMUEPFWFTSGSWKJPVFABZRSHCDLDSEBTJUCNHKBMXBDULOJFFBYMACUEWIZM");
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.13179995017574064;
    tmp_msg_0.lon = 0.9489060521770708;
    tmp_msg_0.alt = 0.18346206130651066;
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
    msg.setTimeStamp(0.7462995819717041);
    msg.setSource(43009U);
    msg.setSourceEntity(13U);
    msg.setDestination(10783U);
    msg.setDestinationEntity(105U);
    msg.localname.assign("IFCWTAXBFFPTTLWNNQZZZNJMQMBIRNSPMQEAWBRNBEFXDTKXCFPPLSEKZKXUODPIRDKIZWTKLUWQHODEOBEYCZTMVIKSCJJJKBPHCGAFUEPOAKVUDQDIAHCZSGYHFVBJIPDYFVTNG");

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
    msg.setTimeStamp(0.27702438206148705);
    msg.setSource(30534U);
    msg.setSourceEntity(163U);
    msg.setDestination(5034U);
    msg.setDestinationEntity(133U);
    msg.localname.assign("FNYFWHGDHVTOZFDZWDCSNQDGGRQYUVKQJNEKSKRWQBUSHQBKUNWUVXYXLFKKILEGWMKIRCEBHOTFHZUYJRPELIVDVGQLVAJYPJZQXSHEQJHNAPFLMXCOZ");

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
    msg.setTimeStamp(0.6450722174061546);
    msg.setSource(22963U);
    msg.setSourceEntity(152U);
    msg.setDestination(43732U);
    msg.setDestinationEntity(113U);
    msg.localname.assign("CKPZAMYIIINIMOEGXOWDKEBEWUUPYWFKQTPOEQJHQWZGRXMQDCPAOKBLNVONWETLCTJKXWQMYHE");

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
    msg.setTimeStamp(0.10361759585149288);
    msg.setSource(36605U);
    msg.setSourceEntity(213U);
    msg.setDestination(58188U);
    msg.setDestinationEntity(166U);
    msg.timeline.assign("HPFLTASTEVZZFRBFQXQYKLGEQSMZMPJIDBIHLGVUENIFEHELPDGKTWTCIRPPALNPHROJUMXDHIJPKAMNWWOVMWPJYTBCURSQCPZXKYPVYVGYR");
    msg.predicate.assign("MAYAUJYSATDULPTHMVKBLTHHQRMZUEODHZAINDQXFSVONIBGXULJWPMOOENQTFPFI");
    msg.attributes.assign("ILHFLWVJPTSGCUTQFIDDCJEDKFDNRSIPGSZSAHOLNXNRIJKIJFJTANPBQXYLOWHRDMYRQTGNSGOHVH");

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
    msg.setTimeStamp(0.6733995365844602);
    msg.setSource(9211U);
    msg.setSourceEntity(220U);
    msg.setDestination(26029U);
    msg.setDestinationEntity(121U);
    msg.timeline.assign("TYARPYCQFBGYXXLBHCXJOECUQWBXEISMDZENCOKSTZNDGNNVISIFZLZWBRTSSNAOGBEVWMGNRTDBONGRKHCJTTPWJPRCQMKXAKHAPWRJTTNDGSULRTBDOKUYOUPKHHIYIMVMTYZAMSYFFUUWXLMPHVQOHIDZYBUCOMUQUAWKAZXPESOYLAJKGNREPJLJSENXDKXOVPECRDIZQJ");
    msg.predicate.assign("HNXFWBTROCMMEKJXPOWZYPWGNZTSRMTPIOTDNKABSAUVWKYJKOVHEFIQSCHIMALCRGZAZEXCHTYBOLDMYZLGRPYDFIOBRRPGUEGOVFCPQONDNDRJESECKCFFJOWYUAJMIMWUKJTZNNIJVQQBDMEBKXLYTLSSXPUXVUAIWBIGPYRUHUFLAAZGQLKPCBYHFSQUKNSTCEANHMQDWGXNXWUDPZABWHTOVRFXZLLQTVVSICJ");
    msg.attributes.assign("BDJWUEKPUDKYGNIUPJSNNLGJESLTHJNYFEVUCNQADKZIGTXQOVHACBUXSORFOOVFMXWQPNNAKHCPBIRVBWCYDALJPTDVSWNYMLPZXHI");

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
    msg.setTimeStamp(0.5132414024740052);
    msg.setSource(40827U);
    msg.setSourceEntity(54U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("THCZQCAHWXYXVYJELUNESVWRBKVKSJPBPBCJUJOWHINCXVYWXAJAVASAEKLKOLSXWTTGEMQJGEUDOMSSNGZESZKCMRBMHIEQBVBDEGNPLXFZKRRWWIQRBRZUIYMIQDJCAYXSTIGRNVYFAIPFOVQFHDRJXMFNOAHKGQVOTRPPC");
    msg.predicate.assign("BOKPOBVQHCZDKTPSMGGGSQYYNJPXREASIDQTJXKJSMHSCQJGWEQFNLBPTUHEYNMJOQHLKNDFYXKMOXEIYVZVDZVXQVHKTBWIKDHPZRDRYMYVFZNRNQWLCZQG");
    msg.attributes.assign("BZVNJQTXXWRSZJYPHHYPIWYQLGVWIEEIHQDSWSDXAKIOUVEAYUSAJMZAECALBTPBQBDJAYWHDMORDDGPDTCKGTKSCYPHPHIFULFSVIBFFDRFNOMLCQBPDBGMGXNMXZHIEWAWKCGOUIOROGRQXYKVURTKLKEMLSBXAHV");

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
    msg.setTimeStamp(0.8375871905168394);
    msg.setSource(36652U);
    msg.setSourceEntity(191U);
    msg.setDestination(65496U);
    msg.setDestinationEntity(102U);
    msg.command = 119U;
    msg.goal_id.assign("QVVBQXFXNJ");
    msg.goal_xml.assign("OTCGULZHTHWDVQJNLUWTIUBMBKOEPIRAORRXEHZDEJKMSZEOTOTWDYCBAFYIUKXCHBAFDJRMMLKSAPVCKFPQTDQGMGBWWAMRVHYHQNWVEWKSAZUXYJVVYRYVFHRNKURGEIVBQLQXVXPJKFCHOCXCETDFHMBBUSJGQGJIN");

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
    msg.setTimeStamp(0.08806641268491144);
    msg.setSource(34387U);
    msg.setSourceEntity(252U);
    msg.setDestination(53963U);
    msg.setDestinationEntity(247U);
    msg.command = 54U;
    msg.goal_id.assign("HICTQMZCPSBKCBRFLVVTDBLFUSKQYLOFLRJYBPGUEAEHFBUFQUTOIKOIGSAKHJUIJSQKNEYAGJTKSGIEHWMOUJXYHUBRXZSFUPBMBX");
    msg.goal_xml.assign("IUHNMMYCRSYIVBGDBJQTWCQTLAMPTRILMRQAGKIEKZHMQCVVIKYAUJDAGXFFCDTOFXMHPHMHEWOYFRWKWUNMHXLEXPRSVANNSWOZFFABLJIIQPGEWPOMOGUCJCLSKDSINEKSUYGIKZNXKPTWUXAFQZZEOARZLAGTXT");

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
    msg.setTimeStamp(0.27003958935661243);
    msg.setSource(23616U);
    msg.setSourceEntity(40U);
    msg.setDestination(19458U);
    msg.setDestinationEntity(27U);
    msg.command = 130U;
    msg.goal_id.assign("CPDQCSRXBDFDSRTXGULAEWZGVDQVNJVQPBPJHNHKZEZAVXWELZVMKSHXSCEPJPTWCZPYMNDSVHZSTFBQTRAINMYQKFOUSXFRHVWHAMNUOITGXJGTUUOFQRJMKKRMUAGAQLZSMHMEWFIVNJOL");
    msg.goal_xml.assign("PQOOXPGXWJRLHOAFXFMQCTGCVMWIX");

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
    msg.setTimeStamp(0.5884308001064902);
    msg.setSource(12629U);
    msg.setSourceEntity(160U);
    msg.setDestination(24960U);
    msg.setDestinationEntity(178U);
    msg.id = 65U;
    msg.width = 52139U;
    msg.height = 11802U;
    msg.widthstep = 34062U;
    msg.channels = 59U;
    msg.depth = 139U;
    msg.finaldata = 111U;
    const char tmp_msg_0[] = {30, 4, 78, -12, 110, -33, -109, 81, -123, -114, -13, 76, 3, 95, -55, 26, -117, -47, 12, -37, 59, 54, -113, -62, -87, -94, -54, 125, 35, -122, -51, 34, 0, 106, 97, -43, -82, 95, 23, -14, 74, 4, 21, 109, -84, -107, 38, -36, -21, 9, -68, 119, 101, 119, 39, -101, 111, 11, -12, -109, -4, -73, 43, 20, -107, 38, -73, -99, 11, -14, -36, 105, -109, -91, 105, -117, -117, 61, -20, 85, 20, 106};
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
    msg.setTimeStamp(0.8339189676366159);
    msg.setSource(24113U);
    msg.setSourceEntity(126U);
    msg.setDestination(50270U);
    msg.setDestinationEntity(10U);
    msg.id = 30U;
    msg.width = 24410U;
    msg.height = 13658U;
    msg.widthstep = 16625U;
    msg.channels = 66U;
    msg.depth = 81U;
    msg.finaldata = 103U;
    const char tmp_msg_0[] = {-89, -92, -74, 93, -49, -58, 48, -107, -40, -3, -53, -109, -11, 44, 3, -102, 52, -95, 70, 26, 105, -69, 18, 71, 91, -27, -55, -54, -3, -62, -112, 125, -119, 92, 54, 58, 62, -108, -99, 13, -118, -63, -60, 106, 88, -18, 59, -94, -101, 5, 62, 94, 95, -125, 87, 113, -31, -45, -97, 96, 80, -94, 33, 49, 22, -96, 98, -47, -121, 67, 38, -112, -67, -71, 40, -1, -106, -64, -38, 116, 37, 46, -61, -124, -63, 113, -29, 45, -105, 81, 82, 109, 88, -60, -13, 73, 62, 97, 33, -62, 31, 62, 100, -64, 102, 118, -10, -71, -92, -8, -89, -30, 116, 74, -16, 66, 32, -125, 63, -43, -21, -105, -114, 21, -21, -103, -74, 54, 91, -31, -21, -95, -93, -113, -6, -19, -18, -59, 49, 62, -50, -85, -78, 64, 13, -47, 125, 94, 103, 110, 21, -32, -70, -122, 123, -52, 22, 1, 11, 65, -107, 120};
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
    msg.setTimeStamp(0.012670398566853924);
    msg.setSource(29121U);
    msg.setSourceEntity(78U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(59U);
    msg.id = 173U;
    msg.width = 17286U;
    msg.height = 9977U;
    msg.widthstep = 14583U;
    msg.channels = 48U;
    msg.depth = 30U;
    msg.finaldata = 27U;
    const char tmp_msg_0[] = {-119, -81, -96, -60, -91, -40, 84, -98, 76, 70, 35, -117, -3, -105, -30, 12, -35, 16, 102, -120, 126, 39, 120, -100, -33, -110, -53, -83, 114, -4, -93, 121, -88, -93, 46, -61, -122, 1, -100, -3, -48, 124, -122, 126, -119, 113, -96, -110, -63, -33, 72, -6, -34, 74, -35, -45, 102, 94};
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
    msg.setTimeStamp(0.5382856251995672);
    msg.setSource(20265U);
    msg.setSourceEntity(85U);
    msg.setDestination(60334U);
    msg.setDestinationEntity(164U);
    msg.width = 21823U;
    msg.height = 43355U;
    msg.channels = 181U;
    msg.depth = 115U;
    const char tmp_msg_0[] = {19, 63, -65, -42, 46, -4, 122, -30, -69, -15, 117, 23, 95, -92, 106, 120, 50, 7, 43, 13, 19, -97, -24, -50, 79, 52, -72, -29, -37, 87, 18, 88, -53, -4, 25, 25, 51, -8, 42, 2, -67, 42, 31, 66, 68, 79, 55, -12, 110, 11, -57, -37, -122, -48, 69, 27, -52, 24, 6, 94, 40, 109, 45, -92, 8, 60, -5, -96, -128, 17, -36, -106, 72, 0, -16, 30, -86, 122};
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
    msg.setTimeStamp(0.3849076515913331);
    msg.setSource(54409U);
    msg.setSourceEntity(211U);
    msg.setDestination(62412U);
    msg.setDestinationEntity(213U);
    msg.width = 34191U;
    msg.height = 42595U;
    msg.channels = 21U;
    msg.depth = 153U;
    const char tmp_msg_0[] = {-45, 17, -78, -62, -81, 8, -17, 49, 33, 74, -66, -59, -85, 106, -90, -111, -125, -96, -70, -119};
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
    msg.setTimeStamp(0.7374019686699655);
    msg.setSource(31860U);
    msg.setSourceEntity(33U);
    msg.setDestination(4445U);
    msg.setDestinationEntity(29U);
    msg.width = 34580U;
    msg.height = 24128U;
    msg.channels = 12U;
    msg.depth = 3U;
    const char tmp_msg_0[] = {-44, -51, -117, -98, 10, -11, 79, -11, 2, 20, -30, 117, -92, -4, 62, 110, -75, 70, 59, -3, -97, 9, -95, 104, -109, -48, 31, 88, 74, 78, -18, 85, -67, 25, -113, 70, 51, -93, -76, -72, 125, 7, 48, 91, -113, -27, -41, -55, -86, -16, 15, 103, 42, -61, 80, 64, -81, -49, -126, -55, 119, -63, -42, -91, -92, 44, -52, -85, -73, -120, 14, 29, 25, 25, -32, 93, -95, 26, 8, 55, -42, 67, 67, -5, 47, -101, -57, 23, -121, 102, -88, -127, 75, -109};
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
    msg.setTimeStamp(0.44520993842305834);
    msg.setSource(8718U);
    msg.setSourceEntity(48U);
    msg.setDestination(41993U);
    msg.setDestinationEntity(73U);
    msg.frameid = 142U;
    const char tmp_msg_0[] = {-26, -81, 89, -68, -65, -90, 57, -28, -41, -4, -52, -50, 45, -60, 26, 60, 96, -107, 23, -41, 54, -49, 81, -106, 26, 51, -114, 88, -38, 107, -26, -64, -84, -4, -51, 22, 91, -48, 14, -53, 39, -35, 117, 5, -115, 77, 57, 3, 79, 111, 100, 91, 8, 96, 78, -9, 28, 18, -77, 2, -64, 51, -96, 70, 66, -45, -60, -60, -112, -111, 50, -119, 108, 119, 35, 71, -84, 66, -110, -98, 52, 126, -21, -13, 50, 97, -30, 100, 108, -103, 36, -76, 74, 41, 23, 66, 64, 102, -108, 89, -98, -112, 62, 27, -124, -83, -93, -30, 44, 50, 64, 18, 122, -97, -22, -101, 115, 1, 92, -83, 84, -50, -93};
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
    msg.setTimeStamp(0.16166517889645793);
    msg.setSource(21420U);
    msg.setSourceEntity(49U);
    msg.setDestination(39011U);
    msg.setDestinationEntity(99U);
    msg.frameid = 101U;
    const char tmp_msg_0[] = {-80, -5, 112, -87, 27, -105, 16, 44, -77, 15, 38, 22, 86, 24};
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
    msg.setTimeStamp(0.5750948537667799);
    msg.setSource(55157U);
    msg.setSourceEntity(34U);
    msg.setDestination(19292U);
    msg.setDestinationEntity(115U);
    msg.frameid = 112U;
    const char tmp_msg_0[] = {99, 48, -104, -103, 18, -69, 104, -84, 124, -83, -99, 52, -109, -15, -109, -16, -3, -84, -91, -26, 32, -43, 83, 106, -21, -91, -45, -113, -79, -44, -1, 58, 112, -17, 66, 100, -25, -38, -79, -78, -116, -26, 125, -123, 123, 69, 26, -34, 103, -89, 53, 120, -38, -88, 97, -16, 99, -94, 53, -121, -2, -126, -47, -97, 3, -4, 32, -92, 74, -86, 123, -36, -73, -91, 70, 23, 83, -122, -39, -124, -61, 90, -53, 11, -108, -16, -94, 77, -119, -76, 48};
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
    msg.setTimeStamp(0.049820520519934686);
    msg.setSource(7608U);
    msg.setSourceEntity(213U);
    msg.setDestination(53544U);
    msg.setDestinationEntity(16U);
    msg.fps = 179U;
    msg.quality = 86U;
    msg.reps = 234U;
    msg.tsize = 251U;

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
    msg.setTimeStamp(0.8186694327184061);
    msg.setSource(51554U);
    msg.setSourceEntity(172U);
    msg.setDestination(24577U);
    msg.setDestinationEntity(159U);
    msg.fps = 108U;
    msg.quality = 63U;
    msg.reps = 27U;
    msg.tsize = 44U;

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
    msg.setTimeStamp(0.7398650336756097);
    msg.setSource(60873U);
    msg.setSourceEntity(254U);
    msg.setDestination(60065U);
    msg.setDestinationEntity(244U);
    msg.fps = 40U;
    msg.quality = 159U;
    msg.reps = 175U;
    msg.tsize = 199U;

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
    msg.setTimeStamp(0.7657841400644481);
    msg.setSource(22807U);
    msg.setSourceEntity(60U);
    msg.setDestination(56223U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.8911818389344479;
    msg.lon = 0.790241913083738;
    msg.depth = 164U;
    msg.speed = 0.020162721577307585;
    msg.psi = 0.003427397426137402;

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
    msg.setTimeStamp(0.7812096849861704);
    msg.setSource(28337U);
    msg.setSourceEntity(61U);
    msg.setDestination(27899U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.5738087874816628;
    msg.lon = 0.27230431652519793;
    msg.depth = 85U;
    msg.speed = 0.18079538170151654;
    msg.psi = 0.6384760567637926;

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
    msg.setTimeStamp(0.8710104563180245);
    msg.setSource(37451U);
    msg.setSourceEntity(101U);
    msg.setDestination(63029U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.0725190436687132;
    msg.lon = 0.7858121424195396;
    msg.depth = 70U;
    msg.speed = 0.36749490219868075;
    msg.psi = 0.8075910951517812;

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
    msg.setTimeStamp(0.8430165829535986);
    msg.setSource(25483U);
    msg.setSourceEntity(158U);
    msg.setDestination(53209U);
    msg.setDestinationEntity(94U);
    msg.label.assign("QXKFJZVGHFEUKGGMJMPEZLSPVMDQBOIVNEJJITEIYNGJUBDDKZSUKTUKXPGDZCSOOTCHMXOALUTZVUYVFFOSSCDNMPLGROATEAV");
    msg.lat = 0.9627721108485197;
    msg.lon = 0.7432511981589984;
    msg.z = 0.21420066517415237;
    msg.z_units = 9U;
    msg.cog = 0.4191825156371606;
    msg.sog = 0.7618254286079663;

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
    msg.setTimeStamp(0.8033624468100806);
    msg.setSource(15072U);
    msg.setSourceEntity(165U);
    msg.setDestination(57771U);
    msg.setDestinationEntity(106U);
    msg.label.assign("MBAPEUFQGTGZDEGURVTHZZYZLOMYHRXSYDUJXUUPOUMTEJETBWJFKLZYREZFAUEPRKSLVAOOGZGBMHIYNVDAMIRDKQQCVWLJQOGFMCAMSFXNSKJZOIIMWXQVQBFWDOSJOATPXSWMTSCDRIIOXQVBUKVSDSVWAHGUCDHWINVUHALHRALQXCGQGMNGBLKTPABJFBNFCPXNBIPPRDNTWYERX");
    msg.lat = 0.7753928123792706;
    msg.lon = 0.354199580792951;
    msg.z = 0.984520991910668;
    msg.z_units = 26U;
    msg.cog = 0.5104629384355325;
    msg.sog = 0.9638278605042243;

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
    msg.setTimeStamp(0.9658080919415085);
    msg.setSource(38635U);
    msg.setSourceEntity(18U);
    msg.setDestination(14848U);
    msg.setDestinationEntity(238U);
    msg.label.assign("BGTQNDXVFYKZLSFMXLNJLXRJWKJJIRYAXIKDKMRJYCEXTDWYNKGX");
    msg.lat = 0.576098555302113;
    msg.lon = 0.4009701091787887;
    msg.z = 0.6875902069483122;
    msg.z_units = 184U;
    msg.cog = 0.8187477299285808;
    msg.sog = 0.050657299254892374;

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
    msg.setTimeStamp(0.3272434287045102);
    msg.setSource(138U);
    msg.setSourceEntity(71U);
    msg.setDestination(62714U);
    msg.setDestinationEntity(6U);
    msg.name.assign("CDACZGOKHEOEZKBYGZQNGLYMSMENJRNJEBQRNDTVSLYTCMQ");
    msg.value.assign("LDHVAMFHYCQZUENDCMXSJQGIBTCPDEQOYMAKJLEQJJUCDOJVRLZGNELFJVLZUKRBMQSIUWYGXOGDRIUYXKKAJTMTDHYMWWFJFQVSBHNEUFAFFHMTBRTZORRIGRKVBLTPSXFONOVNXOOYHTZB");

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
    msg.setTimeStamp(0.4208140881151079);
    msg.setSource(33548U);
    msg.setSourceEntity(159U);
    msg.setDestination(6459U);
    msg.setDestinationEntity(50U);
    msg.name.assign("XRENWCGKKBHAMPJSZVCTYKCPLITYIZCLPGNTBYEJXWQLHOHDATSQRQJWRSROZCGCIJYMVIELGUCTKUFOHBOPSQDXCMMTAQFOBPFERDEZLPZN");
    msg.value.assign("PDDTAPBFAPLAPILTKPSIZGLIKEJRUKPCQJHBTPMOMQRZVJUZEAHMAZTEGAKKQWRXNYBNCQCMVHPLBNM");

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
    msg.setTimeStamp(0.5652700675500237);
    msg.setSource(24022U);
    msg.setSourceEntity(45U);
    msg.setDestination(33747U);
    msg.setDestinationEntity(106U);
    msg.name.assign("WXIQWUTRKQGVYWNJYVCNTJD");
    msg.value.assign("QJENZRZYYVAESIKLXPYOCPCQYXVWONLPSOQBHBRFJVFRCLATNKSRNKMWJBHGTAPQRFGNWVOHKDHMYBLSMTCJDDKFIMVYKPQWXAIPEZTUKURZMOWTDGBHUWFRQLWTJXJXNBKCEHOVEISUOGSQOWRBSBMUEUXJCFVXYTOGJSYZEUSWJGWLAQUKHCAQGMBADYIMXCJPNZMN");

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
    msg.setTimeStamp(0.9424840042562743);
    msg.setSource(5605U);
    msg.setSourceEntity(172U);
    msg.setDestination(19501U);
    msg.setDestinationEntity(10U);
    msg.name.assign("VCNQDFYTJUGQLVBAFRZULFFZBSWTLAKCZJHDXOAFVIRLGWMSKMSAHDPPPPFEEAPNHEULM");

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
    msg.setTimeStamp(0.9183953986150666);
    msg.setSource(48422U);
    msg.setSourceEntity(125U);
    msg.setDestination(30882U);
    msg.setDestinationEntity(170U);
    msg.name.assign("CPLOSPAKDEILDYMRSAYMTBVSKUCLWTFDYOKPDRILJRFAVOJBYZOH");

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
    msg.setTimeStamp(0.8778447697442346);
    msg.setSource(60510U);
    msg.setSourceEntity(76U);
    msg.setDestination(50966U);
    msg.setDestinationEntity(250U);
    msg.name.assign("XMUHSCDSSGKBYJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KECSHAHQWZWELZQTFMHSQKZURDLF");
    tmp_msg_0.value.assign("HWBFMKHWNWULIPGFCGIYRUVFSWPQOJJPPSNYLIBPEKSZACSGYGFXZQTKTFXNNEWVSMWXPKTSCUBRQKRXXTWONDNAMJCNOYEFASCDJIROZACQBLFYEPZLVJXGJYPLAFMGAHMYDKFLJBVOAQIURYUHWGBOUQRDJKDLQSPNUUXHVRVMGEEXZIEDHHMGOACPVHJNELVTVCTXZLGHMLZQQYOUOJETDIIWTKFXMBT");
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
    msg.setTimeStamp(0.00037898997243512866);
    msg.setSource(11983U);
    msg.setSourceEntity(39U);
    msg.setDestination(28766U);
    msg.setDestinationEntity(136U);
    msg.name.assign("NGBXPEZFHINGYIJLGEHFDTIWUYSKQTPRBKCANBHTEOYRFXBCRBFITCGMLHVIIZQ");
    msg.visibility.assign("YVRMWLFSUIUDWFQTLGBHOZEYAEUDYPIOACPKTRAFQPMVCWMXIUSPGKQREHLGEQZOGLQCKHDKHDUDLPCQJNIROPRCVNKMFTJVGRYATMJSEANUJUDLZSWJKDFDIZHAPXOALMOXMXUMTWIYFZTAEPBNVBPSVBCBFPBFFZSOYWXNSOYUSYWKJLVHRNCRHXQGELOZWGDCATGBYOEVMRHIAKIXHUESIGXJXRCMTTNQSEYQCZKNNNJKWJITVBJZBZ");
    msg.scope.assign("ARPFFFWUAPXMVKJIHNJLQFEATIIMGLZQJNDEQKPJASEZBDMDTNRVYHLPYJCHYEQLACRTNMRZUBGG");

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
    msg.setTimeStamp(0.0460995107140767);
    msg.setSource(52892U);
    msg.setSourceEntity(135U);
    msg.setDestination(44413U);
    msg.setDestinationEntity(175U);
    msg.name.assign("JJZTYECPWCDUSHKFFHZXMCAIDYKPMMDBOAPEYAUEHPJFCLJIDFMKHTVYQABEPQPEGWBLYYCNZFDBWTGPXGOUGGSCTXWIXABQRSLOLMRKZJQBNOUZZJ");
    msg.visibility.assign("EKXSINICKCFTWHUKCHBYDQPGNMRENUOIJPGRMVWLVTPGRFAVBXSQPGNKPMOHGVLYOWWYUIBNPADMOMXDQYYGGIBSDHZJRUTMXZOGWTTSWLSEILYJKXKHEFMRZJM");
    msg.scope.assign("OTTWDLFXSYFNRQPFVTUPZGTIRGCNAXERBTCXSCPFKQQPRWSYFNXAPSAHWTCEBLTHNXBAGCQBZYTYKOLEKKHGGBQFTCBWFMFZVZZJBUQHBXLODJVOLZMKLWNAYSDOEMINXJLVYYVMZDGHQULGHHUICUKOOKPPZJARAKMXJGBUDWEDSCIQJPNDHGWYMWLPEXDWESMVBVUDXSRAEKZPJI");

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
    msg.setTimeStamp(0.7908342587576154);
    msg.setSource(52234U);
    msg.setSourceEntity(39U);
    msg.setDestination(39529U);
    msg.setDestinationEntity(71U);
    msg.name.assign("PSPPYGICXSAFTFOUMNLKHYDGRQETZAWFWBQHQMHNPROSRHIQEEPKGVOOARBFQYUUXBEDWYZULVOWGTPWLEAGPBXVBHCJVCLESSCMZDQGCNTWIKGXIQKNHIEQJSVSTVFCJXRFYQUWROJAPRUTLHMKZIRKDJZCLAFOCKZYFJTYUAZDPLDFWAXJXMONRUJTZWNCNSUHEWCHYIGOYFELMNLJMKB");
    msg.visibility.assign("NTEGTUPWGFPBBGXTLECFXSBCULFVBGBROQRTYYLDSZNMCKBPAUHUIZJYDIXOWJHYIYEPMWNUDZJMQLYSSETMZCINHCDBEQLODIFSVYKOODKOVVXSEGKLHIQNPZFXWSCXFASPQCHZMIJBZWPXASJLNJXGVTRAOAWQCAQMUOKRBMVVIFQRUFRAMKYFRNORFNJPDIDYWLCVHXNEUCRMJYKLWLWXSHVVUWETEPPAURBZKGQQNOJK");
    msg.scope.assign("UJKGQFIRWYIWJXQONNJBPIXCOKFYAVLIKDGXRRGZMDSIXNNFDDQMCKTUTXCQUZLHDUNSSQEPGDVLTMFURPOV");

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
    msg.setTimeStamp(0.7538150894397683);
    msg.setSource(23415U);
    msg.setSourceEntity(56U);
    msg.setDestination(4759U);
    msg.setDestinationEntity(190U);
    msg.name.assign("CCOGIMBBPDXGQCXKZMCCNGUEGJDSSWNVESVMOVYEKYXHIPOACNJLTIFIILMWFMHLAARU");

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
    msg.setTimeStamp(0.8542830335848027);
    msg.setSource(41244U);
    msg.setSourceEntity(68U);
    msg.setDestination(20462U);
    msg.setDestinationEntity(51U);
    msg.name.assign("MWOHSXJKKFVEQWFUBELHKGFTBRPHIICPQYCMQNCZBAFQHUFWYPCYLWEQGRXGNMRLRDFFOAWZJJONGCNBCUTOANXTO");

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
    msg.setTimeStamp(0.8193885044461119);
    msg.setSource(3872U);
    msg.setSourceEntity(229U);
    msg.setDestination(57095U);
    msg.setDestinationEntity(63U);
    msg.name.assign("LOBPOVDIAKWODMTXFJTCUSFEVBVWNQFUKKSYWDKZFXHTOHGUXAIZNGPROOTMOSDFWJRXGFZAIBORAQIYGNENEBZVYHCMJSPZVTSYWBZEWRRSKVPHQ");

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
    msg.setTimeStamp(0.5756358331599399);
    msg.setSource(19118U);
    msg.setSourceEntity(19U);
    msg.setDestination(63855U);
    msg.setDestinationEntity(169U);
    msg.name.assign("SIJBFAXLQKRGKZFTZDBPPOIQCWEYLLRMYNHUOVKOGVQCECMGFEGHQYPFZGNLRFHHQKKNQDWBDCRGVGMNMODOWSNOEIOTCUILRZPAXXEWUEVIJSDGKNTXRNXLPWSCQFKABSXTOMUIOXRLFSXBADMDJUWPUVDBJYJKJHMYATHRTTZVKJWCZJHZFHWTHJ");

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
    msg.setTimeStamp(0.46877081031555257);
    msg.setSource(21261U);
    msg.setSourceEntity(108U);
    msg.setDestination(32628U);
    msg.setDestinationEntity(118U);
    msg.name.assign("ABGSDURPIVEQINFRLKZIHJPUHEECDSGYZGMTQEJVDCJNKZW");

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
    msg.setTimeStamp(0.05694165758978331);
    msg.setSource(4435U);
    msg.setSourceEntity(253U);
    msg.setDestination(33774U);
    msg.setDestinationEntity(147U);
    msg.name.assign("WDPRZRAJLYKSOACDNYCMCTJSFVAIJHJCGPIYHQRSDYTFQYZZRLSNLGMDWCROTKNUXUVRROXOPKAKI");

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
    msg.setTimeStamp(0.4265871056980538);
    msg.setSource(63853U);
    msg.setSourceEntity(138U);
    msg.setDestination(42828U);
    msg.setDestinationEntity(17U);
    msg.timeout = 3907393367U;

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
    msg.setTimeStamp(0.6622393638809745);
    msg.setSource(3628U);
    msg.setSourceEntity(91U);
    msg.setDestination(60180U);
    msg.setDestinationEntity(219U);
    msg.timeout = 4231463395U;

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
    msg.setTimeStamp(0.48815542581894933);
    msg.setSource(26872U);
    msg.setSourceEntity(205U);
    msg.setDestination(21635U);
    msg.setDestinationEntity(4U);
    msg.timeout = 2485986465U;

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
    msg.setTimeStamp(0.7289259125453098);
    msg.setSource(32260U);
    msg.setSourceEntity(142U);
    msg.setDestination(23536U);
    msg.setDestinationEntity(210U);
    msg.sessid = 827882733U;

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
    msg.setTimeStamp(0.44165740878516246);
    msg.setSource(27329U);
    msg.setSourceEntity(91U);
    msg.setDestination(42350U);
    msg.setDestinationEntity(153U);
    msg.sessid = 3491950140U;

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
    msg.setTimeStamp(0.4414589007098484);
    msg.setSource(29597U);
    msg.setSourceEntity(185U);
    msg.setDestination(43270U);
    msg.setDestinationEntity(114U);
    msg.sessid = 1227011946U;

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
    msg.setTimeStamp(0.7563868329484702);
    msg.setSource(36909U);
    msg.setSourceEntity(42U);
    msg.setDestination(40359U);
    msg.setDestinationEntity(29U);
    msg.sessid = 3069868062U;
    msg.messages.assign("BKXQRPXXOPVVEMTQYMKLOHWVFDAGECHVLFHGYARGFJEJBRWYKJDFFWAUKSNNMZLTSJYDSBBBOIRUAMZ");

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
    msg.setTimeStamp(0.8334884872172305);
    msg.setSource(17670U);
    msg.setSourceEntity(78U);
    msg.setDestination(63557U);
    msg.setDestinationEntity(118U);
    msg.sessid = 1653800000U;
    msg.messages.assign("OLIINPYDZZTQW");

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
    msg.setTimeStamp(0.17618520546360816);
    msg.setSource(56700U);
    msg.setSourceEntity(182U);
    msg.setDestination(63699U);
    msg.setDestinationEntity(68U);
    msg.sessid = 618060572U;
    msg.messages.assign("DGPJJGGNICPLCROFESXXYKWDYMVSFNPAVXBNKRGLCWODMJZCRPUXBQJTTWORAYQPDLSJAYZKRTTVACISYCWTCEJUBDOEWQJHWZNUTXMBVSICJEHMTGKKHRYHIKBJHGSDFAXCQAJIYHDLNSSHOLKLIKVZMYAMITPVIHQWBVUNULFIMAZ");

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
    msg.setTimeStamp(0.5051202255136381);
    msg.setSource(40869U);
    msg.setSourceEntity(201U);
    msg.setDestination(47221U);
    msg.setDestinationEntity(91U);
    msg.sessid = 3583438624U;

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
    msg.setTimeStamp(0.22707307506931318);
    msg.setSource(21444U);
    msg.setSourceEntity(127U);
    msg.setDestination(31690U);
    msg.setDestinationEntity(167U);
    msg.sessid = 2234405729U;

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
    msg.setTimeStamp(0.41610497242008915);
    msg.setSource(27612U);
    msg.setSourceEntity(246U);
    msg.setDestination(35657U);
    msg.setDestinationEntity(130U);
    msg.sessid = 1456909684U;

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
    msg.setTimeStamp(0.33674842253913195);
    msg.setSource(12779U);
    msg.setSourceEntity(195U);
    msg.setDestination(33371U);
    msg.setDestinationEntity(198U);
    msg.sessid = 600597619U;
    msg.status = 234U;

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
    msg.setTimeStamp(0.893402495551562);
    msg.setSource(11987U);
    msg.setSourceEntity(251U);
    msg.setDestination(35894U);
    msg.setDestinationEntity(114U);
    msg.sessid = 3950935830U;
    msg.status = 28U;

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
    msg.setTimeStamp(0.9010877365510258);
    msg.setSource(60833U);
    msg.setSourceEntity(120U);
    msg.setDestination(21812U);
    msg.setDestinationEntity(247U);
    msg.sessid = 1044978169U;
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
    msg.setTimeStamp(0.5193865342268192);
    msg.setSource(58045U);
    msg.setSourceEntity(114U);
    msg.setDestination(23234U);
    msg.setDestinationEntity(59U);
    msg.name.assign("DTOKPBHXAGNWVAHLBRDUABJZPUNEOSNCVWPKCJWTLADGDUHM");

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
    msg.setTimeStamp(0.8435321175292324);
    msg.setSource(15855U);
    msg.setSourceEntity(150U);
    msg.setDestination(35014U);
    msg.setDestinationEntity(117U);
    msg.name.assign("SLAJTXQCOLDFGAWEOMSYSJFNWDWXXWZFZGRGAMWBPHOLNYRDADCTJBGKRNJKETLJDPVKBAKXEJ");

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
    msg.setTimeStamp(0.7282414278948194);
    msg.setSource(52898U);
    msg.setSourceEntity(69U);
    msg.setDestination(59951U);
    msg.setDestinationEntity(113U);
    msg.name.assign("YJGIVSSFPNZKQEJOEOTRTJEVWSMYSUGAPMGUFHTRRSEJBUCQMASOKXKTWWKJOXAZDZVCAYHKJFDMKSYKWHTJNGNPHNBQFFKBQZYMVZVVICEXLCBAXPWLQMTWFIXIYCHXECQORLAYBWDMCVCPTEPEFYUTABRZSWGIXLRWHAFTDNQPLNDPUZLTD");

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
    msg.setTimeStamp(0.7752881061898432);
    msg.setSource(40224U);
    msg.setSourceEntity(177U);
    msg.setDestination(13411U);
    msg.setDestinationEntity(192U);
    msg.name.assign("OGTEGVUOGKTIGQSHYYDSQFZNOTPJQCBVCAUZRFFJWNVNXZILCACFUTLJCHCIPETLMPQRFUEKLGHKDUNWKIXYCKBVEWYVWDBPOQGQXZAMWSCJSQEFZUJWDMIPXZKPHLFYEISNISJBANSXLTAGXZHAPDJINDYKLOCOLMHSBZCPJDNRQWFRJHLMXVEIHJEKYYOVTWOWFUNDIBRO");

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
    msg.setTimeStamp(0.3087396092276531);
    msg.setSource(62551U);
    msg.setSourceEntity(9U);
    msg.setDestination(12390U);
    msg.setDestinationEntity(36U);
    msg.name.assign("JWDEFOQXSYEKTAMQWIUHNVDCJXXFPKHI");

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
    msg.setTimeStamp(0.20417663684361642);
    msg.setSource(33579U);
    msg.setSourceEntity(160U);
    msg.setDestination(36581U);
    msg.setDestinationEntity(148U);
    msg.name.assign("WHAFVDMNXNEXOFGBJBZKAISPAEWSENWLQGMYSRWAMYPLAAXTGHEQQIXKTBHWYXXATKUEIFULBQHJOUHQDCRUOGDOW");

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
