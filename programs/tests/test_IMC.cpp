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
    msg.setTimeStamp(0.599291809696);
    msg.setSource(97U);
    msg.setSourceEntity(70U);
    msg.setDestination(12178U);
    msg.setDestinationEntity(43U);
    msg.state = 137U;
    msg.flags = 101U;
    msg.description.assign("CPBYRPMFUOGOEFZPOGYNTBAUQTALGBGFKJVYECYRJLJAXWLSXEJZCMLUHDDXRSGSMVZHITXHLEEYJPKQGTZJPDCAQIDCFSPXVIWJQNKQPNJDEOYPFLVQDRM");

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
    msg.setTimeStamp(0.0147324986738);
    msg.setSource(26640U);
    msg.setSourceEntity(238U);
    msg.setDestination(56641U);
    msg.setDestinationEntity(199U);
    msg.state = 208U;
    msg.flags = 54U;
    msg.description.assign("KVFUKURBQGMUJWEJVOMRXOXQZGEOMWJRPSCLJLHSSAATWXGVWFBXUMCTVTYWFBNOGXPKIYHOIIVZBHNTPHNDQBHCWAIQEUCBDXGCCLEYOXVCRELQHKVMMPFYDSXWVJGDEJUYGKISSTDZDZLFMRZK");

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
    msg.setTimeStamp(0.278661154205);
    msg.setSource(4330U);
    msg.setSourceEntity(178U);
    msg.setDestination(32463U);
    msg.setDestinationEntity(5U);
    msg.state = 165U;
    msg.flags = 196U;
    msg.description.assign("LTRBPFMHABRNXWPKSBCLYHHVUSOTKBNQFIANLDEODIRMPCNDPATOEQAJECUZVUNEWWINDYNJAYXHCGINRBEJDMEWIKQHQIGTMZIOLGGPGVHTSIPAWVYZRLJLDXVOHCCXAKWCHFNQSJSIFRBTOZSZLGPUCPW");

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
    msg.setTimeStamp(0.496127645392);
    msg.setSource(51094U);
    msg.setSourceEntity(106U);
    msg.setDestination(14597U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.271088037118);
    msg.setSource(19973U);
    msg.setSourceEntity(244U);
    msg.setDestination(47258U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.391993451802);
    msg.setSource(27876U);
    msg.setSourceEntity(41U);
    msg.setDestination(37764U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.734436589801);
    msg.setSource(49657U);
    msg.setSourceEntity(62U);
    msg.setDestination(52321U);
    msg.setDestinationEntity(239U);
    msg.id = 46U;
    msg.label.assign("HOYMKJOYMFQSFWZNTNQRXMHEEUTRQJECIZKYMORMHQYIBIEGOLMSQBMYBXNFRXZFWVOEZMPRBJOJQHSTOWGLNVVEYGGWNBPQFVKNIRDI");
    msg.component.assign("LYNPCFZXOCTAJGVFVGFPAVHPQEUYKMZFRBRXVXKABEYVACCAZJSRCOTLUUZHGGMDKAXEORHWXZNUTZPYINRSDKGQRWW");
    msg.act_time = 32133U;
    msg.deact_time = 63963U;

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
    msg.setTimeStamp(0.654629133007);
    msg.setSource(29251U);
    msg.setSourceEntity(21U);
    msg.setDestination(15354U);
    msg.setDestinationEntity(164U);
    msg.id = 57U;
    msg.label.assign("MSFBSDNIFQAIBLNGXVVZCOOAPOEJYYSAHNEDIHGZPBHSRDWGOBFJWOKSPYQBHKDFMUEOZYHWLZPRXSASXVURJDWFYJMLCMVFOBTMEFELZBRUVTZPAHURACAZYEMRQMCXXGQKQYVQQLUISWTWLJZNTXMNLCUQIJMRUGRCDLKPFQBVAJCPIWXZWITEDKUNRMHCHNSPEDRVGXUNT");
    msg.component.assign("GQZIZVNTURWEMQYMHNSBXVKBKCYFYSISUUWJAUWEEDJOGCTEHEYOTHL");
    msg.act_time = 12812U;
    msg.deact_time = 17904U;

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
    msg.setTimeStamp(0.404181732966);
    msg.setSource(8578U);
    msg.setSourceEntity(252U);
    msg.setDestination(31108U);
    msg.setDestinationEntity(210U);
    msg.id = 198U;
    msg.label.assign("FUVFKODCWYRZKDZQNLMFARLEICAHIFVJLRKWXWGAMDMMIHAWKYBXXODDPDWSCNSDCBEUKHLXMJLVJHZHGVOQHTNJRRQZBFJGEUONEGETOLYVSMKOYQKUTZCAWYRSOLAIZMQDQHPITFKXCOYWCAEBGESWSLKGUQGYBNIRACWNUMJWYOFZNFGIJFBHTFPKHVTXRI");
    msg.component.assign("VUZTVEPOSGXEUMZRTHQOUADLACPWAFCEEKSCCLOYUGVLQHFUBJJNWBFXTHZZRUCLAJRJKDDNBMQCADPTJFQDGTR");
    msg.act_time = 41176U;
    msg.deact_time = 19231U;

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
    msg.setTimeStamp(0.0991683250351);
    msg.setSource(39916U);
    msg.setSourceEntity(0U);
    msg.setDestination(4779U);
    msg.setDestinationEntity(108U);
    msg.id = 147U;

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
    msg.setTimeStamp(0.0630973959087);
    msg.setSource(57936U);
    msg.setSourceEntity(154U);
    msg.setDestination(2300U);
    msg.setDestinationEntity(16U);
    msg.id = 164U;

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
    msg.setTimeStamp(0.795157064117);
    msg.setSource(11895U);
    msg.setSourceEntity(81U);
    msg.setDestination(50394U);
    msg.setDestinationEntity(182U);
    msg.id = 98U;

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
    msg.setTimeStamp(0.412852009832);
    msg.setSource(36514U);
    msg.setSourceEntity(159U);
    msg.setDestination(8515U);
    msg.setDestinationEntity(248U);
    msg.op = 89U;
    msg.list.assign("YHANPJAPQRZLITQMFOTTXKJPSBTXKRFDWYMBNZLHDYSQCAEQQGVHCBPVIAWONJDXHFLKWMTYXIOUITKFGBGUYIJEZFEAPIRWCRUSLSCOVGCISDGHIYZOUNOWHXAOPQZQKUDRXHJEOEVVRGBEXNCXNPKWZULFKYJCSRMNNJMDASEXISCSJWYVMATBVNDRBUMKHDRGMD");

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
    msg.setTimeStamp(0.0183984356569);
    msg.setSource(20597U);
    msg.setSourceEntity(111U);
    msg.setDestination(29572U);
    msg.setDestinationEntity(102U);
    msg.op = 103U;
    msg.list.assign("HPAJOGZLARQWZSKLTURADVMXPBNHZFOSNEZNOTXQGCRNYOCIRHSUBIYZNRJJLWHMMLGVESLYWUDTVXIUQUMFOTBEYNICVIIBBKINQPXVEOECYTACKKVZGXGMCXEPTQRKTGSPHCJYFJYUJKSATONDFZMDLX");

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
    msg.setTimeStamp(0.649229250063);
    msg.setSource(57397U);
    msg.setSourceEntity(247U);
    msg.setDestination(55821U);
    msg.setDestinationEntity(114U);
    msg.op = 119U;
    msg.list.assign("DIXXPFNQVQMEXCAOWJPEUBRKTVNUIFSHDTOFHDVXCFRQGQFVIWBHDULXZJWGQMONMUYURAYIKNEGCKEOAAJWGXVOZEUTQRQZGDJEITLSOOFPGXTVVUBAWRNCLVC");

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
    msg.setTimeStamp(0.363254275522);
    msg.setSource(1928U);
    msg.setSourceEntity(31U);
    msg.setDestination(31023U);
    msg.setDestinationEntity(201U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.966212516806);
    msg.setSource(32047U);
    msg.setSourceEntity(251U);
    msg.setDestination(22711U);
    msg.setDestinationEntity(130U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.826939713519);
    msg.setSource(32769U);
    msg.setSourceEntity(175U);
    msg.setDestination(43761U);
    msg.setDestinationEntity(41U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.297574810477);
    msg.setSource(5363U);
    msg.setSourceEntity(138U);
    msg.setDestination(50649U);
    msg.setDestinationEntity(136U);
    msg.value = 158U;

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
    msg.setTimeStamp(0.206049201534);
    msg.setSource(38267U);
    msg.setSourceEntity(26U);
    msg.setDestination(42440U);
    msg.setDestinationEntity(114U);
    msg.value = 71U;

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
    msg.setTimeStamp(0.358211460645);
    msg.setSource(11797U);
    msg.setSourceEntity(142U);
    msg.setDestination(494U);
    msg.setDestinationEntity(70U);
    msg.value = 157U;

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
    msg.setTimeStamp(0.20346080117);
    msg.setSource(63713U);
    msg.setSourceEntity(229U);
    msg.setDestination(2076U);
    msg.setDestinationEntity(186U);
    msg.consumer.assign("YKAKBYLZAYKATUCOWPSICHPNWBKHEQUNIGLOMZPWXMVSHPGRWQTWVYYMQQJEVUFULIUFXFMKAGGTPNEDROZBGDZUJDRJBODBZVCRCQBHTKLUDCRMPNHOXQJFAPDCUACFQKLTFKHTCGIGIMSREWZYNLXOXOIIVODVZWEJXVPNTFAYMQAFTUOWRDCDQVFHJSZYSIJBXXPAGBQRHWGLZYVEBIFMOEBLNKNSVACHXLMGE");
    msg.message_id = 33862U;

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
    msg.setTimeStamp(0.501554527322);
    msg.setSource(21540U);
    msg.setSourceEntity(129U);
    msg.setDestination(49274U);
    msg.setDestinationEntity(18U);
    msg.consumer.assign("VPITNBSMKCGQDOGSJLUMALNXNUHEMUOZMLDRYYODFLIZIIYHNCAZHFRXDIDSISQZAKDLFBJHSWL");
    msg.message_id = 19023U;

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
    msg.setTimeStamp(0.0655974522161);
    msg.setSource(12849U);
    msg.setSourceEntity(165U);
    msg.setDestination(28097U);
    msg.setDestinationEntity(124U);
    msg.consumer.assign("ERDPEYNZADMSQRBYDTYRHFRGWEUVPHAYKIGLQOLEJGRPCQJSXEKMWQZSQXZ");
    msg.message_id = 41964U;

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
    msg.setTimeStamp(0.395769595386);
    msg.setSource(1074U);
    msg.setSourceEntity(108U);
    msg.setDestination(63713U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.303576187379);
    msg.setSource(57921U);
    msg.setSourceEntity(228U);
    msg.setDestination(36235U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.619738389602);
    msg.setSource(32830U);
    msg.setSourceEntity(241U);
    msg.setDestination(22118U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.757574709774);
    msg.setSource(6893U);
    msg.setSourceEntity(163U);
    msg.setDestination(65136U);
    msg.setDestinationEntity(113U);
    msg.section.assign("BDAAKKCCDBXIJKMAJCMRHMLUSLTEW");
    msg.param.assign("YXQPYSYBDLUSCIRJKRMHTDMWTAWYTHRXAGEIMSUTYZIXLAREOXHUFOLXNLSZPMFCZRFQO");
    msg.value.assign("UVYGMVCUIWCFOIATHNAXPSLZGGDZUQJBFHHUVGNNAUF");

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
    msg.setTimeStamp(0.92231561462);
    msg.setSource(13925U);
    msg.setSourceEntity(245U);
    msg.setDestination(30330U);
    msg.setDestinationEntity(121U);
    msg.section.assign("UXSLVBINAKQGVWINGSYDQPDRMRAGZUBZAKMHVTQSTANNRRSPWRIIOSIOTFYTMRXOZKXAJTMAQMXZQEDDZKFLTJAILKJJFMCOMXISSFTOUCEXODCRVEWCBGHBEVJVWQAZELKKHXCJPEOWFYZSHDLCDHRHBJKFULNPWGDYCYSVTQVFBPUJBCLAZGUDIWYUXYVDLPRBEZALQCNIJVFGRGPPOUFEWYNX");
    msg.param.assign("BJRDCJUSFFTGVHILAXZQDBDXKGZYPRKJWEQHAHYZVSPPICFNVMLPAOJAZWQOHIABZYFZRTTLHJKWTDDCPBOVVYUIIBUGSYNPKKFGSEDKNKWBGPHSUAEPFWGMXTZWCHRKCFQDSWEX");
    msg.value.assign("TQFPXNVCLQKMNXHXWAOCHATMDJSEUHUYIFCRGLXNGWHDDNEUNNDZWAGIKRIZAPFOOQMPEZB");

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
    msg.setTimeStamp(0.793394865833);
    msg.setSource(40876U);
    msg.setSourceEntity(137U);
    msg.setDestination(40668U);
    msg.setDestinationEntity(14U);
    msg.section.assign("QEFUMKMGBKINXJYDJKGHTBXKDSHLAURDH");
    msg.param.assign("SYDDINAVEYPFEZMCKQPEXWBVOOJMWQHGEPPMRJICDPCYGQYNTMMCBXNUBXSOGCNQZYBLAAXGLJDAHEGQZNXYARXOTHWHSNZNZNABVHSBXGGCTTUTIF");
    msg.value.assign("QSUOBZWJKACQCYANGVOBIEVNDMXVZVWCRXQIWJNWXBFXLGIIXZDLZAMCHNPFMHHTLKSFYWMGPLYUAHH");

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
    msg.setTimeStamp(0.978594808094);
    msg.setSource(10480U);
    msg.setSourceEntity(189U);
    msg.setDestination(63881U);
    msg.setDestinationEntity(143U);
    msg.op = 199U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("OJVFOWLUIFPZKSDTCIIRGXVGDCBDUPVJPOTWJMMSLNZPPYXHJSYUULDIGONBTMGJQSGJFIKASLRFEDXXMCVZYOFIYOZLKXMEKQLSKUBXHUYQZQEJRAKA");
    tmp_msg_0.param.assign("YPNQRMUDTERFYGNXMSBVQKSMJTHUNVSUGZOBOXONAQZCLODJGDIPQPCRQUKDKLJDHQWSNFIFZSPITBQGTWIEYDYURUSDNFKUBHEBUJCWFVCNSZOAMXXTGYXCMMGCEFYWMLBFPLVDGXKACJTARQCJTNOQCXIZPKRZJPHZKWZWKISADNVADQYEYRIJWPLLOSLKUWHGFBROLWALHLUMEFPIZVTEIVJZIVEHJYWMKVBOVSBGYHRHTPCF");
    tmp_msg_0.value.assign("JXVYGFPVOFMQFRPIJUARZBQECYLFHZWJKOCVGKJDUTMIKOEGNCSPSEAKTRZVZDHQXOXGRDNAAZBKDCJXQNDOCQRNHNKEMNYGLHGLJYVKQTHWDZSILDVYRSNHFLUUQPPTTEIBAVVFYOWWGJECPLKFDKTEMKRAXFNDIBSBIRSEEGABXMGOCIBFWFB");
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
    msg.setTimeStamp(0.0904339808351);
    msg.setSource(30542U);
    msg.setSourceEntity(236U);
    msg.setDestination(16154U);
    msg.setDestinationEntity(159U);
    msg.op = 95U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("SAFMANPHRVACPNLPY");
    tmp_msg_0.param.assign("DNJMYZJARXVHDLWYUATJOIHRBHSAIEBGMDKOQJMMVRNNNRDNBEKAGLMKLFQYBANMRQDPCKXZECSTXBXNMQDKKGFMHVPLEHPOXFCRUVQMORHHSFDZGWUGWUYEKOITVIXUUFBSIZECSNKIBFJIJEDDEQJTWLYLTGNJVTAKALVCNHCXZQLOIAWXZYSCVDSKHZTSMOHPUPPOZQAPIWJFQQTUCSEIBTWGZBYUPFVEOJGRZGTXYBCV");
    tmp_msg_0.value.assign("NEQOMAWXTUGZFAAKDHJBJYAORQVJLRSMGLVUYTRNJGTAYJDHYHOCRMKKYNNSLZJHFXUCXBTWDPCBOQORJ");
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
    msg.setTimeStamp(0.452517686423);
    msg.setSource(45799U);
    msg.setSourceEntity(233U);
    msg.setDestination(52562U);
    msg.setDestinationEntity(191U);
    msg.op = 130U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("VGUEVUCPCWYDXPAXCGTREZOZFDWCQJSHRKFLTBHVLANACSPKHSSNNHJKOLMZGMVEIBCYHSZPGHIZLBATNKQYYGPZIJTHEIJFVIBDRXXORYYJJPRJCGOBSQNMWYUOQELXYRLRPMFFPRCKKAUDUENOWFVMSSDMROQYDDUKGTWHNAVZKIQXXSCMWAIJWPKOB");
    tmp_msg_0.param.assign("BFYTNGPSREFATCVWVFHOHVNWFKSBFLXTQIVWNAZXEJNQOHOSCYZYAENQLSLEKAQJYKBOZUAPGHWRUJQDKIKYNNACHGBPRVMAJZXOTQQOWBMOKBGCJGZEHFFXIJLRCYPPDUEIEJZRFLWUCCHVADNITMUKMKDIUTDVZYHTXLSDQTQOSWNQIRMPDPD");
    tmp_msg_0.value.assign("AKGFTEOPSAMLRFPSZVLWAVNRYTYXETDTCKLHPMAQJRRUKAFZZTUITTGXNYUYBIAZBXLPHRORQZBLYDSKSMZKXWGSVMMPNNWFGYDOHVEJWBUNAORQJGHUQBPAMUEVBWLSIQYBGMCDORGXJJXEXYJGFTNIIOKCSCOFNLIZKCHDDWVHDABXSHZLBQZFJQRIYQL");
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
    msg.setTimeStamp(0.873899004475);
    msg.setSource(49686U);
    msg.setSourceEntity(51U);
    msg.setDestination(27238U);
    msg.setDestinationEntity(176U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.366468842636);
    msg.setSource(33681U);
    msg.setSourceEntity(221U);
    msg.setDestination(795U);
    msg.setDestinationEntity(142U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.242628121164);
    msg.setSource(48229U);
    msg.setSourceEntity(134U);
    msg.setDestination(30988U);
    msg.setDestinationEntity(15U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.481841009746);
    msg.setSource(19574U);
    msg.setSourceEntity(191U);
    msg.setDestination(17367U);
    msg.setDestinationEntity(145U);
    msg.total_steps = 93U;
    msg.step_number = 239U;
    msg.step.assign("IIYUCOEDCHYHIBPSTFVLBADGBHDKYJASXIRDLCGWVTYPMIUQEHVFYRNIISTMAAVKCPQHCAJGUOZDJLKMJDQNTHIAFPNRVWDGSDMBAJVCUGYKKRIPFRTSJQESVJAWZNZQWTLQOERLKZJHMSFRTABOEZABGODCOLFPKBUSKMMVUOUFBHBCYCWCEXZFVQZOXWFXWBZNTMYEIUGUNNMPEJMOKLTQDYRNLZPRNRHOXSXLLYN");
    msg.flags = 15U;

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
    msg.setTimeStamp(0.35466592256);
    msg.setSource(7830U);
    msg.setSourceEntity(84U);
    msg.setDestination(17412U);
    msg.setDestinationEntity(25U);
    msg.total_steps = 135U;
    msg.step_number = 77U;
    msg.step.assign("OVRINGRZUKIPZXZHYFLAARJFFTSXNYXNOGTWQSDTCTQLNYIVYZOOEDKHJ");
    msg.flags = 113U;

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
    msg.setTimeStamp(0.322122680754);
    msg.setSource(40239U);
    msg.setSourceEntity(125U);
    msg.setDestination(27628U);
    msg.setDestinationEntity(144U);
    msg.total_steps = 4U;
    msg.step_number = 190U;
    msg.step.assign("TBJJSQULQCJUVRTTFNORMFUJNRCGXICFAPJLDDLGZVNEIKCGBAFKCMREBDSZTVTNYGYXGRVWAIEHNWBCESQUAOGWOWSPAAGVKOYIRRNGWAKBBLXDZPNIHBQRHFZXXUWAYDCEVQVPLT");
    msg.flags = 135U;

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
    msg.setTimeStamp(0.653459962083);
    msg.setSource(58504U);
    msg.setSourceEntity(119U);
    msg.setDestination(11182U);
    msg.setDestinationEntity(206U);
    msg.state = 64U;
    msg.error.assign("MTLGXFOOZERZZORYFAEISMLXMLMGPFCEDQADTZZKETVPXBUYVAQXELOWBKCTWFJLAUAEBIKRANNZSBLHGDIDXUQWYIJORQWDUWYDIPXOTCCPZUEFVIVHTRUHSNVLGWJMJCQYBKBDGCMZUPCVOTMRZUJYQPIFRGPHRAOQKPFLFPVWDRNNJTBXKSKHRQIVCBLTSKPHSMMYEAKGMYXJNQBKFVNABJAYHFCJDXQNNWWX");

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
    msg.setTimeStamp(0.223604226845);
    msg.setSource(49718U);
    msg.setSourceEntity(21U);
    msg.setDestination(6479U);
    msg.setDestinationEntity(57U);
    msg.state = 178U;
    msg.error.assign("HKXDGPEXWJGJNAZIYZPCTXEYUWLVXZXBO");

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
    msg.setTimeStamp(0.75031172821);
    msg.setSource(28409U);
    msg.setSourceEntity(249U);
    msg.setDestination(42900U);
    msg.setDestinationEntity(155U);
    msg.state = 113U;
    msg.error.assign("QQUQPBFAZQRDRBKVDCLNEYIYCKEBSGSOMXNKZGSOTVUFNGRZYQNZFCDBIFLZCPCYHHWRQGXTLXTRBHYVJZBNDPVBGMLKMFVZXIWMKXJTPVYMLIHQCISRNNDDHCKSAUTBMJAUMGWNPZXHYAYZTMPXETMEUEGFXGUVARMOOLCPWAAQFWUOXNTKIHODDLIAORVOLYWJJGWSWFWKDXRYPOETKNBUTOJEFSHIGUCLJS");

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
    msg.setTimeStamp(0.156667965041);
    msg.setSource(41697U);
    msg.setSourceEntity(159U);
    msg.setDestination(39273U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.999709547287;
    msg.lon = 0.0223582818048;
    msg.height = 0.618294437377;
    msg.x = 0.40751090729;
    msg.y = 0.252088040067;
    msg.z = 0.68304310518;
    msg.phi = 0.810367313206;
    msg.theta = 0.0517931214945;
    msg.psi = 0.396709239452;
    msg.u = 0.115959444224;
    msg.v = 0.949419832421;
    msg.w = 0.352638088653;
    msg.p = 0.409267519758;
    msg.q = 0.710118412337;
    msg.r = 0.998665148118;
    msg.svx = 0.0994269573715;
    msg.svy = 0.773048326745;
    msg.svz = 0.510697467266;

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
    msg.setTimeStamp(0.0568746553374);
    msg.setSource(47807U);
    msg.setSourceEntity(135U);
    msg.setDestination(62038U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.103798001051;
    msg.lon = 0.128238723371;
    msg.height = 0.229748308221;
    msg.x = 0.30923510376;
    msg.y = 0.0907112034838;
    msg.z = 0.862776830745;
    msg.phi = 0.616433448478;
    msg.theta = 0.516812021128;
    msg.psi = 0.973187961864;
    msg.u = 0.59264081261;
    msg.v = 0.660862507984;
    msg.w = 0.293787606693;
    msg.p = 0.985862717225;
    msg.q = 0.49545768747;
    msg.r = 0.379214881079;
    msg.svx = 0.126927740287;
    msg.svy = 0.955521054321;
    msg.svz = 0.752906573184;

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
    msg.setTimeStamp(0.751208804747);
    msg.setSource(48783U);
    msg.setSourceEntity(142U);
    msg.setDestination(15935U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.802515705245;
    msg.lon = 0.660014166441;
    msg.height = 0.344567676605;
    msg.x = 0.53097092451;
    msg.y = 0.635572351623;
    msg.z = 0.0247426565283;
    msg.phi = 0.132143959118;
    msg.theta = 0.327190436585;
    msg.psi = 0.351262165659;
    msg.u = 0.476660919448;
    msg.v = 0.00910690694882;
    msg.w = 0.897074414989;
    msg.p = 0.778745664366;
    msg.q = 0.104275104235;
    msg.r = 0.12216665596;
    msg.svx = 0.965909769489;
    msg.svy = 0.678834795341;
    msg.svz = 0.727733180352;

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
    msg.setTimeStamp(0.148100159948);
    msg.setSource(57033U);
    msg.setSourceEntity(84U);
    msg.setDestination(9611U);
    msg.setDestinationEntity(83U);
    msg.op = 32U;
    msg.entities.assign("NJSOGMRCGWEEUFSNWGIHHPATKBFFKKMAXOMTRVIQGAXPFAYCBOFGZZKSNAGSWAZHCNSMBPULSDPZDNLEJVQLEZWEYVDKFYUFETUXKDCNPBRBJLERQLVIGNCPHCOOIZLNBYJZHVHYJWKFOVKXJLUUMCMVDFUDUYSTPYDLHMOARXURERWPEOAANXYWODVHBICRVPRJGXTTMBYZSQJMGVSQNJIXR");

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
    msg.setTimeStamp(0.786788648061);
    msg.setSource(62454U);
    msg.setSourceEntity(57U);
    msg.setDestination(60294U);
    msg.setDestinationEntity(54U);
    msg.op = 127U;
    msg.entities.assign("ZDSHBIYJEVEJXMFKVCXGQKAXOIRBHBZXQZLEMNOPTHZJVBAMGDTWWXPMSIEFAXOJEVZYGJQCGPFUGKUTRRWUTXBJQRDGALSAWPTTLYNNDZYUREPHRQLYXZFCFJAYNTPJNG");

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
    msg.setTimeStamp(0.24425620473);
    msg.setSource(63027U);
    msg.setSourceEntity(173U);
    msg.setDestination(43672U);
    msg.setDestinationEntity(206U);
    msg.op = 116U;
    msg.entities.assign("ZMZJBLPEINNAWCRTIPFK");

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
    msg.setTimeStamp(0.274162913782);
    msg.setSource(2578U);
    msg.setSourceEntity(134U);
    msg.setDestination(22327U);
    msg.setDestinationEntity(30U);
    msg.type = 159U;
    msg.speed = 7587U;
    const char tmp_msg_0[] = {91, 59, -39, 57, -94, -61, -106, 113, -110, -106, 0, -9, -56, -55, 2, 126, 49, 3, -62, -71, 103, 18, 58, -73, 101, -25, -67, -52, -99, -26, 42, 25, -101, -92, 12, 83, -19, -20, 98, 75, -57, -126, 71, 21, 5, -30, -76, 63, 33, 35, -24, 37, 114, 24, -41, -21, 43, -101, -102, 73, 84, 71, -70, 84, -11, -46, -58, 125, -93, 38, -20, 73, -93, 46, -93, 86, 125, -43, 25, -4, -62, 83, 25, 49, -54, 32, -65, 105, -5, -89, -112, -49, -40, -118, -111, 49, 59, 104, 21, -113, -109, 37, -35, -93, 43, -34, -5, -45, -76, 67, -50, -81, 117, -100, -69, 68, -21, 48, -19, -101, 4, -34, 103, -35, -98, -100, 113, -111, 59, -62, -29, -125, 123, -18, 78, 54, -86, 53, -87, -121, 46, -37, -82, -95, 52, 126, -115, 34, -35, 67, -34, 3, 87, 119};
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
    msg.setTimeStamp(0.429384380877);
    msg.setSource(57778U);
    msg.setSourceEntity(89U);
    msg.setDestination(4985U);
    msg.setDestinationEntity(6U);
    msg.type = 206U;
    msg.speed = 32256U;
    const char tmp_msg_0[] = {15, 49, -57, -69, 105, 58, -56, -83, -56, -95, -105, -73, -73, -46, -63, -86, -30, 95, -74, -5, -117, 21, 14, 17, 54, 101, 28, -15, -70, -75, -42, -57, 82, 15, -39, -12, 75, 53, 74, 101, 44, 65, 76, -105, -78, 24, 95, -63, -116, -101, 13, -104, -104, -92, 46, -72, 102, 122, 70, -51, 126, -13, -127, 52, 7, 46, -36, 67, 126, -59, 0, 119, 84, -92, 78, -5, 6, -25, 35, 56, -98, -12, -82, -101, 110, -124, 126, -35, -68, 8, -64, 21, -43, 30, 46, 111, 103, -84, 117, 53};
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
    msg.setTimeStamp(0.322509883559);
    msg.setSource(1390U);
    msg.setSourceEntity(55U);
    msg.setDestination(2128U);
    msg.setDestinationEntity(98U);
    msg.type = 245U;
    msg.speed = 28895U;
    const char tmp_msg_0[] = {-51, 14, -32, -2, -86, -77, -6, 25, -107, -18, -11, 103, -23, -113, 33, -65, 106, 87, -22, -65, 75, -29, -87, -26, -51, 7, 115, -41, 106, -119, 77, -78, -32, -56, -19, -96, 74, -48, 26, -64, 28, 114, 85, -54, 30, 8, 3, -84, 106, -62, -103, -99, 86, 93, 2, 105, -106, 108, -93, 70, -17, -93, 108, 77, -54, 125, -45, 85, -53, -112, -94, 82, -12, 101, -33, 120, 107, 112, 82, -104, 59, -29, -75, -105, 118, 54, -69, 76, -127, -97, -98, -60, 109, -20, 117, -40, 78, -73, 104, 72, -48, -108, 56, -29, 109, 97, 66, -93, -69, -6, 112, 30, 65, 77, 18, 121, -123, -95, -53, 84};
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
    msg.setTimeStamp(0.832228092206);
    msg.setSource(13722U);
    msg.setSourceEntity(252U);
    msg.setDestination(64669U);
    msg.setDestinationEntity(224U);
    msg.available = 2584198556U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.326006125207);
    msg.setSource(9558U);
    msg.setSourceEntity(149U);
    msg.setDestination(31301U);
    msg.setDestinationEntity(146U);
    msg.available = 1548635250U;
    msg.value = 205U;

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
    msg.setTimeStamp(0.161563404382);
    msg.setSource(52308U);
    msg.setSourceEntity(2U);
    msg.setDestination(58101U);
    msg.setDestinationEntity(179U);
    msg.available = 579144216U;
    msg.value = 223U;

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
    msg.setTimeStamp(0.767857917518);
    msg.setSource(4084U);
    msg.setSourceEntity(139U);
    msg.setDestination(6937U);
    msg.setDestinationEntity(52U);
    msg.op = 198U;
    msg.snapshot.assign("RSCMMJTEKFXEJSDMMPPTLCUMCRECJSRGSEWTVNEZQYWPDFHWIWHDDOFSKOUYUCNQUKLDJGVBEUXPMVOVFBZNGSGXBKADQSADYHGAFRJBEUCASWXJZNJYCHRYALNSVDGFWMKIITBXYTNOFVLZOQYTOVNMPWNYLEHJIFXGHMGUVXFCKIZDQBHRKOXXECKAWZLAMBPPUWAQY");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 15636U;
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
    msg.setTimeStamp(0.828315228142);
    msg.setSource(53394U);
    msg.setSourceEntity(122U);
    msg.setDestination(29998U);
    msg.setDestinationEntity(222U);
    msg.op = 206U;
    msg.snapshot.assign("EAJZTLQBXDGWULCFACFXWVBMNARIZNTCARRHSSJZRMTFLBPXWCRSLUSDQIGFMOXGOVFTNCTMBSWTUVVKZHYQGGKFMUNWBHDYSHUCPHGIIDDXVVUDQIZOPXUTOLPKXPNAAXAIHJYBXZCSTYZCQLRBEEYRVJUOLSKZPHQJYQDELKHWNQFKOZVPBSWJGWUEIPYMONEYPCATBGAEYRNRJM");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.808123258088;
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
    msg.setTimeStamp(0.475939942341);
    msg.setSource(39992U);
    msg.setSourceEntity(166U);
    msg.setDestination(30672U);
    msg.setDestinationEntity(202U);
    msg.op = 22U;
    msg.snapshot.assign("OJYOIYRGOQKAYYEXDHUFAQPCDQECMMNHPJVABTIYEGZKXNAWSCDHYSWATKKMKBXYSGLCDMJQVNKJPWUAUXMBOHHQYFDIBURTUZPFHJTVACGZHVXCICRVEGNBKHUCXXOBLMDYQILIRTQRCUKIEUVZAGZSWFXBGMALTJUWFNFEQVEHC");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 625714138U;
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
    msg.setTimeStamp(0.867193852529);
    msg.setSource(48085U);
    msg.setSourceEntity(71U);
    msg.setDestination(22018U);
    msg.setDestinationEntity(186U);
    msg.op = 156U;
    msg.name.assign("YQRPQPXGUIMBVHKAKNZLDMCGJISDMHWXHUKVFBJAOTLMYBGFPIXQEDYDFUCPQSOSAOGUAPDABMMNASGSPLOVFFWQOZSNGBXLY");

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
    msg.setTimeStamp(0.957718872775);
    msg.setSource(37944U);
    msg.setSourceEntity(16U);
    msg.setDestination(9771U);
    msg.setDestinationEntity(150U);
    msg.op = 208U;
    msg.name.assign("FSQGZZYGRYZBNMSRRXZNYHBFQSEDNOCDLCUQDLQITPIVKYHNJTEOFNEKHOTWURHNXPRQOFVPJVXRTGUQGLBJWSMCSXCCUODUPAAEBXZTDNG");

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
    msg.setTimeStamp(0.275012556393);
    msg.setSource(30259U);
    msg.setSourceEntity(28U);
    msg.setDestination(11881U);
    msg.setDestinationEntity(139U);
    msg.op = 76U;
    msg.name.assign("MSFWZELBVFCQPBTDWPGWIYDHOHSRERKJRIEPDJNXODVNSSRWEHHEAZZLUWKVLTGNYTJCIQGRZHEEHBIGUMPZBPXJNYFBHOJXXOBWMBZUHBNLQFQTGVNEQSXYAUWTVQRYLPKGFCIJSZLCAGZCYYIZVDUTFLLRJAPNXSRMNOGOZNAOD");

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
    msg.setTimeStamp(0.132064132409);
    msg.setSource(46423U);
    msg.setSourceEntity(246U);
    msg.setDestination(18910U);
    msg.setDestinationEntity(185U);
    msg.type = 94U;
    msg.htime = 0.829113578087;
    msg.context.assign("NJLIEDNTWKGYKIPJENSBMHHAIKOCVPWIEXLQAKCATWFCWPDTRYFTINKNYAUHQKBFCUWIDKBFOCWXRXXDRGEJFJBBSNOPSLZOIMPMIVYEWVVTXGZVMFTWKLNLSGOHRCYXBUGESCAVQBATMHWEAPDZTNZCNMOJHLRJVSGOQFMMYGGBEHQTRA");
    msg.text.assign("WTLYZVEJIEUQXYCJOISWRSQBZBKMVHHJXWCWDFDDRWTKJBHXWULRGBNIGJNAFFSIXKVGTCLONIWTCBPPKUUIJPZUENHKSSZAKHARQTWTVXJZQLRPPCCFTBDXVNDRZQMRAEYULPYCGLU");

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
    msg.setTimeStamp(0.588141590041);
    msg.setSource(51077U);
    msg.setSourceEntity(173U);
    msg.setDestination(63640U);
    msg.setDestinationEntity(2U);
    msg.type = 233U;
    msg.htime = 0.561090965392;
    msg.context.assign("SYGIUEHGGJYWOWTHMPNKKRXIHACQZENRHPEXTPFHGDDYZRDGPWRXMYROQFDVMSANDIBLAGDKUMCEKSJKPJUWZZFYLQULXJYAETQNQMOJLHEEDNEQDNSIWUHTRUCPGOKMPDFCFCPXZJTWSOBJXZULIOVBHQFVCSKLFWSBMBZTBFIVFZVAAMZYLHALVCTDCVAXOYYKXKUBRKUACNOOLJVBQIYVTNLIXPICWNFRETZGMSGUAMEOBQIWNSWRJBHPSQ");
    msg.text.assign("VHINCLITZSYDCJSAEAFHPTHBPZBPSWSRWEGNOPCTCFKZBNACNQYUGMJCMZLOTNOYKXY");

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
    msg.setTimeStamp(0.237716730184);
    msg.setSource(49715U);
    msg.setSourceEntity(56U);
    msg.setDestination(286U);
    msg.setDestinationEntity(2U);
    msg.type = 80U;
    msg.htime = 0.308600018866;
    msg.context.assign("XRWHLHOBRCJXQLSEDDKFEKYBYMMIVFBFQEUSFWYHNTZYWMJZJLVYRIQJDPCQUWRYPVPHFNWGABRIPAZQJGYXAHKZNQAHIIGXSVXYWZKJCXTIJNSTMMZHFGVROOASHFRVPL");
    msg.text.assign("PFQCVMNPQCFBZYAKMDRNDWMFWHNQDFZPKGNDMMOYGGKDMOVSIHJARFUXXGWTCRULSWGBHOQDQJXVPZAMVKTOEVWEEYGAULWJAIXSLIPKDSIILHZKEUPLICFWRVUXTOKOQLZNMUZKYFREAFETPNTJMECVPBNWXOJXUOCVAJJSNKLCCFRAKDWEYS");

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
    msg.setTimeStamp(0.885847309281);
    msg.setSource(65332U);
    msg.setSourceEntity(218U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(111U);
    msg.command = 126U;
    msg.htime = 0.507701502538;

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
    msg.setTimeStamp(0.878497209895);
    msg.setSource(24330U);
    msg.setSourceEntity(47U);
    msg.setDestination(22000U);
    msg.setDestinationEntity(82U);
    msg.command = 131U;
    msg.htime = 0.242041628147;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 149U;
    tmp_msg_0.htime = 0.489737654417;
    tmp_msg_0.context.assign("DWEGDJDBZLNZIXYSOXJNSZBZSBJXGIBOFKREGEVZZVFSNNGBFVBQOEQRPVUDVQBHRGHUCLOGWIHDJDLYLSKMIAWKIVGHKUMC");
    tmp_msg_0.text.assign("HWHQSGGAYCDVOFGDTXLSXEQ");
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
    msg.setTimeStamp(0.294032994386);
    msg.setSource(50191U);
    msg.setSourceEntity(118U);
    msg.setDestination(60933U);
    msg.setDestinationEntity(111U);
    msg.command = 205U;
    msg.htime = 0.260857956909;

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
    msg.setTimeStamp(0.0887623377593);
    msg.setSource(5594U);
    msg.setSourceEntity(146U);
    msg.setDestination(1906U);
    msg.setDestinationEntity(7U);
    msg.op = 70U;
    msg.file.assign("ABAGKVOBGMDEIDHWYRTLQBEUJQYTNSGKWOBMDJBHZTOVJXXNLBSNDZTSNPBVVEGIEFNJDJJBGHOTVIZKRNLZPYFEDHGIUAFAAMXILPNZZAUUWCAHUUOYPLFQHOQXIGHWLLYUXSDYSOSSFFTDMWSNVQZUKGIXKCPVEPATCVIWBXHUXORAPGSEARHPSQQ");

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
    msg.setTimeStamp(0.661622594141);
    msg.setSource(30506U);
    msg.setSourceEntity(72U);
    msg.setDestination(41380U);
    msg.setDestinationEntity(240U);
    msg.op = 199U;
    msg.file.assign("QVHJOIRSOCFSUYLJGARVNWRXQDICZKXEXODGDXSFTDDAQSVURIHGCKEVFYKOJILSIDHQTBYDJKKMLECJMGZUHCFCXYVLAPIBVPUNOPLSERIBTPELJANUJXGOPWFZNYER");

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
    msg.setTimeStamp(0.999434971568);
    msg.setSource(47061U);
    msg.setSourceEntity(5U);
    msg.setDestination(43573U);
    msg.setDestinationEntity(28U);
    msg.op = 50U;
    msg.file.assign("RMMCWKAMLPZJXKCXSLPJJBPHCFHXUABVIEAZZGNCFYHUQDVDDEJCOKVKNJIFXFJRNOLRWVUUQYUUFIZBFAIWEYAVYWKWUUTRVMHHGDLZOOCOFNSZSMYLDQUKCETYS");

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
    msg.setTimeStamp(0.931031207961);
    msg.setSource(64658U);
    msg.setSourceEntity(151U);
    msg.setDestination(54827U);
    msg.setDestinationEntity(88U);
    msg.op = 227U;
    msg.clock = 0.193078639429;
    msg.tz = 121;

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
    msg.setTimeStamp(0.342271449774);
    msg.setSource(5025U);
    msg.setSourceEntity(27U);
    msg.setDestination(39370U);
    msg.setDestinationEntity(170U);
    msg.op = 56U;
    msg.clock = 0.472742815891;
    msg.tz = 24;

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
    msg.setTimeStamp(0.26718933091);
    msg.setSource(22072U);
    msg.setSourceEntity(33U);
    msg.setDestination(9102U);
    msg.setDestinationEntity(199U);
    msg.op = 97U;
    msg.clock = 0.42658061039;
    msg.tz = -109;

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
    msg.setTimeStamp(0.41041946589);
    msg.setSource(44334U);
    msg.setSourceEntity(97U);
    msg.setDestination(8715U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.877628827211);
    msg.setSource(1969U);
    msg.setSourceEntity(95U);
    msg.setDestination(38238U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.919283784561);
    msg.setSource(7908U);
    msg.setSourceEntity(11U);
    msg.setDestination(40706U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.117222729622);
    msg.setSource(33350U);
    msg.setSourceEntity(45U);
    msg.setDestination(17365U);
    msg.setDestinationEntity(182U);
    msg.sys_name.assign("YMPCRBMYOKPJFWTQTCRJURONSPLQSQSBGUGMFFZCTMSUOPXKVGURPDTIHWGAQRWULEXVMXYBNLXMBLWTAOSJVJZDKDLUPZXYGSNHFIHYDOZSZMQVNCNWODZIHJDPRHMEWVBPGMFZURKXGRKUNSZZHCIJGAVQDLLOGXYVCQETHDYJYBLXEGZEBWNAAAHEAEIWIDTMYAIEACPUWQEWQOSRFVKV");
    msg.sys_type = 177U;
    msg.owner = 41914U;
    msg.lat = 0.393917341827;
    msg.lon = 0.367927632698;
    msg.height = 0.422281013044;
    msg.services.assign("DORJMBCNPBBQHYGYVVGFPTTZWXKHSRNBKCZQGFQLESFKIMGYJSNITGDUENTSZLZADJJVEXWQVANWGLQOIHYTUKRCZSMVPCZUZUMCBLXKOXYIIJQRFALPGMIJOWXIUWQAOYUSUFHC");

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
    msg.setTimeStamp(0.412931678476);
    msg.setSource(20020U);
    msg.setSourceEntity(160U);
    msg.setDestination(26091U);
    msg.setDestinationEntity(110U);
    msg.sys_name.assign("SYEHXWLHZEX");
    msg.sys_type = 199U;
    msg.owner = 10453U;
    msg.lat = 0.374821221927;
    msg.lon = 0.947006578198;
    msg.height = 0.347732537091;
    msg.services.assign("BCGGFQHQWHZOKIAGMHUIYNFNCRSCOUPKLWROTACJPOLTCADFVVEFAXQZIBDPKSRVPJHYTWYMRZRBIWHUYJCBHAPGANLLYVLMXXRZERXNQBWCRBJNEJPKWVKKGTQJSUVMRGZJVQFZMEPLSOJZYLGDXAUBOCGBXVWQHIDCXESLWEHOGFLNQQFKMRAKDSTZSAG");

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
    msg.setTimeStamp(0.233664094991);
    msg.setSource(41410U);
    msg.setSourceEntity(191U);
    msg.setDestination(36252U);
    msg.setDestinationEntity(3U);
    msg.sys_name.assign("PRYAOJYLPNPRBXBJQHOZWYYHUQHXMAHKLWIXSSXAJYBZIQINWZTERTWGIAAAKGYTTMGMKNKTGSUEFIWRNUKCVLWJBXBGPFVXDFBAYHJAASDDGXGEDUWVKRBEFZQLKJIQHVCEZUGLZLRQNKIRPVEJIVSUJDQPTA");
    msg.sys_type = 83U;
    msg.owner = 60329U;
    msg.lat = 0.572206086224;
    msg.lon = 0.221348477313;
    msg.height = 0.103525691678;
    msg.services.assign("ZYILMQTKXPBXHQXXSGCZAHCLGOGSXXGXOCRBRVOBJETBFJGNYNPDNAUJQFASVQOCTAOUYTIGGYMLDBHIUZILMQRYKAZZLVWBDYERDIZDCJHIARZTNCDPSLBEEWUKVSXAJPWOUWQFNKEEARMRVBJWTFTUUJIDBOYPJPQMDDOFKKNPEMKRCITXILNMFCCQWRHVAPWVF");

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
    msg.setTimeStamp(0.454915002765);
    msg.setSource(17854U);
    msg.setSourceEntity(28U);
    msg.setDestination(7136U);
    msg.setDestinationEntity(133U);
    msg.service.assign("TWDRIBVZSITCEQCUCEMGUMYOFCAUCUSWDDFUOVGPEHHLTVXMONMARLQUAYYZHBPQSPTXVEZTTYFRUVQXGJEEOHSENIZBMWBMJREJOXCURBQPPLFTKCJAYITFNRHTGONADFNIPIROSAVWV");
    msg.service_type = 153U;

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
    msg.setTimeStamp(0.163700281495);
    msg.setSource(47936U);
    msg.setSourceEntity(8U);
    msg.setDestination(9961U);
    msg.setDestinationEntity(63U);
    msg.service.assign("TMMIPFYQWRXQBQIIQZLHFDZNRDPGSUAKUHZXCJS");
    msg.service_type = 244U;

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
    msg.setTimeStamp(0.0445773281066);
    msg.setSource(48945U);
    msg.setSourceEntity(89U);
    msg.setDestination(58113U);
    msg.setDestinationEntity(81U);
    msg.service.assign("JKLWHRNUOOOCTICQFLMPKQHWAJAYWDHCTMTHHGBFINYRSCLFQDNBNPZVLIWAQYFVVAMWKEXFPEXSGVBJSBKUVMAJISGSJWMJRDTIVZOQWBGXDURNZEYLHDEJZVATOMIFTWVLIUJMRLYWMACNJDSQVUNUPNNLGEADAUPFZXXBXHRRSICCTKYZRGEZCOEKDNIGZXPUWLAOFBPFBOOQESMPYHQXCZXDGUXGPCHKPVSEKYRSBKYGTORUKQTHBQLZ");
    msg.service_type = 233U;

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
    msg.setTimeStamp(0.291610278865);
    msg.setSource(4851U);
    msg.setSourceEntity(196U);
    msg.setDestination(19304U);
    msg.setDestinationEntity(24U);
    msg.value = 0.861425780655;

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
    msg.setTimeStamp(0.275983057644);
    msg.setSource(6682U);
    msg.setSourceEntity(242U);
    msg.setDestination(19363U);
    msg.setDestinationEntity(253U);
    msg.value = 0.277898195317;

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
    msg.setTimeStamp(0.443913867951);
    msg.setSource(63972U);
    msg.setSourceEntity(9U);
    msg.setDestination(15881U);
    msg.setDestinationEntity(137U);
    msg.value = 0.778676894112;

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
    msg.setTimeStamp(0.581303362763);
    msg.setSource(53544U);
    msg.setSourceEntity(169U);
    msg.setDestination(59427U);
    msg.setDestinationEntity(124U);
    msg.value = 0.121633720888;

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
    msg.setTimeStamp(0.421295886169);
    msg.setSource(25268U);
    msg.setSourceEntity(144U);
    msg.setDestination(37436U);
    msg.setDestinationEntity(51U);
    msg.value = 0.274009567517;

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
    msg.setTimeStamp(0.0837524233993);
    msg.setSource(45707U);
    msg.setSourceEntity(198U);
    msg.setDestination(32735U);
    msg.setDestinationEntity(47U);
    msg.value = 0.945629894376;

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
    msg.setTimeStamp(0.397120214983);
    msg.setSource(60835U);
    msg.setSourceEntity(213U);
    msg.setDestination(21505U);
    msg.setDestinationEntity(171U);
    msg.value = 0.741632745757;

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
    msg.setTimeStamp(0.042709551319);
    msg.setSource(30551U);
    msg.setSourceEntity(234U);
    msg.setDestination(36547U);
    msg.setDestinationEntity(111U);
    msg.value = 0.280147181408;

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
    msg.setTimeStamp(0.874762696885);
    msg.setSource(41322U);
    msg.setSourceEntity(102U);
    msg.setDestination(9762U);
    msg.setDestinationEntity(239U);
    msg.value = 0.435564714603;

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
    msg.setTimeStamp(0.121674353684);
    msg.setSource(19069U);
    msg.setSourceEntity(119U);
    msg.setDestination(50236U);
    msg.setDestinationEntity(244U);
    msg.number.assign("VJCKHHPOIAIGQASVROUAPUGUDVEMXAASACFUMDDYTFQEEXZMGJZNBDCVIQWNNEKJMUVLSDCCRSJAHZFWCIFZZFJYQVMNKDHOBYLIXGVTABCGCBKOITYBGDOTDLOGZQPGQRYNZTHLBSMHKWONMKLMHQBWCZ");
    msg.timeout = 33181U;
    msg.contents.assign("NBQPBRXUSIUAQJPUYALLJDYYPVJQDZSFFSKBGLWOKPFVVJSVVDAUZIMMYGTSVPZHAACXPTFECMNKOXIVTQGJMQANLTOWNUCJBCHXYJDGEGPIFCXAXYFLRVMGRCEDGZODLNUUKEGYCLCOMDZLJAVSOERZNIHZJODRGHTNQFIMZHBTHBYKPWDRPOHFED");

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
    msg.setTimeStamp(0.200383647764);
    msg.setSource(57544U);
    msg.setSourceEntity(81U);
    msg.setDestination(25415U);
    msg.setDestinationEntity(120U);
    msg.number.assign("UTMKEYABTKLRBRQIOAFDEQQYILTDZNUIAFSMVPGPCFYLQXACVLPRUXZSPFFPXMVWNNUBRXFJGPYHLJNKNOTQWRWCSBDZZIKOSAVOEUHAKCNMRGSJVWNRHHRSJTMODEDYDBYEYIATZGNHQHWPTCXCVBVHQWLEKTSDQHWSPRXYJGCGHUCQEUJQIBMKMZNAEFJIEMXOLBMRBDWXFSOSLUDLUCUIIWJOOCFXDNXVHEZ");
    msg.timeout = 32734U;
    msg.contents.assign("XSBWPHAIERRQQDHWWCFOVOOLJYWTPTBGXMGPWHAMNXATABWDPLPVYIIKSDZXHMOKFVLFYATMEAYGBYFDIQWPLXUECQJJHMRSQUSPUICLVNRUBOTUBNVEZHURHTVQZZFGNMTZOHSNVWKJXTFRXINKLRLLNRQGUHEGEJPEUBFGZIFJCWKRWKSVBXSLQAPMO");

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
    msg.setTimeStamp(0.450072004059);
    msg.setSource(14656U);
    msg.setSourceEntity(65U);
    msg.setDestination(56454U);
    msg.setDestinationEntity(118U);
    msg.number.assign("IVAJOJXYKALSTMPAZDZDJLOCWGFOHXZKPTIYKDWTEBQVIYRQKTYLMEICXWAMVZXFINUVQVSEBUTTIUELHTRNBWHFUMSPDGNCBQZPPGCLDEIXLOMNAKFDEISKFDZNFPXHUYVVGGWOGOVBQSRHXKOAWYXLMZRVBLSDHVYKSQMYGTCRNOBJHJUAJYCZC");
    msg.timeout = 28807U;
    msg.contents.assign("ODBJCKNWTPAFUSMRLKYAWIWTHLXPZMAQOCRKEDGOBKKFODTZDBJJMWZKUWPTXYPZPYFWALUDCBMBDACEHUZLVMMMLKAABQQFSLHNYYQIGVSVNGGEYFHEAVCOONRJBIVGJABMRWHVGLTCTVYISZIRVMHCIDQVNXIOIEYESXRTGMPPZPHPQJECRULSYTTGNFROKFKHQLJNESJIXXCWYQBUGJHWXOQXENBLCZDFAENU");

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
    msg.setTimeStamp(0.304190677868);
    msg.setSource(64220U);
    msg.setSourceEntity(71U);
    msg.setDestination(24378U);
    msg.setDestinationEntity(238U);
    msg.seq = 2990064852U;
    msg.destination.assign("GFTORMYTJIMHYBUQEDXBGBURGPFAOXLEHBBQWUPEWEJCHNOPU");
    msg.timeout = 27072U;
    const char tmp_msg_0[] = {-54, -120, -99, 90, 123, 59, -18, 40, -113, -36, -7, -108, 122, -27, 106, 121, 117, -4, 19, -51, 104, -73, 11, -32, 75, 74, -27};
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
    msg.setTimeStamp(0.419961532191);
    msg.setSource(29176U);
    msg.setSourceEntity(96U);
    msg.setDestination(39483U);
    msg.setDestinationEntity(6U);
    msg.seq = 631220391U;
    msg.destination.assign("TOMAYODDZXXQWHTACQLQYXERURURXGHRNCTEXXFUSPYLLDSZMXDZNZMKSEVYLCDHUAEAQYRCIWSJYZFCUIWAPSMDWTKBMKTBOKPSEOXWXBTVCYDNPLEZKWRPLFHQNNBJNLORWWEUNRWGFFTDIPKYHCTBBJSMHVGV");
    msg.timeout = 23462U;
    const char tmp_msg_0[] = {100, -45, 101, -8, 47, -17, -49, 1, 14, 68, 74, -11, -26, 18, 7, -119, -110, -8, 70, 30, -104, 65, 9, 85, -125, 52, 117, 58, 3, 104, 14, -86, -27, -31, -81, -111, -70, -118, -48, 63, -19, -9, 52, -34, -38, -125, 46, 95, 4, -56, 51, -14, 96, -118, 124, -110, -52, -126, 90, -58, -66, -116, -69, 86, 50, -11, -77, -88, -95, 0, -47, -126, -52, -97, -124, -63, 25, -78, 18, 17, -114, -128, -80, 60, -109, -44, -5, -80, -21, -126, -110, -103, -4, -127, -20, 111, -104, -13, -51, -11, 50, 94, 51, 98, 84, -128, -55, -106, 37, 104, -68, 1, 7, 0, -81, -89, 111, -106, 38, 79, -27, -6, 13, 26, -114, 24, 14, -49, -10, -100, 1, -10, -84, -96, -51, -60, -126, -9, -2, -109, 87, 27, 89, 122};
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
    msg.setTimeStamp(0.0813511427896);
    msg.setSource(59272U);
    msg.setSourceEntity(184U);
    msg.setDestination(62843U);
    msg.setDestinationEntity(247U);
    msg.seq = 689027252U;
    msg.destination.assign("KETKNLPMHFFSHMIZHQGWPUNBVQY");
    msg.timeout = 61460U;
    const char tmp_msg_0[] = {125, -19, 79, 112, -59, -68, -41, -56, -11, -58, -28, 57, -29, 68, 62, -1, -108, -18, -124, -51, -120, -125, -87, 109, 16, 15, 112, 83, 49, -29, -91, -14, 126, -32, -65, 33, -119, 55, -98, 32, -57, 116, -47, -68, 2, 104, 117, -34, 97};
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
    msg.setTimeStamp(0.000557141796923);
    msg.setSource(35939U);
    msg.setSourceEntity(176U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(238U);
    msg.source.assign("EASXTYJTKGQCURRLBDHXFZPXOULOJAQLGWDRUVBVRPVWXTJPSCQENNVMLIROVYJTAPDMCCDDWHYDEGUZAIJMWWBUSJOKXNQGEWFDLSRNNEPBBQNQMGFKSOZVJKYFNXKZIWXXRSKIXTPIHZFHCUZZBOHLHRELUYCYUITZHVSPZLWAOFTHTKBGDDDVGBVMGAUOPIBNE");
    const char tmp_msg_0[] = {-38, -63, -101, 48, 11, 102, 88, -44, -108, -58, -37, 37, -83, -125, 13, -81, 30, 76, -38, 32, 96, 67, 63, 55, 22, 49, 114, -116, 123, 92, 69, 1, -6, 89, -18, -96, 5, -91, 94, -65, -97, -127, -96, -116, 14, -42, 12, 122, 72, -14, 39, 123, -22, -70, 109, 67, -55, -69, -70, 48, -51, -58, 16, 21, -14, 18, 67, -41, 77, -85, 99, 91, -83, -81, 62, -14, 118, 95, 99, 71, 108, -64, -84, 43, -39, -4, 116, 1, 85, -112, -14, -29, -6, 13, -84, 50, -107, -91, 47, 0, -5, 100, 125, -98, 67};
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
    msg.setTimeStamp(0.0270516462348);
    msg.setSource(19324U);
    msg.setSourceEntity(164U);
    msg.setDestination(3350U);
    msg.setDestinationEntity(147U);
    msg.source.assign("TZKSZFIVEKQLMIYSLUBOLCJNZXSZASHXUAJQOPFWTJLDRYKJVHHAX");
    const char tmp_msg_0[] = {-125, 22, 6, -106, -39, -41, -107, -106, 38, -17, -115, -34, 86, 36, 88, -8, 35, 90, -60, 67, -85, -24, -25, -124, 87, -66, -96, 39, 122, 27, 66, 0, 102, -26, 91, -128, 94, -34, 104, 15, -92, -66, -117, -64, 106};
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
    msg.setTimeStamp(0.825381558339);
    msg.setSource(37923U);
    msg.setSourceEntity(127U);
    msg.setDestination(9050U);
    msg.setDestinationEntity(67U);
    msg.source.assign("NTFYNVNJVDAWTMSYVLYPSDGRMHUIXFBVVPQBLRXBFTSAHPIFCVUKOXSYJRIHUEIAGOQOCAGKSWMOXCUQOKUMLIEBNOAJERLKXBEZE");
    const char tmp_msg_0[] = {-124, -107, -14, 0, -21, -99, 16, -70, 33, 107, -91, 76, -123, 112, 119, -88, -20, -111, 78, 117, 21, -44, 36, -24, -115, 27, -123, 24, -42, 10, -119, -115, 63, -96, 78, 17, -126, -10, 84, -14, 115, 21, -104, 42, -63, -41, -66, -12, -60, 40, 26, -50, -125, -111, 104, -92, -49, 121, -98, 68, -17, 65, 51, -23, -71, 88, 60, -122, 21, -39, -90, 5, 86, 9, 88, 18, 99, 95, -58, 62, -6, 18, -122, 4, 88, -42, -85, -40, 18, 98, -58, 125, 103, -116, 52, -101, -38, -61, -115, 23, 8, 104, -63, 41, -87, -112, -100, 85, 73, 103, -108, -103, 105, 72, -43, -95, -91, 92, -36, 116, -40, -1, -38, -60, -15, -103, 82, 78, 125, 119, -79, -92, 56, 85, 10, -95, -123, 52, -81, 89, -67, 20, 70, -85, 99, -84, 89, 65, 116, 107, 96, 85, 97, 109, -7, -74, 13, -26, -108, -107, 119, -105, 36, 61, -44, 54, -115, 105, -40, -72, 75, 107, 8, 121, 55, 49, -27, 64, -8, 44, -98, -123, 24, -113, -107, -85, 27, -52, -105, 101, -35, -96, -19, -111, -127, -20, 27, 77, 40, 10, 92, 98};
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
    msg.setTimeStamp(0.613054019367);
    msg.setSource(65532U);
    msg.setSourceEntity(192U);
    msg.setDestination(30533U);
    msg.setDestinationEntity(93U);
    msg.seq = 636437691U;
    msg.state = 98U;
    msg.error.assign("JSLADYLLDPMFTMSKKBYOE");

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
    msg.setTimeStamp(0.641017242779);
    msg.setSource(41210U);
    msg.setSourceEntity(97U);
    msg.setDestination(10207U);
    msg.setDestinationEntity(59U);
    msg.seq = 4131708818U;
    msg.state = 120U;
    msg.error.assign("JUIKCKVGSKNEEFYGZTGPUADUUHQZVLEXEURDEKQTCCWTVMBOROHITHQEFBLVGIAKZDISJXZDXBKMPFFRAYTNHYHXFIALBHWIZJWPFAGPUOPUHWCMFNDREBLQOPJQPHEFZKOOAATQBSRPQJUYNVZIWYMNCQMIXCVEKHBTGJRCDOFTNNKJOLXWSIYAELLJWPJSXVBYTBXNZZXDJPMWLYBQSSDUROGMQSXAVRSZMCSVGMGAYCTVLUCIWHN");

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
    msg.setTimeStamp(0.501664211126);
    msg.setSource(20872U);
    msg.setSourceEntity(246U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(246U);
    msg.seq = 3919202710U;
    msg.state = 88U;
    msg.error.assign("YQNENRTIQVMZAPQVILLXNYFHTOP");

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
    msg.setTimeStamp(0.987283749934);
    msg.setSource(57727U);
    msg.setSourceEntity(161U);
    msg.setDestination(10253U);
    msg.setDestinationEntity(19U);
    msg.origin.assign("YNMGDXWNOQVVQPGYCHUHTPRDJYJINMFREXJKLLXCNQEWRZQRHBQGYGMUSTHPGRPLYSGVCWAUPLIDCEODWTWIFZLTYRUSBMMPOJXKMXXDV");
    msg.text.assign("QJHYHFCGHBHTWSWEDUAARUJGQOJDSUYMAILGLPTFLBEKYHBRPERGRSZWZYSCNDOQGJHPDVSQCIZFLS");

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
    msg.setTimeStamp(0.0607104843939);
    msg.setSource(51371U);
    msg.setSourceEntity(163U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(10U);
    msg.origin.assign("RBELYDXHMQZSUZMUBAOHOPJDFCYCKJNFKQQFYZVVDYWAAQLKEUUGMLVEFYIWHWXSQOCXVBJCLDSBIGMNXADVWFNDBQSVYGITHWOZSGHFZJIKAZIOGQBAOOPONHITAXWRMUNFCXKPWUZDFJKUJFRVKUBGPNPCMJPTTYXGLODJSRIIENKSQORVPEHTASBMLJITGR");
    msg.text.assign("JMOHBVTRXSJSYENERAKZGKIQTSOJYIZFSGJLCXNPVNMMZVQRX");

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
    msg.setTimeStamp(0.588793973282);
    msg.setSource(60337U);
    msg.setSourceEntity(145U);
    msg.setDestination(37323U);
    msg.setDestinationEntity(14U);
    msg.origin.assign("GJKASTPMLUMJBJJAXFLLUKDVYCWJLEBLVKNDMROCSXOQAOTUTHROVSZUYIIRBOJLPMMXTHMULIFQAYRDFNNBJINGKFVFIJUDKTCESNOPFQXEHJXYWCPPHLGWNAIGZ");
    msg.text.assign("QRQDGJAIURMBNBSZHXYFLURWUSQLTQXIUFPETYEBKXQTWEHHITOQKHOTMNMFYOTALGMBYZHAKRBVUNOVZESADVHIERIDCJYXKAKHPVOLQZASJYUENJVCXEJKEECFDWXWNMBRCRXXGDHMJFZJCMFCAZUIPCGYKYAOOZNOFPRXPGGCWTYKQFICFPRVLZPSWFJJCQDVZONSGNLASUGWVZWVWNTDSLPGPUDBNAS");

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
    msg.setTimeStamp(0.654009029485);
    msg.setSource(17619U);
    msg.setSourceEntity(137U);
    msg.setDestination(52777U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("DDQIQHPHMKAEECHBTTYGSVDLRILEJWUPHNUGVAKNOFFVAFWIGIAZFLQPBZUPXGMUAFVVUBWMLRIJZZXRSIJFJKKMEJNRQBCUONKTWDWCKTCTMQYOHKCFVSOQBVXRMJDQGUCWZEHXATELYRTDCMFPSNWXNHYLPZEUUWAESOPCXB");
    msg.htime = 0.697415428043;
    msg.lat = 0.65798990557;
    msg.lon = 0.713192054786;
    const char tmp_msg_0[] = {-121, 30, 120, 95, 90, -99, 103, -121, 121, 123, -19, 114, 43, -25, -21, -78, -3, -121, 99, 57, 21, -101, -29, 55, 124, -25, 120, -52, 106, -38, 44, -90, 103, -69, 12, -39, 74, -81, -2, -55, -81, -92, 54, -61, 125, 81, -30, -43, 25, 108, -74, -106, -27, -77, 14, -95, 63};
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
    msg.setTimeStamp(0.845819187635);
    msg.setSource(6362U);
    msg.setSourceEntity(63U);
    msg.setDestination(16149U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("VXPSHCRUGL");
    msg.htime = 0.973218594643;
    msg.lat = 0.756953215042;
    msg.lon = 0.693523142517;
    const char tmp_msg_0[] = {25, 68, -19, 99, 98, 71, 119, -65, 126, 43, -26, 101, -114, -47, 67, 88, -90, -105, 47, 80, -104, 106, 12, -4, -43, 110, 72, 19, -106, 87, -119, -2, 46, 55, -68, 93, 5, 96, 40, 7, 103, 98, -30, -97, 69, -17, 122, -117, 15};
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
    msg.setTimeStamp(0.215597101365);
    msg.setSource(51583U);
    msg.setSourceEntity(59U);
    msg.setDestination(23566U);
    msg.setDestinationEntity(124U);
    msg.origin.assign("IQJJXSTTOPZKEYHDPGPSRKKRHHMAKNWUTXMYEIWZVRBZQFJVEHTJNQDLCBTRAVDDJGPWSQYCMUVGOZYNWLGMAGRFLXUSWQHABJCRVKQEXFYUOXDUNNIGYIGZAXZAGOTLPBOFXKOBYQSCCXWRVGRKVWBEBDFZJFVPONOCMMLFAZLBKSNTOSMCHIOPICJCLQSFJFMTZPUWQZPNLAEISVRRKTHYDUKQPILEVB");
    msg.htime = 0.613324568259;
    msg.lat = 0.948425625867;
    msg.lon = 0.0559207950462;
    const char tmp_msg_0[] = {-89, 104, 81, 103, -37, 6, -71, -43, -123, 35, -123, -72, -64, -90, -101, -24, -114, -15, -66, -57, 122, 100, 91, -21, -14, 90, -36, -13, -127, -90, -57, -89, -81, -37, 112, 72, 15, 31, 125, -46, -89, -100, -112, -44, -121, -40, 36, -35, -20, 6, -90, 76, -16, 120, 102, -111, 70, 110, -112, 41, 116, -74, 12, 107, 22, 48, 91, -49, -17, 40, -2, -68, 63, 18, -102, -111, 40, 60, 56, -42, 74, 2, 61, 54, 34, -81, -35, 28, -12, 28, -16, 30, -99, -83, -46, -74, -20, 13, 4, 6, 65, 99, 107, -87, 85, -23, 109, -113, -64, -27, 66, 12, -114, -122, 74, 80, 105, -112, -44, -125, 23, 91, -84, 54, 65, 76, 105, 30, -38, -29, 28, 103, -52, 13, 98, -48, -89, -29, 115, 44, 99, 56, -72, -96, -92, -92, 4, 59, 50, -8, -34, 4, -5, -75, 1, -80, 88, 109, -38, 76, -48, 58, 23, 24, -92, -99};
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
    msg.setTimeStamp(0.293133488824);
    msg.setSource(57897U);
    msg.setSourceEntity(13U);
    msg.setDestination(45490U);
    msg.setDestinationEntity(46U);
    msg.req_id = 14360U;
    msg.ttl = 1423U;
    msg.destination.assign("IBUONHZIFFKYYAPPNUFFRJPJSCNEULLVDZMHTELJOQAGGSZGTGLTPANMYHJLWDFZDBTXCBHAWRGNLFIHMTZFEOBVDRBDSMKALKCZQMVQKJTJTGQTVUGQGUJCRQREWXVDKWJYKOAACEEUSSXFREBKSTVXYMBRCHIECZPBVQ");
    const char tmp_msg_0[] = {32, -116, -5, -41, -54, -108, -49, 107, 119, 82, -105, -71, -1, -96, 67, -120, 100, 40, -28, -70, 119, 99, -8, 44, -88, -4, 39, 14, 47, 32, -107, -78, 104, 33, 68, 84, -34, -114, -52, -97, -70, -98, -121, -30, -108, 69, -116, 46, -83, 112, 27, -90, -70, -118, -19, 3, 64, 78, -34, -10, 47, 8, -12, 84, 13, -103, -75, 5, -50, 78, -58, 59, 30, -31, -20, -34, -26, 13, 14, 33, 0, 49, 17, -102, -119, 34, 25, -125, -27, 125, 120, 26, -46, 99, 48, 94, 86, 4, 126, 20, 66, -35, 102, 103, 96, 67, -103, -47, 52, -11, -126, -68, 45, -117, -23, 93, -20, -12, 115, -54, -19, 71, 115, 114, 101, -98, 51, 123, 9, 12, -52, 29, -42, -89, 10, -19, -35, 70, 50, -106, 116, -66, -62, 69, -93, -72, -41, 21, 26, 100, 30, 19, 28, 47, -37, -101, 66, -63, -24, 113, -75, -80, -127, 116, -11, -55, 91, -1, -25, -51, 7, 116, 28, -32, 76, -75, 5, -96, 3, 50, 117, 82, 34, 39, 103, -31, 70, 97, -127, -97, 46, 121, -105, 38, -18, -98, 37, 66, -7, 4, -72, -95, -17, 61, 105, 51, -7, -57, -125, -80, 84, 67, -2, -105, 89, -102, 40, 94, 13, -37, -124, -21, -71, -21, -14, 107, -7, 4, -60, 101, 34, -40, 123, -21, -108, -48, 20, -34, 114, 71, 33, -103, -89, -66, 121, -93, 94, 22};
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
    msg.setTimeStamp(0.561983393377);
    msg.setSource(54009U);
    msg.setSourceEntity(173U);
    msg.setDestination(38593U);
    msg.setDestinationEntity(143U);
    msg.req_id = 50127U;
    msg.ttl = 1414U;
    msg.destination.assign("VZSVEOQVFCHYDZTBUWSJUEQDMXMJJYJJWEOXAKBLVYLWNZLGNBKPOUDHAGAIIIKSEPSPGRNRYJTJNFBPATFAIGASNXWSBNAGRMFLQXZZWLORBMVHIIZUNBVHXBKOOHLWIKVDCRIXCZPOAGTNPPQKZKAXDPYE");
    const char tmp_msg_0[] = {-82, -127, 85, -119, 77, 72, -27, -23, 11, 97, 69, -84, -12, -11, -42, 119, -8, 113, -113, 126, -74, 80, 3, 46, -45, 35, 122, -120, -110, -77, 59, -107, -120, 58, 29, -121, 4, -128, -13, 42, -101, -101, -25, 87, 109, 57, -32, 13, 125, 118, -70, -6, -117, 79, 15, 49, -45, -30, -30, -107, 63, 33, -125, -100, 45, -40, 45, 35, -115, 11, -5, 63, 54, -114, 13, -93, 29, -65, -104, 4, 68, 108, -84, -90, -122, -57, 20, -47, -14, 111, 94, -80, 81, 23, 49, 109, -41, -34, -29, 112, -57, -21, 81, -91, 79, -113, 89, 61, -77, 52, -28, -18, 59, 57, 113, -79, -47, 1, -40, -113, 53, -116, -11, 67, -42, 99, -24, -128, 37, 38, -32, -115, 3, -62, 50, -19, 2, -77, 21, 82, -71, -40, -19, -51, 31, -69, 1, -1, -72, 5, -73, -117, -65, -17, 1, 53, -9, 104, 38, 25, -68, 105, -64, -1, 44, -119, 30, -56, -8, -10, -25, 10, -13, -10, 18, -110, -3, -99, 29, 19, -54, -119, -7, -89, 103, -87, -41, 74, -78, -32, -29, -86, -91, -41, -122, 95, 114, 33, -80, 125, -61, -77, 65, -53, -30, -65, -7, 26, -102, -86, 61, -96, -125, 53, 4, 121, 86, -39, 53, 47, -122, 94, -24, -114, -41, 102, -81, 90, 104, -28, 55, -90, -105, 62, -92, -42, 31, 77, 106, 68, -26, 23, -79, 13, 56};
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
    msg.setTimeStamp(0.570594299619);
    msg.setSource(2482U);
    msg.setSourceEntity(105U);
    msg.setDestination(48926U);
    msg.setDestinationEntity(126U);
    msg.req_id = 19915U;
    msg.ttl = 525U;
    msg.destination.assign("RFWAXBCTLFQITHHTNJSMPTASAWJFFUVSPRNJEWAMHOJXQYFREZXDQSLPLNEGDMCVXQUDWMUPVSMJKHRSVGDSGNHPYLVQDOXUIIPJBVYCCLZDEKLWSOFYQNGGZAKFYCMRAZLCABVEBUCHETJGNQNOGTPDWZKJHBX");
    const char tmp_msg_0[] = {-99, 83, 51, 94, -12, 120, -46, -124, -118, 113, 24, -69, -97, 30, 119, 5, -44, 95, 45, -5, 98, 72, -22, -60, 102, 51, 18, 13, -95, 89, -128, -13, 116, 38, -85, 5, 74, 14, 44, -40, -22, 74, 10, 15};
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
    msg.setTimeStamp(0.267383520536);
    msg.setSource(45492U);
    msg.setSourceEntity(64U);
    msg.setDestination(58603U);
    msg.setDestinationEntity(173U);
    msg.req_id = 13768U;
    msg.status = 41U;
    msg.text.assign("XUWOAMNXRZIMEMBFDVJLIGBZVDLAGXIYOFDVWUBPNLDUEYJIQGSPCOYTPFNHNOFCHZBIHBMZRJYOXEWIASAPWUVSGSZMQBWPHZRCAWCFHXLDLRTKDQNPWNFYLPZLEHIRKFMQBXNKPRXTHXQXWELUKQCHDOJCKGGBVCTTZRYKEOAURQENHOCJEL");

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
    msg.setTimeStamp(0.321860782824);
    msg.setSource(36315U);
    msg.setSourceEntity(17U);
    msg.setDestination(11366U);
    msg.setDestinationEntity(145U);
    msg.req_id = 11767U;
    msg.status = 138U;
    msg.text.assign("HMWNKNFWRIGWBELCOVJRMKKJGGFCMMQSQZVRMATJLRCRSGXLXPOIBAUKYJUQNUARUYZEXSZMDHOYAQWPDPBZHNFOUPDSFVJTESOGQOIISJKZOFQXZJHHLDYGZWDBPTCVPNTTYZFEBBJPFPRLLEHBALWOOWVAYFCFKXABTRYIWUDQVGKUWPVZDOEUECELMJEDMYKCXPVVMLICBNIGITCTHQTSGNYYKNXEQCFKRMIJSXIRQNTZXNADG");

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
    msg.setTimeStamp(0.805692673931);
    msg.setSource(18257U);
    msg.setSourceEntity(144U);
    msg.setDestination(1968U);
    msg.setDestinationEntity(82U);
    msg.req_id = 26367U;
    msg.status = 142U;
    msg.text.assign("VZVOFQQMULJQTFSNKFYLTVCJYHDYEHZTARVETRDZXIOOOEUXCJJFNYSXFTQWGGTDEVPXBLEZYKEKCBPUJYXYCBQOKZPOHRZWPKBCAQEWLNMJXRJVXDWSDGKJKSLXVBDBPOWIUQQOGAGUGNXWIFATLEKWCIFPKAGRLIEUSCLQQNVMRUUDVYMGPGWBAHUHSFZSMSICDMH");

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
    msg.setTimeStamp(0.775654660931);
    msg.setSource(35695U);
    msg.setSourceEntity(243U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(22U);
    msg.id = 206U;
    msg.range = 0.232701614302;

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
    msg.setTimeStamp(0.070285732718);
    msg.setSource(13060U);
    msg.setSourceEntity(241U);
    msg.setDestination(40835U);
    msg.setDestinationEntity(237U);
    msg.id = 168U;
    msg.range = 0.443306106516;

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
    msg.setTimeStamp(0.464235604032);
    msg.setSource(11027U);
    msg.setSourceEntity(175U);
    msg.setDestination(47887U);
    msg.setDestinationEntity(57U);
    msg.id = 165U;
    msg.range = 0.874164056257;

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
    msg.setTimeStamp(0.407354084527);
    msg.setSource(57958U);
    msg.setSourceEntity(139U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(172U);
    msg.tx = 51U;
    msg.channel = 43U;
    msg.timer = 21190U;

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
    msg.setTimeStamp(0.143013463671);
    msg.setSource(11090U);
    msg.setSourceEntity(97U);
    msg.setDestination(9462U);
    msg.setDestinationEntity(33U);
    msg.tx = 101U;
    msg.channel = 97U;
    msg.timer = 10513U;

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
    msg.setTimeStamp(0.382211144151);
    msg.setSource(30862U);
    msg.setSourceEntity(162U);
    msg.setDestination(12834U);
    msg.setDestinationEntity(192U);
    msg.tx = 136U;
    msg.channel = 94U;
    msg.timer = 57159U;

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
    msg.setTimeStamp(0.695987467174);
    msg.setSource(11085U);
    msg.setSourceEntity(137U);
    msg.setDestination(48580U);
    msg.setDestinationEntity(44U);
    msg.beacon.assign("EWEIUSRRGLKINXMGZHMZSEKHYCNXBTLLVNBTVDWBXBSSHPBFTNHWKSARQHCQSWZOUXEHUVAJWZEJRNDFWFJTLBQGYTVDMGRYMZVIDOAUGLVXOKFRRYRKJGVIQODQZBZXFWOEKRQXDDPTTZCEWLKUMVHTHWIISLCOHKMYJXEBAPXUYKLSI");
    msg.lat = 0.858053208798;
    msg.lon = 0.273797367104;
    msg.depth = 0.346991632246;
    msg.query_channel = 26U;
    msg.reply_channel = 212U;
    msg.transponder_delay = 116U;

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
    msg.setTimeStamp(0.572768532862);
    msg.setSource(61460U);
    msg.setSourceEntity(28U);
    msg.setDestination(17767U);
    msg.setDestinationEntity(116U);
    msg.beacon.assign("YGSHETZOJZRFIKXCLUJMHMVTZBZQQUREKDWKXNNOEDOTPVIGYWFIQPUSSLARNQPNRMDYDGQLOJKXFJCJECAXWRVHUFSVQHFPXKZFOLTJXUDMALHVGPHEEBAYCTNUBJEDIIFAXTMOMYWVQLWIPBSSWNNEZYYBGLLDQQBGUBHHPARBPUTTRVXMLINTTCGNVUZKCRVABGEJKKIICDHKBJMZZYADL");
    msg.lat = 0.450108517517;
    msg.lon = 0.156287196632;
    msg.depth = 0.589991934242;
    msg.query_channel = 128U;
    msg.reply_channel = 226U;
    msg.transponder_delay = 70U;

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
    msg.setTimeStamp(0.0920194790924);
    msg.setSource(12674U);
    msg.setSourceEntity(104U);
    msg.setDestination(24189U);
    msg.setDestinationEntity(249U);
    msg.beacon.assign("YJNOZSUUUHNYMAUEZNRJAQYDCYOCFFBEXAVCDMVIHQBHABAXTQPZRDWKMRNTBKRHGYPTQDIONVBYUZXPKOCHVKSWSNQKXDSARMOAPUZFTMQJHBHDAUCSSTGWIGOFGZJ");
    msg.lat = 0.849948245703;
    msg.lon = 0.58091898248;
    msg.depth = 0.55278131997;
    msg.query_channel = 208U;
    msg.reply_channel = 2U;
    msg.transponder_delay = 215U;

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
    msg.setTimeStamp(0.701901031246);
    msg.setSource(34651U);
    msg.setSourceEntity(106U);
    msg.setDestination(833U);
    msg.setDestinationEntity(182U);
    msg.op = 61U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UTSTAVVKNURWFRVDVXJIJYAHXFABUHNXLZYLODKEAVQIPXAVCSFGXKQIEOCVPRUUCZZHXZMYQGETOUPXURHERRYWDCNWDBBPMTTPGBARVILKJZMNOTXCNGLJGP");
    tmp_msg_0.lat = 0.0864198097209;
    tmp_msg_0.lon = 0.0911330832957;
    tmp_msg_0.depth = 0.335149654079;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 190U;
    tmp_msg_0.transponder_delay = 218U;
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
    msg.setTimeStamp(0.139376825019);
    msg.setSource(56748U);
    msg.setSourceEntity(158U);
    msg.setDestination(39218U);
    msg.setDestinationEntity(145U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.840704835275);
    msg.setSource(10262U);
    msg.setSourceEntity(111U);
    msg.setDestination(43645U);
    msg.setDestinationEntity(137U);
    msg.op = 68U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KPFPJGDDBESUDOTSNJBMFSQQUWAQINMYYK");
    tmp_msg_0.lat = 0.239568455183;
    tmp_msg_0.lon = 0.0563622052874;
    tmp_msg_0.depth = 0.790709697882;
    tmp_msg_0.query_channel = 49U;
    tmp_msg_0.reply_channel = 244U;
    tmp_msg_0.transponder_delay = 207U;
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
    msg.setTimeStamp(0.0204582605297);
    msg.setSource(55765U);
    msg.setSourceEntity(201U);
    msg.setDestination(52718U);
    msg.setDestinationEntity(43U);
    msg.address = 220U;

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
    msg.setTimeStamp(0.705298992628);
    msg.setSource(22946U);
    msg.setSourceEntity(93U);
    msg.setDestination(52207U);
    msg.setDestinationEntity(74U);
    msg.address = 221U;

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
    msg.setTimeStamp(0.836066800517);
    msg.setSource(7488U);
    msg.setSourceEntity(111U);
    msg.setDestination(54091U);
    msg.setDestinationEntity(218U);
    msg.address = 9U;

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
    msg.setTimeStamp(0.637839853019);
    msg.setSource(37120U);
    msg.setSourceEntity(34U);
    msg.setDestination(62649U);
    msg.setDestinationEntity(69U);
    msg.address = 39U;
    msg.status = 89U;
    msg.range = 0.255996878477;

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
    msg.setTimeStamp(0.394962791002);
    msg.setSource(48407U);
    msg.setSourceEntity(151U);
    msg.setDestination(28173U);
    msg.setDestinationEntity(103U);
    msg.address = 178U;
    msg.status = 33U;
    msg.range = 0.577402662135;

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
    msg.setTimeStamp(0.145939189881);
    msg.setSource(13578U);
    msg.setSourceEntity(240U);
    msg.setDestination(14736U);
    msg.setDestinationEntity(241U);
    msg.address = 103U;
    msg.status = 173U;
    msg.range = 0.527032757767;

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
    msg.setTimeStamp(0.964260264827);
    msg.setSource(16482U);
    msg.setSourceEntity(54U);
    msg.setDestination(59856U);
    msg.setDestinationEntity(205U);
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 230U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.186027278304;
    tmp_tmp_msg_0_0.speed_units = 189U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.78418032693;
    tmp_tmp_msg_0_1.z_units = 248U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.011377502619;
    tmp_msg_0.lon = 0.590695681108;
    tmp_msg_0.radius = 0.580797862175;
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
    msg.setTimeStamp(0.0168854309951);
    msg.setSource(2434U);
    msg.setSourceEntity(92U);
    msg.setDestination(16495U);
    msg.setDestinationEntity(78U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 67U;
    tmp_msg_0.mask = 2864227598U;
    tmp_msg_0.scope_ref = 0.857598507474;
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
    msg.setTimeStamp(0.429681099111);
    msg.setSource(44804U);
    msg.setSourceEntity(187U);
    msg.setDestination(54145U);
    msg.setDestinationEntity(148U);
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 11U;
    tmp_msg_0.label.assign("BNBCTFYQVQVEDDADFITCUORLHYIEYGSUTHLPFABDFQRZCCDOMWPXJKJUCCTURGTWOJRXULWRHNEXNUOAKXLIGOXGKEBWFDNQZKVQIFCTTEMDQYYAPZLEARNWEIXHMBNBZPHGVZXISYJJMNIUPZIORGTCGKDAUWJRRKZVLMFZKS");
    tmp_msg_0.component.assign("VZHVIRRSTUUFNATBPPYWTEAAZYQVTNPRKBGXIMKWFSDRWPGDUOHDOSKGJDOXGMVOYCNGHADDICUJKEQXJNMYZFQHVRQKIRIHOUBKRVSUIMMQSCWEWTLNJMQOLWGKUILEIGHKEGKWJHFYNWBMTVZCL");
    tmp_msg_0.act_time = 6668U;
    tmp_msg_0.deact_time = 12327U;
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
    msg.setTimeStamp(0.735907563337);
    msg.setSource(5337U);
    msg.setSourceEntity(159U);
    msg.setDestination(37649U);
    msg.setDestinationEntity(81U);
    msg.enable = 219U;

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
    msg.setTimeStamp(0.691310658245);
    msg.setSource(47088U);
    msg.setSourceEntity(169U);
    msg.setDestination(6913U);
    msg.setDestinationEntity(172U);
    msg.enable = 191U;

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
    msg.setTimeStamp(0.581770978438);
    msg.setSource(28286U);
    msg.setSourceEntity(180U);
    msg.setDestination(51122U);
    msg.setDestinationEntity(116U);
    msg.enable = 96U;

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
    msg.setTimeStamp(0.532940867931);
    msg.setSource(33011U);
    msg.setSourceEntity(24U);
    msg.setDestination(15337U);
    msg.setDestinationEntity(58U);
    msg.summary = 21U;
    msg.level = 59U;

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
    msg.setTimeStamp(0.537979588611);
    msg.setSource(39656U);
    msg.setSourceEntity(34U);
    msg.setDestination(55054U);
    msg.setDestinationEntity(94U);
    msg.summary = 128U;
    msg.level = 62U;

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
    msg.setTimeStamp(0.885858552016);
    msg.setSource(808U);
    msg.setSourceEntity(62U);
    msg.setDestination(36598U);
    msg.setDestinationEntity(19U);
    msg.summary = 36U;
    msg.level = 90U;

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
    msg.setTimeStamp(0.517316397257);
    msg.setSource(11682U);
    msg.setSourceEntity(83U);
    msg.setDestination(20154U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.760036418545);
    msg.setSource(60735U);
    msg.setSourceEntity(182U);
    msg.setDestination(60010U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.000573427281695);
    msg.setSource(57518U);
    msg.setSourceEntity(235U);
    msg.setDestination(22782U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.0050238588387);
    msg.setSource(57443U);
    msg.setSourceEntity(116U);
    msg.setDestination(34332U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.48438399604);
    msg.setSource(24615U);
    msg.setSourceEntity(32U);
    msg.setDestination(23411U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.403909117141);
    msg.setSource(53861U);
    msg.setSourceEntity(1U);
    msg.setDestination(60195U);
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
    msg.setTimeStamp(0.897079188707);
    msg.setSource(46748U);
    msg.setSourceEntity(70U);
    msg.setDestination(64627U);
    msg.setDestinationEntity(135U);
    msg.op = 59U;
    msg.system.assign("LXLGWJFGGNKHZIOPDNHLXNBFDEOHYUXLAZETPYJOZSPCRHDVVRDFCQQGURRCFGDZKRAILVWHCTCJWBRMWGYDOEILQEJZXTXKXCKQTLVCZTGATAIPGQNXEYTHPYBSTPMSAANTNQVBNQKCGZORIMFVEPEFIOOAFFMMIJBSEWMHBUIMFBQSYZLVASRSDUJONKI");
    msg.range = 0.633624368378;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.418265731217;
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
    msg.setTimeStamp(0.434235957192);
    msg.setSource(13633U);
    msg.setSourceEntity(250U);
    msg.setDestination(59326U);
    msg.setDestinationEntity(165U);
    msg.op = 7U;
    msg.system.assign("QXYDYRZRLCQHNUKYBJTIHSINRLPTJVUPXWZYBNDEJCWIMPRQWDYKLHOKIHFZKULJZCLOWPGWCIPNFUOQWXGEUSJFRIDRFHGHBJWCBAZWEACFVDOBISQUBMXMQNCRFMZLRKYAMTTWPYSCIJVTHVGECEGXPKDJMAYBDSJNFRKYM");
    msg.range = 0.22922693831;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 233U;
    tmp_msg_0.text.assign("ZTRYCVEATBIXHHDMTOSEJSMCZJGJQKHNTWVRMIAMKQKXLUBTKAZXVMBMJGZCWLVKIMLOPRHTGLUGRPGHNEMFWQNEMXXEKVJCFFEYDYZFUEVSJYYFQCILOZCPSYDTDPRHRTBBNWFDQVHNISNELSUXGYGZOQIBVAKJOSFUQZSCRKCOIWQLTVCRUAXMOVNXNFKJZZGSPDHLYRDIQPEETAAUWWBBGXJU");
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
    msg.setTimeStamp(0.64024808929);
    msg.setSource(14349U);
    msg.setSourceEntity(159U);
    msg.setDestination(65018U);
    msg.setDestinationEntity(9U);
    msg.op = 139U;
    msg.system.assign("JYXFMTBYOUBNSHJVNGOKQILSRDCEYLKEYGETXJDZWJNIXUCKTTBSCHVREZLMSAOIYLEQTGIWMUMFAWHECVCPUFZGTXQMNKDXTPHSJAZRFQHIFPKEIZMFQSGJZKVLFQL");
    msg.range = 0.252484518188;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 24U;
    tmp_msg_0.op = 233U;
    tmp_msg_0.request_id = 39597U;
    tmp_msg_0.plan_id.assign("SXJWKFODTRRQPLBSTUXVAQLWDKOIUPUWNUAVIVIGCGJBBAYVFTMHDLNCSKCYCPHDXHMOXNNTXQEHELCJNLYJRZKKAMSLGWXZPPBMEIYHNOGHEIAHZUXGREKSSUNBZWMCKKZUUJHBUAOXFDCAPAMYF");
    IMC::VehicleCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 105U;
    tmp_tmp_msg_0_0.request_id = 24554U;
    tmp_tmp_msg_0_0.command = 240U;
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 17961U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0281568696429;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.30537630385;
    tmp_tmp_tmp_msg_0_0_0.z = 0.220731214911;
    tmp_tmp_tmp_msg_0_0_0.z_units = 230U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.839969639744;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.0402416075661;
    tmp_tmp_tmp_msg_0_0_0.duration = 61691U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.856791202826;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 227U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.366798695377;
    tmp_tmp_tmp_msg_0_0_0.direction = 220U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OCAJUSKVKELOBPKRTNFXIDWGJSQBRWPSKVWMMHUCJWFENDMCQBGSJICTXYFDEIVXYARMCYPMHKNMOVNSJXQALLZVLFEZWZHMBYFAIRUJAWFPUTJGWBSUYVNCHHVQAOVPDTLEUCUDTYNYFYXSHIGQNLIJLEWDEORZAUPCHOZWBQBXAQLKCXJRT");
    tmp_tmp_msg_0_0.maneuver.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.calib_time = 2902U;
    tmp_tmp_msg_0_0.info.assign("LAJDYFEIIBEKUDWGBFZNOFYQEMWMMUNUSIHZEJHAGLIQWJVAJXSZAOVJAEDLMFJCXUU");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("ZGRNFKEQLHWWMXUFMLOCVCHSDFYKVKLATVLQUJDJBVBNOCEECHCQALMOPHOHBEZRKOBAZTDDWBNGTJOERSTUWIPVCRVZINEPKPQJTUQRPDCXAFFFBWWUBUGADOTCAYVGTINYBSCYJBSXVERXWRVNVMIGXEEGJQIYGLDKNFPPZMQMPAJIRZKLQMNXISZMNPHTYAUGQOSYLSDTXU");
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
    msg.setTimeStamp(0.489836369372);
    msg.setSource(18735U);
    msg.setSourceEntity(83U);
    msg.setDestination(61757U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.138780931622);
    msg.setSource(38970U);
    msg.setSourceEntity(244U);
    msg.setDestination(1645U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.936294613455);
    msg.setSource(5346U);
    msg.setSourceEntity(8U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.323594264166);
    msg.setSource(54689U);
    msg.setSourceEntity(169U);
    msg.setDestination(64545U);
    msg.setDestinationEntity(40U);
    msg.list.assign("BXJACICLNMXTZPJROHNVEPLETSABIIGWFUUHLWTIYHKYMMMQMZABGSKQHECZPQSWWMKCGDQCYJDKDORDZPFEXXROUGTTPMYEJDGWUVLEDBSQICXVSFUCSEAUZGFLDVVBTYFFPYFDNVTSVBYOUJKZAAJPOBNRMHAZOUVHQGQXESTBWLKLHLRCSZBVNPEQFKBZNCWILRMWROYKIWOHHSTRKANGQY");

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
    msg.setTimeStamp(0.885323819427);
    msg.setSource(22042U);
    msg.setSourceEntity(102U);
    msg.setDestination(33389U);
    msg.setDestinationEntity(139U);
    msg.list.assign("JDGZJMZPVECQWOSMVYAVUHKTMXZXUCRZALDAQUOJBNQGCGLGPBEOSSFBFGRTIDNLYTPJBZRAGZVIDEYKJJVZJQEKULSWFIHBEQEHFQDSOYLXMRFUIWXWPRFLTIXWTLXKNPQVWCSJAKHIVWLAGQDJESROPPWCNFTHWXSXFQJSGDXEAOSHMBIUZMPYYMYDNNTVDEVUKORCNQAIXUHNYRBCBGOKZIHRBUTZETMHOBIHCMGVRPCTF");

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
    msg.setTimeStamp(0.0692419203278);
    msg.setSource(64176U);
    msg.setSourceEntity(172U);
    msg.setDestination(26940U);
    msg.setDestinationEntity(202U);
    msg.list.assign("LMDODUJIZTNVQCBLZJRGTVYWXQNYJMZOPLWTMSIGFGKARSOECOQBLBBDFRWNVPFQZWLROQGOXFVZFERMZYUPAHAHIFDWBIMXPKCEXNCDOVKL");

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
    msg.setTimeStamp(0.759987555067);
    msg.setSource(2187U);
    msg.setSourceEntity(124U);
    msg.setDestination(43140U);
    msg.setDestinationEntity(161U);
    msg.value = 20950;

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
    msg.setTimeStamp(0.311818927897);
    msg.setSource(28838U);
    msg.setSourceEntity(106U);
    msg.setDestination(39649U);
    msg.setDestinationEntity(96U);
    msg.value = -18714;

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
    msg.setTimeStamp(0.307840092748);
    msg.setSource(16378U);
    msg.setSourceEntity(152U);
    msg.setDestination(38140U);
    msg.setDestinationEntity(26U);
    msg.value = -21380;

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
    msg.setTimeStamp(0.216809479601);
    msg.setSource(40062U);
    msg.setSourceEntity(183U);
    msg.setDestination(25952U);
    msg.setDestinationEntity(73U);
    msg.value = 0.209021337285;

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
    msg.setTimeStamp(0.150637765961);
    msg.setSource(12110U);
    msg.setSourceEntity(57U);
    msg.setDestination(33720U);
    msg.setDestinationEntity(111U);
    msg.value = 0.952998044802;

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
    msg.setTimeStamp(0.569569018444);
    msg.setSource(41277U);
    msg.setSourceEntity(80U);
    msg.setDestination(47740U);
    msg.setDestinationEntity(119U);
    msg.value = 0.118560477683;

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
    msg.setTimeStamp(0.583472795742);
    msg.setSource(57598U);
    msg.setSourceEntity(133U);
    msg.setDestination(10271U);
    msg.setDestinationEntity(104U);
    msg.value = 0.553981954317;

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
    msg.setTimeStamp(0.0700759949804);
    msg.setSource(45241U);
    msg.setSourceEntity(191U);
    msg.setDestination(2575U);
    msg.setDestinationEntity(164U);
    msg.value = 0.362493499603;

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
    msg.setTimeStamp(0.456204407279);
    msg.setSource(31755U);
    msg.setSourceEntity(198U);
    msg.setDestination(6651U);
    msg.setDestinationEntity(189U);
    msg.value = 0.907278590077;

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
    msg.setTimeStamp(0.524333809477);
    msg.setSource(23887U);
    msg.setSourceEntity(133U);
    msg.setDestination(50679U);
    msg.setDestinationEntity(251U);
    msg.validity = 30611U;
    msg.type = 175U;
    msg.utc_year = 53642U;
    msg.utc_month = 224U;
    msg.utc_day = 69U;
    msg.utc_time = 0.194066961362;
    msg.lat = 0.627879113696;
    msg.lon = 0.166585215339;
    msg.height = 0.75467079743;
    msg.satellites = 48U;
    msg.cog = 0.229666053552;
    msg.sog = 0.529919674525;
    msg.hdop = 0.969509608347;
    msg.vdop = 0.572409791811;
    msg.hacc = 0.217579531781;
    msg.vacc = 0.379782563408;

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
    msg.setTimeStamp(0.861832782025);
    msg.setSource(35372U);
    msg.setSourceEntity(220U);
    msg.setDestination(27799U);
    msg.setDestinationEntity(64U);
    msg.validity = 34956U;
    msg.type = 82U;
    msg.utc_year = 2933U;
    msg.utc_month = 174U;
    msg.utc_day = 199U;
    msg.utc_time = 0.135380711192;
    msg.lat = 0.173287487463;
    msg.lon = 0.312456623069;
    msg.height = 0.833857539009;
    msg.satellites = 251U;
    msg.cog = 0.0232309650373;
    msg.sog = 0.0916693782663;
    msg.hdop = 0.380851006655;
    msg.vdop = 0.786292206607;
    msg.hacc = 0.5371124833;
    msg.vacc = 0.572298064856;

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
    msg.setTimeStamp(0.602283385594);
    msg.setSource(58909U);
    msg.setSourceEntity(155U);
    msg.setDestination(40229U);
    msg.setDestinationEntity(17U);
    msg.validity = 23743U;
    msg.type = 249U;
    msg.utc_year = 22996U;
    msg.utc_month = 77U;
    msg.utc_day = 170U;
    msg.utc_time = 0.231194232109;
    msg.lat = 0.078031044857;
    msg.lon = 0.0224778277037;
    msg.height = 0.350339530284;
    msg.satellites = 7U;
    msg.cog = 0.824649795609;
    msg.sog = 0.160131780046;
    msg.hdop = 0.507124137889;
    msg.vdop = 0.743281207324;
    msg.hacc = 0.0829785860537;
    msg.vacc = 0.395840669049;

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
    msg.setTimeStamp(0.59902182492);
    msg.setSource(49950U);
    msg.setSourceEntity(240U);
    msg.setDestination(24856U);
    msg.setDestinationEntity(252U);
    msg.time = 0.119926639578;
    msg.phi = 0.245044889899;
    msg.theta = 0.475319695926;
    msg.psi = 0.691645256102;
    msg.psi_magnetic = 0.605768310814;

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
    msg.setTimeStamp(0.00839594933908);
    msg.setSource(1237U);
    msg.setSourceEntity(7U);
    msg.setDestination(16684U);
    msg.setDestinationEntity(200U);
    msg.time = 0.375305890315;
    msg.phi = 0.39307812285;
    msg.theta = 0.967299965391;
    msg.psi = 0.165765593557;
    msg.psi_magnetic = 0.117091903091;

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
    msg.setTimeStamp(0.671644603243);
    msg.setSource(31101U);
    msg.setSourceEntity(244U);
    msg.setDestination(56987U);
    msg.setDestinationEntity(40U);
    msg.time = 0.60704543489;
    msg.phi = 0.688396395358;
    msg.theta = 0.563296071381;
    msg.psi = 0.796454177335;
    msg.psi_magnetic = 0.0621757276101;

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
    msg.setTimeStamp(0.208863941648);
    msg.setSource(39318U);
    msg.setSourceEntity(206U);
    msg.setDestination(43157U);
    msg.setDestinationEntity(126U);
    msg.time = 0.806638957793;
    msg.x = 0.0801006161085;
    msg.y = 0.378355923412;
    msg.z = 0.686596862976;
    msg.timestep = 0.525386114532;

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
    msg.setTimeStamp(0.570416405919);
    msg.setSource(16484U);
    msg.setSourceEntity(111U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(141U);
    msg.time = 0.962344264375;
    msg.x = 0.765176829995;
    msg.y = 0.670528149303;
    msg.z = 0.904648051636;
    msg.timestep = 0.31681324314;

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
    msg.setTimeStamp(0.340614830108);
    msg.setSource(63623U);
    msg.setSourceEntity(75U);
    msg.setDestination(24056U);
    msg.setDestinationEntity(161U);
    msg.time = 0.488442640672;
    msg.x = 0.315094518076;
    msg.y = 0.0557216241237;
    msg.z = 0.901879151242;
    msg.timestep = 0.880936609991;

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
    msg.setTimeStamp(0.835906880397);
    msg.setSource(45825U);
    msg.setSourceEntity(240U);
    msg.setDestination(51519U);
    msg.setDestinationEntity(206U);
    msg.time = 0.081107144149;
    msg.x = 0.221445001788;
    msg.y = 0.18912526288;
    msg.z = 0.884074138679;

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
    msg.setTimeStamp(0.0556416565372);
    msg.setSource(60570U);
    msg.setSourceEntity(135U);
    msg.setDestination(34977U);
    msg.setDestinationEntity(229U);
    msg.time = 0.657334346557;
    msg.x = 0.486649472177;
    msg.y = 0.266254737009;
    msg.z = 0.222582706655;

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
    msg.setTimeStamp(0.161684329568);
    msg.setSource(26132U);
    msg.setSourceEntity(211U);
    msg.setDestination(8808U);
    msg.setDestinationEntity(0U);
    msg.time = 0.211759385711;
    msg.x = 0.906613458324;
    msg.y = 0.108041369791;
    msg.z = 0.812679571558;

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
    msg.setTimeStamp(0.902587980896);
    msg.setSource(32033U);
    msg.setSourceEntity(243U);
    msg.setDestination(43673U);
    msg.setDestinationEntity(27U);
    msg.time = 0.858477765965;
    msg.x = 0.837809239646;
    msg.y = 0.00257667483004;
    msg.z = 0.272969057684;

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
    msg.setTimeStamp(0.958813081774);
    msg.setSource(48946U);
    msg.setSourceEntity(244U);
    msg.setDestination(18574U);
    msg.setDestinationEntity(42U);
    msg.time = 0.923050809798;
    msg.x = 0.197315104788;
    msg.y = 0.0853520518345;
    msg.z = 0.350808914769;

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
    msg.setTimeStamp(0.259505653414);
    msg.setSource(64748U);
    msg.setSourceEntity(7U);
    msg.setDestination(54855U);
    msg.setDestinationEntity(17U);
    msg.time = 0.919679607548;
    msg.x = 0.4223603267;
    msg.y = 0.577742358399;
    msg.z = 0.400049154246;

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
    msg.setTimeStamp(0.575804859047);
    msg.setSource(64922U);
    msg.setSourceEntity(59U);
    msg.setDestination(27221U);
    msg.setDestinationEntity(26U);
    msg.time = 0.259823708584;
    msg.x = 0.726350259894;
    msg.y = 0.199750687315;
    msg.z = 0.926668788354;

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
    msg.setTimeStamp(0.295328610882);
    msg.setSource(23883U);
    msg.setSourceEntity(156U);
    msg.setDestination(35078U);
    msg.setDestinationEntity(146U);
    msg.time = 0.816148834003;
    msg.x = 0.775599628026;
    msg.y = 0.826670034977;
    msg.z = 0.650986701984;

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
    msg.setTimeStamp(0.0909572029998);
    msg.setSource(37170U);
    msg.setSourceEntity(178U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(196U);
    msg.time = 0.360333906346;
    msg.x = 0.609914304736;
    msg.y = 0.492249453929;
    msg.z = 0.235177211235;

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
    msg.setTimeStamp(0.650278157595);
    msg.setSource(41269U);
    msg.setSourceEntity(121U);
    msg.setDestination(20838U);
    msg.setDestinationEntity(88U);
    msg.validity = 216U;
    msg.x = 0.933891201347;
    msg.y = 0.644983082432;
    msg.z = 0.660204417246;

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
    msg.setTimeStamp(0.519135253586);
    msg.setSource(64424U);
    msg.setSourceEntity(127U);
    msg.setDestination(59534U);
    msg.setDestinationEntity(192U);
    msg.validity = 178U;
    msg.x = 0.236239126467;
    msg.y = 0.594486570407;
    msg.z = 0.364764439076;

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
    msg.setTimeStamp(0.841343533882);
    msg.setSource(13196U);
    msg.setSourceEntity(189U);
    msg.setDestination(34824U);
    msg.setDestinationEntity(51U);
    msg.validity = 7U;
    msg.x = 0.697115641515;
    msg.y = 0.63196942886;
    msg.z = 0.937163863291;

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
    msg.setTimeStamp(0.175739224256);
    msg.setSource(331U);
    msg.setSourceEntity(214U);
    msg.setDestination(38370U);
    msg.setDestinationEntity(147U);
    msg.validity = 221U;
    msg.x = 0.679617467141;
    msg.y = 0.766696852577;
    msg.z = 0.66053514915;

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
    msg.setTimeStamp(0.46193648392);
    msg.setSource(43983U);
    msg.setSourceEntity(14U);
    msg.setDestination(19312U);
    msg.setDestinationEntity(47U);
    msg.validity = 192U;
    msg.x = 0.99639057875;
    msg.y = 0.384056183427;
    msg.z = 0.892195202254;

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
    msg.setTimeStamp(0.632563702983);
    msg.setSource(10219U);
    msg.setSourceEntity(40U);
    msg.setDestination(57059U);
    msg.setDestinationEntity(138U);
    msg.validity = 190U;
    msg.x = 0.402502479095;
    msg.y = 0.691269024451;
    msg.z = 0.538894366144;

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
    msg.setTimeStamp(0.980791141706);
    msg.setSource(53178U);
    msg.setSourceEntity(237U);
    msg.setDestination(56641U);
    msg.setDestinationEntity(95U);
    msg.time = 0.515653067841;
    msg.x = 0.713467385167;
    msg.y = 0.0108655029134;
    msg.z = 0.730243523464;

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
    msg.setTimeStamp(0.61360028199);
    msg.setSource(63507U);
    msg.setSourceEntity(196U);
    msg.setDestination(728U);
    msg.setDestinationEntity(222U);
    msg.time = 0.0703104320609;
    msg.x = 0.292725553902;
    msg.y = 0.202646693428;
    msg.z = 0.00303480348683;

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
    msg.setTimeStamp(0.777637842603);
    msg.setSource(47258U);
    msg.setSourceEntity(126U);
    msg.setDestination(28890U);
    msg.setDestinationEntity(10U);
    msg.time = 0.475774698849;
    msg.x = 0.800635123836;
    msg.y = 0.142290062299;
    msg.z = 0.364428579983;

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
    msg.setTimeStamp(0.354400022593);
    msg.setSource(41475U);
    msg.setSourceEntity(212U);
    msg.setDestination(44756U);
    msg.setDestinationEntity(77U);
    msg.validity = 72U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.387391188507;
    tmp_msg_0.y = 0.420607471823;
    tmp_msg_0.z = 0.592585407871;
    tmp_msg_0.phi = 0.862596890365;
    tmp_msg_0.theta = 0.867972462501;
    tmp_msg_0.psi = 0.86914936943;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.953937647016;
    tmp_msg_1.beam_height = 0.435543220554;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.646191376409;

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
    msg.setTimeStamp(0.93963779196);
    msg.setSource(10096U);
    msg.setSourceEntity(221U);
    msg.setDestination(11078U);
    msg.setDestinationEntity(232U);
    msg.validity = 5U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.413373243449;
    tmp_msg_0.beam_height = 0.447255657001;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.176114138878;

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
    msg.setTimeStamp(0.147058270097);
    msg.setSource(4506U);
    msg.setSourceEntity(129U);
    msg.setDestination(20806U);
    msg.setDestinationEntity(49U);
    msg.validity = 51U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.726495047055;
    tmp_msg_0.y = 0.621120315929;
    tmp_msg_0.z = 0.825404881582;
    tmp_msg_0.phi = 0.836798113051;
    tmp_msg_0.theta = 0.809231109136;
    tmp_msg_0.psi = 0.212090242889;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.758997934571;

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
    msg.setTimeStamp(0.910291393703);
    msg.setSource(44048U);
    msg.setSourceEntity(111U);
    msg.setDestination(31261U);
    msg.setDestinationEntity(64U);
    msg.value = 0.568448562274;

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
    msg.setTimeStamp(0.470611352469);
    msg.setSource(49468U);
    msg.setSourceEntity(81U);
    msg.setDestination(59624U);
    msg.setDestinationEntity(122U);
    msg.value = 0.908644996577;

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
    msg.setTimeStamp(0.839437431726);
    msg.setSource(50602U);
    msg.setSourceEntity(81U);
    msg.setDestination(29511U);
    msg.setDestinationEntity(196U);
    msg.value = 0.252470274661;

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
    msg.setTimeStamp(0.732446553137);
    msg.setSource(13972U);
    msg.setSourceEntity(188U);
    msg.setDestination(62330U);
    msg.setDestinationEntity(34U);
    msg.value = 0.157689155285;

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
    msg.setTimeStamp(0.000595324665925);
    msg.setSource(18155U);
    msg.setSourceEntity(108U);
    msg.setDestination(5353U);
    msg.setDestinationEntity(136U);
    msg.value = 0.330816817225;

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
    msg.setTimeStamp(0.187066600939);
    msg.setSource(34684U);
    msg.setSourceEntity(43U);
    msg.setDestination(44105U);
    msg.setDestinationEntity(2U);
    msg.value = 0.904782416662;

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
    msg.setTimeStamp(0.722684048847);
    msg.setSource(34610U);
    msg.setSourceEntity(249U);
    msg.setDestination(24030U);
    msg.setDestinationEntity(201U);
    msg.value = 0.556226270395;

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
    msg.setTimeStamp(0.911194339653);
    msg.setSource(10283U);
    msg.setSourceEntity(174U);
    msg.setDestination(36381U);
    msg.setDestinationEntity(236U);
    msg.value = 0.251514655332;

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
    msg.setTimeStamp(0.0934753027003);
    msg.setSource(52548U);
    msg.setSourceEntity(93U);
    msg.setDestination(63040U);
    msg.setDestinationEntity(134U);
    msg.value = 0.993594906591;

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
    msg.setTimeStamp(0.882106076383);
    msg.setSource(27040U);
    msg.setSourceEntity(112U);
    msg.setDestination(39881U);
    msg.setDestinationEntity(62U);
    msg.value = 0.678012260308;

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
    msg.setTimeStamp(0.835318051249);
    msg.setSource(12031U);
    msg.setSourceEntity(229U);
    msg.setDestination(16906U);
    msg.setDestinationEntity(148U);
    msg.value = 0.877197390734;

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
    msg.setTimeStamp(0.875415552284);
    msg.setSource(53184U);
    msg.setSourceEntity(43U);
    msg.setDestination(5030U);
    msg.setDestinationEntity(152U);
    msg.value = 0.508220001276;

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
    msg.setTimeStamp(0.89149020506);
    msg.setSource(6708U);
    msg.setSourceEntity(199U);
    msg.setDestination(9093U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0343958012637;

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
    msg.setTimeStamp(0.443418931318);
    msg.setSource(21165U);
    msg.setSourceEntity(80U);
    msg.setDestination(12082U);
    msg.setDestinationEntity(38U);
    msg.value = 0.2977716778;

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
    msg.setTimeStamp(0.706593394704);
    msg.setSource(44613U);
    msg.setSourceEntity(245U);
    msg.setDestination(48743U);
    msg.setDestinationEntity(206U);
    msg.value = 0.226374252448;

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
    msg.setTimeStamp(0.513660814574);
    msg.setSource(15122U);
    msg.setSourceEntity(192U);
    msg.setDestination(27838U);
    msg.setDestinationEntity(138U);
    msg.value = 0.195882647602;

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
    msg.setTimeStamp(0.62717436847);
    msg.setSource(31365U);
    msg.setSourceEntity(94U);
    msg.setDestination(29457U);
    msg.setDestinationEntity(249U);
    msg.value = 0.926194416557;

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
    msg.setTimeStamp(0.213770771199);
    msg.setSource(62281U);
    msg.setSourceEntity(234U);
    msg.setDestination(72U);
    msg.setDestinationEntity(135U);
    msg.value = 0.953863431013;

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
    msg.setTimeStamp(0.732865734816);
    msg.setSource(55984U);
    msg.setSourceEntity(92U);
    msg.setDestination(30675U);
    msg.setDestinationEntity(206U);
    msg.value = 0.603747109201;

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
    msg.setTimeStamp(0.788374856082);
    msg.setSource(35183U);
    msg.setSourceEntity(253U);
    msg.setDestination(62904U);
    msg.setDestinationEntity(52U);
    msg.value = 0.821290310381;

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
    msg.setTimeStamp(0.25129342728);
    msg.setSource(14364U);
    msg.setSourceEntity(112U);
    msg.setDestination(6339U);
    msg.setDestinationEntity(132U);
    msg.value = 0.996086493462;

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
    msg.setTimeStamp(0.971748585526);
    msg.setSource(38720U);
    msg.setSourceEntity(115U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(172U);
    msg.value = 0.98069674727;

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
    msg.setTimeStamp(0.787104001496);
    msg.setSource(34037U);
    msg.setSourceEntity(82U);
    msg.setDestination(27050U);
    msg.setDestinationEntity(129U);
    msg.value = 0.202412114235;

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
    msg.setTimeStamp(0.321561438013);
    msg.setSource(39123U);
    msg.setSourceEntity(67U);
    msg.setDestination(62642U);
    msg.setDestinationEntity(17U);
    msg.value = 0.631101436738;

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
    msg.setTimeStamp(0.237222986429);
    msg.setSource(50038U);
    msg.setSourceEntity(9U);
    msg.setDestination(58818U);
    msg.setDestinationEntity(10U);
    msg.direction = 0.969007874688;
    msg.speed = 0.694598033927;

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
    msg.setTimeStamp(0.849257768027);
    msg.setSource(56704U);
    msg.setSourceEntity(119U);
    msg.setDestination(30145U);
    msg.setDestinationEntity(113U);
    msg.direction = 0.952465917635;
    msg.speed = 0.716054357495;

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
    msg.setTimeStamp(0.554396446515);
    msg.setSource(62716U);
    msg.setSourceEntity(188U);
    msg.setDestination(51306U);
    msg.setDestinationEntity(247U);
    msg.direction = 0.414888458413;
    msg.speed = 0.656173252285;

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
    msg.setTimeStamp(0.251757046471);
    msg.setSource(11717U);
    msg.setSourceEntity(48U);
    msg.setDestination(40410U);
    msg.setDestinationEntity(12U);
    msg.value = 0.329419570398;

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
    msg.setTimeStamp(0.374775628383);
    msg.setSource(38829U);
    msg.setSourceEntity(203U);
    msg.setDestination(1518U);
    msg.setDestinationEntity(207U);
    msg.value = 0.110028019932;

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
    msg.setTimeStamp(0.28751530579);
    msg.setSource(53616U);
    msg.setSourceEntity(154U);
    msg.setDestination(3688U);
    msg.setDestinationEntity(121U);
    msg.value = 0.42190113066;

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
    msg.setTimeStamp(0.776762092769);
    msg.setSource(40612U);
    msg.setSourceEntity(222U);
    msg.setDestination(61239U);
    msg.setDestinationEntity(39U);
    msg.value.assign("XMEYDTDSYEMDXYRKUZPHPTLKCWCBRUMHFORGAHYQMBHGQIVGSSSPUEGPFTQJCSSMBTLDUHUKHOKAYCCCUWIECDNQJVJNGVUXGIGJKLEZAZZBJVNKVPAHAMFLWBZTIFIVOVMSYVEYLGIMHFTESOPTFEJJNOACWWWNYRXRZZLNTLAYLQSQDRTKPWNIURGMBEXCBWWVSXFZOPX");

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
    msg.setTimeStamp(0.610828347749);
    msg.setSource(53499U);
    msg.setSourceEntity(2U);
    msg.setDestination(11185U);
    msg.setDestinationEntity(151U);
    msg.value.assign("OBBPLTYVQJKUUFVEVSMHMRBAOWUKPBADLPTCMXECTVIKBGH");

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
    msg.setTimeStamp(0.315104334274);
    msg.setSource(31007U);
    msg.setSourceEntity(40U);
    msg.setDestination(11218U);
    msg.setDestinationEntity(138U);
    msg.value.assign("HAPHWHTENZSVZDTVZZKPZVKDBZDRYOOTNCHRLKNRXYSOQEBICEUDBJRFNAEXDJUMUALNBJBUXIIPXXSALKTAYEQTGQVYSUKIOOGAMSYDAPVGNSWJGQWOSCVKEHFJCJOQWGVPLMMZSCIQJZCGATGVDIPYDOIQPBLFXHBETCJKMYGDRUUKPTWFXPAGYFNQGBNMWPZBLIFLCIRYRKOCUDSLEMBQSLIHMFTQEKFWJNFFWHTVUARHJCE");

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
    msg.setTimeStamp(0.299627134804);
    msg.setSource(46360U);
    msg.setSourceEntity(112U);
    msg.setDestination(42391U);
    msg.setDestinationEntity(71U);
    const char tmp_msg_0[] = {25, 39, 52, 9, 57, 88, -91, 119, -116, 16, 81, 95, -101, 6, -121, -68, -120, 105, -61, -12, -112, 35, 62, 61, -110, 26, -30, 34, -108, 93, -4, -18, 68, 126, 54, -116, 115, -55, 30, 66, 4, 46, -41, -85, 17, -53, 116, -49, 95, 113, 66, 85, 61, -80, 75, 25, 68, -109, 58, 117, 9, 69, 4, 10, 103, 94, -96, -11, 80, -38, -99, 88, 66, 44, 1, 37, 91, -112, 89, -103, -77, 6, -48, -15, -41, 58, -1, -7, 56, -8, 50, -26, 126, -72, -85, -80, 106, 122, -84, 98, 48, 40, 118, -33, -30, -12, -115, -99, -30, 107, -105, 51, -1, 37, -120, -97, 6, -38, -95, 24, -51, -7, -85, -16, 117, 83, 86, 37, -121, 18, -38, 47, 93, -117, 76, 96, -95, 22, 39, 5, -2, -102, -38, -22, 71, 68, 9, -116, -19, 18, 58, 114, 113, -96, -33, -58, 58, 42, -80, -12, -22, 110, 96, -3, 95, -32, -4, -76, 46, 106, 116, 22, -12, 48, -40, -22, -23, 91, 103, -25, -33, -70, -72, -37, -100, -31, -9, -116, 47, -90, -48, 110, 68, -21, -121, 17, -126, 78, -69, -15, 91, 92, 116, -104, 0, -76, -115, 0, -121, -99, 102, -95, -3, -124, 43, 9, 98, 61};
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
    msg.setTimeStamp(0.414511010166);
    msg.setSource(27030U);
    msg.setSourceEntity(222U);
    msg.setDestination(55796U);
    msg.setDestinationEntity(11U);
    const char tmp_msg_0[] = {49, -116, 67, 96, -33, -29, 95, -15, 11, -66, 35, 16, -99, 6, 26, -33, -83, -52, 20, -64, 33, 108, -91, 120, -73, 61, -17, 18, -87, -60, -44, -102, 31, 11, -15, 109, -22, -14, 64, 49, 59, 67, -30, -46, -114, -49, 109, -14, -42, -5, 69, -120, -86, -124, 73, 114, -1, -36, 91, 78, 68, 42, -22, -49, -106, -50, 10, 8, 111, -54, -50, 47, 84, 27, -110, -84, -58, -40, -5, -75, -44, 87, 62, 5, 37, -88, -113, -104, -114, -23, -115, 16, -121, -71, -113, -47, 118, -72, -32, 19, -119, 98, 84, 98, 34, 28, -87, -30, -64, -30, 124, -125, 72, 70, -96, -89, 42, -55, -94, 42, -48};
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
    msg.setTimeStamp(0.78189713533);
    msg.setSource(65028U);
    msg.setSourceEntity(102U);
    msg.setDestination(12260U);
    msg.setDestinationEntity(82U);
    const char tmp_msg_0[] = {97, -38, -50, 51, -110, -68, -6, 114, -127, -42, -94, 55, 102, -50, 85, 96, -32, 94, -59, 13, -127, 108, -99, -105, 84, -74, -49, 2, -110, 20, -81, -74, -4, -7, -25, 52, -124, 81, 82, 88, 80, -56, 119, -122, 66, -70, 31, 126, 3, 44, -94, -91, -79, 33, -118, 88, -77, -93, -19, -36, 24, -16, -42, 15, -70, -10, -96, -37, -33, -85, 6, -13, -85, 84, -37, 55, 30, 57, 125, 45, -92, -120, 104, -64, 12, -16, 103, 68, 65, 17, -28, -108, -25, 68, -107, -88, 38, -28, -21, 43, 112, -90, -60, 78, -94, -65, 99, 6, -99, -58, 50, -47, 12, 1, 31, -112, 25, -104, 107, 99, 100, -47, 85, -83, 55, 83, -91, 17, -128, 107, 80, -28, -44, -107, 16, 10, -94, 102, 84, 27, 117, -9, -11, 30, -101, 123, 34, 81, 50, -96, -98, 76, -105, 112, -60, 50, -73, -7};
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
    msg.setTimeStamp(0.517246814348);
    msg.setSource(11508U);
    msg.setSourceEntity(197U);
    msg.setDestination(21270U);
    msg.setDestinationEntity(52U);
    msg.frequency = 2030751991U;
    msg.min_range = 1783U;
    msg.max_range = 60201U;

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
    msg.setTimeStamp(0.103337058468);
    msg.setSource(50038U);
    msg.setSourceEntity(77U);
    msg.setDestination(12508U);
    msg.setDestinationEntity(252U);
    msg.frequency = 3413686455U;
    msg.min_range = 48597U;
    msg.max_range = 18898U;

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
    msg.setTimeStamp(0.13252319508);
    msg.setSource(20245U);
    msg.setSourceEntity(19U);
    msg.setDestination(19900U);
    msg.setDestinationEntity(130U);
    msg.frequency = 2438915032U;
    msg.min_range = 11859U;
    msg.max_range = 29770U;

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
    msg.setTimeStamp(0.105941425301);
    msg.setSource(63491U);
    msg.setSourceEntity(14U);
    msg.setDestination(60403U);
    msg.setDestinationEntity(109U);
    msg.type = 30U;
    msg.frequency = 2810708941U;
    msg.min_range = 60868U;
    msg.max_range = 46079U;
    msg.bits_per_point = 78U;
    msg.scale_factor = 0.508620298989;
    const char tmp_msg_0[] = {-92, -37, -6, 86, 12, 42, 25, 16, 87, 61, 119, -83, -56, -8, -34, -11, 1, 74, -39, 65, 15, 16, -93, 107, 97, -38, -88, -111, -107, -103, 70, 43, -21, -73, -124, 42, 79, -2, 92, 80, 60, 104, -71, -5, 65, -51, 103, 100, -46, -120, 36, -68, 23, -30, 79, 10, 31, -72, 69, -21, -35, 0, -122, 55, 62, 85, 15, -46, -8, -63, -121, -94, -53, 16, 50, 19, -9, 32, 7, 41, -44, -110, -10, -38, -10, -16, 9, 2, 124, -31, -113, -6, -94, -96, -75, 76, 60, 9, -51, -74, 46, 32, 45, -94, -63, -62, -86, 94, -108, 111, 69, 26, -75, 59, -91, 60, -39, 108, -84, 117, 108, 76, 45, 51, 61, -6, 83, 54, -98, -80, -47, -94, 85, 42, -97, 13, 126, -18, 57, -73, -99, 17, -100, 91, 82, 100, -5, -27, 77, -128, -22, -81, 95, 110, -123, 60, -42, -112, 88};
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
    msg.setTimeStamp(0.357297168068);
    msg.setSource(22797U);
    msg.setSourceEntity(149U);
    msg.setDestination(20602U);
    msg.setDestinationEntity(144U);
    msg.type = 58U;
    msg.frequency = 3534808007U;
    msg.min_range = 52738U;
    msg.max_range = 18927U;
    msg.bits_per_point = 90U;
    msg.scale_factor = 0.196093083817;
    const char tmp_msg_0[] = {112, -107, -10, 51, -63, 32, -81, -88, -60, 53, -11, -43, -119, 98, 33, -77, 72, 114, -18, 61, -85, 89, 100, 124, 39, 117, 85, 93, -27, -25, 87, -93, -12, -101, 123, -49, 120, -61, 42, -110, -121, 38, 83, 82, -38, 50, -73, 1, 97, 50, 20, 17, 50, 6, 84, -42, -76, -116, -94, 6, -26, -113, -103, -123, 33, 61, 43, -5, 101, -17, 100, 122, 51, 60, 102, 67, -41, -110, -58, 43, -99, -24, -87, -111, 48, -68, -84, -49, 75, -5, 33, 14, 56, 67, -28, 23, -18, 77, -31, -65, -68, 120, -106, 73, -122, 125, -57, 125, 26, 75, 124, 103, -117, -92, -20, 77, 33, -40, 57, -15, -11, 40, -32, 125, 126, -118, 104, -55, 23, -111, 108, 69, -27, -57, -126, -28, -11, 86, -30, 88, -98, 38, 126, -6, -81, -75, -79, 94, 14, 81, -108, -76, -121, 39, -80, -32, 122, 24, 102, -23, 31, 122, 86, 59, -5, 83, -19, -101, 103, -118, -73, -69, 113, -18, 63, 109, 88, -59, 121, 90, 59, -33, 35, 94, 87, -37, 79, -83, -123};
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
    msg.setTimeStamp(0.906558773076);
    msg.setSource(30481U);
    msg.setSourceEntity(217U);
    msg.setDestination(10514U);
    msg.setDestinationEntity(39U);
    msg.type = 193U;
    msg.frequency = 1333197456U;
    msg.min_range = 40123U;
    msg.max_range = 65226U;
    msg.bits_per_point = 189U;
    msg.scale_factor = 0.799527280383;
    const char tmp_msg_0[] = {-62, -14, 62, 57, 0, 13, -42, 57, 57, -35, -42, 5, -72, -90, 124, -91, -105, 79, -35, -6, -95, 76, 61, 100, -104, -45, -9, 63, 77, -43, 15, -26, 36, 74, 7, 80, 42, -115, -57, -39, 52, 94, 102, 41, -39, 53, -49, 118, 69};
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
    msg.setTimeStamp(0.728856228614);
    msg.setSource(50851U);
    msg.setSourceEntity(202U);
    msg.setDestination(57799U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.352252126267);
    msg.setSource(28925U);
    msg.setSourceEntity(241U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.758584651002);
    msg.setSource(58615U);
    msg.setSourceEntity(124U);
    msg.setDestination(14875U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.468384581796);
    msg.setSource(18340U);
    msg.setSourceEntity(44U);
    msg.setDestination(22681U);
    msg.setDestinationEntity(254U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.723446545871);
    msg.setSource(17451U);
    msg.setSourceEntity(218U);
    msg.setDestination(62450U);
    msg.setDestinationEntity(144U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.253760254958);
    msg.setSource(6465U);
    msg.setSourceEntity(105U);
    msg.setDestination(45627U);
    msg.setDestinationEntity(86U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.352859553012);
    msg.setSource(13452U);
    msg.setSourceEntity(103U);
    msg.setDestination(51205U);
    msg.setDestinationEntity(186U);
    msg.value = 0.402499792443;
    msg.confidence = 0.652878407277;
    msg.opmodes.assign("FUBAMXKCMWEHAHKDONARGSZNTGENSEHRDLPYBCEXNISTXTSFDRCPOBEDOXHDC");

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
    msg.setTimeStamp(0.547437399063);
    msg.setSource(30489U);
    msg.setSourceEntity(163U);
    msg.setDestination(30518U);
    msg.setDestinationEntity(84U);
    msg.value = 0.0878038771941;
    msg.confidence = 0.12859858431;
    msg.opmodes.assign("MXMRVKFNIOVMLYBAPVCCPCNKZBPDJNLOMLIRHROMRWFFABFQJTXOONKRXXEVHFSHJSIMCMYNXQBQXLRVAJCQMPUBGATAKPOYVGOENVNBJDIAEHUWVQIMLXCHWEXHWOCWYVEHOULSDBSAAZGIGWLBURQZRGEDKKIPTEKFKAZZYYSJLYAUNTZXCENTUJIWDYTSGZRW");

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
    msg.setTimeStamp(0.0822308872509);
    msg.setSource(35042U);
    msg.setSourceEntity(238U);
    msg.setDestination(15767U);
    msg.setDestinationEntity(58U);
    msg.value = 0.911822659375;
    msg.confidence = 0.0545993681496;
    msg.opmodes.assign("JSKGFCACBLOARMDIRLTYIQZIEXUHLMOEQYRDWYPSPZARTBJFKBNWJPEPFVGZASHZSKTWOXRBHVPXDV");

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
    msg.setTimeStamp(0.53341226801);
    msg.setSource(54648U);
    msg.setSourceEntity(93U);
    msg.setDestination(3184U);
    msg.setDestinationEntity(169U);
    msg.itow = 879126965U;
    msg.lat = 0.940505412351;
    msg.lon = 0.702720694665;
    msg.height_ell = 0.224028454965;
    msg.height_sea = 0.934441471449;
    msg.hacc = 0.554972522809;
    msg.vacc = 0.123204292967;
    msg.vel_n = 0.0296278262473;
    msg.vel_e = 0.17167298977;
    msg.vel_d = 0.0392595228918;
    msg.speed = 0.217424527737;
    msg.gspeed = 0.721113263138;
    msg.heading = 0.0312932045554;
    msg.sacc = 0.462583865078;
    msg.cacc = 0.716206718262;

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
    msg.setTimeStamp(0.202702723615);
    msg.setSource(58707U);
    msg.setSourceEntity(197U);
    msg.setDestination(13458U);
    msg.setDestinationEntity(120U);
    msg.itow = 544946188U;
    msg.lat = 0.733502515414;
    msg.lon = 0.571896245835;
    msg.height_ell = 0.192234726793;
    msg.height_sea = 0.275770200416;
    msg.hacc = 0.450400471344;
    msg.vacc = 0.547555072766;
    msg.vel_n = 0.725421119039;
    msg.vel_e = 0.0383687868909;
    msg.vel_d = 0.329532755759;
    msg.speed = 0.938704525065;
    msg.gspeed = 0.48600262437;
    msg.heading = 0.557572258219;
    msg.sacc = 0.46790135502;
    msg.cacc = 0.545065302484;

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
    msg.setTimeStamp(0.330616232022);
    msg.setSource(17085U);
    msg.setSourceEntity(25U);
    msg.setDestination(57727U);
    msg.setDestinationEntity(234U);
    msg.itow = 944569360U;
    msg.lat = 0.632443109835;
    msg.lon = 0.139894717816;
    msg.height_ell = 0.702490921107;
    msg.height_sea = 0.331541264436;
    msg.hacc = 0.0265864227897;
    msg.vacc = 0.185933559595;
    msg.vel_n = 0.626914986955;
    msg.vel_e = 0.087313374213;
    msg.vel_d = 0.597475770914;
    msg.speed = 0.68000209238;
    msg.gspeed = 0.249310610688;
    msg.heading = 0.667005490073;
    msg.sacc = 0.878590635544;
    msg.cacc = 0.986806791367;

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
    msg.setTimeStamp(0.732676083795);
    msg.setSource(30696U);
    msg.setSourceEntity(222U);
    msg.setDestination(18019U);
    msg.setDestinationEntity(227U);
    msg.id = 189U;
    msg.value = 0.958642288952;

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
    msg.setTimeStamp(0.661006111572);
    msg.setSource(27471U);
    msg.setSourceEntity(89U);
    msg.setDestination(43733U);
    msg.setDestinationEntity(192U);
    msg.id = 119U;
    msg.value = 0.921980815199;

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
    msg.setTimeStamp(0.718197099022);
    msg.setSource(62004U);
    msg.setSourceEntity(39U);
    msg.setDestination(2626U);
    msg.setDestinationEntity(221U);
    msg.id = 242U;
    msg.value = 0.4563713213;

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
    msg.setTimeStamp(0.296851232442);
    msg.setSource(51539U);
    msg.setSourceEntity(144U);
    msg.setDestination(54413U);
    msg.setDestinationEntity(193U);
    msg.x = 0.895610393358;
    msg.y = 0.556955817806;
    msg.z = 0.109239221297;
    msg.phi = 0.613840960316;
    msg.theta = 0.588462343049;
    msg.psi = 0.695427330746;

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
    msg.setTimeStamp(0.427582525414);
    msg.setSource(30735U);
    msg.setSourceEntity(34U);
    msg.setDestination(9120U);
    msg.setDestinationEntity(167U);
    msg.x = 0.682203810362;
    msg.y = 0.308790909846;
    msg.z = 0.0844711726482;
    msg.phi = 0.198493202687;
    msg.theta = 0.720781760801;
    msg.psi = 0.347930566764;

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
    msg.setTimeStamp(0.142949397459);
    msg.setSource(24121U);
    msg.setSourceEntity(75U);
    msg.setDestination(9804U);
    msg.setDestinationEntity(206U);
    msg.x = 0.495210147138;
    msg.y = 0.861767732242;
    msg.z = 0.777150119124;
    msg.phi = 0.186948582245;
    msg.theta = 0.352997523903;
    msg.psi = 0.77276109385;

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
    msg.setTimeStamp(0.753401243725);
    msg.setSource(6010U);
    msg.setSourceEntity(125U);
    msg.setDestination(18318U);
    msg.setDestinationEntity(139U);
    msg.beam_width = 0.63386823066;
    msg.beam_height = 0.0369677968914;

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
    msg.setTimeStamp(0.261412994137);
    msg.setSource(28483U);
    msg.setSourceEntity(196U);
    msg.setDestination(36251U);
    msg.setDestinationEntity(115U);
    msg.beam_width = 0.0830024696424;
    msg.beam_height = 0.186209300207;

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
    msg.setTimeStamp(0.881204218368);
    msg.setSource(35135U);
    msg.setSourceEntity(74U);
    msg.setDestination(1076U);
    msg.setDestinationEntity(186U);
    msg.beam_width = 0.589403619631;
    msg.beam_height = 0.685613357199;

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
    msg.setTimeStamp(0.241409097958);
    msg.setSource(18829U);
    msg.setSourceEntity(141U);
    msg.setDestination(48032U);
    msg.setDestinationEntity(5U);
    msg.sane = 231U;

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
    msg.setTimeStamp(0.132104140277);
    msg.setSource(50740U);
    msg.setSourceEntity(161U);
    msg.setDestination(56487U);
    msg.setDestinationEntity(244U);
    msg.sane = 162U;

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
    msg.setTimeStamp(0.966474828029);
    msg.setSource(3730U);
    msg.setSourceEntity(180U);
    msg.setDestination(25798U);
    msg.setDestinationEntity(83U);
    msg.sane = 217U;

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
    msg.setTimeStamp(0.0262036980391);
    msg.setSource(31573U);
    msg.setSourceEntity(8U);
    msg.setDestination(17889U);
    msg.setDestinationEntity(7U);
    msg.id = 219U;
    msg.zoom = 164U;
    msg.action = 224U;

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
    msg.setTimeStamp(0.0659207456001);
    msg.setSource(63780U);
    msg.setSourceEntity(143U);
    msg.setDestination(54367U);
    msg.setDestinationEntity(228U);
    msg.id = 140U;
    msg.zoom = 101U;
    msg.action = 130U;

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
    msg.setTimeStamp(0.773928114694);
    msg.setSource(46741U);
    msg.setSourceEntity(171U);
    msg.setDestination(41031U);
    msg.setDestinationEntity(95U);
    msg.id = 157U;
    msg.zoom = 156U;
    msg.action = 180U;

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
    msg.setTimeStamp(0.91012565729);
    msg.setSource(62288U);
    msg.setSourceEntity(18U);
    msg.setDestination(13166U);
    msg.setDestinationEntity(206U);
    msg.id = 214U;
    msg.value = 0.0740984376734;

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
    msg.setTimeStamp(0.868030748318);
    msg.setSource(63012U);
    msg.setSourceEntity(5U);
    msg.setDestination(9092U);
    msg.setDestinationEntity(79U);
    msg.id = 87U;
    msg.value = 0.0484175907857;

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
    msg.setTimeStamp(0.314893846914);
    msg.setSource(19739U);
    msg.setSourceEntity(56U);
    msg.setDestination(60214U);
    msg.setDestinationEntity(206U);
    msg.id = 92U;
    msg.value = 0.743498216304;

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
    msg.setTimeStamp(0.372782173833);
    msg.setSource(46252U);
    msg.setSourceEntity(173U);
    msg.setDestination(57180U);
    msg.setDestinationEntity(22U);
    msg.id = 80U;
    msg.value = 0.596041694658;

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
    msg.setTimeStamp(0.660052582634);
    msg.setSource(5043U);
    msg.setSourceEntity(210U);
    msg.setDestination(43624U);
    msg.setDestinationEntity(160U);
    msg.id = 128U;
    msg.value = 0.972081036609;

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
    msg.setTimeStamp(0.190469242289);
    msg.setSource(60402U);
    msg.setSourceEntity(222U);
    msg.setDestination(50451U);
    msg.setDestinationEntity(107U);
    msg.id = 170U;
    msg.value = 0.120150419779;

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
    msg.setTimeStamp(0.0682264183459);
    msg.setSource(22071U);
    msg.setSourceEntity(137U);
    msg.setDestination(37962U);
    msg.setDestinationEntity(57U);
    msg.id = 19U;
    msg.angle = 0.970670466554;

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
    msg.setTimeStamp(0.107749776804);
    msg.setSource(59105U);
    msg.setSourceEntity(161U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(199U);
    msg.id = 129U;
    msg.angle = 0.612120465968;

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
    msg.setTimeStamp(0.558550663059);
    msg.setSource(54652U);
    msg.setSourceEntity(224U);
    msg.setDestination(53477U);
    msg.setDestinationEntity(210U);
    msg.id = 59U;
    msg.angle = 0.768470403298;

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
    msg.setTimeStamp(0.984468714832);
    msg.setSource(46903U);
    msg.setSourceEntity(118U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(110U);
    msg.op = 175U;
    msg.actions.assign("TJWFBPLNVYPOVL");

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
    msg.setTimeStamp(0.671618015346);
    msg.setSource(12807U);
    msg.setSourceEntity(30U);
    msg.setDestination(63550U);
    msg.setDestinationEntity(100U);
    msg.op = 98U;
    msg.actions.assign("XDMDSUKHUHWZTQEZTQFFJCXQBSAULKWMVTMMRFHIVAZVSJOATFGRICBHLKZMAWXFYXCBNNLZZBYLDWINGHKTFEWJQJYBLEFYDNSFHKLYOAGIQXVUPESPHQUWCVDJUXYEFGSU");

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
    msg.setTimeStamp(0.492724583316);
    msg.setSource(64909U);
    msg.setSourceEntity(247U);
    msg.setDestination(17602U);
    msg.setDestinationEntity(0U);
    msg.op = 200U;
    msg.actions.assign("EULSGQEEHZSMJSKOOTJADDJAGAVMJWQQSZBTKNDHNHEEMOSMFAYOTUCRIIVXFYEBITPYWECLYJQRXSNXNXPODDWQQBNBUVTNJRJHBGPMKBWVPKRSAEXCTTCYUUIZDAQFRPSIWULDMPMVCGNIQYLHWQGLRAFYPZKJPBARYWOVNTXDQZCCKGFWUBHCOOSCFKWNOELKPZZLLKGXHYBPIFXOTJRVKLUZ");

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
    msg.setTimeStamp(0.914419493821);
    msg.setSource(18252U);
    msg.setSourceEntity(81U);
    msg.setDestination(28271U);
    msg.setDestinationEntity(179U);
    msg.actions.assign("OBRPCTOEWGVRQWJFFNXTBAVYXABJPPLQSSLMDNMGBEEHIIGDAPFULGYWGPNONXPLXNKQHEOHLFJMHCTAVMSEEWVVESKRTKWIBDSDCWUYNZAUFOQLKNUJQHIQKUCEUDXWIMAZLZFRFTAVUWBIXECZERNRKCVOMCSQYLKNJMMMRJVSJZTDKYGIXRTHO");

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
    msg.setTimeStamp(0.97683668729);
    msg.setSource(10244U);
    msg.setSourceEntity(68U);
    msg.setDestination(37139U);
    msg.setDestinationEntity(78U);
    msg.actions.assign("WGCEDPNASZPQMUBQKRQCKRFJLUBLMIXFYLNDOXTPWHIRPUPXHCZEIQKBHYSVQREIWAHKEGXDIFJEVEJCFOCVELSWXNRRVXYUTJBIOWLROLCGHPTSCGDTEMZSQNMAHOBKQVZJGWTNIYJXBZDASEJBTZFAQZOSDAFMUUMLL");

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
    msg.setTimeStamp(0.188791810988);
    msg.setSource(14143U);
    msg.setSourceEntity(74U);
    msg.setDestination(47298U);
    msg.setDestinationEntity(164U);
    msg.actions.assign("ZSLXAEUHXTFHVXBCMKCZQRCQOQDTMQGTFWCMNMSJROECLJAARKLBKCOJLHSJPGVYMQRFWTXDYZGYJKHIZPIYMJFGWIOYVQYKNJAVXZIQDNRMIROIJRLVOETWQILBSCAFZUCHRKIQXLPUWYMNDVUMNTGRGCHBDZGVHDZLDUXFONITPSYNSWGGKQPDBJVFZWKZWFLONSPBEHCD");

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
    msg.setTimeStamp(0.69316889305);
    msg.setSource(43297U);
    msg.setSourceEntity(185U);
    msg.setDestination(30494U);
    msg.setDestinationEntity(191U);
    msg.button = 20U;
    msg.value = 123U;

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
    msg.setTimeStamp(0.146868810851);
    msg.setSource(1445U);
    msg.setSourceEntity(58U);
    msg.setDestination(41810U);
    msg.setDestinationEntity(153U);
    msg.button = 254U;
    msg.value = 180U;

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
    msg.setTimeStamp(0.295211915932);
    msg.setSource(115U);
    msg.setSourceEntity(82U);
    msg.setDestination(49173U);
    msg.setDestinationEntity(132U);
    msg.button = 127U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.784814730756);
    msg.setSource(28224U);
    msg.setSourceEntity(238U);
    msg.setDestination(50087U);
    msg.setDestinationEntity(51U);
    msg.op = 91U;
    msg.text.assign("QVNVERTDDTDEDKFWWDWIZUFPPXJQIZ");

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
    msg.setTimeStamp(0.694743527476);
    msg.setSource(62288U);
    msg.setSourceEntity(98U);
    msg.setDestination(39484U);
    msg.setDestinationEntity(73U);
    msg.op = 131U;
    msg.text.assign("ZCKDZZKTGFARSLJVUPCAOCHVEDCXMLNEPDKOBYVRPVWKAXNNJMXVULNRHWXBTGAWGEHWINQBAQATEMCYFIQERAWRIEXQTNBYPSRHREGMGXSYACOONKXMDWKIKKULUHILTSXMELFVGZOCVZRNEJSBBQDFTUWJDCGOQIJJPBRXKEDOHMF");

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
    msg.setTimeStamp(0.55274838293);
    msg.setSource(30179U);
    msg.setSourceEntity(190U);
    msg.setDestination(39188U);
    msg.setDestinationEntity(89U);
    msg.op = 31U;
    msg.text.assign("TSLQAPYRFDTUCRPIRSFDNYRGEVALGBWVWUYWUDVLVTOLKGAIEESIWIWYNHJCKPYKHMCNQULWPOCXIKUHMREMANBNUZ");

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
    msg.setTimeStamp(0.295394071285);
    msg.setSource(21798U);
    msg.setSourceEntity(106U);
    msg.setDestination(4253U);
    msg.setDestinationEntity(47U);
    msg.op = 50U;
    msg.time_remain = 0.489146949897;
    msg.sched_time = 0.0929137209313;

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
    msg.setTimeStamp(0.0178993789941);
    msg.setSource(35438U);
    msg.setSourceEntity(227U);
    msg.setDestination(51682U);
    msg.setDestinationEntity(198U);
    msg.op = 239U;
    msg.time_remain = 0.617188047313;
    msg.sched_time = 0.386551411628;

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
    msg.setTimeStamp(0.178779943634);
    msg.setSource(62921U);
    msg.setSourceEntity(216U);
    msg.setDestination(58559U);
    msg.setDestinationEntity(119U);
    msg.op = 152U;
    msg.time_remain = 0.0346756020008;
    msg.sched_time = 0.201418268989;

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
    msg.setTimeStamp(0.892201996206);
    msg.setSource(58664U);
    msg.setSourceEntity(194U);
    msg.setDestination(61269U);
    msg.setDestinationEntity(96U);
    msg.name.assign("HVOGMJLYKQMPVWIPRKGRAJHVUKTICDNDUSILZEWESJHQDMLIBQWNYOMANLNFIRZFYPUVWALOUXANLYFYCHXNOF");
    msg.op = 250U;
    msg.sched_time = 0.327809673959;

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
    msg.setTimeStamp(0.19389948594);
    msg.setSource(62860U);
    msg.setSourceEntity(110U);
    msg.setDestination(35560U);
    msg.setDestinationEntity(60U);
    msg.name.assign("DFNYHSACOHQJPYCEBLOXKFSADFIHHPTMOXYIXKZPGMIZVZWDBGLOEVIEBZBHZNDUKABVURAMQXWEACBKBKWYGTOPCRRALYAZMLMDRNUWTCZISXTKGLRTTQUMDVELGBSYRIGFMTDXSA");
    msg.op = 33U;
    msg.sched_time = 0.825940120241;

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
    msg.setTimeStamp(0.492131823749);
    msg.setSource(25245U);
    msg.setSourceEntity(107U);
    msg.setDestination(46115U);
    msg.setDestinationEntity(235U);
    msg.name.assign("OVCZMTCCFBYRDLFGZGANGKVXNYKJLKIGIOIPQMNXAMVRYBOTNOROMPXHAVDWDJHECGLZUHHNOAVKQAHMWEHWLTNPNITILZPCMZKEUUTKHX");
    msg.op = 153U;
    msg.sched_time = 0.305036823949;

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
    msg.setTimeStamp(0.279979793946);
    msg.setSource(39907U);
    msg.setSourceEntity(126U);
    msg.setDestination(49919U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.428324416494);
    msg.setSource(44508U);
    msg.setSourceEntity(111U);
    msg.setDestination(57886U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.429707967399);
    msg.setSource(30029U);
    msg.setSourceEntity(191U);
    msg.setDestination(61014U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.155172304811);
    msg.setSource(30048U);
    msg.setSourceEntity(158U);
    msg.setDestination(49589U);
    msg.setDestinationEntity(142U);
    msg.name.assign("NRGPKBGDFHZVCVJRATWKSEKDAZMFYUYJTGPINTKLYGF");
    msg.state = 213U;

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
    msg.setTimeStamp(0.782914770165);
    msg.setSource(33486U);
    msg.setSourceEntity(240U);
    msg.setDestination(56119U);
    msg.setDestinationEntity(188U);
    msg.name.assign("VHSAEPJKLXBZUNVENZQTTOMVXODESEKONPKWAAXMUSTHHMDWWUMCQBAGOJLCYMSFRAAVCFIISDMPXHPTCOARWJXKKDTJEGPDIGQBZZFLQYHXEXNKGKRLQRJMBUGKSYMQVXOZSPCRASVPEFVFRBIXQHNF");
    msg.state = 197U;

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
    msg.setTimeStamp(0.110592275523);
    msg.setSource(13415U);
    msg.setSourceEntity(201U);
    msg.setDestination(60042U);
    msg.setDestinationEntity(154U);
    msg.name.assign("NVHPACJIMCGWCHBDTKVDLKSTOXSFPYPYWILOPRZGFPWXTUGNNHQPAEEHEEXLOEKKMUVUYVAHFGBSXXIRDYVLSMZDAMNOKMTNTZLCAGHDDZSCRJOEALNHFDBDMBPJTPBFIGFQJQMSUSCJJJBKLVCKCESZRUYPWQAMRLUWYCTQIBAGBOJXMGHFCGYH");
    msg.state = 43U;

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
    msg.setTimeStamp(0.795832735536);
    msg.setSource(54984U);
    msg.setSourceEntity(234U);
    msg.setDestination(1387U);
    msg.setDestinationEntity(172U);
    msg.name.assign("RWKKGZUIWMEZXZCNU");
    msg.value = 45U;

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
    msg.setTimeStamp(0.68684398128);
    msg.setSource(48246U);
    msg.setSourceEntity(138U);
    msg.setDestination(6050U);
    msg.setDestinationEntity(126U);
    msg.name.assign("ROYXVCGFEREMLGORPXBPQDRJSEVIXJJOYARZZWQDDIMSUUCYYYULOBCGZTJYFMJAHLDAEFIKSWSEJESFPBVVOMFICMRHWQLPMSDIHBUTRVOKVQSXQKKUBKPQTYAREIUWEDUVZWQMDUPNDZNVTBHOWCBGJPZHYANPTNFALDNSIZLMLMCLBNFWAEBTJXGVM");
    msg.value = 209U;

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
    msg.setTimeStamp(0.0431524138715);
    msg.setSource(4878U);
    msg.setSourceEntity(70U);
    msg.setDestination(60053U);
    msg.setDestinationEntity(21U);
    msg.name.assign("WGCQDFHWQOGACNVPIOUYNXMKIEMKPPWCSHNJEJVVXTHQPKXVYYFADQQGHXDBMJCPRUFRGXLLWDAWGRFUYLAOLBOYSTAPISTARNCPRCHMELRZAVBHBZCDKXMZSYXZSGH");
    msg.value = 121U;

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
    msg.setTimeStamp(0.732666020983);
    msg.setSource(5024U);
    msg.setSourceEntity(241U);
    msg.setDestination(2147U);
    msg.setDestinationEntity(134U);
    msg.name.assign("PVYKQIKUZYVCRYIZXZACVYTFOBABUTOQEFEGDOFPFDLESFJLTM");

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
    msg.setTimeStamp(0.197917011401);
    msg.setSource(48064U);
    msg.setSourceEntity(102U);
    msg.setDestination(16829U);
    msg.setDestinationEntity(86U);
    msg.name.assign("YOAIHBGARIBTCKSCFWFQFIWMEJLDQMRIACQLNDJWMTFJZOWCSBEYGNYTQRNNAOEGWCXJBEYCAVLGSJXVFYCSXEJORHLDFJAOSNGHPIUHZCYEBPKBASUVNCDUOHGTBVBUATLAUHDRNTLPTOZGGYQDEWZUNPNPKCAWORQJXYDTZVVPHVEZTWLLNKUIQZSKFLMXPMPUZGWESMMPOZVOXVRKQFIHQBSHIQMUDITWRHKKMKUKIELXRYRDY");

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
    msg.setTimeStamp(0.407715547001);
    msg.setSource(1244U);
    msg.setSourceEntity(135U);
    msg.setDestination(20053U);
    msg.setDestinationEntity(155U);
    msg.name.assign("XHAMWQCKXSVHCFXJJFHUBITZOFCYJSESERLTQPRBHMBYIXDELUPMYKSFAJVXCGUNHRDUZXV");

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
    msg.setTimeStamp(0.759356204377);
    msg.setSource(59092U);
    msg.setSourceEntity(137U);
    msg.setDestination(31682U);
    msg.setDestinationEntity(236U);
    msg.name.assign("QRHBLQZZBIHKUXXNJUYPUMTRXJVQTOFPNGSRDNFRDMRXAMOXEWLGPYOINEGYHCHUECUHKOVKIWSNXMQVNGSLCMTTBJGQZUZBOHCVFZDPVFHOUOPVZLCNLPLKVAOSQCYRYUIMFDYMBRZAKQCWGQPZEHLNBFWWDMKTIRXJVGMFDWSJZCJFEEKNXDLCNSAUTKSSAYIVIJRFPYEBOALRAADOGBSIIWGPYCPDHSZX");
    msg.value = 56U;

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
    msg.setTimeStamp(0.942220930798);
    msg.setSource(2450U);
    msg.setSourceEntity(221U);
    msg.setDestination(36848U);
    msg.setDestinationEntity(3U);
    msg.name.assign("KXLPZERDHODZCKUCAMMUKHOMJCCVQZBHLMVFICSZSPVVNANGOJPHHLPPQMXWOHUQJFXQKOISYHLBBUGSQTQCIXSYTRXZAWDPWXUMXMQTAFZNGLWGKLNZDEDHTSEOUHJRPCRRAWWIASWUTYVJZDVEFGBLQNRYENAGGWDDDQKTVADXOREBKKLTELFJAZMYYHOS");
    msg.value = 227U;

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
    msg.setTimeStamp(0.114594376889);
    msg.setSource(45158U);
    msg.setSourceEntity(98U);
    msg.setDestination(54013U);
    msg.setDestinationEntity(145U);
    msg.name.assign("OJEWDQMOXTHERJLCBWQHEYCETJJYZKXIDUVZXCIVKLNLFBOVMIAECYWTTBQTZWLWMSYDICQBXXGREQVSAOMBXGQDPVXKCNIAAYNZULMSMBGFUIYRJWLKFKPWUSFSGJKKNAGJUCLRJHVDRHTRZZQSUHDFEMZZOXNMSOJZZATENHPLVX");
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
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.021110875371);
    msg.setSource(10839U);
    msg.setSourceEntity(78U);
    msg.setDestination(61752U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.468088248744;
    msg.lon = 0.42091687918;
    msg.height = 0.564128733803;
    msg.x = 0.255265809027;
    msg.y = 0.726226614473;
    msg.z = 0.955545934902;
    msg.phi = 0.0359403214647;
    msg.theta = 0.799146888182;
    msg.psi = 0.567495219592;
    msg.u = 0.673082336355;
    msg.v = 0.111427949955;
    msg.w = 0.366973196834;
    msg.vx = 0.0688527029813;
    msg.vy = 0.212834106342;
    msg.vz = 0.318564212756;
    msg.p = 0.615670269294;
    msg.q = 0.0316925613126;
    msg.r = 0.723661758459;
    msg.depth = 0.411393352258;
    msg.alt = 0.271421810023;

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
    msg.setTimeStamp(0.986616022241);
    msg.setSource(65180U);
    msg.setSourceEntity(127U);
    msg.setDestination(32121U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.38370986985;
    msg.lon = 0.8498617489;
    msg.height = 0.39330477516;
    msg.x = 0.479489176193;
    msg.y = 0.390146790497;
    msg.z = 0.840147375264;
    msg.phi = 0.858134609838;
    msg.theta = 0.371794129119;
    msg.psi = 0.0119474222998;
    msg.u = 0.619240995721;
    msg.v = 0.10138161508;
    msg.w = 0.154361854217;
    msg.vx = 0.64895952471;
    msg.vy = 0.790914595243;
    msg.vz = 0.762095548109;
    msg.p = 0.112421052799;
    msg.q = 0.528691292703;
    msg.r = 0.0343597502316;
    msg.depth = 0.425149311889;
    msg.alt = 0.69139959988;

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
    msg.setTimeStamp(0.322791735223);
    msg.setSource(30963U);
    msg.setSourceEntity(251U);
    msg.setDestination(60157U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.760529256432;
    msg.lon = 0.364884058651;
    msg.height = 0.348639285723;
    msg.x = 0.46946338902;
    msg.y = 0.164981847902;
    msg.z = 0.674304521234;
    msg.phi = 0.690876213659;
    msg.theta = 0.178275981721;
    msg.psi = 0.0853932863539;
    msg.u = 0.39098200797;
    msg.v = 0.11640349832;
    msg.w = 0.499911276881;
    msg.vx = 0.357585309401;
    msg.vy = 0.319965003221;
    msg.vz = 0.909216432286;
    msg.p = 0.0341806700164;
    msg.q = 0.352164600078;
    msg.r = 0.267139848395;
    msg.depth = 0.028248848106;
    msg.alt = 0.187247360835;

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
    msg.setTimeStamp(0.981452908033);
    msg.setSource(50522U);
    msg.setSourceEntity(248U);
    msg.setDestination(1976U);
    msg.setDestinationEntity(184U);
    msg.x = 0.0415003596767;
    msg.y = 0.694590762436;
    msg.z = 0.19403011009;

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
    msg.setTimeStamp(0.696454863769);
    msg.setSource(22761U);
    msg.setSourceEntity(148U);
    msg.setDestination(18649U);
    msg.setDestinationEntity(133U);
    msg.x = 0.894492235535;
    msg.y = 0.0756989668543;
    msg.z = 0.733565149622;

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
    msg.setTimeStamp(0.762452376741);
    msg.setSource(47610U);
    msg.setSourceEntity(38U);
    msg.setDestination(23962U);
    msg.setDestinationEntity(253U);
    msg.x = 0.121489859216;
    msg.y = 0.160246916336;
    msg.z = 0.592737432413;

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
    msg.setTimeStamp(0.686667876825);
    msg.setSource(25366U);
    msg.setSourceEntity(152U);
    msg.setDestination(62056U);
    msg.setDestinationEntity(186U);
    msg.value = 0.536905157427;

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
    msg.setTimeStamp(0.428773373555);
    msg.setSource(48273U);
    msg.setSourceEntity(15U);
    msg.setDestination(23653U);
    msg.setDestinationEntity(103U);
    msg.value = 0.872134805622;

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
    msg.setTimeStamp(0.46880718867);
    msg.setSource(15205U);
    msg.setSourceEntity(235U);
    msg.setDestination(61693U);
    msg.setDestinationEntity(254U);
    msg.value = 0.221175705209;

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
    msg.setTimeStamp(0.922304244797);
    msg.setSource(6437U);
    msg.setSourceEntity(114U);
    msg.setDestination(18641U);
    msg.setDestinationEntity(75U);
    msg.value = 0.641319322642;

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
    msg.setTimeStamp(0.508697616439);
    msg.setSource(60343U);
    msg.setSourceEntity(138U);
    msg.setDestination(10462U);
    msg.setDestinationEntity(62U);
    msg.value = 0.398807584578;

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
    msg.setTimeStamp(0.350089682884);
    msg.setSource(17009U);
    msg.setSourceEntity(108U);
    msg.setDestination(61904U);
    msg.setDestinationEntity(18U);
    msg.value = 0.63840353426;

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
    msg.setTimeStamp(0.401259053207);
    msg.setSource(64328U);
    msg.setSourceEntity(16U);
    msg.setDestination(1502U);
    msg.setDestinationEntity(133U);
    msg.x = 0.50943005746;
    msg.y = 0.779343898179;
    msg.z = 0.704862996051;
    msg.phi = 0.383406160712;
    msg.theta = 0.158738412573;
    msg.psi = 0.00244100305507;
    msg.p = 0.604937649961;
    msg.q = 0.312092928664;
    msg.r = 0.767625620387;
    msg.u = 0.300368685163;
    msg.v = 0.832245688021;
    msg.w = 0.648707465522;
    msg.bias_psi = 0.145582992338;
    msg.bias_r = 0.918182455195;

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
    msg.setTimeStamp(0.203810221292);
    msg.setSource(38336U);
    msg.setSourceEntity(20U);
    msg.setDestination(32008U);
    msg.setDestinationEntity(28U);
    msg.x = 0.752877952668;
    msg.y = 0.0228336055384;
    msg.z = 0.177449162606;
    msg.phi = 0.246094823987;
    msg.theta = 0.438267255497;
    msg.psi = 0.724814847627;
    msg.p = 0.973526856449;
    msg.q = 0.412382744375;
    msg.r = 0.789273704236;
    msg.u = 0.765222008418;
    msg.v = 0.574483235102;
    msg.w = 0.194852038104;
    msg.bias_psi = 0.916278092324;
    msg.bias_r = 0.389301356309;

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
    msg.setTimeStamp(0.70598468086);
    msg.setSource(54511U);
    msg.setSourceEntity(137U);
    msg.setDestination(7973U);
    msg.setDestinationEntity(121U);
    msg.x = 0.305969133824;
    msg.y = 0.97885529822;
    msg.z = 0.480530623323;
    msg.phi = 0.233095054557;
    msg.theta = 0.845892992645;
    msg.psi = 0.158261042544;
    msg.p = 0.593645041848;
    msg.q = 0.476647419718;
    msg.r = 0.350995699286;
    msg.u = 0.982944306071;
    msg.v = 0.134419412198;
    msg.w = 0.885888338404;
    msg.bias_psi = 0.915740156037;
    msg.bias_r = 0.0624788931059;

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
    msg.setTimeStamp(0.378347144879);
    msg.setSource(62846U);
    msg.setSourceEntity(147U);
    msg.setDestination(6902U);
    msg.setDestinationEntity(93U);
    msg.bias_psi = 0.30112340771;
    msg.bias_r = 0.738703950068;
    msg.cog = 0.478935640535;
    msg.cyaw = 0.819085392631;
    msg.lbl_rej_level = 0.27293261073;
    msg.gps_rej_level = 0.562550289021;
    msg.custom_x = 0.716117563593;
    msg.custom_y = 0.88485373249;
    msg.custom_z = 0.182767491035;

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
    msg.setTimeStamp(0.127099866638);
    msg.setSource(5269U);
    msg.setSourceEntity(73U);
    msg.setDestination(49002U);
    msg.setDestinationEntity(143U);
    msg.bias_psi = 0.34228248634;
    msg.bias_r = 0.166297653394;
    msg.cog = 0.578920024033;
    msg.cyaw = 0.274522702503;
    msg.lbl_rej_level = 0.692189461429;
    msg.gps_rej_level = 0.952725786112;
    msg.custom_x = 0.335513628831;
    msg.custom_y = 0.888537990656;
    msg.custom_z = 0.147924444016;

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
    msg.setTimeStamp(0.832271539672);
    msg.setSource(17586U);
    msg.setSourceEntity(235U);
    msg.setDestination(11881U);
    msg.setDestinationEntity(93U);
    msg.bias_psi = 0.988696662067;
    msg.bias_r = 0.0019241146908;
    msg.cog = 0.0293870116482;
    msg.cyaw = 0.4114565604;
    msg.lbl_rej_level = 0.846099534866;
    msg.gps_rej_level = 0.554654980357;
    msg.custom_x = 0.370498329304;
    msg.custom_y = 0.881525753831;
    msg.custom_z = 0.287591130183;

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
    msg.setTimeStamp(0.257048736909);
    msg.setSource(46379U);
    msg.setSourceEntity(150U);
    msg.setDestination(27610U);
    msg.setDestinationEntity(172U);
    msg.utc_time = 0.458706346312;
    msg.reason = 5U;

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
    msg.setTimeStamp(0.100878392231);
    msg.setSource(38126U);
    msg.setSourceEntity(161U);
    msg.setDestination(20940U);
    msg.setDestinationEntity(134U);
    msg.utc_time = 0.693875658978;
    msg.reason = 226U;

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
    msg.setTimeStamp(0.138923151684);
    msg.setSource(18419U);
    msg.setSourceEntity(193U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(211U);
    msg.utc_time = 0.840385879743;
    msg.reason = 134U;

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
    msg.setTimeStamp(0.078245263631);
    msg.setSource(36198U);
    msg.setSourceEntity(231U);
    msg.setDestination(16122U);
    msg.setDestinationEntity(45U);
    msg.id = 234U;
    msg.range = 0.807585589;
    msg.acceptance = 11U;

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
    msg.setTimeStamp(0.677261655768);
    msg.setSource(29750U);
    msg.setSourceEntity(186U);
    msg.setDestination(5349U);
    msg.setDestinationEntity(112U);
    msg.id = 121U;
    msg.range = 0.215580010803;
    msg.acceptance = 166U;

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
    msg.setTimeStamp(0.350090844527);
    msg.setSource(42199U);
    msg.setSourceEntity(90U);
    msg.setDestination(43114U);
    msg.setDestinationEntity(4U);
    msg.id = 74U;
    msg.range = 0.74670088693;
    msg.acceptance = 173U;

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
    msg.setTimeStamp(0.202626288706);
    msg.setSource(26521U);
    msg.setSourceEntity(218U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(35U);
    msg.type = 11U;
    msg.reason = 94U;
    msg.value = 0.529904782944;
    msg.timestep = 0.986207652927;

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
    msg.setTimeStamp(0.717260052074);
    msg.setSource(31122U);
    msg.setSourceEntity(213U);
    msg.setDestination(61755U);
    msg.setDestinationEntity(206U);
    msg.type = 195U;
    msg.reason = 34U;
    msg.value = 0.0133341683068;
    msg.timestep = 0.678608859703;

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
    msg.setTimeStamp(0.167640062532);
    msg.setSource(42264U);
    msg.setSourceEntity(125U);
    msg.setDestination(11343U);
    msg.setDestinationEntity(131U);
    msg.type = 141U;
    msg.reason = 170U;
    msg.value = 0.695058983672;
    msg.timestep = 0.81374898318;

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
    msg.setTimeStamp(0.156936016796);
    msg.setSource(20877U);
    msg.setSourceEntity(111U);
    msg.setDestination(38643U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.550375834397);
    msg.setSource(36574U);
    msg.setSourceEntity(66U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.883932066335);
    msg.setSource(25460U);
    msg.setSourceEntity(243U);
    msg.setDestination(27079U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.513461714672);
    msg.setSource(50923U);
    msg.setSourceEntity(211U);
    msg.setDestination(38992U);
    msg.setDestinationEntity(153U);
    msg.beacon.assign("WMTNMPGKXYZHXRSDBJIYIWRICIFWTPEJELQLEVGJAIRSDOBNOHOQOGQJZETPSLCGMHNSZXEHCNUBYRCTIIHUOSOIFWVVSYMUDXQEETTGGMGVQDUHNNAPJKIDAPRMBZWZDLRUBNXELZVPBXKQGNBFPEGKTWAZGDJOWTHQH");
    msg.x = 0.891717298952;
    msg.y = 0.648606221872;
    msg.depth = 0.0556584447427;
    msg.var_x = 0.585186709589;
    msg.var_y = 0.0949005128374;

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
    msg.setTimeStamp(0.937324888581);
    msg.setSource(43759U);
    msg.setSourceEntity(227U);
    msg.setDestination(35614U);
    msg.setDestinationEntity(44U);
    msg.beacon.assign("DVQBKJSCYLMUINCMRUWYCXGPUSMRVTGXE");
    msg.x = 0.972749209335;
    msg.y = 0.460217535495;
    msg.depth = 0.166759687468;
    msg.var_x = 0.15393862453;
    msg.var_y = 0.870972424625;

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
    msg.setTimeStamp(0.636484341188);
    msg.setSource(40900U);
    msg.setSourceEntity(244U);
    msg.setDestination(64204U);
    msg.setDestinationEntity(121U);
    msg.beacon.assign("OKVRWOZOAZGGOIVEOSUFW");
    msg.x = 0.304444543685;
    msg.y = 0.833225990451;
    msg.depth = 0.47533311922;
    msg.var_x = 0.989440311478;
    msg.var_y = 0.0104083167709;

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
    msg.setTimeStamp(0.23918047646);
    msg.setSource(21728U);
    msg.setSourceEntity(47U);
    msg.setDestination(18812U);
    msg.setDestinationEntity(51U);
    msg.state = 95U;

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
    msg.setTimeStamp(0.632792710455);
    msg.setSource(12599U);
    msg.setSourceEntity(221U);
    msg.setDestination(28583U);
    msg.setDestinationEntity(18U);
    msg.state = 52U;

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
    msg.setTimeStamp(0.982725509848);
    msg.setSource(7565U);
    msg.setSourceEntity(229U);
    msg.setDestination(17780U);
    msg.setDestinationEntity(14U);
    msg.state = 203U;

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
    msg.setTimeStamp(0.588241256126);
    msg.setSource(41083U);
    msg.setSourceEntity(215U);
    msg.setDestination(54964U);
    msg.setDestinationEntity(92U);
    msg.value = 0.787740582311;

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
    msg.setTimeStamp(0.957280022478);
    msg.setSource(2323U);
    msg.setSourceEntity(64U);
    msg.setDestination(7742U);
    msg.setDestinationEntity(189U);
    msg.value = 0.552424167444;

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
    msg.setTimeStamp(0.464373211272);
    msg.setSource(36831U);
    msg.setSourceEntity(214U);
    msg.setDestination(8135U);
    msg.setDestinationEntity(237U);
    msg.value = 0.197108351692;

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
    msg.setTimeStamp(0.604817370486);
    msg.setSource(6752U);
    msg.setSourceEntity(140U);
    msg.setDestination(7344U);
    msg.setDestinationEntity(240U);
    msg.value = 0.894728395143;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.915445956275);
    msg.setSource(50013U);
    msg.setSourceEntity(208U);
    msg.setDestination(29661U);
    msg.setDestinationEntity(207U);
    msg.value = 0.829245415739;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.59448894651);
    msg.setSource(5384U);
    msg.setSourceEntity(51U);
    msg.setDestination(13423U);
    msg.setDestinationEntity(224U);
    msg.value = 0.351438165752;
    msg.z_units = 136U;

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
    msg.setTimeStamp(0.822764421148);
    msg.setSource(55399U);
    msg.setSourceEntity(209U);
    msg.setDestination(37685U);
    msg.setDestinationEntity(20U);
    msg.value = 0.786786207543;
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
    msg.setTimeStamp(0.79022561321);
    msg.setSource(35687U);
    msg.setSourceEntity(244U);
    msg.setDestination(12542U);
    msg.setDestinationEntity(185U);
    msg.value = 0.470163220313;
    msg.speed_units = 67U;

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
    msg.setTimeStamp(0.432518728846);
    msg.setSource(10240U);
    msg.setSourceEntity(150U);
    msg.setDestination(54796U);
    msg.setDestinationEntity(116U);
    msg.value = 0.774424250212;
    msg.speed_units = 79U;

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
    msg.setTimeStamp(0.478623922879);
    msg.setSource(36226U);
    msg.setSourceEntity(194U);
    msg.setDestination(56229U);
    msg.setDestinationEntity(204U);
    msg.value = 0.748135005608;

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
    msg.setTimeStamp(0.949862785097);
    msg.setSource(60439U);
    msg.setSourceEntity(216U);
    msg.setDestination(46010U);
    msg.setDestinationEntity(194U);
    msg.value = 0.692305360671;

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
    msg.setTimeStamp(0.13510149162);
    msg.setSource(21364U);
    msg.setSourceEntity(180U);
    msg.setDestination(18599U);
    msg.setDestinationEntity(138U);
    msg.value = 0.950538783823;

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
    msg.setTimeStamp(0.865285838606);
    msg.setSource(2965U);
    msg.setSourceEntity(201U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(84U);
    msg.value = 0.511068549959;

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
    msg.setTimeStamp(0.54192086907);
    msg.setSource(32602U);
    msg.setSourceEntity(238U);
    msg.setDestination(37492U);
    msg.setDestinationEntity(102U);
    msg.value = 0.428865456041;

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
    msg.setTimeStamp(0.146607752593);
    msg.setSource(4755U);
    msg.setSourceEntity(132U);
    msg.setDestination(29468U);
    msg.setDestinationEntity(241U);
    msg.value = 0.638429695976;

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
    msg.setTimeStamp(0.45978990626);
    msg.setSource(35036U);
    msg.setSourceEntity(182U);
    msg.setDestination(36941U);
    msg.setDestinationEntity(190U);
    msg.value = 0.353204209304;

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
    msg.setTimeStamp(0.884611124618);
    msg.setSource(63896U);
    msg.setSourceEntity(96U);
    msg.setDestination(28075U);
    msg.setDestinationEntity(13U);
    msg.value = 0.133471902939;

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
    msg.setTimeStamp(0.921940779527);
    msg.setSource(35507U);
    msg.setSourceEntity(94U);
    msg.setDestination(30360U);
    msg.setDestinationEntity(126U);
    msg.value = 0.337601508342;

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
    msg.setTimeStamp(0.410999720699);
    msg.setSource(3087U);
    msg.setSourceEntity(43U);
    msg.setDestination(31904U);
    msg.setDestinationEntity(178U);
    msg.start_lat = 0.0833331475195;
    msg.start_lon = 0.091029240416;
    msg.start_z = 0.600176714683;
    msg.start_z_units = 206U;
    msg.end_lat = 0.243674090902;
    msg.end_lon = 0.62850897012;
    msg.end_z = 0.824698971826;
    msg.end_z_units = 127U;
    msg.speed = 0.809516352028;
    msg.speed_units = 72U;
    msg.lradius = 0.912416463783;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.840382558111);
    msg.setSource(7697U);
    msg.setSourceEntity(85U);
    msg.setDestination(24371U);
    msg.setDestinationEntity(75U);
    msg.start_lat = 0.487980826574;
    msg.start_lon = 0.0623237391113;
    msg.start_z = 0.126622437182;
    msg.start_z_units = 236U;
    msg.end_lat = 0.127871428848;
    msg.end_lon = 0.422012732091;
    msg.end_z = 0.629316653865;
    msg.end_z_units = 156U;
    msg.speed = 0.532785639227;
    msg.speed_units = 186U;
    msg.lradius = 0.277734169432;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.737011016193);
    msg.setSource(62037U);
    msg.setSourceEntity(238U);
    msg.setDestination(26541U);
    msg.setDestinationEntity(66U);
    msg.start_lat = 0.405278226984;
    msg.start_lon = 0.662223581924;
    msg.start_z = 0.339403506897;
    msg.start_z_units = 62U;
    msg.end_lat = 0.48436439603;
    msg.end_lon = 0.125009742228;
    msg.end_z = 0.956984152687;
    msg.end_z_units = 231U;
    msg.speed = 0.072117015083;
    msg.speed_units = 124U;
    msg.lradius = 0.559886704996;
    msg.flags = 96U;

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
    msg.setTimeStamp(0.309587240711);
    msg.setSource(20909U);
    msg.setSourceEntity(102U);
    msg.setDestination(11838U);
    msg.setDestinationEntity(182U);
    msg.x = 0.56894933658;
    msg.y = 0.365420703496;
    msg.z = 0.381650905018;
    msg.k = 0.621582608147;
    msg.m = 0.877389775219;
    msg.n = 0.0349043776629;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.5902481702);
    msg.setSource(23654U);
    msg.setSourceEntity(185U);
    msg.setDestination(21633U);
    msg.setDestinationEntity(10U);
    msg.x = 0.708346302008;
    msg.y = 0.0209970993836;
    msg.z = 0.936326237455;
    msg.k = 0.117151198846;
    msg.m = 0.100932656073;
    msg.n = 0.288436350716;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.106840471044);
    msg.setSource(62211U);
    msg.setSourceEntity(184U);
    msg.setDestination(49557U);
    msg.setDestinationEntity(236U);
    msg.x = 0.724018688114;
    msg.y = 0.0182090994167;
    msg.z = 0.671231956764;
    msg.k = 0.96771584894;
    msg.m = 0.921730637568;
    msg.n = 0.137776002958;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.0934063101541);
    msg.setSource(45553U);
    msg.setSourceEntity(58U);
    msg.setDestination(62328U);
    msg.setDestinationEntity(253U);
    msg.value = 0.0571972780786;

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
    msg.setTimeStamp(0.68072860699);
    msg.setSource(58201U);
    msg.setSourceEntity(12U);
    msg.setDestination(51067U);
    msg.setDestinationEntity(134U);
    msg.value = 0.144457533281;

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
    msg.setTimeStamp(0.270412943904);
    msg.setSource(10502U);
    msg.setSourceEntity(242U);
    msg.setDestination(65391U);
    msg.setDestinationEntity(239U);
    msg.value = 0.356852732141;

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
    msg.setTimeStamp(0.0937868948168);
    msg.setSource(5073U);
    msg.setSourceEntity(115U);
    msg.setDestination(20233U);
    msg.setDestinationEntity(99U);
    msg.u = 0.60772506961;
    msg.v = 0.615724634828;
    msg.w = 0.211867467745;
    msg.p = 0.729682885092;
    msg.q = 0.868713780771;
    msg.r = 0.467381762593;
    msg.flags = 81U;

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
    msg.setTimeStamp(0.521619591911);
    msg.setSource(55131U);
    msg.setSourceEntity(211U);
    msg.setDestination(48459U);
    msg.setDestinationEntity(116U);
    msg.u = 0.781074073071;
    msg.v = 0.829611949594;
    msg.w = 0.345715394161;
    msg.p = 0.11761647376;
    msg.q = 0.731472906827;
    msg.r = 0.660050648608;
    msg.flags = 189U;

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
    msg.setTimeStamp(0.862554154264);
    msg.setSource(50292U);
    msg.setSourceEntity(71U);
    msg.setDestination(27343U);
    msg.setDestinationEntity(47U);
    msg.u = 0.966811951551;
    msg.v = 0.452056017848;
    msg.w = 0.848700076576;
    msg.p = 0.0886882281791;
    msg.q = 0.884886650617;
    msg.r = 0.639883745565;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.623773394783);
    msg.setSource(55214U);
    msg.setSourceEntity(239U);
    msg.setDestination(64232U);
    msg.setDestinationEntity(20U);
    msg.start_lat = 0.175110180002;
    msg.start_lon = 0.707908381175;
    msg.start_z = 0.186872487235;
    msg.start_z_units = 37U;
    msg.end_lat = 0.755958904524;
    msg.end_lon = 0.441645115616;
    msg.end_z = 0.0494169902423;
    msg.end_z_units = 16U;
    msg.lradius = 0.229937879447;
    msg.flags = 37U;
    msg.x = 0.705110019244;
    msg.y = 0.111357115459;
    msg.z = 0.590433222493;
    msg.vx = 0.477556464307;
    msg.vy = 0.994877778601;
    msg.vz = 0.0983626721103;
    msg.course_error = 0.818115956802;
    msg.eta = 36345U;

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
    msg.setTimeStamp(0.307814270169);
    msg.setSource(63329U);
    msg.setSourceEntity(82U);
    msg.setDestination(54908U);
    msg.setDestinationEntity(157U);
    msg.start_lat = 0.393150677374;
    msg.start_lon = 0.986945979698;
    msg.start_z = 0.218269607148;
    msg.start_z_units = 49U;
    msg.end_lat = 0.0967610287328;
    msg.end_lon = 0.928055744018;
    msg.end_z = 0.528552935052;
    msg.end_z_units = 51U;
    msg.lradius = 0.0844177663553;
    msg.flags = 142U;
    msg.x = 0.262737148689;
    msg.y = 0.443348800142;
    msg.z = 0.348336174894;
    msg.vx = 0.97297958026;
    msg.vy = 0.458060408085;
    msg.vz = 0.91040181484;
    msg.course_error = 0.512886036774;
    msg.eta = 15037U;

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
    msg.setTimeStamp(0.662953633749);
    msg.setSource(64423U);
    msg.setSourceEntity(239U);
    msg.setDestination(51842U);
    msg.setDestinationEntity(55U);
    msg.start_lat = 0.738614716028;
    msg.start_lon = 0.8156696712;
    msg.start_z = 0.286550827385;
    msg.start_z_units = 95U;
    msg.end_lat = 0.0351347740591;
    msg.end_lon = 0.629711801655;
    msg.end_z = 0.741075112149;
    msg.end_z_units = 187U;
    msg.lradius = 0.535981597941;
    msg.flags = 60U;
    msg.x = 0.30291884907;
    msg.y = 0.0512027893724;
    msg.z = 0.516798803602;
    msg.vx = 0.306353148645;
    msg.vy = 0.274045676628;
    msg.vz = 0.747168385851;
    msg.course_error = 0.0884969458498;
    msg.eta = 29880U;

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
    msg.setTimeStamp(0.957222115301);
    msg.setSource(60455U);
    msg.setSourceEntity(26U);
    msg.setDestination(26566U);
    msg.setDestinationEntity(229U);
    msg.k = 0.914477524262;
    msg.m = 0.88804748685;
    msg.n = 0.545791812683;

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
    msg.setTimeStamp(0.360889221864);
    msg.setSource(26948U);
    msg.setSourceEntity(35U);
    msg.setDestination(29827U);
    msg.setDestinationEntity(91U);
    msg.k = 0.0701012974419;
    msg.m = 0.659904416586;
    msg.n = 0.912058060433;

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
    msg.setTimeStamp(0.811947472683);
    msg.setSource(28612U);
    msg.setSourceEntity(161U);
    msg.setDestination(44874U);
    msg.setDestinationEntity(253U);
    msg.k = 0.0281499227682;
    msg.m = 0.620435208776;
    msg.n = 0.87257016003;

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
    msg.setTimeStamp(0.899494251811);
    msg.setSource(41865U);
    msg.setSourceEntity(142U);
    msg.setDestination(55026U);
    msg.setDestinationEntity(147U);
    msg.p = 0.621056455737;
    msg.i = 0.220571607588;
    msg.d = 0.550524496305;
    msg.a = 0.74215248136;

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
    msg.setTimeStamp(0.724448637087);
    msg.setSource(4800U);
    msg.setSourceEntity(31U);
    msg.setDestination(11538U);
    msg.setDestinationEntity(172U);
    msg.p = 0.22201738591;
    msg.i = 0.23626275118;
    msg.d = 0.277020111051;
    msg.a = 0.448949542554;

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
    msg.setTimeStamp(0.920481731749);
    msg.setSource(55081U);
    msg.setSourceEntity(148U);
    msg.setDestination(60717U);
    msg.setDestinationEntity(118U);
    msg.p = 0.0163200854844;
    msg.i = 0.318323344129;
    msg.d = 0.401819607595;
    msg.a = 0.32432749101;

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
    msg.setTimeStamp(0.116969003286);
    msg.setSource(15888U);
    msg.setSourceEntity(250U);
    msg.setDestination(2793U);
    msg.setDestinationEntity(252U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.105781180942);
    msg.setSource(16782U);
    msg.setSourceEntity(250U);
    msg.setDestination(14698U);
    msg.setDestinationEntity(24U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.290512182953);
    msg.setSource(35243U);
    msg.setSourceEntity(68U);
    msg.setDestination(11315U);
    msg.setDestinationEntity(133U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.229043766471);
    msg.setSource(59010U);
    msg.setSourceEntity(177U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(213U);
    msg.timeout = 59408U;
    msg.lat = 0.258497391285;
    msg.lon = 0.0380172667621;
    msg.z = 0.293818181894;
    msg.z_units = 205U;
    msg.speed = 0.478248259739;
    msg.speed_units = 113U;
    msg.roll = 0.681827408211;
    msg.pitch = 0.49262375557;
    msg.yaw = 0.633496354261;
    msg.custom.assign("PLWGVVNNUVBGASRQMPWOGQODRSTYSDAVIQLYYICAJWPDCXIRYIOUIYZIHAJJJIMCTEWSZGPHSLEDGYLRLFCVMLYHNCSAZUFSTCPYWOBPDSMFTKZKLDGHGASFUBXIWGMCVUPBLAPXKTLMKQVUMRQKEKMRPXBRZFDXNHQTHBYJRRZOFPEIKVWKNJMCXQVFETOWLBZQXEEABFAKTXVBF");

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
    msg.setTimeStamp(0.866437409471);
    msg.setSource(57501U);
    msg.setSourceEntity(139U);
    msg.setDestination(32631U);
    msg.setDestinationEntity(68U);
    msg.timeout = 19367U;
    msg.lat = 0.494361370755;
    msg.lon = 0.437340256706;
    msg.z = 0.820450021597;
    msg.z_units = 86U;
    msg.speed = 0.692452337134;
    msg.speed_units = 98U;
    msg.roll = 0.602119154042;
    msg.pitch = 0.4448423222;
    msg.yaw = 0.621588448515;
    msg.custom.assign("IXNAKUJYDXPWVLOKAYLZWMGHNEOETYSFJPKSXVKDATWOGBRENWYCHPLEUTLUCYBOZYKCNTJLUEQXETWSIKRMBSJLHUIZINNDSEZOFIXQAQZPZLNJJLBVHMVVRWAZAZUBQCRHWCOTFMWVOUIYVPNKPPVZNDSGUGXRZBGDFLGVRDTRAXSCCJKDMBCMHFMAKGPJRWHISSTHCQLTUQGCQYHYIDXKIRDDJFXXESHUGFABAOPVOGEFMYFIJQB");

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
    msg.setTimeStamp(0.974475696514);
    msg.setSource(5185U);
    msg.setSourceEntity(38U);
    msg.setDestination(28678U);
    msg.setDestinationEntity(163U);
    msg.timeout = 51626U;
    msg.lat = 0.424873483785;
    msg.lon = 0.242019209094;
    msg.z = 0.0824287275306;
    msg.z_units = 185U;
    msg.speed = 0.365222869285;
    msg.speed_units = 76U;
    msg.roll = 0.860677658229;
    msg.pitch = 0.559133038995;
    msg.yaw = 0.0554125724093;
    msg.custom.assign("NXHUEQOKGRBXGWMQYLRKILYFQPVSSTOJHTTMHMTDATIPMXSLUOMHYAZJUIDDJPBRLHDVPQZIEQNCWUCFSELBCGNFOWOMSZDFERBKUCUZQNPXHYJCJNUAXRYMIBCAESVZULAWTYNJQIWNEGXSUVDMMBPJKLYSZIPKDDFFJGYEXFWKOBOHGVLS");

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
    msg.setTimeStamp(0.897331463366);
    msg.setSource(65481U);
    msg.setSourceEntity(18U);
    msg.setDestination(1569U);
    msg.setDestinationEntity(182U);
    msg.timeout = 7674U;
    msg.lat = 0.172845654052;
    msg.lon = 0.60256277387;
    msg.z = 0.0473030073287;
    msg.z_units = 246U;
    msg.speed = 0.440971396315;
    msg.speed_units = 181U;
    msg.duration = 2065U;
    msg.radius = 0.999313638562;
    msg.flags = 231U;
    msg.custom.assign("JTMJWFTZLODFWPGKJXLEKVJJINXJZCPZXDMIHRWNKIGURLWPJIDCCLWSXNMTOXRIFQCXSCXDMZIQTNQYAGHFEEDIYYQOUSSZNAZCHDPEGBTCRDYBYJFGAEVHUOKKNQNSUBWMMSXHPUYCVAAFSKVCAIMKRZLDTVVSBGR");

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
    msg.setTimeStamp(0.649431036337);
    msg.setSource(18941U);
    msg.setSourceEntity(2U);
    msg.setDestination(43523U);
    msg.setDestinationEntity(231U);
    msg.timeout = 28095U;
    msg.lat = 0.377040363987;
    msg.lon = 0.589940152489;
    msg.z = 0.631242476182;
    msg.z_units = 194U;
    msg.speed = 0.547673478733;
    msg.speed_units = 227U;
    msg.duration = 26785U;
    msg.radius = 0.764381704129;
    msg.flags = 1U;
    msg.custom.assign("FVQIWVFUMYYBASUJDVYCAATLUUMJVABSGXNHTCEYPGJQXYMUNSLQRHOVYTKNIILGNYKHBSUDVUDDCFYATCFJRQWBSPZOBUQIXFHNZQJCRMIKGNFWZNCWKIOTIDUKAEODZKDCEBJDBFAOTWMLOPIXAAFTJVXMBLRCRZTYEFUJGXPEDHJLQNVRPTFGKGPROVRWLNRWXDEZZWLSHC");

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
    msg.setTimeStamp(0.29234494853);
    msg.setSource(55890U);
    msg.setSourceEntity(43U);
    msg.setDestination(12952U);
    msg.setDestinationEntity(229U);
    msg.timeout = 26629U;
    msg.lat = 0.653535049374;
    msg.lon = 0.282052305364;
    msg.z = 0.598284592857;
    msg.z_units = 213U;
    msg.speed = 0.775360980574;
    msg.speed_units = 158U;
    msg.duration = 25603U;
    msg.radius = 0.853398327991;
    msg.flags = 8U;
    msg.custom.assign("XRUSPHHEBJWFDWXUXNMSINQMBTCROUJZKRMFPTPZVESGRIBOCYDQOMSMDAOOPUYNTCYXURIOTXKIVTOSNFOFKXHLVXAONRYEBKIDPCTUNHPCWJPPIFICXPJLRDSHKGFLKFDLQMQNWMAKWANTWUGJATJGXGWTVCLSZIEHLTQSSLBLRFDQEVZGMJQYRVZHGFBYAGCLHQUYZMWWQWKYIA");

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
    msg.setTimeStamp(0.979043374041);
    msg.setSource(49113U);
    msg.setSourceEntity(0U);
    msg.setDestination(48852U);
    msg.setDestinationEntity(202U);
    msg.custom.assign("VSQHHFODLFYMFJHXQSDUTYAOWLQPNJSEDDTYWJRKAHZNIKUTFWSUIOAMTJWTOXQJDAHESOKXWPMCAYPGJUTDAILBVMCBBXULDVRFTYPGPKXMBSHNPORERTQYSREIYHXZAUHTPLLIBENZKU");

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
    msg.setTimeStamp(0.860540417528);
    msg.setSource(8838U);
    msg.setSourceEntity(36U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(119U);
    msg.custom.assign("UHLHPHSTMXBLDYXDFCVACPNNJIWMASNQTOOJZFGTPFQFKCVHEOQRKJXRYBXLTUSLHOD");

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
    msg.setTimeStamp(0.415986767941);
    msg.setSource(849U);
    msg.setSourceEntity(23U);
    msg.setDestination(15491U);
    msg.setDestinationEntity(66U);
    msg.custom.assign("WIJDCZNABATSVOJEJABIQSWTJEGRUCXLSL");

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
    msg.setTimeStamp(0.402953801759);
    msg.setSource(13449U);
    msg.setSourceEntity(48U);
    msg.setDestination(1073U);
    msg.setDestinationEntity(128U);
    msg.timeout = 11379U;
    msg.lat = 0.294456730608;
    msg.lon = 0.96885394991;
    msg.z = 0.573980183353;
    msg.z_units = 68U;
    msg.duration = 58088U;
    msg.speed = 0.233993424202;
    msg.speed_units = 74U;
    msg.type = 61U;
    msg.radius = 0.943436576613;
    msg.length = 0.834314354727;
    msg.bearing = 0.937487352308;
    msg.direction = 61U;
    msg.custom.assign("YYKHWXKZWYZJCWYOSBLMZSEXMAHEIPEIGPFPTZMLPRAYNGGQQOEHIERYUUONLDGHZVXYMAMGXJADGKHVEWUDQUOWRBCDZYAMOOLLLATHSWLBOBZIVVBRVGCFQQYEOCAJTXNXFTPXINKBAILCBWWWCUZDLSDCPKSGSSIVZLRVSPNCGHUNEVRCTQEYNMOTD");

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
    msg.setTimeStamp(0.321550688091);
    msg.setSource(2625U);
    msg.setSourceEntity(124U);
    msg.setDestination(37370U);
    msg.setDestinationEntity(20U);
    msg.timeout = 51050U;
    msg.lat = 0.973659231261;
    msg.lon = 0.53054453587;
    msg.z = 0.319458796156;
    msg.z_units = 19U;
    msg.duration = 52636U;
    msg.speed = 0.765601029826;
    msg.speed_units = 121U;
    msg.type = 40U;
    msg.radius = 0.321582965484;
    msg.length = 0.78550521182;
    msg.bearing = 0.238030661638;
    msg.direction = 229U;
    msg.custom.assign("PZGWVFVCHGFHQQNPQFVCDVGARYFKMLMNTXPWGPOLIJXYCQQKXPIHM");

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
    msg.setTimeStamp(0.639929326161);
    msg.setSource(38273U);
    msg.setSourceEntity(227U);
    msg.setDestination(15199U);
    msg.setDestinationEntity(232U);
    msg.timeout = 23365U;
    msg.lat = 0.411884591009;
    msg.lon = 0.372107550813;
    msg.z = 0.7458889432;
    msg.z_units = 172U;
    msg.duration = 13371U;
    msg.speed = 0.649023093293;
    msg.speed_units = 197U;
    msg.type = 178U;
    msg.radius = 0.533939396722;
    msg.length = 0.0522065077074;
    msg.bearing = 0.64533310104;
    msg.direction = 27U;
    msg.custom.assign("NAHQNOGUVACYHHWLDFIKBEIANLPTPMRUUVCBXFKQYNESOVCONWFPCQBRH");

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
    msg.setTimeStamp(0.745532694359);
    msg.setSource(13187U);
    msg.setSourceEntity(92U);
    msg.setDestination(29630U);
    msg.setDestinationEntity(144U);
    msg.duration = 50231U;
    msg.custom.assign("HLCTTRMAKEBZXMUOQDRTIMRIUKUAOPNTDWXQMUVSESCSSBDMHFLXMUJUIGDSMLRAXOAKQVEXCLZMEZEVCYAGSBECZVGNOFTLWGYBZKLHPIXQHJBAUIUWLBUDY");

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
    msg.setTimeStamp(0.716160427187);
    msg.setSource(39845U);
    msg.setSourceEntity(192U);
    msg.setDestination(46939U);
    msg.setDestinationEntity(194U);
    msg.duration = 35122U;
    msg.custom.assign("VPWOVFNKIRQTLJATUWOXMWGGTGNVIURDQNVSYZSQCMLJCNOOEFSQNVHXQVBJHJGEIKYYLYGTHPKCZIRQIHSMMODQVQZMUMARXQTSJAHGHHVLJFNZYCADYJNCMBXMASEFRLZIAFCBIRCTXDZUTKXUYWFHEO");

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
    msg.setTimeStamp(0.00306732863573);
    msg.setSource(15092U);
    msg.setSourceEntity(228U);
    msg.setDestination(9850U);
    msg.setDestinationEntity(7U);
    msg.duration = 27354U;
    msg.custom.assign("SXHNGRJEPJCGRIAFZVLKIIQEREWLHNWRYYOCZJKTGWZPVBBWOXQMMZQLEHYIOKPNAQUZJCBBVUBQGDMATHKFWQFEQXHKYFNOLMDZAMGRPFPBTQPPDSIMFCIRFQYIMOUGUZDGUYKTMRCQOXEZKPAGWCOKONCJAAOWKRMDXTMTBUSLLBJY");

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
    msg.setTimeStamp(0.492423797578);
    msg.setSource(40523U);
    msg.setSourceEntity(97U);
    msg.setDestination(61064U);
    msg.setDestinationEntity(96U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.23705729059;
    msg.control.set(tmp_msg_0);
    msg.duration = 36084U;
    msg.custom.assign("KYPVTPLNCAWFJEJVOTUIIFKWSVTGSKAUMBHYRBJEOWHZCQCTTBQIYWDGTXRMCPRHQHONJGZMLHPXBTXZKEUHMNCYUNZFVVSFIIAAGKFBWIFKZYJDWIFPWQZSRAXSVGPUFFNBDTJQXLDKPQVHMODVLOQ");

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
    msg.setTimeStamp(0.556341108927);
    msg.setSource(8535U);
    msg.setSourceEntity(178U);
    msg.setDestination(53395U);
    msg.setDestinationEntity(55U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.859568590578;
    tmp_msg_0.start_lon = 0.0968036525862;
    tmp_msg_0.start_z = 0.947540276457;
    tmp_msg_0.start_z_units = 221U;
    tmp_msg_0.end_lat = 0.242507027952;
    tmp_msg_0.end_lon = 0.439072152895;
    tmp_msg_0.end_z = 0.151850494516;
    tmp_msg_0.end_z_units = 193U;
    tmp_msg_0.speed = 0.685457307967;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.lradius = 0.297392707895;
    tmp_msg_0.flags = 193U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62573U;
    msg.custom.assign("PFSAKCQMXIHYSOOLBPHGAPPQUUDTFXFBR");

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
    msg.setTimeStamp(0.440875211839);
    msg.setSource(47841U);
    msg.setSourceEntity(87U);
    msg.setDestination(13036U);
    msg.setDestinationEntity(123U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.4908173978;
    tmp_msg_0.z_units = 15U;
    msg.control.set(tmp_msg_0);
    msg.duration = 47041U;
    msg.custom.assign("ECAQMMMFTDSTOKASVJFITQBJQXSFPDNRICGCMJNHVWOHMBEYFIKPZYNUQJCMXUSFAVGIUTVCNAERSYQEBUOIBOAXDKILRPGDQSTIHSGUDTZBCXKGMNZWIPCIOYUEDPAOLGLEPJWRBDZQJOXVDRNLXRHWBMO");

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
    msg.setTimeStamp(0.757091269009);
    msg.setSource(56671U);
    msg.setSourceEntity(86U);
    msg.setDestination(43087U);
    msg.setDestinationEntity(198U);
    msg.timeout = 669U;
    msg.lat = 0.558673730674;
    msg.lon = 0.072041921775;
    msg.z = 0.385201994912;
    msg.z_units = 21U;
    msg.speed = 0.823894847583;
    msg.speed_units = 2U;
    msg.bearing = 0.986127909659;
    msg.cross_angle = 0.499924947032;
    msg.width = 0.915300257155;
    msg.length = 0.48180958286;
    msg.hstep = 0.491146698099;
    msg.coff = 174U;
    msg.alternation = 23U;
    msg.flags = 102U;
    msg.custom.assign("DMXQJCZDJUOWXBJASBPIADSDJFBVMFFSFWUMTYNURGQZJQRPPWHUVDOXLAPBPFABHYOPZAFQHGGGRUGXNCKEFUTEUETZDIYVCNYLMRBALHLUFWPNSIGGXSWZECPTJGVRZVEBIOPEVZCCRWQLALCEOMTQKWIKGYTONYVNDSRLNKAWRHJUVDTPKUQSEASXZRY");

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
    msg.setTimeStamp(0.554329893442);
    msg.setSource(24549U);
    msg.setSourceEntity(185U);
    msg.setDestination(41447U);
    msg.setDestinationEntity(11U);
    msg.timeout = 18817U;
    msg.lat = 0.136280821549;
    msg.lon = 0.209992293224;
    msg.z = 0.381426962002;
    msg.z_units = 182U;
    msg.speed = 0.111880455138;
    msg.speed_units = 57U;
    msg.bearing = 0.907294812618;
    msg.cross_angle = 0.21317104805;
    msg.width = 0.230660862053;
    msg.length = 0.931623163893;
    msg.hstep = 0.690655626591;
    msg.coff = 178U;
    msg.alternation = 237U;
    msg.flags = 63U;
    msg.custom.assign("MUKIGBWCZJAXLMXTDQCKATJNZNSEIHFVHIOXUUJCESKYEXEOQDPHWVIRUCPAOZMAXNJDXNNCJQKWOYXDNFFRNPQKRIZ");

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
    msg.setTimeStamp(0.650506542428);
    msg.setSource(27015U);
    msg.setSourceEntity(10U);
    msg.setDestination(2824U);
    msg.setDestinationEntity(219U);
    msg.timeout = 65007U;
    msg.lat = 0.874693068092;
    msg.lon = 0.0784794506359;
    msg.z = 0.911970521514;
    msg.z_units = 100U;
    msg.speed = 0.694608582695;
    msg.speed_units = 26U;
    msg.bearing = 0.976105419893;
    msg.cross_angle = 0.0557873592084;
    msg.width = 0.710089696552;
    msg.length = 0.204744745168;
    msg.hstep = 0.673049463259;
    msg.coff = 113U;
    msg.alternation = 39U;
    msg.flags = 238U;
    msg.custom.assign("HMWMQVQSNNBYRKHAVKUAGIUGTJYWLKWJKIMHWBRIYSBOTLSGURCVCDPOZEOKELFWGQZGWIDLEHBFZSUQWPLVEXYUOXSGETNZTS");

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
    msg.setTimeStamp(0.261674664602);
    msg.setSource(20387U);
    msg.setSourceEntity(221U);
    msg.setDestination(61845U);
    msg.setDestinationEntity(115U);
    msg.timeout = 38354U;
    msg.lat = 0.620157065833;
    msg.lon = 0.274709778682;
    msg.z = 0.891253027374;
    msg.z_units = 51U;
    msg.speed = 0.408483693938;
    msg.speed_units = 249U;
    msg.custom.assign("HKYUNWRDHEYBXQBRFX");

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
    msg.setTimeStamp(0.592047058668);
    msg.setSource(17545U);
    msg.setSourceEntity(232U);
    msg.setDestination(51553U);
    msg.setDestinationEntity(213U);
    msg.timeout = 5392U;
    msg.lat = 0.507477381212;
    msg.lon = 0.0434966821997;
    msg.z = 0.854973499425;
    msg.z_units = 81U;
    msg.speed = 0.324290462406;
    msg.speed_units = 5U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.985481063675;
    tmp_msg_0.y = 0.959644591913;
    tmp_msg_0.z = 0.581836279742;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZCJZVKUIDTPSVEHYGPGKBLFBEHHCUDTPJGIWZJSEHRCVFAAOKDAODOMWUDMEWLHGEBUGWPUQGANJBNGCXVPUM");

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
    msg.setTimeStamp(0.14896029456);
    msg.setSource(54908U);
    msg.setSourceEntity(254U);
    msg.setDestination(19182U);
    msg.setDestinationEntity(39U);
    msg.timeout = 53139U;
    msg.lat = 0.931887936978;
    msg.lon = 0.445753997498;
    msg.z = 0.789921192371;
    msg.z_units = 207U;
    msg.speed = 0.673162866244;
    msg.speed_units = 98U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.189154097752;
    tmp_msg_0.y = 0.694297350821;
    tmp_msg_0.z = 0.35569914397;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BWYDDOJWKFAUDFXCZQAHFMAUUTHQTYYWPDXHEQNVCMANGWRBKVLMMNRRKVPYEVYZANNCRFQGMIOZJLURGEQCBZKCWOWXVVOJGTOXXDD");

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
    msg.setTimeStamp(0.0816062516744);
    msg.setSource(34326U);
    msg.setSourceEntity(22U);
    msg.setDestination(23431U);
    msg.setDestinationEntity(59U);
    msg.x = 0.259150397136;
    msg.y = 0.851756777852;
    msg.z = 0.355942402097;

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
    msg.setTimeStamp(0.389607260571);
    msg.setSource(22335U);
    msg.setSourceEntity(125U);
    msg.setDestination(47034U);
    msg.setDestinationEntity(101U);
    msg.x = 0.70098917566;
    msg.y = 0.0461053525735;
    msg.z = 0.463535231901;

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
    msg.setTimeStamp(0.419888201363);
    msg.setSource(63862U);
    msg.setSourceEntity(218U);
    msg.setDestination(29997U);
    msg.setDestinationEntity(122U);
    msg.x = 0.186094945107;
    msg.y = 0.398836687896;
    msg.z = 0.721778811156;

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
    msg.setTimeStamp(0.682313082922);
    msg.setSource(6371U);
    msg.setSourceEntity(34U);
    msg.setDestination(44706U);
    msg.setDestinationEntity(44U);
    msg.timeout = 19365U;
    msg.lat = 0.735706052333;
    msg.lon = 0.0108140664624;
    msg.z = 0.777340047304;
    msg.z_units = 18U;
    msg.amplitude = 0.535703166592;
    msg.pitch = 0.713711372144;
    msg.speed = 0.492396544864;
    msg.speed_units = 241U;
    msg.custom.assign("OEJLHCLBXVDRQA");

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
    msg.setTimeStamp(0.780292279045);
    msg.setSource(27542U);
    msg.setSourceEntity(154U);
    msg.setDestination(64609U);
    msg.setDestinationEntity(110U);
    msg.timeout = 5489U;
    msg.lat = 0.30153718189;
    msg.lon = 0.436140430656;
    msg.z = 0.464711831167;
    msg.z_units = 146U;
    msg.amplitude = 0.324891921592;
    msg.pitch = 0.230269271711;
    msg.speed = 0.324731556396;
    msg.speed_units = 141U;
    msg.custom.assign("LBPHNMEAEYDIWCYHMBWLVYJQMYERKQCZBRGQSJLBRTZCVPIXUOCPITDXBZANYICCHQBMQWPBNXLCYXLWIHRDADFYHSNICTIUSKCZVUVUXDUEUFFIFYZUQYTAPVOVFKGXGNSDFNEVJFRWVAPYFOVPTNOTKJQSAZLQRJJSNROBDGGDNOMHMJSLFHXSHEFPBLTTNXHGZUDGDWMMW");

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
    msg.setTimeStamp(0.560749883223);
    msg.setSource(627U);
    msg.setSourceEntity(185U);
    msg.setDestination(41407U);
    msg.setDestinationEntity(130U);
    msg.timeout = 36090U;
    msg.lat = 0.171123774171;
    msg.lon = 0.0153680067708;
    msg.z = 0.764663628618;
    msg.z_units = 102U;
    msg.amplitude = 0.932915239637;
    msg.pitch = 0.117977473633;
    msg.speed = 0.51966994258;
    msg.speed_units = 82U;
    msg.custom.assign("EYQIOTUEDBSYSDRFQBPTKCPMPWHFKGUTQXZXEZUANNGRXOTYVNDPOLZGQHEHHTCIZDDIYXVWFVCSMOFYJXLBCFXFEJWITJNQTVPWURWULGECMAVBJUTNEQWGPYSRLBYKFCKNUQJUZDCL");

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
    msg.setTimeStamp(0.344196732108);
    msg.setSource(55940U);
    msg.setSourceEntity(92U);
    msg.setDestination(24282U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.909100113538);
    msg.setSource(30281U);
    msg.setSourceEntity(215U);
    msg.setDestination(4567U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.168742137423);
    msg.setSource(14155U);
    msg.setSourceEntity(110U);
    msg.setDestination(13206U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.351238954196);
    msg.setSource(19229U);
    msg.setSourceEntity(145U);
    msg.setDestination(316U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.434158303767;
    msg.lon = 0.929814268314;
    msg.z = 0.939234380336;
    msg.z_units = 216U;
    msg.radius = 0.96512292034;
    msg.duration = 1442U;
    msg.speed = 0.571337716152;
    msg.speed_units = 197U;
    msg.custom.assign("ARQFHNNVLKYWBXDSBWDUBRGMLYY");

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
    msg.setTimeStamp(0.533134830271);
    msg.setSource(39621U);
    msg.setSourceEntity(173U);
    msg.setDestination(33U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.407492932031;
    msg.lon = 0.895648402295;
    msg.z = 0.831870499012;
    msg.z_units = 95U;
    msg.radius = 0.76652799425;
    msg.duration = 17136U;
    msg.speed = 0.676483668939;
    msg.speed_units = 75U;
    msg.custom.assign("RZZQWBYBPGDDLXVQXTRNVAEWTAUYBNRAJHNZIWVYLQEWYBGSFLGUGYPCRTGKKZL");

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
    msg.setTimeStamp(0.175418822191);
    msg.setSource(225U);
    msg.setSourceEntity(47U);
    msg.setDestination(2511U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.00163326319247;
    msg.lon = 0.087585609387;
    msg.z = 0.904830601089;
    msg.z_units = 185U;
    msg.radius = 0.202430728714;
    msg.duration = 52739U;
    msg.speed = 0.761604650719;
    msg.speed_units = 102U;
    msg.custom.assign("IOEVLIOQYUFSBEJBWOBZYSBSOLNGPTDWRMPCHMYHDVLZYDWVPBFCFCFGUOHKSJSXWPTFSYNTDUKKUGWIFBJYNPJENAAQUTENPEIVNNTMVIMURYZSZPVRTCZRJHMNPALOGAPYE");

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
    msg.setTimeStamp(0.820887718835);
    msg.setSource(57086U);
    msg.setSourceEntity(213U);
    msg.setDestination(14592U);
    msg.setDestinationEntity(16U);
    msg.timeout = 56742U;
    msg.flags = 96U;
    msg.lat = 0.518777870839;
    msg.lon = 0.225811854457;
    msg.start_z = 0.740110196023;
    msg.start_z_units = 126U;
    msg.end_z = 0.369730879802;
    msg.end_z_units = 14U;
    msg.radius = 0.563861938817;
    msg.speed = 0.645990302105;
    msg.speed_units = 9U;
    msg.custom.assign("UIZZJBOVAQVBESFSCWWGDGAIEHZIVTYLTQRLGGAGLVJLXDUAADVDPIQPEPJOREQJNUKPCJQNMSRRIIRBRWCWXEIKOYKIDPYMLNWHYOQZXVQTVJLGUBWTCFHJKODFHNCYCTATELDSCYOZPUQHTX");

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
    msg.setTimeStamp(0.296504959483);
    msg.setSource(26532U);
    msg.setSourceEntity(193U);
    msg.setDestination(6460U);
    msg.setDestinationEntity(49U);
    msg.timeout = 18216U;
    msg.flags = 1U;
    msg.lat = 0.365022570091;
    msg.lon = 0.975834664277;
    msg.start_z = 0.93646705141;
    msg.start_z_units = 72U;
    msg.end_z = 0.778002314375;
    msg.end_z_units = 110U;
    msg.radius = 0.651625867865;
    msg.speed = 0.57429671533;
    msg.speed_units = 32U;
    msg.custom.assign("SWKGGNEHLCEPNMQPMSGFBFPIXXTBLHKOOVGFXYBKUAWAMGKMIRDRCNPDLRXBNRIUKVYQOWUYCCGIANAREVBYAJBFJMYISNZLMATDUXDMOZQZCDZOETSMJNPWONHMISQGWYEQRMESRAQBWJFJWUOTWDEIXHLPZIKSASCZZGTSTRYVWBLJBLICTQPZIZHLCVBKFKVFDVAGJNEKSHQVT");

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
    msg.setTimeStamp(0.877913898361);
    msg.setSource(64357U);
    msg.setSourceEntity(79U);
    msg.setDestination(17186U);
    msg.setDestinationEntity(3U);
    msg.timeout = 21803U;
    msg.flags = 113U;
    msg.lat = 0.585923127045;
    msg.lon = 0.916475893699;
    msg.start_z = 0.156260214823;
    msg.start_z_units = 242U;
    msg.end_z = 0.914689100968;
    msg.end_z_units = 189U;
    msg.radius = 0.487237283861;
    msg.speed = 0.622790688838;
    msg.speed_units = 177U;
    msg.custom.assign("ENDFNEIUKKHYWXDBWUVKRZZQQTOQXFIL");

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
    msg.setTimeStamp(0.392210394672);
    msg.setSource(1118U);
    msg.setSourceEntity(172U);
    msg.setDestination(42307U);
    msg.setDestinationEntity(188U);
    msg.timeout = 61613U;
    msg.lat = 0.0927994652242;
    msg.lon = 0.0825829298406;
    msg.z = 0.669043885467;
    msg.z_units = 8U;
    msg.speed = 0.994080450767;
    msg.speed_units = 252U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.786959304485;
    tmp_msg_0.y = 0.856779596889;
    tmp_msg_0.z = 0.502775016465;
    tmp_msg_0.t = 0.847795499162;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LISPATEPNHZVWTXSNLAEJPGURYZRKPCRKJRZZQIIRULKOICGBWNQHXMILMN");

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
    msg.setTimeStamp(0.809975186878);
    msg.setSource(26204U);
    msg.setSourceEntity(77U);
    msg.setDestination(46557U);
    msg.setDestinationEntity(236U);
    msg.timeout = 11669U;
    msg.lat = 0.915327135538;
    msg.lon = 0.801293116875;
    msg.z = 0.343534707416;
    msg.z_units = 146U;
    msg.speed = 0.532695501868;
    msg.speed_units = 48U;
    msg.custom.assign("JUEFYDORKVPFTACODNXJPCTVSWSIVPSOHKBGZSWRSKDBOIGTYVDXAVFIIGTZRDFJAFUUHXWLETUYLDQS");

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
    msg.setTimeStamp(0.28140942993);
    msg.setSource(2709U);
    msg.setSourceEntity(16U);
    msg.setDestination(3354U);
    msg.setDestinationEntity(186U);
    msg.timeout = 51326U;
    msg.lat = 0.240417984428;
    msg.lon = 0.446385727096;
    msg.z = 0.0899040597698;
    msg.z_units = 95U;
    msg.speed = 0.285579254483;
    msg.speed_units = 215U;
    msg.custom.assign("FCZWKMTJOWKQEPQEAJWN");

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
    msg.setTimeStamp(0.373250298118);
    msg.setSource(37549U);
    msg.setSourceEntity(22U);
    msg.setDestination(64468U);
    msg.setDestinationEntity(140U);
    msg.x = 0.521603801477;
    msg.y = 0.362598352587;
    msg.z = 0.236960503843;
    msg.t = 0.667760839811;

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
    msg.setTimeStamp(0.480057652101);
    msg.setSource(7336U);
    msg.setSourceEntity(172U);
    msg.setDestination(16395U);
    msg.setDestinationEntity(127U);
    msg.x = 0.690311896583;
    msg.y = 0.587478028808;
    msg.z = 0.832829349182;
    msg.t = 0.440251232044;

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
    msg.setTimeStamp(0.238914980892);
    msg.setSource(9668U);
    msg.setSourceEntity(51U);
    msg.setDestination(27514U);
    msg.setDestinationEntity(150U);
    msg.x = 0.604477419369;
    msg.y = 0.899305617771;
    msg.z = 0.026781055393;
    msg.t = 0.392815044948;

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
    msg.setTimeStamp(0.287154794482);
    msg.setSource(4607U);
    msg.setSourceEntity(12U);
    msg.setDestination(2124U);
    msg.setDestinationEntity(176U);
    msg.timeout = 11353U;
    msg.name.assign("HAVGVZZWVBYEWVZCJUZXGWRVBHLCNCJINSSDIKASEPHOTFXPEWMXIEAAZONOJUMFSZFABYSERUMT");
    msg.custom.assign("RQIGQAPXLRMSHVIDUFOWYGSRETBHPUZJKKDVEDZCLBWUAIPNHDJJEFISAFJSKIIKLX");

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
    msg.setTimeStamp(0.712210100099);
    msg.setSource(22483U);
    msg.setSourceEntity(119U);
    msg.setDestination(25150U);
    msg.setDestinationEntity(186U);
    msg.timeout = 13430U;
    msg.name.assign("LVEUGHNBUAOVNYOTXFOYGMEUBDHVCELTDKWGSOLUCZUXNWMHDPJELILLPKWIPBWAXVYCMUAQXDRFMCYGVBZQESWWZQTWHZCUREZOEJFBBIPLXOGCFLTWSKUONBYVNOAKMEMFSQUTVTKRMHKAMHHKPIKXJBJSLBACASJXGDDDZRQIBXSQYIJHFVSZTDHQCXYQHGJLTSNROKAIARNEGRSAVWXNZRMWPJRFFECYGNQJFFKOPTQPDITZMDNIIJPCG");
    msg.custom.assign("YXEUAUKMZDQDDBNEYYYBZHOGWAKIPBGWUSCLALPNSRQYOWNTKPFPTXMSCWMJWBSKWAVLXREUWRFPVYABAMNLP");

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
    msg.setTimeStamp(0.146068044577);
    msg.setSource(20013U);
    msg.setSourceEntity(90U);
    msg.setDestination(16968U);
    msg.setDestinationEntity(36U);
    msg.timeout = 41728U;
    msg.name.assign("ODEYSWODMUYEIDXKGVMBKVALAZJZOPWSFIGCZYWLEBBMHZUZVWFPVLTHLIUHKOMBFDNAKHYWAGJXDTNMLEDNPRBYWCTVEENNSLNPAHXIXUUKQLPUPNQRKWHVQIKFFTPDVLZOWCBJRTYUQHZVAYJTMNIZLKGVIRJJXURFNIMAOGXGOFIEGIRAXBFOSXCMJGSOSDTFQKCHHRWRMCRGQCJYPBSNX");
    msg.custom.assign("XQPTTJRQLMIPRNPAHVVJQREWKKFBNOCCNDGOZHEWEVHAIZMUVBIQLDHUMQDPAIJCMSQANXUEZOTCTYLCDAMWRHJXXGXZJZIQYGZR");

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
    msg.setTimeStamp(0.149360953109);
    msg.setSource(32940U);
    msg.setSourceEntity(37U);
    msg.setDestination(37390U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.616202430547;
    msg.lon = 0.835385331837;
    msg.z = 0.130982907366;
    msg.z_units = 141U;
    msg.speed = 0.987156069308;
    msg.speed_units = 213U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43262U;
    tmp_msg_0.off_x = 0.455800056182;
    tmp_msg_0.off_y = 0.0401589355015;
    tmp_msg_0.off_z = 0.0971466007002;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.647256594174;
    msg.custom.assign("GZPGZVTYQLQVSSVCMEVFDHWZNYWNURIBOFADCFBXHIYHKTVPGGEGUACPRRRPRSZNHJXFMLZZADCUEQXFQNOJNNHKTUJKNAGMQSISSBVJBCHQIHIMTQDKCIFWHOPHYZBXGHYPMILCOTLVJDKMGEFXURLRBZRXAJYMXYWPECGKDFXVYMATDNBAAQSNFUQXLCZIOXSJPWMVBVGILBKWKUDJETAICDWSWO");

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
    msg.setTimeStamp(0.601678162094);
    msg.setSource(48491U);
    msg.setSourceEntity(66U);
    msg.setDestination(47805U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.849081267016;
    msg.lon = 0.519542599045;
    msg.z = 0.639936437878;
    msg.z_units = 9U;
    msg.speed = 0.777012565998;
    msg.speed_units = 77U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.189407074801;
    tmp_msg_0.y = 0.646749545062;
    tmp_msg_0.z = 0.697672851852;
    tmp_msg_0.t = 0.881117411531;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.917162213383;
    msg.custom.assign("HOFFNSYKEILTUCPBOXTKBQXWHMNFEUKOQWBGZENMTLZUIYOCRUPTZCBQKHHNRNZTBQLIZIJDVHSOWQDMDEJNYCWXAUGBEIAWWRRRGYGEJVKXVCDJQUFHIJFWDATZAOFCIZALLJFJOUZPGDHRGIDQLGSPTUDWMLJEGBNCGPKXZRXESJKIDCLWHHGHYRPNSS");

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
    msg.setTimeStamp(0.893910644902);
    msg.setSource(16802U);
    msg.setSourceEntity(43U);
    msg.setDestination(11030U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.86741036785;
    msg.lon = 0.0594174861804;
    msg.z = 0.498714741518;
    msg.z_units = 131U;
    msg.speed = 0.130894555218;
    msg.speed_units = 151U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.00758694309424;
    tmp_msg_0.y = 0.57699274244;
    tmp_msg_0.z = 0.372767461157;
    tmp_msg_0.t = 0.492226323032;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 35638U;
    tmp_msg_1.off_x = 0.260950867096;
    tmp_msg_1.off_y = 0.0320684105674;
    tmp_msg_1.off_z = 0.438386900982;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.619385167835;
    msg.custom.assign("QDONENWGCIMFKNGHYQVBTTWXRHTZKVZAELFJJALVQHYKTIOWALMRSCMPDGDVEFWYOFGVNKRAELCUUSQJMDPEOSCBSBPTWBBIHMYUIRAZVPYDMUIYKEKNDDQVZXTWVCWUGSOIJNJZXQDXOZXSTSZOWNIBKKXHFMYFONUQLXHFQJESZJFEAS");

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
    msg.setTimeStamp(0.286301119049);
    msg.setSource(50393U);
    msg.setSourceEntity(82U);
    msg.setDestination(9695U);
    msg.setDestinationEntity(113U);
    msg.vid = 24965U;
    msg.off_x = 0.870967119497;
    msg.off_y = 0.320137764202;
    msg.off_z = 0.990228478134;

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
    msg.setTimeStamp(0.951941845944);
    msg.setSource(15554U);
    msg.setSourceEntity(168U);
    msg.setDestination(62989U);
    msg.setDestinationEntity(252U);
    msg.vid = 51945U;
    msg.off_x = 0.0732930419955;
    msg.off_y = 0.570781190344;
    msg.off_z = 0.586946384053;

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
    msg.setTimeStamp(0.688906139187);
    msg.setSource(54875U);
    msg.setSourceEntity(6U);
    msg.setDestination(45147U);
    msg.setDestinationEntity(30U);
    msg.vid = 16153U;
    msg.off_x = 0.262714414252;
    msg.off_y = 0.256286332975;
    msg.off_z = 0.772462240118;

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
    msg.setTimeStamp(0.618040226416);
    msg.setSource(19092U);
    msg.setSourceEntity(164U);
    msg.setDestination(64832U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.163203172963);
    msg.setSource(58635U);
    msg.setSourceEntity(75U);
    msg.setDestination(56893U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.257626373863);
    msg.setSource(63972U);
    msg.setSourceEntity(180U);
    msg.setDestination(26284U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.455359770108);
    msg.setSource(29638U);
    msg.setSourceEntity(31U);
    msg.setDestination(24144U);
    msg.setDestinationEntity(97U);
    msg.mid = 43865U;

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
    msg.setTimeStamp(0.863906671155);
    msg.setSource(7998U);
    msg.setSourceEntity(113U);
    msg.setDestination(38386U);
    msg.setDestinationEntity(105U);
    msg.mid = 21474U;

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
    msg.setTimeStamp(0.572902475217);
    msg.setSource(13006U);
    msg.setSourceEntity(116U);
    msg.setDestination(61139U);
    msg.setDestinationEntity(89U);
    msg.mid = 34769U;

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
    msg.setTimeStamp(0.00524300128939);
    msg.setSource(18750U);
    msg.setSourceEntity(167U);
    msg.setDestination(4822U);
    msg.setDestinationEntity(227U);
    msg.state = 77U;
    msg.eta = 4068U;
    msg.info.assign("CYDKMBXAKTZJMZEZJPDARPKKAEFTQQAHUDXGXHSZXIORSMEGGUZYQMCOPFVAWAQDRHCFBUUUDI");

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
    msg.setTimeStamp(0.597203734763);
    msg.setSource(28038U);
    msg.setSourceEntity(37U);
    msg.setDestination(14669U);
    msg.setDestinationEntity(5U);
    msg.state = 170U;
    msg.eta = 21039U;
    msg.info.assign("YICDIAFBSRXVRRBCKWHOEPEBDGHCWGTMORUAJYUQISPISHXNRQAJPCOBGEWIDLVWLZVVULLFRPJHBDQPTODGIQUXTPEVHXKZOKDMVBZZODNPHKYNUNLHTZKKGAAAYJPXWWCODCTRQMMYAQCROSWIU");

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
    msg.setTimeStamp(0.796395266267);
    msg.setSource(52918U);
    msg.setSourceEntity(114U);
    msg.setDestination(32316U);
    msg.setDestinationEntity(162U);
    msg.state = 71U;
    msg.eta = 11960U;
    msg.info.assign("FTMHLGILQXJETBHFFKZXFMXFXCHRIOVJSHUSZERLAKUKCRAXADCBUKUSANJSLDRFXLKOWVUEZARFUEHAXHWBWWHEBSIROQLWNXAPNDGLGVATBNWMZLDJTVPTKBNCYYTOMCPGVERZPGPCQOQDXNSEDOEVRQOVUMJTLXCZCJWYHAQOQZDSRDWNIPHIYTYHQDQQJV");

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
    msg.setTimeStamp(0.482608068287);
    msg.setSource(64132U);
    msg.setSourceEntity(75U);
    msg.setDestination(14358U);
    msg.setDestinationEntity(16U);
    msg.system = 1099U;
    msg.duration = 36794U;
    msg.speed = 0.20878672701;
    msg.speed_units = 99U;
    msg.x = 0.301780679161;
    msg.y = 0.989868633897;
    msg.z = 0.601430952714;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.839289552063);
    msg.setSource(13002U);
    msg.setSourceEntity(11U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(250U);
    msg.system = 24786U;
    msg.duration = 10281U;
    msg.speed = 0.75996460802;
    msg.speed_units = 25U;
    msg.x = 0.138302873042;
    msg.y = 0.93230356524;
    msg.z = 0.0443686778794;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.131377302786);
    msg.setSource(48794U);
    msg.setSourceEntity(188U);
    msg.setDestination(60531U);
    msg.setDestinationEntity(45U);
    msg.system = 55724U;
    msg.duration = 20764U;
    msg.speed = 0.868073044971;
    msg.speed_units = 29U;
    msg.x = 0.0115847950242;
    msg.y = 0.344907415114;
    msg.z = 0.551510640036;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.19737867148);
    msg.setSource(5364U);
    msg.setSourceEntity(115U);
    msg.setDestination(59673U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.984047786675;
    msg.lon = 0.559846212664;
    msg.speed = 0.236766781669;
    msg.speed_units = 16U;
    msg.duration = 18957U;
    msg.sys_a = 6182U;
    msg.sys_b = 48396U;
    msg.move_threshold = 0.955619306036;

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
    msg.setTimeStamp(0.488553699598);
    msg.setSource(6491U);
    msg.setSourceEntity(75U);
    msg.setDestination(22228U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.0848741790615;
    msg.lon = 0.756097525798;
    msg.speed = 0.799554197976;
    msg.speed_units = 163U;
    msg.duration = 41079U;
    msg.sys_a = 2253U;
    msg.sys_b = 4819U;
    msg.move_threshold = 0.380766929867;

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
    msg.setTimeStamp(0.387914410413);
    msg.setSource(59468U);
    msg.setSourceEntity(248U);
    msg.setDestination(17668U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.880549785159;
    msg.lon = 0.434835842369;
    msg.speed = 0.556236758912;
    msg.speed_units = 85U;
    msg.duration = 34815U;
    msg.sys_a = 56791U;
    msg.sys_b = 47031U;
    msg.move_threshold = 0.175955242787;

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
    msg.setTimeStamp(0.632679379147);
    msg.setSource(64961U);
    msg.setSourceEntity(67U);
    msg.setDestination(46878U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.583436700173;
    msg.lon = 0.0013764100268;
    msg.z = 0.629844255795;
    msg.z_units = 54U;
    msg.speed = 0.463090603976;
    msg.speed_units = 212U;
    msg.custom.assign("ODDZLPOZYMWKIJKQNLFQDJSOSEZLVJMSPPQCAIQATIVQXNHVSGQJCCEABBXSFHEUSALMXYAJITYLPJTMZWUQTN");

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
    msg.setTimeStamp(0.630784132926);
    msg.setSource(35759U);
    msg.setSourceEntity(159U);
    msg.setDestination(7334U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.795307428793;
    msg.lon = 0.0988175128746;
    msg.z = 0.0741152920557;
    msg.z_units = 197U;
    msg.speed = 0.144710668642;
    msg.speed_units = 228U;
    msg.custom.assign("PRNRZSKQSUNOAYXMFOPMCISIFYGLIPSYKBJTQNZSNOQBMNQSODDJKQOWHYZRCGOYHCGIBOBUPGNYEJKFMRRCXXFLWBDXTIZYEHIPABZZXJSVQUGVLSCMKODTITBKRABRPPZMFVLXGHTQAXXRHUAZHWNLNZFONWAQYBVFCFMFWPKEUDGMPALISYDXEHRUE");

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
    msg.setTimeStamp(0.630017717146);
    msg.setSource(51944U);
    msg.setSourceEntity(39U);
    msg.setDestination(8704U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.813546843365;
    msg.lon = 0.148892703524;
    msg.z = 0.919289903957;
    msg.z_units = 112U;
    msg.speed = 0.207722986648;
    msg.speed_units = 186U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.66001024148;
    tmp_msg_0.lon = 0.73951507471;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EELCJTALJJXTEEXSNGJQPXYNZBFDQWTXASAFNAKMPGCYPBIGQGFDERHWPVNORQANVRKGOCQSLMTWSCUYUVHBWOFSQNYAOUOLSCQFAXHJYROLIHU");

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
    msg.setTimeStamp(0.240316716364);
    msg.setSource(45154U);
    msg.setSourceEntity(74U);
    msg.setDestination(20586U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.0449914135286;
    msg.lon = 0.806008751324;

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
    msg.setTimeStamp(0.964636195185);
    msg.setSource(24157U);
    msg.setSourceEntity(85U);
    msg.setDestination(5866U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.752434582513;
    msg.lon = 0.393130600919;

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
    msg.setTimeStamp(0.187926206034);
    msg.setSource(40639U);
    msg.setSourceEntity(101U);
    msg.setDestination(4194U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.986489215548;
    msg.lon = 0.157000454342;

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
    msg.setTimeStamp(0.374583555799);
    msg.setSource(27741U);
    msg.setSourceEntity(106U);
    msg.setDestination(5328U);
    msg.setDestinationEntity(156U);
    msg.timeout = 7773U;
    msg.lat = 0.591993457292;
    msg.lon = 0.430852292052;
    msg.z = 0.965928398746;
    msg.z_units = 183U;
    msg.pitch = 0.922364627501;
    msg.amplitude = 0.992687948123;
    msg.duration = 16539U;
    msg.speed = 0.500271686544;
    msg.speed_units = 86U;
    msg.radius = 0.0610912841405;
    msg.direction = 147U;
    msg.custom.assign("IQBZLZNONNJGJRGIUOOTUBFCRTUVLBEYNXDROKFAAMHELCS");

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
    msg.setTimeStamp(0.950848748359);
    msg.setSource(52092U);
    msg.setSourceEntity(177U);
    msg.setDestination(27486U);
    msg.setDestinationEntity(202U);
    msg.timeout = 45660U;
    msg.lat = 0.999002413247;
    msg.lon = 0.186930515764;
    msg.z = 0.99075039185;
    msg.z_units = 88U;
    msg.pitch = 0.910270073258;
    msg.amplitude = 0.128408467108;
    msg.duration = 17026U;
    msg.speed = 0.112695321679;
    msg.speed_units = 12U;
    msg.radius = 0.833225334145;
    msg.direction = 46U;
    msg.custom.assign("OVONJCSQMGDPVORKMMTFILSRXLHYFKFHYEHGGZQTVHTKCKFUMPKFU");

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
    msg.setTimeStamp(0.132088362809);
    msg.setSource(17576U);
    msg.setSourceEntity(243U);
    msg.setDestination(17584U);
    msg.setDestinationEntity(63U);
    msg.timeout = 35583U;
    msg.lat = 0.2149546125;
    msg.lon = 0.117598272681;
    msg.z = 0.924347173985;
    msg.z_units = 201U;
    msg.pitch = 0.66265590101;
    msg.amplitude = 0.993896440558;
    msg.duration = 49362U;
    msg.speed = 0.789334064595;
    msg.speed_units = 131U;
    msg.radius = 0.457770616455;
    msg.direction = 148U;
    msg.custom.assign("TZOPMHUBVAJNZEXOHKZEFFWMHHOGCKPQUDCJPRIJMPXKGRMJAUAQEVFTZTBAGNGDQGEYLARGBLILRSJYNXYSBOCHWEOSXCPVUZFIYLASGCZCQLYOAQSMXVKWDMIZVRVCDQNASUKWBNEQHDTPDSPGPJWDMKDFJKZYBRLZSRXKLBPHY");

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
    msg.setTimeStamp(0.735580075376);
    msg.setSource(6676U);
    msg.setSourceEntity(13U);
    msg.setDestination(41714U);
    msg.setDestinationEntity(118U);
    msg.control_src = 52469U;
    msg.control_ent = 230U;
    msg.timeout = 0.812574122324;
    msg.loiter_radius = 0.124627152701;
    msg.altitude_interval = 0.92389817047;

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
    msg.setTimeStamp(0.565510777576);
    msg.setSource(42724U);
    msg.setSourceEntity(109U);
    msg.setDestination(31030U);
    msg.setDestinationEntity(42U);
    msg.control_src = 312U;
    msg.control_ent = 120U;
    msg.timeout = 0.0410245439339;
    msg.loiter_radius = 0.885410713842;
    msg.altitude_interval = 0.630290299779;

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
    msg.setTimeStamp(0.661627596634);
    msg.setSource(12824U);
    msg.setSourceEntity(221U);
    msg.setDestination(59816U);
    msg.setDestinationEntity(136U);
    msg.control_src = 1028U;
    msg.control_ent = 53U;
    msg.timeout = 0.232167360466;
    msg.loiter_radius = 0.833549507487;
    msg.altitude_interval = 0.205583811166;

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
    msg.setTimeStamp(0.497554456789);
    msg.setSource(29418U);
    msg.setSourceEntity(18U);
    msg.setDestination(52572U);
    msg.setDestinationEntity(41U);
    msg.flags = 4U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.357160776287;
    tmp_msg_0.speed_units = 129U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.308237669194;
    tmp_msg_1.z_units = 39U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.760915545084;
    msg.lon = 0.612740293437;
    msg.radius = 0.928899007892;

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
    msg.setTimeStamp(0.216507674965);
    msg.setSource(5126U);
    msg.setSourceEntity(64U);
    msg.setDestination(4780U);
    msg.setDestinationEntity(129U);
    msg.flags = 248U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0396284421573;
    tmp_msg_0.speed_units = 143U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0293600582174;
    tmp_msg_1.z_units = 125U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.254051616132;
    msg.lon = 0.51551228321;
    msg.radius = 0.0356784850018;

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
    msg.setTimeStamp(0.575212563969);
    msg.setSource(43476U);
    msg.setSourceEntity(180U);
    msg.setDestination(34980U);
    msg.setDestinationEntity(85U);
    msg.flags = 242U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.589366638862;
    tmp_msg_0.speed_units = 144U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.273624745832;
    tmp_msg_1.z_units = 41U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.156801316141;
    msg.lon = 0.419300670459;
    msg.radius = 0.593493965279;

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
    msg.setTimeStamp(0.763799369261);
    msg.setSource(64171U);
    msg.setSourceEntity(25U);
    msg.setDestination(24103U);
    msg.setDestinationEntity(238U);
    msg.control_src = 53986U;
    msg.control_ent = 211U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 32U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.613389402515;
    tmp_tmp_msg_0_0.speed_units = 6U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.46113410535;
    tmp_tmp_msg_0_1.z_units = 64U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.619767120442;
    tmp_msg_0.lon = 0.802273923777;
    tmp_msg_0.radius = 0.842435153945;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 224U;

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
    msg.setTimeStamp(0.651894573395);
    msg.setSource(47647U);
    msg.setSourceEntity(32U);
    msg.setDestination(38546U);
    msg.setDestinationEntity(204U);
    msg.control_src = 17332U;
    msg.control_ent = 109U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 234U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.335291127581;
    tmp_tmp_msg_0_0.speed_units = 66U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.736770542877;
    tmp_tmp_msg_0_1.z_units = 156U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.740214300357;
    tmp_msg_0.lon = 0.914088507801;
    tmp_msg_0.radius = 0.0233729571672;
    msg.reference.set(tmp_msg_0);
    msg.state = 227U;
    msg.proximity = 79U;

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
    msg.setTimeStamp(0.41068074816);
    msg.setSource(56670U);
    msg.setSourceEntity(60U);
    msg.setDestination(36326U);
    msg.setDestinationEntity(144U);
    msg.control_src = 51659U;
    msg.control_ent = 74U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 119U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.894241093922;
    tmp_tmp_msg_0_0.speed_units = 40U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.372093628174;
    tmp_tmp_msg_0_1.z_units = 16U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.145113612102;
    tmp_msg_0.lon = 0.159981835694;
    tmp_msg_0.radius = 0.295233903642;
    msg.reference.set(tmp_msg_0);
    msg.state = 215U;
    msg.proximity = 233U;

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
    msg.setTimeStamp(0.697600286333);
    msg.setSource(2878U);
    msg.setSourceEntity(208U);
    msg.setDestination(27780U);
    msg.setDestinationEntity(247U);
    msg.op_mode = 112U;
    msg.error_count = 0U;
    msg.error_ents.assign("WXIKZNVRSQRSCSXXHGMUTDVDOCNYQDYOI");
    msg.maneuver_type = 9819U;
    msg.maneuver_stime = 0.236905922989;
    msg.maneuver_eta = 31470U;
    msg.control_loops = 2732353062U;
    msg.flags = 209U;
    msg.last_error.assign("QXFRDAYVUMSWSHQNOYICEPTKYPZLWMGKUCDSKOCWKAXNKLYYPBJVHPGVOJWJEEKPZXHIVIEQEQNYCEJFPLTSTTDZNKIRWBAWFOGXEFVRBPDHZGBQWBBWCCJRGDLTAHGAUNAVBXYYXJRVIDKMLOYRFVLHD");
    msg.last_error_time = 0.821470599829;

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
    msg.setTimeStamp(0.514845948347);
    msg.setSource(3470U);
    msg.setSourceEntity(216U);
    msg.setDestination(47300U);
    msg.setDestinationEntity(36U);
    msg.op_mode = 190U;
    msg.error_count = 19U;
    msg.error_ents.assign("EQNPZTHAPSZKXQDUSTZZJIVWSXVPBGTDGTOXGVJPNYZKQGAFWVEVOCXFASJHORQHCRKVURTDQZOAMXFBJH");
    msg.maneuver_type = 27458U;
    msg.maneuver_stime = 0.853763199759;
    msg.maneuver_eta = 21123U;
    msg.control_loops = 3195724613U;
    msg.flags = 75U;
    msg.last_error.assign("YOHEXSVWJOYSGKLBPSNDFJZTEXWRYHBBLZQGMHREUFVAZXGZ");
    msg.last_error_time = 0.949229261993;

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
    msg.setTimeStamp(0.356163009675);
    msg.setSource(38940U);
    msg.setSourceEntity(154U);
    msg.setDestination(6831U);
    msg.setDestinationEntity(152U);
    msg.op_mode = 78U;
    msg.error_count = 217U;
    msg.error_ents.assign("ODJVQWHGFOIIOQJZXIBHRKHAKAVZPGEOUSXOSTWIBTWLJNBGGLMCKUBXVMQPSMMTJFLLUEENFNFHWJEBKVEAGPDYZCRQGFXCNROFXYACKEABPUBDZVKOPKXPYSFFHLATHJHYQYQZTXDCMIQNUDRNCDVXRTAUZTNRZRHEYOIMFWCJSPRXLZ");
    msg.maneuver_type = 61440U;
    msg.maneuver_stime = 0.637067678879;
    msg.maneuver_eta = 61981U;
    msg.control_loops = 1549564279U;
    msg.flags = 133U;
    msg.last_error.assign("RSTRICKFAOLUAMPBBYRWUHGAQYNTNJDVXPUXOZQYXQKNCIETKQJLQHCWIGGWLMCZZEYVXYFOBZLQNRUUBBUYXFMOAIXVKAOYWLTXOVJJDMKOTHUZZQAJIID");
    msg.last_error_time = 0.878469819832;

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
    msg.setTimeStamp(0.65767305674);
    msg.setSource(33181U);
    msg.setSourceEntity(239U);
    msg.setDestination(45599U);
    msg.setDestinationEntity(195U);
    msg.type = 253U;
    msg.request_id = 24618U;
    msg.command = 159U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 44002U;
    tmp_msg_0.lat = 0.46064171623;
    tmp_msg_0.lon = 0.41878389292;
    tmp_msg_0.z = 0.946870499526;
    tmp_msg_0.z_units = 142U;
    tmp_msg_0.speed = 0.842444784284;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.bearing = 0.693971612203;
    tmp_msg_0.cross_angle = 0.210315614473;
    tmp_msg_0.width = 0.850943034522;
    tmp_msg_0.length = 0.140867553458;
    tmp_msg_0.hstep = 0.68309403179;
    tmp_msg_0.coff = 241U;
    tmp_msg_0.alternation = 83U;
    tmp_msg_0.flags = 175U;
    tmp_msg_0.custom.assign("VKTRZGWWKAJUOYMUMUQLTQOORHASFGSJBTDQDIOJHGXOJNIMPPTETJIVPHVTCJSGKDYNSCMLDXRIILWRJUKTRWDDEKFPCKTYSVEAINMXOOIHBQNOCXOXWJOCDQLXHRJAGHCEQVECSVVBLJPFXNMNUAFTKRXSZNIPCFAWGFKWZKMWQAETUMEUZKXQBYUIYNEZMBZLFQBPZULDZRVLFPSPLBZABYCGWHHDAYFANNSX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15415U;
    msg.info.assign("PXVXRBZKWMSHYDRNSZBMBGUNMKBWLWDVYVKNSFQXYOSTLVXTLEEKFVRUMEHQSUDDQWQXLPPTROUJITNDXWALAOFAMUAXZOVJKLZSGGHFMRNAQGWRGKXWDKREAPHTFGYFJUTUIZGYZJYNAHIBJYGAHMCSVRZHBCWBHPTCDXDOJHOZFEBKKYQVNJCBEPFCDOFJEERIGCIIJWQCSTQSEMLUTYZDNFIVINLPNRZPUBOIL");

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
    msg.setTimeStamp(0.547067471718);
    msg.setSource(48134U);
    msg.setSourceEntity(253U);
    msg.setDestination(11314U);
    msg.setDestinationEntity(14U);
    msg.type = 193U;
    msg.request_id = 38337U;
    msg.command = 230U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 31111U;
    tmp_msg_0.name.assign("XMGBRHGADNVOBYDAJWCCUFYWAPWHAUHSRHTAKPKLRVJPPOCIYDQEEAXBWIEOLCSFIYTASSYUVLHYMSIWJANDRTUGWDPMVHIXUVQNOM");
    tmp_msg_0.custom.assign("HOYIIJUTAYWOZHTRLKTHLSMWEYRGRANOMTNQABWCHKGYEWBNJDIMPPKWAKDTAHVXFFBZFBUHQDXXRXUWWOGFZCCJPYIOBQOQTQXJBCCUNANBYASUUWSNCNAMEFFVAKZVPGRPDVFORVDUQRGMTUNDDZEKEKPTVSDCNSQVLOHFIHQHGIQDWZMXLKGJGQEDMOIZLJRIEXHKJJUVX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33319U;
    msg.info.assign("PXVZLCOHLCIAWGLZLIOOXASWBPHEFDEGUTXJHTBUSQKWPYWUTISDLKUFZXIMODMVWSXFCGYVTIJXKVKOTHCEFFGBRBNAEOWENDKAKGGPYLJYZPXJNBKEZJRCRVFQKOTDJGQRAQIAYYQYAFBAUBCUQBGUEMOJCNEGVXHIDRTJNMHUDQWMORRCAXLWZNVCEH");

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
    msg.setTimeStamp(0.45178946551);
    msg.setSource(31836U);
    msg.setSourceEntity(59U);
    msg.setDestination(38051U);
    msg.setDestinationEntity(213U);
    msg.type = 0U;
    msg.request_id = 11779U;
    msg.command = 40U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.735642963845;
    tmp_msg_0.lon = 0.191568671661;
    tmp_msg_0.z = 0.271242550356;
    tmp_msg_0.z_units = 177U;
    tmp_msg_0.speed = 0.652035906265;
    tmp_msg_0.speed_units = 56U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 10994U;
    tmp_tmp_msg_0_0.off_x = 0.0635335137592;
    tmp_tmp_msg_0_0.off_y = 0.669327154737;
    tmp_tmp_msg_0_0.off_z = 0.17735728541;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.817991059999;
    tmp_msg_0.custom.assign("BGIFXOMEABOURAVBODSDWSQLWRKISJTYJHWYSGOZIQMKLIYLPMHPCNKHPNWCNFFOBJUDZRTQHZKZVXQQHNFFQWTSFRXUDRMCAWPJIZPEJIZQXXOSZPGCXBDJLLPMZFTYWXYSXLEPGAVKCDCLVAHRUNNVIKRROSTJJLYPVQOGYGSHHKN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46949U;
    msg.info.assign("OXULIZKTRVHVCDSDGOFHJIUZUYPMOVSOHLL");

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
    msg.setTimeStamp(0.495541055524);
    msg.setSource(24018U);
    msg.setSourceEntity(166U);
    msg.setDestination(46169U);
    msg.setDestinationEntity(121U);
    msg.command = 135U;
    msg.entities.assign("PHTALHZQQWTFVIXQIGCZQFAKGRQDHIQGVCPQGMTGANRYIUDYBTFLXADHMLVYZCCFLAIBQTNOTZZFPMECAJCEOLUDPHKUJNLUNXRXYORWKQJUKYBMCXRWAPNVVXSVDEPVHBBIWKHCSFMSOTHJKJYFWSPDSERTSTLIOUERPGDINSREZHFMAOKZGIJDTJNGXOSWXBDFKKNGJFKQYRZVEWJOMLMWZH");

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
    msg.setTimeStamp(0.73280339339);
    msg.setSource(40388U);
    msg.setSourceEntity(223U);
    msg.setDestination(1092U);
    msg.setDestinationEntity(10U);
    msg.command = 210U;
    msg.entities.assign("LAUAESPJLHWCQSWDEPXUJBTEVHAGFZTHONICV");

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
    msg.setTimeStamp(0.0757480925534);
    msg.setSource(7126U);
    msg.setSourceEntity(221U);
    msg.setDestination(15160U);
    msg.setDestinationEntity(3U);
    msg.command = 109U;
    msg.entities.assign("EVIYHHMIEXOYJPNXTANLFLMKQJUOMWQIYRFMBGQAERHNLXCMFFUSKQOSCFNVDLNCBWDZGBTZAWANHOCFXKMBWAGQAZVHYPSUKNBTQQFRXXLPLJKNXAGDROWUMIZRCZUUAYCDQWSXMEUJQFPZRWDNTGDOPBBTHNETASDKTIKUPPWJXKYYRBZVEQUJLDLTMSWHPSOZZHKICEHPTTRZRXBGWVOVDIYESYPSGIUOMJJHIYL");

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
    msg.setTimeStamp(0.814308816287);
    msg.setSource(48368U);
    msg.setSourceEntity(76U);
    msg.setDestination(605U);
    msg.setDestinationEntity(129U);
    msg.mcount = 150U;
    msg.mnames.assign("IMIQOYUXYRZPUBZVPUKJNIXXZQMYLOQDJCEHLURMOHBWYNQXONZKJUNGQSANIG");
    msg.ecount = 167U;
    msg.enames.assign("FRBYVORDCLYWUPUYNMLUAEUJGSRGPXWYWBZSKHQTVBMCMQKXWTDYIOLOHFFTJTQHWJSQHCNFHEOARGTRTHZBBOUPRCDQJTKBMMUBSNTYVNGFIMLWRGOEZPBCVGYDZEAIODNZSAHQPYVINVUMSWBE");
    msg.ccount = 133U;
    msg.cnames.assign("OWXXXXGQUNSUKSHVHOYZFFOMMRYPDEDXPNAVVXOPIGHIUUTOT");
    msg.last_error.assign("TZXEYBSSJLUDHOELDXOMULYMFFECGALNRGSORLMJFBRSZRWADYZQHQQAOTZEOQRCAQKVNIGMOLCSUWRHZPMEIGKJGDONQNCFUPOTLQWWXMFSUAGWXWIJBIB");
    msg.last_error_time = 0.96407750932;

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
    msg.setTimeStamp(0.682255670975);
    msg.setSource(28268U);
    msg.setSourceEntity(5U);
    msg.setDestination(14026U);
    msg.setDestinationEntity(101U);
    msg.mcount = 90U;
    msg.mnames.assign("EBNIXMDLHRGIWPEMQBDSSHPLIKJYZLXDPVQWDLXFQMMAOTKOSDTQULWOKFXWVNICGRDPZIWCYEUQVZGNSNYEQHKGFMOGAKPGIBYMCQREYHTPLOTQSWNXUHLWPBUMSUMGCAEBOHRHJBDPZRJRHEFJQREPRMBGXWZKKFVAVUXOTJCKFNKKVSYJJLVBWQTPNV");
    msg.ecount = 3U;
    msg.enames.assign("FZVFKJQDPXPWQCOLVKMFLQQ");
    msg.ccount = 159U;
    msg.cnames.assign("UDZAOUOHPLATIRDUSEBVCJVONUYZKYJRKRTPDKHPGPOKFLIBYEKGCZGEOZJSTPUHRVOJMAPIPCQQMXWBSHLZSKFNXGBVBFYVFUSGTORCIINQLAQZHXV");
    msg.last_error.assign("FPEOMEKESOIHUHVZGOXZXDTFOVKWUPGLWPAHSVYBREQICQMXCRTLEBTDHNRGCPJHSNWZLIGADYMKTLIONHSBPOZMMVQUUJXITQDQHZBXYERVTRABEAMFVQNPKRVOUJCMMAAANDMBCDFQYF");
    msg.last_error_time = 0.662502274187;

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
    msg.setTimeStamp(0.253927585385);
    msg.setSource(51029U);
    msg.setSourceEntity(243U);
    msg.setDestination(3750U);
    msg.setDestinationEntity(58U);
    msg.mcount = 11U;
    msg.mnames.assign("QDJZGMRDTJGEXYTDJZSNRWRDUVDOTWIZBNNOYDOPFWPNXVQIPWWIHTYTRYUMEFALKASLCQGUKQGWOIMYFFFVZCBUCLVOUIHYJAUSSLBVKNNZPHCVOQSWZWQMQDSDLIVXBXGFJBQSFZOGHJVHEGYXTGHIDCATU");
    msg.ecount = 49U;
    msg.enames.assign("LDTEDQMOZUVALPGKQPJHUIBWQGWRYMEOPZMXHFNBOACWADNSQRMPZXXJZBIEQFEXSGCMTIZFVWRNFYDTDMLBSLAKVYCFVOKVYUCJPWJ");
    msg.ccount = 0U;
    msg.cnames.assign("WPWNYQIYAELURNOQYFOHZXRKLJOHDSOODWBMKEVHVCMBDDBWAGWASSCFOVUTYROFQUBNBQIWEKQJAHMADURXPAQTZNNVJCGJETFVXZGIZZPGLWHBVOIWMIUXFRYNEPYXNLTRHGSKRSCQTVUZQHDMAYLJCSWSHXUZVTYMCLRZCJJSKTPKTNFOZDIJFJPSPF");
    msg.last_error.assign("AYINOVONJGSSFROZVLBELITRGTSQIUAADDFSGDGVWLDCWUOTOWBOUSHHBLOSVRJGCZZKKAJNMFJBDIDDWDFFENAWVUOCHUZGHTCRZOYJPADXMECEHKRASB");
    msg.last_error_time = 0.0665941041856;

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
    msg.setTimeStamp(0.497442731741);
    msg.setSource(44143U);
    msg.setSourceEntity(227U);
    msg.setDestination(64344U);
    msg.setDestinationEntity(77U);
    msg.mask = 132U;
    msg.max_depth = 0.752328125995;
    msg.min_altitude = 0.703333860058;
    msg.max_altitude = 0.522247072914;
    msg.min_speed = 0.36988577379;
    msg.max_speed = 0.316971307238;
    msg.max_vrate = 0.778596700161;
    msg.lat = 0.257496503062;
    msg.lon = 0.584166386734;
    msg.orientation = 0.73128660774;
    msg.width = 0.0207497183705;
    msg.length = 0.875016975716;

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
    msg.setTimeStamp(0.0607840239747);
    msg.setSource(58290U);
    msg.setSourceEntity(54U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(173U);
    msg.mask = 149U;
    msg.max_depth = 0.521294525689;
    msg.min_altitude = 0.695061112039;
    msg.max_altitude = 0.457943376788;
    msg.min_speed = 0.106847930459;
    msg.max_speed = 0.541065353748;
    msg.max_vrate = 0.246472650148;
    msg.lat = 0.937673326519;
    msg.lon = 0.584084074178;
    msg.orientation = 0.533784909812;
    msg.width = 0.289686123926;
    msg.length = 0.702991062955;

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
    msg.setTimeStamp(0.0290364120838);
    msg.setSource(15506U);
    msg.setSourceEntity(206U);
    msg.setDestination(28302U);
    msg.setDestinationEntity(72U);
    msg.mask = 143U;
    msg.max_depth = 0.444607064448;
    msg.min_altitude = 0.950374272588;
    msg.max_altitude = 0.615000055262;
    msg.min_speed = 0.104639338554;
    msg.max_speed = 0.211756960946;
    msg.max_vrate = 0.641364623344;
    msg.lat = 0.247469208161;
    msg.lon = 0.89670729737;
    msg.orientation = 0.55092716102;
    msg.width = 0.251064216412;
    msg.length = 0.217949474942;

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
    msg.setTimeStamp(0.939177126249);
    msg.setSource(30628U);
    msg.setSourceEntity(81U);
    msg.setDestination(61269U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.342356678306);
    msg.setSource(33066U);
    msg.setSourceEntity(142U);
    msg.setDestination(48795U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.0585292703344);
    msg.setSource(60491U);
    msg.setSourceEntity(145U);
    msg.setDestination(45415U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.231909699503);
    msg.setSource(51239U);
    msg.setSourceEntity(215U);
    msg.setDestination(51335U);
    msg.setDestinationEntity(33U);
    msg.duration = 65405U;

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
    msg.setTimeStamp(0.0485171818542);
    msg.setSource(61433U);
    msg.setSourceEntity(32U);
    msg.setDestination(14460U);
    msg.setDestinationEntity(81U);
    msg.duration = 23137U;

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
    msg.setTimeStamp(0.65460961972);
    msg.setSource(42936U);
    msg.setSourceEntity(87U);
    msg.setDestination(34213U);
    msg.setDestinationEntity(176U);
    msg.duration = 61523U;

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
    msg.setTimeStamp(0.114242652311);
    msg.setSource(48702U);
    msg.setSourceEntity(88U);
    msg.setDestination(28422U);
    msg.setDestinationEntity(210U);
    msg.enable = 119U;
    msg.mask = 4069612359U;
    msg.scope_ref = 0.988968077937;

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
    msg.setTimeStamp(0.744488062651);
    msg.setSource(12170U);
    msg.setSourceEntity(193U);
    msg.setDestination(49182U);
    msg.setDestinationEntity(109U);
    msg.enable = 65U;
    msg.mask = 1785602363U;
    msg.scope_ref = 0.775187274747;

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
    msg.setTimeStamp(0.762981389345);
    msg.setSource(53515U);
    msg.setSourceEntity(180U);
    msg.setDestination(54840U);
    msg.setDestinationEntity(30U);
    msg.enable = 64U;
    msg.mask = 577871988U;
    msg.scope_ref = 0.0905864768107;

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
    msg.setTimeStamp(0.836590696075);
    msg.setSource(7586U);
    msg.setSourceEntity(96U);
    msg.setDestination(9404U);
    msg.setDestinationEntity(42U);
    msg.medium = 29U;

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
    msg.setTimeStamp(0.771495607315);
    msg.setSource(42725U);
    msg.setSourceEntity(140U);
    msg.setDestination(258U);
    msg.setDestinationEntity(77U);
    msg.medium = 80U;

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
    msg.setTimeStamp(0.0251452080998);
    msg.setSource(22873U);
    msg.setSourceEntity(33U);
    msg.setDestination(21109U);
    msg.setDestinationEntity(250U);
    msg.medium = 65U;

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
    msg.setTimeStamp(0.126131272028);
    msg.setSource(16626U);
    msg.setSourceEntity(26U);
    msg.setDestination(53474U);
    msg.setDestinationEntity(14U);
    msg.value = 0.599550136397;
    msg.type = 16U;

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
    msg.setTimeStamp(0.141154796673);
    msg.setSource(21844U);
    msg.setSourceEntity(36U);
    msg.setDestination(37444U);
    msg.setDestinationEntity(220U);
    msg.value = 0.685419402832;
    msg.type = 63U;

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
    msg.setTimeStamp(0.157108794487);
    msg.setSource(44295U);
    msg.setSourceEntity(147U);
    msg.setDestination(17774U);
    msg.setDestinationEntity(56U);
    msg.value = 0.256159049025;
    msg.type = 200U;

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
    msg.setTimeStamp(0.945425265419);
    msg.setSource(26818U);
    msg.setSourceEntity(63U);
    msg.setDestination(51227U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.84982976935);
    msg.setSource(64140U);
    msg.setSourceEntity(157U);
    msg.setDestination(24764U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.348352441962);
    msg.setSource(44351U);
    msg.setSourceEntity(93U);
    msg.setDestination(54666U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.175886202481);
    msg.setSource(27651U);
    msg.setSourceEntity(188U);
    msg.setDestination(13336U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("JEAZCUWCZOPLFVRQMBZFIGIAMQCWHUOZYXDXNZHHLLGIDAUHLVABGGKQJTPCNGNROKBMEHQKUSFLYMSWXOHKKIYVTEBFJKWBTACOYVUTESCXZBJKWZJSRPCBMPGQQRGLIBNSFNIATEYFKXDUGZINGRJ");
    msg.description.assign("ZLSNRHGQRJILCKTDDVFGNHUSVDHDWJDQFWLKAMKSRFWASEZBUVOXZYCZHSVBOTZKLMCFREMGFOKXGBUIPTRHDWOYMIAZEHJRQZLGJNUUQCHLXXSJBPBIJPRRIWGZAUGVANUAEDJSTSBYINTLAPKQLSAVCBPIWJYFTXMHAQVEMGCOTYWXROWDEUOYLLEUAKCQINVQNXRGYOPTVWTEJQCHTKXNOEXFIGZWVUB");
    msg.vnamespace.assign("UXFVRPCNOAKSVBMLEIRUQOIBUVOC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZLCIMYMWOFFVDRUUQAZLYQJCSLNDKPZIFGZXLCDJPAGRQRFPQUWIHJWULYISURSKKBDBNWMOMKPUMBJFJAWEIXTRVXOGBPUDIXXCQGEOSHKBXARBBWMNPGJPVNZHWCKOEBDYDYVYFAUYJQIVHVTQGJMHNKSGGGXEECTSSNKRDAVCKAULRCMI");
    tmp_msg_0.value.assign("HHIKNNYXSVHVCERYLDNAOJBVPETMMQKKYRXGSFFEFECIRDOPQZBQFFQGNCGFOZIWEEIJACBZHQHQO");
    tmp_msg_0.type = 18U;
    tmp_msg_0.access = 162U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EWOCUQDCBEKHKRIMINUJSZGUKKLJGXVDBGUJGPMHTDIDSLEBFVIPSLBPBYCFHGKALFNVGCRLUMGNTJWRIHWHFRQOKMYPBAUEQCYZGNFKYBNOSORYNRRHAMOXSZHXQMRXWLMYUQLXNA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MYUDSVTMWDQJJAYQRRHYLUDXEVHHAKTPHJMPAVWBHKIHYDOIBZQMWTMORUJYHEOGFWTXQILNZILMSZLPIAKNGBTSCCIPNBDOVRCLJJXFVVYK");
    IMC::FollowPath tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 21457U;
    tmp_tmp_msg_1_0.lat = 0.227932677161;
    tmp_tmp_msg_1_0.lon = 0.857295294416;
    tmp_tmp_msg_1_0.z = 0.326611508162;
    tmp_tmp_msg_1_0.z_units = 5U;
    tmp_tmp_msg_1_0.speed = 0.540447704074;
    tmp_tmp_msg_1_0.speed_units = 122U;
    tmp_tmp_msg_1_0.custom.assign("KXZABSJPBXWSNURKNJRHPXURBJJPFOLOOIDMMUUMSCOREZCYQEVWMTWRVPGEKNBZUITFIZGWDHSGFHZVYXLKFPGWIQAXPDZLWGLPHOEXQJQZTRQYOSXBTIDICBTCFUOCVDGAPMQMIWDHYIYYETSIOKCEQAKFRPMWGVTFKTGXMZNKABSSRXWVUTERYYFCNMFSHONXBPDG");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EntityInfo tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 109U;
    tmp_tmp_msg_1_1.label.assign("XRUXMKAKXKJRGUUZUJNTVHMBSYMYAEGXRICOBWUKYCLJTDISOGXEQB");
    tmp_tmp_msg_1_1.component.assign("QRSWZJYOLXNDRZAEEQHFOXOLFSDTHGGOKMIXDWATTJQFKGCZORIJEGNYNRVHSPKKNETBFYPGSTEJXASUU");
    tmp_tmp_msg_1_1.act_time = 18635U;
    tmp_tmp_msg_1_1.deact_time = 37569U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::AcousticPing tmp_tmp_msg_1_2;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("RGBAOYEIWSWCCBFAXZACFBKMLXQQKVFFNVCUHMMEEDKIZITZLZVIDNRPTALLQNIHNIABXWNFYJRVJGEHCSHRTAUMRSTENTYKFFMGOZCOKUVTPPMDAXIDUGRHREYVWQXKNAWRHOBIMQJLLQDLUGNSBWUYSUXOUEFMOXGSOUSZPGDKBHESDJOPEYICGMDJVYNCXOPFPTXPQHWJNDCXQVVBZKWKMYWTFLTRBCVZWDYHLGQAZJOAKGJZ");
    tmp_msg_2.dest_man.assign("NPVXYMKCLYRSBXJHSMOXBOVQWEOJNDGFXTZZAQXGNOGRTVAVYSPEHEIUVEILUHQHDMPBUKDNGCOKLMVANBWFTLIUSUCIQWJHHFDORNSQJDVZVZKIYFSCLCNAIEJNXDCKDTMMFGDCCBYAYTDLNYLQARBEOMLQGYGIFPTRPJWRSAUVWPBMIKCYGAZPAZWUUQCJZWX");
    tmp_msg_2.conditions.assign("YYUCGHYRVVRCQEJODJXBYUPMQAGNXULXMFWALRQTPOVKUBYXOWXPIZWCJRWYZGNSYRTWDUBUZIIFKCJVDKISMCJWASHANMCBXVDLDCOKGAWBFVXWCYSILZVFDPWSSYXQMDLJLRCNSGEIRQZTVPMTGOZNNGQOAONGKEPHNEXVAENDKMPEOAMLKWTDTBQZGEBVEMHFMZUPSJFTKYDAIPNJBTKLFBRXFHKLUQLITFHOQPSQZJEHIFBOZRHCUREUH");
    msg.transitions.push_back(tmp_msg_2);
    IMC::VehicleFormationParticipant tmp_msg_3;
    tmp_msg_3.vid = 16389U;
    tmp_msg_3.off_x = 0.132607970919;
    tmp_msg_3.off_y = 0.966362296442;
    tmp_msg_3.off_z = 0.0871300435415;
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
    msg.setTimeStamp(0.473036219052);
    msg.setSource(56409U);
    msg.setSourceEntity(179U);
    msg.setDestination(2794U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("JMFLZEESCTABZEELARI");
    msg.description.assign("NLODMPHVCUWFSMJENHMIPYWVJDFKFBKZLEZPUDJVMQRDIMBZJBXTJQGTIPCVPADBPMIOXIKUVLJCWZDGFQH");
    msg.vnamespace.assign("EWAOSTVDSDIPNTCRVKVIGLKLVTZJ");
    msg.start_man_id.assign("OFBGXAWPVVSQOXNCKWA");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("OGFTGFQMPKCPYCWGHKKXPNQXZAWLINSYTAPPVBFLBMDEGFKDSIJVQDNHMBOMYBJOIHPKXCZYKOCNIRSQIAJWMBTIUUIJVPHCAWRFHLLBS");
    tmp_msg_0.text.assign("YJNMLHETTUSCXJWVUBPBHLHPPFBSIAGCTDMIYERGTGWHODPJYKUPIKXTCODSAQLVLJNBIVUOYNTFUVOGSEPHOINMI");
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.261788837678);
    msg.setSource(31972U);
    msg.setSourceEntity(51U);
    msg.setDestination(21209U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("FZOGWDRFCWBHKAHHSOYEDFWMJPBETTRQKIDENYTZADRVTVDUXSBMFLIUMAZDKNHJCEKPOYYHMZQLKHAAGNQOICKXVBPSWMJGUBASULYITPKEXPWPRUTBNCRFOBVUZQHFGTBJXMXQGMOSAQORNCAVKGVSHJSAZDCYOURIVLGETCHDB");
    msg.description.assign("OTBNHILDNRLBXWVSAIUDFISYZYODVKULBGMWYSMIDZITRPHAIJNGLHPMPEMRCCNJTOKZXUPSFWIEVCRJUPOHCGAPINRPJYNQ");
    msg.vnamespace.assign("MYOVJWXXULMFWUFVGYSJTPDMJNQZAAUAXOYEKPRBNNMOBPUNJCFSHBYIVETENWHETDHEICWHSCTFPXMMECAYXMIHUDNIBXTALZHGWICEISZGWBACRPODAQZLOUQEGDVSAJMLKUETGZGODAFOTVZISLGYVUZFQRTGOSXBPKQCUSXKVPTYJNVIFWQLNKQRCOPBKWQVRDKRWVKPKXJJRNCDTHRYXUDSLKDRPJOE");
    msg.start_man_id.assign("VIRZNEEZAMINSCDXMOLMTHGKVVDRCWBTAJILKXUNFRHJHRUYOFXDWQPJPPFUNKUUBJBVVCEPSQZASQRXXKVKY");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("HSABDTGIDRHKOFPJUARZORKEIAXFLXLTGOTNNLYKXDQ");
    tmp_msg_0.dest_man.assign("WYRDAUDKXRBNKCMOPTFTUNKXZJHIFPJRGSZRQQSSNBGMDVQMLOLFFIAHHCGEVBZQUWBZUPUQYDUFOVMMPKHCG");
    tmp_msg_0.conditions.assign("DUGYZBGNAISXHWNDFENXHETPQBGSUMFURDLVWJAEHWSLJEYXQPFFCOTMYFPUOKPXPGMAICNOMPWWCOIVCYJHLEDUXNKRLVWKXYIDMMLTRECTCAWZSQGWBDJHRXGRTJJRWVFIHKHIFBSFGAVQEUSCKDUVDNNBSRZVQKOGOIKQIETZQOQNMHCBCLMTJROEUQGADYWZZVRPXSJHZJBAZPBLBNDKGPXVAAESTLSOFRFTPILYKJCQLXTAU");
    msg.transitions.push_back(tmp_msg_0);
    IMC::LblBeacon tmp_msg_1;
    tmp_msg_1.beacon.assign("GFKQRTMMVFDXJLTOKPBOZFJIIMPUTPRKGXTRRVVQOZTAAMQVFOUIUTVDHLEOFXOUAMXQHENYWSAQYEJOAPGOSOSZGGICCTBWNYTUCEBKCZFYYPXBWCPCZHYXZEGMBILZLJENZSNAMEAJGHAPMEHRWJKANLBUDPQWSWKFPNDCSVHKJXRRVEVDYNPQUSFBWHUD");
    tmp_msg_1.lat = 0.401933795198;
    tmp_msg_1.lon = 0.513506530033;
    tmp_msg_1.depth = 0.03352462671;
    tmp_msg_1.query_channel = 48U;
    tmp_msg_1.reply_channel = 67U;
    tmp_msg_1.transponder_delay = 141U;
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
    msg.setTimeStamp(0.58927696583);
    msg.setSource(45643U);
    msg.setSourceEntity(58U);
    msg.setDestination(20459U);
    msg.setDestinationEntity(116U);
    msg.maneuver_id.assign("LSRKNOLOEJTCTJMCTBHLEDANOPNOVNBCXSGKCQIACGZGF");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 59921U;
    tmp_msg_0.lat = 0.649688690635;
    tmp_msg_0.lon = 0.411859925424;
    tmp_msg_0.z = 0.801200822769;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.speed = 0.589706121272;
    tmp_msg_0.speed_units = 181U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.715204300995;
    tmp_tmp_msg_0_0.y = 0.173569309733;
    tmp_tmp_msg_0_0.z = 0.0328097010509;
    tmp_tmp_msg_0_0.t = 0.481087187387;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("TGJWABIOWFEDIAPRJOAUQYBCIZNCAFCIYIBXARWMZNNYMFSSPIGQUMFRSKERWCNEYTKSRLDGZQZCOFXEAFKPRZNTHTHDHEVABOZYVMRVUIHULJVSHPYPFYGQOKADRLODUREEDRVWNWUHMUJXLLNKPQKPTCZJH");
    msg.data.set(tmp_msg_0);
    IMC::LowLevelControl tmp_msg_1;
    IMC::DesiredSpeed tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.204141736186;
    tmp_tmp_msg_1_0.speed_units = 149U;
    tmp_msg_1.control.set(tmp_tmp_msg_1_0);
    tmp_msg_1.duration = 5407U;
    tmp_msg_1.custom.assign("XHTAPECMOLSPEUNQDVLUITHXPOFHUDULHZEMPKQHZGHTNUTZDFFRESEXOYAGDFWXLKFWCYQQSYRSJDNNIAAJZGIXTMZBHLJBGMBIBLWEASIRUCUFYWJOMFVQLSWBMNMMNOPYAPBCPVLGKDGCNKEYVWDRSWMFTQTCISGHHDXIECJDLAKFOTVINWJPVVZJZYKRLGBGRKZZNBSXHKOACQUK");
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
    msg.setTimeStamp(0.278438822967);
    msg.setSource(43710U);
    msg.setSourceEntity(235U);
    msg.setDestination(18787U);
    msg.setDestinationEntity(146U);
    msg.maneuver_id.assign("MVXAATDOUF");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.239599340129;
    tmp_tmp_msg_0_0.speed_units = 201U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 11885U;
    tmp_msg_0.custom.assign("YJFWEVSQOOTZLTTSNQSMMKAQINNP");
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
    msg.setTimeStamp(0.788436060451);
    msg.setSource(37697U);
    msg.setSourceEntity(86U);
    msg.setDestination(41810U);
    msg.setDestinationEntity(217U);
    msg.maneuver_id.assign("CXHGUKIVMEULVHEYJJNOMBORPZUVOOWTRZXPTYIBNSMLVLTFGMZCWYRHBLEBTLFWDSNRKPWQDYROQHRGNHHXGFPQFMSFNNMSPJPKHUITUXIFZAWBTASSPCKHUMGTNOJNERQAJIHKKACJUULUBMJVGDQDCNPGVQSIJYEIIEDZBHTZMKCCSFDPAXZCZQCSDZWXWREXNOGERTVKOO");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.87463619855;
    tmp_msg_0.lon = 0.574761272807;
    tmp_msg_0.z = 0.448485995136;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.speed = 0.396342221072;
    tmp_msg_0.speed_units = 59U;
    tmp_msg_0.custom.assign("SWAZGCMBYLDNGDQWTXIHMUPFAHROHCEFVCEQIYLNIPNNZAJCOMLRIKIVLRWXJFRUNLBKXODUOSCTGJBGYXZNIPQUYGDVDHEGLGJYQDYYXYPECFHB");
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
    msg.setTimeStamp(0.570794057879);
    msg.setSource(54229U);
    msg.setSourceEntity(210U);
    msg.setDestination(3036U);
    msg.setDestinationEntity(87U);
    msg.source_man.assign("RDYSICMFERMTTBJTCTIWGYHXKMXGYFLSPIPZNDPFDRMUOUCAXGSCYHNCBXHOHUBMHHPNBMQWXYADEOVNWOVCEIVJZBEMZPCEDNHQDZWUXBNZGKQTRARHLDLWFIQPVAVJLQASZRLERJLPTZVYAATFESCQHXISSYDQWGVIKLANSOKBWGYLGIKUIEMRLEMFQFKOWABTZIJVTJJNJKRSOEQXKPPMTGVUANDUYZU");
    msg.dest_man.assign("WYKWZJALRJBGLZDWVFXXCRTKAICGONIGVYHBKNBJGOKHF");
    msg.conditions.assign("MSTCWEKILFINLEZMLPTSRYIVFQSPXMWBHIOBQXHFGHWVZMWZCJJJYWPIKUSIMHBFBNQZEUSROYKZZRYENLAURARHGNCIMVDBNLQJUADGIOAJZOVPMP");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("WZVNGOQMNZTCKDGVYXYSCQMBGVSEAIAWHLOESQDRBQPOUZKPJZUFALTWCFGHXNJBVADNFAGPWMDUSRTHBNMYMAKPBBSGETPYKDHPEHPXVRYIIFCULKOSDUJLEFOCSBDIQWCIKWAVIO");
    tmp_msg_0.service_type = 72U;
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
    msg.setTimeStamp(0.298123630014);
    msg.setSource(38405U);
    msg.setSourceEntity(100U);
    msg.setDestination(61526U);
    msg.setDestinationEntity(95U);
    msg.source_man.assign("HOIUJGRIBQTXGKBJBUXVIENMEJAMTOFCIJSWCIHBEHVVCCYKSWKLJUNLDGSEDNRQMYWGRUZYVAANNOFKIQVXTBCZLAKVYWNZVOXPWPURFOEHQAMRXBDWXYOEGWPXGGYLVZSJTIGZDWPFYDDMAPOFGLILUBKHNZOSODHUEZBRSELBPQC");
    msg.dest_man.assign("KLJGIPKEFVCRAHIQVDFLUQPTRSFOIUPZFOGLUMYFTCHFCGSLZSFVKJCUQRDKKENKNZURODUZYBXBLHRMZYEPOOXJBVMELVIJGARBWIZMXIUWYOBRBXCVLSRJVQFWDVGTQKHRQTWTCEZHGPOQBNABATNRYQENDS");
    msg.conditions.assign("QVYPOKWYUXNACLHNECVDIPFUPJVBAVOXDCMQBFICOOWEFAYKNVKYTSSDZFJRWCQBHCVJUGEDWHNTEZYGFKPSMLDDDA");

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
    msg.setTimeStamp(0.649465339826);
    msg.setSource(16659U);
    msg.setSourceEntity(23U);
    msg.setDestination(55487U);
    msg.setDestinationEntity(23U);
    msg.source_man.assign("KLCXJHNUEKMDSSJQTCOXTPGOCPXZYUVQVWHCVMAFPYOBHPTOYCLHGUNYCILATVOVFGXYURNJZDRATEMRFLNWYGANOPLSBSPBBZIDLFRGFSKDCRNJIDUHEKEGQZYUKKTZPNPIWIUBRSEEUKNDWMZDCQHBTBBESCMXYXNJLWZWXMQTJIAZLJXIGDUKNZBWOTSAKHEHLHAJRFGPWJBMEIVXDMQVYFMAACTAIVRQWVEOHXOFFZ");
    msg.dest_man.assign("DNMEFYBCELPRFFCMYXCPLFEZPFFVIPWTSNFOVTBANBZJEGVAESVIBSZJVTYXKGHQIUWTZBLNZQQNJMJKSTORFHSVHQYGSVHWIVPQSROWRUIKUMGCIQWUADGPHMBFPHWRJCCGOMQNAXJKHLKUXEUEDXLPYKYUUGUKCBIZMDRXVYZDLDRRMT");
    msg.conditions.assign("FODAAXUWPCPFEMTIUAQXTXGKRMOQIMLHCNHYWCHSYAVQTQMESQHNZEMHJZQDCZOLVIHTPUHRDLRRSZXHEUVNGOPTISWPGBBBDXOMRREBJYCPLVXRVWOQLGESPCNVMTWGYYDNISFWDLHYXNLAEAKRUOQSMJP");

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
    msg.setTimeStamp(0.631325463007);
    msg.setSource(19444U);
    msg.setSourceEntity(168U);
    msg.setDestination(417U);
    msg.setDestinationEntity(22U);
    msg.command = 236U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WLKZKJMKDVCBFJPXHLUBYDTNXTCOGVLRXRLOYCPWWRBGALQNHWVOHCHJCPDUQBUSBIZZWSLMTARMAZGXFXMVXJJPLITFNWSCDORQMNPQWGCJZKAFGWEOIGSPNUISIMEYMKQEZDUAUJQOUPD");
    tmp_msg_0.description.assign("FMTJOPVBEERPYWHYJSQPYZIFALSXBJHZDLAS");
    tmp_msg_0.vnamespace.assign("HEHHETLQFKSIIUIVNSNOOPYRTDDJPHZXXYCWIXZPMJRZTCYHLAPPPNBLDCEEEOPKXLCADZCUQOIUSWMFYQQFZSBJXUOYOKZKXUGHEMEKSYAYSXCXJVQNBBPERQVTGLBMYEEXTVZOUCLRTFMNFQHNWAGBWFRPVZPFRLTBTJQKSVDS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CTHIIQHCNXGVWYYXTUHPMWWGQVJQOBSFRVXWRWUOBICUEOWQKUHNXMHRKNWQTXJXPJGSSHTNIUDHZJQDGHZJVOLIGAFCRYPCMVBAODEFSNNVLEOWNTNJMPZGKIZVUCQBWISKDJXFTOOBFRKGCIMQMFBGKPTSDLBWRZJDAXAQASVGEKEEDUFFLLHNSCMYPLZREFEZOLJAEAU");
    tmp_tmp_msg_0_0.value.assign("TYSMHYLKXUIDKMEIQZBCOUYINHMNB");
    tmp_tmp_msg_0_0.type = 170U;
    tmp_tmp_msg_0_0.access = 85U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MOYNABEUNS");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FKKPRCOWSWDOFGDZMJLYYFWKHFEEEMSQDTCRWGHSBMTTWSKEPXMSOPIIREAGXWNHQKEXCFHLRFEZPAMNWOYUASPMQCWAUORWIAJOGKCHCDXNLZSSDIPXXUVAJQJVLYNRVRLLNTYBJMBGAACCXQVSHNZZZRYGTLUBEHPBIRBYJWLTTVPIGSMLFDNYGDPTTCUNUDPOKZQQFBJXKINCQIZVQXJBTKVEYOH");
    tmp_tmp_msg_0_1.dest_man.assign("TAUYSHNKDOGVXIZJZFYMDPBRGCGKSFFBCRZVNJATYISMCCPRSQDBZHDAQBLJOYDMPPICIFQKKEMKKYYBVLTAAINNORUTQIPEITTD");
    tmp_tmp_msg_0_1.conditions.assign("GKEZBXNIIANACNWROQUFJYFXTLCKXGGNDLLWQIQOJGDBYZQFMUAHINPIOKWKLIWTYVWHHKGDCBSJTDIGAWMTUGSKISVJCEPEHXPKXEFCMEVHPFRBJJFJDNUZVQRHP");
    IMC::VehicleMedium tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.medium = 179U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LblDetection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.tx = 141U;
    tmp_tmp_msg_0_2.channel = 66U;
    tmp_tmp_msg_0_2.timer = 36155U;
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
    msg.setTimeStamp(0.636705472225);
    msg.setSource(2962U);
    msg.setSourceEntity(85U);
    msg.setDestination(39117U);
    msg.setDestinationEntity(13U);
    msg.command = 200U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZZWAQSBMSWDEBLZNUGPKGPSELIOMQKKMAZWMYRKNUIRYUATWDKXMHVQOOAIUXVAMTMJIVIQXBNLNSTWSVLREGCYBVSBFOPLFEXJCBDYKKRHDIGAJJNYJUPVHYNDLPMZNLWYCEPIWOTCPUZFLWFYCPYKHHJVVQFOFZTIGIXDTCSGFFTAVL");
    tmp_msg_0.description.assign("OQMUSUGENYVMUGTTCZVNVMKLPUDYJKVIDDLLCJAUHEDWGRENGBXWFXSUWIUVSRXHEZOEDOBXFSPIIIHLFMJTKYNOPKKACFAWQWEBTSMHOOQYPCNRDDEHAHYNFPNAJCZOZLRNRKVUZGKRPQRMZZTBDVCXOLJSVYQGBMTOWAPPTFEJXIJIKRBYAAGAAZVYKSLTPNWXYQOHXJTEMMVIBCHMWFZC");
    tmp_msg_0.vnamespace.assign("WZTGBNLVCRIVLONMZUFGJHWSZCXTHEOYCOOTIDBRIDWGKGPJPYFJTRLMLIJAVSVDWZQKZEXEXDOPJUQWSSBHWWJINUDYCGHUNQCMRFQPMCKMDFBTIXAUT");
    tmp_msg_0.start_man_id.assign("SCTSMTYIJYRSKVMYJSCLPLIUKBTKETDWAKOBNZZEWQGDNPRTAVHECSRAQWGHVNFNUNJIOQKAPDCVQLPJEGHYLYMGFUDZEKSJOINAGRXSMUDUTLHAPRKMUEBVZGXRCXWJTXSUH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AMUPGOVGMXKBXTFSWPMBUESEUAHGIYKRGZUVBCLHHUPQQOJWTPVYOATNRMIZYSRSGPNIGFLPLTOWTOZFFOHZFIJYHWTMEAOKDFSDBMBKEJUCIGYLOWKBJQQYLKJEMEWWAIZQMYGSSJCNPDADZLHFVXMWMYAVHCUQXRLJECVBDEHDUOCP");
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 10902U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0332175816948;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.539654607706;
    tmp_tmp_tmp_msg_0_0_0.z = 0.413749341505;
    tmp_tmp_tmp_msg_0_0_0.z_units = 14U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.336774046175;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 14U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.507410604619;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.874134552418;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.858776458529;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JBAIMBPCGRXCFTXMMTESDYTUQADQYFEUNRTTKHFSEZQAWEZLGYZFSFYUUXXWBJIAPNMTKRPIUSCSATAZXERRZZHQEFGLHKMKMVHQSDMTFWYJINQIUDZLNNEUCCOYBJPFPJKINTJQPQKKGHVCXEOOVBGGNXOQGOYAGWFWSWWYSZBROCNHPGUGIMLPLZVJMHVRSVITNVUEHOQERIBWYRBPDOPKNKZO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SessionStatus tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.sessid = 1254975269U;
    tmp_tmp_tmp_msg_0_0_1.status = 74U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Pulse tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.448371338002);
    msg.setSource(7555U);
    msg.setSourceEntity(180U);
    msg.setDestination(32791U);
    msg.setDestinationEntity(151U);
    msg.command = 31U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IRAXHNVCEAYLRBNWUZECJOAESLIPFOKVTCMRZDEPISVGZXXFNXBAUEWFLAWFORCLGJZNFJJZETTVJYXXCOGUMVMQGDHGFHQLHYNDBAZCOASNVICCIGXHWBTYLRDXCBFSYSRPAYWUKQEKPRGEMSURZLHGOQNBOQOWPJKGBOWTKMKTOHPWRPPMATDTGVLRBNCBVTDUQQPSNZJIKSJKAILMJIIHQXWQEVJYIQBFKEUTSZHDKUYDHSM");
    tmp_msg_0.description.assign("VCSWMMBDESULHQJSVPEUOPNMXIZHHNQCAHEVUNFRRHGIWHJCOQONXFJWDLNNB");
    tmp_msg_0.vnamespace.assign("ASKAAAZSPQUPVPZKIY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PNMLOQGJJYHWJEFRZETEHEMGALFAAUIWFSKBGNTUUXZIHZBAPRUOJOSQRXKT");
    tmp_tmp_msg_0_0.value.assign("OZUHHFUYFQEZXNPFRHUOAUYSAIPAZJUMPOFDJJQLGYCEMBUXLQQOBGDGLNLXWYZEIHPTCGBPBYYWGDDKMMNCNUXNRBOSSDQRQHHWBHXVNTWNGXSSVCIVQEJIEYHGJPBSKEZYZLTHXISRKJODRKLNVUGTEAELMCEVVDJRKFKWUVFLYWARDWAODJTFGLIOXMVCMMPHRTACMKWKUNATBQIWBOFCKPFXK");
    tmp_tmp_msg_0_0.type = 29U;
    tmp_tmp_msg_0_0.access = 163U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TVIKABHULNPEKJEQUTLGMUNNZYPTGOFODWEUBYSGKCUJLYFRXUIFNWCESWEFCOWWYFKNHAYJXEJIRRIRLDUAGCMXHSFKRALXDQJPPUUWOKKTYSNCTIRPASKLVWUKNJBHYZDZITABISEGQLWGHWSGPZMXPZ");
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
    msg.setTimeStamp(0.493270665024);
    msg.setSource(25330U);
    msg.setSourceEntity(124U);
    msg.setDestination(45880U);
    msg.setDestinationEntity(227U);
    msg.state = 108U;
    msg.plan_id.assign("QTQONZZEIG");
    msg.comm_level = 58U;

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
    msg.setTimeStamp(0.596691728341);
    msg.setSource(21732U);
    msg.setSourceEntity(62U);
    msg.setDestination(16854U);
    msg.setDestinationEntity(79U);
    msg.state = 248U;
    msg.plan_id.assign("JWLMMKJTIAAQJTZFQTVIKFRELGSTAVUMRDHZDOZIEAXANVQOFMMDCPXYORCBXFTSFRBICGGOMBXLTVCPFAYRQTEGQELFDFUBSECEGUNCUAEJYICPKVWRQDJOZALZFSLQNGLSEURIRMVGKIPSOWHPWIOUEHNXTRQZUZCPZWOVMNLFHDIWQMXBNWDISEKJPDBWKTJJQH");
    msg.comm_level = 17U;

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
    msg.setTimeStamp(0.772167627213);
    msg.setSource(19883U);
    msg.setSourceEntity(134U);
    msg.setDestination(18417U);
    msg.setDestinationEntity(10U);
    msg.state = 222U;
    msg.plan_id.assign("BYKGEDHBVLTFJFICNSARJHSJDWHNTBFTYBKNSMWOEGSOHMROXARTTLIXLBAYFQUTHGFMGLPXGZXOEWCUJOIAEOJUFMTQBPHIXSVNVQLTWIJLVNCUEKZMZESNRAPUJIRDBGEDQFCUOHEGWMMZAPYTQYXAXKPJIWRMYKKLRWGCPVQRYWBVQFMFSZPIHRVZXUDKNVZXDEDULHSABDJCYPOUKC");
    msg.comm_level = 227U;

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
    msg.setTimeStamp(0.975009683769);
    msg.setSource(21991U);
    msg.setSourceEntity(34U);
    msg.setDestination(36983U);
    msg.setDestinationEntity(191U);
    msg.type = 201U;
    msg.op = 35U;
    msg.request_id = 57709U;
    msg.plan_id.assign("ZCHMQILFTWBNCSGHHTFLSAZJSXHUYZAWRLOVXMJNBJSVTTPZMNQ");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.412476574451;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BIVDRMZCLIFJRGNOBYUBZTZGJRAMEQNWIVWMRELXAUBOVLQXHMVAVCWRHANHHUSTWJSTJLDRPGHCPIGA");

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
    msg.setTimeStamp(0.341902952934);
    msg.setSource(26422U);
    msg.setSourceEntity(163U);
    msg.setDestination(10852U);
    msg.setDestinationEntity(231U);
    msg.type = 85U;
    msg.op = 206U;
    msg.request_id = 55183U;
    msg.plan_id.assign("AHXPONHVXBQNZCAVOCIKWKUVRFKGJSYBXUKGLJABYJUUQDORMLYNCPREYZQESEZGBKSHBDINEAJEUEAIYNOLTQQDBWGWMCQRCQMFMKMAXQLRTIWOPBOIIDYARVNMGHFVH");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 98U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RZEFDWXSRPFIINWHNDTXOCSQNBVHKTEBAZGRVAXAWKHMRZU");

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
    msg.setTimeStamp(0.480826938133);
    msg.setSource(12456U);
    msg.setSourceEntity(94U);
    msg.setDestination(3758U);
    msg.setDestinationEntity(251U);
    msg.type = 42U;
    msg.op = 90U;
    msg.request_id = 289U;
    msg.plan_id.assign("ZVVAPTZKIWJJBMRAOGPGDOLTLYFYESDQUKCJZMENXKQOIHVUBXJEKFNJXDZTNHWPFMSSFIAQOMZKGZRECBHMUGXVODUNVHEVCWKWPMXSOPFLTECAFPGNYIWYSHRXLAY");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("TUWMIPBGSBTRUEJBMBDSOPVAKWLPZXJNVBDWIWDFOIAQAFFBUYZWDDTKVOXZVFLQCASLUVYEJLTWDRHPERCHGZAGPICYOSEVLNOQXTZSCGAMWQHDXGKMKHMVOJXYCJYJRVTQMDNZFUSCYNYBIDBZQXFHFLCNUPPULCIHRDRHZXAUOXVGZJRYSJCNIOUEXEANWNYHQQLAQVYQEFSWLMFRKPWHMKOOGG");
    tmp_msg_0.service_type = 252U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UFWMRDNYAWZRTSABQZNPDQCEPMAKSUZNOSOQVXTSMSMHBZKRMMYYHNMXKVLEUIOVWWFLLLVYFKWFXDUBKDOWAIUESZVKRGLEUOQCTFRFIJUZISPHCEXJZUPFSQONBGNIEEYTZHFGIRHVVOCCHWDTDMV");

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
    msg.setTimeStamp(0.182304788047);
    msg.setSource(31642U);
    msg.setSourceEntity(79U);
    msg.setDestination(57739U);
    msg.setDestinationEntity(167U);
    msg.plan_count = 2563U;
    msg.plan_size = 2453127318U;
    msg.change_time = 0.545698330819;
    msg.change_sid = 1169U;
    msg.change_sname.assign("EHXAJXCJKDSHBOWYTBQWFHNVVYLFKMZKIUWAEUXFXZEKVBKSGSPASMMHATLMFJJDPBVURTHMXQYCGQAYKDHOWCTPIFHSGXRGMXHHNOWPZGUCLKWOCCKDEEIAVMFCBZQWIEDYRGUVSNAWPWENRUMTCGFRIVFTPSTZOXIYPRLZUPLJNARYPYPNOLNTJZQTFBAZKDUEIIWJDDUADIVBQRRYFZXVEGKQTNOJLVYBCUSSEO");
    const char tmp_msg_0[] = {89, 107, 66, -43, -48, 63, -64, 93, -11, 48, 36, 93, 27, 122, -122, 89, -82, -39, 9, 71, -25, -13, 103, 119, -96, -65, -4, -63, 85, 14, -117, 12, -95, 17, -80, 105, 39, -42, 44, -80, -3, -72, -117, -36, -3, -72, 111, 20, -34, 27, -120, 39, 78, 108, -116, 55, 68, 40, -103, -40, 74, -65, 34, -95, 70, -114, -122, -37, 50, 22, 1, 116, 57, 19, -120, 56, -66, -51, -114, -38, 83, 80, 23, -127, -68, 72, 3, 61, -1, -104, -94, 1, -47, -116, -31, 61, 6, -87, -72, -88, -93, 34, 22, 20, -108, 107, -50, 57, 104, 68, 61, 35, -37, 11, -4, -33, 4, 4, 82, 99, -124, -99, -127, 50, 5, -64, -29, 106, 24, 47, -25, 21, 11, 113, -92, 42, 89, -74, 90, 124, 70, 35, 70, 23, 39, -97, -18, 45, -46, 33, -83, -24, 3, -9, -63, 125, -126, -22, -58, 21, 91, 92, -57, 46, 52, 59, -46, -80, -22, -82, 4, -92, 86, 124, -61, 106, -55, 119, 1, 70, -22, -106, -47, -78, -20, 37, -61, -21, 50, -44, 82, 52, 95, -107, -96, -64, -119, 76, 99, -126, 42, -105, -51, 98, -86, 86, -45, 111, -62, 48, -87, -19, -33, -50, 0, -85, 22, 86, 22, -8, -48, -63, -80, 116, -46, -116, 49, 55, 73, 56, -123, 101, -93, 58, 8, 91, -47};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NWTMWHAOWHFAIHKYXJTAZNC");
    tmp_msg_1.plan_size = 44241U;
    tmp_msg_1.change_time = 0.962022382071;
    tmp_msg_1.change_sid = 43451U;
    tmp_msg_1.change_sname.assign("KOKEZGCLBDHGNQEHFRCJEFDIJLICVVULTYCPNAVMIPRQKHJLVJTTSZCSEPDKSBZYNWRUSHQJREWLXYXHIOEAUEKDHYGQBGZFQGZCNAPYEHZSJDZYM");
    const char tmp_tmp_msg_1_0[] = {48, 91, -1, 27, 101, 32, -36, -10, -40, -26, -40, -7, -56, -106, -54, -116, -16, 32, 81, -104, -58, 110, -23, 117, -120, -82, -18, -97, 83, -76, -104, 84, 42, -15, -57, -7, -24, 110, -24, -79, -99, -39, 116, -65, 122, 106, 93, 33, 29, 47, 118, 65, 119, -118, -66, 42, -102, -91, -7, -79, 31, -4, -108, 57, -124, -21, -80, -68, 54, 80, 118, 19, -84, 92, -71, 21, -31, 44, -63, -117, 38, -110, -117, 37, 31, 110, 121, 51, -98, -71, 12, 25, -77, -39, -36, -124, -11, 8, -88, -96, 0, 17, 10, 43, -38, -4, -52, -12, -41, 72, 54, -125, 45, 46, -22, 124, -83, 6, 26, -108, 19, -115, 59, -109, -41, -60, 62, -83, 123, -25, -2, -70, 66, -86, 10, -44, 24, 16, -88, 68, -27, -79, 112, 67, -88, -117, 93, 8, -69, 74, -25, 101, 25, 35, -102, 98, 81, 96, -113, 67, -20, -88, 97, -67, 63, -62, -5, -52, -62, -6, 115, 55, 43, 85, -64, 71, 116, 81, 77, 35, 84};
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
    msg.setTimeStamp(0.238603939979);
    msg.setSource(14861U);
    msg.setSourceEntity(23U);
    msg.setDestination(13608U);
    msg.setDestinationEntity(130U);
    msg.plan_count = 29681U;
    msg.plan_size = 899374480U;
    msg.change_time = 0.908868780962;
    msg.change_sid = 48198U;
    msg.change_sname.assign("JIEMXTMFJYLSGOIUALNJWZLUTNIJWHETRRMAVEOKWLGPNRPSKKENJDBTQPXUGKUPRAZSNTPUZCGNUSIROFBWXKEOMDTJUUKJDIDNBDQHFDBOKFGF");
    const char tmp_msg_0[] = {-66, 32, 60, 21, -121, -98, -121, -47, -45, -107, -35, 126, -20, 105, 99, -80, 51, 18, -1, -90, -107, -87, 73, -40, 67, -117, -57, 104, -60, 104, 112, -10, -117, 40, -82, 112, -5, 24, 46, -116, 33, 110, 105, 119, -5, 6, -66, -53, -38, 13, 0, -11, -115, -76, 62, -42, -9, 84, 11, -49, 12, -70, 71, 121, 102, -2, -73, -117, -19, -40, 66, -68, 35, -121, -94, 93, 11, 30, -51, -45, -106, -95, 88, 75, -113, 1, 100, -91, 60, 4, -59, -16, -127, -73, -98, 14, -97, -45, -80, 110, -126, -102, -118, 69, -80};
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
    msg.setTimeStamp(0.360681032365);
    msg.setSource(1426U);
    msg.setSourceEntity(161U);
    msg.setDestination(17478U);
    msg.setDestinationEntity(216U);
    msg.plan_count = 49870U;
    msg.plan_size = 1450433208U;
    msg.change_time = 0.600187321801;
    msg.change_sid = 40832U;
    msg.change_sname.assign("PDAGRYJKWKLQYGZF");
    const char tmp_msg_0[] = {-97, 98, -22, -1, 48, 12, 41, 29, 120, -14, 36, 11, 18, 105, 22, 8, -4, -37, -106, -66, 72, -109, 74, -41, 90, -127};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PWVPFDTFHVOQZGSWYXMHVFWGJLKNMPYBLTUCFWASFDCSUIILEKMQUTJWYOIQEMANPLTVLGGNIKDWTNRQPDOUKOTMVEVHQZWSCEHIJDRLTRPVCBUXEIYMSZAIUPWBEHCZJDRDB");
    tmp_msg_1.plan_size = 6948U;
    tmp_msg_1.change_time = 0.844628272662;
    tmp_msg_1.change_sid = 63198U;
    tmp_msg_1.change_sname.assign("CCRTHSHUQRSPEDXWZOKPALIQDVVOMXNJEBCGLYOFKMLJUVGMNQKCUGEFOEGVXGISPNLRYQJNJCGZCQREABFYIFJAWJLZBFSTAUWWLAYOYXIFWVDOHTWMSXMESZYZRTKTAHSNNDQTDUWBHBHQKIZELXPRISCTPIKYKBKNMDOABPEWDGHJHAQVAZSRNCUZUDOPUVV");
    const char tmp_tmp_msg_1_0[] = {83, -100, 103, 2, -33, 1, -84, -62, 20, -82, 108, 49, 56, -37, 103, 48, 90, 88, 70, 3, -110, 78, -37, 97, -1, 56, 33, -60, 95, 116, -46, -73, -58, -46, -28, -66, -114, 73, -75, -115, -108, -13, -116, 1, 42, 60, 45, 78, -6, -82, 72, 6, 11, -4, -117, 45, 26, 75, -89, -69, -84, 84, 88, 111, -21, -76, -101, 105, -96, 125, -107, 24, 105, -116, 27, 53, 16, -21, -83, -41, -60, -90, 50, 11, -38, -32, -50, -37, 75, 77, -117, -55, -93, -105, -26, -39, 82, -90, 69, -57, -51, -125, -45, -19, -19, 72, -54, -79, 100, -126, 29, 14};
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
    msg.setTimeStamp(0.33167841727);
    msg.setSource(19728U);
    msg.setSourceEntity(30U);
    msg.setDestination(30884U);
    msg.setDestinationEntity(30U);
    msg.plan_id.assign("FFMICTKXGVDNWQMTXBROANBTCGPFQKMTVONGLJJOSKLLWLJMIJFYXISSWQAHSDISIPXPNVPHLKUDAQWBIKFZTBBRORCAXFNEKFRHJPJDDKBOZPNDYUUEDEWVJJXGQHXLERZYOGMERUUHPQZEIXQPEYAAUZEKIWSAXFSYCVGHVMZ");
    msg.plan_size = 21007U;
    msg.change_time = 0.752911786402;
    msg.change_sid = 9503U;
    msg.change_sname.assign("HSSWAEYPGKVWYJRUOSMKHIVGVBZRHQBYTWNRMFKEOMAZUFRTZYCLCFTIRQUWRXZJHDPMGLFQGOHIWZFMQYXNTDZGUUEDCDOWYXZEFMLZSWCBZFXVAHIJWMNGETTBVQOCHEJRTCKSAHTTRXKNDPKDPC");
    const char tmp_msg_0[] = {-80, 2, 50, 100, 66, -45, -108, 1, 11, 19, -23, 32, 45, -20, -128, -6, 10, -32, -72, 101, -11, 3, 24, 38, -119, -79, 5, -33, -79, 106, -40, 2, -126, -54, 104, 73, 48, 7, 74, -82, 33, -115, -65, -90, -128, 124};
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
    msg.setTimeStamp(0.749047332204);
    msg.setSource(13785U);
    msg.setSourceEntity(134U);
    msg.setDestination(28376U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("VBOSVYLSOUXWTLYNVGCXGQBFNHCGBBPJWKVKZYSSFCWMVDJKAPAT");
    msg.plan_size = 40743U;
    msg.change_time = 0.66152659421;
    msg.change_sid = 16774U;
    msg.change_sname.assign("QPGVGXZMZJITVVVRCDDLIFIAZLQUCGIXMOSIEKWYXMGKXYOHMBHJDHHKNEYRPVCGNFCSXTRJMZWZKBTQTJWONFGNULRQOIYXTWBNJSOZRKTAFUHBFFYIQZFJYPDBLTEXAXWZHWCDJVHPVBHNLVPYNQKCWEFBCTUUBLYINUMOJGOJALEKAMVESXDALAQDMDBKPEPCWCVRRQQUOFPOSSEYHATJTRNUELSMWGOPXRZANZGUHUDQBRLKECSI");
    const char tmp_msg_0[] = {99, 125, 27, -62, -118, 91, -87, -46, 32, -14, 85, 43, 82, 28, 98, 107, 30, -56, -35};
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
    msg.setTimeStamp(0.288670457452);
    msg.setSource(21889U);
    msg.setSourceEntity(83U);
    msg.setDestination(47445U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("NSMOKGCAXAJJDNVAVVRSARKSWYKPBBYLFFIACKXETTQKISJDP");
    msg.plan_size = 33041U;
    msg.change_time = 0.748557543355;
    msg.change_sid = 50643U;
    msg.change_sname.assign("BZXJYGWUTRAVMVOGBQLSSUPEOEMPKHVOJALOUOSAECUDNMFWSIXINGFRTJVCKEFCWUGBTBZZMDGSSKLXTUQHGCEKBDRDVDPKQWIHFCTYZTPLJYXYZKJOXRHIKWOSAYTDSHGPCYABMRTOWNYOWCIYRJTINVMQAUZNSQWMSBFKVLJJXZLXIUAALDEGRTKNUHCFQXFQLWOMREPLNMAJPZEBZLXPFYGHNGPWVQRBEDNHVJFIQCYZXKHPFIUIVQMND");
    const char tmp_msg_0[] = {-113, 21, 29, 26, 96, -73, 8, -110, -28, -118, -33, -43, -4, 30, 90, 50, -110, 46, -34, 111, -45, 38, -74, 63, -32, -46, 34, 112, -63, 31};
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
    msg.setTimeStamp(0.201223037688);
    msg.setSource(38566U);
    msg.setSourceEntity(52U);
    msg.setDestination(32658U);
    msg.setDestinationEntity(252U);
    msg.type = 10U;
    msg.op = 63U;
    msg.request_id = 18158U;
    msg.plan_id.assign("LDUXRHLLRBFSDIEBONVSXFOTDDPG");
    msg.flags = 37199U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.18948502014;
    tmp_msg_0.lon = 0.0845672524879;
    tmp_msg_0.depth = 211U;
    tmp_msg_0.speed = 0.105635761907;
    tmp_msg_0.psi = 0.0513597382576;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AOUJXDTBUIKVMEKPZVOSAKCINRSZYFNYSEXGUPBSABLIYPJEGYNCWLWUEQGWBZZ");

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
    msg.setTimeStamp(0.652711631916);
    msg.setSource(33607U);
    msg.setSourceEntity(88U);
    msg.setDestination(33367U);
    msg.setDestinationEntity(39U);
    msg.type = 16U;
    msg.op = 176U;
    msg.request_id = 45724U;
    msg.plan_id.assign("DTJELLZNTSDQUCAZQRVVKRRQVCVQF");
    msg.flags = 20946U;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 46U;
    tmp_msg_0.id.assign("FVPVLHWFDDWHYAKCRVECBUIYTHLYKBNNBVQWQQLWEJREHNZADYMDMTLTCSJPAVFCJWGGWSXLBARXMNMZGFRZHJKODGQSGXNBEOMVAMLWNKHJOVSMK");
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.15005231397;
    tmp_tmp_msg_0_0.z_units = 119U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FNVQOBDJOETPXQLUGSYWDNMLWKUNTIYHLSOVBCJARWZXQXAWCEMHBBSGGTCEEKXDFQLKZFCRVIVHBQNOAKEUIEPTQEJHQTLRUAMGJXJGKRSYGGQTTADOYYSHOYZVIKWBLIJLMVMBWKHYFBVSXDQIFNJEVVPDIFOXMANLNDPUDPADOAGXYZDQCYGWFATTA");

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
    msg.setTimeStamp(0.946664677886);
    msg.setSource(64326U);
    msg.setSourceEntity(52U);
    msg.setDestination(62370U);
    msg.setDestinationEntity(158U);
    msg.type = 106U;
    msg.op = 66U;
    msg.request_id = 27662U;
    msg.plan_id.assign("MGEHLRUMTJSMPUAIXEZFMPJGDKEMKVCIKKXKYOOCSLTVEWVCVOZDHXNAXWFZKCWPFLPLKYXNDFASTBNXARTHXJWICRVASLHFVEFYMFSLNI");
    msg.flags = 58705U;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 195U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DHKNYEZITQLGCBMNOQHAHOEWHIXUKRMAFZQHQQSQYYVQSJPMVELDLIBPTJXESDOPLXXMIVBXGJLZSBJNXBKGUNVGXZJRUOIKPABYJFDUERPNGFINBCUDYSWGAKUWHFJDAAUARSKEOYZSWGSLEDCANVCYVTRODDRUNWZPIKUETLFYFSVCCWFNZYJFSOPRAQMLDZMMLBXHWK");

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
    msg.setTimeStamp(0.355700856579);
    msg.setSource(1185U);
    msg.setSourceEntity(80U);
    msg.setDestination(22429U);
    msg.setDestinationEntity(147U);
    msg.state = 10U;
    msg.plan_id.assign("URRXCPFRANPSDQRPYCRXEFTOAHLZWIILRHNOYNDZLOYBDPPVMQQUXLHGDUOCQZCHNEWTEKVOKTJFWTKBTNGYMBEZPCHVWRYXEMGEWSRCFNIHLBKJALXV");
    msg.plan_eta = 92627426;
    msg.plan_progress = 0.960520256358;
    msg.man_id.assign("KFNCKTCZEAQCNEUNJKSSAOLAEDLXXLCHJQTMYWVQRFJEUNQRKT");
    msg.man_type = 17433U;
    msg.man_eta = -1149650434;
    msg.last_outcome = 226U;

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
    msg.setTimeStamp(0.750461886801);
    msg.setSource(3865U);
    msg.setSourceEntity(253U);
    msg.setDestination(16881U);
    msg.setDestinationEntity(73U);
    msg.state = 110U;
    msg.plan_id.assign("HACJZQUASPAGNNUTUZKSYCJDOFWXEMNOMALWMWUOTJGBYRBDIESZPQZGBRYDFSVVCSORONFPYYQAXNLYBPTLVXDOILGKWKTKQDLVQMHFGCHRPWBTCGWNJVXPKNRYIMNPKPEJWZDAHUFZLBDWCWVB");
    msg.plan_eta = -922894814;
    msg.plan_progress = 0.637579625631;
    msg.man_id.assign("KXVQIOXTXGUBPBLOYYFXQCSVFEFFRMKEBEWDKSGIXVTACCMWRBSQETRVXDDUFUCZTYWXISNZMSUEHFFJSLAHCCDLCLVKPDLIIJHOZOZIABUZOMTMRIQXTQGZYDLBBYOODPGWVYTTAKNPJEWIJHWSEJKPPVHAZVLEGNWLTNANQFUANJGAEJKDFBMPVDSBACYCUPINMMSZWOJTWRSQHRYNYGJOLRGUHRDCMHFKNWQORPGHXV");
    msg.man_type = 24373U;
    msg.man_eta = 247192191;
    msg.last_outcome = 190U;

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
    msg.setTimeStamp(0.574565207525);
    msg.setSource(32691U);
    msg.setSourceEntity(22U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(13U);
    msg.state = 147U;
    msg.plan_id.assign("GSUDWTISVQGNRACGUWDQSQEZOAFHEBKYUBVUXCCWRDTJHPDMSYHOMESBVLCOTOXMGWBUUXWAVNOELHTNVNAHKQLEVXKADXPKPRPKJJVOYDREBPCGTDNONBGRBFPIENS");
    msg.plan_eta = -1431859190;
    msg.plan_progress = 0.802896840829;
    msg.man_id.assign("SFOFCKKPPUKWCLCILSXYWFDBVAXMEWRSAFVOJOLCDENZXXOXRGMFBGBQBVIIAXUDNUKUDGPEVGDSSHDJEAESYCIGJULMLEMCHRVPZWMHGKYOVJWRGINNBWQVGJPYPLHZWQIXQNHYPWYYBAWPECLDOAULBTEIVMNPQQKCUMTHZNYXZFYZQNLRHMAZXROILHTIUPBATOTRFTDUCSKOEFTWVSRKZRGBHTTUMNHKAJXQ");
    msg.man_type = 7832U;
    msg.man_eta = 90176779;
    msg.last_outcome = 212U;

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
    msg.setTimeStamp(0.678472014368);
    msg.setSource(16206U);
    msg.setSourceEntity(22U);
    msg.setDestination(42414U);
    msg.setDestinationEntity(254U);
    msg.name.assign("LCWTTGWJGSPICEIRIBQHLFSIZWTNLNHDYOYAGEJOLWESOSVGNCASATGDBBDGRKMSGFNOBAWYFDQACPEQVIJMFVPTMPSZTKSVRZFVNOQDJYEWBKURDVHYMQWOHFJEZHPVFMKYFCPXZIUWUMSRENOPVYKUPXCTRZXHMXGMGMIGKONSUONLOZQAXIWBVCLXUEEZACCYIAJRTABMPIXKLKUQVFXWDJKQHLXYDRUPBJHRZCHLELNZXTTRADJQJ");
    msg.value.assign("BCTYACHEBVRIIFVHXIODANTEVMHRICVEGJZQKQDIPZYFYR");
    msg.type = 158U;
    msg.access = 186U;

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
    msg.setTimeStamp(0.402229908821);
    msg.setSource(11640U);
    msg.setSourceEntity(205U);
    msg.setDestination(60942U);
    msg.setDestinationEntity(230U);
    msg.name.assign("LKXPJWXMZPFGFYODBP");
    msg.value.assign("FGGIUAWZKFZVIQQLUBYRJHFSZMJHXANQNVBHUXUXHRWGZRVHVHALCKBCBKGQGAZLRSOKITOMWHFVEYDBDUQCEAKEPOMMWXEMMMTYNSPDEWQLFCOASADSBFTIDKKMWTJZJFCUYCWXCPLJZZNDSGXEUYGDULWTXRRPRGQCRLPYNFIVCW");
    msg.type = 227U;
    msg.access = 93U;

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
    msg.setTimeStamp(0.0827908859683);
    msg.setSource(49124U);
    msg.setSourceEntity(248U);
    msg.setDestination(51914U);
    msg.setDestinationEntity(204U);
    msg.name.assign("NJMDMKJHHFXRUPHYHHQEDTGAOPTHKUHHYGBCXEWYSDNOOKLVSWQFKUBZOPQAVZLBEGSVYGUPAAGYZQJFVXKJKFSFAWQTRCMSRCSCBNIAXBBHVZTRODJDYYFGLZLWJESXRAUVGGFNVIXXIIULPW");
    msg.value.assign("VAEGOLCKYEXSSWADVYFQGXCHZPJOOLXBVYUNWFUFWMAXXECUYNBOZSMDLUEBHRSMLMVZFKNBWL");
    msg.type = 156U;
    msg.access = 248U;

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
    msg.setTimeStamp(0.944811991664);
    msg.setSource(59111U);
    msg.setSourceEntity(74U);
    msg.setDestination(18570U);
    msg.setDestinationEntity(46U);
    msg.cmd = 55U;
    msg.op = 98U;
    msg.plan_id.assign("ZXEACIFNVHJAPEXLWVQQPUKHBFZSRDVHKNXIFVITQRNEJIBSPLFTDPOKDCSVYCZTGJLRLBNSGXZRKTESAMLGBDUYXSJMACILBAAMOWOJCXUJWHYYBS");
    msg.params.assign("QGSIHFRKYSJBWWHDXJLVOSESQJNCUFLHVZAOBYYAMXBPXMUEBQJOBMQYPVMODWIQC");

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
    msg.setTimeStamp(0.26313075707);
    msg.setSource(54620U);
    msg.setSourceEntity(103U);
    msg.setDestination(50560U);
    msg.setDestinationEntity(238U);
    msg.cmd = 80U;
    msg.op = 141U;
    msg.plan_id.assign("AQGGELBNXARDVTSECWBMIBPPQUHAPROTLDYXUDNWNOYOZWUBABUPPHUHRDKVRZJTCZDDCOTJLRWSJOJCHMMGYAZFOOKXFXXQGIICQGOVBEKFGIJBDNSBKQZFPMIYMVYASWKPYMIGESZIJNGKWVHHDRMND");
    msg.params.assign("XOEHNRPZRXCAHGWYLITUYPENDATYEGVZMHOYOHJAEEHTPJLCFSIUDV");

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
    msg.setTimeStamp(0.253878080616);
    msg.setSource(41206U);
    msg.setSourceEntity(230U);
    msg.setDestination(23298U);
    msg.setDestinationEntity(177U);
    msg.cmd = 176U;
    msg.op = 123U;
    msg.plan_id.assign("WSOYLJISHPSTJBFKYCWCWKZVKFBRIVFBQLNEDDYHIHXTLPHGLASQOZERVYSGNKMUQHPFRECCPSSFDXXVMGHNGDLJYIXPKNTQLCCRYQONFFWNBOCDETOXZRHRURWAZAATNTVEMGLFMA");
    msg.params.assign("YFQTXRSPZFQXABRJQEIQOJLQTSEOOKCGVXNBCYGXUXDACKQKXZFXMPW");

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
    msg.setTimeStamp(0.931489315497);
    msg.setSource(63685U);
    msg.setSourceEntity(99U);
    msg.setDestination(4740U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.35314412407;
    msg.lon = 0.625657107699;
    msg.depth = 0.273526628321;
    msg.roll = 0.901799368672;
    msg.pitch = 0.187309658942;
    msg.yaw = 0.681219013788;
    msg.rcp_time = 0.0433696701795;
    msg.sid.assign("RTXLNADSCDQBTPDLTMTPWIWUDMHPOMSSSUJUQIDZZIKSPVMGJDZJDEZOQURYKFAFPUFHFKUCCZJJWYZOXAPEARXQOZLKELJWYDHRGUVPGHHHNIGXWUGJGGVVFEXZKVRMTFRATBBHWCKFBIDPCXOJARBLUNLJYBHOEEJHQNBEIYTM");
    msg.s_type = 96U;

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
    msg.setTimeStamp(0.311454925897);
    msg.setSource(6185U);
    msg.setSourceEntity(179U);
    msg.setDestination(11634U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.866670628952;
    msg.lon = 0.057282344865;
    msg.depth = 0.48331733333;
    msg.roll = 0.90603792481;
    msg.pitch = 0.968810893729;
    msg.yaw = 0.746511078646;
    msg.rcp_time = 0.175668020736;
    msg.sid.assign("PTSCOFDHOIEGJAYUMEERYACPWHPOKONEURSTLSOTAJZWFJDXYIBBCRF");
    msg.s_type = 120U;

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
    msg.setTimeStamp(0.245479742709);
    msg.setSource(33405U);
    msg.setSourceEntity(221U);
    msg.setDestination(49219U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.0665565130122;
    msg.lon = 0.324849462357;
    msg.depth = 0.679505310905;
    msg.roll = 0.502850491293;
    msg.pitch = 0.772532017497;
    msg.yaw = 0.0667813359925;
    msg.rcp_time = 0.449503249749;
    msg.sid.assign("NYAGWLOHBSCXYQDTGYMULWJOOTRANDFXESKRSKEGQFEMJLGZWXIJGSWISTKLYKNBTWUVBSXTJCSQRWNZFEZCTXFLDVHIBVUTWFSASVFUXCFLZHKQCNBTOMOCOMDZAIPLHDPDVBYJYDMAYLRRFJBNRYUMJHMIQVHKYIEMOINEQQAQFZHJADRGMFGOENEAQKDHLIDIVOCYGTQBWNUGGRNPIUVMUCVLSPZKPHCKWTPAZZBPCXAZ");
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
    msg.setTimeStamp(0.12677881064);
    msg.setSource(53761U);
    msg.setSourceEntity(47U);
    msg.setDestination(48043U);
    msg.setDestinationEntity(241U);
    msg.id.assign("JLYCWYENANDTUYSGVEMACYZSXHSSHXQXJNAZSKCLGZWZHFSQTRPKORRVKTFLTYPGQKWJFPEUNVTRIUILAISGCBCWGJOEBKDYKVEUHXACMICTRTMPDAOOMIHEQUQPFLAPEFMBDMWRMNNHAIJOPPQDBTDQYEHVJQNWRKRGLFLIXXUCMGILMYVZIXZGPWAJRQOGJLHBXDOUFZB");
    msg.sensor_class.assign("VBCAWDPSKTOEJUFRLNCLGQXYKLZKVCUGKPCZEHZAWSUVVZLFFPIINBKUWUPQHOMNMKYDRQIAIYUFNLPIAZRTRSCXXRKCELOIDFHQWLT");
    msg.lat = 0.286508713342;
    msg.lon = 0.00822315528803;
    msg.alt = 0.478660928698;
    msg.heading = 0.315732305383;
    msg.data.assign("JPHFDDYSPYGZWZIKVDFTFEOPJLAYJXBVBYGSQECPL");

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
    msg.setTimeStamp(0.0216973693097);
    msg.setSource(19333U);
    msg.setSourceEntity(134U);
    msg.setDestination(47329U);
    msg.setDestinationEntity(195U);
    msg.id.assign("MISUYBAZORMKIVGFDVMPGECVSWRHEPFVSHZTOPJJECQBSQLGEFLLTJDRJKDXPCPNOUIIXPTICENKHDUJEBGGSBGJKWYEFFUOHBCKIFZPABUHNRKVPL");
    msg.sensor_class.assign("ISQINKPNSFNNXEJSZBFTZHLLCSXHKGZVMETJIZTPYXXXAHGLCOQXIHGLYPBTVJIJYELUNMMVEBREYBDXKXGKMGDNWOABLKKQIKQRCHAPROUCCUFLIZRCOHVFQLUWVMUJWJPMWMUPGDNIBDQHAJIMSSDTTEDZFHAZWGTJXBRYQRVJLIQSWWRYOCPCTEONEVZONAFHRTMVEBDRAZPAPCTLEZVQGVUGUUSMBDFBNWHWGSKFYFFDKDOJYKAP");
    msg.lat = 0.931522499884;
    msg.lon = 0.409862817887;
    msg.alt = 0.149085584471;
    msg.heading = 0.346135800593;
    msg.data.assign("ZCPDIXYDWWIQCHPNNUNVVMZXHRFNSWOPRWZBYMECSRPSKYSQTF");

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
    msg.setTimeStamp(0.590566142497);
    msg.setSource(64908U);
    msg.setSourceEntity(176U);
    msg.setDestination(27399U);
    msg.setDestinationEntity(252U);
    msg.id.assign("WMUMBYXTWELVVEQKQXNYBZVFBKOIXGCGVZDJNWRCCNYYJSJGSIDJUPZMOLZZDWTHOKYYHIHGUFYEOKZEBWCNBOFVCUQUJRETLCRDPQYPUSPMPVFOKQVRMQXJNRWNICPDJFARCXFOBLDZERRAVWHFDADYUNGEBOBSNOASVXUTLJ");
    msg.sensor_class.assign("EKWWPYBMWZNHTAXPUIDOVGYQHRJURPYIKPEDULRANSLNDCOHRVDTOWFSGZMOUNRMLVVJOMTKXZHMPMLEJGUSUIS");
    msg.lat = 0.864457923354;
    msg.lon = 0.651993137256;
    msg.alt = 0.112839493645;
    msg.heading = 0.347437454048;
    msg.data.assign("NIZPTYQAWWKCLXHMVDGWNTOTXVPVKTMRBSFCXLVIYGAIISEGYRFMXEFZVLFXMQRKEJERDXOJPKBJBYOKRTBABDALFJHFALFXZDLYGJEJQEVAGCGSQAWY");

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
    msg.setTimeStamp(0.981351523147);
    msg.setSource(11522U);
    msg.setSourceEntity(189U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(61U);
    msg.id.assign("VESWFAWUGLTIJKFVFSYJTVNZDDRFTCCSOXEUSXZGLIUANRH");

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
    msg.setTimeStamp(0.522491751788);
    msg.setSource(23883U);
    msg.setSourceEntity(126U);
    msg.setDestination(54182U);
    msg.setDestinationEntity(89U);
    msg.id.assign("GSZNRUFGBTWQXARKHIFENASQJWUGBREDXCJLISOKMJELPXSKVULMAQIHHRRXPBYNLVKTFEFNT");

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
    msg.setTimeStamp(0.247339734449);
    msg.setSource(463U);
    msg.setSourceEntity(98U);
    msg.setDestination(46722U);
    msg.setDestinationEntity(224U);
    msg.id.assign("MWEYBNOXUCZKDGLFJVUGQWSNTMWUIKBZVNUBLRNUXACKBMRGITNAJDMICZYNHJREYMYKSAZFVOQVTMCUYOANUQMJIPLVPBGYPWUORFLNHRQOFVKBOCYANOLWMWXSXCTTSJWYBCEFYMUIHFQXKDPSHZJTPKZXQRTGPTHHDOZQGBNDAWCXLAWASGARHTDJLXQEIPQSRWHJSI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZOFOHCZKVVAGQOBLMUQTCRKRFHKNLLIVZBSKVHXEIHEQFGKIYAVMUXPHJLTCEIWFQZMYSYYCBHQMDLPAUOGOHHDHBZGBZVPPNNVDKBEVTDJLOWAKFLINJGZPIXTOPEFJ");
    tmp_msg_0.feature_type = 251U;
    tmp_msg_0.rgb_red = 35U;
    tmp_msg_0.rgb_green = 236U;
    tmp_msg_0.rgb_blue = 72U;
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
    msg.setTimeStamp(0.422805189716);
    msg.setSource(40300U);
    msg.setSourceEntity(32U);
    msg.setDestination(46653U);
    msg.setDestinationEntity(23U);
    msg.id.assign("LAMSDROOTSFHYMSAALZDTRYOGMJBMCWFJIKTUARHTQMGKIVXWXNKBMQYQBITNSHCVMFPCRXCZZHBFEXEHODKVYLMBELYAGJWAQILAZDEKLFOALYVPPVUZGJOXEVYEXNNUXTECHAWSK");
    msg.feature_type = 60U;
    msg.rgb_red = 52U;
    msg.rgb_green = 226U;
    msg.rgb_blue = 73U;

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
    msg.setTimeStamp(0.710054828675);
    msg.setSource(25866U);
    msg.setSourceEntity(202U);
    msg.setDestination(37177U);
    msg.setDestinationEntity(33U);
    msg.id.assign("IKYIQDXOXSFCZNLAZFOXGPMOHCVSAOGIMCZACGDHQVIBCDGUSBTFCFDRHXKWWYHWCSVTWHLGTEUWZAMKVKOGOGAUNUENUTSQARODMJPYTBJTYJKKDBLZVXDAJVFNQFZQPUMWYPNLEOOFBIPPZOTNSDFHTMYWBWNJLKJSXIRKANMHLXGUSMPWUYRVLJPBPZUBKGGZEYYEJRAIJHKCJMLERQXXEZRRPMTYBHQQDVAFQEUCQHRNDCLISWFXEVT");
    msg.feature_type = 71U;
    msg.rgb_red = 74U;
    msg.rgb_green = 195U;
    msg.rgb_blue = 22U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.765971320444;
    tmp_msg_0.lon = 0.923206035773;
    tmp_msg_0.alt = 0.80441740834;
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
    msg.setTimeStamp(0.0557774692022);
    msg.setSource(12469U);
    msg.setSourceEntity(177U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(69U);
    msg.id.assign("CNYITNFYFSZHLHZCIMGJLKTFDWNFHAUXAVMMDY");
    msg.feature_type = 19U;
    msg.rgb_red = 228U;
    msg.rgb_green = 159U;
    msg.rgb_blue = 228U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.991265114185;
    tmp_msg_0.lon = 0.386918579127;
    tmp_msg_0.alt = 0.379724670568;
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
    msg.setTimeStamp(0.395649125255);
    msg.setSource(60459U);
    msg.setSourceEntity(105U);
    msg.setDestination(59666U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.0981959101872;
    msg.lon = 0.401730543991;
    msg.alt = 0.951181211976;

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
    msg.setTimeStamp(0.507602276073);
    msg.setSource(63688U);
    msg.setSourceEntity(47U);
    msg.setDestination(31318U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.474785975737;
    msg.lon = 0.162943073034;
    msg.alt = 0.0637052540138;

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
    msg.setTimeStamp(0.318029394026);
    msg.setSource(43390U);
    msg.setSourceEntity(23U);
    msg.setDestination(9956U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.967282381674;
    msg.lon = 0.193062172637;
    msg.alt = 0.874265133947;

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
    msg.setTimeStamp(0.427621325277);
    msg.setSource(6666U);
    msg.setSourceEntity(108U);
    msg.setDestination(23492U);
    msg.setDestinationEntity(140U);
    msg.type = 112U;
    msg.id.assign("CQYZPBHEMHBGWEKINXUSARZHEFNYXVKOZQYTPWJUEVJXPIWSRRTBXFAPJCZGZIZUWSIGHRUXWBZIDYHCHKGM");
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.642456121559;
    tmp_msg_0.bias_r = 0.533818227026;
    tmp_msg_0.cog = 0.203284067381;
    tmp_msg_0.cyaw = 0.816112856701;
    tmp_msg_0.lbl_rej_level = 0.583836421983;
    tmp_msg_0.gps_rej_level = 0.722609880411;
    tmp_msg_0.custom_x = 0.935267570805;
    tmp_msg_0.custom_y = 0.114339760761;
    tmp_msg_0.custom_z = 0.946325688169;
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
    msg.setTimeStamp(0.936692146101);
    msg.setSource(8824U);
    msg.setSourceEntity(213U);
    msg.setDestination(41940U);
    msg.setDestinationEntity(153U);
    msg.type = 158U;
    msg.id.assign("MOGNNPZFQTQPPSVDIYVPJRVXJMYRULLFLHIQXRWVLXVPAOZHQSEWJNHXCXAFVKEDCLFYDEFDYFMSZKMMTMAZXTBWSOTHDQRRXJUWAKBWEICROAIJSLIEJLKISGUNIHCNZCSZDEGNRHBYKBNDDKAVJLFQCHOGMRBGALSHMOFBHEWWYVERQTYUNDPUGPXVLXYKQSMWZFISHRCOCZNJK");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 6U;
    tmp_msg_0.goal_id.assign("LHTRKDQGURYOBHTHKZKSZMRTWHLLEJSCFXKWZTHZHJSKMVRIZKVICBJMLYPVUJJFVBSQWAUORGOHGDQXEUJGEGXSOEIEXIPASAPQROEHOTLYJGTFKUTUCPANWDYNYHJAFDYGDDWCZKRKUUSDNQXMMGIRALLEZOBSABNECNXJQDCVOFNBZGVALTI");
    tmp_msg_0.goal_xml.assign("KGPTUGQGSYUDMMDOCDTOWXCRKTFNJVYSRENLACPSQPCWFHFTZWQQFHRVDSIZLXEBSLNIMJQIHYARAFFQLNKSMJXFLYALXWDCYZPVJAPMUEHWDUJGBIICHXJEDRGTRZGZFWRNYCDEJBAOBKIYCQHTXNNBOKFYVBXINZVIGJZRNIZSKCWMLWPWTHULBODCFBMPSVJTJXDGASKTEEXZ");
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
    msg.setTimeStamp(0.330843797409);
    msg.setSource(34658U);
    msg.setSourceEntity(134U);
    msg.setDestination(10105U);
    msg.setDestinationEntity(51U);
    msg.type = 118U;
    msg.id.assign("AQALDLYEOZO");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("BFUPHQNYKLRGOHMXAXKRJHCLENOYYRUSVUJFTDTHJZIJFMNZNYQYTTFGCKIEQFGBPNBIWZWBERXCNALPSSQVCUMSIDKAIWMEAPJURTZOPGSWVCFVYABPUCQJLSFPQTEONPWAXMQ");
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
    msg.setTimeStamp(0.5518138582);
    msg.setSource(15839U);
    msg.setSourceEntity(111U);
    msg.setDestination(24188U);
    msg.setDestinationEntity(206U);
    msg.localname.assign("QWWFDAXAUZXCGPRDOKCKMPPDQFXTSDQSMEUPTWXUAXLCQQZXIACRVTIJYZTNJENEZEQGGMBGLLMYYSEIQGYHJCNMQTPDDSHFFKNISIERVPYKBJXGTCTNJFITFZVZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TDJNCRFQADCGXPAQPFJMLFINDZWXKGBYGKIGEIYNLGAVPYXZOKUQLUGTFBVRONETIFRLPRGAPQDAJETKIYRPRBHMNXWHQCEVLGNNQDRYFAYSUNBFJYDUOOLWSXJTABUCWV");
    tmp_msg_0.sys_type = 193U;
    tmp_msg_0.owner = 14225U;
    tmp_msg_0.lat = 0.571571232817;
    tmp_msg_0.lon = 0.101174931576;
    tmp_msg_0.height = 0.316315234379;
    tmp_msg_0.services.assign("VWLALNPYOCLZUSSYCJTAZFGSSPGJCQAJRQJXDLHYETXRXOPTFENWRDXWLBHMFYUJOQWUNRTBXHBEWMURBSZGZSLPOHKZLJGWMCCMFVKKWIXIEMCBISNIOQZZTAGEXTFQLOGPFXTRUMAUROEPHKMGHHNRIKUQNDJBNBADQPOQATKDEFVPDCWLQNYKMTHCLYOX");
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
    msg.setTimeStamp(0.287453579196);
    msg.setSource(7569U);
    msg.setSourceEntity(70U);
    msg.setDestination(13087U);
    msg.setDestinationEntity(158U);
    msg.localname.assign("YVHFORQHSTNBYRLPDAKVUUSISXLPXEQDFFUBQOFBDGEOTLSVFCFMFMPZJNKZYHAGJOYNHVYJGZWSIUAXBSVWIAOCTKZHWWJWWLUFTLCGFOTTKEYOGLKHMYRCZSXCMDXEQRUJCYIETNMTRDA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YKLSEWLILVSRTIJYVUQZPGFETSRUAJGDXCBGHRZUCXPGGTKBWPDWWEQTOGSSATTRQLGDIAODJEUPKYMPKWWIMIXLDMZKYBLPQMRCWBZDOSTJNIACCLXQOFIAKHEFNJVBJFFNPZCZRKNXIUCDYHAEOXGNUHVNCBZKLNNEXSNJZCHATQUADIJCQUQFOSWNGVVXRATEOSPQY");
    tmp_msg_0.sys_type = 154U;
    tmp_msg_0.owner = 3337U;
    tmp_msg_0.lat = 0.582344346771;
    tmp_msg_0.lon = 0.376196082972;
    tmp_msg_0.height = 0.966346027077;
    tmp_msg_0.services.assign("JNWOJRIPQHWCMJCSCFBYTPTRQUKPFGMDLRGVDCEHLNOYALMHIUQDBGRVTJFAIUUQASTZZIDAJKIKXNQXJPHHHOKVWYLNQRUOXNZNDULDZCPBCBMNBPQLATEQWIBEVNLEJWTAYYBGYCFFUJWJVIBGXMWGLSJCTOTDGPVWMSVGPEXTSUBFRUGYOHKTECYAOLOEIRFAQK");
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
    msg.setTimeStamp(0.160937893128);
    msg.setSource(54695U);
    msg.setSourceEntity(140U);
    msg.setDestination(64642U);
    msg.setDestinationEntity(8U);
    msg.localname.assign("BTJNYZMJEVQMIMJTYVPBESFGFJMSZUOHPFATCPGGFGDKUHSPGLSUAYZLDPNCRQKQCXVVQGTESPOBSKASWK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SGOAFSEBCJOYATEAIIJHUWLOFQLWYRHNRKUHMHPPDBPVKWSVDKKNPLYDGAYVYUHVDVSZECLMXNTZUZVIETPQQXBDROMBKPMFUSPKZCWYFQMUJGKCAHZLTSCMOSXUVFYVGQJEJIHTBMTDGQANFQQAXFIPZXIJZWECHSQNWOWDOMD");
    tmp_msg_0.sys_type = 6U;
    tmp_msg_0.owner = 41556U;
    tmp_msg_0.lat = 0.377979771253;
    tmp_msg_0.lon = 0.923243899586;
    tmp_msg_0.height = 0.132216737627;
    tmp_msg_0.services.assign("GWSIEHYIMJFUOGFRFWSHTYDGIFU");
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
    msg.setTimeStamp(0.778244135224);
    msg.setSource(674U);
    msg.setSourceEntity(133U);
    msg.setDestination(7832U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("XGNUWRYYXCVWPQQVVXHHTRFZPDWJHDYUIGFKEYTSAOVHLPSPCNOYDYEEFCCBYUFWIVOMIDFKAVJKXDBPEXKMGZHUTJXRZKXIJRCONHBLQUSUSNFMTNGOARLYXNPFSZAMXSIUYAFJBURKMMCNOEJZMZHKEDRPAMOSKDPTEYNRXVWAFTSEBQGQASECQWTJOLBGGIZJWQLVAMB");
    msg.predicate.assign("VBTEBMHDTNRDXSBWGDX");
    msg.attributes.assign("COLFRBTKDIGDNWCLSGWVLFROVSSJVMPPYZCFECENYUDWSEDFVBQOYXRKAUYEXKBIUXXETIA");

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
    msg.setTimeStamp(0.672393662318);
    msg.setSource(7794U);
    msg.setSourceEntity(69U);
    msg.setDestination(4642U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("VUABDCYNPDTWMURBPPRLEDDLXCWIUAKUIZHLCIWOGNAPEDFQYHWSVNYHRKEMXBPGWWFMOTPCBCCZOLLYLYHLRVMUJZRGXQKQFYJBRGAJFALCEOEWWORVAOGTNPISVVXYXFMHJSFAJYVIAKCZLQVSRIDOEJAUNCJMTFXNYGDGEBOSCNUWZWXJHZXUS");
    msg.predicate.assign("KTGPEQCRBXKEJZIONHRJXIPLFPALHNJVUMWQIYYJDBRECMOGWYNVVQEFFRMMQQVHJCUEPBIUZHLDIFCMXAUFTSYGBLHZZUKZLCDHDJDDOOTLQPBRXOKXLAKSVRWSOGVGVDOYIADGPJKGMJHHSKTQLNOEZBRWN");
    msg.attributes.assign("GJUDIBONPTEQIDNTNSWOVGMHEFXWNYBFHDAJQNQCSIUQYUMGFPPMNGB");

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
    msg.setTimeStamp(0.88834772017);
    msg.setSource(65289U);
    msg.setSourceEntity(80U);
    msg.setDestination(29167U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("SIVGXIDZUHYNBMXP");
    msg.predicate.assign("NRQDRWDBWS");
    msg.attributes.assign("MXEVMIVTGTFZSRAEGICJDQYPQHMTMJNCKZMAGHBRVIXLLBAEMCLWJPRBOORMKWNCUWAZFZXGEHPDCGJWQDVZXDSSAYFMOBWIFLCDEQMPBMKYSIASXGLDQKWUDKQTGTLZYZURNFBVUCYPFHTPVJSOBIOKTKEOLQYJHUNDXVIECCQORKPYPSUINXLNTYSRIHBJIBOGXRTEAJKAOHAD");

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
    msg.setTimeStamp(0.690525484279);
    msg.setSource(12573U);
    msg.setSourceEntity(167U);
    msg.setDestination(4319U);
    msg.setDestinationEntity(134U);
    msg.command = 176U;
    msg.goal_id.assign("LIEFWNARCKZFFGMJYAUYGKULJROUDMGEDIPEEJBSNPDBLVZUMGAOCDVIDSQRIIHRQDUUSZHZPKNOLYZLKGYHCLHJNYTVZVOH");
    msg.goal_xml.assign("XYZSFMNLVZNZTFCBEHWNHHMQHWZYPZOIIYJRNDTFCZUQSUCRYAORNCSMUZYPLCPFXJDMQSKSCHGRGHGV");

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
    msg.setTimeStamp(0.568715609198);
    msg.setSource(41999U);
    msg.setSourceEntity(75U);
    msg.setDestination(12601U);
    msg.setDestinationEntity(97U);
    msg.command = 247U;
    msg.goal_id.assign("HPILYBDSKMUKOWQKJLEFQNETHXMWZFXRBXDPCZKKXAMZQEKFYCPIVIXCGFTAUIWXJQV");
    msg.goal_xml.assign("QGJKKTCQKGIODXYLSMNBPIMOJCGAQAMZWJQEOGDCRGFSHRXIPBNMLTMUQPDTACEHMMSFDUUYGHYPVIFDTXWAWLYUPRDGHWVBKOOHTQLSVBHVKQTSUPRZZGYZPRCJRFZIDB");

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
    msg.setTimeStamp(0.750983973561);
    msg.setSource(59743U);
    msg.setSourceEntity(62U);
    msg.setDestination(14557U);
    msg.setDestinationEntity(96U);
    msg.command = 101U;
    msg.goal_id.assign("TKVLJTGQBYQMCEOXNSAIHTUKFLDEACVZKIMRMIAWWOLKSBGEFPUVBHZDWPXZIZHGIUYETSJJZZHXUEFUARUENMMXPIOLSLLDLRVHARHPZONWURQIFNXHDSCQHBRYNWCSYWRVBJGTRFJVVLTOYPIRDYVTBMTAHWFOFLPXFCKDSYTQXEXJOOTPWWGAZKGXGNUBPPGYZKQQFDLIASMMCYGKCCXYDBUKDBNUJV");
    msg.goal_xml.assign("WMZSJNELHWVIBEBXQKOLQXZCWWQVKLPDWKPBNOHNPHQBQOYDSRAFDLZFJOMEFNBJSLGHDGZVPCLGCXUKORATDWCTUOZWIAMABEWJDIVQYUPGNQMMFTEYTFSJIQMJKCZKLYIOEMOROYKUHWJAGFBDUJAANBUIHBEAVCGNZGPYCXIKSKIRVECRDELUFAZMYTYTNSHDGFTSPVU");

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
    msg.setTimeStamp(0.577056127968);
    msg.setSource(48690U);
    msg.setSourceEntity(134U);
    msg.setDestination(35775U);
    msg.setDestinationEntity(31U);
    msg.op = 188U;
    msg.goal_id.assign("PAMYSVBGQLINXRKLUPWMQNHGGHUCSSLWVKTFDMXFNVDGCDBFUDOJOBNYLVYRMNYITPYNHASGARYQVEEMGPELHVTSSDCLRFBHQJWVTKBFXPKCFIJPVUDXCUSVHXZSC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HKNMWOFPYSGDKTGUIZAHLDYOC");
    tmp_msg_0.predicate.assign("PQYMKETJFIPQUNAAQ");
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
    msg.setTimeStamp(0.822938927635);
    msg.setSource(60849U);
    msg.setSourceEntity(126U);
    msg.setDestination(9554U);
    msg.setDestinationEntity(42U);
    msg.op = 124U;
    msg.goal_id.assign("MPUBOJAWCSZSYZJWJBTTNJIOTXAAZVFZKFLYFHQKKXNNCGYIJWSOFAZQLRIGZUSZBIUQLQCUFHGAJKPXMNWGJUMBDDHWDO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KDKGZXDMNEFTAELUQTPCEVFLZMYJWCXAIRIHFOKXDZKBMSEBGRPVQNHUFRKEIOLTOZGXBHOIFZWYWVPARSNHRUJIMFNBUWCMLOSGHCWUZWLJBFCIP");
    tmp_msg_0.predicate.assign("QBMHEFBRCRKLSZSDKVAJDLHLZLRZKGDCTMSVBPNOKEICZXQBGURIVVOFWYPTMWJYIOYKHYAZKECAOTPKOCIKWWUOHQNZUPXMSMBIWBIOZGOLGTDUDUBVEITJZHYHADLHFXORBHCUMNHBWXAVWJRLTTIAFJQXSFQIHTVPXEDJEQYPECLNGAGRKZQVDCJUFASEDAQVMRMEUWNXMSJNWWVJFNROXGMINLNFUXSJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UAIUYWRMEGFIPSNKCOAUJQEAXTUTVEQMQHVIFFZGRLMTJBCOHKLCZWPWPAYZDAOAHGNFEJLKMHYQGDDNDGCFYKNZLXHPWSXWEVAHLXVYIMUXDWUXVLTWVHJSDJDXBIRTZBQKWKRCBPRQXPPNBTCCFBKXLZBOOSOVZHGFSWEEZHSUOI");
    tmp_tmp_msg_0_0.attr_type = 119U;
    tmp_tmp_msg_0_0.min.assign("WWCONJTCBUKQTOZGRYQBUXGWRJNJVFDGBOKCKGEPSKKIIWVKLLHOIMBUPSECIEARACJXVUKNOFERYZJTDHROYIYNURVPANBHNPKVUPXWMRRALAMTZJHUGEHXIOEAFWMLFWQBYPUZDFACNSXR");
    tmp_tmp_msg_0_0.max.assign("ALCSZKDPAOSQDGIKXNJHECJXKCTZWXUYUJPMYWORRSXMVCORBPVNVIGKUHYQJCTZBMUJYZMQHADSITZDPRELNSGJGHEVJLOCPRRBBWZNTPUQFVVSFLISUKRJFKUKBTXXVCVVJN");
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
    msg.setTimeStamp(0.68909935818);
    msg.setSource(23313U);
    msg.setSourceEntity(17U);
    msg.setDestination(36980U);
    msg.setDestinationEntity(183U);
    msg.op = 127U;
    msg.goal_id.assign("EGNWCIFBWGWKOAMYQPVBMHNZIBSBQVPKAFOTZOYWDWIICXOVPJHRSNZZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HMBDUBTXICGVOMMHDTILUEMCQFRRUBSIERNEJBFGNQZQTWGIPCANJMNYNLCZYPVGWTYOKFMVXLILEUWZZUHPSKJUAJXWODGXRNQHRFFVMUZLODCLSWWYQAILZYUKASQHAFAJHAXNIZVFZDKSSKQBZFARXGVQHLXVKWPWYDTTDNESVUSBORLMQXSVHXGLCAKROCHGOOSPQJIJNXETMKFYFHEIJBGRNOEBRBDWPDAKWETYMCO");
    tmp_msg_0.predicate.assign("NCMRKECHIFCZOTMRHPNTTWVUMYZRDFECPWOMTAYLGZCXSRMEZWSIQRJSPCNHNIEBFAAVGDKXJUKADYYFREWUWJKBFADYNBQBKQC");
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
    msg.setTimeStamp(0.345214958502);
    msg.setSource(50040U);
    msg.setSourceEntity(149U);
    msg.setDestination(40475U);
    msg.setDestinationEntity(229U);
    msg.name.assign("WSWJCGSJBRNJMFIRBRVTHHRQKHTKTHVMLBYTFLJBBVGTABGLN");
    msg.attr_type = 164U;
    msg.min.assign("RTXAHGYICJHYIXKFROMXWZDPYAQJYEVAQYENKEBZIETVGFINDPMUDCQHBUSMOFZATKLBTVIJABGJFCPWRLZSJURGUPKNEDDQSFKPDGLMFWWMEIKSQPAHTDBUPVNWKNZOMXPTOCHKHDCETLUCQKCVNIGIMMVYNAUCVGRGXPSELSYSJ");
    msg.max.assign("WXJMIHXHNEIKMLLFUYXOTSSEYIPUZXULYDLSADBHHSMZWAWVWGQMACIROLAVFAPYBWJKLQISZRZCODNDRKXUYQBFEECFPLBQBHUGRTMROBFJQACYGVFEGPBSYQTHSJVIKVDJXREGCLUARUZDGMGSVFEKTZUMCVBYEQXRJKQVMOXXDBQLPNKWWAATJSHTIFQRNYOHIMWOZKFOIGZLDNKPDTBNGPVPFXNHKRPNTCNEJHSCZEVDMZCYWINPGOTWU");

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
    msg.setTimeStamp(0.285547308244);
    msg.setSource(63652U);
    msg.setSourceEntity(141U);
    msg.setDestination(57902U);
    msg.setDestinationEntity(99U);
    msg.name.assign("NMTIHMYIHOHFTBQBZNXZPZKMOVPYSTAERKBPKWLSXTQBADOXVQJDEFJCITIZOQGLNWHSPCZCNFLYWHCJMVCJUHSOZUESQPIXEEMCKNVFTFOGKBURTLQLBVXQCRURLBVSFIHRMDZKBUTKXXFIMQEVGREXGGLDQZDWNJJSYOQGFODYCMRSYAHVJCKYX");
    msg.attr_type = 65U;
    msg.min.assign("KITRUWPIDCVZRULAENYWDPFFJXXHYOFBEKFQYJTDDNANRHJGMJHHIKCFXCESIDGXGQYVKBUMCPONMETYLETOSSGFDXQPWAGPDJVBHMFLHBIBMKOMGDNGZLIZNEPSCACXHHDQWJOXFSUQLYJRZTATVNSOKAZTPRCURIBBEPRUHNZSKDVVBYJLWAXGTSHUVRWTI");
    msg.max.assign("DECUHCEHLSXGWXBAWLCMGKXDYDVTVASARNE");

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
    msg.setTimeStamp(0.0395772525608);
    msg.setSource(39119U);
    msg.setSourceEntity(165U);
    msg.setDestination(64337U);
    msg.setDestinationEntity(40U);
    msg.name.assign("DXXLWNKEDTSGSNJNFYQPURLMWSUBJDVXFFDTVVDHKYHSYUOURHSHFMFUHBMLIEEFAGZRZXNPENGOHDMIJPLQSIPABNDB");
    msg.attr_type = 5U;
    msg.min.assign("LPAMDJFSCRHGWPKWJVVKHPXMKQKDMWWWBOYARATZJTNAXLSIYSSNBUBXXIEH");
    msg.max.assign("ICFGXAAOMXDHGHYIEIEARHSWBSKODZMPILGUKRQDILILAZOFZADWFTVMTKHJWPUIPJXBJOVQMBRCVTCQQNQUCMAZAPNOQTUBWVFRRYDSILPLTNQNWDHTSYUMOOJSLPGJKUAKMWCWLTOLHZDYVIJCCBXKZCPEETXTBQEHPNGFGDNZGUCNEGZJEUFARDGTYSHBHNJEXFGLQYMPWEMRZYSRISUYSHJCVFRQBFK");

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
    msg.setTimeStamp(0.205573888483);
    msg.setSource(42569U);
    msg.setSourceEntity(32U);
    msg.setDestination(33342U);
    msg.setDestinationEntity(181U);
    msg.timeline.assign("KAMJZHYRXSACKXVRGOMSXPQIXVTXNLNMZYVQIEFVJCKIZDUBSGTPLMZBTEYWMELFONSXLOSLSESRHGHUJFVIRKC");
    msg.predicate.assign("YUHAFGEMFXUDNPFXQOWMJXWYPYTJHIPOWINYURTRSJLXNSRAGMASYEEJDNCUIEKVVNSTCHTFSLIZWXTCHLADZTDLQXHUGGVZKVDF");

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
    msg.setTimeStamp(0.363803351435);
    msg.setSource(54779U);
    msg.setSourceEntity(39U);
    msg.setDestination(25231U);
    msg.setDestinationEntity(52U);
    msg.timeline.assign("CALJPKQYPTEYPDLPQZJXZLWIDIAAMHUMUSNXTHRBGHRDBLCYGMWCJDKIJYXFPPWHAXEAKADOBUUMZTYGEUROSVDACMNDIRNEBRUMVHOAHTONLJ");
    msg.predicate.assign("QXZETDSZKCDFPPIBVUPXGMLCHUWZKJSYAEXEABWONWWYYCNMHPDQHVABQHTBAWOGQFZDOBNYDKRNIMLYVTODLGWXHPNIGBUADPHKYERYGQOLSAVIEKTCVFT");

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
    msg.setTimeStamp(0.726995181346);
    msg.setSource(55482U);
    msg.setSourceEntity(116U);
    msg.setDestination(34569U);
    msg.setDestinationEntity(173U);
    msg.timeline.assign("JAPXWADBYCYXECWGHSCIHBMDKZXFKOZDAGKDJQLO");
    msg.predicate.assign("ENSVBBZTLFEWFIBUCAOVNQUGIYQJMVGWXPXNBRWGBQWDAYCX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NPXNUERIAD");
    tmp_msg_0.attr_type = 85U;
    tmp_msg_0.min.assign("BNVNBGQPRSFXDJNCZHKSMMLGHEQCVCDJOGVPUXEYDHQUCAOJEATXAEKSNQZDDCM");
    tmp_msg_0.max.assign("GKZYOAREICNPENDNVUWIMJLBCGTFXAKAZGKFGJFPDWTBDQFKPSNDJLHLUYNYEULQAIKVNXDVMGDOCCOLHBJPMQLGGNRVZQDEYQJZAIFUPWTIICWSDLULEYYSYFZQGFXXXBKVBZYIPTREKAQHZKGRNSYLUQCBHXHEEOSRTWRWLARMMNUTJRIMRQFJDSOMUDPTYJUWGZVHJOMJXCSWCXVHXMCWZSHXEKBAISZAHETBFABUP");
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
    msg.setTimeStamp(0.371049273392);
    msg.setSource(18028U);
    msg.setSourceEntity(134U);
    msg.setDestination(7617U);
    msg.setDestinationEntity(78U);
    msg.reactor.assign("XCRLHJLGOBFVEYWLGZIOJGLPPWBRKXHKXTIYTQYGQXVRPKKAWZWCFZSDZXHMJPKDTIMFSYTLOUBPMEWETWIUQNVCTDVSJQYWCNHOLHXBNZLISCSDHFGYQZGEUOZUBWPRXZYQNKDMWUDXMFSYDFZEDCRGMOXQEINAIOVPLTUQVMMBMDFGUPULCIKNLAPBTERNQBIFXKAAGEDUKVAJNGAECCJRAJFROHOTQKZS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UBKYPCGWEQSIWZSYHFGTJJTKVCNLFLGIELTAQFACPHWRQOUZMMFXODBBQQFQJQVVXZCFDNKUXVDJOV");
    tmp_msg_0.predicate.assign("DYZNLKYIQNHXLKBHSOOOEHSTZPFVQSYNMWIXQWOAZVGLRTIBDLMGDMKLNDPDPQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FYMAMWIVXPNGNXPKHFGEQKBOIWMLFZVVPHAUPLYGUBCKQITBZSPFRLEBXIRZLCMYYQUMVADTOWFUCBRJGGQXEHAYZAHMVKPGTEOCGARMIABNXCYJPJDVGLFLUZOMPWWHXSQUDPXDJSYVOTKCDGCRDLTZVBHNFLNQKJOTUCDZLIYCBTANQIDSXZOVFRDKLRSSJOKJSUWTWHWRGQQWHEK");
    tmp_tmp_msg_0_0.attr_type = 27U;
    tmp_tmp_msg_0_0.min.assign("QXBTRDQSKKKPCIWYCYMVCTDNLYVQTOCENFFGUJWHLATAHPVMBZVIVUITRBEBDLJHIWQHNUYXSFZIAMFRPJUOSXLCZWLHW");
    tmp_tmp_msg_0_0.max.assign("HYHMVLFWTSNGFQYEKAKZFCRMXOZSFZWWVMYOCXZZSPVUEVSATPKHIAGBPRBSVYMVXAFTJCHIDKPEUMNLQOXMFRXMGXHKYRSJIUBBEVIRQEJJCOASUTTTJLBTHWFSMDJWZDDHUEIYBIBUTKNAFURGCXJCDPZEVNUBMQGDHLQJPEB");
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
    msg.setTimeStamp(0.849327663574);
    msg.setSource(42887U);
    msg.setSourceEntity(68U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(207U);
    msg.reactor.assign("OYUFGQURACLECEIPLCBVGUNIAFBHAPNVHSTJQVIACPOHPXYAZYCNKAYZFQESBILMRRSRMRBNGOIOMSVJWZLXYCJTDWNIOEBKAYEPOXOJGGAECGKXVBNSXBKFXBJJYVOWNCDMWHRDCBSHZIMQLIDHUTHJGSXEJQDKLQENWHVPTLYPZDPNFSKQFFWZARTSKWFCGRXUOURYAJMHTGXJWVUMUWFLDKSEOGY");

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
    msg.setTimeStamp(0.0555416880733);
    msg.setSource(59583U);
    msg.setSourceEntity(92U);
    msg.setDestination(41824U);
    msg.setDestinationEntity(37U);
    msg.reactor.assign("MGHDXKQNZOHGYBCFBOFFBFRQC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XGCIQQGCGFTRNYCKXBHBSFXJTBHCJOQCUWMQTPATQVUGNIDQKRDLDNYWFKLTM");
    tmp_msg_0.predicate.assign("DOKHNXADMBMCQRGATULXYBMWTRLTQVNCEJRFKCUXVERYJQBATQSLMXUGJVTGOIMZIGFOEEGLWEHDRIARMYARJYDGNLBQKIFSUCCLTXHQWNKKKQFDOZTZEPEJFXYYWWVASU");
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
    IMC::VideoData msg;
    msg.setTimeStamp(0.320378517996);
    msg.setSource(39291U);
    msg.setSourceEntity(105U);
    msg.setDestination(20767U);
    msg.setDestinationEntity(194U);
    msg.id = 87U;
    msg.width = 6768U;
    msg.height = 10406U;
    msg.widthstep = 57818U;
    msg.channels = 140U;
    msg.depth = 150U;
    msg.finaldata = 83U;
    const char tmp_msg_0[] = {87, -111, -121, 103, -6, 56, 64, -89, 123, 112, -50, -40, 99, 39, -77, 117, -128, 96, 19, -101, -77, 6, 10, -87, 44, 25, 122, 116, 122, 117, -55, -74, 77, -76, -93, -128, 110, 9, -126, 96, -20, 66, -72, 102, 107, -50, 50, -86, -62, -101, -12, 19, 89, 74, 106, -30, 5, 32, -101, 84, 63, -46, -120, 47, -57, 8, 25, 89, -112, -107, -50, 15, -82, 56, -23, 16, -69, 15, 123, -27, -99, 24, -98, 104, -81, 120, -72, 94, -108, -69, 62, 14, -78, 119, -89, 77, -17, 28, -106, -31, 55, -34, -39, -121, -125, -5, -2, -35, 95, 59, 104, 115, 88};
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
    msg.setTimeStamp(0.669994972521);
    msg.setSource(36028U);
    msg.setSourceEntity(15U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(129U);
    msg.id = 221U;
    msg.width = 4013U;
    msg.height = 35641U;
    msg.widthstep = 13827U;
    msg.channels = 175U;
    msg.depth = 207U;
    msg.finaldata = 143U;
    const char tmp_msg_0[] = {-98, -59, 44, 24, -70, -44, 43, 122, 27, 12, -78, 35, 77, 46, 42, -11, -53, -35, 12, -55, -19, -22, -74, 10, 93, 22, -81, 34, -125, -61, 54, 99, -112, -59, -7, 101, 97, -75, 101, 15, 4, 83, 71, -6, 51, 126, -8, -113, -20, 92, 113, -106, 104, 119, -44, 56, -52, -123, 26, -81, 46, 89, 19, -19, 27, 89, -10, -59, -73, 51, 110, -76};
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
    msg.setTimeStamp(0.913458608014);
    msg.setSource(7686U);
    msg.setSourceEntity(68U);
    msg.setDestination(42970U);
    msg.setDestinationEntity(191U);
    msg.id = 128U;
    msg.width = 33792U;
    msg.height = 31391U;
    msg.widthstep = 20636U;
    msg.channels = 203U;
    msg.depth = 234U;
    msg.finaldata = 236U;
    const char tmp_msg_0[] = {-101, 105, -77, -115, 101, -44, 61, -50, -116, 86, -96, 125, -11, 4, -6, -125, -80, -128, 107, 55, 75, -57, -7, 118, -128, 52, -35, -114, 117, -117, -103, -58, -21, -36, 122, 15, 21, 120, -1, 99, -29, 5, -94, 52, 113, -70, -110, 73, 7, 20, -4, -33, -37, -77, -4, -58, -88, -109, -50, 21, -67, -115, 7, 23, -50, -13, 64, -81, 8, 124, 114, -5, -69, -87, -97, -100, 78, 73, 15, 10, -28, 125, -121, -86, 124, -14, 81, 65, -3, -100, -25, -119, 65, 5, -120, 68, 36, -110, 19, -99, -117, 33, 97, 90, 15, 113, 6, 72, 95, -117, 28, 23, -123, -33, 112, -28, -118, 76, -16, 23, 49, -64, 41, -81, 12, -24, -66, -21, 60, 105, -7, -116, -123, -24, 107, 22, 24, 26, -24, -126, -108, 18, 76, 66, -109, -123, -37, -76, 44, -127, 88, 40, -76, 71, -114, 109, -100, -67, 7, 63, -42, 4, 9, -69, -30, 78, 105, 6, -31, 79, -36, -63, -119, 104, 77, -3, -11, 80, -115, 113, -124, 110, 10, 82, -19, 52, -7, -2, -52, 101, -63, 88, 44, -56, 36, 50, -40, 1, -127, 123, 49, 69, -43, -102, 125, 121, -65, -28, 113, -19, -85, 125, -45, 90, -82, 107, 112, -57, -7, -61, 27, 33, 97, -4, 103, 7, 12, 105, 92, 53, -70, 111, 57, -43, 41, -38, 115, -72, 13, -117, 90, -20, 54, -26, -127, -44, 106, 100, 109, 40, 30, -56, 76, -103};
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
    msg.setTimeStamp(0.955375578658);
    msg.setSource(34006U);
    msg.setSourceEntity(136U);
    msg.setDestination(15342U);
    msg.setDestinationEntity(152U);
    msg.width = 23099U;
    msg.height = 36485U;
    msg.channels = 93U;
    msg.depth = 19U;
    const char tmp_msg_0[] = {70, -92, 47, -55, 116, -95, 105, -108, 86, 93, 23, 50, -116, -67, -63, 8, -33, -41, -26, 35, 71, -36, -8, 108, 88, -112, 111, 111, -74, -121, -39, 72, 17, 22, 75, -77, 13, -50, 69, -80, 119, -52, -26, -96, 42, 59, 65, -72, -32, -61, -27, -55, 71, -123, 93, -50, 0, 82, 92, -127, -88, 13, -76, 91, -83, 53, -10, 84, -127, -97, 1, -19, -128, 95, -13, -96, 71, -113, -102, 97, 109, -55, 94, -74, -95, 30, -45, -74, 91, -1, 17, 26, 81, -121, 114, -76, 5, 83, -42, 118, -56, 74, 71, 67, -89, 34, -128, -117, 10, -64, -106, -116, -93, 6, 50, -71, 114, 32, -58, 60, -43, -34, 47, 24, -43, -109, 84, -89, 110, 13, 3, -101, -45, 46, 96, -109, 11, -47, 16, -31, 5, 82, -81, 108, -1, 26, -99, -13, 32, -126, -50, -92, -63, -50, -72, 111, -117, 32, -18, -108, 55, -47, 115, -6, 43, -103, -7, -43, -32, -116, 14, -114, -42, 55, -5, -73, -96, -99, -92, 65, 63, 26, 30, 98, 25, -37, 107, 118, -96, 6, -127, 84, -83, 22, -61, -52, 89, 11, -122, -117, -124, -18, -59, -125, -125, 65, -25, 95, 16, -122, 46, -70, 109, 69, 24, 17, 119, -118, -85, -30, 7, 75, 33, 59, 119, 108, -21, -117, -21, -23, 89, 117, 57, -18, -106, -84, -114, -58, 20, -81, 16, -18, 17, 65, -86, 63, 83, -39, 119, -80};
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
    msg.setTimeStamp(0.462297738593);
    msg.setSource(18079U);
    msg.setSourceEntity(176U);
    msg.setDestination(5422U);
    msg.setDestinationEntity(191U);
    msg.width = 26927U;
    msg.height = 1564U;
    msg.channels = 248U;
    msg.depth = 74U;
    const char tmp_msg_0[] = {-36, -45, 80, -97, -13, -63, -82, -49, 42, -18, 114, 65, 23, -8, -10, 100, 54, 78, -118, 56};
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
    msg.setTimeStamp(0.0681048707564);
    msg.setSource(22027U);
    msg.setSourceEntity(47U);
    msg.setDestination(15174U);
    msg.setDestinationEntity(244U);
    msg.width = 24150U;
    msg.height = 47219U;
    msg.channels = 12U;
    msg.depth = 201U;
    const char tmp_msg_0[] = {-32, -119, -20, -105, 95, 26, 87, -84, 78, -67, -54, 113, 13, -85, -50, 13, -54, 80, 84, 28, 105, -68, -113, 83, 22, -112, -64, 91, 63, 84, 6, 93, -9, -64, 104, -84, -31, 43, 113, 62, -82, 84, -30, -72, 0, -16, -116, -105, 108, -45, -81, -119, 47, -9, 98, -67, -67, 46, -56, 44, -15, -6, -39, 51, -115, 74, -102, -91, -57, 82, 68, -81, -63, 76, 69, 66, 35, 3, -54, 121, -20, -86, -55, -108, 105, -96, 58, 14, 59, -98, -93, 3, 120, 0, -107, 109, -2, -94, 98, 21, 77, 36, 43, -18, 109, 37, -105, -106, -94, -72, -31, 8, 110, -33};
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
    msg.setTimeStamp(0.867155160845);
    msg.setSource(12016U);
    msg.setSourceEntity(18U);
    msg.setDestination(16645U);
    msg.setDestinationEntity(31U);
    msg.frameid = 136U;
    const char tmp_msg_0[] = {-62, 59, -23, -72, 27, 85, -122, -15, -28, 112, -96, -79, -13, -21, 44, -46, -14, -59, 110, -99, -108, 26, 38, 5, 110, -71, -23, 39, -44, -51, 14, 95, -22, -23, 114, 25, 16, 5, 63, 66, 71, -76, 89, 121, -82, -63, 36, -128, 12, 112, -111, 65, -105, 75, 38, 53, 12, -43, 28, -10, -87, 114, -31, 22, -81, 58, -1, 107, 115, 21, -41, 66, 67, 47, 110, -45, -81, 68, -123, -11, -117, -100, -36, 78, -39, 63, 68, -3, 12, -99, -4, -85, -52, 88, 101, 27, 83, 26, -97, -110, -4, 104, -51, -36, 20, 123, -7, -24, 56, 46, -66, -107, 121, 42, -92, -86};
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
    msg.setTimeStamp(0.349619725489);
    msg.setSource(57598U);
    msg.setSourceEntity(215U);
    msg.setDestination(12315U);
    msg.setDestinationEntity(247U);
    msg.frameid = 38U;
    const char tmp_msg_0[] = {-19, -80, 95, 19, -18, 95, -15, 15, 91, 20, 122, 12, 93, 60, 76, 13, -37, -128, -19, 113, -61, 85, 108, -116, 37, 103, -26, 121, -95, 32, 13, 69, -102, 124, -35, 94, -100, 73, -12, -45, 41, 57, -22, -6, 62, 99, 111, 64, 106, -112, -74, 101, 47, -30, 11, -116, -20, 85, -53, 67, -103, 91, 80, 38, -40, -13, 7, -83, 103, -28, 36, -47, 16, -98, -26, 113, -103, -56, 19, 57, -36, -61, -104, 101, -14, -36, 36, -103, -50, -113, -11, 32, 59, -98, 97, -111, -38, 65, 1, 107, -67, -55, 105, 51, -14, -126, 56, -1, -55, -37, 37, -120, 105, -78, -114, 105, -100, -3, 18, -77, -29, 70, -86, 45, -19, -49, -28, -101, -82, 64, -82, 102, 106, 111, -15, 93, 37, -29, 59, -50, -91, -118, 97, 119, 120, 73, 64, -124, -2, -104, 41, 94, -30, -46, 116, -8, -70, -69, -52, -120, 62, 44, 97, 44, 34, -19, -78, -43, 75, 122, 39, -46, -101, -124, 6, 78, 22, -27, -118, 38, -57, -128, 91, -124, -20, -45, 54, -64, -42, -121, -103, -89, 33, -43, 76, 67, -107, -76, -110, 103, 63, -44, -120, -76, -105, 122, 67, -128, -38, -44, -125, 104, 5, -12, -56, 123, 39, 28, -104};
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
    msg.setTimeStamp(0.356383335891);
    msg.setSource(7938U);
    msg.setSourceEntity(107U);
    msg.setDestination(8242U);
    msg.setDestinationEntity(250U);
    msg.frameid = 169U;
    const char tmp_msg_0[] = {78, 84, 104, 50, -74, 71, 90, 54, 99, 58, 35, 109, -53, -100, -12, -105, 106, 107, 79, -119, 51, -78, 94, 62, -8, 61, -20, 48, -36, -24, -64, 100, -60, -57, 95, -88, -32, -119, 41, -107, -93, 33, 30, -1, 117, -73, 6, -118, 27, 58, 11, -115, 13, -104, 6, 125, 112, 78, -35, -66, -80, 82, 34, -87, -91, -29, 90, -32, 96, -103, -55, 69, -127, -124, -11, 61, -8, 68, -66, -29, -120, -6, 58, -112, -92, 77, 103, 21, 92, 24, 85, 80, -97, -40, 62, 64, 42, -127, -59, -82, 14, 60, -24, -33, 101, 55, 98, -94, 8, -15, 105, 123, -115, 47, -123, -19, 114, -70, 76, -51, -80, 107, 35, -22, 54, 14, -59, -42, 29, 6, -21, -108, -97, -15, -42, 106, -35, -53, -101, -89, 1, -34, -45, 83, 38, 95, -29, -56, -108, -63, 16, 101, -65, 43, -101, -69, 0, -16, -25, 29, 13, 35, -124, -87, 106, 108, 26, -10, 68, 13, 23, 125, -127, 105, -20, -92, 48, -81, 1, -90, 70, -90, 2, 22, -75, 50, 72, 25, -55, -128, -11, 77, -93, -37, -65, 89, -120, 24, -34, 40, -110, 116, -124, 17, -58, -87, -107, 73, 24, 4, -67, 4, 67, 10, -55, -24, 8, -12, 62, 42, -49, 37, 40, -47, 74, 18};
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
    msg.setTimeStamp(0.227718396148);
    msg.setSource(17287U);
    msg.setSourceEntity(2U);
    msg.setDestination(7034U);
    msg.setDestinationEntity(129U);
    msg.fps = 160U;
    msg.quality = 251U;
    msg.reps = 16U;
    msg.tsize = 150U;

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
    msg.setTimeStamp(0.832739327895);
    msg.setSource(4646U);
    msg.setSourceEntity(171U);
    msg.setDestination(56563U);
    msg.setDestinationEntity(9U);
    msg.fps = 231U;
    msg.quality = 45U;
    msg.reps = 85U;
    msg.tsize = 77U;

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
    msg.setTimeStamp(0.395182368167);
    msg.setSource(31062U);
    msg.setSourceEntity(18U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(216U);
    msg.fps = 246U;
    msg.quality = 11U;
    msg.reps = 174U;
    msg.tsize = 214U;

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
    msg.setTimeStamp(0.519068133996);
    msg.setSource(55979U);
    msg.setSourceEntity(51U);
    msg.setDestination(4664U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.62541740549;
    msg.lon = 0.940361463558;
    msg.depth = 158U;
    msg.speed = 0.845286328124;
    msg.psi = 0.576501527843;

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
    msg.setTimeStamp(0.11444726206);
    msg.setSource(4332U);
    msg.setSourceEntity(79U);
    msg.setDestination(28949U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.70616237696;
    msg.lon = 0.812668179777;
    msg.depth = 12U;
    msg.speed = 0.411470238796;
    msg.psi = 0.333021050369;

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
    msg.setTimeStamp(0.229945566778);
    msg.setSource(55758U);
    msg.setSourceEntity(218U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.755068574974;
    msg.lon = 0.577875125009;
    msg.depth = 6U;
    msg.speed = 0.560038075862;
    msg.psi = 0.297962450376;

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
    msg.setTimeStamp(0.854078029718);
    msg.setSource(18023U);
    msg.setSourceEntity(142U);
    msg.setDestination(48709U);
    msg.setDestinationEntity(211U);
    msg.label.assign("JTHVAHMDINSNYUZZPCRXQCNQNTEBQOUPKEZFWLGPABRYNMDKEPSWBTONHDFNXKFMYRIEZPEYVWOCBUGYYFOFPJDYSFCGDXHTBLWRITEERYSJZOXSAPVZUIVZSEJDLBOKLGAXGJZOIKUSHTWLHQOIMCLCRXAOAUTJCDPWUHTGZVMJBMJKPKVAVCJBXEWQMKOVSGQBRCTXZQQFMXSSNYCMTAAJRVIAQHQPEFKWDDFLIGLGWILHWV");
    msg.lat = 0.989115684453;
    msg.lon = 0.0285943449994;
    msg.z = 0.83580661762;
    msg.z_units = 127U;
    msg.cog = 0.0158980087346;
    msg.sog = 0.264298320685;

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
    msg.setTimeStamp(0.450931630216);
    msg.setSource(3987U);
    msg.setSourceEntity(253U);
    msg.setDestination(5727U);
    msg.setDestinationEntity(127U);
    msg.label.assign("XGMSSPXBBTAHAMPLZALFHMABXNGICLDBYJVZCSWOGKDCQEKQRIHETEELSARTSDNTOUWGGNQBDJJJZHYRMHJLARWVCIYDTOFAIXOMZOOGNBSMRTXSVXPVDZZRDFQKICHYQRFQUWLTVXCXKHUEKJEFCCJYGZYVXPHPQKCSGUGVAEUIFTIOAERJPTHMAWNYPLZ");
    msg.lat = 0.2235684733;
    msg.lon = 0.565996804978;
    msg.z = 0.302893212224;
    msg.z_units = 232U;
    msg.cog = 0.534748123388;
    msg.sog = 0.568283015795;

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
    msg.setTimeStamp(0.65058086975);
    msg.setSource(15009U);
    msg.setSourceEntity(154U);
    msg.setDestination(15469U);
    msg.setDestinationEntity(143U);
    msg.label.assign("UBTCWWPXDWSVNDTCWTVKMOWKEOGRKQFQXPRCDPNZQYUKUOOGGTXNDNFOLADPRRHNENKSECZAPOVSELILKQXXAIUJEECVHEDKYMAHLSMJSMYZBPWQVXHHRVWQTYUYNMYXYNPMQTDBIIOLZBRFSSJZAJUCSBFCFJKWWFHTAJIHUJZNJHHEZRLBQCYLXABXKIUSJGVVMFUEZDLPFHWVAL");
    msg.lat = 0.206393642663;
    msg.lon = 0.960963000019;
    msg.z = 0.231815911627;
    msg.z_units = 81U;
    msg.cog = 0.732422919177;
    msg.sog = 0.163309425989;

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
    msg.setTimeStamp(0.210032868792);
    msg.setSource(31458U);
    msg.setSourceEntity(208U);
    msg.setDestination(46191U);
    msg.setDestinationEntity(158U);
    msg.name.assign("YETHCFGGTMCRMDVXZQKC");
    msg.value.assign("KHGGMKVIUIQQLRAGIJYIYWIRUVXOPGGWGNHHRVSYLVRSOFBSZUMIZYSPCXPODSPVUUSYLUHVEZJIYUZREUX");

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
    msg.setTimeStamp(0.934529385396);
    msg.setSource(39829U);
    msg.setSourceEntity(244U);
    msg.setDestination(54861U);
    msg.setDestinationEntity(7U);
    msg.name.assign("QDJHZUVHABWUANOATLDKFCUUGCBVLTQSCXQDYSIRNOBICPBRBXTSCRKZTEFGLHTFQFPSAZEKBOBYGOQIEEWGHWUXPWDIRLFOANVZMFILSSYCQPLRYQKEXNIDBGPXKHAJJVENFOCMYFAKNMXWEMYZNXKYW");
    msg.value.assign("BGLIWZTOYFLFZPLEKQISQVYKMFFQMUIZBPTNLYKCXLPDHGKKJKOXDEGMWHXZZUSNOWWUKTCDGBPRIUYLNDRHIBHEOZEGYTXMVFGSWEOVTPQATTIJFBTRTAFHPNEPEURJLRUAYVNEUAHMUVIAHSWFZAGYJCKMDNDCBLZQPRRJAOCCRKTFSXQ");

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
    msg.setTimeStamp(0.323657548656);
    msg.setSource(40366U);
    msg.setSourceEntity(46U);
    msg.setDestination(22984U);
    msg.setDestinationEntity(93U);
    msg.name.assign("ZNGGQAWPLWTQMXLJOEVOSBCKWHJPMPDYIXVDKHZXLOPERMISHBJBLEIPDXREMBXVXSK");
    msg.value.assign("KNQMPPBYYWDPXHXPZBRSDJSSTBBNWFZAHFNXLMJRNWFCSDKZYFVAXTWRHXGUSOQ");

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
    msg.setTimeStamp(0.829233958004);
    msg.setSource(41553U);
    msg.setSourceEntity(20U);
    msg.setDestination(51181U);
    msg.setDestinationEntity(245U);
    msg.name.assign("ENYREQLDDGUGYHTLNAXIFWIMJCJDGFPIIHVSSQAORZZFYTKTAFBONTKVORGOBWLSQENWVGUNDXSWSDLNVLTSFMKUZIEZXHOWYDQOMMCMIPCBOHWESBZKTZLXGQUXAGUFBJ");

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
    msg.setTimeStamp(0.903784899128);
    msg.setSource(35217U);
    msg.setSourceEntity(31U);
    msg.setDestination(20989U);
    msg.setDestinationEntity(53U);
    msg.name.assign("AEMAHRMWVIHNCGUKJUUIGQDLMFYQIQJCUTEOLYFOTPKQDZGQVXUENAPELNOFPKDCORFTJWYWDYLLIHCTBTYQPCRXWOKZEOSZIBXHNWXBCEJWKVDASMSJZDIOGXBRPXJCEIVPXLZTLSSKBTZTRGJURXHSAGQAWUUPPCBIFVQYFKCMSDRFWKYNMBGFGPNNLKHEAMVGZVRSVTLOVPWTDNJCQSYDUYFARNXBUHIJGEQBVXLHZEMAFJI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BHCVAFVLOGWFAQZKUXGJBKUDXZQRKIQRATQRTHOAZKOMGJ");
    tmp_msg_0.value.assign("DSZVSLATSFGPFUIRDFWBHFXEATQSLPNTVHCZCROHPGLQKEWPWJHDYQCICRYWVNOONZKZDSJDATNKWYCYKBRDPATIWESFICOKKCBVBJQFPIZEYXVKBOLNCJEUYRUXIZSUFFXDYSRTRMOOABGTHGVJHWDGMRPPRTKUBAUHLIALZKRZXJWUQJVBXIPSGMEUHMAYUNNKHEXCLYNOIUMIQYXBTXEMNT");
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
    msg.setTimeStamp(0.0330413648717);
    msg.setSource(15402U);
    msg.setSourceEntity(218U);
    msg.setDestination(7971U);
    msg.setDestinationEntity(171U);
    msg.name.assign("RSTXJKXKEPBGAMYDILHKTCQTUPOAAWXJOXWROVIISQPGSBVASVPZFILEGAJLTELYXWKQZDHTKBRMAEOHBVCVGQFDKIRNFQMODJLHHAETSNZJUNCRJQJFDVLDYPGIXGYDPNCRUADSIZZLOWWRZXOTBWFCQQVPLBYQLAZAJTMUXUGHOREEFCSZPBHLUCWYWHMNWYQXUZNNTDMNFVRPGIIFEN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TIBUYIZXMDFLWTSCNHGNTOGUXNSWJBHYWAQJUCKLBXSYCTBOTVMQLQHFJTSXRQLEGRFDYYZUQOBWHIGVCBMIMNPKPKTSLEDMOMMYFARKNMQBZPMIEIDOJHCIUKXZICRFSRVYCLETURWTOHRMJNPTSVJAIQVCWHLQQDAPHBAYGNU");
    tmp_msg_0.value.assign("JECOMCHTDIOCWBPMNSSHAVNNWDVPXZEFGAWTMVWENGYEMQPFMOQXPZFKUSHUUAPUDTTKWKYEMVIYQXRTZLVQKCDSCLDQOGDJZBIOXJJPURWIQBFTTTLEAUNIGZCRJOUNVGSFOMSALOOGXZIPBINRUVKZHQARAHQRKLBSEPPLSCFWNVBNLAFPYEACOLFWXEQFAKKJHBTEMGBVJGNYBDULHMDMKXFCZYCIHRGIYTJRGXH");
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
    msg.setTimeStamp(0.461360037823);
    msg.setSource(40293U);
    msg.setSourceEntity(245U);
    msg.setDestination(31874U);
    msg.setDestinationEntity(144U);
    msg.name.assign("NYLWZZZHKOKJDVYFUOWNBVQSLZDXFCWQHRJSOUKTWPTCOKQ");
    msg.visibility.assign("AZDSUEKXGQYEPYGJCKZKULJTFSALFMYWAJYRTUNZYXJH");
    msg.scope.assign("GWXZXAMCBDAHTFCEJVBVKBYLPVSPIAOREYDZCMMDUVVAYK");

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
    msg.setTimeStamp(0.783977767442);
    msg.setSource(14349U);
    msg.setSourceEntity(127U);
    msg.setDestination(57279U);
    msg.setDestinationEntity(51U);
    msg.name.assign("KFZGZANKNQYJEQAGQYLMOAPAOPZUYUJWXLOBTLMCRUHRTEAKGWDHSOXAUQPWIRAIYWJBNTOBWFOEFRLVBEGJVMKNVYJLIEHHZBPYINHKOBRMUIBH");
    msg.visibility.assign("NIVPTUMJLWKOEYFMLCECBIXTGELCNOUCRQQDPQVXRPDYFKMPQPECHZLYCJRSZGADQLMYSGBNJBQJTBNGWBIYHPGCQHPJDQTZMLEJLRRLUGLQAYBKSMFGZSWVWJATZEHIKSNMFKRKOJODAZXFOTVSDBXUUKVYXECNJXRORAAHSRNAOPHYMUTGWBZ");
    msg.scope.assign("LMXHOXRIQSMZIWQVFIQAIIPUEZGVWPIDNRLEYGVHLFLYYDPKAEPDBQSRRHNABYCLSSQPORUFYVNHWOQSZVBVULBWENJBYNPGMNFOPNXMWXGMAJPAKLMVZUSXGKEHICWYODFGTETZGUYKMIKZPOGTQRCROVBJJMSODCWNBROUYXOUCDTUSXAZIKUKFJTJXVDHWEFJHWDLXFVHNTCBGMZEDRJAFCYKJSPJHSNCTEHLWAFTLCZQQTTAZGRQDEKU");

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
    msg.setTimeStamp(0.695145094953);
    msg.setSource(20155U);
    msg.setSourceEntity(101U);
    msg.setDestination(41074U);
    msg.setDestinationEntity(121U);
    msg.name.assign("VYENOLIWSTBMVZVCL");
    msg.visibility.assign("EFWQAGPFSADQJPEOHQOPSDIHHFYSCLKBWEETZCEOMRVGCSNHQRLAIXO");
    msg.scope.assign("FLBQPFQWKJXEIPOANQMZRISBZNHVSFYAKIUANCRUGHLWEXFUNPPLRTOCDKDRTEOJEBAHWHLMPSCFCOTGMQ");

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
    msg.setTimeStamp(0.941100261228);
    msg.setSource(57023U);
    msg.setSourceEntity(234U);
    msg.setDestination(30261U);
    msg.setDestinationEntity(130U);
    msg.name.assign("PCNTEMTXNUCRDZFSSBETCWEZAODYBZWXGUEXOYUFZOFYDCVUZVXSULJGKNWFOLLHGLPZFSTFAQQDGPHAPGBIZYYSHGHVGREBRAXTOXCDSGEZUYXTAQSDKUXJHHBMZIVKMDQPTFWJKUPKCOMMAIRXNWYQFKRIIILAKNCMWDQFJOLY");

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
    msg.setTimeStamp(0.985355615779);
    msg.setSource(42960U);
    msg.setSourceEntity(150U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(72U);
    msg.name.assign("ZDCPMEVKFPCUVUXJDJWJAESGFQEOVWMOAZKISEACVHIRSBVTBNSHYYMXTCUOOYAHLCGVZUNQGQYHQOJBDAWUKKJORAJHJXFSATNTBTACXYRJBSDRMDXJFHMWYZNMXYLWEDULNNPGDTMROIXBLJVYVPHQSFWNCDKLLELVRZDWBHQFESKRZBFFPIOGPW");

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
    msg.setTimeStamp(0.701849972243);
    msg.setSource(1078U);
    msg.setSourceEntity(34U);
    msg.setDestination(25617U);
    msg.setDestinationEntity(254U);
    msg.name.assign("ULKSXBTFOXJSUOANBLCTWBDDQNGADCVCGJTLRORYSAKFZINMIBTYQNGAPEGOTGRVIX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AGIZPVFTNLFBDLJZWWUGTWDUPXGBKDJAIBJMDFFYKNKJCONPHMQEAGULCUWTWLNFGVQSWOHUBPZYHEAWTCRJBSRCMQALZSMPYXNUEVPQEGZCSRJKQMZUADAELZCFEXVHKQJRPTOEXXYMHNQKDPYRBODOKQHAPQAIBXIVSRWGVVTENLJOMYXJQY");
    tmp_msg_0.value.assign("RRXNDENKJSEYNSEYYNUZTYXTBXWCHWCMPUKUIMZQH");
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
    msg.setTimeStamp(0.151214832781);
    msg.setSource(480U);
    msg.setSourceEntity(90U);
    msg.setDestination(54868U);
    msg.setDestinationEntity(181U);
    msg.name.assign("GITBDYFHHSJIUMCTPAANWQUHFAMSZKYXNTGRNOWIKBQSTVDKPRFBEZXPBSVRUOGKYADHTENYPPJLLUQQOVEVRBMZIHKQXXEDFVFQVFUVSNUZDTEJOGOAZWAEEZMCGXIUQDUQOANQPPZDYJMDHLCNHLRCCTOUGWVONJYYLJUHRXSWCLTYI");

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
    msg.setTimeStamp(0.470044775722);
    msg.setSource(33327U);
    msg.setSourceEntity(187U);
    msg.setDestination(15113U);
    msg.setDestinationEntity(20U);
    msg.name.assign("YXHVTZXRMLSMYSFSXRUYIKMRDVRNELFIGKHZVYEPTQDHXLEHPNBRAWUWDDCPXSAPOFKYPSRAZIPFVADYQUNNHWBOAUBQOFKUUEMLWJFWHLCSGMFWEDGROHDOGWJOSIKWTIZTUAYCLHTJBZT");

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
    msg.setTimeStamp(0.863801219676);
    msg.setSource(43880U);
    msg.setSourceEntity(117U);
    msg.setDestination(55811U);
    msg.setDestinationEntity(197U);
    msg.name.assign("KKEEXBGDNVWNJZFDGQEVMIYLOMCJSUPOWSZHYQLICPYSVAIRUZSUBWOFJCPQGVNGBZUVOXVWHGDJCILKKMDUXBQXTRHNMCNFOSKCLSIJ");

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
    msg.setTimeStamp(0.249756366545);
    msg.setSource(16056U);
    msg.setSourceEntity(27U);
    msg.setDestination(43564U);
    msg.setDestinationEntity(200U);
    msg.timeout = 285929737U;

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
    msg.setTimeStamp(0.684351697416);
    msg.setSource(23286U);
    msg.setSourceEntity(162U);
    msg.setDestination(54318U);
    msg.setDestinationEntity(87U);
    msg.timeout = 3300432523U;

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
    msg.setTimeStamp(0.0868950713373);
    msg.setSource(11910U);
    msg.setSourceEntity(72U);
    msg.setDestination(26371U);
    msg.setDestinationEntity(253U);
    msg.timeout = 2432756160U;

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
    msg.setTimeStamp(0.175215403173);
    msg.setSource(2928U);
    msg.setSourceEntity(82U);
    msg.setDestination(57251U);
    msg.setDestinationEntity(199U);
    msg.sessid = 2739858383U;

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
    msg.setTimeStamp(0.0801819543894);
    msg.setSource(19646U);
    msg.setSourceEntity(22U);
    msg.setDestination(57094U);
    msg.setDestinationEntity(242U);
    msg.sessid = 2457148369U;

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
    msg.setTimeStamp(0.920417451281);
    msg.setSource(26039U);
    msg.setSourceEntity(137U);
    msg.setDestination(21735U);
    msg.setDestinationEntity(148U);
    msg.sessid = 1066426954U;

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
    msg.setTimeStamp(0.474510680767);
    msg.setSource(56433U);
    msg.setSourceEntity(75U);
    msg.setDestination(58866U);
    msg.setDestinationEntity(155U);
    msg.sessid = 3283637043U;
    msg.messages.assign("KTAPDNQEJUFFPQVDBYRHUVOUAGLVAMPRZKQZHYPONIPBAXTKSBLXSPUXZRUEBZAOGAKIXFPHKODTHZKTWQDNZHMEGETGJKUITQEFSLEFAXFNWDQIKTZQPQODFOSERSVTEYIOTLBRVFUDOCLKTISJGJYGANVZRLHIKPCZXHMCCJGXBMSWYCWOWYIMAWVBNJLDRYLYEMNDHFRSRFJWXQNLGNJEBQWYAGPWVY");

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
    msg.setTimeStamp(0.275236577525);
    msg.setSource(41079U);
    msg.setSourceEntity(136U);
    msg.setDestination(40392U);
    msg.setDestinationEntity(45U);
    msg.sessid = 1030728893U;
    msg.messages.assign("BRZMRSSIHWEPEIJPWBDTDQIJAIGWWUXKVRMXHQTSYLBGDQNATHENVEPGDZBCOCWBIGVVQWDPMXKOYPHJXTHHCRLYURHNBKUPQXMYAVRNQFAIXDEGWBFSXOUMSJZJMACCZZYTVIJHMQIQCQPIPZDNKMZUZRUOYLCEUZGUPGWRDKSLLJFDWLENLATAJYTEFWOCBVVRKKXKIFTUOCGGNSXLDFOVKEAYOBNF");

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
    msg.setTimeStamp(0.776485995007);
    msg.setSource(32577U);
    msg.setSourceEntity(233U);
    msg.setDestination(31542U);
    msg.setDestinationEntity(99U);
    msg.sessid = 989651299U;
    msg.messages.assign("JMBKEVSUJKKRAZUMYQHWKBULOSOTIUMLBWLEDRRSPIMYTCQDFXSFGVNEHYRZIREANTZHFZOCICINAEOQAKXPDMMTWCNFACQLUWDDZXGPMDBSIHJZVSHLLYCUNYOSAFXXHCHQBYJMBEEECVPWWJJRFFJLYYJNRFAODKEJNGOXZGWWBGLDLQZHYKMDQVDIQAUVEZGSBXOQWQRGSKNVVWVPPUAARNCPBSIHRXIXTZUTFXIBTGHGPVNKPFK");

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
    msg.setTimeStamp(0.251697882337);
    msg.setSource(54549U);
    msg.setSourceEntity(155U);
    msg.setDestination(35915U);
    msg.setDestinationEntity(44U);
    msg.sessid = 4073551419U;

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
    msg.setTimeStamp(0.430995160455);
    msg.setSource(14607U);
    msg.setSourceEntity(211U);
    msg.setDestination(61799U);
    msg.setDestinationEntity(215U);
    msg.sessid = 1363686029U;

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
    msg.setTimeStamp(0.61799066992);
    msg.setSource(10422U);
    msg.setSourceEntity(33U);
    msg.setDestination(11630U);
    msg.setDestinationEntity(219U);
    msg.sessid = 3066396136U;

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
    msg.setTimeStamp(0.405730862021);
    msg.setSource(7087U);
    msg.setSourceEntity(29U);
    msg.setDestination(11987U);
    msg.setDestinationEntity(7U);
    msg.sessid = 3957450250U;
    msg.status = 121U;

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
    msg.setTimeStamp(0.677419696864);
    msg.setSource(35590U);
    msg.setSourceEntity(119U);
    msg.setDestination(14894U);
    msg.setDestinationEntity(172U);
    msg.sessid = 2431067888U;
    msg.status = 170U;

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
    msg.setTimeStamp(0.294675986007);
    msg.setSource(53441U);
    msg.setSourceEntity(5U);
    msg.setDestination(29751U);
    msg.setDestinationEntity(91U);
    msg.sessid = 3670680725U;
    msg.status = 200U;

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
    msg.setTimeStamp(0.709843424481);
    msg.setSource(44188U);
    msg.setSourceEntity(15U);
    msg.setDestination(17729U);
    msg.setDestinationEntity(72U);
    msg.name.assign("ETSDLMPCJODWGCWTLRYHQFFEYYCVCEAJCQCSYGOHFZRUFYZHCEXADROJWINGLRBBKMJASVJVONVKTHAGOMRWMSZBKPIPPAYXZHZVQCFTILQBNMGJIDO");

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
    msg.setTimeStamp(0.171666206356);
    msg.setSource(17191U);
    msg.setSourceEntity(54U);
    msg.setDestination(4095U);
    msg.setDestinationEntity(209U);
    msg.name.assign("FMFNCAGRVPNHZNNQHMRQCTDVDMHORIGKYVJHUFMHOKFKJBKQSCYZLUPAYOWLZEQXZBYUYKUGBXPCXUYLIIPJQIAWVRLLXZBBGQIFYMOTEESQESCPYCFJXVDEDGMVREPMOMVKPTAGZCDCRXRDTOIAHLEUQGWJDIEUEHJZVLDHZKOFNSKTCYYNFZPJHWBMP");

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
    msg.setTimeStamp(0.651347113838);
    msg.setSource(53889U);
    msg.setSourceEntity(218U);
    msg.setDestination(6476U);
    msg.setDestinationEntity(192U);
    msg.name.assign("LZMATUDKCMRUZVIGKNDWETKMZYGMSSZYSELSOIBOPIJUHSKJHZGNPIYHKRHMKQYHXAPFUOXNTJMLJGYGRMJULRASYWNGXBRLZFXSSNIHYEPVQOPAVUMMUZBBVQWFMRZWLSUAQLJOYBJTAHXZLPWNBNJBEQWAIVFYTSIPGKFHRRCTULJNFXWQQPWXGBQXWZBXFTIQDCFDIECROBOCHKKV");

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
    msg.setTimeStamp(0.375985358591);
    msg.setSource(3143U);
    msg.setSourceEntity(149U);
    msg.setDestination(62883U);
    msg.setDestinationEntity(102U);
    msg.name.assign("DOPJMUKJTGCXOSTVWTNLYAUKKNDYXZZHIYVCRULCPZOJXINYLVOGMX");

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
    msg.setTimeStamp(0.607316839791);
    msg.setSource(26611U);
    msg.setSourceEntity(41U);
    msg.setDestination(25553U);
    msg.setDestinationEntity(226U);
    msg.name.assign("XDEIKZUGKZNJFPLUAWRVXPLFMTRGSAIRJAFJGSVWUMZNTWQXYPMTMKUCVGJQVEHIGRYJHZOSYATXTDWEPSCZQQACICRINJNYUCDQCXOD");

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
    msg.setTimeStamp(0.674383123703);
    msg.setSource(27256U);
    msg.setSourceEntity(94U);
    msg.setDestination(55142U);
    msg.setDestinationEntity(236U);
    msg.name.assign("LPUXQWAAOHWBFGCNKUXKZPLEKKTUOCLJINXJNPKIMUOWVZGUAEOUFOLXDRSSROBVUBQNQXTTYBINADCHGDNEDDABYQVRWBHTUGEDQKQIJKFBCWDESARDJWVFEHNTRYFZAOZMPZRWZYICGSXZBNHJCKRMGAFYCJIRXSMPPDOVJQPSWMVGWQTZAQSLLJFSYIPGBMCVHSLXUMHAXGKVHFYOPHZYHDFVPLETRJYQLRNNZEWOSIIKTCEM");

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
