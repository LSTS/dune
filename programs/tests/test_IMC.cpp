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
    msg.setTimeStamp(0.12824559050629514);
    msg.setSource(62216U);
    msg.setSourceEntity(89U);
    msg.setDestination(31253U);
    msg.setDestinationEntity(130U);
    msg.state = 158U;
    msg.flags = 163U;
    msg.description.assign("BSYGGXNKMWUWDPZGVLYVQHDEQLOQLZSKBCTNWEJYZHJJUQNFOKAKMFZGMIFUPMDSOCOIYPXDHCFKFXPKNLDSQINWSZEKIDTGYCNFGPFPZSUHNQ");

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
    msg.setTimeStamp(0.16869084726965677);
    msg.setSource(55661U);
    msg.setSourceEntity(68U);
    msg.setDestination(4534U);
    msg.setDestinationEntity(195U);
    msg.state = 251U;
    msg.flags = 162U;
    msg.description.assign("QLOLCHWLGCOKNHNCGEEHRZSKJEXVKX");

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
    msg.setTimeStamp(0.13610619590442075);
    msg.setSource(3381U);
    msg.setSourceEntity(252U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(137U);
    msg.state = 168U;
    msg.flags = 78U;
    msg.description.assign("WOWBUXCMUYSKXQJPKPFYDTGKSQAVWSNTCSUJPLRROFJZCAQNXEQZTEDNOAHDXFIJYTDLYHKNVHSVSAUHBGYUGQNLEIZRXNBGMTZUGGIBDIXRPYXEMNOGWWTVOBOTRMOFMREBWXNEIZ");

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
    msg.setTimeStamp(0.03820563230287133);
    msg.setSource(63747U);
    msg.setSourceEntity(31U);
    msg.setDestination(42103U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.5991495093245601);
    msg.setSource(50061U);
    msg.setSourceEntity(13U);
    msg.setDestination(35773U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.9954677173964729);
    msg.setSource(27410U);
    msg.setSourceEntity(195U);
    msg.setDestination(27523U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.9307591562592195);
    msg.setSource(9964U);
    msg.setSourceEntity(142U);
    msg.setDestination(64861U);
    msg.setDestinationEntity(36U);
    msg.id = 158U;
    msg.label.assign("PYFBNVXWSTKCHKKTRDGXOCSRGCKFAEILPEXUQMWKQGOUDWNZQEYPJ");
    msg.component.assign("WVAZMVXFVONTAXDRJXADGHFTLNHEXUDSRNKTRUHWVVWGMRRETAQKRVOUIQBMOEJEJHWKIYENGFJHULIMLGPBKE");
    msg.act_time = 24689U;
    msg.deact_time = 37614U;

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
    msg.setTimeStamp(0.98006347748004);
    msg.setSource(4678U);
    msg.setSourceEntity(39U);
    msg.setDestination(14206U);
    msg.setDestinationEntity(167U);
    msg.id = 131U;
    msg.label.assign("HDWEAAIGKRZUDSEQZCHELSZKASREOCOXDPSRTGMNTXOUCXKPCDZYQONNXFPUKTUQXR");
    msg.component.assign("PQKZRDMHMQCQIHOXXCHNPFFQSJYWLWVFOLMETUDAFTPEEXMDKVEDYWIOAORXKJERFNWUOUINAWGPXVKCNDVANGSUDJCOHLGYDZZIEJGHVYSVSMBANSFSXRKXJDD");
    msg.act_time = 1083U;
    msg.deact_time = 58506U;

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
    msg.setTimeStamp(0.9417614886672488);
    msg.setSource(23613U);
    msg.setSourceEntity(60U);
    msg.setDestination(8597U);
    msg.setDestinationEntity(63U);
    msg.id = 166U;
    msg.label.assign("QIWGMLBFJEILZCWJUHXIAZDTXVPZTWNFPCBFBQRSIEEJWKHCEUQRCYORNTOTHXYWJXPSDLUBSAHOMCGZIEJXGDEONBNWJGDII");
    msg.component.assign("BKCOYZRBREMJDLOUETJPEAVAKQNHGNHIJPOVHJAXJNFWBIPOUWXIXIZSOYWAGSCHYYNFFCIKZYLMZSFOTYXQBBDFXQNAEZMDSGUHGETOPEQZSIEBPJEXUMCTQPAKSTAVOYFGLBTZRSCLBMKREKKDLQHIHFMNIRMVJVTGEGIQYIQW");
    msg.act_time = 60985U;
    msg.deact_time = 11142U;

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
    msg.setTimeStamp(0.039249688975506736);
    msg.setSource(53077U);
    msg.setSourceEntity(75U);
    msg.setDestination(35017U);
    msg.setDestinationEntity(244U);
    msg.id = 45U;

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
    msg.setTimeStamp(0.23895955848114125);
    msg.setSource(42834U);
    msg.setSourceEntity(196U);
    msg.setDestination(52173U);
    msg.setDestinationEntity(240U);
    msg.id = 31U;

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
    msg.setTimeStamp(0.4374557987824379);
    msg.setSource(14964U);
    msg.setSourceEntity(103U);
    msg.setDestination(33003U);
    msg.setDestinationEntity(35U);
    msg.id = 132U;

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
    msg.setTimeStamp(0.4269174280179624);
    msg.setSource(34327U);
    msg.setSourceEntity(142U);
    msg.setDestination(55888U);
    msg.setDestinationEntity(234U);
    msg.op = 156U;
    msg.list.assign("PBSPDHMXFYYRBLSTKWUEIDFJLNRTVIMFFFKSLQHUKAWMJUUIJPINZESNMVKJXYEQDOXOGPDFHTBNXCSOWSSAQGGAWCRDMTYUQMMVBVXWTVOKQPXYUCBPNDQHQZHMRBNZMCRYNWRTBAKIZLCHZNDJZFOOOEGEJLJUKZXDCLJCBBTYSQTTVDERIYNJQGGLORVLAPUECKWAZ");

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
    msg.setTimeStamp(0.1494453490902068);
    msg.setSource(5098U);
    msg.setSourceEntity(187U);
    msg.setDestination(55296U);
    msg.setDestinationEntity(168U);
    msg.op = 132U;
    msg.list.assign("DQGMJFRXWHLYGLPDOOFFEIXDOKMSZZKQBMEUBKNUQRBGTUGARDEQBYYYTAUCIWFRBVLIAPSTWNPSGRXKQNJETYTBJAIVAWOBXDCOXPGIOHMAEMGUVNIQSDTBCVWQPGZWLQSRNSSTVAHZPZLILXRAGKWFHRAZECFTDUMM");

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
    msg.setTimeStamp(0.16152172672613285);
    msg.setSource(23565U);
    msg.setSourceEntity(247U);
    msg.setDestination(65079U);
    msg.setDestinationEntity(78U);
    msg.op = 198U;
    msg.list.assign("WKPDDOQUKCNXWMWCZOTQSL");

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
    msg.setTimeStamp(0.2822475618232235);
    msg.setSource(3726U);
    msg.setSourceEntity(223U);
    msg.setDestination(44566U);
    msg.setDestinationEntity(134U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.35747441039542216);
    msg.setSource(19332U);
    msg.setSourceEntity(248U);
    msg.setDestination(10549U);
    msg.setDestinationEntity(140U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.622803599817757);
    msg.setSource(7130U);
    msg.setSourceEntity(6U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(84U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.3373402425538835);
    msg.setSource(32013U);
    msg.setSourceEntity(83U);
    msg.setDestination(50705U);
    msg.setDestinationEntity(96U);
    msg.value = 68U;

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
    msg.setTimeStamp(0.09894573240003823);
    msg.setSource(34904U);
    msg.setSourceEntity(226U);
    msg.setDestination(4723U);
    msg.setDestinationEntity(193U);
    msg.value = 69U;

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
    msg.setTimeStamp(0.9370677059071348);
    msg.setSource(57706U);
    msg.setSourceEntity(93U);
    msg.setDestination(21943U);
    msg.setDestinationEntity(46U);
    msg.value = 221U;

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
    msg.setTimeStamp(0.7103567486857704);
    msg.setSource(45855U);
    msg.setSourceEntity(21U);
    msg.setDestination(62508U);
    msg.setDestinationEntity(201U);
    msg.consumer.assign("KSPTBYQFOFEOMOSYAKHTBJQUKKBVWMZGPYKNIYWRVVOILDZJRMWLFZUSKBGOKIARJLEAGTLRLJVANXWPXQGJIRGITIBNMGMGUQNJYFXDCTAFPJMESUVQPXMPUFVGTFLQOEUGPQRVSBKWXFYNHXCCOZCJDDMJITQJTR");
    msg.message_id = 48635U;

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
    msg.setTimeStamp(0.3512513160087385);
    msg.setSource(58521U);
    msg.setSourceEntity(79U);
    msg.setDestination(58412U);
    msg.setDestinationEntity(168U);
    msg.consumer.assign("MRKZRFUHMCCXXNTOMUDLLJDLPJNPOFYBBMTUCOWSEWGKYIKXPFGA");
    msg.message_id = 16752U;

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
    msg.setTimeStamp(0.9325975373535935);
    msg.setSource(33521U);
    msg.setSourceEntity(85U);
    msg.setDestination(57115U);
    msg.setDestinationEntity(228U);
    msg.consumer.assign("FJOVYZCEGNUMTIFDKMLGCEBYJGSLFYYOMKHMIXRVRDSSUUIIVGGZCBUHVWRNQCRHXHKFWBJHKYRBOPPAZFRYLWTUAXQGJIDJHIOXZU");
    msg.message_id = 54430U;

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
    msg.setTimeStamp(0.9444127308813924);
    msg.setSource(36251U);
    msg.setSourceEntity(121U);
    msg.setDestination(41245U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.3932826978411802);
    msg.setSource(52118U);
    msg.setSourceEntity(177U);
    msg.setDestination(50163U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.8312819038734827);
    msg.setSource(53829U);
    msg.setSourceEntity(59U);
    msg.setDestination(53161U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.47845359165683266);
    msg.setSource(33085U);
    msg.setSourceEntity(66U);
    msg.setDestination(18703U);
    msg.setDestinationEntity(5U);
    msg.section.assign("RWJVXIBOCGQTOJCQEUZQZZSCRRVIGZELLZQYPVOQJXKEJGBDLXXGLXYGUCHVROPMOQBOMKPWZCHFTYSVSNROAFJDAQWZANTBKSDZFYETXANFDIRWIADQNCNKPMEMEVMUILYUKVVDOTAWPUTOPIZBXRAWIAUKFGBLNFITPRPVPKWSJTHREYMQEBHGYSCHEKLVLLGPXFHBTBSJKBUZKSFJMDDWSIJHSOYACWHLUHAQXNHGUJMUXFYWDENMCNRDNY");
    msg.param.assign("OXJSNXYPXNOVOTWHJEPRBHQTZIVUUKPFCPNXQILWZJMIFKKNRSIXKKDJWFIDCAHGXYLTFUVYAUHMNIQLFRJWACRYCTLKASMMMYGNMJTAVESYZBEZOJQFXLTPRQAKOYATCHDFNREBWGPGY");
    msg.value.assign("ECLZQYWIYTRMFYKJBHUCQQNEYSNXZETBAVSRVGUAFOHWXBHNIDOUFZRUGDFIDYKLDXTDAGAWLXXJRGMDMRXPQOISZYURNRHTMTGGAPUQTWQGKDLQNEEIBIVXNJQTGYCRDPSCCEFKCIHNPYLBFLBUSKMFSMUYOHABKSJURTAJVJVVESZIHMGOJLWEBOJTQHJKDZACXXVQPWVFHESCVANMCORITFVLWZO");

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
    msg.setTimeStamp(0.08441387463500705);
    msg.setSource(62129U);
    msg.setSourceEntity(48U);
    msg.setDestination(37208U);
    msg.setDestinationEntity(227U);
    msg.section.assign("UATOCYJLRLACSLWDEIBFOUNSKIDERMUVZERYIEILYRCIMGQLUVS");
    msg.param.assign("RYNAYZCINQSYOZGUYNOIQDMXSWLYRGJDKXZQIRKSIGNVLZVYKLJHCBHYPZATPNIKLOTYHWPJRLUJGDIKCQABOBDJ");
    msg.value.assign("KOMJNKIXMTOEAWRUJLGJNYOOMVDPMPZAJVILDOISCKGYMQFCNZLFYIGZIQUWK");

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
    msg.setTimeStamp(0.8075763717516535);
    msg.setSource(36310U);
    msg.setSourceEntity(138U);
    msg.setDestination(63151U);
    msg.setDestinationEntity(167U);
    msg.section.assign("APVLWKECKCHKCSORGYAOCGZSVBVRMLCXXKABRTIPENWXYYGDMWBWLTMGILQCQFYVCBSUWUGEDDBVDOABSWUVQKRWGZXEQVRFMON");
    msg.param.assign("LYEEKZPHIAPBIJRZWONUOGCTQDPWVUSVWZROJJIQFPSCSYIBACTTIROJGIZQKNHOOABRDKTXTCANBCGNFPWFDJLYWCMGTBGNFRUPMBPQZBUVKMZGHFXLKVDXYWMAUHNDDSBLQLEFMPVZDEAMTIGNWGJLSZPMOHIOQSLYYBDUBDQSAUELWKSVSHXHIXSHRRELMAXMWKFHXEYKUYFWLMQVFKVIFPANRERXZNTJNDVHCUZVYXCQJ");
    msg.value.assign("CVMUBRQABUXFBXPOIJIMTUKLIL");

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
    msg.setTimeStamp(0.5326417575693235);
    msg.setSource(10916U);
    msg.setSourceEntity(68U);
    msg.setDestination(815U);
    msg.setDestinationEntity(151U);
    msg.op = 205U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("BDTVNUIOPPJVUOIVMBSOKTBHGUKDYAPDYJQHXWCSTFSEJWZMLUHDRKBBQXXXHNAMZBCFYBOYPGGRSTUZ");
    tmp_msg_0.param.assign("BJIZRQCWQMBQRUCZJEIUKMSVVLHCMHTFOAECZKYLLLLYBWBFEPLJRCOYGANMWBNCZJTFLQKOPMFPIAIDZQDTVZSOAXUSJVRUSIBDTOUGWOFPSQZVEHEYRJIXXHACXIMNBLMNEYHKWUADSGPFXYWBTOYZEMFMUHNRXEIULYDHSSXEGPGQSKRIRKTONDZWXGPFPCVINBTBYKDUPGEDOKJWHYDAKVKJV");
    tmp_msg_0.value.assign("TQPSOYZTLPVNCQMLGQXWIVUXARFUNLPKLUFZQCTEWWTLSBOQPHMXLDEORUQZHGSEOHJZNHAPPXVFDUDNXMXPVK");
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
    msg.setTimeStamp(0.7409681363970739);
    msg.setSource(12595U);
    msg.setSourceEntity(174U);
    msg.setDestination(59653U);
    msg.setDestinationEntity(240U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.18034062891269664);
    msg.setSource(53733U);
    msg.setSourceEntity(54U);
    msg.setDestination(24956U);
    msg.setDestinationEntity(146U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.9631487599401001);
    msg.setSource(37503U);
    msg.setSourceEntity(6U);
    msg.setDestination(63057U);
    msg.setDestinationEntity(142U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.9484461242330938);
    msg.setSource(32836U);
    msg.setSourceEntity(206U);
    msg.setDestination(42650U);
    msg.setDestinationEntity(128U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.8471346899053568);
    msg.setSource(18475U);
    msg.setSourceEntity(29U);
    msg.setDestination(8822U);
    msg.setDestinationEntity(139U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.9371318068338559);
    msg.setSource(34786U);
    msg.setSourceEntity(203U);
    msg.setDestination(56123U);
    msg.setDestinationEntity(232U);
    msg.total_steps = 76U;
    msg.step_number = 216U;
    msg.step.assign("URVBHICAYIMHWKGEHQSZDAQMLOAHJJNFNWKHCCIUOGLPV");
    msg.flags = 138U;

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
    msg.setTimeStamp(0.15048063190528715);
    msg.setSource(50438U);
    msg.setSourceEntity(226U);
    msg.setDestination(37223U);
    msg.setDestinationEntity(125U);
    msg.total_steps = 100U;
    msg.step_number = 153U;
    msg.step.assign("HAUBBXIJQSYPMJZKTZEOKYUDGABVZYSTFLZRWLSKFAESJUAMPSKYUMOYIJURQKRLLQAQXPWJUTNMXXJLRISJVFOIJGKBDPPOZGQDIRVFNXTWUQHGFWBXYITKIPOEAGCMGFRFLAYBCOHZGDYVBNFMGAAWSBNBOXLHVXNRPWZHWRZXQQTDSWUMIFDRNCHXFONDIQVEMEPAUPDICMNEGNZJCODLKDECWEQNTOCTHTKZWEEPVLSVYLKBHHGCCJVCRV");
    msg.flags = 0U;

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
    msg.setTimeStamp(0.8689178178848959);
    msg.setSource(32159U);
    msg.setSourceEntity(234U);
    msg.setDestination(25401U);
    msg.setDestinationEntity(0U);
    msg.total_steps = 68U;
    msg.step_number = 250U;
    msg.step.assign("WZOGOMEKPARZHCPXQIWUDSDNFLJACSUMUQYZGDKTJRHITKVXNONC");
    msg.flags = 230U;

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
    msg.setTimeStamp(0.7319965674414376);
    msg.setSource(2717U);
    msg.setSourceEntity(251U);
    msg.setDestination(50140U);
    msg.setDestinationEntity(219U);
    msg.state = 78U;
    msg.error.assign("YOGAGHXPBRFRDMBMAWYSLWJAHVVWWKPMUJKICGTODVZKI");

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
    msg.setTimeStamp(0.818402961569017);
    msg.setSource(58857U);
    msg.setSourceEntity(214U);
    msg.setDestination(18150U);
    msg.setDestinationEntity(63U);
    msg.state = 65U;
    msg.error.assign("DNPMFHLPOEJTCLJPWLYNHCAZBFECWTQSYSZCWKXNUASGUICKMKVCOTKZZDLDUXTBXBMFOGYMSRMRQDFLKQDPSABHRIFVZDDNC");

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
    msg.setTimeStamp(0.24185373474407412);
    msg.setSource(22578U);
    msg.setSourceEntity(231U);
    msg.setDestination(836U);
    msg.setDestinationEntity(33U);
    msg.state = 189U;
    msg.error.assign("YKNGDBWUFHGCHAZBKNTJXQFSLXFVDDUQFEWQXBLVBIPUCVBSBEOOAVLMPWTDYDKXKUJNONYA");

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
    msg.setTimeStamp(0.6530234632485197);
    msg.setSource(55254U);
    msg.setSourceEntity(30U);
    msg.setDestination(21948U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.222154015383344;
    msg.lon = 0.24318277536577593;
    msg.height = 0.10103293016295756;
    msg.x = 0.17755351232814132;
    msg.y = 0.6999121488300578;
    msg.z = 0.7948297101751582;
    msg.phi = 0.12770656420072768;
    msg.theta = 0.13536732715908883;
    msg.psi = 0.8699040900418734;
    msg.u = 0.024769979417739618;
    msg.v = 0.28782261140273024;
    msg.w = 0.7398527392463606;
    msg.p = 0.6340606197195706;
    msg.q = 0.8517225808952683;
    msg.r = 0.9518752976782384;
    msg.svx = 0.9455246124065007;
    msg.svy = 0.5677218179195814;
    msg.svz = 0.524126290991362;

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
    msg.setTimeStamp(0.21126157166259307);
    msg.setSource(38612U);
    msg.setSourceEntity(48U);
    msg.setDestination(9769U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.4981470850595232;
    msg.lon = 0.46724703996984585;
    msg.height = 0.9509290045553278;
    msg.x = 0.9988276960200594;
    msg.y = 0.026461416628411172;
    msg.z = 0.8706977548485999;
    msg.phi = 0.04752566298796301;
    msg.theta = 0.2937487549345419;
    msg.psi = 0.7720207273419804;
    msg.u = 0.16699180840975514;
    msg.v = 0.1534291553133842;
    msg.w = 0.9478432042461878;
    msg.p = 0.16633738326203062;
    msg.q = 0.0875472972748591;
    msg.r = 0.6951354725349034;
    msg.svx = 0.7508573916406106;
    msg.svy = 0.9729277016989833;
    msg.svz = 0.4609973758906293;

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
    msg.setTimeStamp(0.31445867108861003);
    msg.setSource(1254U);
    msg.setSourceEntity(103U);
    msg.setDestination(53122U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.8943674733393695;
    msg.lon = 0.4790109720362924;
    msg.height = 0.7403930901484498;
    msg.x = 0.5616147906073752;
    msg.y = 0.8026965729751099;
    msg.z = 0.790949419351415;
    msg.phi = 0.4608672535900845;
    msg.theta = 0.9973261074106289;
    msg.psi = 0.4605127754774826;
    msg.u = 0.20376451777766036;
    msg.v = 0.5467113808247444;
    msg.w = 0.6756940868088674;
    msg.p = 0.5878502684202357;
    msg.q = 0.7946384161801842;
    msg.r = 0.4634099576814956;
    msg.svx = 0.5964585821109313;
    msg.svy = 0.8862660113089089;
    msg.svz = 0.09684654729923259;

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
    msg.setTimeStamp(0.9670864461296507);
    msg.setSource(27458U);
    msg.setSourceEntity(43U);
    msg.setDestination(45518U);
    msg.setDestinationEntity(4U);
    msg.op = 37U;
    msg.entities.assign("FSFFUBKPHNPAYQELAMCXRKUPSUJYDLEFCVHZOFBXQRQTVTYKHUNMAGQINIJGQAMTIHDIKSBT");

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
    msg.setTimeStamp(0.8205551387078435);
    msg.setSource(37779U);
    msg.setSourceEntity(20U);
    msg.setDestination(16514U);
    msg.setDestinationEntity(81U);
    msg.op = 89U;
    msg.entities.assign("YTHRWXJCLBNCXMQBDHYEISQPIBXFZWNCGCNKFOANBWTMBOHGRCKKMFQCYFICZIWJKLXSIMVUTYIWJOFZRSKRSFHKZIQVHPQVPBJYGDCRSM");

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
    msg.setTimeStamp(0.8172192715428974);
    msg.setSource(39295U);
    msg.setSourceEntity(191U);
    msg.setDestination(63475U);
    msg.setDestinationEntity(56U);
    msg.op = 102U;
    msg.entities.assign("EKSHJBFPXBLJLDXUBKBBUBKOTMXULPVHAWWEMVGTSDHEOMCXTWKZDPUVYQRTQNHZAXFTIYQAYWRDPFTEDHBORPMCUKNCFJWJOMEGQFJYRPMGBZAYEJNESFOLCNPINABZWSYGVRSRGTGMTGVPPZNAMNCWKCQROI");

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
    msg.setTimeStamp(0.8168139992023161);
    msg.setSource(10239U);
    msg.setSourceEntity(8U);
    msg.setDestination(17068U);
    msg.setDestinationEntity(25U);
    msg.type = 98U;
    msg.speed = 7815U;
    const char tmp_msg_0[] = {-46, -95, 1, -119, 47, 39, -22, -27, 74, 91, -116, -15, -67, 71, 113, -113, -35, 83, 18, -25, -71, 31, -105, 77, -10, 125, -121, 57, 17, -82, -105, 9, -25, 125, -25, -57, 106, 74, -75, 84, -61, 30, 14, 18, 29, 106, -104, 60, -58, -108, -97, 77, -14, -24, -45, -52, 40, -84, 28, -67, -50, 90, -4, 74, -114, -84, 76, -99, -24, 116, 33, -110, -58, 76, 114, -106, -32, 13, -20, -47, 6, 49, 62, 117, -16, -13, -21, 96, 65, 44, -17, 53, 34, -73, -93, -16, 93, -118, -63, -67, 73, -24, 113, -111, 47, -56, -55, -79, 76, -51, -36, 95, 88, -75, -93, 43, 11, -94, -44, -40, -25, 42, -66, 7, -102, -77, 1, 93, 109, -38, -93, 77, -98, -98, 14, 54, 5, 8, 4, 16, -19, -80, 2, -2, -9, 25, 115};
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
    msg.setTimeStamp(0.9530901119177734);
    msg.setSource(6012U);
    msg.setSourceEntity(11U);
    msg.setDestination(56761U);
    msg.setDestinationEntity(149U);
    msg.type = 245U;
    msg.speed = 19670U;
    const char tmp_msg_0[] = {33, -1, 14, -53, 112, -55, 108, -62, 67, -33, -51, -95, -39, 93, -85, -47, -3, 45, -16, -121, -120, -46, 70, -93, -94, 19, -119, 102, 108, -85, -36, 90, 36, 63, 37, -82, -24, 49, -94, -118, 20, -101, -122, 37, -96, 10, -69, -87, -40, 99, 8, 60, -63, 103, 3, -117, 74, 32, 19, 113, -12, 5, -51, 102, -68, 51, 113, -18, 62, 12, 37, -93, -122, 81, -62, 6, 125, -49, -50, -23, -77, 36, -61, 25, 3, 98, 62, 74, 102, -44, -128, 98, 107, -109, 61, -67, 1};
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
    msg.setTimeStamp(0.5903738261137501);
    msg.setSource(28360U);
    msg.setSourceEntity(66U);
    msg.setDestination(22017U);
    msg.setDestinationEntity(141U);
    msg.type = 189U;
    msg.speed = 21637U;
    const char tmp_msg_0[] = {-53, 76, -126, 75, -81, 50, -108, -117, -5, -98, 120, 34, -58, 76, -123, -46, -80, -83, 31, 91, 41, -97, 11, 92, -55, -56, 94, 94, 11, 119, -44, -9, -40, 46, 117, -69, -11, -9, -6, 117, -1, 29, 120, 80, -40, 111, -100, -55, 92, 88, 120, -46, 92, 52, 74, 27, -40, -37, -20, -83, -110, -93, -10, -97, -59, -102, -92, 16, -42, -110, -19, 61, 22, 78, -14, 31, 116, -87, -13, 66, 30, -87, 126, 61, 70, -105, -19};
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
    msg.setTimeStamp(0.02722841158828082);
    msg.setSource(32689U);
    msg.setSourceEntity(6U);
    msg.setDestination(20269U);
    msg.setDestinationEntity(80U);
    msg.available = 233585328U;
    msg.value = 149U;

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
    msg.setTimeStamp(0.8904685339592211);
    msg.setSource(41982U);
    msg.setSourceEntity(80U);
    msg.setDestination(43058U);
    msg.setDestinationEntity(32U);
    msg.available = 3013564147U;
    msg.value = 206U;

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
    msg.setTimeStamp(0.20508888295207028);
    msg.setSource(15441U);
    msg.setSourceEntity(108U);
    msg.setDestination(24069U);
    msg.setDestinationEntity(63U);
    msg.available = 2373458813U;
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
    msg.setTimeStamp(0.21517750985228756);
    msg.setSource(13150U);
    msg.setSourceEntity(54U);
    msg.setDestination(15764U);
    msg.setDestinationEntity(57U);
    msg.op = 217U;
    msg.snapshot.assign("QKLFEFFYMJPPBWGOIOIYLRKRXFGZFYSYQJNQSGKHBSYJVGELDGTWXGSNIUNHOZNZTGZDRCDZJQREBBHOJVMVLJBPWKMPHEDKUINFZXOXADAMDDCPIJWHPBTCBMVOVQCVPDKIOKXCWZMBGNTEYWSKLEKQFAXZWCORMVMRAUQQTCPXWNARRVIQQTXNHCLVPHHJUAKUMVLSYJLFIEFLENUDOWTSHSGMBYEFXASZN");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.7752533273276337;
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
    msg.setTimeStamp(0.16841684019831393);
    msg.setSource(10619U);
    msg.setSourceEntity(153U);
    msg.setDestination(9072U);
    msg.setDestinationEntity(169U);
    msg.op = 148U;
    msg.snapshot.assign("FTSKTCFHTYEAUTTRIIXJSFQAOBZGLOECYIDYYSYBDUVQWDMHWWUZCNXCNPXRKFLJQLGBWLMTIHUEXKPXFAXKLMMYRVJOSQFXFIEVVFAQEKTTRPSHHZKBGDHGLONMGPRVOTRZRFM");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.08805449528816456;
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
    msg.setTimeStamp(0.8464569015672508);
    msg.setSource(47401U);
    msg.setSourceEntity(20U);
    msg.setDestination(60121U);
    msg.setDestinationEntity(47U);
    msg.op = 210U;
    msg.snapshot.assign("CYUQSHQSARMFIVSARUN");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 188U;
    tmp_msg_0.file.assign("AJKXOOXPDKBRUDMWGWIBOYBJCLXKGKYOVNJBRFDLQTSQVRMHUWJFQ");
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
    msg.setTimeStamp(0.6783940778873652);
    msg.setSource(39406U);
    msg.setSourceEntity(143U);
    msg.setDestination(4836U);
    msg.setDestinationEntity(149U);
    msg.op = 215U;
    msg.name.assign("ADIWWGVESSBERVFRC");

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
    msg.setTimeStamp(0.9017846127801806);
    msg.setSource(19116U);
    msg.setSourceEntity(182U);
    msg.setDestination(31597U);
    msg.setDestinationEntity(9U);
    msg.op = 135U;
    msg.name.assign("HKCEJTQWVXSHFECSAXZZRUKBCIGAKHIBSWBYOLUVDFLVBMAXFRODGJTZLCDLVHKIOUEKYMEQJMGARTBFXPMFZEURNZGFIEYGNKOILVQOTFDYCAOVKXTTWUPYDSETORTVLGEGXUCBKOVQDSIRMALCWMQPWQPZANJDPNUNZJDIUT");

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
    msg.setTimeStamp(0.3800982917757654);
    msg.setSource(45142U);
    msg.setSourceEntity(64U);
    msg.setDestination(59372U);
    msg.setDestinationEntity(62U);
    msg.op = 167U;
    msg.name.assign("MNUHIZRDXNBYTLYSSMCTOKPORBGFXLJKXLBXTWWICDOASOOCEISXZZJWTREAEBIHFMVPVEUBIDRGFPOGYCFGYWQHQQQAFCOTCZNDJFUCNIWWPMEEKFZRURVYHU");

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
    msg.setTimeStamp(0.023393732068679007);
    msg.setSource(31500U);
    msg.setSourceEntity(123U);
    msg.setDestination(24554U);
    msg.setDestinationEntity(144U);
    msg.type = 185U;
    msg.htime = 0.031184163726502012;
    msg.context.assign("IBJCGAUZUOHBPVFHCYNALXR");
    msg.text.assign("GHCLDDDIOBACYPGPMBQWGPJPZIPDMEUTSJWVHFHUKKSZQNQBGENUJJUJFWVLWNUVSXOSBXUTBIXVPYGVRPZVBOALSLEWVZKOKCICENBXFKSJLQFYZHVGQFNRJWMEFANTRKJMSTAACBXRMODKNLLTJXYEFSIRGZUOZEMCILTLFDRYHZTEQFRJYHAMRBYTNBYOZATXPAVVXHQOYHDRKKIDPGNWAMSOPOYFCRSGDQUIDCQAWUHKLXNHMEWU");

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
    msg.setTimeStamp(0.667856266072271);
    msg.setSource(5596U);
    msg.setSourceEntity(226U);
    msg.setDestination(5336U);
    msg.setDestinationEntity(113U);
    msg.type = 68U;
    msg.htime = 0.49359532566343345;
    msg.context.assign("NUOVGKZPRTEMNPLPJJXTCDEAUYFWNETKMSIBMBQJBWDLMIMKAUTPUSAVKJIEGQZLFICLUHZVEXDSTOGSQLWTGGDWUQHVVHSAHJQXOKIWWICDJLWJZYBKYFQXEZENPDESMVFZNJIVMGCFBVFKMHSBYTATQANZAORCGXUBSXCDXZYJINRWXHXYYHKDOMHSPDORLOVJFUPWDLTAKMOAWNYFLRQQPINOACNUICRHRGGZQPXUBYFBYOEFER");
    msg.text.assign("TFUVPEAOOIAGEZBKLTHXTVYQAPSHBRSKOOHKCMMGPWUYGAFXVZDIKDSVMEPXLGAVNENRHCSTDBEZRVBQLWOKXXINPSAXHFJNBE");

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
    msg.setTimeStamp(0.4987957148297997);
    msg.setSource(61639U);
    msg.setSourceEntity(126U);
    msg.setDestination(55541U);
    msg.setDestinationEntity(215U);
    msg.type = 182U;
    msg.htime = 0.08928003467147194;
    msg.context.assign("HNYGQTCKWPVCWAKQLEUHLVAONMDBOGCDLUWFERHITUNXSILWKZRESOAGZTIKZAQUYVZDGRUSQPQJIKPMCGEMLWSBRYHIGNJWKBTFJCPSMVXSEXRFKGHKCXTPWBXLNAMTHZOBYZIILQNBODEDMXVESHQQGJENGFRDXBFPWYDKZTN");
    msg.text.assign("RQKMLOMKNQSEQVFABEOWWHHSEMKFNLXXINZMBMYPHPYAIRCOUAVYRALKOKLZVRWKCGZMRLWVC");

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
    msg.setTimeStamp(0.19530013040435268);
    msg.setSource(30590U);
    msg.setSourceEntity(80U);
    msg.setDestination(53092U);
    msg.setDestinationEntity(54U);
    msg.command = 200U;
    msg.htime = 0.6523948788468904;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 233U;
    tmp_msg_0.htime = 0.9867157880443976;
    tmp_msg_0.context.assign("YJNEZSZRFNGQATUUEOCOPJJUWNPRDIJKQNLJMKYLXGHCDFWGM");
    tmp_msg_0.text.assign("HGXUCYBNIRCCBYENDAIEORSFHHPZAMAITLDFAGZMUMCRFTARS");
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
    msg.setTimeStamp(0.23800361805256132);
    msg.setSource(33906U);
    msg.setSourceEntity(201U);
    msg.setDestination(7070U);
    msg.setDestinationEntity(218U);
    msg.command = 30U;
    msg.htime = 0.016790646360825168;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 36U;
    tmp_msg_0.htime = 0.7412135392628685;
    tmp_msg_0.context.assign("WYSBIDVOLGSPKFPZKBAVFPSXHAZRNJXAWVAFQTBQKPXETNNQXSVQEBVQLYCCHNJPKWTGLENXDSUFIBCVQWPQUQODZSAGSUWUXTXWHOJEAFORKOPDEMLPNLVIUTCYETTOUMMZKDIYZDFDBTVKZJTERRENLHEYGOY");
    tmp_msg_0.text.assign("WWDHYXSGNJLPEGKEBKRVKZVYNBUSLXFGHEYZXGOQSRT");
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
    msg.setTimeStamp(0.92407801343181);
    msg.setSource(40306U);
    msg.setSourceEntity(123U);
    msg.setDestination(30893U);
    msg.setDestinationEntity(152U);
    msg.command = 200U;
    msg.htime = 0.3503324215511373;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 229U;
    tmp_msg_0.htime = 0.03485777614958929;
    tmp_msg_0.context.assign("JJJMIRKCBFRLLPLN");
    tmp_msg_0.text.assign("GGNMOPNHLELVAHPLSBLMTEDFDMIBWTKRYQKVZFZIUJUTTGFSVMIXUBYAHFTUUZKAEGEYWBGSZDMQANIITPTYAPKYCPSWIXXAE");
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
    msg.setTimeStamp(0.7902049915837268);
    msg.setSource(14865U);
    msg.setSourceEntity(247U);
    msg.setDestination(5148U);
    msg.setDestinationEntity(138U);
    msg.op = 184U;
    msg.file.assign("VRUDDZHLTQHDWGRDBVMABEBWYGIYAKGRNFAWRCHACHOGZIFXJEPYTOIXYQCNFJNKHNLSNBWNTICZXIQDUGIPZMIYJVQSOFOWKXIVBUCXFUNYHHDKRWGTAPRCPAOQZDQUMEPAKBVAQFTBMTFMNXRNSSFYJJRGKXSDZVHFUZSKAEOCMZLPVEKJJLMUGXBYSERLVWTGPQTMEBLCOLPWCDTZYQGIBLYMWHPSKSTUULOQEVRWUZMVXOPKHJNXC");

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
    msg.setTimeStamp(0.5056374412659977);
    msg.setSource(507U);
    msg.setSourceEntity(172U);
    msg.setDestination(4757U);
    msg.setDestinationEntity(172U);
    msg.op = 176U;
    msg.file.assign("UNBONYRYRMCFXECCZQJSGSAKFNFRJAPNJEGCVFGDAJVMKDIPIVEBJQPBLMNLZIOQYOAZJHLZDSHRFHEURMBEZQSQIGJYSDEILTYHJTEAFSIYARMPOZTJHOPWIMKGWBCUUDW");

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
    msg.setTimeStamp(0.4878439457201261);
    msg.setSource(17605U);
    msg.setSourceEntity(222U);
    msg.setDestination(64159U);
    msg.setDestinationEntity(253U);
    msg.op = 238U;
    msg.file.assign("GGXYOWSIWTWIJYUXRVTLZHBQWBTIFDSVKOOAYZZSKNRZDVZMPAUTA");

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
    msg.setTimeStamp(0.1645669939044715);
    msg.setSource(65327U);
    msg.setSourceEntity(153U);
    msg.setDestination(7431U);
    msg.setDestinationEntity(83U);
    msg.op = 198U;
    msg.clock = 0.6105174574013952;
    msg.tz = 0;

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
    msg.setTimeStamp(0.32270016433856097);
    msg.setSource(50528U);
    msg.setSourceEntity(210U);
    msg.setDestination(7413U);
    msg.setDestinationEntity(23U);
    msg.op = 82U;
    msg.clock = 0.26927964008709304;
    msg.tz = -97;

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
    msg.setTimeStamp(0.5149318956155148);
    msg.setSource(4412U);
    msg.setSourceEntity(93U);
    msg.setDestination(30529U);
    msg.setDestinationEntity(142U);
    msg.op = 241U;
    msg.clock = 0.25518901955458995;
    msg.tz = 81;

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
    msg.setTimeStamp(0.11672182245933171);
    msg.setSource(32756U);
    msg.setSourceEntity(28U);
    msg.setDestination(22754U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.24564244755215825);
    msg.setSource(35470U);
    msg.setSourceEntity(97U);
    msg.setDestination(25745U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.16489425485524623);
    msg.setSource(29576U);
    msg.setSourceEntity(253U);
    msg.setDestination(10447U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.23839252482384554);
    msg.setSource(60660U);
    msg.setSourceEntity(59U);
    msg.setDestination(9957U);
    msg.setDestinationEntity(150U);
    msg.sys_name.assign("FYKXIUARXOFJTZJJVLIPGBIKCDISXWNMLGNWOSMMHRCEQEBEMFXGPZEUSSNSULZHGGNGNPY");
    msg.sys_type = 244U;
    msg.owner = 24794U;
    msg.lat = 0.2890365549940076;
    msg.lon = 0.39058879730499985;
    msg.height = 0.20928054127828033;
    msg.services.assign("ZUSFBMLJGOOUQURHLXIRMZ");

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
    msg.setTimeStamp(0.9284639453377476);
    msg.setSource(17159U);
    msg.setSourceEntity(194U);
    msg.setDestination(27976U);
    msg.setDestinationEntity(116U);
    msg.sys_name.assign("LVGUJIYAVKWNQYXKZNBRQPGNEUNMGSCSTKZWBAFTCZZVBVAKRSXIRFEDYCNVOKYCDPIVNQTJUOACMJVHGLVSORBPILJUGDNHDNAHZQMSFEYFZIZMBEGFATDQXCCSHCUMQTKQUTXAHAWZQERJSWLVPLQILYXKNB");
    msg.sys_type = 22U;
    msg.owner = 44692U;
    msg.lat = 0.4717131562856315;
    msg.lon = 0.9815142895894481;
    msg.height = 0.1828756092833318;
    msg.services.assign("FYLVLACYUEHDJMLFFOOGLZKACHDFDUVGTDGGMTKUAQRRTKGNWEKEWZYVGADPWSMXBIHNJCJEOTZALJLQVWGYSLPJFRBLXVWRDHQUSBHIEDUVCE");

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
    msg.setTimeStamp(0.802460715156181);
    msg.setSource(25010U);
    msg.setSourceEntity(233U);
    msg.setDestination(31303U);
    msg.setDestinationEntity(125U);
    msg.sys_name.assign("GQWJLLURZTCYMKVRSAYTAPRHKYUXLFH");
    msg.sys_type = 104U;
    msg.owner = 21583U;
    msg.lat = 0.5776531329715509;
    msg.lon = 0.9653016920307389;
    msg.height = 0.6164176640488519;
    msg.services.assign("KICYTUQFVOGSHMUNUXCGRPTCWKRXHVNAPFKZTAMWMBCHJAYBSRKIXJSLRFNKITBUJGBWQWBEMQIVNBSXYPXDFUMLKZGGQEXHVVDHMYMGYFJFQNYDLIFLGKOEZNXRWIOPWBDVZZVSGJWDFCFCGNPOXLACPHUOKYVUJAHXCJPTNSOPCQFIVEIEZLTAMITUAERLDKQWOOEBTJBHLBSJQLRDQWY");

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
    msg.setTimeStamp(0.9245398536738106);
    msg.setSource(55060U);
    msg.setSourceEntity(20U);
    msg.setDestination(54945U);
    msg.setDestinationEntity(165U);
    msg.service.assign("WBQAWNBCTZNCWOVVBSHRDGBFJPPPCDJPNOZUHQGLJRCLPPDRLIFZVQYEXZWZSXLMCOKOIGVAJBKRLJOYOABKJDWXWQMGKGNZHCAMPKEATZFUDUKTLEAZELVMSIJIKNIRUXQMLFCHEHTBUSYISUIPNYZGOBNUYUSQJVIWSQJYEQRDUBTPDTAIV");
    msg.service_type = 184U;

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
    msg.setTimeStamp(0.21100697726750806);
    msg.setSource(64729U);
    msg.setSourceEntity(102U);
    msg.setDestination(30625U);
    msg.setDestinationEntity(52U);
    msg.service.assign("ZXUMYCELHU");
    msg.service_type = 205U;

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
    msg.setTimeStamp(0.8827075728732607);
    msg.setSource(22654U);
    msg.setSourceEntity(153U);
    msg.setDestination(41889U);
    msg.setDestinationEntity(151U);
    msg.service.assign("AKQYWPGEUHBLKGPWTTMZRYARWKCEKFBWCPUUIXSFOKCODAMXNJRYUJIYAHGQQWRUQYYULNPZ");
    msg.service_type = 21U;

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
    msg.setTimeStamp(0.31894644504903347);
    msg.setSource(49144U);
    msg.setSourceEntity(221U);
    msg.setDestination(8150U);
    msg.setDestinationEntity(120U);
    msg.value = 0.7549543769783315;

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
    msg.setTimeStamp(0.43573561012158524);
    msg.setSource(13074U);
    msg.setSourceEntity(124U);
    msg.setDestination(9601U);
    msg.setDestinationEntity(125U);
    msg.value = 0.3649150465697265;

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
    msg.setTimeStamp(0.48934725525089307);
    msg.setSource(26240U);
    msg.setSourceEntity(31U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(2U);
    msg.value = 0.2028206912228817;

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
    msg.setTimeStamp(0.6928542687161737);
    msg.setSource(56U);
    msg.setSourceEntity(229U);
    msg.setDestination(2869U);
    msg.setDestinationEntity(45U);
    msg.value = 0.5092021003858579;

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
    msg.setTimeStamp(0.9212215628823092);
    msg.setSource(31165U);
    msg.setSourceEntity(120U);
    msg.setDestination(18764U);
    msg.setDestinationEntity(65U);
    msg.value = 0.37479117772892045;

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
    msg.setTimeStamp(0.992568984277687);
    msg.setSource(48766U);
    msg.setSourceEntity(132U);
    msg.setDestination(52152U);
    msg.setDestinationEntity(46U);
    msg.value = 0.8928271953359928;

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
    msg.setTimeStamp(0.5951503074427567);
    msg.setSource(21065U);
    msg.setSourceEntity(103U);
    msg.setDestination(56651U);
    msg.setDestinationEntity(183U);
    msg.value = 0.8871897052511151;

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
    msg.setTimeStamp(0.12802078421515684);
    msg.setSource(33428U);
    msg.setSourceEntity(247U);
    msg.setDestination(9813U);
    msg.setDestinationEntity(90U);
    msg.value = 0.5585739170495764;

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
    msg.setTimeStamp(0.9369752714907941);
    msg.setSource(20553U);
    msg.setSourceEntity(152U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(212U);
    msg.value = 0.8668402582069958;

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
    msg.setTimeStamp(0.3345313358406504);
    msg.setSource(64322U);
    msg.setSourceEntity(214U);
    msg.setDestination(19498U);
    msg.setDestinationEntity(228U);
    msg.number.assign("ZNJRDIVYKHVMXGKMXYWYBOCYRPGCGIIEZNMAWMGYMTUVJZOAQZULUFGSREUJNIMNTOBMAWHYOLVSENXLWCALDSJ");
    msg.timeout = 50881U;
    msg.contents.assign("LQTKVBZEKYTCOWIHOWBLYAMTECFPFZBXEZVTIKNIGCSQFWKWWXEAIFPTYUWJVQYXPCULZKEKEPDGDUTMBTDALXCRBCDSNFMUNRIUCNJLGHQODKFQ");

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
    msg.setTimeStamp(0.29054146275714543);
    msg.setSource(62405U);
    msg.setSourceEntity(238U);
    msg.setDestination(38515U);
    msg.setDestinationEntity(241U);
    msg.number.assign("XYDNJSXCNJSOVFABRYFREDRFBRMUHHFPUZAKWEONURZPQKSLWQEOYEMGGSDEAQABMTGPSEZJTIYPIMMOXMMTNHFCDPBZOIHTUFVPKSBCEZOSVSCOBBYFALQDGPKWINOYSXIKLXCLNYQPHIEGGITQJTZWJKZHJ");
    msg.timeout = 37099U;
    msg.contents.assign("UBROEIPAKORKCGXWWSJRNTALUSLEOPRWLBHDTZGPNQXIYBDZXLBISXAUIPKZFMVCYFFCQVLJFQGJYETBGIMVYOGTEIFCHVKHSPDRFWFTWNAYZZPNARHXLEEGOOQKUMSIYHRHGZKAEQCOSNMRPMGQNVXZUDOMUNTHAKYQDMYADWCTJZQMVZHD");

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
    msg.setTimeStamp(0.5632792371992555);
    msg.setSource(1634U);
    msg.setSourceEntity(9U);
    msg.setDestination(14268U);
    msg.setDestinationEntity(28U);
    msg.number.assign("HXJGRZDBCRNKTIPNARAYFDHULIWNPIUUBVCHATGKEFFTFEBPKEAVHHTOPAZUFQYZMACLKVBPNDXQJSMJTSXPNTLH");
    msg.timeout = 37888U;
    msg.contents.assign("LBCFHOACWOSYQIJUUITMBKRIBQJMBIJIQJRCJNVDDSWNFWKCSDUPAGVEQZCASFLEKXGXAALYTHQUKROGEWQKKONUXRRIQXYUKHGPLZAKVQMEFUKELMJAAGGSFNNGMVNYPCUVBWMMWCTMVFLBZPNPTTWZSHBTFNSHZOEDYYGNJYXTRWIODCMV");

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
    msg.setTimeStamp(0.1367520713649656);
    msg.setSource(39404U);
    msg.setSourceEntity(109U);
    msg.setDestination(49186U);
    msg.setDestinationEntity(57U);
    msg.seq = 589119008U;
    msg.destination.assign("OBJXNLQJXCSPDCLMKLERJYNPYTRUAQGVNANKZWUDZERDHIPMTJHKCOTPEHYMFITYOBIEGDFAVBPUFLMXLIJDKBADUKZDNHGNKCJECXCRZILBWXLLNYRKRSBOVXRTKHUYPIRQMWQWHQBQGXQPUSVGGOUZJKJXOEAFZAXYRIZDWVOOAEGLGSEFZHPWMSURUYVAHQSCSWHQTCFGWFVPFQIBSOBWTWYUAVVSCZIDXJVPTTMCNLFMY");
    msg.timeout = 16667U;
    const char tmp_msg_0[] = {49, -2, -106, 37, -98, 21, 35, -123, 67, 104, -126, 74, -113, 77, 117, 5, -103, 125, 69, -26, 42, -69, 4, -107, -38, -40, -33, 65, -18, 101, 19, -13, -17, 14, -126};
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
    msg.setTimeStamp(0.23037019367796718);
    msg.setSource(1633U);
    msg.setSourceEntity(237U);
    msg.setDestination(37697U);
    msg.setDestinationEntity(211U);
    msg.seq = 2413917787U;
    msg.destination.assign("JLLFJKRHXZJEBZICBGOLOOHLGPHRFRAELUTIPVKZUEGYYIRNOJDGZWGKMECENYASNNTRBCKXBKPCYMHTARMAKXLPSZFQQMHFGAYPIVIHGWCJEQDYRNVPTFNILDFDXGTQJUWPVCAFTEPDBQYOHKIXUZJEWZDOZVRPXSJFENUKCWQVILMBFXANTXWWMAOYUKHQUB");
    msg.timeout = 50295U;
    const char tmp_msg_0[] = {-84, 90, 89, -106, -41, 67, -94, -52, 2, 11, 126, 111, 38, 111, 90, 4, 80, -60, 61, 55, -78, 98, 90, -123, -103, -24, 78, 103, -66, 84, 39, 46, 75, 76, -11, -88, -4, -105, -123, 33, -114, 30, 89, 96, -102, -112, -28, -125, -53, -34, 96, -31, 28, 97, 122, 46, -104, -62, 0, -118, 61, 1, -128, 93, -92, -5, -101, 116, -118, 85, 50, 57, -95, -68, -22, 38, -36, -31, 5, 72, -39, -70, -56, 114, -109, 115, -40, 18, 37, 77, -69, -89, -42, -4, 121, -74, -9, -15, -54, 24, -84, 4, 80, 118, 50, 6, -94, 19, 97, 86, -93, -111, 72, 70, 24, 44, -93, -111, -78, 122, -94, 13, 77, -112, 93, 83, 8, -64, -63, 64, -19, 55, -6, 26, -46, -31, 91, 18, 59, 4, 79, 115, 103, 101, -39, 70, 66, 119, -54, -100, 99, 116, 27, -119, -17, -95, -19, -61, 21, 81, 112, 101, -80, -17, 11, 40, 36, -27, -87, -40, 55, 24, 15, 109, -86, -82, -33, -80, 56, -107, -31, 82, 28, -91, -68, -6, -128, 0, -66, 91, 117, -30, 122, -55, -128, 5, 1, -18, 39, -55, 1, 82, -102, 83, 41, -60, 116, 91, 100, -65, 48, 2, -100, -30, -56, -74, -59, 71, -77, -43, -64, 26};
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
    msg.setTimeStamp(0.24960372931500896);
    msg.setSource(13524U);
    msg.setSourceEntity(215U);
    msg.setDestination(27816U);
    msg.setDestinationEntity(32U);
    msg.seq = 254610837U;
    msg.destination.assign("GPFGARNNTVJFRNPTEVMECLYEKKLSFMPLMSSAZXZHIGZVFBAUNTTBDDZIDXRDMXPBCEQMJSRBQHQWDNMYYYNMMGBSTAOUBPTFGROWWOYLDKEZIGXTOJCJIOUAZLQBFCJEUIRNFTSCYMBPTJUPHGIZHQLUGKVRHXANVFCZHDWUAXKUKLCVRLUIVKPOLDWWNJWVISILAHVQSQVDQPKODZRIRCAJENSEYMQ");
    msg.timeout = 38494U;
    const char tmp_msg_0[] = {-71, 7, 67, 12, -15, -43, -83, 39, -58, 7, 95, 121, -107, 13, -71, 120, -44, -49, -112, 15, -124, 126, 98, -95, -92, 126, -32, -84, -6, -87, 60, 122, -126, -88, -50, 10, -44, 97, 78, -123, -36, 80, -28, -128, 126, -108, -1, -21, 99, -10, -109, -70, 15, 75, -120, -109, -42, -73, 17, -106, -25, 68, -13, 31};
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
    msg.setTimeStamp(0.29734622884955875);
    msg.setSource(14371U);
    msg.setSourceEntity(185U);
    msg.setDestination(63808U);
    msg.setDestinationEntity(247U);
    msg.source.assign("PBEHUBXHZUESZQVZHAEMICJRPTHBOTWDEXBTSCPGPLUZISEFQVMCGCJJMOSDSKKEGPDVBAMLKDXNVUXJDRSQIHDJVRQNFOJYFVAVWNQMHFHZGTBTODEULNHYIAIIAYLWJQKMOMLFQDIAEFXZSYWZPYAOKTOSYRAIHLKSZTKKEXJCTKPFGRKWPYJVXNOPMFLNC");
    const char tmp_msg_0[] = {-25, 13, 46, 59, -112, -55, -117, -114, 105, -24, -25, -20, -47, -106, 68, 104, 119, 22, -43, -28, -55, -109, 28, 75, 89, 46, 21, -36, 90, -40, 11, -63, -54, -16, -47, 37, 22, -84, 106, 104, -19, -5, -38, -58, 73, -123, -40, -110, 67, -16, 92, 15, -100, -98, 57, 55, -123, 122, 98, -121, 34, 64, 31, 34, -102, 41, -119, 39, 5, -54, 22, -92, -100, -33, -125, -93, -105, 85, 118, -41, -4, 19, -126, 23, -4, -118, -111, 88, -11, -17, -125, -38, -115, -92, 5, 29, 39, -25, 93, -25, 69, -47, 39, 107, -24, 89, -22, -68, 66, -100, -22, 35, -18, 14, 80, -50, -39, 44, 81, 94, -27, -56, 86, 67, -15, -48, 105, 66, -90, 109, 81, 32, 81, -102, 77, -107, 87, -53, 99, -41, -65, -103, -17, -2, 92, 23, -107, -26, -42, -99, 49, 11, -63, 1, -23, 93, -59, 120, 63, -47, -23, 19, -105, 13, -28, -22, -13, 69, 77, 42, -33, 42, 70, -7, 12, 45, -45, -90, 51, 59, 69, 120, -98, 66, 49, 107, -63, -7, 48, -92, 55, -9, -63, -1, -6, 60, -20, -119, -10, 53, -28, 8, -127, -21, 120, 117, 20, 0, -79, 36, -30, -52, 91, 82, -66};
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
    msg.setTimeStamp(0.4038044598065593);
    msg.setSource(34417U);
    msg.setSourceEntity(111U);
    msg.setDestination(32665U);
    msg.setDestinationEntity(33U);
    msg.source.assign("KEAMQXFPXVCDKIGHKLSUMJLSPVVWHNSLMMLLFAWQJCSDYPSMYDTIGJQPUWBOHBNETNOKVPNKTLWPZNHCJQVRNHKQFTGDZQVTXUHJYBQYMMXHDXCJEANEPFSRISSOWHFIIRVUYBCYGUGYLWGPZAJZVUZSNETDFMXXKCUIWODZRRPTFFM");
    const char tmp_msg_0[] = {-21, -69, 62, 61, -62, -102, 41, -113, 33, 72, 76, 4, 96, 29, 9, -117, 114, -38, 38, -42, 21, 71, -13, -7, 119, 21, -28, -64, -72, -31, -30, 17, 113, 98, -94, -96, 115, 56, 62, -59, 113, -75, -116, -25, 12, -103, 124, -76, -104, -79, 125, -80, -128, -56, -18, -16, -95, 4, 102, -60, -104, -117, -101, 51, 119, -46, 36, 4, -41, 95, -122, -67, -13, 54, -85, 17, -112, -25, -111, 25, 33, -41, 43, 100, -58, 94, 27, 55, -22, -76, 58, -18, -34, -13, -123, 28, 90, -56, 73, -88, -78, 105, -55, 98, -19, 123, 87, -51, -107, -7, 45, -123, -27, -84, -82, -56, -27, 50, 38, 101, -25, -29, -113, -7, 64, -34, -66, -104, 95, 61, -34, 33, -49, -57, -8, 48, -30, 103, -57, -61, -6, 45, -122, 25, 107, -21, -60, 65, 100, -85, 109, 2, -56, 53, 65, 88, 68, -109, -35, 49, 32, -81, -26, 60, -122, 37, -103, 40, 3, 88, 83, -110, 95, 114, 30, -110, -38, -122, -88, 42, 16, 88, -56};
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
    msg.setTimeStamp(0.08045526916991219);
    msg.setSource(41947U);
    msg.setSourceEntity(99U);
    msg.setDestination(41190U);
    msg.setDestinationEntity(71U);
    msg.source.assign("OMVBRQWWGMGEITYOSPVZBRYMEJXAFAGYTBFKSXOMWTYWUWLJCSHKYQD");
    const char tmp_msg_0[] = {94, 57, -9, 35, 98, -107, -81, -79, -26, -21, 109, -38, 33, -49, -50, -13, -56, -7, -60, -107};
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
    msg.setTimeStamp(0.8868548165247072);
    msg.setSource(11352U);
    msg.setSourceEntity(56U);
    msg.setDestination(37289U);
    msg.setDestinationEntity(10U);
    msg.seq = 4014212206U;
    msg.state = 23U;
    msg.error.assign("MHTEOWXPAAEMMSKLXGAGNXTQPDQLCIJKITWVSOROYNBSUZUQLRSVJRORWYBCZCZQNDKXFZHMBLZPTESLHKBXHWIDQFUAKFNNYSHDABTMCIRYQOYFXGGEWIKUBHFVJVOKWMVBDJBBWOULJWSFVPLAG");

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
    msg.setTimeStamp(0.5748339697532534);
    msg.setSource(12179U);
    msg.setSourceEntity(128U);
    msg.setDestination(35270U);
    msg.setDestinationEntity(107U);
    msg.seq = 890146095U;
    msg.state = 173U;
    msg.error.assign("IRRCIUEKRFRTECNLDZTVDXDXZOBBJIOESDVIXWWYMNKOQNXLQSCWWUGHFGEVMBWVKZQFEAWKBCMJULXOICVTKSMWFRPRRQWLHMNJBEPYIGJXAPNYHXPUAIQOLGZILAOSOMPJLMVTABWKDAMGDUMHBYVBTHVFFTUHUOQZCJAND");

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
    msg.setTimeStamp(0.05191550519914245);
    msg.setSource(25718U);
    msg.setSourceEntity(224U);
    msg.setDestination(23403U);
    msg.setDestinationEntity(241U);
    msg.seq = 3818580823U;
    msg.state = 154U;
    msg.error.assign("XANQSWVPLXMKLHAVSJRBWKOKBBUFVCWDRSQKZWPYQGUJSHZXFTLKEGTAIDCFNVQICYPTLWPYIMCACKFHCVTWRKSSMQHEICUIDUVIWQAUAHXRJMYODZKCVFDYVADPLWXGNXEPROASTOJNJUERZPYGLDXUKRJRWPBEBOKOJGZLTADLJECZUGFUQFPJNGXBTMRYVNQNYLZYNABNYTHFBFPQCZEELZNOHSXFJBS");

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
    msg.setTimeStamp(0.09566562115202637);
    msg.setSource(48447U);
    msg.setSourceEntity(157U);
    msg.setDestination(45277U);
    msg.setDestinationEntity(112U);
    msg.id = 218U;
    msg.range = 0.5165504439459391;

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
    msg.setTimeStamp(0.6321024132345643);
    msg.setSource(62714U);
    msg.setSourceEntity(216U);
    msg.setDestination(44614U);
    msg.setDestinationEntity(213U);
    msg.id = 65U;
    msg.range = 0.986658311301779;

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
    msg.setTimeStamp(0.3320805433696896);
    msg.setSource(29785U);
    msg.setSourceEntity(82U);
    msg.setDestination(56478U);
    msg.setDestinationEntity(248U);
    msg.id = 8U;
    msg.range = 0.05589774790631852;

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
    msg.setTimeStamp(0.27236851340418367);
    msg.setSource(4977U);
    msg.setSourceEntity(213U);
    msg.setDestination(25373U);
    msg.setDestinationEntity(63U);
    msg.tx = 242U;
    msg.channel = 81U;
    msg.timer = 25384U;

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
    msg.setTimeStamp(0.6002247000884458);
    msg.setSource(19057U);
    msg.setSourceEntity(234U);
    msg.setDestination(28627U);
    msg.setDestinationEntity(56U);
    msg.tx = 48U;
    msg.channel = 100U;
    msg.timer = 57329U;

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
    msg.setTimeStamp(0.6324542774051908);
    msg.setSource(63948U);
    msg.setSourceEntity(41U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(106U);
    msg.tx = 126U;
    msg.channel = 105U;
    msg.timer = 65171U;

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
    msg.setTimeStamp(0.5114565767823025);
    msg.setSource(34655U);
    msg.setSourceEntity(212U);
    msg.setDestination(29051U);
    msg.setDestinationEntity(81U);
    msg.beacon.assign("TZMLLJBGVMPPTSHYRAVVXPXRBINWTOHMJBPOQSRGWEWLPWHMCDGNUOUDUWTZISLOPEIIQFWAGTESXVBYCABUANADVJTQFVOALZFCMWAEVFLIRNGFQQKEGFIKXFIFNJXUHZKSDMWAOUGCQNHZUNMYZDSLTYGRHOVKPCHXSHNCQQMOYEFPYKUZZCEPJYCMEAVBASFXRYMENTXOLQHYIKSYCZHXUDKDBIJBRSKUXJPRKBDJGBLWOTZGTDJ");
    msg.lat = 0.8907511925521521;
    msg.lon = 0.4447037650527538;
    msg.depth = 0.6255527854044729;
    msg.query_channel = 235U;
    msg.reply_channel = 204U;
    msg.transponder_delay = 198U;

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
    msg.setTimeStamp(0.8308752106850051);
    msg.setSource(56131U);
    msg.setSourceEntity(151U);
    msg.setDestination(43U);
    msg.setDestinationEntity(15U);
    msg.beacon.assign("BFMZOKEIVKLREUSQWQOKZKFZVTLVTCKXBOWZISEJMJBXIYONHOZCTCHSQXLWEJXYZUZRNGGOSWNEBAIYAEYSFWEWHPNHYJDKTAJAFKTAIGRNJUOLMAXYLBRMGEGUUSZPIDTPUDLVEPNLJMNPSFXXBOTAUVDHWOEKL");
    msg.lat = 0.8267858539213562;
    msg.lon = 0.3751797477247898;
    msg.depth = 0.34496687293566997;
    msg.query_channel = 196U;
    msg.reply_channel = 28U;
    msg.transponder_delay = 183U;

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
    msg.setTimeStamp(0.6999399852032038);
    msg.setSource(31092U);
    msg.setSourceEntity(102U);
    msg.setDestination(52140U);
    msg.setDestinationEntity(168U);
    msg.beacon.assign("LACXUKJELKSMABMJRSKMUMWIYVNUPCIRALGWMXODXQPCNSORIWZPIGGVVCSQMYSJNJFDTXXCMJZDJPHAUKZGFRDVLEVOPGVILZHBTIRZPJIZOYDSFIKQTLVEYNNDHQFZQXKE");
    msg.lat = 0.7650093725934435;
    msg.lon = 0.8004520845121537;
    msg.depth = 0.5118617568555672;
    msg.query_channel = 182U;
    msg.reply_channel = 227U;
    msg.transponder_delay = 191U;

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
    msg.setTimeStamp(0.5746915555712216);
    msg.setSource(62492U);
    msg.setSourceEntity(187U);
    msg.setDestination(26097U);
    msg.setDestinationEntity(184U);
    msg.op = 227U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CYBBKFGCJTZTKWWTEOEGJWATTVBQZIRKDNHXNHXUVQCAJNJVYLSLXOJSHQOWLHJKSMGWEJSXIOIRPYMYMEUDXJDNUYBYDIBZMFBLZOHPLCBGRERVCEMFJZRPLQAHSSBEPVIZLNHUPJVFFPKDBYPWSKMIMMGLOTUSTYWSCOINGODV");
    tmp_msg_0.lat = 0.3063456588682586;
    tmp_msg_0.lon = 0.10803949164691573;
    tmp_msg_0.depth = 0.15101955435755177;
    tmp_msg_0.query_channel = 138U;
    tmp_msg_0.reply_channel = 99U;
    tmp_msg_0.transponder_delay = 165U;
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
    msg.setTimeStamp(0.9551216846674541);
    msg.setSource(37025U);
    msg.setSourceEntity(167U);
    msg.setDestination(63944U);
    msg.setDestinationEntity(168U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.8110658090297537);
    msg.setSource(14106U);
    msg.setSourceEntity(185U);
    msg.setDestination(21088U);
    msg.setDestinationEntity(51U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.1767860395673887);
    msg.setSource(6190U);
    msg.setSourceEntity(127U);
    msg.setDestination(17834U);
    msg.setDestinationEntity(151U);
    msg.address = 130U;

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
    msg.setTimeStamp(0.2699882977879723);
    msg.setSource(23296U);
    msg.setSourceEntity(126U);
    msg.setDestination(58176U);
    msg.setDestinationEntity(25U);
    msg.address = 203U;

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
    msg.setTimeStamp(0.9400420005468405);
    msg.setSource(51218U);
    msg.setSourceEntity(54U);
    msg.setDestination(12906U);
    msg.setDestinationEntity(59U);
    msg.address = 39U;

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
    msg.setTimeStamp(0.5974129491046165);
    msg.setSource(50579U);
    msg.setSourceEntity(190U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(96U);
    msg.address = 249U;
    msg.status = 168U;
    msg.range = 0.2505024508379743;

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
    msg.setTimeStamp(0.3649084140660436);
    msg.setSource(5544U);
    msg.setSourceEntity(191U);
    msg.setDestination(22189U);
    msg.setDestinationEntity(204U);
    msg.address = 112U;
    msg.status = 160U;
    msg.range = 0.22486691954258575;

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
    msg.setTimeStamp(0.27029630315375863);
    msg.setSource(5493U);
    msg.setSourceEntity(125U);
    msg.setDestination(47406U);
    msg.setDestinationEntity(248U);
    msg.address = 208U;
    msg.status = 160U;
    msg.range = 0.4021899815661051;

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
    msg.setTimeStamp(0.1338603063086995);
    msg.setSource(52984U);
    msg.setSourceEntity(222U);
    msg.setDestination(62367U);
    msg.setDestinationEntity(223U);
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 174U;
    tmp_msg_0.mnames.assign("USRPYQAPDTRBRUEGAXQSPSJTNUHSIGPXJFBSOONOIDIEKYEXDXKGYLYMBO");
    tmp_msg_0.ecount = 253U;
    tmp_msg_0.enames.assign("ODANFFGEPULPEAQRCQXABMMLARPIALXLJVJRRVZFKDEDGYKHDHDPPCAQHHQLWSOCGJBANGDVGBCXLRTUYDEBVOXEPSEVOYUDJRPTGJGCIMWXPDTMLJKUQZGAZTUYOEWFVYPOBQXSZBKWYSMPVNZTSNFKFZFMINJHOO");
    tmp_msg_0.ccount = 250U;
    tmp_msg_0.cnames.assign("PCLPUJPCPGPBYVXMJRYVIHCKEZRTOJHOZFPBBFTODMVLYUDNMSNJLYERUCSBDTAADWLFRVLPJXPVDSVYEUADEFWIGKUXZAXXJRWOKCRAULCQMWGBMVIMAHBANZOHNSRBGAOHHGNEZNUAKOXKXOCZUBWGIFSCQQMA");
    tmp_msg_0.last_error.assign("QYKVOEHZWJGDRGCQMHFYVUIXGFHWHDKAFKDDAAVLICPYYLGQETJYANATRHEPMPMRLXMMFASHCHDTEHOBYFZRAWXRAYDNZJNUKKHLOEJFXGGJVNBZRLPBJFOZPVLIWKMSBPXVTUUXI");
    tmp_msg_0.last_error_time = 0.633235287803851;
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
    msg.setTimeStamp(0.9621130686087398);
    msg.setSource(14488U);
    msg.setSourceEntity(25U);
    msg.setDestination(32292U);
    msg.setDestinationEntity(14U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.5090453375213199;
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
    msg.setTimeStamp(0.9600958206838133);
    msg.setSource(25793U);
    msg.setSourceEntity(129U);
    msg.setDestination(59190U);
    msg.setDestinationEntity(218U);
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("JSNDHSNXDJHFGUDQGZNIPXCGLKTWFBPFRSCYFLKHXSAAECWFXPODMXCHULDXOGEWPPDZQRVEEUFNKKNJMJPZWZMIPCZPERUIGFXSQWOCAAIBWUOEKCCKDMGNLMHXQNECRRSORWXJGUIIKQBNUPIHAHQJLTRABEMUQSQPVDNMLTBVRBVV");
    tmp_msg_0.dest_man.assign("MBYJJKULWOPRPMNLGKTHIMAQDJGBNVAAPWFKFCIINZVBMSCGPNWOISHZQLTLJAZXRQVLMULFVSHTRQZFNGOQYHWKILBOTOEKJYQNGZCVEVWTPYOCAYSJINWSCJGZXRUPHFIFBBKOXQDXACWSBVZVWOOTMYEASUDKEARTYFOYUHHURRZIEZMCXGDABV");
    tmp_msg_0.conditions.assign("HDGVKGAZMSSFNTRVQQNWYHZYXWOGYDRKEUDFSLZLIEJRJKBOVWJCMKMVJTCWZITHCFXCXDWVTESWNWCBHANZANPGRTYMXBCGBMYAJBAUMOQBKMCFDGUPSINUGGQNVQAMUEHYPGZUVHINREUZLIWJPVRSITBBIQCESBEZNPFXYLHKARFWLMEFCOAQHRROLSRUFDLLPTJCZILSDVIMGDFK");
    IMC::TrueSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9453411093792022;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2641485138978914);
    msg.setSource(14788U);
    msg.setSourceEntity(68U);
    msg.setDestination(17482U);
    msg.setDestinationEntity(54U);
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
    msg.setTimeStamp(0.7044339853213851);
    msg.setSource(28793U);
    msg.setSourceEntity(46U);
    msg.setDestination(19246U);
    msg.setDestinationEntity(220U);
    msg.enable = 119U;

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
    msg.setTimeStamp(0.23363072510767235);
    msg.setSource(13562U);
    msg.setSourceEntity(170U);
    msg.setDestination(5041U);
    msg.setDestinationEntity(172U);
    msg.enable = 118U;

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
    msg.setTimeStamp(0.6834346487279529);
    msg.setSource(29991U);
    msg.setSourceEntity(247U);
    msg.setDestination(54990U);
    msg.setDestinationEntity(231U);
    msg.summary = 50U;
    msg.level = 139U;

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
    msg.setTimeStamp(0.005542959331522268);
    msg.setSource(45586U);
    msg.setSourceEntity(150U);
    msg.setDestination(38446U);
    msg.setDestinationEntity(8U);
    msg.summary = 58U;
    msg.level = 142U;

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
    msg.setTimeStamp(0.611553741074648);
    msg.setSource(44170U);
    msg.setSourceEntity(71U);
    msg.setDestination(45885U);
    msg.setDestinationEntity(111U);
    msg.summary = 217U;
    msg.level = 115U;

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
    msg.setTimeStamp(0.45395587551439665);
    msg.setSource(3402U);
    msg.setSourceEntity(243U);
    msg.setDestination(12355U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.5202433430266148);
    msg.setSource(46019U);
    msg.setSourceEntity(60U);
    msg.setDestination(36077U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.9519368427480098);
    msg.setSource(58224U);
    msg.setSourceEntity(103U);
    msg.setDestination(23783U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.4637873098351555);
    msg.setSource(31569U);
    msg.setSourceEntity(218U);
    msg.setDestination(185U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.11371042826541744);
    msg.setSource(49346U);
    msg.setSourceEntity(185U);
    msg.setDestination(31241U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.2669188462995491);
    msg.setSource(50409U);
    msg.setSourceEntity(97U);
    msg.setDestination(26118U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.43457906886948705);
    msg.setSource(19503U);
    msg.setSourceEntity(58U);
    msg.setDestination(16059U);
    msg.setDestinationEntity(234U);
    msg.op = 103U;
    msg.system.assign("UJRCFHBYNTUZMODSSAZRVLHVRCWEVLWXXVYLKLUYCDZAPGQUEQHICILUBKOIRLRDNROCDAZF");
    msg.range = 0.10238121164803293;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.6958219795889891;
    tmp_msg_0.z_units = 235U;
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
    msg.setTimeStamp(0.30831409875865035);
    msg.setSource(23156U);
    msg.setSourceEntity(13U);
    msg.setDestination(59055U);
    msg.setDestinationEntity(125U);
    msg.op = 88U;
    msg.system.assign("EIIFCSJRGTMQJOBGXQIHBGKDHEWBAR");
    msg.range = 0.013067327215596225;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 54U;
    tmp_msg_0.range = 0.6561344125473034;
    tmp_msg_0.acceptance = 60U;
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
    msg.setTimeStamp(0.013403102694404367);
    msg.setSource(53663U);
    msg.setSourceEntity(169U);
    msg.setDestination(10366U);
    msg.setDestinationEntity(199U);
    msg.op = 202U;
    msg.system.assign("TGFPCZADAQTBZCWZTHKIYCTAQNCKSXJYFHBXCIURUPONLUBIMEVDXLSXELJFIPGQJVJNQJQIZYHJPXOQMXVWCSZHBFMKGRINUZWLNYLDHOIAOKPKWDDGMVSPRZOXUDRDBXGNAQJDWMIUQERUFJQKSHMBEYEKIKHWKOLVLPCVVRGTSOEQHWNUPSOAV");
    msg.range = 0.3936940010392974;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QGALEPRHCVURHGDMRBYOZIMJHYQWRPIOTNPBVJSEVXXWVTJQSGQAVMOLNTKVWAHIUKLGAMZPNDRQZAICFZIIMHROUNACTEXOCSQRYWMGVEFDIKAXXBNFY");
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
    msg.setTimeStamp(0.6352539978686269);
    msg.setSource(31365U);
    msg.setSourceEntity(65U);
    msg.setDestination(43473U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.1802171185993251);
    msg.setSource(44406U);
    msg.setSourceEntity(23U);
    msg.setDestination(41385U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.285210104574385);
    msg.setSource(12682U);
    msg.setSourceEntity(196U);
    msg.setDestination(28749U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.8929721899455608);
    msg.setSource(14954U);
    msg.setSourceEntity(130U);
    msg.setDestination(8750U);
    msg.setDestinationEntity(136U);
    msg.list.assign("ATYDSQMJPUJYYTZWCVPGULKVQLWLHQSKYNEWGXBFDTXDDYUGVRTMFOHAPZOXRELRXKCJNLJFKQPATOIEDUOHVUJCBBKADIGELCKXIIQBVRHHKGFNGNQEJPSDVCNAUHZLZCTBPUHWFSGZOJCDLISROPLXHOETEZBYRRTXNWVBIFQFZIVKLVDWOSMBJFGBCIMSNMZRCTXFYAJJPFSEYWMAMZAIMOVUAGTXHEOP");

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
    msg.setTimeStamp(0.5997827161710885);
    msg.setSource(41535U);
    msg.setSourceEntity(181U);
    msg.setDestination(45234U);
    msg.setDestinationEntity(40U);
    msg.list.assign("TLLMHFSYBLKNIPSYIVTEDMUWOXOQCVTHGDJQPZFMBGYTUWFZMAMGSACJLHGJHGCSLVZZAJPOLIKJLREPRXVHBVUTMPIDQQWXNQLJEUVZLUGPTCWCPWBJEMCURDFNS");

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
    msg.setTimeStamp(0.891359288637581);
    msg.setSource(64042U);
    msg.setSourceEntity(185U);
    msg.setDestination(42122U);
    msg.setDestinationEntity(235U);
    msg.list.assign("VYHKBTWFDRETDCVLIBOJPJXDLVRVMAIAQFXIFHHAPHZ");

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
    msg.setTimeStamp(0.23367607932039192);
    msg.setSource(17572U);
    msg.setSourceEntity(6U);
    msg.setDestination(61134U);
    msg.setDestinationEntity(192U);
    msg.value = 23877;

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
    msg.setTimeStamp(0.07684493988219188);
    msg.setSource(38538U);
    msg.setSourceEntity(253U);
    msg.setDestination(17958U);
    msg.setDestinationEntity(73U);
    msg.value = 10968;

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
    msg.setTimeStamp(0.9989362258158898);
    msg.setSource(43246U);
    msg.setSourceEntity(71U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(116U);
    msg.value = -7765;

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
    msg.setTimeStamp(0.6515613752383335);
    msg.setSource(33435U);
    msg.setSourceEntity(200U);
    msg.setDestination(26670U);
    msg.setDestinationEntity(92U);
    msg.value = 0.21158390662458415;

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
    msg.setTimeStamp(0.7948916996469275);
    msg.setSource(7871U);
    msg.setSourceEntity(124U);
    msg.setDestination(42145U);
    msg.setDestinationEntity(215U);
    msg.value = 0.34918941280928206;

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
    msg.setTimeStamp(0.2915502050549419);
    msg.setSource(55110U);
    msg.setSourceEntity(185U);
    msg.setDestination(2429U);
    msg.setDestinationEntity(42U);
    msg.value = 0.40931189147025826;

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
    msg.setTimeStamp(0.16785734380296613);
    msg.setSource(40920U);
    msg.setSourceEntity(83U);
    msg.setDestination(40115U);
    msg.setDestinationEntity(81U);
    msg.value = 0.46288892969301787;

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
    msg.setTimeStamp(0.16477037376311232);
    msg.setSource(52959U);
    msg.setSourceEntity(45U);
    msg.setDestination(17872U);
    msg.setDestinationEntity(50U);
    msg.value = 0.032748352101788725;

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
    msg.setTimeStamp(0.45199500524327607);
    msg.setSource(40568U);
    msg.setSourceEntity(24U);
    msg.setDestination(45110U);
    msg.setDestinationEntity(168U);
    msg.value = 0.7192179686598835;

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
    msg.setTimeStamp(0.7183939074358168);
    msg.setSource(3347U);
    msg.setSourceEntity(194U);
    msg.setDestination(40221U);
    msg.setDestinationEntity(182U);
    msg.validity = 36744U;
    msg.type = 206U;
    msg.utc_year = 26360U;
    msg.utc_month = 198U;
    msg.utc_day = 153U;
    msg.utc_time = 0.02167953632869324;
    msg.lat = 0.6804052471835079;
    msg.lon = 0.04612149313196823;
    msg.height = 0.9686640432740252;
    msg.satellites = 51U;
    msg.cog = 0.011464783624861807;
    msg.sog = 0.4327398943110523;
    msg.hdop = 0.7233754899432021;
    msg.vdop = 0.9894515537006475;
    msg.hacc = 0.2816759541860292;
    msg.vacc = 0.19158310981217286;

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
    msg.setTimeStamp(0.8602809541878678);
    msg.setSource(32U);
    msg.setSourceEntity(114U);
    msg.setDestination(50871U);
    msg.setDestinationEntity(19U);
    msg.validity = 61178U;
    msg.type = 206U;
    msg.utc_year = 180U;
    msg.utc_month = 95U;
    msg.utc_day = 160U;
    msg.utc_time = 0.8092736022175219;
    msg.lat = 0.037351912249770414;
    msg.lon = 0.8961833189294575;
    msg.height = 0.12098212377977169;
    msg.satellites = 248U;
    msg.cog = 0.7608367498241021;
    msg.sog = 0.7520629040749708;
    msg.hdop = 0.6854690472248425;
    msg.vdop = 0.06592035342850744;
    msg.hacc = 0.25845887476088936;
    msg.vacc = 0.8374026971311076;

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
    msg.setTimeStamp(0.9641454128647939);
    msg.setSource(25225U);
    msg.setSourceEntity(28U);
    msg.setDestination(55923U);
    msg.setDestinationEntity(121U);
    msg.validity = 56475U;
    msg.type = 127U;
    msg.utc_year = 50323U;
    msg.utc_month = 22U;
    msg.utc_day = 60U;
    msg.utc_time = 0.6105524269765136;
    msg.lat = 0.07004826441600254;
    msg.lon = 0.35242207977576534;
    msg.height = 0.20886629736588647;
    msg.satellites = 222U;
    msg.cog = 0.0830868581610208;
    msg.sog = 0.9834323303408099;
    msg.hdop = 0.5910903553851842;
    msg.vdop = 0.8327625137808512;
    msg.hacc = 0.8694034936186438;
    msg.vacc = 0.0030061638233915833;

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
    msg.setTimeStamp(0.033229591075847775);
    msg.setSource(48328U);
    msg.setSourceEntity(127U);
    msg.setDestination(19691U);
    msg.setDestinationEntity(145U);
    msg.time = 0.7779546506600635;
    msg.phi = 0.7865157141687898;
    msg.theta = 0.36996000110276117;
    msg.psi = 0.7496869616568974;
    msg.psi_magnetic = 0.9949971126980154;

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
    msg.setTimeStamp(0.13965198439868332);
    msg.setSource(58607U);
    msg.setSourceEntity(62U);
    msg.setDestination(48403U);
    msg.setDestinationEntity(117U);
    msg.time = 0.8030819546247706;
    msg.phi = 0.40645176004417216;
    msg.theta = 0.961053095444157;
    msg.psi = 0.3781940604967642;
    msg.psi_magnetic = 0.2625150208481749;

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
    msg.setTimeStamp(0.6395150753246075);
    msg.setSource(11342U);
    msg.setSourceEntity(119U);
    msg.setDestination(53514U);
    msg.setDestinationEntity(39U);
    msg.time = 0.3314734882648629;
    msg.phi = 0.30440878450670006;
    msg.theta = 0.48081417212102795;
    msg.psi = 0.08986925957708969;
    msg.psi_magnetic = 0.05039867723950686;

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
    msg.setTimeStamp(0.42994693884522805);
    msg.setSource(28956U);
    msg.setSourceEntity(212U);
    msg.setDestination(50227U);
    msg.setDestinationEntity(69U);
    msg.time = 0.09070976827730881;
    msg.x = 0.8535509353814811;
    msg.y = 0.23100562247244172;
    msg.z = 0.6080851841178908;
    msg.timestep = 0.5523588789252404;

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
    msg.setTimeStamp(0.9135061688126237);
    msg.setSource(44539U);
    msg.setSourceEntity(38U);
    msg.setDestination(50689U);
    msg.setDestinationEntity(121U);
    msg.time = 0.6272196609315802;
    msg.x = 0.23864477681183605;
    msg.y = 0.658031247904579;
    msg.z = 0.10990209984260113;
    msg.timestep = 0.4657151163074299;

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
    msg.setTimeStamp(0.9331182711740158);
    msg.setSource(47928U);
    msg.setSourceEntity(237U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(155U);
    msg.time = 0.5022683776490187;
    msg.x = 0.7880075653312991;
    msg.y = 0.3485184210495713;
    msg.z = 0.7059985192309753;
    msg.timestep = 0.9302746944247914;

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
    msg.setTimeStamp(0.17719941021501606);
    msg.setSource(64686U);
    msg.setSourceEntity(168U);
    msg.setDestination(12755U);
    msg.setDestinationEntity(101U);
    msg.time = 0.2840891448154589;
    msg.x = 0.32152529364404847;
    msg.y = 0.15687278455922304;
    msg.z = 0.6868418864282759;

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
    msg.setTimeStamp(0.20804248670806602);
    msg.setSource(1295U);
    msg.setSourceEntity(145U);
    msg.setDestination(33413U);
    msg.setDestinationEntity(17U);
    msg.time = 0.5391806032868754;
    msg.x = 0.04986587606127213;
    msg.y = 0.3588509210200339;
    msg.z = 0.41612854008640043;

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
    msg.setTimeStamp(0.7777007193158482);
    msg.setSource(49704U);
    msg.setSourceEntity(162U);
    msg.setDestination(1495U);
    msg.setDestinationEntity(136U);
    msg.time = 0.7527710144907932;
    msg.x = 0.7662798015008747;
    msg.y = 0.7102711925954738;
    msg.z = 0.4655183309658518;

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
    msg.setTimeStamp(0.43592204332323614);
    msg.setSource(50271U);
    msg.setSourceEntity(239U);
    msg.setDestination(38325U);
    msg.setDestinationEntity(205U);
    msg.time = 0.47367428180752247;
    msg.x = 0.3391341724920873;
    msg.y = 0.895522152285524;
    msg.z = 0.06100912013543058;

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
    msg.setTimeStamp(0.4962031523329816);
    msg.setSource(2429U);
    msg.setSourceEntity(3U);
    msg.setDestination(46689U);
    msg.setDestinationEntity(119U);
    msg.time = 0.9701737205094062;
    msg.x = 0.6076844732824164;
    msg.y = 0.3348275980095725;
    msg.z = 0.8696492270761874;

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
    msg.setTimeStamp(0.004280093244033223);
    msg.setSource(4278U);
    msg.setSourceEntity(18U);
    msg.setDestination(20078U);
    msg.setDestinationEntity(219U);
    msg.time = 0.9765881129885157;
    msg.x = 0.9307714749951058;
    msg.y = 0.9192309177731891;
    msg.z = 0.9330887599753336;

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
    msg.setTimeStamp(0.09954029796206731);
    msg.setSource(44319U);
    msg.setSourceEntity(182U);
    msg.setDestination(34212U);
    msg.setDestinationEntity(147U);
    msg.time = 0.3013641010605024;
    msg.x = 0.1996792888710781;
    msg.y = 0.8407682842060878;
    msg.z = 0.7518512289578392;

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
    msg.setTimeStamp(0.6515831587295365);
    msg.setSource(51441U);
    msg.setSourceEntity(166U);
    msg.setDestination(50101U);
    msg.setDestinationEntity(14U);
    msg.time = 0.5786838436533078;
    msg.x = 0.21853877022699797;
    msg.y = 0.7308315216125941;
    msg.z = 0.372038988615205;

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
    msg.setTimeStamp(0.7356370183251298);
    msg.setSource(39902U);
    msg.setSourceEntity(186U);
    msg.setDestination(2965U);
    msg.setDestinationEntity(105U);
    msg.time = 0.12142886744096248;
    msg.x = 0.3792075847027666;
    msg.y = 0.36099988127166593;
    msg.z = 0.3884041723498932;

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
    msg.setTimeStamp(0.9288970768592263);
    msg.setSource(41527U);
    msg.setSourceEntity(126U);
    msg.setDestination(22399U);
    msg.setDestinationEntity(220U);
    msg.validity = 156U;
    msg.x = 0.08572504643188306;
    msg.y = 0.24674677484054353;
    msg.z = 0.20227474599894757;

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
    msg.setTimeStamp(0.5202118837294233);
    msg.setSource(54017U);
    msg.setSourceEntity(16U);
    msg.setDestination(28254U);
    msg.setDestinationEntity(142U);
    msg.validity = 203U;
    msg.x = 0.5990393073213877;
    msg.y = 0.16395909850290358;
    msg.z = 0.012879517917360306;

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
    msg.setTimeStamp(0.4236389329910447);
    msg.setSource(29639U);
    msg.setSourceEntity(191U);
    msg.setDestination(61349U);
    msg.setDestinationEntity(181U);
    msg.validity = 128U;
    msg.x = 0.9592953691940889;
    msg.y = 0.06154027816464047;
    msg.z = 0.7588048733472212;

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
    msg.setTimeStamp(0.6240489866345137);
    msg.setSource(41521U);
    msg.setSourceEntity(41U);
    msg.setDestination(55340U);
    msg.setDestinationEntity(1U);
    msg.validity = 72U;
    msg.x = 0.9991164881787709;
    msg.y = 0.5607663372566563;
    msg.z = 0.44238259413096404;

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
    msg.setTimeStamp(0.553569670458307);
    msg.setSource(57234U);
    msg.setSourceEntity(61U);
    msg.setDestination(56669U);
    msg.setDestinationEntity(12U);
    msg.validity = 16U;
    msg.x = 0.35086527683529156;
    msg.y = 0.5868608431993677;
    msg.z = 0.774407116169277;

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
    msg.setTimeStamp(0.38022868366873774);
    msg.setSource(38122U);
    msg.setSourceEntity(130U);
    msg.setDestination(10655U);
    msg.setDestinationEntity(133U);
    msg.validity = 139U;
    msg.x = 0.7378774223173657;
    msg.y = 0.01657956486813017;
    msg.z = 0.6379564648013585;

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
    msg.setTimeStamp(0.8124757137527947);
    msg.setSource(20369U);
    msg.setSourceEntity(12U);
    msg.setDestination(27383U);
    msg.setDestinationEntity(27U);
    msg.time = 0.3052227069379707;
    msg.x = 0.8552842746709667;
    msg.y = 0.9382198990554067;
    msg.z = 0.19270996625635106;

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
    msg.setTimeStamp(0.7182396332943836);
    msg.setSource(43776U);
    msg.setSourceEntity(86U);
    msg.setDestination(35494U);
    msg.setDestinationEntity(169U);
    msg.time = 0.05741548645962302;
    msg.x = 0.15235407496675246;
    msg.y = 0.23790867294244833;
    msg.z = 0.32543006092165006;

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
    msg.setTimeStamp(0.3475256590440442);
    msg.setSource(60433U);
    msg.setSourceEntity(11U);
    msg.setDestination(52038U);
    msg.setDestinationEntity(114U);
    msg.time = 0.7829373351649748;
    msg.x = 0.044075165499685265;
    msg.y = 0.3531651133335053;
    msg.z = 0.09428581824865778;

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
    msg.setTimeStamp(0.3941413607975084);
    msg.setSource(62076U);
    msg.setSourceEntity(221U);
    msg.setDestination(28006U);
    msg.setDestinationEntity(244U);
    msg.validity = 53U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7965846615982561;
    tmp_msg_0.beam_height = 0.3753492081692372;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.3920947403494105;

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
    msg.setTimeStamp(0.7106280893940026);
    msg.setSource(52843U);
    msg.setSourceEntity(108U);
    msg.setDestination(52285U);
    msg.setDestinationEntity(21U);
    msg.validity = 18U;
    msg.value = 0.0033643921607475757;

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
    msg.setTimeStamp(0.6519514963879148);
    msg.setSource(44685U);
    msg.setSourceEntity(192U);
    msg.setDestination(8255U);
    msg.setDestinationEntity(232U);
    msg.validity = 80U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9433377137678391;
    tmp_msg_0.y = 0.3676988430542445;
    tmp_msg_0.z = 0.022382988792801428;
    tmp_msg_0.phi = 0.3755283516847945;
    tmp_msg_0.theta = 0.19065952469311065;
    tmp_msg_0.psi = 0.22920112666061931;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.45906553990533017;

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
    msg.setTimeStamp(0.29291239281029635);
    msg.setSource(32941U);
    msg.setSourceEntity(107U);
    msg.setDestination(27811U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5489208656594893;

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
    msg.setTimeStamp(0.3538563421440143);
    msg.setSource(21426U);
    msg.setSourceEntity(114U);
    msg.setDestination(14350U);
    msg.setDestinationEntity(133U);
    msg.value = 0.905801610867558;

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
    msg.setTimeStamp(0.4102668080933227);
    msg.setSource(60177U);
    msg.setSourceEntity(128U);
    msg.setDestination(33431U);
    msg.setDestinationEntity(246U);
    msg.value = 0.48570555243171387;

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
    msg.setTimeStamp(0.45847359974567004);
    msg.setSource(52478U);
    msg.setSourceEntity(95U);
    msg.setDestination(16361U);
    msg.setDestinationEntity(247U);
    msg.value = 0.4828771375304107;

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
    msg.setTimeStamp(0.24133038566860487);
    msg.setSource(40352U);
    msg.setSourceEntity(44U);
    msg.setDestination(33099U);
    msg.setDestinationEntity(192U);
    msg.value = 0.2771362831575265;

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
    msg.setTimeStamp(0.44951338278379205);
    msg.setSource(12373U);
    msg.setSourceEntity(28U);
    msg.setDestination(38532U);
    msg.setDestinationEntity(117U);
    msg.value = 0.05416188069650174;

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
    msg.setTimeStamp(0.5817112977791477);
    msg.setSource(24658U);
    msg.setSourceEntity(170U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(28U);
    msg.value = 0.9498244909169198;

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
    msg.setTimeStamp(0.17056811972505637);
    msg.setSource(43939U);
    msg.setSourceEntity(190U);
    msg.setDestination(881U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6173639523853849;

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
    msg.setTimeStamp(0.18014926635631556);
    msg.setSource(58030U);
    msg.setSourceEntity(106U);
    msg.setDestination(51379U);
    msg.setDestinationEntity(157U);
    msg.value = 0.33860482808302905;

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
    msg.setTimeStamp(0.3212818402134052);
    msg.setSource(56180U);
    msg.setSourceEntity(178U);
    msg.setDestination(4400U);
    msg.setDestinationEntity(153U);
    msg.value = 0.17309575159334578;

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
    msg.setTimeStamp(0.034472305440148454);
    msg.setSource(12410U);
    msg.setSourceEntity(23U);
    msg.setDestination(29323U);
    msg.setDestinationEntity(228U);
    msg.value = 0.3643035523792507;

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
    msg.setTimeStamp(0.3272331168524242);
    msg.setSource(59779U);
    msg.setSourceEntity(99U);
    msg.setDestination(56129U);
    msg.setDestinationEntity(129U);
    msg.value = 0.38121184195298463;

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
    msg.setTimeStamp(0.3972159740975495);
    msg.setSource(7624U);
    msg.setSourceEntity(24U);
    msg.setDestination(63700U);
    msg.setDestinationEntity(219U);
    msg.value = 0.12794153185094226;

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
    msg.setTimeStamp(0.5124934479635597);
    msg.setSource(40312U);
    msg.setSourceEntity(85U);
    msg.setDestination(36682U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8607416203307389;

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
    msg.setTimeStamp(0.6090027635316481);
    msg.setSource(47425U);
    msg.setSourceEntity(44U);
    msg.setDestination(39839U);
    msg.setDestinationEntity(48U);
    msg.value = 0.2626842065176265;

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
    msg.setTimeStamp(0.8885035454446341);
    msg.setSource(16061U);
    msg.setSourceEntity(122U);
    msg.setDestination(24437U);
    msg.setDestinationEntity(139U);
    msg.value = 0.5208393409789719;

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
    msg.setTimeStamp(0.7857946515904491);
    msg.setSource(14026U);
    msg.setSourceEntity(56U);
    msg.setDestination(37298U);
    msg.setDestinationEntity(60U);
    msg.value = 0.3853011353467167;

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
    msg.setTimeStamp(0.04497262441651895);
    msg.setSource(38878U);
    msg.setSourceEntity(99U);
    msg.setDestination(15124U);
    msg.setDestinationEntity(122U);
    msg.value = 0.1164346620659008;

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
    msg.setTimeStamp(0.6198824362686907);
    msg.setSource(49477U);
    msg.setSourceEntity(133U);
    msg.setDestination(64448U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8426250350198736;

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
    msg.setTimeStamp(0.0774711357522212);
    msg.setSource(51432U);
    msg.setSourceEntity(155U);
    msg.setDestination(15437U);
    msg.setDestinationEntity(52U);
    msg.value = 0.49678275030071817;

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
    msg.setTimeStamp(0.9281058654069696);
    msg.setSource(47989U);
    msg.setSourceEntity(162U);
    msg.setDestination(1861U);
    msg.setDestinationEntity(11U);
    msg.value = 0.12059928110139306;

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
    msg.setTimeStamp(0.31095698953195305);
    msg.setSource(52633U);
    msg.setSourceEntity(52U);
    msg.setDestination(16629U);
    msg.setDestinationEntity(87U);
    msg.value = 0.40755162934078504;

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
    msg.setTimeStamp(0.9504316913195354);
    msg.setSource(26831U);
    msg.setSourceEntity(208U);
    msg.setDestination(45924U);
    msg.setDestinationEntity(74U);
    msg.value = 0.5609053469157405;

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
    msg.setTimeStamp(0.7148500488596625);
    msg.setSource(20508U);
    msg.setSourceEntity(239U);
    msg.setDestination(1611U);
    msg.setDestinationEntity(120U);
    msg.value = 0.6152680049331295;

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
    msg.setTimeStamp(0.7443180673197931);
    msg.setSource(34941U);
    msg.setSourceEntity(214U);
    msg.setDestination(65174U);
    msg.setDestinationEntity(154U);
    msg.direction = 0.4308138100872818;
    msg.speed = 0.8235379711287868;

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
    msg.setTimeStamp(0.5190490852394677);
    msg.setSource(64458U);
    msg.setSourceEntity(36U);
    msg.setDestination(12537U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.41605487576883915;
    msg.speed = 0.2886045361695424;

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
    msg.setTimeStamp(0.8121484970836923);
    msg.setSource(65500U);
    msg.setSourceEntity(244U);
    msg.setDestination(13444U);
    msg.setDestinationEntity(76U);
    msg.direction = 0.5814606081182011;
    msg.speed = 0.25339426850818647;

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
    msg.setTimeStamp(0.5176670114164749);
    msg.setSource(37007U);
    msg.setSourceEntity(186U);
    msg.setDestination(51585U);
    msg.setDestinationEntity(71U);
    msg.value = 0.15633606198024175;

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
    msg.setTimeStamp(0.9379232068871396);
    msg.setSource(44829U);
    msg.setSourceEntity(219U);
    msg.setDestination(6006U);
    msg.setDestinationEntity(77U);
    msg.value = 0.7478473323543294;

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
    msg.setTimeStamp(0.22050377960069079);
    msg.setSource(50543U);
    msg.setSourceEntity(117U);
    msg.setDestination(57055U);
    msg.setDestinationEntity(214U);
    msg.value = 0.5360600541184052;

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
    msg.setTimeStamp(0.6280831914738109);
    msg.setSource(26301U);
    msg.setSourceEntity(198U);
    msg.setDestination(1454U);
    msg.setDestinationEntity(228U);
    msg.value.assign("YNIVSBDEOKFCHUVNFFQQUMAXDBRIAKZJYBVAEGFWUZVCTTEJZHKALLLFMQELJGXYYYYGWHUGSKZWWPPWALNXSJHLZIYXDVZXDMOCCECHIDOXJAKMAHWZNSRNENREOSBPTMDYLDRZGAJQ");

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
    msg.setTimeStamp(0.8631431934572252);
    msg.setSource(36060U);
    msg.setSourceEntity(190U);
    msg.setDestination(17640U);
    msg.setDestinationEntity(75U);
    msg.value.assign("TGYGWQERSMOLEWOJJZPOCEKZEBAURYHCVDIFKZWNLIZDOAOOJCXDTISFMCWTKYQNSLLHGRTXNBYWXRBHKAVGDNMZYZXRTBTTVPXUJOPFSNQGJCATZYVBNLKUTBAVDAVWDYJAFCKACELBUXQOFMLYUEXRSBXGXHNSTOVXFIJCCGZFDLKEEFSMHWIIIRPMISYWU");

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
    msg.setTimeStamp(0.5896286898533207);
    msg.setSource(16244U);
    msg.setSourceEntity(17U);
    msg.setDestination(29136U);
    msg.setDestinationEntity(106U);
    msg.value.assign("NUIPFXJPTQBWDZPNOSIYPRJVHAOSABJABSUNGJXUGEAKXYNWCPEXBHEIGPCYLRUJIMZZVOBCXIDIKKAUHMJVLCTMSLRMNTRMVWAXZBYCCNKWCYNJFFRESTCGFWR");

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
    msg.setTimeStamp(0.9224159642496346);
    msg.setSource(60622U);
    msg.setSourceEntity(35U);
    msg.setDestination(11339U);
    msg.setDestinationEntity(253U);
    const char tmp_msg_0[] = {-63, 65, -15, 61, -27, -66, 117, -14, -90, -97, 98, 91, 50, 63, -49, 99, -21, 13, -55, 91, 101, 3, -128, 99, -97, -60, -99, -98, 57, 115, 36, 55, 93, -13, 44, -5, 30, -103, -88, -109, -93, 125, -96, 109, -60, 38, -18, 93, 39, -25, -119, 13, -90, -67, 70, -99, 36, 28, -53, -98, 10, 7, 100, 35, -92, 41, -64, -63, -8, 83, -54, 83, 101, -99, -25, 109, 105, -109, 116, -39, -86, -42, 69, 76, -74, -100, -53, 5, 101, -9, -93, 1, -114, -98, 38, -13, -76, 113, 58, 97, -11, 65, 27, 1, 120, -90, -4, -111, -108, -122, -62, 71, -14, -80, 19, 5, 20, 108, 51, 122, 36, -117, -29, 93, 118, -27, -110, -51, 39, -89, -111, 59, -30, -31, 43, -90, 97, -69, -105, 76, -114, 99, -61, 106, 36};
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
    msg.setTimeStamp(0.6481838325785054);
    msg.setSource(2923U);
    msg.setSourceEntity(190U);
    msg.setDestination(63289U);
    msg.setDestinationEntity(202U);
    const char tmp_msg_0[] = {116, 27, 13, -120, 16, 20, -50, -116, -41, -54, 19, 106, -125, 105, 68, 52, -67, 115, -72, -32, 96, 69, -19, -29, 3, 123, -17, 87, 98, 62, 95, 16, 88, -60, -88, -109, 61, 23, 87, -120, 120, -106, -60, -26, 49, 81, -75, 110, -66, -5, 112, 62, 122, 118, -5, 12, -78, -82, 80, 110, -14, 31, -93, -104, -79, -33, -17, -96, -126, -50, -11, -22, 124, -106, 87, -78, 67, 83, 81, 2, 56, 76, 41, -74, -18, -79, -89, -128, -75, 112, -60, 88, -121, -43, -96, -18, -110, -33, -29, -43, 54, -85, -38, 66, 107, -42, 124, 101, 123, -55, -60, 70, 113, -101, 46, -112, 113, 73, 82, 19, -26, -97, 89, -9, 96, -118, -42, 102, -47, 5, -79, -101, 36, 117, 103, 5, 56, -34, -60, -102, -49, -93, 74, -125, -103, 6, -98, -75, 105, 12, -8, -8, 85, 59, 21, 49, -30, 90, 91, -53, -65, 22, -41, 80, 70, -99, -89, 16, 39, 27, 29, 34, 61, -120, -56, -2, 118, -90, -14, -108, -115, -99, -128, 5, 122, 28, 45, -116, 96, 27, 10, 9, 120, -30, -92, -119, -124, 118, 71, -46, -59, -127, -62, 58, 56, 78, 0, 11, 26, 104, -16, -11, -69, 35, 110, -25, 44, -76, -111, 53, -51, 120, 78, -99, 91, -47};
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
    msg.setTimeStamp(0.5784930940990699);
    msg.setSource(57243U);
    msg.setSourceEntity(61U);
    msg.setDestination(62585U);
    msg.setDestinationEntity(198U);
    const char tmp_msg_0[] = {-12, -110, -37, -80, 70, 81, 4, 118, -50, -42, 89, -55, -77, 72, 85, 51, -40, -112, -92, -96, -83, 16, 51, 11, 28, -28, 27, -81, 38, 67, 17, 69, -66, -14, -99, -120, -112, 96, 78, -1, 101, 29, -6, 71, -93, 42, -33, -128, -72, 97, -78, 46, -92, 7, -104, -92, 13, -104, -24, 61, 103, 53, -26, -66, -17, 105, -98, -103, -120, 106, 21, -104, 47, 6, -105, -84, 97, 86, -22, 99, -2, 110, 105, 96, -34, -1, -47, 12, -117, 18, -70, -12, -35, 112, 8, 41, 107, 24, -71, 19, 32, -55, -98, 104, 37, 9, -38, 108, -68, -127, 46, 99, 99, -84, -64, -62, -53, 83, 112, -3, 33, -10, -48, 85, -122, -91, -48, -23, 47, -68, 20, -21, 38, 27, 53, -124, 64, -110, -60, -123, -3, 68, 126, 26, 113, -103, -41, 47, -12};
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
    msg.setTimeStamp(0.4814846201296381);
    msg.setSource(28857U);
    msg.setSourceEntity(248U);
    msg.setDestination(21965U);
    msg.setDestinationEntity(219U);
    msg.frequency = 423917416U;
    msg.min_range = 32995U;
    msg.max_range = 40698U;

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
    msg.setTimeStamp(0.17566919089528243);
    msg.setSource(61838U);
    msg.setSourceEntity(30U);
    msg.setDestination(9396U);
    msg.setDestinationEntity(17U);
    msg.frequency = 181400770U;
    msg.min_range = 5877U;
    msg.max_range = 31919U;

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
    msg.setTimeStamp(0.869433933434621);
    msg.setSource(24674U);
    msg.setSourceEntity(53U);
    msg.setDestination(20546U);
    msg.setDestinationEntity(123U);
    msg.frequency = 4132162897U;
    msg.min_range = 50874U;
    msg.max_range = 43312U;

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
    msg.setTimeStamp(0.20197876727707842);
    msg.setSource(17140U);
    msg.setSourceEntity(136U);
    msg.setDestination(25613U);
    msg.setDestinationEntity(252U);
    msg.type = 39U;
    msg.frequency = 2330036644U;
    msg.min_range = 19628U;
    msg.max_range = 14408U;
    msg.bits_per_point = 145U;
    msg.scale_factor = 0.9351741719344729;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.052898662790728634;
    tmp_msg_0.beam_height = 0.8973307813481393;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-37, 3, 88, 121, 46, -61, -9, 114, -13, 14, 50, -79, 25, 75, -25, 48, 86, -98, 35, -127, 116, -61, -113, 123, -82, -86, -74, 2, -93, 82, -73, -15, -104, 77, -99, -23, 79, -68, 88, -66, -118, 35, -86, 99, 34, 42, 7, -2, -11, -8, 82, 29, 114, -67, -112, 16, -21, 10, 30, -21, 7, 0, -95, -56, 42, -22, -18, 29, 62, 55, -87, 99, 2, -117, -66, 4, 10, -54, -125, -82, 30, -95, -108, 38, -77, 103, 27, 121, 86, 57, -21, -65, -16, -79, 74, -1, 17, -106, 93, -19, 17, -84, -24};
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
    msg.setTimeStamp(0.07757033788787071);
    msg.setSource(43081U);
    msg.setSourceEntity(31U);
    msg.setDestination(24069U);
    msg.setDestinationEntity(204U);
    msg.type = 215U;
    msg.frequency = 3831198426U;
    msg.min_range = 32507U;
    msg.max_range = 15857U;
    msg.bits_per_point = 86U;
    msg.scale_factor = 0.7740951855024469;
    const char tmp_msg_0[] = {91, 124, -127, 70, 115, 1, 46, -105, -68, -77, -61, 54, 40, -25, -11, -85, -2, 98, 79, -113, -113, 114, -120, 85, -29, 13, -116, -61, 79, -115, -2, -109, -78, -1, -113, 105, -75, 26, -116, 35, 68, 61, -44, -84, -87, -58, -43, -43, -109, -53, -54, -76, -85, 110, -115, -110, -14, 99, -119, 95, -56, -28, 85, -74, -43, 4, -56, -15, -55, -44, 28, -30, -44, -1, -34, -116, -86, 57, -18, 113, 81, 72, -109, -49, -108, -16, -75};
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
    msg.setTimeStamp(0.08165915657873801);
    msg.setSource(12721U);
    msg.setSourceEntity(93U);
    msg.setDestination(56738U);
    msg.setDestinationEntity(195U);
    msg.type = 205U;
    msg.frequency = 1316316063U;
    msg.min_range = 60615U;
    msg.max_range = 52252U;
    msg.bits_per_point = 61U;
    msg.scale_factor = 0.7623289678219517;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7597578442693912;
    tmp_msg_0.beam_height = 0.817191715704137;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {39, -83, -67, -20, -4, -24, 120, -110, -43, -94, 81, 79, 108, -25, 90, 75, 10, -32, 3, 40, 96, 15, -49, -33, -127, 25, 68, -15, 28, 36, -85, -30, -67, -120, 100, -36, -117, -85, -70, -4, -47, 28, 36, -128, 126, 55, -85, 48, 32, -114, 69, 74, 125, -40, -24, 94, -36, -41, 19, 78, -48, -13, -112, -66, 3, -57, 57, 13, 29, 15, -87, -49, -51};
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
    msg.setTimeStamp(0.9506146999439087);
    msg.setSource(16468U);
    msg.setSourceEntity(59U);
    msg.setDestination(33509U);
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
    msg.setTimeStamp(0.6563664841606051);
    msg.setSource(24252U);
    msg.setSourceEntity(15U);
    msg.setDestination(31180U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.1091511534828905);
    msg.setSource(57059U);
    msg.setSourceEntity(189U);
    msg.setDestination(21986U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.901027059749564);
    msg.setSource(37120U);
    msg.setSourceEntity(56U);
    msg.setDestination(40392U);
    msg.setDestinationEntity(146U);
    msg.op = 237U;

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
    msg.setTimeStamp(0.851958661929915);
    msg.setSource(42120U);
    msg.setSourceEntity(25U);
    msg.setDestination(56884U);
    msg.setDestinationEntity(23U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.1572530232464967);
    msg.setSource(60379U);
    msg.setSourceEntity(7U);
    msg.setDestination(10370U);
    msg.setDestinationEntity(127U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.4180961099760214);
    msg.setSource(17500U);
    msg.setSourceEntity(87U);
    msg.setDestination(30640U);
    msg.setDestinationEntity(54U);
    msg.value = 0.7336411079516042;
    msg.confidence = 0.04376315295997635;
    msg.opmodes.assign("MNXLWPSCTBDFXPTRCKJQZLGCSHWIFOKLXQMASHGYSUSVGJRKWCAGQQCOLSQHERYKXMHRSNJHVAASVVLDIAGMMUDRLMIHJZCRFTNBDROZVAYOERHQFNFFJBZCGOKFJPOAPIJJLVYKHCUPMKOMVEQXUPVPVZLWILZTKHOETWEXAZYDEHZIWYTFBYNBKGDBIPWTUUDXSNBUFRYZSCUPRIACXYELBEUNWTIVWQZNMXQBAGOJTIEJYXD");

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
    msg.setTimeStamp(0.8730707097858297);
    msg.setSource(22744U);
    msg.setSourceEntity(112U);
    msg.setDestination(7273U);
    msg.setDestinationEntity(115U);
    msg.value = 0.2060499147524676;
    msg.confidence = 0.5907843883689479;
    msg.opmodes.assign("OIVAKNTLUMYNRAZCFJBQFOWRRREXXEURZJZPUSIMDHMWHWFSOHWIIYKHRTYVDGKLXPDIMNMJZWWEQGSAEMQXYSGLKQZFADZSJIEFAQCQNQTFLWSZDVHBUHIKWIGLAYBKLBXDGEXAWFVBPJPGTQVOPGZVOKVOTSSUHZXUFUBJBCNOHRTHTPSMIUPACRKAXBCJGYDDFRGLUPEBKQAPNQYECXNDCOYESWPJYFMMBUTLCVONMTYJNVLKNHDVJRL");

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
    msg.setTimeStamp(0.4728399062606814);
    msg.setSource(57545U);
    msg.setSourceEntity(110U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(64U);
    msg.value = 0.965055834397531;
    msg.confidence = 0.551773839750018;
    msg.opmodes.assign("ZPRQSYSPTSMIIKQAJPHQKXGBVSDEUHJMKKZFNDIWFBWYHTEGBBXCUKNNFYXOVVYOFXZWDTHQGWJFNCIAXEESOYKHXKUWBTZMJZDDHCLUMFXQXAIUZMODBNQTKVRNPHZUUJL");

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
    msg.setTimeStamp(0.5165025466514878);
    msg.setSource(36297U);
    msg.setSourceEntity(41U);
    msg.setDestination(33244U);
    msg.setDestinationEntity(22U);
    msg.itow = 1757208509U;
    msg.lat = 0.6623816547914504;
    msg.lon = 0.697828969410651;
    msg.height_ell = 0.03995374688418041;
    msg.height_sea = 0.23383057767420212;
    msg.hacc = 0.34453589038802956;
    msg.vacc = 0.024757597761935424;
    msg.vel_n = 0.44774621957520266;
    msg.vel_e = 0.022450493596201104;
    msg.vel_d = 0.42972730971460393;
    msg.speed = 0.6681120990414096;
    msg.gspeed = 0.8991013790402056;
    msg.heading = 0.023438862396451432;
    msg.sacc = 0.6493534134495121;
    msg.cacc = 0.9074508450131614;

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
    msg.setTimeStamp(0.10401235487218585);
    msg.setSource(12889U);
    msg.setSourceEntity(38U);
    msg.setDestination(9502U);
    msg.setDestinationEntity(239U);
    msg.itow = 3951161394U;
    msg.lat = 0.4422535090308368;
    msg.lon = 0.9004691975890359;
    msg.height_ell = 0.20170232498895624;
    msg.height_sea = 0.6072062153524026;
    msg.hacc = 0.19233867869850263;
    msg.vacc = 0.9959114060682952;
    msg.vel_n = 0.9231902399291956;
    msg.vel_e = 0.8142825634474555;
    msg.vel_d = 0.23682530018559989;
    msg.speed = 0.5902861213326809;
    msg.gspeed = 0.9986772375090969;
    msg.heading = 0.08518545152462542;
    msg.sacc = 0.7822551422985444;
    msg.cacc = 0.572313318944142;

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
    msg.setTimeStamp(0.15847420910660104);
    msg.setSource(50493U);
    msg.setSourceEntity(87U);
    msg.setDestination(11700U);
    msg.setDestinationEntity(254U);
    msg.itow = 1526930008U;
    msg.lat = 0.35456898948748794;
    msg.lon = 0.4494175288690575;
    msg.height_ell = 0.7736187067478268;
    msg.height_sea = 0.48799573353161196;
    msg.hacc = 0.5358739004740335;
    msg.vacc = 0.30284440457547324;
    msg.vel_n = 0.5892543548080562;
    msg.vel_e = 0.4018530278764332;
    msg.vel_d = 0.7139367133598146;
    msg.speed = 0.4891148416846802;
    msg.gspeed = 0.4076546516090379;
    msg.heading = 0.1016905258807187;
    msg.sacc = 0.4465170405245702;
    msg.cacc = 0.10416816690186492;

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
    msg.setTimeStamp(0.864229398585012);
    msg.setSource(64911U);
    msg.setSourceEntity(82U);
    msg.setDestination(4551U);
    msg.setDestinationEntity(105U);
    msg.id = 52U;
    msg.value = 0.15132602918747717;

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
    msg.setTimeStamp(0.268750902708206);
    msg.setSource(43378U);
    msg.setSourceEntity(164U);
    msg.setDestination(30170U);
    msg.setDestinationEntity(180U);
    msg.id = 225U;
    msg.value = 0.2914339289196315;

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
    msg.setTimeStamp(0.3624014114913008);
    msg.setSource(56314U);
    msg.setSourceEntity(54U);
    msg.setDestination(49263U);
    msg.setDestinationEntity(238U);
    msg.id = 199U;
    msg.value = 0.02172079024014295;

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
    msg.setTimeStamp(0.06375920755530251);
    msg.setSource(41051U);
    msg.setSourceEntity(246U);
    msg.setDestination(19232U);
    msg.setDestinationEntity(69U);
    msg.x = 0.541087106383679;
    msg.y = 0.4922694744486207;
    msg.z = 0.33826815116431586;
    msg.phi = 0.0021726882831796246;
    msg.theta = 0.4134139769026314;
    msg.psi = 0.9133705761517542;

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
    msg.setTimeStamp(0.5224985563357015);
    msg.setSource(8858U);
    msg.setSourceEntity(116U);
    msg.setDestination(42955U);
    msg.setDestinationEntity(97U);
    msg.x = 0.6409316983757434;
    msg.y = 0.6266471665344406;
    msg.z = 0.23475140362115143;
    msg.phi = 0.45900749233108984;
    msg.theta = 0.9692623933062017;
    msg.psi = 0.43444368002302014;

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
    msg.setTimeStamp(0.8440536200865492);
    msg.setSource(20698U);
    msg.setSourceEntity(214U);
    msg.setDestination(33600U);
    msg.setDestinationEntity(198U);
    msg.x = 0.5311412963728783;
    msg.y = 0.6552576038440263;
    msg.z = 0.2354010722914962;
    msg.phi = 0.8334657723973316;
    msg.theta = 0.7629260517634777;
    msg.psi = 0.21897828570904398;

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
    msg.setTimeStamp(0.6849788057527344);
    msg.setSource(38222U);
    msg.setSourceEntity(232U);
    msg.setDestination(29194U);
    msg.setDestinationEntity(153U);
    msg.beam_width = 0.41304414952976654;
    msg.beam_height = 0.10066246019520964;

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
    msg.setTimeStamp(0.3874028310099794);
    msg.setSource(49901U);
    msg.setSourceEntity(15U);
    msg.setDestination(29217U);
    msg.setDestinationEntity(250U);
    msg.beam_width = 0.009942490061826681;
    msg.beam_height = 0.44648233359884437;

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
    msg.setTimeStamp(0.24750064403545424);
    msg.setSource(8116U);
    msg.setSourceEntity(130U);
    msg.setDestination(55369U);
    msg.setDestinationEntity(237U);
    msg.beam_width = 0.8554663353192311;
    msg.beam_height = 0.7172247604242836;

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
    msg.setTimeStamp(0.10310327746935677);
    msg.setSource(34301U);
    msg.setSourceEntity(79U);
    msg.setDestination(11473U);
    msg.setDestinationEntity(150U);
    msg.id = 230U;
    msg.zoom = 212U;
    msg.action = 66U;

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
    msg.setTimeStamp(0.7684829007948943);
    msg.setSource(9699U);
    msg.setSourceEntity(50U);
    msg.setDestination(12282U);
    msg.setDestinationEntity(203U);
    msg.id = 66U;
    msg.zoom = 237U;
    msg.action = 111U;

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
    msg.setTimeStamp(0.023027173764228914);
    msg.setSource(52052U);
    msg.setSourceEntity(71U);
    msg.setDestination(58256U);
    msg.setDestinationEntity(18U);
    msg.id = 107U;
    msg.zoom = 229U;
    msg.action = 84U;

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
    msg.setTimeStamp(0.469415041703788);
    msg.setSource(10698U);
    msg.setSourceEntity(12U);
    msg.setDestination(40805U);
    msg.setDestinationEntity(253U);
    msg.id = 240U;
    msg.value = 0.10155025456997191;

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
    msg.setTimeStamp(0.11381930324829315);
    msg.setSource(25963U);
    msg.setSourceEntity(0U);
    msg.setDestination(59303U);
    msg.setDestinationEntity(120U);
    msg.id = 67U;
    msg.value = 0.09193276059966138;

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
    msg.setTimeStamp(0.6490310178534245);
    msg.setSource(47013U);
    msg.setSourceEntity(62U);
    msg.setDestination(53488U);
    msg.setDestinationEntity(166U);
    msg.id = 52U;
    msg.value = 0.23569130399607174;

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
    msg.setTimeStamp(0.0636405400372656);
    msg.setSource(63657U);
    msg.setSourceEntity(104U);
    msg.setDestination(26555U);
    msg.setDestinationEntity(187U);
    msg.id = 16U;
    msg.value = 0.3786517596437967;

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
    msg.setTimeStamp(0.04356651720405791);
    msg.setSource(17824U);
    msg.setSourceEntity(171U);
    msg.setDestination(62201U);
    msg.setDestinationEntity(142U);
    msg.id = 159U;
    msg.value = 0.6632235436170152;

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
    msg.setTimeStamp(0.2650344607660501);
    msg.setSource(24010U);
    msg.setSourceEntity(140U);
    msg.setDestination(15869U);
    msg.setDestinationEntity(151U);
    msg.id = 194U;
    msg.value = 0.7208911329898496;

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
    msg.setTimeStamp(0.7125706132791043);
    msg.setSource(60175U);
    msg.setSourceEntity(250U);
    msg.setDestination(30059U);
    msg.setDestinationEntity(134U);
    msg.id = 12U;
    msg.angle = 0.7761940215393285;

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
    msg.setTimeStamp(0.9918494504709781);
    msg.setSource(5474U);
    msg.setSourceEntity(34U);
    msg.setDestination(35150U);
    msg.setDestinationEntity(128U);
    msg.id = 36U;
    msg.angle = 0.4858766790743907;

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
    msg.setTimeStamp(0.6056643041018321);
    msg.setSource(13236U);
    msg.setSourceEntity(83U);
    msg.setDestination(1943U);
    msg.setDestinationEntity(247U);
    msg.id = 235U;
    msg.angle = 0.8224909106516278;

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
    msg.setTimeStamp(0.6803528680569072);
    msg.setSource(38539U);
    msg.setSourceEntity(51U);
    msg.setDestination(15823U);
    msg.setDestinationEntity(7U);
    msg.op = 170U;
    msg.actions.assign("TTDQMFFRGJFSPGBMMSLUJNSWTWORTASBZEMNOTIDLELICHAESOKPJYJOHYMVSAAKBXNKIDKHWQNXDWXNJBMSWFCUBYJZZDZSZPRXWFXJNMHEKUGDRPTUCABDMXUMRKZKZFNATXPWGZNPKYLZBANEGUUEKNVIYQOFHRHCQPIGAVB");

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
    msg.setTimeStamp(0.3321307364445135);
    msg.setSource(23385U);
    msg.setSourceEntity(203U);
    msg.setDestination(34309U);
    msg.setDestinationEntity(174U);
    msg.op = 58U;
    msg.actions.assign("GSDPWCMXSEACWDMHVUKOCLEATQWSFGYJTVBTHBXDKWJLFQVBRZRDERSFRQIMURCBHIAEJHMTIYYNPNMZUDYFEMFNKSXFPCYQBWQWLMFEALZUJSNMIAVUKLAXLILZGJUAFBJVQPZOEKWTNXGNCJHRGYYNB");

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
    msg.setTimeStamp(0.1796352925177609);
    msg.setSource(46112U);
    msg.setSourceEntity(145U);
    msg.setDestination(44737U);
    msg.setDestinationEntity(82U);
    msg.op = 69U;
    msg.actions.assign("MGVZNIMELRAUEFYQJDPIHVDJWSDYSEEHGQXOVPFCEPLBUEWTQQZIZSBHRXMSGMICCMYNAHFPNXSCDTGWWAWQZDKMMUPOWESRTQIJXJUFIVKLAXHUTXBKJMGKOWCDSCRGXMVVLEAXYBQDZSJPJTLZPKUJVCNPBBHJVRPOFABKHKZVPZIWFLBLNQQLMV");

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
    msg.setTimeStamp(0.5341277072667738);
    msg.setSource(5331U);
    msg.setSourceEntity(151U);
    msg.setDestination(7658U);
    msg.setDestinationEntity(105U);
    msg.actions.assign("WROJJXWIERYDHGLIBJPGDXXMKUNTNTUGMSWJXYCNBFRNFUIPAGWAPZZRYHYORHVFTYSVHSZFVQRDOFDEKYHOYEOCXBAEPXGQIAKLJCZHVEFBHCRHFTDSWSBBOEMAFLZDHAAUQMWPBBVKOPNKMTMCEKZSJCQZCIULVNQTZQNVDPYLYEZOLKNKNDILTVQTKFWV");

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
    msg.setTimeStamp(0.3604952258063875);
    msg.setSource(43811U);
    msg.setSourceEntity(178U);
    msg.setDestination(57204U);
    msg.setDestinationEntity(96U);
    msg.actions.assign("PVGVPFXJIMLPGDEABYEMPKLJBHEOUGJPDCJQAZEDMZL");

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
    msg.setTimeStamp(0.1197669148538556);
    msg.setSource(14790U);
    msg.setSourceEntity(173U);
    msg.setDestination(20541U);
    msg.setDestinationEntity(244U);
    msg.actions.assign("BZNSTCLBPXTYDTQIJOTXZOWPYGSQLNKDHWTRAZWSHQXCSYHMFVFQPURKOIOWVQGJDMPAKKFDMRKEELJIODEXBNJEBBYILFPSVUOAVTSNNEGNRJKUFDMSCNHPXGLMUDYIBFBVBHHLNOIRAPNMEKZAFZETZXUER");

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
    msg.setTimeStamp(0.009275755255393259);
    msg.setSource(40848U);
    msg.setSourceEntity(135U);
    msg.setDestination(62242U);
    msg.setDestinationEntity(86U);
    msg.button = 23U;
    msg.value = 120U;

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
    msg.setTimeStamp(0.8863380323118812);
    msg.setSource(46060U);
    msg.setSourceEntity(68U);
    msg.setDestination(7839U);
    msg.setDestinationEntity(210U);
    msg.button = 121U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.8819732895602644);
    msg.setSource(3425U);
    msg.setSourceEntity(129U);
    msg.setDestination(39360U);
    msg.setDestinationEntity(53U);
    msg.button = 66U;
    msg.value = 22U;

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
    msg.setTimeStamp(0.31611724440508915);
    msg.setSource(59785U);
    msg.setSourceEntity(194U);
    msg.setDestination(53164U);
    msg.setDestinationEntity(159U);
    msg.op = 81U;
    msg.text.assign("LPXCOHZZWRSIFPELCDVBNZJGAWSDWPPIFUZRYFKKKH");

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
    msg.setTimeStamp(0.2208878057287067);
    msg.setSource(45376U);
    msg.setSourceEntity(56U);
    msg.setDestination(19959U);
    msg.setDestinationEntity(110U);
    msg.op = 142U;
    msg.text.assign("ESZWORBUNVOBJAGBDSOHGQAXUGFCQSGJMVHTZOLEXMPDPCXOLBPRZFTFUKXIDCFYXUZK");

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
    msg.setTimeStamp(0.6549461640399407);
    msg.setSource(39395U);
    msg.setSourceEntity(208U);
    msg.setDestination(55420U);
    msg.setDestinationEntity(119U);
    msg.op = 106U;
    msg.text.assign("PXRQBJXSGHPJANPXVZWHYFZIJOOIJWBQSWDACMJZDYWAFGEVXYIDYQMVBQRHZTTDUNNPLYLMJOLWYPVJETDWDUFCXZMZHBTXZUDSIAHCBAIOFMRCEVKFXEKTKAURPJUWGSFPPKGTRSEWSLNVOABLSLRPFBHKCGKAEQNAFTXIEGLMIUMNYTCVJQVENQZPRKYWSLGEKOFERUZFNCHVGHCAKLDXMQSHLNTKGQCBSUQDNDUXMBROIOGJBCVOTMRHWY");

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
    msg.setTimeStamp(0.7156156129660297);
    msg.setSource(48996U);
    msg.setSourceEntity(186U);
    msg.setDestination(63079U);
    msg.setDestinationEntity(23U);
    msg.op = 180U;
    msg.time_remain = 0.9913497617318794;
    msg.sched_time = 0.555484888586502;

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
    msg.setTimeStamp(0.10500731021538634);
    msg.setSource(31539U);
    msg.setSourceEntity(193U);
    msg.setDestination(12840U);
    msg.setDestinationEntity(149U);
    msg.op = 233U;
    msg.time_remain = 0.060988979565560486;
    msg.sched_time = 0.4247364110213693;

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
    msg.setTimeStamp(0.9251723415937364);
    msg.setSource(5116U);
    msg.setSourceEntity(11U);
    msg.setDestination(59761U);
    msg.setDestinationEntity(228U);
    msg.op = 175U;
    msg.time_remain = 0.5310411803599531;
    msg.sched_time = 0.3782591966048964;

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
    msg.setTimeStamp(0.737866305484979);
    msg.setSource(50829U);
    msg.setSourceEntity(10U);
    msg.setDestination(10077U);
    msg.setDestinationEntity(18U);
    msg.name.assign("JALMRVYSWTESOLUOFKYXQCPTALBIPXOWYWGHPQSNXLQUVTJLOZWWHNGXMJRTYPVGUXHWBZQSMBYZAVNEFIUUPVBJZXFRMOOOCQRYVRZGLCOQEBFSTVDTDCHVJUABGJDKGHJFYHFFQTNWRADB");
    msg.op = 70U;
    msg.sched_time = 0.5885623003705502;

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
    msg.setTimeStamp(0.12973233631322056);
    msg.setSource(63034U);
    msg.setSourceEntity(64U);
    msg.setDestination(10411U);
    msg.setDestinationEntity(149U);
    msg.name.assign("EIUEWMHYLAOAJHQLLVCNQXXCQIDXFVSAWRWJTLSKHGXBLFJYQEDIOPQXUVY");
    msg.op = 121U;
    msg.sched_time = 0.19433811622347563;

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
    msg.setTimeStamp(0.019772896948774488);
    msg.setSource(60349U);
    msg.setSourceEntity(204U);
    msg.setDestination(2563U);
    msg.setDestinationEntity(216U);
    msg.name.assign("WTQVKTIBYZNXXSGXNZOZBJLISEFPPMPPFGDCPPDDOXEOVRMTFRUHFNRLUYPJNIVFMEVRCXCUKQRHHCZBWJGDHTGBSNIBMAGZNIPTJWNQBSYLVFTQOJFJRLQWSMQOKLF");
    msg.op = 11U;
    msg.sched_time = 0.15331429478598746;

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
    msg.setTimeStamp(0.71317419559921);
    msg.setSource(21314U);
    msg.setSourceEntity(245U);
    msg.setDestination(43231U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.6247348444403718);
    msg.setSource(62154U);
    msg.setSourceEntity(161U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.12359450682790296);
    msg.setSource(37162U);
    msg.setSourceEntity(26U);
    msg.setDestination(54567U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.8567872389325699);
    msg.setSource(42221U);
    msg.setSourceEntity(249U);
    msg.setDestination(63727U);
    msg.setDestinationEntity(16U);
    msg.name.assign("LHEYWTEUQXMSVSCZFVVQRSKXNLTFUGLOVWPYJUOBJGQXKMDXGGYLVGUADATEQRCTUIOYWAWMBQECHSMETDAKOVBPQKAOENRJLFKWBIKHIZCAZGSUFFFWSIQBWJFIJYZBUOSTCSHSCNKZTLWRTKML");
    msg.state = 164U;

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
    msg.setTimeStamp(0.5896815144916757);
    msg.setSource(11502U);
    msg.setSourceEntity(86U);
    msg.setDestination(41980U);
    msg.setDestinationEntity(182U);
    msg.name.assign("BFYVCKZQIJTKBPWDVXHHRSULUGTOVBSPTUTIJGPMAGOAOXPGGRHLDPKCQQZJIXOQLEVQRU");
    msg.state = 132U;

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
    msg.setTimeStamp(0.6888357836904303);
    msg.setSource(63067U);
    msg.setSourceEntity(112U);
    msg.setDestination(26909U);
    msg.setDestinationEntity(91U);
    msg.name.assign("HFSWSIEPLNFKXAUPADDMUVQQISXIRXFCTBFOCOWVHFJPIMWGCJURNLNGZLKRJTEZZIBQBEUXBYZQJOPJYBNPXHBHOEFMRGAHKTYZOWEMJJBQZGFQVPCDIXUOKVPCAWATGTEEWVADYRVDPQFGTBSTNHVKSUKWSBRCNUVKRAGZGQGOETWNJSMIRLCEZVDXSLBYHAILLSXMC");
    msg.state = 223U;

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
    msg.setTimeStamp(0.4485147259851697);
    msg.setSource(22710U);
    msg.setSourceEntity(39U);
    msg.setDestination(62520U);
    msg.setDestinationEntity(166U);
    msg.name.assign("RZVQASCTOJDERVNYTZCKGBVJFVSQMWLMLRZORPXHRUPXZWFICNENDNUFFQVZKGHCXKRTECTJHNIBLFPNVHWEKPMENYYMZUMSUMYGOGXBHJGEYGEJWYMUXRFJDTOQRCSWNJYVOPSZCCLHMNPBQALLFMYXQADQGIZOZUUEGDOMKBSDQIYOAVRDXENKLSJHBIFBBTDTODUIAUZIACAPSAOVPWKYTAGXERUSAQHJIDPT");
    msg.value = 248U;

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
    msg.setTimeStamp(0.5068413914683387);
    msg.setSource(38812U);
    msg.setSourceEntity(79U);
    msg.setDestination(23475U);
    msg.setDestinationEntity(178U);
    msg.name.assign("ERQAFJTZUIWTXYVYBQNJ");
    msg.value = 118U;

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
    msg.setTimeStamp(0.9147298103862141);
    msg.setSource(13078U);
    msg.setSourceEntity(114U);
    msg.setDestination(23573U);
    msg.setDestinationEntity(106U);
    msg.name.assign("XIPCYSHNPQUZLWLFUATTEXCOZBJ");
    msg.value = 6U;

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
    msg.setTimeStamp(0.894758963547933);
    msg.setSource(41778U);
    msg.setSourceEntity(159U);
    msg.setDestination(20714U);
    msg.setDestinationEntity(117U);
    msg.name.assign("LFZEVDEAWTKEOOENHCPDRSSSTNYL");

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
    msg.setTimeStamp(0.8575058850778482);
    msg.setSource(23018U);
    msg.setSourceEntity(110U);
    msg.setDestination(317U);
    msg.setDestinationEntity(64U);
    msg.name.assign("HBWIUQPKCGTQFEJGHQCJADKSCGIZCSNYBIGSSXGAKUMALQIKUWDIOSOBQZNZJXMEVQLJQWMSLLQRKHFAXJUFZFADPL");

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
    msg.setTimeStamp(0.3888140483409711);
    msg.setSource(3004U);
    msg.setSourceEntity(180U);
    msg.setDestination(7891U);
    msg.setDestinationEntity(247U);
    msg.name.assign("CZQIUPYNIMKYNWZSQHNJNMVRTLWXSKEBFCWVDCJRRLGPHIDLVAOICVVKZHAFZBUHPSGAPTDJHKLOMTBUULJPINNNFEYGMORTQNXZOBKWAFVFAAQSXGZKWKVODOCUFHEYESUJIYTQABMLKFEPSGKAZKEJEBJXZHBJXXISLOOYGDPA");

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
    msg.setTimeStamp(0.3462868896412551);
    msg.setSource(23096U);
    msg.setSourceEntity(244U);
    msg.setDestination(58041U);
    msg.setDestinationEntity(184U);
    msg.name.assign("XWZHKKOYHPIIQCDSLZJQABCBZ");
    msg.value = 149U;

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
    msg.setTimeStamp(0.6337114021430311);
    msg.setSource(14573U);
    msg.setSourceEntity(37U);
    msg.setDestination(44390U);
    msg.setDestinationEntity(128U);
    msg.name.assign("WLREYVFYQLGWAWBLPNSNNMINYVPJMYHQSXVTRWMXBLPCQEISDVCAHZAVGHTUIAGWCCYBIVQWZOUOHNKNPLZEOFEERIMTSYFWYP");
    msg.value = 61U;

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
    msg.setTimeStamp(0.23174243531588123);
    msg.setSource(25362U);
    msg.setSourceEntity(191U);
    msg.setDestination(45064U);
    msg.setDestinationEntity(50U);
    msg.name.assign("MUWTLUVIWCOGTTJYSGYFPRXRRKFZZUGXAIXNYANHYSEDKWCQXGJWNWJCQJDIZMAHNISBYLTJNKVTPKGLKVTUABNRIHKSJMWYHMEQACZEV");
    msg.value = 164U;

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
    msg.setTimeStamp(0.0468920873798615);
    msg.setSource(31287U);
    msg.setSourceEntity(192U);
    msg.setDestination(58814U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.8519179050982845;
    msg.lon = 0.2592582264263399;
    msg.height = 0.9772895534427685;
    msg.x = 0.9523963460533211;
    msg.y = 0.14808290280578496;
    msg.z = 0.7010772480131265;
    msg.phi = 0.166088052139575;
    msg.theta = 0.7744593015903513;
    msg.psi = 0.86525739407773;
    msg.u = 0.2683356302515323;
    msg.v = 0.8654700550118405;
    msg.w = 0.6486225002236014;
    msg.vx = 0.7634334794632494;
    msg.vy = 0.6687146486805239;
    msg.vz = 0.701706252035803;
    msg.p = 0.8743823259539447;
    msg.q = 0.7140738993630259;
    msg.r = 0.126608772176799;
    msg.depth = 0.41632201765079346;
    msg.alt = 0.047983677669928726;

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
    msg.setTimeStamp(0.7059528242508487);
    msg.setSource(55273U);
    msg.setSourceEntity(183U);
    msg.setDestination(32620U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.25641810740324855;
    msg.lon = 0.07904463697508757;
    msg.height = 0.2459447836628843;
    msg.x = 0.851888532582419;
    msg.y = 0.4453773794027407;
    msg.z = 0.6709694689898906;
    msg.phi = 0.29507072177518856;
    msg.theta = 0.9188949304383848;
    msg.psi = 0.8433995295584227;
    msg.u = 0.20702558575234287;
    msg.v = 0.7489518097912518;
    msg.w = 0.02052165770369041;
    msg.vx = 0.14492729832825257;
    msg.vy = 0.33348150948187105;
    msg.vz = 0.05643312003944967;
    msg.p = 0.4445408987134466;
    msg.q = 0.4272378816996234;
    msg.r = 0.8071303855551781;
    msg.depth = 0.30773225906182466;
    msg.alt = 0.8815730703880224;

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
    msg.setTimeStamp(0.8911130159460223);
    msg.setSource(56293U);
    msg.setSourceEntity(251U);
    msg.setDestination(27424U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.9487179846232148;
    msg.lon = 0.2861231645149447;
    msg.height = 0.27412396591948773;
    msg.x = 0.9402641005411072;
    msg.y = 0.20276633548513334;
    msg.z = 0.22635600802010358;
    msg.phi = 0.32353762678842646;
    msg.theta = 0.9835395193331161;
    msg.psi = 0.7776567753698443;
    msg.u = 0.20592361618115562;
    msg.v = 0.15821839211267963;
    msg.w = 0.928517579188042;
    msg.vx = 0.02107767398756344;
    msg.vy = 0.4099316120120654;
    msg.vz = 0.2728969557951949;
    msg.p = 0.7287069109954565;
    msg.q = 0.7856705127822464;
    msg.r = 0.41978921054637963;
    msg.depth = 0.7668974762854393;
    msg.alt = 0.9648061908594756;

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
    msg.setTimeStamp(0.4163708281900126);
    msg.setSource(29626U);
    msg.setSourceEntity(40U);
    msg.setDestination(34053U);
    msg.setDestinationEntity(92U);
    msg.x = 0.3588531950710394;
    msg.y = 0.5802479327177652;
    msg.z = 0.955375190668635;

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
    msg.setTimeStamp(0.43845525683329223);
    msg.setSource(42762U);
    msg.setSourceEntity(75U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(43U);
    msg.x = 0.8816736219059802;
    msg.y = 0.2502887040003229;
    msg.z = 0.417964388171978;

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
    msg.setTimeStamp(0.8177520990082796);
    msg.setSource(64014U);
    msg.setSourceEntity(114U);
    msg.setDestination(38953U);
    msg.setDestinationEntity(202U);
    msg.x = 0.4000798428541886;
    msg.y = 0.09410414538936984;
    msg.z = 0.4204365439949528;

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
    msg.setTimeStamp(0.9388347684295799);
    msg.setSource(24521U);
    msg.setSourceEntity(136U);
    msg.setDestination(50267U);
    msg.setDestinationEntity(136U);
    msg.value = 0.17824418520628416;

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
    msg.setTimeStamp(0.03862634096599504);
    msg.setSource(14202U);
    msg.setSourceEntity(174U);
    msg.setDestination(5350U);
    msg.setDestinationEntity(30U);
    msg.value = 0.6724195224722805;

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
    msg.setTimeStamp(0.1005878852291473);
    msg.setSource(50659U);
    msg.setSourceEntity(155U);
    msg.setDestination(18546U);
    msg.setDestinationEntity(254U);
    msg.value = 0.4256344732928039;

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
    msg.setTimeStamp(0.10109366160777289);
    msg.setSource(3775U);
    msg.setSourceEntity(22U);
    msg.setDestination(62375U);
    msg.setDestinationEntity(241U);
    msg.value = 0.9015431437385036;

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
    msg.setTimeStamp(0.5265777093313543);
    msg.setSource(23193U);
    msg.setSourceEntity(226U);
    msg.setDestination(21730U);
    msg.setDestinationEntity(208U);
    msg.value = 0.8767252810003089;

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
    msg.setTimeStamp(0.2958125571627662);
    msg.setSource(15875U);
    msg.setSourceEntity(74U);
    msg.setDestination(15424U);
    msg.setDestinationEntity(99U);
    msg.value = 0.779051486472835;

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
    msg.setTimeStamp(0.9976151385317812);
    msg.setSource(39601U);
    msg.setSourceEntity(20U);
    msg.setDestination(17865U);
    msg.setDestinationEntity(28U);
    msg.x = 0.8209695963166889;
    msg.y = 0.2856503553313616;
    msg.z = 0.13555135969253373;
    msg.phi = 0.5045545052482857;
    msg.theta = 0.12270145687070633;
    msg.psi = 0.5182542069818623;
    msg.p = 0.5377280067514177;
    msg.q = 0.3312839470095823;
    msg.r = 0.5145338599172304;
    msg.u = 0.570325482665778;
    msg.v = 0.4269480984971592;
    msg.w = 0.5663491039363966;
    msg.bias_psi = 0.38449948116588095;
    msg.bias_r = 0.7775281799299423;

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
    msg.setTimeStamp(0.5020717192234034);
    msg.setSource(48351U);
    msg.setSourceEntity(94U);
    msg.setDestination(39189U);
    msg.setDestinationEntity(231U);
    msg.x = 0.8287237072805839;
    msg.y = 0.9210677272130657;
    msg.z = 0.8330763963335799;
    msg.phi = 0.27286351530791875;
    msg.theta = 0.746029916533823;
    msg.psi = 0.368969214890721;
    msg.p = 0.9420552642866795;
    msg.q = 0.7445615578990126;
    msg.r = 0.020039689976177;
    msg.u = 0.8456375381695929;
    msg.v = 0.1786688567512037;
    msg.w = 0.23057934596871865;
    msg.bias_psi = 0.009677856067311752;
    msg.bias_r = 0.08477331867214044;

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
    msg.setTimeStamp(0.4860642596632694);
    msg.setSource(54801U);
    msg.setSourceEntity(23U);
    msg.setDestination(55586U);
    msg.setDestinationEntity(105U);
    msg.x = 0.3097062662952249;
    msg.y = 0.10266608196369964;
    msg.z = 0.44925111031967324;
    msg.phi = 0.6365815244183617;
    msg.theta = 0.715922149841621;
    msg.psi = 0.3520637159565072;
    msg.p = 0.8933285178081642;
    msg.q = 0.7022547175285152;
    msg.r = 0.8236116792590603;
    msg.u = 0.9576272698165308;
    msg.v = 0.30199544793970656;
    msg.w = 0.7220474092518497;
    msg.bias_psi = 0.6195508402701528;
    msg.bias_r = 0.8117351165371098;

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
    msg.setTimeStamp(0.3144840421932944);
    msg.setSource(14514U);
    msg.setSourceEntity(224U);
    msg.setDestination(15181U);
    msg.setDestinationEntity(76U);
    msg.bias_psi = 0.8329603086856519;
    msg.bias_r = 0.31641346195192666;
    msg.cog = 0.9576830013765097;
    msg.cyaw = 0.09419449087855791;
    msg.lbl_rej_level = 0.758246866519802;
    msg.gps_rej_level = 0.6585641121904001;
    msg.custom_x = 0.9451501911735717;
    msg.custom_y = 0.1458248818043778;
    msg.custom_z = 0.3339414902870079;

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
    msg.setTimeStamp(0.11577586632438219);
    msg.setSource(34824U);
    msg.setSourceEntity(48U);
    msg.setDestination(63907U);
    msg.setDestinationEntity(174U);
    msg.bias_psi = 0.9343679114132915;
    msg.bias_r = 0.1400595542437103;
    msg.cog = 0.26893608290006576;
    msg.cyaw = 0.5368441958114133;
    msg.lbl_rej_level = 0.6388850801327779;
    msg.gps_rej_level = 0.34839778646331654;
    msg.custom_x = 0.7949787169901109;
    msg.custom_y = 0.5955549732432915;
    msg.custom_z = 0.26500486786088706;

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
    msg.setTimeStamp(0.9809331778281278);
    msg.setSource(40866U);
    msg.setSourceEntity(7U);
    msg.setDestination(45610U);
    msg.setDestinationEntity(174U);
    msg.bias_psi = 0.6119044184511756;
    msg.bias_r = 0.6547069202177067;
    msg.cog = 0.7363109347451359;
    msg.cyaw = 0.8053564392200293;
    msg.lbl_rej_level = 0.8080502781426175;
    msg.gps_rej_level = 0.07566708909142061;
    msg.custom_x = 0.5518473600361866;
    msg.custom_y = 0.16385301877430947;
    msg.custom_z = 0.18915922656577777;

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
    msg.setTimeStamp(0.5978886221407967);
    msg.setSource(30489U);
    msg.setSourceEntity(209U);
    msg.setDestination(38916U);
    msg.setDestinationEntity(151U);
    msg.utc_time = 0.036640251371642285;
    msg.reason = 45U;

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
    msg.setTimeStamp(0.014298206640659505);
    msg.setSource(26844U);
    msg.setSourceEntity(121U);
    msg.setDestination(21278U);
    msg.setDestinationEntity(71U);
    msg.utc_time = 0.7657894956272081;
    msg.reason = 137U;

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
    msg.setTimeStamp(0.580927862817897);
    msg.setSource(37842U);
    msg.setSourceEntity(57U);
    msg.setDestination(4851U);
    msg.setDestinationEntity(149U);
    msg.utc_time = 0.8153475225840331;
    msg.reason = 193U;

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
    msg.setTimeStamp(0.6888254876438427);
    msg.setSource(41091U);
    msg.setSourceEntity(149U);
    msg.setDestination(47958U);
    msg.setDestinationEntity(84U);
    msg.id = 163U;
    msg.range = 0.9696103833214366;
    msg.acceptance = 164U;

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
    msg.setTimeStamp(0.9829286234166011);
    msg.setSource(53956U);
    msg.setSourceEntity(32U);
    msg.setDestination(30480U);
    msg.setDestinationEntity(129U);
    msg.id = 173U;
    msg.range = 0.24324505129669105;
    msg.acceptance = 238U;

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
    msg.setTimeStamp(0.05468778025210019);
    msg.setSource(14840U);
    msg.setSourceEntity(125U);
    msg.setDestination(47586U);
    msg.setDestinationEntity(8U);
    msg.id = 102U;
    msg.range = 0.5001000705346054;
    msg.acceptance = 35U;

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
    msg.setTimeStamp(0.4195121066088827);
    msg.setSource(47100U);
    msg.setSourceEntity(57U);
    msg.setDestination(5486U);
    msg.setDestinationEntity(171U);
    msg.type = 5U;
    msg.reason = 51U;
    msg.value = 0.4861321238167826;
    msg.timestep = 0.5807876463556764;

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
    msg.setTimeStamp(0.6527454613060548);
    msg.setSource(61391U);
    msg.setSourceEntity(56U);
    msg.setDestination(61647U);
    msg.setDestinationEntity(212U);
    msg.type = 213U;
    msg.reason = 175U;
    msg.value = 0.4581899043043328;
    msg.timestep = 0.8240603694640616;

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
    msg.setTimeStamp(0.24330904382823382);
    msg.setSource(58858U);
    msg.setSourceEntity(16U);
    msg.setDestination(22798U);
    msg.setDestinationEntity(13U);
    msg.type = 18U;
    msg.reason = 3U;
    msg.value = 0.24104038381802562;
    msg.timestep = 0.748911861628984;

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
    msg.setTimeStamp(0.846299048508958);
    msg.setSource(23825U);
    msg.setSourceEntity(230U);
    msg.setDestination(16110U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.9899691616133961);
    msg.setSource(47691U);
    msg.setSourceEntity(97U);
    msg.setDestination(11446U);
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
    msg.setTimeStamp(0.9552874137014292);
    msg.setSource(4278U);
    msg.setSourceEntity(207U);
    msg.setDestination(53164U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.9358173747830112);
    msg.setSource(53751U);
    msg.setSourceEntity(160U);
    msg.setDestination(57228U);
    msg.setDestinationEntity(105U);
    msg.beacon.assign("UHANIMRVUZQCSICIECPTVMLXRETEVDBXJKYPZAUOZZDTLOXHMYCZPNOZUFWWNRVKCSAKLXJAYCNSCGLUFPIKGEJFLHXSWPPVRDQVXUZERBIULGOJNHHGRBJXRYHUOEKBKMTGEZJFLLKBMQPSWBAXJOEQXGYIJYYXVWOIVTBGQMHBFGOSDRLOBWFBZSTPWYPENQSJKAHIRSIDRFFWWGTHYYNTGAJNKQEOQUDUMVPNAFMTCDQCHDSM");
    msg.x = 0.39998357962136366;
    msg.y = 0.5323310209638918;
    msg.depth = 0.6307249199573443;
    msg.var_x = 0.6040680905438781;
    msg.var_y = 0.6639880099117377;

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
    msg.setTimeStamp(0.5200199517886153);
    msg.setSource(34946U);
    msg.setSourceEntity(144U);
    msg.setDestination(48319U);
    msg.setDestinationEntity(110U);
    msg.beacon.assign("HMRINBNVWEXNAUFFOHXEZDQCFLVMHSPVLVBLMEALAOPRCGLZEHUQPWGVYFTGYADMGSFG");
    msg.x = 0.5061237894173743;
    msg.y = 0.4913986832228714;
    msg.depth = 0.3741213807852538;
    msg.var_x = 0.39912900295231835;
    msg.var_y = 0.4429660095930229;

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
    msg.setTimeStamp(0.8787080029605915);
    msg.setSource(12544U);
    msg.setSourceEntity(89U);
    msg.setDestination(50667U);
    msg.setDestinationEntity(20U);
    msg.beacon.assign("CLGYMAPPYSWGLVYJBGXGMTKBVMMDWEHTXMOAAASWBMCHDDZRFRBPLAYUZFDGZDVTYFIRKNRCDLTEXACKYXNQOFXKXIPRGVYQAJTZQFKQIHWDCHCBJYMUXJUGVHVJPVATWBYSKODTAISJXBJEWWFJENIZQLZOMLJAECOQBUZNEOSVUCRUWNDKSMGKPFRNIWUZ");
    msg.x = 0.206925502927911;
    msg.y = 0.060920071190801894;
    msg.depth = 0.6593774106391362;
    msg.var_x = 0.1048298937077099;
    msg.var_y = 0.7631061291996036;

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
    msg.setTimeStamp(0.11235954349873745);
    msg.setSource(14885U);
    msg.setSourceEntity(16U);
    msg.setDestination(40437U);
    msg.setDestinationEntity(208U);
    msg.value = 0.6611590756490715;

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
    msg.setTimeStamp(0.4742043319863041);
    msg.setSource(41789U);
    msg.setSourceEntity(229U);
    msg.setDestination(30311U);
    msg.setDestinationEntity(231U);
    msg.value = 0.5473731462023529;

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
    msg.setTimeStamp(0.5820549728137802);
    msg.setSource(34328U);
    msg.setSourceEntity(69U);
    msg.setDestination(28349U);
    msg.setDestinationEntity(79U);
    msg.value = 0.974350908135588;

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
    msg.setTimeStamp(0.8943337018008475);
    msg.setSource(25788U);
    msg.setSourceEntity(186U);
    msg.setDestination(46746U);
    msg.setDestinationEntity(47U);
    msg.value = 0.2982398044435104;
    msg.z_units = 194U;

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
    msg.setTimeStamp(0.3208691590368925);
    msg.setSource(17951U);
    msg.setSourceEntity(234U);
    msg.setDestination(13418U);
    msg.setDestinationEntity(202U);
    msg.value = 0.6235800837509635;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.8837233067032438);
    msg.setSource(60293U);
    msg.setSourceEntity(147U);
    msg.setDestination(31362U);
    msg.setDestinationEntity(210U);
    msg.value = 0.05810109158377408;
    msg.z_units = 213U;

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
    msg.setTimeStamp(0.4633077059112882);
    msg.setSource(43135U);
    msg.setSourceEntity(145U);
    msg.setDestination(43407U);
    msg.setDestinationEntity(235U);
    msg.value = 0.45842458068887193;
    msg.speed_units = 231U;

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
    msg.setTimeStamp(0.14977611677606606);
    msg.setSource(47000U);
    msg.setSourceEntity(149U);
    msg.setDestination(8743U);
    msg.setDestinationEntity(201U);
    msg.value = 0.9437979862217922;
    msg.speed_units = 152U;

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
    msg.setTimeStamp(0.38845873909955597);
    msg.setSource(39403U);
    msg.setSourceEntity(147U);
    msg.setDestination(35518U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8786171217732986;
    msg.speed_units = 9U;

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
    msg.setTimeStamp(0.027956518377205586);
    msg.setSource(736U);
    msg.setSourceEntity(165U);
    msg.setDestination(7059U);
    msg.setDestinationEntity(44U);
    msg.value = 0.3291806275299506;

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
    msg.setTimeStamp(0.6694590071731152);
    msg.setSource(38827U);
    msg.setSourceEntity(103U);
    msg.setDestination(46239U);
    msg.setDestinationEntity(55U);
    msg.value = 0.05431541380867144;

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
    msg.setTimeStamp(0.8135741611666741);
    msg.setSource(34977U);
    msg.setSourceEntity(89U);
    msg.setDestination(13749U);
    msg.setDestinationEntity(137U);
    msg.value = 0.5314433142907855;

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
    msg.setTimeStamp(0.5946407677863141);
    msg.setSource(16599U);
    msg.setSourceEntity(85U);
    msg.setDestination(27699U);
    msg.setDestinationEntity(143U);
    msg.value = 0.8905214344102229;

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
    msg.setTimeStamp(0.1750114360066085);
    msg.setSource(53186U);
    msg.setSourceEntity(70U);
    msg.setDestination(45687U);
    msg.setDestinationEntity(84U);
    msg.value = 0.1384032855852535;

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
    msg.setTimeStamp(0.3408383456025157);
    msg.setSource(35432U);
    msg.setSourceEntity(133U);
    msg.setDestination(4520U);
    msg.setDestinationEntity(31U);
    msg.value = 0.19159168050446462;

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
    msg.setTimeStamp(0.33353665853897974);
    msg.setSource(51827U);
    msg.setSourceEntity(115U);
    msg.setDestination(49029U);
    msg.setDestinationEntity(39U);
    msg.value = 0.053353493974956034;

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
    msg.setTimeStamp(0.3473302342249117);
    msg.setSource(4295U);
    msg.setSourceEntity(198U);
    msg.setDestination(62068U);
    msg.setDestinationEntity(75U);
    msg.value = 0.26153609350165163;

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
    msg.setTimeStamp(0.712716826163421);
    msg.setSource(35183U);
    msg.setSourceEntity(89U);
    msg.setDestination(5552U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8289525766046028;

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
    msg.setTimeStamp(0.30075505384648094);
    msg.setSource(10378U);
    msg.setSourceEntity(155U);
    msg.setDestination(55663U);
    msg.setDestinationEntity(143U);
    msg.start_lat = 0.7127615210652287;
    msg.start_lon = 0.8097122675282069;
    msg.start_z = 0.3691636717066076;
    msg.start_z_units = 95U;
    msg.end_lat = 0.8970317343769547;
    msg.end_lon = 0.6396276578081082;
    msg.end_z = 0.6652357403829025;
    msg.end_z_units = 85U;
    msg.speed = 0.2854889308447972;
    msg.speed_units = 230U;
    msg.lradius = 0.3405129103072627;
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
    msg.setTimeStamp(0.18970633793495661);
    msg.setSource(1264U);
    msg.setSourceEntity(82U);
    msg.setDestination(33390U);
    msg.setDestinationEntity(57U);
    msg.start_lat = 0.7890072575562181;
    msg.start_lon = 0.4693980068707819;
    msg.start_z = 0.6862548372791445;
    msg.start_z_units = 238U;
    msg.end_lat = 0.7555604562607716;
    msg.end_lon = 0.7683813807524235;
    msg.end_z = 0.6290063431681362;
    msg.end_z_units = 245U;
    msg.speed = 0.9305026580167203;
    msg.speed_units = 139U;
    msg.lradius = 0.028054489938610372;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.04197825585361359);
    msg.setSource(61718U);
    msg.setSourceEntity(102U);
    msg.setDestination(29988U);
    msg.setDestinationEntity(51U);
    msg.start_lat = 0.02139124293290573;
    msg.start_lon = 0.7155141701031713;
    msg.start_z = 0.9558452051747522;
    msg.start_z_units = 135U;
    msg.end_lat = 0.612838661952168;
    msg.end_lon = 0.7627520600116882;
    msg.end_z = 0.9279519911036346;
    msg.end_z_units = 113U;
    msg.speed = 0.8597230392217717;
    msg.speed_units = 91U;
    msg.lradius = 0.9936127534171295;
    msg.flags = 10U;

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
    msg.setTimeStamp(0.06339922428164224);
    msg.setSource(45095U);
    msg.setSourceEntity(150U);
    msg.setDestination(52818U);
    msg.setDestinationEntity(252U);
    msg.x = 0.2664159147756464;
    msg.y = 0.971806395677545;
    msg.z = 0.6423907586271177;
    msg.k = 0.3978555805104129;
    msg.m = 0.5308935197836002;
    msg.n = 0.8900157202927758;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.5193352425468095);
    msg.setSource(52019U);
    msg.setSourceEntity(231U);
    msg.setDestination(24709U);
    msg.setDestinationEntity(131U);
    msg.x = 0.41275427887406513;
    msg.y = 0.45103144340000234;
    msg.z = 0.6369725852467254;
    msg.k = 0.05101794970975582;
    msg.m = 0.1760368119711273;
    msg.n = 0.8758467599768605;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.023448949587321022);
    msg.setSource(56245U);
    msg.setSourceEntity(139U);
    msg.setDestination(13016U);
    msg.setDestinationEntity(8U);
    msg.x = 0.9197457491370048;
    msg.y = 0.6496420859398269;
    msg.z = 0.5994768849476162;
    msg.k = 0.852745930388404;
    msg.m = 0.6427996550688498;
    msg.n = 0.7712973391896721;
    msg.flags = 251U;

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
    msg.setTimeStamp(0.4953279450671151);
    msg.setSource(57018U);
    msg.setSourceEntity(180U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(97U);
    msg.value = 0.08270987755807446;

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
    msg.setTimeStamp(0.8844170568963693);
    msg.setSource(33320U);
    msg.setSourceEntity(52U);
    msg.setDestination(23927U);
    msg.setDestinationEntity(225U);
    msg.value = 0.49749941774220263;

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
    msg.setTimeStamp(0.30677148538640575);
    msg.setSource(25369U);
    msg.setSourceEntity(238U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9029309926068669;

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
    msg.setTimeStamp(0.49458261875808995);
    msg.setSource(4171U);
    msg.setSourceEntity(155U);
    msg.setDestination(17440U);
    msg.setDestinationEntity(154U);
    msg.u = 0.09095436014661784;
    msg.v = 0.735925014907271;
    msg.w = 0.10248146904547117;
    msg.p = 0.4793653172581922;
    msg.q = 0.45440934845271685;
    msg.r = 0.7626851948278768;
    msg.flags = 200U;

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
    msg.setTimeStamp(0.36738517781961055);
    msg.setSource(34709U);
    msg.setSourceEntity(238U);
    msg.setDestination(31752U);
    msg.setDestinationEntity(248U);
    msg.u = 0.6632164428801185;
    msg.v = 0.7827838284355356;
    msg.w = 0.8361631744266853;
    msg.p = 0.30389846858464;
    msg.q = 0.09150057342273432;
    msg.r = 0.10711014708276967;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.25471494513706705);
    msg.setSource(56207U);
    msg.setSourceEntity(97U);
    msg.setDestination(17699U);
    msg.setDestinationEntity(234U);
    msg.u = 0.15066315186748025;
    msg.v = 0.32967156349511506;
    msg.w = 0.424270685682829;
    msg.p = 0.1571105832099734;
    msg.q = 0.5349165613973661;
    msg.r = 0.8857201295671601;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.10123845123224873);
    msg.setSource(17962U);
    msg.setSourceEntity(122U);
    msg.setDestination(19481U);
    msg.setDestinationEntity(239U);
    msg.start_lat = 0.7805611220860167;
    msg.start_lon = 0.7906801598779135;
    msg.start_z = 0.7831276300951814;
    msg.start_z_units = 19U;
    msg.end_lat = 0.7657085895520933;
    msg.end_lon = 0.42363547145396063;
    msg.end_z = 0.05827205023092463;
    msg.end_z_units = 207U;
    msg.lradius = 0.8926284408714866;
    msg.flags = 221U;
    msg.x = 0.6078249555760591;
    msg.y = 0.357795009046488;
    msg.z = 0.3252310921005712;
    msg.vx = 0.861189009442248;
    msg.vy = 0.6586404247421198;
    msg.vz = 0.7781272637714887;
    msg.course_error = 0.5531989246055841;
    msg.eta = 27404U;

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
    msg.setTimeStamp(0.2677391714093621);
    msg.setSource(46460U);
    msg.setSourceEntity(64U);
    msg.setDestination(32011U);
    msg.setDestinationEntity(226U);
    msg.start_lat = 0.9346720565018781;
    msg.start_lon = 0.5195478955088686;
    msg.start_z = 0.9409753563977548;
    msg.start_z_units = 84U;
    msg.end_lat = 0.1073333878424293;
    msg.end_lon = 0.2653586311564653;
    msg.end_z = 0.9932374032054188;
    msg.end_z_units = 195U;
    msg.lradius = 0.2904227173896393;
    msg.flags = 204U;
    msg.x = 0.5714776642495242;
    msg.y = 0.5419927955796447;
    msg.z = 0.20563853587066006;
    msg.vx = 0.05022104136961436;
    msg.vy = 0.8140244285471567;
    msg.vz = 0.4951530371938988;
    msg.course_error = 0.08824726763458379;
    msg.eta = 17109U;

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
    msg.setTimeStamp(0.3183454686713746);
    msg.setSource(32762U);
    msg.setSourceEntity(122U);
    msg.setDestination(21326U);
    msg.setDestinationEntity(119U);
    msg.start_lat = 0.4843207410079483;
    msg.start_lon = 0.7111610689879083;
    msg.start_z = 0.9204044534018434;
    msg.start_z_units = 50U;
    msg.end_lat = 0.34231608173396044;
    msg.end_lon = 0.2835732989818468;
    msg.end_z = 0.6261329862807591;
    msg.end_z_units = 120U;
    msg.lradius = 0.874643551938118;
    msg.flags = 130U;
    msg.x = 0.07928579343492559;
    msg.y = 0.15149427978263863;
    msg.z = 0.5818409729642438;
    msg.vx = 0.931587994920481;
    msg.vy = 0.031085949543683156;
    msg.vz = 0.7877530211195156;
    msg.course_error = 0.8818977361158554;
    msg.eta = 58455U;

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
    msg.setTimeStamp(0.8476558688360311);
    msg.setSource(34989U);
    msg.setSourceEntity(76U);
    msg.setDestination(19370U);
    msg.setDestinationEntity(117U);
    msg.k = 0.45926178112926985;
    msg.m = 0.4831307607631985;
    msg.n = 0.9846939079986967;

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
    msg.setTimeStamp(0.8379349864607277);
    msg.setSource(14284U);
    msg.setSourceEntity(64U);
    msg.setDestination(14206U);
    msg.setDestinationEntity(67U);
    msg.k = 0.9969020990943022;
    msg.m = 0.8768402977822377;
    msg.n = 0.36086373619195844;

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
    msg.setTimeStamp(0.19038108252289754);
    msg.setSource(64758U);
    msg.setSourceEntity(191U);
    msg.setDestination(44618U);
    msg.setDestinationEntity(166U);
    msg.k = 0.9081734168989242;
    msg.m = 0.17120777912774443;
    msg.n = 0.0051413067897437825;

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
    msg.setTimeStamp(0.5514642657423221);
    msg.setSource(64031U);
    msg.setSourceEntity(137U);
    msg.setDestination(44266U);
    msg.setDestinationEntity(19U);
    msg.p = 0.8698439586185952;
    msg.i = 0.3770577355244479;
    msg.d = 0.4212357297258833;
    msg.a = 0.31203241456421127;

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
    msg.setTimeStamp(0.5454640435503861);
    msg.setSource(44809U);
    msg.setSourceEntity(103U);
    msg.setDestination(8048U);
    msg.setDestinationEntity(16U);
    msg.p = 0.20948398403312207;
    msg.i = 0.1216065803194516;
    msg.d = 0.22533836662738604;
    msg.a = 0.5223056186483244;

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
    msg.setTimeStamp(0.5066288340405378);
    msg.setSource(55054U);
    msg.setSourceEntity(103U);
    msg.setDestination(37575U);
    msg.setDestinationEntity(8U);
    msg.p = 0.2202272604675971;
    msg.i = 0.5380859395897677;
    msg.d = 0.9426824494062019;
    msg.a = 0.5759669694646353;

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
    msg.setTimeStamp(0.9335974454871123);
    msg.setSource(29529U);
    msg.setSourceEntity(40U);
    msg.setDestination(27880U);
    msg.setDestinationEntity(242U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.02872463558002003);
    msg.setSource(17364U);
    msg.setSourceEntity(135U);
    msg.setDestination(42127U);
    msg.setDestinationEntity(95U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.728013627735072);
    msg.setSource(37973U);
    msg.setSourceEntity(244U);
    msg.setDestination(18306U);
    msg.setDestinationEntity(4U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.6220582106953295);
    msg.setSource(64649U);
    msg.setSourceEntity(139U);
    msg.setDestination(47548U);
    msg.setDestinationEntity(174U);
    msg.timeout = 13276U;
    msg.lat = 0.6087581112095688;
    msg.lon = 0.6107877284958247;
    msg.z = 0.09117061154325035;
    msg.z_units = 45U;
    msg.speed = 0.031956428806482085;
    msg.speed_units = 185U;
    msg.roll = 0.5922520995104604;
    msg.pitch = 0.8404612689605299;
    msg.yaw = 0.7251972664994484;
    msg.custom.assign("NFIKQSKNBKGVIQUPSIDWWG");

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
    msg.setTimeStamp(0.9465585915825075);
    msg.setSource(51532U);
    msg.setSourceEntity(138U);
    msg.setDestination(49871U);
    msg.setDestinationEntity(177U);
    msg.timeout = 28752U;
    msg.lat = 0.0033589622146393827;
    msg.lon = 0.9335275156688851;
    msg.z = 0.30761082832125153;
    msg.z_units = 232U;
    msg.speed = 0.3129367816122227;
    msg.speed_units = 240U;
    msg.roll = 0.4365012682893259;
    msg.pitch = 0.2744908827261674;
    msg.yaw = 0.019760120584363938;
    msg.custom.assign("VRDJTAUSJCCQMTNOOINUHNAZLRQZXAIDEXCHDRTLFAGNDMFKWJGLXGOISLLMZBUHYWBYXVWFPEFPRJFKRXMCBNDODSOPHYVEGUGKDEAROPUNHECBFXTIQUQFHSPFNYFZSZSUZWIWMZJSPBIXNRVURBOXLIQWHQHTBMEZGGSMRLYYECYUDAOZTKEDWQCQFWNYKOVTPKVLXNLERMGGAKSB");

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
    msg.setTimeStamp(0.45311105472286395);
    msg.setSource(21910U);
    msg.setSourceEntity(18U);
    msg.setDestination(10834U);
    msg.setDestinationEntity(237U);
    msg.timeout = 11976U;
    msg.lat = 0.08767848091831332;
    msg.lon = 0.5294764351426848;
    msg.z = 0.0632532800140102;
    msg.z_units = 22U;
    msg.speed = 0.6772025352697979;
    msg.speed_units = 178U;
    msg.roll = 0.9108736958698072;
    msg.pitch = 0.36363749909633825;
    msg.yaw = 0.7873145586432345;
    msg.custom.assign("WLEBDTPNZBQPTKINUFYDZUKQBEKCQFYMLJXJTZNZYDIRSOERDVPSUHEIKPMOFIKWFEYZQPYWIPMOAXSXQHCSQMVPKXLRIJCXTIBGRZJMPTG");

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
    msg.setTimeStamp(0.004264029905417854);
    msg.setSource(11188U);
    msg.setSourceEntity(2U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(205U);
    msg.timeout = 65180U;
    msg.lat = 0.8460307579802537;
    msg.lon = 0.43169069270710747;
    msg.z = 0.796906250749395;
    msg.z_units = 23U;
    msg.speed = 0.2101764170656466;
    msg.speed_units = 3U;
    msg.duration = 24387U;
    msg.radius = 0.09816220864340952;
    msg.flags = 233U;
    msg.custom.assign("ESZECVPVPKYELRRSPIYOJRHTECBVROCBZKMLLNYBAHQJZWYVAVTRYMUSCWPSPGEEUCBBAVYSQYQOFPULRVFQQFHQINIKWLWJFJGGUGPIUXOSKXADFYDHSFWWZDWOTGLPQBNTFAZNTAPGHDWLGATNITDTJJIKGKZOXHLNXNMNBKEHSPSCEVKJXMDUORMIXAZRHOUBCKTQLWGCYJKHIDLNEVDAIUICWMMZMXDBYCMFU");

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
    msg.setTimeStamp(0.6933363974890371);
    msg.setSource(22293U);
    msg.setSourceEntity(142U);
    msg.setDestination(38235U);
    msg.setDestinationEntity(201U);
    msg.timeout = 1198U;
    msg.lat = 0.2550485846247823;
    msg.lon = 0.5434974997230136;
    msg.z = 0.2746296003030324;
    msg.z_units = 127U;
    msg.speed = 0.7042934775196352;
    msg.speed_units = 100U;
    msg.duration = 28694U;
    msg.radius = 0.9277233154848211;
    msg.flags = 159U;
    msg.custom.assign("XNZVZQJVPVTJWSCYHNKYPKHSEVJIDGMQRUWJDPFITROTEIYXQ");

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
    msg.setTimeStamp(0.84264032196095);
    msg.setSource(35296U);
    msg.setSourceEntity(38U);
    msg.setDestination(64400U);
    msg.setDestinationEntity(254U);
    msg.timeout = 63402U;
    msg.lat = 0.7480579425669375;
    msg.lon = 0.2511733168362601;
    msg.z = 0.26322835749773177;
    msg.z_units = 133U;
    msg.speed = 0.4523734004189114;
    msg.speed_units = 4U;
    msg.duration = 5574U;
    msg.radius = 0.9416868449692217;
    msg.flags = 119U;
    msg.custom.assign("ASMFJJEXNGTMQZIXFAMAIRQDGHZQHNGUGRPEUACHCPOREWFNMBVTWXXQBXQNIFPECUNYBPSZMUERRDQTCWHYSKGDLFWFSJRSBGLFRVBXDUTZVRZWVUDKYIAOYCCBKATQPYZVOSZ");

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
    msg.setTimeStamp(0.2333162378852266);
    msg.setSource(57423U);
    msg.setSourceEntity(130U);
    msg.setDestination(48920U);
    msg.setDestinationEntity(102U);
    msg.custom.assign("HSULIRSFCSMQRGBDCCMMNRWGPQDXUHZLOLXKZYQHDVBBGEPTQDEIAJCYKQEUEGCNWJRNIOHIHMBQLSZUOVXBSZJSXDXETQBVGNCRPGUJPWXNTAWSHTYAPFZBAHLZYMHLFHENLDAKUWXVCMJROPDTIQMFYOEJGVALAPMKKVOTGJMBTODYJFEZDXZQLKADVIHJSFCZOEWVKEILUPJWWKIUSRFTIATVSQXNNKGYNTYUVWFMUCRARBOKFPYCOYNXIW");

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
    msg.setTimeStamp(0.966723679895556);
    msg.setSource(7885U);
    msg.setSourceEntity(253U);
    msg.setDestination(576U);
    msg.setDestinationEntity(166U);
    msg.custom.assign("LSUPBYQACVWGKDSGLZUCQOEBWHEROOKCFFIQPAFVNOJZAVJBLNLWBYR");

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
    msg.setTimeStamp(0.8601053199147451);
    msg.setSource(15887U);
    msg.setSourceEntity(217U);
    msg.setDestination(65524U);
    msg.setDestinationEntity(219U);
    msg.custom.assign("YLLTXNCRWPSVBYMQRESWWKLFOJZTZYFHQRRDTVGMCNFZZUJIXXNXKKNUAPYOVVZNGRECUMQDCXICLHAWSDTYCKPTTSMUMREFRJKAXENANYZCGXSDHUMFGVYBYTBNFNLPHRHAIILKWOHORBIAAEKIJAOZUDTQYWVXOZFFCPYRBAGEPNHEEQBOGJOEFIZWQCTGBGPQJOSJBMGADUWVQLSUGWHXKBLVVIEHLQHIDS");

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
    msg.setTimeStamp(0.7545975708652176);
    msg.setSource(34808U);
    msg.setSourceEntity(212U);
    msg.setDestination(7093U);
    msg.setDestinationEntity(20U);
    msg.timeout = 27188U;
    msg.lat = 0.2842017195768344;
    msg.lon = 0.42373269243930145;
    msg.z = 0.98446890778544;
    msg.z_units = 11U;
    msg.duration = 15579U;
    msg.speed = 0.993987177011336;
    msg.speed_units = 150U;
    msg.type = 98U;
    msg.radius = 0.5603654759080783;
    msg.length = 0.08418672263788951;
    msg.bearing = 0.4333321661287296;
    msg.direction = 33U;
    msg.custom.assign("JNEZBHMFSYGGYNMJSNXHVQZKFFRZVMIBOHJGAZFEBENPXVQEJVGNAUMLIBKBRYRUQTODRHGTRSPIGARIGSXRIEMJRZDLCEZWUGQNKNXIHNSIAXTBKEYBPLPSJUCWFVHQLMAWKBDCVJMMXZVT");

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
    msg.setTimeStamp(0.5238813028068843);
    msg.setSource(30015U);
    msg.setSourceEntity(63U);
    msg.setDestination(16989U);
    msg.setDestinationEntity(85U);
    msg.timeout = 11313U;
    msg.lat = 0.8443974576059516;
    msg.lon = 0.6077214654417407;
    msg.z = 0.6712119854329256;
    msg.z_units = 210U;
    msg.duration = 36407U;
    msg.speed = 0.7339677028590195;
    msg.speed_units = 147U;
    msg.type = 0U;
    msg.radius = 0.8730418101737912;
    msg.length = 0.7280665741032474;
    msg.bearing = 0.20546458506848575;
    msg.direction = 145U;
    msg.custom.assign("UHPAOMKPMGZGBZCKWDQUYBRBOWODGZYCGXANNEIRNMPQYVSYYQVSFFKRADHWLDEXHDXYPNMFLCUGRFAELIFAQJSEOTZRCO");

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
    msg.setTimeStamp(0.6854899202922862);
    msg.setSource(58118U);
    msg.setSourceEntity(248U);
    msg.setDestination(19044U);
    msg.setDestinationEntity(150U);
    msg.timeout = 62536U;
    msg.lat = 0.04235957499480536;
    msg.lon = 0.1851229213770691;
    msg.z = 0.0218266217317592;
    msg.z_units = 150U;
    msg.duration = 27207U;
    msg.speed = 0.07361349446670962;
    msg.speed_units = 137U;
    msg.type = 130U;
    msg.radius = 0.9851730237505959;
    msg.length = 0.6907493894603146;
    msg.bearing = 0.9533293077453658;
    msg.direction = 201U;
    msg.custom.assign("UHWYQIDIONTNNEXBECLOTRYDCLWNPISMRGTPBIXLSAJYAJJUYRYYUNJBQEFVORMZUDDEKAFLATZGVPEMWLUZBQJGOIRGICSRMYMJZVAJMGOUHXSTALKZVCCKGHOGGETHKPQXLBBCOHWUDIZQQSQFIZWCCFWRKLHNSOJVSVZEXSXDSOBQRKMVDTNPTNJBY");

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
    msg.setTimeStamp(0.7656332124175255);
    msg.setSource(1629U);
    msg.setSourceEntity(35U);
    msg.setDestination(5615U);
    msg.setDestinationEntity(243U);
    msg.duration = 17896U;
    msg.custom.assign("BBPKQSACENPFRCYAMFCQWTMRTEDGYZOROESFUESIHTBPSRFZIZUYKSYDARVLBMIXGOVWTJBNVRWSUWBJWEFJQCRQQGGYXFKLLAXULBVODPWCQMUKXTQQVXHMWZRANIGRHJWJRLLVJJLKBKTLDWPMXFPPUWNCHKOMGTOGJNZKISGXYHEQZFALUCBADTYGEGSOOPZKXZDYEUITSITCJSEPUHNIDVDNCYQUD");

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
    msg.setTimeStamp(0.6599811831172575);
    msg.setSource(32174U);
    msg.setSourceEntity(90U);
    msg.setDestination(51532U);
    msg.setDestinationEntity(129U);
    msg.duration = 10265U;
    msg.custom.assign("YXBNQSFTLDBTGK");

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
    msg.setTimeStamp(0.4124274038844856);
    msg.setSource(35160U);
    msg.setSourceEntity(125U);
    msg.setDestination(31331U);
    msg.setDestinationEntity(244U);
    msg.duration = 44291U;
    msg.custom.assign("YMMGIIHLJXQSUHXYNFEPWPWNCVNSMWVOJKSXQMWZPZMIWJTQAEBBVMXJTBTVUCEJJBQPOFPXCIEIGZWKXCTAYRODUFZNTEXHGREXYLGDLKLZBYFCDSAFVWGSGURZBKTAOHOSHUTAEJHVSLJLUANZDZYVVWTGGAOIEREKCQ");

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
    msg.setTimeStamp(0.39645384691796315);
    msg.setSource(12518U);
    msg.setSourceEntity(201U);
    msg.setDestination(27544U);
    msg.setDestinationEntity(60U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4185490168817483;
    tmp_msg_0.speed_units = 208U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9440U;
    msg.custom.assign("WCKKHMYLMMUXOSVRVGYXXAACJBUWPVWAKRPPBJBOWDOZYEMKQKVUSGU");

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
    msg.setTimeStamp(0.3706811332882025);
    msg.setSource(28187U);
    msg.setSourceEntity(192U);
    msg.setDestination(17989U);
    msg.setDestinationEntity(235U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.5139518332192291;
    msg.control.set(tmp_msg_0);
    msg.duration = 46029U;
    msg.custom.assign("FKOUNFYTGWCRSVWHNCUJJZCAEPPERQJNIPPPDVSDRRQNVGKSURGBQWITNANIJDFQLKOLBLTGAHSXXDAWVCDGHEXEXAONXMIDWOGGYE");

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
    msg.setTimeStamp(0.5207359783821043);
    msg.setSource(17799U);
    msg.setSourceEntity(6U);
    msg.setDestination(7081U);
    msg.setDestinationEntity(24U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.4595756964325409;
    tmp_msg_0.start_lon = 0.2937271740482723;
    tmp_msg_0.start_z = 0.7690761324483406;
    tmp_msg_0.start_z_units = 181U;
    tmp_msg_0.end_lat = 0.5116869172558454;
    tmp_msg_0.end_lon = 0.13481197732232297;
    tmp_msg_0.end_z = 0.9819518747226581;
    tmp_msg_0.end_z_units = 199U;
    tmp_msg_0.speed = 0.36741679990033005;
    tmp_msg_0.speed_units = 118U;
    tmp_msg_0.lradius = 0.2910619442845218;
    tmp_msg_0.flags = 25U;
    msg.control.set(tmp_msg_0);
    msg.duration = 22536U;
    msg.custom.assign("FTQJAIVEGMSZEPQWYWPLDAGNHRSSGSAOFHFNIROXICHCKKAVUKMXACLITCZYJIHBQDPXJRBJJWRTRYGBBOKYRCVGHDTWRUPCEPJEGIQEYLFPBYFWEOIDZTKZDXXEBMLOUKBLGSVWODYPQWKVNTNZQVCKHEXZLOUXMHFMQBFGPNVVQMBGEU");

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
    msg.setTimeStamp(0.0031780199261248754);
    msg.setSource(46297U);
    msg.setSourceEntity(102U);
    msg.setDestination(21720U);
    msg.setDestinationEntity(131U);
    msg.timeout = 59321U;
    msg.lat = 0.6926243511872912;
    msg.lon = 0.6365783449804167;
    msg.z = 0.40234986060331235;
    msg.z_units = 112U;
    msg.speed = 0.3305350878338321;
    msg.speed_units = 129U;
    msg.bearing = 0.5245522470106125;
    msg.cross_angle = 0.36988714780897547;
    msg.width = 0.4138644055191457;
    msg.length = 0.7150768203916509;
    msg.hstep = 0.8380211355095791;
    msg.coff = 40U;
    msg.alternation = 16U;
    msg.flags = 1U;
    msg.custom.assign("IQZTBQUHYPNMBWQJIZWGOIRORARUTNZZRCNBDPSTKAPXFUSGFVWBUKCJVSLJXRWYKQLMROUXK");

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
    msg.setTimeStamp(0.3841584861345976);
    msg.setSource(61730U);
    msg.setSourceEntity(226U);
    msg.setDestination(26208U);
    msg.setDestinationEntity(221U);
    msg.timeout = 53920U;
    msg.lat = 0.04114572143428419;
    msg.lon = 0.14272905757550458;
    msg.z = 0.5984113204013272;
    msg.z_units = 236U;
    msg.speed = 0.8270827922070386;
    msg.speed_units = 121U;
    msg.bearing = 0.818561458474734;
    msg.cross_angle = 0.13241843215459548;
    msg.width = 0.0419323905186153;
    msg.length = 0.252630778807305;
    msg.hstep = 0.4656341321967846;
    msg.coff = 68U;
    msg.alternation = 215U;
    msg.flags = 246U;
    msg.custom.assign("PIJTUHGTYZTKHDBVKSTIYNUAABPJBGLWFRJDKGDNCRUZFVP");

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
    msg.setTimeStamp(0.4245799273144385);
    msg.setSource(15308U);
    msg.setSourceEntity(17U);
    msg.setDestination(29337U);
    msg.setDestinationEntity(20U);
    msg.timeout = 27269U;
    msg.lat = 0.17964178436758538;
    msg.lon = 0.33344549493734776;
    msg.z = 0.13477033573902963;
    msg.z_units = 118U;
    msg.speed = 0.6367154483625603;
    msg.speed_units = 210U;
    msg.bearing = 0.9978625332336594;
    msg.cross_angle = 0.40605304028942535;
    msg.width = 0.23128669356706077;
    msg.length = 0.23825983510101012;
    msg.hstep = 0.7079638294712686;
    msg.coff = 28U;
    msg.alternation = 21U;
    msg.flags = 76U;
    msg.custom.assign("GAEGJIQFDRLBSNPSJXOHLBDFOPIHLNYTFMVIFXAWHDZLQRYUQYZRWUBTVIGBQTYTRRKPDKGFKSQSWQVWENVENXTEJDXBMKNUNSPNOBGAKEXHHUIDXGSHINYWIWOEQEMCGCBOFWJXMIELTLUFCVHNTFHZYQRKJQDUDADHAAAPZWMXZCYORS");

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
    msg.setTimeStamp(0.7053344000092495);
    msg.setSource(10248U);
    msg.setSourceEntity(252U);
    msg.setDestination(34927U);
    msg.setDestinationEntity(213U);
    msg.timeout = 43639U;
    msg.lat = 0.8311601237795633;
    msg.lon = 0.9320762435155859;
    msg.z = 0.7269498463663;
    msg.z_units = 238U;
    msg.speed = 0.4632342545792626;
    msg.speed_units = 244U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6955166839586182;
    tmp_msg_0.y = 0.9815683229175847;
    tmp_msg_0.z = 0.3950561783047465;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QAMEBILCAYIJGZUYESJXMKZQCARHDOJCSVFPFCWNODAWVZPNUWDHIFFMMQHEYLMVKHJYNAUZQIG");

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
    msg.setTimeStamp(0.4487067911147713);
    msg.setSource(26470U);
    msg.setSourceEntity(41U);
    msg.setDestination(23934U);
    msg.setDestinationEntity(81U);
    msg.timeout = 525U;
    msg.lat = 0.15822317058565372;
    msg.lon = 0.11210212066571401;
    msg.z = 0.7959734262388162;
    msg.z_units = 79U;
    msg.speed = 0.8935392249677517;
    msg.speed_units = 22U;
    msg.custom.assign("BQSNIODBGRMZCIUGANXYSJRLJODALICAUMCRXRWGQFHHYYVBCPZKGORMAJJGBKIVGRVKTUNOCZLYDAWZIHTEYWKSAKTWFYVHOAUSIFIXZXLJPNDNNOWMIDUPJHFZWTWYDBQLQYPYDJNCGRKTSEKVNLYUTZPVNLJMAXSHDAVBJBFFWQUIFXMWZMQQRFJO");

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
    msg.setTimeStamp(0.1170042487611217);
    msg.setSource(12769U);
    msg.setSourceEntity(166U);
    msg.setDestination(22114U);
    msg.setDestinationEntity(213U);
    msg.timeout = 57837U;
    msg.lat = 0.2713283658435337;
    msg.lon = 0.10594156179754088;
    msg.z = 0.7032317498495276;
    msg.z_units = 91U;
    msg.speed = 0.9347483540582131;
    msg.speed_units = 70U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5097451695070262;
    tmp_msg_0.y = 0.5649438367958157;
    tmp_msg_0.z = 0.47602281303195115;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WRQJTVEFQVZK");

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
    msg.setTimeStamp(0.44455038656188584);
    msg.setSource(44493U);
    msg.setSourceEntity(59U);
    msg.setDestination(56226U);
    msg.setDestinationEntity(151U);
    msg.x = 0.3413690294089431;
    msg.y = 0.16759274511756816;
    msg.z = 0.8035787688947474;

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
    msg.setTimeStamp(0.2713841934071193);
    msg.setSource(41245U);
    msg.setSourceEntity(3U);
    msg.setDestination(10276U);
    msg.setDestinationEntity(81U);
    msg.x = 0.5731982136270338;
    msg.y = 0.12937984446115935;
    msg.z = 0.8369731010081328;

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
    msg.setTimeStamp(0.03960336878172788);
    msg.setSource(6712U);
    msg.setSourceEntity(168U);
    msg.setDestination(24339U);
    msg.setDestinationEntity(135U);
    msg.x = 0.21457155750477397;
    msg.y = 0.7610189199917964;
    msg.z = 0.16334361229579453;

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
    msg.setTimeStamp(0.47637039107287915);
    msg.setSource(21423U);
    msg.setSourceEntity(91U);
    msg.setDestination(60172U);
    msg.setDestinationEntity(234U);
    msg.timeout = 46163U;
    msg.lat = 0.3748052576241645;
    msg.lon = 0.23989824490134581;
    msg.z = 0.5891296530082915;
    msg.z_units = 235U;
    msg.amplitude = 0.5622151821417861;
    msg.pitch = 0.5069122288059276;
    msg.speed = 0.3550822771953911;
    msg.speed_units = 145U;
    msg.custom.assign("SZBKTYJUZDMIERSHBQZAOCBEJPXARPMMSXSOYOGUVRLYEBUPIRNWNRMVENWLCQIDZJMKQXFJLVAVYHTFEWEHHUTWPPMTPCWZWUFMRDK");

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
    msg.setTimeStamp(0.8731190628053197);
    msg.setSource(58784U);
    msg.setSourceEntity(234U);
    msg.setDestination(9752U);
    msg.setDestinationEntity(132U);
    msg.timeout = 6655U;
    msg.lat = 0.0402380980813718;
    msg.lon = 0.8559306439028685;
    msg.z = 0.7804994569246692;
    msg.z_units = 3U;
    msg.amplitude = 0.48206227038889726;
    msg.pitch = 0.8878082894753326;
    msg.speed = 0.28090658082037845;
    msg.speed_units = 6U;
    msg.custom.assign("GMVMPFYWWVLVZMAQSUCZPXBVULBTZDHSMNNNQEFAMWXUHVOUBFVYRMXONTPWUFIUZGKIAM");

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
    msg.setTimeStamp(0.0779650173814539);
    msg.setSource(51514U);
    msg.setSourceEntity(167U);
    msg.setDestination(17225U);
    msg.setDestinationEntity(60U);
    msg.timeout = 21669U;
    msg.lat = 0.7165678665198514;
    msg.lon = 0.017606894898417158;
    msg.z = 0.7071293013529953;
    msg.z_units = 116U;
    msg.amplitude = 0.7078708444109844;
    msg.pitch = 0.4471417096247424;
    msg.speed = 0.3121911961013938;
    msg.speed_units = 59U;
    msg.custom.assign("EBUJBYXGMONXPQAAINEMTQAGXIQDGGTPHPSNLNGHZFXKBGBWVURXPRLLEFOFWRWRSSQFSXTTKVCRSZHLDWLURVYIUYBBBEHINCZUDYLCUCYLATTQ");

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
    msg.setTimeStamp(0.7186146412264935);
    msg.setSource(62692U);
    msg.setSourceEntity(123U);
    msg.setDestination(49732U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.8808048004844028);
    msg.setSource(39688U);
    msg.setSourceEntity(136U);
    msg.setDestination(45034U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.9567042761275326);
    msg.setSource(59313U);
    msg.setSourceEntity(79U);
    msg.setDestination(37248U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.8264933655083503);
    msg.setSource(23246U);
    msg.setSourceEntity(73U);
    msg.setDestination(30979U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.10121334650117253;
    msg.lon = 0.7009938415168819;
    msg.z = 0.4864967223423666;
    msg.z_units = 245U;
    msg.radius = 0.8354703490254898;
    msg.duration = 48018U;
    msg.speed = 0.32760359526417837;
    msg.speed_units = 10U;
    msg.custom.assign("TCZQPMVNTIQJWAGQELLILAI");

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
    msg.setTimeStamp(0.5555945698456219);
    msg.setSource(43787U);
    msg.setSourceEntity(0U);
    msg.setDestination(19062U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.9227293282541208;
    msg.lon = 0.35426497116340105;
    msg.z = 0.3182412985484224;
    msg.z_units = 196U;
    msg.radius = 0.20067801705729793;
    msg.duration = 23431U;
    msg.speed = 0.6463420497571877;
    msg.speed_units = 159U;
    msg.custom.assign("KSWXMAHVLIGSONZQIADYMTDLUZIRRUAEHICBYJWCXRPCOFSZXAZPMRBMHKYUOVYFUOZAWVCPNZOLXGOQSFVUQDOADSYKBLHJEYCQAQGTGNJDNMLXWLPPKITOETECFWEQVXTIRVNEJHNNCGLKBYTKHRRBBAUGENZECSFYJSVQRRGLPHLKTVJAXWEPWVNJJWXDUHOGTPFQDHMKNILIBYFTIVUEWFZBFJUJMTMIXOQ");

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
    msg.setTimeStamp(0.7788869968921429);
    msg.setSource(26712U);
    msg.setSourceEntity(59U);
    msg.setDestination(16161U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.2339250050322822;
    msg.lon = 0.28212805037484634;
    msg.z = 0.9421028561800139;
    msg.z_units = 228U;
    msg.radius = 0.54182456866398;
    msg.duration = 51964U;
    msg.speed = 0.6957141166310773;
    msg.speed_units = 226U;
    msg.custom.assign("LYMEGISMIPMRGKETMQWWWMNRQZYAHCLRJRYSGKOLWKZZZFEOISEFDSVHFLQOJGV");

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
    msg.setTimeStamp(0.6247446732701423);
    msg.setSource(59365U);
    msg.setSourceEntity(97U);
    msg.setDestination(64208U);
    msg.setDestinationEntity(152U);
    msg.timeout = 46058U;
    msg.flags = 221U;
    msg.lat = 0.44220182711223954;
    msg.lon = 0.23399586706027176;
    msg.start_z = 0.46308069560979626;
    msg.start_z_units = 22U;
    msg.end_z = 0.9340696517043517;
    msg.end_z_units = 236U;
    msg.radius = 0.6487670097714228;
    msg.speed = 0.31597804911085803;
    msg.speed_units = 106U;
    msg.custom.assign("BEVBSMFNIKBLSNMSZDNGVIICGGAQBLPRXUJZAGYMCSIWYRNGPUJCDSOVAUJSZMLGTDRKATGNWPHRZTHWEXIEAQXYWWTPSIAXVNEYCJHKRFMHTCZQOQQVIDWWEDEQVHEPZVBCBLJQPDFCWJHHLVVTDKYFSNNREUEIYBHGKFMOZZF");

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
    msg.setTimeStamp(0.8135215256242359);
    msg.setSource(3242U);
    msg.setSourceEntity(214U);
    msg.setDestination(54497U);
    msg.setDestinationEntity(188U);
    msg.timeout = 24827U;
    msg.flags = 179U;
    msg.lat = 0.23043224622273706;
    msg.lon = 0.23604061461715775;
    msg.start_z = 0.10294167185116809;
    msg.start_z_units = 205U;
    msg.end_z = 0.7269298537823519;
    msg.end_z_units = 211U;
    msg.radius = 0.6567936562001332;
    msg.speed = 0.509905964286224;
    msg.speed_units = 199U;
    msg.custom.assign("AIVKTRBFRKLWZDWENWZJKVDJDBBIFOIWOANZFCABAYLLQMDYLYGQZNYMQOVTWCQRHBFIGFIJWUBGGHKWPVMVMXMXAYNURDLMMKGSGRPEERCYCZDPNUQEHNCATXUSTOLUYDHXGCLJIKZXSQWUWUCPEFUKPANTTRMBPNWPINLOLFOJTEVYEHFBJYGDVXPQBHPSTPJTVCAJUMH");

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
    msg.setTimeStamp(0.7944117183172962);
    msg.setSource(65331U);
    msg.setSourceEntity(11U);
    msg.setDestination(11376U);
    msg.setDestinationEntity(5U);
    msg.timeout = 64730U;
    msg.flags = 5U;
    msg.lat = 0.13766707635496023;
    msg.lon = 0.03641684445619142;
    msg.start_z = 0.7493345701053199;
    msg.start_z_units = 214U;
    msg.end_z = 0.5406182191499247;
    msg.end_z_units = 186U;
    msg.radius = 0.448427990712022;
    msg.speed = 0.7903492553842626;
    msg.speed_units = 203U;
    msg.custom.assign("ZZUUIQCQNNYJFFNLQGANRLIYPQEXAJUMZEXTBGRRYVMUXYXKAESOADTITPLOIBCKCMSCCHHIWQXWVGBGEYZOGITPKZKCZLTXGXHKYDNSPWEPY");

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
    msg.setTimeStamp(0.5428283679163319);
    msg.setSource(35380U);
    msg.setSourceEntity(225U);
    msg.setDestination(53912U);
    msg.setDestinationEntity(206U);
    msg.timeout = 30654U;
    msg.lat = 0.996651363266093;
    msg.lon = 0.3935480890210378;
    msg.z = 0.8429725362422439;
    msg.z_units = 244U;
    msg.speed = 0.8610319730897855;
    msg.speed_units = 172U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5859048189770815;
    tmp_msg_0.y = 0.19979713288097667;
    tmp_msg_0.z = 0.22783653148153693;
    tmp_msg_0.t = 0.1645800218022182;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XYYZFORKVHDGBNFYVOPZBIOSYPGPRVALNYZHFXSTRTDJTKZQKPCYTOWEARRCJCGEDLTFHYGWZUZUSNAVPGPFBXURBMEFATOEQWWDPEECXOOWLGQDMCLBXALUJMSWVFYFWXFTHJWNDXIJIXBWXSEIH");

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
    msg.setTimeStamp(0.9978916414915538);
    msg.setSource(22484U);
    msg.setSourceEntity(14U);
    msg.setDestination(26353U);
    msg.setDestinationEntity(125U);
    msg.timeout = 64374U;
    msg.lat = 0.8352409779613242;
    msg.lon = 0.3241244692537357;
    msg.z = 0.9863606654418027;
    msg.z_units = 13U;
    msg.speed = 0.9597768652663352;
    msg.speed_units = 232U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.533525464198086;
    tmp_msg_0.y = 0.9916689961555125;
    tmp_msg_0.z = 0.3103882653829222;
    tmp_msg_0.t = 0.7359814724725433;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JAMXBBYVRSZBHZTLOWKCOELSYOESEKICULLIOAPLXLIUNMFJDIYDXQOMNEZXUCWSYGCIJWLZK");

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
    msg.setTimeStamp(0.534784457991993);
    msg.setSource(7391U);
    msg.setSourceEntity(215U);
    msg.setDestination(36491U);
    msg.setDestinationEntity(46U);
    msg.timeout = 51752U;
    msg.lat = 0.16213168275718537;
    msg.lon = 0.68014161703397;
    msg.z = 0.5988069687299871;
    msg.z_units = 91U;
    msg.speed = 0.8775202203154889;
    msg.speed_units = 217U;
    msg.custom.assign("LZWRWPKSNFRJXUYZYSGNXJXOXKFTHVIWM");

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
    msg.setTimeStamp(0.5304450335889517);
    msg.setSource(46700U);
    msg.setSourceEntity(134U);
    msg.setDestination(64265U);
    msg.setDestinationEntity(146U);
    msg.x = 0.3416097379931279;
    msg.y = 0.1242269716078096;
    msg.z = 0.5803584394489175;
    msg.t = 0.4123615372844467;

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
    msg.setTimeStamp(0.2938369757310193);
    msg.setSource(19111U);
    msg.setSourceEntity(207U);
    msg.setDestination(1047U);
    msg.setDestinationEntity(20U);
    msg.x = 0.01497102903210501;
    msg.y = 0.1897172367535782;
    msg.z = 0.6880617412969201;
    msg.t = 0.20108675116799923;

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
    msg.setTimeStamp(0.801396233978881);
    msg.setSource(6741U);
    msg.setSourceEntity(173U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(149U);
    msg.x = 0.25176508099658734;
    msg.y = 0.3979940927917984;
    msg.z = 0.9852370474358153;
    msg.t = 0.38458476271947306;

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
    msg.setTimeStamp(0.29065482262321474);
    msg.setSource(42618U);
    msg.setSourceEntity(163U);
    msg.setDestination(6825U);
    msg.setDestinationEntity(216U);
    msg.timeout = 51020U;
    msg.name.assign("DOJBQMFEYIUWZEOORZEVGKASLPPPIMLXJCDCJAYWTUSZOOXMUSSBFUSMNGAWUWVHYTLKNCVTQHABZENREXHWGKJOPKXTDWMAWQADHNPKTXQZVKXVRYRIFAMHXZVFPCRHEFYEAUMBHYKYJLEL");
    msg.custom.assign("CHGLJTRMQHEANJCOKIQLHXHVOFYCZLWJXDBTEHRJOFXNEGCSYJXJLUTJWWWDFAYMGBANBOZPKNMQVLONLYFMSONRPYWEEYAZPKAZGAPUWPAGSSVJNKOMTFRMYQUGCHZGLSIORUPFVSVWBQRTJZZAGSVLKLYBDUZURICGMQBMDIIEVXBZHHXCNPRDDTIDIYVEWWUETIWD");

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
    msg.setTimeStamp(0.05409200339132969);
    msg.setSource(50738U);
    msg.setSourceEntity(189U);
    msg.setDestination(20145U);
    msg.setDestinationEntity(152U);
    msg.timeout = 8538U;
    msg.name.assign("YYJTGTSKSRQGALBMJPNGZNUMELRQJYKSDZBXXCRPCLOWHEDFBTRFUANXHVUIQNNPQWVVYWXPWTIVXDRVAFPYWGWXNELFDUYBXQACDMPPBERMHHEDOCSVLMAHHYISMKQTSTZJFLLEKPKJB");
    msg.custom.assign("QAKRJNRIXZDHYUFRIYQPLDJFCGCRMJCKRSJSVKUTBOVQAIGFWRJFFSIVXMWXHUEYRGDCZSOYVFLNEMOTDCZNPXLLHIWDUELNTWEDEAAKCXOEKPXZEXOCNMYVBBYYVFEQAUVISHQKWIONLYCEBQGHTTREAHBOIWTFXWSMDDUYTGMRPCALTOBZZJKGAZXPWFQPIY");

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
    msg.setTimeStamp(0.37007975970661566);
    msg.setSource(31469U);
    msg.setSourceEntity(226U);
    msg.setDestination(54495U);
    msg.setDestinationEntity(139U);
    msg.timeout = 48534U;
    msg.name.assign("EHDHUGCJRVLBTKCRHNSSNKCJMEXOGYGLHWWFXTFKUBMBLGTIFOMJJIAUHUWHWPUELSQYYQMCDPVIMMIKGATDJFEOBBPTTAEBXKSSZ");
    msg.custom.assign("WGDAHTXFALFJMMQSRBPFHAXVIMFCTHJBAQEEPRITSXJLBRQCIOXJEZVJWBKDROOLGUVCKYVWSSJZNGUONPOWQRLLYNYXCMKXKOKUFDYYIUUHPEMIABTDZFDYPITPEPRZNCYMXCEVSLWDFKUZJHVMXUJDVGFRYAYXELQUQWCGKCOKMZOJPWQTWGLXTMDSQDOMVURHPOSBAWIEACNYVHFKSSLNKETVFNRNRTDBW");

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
    msg.setTimeStamp(0.8833706007550972);
    msg.setSource(25741U);
    msg.setSourceEntity(193U);
    msg.setDestination(59933U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.2211374055950286;
    msg.lon = 0.8135601077591647;
    msg.z = 0.2582603079696185;
    msg.z_units = 156U;
    msg.speed = 0.20379425611544666;
    msg.speed_units = 241U;
    msg.start_time = 0.7381795766942747;
    msg.custom.assign("ESIMDPNAFOPDIQLMRXHKIGB");

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
    msg.setTimeStamp(0.4625238539435652);
    msg.setSource(24773U);
    msg.setSourceEntity(14U);
    msg.setDestination(45685U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.14983395339438577;
    msg.lon = 0.7992638844464505;
    msg.z = 0.6366056924563169;
    msg.z_units = 92U;
    msg.speed = 0.9457500149541875;
    msg.speed_units = 213U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.36246576056204827;
    tmp_msg_0.y = 0.49830357792552027;
    tmp_msg_0.z = 0.4930807027285665;
    tmp_msg_0.t = 0.9384374753904562;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 44156U;
    tmp_msg_1.off_x = 0.6608741339453162;
    tmp_msg_1.off_y = 0.09577680223287033;
    tmp_msg_1.off_z = 0.7090199734439131;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.022909818892183798;
    msg.custom.assign("OKFPAOXPRWWIUSEMVNHIZOBPLIELBNVHKLNYQQHGTZHYQVKHMHZKWJBXDERUVBXCUSMDDEZPFJXSQKLEOIRZCAEGFVAKYPGNDFKINTABSMPFVOSFCRSSGOUGLCFTQPUEYLOMVAIGJCCTFSHTMXDLWQUQRMWSKZNG");

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
    msg.setTimeStamp(0.05497369990779488);
    msg.setSource(17065U);
    msg.setSourceEntity(24U);
    msg.setDestination(803U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.40303393537516996;
    msg.lon = 0.37682713066532525;
    msg.z = 0.14089206939597465;
    msg.z_units = 76U;
    msg.speed = 0.9875724773481753;
    msg.speed_units = 161U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32224U;
    tmp_msg_0.off_x = 0.405811463632457;
    tmp_msg_0.off_y = 0.577139565121105;
    tmp_msg_0.off_z = 0.7055792544405605;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.450034058137335;
    msg.custom.assign("MRKWYTNGRYUXSXLGACRTPZHFDKLGIWQPXWNRSWECLGFKDTJZ");

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
    msg.setTimeStamp(0.5134065303911283);
    msg.setSource(44692U);
    msg.setSourceEntity(129U);
    msg.setDestination(13973U);
    msg.setDestinationEntity(83U);
    msg.vid = 37111U;
    msg.off_x = 0.8389121675996044;
    msg.off_y = 0.7140515586294467;
    msg.off_z = 0.5201379194652412;

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
    msg.setTimeStamp(0.9854648158228032);
    msg.setSource(25847U);
    msg.setSourceEntity(107U);
    msg.setDestination(61774U);
    msg.setDestinationEntity(167U);
    msg.vid = 70U;
    msg.off_x = 0.9916670598073845;
    msg.off_y = 0.6470484917732338;
    msg.off_z = 0.39357917279122245;

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
    msg.setTimeStamp(0.7928840153884208);
    msg.setSource(37560U);
    msg.setSourceEntity(40U);
    msg.setDestination(35395U);
    msg.setDestinationEntity(49U);
    msg.vid = 55374U;
    msg.off_x = 0.5579478797408679;
    msg.off_y = 0.2724210344503596;
    msg.off_z = 0.4846368915828738;

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
    msg.setTimeStamp(0.0905307536683938);
    msg.setSource(48054U);
    msg.setSourceEntity(87U);
    msg.setDestination(7010U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.5307182737319082);
    msg.setSource(43959U);
    msg.setSourceEntity(58U);
    msg.setDestination(18273U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.9298912354255233);
    msg.setSource(12779U);
    msg.setSourceEntity(97U);
    msg.setDestination(57283U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.026602871496370972);
    msg.setSource(32366U);
    msg.setSourceEntity(183U);
    msg.setDestination(17556U);
    msg.setDestinationEntity(250U);
    msg.mid = 60278U;

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
    msg.setTimeStamp(0.6634633240613006);
    msg.setSource(9307U);
    msg.setSourceEntity(171U);
    msg.setDestination(5743U);
    msg.setDestinationEntity(39U);
    msg.mid = 48489U;

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
    msg.setTimeStamp(0.940004246828455);
    msg.setSource(59211U);
    msg.setSourceEntity(19U);
    msg.setDestination(48505U);
    msg.setDestinationEntity(82U);
    msg.mid = 54763U;

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
    msg.setTimeStamp(0.9049139869970385);
    msg.setSource(27796U);
    msg.setSourceEntity(171U);
    msg.setDestination(62613U);
    msg.setDestinationEntity(35U);
    msg.state = 165U;
    msg.eta = 38897U;
    msg.info.assign("VUINSVJKREBSEDPPZLHFMGACMIJPIOOSAWUAYWDNFZMHGVOCHMYSONJQRQFOBIYAPWIQDJQGMTYTXBKXYGHWDJRTQDADIRAZWONEADLCCSDHFRAKXQCSETJTBSYCQUJKXW");

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
    msg.setTimeStamp(0.6272484304455296);
    msg.setSource(24736U);
    msg.setSourceEntity(4U);
    msg.setDestination(32870U);
    msg.setDestinationEntity(158U);
    msg.state = 223U;
    msg.eta = 1625U;
    msg.info.assign("YHQZMVLZGFKPCFFCBWGDQDYXLUFJUELZWBQNVDHJPAQPRKLHJGSUIVHFMLETNAJBDSUKMYIQPJWCXNERBMLTNZWZZMIGGLPUDPKKEYLOIN");

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
    msg.setTimeStamp(0.9894630364914456);
    msg.setSource(187U);
    msg.setSourceEntity(75U);
    msg.setDestination(52204U);
    msg.setDestinationEntity(207U);
    msg.state = 177U;
    msg.eta = 46399U;
    msg.info.assign("KEZOVGDUISLLRFXPGVVPWIRLGZLPNBSCWBJNDYXRAOENIKGTBKNGOIMJHUSUIMPZJUPQPPAJMOUHCMLZGDCAXEKSSVRCXOWMPWPEQQADRATBWDQDXLVHCMFTCEUZKBYYFLETYFRVRK");

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
    msg.setTimeStamp(0.4816398195332793);
    msg.setSource(63336U);
    msg.setSourceEntity(47U);
    msg.setDestination(37420U);
    msg.setDestinationEntity(158U);
    msg.system = 61511U;
    msg.duration = 58006U;
    msg.speed = 0.39641438857495925;
    msg.speed_units = 223U;
    msg.x = 0.9492668102432453;
    msg.y = 0.6331155547482882;
    msg.z = 0.9843402726597945;
    msg.z_units = 152U;

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
    msg.setTimeStamp(0.25503004332900325);
    msg.setSource(26433U);
    msg.setSourceEntity(43U);
    msg.setDestination(32244U);
    msg.setDestinationEntity(145U);
    msg.system = 40993U;
    msg.duration = 51702U;
    msg.speed = 0.6251295995879411;
    msg.speed_units = 78U;
    msg.x = 0.7832910325433624;
    msg.y = 0.31846725413467847;
    msg.z = 0.8938539109353127;
    msg.z_units = 72U;

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
    msg.setTimeStamp(0.11441524096371858);
    msg.setSource(29948U);
    msg.setSourceEntity(30U);
    msg.setDestination(34649U);
    msg.setDestinationEntity(39U);
    msg.system = 37353U;
    msg.duration = 13612U;
    msg.speed = 0.8437194160358112;
    msg.speed_units = 8U;
    msg.x = 0.7593202371369843;
    msg.y = 0.38161029740560615;
    msg.z = 0.621969724873294;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.18589504341797836);
    msg.setSource(56860U);
    msg.setSourceEntity(115U);
    msg.setDestination(50390U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.06872469208913856;
    msg.lon = 0.6200393676908205;
    msg.speed = 0.23809378732114084;
    msg.speed_units = 25U;
    msg.duration = 22793U;
    msg.sys_a = 958U;
    msg.sys_b = 33715U;
    msg.move_threshold = 0.6974344970204357;

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
    msg.setTimeStamp(0.6723139688692801);
    msg.setSource(13850U);
    msg.setSourceEntity(137U);
    msg.setDestination(14625U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.7523847417982983;
    msg.lon = 0.63662909368595;
    msg.speed = 0.4438143420094749;
    msg.speed_units = 163U;
    msg.duration = 55854U;
    msg.sys_a = 26869U;
    msg.sys_b = 59205U;
    msg.move_threshold = 0.9922383710659963;

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
    msg.setTimeStamp(0.09274403306159029);
    msg.setSource(945U);
    msg.setSourceEntity(219U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.33737887882307593;
    msg.lon = 0.3277614484942144;
    msg.speed = 0.9237234751632646;
    msg.speed_units = 168U;
    msg.duration = 21954U;
    msg.sys_a = 53320U;
    msg.sys_b = 33688U;
    msg.move_threshold = 0.26529505308591983;

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
    msg.setTimeStamp(0.6804741231932575);
    msg.setSource(64727U);
    msg.setSourceEntity(38U);
    msg.setDestination(56669U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.8361494427930718;
    msg.lon = 0.9008339001151926;
    msg.z = 0.9520891096187041;
    msg.z_units = 154U;
    msg.speed = 0.8466387839094324;
    msg.speed_units = 201U;
    msg.custom.assign("OQYAIJVORKJRUFPKWWRZCJQXLVAVNURIFJWBFMCOEEWIOSACVFEYIRSOOBEEGHZUWJBMFNPBVFTBCDCMFPGOAVAUWKRHAYXCMXVMKXSJXTHYLLXWNQBKWDBDUDHQFTEWVLHFVXVP");

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
    msg.setTimeStamp(0.7768893955954251);
    msg.setSource(35847U);
    msg.setSourceEntity(172U);
    msg.setDestination(11751U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.7340539153927774;
    msg.lon = 0.21432723552108457;
    msg.z = 0.8756323816697197;
    msg.z_units = 27U;
    msg.speed = 0.11342237778126196;
    msg.speed_units = 175U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7381884619531331;
    tmp_msg_0.lon = 0.6297202494606655;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AZLGJWPMCJNWEBEDSPNWBUKCALBTCZFOIQJLVVXSHOFWYOJHJZDUTRFLEIRTBWTESWBINMPRTLNKCYTGRIALKGSULPFZRVNDGIVLRBKUJKCAQACDIPKAXHPYSSIWYXUJVJYXEBCZMMXCNNPZMQFYZBXFHMXTZAWKKUPGKORDHHPHMMQQJBZOEFAVAYIMLOGYNNTEDWURYQDMUD");

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
    msg.setTimeStamp(0.9882715087018514);
    msg.setSource(6113U);
    msg.setSourceEntity(239U);
    msg.setDestination(33255U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.1786898191537979;
    msg.lon = 0.34149002997959055;
    msg.z = 0.8523499120220839;
    msg.z_units = 25U;
    msg.speed = 0.21971133811104615;
    msg.speed_units = 159U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6957308450298614;
    tmp_msg_0.lon = 0.25499065571653223;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZMNWCHIPGDQRKPEMQVMHAVBEYNMJDKWUFFMPRDEARUHCDLDKILCMAUICJKRSLQFELILGQALYCKQLCZWXNNSTTDGFYPPTZXODAMSBREZQVDRESBUVRRKHWOIZKWLTKJOBTK");

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
    msg.setTimeStamp(0.09824383761766775);
    msg.setSource(23359U);
    msg.setSourceEntity(105U);
    msg.setDestination(25626U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.15722257713811372;
    msg.lon = 0.788645029674358;

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
    msg.setTimeStamp(0.2690039388363028);
    msg.setSource(15461U);
    msg.setSourceEntity(179U);
    msg.setDestination(37986U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.1310166190982499;
    msg.lon = 0.9613150936582276;

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
    msg.setTimeStamp(0.9623646039639424);
    msg.setSource(55680U);
    msg.setSourceEntity(248U);
    msg.setDestination(47016U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.7840392503239534;
    msg.lon = 0.44762098208936807;

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
    msg.setTimeStamp(0.47968140106717927);
    msg.setSource(7613U);
    msg.setSourceEntity(202U);
    msg.setDestination(20862U);
    msg.setDestinationEntity(164U);
    msg.timeout = 22071U;
    msg.lat = 0.40531701243688834;
    msg.lon = 0.6164596943320425;
    msg.z = 0.7135847401187628;
    msg.z_units = 60U;
    msg.pitch = 0.3241532698794296;
    msg.amplitude = 0.3504783185183882;
    msg.duration = 53783U;
    msg.speed = 0.9455703809021957;
    msg.speed_units = 33U;
    msg.radius = 0.46420878550820066;
    msg.direction = 174U;
    msg.custom.assign("KVURQGOAHDHJPNSKCDUWQURVICRBZMQRQHEWIFCEIIOEMRAWFMNEJTEPOVXFFWSUFCQWSCGHRXFSM");

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
    msg.setTimeStamp(0.3539459011986854);
    msg.setSource(481U);
    msg.setSourceEntity(240U);
    msg.setDestination(32761U);
    msg.setDestinationEntity(144U);
    msg.timeout = 56708U;
    msg.lat = 0.3762030746566648;
    msg.lon = 0.091949880097284;
    msg.z = 0.3274500365499802;
    msg.z_units = 122U;
    msg.pitch = 0.9552684736669131;
    msg.amplitude = 0.11680394603869959;
    msg.duration = 6749U;
    msg.speed = 0.25922743925500547;
    msg.speed_units = 217U;
    msg.radius = 0.6389603230455935;
    msg.direction = 88U;
    msg.custom.assign("DNYWNHWTYYFXCCOMCLIJPWPLWNAOSCTPAOUSLDDEBDWIVSGKIWQTSSYMJDWFZTLQOHWXLBMKADRJVUEGQCPRBJKXBQJFEOHURCASHDTZBQPLBUXDNRVKBGFAATSSVZULUNWIJIBCHHEPCFLVUMVOXKNTBPPRHYJEJIXKRZQRVZHOFAZAFIIGAUJHCGOFVQZM");

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
    msg.setTimeStamp(0.4033973968547775);
    msg.setSource(59035U);
    msg.setSourceEntity(89U);
    msg.setDestination(60866U);
    msg.setDestinationEntity(68U);
    msg.timeout = 14397U;
    msg.lat = 0.6612209689013664;
    msg.lon = 0.7571318460809894;
    msg.z = 0.15548776369416184;
    msg.z_units = 197U;
    msg.pitch = 0.5262141152631366;
    msg.amplitude = 0.5733865299708799;
    msg.duration = 17438U;
    msg.speed = 0.5228939029940424;
    msg.speed_units = 82U;
    msg.radius = 0.868400102522866;
    msg.direction = 155U;
    msg.custom.assign("YLAQHFWNLNIQZHEUZPUNIPIFEBUWZB");

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
    msg.setTimeStamp(0.17262869152575333);
    msg.setSource(62344U);
    msg.setSourceEntity(164U);
    msg.setDestination(36291U);
    msg.setDestinationEntity(128U);
    msg.control_src = 23082U;
    msg.control_ent = 21U;
    msg.timeout = 0.8654220289858563;
    msg.loiter_radius = 0.830848490459277;
    msg.altitude_interval = 0.004778360677606508;

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
    msg.setTimeStamp(0.08162104314826313);
    msg.setSource(58931U);
    msg.setSourceEntity(93U);
    msg.setDestination(55635U);
    msg.setDestinationEntity(82U);
    msg.control_src = 8462U;
    msg.control_ent = 41U;
    msg.timeout = 0.17712454601584882;
    msg.loiter_radius = 0.588603959336642;
    msg.altitude_interval = 0.19110876535624366;

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
    msg.setTimeStamp(0.2506445206433384);
    msg.setSource(29718U);
    msg.setSourceEntity(65U);
    msg.setDestination(51168U);
    msg.setDestinationEntity(204U);
    msg.control_src = 15818U;
    msg.control_ent = 178U;
    msg.timeout = 0.9748608117020938;
    msg.loiter_radius = 0.2777223541646455;
    msg.altitude_interval = 0.41517710024877064;

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
    msg.setTimeStamp(0.9616004937428543);
    msg.setSource(7309U);
    msg.setSourceEntity(190U);
    msg.setDestination(47903U);
    msg.setDestinationEntity(219U);
    msg.flags = 24U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6046495130189758;
    tmp_msg_0.speed_units = 140U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8986249281098492;
    tmp_msg_1.z_units = 174U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.06507236397542893;
    msg.lon = 0.6217107879986299;

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
    msg.setTimeStamp(0.576777373930027);
    msg.setSource(52320U);
    msg.setSourceEntity(22U);
    msg.setDestination(33592U);
    msg.setDestinationEntity(199U);
    msg.flags = 251U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3679927125582303;
    tmp_msg_0.speed_units = 251U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.09191222774861185;
    tmp_msg_1.z_units = 188U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6864634338600536;
    msg.lon = 0.8014583284233575;

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
    msg.setTimeStamp(0.13286631727193832);
    msg.setSource(52811U);
    msg.setSourceEntity(71U);
    msg.setDestination(29077U);
    msg.setDestinationEntity(28U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.04020931506725578;
    tmp_msg_0.speed_units = 18U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6812350576072389;
    tmp_msg_1.z_units = 92U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3834054689553835;
    msg.lon = 0.8883225072232701;

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
    msg.setTimeStamp(0.6391309547814953);
    msg.setSource(17775U);
    msg.setSourceEntity(197U);
    msg.setDestination(9486U);
    msg.setDestinationEntity(169U);
    msg.control_src = 51724U;
    msg.control_ent = 164U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 0U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.45277495456744343;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3905415582775199;
    tmp_tmp_msg_0_1.z_units = 229U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.22645632970837581;
    tmp_msg_0.lon = 0.042107960643289144;
    msg.reference.set(tmp_msg_0);
    msg.state = 177U;
    msg.proximity = 234U;

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
    msg.setTimeStamp(0.48431316967198323);
    msg.setSource(9848U);
    msg.setSourceEntity(159U);
    msg.setDestination(20450U);
    msg.setDestinationEntity(246U);
    msg.control_src = 46857U;
    msg.control_ent = 21U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 8U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9652309463125508;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3079482715590085;
    tmp_tmp_msg_0_1.z_units = 54U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3179557559766357;
    tmp_msg_0.lon = 0.9825259623425456;
    msg.reference.set(tmp_msg_0);
    msg.state = 215U;
    msg.proximity = 232U;

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
    msg.setTimeStamp(0.2352274962832308);
    msg.setSource(41912U);
    msg.setSourceEntity(119U);
    msg.setDestination(4176U);
    msg.setDestinationEntity(54U);
    msg.control_src = 9522U;
    msg.control_ent = 150U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 193U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4064528778505385;
    tmp_tmp_msg_0_0.speed_units = 228U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12216422237060331;
    tmp_tmp_msg_0_1.z_units = 6U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5282336532030014;
    tmp_msg_0.lon = 0.6344950537414737;
    msg.reference.set(tmp_msg_0);
    msg.state = 254U;
    msg.proximity = 230U;

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
    msg.setTimeStamp(0.6813085323432957);
    msg.setSource(40088U);
    msg.setSourceEntity(9U);
    msg.setDestination(15760U);
    msg.setDestinationEntity(112U);
    msg.op_mode = 1U;
    msg.error_count = 68U;
    msg.error_ents.assign("ZDRBNQDIZICSXAJUWRPLFOXGIENTNIPQIXBJORHWAENOZCDOWILPCUOQHVLNGXESQBLZWRSAODPFTCGDYOMUBVMCWABWSKESUJUILISBKYMPTAEZMYVETMG");
    msg.maneuver_type = 23948U;
    msg.maneuver_stime = 0.019973388721678975;
    msg.maneuver_eta = 49710U;
    msg.control_loops = 182540186U;
    msg.flags = 153U;
    msg.last_error.assign("EONRZAHOACAPTMOCLKPGXPEBUGQSYGIWYQXZBEHYQOVYJCTHVLNKJQYKQLZNIJVXATSPFWDUIEVVX");
    msg.last_error_time = 0.31588755691653303;

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
    msg.setTimeStamp(0.3230378518425766);
    msg.setSource(41578U);
    msg.setSourceEntity(99U);
    msg.setDestination(1556U);
    msg.setDestinationEntity(5U);
    msg.op_mode = 216U;
    msg.error_count = 72U;
    msg.error_ents.assign("VMUPWDIIEFDMJDPQLZZHZURDLPSXCJEWWIQWWBXVNWZCPRQKPZUXNSYRYWTMSAQKFZKGSRFLGIOBJOGFFKNTGXNOESWFPHOCNGAXBFZDTULJOYETCKHPYMCLOXXGFJHRLUXULIHNJIOFJDJBKGETNABBKMEQOHTSKUUFXIATACQHECZSJBRVOQLIETBHWIM");
    msg.maneuver_type = 1448U;
    msg.maneuver_stime = 0.2567030584046437;
    msg.maneuver_eta = 28734U;
    msg.control_loops = 2268339274U;
    msg.flags = 207U;
    msg.last_error.assign("FYPVENIQUNXKYBLIGHKQUSDPRZZYECPDDQTKFGXPPVZVBWDGCMNPPVSAHYSWQYOMIUCBHWJZSHWHOTQAJFDRELREOUOTGPUENELJXYKKUJFMYAFYBWTDOAVZCITDAPNVX");
    msg.last_error_time = 0.8730507543936745;

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
    msg.setTimeStamp(0.5083613061823034);
    msg.setSource(28918U);
    msg.setSourceEntity(4U);
    msg.setDestination(4975U);
    msg.setDestinationEntity(121U);
    msg.op_mode = 48U;
    msg.error_count = 71U;
    msg.error_ents.assign("ESHIEZEBSEYKWBIWKVCGXXAWESMSCVYOQDPYLFMHDGNQZHXSVVMSQPRLOQFCQPWOJKXYBTIAYSDWVEOOGBICWCLNIQORFSRNQMUHLPUXWOEMQLTIDBZKQFUAGEOGBZSZUDPUDP");
    msg.maneuver_type = 35683U;
    msg.maneuver_stime = 0.6144272533341397;
    msg.maneuver_eta = 15460U;
    msg.control_loops = 4104723239U;
    msg.flags = 214U;
    msg.last_error.assign("JHTMIXTZKWPJQRGKWXHXPNXLRYICDHFHRBAVOTQMGACOICCLSGVKOW");
    msg.last_error_time = 0.5194157065400618;

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
    msg.setTimeStamp(0.04123618331879275);
    msg.setSource(47688U);
    msg.setSourceEntity(192U);
    msg.setDestination(56028U);
    msg.setDestinationEntity(235U);
    msg.type = 51U;
    msg.request_id = 35524U;
    msg.command = 7U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 39456U;
    tmp_msg_0.lat = 0.9650436092208519;
    tmp_msg_0.lon = 0.5216753389925421;
    tmp_msg_0.z = 0.14491853204719052;
    tmp_msg_0.z_units = 28U;
    tmp_msg_0.speed = 0.28745944891942143;
    tmp_msg_0.speed_units = 18U;
    tmp_msg_0.bearing = 0.9412769234332204;
    tmp_msg_0.cross_angle = 0.014458432262600018;
    tmp_msg_0.width = 0.7302885455877641;
    tmp_msg_0.length = 0.20928876431037258;
    tmp_msg_0.hstep = 0.8552509906848933;
    tmp_msg_0.coff = 169U;
    tmp_msg_0.alternation = 196U;
    tmp_msg_0.flags = 80U;
    tmp_msg_0.custom.assign("YEGRAQYGSKMCDSTALOSKUFAXJCEEWRTNILBZUPKULGIQOWUUADGWLSLOPZRWJTKTDMAXLIFKNXVIFQFZVKFCPLZQQEAXHGNHUGSJNGUYCUMINMMZGIHWCTWJYCOHQYUXVDKC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2308U;
    msg.info.assign("KHFWOVSESXKUZLHNTBJGRIUPSOJDUXOXVKTLUKBZUDYXFTNWHMHJVAHUOHVNRMZGSRGWVRHNWFUXWEZXPGFDVAPLNJVIEIFKEYPEDMQBYYCIMGTLJCDTMKFTBHANRWRYAJTNSXNLUMEWESQCHOUZVVDIPZJRDKAZWNPWCQS");

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
    msg.setTimeStamp(0.28130619562370685);
    msg.setSource(32536U);
    msg.setSourceEntity(209U);
    msg.setDestination(6292U);
    msg.setDestinationEntity(90U);
    msg.type = 33U;
    msg.request_id = 5040U;
    msg.command = 89U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 4437U;
    tmp_msg_0.lat = 0.41795293197335814;
    tmp_msg_0.lon = 0.726645428390001;
    tmp_msg_0.z = 0.7675489493747164;
    tmp_msg_0.z_units = 210U;
    tmp_msg_0.speed = 0.9969186047354514;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.bearing = 0.00941247795621769;
    tmp_msg_0.cross_angle = 0.22467732301539178;
    tmp_msg_0.width = 0.3110277640220782;
    tmp_msg_0.length = 0.6372838300758918;
    tmp_msg_0.hstep = 0.8622628802395362;
    tmp_msg_0.coff = 206U;
    tmp_msg_0.alternation = 87U;
    tmp_msg_0.flags = 52U;
    tmp_msg_0.custom.assign("EVQVPRKGBKMVAKWJVOONSJJJFGBMUBUCTRMGGZVQUFDYJHIGCSYHLDTTVPYDFOPKNIUPQUPQMWCLZFUGZCHIBIXMUEGHEEIOECEBTOMAFXXGJWDPZHHVFOTLXWRCFLWZNPRNANFBDBQTRDMVAMXYDVAIUCIVJLKEAAHGSBXPPYOIWXTAORJSOHLDIQMFBSRSZJYXQOQAFB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13196U;
    msg.info.assign("ZUPYAXGYGYJRNREMCDVJADEWCJZWRYHSQYNSABPPBSPMVIWUKTILXMSMNQBEESPRQHOWCUFKOBDBFDHGJXBSOGKEFEMNNKWWAVFONWBIIJHLQSHHZWVATJOJVBHXFCJFUFZTIKZ");

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
    msg.setTimeStamp(0.6817062523642352);
    msg.setSource(32574U);
    msg.setSourceEntity(44U);
    msg.setDestination(57063U);
    msg.setDestinationEntity(170U);
    msg.type = 50U;
    msg.request_id = 56448U;
    msg.command = 35U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 39620U;
    tmp_msg_0.lat = 0.6009953525874783;
    tmp_msg_0.lon = 0.5290253073625361;
    tmp_msg_0.z = 0.9469310046916506;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.amplitude = 0.49523159563887864;
    tmp_msg_0.pitch = 0.45228937819132475;
    tmp_msg_0.speed = 0.4400312832862232;
    tmp_msg_0.speed_units = 184U;
    tmp_msg_0.custom.assign("NBDLQVBZFYAQAJCZQGOSZMGSVIFGCMMXVZZUAGOCOQYJXPBDIT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62806U;
    msg.info.assign("EADAAEVAAAPVCDVYGLAPKZBWZBDVMWIWDSPKFGNQTGKKZZIKIUOBJEWFPOFKQOMJZFKOUYXIUIXINCYVKSEASOBXAJHOHNRMEFBFXCLPTTMEXZRBHHWQCGVVFCWILYBNEJDFKORDMUTGLWNRJSXCZZFMGQVVYKNMXSTDZUYPBXXILNNIUSCLXNSHWRGRCUPWJGEHJQPLNFQSIYTRTOABRTDYJMOMHQUYULSRCGEHQZTTYHMRCPHWQDJUQDP");

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
    msg.setTimeStamp(0.362918631642995);
    msg.setSource(63059U);
    msg.setSourceEntity(13U);
    msg.setDestination(34732U);
    msg.setDestinationEntity(253U);
    msg.command = 58U;
    msg.entities.assign("PWPBIPPZTHYIBOQAIZRERCFNARDPHLNQEJGOMCEOJXOLLVWEURYDTOLNKWTBAINSVCKRTQKIUNGQVQMTOTNRMIHXXXYZPTAIKVBFOAGGIMSYIYJLAXZVHDOHBMRURBULNHAZBVKLUFJAFJQUDKFYNWWDTKGMFUQHGSEQJULKJXWJCPJHCCJIVDYKYNGCMFSEZYSFGEBSAPBBTSWCFD");

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
    msg.setTimeStamp(0.7076688362101322);
    msg.setSource(60472U);
    msg.setSourceEntity(182U);
    msg.setDestination(42057U);
    msg.setDestinationEntity(254U);
    msg.command = 115U;
    msg.entities.assign("MKVVFAZSPONWCJUJJONXOIKUFQWTPTPUZWCIREZQDAKCZTQXYGOGOJA");

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
    msg.setTimeStamp(0.5163441416786714);
    msg.setSource(59332U);
    msg.setSourceEntity(237U);
    msg.setDestination(23358U);
    msg.setDestinationEntity(52U);
    msg.command = 213U;
    msg.entities.assign("JWTJEBHEAEZQUZATHHRALFOCQJOVJLWNEKYULNGJKRRHRDZDISONRADAZKOBBYKTGVUHQMECXZPYVQLUCDXHWBIVEVKSFQNQYGZYGLJXDPISNNGOHUMCFQNWXAUSFUWXCHBP");

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
    msg.setTimeStamp(0.8727909299230451);
    msg.setSource(36502U);
    msg.setSourceEntity(91U);
    msg.setDestination(22849U);
    msg.setDestinationEntity(28U);
    msg.mcount = 4U;
    msg.mnames.assign("BPVJCAXNFGOPQTVSWRQECVDJAGAYLWMXQIYCGIDZRETZIALPRWUABEMYJHRHIFGXCAZSHQMLQZTKUBSXNMFKJXNFJFIBDQDVEXSSDJBPVWQTDLCRARWNYZHOIBKL");
    msg.ecount = 74U;
    msg.enames.assign("TPULZLAGOHIEIPEDRDUREZFKIHQMJLRHAIGYRKNDGPXOGVIMUOCFWWVNJWJDVBEANXQSEVBWQ");
    msg.ccount = 81U;
    msg.cnames.assign("ITCSTNURDRJQEDGFFZLVWGAIOJSUPAUAYQQHUKSZEKEVYZRWRSVWSNBIWXUJWM");
    msg.last_error.assign("IUYKTHDYOSFONKTMBAZDDJNBZLRZVFLNNHSMOZMXEBOOIHTIHMHZ");
    msg.last_error_time = 0.7470834604618216;

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
    msg.setTimeStamp(0.7333182319005257);
    msg.setSource(20106U);
    msg.setSourceEntity(57U);
    msg.setDestination(39378U);
    msg.setDestinationEntity(65U);
    msg.mcount = 60U;
    msg.mnames.assign("OUHDJDQLJEWUFQJVTSSDYZKOARFWBEXAIRXWLTKONMLXYSJIQGCYJGNEPZPSWVAIBQDBKUJELIBSBPTACMJUTOMLJDJWIFPUOKUGLKKNVNTGHRSQCQFFUVMXARTBZMLHPVYDXGZTAYIDXBOMPZ");
    msg.ecount = 82U;
    msg.enames.assign("FNHHFKBIZQVXZYWXJGFGBZEMLJZPWKOKTXAIUQKFZOCGTEBJNOMCEPBHAOOWQDZOYTUYUTAXOAJCIWKVSEUMRNTKMVQRDNWKJPTMTSMFICLYHJOFSFNDXCLVLPFYUG");
    msg.ccount = 70U;
    msg.cnames.assign("PRUGGFPGGADCMYXPDNZANDIFOLGFLXXJYNXSQNUVSYOELKJTBNBMSRRIOMRCDZNMLEFOJOZACSVKXWSXWQZJYKEDLGQAKYVKPRQUZCVUATOCVIMHUHHEIIXPEMDMVZRIWYUKQJQDMTISTDBUAFNNYLKKHICZWTLNQZSBQWZSBEWHBD");
    msg.last_error.assign("UMYFKABGNIYLGCETNJRPJHADOUQVZZFWTCOLYDSIOMLACEMREHGYRIHLVXMAPYBVODQEWOJXGJCEOULSHZFIZDHXJCDNTXMICRBZIBWHNEZWXXARKVRQSFQPNMFNNKVTOCEMGDERJLYTQUFULVKDTQKJQWXKGPURPZHMBYVKTAZRKPXYGBDSSPOYGZHHXVTFBSPAASNVBBIFEDHZSOXWIYGF");
    msg.last_error_time = 0.05810394646300565;

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
    msg.setTimeStamp(0.7136292281719328);
    msg.setSource(19397U);
    msg.setSourceEntity(74U);
    msg.setDestination(36785U);
    msg.setDestinationEntity(68U);
    msg.mcount = 54U;
    msg.mnames.assign("LDVZMGUDJWCMUDKEKBBEXMPWSDJKDGCRAQKSRDLJEXYGCLNHSOYCNGHQQNATIRWJWYJEHEHNMAAUZFWDDQOLHAEZXPMSCLPKQTTTAZGFKGQVZWRFMUFVIHOCXNGUSHGSKLXIBEQHWNYYJBXLXFAYLCVYPUNRBTTYDPZOZQVARKECNSTTSYGOOLUUECDJOPIYPRTVXQOELKOIS");
    msg.ecount = 232U;
    msg.enames.assign("ZNNWELYHXJXYSOJAULFPSKMFFDTLUIIBGWAEVTZYNOSVUSEVCLMQCDDIUPVUQHYBONIMKMOCKPZVGYYUGHNODRVSFDYIZQYXWCEBVYFUQXLHP");
    msg.ccount = 13U;
    msg.cnames.assign("PXZHBPYCZIBDDJGALRVAKDBKPGAWJGXQUXWZMIBTLZQVRDTILSDFOSUHWFZ");
    msg.last_error.assign("HHUVQCHGFGLJLGKBCXRWVBAFJMWRMJHYIZAECFNKHFINUQOPVUPDOGHTBIAYCVBLMCXRXJYMOATFQ");
    msg.last_error_time = 0.2163068204406613;

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
    msg.setTimeStamp(0.9120862286700864);
    msg.setSource(3632U);
    msg.setSourceEntity(72U);
    msg.setDestination(39567U);
    msg.setDestinationEntity(133U);
    msg.mask = 39U;
    msg.max_depth = 0.7219205781594705;
    msg.min_altitude = 0.47811184416016905;
    msg.max_altitude = 0.648714052822145;
    msg.min_speed = 0.8401727999581191;
    msg.max_speed = 0.41344133893251844;
    msg.max_vrate = 0.8604882641018349;
    msg.lat = 0.4385089475845684;
    msg.lon = 0.25662738616251846;
    msg.orientation = 0.35440932478099263;
    msg.width = 0.8541076904289455;
    msg.length = 0.30431797316828846;

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
    msg.setTimeStamp(0.7729332812720677);
    msg.setSource(45913U);
    msg.setSourceEntity(13U);
    msg.setDestination(6854U);
    msg.setDestinationEntity(82U);
    msg.mask = 193U;
    msg.max_depth = 0.9738424452823451;
    msg.min_altitude = 0.7658533823416581;
    msg.max_altitude = 0.04271709862979267;
    msg.min_speed = 0.9413773006390634;
    msg.max_speed = 0.8139185493934996;
    msg.max_vrate = 0.3781367934261308;
    msg.lat = 0.6358749784746112;
    msg.lon = 0.9866712004282993;
    msg.orientation = 0.4012355562133926;
    msg.width = 0.9173664287308649;
    msg.length = 0.8525487113722443;

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
    msg.setTimeStamp(0.27061334444968543);
    msg.setSource(3350U);
    msg.setSourceEntity(58U);
    msg.setDestination(39861U);
    msg.setDestinationEntity(119U);
    msg.mask = 32U;
    msg.max_depth = 0.620021238643659;
    msg.min_altitude = 0.7102527788886743;
    msg.max_altitude = 0.7500925456013116;
    msg.min_speed = 0.3357104204126138;
    msg.max_speed = 0.34469528758332646;
    msg.max_vrate = 0.6334150857736832;
    msg.lat = 0.4887164690511202;
    msg.lon = 0.9993952858729765;
    msg.orientation = 0.4345211784271449;
    msg.width = 0.06222745382670625;
    msg.length = 0.14906991358369037;

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
    msg.setTimeStamp(0.37940818912440477);
    msg.setSource(61166U);
    msg.setSourceEntity(225U);
    msg.setDestination(23074U);
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
    msg.setTimeStamp(0.7103220554282947);
    msg.setSource(29860U);
    msg.setSourceEntity(184U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.6020657652170267);
    msg.setSource(24671U);
    msg.setSourceEntity(217U);
    msg.setDestination(44467U);
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
    msg.setTimeStamp(0.32483935511449447);
    msg.setSource(7895U);
    msg.setSourceEntity(243U);
    msg.setDestination(11664U);
    msg.setDestinationEntity(81U);
    msg.duration = 60034U;

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
    msg.setTimeStamp(0.17538946575061864);
    msg.setSource(25089U);
    msg.setSourceEntity(79U);
    msg.setDestination(36544U);
    msg.setDestinationEntity(246U);
    msg.duration = 27304U;

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
    msg.setTimeStamp(0.8857843541345244);
    msg.setSource(61701U);
    msg.setSourceEntity(28U);
    msg.setDestination(65077U);
    msg.setDestinationEntity(162U);
    msg.duration = 38015U;

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
    msg.setTimeStamp(0.14431291535556956);
    msg.setSource(48358U);
    msg.setSourceEntity(207U);
    msg.setDestination(55729U);
    msg.setDestinationEntity(1U);
    msg.enable = 196U;
    msg.mask = 2341189265U;
    msg.scope_ref = 0.6677244035560226;

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
    msg.setTimeStamp(0.43123327571666437);
    msg.setSource(13679U);
    msg.setSourceEntity(52U);
    msg.setDestination(17687U);
    msg.setDestinationEntity(52U);
    msg.enable = 161U;
    msg.mask = 2304673218U;
    msg.scope_ref = 0.15766907708612288;

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
    msg.setTimeStamp(0.9386610366404438);
    msg.setSource(43421U);
    msg.setSourceEntity(82U);
    msg.setDestination(32659U);
    msg.setDestinationEntity(7U);
    msg.enable = 11U;
    msg.mask = 2446582729U;
    msg.scope_ref = 0.10064748602170814;

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
    msg.setTimeStamp(0.9527811302576065);
    msg.setSource(42481U);
    msg.setSourceEntity(25U);
    msg.setDestination(56008U);
    msg.setDestinationEntity(138U);
    msg.medium = 123U;

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
    msg.setTimeStamp(0.46512120520975786);
    msg.setSource(39474U);
    msg.setSourceEntity(30U);
    msg.setDestination(65103U);
    msg.setDestinationEntity(238U);
    msg.medium = 196U;

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
    msg.setTimeStamp(0.15495647705441706);
    msg.setSource(12738U);
    msg.setSourceEntity(147U);
    msg.setDestination(9349U);
    msg.setDestinationEntity(218U);
    msg.medium = 163U;

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
    msg.setTimeStamp(0.07909547378771475);
    msg.setSource(28917U);
    msg.setSourceEntity(149U);
    msg.setDestination(39426U);
    msg.setDestinationEntity(134U);
    msg.value = 0.007315672288715658;
    msg.type = 204U;

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
    msg.setTimeStamp(0.7709777454638767);
    msg.setSource(1164U);
    msg.setSourceEntity(10U);
    msg.setDestination(61802U);
    msg.setDestinationEntity(135U);
    msg.value = 0.38229535071848786;
    msg.type = 143U;

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
    msg.setTimeStamp(0.6332460542606285);
    msg.setSource(35563U);
    msg.setSourceEntity(154U);
    msg.setDestination(35089U);
    msg.setDestinationEntity(245U);
    msg.value = 0.26852670899458986;
    msg.type = 224U;

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
    msg.setTimeStamp(0.7108473066166053);
    msg.setSource(15667U);
    msg.setSourceEntity(56U);
    msg.setDestination(50515U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.9405316744732337);
    msg.setSource(33856U);
    msg.setSourceEntity(186U);
    msg.setDestination(54458U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.6338466387882019);
    msg.setSource(48807U);
    msg.setSourceEntity(134U);
    msg.setDestination(10210U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.6893713386880449);
    msg.setSource(5235U);
    msg.setSourceEntity(19U);
    msg.setDestination(21841U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("NPJWFPZNQJRXA");
    msg.description.assign("IRTKDUXCAJLPXKUDUVKYAWZSQHKDIIFIZYCMGKTPMECQJXFCOVHWCEJVJMLRKAXCQZTOQXSWIOHPOQYUWTDVUZBCLYVOXVJFZWKQSHERHRXJMVEZHBFIDTCPFAWRUGARJGEBEIKXBASGUPABSNVQWRGAMYTJBVYNNKZETHEPDDUILLNNZDAGODYFVITYO");
    msg.vnamespace.assign("VNHLZDDACBLMYLFESGKRYRCWSTGXXTSMHVMBFUUOWMZDWIPUUHHECWPIUJVJEEZITSNOBYISXPPMFERVSNAZHWOSJGDDSDVZXKZBODZEMFAPCXNZHQIPYAMBBLKCRWOQETYQKUHONTVQURCRMYOXWQAOEPIBUQXHJXKRRBLQRLXNDGZJYKALRKWNEQGVFVSBMJYBUPFLMIHOOT");
    msg.start_man_id.assign("VQTLUBBRYENJ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("WFSHYJFCNWMFDPTVVBGIQOJYIQJXAZTQKTHEFAOBTLYXEAENRZQMHVSGIMTIGOXRGTJCWCKTXVYMICORLKPKSGHCOGAVGVFBOEFCJTZMDYRJJOPSSXTMH");
    tmp_msg_0.dest_man.assign("SUYLLKCXYFARYLMGRCIXBGHTPFOMHGPLMGANATLWCSNIZODZPADPLMTEJLVRIBTCNQCOTJGROFEUVQBZRSXDKWZVVTQIUKUUDQFRYKWUYZWOGAPEQCXCXBWXNNLLYZINRKNHHDQMAJOBQDAGPJZQNCEFRUYJZUNPXUBWESVJCGIXF");
    tmp_msg_0.conditions.assign("PGFNXVJLBIZBIOHNAXZEPSMZYQDQCTFKWVUJDFUKOHKUYKQGMLSASFEERJZTIFISHOORNRVUBNATIZYSKFDLBXJKZGLJCNJEIZSZBWRHSSVMDYJTPSGLLREVHUZQCHXFPPWDRGUFXIPNOEFYBLLYUBYDQC");
    IMC::SetThrusterActuation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 4U;
    tmp_tmp_msg_0_0.value = 0.10151908909573171;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::CloseSession tmp_msg_1;
    tmp_msg_1.sessid = 1328252037U;
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
    msg.setTimeStamp(0.8113420155867583);
    msg.setSource(23234U);
    msg.setSourceEntity(66U);
    msg.setDestination(62244U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("CHSSEWDCFPCEXZTNWHTMZVLWSWJDPOPWMLDGJAKHJKHLXNFLFPDQIFUOXVVMUJYBGDVIUEXQOHUTJAD");
    msg.description.assign("XTWELJIZRTJMAVPVWDAGWNBWZCZOIFUHHTHNHGYGCUTORHBIHFMLYVPCTRRSRQREJBLBGKIUEMNYSEONXHTMSDXXPMLQAGNNUKOZUCWXHYKERQGFXTUQHCANN");
    msg.vnamespace.assign("PXYJBNCUSIUWHVRZVTAHKYNRZNYROGAOMEYKBVGGLHDQOMDWFTZJECSZXXSRYNYDSTZMEANOXOJUCPPXYNPXVWARKGBCODALMIICLVSMVGJEEUJBYZFUGTZNIQCIIXJDNAEFCLORGBDTWAPLAJWQXKOQKHUMATYHKMMWNLUKKUHSZZJSQLRDIGFBSUGPB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DWEBTOAPHDNULBYISGNBMMFRYLOGTDLXKLQMTWYEGQRIXYGHMJCUNJGFKPKSCRALIUXREUOBFOVJXJEQJPVNEMATFYPEGQTOXMGTQZGPZHNZNCBDOMKHZZDONVSKNVHJOUACAKFDKXWLRSSYRUYMFVHWFKEHJJTJCPJIUIZLCDXDFHAABKSWUVTGULWQCEHZBAHTCYIZAUFDRMMRTIQWXPSSPRCIXWR");
    tmp_msg_0.value.assign("KKCXYLEBXVRXEFTWNRKHZLQIPLHVRHSYEJATTDUIXKJDOQGPJSTFZUMMAWNBDMOYRMKHWZGQQFWFYD");
    tmp_msg_0.type = 9U;
    tmp_msg_0.access = 102U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ADHXRBCJDSPZFCTYUOOPBURIWNRSIRGGBJEXIPXWIQNMPMZDQNRYMNWJFJRZQFMFUDHAKWPOULOLWCDKJVJWPMXAGVGSYIVMHBZHHBRWRKODGCJCHQFCCSQEGRNCVZGXAYKTZJWTAEDFMIHIOTUQIZLNXFAZTWLVTYMVHVFKBKZGXHNWJUBNOEKORVCEMTQQA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KKQJTHEBXFACINIQMVRVIQLTXFKCNMSSLLOEHLLHSUMJF");
    IMC::YoYo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 57688U;
    tmp_tmp_msg_1_0.lat = 0.20373896247892354;
    tmp_tmp_msg_1_0.lon = 0.7376797419838232;
    tmp_tmp_msg_1_0.z = 0.5861193327800885;
    tmp_tmp_msg_1_0.z_units = 102U;
    tmp_tmp_msg_1_0.amplitude = 0.23606589494716723;
    tmp_tmp_msg_1_0.pitch = 0.4444177971603305;
    tmp_tmp_msg_1_0.speed = 0.0380612110940981;
    tmp_tmp_msg_1_0.speed_units = 54U;
    tmp_tmp_msg_1_0.custom.assign("YUNDYQMPGPVJAEEDFGHHXMTBDEAWXWITDYSMFHNYAOCDHARJILWKUQOZJJPZUKKRTMMBVIGZBVSEQBDDOGQLUBSDBHUZRDMLMZLLCDACXCHVYHRQJOSMQIWLEUZJHJHGKIQLNPUXCWGUCXJQXCANMFTRGMFFZCEFNRSWZPXTPIYORBAOGWKUARKRXTBYJUFGPXEOLEIBNNFZLYCVKFZATXWOKPLIYYAESOQNJVWKSVNRNFGKWIPTVV");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanDBState tmp_msg_2;
    tmp_msg_2.plan_count = 31848U;
    tmp_msg_2.plan_size = 3217458482U;
    tmp_msg_2.change_time = 0.6333029791999436;
    tmp_msg_2.change_sid = 7722U;
    tmp_msg_2.change_sname.assign("XSZAMDYFNULBNVRSRSYQWKW");
    const char tmp_tmp_msg_2_0[] = {24, -64, 124, 111, -120, -103, 106, 84, 122, -27, -76, 88, -72, -83, -55, 20, 20, 35, -92, -89, 110, -41, -97, -12, 90, 8, -104, 13, -98, 63, -125, 125, 4, 19, -104, -42, -107, -120, 15, 83, 54, -122, -28, -124, -53, 52, -78, 12, -63, -101, -53, -55, 86, -107, 8, -73, 92, -114, 54, 120, -52, 92, 104, 23, -6, 13, 83, -79, -1, -17, -123, -88, 59, -79, 53, -125, 25, 73, 78, 63, -74, -110, 23, 31, -27, -6, -77, 106, -119, -58, 91, 36, 39, 43, 123, -102, -37, 102, 102, -120, 99, 94, 13, -122, -81, 56, 102, 3, -107, -101, -67, -71, -23, 120, 72, 15, -6, 24, -42, -30, -118, 24, -118, 65, -64, -35, -70, 71, -23, 3, 35, 91, -6, -24, 97, 78, -34, -21, -86, -80, -117, 15, 15, 51, -8, 59, -86, -69, 4, 18, 17, 72, -61, 5, -118, 9};
    tmp_msg_2.md5.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    IMC::PlanDBInformation tmp_tmp_msg_2_1;
    tmp_tmp_msg_2_1.plan_id.assign("ZGHMZLWPIINMEOQCORGJSJRFXJBPEVHIAOLEHBNXJUDVCBGWSWLVITMACKSDAQHZIGDDKHCRPKL");
    tmp_tmp_msg_2_1.plan_size = 25558U;
    tmp_tmp_msg_2_1.change_time = 0.41672781858299623;
    tmp_tmp_msg_2_1.change_sid = 13404U;
    tmp_tmp_msg_2_1.change_sname.assign("AQSHAGHAMNGDZQUWGGMQYLJAPSZWTRFFSQUDCTCIBFHLJRNPMJHBOXXUTPBYYIJESSUZXUKAGJLCKDQAEXMWOMKSIDVZPCEKEWKTBPZXHAWOKEMJJKRNHVGTNUXKLGQVFFTOMJHLRHXVCUSWRREZQPGYILBAEXEFDMTWEOOACCVIFMRYLRSGXFSSQCBOONUYDCTFJOMVZDZXNBRAWPIVBVYUNLTFBB");
    const char tmp_tmp_tmp_msg_2_1_0[] = {110, 121, -112, 3, 6, 11, -15, 0, -22, 59, 48, 43, -74, -22, -20, -110, 78, -62, -113, -43, -106, -74, 26, 58, -105, 83, 86, 14, 83, -5, 13, -32, 28, -117, -53, -33, -64, 2, 51, -33, 41, 118, -94, 55, -15, 45, -74, 123, 117, 48, 52, 102, 117, -8, -40, 48, 34, -81, -60, 77, 102, 39, -70, -47, -46, -46, 3, 19, 92, 78, 59, -27, -107, -17, 34, -106, 101, -80, -26, -37, -61};
    tmp_tmp_msg_2_1.md5.assign(tmp_tmp_tmp_msg_2_1_0, tmp_tmp_tmp_msg_2_1_0 + sizeof(tmp_tmp_tmp_msg_2_1_0));
    tmp_msg_2.plans_info.push_back(tmp_tmp_msg_2_1);
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
    msg.setTimeStamp(0.6472040963664837);
    msg.setSource(37226U);
    msg.setSourceEntity(78U);
    msg.setDestination(9670U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("YOKYJRELVY");
    msg.description.assign("REHUPHJPRAWLHPFZOUBEOAXISJDGSSVLODDMFZDNWAGBKDQMYUUHKMKTZJMWWELHZKWANMGSXNKGORETHQTOHMICWGIQCPVAXWGYSPDSQJRPAFUFBYUXYQWKALCPYHPTFXZDZIZLYUJELBCVRDNEWMHYNE");
    msg.vnamespace.assign("KXWILIUSKOWULOZULQOBFDHESRHFSBURUPBGPKWSAVKQTQLYDYNFRVFTAHESOPTQAXXGKQLBMTK");
    msg.start_man_id.assign("NKWXLYXSEOOWLAGRJHMSEJMMZIGQABRYIFSDCZPKZYHHNGPTTYEJSTWQUDSPAVBRAOBQBYVEKFHHKZJMPVUKDGUXWPGLILCHCBMSUKBHLZHBAKNFXPI");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HHXCBPSDZYEHDDTXUVKGHBGNEQZJTYWYAXTOQUCFUMNNVECYXTHQLVCLMFNJQFTUCDSZRISZGZKHIDFLRUAYYELMOERPCVXXGI");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 60557U;
    tmp_tmp_msg_0_0.lat = 0.9496002102337108;
    tmp_tmp_msg_0_0.lon = 0.6702932924538938;
    tmp_tmp_msg_0_0.z = 0.6969468801696104;
    tmp_tmp_msg_0_0.z_units = 195U;
    tmp_tmp_msg_0_0.amplitude = 0.867389386897438;
    tmp_tmp_msg_0_0.pitch = 0.8835973456365803;
    tmp_tmp_msg_0_0.speed = 0.8247770220340241;
    tmp_tmp_msg_0_0.speed_units = 142U;
    tmp_tmp_msg_0_0.custom.assign("EXMQHPTZGDYMCDGRIXSIMKOWENEUCVXUQVWMORISHUOELLMPAWMZZDHPIDXGOYZYLHAHTVJLRLSJGIEUSBYHWWIDXFNUKRUQVHYMJTAB");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7805511106144604;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QOVBPGUQIYZXVKHLMXEWTLKOGAKYJIYLHIAACVHLDGJTMSUXHKZPEIRUAJTDAAMFBHCGCZMKCXPHEGYFSRCPZSMXABTKUINFWOTOJLRBIHTWHQHBSEZTUHQYPNJLMRKJFFQVSYBMCMTLCDTDDUBGBXXGVRUVWNWFIDZYVXTMICIUENZAUYSSVQEJGKZLCF");
    tmp_msg_1.dest_man.assign("GVZGPKASZELNVLBMNKBWCTKXCXHJTLUKMDXXEQRBCWWYPUAIRHEVQGHIMWEDRREZBJMVAJRMETBULKLEXVYAQSODIPCULRZCNUIXQBAYHONYKZYUVTNUWYOJQJMBAMJXNLUBXCOMHCOTFVNOSCGDUHOEPYLHNWPEMDTXPVJIDYDSGCFASCQEKFZYHFZJVFNTDPVTFBQZJSAKGNAORKW");
    tmp_msg_1.conditions.assign("GTUZOXOIDOVBYRHVWSXFXNMMFCWRGLUYLMQFJPGXVQWCELIEJKPNQTKEXFDOGIPCQYDHUQQEZHXRBVFSERMHOKLEKMTCWEW");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Elevator tmp_msg_2;
    tmp_msg_2.timeout = 35310U;
    tmp_msg_2.flags = 75U;
    tmp_msg_2.lat = 0.2813575148523666;
    tmp_msg_2.lon = 0.7065682546749602;
    tmp_msg_2.start_z = 0.7978740414239714;
    tmp_msg_2.start_z_units = 42U;
    tmp_msg_2.end_z = 0.20156195865233495;
    tmp_msg_2.end_z_units = 186U;
    tmp_msg_2.radius = 0.20536894099552727;
    tmp_msg_2.speed = 0.34767893599865796;
    tmp_msg_2.speed_units = 119U;
    tmp_msg_2.custom.assign("HIBDZJHOMRHLQUVKWVWDPXPPNLMYEWXGIKWJDTXYCZBRJRBFVXNLFKQHGTHRZICZGGIAFDTNPNUQZEDWGCFNBTSCNCHLUFJCYLXLYELGQQNXZXJPRLUPAPASWFCKREBUSUENJQKSBOTSSYMIQMISEFWODDVVO");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.7386667408134177);
    msg.setSource(30113U);
    msg.setSourceEntity(156U);
    msg.setDestination(27507U);
    msg.setDestinationEntity(254U);
    msg.maneuver_id.assign("KKXQYIUIJZBXUSXQDOENHKCASLPIDFADBWBDQSCGOBMPGFLDFQZJONANOSZHWHKETFAKZGLIVCDUOCGLUWZHEGMPVKXYZOMEFGRPVNNCONFVAHIAVVAVYYLIETJHTJLHEOMTGVBRRCXJLRDOLYNNFUXJRDRJXZJTQFCUGSZKSREYWIPAQJMSKWACUSNZRBMTBUSEDWPKVQYPQKMXMW");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 20136U;
    tmp_msg_0.name.assign("SFATKJMDBQOPLYQIILJRNKCCQTHSAVYJHLDKWBYAUQZRCKFWRBUJJHWFVEJVZGLLSEHDXSVFGGYJDLCUDQWOPYOFGPJIKNPQLVKROMBVZDPTOQY");
    tmp_msg_0.custom.assign("LMIJLOFCRSTWFICZ");
    msg.data.set(tmp_msg_0);
    IMC::Loiter tmp_msg_1;
    tmp_msg_1.timeout = 36982U;
    tmp_msg_1.lat = 0.7497482839385442;
    tmp_msg_1.lon = 0.8860271833482769;
    tmp_msg_1.z = 0.22270880040381735;
    tmp_msg_1.z_units = 86U;
    tmp_msg_1.duration = 36550U;
    tmp_msg_1.speed = 0.05338151905061461;
    tmp_msg_1.speed_units = 42U;
    tmp_msg_1.type = 101U;
    tmp_msg_1.radius = 0.849823046636819;
    tmp_msg_1.length = 0.6399210093062755;
    tmp_msg_1.bearing = 0.01673205741391004;
    tmp_msg_1.direction = 214U;
    tmp_msg_1.custom.assign("EZANYJIOKYXEODNUWZYMQACFLZHTDSUVVJVJVHWRGHQBRLZDVMMGUETBUGRYRPHYTPZTCOKSLPYETESQNPDGMIIHSUIHXDCQRDKZCOAKJGUKSNGAYHEWZIBJEAXLCOAFRMARPXIXQLNMDWQTLBVAMQOZLBNCTDZVONORBIIFBSPJFXTFJWFVGUKGJTRBLFTVCUIOWCRSPSO");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanControl tmp_msg_2;
    tmp_msg_2.type = 79U;
    tmp_msg_2.op = 81U;
    tmp_msg_2.request_id = 36556U;
    tmp_msg_2.plan_id.assign("VFBJLGONCOFRMTDBJWEDWSCPIHTVEGZFDEMBSCCATRCYKICURSUVUZALCCGLYVYXTYPXSW");
    tmp_msg_2.flags = 41814U;
    IMC::QueryPowerChannelState tmp_tmp_msg_2_0;
    tmp_msg_2.arg.set(tmp_tmp_msg_2_0);
    tmp_msg_2.info.assign("JXKYLLLTIFGZFANYIQQHVSPHHPBVTUOMVQHUZBQFPXMPBCATBSHDKHZGFDBNLZCIUUGGGQDYXJYVVAAWLWEQXENEZDWDMRXKAKJMUJNDGSFWTBDWOSZMJHFRYINZEYSMQGKAURTFVRQQYAPVXOPDFEZLKIABI");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.7668709815436164);
    msg.setSource(57736U);
    msg.setSourceEntity(6U);
    msg.setDestination(48950U);
    msg.setDestinationEntity(51U);
    msg.maneuver_id.assign("GBAWMBYYZCWXDFHGNVINUGUBNCVHVADILWSOWRCODTUJZFAQEILGDZLZKKYHYIUXWDHQWFMEQMOFYTSCUQGRUJTLFJUVBGHCCALVIMFDXQHJCZEZGSFRMXSBUOORDPQZYZRSXBLJTKONXLJNPDRORPXYS");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.606958137981421;
    tmp_msg_0.lon = 0.443747146115673;
    tmp_msg_0.z = 0.502523057548036;
    tmp_msg_0.z_units = 21U;
    tmp_msg_0.speed = 0.4414404598255339;
    tmp_msg_0.speed_units = 239U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.9316882481704384;
    tmp_tmp_msg_0_0.y = 0.25443080629283277;
    tmp_tmp_msg_0_0.z = 0.47483317912876155;
    tmp_tmp_msg_0_0.t = 0.1255718695054513;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.6927932935952718;
    tmp_msg_0.custom.assign("OXRCTCCBWBHWZEFLGADNZIFOYZCGBTCFEKBJIUKONLMJSPSFPNYHUYZBFAVUCALHMSJJWEEQGSNVIDPMUGARUUWJHLKGONZAGGOBLYPWWVGBUMWOJIQZATAEFNFMQSUFLZDDHVQATRMS");
    msg.data.set(tmp_msg_0);
    IMC::CpuUsage tmp_msg_1;
    tmp_msg_1.value = 13U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SoundSpeed tmp_msg_2;
    tmp_msg_2.value = 0.11062834233891938;
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
    msg.setTimeStamp(0.29902545885525156);
    msg.setSource(43594U);
    msg.setSourceEntity(231U);
    msg.setDestination(32137U);
    msg.setDestinationEntity(48U);
    msg.maneuver_id.assign("ISGNKZHSLPBORNCTSBTKGQAHSYZXFJWKBERNRIDZAVOLTTJAGCUBVWKPXAXDJNYECAVTNNJLPMLEFWPEGBGAFHHMKEWRPXIHCMHBAWKIFHCOOBVTZJUCQOMJNCQKYSLXHVGYGOGLACIJFUVSRUNQCFDPDRRNISWWKURZQMXEYILTUJICDFYLYMSZUQQYTQFLPKEPADYNVDYQEUJBODMDX");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 9344U;
    tmp_msg_0.lat = 0.3898633007737575;
    tmp_msg_0.lon = 0.6314259663897455;
    tmp_msg_0.z = 0.06398492387568455;
    tmp_msg_0.z_units = 33U;
    tmp_msg_0.speed = 0.09514551717600606;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.roll = 0.23841816765641288;
    tmp_msg_0.pitch = 0.7622354627805564;
    tmp_msg_0.yaw = 0.5699424844180462;
    tmp_msg_0.custom.assign("LIIWMNKRIVKTYSSUSXGBEVLQRAHPMTNXGTEBKDHJAHCDBSKCENTTGTKCRUCUBCICGHWEZVAOIXKESWSJISKBIPQOJHWFQFBOFVRWZTDLRZKYNNGWTBYWNHTOYAXFXYYNCDNZGULQLUJQOZDOEQVKSLXZGGFDPMAHRAILULVJKXGYVLWMMYREFJPPHCQQXVIJXUUYSNMEBAILPDWUBRJVJPAEZDBPQMCHFZAOPHXYQEV");
    msg.data.set(tmp_msg_0);
    IMC::EntityMonitoringState tmp_msg_1;
    tmp_msg_1.mcount = 129U;
    tmp_msg_1.mnames.assign("CGVSIUQHHOEUPNQKJWGXVGMCOYSRABEYWFKKYRAUWWCJDLISPIPOIUTMXYJDJAGXGYZTDKTUEMXXOARGWNKFQQJMOQBTOVLPTFGHUHHAUCLLWFNMBNCECNNTONEVZREXSX");
    tmp_msg_1.ecount = 78U;
    tmp_msg_1.enames.assign("LKDTJTDKZCKHJIUEHRFUPSJCJFSEJZETPOIYCMNQAQMPKTZZGSHLNCVYJCVHFRUAZWEOROQCFZVQNRYEDAKGKWZSYRIBYPDVWGBAHSQFWVFNCQRXRP");
    tmp_msg_1.ccount = 142U;
    tmp_msg_1.cnames.assign("QNJBUNHMYISOQHHSVZOBSFGEIBKZEYYNDBJTJLHXLVRBAPINIRMZUNZNAQLOCMWOMPEDMFBIOAKXTHKRWKPUMGLVFLIWGHFKSQS");
    tmp_msg_1.last_error.assign("GIKKXDHYDCKNWFTFZKRVTSOJYWMVFCUGSPNMPPYCVWJZAJHOQZGLEXUQNOCWUAPRZKBHLKFXQVWTRXKFNXZWWZVYZUIJBLGFSANIYYXSFGRSILOQOTAMBVEAEHMHQXQUQYTOZCCSMTQRZTMLLZGWEBQREGWAMEEJ");
    tmp_msg_1.last_error_time = 0.4893184700714446;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Target tmp_msg_2;
    tmp_msg_2.label.assign("QTRNHSMGTLDBNUPOUOKNYVWKWCDWSPRJXLKEJVQEXEVNROZFPAMDHIXCJOVBROIJBKRTKCLYHGINUNZASEBFKCMZFBXSPHSTIUPBPQXACYYAHJWNZIEZSLKEFQVGISXQZWYHGYGACGWFHMLDGUVVVY");
    tmp_msg_2.lat = 0.9171612457356995;
    tmp_msg_2.lon = 0.3534313481942015;
    tmp_msg_2.z = 0.567824173130974;
    tmp_msg_2.z_units = 142U;
    tmp_msg_2.cog = 0.6277527418930554;
    tmp_msg_2.sog = 0.35475390074064483;
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
    msg.setTimeStamp(0.9177383561349696);
    msg.setSource(16666U);
    msg.setSourceEntity(53U);
    msg.setDestination(3360U);
    msg.setDestinationEntity(134U);
    msg.source_man.assign("RKMYKPNVRTIYDAOPDUYTNSXQSORPWBG");
    msg.dest_man.assign("LLFVIHMTXWTZTDOGQZSDVYNGWWGDJQHPXIIGGAATOKWCNPRFTYBLESIXEQRTLREFIYXGUNQKB");
    msg.conditions.assign("WWEBYEMAQKNTOJIYWLJTFXWUILEVVBVINVMPTHAIKRJIRKCPIOQOGUKJOACJSTAWXHYUFGWTFCSAWHJPNNTVOGPPBGPMRAQDEJUZHNRNVIWFEZLKVCXRNSUBDORQMHSJCMBCZTDZLCPDYMTEVVEZSXHSFBBVAQZBOUSZLWQHCXK");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.9662295199475727;
    tmp_msg_0.x = 0.9431657348789935;
    tmp_msg_0.y = 0.9563617811766483;
    tmp_msg_0.z = 0.49222955104011346;
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
    msg.setTimeStamp(0.16514138759902952);
    msg.setSource(44078U);
    msg.setSourceEntity(175U);
    msg.setDestination(5622U);
    msg.setDestinationEntity(82U);
    msg.source_man.assign("QQEXJCRAEAVNFQJHIHOWSTPXPTJZNHXXCWNIOVJPRTZONIRVJKWSRNLIKDFKTDPZBMYLECDXXZHVBUCLYBOSGQIGRNYWGNIOLDMALURTAZVMIYVNORXSWPKXHCKDQHSIOAYKUQVGJQFSMDB");
    msg.dest_man.assign("BZELNEEYPIVSSIECLFTDAECXVLQTXUVRNNAASZPXFYEWIHUDLYGBNHZYZRHMBBVIYWEGIOZHKCMJMWBNUJBXFWAQTTRKDAZHPWOIYAYYQPDLBFRCGOKWXOQUMROTHJVQVTKMCAZGIXNI");
    msg.conditions.assign("MJEUWJUDASXGYCGGVCZGQYBCMQFSAGRHNDJXWQJHYNBVPPBBWYFVLZFKXZRYEVGBTYTECPLIOJBKMFAIUOHEONUMYOEIGLBZTYXLDGTFUQABDMIKLJEPXJKDNTXOMLCLFAVSZQZOWKCXSNZEVNHOUPJROSQFLRSWGCMLYKKVPPTECTRMHRFSRVH");
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8650229219207306;
    tmp_msg_0.y = 0.8114212959077123;
    tmp_msg_0.z = 0.7555873636814604;
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
    msg.setTimeStamp(0.6276931791796222);
    msg.setSource(44715U);
    msg.setSourceEntity(144U);
    msg.setDestination(18836U);
    msg.setDestinationEntity(74U);
    msg.source_man.assign("RCLWDEJQFXZMFMTNNPVPZGBLAZUZNIEGLPHKPYGLKQIPCPKYXYOZTCOVNLHBWMRKCIQBJDOOTFHVVKGSOAYLMBMYLUBXJHWUWZFZYFJCWADDXOWWPHCJRAYHBEXIKEEMXWMGBHKCNLITEXCFYVJHOTDBUKUANREWDGAPTFZFDGTFVFPJOEBAVBLOKRAQTRSUGSEKMRTVCSERSSRJU");
    msg.dest_man.assign("ECAIFSCWPZHKAHBMXWXVFNBCSYQPUFADPIJMRYIPVLVESKGUCRUGPSJNCGTWOKQNNMXGDLJK");
    msg.conditions.assign("LNAINVRWSZZCNTFYELOKWLKJAGHYBNBHRZGMAHTWRNLQGEVMDEWQKNSVJGOERHEDCUGYJVODFVXMOIDDLDPKFPJKIGPKEQOCBFYWJQNCOKLBXNAPFPCAFUMUYRFJTQHTPVEVPTSPTCHIXIBUQJDMUXSVZYZNMAJIBSSPASIICJSLVLXZBIQDFRNHWAHYE");

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
    msg.setTimeStamp(0.8836739888989017);
    msg.setSource(52914U);
    msg.setSourceEntity(44U);
    msg.setDestination(49301U);
    msg.setDestinationEntity(248U);
    msg.command = 22U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EFGVWLVFJVYZPHYVMFENFEJROVRZQFSWRVWQXRDRKXFKGYDTBOSRXMAICYKNCHNJCVKHZDOWHVXSIROALIBNGAOTHNTGICKGPZHJBDYPUSKGJWXOQPQYUFNBLOELG");
    tmp_msg_0.description.assign("ARDEPBDYFOYUENKRKXYWZUKWRVTXQYQZXCH");
    tmp_msg_0.vnamespace.assign("NLYUGHGQHFVJYRVYHDYLUFZNCMXYHITAQVYLKSUQDSSGZIQBUGEAN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LKRARNLVMORJQMCEONRDSJCZGUANYDOJXMNIVVIARRYNAOZTTPRQQQIWHFXSQZZRXEEPYEEFJSUAPUUMMYGEVDONPDHUJWBTYMMCLDUQXGILGAHZHSTMUIZBFJTMCUMAJJIPHPZEBUXCBVKLCVAJDLWDFBNSAJKFYZPQEFWQZSNOGZGWFHRLLHFHEKHKYGCOCKSGQGOOKBFHIGKKXSEVWVDFYUOB");
    tmp_tmp_msg_0_0.value.assign("AKOPKSMPUHDLIMJCXRGJRMMVJBFUIRLSEPPQNHYSZNYTITRZVUMULSZAUHFUOVGAEJWXRZSBDQGNMCOIPXFIAFVHISNQONBUFEDEFBLYXGCVBKAUODAFCLYVO");
    tmp_tmp_msg_0_0.type = 247U;
    tmp_tmp_msg_0_0.access = 197U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VNTUAIZUAXPXYTFIBRSHGASEDJNGLPCEYLOBDHGTCSEGZSKQJSFJXQGTMYWORVDJTOZFKBCTVWCIDRFQMJXUVAJGXBHEZEAMRNVOVIGSUPZUGMNQWKDWBNCRJQSMCWAPPRLTEZXTZWJXSAKKWFCSEHHXLDBQDFXVPNYFDDEJPMECFBLHIQMXLIIRVWYSNBIYZYPHZLKMLBAHTVUZMARNOTOFLHYNEJCOUPOBDQPKUUGQKRKWUQIHLA");
    IMC::Calibration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.duration = 33959U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.6218230546060229);
    msg.setSource(50822U);
    msg.setSourceEntity(159U);
    msg.setDestination(47914U);
    msg.setDestinationEntity(132U);
    msg.command = 98U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MSQTVKFIAGRZDDNJTNWQKKFADYSCNHUXEWSTHHQOBLTBBSZXXUJCZCYDSLJJVTDLQYFSGJAVFNVEZCXPJBXQYWALOBEBKMOTXTAPBVMAHZWNVVQKROMRLMGGFUITMYEXZA");
    tmp_msg_0.description.assign("EDBBQMJAVUXNFYHNPXHJPUCVCIQVTEXEPCUAYCYVVYGNSVROIIGJTRDNCGXMTGAJVOJLXLAUCYLBEKXNHJDFSCWYANCJTNGQQKULGOAJNUTDAGVPMIRITFSMIHEWHXDZORZWWBUQVMHSYMYRTPDUFLCMBZQWPWHNRSHLFXSZQHDKOHSDEXGMZOFWUKKFLNMQGKXVEOEZJPZTRKQFBAQWEAZKLFY");
    tmp_msg_0.vnamespace.assign("ZZXDXQJAEFVRONLHAGEJITATCWJRSWKYPUOQFHYIKGWGIVBCBEKDVWMRXFANZRYPMSNSKZWMLIYVKLSDHAUEGQKVUF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XHHKNDQEJEKVKJXAJEUOJVOLXYFNZWKCMISZQT");
    tmp_tmp_msg_0_0.value.assign("XZFXSNMPJTMDLGCGNXLPVPXJGLBARKHJNWSIELAOAD");
    tmp_tmp_msg_0_0.type = 2U;
    tmp_tmp_msg_0_0.access = 26U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LDWKPQELFLGYWXZETILZOABOSVRGUPHMMXOJAHZEUELRDLOXQYMDDPJUVVBFCLUMELWCHJCQLBGWYTKWLEPFYYCRIINEQGYDKYUGXVUWAKTTVNJKSVRZJTSGNVSTZANRZNTN");
    IMC::LcdControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 3U;
    tmp_tmp_msg_0_1.text.assign("BRMZGFFTFHUMSXPONHJZTMWAIRAUKQKSFJVADRZKQCYGVPUJWPWRYSYBFEQDUQTZXBPYOSCADIGSYPXFAMZADUILQMUMDQSKMGBZIEGMQNXFLDIHTEWEDHGVNUYJXQLVHFVBCEBPNBRTOLIYGSLLWPWVJLKRQNCOAIOCCFXLXZOYMJECJXRGWNKVJJGCBNXYDNBNKPBACOHVXZOHEZPYRKELDKTTMCSVENTFIUIHLHOVIHPT");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ControlLoops tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.enable = 37U;
    tmp_tmp_msg_0_2.mask = 3046873021U;
    tmp_tmp_msg_0_2.scope_ref = 0.08403193840087497;
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
    msg.setTimeStamp(0.443793936225786);
    msg.setSource(34773U);
    msg.setSourceEntity(51U);
    msg.setDestination(21768U);
    msg.setDestinationEntity(218U);
    msg.command = 157U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TLGLKHBPOHJDUZQTXEQKPLNOQMBFVUZWQVIMSYCGWAORCHUED");
    tmp_msg_0.description.assign("EOZSDQJFOVRUFTWUOCMPKIGARAHHPVTNTOGOLIAYQBVDSNLHWSGEXFTUELHVBDASEWJDWTRLOJFURNBBMNPCQKXFQKXIYAKOXSZEJGPUEZ");
    tmp_msg_0.vnamespace.assign("CQHYMEGZWEHURRBMNNQBHYOPELFTHZRSTAFEHMWNPEPARWHYJIZBYYIOBNCVGYJNDURDDYNUIGHCKKGRKTVHMDXBVDJPKOATPKMZGKGZVATWTIPOSONCHQRMOFVHMEMTOUEDZFALZLDERLRLKXXJVCSEAAWJCMUXOSFYWFRUCCKJBIGSYIBJQBQQLLIMNXLGOWFIDQFWVQWGUWNSTZ");
    tmp_msg_0.start_man_id.assign("WZXTTCZUBJSABFLQJIPMKWNGNGIPQFUJWCUYBPJWHBJFRPNIAKFZTCTHXWHTEKEHACIYIKWKVUQHSGSATDRMRDN");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SEMOKRYCVHAJRZBFTPORLSTKVXBEDBBIQNCYUWYSCHWGIRAONNNLCFAZDBZDBBJNUMPULKJWNCCMKFOPHYCESYUFGGRQCTWCJQREFSLOUDLGVSPZUTJYICYGKVFTSDPHUGIKGFJGRBIBRMWNAQVJRTNVDTPMOMUHQWFDPYHSKXWXJOALDIJAPXZAVDWGUONEXIEOEQBMKOHAXLKEZWMAHNLQEXXPIZZJSMKZPXFUI");
    tmp_tmp_msg_0_0.dest_man.assign("NDVNHJOFBHOBTRPOGZSQREEKBGYOKCVIIXZMIZGWLLZILATBJXDRXPJWTEIYLPAUKJXZENFUFTMGGJLQBF");
    tmp_tmp_msg_0_0.conditions.assign("MKFKOMHZLFPNNHKOXFEAXPFZBDCBUHWAIEUKAOTNOVOTZNCSDVGWSUWWKDGQGONCGFTFORBNEIRMTVMLOTSLVCDVTVGGULAWCNSDGHBBLRTYQLQIPRODSNTPMCFPPKJVXAIYYVGNJECPRMJUKQXKILWBCZGTKJJJUCAQXJRLYJWIQYDBLHYXBFYDIQVMUYWUSAESVMOZKARWHEHRYZGXIXBZEHEZAHTIZ");
    IMC::AcousticRangeReply tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.address = 46U;
    tmp_tmp_tmp_msg_0_0_0.status = 251U;
    tmp_tmp_tmp_msg_0_0_0.range = 0.22907453102399922;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3087991898466014);
    msg.setSource(31928U);
    msg.setSourceEntity(166U);
    msg.setDestination(2116U);
    msg.setDestinationEntity(204U);
    msg.state = 226U;
    msg.plan_id.assign("MKLXLJECDGUQRDVJLQIOBIXLABLRLABWWICGTTSSHNPREUORFQMODAGQPXNEZPPZWSKSRTHCNZVETCWYNVZEMGWFORYJACGAHJFSCHUMVLEKAUBFTYPSMUTEGVLISJNZITATVQZUJKBMFMTPHFC");
    msg.comm_level = 105U;

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
    msg.setTimeStamp(0.9782293833699567);
    msg.setSource(60466U);
    msg.setSourceEntity(50U);
    msg.setDestination(44401U);
    msg.setDestinationEntity(249U);
    msg.state = 23U;
    msg.plan_id.assign("KGYYELTTALRXVGXBPSBNVMNJSISRFIULCKWGHYZITOZJDZTFPVQJEYEWAHDIHGXRGOQCUWBYTLICRLCYHVMACTEMUHWPKHNLXEKFKFCSZRQBPMLXDIOCBRAFOXTZWLMBOIFOQGAGDS");
    msg.comm_level = 184U;

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
    msg.setTimeStamp(0.6350465139878064);
    msg.setSource(49408U);
    msg.setSourceEntity(95U);
    msg.setDestination(44725U);
    msg.setDestinationEntity(60U);
    msg.state = 74U;
    msg.plan_id.assign("YJYCHPBIJJAYDURPGIKLOPFVVIKZPULXZYBUDRFYGIXRSFEOXAFGRAICMDBFDTNHVOAZAMBMRWVHPGZSQTQCSVGECIAUSMWHJJBNKTOXDSIPAYQRDYWQOVPNVXRNOGLWCBLHBCESANWRSEUMTCAMWZEWQNLFZMEQYUNQMXDFDJFNSXJKEDKZCZGTKLZHUIQUJRGMBHEBYTHPLUHTKSOLKDGM");
    msg.comm_level = 247U;

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
    msg.setTimeStamp(0.9025866955982786);
    msg.setSource(35132U);
    msg.setSourceEntity(228U);
    msg.setDestination(53051U);
    msg.setDestinationEntity(112U);
    msg.type = 125U;
    msg.op = 158U;
    msg.request_id = 18361U;
    msg.plan_id.assign("PBSTCMKHACZINBFGNGBHPTHTHNXJKYVWGWEPQOLVBPNOSIYVQDBWIQU");
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {-90, -118, -87, -75, 55, 85, -3, -6, 108, -84, -119, 63, -82, -42, -66, 39, -45, 67, 55, -103, -8, -28, 37, -40, 67, 20, -100, 114, 122, 112, -24, -85, 32, -29, 78, -124, -94, 30, 74, -44, 87, 19, -99, 77, 63, -55, -26, 90, 87, -3, -54, -56, 43, 105, 30, 89, 35, 24, -24, -124, 38, 37, 18, -33, 82, 56, -16, 100, -79};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QGIFINAOKYMBWOHGDAQBAVEGFBOZDPICTTPIZTZSZTLHNYBCGBK");

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
    msg.setTimeStamp(0.7225480773768953);
    msg.setSource(53336U);
    msg.setSourceEntity(153U);
    msg.setDestination(64450U);
    msg.setDestinationEntity(208U);
    msg.type = 152U;
    msg.op = 141U;
    msg.request_id = 3929U;
    msg.plan_id.assign("CEFUPNUUULZGRVVFOTNCBHOYJRJWAWZCBDYLEXHOXIASXPBWVMTLUUFINSEMYOJQCPQDYHIKEHYCWCAGPFEGZJEPWZCSONRFGDRQOIMMBLAKEVG");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.32912171034008186;
    tmp_msg_0.type = 58U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZHPOMZALTYLIZCGVEFKMWWNAXSJAYILQLXCGBJBWGUBD");

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
    msg.setTimeStamp(0.9925516472459699);
    msg.setSource(57756U);
    msg.setSourceEntity(23U);
    msg.setDestination(50575U);
    msg.setDestinationEntity(207U);
    msg.type = 120U;
    msg.op = 16U;
    msg.request_id = 498U;
    msg.plan_id.assign("HRBLJWOOXRJB");
    IMC::Abort tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TTBAGISADOARPHSIDRAVGSXHCYOFGBKTUNQJKIGFGNNXZMEGGFMKYRQQWSJCPIHVHEQDKVWIWLBUYDLZKICZRYEWMVZVNIXDDSKDLZEVAWDOMCOZQARBUULDYFUUFBGNTCYHPLKLJWVJXPJQYE");

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
    msg.setTimeStamp(0.9795180345935549);
    msg.setSource(56933U);
    msg.setSourceEntity(206U);
    msg.setDestination(60344U);
    msg.setDestinationEntity(191U);
    msg.plan_count = 6805U;
    msg.plan_size = 3932222953U;
    msg.change_time = 0.8629476880127078;
    msg.change_sid = 39082U;
    msg.change_sname.assign("QTAKQBFJKRRLNSXVMHUFPYXBOITHHWKCVRTROOSNLEADZLCYMKOMYPDPPKJWWIOYAJFRFQNFJFSXQGTUDXI");
    const char tmp_msg_0[] = {-65, 14, 85, 22, -101, -67, -104, -87, 84, -44, -5, -41, 38, -6, 25, 37, -93, -16, -24, 75, -34, 84, -44, 115, -82, -120, 41, -124, -14, -91, -125, 81, -96, -42, -34, -2, 33, -51, -98, -47, 44, 66, -57, -86, 84, -85, -127, 113, 88, -43, -116, -111, -16, -118, 76, 50, 79, -50, 1, 125, -74, -9, 122, 50, -61, -103, -66, 31, -24, 15, -106, 122, 44, 111, -26, 69, 56, -48, 0, -41, 28, 107, -47, -4, 39, 20, -34, -125, -74, -70, -56, 18, 58, 72, -65};
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
    msg.setTimeStamp(0.7838336675410021);
    msg.setSource(32030U);
    msg.setSourceEntity(150U);
    msg.setDestination(11127U);
    msg.setDestinationEntity(130U);
    msg.plan_count = 59982U;
    msg.plan_size = 676171617U;
    msg.change_time = 0.3730188329945736;
    msg.change_sid = 37329U;
    msg.change_sname.assign("KBNEAJPMTWVDCPEPHAHXNIPMQBKJEWEXDWWAPDZUVKLHSDQMYITAZQTZBJLVREOUYDEFPBOPPOQBENULLVUIHYFVTCCABHIOKEUJBFCKTXMJZIJSWLJFDWIOSMPWTYHSBFOFSGYGSZGCSIKSBHSJFMJLVGRTCRAUGJGQILRUMQZZRPNGNALCOKQRZHKXERCVNCGNSRIWFLMAXMDKIZEBXYTONZQLFMNWQYQHCVRFDT");
    const char tmp_msg_0[] = {-5, 38, -66, -17, -102, 94, -48, -6, -109, 6, -84, -48, -93, 113, -16, -63, -10, 22, 94, -116, -101, -13, 56, 26, 12, -54, 93, 33, 41, -99, -39, 14, -20, 116, -25, -108, -17, -108, 48, 107, -111, -98, 83, -116, -54, -25, -118, 21, 7, -94, -118, 112, -53, 54, -73, 110, 97, -47, 104, -76, -7, -44, 81, 44, 7, -48, -69, -92, -21, -24, 103, 36, -105, -32, 89, -124, -84, 100, -22, 19, -86, 86, -85, -17, 49, 105, -88, -66, -128, -42, -104, -19, -116, 123, 33, -42, 28, -116, 12, -37, -35, -79, 44, -125, -17, -67, 1, -61, -38, 41, 92, -106, 103, 59, -92, 38, 16, 108, 28, -10, 24, -7, -44, -108, -79, -38, 16, -70, 126, 77, 87, 30, 51, -87, -98, 48, -69, 39, -90, 57, -70, 80, -94, -92, -97, -38, -53, -112, 29, 92, -17, -46, 112, -22, 126, -29, -84, -79, -53, 35, 17, 109, 27, 30, -40, 4, -57, -80};
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
    msg.setTimeStamp(0.028497334488472248);
    msg.setSource(13496U);
    msg.setSourceEntity(121U);
    msg.setDestination(61485U);
    msg.setDestinationEntity(199U);
    msg.plan_count = 6418U;
    msg.plan_size = 3967904441U;
    msg.change_time = 0.20931831906973797;
    msg.change_sid = 14956U;
    msg.change_sname.assign("OGNXDYSDQMSXIKMANQZYWYEQSZDIXQLZEBMRMLKPEFBLIMXNBJHAMEFSQZCYRKOWLAOODWFLNANPPSARJDMVVMKYZTDKJFNQCEONRABFCHFZGCQTIUJUCTJGNBXJPXYHWRYHTDCJDDGVEGPRUCSL");
    const char tmp_msg_0[] = {-69, 38, -2, 62, -86, 9, 107, 0, -56, 103, 43, -117, 19, 105, 82, -120, 125, -70, 66, 113, 29, 112, 112, 77, 12, -94, -126, -54, -55, -11, -97, -114, -15, 51, 0, 95, 107, -47, -40, 22, 77, -67, 25, -86, -81, -71, 83, 61, 93, 13, 36, 16, 105, -46, -14, -108, -113, 25, 31, 78, -62, -55, -102, 92, 103, -103, -3, -86, 10, 98, 78, 102, -76, -1, -10, -112, -94, -28, -44, -75, 12, -52, 45, 27, -118, -22, -110, -113, 121, -126, 27, 1, -112, -51};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LSNJAJNCFLHLECTNOPXIUDVFHTUMOXGZLTJBDKZUQWNACAXVYHSTWPHIJWHYUAJSLEWOKMSASFBWCREFMOVKAWGAODFMFYLNFQCUKTTGICFSOJPPUNGEAHYRHVQYMVZVDRBHUYWDVRNXRQVIZRYXAIYSDVOLRKUMCBPDSCVWFBAQZNEEGQPIBQOCJMZMPSUPWBQTLJRNLQKUPXOJHDTQJGGIMORRZBDKEHIKIMGEFSIXZTGTBYEW");
    tmp_msg_1.plan_size = 14700U;
    tmp_msg_1.change_time = 0.6161674767734978;
    tmp_msg_1.change_sid = 60373U;
    tmp_msg_1.change_sname.assign("QVZSRVGVQHEJKCDTOWPSTIUUTVXZSDBVAGMFHPWFAQUGFHNNJZBLYTQBQBIXCQLXOLEVWIKEFIBYRFZCWTMXBQUCNPHMJDTCGRBALMELRUKMPWGUUATSBMWXRHWXT");
    const char tmp_tmp_msg_1_0[] = {91, -55, -80, -125, -14, -44, -24, -71, -87, 2, 70, -45, 40, 21, 65, 48};
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
    msg.setTimeStamp(0.2932423848734519);
    msg.setSource(41374U);
    msg.setSourceEntity(125U);
    msg.setDestination(13993U);
    msg.setDestinationEntity(246U);
    msg.plan_id.assign("JHUGEZWWFKOQJLCSYBEHTOHLRGRJZZNZPVXZHGIQIVETBADQBPOY");
    msg.plan_size = 19466U;
    msg.change_time = 0.8275897797338339;
    msg.change_sid = 36569U;
    msg.change_sname.assign("NZAMCQEIFXBSYDPRLNXOKMFTPRIOWNXAHWJUOQMRMWTHZEEYRRPSSDRTZHRNLNJLVTYVUGLXZASMHODSPNVEUZHGDCQZCKMUBQQBWBLLECOESONNIVJKBGCOUFXJCAYKWALKKSAFU");
    const char tmp_msg_0[] = {-3, 19, -75, 100, 84, -10, 63, 46, -11, 58, -32, -79, -69, 66, 116, -60, -25, -110, 62, 17, -59, -2, 22, 21, 60, -76, -125, 88, -37, 108, 60, -23, -31, -71, 5, 26, -37, -49, 36, -50, -6, -114, 101, -26, 76, 118};
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
    msg.setTimeStamp(0.2606163881201312);
    msg.setSource(4426U);
    msg.setSourceEntity(61U);
    msg.setDestination(11671U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("GFBDILCVLDVJIMHBVBZPWOWRYEKNRBOPDSNWXQXNAFGSDEOASULUWFOOXHQXMYYPNQDTQRZPFBNIJPHEDISOLIYZPCAWRWHNUSUR");
    msg.plan_size = 64069U;
    msg.change_time = 0.7051777515696657;
    msg.change_sid = 56306U;
    msg.change_sname.assign("YSYXSCOZTYT");
    const char tmp_msg_0[] = {74, 113, -17, -32, 44, 48, -50, 72, 69, 29, -36, -112, -59, -62, 51, 22, -81, -121, 100, 54, -46, -10, -106, 53, 28, 51, 105, -44, -43, -18, -16, 60, -108, 8, 115, 59, -5, 99, -39, 82, -74, -126, -117, 65, 67, 90, 40, -3, -7, 89, -33, 61, 96, -62, 8, 11, -1, -71, -25, -5, 62, -21, 65, 47, 3, -52, -45, 79, -76, -9, 109, 94, -100, -25, 12, -122, -51, 98, 39, -80, 14, 24, -31, -29, 119, -88, -18, -32, 106, 45, 19, -65, 14, -123, 107, 36, -85, 101, -61, -120, -128, 39, 96, -109};
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
    msg.setTimeStamp(0.2369396273440858);
    msg.setSource(53780U);
    msg.setSourceEntity(185U);
    msg.setDestination(63361U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("RCCRPOBFOQFJJLXFJLEIYBITOLCHRUUEOSQYHNVYRVEOGGQKDFGWDXPPHOWDNUFETFASTSYCBMBKNUZGDABSXJMRPSATGGSZDWKBVNLJXEQHNLLZHMRVBUEZAAKXZXKMTYIHMDNJIYTISHCGARVEAIERKBYKAXQQZIWPOSYUMVTJIGQZRVUWDBLSINQEQKCXCNFDVODDEWZTAFGJUJTHMPOXWRCIHUMYWZBQSK");
    msg.plan_size = 26673U;
    msg.change_time = 0.019467817693203715;
    msg.change_sid = 46761U;
    msg.change_sname.assign("SHFTKBEXORPCAFWYNFZVPYSFJUABUHFDYNJHBLNSIDPYWZBMZVVZCFGOPVDMZDLSLNYOJCCHGRZOXCJOYYDEVLIRXTWEJYTDEQEUTRHRDQWIIMKJRKHFZWVVTOPESNBIDKTMSYZROPQFPIGUUACDNWJWMXGTLSXYQJNPWPOIQKQMBGHAELUIXMRALIEUELMKCIXHXUVRAZCQUHBHKFNZSMGJMQWCETCKV");
    const char tmp_msg_0[] = {95, -63, -38, -58, 9, -55, -15, -87, -9, -58, 78, -105, -18, 101, -78, -56, -43, 97, 47, -71, -125, -74, -82, -41, 58, -37, 94, 70, -80, 30, 107, -54, -64, -100, 87, -44, -36, -60, 37, 61, -117, -111, 62, -10, 97, -59, -115, 54, -122, 4, -49, -60, 20, -38, 76, -63, -124, 63, 123, 0, -24, -80, -49, 3, -89, 60, 40, 37, -120, 71, -85, -5, -45, 121, -65, 59, -75, -38, 55, 119, 25, -120, 117, 57, 46, -112, -25, 59, 63, 24, -83, 3, 0, 76, -6, 13, -97, 26, 56, 38, 18, 116, 109, -123, 90, 80, -40, 25, 69, 108, 19, 36, -102, -55, 48, 73, 110, 16, -124, -79, -29, -18, -104, -92, 62, 53, 119, 48, 6, 78, -53, -110, 43, 17, -110, -125, 63, 73, -113, -92, 75, -106, 23};
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
    msg.setTimeStamp(0.8659602290341947);
    msg.setSource(13476U);
    msg.setSourceEntity(115U);
    msg.setDestination(61569U);
    msg.setDestinationEntity(4U);
    msg.type = 48U;
    msg.op = 50U;
    msg.request_id = 55047U;
    msg.plan_id.assign("KQJRSSRLICZLNVRVEUHCRDBNSGKNKPQEPGHMJTWLPZWVZBCSPBYVHYUCQRQUZQOEJTOEYKXRZWJXQQNTACAMDSTMTRPNRZDAYXGELHOIOYAKTBSNVPOYWFUCHHJQBLCOHLXFDJNRFGUTBSIOEZGCSIFQMADGLMKVMEXDJEJKWSIMIIVVLKGXDBLGDYLXKUPQJMFZRO");
    msg.flags = 15995U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("FTATSJILRXNOOGQNNRKSXVSGGOEFNLAUZZOSHADKJXVYLXBUZZXDSREQKSEQHYHUUGHOEXARGUWUJXBJSUDGTYWFQSLPOGBERQTRRKIJFJQVVCIGMMPCMPCDWOELKPHNEZFIJFCATPRORUDVWZTAJXFKQYAZBTHPQCZTELKPMJYMCMKXPFWYIWOBMQNBCMOIZMWNHBDUMGIPVVDIDYVBHSYEIPLWVQNIAYTKTZRLCDVLLHE");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("APFWYEQBHCOYRLTGPJNTTCYRTJJCDGLSMQHXTMUPGFSHZGNYRKSXPAGXOJBBXKBTHDWNZEKVSMLEKMIJVNEXRHYWAITLLTUCIDNZCSKAVZIYQTRRFJVENWHXUCBVFNMIHMMLDXZPFPIEAOEPVLUOQXJLQOOAMOHDPVYWBEVFQDFJDFSWDIENOAWPUAJDKHYDPWKXAQTRRBIWKOFBZRQGSJMXIOCZNQR");
    tmp_tmp_msg_0_0.value.assign("SNNYHQVCRRPMBXNJCPBLZNIIXXHKHQLZCWCJRMYGYGDPDVVSFPKJADMDKGUDQLSTEIUJNSIXKHXHQTQBFACLYHTSJSWLFBREUYUWWOREINGOBPFDAMPBKEVGRSQAZEOXZNQILCOWUJXBNMFISJXVQBYTOIDLAOZKXCTDOL");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QJSCXYUYZETGUHVEXMVGIIBCRUDVYTBCIITNNFKVDZIGPBMXHJVFUEJDWTNYDHAAOOPPIQGYOCHQKCNWHVB");

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
    msg.setTimeStamp(0.17901078033480222);
    msg.setSource(19041U);
    msg.setSourceEntity(63U);
    msg.setDestination(29232U);
    msg.setDestinationEntity(109U);
    msg.type = 229U;
    msg.op = 153U;
    msg.request_id = 13785U;
    msg.plan_id.assign("GWHKDLLDVKFIZADHWQMRUOWPEKBCMBNCLPTBRREXQYTNTUZGLYCQRMIYANNLDMOEXROEVVTUVNPMDPACGCXXZVJBIKPIBFDUFQKFPBHFKXZSNDGCSLJMDELKRYOGPIHIJFHQTAZRULUCPSUSOEJIYQF");
    msg.flags = 20146U;
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 152U;
    tmp_msg_0.speed = 52036U;
    const char tmp_tmp_msg_0_0[] = {94, 47, 80, 60, 92, -112, -16, 93, 40, 113, 57, -92, 91, 72, -124, -110, 32, 11, 121, 110, -91, 119, 52, 81, 114, -29, -108, -110, 15, -77, -72, 59, 62, -36, -75, 61, 32, 116, -69, 84, -25, -30, -117, 65, -114, 109, 23, 101, -125, 4, -12, 119, -107, 11, -40, 115, 82, 33, 116, -72, -56, 45, 102, -83, 56, -47, -122, -4, -92, 14, -69, 53, -71, -49, 110, 38, -31, 45, 123, 102, -115, -90, -26, 120, 6, 110, -70, 21, 84, 88};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ETCCTRRBXSAJLUMIDMORVOLZKAODXVGMSZUVAMYFGIHHPKDXLZUYMRQAOAONEJBZFHZUJYBHPKJMONEIFKYCKLKBKRVJMYQWPKJNNKRIUEUWQYSCSBMWIWYGRDEVGBHWDGDSNPUVDGBQQHDNWQNVTAEFCAZCAFGITQKJLHSHDRNZBIZQYOTRCLSWICJVZPPLFNUJSMTHFXJFOTUE");

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
    msg.setTimeStamp(0.3222926234784881);
    msg.setSource(55450U);
    msg.setSourceEntity(138U);
    msg.setDestination(58695U);
    msg.setDestinationEntity(174U);
    msg.type = 251U;
    msg.op = 64U;
    msg.request_id = 53520U;
    msg.plan_id.assign("UTVRXTVTJENSIEFODYLJBXMHSHMYFUJQKWXTVKSIIFXGBDKGFOCGFNMLLSCELZGKYYPEQYVEAQCOOAOWJYSHWQQWEZYKLXNKAWDGDHVBHDPZKDFHFQMCJYNTEXSODQVNAPXOPZZSZMWCEINAFTPRVZUITCWTAOVXAG");
    msg.flags = 30468U;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 154U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NGTOGSRBLKSKKQIIFBMHFSAXNHNIOWTBEWTHUCRHFWJMVZURDMUSVQQFXLX");

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
    msg.setTimeStamp(0.6707802709463019);
    msg.setSource(16128U);
    msg.setSourceEntity(182U);
    msg.setDestination(17029U);
    msg.setDestinationEntity(203U);
    msg.state = 52U;
    msg.plan_id.assign("NPQDQEPXRKCCVMSBIZBBFBWLCLUWCYNCJYSZLJCGWNCWPBL");
    msg.plan_eta = -1766861765;
    msg.plan_progress = 0.12819152267212353;
    msg.man_id.assign("JOJBKYDWKUHVTAZYADDCIRLWEQRBFIPSNUOCXYDLHUUVBJRTZWRQWXHKYQMNENQFZSZHSCTZDPWMEHEZORTUXBDHPXMQPBNMRPSLJEXEMGHQECAQMNNEGFPWIMRLKXRGRXXOIKKPZQJBOKYZZETBCLU");
    msg.man_type = 4814U;
    msg.man_eta = -1368038692;
    msg.last_outcome = 198U;

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
    msg.setTimeStamp(0.8703359328276534);
    msg.setSource(25499U);
    msg.setSourceEntity(105U);
    msg.setDestination(19296U);
    msg.setDestinationEntity(6U);
    msg.state = 3U;
    msg.plan_id.assign("INSSFZCFWAKSXGDQUFKBOMLLLNMTKBJQDGRGLIAJCZHEWFEKWYBNJJSBGLHUQGBOCIARLPXZBKMYYEQEHISRGXAVBHCIZNCUHDYSMEMJUUGZLFPRAEQZAONJUVKXMXGISEPCLYODTHH");
    msg.plan_eta = 2021369334;
    msg.plan_progress = 0.14708713020322361;
    msg.man_id.assign("WFRQXTQCEJNHERGHCULAPAYQJOORULODQIZBOLXYUYFMYCAGWBVYZBEWDTOKDNGNJTMXGJTRMDFUWMPLSPJVBPDERLWVWCEPUBIWUKEGSISIXHSGUXCYDSNXYHNCUPAQSMZCXQHLJEOQDBFAFJBZMGBTKFYEHIDMKRSUNNRFGJNJOSMAAPVIODVVYZEHPAOHBJXKPVACFSTZWDULMIHPRITLKTKZIHXSTZERNWOVIMF");
    msg.man_type = 52816U;
    msg.man_eta = -674105656;
    msg.last_outcome = 40U;

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
    msg.setTimeStamp(0.5996748811442737);
    msg.setSource(6854U);
    msg.setSourceEntity(1U);
    msg.setDestination(65055U);
    msg.setDestinationEntity(63U);
    msg.state = 231U;
    msg.plan_id.assign("NEZMYMKRITPVPRXZOXIZFCUCVUDLNCFEJCUDLEXJHWLJQYXCMAPBOTBEGKPHWQJPNKMQEDJSWTRYG");
    msg.plan_eta = 1184998210;
    msg.plan_progress = 0.556299783746872;
    msg.man_id.assign("ZGTAZZHQJOHVBCKOBKLCSKWQGFQQWKYQFTBWCLKAJFVQYCUHCWEHZBKPYXLSRD");
    msg.man_type = 27856U;
    msg.man_eta = 24083593;
    msg.last_outcome = 184U;

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
    msg.setTimeStamp(0.26743272350271574);
    msg.setSource(60002U);
    msg.setSourceEntity(85U);
    msg.setDestination(38608U);
    msg.setDestinationEntity(147U);
    msg.name.assign("IJUKHARVIUZICYXDGXITSTRLQKLHTBLFATPSUBSXYKQDYGJXKSAGPHNANSWGSVNHCGZLMYKVZRQCCCCBDEJWWTNKPHC");
    msg.value.assign("KCPHOTIZJVQGIQCDUYAABWGWHJSBPEANCYVUSAYYMSDUZRDRINHOVALNQDZXMIQBPOTGTXOQTLBAFOS");
    msg.type = 244U;
    msg.access = 140U;

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
    msg.setTimeStamp(0.18741901003959682);
    msg.setSource(27444U);
    msg.setSourceEntity(122U);
    msg.setDestination(22917U);
    msg.setDestinationEntity(142U);
    msg.name.assign("JJPHRXUAQDLOIYYWXGYHISJPTCVZNQWVTJRWAUYLEQAOLDGKFEXWYQOKJEZPYVOZZIQZFCDBAKC");
    msg.value.assign("WLBWTSJJCFUQCVMNRCIOVHRZAGFQLYLBBPQCPYW");
    msg.type = 183U;
    msg.access = 52U;

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
    msg.setTimeStamp(0.19624345006767618);
    msg.setSource(37404U);
    msg.setSourceEntity(77U);
    msg.setDestination(5496U);
    msg.setDestinationEntity(90U);
    msg.name.assign("GLJTKAEHDASTUPXCWZTNUGQXLXKREORUSYKAMCZXVALLDEPVZVGPOTTBYIBRMJOOQPBQMYXNOVNHUZMRTSQUJEQYBRHXJZMVCYOTGFKKIWEGRJALGMZYFZXTWBPEGWIGPDSIQJBVDKVHVINSJPDLOMNFXNBMRJWNUIWCNAPCCZLHVGHUTCVEHRWCSRUNW");
    msg.value.assign("JRHDUGBOJJWAWASWPTDWXBLIBFCLN");
    msg.type = 235U;
    msg.access = 63U;

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
    msg.setTimeStamp(0.2004579157447467);
    msg.setSource(23876U);
    msg.setSourceEntity(237U);
    msg.setDestination(39363U);
    msg.setDestinationEntity(252U);
    msg.cmd = 137U;
    msg.op = 113U;
    msg.plan_id.assign("YSABJDOKLFCZAAMSA");
    msg.params.assign("NQMYMPLSQRFOXJKFEXILQVXUQAYPVJDJGBHVMRKTUXRWCGGDNWLGIYMFSJAONGAETDIZLYMHSLODLUZJWRHMAJTGQTTDEMQWKLUKHYAKEERCBBWSOZEIPHBZQCZBBOXRDZPXMPYFDSPCLZHAJTIFDVEUZENITVVBPXBYCXERRUQSHVSJYUFLSVHWXOKCQFVAFKVXUCPSMGPJPMWWKBFWQDWNCDCNTCGYHIRNHIUTBORIEFZUJYGNAO");

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
    msg.setTimeStamp(0.9144931753280123);
    msg.setSource(9942U);
    msg.setSourceEntity(180U);
    msg.setDestination(808U);
    msg.setDestinationEntity(11U);
    msg.cmd = 226U;
    msg.op = 25U;
    msg.plan_id.assign("INOPMEFWTHUCIJQFLGHBBIDWXYMRTODNRXUCPZZHKMTVAQTPMICJGGKYVHOFSZXUONYGBVMAVHZPPGLKRPEVZCXX");
    msg.params.assign("QQMKRCBMIQGQCTHUPFVWRVNXRYOHTOSKGDAJHCVIHBKFBJDYLDRAPLGNENZEZDCSNAXXTPMJQKUCV");

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
    msg.setTimeStamp(0.5556964905001878);
    msg.setSource(11645U);
    msg.setSourceEntity(168U);
    msg.setDestination(17078U);
    msg.setDestinationEntity(195U);
    msg.cmd = 174U;
    msg.op = 198U;
    msg.plan_id.assign("DVPOLSMCTVCKXGQQAZKYRHDPEWXUVQNKZJSECSCGOLCFJZQIMYDKYUIR");
    msg.params.assign("DNCPTEXDYWXLWEJHYGCHIDLNJGRLAUDZTOKOSCGUDJBHIMCISHUHPXFW");

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
    msg.setTimeStamp(0.3988999362224951);
    msg.setSource(28586U);
    msg.setSourceEntity(245U);
    msg.setDestination(25786U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.3572602831477055;
    msg.lon = 0.6617239813183108;
    msg.depth = 0.20446008369370472;
    msg.roll = 0.3547701247517945;
    msg.pitch = 0.8689099785487744;
    msg.yaw = 0.2524059824293826;
    msg.rcp_time = 0.1324614430990999;
    msg.sid.assign("VHTZYYFAXMHKVSUOGACOOVEKV");
    msg.s_type = 80U;

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
    msg.setTimeStamp(0.20326233835499874);
    msg.setSource(31583U);
    msg.setSourceEntity(166U);
    msg.setDestination(37814U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.9724294147447915;
    msg.lon = 0.5781215344018474;
    msg.depth = 0.7022604273195897;
    msg.roll = 0.7950709641050498;
    msg.pitch = 0.30251949024559754;
    msg.yaw = 0.05928849603027597;
    msg.rcp_time = 0.3799795649249623;
    msg.sid.assign("HIZIJQVNHBDTLGLGYJYUMIXFSSMEYCJKUTIHRIDNNQQYVGOONMHBKOAFCPVALADOLRXCPPTLWTGFWBYFQVSTRBVMWUEDZDCPRTGDVRXXNALPQBODREHMIKWOPWARXSAFEWNQMYYDBZBMDJHNUCKHJGZO");
    msg.s_type = 232U;

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
    msg.setTimeStamp(0.1038813930318947);
    msg.setSource(10628U);
    msg.setSourceEntity(67U);
    msg.setDestination(38771U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.831698788829857;
    msg.lon = 0.5392544982535011;
    msg.depth = 0.6380452265970681;
    msg.roll = 0.27718641450137804;
    msg.pitch = 0.3989417791222305;
    msg.yaw = 0.4675680758335995;
    msg.rcp_time = 0.2968725389201078;
    msg.sid.assign("MLCQTFIZWGHFJJBRPZGSCUNEWUUQVMBAYNIKWKPXIPTOWALLVDYDAIDNYECXCNLPWBOIMUQANYCOWHJCVGDRZHPKJAZYYHYPOZBPFVGLQVZLKGJTIOGEMKUZAFJRCKXSYNBEMANEFWQBJSQGPGEBXSVVAGECDWUOLTIFARHLKNHMSWJTUTSZMEDIRORNGXVSSOFEKDXPDBXMEBPTHKOQDQ");
    msg.s_type = 31U;

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
    msg.setTimeStamp(0.9026836598527371);
    msg.setSource(35312U);
    msg.setSourceEntity(251U);
    msg.setDestination(22932U);
    msg.setDestinationEntity(71U);
    msg.id.assign("TFCHZWNOBTTWYOKDYUTGVVMKKMLRZKXNUVVRUUWHYWORVZUCBDIDRPPMMJOXAEPBIUVPGHGTKRSRPYUAZFCLSWJSQZYIGGBINKFQNCOUVWWAEBFZCEJJBSUMIFTVJIOFJDMCUJKGBCXSPOSDTPAHMFFLTPREKRRQAGQAYYLIDNXVNJLCXLQDKXASLFAQQVYQNIDAXNQGBSNIDPIXW");
    msg.sensor_class.assign("MLHGGEOWVVNLEQYOIQEIMKJNLRBWKZVXZGDRLQZUQDVVHWRZHCIWKFUBUVKDTC");
    msg.lat = 0.2566953948641265;
    msg.lon = 0.9585248791216742;
    msg.alt = 0.5685317919088385;
    msg.heading = 0.6388121294503483;
    msg.data.assign("VPRNAAPLNJTNVIFPYVLOFEYWLZCXOQEBVPUXZUKYOIDRZNETLPEQWNPMIBQESZNLQXMHQJZKOOYMMVYBZYXOFUFKFGNUGMWVCRGAJPEKOCTTGISDAPHRTDTZFHUMIEXVJJSDHWGRHFGEYEMWOUKNJLZVFWUMPJKCURHWBRDCJUQCHACDAIKIXOISTNLTXYTADNGRZQLFBIWOFSXQGHBSHCYLKB");

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
    msg.setTimeStamp(0.5033134875129092);
    msg.setSource(50649U);
    msg.setSourceEntity(63U);
    msg.setDestination(52849U);
    msg.setDestinationEntity(251U);
    msg.id.assign("BLWEYZFSCGDFPDNCKQHQNEXUGVAHKUTSYHXTTQDIXMVYMIKTVLDTFSSIMPWLRJMCHBCTGPYMNKKDEBJGHEZFRLCQAXVLRYBVEJBMCGKYONJFNLAQUQTWRORIJPNZED");
    msg.sensor_class.assign("IVIJWVBNLEARZWOHGJSHKYNCLGDQBDRBEKSNAGJSHCZ");
    msg.lat = 0.9229333769338979;
    msg.lon = 0.9050781223813837;
    msg.alt = 0.9415494864749772;
    msg.heading = 0.01918927616781485;
    msg.data.assign("CUXIKAZKVQZYFDPEQ");

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
    msg.setTimeStamp(0.8243218989993218);
    msg.setSource(6327U);
    msg.setSourceEntity(166U);
    msg.setDestination(63842U);
    msg.setDestinationEntity(253U);
    msg.id.assign("OGMJJUURJZXTUQHIEZBQFKUEBTAKSVKCENWMDVHTWLFGJCBGRKQKOJIHLCCMLQSAMPFABXDCSZUCYDWFVTWXDORVXKDFXTSLGQPYOAEITIRNNTRVTRNEMYSXFMGJQWGZVAUPHQS");
    msg.sensor_class.assign("MDYRNUCGVGPBTVUFGVQTXHQPAOBFGXNLWSJVOFZQAIATWVPBKMSYNLHJBHVVARYBRJJBVMIBOYLEYNZOCLDCJGXEIKWKZYIVEYWEWAUTONRTEHWKYXRHEZRCPQSAKQDXWHEBAUDKSZMLIAILZU");
    msg.lat = 0.6072587076432314;
    msg.lon = 0.9228818044022942;
    msg.alt = 0.3886147045083276;
    msg.heading = 0.6366249460047562;
    msg.data.assign("AFCLHEOQCHCOYODPYBGUBRLQBWHEXIEQPVTKFJKCPFMIQXMCYFIJIRUNQCHZLYVSQHEZHKESAJXOCJHWYLRZOXNDGZASAWZAGRZBOZTVFBPLNMDNPUUQVGTHFDEWXOTWRQAJNJASMBEXPUDIFIFVAFTGDGPGPUVNKLLUOBWVTJSSIJNKTUEMVNLCYGII");

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
    msg.setTimeStamp(0.7882266382086166);
    msg.setSource(48019U);
    msg.setSourceEntity(253U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(91U);
    msg.id.assign("NIPVYSQLUMYHWHJCMLIVQDLPEZHKAHCLWQRBFTNSSBANNOGQTHKFQM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AGECBJMKQAXUZAACURKIGSQSWRDZUBVEIXWAITWLHRIYKOWCHTUDJPZUMQKVQVDHFSTIFHLNDFKZRBLBGVLMCIOZBITDJCCCPXTKIWFJNCNYUOWYLBAZMGPYZLEDYODPGWUDUBEXHZQFBBXVVYPSXLQEXFDRJAJSNGTOTSKPVEYJHNABNKERLQWRDARJNEQZFHYSXPEOMVZHTWHTSCMGTJKANGIQUMQKYNPFXCF");
    tmp_msg_0.feature_type = 250U;
    tmp_msg_0.rgb_red = 139U;
    tmp_msg_0.rgb_green = 128U;
    tmp_msg_0.rgb_blue = 147U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5903724860064984;
    tmp_tmp_msg_0_0.lon = 0.1286850543611453;
    tmp_tmp_msg_0_0.alt = 0.9111840745666747;
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
    msg.setTimeStamp(0.8917297917607504);
    msg.setSource(24539U);
    msg.setSourceEntity(104U);
    msg.setDestination(3285U);
    msg.setDestinationEntity(38U);
    msg.id.assign("TSXFWXRCHNFIBYQGCUJRNEXBMIAWPZOFIQPMYKMSBEHMEIGXPCGUASRUTOTSFELKFZNOLJYARVHDGAJWBCYWLICUWMJYIVLZOGSXWXAKIKYPZFDSGDHNHKNRTGDPDRQPEUJBEMWIFNVBJAHEQVCXUKLZGTKPURLTGUBZRSLPKKTAPHG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LFQHTONDPEGYPBEPEKBLFHYYSHJJBJZIFUYBMUTULGKCSQPHLUMZLLIIODBQXZYTFZHTGMXAJVXGXCZJIQJOBKRAABYIVCDTHQNXKOWJRCLWXWCOVFWUQPPBPTTEAMGHVJRUEMKVWTRRSWPIJHACNSFYNFTRKSSVXERLCQVUIUNNCRENBSRGMOPUZKNQJCTVBKDDIZMODVALIGHWEDCAAMXZFNQDYGZUSXVLDANFYSKOFGKOXSMQOP");
    tmp_msg_0.feature_type = 64U;
    tmp_msg_0.rgb_red = 49U;
    tmp_msg_0.rgb_green = 181U;
    tmp_msg_0.rgb_blue = 25U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.27271388928150464;
    tmp_tmp_msg_0_0.lon = 0.7900934391481774;
    tmp_tmp_msg_0_0.alt = 0.32657149080584547;
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
    msg.setTimeStamp(0.24343742577641103);
    msg.setSource(47763U);
    msg.setSourceEntity(27U);
    msg.setDestination(38065U);
    msg.setDestinationEntity(99U);
    msg.id.assign("UQXRJWAVWTSCNGQGADVRSKJBVZMXLLYAZFTTPNPBBQWXMRUTGLKINZYPAAKNGEWKUHFSXDBHVZEITIJLIBRGJLHMBGGRBJOIOZKVSJKUYAPUNVZRSLQHOFDTNSEUQLESOSUENSEXDRQZOWQQTQXVCAIVYXKCRDOMLGMJZHDCHOJNMHSNTHFKBARCMYEPDXMJXCWPAPYMDWFMGXFTQYICWPCE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KGGRKVUAXKIZOVVSVAYJGQPZYEYYANFHTJWDIBJOWQQEGDJCCJ");
    tmp_msg_0.feature_type = 43U;
    tmp_msg_0.rgb_red = 50U;
    tmp_msg_0.rgb_green = 105U;
    tmp_msg_0.rgb_blue = 120U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8872006564439171;
    tmp_tmp_msg_0_0.lon = 0.3230474292622524;
    tmp_tmp_msg_0_0.alt = 0.9129178523099558;
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
    msg.setTimeStamp(0.9610038514759459);
    msg.setSource(51953U);
    msg.setSourceEntity(90U);
    msg.setDestination(53728U);
    msg.setDestinationEntity(192U);
    msg.id.assign("HZDZMFBAWXKPFSUSTMPYBFZJPCWEDTOSXVJQHSUUEEUFEIADUJBSWTFGXGZVCNJEHPKNZQTPJEEPTNRGDORCNKCTQIYDVPOQEGLZCLGKILJIUYW");
    msg.feature_type = 202U;
    msg.rgb_red = 23U;
    msg.rgb_green = 190U;
    msg.rgb_blue = 134U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.31541002075051927;
    tmp_msg_0.lon = 0.1492866021408531;
    tmp_msg_0.alt = 0.5356340662422995;
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
    msg.setTimeStamp(0.8539810174184966);
    msg.setSource(52977U);
    msg.setSourceEntity(158U);
    msg.setDestination(39045U);
    msg.setDestinationEntity(2U);
    msg.id.assign("ICBHKPTMVIWXRZJTKLAVQEQWZNUOVNFRQJEPBYIWMWGSDIFNFZDDUIBLKZGYZBVVNXESM");
    msg.feature_type = 115U;
    msg.rgb_red = 183U;
    msg.rgb_green = 122U;
    msg.rgb_blue = 66U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9350620116982659;
    tmp_msg_0.lon = 0.9308461488105051;
    tmp_msg_0.alt = 0.3263141883573033;
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
    msg.setTimeStamp(0.05052075922150834);
    msg.setSource(52403U);
    msg.setSourceEntity(202U);
    msg.setDestination(38396U);
    msg.setDestinationEntity(1U);
    msg.id.assign("OXFXTQHPYZAKLFCVGZSUNISRMEVLEJFIDMWKVFQBXDVEUZWSRVQRMDZWSVMQTAXJYEWTVZPIUOSNWKYJNUKJGBYUMKHGEEORKYWLNJNALONCWMKJSHUXPQXADSGCBDPGFHXFQLNDMBTTYMDGHCZUOXSIKOIWSRPBJAOFBUUOPKWEKPAIRLTMXIMYPAWQAHFLRGVBZTDPJCLYPFLDLTEZRRJEHHGNZCNICBESFHXURH");
    msg.feature_type = 102U;
    msg.rgb_red = 186U;
    msg.rgb_green = 120U;
    msg.rgb_blue = 127U;

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
    msg.setTimeStamp(0.5177407944916548);
    msg.setSource(40165U);
    msg.setSourceEntity(236U);
    msg.setDestination(60479U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.8146231303997703;
    msg.lon = 0.994921120141563;
    msg.alt = 0.7039563372705963;

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
    msg.setTimeStamp(0.9342045342702243);
    msg.setSource(2329U);
    msg.setSourceEntity(198U);
    msg.setDestination(17843U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.025641996395866395;
    msg.lon = 0.1867622802446114;
    msg.alt = 0.6949441380524509;

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
    msg.setTimeStamp(0.45733929426871833);
    msg.setSource(58014U);
    msg.setSourceEntity(238U);
    msg.setDestination(18248U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.5504786881687567;
    msg.lon = 0.1814167486577195;
    msg.alt = 0.41820052717710643;

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
    msg.setTimeStamp(0.13720353658709428);
    msg.setSource(39380U);
    msg.setSourceEntity(240U);
    msg.setDestination(20619U);
    msg.setDestinationEntity(16U);
    msg.type = 220U;
    msg.id.assign("YOCWRQASAPDBULNTSBZHHCYJHOLHNZKNRMIMWPOWXFGZITRSLSRGVUUBXJVEFSJSJOXYFPPGLBRVPSCGYTAWKYENPRJUTCGJOYZIPGFNWFMHFWIEQMAQNILYGECWFRPEBAMKYZCUEHKNXDYIVYAEKCIEDATFZNLBSKLAMKMGDDUZPUXQUTCUTRVGXRKVMXIQXBTFBQQCDDAAEJBZMTHHKZORGWLKISFIXLDXNN");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("WZDNVEDIKNYJBMIBOGPXOBJQIZCNPHCRMPXRSMLNIEPNSAHYWWNXHLOGBSSJUNHVZTCKKHRZQIGMQFPMBTAYGMBQRQMWJANQWQYCHUFSDFCVWHGOBAFVEVBARXIBEEGCETLJTFBTGJEDESCERSIQKSKAXEDUKVQWRLULIORRFPZGHXXJJZTTIANJ");
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
    msg.setTimeStamp(0.36834383646035085);
    msg.setSource(54798U);
    msg.setSourceEntity(89U);
    msg.setDestination(38805U);
    msg.setDestinationEntity(184U);
    msg.type = 249U;
    msg.id.assign("DLWBXPHOTHIANKWUISRVFNZLTZJMBNESCHLBIPMSRHJPXAXTWUNVICISNGOKCQIFEAONKMHPHGSQWIVZCUGUKDYOZHBLNRTWMOICYQFTQLCWYGBDRCVVPEMZJGKTDUPOGSJEXBCEEEYKCMQJMXAZAEYETQXBYVFWDMBXLRYQHMVLRYDN");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 177U;
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
    msg.setTimeStamp(0.287887042066866);
    msg.setSource(5581U);
    msg.setSourceEntity(222U);
    msg.setDestination(42787U);
    msg.setDestinationEntity(25U);
    msg.type = 160U;
    msg.id.assign("AXNSWQPOXQGCKWRFZJFYIAIEUVZLFWXULRUYLKOHKTGOVDQEIJNJFOMFCENMBGZGWQZTESOMFPKYGPLNHZQJSSECDMTNZJIFKQSJRBARGWYUTVUILUXPZMNVDVGBZFUOPQ");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 182U;
    tmp_msg_0.text.assign("ZJTFFUPZUKLARSNSHJUBFWWSORYOPMKEJHHKSNOHJKVEQPRUXUFCPSEYKMADANPQBIEZMPWLOCWBSHPPOIBNFOPVSXQLTSZWZNFCYBVDUZLAZNIXMLQGGNMIFCJHZLDGPWVYDROLHTWURDXYSXCTEIYQNOAVANUIZXGMGHBDTCTVTXXCBDVHCKRBRXVJKGRGLEIQHDJINWLYRFQUIQFYCKEFQBI");
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
    msg.setTimeStamp(0.13754162180036067);
    msg.setSource(4894U);
    msg.setSourceEntity(139U);
    msg.setDestination(28847U);
    msg.setDestinationEntity(52U);
    msg.localname.assign("JDIOTHEQHNASOSTWNXEYTYZNQUKZBSODHKECQELMAPILFLBVWHEMQPXHSCHZBAXJKYUPGGDBSNVTKGUTWLBFZZBECZUNNDTAMMOVINLACFJYKCFOIADNTGORGJHKVWCMGZPXKWDYRQGQPMUVIGOTAYFJKIBYCFUMJZPRPD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZIGZCBJSSMNBUATV");
    tmp_msg_0.sys_type = 86U;
    tmp_msg_0.owner = 6016U;
    tmp_msg_0.lat = 0.7710711655668202;
    tmp_msg_0.lon = 0.5674696394607648;
    tmp_msg_0.height = 0.48014537988944195;
    tmp_msg_0.services.assign("FLTWDPIOQTQDWHXHKFJZTPVPAXDZFJNRFIMKRJDPABDRGRNHVMYESBANGWDISUVKVUFVMGGVAGQRQPSOCTNHRMIBSYYHOBKOYLAJIPGVHYN");
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
    msg.setTimeStamp(0.6376654153178133);
    msg.setSource(25092U);
    msg.setSourceEntity(84U);
    msg.setDestination(64262U);
    msg.setDestinationEntity(26U);
    msg.localname.assign("UDLEFPUIKBYSKVGJLREBGOOCIQUFTHZAIGABKKUODIHFABIEWYSSDLOQWNUYJWDSLCAMSCKTCFJHWLLQWMJPCXOODGXUXACCSGRZRLNTVWNETJWZM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MAWQILPKVDJCWJVPWJWVDCEULDFSESEICRUPIZXFYLNQWBPKXTXYVQUFKRGGQRJGPQLZKNEBIZ");
    tmp_msg_0.sys_type = 147U;
    tmp_msg_0.owner = 12761U;
    tmp_msg_0.lat = 0.9666178552487427;
    tmp_msg_0.lon = 0.8212839474622483;
    tmp_msg_0.height = 0.19501902822066597;
    tmp_msg_0.services.assign("CYIENTHXKUHDCGUVUPNAIHMJARPFSLYKVOTOHFKWSJNGRWLGECNCPNVLZFGXOEAJHYYTWSMZGBEXRKNRDMAMKUEBPZQKORHEXIUUYSBGUHBNBQDWRRFDUAHIVFVWZDLEVABBBPYGCYOPVELNXCOUTTCNRZCYTWJXDTAQKMSTTMBKDQWKLSZLDEZWIPQJWJUGQQERLMQZYJFOFMVXQYSDPARQSHOWGVBXPFCN");
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
    msg.setTimeStamp(0.40982841906454537);
    msg.setSource(43482U);
    msg.setSourceEntity(254U);
    msg.setDestination(65256U);
    msg.setDestinationEntity(201U);
    msg.localname.assign("DQWONZWZVESODNOMZFVVAQHWRYODNMKGRJZAAQTQRSEVSJVOWBBBGPGUTDPIJYWYBVLCXDKWTXQVGDOUIAHTGZATSDYJMTTEFQKDFBEDHRXJBQZQNPNZBHGWMREUIGMHYSGXCNFOZXQIKUNHJN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SPTZADNHQRJFJTSSHHQFJBDJOOYWPVQVEHJDIHPEYPPOGTVZVXYLXTUKGPMZFUFUKCPCJROTSUXLBCKOVEXTYWDZXJMCVGFJMWSKHULDSKYIJPBZYTHLRVEWGKXLKOFARCEIAKSRETRNIRZGNHIDPZWAVFMXCAYAQGHRFJOBNI");
    tmp_msg_0.sys_type = 28U;
    tmp_msg_0.owner = 43889U;
    tmp_msg_0.lat = 0.3072258298785512;
    tmp_msg_0.lon = 0.8374197767311728;
    tmp_msg_0.height = 0.016428368108262204;
    tmp_msg_0.services.assign("QBIGKNEIGSBISRUWAFAPVOBQAVFTOJVQWCJHOMFAVMTDBMXQPMGNXPEWUHXLEFXPKFXKBSKTAVHLHIRAXLROZEXDCKCCNLFVTUGUUXXLMIWASEGZQYCKJUGBEIBYGQNNOCZMRJWWIDEPESNMLDULGKJYOUYWZWIAZLTVQYHAZGXUERNVQDLHPRSOFRYPCSWCP");
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
    msg.setTimeStamp(0.8325519825725824);
    msg.setSource(6105U);
    msg.setSourceEntity(117U);
    msg.setDestination(43974U);
    msg.setDestinationEntity(30U);
    msg.timeline.assign("LADEIJAAQMOGKCVNBTNHYASCMBYGCXZYDRFWCOOQDWMMPKRBRTLGILAMSERYJXUOBSPYNUTGPATBVDTF");
    msg.predicate.assign("YDAJIQBUNWKDUSRGQOAFPJBSVUNDEMHPIZMBTWGKQJUKCXFWJMULEYZOCZLMVQJQCCZFCAANHOVVFMZGWANHUBXSEYVOCFRMQTZGLEOPSRWWFKGXYQHTLIEXMATPRSIYDBGSHECWTRJHGZTVRIKRNPOXVNVTZYPZTLDHRCNDNRBLQBESPEMUEBMQLLCFTSIXISUAINRKXKOKGPHJGOYBBFPJYDUDIDDEXNVXFMYC");
    msg.attributes.assign("CQHFISMCLTOPBATVOLMFAFCMLUUOFEOITKTPVKPDEYIMNGZXONXVFIAWSUBBECWNDQREHNGCYNHLKIXWKJTJAVRRQSJWDHLPZOUXGDHJHBQIYVHBYXVINAZEWJEHZUB");

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
    msg.setTimeStamp(0.970378425926225);
    msg.setSource(53176U);
    msg.setSourceEntity(245U);
    msg.setDestination(12574U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("UTCYZIVKHIZKHEVUARITDDPKEVLWXJWMQP");
    msg.predicate.assign("QSDRZLFIQVTSTGBRIPMPTROLETIZYIQDINIKUIZAGHPYEBJGJOPSQDTXYKPCSLAWXHPFWGTWPDPMTPVTEHJSJWVNNNOCGX");
    msg.attributes.assign("QPXHEKFEIDFZKITINIKDQUHUEPPDZXIMNKOLNGBHDARXZGHOBWLANUTCCWUDFQVTVCAFDVCWXMUVDVRKUNJSLEMYJFSULGMVERTOSPISCKLMGJIQMLZTHYGOLQQSRMFRXYVJCHJHRJAPOIAPKZBWNGSTLFBCVGOCZDQPTUJQRXEDLPROGABFOEYNSKQIHY");

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
    msg.setTimeStamp(0.1387001485967745);
    msg.setSource(50682U);
    msg.setSourceEntity(60U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(153U);
    msg.timeline.assign("YYTMVHPANOKPYTZLULGBYCFIZNBMQPRDYCZRFMIWJPOIQKWUVWRRSIEZKMFSVTYCSTIUPVJNUWBNRPQNQFOTSRENFELVKAELJUUAZSCBHLDLBCLJUFXQTUP");
    msg.predicate.assign("HLWUKWLUANBTEI");
    msg.attributes.assign("VVKSNBWIERRNLRQAYKDNPKOQIFFRXWOBYMIKGVZBSCHEEUCTXPROMAIHLHGAPIKJFAKDVLNJWVAUSQADJXFIUIZSMQBJNMXVLDHJTPTYEYTXBLDZWNQNSSFSRZVYLHRVBUJWNGNEDMPUYWDGISTSHHXEXIPORFWMKAXEUOBECTQYPLLOKBQDCOFZTZEYCMKCWCFZGSHCBZTEQOMWUDNLYAYPOVHJJIGAKD");

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
    msg.setTimeStamp(0.2100316003343231);
    msg.setSource(36140U);
    msg.setSourceEntity(31U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(175U);
    msg.command = 199U;
    msg.goal_id.assign("PZAQDKYVMHYXLDRKGCKRMQLTGHTFOMGSBPG");
    msg.goal_xml.assign("EKXZZCYTABDZMPBPJVDUMIENHZVRKLCTQDVPAQKQJIIDNOWWHRHAPTDCINYWSRBGCZOEOFUXSBSUWKGBOXFPFXVMADIBHLEGPLDQNQJRLPWSEAZMFOEICGQAERLGYJORTOPTLKUSEFJRNQCUYYBUSSXIGANVUGSUOGVQBWCHJPIZTFCVMJTGBRMCFYBYLFMWTHKEXPA");

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
    msg.setTimeStamp(0.39777179757660985);
    msg.setSource(13989U);
    msg.setSourceEntity(16U);
    msg.setDestination(52880U);
    msg.setDestinationEntity(28U);
    msg.command = 67U;
    msg.goal_id.assign("TSHCDNUOYWJLMLDEJSSLUHPQIXXLUHYKSJAABVWZIOECVCPQRQTPUFBNDIFUOTLNBNBIIGGKEHHQZMKYOOGXPZQEMCQCGELEAEMNPTMYIALXPLJGXJIWFGNZZBVPKIOEJECVHZM");
    msg.goal_xml.assign("FKBIBEUEWCBJRUFPSDPXJXUJVDWVTSHVOLHEAQCJKGSVONLPJSNRQTPNKMLFLIMITYQUHZJVEUTSQRBIUDPNVAWJJGEOXJGHXQZRXOKLQYWBIUBGMYBKQMDVKHLBMRTDMFWOESYTHAGRHWNESLAEQNDZRLMFZWGZGZFERDXIZUTCHCZOPNNCSEUDFBRMOGXKIFLC");

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
    msg.setTimeStamp(0.32503728349003824);
    msg.setSource(14333U);
    msg.setSourceEntity(242U);
    msg.setDestination(29009U);
    msg.setDestinationEntity(48U);
    msg.command = 116U;
    msg.goal_id.assign("LSEEVODGENUJHFKAGTASIIMCSBMOPLKTZCXGIFYLGCVRLKOFPLVQPBGR");
    msg.goal_xml.assign("FSKAKTMRUGOAFGURMNUSWGIABPHFKVWEKZLSYTQQLYTLRZVMZFUIZHLWHCJPTVJYBSQNPMPQOVOJGPJOCCCNVSULVOUIFSDMSQDJEZQALAUAOBBRNOWECRCIQCJHRUSTEQFBREYTXIJDXIHIHLXZKZGYYPUWEXZTETXYWBCNDWAGPVXBEAPDEXTWZPTARDHCLMPVNFJFWMKEXDSXJRKYQKAOLOUGFCHD");

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
    msg.setTimeStamp(0.2950031364477458);
    msg.setSource(10389U);
    msg.setSourceEntity(191U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(189U);
    msg.id = 22U;
    msg.width = 5254U;
    msg.height = 771U;
    msg.widthstep = 20255U;
    msg.channels = 122U;
    msg.depth = 18U;
    msg.finaldata = 162U;
    const char tmp_msg_0[] = {64, -122, 52, -122, 36, -9, 75, 9, 108, -64, -76, 3, -63, -83, 29, -120, 42, -49, 14, 15, 112, 43, 108, -5, -42, 59, 29, 16, -17, 31, -90, 11, -6, -45, -54, 41, 4, 51, -93, 8, 87, -93, -88, 9, 10, -81, 56, -38, -19, 100, -50, 7, 125, 77, 60, -83, 0, -28, -14, 118, 63, -117, -74, 109, 77, -100, 15, 26, -127, -40, -12, -37, -50, -84, -126, -5, 77, -67, -59, -69, -121, -94, -8, -66, 78, 114, -77, 117, 10, -32, -95, 96, -5, -126, 121, 17, -93, 76, 93, 126, 21, -71, -69, -64, 99, 42, -100, 35, 93, 51, 86, 51, 93, 73, -113, 30, -124, -49, 18, -103, -76, 18, 2, 3};
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
    msg.setTimeStamp(0.47193817700503216);
    msg.setSource(64767U);
    msg.setSourceEntity(46U);
    msg.setDestination(34862U);
    msg.setDestinationEntity(184U);
    msg.id = 245U;
    msg.width = 12766U;
    msg.height = 9850U;
    msg.widthstep = 15442U;
    msg.channels = 92U;
    msg.depth = 225U;
    msg.finaldata = 95U;
    const char tmp_msg_0[] = {-47, 115, -108, 79, -40, 54, -110, -43, -64, 62, 92, 85, 120, 23, -63, -123, -115, 66, -82, -82, 19, -68, 6, 16, -116, -88, -22, -56, -84, 67, -107, -60, 96, 82, -105, -99, -84, -106, -121, 24, -120, -96, 38, 17, -14, 88, -13, -18, -102, -76, -10, 97, 50, -53, 46, 3, 22, 105, -103, 74, -59, 115, -1, 80, 116, -84, -34, -1, 63, 71, -88, -2, 114, -77, -99, -79, -55, -82, 83, -66, 102, -104, -11, 57, -75, -87, 43, 42, -6, 65, 109, -6, -63, -127, 15, 42, -119, -118, 112, -9, -11, 117, 5, 110, 100, 70, -3, -8, -91, 111, -69, -3, -8, 123, -39, -122, 49, -74, 50, 0, 20, -42, 67, -1, 15, -121, 58, 94, 102, 62, 40, -18, 13, -43, -68, -42, -107, -67, -93, -59, 47, -2, -45, 12, 88, 50, -40, -37, 54, -55, 20, 121, -33, -32, 6, -74, -26, 75, 20, -95, 39, -79, -74, -109, -5, 100, 102, -127, -50, 101, 45, -26, 96, 3, -9, -113, -5, -30, 44, 59, 125, 72, 46, 13, 64, -21, -43, 97, 95, -113, 16, -70, -85, -30, 80, -55, -39, -103, -2, 104, 53, -6};
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
    msg.setTimeStamp(0.6985218412921732);
    msg.setSource(30687U);
    msg.setSourceEntity(10U);
    msg.setDestination(20722U);
    msg.setDestinationEntity(53U);
    msg.id = 251U;
    msg.width = 64570U;
    msg.height = 46709U;
    msg.widthstep = 25862U;
    msg.channels = 30U;
    msg.depth = 104U;
    msg.finaldata = 48U;
    const char tmp_msg_0[] = {-14, 126, -99, 4, 19, -117, -95, -114, -31, -117, 9, -83, 119, 0, -102, 69, 112, 17, 67, -48, 66, 42, -102, -111, -2, -89, -102, -108, -57, 71, 92, 89, 15, -110, 104, 25, 39, 63, -10, -64, 82, -86, 60, 90, 68, -9, -69, 28, 104, 12, 100, 2, -19, -16, -90, -62, 113, 28, 8, -83, -55, -101, 4, -106, 36, 23, 71, -101, -80, 31, 110, 122, -108, 11, -118, -10, -59, 83, -63, 113, 121, 76, 11, -49, 123, -76, 64, 64, 63, -127, 29, 56, -18, -49, -76, 106, -81, -59, -4, 55, 84, 77, -128, 33, -89, 4, 109, -117, -36, -124, -92, 104, -111, 26, -112, 1, -63, -16, -62, -23, 41, 84, 97, 0, -9, 13, 77, 52, 16, 106, 98, -51, -67, 18, -75, 43, -97, 114, -107, -35, -71, -79, -11, -21, -87, 96, -116, 80, 96, -121, -112, 46, -4, 12, -117, -106, 104, 32, 35, -76, -32, -107, 23, -33, 61, -112, -85, 1, 38, 76, -43, -114, 61, 19};
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
    msg.setTimeStamp(0.4272080948606033);
    msg.setSource(5894U);
    msg.setSourceEntity(178U);
    msg.setDestination(13772U);
    msg.setDestinationEntity(135U);
    msg.width = 48528U;
    msg.height = 9070U;
    msg.channels = 230U;
    msg.depth = 232U;
    const char tmp_msg_0[] = {-53, 124, 45, -52, 65, 27, 69, 80, -116, 31, 36, 59, 46, 80, 70, -117, -60, 57, -18, -28, -122, -1, -114, 23, 54, 74, -56, -128, 44, -108, -28, 91, -95, 77, -11, 103, -19, 56, 39, -108, -92, -42, 0, 106, -16, -56, 92, 12, 20, -95, -65, 56, -55, 119, 19, -75, -89, 107, -78, 9, -22, -35, 42, 82, 121, 102, 60, -101, 122, -65, 2, -58, 69, 18, -19, 121, -85, -87, 30, -69, -77, 26, -81, -74, 23, -18, 9, 73, -98, -105, 79, -72, 60, -49, 116, 11, -52, 55, -110, 50, 19, 77, 70, 24, -55, 84, -43, -69, 57, -96, -4, 91, -47, 54, -25, -61, -74, -30, -6, 114, 30, 4, -53, -44, -75, 73, -17, 63, 62, -45, -109, 107, 68, 57, 42, 57, 104, 104, 20, 19, 63, 39, -4, 11, 46, 91, -54, -68, 60, 43, 106, 74, -88, -1, 35, -123, -104, -36, 63, -42, 87, 110, 44, -107, 88, -78, 115, 85, -47, -80, 110, 112, -117, -3, 113, -104, -126, -80, 23, -64, -20, 96, -101, -33, 96, -32, -18, 33, -89, -36, -94, 19, 120, 88, 80, 97, 37, -33, -7, 51, -4, 70, 67, 119, -30, 72, -42, -117, 2, 5, 70, 45, -50, 102, -125, 13, -46, 31, -86, -63, 51, 34, -33, -7, 40, 100, 4};
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
    msg.setTimeStamp(0.7172766890325629);
    msg.setSource(4791U);
    msg.setSourceEntity(92U);
    msg.setDestination(4646U);
    msg.setDestinationEntity(194U);
    msg.width = 30451U;
    msg.height = 50998U;
    msg.channels = 137U;
    msg.depth = 128U;
    const char tmp_msg_0[] = {59, 26, 60, 96, -26, 55, 56, 83, 27, 91, 53, -113, 18, 118, 110, 90, -66, -79, -104, 13, 74, 19, -19, -76, 111, 111, -49, 28, 45, 82, -94, -81, 7, 98, 123, -128, -54, -118, 55, -111, -109, -21, -16, 77, -85, 104, -5, -125, 76, -78, 120, -8, -62, 26, 25, 90, 16, -47, -23, -67, -40, 122, -84, -56, 40, 41, 58, 96, -127, 36, 48, -48, 126, -52, -106, 78, 29, -106, -19, 21, -128, 3, 58, -8, -90, 110, -7, 70, -34, 53, 107, -40, -59, 11, 68, 83, 126, -52, -77, 61, 27, 52, -66, -84, 53, -77, 76, 32, 59, -77, 21, 3, 87, 37, 3, -64, -55, -74, 116, 34, -82, 36, -23, 4, -30, -19, 72, -77, 124, -67, 35, -44, -18, 111, 50, -123, -20, -106, 120, 60, -117, -81, -125, 63, 85, 73, 30, 63, 79, 0, -74, -108, -127, -105, 52, 10, 22, -123, -5, 117, 64, -84, -29, 116, 33, 118, -119, -41, -84, 78, -124, 3, 23, -102, 76, -100, -85, -108, -103, -98, 8, -54, 106, -49, -117, 29, -33, 48, 15, -41, 55, 112, 70, 13, 45, 109, -79, -50, -71, -22, 115, 15, -122, 26, 120, -95, -14, 102, -103, -38, 109, 103, 45, 100, 95};
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
    msg.setTimeStamp(0.7040142502005071);
    msg.setSource(2498U);
    msg.setSourceEntity(32U);
    msg.setDestination(8218U);
    msg.setDestinationEntity(106U);
    msg.width = 58261U;
    msg.height = 36569U;
    msg.channels = 43U;
    msg.depth = 97U;
    const char tmp_msg_0[] = {-113, 95, 57, -19, -125, 85, 124, 99, 71, 100, -94, -124, 9, -96, -106, -60, 11, -80, -115, 119, -64, 76, -1, -100, -18, 86, -84, 35, -96, 39, -96, 29, -97, 50, -76, -126, -67, -109, -89, -60, -22, 43, 68, 103, 42, -16, -71, 94, 94, 93, 73, -106, -100, 98, -20, 110, 97, 47, -124, -123, 95, -17, -108, -113, 48, -120, -53, -40, 23, 87, -54, -126, -104, -44, 108, 71, 62, 73, -7, 101, 31, -73, 57, -46, -53, -51, 125, -59, -65, 27, -15, -5, -29, 46, 85, -3, -39, -104, -38, 99, 0, 119, -63, -77, -28, 2, -90, -123, -78, 71, -65, -95, 32, -123, 101, 76, -101, -21, -69, -86, 17, -44, -33, 4, 126, 16, -23, 34, -17, -83, -3, -64, 5, 48, 103, 51, -106, 36, 87, 1, -6, -70, -23, -118, -43, 17, 77, 96, 58, -2, -107, 29, -102, 16, -63, 59, -96, -52, 36, 72, -53, 31, -69, -91, -116, -58, -97, -65, 43, -2, -16, -124, 21, -23, 113, -98, -118, -17, 44, 108, -25, -68, -1, -57, 122, 14, 71, -98, -111, 106, -19, -31, 29, 55, 65, -17, 86, -25, 57, -38, -32, -18, -47, -58, -62, 61, 22, -55, -115, -78, -117, 78, -111, 36, -75, -72, 111, 6, 88, 85, -16, 50, -27, 49, 7, 5, -22, -51, -79, 43, -47, -118, 115, 93, -95, 67, -21, 61, -9, 38, 103, 98, 3};
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
    msg.setTimeStamp(0.5935665346385779);
    msg.setSource(63361U);
    msg.setSourceEntity(102U);
    msg.setDestination(59951U);
    msg.setDestinationEntity(94U);
    msg.frameid = 56U;
    const char tmp_msg_0[] = {-5, 42, -112, -56, 87, 95, -56, -108, 79, -3, -58, -4, -50, -1, 96, -37, 45, 86, -21, 108, -13, 67, -116, 10, 110, -29, 103, 40, 74, 65, -49, -49, 32, 101, 93, -48, 50, -32, 51, -4, -16, -116, -127, -84, 108, -11, 67, 104, 46, 28, 97, 68, -37, 28, -81, 64, 123, 76, 16, 104, -120, -38, 12, -58, 73, -97, -49, 119, -78, -93, 121, -13, -124, 26, 92, 32, -58, -106, 89, 39, -20, 39, -122, 93, 106, -82, -52, -102, 46, -79, 94, -31, 93, -49, -86, 84, -12, -30, -103, -42, 97, 0, 37, 62, -124, -110, 19, -24, 2, -18, 79, 116, 62, 62, -11, 112, 53, 16, 62, -2, -16, -4, 43, -96, 30, -22, 44, -27, 115, -39, -127, 62, 33, 115, 85, -41, -25, 6, 74, 97, 75, -59, -27, 34, 51, 97, -82, 4, -113, 33, -79, -82, -34, 57, 90, -120, 45, -57, 8, 53, 117, -121, 53, -20, -68, -73, 41, 29, -32, 34, 4, -14, -106, 52, -104, 81, -95, 86, -22, -36, 121, 4, 70, 43, 35, 77, -1, 76, 98, -122, 16, -30, 125, 44, -12, 76, 17, -122, 56, 16, 16, -124, -84, -87, 80, 10, 16, 83, 27, 60, -3, -36, -35, 8, 87, 98, 126, -110, 9, -84, 83, -90, -37, -109, 4, -28, 27, 22, -75, 30, -12, -110, -65, -49, -4, 45, -50, -56, -95, 59, -72, 94, -14, 60, -128, 78, 107, 84, -107, 6, -16};
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
    msg.setTimeStamp(0.9722414146545526);
    msg.setSource(23164U);
    msg.setSourceEntity(152U);
    msg.setDestination(18772U);
    msg.setDestinationEntity(8U);
    msg.frameid = 54U;
    const char tmp_msg_0[] = {15, 35, -71, -5, 94, 55, -85, -59, -50, 4, 83, -96, -91, 21, -123, 91, 48, -46, 57, 121, 53, 2, -63, 106, 109, -127, -33, -52, 20, 33, 26, 40, 54, -111, -19, 63, -124, -83, 70, 106, 2, 16, 37, -50, 33, -96, 107, 111, 54, 49, 91, -98, 49, -36};
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
    msg.setTimeStamp(0.18163183598401766);
    msg.setSource(60817U);
    msg.setSourceEntity(193U);
    msg.setDestination(27737U);
    msg.setDestinationEntity(13U);
    msg.frameid = 190U;
    const char tmp_msg_0[] = {94, -60, 33, -18, 13, 118, -13, -6, 73, 104, -37, 111, -53, 43, -84, -94, -50, -2, -119, -118, -12, 52, -38, -42, -62, -40, 90, 55, -26, -45, -19, -101, -124, 0, -86, -91, -71, -14, 26, 22, -25, -127, 80, 78, 10, -37, 96, -69, -45, -91, -11, 0, -31, 76, -87, -113, 0, 50, -32, -107, 116, 4, 41, -24, 72, -80, 47, 14, -108, -32, 109, 41, -61, 123, 13, 27, 2, -109, -13, -76, 22, -19, -118, 5, -114, -109, -36, 55, 15, 110, -28, 5, -79, 7, 124, 24, -101, 11, 39, -53};
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
    msg.setTimeStamp(0.7570251264204945);
    msg.setSource(20882U);
    msg.setSourceEntity(165U);
    msg.setDestination(49166U);
    msg.setDestinationEntity(211U);
    msg.fps = 240U;
    msg.quality = 77U;
    msg.reps = 46U;
    msg.tsize = 176U;

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
    msg.setTimeStamp(0.2334440233766737);
    msg.setSource(40457U);
    msg.setSourceEntity(78U);
    msg.setDestination(1472U);
    msg.setDestinationEntity(247U);
    msg.fps = 194U;
    msg.quality = 204U;
    msg.reps = 61U;
    msg.tsize = 167U;

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
    msg.setTimeStamp(0.030370219842416613);
    msg.setSource(23798U);
    msg.setSourceEntity(164U);
    msg.setDestination(19339U);
    msg.setDestinationEntity(87U);
    msg.fps = 70U;
    msg.quality = 4U;
    msg.reps = 5U;
    msg.tsize = 64U;

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
    msg.setTimeStamp(0.6835860446036921);
    msg.setSource(22910U);
    msg.setSourceEntity(197U);
    msg.setDestination(17417U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.7080126495137654;
    msg.lon = 0.6451715038963574;
    msg.depth = 90U;
    msg.speed = 0.07899544184589213;
    msg.psi = 0.7514131869902244;

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
    msg.setTimeStamp(0.605978697641223);
    msg.setSource(7434U);
    msg.setSourceEntity(143U);
    msg.setDestination(9567U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.7652272269537066;
    msg.lon = 0.4075539433140982;
    msg.depth = 227U;
    msg.speed = 0.6005103696117262;
    msg.psi = 0.5457789784570716;

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
    msg.setTimeStamp(0.3127254565654163);
    msg.setSource(44919U);
    msg.setSourceEntity(104U);
    msg.setDestination(29784U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.016939286643755436;
    msg.lon = 0.015841078148927323;
    msg.depth = 10U;
    msg.speed = 0.7340374488663635;
    msg.psi = 0.5625583982823849;

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
    msg.setTimeStamp(0.3029886912993941);
    msg.setSource(45783U);
    msg.setSourceEntity(213U);
    msg.setDestination(8983U);
    msg.setDestinationEntity(45U);
    msg.label.assign("LOFOQWXPLOJYDHOQXCQYCAFPTKSYZHEPAXLKVKAPEESJQLMYRUCGYDNOFOTIDXYAUTVTLRECIVBBSNEXMZQVIKHBXSZXGRONLIFPDDFUWVODZFDKUIELZGKLFRXOMOUTJDIMQTZANRMRRWHBPLTGNYWHNMUIYKBC");
    msg.lat = 0.770601772203298;
    msg.lon = 0.3186690361655756;
    msg.z = 0.6891553005229594;
    msg.z_units = 254U;
    msg.cog = 0.5324547838635217;
    msg.sog = 0.8268849832640559;

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
    msg.setTimeStamp(0.25410759982816755);
    msg.setSource(45266U);
    msg.setSourceEntity(51U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(200U);
    msg.label.assign("YTIQCBEIVHLREVIOIBSFKZREUANLQTMLSUQQWEOFKTCAIJPVXZYGBDDDQQHJZBNXNEWECSGEHUWTCZZKROSGBZIHFGTDEIRBZLTQSSMIOXWJFANUOFCKPWHOMCVPPXLIAPVBWFHPHQYDCMSNZPGALRPYNYDTGMYGRVAGNJJYUXXYWNJFCXMBMRKRPSJLKVGFEFXBLWMALCUWCVMLZGDUTQOKKV");
    msg.lat = 0.7223344488897314;
    msg.lon = 0.9228019053324893;
    msg.z = 0.459918847046756;
    msg.z_units = 147U;
    msg.cog = 0.34383989271642956;
    msg.sog = 0.0907911008874902;

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
    msg.setTimeStamp(0.9426242785460851);
    msg.setSource(3991U);
    msg.setSourceEntity(29U);
    msg.setDestination(3488U);
    msg.setDestinationEntity(217U);
    msg.label.assign("QMNYUFXMULXNFTRVXARETZICBCDOCAFWIJKNHPDYBJFCMHOQYXIUBJTGFZVYDEBMGIVHGQBMILIUTRONRGLRUNNPYPPPCHDMWUJQVSLLOFCEQAASBJHMJSMJRDCHGDUFFELVLVMNOKBYKPYKSGUZGVXTLAEKWPWNPEYJDTFYOHCITVCKSOUWEDBEZNQKPWAMZWOZVZYHBXXRNDOKQHVLDE");
    msg.lat = 0.47633519388906453;
    msg.lon = 0.6577492949993032;
    msg.z = 0.07230555795010973;
    msg.z_units = 153U;
    msg.cog = 0.8221452364677989;
    msg.sog = 0.13256527615714075;

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
    msg.setTimeStamp(0.8767147369175103);
    msg.setSource(34386U);
    msg.setSourceEntity(141U);
    msg.setDestination(25334U);
    msg.setDestinationEntity(239U);
    msg.name.assign("FCBPCLTMAUWSKXUIKMFHLVSFOFRCSXVJFKYIEDXYXWEBHXRUPEUZQKPLVLTSHZVZHPDSOLFGOIICHGGAMBRYMXETQDHAHVQBQPVGOLUPLYEKEXDUQCBJIGJGNGHMGEZWA");
    msg.value.assign("WNBGIZEVNKSXDIEXLPTAJVBGZDOCWCZCERVWDMLRRSNFEXTHKUEMJXJTLDRINMCGOLBLKBOARYOCPRDATMGZASGVUTANPQFAZKNQISEOLUQFJXQRGYPCSBBUYHQWWUVLCFDIDTHIFCLXERQZONCDIVFWHXJREOAJMYEWMLPQDKYNYIUNPXOFFLYIGJFAZITJZVEPKPQPFBXMMVTWCASQPQMHVHGHUJHKKSXTGBYBZKAHJVMDUHYNBUYZW");

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
    msg.setTimeStamp(0.9640600745850364);
    msg.setSource(62167U);
    msg.setSourceEntity(249U);
    msg.setDestination(41346U);
    msg.setDestinationEntity(195U);
    msg.name.assign("EYHMUYADESXMT");
    msg.value.assign("ZEFLSLSDIZKQMSKWXEPVBHQORDMROQQGDNBKBDGBYAMXUQOSQQCIFYOSEMIVKOVTRTTIORUJVGMBZBKKKCFKTWEBWVGIUELEJHGYNHOUAMIGFFHENFXWTZCZYOLGVYFPLQAVXLLYPABCHWVSDZVXBYDNTZBLVCYAUAAKCAFPI");

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
    msg.setTimeStamp(0.6373331607585774);
    msg.setSource(15984U);
    msg.setSourceEntity(65U);
    msg.setDestination(52541U);
    msg.setDestinationEntity(155U);
    msg.name.assign("RZSBTOVJEEOGXHXLLSJAFAYLZWPTOIUWCEWFKFTCCNGGHHLIZJYGMZUGPBSMFDUHYGVQNPIOCPLRYXNQYVMJNATMJRECRASBQKLCXCOVYSMVNVIUKOVTSPMQKFWCWNDADRTFAFONIBFISIKQEHXFZDRXOQDRGHMPUQWTMGYBYIQNEDEBZFGXIRWIPCUZPNXDUOKQEZUDDUAJAZHKZTVHXJLEGWJLTBXBHPMSMJLYRYPKROBQNJVWLASHCKBST");
    msg.value.assign("RPXVBTUTGZYMIQGHDIRMSPLBEFBYDLWSNDRMAMFIPHVEXHCJLKSOEZLRHUMMRYTGQNNGHBCQFPJKPQOOOTNULNHDYMKQMYCUTERVTXIEATKAQBWGBZAWBZPWUKVJVILQJEBDXKPTDTDPLIICTVXESXCRHRVWJSZZOFUNUYOJNOHGODYKWN");

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
    msg.setTimeStamp(0.18247730276604424);
    msg.setSource(9443U);
    msg.setSourceEntity(220U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(14U);
    msg.name.assign("FMCSMIMXTUNBMZCMEKXJUZJLKBHNELNSCRVDZLYPKCSTYROBOAASZSJPQXMLEXKGPKHTFQGPWKIXJMWDKWRJDRZWSZQVDXUCLBIMCHWQVHPYRQXGOEFYPGADNKVZOHJQFEPXXSDSIHGIONGARDPRUOE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MWBBEQZGCVLSZTNGQMSOSICRFNIAADLGPQVPYHNKXKYDQSQZJDCIJYZOYKLFUAWRMGCUMXCJYPOYEFPYRGVRJDRNDBGKURUZSIIHVTUFWLLYEOSUGENLSVEAHDZFZMAAAQJGPNEXMKSMWPIZOKGOQSREPCJDKMTAAPRRBGDUFMOUQ");
    tmp_msg_0.value.assign("OUGUOWITVUECAPTNRUZITGQBHXBIDSKTWXLOTIZKDPHQWOAZFLUIPLBVRUQWFEFRDWDMYQAQPDZCAXYMJRZCFLASIKBSEMDJHPGNROGXFWRCZTXIEYALVUBBNJKEYMFQLMKVVIXMHCYGZAEHIGSNBWJU");
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
    msg.setTimeStamp(0.17980839158641493);
    msg.setSource(824U);
    msg.setSourceEntity(220U);
    msg.setDestination(21369U);
    msg.setDestinationEntity(229U);
    msg.name.assign("OVPWRDWQCETXEWKSEDSXHUFDNVNSFNWLKLHTIXFIWYUHOZVGDXAWPYUUZIBQASNDAZSJLEAUERUBOXCHQZQMMJMQJRJKKRQHVHBUIBJOTKNMTTCCDXDXGMWOFSYGWUTCMXVJOKKCLFMZYRBKPGALSAGUESNAYBLIQBJYLFTPBOISRIHZXEPRZTJSJGQFWMZILRBYOICBTGHYEPFLHNOVPRECDZAAHVXVGEWQNAVPCMLNIPDVZQNFGYY");

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
    msg.setTimeStamp(0.787987607716098);
    msg.setSource(42860U);
    msg.setSourceEntity(69U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(235U);
    msg.name.assign("JEFWSXGPRDZVOMJOQRISCYUIARTKMPAGQTLRNYCPDQXJIAZSSUWBJMYKQHDTAVZVNKVZRIEJQUXYBXQVDWFLXXAEVG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BMFQCESBPPLTKEWKLEVBJJ");
    tmp_msg_0.value.assign("IGBBZMDKEVRKLLOEVYHDLJKNLGJDDOXQYIWFWAJBGIFFPMDNJOMTUCM");
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
    msg.setTimeStamp(0.7510748498629495);
    msg.setSource(4048U);
    msg.setSourceEntity(12U);
    msg.setDestination(58106U);
    msg.setDestinationEntity(162U);
    msg.name.assign("DUPSEJCRQESMHWAOBYRNGNYTPADIRZLOVHQSKTUTGZKBCWMIJPPVHFGUBMBIUJKMUVZTSQZPBDWCADMGFOFZCASJVBQDFPLFSTNXERCJLIYZRHAVUQANPKLTWOMUSFXQRHTOGESN");
    msg.visibility.assign("OXMOPETIIBEKYTXVJMBXASSGKWHRBJJKWCFEENMIVVBMQBKHUNNXVTBECFGW");
    msg.scope.assign("TEHPIKLIZGOBHHWHRMZYGAERHMNDDEDZTFLKQOLTVFMUPJNKRMQXFOVJWLUOPGTDLBEAVDDFUMAPBGEUISTAPXDLNCEYXISXTIYJOGCNIFNGWAICYJWNJQIUPMQTTGXLJHKVQSSCROHCYBLOBQKSCHUAOUAGSJUDKYAMIQANGHFOBCXY");

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
    msg.setTimeStamp(0.9754931187956579);
    msg.setSource(27584U);
    msg.setSourceEntity(34U);
    msg.setDestination(60010U);
    msg.setDestinationEntity(19U);
    msg.name.assign("ZNZDFWHDHPEKSODKHKQPSXGCBZOOWNFHPLQCDYMSKZHYNKAFJJRUDDBGRIXYAUTRNBJBCCLAVBFQTSEULNEWAXCNZTOSCOUEDHMLUMXVIMCYPFCCFBQVIJMIXWJEXFEYQQBPYRJEHVWZQVZJVLPPKNRHMQMYXFIAGSH");
    msg.visibility.assign("FUQBYCDIXSKEIOBYGLGSLHIRCQWXSNAWHMKKRFTSZOOOETMCZTBSQXLIDXRNZKJCZRECKELEMLUEYOUDJPDWXFMWRYIWLBGTLPVZPHHGXZIRVDXGBJLXNKGSVOHVFJZULNJIYOOAABNEBMIFWRYYKCXEN");
    msg.scope.assign("BMZPRDUFWWXEQJZKCTNGGSLTYYHKGEOWFMTUNBKKOFIZTFEJCIYRBRBJOHKFEHDBSNWPSNMXJVXOLYQTYMMECWVUMIOIHNDDQFVQA");

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
    msg.setTimeStamp(0.31742193145592945);
    msg.setSource(6942U);
    msg.setSourceEntity(242U);
    msg.setDestination(20460U);
    msg.setDestinationEntity(217U);
    msg.name.assign("YGBUGBPFELAXOYGIXYBDCWLFXIWMEZPJRAXPHBRFWTVYMXCGUSZBCMMEPTJNDVHTZDKZELJOYUQTKEBKPZDHCSQIEGKJWOQNAMDWYSSCZFTFQIUASCMHNYGRLAHNVNPWVCBLKQGEKRARCKUUSBHFWHLNIDOUAOSGFRUCJRWALOVIJJUOJL");
    msg.visibility.assign("FPWJDMQBZVWJUJXFDYVJPIMOEHRILGPRBBBSJPKQHZCWGYNFTSKRLDLWUDNOMTFSKVTXPFQXNEGPRKZQJTUOZDKBDWNHV");
    msg.scope.assign("QCTGWZRUEFFXYAVNDDYPYFRYTGVVPCJOQPAEWLTOSIOLZHGVJXEKNDLTSRROM");

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
    msg.setTimeStamp(0.5827305984344349);
    msg.setSource(2181U);
    msg.setSourceEntity(115U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(11U);
    msg.name.assign("YZMXRVWVFQKWYXQYTBKOPTRGGPDDVWRTMGMPQRZVLJIUQWDDJJWHSZJGUPMKNJXEQLLSKZLINHBRKCGDROEKGMOAFJXMUKFODYULQBIEQZNVFTFZNWTFBSTPSAHE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZGFJECSGTDYNLVCGBMZZISFZKBOXQXJHJNRDFSZIVSSAVFUUAXLHWOZBMADAAKYQBBPRYNYMRTRGYSIDWTOQICYMBHJXAHWGFKJRJFMMGQLHRQURZOTNETVKLBKVSNNFWPMTAPUTSGYGEQGDXHCRXOQYOEPELLSOALTIJHTIRDDNSJCHMXXPLIZDUBKV");
    tmp_msg_0.value.assign("IEWGNJMCOXKMSGRPYDUFNIVXKQNIUOTPOBGQVMZYCWDBRZYFRLFJFCIWQVIIVDXETAMZHZEGGWWBGSBCBSCNTVHMJAPCSUTNPUNEKTVXPMLQLNYIGDHZKQTARDVZMOYYPIDQMFFUWFWGECHRXZZPQHSSKRIXYTIANOSRBVJELQECPDOEUZVLAKHCU");
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
    msg.setTimeStamp(0.5002183733978353);
    msg.setSource(29943U);
    msg.setSourceEntity(18U);
    msg.setDestination(29539U);
    msg.setDestinationEntity(64U);
    msg.name.assign("DMBJJZBRNNYYHYFDZGOHYIPKWUSZVHDREGPEKSMZMASBVPPRXEFTCXQNCPFASFUENZAMSRLSTXTOUPDLVOFHBOLVIZAGOAXWQQJQUBXKSUXDIZVEPSHFYXKNPBFBQRDGLJJACYQRTLIOWBTFGPCEUKJJVGIQEQTNIKJRVNHLCN");

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
    msg.setTimeStamp(0.6475105775374099);
    msg.setSource(65087U);
    msg.setSourceEntity(124U);
    msg.setDestination(39420U);
    msg.setDestinationEntity(14U);
    msg.name.assign("FGPJIAAHZGREMOBHSGZRFFBVLUPBFUPAMMGASLKIBDKWIGJSKMJIXUIZHLULANJNXNNVJORBCOWPSRTYAMTQNYTIDJUXUIMPHPZHQQDOLPAONSZKETEWETCCZZZHTNNBEUOFDZXIYLXIHVCXACHPTAOCUYTSQDWKMGITWEHCRFKBMLYRRDRFUFSQBYVTWFEQELMVFYVVSWMGQVOVAKSVEWKCDYX");

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
    msg.setTimeStamp(0.01202305157636141);
    msg.setSource(61445U);
    msg.setSourceEntity(64U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(55U);
    msg.name.assign("JGEAGQNGCRDSXRRZNUHFETASMOQSKWVCQVBHMDUTBMCQSYUICGKNPCBUYVJNIEOKLONKVMONBHZGMYQEXECRHWFDPGVBKNYYXWQSQRXTCMLQITTAWPFXYHIEWLHADZPPOBGHJUKISOJXZZDTDAGMDXQRJEDLHTWJDTRKXL");

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
    msg.setTimeStamp(0.42159889265483486);
    msg.setSource(51562U);
    msg.setSourceEntity(64U);
    msg.setDestination(8648U);
    msg.setDestinationEntity(215U);
    msg.name.assign("VPTXEVIUVGBKUSHQACSMYNRSPDBZWBFFBOIGQVBRTFQOGRHDKPOVJQTLTBNFMOYGDGYXFSAHXHUJGJCZZGZHSANUYXTSAMBMDKODZMELEHWZMPLMZLCLZHUDCCONIAYAKKCZJWVXEJNHPYPAIUSXVBILVXRYEQUMUULAPITRKGNLKNC");

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
    msg.setTimeStamp(0.4356921534694751);
    msg.setSource(36619U);
    msg.setSourceEntity(25U);
    msg.setDestination(50864U);
    msg.setDestinationEntity(62U);
    msg.name.assign("VBLMWCEZEYVDWRGLGSJBABYARSFXAFLCMDISRJRTAYYRKPQVCWLSHTPWUXZHPWIVKQEJAYRKEOIDPFMTUHQWJDROPTOXKNXMKSXBFPOQEISNVKMSNREMTAQC");

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
    msg.setTimeStamp(0.3773722666111632);
    msg.setSource(9797U);
    msg.setSourceEntity(173U);
    msg.setDestination(28755U);
    msg.setDestinationEntity(43U);
    msg.timeout = 2710656878U;

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
    msg.setTimeStamp(0.5122428799756809);
    msg.setSource(59426U);
    msg.setSourceEntity(198U);
    msg.setDestination(46577U);
    msg.setDestinationEntity(50U);
    msg.timeout = 1373321270U;

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
    msg.setTimeStamp(0.4407112394344398);
    msg.setSource(18148U);
    msg.setSourceEntity(198U);
    msg.setDestination(9205U);
    msg.setDestinationEntity(119U);
    msg.timeout = 206503605U;

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
    msg.setTimeStamp(0.4103794856272698);
    msg.setSource(60525U);
    msg.setSourceEntity(62U);
    msg.setDestination(15000U);
    msg.setDestinationEntity(181U);
    msg.sessid = 3191840004U;

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
    msg.setTimeStamp(0.3111201447141222);
    msg.setSource(22920U);
    msg.setSourceEntity(14U);
    msg.setDestination(3035U);
    msg.setDestinationEntity(76U);
    msg.sessid = 346151156U;

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
    msg.setTimeStamp(0.32583325201463);
    msg.setSource(22419U);
    msg.setSourceEntity(66U);
    msg.setDestination(65156U);
    msg.setDestinationEntity(46U);
    msg.sessid = 2674608453U;

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
    msg.setTimeStamp(0.8811857472221926);
    msg.setSource(59538U);
    msg.setSourceEntity(66U);
    msg.setDestination(51141U);
    msg.setDestinationEntity(161U);
    msg.sessid = 2951131018U;
    msg.messages.assign("XGDZLVVPHMSPGEPXKYDRWOFIBUTCXRCMYYWFHKPAQEAUOUGLGNGYSHMAONMSUTNSFBSPWHTDZLNUIAORWPBYJVXFZ");

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
    msg.setTimeStamp(0.17384165342285673);
    msg.setSource(2103U);
    msg.setSourceEntity(115U);
    msg.setDestination(55660U);
    msg.setDestinationEntity(62U);
    msg.sessid = 2249501801U;
    msg.messages.assign("SXJEJPPACKRXHZVITHZHIFVFNDPFYSMGGZNCLEDBACIMYOZUDPEQQUVOIKHJDUHPBGSTULAWKQNEGNDQDKFGCAUVKXJTCMUBLKZCGE");

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
    msg.setTimeStamp(0.003672611430714956);
    msg.setSource(44125U);
    msg.setSourceEntity(235U);
    msg.setDestination(48524U);
    msg.setDestinationEntity(44U);
    msg.sessid = 1303607170U;
    msg.messages.assign("MJXZZMMBYIHISQSODAWPSXDDIFSHOCVUJHRACOHLJZJWIWVVCZX");

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
    msg.setTimeStamp(0.2021751633864869);
    msg.setSource(24012U);
    msg.setSourceEntity(106U);
    msg.setDestination(51086U);
    msg.setDestinationEntity(182U);
    msg.sessid = 198387723U;

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
    msg.setTimeStamp(0.8178152257225527);
    msg.setSource(19783U);
    msg.setSourceEntity(196U);
    msg.setDestination(46630U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1066154896U;

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
    msg.setTimeStamp(0.7778927923696776);
    msg.setSource(37514U);
    msg.setSourceEntity(132U);
    msg.setDestination(4560U);
    msg.setDestinationEntity(243U);
    msg.sessid = 2131875684U;

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
    msg.setTimeStamp(0.5147007138367793);
    msg.setSource(39866U);
    msg.setSourceEntity(158U);
    msg.setDestination(24210U);
    msg.setDestinationEntity(110U);
    msg.sessid = 525441723U;
    msg.status = 218U;

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
    msg.setTimeStamp(0.5035655862879655);
    msg.setSource(7706U);
    msg.setSourceEntity(49U);
    msg.setDestination(3533U);
    msg.setDestinationEntity(196U);
    msg.sessid = 2650290038U;
    msg.status = 202U;

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
    msg.setTimeStamp(0.40814008706274696);
    msg.setSource(4637U);
    msg.setSourceEntity(163U);
    msg.setDestination(13944U);
    msg.setDestinationEntity(136U);
    msg.sessid = 811091324U;
    msg.status = 173U;

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
    msg.setTimeStamp(0.004967177951769597);
    msg.setSource(57777U);
    msg.setSourceEntity(139U);
    msg.setDestination(41870U);
    msg.setDestinationEntity(241U);
    msg.name.assign("HUYRPNPABKDMXEQCVSZQUXEDJBMVUOOMNFKORPBCMZZXXUXRNIOQPBJDVRMOTJJKBKHAIGFVGCMTILAYWFXTZOCUGETVQYNUZEXYFCZKWAAVRJQO");

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
    msg.setTimeStamp(0.459576822308713);
    msg.setSource(64042U);
    msg.setSourceEntity(44U);
    msg.setDestination(28589U);
    msg.setDestinationEntity(51U);
    msg.name.assign("GVUPZXDAGOUFHLWTDOSZDEEDEWTRVOFUYIVGLYGKTSPRJTYJTYIBIONZDRBFBMCXRCFKOZMCBCWNOXVB");

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
    msg.setTimeStamp(0.27860961056441835);
    msg.setSource(52771U);
    msg.setSourceEntity(84U);
    msg.setDestination(46217U);
    msg.setDestinationEntity(174U);
    msg.name.assign("DUBNOKPWNKOZFTXMZWQXVXHYHMWMKOWEIPZEDQTJOAWOAOJLGKVEDAVSSWMYXRCIUWFFHREGXKZSNPRMJJBGJTDNVAVYGCSKBYRXYPASFEA");

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
    msg.setTimeStamp(0.5084819153069764);
    msg.setSource(59191U);
    msg.setSourceEntity(180U);
    msg.setDestination(62980U);
    msg.setDestinationEntity(7U);
    msg.name.assign("FCQYVJOYCMQTIKLGRKVZVBTHHVBXGUHFYFXIFLNRIORJCNASORKFADUZKIKSTIGQTMZRWLDKZCPWDOE");

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
    msg.setTimeStamp(0.8998450940413373);
    msg.setSource(58667U);
    msg.setSourceEntity(39U);
    msg.setDestination(10361U);
    msg.setDestinationEntity(1U);
    msg.name.assign("MMXVGSDXBAEVNFWQKRDKIRLCNZXHNNFVQXPZTKEZQOZODFRVZTTEOSKCIYWHHPWJMMQITEDFUTDHKXTGWGXMRXBKIWNDVHWKEUOGOFALLDSJNJMYJYXDCEIQYNMBSUBVFCYFIULSZPUEB");

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
    msg.setTimeStamp(0.77971985835128);
    msg.setSource(39703U);
    msg.setSourceEntity(169U);
    msg.setDestination(55801U);
    msg.setDestinationEntity(194U);
    msg.name.assign("DWXRQAEEVIWNMFQVNCOYISNJGHNNDWHABBEVVLILIRJTPATJHKQDJCYBPMBORZFLDEJHFC");

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
