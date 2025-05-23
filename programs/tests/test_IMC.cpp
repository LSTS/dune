//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: e3cbea913e74a45c4c632a599783c376                            *
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
    msg.setTimeStamp(0.4961841888952878);
    msg.setSource(35876U);
    msg.setSourceEntity(254U);
    msg.setDestination(18777U);
    msg.setDestinationEntity(55U);
    msg.state = 199U;
    msg.flags = 23U;
    msg.description.assign("AIGZLZBUDOXMXFXYAVHKOBXPNJKOZTNFCCPALXQTMSNWTXJKVRYTUTEOWZRRBWAVOQVQ");

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
    msg.setTimeStamp(0.26522262651672834);
    msg.setSource(57863U);
    msg.setSourceEntity(98U);
    msg.setDestination(6320U);
    msg.setDestinationEntity(101U);
    msg.state = 163U;
    msg.flags = 129U;
    msg.description.assign("ATZBLRRECPTHSHJHQYIQTQAEFPYBWNYQJIWAEXOXIWA");

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
    msg.setTimeStamp(0.4014516478514182);
    msg.setSource(44170U);
    msg.setSourceEntity(245U);
    msg.setDestination(16230U);
    msg.setDestinationEntity(137U);
    msg.state = 88U;
    msg.flags = 214U;
    msg.description.assign("INZFEYIZMPKYTMZGAOPNONUJWSNIQJQ");

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
    msg.setTimeStamp(0.3184085078195309);
    msg.setSource(8430U);
    msg.setSourceEntity(232U);
    msg.setDestination(65147U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.31994797991544155);
    msg.setSource(9738U);
    msg.setSourceEntity(7U);
    msg.setDestination(37782U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.13761844799830425);
    msg.setSource(5272U);
    msg.setSourceEntity(40U);
    msg.setDestination(51251U);
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
    msg.setTimeStamp(0.9583515963412024);
    msg.setSource(12823U);
    msg.setSourceEntity(207U);
    msg.setDestination(46791U);
    msg.setDestinationEntity(221U);
    msg.id = 205U;
    msg.label.assign("RASXSPSJEAQTSQACDZXUDRGHCDOPNHOFBUKWRNGFBWVCLDTXAGHMFDIVMUCMXYMXLBVSZDVGHELMJVEHYLWCJIIZQAFWVGTHKKUWZNCVEMBXKEBVYLOXXIXJWY");
    msg.component.assign("BKFJOEVPCNCZNVLKRAFEUVMHUSCNTJFTYCSNRRWZVBYDKRMKPLGCJWVYSTWBHGHCBDFMFGXRENDUXIMMEMKXHDDBIXEVXNJPSOEQNKZUGBEIWYSXJAUTPAVTBYFGUHFHKQNODXROIBGYQUEOOCTQQVYISQXHBAHDMJNJCUFJTZZOHXANKQWFMXTIKCRYVWVMAHSIPLQKRDGSEPOWYPQWAIWLQZLAJUDLSZZGRWZLGYLLPTMDZJRIFSCPG");
    msg.act_time = 32959U;
    msg.deact_time = 39854U;

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
    msg.setTimeStamp(0.9914228963150632);
    msg.setSource(38619U);
    msg.setSourceEntity(241U);
    msg.setDestination(58419U);
    msg.setDestinationEntity(253U);
    msg.id = 169U;
    msg.label.assign("HOQGMWCTMRROBXDIXUPREQYZCLIWJDNNGCQWOEZILKDGLOASUTGXSMMWKXTIPLDULFTXNUSYMXWFQNVRQBLYTHMFBQTGADTXIAPFVBROLOEJVUUYHHDNOHTIIDNJPZEASUVFEPEWRLJWSHZVCSGGMEBYDPMUWBBZPARYICSYOSYHNVJDZYU");
    msg.component.assign("RZNWKJMREKHFEGGUVUUWALGLAFMESEXBYTAHPVXORGAEIPLMLWNWWDTDSIXSHIEEROHYNCHBSTAXBJPRTPGDELLZFYPCJWFKCAJVDHVIURIYQVDXC");
    msg.act_time = 50751U;
    msg.deact_time = 5809U;

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
    msg.setTimeStamp(0.13163592663532997);
    msg.setSource(45864U);
    msg.setSourceEntity(228U);
    msg.setDestination(46430U);
    msg.setDestinationEntity(42U);
    msg.id = 235U;
    msg.label.assign("ONNVXFIDCUWUDLASPYPCLDESFEVKEZADALPNUXRKFDOQZPGZRUCLFSYZKAFJKQTRREBSUANLYDDFIEWWOGBC");
    msg.component.assign("OZUCDBARAPLQBGPUJBNTYAZEHKYXSHORCMNQTXLGHVDTAGJSLSSTVSWZRJXTQQUIYFQJBXRZWIRXNAKBMVNEKLLQRDGBMSKYICFCFCMGOWGEDRGLHFVJQHWMIBOKFXMOVACXVXVWQZSCHMIYDUIKPZIZPKJMDUMVTPUZNRQECJSYFJHXOBKWNSYFYTPIKKFWUOWHLZWTDTUEEUMTADXLPVAPPINERGGFJHEDFIORN");
    msg.act_time = 5786U;
    msg.deact_time = 48479U;

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
    msg.setTimeStamp(0.2854613446398062);
    msg.setSource(15551U);
    msg.setSourceEntity(200U);
    msg.setDestination(14731U);
    msg.setDestinationEntity(50U);
    msg.id = 28U;

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
    msg.setTimeStamp(0.9276011173629293);
    msg.setSource(52976U);
    msg.setSourceEntity(230U);
    msg.setDestination(59622U);
    msg.setDestinationEntity(204U);
    msg.id = 17U;

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
    msg.setTimeStamp(0.25272620335502693);
    msg.setSource(25701U);
    msg.setSourceEntity(188U);
    msg.setDestination(53030U);
    msg.setDestinationEntity(186U);
    msg.id = 160U;

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
    msg.setTimeStamp(0.3980455706968222);
    msg.setSource(30185U);
    msg.setSourceEntity(65U);
    msg.setDestination(27074U);
    msg.setDestinationEntity(174U);
    msg.op = 2U;
    msg.list.assign("DETQVLULSVBFJNINHPXXOQNCGWDDICIMMXDSNQYKIVYZUZRUZTEUJXCYNAEYGDPNJLYRAREJMVUMIDWIBYBJVJCPHXWLPGTXZKOYTNBVFKWRFFQRFXPHQFOHOAXKOMWWXBLXDGSLIHYIQRUAGEHCVMWZTSERKTZMKAFCYVTBK");

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
    msg.setTimeStamp(0.7042973460487473);
    msg.setSource(52510U);
    msg.setSourceEntity(234U);
    msg.setDestination(54274U);
    msg.setDestinationEntity(149U);
    msg.op = 20U;
    msg.list.assign("ZJTJFZBCHHJPPBKCOOUIFBJRKVDWKOTYGFRQHELLIMYMQZRPWPNZCVXFPAPWHARAMAAXBGTRGNWXIVLNZGUWDISUFIZWEVYST");

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
    msg.setTimeStamp(0.7705144969306702);
    msg.setSource(7116U);
    msg.setSourceEntity(196U);
    msg.setDestination(19405U);
    msg.setDestinationEntity(202U);
    msg.op = 34U;
    msg.list.assign("PWJQRSDPDEHPSIGCZMOJVOULIBFOIOMMRGYHRVTECQKYAJRGCBAFHQMBIQMTMYBZUCKBCAXUYADXRJDGPR");

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
    msg.setTimeStamp(0.4880373068016043);
    msg.setSource(63579U);
    msg.setSourceEntity(46U);
    msg.setDestination(17791U);
    msg.setDestinationEntity(96U);
    msg.value = 242U;

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
    msg.setTimeStamp(0.34446653507619296);
    msg.setSource(22434U);
    msg.setSourceEntity(84U);
    msg.setDestination(34215U);
    msg.setDestinationEntity(219U);
    msg.value = 220U;

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
    msg.setTimeStamp(0.3772177054675412);
    msg.setSource(16509U);
    msg.setSourceEntity(101U);
    msg.setDestination(17994U);
    msg.setDestinationEntity(187U);
    msg.value = 192U;

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
    msg.setTimeStamp(0.5437252211074377);
    msg.setSource(16202U);
    msg.setSourceEntity(235U);
    msg.setDestination(3074U);
    msg.setDestinationEntity(35U);
    msg.consumer.assign("NTQCDVMCDZUFNPPEEIUASOXYZHDKNLOTZSBSJBLDPPYQBESZJOGZRPGLOFINMFUCWFUSGCTHMOAJKLVWARBVQTVXJCQKGQDMAYVQU");
    msg.message_id = 34079U;

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
    msg.setTimeStamp(0.7460322482098226);
    msg.setSource(37980U);
    msg.setSourceEntity(141U);
    msg.setDestination(30446U);
    msg.setDestinationEntity(216U);
    msg.consumer.assign("NPMWUAYRUQFHXCTKCYGLFZZYOEVMEHTIFZLPMFVUOOJODYHGDBWJUXIISCLZUXJMNEJOTYOETGREDULSDFFSMLIKUAKDNDPQPSYBIIROLUUIBYRYGEJPPBWVZKZHQMMHNKBBSTQGRVTRECZPBRSYHITNXNIVFCAOABLNQXJHQJGWFABCWAZFCGDJGTOGPLPCQ");
    msg.message_id = 37599U;

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
    msg.setTimeStamp(0.9748304685747418);
    msg.setSource(61649U);
    msg.setSourceEntity(195U);
    msg.setDestination(46565U);
    msg.setDestinationEntity(89U);
    msg.consumer.assign("OJYVXJXTRSWMUUXIGUVDJZFNZLDCUBIYAIPQNYEROSRQAFLZTWFAVVDCALRWGQSOJUIRPRKHRAFIUKDIRYWPPPEXNPABARASZCLBIUHWHDLHHSXCTNFGJPMDTXBTJNDBGCVOTJBDUGEWQBZFZKNIHMKSZNEZUWXYXFNKRMOOYELENKMVSQMGYCQNLXEPTIJYWGKVZCQKFDPVOHG");
    msg.message_id = 52939U;

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
    msg.setTimeStamp(0.9778382912846666);
    msg.setSource(6213U);
    msg.setSourceEntity(117U);
    msg.setDestination(31182U);
    msg.setDestinationEntity(105U);
    msg.type = 111U;

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
    msg.setTimeStamp(0.1409130154696835);
    msg.setSource(64993U);
    msg.setSourceEntity(25U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(134U);
    msg.type = 166U;

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
    msg.setTimeStamp(0.44333635796582116);
    msg.setSource(34532U);
    msg.setSourceEntity(121U);
    msg.setDestination(19665U);
    msg.setDestinationEntity(219U);
    msg.type = 233U;

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
    msg.setTimeStamp(0.07067266180151033);
    msg.setSource(20387U);
    msg.setSourceEntity(180U);
    msg.setDestination(46123U);
    msg.setDestinationEntity(77U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.14195013875879448);
    msg.setSource(11376U);
    msg.setSourceEntity(66U);
    msg.setDestination(17628U);
    msg.setDestinationEntity(25U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.10085471635260768);
    msg.setSource(49642U);
    msg.setSourceEntity(219U);
    msg.setDestination(16579U);
    msg.setDestinationEntity(235U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.6179504586055251);
    msg.setSource(32754U);
    msg.setSourceEntity(40U);
    msg.setDestination(47920U);
    msg.setDestinationEntity(242U);
    msg.total_steps = 231U;
    msg.step_number = 163U;
    msg.step.assign("BIKJYNRMAHNPGIZETUFUWYTHHFCUZJQUTOUKVIHGTDFBBMOVCAMRXTOGZKOGDLHSRHZDEN");
    msg.flags = 53U;

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
    msg.setTimeStamp(0.041661947197489724);
    msg.setSource(17597U);
    msg.setSourceEntity(3U);
    msg.setDestination(21742U);
    msg.setDestinationEntity(168U);
    msg.total_steps = 81U;
    msg.step_number = 138U;
    msg.step.assign("ASLGHQJIXBOIBYGKREFNPNWUKMRPKXRDRTSWXXENQWRSFJUVVZTMBXRECPMCDQNUWGPCXJHONVEBLAZXZTRETSFMQ");
    msg.flags = 18U;

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
    msg.setTimeStamp(0.3793199373272934);
    msg.setSource(24561U);
    msg.setSourceEntity(248U);
    msg.setDestination(40893U);
    msg.setDestinationEntity(167U);
    msg.total_steps = 74U;
    msg.step_number = 26U;
    msg.step.assign("JDGJCRHMYUPBXNLIVTIVQGUXPVHSKFYEUVXPTZNIZPHPGIMCGDLFDODRGTUOMVKHUWLWWFQBGSLZRCASTTFPOCQORXRLGIEIQFWSMBJZELLAZCYYHIXARF");
    msg.flags = 155U;

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
    msg.setTimeStamp(0.7892501013322412);
    msg.setSource(10460U);
    msg.setSourceEntity(46U);
    msg.setDestination(16901U);
    msg.setDestinationEntity(111U);
    msg.state = 130U;
    msg.error.assign("KUVTEIZJJVGANGVMBQKNOD");

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
    msg.setTimeStamp(0.20036809288009638);
    msg.setSource(57680U);
    msg.setSourceEntity(147U);
    msg.setDestination(27641U);
    msg.setDestinationEntity(203U);
    msg.state = 194U;
    msg.error.assign("ZIOKTQUALJNESHJTOOOXXCBKXFILMGFLJINMVVQDJGBUPDCGSBQDKEIKRCEBWSYTHVTIWRWTMWWVGAJHYGYAXOXCNAFQUFOMLNFYOUEJDPNCJGOUZBZLCTRZRMUTRYTKPECIBDMWXPPYYVZTOKRGPLEUYPFPXCWAQGYZKLVRWHEGSVFCEKKLQJFVBKDOUZIXSDAHHXBAIMBWEANMIRSHDEXW");

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
    msg.setTimeStamp(0.5940683904043428);
    msg.setSource(24575U);
    msg.setSourceEntity(205U);
    msg.setDestination(6190U);
    msg.setDestinationEntity(223U);
    msg.state = 8U;
    msg.error.assign("SJRKSHKPKODGOLCCUFBSNIVICUVLXQROMC");

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
    msg.setTimeStamp(0.2869837473385265);
    msg.setSource(6515U);
    msg.setSourceEntity(176U);
    msg.setDestination(10426U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.6110894219121771);
    msg.setSource(33318U);
    msg.setSourceEntity(9U);
    msg.setDestination(632U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.9580312902309446);
    msg.setSource(45083U);
    msg.setSourceEntity(11U);
    msg.setDestination(19295U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.19680779289720363);
    msg.setSource(2961U);
    msg.setSourceEntity(49U);
    msg.setDestination(14148U);
    msg.setDestinationEntity(152U);
    msg.op = 216U;
    msg.speed_min = 0.6198498826363574;
    msg.speed_max = 0.9707982727776729;
    msg.long_accel = 0.6178511957186211;
    msg.alt_max_msl = 0.24897803038381972;
    msg.dive_fraction_max = 0.6755443012726722;
    msg.climb_fraction_max = 0.24319623825152614;
    msg.bank_max = 0.7763966651203178;
    msg.p_max = 0.365051832700624;
    msg.pitch_min = 0.5697270573600799;
    msg.pitch_max = 0.5355469321715621;
    msg.q_max = 0.049113028933456704;
    msg.g_min = 0.6179217234838129;
    msg.g_max = 0.9789756167107742;
    msg.g_lat_max = 0.600310955860944;
    msg.rpm_min = 0.4999747295954582;
    msg.rpm_max = 0.963950215834778;
    msg.rpm_rate_max = 0.4127236355277558;

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
    msg.setTimeStamp(0.5987997372875193);
    msg.setSource(24223U);
    msg.setSourceEntity(133U);
    msg.setDestination(59165U);
    msg.setDestinationEntity(83U);
    msg.op = 167U;
    msg.speed_min = 0.6444298772974082;
    msg.speed_max = 0.4558645073666253;
    msg.long_accel = 0.5299014328481102;
    msg.alt_max_msl = 0.21895549575518203;
    msg.dive_fraction_max = 0.3278587167126521;
    msg.climb_fraction_max = 0.9936450868195628;
    msg.bank_max = 0.7841830236088155;
    msg.p_max = 0.527826702435069;
    msg.pitch_min = 0.9075773271674495;
    msg.pitch_max = 0.19584460120788638;
    msg.q_max = 0.3218771255779789;
    msg.g_min = 0.16663962227281837;
    msg.g_max = 0.02862440488970508;
    msg.g_lat_max = 0.819728300076261;
    msg.rpm_min = 0.32790719219593567;
    msg.rpm_max = 0.6044875827281109;
    msg.rpm_rate_max = 0.8152326702610918;

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
    msg.setTimeStamp(0.4905272974083492);
    msg.setSource(49938U);
    msg.setSourceEntity(25U);
    msg.setDestination(56552U);
    msg.setDestinationEntity(49U);
    msg.op = 12U;
    msg.speed_min = 0.4237366013051842;
    msg.speed_max = 0.9992174071248767;
    msg.long_accel = 0.3377057026887874;
    msg.alt_max_msl = 0.7972770300221979;
    msg.dive_fraction_max = 0.9902058261160157;
    msg.climb_fraction_max = 0.49195408319471456;
    msg.bank_max = 0.5766405610126412;
    msg.p_max = 0.41780899715644737;
    msg.pitch_min = 0.0248956451803094;
    msg.pitch_max = 0.2652196050070059;
    msg.q_max = 0.6334160291575477;
    msg.g_min = 0.7206156186198786;
    msg.g_max = 0.6441947389755156;
    msg.g_lat_max = 0.5935686219956228;
    msg.rpm_min = 0.7466061756545217;
    msg.rpm_max = 0.6595805279528832;
    msg.rpm_rate_max = 0.5290589264910316;

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
    msg.setTimeStamp(0.5545513249227143);
    msg.setSource(51397U);
    msg.setSourceEntity(241U);
    msg.setDestination(23086U);
    msg.setDestinationEntity(203U);
    IMC::GpioStateGet tmp_msg_0;
    tmp_msg_0.name.assign("PFANGNUSBITSACADYQDZDNKJZCUJCUROLXWLQVEDPOYSLPWWIIMPHLFAZYSNNZQECPQPSCVPNTXOYGKXTJCVOKGQYGWKTCROCUKIRTIFLMOHFFDTOCHSHJQGXHFZTNKHWNHVMZAFBDSYMWQJPARTOYKHTDVABEMBBWWPMRZELLBRVSFJXZEUFDIGAFGVUVIODDBSGQKUEKJNYUUVZRE");
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
    msg.setTimeStamp(0.36500050728209765);
    msg.setSource(43511U);
    msg.setSourceEntity(202U);
    msg.setDestination(34639U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.026821147029212122);
    msg.setSource(26318U);
    msg.setSourceEntity(28U);
    msg.setDestination(56654U);
    msg.setDestinationEntity(100U);
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("ADDKXSBDGYPEMURKADLSSVOEDXYTEGXNQYOQFFMMWQAUUISCWCURGCQKJPWQXFWZOYTOGRMGZZRDWHYRLARQJPWZKVSVCPAFKCFXNYBASJATMGUWMJISZQJIDVLIYHNHRECRCWGJUHHKYYJXVMHZMXCMHPWSYONAVFKJIELMXLOUPINHANZBUSBWOVZLGTF");
    tmp_msg_0.htime = 0.7071162076674046;
    tmp_msg_0.lat = 0.6514319275847735;
    tmp_msg_0.lon = 0.24631054687907328;
    const signed char tmp_tmp_msg_0_0[] = {-37, -19, -67, -9, -112, -3, -78, -82, -37, -5, 32, 14, 117, 82, -35, -108, -110, 30, 15, 9, 48, -96, 74, -110, -35, -20, 97, -51, -35, 2, -10, -25, -18, 61, -8, -62, 42, 12, 96, 13, 86, 36, -74, -110, 13, -15, -48, 125, 17, 7, 102, -47, -83, -76, 38, -79, 69, -7, 115, -96, -42, 83, 24, -113, -88, 14, 123, 55, -27, -62, 40, 79, 117, -96, -38, 29, 121, 122, 11, 92, -80, -82, -88, -127, -111, 95, 20, 121, 111, 82, -49, 62, -120, 116, 86, 6, -116, -31, -122, 100, -19, -104, -34, -15, -91, -39, 118, -52, 39, -82, 34, 83, -118, -120, 92, -6, 40, 80, 107, -126, -16, -99, -21, 8, 103, -82, 78, -93, 76, -34, -65, -7, -45, 51, 81, 126, 118, 79, -117, -82, -31, 44, 94, 86, 24, -113, 36, 101, 106, 78, -78, 111, -122, -97, -18, 17, -55, 26, 73, 3, 101, -60, -111, -83, -123, 112, -73, 66, 80, -25, 64, 84, 111, -5, -105, 72, -82, -53, -4, 122, -70, 9, 73, -35, -35, 88, 21, 71, -86, -92, 53, 121};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3985600247430132);
    msg.setSource(5539U);
    msg.setSourceEntity(184U);
    msg.setDestination(6973U);
    msg.setDestinationEntity(46U);
    msg.value = 0.16912315459647698;

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
    msg.setTimeStamp(0.3872060117913202);
    msg.setSource(10218U);
    msg.setSourceEntity(184U);
    msg.setDestination(15930U);
    msg.setDestinationEntity(129U);
    msg.value = 0.3018072649091412;

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
    msg.setTimeStamp(0.6523201773905467);
    msg.setSource(16128U);
    msg.setSourceEntity(40U);
    msg.setDestination(24005U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9727530041887624;

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
    msg.setTimeStamp(0.7562541903088612);
    msg.setSource(61670U);
    msg.setSourceEntity(108U);
    msg.setDestination(19830U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.20244598206108444;
    msg.lon = 0.4439292853669351;
    msg.height = 0.5312679073292079;
    msg.x = 0.8944019817498843;
    msg.y = 0.05558496589038808;
    msg.z = 0.811313282884629;
    msg.phi = 0.34244318366910353;
    msg.theta = 0.6285237826222276;
    msg.psi = 0.4329817004046742;
    msg.u = 0.42018924227099996;
    msg.v = 0.7454131780206367;
    msg.w = 0.1312344443043857;
    msg.p = 0.42036405201632254;
    msg.q = 0.30995923144998483;
    msg.r = 0.5518258580664651;
    msg.svx = 0.08214336905028508;
    msg.svy = 0.10985839405217868;
    msg.svz = 0.580303700731197;

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
    msg.setTimeStamp(0.9439548030915186);
    msg.setSource(9045U);
    msg.setSourceEntity(151U);
    msg.setDestination(57030U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.03596259118048384;
    msg.lon = 0.10563634459719318;
    msg.height = 0.5287318516905005;
    msg.x = 0.005601053413984314;
    msg.y = 0.3596225860134147;
    msg.z = 0.7251626722753184;
    msg.phi = 0.9137948081519071;
    msg.theta = 0.9221912972174843;
    msg.psi = 0.24990129218291435;
    msg.u = 0.8480803819446263;
    msg.v = 0.9107847400495;
    msg.w = 0.9467508455288435;
    msg.p = 0.6917245992844965;
    msg.q = 0.226409301675764;
    msg.r = 0.23604003328984302;
    msg.svx = 0.28896060689042635;
    msg.svy = 0.22715902795427045;
    msg.svz = 0.14681974626151317;

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
    msg.setTimeStamp(0.4316182790043793);
    msg.setSource(42435U);
    msg.setSourceEntity(241U);
    msg.setDestination(25896U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.7680508410737423;
    msg.lon = 0.8075657181273659;
    msg.height = 0.7222970127889191;
    msg.x = 0.022250580551451682;
    msg.y = 0.6921717891156971;
    msg.z = 0.19978406758180767;
    msg.phi = 0.29745621681935663;
    msg.theta = 0.19707472847829832;
    msg.psi = 0.6623007550844195;
    msg.u = 0.7191850569172196;
    msg.v = 0.19365834888469502;
    msg.w = 0.23931226986125154;
    msg.p = 0.14486411166519386;
    msg.q = 0.36706838930134766;
    msg.r = 0.34975719889643275;
    msg.svx = 0.25278905594769285;
    msg.svy = 0.5753047613095865;
    msg.svz = 0.36407120883571553;

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
    msg.setTimeStamp(0.9273491585466868);
    msg.setSource(61000U);
    msg.setSourceEntity(139U);
    msg.setDestination(52041U);
    msg.setDestinationEntity(107U);
    msg.op = 111U;
    msg.entities.assign("CDHQBMKIYVJBFCWRFLFAUGWNTJRWARHNNZQKHVKOTJDUDZVEKNDBJMZPCANBJXRTUUVZSGASQDFLOHKLPSJYCOQTFYIOIRFCJJGDFRXGSWZEPCIXIGMEFLOICUEGULZCGPRALOROYPXKPXSPAP");

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
    msg.setTimeStamp(0.17929143799203207);
    msg.setSource(51033U);
    msg.setSourceEntity(120U);
    msg.setDestination(60536U);
    msg.setDestinationEntity(169U);
    msg.op = 88U;
    msg.entities.assign("XYKOQXJNLXJLMBRCNNWAPZFMBQZCGZECJVLFFTRUMWMMKGRHAJYTCGTPFYPTOWSHXWFUVIPSAEALQOHJHUYDUSBNELISAHXBQFDQKK");

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
    msg.setTimeStamp(0.749249902517333);
    msg.setSource(51738U);
    msg.setSourceEntity(190U);
    msg.setDestination(44652U);
    msg.setDestinationEntity(209U);
    msg.op = 1U;
    msg.entities.assign("ZDTALLGVOSKKKJQWNZMQLPSQISAJFRJHEEZQDYRVBVUW");

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
    msg.setTimeStamp(0.9400904111156742);
    msg.setSource(46256U);
    msg.setSourceEntity(111U);
    msg.setDestination(373U);
    msg.setDestinationEntity(7U);
    msg.type = 153U;
    msg.speed = 55976U;
    const signed char tmp_msg_0[] = {107, 91, -51, -124, -33, 5, -10, -50, 34, -48, 13, -34, -117, -1, 124, -88, -91, -40, -60, -20, 122, 63, 31, -84, -57, 122, -116, 117, -92, 72, -48, 110, -90, 27, 39, -14, 0, -3, -12, -82, 5, -126, 41, -73, -81, 115, -125, 117, -126, -76, 9, -69, -92, 93, 31, -45, 58, -9, -87, 23, -60, -94, -75, -63, -118, -18, 40, -25, 115, 12, -115, -77, 67, 20, -48, -120, 100, 110, -28, 32, 80, -40, 115, 46, 34, 103, 14, -107, -92, 87, -76, 72, -77, -18, -109, -84, -81, -98, -122, -8, 12, -10, 116, -97, -113, 126, -5, 41, 29, -34, -102, -126, -124, 92, -9, 62, -65, -13, -107, 16, 43, -78, -112, 12, 26, 55, -108, 32, -60, -99, 88, 36, -49, -77, -76, 93, -73, 20, 91, -126, -85, -66, 82, 102, 90, 104, -36, 69, 42, 57, -38, -109, 95, -70, -19, 105, -124, 117, -108, -113, 39, 27, -15, -83, -28, -43, 47, -11, -59, 6, -92, 18, 89, -86, 87, 2, 125, 103, -45, -30, 65, 47, -47, 71, 29, -62, -95, -40, 3, -110, 16, -25, 67, 87, 100, -37, 45, 115, 47, 95, 40, 73, 67, 8, -113, -70, -6, -94, 103, 84, 102, -18, 70, -25, -86, -85, -4, 43, -91, 49, -70, -53, -65, -63, 15, 35, -125, 26, 63, -105, -67, -84};
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
    msg.setTimeStamp(0.40203730657429326);
    msg.setSource(43893U);
    msg.setSourceEntity(24U);
    msg.setDestination(3071U);
    msg.setDestinationEntity(56U);
    msg.type = 200U;
    msg.speed = 46475U;
    const signed char tmp_msg_0[] = {-36, -21, 58, -58, -67, -127, 90, -95, 64, -91, -85, -25, -12, 85, -45, -41, -95, -107, 43, 69, 18, 113, -97, 47, -112, -103, -10, 107, -46, 37, 58, 88, -72, 110, -103, 66, 61, -41, 69, 46, 87, -4, -77, -88, 113, -118, -114, 106, 95, -70, -99, -56, -17, -108, 100, -25, -42, -62, -41, 13, -21, -96, 126, 83, 69, 30, 6, -32, 112, 123, 68, -53, 107, -106, 92, -75, 92, 99, -5, -103, -65, -2, -16, -5, 59, -42, 7, -93, 86, -47, -26, 119, -7, 14, -95, 1, -13, 99, -15, 29, -53, 114, 68, 93, -74, 67, 53, -101, 101, -36, -43, -24, -26, -93, -119, 99, 57, -57, 6, -14, -107, -38, 103, -103, -14, 9, 106, 112, 57, 80, -92, 110, 18, -71, -107, -40, 80, -34};
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
    msg.setTimeStamp(0.7655071305659935);
    msg.setSource(6510U);
    msg.setSourceEntity(160U);
    msg.setDestination(39782U);
    msg.setDestinationEntity(89U);
    msg.type = 155U;
    msg.speed = 54103U;
    const signed char tmp_msg_0[] = {-90, -68, -63, 27, 38, -4, -121, 46, 35, 86, -81, 52, 46, -94, -57, -89, 90, 59, -22, -110, 26, 106, 54, 59, 56, -65, 55, 91, -88, 111, 38, -117, -53, -63, -99, 11, 51, -74, -4, -55, -86, -126, 3, 68, -76, -52, 44, 40, -62, -96, -2, -36, -98, -91, 33, -121, 80, -29, -106, 115, -32, 112, -105, 57, -21, 79, 71, -86, -64, -121, -119, 57, 15, -5, 9, -91, 90, -28, -63, -31, 93, 89, -84, 55, -56, -18, 39, 44, 41, 97, -20, -60, -37, -21, -11, -91, -59, 98, -59, -18, -21, -7, 93, -99, 21, -85, 90, 75, 69, -67, -52, 52, -72, 89, 60, -39, 43, -90, 0, -91, -66, -4, 3, -52, -80, 81, -85, 103, 97, -43, -40, 55, -52, -18, -90, -89, -5, -68, 81, 37, 48, -38, 40, -31, -76, -16, -25, 119, 69, -54, -81, 6, -59, -127, -127, 12, -48, 1, -3};
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
    msg.setTimeStamp(0.7284111486649405);
    msg.setSource(46920U);
    msg.setSourceEntity(193U);
    msg.setDestination(43530U);
    msg.setDestinationEntity(157U);
    msg.op = 224U;
    msg.tas2acc_pgain = 0.7963944645028946;
    msg.bank2p_pgain = 0.12231546317188324;

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
    msg.setTimeStamp(0.4451749706555499);
    msg.setSource(65096U);
    msg.setSourceEntity(6U);
    msg.setDestination(10619U);
    msg.setDestinationEntity(195U);
    msg.op = 34U;
    msg.tas2acc_pgain = 0.5789841336750214;
    msg.bank2p_pgain = 0.7303624711090699;

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
    msg.setTimeStamp(0.6679630300700822);
    msg.setSource(51285U);
    msg.setSourceEntity(53U);
    msg.setDestination(54261U);
    msg.setDestinationEntity(45U);
    msg.op = 206U;
    msg.tas2acc_pgain = 0.4203781439425336;
    msg.bank2p_pgain = 0.4257043098625708;

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
    msg.setTimeStamp(0.7468338522053392);
    msg.setSource(33556U);
    msg.setSourceEntity(164U);
    msg.setDestination(21643U);
    msg.setDestinationEntity(212U);
    msg.available = 2592271956U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.597207015008405);
    msg.setSource(4147U);
    msg.setSourceEntity(3U);
    msg.setDestination(20427U);
    msg.setDestinationEntity(219U);
    msg.available = 2665351672U;
    msg.value = 153U;

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
    msg.setTimeStamp(0.45634230509434726);
    msg.setSource(22010U);
    msg.setSourceEntity(40U);
    msg.setDestination(58954U);
    msg.setDestinationEntity(249U);
    msg.available = 1079305807U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.03058132277810366);
    msg.setSource(37888U);
    msg.setSourceEntity(182U);
    msg.setDestination(3150U);
    msg.setDestinationEntity(188U);
    msg.op = 253U;
    msg.snapshot.assign("IIVBAOPYJILZGVPXKMCYTFJXOMVLSKDAYERXLRLVDAWTOIUDICCUWNAYEGBZX");
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.5887797398096156;
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
    msg.setTimeStamp(0.8555026712153625);
    msg.setSource(13150U);
    msg.setSourceEntity(129U);
    msg.setDestination(35863U);
    msg.setDestinationEntity(23U);
    msg.op = 34U;
    msg.snapshot.assign("FVUIKGMDQTTHAVISTSHNTOYKHLEKBYAJICRGQSUARDQOGLEDHMYSBQZHBHBCKWUSFKNGMYAWRLZAYJCNTYROJHXPZVDFXPHNTBRDCMOENZXQZZIZARTCRUUSSOZEGLIEPIBTAMBGIOVGUKVFEKUNCWLBQBPGNSMFWLYCEPQVWXDFFMQOLNYVWKAUZKMSPWPNWOLVDCHYJUNUXMCBJKWMEDJRCWFSFAIGFELIRJLXYZXOTVDOPPXDPVXTJJH");
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.13606661605632842;
    tmp_msg_0.time_next_service = 0.2678484177887558;
    tmp_msg_0.time_motor_next_service = 0.40055994902981473;
    tmp_msg_0.time_idle_ground = 0.5333356175447784;
    tmp_msg_0.time_idle_air = 0.15650451335194482;
    tmp_msg_0.time_idle_water = 0.6329067606538048;
    tmp_msg_0.time_idle_underwater = 0.6535894840233263;
    tmp_msg_0.time_idle_unknown = 0.5851864477353406;
    tmp_msg_0.time_motor_ground = 0.11739337181352971;
    tmp_msg_0.time_motor_air = 0.025089860417417897;
    tmp_msg_0.time_motor_water = 0.7774807890405135;
    tmp_msg_0.time_motor_underwater = 0.4396393468151516;
    tmp_msg_0.time_motor_unknown = 0.23699187160583002;
    tmp_msg_0.rpm_min = 11615;
    tmp_msg_0.rpm_max = 9559;
    tmp_msg_0.depth_max = 0.0664863790846788;
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
    msg.setTimeStamp(0.5130825643593342);
    msg.setSource(14881U);
    msg.setSourceEntity(191U);
    msg.setDestination(14235U);
    msg.setDestinationEntity(178U);
    msg.op = 220U;
    msg.snapshot.assign("RBSCXUHUHQGUYID");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 33091U;
    tmp_msg_0.name.assign("SHAJSZHVXYWBWANTMENEMHTLTOVCLJYQDUEUYUKUPVKDIJLVJTDSEDIIOSFVUKLETDFYJSDUVCPNCZBPFFIOMXSZFHELCNENRD");
    tmp_msg_0.custom.assign("WTZTGEDJGHLVMWCBAPLCLYIQKQGWDQOLALPSZWJVJRDIGBOMVBDIBUPHIWVMWRPWJAAIYNPSTFFJH");
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
    msg.setTimeStamp(0.28587341315488013);
    msg.setSource(31870U);
    msg.setSourceEntity(157U);
    msg.setDestination(45063U);
    msg.setDestinationEntity(115U);
    msg.op = 123U;
    msg.name.assign("IXHPRKCMVSFANJJWEAPMUPEKAJADIZEOQWUYOHBDTH");

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
    msg.setTimeStamp(0.35262578676131473);
    msg.setSource(52645U);
    msg.setSourceEntity(224U);
    msg.setDestination(6475U);
    msg.setDestinationEntity(117U);
    msg.op = 103U;
    msg.name.assign("HHJLYNDCWZGVPOAXUCSZHKKGIQKBJYIIQTDAIHBGNBFWTPOFMIPVHPTLHDNIHHEEEEMQRLAGZVRACUDYCYXSLZ");

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
    msg.setTimeStamp(0.31130469467113464);
    msg.setSource(11845U);
    msg.setSourceEntity(209U);
    msg.setDestination(11628U);
    msg.setDestinationEntity(135U);
    msg.op = 203U;
    msg.name.assign("OCENBBBVMUDPIFCWGLIHNLXQJAYSZAFZKGYTKR");

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
    msg.setTimeStamp(0.5765363219568935);
    msg.setSource(42251U);
    msg.setSourceEntity(91U);
    msg.setDestination(26822U);
    msg.setDestinationEntity(115U);
    msg.type = 173U;
    msg.htime = 0.7110197525771211;
    msg.context.assign("QUUNQZLSONJCRAPNNRBZEHCXJGUOUGBQVQHAPXYZUPLLEVVSCGTXMGIGKOTJYQYRJUPQFFBBDFHTYEVSEPACRNOCZWVJBWBOYIXGAIFSWTRRRDFOXAHYKBIPHDJCVHDTEKYCNTQMXVGSZMYWCWSMOHSAKFYMUPDCPYUSPZDMVJILBMDNAJJWDLEAIWWGTTBLRQENXLXHDCZSIXRWEIQHZPVLTUUEORKHSOIKGKQNDZKV");
    msg.text.assign("XDPMDHFZFVJHTMMIBVJQNOLJGDWDKVBEAJWXIOCYSVLNGQUURNUSJLGFJBZBOMCFDSEBXCWIQDWZWYTQLCPLSNEPEQNVGOOIHNCEYUZVFXSSARVUAWZLTYDJEOOVKNXHPRPLIPAWHTZYCTCKVERBTAAJUIDASHUBGEYRHVFYNXQWSIK");

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
    msg.setTimeStamp(0.17691611525043438);
    msg.setSource(45897U);
    msg.setSourceEntity(50U);
    msg.setDestination(37520U);
    msg.setDestinationEntity(71U);
    msg.type = 186U;
    msg.htime = 0.5029652453992287;
    msg.context.assign("VWJADDSMRADLZOQPUDYQTAVNKWQMJUKXDNVLLELRZRZFHBRDTUEEYIGKSPPRFWBQDZRCPEPFKWECTGBGYDMMEOCCMZHLXSOHOVTNPHFVPHQPHAQFUKJXWRJLYOOUYA");
    msg.text.assign("PNPSYRYCOEHUIOUKRKJYJDWNLTUAIRENQIOKUJBRBBTANVSCWABRDCAEADDSDYSLQRFYZXHGWMWQFBGJTGWBACGZQBUELFXDGNEPICONIRLELFWVQFBXJNZMLXYRZNDOXLITSIHDKZGWXUGTZTOFCAAUVTFPHLKRUJKZGQMOMM");

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
    msg.setTimeStamp(0.3622462030035477);
    msg.setSource(9321U);
    msg.setSourceEntity(182U);
    msg.setDestination(48939U);
    msg.setDestinationEntity(173U);
    msg.type = 135U;
    msg.htime = 0.9513577968921003;
    msg.context.assign("QBPCOIBJWJDCYIUGMHVYZNVHWDLZQQBCRAPXPQIPTSSICUXTOOWJGEBSQHHQOSMRDYKLVLINGPLFSDTDJAJIHVVYSGMTHXLAZRGZTSVYQCEGZEXCRLDCSILMSINWFTDYVUFPHPUDQPVNFKWLXKBREACIRBJHYEOFOEESAZWRBHEAJOOUZPBZUNNUAPKWERZTOFBANMKNFGHXVMYBFTTMKUZAKAKXKICFWYVTGXFOXCDQYUJRURLLXMDWJN");
    msg.text.assign("EJRYAXUDHRYGKZNIBGDSIUKCMPXBRGLQLTIBVXFDWSPCDETNYWSHSEPMZBBZUGDVZJTPSODTXYTMPTWTRLDFVUXHWVHVJPBCAYZHGV");

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
    msg.setTimeStamp(0.33084013267421686);
    msg.setSource(13797U);
    msg.setSourceEntity(76U);
    msg.setDestination(41447U);
    msg.setDestinationEntity(116U);
    msg.command = 221U;
    msg.htime = 0.9231324336248031;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 207U;
    tmp_msg_0.htime = 0.9016713470516984;
    tmp_msg_0.context.assign("CIMQBVBLNJZDSCDZEKXRRVOKTPIRGBMHLJWWWJRBSRSFVABDUAVWY");
    tmp_msg_0.text.assign("KNGONPSWSVEIDHACEFUOEEUXDVIJQPPIBKGRQYOWYXBRISTZJHHPXGCIXDQDWYMHVFJBSQEYRZVAFIRSXXLPGCUOCZKGRTXIVTQMDZLNMZGEJKKB");
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
    msg.setTimeStamp(0.9838017168090009);
    msg.setSource(592U);
    msg.setSourceEntity(64U);
    msg.setDestination(25795U);
    msg.setDestinationEntity(171U);
    msg.command = 251U;
    msg.htime = 0.1688203064424838;

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
    msg.setTimeStamp(0.466001182982936);
    msg.setSource(60503U);
    msg.setSourceEntity(64U);
    msg.setDestination(40724U);
    msg.setDestinationEntity(114U);
    msg.command = 226U;
    msg.htime = 0.09907311430773158;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 38U;
    tmp_msg_0.htime = 0.33612063400065184;
    tmp_msg_0.context.assign("OHWMTPEFHCSFSJVJYWKXOIZHFXRPIWUFBUKIRVZYCCPNGDLTPULMPAMNHEVZUYLOQDCXKUVDJYSWULFNMBRIELNGQTMFJIR");
    tmp_msg_0.text.assign("BLFGFMTUGUQJOCVLVYWRSBXIADPWOUPYTCMKOZWFIDOBDXEMHAKESYHGNXHSMIUUOCSPLKWWUVKMLXCCFZHFEOMSDVYZIFKFKZGHUNZXKIACLNIJLQGTPZRTNMGJSALRORVQCTXKDLHTAUQYGYPSJPRPVWFYEXWTAVHOJQGBNDHCSHNJRDEMWCEKIEDBKPRVUXYYNGJRQIQXPEWZSXRVNCZMFBTRAL");
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
    msg.setTimeStamp(0.5104523612834844);
    msg.setSource(22342U);
    msg.setSourceEntity(80U);
    msg.setDestination(4153U);
    msg.setDestinationEntity(230U);
    msg.op = 222U;
    msg.file.assign("YHWMZNDBXTDHLSJFGCYGUISWHHRSSKEUBCGYQAHBWZJOALMBLXTYPWMHSXRIDRTJRSLVKCVIRFGDFOQMVIXHOWNAKNLZZHQFEIDTG");

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
    msg.setTimeStamp(0.44465794425489613);
    msg.setSource(31696U);
    msg.setSourceEntity(93U);
    msg.setDestination(31147U);
    msg.setDestinationEntity(243U);
    msg.op = 80U;
    msg.file.assign("GMZLNRXPAVTNQUMAGEBCBKBTWSUNBWWJNYPSYZIMJHLNIBISWUQJPFZTTULKKWZCGXLQVGTUFHIOONGUDTAPDRVKADRKMFCLPPHAOROABAEXFPVVRBZXKVBWUCMWFOCFYJFQZCEVDQJJNOSXSOHMUMLGZISGCIXHBHMHEEGWLYCTWAWYFEJXIJUVNAPSXDDZIRVLQYUDETCRFYHNGTIMTAERFBIDKO");

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
    msg.setTimeStamp(0.206626587348826);
    msg.setSource(3033U);
    msg.setSourceEntity(247U);
    msg.setDestination(47229U);
    msg.setDestinationEntity(208U);
    msg.op = 27U;
    msg.file.assign("WIMZCQYRRJMVCNOBDFODSNCUHTMSULEAGZMPBAYNICDWKBUTPFHPMGRXNJNDOKPUDSEIBLFQCOLHQATSWQXGBGZAPFNGHPWETKIYVJPSDYSRZBIXSXZEGSTOOPDPYYCYWTOXVQZGJFWUTHFYHRQDMLHRRWNFYJWZGVUTXUQLZNMEIKZIRE");

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
    msg.setTimeStamp(0.3149533057276759);
    msg.setSource(1275U);
    msg.setSourceEntity(75U);
    msg.setDestination(10528U);
    msg.setDestinationEntity(134U);
    msg.op = 154U;
    msg.clock = 0.9702894397903075;
    msg.tz = -61;

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
    msg.setTimeStamp(0.7022453407036564);
    msg.setSource(64522U);
    msg.setSourceEntity(123U);
    msg.setDestination(29914U);
    msg.setDestinationEntity(252U);
    msg.op = 95U;
    msg.clock = 0.7170060750733699;
    msg.tz = -42;

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
    msg.setTimeStamp(0.8316153455599723);
    msg.setSource(23527U);
    msg.setSourceEntity(242U);
    msg.setDestination(33710U);
    msg.setDestinationEntity(172U);
    msg.op = 167U;
    msg.clock = 0.48069240646371303;
    msg.tz = 111;

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
    msg.setTimeStamp(0.538702033097384);
    msg.setSource(4195U);
    msg.setSourceEntity(226U);
    msg.setDestination(48274U);
    msg.setDestinationEntity(52U);
    msg.conductivity = 0.4536152457852445;
    msg.temperature = 0.9933667685127763;
    msg.depth = 0.34151925898797253;

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
    msg.setTimeStamp(0.746748011422474);
    msg.setSource(7911U);
    msg.setSourceEntity(131U);
    msg.setDestination(10336U);
    msg.setDestinationEntity(195U);
    msg.conductivity = 0.9934758208361311;
    msg.temperature = 0.49374339660131217;
    msg.depth = 0.9424776055102092;

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
    msg.setTimeStamp(0.46268060029869507);
    msg.setSource(49070U);
    msg.setSourceEntity(140U);
    msg.setDestination(50744U);
    msg.setDestinationEntity(5U);
    msg.conductivity = 0.09340454439081158;
    msg.temperature = 0.5862673296336239;
    msg.depth = 0.8123216955984255;

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
    msg.setTimeStamp(0.46170270899627663);
    msg.setSource(28512U);
    msg.setSourceEntity(113U);
    msg.setDestination(49378U);
    msg.setDestinationEntity(249U);
    msg.altitude = 0.20302440689386247;
    msg.roll = 45876U;
    msg.pitch = 37046U;
    msg.yaw = 9855U;
    msg.speed = -14341;

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
    msg.setTimeStamp(0.49064199920640583);
    msg.setSource(28188U);
    msg.setSourceEntity(15U);
    msg.setDestination(36311U);
    msg.setDestinationEntity(84U);
    msg.altitude = 0.5587584593997772;
    msg.roll = 47833U;
    msg.pitch = 20774U;
    msg.yaw = 32719U;
    msg.speed = 22220;

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
    msg.setTimeStamp(0.22449285262563434);
    msg.setSource(50539U);
    msg.setSourceEntity(160U);
    msg.setDestination(62636U);
    msg.setDestinationEntity(141U);
    msg.altitude = 0.053155278888346924;
    msg.roll = 56627U;
    msg.pitch = 2976U;
    msg.yaw = 12553U;
    msg.speed = 4577;

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
    msg.setTimeStamp(0.47378688870657204);
    msg.setSource(28613U);
    msg.setSourceEntity(126U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(88U);
    msg.altitude = 0.22169682925156053;
    msg.width = 0.9623472764114469;
    msg.length = 0.685473220000999;
    msg.bearing = 0.17757795744625626;
    msg.pxl = -22579;
    msg.encoding = 205U;
    const signed char tmp_msg_0[] = {-16, 76, -9, -53, 60, -119, 11, 50, 41, 4, 115, -32, 104, 51, 86, 115, -71, 29, -66, 81, 60, -63, 51, 93, 112, -29, -121, 40, -58, 44, -107, 1, -52, -57, -16, 1, -41, -35, 65, -51, 2, 69, -19, 122, -88, -11, -114, 33, 76, -114, 46, -124, 35, -29, 43, 32, 6, 104, 17, 113, 2, 96, 59, 91, 99, -70, 47, -6, -45, -113, -97, 77, -102, 16, -119, 15, -24, -97, -65, -112, 59, -78, -74, 66, 35, 90, -38, -97, -45, 53, -90, 106, 81, -56, -61, -16, -23, -24, -124, -118, 15, 95, 19, 69, -38, -25, -12, 35, -106, -80, 68, -40, 27};
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
    msg.setTimeStamp(0.2185851949321581);
    msg.setSource(11610U);
    msg.setSourceEntity(123U);
    msg.setDestination(26221U);
    msg.setDestinationEntity(252U);
    msg.altitude = 0.8485679893190112;
    msg.width = 0.6619713505171761;
    msg.length = 0.845381911105727;
    msg.bearing = 0.7020862529645099;
    msg.pxl = -21140;
    msg.encoding = 223U;
    const signed char tmp_msg_0[] = {-97, -124, -81, -26, -89, 8, 104, 100, 94, 8, -104, -86, -82, -3, -57, 16, -96, -93, -30, -67, 14, -23, -10, -91, 68, -39, 29, 89, 48, -26, 32, -95, -36, -2, -125};
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
    msg.setTimeStamp(0.14358155794898186);
    msg.setSource(37440U);
    msg.setSourceEntity(220U);
    msg.setDestination(19447U);
    msg.setDestinationEntity(174U);
    msg.altitude = 0.8996752970862313;
    msg.width = 0.9185733996033821;
    msg.length = 0.6685435824026484;
    msg.bearing = 0.06127388456831451;
    msg.pxl = 7478;
    msg.encoding = 221U;
    const signed char tmp_msg_0[] = {124, -74, -7, 97, -70, 22, 4, -46, -64, -94, -50, -84, -31, 69, -25, 19, -51, -47, 35, 48, 109, 4, -35, -92, -73, -112, 60, 90, 106, 101, 102, 99, -39, 112, -27, 60, -16, 75, -81, 118, 40, -40, 53, -11, 41, -66, -126, -69, 96, -97, -108, 90, 118, 51, 88, 18, 96, 82, -58, 60, -20, -21, -77, 103, 35, -125, 56, -105, -2, -28, 51, 113, 105, -58, 27, -128, -20, -103, -22, 13, 87, -121, 77, 81, 64, 20, -44, -86, -89, -73, 99, -84, -20, 115, 69, 46};
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
    msg.setTimeStamp(0.45804582299028485);
    msg.setSource(26356U);
    msg.setSourceEntity(140U);
    msg.setDestination(10982U);
    msg.setDestinationEntity(161U);
    msg.text.assign("UOLYXTHRXWXZQWWRMIAXJYBNBPYOVLKBTGVDZHAJLCHEEOFOUGALDHRATPIWQOCYRDMZTGOXWVJDPRCSQEUTKSHKUUGFS");
    msg.type = 63U;

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
    msg.setTimeStamp(0.42920304214425165);
    msg.setSource(4912U);
    msg.setSourceEntity(131U);
    msg.setDestination(63503U);
    msg.setDestinationEntity(118U);
    msg.text.assign("FFGAZEDPAPRSIMKYHABMIDOHGCDSAHHQSDBNMUEPMJWJLHTCULMABNXVSMZZCTTWUWLNNQNIUXNUJUXOVTLEUCSTPQVVGBRCFROKQDGGHCDUTKZFCPFBRZXZQOBRITQDGUZZWARSIUMPKETXEPNOPCYYCDKHJAGJBMFIVEYBTQXXLWAXVLVYYL");
    msg.type = 208U;

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
    msg.setTimeStamp(0.8187894825691426);
    msg.setSource(59725U);
    msg.setSourceEntity(0U);
    msg.setDestination(62310U);
    msg.setDestinationEntity(109U);
    msg.text.assign("NTUYSULABRXHPBXSAGSDAKTKEWUYPPSFFQZHDMCYROWJHCAHSYNUUDPAVNOBFZYSDWMIDELHZCBRLTELHLVFZRADGMAXL");
    msg.type = 170U;

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
    msg.setTimeStamp(0.6406900260114476);
    msg.setSource(53179U);
    msg.setSourceEntity(65U);
    msg.setDestination(15306U);
    msg.setDestinationEntity(86U);
    msg.parameter = 71U;
    msg.numsamples = 167U;
    msg.lat = 0.665248474947117;
    msg.lon = 0.46458853744993744;

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
    msg.setTimeStamp(0.20583293826717808);
    msg.setSource(40057U);
    msg.setSourceEntity(144U);
    msg.setDestination(62549U);
    msg.setDestinationEntity(64U);
    msg.parameter = 218U;
    msg.numsamples = 107U;
    msg.lat = 0.6805996413594151;
    msg.lon = 0.9654376778951407;

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
    msg.setTimeStamp(0.37384515892685855);
    msg.setSource(10542U);
    msg.setSourceEntity(196U);
    msg.setDestination(14242U);
    msg.setDestinationEntity(115U);
    msg.parameter = 69U;
    msg.numsamples = 35U;
    msg.lat = 0.7230843047479718;
    msg.lon = 0.5948142042284693;

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
    msg.setTimeStamp(0.18922169550307433);
    msg.setSource(16481U);
    msg.setSourceEntity(215U);
    msg.setDestination(19117U);
    msg.setDestinationEntity(8U);
    msg.depth = 63284U;
    msg.avg = 0.2845106402837757;

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
    msg.setTimeStamp(0.5804344866643575);
    msg.setSource(47666U);
    msg.setSourceEntity(220U);
    msg.setDestination(38029U);
    msg.setDestinationEntity(201U);
    msg.depth = 56380U;
    msg.avg = 0.5281093796905243;

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
    msg.setTimeStamp(0.08387280654159157);
    msg.setSource(51000U);
    msg.setSourceEntity(244U);
    msg.setDestination(3138U);
    msg.setDestinationEntity(227U);
    msg.depth = 25101U;
    msg.avg = 0.3221329847280642;

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
    msg.setTimeStamp(0.9867654170393186);
    msg.setSource(19959U);
    msg.setSourceEntity(57U);
    msg.setDestination(6521U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.1527102466182022);
    msg.setSource(45256U);
    msg.setSourceEntity(68U);
    msg.setDestination(21859U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.11556394735786524);
    msg.setSource(44890U);
    msg.setSourceEntity(0U);
    msg.setDestination(44488U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.4268347828818033);
    msg.setSource(64606U);
    msg.setSourceEntity(179U);
    msg.setDestination(33867U);
    msg.setDestinationEntity(8U);
    msg.sys_name.assign("GAXGSMFZOCSQNNZONRZSDYRCLDVLUFURRDWOKRUXMIOYTKLVASZOTDWXWLYYEAPEAXNSESYRFGPIQDHFEYZTIJCQEJUIEEFVZBKMCFCGVWIWDCIBFAMQYVSNZPLBXWFVQLORGDROHMLIWSXCONJFOPESAXTXKPHJVUPMETLHKYNTKUJXQDIHBJZBKNTPJBHXKQJGLRMVQDNRAJUAGQTGUIHDABBGNFQCMVCLWPHHZPEPJOHTIMYAVSWZWYK");
    msg.sys_type = 197U;
    msg.owner = 10169U;
    msg.lat = 0.5293388212920184;
    msg.lon = 0.7978062674456711;
    msg.height = 0.26533496648949406;
    msg.services.assign("OLQKMXTNRWXYSBXNMOIXOHGNTHSUUVVAHSLKRYNTMXMZBWFWKJOHHUGWZOFBDIAQPLWBYCTUBNLQFSEAMGNMEYVFSIQVYINRKJEOEAJEQDUPYZEHRFPMYDIJXRQOIWDKTDCXLTPROYIKFEJCFDJRCGHMUBEAPCLXGLOBDZKQCVCJNWAKIEI");

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
    msg.setTimeStamp(0.03906341430580418);
    msg.setSource(43262U);
    msg.setSourceEntity(111U);
    msg.setDestination(23964U);
    msg.setDestinationEntity(236U);
    msg.sys_name.assign("LEUXGVICLYNECCOZTKGQWTIGBJQTROBALGXEGKOTKUYWSVKSX");
    msg.sys_type = 15U;
    msg.owner = 34625U;
    msg.lat = 0.539042240234319;
    msg.lon = 0.4943626032436824;
    msg.height = 0.9179557483737748;
    msg.services.assign("ZHOEIWVRBHAGWWLIWUZDSNRGBVAAPDEXVXBJMKXELOXTZFKZWZIJCUSPMZPCFEMJQXDYHBUBCKRTWVFZDQKGASUQHKQJGTLPHPBQOGETWRDKANIGAQJYRNUEGICMARCYFJQLLZLDXNIBVMMTIVDCNFUCCTRJFYMPHOTXJDOMNWDQSGPYPIHNSWYQDOUYZT");

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
    msg.setTimeStamp(0.9877685449477228);
    msg.setSource(34859U);
    msg.setSourceEntity(86U);
    msg.setDestination(30591U);
    msg.setDestinationEntity(184U);
    msg.sys_name.assign("ACQJPGGWKISUOCBJMYSISENKRKZFXOTRESTYAWVHPJHJTGHIQDNLUQELQDFKMUHLIOALEAWKUKIEFLTXMGPCKVZCSTRLNKXGPIXFCLZIHXIOQPWXBMKVADZGYPQVGVWQWBBBDJAZDHXQRUSVZEXZJXUACWWXGJFDRMRCFMOSPODGMRHBQQBDDKAZWPBONICVHFDSTNY");
    msg.sys_type = 226U;
    msg.owner = 47817U;
    msg.lat = 0.6034776932246579;
    msg.lon = 0.9903172948727672;
    msg.height = 0.3316993877728245;
    msg.services.assign("VWNMGOMSGAMTTUGCZDMBSYEIAMXDHPYFTUFLWPJXLCYPTEYLUHCOHEJLKQVYSUSGQAOPGEGBRWBSDRWDNQETOHEINZGRQACNGCJFTQJWVWWQPHTIFWFAIFMYZZEOOULZJXXQVDLOJRHPFRYNVDAYSCCOFKBDXTXMKDSFSMIVLVXBZYBONQPDK");

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
    msg.setTimeStamp(0.7920455925700908);
    msg.setSource(33264U);
    msg.setSourceEntity(232U);
    msg.setDestination(19326U);
    msg.setDestinationEntity(211U);
    msg.service.assign("GOVWHUBEIFHWLWXATDCHDPORAYULLGOSRSVQHJNKWALTMRXMPNGODZPQKYXDLLBHBFKZXYEHUSLBZVJWWSTD");
    msg.service_type = 163U;

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
    msg.setTimeStamp(0.2726617206009283);
    msg.setSource(8648U);
    msg.setSourceEntity(190U);
    msg.setDestination(65022U);
    msg.setDestinationEntity(126U);
    msg.service.assign("LMCKNNZVLVAJPZJJGILIQPBUHFNPKDAWGGLJSOOCSTIAKYOENSKXQEQLQWZLXZIWVGATDDNOZHXHKTGNGIGPEIOJSHACVXACBDMPIWBSOBOUMUMTJZEDYSBHBTPLLMBHXRCNRUZVMGVUJBDSYGDWFTJCUYHFXKXMIRYTXMZINQRTSEARDUMJKFWRWAUTJPIOCZ");
    msg.service_type = 48U;

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
    msg.setTimeStamp(0.7733061399754656);
    msg.setSource(45611U);
    msg.setSourceEntity(205U);
    msg.setDestination(47590U);
    msg.setDestinationEntity(123U);
    msg.service.assign("JFMECYJEEKMDYNHKPWZTMOBVHDEDIVWDMDYMQXRLHGUSJKPVD");
    msg.service_type = 71U;

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
    msg.setTimeStamp(0.5302258169896382);
    msg.setSource(20588U);
    msg.setSourceEntity(164U);
    msg.setDestination(31668U);
    msg.setDestinationEntity(144U);
    msg.value = 0.1609128557885372;

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
    msg.setTimeStamp(0.3770546293291982);
    msg.setSource(18339U);
    msg.setSourceEntity(155U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(49U);
    msg.value = 0.3591331348884519;

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
    msg.setTimeStamp(0.87370573938131);
    msg.setSource(7371U);
    msg.setSourceEntity(183U);
    msg.setDestination(28072U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5595098213721008;

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
    msg.setTimeStamp(0.8018979251485563);
    msg.setSource(12480U);
    msg.setSourceEntity(119U);
    msg.setDestination(44286U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5582303440730177;

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
    msg.setTimeStamp(0.5954568771686898);
    msg.setSource(64898U);
    msg.setSourceEntity(249U);
    msg.setDestination(2133U);
    msg.setDestinationEntity(41U);
    msg.value = 0.2531769909227837;

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
    msg.setTimeStamp(0.7877578549569209);
    msg.setSource(41640U);
    msg.setSourceEntity(85U);
    msg.setDestination(12638U);
    msg.setDestinationEntity(16U);
    msg.value = 0.47648526929426416;

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
    msg.setTimeStamp(0.5158191247867879);
    msg.setSource(2845U);
    msg.setSourceEntity(33U);
    msg.setDestination(42021U);
    msg.setDestinationEntity(250U);
    msg.value = 0.7507167560583438;

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
    msg.setTimeStamp(0.6137484543720501);
    msg.setSource(17992U);
    msg.setSourceEntity(61U);
    msg.setDestination(3610U);
    msg.setDestinationEntity(250U);
    msg.value = 0.14008507955438065;

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
    msg.setTimeStamp(0.534068223484366);
    msg.setSource(40350U);
    msg.setSourceEntity(188U);
    msg.setDestination(36114U);
    msg.setDestinationEntity(165U);
    msg.value = 0.34575018862852247;

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
    msg.setTimeStamp(0.7996140101701357);
    msg.setSource(22260U);
    msg.setSourceEntity(234U);
    msg.setDestination(36723U);
    msg.setDestinationEntity(196U);
    msg.number.assign("UTIJVPLRQOUBPYMAHZHPAZKKZHSRCPGJZXGDMDTCZIAIFBCSIBWAYKOPUFRBZU");
    msg.timeout = 15861U;
    msg.contents.assign("MWNVBTKVERZLJDPJEGIDNUHMOERBRETTGUQKRWGILADPEWSNYAFNFEIUXVISQBIFXCUWYPFYIAYDTMYWLODL");

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
    msg.setTimeStamp(0.2933989654228689);
    msg.setSource(59156U);
    msg.setSourceEntity(39U);
    msg.setDestination(49584U);
    msg.setDestinationEntity(36U);
    msg.number.assign("NRBEYMCUOBEIMQFIWBKXSRTWULJJSEGGVMJHOYAMVFLSFHONQOYIELYXRPGUXOBHKPTITGKKOAHKZRCAQYWKLAWSVZFBAGMVIFSHVOCCLFZYRCABCQ");
    msg.timeout = 64143U;
    msg.contents.assign("NVDGLZSOPOWPQHGXNLCATKJTQOAMHKPIIQFFDVIFUPCPXBJQAJVMTYZESWNLGZHXCNMFAWPPZRIRGCEIDBJUYKOKWZRYSRDFTKBSGDCZECLGSDVFAPHYMQUQXIHHHMIRVHDCTLSBWBIV");

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
    msg.setTimeStamp(0.2942202026708792);
    msg.setSource(34903U);
    msg.setSourceEntity(241U);
    msg.setDestination(50848U);
    msg.setDestinationEntity(89U);
    msg.number.assign("RHLPYJMNOCHZQWPUAFIVREXVIFYWLJOP");
    msg.timeout = 25147U;
    msg.contents.assign("ASJHMWZDIAGOJXPUKNNAVQNZGRJRKHHFPLVUBLJJEZPNVJWTTYMBCXVKCDRCEPKPXQYIBWVGYGNIIUXMHWSXUQPBTWTNGEQTIARFQLYYXZNQNEVCEBULTPDCATE");

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
    msg.setTimeStamp(0.9513397174820872);
    msg.setSource(30271U);
    msg.setSourceEntity(200U);
    msg.setDestination(39034U);
    msg.setDestinationEntity(124U);
    msg.seq = 4244932020U;
    msg.destination.assign("MCSBSGSXAKQNCZJPLYVCSTZOAMDUGGEVGCGBOUSWFJUHTQLIVKMYEFMPDQVZOWCCBTRZPOXMYVNRCZSNHUISGII");
    msg.timeout = 53188U;
    const signed char tmp_msg_0[] = {-95, -103, 119, -69, -94, -33, 96, 45, -79, 25, -74, 87, 22, -67, 108, 45, 108, -127, -65, -52, 3, 12, 80, 85, 115, 115, -106, 101, -29, 61, 69, 42, 90, 14, 3, 104, 111, 4, -6, 5, 40, 49, -28, -108, 61, 24, 52, 118, -86, 14, -6, 9, 6, -68, 10, -69, -107, 87, -89, 86, 17, 116, 66, -105, -2, 106, 43, 39, 82, 59, 95, -70, -72, 108, 53, 69, 123, -128, -104, -87, -56, -112, -4, -63, -89, -81, -114, -11, 13, -54, 27, 120, -48, -76, 11, 48, -121, 96, 119, 67, -82, 102, 91, 16, 36, -46, -16, 39, 117, -20, 83, -19, 79, -128, -104, -78, -49, -69, -8, -123, -89, 97, -119, 29, -38, -20, 62, -33, -118, 95, 51, 4, -96, 55, -127, 94, -12, -100, -31, 62, -50, 100, -98, -90, -108, 55, -8, 24, 27, -48, -110, -51, 113, 24, -23, 113, 28};
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
    msg.setTimeStamp(0.38370529439903833);
    msg.setSource(57070U);
    msg.setSourceEntity(227U);
    msg.setDestination(23558U);
    msg.setDestinationEntity(244U);
    msg.seq = 2490181313U;
    msg.destination.assign("UYBMFDTNFDYPWLKVGFWVHXALFEHIELCAIYRSQXJQAGOZXFSQZZWHSGISNBTXKYVTSJEUTAKVAMZEXDVCTXLWGOZRAPXUQQDQXUGZGEGPKAYSGRJAUOLCILFKIBYTKSHPEBCBGDCJO");
    msg.timeout = 20605U;
    const signed char tmp_msg_0[] = {58, -4, -40, -109, 55, -8, 73, 30, -87, -38, -69};
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
    msg.setTimeStamp(0.8143876854692643);
    msg.setSource(51186U);
    msg.setSourceEntity(136U);
    msg.setDestination(27596U);
    msg.setDestinationEntity(190U);
    msg.seq = 2624700118U;
    msg.destination.assign("JLSWWFRRJLKWVFJUTQFQXQXNTUXBQGGVQDPIMHRWRCZLNZMSCVXSWFGRRIGMHHKLTHPKQOSAMAZFPYXMEMGLYZTFCIDZXKOUTQOMWZ");
    msg.timeout = 2990U;
    const signed char tmp_msg_0[] = {126, -80, 52, -41, -72, -10, 69, -71, 116, -78, -78, -113, 22, -56, 98, 121, 1, -108, 22, 80, 108, -115, -23, -103, 94, 25, 48, -89, -27, -49, 19, -30, -36, 0, 87, 102, -61, -39, 118, 19, 30, -66, -128, -31, 92, -110, -82, 48, 11, -62, 84, -96, 2, 101, 112, -14, -9, -96, 60, 124, -64, 69, -87, 12, 19, -12, 117, 5, 11, -124, -113, 50, -74, 35, 69, -29, -50, 114, 74, 33, -59, 17, 80, 82, -15, 50, 75, 13, 110, -61, 13, -43, -67, 107, -112, -13, -77, 58, 80, -20, 47, -94, 0, 3, -12, -1, -103, -91, -56, 89, -44, -9, -98, 123, 16, 68, 50, -97, 63, -52, 74, 32, 93, -75, 92, -37, 86, 102, 103, -79, 71, 63, -96, -42, -62, 16, 70, -104, -124, 81, 96, 108, -74, 92, 14, 72, 30, -110, 66};
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
    msg.setTimeStamp(0.051640676585462564);
    msg.setSource(5200U);
    msg.setSourceEntity(80U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(66U);
    msg.source.assign("YDQZXNQILFDWTUEYNYPSQRRFTWWUBPCVQFAKRBVZOMKGUEMIVQZSWSFUDSFEXVXXNWLJNOETMRFMFLKLTGIBGMYRJQNRDMGLXKBLCEAOTXYWZNVPJPNGDROOXISHUGDSZKCIJAXAVSOJRBQACTCTPHUKBIHBBTYPZEHFRSGPGDAZYTBRIULSOHQDWXQPVJLLJK");
    const signed char tmp_msg_0[] = {6, -124, -122, -53, -121, -7, 6, -8, -9, 67, -1, -26, -42, 5, -37, -67, -79, -17, 107, 1, -31, 124, -122, 25, -106, -57, -127, -108, 8, 55, 98, -74, 125, 30, -39, 94, -74, -17, -16, -6, 49, 22, -105, 13, 81, -25, 69, 113, 106, 18, -83, -92, -123, 86, -121, 48, 85, -28, 58, 83, 15, -53, -105, -57, 60, 57, 84, 37, 20, -74, -13, 52, 20, 11, -67, 19, 10, 7, 122, 83, 107, 1, 10, 3, 93, 0, 59, 73, 100, 35, 114, 110, -99, -119, 24, -45, -53, -115, -5, -118, 74, -104, -36, -107, 16, 14, -32, -89, 54, 63, 32, -38, 75, -54, -12, -64, 44, 73, -66, 91, 20, -59, 37, -64, -94, -104, 84, 120, 120, -47, -83, -8, 93, -85, -117, 55, -56, 67, 65, 15, -108, -128, 97, -85, 120, -9, 119};
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
    msg.setTimeStamp(0.38718885071172515);
    msg.setSource(41222U);
    msg.setSourceEntity(70U);
    msg.setDestination(25004U);
    msg.setDestinationEntity(179U);
    msg.source.assign("POBRSEKPKBSHYGZMZDRKQZHNZGXIBKOWEEGXLAIDUENFKJUCUUTELIUUOOXQBJJDQSNYVZCAGCBDJWTETQQHZWGFKQNLOGVDEMSNVHBPNBIMYMAPTNR");
    const signed char tmp_msg_0[] = {-101, -87, -32, -105, 76, -64, 22, 111, -74, 97, -53, -113, -1, 59, 56, 19, 31, 42, -55, -12, -17, -120, -117, 31, -87, -74, -6, -63, -60, 94, 42, 90, 116, -18, 85, -67, -73, -5, 64, 43, 83, 62, 110, 39, -52, 36, -55, -25, 66};
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
    msg.setTimeStamp(0.6174202271369301);
    msg.setSource(65200U);
    msg.setSourceEntity(127U);
    msg.setDestination(25862U);
    msg.setDestinationEntity(21U);
    msg.source.assign("JTLVEOFDZZLYZHM");
    const signed char tmp_msg_0[] = {-66, -121, 113, -102, 60, -41, -47, -126, -104, -46, -69, 59, 58, -98, -66, -92, -114, -68, 24, -102, 34, 72, 23, 14, -84, -48, -81, 37, -62, 115, 4, -83, 125, 27, 108, -83, -97, 112, 60, 6, -128, -83, 43, -125, -33, -110, 52, 94, -124, 95, -49, -76, 68, 114, -45, 62, 35, -60, -48, 91, -54, 71, 30, -91, -122, 76, 27, 54, -47, -29, 59, 24, -105, -67, -10, -21, -110, -72, -19, 112, -55, -120, 109, -66, 39, -4, 49, -86, -70, -116, 115, -3, -120, -40, -106, -106, -68, -81, 9, -105, -98, -42, -46, -96, -93, -106, 107, 18, -50};
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
    msg.setTimeStamp(0.2722976839070349);
    msg.setSource(40316U);
    msg.setSourceEntity(58U);
    msg.setDestination(2016U);
    msg.setDestinationEntity(154U);
    msg.seq = 1719559332U;
    msg.state = 55U;
    msg.error.assign("KMNSCOWQCTZIEEHVUZDDQRYOCUJGKDYCASMJAOQFOSPPNEROWXLSTV");

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
    msg.setTimeStamp(0.13378902405891202);
    msg.setSource(47216U);
    msg.setSourceEntity(38U);
    msg.setDestination(58816U);
    msg.setDestinationEntity(93U);
    msg.seq = 4142571528U;
    msg.state = 103U;
    msg.error.assign("CEBVZHPCUKDPEZOKRIITJJBJGVFOONXRZDPJVFIYMQNJCYXRNVQHJKCHUOMTUCTCFGXCVQAASNPWXLWESFPQPUULBWROGDTLOECLVVYMXHDGYXZWALJEUWPRNEXRIZGADXSFAYZCPKNOHNBFYPFTGQNRZXMVZFGCIRBEFMKWJOKWLULAXAKDSE");

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
    msg.setTimeStamp(0.6042463526014807);
    msg.setSource(63862U);
    msg.setSourceEntity(223U);
    msg.setDestination(44170U);
    msg.setDestinationEntity(191U);
    msg.seq = 377753975U;
    msg.state = 158U;
    msg.error.assign("WITMGUXAVDQMNOVDAZBOEDFKVSUSERXAMQKXPHQEAWHIECHHCCRUJIKYNWFCHCGPQKMFWRJYLYLTGKGFUNSBJONMYMFHYGDFAMFXHACLGSWZFDBBPSYTOPKEBWSWLBSJPX");

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
    msg.setTimeStamp(0.9088347213933764);
    msg.setSource(32161U);
    msg.setSourceEntity(236U);
    msg.setDestination(15863U);
    msg.setDestinationEntity(60U);
    msg.origin.assign("PKQAUBZSKAXOGWRWTHJNUFJXMIXBZQHLDRDXZPIFSZLULOYJIUGGVVG");
    msg.text.assign("GEQVUSUANJHFJLBRKNCIWHJPZIVLGZGYPMYOKLGHZAUTVOQRADHXAGWFIBJQXEMSDKXFVXWEDLKGDBMZTRCCZDEHDABFJEVYSWJOAMCIIXQPESBFIHPOCURFMLMYQTFFHDIVDWNQZLYHAVCOZWRNHLJDNCGJCFPPWOTTWBSRLJMHJRYUOSSQNNLATXTCTZSRD");

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
    msg.setTimeStamp(0.9350381658822794);
    msg.setSource(57054U);
    msg.setSourceEntity(190U);
    msg.setDestination(58701U);
    msg.setDestinationEntity(56U);
    msg.origin.assign("CUXMLUIJHOYSBIMHPLVLYPDNKPMJKIFMBAFRDUUOBZIQIKGWYJXRAPPDUNTKHCREDLVYNCQRYNCMTWNYJVSQODJWGEYBYRHWYCPPFAIBWEKFCUZHRZLONVGMETJFQAWSYAVRBLGKGQDGPSKDZSDPJMVEOHTEDOTISXVZRVJHNZCQTBCAUJHZNOIGXWCGBPKBZLI");
    msg.text.assign("PMAMAHXTZGXGEKYKSMHARIYZJSWBTOSCLBANJFCHBKAMVSHPRZAPSSJCXCJWLNDJFBUKFJUYRNSLULXDPFCMGLBYFOPVRNAZTSFDRLUCGDUHEDMTXJNAERMUOROKGXVQQNVEJTQJCULVSWRIGV");

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
    msg.setTimeStamp(0.017842991971980804);
    msg.setSource(50678U);
    msg.setSourceEntity(54U);
    msg.setDestination(39345U);
    msg.setDestinationEntity(77U);
    msg.origin.assign("ZMRZGEYXVKPCWYEQWWHAMGITVLFZWXALYDFXNSJAKJDWRLQNHHBSPDCILILHNMTMRQUEFNJRRQUURBHADX");
    msg.text.assign("BLOBWKQHZE");

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
    msg.setTimeStamp(0.9434871872416131);
    msg.setSource(3470U);
    msg.setSourceEntity(55U);
    msg.setDestination(46696U);
    msg.setDestinationEntity(16U);
    msg.origin.assign("GBKIQEAYXEAWUYFTTCFXYLXIIRWTVFMXMHFIWCI");
    msg.htime = 0.7642131369370617;
    msg.lat = 0.5514809074246053;
    msg.lon = 0.6363737582022856;
    const signed char tmp_msg_0[] = {-3, 84, -115, 66, 92, -113, 113, -116, -119, 72, -106, 55, 83, 113, 9, -119, -47, -43, -63, -105, -97, 115, -58, 31, 87, -84};
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
    msg.setTimeStamp(0.9727848323971425);
    msg.setSource(42744U);
    msg.setSourceEntity(113U);
    msg.setDestination(39243U);
    msg.setDestinationEntity(16U);
    msg.origin.assign("DCGYOFRCAIBVTOZUBECMOPWGFZCKEUYCQKOJMYMERJPCXGFSUEXJZSAYHIPAVSMVINAOVWPONWYTBPVBHUTGNKLGREHQMBQUZJWYFSQFKNYTDYJGWBMKQZQOKMVPUALALTWVQDIKR");
    msg.htime = 0.7232666596800754;
    msg.lat = 0.5218061941690116;
    msg.lon = 0.44191783247326244;
    const signed char tmp_msg_0[] = {113, 106, 1, 31, -1, -117, -20, -58, 72, 51, 75, 86, 43, -114, 101, -27, 95, -79, 111, -107, -87, -55, -28, 125, -70, 28, 93, -35, 80, -88, 96, -22, 58, 111, -76, 85, -8, -117, -97, -16, 6, -128, 10, -1, 123, -99, 89, 80, 62, 89, -15, 47, 56, -33, 107, 118, -106, -61, 106, 77, 67, 91, -74, -49, -52, -84, -53, 42, -91, 63, 15, 110, 79, -23, -85, 11, 94, 115, -54, 1, -14, -31, -65, -25, -76, 94, 31, 125, 47, 87, 108, -2, -60, -50, -44, -55, 20, 72, -9, -37, -92, -80, -66, -77, -95, 32, 6, -102, -36, -117, 52, -66, -26, 120, -89, 118, -104, 50, 100, -6, -35, -110, 12, 106, 39, -31, -1, -37, -65, -3, 124, -3, -49, 5, 86, -83, 102, -72, -76, -20, -56, 4, 103, -123, -71, -24, -40, -48, -64, 92, 33, -69, 117, -91, -35, -37, 39, 11, 106, -15, -35, -44, -93, -61, 119, 40, -62, 50, 119, 89, -118, 124, -55, 92, -95, -43, -84, 80, -59, 100, -120, -102, 71, -121, 99, 75, -45, -33, 125, -37, -8, -52, 112, -100, -101, -81, 95, 99, -122, 82, 58, -45, -79, 19, -120, -42, -26, -32, 30, 125, -6, -62, 12, 54, -119, 25, -46, 89, 30, -70, -96, -67, -119, -18, 28, -76, 94, -78, 66, -3, -98, -46, -2, -19, 63, -31, -1, 104, -91, -96, -37, 62, -12, 42, 89, -116, -47, 73, -97, -106, 2, 18};
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
    msg.setTimeStamp(0.525783466313179);
    msg.setSource(24769U);
    msg.setSourceEntity(34U);
    msg.setDestination(57055U);
    msg.setDestinationEntity(226U);
    msg.origin.assign("OLRKSSZLDNFCPDZPDGOSMDAPQTIZAOQEQYYELABAKWHWVIOHKDIVVXJHWNHFLXMCLFNZKYMFHWFWBXJMDKMVCPMYZNBGSYTDVBYAXUHGSGIQYQOASUYPRBSCDCTBJBRBGTDFTIIGGOMQRVWPRNFGAMQYOIKIGUFJKNRVPXVWHCZHLLICTVTAEUEQRSLXXMTJJOENZFWPKKXUXZ");
    msg.htime = 0.689907357060526;
    msg.lat = 0.8630452813931192;
    msg.lon = 0.5418831972411045;
    const signed char tmp_msg_0[] = {16, -84, -61, -121, -96, 38, 55, -102, 55, 19, -32, -104, -79, -21, 123, 100, -120, -32, -98, -81, -118, 13, -71, 76, -62, 7, 117, -8, -29, 16, 90, 27, 108, 33, -64, 74, -109, -46, -83, -102, 18, 60, -26, 48, -110, 55, 103, 99, -56, -2, -107, 47, 13, -80, 25, -108, 92, 116, -11, 24, -7, -49, -117, -113, -114, 27, 41, -20, 21, 69, 88, 79, 85, -51, 6, 13, -17, 113, 54, -44, -112};
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
    msg.setTimeStamp(0.12036493581748353);
    msg.setSource(13879U);
    msg.setSourceEntity(109U);
    msg.setDestination(4795U);
    msg.setDestinationEntity(15U);
    msg.req_id = 17613U;
    msg.ttl = 50201U;
    msg.destination.assign("DDCWHUFMQALUQFZ");
    const signed char tmp_msg_0[] = {-114, 17, -76, -88, 43, 81, -12, -41, 98, 35, -48, 2, 88, 57, 53, 42, -64, -88, -67, -48, -15, -4, 51, 25, 46, 94, 32, 87, -21, -83, 125, -12, -20, -46, -16, 94, -80, -127, -26, 78, -62, -104, -81, -115, 86, -37, -41, 61, 111, 33, 124, -70, 119, 114, 69, 53, 31, 61, -69, -95, 89, -123, -81, -37, -13, -125, 2, -118, 65, 17, 42, -115, -9, 77, 57, 61, -51, -13, -52, 48, 80, -31, 0, -38, 34, 64, -35, -83, 121, -23, 52, 112, 21, 61, -106, 121, -2, 32, -45, -60, 20, 58, -41, -114, -7, 108, -55, -34, -84, -107, -95, 98, -40, 98, 37, 82, -104, 25};
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
    msg.setTimeStamp(0.9093505173663339);
    msg.setSource(27123U);
    msg.setSourceEntity(47U);
    msg.setDestination(21332U);
    msg.setDestinationEntity(221U);
    msg.req_id = 24741U;
    msg.ttl = 64094U;
    msg.destination.assign("ACPTEMVCUDSIODCSDHPAXLXXRGGELSLXJSJNAMIIDBTNHXKFSZPRYZCLUGOOYZVPFGFJJFQYROVIXZQKTRBHWOYWBRUAQUWR");
    const signed char tmp_msg_0[] = {-125, -82, 56, 58, 110, 30, -62, 42, 105, -72, -64, 100, -53, 3, 25, -23, 102, -49, -52, 14, 48, -127, -97, -120, 65, 41, -91, 82, 25, -41, 82, 48, 59, 37, -87, -42, 103, 121, 92, 58, -59, 18, 18, 13, 29, -68, -25, -77, 121, 80, 8, -10, 70, 69, 44, -35, -45, 122, -33, 96, -51, -49, -33, 40, 82, -64, 99, 14, 86, 41, 126, 28, 15, -39, 68, 20, -113, 59, 24, -104, 98, -14, -81, 82, -57, -12, 47, -68, -50, -11, 105, 75, -106, 79, -109, 53, -37, -1, 9, 103, 55, -81, 119, 24, -113, 42, 29, -96, -59, -50, -84, -84, 89, -36, 64, 121, 116, -101, -96, 48, -105, 30, -90, -60, -11, -11, -18, 103, 58, -9, -29, 51, -5, 109, -11, -91, -23, -37, -10, -106, -95, 2, 102, 126, 125, 52, 108, -69, -18, 78, -120, 108, 32, 17, -27, -62, -73, 64, -62, 54, -6, 120, 24, -45, 29, -49, -34, 39, -125, -9, 61, -41, 38, 9, -122, -37, -120, -28, 77, -117, -61, 66, 126, -112, -108, 124, -70, 58, -83, -61, -105, 42, 91, -11, -35, 21, -47, -101, -111, -116, 23};
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
    msg.setTimeStamp(0.3071318673335598);
    msg.setSource(37769U);
    msg.setSourceEntity(183U);
    msg.setDestination(24330U);
    msg.setDestinationEntity(42U);
    msg.req_id = 46211U;
    msg.ttl = 15549U;
    msg.destination.assign("FMXZYOJDCYGARISJYRAJMCJGUYRJIDESAOPVEQBKKZVWAIQNHLXGBGTHYBATPQVORCFZTWGARAISPNTMTHVOEOLQRDILWZFPTGEGETMNCLKHPRXW");
    const signed char tmp_msg_0[] = {-112, -61, -9, 2, 20, -78, -66, -53, 15, -97, 0, 44, 50, 48, -91, 41, -49, 56, 41, -36, 43, 45, -84, 113, 125, -30, 39, 98, -71, -15, -81, -117, 25, -96, 97};
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
    msg.setTimeStamp(0.03393396370828006);
    msg.setSource(51525U);
    msg.setSourceEntity(67U);
    msg.setDestination(15404U);
    msg.setDestinationEntity(244U);
    msg.req_id = 6377U;
    msg.status = 68U;
    msg.text.assign("QNQXDVAJWCMABZODVQPOAYPQTDPPSISKDWM");

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
    msg.setTimeStamp(0.6087796045041692);
    msg.setSource(56673U);
    msg.setSourceEntity(14U);
    msg.setDestination(42599U);
    msg.setDestinationEntity(147U);
    msg.req_id = 63769U;
    msg.status = 145U;
    msg.text.assign("TPMGFODDXPZIKKYBZTWUXCGRGGHXZMBZPKBJSQLHIECXILFAAXZUZSGLMUWMMNJBBATTVLCRBVVNRHAKWXJQREONDSTODIMJKRCUHGUWXYWEPDEURZKUOUCDOMGVDKYKIIYTOUVFG");

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
    msg.setTimeStamp(0.15860535915309315);
    msg.setSource(54742U);
    msg.setSourceEntity(106U);
    msg.setDestination(24962U);
    msg.setDestinationEntity(71U);
    msg.req_id = 18216U;
    msg.status = 62U;
    msg.text.assign("SMGFKTNBQCEDSANPPETKRMTOQFKLSEAOSJHEUFZGWOCMIUQFIGNKYNRWISGCADQSFIYHBCZULZNWCQRWAWFIZDTHYVJGVYJINWDMOHOJYNZLRYVRXOTJJTPSSA");

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
    msg.setTimeStamp(0.9238804620726416);
    msg.setSource(33166U);
    msg.setSourceEntity(216U);
    msg.setDestination(33836U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("TXCDFBRATFAZNDMNSHIMYOFMYHXNWSDJAPNAVHHQRGGQJYISVIOZQOEYCSTCLJEOKFLHJJIFNVFYLLCSXGIGNDTPZKRRRXRWGXRIVWHCRDGYOUBQBKFZTDPQEQMIGZNEJWATUWNIOFZFTILKYCPQLZDZETAPSLOPRPL");
    msg.links = 3065249220U;

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
    msg.setTimeStamp(0.590178647718467);
    msg.setSource(36981U);
    msg.setSourceEntity(146U);
    msg.setDestination(55668U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("CPAMRNKOGXKVLQKLZFVXDJHLCPBCUHERGAZRBMSQQSTEXWXQIHXMWETPXVQWKNYUAOODZBUQUWLNCGQGAIGZNPNFDSIQHMFOMXAEHUZTLTMKRRTBONAKVKYAPNBKSYWMHZIEZHLURLPJWWQYZSRHDDJCSPJRTLGPCBVCIBFIH");
    msg.links = 533005391U;

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
    msg.setTimeStamp(0.7764799324226757);
    msg.setSource(58590U);
    msg.setSourceEntity(55U);
    msg.setDestination(60541U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("BMUOGSNWIQNVTGJXODSCNDFCWOLIHRAWYFJVHNWXRNHXLFNBGUJTVVOZXUAFVFDSK");
    msg.links = 1546702435U;

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
    msg.setTimeStamp(0.08617514120866154);
    msg.setSource(34599U);
    msg.setSourceEntity(248U);
    msg.setDestination(39075U);
    msg.setDestinationEntity(157U);
    msg.groupname.assign("BCDEEWRJRMLICNANXTUADVMOHEPTCDOAQDLWRQAVOLZ");
    msg.action = 92U;
    msg.grouplist.assign("OGWHUPQOUSPYFPSPJEYDHKUSIKFJRJEQCJNSI");

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
    msg.setTimeStamp(0.2621752801016072);
    msg.setSource(41682U);
    msg.setSourceEntity(81U);
    msg.setDestination(42838U);
    msg.setDestinationEntity(67U);
    msg.groupname.assign("JDMQWKOGSCWDTPRKKNEFNYUCYTGAHZXADQJSXJMGCDXIQANQKECFUAIHKGOEPCSZMGFWVKOOTAUGMCZECMWEUBKIWZHLRPLKDSDEBLIWITHYSMLITJRVFBQW");
    msg.action = 88U;
    msg.grouplist.assign("INTAAQDBOKQMOBMFPXJSAXPXKUEMMUPRRHNVTNWVGVWFLICGTVXHPKHVKJXJJCCCBZALUSNSOZDPIBDRFUIFZMUCTDVKSMEGARRGQQNIMQTVIGODSBRLUT");

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
    msg.setTimeStamp(0.008489377909883355);
    msg.setSource(34424U);
    msg.setSourceEntity(147U);
    msg.setDestination(4966U);
    msg.setDestinationEntity(225U);
    msg.groupname.assign("BXCKXYFJPGGYZSXZKYLLZHGUWIFGBFIJBQIFRYUESQRTWREQQMKCOZPTRBKICXMXMNAHHHRTLLPAKHKBCMTTBUWODTGZDQTOOUDVUYFKWOTJJCX");
    msg.action = 27U;
    msg.grouplist.assign("ROLIUPSSAEXGATCVQVJDLPQFRRYBXRHLCJ");

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
    msg.setTimeStamp(0.0512614132061211);
    msg.setSource(8514U);
    msg.setSourceEntity(91U);
    msg.setDestination(26868U);
    msg.setDestinationEntity(175U);
    msg.value = 0.28567181365470196;
    msg.sys_src = 24412U;

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
    msg.setTimeStamp(0.9783528057823482);
    msg.setSource(55016U);
    msg.setSourceEntity(15U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(37U);
    msg.value = 0.33110403148936085;
    msg.sys_src = 22038U;

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
    msg.setTimeStamp(0.31976157529436944);
    msg.setSource(9218U);
    msg.setSourceEntity(120U);
    msg.setDestination(47261U);
    msg.setDestinationEntity(254U);
    msg.value = 0.6703954491384655;
    msg.sys_src = 49321U;

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
    msg.setTimeStamp(0.6882425428631649);
    msg.setSource(26371U);
    msg.setSourceEntity(105U);
    msg.setDestination(7080U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7107081087278677;
    msg.units = 179U;

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
    msg.setTimeStamp(0.850844172897257);
    msg.setSource(13458U);
    msg.setSourceEntity(150U);
    msg.setDestination(22501U);
    msg.setDestinationEntity(182U);
    msg.value = 0.2892444147151304;
    msg.units = 25U;

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
    msg.setTimeStamp(0.27635325659224597);
    msg.setSource(32044U);
    msg.setSourceEntity(155U);
    msg.setDestination(62806U);
    msg.setDestinationEntity(243U);
    msg.value = 0.12838205414373605;
    msg.units = 95U;

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
    msg.setTimeStamp(0.703824870933671);
    msg.setSource(39438U);
    msg.setSourceEntity(192U);
    msg.setDestination(10482U);
    msg.setDestinationEntity(58U);
    msg.base_lat = 0.4326069421308413;
    msg.base_lon = 0.1596072501075385;
    msg.base_time = 0.7691262294103061;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 12941U;
    tmp_msg_0.priority = -42;
    tmp_msg_0.x = 13647;
    tmp_msg_0.y = -25557;
    tmp_msg_0.z = -2053;
    tmp_msg_0.t = -5942;
    IMC::TelemetryMsg tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 129U;
    tmp_tmp_msg_0_0.req_id = 3128599989U;
    tmp_tmp_msg_0_0.ttl = 36028U;
    tmp_tmp_msg_0_0.code = 28U;
    tmp_tmp_msg_0_0.destination.assign("MNLZWJSHCVZHEYUCQVREQGWHHPXOJEKGOVRENXOVSOPUWQIBZGSBEHVAASCKSNQSWQOAGTAGURUGRANDRDFVTMSXPYHBRJMNBURPUFXIQIOSHLLIPDERMLWNSFQUDKVTXWAOXFTTTVKTXKNJPOLNIMUIBAJCYVKFLJBIINHXIPYWYZXCIADYLVDXOGNKBUWZECBMGQMMCOY");
    tmp_tmp_msg_0_0.source.assign("WMNDWPEQJBHHBDUTLHCWYCLVMYUXDJMDZZAEZYCKSATUONICILBRWEZOAVNMMIOKPYMABAUEHHEINSZJGQQPMOTTQOFXLXSNSWROPRHKFCJGRSJYYNMVQDGXKGVSWLQ");
    tmp_tmp_msg_0_0.acknowledge = 101U;
    tmp_tmp_msg_0_0.status = 223U;
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {-33, 19, 29, -114, 20, -71, 42, 95, -63, 98, 106, 76, -49, 101, 70, -48, 108, 90, -60, -34, -58, 21, 93, -104, 55, 82, -11, 0, 9, 4, 54, -99, 15, 52, -88, 109, 17, 52, 21, 18, 74, 16, -121, 85, 112, -117, -27, -54, 58, -51, 40, -99, 88, -19, -74, -111, 48, 119, 51, 16, -112, 2, -124, 8, 69, 125, 125, -22, 79, -69, -4, 5, 63, -115, 95, -67, -55, 76, 60, -52, 122, -41, 121, -65, 74, 81, -73, -119, -20, -20, 67, -21, -25, -102, -56, -66, -112, 9, 17, 94, -84, 26, 115, -10, -80, -127, 27, -56, 10, 114, -84, 82, 9, 124, 123, -126, 86, -56, 38, -23, 3, 91, -81, -83, 88, 118, -61, 22, -127, -82, 76, 126, -14, -79, 41, 23, 3, -29, -86};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.8335470735144025);
    msg.setSource(38593U);
    msg.setSourceEntity(227U);
    msg.setDestination(52146U);
    msg.setDestinationEntity(34U);
    msg.base_lat = 0.28508430375042026;
    msg.base_lon = 0.978576012580264;
    msg.base_time = 0.02762864034595547;

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
    msg.setTimeStamp(0.2849419950508879);
    msg.setSource(33821U);
    msg.setSourceEntity(201U);
    msg.setDestination(17669U);
    msg.setDestinationEntity(166U);
    msg.base_lat = 0.15624833470048882;
    msg.base_lon = 0.1973193177723701;
    msg.base_time = 0.6868234810772477;

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
    msg.setTimeStamp(0.619477322285906);
    msg.setSource(48026U);
    msg.setSourceEntity(191U);
    msg.setDestination(14719U);
    msg.setDestinationEntity(97U);
    msg.base_lat = 0.41078450347987483;
    msg.base_lon = 0.6100687681164829;
    msg.base_time = 0.0560802043119778;
    const signed char tmp_msg_0[] = {-88, 78, -60, -25, -79, 119, 20, 53, 84, 83, 110, 54, -67, 8, 105, 28, 62, 109, 94, -108, -7, 103, -122, -78, 76, -102, 68, -27, -11, 57, 99, -30, -29, 13, 51, -36, -14, -105, 39, -93, -72, 9, -113, -83, -18, -76, 13, 96, 122, -5, 15, 28, 63};
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
    msg.setTimeStamp(0.4853433720814394);
    msg.setSource(40306U);
    msg.setSourceEntity(233U);
    msg.setDestination(24970U);
    msg.setDestinationEntity(165U);
    msg.base_lat = 0.9989897014203927;
    msg.base_lon = 0.44278834272677303;
    msg.base_time = 0.9783544028791945;
    const signed char tmp_msg_0[] = {69, 61, -121, -114, 40, 122, -115, 31, 11, -107, 71, 38, 103, 114, -70, -78, -116, -2, -63, -103, -55, -75, 71, -18, -65, -124, 74, -81, 107, -120, 29, -13, -84, 7, -110, -56, 113, 95, 33, 40, 117, 92, 27, 113, -105, -44, 37, -98, 20, -126, -12, 50, -53, -91, -55, -58, -97, 31, 93, -23, 104, 32, 104, 24, -10, -42, 3, -22, -71, -80, -13, -14, -13, -77, -1, -87, -126, -19, 80, -107, 97, 112, 98, -30, 100, 117, 28, 92, 126, 123, -119, -63, -122, 50, 88, 13};
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
    msg.setTimeStamp(0.044014248188660954);
    msg.setSource(23314U);
    msg.setSourceEntity(229U);
    msg.setDestination(36444U);
    msg.setDestinationEntity(240U);
    msg.base_lat = 0.09435138513646335;
    msg.base_lon = 0.8563106151255035;
    msg.base_time = 0.6404796416184885;
    const signed char tmp_msg_0[] = {-55, -20, -96, -61, 4, 26, -42, -24, -30, 49, 88, 46, 31, -66, 51, 100, -61, -31, -44, 80, 48, 61, 97, 16, 118, 108, 122, -40, 64, 92, -94, 120, 68, 68, 29, 71, -123, 54, 59, 17, -26, -33, -44, -80, 117, 114, 118, 27, 4, 76, -97, 45, -27, -23, -74, 118, -53, -37, -125, -96, -61, -93, -31, -54, -15, -31, 29, 97, 23, -66, 11, 6, 57, 29, -35, -5, 98, 47, -22, 46, 38, 61, -59, 98, -46, -113, -85, -50, 57, 19, 6, -85, -19, 77, -83, 62, -10, -117, -8, 101, -95, -84, 88, 28, 112, -27, 45, 29, -86, 108, 56, 97, 69, -37, -20, 68, 123, -92, 43, -115, 72, -127, 8, 80, 86, -127, 7, -8, -112, -117, 27, 118, 8, 70, 57, -44, -71, -124, -9, 38, 8, 36, 24, -110, 6, -125, 29, 4, 105, -65, -23, 116, 52, -21, -88, -15, -95, 114, -23, -11, -112, 36, 104, 78, 57, -28, 120, -97, -45, -32, 37, 26, 105, -38, 12, -126, -50, 108, -35, 72, 23, 50, 103, 59, -47, 55, -122, -86, 105, -91, 45, -16, -77, 55, 46, -61, -45, 109, 79};
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
    msg.setTimeStamp(0.24551280037208278);
    msg.setSource(23175U);
    msg.setSourceEntity(56U);
    msg.setDestination(33074U);
    msg.setDestinationEntity(35U);
    msg.sys_id = 6873U;
    msg.priority = -80;
    msg.x = 16485;
    msg.y = -1074;
    msg.z = 32007;
    msg.t = -5571;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 152U;
    tmp_msg_0.period = 543011979U;
    tmp_msg_0.duty_cycle = 979949902U;
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
    msg.setTimeStamp(0.5488199418120117);
    msg.setSource(63702U);
    msg.setSourceEntity(208U);
    msg.setDestination(42663U);
    msg.setDestinationEntity(189U);
    msg.sys_id = 6615U;
    msg.priority = 46;
    msg.x = 13989;
    msg.y = 1171;
    msg.z = 9325;
    msg.t = -3891;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 163U;
    tmp_msg_0.entities.assign("LGJBTKAZRDXZWBJWCKNCOTMMJADFQALBUOGZMZYQTVXROJRXZOBMEJYMWUQSIOHPACTUYRPDKFUJZWEQRKXJVVEPAXSIQCJKBSKGIUAMCNSCHEVTPEUSATNYUSZSVWDOAADQFEHFXRQYLRPGMMNEHWNNT");
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
    msg.setTimeStamp(0.5902155672934516);
    msg.setSource(47723U);
    msg.setSourceEntity(175U);
    msg.setDestination(42640U);
    msg.setDestinationEntity(173U);
    msg.sys_id = 23241U;
    msg.priority = -57;
    msg.x = 4138;
    msg.y = -16945;
    msg.z = 2398;
    msg.t = 23047;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 60771U;
    tmp_msg_0.x = 0.2594454518078244;
    tmp_msg_0.y = 0.982052815212197;
    tmp_msg_0.z = 0.1476716722000334;
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
    msg.setTimeStamp(0.8579942161795059);
    msg.setSource(50695U);
    msg.setSourceEntity(11U);
    msg.setDestination(27625U);
    msg.setDestinationEntity(106U);
    msg.req_id = 39670U;
    msg.type = 207U;
    msg.max_size = 4336U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9671598810345498;
    tmp_msg_0.base_lon = 0.3539044559132961;
    tmp_msg_0.base_time = 0.2997810227169124;
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
    msg.setTimeStamp(0.18857072243277928);
    msg.setSource(22181U);
    msg.setSourceEntity(116U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(128U);
    msg.req_id = 48100U;
    msg.type = 21U;
    msg.max_size = 37359U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.05060202232068112;
    tmp_msg_0.base_lon = 0.3262820370594641;
    tmp_msg_0.base_time = 0.6948981787469649;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 121U;
    tmp_tmp_msg_0_0.priority = -31;
    tmp_tmp_msg_0_0.x = 13391;
    tmp_tmp_msg_0_0.y = -23631;
    tmp_tmp_msg_0_0.z = -32683;
    tmp_tmp_msg_0_0.t = -14337;
    IMC::HistoricDataQuery tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 31035U;
    tmp_tmp_tmp_msg_0_0_0.type = 87U;
    tmp_tmp_tmp_msg_0_0_0.max_size = 55920U;
    IMC::HistoricData tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.base_lat = 0.06462981546004676;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.base_lon = 0.5083075423839448;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.base_time = 0.1707397046369321;
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
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
    msg.setTimeStamp(0.613984557407353);
    msg.setSource(48620U);
    msg.setSourceEntity(3U);
    msg.setDestination(25146U);
    msg.setDestinationEntity(200U);
    msg.req_id = 6070U;
    msg.type = 177U;
    msg.max_size = 56772U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.47091880054816704;
    tmp_msg_0.base_lon = 0.45084208691095995;
    tmp_msg_0.base_time = 0.4264783189885323;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 52423U;
    tmp_tmp_msg_0_0.destination = 48135U;
    tmp_tmp_msg_0_0.timeout = 0.2762812018449241;
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6495576591492938;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.09303700099684187;
    tmp_tmp_tmp_msg_0_0_0.z = 0.4147315987993828;
    tmp_tmp_tmp_msg_0_0_0.z_units = 110U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.8397560567878777;
    tmp_tmp_tmp_msg_0_0_0.duration = 60299U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6958896066334238;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 84U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 60366U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 56680U;
    tmp_tmp_tmp_msg_0_0_0.flags = 242U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VGWYPAFBZOWNAHIYYFHHXNTWVWXCUQBPQIYMDXQNBURTLRCVBXSZNQCTNGTHVRIRFOLOMIZZGKAPWGFNDPPZZLFCBPMMEEJKXBWLHSTVLRKPF");
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
    msg.setTimeStamp(0.6066403191629752);
    msg.setSource(61445U);
    msg.setSourceEntity(58U);
    msg.setDestination(17614U);
    msg.setDestinationEntity(178U);
    msg.original_source = 38516U;
    msg.destination = 13321U;
    msg.timeout = 0.20990232258662012;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.01400827480023692;
    tmp_msg_0.x = 0.9016855512838247;
    tmp_msg_0.y = 0.6682269165343312;
    tmp_msg_0.z = 0.6988801062971493;
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
    msg.setTimeStamp(0.7381727605543079);
    msg.setSource(17361U);
    msg.setSourceEntity(98U);
    msg.setDestination(50807U);
    msg.setDestinationEntity(159U);
    msg.original_source = 43579U;
    msg.destination = 64839U;
    msg.timeout = 0.5595367679813482;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("EGAYVVFXFQMTUZTMCWMKDGKKIRPJACYVNRQVWASJJKUDYXSPNYPSHIBOYHASFWXZDWLCDHZQPN");
    tmp_msg_0.service_type = 199U;
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
    msg.setTimeStamp(0.1004375989049685);
    msg.setSource(59343U);
    msg.setSourceEntity(156U);
    msg.setDestination(20224U);
    msg.setDestinationEntity(160U);
    msg.original_source = 37127U;
    msg.destination = 49309U;
    msg.timeout = 0.17799333612220836;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("UIUWFHVHPPLLZKEUGJETUMMKXGEFCXQQOSUBEVYDWITTBLTNLPTEDDCOEWYSVVLDYYYTQFQFSMYZFBRQPBHGVRAMDDHUPSAKEBFVGVHIHJQVACSFRMIISAOHRSAMHUBNTOJLUHSAXNWJQNGCHCFGWSZJOOUNKYIEIARGTXZDZVBLFXJYOIVBWOWLKXPNKEADWNMYCWQNLCPNFXRMX");
    tmp_msg_0.type = 171U;
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
    msg.setTimeStamp(0.009569143980123873);
    msg.setSource(32867U);
    msg.setSourceEntity(186U);
    msg.setDestination(11647U);
    msg.setDestinationEntity(113U);
    msg.type = 153U;
    msg.comm_interface = 60247U;
    msg.model = 41460U;
    msg.list.assign("ANMJBIVPECWXVEXZWCVUJMGDGWQRKNLHIETOEEPDCDDTCICOMVAMLMDQKPMNDWTILSLBLSBRQLHFTHAZGONFIRKKCKPWPJYSSLJOK");

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
    msg.setTimeStamp(0.04968042473827272);
    msg.setSource(27218U);
    msg.setSourceEntity(53U);
    msg.setDestination(5795U);
    msg.setDestinationEntity(152U);
    msg.type = 3U;
    msg.comm_interface = 44919U;
    msg.model = 43264U;
    msg.list.assign("EMLWXCBEWHWASSXSLPBWICODIZCUDDBEPMROEKWUBJXLGGRSISGGENVG");

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
    msg.setTimeStamp(0.6115194729330877);
    msg.setSource(4062U);
    msg.setSourceEntity(166U);
    msg.setDestination(92U);
    msg.setDestinationEntity(225U);
    msg.type = 60U;
    msg.comm_interface = 38521U;
    msg.model = 61761U;
    msg.list.assign("LOSYHZNGCANGYQBDJBYQQYLZRLYMITJBIOGLLROWBREZSAIFIDAXCJXO");

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
    msg.setTimeStamp(0.16670454020194947);
    msg.setSource(29663U);
    msg.setSourceEntity(115U);
    msg.setDestination(1567U);
    msg.setDestinationEntity(249U);
    msg.type = 26U;
    msg.req_id = 3930614746U;
    msg.ttl = 13237U;
    msg.code = 210U;
    msg.destination.assign("CHKJPMMNERUOQZZUCKPJEEJJUDOUNLQLUAWUWNVJFMYLKLJSQWYPFSZSFXRCEWFACIYGILUQGPD");
    msg.source.assign("ZAULTHKUPUTCCTMSMXDDBXNFNYYBAOKRVURAYJGANFZF");
    msg.acknowledge = 87U;
    msg.status = 122U;
    const signed char tmp_msg_0[] = {-99, 28, 32, -12, 87, 112, 40, 87, 83, -128, -37, 39, -62, -58, 38, -22, -66, 125, -126, -115, 38, -53, 30, 31, 60, -71, 13, -113, -12, -7, -56, 83, 24, 56, -89, 75, 13, -76, -99, 96, -30, 52, 78, -35, 13, -35, -71, 84, -4, -15, 111, -28, -86, -41, -21, 108, -8, 113, 99, 79, 117, -113, 98, -124, -14, -75, -86, -107, 35, -103, 95, -47, 17, -98, -36, 85, 55, 1, 14, 6, -73, 3, 91, 17, -32, 23, 99, -49, -29, -39, -89, -11, 76, 102, -11, -53, -99, 19, 64, -27, 31, 23, -38, 1, -80, 74, -13, -59, -119, 1, -14, -37, 92, -4, 2, 64, -69, 15, -75, 17, 106, 1, -103, 83, 110, -43, 52, 29, 22, -76, -38, -95, 85, -93, -41, 10, 43, 120, -43, 80, -126, -97, -119, -79, 48, 47, -89, 50, 91, 45, -72, 52, -88};
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
    msg.setTimeStamp(0.5133349740689515);
    msg.setSource(15775U);
    msg.setSourceEntity(50U);
    msg.setDestination(24094U);
    msg.setDestinationEntity(147U);
    msg.type = 146U;
    msg.req_id = 3140821021U;
    msg.ttl = 9075U;
    msg.code = 65U;
    msg.destination.assign("UVBXJGOMNRSBRXTTGZGCQAAMAKJPEFSNONWVTCVSJELLUFORANWVECOTUTHSJDVDOXBYXMTBBTJYQBMLPWVGSHLZ");
    msg.source.assign("OOSLUSFAIDWSHQQCRETKWIALTJHMPLHKYADJHLCVFAOUOGKVYPZUAMJPNVNTEIQBHZMWGULRHUMBPKIPFBTRLGSDBRFXWXLRZIEKQYRJXQNIDSZCOYRABETEEEPJSCBWGDVIWMDXBVXMQGTZHFMCBZRVUUJXDNYGOOPGUFGFKDZLWTQYVVPTJYXESUDQNMOHPEEPNHYWQGQHRNVSBLZC");
    msg.acknowledge = 175U;
    msg.status = 193U;
    const signed char tmp_msg_0[] = {-20, -78, 73, 35, -24, 96, -51, -17, 65, -56, -9, -33, -89, 87, 10, 42, 49, -5, -32, -113, -46, 95, 58, -97, -91, -127, -114, -111, 109, -10, 81, -125, -43, -8, -99, -42, 19, 2, -43, -25, 39, -36, -128, -104, 113, 70, 117, 41, 56, 42, 32, -51, 90, 121, -6, 22, 85, 74, 122, 54, -81, 44, -64, 2, -14, 36, -107, 62, -116, -44, -24, -93, -62, -116, -4, 106, -111, 70, -83, 19, 18, 107, -57, -39, 87, -11, 64, 112, 58, -15, -13, -49, -82, 59, -72, 98, -6, -79, -70, -63, -85, -112, -37, -34, 63, 122, 37, -107, 32, 76, -17, -49, 13, 88, 37, 123, 60, -84, 124, -4, -117, -111, -45, 58, -73, -34, -43, -8, -46, 94, 51, -114, 26, 69, 36, -81, -64, 122, 40, -40, 112, 67, 104, 20, 91, -122, -86, 45, -25, -118, -123, -50, 41, -70, -50, 17, -124, 50, -15, -114, 81, -80, -78, -67, 17, 122, 39, -6, -52, 9, 41, -73, -57, -125, 76, -102, -121, 97, -55, 105, 68, -104, 30, -72, -76, 96, -101, 29, 70, 80, 0, -20, -77, -50, -47, 49, 71, 56, -69, 71, -37, 23, 31, 42, 41, -65, 34, 81, -104, -89, 100, -14, -9, -29, -45, -121, 91, 11, 60, -21, -57, 116, -107, -115, -112, 98, -7, -30, 19};
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
    msg.setTimeStamp(0.7984014246903891);
    msg.setSource(38518U);
    msg.setSourceEntity(220U);
    msg.setDestination(26021U);
    msg.setDestinationEntity(250U);
    msg.type = 105U;
    msg.req_id = 3611162207U;
    msg.ttl = 25725U;
    msg.code = 35U;
    msg.destination.assign("TGQOFJUJXDEACHQHCZTVEFREVMOFOFFVCRTGUZKWKMWCXQNMOWXCQEYPYILGDNPGBICLNAQZEJAGEIYPWPYRAJSUXQUKCIMTJZSSHBFIXEYNATCNDBEKZFHMRILIUYLNB");
    msg.source.assign("NPDGYSHMZTKNVWNWWJITBSGLXKGDLEFJSLQVOIOJHHCEJDGQYEMXUIUXBAODZPQUUSCCMBAJPGZZLBIOWOEGJIVDDTKMQVVAZGPXPMBFJRPTRKXHUFEFCAWHYCYWWOZAUXDTTLPRRBRKQPZYUMZHGLOMBEWWCPFESSAAAYFFQKHTWIYIBQIOIKXLHZVAURCKSFZYKVOXFLCBDQYRGKLTEIUNJTSSRNCNNOCJNL");
    msg.acknowledge = 203U;
    msg.status = 99U;
    const signed char tmp_msg_0[] = {-17, -20, 81, -127, -81, -117, 102, -35, -117, 4, -106, -62, -69, -108, 121, 106, 9, -113, -48, 31, 78, 103, -37, 22, 86, -79, -22, -95, -127, 85, -13, -118, -19, 27, 71, 15, 48, -49, 0, 23, 108, 101, 25, -35, 46, 7, -43, -22, -74, -19, -59, -23, 119, -115, 66, 30, -55, 62, -63, 78, 25, -14, -23, -62, 78, 37, -121, -101, 11, 97, -82, 15, -94, 8, 32, 28, 83, 92, -68, -123, 40, -36, 111, 117, 48, -84, 37, 0, -124, 5, 47, -66, 102, 79, -17, -52, 43, -53, 25, 55, 82, -52, -105, 15, -21, -65, -126, -71, -73, 0, -104, 73, 82, 92, -18, -92, 19, -118, 106, 72, -79, -3, -29, -117, 117, 83, -111, 115, 14, -70, 4, -124, 42, -81, 49, -9, -106, -103, 104, 5, 35, -109, 50, -31, 36, -11, -106, -93, 72, 125, 119, -118, -81, 121, -124, 22, -113, 6, -105, -31, -33, -7, -28, -30, 23, -40, 70, 24, 54, -3, 0, -25, 94, -78, 15, -55, -100, 36, -19, -5, 75, 15, -48, 48, 73, 82, -33, 124, 23, -84, 11, 105, -11, -5, 50, 111, -60, 39, 91, -16, 47, 4, 98, -6, 73, -18, 13, 20, 9, 107, 113, 7, -121, -31, -107, 10, -7, 63, -68, -69, 66, 109, -29, -36, -48, 51, 4, -106, 121, -71, 19, 104, 43, 116, 0, -55, 32, 55, -92, -50, -124, -77, -124, 89, 87, 36};
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
    msg.setTimeStamp(0.1880597226580457);
    msg.setSource(38148U);
    msg.setSourceEntity(246U);
    msg.setDestination(63855U);
    msg.setDestinationEntity(237U);
    msg.id = 253U;
    msg.range = 0.8569853622439726;

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
    msg.setTimeStamp(0.9390531544180155);
    msg.setSource(26087U);
    msg.setSourceEntity(6U);
    msg.setDestination(53682U);
    msg.setDestinationEntity(161U);
    msg.id = 171U;
    msg.range = 0.65182020253649;

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
    msg.setTimeStamp(0.44795341492634055);
    msg.setSource(15240U);
    msg.setSourceEntity(159U);
    msg.setDestination(58041U);
    msg.setDestinationEntity(50U);
    msg.id = 9U;
    msg.range = 0.8001253554396973;

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
    msg.setTimeStamp(0.6950107733840717);
    msg.setSource(33539U);
    msg.setSourceEntity(110U);
    msg.setDestination(11003U);
    msg.setDestinationEntity(147U);
    msg.beacon.assign("QMVTKJBSNIALCXOHCPHOEURBNTSRIRAD");
    msg.lat = 0.703756671443808;
    msg.lon = 0.11884755897858101;
    msg.depth = 0.6891243762996453;
    msg.query_channel = 170U;
    msg.reply_channel = 251U;
    msg.transponder_delay = 69U;

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
    msg.setTimeStamp(0.38034854664139883);
    msg.setSource(62385U);
    msg.setSourceEntity(1U);
    msg.setDestination(4704U);
    msg.setDestinationEntity(250U);
    msg.beacon.assign("VKBXADWHWLORDMFTHPMKQJYZXXUIHAGSINSPCZQLAELKUJBYBCQGGBYMNLBSYXCSVYZPWRS");
    msg.lat = 0.6939909084713907;
    msg.lon = 0.11350494332342664;
    msg.depth = 0.6116183339690147;
    msg.query_channel = 82U;
    msg.reply_channel = 223U;
    msg.transponder_delay = 213U;

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
    msg.setTimeStamp(0.3014519358069554);
    msg.setSource(3965U);
    msg.setSourceEntity(228U);
    msg.setDestination(4943U);
    msg.setDestinationEntity(163U);
    msg.beacon.assign("ADKOLRJSPYHONTMVAXDONBTLLFTKGKYTSYDJDYIKHIRPUAXDDFJDJYOGWGCNTVQAOAHKOMANKPPJAHQNSYFHQSRPCELYWML");
    msg.lat = 0.009068480343450758;
    msg.lon = 0.961411921483363;
    msg.depth = 0.7265073981058046;
    msg.query_channel = 14U;
    msg.reply_channel = 182U;
    msg.transponder_delay = 136U;

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
    msg.setTimeStamp(0.3796868673380491);
    msg.setSource(57473U);
    msg.setSourceEntity(111U);
    msg.setDestination(56957U);
    msg.setDestinationEntity(207U);
    msg.op = 214U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZGLIZHCGQZODSHNGFTRCUCEJRDMIAPKOUTSTRLHAOSKHTDMTBYLXUUHNFFKWSTXRQJOBAXHQEVMPFXWFMEJOLYNFGNCBQHAKVLIECENFIRIAXUNGTKDJMQPNZYLBDQCQLBVBDRSUKJXOPBSCULCSSEJAGGOHGGSMRKHYVKASEWZWQIXMDQRZFPDDLNWMIJRLDNPXVJWTVYAUAJXEIJPXTOQYYWTZVWKZCPVUVNPIKUZMMWEFYHPGZAVBYWRI");
    tmp_msg_0.lat = 0.8374733667833725;
    tmp_msg_0.lon = 0.018468248487686023;
    tmp_msg_0.depth = 0.8570648083162536;
    tmp_msg_0.query_channel = 216U;
    tmp_msg_0.reply_channel = 151U;
    tmp_msg_0.transponder_delay = 230U;
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
    msg.setTimeStamp(0.37247107660024226);
    msg.setSource(62426U);
    msg.setSourceEntity(211U);
    msg.setDestination(31335U);
    msg.setDestinationEntity(75U);
    msg.op = 177U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MALMIGAFYRIBBMUXAKZCOSLXEZTSFIGYNEBVGEDRTFCFGRHNUKGWDZHIBMSAOVHJPTSQVOLADQZWSOXYQDSFTDV");
    tmp_msg_0.lat = 0.7590965431780348;
    tmp_msg_0.lon = 0.9130548582075173;
    tmp_msg_0.depth = 0.8118566714678633;
    tmp_msg_0.query_channel = 50U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 233U;
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
    msg.setTimeStamp(0.32552374296938125);
    msg.setSource(16987U);
    msg.setSourceEntity(165U);
    msg.setDestination(17075U);
    msg.setDestinationEntity(207U);
    msg.op = 153U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZYNXPMDSKXWIHATBZUHOGODWNRTZTNFRXLXPNPABWTLVELWVGQLYJASCCGEBNWNIQNQQPSGOTJBHURZGMJTBXUXZSGJCZFZWVRQXYCHMSSFDAYCRDEFKKYHSIUMAADWTQQXKVKCTMGYIMFWCZA");
    tmp_msg_0.lat = 0.034105617052627046;
    tmp_msg_0.lon = 0.51323586355339;
    tmp_msg_0.depth = 0.29422799657481014;
    tmp_msg_0.query_channel = 169U;
    tmp_msg_0.reply_channel = 77U;
    tmp_msg_0.transponder_delay = 8U;
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
    msg.setTimeStamp(0.17055563944893015);
    msg.setSource(2300U);
    msg.setSourceEntity(73U);
    msg.setDestination(56541U);
    msg.setDestinationEntity(58U);
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 37214U;
    tmp_msg_0.sys_dst.assign("TBDEMPELSBHSRXBVSOPHDAOLVYLGAHYFOKOKUKDRCGMYF");
    tmp_msg_0.flags = 203U;
    const signed char tmp_tmp_msg_0_0[] = {-93, -106, -115, -118, 86, 114, -102, 112, -56, -86, -124, -120, 115, -98, -2, -20, 44, 72, 107, 2, -19, -10, 18, 46, -78, -34, 42, -56, -6, -75, 94, -20, -70, -74, -79, 24, 14, 14, -7, -6, 46, -35, -121, -70, 15, 29, 75, -109, -104, -7, 71, 67, -22, 122, 78, 106, 48, -24, 81, 116, -6, 71, 89, -92, 55, -44, 97, 15, -98, 66, 89, 40, 5, -2, -109, -106, 125, 72, -28, 34, 122, 92, 13, -29, 81, -39, 58, -58, 88, 30, 0, -91, -98, 37, 34, -36, 6, 87, -52, -4, -98, 51, -22, -23, -72, 116, 9, 39, 116, 59, 69, 14, 62, 17, -19, -1, 121, -112, 42, -7, 98, 122, 63, -30, -39, 97, 86, -12, -63, 35, -1, -44};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5398044767228556);
    msg.setSource(19182U);
    msg.setSourceEntity(19U);
    msg.setDestination(63406U);
    msg.setDestinationEntity(206U);
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.4388990436042157;
    tmp_msg_0.lon = 0.9278038816486675;
    tmp_msg_0.z = 0.31012091939275854;
    tmp_msg_0.z_units = 47U;
    tmp_msg_0.radius = 0.6917025367247218;
    tmp_msg_0.duration = 41556U;
    tmp_msg_0.speed = 0.2916347932811525;
    tmp_msg_0.speed_units = 213U;
    tmp_msg_0.custom.assign("IBSPRZRUPXCFYYFGTZHPAEPUOUQTVMLDSKACFUCLHDONJLDNIOFYMAKTFLTUYNMFCOBNXWRJUZQIZHCERJSXSQWBGHUIOPOBVPEKAKYXQHGRRBQMQKIIGWGGNMEYD");
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
    msg.setTimeStamp(0.8781017355516602);
    msg.setSource(38682U);
    msg.setSourceEntity(169U);
    msg.setDestination(65338U);
    msg.setDestinationEntity(115U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 69U;
    tmp_msg_0.list.assign("VTRQEWKMZWCPSSSOFBWGGWMEFUNRHETATBIQGVDIIAHNGFPMKTDRURMMNJRTUPUHJYECODLLSIHYCPXCDCYOUMNFHTPRJMWCYDFQLUJZQVUBLIBCGEYZPXOCVKKEAQBNOJGVTNQVSZCKQXRMYDZOM");
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
    msg.setTimeStamp(0.5789374068885028);
    msg.setSource(47319U);
    msg.setSourceEntity(1U);
    msg.setDestination(61019U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.45222257079619965;
    msg.lon = 0.9499019596945384;
    msg.depth = 0.9834731071778042;
    msg.sentence.assign("FECTTZPXWKVEIEFGVGFSAYBQOPRNITFHTOWXRVMXVTLDNJDUHMAZUWDMAOUKGDBMYPWWVQLAUQXTHDPESOUVKCODZZGUPTYUUQQJKQSYJQDEFBVVLHXGHKNWTMXAZ");
    msg.txtime = 0.6960974663631425;
    msg.modem_type.assign("LZGXBPZWNCCMQNTZXOGYAKADOJXVGVWMSMBEOGWPH");
    msg.sys_src.assign("GZBASNQLVOXVQDBFXKMXZNNJWCMEROTPGDIKSEPCEOFXGHYSOSIAWLPFCTTYYVBKDPBIMNGUFSJMHYRWMZXRKDNQKAAITLTFQCWIJTJZWZPXESWJJXOFNGAMKZROMHTJHRUICFVZGYNLAGHPKRUUCYPYZSGXVDQHBUQRGYCTGMYDWJLIAARFBOECNMJJXZSBDUYOMHOAHLEQEPVTPQLWREDISWFFLUUOLEU");
    msg.seq = 11949U;
    msg.sys_dst.assign("NBQMLDBBQQOVCHNBGHRKZQARYLGODCIOISGXEUSKHEUVJYOVPPTJBASDSXHPAHMZMSSWLUFIWKXTEWGCYDRVLCRAXHJBPONFPRAW");
    msg.flags = 114U;
    const signed char tmp_msg_0[] = {-117, -111, 31, 15, -120, -116, 26, -74, -56, 54, 76, -82, -24, 18, 11, -115, -62, 107, -11, -5, 10, -52, 41, -34, -111, 37, 5, -104, -66, -93, 10, 101, 126, 91, -42, 8, -64, -64, -28, -45, -106, -91, 79, 109, -17, -89, -65, -10, -33, -27, -36, 110, 102, 22, 91, -22, -126, 45, 100, -90, 98, -54, -91, 50, 58, -63, 76, 87, 53, 28, 124, 100, 8, 115, -79, 53, -123, 103, -45, -8, 47, -18, 32, 75, -49, -102, 89, -101, -53, -38, 87, 120, -95, 31, 7, -84, 124, -37, 106, -119, -60, 82, 24, 96, 78, 58, 81, -37, 93, 64, 109, 119, -23, -72, 69, -70, 87, 66, -77, -22, 95, 35, 1, -109, -83, 68, 93, -34, 37, 34, 61, -126, 38, 72, -98, -40, -61, 30, -20, 83, 121, -42, 60, -127, -66, 122, 15, 51, 49, 123, 33, 125, 38, -52, 9, 108, 117, -102, 40, 8, -84, -109, 120, 6, 54, -32, -66, -70, -37, -31, 44, 100, -114, -111, 48, 7, 124, -79, -2, 99, 106, -66, -123, -77, -14, -123, -29, 70, -23, -3};
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
    msg.setTimeStamp(0.6297772644151651);
    msg.setSource(36859U);
    msg.setSourceEntity(92U);
    msg.setDestination(36182U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.41995751670839476;
    msg.lon = 0.7023162227694719;
    msg.depth = 0.44249938831289604;
    msg.sentence.assign("YLVJNCHOBJMMZZUZQQQYYOOPPSXFEUEHRVWQPGIJSLUKGXGEBLCHGROPKSVWTCCRRCUEYSUCLDDFSEDCFFQXRLYZUFAJSPBITWTJZJQDBCAAMMBBWMLVONEAXYPP");
    msg.txtime = 0.3876870463486938;
    msg.modem_type.assign("UEQSLPSTTPTMADBWEBZIAPFAVDYUDXZUAERLUWIONGLXKCLYZIUKIJONLTRVTZRVNPWTOHWXYAIRKHYNOJLAUQCZVEHACZDMSRFGSCXUTFIQGXWTHVYZGJLHJZNMZYOKBQFCQMEYHVJEDTHXNOSKOQYYBJJRGDOSPNMVF");
    msg.sys_src.assign("YBNQEBQKBAATKCGLNEKGTFRREITBCIZTUZQEWZWZVXNKWMNIIGUFFDEGKUVPHDWQXULPLVDPTJZRTDFHKAHHAQXVHWMM");
    msg.seq = 55934U;
    msg.sys_dst.assign("ASAZETVMWBGOCWBPBXQEVEFEYRNKNUXRUMWEOJRCLKUZSFRVUYPVZUOOKKHIDQTJZFZJTRIBYBPX");
    msg.flags = 167U;
    const signed char tmp_msg_0[] = {-64, -95, 95, -6, -37, -75, -78, 22, -116, 6, 26, 40, -3, -53, -39, -41, 15, -100, -40, 21, 46, -47, 55, 119, -79, 94, -124, -2, 94, -117, -100, -72, 9, -62, 10, -35, 0, 42, -20, -13, 49, 67, -77, 12, -103, 58, 35, -6, 11, -81, 39, 31, -12, 77, -75, -115, 0, -99, 11, -99, -112, -107, -53, 88, -109, -86, 105, -125, -117, -8, 82, -93, 82, 40, -112, 52, 72, 113, 50, 72, -116, 50, 16, -10, 76, -24, 56, 27, -118, 92, -20, 58, 73, -61, -37, -111, -103, 92, 23, 30, 42, 40, 15, -105, 110, -7, -65, -29, 50, 35, -105, 58, 81, 70, -41, 77, -117, -30, -87, 30, 126, 39, -20, -83, 113, -100, 102, 56, -53, -125, 15, 83, -35, 4, 39, -113, 98, 9, -33, 79, -8, -24, -115, 77, -80, 100, 67, -77, -110, -73, 15, -109, 117, 38, 99, -31, 120, -98, 79, -105, -1, 40, -112};
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
    msg.setTimeStamp(0.139853945462585);
    msg.setSource(44677U);
    msg.setSourceEntity(131U);
    msg.setDestination(41719U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.018245304629906145;
    msg.lon = 0.17679239755485499;
    msg.depth = 0.1571891709977432;
    msg.sentence.assign("OZHFKMFNJJTVFFKCKQFDANHKMOKIWXDRJQGEXPFQWDADQBTBXIVYABPEOSIZFWPXFIDXTLIZIWBHLYNCRRGTOAXDKTPQNEHGLSVSRVJCSSHMAJYXVBGSERVYCEZFCTHJOOTQPAWEIUZEADDPPWJBOZZOCHGNSGMULWIYLLNYVZAWMYJUADWQNHOEYBQNHZUMBVVSKZLUKFUKUORLGPJGAYMVBSLJX");
    msg.txtime = 0.18829589342873088;
    msg.modem_type.assign("RHDHOSCLBEQBOXTABEKPVVMNSUICVQTSTKPIOWUDRUHOUDRXKTEGURYFAYHKXYNOGPDQ");
    msg.sys_src.assign("DOAGHRYZXYJNRLSJJZNXOASUNZGWKKVZRGBMHNBBOFBAPCQQYREVMUVBWXUIIFJWERDVWVEQXIOIFJXHFMDDICAAVOCRHKFMJDGKYKLUWDDLXPAQFELBHMNAZLDWLGNNBSICGKILJPFPGZSEHCYQTBETOCSOPWYMUIJJQZTHYHCKPBNXZUUNLUSPWDCPPTTXEEKSEGIQFHSYRWGOMEMACQZTTMTAVO");
    msg.seq = 58255U;
    msg.sys_dst.assign("ATDVNUGIIKGXJFPTEUWJJDQPVRNTDRAWIJXTCOWEEPAEWGMYXSRLAHCQDUFVYADGNHYMCOZCBKMMUIIPNBYMOZQEUOHEOFOFBNCEQIIFKFTNVSLHLBUFKXMLVQICCWGQCTGSWYKSOZLULKWYTKGEYJ");
    msg.flags = 115U;
    const signed char tmp_msg_0[] = {-126, 35, 36, 101, 73, -60, 92, -36, 93, 99, 34, 104, -96, -110, -126, 56, -113, -32, 77, -121, 67, -86, 66, 59, -122, 22, 25, 86, 77, 45, 44, 12, 37, 120, -60, -13, -80, -105, 93, -63, 4, -12, 109, -107, -81, 38, 84, 110, -47, -42, 99, 84, -106, 43, -53, -47, -67, -74, -120, -127, -90, 87, -54, -62, 45, -56, 87, -111, -120, 106, 49, -49, 20, -71, 57, 26, -100, 36, -58, -16, -15, -120, -59, 62, -113, 16, 28, -56, 118, -71, -38, -65, 8, 100, 30, -38, 66, 92, 7, 34, 115, -3, -10, 77, 10, 69, -51, -100, 87, 69, 7, 112, 103, 31, -109, 4, -127, -87, 125, 88, 46, -28, -73, -34, 96, -6, -108, -60, 81, 0, -118, -104, 108, -4, -91, -121, -75, 118, 126, 47, 72, -49, 125, 117, -64, -90, 6};
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
    msg.setTimeStamp(0.5286918151180159);
    msg.setSource(1511U);
    msg.setSourceEntity(161U);
    msg.setDestination(7455U);
    msg.setDestinationEntity(149U);
    msg.op = 122U;
    msg.system.assign("USXADFGNOJWOIKXEJLMZJOQQOQVLJEIPZXNEYDFCSSBACLYCYTSXXVZAVMVIXGRBUBQKIHCJNBK");
    msg.range = 0.14881083941047824;
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("JHLMSPQESPYCZYWIMYMHTJRTGLDJIBAVVYBRWNZRGDUEFOJTMXIJXFUWQAHIDMUXBVCUUKLXFDQRBDGCOENMYGBHWOBNTNOBJHGSMEZHQZAEFPOVBXYSGDZADFEGYPWTVXHOUCCFIIWLUGFBUQPEYZSNGPJPKDYDKCSCTBAMNHFNVLKCJATWRPQT");
    tmp_msg_0.value = 126U;
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
    msg.setTimeStamp(0.8956534004624047);
    msg.setSource(61256U);
    msg.setSourceEntity(212U);
    msg.setDestination(52112U);
    msg.setDestinationEntity(148U);
    msg.op = 225U;
    msg.system.assign("ZOWPLCFXNAHJXFIJDUUZSRYIOZQOXAAJSIIUGCBKJIPHVMTBPXDJHKYTREGBECYRCQDXHHFLWMMJMWKEOWDSNYONEFUCAHPUNPACVGRJGTZIJGZNPXIVXEZCHSMZFADSKOPSEYHBZWPYLBRCPUMKRBVVUONNNYKPGKTBMVJFIFLRGWVELLRMOZEMLLIFBCTQDUWFCRQWSVAUSBWLQY");
    msg.range = 0.8474401058823962;
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 13U;
    tmp_msg_0.speed = 45756U;
    const signed char tmp_tmp_msg_0_0[] = {0, 73, 57, 39, -113, 12, 1, -18, -110, -74, 12, -42, -40, -34, -121, -63, -17, 11, 50, -116, 52, 55, 120, -64, 69, 93, 52, -64, 88, -97, -19, 0, 70, 64, 97, 85, 21, 21, -60, 120, 65, 18, 34, 48, 64, 69, 2, 97, -71, -77, 106, -63, -119, 93, 95, -128, 38, 95, 71, -14, -71, -74, 5, 37, 114, -4, -107, 12, 73, -26, 62, 80, 74, -73, -79, 103, 5, 48, -50, 111, 122, -84, -74, -106, -3, 116, -37, 95, -22, 107, -54, -25, 65, -98, 94, 93, -33, 104, 67, -38, -36, 9, 103, -81, 21, 102, -39, -104, 104, 57, 94, 56, -68, 81, -102, 53, 15, 125, 52, -101, 80, 79, -107, 68, 26, 122, 1, 23, 52, -2, 108, 68, -27, -107, 124, 112, -94, -6, -107};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.22210463361294652);
    msg.setSource(29516U);
    msg.setSourceEntity(15U);
    msg.setDestination(47659U);
    msg.setDestinationEntity(154U);
    msg.op = 150U;
    msg.system.assign("XGWPQUOMSQIKOQZQLYPERUOOCWARVHESEIFMAGEJTMFRORGBSHWKLVCBBOZNXTLDCXMFJQGPDZDRTUOB");
    msg.range = 0.49160957191530574;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.11962596023795868;
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
    msg.setTimeStamp(0.12185503258013297);
    msg.setSource(16089U);
    msg.setSourceEntity(24U);
    msg.setDestination(58051U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.8265218249035747);
    msg.setSource(30763U);
    msg.setSourceEntity(138U);
    msg.setDestination(15038U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.10027521173461273);
    msg.setSource(3805U);
    msg.setSourceEntity(220U);
    msg.setDestination(15284U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.787896543180983);
    msg.setSource(52306U);
    msg.setSourceEntity(19U);
    msg.setDestination(63840U);
    msg.setDestinationEntity(143U);
    msg.list.assign("IKBWDBVRJLSHWCZNFFHIOZPOAZMMOBVCJYHUGKFZIHJDWYEZWRQASJRFDTRBYIGUOBLTJX");

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
    msg.setTimeStamp(0.39560821865761564);
    msg.setSource(26767U);
    msg.setSourceEntity(253U);
    msg.setDestination(18574U);
    msg.setDestinationEntity(207U);
    msg.list.assign("BCAVPGNPXRILJZCXEUAYILCFEKXDBWECMYDODYXCB");

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
    msg.setTimeStamp(0.9241697601126171);
    msg.setSource(24530U);
    msg.setSourceEntity(241U);
    msg.setDestination(31383U);
    msg.setDestinationEntity(132U);
    msg.list.assign("ICBNGUXMBWGRKTWLRINYDNUSVPWGAEZJCDYKRJMWBSONTEYCGCYICRPLFJGYWPVURCPAKVMHDETDHRDANXHOVUIEIVOSUYEXXTOBRPWCSSILJABXNMFBVJSLPQSZHKVZFNLMOOZXLTDIUMVFFIADQADBDHOJFFOEHZQYPMMWUPZYJGIQQVGMNLEUWLZFJSABRQFQTKIXCPAQTUKMAFQLONXBJTD");

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
    msg.setTimeStamp(0.3350507229838424);
    msg.setSource(39943U);
    msg.setSourceEntity(194U);
    msg.setDestination(16936U);
    msg.setDestinationEntity(226U);
    msg.peer.assign("OLBHQYXNMBSXMBPLSVYKOUQIWWVFXVGFWJBNBERYIVMOKQGAUWCQIGFNPCXMPQGDKADCIUFGNHMHCKEIKTPRLTOUSRKYGZNYWJCTLHJWYJKBEZIKLSXUPYWRWFNPMMZEILCQZJBRKJXBDDTEQYHFRNCHLAGXODWATAQPOZISASLNVCJDURDUZTEIAXUDRLTZQPIHQOOFSTMXRDSZJZEWMBPVLYFOGEUODVMTYZ");
    msg.rssi = 0.4142007784626601;
    msg.integrity = 44143U;

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
    msg.setTimeStamp(0.19700549839759451);
    msg.setSource(29604U);
    msg.setSourceEntity(76U);
    msg.setDestination(25267U);
    msg.setDestinationEntity(140U);
    msg.peer.assign("BGXBHETRKDFAWSGPXLMCHUONHYHCIJRFLOFKYPKDJCBSYFEGMORNFEEUNYIWMGOTSLLNAUNXZCLRQOTMBQQYVEQPAZPVXI");
    msg.rssi = 0.9262377994953735;
    msg.integrity = 1893U;

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
    msg.setTimeStamp(0.6794139249008024);
    msg.setSource(41506U);
    msg.setSourceEntity(43U);
    msg.setDestination(49520U);
    msg.setDestinationEntity(103U);
    msg.peer.assign("FGYIRLGRWLJJPOJOVQDLQKGSYALSTSQTIMQCOAJDQGEPHYHATNIDEICOCSEMULZTXRDFHNVWQXUKLAS");
    msg.rssi = 0.4924922621974256;
    msg.integrity = 7894U;

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
    msg.setTimeStamp(0.302826557441375);
    msg.setSource(61232U);
    msg.setSourceEntity(193U);
    msg.setDestination(29279U);
    msg.setDestinationEntity(165U);
    msg.req_id = 29014U;
    msg.destination.assign("ZOHMOXPQVIDXGJXXICWBUGDQTDWDQZPVFUUNU");
    msg.timeout = 0.7259824408374722;
    msg.range = 0.3252013937836924;
    msg.type = 201U;
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.2563183434868008);
    msg.setSource(6037U);
    msg.setSourceEntity(205U);
    msg.setDestination(65153U);
    msg.setDestinationEntity(150U);
    msg.req_id = 56365U;
    msg.destination.assign("SYXRXLDHOQFDRBNQFCBQPXWJVXZIIFCRZJPARGFCSBVHILBUZORHCJOQLSIGATLGAUVIBBRGLPMKSBAYMHCKBVZWYZ");
    msg.timeout = 0.6493439181793591;
    msg.range = 0.6530498084829548;
    msg.type = 35U;
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.26117364711295254);
    msg.setSource(52382U);
    msg.setSourceEntity(199U);
    msg.setDestination(58091U);
    msg.setDestinationEntity(21U);
    msg.req_id = 36824U;
    msg.destination.assign("VCKRGRLSROOPEOZONABTEHXCAEUVUEZJKBWWKCVYINPTXQPLQWNAKXTOGSFGAXNMCAGCMLZVTMOTWURPJZJGFYIMJIBVDLNJDXODXWLY");
    msg.timeout = 0.06773973197430039;
    msg.range = 0.02571014952789863;
    msg.type = 116U;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.297509937883796;
    tmp_msg_0.sys_src = 51824U;
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
    msg.setTimeStamp(0.7784748646556304);
    msg.setSource(42020U);
    msg.setSourceEntity(43U);
    msg.setDestination(35575U);
    msg.setDestinationEntity(245U);
    msg.req_id = 32497U;
    msg.type = 110U;
    msg.status = 21U;
    msg.info.assign("ONZWCMAEFJCYDMZGXMGXDHXKALCYMUUGVAJXKYKTARQCKLDHOWPCFFOYDXORSRYNFNECFBSYRSKTXZLFJRBSJGTHWZUJMCIBHQM");
    msg.range = 0.9423278848826732;

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
    msg.setTimeStamp(0.6726709361560997);
    msg.setSource(53438U);
    msg.setSourceEntity(93U);
    msg.setDestination(19104U);
    msg.setDestinationEntity(53U);
    msg.req_id = 34726U;
    msg.type = 210U;
    msg.status = 206U;
    msg.info.assign("FLWYGESJXCJHNLHQUUEWNPQXEZIDMNQIZCAWXTTRACEXLVKJBMZFTOMGZQWFGYDZLZLVTHHUZYDVFHJWFJRTPTYMAFYPMROGRBYAGQREHJMAUCNBJBLBSSPIGKIWPRFNIMIGXPEWMYLOUKUJVEKAKJKZEUBVHZKRISFCOKYHAIDSNXPLN");
    msg.range = 0.9797528031522393;

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
    msg.setTimeStamp(0.29971804265726687);
    msg.setSource(16331U);
    msg.setSourceEntity(99U);
    msg.setDestination(26883U);
    msg.setDestinationEntity(233U);
    msg.req_id = 51925U;
    msg.type = 140U;
    msg.status = 199U;
    msg.info.assign("MFNNTWKIBVVGAVTBNDKLJHSMYMSKUUXUQEQJKEUEZIHXBEGOGCCWYNNLCPATRJNMAFDAYGEPZWOFWGICXLXSIULWYZWRYACQKLZRJNVDWYARDVQDSSXPTJGHARDXJXWLXE");
    msg.range = 0.3525675202763977;

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
    msg.setTimeStamp(0.22051867520573887);
    msg.setSource(27054U);
    msg.setSourceEntity(153U);
    msg.setDestination(16922U);
    msg.setDestinationEntity(13U);
    msg.system.assign("BAQXPAKUSTCVQPPGHIKMNOFBKRXTJHPTCEQOMTIDJSRUSBUAYBSZWRMJZRBGAOQKQCWBHCXPNFBGHYVWTJMQAHVZDKVLICHLUOUJRKBFNWLYKFOQKXVVGIEDTTD");
    msg.op = 239U;

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
    msg.setTimeStamp(0.8957366000628734);
    msg.setSource(40307U);
    msg.setSourceEntity(181U);
    msg.setDestination(39486U);
    msg.setDestinationEntity(236U);
    msg.system.assign("NGDCMLQCTQKNZGGTJGPOYUSFBTWUGXOOJDSGWNVVTLCBSIAWVPPTQLWLEHEGPQIYURRBEIFEHJDRJAUAIUZHRJVNHAPCYXRDFVZNOEJMY");
    msg.op = 224U;

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
    msg.setTimeStamp(0.8850361335781567);
    msg.setSource(20305U);
    msg.setSourceEntity(175U);
    msg.setDestination(34838U);
    msg.setDestinationEntity(121U);
    msg.system.assign("HJZATYPFWFYNFRZGBXVBALAARHETUBORSWOMRXBTNMFMSXJPXDSDHFQXHYOCNUYOWPHSCKPYAIKPMVQZGOZIOBNVAEDWNSVWBUCPWLIPPXTBDHKOFRGNLTNNXEKJHQCVALPEOCMVILKJZFZXHMFFDAZDUYZQNTGKCRJLHTQJRWSYWEBALHXRQGDVGDDI");
    msg.op = 184U;

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
    msg.setTimeStamp(0.41540017941287766);
    msg.setSource(47091U);
    msg.setSourceEntity(115U);
    msg.setDestination(64044U);
    msg.setDestinationEntity(201U);
    msg.value = 22573;

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
    msg.setTimeStamp(0.7794699589129694);
    msg.setSource(35666U);
    msg.setSourceEntity(254U);
    msg.setDestination(24653U);
    msg.setDestinationEntity(179U);
    msg.value = 19976;

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
    msg.setTimeStamp(0.55690149536088);
    msg.setSource(46189U);
    msg.setSourceEntity(114U);
    msg.setDestination(47645U);
    msg.setDestinationEntity(41U);
    msg.value = 25638;

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
    msg.setTimeStamp(0.34674692349621283);
    msg.setSource(47605U);
    msg.setSourceEntity(145U);
    msg.setDestination(45136U);
    msg.setDestinationEntity(110U);
    msg.value = 0.9092105324854017;

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
    msg.setTimeStamp(0.6295408426568044);
    msg.setSource(63952U);
    msg.setSourceEntity(225U);
    msg.setDestination(48645U);
    msg.setDestinationEntity(45U);
    msg.value = 0.6406521668610292;

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
    msg.setTimeStamp(0.10443736403919757);
    msg.setSource(58880U);
    msg.setSourceEntity(230U);
    msg.setDestination(28537U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8309587595737834;

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
    msg.setTimeStamp(0.6648174078782647);
    msg.setSource(61388U);
    msg.setSourceEntity(200U);
    msg.setDestination(19731U);
    msg.setDestinationEntity(180U);
    msg.value = 0.46346322572060905;

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
    msg.setTimeStamp(0.09300367026783352);
    msg.setSource(63414U);
    msg.setSourceEntity(157U);
    msg.setDestination(11713U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7812065262102355;

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
    msg.setTimeStamp(0.38737984484987664);
    msg.setSource(37825U);
    msg.setSourceEntity(44U);
    msg.setDestination(24225U);
    msg.setDestinationEntity(40U);
    msg.value = 0.2170488657290951;

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
    msg.setTimeStamp(0.1630275461538223);
    msg.setSource(2342U);
    msg.setSourceEntity(161U);
    msg.setDestination(24973U);
    msg.setDestinationEntity(165U);
    msg.validity = 6593U;
    msg.type = 115U;
    msg.utc_year = 6756U;
    msg.utc_month = 207U;
    msg.utc_day = 161U;
    msg.utc_time = 0.5769301988190052;
    msg.lat = 0.9939213249282064;
    msg.lon = 0.9376161456653223;
    msg.height = 0.0057346741561452586;
    msg.satellites = 51U;
    msg.cog = 0.8220485106898208;
    msg.sog = 0.6726636602295509;
    msg.hdop = 0.7165881476394683;
    msg.vdop = 0.8609365624141461;
    msg.hacc = 0.49841179197510643;
    msg.vacc = 0.19026526888288198;

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
    msg.setTimeStamp(0.5773689572072206);
    msg.setSource(46716U);
    msg.setSourceEntity(186U);
    msg.setDestination(49758U);
    msg.setDestinationEntity(179U);
    msg.validity = 10010U;
    msg.type = 106U;
    msg.utc_year = 65358U;
    msg.utc_month = 235U;
    msg.utc_day = 240U;
    msg.utc_time = 0.6166594537374397;
    msg.lat = 0.45746235407280544;
    msg.lon = 0.7968589977911745;
    msg.height = 0.9252765944873755;
    msg.satellites = 176U;
    msg.cog = 0.19980344913982373;
    msg.sog = 0.21140289626618647;
    msg.hdop = 0.7765398523801789;
    msg.vdop = 0.8455686670264616;
    msg.hacc = 0.9615123094325784;
    msg.vacc = 0.14725363778213785;

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
    msg.setTimeStamp(0.5318275521167868);
    msg.setSource(17336U);
    msg.setSourceEntity(44U);
    msg.setDestination(35562U);
    msg.setDestinationEntity(69U);
    msg.validity = 57927U;
    msg.type = 154U;
    msg.utc_year = 37112U;
    msg.utc_month = 17U;
    msg.utc_day = 3U;
    msg.utc_time = 0.42509004579294596;
    msg.lat = 0.936908912215689;
    msg.lon = 0.4944515160832449;
    msg.height = 0.6588763305673198;
    msg.satellites = 247U;
    msg.cog = 0.1385030273588157;
    msg.sog = 0.43724927436665706;
    msg.hdop = 0.48913881344409516;
    msg.vdop = 0.41924884187968425;
    msg.hacc = 0.6842188295951048;
    msg.vacc = 0.8772997012627083;

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
    msg.setTimeStamp(0.08518878365497962);
    msg.setSource(35698U);
    msg.setSourceEntity(139U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(190U);
    msg.time = 0.9223930762119031;
    msg.phi = 0.2338902986721385;
    msg.theta = 0.021920429208802883;
    msg.psi = 0.6336462039434392;
    msg.psi_magnetic = 0.45222685604931345;

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
    msg.setTimeStamp(0.2892919494068441);
    msg.setSource(30188U);
    msg.setSourceEntity(165U);
    msg.setDestination(22087U);
    msg.setDestinationEntity(20U);
    msg.time = 0.41873839450137673;
    msg.phi = 0.4058623811762596;
    msg.theta = 0.5852413230571366;
    msg.psi = 0.24375406350860473;
    msg.psi_magnetic = 0.4298688169602959;

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
    msg.setTimeStamp(0.7408210639410138);
    msg.setSource(31775U);
    msg.setSourceEntity(199U);
    msg.setDestination(25295U);
    msg.setDestinationEntity(20U);
    msg.time = 0.5604203506190764;
    msg.phi = 0.7145315266124062;
    msg.theta = 0.6344711552029162;
    msg.psi = 0.3690243342542715;
    msg.psi_magnetic = 0.9920271274847353;

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
    msg.setTimeStamp(0.025170442073969457);
    msg.setSource(42874U);
    msg.setSourceEntity(203U);
    msg.setDestination(14071U);
    msg.setDestinationEntity(9U);
    msg.time = 0.8167452784987221;
    msg.x = 0.6870390043028726;
    msg.y = 0.18746326873624408;
    msg.z = 0.03142289026902756;
    msg.timestep = 0.05100958131323241;

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
    msg.setTimeStamp(0.9036772506984527);
    msg.setSource(51381U);
    msg.setSourceEntity(241U);
    msg.setDestination(45302U);
    msg.setDestinationEntity(240U);
    msg.time = 0.39942072891207436;
    msg.x = 0.9627935340059341;
    msg.y = 0.9721089546007086;
    msg.z = 0.25571779063241284;
    msg.timestep = 0.9318505845332694;

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
    msg.setTimeStamp(0.018357411981657856);
    msg.setSource(59037U);
    msg.setSourceEntity(56U);
    msg.setDestination(61747U);
    msg.setDestinationEntity(166U);
    msg.time = 0.6346335941080385;
    msg.x = 0.3534854947561291;
    msg.y = 0.5839867926462132;
    msg.z = 0.6962679860306816;
    msg.timestep = 0.5450075653805966;

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
    msg.setTimeStamp(0.5407460539754836);
    msg.setSource(38142U);
    msg.setSourceEntity(109U);
    msg.setDestination(28687U);
    msg.setDestinationEntity(234U);
    msg.time = 0.5083167463900164;
    msg.x = 0.3982221118781657;
    msg.y = 0.49721922945511643;
    msg.z = 0.2910626305955841;

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
    msg.setTimeStamp(0.30806277284176076);
    msg.setSource(45585U);
    msg.setSourceEntity(141U);
    msg.setDestination(24662U);
    msg.setDestinationEntity(243U);
    msg.time = 0.701528976567723;
    msg.x = 0.3877723949872647;
    msg.y = 0.6183924013230405;
    msg.z = 0.4247985145630855;

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
    msg.setTimeStamp(0.18154672581788367);
    msg.setSource(5801U);
    msg.setSourceEntity(239U);
    msg.setDestination(59386U);
    msg.setDestinationEntity(115U);
    msg.time = 0.8018449448762223;
    msg.x = 0.34437977171194634;
    msg.y = 0.30816818224507436;
    msg.z = 0.3517419242388393;

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
    msg.setTimeStamp(0.4402521466792795);
    msg.setSource(226U);
    msg.setSourceEntity(101U);
    msg.setDestination(58936U);
    msg.setDestinationEntity(55U);
    msg.time = 0.47280540684478434;
    msg.x = 0.7995708386311215;
    msg.y = 0.539080739823491;
    msg.z = 0.5544031731187863;

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
    msg.setTimeStamp(0.29517797328236284);
    msg.setSource(3849U);
    msg.setSourceEntity(26U);
    msg.setDestination(44289U);
    msg.setDestinationEntity(128U);
    msg.time = 0.01407327643828249;
    msg.x = 0.8054295459379891;
    msg.y = 0.6905910803384367;
    msg.z = 0.3797506123132386;

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
    msg.setTimeStamp(0.7782741561907517);
    msg.setSource(22456U);
    msg.setSourceEntity(149U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(176U);
    msg.time = 0.2624794373487156;
    msg.x = 0.2962639275308999;
    msg.y = 0.7199960680753088;
    msg.z = 0.47166506532182473;

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
    msg.setTimeStamp(0.8055586448373675);
    msg.setSource(18376U);
    msg.setSourceEntity(53U);
    msg.setDestination(62446U);
    msg.setDestinationEntity(180U);
    msg.time = 0.05663946911757223;
    msg.x = 0.7748339953649425;
    msg.y = 0.4542227457901916;
    msg.z = 0.3873235134918781;

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
    msg.setTimeStamp(0.781822146807855);
    msg.setSource(24434U);
    msg.setSourceEntity(3U);
    msg.setDestination(11910U);
    msg.setDestinationEntity(135U);
    msg.time = 0.9067050396197218;
    msg.x = 0.16143867395190648;
    msg.y = 0.2756389965557762;
    msg.z = 0.2002961431614474;

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
    msg.setTimeStamp(0.715314622055655);
    msg.setSource(33116U);
    msg.setSourceEntity(227U);
    msg.setDestination(1099U);
    msg.setDestinationEntity(200U);
    msg.time = 0.6513429741137726;
    msg.x = 0.864021361056992;
    msg.y = 0.8673729418383267;
    msg.z = 0.014845160084988374;

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
    msg.setTimeStamp(0.13361795496959716);
    msg.setSource(53039U);
    msg.setSourceEntity(118U);
    msg.setDestination(26061U);
    msg.setDestinationEntity(34U);
    msg.validity = 156U;
    msg.x = 0.0324582533975345;
    msg.y = 0.2742703304124554;
    msg.z = 0.3024249843228797;

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
    msg.setTimeStamp(0.5336244733443692);
    msg.setSource(23192U);
    msg.setSourceEntity(32U);
    msg.setDestination(33557U);
    msg.setDestinationEntity(83U);
    msg.validity = 116U;
    msg.x = 0.8001141545965791;
    msg.y = 0.2693846352887016;
    msg.z = 0.6700704021058626;

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
    msg.setTimeStamp(0.7455758021238464);
    msg.setSource(62659U);
    msg.setSourceEntity(215U);
    msg.setDestination(3516U);
    msg.setDestinationEntity(80U);
    msg.validity = 2U;
    msg.x = 0.5417180716287735;
    msg.y = 0.1979714240155106;
    msg.z = 0.15751719022038912;

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
    msg.setTimeStamp(0.9511233930795586);
    msg.setSource(36622U);
    msg.setSourceEntity(212U);
    msg.setDestination(314U);
    msg.setDestinationEntity(27U);
    msg.validity = 93U;
    msg.x = 0.40577794062557915;
    msg.y = 0.3001312202732068;
    msg.z = 0.8813494073065159;

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
    msg.setTimeStamp(0.006401483009804809);
    msg.setSource(31156U);
    msg.setSourceEntity(61U);
    msg.setDestination(64169U);
    msg.setDestinationEntity(239U);
    msg.validity = 219U;
    msg.x = 0.5532005751835877;
    msg.y = 0.45142757061752636;
    msg.z = 0.8657083090247992;

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
    msg.setTimeStamp(0.33103532470641706);
    msg.setSource(44416U);
    msg.setSourceEntity(93U);
    msg.setDestination(19821U);
    msg.setDestinationEntity(114U);
    msg.validity = 48U;
    msg.x = 0.10822176219580082;
    msg.y = 0.3215625632931888;
    msg.z = 0.4248799878270978;

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
    msg.setTimeStamp(0.8115859310990269);
    msg.setSource(17397U);
    msg.setSourceEntity(187U);
    msg.setDestination(53072U);
    msg.setDestinationEntity(22U);
    msg.time = 0.6791506118158286;
    msg.x = 0.4716423914444866;
    msg.y = 0.8715637994861677;
    msg.z = 0.8609732793163466;

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
    msg.setTimeStamp(0.44698501024300874);
    msg.setSource(57879U);
    msg.setSourceEntity(189U);
    msg.setDestination(2479U);
    msg.setDestinationEntity(68U);
    msg.time = 0.6614346920453924;
    msg.x = 0.036089472923175325;
    msg.y = 0.8917528661302766;
    msg.z = 0.29978527977722036;

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
    msg.setTimeStamp(0.4457239295126463);
    msg.setSource(61330U);
    msg.setSourceEntity(15U);
    msg.setDestination(63141U);
    msg.setDestinationEntity(112U);
    msg.time = 0.4131293844662113;
    msg.x = 0.8142322611442618;
    msg.y = 0.7819882752269927;
    msg.z = 0.9320937676467846;

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
    msg.setTimeStamp(0.07574485400254971);
    msg.setSource(4611U);
    msg.setSourceEntity(78U);
    msg.setDestination(34769U);
    msg.setDestinationEntity(116U);
    msg.validity = 5U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4889793581462355;
    tmp_msg_0.beam_height = 0.3168939898919435;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8350780857435365;

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
    msg.setTimeStamp(0.31333415572331424);
    msg.setSource(40161U);
    msg.setSourceEntity(251U);
    msg.setDestination(32917U);
    msg.setDestinationEntity(136U);
    msg.validity = 167U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5020914046011427;
    tmp_msg_0.beam_height = 0.7444559953235176;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.053820508919276144;

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
    msg.setTimeStamp(0.17361883105874953);
    msg.setSource(40914U);
    msg.setSourceEntity(212U);
    msg.setDestination(32833U);
    msg.setDestinationEntity(102U);
    msg.validity = 73U;
    msg.value = 0.5064353056173808;

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
    msg.setTimeStamp(0.7336053470122782);
    msg.setSource(61628U);
    msg.setSourceEntity(181U);
    msg.setDestination(29383U);
    msg.setDestinationEntity(87U);
    msg.value = 0.9862221795234735;

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
    msg.setTimeStamp(0.4831906702828065);
    msg.setSource(12508U);
    msg.setSourceEntity(222U);
    msg.setDestination(43932U);
    msg.setDestinationEntity(160U);
    msg.value = 0.10027268344749585;

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
    msg.setTimeStamp(0.7708136553614793);
    msg.setSource(29269U);
    msg.setSourceEntity(15U);
    msg.setDestination(57458U);
    msg.setDestinationEntity(29U);
    msg.value = 0.10389438060467926;

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
    msg.setTimeStamp(0.9942180509940762);
    msg.setSource(10600U);
    msg.setSourceEntity(188U);
    msg.setDestination(13333U);
    msg.setDestinationEntity(164U);
    msg.value = 0.18319920528002553;

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
    msg.setTimeStamp(0.10616811131242765);
    msg.setSource(26914U);
    msg.setSourceEntity(159U);
    msg.setDestination(46237U);
    msg.setDestinationEntity(92U);
    msg.value = 0.6674354563835028;

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
    msg.setTimeStamp(0.5548361779568919);
    msg.setSource(22828U);
    msg.setSourceEntity(194U);
    msg.setDestination(28728U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9305173868059873;

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
    msg.setTimeStamp(0.24381529925703027);
    msg.setSource(60517U);
    msg.setSourceEntity(224U);
    msg.setDestination(47142U);
    msg.setDestinationEntity(39U);
    msg.value = 0.0704507278801263;

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
    msg.setTimeStamp(0.04579161004556642);
    msg.setSource(54135U);
    msg.setSourceEntity(41U);
    msg.setDestination(43756U);
    msg.setDestinationEntity(100U);
    msg.value = 0.007189141889082817;

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
    msg.setTimeStamp(0.8751659847969173);
    msg.setSource(58255U);
    msg.setSourceEntity(54U);
    msg.setDestination(26212U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9781564964142204;

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
    msg.setTimeStamp(0.297430600319768);
    msg.setSource(55541U);
    msg.setSourceEntity(10U);
    msg.setDestination(40439U);
    msg.setDestinationEntity(230U);
    msg.value = 0.8928312238234389;

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
    msg.setTimeStamp(0.8449138715273151);
    msg.setSource(33361U);
    msg.setSourceEntity(26U);
    msg.setDestination(60895U);
    msg.setDestinationEntity(161U);
    msg.value = 0.8160303032669572;

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
    msg.setTimeStamp(0.5413555819074037);
    msg.setSource(43976U);
    msg.setSourceEntity(63U);
    msg.setDestination(41368U);
    msg.setDestinationEntity(110U);
    msg.value = 0.9619132419408954;

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
    msg.setTimeStamp(0.9704008612855288);
    msg.setSource(58861U);
    msg.setSourceEntity(205U);
    msg.setDestination(41342U);
    msg.setDestinationEntity(120U);
    msg.value = 0.5289677592306179;

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
    msg.setTimeStamp(0.05815093778126912);
    msg.setSource(23131U);
    msg.setSourceEntity(131U);
    msg.setDestination(79U);
    msg.setDestinationEntity(243U);
    msg.value = 0.29862878087466493;

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
    msg.setTimeStamp(0.1307670309553064);
    msg.setSource(64286U);
    msg.setSourceEntity(246U);
    msg.setDestination(36842U);
    msg.setDestinationEntity(114U);
    msg.value = 0.9965208678704748;

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
    msg.setTimeStamp(0.44516919879229677);
    msg.setSource(37878U);
    msg.setSourceEntity(190U);
    msg.setDestination(20471U);
    msg.setDestinationEntity(127U);
    msg.value = 0.050363086423421244;

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
    msg.setTimeStamp(0.7346939634279496);
    msg.setSource(23207U);
    msg.setSourceEntity(200U);
    msg.setDestination(31334U);
    msg.setDestinationEntity(134U);
    msg.value = 0.5157515124939881;

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
    msg.setTimeStamp(0.9705157647526604);
    msg.setSource(11484U);
    msg.setSourceEntity(254U);
    msg.setDestination(42819U);
    msg.setDestinationEntity(137U);
    msg.value = 0.17606696481111872;

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
    msg.setTimeStamp(0.9800697730296094);
    msg.setSource(60531U);
    msg.setSourceEntity(247U);
    msg.setDestination(51274U);
    msg.setDestinationEntity(6U);
    msg.value = 0.42292168310002365;

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
    msg.setTimeStamp(0.25329906953609715);
    msg.setSource(28836U);
    msg.setSourceEntity(77U);
    msg.setDestination(32332U);
    msg.setDestinationEntity(23U);
    msg.value = 0.05733616553147158;

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
    msg.setTimeStamp(0.7076902936793971);
    msg.setSource(12676U);
    msg.setSourceEntity(2U);
    msg.setDestination(7968U);
    msg.setDestinationEntity(210U);
    msg.value = 0.39062882357975315;

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
    msg.setTimeStamp(0.9508565353012313);
    msg.setSource(4746U);
    msg.setSourceEntity(202U);
    msg.setDestination(25530U);
    msg.setDestinationEntity(191U);
    msg.value = 0.030850887029735374;

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
    msg.setTimeStamp(0.5266998891020853);
    msg.setSource(60618U);
    msg.setSourceEntity(173U);
    msg.setDestination(1581U);
    msg.setDestinationEntity(77U);
    msg.value = 0.24171554741038748;

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
    msg.setTimeStamp(0.17200583959952231);
    msg.setSource(64650U);
    msg.setSourceEntity(198U);
    msg.setDestination(29188U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8467129410168326;

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
    msg.setTimeStamp(0.03454455708350812);
    msg.setSource(842U);
    msg.setSourceEntity(185U);
    msg.setDestination(44473U);
    msg.setDestinationEntity(213U);
    msg.direction = 0.08774849862750622;
    msg.speed = 0.05462867349557321;
    msg.turbulence = 0.9450930269196582;

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
    msg.setTimeStamp(0.03620260857772983);
    msg.setSource(44638U);
    msg.setSourceEntity(225U);
    msg.setDestination(16201U);
    msg.setDestinationEntity(4U);
    msg.direction = 0.3347988302563035;
    msg.speed = 0.02940676395185593;
    msg.turbulence = 0.5962302055511478;

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
    msg.setTimeStamp(0.39241233527695873);
    msg.setSource(34956U);
    msg.setSourceEntity(164U);
    msg.setDestination(54354U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.16972166299208213;
    msg.speed = 0.4845135739535894;
    msg.turbulence = 0.44921733777226314;

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
    msg.setTimeStamp(0.9727353235263142);
    msg.setSource(43973U);
    msg.setSourceEntity(142U);
    msg.setDestination(35174U);
    msg.setDestinationEntity(122U);
    msg.value = 0.0014204479531635394;

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
    msg.setTimeStamp(0.5537047343573844);
    msg.setSource(24921U);
    msg.setSourceEntity(230U);
    msg.setDestination(24293U);
    msg.setDestinationEntity(174U);
    msg.value = 0.8689530376716126;

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
    msg.setTimeStamp(0.3827864098873828);
    msg.setSource(60580U);
    msg.setSourceEntity(222U);
    msg.setDestination(54568U);
    msg.setDestinationEntity(54U);
    msg.value = 0.9556050647209079;

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
    msg.setTimeStamp(0.9595930773889128);
    msg.setSource(48834U);
    msg.setSourceEntity(2U);
    msg.setDestination(8600U);
    msg.setDestinationEntity(26U);
    msg.value.assign("KXNJQURLRHMTBYGIOSUZUQVTGKKEELWDZMMABUYCJTVURWETYPANUJAPOTNHKABWRTVPZMHPYCKXCZHMVOLEYWVCTJJQIGQBNLIIXEOFSWSZIVXRDFMNLRZXHJXIDHBSMKPAPWYXPFCIJQFQFIUSWAGRCIIGADEQOYSSZ");

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
    msg.setTimeStamp(0.4565891644473996);
    msg.setSource(4816U);
    msg.setSourceEntity(117U);
    msg.setDestination(20249U);
    msg.setDestinationEntity(220U);
    msg.value.assign("OGZNDRVMKROJOXADYQQMJFKYNNGMQOJBORWHAQNXOTD");

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
    msg.setTimeStamp(0.3507061583541131);
    msg.setSource(5228U);
    msg.setSourceEntity(125U);
    msg.setDestination(25232U);
    msg.setDestinationEntity(169U);
    msg.value.assign("GZGDXOVGVECPAUNXEYCUDWXMDWFOAYZQZJOXINNEEBLMGEQVRUBBBPNRFNSRQJTFMFKWIMUTUCDKZVTOTJLIFNWLKAOAZHXGIPFWNLQGUEKJHHYJWDCGTRIQSVOTQKYBSZKJPILADCLRQQLDHHW");

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
    msg.setTimeStamp(0.8365789361379521);
    msg.setSource(137U);
    msg.setSourceEntity(39U);
    msg.setDestination(50425U);
    msg.setDestinationEntity(29U);
    const signed char tmp_msg_0[] = {25, -3, 6, -119, -31, -92, 115, -74, -35, -96, 61, -48, -6, 65, 93, 30, 16, -78, 94, 14, 12, -71, 78, -6, -21, 111, -96, -100, -9, -9, -85, 73, 91, -52, 99, 15, -124, -77, 16, -128, -49, 2, -17, 68, 20, 99, -39, 85, -15, 90, 20, 32, -35, 98, 48, -60, -9, -93, 39, -126, 64, -104, -124, 73, 60, 103, -122, -54, -52, 125, -32, 88, -11, -53, -61, -49, -38, 84, -26, -56, 83, 46, -115, 125, -113, 25, 90, -36, -49, -34, 55, 9, -17, 38, 26, 28, 114, 104, -58, 83, -92, 106, -9, -67, 12, -99, 95, 72, -23, 4, -27, 62, -93, 51, -24, 106, -80, -23, -75, 68, 30, 98, -3, 78, -101, 42, 28, -95, 111, 98, -67, -52, -40, -66, -88, -122, -125, -4, 0, 33, 61, 43, -80, 27, -47, 14, -122, 90, 12, 125, 63, 50, -112, 38, 73, 82, -113, -79, -40, -66, -69, 66, 60, -75, -20, 67, -20, -9, 24, -8, -78, 43, 115, 97, 72, 113, -28, 56, 99, -101, 103, 42, 79, 4, -90};
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
    msg.setTimeStamp(0.8240671878489917);
    msg.setSource(5273U);
    msg.setSourceEntity(178U);
    msg.setDestination(17925U);
    msg.setDestinationEntity(151U);
    const signed char tmp_msg_0[] = {31, -13, 57, 37, 123, -96, -97, 69, -14, 106, 47, -125, 71, -128, 59, -28, -125, 15, -69, -96, 103, -13, -35, 31, 10, 3, -45, -61, -41};
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
    msg.setTimeStamp(0.11240766090332488);
    msg.setSource(10186U);
    msg.setSourceEntity(107U);
    msg.setDestination(10649U);
    msg.setDestinationEntity(129U);
    const signed char tmp_msg_0[] = {-62, 110, 4, -46, 22, -83, -103, 120, -95, -52, 102, -74, -1, 78, -22, -79, 42, -92, -113, -95, 87, -76, 80, -46, -11, -46, 77, -111, -121, 85, -82, 113, -21, 31, 91, 110, -86, 67, 44, 74, -57, -91, 102, -26, 9, 60, -16, 44, -89, -120, 53, -74, 97};
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
    msg.setTimeStamp(0.3542362329555352);
    msg.setSource(30758U);
    msg.setSourceEntity(225U);
    msg.setDestination(18863U);
    msg.setDestinationEntity(192U);
    msg.value = 0.32553511270763624;

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
    msg.setTimeStamp(0.033677645762108965);
    msg.setSource(60297U);
    msg.setSourceEntity(231U);
    msg.setDestination(39817U);
    msg.setDestinationEntity(51U);
    msg.value = 0.37715347588296566;

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
    msg.setTimeStamp(0.08107028825631679);
    msg.setSource(30359U);
    msg.setSourceEntity(62U);
    msg.setDestination(44078U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7976774425882293;

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
    msg.setTimeStamp(0.10422213134500291);
    msg.setSource(52028U);
    msg.setSourceEntity(105U);
    msg.setDestination(51271U);
    msg.setDestinationEntity(103U);
    msg.type = 97U;
    msg.frequency = 3162633053U;
    msg.min_range = 29157U;
    msg.max_range = 52487U;
    msg.bits_per_point = 144U;
    msg.scale_factor = 0.8595765221684154;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.46449954940127913;
    tmp_msg_0.beam_height = 0.7456559541289463;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {35, -113, -12, -99, 7, -37, -80, -58, -125, 56, 59, 115, -84, 1, 9, 43, 53, 9, -96, 71, 40, -93, 55, 59, 35, -46, -10, 123, 115, 7, 60, -8, -32, 97, 13, 37, -4, -31, 22, -27, 33, 66, 22, -31, 107, -3, 120, 87, 11, -86, -74, 99, -5, 53, 63, -21, 104, 18, 101, -57, -111, 52, -112, 96, 82, -106, 33, -82, 65, -70, -66, 23, 6, 37, 37, 118, 36, 80, 10, 27, -4, 17, -12, -126, -38, -26, 90, -41, -99, -104, -95, -11, 115, 91, -69, -85, 126, -122, -81, 86, -44, 21, 103, -123, 126, -126, 12, 8, 55, -20, 44, -62, 125, -103, 82, -43, 114, 30, -123, 42, -14, 11, 7, 109, -6, -113, 35, 124, 72, -123, -85, -4, 121, -106, -76, 67, 33, 47, -45, 90, 48, -95, 47, 56, 87, 40, -53, 80, -92, 5, -119, 5, -50, -123, -110, 41, -1, 6, -17, -59, -59, 23, 55, 67, 106, -13, -101, 115, -12, 103, -97, -101, 32, 57, 68, 23, -98, 124, -120, -56, -13, 19, -37, -53, 47, 70, -55, 8, 123, -31, 36, 109, -18, -20, 46};
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
    msg.setTimeStamp(0.9762885894346174);
    msg.setSource(7784U);
    msg.setSourceEntity(243U);
    msg.setDestination(6876U);
    msg.setDestinationEntity(14U);
    msg.type = 241U;
    msg.frequency = 553211488U;
    msg.min_range = 17689U;
    msg.max_range = 55349U;
    msg.bits_per_point = 227U;
    msg.scale_factor = 0.5856659239963001;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3698515452672233;
    tmp_msg_0.beam_height = 0.2661675541773818;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {46, 126, 65, -85, 23, 1, -69, -35, -77, 6, 117, -81, 45, -104, 38, 46, 5, -66, 104, 36, 3, 6, 10, -31, -83, -6, 38, 11, -64, -45, 97, -102, -75, 81, 99, 70, 96, 118, 51, -113, -68, 121, 124, -88, 77, 116, 22, 103, -116, -107, -32, -96, 74, 0, 96, -106, -92, -124, 122, -55, -119, 53, -95, -40, 83, 14, -91, -50, -94, 78, -34, 14, 4, 38, 68, 111, 97, -37, -30, -126, -99, 29, -65, 17, -121, -5, -28, 74, 44, -57, -82, -110, -4, -94, -113, 52, -32, -115, -80, -59, 37, 10, 61, 104, 46, 34, -124, -2, -35, 116, 16, -97, -8, -29, 47, -86, -8, 63, -69, 53, 74, 115, 10, 105, 62, -103, 122, -27, -60, 108, 104, 52, 35, -53, -91, 40, -106, 41, 31, 14, 73, -50, -46, 72, 25, 113, -57, -78, -34, -82, -3, 1, -107, -21, 67, -54, 12, -58, -70, -89, 20, 80, -40, 16, 39, -30, 106, -82, 32, 124, 104, 111, -6, 59, 31, -45, -55, -13, -96, -53, 63, -16, -114, -88, 39, -41, -114, 77, 23, -78};
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
    msg.setTimeStamp(0.8032541158450947);
    msg.setSource(53174U);
    msg.setSourceEntity(139U);
    msg.setDestination(63008U);
    msg.setDestinationEntity(140U);
    msg.type = 101U;
    msg.frequency = 300666914U;
    msg.min_range = 46534U;
    msg.max_range = 56888U;
    msg.bits_per_point = 143U;
    msg.scale_factor = 0.7862128922204268;
    const signed char tmp_msg_0[] = {3, -123, 22, 3, 25, 122, 51, 93, -123, 43, 109, 102, 12, -79, -76, -89, 15, 104, 29, -67, 77, -1, -11, -112, 15, 12, 103, -80, -101, 100, -75, -19, 15, -33, -77, -43, 119, 3, 34, 111, 4, -20, 93, -32, 42, 54, -71, -73, -119, 80, 78, -104, 96, 8, -85, -100, -82, -21, -37, -6, 42, 113, -8, -72, -24, -10, 85, 111, 0, -6, 49, 30, 99, 81, -32, -105, -6, -79, 126, -87, 97, 95, -95, 48, -40, -1, 10, -71, -115, 101, 95, 92, 53, 54, 95, -8, -32, -39, 8, -114, -124, -87, -12};
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
    msg.setTimeStamp(0.028108828933451013);
    msg.setSource(34898U);
    msg.setSourceEntity(243U);
    msg.setDestination(58238U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.8885518795861755);
    msg.setSource(40841U);
    msg.setSourceEntity(105U);
    msg.setDestination(27509U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.08535651777883635);
    msg.setSource(21231U);
    msg.setSourceEntity(205U);
    msg.setDestination(18545U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.05804060611497297);
    msg.setSource(49973U);
    msg.setSourceEntity(0U);
    msg.setDestination(36955U);
    msg.setDestinationEntity(61U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.8315549235194706);
    msg.setSource(4111U);
    msg.setSourceEntity(128U);
    msg.setDestination(40446U);
    msg.setDestinationEntity(191U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.060706706183986436);
    msg.setSource(39620U);
    msg.setSourceEntity(75U);
    msg.setDestination(22280U);
    msg.setDestinationEntity(105U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.48695747264883904);
    msg.setSource(64882U);
    msg.setSourceEntity(228U);
    msg.setDestination(4871U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0498761774242269;
    msg.confidence = 0.45821523373300277;
    msg.opmodes.assign("KRFTNUZEUFQMIOBJFVKILDIXNJYAHGVEQQIDGBFMZQRDEAZJXHHPQDTOPIELGKLXYDAVBHUGUUEBMSDYPGCIVPPAPOQNUWBWJRZEWLWVSSRNYLXNFRRWYCGPMUGOFLTWTMSHFOVTWXNFRAGAWRRWF");

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
    msg.setTimeStamp(0.05603535190346487);
    msg.setSource(20437U);
    msg.setSourceEntity(135U);
    msg.setDestination(37889U);
    msg.setDestinationEntity(11U);
    msg.value = 0.32611739362537606;
    msg.confidence = 0.1655093399838541;
    msg.opmodes.assign("GDYNLFKNJAQAQZSXENYRBINRIUYIGVQEG");

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
    msg.setTimeStamp(0.1912226427734931);
    msg.setSource(40623U);
    msg.setSourceEntity(190U);
    msg.setDestination(6410U);
    msg.setDestinationEntity(215U);
    msg.value = 0.8392943575475404;
    msg.confidence = 0.8216567107714605;
    msg.opmodes.assign("QZYDURJXCENPCSZOGZNFRKRVEKWOWYIYEPRN");

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
    msg.setTimeStamp(0.07862883238098994);
    msg.setSource(12128U);
    msg.setSourceEntity(37U);
    msg.setDestination(21420U);
    msg.setDestinationEntity(94U);
    msg.itow = 4124303587U;
    msg.lat = 0.8835741324139791;
    msg.lon = 0.7918957995407901;
    msg.height_ell = 0.44374368473638137;
    msg.height_sea = 0.26611567042583806;
    msg.hacc = 0.01035747713940327;
    msg.vacc = 0.48641605531062526;
    msg.vel_n = 0.8718702329624053;
    msg.vel_e = 0.3953094523114925;
    msg.vel_d = 0.8757350888283232;
    msg.speed = 0.13962632216769832;
    msg.gspeed = 0.8472093657046932;
    msg.heading = 0.7169534957520327;
    msg.sacc = 0.6097460490582267;
    msg.cacc = 0.9436853647987498;

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
    msg.setTimeStamp(0.22957014927847874);
    msg.setSource(8253U);
    msg.setSourceEntity(178U);
    msg.setDestination(39751U);
    msg.setDestinationEntity(206U);
    msg.itow = 371459760U;
    msg.lat = 0.9224190121775163;
    msg.lon = 0.10500722636437754;
    msg.height_ell = 0.6394349479722025;
    msg.height_sea = 0.10516326007712118;
    msg.hacc = 0.351512607496857;
    msg.vacc = 0.20264869397932062;
    msg.vel_n = 0.7111297207955641;
    msg.vel_e = 0.46328784195149275;
    msg.vel_d = 0.4036793617985811;
    msg.speed = 0.1353747803274824;
    msg.gspeed = 0.3124577062681372;
    msg.heading = 0.920470032963588;
    msg.sacc = 0.35576829165887647;
    msg.cacc = 0.5929677731103304;

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
    msg.setTimeStamp(0.9554353820269963);
    msg.setSource(9871U);
    msg.setSourceEntity(86U);
    msg.setDestination(54389U);
    msg.setDestinationEntity(193U);
    msg.itow = 2831306612U;
    msg.lat = 0.2994357625738988;
    msg.lon = 0.22193518354524855;
    msg.height_ell = 0.036712244790185755;
    msg.height_sea = 0.05510827467484036;
    msg.hacc = 0.6522920640113037;
    msg.vacc = 0.06432571069173654;
    msg.vel_n = 0.20954050201859853;
    msg.vel_e = 0.8054044182656853;
    msg.vel_d = 0.633459653098259;
    msg.speed = 0.2788843883635336;
    msg.gspeed = 0.6845179635174926;
    msg.heading = 0.6650352651891047;
    msg.sacc = 0.4872300996023172;
    msg.cacc = 0.6432454603659574;

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
    msg.setTimeStamp(0.6329775061062418);
    msg.setSource(46034U);
    msg.setSourceEntity(95U);
    msg.setDestination(23441U);
    msg.setDestinationEntity(66U);
    msg.id = 105U;
    msg.value = 0.8670498442525292;

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
    msg.setTimeStamp(0.41661734601169254);
    msg.setSource(52145U);
    msg.setSourceEntity(78U);
    msg.setDestination(48422U);
    msg.setDestinationEntity(239U);
    msg.id = 254U;
    msg.value = 0.9550580116163223;

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
    msg.setTimeStamp(0.6725880090260798);
    msg.setSource(27143U);
    msg.setSourceEntity(65U);
    msg.setDestination(12332U);
    msg.setDestinationEntity(153U);
    msg.id = 155U;
    msg.value = 0.44769680453946115;

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
    msg.setTimeStamp(0.6934534729021508);
    msg.setSource(51017U);
    msg.setSourceEntity(60U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(42U);
    msg.x = 0.5215682481406259;
    msg.y = 0.9384876697533758;
    msg.z = 0.753593455190613;
    msg.phi = 0.0706729885798737;
    msg.theta = 0.2388563987655975;
    msg.psi = 0.5867676901791322;

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
    msg.setTimeStamp(0.2885435490122731);
    msg.setSource(40309U);
    msg.setSourceEntity(121U);
    msg.setDestination(7645U);
    msg.setDestinationEntity(250U);
    msg.x = 0.12509859317278693;
    msg.y = 0.8309827641166924;
    msg.z = 0.3234651335603913;
    msg.phi = 0.4160764671702897;
    msg.theta = 0.9568761512718413;
    msg.psi = 0.3795087637790475;

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
    msg.setTimeStamp(0.1947313809878437);
    msg.setSource(16492U);
    msg.setSourceEntity(129U);
    msg.setDestination(8111U);
    msg.setDestinationEntity(52U);
    msg.x = 0.8508035249639762;
    msg.y = 0.2919283629888265;
    msg.z = 0.5622860062967346;
    msg.phi = 0.17074518519481408;
    msg.theta = 0.6438639815904459;
    msg.psi = 0.24434293711321187;

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
    msg.setTimeStamp(0.8567577690961938);
    msg.setSource(29045U);
    msg.setSourceEntity(233U);
    msg.setDestination(2327U);
    msg.setDestinationEntity(228U);
    msg.beam_width = 0.7647638614296896;
    msg.beam_height = 0.8829956828924099;

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
    msg.setTimeStamp(0.2892437183633081);
    msg.setSource(39343U);
    msg.setSourceEntity(160U);
    msg.setDestination(7958U);
    msg.setDestinationEntity(51U);
    msg.beam_width = 0.5211378601468758;
    msg.beam_height = 0.1606221115192037;

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
    msg.setTimeStamp(0.31763960885965803);
    msg.setSource(12368U);
    msg.setSourceEntity(199U);
    msg.setDestination(56823U);
    msg.setDestinationEntity(131U);
    msg.beam_width = 0.10451367216158147;
    msg.beam_height = 0.07103310036480703;

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
    msg.setTimeStamp(0.2540514233265022);
    msg.setSource(29462U);
    msg.setSourceEntity(174U);
    msg.setDestination(55395U);
    msg.setDestinationEntity(45U);
    msg.sane = 245U;

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
    msg.setTimeStamp(0.5924956337891968);
    msg.setSource(8759U);
    msg.setSourceEntity(188U);
    msg.setDestination(17158U);
    msg.setDestinationEntity(74U);
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
    msg.setTimeStamp(0.21751612566713296);
    msg.setSource(6587U);
    msg.setSourceEntity(163U);
    msg.setDestination(28256U);
    msg.setDestinationEntity(90U);
    msg.sane = 17U;

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
    msg.setTimeStamp(0.19156524445679168);
    msg.setSource(42524U);
    msg.setSourceEntity(44U);
    msg.setDestination(62256U);
    msg.setDestinationEntity(77U);
    msg.value = 0.3100788777528274;

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
    msg.setTimeStamp(0.9141774996166524);
    msg.setSource(58934U);
    msg.setSourceEntity(42U);
    msg.setDestination(35540U);
    msg.setDestinationEntity(106U);
    msg.value = 0.5974242620360374;

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
    msg.setTimeStamp(0.8875462626348064);
    msg.setSource(34074U);
    msg.setSourceEntity(39U);
    msg.setDestination(1284U);
    msg.setDestinationEntity(234U);
    msg.value = 0.659861434477979;

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
    msg.setTimeStamp(0.7657462359501317);
    msg.setSource(60786U);
    msg.setSourceEntity(118U);
    msg.setDestination(59329U);
    msg.setDestinationEntity(86U);
    msg.value = 0.46192553006136494;

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
    msg.setTimeStamp(0.49638343363755455);
    msg.setSource(50861U);
    msg.setSourceEntity(34U);
    msg.setDestination(28785U);
    msg.setDestinationEntity(15U);
    msg.value = 0.16282197039640134;

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
    msg.setTimeStamp(0.28959707830488);
    msg.setSource(14256U);
    msg.setSourceEntity(160U);
    msg.setDestination(49647U);
    msg.setDestinationEntity(189U);
    msg.value = 0.6693312656341295;

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
    msg.setTimeStamp(0.40200551809855956);
    msg.setSource(29352U);
    msg.setSourceEntity(71U);
    msg.setDestination(21337U);
    msg.setDestinationEntity(152U);
    msg.value = 0.8933890638311462;

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
    msg.setTimeStamp(0.889479242541072);
    msg.setSource(2313U);
    msg.setSourceEntity(188U);
    msg.setDestination(40995U);
    msg.setDestinationEntity(80U);
    msg.value = 0.730589374890649;

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
    msg.setTimeStamp(0.06468329012071916);
    msg.setSource(12620U);
    msg.setSourceEntity(48U);
    msg.setDestination(47410U);
    msg.setDestinationEntity(38U);
    msg.value = 0.3355681851292426;

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
    msg.setTimeStamp(0.0039244950783672294);
    msg.setSource(16337U);
    msg.setSourceEntity(197U);
    msg.setDestination(51144U);
    msg.setDestinationEntity(170U);
    msg.value = 0.012354133770508868;

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
    msg.setTimeStamp(0.6617163842850263);
    msg.setSource(46934U);
    msg.setSourceEntity(157U);
    msg.setDestination(39999U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5461315899332264;

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
    msg.setTimeStamp(0.25897292026970786);
    msg.setSource(63834U);
    msg.setSourceEntity(218U);
    msg.setDestination(3813U);
    msg.setDestinationEntity(117U);
    msg.value = 0.9258532237842088;

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
    msg.setTimeStamp(0.16590854627524854);
    msg.setSource(31858U);
    msg.setSourceEntity(48U);
    msg.setDestination(54390U);
    msg.setDestinationEntity(20U);
    msg.value = 0.19348446663198493;

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
    msg.setTimeStamp(0.5690293952906859);
    msg.setSource(10463U);
    msg.setSourceEntity(13U);
    msg.setDestination(33448U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6360025543883236;

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
    msg.setTimeStamp(0.8589125651285008);
    msg.setSource(45960U);
    msg.setSourceEntity(244U);
    msg.setDestination(23854U);
    msg.setDestinationEntity(105U);
    msg.value = 0.12973505701973853;

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
    msg.setTimeStamp(0.8371191861753807);
    msg.setSource(19867U);
    msg.setSourceEntity(6U);
    msg.setDestination(24339U);
    msg.setDestinationEntity(144U);
    msg.value = 0.5823299312006112;

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
    msg.setTimeStamp(0.8473365683059882);
    msg.setSource(56034U);
    msg.setSourceEntity(171U);
    msg.setDestination(58496U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6554471082866062;

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
    msg.setTimeStamp(0.6893116050198171);
    msg.setSource(9627U);
    msg.setSourceEntity(58U);
    msg.setDestination(43572U);
    msg.setDestinationEntity(217U);
    msg.value = 0.9544853818711893;

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
    msg.setTimeStamp(0.7403474352531288);
    msg.setSource(15990U);
    msg.setSourceEntity(84U);
    msg.setDestination(42440U);
    msg.setDestinationEntity(246U);
    msg.value = 0.4548942000606139;

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
    msg.setTimeStamp(0.04332386445983305);
    msg.setSource(10780U);
    msg.setSourceEntity(136U);
    msg.setDestination(14723U);
    msg.setDestinationEntity(158U);
    msg.value = 0.7994002675781252;

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
    msg.setTimeStamp(0.9547564125137951);
    msg.setSource(21459U);
    msg.setSourceEntity(177U);
    msg.setDestination(31288U);
    msg.setDestinationEntity(101U);
    msg.value = 0.7618978724219315;

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
    msg.setTimeStamp(0.13069350185945605);
    msg.setSource(59787U);
    msg.setSourceEntity(72U);
    msg.setDestination(2068U);
    msg.setDestinationEntity(162U);
    msg.value = 0.4952750191486507;

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
    msg.setTimeStamp(0.020606977143678984);
    msg.setSource(63488U);
    msg.setSourceEntity(172U);
    msg.setDestination(53639U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5872770149806138;

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
    msg.setTimeStamp(0.6603365625248437);
    msg.setSource(22373U);
    msg.setSourceEntity(63U);
    msg.setDestination(57874U);
    msg.setDestinationEntity(94U);
    msg.value = 0.5077458026646392;

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
    msg.setTimeStamp(0.6428273429368716);
    msg.setSource(50339U);
    msg.setSourceEntity(0U);
    msg.setDestination(44751U);
    msg.setDestinationEntity(123U);
    msg.validity = 43406U;
    msg.type = 178U;
    msg.tow = 1802032172U;
    msg.base_lat = 0.8119894427829234;
    msg.base_lon = 0.9506494789062027;
    msg.base_height = 0.6055345662380206;
    msg.n = 0.8783867970268511;
    msg.e = 0.9735231110068935;
    msg.d = 0.1352765047977036;
    msg.v_n = 0.8852816698110678;
    msg.v_e = 0.23471875816853383;
    msg.v_d = 0.2897333578511466;
    msg.satellites = 188U;
    msg.iar_hyp = 16128U;
    msg.iar_ratio = 0.022535090099060295;

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
    msg.setTimeStamp(0.8940551705397705);
    msg.setSource(12062U);
    msg.setSourceEntity(56U);
    msg.setDestination(33899U);
    msg.setDestinationEntity(71U);
    msg.validity = 20493U;
    msg.type = 31U;
    msg.tow = 3995239287U;
    msg.base_lat = 0.18762581643909737;
    msg.base_lon = 0.5889344771818317;
    msg.base_height = 0.4169081174471201;
    msg.n = 0.671331138451836;
    msg.e = 0.03662672541679235;
    msg.d = 0.8552960534424262;
    msg.v_n = 0.9539349254644811;
    msg.v_e = 0.41814570953757413;
    msg.v_d = 0.6663289796189612;
    msg.satellites = 50U;
    msg.iar_hyp = 5840U;
    msg.iar_ratio = 0.6137279869209984;

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
    msg.setTimeStamp(0.6115548385878207);
    msg.setSource(41962U);
    msg.setSourceEntity(177U);
    msg.setDestination(46578U);
    msg.setDestinationEntity(53U);
    msg.validity = 9537U;
    msg.type = 18U;
    msg.tow = 283098825U;
    msg.base_lat = 0.12235626184864279;
    msg.base_lon = 0.21141943957282416;
    msg.base_height = 0.23824348800975792;
    msg.n = 0.5388876190807227;
    msg.e = 0.9554177190875756;
    msg.d = 0.9458941919981018;
    msg.v_n = 0.17350475641056196;
    msg.v_e = 0.13124319722839184;
    msg.v_d = 0.02092207017720016;
    msg.satellites = 253U;
    msg.iar_hyp = 52178U;
    msg.iar_ratio = 0.532388502636455;

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
    msg.setTimeStamp(0.9644387109950168);
    msg.setSource(61893U);
    msg.setSourceEntity(113U);
    msg.setDestination(36339U);
    msg.setDestinationEntity(81U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.22249034244951615;
    tmp_msg_0.lon = 0.9540830188256795;
    tmp_msg_0.height = 0.8774883894893595;
    tmp_msg_0.x = 0.8264630544927566;
    tmp_msg_0.y = 0.48625615719034354;
    tmp_msg_0.z = 0.3386607332531971;
    tmp_msg_0.phi = 0.25061736026574377;
    tmp_msg_0.theta = 0.275259087118479;
    tmp_msg_0.psi = 0.7382435450563162;
    tmp_msg_0.u = 0.9274777051870436;
    tmp_msg_0.v = 0.41774199541355395;
    tmp_msg_0.w = 0.1595537711785009;
    tmp_msg_0.vx = 0.19365966495084042;
    tmp_msg_0.vy = 0.5541632507827464;
    tmp_msg_0.vz = 0.6882530611761668;
    tmp_msg_0.p = 0.02538718374669069;
    tmp_msg_0.q = 0.5938448887334624;
    tmp_msg_0.r = 0.14555806862892473;
    tmp_msg_0.depth = 0.4660038558626637;
    tmp_msg_0.alt = 0.20037865068634464;
    msg.state.set(tmp_msg_0);
    msg.type = 253U;

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
    msg.setTimeStamp(0.12207043383802607);
    msg.setSource(18843U);
    msg.setSourceEntity(43U);
    msg.setDestination(13954U);
    msg.setDestinationEntity(172U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8863040517971446;
    tmp_msg_0.lon = 0.2448930255023063;
    tmp_msg_0.height = 0.7736459817461856;
    tmp_msg_0.x = 0.05970140015676029;
    tmp_msg_0.y = 0.0382865599171367;
    tmp_msg_0.z = 0.4539165314117023;
    tmp_msg_0.phi = 0.518411337813709;
    tmp_msg_0.theta = 0.2675177084911108;
    tmp_msg_0.psi = 0.692954490148288;
    tmp_msg_0.u = 0.060660238644296816;
    tmp_msg_0.v = 0.010535732815561416;
    tmp_msg_0.w = 0.37741015542585354;
    tmp_msg_0.vx = 0.8308010455842529;
    tmp_msg_0.vy = 0.9191052272520207;
    tmp_msg_0.vz = 0.6259890142678396;
    tmp_msg_0.p = 0.7394302873880257;
    tmp_msg_0.q = 0.9405212407415948;
    tmp_msg_0.r = 0.6828515252313129;
    tmp_msg_0.depth = 0.9518823073158752;
    tmp_msg_0.alt = 0.9206306720505288;
    msg.state.set(tmp_msg_0);
    msg.type = 15U;

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
    msg.setTimeStamp(0.24378925566931453);
    msg.setSource(7474U);
    msg.setSourceEntity(12U);
    msg.setDestination(35435U);
    msg.setDestinationEntity(173U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6658616731572746;
    tmp_msg_0.lon = 0.9581656566697966;
    tmp_msg_0.height = 0.451618181346208;
    tmp_msg_0.x = 0.646111406426119;
    tmp_msg_0.y = 0.24451252587185712;
    tmp_msg_0.z = 0.8027111506944885;
    tmp_msg_0.phi = 0.5806334964083238;
    tmp_msg_0.theta = 0.8478544463823356;
    tmp_msg_0.psi = 0.46501010628363826;
    tmp_msg_0.u = 0.5573156467984451;
    tmp_msg_0.v = 0.02225188103202347;
    tmp_msg_0.w = 0.4796443321684096;
    tmp_msg_0.vx = 0.6645004849216524;
    tmp_msg_0.vy = 0.07390897344785019;
    tmp_msg_0.vz = 0.1564268594178485;
    tmp_msg_0.p = 0.8821631256344459;
    tmp_msg_0.q = 0.09604645496511921;
    tmp_msg_0.r = 0.2860400006667022;
    tmp_msg_0.depth = 0.24587212517447365;
    tmp_msg_0.alt = 0.5423118897316522;
    msg.state.set(tmp_msg_0);
    msg.type = 59U;

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
    msg.setTimeStamp(0.6070473965419899);
    msg.setSource(55505U);
    msg.setSourceEntity(0U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(4U);
    msg.value = 0.7655477659994688;

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
    msg.setTimeStamp(0.1036212732561661);
    msg.setSource(36213U);
    msg.setSourceEntity(103U);
    msg.setDestination(22241U);
    msg.setDestinationEntity(197U);
    msg.value = 0.3791563994932291;

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
    msg.setTimeStamp(0.5600003394247595);
    msg.setSource(51400U);
    msg.setSourceEntity(41U);
    msg.setDestination(47639U);
    msg.setDestinationEntity(216U);
    msg.value = 0.41710877929334644;

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
    msg.setTimeStamp(0.5984159537161786);
    msg.setSource(43746U);
    msg.setSourceEntity(123U);
    msg.setDestination(10016U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4910187642183155;

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
    msg.setTimeStamp(0.38529175697124685);
    msg.setSource(7222U);
    msg.setSourceEntity(25U);
    msg.setDestination(55585U);
    msg.setDestinationEntity(65U);
    msg.value = 0.41552603303649205;

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
    msg.setTimeStamp(0.4224051474827112);
    msg.setSource(58118U);
    msg.setSourceEntity(14U);
    msg.setDestination(54837U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5602017090780931;

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
    msg.setTimeStamp(0.485503146507582);
    msg.setSource(52267U);
    msg.setSourceEntity(114U);
    msg.setDestination(14995U);
    msg.setDestinationEntity(165U);
    msg.value = 0.37928171961455615;

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
    msg.setTimeStamp(0.743970747007651);
    msg.setSource(60034U);
    msg.setSourceEntity(104U);
    msg.setDestination(53703U);
    msg.setDestinationEntity(232U);
    msg.value = 0.3191903372503483;

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
    msg.setTimeStamp(0.07611384738485771);
    msg.setSource(58291U);
    msg.setSourceEntity(189U);
    msg.setDestination(27521U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7277205936733928;

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
    msg.setTimeStamp(0.34590487780270873);
    msg.setSource(52926U);
    msg.setSourceEntity(158U);
    msg.setDestination(48742U);
    msg.setDestinationEntity(241U);
    msg.value = 0.23576391316804313;

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
    msg.setTimeStamp(0.3940272396392418);
    msg.setSource(64686U);
    msg.setSourceEntity(55U);
    msg.setDestination(51891U);
    msg.setDestinationEntity(192U);
    msg.value = 0.657992462678747;

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
    msg.setTimeStamp(0.7415134184514791);
    msg.setSource(3497U);
    msg.setSourceEntity(232U);
    msg.setDestination(57036U);
    msg.setDestinationEntity(66U);
    msg.value = 0.3365636635868149;

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
    msg.setTimeStamp(0.39411262458906315);
    msg.setSource(13607U);
    msg.setSourceEntity(152U);
    msg.setDestination(39250U);
    msg.setDestinationEntity(143U);
    msg.value = 0.5692390548178304;

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
    msg.setTimeStamp(0.8610134787157636);
    msg.setSource(5824U);
    msg.setSourceEntity(69U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(8U);
    msg.value = 0.8557412856802165;

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
    msg.setTimeStamp(0.01157712247314302);
    msg.setSource(44064U);
    msg.setSourceEntity(157U);
    msg.setDestination(30406U);
    msg.setDestinationEntity(144U);
    msg.value = 0.45824011324610037;

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
    msg.setTimeStamp(0.29556646930416264);
    msg.setSource(38648U);
    msg.setSourceEntity(45U);
    msg.setDestination(31132U);
    msg.setDestinationEntity(149U);
    msg.id = 236U;
    msg.zoom = 203U;
    msg.action = 29U;

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
    msg.setTimeStamp(0.826215127922069);
    msg.setSource(60797U);
    msg.setSourceEntity(55U);
    msg.setDestination(54062U);
    msg.setDestinationEntity(77U);
    msg.id = 113U;
    msg.zoom = 112U;
    msg.action = 212U;

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
    msg.setTimeStamp(0.11915840283684886);
    msg.setSource(30375U);
    msg.setSourceEntity(186U);
    msg.setDestination(25018U);
    msg.setDestinationEntity(127U);
    msg.id = 131U;
    msg.zoom = 142U;
    msg.action = 27U;

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
    msg.setTimeStamp(0.14371533903025713);
    msg.setSource(23999U);
    msg.setSourceEntity(36U);
    msg.setDestination(27066U);
    msg.setDestinationEntity(214U);
    msg.id = 68U;
    msg.value = 0.18742146447426145;

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
    msg.setTimeStamp(0.6256214722425195);
    msg.setSource(58606U);
    msg.setSourceEntity(206U);
    msg.setDestination(2325U);
    msg.setDestinationEntity(103U);
    msg.id = 6U;
    msg.value = 0.3767970667210573;

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
    msg.setTimeStamp(0.7499561811080707);
    msg.setSource(18644U);
    msg.setSourceEntity(28U);
    msg.setDestination(27635U);
    msg.setDestinationEntity(110U);
    msg.id = 75U;
    msg.value = 0.593070955631055;

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
    msg.setTimeStamp(0.8258284103382196);
    msg.setSource(24075U);
    msg.setSourceEntity(106U);
    msg.setDestination(31697U);
    msg.setDestinationEntity(227U);
    msg.id = 248U;
    msg.value = 0.549826642365313;

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
    msg.setTimeStamp(0.1491302911304091);
    msg.setSource(64015U);
    msg.setSourceEntity(196U);
    msg.setDestination(55707U);
    msg.setDestinationEntity(29U);
    msg.id = 145U;
    msg.value = 0.6164178039937469;

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
    msg.setTimeStamp(0.39143574278864135);
    msg.setSource(61238U);
    msg.setSourceEntity(150U);
    msg.setDestination(29014U);
    msg.setDestinationEntity(203U);
    msg.id = 216U;
    msg.value = 0.6896811038758308;

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
    msg.setTimeStamp(0.776739005017246);
    msg.setSource(36277U);
    msg.setSourceEntity(103U);
    msg.setDestination(55812U);
    msg.setDestinationEntity(80U);
    msg.id = 174U;
    msg.angle = 0.6912290974477812;

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
    msg.setTimeStamp(0.7558760461872087);
    msg.setSource(8156U);
    msg.setSourceEntity(188U);
    msg.setDestination(55703U);
    msg.setDestinationEntity(133U);
    msg.id = 116U;
    msg.angle = 0.9041287164440986;

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
    msg.setTimeStamp(0.6606199997171093);
    msg.setSource(48905U);
    msg.setSourceEntity(82U);
    msg.setDestination(26153U);
    msg.setDestinationEntity(232U);
    msg.id = 148U;
    msg.angle = 0.8277202214166469;

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
    msg.setTimeStamp(0.524817233031383);
    msg.setSource(15264U);
    msg.setSourceEntity(133U);
    msg.setDestination(61365U);
    msg.setDestinationEntity(48U);
    msg.op = 0U;
    msg.actions.assign("BYEADGZUFDPAFMZL");

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
    msg.setTimeStamp(0.10230262158733028);
    msg.setSource(37259U);
    msg.setSourceEntity(102U);
    msg.setDestination(2743U);
    msg.setDestinationEntity(174U);
    msg.op = 77U;
    msg.actions.assign("HBBYVSJXZGJQMCILPCFCQWOIUQKERRESGDAEWYCSZFIZHWVUABJTDVJRFYXEOUKFHLOEQWBNIXQUCCTBRNOAIJIECDQPA");

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
    msg.setTimeStamp(0.45683372238487563);
    msg.setSource(20759U);
    msg.setSourceEntity(226U);
    msg.setDestination(20266U);
    msg.setDestinationEntity(171U);
    msg.op = 69U;
    msg.actions.assign("ZVMQOSHDEUVLHERJXRUJQSUOTKJKSVIVQCQFTEPKUFYBYTDGOSMWLRXWOZARYEHRRFHJOYAFLYWALNZVXFESGMTGPQNDJTIKXOWPNUCAVRBSGNEZ");

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
    msg.setTimeStamp(0.8439950373582802);
    msg.setSource(36522U);
    msg.setSourceEntity(33U);
    msg.setDestination(53253U);
    msg.setDestinationEntity(98U);
    msg.actions.assign("URVDBNTNPQIFZIEVCFMHPDCRHFXNLPPVYKKJZIHBWJJSXLWJLYKWAFEZXWFWCGRVZRGODNMGVQTCKNA");

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
    msg.setTimeStamp(0.8735053380278546);
    msg.setSource(58168U);
    msg.setSourceEntity(192U);
    msg.setDestination(17726U);
    msg.setDestinationEntity(141U);
    msg.actions.assign("UHBRENKSCD");

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
    msg.setTimeStamp(0.3028922154200153);
    msg.setSource(60285U);
    msg.setSourceEntity(80U);
    msg.setDestination(27119U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("MTELHPZRTGUKLMPKZOIMGQAMVFCSMIPNSPUXJXYDVBUHRWPOSNEJGEAVGNWTFBLORAUXQBNXCHPPVEYNSVXHTRYUPVZRYQMUSLXANDHFGMJLRICSAEUDTZYYDEMXLQOCDDKZRNQKWDJCHCKQGUKPONTKICFARZGROGXHYIHWSSRTFAFTVDLZWSQB");

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
    msg.setTimeStamp(0.9663612930564084);
    msg.setSource(48050U);
    msg.setSourceEntity(206U);
    msg.setDestination(58408U);
    msg.setDestinationEntity(139U);
    msg.button = 34U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.4866317246738818);
    msg.setSource(6216U);
    msg.setSourceEntity(145U);
    msg.setDestination(18359U);
    msg.setDestinationEntity(163U);
    msg.button = 188U;
    msg.value = 1U;

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
    msg.setTimeStamp(0.6936605926330728);
    msg.setSource(45133U);
    msg.setSourceEntity(71U);
    msg.setDestination(30546U);
    msg.setDestinationEntity(219U);
    msg.button = 144U;
    msg.value = 238U;

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
    msg.setTimeStamp(0.0020204483078279933);
    msg.setSource(30045U);
    msg.setSourceEntity(110U);
    msg.setDestination(25554U);
    msg.setDestinationEntity(96U);
    msg.op = 17U;
    msg.text.assign("TCDPEEWGQYKPIQTTJZKIYWJBCAXOYNLHZHGSKAHLWNQOUKLVYQRRUYYKBC");

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
    msg.setTimeStamp(0.33088067338325966);
    msg.setSource(63241U);
    msg.setSourceEntity(108U);
    msg.setDestination(27561U);
    msg.setDestinationEntity(149U);
    msg.op = 73U;
    msg.text.assign("RIOHLVZRCAPRCLQUSFKYWBBOXNLOJAVWNRKMHB");

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
    msg.setTimeStamp(0.33193766526077584);
    msg.setSource(431U);
    msg.setSourceEntity(125U);
    msg.setDestination(2381U);
    msg.setDestinationEntity(240U);
    msg.op = 148U;
    msg.text.assign("FFCDAVNOKPSRL");

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
    msg.setTimeStamp(0.07487548634809094);
    msg.setSource(23395U);
    msg.setSourceEntity(6U);
    msg.setDestination(15883U);
    msg.setDestinationEntity(14U);
    msg.op = 161U;
    msg.time_remain = 0.2116695790611336;
    msg.sched_time = 0.603179534498771;

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
    msg.setTimeStamp(0.1343891748373276);
    msg.setSource(36266U);
    msg.setSourceEntity(50U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(26U);
    msg.op = 130U;
    msg.time_remain = 0.7954009771123427;
    msg.sched_time = 0.44443794303889406;

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
    msg.setTimeStamp(0.9092295465396657);
    msg.setSource(12286U);
    msg.setSourceEntity(222U);
    msg.setDestination(63580U);
    msg.setDestinationEntity(204U);
    msg.op = 164U;
    msg.time_remain = 0.7798311526195657;
    msg.sched_time = 0.08034471082898331;

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
    msg.setTimeStamp(0.41689167058533616);
    msg.setSource(20046U);
    msg.setSourceEntity(195U);
    msg.setDestination(42723U);
    msg.setDestinationEntity(224U);
    msg.name.assign("KLMRJMILICFCALQOKXMUMUKJBHBHUDDEJEEWZSYPQLXVOFMSYRWPDLIKVNRITWEWCZVCAUCPOCJGNFYSEJGNGXJMZSMLTOLPYQHXSAUW");
    msg.op = 192U;
    msg.sched_time = 0.379760904890332;

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
    msg.setTimeStamp(0.5085578969775446);
    msg.setSource(10234U);
    msg.setSourceEntity(92U);
    msg.setDestination(15225U);
    msg.setDestinationEntity(245U);
    msg.name.assign("IEAKZGRSEVSUQXJFWXZYLCHADTWBFPCKRHVLZACLZATIMSBZGHVPHYIFDVOGTBYXTIJIDATQETCML");
    msg.op = 60U;
    msg.sched_time = 0.23361841224087443;

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
    msg.setTimeStamp(0.3198926350123251);
    msg.setSource(5565U);
    msg.setSourceEntity(50U);
    msg.setDestination(1190U);
    msg.setDestinationEntity(167U);
    msg.name.assign("VFRAFYVVTCJGPTXMXYWNBTAZLHYDSFNCLJPNSTXICDJBNKYQWDLWRWEYAHEBRLSAWMGPHUHDTJSZVOFHZRHGKBUBYNEROVCMFRGSKHZDSGRZXBU");
    msg.op = 156U;
    msg.sched_time = 0.2583195060217567;

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
    msg.setTimeStamp(0.6578176856301944);
    msg.setSource(21320U);
    msg.setSourceEntity(238U);
    msg.setDestination(21943U);
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
    msg.setTimeStamp(0.8575885063561275);
    msg.setSource(50324U);
    msg.setSourceEntity(195U);
    msg.setDestination(9562U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.5532515450646792);
    msg.setSource(58035U);
    msg.setSourceEntity(208U);
    msg.setDestination(44228U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.4516973363807435);
    msg.setSource(40157U);
    msg.setSourceEntity(197U);
    msg.setDestination(8973U);
    msg.setDestinationEntity(142U);
    msg.name.assign("RLEPMGMIAOMFTQJHYDWTXXACCBYTYZOOOURDXJQPVHIEHEFRAJWFIDIHZPQUXQJKVADNMONCMNHXZWBKLURSOLFSKRMCZSFZOYGOPMJUDPIAHMLEDZNXHYSYAZGKDQKEHEEVIOFSJULRWQZVVTNUCPWDQYEVATSWNENGFCRPXBLUUVBCIZWVUBYSJPTHGGNSCDQBNGVKBCBBZJQMGJSVCRKQMIKWTELTIFYYPOSFLIXLPULXRKAWJADWRXFGG");
    msg.state = 158U;

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
    msg.setTimeStamp(0.2567532117262814);
    msg.setSource(51982U);
    msg.setSourceEntity(66U);
    msg.setDestination(52607U);
    msg.setDestinationEntity(76U);
    msg.name.assign("ITPUQTKPUNYQUBLJHGBXBFMWDOBITPPOVNMIOIKRITGGWXLEWDRSQ");
    msg.state = 234U;

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
    msg.setTimeStamp(0.8759878575647414);
    msg.setSource(28670U);
    msg.setSourceEntity(159U);
    msg.setDestination(1166U);
    msg.setDestinationEntity(134U);
    msg.name.assign("IGOUKCYYHWFTXMZSNWAHETTIHHQKYDPABUXEIBKMETZLHKMQUSO");
    msg.state = 146U;

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
    msg.setTimeStamp(0.009959700118793546);
    msg.setSource(38664U);
    msg.setSourceEntity(77U);
    msg.setDestination(36565U);
    msg.setDestinationEntity(188U);
    msg.name.assign("LNQHVGYFXSNPSTWRCKTW");
    msg.value = 57U;

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
    msg.setTimeStamp(0.677586024257533);
    msg.setSource(37219U);
    msg.setSourceEntity(198U);
    msg.setDestination(25621U);
    msg.setDestinationEntity(107U);
    msg.name.assign("FYDLDXXYZPMHVYSNKJMPDYCLU");
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
    msg.setTimeStamp(0.6460294544742707);
    msg.setSource(4832U);
    msg.setSourceEntity(118U);
    msg.setDestination(16936U);
    msg.setDestinationEntity(80U);
    msg.name.assign("BOSKAKCOKQVUEXDDHHBYTOYBSEZSQJWMFQGSIIGPZUTAOJUYAKPWEFNTXSXJPHWJDLWLDGBMOGFEIUJNKPURQYXDITEZVFJMWTTSCCFQINRMFOASPJDHCBMIRDZWSXAKCTHWUGZORNMDNYHBIVQONJBHWMPJFYRHLENGIPPQZCVD");
    msg.value = 71U;

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
    msg.setTimeStamp(0.04601235972565432);
    msg.setSource(5454U);
    msg.setSourceEntity(161U);
    msg.setDestination(16391U);
    msg.setDestinationEntity(227U);
    msg.name.assign("KNBCABLWQRICKK");

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
    msg.setTimeStamp(0.965495714275921);
    msg.setSource(39328U);
    msg.setSourceEntity(230U);
    msg.setDestination(28445U);
    msg.setDestinationEntity(121U);
    msg.name.assign("GEQJZUEWLTKUAIZCKVQKREBHLEGYPFWQWJXMJGJIARJGLXZNLYGMEMEAUXDBPTOTAVPEBHWVYAVUSZOSVIMPOWOCBDYSDPNBZAJIIFFTIZJIBJZTONPQKHWKBSZGV");

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
    msg.setTimeStamp(0.9089895723890081);
    msg.setSource(52926U);
    msg.setSourceEntity(66U);
    msg.setDestination(36567U);
    msg.setDestinationEntity(249U);
    msg.name.assign("YGJVBJPMTLWGDPZIZXJXHLRLVDZWOVVZHOQRSUEIUQZWYKFFQWYAHXUNQYPLJSBDITGMKZFZQDNRCKIHXOFXBSRWC");

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
    msg.setTimeStamp(0.8342857400003231);
    msg.setSource(38885U);
    msg.setSourceEntity(230U);
    msg.setDestination(44092U);
    msg.setDestinationEntity(11U);
    msg.name.assign("LEYZVAINUQGPEQJHTSKLKPDVVKAAUMXKXNXKOYFNHLJFJRBCZLWLMBXQDAGDXBFZBBIBGXVPEITVXOLOLFTQTFDFIKKCFUPXJOWHJNOLIVGADOKPGZAQZOAMZPDUGIKHZNZMMMSOYXSNPLKEEETMMSUBFARTGSWNIHQNRVXCEIHLHWVDVUEFRHYRDYYQSFJTM");
    msg.value = 7U;

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
    msg.setTimeStamp(0.9293635675340288);
    msg.setSource(50971U);
    msg.setSourceEntity(156U);
    msg.setDestination(38514U);
    msg.setDestinationEntity(123U);
    msg.name.assign("CJOYAYOSWRTCSGQODGBFIQRJMSRLPWTKXNNESAUWNNTHZIZUXSFYGMUJBGOEJJPVHDWZWBTSYXCXLQYYFVVQBPKTCGYETHZFOVOHJSDHWRSLFUDUQARFGYKDBZOPCCAFXODGUBNVQFEPQMXXBRLKCFWRHXHAPJEUNPZUWDQTIRKNNDJMUUMVHXIIVPTLVYZNZLECDOMGEKTEPLGMZAXQAJEJFMM");
    msg.value = 135U;

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
    msg.setTimeStamp(0.4756128842093288);
    msg.setSource(46456U);
    msg.setSourceEntity(70U);
    msg.setDestination(22059U);
    msg.setDestinationEntity(33U);
    msg.name.assign("RKGUAJZAPGORYROTWWXMWUF");
    msg.value = 44U;

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
    msg.setTimeStamp(0.9993608198658741);
    msg.setSource(14852U);
    msg.setSourceEntity(242U);
    msg.setDestination(55954U);
    msg.setDestinationEntity(198U);
    msg.id = 187U;
    msg.period = 1421862614U;
    msg.duty_cycle = 4144222567U;

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
    msg.setTimeStamp(0.03994017691083318);
    msg.setSource(4346U);
    msg.setSourceEntity(5U);
    msg.setDestination(60090U);
    msg.setDestinationEntity(251U);
    msg.id = 16U;
    msg.period = 1974093525U;
    msg.duty_cycle = 564659235U;

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
    msg.setTimeStamp(0.4805619880217217);
    msg.setSource(52310U);
    msg.setSourceEntity(125U);
    msg.setDestination(41594U);
    msg.setDestinationEntity(10U);
    msg.id = 70U;
    msg.period = 1518901271U;
    msg.duty_cycle = 2182516307U;

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
    msg.setTimeStamp(0.5821331646085377);
    msg.setSource(19384U);
    msg.setSourceEntity(196U);
    msg.setDestination(38306U);
    msg.setDestinationEntity(22U);
    msg.id = 157U;
    msg.period = 3885178688U;
    msg.duty_cycle = 466920785U;

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
    msg.setTimeStamp(0.5315999070175071);
    msg.setSource(46776U);
    msg.setSourceEntity(222U);
    msg.setDestination(5406U);
    msg.setDestinationEntity(53U);
    msg.id = 102U;
    msg.period = 2177276438U;
    msg.duty_cycle = 3217970737U;

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
    msg.setTimeStamp(0.14435387390903354);
    msg.setSource(56934U);
    msg.setSourceEntity(107U);
    msg.setDestination(48195U);
    msg.setDestinationEntity(111U);
    msg.id = 204U;
    msg.period = 2844513806U;
    msg.duty_cycle = 958790657U;

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
    msg.setTimeStamp(0.6523763717920934);
    msg.setSource(207U);
    msg.setSourceEntity(11U);
    msg.setDestination(51516U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.9812049346024666;
    msg.lon = 0.4545043573187184;
    msg.height = 0.5081776869957729;
    msg.x = 0.583275637340934;
    msg.y = 0.08688907062745566;
    msg.z = 0.6191663167658141;
    msg.phi = 0.6807457578367548;
    msg.theta = 0.07033531592403319;
    msg.psi = 0.42628148423159273;
    msg.u = 0.8373887238956795;
    msg.v = 0.7024508955028802;
    msg.w = 0.4373211924411403;
    msg.vx = 0.22063790677151218;
    msg.vy = 0.2259273097391643;
    msg.vz = 0.16182385298762691;
    msg.p = 0.5947273683891109;
    msg.q = 0.961434004112426;
    msg.r = 0.5843794994582157;
    msg.depth = 0.46123478156525954;
    msg.alt = 0.729532252572374;

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
    msg.setTimeStamp(0.2740383642612212);
    msg.setSource(29516U);
    msg.setSourceEntity(70U);
    msg.setDestination(27807U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.6104991546463779;
    msg.lon = 0.6057023767264887;
    msg.height = 0.5973926256097218;
    msg.x = 0.5196838267065557;
    msg.y = 0.5079906621579262;
    msg.z = 0.30905784628809296;
    msg.phi = 0.7858943471909076;
    msg.theta = 0.18308312568894614;
    msg.psi = 0.36172873315063114;
    msg.u = 0.48477968610830513;
    msg.v = 0.323110879211121;
    msg.w = 0.5512313488886421;
    msg.vx = 0.9936201104032196;
    msg.vy = 0.11290633065253175;
    msg.vz = 0.8506653374839034;
    msg.p = 0.9058312551278191;
    msg.q = 0.2467395400043726;
    msg.r = 0.8094752515885465;
    msg.depth = 0.5233840242843041;
    msg.alt = 0.08060199181241445;

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
    msg.setTimeStamp(0.011292100268184946);
    msg.setSource(36043U);
    msg.setSourceEntity(20U);
    msg.setDestination(32922U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.4080208602504709;
    msg.lon = 0.11660664972437973;
    msg.height = 0.14812437386979838;
    msg.x = 0.39557751778839356;
    msg.y = 0.27248454623977725;
    msg.z = 0.05848190023105615;
    msg.phi = 0.4741847098994104;
    msg.theta = 0.0200145406443607;
    msg.psi = 0.9737704068554426;
    msg.u = 0.003054271451585433;
    msg.v = 0.7099940992249177;
    msg.w = 0.6668811268068816;
    msg.vx = 0.6858041580498039;
    msg.vy = 0.5686981709136598;
    msg.vz = 0.6687797642361144;
    msg.p = 0.4119605697912927;
    msg.q = 0.41770700399192384;
    msg.r = 0.5114606868619279;
    msg.depth = 0.8096061221761336;
    msg.alt = 0.37485311900351137;

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
    msg.setTimeStamp(0.3051182216585505);
    msg.setSource(29115U);
    msg.setSourceEntity(17U);
    msg.setDestination(44116U);
    msg.setDestinationEntity(40U);
    msg.x = 0.959135398245642;
    msg.y = 0.3935937696671341;
    msg.z = 0.24381439570119734;

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
    msg.setTimeStamp(0.8765872789051385);
    msg.setSource(5018U);
    msg.setSourceEntity(149U);
    msg.setDestination(23296U);
    msg.setDestinationEntity(149U);
    msg.x = 0.4852842717520358;
    msg.y = 0.9567639050012093;
    msg.z = 0.9373932968755769;

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
    msg.setTimeStamp(0.9348077007921635);
    msg.setSource(5956U);
    msg.setSourceEntity(16U);
    msg.setDestination(20660U);
    msg.setDestinationEntity(168U);
    msg.x = 0.3787357092619106;
    msg.y = 0.9711533644272058;
    msg.z = 0.8933176642050726;

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
    msg.setTimeStamp(0.6006064876449644);
    msg.setSource(55467U);
    msg.setSourceEntity(160U);
    msg.setDestination(12256U);
    msg.setDestinationEntity(123U);
    msg.value = 0.6567686796114558;

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
    msg.setTimeStamp(0.2244587073581269);
    msg.setSource(11045U);
    msg.setSourceEntity(28U);
    msg.setDestination(56739U);
    msg.setDestinationEntity(152U);
    msg.value = 0.8163560732421321;

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
    msg.setTimeStamp(0.41368720472046006);
    msg.setSource(28568U);
    msg.setSourceEntity(251U);
    msg.setDestination(4076U);
    msg.setDestinationEntity(72U);
    msg.value = 0.16955154107762993;

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
    msg.setTimeStamp(0.13778134167990885);
    msg.setSource(26070U);
    msg.setSourceEntity(105U);
    msg.setDestination(9742U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5354652996353046;

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
    msg.setTimeStamp(0.6449260031400172);
    msg.setSource(37232U);
    msg.setSourceEntity(29U);
    msg.setDestination(13631U);
    msg.setDestinationEntity(63U);
    msg.value = 0.6957043114647118;

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
    msg.setTimeStamp(0.23215354241484998);
    msg.setSource(25544U);
    msg.setSourceEntity(207U);
    msg.setDestination(59245U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8598421559878651;

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
    msg.setTimeStamp(0.7725563289252414);
    msg.setSource(49055U);
    msg.setSourceEntity(99U);
    msg.setDestination(10700U);
    msg.setDestinationEntity(228U);
    msg.x = 0.9955382595126782;
    msg.y = 0.5579109494554466;
    msg.z = 0.7600210366326244;
    msg.phi = 0.06807125250560742;
    msg.theta = 0.8124687875400165;
    msg.psi = 0.6112606190676797;
    msg.p = 0.9223003413216059;
    msg.q = 0.4531970360978327;
    msg.r = 0.1669254964656568;
    msg.u = 0.175263814014621;
    msg.v = 0.10036792172503128;
    msg.w = 0.7990881024588363;
    msg.bias_psi = 0.9678951128549166;
    msg.bias_r = 0.8118777911852607;

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
    msg.setTimeStamp(0.26677574991532726);
    msg.setSource(61474U);
    msg.setSourceEntity(157U);
    msg.setDestination(34108U);
    msg.setDestinationEntity(100U);
    msg.x = 0.6718223045453674;
    msg.y = 0.22549506919895812;
    msg.z = 0.49501975204988724;
    msg.phi = 0.9064409984375101;
    msg.theta = 0.6381547641971345;
    msg.psi = 0.6441542772274129;
    msg.p = 0.42218521770771833;
    msg.q = 0.17079271751022052;
    msg.r = 0.5742668370409154;
    msg.u = 0.7287557202854877;
    msg.v = 0.5557502224626198;
    msg.w = 0.9687730721252592;
    msg.bias_psi = 0.2743477432823189;
    msg.bias_r = 0.6268823515909998;

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
    msg.setTimeStamp(0.975034624315469);
    msg.setSource(24567U);
    msg.setSourceEntity(98U);
    msg.setDestination(56349U);
    msg.setDestinationEntity(107U);
    msg.x = 0.7400272189150431;
    msg.y = 0.6861310666948576;
    msg.z = 0.8715942624394192;
    msg.phi = 0.47623672559471286;
    msg.theta = 0.5148890729635816;
    msg.psi = 0.6704627261093489;
    msg.p = 0.31541424107035354;
    msg.q = 0.5430710021484847;
    msg.r = 0.5778072171794606;
    msg.u = 0.6100780165841869;
    msg.v = 0.21241321040352212;
    msg.w = 0.028264493599344465;
    msg.bias_psi = 0.6873274731202716;
    msg.bias_r = 0.5413535790943821;

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
    msg.setTimeStamp(0.8641292404750287);
    msg.setSource(41380U);
    msg.setSourceEntity(64U);
    msg.setDestination(18410U);
    msg.setDestinationEntity(204U);
    msg.bias_psi = 0.31070939670696085;
    msg.bias_r = 0.4845903016095493;
    msg.cog = 0.7481891449825117;
    msg.cyaw = 0.2699346342101975;
    msg.lbl_rej_level = 0.5671711064742021;
    msg.gps_rej_level = 0.014970190608881162;
    msg.custom_x = 0.040723862650800635;
    msg.custom_y = 0.36356679574401607;
    msg.custom_z = 0.1527548409978171;

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
    msg.setTimeStamp(0.8778972224228387);
    msg.setSource(41038U);
    msg.setSourceEntity(215U);
    msg.setDestination(20886U);
    msg.setDestinationEntity(224U);
    msg.bias_psi = 0.01335345382120312;
    msg.bias_r = 0.7311657205158067;
    msg.cog = 0.7983876637424397;
    msg.cyaw = 0.7148775642177122;
    msg.lbl_rej_level = 0.8979365474116624;
    msg.gps_rej_level = 0.35940991590509963;
    msg.custom_x = 0.5618909039803985;
    msg.custom_y = 0.31346094462705076;
    msg.custom_z = 0.8172366482084283;

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
    msg.setTimeStamp(0.7212066081951414);
    msg.setSource(56980U);
    msg.setSourceEntity(85U);
    msg.setDestination(30084U);
    msg.setDestinationEntity(220U);
    msg.bias_psi = 0.7550556490314202;
    msg.bias_r = 0.9960677105725446;
    msg.cog = 0.498599503553359;
    msg.cyaw = 0.6301310898086354;
    msg.lbl_rej_level = 0.296703524610091;
    msg.gps_rej_level = 0.49483074342254496;
    msg.custom_x = 0.22251692879793716;
    msg.custom_y = 0.6982871672856872;
    msg.custom_z = 0.07078624570736147;

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
    msg.setTimeStamp(0.2965897452053886);
    msg.setSource(59584U);
    msg.setSourceEntity(91U);
    msg.setDestination(49202U);
    msg.setDestinationEntity(233U);
    msg.utc_time = 0.03223096502755629;
    msg.reason = 120U;

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
    msg.setTimeStamp(0.7883925414670448);
    msg.setSource(27791U);
    msg.setSourceEntity(249U);
    msg.setDestination(11672U);
    msg.setDestinationEntity(249U);
    msg.utc_time = 0.8183798825940407;
    msg.reason = 5U;

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
    msg.setTimeStamp(0.7118825315275387);
    msg.setSource(62492U);
    msg.setSourceEntity(240U);
    msg.setDestination(50984U);
    msg.setDestinationEntity(29U);
    msg.utc_time = 0.8794135325575748;
    msg.reason = 196U;

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
    msg.setTimeStamp(0.21887791982157823);
    msg.setSource(53466U);
    msg.setSourceEntity(88U);
    msg.setDestination(5927U);
    msg.setDestinationEntity(26U);
    msg.id = 84U;
    msg.range = 0.16730773939013843;
    msg.acceptance = 0U;

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
    msg.setTimeStamp(0.5957021040704724);
    msg.setSource(58126U);
    msg.setSourceEntity(158U);
    msg.setDestination(33635U);
    msg.setDestinationEntity(74U);
    msg.id = 107U;
    msg.range = 0.3332634911039467;
    msg.acceptance = 233U;

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
    msg.setTimeStamp(0.021084444977327532);
    msg.setSource(19631U);
    msg.setSourceEntity(69U);
    msg.setDestination(9195U);
    msg.setDestinationEntity(101U);
    msg.id = 121U;
    msg.range = 0.5018707348084216;
    msg.acceptance = 101U;

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
    msg.setTimeStamp(0.17353993180974048);
    msg.setSource(2370U);
    msg.setSourceEntity(180U);
    msg.setDestination(46546U);
    msg.setDestinationEntity(212U);
    msg.type = 88U;
    msg.reason = 147U;
    msg.value = 0.09502562957541916;
    msg.timestep = 0.534663569286971;

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
    msg.setTimeStamp(0.23160748014575006);
    msg.setSource(1634U);
    msg.setSourceEntity(190U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(216U);
    msg.type = 33U;
    msg.reason = 28U;
    msg.value = 0.26160858674738163;
    msg.timestep = 0.06761247920741897;

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
    msg.setTimeStamp(0.6402541092147743);
    msg.setSource(63871U);
    msg.setSourceEntity(150U);
    msg.setDestination(24313U);
    msg.setDestinationEntity(159U);
    msg.type = 133U;
    msg.reason = 174U;
    msg.value = 0.1742715560212602;
    msg.timestep = 0.485471331366089;

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
    msg.setTimeStamp(0.37116635530680664);
    msg.setSource(8792U);
    msg.setSourceEntity(252U);
    msg.setDestination(36008U);
    msg.setDestinationEntity(226U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MNOLANWWDONRBCNXRCUOJPMRJFSZQGVJWQULEPWDSBRDHABPOMSCBJIRXZHLCLAKCUQ");
    tmp_msg_0.lat = 0.7913007026357973;
    tmp_msg_0.lon = 0.19360776465903706;
    tmp_msg_0.depth = 0.18008511020829854;
    tmp_msg_0.query_channel = 106U;
    tmp_msg_0.reply_channel = 163U;
    tmp_msg_0.transponder_delay = 92U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.15211427567059033;
    msg.y = 0.7488200797303858;
    msg.var_x = 0.5864503396686227;
    msg.var_y = 0.830623847488798;
    msg.distance = 0.22677295201358272;

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
    msg.setTimeStamp(0.6074795012531662);
    msg.setSource(20046U);
    msg.setSourceEntity(115U);
    msg.setDestination(49396U);
    msg.setDestinationEntity(67U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RIIOCLPRHOJKJFRYJOUQCP");
    tmp_msg_0.lat = 0.7658513021676673;
    tmp_msg_0.lon = 0.9440705462332288;
    tmp_msg_0.depth = 0.2861016445238863;
    tmp_msg_0.query_channel = 102U;
    tmp_msg_0.reply_channel = 233U;
    tmp_msg_0.transponder_delay = 45U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.18632402610553833;
    msg.y = 0.9207921637666935;
    msg.var_x = 0.26796261056396753;
    msg.var_y = 0.38096948585473533;
    msg.distance = 0.9516118980485614;

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
    msg.setTimeStamp(0.33044599693907417);
    msg.setSource(58734U);
    msg.setSourceEntity(175U);
    msg.setDestination(46703U);
    msg.setDestinationEntity(230U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MKNNJOGUTEDGHGXAFBLLAZPHOSDVLPKO");
    tmp_msg_0.lat = 0.2720081212058154;
    tmp_msg_0.lon = 0.04323661373356458;
    tmp_msg_0.depth = 0.9821201771307319;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 250U;
    tmp_msg_0.transponder_delay = 81U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8586406827328842;
    msg.y = 0.9030493248665376;
    msg.var_x = 0.29561210656140124;
    msg.var_y = 0.9880046029961917;
    msg.distance = 0.39245291529232784;

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
    msg.setTimeStamp(0.1673159802094043);
    msg.setSource(42553U);
    msg.setSourceEntity(231U);
    msg.setDestination(55487U);
    msg.setDestinationEntity(173U);
    msg.state = 218U;

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
    msg.setTimeStamp(0.7021756863346007);
    msg.setSource(38227U);
    msg.setSourceEntity(79U);
    msg.setDestination(39669U);
    msg.setDestinationEntity(77U);
    msg.state = 226U;

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
    msg.setTimeStamp(0.45724569299743445);
    msg.setSource(11876U);
    msg.setSourceEntity(32U);
    msg.setDestination(47000U);
    msg.setDestinationEntity(60U);
    msg.state = 31U;

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
    msg.setTimeStamp(0.5830465808655392);
    msg.setSource(39413U);
    msg.setSourceEntity(194U);
    msg.setDestination(62645U);
    msg.setDestinationEntity(194U);
    msg.x = 0.5233129233085699;
    msg.y = 0.8303596457493067;
    msg.z = 0.24668195585292685;

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
    msg.setTimeStamp(0.7860735584422593);
    msg.setSource(14301U);
    msg.setSourceEntity(182U);
    msg.setDestination(40821U);
    msg.setDestinationEntity(201U);
    msg.x = 0.9114765453176841;
    msg.y = 0.4040039208347007;
    msg.z = 0.6396126585125829;

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
    msg.setTimeStamp(0.7082914060980978);
    msg.setSource(1137U);
    msg.setSourceEntity(236U);
    msg.setDestination(4468U);
    msg.setDestinationEntity(98U);
    msg.x = 0.19284006902684636;
    msg.y = 0.30915981509292156;
    msg.z = 0.3462095101237027;

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
    msg.setTimeStamp(0.638544890097086);
    msg.setSource(32354U);
    msg.setSourceEntity(122U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(95U);
    msg.va = 0.690371195300461;
    msg.aoa = 0.08734345560189505;
    msg.ssa = 0.534160682942771;

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
    msg.setTimeStamp(0.2876710735899487);
    msg.setSource(49737U);
    msg.setSourceEntity(243U);
    msg.setDestination(8667U);
    msg.setDestinationEntity(108U);
    msg.va = 0.1359280419550738;
    msg.aoa = 0.19900279267250587;
    msg.ssa = 0.7430929694281397;

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
    msg.setTimeStamp(0.49569982841574367);
    msg.setSource(35706U);
    msg.setSourceEntity(59U);
    msg.setDestination(5562U);
    msg.setDestinationEntity(132U);
    msg.va = 0.31917868486930545;
    msg.aoa = 0.16018217752507047;
    msg.ssa = 0.9629997841188338;

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
    msg.setTimeStamp(0.6483214593821155);
    msg.setSource(62822U);
    msg.setSourceEntity(154U);
    msg.setDestination(17843U);
    msg.setDestinationEntity(80U);
    msg.value = 0.19358825566247673;

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
    msg.setTimeStamp(0.329569504531691);
    msg.setSource(1601U);
    msg.setSourceEntity(190U);
    msg.setDestination(11750U);
    msg.setDestinationEntity(188U);
    msg.value = 0.11052977474355508;

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
    msg.setTimeStamp(0.043498097496991406);
    msg.setSource(29945U);
    msg.setSourceEntity(186U);
    msg.setDestination(63764U);
    msg.setDestinationEntity(160U);
    msg.value = 0.5481025962065911;

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
    msg.setTimeStamp(0.01073511346414957);
    msg.setSource(45194U);
    msg.setSourceEntity(2U);
    msg.setDestination(63138U);
    msg.setDestinationEntity(185U);
    msg.value = 0.6162595924801108;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.16220774971705276);
    msg.setSource(22845U);
    msg.setSourceEntity(223U);
    msg.setDestination(18853U);
    msg.setDestinationEntity(64U);
    msg.value = 0.32270673479025436;
    msg.z_units = 233U;

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
    msg.setTimeStamp(0.0909411739342787);
    msg.setSource(22475U);
    msg.setSourceEntity(156U);
    msg.setDestination(60306U);
    msg.setDestinationEntity(225U);
    msg.value = 0.6744728952520421;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.7105793581300062);
    msg.setSource(32603U);
    msg.setSourceEntity(13U);
    msg.setDestination(6051U);
    msg.setDestinationEntity(59U);
    msg.value = 0.8368723165810525;
    msg.speed_units = 70U;

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
    msg.setTimeStamp(0.524138281054494);
    msg.setSource(1847U);
    msg.setSourceEntity(97U);
    msg.setDestination(22799U);
    msg.setDestinationEntity(213U);
    msg.value = 0.5776302509490828;
    msg.speed_units = 75U;

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
    msg.setTimeStamp(0.03343250757498917);
    msg.setSource(29131U);
    msg.setSourceEntity(93U);
    msg.setDestination(54728U);
    msg.setDestinationEntity(195U);
    msg.value = 0.9508244023752176;
    msg.speed_units = 205U;

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
    msg.setTimeStamp(0.9411623160701567);
    msg.setSource(51457U);
    msg.setSourceEntity(94U);
    msg.setDestination(16813U);
    msg.setDestinationEntity(249U);
    msg.value = 0.14075077364715305;

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
    msg.setTimeStamp(0.6073681388035153);
    msg.setSource(26260U);
    msg.setSourceEntity(176U);
    msg.setDestination(61518U);
    msg.setDestinationEntity(109U);
    msg.value = 0.950723812494991;

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
    msg.setTimeStamp(0.1324007335640116);
    msg.setSource(23307U);
    msg.setSourceEntity(27U);
    msg.setDestination(19979U);
    msg.setDestinationEntity(31U);
    msg.value = 0.6718807180336488;

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
    msg.setTimeStamp(0.03483511152956009);
    msg.setSource(58559U);
    msg.setSourceEntity(236U);
    msg.setDestination(5041U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5599064084916082;

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
    msg.setTimeStamp(0.2775849912196209);
    msg.setSource(47199U);
    msg.setSourceEntity(77U);
    msg.setDestination(14006U);
    msg.setDestinationEntity(209U);
    msg.value = 0.5913509681271101;

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
    msg.setTimeStamp(0.6777892065642059);
    msg.setSource(783U);
    msg.setSourceEntity(201U);
    msg.setDestination(45378U);
    msg.setDestinationEntity(48U);
    msg.value = 0.3086613644497027;

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
    msg.setTimeStamp(0.6049788386281986);
    msg.setSource(59426U);
    msg.setSourceEntity(189U);
    msg.setDestination(19173U);
    msg.setDestinationEntity(100U);
    msg.value = 0.07234540099468978;

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
    msg.setTimeStamp(0.6286466820104295);
    msg.setSource(6214U);
    msg.setSourceEntity(15U);
    msg.setDestination(27066U);
    msg.setDestinationEntity(58U);
    msg.value = 0.6697950967379204;

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
    msg.setTimeStamp(0.937132050837698);
    msg.setSource(49047U);
    msg.setSourceEntity(120U);
    msg.setDestination(36022U);
    msg.setDestinationEntity(88U);
    msg.value = 0.9117067630153595;

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
    msg.setTimeStamp(0.7652881796904851);
    msg.setSource(18998U);
    msg.setSourceEntity(221U);
    msg.setDestination(40540U);
    msg.setDestinationEntity(19U);
    msg.path_ref = 3022793662U;
    msg.start_lat = 0.4166400710194469;
    msg.start_lon = 0.4463124456073402;
    msg.start_z = 0.6532154310602333;
    msg.start_z_units = 198U;
    msg.end_lat = 0.03883543968563752;
    msg.end_lon = 0.61153994654867;
    msg.end_z = 0.335831728743722;
    msg.end_z_units = 231U;
    msg.speed = 0.3588725473219564;
    msg.speed_units = 203U;
    msg.lradius = 0.07007906757054783;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.6662373933718037);
    msg.setSource(37732U);
    msg.setSourceEntity(179U);
    msg.setDestination(42203U);
    msg.setDestinationEntity(241U);
    msg.path_ref = 2942798801U;
    msg.start_lat = 0.3584723527467141;
    msg.start_lon = 0.43002331616602074;
    msg.start_z = 0.00482105610775152;
    msg.start_z_units = 139U;
    msg.end_lat = 0.11040757461738604;
    msg.end_lon = 0.6618965960611878;
    msg.end_z = 0.10463067791061609;
    msg.end_z_units = 20U;
    msg.speed = 0.5394623713244512;
    msg.speed_units = 89U;
    msg.lradius = 0.29984248781227574;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.47976481196999365);
    msg.setSource(33668U);
    msg.setSourceEntity(83U);
    msg.setDestination(59360U);
    msg.setDestinationEntity(128U);
    msg.path_ref = 304254825U;
    msg.start_lat = 0.9111523284593426;
    msg.start_lon = 0.7243822059922101;
    msg.start_z = 0.4755926001384374;
    msg.start_z_units = 204U;
    msg.end_lat = 0.3586567057246467;
    msg.end_lon = 0.32822481016853244;
    msg.end_z = 0.6409156497139594;
    msg.end_z_units = 63U;
    msg.speed = 0.17418855955592305;
    msg.speed_units = 202U;
    msg.lradius = 0.44624699095444753;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.13220804912920148);
    msg.setSource(24443U);
    msg.setSourceEntity(69U);
    msg.setDestination(33247U);
    msg.setDestinationEntity(168U);
    msg.x = 0.10721584555690367;
    msg.y = 0.8090007753070115;
    msg.z = 0.9888251346524853;
    msg.k = 0.47769526123273787;
    msg.m = 0.3460094583128951;
    msg.n = 0.39225929760103084;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.2668605885519082);
    msg.setSource(62399U);
    msg.setSourceEntity(24U);
    msg.setDestination(23115U);
    msg.setDestinationEntity(101U);
    msg.x = 0.13088072956853436;
    msg.y = 0.07788182403310129;
    msg.z = 0.21685984343820952;
    msg.k = 0.14129830977719093;
    msg.m = 0.33870646103173474;
    msg.n = 0.8348808077284082;
    msg.flags = 22U;

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
    msg.setTimeStamp(0.8382965996219841);
    msg.setSource(13111U);
    msg.setSourceEntity(235U);
    msg.setDestination(7555U);
    msg.setDestinationEntity(193U);
    msg.x = 0.5927074129584747;
    msg.y = 0.7675330612335041;
    msg.z = 0.8421443862835727;
    msg.k = 0.1275986497540591;
    msg.m = 0.9018343672407076;
    msg.n = 0.9109811336984684;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.5124870033206081);
    msg.setSource(38666U);
    msg.setSourceEntity(206U);
    msg.setDestination(9415U);
    msg.setDestinationEntity(105U);
    msg.value = 0.5995015589059551;

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
    msg.setTimeStamp(0.28733703849833336);
    msg.setSource(3148U);
    msg.setSourceEntity(173U);
    msg.setDestination(45334U);
    msg.setDestinationEntity(184U);
    msg.value = 0.03829183228810118;

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
    msg.setTimeStamp(0.47473349585488755);
    msg.setSource(33253U);
    msg.setSourceEntity(59U);
    msg.setDestination(48619U);
    msg.setDestinationEntity(212U);
    msg.value = 0.450884664080064;

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
    msg.setTimeStamp(0.7268800919783257);
    msg.setSource(16155U);
    msg.setSourceEntity(134U);
    msg.setDestination(22933U);
    msg.setDestinationEntity(194U);
    msg.u = 0.8838917225457062;
    msg.v = 0.9261734076292845;
    msg.w = 0.30534179938704087;
    msg.p = 0.4416522558803476;
    msg.q = 0.3729476572677648;
    msg.r = 0.1473282937860998;
    msg.flags = 211U;

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
    msg.setTimeStamp(0.27181955556402126);
    msg.setSource(59641U);
    msg.setSourceEntity(72U);
    msg.setDestination(51794U);
    msg.setDestinationEntity(134U);
    msg.u = 0.35330920349637296;
    msg.v = 0.7644771908154543;
    msg.w = 0.22647326857340577;
    msg.p = 0.8335523579930819;
    msg.q = 0.6006352824378902;
    msg.r = 0.4213152992745951;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.9980376723560046);
    msg.setSource(4868U);
    msg.setSourceEntity(190U);
    msg.setDestination(24847U);
    msg.setDestinationEntity(134U);
    msg.u = 0.9386881950325217;
    msg.v = 0.2551742469811977;
    msg.w = 0.9812371979175115;
    msg.p = 0.5779095241064112;
    msg.q = 0.3696896739396064;
    msg.r = 0.20705777289798943;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.31771453346586565);
    msg.setSource(30247U);
    msg.setSourceEntity(92U);
    msg.setDestination(26616U);
    msg.setDestinationEntity(100U);
    msg.path_ref = 2578297153U;
    msg.start_lat = 0.031245565715862456;
    msg.start_lon = 0.3979397309514847;
    msg.start_z = 0.8301089817187285;
    msg.start_z_units = 106U;
    msg.end_lat = 0.7321420266739792;
    msg.end_lon = 0.1450143008658833;
    msg.end_z = 0.6988760043255512;
    msg.end_z_units = 40U;
    msg.lradius = 0.6794700913058959;
    msg.flags = 192U;
    msg.x = 0.6631804171406012;
    msg.y = 0.6406810297050414;
    msg.z = 0.5346295229191742;
    msg.vx = 0.16666398558748574;
    msg.vy = 0.6521934658034457;
    msg.vz = 0.9764284627903095;
    msg.course_error = 0.2598246159388069;
    msg.eta = 7983U;

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
    msg.setTimeStamp(0.19350137486880148);
    msg.setSource(7752U);
    msg.setSourceEntity(2U);
    msg.setDestination(5200U);
    msg.setDestinationEntity(147U);
    msg.path_ref = 2128398935U;
    msg.start_lat = 0.24683009611485418;
    msg.start_lon = 0.2337685871847559;
    msg.start_z = 0.8571980476482289;
    msg.start_z_units = 144U;
    msg.end_lat = 0.3902567474802693;
    msg.end_lon = 0.1905420110634528;
    msg.end_z = 0.84961023652072;
    msg.end_z_units = 218U;
    msg.lradius = 0.7164702590485038;
    msg.flags = 180U;
    msg.x = 0.006299069203659191;
    msg.y = 0.09400957582515734;
    msg.z = 0.6342332199868294;
    msg.vx = 0.9915208794058543;
    msg.vy = 0.867337655778373;
    msg.vz = 0.0024134839321168222;
    msg.course_error = 0.968998426126478;
    msg.eta = 11005U;

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
    msg.setTimeStamp(0.7653319188206579);
    msg.setSource(31647U);
    msg.setSourceEntity(158U);
    msg.setDestination(31220U);
    msg.setDestinationEntity(87U);
    msg.path_ref = 1655292451U;
    msg.start_lat = 0.6593917217284782;
    msg.start_lon = 0.3950916365093442;
    msg.start_z = 0.4251688368287445;
    msg.start_z_units = 84U;
    msg.end_lat = 0.2717104675993737;
    msg.end_lon = 0.7399187333603404;
    msg.end_z = 0.2222825808334935;
    msg.end_z_units = 205U;
    msg.lradius = 0.5011766571850015;
    msg.flags = 103U;
    msg.x = 0.48764382802803985;
    msg.y = 0.08571479729698317;
    msg.z = 0.794129258926172;
    msg.vx = 0.11438034052079449;
    msg.vy = 0.9292318862086951;
    msg.vz = 0.6161841718335214;
    msg.course_error = 0.13091911134552503;
    msg.eta = 35291U;

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
    msg.setTimeStamp(0.051598190847082503);
    msg.setSource(28492U);
    msg.setSourceEntity(12U);
    msg.setDestination(21678U);
    msg.setDestinationEntity(109U);
    msg.k = 0.4446302990753198;
    msg.m = 0.1596851711439432;
    msg.n = 0.3414813236402966;

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
    msg.setTimeStamp(0.19212615925350296);
    msg.setSource(32083U);
    msg.setSourceEntity(174U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(208U);
    msg.k = 0.6756804056781771;
    msg.m = 0.06281732973975074;
    msg.n = 0.17619599775849937;

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
    msg.setTimeStamp(0.8536671404197761);
    msg.setSource(30118U);
    msg.setSourceEntity(33U);
    msg.setDestination(58048U);
    msg.setDestinationEntity(6U);
    msg.k = 0.5584949814781224;
    msg.m = 0.8117099741956076;
    msg.n = 0.5971991322706378;

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
    msg.setTimeStamp(0.9360760785063614);
    msg.setSource(29011U);
    msg.setSourceEntity(189U);
    msg.setDestination(44884U);
    msg.setDestinationEntity(175U);
    msg.p = 0.247814033085491;
    msg.i = 0.4066541268802387;
    msg.d = 0.4840076987185634;
    msg.a = 0.7223474210734062;

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
    msg.setTimeStamp(0.8660412013713714);
    msg.setSource(19203U);
    msg.setSourceEntity(22U);
    msg.setDestination(11164U);
    msg.setDestinationEntity(85U);
    msg.p = 0.7086996472686715;
    msg.i = 0.41413652267215395;
    msg.d = 0.871068370365326;
    msg.a = 0.3952123706813626;

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
    msg.setTimeStamp(0.3844702800517945);
    msg.setSource(18888U);
    msg.setSourceEntity(217U);
    msg.setDestination(1101U);
    msg.setDestinationEntity(79U);
    msg.p = 0.9406967588989938;
    msg.i = 0.7288477258967149;
    msg.d = 0.7677152016271075;
    msg.a = 0.7491868276563546;

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
    msg.setTimeStamp(0.83255671315915);
    msg.setSource(38236U);
    msg.setSourceEntity(144U);
    msg.setDestination(59442U);
    msg.setDestinationEntity(201U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.24460552703120297);
    msg.setSource(29516U);
    msg.setSourceEntity(45U);
    msg.setDestination(37739U);
    msg.setDestinationEntity(67U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.3998407426001491);
    msg.setSource(52232U);
    msg.setSourceEntity(17U);
    msg.setDestination(22672U);
    msg.setDestinationEntity(54U);
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
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.821056392635278);
    msg.setSource(21557U);
    msg.setSourceEntity(166U);
    msg.setDestination(8654U);
    msg.setDestinationEntity(140U);
    msg.x = 0.8939225540454094;
    msg.y = 0.25378939835872083;
    msg.z = 0.9499374262581675;
    msg.vx = 0.31910418916532257;
    msg.vy = 0.9081508493152161;
    msg.vz = 0.40376160775255177;
    msg.ax = 0.621758283376447;
    msg.ay = 0.7492127745358687;
    msg.az = 0.47291643267770167;
    msg.flags = 61481U;

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
    msg.setTimeStamp(0.0571540841846222);
    msg.setSource(52582U);
    msg.setSourceEntity(220U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(182U);
    msg.x = 0.44214381060399666;
    msg.y = 0.4946295752909827;
    msg.z = 0.9789093505536188;
    msg.vx = 0.664347383882918;
    msg.vy = 0.2869784787901113;
    msg.vz = 0.31830791457952534;
    msg.ax = 0.8327740859540809;
    msg.ay = 0.48942402490919945;
    msg.az = 0.3038950693870559;
    msg.flags = 18882U;

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
    msg.setTimeStamp(0.7527955427958251);
    msg.setSource(60525U);
    msg.setSourceEntity(18U);
    msg.setDestination(41646U);
    msg.setDestinationEntity(121U);
    msg.x = 0.36198985371313397;
    msg.y = 0.7302423475550402;
    msg.z = 0.5579490255360611;
    msg.vx = 0.15160679985176662;
    msg.vy = 0.5431199339338528;
    msg.vz = 0.7466599010317148;
    msg.ax = 0.4051630277196445;
    msg.ay = 0.30932481949045176;
    msg.az = 0.8719670077954912;
    msg.flags = 58298U;

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
    msg.setTimeStamp(0.3200467068803011);
    msg.setSource(57180U);
    msg.setSourceEntity(47U);
    msg.setDestination(13270U);
    msg.setDestinationEntity(181U);
    msg.value = 0.16039561936292934;

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
    msg.setTimeStamp(0.037061959317285176);
    msg.setSource(59854U);
    msg.setSourceEntity(134U);
    msg.setDestination(36869U);
    msg.setDestinationEntity(212U);
    msg.value = 0.22554519527070427;

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
    msg.setTimeStamp(0.6483496295495778);
    msg.setSource(47472U);
    msg.setSourceEntity(81U);
    msg.setDestination(28013U);
    msg.setDestinationEntity(98U);
    msg.value = 0.6425362956602476;

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
    msg.setTimeStamp(0.9430205144895845);
    msg.setSource(64783U);
    msg.setSourceEntity(196U);
    msg.setDestination(31094U);
    msg.setDestinationEntity(96U);
    msg.timeout = 2866U;
    msg.lat = 0.8075100285585182;
    msg.lon = 0.4863135881770957;
    msg.z = 0.2680507795388044;
    msg.z_units = 185U;
    msg.speed = 0.9531377451303321;
    msg.speed_units = 87U;
    msg.roll = 0.6457380127632609;
    msg.pitch = 0.21351867163836546;
    msg.yaw = 0.2773667719757459;
    msg.custom.assign("HFPOEAYDMXAKEQNXOUNJENRYTLRMFFVIYIFGJABWOTKLNQSKSMPNXEQOFDLIMNHBUBVUNZMFYICDCXYQGHBMZCRPTVMHRPVAYJTPUGSXCEVJBJWRDBJUEUDGTRCNSQTPKNKOZSJZIHQXBXUZXKWKADDLVARAWRIYSAERUSTEGKWSGVTEZHWUAHTJIQKGEPLMOMIRCVQFXQLLJOWWYHZJHCCUVPZTQFDMYHINBFZGLDXPWLPDBBYKWVFCAGSGIO");

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
    msg.setTimeStamp(0.09628419794413223);
    msg.setSource(41481U);
    msg.setSourceEntity(89U);
    msg.setDestination(33552U);
    msg.setDestinationEntity(244U);
    msg.timeout = 39234U;
    msg.lat = 0.7993003394204844;
    msg.lon = 0.8850452868204746;
    msg.z = 0.09529286975298212;
    msg.z_units = 55U;
    msg.speed = 0.9143210635371748;
    msg.speed_units = 84U;
    msg.roll = 0.2756651043824857;
    msg.pitch = 0.5882591736907612;
    msg.yaw = 0.050381489982230465;
    msg.custom.assign("CGMRTWVEATUWOHCEVBLSMLEUTYSLTBCHRDCBPYVFLYNZRSBTDUJDPXWWHXTNUXJKLMMGMQTIFSKXCUCQRIDGSVLMNVRZUYEYBGRLIHQMMJYADVIICOZEOXNQJEU");

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
    msg.setTimeStamp(0.6012927742781271);
    msg.setSource(65020U);
    msg.setSourceEntity(5U);
    msg.setDestination(47769U);
    msg.setDestinationEntity(12U);
    msg.timeout = 12383U;
    msg.lat = 0.15171435701455827;
    msg.lon = 0.04855310210046049;
    msg.z = 0.5363269506027486;
    msg.z_units = 78U;
    msg.speed = 0.5998051898337573;
    msg.speed_units = 140U;
    msg.roll = 0.16420825477196965;
    msg.pitch = 0.195499975963215;
    msg.yaw = 0.6824079919744228;
    msg.custom.assign("GCAJYODYXIBUKBAHXOPETPPJHSWDIKGSCOBZXGTMTKZVMXOYHKHXIARFPBZHIMWUEMHSPVUNUZVQTXXCENYIRNYESGPFSCKLPDLYILBVMQUSXWBNFFSPULRVGERPWQMORUONJDGVUMTZHGETFORTDZQAHDDFTZJRCTKJQMYIMGWWDUAJLFPZSKQOVHNVEJNXTALBWSEACRFICERJROLVQNGQNJZDYACWCWLXEQJFFQGLI");

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
    msg.setTimeStamp(0.7333366789036384);
    msg.setSource(2166U);
    msg.setSourceEntity(203U);
    msg.setDestination(3310U);
    msg.setDestinationEntity(207U);
    msg.timeout = 64257U;
    msg.lat = 0.341599076450391;
    msg.lon = 0.7571813074864937;
    msg.z = 0.8646099206747868;
    msg.z_units = 140U;
    msg.speed = 0.49278818369289046;
    msg.speed_units = 210U;
    msg.duration = 61452U;
    msg.radius = 0.2457037773340751;
    msg.flags = 35U;
    msg.custom.assign("RLFCTHJAZHCBDSPFIDOKHPONNXLTMRYQTEOZWPQQSHPUWAMNCWMKVJELWQXZEVAIWDDRUHOWPSQEDUFDHEICELKMJNCEFISJHOQF");

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
    msg.setTimeStamp(0.6857319403287077);
    msg.setSource(50594U);
    msg.setSourceEntity(161U);
    msg.setDestination(22888U);
    msg.setDestinationEntity(198U);
    msg.timeout = 26990U;
    msg.lat = 0.9528246335554919;
    msg.lon = 0.6221675143839407;
    msg.z = 0.8410988609714445;
    msg.z_units = 188U;
    msg.speed = 0.5625576151562691;
    msg.speed_units = 24U;
    msg.duration = 21686U;
    msg.radius = 0.8797455668139793;
    msg.flags = 124U;
    msg.custom.assign("QIOCCWVJEUSXYWJVVFYZJMDKMPRGJKEZBLPOMLLGCVXWDVXCTMOIGCCIHSVBIBYJHTNPPNVKOYMUQUKH");

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
    msg.setTimeStamp(0.0790407901057335);
    msg.setSource(43969U);
    msg.setSourceEntity(14U);
    msg.setDestination(46567U);
    msg.setDestinationEntity(93U);
    msg.timeout = 33076U;
    msg.lat = 0.21230511035804012;
    msg.lon = 0.873660241590698;
    msg.z = 0.6599040597955156;
    msg.z_units = 21U;
    msg.speed = 0.5300927045143049;
    msg.speed_units = 16U;
    msg.duration = 60616U;
    msg.radius = 0.046837440833536026;
    msg.flags = 67U;
    msg.custom.assign("HUYNOZBWMKEFNJNUANFWRSVTXSLYZBQLWHKSPPMHUTQASVNZLZPALNFTMDURWKUHVWKPUZATKMZQTDVOYDTRYVBMAAHTZUFCHQQEXBKMOXJNRJPKSIIVSLJNLTUCBZGUOJFZERQBFFFEKOBVGIHPRDSAAGLGBDJRFGXCGX");

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
    msg.setTimeStamp(0.8477874550581005);
    msg.setSource(13542U);
    msg.setSourceEntity(202U);
    msg.setDestination(21334U);
    msg.setDestinationEntity(105U);
    msg.custom.assign("VPJVLAJGWTDSZORTDLAKWRJGCXMNIVPQNWPISHQVLWUHUFZXLERSQJLEMBFYMXFKOPTAMRDHPAEOYCNDGNTSAQBVIQJQRPHMVXEUOMFCEIPCCCEEMBSGWADFKZTKVJVAHWNJAOSRKGWGGNLYUFNZKGAZUDHSBOCDLOZYGXXYUBCINXPWTQXJFHJVKUKTEBHMKRJUFIHYNSFXHEMZKTLBDQSINBIWRBIQMZXYRZYQCFDTBVSGUYLCOOEP");

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
    msg.setTimeStamp(0.008483486650763705);
    msg.setSource(50992U);
    msg.setSourceEntity(28U);
    msg.setDestination(48174U);
    msg.setDestinationEntity(71U);
    msg.custom.assign("XROCMBWEZLHTHENKSVWGZAQGAMYSGYAIEIHUZIKPEGOCTODQQYPXDWTFRPFPHDXUYYDXTEDRZITTBRKKNBCDFPRCLVYKFUTJOXUGASJOGSJUSSNJMLIRNIHJUVGJAQSQFXPLIKNMBFWYMUNXOTMRLRBAILBFFMWAVHGTPSZXXDKHZJBOLEWVBBNCMCLANUMJMEIZOKRJAJWLZSHENFZLYWVVZHYPPQDDUTVOCEBEDQIVKHNQVWXQCA");

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
    msg.setTimeStamp(0.49577442187223175);
    msg.setSource(56688U);
    msg.setSourceEntity(120U);
    msg.setDestination(52632U);
    msg.setDestinationEntity(70U);
    msg.custom.assign("OXGEOTLDNMXEALDXEQSDOGNVUBMRLIBRTICFFQKGUFDUAGQL");

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
    msg.setTimeStamp(0.037304423002565756);
    msg.setSource(47573U);
    msg.setSourceEntity(157U);
    msg.setDestination(18182U);
    msg.setDestinationEntity(72U);
    msg.timeout = 34725U;
    msg.lat = 0.1641195704726779;
    msg.lon = 0.6562655110473212;
    msg.z = 0.7811127971459696;
    msg.z_units = 73U;
    msg.duration = 13544U;
    msg.speed = 0.9079268527440845;
    msg.speed_units = 191U;
    msg.type = 254U;
    msg.radius = 0.026727621525241774;
    msg.length = 0.0029178035985863993;
    msg.bearing = 0.1302584667777852;
    msg.direction = 10U;
    msg.custom.assign("UONBDXUSUZRHTLHOSTPCREEUSYFCTBWOWRRTBIMYXVLMSASQEZMSPTPHBGAKOVOFBEYPIGMKNTDUTEDFHWYJAGWXRNNWLAHRZQXRNAQRJHQBABWVBXZFCSQUILLMFGPIKLMFZIDHPCMPGHDJXZOLKYJIQRCHNBVHCCGTAKFXDAVSKIJKSUIEJCEIWADKUVLSKQPVJYEGEJLYMJTQQOZXYPDRAGZPOGOWTMMNQZWUIWECFNN");

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
    msg.setTimeStamp(0.9782993644380898);
    msg.setSource(51008U);
    msg.setSourceEntity(1U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(41U);
    msg.timeout = 63966U;
    msg.lat = 0.20605030297762006;
    msg.lon = 0.4116499491668786;
    msg.z = 0.7352935243041545;
    msg.z_units = 40U;
    msg.duration = 40561U;
    msg.speed = 0.6589113144551199;
    msg.speed_units = 115U;
    msg.type = 66U;
    msg.radius = 0.024542957535327092;
    msg.length = 0.6573406743465562;
    msg.bearing = 0.9808027320055385;
    msg.direction = 194U;
    msg.custom.assign("NSCJCUMUVEMZMYGZPOBBUFTJSDXNHHNHEUJRHDITEKSJGBSMVZPTHQFIQXIIWUSBVVGFFUSKFLCQZKOXEDAKGDTKDQJOLDMYBHSEIQSYCJMRVCNNIRAPMCZONYWAMWEOKUHCIMZDHZGACBFYAWHDLNNHRKTREZZPAQILYRTGTLTJQ");

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
    msg.setTimeStamp(0.842793859841764);
    msg.setSource(13148U);
    msg.setSourceEntity(117U);
    msg.setDestination(20874U);
    msg.setDestinationEntity(43U);
    msg.timeout = 9117U;
    msg.lat = 0.9614465742111489;
    msg.lon = 0.7506019455418771;
    msg.z = 0.5403941585924615;
    msg.z_units = 219U;
    msg.duration = 58343U;
    msg.speed = 0.7643751116155207;
    msg.speed_units = 128U;
    msg.type = 135U;
    msg.radius = 0.9463480543552559;
    msg.length = 0.02847528680934719;
    msg.bearing = 0.948988834992343;
    msg.direction = 166U;
    msg.custom.assign("YSYKDXJTGUJHENMSFVZIGUCBQBXOLBBFNKRRPTIH");

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
    msg.setTimeStamp(0.5527168989852147);
    msg.setSource(59278U);
    msg.setSourceEntity(221U);
    msg.setDestination(2590U);
    msg.setDestinationEntity(37U);
    msg.duration = 57263U;
    msg.custom.assign("HRQXCWIHMJFLIRZMWNESUSNWTBHGBXZHQDDJISBEFQVYIUMYJYPRILUEAKBUAJTYPNLQSVMLXRSPLMNEUCZJWPKGMBTWGZADRTCJOCGDCHDXAXRXIUXAEBWYUOJVPVPYOSOQYPNJAVBJLFHLZQHEZCUKTFYSQUAWCNPLCXFOXKWRKUGTQEMMSHKEZTATHNQNCOJOZPOCXALIBBRDEVEVFFZKGDAI");

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
    msg.setTimeStamp(0.22988928344702142);
    msg.setSource(52951U);
    msg.setSourceEntity(162U);
    msg.setDestination(33773U);
    msg.setDestinationEntity(71U);
    msg.duration = 53063U;
    msg.custom.assign("OWXXIKGMZUYNJVSMFNHJFUNCAPUEMSYMBVPJSEWQZYRQOAIZGAELIRMRVXDTOGBTHKDYTRNOPEBKPXIOTFFIVTXFBDFYQOAPWNRNWBTMDPXSSNZIVOOCVDSQAHMJNLYRHLFGRCIQZHJQMJOOEDRGLHNSWAPLGWWKTEKDYRKGIEBEWQVFAUGNCFZCDTYLUSDZHUKAZPSBPVUGYRJITUC");

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
    msg.setTimeStamp(0.07769574358497877);
    msg.setSource(10U);
    msg.setSourceEntity(60U);
    msg.setDestination(26007U);
    msg.setDestinationEntity(241U);
    msg.duration = 10238U;
    msg.custom.assign("NUHXRLMAHKWBKIWAYZFBYUITAFN");

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
    msg.setTimeStamp(0.9358053113302481);
    msg.setSource(15084U);
    msg.setSourceEntity(88U);
    msg.setDestination(53402U);
    msg.setDestinationEntity(22U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1995243442U;
    tmp_msg_0.start_lat = 0.3056809557045468;
    tmp_msg_0.start_lon = 0.3359829009474742;
    tmp_msg_0.start_z = 0.2644796632476252;
    tmp_msg_0.start_z_units = 81U;
    tmp_msg_0.end_lat = 0.44704786867319424;
    tmp_msg_0.end_lon = 0.9869703048728966;
    tmp_msg_0.end_z = 0.5281255456658197;
    tmp_msg_0.end_z_units = 222U;
    tmp_msg_0.speed = 0.7195066500058691;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.lradius = 0.806205590840197;
    tmp_msg_0.flags = 208U;
    msg.control.set(tmp_msg_0);
    msg.duration = 30543U;
    msg.custom.assign("QBEEWOZZNSJVFWBAVELBSCGAQDGQMCHTHPGSZEWULAV");

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
    msg.setTimeStamp(0.6167968678532204);
    msg.setSource(12032U);
    msg.setSourceEntity(87U);
    msg.setDestination(43720U);
    msg.setDestinationEntity(97U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7429052821609158;
    msg.control.set(tmp_msg_0);
    msg.duration = 9991U;
    msg.custom.assign("XJGMJFFQFSMCXVMGLXCFJYCAPIEVKBQKJMXMQRYELGLAXTOCVQFGOWVGTSCHLEBTLIQNSCVIWYXAGOOKJYAQHADEDLDBWBHIACCWIGSEUJMFYQPAYUDFKWOICSDURATKUYHEBNNLHUTRZMVIHQZWZXXTYVEUMJSUIRUDRJWCOJKBGPRPOWAYGVBNDTMPOFNDSSQXIQSVPNWPUK");

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
    msg.setTimeStamp(0.6921821887241968);
    msg.setSource(47107U);
    msg.setSourceEntity(103U);
    msg.setDestination(55197U);
    msg.setDestinationEntity(151U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.2775042934215658;
    msg.control.set(tmp_msg_0);
    msg.duration = 52437U;
    msg.custom.assign("PZHGEHCTJPCNIJAZJMAMYIXVTVYTOUTMPHJHTCMKUOANDMAFIBDGCFKZVIWCJASVWPNDFTYRPY");

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
    msg.setTimeStamp(0.9973473301674787);
    msg.setSource(11567U);
    msg.setSourceEntity(196U);
    msg.setDestination(13130U);
    msg.setDestinationEntity(46U);
    msg.timeout = 23221U;
    msg.lat = 0.5453156205067706;
    msg.lon = 0.9111928301022721;
    msg.z = 0.6697410435996101;
    msg.z_units = 214U;
    msg.speed = 0.9786330591009933;
    msg.speed_units = 32U;
    msg.bearing = 0.5137970351333344;
    msg.cross_angle = 0.5139247390146221;
    msg.width = 0.09568084193903914;
    msg.length = 0.9750807821930647;
    msg.hstep = 0.6971183381749506;
    msg.coff = 41U;
    msg.alternation = 16U;
    msg.flags = 160U;
    msg.custom.assign("COGESTNRKSDPNLPWYSHXELDXCNRDHPULNRVMOBQMIMBZCKJNFHDYVRYXVKWVFEVTXYKZOFAEITUWRLZIMCCPYRQOYBAPQWSFXYUOAVDOQXLGAZFKYJOWXPGKNLSGHC");

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
    msg.setTimeStamp(0.4349140254752887);
    msg.setSource(551U);
    msg.setSourceEntity(93U);
    msg.setDestination(28439U);
    msg.setDestinationEntity(137U);
    msg.timeout = 30041U;
    msg.lat = 0.14588559476624308;
    msg.lon = 0.2146377980493105;
    msg.z = 0.5006669152707894;
    msg.z_units = 30U;
    msg.speed = 0.8943408021820237;
    msg.speed_units = 155U;
    msg.bearing = 0.12478870655226948;
    msg.cross_angle = 0.1331187518220388;
    msg.width = 0.33044611937779034;
    msg.length = 0.09031969815335528;
    msg.hstep = 0.11299201698787631;
    msg.coff = 160U;
    msg.alternation = 254U;
    msg.flags = 140U;
    msg.custom.assign("NXIJBYBWQYBVUUTWXZPYYHESCKGFRRFZDITQVJMFSMOILHLOXIIOZQOFXMLWDUGKCTJOKMDBEFIJSSCGIAQRQOFSWQUQFTB");

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
    msg.setTimeStamp(0.9753722080112937);
    msg.setSource(22695U);
    msg.setSourceEntity(121U);
    msg.setDestination(32407U);
    msg.setDestinationEntity(127U);
    msg.timeout = 57977U;
    msg.lat = 0.223445963155956;
    msg.lon = 0.5919163793755532;
    msg.z = 0.3349010624757439;
    msg.z_units = 234U;
    msg.speed = 0.6448842261683282;
    msg.speed_units = 62U;
    msg.bearing = 0.23227727593996472;
    msg.cross_angle = 0.12540886104803695;
    msg.width = 0.6083893876622634;
    msg.length = 0.1859022153393417;
    msg.hstep = 0.6817452706580838;
    msg.coff = 62U;
    msg.alternation = 209U;
    msg.flags = 165U;
    msg.custom.assign("MXWQDJMCZKOCRWRYHCYEFYDZBHXVJAPLMZNBEQHVPNNPNILRVHXTIXMEXUMAWQDEOUGKULXEILSTAIUYTWAORJHIRKVSTNDLTKBOMGZJDYQMJSVPAPKIKRJJPASPTODBSRZLXGFUGTVVPWBYO");

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
    msg.setTimeStamp(0.2759778189671722);
    msg.setSource(8253U);
    msg.setSourceEntity(249U);
    msg.setDestination(32228U);
    msg.setDestinationEntity(111U);
    msg.timeout = 5181U;
    msg.lat = 0.5874216692592086;
    msg.lon = 0.4680208877215416;
    msg.z = 0.9162346344490833;
    msg.z_units = 66U;
    msg.speed = 0.16155707809847752;
    msg.speed_units = 37U;
    msg.custom.assign("RHPFFMVJYSCOFGXXDLBZQQLCDYHAICEKQAWZRUGGXONKSRWWVLBVDGNMTUL");

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
    msg.setTimeStamp(0.6358453981743695);
    msg.setSource(12987U);
    msg.setSourceEntity(155U);
    msg.setDestination(6955U);
    msg.setDestinationEntity(9U);
    msg.timeout = 7185U;
    msg.lat = 0.6220256782014303;
    msg.lon = 0.8021198375161701;
    msg.z = 0.7924212485916969;
    msg.z_units = 97U;
    msg.speed = 0.008253910353658855;
    msg.speed_units = 228U;
    msg.custom.assign("AOBHRHTQJCAZKDVCDVKWSJUFFQBYWGZZTLKCKZSYQEYRMBNWYBUQNOSXVGJNPJLILUEZPJSYNCEQGMSPXIYNFRJBEUSJDFWKTLOMZZMRTHNREOVPBYHRPGRYADBABXPOQYXKAQGNWAGVHWGWEPUXCADNJLVLIGFELHNXFSCDBQMMQVIQVSCCOHRADISPUZVTOW");

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
    msg.setTimeStamp(0.15258575843537847);
    msg.setSource(2753U);
    msg.setSourceEntity(63U);
    msg.setDestination(57178U);
    msg.setDestinationEntity(180U);
    msg.timeout = 16385U;
    msg.lat = 0.004070397484249533;
    msg.lon = 0.387887652357507;
    msg.z = 0.09661882434254909;
    msg.z_units = 79U;
    msg.speed = 0.8760724666936148;
    msg.speed_units = 124U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4637651140790121;
    tmp_msg_0.y = 0.2875685705675485;
    tmp_msg_0.z = 0.015904048761175238;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZRVLEWFSAWJLZFFYKMSPPMJSNFLKDQVIEOAJCNXWUSDTHNWOITDAXXKLOYGZIGFSRCBACWUWDZJXTUPZZJ");

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
    msg.setTimeStamp(0.3163510607381622);
    msg.setSource(59368U);
    msg.setSourceEntity(121U);
    msg.setDestination(44208U);
    msg.setDestinationEntity(215U);
    msg.x = 0.537209802037632;
    msg.y = 0.861808674658734;
    msg.z = 0.7162650657393567;

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
    msg.setTimeStamp(0.3687241397012049);
    msg.setSource(38697U);
    msg.setSourceEntity(140U);
    msg.setDestination(19084U);
    msg.setDestinationEntity(228U);
    msg.x = 0.24507805617944234;
    msg.y = 0.12880593505738958;
    msg.z = 0.4136148197666125;

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
    msg.setTimeStamp(0.18589963752210703);
    msg.setSource(32375U);
    msg.setSourceEntity(102U);
    msg.setDestination(9306U);
    msg.setDestinationEntity(220U);
    msg.x = 0.38939256033605885;
    msg.y = 0.523006999665323;
    msg.z = 0.33694749225732;

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
    msg.setTimeStamp(0.6580582411848829);
    msg.setSource(29648U);
    msg.setSourceEntity(109U);
    msg.setDestination(34823U);
    msg.setDestinationEntity(250U);
    msg.timeout = 43685U;
    msg.lat = 0.3150373356027599;
    msg.lon = 0.8958802768979627;
    msg.z = 0.10213926098162551;
    msg.z_units = 249U;
    msg.amplitude = 0.27583107551768216;
    msg.pitch = 0.18318217710422657;
    msg.speed = 0.24052937782854344;
    msg.speed_units = 116U;
    msg.custom.assign("NJWJSXCUVCNKHCCFOTTQBDHBGHSNKJHTHNJJDPPDJKBQRTNKYIYQAQMQIYAQBSPNLVZEQZXSPDPUBBPTKPSSUXDIWZREAGPZDHUTGUICLLGCEMAQLDRVOYUNTELXWMEVYZOVCWWMIOTQFLDIUFXGKMBOYZRZRMRIBUGGXFBLRXEWYOJVGTSTAMHIAHWGSFKCPRQLSKRIOLXEIUVMDHNZVYFPWXLCFAWESO");

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
    msg.setTimeStamp(0.08677752720385823);
    msg.setSource(45250U);
    msg.setSourceEntity(69U);
    msg.setDestination(17343U);
    msg.setDestinationEntity(5U);
    msg.timeout = 12937U;
    msg.lat = 0.15926329797532834;
    msg.lon = 0.18443752589669604;
    msg.z = 0.626410513951089;
    msg.z_units = 115U;
    msg.amplitude = 0.8730467283082197;
    msg.pitch = 0.21486998846142136;
    msg.speed = 0.879606635650047;
    msg.speed_units = 136U;
    msg.custom.assign("CNLOZLAUXNPEIQCXKWRHJBGABIOWPGCGNLHDNJY");

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
    msg.setTimeStamp(0.4414297913036678);
    msg.setSource(54779U);
    msg.setSourceEntity(77U);
    msg.setDestination(58961U);
    msg.setDestinationEntity(139U);
    msg.timeout = 61219U;
    msg.lat = 0.8133982088929377;
    msg.lon = 0.9103178636406462;
    msg.z = 0.7355149121193671;
    msg.z_units = 144U;
    msg.amplitude = 0.44920437092105947;
    msg.pitch = 0.43074301634282397;
    msg.speed = 0.9230795767840653;
    msg.speed_units = 39U;
    msg.custom.assign("NCGPRUOUSGRANZRXHMSOZSVDTQPSLOFZABBGBWRKCALVCIZVWCTDIACXKPCVQBAPARSVVTMOBGHJJMKTTFIOCIHBNNIWLUYNHOEKSWEIMFOQH");

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
    msg.setTimeStamp(0.3822574084717155);
    msg.setSource(51890U);
    msg.setSourceEntity(194U);
    msg.setDestination(14015U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.023039799092977598);
    msg.setSource(11861U);
    msg.setSourceEntity(60U);
    msg.setDestination(25753U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.9431050565929009);
    msg.setSource(48349U);
    msg.setSourceEntity(16U);
    msg.setDestination(24985U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.42220211340056746);
    msg.setSource(63318U);
    msg.setSourceEntity(22U);
    msg.setDestination(63247U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.5740878156578244;
    msg.lon = 0.0018802913177976555;
    msg.z = 0.2312028952417987;
    msg.z_units = 26U;
    msg.radius = 0.3357924205039534;
    msg.duration = 23843U;
    msg.speed = 0.00912173470557709;
    msg.speed_units = 136U;
    msg.custom.assign("CSYBCNDFFAJGOTKAVEQCLIUOUAPIQOFLNAOTIDMXBGPQYLHSNLZJEXKTNSMVZFIWTUWOPHYGGXPJTOTKSPWUAFMYOWLVMZBHPKAJUFXJDQNALEKDNGZYGRABJEAGXZHXDFSHSBQCYVJQZXNRLCCISSCMPFKCEEWBKVBNGKIZLSUJRTXOMZIWYTDKHVTBLDRVRPRBHDHQPUDFMIXKJRAEQ");

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
    msg.setTimeStamp(0.4606833522948509);
    msg.setSource(35064U);
    msg.setSourceEntity(64U);
    msg.setDestination(64928U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.5431599141061904;
    msg.lon = 0.6263979549580765;
    msg.z = 0.7184830751982676;
    msg.z_units = 112U;
    msg.radius = 0.44938429867348817;
    msg.duration = 14224U;
    msg.speed = 0.7083124180693822;
    msg.speed_units = 58U;
    msg.custom.assign("NGJHIYAOKMTFPBYNIPBTBAOCSYXYADLKZIMJPHLNBUHZHC");

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
    msg.setTimeStamp(0.518348896652046);
    msg.setSource(80U);
    msg.setSourceEntity(220U);
    msg.setDestination(49075U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.07374904865934806;
    msg.lon = 0.593568151159655;
    msg.z = 0.852663904383263;
    msg.z_units = 40U;
    msg.radius = 0.052036187940796896;
    msg.duration = 38677U;
    msg.speed = 0.8019815115438053;
    msg.speed_units = 78U;
    msg.custom.assign("ELPCXNOBFWYJITLGSHNZXQVLBFYNEOJUZHAJVBTUAYNUMRVZXTISDUPGFSEQH");

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
    msg.setTimeStamp(0.4707792030141985);
    msg.setSource(53791U);
    msg.setSourceEntity(75U);
    msg.setDestination(13913U);
    msg.setDestinationEntity(16U);
    msg.timeout = 37033U;
    msg.flags = 77U;
    msg.lat = 0.26735854552275196;
    msg.lon = 0.23261119871960945;
    msg.start_z = 0.05252379883746827;
    msg.start_z_units = 117U;
    msg.end_z = 0.08699265893798613;
    msg.end_z_units = 60U;
    msg.radius = 0.26512089214844214;
    msg.speed = 0.20731730060107723;
    msg.speed_units = 193U;
    msg.custom.assign("BWYIHLONIBXSOVPCALXGXUDXQVX");

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
    msg.setTimeStamp(0.15342159747613016);
    msg.setSource(5338U);
    msg.setSourceEntity(194U);
    msg.setDestination(55112U);
    msg.setDestinationEntity(18U);
    msg.timeout = 40613U;
    msg.flags = 21U;
    msg.lat = 0.7693112378211573;
    msg.lon = 0.43936785043650795;
    msg.start_z = 0.2526290699200612;
    msg.start_z_units = 104U;
    msg.end_z = 0.5711400837444107;
    msg.end_z_units = 66U;
    msg.radius = 0.12082221023859374;
    msg.speed = 0.10659985241246983;
    msg.speed_units = 124U;
    msg.custom.assign("REKYMPSFDUXXFMYVYOQKMMEETVVTJQQOTULPCROXSNFIZDPGBLYUPOZJQAGBSXJ");

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
    msg.setTimeStamp(0.08313296545527038);
    msg.setSource(42418U);
    msg.setSourceEntity(65U);
    msg.setDestination(20333U);
    msg.setDestinationEntity(206U);
    msg.timeout = 46146U;
    msg.flags = 29U;
    msg.lat = 0.6880505534971236;
    msg.lon = 0.7845688010641718;
    msg.start_z = 0.5059218840224847;
    msg.start_z_units = 48U;
    msg.end_z = 0.38889610597497637;
    msg.end_z_units = 78U;
    msg.radius = 0.5168408870117894;
    msg.speed = 0.21134162494791486;
    msg.speed_units = 222U;
    msg.custom.assign("JXSGXXTFAVKICZAIRZASDPATPBDPSNNZUFSGJQOCKHIIWLSFALGXMJKNLOMMMHRSUVJPVNROCVNZKKVDVMPYUYHFTNJDVGIYQHMEFQODQFJZBQOBECNYSZFUTGHYMGGXTDUTPZFMDHPFBBKWDPEVHQRSUZYESHGCCWAJKGJKOTLKDWUYBBICEIVXRXLMHRE");

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
    msg.setTimeStamp(0.5441397177240224);
    msg.setSource(39308U);
    msg.setSourceEntity(138U);
    msg.setDestination(39843U);
    msg.setDestinationEntity(126U);
    msg.timeout = 3119U;
    msg.lat = 0.8499746464610768;
    msg.lon = 0.33359138822291534;
    msg.z = 0.13357782094620285;
    msg.z_units = 205U;
    msg.speed = 0.5440159960937315;
    msg.speed_units = 197U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4325985332466493;
    tmp_msg_0.y = 0.1312192360082446;
    tmp_msg_0.z = 0.9667651836577317;
    tmp_msg_0.t = 0.5200101716238228;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MYTFWAIPXJSFJYOLRQILUGAROWHQPOIEBUAZHJCVLRYVRYEHPKNEDNQPNTPVFUUVAKNZEJONTYGCMWOXZDVKKSFPLMKEJGWNDBYRBHXCSMGEULSFXMDGGNEHLMRMHSTILXDJCEIHUQODJIQGTKQQPIYCYDWVZQKVBUXKZZMPSZCLCKXDZBESDFSXOFUHFLQEQNRKOTATIUZHXAXWSFWGCCHDOMZTVGYSATUFRYIGJAPRAWJBWT");

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
    msg.setTimeStamp(0.6124317304892761);
    msg.setSource(49874U);
    msg.setSourceEntity(157U);
    msg.setDestination(48949U);
    msg.setDestinationEntity(131U);
    msg.timeout = 1485U;
    msg.lat = 0.71908509159754;
    msg.lon = 0.49941453416364356;
    msg.z = 0.7292642985384259;
    msg.z_units = 45U;
    msg.speed = 0.9681334349210761;
    msg.speed_units = 121U;
    msg.custom.assign("NZCVHESTIWPODQMKWZCXIVYTAGYEHNKYUGSOJFVYQLQDNAEOEKKGCRZJNNOHNFMXMRPWOSNYJVIWAXYTJFPZXMPKCEUECBLFNANVNDUVQBTXJRMKCAFSMBSZQDUKEELAGLSCWP");

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
    msg.setTimeStamp(0.6130112922495881);
    msg.setSource(56478U);
    msg.setSourceEntity(94U);
    msg.setDestination(30741U);
    msg.setDestinationEntity(109U);
    msg.timeout = 26816U;
    msg.lat = 0.7169855829183054;
    msg.lon = 0.27482697017502067;
    msg.z = 0.7731365486925706;
    msg.z_units = 43U;
    msg.speed = 0.563867074995471;
    msg.speed_units = 4U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0529674362341801;
    tmp_msg_0.y = 0.2825231547294015;
    tmp_msg_0.z = 0.46984244869715874;
    tmp_msg_0.t = 0.7483667046752525;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BNNWOTDSMHCGSKBAKQLNRXY");

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
    msg.setTimeStamp(0.9679787325255055);
    msg.setSource(53694U);
    msg.setSourceEntity(248U);
    msg.setDestination(15230U);
    msg.setDestinationEntity(48U);
    msg.x = 0.838490247238855;
    msg.y = 0.6084112303835524;
    msg.z = 0.8462698932294593;
    msg.t = 0.24378935797734014;

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
    msg.setTimeStamp(0.4912890155888342);
    msg.setSource(15965U);
    msg.setSourceEntity(9U);
    msg.setDestination(27525U);
    msg.setDestinationEntity(88U);
    msg.x = 0.8956680964485515;
    msg.y = 0.23846739870842404;
    msg.z = 0.04893624617542269;
    msg.t = 0.3139163497989249;

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
    msg.setTimeStamp(0.09394463478373094);
    msg.setSource(31319U);
    msg.setSourceEntity(150U);
    msg.setDestination(14555U);
    msg.setDestinationEntity(150U);
    msg.x = 0.41365248257396026;
    msg.y = 0.13527190403418998;
    msg.z = 0.6188254782848769;
    msg.t = 0.8750359517651726;

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
    msg.setTimeStamp(0.8636019018703376);
    msg.setSource(56123U);
    msg.setSourceEntity(108U);
    msg.setDestination(61842U);
    msg.setDestinationEntity(97U);
    msg.timeout = 47887U;
    msg.name.assign("UXBXMWGHTTFZVTULTPCPESYABVPFGYYRDIGIIHOGXLHIBQZWAFYWKSQBUKIPDCRZALMZAXCZTARCDEFNRCOXECFHMKPXSJXCLKMGUJBGMMYNSTRLIWHORJWUDSIOFKYDPJVDDPFLNNWJVLZDJVNROYJQNSVEZXMVXRLGJMXTEUEYEAKVOVWQGPRCHNIHELNAKSNQZOAWPSQQLSBKUIZGBVTYJTMEQN");
    msg.custom.assign("JTNUTCDGIXGXGBJUXEKNHQHFPSAFHBLNLAHWZNZZCUQDNPCXEPJWIGDEBXYYAZLTSMMMSELJXPPXYEDRQJFQKLEYYMAVWAWYIOMVBRZLJPHDKREKWDDPVUQFTUBQGQNLBDSVMREVTRUJSOIRKRMQYHJFFUWZOYDZZUKTHAVGSXSKAMBRIWWKVFULLSEOAFCPVPNQMCCIYXHKTXKVOSNALCIJIOGZBOQDYAEGFGNPWIJRFCBUHCT");

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
    msg.setTimeStamp(0.5182515050092293);
    msg.setSource(61183U);
    msg.setSourceEntity(42U);
    msg.setDestination(51037U);
    msg.setDestinationEntity(159U);
    msg.timeout = 25001U;
    msg.name.assign("ZZXACQRDJDEBMBPIWDAIBOFYGFVYBDODVKTZPKTYZBVPPYJKDPAGYEOFBSHEURKOUWJATMNESCHIOTYAHGINJNXVDWJEEMPFHVOHAXLXMRZKBGSPMCNQAQCQXIZZAUMRNIEDOXRKRHYPNWKCIGOYNSEFJFCQGZYZLUBZWBDITGLEPXHLUAWU");
    msg.custom.assign("BVFMARTLVEGETKKRTGIAWZVDLBUMBMZINDKLSCHXWUDGPFUWBCFKXPZUHRUNDZKNEHIGWYMNZZSFTVCSDRLHKXNQPYJAFORBRDEIJEQJFWVWRVCINPLUQFOAHOZEQDJAMPOSOSREYIOSKYGTOWVVBCNNQIYKJPHCNXMDLMFXQGULIZYGHMXPVPTZ");

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
    msg.setTimeStamp(0.5008237726939115);
    msg.setSource(23076U);
    msg.setSourceEntity(89U);
    msg.setDestination(43873U);
    msg.setDestinationEntity(26U);
    msg.timeout = 37934U;
    msg.name.assign("RHRQLSEIWOLMXAFDAYPXCYNNAOIQJIGVCHMSGJFQUKGHRTCSQVLSNCDVUUJVOZPJRYKXJTZPIHNTIDBGONZDBEOTSWPUVLQDJYWEYBKTDUEGEMMADBBULHJTSSYJKHDRNWYCCAXHMGAJFZPZFVFAFBNWIRGZJOMKKCGQTCEYMDPPNNWPEWXULHKWSKOHBVQIATBDULLFWLGVFRCUFNLOEZSIPZOQYRSKPOQATWZEXCMITXGRFR");
    msg.custom.assign("TFTAEZBFSYBDUNTGJNAYMFEYQAZOCNDRYURTVZINVJXWDSBHHKEYVKWWDYAOOGPZPXZLMRLFPPTPXFGTYEZNUJBYQOIOFISRVFCWSPOEOEXQCLXVHTCNTRJEUMBCAMNAUKLKVWMKFXRAWKVQQUSMNZUZZCBDGRWGGKVGCJAQKQHULGFRCLXYHIQLBDYWHPKHSMLEWPNXXLMGZTAOBIJNWHUAQDCSDIIKJEDVDJEGSIIFXJHMOBPSTROPBCHIJS");

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
    msg.setTimeStamp(0.43019133952823496);
    msg.setSource(40389U);
    msg.setSourceEntity(122U);
    msg.setDestination(16483U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.18399123607801593;
    msg.lon = 0.3288582300611451;
    msg.z = 0.15712612079540822;
    msg.z_units = 44U;
    msg.speed = 0.544437313904964;
    msg.speed_units = 34U;
    msg.start_time = 0.9717040640928125;
    msg.custom.assign("FVGXIMYSBVRLRXPHUETNMULFNHURGOTQUODVDKCTIBPGABCWMCBNZEZFIQFAVIKUPKRDVFCRTEILYNXDVYAKZQLUJLFAHAJKMZQRUKMYEENYFDSMFGGCQZPGOANTSSOXOETEMXNQSKYZPEJFZODMSSDVHJRBASPVLVOIBYOCLDHYUXLHHXHRABPXNFJDQVWQQWTNJCIPLAWJHZYSGMNWIOGZSPXPGKJRWBEWJTYWUHCQCODZRATKCWIT");

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
    msg.setTimeStamp(0.2783486104215953);
    msg.setSource(13430U);
    msg.setSourceEntity(163U);
    msg.setDestination(49553U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.41615377957409505;
    msg.lon = 0.36380467835924757;
    msg.z = 0.27420172945334675;
    msg.z_units = 107U;
    msg.speed = 0.94113497981458;
    msg.speed_units = 249U;
    msg.start_time = 0.7852239099981961;
    msg.custom.assign("EJGGCRSBDENNEZTAPJGYZTBIAQPZGTLIBPZQBZTU");

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
    msg.setTimeStamp(0.8904549475202121);
    msg.setSource(17844U);
    msg.setSourceEntity(231U);
    msg.setDestination(31324U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.02721194161982665;
    msg.lon = 0.3674836520996131;
    msg.z = 0.7582857936092907;
    msg.z_units = 185U;
    msg.speed = 0.30752831831592076;
    msg.speed_units = 182U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5422355178118669;
    tmp_msg_0.y = 0.4737137582845484;
    tmp_msg_0.z = 0.7852407431068471;
    tmp_msg_0.t = 0.7766643205006573;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.1963445689881066;
    msg.custom.assign("LWBARNBOZPEOOFSLUTAEANEOCYDDCWHHJKCDNGWOZPWMXZKQTNVZXCHYBJWUICGIVTOKYYDCRARTHLVHBEOFUFZSPWAMIELGGBSSQUMHFQLXROMGSNLKYLDVYLJITMKWVOMXUAJXRJCNDJHXVQSUFQDAV");

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
    msg.setTimeStamp(0.9252669057546193);
    msg.setSource(46803U);
    msg.setSourceEntity(170U);
    msg.setDestination(48120U);
    msg.setDestinationEntity(46U);
    msg.vid = 56660U;
    msg.off_x = 0.8961718188655301;
    msg.off_y = 0.28228783769999677;
    msg.off_z = 0.7176105298980766;

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
    msg.setTimeStamp(0.5196768363985165);
    msg.setSource(54906U);
    msg.setSourceEntity(39U);
    msg.setDestination(31677U);
    msg.setDestinationEntity(96U);
    msg.vid = 34167U;
    msg.off_x = 0.7766410418623854;
    msg.off_y = 0.9700763580235365;
    msg.off_z = 0.7457203568999075;

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
    msg.setTimeStamp(0.43007749390413874);
    msg.setSource(22579U);
    msg.setSourceEntity(184U);
    msg.setDestination(49108U);
    msg.setDestinationEntity(171U);
    msg.vid = 36119U;
    msg.off_x = 0.3715374984525208;
    msg.off_y = 0.11075564809451643;
    msg.off_z = 0.212310172732061;

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
    msg.setTimeStamp(0.4032425029827995);
    msg.setSource(65301U);
    msg.setSourceEntity(224U);
    msg.setDestination(13848U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.5497040268402783);
    msg.setSource(28047U);
    msg.setSourceEntity(64U);
    msg.setDestination(11902U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.21905256628367054);
    msg.setSource(31880U);
    msg.setSourceEntity(125U);
    msg.setDestination(33346U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.5057635118285241);
    msg.setSource(31961U);
    msg.setSourceEntity(162U);
    msg.setDestination(43360U);
    msg.setDestinationEntity(160U);
    msg.mid = 14913U;

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
    msg.setTimeStamp(0.021133325663064473);
    msg.setSource(8279U);
    msg.setSourceEntity(180U);
    msg.setDestination(62812U);
    msg.setDestinationEntity(253U);
    msg.mid = 55176U;

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
    msg.setTimeStamp(0.7718354007858252);
    msg.setSource(52333U);
    msg.setSourceEntity(234U);
    msg.setDestination(42905U);
    msg.setDestinationEntity(59U);
    msg.mid = 9838U;

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
    msg.setTimeStamp(0.9418239006186981);
    msg.setSource(53942U);
    msg.setSourceEntity(9U);
    msg.setDestination(22142U);
    msg.setDestinationEntity(61U);
    msg.state = 198U;
    msg.eta = 10423U;
    msg.info.assign("TPGKCNKYRFWBCPZEIUBQIJUCARDPNTZTMDFKGXULWVGVSRGSAQDIHLKDH");

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
    msg.setTimeStamp(0.8028133610902964);
    msg.setSource(47523U);
    msg.setSourceEntity(32U);
    msg.setDestination(59766U);
    msg.setDestinationEntity(87U);
    msg.state = 216U;
    msg.eta = 14893U;
    msg.info.assign("JDGTXLGWUWKUMMAMCQKXDHYSJUGVZQZPPFDTKEWZGRRSYKOAXLHLOLRGRGBBMTDSRZLXXWPMVVZMQTPAIJBILPMQEIKOISYNMKRTGVNJUGZH");

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
    msg.setTimeStamp(0.9308136468579427);
    msg.setSource(16242U);
    msg.setSourceEntity(74U);
    msg.setDestination(20758U);
    msg.setDestinationEntity(181U);
    msg.state = 228U;
    msg.eta = 3381U;
    msg.info.assign("QPBLGLNBJKGLHMSDBCIXMHHMHNBIAYBQSARMCGQOCNPTSRO");

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
    msg.setTimeStamp(0.03334105968216827);
    msg.setSource(8513U);
    msg.setSourceEntity(48U);
    msg.setDestination(62032U);
    msg.setDestinationEntity(253U);
    msg.system = 62553U;
    msg.duration = 24542U;
    msg.speed = 0.44061434084626927;
    msg.speed_units = 35U;
    msg.x = 0.3654007010530209;
    msg.y = 0.14634576920168518;
    msg.z = 0.048644344687651886;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.40987370890194574);
    msg.setSource(57118U);
    msg.setSourceEntity(135U);
    msg.setDestination(10599U);
    msg.setDestinationEntity(111U);
    msg.system = 60923U;
    msg.duration = 55957U;
    msg.speed = 0.18639005377222329;
    msg.speed_units = 203U;
    msg.x = 0.11289390864214277;
    msg.y = 0.2785809120856557;
    msg.z = 0.31972134716422396;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.35180658525923747);
    msg.setSource(64193U);
    msg.setSourceEntity(122U);
    msg.setDestination(37360U);
    msg.setDestinationEntity(47U);
    msg.system = 39593U;
    msg.duration = 27665U;
    msg.speed = 0.212358398562134;
    msg.speed_units = 205U;
    msg.x = 0.7827923349910423;
    msg.y = 0.31248625097722205;
    msg.z = 0.7942811775921373;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.45470098506361);
    msg.setSource(26045U);
    msg.setSourceEntity(242U);
    msg.setDestination(46337U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.22513485033025216;
    msg.lon = 0.044313308367770365;
    msg.speed = 0.06042190277056547;
    msg.speed_units = 8U;
    msg.duration = 64057U;
    msg.sys_a = 4528U;
    msg.sys_b = 21114U;
    msg.move_threshold = 0.5169731485416483;

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
    msg.setTimeStamp(0.7196265596990445);
    msg.setSource(9231U);
    msg.setSourceEntity(109U);
    msg.setDestination(44324U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.9606861322762;
    msg.lon = 0.7734567770814021;
    msg.speed = 0.1614119889787171;
    msg.speed_units = 192U;
    msg.duration = 36746U;
    msg.sys_a = 21262U;
    msg.sys_b = 8751U;
    msg.move_threshold = 0.045468866809759034;

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
    msg.setTimeStamp(0.7091614821256339);
    msg.setSource(6102U);
    msg.setSourceEntity(107U);
    msg.setDestination(39717U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.6357845509139848;
    msg.lon = 0.9505169362614956;
    msg.speed = 0.20133297751154333;
    msg.speed_units = 137U;
    msg.duration = 23929U;
    msg.sys_a = 206U;
    msg.sys_b = 35288U;
    msg.move_threshold = 0.6367561173222863;

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
    msg.setTimeStamp(0.23171092367537216);
    msg.setSource(4942U);
    msg.setSourceEntity(249U);
    msg.setDestination(21959U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.35006498290760213;
    msg.lon = 0.08871972360729474;
    msg.z = 0.4084376011900256;
    msg.z_units = 191U;
    msg.speed = 0.2690327113049419;
    msg.speed_units = 15U;
    msg.custom.assign("ODUDBBKGRWKGNQMFQFHMWSGFJXHYQCTTHGFTTKHAOUQXKIMNOCCPONIVIAUWTVKEHRXBMJTALDLFPXYFVCCNXBYNLXWHYRNRMQYJFVFDDUZZNEAMLOYJUFEVHWIQWQJDKBZCREGWMLMYIUMXZBVYNZRETLRZANTSPLULMKVQDSQDDWBJHISFWGPEPOH");

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
    msg.setTimeStamp(0.8697366166867907);
    msg.setSource(1378U);
    msg.setSourceEntity(217U);
    msg.setDestination(25100U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.557043355367854;
    msg.lon = 0.8344127088838829;
    msg.z = 0.3210497134945772;
    msg.z_units = 221U;
    msg.speed = 0.9232628128821961;
    msg.speed_units = 188U;
    msg.custom.assign("NATTRGVFQXPZZNASVNRPQVOIROEYXFWLLTVKAIDBRCOKKRUNNHABBKDSWBSGSMCTIEECIJOLKACUQKNEDOPCEOBHFUFDBMFZQDIVUXAGYVEVGQRDNCIFWTYHHJEDHIZXTIWXBAOAMMVBPAYPSMLQLQVSPJOSWMCMPSHGAUWOZJYJTZUXJNWUXUYHXQDFEPHSFYRIFGGWBZTLZXSLGYMKULJWIVTTCKRLKYJLZHNJXOJCNCPG");

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
    msg.setTimeStamp(0.7451261456893736);
    msg.setSource(21334U);
    msg.setSourceEntity(78U);
    msg.setDestination(65394U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.6868629748063775;
    msg.lon = 0.8564704792901592;
    msg.z = 0.7673650742747549;
    msg.z_units = 235U;
    msg.speed = 0.8615096613801619;
    msg.speed_units = 64U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4706730441509287;
    tmp_msg_0.lon = 0.8964068549529876;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SCVGDKCTMRLKYBAHACVJFLTPHNIUYQBXSTYHBPRKCWLQVPOQURVMBBQHDZYQOCBCCDIRVUKUEEYHJMBKLTJWDHZUAXRNBTXHVAVMFEMATPOKYVWOBXTMEYRGSEQWNCLUXGKESFNRXPAW");

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
    msg.setTimeStamp(0.5456409868237643);
    msg.setSource(62548U);
    msg.setSourceEntity(8U);
    msg.setDestination(56070U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.8966204443771973;
    msg.lon = 0.2221340490244157;

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
    msg.setTimeStamp(0.2556901003712282);
    msg.setSource(22750U);
    msg.setSourceEntity(22U);
    msg.setDestination(64280U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.0014649239279360682;
    msg.lon = 0.22994552189555584;

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
    msg.setTimeStamp(0.17291641657928325);
    msg.setSource(13036U);
    msg.setSourceEntity(134U);
    msg.setDestination(60270U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.06913931017496211;
    msg.lon = 0.9862616453936358;

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
    msg.setTimeStamp(0.45644632271375873);
    msg.setSource(44083U);
    msg.setSourceEntity(95U);
    msg.setDestination(3031U);
    msg.setDestinationEntity(152U);
    msg.timeout = 972U;
    msg.lat = 0.20697315156306562;
    msg.lon = 0.24629906407999946;
    msg.z = 0.4654604862506877;
    msg.z_units = 183U;
    msg.pitch = 0.07757175278897888;
    msg.amplitude = 0.3383631556027896;
    msg.duration = 38732U;
    msg.speed = 0.3656951049737003;
    msg.speed_units = 0U;
    msg.radius = 0.3356311100490863;
    msg.direction = 228U;
    msg.custom.assign("AVCFQXDJZVKZMHUTCLTQCDSRIKPOBNFQMXBMZOHAWMNFWPDLHXKZPQYGKISIEVLVJIVOUBMEDURDDRJPARICRNYOBLYGRQDHIKGUWTZUPCYUYXAXHMPZAFJPBRWTVNAUTCMEHVSJEUFNWILF");

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
    msg.setTimeStamp(0.33169794239095063);
    msg.setSource(51497U);
    msg.setSourceEntity(169U);
    msg.setDestination(47127U);
    msg.setDestinationEntity(17U);
    msg.timeout = 23251U;
    msg.lat = 0.4989384936290361;
    msg.lon = 0.9840674846929914;
    msg.z = 0.15444536778019813;
    msg.z_units = 93U;
    msg.pitch = 0.7615893829201691;
    msg.amplitude = 0.12663399514931983;
    msg.duration = 60017U;
    msg.speed = 0.06098485878222737;
    msg.speed_units = 172U;
    msg.radius = 0.11763200008341534;
    msg.direction = 160U;
    msg.custom.assign("EGVWIPTCKHFFILXWSUVCJCHNEVNSMGWYJKQVOLWQAXJYUQTUPSTBBQMLPSCCRMCYAK");

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
    msg.setTimeStamp(0.03631214983668851);
    msg.setSource(21702U);
    msg.setSourceEntity(43U);
    msg.setDestination(40509U);
    msg.setDestinationEntity(37U);
    msg.timeout = 60284U;
    msg.lat = 0.5685063783102154;
    msg.lon = 0.12476415314050349;
    msg.z = 0.8184522139176406;
    msg.z_units = 115U;
    msg.pitch = 0.366089631215476;
    msg.amplitude = 0.2802902385151702;
    msg.duration = 6847U;
    msg.speed = 0.3930844684038036;
    msg.speed_units = 101U;
    msg.radius = 0.8468140109036658;
    msg.direction = 20U;
    msg.custom.assign("MVHYHNZRMAKUPQIASMGTRRUUYOFVBFGEPTZXSOYZWDTOIZQUFHWQXBRGWULHUHHXDMVDFBDSJWHTBNAKDVIGNFUVKYJXDENHLBWCNW");

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
    msg.setTimeStamp(0.8082856939794342);
    msg.setSource(7319U);
    msg.setSourceEntity(129U);
    msg.setDestination(9475U);
    msg.setDestinationEntity(143U);
    msg.formation_name.assign("MIHMKHTJYUVFVMBZRALDQUQKIGFQWAPUPCYLWTGVGYJULLYYOFJYANXRRROWVIRWBNSHDSPGGBIMPVCOKKRUSASADLBOBMENTUITXXIGNKQOQWRJGUDAOJWFSAILESARPFCUJSPTGEKWBYUGXRODBCENKCBZZJMNCEMXYNLLOEOJHWAQXWILUHCICMXMEFZETKVNKZQMFHEFZGCDYNAVBJBOPDHESRQVTZPVDTHQPKDSQVNTSHXYZXTWZ");
    msg.reference_frame = 25U;
    msg.custom.assign("IUJVLGNCFAGGBJYZFIRDMMTWTUVCBUNUHPUHAEAPCDKRLQIFGTJKZIABEJAGTLUXTILHMFVAIHVOQWSKCNBPRCRCAGNKZWIMUEWNVBGJDEFNXJLWRWPVJNLJGPIYWTXZDQYOMTSZIPOXZWHRQEOCSDUAEDQVTPYVKJHYDVGEKYWBOOAYGMQVRIQUZESRXQKHYRHZLBXHPXFFQT");

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
    msg.setTimeStamp(0.35316690460840006);
    msg.setSource(28065U);
    msg.setSourceEntity(200U);
    msg.setDestination(10988U);
    msg.setDestinationEntity(66U);
    msg.formation_name.assign("OOTRKZPCITDKLBXVPBYESFJFUVLFIMVJKQHEHRXLBYDPALCBAYNKFJFHEISTYTNNBVBGGLEEBYFMXDXAIDJGJRSULBGGYMWSGEGQJPEIUXDXGORPRRTCJDBZAUQYXHWVCDNXWPWCAUQJOANCLAIWJZLRJYS");
    msg.reference_frame = 18U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3024U;
    tmp_msg_0.off_x = 0.3694477279978685;
    tmp_msg_0.off_y = 0.8395075836969894;
    tmp_msg_0.off_z = 0.4114684974584487;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YVEZACNHVFHKCFIMKOUDUFJGQUDFGYVAWFBBWYRCGSAMVXSSNKMKPZGZDBANIGSNGIDMFUCTNXJZQFWRASPAAWQEJGPOSTAUHCDEBOLIWCOYMWXLTQNHJDVZTVTIHCRBXJWYUITOCBIZRGJGIQYFYZYHEQHRDCQKX");

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
    msg.setTimeStamp(0.5610857224855016);
    msg.setSource(3161U);
    msg.setSourceEntity(5U);
    msg.setDestination(6237U);
    msg.setDestinationEntity(51U);
    msg.formation_name.assign("DRJRZKHHQSNIOCIMFOTCECK");
    msg.reference_frame = 41U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6946U;
    tmp_msg_0.off_x = 0.028926027952771216;
    tmp_msg_0.off_y = 0.5385953665308264;
    tmp_msg_0.off_z = 0.7565605969278137;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("AREPOZCDFNIOTKUHLLZLVSEPDLSLSXEMNPJYAQKMMRNNDJTGUAAQCQGSHFDRZXWCJNBIZBMNNYRXKBASSBUXEOFMPGEHQYCWESURFCHULUTSSFFGIMISPGMWODTCVVTOUKETMFXDPLDEIBJAOUOJYQVZHGWJJRPWCHZYICVFKYTBYFPV");

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
    msg.setTimeStamp(0.1236443957704213);
    msg.setSource(31960U);
    msg.setSourceEntity(95U);
    msg.setDestination(32708U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("MOVJEXPJDVNSWAIWGXHURHHTRFIQERBVECSAASCDNLWEMAVYSCPBLEJBHRWUDYKDPBIYYIGWEZCLQBIQIBMGLRKLWQCFFPFGYHZARFJHHXZBXBNKQXWAUPVJMJNFVQTCKGYCKDHEZLMPWRUFLYYATKHSOPDSJIWUUVNCVRPZCOTWOOIXXMBPVQOMYLQTPTQDHDVFIEQXNGRLSZBMAJNRKGGENSSSMJUNTFZUXCFZYOOUTLOIUKKZOXMTZT");
    msg.formation_name.assign("CLAGXEWBTFRRXNDPDHEBJNLQCVCESXKUSYNLOGQRMKYYSWLIIYYENLEKBZANWGBERMCCXXXUDGDHDSRTIKJMGBVPHFNBZHTRFLSDUMQPVFAVOAPZZMNFIBXCPJUUAOVPQWKWDQIUGIQITLZEWBYJFHCGJMHOAWFFQZGPDYDEYBHVSHYTXJGJNSZOTQKAIVMOUUOSROFAKASJQGWTZSOOVXTWRUNFUKKTIMEYCHLMZELCNXRCLKWP");
    msg.plan_id.assign("MVSQQRLEEOTIXCNFDPPSXUMOFHESCKPTLJJWRZFLYOBZGXQARIXKHC");
    msg.description.assign("NKZLGIDVYOHGXSEPJQWUEMRJNBEFWKBCLLRBXNBPNUIFCFDJAQTTXYZFYYEXGSOMOSMVMOKSMOD");
    msg.leader_speed = 0.6693522544070537;
    msg.leader_bank_lim = 0.12511197206785174;
    msg.pos_sim_err_lim = 0.2989820971192725;
    msg.pos_sim_err_wrn = 0.3563735471327558;
    msg.pos_sim_err_timeout = 24241U;
    msg.converg_max = 0.24054680640544834;
    msg.converg_timeout = 22754U;
    msg.comms_timeout = 63729U;
    msg.turb_lim = 0.30404008842976626;
    msg.custom.assign("SQFEZIRJNDMDYUKFUHAHLYJEDQXWSCVQGLBCKVFRPKKQFDMIVBFOXRWKOWYNAGNHAJIQEAPVGALJKTMQNGOBZNEDMHURBDWSL");

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
    msg.setTimeStamp(0.9887670287017147);
    msg.setSource(27785U);
    msg.setSourceEntity(211U);
    msg.setDestination(24170U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("RHGEPIIIUNPGCEGGLODHSEYNAATVMFDIRJKFFPYWXPQJTUBBZHQTLCINNKGRCWQBBTJDXLUZSESKBNQXYDEANEYGPIFXGDMZZOJWYZFDVCV");
    msg.formation_name.assign("NXWISJQDJBBMRBRBARXANTECUCSBUUUQLSURDJSKDWIAOZZFRWZYIZZNVBHQYKVZMGXHKOLQKZLHCXUZHNAPOGVNRSBEGMTTEMFNKOPXTJGKXJAHUGWQKYNBMKKGCIDVPITPZYVYAEWFXDEHNOLAAIQFTPCFSJDLTRDJOACDOYPNPEIGLHSFWOOFQCBBPTYUEHSLEXFS");
    msg.plan_id.assign("GNPDVLEUUFDWGJCHLYWDGXPOVUTFYKHFFELQVYVEJAVRNRNRAICDIAENZQOBSGCRYXZIDTTOHZGOZSMUJBOJVLBATQOYZRAWPDJQAKBKQCQAIHWKMBEUPKMIRKPKIXCKRZNSAVZGXXSJUVXOWYLZFQCSJFEWUMCPPLCQOLNMHWHUXTJBEHGKGBLHLSGNDMYBNSSLTFABVPTDTWBJXNMFTNRFSICJMMIRFMPHEYCQUYETUDQDWOGXVZWP");
    msg.description.assign("ODSFTHHKCKRMVCNFJSQQKURMGVYOSJDRGLBCZHGXXBACYJFZITMPRKVBTZVEZDONSQAYXPRANMJINWTAYROPFDFKCYDLTKCUWTOXMMNUUPUCGTZNJOMFTGQVZAR");
    msg.leader_speed = 0.786576401158115;
    msg.leader_bank_lim = 0.8757381475679993;
    msg.pos_sim_err_lim = 0.9012450810700021;
    msg.pos_sim_err_wrn = 0.5223887563795306;
    msg.pos_sim_err_timeout = 43298U;
    msg.converg_max = 0.7219937023810744;
    msg.converg_timeout = 5975U;
    msg.comms_timeout = 31903U;
    msg.turb_lim = 0.4991928816915502;
    msg.custom.assign("GAIPMEJIBZNYVESIVLPCORSYOCJKTRJZ");

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
    msg.setTimeStamp(0.4264270588644056);
    msg.setSource(13673U);
    msg.setSourceEntity(24U);
    msg.setDestination(19542U);
    msg.setDestinationEntity(226U);
    msg.group_name.assign("BHFIDXGYJPTZWWKQPYVBDKYXMJCMDQSXLAZWDAAIAMIDBVUIEVOHURWBCVIEVWBUGSGZDRCQNLEZMGXUQQZFEPELVSTYJPEXQZNROZCXNGGXFQDOLMWTPTAACEFNNPKUJRKLZANTODCWVHKPVKNQFTQUVESHJYJBRXPFUHHLTHPGNOYHFJT");
    msg.formation_name.assign("CZZZLABDJPEWFXSYAISUFWQQWTOOOSEZFOWZBCOLFVVFVSDGGTIMNHXAXHLKRYJWVZINHZEMHGKGUFQPVPLMNECBCLJUPCUTVXDOY");
    msg.plan_id.assign("GVOKPUQZTIZLOTSEUKCXTIWDXJSKCAKJXHMQGEXGRBGJSYGWJRAMYVVCMFCHTTAFUXAOGIRAUKRNNADLOIFQYCMSGWPFKHMLFXCLPOAWQFNWPDABGYYDIKVOOTTTTJYSDMBLXLFZBRCIXPLQREYGOPZBNFIAV");
    msg.description.assign("VPUMATUWFVNLQNDQZJXDXSZIHSOLFZERMJGJEPAXKIATAGBCQULBTWOLKFFYKOSNMUFGBOFAATISMYTRDWEKWCPHBEMUZJHKXZXDGIQUWEFIBRJL");
    msg.leader_speed = 0.6613680123272591;
    msg.leader_bank_lim = 0.8810184417521925;
    msg.pos_sim_err_lim = 0.8481753553608491;
    msg.pos_sim_err_wrn = 0.42987850533206917;
    msg.pos_sim_err_timeout = 21429U;
    msg.converg_max = 0.7048641464027959;
    msg.converg_timeout = 37668U;
    msg.comms_timeout = 48183U;
    msg.turb_lim = 0.6555703240942057;
    msg.custom.assign("SVCGBQDFZVDZJRYHKEVXVCDEUCUOIADDTGXRAWBSNNBLPIJZBXXEVLJNKZAMHSOAESUBHQFHTRETTMTABLPUGLNCSJDKPHCANHPJRAXBPZRECCIYYCTKPREMQSNNMIFWMZJCZNLWSBBKGSTLYBQRDJCDKSOM");

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
    msg.setTimeStamp(0.7484278876956755);
    msg.setSource(14238U);
    msg.setSourceEntity(190U);
    msg.setDestination(21793U);
    msg.setDestinationEntity(84U);
    msg.control_src = 42651U;
    msg.control_ent = 113U;
    msg.timeout = 0.9780206965240053;
    msg.loiter_radius = 0.035779206599920954;
    msg.altitude_interval = 0.9516578976141209;

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
    msg.setTimeStamp(0.5390084685315947);
    msg.setSource(39598U);
    msg.setSourceEntity(4U);
    msg.setDestination(58753U);
    msg.setDestinationEntity(195U);
    msg.control_src = 39088U;
    msg.control_ent = 224U;
    msg.timeout = 0.4267885970070161;
    msg.loiter_radius = 0.09595157743950011;
    msg.altitude_interval = 0.08555438130647541;

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
    msg.setTimeStamp(0.6946707000974685);
    msg.setSource(59045U);
    msg.setSourceEntity(232U);
    msg.setDestination(908U);
    msg.setDestinationEntity(232U);
    msg.control_src = 12901U;
    msg.control_ent = 4U;
    msg.timeout = 0.7140888832682415;
    msg.loiter_radius = 0.9454599826332888;
    msg.altitude_interval = 0.8284186057566493;

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
    msg.setTimeStamp(0.5791782038968601);
    msg.setSource(44286U);
    msg.setSourceEntity(167U);
    msg.setDestination(65135U);
    msg.setDestinationEntity(217U);
    msg.flags = 171U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6160409214674973;
    tmp_msg_0.speed_units = 0U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.48901461760867415;
    tmp_msg_1.z_units = 95U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6395725426374302;
    msg.lon = 0.3810223023134056;
    msg.radius = 0.9103966818729493;

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
    msg.setTimeStamp(0.10148204615601863);
    msg.setSource(26808U);
    msg.setSourceEntity(2U);
    msg.setDestination(30679U);
    msg.setDestinationEntity(215U);
    msg.flags = 180U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6496413338827539;
    tmp_msg_0.speed_units = 204U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8788555629955029;
    tmp_msg_1.z_units = 73U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5949891983864508;
    msg.lon = 0.5972743976685043;
    msg.radius = 0.3372603434723871;

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
    msg.setTimeStamp(0.875654552121231);
    msg.setSource(31879U);
    msg.setSourceEntity(95U);
    msg.setDestination(23135U);
    msg.setDestinationEntity(246U);
    msg.flags = 109U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2361517627346046;
    tmp_msg_0.speed_units = 112U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5620743682043703;
    tmp_msg_1.z_units = 210U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.42295501057732043;
    msg.lon = 0.5413078247265054;
    msg.radius = 0.5749066283254503;

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
    msg.setTimeStamp(0.507950277934169);
    msg.setSource(52534U);
    msg.setSourceEntity(120U);
    msg.setDestination(22130U);
    msg.setDestinationEntity(31U);
    msg.control_src = 20625U;
    msg.control_ent = 137U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 132U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9667928281259706;
    tmp_tmp_msg_0_0.speed_units = 81U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6819430132967166;
    tmp_tmp_msg_0_1.z_units = 250U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.575419796299843;
    tmp_msg_0.lon = 0.24792363163643505;
    tmp_msg_0.radius = 0.19182420058091665;
    msg.reference.set(tmp_msg_0);
    msg.state = 173U;
    msg.proximity = 23U;

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
    msg.setTimeStamp(0.6401360206258965);
    msg.setSource(54072U);
    msg.setSourceEntity(223U);
    msg.setDestination(29342U);
    msg.setDestinationEntity(112U);
    msg.control_src = 41908U;
    msg.control_ent = 90U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 189U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3666483498549149;
    tmp_tmp_msg_0_0.speed_units = 51U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6437583483703865;
    tmp_tmp_msg_0_1.z_units = 101U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0660118980112101;
    tmp_msg_0.lon = 0.7762833019846195;
    tmp_msg_0.radius = 0.5343242817935493;
    msg.reference.set(tmp_msg_0);
    msg.state = 102U;
    msg.proximity = 135U;

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
    msg.setTimeStamp(0.6183034024773314);
    msg.setSource(2805U);
    msg.setSourceEntity(94U);
    msg.setDestination(50687U);
    msg.setDestinationEntity(241U);
    msg.control_src = 44494U;
    msg.control_ent = 8U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 156U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8973639544565689;
    tmp_tmp_msg_0_0.speed_units = 224U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6802221021437815;
    tmp_tmp_msg_0_1.z_units = 16U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.974881584479787;
    tmp_msg_0.lon = 0.855166152428866;
    tmp_msg_0.radius = 0.7418559967147668;
    msg.reference.set(tmp_msg_0);
    msg.state = 90U;
    msg.proximity = 245U;

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
    msg.setTimeStamp(0.10176522488730544);
    msg.setSource(40454U);
    msg.setSourceEntity(138U);
    msg.setDestination(2025U);
    msg.setDestinationEntity(15U);
    msg.ax_cmd = 0.6759314809859021;
    msg.ay_cmd = 0.6127862822654438;
    msg.az_cmd = 0.9201690143844845;
    msg.ax_des = 0.05035557623641518;
    msg.ay_des = 0.5510406114736303;
    msg.az_des = 0.006507633721998252;
    msg.virt_err_x = 0.1704289192863071;
    msg.virt_err_y = 0.03350935471422123;
    msg.virt_err_z = 0.14512908251327872;
    msg.surf_fdbk_x = 0.16644244803324904;
    msg.surf_fdbk_y = 0.9568865461981026;
    msg.surf_fdbk_z = 0.10131980759710069;
    msg.surf_unkn_x = 0.4079976465177334;
    msg.surf_unkn_y = 0.8613843285576182;
    msg.surf_unkn_z = 0.6902959401316761;
    msg.ss_x = 0.5698363397650551;
    msg.ss_y = 0.6753204309760579;
    msg.ss_z = 0.44687436720826423;

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
    msg.setTimeStamp(0.3019325221482586);
    msg.setSource(59670U);
    msg.setSourceEntity(246U);
    msg.setDestination(60541U);
    msg.setDestinationEntity(133U);
    msg.ax_cmd = 0.061229049252018775;
    msg.ay_cmd = 0.20551690166776937;
    msg.az_cmd = 0.2918966822579404;
    msg.ax_des = 0.374764572778694;
    msg.ay_des = 0.1943325329722061;
    msg.az_des = 0.4634065588776949;
    msg.virt_err_x = 0.28104471424573907;
    msg.virt_err_y = 0.6480279359759579;
    msg.virt_err_z = 0.36140000147799456;
    msg.surf_fdbk_x = 0.0016995868334784836;
    msg.surf_fdbk_y = 0.23519985082497696;
    msg.surf_fdbk_z = 0.0918999386754129;
    msg.surf_unkn_x = 0.43397339393483525;
    msg.surf_unkn_y = 0.4029388161140608;
    msg.surf_unkn_z = 0.11991023563388414;
    msg.ss_x = 0.29707734791490525;
    msg.ss_y = 0.5602535147588342;
    msg.ss_z = 0.22379118334147807;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UAHGDOIPXHGYTEORJLELVJZJOMPKQSEAINXNRAJOSQHNYCBKLZHXGCCDWTJZFTOXDFGVWDQFAQAFTGMUWBLICNONQEIEWLYBCZR");
    tmp_msg_0.dist = 0.4398782532398099;
    tmp_msg_0.err = 0.01876121316685808;
    tmp_msg_0.ctrl_imp = 0.05318396135352499;
    tmp_msg_0.rel_dir_x = 0.2747853818957209;
    tmp_msg_0.rel_dir_y = 0.03378461248948772;
    tmp_msg_0.rel_dir_z = 0.7005628641575202;
    tmp_msg_0.err_x = 0.06801758249609857;
    tmp_msg_0.err_y = 0.05836383526892008;
    tmp_msg_0.err_z = 0.025858949964998712;
    tmp_msg_0.rf_err_x = 0.8197299811014935;
    tmp_msg_0.rf_err_y = 0.9848921464785835;
    tmp_msg_0.rf_err_z = 0.17131302948482463;
    tmp_msg_0.rf_err_vx = 0.2594484324556967;
    tmp_msg_0.rf_err_vy = 0.762306498161275;
    tmp_msg_0.rf_err_vz = 0.27872626736151074;
    tmp_msg_0.ss_x = 0.06348486708593526;
    tmp_msg_0.ss_y = 0.4848491244753568;
    tmp_msg_0.ss_z = 0.3318015381976298;
    tmp_msg_0.virt_err_x = 0.33932793385725113;
    tmp_msg_0.virt_err_y = 0.23300080634976428;
    tmp_msg_0.virt_err_z = 0.906339879346611;
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
    msg.setTimeStamp(0.6451687314700475);
    msg.setSource(56875U);
    msg.setSourceEntity(38U);
    msg.setDestination(57816U);
    msg.setDestinationEntity(45U);
    msg.ax_cmd = 0.8953574995616002;
    msg.ay_cmd = 0.20138419358211268;
    msg.az_cmd = 0.6210976586174499;
    msg.ax_des = 0.23857402091084035;
    msg.ay_des = 0.9352513725810964;
    msg.az_des = 0.9574901075580791;
    msg.virt_err_x = 0.7098222283192565;
    msg.virt_err_y = 0.7234758961932894;
    msg.virt_err_z = 0.36436781237362426;
    msg.surf_fdbk_x = 0.5825648923252142;
    msg.surf_fdbk_y = 0.6505835532564348;
    msg.surf_fdbk_z = 0.09897448225246397;
    msg.surf_unkn_x = 0.3244346838519204;
    msg.surf_unkn_y = 0.4649238076810469;
    msg.surf_unkn_z = 0.16159828470550708;
    msg.ss_x = 0.5815002332977738;
    msg.ss_y = 0.27036527534943233;
    msg.ss_z = 0.37805984318181396;

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
    msg.setTimeStamp(0.46991316278605644);
    msg.setSource(19054U);
    msg.setSourceEntity(136U);
    msg.setDestination(40243U);
    msg.setDestinationEntity(198U);
    msg.s_id.assign("MBMAZCSJTFOQTCOERBHCDNYLFLUWXWIVUURIHLIMWOBOVBXTTNSSQVHQRDKZZLPUFLRYCSLGQMBZBDJWTVRQRRSXAKMNZTYOYZPVHNEEPHXNYLWGBUQPMPHYONABIJDKGISYNCJETIPGGFZUZQPVLIKPDXJEJUMOSUVWOGWOAWQJVYPNZHVMQLDESSXTKCIAGPKVJCGFDXISNTCXHGWNDARHKFEKMARDFQ");
    msg.dist = 0.904423349263143;
    msg.err = 0.949192941762126;
    msg.ctrl_imp = 0.5641300270630326;
    msg.rel_dir_x = 0.6115161559863449;
    msg.rel_dir_y = 0.8461411803382468;
    msg.rel_dir_z = 0.1763064766510305;
    msg.err_x = 0.5179955540448542;
    msg.err_y = 0.6938551002720582;
    msg.err_z = 0.912082415967119;
    msg.rf_err_x = 0.4216441569456366;
    msg.rf_err_y = 0.450719943441365;
    msg.rf_err_z = 0.23566211735920217;
    msg.rf_err_vx = 0.7696656867499958;
    msg.rf_err_vy = 0.3747871618820501;
    msg.rf_err_vz = 0.8743520954430737;
    msg.ss_x = 0.9825930084619184;
    msg.ss_y = 0.1612052959255833;
    msg.ss_z = 0.05915619690452267;
    msg.virt_err_x = 0.8765742268930881;
    msg.virt_err_y = 0.5200654362094195;
    msg.virt_err_z = 0.5236738789273351;

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
    msg.setTimeStamp(0.016140891706181937);
    msg.setSource(36057U);
    msg.setSourceEntity(40U);
    msg.setDestination(19417U);
    msg.setDestinationEntity(239U);
    msg.s_id.assign("JGGONNZTIEVOUHWKSTTLSXWINMZDMGJM");
    msg.dist = 0.09328730735808877;
    msg.err = 0.796148498635688;
    msg.ctrl_imp = 0.21692540465872556;
    msg.rel_dir_x = 0.3883312475930377;
    msg.rel_dir_y = 0.20190259872420913;
    msg.rel_dir_z = 0.39396873725140846;
    msg.err_x = 0.37889842581811817;
    msg.err_y = 0.04222239069153344;
    msg.err_z = 0.4754489149686456;
    msg.rf_err_x = 0.42758362344630285;
    msg.rf_err_y = 0.7428277016439542;
    msg.rf_err_z = 0.5822099207048608;
    msg.rf_err_vx = 0.039536861113270816;
    msg.rf_err_vy = 0.18257768516925954;
    msg.rf_err_vz = 0.5868594585369897;
    msg.ss_x = 0.1826076348638076;
    msg.ss_y = 0.055561409236342896;
    msg.ss_z = 0.6747965447783448;
    msg.virt_err_x = 0.5492600353739809;
    msg.virt_err_y = 0.2670198081056482;
    msg.virt_err_z = 0.5382854528239548;

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
    msg.setTimeStamp(0.3083991515502601);
    msg.setSource(16891U);
    msg.setSourceEntity(66U);
    msg.setDestination(7831U);
    msg.setDestinationEntity(24U);
    msg.s_id.assign("WZGKEMWHEYJGCBEXGVGRLNSTTKNISRWHDTNYHWERAWPKOMKFUJSNHDQZETBLHYCDIBLMPRGQUYOUDKDOJFPCNNRHABXGEOLAZTNZVCVYNIDRBZFASPTFJJCKWWYKUBIZNGXVMPLQPKWTIYOHHAOMP");
    msg.dist = 0.7051808483175952;
    msg.err = 0.9516271352701782;
    msg.ctrl_imp = 0.24621726649431286;
    msg.rel_dir_x = 0.8065421895650323;
    msg.rel_dir_y = 0.4771749680251136;
    msg.rel_dir_z = 0.41559046537437405;
    msg.err_x = 0.2627262056445199;
    msg.err_y = 0.590796270637495;
    msg.err_z = 0.7706036438626013;
    msg.rf_err_x = 0.6568408733785375;
    msg.rf_err_y = 0.41543893635440454;
    msg.rf_err_z = 0.06492436083249575;
    msg.rf_err_vx = 0.7001625844019923;
    msg.rf_err_vy = 0.7804387247719725;
    msg.rf_err_vz = 0.6766401518302333;
    msg.ss_x = 0.732978996898208;
    msg.ss_y = 0.27967338394487506;
    msg.ss_z = 0.010394456718013534;
    msg.virt_err_x = 0.2036988154575078;
    msg.virt_err_y = 0.3235363422232581;
    msg.virt_err_z = 0.8416316995979216;

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
    msg.setTimeStamp(0.22957949699673807);
    msg.setSource(33862U);
    msg.setSourceEntity(160U);
    msg.setDestination(40397U);
    msg.setDestinationEntity(66U);
    msg.timeout = 42175U;
    msg.rpm = 0.08624798982113135;
    msg.direction = 152U;
    msg.custom.assign("LHBMOIXOVJUBFNOYIXVKGUEVHBQDBURICRLASEBHJZCSABSMYZDWYEKTELKAHEOVOSGYJESGFGXLFPYZFXRUGVSSTRUZIUPMZYWPJFIFCQTRQZKBTDDFKGSDNVKPEFDCNRQTYNXTQCYDXIGNJVVNMHMWHIWHXLEJKNJSZBSGNMIGWCMAULTALTWWKAPQHDJPVJLMLQOOFVIWMAORXCRETCPZYTJDNPNARHXLAZQBKZAKUBYQPGOXWR");

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
    msg.setTimeStamp(0.45801380619286103);
    msg.setSource(9820U);
    msg.setSourceEntity(71U);
    msg.setDestination(41337U);
    msg.setDestinationEntity(52U);
    msg.timeout = 52066U;
    msg.rpm = 0.8542963154943659;
    msg.direction = 35U;
    msg.custom.assign("ADJGJOHXKKOSWQNZROSDFTSMGHIRCNTHVRFBZBPZMYUGSLYOGXFPJWFEHEATGHOENUXBSSKVKNKLMRWVOGDCRBMHUSPMQUYYBQZQVOTNWOIALWBWYRAVIYTDXBIMLBWJVLFALKLRKCGUEQRPNOHGYFUJETLZD");

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
    msg.setTimeStamp(0.694082139215015);
    msg.setSource(19817U);
    msg.setSourceEntity(16U);
    msg.setDestination(30631U);
    msg.setDestinationEntity(3U);
    msg.timeout = 40267U;
    msg.rpm = 0.7641485652156429;
    msg.direction = 134U;
    msg.custom.assign("BIEODDFFXTBVZHAPBFHINKXPZWKEDYXYVJCHWEYHUWRKMIASZPCVF");

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
    msg.setTimeStamp(0.5557518028918699);
    msg.setSource(11375U);
    msg.setSourceEntity(253U);
    msg.setDestination(28012U);
    msg.setDestinationEntity(126U);
    msg.formation_name.assign("URZJOAKYXKRGYMBCCPZSYSMIKWOUNWBHJVDGZWLXJOODQIPMFFYUAELXMITGTJBBPSCLUSECKABNCKWOMYAQLYLGDNOHKDPWMF");
    msg.type = 67U;
    msg.op = 1U;
    msg.group_name.assign("EHKBXVSVIAQBLHNZGHAQPPUFYUCPTYJDNEVGRTJEXFHVFQYNVBIMGWLVIGLTFENACJBMYSLXCRYSV");
    msg.plan_id.assign("IGFHOKMBSQLPEISOIZYKDFUCSYADVKJRFFQWIKZOCGANSFKGBJXIBOJPNJLNCFOMWTFYUSJAFKRVQLETXLLPUTZBGWNWNIVHUHJLTGZCXLWU");
    msg.description.assign("NLLXYSQRFCDAKQURQLTIHFGEQVSLMIDSSHYBJCFHFWZYZOMEWFBPTBNIWWUURJQCDRQSOEHGAPIKFILUIZBZQBKFXSMCXSUBJKKQLDMZZVZDWPPTPFIUPOXNOTKQJXODUXABEGWCIEVWVNLEDEYETMECVGRYOFBYYXUJPIXKWNTCJAPJBKFZYOWRHNGXSQZAUCVMHHPYJWVLOMLRVATSTVGNNV");
    msg.reference_frame = 213U;
    msg.leader_bank_lim = 0.4766615479474615;
    msg.leader_speed_min = 0.20144644280397206;
    msg.leader_speed_max = 0.29667756162784364;
    msg.leader_alt_min = 0.4177683200928255;
    msg.leader_alt_max = 0.4503289132341256;
    msg.pos_sim_err_lim = 0.40565287411210815;
    msg.pos_sim_err_wrn = 0.7354052518956666;
    msg.pos_sim_err_timeout = 31226U;
    msg.converg_max = 0.5584243346365731;
    msg.converg_timeout = 19353U;
    msg.comms_timeout = 7884U;
    msg.turb_lim = 0.06501641257667934;
    msg.custom.assign("BQZTTBGMSDYREGTRBILZZBROGKJDTEZCYLCKAPOPMBMJWYMJAAWSTFBXKVYCHWMVYNOMMOVEKQSWEXHJPHAQZVPJUNISMIJODLVXGHHSGLVDVHNXDQMQBXQQINORSOKXTIGIWKGECRVHZSDXDWPSOZPECFKNCBY");

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
    msg.setTimeStamp(0.04066509073912905);
    msg.setSource(22134U);
    msg.setSourceEntity(187U);
    msg.setDestination(1069U);
    msg.setDestinationEntity(130U);
    msg.formation_name.assign("FYFAKKGQKSQBFFLSOZMRHVGZUYNJHTCZCDBJRPUSTDNYXEVQEMMJXBXWFHPXUTQJUWSOSLFPPWTWOMV");
    msg.type = 61U;
    msg.op = 169U;
    msg.group_name.assign("RDTURKHUZKGZOAZOWFSGDKQSLTKZJJLHPXCONVXFGCATVZGNVYUJNTSPYTXJSLVINLW");
    msg.plan_id.assign("TWHROCKTQUSWLJNOKQBVSXNHCMPUKWUPECADRLZVYMSSMDOUQWOKTIIIXEZXYQUOXHRHNEZGZARUAMFRYVVLMEGVPVODFJNFTQVFOKYICBFPIEBZZQBDUKSYRZTGPMLYEEKWERFRTJGTBKRONLIPUGHQCXJTJS");
    msg.description.assign("PQORYCSKVVEDGFUCKHQGXLDKMSAIHGFPBYSFTRERIAWUPAZOH");
    msg.reference_frame = 88U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1986U;
    tmp_msg_0.off_x = 0.5698933917151594;
    tmp_msg_0.off_y = 0.42405308403099207;
    tmp_msg_0.off_z = 0.9881435280157369;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.24984148098409775;
    msg.leader_speed_min = 0.6273969436279591;
    msg.leader_speed_max = 0.8791824238042345;
    msg.leader_alt_min = 0.8471228982401476;
    msg.leader_alt_max = 0.7780886837592531;
    msg.pos_sim_err_lim = 0.30540781198516265;
    msg.pos_sim_err_wrn = 0.6531408089877084;
    msg.pos_sim_err_timeout = 6118U;
    msg.converg_max = 0.9414283552850173;
    msg.converg_timeout = 13011U;
    msg.comms_timeout = 41145U;
    msg.turb_lim = 0.4090458927926033;
    msg.custom.assign("HJFHRYBFIWLLSNPSXAEYLBBOUPDEFQETZUZLMKMTYTWQJNHVYCJOVJPHDAPKIJMMZFPUQWWGPKLWBLCVIKSARROJIZGQYIXMKEPPYPJJFKUNIYIXQDAB");

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
    msg.setTimeStamp(0.8340194457840656);
    msg.setSource(44679U);
    msg.setSourceEntity(130U);
    msg.setDestination(51223U);
    msg.setDestinationEntity(178U);
    msg.formation_name.assign("SNXDIIZGXXXOZBBNDFJLLZUDJSKMMKIMPXPGLGNZLGSWEEXBMJISCHUYXOTAXTHERYPKUZHIYTIQUQLACVHFUVRYNCAAQINWGHIDECPJKLDOLLJNPDYZMVOLYTTMCEKPSTJHUVHFSVYMPVWKZIOBJPUWJAOCLHTSCFNQDYDBFUWOAJVAEKYXFRGA");
    msg.type = 71U;
    msg.op = 187U;
    msg.group_name.assign("NZCDEZTLCMCYCZYCIEHSMRVSUADGQZOGGOFSXLFJKHVPQEEMADWIFMQPKKSPRCBRRJHICPHGXKLQHTFTYXWQAHAPOXSZTJCRZJMQZWUKAATQITOBMULAUXSSZJXIJFNMGDNUDXHDKTDRKUCVKUOMDWSSBOQZERRSDLLFBLRBGYLIFUTNIWJV");
    msg.plan_id.assign("DUNFOFIWQWPIFTLTXPPSLTXSUZBUKCQTRWLESVUEAJHXAPTEQYJKEGPNVISGCZEEZJQFRMUNMSIVZLAGCRSMXJHJDRWSXWVLQLYQDE");
    msg.description.assign("YMNMWYZMHIUXVWJABWAYDFBJBOKUCEJCJFPJDTIODYQWUOMJOYJXRIGSUITSV");
    msg.reference_frame = 73U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16263U;
    tmp_msg_0.off_x = 0.8277664756340075;
    tmp_msg_0.off_y = 0.0922373791463843;
    tmp_msg_0.off_z = 0.32483131013178834;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4151294623444204;
    msg.leader_speed_min = 0.9593039068320505;
    msg.leader_speed_max = 0.1695478818313101;
    msg.leader_alt_min = 0.38291572039912014;
    msg.leader_alt_max = 0.1485003317974074;
    msg.pos_sim_err_lim = 0.341942740877323;
    msg.pos_sim_err_wrn = 0.6749991751640076;
    msg.pos_sim_err_timeout = 36005U;
    msg.converg_max = 0.6994811899310628;
    msg.converg_timeout = 65318U;
    msg.comms_timeout = 9541U;
    msg.turb_lim = 0.11296312718813994;
    msg.custom.assign("SXZTTAISEZDBUFBIXSXMQUUBERTZQFDSYNJJKHBIKRUNHOLAEDMYYXPJVUROBVWFTPKZS");

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
    msg.setTimeStamp(0.7086533921304654);
    msg.setSource(16070U);
    msg.setSourceEntity(29U);
    msg.setDestination(61991U);
    msg.setDestinationEntity(169U);
    msg.timeout = 50993U;
    msg.lat = 0.7152320653175519;
    msg.lon = 0.3884660881696935;
    msg.z = 0.2937980894558132;
    msg.z_units = 6U;
    msg.speed = 0.8384567758797962;
    msg.speed_units = 130U;
    msg.custom.assign("LDATHFKZCYAQBOXEQSTLFXSXZPBLFSZGUFEVLCSUEJJTYNWGKNHCEIGIBVSZIQTDEZJPXULCPXSSLUBAFGSTGXZYWROIPBTKRXPXTMVOXWBCMAVHKTRFVYIUNMNKIIENEPPKGZCRWAUMPREMIMUVUBVIYBWJBGHMKTVGVOYRQNFADJQMSHBQOJQRDEUHQCGCDYJUZJVIRLWOLFYHDALQEYOALMHRMJGTSWWQZRNDNFJKAHKCAPYFWXN");

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
    msg.setTimeStamp(0.7784874825412478);
    msg.setSource(49304U);
    msg.setSourceEntity(233U);
    msg.setDestination(49955U);
    msg.setDestinationEntity(193U);
    msg.timeout = 22849U;
    msg.lat = 0.9558634717226305;
    msg.lon = 0.07399462431745174;
    msg.z = 0.7674183625116121;
    msg.z_units = 152U;
    msg.speed = 0.4283998418995689;
    msg.speed_units = 147U;
    msg.custom.assign("BFTIFMDVSXBMMGWFEPITBBZFSQBUVJDLUNXPCZONAAJZEGSPNIXUWRTRLGZZGRQRNO");

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
    msg.setTimeStamp(0.1801450430528374);
    msg.setSource(39019U);
    msg.setSourceEntity(96U);
    msg.setDestination(55934U);
    msg.setDestinationEntity(231U);
    msg.timeout = 57311U;
    msg.lat = 0.38293578925023775;
    msg.lon = 0.38638925029915905;
    msg.z = 0.41402978612280517;
    msg.z_units = 148U;
    msg.speed = 0.5837023552313977;
    msg.speed_units = 197U;
    msg.custom.assign("CKEIYBWABMRVBVFUPVSMJRXMWGYACYZKVRYXAZITIDFQLSWREZSDYLUOJXQSOOSIBXSCFTQMVYYKKBPVHRIHBGTVLAWEYWXJNZJGUDMXOOTIPCWLZBRIGXITKMOHOEITKSQZUDBETTMFJJGPGNVDZFFBFUFLNNIMPCCNYAPUKEFHCQAOZUXKQM");

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
    msg.setTimeStamp(0.6351875282189805);
    msg.setSource(29786U);
    msg.setSourceEntity(185U);
    msg.setDestination(58502U);
    msg.setDestinationEntity(122U);
    msg.timeout = 4168U;
    msg.lat = 0.8460157259452684;
    msg.lon = 0.9622056675968811;
    msg.z = 0.6076240862033437;
    msg.z_units = 223U;
    msg.speed = 0.2559597328938773;
    msg.speed_units = 74U;
    msg.custom.assign("TSAASWGPRNLGOOFSBDPJWUKTJVCYJCJXKYDQYKZPIQWXOPFXVMBLUPDMJTNDXICMBEEFZVYMGACYKDJRJOVAWRZAWLLAQHMYPUMTZLGBPGGZITUKDAFKJVBLRSWPTKHBXFQBDGYGQROUEHTQNGNAVIUMYAXNDXROFHBFCCXGEZPUKQISCTXNVVNBKOZSRSWDQVUTEENZRL");

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
    msg.setTimeStamp(0.9537114945882852);
    msg.setSource(41092U);
    msg.setSourceEntity(213U);
    msg.setDestination(21913U);
    msg.setDestinationEntity(221U);
    msg.timeout = 51083U;
    msg.lat = 0.5620147362859801;
    msg.lon = 0.23676445049163586;
    msg.z = 0.8852633381661533;
    msg.z_units = 109U;
    msg.speed = 0.4007084210387363;
    msg.speed_units = 54U;
    msg.custom.assign("MOIDUVOYRSYAYUFHFVXNNGUCNGBYTQDHTNWAPGWQONLOHYUJADCGDWHIAXOMZTWBYPLAXQGQGZHELKSIXUOIKVCPRKVAUFQRLRTDFBCQZWMULWQLSNETCVMXIAVFGBKBHAZRBVUHWIQKENXMKRRKPZNPOXIYQPMSJLDNWHFUMEZEMCSPCFE");

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
    msg.setTimeStamp(0.48650579835762986);
    msg.setSource(57330U);
    msg.setSourceEntity(53U);
    msg.setDestination(17607U);
    msg.setDestinationEntity(216U);
    msg.timeout = 36495U;
    msg.lat = 0.7515316357526264;
    msg.lon = 0.6000655499661587;
    msg.z = 0.14304179095594938;
    msg.z_units = 60U;
    msg.speed = 0.650079672631386;
    msg.speed_units = 58U;
    msg.custom.assign("YNSNULKLPVXWBAYQFYYJHJNSWDFJBKSX");

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
    msg.setTimeStamp(0.6474708020526565);
    msg.setSource(53557U);
    msg.setSourceEntity(46U);
    msg.setDestination(6048U);
    msg.setDestinationEntity(125U);
    msg.arrival_time = 0.9103649782406639;
    msg.lat = 0.15564351152900158;
    msg.lon = 0.7983772618160343;
    msg.z = 0.11493033060768809;
    msg.z_units = 102U;
    msg.travel_z = 0.8213234029936961;
    msg.travel_z_units = 98U;
    msg.delayed = 67U;

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
    msg.setTimeStamp(0.4786449120794445);
    msg.setSource(3222U);
    msg.setSourceEntity(60U);
    msg.setDestination(11048U);
    msg.setDestinationEntity(215U);
    msg.arrival_time = 0.7053682562085547;
    msg.lat = 0.9772450431416795;
    msg.lon = 0.9206607484863016;
    msg.z = 0.8973369235734471;
    msg.z_units = 116U;
    msg.travel_z = 0.261725452044151;
    msg.travel_z_units = 201U;
    msg.delayed = 171U;

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
    msg.setTimeStamp(0.2843573531234761);
    msg.setSource(29919U);
    msg.setSourceEntity(30U);
    msg.setDestination(47186U);
    msg.setDestinationEntity(70U);
    msg.arrival_time = 0.7431091170642707;
    msg.lat = 0.010788348878171261;
    msg.lon = 0.5981420421877541;
    msg.z = 0.39574852306842434;
    msg.z_units = 58U;
    msg.travel_z = 0.357219872237045;
    msg.travel_z_units = 86U;
    msg.delayed = 97U;

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
    msg.setTimeStamp(0.3138231343286597);
    msg.setSource(56386U);
    msg.setSourceEntity(48U);
    msg.setDestination(11235U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.10732562116546518;
    msg.lon = 0.9765138628294223;
    msg.z = 0.6647902983867019;
    msg.z_units = 190U;
    msg.speed = 0.24469722177523667;
    msg.speed_units = 153U;
    msg.bearing = 0.9099702876529424;
    msg.cross_angle = 0.2202200050587152;
    msg.width = 0.7230062006833036;
    msg.length = 0.015485605425325066;
    msg.coff = 230U;
    msg.angaperture = 0.45039157996130663;
    msg.range = 27250U;
    msg.overlap = 215U;
    msg.flags = 61U;
    msg.custom.assign("AJJRWZQWAQCEILGCOINKONMJSXBHHCGHBHUNDDVGPPNVUXRQVQWLMZYENPNRHVXTOGTZJCILFYSLTFYAXIQRDYBD");

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
    msg.setTimeStamp(0.7817124201211436);
    msg.setSource(3145U);
    msg.setSourceEntity(158U);
    msg.setDestination(17453U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.5897179584721872;
    msg.lon = 0.9550852051155486;
    msg.z = 0.7500549300788656;
    msg.z_units = 120U;
    msg.speed = 0.23105657511772526;
    msg.speed_units = 55U;
    msg.bearing = 0.19183676884670386;
    msg.cross_angle = 0.7064990254997519;
    msg.width = 0.9409029153472012;
    msg.length = 0.5413258039952173;
    msg.coff = 16U;
    msg.angaperture = 0.27806424982779243;
    msg.range = 60293U;
    msg.overlap = 89U;
    msg.flags = 111U;
    msg.custom.assign("OWUXXJGVRPCOUJVIGUTEZHIIJSBUCYDIXQVGDTLRQPYXZFQTZJLAPGTMXOBBGHMFVSCDEMYDOYHRMWOAFPUKNGSMJEYRPXBHBKHUKNH");

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
    msg.setTimeStamp(0.4309692690820286);
    msg.setSource(2328U);
    msg.setSourceEntity(82U);
    msg.setDestination(7032U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.743730387418772;
    msg.lon = 0.9387330447248634;
    msg.z = 0.5475045064356325;
    msg.z_units = 198U;
    msg.speed = 0.7379060453380796;
    msg.speed_units = 175U;
    msg.bearing = 0.7099981314421869;
    msg.cross_angle = 0.8154905887700491;
    msg.width = 0.9627215193006933;
    msg.length = 0.15606101775526848;
    msg.coff = 23U;
    msg.angaperture = 0.9691825703906431;
    msg.range = 17385U;
    msg.overlap = 209U;
    msg.flags = 66U;
    msg.custom.assign("TPGCJVIKZORNJITKHJCEGVQKQFZGUJEMWLSVQZAOSVOYQTFVQTBJLCZDNGQCPKPHDRVSTEAZIQDPMNRUHXYFGBLPCEZWAIKNLUFDBXUFWRNZZCTNARXDGRVAMOTBMBXWKXPSGOTFRIUEVOMABUOLMOWNHYIUXLBZRAVBGPKAHDSLVYYYWSJFDCZIUJEHYTLFCNQWMJRBTLKDQUYSKNPWFLRPIGBAJYHPOHXDM");

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
    msg.setTimeStamp(0.10925307433376963);
    msg.setSource(5154U);
    msg.setSourceEntity(218U);
    msg.setDestination(61903U);
    msg.setDestinationEntity(55U);
    msg.timeout = 51562U;
    msg.lat = 0.9363408984840643;
    msg.lon = 0.5605396936176162;
    msg.z = 0.7446416601021703;
    msg.z_units = 252U;
    msg.speed = 0.33604741029265395;
    msg.speed_units = 225U;
    msg.syringe0 = 235U;
    msg.syringe1 = 150U;
    msg.syringe2 = 106U;
    msg.custom.assign("ROGFALERPFMAQJVUYUDQAJ");

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
    msg.setTimeStamp(0.29285309698780937);
    msg.setSource(42860U);
    msg.setSourceEntity(230U);
    msg.setDestination(28958U);
    msg.setDestinationEntity(226U);
    msg.timeout = 12991U;
    msg.lat = 0.77903253567588;
    msg.lon = 0.33741594021622967;
    msg.z = 0.21939356584443037;
    msg.z_units = 160U;
    msg.speed = 0.7650897911113805;
    msg.speed_units = 198U;
    msg.syringe0 = 132U;
    msg.syringe1 = 192U;
    msg.syringe2 = 43U;
    msg.custom.assign("PHSXSWIKGUYN");

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
    msg.setTimeStamp(0.7033450665527075);
    msg.setSource(50856U);
    msg.setSourceEntity(156U);
    msg.setDestination(14239U);
    msg.setDestinationEntity(232U);
    msg.timeout = 55813U;
    msg.lat = 0.5651903854766018;
    msg.lon = 0.36636949188711654;
    msg.z = 0.2771784018377522;
    msg.z_units = 185U;
    msg.speed = 0.7252461203552234;
    msg.speed_units = 49U;
    msg.syringe0 = 107U;
    msg.syringe1 = 0U;
    msg.syringe2 = 129U;
    msg.custom.assign("MCPWDJCTCRZZWJPTPQQVEUURIQEVXEQXDYOPGUKYKLITCTHQPRSSMXWMHFIINGJDSAIAOIEQGCZEMOBKASASDAURWTRIYNRKZUJTCEBNPVJSJYROFLHOMFFGEODGLLWODKHYWHBDOKHQAXIWQ");

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
    msg.setTimeStamp(0.6020862766363754);
    msg.setSource(13086U);
    msg.setSourceEntity(202U);
    msg.setDestination(47107U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.032961914386092084);
    msg.setSource(27326U);
    msg.setSourceEntity(126U);
    msg.setDestination(50752U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.18209093436738855);
    msg.setSource(25765U);
    msg.setSourceEntity(182U);
    msg.setDestination(29709U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.6269793014694106);
    msg.setSource(52525U);
    msg.setSourceEntity(254U);
    msg.setDestination(51613U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.9912264192356485;
    msg.lon = 0.6724019029792982;
    msg.z = 0.5545874489283094;
    msg.z_units = 27U;
    msg.speed = 0.1198904554229806;
    msg.speed_units = 228U;
    msg.takeoff_pitch = 0.08514627193196567;
    msg.custom.assign("ZZFOITJGEDQZWWPHDBMFNSQHDFAQWGAHMTKRHKXZPRTDAVRSZVVJGSJCUXPIFFFQPBSMIGNIZPEPWJPTRWFXJWWMKVXK");

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
    msg.setTimeStamp(0.1492283598128481);
    msg.setSource(19864U);
    msg.setSourceEntity(177U);
    msg.setDestination(8343U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.6000645851303906;
    msg.lon = 0.23940796047789836;
    msg.z = 0.7926114682504785;
    msg.z_units = 65U;
    msg.speed = 0.17852979292665683;
    msg.speed_units = 248U;
    msg.takeoff_pitch = 0.4319294700214624;
    msg.custom.assign("KDVUTAOPQDIGMCRBBUEXWSVNUWZBZKCFZHOGCPRTVHFLHMQKCCMNDXESSLDWYIVSSXPWRODTUQIRECWOAJXWUYMPMHMLMXIZEVLKWXRMRSHHFNBAULOQTTNLAGGOPIMUTAHROBPKBDAQULICGV");

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
    msg.setTimeStamp(0.1944123344261649);
    msg.setSource(44692U);
    msg.setSourceEntity(168U);
    msg.setDestination(61998U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.6686244266372243;
    msg.lon = 0.8265707691490747;
    msg.z = 0.08281924004762076;
    msg.z_units = 126U;
    msg.speed = 0.800136117322702;
    msg.speed_units = 84U;
    msg.takeoff_pitch = 0.7528124539922297;
    msg.custom.assign("WKTFTNQKGSKPSRBELBIWDULARHSHBHRHDMXRPFFMNBDTWQJNIXVGZZURZJISIBNIJURWJCAOFUQEZMPXURNAQCLGKJMWAMXDONQZVZOJLLYBEWWFCUKTTRDPKBKZYCUYICQVKPDSFANODGJHMOXJYIAYEFLXBGGETGM");

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
    msg.setTimeStamp(0.11960903585015392);
    msg.setSource(51076U);
    msg.setSourceEntity(254U);
    msg.setDestination(35573U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.4184092069042308;
    msg.lon = 0.3604183934122156;
    msg.z = 0.033677743920511705;
    msg.z_units = 112U;
    msg.speed = 0.11546338594559125;
    msg.speed_units = 191U;
    msg.abort_z = 0.08373572594155865;
    msg.bearing = 0.7562017933814033;
    msg.glide_slope = 103U;
    msg.glide_slope_alt = 0.6606875235345511;
    msg.custom.assign("ANXQENSTWEGKWKQNOHIQDCGVSIPECHFTBKIAWVNYXPSVWQSMYULNLOYBGJLFCIDXPXOMWLRPATJZMZEOBUERFTYGSHQ");

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
    msg.setTimeStamp(0.24126606287956864);
    msg.setSource(10986U);
    msg.setSourceEntity(94U);
    msg.setDestination(9676U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.4237609303564589;
    msg.lon = 0.4875477790478293;
    msg.z = 0.8589387760894617;
    msg.z_units = 52U;
    msg.speed = 0.2007331787569968;
    msg.speed_units = 40U;
    msg.abort_z = 0.24871407623899688;
    msg.bearing = 0.3801816877037262;
    msg.glide_slope = 241U;
    msg.glide_slope_alt = 0.8935234899194037;
    msg.custom.assign("JPFOUUYIWPKQQVRVGYGSZEDZSIGOPTNVNJVZCFAYATCCPZKGSCMXEDTZHYIOEAYZXYWVVWLFFSGRXRSIGSUXDWNFMIULKOVWXMVGBJKTEKEFDAMMCRBYDTPGAJJMRBIPBUHHGKQKJTVPDCLWLDUNAC");

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
    msg.setTimeStamp(0.5059025603199936);
    msg.setSource(31557U);
    msg.setSourceEntity(54U);
    msg.setDestination(62805U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.5283148056990239;
    msg.lon = 0.06904954608232117;
    msg.z = 0.4242625934331229;
    msg.z_units = 67U;
    msg.speed = 0.10322679581667094;
    msg.speed_units = 182U;
    msg.abort_z = 0.6695078672301712;
    msg.bearing = 0.9589074685822918;
    msg.glide_slope = 189U;
    msg.glide_slope_alt = 0.6068288889154897;
    msg.custom.assign("HDNCOMQGZWOZGQDVOMNRHRCOEWZKMFVHZXYXZAJNFSNLYNPBVDLIBMYGKOPFYFLTTJIEUTRWLEDGZNVKCOMPQAVEHTIKIYCVWRITWGJGJJUHQSXDTEDFKMAHCPXAEKXMCORZKCOMMSPWEFIKULEXUSQNVLQSIGDXSQBNUCABCLZAFARALLDRUXCGOW");

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
    msg.setTimeStamp(0.9610263678167851);
    msg.setSource(16542U);
    msg.setSourceEntity(234U);
    msg.setDestination(63135U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.8000362597585295;
    msg.lon = 0.5229909269761583;
    msg.speed = 0.46689750240227346;
    msg.speed_units = 207U;
    msg.limits = 56U;
    msg.max_depth = 0.07501110500504349;
    msg.min_alt = 0.29362849202538377;
    msg.time_limit = 0.5817024155301374;
    msg.controller.assign("HBQQNXINOGKFULFIMYFZKZXP");
    msg.custom.assign("ASCNOWTYMCJHILKHORBLOUZZGFLFWBEIFOACGQPUSDLBJCWSKDLKCNNWJTCPKVNQVYRFAFTZEDAHQR");

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
    msg.setTimeStamp(0.486415839158191);
    msg.setSource(53026U);
    msg.setSourceEntity(217U);
    msg.setDestination(62618U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.678837471996957;
    msg.lon = 0.10351313359402747;
    msg.speed = 0.786938106143386;
    msg.speed_units = 125U;
    msg.limits = 176U;
    msg.max_depth = 0.4993445011004237;
    msg.min_alt = 0.4868385721579709;
    msg.time_limit = 0.6042001244892087;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.02653865859798632;
    tmp_msg_0.lon = 0.20291261432908747;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YIQXSQFKDSHCGLUEJEYUJJOEZIXKAXJTF");
    msg.custom.assign("NKQMGUMSXTMRTSAABYOJBECHGHNFPZWTTCVPHDZWMCXMOJHIFIFTUNPXYFRZZYBSWGGJAXHGJOKPFARCCURQULVIPEDSECPQUHGLLZZHFJRJAHSEGFBVJFLMWNDIEDDGKBRQIDFUEYTUHYVZE");

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
    msg.setTimeStamp(0.9183623805377081);
    msg.setSource(21230U);
    msg.setSourceEntity(221U);
    msg.setDestination(58153U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.8307633080838958;
    msg.lon = 0.2382814956990893;
    msg.speed = 0.2338462272998857;
    msg.speed_units = 85U;
    msg.limits = 61U;
    msg.max_depth = 0.7567692152522567;
    msg.min_alt = 0.17384095114238418;
    msg.time_limit = 0.8268325641657349;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.08939699563146297;
    tmp_msg_0.lon = 0.02500503860496217;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MSCGJJJOCQBPRQEZIFNGCYXYMMPLVDCWJBTUXLAITZYEVMHMGHLGZZGASLD");
    msg.custom.assign("MPHUFJDDNNHAKESXSRYYGJOBDOBCRMIEOIANBYCWEJEHCZVOZTEEXQLYDXRWBLOTSFJLVHXSXOPVMVSJTCILXCMQRGNZJPIVHPAFJUJZIMDGGPVDEUGIWSZAPPCTAQLHONLSWWE");

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
    msg.setTimeStamp(0.6338205272928406);
    msg.setSource(13399U);
    msg.setSourceEntity(202U);
    msg.setDestination(62774U);
    msg.setDestinationEntity(81U);
    msg.target.assign("OTJQTNWAJFKGKRBRWFIXGVFUCOCYIOBYNWGRTEKDOGPWXIRBYYAJATFLPYYLJCXJRCWGZDADOZBXPVJBRUXIUUPRT");
    msg.max_speed = 0.9607506474748896;
    msg.speed_units = 177U;
    msg.lat = 0.8149846280515859;
    msg.lon = 0.6931398177307222;
    msg.z = 0.3763687246818014;
    msg.z_units = 251U;
    msg.custom.assign("BIVSSJZHEZBLDWCBSKFDHVIJPRQOHCTVGKCCGQIDRPONTOAVTEDFPQNTSHJCAYGNMUAVRVIZTCWLCWZWHSQRGJBRYBTKHXMXLYRRKSUWXQTZYFCGFYZSBPUZYLMGKMAVQIJQNABVEEBXM");

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
    msg.setTimeStamp(0.033317645581830924);
    msg.setSource(43061U);
    msg.setSourceEntity(180U);
    msg.setDestination(36196U);
    msg.setDestinationEntity(106U);
    msg.target.assign("HWCXMVBOCVJTPYRJLDOKJIJRGBPTPFPGVUHCISVZGWVCQSNOZWQOTEWQPODNRDAKUFFSNMYLVXNJHIUWQWYDNBPAFPRUUSDCPAXHWKNLFQVNZLKPEQYTMAXGKGLHBFLAYZIORTVTWCDGSIDVQKCNNSYBAROHNLBXCDAERKGIUZDXQHHGSMJFGERXDKPZJEAMXHOOSIEWRJSMJMVL");
    msg.max_speed = 0.2665270225993719;
    msg.speed_units = 145U;
    msg.lat = 0.34581477576266784;
    msg.lon = 0.18473160956019208;
    msg.z = 0.20170943061198998;
    msg.z_units = 44U;
    msg.custom.assign("RCZYTNPVGUFKXZKKYRJZXTZJRLBHHMXPWAHRTNKWCBGYIMPDIHTRXLNWIFATELJUGAAMSNOCHDWEHBDOCJITAFVDXWPYIDFJQJYLRMAGLESFJXQSYBSQNSUNEFFOYZAQIM");

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
    msg.setTimeStamp(0.427820466441554);
    msg.setSource(24474U);
    msg.setSourceEntity(178U);
    msg.setDestination(9753U);
    msg.setDestinationEntity(4U);
    msg.target.assign("JMXTRYMWIMZRBTCGAEPAIXLDMTSRSFAKPAKPMHZQPQDXAONAVYGCIFUGOZU");
    msg.max_speed = 0.8920794091600159;
    msg.speed_units = 65U;
    msg.lat = 0.7433583364840328;
    msg.lon = 0.6405118788421853;
    msg.z = 0.8159104024721066;
    msg.z_units = 106U;
    msg.custom.assign("BPLIBWMOZGOEDOKVUXSOLCXCTFMUJRBBMHUKTGFBFWCNJRKSKHEORAHUSFRWWYQIJCIEEFNJIJQCSCFVZAKYCYR");

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
    msg.setTimeStamp(0.6473142366816028);
    msg.setSource(55455U);
    msg.setSourceEntity(103U);
    msg.setDestination(14061U);
    msg.setDestinationEntity(51U);
    msg.timeout = 45697U;
    msg.lat = 0.37064796789039045;
    msg.lon = 0.8729280047775849;
    msg.speed = 0.11073318689967249;
    msg.speed_units = 140U;
    msg.custom.assign("NLVEYWYKVDOUBZNZRSIDGQRXJJJIARUGXAFMYZWYSUGKLFROQWZTDPKRDDJZEXTSTSMUOYAIDTTRUFCGBIKLZXOCXSGEQSYEULTVDHAXWDKAWOUGPJMSQPKICQYASROVHMFRCBCAM");

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
    msg.setTimeStamp(0.5090191995241972);
    msg.setSource(44827U);
    msg.setSourceEntity(141U);
    msg.setDestination(63580U);
    msg.setDestinationEntity(1U);
    msg.timeout = 3290U;
    msg.lat = 0.16764751638714182;
    msg.lon = 0.8513001607710079;
    msg.speed = 0.8984057012123315;
    msg.speed_units = 22U;
    msg.custom.assign("SKDMHOZJGHQZNTUDCQFPMRWKYQJNYRWQUYWVJZSBGYXRSQPTFTDCJMRKVAVMLUYGHANAIUTFWODTGNEWCEPKXZLOSHOELFAXLXDUNBYOMMYJEAADQVUWLMCCKTIXULJGIDZHF");

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
    msg.setTimeStamp(0.8860374754144428);
    msg.setSource(29222U);
    msg.setSourceEntity(151U);
    msg.setDestination(31342U);
    msg.setDestinationEntity(38U);
    msg.timeout = 16415U;
    msg.lat = 0.5143036991570012;
    msg.lon = 0.7451078104017385;
    msg.speed = 0.9986035662968316;
    msg.speed_units = 142U;
    msg.custom.assign("ONGAFFGYNRHLMKPDTITDJUVRFMONDYEOGXMXFQTKAKTASPILNIMRMNIFJQFYCPTKXBUSNJNRVCHMNIVSTDJOPIVZXXLEFBSQJMIBHWEEBWYAKFBKKDSUEDUBZHCBAAARRYIXPLGCZTXUTVYVTXDWWLFDLDBZXGCNSWUBHQHRQZYYHVOPULRSEZTJMJPSGLOZGQROZLPANVWHJSEJGUKOCGKWCSZCYEBIUHHAXOOVQWLYW");

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
    msg.setTimeStamp(0.07136491712295023);
    msg.setSource(41307U);
    msg.setSourceEntity(215U);
    msg.setDestination(12159U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.3882382885683331;
    msg.lon = 0.8566491878939966;
    msg.z = 0.2738368770375019;
    msg.z_units = 93U;
    msg.radius = 0.5287586094741467;
    msg.duration = 41959U;
    msg.speed = 0.36018536394945433;
    msg.speed_units = 193U;
    msg.popup_period = 62532U;
    msg.popup_duration = 42365U;
    msg.flags = 73U;
    msg.custom.assign("FHIZRTLLVCOHEOEDZYQVHIXJDBN");

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
    msg.setTimeStamp(0.382614453549899);
    msg.setSource(62325U);
    msg.setSourceEntity(137U);
    msg.setDestination(54290U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.5186157227243935;
    msg.lon = 0.275322168099684;
    msg.z = 0.9823545028291361;
    msg.z_units = 57U;
    msg.radius = 0.34652945128670576;
    msg.duration = 18259U;
    msg.speed = 0.2695197259863942;
    msg.speed_units = 216U;
    msg.popup_period = 38208U;
    msg.popup_duration = 22412U;
    msg.flags = 158U;
    msg.custom.assign("JRNALCZXQTFNLVREPHHCPROQSOUEJIETPGFQZPLBQPUFLMDJSEWLSBHROICWSBUCDZSYDYTULV");

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
    msg.setTimeStamp(0.8761947975369794);
    msg.setSource(7758U);
    msg.setSourceEntity(174U);
    msg.setDestination(12830U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.5668421995397928;
    msg.lon = 0.8763087813052856;
    msg.z = 0.5117148967014055;
    msg.z_units = 243U;
    msg.radius = 0.37437371606820946;
    msg.duration = 56974U;
    msg.speed = 0.1840163534826379;
    msg.speed_units = 3U;
    msg.popup_period = 27401U;
    msg.popup_duration = 9249U;
    msg.flags = 246U;
    msg.custom.assign("XIZDLCHDPQZBJCJIISXRNWOXUPOEEDRZEPTSGYOBYLALLHVFHKKAZTWBBSNFTSEKQWZMTPWTPXCVRDNXCWJBZM");

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
    msg.setTimeStamp(0.8937169540744829);
    msg.setSource(26211U);
    msg.setSourceEntity(245U);
    msg.setDestination(10394U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.23631963845212245);
    msg.setSource(1400U);
    msg.setSourceEntity(40U);
    msg.setDestination(23105U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.0535948230084452);
    msg.setSource(31468U);
    msg.setSourceEntity(231U);
    msg.setDestination(45576U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.13099991554934431);
    msg.setSource(41391U);
    msg.setSourceEntity(124U);
    msg.setDestination(57490U);
    msg.setDestinationEntity(242U);
    msg.timeout = 64063U;
    msg.lat = 0.33153618331643087;
    msg.lon = 0.7485515433638578;
    msg.z = 0.25206429261660046;
    msg.z_units = 240U;
    msg.speed = 0.2221419668655369;
    msg.speed_units = 40U;
    msg.bearing = 0.592511602810807;
    msg.width = 0.049802000962978155;
    msg.direction = 131U;
    msg.custom.assign("FJSCYNKHLUVJUPBUZAOQEBFYZLRVTDKVXMRTUFJDRWESKIGFCTCNQNSEDNKRTPSBSUGSQMOPMJLIUFGPETATXXFREYRNVHNILOWWMBHIJJDRMRWIJAXVHCM");

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
    msg.setTimeStamp(0.9096646853984041);
    msg.setSource(34940U);
    msg.setSourceEntity(213U);
    msg.setDestination(31141U);
    msg.setDestinationEntity(203U);
    msg.timeout = 37605U;
    msg.lat = 0.7249600303752481;
    msg.lon = 0.021280489778623624;
    msg.z = 0.45309220308958564;
    msg.z_units = 123U;
    msg.speed = 0.6486949104535036;
    msg.speed_units = 83U;
    msg.bearing = 0.5571436135504959;
    msg.width = 0.2208791429940692;
    msg.direction = 94U;
    msg.custom.assign("DUGOFRTVGYKJKGFNCNQQKWUSRIJKXGDRRKWNGIRXQPOXWCFRCULVIBPSFEWABWFPOUNTBJSJQDAYIQOYPMSYCWGIBTPSMGMVVRPHRYQDLEBZZIIBULAXLSMYOYNNNBUJP");

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
    msg.setTimeStamp(0.3351718239797412);
    msg.setSource(9073U);
    msg.setSourceEntity(87U);
    msg.setDestination(29651U);
    msg.setDestinationEntity(143U);
    msg.timeout = 40217U;
    msg.lat = 0.6626604252663773;
    msg.lon = 0.5133496581202757;
    msg.z = 0.2858515627896484;
    msg.z_units = 175U;
    msg.speed = 0.796101726263424;
    msg.speed_units = 113U;
    msg.bearing = 0.9025921271024485;
    msg.width = 0.043537095790848745;
    msg.direction = 152U;
    msg.custom.assign("FRXNVYSTKUNMPERKQTRDVNWOBDBSQCLCIFIRZSEFBRTMCCMWHKSJJLOWAVVLMJIFXFPXPQHTSNYIBUBGWIFUZFUBAAJKUYLHVKNMFILTQBOZHKCYQXHLSRBZJPQAXYOXVRAZMXTVLEIDVYZAAZMDELOSDJPGVLNAKXBTURJZJQTICPDSAFPOMHIIYUKACUNTJETLWERGMGQEDWXYDZW");

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
    msg.setTimeStamp(0.21774811662214544);
    msg.setSource(56794U);
    msg.setSourceEntity(129U);
    msg.setDestination(2678U);
    msg.setDestinationEntity(204U);
    msg.op_mode = 184U;
    msg.error_count = 12U;
    msg.error_ents.assign("GQXVHLFLZCTUKFHCZALNGVOQEHHHRIROLFNOJNYNDLCBWUYHSFTUFKUFJVWDKB");
    msg.maneuver_type = 42713U;
    msg.maneuver_stime = 0.0444465088379743;
    msg.maneuver_eta = 30171U;
    msg.control_loops = 1230946463U;
    msg.flags = 194U;
    msg.last_error.assign("OKJXMEDKBDJPHKLFYCKHNTRHOFIWTYRJYQGGWTWPDFNSLZFUYJPAKHWZEVYXLQZDOEGLMAWJWATDBBWQBECASMLFPTYIJBWYNMNGPOGGQIYKPOCAJHVRSVPSTIIBQMHPGMIVAKOCZFLCWORYVCXULVKGNWQVICXHQXUBURPHORNLXXKUHBZFEOBAEAEEJNRHVRDSUFSTJKGZUUTNPTQNI");
    msg.last_error_time = 0.40407713685929336;

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
    msg.setTimeStamp(0.6078975580117736);
    msg.setSource(24995U);
    msg.setSourceEntity(234U);
    msg.setDestination(26207U);
    msg.setDestinationEntity(67U);
    msg.op_mode = 85U;
    msg.error_count = 207U;
    msg.error_ents.assign("LISYZBAGDFJUZQOHNCONJLHMWKLETUOVTXQUHAHCVRVDQGIGLNPYKGHHIKYDJMFFDTQAIBKZAWPRGYHWIYSNLWNPYSEZRJMPNTNGPYHCQSNSCIMZFBCUOKAZRRJOUXOK");
    msg.maneuver_type = 54991U;
    msg.maneuver_stime = 0.23528474661807686;
    msg.maneuver_eta = 53721U;
    msg.control_loops = 2608069494U;
    msg.flags = 54U;
    msg.last_error.assign("JMGUKBBUHYIKMQEBFUY");
    msg.last_error_time = 0.25764371992804236;

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
    msg.setTimeStamp(0.3896693431487478);
    msg.setSource(22236U);
    msg.setSourceEntity(250U);
    msg.setDestination(34474U);
    msg.setDestinationEntity(59U);
    msg.op_mode = 218U;
    msg.error_count = 1U;
    msg.error_ents.assign("KOLNFZEFKRCWHEWIFXLBQGJBPUNOYVRMSSGQZARWCCVORZBBDQVAXYLHHWKPOLINYQSAGJKINMLUTMADWPWTXYBTJPXMTBEGLZDOIJHRVZKIUVSDVMWOCJAVSETNUEBPYIXPKOWHBHDLSCNGPHRXAJYJPCZRRKDKAQMTTHHQVXFBZCXXGIEPEAOVODIKSCYQWIHECUJSGFYUWQFINYMTQVTKNGPTNLRABMSJZDLYNLUUUACQZJMSMGF");
    msg.maneuver_type = 15692U;
    msg.maneuver_stime = 0.6863349057608651;
    msg.maneuver_eta = 45684U;
    msg.control_loops = 4290432000U;
    msg.flags = 113U;
    msg.last_error.assign("GULMMRXFHKQAOJZCEZVLQATINDJJEXHAPJXMUNTIYYFRXDDGVFHXLYXSTYXHGKCLGMEKAMBQQIGDBTSCDYVAPETDBZOVWQOLAUMJGIWLDLYNORWBIXHFQYIRDCJCKTOHEHURPLFCJENKWZNJWVFBTSLSUCFBGKKXFFWRUOSUKEESUVSZGZNJIPMSMPZNDKVYCRPPBGYZQPRHQINBVAYWTXCETWUIMRNWBQSH");
    msg.last_error_time = 0.5586523162300026;

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
    msg.setTimeStamp(0.5277614278282802);
    msg.setSource(52036U);
    msg.setSourceEntity(16U);
    msg.setDestination(12573U);
    msg.setDestinationEntity(213U);
    msg.type = 170U;
    msg.request_id = 34651U;
    msg.command = 79U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 16751U;
    tmp_msg_0.lat = 0.7104341632241361;
    tmp_msg_0.lon = 0.3282957157320917;
    tmp_msg_0.z = 0.8931418054278208;
    tmp_msg_0.z_units = 200U;
    tmp_msg_0.speed = 0.7077854324251469;
    tmp_msg_0.speed_units = 200U;
    tmp_msg_0.custom.assign("POJPBLJIBBSNQLWRXBRZEKDGUWHYHQASEUTAVNLDUJXUNGEAQONATFGVQVMZRHJXVWRSSRVSRWSXTNVLHMTAOBDNRIZBVMCJOUMEKYGJOMSIFWZZACCXITZL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15470U;
    msg.info.assign("ZCZGUDKDGOKFUMAFGSBCOBHWWZQQFFTEQOPMAISBBHYOUBZDQLDBNRYFXMEIUYGCJYFSWHPEWEGWQUJRRYPUTKTYRVXCVHMW");

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
    msg.setTimeStamp(0.08075248431631621);
    msg.setSource(60100U);
    msg.setSourceEntity(192U);
    msg.setDestination(39782U);
    msg.setDestinationEntity(132U);
    msg.type = 37U;
    msg.request_id = 51569U;
    msg.command = 61U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 52026U;
    tmp_msg_0.lat = 0.5952379429000982;
    tmp_msg_0.lon = 0.7997008786544303;
    tmp_msg_0.z = 0.6123631974514325;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.speed = 0.13710228049504736;
    tmp_msg_0.speed_units = 25U;
    tmp_msg_0.bearing = 0.770713903288895;
    tmp_msg_0.cross_angle = 0.7375241513929681;
    tmp_msg_0.width = 0.11367130295836114;
    tmp_msg_0.length = 0.023531220411798226;
    tmp_msg_0.hstep = 0.1581717493688405;
    tmp_msg_0.coff = 247U;
    tmp_msg_0.alternation = 182U;
    tmp_msg_0.flags = 243U;
    tmp_msg_0.custom.assign("RYOUIBNBLGIWCHWPGFGUIDHGPTCHMNXDAZKPIRUYQVJZJACVAAVCYCHKKBLZJOXBVHRCTYLIUPCSDDQFJGMAXRFQYTTUTQKFYHDKVOAXBOQOIOPHIZRGYPXLFNUWMWKTQYOQSYGHRXLVMNIRZDBARNJKWIJWVSKUUXRJEFOPKZVTBUBZJBLCMEWGPZVXTYFDSNZQOEMLNCEPLEXFNEXCPMVMLGJDQTEWSQAJTLNR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20955U;
    msg.info.assign("CQYDHXZCWMTOAUORZMWRYEUEHGRDXDAQFKNJAINMFHCDVXCGSBQMYHWA");

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
    msg.setTimeStamp(0.5653159215804862);
    msg.setSource(43837U);
    msg.setSourceEntity(187U);
    msg.setDestination(57414U);
    msg.setDestinationEntity(229U);
    msg.type = 65U;
    msg.request_id = 56619U;
    msg.command = 56U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 24634U;
    tmp_msg_0.rpm = 0.2708338408279529;
    tmp_msg_0.direction = 224U;
    tmp_msg_0.custom.assign("FOXQNZVOTFDSBLJCBNLUEYCIFWFBBHGPNSJIBEKPZUDVMDNNOJLJGAQQOCUPAKA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26020U;
    msg.info.assign("WEFSPIUUVAAMSWBKESLRDBRDRAVFONUZDAEJOLXKGPKEHNKTJHUKXBGZMBPQEPKYAAPXFWNVGMBTHVRDMNKSLBCVFBWLEYYFPWUMJEXGHKMV");

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
    msg.setTimeStamp(0.393162209986745);
    msg.setSource(14000U);
    msg.setSourceEntity(153U);
    msg.setDestination(26172U);
    msg.setDestinationEntity(202U);
    msg.command = 34U;
    msg.entities.assign("ELWYVERCFIKNJERSXORLXSYBSWURDZJQGCSEDKLUKFEPCOOSTRAXRIZGBTVIAPWLXBCPFXNPDDNIJEYDZFACHOWBPNVOPROZQTDYNBILJAEVOHBK");

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
    msg.setTimeStamp(0.9467185558306198);
    msg.setSource(13848U);
    msg.setSourceEntity(188U);
    msg.setDestination(26527U);
    msg.setDestinationEntity(27U);
    msg.command = 115U;
    msg.entities.assign("VWPUFZELFBKYWNUXVZWKYJZQIRNSTDKFBQLMNGGLGHXIMYIRTOSHOLEBYXNWCBKZTIPPABYRSTRJBMFBPTLJEMJPADJVZFKQKDSALVKLQRJRSQOAEPWACCTXXEHVYKZLMEHZDQZOHDTXXCIVXWIHOVSKRUGUAEPFNGAYXONOPHMHVCUYCTJUSJS");

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
    msg.setTimeStamp(0.8754047638927206);
    msg.setSource(57311U);
    msg.setSourceEntity(172U);
    msg.setDestination(26938U);
    msg.setDestinationEntity(122U);
    msg.command = 27U;
    msg.entities.assign("GOOGFNSJIOYYUHIJJAPEGEOHTGSNOECSBEKJBDCATCUYXQFKDVNEXDWSODQMUP");

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
    msg.setTimeStamp(0.7346153200434793);
    msg.setSource(44687U);
    msg.setSourceEntity(38U);
    msg.setDestination(24886U);
    msg.setDestinationEntity(208U);
    msg.mcount = 6U;
    msg.mnames.assign("QVAJDXSQSIFDUKAVKNCDVLNYJXXAEEGEVBNAHYFTLWNOWXHRHWNZPZGKJRTDLWBRUIHNBHBUVUAPZAXJTQJVORSPDKIROJUSOFDZWUCKOXJTKVICDDKBMMBFWSTSGISYBJBICFQLDKWQEQUKQTYTTUERZGEYSWBSLMNCLMGZOLHPFOCMZMNCGPRTMGOQCUFHEJVWXFXPULOIQCPQPHRGTZDH");
    msg.ecount = 146U;
    msg.enames.assign("IRDQQNLMWAAZQGBIIKCTKATUJZTNWODUIPBWEEISMOPBMLVFNEWLNPXASWCIBTESENCNDHIGKGAZZTSCHLPRKLDYYIKGTJQNKFYRLRVWYNDSAOGZZXNLUFJSOMTEQRREHCEECSKVNOHGYFDWLPIBMJUPCVTURRXZZHPFOQKOTADUJSGVCQXAEBFVOCSVVBFSFAWXBAHJLMBYXWOHGMLXXYDITQJDVHYUU");
    msg.ccount = 32U;
    msg.cnames.assign("BDQSZZFFVOPXNFPWSGMMLBXFJJULUVCQTPBSGLPUKQSCPTYFZHSBSGSHVZTDJOMGJLWNCUZOEODAEIMDRQAPBJCOBYIVYKLYREOXXWJLWPDHNCAKAFRDWVIATRQIEHQIJNMUKWVOIYAZHYCGTOQJGWPGBBJRTZHNXOUWQPLEGKDCGPKUMAVKURMFZKIGTYMVEEBNHI");
    msg.last_error.assign("PEPBMOQDTXVOBKJJLCARGJGZSWMTCEJDBGMVTTSYZWNLAAEJBOCOZIBMPUKHRAYNLMHSULPHZSEQCYBNJOWMHNNIQPXMYAJMZKBMNBRZIVMRFAKGHFPXVSLJITEPECVLURSGCLRWAPYFQTFIKQGJBXQITHYZXPGXAUNECSKUWGDNDRXEWOHXGTOSTTZGY");
    msg.last_error_time = 0.02908919048897618;

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
    msg.setTimeStamp(0.3016072802222656);
    msg.setSource(55442U);
    msg.setSourceEntity(62U);
    msg.setDestination(64529U);
    msg.setDestinationEntity(170U);
    msg.mcount = 139U;
    msg.mnames.assign("RTWDELRMXNGMNJEEIETHCAUUSGRXHKKQUQNXXWUIEHGAHNVVKFYUYDLDCCABAMTLTPDMWHFBIIPOXZUKJGGUJAFYOMSIIPWZMDBYACLOSJNMAJCQMXRJPYWMVQQEWZOZDBNLBFJBZZOVCLLSHMONYORSCLZIYTQAW");
    msg.ecount = 154U;
    msg.enames.assign("HCOJXZKFBVDUHEFLGFDHZZHJMMCMNQTAXBWQSGPVEUBQVSVKIVITMELCFIRJWMHHWOPOUWKVJNNVXWADQXTOSWPNN");
    msg.ccount = 50U;
    msg.cnames.assign("GAJFCCGUVFTZNISIBLTVFLFDHZKYHYFCQMDFRGVLPJGUTDHKDBJRVAPKGIILQWIMSIBJWXWYUQAMHGBCWAPQGPYESUGHQEROVQZSTZONHPJWXGOSROKLKAWBZDISVWFJLTLNNMWUCXBZRCUZMTENGCKOOMSLMXEXUPBOPYMYQJFWPMRJTHLPIEFLUFTNANZQXXNRVJOIEQHAADRPVCKYVVKTNSCMDESADQRRXYHOEHUK");
    msg.last_error.assign("FEYSWGUVNMJOSLMXSBFNWYBLNXZQFSTCZCYAOEHAMEVXIMCTQDLXPFXZKKQOIZJUPZJNTDVRQYKNGGIGHKVPMDDLOETLTNIRWUMWQUAENIFOEYMGNZQRRWQHAIXRKBHQJVEIHRWNPSXPYACTDXMUHCVJCUFCZQFUZJRPLKOPLPYSYOYFAGGDRABIDGNABODBTZMJT");
    msg.last_error_time = 0.47750774555432596;

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
    msg.setTimeStamp(0.3763760628441686);
    msg.setSource(31656U);
    msg.setSourceEntity(105U);
    msg.setDestination(310U);
    msg.setDestinationEntity(240U);
    msg.mcount = 78U;
    msg.mnames.assign("UCXQDFCKFUFOGNZLULRSAHPETHKBSSAKPLAIPJJEPWXDVJPTYBUZDERVWPDZDMTHLBFTBDCBPFZBHMVOIRSJKUTYGMXIVXNXNMASGKIZDFQACLVYKUYTMWBMTGTKPQ");
    msg.ecount = 10U;
    msg.enames.assign("BFZSVYQDDUFLPOSQXZPPVZVNANFHNMYHQNADKXOCEDJZUYDEFCOGTVYBRQHJPUVWMNVJQKSPKHAIMIESVOWELGAEGBIUIUMEIMCOLJJTFMHYNQAZXCGZWUSYGVKKBFCTCESZRLZUOWTSCKMIXQHYYDHESIIUAPZTRULCYNVALIJDRQPLHSFRRRGNTXKCY");
    msg.ccount = 47U;
    msg.cnames.assign("TQPNVJEQKZUIRKXWVSWGSBPTFLPWXOSICYGPIOCDQVCGATPYHKZEPTNNODWFVLMHNUYNVAVXUBXMIONZZYNQMULJJTARBGXSDMGOGJCXJDBLATTUAAMEAFRECHEKJQEDSBRLTYHUGNHMFMDSQUADLZQIYFPJIDSOYAOHLDLPWFRAJUBKGWCXVHKYSPXKRWXE");
    msg.last_error.assign("WBMQYTSUWVXNPTNWTRCXGHTKDDPZUMBACZEPBDFGSXHSWNCQEGZRIFBDSTLMJAVWBFJJHGULOEDGPMBQHMLNEZAVRXUFMOIXQETYQQYAIHVJOZDPQACJZLDNMJKRGPWKYAIRHIDSYURRLLCOHUKBFRBRAYLWOWEHVLJSZVPOLEOMFYCZDGTIBKXNOCNWYOSGFASSFQYUXTVVPI");
    msg.last_error_time = 0.7639257953029865;

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
    msg.setTimeStamp(0.45628508515606314);
    msg.setSource(63763U);
    msg.setSourceEntity(7U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(205U);
    msg.mask = 122U;
    msg.max_depth = 0.06240508914251064;
    msg.min_altitude = 0.6165502760458667;
    msg.max_altitude = 0.19940609797392084;
    msg.min_speed = 0.8963951221764103;
    msg.max_speed = 0.2891299855542;
    msg.max_vrate = 0.9489690250537411;
    msg.lat = 0.09354426200363242;
    msg.lon = 0.5720022180085708;
    msg.orientation = 0.6822613942134221;
    msg.width = 0.14665622820343194;
    msg.length = 0.36739428475801583;

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
    msg.setTimeStamp(0.3691269731460285);
    msg.setSource(1137U);
    msg.setSourceEntity(3U);
    msg.setDestination(47192U);
    msg.setDestinationEntity(207U);
    msg.mask = 143U;
    msg.max_depth = 0.5242173782280446;
    msg.min_altitude = 0.002921695171694161;
    msg.max_altitude = 0.34343690802471716;
    msg.min_speed = 0.848718479991834;
    msg.max_speed = 0.3550915686618644;
    msg.max_vrate = 0.8390996489210949;
    msg.lat = 0.4405758294261082;
    msg.lon = 0.22213890025847938;
    msg.orientation = 0.9111348194324523;
    msg.width = 0.7337337447498566;
    msg.length = 0.006752179139277614;

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
    msg.setTimeStamp(0.3344493991177826);
    msg.setSource(33045U);
    msg.setSourceEntity(147U);
    msg.setDestination(37713U);
    msg.setDestinationEntity(246U);
    msg.mask = 21U;
    msg.max_depth = 0.21790411706911506;
    msg.min_altitude = 0.8561211326723986;
    msg.max_altitude = 0.04934436948003662;
    msg.min_speed = 0.9665923513231034;
    msg.max_speed = 0.47286357134109624;
    msg.max_vrate = 0.5148757007388176;
    msg.lat = 0.9020808169261346;
    msg.lon = 0.46950732360480496;
    msg.orientation = 0.9132969319406951;
    msg.width = 0.6364238066248343;
    msg.length = 0.37316849404218166;

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
    msg.setTimeStamp(0.0822691187172715);
    msg.setSource(49717U);
    msg.setSourceEntity(196U);
    msg.setDestination(39478U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.6769576985676287);
    msg.setSource(7005U);
    msg.setSourceEntity(248U);
    msg.setDestination(47070U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.062170129445503375);
    msg.setSource(30735U);
    msg.setSourceEntity(252U);
    msg.setDestination(28966U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.15429596189883288);
    msg.setSource(44325U);
    msg.setSourceEntity(189U);
    msg.setDestination(22105U);
    msg.setDestinationEntity(64U);
    msg.duration = 1160U;

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
    msg.setTimeStamp(0.7264633389448245);
    msg.setSource(30242U);
    msg.setSourceEntity(170U);
    msg.setDestination(30812U);
    msg.setDestinationEntity(35U);
    msg.duration = 24726U;

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
    msg.setTimeStamp(0.3633888718767837);
    msg.setSource(26156U);
    msg.setSourceEntity(51U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(161U);
    msg.duration = 60775U;

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
    msg.setTimeStamp(0.4444556058564162);
    msg.setSource(64333U);
    msg.setSourceEntity(129U);
    msg.setDestination(8435U);
    msg.setDestinationEntity(5U);
    msg.enable = 76U;
    msg.mask = 1022349982U;
    msg.scope_ref = 3658732155U;

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
    msg.setTimeStamp(0.8048308246564333);
    msg.setSource(39444U);
    msg.setSourceEntity(37U);
    msg.setDestination(32725U);
    msg.setDestinationEntity(36U);
    msg.enable = 78U;
    msg.mask = 2921552799U;
    msg.scope_ref = 3760991366U;

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
    msg.setTimeStamp(0.725492847283456);
    msg.setSource(2798U);
    msg.setSourceEntity(227U);
    msg.setDestination(17733U);
    msg.setDestinationEntity(135U);
    msg.enable = 190U;
    msg.mask = 2302837445U;
    msg.scope_ref = 222629686U;

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
    msg.setTimeStamp(0.9553765881161849);
    msg.setSource(51489U);
    msg.setSourceEntity(20U);
    msg.setDestination(49091U);
    msg.setDestinationEntity(233U);
    msg.medium = 38U;

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
    msg.setTimeStamp(0.807877994136265);
    msg.setSource(45274U);
    msg.setSourceEntity(81U);
    msg.setDestination(7684U);
    msg.setDestinationEntity(208U);
    msg.medium = 54U;

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
    msg.setTimeStamp(0.6039893407501958);
    msg.setSource(34498U);
    msg.setSourceEntity(54U);
    msg.setDestination(2756U);
    msg.setDestinationEntity(119U);
    msg.medium = 131U;

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
    msg.setTimeStamp(0.6940167124412431);
    msg.setSource(18337U);
    msg.setSourceEntity(131U);
    msg.setDestination(1724U);
    msg.setDestinationEntity(200U);
    msg.value = 0.11482095925304325;
    msg.type = 196U;

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
    msg.setTimeStamp(0.9241972075064626);
    msg.setSource(64823U);
    msg.setSourceEntity(176U);
    msg.setDestination(13U);
    msg.setDestinationEntity(244U);
    msg.value = 0.9832805365113307;
    msg.type = 188U;

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
    msg.setTimeStamp(0.45401240227490824);
    msg.setSource(28134U);
    msg.setSourceEntity(225U);
    msg.setDestination(19750U);
    msg.setDestinationEntity(132U);
    msg.value = 0.8478987806901733;
    msg.type = 161U;

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
    msg.setTimeStamp(0.553203516557181);
    msg.setSource(49087U);
    msg.setSourceEntity(58U);
    msg.setDestination(8625U);
    msg.setDestinationEntity(96U);
    msg.possimerr = 0.15994357680409665;
    msg.converg = 0.054353812324924755;
    msg.turbulence = 0.10946041159948094;
    msg.possimmon = 174U;
    msg.commmon = 249U;
    msg.convergmon = 254U;

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
    msg.setTimeStamp(0.38470997441678745);
    msg.setSource(16963U);
    msg.setSourceEntity(77U);
    msg.setDestination(10989U);
    msg.setDestinationEntity(115U);
    msg.possimerr = 0.14239322323673909;
    msg.converg = 0.35305208856010095;
    msg.turbulence = 0.7475962198266362;
    msg.possimmon = 118U;
    msg.commmon = 138U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.3646042862723523);
    msg.setSource(51519U);
    msg.setSourceEntity(97U);
    msg.setDestination(15656U);
    msg.setDestinationEntity(31U);
    msg.possimerr = 0.06844379464989359;
    msg.converg = 0.6514820039779149;
    msg.turbulence = 0.08926951285126816;
    msg.possimmon = 28U;
    msg.commmon = 36U;
    msg.convergmon = 72U;

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
    msg.setTimeStamp(0.23597118716769672);
    msg.setSource(28242U);
    msg.setSourceEntity(38U);
    msg.setDestination(50129U);
    msg.setDestinationEntity(152U);
    msg.autonomy = 136U;
    msg.mode.assign("GJYPPWFQQKTPZLCFGBHHETTQUNHHOFZQRGDDVGKAOBMQNMJBICDYUSTEWAFMTJKJWVZUZUIQUACLVFHPHLMBSVMX");

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
    msg.setTimeStamp(0.9981166243266945);
    msg.setSource(30742U);
    msg.setSourceEntity(143U);
    msg.setDestination(9742U);
    msg.setDestinationEntity(189U);
    msg.autonomy = 12U;
    msg.mode.assign("KTNMYDIHGHJHWRZIHWQSOPDTCAZPCZYEZZJIYDFJXMKGYQYDXOUWLJTGFNXZKCRNEIKCKFYTOYFESZBDLKRXSXQCQDXGGF");

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
    msg.setTimeStamp(0.036953849241756376);
    msg.setSource(6086U);
    msg.setSourceEntity(95U);
    msg.setDestination(30404U);
    msg.setDestinationEntity(207U);
    msg.autonomy = 89U;
    msg.mode.assign("DZXMVGIGCDYMEMOLXCDJTMAKSZDFBCOKLRTXBOGWFHNEQLJKRSZIQJOYNBSEXKXHTENQJKNOCMWKAHKJJQOUDCTRHNDDTAJVHVLZIRUWMYSYGCWWYCIWWXNLBVYRIVAMTALHNIFEFQKSFDHLEMHGQYAQPSQKAUXANPFLHFZPESCIDUFDBUBOGVPRTTISWRZTKZUJUMXUV");

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
    msg.setTimeStamp(0.49662707850557786);
    msg.setSource(14269U);
    msg.setSourceEntity(40U);
    msg.setDestination(26011U);
    msg.setDestinationEntity(86U);
    msg.type = 167U;
    msg.op = 9U;
    msg.possimerr = 0.97118155003304;
    msg.converg = 0.5431015873685895;
    msg.turbulence = 0.5530817058320148;
    msg.possimmon = 17U;
    msg.commmon = 129U;
    msg.convergmon = 72U;

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
    msg.setTimeStamp(0.8804608643602441);
    msg.setSource(43409U);
    msg.setSourceEntity(182U);
    msg.setDestination(20640U);
    msg.setDestinationEntity(236U);
    msg.type = 186U;
    msg.op = 233U;
    msg.possimerr = 0.779341256713692;
    msg.converg = 0.7277554328695166;
    msg.turbulence = 0.533522516554732;
    msg.possimmon = 247U;
    msg.commmon = 240U;
    msg.convergmon = 39U;

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
    msg.setTimeStamp(0.6461531051781733);
    msg.setSource(9341U);
    msg.setSourceEntity(42U);
    msg.setDestination(49027U);
    msg.setDestinationEntity(36U);
    msg.type = 9U;
    msg.op = 52U;
    msg.possimerr = 0.4373849099856191;
    msg.converg = 0.8717539758831124;
    msg.turbulence = 0.6510582697950162;
    msg.possimmon = 240U;
    msg.commmon = 176U;
    msg.convergmon = 230U;

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
    msg.setTimeStamp(0.8468732078544718);
    msg.setSource(23305U);
    msg.setSourceEntity(36U);
    msg.setDestination(4158U);
    msg.setDestinationEntity(194U);
    msg.op = 7U;
    msg.comm_interface = 195U;
    msg.period = 63023U;
    msg.sys_dst.assign("HKLMFZODNDTMRZPNCKSRMGREOUXWWKLEKQEBIUJMVFJJUXZXLMABPPSNHWDIDWXAAADGUGKZQZGOFXISZLUJCNHCBDEIMZZBRWWGLVGPOEQDYOYUYXMJFTRHQHCJIUCNAJOLWQBTNCAIQBOCVUI");

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
    msg.setTimeStamp(0.4426476070241958);
    msg.setSource(20923U);
    msg.setSourceEntity(237U);
    msg.setDestination(49657U);
    msg.setDestinationEntity(8U);
    msg.op = 221U;
    msg.comm_interface = 42U;
    msg.period = 9742U;
    msg.sys_dst.assign("ISDMUXAFPTDHFNOTZYNIOWJYMZSFDGFNUKDRVHMGUDRADHLVHKPBXWMOIRDOEJAHWKWYBTQDECMXWKLGYEHMKTCGANUARPGKRTSCLJZLZLKRRBSGLLQYXHEUQNQXBVSHSFNPBGBCFYZAQOASICLUVUXQTQPZINTZLNXKPOCMEXCHAGFQVBECJJUZTOLCIXRZUFDVOCEIAYNWYFYAKIMNPBUYVVETSTKVPHGMEXDBPJWWRJIFEGSJSOO");

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
    msg.setTimeStamp(0.03404105719916217);
    msg.setSource(37393U);
    msg.setSourceEntity(189U);
    msg.setDestination(20907U);
    msg.setDestinationEntity(12U);
    msg.op = 94U;
    msg.comm_interface = 227U;
    msg.period = 55062U;
    msg.sys_dst.assign("UNIUYRHKHZCLOSGVZTZRRHFEXPUQBYVAIQYWPVHLKZBORZLNLCIMFJXPATHRNLFTJKNPJMBCDNPQKIUCGTLKRBGABSEIWEUDARBGSZYXNFCYFODOMWHNCWYTXDABCVGOSQYKOSVXGFPRFKTNOVDLEGTVQLCJDBTEAIXUEJOESAUPQTHBHKJFJDYXZWFBXSAYNWDMSAWQZWF");

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
    msg.setTimeStamp(0.7478872441784871);
    msg.setSource(12047U);
    msg.setSourceEntity(221U);
    msg.setDestination(17945U);
    msg.setDestinationEntity(131U);
    msg.stime = 2817257207U;
    msg.latitude = 0.6987697380682534;
    msg.longitude = 0.8771835319666493;
    msg.altitude = 13725U;
    msg.depth = 39802U;
    msg.heading = 62829U;
    msg.speed = 31919;
    msg.fuel = -58;
    msg.exec_state = -103;
    msg.plan_checksum = 14304U;

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
    msg.setTimeStamp(0.7821303764524241);
    msg.setSource(54094U);
    msg.setSourceEntity(177U);
    msg.setDestination(1841U);
    msg.setDestinationEntity(158U);
    msg.stime = 46466844U;
    msg.latitude = 0.6672171272281298;
    msg.longitude = 0.6996638246991256;
    msg.altitude = 54364U;
    msg.depth = 56643U;
    msg.heading = 13826U;
    msg.speed = 3632;
    msg.fuel = 81;
    msg.exec_state = -22;
    msg.plan_checksum = 46229U;

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
    msg.setTimeStamp(0.3262948218010061);
    msg.setSource(11215U);
    msg.setSourceEntity(243U);
    msg.setDestination(47546U);
    msg.setDestinationEntity(63U);
    msg.stime = 102568666U;
    msg.latitude = 0.13582820866778345;
    msg.longitude = 0.4044008058236399;
    msg.altitude = 8115U;
    msg.depth = 13904U;
    msg.heading = 33463U;
    msg.speed = 24707;
    msg.fuel = -4;
    msg.exec_state = 93;
    msg.plan_checksum = 39885U;

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
    msg.setTimeStamp(0.7988718867049018);
    msg.setSource(248U);
    msg.setSourceEntity(12U);
    msg.setDestination(40660U);
    msg.setDestinationEntity(18U);
    msg.req_id = 36439U;
    msg.comm_mean = 56U;
    msg.destination.assign("BPBZKZYLUURQLTCCFXTQAEPDXMVRXHNSOAOPFLDMEABGQGSZBBPMVMIVUQHUUTDBNJAUIRHMBRUFJYZORDCIWVTIAGWDKGEFJLEWKNOPIDQCSMSBSFKLYTEOSUPOWRNBQUVCBHGOWEFNWSXG");
    msg.deadline = 0.21880774381569512;
    msg.range = 0.2879215862898602;
    msg.data_mode = 253U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 30227U;
    tmp_msg_0.flags = 148U;
    tmp_msg_0.lat = 0.29326029781649876;
    tmp_msg_0.lon = 0.05567493640028731;
    tmp_msg_0.start_z = 0.5750510829732983;
    tmp_msg_0.start_z_units = 7U;
    tmp_msg_0.end_z = 0.6414930873884755;
    tmp_msg_0.end_z_units = 136U;
    tmp_msg_0.radius = 0.42759483821027244;
    tmp_msg_0.speed = 0.5743131840921708;
    tmp_msg_0.speed_units = 44U;
    tmp_msg_0.custom.assign("XDEPAMJOLELKNHWAXJHNSTCSNBZBHBJ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("THVZRPFOKJNIKOSMWCJGBYMITAKITCNDDAEIKMENSAZDMQRUZLXOPSIAQAHXQLTFZHHQWKCMRFURJQXODZLB");
    const signed char tmp_msg_1[] = {-69, 92, 52, 17, 93, -119, 105, -34, 120, -35, 21, -46, -41, 44, -97, -122, -38, 25, 8, 72, -75, -2, -89, -55, -113, 85, 72, -25, -13, 121, 29, 25, -72, -78, -64, 112, 126, 104, -84, 50, -64, 45, -62, 96, 69, 13, -112, 40, 53, 81, 122, -29, 7, 7, 106, -104, -18, -60, 17, -88, 72, 3, 118, 120, -124, 106, -50, -80, 104, 17, -58, -99, -105, 111, 4, 63, -30, -79, 100, -23, -85, -55, 92, 7, -124, 82, -19, -60, -85, -89, 55, -104, -27, 81, 62, -103, 4, 28, 64, -83, -80, -98, 51, -125, -9, -34, 90, 40, 35, -113, 72, 2, 17, -45, -28, -4, 23, -65, -94, -73, -48, -114, 70, -35, -65, -23, 19, -16, -103, -18, -57, 113, 65, -18, -37, 105, 37, 19, 109, 60, 97, 76, -37, -41, 44, -128, 106, -75, -122, 113, -97, -65, 74, 25, -88, 7, -70, -101, 115, -55, -49, -9, 71, -55, 4, 87, -28, -121, 55, -109, -30, -31, 32, 119, -86, -65, 84, 55, 44, -102, 89, -113, -125, 102, -22, -114, -88, -33, 113, 79, -6, -124, 35, 99, -103, 119, 55, 28, 2, -118, 43, 105, -127, 33, -27, -101, 102, -35, 52, -79, -113, 17, -123, -8, 25, -20, 5, 40, -106, -126, 124, -96, -105, -115, -121, -96, 126};
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
    msg.setTimeStamp(0.8412454557959951);
    msg.setSource(16333U);
    msg.setSourceEntity(218U);
    msg.setDestination(26717U);
    msg.setDestinationEntity(134U);
    msg.req_id = 12059U;
    msg.comm_mean = 154U;
    msg.destination.assign("ULKODOBYYKUBMWAVCWROFAECPSDBQPNEIRBLROJTMFTWXBRFXIULSBEKIVXEDTGTRABFVHLHZSMLDMUFEPBZWZINOPCESHJYZTZCYHVAIHJGXEEHGRDLKLILJSEIGVPAJYGKTQRJVDKPWSIUJKYYHCNDCJSXIYONGBZWOQDIQPKXBNDAOWHEWTXSCYDTULQRKCHPJVMHXNJGRGAGQNFCOAZX");
    msg.deadline = 0.9778678884066031;
    msg.range = 0.907669878718137;
    msg.data_mode = 185U;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 197U;
    tmp_msg_0.numsamples = 46U;
    tmp_msg_0.lat = 0.43815231294958845;
    tmp_msg_0.lon = 0.8352417345150719;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NZRQIHMDBCYLPCUWYLPKKLAGHBAHONTBNRHWNXLGAMPIPYVEXDIWABLJUMKLSQNTRPTXDZEAKQVKRTVEKFJRQQFTIVPMZLLCDJIYIGJFRHJHNRBMUAONQGKVIMZSLSFMNOBJOGVVZWGPNGDSEOCXCWZX");
    const signed char tmp_msg_1[] = {124, -26, -59, -20, 23, 77, -32, -78, 78, -119, -77, 114, 125, 2, 102, -37, -7, 108, -68, 120, -101, 79, -126, -121, 54, -46, -45, 25, 89, -87, 90, 64, 49, 84, 68, 50, 32, -35, -127, 112, 8, -123, -53, 34, -61, -86, 71, -95, -80, 25, -110, 87, -98, -6, 75, -113, -61, -95, 80, -51, -109};
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
    msg.setTimeStamp(0.5527685545608262);
    msg.setSource(39412U);
    msg.setSourceEntity(52U);
    msg.setDestination(45853U);
    msg.setDestinationEntity(219U);
    msg.req_id = 53351U;
    msg.comm_mean = 165U;
    msg.destination.assign("EMYCZSYJPZUDKBSOMAGSGCOISYGKTGKHJCXCKXHXSCWOUMRMTHBNKENHYOOTUVSHXPUMFAZDKRLNFGAWSZNRQDJHROJFIVNQYYFWFLBNZZFLXVSWBHQLUMZAHJCDWXZNTZVPRUKBQIBVALQLWUTGTEJALVFUKQNQIDSMJIW");
    msg.deadline = 0.8411491765666871;
    msg.range = 0.013658710121898454;
    msg.data_mode = 197U;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("GLZVTTLXQSMCKTHMDFWPAKELXLGYAVLHNCBADZSIMIPEFOWCUTSNBTSLSUUXKLYRABEMQAQRQGPUTFJCDRYUSNVPBADWXWUKSZZIQNOBHKJHJHQEJFWMEYGFIMZIYIWGCXTSFKFAGFGUABMJDSVBNZTPGFTIGMPJEQXZOONCHUQDQVINERECNLWGADKCXORPMOQRHNRHOCHKPZYIYZKJBLRDJERJOY");
    tmp_msg_0.lat = 0.5373633670103244;
    tmp_msg_0.lon = 0.8948424482474908;
    tmp_msg_0.z_units = 184U;
    tmp_msg_0.z = 0.6191799383006246;
    tmp_msg_0.accuracy = 0.32576587829063086;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PLGKWZEIEEUYBIGCVTIEXEDFRSAVXQUNIHP");
    const signed char tmp_msg_1[] = {-87, 35, -125, -83, -56, -92, -39, 61, 21, 39, 93, -114, -108, 116, -87, 65, 20, 25, -68, -67, 22, -53, 75, 45, -53, 62, 24, -11, -118, 89, -101, 60, -38, -56, -9, -57, -66, 23, 37, -71, -98, -95, -104, 65, -42, 49, 93, 33, 88, -91, -108, -88, 64, 56, -116, -104, 22, 27, 15, 116, 28, -92, -77, 1, -87, -93, 76, 68, 49, 38, 42, -64, 111, 34, -26, -76, 25, -32, 67, 90, 8, 39, 48, 0, 20, 101, 39, 9, 89, -30, -45, 111, 95, -30, -55, 66, -1, -84};
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
    msg.setTimeStamp(0.2665949268308495);
    msg.setSource(12084U);
    msg.setSourceEntity(91U);
    msg.setDestination(37833U);
    msg.setDestinationEntity(69U);
    msg.req_id = 57593U;
    msg.status = 10U;
    msg.range = 0.8436585920150869;
    msg.info.assign("JRPINMKGJLGQXNZBGXAZPZQKXKXGCTKEGWBWOXEQUUWRXVYHJIRYIVIDBPVLLFEMXCSAQDWGVMFP");

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
    msg.setTimeStamp(0.530223727086072);
    msg.setSource(60276U);
    msg.setSourceEntity(141U);
    msg.setDestination(59964U);
    msg.setDestinationEntity(96U);
    msg.req_id = 36537U;
    msg.status = 110U;
    msg.range = 0.7007507980275864;
    msg.info.assign("YNBUDDVIOQDIRVCAJITAROKXVSZYRUMQKIQMCXZIYUKJCBCANPJLRYWZDFXRGWKPARBUHZPPYHAATACIGGBJHTGUOGTXQOOMNDJRWXHQABWYGMXTIHACKSSXISVQRDZYKCLEVCHTKVQJVWFEXSNYJXSWZNOOCVTHZKODJFELPUFKEELHQGNWPMETLSGEBNGGZPHXFZPSJUL");

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
    msg.setTimeStamp(0.710685775640742);
    msg.setSource(60264U);
    msg.setSourceEntity(133U);
    msg.setDestination(25055U);
    msg.setDestinationEntity(69U);
    msg.req_id = 22005U;
    msg.status = 91U;
    msg.range = 0.3108049851171699;
    msg.info.assign("TISFUEBKDINTRSEJOWJVAHZXDYIEDZNZHRHNXULRGFCAZFRJTAIZDUOVIYNWPESKGKYGZMCIPLLMTXJOEPWLCFVAQMVYNMDWPFJSMGLASLFJOPKYBFEBQEHIVNCHDAGNQGYBHZRLXBQOVQKESOGCNAKKMMDJVHRVQTPYAMRGWVPUYSLXKVIWNCCMBREKDWQRULHUF");

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
    msg.setTimeStamp(0.1035653866950621);
    msg.setSource(31768U);
    msg.setSourceEntity(71U);
    msg.setDestination(61146U);
    msg.setDestinationEntity(70U);
    msg.req_id = 17520U;
    msg.destination.assign("QVRXGPOCLXBUXAJRFODYNHKBWFNRHOTDCANHXSJYVTUULVASNWXRZTHJDXTSEVBQ");
    msg.timeout = 0.9455731919447746;
    msg.sms_text.assign("QIVTOWUWJSFWQPPLTXMXOIWCPQIHYVXGKMRHBUSFQZFGABCZWPZKGCWCFYDRYQYCJHZUTQDKNSJPKLYTAOSNMNCEZIJJDHIRVVATBYVASUEOULVNIKVYCESRLNEHSXAUYOFCOMHZPICKBUBSKALRMHENATJXYVDEOGBXFGJDKSIKVRZKGMPBEGADGTRBHUFGPMSLPZLQDHRPWJQOAENMOCYDIEXVUZDW");

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
    msg.setTimeStamp(0.18851468928317083);
    msg.setSource(19384U);
    msg.setSourceEntity(129U);
    msg.setDestination(12253U);
    msg.setDestinationEntity(173U);
    msg.req_id = 10843U;
    msg.destination.assign("ZPBKLEDISGTCOXNJZVJEEFWUDHRLCUKHODLXCOVGHDVKXGXBODAMICFXPWXGPILPQTVZRJZUGTMCQGUCENHNBIZZMPOTWASRDTFQATPUOGJBDEWSQYFQULSEJISPMPJZEAVVKVOZYYFN");
    msg.timeout = 0.7484426105401153;
    msg.sms_text.assign("JAOTUTJYEBREJQRFGIBMUCHLPKMERJOQQDUMOZADIGXQUESLKQRZMMKCJSXQVBRUUYMFILYVLHJWGFNBXSOPWUEXSLSKMGEDOBZKSWWXIMCJOSZPIXIZONPFQPYAWJPJUAPRSNEXEVFNWBYZTDNVUDZIRPYTUGZOAWHFSTGYACXBCDNVCHEWNYNESHDFKAKTPBTRVKHKYIVFLQ");

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
    msg.setTimeStamp(0.2901459610375058);
    msg.setSource(7064U);
    msg.setSourceEntity(121U);
    msg.setDestination(36314U);
    msg.setDestinationEntity(45U);
    msg.req_id = 10961U;
    msg.destination.assign("GOSAWTPCWIZSVRLDBFNQXUYOJNSIVURHARQOFCMERKCTTARBOJBCOLBQPPQSANMTJCCQVHELVLGJJVHMPCEMXVRTYZSXBKPGQPJDYVHYGPMMLFK");
    msg.timeout = 0.7457546180676455;
    msg.sms_text.assign("DGMRAHWNIFZLMHPLCSCYAYXMBIYTRHGWQJPMYYANHEWBPTLSKSKAIZPFOSEGYAXNPLWIQDJLXOHQXCWKGKZHN");

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
    msg.setTimeStamp(0.39862226917943144);
    msg.setSource(49126U);
    msg.setSourceEntity(218U);
    msg.setDestination(3485U);
    msg.setDestinationEntity(142U);
    msg.req_id = 14028U;
    msg.status = 76U;
    msg.info.assign("JRSGGTDLZZIOTBJFCMIQSHITKSBKXOKOCYMMOHSDVQBEKNRXQXIFHLTNOOFFLYMNJLWAWTXYG");

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
    msg.setTimeStamp(0.8545326392340342);
    msg.setSource(49727U);
    msg.setSourceEntity(183U);
    msg.setDestination(60305U);
    msg.setDestinationEntity(205U);
    msg.req_id = 22500U;
    msg.status = 250U;
    msg.info.assign("VWYHFJJUFPGPQLKLMKMDCDFQZWHMVZUZDPQUKRFTXCPHDFDB");

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
    msg.setTimeStamp(0.6264786280296396);
    msg.setSource(4613U);
    msg.setSourceEntity(95U);
    msg.setDestination(19008U);
    msg.setDestinationEntity(199U);
    msg.req_id = 46012U;
    msg.status = 177U;
    msg.info.assign("EGIIKEJLXDMCBNRLXHBWRKREPQMELUSTUTIKYMDTJDETRABQRZSCMGWGHVTUSWLJCPAEHWYLNGHJYLFQSZXAXZICTWSXANHMUUUM");

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
    msg.setTimeStamp(0.8517456384908951);
    msg.setSource(38195U);
    msg.setSourceEntity(135U);
    msg.setDestination(17671U);
    msg.setDestinationEntity(92U);
    msg.state = 19U;

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
    msg.setTimeStamp(0.10953244363465364);
    msg.setSource(25977U);
    msg.setSourceEntity(78U);
    msg.setDestination(8424U);
    msg.setDestinationEntity(213U);
    msg.state = 107U;

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
    msg.setTimeStamp(0.8731399960422656);
    msg.setSource(28187U);
    msg.setSourceEntity(130U);
    msg.setDestination(25481U);
    msg.setDestinationEntity(91U);
    msg.state = 108U;

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
    msg.setTimeStamp(0.10013560832214896);
    msg.setSource(15923U);
    msg.setSourceEntity(20U);
    msg.setDestination(39682U);
    msg.setDestinationEntity(39U);
    msg.state = 34U;

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
    msg.setTimeStamp(0.16938643972898693);
    msg.setSource(5778U);
    msg.setSourceEntity(231U);
    msg.setDestination(56760U);
    msg.setDestinationEntity(183U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.042222919314347296);
    msg.setSource(22632U);
    msg.setSourceEntity(61U);
    msg.setDestination(65491U);
    msg.setDestinationEntity(150U);
    msg.state = 203U;

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
    msg.setTimeStamp(0.7026745838336137);
    msg.setSource(16515U);
    msg.setSourceEntity(78U);
    msg.setDestination(5175U);
    msg.setDestinationEntity(219U);
    msg.req_id = 8269U;
    msg.destination.assign("UWKXPKTKABHJIPDCSEKVDOEGETMOOMNVBGCRBTIDBXNRGCGCOQBPFESLIRXIYADXNJQTAYELEAFMJNJUZRFMHXRVZGRLWGHMSRQVCABTXDVOCFCKCEMYPWBONRSLWSXJKPDYSJQBGHPOYX");
    msg.timeout = 0.2333295082985306;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.14512192779850797;
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
    msg.setTimeStamp(0.22871595678587164);
    msg.setSource(5128U);
    msg.setSourceEntity(154U);
    msg.setDestination(45862U);
    msg.setDestinationEntity(106U);
    msg.req_id = 38012U;
    msg.destination.assign("FQQBDGWJTYQRWRXEZTSRNZI");
    msg.timeout = 0.10432737071032949;
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 19754U;
    tmp_msg_0.type = 126U;
    tmp_msg_0.status = 81U;
    tmp_msg_0.info.assign("YOMVPQDKUBVAUCCGVBHMFJIBQPWWIHLZTSBBSXQKHUDWGHPGKEIPHOETLSPIEHXMWJQNZGUXLQZRQZOXTEUSHJPJBOEXWIANPRKVWARZYEVBODIRRKFCVMZXCOMITKEKNGETAIYNYDQGYXRYXYEKYPKLUKJGEBODCCPONRXZRNQVWBSGHLVRWZAAGSFAYLYMWSVVCUHLDTX");
    tmp_msg_0.range = 0.2852522570445205;
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
    msg.setTimeStamp(0.3888277203093896);
    msg.setSource(18890U);
    msg.setSourceEntity(56U);
    msg.setDestination(9723U);
    msg.setDestinationEntity(181U);
    msg.req_id = 49147U;
    msg.destination.assign("ZPWCXEYOHIQCQSFLYHVRXUTXABOJWDSDLQDZNAWWQACDIILYRXVLWSJQKKMJVSETKGUXEPCPUFBZJFTBRZSBDHGMICTHYDSVNZCYJFBDMCKURORZPNXUPATEFNYEKFALCHDGRQJWACOJXHFCEDNVVTPNGSKEIIVZQPJISDPQWMWITQLRKTOTANHSGBQLNGZBSAYGYXMYXBVKPFJEVOOOOE");
    msg.timeout = 0.5904774438526275;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2719094409U;
    tmp_msg_0.start_lat = 0.48113342599278075;
    tmp_msg_0.start_lon = 0.7563616812561255;
    tmp_msg_0.start_z = 0.7220231623599854;
    tmp_msg_0.start_z_units = 43U;
    tmp_msg_0.end_lat = 0.0973486812109775;
    tmp_msg_0.end_lon = 0.9426466830773444;
    tmp_msg_0.end_z = 0.9059950282558378;
    tmp_msg_0.end_z_units = 52U;
    tmp_msg_0.speed = 0.28798732023905704;
    tmp_msg_0.speed_units = 227U;
    tmp_msg_0.lradius = 0.748643087449631;
    tmp_msg_0.flags = 207U;
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
    msg.setTimeStamp(0.19582045028814132);
    msg.setSource(49253U);
    msg.setSourceEntity(172U);
    msg.setDestination(63976U);
    msg.setDestinationEntity(187U);
    msg.req_id = 30089U;
    msg.status = 219U;
    msg.info.assign("BECCGXKTPWAMWQCFSLQMGCHMJMRYSLTAEEHHDGOOICWJPASKEZPKHZURSUMAFLHOWKTOZNCFIQIHWGNQOBMHWOXOVNGQNKFYDBTAUAHYUVMJENZGDNEPNGTYEWFDTVKIISJKFYTRCLJX");

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
    msg.setTimeStamp(0.749582132677801);
    msg.setSource(371U);
    msg.setSourceEntity(28U);
    msg.setDestination(37825U);
    msg.setDestinationEntity(122U);
    msg.req_id = 60467U;
    msg.status = 222U;
    msg.info.assign("QVAHDVDYLSQVTHMKPVKSQZVYXAAUIVRMFJCXTCAMOINUFYGFJOYWVMFBCNZFUNRMTE");

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
    msg.setTimeStamp(0.658816030063848);
    msg.setSource(33582U);
    msg.setSourceEntity(42U);
    msg.setDestination(10923U);
    msg.setDestinationEntity(223U);
    msg.req_id = 59727U;
    msg.status = 162U;
    msg.info.assign("FJZQDANJIENJGQBSLPYMTCZNAKPPAROJERASOSNOZLBTYVJGVAYKO");

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
    msg.setTimeStamp(0.5152129619816418);
    msg.setSource(7138U);
    msg.setSourceEntity(114U);
    msg.setDestination(49304U);
    msg.setDestinationEntity(237U);
    msg.name.assign("ESDTRFWMCEGSOLUXLDKQLBZYTQLCSUNVXGHBJQOJQMVDSRRPOYNQAYOEASBIWCWKRYSFQZRZGFVOLBDQXEFNICNEGWGFDJNEZHJJBBU");
    msg.report_time = 0.8064508023874549;
    msg.medium = 235U;
    msg.lat = 0.5345178410205673;
    msg.lon = 0.5604289325134845;
    msg.depth = 0.7482995790390978;
    msg.alt = 0.9750017066383966;
    msg.sog = 0.0021832821629128585;
    msg.cog = 0.014403804397265518;

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
    msg.setTimeStamp(0.8658326232783309);
    msg.setSource(29479U);
    msg.setSourceEntity(229U);
    msg.setDestination(43283U);
    msg.setDestinationEntity(86U);
    msg.name.assign("SZLJSZDNBHRHCFWPZBWJJTFWAKKOKCXPLWWNMEDIIKNMXSIOZDCGFRLEATSRUGQDPTLEUYVYVOBBFNUZALKSRGOFHURLTXYAVBJBOGNIQW");
    msg.report_time = 0.6326220649401086;
    msg.medium = 108U;
    msg.lat = 0.2162151923746013;
    msg.lon = 0.2045897774335944;
    msg.depth = 0.1227718014819249;
    msg.alt = 0.4903498684086468;
    msg.sog = 0.8828498808133318;
    msg.cog = 0.5140536501661741;

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
    msg.setTimeStamp(0.12145257405264986);
    msg.setSource(41450U);
    msg.setSourceEntity(147U);
    msg.setDestination(16245U);
    msg.setDestinationEntity(114U);
    msg.name.assign("ONFRBMRQBGIHQKKXPITHEPTLEOLMJLHUAQJIVJSMPVOTMMFNXYUGLRMBHZZMBRWBYLSNIEUOECYLAGATOJYKZKDGAEKEGQVVZQNUECSITMGKRJVWXLSRABLHCFONVDIVKXJWSIDQAJAEZCQXUDMGWFHTRWWDWFBVJLDVCINWXPZCCOTQPSCPZPYUJJBYKDIRZGHYABQXPCNHFEVNOTQFEHNUZY");
    msg.report_time = 0.17918510086900918;
    msg.medium = 69U;
    msg.lat = 0.7470619172834073;
    msg.lon = 0.9957692916722931;
    msg.depth = 0.08149400196353251;
    msg.alt = 0.4961662646885925;
    msg.sog = 0.08367808687773126;
    msg.cog = 0.9743042845177649;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.1374039146839171;
    tmp_msg_0.temperature = 0.7258679242826804;
    tmp_msg_0.depth = 0.06281148974390016;
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
    msg.setTimeStamp(0.5943748323650025);
    msg.setSource(32979U);
    msg.setSourceEntity(56U);
    msg.setDestination(60394U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.3349425410808776);
    msg.setSource(16317U);
    msg.setSourceEntity(213U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.47669123675607117);
    msg.setSource(27179U);
    msg.setSourceEntity(251U);
    msg.setDestination(452U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.051146941466564955);
    msg.setSource(54876U);
    msg.setSourceEntity(215U);
    msg.setDestination(24040U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("EKUWBKECMPUGDQWWSJDSGQUFDVTBRPCETRBYBXHFPVXRFKZQFOXDFZPLZZQMAVAQLFUKXNLIAEJCFPENYRKZKHLQRWDDRJBPYHYJVLCXMCCBNVFSYLBJDGQUOJLZASTRMAGIXSFDMIY");
    msg.description.assign("GRGBAFTFUDOVLSKSLJXGBCPNROPJPMENLHXGTAQRBTNDRDSWLOBSBTWZYRNSPASIESPOATVWHXUUCKMFYKOQSMJLBZBPFRKCZQLWIEDLWMDCIYVFWZGVQUAROVIEQFAZXEKEOCPYINAQDMORGBFQTGYMWEYQDLIUDFHWIYZSIXTJTEHXIAIHJFOXTNVUBKFWJOVRTUJ");
    msg.vnamespace.assign("JOFSHLZVKKSCWVTYECEHKLJYKXBHGUOQEYHXRUTQPBNADXKANTGUJXEPSDSHURFIBGMPANMMWDLGNKNJMMFCBSYKZTQALQFJMEZTRYRWRJEWWINZUISOFTICBVTTOMNMBBSOAATZHSLUIUANEZPFPDOOYFPJWPLQLODCBMWNDOYSHPRZFYB");
    msg.start_man_id.assign("WSUZSWYZUDUIFNCSCFAUUQSAIVHJEYOZRBXJHLDYHINCSSPWXUNQUADLBGMKOULNWMLYXBHXRYQHNBXFEEKLSGDYVSSEZRECQGIOTFLHGFJKATYCFTRLBNHGFHKWQJACPXODBXZYZFAKPOUKVWMQQJVGANIIOOGWFRDVYCPAIRPDX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OXUVSKTREWJZAIVHRMXDQJZZWZGTMMTTHMLOZCJOWVOYVPZUSUQKUDBWPLGNMVNWBPFRWXAGCAUYHGFWPGTESVEIWLHZIFKTXQLSCHQBJIYIVTFEGNAVXXJSLWQHJLIPTBQXBEMNPBPLMSCKJNFBBDDIUGRRTEVGKXOXAIHPTRAFGKESQBMUUCAYPLYOAC");
    IMC::ImageTracking tmp_tmp_msg_0_0;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FormationMonitor tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.ax_cmd = 0.8418798337587637;
    tmp_tmp_msg_0_1.ay_cmd = 0.5224984598881453;
    tmp_tmp_msg_0_1.az_cmd = 0.5159678878899953;
    tmp_tmp_msg_0_1.ax_des = 0.17474391054537153;
    tmp_tmp_msg_0_1.ay_des = 0.8651445771679368;
    tmp_tmp_msg_0_1.az_des = 0.2982442588835985;
    tmp_tmp_msg_0_1.virt_err_x = 0.29681183926049093;
    tmp_tmp_msg_0_1.virt_err_y = 0.31153160346444075;
    tmp_tmp_msg_0_1.virt_err_z = 0.3800803137789731;
    tmp_tmp_msg_0_1.surf_fdbk_x = 0.09160062534269564;
    tmp_tmp_msg_0_1.surf_fdbk_y = 0.21270086689710233;
    tmp_tmp_msg_0_1.surf_fdbk_z = 0.1983600590997321;
    tmp_tmp_msg_0_1.surf_unkn_x = 0.12400805363567624;
    tmp_tmp_msg_0_1.surf_unkn_y = 0.4983567763630403;
    tmp_tmp_msg_0_1.surf_unkn_z = 0.5797574836943994;
    tmp_tmp_msg_0_1.ss_x = 0.06920082907990277;
    tmp_tmp_msg_0_1.ss_y = 0.12749549359861168;
    tmp_tmp_msg_0_1.ss_z = 0.4074948299671829;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::TrexCommand tmp_msg_1;
    tmp_msg_1.command = 189U;
    tmp_msg_1.goal_id.assign("AIXFDNBTSVWTZSHZQWEXNDVBCPHYJZKNOMYFULIGBOYAWUAIAQMQDLUHKJVSTCGQVLBSCGOHICPYOEOLTJYCTGKENCNOAYPGRCPZXDVJLRUBJNWSEMTPMPFJWDP");
    tmp_msg_1.goal_xml.assign("KMRVQFOCTHEJRODNPLDPPUVEZJPMSKYHUXRXJOIKNZDWFMYACRJGQIJFMYTWQBWQQYNNFKWAZSAOGODYSHJIVNPNRDDSEXBJKTUITUTATIKZLQIIYTUZPCMGSLFCKWEHBLJZGVASIHBPOGOXCTWZQIBEEUXLTLPYADRVCMBSQBYAYWOCOE");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5357957203503153);
    msg.setSource(38803U);
    msg.setSourceEntity(82U);
    msg.setDestination(21526U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("QQGVOZTXKUGFEFAKLSNWYBFYNBRQTSFYGOTYNMLBUYYIFEHMLCVHAVELXRBEGK");
    msg.description.assign("ZBKQETNLBVIADOPCUIFZLUFTJVTKQEFQILXRWKNRXKYPRMHUNCHSBWQFXQJJDHIHOXYWFDHVSGALBRDJRYMATMRBLMGIQWDVKMLSSSYQHTWZMPNPEZSZVTOJEGTUUHKZEDPJWPXDEAWIWJNUAQELXGOULLGBE");
    msg.vnamespace.assign("WNBDTNMBBYVXOIECAISYVYFRO");
    msg.start_man_id.assign("YKETSGIHKHUIKMSMSXOEGZQEFNBQTNBYRDMZCVKNRXAGXLEZRRXYYOZFWTCELQVVHRVCNVLCTIWHSLYKCNTBAGWAWJBHYUQQNZDJKVXIXCXPIDKBBZVFGOZPVFECEFPHAEPRAOXLXPFTCAEZZLMKITFUUBDKJQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NBHXCPELKCUWNPTANLJZMHSYRKCBGWUMELMITJXDZTZBQARHMUDRGJOWWPGNEFYXIYQTOCBWFBXMPULHIXJRXSRMGAELADUNKWQKRZJONIBYWDDVOGSHWCMVDQZEDGPURPPOKIEVQKFJUCQSKFQISPAIPWAHCUIMORZCOORHTWVTJGZAFIGSOVLHYVBEXHXMVAVXDK");
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 36183U;
    tmp_tmp_msg_0_0.lat = 0.6320069930965109;
    tmp_tmp_msg_0_0.lon = 0.4291705522035898;
    tmp_tmp_msg_0_0.z = 0.9222403790989553;
    tmp_tmp_msg_0_0.z_units = 189U;
    tmp_tmp_msg_0_0.speed = 0.8515884270617498;
    tmp_tmp_msg_0_0.speed_units = 190U;
    tmp_tmp_msg_0_0.bearing = 0.621016399682702;
    tmp_tmp_msg_0_0.width = 0.2940976860546578;
    tmp_tmp_msg_0_0.direction = 133U;
    tmp_tmp_msg_0_0.custom.assign("IQOJCXLPJRWEQABMYSKBTRLOGUN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::UASimulation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 226U;
    tmp_tmp_msg_0_1.speed = 9905U;
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {-104, -12, -71, -110, 33, -108, 10, -119, 120, 58};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PWRFEBZDWQSNMKWQQFHNUMTRRDRDVYTJRZMYQT");
    tmp_msg_1.dest_man.assign("EOHOXSSMSRCQGGAHJTEHBIXCMQPKHMDTQJNIVLMVUTBPTLMDSGTOGUEBGK");
    tmp_msg_1.conditions.assign("BNYVMTBWTYRAUAIKMBUOIUYDIDCBSVRNMAHAPPCHVFFHRZINHVDPIDSVBLETWSGPGATHZSRTTYFEBSOLIDUETGLZIFZCUHQQAJKCGJLOBRMILYCOLALAXTX");
    IMC::RamUsage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.4630285852164545;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.5438891998762014);
    msg.setSource(35665U);
    msg.setSourceEntity(95U);
    msg.setDestination(51929U);
    msg.setDestinationEntity(241U);
    msg.plan_id.assign("WMBBIMUJXSCBROKVLVUKMEXCCEWOJSMQNYURGXWJBSRKLTTHNGGHLTIARPYFNYWACCDNPZFHHTKVLVTPUIAYLIEBXOKNDZWQTGACDSPQRYHDPMZLPUXEZHJFVYFVHWOCZNQDQGTUELUJUVECEHERHZEFFISWGJIXRMYHNVW");
    msg.description.assign("QXSMYXKUHVOJTZVPBJWNQFDEKGUBRMLCMFOXPGMTKJBCWIRIZKIBCCFNPQBEJXSHTXVWAYAKZHIUWPEQBDJ");
    msg.vnamespace.assign("YEYTOJCRSUWVNVPBUVQELGMAIHZMOWJNNWDBTFCHBPLYAWGIUFAKVLHWXLIQRHTQTEEZGMCEMRXKPBADQTKSYPNUVIAORVJXIAKTAKTCZLVZHRNWSGCOYVWOCGRFBSXYYMWPQTJLDSFXE");
    msg.start_man_id.assign("EPKNOVLJGOCSBJLBEBVWQIPBVVTICZYAKNBVCCGYPOSZUPKFFGCMIHUSXYUYMMRASDWFXGXRNYBFIBOIMIKKLNAYWPTAEXOMMUBCIMRPEMCFGKLLJXJDVOJQXCIZWERVTVNWJASLUCXXDNLVKMFTRPYUZQSQ");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.16795284825395096;
    tmp_msg_0.speed = 0.9050822063760287;
    tmp_msg_0.turbulence = 0.7999906021087684;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5813231034542546);
    msg.setSource(52978U);
    msg.setSourceEntity(241U);
    msg.setDestination(35710U);
    msg.setDestinationEntity(182U);
    msg.maneuver_id.assign("FTBVQMNOHLEDMUSFEXJSLLZRASKWLBEEEGEYSICDCEONFBPQHZWHMYDXRLGOULCWWVXJKTZMRQICVDDKHTQWAYZUAQMXOSPEWQNOLTLEVYVPUNW");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.9803848193983253;
    tmp_msg_0.lon = 0.46826935796722;
    tmp_msg_0.z = 0.428266601990426;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.radius = 0.3441004635131918;
    tmp_msg_0.duration = 28127U;
    tmp_msg_0.speed = 0.677902186281864;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.custom.assign("NYMPIBPFRGXRBOXTRIULEBLZJTKVCJNERDHIJPWNQRCASOICWNXKRKTTUGDCAUOKDRJADIBWVOOOHPSZZJEABGQGSLMHZLMAFPWBDINMORFFMQPHPPLDKGLQAXHYDW");
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
    msg.setTimeStamp(0.14886952842027545);
    msg.setSource(33096U);
    msg.setSourceEntity(103U);
    msg.setDestination(32515U);
    msg.setDestinationEntity(200U);
    msg.maneuver_id.assign("JCGCSNAPHYXJZIFWIBWJCUSQHVWVKBLKAAB");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 42336U;
    tmp_msg_0.rpm = 0.1256659725545809;
    tmp_msg_0.direction = 194U;
    tmp_msg_0.custom.assign("FWMJSWUQQTNWRIWSPFKVGBMJVSIGZSZUBJJVYDNTYN");
    msg.data.set(tmp_msg_0);
    IMC::WaterVelocity tmp_msg_1;
    tmp_msg_1.validity = 21U;
    tmp_msg_1.x = 0.5821767723148232;
    tmp_msg_1.y = 0.8373761240442338;
    tmp_msg_1.z = 0.6712292469469843;
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
    msg.setTimeStamp(0.5069101438061164);
    msg.setSource(3434U);
    msg.setSourceEntity(204U);
    msg.setDestination(56513U);
    msg.setDestinationEntity(183U);
    msg.maneuver_id.assign("FTHKSWWJSQVMOSDBJNBDOGTPAQSFCHUTOX");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 7856U;
    tmp_msg_0.flags = 30U;
    tmp_msg_0.lat = 0.6630105999389702;
    tmp_msg_0.lon = 0.41045821232211055;
    tmp_msg_0.start_z = 0.4430031213681399;
    tmp_msg_0.start_z_units = 13U;
    tmp_msg_0.end_z = 0.9077175584062339;
    tmp_msg_0.end_z_units = 16U;
    tmp_msg_0.radius = 0.8812169403341426;
    tmp_msg_0.speed = 0.06658479658464822;
    tmp_msg_0.speed_units = 25U;
    tmp_msg_0.custom.assign("ZIQFYZHTJVPIMVAOEEKQW");
    msg.data.set(tmp_msg_0);
    IMC::AcousticSystemsQuery tmp_msg_1;
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
    msg.setTimeStamp(0.7758549892783888);
    msg.setSource(32269U);
    msg.setSourceEntity(72U);
    msg.setDestination(13579U);
    msg.setDestinationEntity(10U);
    msg.source_man.assign("RWFBIOXMNGYQHHLOFKXCUYJSFQNZIAORMIOCODLVAGPZCVARLXQXWFEIHLZXRLDCZWOFHEYJUNBATARRHBTLTSYIJEIJZPXCUPCGMVVMTWBSKYKQYPWWZXYVMQVYUIDYTDFXQSSDWGFNUDANNP");
    msg.dest_man.assign("NWKDQNREYGSBMXAIZTKEBJSRVTEAYSZNFPAIUOFBVJXCXLSIKNKFLZKUUQHBURFMJXPBCJCJNOICPWDQBMDQNHORCUXKHDTIYEMEQCEZOLEEWOXAPXAQKJLGHJXUFHLYTCDPYTGSIWNJGZRFLZVNAPQWWDZSHAVIVLRGHTYFVIHYAMJTDCRO");
    msg.conditions.assign("ODXXDLKSJXHLOAPQCSJRFANIFIGQKVDHWYHCXBVJXZQVBXASKAFTJNNVGICPDPXN");

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
    msg.setTimeStamp(0.7641010685737205);
    msg.setSource(52780U);
    msg.setSourceEntity(105U);
    msg.setDestination(24266U);
    msg.setDestinationEntity(17U);
    msg.source_man.assign("WZOZEJWDETUOQQQCMDMYMLPSXOLHZNLEETZDIGDLUILWBFYHVSJIYFGBAMHTKDNIRZJVXVWPFRVARVATOOQCDGXOFNTBBLFCPHGNUCXFCTUPASRNVCQMBMZXHJCKPWEUTCOJMJSMLAADACLIYDJQYXGMHTYIHWGXSREAFUEFQSJZBNDZXVQQJADKBYNNIYRPYLQWURTXBVKRGUCBOWPUGKFEHIAIIWSVKO");
    msg.dest_man.assign("YCTRBJKGWPOHTVTNNMMFCXGUUDBVZGSJASFTSPWTWIPNSKRRCYPBWAOJZRNSFJPMZVGLLHDNLTZQKPMGYLYEMOWCZXXPFXXJSMUUIVZMKHHYXZNHNMOVIGXBWPFHZZVSNKMGOUQKTQQNBAMUEEVIHYFPFKEDQCDXKUITWEEDJQVDARWCQOVIH");
    msg.conditions.assign("YGHUBEPFXGJAIFTMTBXCSQRQAYEKJUWPOIGAXDHPDLNBNLURVSGBMLLWBKUKEDYRASIQRQCRYDKNPEHJTNBFCSDJYHUPEAEZTOVJQLNFWBOBY");

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
    msg.setTimeStamp(0.225872047250687);
    msg.setSource(24606U);
    msg.setSourceEntity(175U);
    msg.setDestination(7480U);
    msg.setDestinationEntity(124U);
    msg.source_man.assign("SBNVJYSQJTMVMKYMAIXHBPTGGDWPVAWOGRXCTXEMCLVQUBZJPVSLRVNOBTULZXJIFZRKXKTKNYZONVSC");
    msg.dest_man.assign("HQHKFTVMNFQMKLFYYNCNMND");
    msg.conditions.assign("DVFXGQCEVRKSTJWZINGDIIUHJDVTVNCSGSRCOTBDMWOMLCAFAAWFTHRAMDEXACRBKJTJWSLJZHWBEYHDHGZELCLPRXPYXXIEBYQPHYZEBVBWHDNUUOKLURIOJYXIFLPFTYMGSOKBXIRUBDLHLJMOZSLMBAKTVYXRFPNVNIMDRVAQWEQEHLAOCQTZYGC");
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 20U;
    tmp_msg_0.x = 61740U;
    tmp_msg_0.y = 48265U;
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
    msg.setTimeStamp(0.2616534744169142);
    msg.setSource(5327U);
    msg.setSourceEntity(9U);
    msg.setDestination(42029U);
    msg.setDestinationEntity(155U);
    msg.command = 226U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XFTTACRCWBZLOFZLPXMOVJKNEIXFHAHNKWBSELSKKNDDJQXITEVLIDGPTIUOBPEFODDTQSMCJXIZCKVNKHMYANUSMCTDFGCEFRIAGOCVWLJNWQSNEPA");
    tmp_msg_0.description.assign("XLMWJUBGCEEDAWNCJGXQLYYIKRJEZBDJSZLNZRTJPPCFNGBQWHHIBPJIVCSVXVHHEPRTOFBMROUYDHTRFFGVOYDNLMDO");
    tmp_msg_0.vnamespace.assign("BLSSLZVGLPWEZJCKVTJBHIJKYGHFWPJMUKRFTQMOKEJXRQQIYHCQWHVEQKUNQGNESLGVBQTLZIMVNNROUPZHRXCHTDLNASRXILJWGWCAUNPERDRAYPBIUGSMGPTKEOSCGFUNVYESKTOZDIRSIBJDCVZOOYKQIAEAHDHMVPBMUCBSFJNOLPLDT");
    tmp_msg_0.start_man_id.assign("HARWJODJMP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RUCHTVZNDFXBWMIFECHTLZCIQYTADOPVWAQTOPGZZQUUTGSMISCWYEIZQJNMRMPDXMOXFBTWLMXXVJBLTPURWOMKIHEQNJUUJWSKENJLSIULPLPSYXESFHGPIBYSEAKOTDBYH");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 6849U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6587916590640772;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5936765135783839;
    tmp_tmp_tmp_msg_0_0_0.z = 0.4452596307190094;
    tmp_tmp_tmp_msg_0_0_0.z_units = 189U;
    tmp_tmp_tmp_msg_0_0_0.duration = 35799U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.3797187391258414;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 115U;
    tmp_tmp_tmp_msg_0_0_0.type = 190U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.05258568412510256;
    tmp_tmp_tmp_msg_0_0_0.length = 0.7561851863374216;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.2932285869338107;
    tmp_tmp_tmp_msg_0_0_0.direction = 68U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ODEQGVRPBEOMMHIQLMRSHNRIVYLPLGYJEQSTLIWTMUTLVAWYMNMFZEKATYJTAEKLRIMZALHWWPFNAZXTDDQKQMGQIZWIBJKROSNENMXGJLBAOPODHNFYFZDACCFTOSZOPNAMXXYWBCTBHYCBKJOKABNDFJWDPXKRFYKVWHQFGEZCZGIRSLDXP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Voltage tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.7593494943693009;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::CloseSession tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sessid = 3053231536U;
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
    msg.setTimeStamp(0.3370162954459278);
    msg.setSource(53051U);
    msg.setSourceEntity(81U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(200U);
    msg.command = 197U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PGTYZAQZHTZHSSZRXMWDMMRVEYLMGSFIUKALYEQDDMQSXDNIKRLHQBJXFDFCYUKCQAYOHPJDFFPTXEFWWYKWTZXPLJYAJUGGINVMOLFGQTURSWSTOVLNJNCNZOQWMBKJWBDPUCSHHWWEXGKOU");
    tmp_msg_0.description.assign("JIUPILUZXLAYWMFMXRDINDLGOWZRORSNCGAWMYJALUCCQMDKLYGECBFIEZTSHJBRBIQENFPTVDPFLKWKEQQMIDODSE");
    tmp_msg_0.vnamespace.assign("RVFBMSCSXYUABYXELBFXBASETVPFSYTALPAHNUZSYJMTHVOGYYBCMPRHQKIQMOLDOTPBKTKCOIUHGUSORBUEFNMPWOUIRLXTQMWRVBQNNJZSNKDWUAZEKCJZNJXGPEIJYROZFRNGDCSNKOTQFPW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IYRKXILHEUZUFMYRXQCYNVZNQMHQGJVTWAKABUMHNCAEMTPTCDGRUQVIEIPBUVGXILBXDDP");
    tmp_tmp_msg_0_0.value.assign("EPPBSHOGLIENVSETKZQRZFDCQCJZOTMJRBLSQDNXORHHVVHKYCAAORLRGFUJLEYLXCJNFUBFESOYGLCVMIAMBMWXJEUDHSXFRQTPHZKGBCZBAKHNJMWLWBYAWPBVDOFDQPQKVZSUIPMYSJQAS");
    tmp_tmp_msg_0_0.type = 6U;
    tmp_tmp_msg_0_0.access = 30U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MJTQMIVYRDOSIVJOBCUKOASHPCAFEEWBEGZENBLZZZCIJYKRUQTRSYPGVIEXLDHZB");
    IMC::LeaderState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.group_name.assign("NZLIFQTHOAVFTYSMPVNOFNODG");
    tmp_tmp_msg_0_1.op = 89U;
    tmp_tmp_msg_0_1.lat = 0.3095999907142709;
    tmp_tmp_msg_0_1.lon = 0.5934519011753594;
    tmp_tmp_msg_0_1.height = 0.569968197792282;
    tmp_tmp_msg_0_1.x = 0.2538843473545944;
    tmp_tmp_msg_0_1.y = 0.37843411919896186;
    tmp_tmp_msg_0_1.z = 0.36235809405867225;
    tmp_tmp_msg_0_1.phi = 0.6781508108531905;
    tmp_tmp_msg_0_1.theta = 0.09670756390085344;
    tmp_tmp_msg_0_1.psi = 0.7032726047960474;
    tmp_tmp_msg_0_1.vx = 0.06226140263927882;
    tmp_tmp_msg_0_1.vy = 0.6378359196688628;
    tmp_tmp_msg_0_1.vz = 0.4171031593893999;
    tmp_tmp_msg_0_1.p = 0.14024927804285436;
    tmp_tmp_msg_0_1.q = 0.6515943677506061;
    tmp_tmp_msg_0_1.r = 0.9114361132068827;
    tmp_tmp_msg_0_1.svx = 0.4527551443280291;
    tmp_tmp_msg_0_1.svy = 0.2602074578357775;
    tmp_tmp_msg_0_1.svz = 0.19353971468652809;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::PH tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.50945480920585;
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
    msg.setTimeStamp(0.8097980773421392);
    msg.setSource(59713U);
    msg.setSourceEntity(185U);
    msg.setDestination(7146U);
    msg.setDestinationEntity(132U);
    msg.command = 115U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BBGLQIIHBDMKPAOTWUTIQFBTVOTPAHQUOIGWMZDKXVOZKOZRYVWYGGTRTSUFAOHTEKYHLEAVGSLHDKWDNXLQUCCYOULHRYTUHSAMCGLEHIFDSOFBTBXFKKNENVXXSKGMDVYOJWRSNLYUIJJVQIZIBORJJUNAMUFEWSPELSBPCJCCBKMVHXDNEYZZSFJMPRNRFYPQACFQXDWWGCZPJMPQXHZJKWLCQZNDMMZYWURGSVRXIJGVAEEQDFNITANXA");
    tmp_msg_0.description.assign("FOHFMUQUMTNZVBZWPMKPDIL");
    tmp_msg_0.vnamespace.assign("UHACGNXRRVPTBXVBOMKUIPETNXGULEGSMISLOLDJOQZFNONHYOBOGLAOGXPMTTRQCGJFLDJKLWZZXGZWTDERYIJFHTWMWAKFNPGRQDSSAIHZFYPBKINUNJBVSVLHMCCMQXQHYTCVPVESZBBCUDKEZNCWDOWBMRQYQXIVSEPAYACIOUHAZAHELUJWVFHL");
    tmp_msg_0.start_man_id.assign("USKMWVREWMQPYDHXSLNJYZUPINVWCSLQULQKRFKQZDXZHMKUZTGWVFHEKCFEQFFRLQRPIEJYEOQXRCIMPAAUNGYYUAATCIJSRGUGZNOMRNSXJFHLEIXUNHBCIAFZBWGKALQMCPWOEMYKDLBOPOMDTOJCSISENQNDHQTZ");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("CCBEHNWETPKHQLIYJGCKPQLUCJSSNNMWUOQFPLVOJQHDZXXGEVXVEQBBSZGTRFYGKRPDMFZDWDDDJKJUECSWNSGFYCMJSIEOPCBLBJFIYBXHKKBGRVXZWVYKAQTMSHIGFYSOOUNXBPUANUIRKAHOIZUWVNORRQXTNTERYSFVDQUDKPACMVDTORPLAQOZEAJPIHWAJZZGBQI");
    tmp_tmp_msg_0_0.dest_man.assign("OSEMNNXQPFIWZOWCFQBKUQTFEKOXMUPRCMSJPSDBOGGFVIODWAAWDVYRJGOKJRMRZKKBGNALVKZIQTJINIFGYLYWWFJEMD");
    tmp_tmp_msg_0_0.conditions.assign("MXKXIMRHBDTNICBJVSJZRCALQEYBCFWJDTWXTBSPEJTGHHHPAFKOVUFFQCEZEQGMSQWCMHIUDASAJAXUIYHMIWTDKOZOLKQDSMRWPVGRQMLUZFBVNCGBPULBPDREOJTZLUOBKQYVYAZNYPBBTUQZQNYOJFRPCESWHGNJYKFNHYREQAFMAWUTLFGNGNXPHLKRIMCYKIZDPVWLSLOCSXGKOCPVNUOVRVYSADK");
    IMC::AcousticLink tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.peer.assign("QETEBPEHWUWYRADRMIJCNUFDBHCZKLIKFTTPMGMRYDMBTTJKIPKKUSELDOZYVELCWEHKJMZDFUQGBNDOWZZXASBLOYRAJWZPWUFXXMJIVPGQCEMUZTSBJLSRZYGUEIZFENH");
    tmp_tmp_tmp_msg_0_0_0.rssi = 0.15756492910893838;
    tmp_tmp_tmp_msg_0_0_0.integrity = 16609U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::EstimatedState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.5901170535360712;
    tmp_tmp_msg_0_1.lon = 0.7244368511045456;
    tmp_tmp_msg_0_1.height = 0.007262082609944098;
    tmp_tmp_msg_0_1.x = 0.13281887705245976;
    tmp_tmp_msg_0_1.y = 0.5651261198286238;
    tmp_tmp_msg_0_1.z = 0.8107254515117154;
    tmp_tmp_msg_0_1.phi = 0.17402312094524253;
    tmp_tmp_msg_0_1.theta = 0.14101553039560666;
    tmp_tmp_msg_0_1.psi = 0.19926669658511464;
    tmp_tmp_msg_0_1.u = 0.38494092828473225;
    tmp_tmp_msg_0_1.v = 0.08949700310231978;
    tmp_tmp_msg_0_1.w = 0.7244236908023399;
    tmp_tmp_msg_0_1.vx = 0.013688138206947476;
    tmp_tmp_msg_0_1.vy = 0.28490727780754277;
    tmp_tmp_msg_0_1.vz = 0.9432182430583275;
    tmp_tmp_msg_0_1.p = 0.5439265328982316;
    tmp_tmp_msg_0_1.q = 0.72186497718675;
    tmp_tmp_msg_0_1.r = 0.1322279354568927;
    tmp_tmp_msg_0_1.depth = 0.5119444323043367;
    tmp_tmp_msg_0_1.alt = 0.3874728969301081;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Chlorophyll tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.473422833813533;
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
    msg.setTimeStamp(0.7180707879689641);
    msg.setSource(17451U);
    msg.setSourceEntity(205U);
    msg.setDestination(25575U);
    msg.setDestinationEntity(235U);
    msg.state = 248U;
    msg.plan_id.assign("HBVYFHDKAFGCMTZUCPKZPQBJQGZOSYHQOSTBLFMDIWRRARJYAPDYCCMXPDPSLMAJNOTWELTOHVEQMGWUOUZBQEJUIVPRMMWXQDKSHFWYJNVEBTLPGNUJKNFABCMAWYFRRGOCXXKEWKODUTJENSBYWZQXOAIEPSVGSGZCNCPWLHLMVMSPQASFTTOGZNKQHGJISNZKRRHVHIADUTCOFN");
    msg.comm_level = 99U;

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
    msg.setTimeStamp(0.2850647144016484);
    msg.setSource(51107U);
    msg.setSourceEntity(228U);
    msg.setDestination(43600U);
    msg.setDestinationEntity(244U);
    msg.state = 220U;
    msg.plan_id.assign("ERTUDKBEXTMLBRFESWAVTGISNNIHSAOHGQCMRDVMNDOPGQBXSWQUANZFSVTKDVPQWICEMDUXZNIQGPOINXOYBRCWHBXOAZFYHTNUSQLEFYLJQYVWHJZVISIJXPUTIVSFXBOPVLLEYBSHMAKZKXGDNKVIWJLARUYTOYRJGRKKOTUEPPDLPZEUUCLLBDXEOTATRZJRIKFAGBUVCKEMOYDBAZFLCAYWXZQMJJHPHKM");
    msg.comm_level = 177U;

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
    msg.setTimeStamp(0.029329874455758298);
    msg.setSource(59884U);
    msg.setSourceEntity(164U);
    msg.setDestination(38670U);
    msg.setDestinationEntity(249U);
    msg.state = 172U;
    msg.plan_id.assign("JMJTBSCVBGVCYGUGFHBZBUEYHHXJMGPAJSRSVLIIIGCLGFOMXHIQGJRSDAPAEUFXHWHJMIXSRMTAVFBNJPNUWLKDEDZOKAQJXKDVIQWHCNAOFLKFHKKRSYQJSPIPDOXFZOXCDBZMQJBCWMAVFEKAVCZNLNYCDYBZWLNUEDZUAHW");
    msg.comm_level = 112U;

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
    msg.setTimeStamp(0.24833043732809168);
    msg.setSource(30221U);
    msg.setSourceEntity(137U);
    msg.setDestination(24753U);
    msg.setDestinationEntity(253U);
    msg.type = 211U;
    msg.op = 96U;
    msg.request_id = 13834U;
    msg.plan_id.assign("SYZQROYYTOLEWUGMHGKIJLGCHVWCZOCMJAFNLNFOTUUSFSDKVWHOEOGXKKEKPHSGUNPKYFQZEOIOLIMDDVFCMXBSMNVKYLRPSUQLUXEVZPRJAWVCPLIUNIZTNZSIQRDBGXUXTKEIHFDBSXTTWPXIMYWTQVAJEIADJXSEHURWRQYM");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 41576U;
    tmp_msg_0.lat = 0.6308638109969412;
    tmp_msg_0.lon = 0.9585281133613068;
    tmp_msg_0.z = 0.5033761443565227;
    tmp_msg_0.z_units = 138U;
    tmp_msg_0.pitch = 0.47565947264491704;
    tmp_msg_0.amplitude = 0.9903814100972105;
    tmp_msg_0.duration = 32840U;
    tmp_msg_0.speed = 0.8344566997525452;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.radius = 0.4016180831492615;
    tmp_msg_0.direction = 47U;
    tmp_msg_0.custom.assign("NEKURHTYBLCQBJFXSWRMBIVDOOLSZVCXZRKPBKMZPPRNYHGCFWEBNKIKAZLVQWKUMEDQQDACNIDGOMFRRNAYHWCCULFHEHQCVCPFRGUPNWHXSJNZHQXKOFHUUKZOPXIAXFALBGGDQZYQCYNLGFMEJKMFUQTZBSJZAVT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RXZVHDHUNKJTSFLZQGOXFIEPAQIUMQSICJCYNSZSIKZEYJDGPQCJYRLTPJMNYVIPIOZGLHOXLCAMZXEDSPTZTLIGRDZGVSURBJWDHXWBPFXHQKVVEWNAAHULUITVMFWFDWVDNGZBULNMISHDLWCKFLBCYBSGPUQHOVEAYREJKYJCMJBOOQVWXAFPRMWTZOGYVOCKMXUCYSBRJETRDGFKEFRNPBNTTXOOKBARNPMA");

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
    msg.setTimeStamp(0.045534190940015096);
    msg.setSource(63560U);
    msg.setSourceEntity(0U);
    msg.setDestination(38780U);
    msg.setDestinationEntity(157U);
    msg.type = 168U;
    msg.op = 91U;
    msg.request_id = 23846U;
    msg.plan_id.assign("YGPOZEBCSEMZJNUJIOUJCKBOLG");
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 42U;
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IXTWOUUZSEIAFAJTO");
    tmp_tmp_msg_0_0.lat = 0.9502781270070276;
    tmp_tmp_msg_0_0.lon = 0.7844677320515974;
    tmp_tmp_msg_0_0.z = 0.8890601867863808;
    tmp_tmp_msg_0_0.z_units = 243U;
    tmp_msg_0.modems.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WYGVDNIMQTQHWCUOZBJOTRRCETVAIFDLKKPSGLOXSYDWSICEGXYKJGZVMFPLXLMBWCVNBFTQZOYYVUTQAJVSELRQVPOSEFKFKTFYJFLXKBSMYDNIMNKWOHRBIMJXJIGEOFJEUHXTLBCYUOQBIJWVTLMNRHUJAGHLIBWGLEQQTHHNGNCZDUXVPRGDMFZCQHWHISPKCAAUUDRH");

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
    msg.setTimeStamp(0.1819131552140001);
    msg.setSource(31725U);
    msg.setSourceEntity(247U);
    msg.setDestination(55285U);
    msg.setDestinationEntity(16U);
    msg.type = 244U;
    msg.op = 30U;
    msg.request_id = 26410U;
    msg.plan_id.assign("MJWDTOTYKOJPBXBKMJAQUINFQKMGGRRQEMUDGPZHOTIZHNEEEVONVKEPRLCMPVWULDVG");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.7676116237572591;
    tmp_msg_0.reason = 170U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GMFFZRPQQCJYGJXDTRTXFSMAHMPSEPXSCKVHHZVNHGEVDWNLBIYOBPDYVSKYMACTAVRXXMAFGXKQZXBOEJOFQTOXUZRYCMWOJLILHIBNURANHOSGIYGHFUXZDINKIILWLZEFIITQWOLLYGBZMVUDIBADQUTJXLFQNWLWEFKPEJDRJVCTAVKRJMNHYAOPWQJAMJOKDCWPZBETGTOW");

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
    msg.setTimeStamp(0.508090427561978);
    msg.setSource(39259U);
    msg.setSourceEntity(38U);
    msg.setDestination(35084U);
    msg.setDestinationEntity(56U);
    msg.plan_count = 7740U;
    msg.plan_size = 1985518721U;
    msg.change_time = 0.072672577837822;
    msg.change_sid = 28042U;
    msg.change_sname.assign("JKCCVWAUNCZODUFBILWDUUFHDSRNXVWGGEYGEOFHTEYZHHPEYCZWPBUGLSHE");
    const signed char tmp_msg_0[] = {-67, -113, -49, 61, 77, -24, 60, 9, 42, 87, 90, -22, -87, 11, 83, -94, -14, 39, -126, 29, 9, 108, -44, -113, 45, -126, -82, 111, -8, 105, -58, 57, 24, 58, 110, -11, -55, -63, -103, -88, -51, 28, -14, -111, 47, -115, 76, -96, 28, 90, -2, -96, -18, -70, -24, 99, 79, 40, -16, 13, -17, 115, -112, 115, 59, 24, 113, 98, -88, 65, 97, 42, 2, -69, -27, 121, -37, 93, -54, 126, -34, 120, 85, 72, 10, -2, 55, -119, 71, -81, -71, 26};
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
    msg.setTimeStamp(0.36136700770237007);
    msg.setSource(12049U);
    msg.setSourceEntity(187U);
    msg.setDestination(54892U);
    msg.setDestinationEntity(187U);
    msg.plan_count = 4836U;
    msg.plan_size = 1084960817U;
    msg.change_time = 0.2673146676293685;
    msg.change_sid = 47914U;
    msg.change_sname.assign("BHZGOKWUFVKOCOKCFTNQRCXGWMNOKGLZZYQACQQYWOGFULXPEBAAFSQJRTFVRWMSWJSBYDKELJZJHKDUDAETZNOPXPARSYEXGKYNSJXTEYUS");
    const signed char tmp_msg_0[] = {71, -106, -16, 47, 60, 0, 120, 111, -56, -53, 106, 100, 20, -113, -90, -10, 27, 126, 101, -55, -12, -81, -38, -49, 45, -21, -128, -27, 67, 102, 52, -97, 1, 13, -66, -53, 83, 7, -71, -128, -95, 53, 42, -104, 116, -65, -98, -37, 50, -50, 1, 91, 33, -97, 114, -69, 33, 33, 40, 93, -20, -51, 58, 120, -112, 106, 47, 92, -79, -7, -26, 55, 124, 0, -92, 98, 33, -34, -58, -45, -29, -47, -61, 89, 68, -70, -5, -9, 54, -77, 20, -88, -57, -90, 52, 46, 97, -10, 38, -89, -73};
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
    msg.setTimeStamp(0.396513335477626);
    msg.setSource(4374U);
    msg.setSourceEntity(56U);
    msg.setDestination(41669U);
    msg.setDestinationEntity(11U);
    msg.plan_count = 36028U;
    msg.plan_size = 507574157U;
    msg.change_time = 0.495886447439307;
    msg.change_sid = 26486U;
    msg.change_sname.assign("ZIULNTYUXDHRNLZCWJSCNGHDAYBPEWUNOBGSIQKGJTZXMGBJQLOHLUZFNSF");
    const signed char tmp_msg_0[] = {3, -32, -2, -44, -39, 82, -128, -31, -92, -7, 28, 97, -63, -38, -14, 8, -47, 82, -64, -24, -44, -118, -45, -59, -121, 13, 118, -7, -112, 101, -85, 86, -115, -31, -100, -36, 38, -38, -58, -98, 123, -83, -81, 99, 123, -79, 38, -18, 99, -40, -46, 24, -45, -50, -90, 21, -44, -24, -113, 111, -55, -128, 106, -26, -75, 41, 39, -75, -57, -101, -34, 2, 86, -115, 104, -38, -22, 93, -128, 63, 52, 70, -98, -3, 86, 12, 116, 41, 26, 74, -24, 24, -98, 8, -68, -41, 33};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QGUHXAGDUGPNEJEVNQTGTXEWPJIVYZPAZUPNONMLWYOHKCDYCUKPQJYAIZTSRZSAHQKELCSFDBZVBLLZAYXOISSYLVNFMGDIGEOQUBNAEIYXZMXUMRBBCQVDMTEXCZVDWWTHXAOJMLFBTWFLAACKMFQYUASKVQRJXSMCXOBVIPNOQWOJISPHKVEJUHMIGNBFSRWIFFLEUHDCJKNRURTLCFWDDKFKKORJYOXDYZJRWLNBH");
    tmp_msg_1.plan_size = 2077U;
    tmp_msg_1.change_time = 0.34248542437909;
    tmp_msg_1.change_sid = 61241U;
    tmp_msg_1.change_sname.assign("IFBHVIFWEQKUNOMKQXHRJPDYTUBLMIIPWYKIKBXBRCYPDSDCKNOTYBGHZCEMVEHPHWMLVLNPZLQZFHFBWNHLYWNREZDUMRRPTCJCNVJSXACUBXQAZEJFIOMDEOUDQNSCBGWSKQAPEKVLYDOFNGAGCEIZISDQNJCNWTFZOQSJADURXAJAUTHMLJIVXSHLMARLGYTTKEGQISQORXTWGGE");
    const signed char tmp_tmp_msg_1_0[] = {75, -70, -119, -24, -55, 118, 3, 85, 92, -65, -40, -106, -31, 45, -18, 72, 29, 9, 9, 59, 123, 70, -9, -58, 4, -106, 120, 29, -82, -63, 86, 105, 126, -6, -54, 112, 22, -20, -39, -79, 44, 15, 87, 27, -79, 29, -30, -97, -73, 29, -66, -116, 98, -24, -53, -4, 70, 86, -23, 58, 86, 111, -66, -35, 8, 25, 86, -10, 106, -92, 20, 38, 105, 73, -28, 43, 33, 10, 119, 107, 41, -117, 0, -85, 17, 56, 21, 65, -92, 65, 73, -10, 60, 106, 102, 5, -22, -85, 25, 79, 90, 29, 62, -82, -17, -103, 23, -116, 30, 70, -23, 111, 5, -22, -14, 33, 119, -22, -114, 100, -120, -116, -54, 60, 3, 38, 55, 103, -24, -14, 33, 94, 90, -71, 62, -44, -60, 59, -87, 35, -20, -17, -55, 47, -62, -23, 65, -64, -29, -10, -49, -70, -96, 5, 83, -61, 27, 114, -119, -23, 11, 51, 109, -70, -2, 114, 51, 57, -79, 86, -69, -39, 103, 67, -109, -125, -116, 42, -65, -114, -27, 34, -106, -128, -60, -15, 87, -103, 41, 37, -109, 107, 82, 87, -36, -14, 28, 108, 54, 30, -39, -2};
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
    msg.setTimeStamp(0.9587434267464326);
    msg.setSource(62067U);
    msg.setSourceEntity(42U);
    msg.setDestination(61524U);
    msg.setDestinationEntity(11U);
    msg.plan_id.assign("LFAKIDTZOGGCWSPIXKLBXCQYRZZSFHVGEABZZJQMBDFPYBAGNEETXCKDIZQAQWJLDXMBIJVVXORBMGOKWEWIAOVVHYXAIMPHQGSQFMUFMCOMNUFFYRABDSZLOSGKW");
    msg.plan_size = 32227U;
    msg.change_time = 0.9128703245954094;
    msg.change_sid = 47118U;
    msg.change_sname.assign("LWHUIGTVYFJUMSOAGNGPXVYOMTMFNZAKFENXAEFUPDNPSQLDTSBKCYXVIDJIYPROQFGNCVOCBVDIJQBHUZZBSOLTWNJJEIOQDUEGUXCJHSPOQRWQLYKSKGNACGVWTBUEZUJWRTDYKKXGYHQTKMGEMYSLWIFAGBLKC");
    const signed char tmp_msg_0[] = {23, -28, -27, 98, 4, -12, -121, -78, -86, 97, 51, 22, -32, -65, -102, -91, 96, -82, -90, -41, -8, -32, -94, -70, 30, -104, -103, -117, 45, -40, 31, -91, -78, -80, 85, 57, 36, 39, -60, -70, -47, -83, 118, 58, 16, 54, 124, -109, 119, 36, -40, 125, -78, 24, 60, 83, 125, -20, -61, -22, -108, 99, -117, 99, 64, 20, 123, 23, -68, -67, -100, -21, 115, 43, 52, 8, -6, 76, 45, -48, -45, -114, -55, 109, -119, -41, 46, -52, -83, -65, 65, -28, -70, -13, 76, 71, -111, -66, 22, -49, 53, 105, -121, -86, 101, -61, 99, -27, -73, -112, -117, 65, -40, 87, -13, 34, -52, -46, 91, 43, 72, -126, 98, -113, 14, -114, 124, -93, 116, -47, 77, -120, -33, 32, 67, 84, -8, -28, 76, 124, 110, -78, 108, 14, 115, 39, 70, -120, 44, -125, -85, -61, 122, 32, 53, -113, 79, -117, 31, 69, 70, 79, -118, 68, -125, -34, -52, 107, 19, -62, 68, -45, 62, 96, -65, -90, -76, -44, -38, 39, 27, -83, -92, -83, -40, 94, -8, -70, -10, 103, 91, -77, -72, -122, 10, 15, -23, 38};
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
    msg.setTimeStamp(0.22114420984861227);
    msg.setSource(32090U);
    msg.setSourceEntity(24U);
    msg.setDestination(45081U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("ADOZUDFFSWYFAAGSYRVBEOIQNRGPKYZIRBVUDMGWPJBBXYORAPPGYF");
    msg.plan_size = 58966U;
    msg.change_time = 0.6222693784535271;
    msg.change_sid = 24610U;
    msg.change_sname.assign("YNLLPCBTTSHAUTXAKWGQTLNEODJAREBWSLQYYHBGEDEMTXQIAHQCCIESQQVWNMWELSBZJMASZRVFKVRYFSKJGHCZHIVKRKZKUDOHMLZGGGJ");
    const signed char tmp_msg_0[] = {-67, 47, 95, 121, 121, 78, 80, 88, 123, -113, 114, -61, -51, 87, 29, -25, -19, 15, 109, 92, 55, 24, 114, -3, 78, -101, 124, 111, -51, 68, 9, 26, 40, 90, -60, 47, -59, 7, 97, -1, -17, 41, 99, 118, 64, -50, 96, 44, -75, 116, 31, -123, 21, 33, 79, 84, 119, 88, 26, -76, 120, 121, -111, 37, -118, -68, 48, -115, 75, -33, -107, 51, -41, -6, -86, 6, -76, -15, -102, 9, -22, 8, 76, 33, -76, -102, 114, 46, -103, 111, -33, -30, 32, -122, 108, 76, 87, -105, -51, 27, -125, 106, -9, 66, 49, 65, 18, 26, 9, 10, 106, 7, -88, -106, -5, 21, 126, 117, 52, 123, -127, 100, -9, -76, 91, 5, 18, -13, -14, 13, -64, -30, -51, 67, -123, 72, -24, -4, -2, -10, 84, 93, -101, -32, 47, 79, 104, 124};
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
    msg.setTimeStamp(0.18510194060004548);
    msg.setSource(9826U);
    msg.setSourceEntity(164U);
    msg.setDestination(42001U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("YMGSSYKNQUWKIEIHCZCCPHTDWFFATHYLLCQMXXCKLOJCVHIDFXZNOVOKNYNETRPMRDNTZKXONMTDDYUUGOQPGFKGBRZDIELMUREGXQVRJIDWKMGALUOALZPHFTSWQSYVHTWAN");
    msg.plan_size = 44225U;
    msg.change_time = 0.44813829093540103;
    msg.change_sid = 24242U;
    msg.change_sname.assign("JRSMMUJOKPZMJJDDENEMTCPGVWKLLRRZRZDSIOQWKCAPNHSPTOAIFW");
    const signed char tmp_msg_0[] = {17, -37, 52, 68, -70, -20, 32, 73, -90, 24, 84, -58, 9, 123, 23, 75, -81, 116, -91, -77, 36, 116, -125, -10, 85, 34, -59, 70, -96, -76, -5, -69, -70, -79, 51, 34, 10, 88, -90, 14, 70, 64, -47, 91, -1, 110, -34, -84, -6, 85, 82, -9, -16, -76, 51, -59, -37, -84, -112, 118, -36, 115, -26, -17, 34, 107, 102, -69, -26, -16, -60, 1, 72, -127, 10, 120, -92, -96, 113, -68, 18, 86, 89, 120, 59, 20, -63, -93, -52, -47, 24, -63, 1, -118, 11, 71, -10, -9, -21, 13, -26, 32, -108, -6, -91, 62, 54, -66, -113, 111, 119, -124, -37, -27, -50, 3, -26, 46, 46, -82, -49, -115, -2, -86, -67, -44, 32, 57, 26, -91, -45, 35, -117, 101, 53, -5, 51, 69, -117, 100, 113, 38, -85, 101};
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
    msg.setTimeStamp(0.6189696515881552);
    msg.setSource(18206U);
    msg.setSourceEntity(87U);
    msg.setDestination(60548U);
    msg.setDestinationEntity(201U);
    msg.type = 124U;
    msg.op = 221U;
    msg.request_id = 28716U;
    msg.plan_id.assign("BRJBKAIBVRBSKCORXMVXIEJWIFKNWT");
    msg.flags = 35324U;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VADZCGJKVLGAZIIVCMMSPSHFGRHKHNILSHAQFSXOXTMQMDZQQNVOVFYNKYJUJQWHULWTUULOQQJHEXCNLRLXEHFEDLKSDOCRNUSEZQCAJFTFTZMIKOZMJQFTMBUCKCWBMPVYMEOAODXHTLJALQHUUWBSWCEGYYZEGFXOCVRBZGBJCXRGWNRGPWRTFIGNTZKDEWJAPWNEFIOYYD");
    tmp_msg_0.sys_type = 150U;
    tmp_msg_0.owner = 60133U;
    tmp_msg_0.lat = 0.45241718376930107;
    tmp_msg_0.lon = 0.5318912752066198;
    tmp_msg_0.height = 0.8050777779477755;
    tmp_msg_0.services.assign("YKXPRCSJQGSRIXNPSBJVQAKGWHAIYFBWPABPTH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OKXFTCICGQZXEDNRRYUFWNTGFYTFMZFJVBADWHAPGLHKKREGWIVLQAOXNYPSDWVNECQWYWKYQTEZRSTTLXYUJXROHDRGWPATPGBUYOVUMVVDSTODCUVFACSXPCOVISLMJOMLZKBAQPRBKMVLYEJ");

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
    msg.setTimeStamp(0.15414559138102968);
    msg.setSource(11148U);
    msg.setSourceEntity(210U);
    msg.setDestination(29242U);
    msg.setDestinationEntity(63U);
    msg.type = 88U;
    msg.op = 58U;
    msg.request_id = 39867U;
    msg.plan_id.assign("EPPQPTRYPCSJKMILRTWIHQKXAYRUWYELWMZYPIQITOBZEGIVONLXQALSEUHRDEFTPWTAEMHPHMRGXXOORGWVXSKLULW");
    msg.flags = 62651U;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.7274963439450159;
    tmp_msg_0.units = 143U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IYNWGYWYDUPCGMFRUJTYOSMKCUKVMINAUNQBZQDMBDRRCTQNUZLWKBTNSQOEBXXJOEHZQHHZGUOQSUNDZVDVVFXBEDIRHRPNLHVGBMLADYYGLPPX");

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
    msg.setTimeStamp(0.41508792251301097);
    msg.setSource(53873U);
    msg.setSourceEntity(170U);
    msg.setDestination(36227U);
    msg.setDestinationEntity(55U);
    msg.type = 222U;
    msg.op = 128U;
    msg.request_id = 43157U;
    msg.plan_id.assign("YKWWZYAIAJFYMRPSEMWPKLFKLITJUEYDIFJSYZDJFTDKMLAUHQGUBURSZIQKWXPOFCNYQKRXQMSPPNNAUVZBSOJTRICMNLHEPQQUZLOENULRYBOTJLTTSWCORDSKANV");
    msg.flags = 34102U;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 134U;
    tmp_msg_0.error.assign("BWGXENTFIO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PGNGRIGGNHVAXZDMHDJOVYRQXYWFIMZRMTQACJAVPPCIBTAEZCDOBBHAILYUPXNWLKWFFUQSHJYVZEXYXHLSMEHJBSZHWFPRKIVGIKMYOCCWTRRDMGNILKFXAHVETSTGHTAQFRNCCKFSEJLDNKMHPUINKEQSVDMBUZYELEWUUBTDZUB");

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
    msg.setTimeStamp(0.16180266055559467);
    msg.setSource(2389U);
    msg.setSourceEntity(43U);
    msg.setDestination(23147U);
    msg.setDestinationEntity(120U);
    msg.state = 245U;
    msg.plan_id.assign("EJYUZSEGITIHRXVGXQEWBRLCAEZOOEWBCHZHAPUMUKJJZDDRGNNKVQSOTXWDFLMMODKFUTGLOFRNYBEHNOHHTHTJPEQJLAQNXTVUAZCGEFBIRKIWJESDSVYLYCMMVJKZWXQTIVNOGPYSTOMVDITXUISOXRZVOARGKMYWUNBANBDDQCAZUJZDWYBRFEQGXNLKPRTCLIAFYQSLFI");
    msg.plan_eta = 724966829;
    msg.plan_progress = 0.19773799426218808;
    msg.man_id.assign("UMBXBGQRLRALQIUHXEXVPWCBYKOSBKZNXASKASWPNBBZKJJVYKGCWVTNLESEFEZXFMUKYCRRXUOTDQIPWJPVFMMHIBZRELAOCQSDCXEHVPMAOJHYAYHCSCQVDIPOBUXSSGUZIIXEJNAOTQDYPUUAWSRKYBGJDBLFEUKNTJOQCPAFFIVWIENYMDAWRDNTGGYLLNQHMETQYZFZVQGKMNMDWVWSCGKLHRGZOPJOFIDWN");
    msg.man_type = 4677U;
    msg.man_eta = 745309739;
    msg.last_outcome = 10U;

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
    msg.setTimeStamp(0.1921106416855337);
    msg.setSource(55335U);
    msg.setSourceEntity(158U);
    msg.setDestination(38657U);
    msg.setDestinationEntity(200U);
    msg.state = 113U;
    msg.plan_id.assign("AWOJEBXVRHTAWVLWKRSRGBDUZMCKNCTLYGIFULAGRMDSSDQOFGILBGIPJJIUEEJNDQWTBXXGDVEHLHDSHKXNXHIENEYHTIWHIUVTWKVUKOPPMCFJIRWNFQQHBTVMWZCMBQGOBXPMNCBFJPOVILURNOTRMRXZCAZPAJKLECSZQCEUWYOYSZVZZAJKSQJEADDDHKQDLOGG");
    msg.plan_eta = 607203637;
    msg.plan_progress = 0.48714709491931696;
    msg.man_id.assign("OZWCIMEDEAZLXBMTLWVQDFCCJTBNVKZDSXNZYXVGXZVUTOHLKQRHSRZQVEWHSYEOUTHFICKWQSAHXTKMBREZOWJIGRNAJOSGRJMCPUQVPADIPYJEGCMPZDOGPFEIJHSZQLQUTSMYKIOISANNMNHYCPYFWDJLONKGUVEUSXDLFHDCCBPCWFHGGTGRKMPIBIEKNQATJFUTHDWRROMVYLFAVU");
    msg.man_type = 34383U;
    msg.man_eta = -1773269918;
    msg.last_outcome = 97U;

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
    msg.setTimeStamp(0.17511356188748606);
    msg.setSource(20669U);
    msg.setSourceEntity(50U);
    msg.setDestination(38995U);
    msg.setDestinationEntity(231U);
    msg.state = 166U;
    msg.plan_id.assign("VKECUJNYMKGIVUZWMRRUYERHTHICLYVHXWDIOISLEOWXLYJFLPZCZLLNHFDZDQDKVFJBCZQJ");
    msg.plan_eta = -1666376820;
    msg.plan_progress = 0.993092085941072;
    msg.man_id.assign("CIALFWUTDMOVYFDMAQQDGABTVVFBSYLDOLBHZQUZMEEJBNEXKXKCNYWOAXEFVIBHPHOLHIYMHTWXCGHVVNGTFMK");
    msg.man_type = 17888U;
    msg.man_eta = 345970836;
    msg.last_outcome = 52U;

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
    msg.setTimeStamp(0.672936393610408);
    msg.setSource(62891U);
    msg.setSourceEntity(102U);
    msg.setDestination(40863U);
    msg.setDestinationEntity(20U);
    msg.name.assign("WLGNKKJCIRCSUQDLHERHLWUJEPTYWZVEUGLZGBMHMNPVXRYRODXUMBROADCIDXQ");
    msg.value.assign("DRFEDHNLIPENPTJNVFDQZPOUVICAJPIOETFIQJTRIJNUYQKJQ");
    msg.type = 205U;
    msg.access = 11U;

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
    msg.setTimeStamp(0.5784581873542161);
    msg.setSource(13535U);
    msg.setSourceEntity(84U);
    msg.setDestination(26509U);
    msg.setDestinationEntity(251U);
    msg.name.assign("INJCARTAZDDIHPBZEBNSMEAKIKFFDXXTLRYMFWSGKRJCXIOYAKECZHCHPFMRLNTQQKZVJWFBCNALUGNJVUROBVKSHDVDCGQEEISLIJBOTVWUJYQYBMGSGQEUYUTMSWFBDHXOXEDBSJDWYAJBGPYOPCXKRVTZTCZOHTFFZMWR");
    msg.value.assign("CJRRCZYFQIU");
    msg.type = 158U;
    msg.access = 185U;

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
    msg.setTimeStamp(0.7239089511686009);
    msg.setSource(25397U);
    msg.setSourceEntity(185U);
    msg.setDestination(29180U);
    msg.setDestinationEntity(170U);
    msg.name.assign("VHZBRIYPWTGREYJXSLLDFNANAEYOSUBERWDPTOUTKDRTPVNMLIOKDFCCSAVFNVYRGWQGANWORBDNIYKOTWZZFWXFRUXQKAIYSZOQGKFUNCRXZHCIJJGUTNCYVAZLEMHJMYPVJNBNLMEUXEUDOIQAHJPGWZFLBXHDIMIQHBMLQRFXYPJEEKFKMUCTAKIIHPSLKUZPZBDFOOCVHGEWWMSSVQATJ");
    msg.value.assign("BUNXYAVMNDIZELZPDAJHWUPJQLQVFTCHEXMTBSNKGTGZMPEDYCBSMDXBYZLLMIIEMXPSGCNGWSWVOFATRNSBALPLNVTGZQKDERYDQJLFKMCFWETOBYBWGRHRBYWOHPVIEKBIUNAKNPPEJQZAAYUDMVQSHWZFAOFKZIVSESKGVADCYYDMYQQNUTMJUKOW");
    msg.type = 227U;
    msg.access = 177U;

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
    msg.setTimeStamp(0.43480321638347874);
    msg.setSource(54947U);
    msg.setSourceEntity(209U);
    msg.setDestination(31121U);
    msg.setDestinationEntity(129U);
    msg.cmd = 226U;
    msg.op = 222U;
    msg.plan_id.assign("EEGNEIFDZKKJHGXGJFLIARQFMPLMWBHTHYQIMTVUYCWPKBWNRRVDZOZNZAIVLLJITFKBVLZJDTPTLOMPUPBOEDTKGFNVOBSUMPUEYYMXANCJOJQFYYAJOZCSDPPQYNRSHVPJLSTJRGEKVR");
    msg.params.assign("ODKVJRYYMOXHWV");

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
    msg.setTimeStamp(0.45057940345932057);
    msg.setSource(48415U);
    msg.setSourceEntity(169U);
    msg.setDestination(4222U);
    msg.setDestinationEntity(67U);
    msg.cmd = 103U;
    msg.op = 244U;
    msg.plan_id.assign("BNVVIZAWAMIWBFRZOPAGHGUDPESQWALYYUCMZLMUIVXEOUGHKHPMQAULSSNDRPCUALLIBFAYPXMKCWDMODUOXGMFEQQEEVZCBNXLDHEEVKYQZQRRQNONOSYPFJXHRJNYMFQINVJBKAFD");
    msg.params.assign("SJKPOJNPGFQTLNEOSEZOURSLNNKFOMHTFKMKZWDAABCQOLJOFSGNC");

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
    msg.setTimeStamp(0.5978453411060681);
    msg.setSource(38816U);
    msg.setSourceEntity(58U);
    msg.setDestination(60710U);
    msg.setDestinationEntity(180U);
    msg.cmd = 240U;
    msg.op = 63U;
    msg.plan_id.assign("UHYVGVINYXWPMPQOWXYRJGGUJTAXNEBXBNTEHBAPITQJJAMCYGYFADLXKQDKIHWRRARMLEXTFDLLFMYIXQURCMZDUZMGSVHGYHAEJRCNWZSPVQIRNPSLTKJOYQAFKTCGUSGGJDIWZKJLMSONIFQWWYUFZMVZQXBMBHIPCOVDUNXUSURHCAVQLRPTODSBHFNCNZKDBKTQPMGIEALZLEJT");
    msg.params.assign("CYSBHIVEQYAURKROLMFOIBKFXMFKICETUGIOZSAJTDPYJLLRYSNFYOQPSWICGOUCMCNLPBAWCESVIETXIUVYWZSQGLZMPOBSQQZHUUPMPYVRNBPNQQUXDTZFEZVJZNWPWIOFGGYKXQQAKGTYGLAJTNKREIHAWAMXKJHOBAVEMBSZRDKZGMPFOZCLUGTRNHLRHDTBTLAHNLDNUXFMGFXCWBJ");

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
    msg.setTimeStamp(0.5386140189232949);
    msg.setSource(33468U);
    msg.setSourceEntity(64U);
    msg.setDestination(14391U);
    msg.setDestinationEntity(126U);
    msg.group_name.assign("LQYDPGFTBUIFJEUZYUNUKEUOPYEXGZYXCGOGAOKWNQXEBJZHIBFBVPWTHDTMFLWOGXANDVZIMYSMFRLLELGWCAFLCZTZHIEVYBWHWSPYFDVGNCRGIMLEBIKBASYROXVMQAUPRDO");
    msg.op = 66U;
    msg.lat = 0.6590900309818223;
    msg.lon = 0.32877224251937054;
    msg.height = 0.13529126063729413;
    msg.x = 0.5556147122395857;
    msg.y = 0.7034186645149044;
    msg.z = 0.23953860264557847;
    msg.phi = 0.9164499286577371;
    msg.theta = 0.4895238130870927;
    msg.psi = 0.7403369618502678;
    msg.vx = 0.1836217637610026;
    msg.vy = 0.9581542237344233;
    msg.vz = 0.4036847417688011;
    msg.p = 0.3671251787849593;
    msg.q = 0.07453158532353288;
    msg.r = 0.8171122641149571;
    msg.svx = 0.09266479722452692;
    msg.svy = 0.632970221656764;
    msg.svz = 0.7501793480577897;

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
    msg.setTimeStamp(0.3302987841909484);
    msg.setSource(16605U);
    msg.setSourceEntity(159U);
    msg.setDestination(27102U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("EAQLRLEAFZPADPZBSCSYZOCRINJDWDMIGHVKIPEWVQVWFLAHUQUPQGFURCMQHEQIUDB");
    msg.op = 238U;
    msg.lat = 0.3668201623609447;
    msg.lon = 0.02562399967294937;
    msg.height = 0.2320093646757485;
    msg.x = 0.6357742220228179;
    msg.y = 0.49644820351750796;
    msg.z = 0.7348996147835416;
    msg.phi = 0.4240752569968069;
    msg.theta = 0.18718137230007648;
    msg.psi = 0.5767026029382767;
    msg.vx = 0.5918842528299321;
    msg.vy = 0.20655701785694536;
    msg.vz = 0.9755524304568434;
    msg.p = 0.8600519201074749;
    msg.q = 0.7289450384672491;
    msg.r = 0.26292561106544565;
    msg.svx = 0.8966602483624526;
    msg.svy = 0.009618705654612203;
    msg.svz = 0.13646603833891835;

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
    msg.setTimeStamp(0.2892149324444939);
    msg.setSource(59030U);
    msg.setSourceEntity(46U);
    msg.setDestination(60634U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("NTABTIKJSCXXSSHKHYHPPEEVDWJVTA");
    msg.op = 173U;
    msg.lat = 0.889806749639263;
    msg.lon = 0.5976336835414988;
    msg.height = 0.9717258773344754;
    msg.x = 0.795938947342485;
    msg.y = 0.554641402549546;
    msg.z = 0.8849306942647478;
    msg.phi = 0.2444594724283553;
    msg.theta = 0.5982501808853307;
    msg.psi = 0.11749880777412114;
    msg.vx = 0.04559268072862088;
    msg.vy = 0.8940637130621155;
    msg.vz = 0.1112659564276205;
    msg.p = 0.07782539205719397;
    msg.q = 0.991436170892255;
    msg.r = 0.3490423309922729;
    msg.svx = 0.8994865336101253;
    msg.svy = 0.9484583148614546;
    msg.svz = 0.9128614822106931;

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
    msg.setTimeStamp(0.7476621915359448);
    msg.setSource(7081U);
    msg.setSourceEntity(129U);
    msg.setDestination(48446U);
    msg.setDestinationEntity(17U);
    msg.plan_id.assign("UXCZIVNPDKYZNDZHBEOAYMNUKDGHVYSIWBBOFMZSOQPXJOWRWLFZBBFVDCGVCPUMXDONCAJKKVFMJKGORZYKFBJDNIQOLBTTIHWAVRKPRZWLENHWATSPBNGMHFQFFRSCUITUDJSTLNHFOERLMLMZOHWXIEHYQQZGE");
    msg.type = 133U;
    msg.properties = 17U;
    msg.durations.assign("RSTZYWWLHNRZKIUUMGDMLWMXMUHTSVAYAUAFZXOIQFYDXISGKTNYVUXJMLSBZIIBENUURVKPFSVKPGSXOGVQOJDJNLCXLTSGJVKQWRNBRHBYQZESBQUCAPIAVXWAVVKEZRCIJTGDEFJLPZFFNSMBFWVIOCDJCGBHPCXNNMOUBTCLHTYEYUCCWKEXECYLKMFDPHMIQRHDTWQD");
    msg.distances.assign("JMAQMVTVGSPFDJHZJDALMEHWSDURJZTEQDMOUOOKZTEKIAEYNYAIGRDKOSIUIMTYIBGGPBMDKIEJNMRNXAPPSMXQQSKTWBAJCJRQPXFNLEATPCIBNOGRXROCTVCZZLCZHWHBTRXVKNFVCSLHYWUEIUDEBLLTHDXRWLXQHIRBS");
    msg.actions.assign("MDXITHMCPYMYVVZZILUVEVAARQTPUAHXRUWBPNKBNQSSLHQOIGYRGRFXUYJMCFFLQGSBVLTJWPBPOJMELBEPYFAPSMHOODGDEZCBEDK");
    msg.fuel.assign("ZUIWOIKDFWEIWJPTSLMYZZJBKXZWALLCOWDEQWKSGNJCFVRXYUGIHCZGGDAXUQKSBJHNAFCTGAFLLWVAEIBRLKLJATUIYNGPNSDGKKVUTXUNVBJRHXFVTNERKOHXZCENANDSVVDRUSWSHPB");

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
    msg.setTimeStamp(0.10144705120489805);
    msg.setSource(65161U);
    msg.setSourceEntity(217U);
    msg.setDestination(18098U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("FHZGLRUIDKNQEHLMUVXFCRYGWLFOCYYNEUBJXYPMZBBPOANTEQKAMAOEQPGHSQAEBKSQSLVLPQIRCTIWHDYKSWJOUKUMZOADJBIETJSKDCXTTYIHQUTGFLASBGHKREOCVJZOIUGTXXBOFLVUD");
    msg.type = 188U;
    msg.properties = 108U;
    msg.durations.assign("HRXSZEBFWFOFZOISZ");
    msg.distances.assign("FGTFCVBSWSYDHTCKKDZMPSDUYSRJJJIIQMGDWJGXNBGRQEIEREMOQWROHTFLOEAPAQLMYIZFRSSQVVGKDRZAANITRJMMUVNMQATVVBVBSVNOCHLPGYZZCJJXZTLDXAFNJPYNWHCGWNEXVHEWWBBAHNIXPFITLDYUUPKBWUBQPFIAPXUL");
    msg.actions.assign("MNIUODKBPMAIGEYPAOEWSQJJVPHNXGCJGSBWYTXFTUKTDZBXQBEUIZPBRGIRLURRHIEOGPVYPCTBTFZLBPFHZPDCUVULJNFMKJQLWMDMHSLJDERCTSHWVESXPKKGZQJEQNNZLMSDLZRFCGXEBMQDHWAOARHTYBIHENVHBKSWKQKZFQYXCEQWDHAAAUWLXQTVAZYOWMOOXJROLNYXDXP");
    msg.fuel.assign("MOXFKWYPQUYVWKWZOOJSAYDUUNSLGCMEZHTCQUBXFFBTZCMHTFGAHPXAOYLTOTPRZLELDZPPTEXYGWDDRRVSYLYCWJHLWJUQ");

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
    msg.setTimeStamp(0.7255259633570436);
    msg.setSource(21568U);
    msg.setSourceEntity(159U);
    msg.setDestination(62989U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("OLQRXYMFLVSWFUTKPGFZZXENKIYRMTOSUBTWDDTBKFLTKZDMWNPNNCKXAJVXUJPNVJPEXANGDZJIGBHKZOJJGUUGLRPQJBRIXCXFCBCBTEVHWUDAQHXZLBLHYTRMYGVKQSPFZTCLWMAOOOSF");
    msg.type = 83U;
    msg.properties = 135U;
    msg.durations.assign("SZOOGBHFVDLQTVMILOAZUQRDMLXXXGXUJTTANFWGTSOTROVYNVLUQBVSBKEOYPOHPGHJ");
    msg.distances.assign("KLXRECFCEJGJDWSBQVQMYAGYIXLBFOKZINUSBZPRROVJSQYQFGTFDVEFTXABPZSQXDFEUCWWAYZOOKYLZUIXPWIHJJJQMJ");
    msg.actions.assign("KKFOLDYSRZNAWGANPSEASLBXMDNVZFEWXEQUBGVUTVOPQWJBGWMQDLIHVPUDDRTZXRCPSPLTBHXAYZUERZPRFMXSXZTOHWORJJHELTXFOMHFHEZJDQIAVBXUVCMFINGLOYCQYWSCSJTELGNOKCEMMT");
    msg.fuel.assign("OQVWTSUNGXBFBFOWXIMPUHEOASTHSACABDGAZEFRFSSRPDBIRRJUIMLONCNLTEUEOLARYIXTOGUSBHCFFQDRNPAPGKWQYWRLEJEVCHVWEYZZGZVYBWVYKYSMCTHJVNAKQERXEFHXGQTMZLKUCNJQYCBYLYZMIHNSXMDNDVRA");

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
    msg.setTimeStamp(0.45800037458386855);
    msg.setSource(26948U);
    msg.setSourceEntity(38U);
    msg.setDestination(524U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.3928858840598436;
    msg.lon = 0.3615189812616679;
    msg.depth = 0.7312087179148372;
    msg.roll = 0.5610404619549029;
    msg.pitch = 0.661512827803617;
    msg.yaw = 0.8042655964427223;
    msg.rcp_time = 0.277940995085602;
    msg.sid.assign("YOAJBPHUGUKLGBDBGHAZWDUWEADYICPAGDXJLVZGSERPSKIVKXUXLYFKYXVORQLUBTODMTPXSMPQMBZCJWBRLHHMIVNWCLMURVOVHKALPYJFRFQLKFSDOADKMHQDRLYNIWIBTGFISOEHEWJVCZGJHQVNVHSZCTXDRJIEZS");
    msg.s_type = 89U;

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
    msg.setTimeStamp(0.19677919669238608);
    msg.setSource(16056U);
    msg.setSourceEntity(97U);
    msg.setDestination(51587U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.7330904541667959;
    msg.lon = 0.5220050534333811;
    msg.depth = 0.44547078828712106;
    msg.roll = 0.9815707229269727;
    msg.pitch = 0.13279431516698847;
    msg.yaw = 0.2327156578060109;
    msg.rcp_time = 0.7016768451481543;
    msg.sid.assign("JBZZQIYNHUCOFXWSKYHAEYHXBVVNQCOVBIREZEQUFAAH");
    msg.s_type = 220U;

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
    msg.setTimeStamp(0.15634619997491306);
    msg.setSource(44091U);
    msg.setSourceEntity(239U);
    msg.setDestination(3160U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.24720394797163658;
    msg.lon = 0.5143419247702117;
    msg.depth = 0.15871606816875905;
    msg.roll = 0.790590704267534;
    msg.pitch = 0.7678365881786539;
    msg.yaw = 0.8305267588926813;
    msg.rcp_time = 0.6638064720330799;
    msg.sid.assign("MKCPOGQSUYZZPDMLSPRVRGUCGFFEDSQMDKWBOLVHLGKUIGHIXWOSBMNVAOGMQCVIBMGZIMLZXWYIVNQRPJBKWUNYOTRTANEJYJNWAPAKXEDOFFBFXIRILWWOTBLXRCTTHJEXEBTQHDQDCCGHVJZWDYTZHYVJUSLPIKEDXAUXASTKFYXHZANVYNNUQHQJSTHUIQOPAMRETEJWPZZQVCKBDVJCGN");
    msg.s_type = 51U;

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
    msg.setTimeStamp(0.812831048275222);
    msg.setSource(10126U);
    msg.setSourceEntity(123U);
    msg.setDestination(28359U);
    msg.setDestinationEntity(28U);
    msg.id.assign("SOZGQWCXEHXVSIJEPIJYTEXHIRGQWZVCLDSBRMAYURKSNONJQVLTFHOTLYCDPXPZAEMGTFNXTXIWNLVMGOAILJCQNZGUUFPKOUMNHONZSCPZIBPINCTWKHSVKYWBZJKQLGMVZFBCYZJNYBSTVAPXHTUAJETKLXODBCRYMEFVBHPAKIPFJKHQ");
    msg.sensor_class.assign("BBRIXRUGEVAHVVTUCTOUCDWTWCDRBDSVWNIZDWRDZXTNBYWBLWXGKMAKQSBLFNFSJYKHSUHYEJZBFFNYXITQIEXCZMETPVIGNJNHLJRVXJKGCNRPALUQZQHFKGZKSMMYFMYDYFYPPKRPIMEHUGOMPIGERBDEWJUPVSLEAIHQXJCXACQBVTAGLOHFQDTOBZJOZKMYCEYTRL");
    msg.lat = 0.8473660691705659;
    msg.lon = 0.9723018514591203;
    msg.alt = 0.8613483598598077;
    msg.heading = 0.10059584619501549;
    msg.data.assign("BQLTKPWCUDILTYXQVESFVAYEFJCVNBHVGRHOKGQJOUCRMRLMYREEOCWCBPBFICWSBUGYGBPJWMGZDUQQNJFXJDTKRDKTHNOOLOOLVLESXIYZJZMIPMOZCUGWFHDMFSXVEMYJIUHVQIFZURSKPFRBPSTZGJAHSVKAUM");

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
    msg.setTimeStamp(0.7262557455922873);
    msg.setSource(1165U);
    msg.setSourceEntity(145U);
    msg.setDestination(47460U);
    msg.setDestinationEntity(244U);
    msg.id.assign("NCUYRWZNAGUZRXKLOEWNQSBMAFUXXBYNGHMOPUNNRFSMKCIQRIYDJLZOAUQYVFIENVHLBFBROJPLKKPLMMCQXQIVVUMZOTZTQGSAWTSUZCGXDKAANSLHHWKBCBKESIDFJHPLOXYGEEHASDXDSRJHFWRICYFOSPVBBJHAYDYOJEIGTNGBLJBLDZUCQCZGPTEKWPMUTZZOVJMUKTXWDVNCVXQFDKQHIRGLATQYEWIFODCW");
    msg.sensor_class.assign("RHJUCDYWHPCR");
    msg.lat = 0.362500627776707;
    msg.lon = 0.6958979374716179;
    msg.alt = 0.052688243777224586;
    msg.heading = 0.3224161735950112;
    msg.data.assign("KGUTPXZEYUXQPACQAFLOXPVVWRANVJSHEHLFWZGCUXJNHKYORRDPDDBJKULYTFUVNIQROLIHGET");

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
    msg.setTimeStamp(0.43985092960594485);
    msg.setSource(9250U);
    msg.setSourceEntity(127U);
    msg.setDestination(36177U);
    msg.setDestinationEntity(31U);
    msg.id.assign("MFMGMATQZKMERKWZRSJKJ");
    msg.sensor_class.assign("GNHJWQCFUSWBDKNBXGVBYWUYQDCWAGLJPSPSQCABVPQXTHVPSXZEYALGRVUJLHQGFEXINNJBLJDUFDDEAZFMNDBNJGOERZZMTQVKUCLFVUYYDRHRHGEHUCVWPYKTTVGEMHZXTYQEPQIGAFXNFHCI");
    msg.lat = 0.5799451048100009;
    msg.lon = 0.3704147750248292;
    msg.alt = 0.3427967816439975;
    msg.heading = 0.3062531436476289;
    msg.data.assign("JLFOAMLSUKPTZKNYMNWDRJVDBYZAPGCLLEKALPLRBGOMSEAOYIZBNOPASXXOAHGYCIERPQGEESJENNWELIQMFDHGVOMHCRDKIZNAKCGZGLTKZFRTAQXBMQYUSCDTVNMGRBMGLQQRCUSBUUQFVFRXBIKRWHUQYPFAYTDVSQTYCJBYFVUJOJWSHZHOWXPOWWUJTVKXNXATSESEIFNPFBC");

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
    msg.setTimeStamp(0.5822718354157229);
    msg.setSource(13531U);
    msg.setSourceEntity(57U);
    msg.setDestination(25777U);
    msg.setDestinationEntity(33U);
    msg.id.assign("HSTJBAIWRWXKXGNOVVBLZYBWGQYRDZLKAISRPFPOTLHHQMBJWXBYRVKEQCUMXOPT");

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
    msg.setTimeStamp(0.43170628332034244);
    msg.setSource(65352U);
    msg.setSourceEntity(93U);
    msg.setDestination(46725U);
    msg.setDestinationEntity(45U);
    msg.id.assign("NJLCYEBORZIOTMVDJIXKMPWNPYZH");

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
    msg.setTimeStamp(0.48619196085980954);
    msg.setSource(2334U);
    msg.setSourceEntity(69U);
    msg.setDestination(9082U);
    msg.setDestinationEntity(73U);
    msg.id.assign("ZOHTWJRLUVZJDHRCZOKXJODIFSDWQSLBBXPTXRPHJBROUTWNHVEMARXPCSXYDRYEALWUGUZKNNTEHDJZOJFSMNBFEIBMQUFKCWXVHLKUGTLAFBDATZGZVIMFVDIPUSACQKVUIGFYCMCOSNVSPJCKSRMWXAGJJLEVVWATKEABOHQWMYMNKMPSWPGQEXLVXGN");

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
    msg.setTimeStamp(0.9081810961357626);
    msg.setSource(63739U);
    msg.setSourceEntity(104U);
    msg.setDestination(15628U);
    msg.setDestinationEntity(248U);
    msg.id.assign("DYMBSYJDZPQASFKQJPIJEEFDSRHNJELTLXGAWJNGTJWKEBZRDPAPZUINXUSOEUOBFPMUVCTHRVYCOFXAPKZPYNLMTACQQYWMXXCMH");
    msg.feature_type = 235U;
    msg.rgb_red = 164U;
    msg.rgb_green = 127U;
    msg.rgb_blue = 82U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.826703390822301;
    tmp_msg_0.lon = 0.02200763960797314;
    tmp_msg_0.alt = 0.06542544591536881;
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
    msg.setTimeStamp(0.13816818764711047);
    msg.setSource(11361U);
    msg.setSourceEntity(110U);
    msg.setDestination(59131U);
    msg.setDestinationEntity(79U);
    msg.id.assign("EMIMCNTJZHDJUCGGEBVWPFLFFWUCQKDKONARSAOTZIMFVJJ");
    msg.feature_type = 149U;
    msg.rgb_red = 183U;
    msg.rgb_green = 159U;
    msg.rgb_blue = 152U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8879444611764713;
    tmp_msg_0.lon = 0.5046639630113433;
    tmp_msg_0.alt = 0.6926063648353995;
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
    msg.setTimeStamp(0.7485455447975117);
    msg.setSource(10587U);
    msg.setSourceEntity(175U);
    msg.setDestination(32983U);
    msg.setDestinationEntity(226U);
    msg.id.assign("TBTSVVUWUSRXRLQZHGLXZWEDSORTBQCGDCEZIEJOTKFHRJLANIRWWFXSLJVLOGRIZCSKYOFDRLH");
    msg.feature_type = 70U;
    msg.rgb_red = 134U;
    msg.rgb_green = 103U;
    msg.rgb_blue = 75U;

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
    msg.setTimeStamp(0.09510331590392496);
    msg.setSource(29071U);
    msg.setSourceEntity(89U);
    msg.setDestination(36518U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.19498192778834356;
    msg.lon = 0.43655741982492446;
    msg.alt = 0.6523569311450503;

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
    msg.setTimeStamp(0.0033375760845317792);
    msg.setSource(49552U);
    msg.setSourceEntity(248U);
    msg.setDestination(58456U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.1919204677154197;
    msg.lon = 0.8577834795049117;
    msg.alt = 0.8313238338876161;

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
    msg.setTimeStamp(0.29504940296437754);
    msg.setSource(32250U);
    msg.setSourceEntity(133U);
    msg.setDestination(37750U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.0017882708974118477;
    msg.lon = 0.7154925103441451;
    msg.alt = 0.9732346655121086;

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
    msg.setTimeStamp(0.5247358742579866);
    msg.setSource(32733U);
    msg.setSourceEntity(234U);
    msg.setDestination(38080U);
    msg.setDestinationEntity(236U);
    msg.type = 183U;
    msg.id.assign("QYXMJKNDTNOPHJIVWPUVTBCNUDJVMPGSAEIHSMQKLXQZVXNIVTUNPURTYBNWOFZEGCRZRBOWCIRLSTAZPIRTADBHEGOFJOLYXJPRQMGWHBXBEKQSSXZGGKWIQMZMXWJBTCWVOBMFVGWIXXWTKECPEYHWLDYQTAMOEDRK");
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.7790095801693065);
    msg.setSource(953U);
    msg.setSourceEntity(157U);
    msg.setDestination(28310U);
    msg.setDestinationEntity(180U);
    msg.type = 19U;
    msg.id.assign("BJDLXNRSFJZHOGLRMKJQZJASXBBVTMBQTTGGAVWWZZBAZLWSXBUGCTUNUEAJCKDHBHHAPYBUTDQBQYFAEDKRWIEEQBOKVUJSNNWTCXGNSVNFKHMZUPCOMCTYDWKPDEWGROMVIZRXJROQCWKFCLVVKLKXNIXWDQISWXQFPHLFK");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 177U;
    tmp_msg_0.eta = 38597U;
    tmp_msg_0.info.assign("AQFLBDIMVXPLEZIQKKG");
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
    msg.setTimeStamp(0.3925122700625643);
    msg.setSource(13207U);
    msg.setSourceEntity(194U);
    msg.setDestination(32169U);
    msg.setDestinationEntity(213U);
    msg.type = 136U;
    msg.id.assign("ZVYIFXYSKNTLLODAMGKPMYCXQJYQJHGQHMHG");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 69U;
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
    msg.setTimeStamp(0.19408056177235145);
    msg.setSource(19862U);
    msg.setSourceEntity(15U);
    msg.setDestination(40522U);
    msg.setDestinationEntity(100U);
    msg.localname.assign("KVWYGJNEJIFBSYZGZLIOMKARDTHSELQVVVSCQRSCHQTTZOBQUWFFVCDJEOTEABXCVLVGXLJGBYNHGGPDRWMDNDYHHUBRI");

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
    msg.setTimeStamp(0.5958902075155995);
    msg.setSource(45732U);
    msg.setSourceEntity(57U);
    msg.setDestination(3000U);
    msg.setDestinationEntity(84U);
    msg.localname.assign("LPWWVQYLJXXRBIMBDDXGERZFWBGLTMAZOBVCKJFNVCYLYLYPPKHEBTPAZMEBRCKGF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WUKOWADTUQAQALNFANGJNGEBMZEEJSQMZSUBYNXYHPIS");
    tmp_msg_0.sys_type = 131U;
    tmp_msg_0.owner = 44803U;
    tmp_msg_0.lat = 0.708199652588861;
    tmp_msg_0.lon = 0.4405161886160812;
    tmp_msg_0.height = 0.6458086231477942;
    tmp_msg_0.services.assign("MWOADZGJHLEFNFSUKTQTFOHSFNGYBAXNLKTVITMRRCWETTENDSYKJFARDXPEUNMGXCWLYCVQVAOWJQXBRKZPQKSRFRUAGTWKSHBDMISVOQGCELPITURYVMUFXYAHDCAXPHKFCEODXUVYRQWPCOFUPBAKRQLSUIRJZQZYICXEDGZBGFVBVGPJBPKNNOPYAZAIDHWNZOWMCUHTMHUSJEQZDLMLYQGJNOBEJSYIIWLDBVVXJBCOLPHGJZ");
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
    msg.setTimeStamp(0.8988612772419965);
    msg.setSource(36475U);
    msg.setSourceEntity(42U);
    msg.setDestination(40294U);
    msg.setDestinationEntity(198U);
    msg.localname.assign("BIGSZWLUCWQLDQFYCXXDSGURHQICDRTOWHHGGVAAOSZWAJSLIETOXZJEUYOYIMNPGRVNBPBHXSIIJQURPVTEARFVLRJMBPLTMSWZCHXEUMYJDSONMEAIKSPSKYJWNMMEENUKTCXPXFCDDDWLHXDKKVAZHMQQFCUJWXLWSBVUYOJZCFVZTFKKYBNOBEYGMUPVNGKHUVNFCQEMEAKZOCPXHNQBLBRPDFJGOYITADLGJLB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KDLEJCSQREIPMRZWUUUGYMCBBAGFOOKDHIGNVDZNCVYLQAANXUYFMWGLZZLQHVIQKANVGAFVNZUXNOPPBRGXZZMYTETH");
    tmp_msg_0.sys_type = 109U;
    tmp_msg_0.owner = 13056U;
    tmp_msg_0.lat = 0.9010763691216112;
    tmp_msg_0.lon = 0.030653164199806016;
    tmp_msg_0.height = 0.08099563964389611;
    tmp_msg_0.services.assign("ERMAVBFLCWFSANNTGRNIZJAFRNZEEDFHZSQETBGGPQGCSLJVQXQWPLPNGSPFSXCJQCIMZCFWDLMSTMHBTQOWMRKSUCJJHJPGLIPKCLBXSWTIUDTZNUCUVIYMTUKNTQYBDORFBPEURZFHYOYXPATEPYDHHODIRSKHXEAJHNFYOKVLRDQWYIMRAU");
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
    msg.setTimeStamp(0.7407591066519834);
    msg.setSource(59135U);
    msg.setSourceEntity(101U);
    msg.setDestination(53174U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("CKLOINVZAFJPSAGXZDQHINHYAPLHYIGJLGUSSGZTNRCRTZQROBYKVLEDMASKMEAQCOXIFENUQOCIUMEBFDGMRIMIYVGRGWBZMJVWMYKSWCNQTNVDEZNUUFUNNXTPHBJATPHSEBSJEMLJUFBUJFITYFGDPXVELWLJJNWZKDV");
    msg.predicate.assign("SBZGZWTWEIGALJQVUNSWYBWTYVSCPERZVHBCUOTAWDZKLNBWUELQBLPLQESIJMVXLATJHFQSMWPXJFKXRCDNDXZFAOPXKRCKMXMGJDREJLKHOKHHETIADBOXOGHVKSHFWYNNZCJOQVNDYRZPDUEGE");
    msg.attributes.assign("NCBSSERJTWQMTBJIIRUGIJQPNHBAAIFOLEXUAZKUVTZSDXMFJNXU");

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
    msg.setTimeStamp(0.471765507074443);
    msg.setSource(56711U);
    msg.setSourceEntity(28U);
    msg.setDestination(54104U);
    msg.setDestinationEntity(65U);
    msg.timeline.assign("JJRJERBHKWFEGOESMDYHCYKNPKNAFGUZBTCXKXIFDTPJWVYJLZZLADJKSFCVOAQOXALXZCYUBUMIFRITIEVPAWAUGUADWBIQQYRVUWLCISYEPBODVNUBWZEWUNYNXTHAOMKHSGDKDLNHRJGDBRWSCHJHWBKMCEPPQKUSMLOLYNSNBICLOTVORTRPRZGLDKIEJFAXETMOMXQWMFXTVZQFMGTGVTHNSXHZCGGPF");
    msg.predicate.assign("ZXGEFYUATZQHKCVGNWIBVNFODMUKQERYBMGTGYIOJRBLYCWFGERERIPVKTVKSZDXMAGLRRUCJSDGNTZYCUMCQSWYTQBXJJJDNQRPOFYDOZP");
    msg.attributes.assign("CNLBZALALEURHIMBZEHASKACXOOMYHWTDKBIHCGBFGQEUMOPXIQRRCWYJOVFDNBAWJYSVDSXMNFVILUMFNSCWKGGLDBMZMAZWTTTNFOIKDAOSUFJCZGUZRPUK");

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
    msg.setTimeStamp(0.9439225113979592);
    msg.setSource(42375U);
    msg.setSourceEntity(142U);
    msg.setDestination(5918U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("UZZACDOJJKVOPZDPQIPHAXPMMSGEDPDRGRIYXGTVWVNLWDSSTQBJJCATFFLKSODXHLYIBKFCIZMOUQTEFJDUOQTJOLFWJCNBSEYTYYPJEYUKMMQNJADIWFVUHR");
    msg.predicate.assign("HXPCMMLWGQYNTOBRUUFWYEUVLRZHNIAWAHTTJWQFZUEBUFOYMGVUNOCFLQSKKJZACZXOIHHLJGARGHGICDNWMXFLBENRKRPNEZGTLFNXCBPJSMOXAWEXVQKPYZEBKYHJATWVYDGCNEBDBYQAKRBQTTJDMSVUOMRDIMXVCEJSVDZIQKLXNFGOKCMUDCHOOIPNRSFQJPPRDBITHQALEWWFTDYLUIPYMPIYQHZSSXKDVBACPSAWUXSJKORF");
    msg.attributes.assign("JAMYESBDRANNRKWCHCKTPFAXRMPKYJOFMLKSBPGNSNJYPEDILHCTBFMWETLGTHMLOQKZUEVMGFIPUUEZEKEMKXYWSRVJXAOXOYDNGDWVJ");

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
    msg.setTimeStamp(0.5413085728590337);
    msg.setSource(28736U);
    msg.setSourceEntity(29U);
    msg.setDestination(787U);
    msg.setDestinationEntity(232U);
    msg.command = 79U;
    msg.goal_id.assign("YXAVOUGZRRTHSJFCKMDAHZXVLFNYITPBOFDWVSAKDFLSWNLYYSZFUXAIFNQPGAQIQBMSKUVECQXJWBARBSHFRMEKVPEQDMBWUQEZLCDJBRORXKAOJUIBTGHZRSGCYUTMTPDYNYZCDWTPYXHPVZSBWEEKXXJZUNAMGHPMKSFCRLCQGLMVQTOIIMVAWUTTDMLWIGCPOJBLNSDENOQGJUYHI");
    msg.goal_xml.assign("SJDWHEEVIUDUJBZNAJHWMEYQMVFYMXNDZGTZJNYPXRSQDFTRFPNBABKAKQVDCLUPCMVNIBLKZQRTPUTXOJMWZVIBOWYAVQALGLRLCUGAQ");

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
    msg.setTimeStamp(0.5158782690117757);
    msg.setSource(19794U);
    msg.setSourceEntity(190U);
    msg.setDestination(13255U);
    msg.setDestinationEntity(133U);
    msg.command = 234U;
    msg.goal_id.assign("BHWLNLFHFPNGOLMQTMQSDWFEGUVCAQYNQKTIYCFVYIKOEEWBVMRFZUVNEDNBIWUJMEIXTZTAPSTGMAAXYQSDEVPVRMMRPZYUXBMKWKBPMIZGIJXJVOORSCHBAZHPHRYXLCFLHPB");
    msg.goal_xml.assign("AZTEZJCSEIUNBBBTSDDHOHUVVGSIZBUVSVZVHOEWQELGYJKIYTQOLKPNXUOYQUAESKXGTJBGSXO");

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
    msg.setTimeStamp(0.8034091008626615);
    msg.setSource(23276U);
    msg.setSourceEntity(240U);
    msg.setDestination(38663U);
    msg.setDestinationEntity(178U);
    msg.command = 247U;
    msg.goal_id.assign("EJOQNUBISEFZZJSDAORHPXSTTHYKCUAZWMBDYVLJCURXIMQFOSOJSMKVWQMKUPLHSGZRPKYXWBXSVCWVUXEGOZZTQCRPDALZNFDFEGXBBPCGFLFYEANMIOIOFMRASJYXYCIHSKIQLGKLBAUIWNDWTITHLKBFAKRJATVARPDJJBCNYGMTDNXNRGQILWOVWAOXWJVYYQHPPZGZDGDMFDHHHGCUBEWEREUYNHUQEOBVTCEKMRNQ");
    msg.goal_xml.assign("UWTSHTVPQDDXNSAQTTYNXHBZKSDOTFYJPMNPKCRNRQZGZZXNJEJGTUQDODQGYLUDUHWKIRVMBZJLGKHAMJBIIHACJOIWMNTBURCBJEFLYWDXWLBKTOOZPMAMXPUWLVQSERMQPYGIYWNFECHTUCOQZOVEJYLAI");

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
    msg.setTimeStamp(0.7770854269245817);
    msg.setSource(5953U);
    msg.setSourceEntity(202U);
    msg.setDestination(64321U);
    msg.setDestinationEntity(97U);
    msg.op = 19U;
    msg.goal_id.assign("DXUNBSVEMJKLCRZVDLMUHHICDKWZVGAGPWPMEQGVQFBIYWFQEYXEFCVGQUXYXBYAXOHFSJRYGSCKQOJKFZIDSUEAYSCLTWXIDCWSBOHIKYUNJGUNIIACTANPONHHHYTWUWEAICPSIMOVOTWHOKLOAKUERBNTUYRZQOZKEVBQJDJLTWEMRBERGCNTRKLDPNPXMARZIPGTXZMVVDABTZWLHFPLPKJMZJJSBGCDVSFGOZPSRXFYJFNDQLTUBN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NQZRWXFZBNHNCWMGZVRQPDPDCMHNUJJQIFFZQBPDZOCSLKYUEXFOOZOLVCYQWTPUYVHULIJFIEWEDXVTMYDEVESXHRYLGGADIPYUBCUNWXAGFKQKJHGNBLEWBECHDREZHNUHCOKPKSTCJBSTXTMVMYXTUYLPVRRSMJDMSBAQSWOVVONQIAIPKHFBKMLTTKNCIAJGRRUVADYGFGHAMOLBDQWBOXGRAWEWLMJZSAKUSIPNKLJIXQZXEJPSFGI");
    tmp_msg_0.predicate.assign("TGRCAIVXBNRBDJLRATM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HMIPYTDHHYBVDGNQYWWPQKRDIBNUBAZGHFKTPBFOVSBPWHCRWOZJRUYRTFIEQCEALXWSWVETE");
    tmp_tmp_msg_0_0.attr_type = 157U;
    tmp_tmp_msg_0_0.min.assign("ROLGINLZMUCKCKXMCDPYGOTLIYOLRAPTUKODLNSMCNDXECNYSEFYHZERVIOXTZBWUSCDXJHQZVPYHVJKXZLQFLMPWYNJDALGESOXQSRIYKUVAWPPWJONVZLPETFAMKKFHYXGFLAAUUKQCWGGNJADJBXTDXTMITIIHQZEIYUMJEBYANH");
    tmp_tmp_msg_0_0.max.assign("STMCIOBHFXMFYHNPDVMTSOVKZGXRHNNMGUSBLLVEZXICTAVSUTUYHZZMSZQDSMAYBUFWLAGNRYOKBUOSKRJARTKGIEGCIJQYLZNDERFFJYDPWKAIXJUZUYBAWTFYXRCWXFWHGDOSHJKWNRPQVLNYCQMXDBRPPUTQWWQFLLACQHOGYDPLGEVOBHKLPBHKMVTJIQQE");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9273883694436303);
    msg.setSource(41750U);
    msg.setSourceEntity(222U);
    msg.setDestination(4058U);
    msg.setDestinationEntity(77U);
    msg.op = 30U;
    msg.goal_id.assign("OXVBYDLKDNXVQSKOBRFSQRUMODOGVDOEOCPRJACNJQRMAMHIELGTGXUFFHLZWDSSNYUNEYJIANPWVDMHDVRNZONOWPFZLNLXTIWCFJABDPWBYLGPTCTQILBIJWUFQPYHSLEWPBITZFUQTVKRCGHPUMSXNCAJPEAXZKSR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SSEHLNELVUIAZXOPCTYMROSCOFWUGVYRJEXPPHJVECZUAYQFTTHTAVRPTKVIRBWBTZULJINHDPQYUBRCSGFIZMRGWJNFBIYBXCXKGANZSBBXYDRXMNMNPKJTHUGMVSMCOOBKLRIODGCJFFXJAQALWWQKXNKTYYKQGCBXRQHCEZWNHUZAGVUPEWMDZUAQSOVIVDXWLQQDSMLFMIHPBFTZDHHLDKEWJGKDILJLNAJQPNOMK");
    tmp_msg_0.predicate.assign("OQTFFXYTSBIXHNMSGIWIGIQEUBWJSJTAVPXDJSNG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WJLBAOYWYOTZREIYMVDKIMOKVYIBFXWHLBKRVYIYVNAZWQYGOAKLTGPSIZPFXADNZEMQJXAGGCECYRRXBGTXRVQHTAQEAJAWSMRBFCGBPSRVTDHLDQGIBRVKHDVZHNMTRFFPKXUSCEEJWGXILUTRHOGJNKSSCFZWMJNOAGULFIHVBBTTJUHNNCDPTKUKOJFWPCZZEPHUNVBUIQWKUQHXLDSLUCAUZSOLFXOMSE");
    tmp_tmp_msg_0_0.attr_type = 72U;
    tmp_tmp_msg_0_0.min.assign("CBATIICYPRQZABFVHQROZRWTCEMGKKSAEPDEUXTQRWKMDEGBDOVDLHSIYACOKSMLKXPQCJLEPHWNXUYFKSJNBGGPMNJROXGVYSXHOHNMFXSKGSPFUHQMVNBGLLZHTVFWLAZNBYUUAJDCUILJCUUZVIIXSVRZPYNZWJZOPRUOTSFTNGSBNLLIBCZWWQRYVCJPDCWNHYQATPWETKMGMYGBOXODTFIYMFVRRODAM");
    tmp_tmp_msg_0_0.max.assign("MXSVJTVQXKSYWYDGWGRIRVELHIUYURMDQCHHDTUZETDLSBKZSZVEZLHAABJSJRNBLUJTPCBNOQFTLXYCAONGPQPLHGIWLVKSGFFVWHNWSFEODWVBURUNVCQDFMJOGMTSXGWSBAEHAKMLZBUYMEDRJIFXCJHSXCAGBOCXNWXOYMBPXXHZKCOAPUBUZZJZQNCUHFFQNYOAYWAMQLRTVDRTRRFVJDIODKTFM");
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
    msg.setTimeStamp(0.060509622514533956);
    msg.setSource(28455U);
    msg.setSourceEntity(18U);
    msg.setDestination(16664U);
    msg.setDestinationEntity(15U);
    msg.op = 143U;
    msg.goal_id.assign("LATLQDBFRFGQGUNLVUNKZHGYWUKQSUYRYMOIKQLOGMVAVUSCNNRRZOTDXSQFWITADBPUQQMWRINCTLEIODDECOJEPTCKMTWKCXHBILJRDZYXPEUAENAYYSWUJMFJEGIGRVLPRPFZBVRDZJIHEWJVBZBZSBAFEYIBCTASXXOQMFSOUGRLTHKEOMWVXZDIVANXSAFAHVVBKHUSXHXYYHLNKWOGCGZWPTLJFGSTWQQCPNJPKXJJIY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PAXZXIBMODRGMQUF");
    tmp_msg_0.predicate.assign("YQIQONFMGIISSXWXJFXALFXZKMHTOGPVVWHVLJYCRORSPBESO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NHGHPBAKYWDSKXBOPPIYBDIOKMQYYHBFQWUILVATUZZCPELXJCYMAWAZSBXKTGZLTDHXAFRQMQJTQLUANEFKJLZDHLERUJEOPLVLBYFDHISJZFSNQEGHHNXNGGAYDKIHQVRNMMCRIXEENJPXGJZMTOWKBRAXOTCHVCUSFDGWZOSWLFVERDIXU");
    tmp_tmp_msg_0_0.attr_type = 24U;
    tmp_tmp_msg_0_0.min.assign("ERNSDYKFKCQPVZTLBMBUNUARQMLTVMUTJJDQVQKWVNSTAUFQYASNWUDKIXPESWOGHMFMYIMYQGCCSBPKHXWOTEXMCSZJDVGFOVWCRATRXWTYATYUOLOQEFXCTLXOSNIIGNYKAGDTOPYPAGZBMHQBLNZZHVERZOVGQRZZLBDWDJOWAKEPGSJIJXHPQEJDZYRNBFWAXDFRR");
    tmp_tmp_msg_0_0.max.assign("JOUGRCBCYWFRPMGGUKIDVMYTWAFCPWXPLNXKSHYDWIZMYJXUIKGBEJZPMVLLUJCBRYQLFHPTBVHBQGNAYQDNOODXDACZIEVXOESRSNQHSVPEZBXFMEOKYKSHSMTRNWQPHLIAOSRQJTROVZZGQKGPETIKJAYZJMRCCKKIXUWGIHNTAKBOYEJTHWUEYPTTMCAJAMPMILSRZNUNFFIEDQ");
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
    msg.setTimeStamp(0.5761622538444154);
    msg.setSource(20479U);
    msg.setSourceEntity(122U);
    msg.setDestination(54924U);
    msg.setDestinationEntity(12U);
    msg.name.assign("DVBATFHRCNPGXROYOIKNZGRPWZCLFIJLHBITFZNTKKBSXEWTWLOAZZUJMVEDOZKHLNEADCGJGWSMEYSOJIDXOFDOTFXYNWSGPQFCNABETMLSRZSJDMEUIRMVVASXXVSMFQNCPKNZGQDBRAAVNIGOFFTJKRYBVQXHBZTWYQLJICGZJCIGVMHTRFCRCQSAYKPLRKHUWQEUPGELUQMJXSAKXIHULYNDLUVWHADQIPXPEBUHVE");
    msg.attr_type = 139U;
    msg.min.assign("ARBLQYFPSYJUXDZFSZKHIECAEMBKRKCJTJTEPHAUMCXOPVDLHAGHNUHLISSTWRCOQQBUOANUVDXFXZSVSNEJDXVRZGMWONDBQZSMZTWILWTBQEUYEKTNACJPJKAQPTFUMIRVBWPMEIGIGNLCVEXOIXBYEHPWTMORCWYKWOAGXLTFXGJRLKHULGWDSIJRRPVAKLZQJQYQCJQYFMIHSYMK");
    msg.max.assign("GYXOUOCEQNHCEDNREFCSQARVGACOALWWSBEDFMHIPL");

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
    msg.setTimeStamp(0.3476788752964529);
    msg.setSource(16474U);
    msg.setSourceEntity(67U);
    msg.setDestination(35560U);
    msg.setDestinationEntity(18U);
    msg.name.assign("VIPBUKYHUQOIQGQXCPBKMKQFSNDRDUXBPTRFEBQWITBMAVJYGAZRVNZJOTNUAMDOGIYTBZTGWLLNPWSYGSVWEPHSXGUFFLQUDOWVEWSDIJAEIAANWVXIKPECHAIDCJOJYOLTFLROWINVCSVAEWFRUBYZCKNLRCFMYLSBJKEXIRLPROECEW");
    msg.attr_type = 93U;
    msg.min.assign("BUQGNOTVLTPDFNYLSJKWSTLLQUBFZVIJAHDIWXGXCYUJIIYMVRMPQXIRQFQXKEAUVTANUSHVGCGTMAZYEDYPHBXXRPJRFVFIYIKILKKJAWESAZLHOOLHDUPANVBPNZWXRXZTFTDMACOCYLUGZVAKKNRBRMWMWDTFZEWHEGMGZCBKONPEDSNZGPYFHYNSZOCEWSMFIY");
    msg.max.assign("TYEINKHSLTWRECJEFYMBJIIGSGSGNSQMGTPKUKYPWUUQVWYTLXLABPUNJOVAYDVFQGRZEBFLJNMTJQMNXXZJRXSRMXDJCYFPRVFWOQXEYLSDKRAHUAKLSGICHOHUTJOPWZZIUOFMAQKRRWMNKVKBLJWMISAFHFELOIPDDWYNZXTCHKWDAHAEMKJYZYZLXGPCHBBAECCANODIWVTOBIQHBBLOVZRRCVUDNZDFQUCXSPVGVCUGSQETMDXQP");

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
    msg.setTimeStamp(0.5987423927086749);
    msg.setSource(60464U);
    msg.setSourceEntity(229U);
    msg.setDestination(53110U);
    msg.setDestinationEntity(224U);
    msg.name.assign("OGXIKDJLQQVSPTRSOMZDEJTPPZFSZHITWKOYQPMKNMUAAUISFBPAICDIFSQGIRYFQXXAWJUPVUJCOEXKWTWNHDXTVLKHNMDPBYQGSUCRCTMYONBEFNORXBNDSYRFUZKHTBAVGTAGGXHRDBQC");
    msg.attr_type = 33U;
    msg.min.assign("BMBLYXLBMFAWFVZQZPRGDHFXCDHMROJEQVHKKTGGTMILOJHZEKXGSSYQNULBTGVWJPLZBPWEPFLSBCCZYTXFPUOWBBAAXQSQKHLSPKNOCRRSFMDMZDHEIIDTAIYVNTVIFVYOETZZLGJMVUWEUXYNGXXQKKBGFQUGOEKDRMTD");
    msg.max.assign("PAFJYQRASEQVQHWGMPPJBVSOJEMBCVFWNLYNKIKAUQXEZRXOZHUNAIDBFGSJPGJWSTZLGUOEZYWJKPGCSHPKKXRVQLDMYPDTYNOJDRDHGNIYNQEKYXAWPNAQOHKSICFLYDGLFTIESMUJDBRWLIIXIERVBANBVFHTWVSKDXRRYCPRMJBN");

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
    msg.setTimeStamp(0.39998220410041485);
    msg.setSource(24823U);
    msg.setSourceEntity(73U);
    msg.setDestination(60452U);
    msg.setDestinationEntity(164U);
    msg.timeline.assign("PIPREGIZJSARJZSBCOLBITRUVSLVXZNOGNQTNWLZKYGFICFPUUWNXDWOIYTFDJXRVEYBEZELUCGSDLAKYGOFTLSFRKFDUNKJTWSBQBGQVTLBJVMICDYVPZSGCAGKRMONAHARHIKOVFTDHBMLPPXZPSNOJJOBQUEFOYCIQXRILZATHAVKWNUVKXMGDWNHQHDTWHYMJMOQGSRQFZQYUHHMWYRCBDDWALVXEFNP");
    msg.predicate.assign("SUNSJQCACUZLYHMCWOQSZSVJETLYKYCLXSHORKZUDYVNIPKES");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CJFZARSFMCQLPACWMNDHTDIONEBSHOJQOHKYTPEJGXNBLUPUJFKOMQCLEWPAYLBGOAZIKKJSTYXZWXVGRVLCERJGYNPIQIMKTICFXELZUETWYIHJAPLKSXRBXQNUBQKMFUORGVVXXGZZFPTSKAKVAAITWUHDDWRFMSYGMGDIDGBUOEFQRPPJYLENEEBSILVNFBYSSJSV");
    tmp_msg_0.attr_type = 204U;
    tmp_msg_0.min.assign("GYEBZYOPLAMFAZWZDSZIDLHKSUPTMLQRXWQGVXFRJJEYXI");
    tmp_msg_0.max.assign("MYPQRLWQTKULDHIG");
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
    msg.setTimeStamp(0.30428566372196975);
    msg.setSource(50889U);
    msg.setSourceEntity(78U);
    msg.setDestination(40654U);
    msg.setDestinationEntity(28U);
    msg.timeline.assign("LGNERCNTODAYKEDZXHEPLRYLGMZMYSXKZQPHCTZJAOYSCYJUPDMINWHJQCMEFJZMUKYKPOPVBFURPTIWHCUWKJIWDEVYZTNTBRTPBAIFBFGGJJBGLPRXWSYDOQUDKMJONMMPNKQOAQUPAHQ");
    msg.predicate.assign("GJYUUNHCZASOEMGQWBHLNMTKUREVJMCQFJZYAIFLYUZGDNMTTKZJDAUVRKWZWZZNTYRGT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VZEQWDGWARAWKBCXGWXHPMURRTKAGELJQFTWIXLATSHXPBUXPFNMHMOPRJNPDDMPSJYSCLYLKIZAIIZDQWOUVKJVXGJVFGDTLKYCBQNLWSHGKAQIRFITWXLYKSDUOGY");
    tmp_msg_0.attr_type = 88U;
    tmp_msg_0.min.assign("TCJMCLSIUVFFOUHCJYQVJRQYZPDEFJGABKWNBVX");
    tmp_msg_0.max.assign("JTZPTUROQRYOFSCJATVKPRYDNGCTMAHVRSODVGHFFXEAUAELMYXFTMSNINJLQIREPPIXWSDKHYFFZXHILAQAUAWVCBBJGQWZDZJHNUBRWVSKPDOIHTVCYZKQDCBUUETYHKCGMYUZQJYOHKXUWLMWKSRDASBZDCMOYPEXTAELINMKTINEXVHIJREOMBZBSO");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.27580840717924393);
    msg.setSource(44720U);
    msg.setSourceEntity(147U);
    msg.setDestination(15406U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("KDRPTMGQHWKSBPMJFHOQNJUYVNFGVLFLPZYSBXPLBZPYJDJEKDDGDHU");
    msg.predicate.assign("DKOWRNLHAIOPEOSGCEPTIBVVRKCYNTLCFRECJDZRHJBTCWMGCJCMBKYZQSBVTRHUIWEGXQIFEPCASJLDCLNHRSEUUFMJFLIANQNTDOPYIMKBURYDBIJMBYEQJZBGVRHPEWIQFSHUTUXNZKXFLLHKQHDTKPWHSZUJWQSGBGGFZHUDAFRQLYXZTWXQRQWXUVDYAMVMOJAANMPPWYSVNPBVLWAZETMLIOVGDNXMXIXGGKKAOASOKSXNFCEFJZOTYY");

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
    msg.setTimeStamp(0.6572272851660039);
    msg.setSource(41082U);
    msg.setSourceEntity(109U);
    msg.setDestination(38321U);
    msg.setDestinationEntity(171U);
    msg.reactor.assign("RIACQTUMKEHSWNEWQMDRHCSXTARPJJCYZKUGAHZZIYBMVFPGDEOGVNFBVEVTBDQGDQTJKUGIKRBQNONUMWRLFINQLXZITBJBCJLPFAVPCOJVGNAYEUQGUKHWQECCCNZYGPCOARJZEITWEYXYUXZKSXBOLKDSHFRPWF");

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
    msg.setTimeStamp(0.7534464781894011);
    msg.setSource(61642U);
    msg.setSourceEntity(246U);
    msg.setDestination(57887U);
    msg.setDestinationEntity(169U);
    msg.reactor.assign("NMLCXPZTRLLIDGBLSCHMWDKCPYMFFVERRHOIZPXJGHBOJAUIOSZNJEVCVSNWTNNQGJCDEVONGZMWRYDCKEAYTZIPIWWMYZJABAVOQDAOFSDPWVERFWYYKAFWPCYZFNEUZGSPIYIJSLQTVGTQIXKHSUCJGFSKWUGAYHCEDBJBZDBLKSWHKDEGSPNRMTMJCNZHDEYPTXXXKFLUVQHFQLBOMVLQARKUXBLGAQBOHEBUIJFMRURTVN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WRXLZRAMBCRNMGTNTKYLXKDHMBPCRWJZDYNTLBKHCRVXFKNOFFAZTPEDQPSYBDPFRXXJOZMYJVSGDAPVPIUIOSQYARTMSDFQJFUOLAYMGSLDUDEYFLKSVQIMZPRICINLWOVGHCUXBOCXIECIVGAVONZUJXNSUJEHIPZPNVDEYVEKQLKTQGCUWSMVQWBKNNFZEWQTGGCAXFLTHEACOJZRP");
    tmp_msg_0.predicate.assign("GZPSLDJPPXQOTBGJEEDAFQIOSCQECZEGZHCWRHMDFJKIVGZWKFISJTNKWUUOTRCPAWGGIIHNAYDSNYBYWZFWSDADBJTJLKNCXPNRDNPNWWUE");
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
    msg.setTimeStamp(0.3582342110178992);
    msg.setSource(39511U);
    msg.setSourceEntity(164U);
    msg.setDestination(63025U);
    msg.setDestinationEntity(249U);
    msg.reactor.assign("XOORYTYQYPNWDOFCJCZQKBOKSCSUQFIHIYBAZXMVYXOICAJTHPKVJCPRWGJQIUXYYUFWXACFLRDMHPJOXLZPGDEWPBJPHXNMSIG");

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
    msg.setTimeStamp(0.12012696795427291);
    msg.setSource(38029U);
    msg.setSourceEntity(26U);
    msg.setDestination(38768U);
    msg.setDestinationEntity(33U);
    msg.topic.assign("GWCBTHIYUXUUFHRIICEJIYLBNCPAKWQGZIHSDMJKDSXAKNBFERMQYEBEOBMZFOIPFWQQWXZNMYVDZSJDVSFOPJZNMJHHOWLATYXBFKAGRSMHKSGZWZJRTUOQQEKKGPLBEYL");
    msg.data.assign("HCBJVHDTLEHVYVJJIZXKSMXWCOUTAHGGRZJRKYQIIKMYYTRDESJGAYEPWBGLZZEWMHCPGXGKOGOAUPEOWSGTBABXAOEZGJPQYVDFCXKRHNIDTSFLMEUCCPNFFASGMLM");

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
    msg.setTimeStamp(0.13770346362072106);
    msg.setSource(65223U);
    msg.setSourceEntity(110U);
    msg.setDestination(18048U);
    msg.setDestinationEntity(33U);
    msg.topic.assign("RLOHWBYJRCQWOVBBDQSOLIJMZUTFQUXFMUSBMOJBVKPCSLUWELLUJFVCUPHRSDV");
    msg.data.assign("IGTBEATZDNHFWGUWDSIOMELHPNRQWCDQYJKVJPJEGHCKYKKVFLQNZQETTFJQUJXHVVNXXOBMAURZOGXM");

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
    msg.setTimeStamp(0.8434526077819812);
    msg.setSource(24029U);
    msg.setSourceEntity(76U);
    msg.setDestination(42057U);
    msg.setDestinationEntity(51U);
    msg.topic.assign("YVOYVKLFHLTPTDBKZRYUNZOPWNMLOQIVKIEXVUHHBRNYYXCBGUWNEDKZTBIFIHVQQRSIEJOJGURIEPHMPQSXFPQJAUCDDWCVQAMRGVYYSMCJVGWVLQTQHFLOTUBBDFDZSGMOUXNWHAJTOWCWOUEVPNCZMCXOCDGUDCYNMPRBNHJTDSPMLEKXEAZFMSSGJSKKHCBLUZFGIPZXJIKWEFJSAANPGWIIFWEFDXTZBNRJZKSLTOAERQYRAA");
    msg.data.assign("EFBWJUXELVFESCTUPZIEDMAZRABFLOWSUWIYJPYTDBGRKFMNJCVVDNOVMKNWXPOQHPBZJOHEUNJMMWZGHTJBEDKYIIZINVUZHXMTVJOYDUYSABKKUEPBUXHSGGQHFPAKAVJYCCSBLEIKDKXTIRAXLQOXQTMQTVPJOXGTGNEPMFLHQQCVXNSYEZSFGLWDNBUIRPCYGOZKYTSCKCSZQHUTSIVMLWPXRB");

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
    msg.setTimeStamp(0.2557868405598971);
    msg.setSource(15822U);
    msg.setSourceEntity(84U);
    msg.setDestination(15839U);
    msg.setDestinationEntity(220U);
    msg.frameid = 30U;
    const signed char tmp_msg_0[] = {46, 117, 64, 110, -97, -60, 88, -108, 4, -60, 102, -39, 8, -74, -82, -115, -35, -71, -24, 117, 30, 16, -69, -99, 12, -2, 54, -103, 101, 112, -104, 28, 70, 69, 36, 30, -120, 114, 19, 11, -86, -85, 100, 69, 91, 115, -2, 118, 11, -1, -68, 118, 45, -125, 0, -32, -21, 32, 114, 95, 96, 38, 108, 69, 109, 112, 110, 13, -94, 33, -8, -89, 15, -65, -98, -79, 24, 102, 7, 50, 54, -101, -21, 81, 122, 21, -71, -79, 11, -84, 64, 19, 114, 59, -16, -99, 85, 118, -119, -84, -18, -107, 22, -113, -75, 120, -80, 41, -65, 64, 87, 11, 103, -119, -51, -3, -21, -38, -87, -20, 84, -42, 39, -91, -113, 78, 80, 25, -43, -94, 7, 81, 44, 91, -120, 64, -99, -96, -52, 110, 12, -126, 64, 48, 24, -125, -66, 112, 87, 86, -106, -41, -98, 96, 33, -48, -42, 123, -95, -108};
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
    msg.setTimeStamp(0.7237010788567971);
    msg.setSource(14496U);
    msg.setSourceEntity(187U);
    msg.setDestination(51337U);
    msg.setDestinationEntity(213U);
    msg.frameid = 194U;
    const signed char tmp_msg_0[] = {-124, 72, -66, 68, -92, -21, -33, 34, 28, 12, 7, 29, -95, -58, 124, -118, 100, -93, 11, -96, -50, 6, 100, 19, 5, 0, 4};
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
    msg.setTimeStamp(0.12976831958375068);
    msg.setSource(41068U);
    msg.setSourceEntity(237U);
    msg.setDestination(15766U);
    msg.setDestinationEntity(203U);
    msg.frameid = 59U;
    const signed char tmp_msg_0[] = {-110, 100, -86, -10, 112, 70, -64, -128, -118, 43, -114, 40, 106, 61, 32, -78, -8, 70, -23, -84, -57, 31, 56, 72, -82, 103, 64, 56, -24, 73, 107, -6, 68, -83, -120, 16, 13, -38, 78, -127, 15, -25, -46, 55, 69, 26, 19, 120, 115, 96, 14, 18, -52, 70, -24, -108, -23, 29, 99, 69, -66, -108, -64, -121, 56, 1, 52, -93, -106, 19, -11, -5, -51, 34, 97, 29, 78, -23, 79, 62, 39, -123, 7, -19, 45, -122, -4, -111, 18, -107, 19, 63, 68, 33, 60, -54, 114, 25, 107, 112, 88, 56, 14, 84, -78, 5, 74, -61, 26, 79, -108, 81, -62, -65, -39, -33, 92, 3, -113, -7};
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
    msg.setTimeStamp(0.37065119209455977);
    msg.setSource(60473U);
    msg.setSourceEntity(44U);
    msg.setDestination(53190U);
    msg.setDestinationEntity(46U);
    msg.fps = 248U;
    msg.quality = 64U;
    msg.reps = 213U;
    msg.tsize = 199U;

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
    msg.setTimeStamp(0.8534322524492339);
    msg.setSource(56060U);
    msg.setSourceEntity(145U);
    msg.setDestination(64549U);
    msg.setDestinationEntity(86U);
    msg.fps = 179U;
    msg.quality = 3U;
    msg.reps = 77U;
    msg.tsize = 112U;

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
    msg.setTimeStamp(0.9867504138613059);
    msg.setSource(5263U);
    msg.setSourceEntity(102U);
    msg.setDestination(44481U);
    msg.setDestinationEntity(222U);
    msg.fps = 48U;
    msg.quality = 235U;
    msg.reps = 32U;
    msg.tsize = 40U;

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
    msg.setTimeStamp(0.9583235410286375);
    msg.setSource(51798U);
    msg.setSourceEntity(211U);
    msg.setDestination(20995U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.9637631829731357;
    msg.lon = 0.7942858916720921;
    msg.depth = 55U;
    msg.speed = 0.6497009375053234;
    msg.psi = 0.7314531502170947;

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
    msg.setTimeStamp(0.6105804677752688);
    msg.setSource(56253U);
    msg.setSourceEntity(101U);
    msg.setDestination(9123U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.7166972768149755;
    msg.lon = 0.890712523311493;
    msg.depth = 211U;
    msg.speed = 0.025699942212439986;
    msg.psi = 0.43355945834394594;

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
    msg.setTimeStamp(0.1423003515578991);
    msg.setSource(3194U);
    msg.setSourceEntity(230U);
    msg.setDestination(36173U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.007019745077604278;
    msg.lon = 0.03707416105071748;
    msg.depth = 233U;
    msg.speed = 0.14982707898548053;
    msg.psi = 0.5613351215597167;

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
    msg.setTimeStamp(0.008402877314388602);
    msg.setSource(26483U);
    msg.setSourceEntity(237U);
    msg.setDestination(37552U);
    msg.setDestinationEntity(105U);
    msg.label.assign("JFBSJZLXFNICJIPPXZMNPYATFJDOSDXTIZWQGOOVYRQSGWUKJKCXVZTSHOBBRVBLLWQIEHVVKWQHMIFBELASGEXIHPJWKAJVOZOUWGCVBJDPSCYSOCPLTGGHQLMOPTPCJMRYANBEZMDSYTMJCMMZATFEICXQUUFT");
    msg.lat = 0.37739205564234046;
    msg.lon = 0.25222593283219485;
    msg.z = 0.5328714097326268;
    msg.z_units = 124U;
    msg.cog = 0.9849621280630149;
    msg.sog = 0.8360193446802137;

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
    msg.setTimeStamp(0.09617984139705438);
    msg.setSource(30893U);
    msg.setSourceEntity(86U);
    msg.setDestination(56830U);
    msg.setDestinationEntity(19U);
    msg.label.assign("WAMFTVBPXIZQBXWZUNAZMDALFLBFTSQVBVYYOGCYRIJJZHSJXKMLKEBFADZYXWKCOHS");
    msg.lat = 0.07499084543872658;
    msg.lon = 0.5231235351924367;
    msg.z = 0.4693618484812593;
    msg.z_units = 13U;
    msg.cog = 0.05553194690079488;
    msg.sog = 0.901791947422378;

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
    msg.setTimeStamp(0.5581257079947888);
    msg.setSource(58963U);
    msg.setSourceEntity(50U);
    msg.setDestination(37808U);
    msg.setDestinationEntity(192U);
    msg.label.assign("ACTADMBMODZGEXZVWPEMVVMHBPGCKTGNXWYIIJQSAFRUNYQFCVFOJRJDZKWTUOMUVHESDOVZXLAZSSDOAMJIKLSQELVKEUBWQWOUVCNRYXBYTBKJDWNIO");
    msg.lat = 0.9728539562982447;
    msg.lon = 0.4211280651293636;
    msg.z = 0.43354484462469045;
    msg.z_units = 77U;
    msg.cog = 0.5197353246591403;
    msg.sog = 0.96743514654622;

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
    msg.setTimeStamp(0.6578320001743029);
    msg.setSource(52432U);
    msg.setSourceEntity(67U);
    msg.setDestination(11890U);
    msg.setDestinationEntity(173U);
    msg.name.assign("AGUCRRYCYLBWXDMAUZMLHZLVWOJNHXPUKGNXIOPFUTVMQCFNNXEEMXKDCOZZEHDHBPRIHGGJQPCKRCAIRESIMJWPTPERDFOKI");
    msg.value.assign("RKLOUAAWHSKHCSMPPDOFEKCJBYYDCAEATKXMEMVTQNDUEJBISSPCOPAAMREPUIVHZRNMVHMWBCAMGSGKBYLXUUOGAJVJJPAHDWYQXNQHNRUKRSOKBMCTQPJXYFTCQRNRFLNZKIGEIWDZLGVTYNZICFOW");

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
    msg.setTimeStamp(0.0062854666593706865);
    msg.setSource(40641U);
    msg.setSourceEntity(78U);
    msg.setDestination(19578U);
    msg.setDestinationEntity(114U);
    msg.name.assign("OGQNSGSWJGXMKEZLZKEKEINWYTGMKUHTAMNCQMWEOVAUZXBXILYSLFBXIOWGFFDBOATYYQMVWLTJCGKRJERODYIRBPD");
    msg.value.assign("PVOERJONASGSJBYWIWXEGBEDZEVRAMPSZDDFFLCXDUBHXHMUZXLTPMDKAOWNJZCFMBLTKXVPXAURPIOGQIITUOTQBANT");

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
    msg.setTimeStamp(0.8564162197457474);
    msg.setSource(32757U);
    msg.setSourceEntity(108U);
    msg.setDestination(52288U);
    msg.setDestinationEntity(177U);
    msg.name.assign("SWXLBEGVIUHKZJMCOWTRXPNJDKTAJSGUAJSKXRWCFIPFJOPQXSCCBOADMZNFGQSTLIKNSBOYEGVYQQDALQYOFATINKIVDVATEKPFFFXHMEBGLGYIODRMZHRAXNNHXMENOJPLXBZCAQMUCDZDDDUWURMHQGRIVPIZOPLWHCADYZORJT");
    msg.value.assign("HFPOXLCADXNVSYXTKSRIRJYQIFSUOTBRLGDZWOJPBAWHXOZTMOAGPCZLXRLHFRESSJQHWEBZQVRVEZENPQLWYACOIYQYJBCMWAKTIRHMFDKJNEYDQX");

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
    msg.setTimeStamp(0.511324858647567);
    msg.setSource(25522U);
    msg.setSourceEntity(67U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(173U);
    msg.name.assign("TKJXBGSIJMGUEBQWCVZJOIDMSMGDDFFMBXZIPYRVMPJQWVLUUXJNVQKMQLETZEVGZLADNPDAQXAPNCNHWETYTUJYFCODWTRVBCWBLOTUFBOEOAENIOCRKHFWVMAWZGYTEYGZARKFAXRAKWCBGCYORRQMYDUCCUHQSUFHHPUBAKDZHJPQATTILLWMKSPZXBKEFOJRVVOYHKILIPLYJJZHEFSSLIPSNXGCNSVBMRNGWSNYTXPXUO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NWAILYWDZRZHUQQFTSJXCY");
    tmp_msg_0.value.assign("YDJQXEJRYKAAGNIBRHRBCSQUQLDLQRMIAEWZPGIGZEOVKHZLDZTOQNIVKDVFSRGMHNTORAMJEXWYCXDTGVCWBBYZTUCXQRYCUESDAWRVBJXEHOGXDEGFNAEKOYMGHHBTSWWTJGEFMZPBFACUYXROPLCHJIDCUMSDPZPPLWIAHJQXILVPSWBGAJYOIFSDVPSNTJUOKIYPZPHUALTTV");
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
    msg.setTimeStamp(0.03674985880734827);
    msg.setSource(42898U);
    msg.setSourceEntity(164U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(0U);
    msg.name.assign("NTSUVNMBLWPPOFDZYXRLRAXTNKGZBNBPANYVWMHVOXRMURZHAYHJOTBUVISFTIETAUHFMUHUDIOBGQXNQUJNIRWQKWPGIQLEWKVFSOHHJXPXJGENDOAIECIKOML");

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
    msg.setTimeStamp(0.7093853999238803);
    msg.setSource(57537U);
    msg.setSourceEntity(42U);
    msg.setDestination(10521U);
    msg.setDestinationEntity(135U);
    msg.name.assign("IWXULHKKBVWVPETFULBKVLCCPPIPOQLJCVSVULKRNCGWBUQZVUTVAJOHAQDRMOCWMVSBURYFSSMGQYRXFEAIIXBJOHYLRORJKWQEIJSZEXGMGZCNQMFKDBWHTXTOGOFBHTTOEETNZNSJNWMGWNXRQZMFTLPHMKLUUFYDTSQWBHKUGAQIXDYZ");

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
    msg.setTimeStamp(0.9131357733059173);
    msg.setSource(19591U);
    msg.setSourceEntity(25U);
    msg.setDestination(38822U);
    msg.setDestinationEntity(95U);
    msg.name.assign("KOASTHWMVDJQGADQZYRQNKPKYYIAXYTKSPRACFTUYORVCMGUEBHIGGEUMIWPVLFEEPJVHXQDWICJFFRMHSJXXOBMJESVEJENUZNCKYOTRQDUMXZQFHMFLWYINXASTGRQKQGOBLLLUCIAOTUYEZRJSCCXNVACMBRDTFLZHXZP");
    msg.visibility.assign("HXYSUFENPUZDDSVTEIIVUIGKEVPFBOORUCPBCJMRPCPISWVNQMZBEGSAIWDMGDMWDWGCLMR");
    msg.scope.assign("XJGLTZNWZZVSVHLTSQKYDPWTYUGPFAEYQAQOULFFGTTINMNHCCYXCMQB");

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
    msg.setTimeStamp(0.5414728395599879);
    msg.setSource(16978U);
    msg.setSourceEntity(14U);
    msg.setDestination(7590U);
    msg.setDestinationEntity(251U);
    msg.name.assign("HFBVVAWAEEQQKHAOVZOPYXIJLXYAITPCGOGXSBRRIBTCBFDSJNMGPRFGMDXOBEQQSGMKFKOVURSQDVXZABANKXFGKKEHAUFEXK");
    msg.visibility.assign("ZVGTSFEYFSCQJHWGCXQNCLWPITFPXSIVX");
    msg.scope.assign("FVMBXHXKEQPTMHULYGKULGUDTCAXLRNLZDKPSCHTZCJXDPFRTTIFAGLOXDKRGPJVPOVLVMAEYCAOQJRNOYCBFJDLCFMBHBDJOJZVBNIFLESEKSRKJNEWVWYBZBMYHIUYWEQKHPIDYTNQOSDFQOVHZQVBAJMATGBOKNFNAUWGYKUURYKZIQZLMMACCWHSAGMSQJHRSXPWWSRGLSVGCQXWRZTZWUYECEIOSX");

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
    msg.setTimeStamp(0.6200650698009974);
    msg.setSource(43349U);
    msg.setSourceEntity(101U);
    msg.setDestination(39062U);
    msg.setDestinationEntity(27U);
    msg.name.assign("FWTBKGUIVNGRDMTTECKRY");
    msg.visibility.assign("CPECIMVNWMRUJATUHXDAWOLXGWMJEJYKZECFTJAXZDEUKTAQRUQTHASQWMIGDQQTLFKPBDANLLSGRVUDBVPDCYTBYZDBGJZSUVPLMVEZHLZXIEVOEOYKJRXYWEINAHOJQGWQOBCNTWIHONDYCNYXLKFPEMHMIKYSJRPAYNZUJOIBZPOHUBAXCFNLYHISRLQPSWBTDHBRCVFDFQWFTXRUIZXSVSKNMFNUVQJSEOGKPZXGRKSGCRLTGMPF");
    msg.scope.assign("TBDCBWUEUJDFYSIZFLAVQEGYDIKRZTQHWFITKQMPZIZFYPTUTRWEWHZWNLHXJVXJHMMFARU");

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
    msg.setTimeStamp(0.5865479434464302);
    msg.setSource(6357U);
    msg.setSourceEntity(24U);
    msg.setDestination(3281U);
    msg.setDestinationEntity(132U);
    msg.name.assign("LRBKZJBETKCGESJAOPAIYLPLOCIMFHFBUODGETFLTYAOGQVJJIWEMMZFZBXYGHQVLVHWHUDGIAVOOJFXMOCDBRQTFQFIZWKXIWOZWBOQDNMGHSTEKTFKYQAMMYCFTVNNUIIDFVUGJCSAZREYJJMNATUWHNSDDHEPEGEOZGYNLJUALSDBVAKRZXLLEUSSCVPLUDSPRXTTIXRMKXKPRYMQRSNNGB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PDMAWUQHBFKYGOWSGLBTWCEYHNHOLPBOYHIHRGJBJBNTZDVEDDTAKQXLLZSXGGEOHJUNXVLWDUSZMVJICYKGKGLZVLWXVYUPJBUNORRPYEGPACXDXRY");
    tmp_msg_0.value.assign("GWSZGQFOQZUABBMSPPHLAKEPETUXMOVMLBJPBRESORIEISFZUHOLDFQXWNSCJCCCUAGQFHNYKXDITYHCRJALQJHTSZZADAXNLCWKCTTNXDNIRBSNIVVVVSOXWHITAADFEAUFGSBHJPQOWHLYXKQOREFLFYGIBCMLUGMBUYYXEQYURZCJRKJLHEIWPINAYLTJBQEVXNR");
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
    msg.setTimeStamp(0.9115968588904519);
    msg.setSource(9696U);
    msg.setSourceEntity(77U);
    msg.setDestination(52152U);
    msg.setDestinationEntity(67U);
    msg.name.assign("DAOORMXXHWCPPFHDPPOJQIIKRVKMENPHGFHWISQTWRMLRDDPBYNGSHKSMVXHFTEYMTPKUKXFGUZEFQUCOQBTUKZCZVJRGAYVBQUBEZUAHQUATFWLATFZUEDKLSVWXICDYICRRJJBEPOWDUGBRJZCWKQNQJFHGMJJXBGPVIWELPCBSAVYIADGSFLUNLYRXSOOVYW");

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
    msg.setTimeStamp(0.5793480770886215);
    msg.setSource(63669U);
    msg.setSourceEntity(124U);
    msg.setDestination(4531U);
    msg.setDestinationEntity(152U);
    msg.name.assign("SQLEOXKFSNSHJWBMRRPOQDUQHLTPKIBHHSQJYHUQJSLYYMSPUZEDVWXCWMJHRCUGAVEZQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NHRUFOLZGEWUDYNYPAESLYRJNTUTJSXJORRIZYZBWMQNCWFTDMPFGEVCFCIWHLFGXJKDDNUPKWSMNWZOGETNPAYOHFRAJJBAVMLLJUEDSCE");
    tmp_msg_0.value.assign("NTGJJEEQNJLYONJOHMPAVRLAAYELBCLVNLUQMVZAHIHWEMNICHQQYDHKSQLFGMZOBPVAGAEEWXHOXFRDVUYMPYPXTJFBFUWKGBITHIMMCSTVRMZKWZJYCTFBSISLKRGXXCZAJLRRUIDNSPFQCXWOUOQXGDKJPSXBGEAAUBPLTHJSCKWGWMIOVIPWADICUGRDJPPOFQZYFZRROWVBQUIFOGYBKKZUETQLDHDTNEUSDC");
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
    msg.setTimeStamp(0.46213971895136274);
    msg.setSource(29037U);
    msg.setSourceEntity(75U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(102U);
    msg.name.assign("SZANNWVHBCACRFEQRLIGDTNOCVA");

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
    msg.setTimeStamp(0.3567074515004961);
    msg.setSource(35218U);
    msg.setSourceEntity(64U);
    msg.setDestination(15039U);
    msg.setDestinationEntity(178U);
    msg.name.assign("NIEVAHSNVGRDLTSNXISPFAEBKOKJKAKJFMWJAGUVPULMIYQSJMCPLUYTULUY");

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
    msg.setTimeStamp(0.12523166957869958);
    msg.setSource(54247U);
    msg.setSourceEntity(22U);
    msg.setDestination(5164U);
    msg.setDestinationEntity(99U);
    msg.name.assign("KPGISWFBMUBDERHYBXFRKNUVMBHVWQVGMWUKSPAWEIVEYTJYVAYLMGPUPTZUUIEVEBPTQAXNHWTMWKHVGDYGSTLMVHOCNQRIGFOPMDORLZTKMUJYSWTCXXQQZKREKRGHWOXUSLFYMIYLKQAOEGNBNFUDCIDQEQZWCHSGQMJWYDEZBHLXBTJLJFFSQDZHZJZOITSRANVKAPUDRAAEBJZOJJIXRBZOFDCXXNOG");

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
    msg.setTimeStamp(0.8788056992305583);
    msg.setSource(1255U);
    msg.setSourceEntity(40U);
    msg.setDestination(51796U);
    msg.setDestinationEntity(41U);
    msg.timeout = 4037474677U;

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
    msg.setTimeStamp(0.5996485088222714);
    msg.setSource(15523U);
    msg.setSourceEntity(32U);
    msg.setDestination(21267U);
    msg.setDestinationEntity(120U);
    msg.timeout = 2995638191U;

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
    msg.setTimeStamp(0.5594121493959349);
    msg.setSource(51296U);
    msg.setSourceEntity(8U);
    msg.setDestination(43797U);
    msg.setDestinationEntity(153U);
    msg.timeout = 3605858248U;

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
    msg.setTimeStamp(0.47768601484028383);
    msg.setSource(34893U);
    msg.setSourceEntity(167U);
    msg.setDestination(41239U);
    msg.setDestinationEntity(176U);
    msg.sessid = 1146876538U;

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
    msg.setTimeStamp(0.9258770668622669);
    msg.setSource(4161U);
    msg.setSourceEntity(102U);
    msg.setDestination(14088U);
    msg.setDestinationEntity(145U);
    msg.sessid = 1731005513U;

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
    msg.setTimeStamp(0.5284481738238489);
    msg.setSource(17063U);
    msg.setSourceEntity(63U);
    msg.setDestination(41007U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1535942069U;

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
    msg.setTimeStamp(0.35842523033476215);
    msg.setSource(37834U);
    msg.setSourceEntity(46U);
    msg.setDestination(22U);
    msg.setDestinationEntity(102U);
    msg.sessid = 322872197U;
    msg.messages.assign("AFJVGVOSPFWNXWJQEHUYARZSYUIMPWBPQMVDNQRFXFMRPCTWQGPBGZHVGDUDBUVMZHZZJKNQXOZOASAECJTJFYHKYHYNCDBLYQTMFHMSEUCWUATRCPXIQHCNY");

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
    msg.setTimeStamp(0.28754464565428706);
    msg.setSource(15354U);
    msg.setSourceEntity(183U);
    msg.setDestination(60681U);
    msg.setDestinationEntity(157U);
    msg.sessid = 1451637766U;
    msg.messages.assign("LEUYWLZRKKFHADVNUNCZSJZJAHTBOYADTTROWKFXVYMMLPDCRJRAZZNZHJRKEEWMSXBVNSNHFLHZ");

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
    msg.setTimeStamp(0.12394157552511809);
    msg.setSource(7643U);
    msg.setSourceEntity(3U);
    msg.setDestination(59377U);
    msg.setDestinationEntity(43U);
    msg.sessid = 1141128493U;
    msg.messages.assign("VXMQPTBSSLDJZWKLFSNJLRZPFGTHKEVDDVXCSXGFMAIFCINSABXAQSLBPQOMIDLDTQZRBUEDIYOROPRJEWQFEILAFMTKVGHJMOMYIKUUZVKJHHXISUBYERNBYTYEIOGFYGGYBCHEVHXIJJNNIMPZTFWYDCPQTOSEXXDUPNFOELHUODBHCKHO");

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
    msg.setTimeStamp(0.875183914764254);
    msg.setSource(20096U);
    msg.setSourceEntity(156U);
    msg.setDestination(26641U);
    msg.setDestinationEntity(27U);
    msg.sessid = 2971518222U;

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
    msg.setTimeStamp(0.6659405969182884);
    msg.setSource(2271U);
    msg.setSourceEntity(240U);
    msg.setDestination(45626U);
    msg.setDestinationEntity(131U);
    msg.sessid = 4017935898U;

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
    msg.setTimeStamp(0.6434545991909902);
    msg.setSource(51850U);
    msg.setSourceEntity(170U);
    msg.setDestination(54125U);
    msg.setDestinationEntity(211U);
    msg.sessid = 1121855303U;

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
    msg.setTimeStamp(0.4071215464480139);
    msg.setSource(55980U);
    msg.setSourceEntity(93U);
    msg.setDestination(8667U);
    msg.setDestinationEntity(94U);
    msg.sessid = 1775952538U;
    msg.status = 142U;

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
    msg.setTimeStamp(0.580672651323434);
    msg.setSource(52978U);
    msg.setSourceEntity(8U);
    msg.setDestination(21176U);
    msg.setDestinationEntity(154U);
    msg.sessid = 3272135692U;
    msg.status = 217U;

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
    msg.setTimeStamp(0.24765108965360083);
    msg.setSource(39053U);
    msg.setSourceEntity(84U);
    msg.setDestination(47240U);
    msg.setDestinationEntity(13U);
    msg.sessid = 738569610U;
    msg.status = 39U;

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
    msg.setTimeStamp(0.06830306860485424);
    msg.setSource(21743U);
    msg.setSourceEntity(253U);
    msg.setDestination(20764U);
    msg.setDestinationEntity(215U);
    msg.name.assign("GTGXPLNMHBXJPKXNRYPXHEYDHUMIKQIFNEMJABDAKPYSRASZHCXCWCKWDPPTYKURWFJLPWCVQJTAQGVLFYBHSXSOFMFYEIQZESVMNIHZRBVNCNBEGZKXOXQQUCTOHEIRZWIGCMMAJUADTUCDZAJQYQFLSDTWVISERTWJBZSGOJIUYNRQNLDGHRALDEHSNKUPLLJBEIW");

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
    msg.setTimeStamp(0.5836133098478871);
    msg.setSource(9954U);
    msg.setSourceEntity(115U);
    msg.setDestination(61368U);
    msg.setDestinationEntity(113U);
    msg.name.assign("DNIYAIUWXBUCUVJOACXCKXVEIFJOXPZUMFUOXEESGNROTC");

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
    msg.setTimeStamp(0.18453078613354734);
    msg.setSource(49316U);
    msg.setSourceEntity(171U);
    msg.setDestination(26850U);
    msg.setDestinationEntity(198U);
    msg.name.assign("QRDEFQBSWJMORWTAMYJCNKQRGMDGXCUXOPBLGYNGDSLVAYKKFZUZREWUOKYUBEXHKHWNSIBJFTVIKCGEOXOBVSUSLMGWBIMITELCAWOFTEFJMYQU");

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
    msg.setTimeStamp(0.8655237530209093);
    msg.setSource(37344U);
    msg.setSourceEntity(39U);
    msg.setDestination(62542U);
    msg.setDestinationEntity(80U);
    msg.name.assign("QHXAZYENYTSGUOLTPGKBHXLYFBEIZXWAAGDPZDFSOXJBTLILMRNZLQMXBRSZPLQQHDVAMGMZNZEFJEPVWRMGRXYXCBYBDKLEJKZVEUUIMNAPNNVHWNNNKUMJBAVQCXEOEDOUVTHFASIOHVSIFYGZIQKROPKMGTURJILRWEOYKSSPFS");

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
    msg.setTimeStamp(0.8729557559185241);
    msg.setSource(52094U);
    msg.setSourceEntity(129U);
    msg.setDestination(5681U);
    msg.setDestinationEntity(249U);
    msg.name.assign("HONWZFFGZOEHNNMVWFAVQGWLCBKPSITVOTMHUGXYASTDTGEOUKUSLDPPLDESQRRCZQFNBEZCIGJOHUDYWJEMPQGEZQSWVNMRAGQHBSNSFTMBAYCKINIFMIELHEDIAHOZNCTZWAXMNDXVIVFUSJRJBOZYFKTTHQKXWXLDRXXWUMLYPRVFSILDXIA");

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
    msg.setTimeStamp(0.6208775803415753);
    msg.setSource(42515U);
    msg.setSourceEntity(24U);
    msg.setDestination(12382U);
    msg.setDestinationEntity(131U);
    msg.name.assign("DTQROOVGEKJCEGSDYAVDNADBJGKHCIMPMUAAKQNXIKXJLOMJYUFVTYWSXDLAJFPTHJZQWBZZZULUKNEWFYBVONHLOGTXXTQQCQQXVWUPYPMLBWYREOMHEHVIGGRGWBKQCWHASNDSYOETPVZPNDEFUENMXJSVBIYSLJZFOCTTUSQFRKEFITHRPKVDCHMURWTLRXBHDPXZBFFFCRASSGYCM");

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
    msg.setTimeStamp(0.34330226511734596);
    msg.setSource(17279U);
    msg.setSourceEntity(65U);
    msg.setDestination(65332U);
    msg.setDestinationEntity(63U);
    msg.type = 161U;
    msg.error.assign("WMEZBTZYJQWDDFEMGTTIAUVTHZEUILOIATLULNMOBZSAKMINJRYHSQMEEZRODFBVMVLJTC");

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
    msg.setTimeStamp(0.5813869104210149);
    msg.setSource(10759U);
    msg.setSourceEntity(254U);
    msg.setDestination(62187U);
    msg.setDestinationEntity(6U);
    msg.type = 10U;
    msg.error.assign("JJRILSYQGECAVVYHHLCB");

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
    msg.setTimeStamp(0.9372184218808135);
    msg.setSource(40928U);
    msg.setSourceEntity(5U);
    msg.setDestination(34641U);
    msg.setDestinationEntity(204U);
    msg.type = 245U;
    msg.error.assign("XXNWPIECQJSFASLQRNY");

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
    msg.setTimeStamp(0.03896889184171859);
    msg.setSource(45744U);
    msg.setSourceEntity(36U);
    msg.setDestination(31130U);
    msg.setDestinationEntity(51U);
    msg.seq = 47795U;
    msg.sys_dst.assign("SPXGWVVOIYLRTQHZTTECCJAJAAIFQNZJYZDZPQJNOOIKHYBBHCEJXLRRGIYENJWKBWDQCUWYSGBHMEIIPDGODTIHSPHRDGKXDUVFUNVTUMZKJPWQYBONXNCFRKGBMFOTPFR");
    msg.flags = 38U;
    const signed char tmp_msg_0[] = {73, -122, -73, -98, 88, -5, 93, -106, -86, -25, -39, -85, -122, -42, -34, -11, 11, 14, -41, -38, -47, -106, 27, 94, 28, 99, 126, 116, -59, -104, -33, 61, -30, 61, 49, 119, 17, -4, -87, 35, -7, 39, -45, -39, 99, -20, -22, 25, 31, 119, 36, 32, 58, 32, -127, 35, -50, 108, 106, 21, -63, 41, -26, -35, -47, -61, -5, -103, -61, 70, -78, 102, 76, -40, 86, 30, 35, 71, 100, -66, -62, 37, 20, -17, 66, 72, -101, -36, 118, -13, 34, -56, -18, 87, 28, -123, -64, -1, 35, -34, -104, -105, -80, 118, -64, 5, 6, 53, -98, 41, 40, 109, -120, -11, -40, -85, 28, -44, 100, -109, -21, -94, 76, -57};
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
    msg.setTimeStamp(0.9115249840238702);
    msg.setSource(26338U);
    msg.setSourceEntity(246U);
    msg.setDestination(16528U);
    msg.setDestinationEntity(163U);
    msg.seq = 61752U;
    msg.sys_dst.assign("XFBHBDVODGYYFUATJSDLVZMVYKWIPKTYYJCNZUFSQDTFXORHIMELPJEMRDONUABCXBRRWMJYPALJRXTVDZIOHEOXRCGQWVHLCIOATFAEAIGQEFKKMWQILEDZUSVUQIJSWWSGBERQTBENHAMNRIVWZONDZLKXXAMJJNFLJRCXCGANTBABPKHFOQFUXFOZVMCGPIPKVRUK");
    msg.flags = 80U;
    const signed char tmp_msg_0[] = {-84, 108, -9, 78, 37, -73, 96, 66, 79, -106, 75, -33, -59, 99, 60, 90, -104, 70, 91, 18, -111, 72, -114, -21, 8, -21, -30, -62, 90, -101, -67, -43, 67, 101, -54, 15, 84, -26, -44, 12, 50, 38, 119, 71, 57, -114, -20, -42, -41, 121, -103, -102, 4, 123, 28, -125, 40, 70, 48, 19, -57, -3, -61, -67, -14, -27, 89, -51, -70, -63, -44, 114, -116, 82, 5, -59, -99, 95, -25, 87, -79, 76, 17, -30, 123, 59, 123, 116, -19, 63, 106, -111, -125, -78, 13, 1, -75, -97, 0, 44, 93, 69, -29, 52, 10, -27, 34, 83, -44, -97, 68, -119, 117, -111, 119, -10, 36, 96, -18, 85, 117, -112, 23, -115, -121, -31, -9, 94, -29, -33, 122, 35, 2, -12, 54, 47, 74, -94, 104, -124, 43, -53, -44, 39, -77, -84, 80, -3, -64, -34, 46, 89, 49, 100, 19, -105, 62, 64, 53, -15, 47, -74, -62, 11, -18, -125, -62, 75, -32, 74, 36, 44, -46, -12, 84, 83, -90, -80, -53, -24, 110, 119, 41, 29, -20, -118, -4, 18, -64, -112, 47, -68, -104, 54};
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
    msg.setTimeStamp(0.9567724594165635);
    msg.setSource(20351U);
    msg.setSourceEntity(16U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(11U);
    msg.seq = 26383U;
    msg.sys_dst.assign("UPEDYHDQMDMPOBCHEWUOIBJYSEXNJJPP");
    msg.flags = 153U;
    const signed char tmp_msg_0[] = {-26, -78, 97, -98, 32, -6, 21, 19, 14, 91, -51, -41, 82, -78, -118, -56, 63, 91, 105, 93, -85, 78, 112, 89, 1, -49, 0, -98, 125, -41, 77, 111, 124};
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
    msg.setTimeStamp(0.8659112955173561);
    msg.setSource(30985U);
    msg.setSourceEntity(84U);
    msg.setDestination(31472U);
    msg.setDestinationEntity(92U);
    msg.sys_src.assign("RSCYJMLOQHHEJQLXYVHSNFUAUCKRIHDGSFRHXCUUGIVQEYWZQAGJUXOAMKWJPCDHZNCLMMGWXTEQJHPNICLXZSTZICJRTPUSQYSNSYGXMQKBWMZXLYUPWAIFAPTELOVFRRYGZIBIGNPDWCFWVWKJVPMEGWGOSADBNHSVKOWUTENZTKNHDBSNFAJHLDVOBIQQKOYLRMXBJTIYVERFFTKMQPCXTOVJOPDBZDRGFLEPDXC");
    msg.sys_dst.assign("LHIWACNYPCXIUBKASEXSNFFVLVBLKXMDMDPIJ");
    msg.flags = 220U;
    const signed char tmp_msg_0[] = {114, 43, 51, -81, -115, 76, 62, 59, -107, 31, 20, -83, 67, -39, 25};
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
    msg.setTimeStamp(0.15847174599929836);
    msg.setSource(54231U);
    msg.setSourceEntity(247U);
    msg.setDestination(17958U);
    msg.setDestinationEntity(91U);
    msg.sys_src.assign("EVVUXPIAFELQVQRKCTYTLMVTEHGZHFCQOUFUOQRKOXEDQJSXUWWFUBFRPNGYRZAMOKSSCEWKDJTTCTSETYSUWGQRHDAMZLOXXYZHQXFMAMYBLYNFAONJEJNIOFGXJPUSABWEQIVPVLIHMLRZSDZAKZDNCMDJMBZTJLORYANNBDJFUVVIIUBXYVC");
    msg.sys_dst.assign("BOJFRTERNQUQBJUDIWWYNNOCMLAQUGXYSRLLZI");
    msg.flags = 118U;
    const signed char tmp_msg_0[] = {-83, 49, 15, 83, -102, 24, -20, 69, 3, 23, 95, -27, -71, 67, 64, 41, -93, -43, -7, -43, 93, 119, -42, 69, -45, 57, 58, 30, 39, -126, 57, 39, -95, -63, -5, -55, -28, 37, 14, -44, 44, 19, 117, -116, -75, 86, -82};
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
    msg.setTimeStamp(0.9343515236909852);
    msg.setSource(64624U);
    msg.setSourceEntity(3U);
    msg.setDestination(40681U);
    msg.setDestinationEntity(228U);
    msg.sys_src.assign("WYWEDXPCJBFYHMQXRDYZUYQFWUZTYEQOT");
    msg.sys_dst.assign("XYKAMVHHJRDFUALDIZWVGGZMDBFYZASDQDKBBLPMLCPJHKOGWTUSSHZMMZOBHRQEWYJTLQBUINTVQOEXFAFXNDIDAAZKVHAHSKJZDJHVBXHGIS");
    msg.flags = 139U;
    const signed char tmp_msg_0[] = {-74, -110, -69, 69, 21, 113, 23, -71, -86, -120, -41, 20, 4, -45, -30, -81, -66, 30, 99, 73, 10, 34, -19, -6, -2, 84, -33, 84, -57, -46, -106, 102, -103, -126, 124, 12, -35, 17, -119, -68, -23, -10, 23, 73, 72, -73, 71, -120, -113, 29, 53, -86, 85, 55, 49, 36, 15, -39, 77, -58, -80, -8, -115, -61, -112, -90, 35, -46, 118, 99, -121, -76, 103, -84, -22, 14, -87, 43, -118, -46, 26, -117, 63, 87, -75, -106, -65, -34, 68, 118, 73, 11, -32, 98, -11, 35, 17, 15, 11, 69, 36, 11, 7, -70, -34, -31, 45, -103, 124, 108, 118, -94, 86, -113, 67, 57, 7, 74, -123, 23, -115, 111, -67, -64, 0, 21, -79, 19, 103, -25, -11, -54, 126, -81, 45, 74, 85, -8, 126, 19, -80, 21, 29, 22};
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
    msg.setTimeStamp(0.4438268157811285);
    msg.setSource(57191U);
    msg.setSourceEntity(61U);
    msg.setDestination(44434U);
    msg.setDestinationEntity(141U);
    msg.seq = 3184U;
    msg.value = 112U;
    msg.error.assign("YURXAODRVGXLOWNLLHONWIKEGFUDBYWNY");

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
    msg.setTimeStamp(0.7109137897215383);
    msg.setSource(40298U);
    msg.setSourceEntity(180U);
    msg.setDestination(19889U);
    msg.setDestinationEntity(67U);
    msg.seq = 1817U;
    msg.value = 2U;
    msg.error.assign("ZMSCIASZLOLFZMKTWDUHGLMVBGGRMVWESZJNPUTLVSHLAGEHKXCIQYBSEMQDJGOQKENTKFEJKRKFARVUPVDFZJJRDRZMCALEBWQFKQXTABEFHPSMUOBRZHTXPNCCAIFRNIVOPPASDNFQUBAKWKWNZAPCLTWWVMGQUDXOENWJJUIHXDYOJNVIEHHOCTBCQPLYQHFXQJCTICGVGRPWIYUVJYAYMODOS");

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
    msg.setTimeStamp(0.13884023756064134);
    msg.setSource(33277U);
    msg.setSourceEntity(171U);
    msg.setDestination(26799U);
    msg.setDestinationEntity(178U);
    msg.seq = 7230U;
    msg.value = 201U;
    msg.error.assign("URSFGVLPYMCMZBKLKRYOYPOTVGVVSKXBOJDZZVASDZXZGMDDTBIQDHAVHTZMOOSRNMGHNBXWBWRWMQWORORGDBJJXFAOQUNGTIFPK");

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
    msg.setTimeStamp(0.07449997674280784);
    msg.setSource(58416U);
    msg.setSourceEntity(148U);
    msg.setDestination(51533U);
    msg.setDestinationEntity(20U);
    msg.seq = 60588U;
    msg.sys.assign("OIBXGBZCGHBKPJEYSMDSJEHGTDAOPQTEWRFZAWJYOPIATXYDNNCCJHRRJCBEITWWEYKFHLHHRQOSIJIMKZUADKFIZFXAMBLTOBCVXPGISJUFAQAVNBBZHDMPVZUZUUXZVYSUXFRTBPYPVQVZQXLRLWTVZVVKULQCSHOSDIFAUETNRMTYXEEYFNMNOHKBUJSUGTEGIQCKWKQFOCKSXANGYLXWVDCASRYWPIJMG");
    msg.value = 0.5816795199135529;

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
    msg.setTimeStamp(0.5863848378544618);
    msg.setSource(21462U);
    msg.setSourceEntity(129U);
    msg.setDestination(57611U);
    msg.setDestinationEntity(108U);
    msg.seq = 5716U;
    msg.sys.assign("IGSTNPZJWHVGVMYGQBPPEXZARMSWGJUNAVSQICXQBWCUEKQA");
    msg.value = 0.9023889466260733;

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
    msg.setTimeStamp(0.6081520108205682);
    msg.setSource(63143U);
    msg.setSourceEntity(42U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(76U);
    msg.seq = 16662U;
    msg.sys.assign("OQZPCAVHDZZPYHWGLSHINRMDKSBVJMGREFWSJXYKFGKCOXQLONKRVNBSLDBDOEGHMVVIIHYWRPJXZICLMGMLPFABDECIFUTIXGZBRKZWJCXKCBWFYTJBFTIIQASNCKDWUEUMRXWDBAMSQHYPUEENFXTGUWHNZLXONTRYAYGSGSYTPQIVMXAKKPEKQRTSAJABEXTNUZOGTNYUVAVCVQLJUFDFCBZVPHHLOLYJCQJEEJLDMQDSRW");
    msg.value = 0.6290815145742202;

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
    msg.setTimeStamp(0.7224645477581251);
    msg.setSource(56418U);
    msg.setSourceEntity(71U);
    msg.setDestination(7697U);
    msg.setDestinationEntity(122U);
    msg.seq = 3960U;
    msg.sys_dst.assign("VQWZQRKHWGCGJWSVMMZDTQDUYGVEHODWNIZFOFCJWAFTEMMEURBABGBIIYZSJBGCLAI");
    msg.timeout = 0.2779738592845571;

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
    msg.setTimeStamp(0.9813055381911063);
    msg.setSource(19650U);
    msg.setSourceEntity(23U);
    msg.setDestination(22523U);
    msg.setDestinationEntity(154U);
    msg.seq = 14219U;
    msg.sys_dst.assign("XEFLYQKCDHSANLNXVGEIZXTIU");
    msg.timeout = 0.4892134675939488;

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
    msg.setTimeStamp(0.6563863288543548);
    msg.setSource(18679U);
    msg.setSourceEntity(72U);
    msg.setDestination(7979U);
    msg.setDestinationEntity(227U);
    msg.seq = 22608U;
    msg.sys_dst.assign("VJFQLXXQWFUNMJLFIPGFOBOVOBSYRF");
    msg.timeout = 0.9271172537202841;

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
    msg.setTimeStamp(0.9478352906879195);
    msg.setSource(14300U);
    msg.setSourceEntity(171U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(251U);
    msg.action = 118U;
    msg.longain = 0.21430178031574998;
    msg.latgain = 0.30066795246366007;
    msg.bondthick = 673880448U;
    msg.leadgain = 0.14773025542727292;
    msg.deconflgain = 0.28938649928891436;

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
    msg.setTimeStamp(0.42562946859015527);
    msg.setSource(42146U);
    msg.setSourceEntity(42U);
    msg.setDestination(22634U);
    msg.setDestinationEntity(46U);
    msg.action = 104U;
    msg.longain = 0.8125497335814664;
    msg.latgain = 0.41672544806151834;
    msg.bondthick = 1727835278U;
    msg.leadgain = 0.4770927597445015;
    msg.deconflgain = 0.2261956491397792;

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
    msg.setTimeStamp(0.8311979655788362);
    msg.setSource(31121U);
    msg.setSourceEntity(74U);
    msg.setDestination(29010U);
    msg.setDestinationEntity(184U);
    msg.action = 202U;
    msg.longain = 0.793416185301908;
    msg.latgain = 0.2729337170690741;
    msg.bondthick = 4028583722U;
    msg.leadgain = 0.5690566990780104;
    msg.deconflgain = 0.2725778685580569;

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
    msg.setTimeStamp(0.9488850268967409);
    msg.setSource(737U);
    msg.setSourceEntity(181U);
    msg.setDestination(38272U);
    msg.setDestinationEntity(36U);
    msg.err_mean = 0.6214391469113961;
    msg.dist_min_abs = 0.21712279923990518;
    msg.dist_min_mean = 0.5844915467326488;

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
    msg.setTimeStamp(0.27675899955071004);
    msg.setSource(34245U);
    msg.setSourceEntity(86U);
    msg.setDestination(2157U);
    msg.setDestinationEntity(108U);
    msg.err_mean = 0.4231306833396026;
    msg.dist_min_abs = 0.9277335061460259;
    msg.dist_min_mean = 0.5324637762324815;

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
    msg.setTimeStamp(0.7498457114297592);
    msg.setSource(21285U);
    msg.setSourceEntity(4U);
    msg.setDestination(4197U);
    msg.setDestinationEntity(151U);
    msg.err_mean = 0.14469876392390701;
    msg.dist_min_abs = 0.74990744122451;
    msg.dist_min_mean = 0.6508921433859384;

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
    msg.setTimeStamp(0.185618002939702);
    msg.setSource(56483U);
    msg.setSourceEntity(148U);
    msg.setDestination(35299U);
    msg.setDestinationEntity(155U);
    msg.action = 41U;
    msg.lon_gain = 0.49924471687275374;
    msg.lat_gain = 0.8476930515829575;
    msg.bond_thick = 0.5602288550289091;
    msg.lead_gain = 0.7714125621853204;
    msg.deconfl_gain = 0.02745882142048406;
    msg.accel_switch_gain = 0.7974020754155657;
    msg.safe_dist = 0.32917312723940506;
    msg.deconflict_offset = 0.7008041168639645;
    msg.accel_safe_margin = 0.05850850333296487;
    msg.accel_lim_x = 0.13540710403539935;

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
    msg.setTimeStamp(0.7177961802635555);
    msg.setSource(49387U);
    msg.setSourceEntity(54U);
    msg.setDestination(21549U);
    msg.setDestinationEntity(175U);
    msg.action = 34U;
    msg.lon_gain = 0.5467370040888256;
    msg.lat_gain = 0.2328234049722514;
    msg.bond_thick = 0.4340572870517929;
    msg.lead_gain = 0.42710357607758564;
    msg.deconfl_gain = 0.8046340168362438;
    msg.accel_switch_gain = 0.0001542696529044374;
    msg.safe_dist = 0.9668400947351857;
    msg.deconflict_offset = 0.09101802034301087;
    msg.accel_safe_margin = 0.06977436587752572;
    msg.accel_lim_x = 0.9668811775883019;

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
    msg.setTimeStamp(0.5909210779427972);
    msg.setSource(60508U);
    msg.setSourceEntity(120U);
    msg.setDestination(8409U);
    msg.setDestinationEntity(181U);
    msg.action = 251U;
    msg.lon_gain = 0.7926543840356589;
    msg.lat_gain = 0.3176908659953275;
    msg.bond_thick = 0.09415453111038508;
    msg.lead_gain = 0.4030294711626199;
    msg.deconfl_gain = 0.41723042104897523;
    msg.accel_switch_gain = 0.620774533822789;
    msg.safe_dist = 0.8830017644551567;
    msg.deconflict_offset = 0.8663775251299971;
    msg.accel_safe_margin = 0.0014782767138969977;
    msg.accel_lim_x = 0.769334363381584;

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
    msg.setTimeStamp(0.756259763445576);
    msg.setSource(20208U);
    msg.setSourceEntity(240U);
    msg.setDestination(36431U);
    msg.setDestinationEntity(198U);
    msg.type = 17U;
    msg.op = 35U;
    msg.err_mean = 0.7859935725339853;
    msg.dist_min_abs = 0.0005896598946827369;
    msg.dist_min_mean = 0.8635638137225262;
    msg.roll_rate_mean = 0.666511626224983;
    msg.time = 0.22540308585987323;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 139U;
    tmp_msg_0.lon_gain = 0.15837029171850303;
    tmp_msg_0.lat_gain = 0.7729755137286098;
    tmp_msg_0.bond_thick = 0.8920822716509998;
    tmp_msg_0.lead_gain = 0.5438408689631912;
    tmp_msg_0.deconfl_gain = 0.5173011134337009;
    tmp_msg_0.accel_switch_gain = 0.5891904559077533;
    tmp_msg_0.safe_dist = 0.6230809508339936;
    tmp_msg_0.deconflict_offset = 0.01925831009880341;
    tmp_msg_0.accel_safe_margin = 0.953494400737775;
    tmp_msg_0.accel_lim_x = 0.030509620607808374;
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
    msg.setTimeStamp(0.8688910016859381);
    msg.setSource(63693U);
    msg.setSourceEntity(107U);
    msg.setDestination(11554U);
    msg.setDestinationEntity(229U);
    msg.type = 176U;
    msg.op = 147U;
    msg.err_mean = 0.7084670717104473;
    msg.dist_min_abs = 0.5702634635702949;
    msg.dist_min_mean = 0.3004970052260558;
    msg.roll_rate_mean = 0.9243447241072583;
    msg.time = 0.9240732112662319;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 150U;
    tmp_msg_0.lon_gain = 0.7104042190456231;
    tmp_msg_0.lat_gain = 0.17426058104495035;
    tmp_msg_0.bond_thick = 0.13244631699954756;
    tmp_msg_0.lead_gain = 0.8905915759465066;
    tmp_msg_0.deconfl_gain = 0.008063461093371083;
    tmp_msg_0.accel_switch_gain = 0.7092993491751409;
    tmp_msg_0.safe_dist = 0.6552404336561348;
    tmp_msg_0.deconflict_offset = 0.6915755629495167;
    tmp_msg_0.accel_safe_margin = 0.5473609288465326;
    tmp_msg_0.accel_lim_x = 0.25467124436501976;
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
    msg.setTimeStamp(0.6041017921667882);
    msg.setSource(10617U);
    msg.setSourceEntity(133U);
    msg.setDestination(18694U);
    msg.setDestinationEntity(147U);
    msg.type = 69U;
    msg.op = 137U;
    msg.err_mean = 0.7763223332699029;
    msg.dist_min_abs = 0.29696739024274577;
    msg.dist_min_mean = 0.04998056620322089;
    msg.roll_rate_mean = 0.8550975492074018;
    msg.time = 0.3180287869722189;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 245U;
    tmp_msg_0.lon_gain = 0.8826771543641688;
    tmp_msg_0.lat_gain = 0.6027013482980035;
    tmp_msg_0.bond_thick = 0.4242056033868602;
    tmp_msg_0.lead_gain = 0.4797359592158116;
    tmp_msg_0.deconfl_gain = 0.49018787776338757;
    tmp_msg_0.accel_switch_gain = 0.19630987168295844;
    tmp_msg_0.safe_dist = 0.44494332226667754;
    tmp_msg_0.deconflict_offset = 0.23384724963042258;
    tmp_msg_0.accel_safe_margin = 0.7099578616446667;
    tmp_msg_0.accel_lim_x = 0.4879267288902094;
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
    msg.setTimeStamp(0.6513402535745308);
    msg.setSource(25780U);
    msg.setSourceEntity(34U);
    msg.setDestination(7848U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.6178754401750246;
    msg.lon = 0.08973941961269638;
    msg.eta = 3766780945U;
    msg.duration = 28925U;

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
    msg.setTimeStamp(0.08943899875224681);
    msg.setSource(62570U);
    msg.setSourceEntity(86U);
    msg.setDestination(35279U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.7351237679744196;
    msg.lon = 0.3357351755574911;
    msg.eta = 474127829U;
    msg.duration = 51977U;

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
    msg.setTimeStamp(0.7021622303672893);
    msg.setSource(7168U);
    msg.setSourceEntity(135U);
    msg.setDestination(4028U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.1359410216034298;
    msg.lon = 0.5340777804324066;
    msg.eta = 114209370U;
    msg.duration = 3557U;

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
    msg.setTimeStamp(0.3212757695161671);
    msg.setSource(20630U);
    msg.setSourceEntity(225U);
    msg.setDestination(2688U);
    msg.setDestinationEntity(23U);
    msg.plan_id = 63377U;

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
    msg.setTimeStamp(0.041026360253047955);
    msg.setSource(47694U);
    msg.setSourceEntity(109U);
    msg.setDestination(58141U);
    msg.setDestinationEntity(201U);
    msg.plan_id = 37100U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8424518918533881;
    tmp_msg_0.lon = 0.981287598135549;
    tmp_msg_0.eta = 901256921U;
    tmp_msg_0.duration = 40515U;
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
    msg.setTimeStamp(0.002446718233899192);
    msg.setSource(28399U);
    msg.setSourceEntity(218U);
    msg.setDestination(14378U);
    msg.setDestinationEntity(241U);
    msg.plan_id = 29488U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.049654595636379084;
    tmp_msg_0.lon = 0.3208560813809148;
    tmp_msg_0.eta = 1725065172U;
    tmp_msg_0.duration = 20744U;
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
    msg.setTimeStamp(0.24605571181727204);
    msg.setSource(49708U);
    msg.setSourceEntity(247U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(136U);
    msg.type = 28U;
    msg.command = 96U;
    msg.settings.assign("WWZYORSVXFUEYFYSCZUDAAKTVNNVVMFYARWLFBQZTTBYZOUROZNJPJGBHIZLKKACZQS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 1329U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9331032988335326;
    tmp_tmp_msg_0_0.lon = 0.49791464206115343;
    tmp_tmp_msg_0_0.eta = 4217684341U;
    tmp_tmp_msg_0_0.duration = 64737U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PXKNOKMPWCMCPYJWJLRDKZUYHETCXFRATUXFVNWLLESIWEYVXQJIHCVWHZTBFYHLRYIHTJDKNDPZAICSQGBSSZDEOEVIDBEFITDJNGBIORWJUTUSPBUYTEJUJOQUNWXUGCEDSZOQOXPMBGVBYAMAMRQWRNAQGVMKSPFFXGNFIZGXZMJYHPIKNXYGDLFRA");

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
    msg.setTimeStamp(0.5063461070510265);
    msg.setSource(26285U);
    msg.setSourceEntity(44U);
    msg.setDestination(9598U);
    msg.setDestinationEntity(81U);
    msg.type = 29U;
    msg.command = 16U;
    msg.settings.assign("PVJTRZEEGURKQADNNPUOLZCUORRACMUPDHCEVCQXWAFNFBXOZJQIOYMTLUGIGDTSCWHCKSHMLDQBEIUGMERIWVFDIOCWZBVKQKJARLXFBYRLNFPXAFFLTNGJCJHKOMDQWSQDKPSESXVVWXMLZWMYJIYFPXVZBMJRGEOTVANJUUNNTPAXZQIAHINOSELORULPKHBOCBGJGZHZTAWPRXSWYDVNBSDBIFATCUEM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 8317U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WVUJKCXVAYXWGLVZQADSZGXLOXVPDNNRGXLWDBLBRQGXCRHOKBEQIKUIFUFWWQPBMROGKDFAVNRLMYDJZJLSQCNNQFQZBHUIZMMUOVAOYOCHCNGFEIYHCKYYKUASSMBRAEMYJTFRMOXASPTJQSGZZPDKFFWNOYUXRUDYMYLETTQNEIGCWVHORUILKFHTNJBEQPZNCVUVEMXSDZWVEDEERHTJ");

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
    msg.setTimeStamp(0.4637139682974629);
    msg.setSource(8704U);
    msg.setSourceEntity(57U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(24U);
    msg.type = 85U;
    msg.command = 194U;
    msg.settings.assign("SHZTUROMROILNTLTGFUHDLPLEGWLCWTQBCTLHBGYJWFYKMJUPJGJVYWKFVDKNACEESACVWUVLSMVQXNGBGYUHXQGMJVZHIXDJIPUGEWDOS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42854U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7102466888349686;
    tmp_tmp_msg_0_0.lon = 0.25763162975921094;
    tmp_tmp_msg_0_0.eta = 2938675820U;
    tmp_tmp_msg_0_0.duration = 21561U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SJZGFBAWRTULYBANKSYPHVETXGLCQRTEJDSMBYNOVRDSFYNKOROHSSCTJXUUQXMVGFLHAMBBJGCGBCJNHJYLVIITFPCWUOVIPUPGIDIJACELOHHZXYYXRWFDXVRMGEWAAFZNMBLLXWCCCVEDEXFTUSVTPVZDI");

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
    msg.setTimeStamp(0.20229445185424344);
    msg.setSource(38333U);
    msg.setSourceEntity(188U);
    msg.setDestination(18073U);
    msg.setDestinationEntity(101U);
    msg.state = 64U;
    msg.plan_id = 39131U;
    msg.wpt_id = 18U;
    msg.settings_chk = 54924U;

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
    msg.setTimeStamp(0.5360111987715206);
    msg.setSource(57101U);
    msg.setSourceEntity(89U);
    msg.setDestination(15245U);
    msg.setDestinationEntity(71U);
    msg.state = 61U;
    msg.plan_id = 17885U;
    msg.wpt_id = 84U;
    msg.settings_chk = 62801U;

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
    msg.setTimeStamp(0.7430763816755317);
    msg.setSource(15406U);
    msg.setSourceEntity(154U);
    msg.setDestination(14899U);
    msg.setDestinationEntity(2U);
    msg.state = 30U;
    msg.plan_id = 34308U;
    msg.wpt_id = 55U;
    msg.settings_chk = 29733U;

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
    msg.setTimeStamp(0.09623962803046537);
    msg.setSource(51313U);
    msg.setSourceEntity(112U);
    msg.setDestination(27909U);
    msg.setDestinationEntity(183U);
    msg.uid = 175U;
    msg.frag_number = 31U;
    msg.num_frags = 96U;
    const signed char tmp_msg_0[] = {75, 57, 45, -27, -87, -15, -112, 50, 58, 40, 13, -116, -77, 80, -32, -9, -112, -103, -70, 60, -52, -56, 79, -37, 120, 18, -11, -36, -40, 46, 119, 64, 92, 24, -26, -94, -125, -124, 70, 100, -70, -122, 85, -115, 64, -27, 99, -92, -33, 72, -38, 98, -105, 124, -104, -64, -88, -99, 54, -115, -82, -64, 95, 25, -82, -119, 103, -128, -7, -70, 95, -102, 56, 37, 9, 83, -80, 15, 116, -107, -1, 82, 26, 22, -79, 75, 91, -104, 113, -112, 103, -71, -123, 102, -30, -6, 94, -121, -81, -80, -114, 109, 100, -122, 107, -107, -85, 87, -64, -104, 125, 94, -110, -16, 123, 21, -105, -82, -46, -118, 90, 27, 84, -29, 118, 94, -73, -100, 60, 32, 53, 97, 90, -114, -7, 71, 110, -76, -14, 84, -113, 62, 65, 10, 85, 94, -11, -88, 96, -120, -83, 46, 121, -38, 21, 85, -103, 97, -98, -27, 6, -125, 106, 20, -43, 59, 13};
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
    msg.setTimeStamp(0.7097150100025571);
    msg.setSource(46109U);
    msg.setSourceEntity(125U);
    msg.setDestination(27488U);
    msg.setDestinationEntity(37U);
    msg.uid = 74U;
    msg.frag_number = 85U;
    msg.num_frags = 106U;
    const signed char tmp_msg_0[] = {53, -87, 63, -62, -48, 40, -31, -82, -123, -2, -35, -35, -111, 67, 9, -41, -56, 47, -6, 26, -74, -20, 1, -4, -95, -25, -112, -65, 22, -41, -74, -53, -52, 65, 14, -4, -98, 73, 45, -63, 10, -47, -53, -31, -44, -128, -126, 29, -74, -91, -65, 57, -11, 5, -37, -74, 112, -11, 92, -22, 47, 71, 22, 36, 54, 11, -57, 4, -97, 100, 23, 85, 117, 85, -29, -25, 29, -73, -61, -128, -124, 63, 103, 45, -109, -93, -32, 113, -92, -109, -5, -79, 100, 53, -49, -25, 30, -25, -126, -27, 110, -115, -94, 79, 69, 117, -59, -70, -99, -6, 33, 63, 13, -111, -84, -56, -52, -2, -75, -49, 108, 20, -13, 87, 71, -88, -11, 38, -106, 124, 14, -12, 48, 100, -93, -23, 26, 33, 56, 102, -44, -49, -93, 112, 30, -31, 27, 17, 73, 97, -50, 76, -3, -32, -105, 15, 111, -53, 32, -97, 11, 107, -60, 50, -106, 119, 61, 124, 118, -122, -112, -96, -81, 120, 49, -11, -57, -1, 61, -55, -14, -42, -109, 98, 88, -11, 113, -106, -93, -28, 57, -45, -25, 96, 120, 21, 109, 95, 38, 69, 107, -50, -124, 124, -83, -77, 103, 60, -15, -43, 99, -120, 83, -95, -43, -45, -52, 125, 8, -68, 6, 49, 120, -49, 20, 17, 126, -100, 51, -80, 22, 71, -80, -58};
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
    msg.setTimeStamp(0.7885997162237317);
    msg.setSource(56962U);
    msg.setSourceEntity(145U);
    msg.setDestination(49848U);
    msg.setDestinationEntity(142U);
    msg.uid = 141U;
    msg.frag_number = 180U;
    msg.num_frags = 124U;
    const signed char tmp_msg_0[] = {18, -25, -127, -50, 86, -111, -107, 121, -68, -74, 63, -76, 69, 72, -27, -15, 68, -59, 65, -22, 8, 59, 107, -34, 116, 24, 23, -127, -77, -5, -49, 88, -36, -118, -53, 24, -47, 22, -98, 95, 25, 17, -56, 119, -20, -121, -17, -28, -34, 113, 90, -60, 19, -97, 52, 17, -26, -115, 27, -61, 43, 0, -63, 19, -21, 120, 29, 79, -7, 8, -22, 122, -68, -74, -66, 88, -98, -126, 47, -91, 69, 61, -80, 53, -52, 93, 117, 55, 54, -72, 2, -31, 95, 80, 13, -48, 84, -17, -73, -1, 125, 59, 13, -53, 92, 1, -89, -86, -39, -47, -110, 65, 83, 48, 126, 3, -99, 53, 63, 36, -84, -48, -91, -7, -36, -114, 76, -116, -37, 40, 121, 82, 126, 104, -11, 89, -40, 11, 29, -29, -99, -58, 74, 47, 87, -63, 44, 28, 60, 26, -23, -72, 121, 83, 122, 114, -37, -128, 89, -54, -72, 20, -109, -44, 42, 56, -114, -128, 69, -95, 54, 58, 30, -9, 120, -25, 117, -22, 68, 94};
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
    msg.setTimeStamp(0.23481727619387116);
    msg.setSource(44033U);
    msg.setSourceEntity(58U);
    msg.setDestination(32490U);
    msg.setDestinationEntity(152U);
    msg.content_type.assign("NCUZUWHEGYXGXJQVIHWFVOOEDKJXYTQTBYCMJCVDRJWHZIHKNHIYEQTFOQZLWZOMHBQAFYUSISMMRKRXKTKUTOBZWQMRSALAIPLBSOJMTWYLGLYNAMRADJIQWWBGPSF");
    const signed char tmp_msg_0[] = {112, 45, 40, 118, -118, -70, -123, -35, 75, 50, -109, -32, 98, -52, 89, -79, 98, -98, 65, -61, -48, 69, 73, -79, -10, 7, 119, -44, -52, -21, -124, 5, 21, 95, -24, -63, 103, -79, -83, 38, -124, -22, 108, -126, 119, 30, 111, -116, -19, 6, 20, 80, 11, 105, -57, -126, 16, 94, 12, -114, 7, -96, -126, -114, 23, -106, 62, 84, -48, -120, -3, 50, -55, -122, 60, -3, -16, -103, -46, -70, -79, -25, -25, 13, -1, -67, 74, 83, -55, 75, -114, -45, 112, -113, 95, -104, 90, 73, -52, -57, 27, 88, 124, -55, -110, -61, -28, -45, 19, 108, 105, 24, 97, -5, 82, -93, 17, 56, -43, 86, -49, 7, -81, -104, 18, 97, -60, -121, -32, 23, -73, 25};
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
    msg.setTimeStamp(0.5612706524697948);
    msg.setSource(5636U);
    msg.setSourceEntity(128U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(102U);
    msg.content_type.assign("VHQZMIDGQZPWWWNMOTJTMXDHOFIKJRWZFTWPCTJCPELWIIMMFNBFULCCRKBR");
    const signed char tmp_msg_0[] = {-105, -36, 18, 40, 106, -60, 20, 69, 12, -29, -20, 106, -36, -60, -119, 90, -120, -45, -54, 49, -11, -73, 125, 56, -36, -107, -75, 18, -106, 81, 73, 40, -18, 72, -71, 42, -102, -86, 118, 108, -96, -128, -22, 64, 3, 79, 7, 89, 38, 16, -35, -102, 59, 123, 125, 57, 18, 112, 121, -44, 84, 88, 110, 98, 13, -29, 97, -66, -44, -118, -53, 47, 108, -59, -108, -81, -10, -128, -124, 17, -113, -69, 14, 54, -40, -19, 1, -33, 1, -77, -65, 62, 110, 56, -7, 89, -44, 36, -96, -25, 72, 109, 18, -88, -92, -9, 18, -75, 38, -51, 26, 83, 15, -84, 1, -71, -127, 71, -94, -128, 39, -119, -82, -92, -11, 61, 120, -109, 24, -88, -82, -15, 41, -95, 93, 58, -53, 23, 29, -37, -86, 98, 82, 113, -31, -124, 85, -112, -63, 54, 113, 36, -92, -66, -27, -96, 53, 76, -105, 99, 94, -64, 63, -115, -86, -59, 89, 117, -20, -3, -94, 30, 50, -82, 113, -80, 114, -71, -107, -96, 20, 85, 50, -103, 108, -102, -113, -57, -91, -110, 115, -77, -42, -126, 33, 64, -12, 8, -11, -80, 114, 99, -102, -45, 20, 20, -88, 68, -40, 114, -97, -106, 77, 7, -15, -78, -112, 9, -5, 22, -10, -44, -76, 13, -114, 72, -121, -31, 71, 122, 60, 37, 37, -79, 113, 3, 12, -23, 120, -11, -127, -8, -115, 84, 108, 59, -30, -85, -111, -72, -34, -41};
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
    msg.setTimeStamp(0.5481232089391023);
    msg.setSource(37279U);
    msg.setSourceEntity(29U);
    msg.setDestination(63464U);
    msg.setDestinationEntity(143U);
    msg.content_type.assign("IPRSOKEDPRRTIAJLHFMNNTHXKZTKCMTBGUVSWQZSOWHZZYMEEENRXZJLEXUFDYNDFCFW");
    const signed char tmp_msg_0[] = {-61, 7, 24, -30, -16, -78, -58, -26, -69, -51, -123, -78, -114, -70, 1, 34, -106, -81, 115, 101, 124, 73, 67, -27, 126, -41, -67, 56, -115, 63, 115, -102, 71, -8, 113, 65, -61, -67, 23, -31, -97, 103, -30, 55, 121, 27, 109, 123, 75, 78, 96, 82, 72, -99, -120, 102, 15, -117, -118, -15, 99, -62, 99, 34, 76, -52, 68, 39, -124, 94, 6, 44, 50, -122, 19, 2, 113, -93, -36, 107, 115, -63, 47, 111, -16, 92, 71, 27, 9, 1, 79, 41, 33, 64, -103, 44, 86, 43, 111, 26, 71, -109, -56, 101, 76, -110, -71, -104, -47, 27, -103, 29, -17, 115, -36, 64, -93, 57, -122, -34, 91, -49, 7, 3, -86, -89, -73, -87, -82, 103, 30, -35, 121, -23};
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
    msg.setTimeStamp(0.16183640611827432);
    msg.setSource(16596U);
    msg.setSourceEntity(37U);
    msg.setDestination(12193U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.40935596893766835);
    msg.setSource(25051U);
    msg.setSourceEntity(123U);
    msg.setDestination(8925U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.2573392286158964);
    msg.setSource(7564U);
    msg.setSourceEntity(186U);
    msg.setDestination(58786U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.9911253721560601);
    msg.setSource(44788U);
    msg.setSourceEntity(232U);
    msg.setDestination(57370U);
    msg.setDestinationEntity(220U);
    msg.target = 32011U;
    msg.bearing = 0.7646411966086483;
    msg.elevation = 0.33241339574663575;

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
    msg.setTimeStamp(0.9733191470009437);
    msg.setSource(11066U);
    msg.setSourceEntity(158U);
    msg.setDestination(39915U);
    msg.setDestinationEntity(59U);
    msg.target = 5286U;
    msg.bearing = 0.2996300918339695;
    msg.elevation = 0.6203455345335479;

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
    msg.setTimeStamp(0.6369603484808971);
    msg.setSource(36347U);
    msg.setSourceEntity(211U);
    msg.setDestination(27852U);
    msg.setDestinationEntity(25U);
    msg.target = 25590U;
    msg.bearing = 0.26476453386350474;
    msg.elevation = 0.07899099797231812;

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
    msg.setTimeStamp(0.19688783375847374);
    msg.setSource(16078U);
    msg.setSourceEntity(31U);
    msg.setDestination(24810U);
    msg.setDestinationEntity(138U);
    msg.target = 3478U;
    msg.x = 0.7180521750509692;
    msg.y = 0.18798265509449963;
    msg.z = 0.630146581994875;

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
    msg.setTimeStamp(0.9425895486889705);
    msg.setSource(49103U);
    msg.setSourceEntity(245U);
    msg.setDestination(33455U);
    msg.setDestinationEntity(69U);
    msg.target = 33879U;
    msg.x = 0.956833547839294;
    msg.y = 0.9483911093774776;
    msg.z = 0.42142940040952837;

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
    msg.setTimeStamp(0.9791560878466663);
    msg.setSource(36786U);
    msg.setSourceEntity(137U);
    msg.setDestination(33525U);
    msg.setDestinationEntity(62U);
    msg.target = 44160U;
    msg.x = 0.8618886978083434;
    msg.y = 0.7457299248632329;
    msg.z = 0.7397107938685374;

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
    msg.setTimeStamp(0.38432766711752175);
    msg.setSource(2588U);
    msg.setSourceEntity(63U);
    msg.setDestination(6297U);
    msg.setDestinationEntity(168U);
    msg.target = 608U;
    msg.lat = 0.08820247409005044;
    msg.lon = 0.3973940450748421;
    msg.z_units = 136U;
    msg.z = 0.04286069257689307;

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
    msg.setTimeStamp(0.5332153523378386);
    msg.setSource(64280U);
    msg.setSourceEntity(217U);
    msg.setDestination(51587U);
    msg.setDestinationEntity(41U);
    msg.target = 33536U;
    msg.lat = 0.7124872237954307;
    msg.lon = 0.8433596273191012;
    msg.z_units = 58U;
    msg.z = 0.28674430884818347;

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
    msg.setTimeStamp(0.31976807235118987);
    msg.setSource(20929U);
    msg.setSourceEntity(25U);
    msg.setDestination(43779U);
    msg.setDestinationEntity(36U);
    msg.target = 25440U;
    msg.lat = 0.45400384445974085;
    msg.lon = 0.25155890307468365;
    msg.z_units = 121U;
    msg.z = 0.2778292021378421;

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
    msg.setTimeStamp(0.8211545590434288);
    msg.setSource(44242U);
    msg.setSourceEntity(209U);
    msg.setDestination(44895U);
    msg.setDestinationEntity(227U);
    msg.locale.assign("UCTNXHEXOMXPBELXJUYMRGSSWQARVPXQSZJBL");
    const signed char tmp_msg_0[] = {41, -84, -59, -62, -93, -72, 85, -126, 101, -83, 37, 50, 75, -73, 53, -59, -35, -27, -126, 50, -53, 34, 123, 38, -62, 40, 23, -84, -85, -57, 86, 24, 86, -83, -91, -66, 95, -112, 123, 97, -33, 66, -110, -44, -15, 110, 41, 31, 26, -96, -115, 37, -12, -102, -93, -109, 109, 34, 90, -118, -33, -82, -118, -97, -88, -110, -88, 114, -69, 104, -5, 93, 117, 79, -92, 63, -53, -62, -18, 110, -60, -126, -19, -79, 105, -56, 19, -56, 28, -125, 88, 49, -72, -75, 43, 72, -119, -30, -48, 101, -26, -111, -105, -16, -36, -62, 125, -61, -44, 45, -12, 53, -108, 72, 23, 29, -74, 62, 90, 71, 81, 35, -29, -92, -42, -128, -91, -5, -113, -120, -18, 20, 67, -5, -55, -14, -72, -2, 80, 73, -58, -45, 124, 42, 83, 93, 41, 117, 65, -106, 67, 48, 47, -19, -118, 35, -18, -18, -79, 17, 68, 32, -54, 14, -27, -89, 89, 42, 66, -105, 73, 107, 15, -100, -47, 41, 79, 41, -17, -15};
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
    msg.setTimeStamp(0.5143354053565262);
    msg.setSource(7600U);
    msg.setSourceEntity(96U);
    msg.setDestination(52203U);
    msg.setDestinationEntity(127U);
    msg.locale.assign("EEKTBFNNQRCDQFICHWYOVJIZGPBRVKREDUKIXTAGGZTJIJOFPUWALUSXDKULRWHSLTEAGMIACBLLXTYXSQXXQMGNRCJLBRHXZVPWLCFWEMKUHMOGWTDYFJWIOECKFPDNVKAVHMDQKGPCUFEOBTVOJGILVZZYPRHCXPASSEAODJYWGNPXNOXYCNSMUJDHPLHILZGBNMYBSKTUQPZDZSNBHZVUJCWTQVBFRTJWEOEMOUZRYDAIMS");
    const signed char tmp_msg_0[] = {4, -19, -56, -14, 99, -95, -23, -37, -31, 96, 82, -3, 68, 69, -111, -29, -36, -121, -82, 31, -89, -86, -17, -98, -99, 81, -14, 111, -55, 121, -51, 104, 60, 5, 1, 42, -40, -119, -50, 70, -95, 68, -89, 103, 53, -36, 77, -23, -124, 21, 48, 74, -35, -71, 8, 93, 73, 50, -53, 125, 101, 11, -32, -33, 43, 20, -98, -80, 70, -95, 12, -62, -19, 4, -54, 49, 59, 56, 84, -118, -68, 53, 71, 123, 19, 82, 113, -16, 95, 16, 104, 64, 1, -96, -123, 70, 10, 74, -61, -74, 1, -61, -115, 84, -27, -125, -50, 86, -96, -102, 35, 53, -79, 13, 37, 106, -120, 39, 86, -70, -51, 72, 7, -93, 66, -87, 22, -61, -102, 77, -11, -37, -112, -61, 19, 70, -5, 77, 106, -90, -21, 67, -75, 112, 11, -13};
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
    msg.setTimeStamp(0.7724856037318839);
    msg.setSource(61243U);
    msg.setSourceEntity(188U);
    msg.setDestination(32248U);
    msg.setDestinationEntity(127U);
    msg.locale.assign("MIVGYLYAYSARVFMEKXYAKKPNRAPXPQMUWNORSKCAUUDSNCVRSSHHEYRMLPQRXLXDDBTYNWFQXTCBFXEOVHPQMAATFUEECWBWOCCZZFFYHWIGOHJAUMELMLHHJUOGIONBWLJQCBKFYJNVMDLNOUGRXYKGJIQVJWKYHTZPIVEDGSZBMPCNRXNGXTMUIVQVNTSVGGDZWZHGOHBBCODKFLKULSZBTAJJAFIZUKZEDSPEFJCQ");
    const signed char tmp_msg_0[] = {-81, -115, -50, 108, 96, 22, -85, 30, 34, -117, 70, -114};
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
    msg.setTimeStamp(0.2695320359819984);
    msg.setSource(29146U);
    msg.setSourceEntity(215U);
    msg.setDestination(7445U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.278929297581032);
    msg.setSource(59907U);
    msg.setSourceEntity(187U);
    msg.setDestination(24586U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.2867221287442322);
    msg.setSource(58366U);
    msg.setSourceEntity(182U);
    msg.setDestination(1454U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.8816700418537189);
    msg.setSource(58928U);
    msg.setSourceEntity(122U);
    msg.setDestination(2981U);
    msg.setDestinationEntity(178U);
    msg.camid = 150U;
    msg.x = 39950U;
    msg.y = 11612U;

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
    msg.setTimeStamp(0.14482601641569315);
    msg.setSource(48744U);
    msg.setSourceEntity(165U);
    msg.setDestination(60550U);
    msg.setDestinationEntity(118U);
    msg.camid = 85U;
    msg.x = 57196U;
    msg.y = 27319U;

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
    msg.setTimeStamp(0.5383245803633946);
    msg.setSource(43450U);
    msg.setSourceEntity(0U);
    msg.setDestination(29496U);
    msg.setDestinationEntity(134U);
    msg.camid = 42U;
    msg.x = 9940U;
    msg.y = 22967U;

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
    msg.setTimeStamp(0.04056269225924958);
    msg.setSource(9950U);
    msg.setSourceEntity(41U);
    msg.setDestination(51956U);
    msg.setDestinationEntity(118U);
    msg.camid = 75U;
    msg.x = 53581U;
    msg.y = 46530U;

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
    msg.setTimeStamp(0.8841606418129727);
    msg.setSource(34594U);
    msg.setSourceEntity(215U);
    msg.setDestination(34408U);
    msg.setDestinationEntity(103U);
    msg.camid = 226U;
    msg.x = 54538U;
    msg.y = 65077U;

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
    msg.setTimeStamp(0.7938150014818992);
    msg.setSource(27557U);
    msg.setSourceEntity(249U);
    msg.setDestination(3476U);
    msg.setDestinationEntity(149U);
    msg.camid = 120U;
    msg.x = 45118U;
    msg.y = 37024U;

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
    msg.setTimeStamp(0.10777048838380199);
    msg.setSource(5227U);
    msg.setSourceEntity(71U);
    msg.setDestination(3775U);
    msg.setDestinationEntity(116U);
    msg.tracking = 236U;
    msg.lat = 0.45432304490432707;
    msg.lon = 0.5466989759497726;
    msg.x = 0.10378916934011406;
    msg.y = 0.4448812141056818;
    msg.z = 0.3587275314701762;

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
    msg.setTimeStamp(0.6247924387089941);
    msg.setSource(19634U);
    msg.setSourceEntity(173U);
    msg.setDestination(60833U);
    msg.setDestinationEntity(252U);
    msg.tracking = 189U;
    msg.lat = 0.8652842134651394;
    msg.lon = 0.1057529626098972;
    msg.x = 0.4613345959809021;
    msg.y = 0.2438124617344274;
    msg.z = 0.24432010140377936;

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
    msg.setTimeStamp(0.9643402028473377);
    msg.setSource(18792U);
    msg.setSourceEntity(141U);
    msg.setDestination(39938U);
    msg.setDestinationEntity(114U);
    msg.tracking = 201U;
    msg.lat = 0.7717764243126399;
    msg.lon = 0.08016533402751069;
    msg.x = 0.9602907545236725;
    msg.y = 0.4280989057914487;
    msg.z = 0.15775839852276452;

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
    msg.setTimeStamp(0.5544238535064799);
    msg.setSource(43645U);
    msg.setSourceEntity(187U);
    msg.setDestination(33286U);
    msg.setDestinationEntity(74U);
    msg.target.assign("JYOARIGGEMFWATQAYUANKJFZVLV");
    msg.lbearing = 0.5285888842605675;
    msg.lelevation = 0.7871557206977906;
    msg.bearing = 0.4880045064888676;
    msg.elevation = 0.8031915478167754;
    msg.phi = 0.7403486180098875;
    msg.theta = 0.19957424807883672;
    msg.psi = 0.7016564879516405;
    msg.accuracy = 0.49002456866730526;

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
    msg.setTimeStamp(0.6755645912012772);
    msg.setSource(42954U);
    msg.setSourceEntity(30U);
    msg.setDestination(18854U);
    msg.setDestinationEntity(3U);
    msg.target.assign("KUSGBFISOPEMGMQTJHALMPKSHXSOWZKNVMBVCVQZ");
    msg.lbearing = 0.3939623483818292;
    msg.lelevation = 0.8695209213416328;
    msg.bearing = 0.9955861434020482;
    msg.elevation = 0.08012208096319029;
    msg.phi = 0.6654300504605103;
    msg.theta = 0.37173345333235663;
    msg.psi = 0.22725741450407855;
    msg.accuracy = 0.5681473382637301;

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
    msg.setTimeStamp(0.1304414636987552);
    msg.setSource(58414U);
    msg.setSourceEntity(95U);
    msg.setDestination(17229U);
    msg.setDestinationEntity(157U);
    msg.target.assign("KGUOTDEPKLYPNLYCXDUJCVFIQCBRSSMJYYIAULLJIBTRCCSAWBWEATXZIWVOHBXEYXXMTFDJGNGYTGWACQKJSDZWICZXDKKHFVUOEABNIODKMQFVEEVODRPBQFLRNBVOMLNTCUDTNQUJNPYFLFVBLHZHSUJGPAFACCTKOJOAQGZHPHQAERBOMXOQSWSGNPPKHRMRZPYSWAXVVFMMEZDZXRWMZINRDEGKWFUIQBJHKLH");
    msg.lbearing = 0.48183549694173444;
    msg.lelevation = 0.43822886361872093;
    msg.bearing = 0.09526506576850702;
    msg.elevation = 0.8761460369786871;
    msg.phi = 0.644188597216203;
    msg.theta = 0.9994931070869382;
    msg.psi = 0.38549681525251733;
    msg.accuracy = 0.12052319254222565;

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
    msg.setTimeStamp(0.6682452347172029);
    msg.setSource(62353U);
    msg.setSourceEntity(59U);
    msg.setDestination(52646U);
    msg.setDestinationEntity(20U);
    msg.target.assign("GFXCJMTXUTTVWAESXUSRTRQQSXUFWYOZE");
    msg.x = 0.01634069158307938;
    msg.y = 0.1288128496620069;
    msg.z = 0.9783162309118231;
    msg.n = 0.47822673409849603;
    msg.e = 0.8949574726438506;
    msg.d = 0.9691049764351976;
    msg.phi = 0.4031231423703934;
    msg.theta = 0.6820139003521872;
    msg.psi = 0.3271314826303766;
    msg.accuracy = 0.02458366334056239;

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
    msg.setTimeStamp(0.3485177784633461);
    msg.setSource(40223U);
    msg.setSourceEntity(158U);
    msg.setDestination(25423U);
    msg.setDestinationEntity(100U);
    msg.target.assign("DPISEWFYJFGBNLDSOMWFTNCUDJMNYYEPKLWEMPVUXVRSXXDBULXVHTJHGLIRCEURKLZHHFRAQXXOHOWHIHECHVLZQTVCBANXFDMCGVIFZUSQRTUWUNBPVKMQBTJEQAYPSQBKNGHRAAKWJSKWYAC");
    msg.x = 0.7430319516415448;
    msg.y = 0.4595950829918505;
    msg.z = 0.30821300128844786;
    msg.n = 0.22435573567124556;
    msg.e = 0.9031941853961054;
    msg.d = 0.07923840487544886;
    msg.phi = 0.2689037554138518;
    msg.theta = 0.3662124148060555;
    msg.psi = 0.6585153888724083;
    msg.accuracy = 0.9797818661244406;

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
    msg.setTimeStamp(0.7595356677804592);
    msg.setSource(16776U);
    msg.setSourceEntity(196U);
    msg.setDestination(604U);
    msg.setDestinationEntity(138U);
    msg.target.assign("DMMMTVXAOPEQGCLBAPOLACUFHEDSIWEVKCDZXKTUEBLBURUKQRHFHLWESGIWJYEBFTSCBHROOHOSNFQEOVDCQPICNNLKSUAGQINWERMRFDDIHKGZTJDGQEEPMZJX");
    msg.x = 0.11878894213586566;
    msg.y = 0.06881005330068113;
    msg.z = 0.21695846047386613;
    msg.n = 0.8283675805264936;
    msg.e = 0.2750675924628957;
    msg.d = 0.4898410477041082;
    msg.phi = 0.7651259083299832;
    msg.theta = 0.3488387169609537;
    msg.psi = 0.027519770585127667;
    msg.accuracy = 0.15372481037993768;

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
    msg.setTimeStamp(0.36434257428312233);
    msg.setSource(30542U);
    msg.setSourceEntity(23U);
    msg.setDestination(29718U);
    msg.setDestinationEntity(214U);
    msg.target.assign("KNMFINAVTNTLZMLOPRPOICEPYRQUPKAQSIGQXNMZHXTSVJXRAUIQYXMSUGVVHEJCAFJZLWBYKIRUIZUSXQRAFBJEXPCDTNIYKNBOQWJMMLPOTFNACGX");
    msg.lat = 0.4097171111938521;
    msg.lon = 0.39527745625576005;
    msg.z_units = 230U;
    msg.z = 0.0044105433657531945;
    msg.accuracy = 0.19954211101550268;

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
    msg.setTimeStamp(0.6165538687771311);
    msg.setSource(38235U);
    msg.setSourceEntity(79U);
    msg.setDestination(41504U);
    msg.setDestinationEntity(43U);
    msg.target.assign("LCTXTOFIYMAWGAGJMQCDTMNKJVFEXHIEHLMEEHKNRRSYDFHHXISPISGJWHKUJZHPSNIPKRGGOFYSVEPZWEHBGISATVIX");
    msg.lat = 0.636240727269378;
    msg.lon = 0.9528436619181107;
    msg.z_units = 161U;
    msg.z = 0.9491240167326047;
    msg.accuracy = 0.23617148175923874;

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
    msg.setTimeStamp(0.9469014840948125);
    msg.setSource(23576U);
    msg.setSourceEntity(250U);
    msg.setDestination(12538U);
    msg.setDestinationEntity(40U);
    msg.target.assign("KUDOTMJRGMMEETZRHZGFQLPGUBKWMWFIYXNXAFITDLFXIFLEZAHMALPCNCPLYAMPDEVTHDTIHGROQMOBJW");
    msg.lat = 0.19265479058375712;
    msg.lon = 0.9907426708716903;
    msg.z_units = 22U;
    msg.z = 0.10040354268704943;
    msg.accuracy = 0.3864469015147026;

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
    msg.setTimeStamp(0.1796330973857907);
    msg.setSource(61561U);
    msg.setSourceEntity(68U);
    msg.setDestination(22901U);
    msg.setDestinationEntity(109U);
    msg.name.assign("PSOTMKOIMJLLUCSJAZANIWYODPSEKQYSGSYZRUUJMQGFODWEJWVHQQBXHKAUVIVTSUZRYRSWPNMAMHYDL");
    msg.lat = 0.11783339515992952;
    msg.lon = 0.8788926812493075;
    msg.z = 0.9992648944128649;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.8493798198271854);
    msg.setSource(43157U);
    msg.setSourceEntity(155U);
    msg.setDestination(16553U);
    msg.setDestinationEntity(188U);
    msg.name.assign("QPLMCWKMAEJRMHUYEZVFXDFXSKPOOCYMRKFQVILOMZUPSELTCJGGRJALZLEDGYVHZNVMBKKBHLGQNBUENBRDTNFZZHMTCR");
    msg.lat = 0.4199791437277366;
    msg.lon = 0.35139129273208214;
    msg.z = 0.8399869772940239;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.43181760268163827);
    msg.setSource(9233U);
    msg.setSourceEntity(140U);
    msg.setDestination(33449U);
    msg.setDestinationEntity(211U);
    msg.name.assign("KWMNLTZRYMSPROFEP");
    msg.lat = 0.8027919805042818;
    msg.lon = 0.709011647469868;
    msg.z = 0.4401558923782549;
    msg.z_units = 149U;

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
    msg.setTimeStamp(0.03831974852022968);
    msg.setSource(44107U);
    msg.setSourceEntity(190U);
    msg.setDestination(27701U);
    msg.setDestinationEntity(94U);
    msg.op = 16U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JOXQFWEYJHJUHDUSSFJXIBAWZHTAMQLSDYAJYDTCWTTNBHTTPRORSECEMIQUXFLZBVLCLNGKAZXSBKCVQLO");
    tmp_msg_0.lat = 0.672495993562766;
    tmp_msg_0.lon = 0.2665159179354689;
    tmp_msg_0.z = 0.18400119982156415;
    tmp_msg_0.z_units = 232U;
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
    msg.setTimeStamp(0.32175689059599377);
    msg.setSource(10671U);
    msg.setSourceEntity(44U);
    msg.setDestination(6714U);
    msg.setDestinationEntity(61U);
    msg.op = 161U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OPUSNJXVZOJNSZDGHIEOAEYLLXDSERIGDNSDBAATFVWETBTZJTUVIFTFAXRBGBSHQTENZVWGCRWTPBOJZCUMRYYRBXXNGYLKEMMFNWLOZRHOTAWKRFPNXGKRMAWCUKPHAVJZZKFSJIJWYWPBVXOEQIYSQCUQVVCCHDHCFINMKCIPIMGQESDQAUGMNHGSZJMFLDKTTVLKYHJAGPBWLMRYXQVDZXCR");
    tmp_msg_0.lat = 0.6673042334136616;
    tmp_msg_0.lon = 0.3047236994825967;
    tmp_msg_0.z = 0.23455203423665394;
    tmp_msg_0.z_units = 45U;
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
    msg.setTimeStamp(0.5001674513580208);
    msg.setSource(405U);
    msg.setSourceEntity(1U);
    msg.setDestination(49879U);
    msg.setDestinationEntity(19U);
    msg.op = 198U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("WAICDLGKJJIGYMWATSHYNUIXJNZFVDRKQGGJZDTWJ");
    tmp_msg_0.lat = 0.05437169764392924;
    tmp_msg_0.lon = 0.9048764348710604;
    tmp_msg_0.z = 0.02033079600655885;
    tmp_msg_0.z_units = 230U;
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
    msg.setTimeStamp(0.6026390407148344);
    msg.setSource(62919U);
    msg.setSourceEntity(142U);
    msg.setDestination(39971U);
    msg.setDestinationEntity(170U);
    msg.value = 0.689920337210604;
    msg.type = 3U;

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
    msg.setTimeStamp(0.7050707022264993);
    msg.setSource(51850U);
    msg.setSourceEntity(248U);
    msg.setDestination(12434U);
    msg.setDestinationEntity(202U);
    msg.value = 0.9588468403990164;
    msg.type = 101U;

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
    msg.setTimeStamp(0.3603613026277933);
    msg.setSource(38484U);
    msg.setSourceEntity(33U);
    msg.setDestination(52446U);
    msg.setDestinationEntity(106U);
    msg.value = 0.8960157914598302;
    msg.type = 50U;

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
    msg.setTimeStamp(0.649300338720361);
    msg.setSource(60164U);
    msg.setSourceEntity(240U);
    msg.setDestination(37480U);
    msg.setDestinationEntity(56U);
    msg.value = 0.639991628333955;

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
    msg.setTimeStamp(0.31487766484792423);
    msg.setSource(32676U);
    msg.setSourceEntity(231U);
    msg.setDestination(4214U);
    msg.setDestinationEntity(53U);
    msg.value = 0.6909696655766933;

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
    msg.setTimeStamp(0.036729712900070655);
    msg.setSource(48398U);
    msg.setSourceEntity(101U);
    msg.setDestination(6727U);
    msg.setDestinationEntity(43U);
    msg.value = 0.8665456178463911;

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
    msg.setTimeStamp(0.33307446704554855);
    msg.setSource(41649U);
    msg.setSourceEntity(62U);
    msg.setDestination(55725U);
    msg.setDestinationEntity(5U);
    msg.timestamp_last_service = 0.6553028872283794;
    msg.time_next_service = 0.8873466090431185;
    msg.time_motor_next_service = 0.4556268954773447;
    msg.time_idle_ground = 0.6162529404064957;
    msg.time_idle_air = 0.2282102800679272;
    msg.time_idle_water = 0.7182809923437943;
    msg.time_idle_underwater = 0.9204106227925157;
    msg.time_idle_unknown = 0.24705403750071742;
    msg.time_motor_ground = 0.9470261307861684;
    msg.time_motor_air = 0.648348080803807;
    msg.time_motor_water = 0.058322822341949854;
    msg.time_motor_underwater = 0.5562841668160027;
    msg.time_motor_unknown = 0.6971492560955999;
    msg.rpm_min = -18922;
    msg.rpm_max = 7241;
    msg.depth_max = 0.1397055693410768;

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
    msg.setTimeStamp(0.7782362951411818);
    msg.setSource(10256U);
    msg.setSourceEntity(231U);
    msg.setDestination(39021U);
    msg.setDestinationEntity(79U);
    msg.timestamp_last_service = 0.21145208405405858;
    msg.time_next_service = 0.5011476179632283;
    msg.time_motor_next_service = 0.02246395021104486;
    msg.time_idle_ground = 0.9267243622379863;
    msg.time_idle_air = 0.5552613789721658;
    msg.time_idle_water = 0.17603058268295135;
    msg.time_idle_underwater = 0.0032515459604421926;
    msg.time_idle_unknown = 0.2770350552531945;
    msg.time_motor_ground = 0.9548227374505758;
    msg.time_motor_air = 0.9901495453648252;
    msg.time_motor_water = 0.9538861728133796;
    msg.time_motor_underwater = 0.8153117484523799;
    msg.time_motor_unknown = 0.35499857608632446;
    msg.rpm_min = -30860;
    msg.rpm_max = -5935;
    msg.depth_max = 0.22036819281861642;

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
    msg.setTimeStamp(0.7867195829692751);
    msg.setSource(53799U);
    msg.setSourceEntity(101U);
    msg.setDestination(40432U);
    msg.setDestinationEntity(195U);
    msg.timestamp_last_service = 0.4650316795044924;
    msg.time_next_service = 0.6174884717302401;
    msg.time_motor_next_service = 0.03682762287440888;
    msg.time_idle_ground = 0.026887236726713448;
    msg.time_idle_air = 0.6811294333311442;
    msg.time_idle_water = 0.8194209163816915;
    msg.time_idle_underwater = 0.5132268244417955;
    msg.time_idle_unknown = 0.31153125219015143;
    msg.time_motor_ground = 0.25794285179488396;
    msg.time_motor_air = 0.16984537850765846;
    msg.time_motor_water = 0.5989120105546939;
    msg.time_motor_underwater = 0.2556856484984823;
    msg.time_motor_unknown = 0.5062267036717261;
    msg.rpm_min = 19933;
    msg.rpm_max = 9988;
    msg.depth_max = 0.27852350362108547;

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
    msg.setTimeStamp(0.8621846795039395);
    msg.setSource(63918U);
    msg.setSourceEntity(43U);
    msg.setDestination(18203U);
    msg.setDestinationEntity(38U);
    msg.severity = 147U;
    msg.text.assign("ZBOGCNNWHUWOVPSYNEWELUHHAAGNTXFCPYHFIDIKSFUYMXWFQXCVDOEYRALNKAGFAMHRAZZQTUNWKGZJOQCNJIQATPCKMINOSVKWFBYVZQQJJNVIOOSCKAUBRCBXDRXSIBNTPPYOOUGBLAYIUFHQVFLMOKGGXHJRXDPYQUGBMKEZMDLIFXZVXML");

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
    msg.setTimeStamp(0.540827744506433);
    msg.setSource(8333U);
    msg.setSourceEntity(151U);
    msg.setDestination(36837U);
    msg.setDestinationEntity(5U);
    msg.severity = 137U;
    msg.text.assign("TAZTYJPANMJJTRUCCUSRIWIICYBMOTZDPDERXPCLUFKGZQIMFCVJOEBONDYOVWHNCYIFSKHZRSABPEBIPHFHINQTATONCNAJQEDLKHCBREDXYMGJLYYPYXHJGRDTXRBMGPBZTABASUWHKBHLPSTWUKFJLMXPUSRXVXAQNISFSIQSUDICSOKDCJDDF");

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
    msg.setTimeStamp(0.10316535428633966);
    msg.setSource(48656U);
    msg.setSourceEntity(47U);
    msg.setDestination(38587U);
    msg.setDestinationEntity(158U);
    msg.severity = 178U;
    msg.text.assign("HCJSEIWOLZDBYZILGLXQXTRGNAWSKNJEDMQXOYJZIDFQNQVWKPDNYWWVRCUBIBCHFCYONJKFRCSKEJDTPJREVNEUMFHGJVLJTGZATHSHVOLTYBOPVFUKTLQQPTFIVMNZASPZFPGGASAXVNOYXZIXCKPWSNLEGHNCYSIUPADORJDYOWUUDOWUWFXCUTBVYQMOHEELRXAZLJGPXR");

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
    msg.setTimeStamp(0.21907619754301055);
    msg.setSource(3122U);
    msg.setSourceEntity(105U);
    msg.setDestination(39976U);
    msg.setDestinationEntity(28U);
    msg.channel = -40;
    msg.value = -680834498;
    msg.gain = 183U;

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
    msg.setTimeStamp(0.1310991027662527);
    msg.setSource(27354U);
    msg.setSourceEntity(132U);
    msg.setDestination(35170U);
    msg.setDestinationEntity(121U);
    msg.channel = -30;
    msg.value = -243999589;
    msg.gain = 200U;

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
    msg.setTimeStamp(0.26711895211798886);
    msg.setSource(7894U);
    msg.setSourceEntity(159U);
    msg.setDestination(29203U);
    msg.setDestinationEntity(26U);
    msg.channel = 77;
    msg.value = 151477399;
    msg.gain = 142U;

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
    msg.setTimeStamp(0.44882464901605656);
    msg.setSource(3855U);
    msg.setSourceEntity(133U);
    msg.setDestination(36685U);
    msg.setDestinationEntity(76U);
    msg.ch01 = 0.06374568438571471;
    msg.ch02 = 0.7834805264602697;
    msg.ch03 = 0.25398619306559256;
    msg.ch04 = 0.7400292616744385;
    msg.ch05 = 0.16267585935446016;
    msg.ch06 = 0.908640834505172;
    msg.ch07 = 0.04081272024026228;
    msg.ch08 = 0.6908451961251565;
    msg.ch09 = 0.3783409410230575;
    msg.ch10 = 0.8038942703289584;
    msg.ch11 = 0.8613595977408679;
    msg.ch12 = 0.0692211063728504;
    msg.ch13 = 0.5258594180036914;
    msg.ch14 = 0.6208384403159407;
    msg.ch15 = 0.8344027053401817;
    msg.ch16 = 0.9864244413443644;

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
    msg.setTimeStamp(0.5937381019449947);
    msg.setSource(18870U);
    msg.setSourceEntity(28U);
    msg.setDestination(43517U);
    msg.setDestinationEntity(179U);
    msg.ch01 = 0.041635559613744544;
    msg.ch02 = 0.8017268418768768;
    msg.ch03 = 0.8515650020068491;
    msg.ch04 = 0.42140597775723243;
    msg.ch05 = 0.1339614035847171;
    msg.ch06 = 0.9913075452865929;
    msg.ch07 = 0.12451404290518564;
    msg.ch08 = 0.898488856816031;
    msg.ch09 = 0.2883512057219514;
    msg.ch10 = 0.01117485504492488;
    msg.ch11 = 0.5011589105412748;
    msg.ch12 = 0.7328566104651509;
    msg.ch13 = 0.8905566453184415;
    msg.ch14 = 0.5523987470215769;
    msg.ch15 = 0.9768061705836304;
    msg.ch16 = 0.2615955813741927;

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
    msg.setTimeStamp(0.22906410715820957);
    msg.setSource(8395U);
    msg.setSourceEntity(158U);
    msg.setDestination(63948U);
    msg.setDestinationEntity(133U);
    msg.ch01 = 0.7361350988238775;
    msg.ch02 = 0.9339019000510639;
    msg.ch03 = 0.5360849012078666;
    msg.ch04 = 0.6458068777619053;
    msg.ch05 = 0.1583290828250694;
    msg.ch06 = 0.24907217188732345;
    msg.ch07 = 0.41233222908877587;
    msg.ch08 = 0.011151315827000019;
    msg.ch09 = 0.3109059075711029;
    msg.ch10 = 0.49082115103046464;
    msg.ch11 = 0.7098154463805457;
    msg.ch12 = 0.42847347536129643;
    msg.ch13 = 0.6638558833929842;
    msg.ch14 = 0.41624558451129456;
    msg.ch15 = 0.5125547214224552;
    msg.ch16 = 0.9348155280542486;

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
    msg.setTimeStamp(0.4955048517220316);
    msg.setSource(16314U);
    msg.setSourceEntity(165U);
    msg.setDestination(53256U);
    msg.setDestinationEntity(149U);
    msg.op = 73U;
    msg.lat = 0.6916754212267994;
    msg.lon = 0.3263062752563787;
    msg.height = 0.6686861794135375;
    msg.depth = 0.8628979014350852;
    msg.alt = 0.8340649443121447;

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
    msg.setTimeStamp(0.9784418718133354);
    msg.setSource(11108U);
    msg.setSourceEntity(203U);
    msg.setDestination(29034U);
    msg.setDestinationEntity(32U);
    msg.op = 51U;
    msg.lat = 0.9387573946431703;
    msg.lon = 0.31315924656100336;
    msg.height = 0.370510026751803;
    msg.depth = 0.04656182881882387;
    msg.alt = 0.865754907505276;

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
    msg.setTimeStamp(0.01656093706122952);
    msg.setSource(28773U);
    msg.setSourceEntity(224U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(243U);
    msg.op = 40U;
    msg.lat = 0.5751029399841924;
    msg.lon = 0.45988161678632233;
    msg.height = 0.28252575449590367;
    msg.depth = 0.6466070169451967;
    msg.alt = 0.5634571431372704;

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
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.6136319559836005);
    msg.setSource(41544U);
    msg.setSourceEntity(249U);
    msg.setDestination(47301U);
    msg.setDestinationEntity(52U);
    msg.nbeams = 118U;
    msg.ncells = 17U;
    msg.coord_sys = 132U;

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
    msg.setTimeStamp(0.31121199942568556);
    msg.setSource(21458U);
    msg.setSourceEntity(201U);
    msg.setDestination(20756U);
    msg.setDestinationEntity(121U);
    msg.nbeams = 161U;
    msg.ncells = 224U;
    msg.coord_sys = 213U;

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
    msg.setTimeStamp(0.44388944427724264);
    msg.setSource(34440U);
    msg.setSourceEntity(12U);
    msg.setDestination(59721U);
    msg.setDestinationEntity(117U);
    msg.nbeams = 153U;
    msg.ncells = 93U;
    msg.coord_sys = 229U;

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
    msg.setTimeStamp(0.26700563428901447);
    msg.setSource(48873U);
    msg.setSourceEntity(217U);
    msg.setDestination(26051U);
    msg.setDestinationEntity(40U);
    msg.cell_position = 0.12821263574796693;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.31863099718626964;
    tmp_msg_0.amp = 0.8593756312421862;
    tmp_msg_0.cor = 217U;
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
    msg.setTimeStamp(0.42286449358884837);
    msg.setSource(53979U);
    msg.setSourceEntity(146U);
    msg.setDestination(36917U);
    msg.setDestinationEntity(0U);
    msg.cell_position = 0.539458532967273;

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
    msg.setTimeStamp(0.6648694189837159);
    msg.setSource(27981U);
    msg.setSourceEntity(147U);
    msg.setDestination(398U);
    msg.setDestinationEntity(131U);
    msg.cell_position = 0.9225695482565864;

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
    msg.setTimeStamp(0.1955725092118823);
    msg.setSource(38492U);
    msg.setSourceEntity(17U);
    msg.setDestination(65519U);
    msg.setDestinationEntity(241U);
    msg.vel = 0.9757303170652585;
    msg.amp = 0.25362177887644255;
    msg.cor = 209U;

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
    msg.setTimeStamp(0.33442533110448003);
    msg.setSource(35754U);
    msg.setSourceEntity(120U);
    msg.setDestination(14786U);
    msg.setDestinationEntity(253U);
    msg.vel = 0.23410218920300319;
    msg.amp = 0.5597613530720439;
    msg.cor = 188U;

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
    msg.setTimeStamp(0.5773023108606015);
    msg.setSource(40453U);
    msg.setSourceEntity(53U);
    msg.setDestination(24344U);
    msg.setDestinationEntity(27U);
    msg.vel = 0.3749593031907714;
    msg.amp = 0.986880832218648;
    msg.cor = 193U;

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
    IMC::GpioState msg;
    msg.setTimeStamp(0.22151605993217915);
    msg.setSource(59553U);
    msg.setSourceEntity(69U);
    msg.setDestination(992U);
    msg.setDestinationEntity(235U);
    msg.name.assign("ANIKVNYZBLEWJUO");
    msg.value = 22U;

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
    msg.setTimeStamp(0.23329033034894842);
    msg.setSource(54149U);
    msg.setSourceEntity(241U);
    msg.setDestination(2216U);
    msg.setDestinationEntity(105U);
    msg.name.assign("ZZOWDSAYQUQMJNTBWWRGTCASMHHDFZCFXACKOVVFPRAZOPCZUUVWFQYITURVSSQHPGBXFAPEOLAXFBHXGIPHDJKYKDDSUPIUGMQUTJQUIGDBSMGJDOVAYCSQNRNLCNXFCLBXBZZHAIZMLFNILTYRSXEEKTUVOCKBHWEYJKECOOXMJYHLTEIJLCJTQKHNL");
    msg.value = 245U;

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
    msg.setTimeStamp(0.3762841350158086);
    msg.setSource(21315U);
    msg.setSourceEntity(11U);
    msg.setDestination(4664U);
    msg.setDestinationEntity(42U);
    msg.name.assign("YSYTHODXPSJFWGPXRWATKYDMGUEZPV");
    msg.value = 139U;

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
    msg.setTimeStamp(0.10048807652693059);
    msg.setSource(5636U);
    msg.setSourceEntity(244U);
    msg.setDestination(14368U);
    msg.setDestinationEntity(254U);
    msg.name.assign("YZUXDXZHVOQKKYMIQIVSWACZLJCSJFQGEBNHERCQHMCEKKRHZYUDFMPGRBNSBITQLUFDYFWGXQOYRZKPFTFQOVNKTUDCSYLAEMANDHUHSMBRXYOXHKIZRWMXZGIOHEWJKJUVESYLWJZJYSFORUKGUI");

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
    msg.setTimeStamp(0.17064537509539557);
    msg.setSource(3460U);
    msg.setSourceEntity(1U);
    msg.setDestination(22213U);
    msg.setDestinationEntity(98U);
    msg.name.assign("XQTNULCSGAKHUKVNXYHZWGVRBUEPKAJJSWEWYHEBVLBHHTDCZXPPIQJFFSARZDZJCOHDUBDY");

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
    msg.setTimeStamp(0.9978839599424008);
    msg.setSource(49005U);
    msg.setSourceEntity(246U);
    msg.setDestination(31101U);
    msg.setDestinationEntity(231U);
    msg.name.assign("ATXYDSBAGPFWTQCGTEDJNCDBNJSGPMXEISXNGSEPLHSUSQHGOTGZVBCQMWLVJDYUSKZVCZRHNOHKTPNOGXBOOACHUVEMYQAQFBWWJSDPLMWTLLBWDYHQZFAAFZQRVYMXIPEBCMEJCOIYQZQTJRSVLECLMLEPRFFKRAGRYYULXVTKBINKYWLWUNMQFBNVIZJOFHJEHXA");

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
    msg.setTimeStamp(0.14908390307508912);
    msg.setSource(23302U);
    msg.setSourceEntity(62U);
    msg.setDestination(49079U);
    msg.setDestinationEntity(242U);
    msg.name.assign("UZDKXBCAWJIGCEMXPMYJBMFQWGHTNECDOHXHQIFZKKWQZLKIXPMQQHCDUBMXYGTURBBTWNJHRIOGTAJEHLYLMGHQWJDPSKEYSOIBNXCTSSYHKPCTDMESJCKURAOZLROLGCZNVNFZIARRYVGHLJJAVAAFPOBIDWSXZBGQFTRQQYASCJUVPLTYSUURBWYLTEDLEOFNVFY");
    msg.value = 184U;

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
    msg.setTimeStamp(0.18935530382483368);
    msg.setSource(8722U);
    msg.setSourceEntity(69U);
    msg.setDestination(41501U);
    msg.setDestinationEntity(165U);
    msg.name.assign("NJBBEMTZYPZXGUCXFRGYIUGKZYDUOSPUZQWPVTNMUUCEGNEZUGGIDPTNKFALOEIYQXCDAYJGEWTYACNYYBFJFXSQYCPMGSCRTIHDEHOJGMVLQMQIBBWNORFJXPWKSUSJRKIMNZPWUGLRPFBCXWVUVDASTHLQJDHLCHHMERATWQSSBSBDHVTZJKJOWFMVKFEXAXRAOOVXKNWYOIVAVKLIEHHRADVKXOHBQ");
    msg.value = 169U;

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
    msg.setTimeStamp(0.30606353735895175);
    msg.setSource(65144U);
    msg.setSourceEntity(12U);
    msg.setDestination(58919U);
    msg.setDestinationEntity(129U);
    msg.name.assign("AKKDSGIKLTQBHQRFSWZPWRMKFPYZBWJILEHXKVQXUOOKBWUHMEGLSSLVDLXCOUCRBNXKUXGEJIAT");
    msg.value = 33U;

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
    msg.setTimeStamp(0.34269848917921075);
    msg.setSource(49337U);
    msg.setSourceEntity(224U);
    msg.setDestination(36747U);
    msg.setDestinationEntity(215U);
    msg.value = 0.482988070180573;

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
    msg.setTimeStamp(0.33133652119735413);
    msg.setSource(61432U);
    msg.setSourceEntity(138U);
    msg.setDestination(61716U);
    msg.setDestinationEntity(25U);
    msg.value = 0.8439628861445434;

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
    msg.setTimeStamp(0.15578666186900103);
    msg.setSource(21781U);
    msg.setSourceEntity(232U);
    msg.setDestination(10972U);
    msg.setDestinationEntity(221U);
    msg.value = 0.06183552518960145;

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
    msg.setTimeStamp(0.17660814737843666);
    msg.setSource(23758U);
    msg.setSourceEntity(189U);
    msg.setDestination(38003U);
    msg.setDestinationEntity(4U);
    msg.value = 0.9167349363210913;

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
    msg.setTimeStamp(0.33777305485774567);
    msg.setSource(55213U);
    msg.setSourceEntity(81U);
    msg.setDestination(15758U);
    msg.setDestinationEntity(105U);
    msg.value = 0.08309019299147413;

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
    msg.setTimeStamp(0.6109890701677351);
    msg.setSource(34919U);
    msg.setSourceEntity(120U);
    msg.setDestination(29408U);
    msg.setDestinationEntity(247U);
    msg.value = 0.12297053785630074;

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
    msg.setTimeStamp(0.06608701366593361);
    msg.setSource(15453U);
    msg.setSourceEntity(177U);
    msg.setDestination(6861U);
    msg.setDestinationEntity(254U);
    msg.value = 0.2061514026729614;

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
    msg.setTimeStamp(0.3179196806634299);
    msg.setSource(56747U);
    msg.setSourceEntity(62U);
    msg.setDestination(38012U);
    msg.setDestinationEntity(39U);
    msg.value = 0.5922021935362823;

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
    msg.setTimeStamp(0.1122670968871533);
    msg.setSource(13272U);
    msg.setSourceEntity(115U);
    msg.setDestination(54851U);
    msg.setDestinationEntity(136U);
    msg.value = 0.8403270487968076;

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
    msg.setTimeStamp(0.3000526669371518);
    msg.setSource(17702U);
    msg.setSourceEntity(55U);
    msg.setDestination(40798U);
    msg.setDestinationEntity(2U);
    msg.restriction = 135U;
    msg.reason.assign("WFQGHFUFGA");

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
    msg.setTimeStamp(0.2437306049773471);
    msg.setSource(37564U);
    msg.setSourceEntity(139U);
    msg.setDestination(16514U);
    msg.setDestinationEntity(86U);
    msg.restriction = 201U;
    msg.reason.assign("QHKJMTPCXDKVMSLVQZWOEGLBNRZMPHEOUOMNAUAAOHVEDWFOUTTYQYSLJFYRANFIYUWMEYIVKXHPFCGRFEWOFCXMJSSEZQQEWERXUGOPLLBYWQUDBMWKTZGWCHUSFNIVPVCGIJMNDUSRZJTJZCBPIQHXYZAZPUDKPRFBRXQRGDYBSSKLCVZYNBSRETHABOXTJFIPTGNIIHOBLANJJTRDVKCAGLKDMTAKOQDAHVIGLIXQBSJFEYGMXWDKP");

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
    msg.setTimeStamp(0.24412944536958758);
    msg.setSource(55282U);
    msg.setSourceEntity(211U);
    msg.setDestination(51288U);
    msg.setDestinationEntity(195U);
    msg.restriction = 250U;
    msg.reason.assign("RPFOWDFDSXCCWUONNQJYLWUVAMWDTIORKHZLMLWXZBXQTKQOMEAXSJBWAAIJBYZPRPFYHAJPKZY");

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
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.7504905548859563);
    msg.setSource(38319U);
    msg.setSourceEntity(241U);
    msg.setDestination(13133U);
    msg.setDestinationEntity(86U);
    msg.op = 126U;
    msg.version.assign("GEYEBOBSBKPHJCZOLKFJPWOJLRCGIDDRYOFYQMJRTAQQIXXBAVPITHIACMGR");
    msg.description.assign("FGAISJQUNBKQXTTWDCKTHXDRVQMLXFDSKHRUWYT");

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
    msg.setTimeStamp(0.5943373029513962);
    msg.setSource(17880U);
    msg.setSourceEntity(203U);
    msg.setDestination(48804U);
    msg.setDestinationEntity(158U);
    msg.op = 168U;
    msg.version.assign("EVAFSZEQGQEKIZBGTBMXKWJYNZODYFUZQRBZMLVPFDRJMRGAJKWLKHHKBOOMN");
    msg.description.assign("OSFZNBJKFHRGGDWIKLLFVOCBBZREUUIXYANVKCJIPDHTDMNLNEJTSGELILDKBUDUKRWQZHRCAWCFWPJRXWSJUAMADAATWLOAPVPRTOITNBSFAFKYSPXRYQOUZJPRLQZNBEZITVBYFYMEISSGYKUREYXTFJVCEXQVOCNVHTTOC");

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
    msg.setTimeStamp(0.4241760858647964);
    msg.setSource(47837U);
    msg.setSourceEntity(84U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(190U);
    msg.op = 201U;
    msg.version.assign("KYCWEZDZNJHPDDRCAPIJAUTQTPQXEHOACTBJNUEISOSUBGQPJRGUCZKZXXWWXIGYLLXDLEMCFSSXXMIQ");
    msg.description.assign("JKTAPPPMTOXOKPXBLRFHLZAWFQBYCUOCAWNKSWVIXQJVRNWMPKYVHZPIYUHNZSOURYAPUFECJWOHLJLZFSDYCGPMDHLCKVUPGCQLXWXWGEHMXMLKTBVOVYIDQEFDZFXIQHMHBBNEFGGCMJGEDGIJCAKQYVPBHREGMSQCOGSXATOYSNIJIDAXFTNWIZDJZBWVNWLZBVERKATRXCTNJNZREUO");

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
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.9525238643654026);
    msg.setSource(19837U);
    msg.setSourceEntity(194U);
    msg.setDestination(9975U);
    msg.setDestinationEntity(66U);
    msg.op = 132U;
    msg.request_id = 4049457067U;
    msg.entity_name.assign("AGGWCWBBAJHTKPSHKYCLIMMYEFJTMAPMUCQLLPHMKXRCOUQVIFXNIZUSUVAIYRNPWNDWVYSOQFMBNKRDIJDRDAVXMRQJPWREHNFBIHKUFESFTSHUGJSURJNKXPDYYEIZKCYOQVPZODNFUSYEJMLEQWEUXDZSGTQVBTCBIKCAHDTLTWWSXALDJYFONTGSGXZMZTVQWFXCBVIKJBRLZBGULNYHCVXAELBKVPOEOQFLOZHNGQJPWIRAOTGZGDO");

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
    msg.setTimeStamp(0.9123048665668313);
    msg.setSource(46424U);
    msg.setSourceEntity(229U);
    msg.setDestination(1738U);
    msg.setDestinationEntity(46U);
    msg.op = 197U;
    msg.request_id = 3919680151U;
    msg.entity_name.assign("OSPFDGKVMQDCQIAGPWVWSOPMMCLQPHEPGAIJUUAKOWKFHSSAJMQGQCMDRUYVOYIFHEYIOHXGUAHLXHHBCGWRTOSLA");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MREYMBCMHWDKECONMWUPNQDYLLRBHGEOWSSXZIQBNDILVTHTNOMMFNKVPXUGHYLNFEYGSURPSVFZGSVTETUNOEIHMREXT");
    tmp_msg_0.type = 102U;
    tmp_msg_0.default_value.assign("NHLJTGCSFUMEJYMVIRKVAWJOQ");
    tmp_msg_0.units.assign("NOBFRGPKYLJRKDHWMNALFTHXXLXYJCSCDACQLRTXPPFASKVUYVVXFXFMLEIGCGYOKIDEUVJQWYMAOJCZEZHMPNLRUCOHTBHFZPIOXTBPJRUSPNDWVEMVZHA");
    tmp_msg_0.description.assign("XCQDBQNCHBDMXRLIIMOGTNEXPCTUMGNSJRPOSKUUFIOVXVBVUAGTGFQQJTRWRZFZUYJNDYSHEXKIVLXYGLJGUYLKPARZGBXAGZHLFSNLPPEDNBILIZRPXMZVESYTVBDFQN");
    tmp_msg_0.values_list.assign("DEFSAKMRGYJELDUGJBQYZWIQCRKICOLWMMDENMCELAFTFPKHEOFOWWTVASORRFABOCQLKBTUTQHZQGQJEVIZHZZSOCNJXGYAXHSOWMOYFPLDRDNEHQDLYIKPSDBPGXHLMDNGZHRCZEJZKNJWATDFZA");
    tmp_msg_0.min_value = 0.5108171175374737;
    tmp_msg_0.max_value = 0.17854271961299917;
    tmp_msg_0.list_min_size = 236U;
    tmp_msg_0.list_max_size = 33U;
    tmp_msg_0.visibility = 178U;
    tmp_msg_0.scope = 215U;
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8263615976953836);
    msg.setSource(42744U);
    msg.setSourceEntity(251U);
    msg.setDestination(24061U);
    msg.setDestinationEntity(24U);
    msg.op = 174U;
    msg.request_id = 1444973241U;
    msg.entity_name.assign("RHVXVZDZFCFPTHMKTEUQHWZBMZWWGWXRPKAPEPUAPDXXVVMKKTIOAJCOHLLWGQYAGVDIENHWPIENBSQJURMRYYACGFRYLEPGEUYYIQGWKNGKUXPDONAFAOFTBWULSSMBMCNJLTZIFZODWPBDINOQJDGGWASIZOSCRCTSVSCQQQEKSTNEKJCFEBDZILMZX");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HPUJQJLNOOHULIMZDVESPURWQBNQPWEKPCALMIOTAPGPROYRAOVRZJKHDRCLKKXFVCNIWHAASGTKARBWCYWDYRGDIUNQJEMIXZMUVVZGTDSXFXEYGLQTFWUQOHYYD");
    tmp_msg_0.type = 76U;
    tmp_msg_0.default_value.assign("PNKGWIKHCMUMOULBQZHDSUXVQJJZYRFVHYTMSOVLXREVMUCXAZQIKIDGSEROVBVVKNIYFSZBJAVQNONLKTJNRBSLFDPSWZMLXOGWWHYCEJANXORYBALHHNPIPPCCFDOEFYBUYGCDSFZQDATBMERNWP");
    tmp_msg_0.units.assign("JJFGRNZSFDPJLJKOSTCUZLNIWAZQTMNUYQEWZCDWZOQSVCKYYBJHLBEBCGNSMGYZSMQHJSXGHXDYUXXLAAGRLURKTAFTSNXRQ");
    tmp_msg_0.description.assign("KQPBFRTZIECMXUCDFRPHICLNOFPKPVAENSPVDRZUAYCDXDTWQIEZMMDCZHLUKBHGJIVBNXLSJYMLTZNNHCOAEFYWKDXGUVDNRVLCGTGPQVQIEWEPOWUSNERPARSOXIQBQTUGWMVIAOZQZBTXVIDEYSLEJSSTRZFJBSQKYWMWJFJPXEUMVJNLQJDAGTMTCJPONOWRRRBYNHGKOUXTFC");
    tmp_msg_0.values_list.assign("EZYSOZPZCLUPENKSBDAQDOYVMBSEHOGXVQFZTZUTVWWEIFVFLJDWQGMKJLRFWMRHIQRZLKLNIMFCHHGMGDVESYRNWCQB");
    tmp_msg_0.min_value = 0.5667816125622229;
    tmp_msg_0.max_value = 0.6154783344674878;
    tmp_msg_0.list_min_size = 9U;
    tmp_msg_0.list_max_size = 167U;
    tmp_msg_0.visibility = 214U;
    tmp_msg_0.scope = 115U;
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
    msg.setTimeStamp(0.9302441599243828);
    msg.setSource(43591U);
    msg.setSourceEntity(234U);
    msg.setDestination(10040U);
    msg.setDestinationEntity(209U);
    msg.name.assign("VYXHFGDHTQREOLCIXOHXGAZPLJNDTMKMUQQRBKLQTURDAWNJHGTMGYH");
    msg.type = 212U;
    msg.default_value.assign("JVDWPCWYSZPQLMFQIZMGMKMBDTQPGJOMPAXFBDZMTPGWEXUIBVCQRXUAFRWIUOGLLEQNUTNOCKAKKEHEPJANXLBBODETMTWUKVISAYHVRZJTCISFOVTOSKVCWPBXOSGMDQNGDBNZBRTYVCWAVRSLCESDOFLLZYGHJBIZQKTUCAEFVIZEKYFJCXSYJUNINPQLHHWLYYPHM");
    msg.units.assign("QEXNMRTIDDTBSQMCOOKIXGVHKHJVUPSSFCUOCWVARXEGPFFBIHFBNLGQDCPRWMLJEXIHYADWLBQMWEYRYWCGUUCZRYOZTNLUJQSXJKAPXAEWZPVJG");
    msg.description.assign("DVBNMIKMEXTOHNXBWVNWABYHNUQFSPEKRPFTLHPFQSRQCMDWVKPWHVMSPQOAIOLLCOSWPRDYXXKZDLIJIMQGRRMSWMZOVDFBZUDPLLRGJJGYEQFTMQNTJGUPEGGFLHYENWURYADAXAEUGGSUCTCWITCWUJKNOQTUDVKPCHHXCZYSBKTYZCEXFYAKYGARHCRLKCJOAJBAD");
    msg.values_list.assign("ECJKIAKOMQRPCEQHCBPZHMUTLT");
    msg.min_value = 0.6716718284484059;
    msg.max_value = 0.5596504007572244;
    msg.list_min_size = 75U;
    msg.list_max_size = 79U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("RZJZPOEBWTWLBOUYILLOYSBYDPBQMWRSBJHKWZVAOFSUYQZMXLHBGGTRSMPHUBZOUEITSADAWCCXFEBAQUJLDDCHHSQBOHIVRSVAQGMPJTVCHBFHKEUGZNKGCGWOUYKRZRTHIPQFKQLPFEFXQRXVNROYAMWXDMCRIKTNYPJOUKEKWTIMLXVJPCJNWGUFENFJMTFQCYSKKDTORCAIGLIIUXHTWXMZXDSNFNIAYZPNEAVCALJVNSPLDYE");
    tmp_msg_0.value.assign("QIRABCIDYRAGVJVEEQTAFMLZXMSKBHCHHHLOVYMDDRHFOSUWAJCLZXIYDJEKPNFXGBB");
    tmp_msg_0.values_list.assign("QLYBMLPONMIJBUAUOEBTURIFMPTNSHKCOWLMYQPXNRBDGOTWQCJHPDCBYLKXUKBVQBHSUINXMRNXMLPGFSJQGWFYREBAVEYQHTECPRASYAJUFVBSDFGAPCHHTHIOXKUKADJWGIZVTAVAQDQJDSCDQIXWOVEAKCXOGMLFSJEFZMTTKEOZENVCXFCDDZYYZPHIWLRDOILZWIWAPEZRWUSUKJFVGLVBXIRMKN");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 142U;
    msg.scope = 168U;

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
    msg.setTimeStamp(0.31743402374002916);
    msg.setSource(8041U);
    msg.setSourceEntity(115U);
    msg.setDestination(43397U);
    msg.setDestinationEntity(112U);
    msg.name.assign("PVBWRQHJISFPBDXUCJNOFFXGVKQOCWCTLVYLBRMNUMDNVXBESODLYMEPQHPMTSWSMQGAAIORHSHGIOZSHVKSVGNZWJYMPFDMGJKTUHZYGDLXRWSQTBYJZORTWGNOHKWSULYLKFGPSPIZQRUMOBITCKJAQPZQAUFIBTCGIWEJMZTLZNIKROAFAYUYQNOBECDRXBCL");
    msg.type = 243U;
    msg.default_value.assign("YVSHXIDKEHHZLDJNPLCSCXJZTURGMVWEOUBIFFJVNYVFEEPURWPHEXQIMCGFBCQOATRVQIRTXZGIFDUTSWYKOTAHLAWKOYMXWBOMMDKSVMDTXAQJBYANWJIKDXBPAKDUGGLGFMAKYWLWZH");
    msg.units.assign("CNZIXOWDMZJWOWKDEHFAEVGAYGFQPTPLSJNBFFNGCBIBNNXFANCZRKRIMISOQISWWALRBEURPAXOKGHPEKLIKUZITOLDERMRMYYAHMBXHPYNTSHZPVVFVIIYUTWFXJQVHUJOZXMCPXGQFUGTWCADKUEZXUHYTVBQAETJCBXUFKJOYRGILFJSWHPOJRLHRDGVUDCMNUBVQGPHTLXODQWSTLCMQCQSLYYOEANEBZK");
    msg.description.assign("YYRGSXSCGRBRZDHTYTXVIOAPJTUEWHNYSYQTVZBOQBIKKCAKJUZUNRDVEPMIZMZQCVHGLGIXQTBNLYAPJNHSVSUBLKZRLFIANQEOTSURFBWXULTPGDXHJABOMJKCONAVMQQXPIWJVEDXLRIUCZPOKHOAWNTHOCAWPFQXWXUPLFGVYBDFJMQYREEDZNFMIHDWPBNOKAPNULWGHDVROZZK");
    msg.values_list.assign("YBNUSYOITDOCMKQIJGFZTZSXYBDEUPQTZCEUDPCDLBFHRWJKQYHLYAIVTARHXEHVJNGCTZMRNVWLHDGIPSFXKYCDKUNHZRTSIYGVVOGZORGGHKGNNMOVROCLMQTXWLKBAIMGEBVBNPKIILCPFCDTZBUBWSMPQFWUMXTAUHYDWRXJBUEOREAJZLARNKEGJFWMMLJQCDDUESISANKLELQQXXVIVJKYANSMSZZOHF");
    msg.min_value = 0.16823514338095258;
    msg.max_value = 0.07712692824765499;
    msg.list_min_size = 57U;
    msg.list_max_size = 99U;
    msg.visibility = 225U;
    msg.scope = 106U;

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
    msg.setTimeStamp(0.8662938183584842);
    msg.setSource(129U);
    msg.setSourceEntity(104U);
    msg.setDestination(38898U);
    msg.setDestinationEntity(123U);
    msg.name.assign("IFGEBHEBDFTFPZV");
    msg.type = 216U;
    msg.default_value.assign("LEJOTYDXVBOLCRZYMWCEWYQIXXCAYHRDPEWEIUQZGXSJRNNLEUYAEZUKWYMHDSSKPEZBWROXTBZUGBAAXQZRKMMDYPRQDSFXZAMJGIODBZNVJIMBEOAOQIDGWYVKJEQSFRVNJXUEISTNHAQHXSQZCRTRKVNUPLSIJBWCGNHVCHWSFTYFUALANWJJIIGLKTG");
    msg.units.assign("MRERWBQYUMNYRDBMLFZTSSHDTOVSJPHAEGWFOFBRAPJTFGRKIGHYEMRLCZCGWOAXYYNLHUKCVCGBZPVHXIGJFBYFTWTWKCSJWLKNBDIWLCPONFPXSZKZAVOJEMNJGXUTKSMSUXCJOEQZRQHAOLIZTDQHXQARXTCAKKZOLQVZQKXPG");
    msg.description.assign("FPIICKOHYD");
    msg.values_list.assign("XKYFYDHNYJONPRTRBX");
    msg.min_value = 0.31080615854775884;
    msg.max_value = 0.7433834482945102;
    msg.list_min_size = 225U;
    msg.list_max_size = 3U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("XLJOFLXRFKARFUABCVPKCWVZTIPMYMLHVIACOLRWLBCLIRIFQARWGHNMEZKGTHGMZUBLLESOO");
    tmp_msg_0.value.assign("FUYPSQVUNDFLJPYZMREUFKQUBIZEPWDLTVNWNHDOMTNFBLFEOOOMRWSXCGOVLXRTGPWJWSVCLQHJUPSLQJTUTFJXIEYMRVKXXBHIOPAFPGXLNPJMYHHDYZAHTTCLWQIRRYERBQKMQI");
    tmp_msg_0.values_list.assign("FKUZVWAKRTYVLLVTBINGAKXOJAMNTRTBQSCKNBMPUWGZEALLUDGSHPXDVPIJBTJHCYDOGUEHHQITLBMFEPCUZWCSVAFCEI");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 158U;
    msg.scope = 120U;

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
    msg.setTimeStamp(0.09585258757671622);
    msg.setSource(22781U);
    msg.setSourceEntity(45U);
    msg.setDestination(24268U);
    msg.setDestinationEntity(208U);
    msg.param.assign("IEBTMNMDGYFMLTUMIGNASLXZT");
    msg.value.assign("RGYZWYKDGBIXEONILDEEIUOTODHWAMKDFRHMJZYHHWMEWHIVORPKQVGTXCJLMHJKZYWMFUJAOTJHBPVVGAFKUKUHGRSGINZJALPGCICCFNTKFWNHMUJALEUQLY");
    msg.values_list.assign("GRZOWEBCNGPGYWERKRURCELIAKOCVVQNPJIQRHBYEJOEYPQCMFRDDXWVDJWUTBIMNMCFQZRBXYUAGQLZAGSNTXS");

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
    msg.setTimeStamp(0.43892226586329897);
    msg.setSource(5107U);
    msg.setSourceEntity(216U);
    msg.setDestination(43620U);
    msg.setDestinationEntity(238U);
    msg.param.assign("GCEYQURPKWJKTNLAUMXMZVBZWBOVKFOLSFODEWUYWQCETZNUEFBIDKXEIRKKYQXGOHWMHJRXYSFGTUGJRBYIP");
    msg.value.assign("ALWVOIEKUJRUMKGSYEDUJJOCRWPJPTLMOYFBANYGADQSQERDZDAFJPXYZMMVFGXRWIVEGNZDTBMPHBJNHBYCKXKGITMFYZWIPOMNVRVKCUHFKVPGDUZRIQMSTOXAYLCXINQVLAIGBHTWVNHKREXBGLEZOOZWHSUMUSKRTTWDJGHCHAZSOIHZFVJQULWECDFKTSSBWQNSKPULPPEWYBCYLALQSJTPICOENFDXTQ");
    msg.values_list.assign("ALPXTIQOMULUNBFEJZZKTECHBORKCWKYPPLPARNSUOXDDMCBLLMBZIGYQDBZWRFXPAJTHSCVLZTBKTCURVQNKRVASVSIPFMYNXYFMABUICZHJDMPXOKGELDSMGIZEMGGSBDPJJKASNKVIHYEZCWEPIPQOKWEUGVVQMUYFRENSDJNBHHNDALXVACWLIATTHCBOOUFQWUFHJJVXQTDRYGXCRUJZXIQGEEAVNFLYGZFOWWI");

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
    msg.setTimeStamp(0.3737065074657182);
    msg.setSource(49566U);
    msg.setSourceEntity(187U);
    msg.setDestination(29426U);
    msg.setDestinationEntity(76U);
    msg.param.assign("GLJLZESSKQNJQCGIBIIKFWTOPDUPZECYPFWXZHNBJMBWERVCXRBWTMVEGFKIIOZEMYUXDMNDHEAXXPIPJFBJMTCKGYTGWSGTSAAFDBMAGSLIHSEAJOLXKRUWXLVWEDUZZMUDNHNECBVXYXIZOYCLKRZCNRVZTCWQJVYSIWHSGWMUPCYOQGJRHOQJCBUAMLDXVHKNTKVDJKVISHYFRAQDNVTMPNYOFAQLAQQOOUBPPTLSNAUZTRQYROBFHEHG");
    msg.value.assign("JGVPWEMJTLSFDPVAWFSQHGBDWWKEOLWIDEUSHNJLLTURQQCHVSNXLEUOOZDZANOALRSMBYOXZHVOWGLUHMKMUKEAWSZCFAXIQHCXFJVAYUHNAPPUXSUTTDVCVBHKOMJW");
    msg.values_list.assign("FLYJVQPEDATDKVENCSKPFCVNALZIVGZSXCRTRQMXTYMGBJKAMNDEHWVBQIHUGNHGVOJAXGXJLEHYBDHMT");

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
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.45953555208660557);
    msg.setSource(46901U);
    msg.setSourceEntity(129U);
    msg.setDestination(35313U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8952356849460865;

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
    msg.setTimeStamp(0.6206763576964768);
    msg.setSource(20945U);
    msg.setSourceEntity(166U);
    msg.setDestination(41893U);
    msg.setDestinationEntity(163U);
    msg.value = 0.8645094142208123;

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
    msg.setTimeStamp(0.5012999663447255);
    msg.setSource(54777U);
    msg.setSourceEntity(102U);
    msg.setDestination(52383U);
    msg.setDestinationEntity(189U);
    msg.value = 0.4105996356693167;

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
